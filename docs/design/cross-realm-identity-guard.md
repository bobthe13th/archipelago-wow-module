# Cross-realm / cross-run identity guard — design spec

Status: **design only**. Nothing in this document has been implemented. No code
change, migration, or submodule bump should be made from this spec without a
separate, explicit go-ahead.

## 1. Problem

`ArchipelagoRealmState` (`src/ArchipelagoRealmState.h`/`.cpp`) is the single
in-memory + DB-backed cache of every piece of AP-earned realm progress: level
cap, unlocked instances/gates, sent location checks, per-slot/per-player check
totals, goal-complete flag, DeathLink/CatchUp/Zone-Leveler config mirrors, etc.
It is loaded once at world startup from a **singleton row**:

```
SELECT level_cap, dark_portal_unlocked, northrend_passage_unlocked, goal_complete
FROM archipelago_realm_state WHERE id = 1
```

(`ArchipelagoRealmState.cpp:20`, mirrored by `archipelago_unlocks`,
`archipelago_slot_totals`, `archipelago_check_attribution`, all keyed the same
way — no seed/room/session identity anywhere in the schema).

Separately, nothing in `APProtocol.h`/`APProtocol.cpp`/`APClient.cpp` currently
reads or stores the AP server's own seed identity. `ConnectPacketOptions`
(`APProtocol.h:28`) only carries *outgoing* fields (`game`, `slotName`,
`password`, `uuid`, `itemsHandling`). `ServerMessageType::RoomInfo` and
`::Connected` are dispatched (`APProtocol.h:16-17`) but neither handler
extracts the real Archipelago protocol's `seed_name` (present on `RoomInfo`)
or `team`/`slot` (present on `Connected`). The header comment on
`ArchipelagoRealmState` explicitly frames the model as "one realm = one AP
slot" — the architecture assumes a stable 1:1 binding between a worldserver's
characters DB and one AP seed/slot, but nothing enforces or even checks that
assumption at runtime.

**Consequence:** the realm-state row, and everything derived from it, will
silently carry forward across a change of AP seed, AP slot, or AP room if the
characters DB isn't wiped in lockstep with the AP-side reseed. There is
currently no code path that would notice, let alone warn about, this
mismatch.

## 2. Concrete scenarios this guard must catch

1. **Operator reseeds without wiping character DB.** A new multiworld seed is
   generated (e.g. via the "one-click refresh" workflow requested in the same
   testing round) but an old `archipelago_realm_state` row survives — the
   realm boots already holding unlocks/level-cap/goal-complete state that
   belongs to the *previous* playthrough, not the new one.
2. **Character DB restored from backup onto a realm now pointed at a
   different/newer seed.** Same failure mode as #1, triggered by a restore
   instead of a fresh wipe.
3. **`worldserver.conf`'s AP connection settings (host/port/slot name) are
   repointed at a different room or a different slot within the same room**
   (operator error, copy-paste from another environment) while the
   characters DB is untouched — the realm now reports/receives checks against
   the wrong AP session entirely.
4. **Two independently-run realms share config or DB tooling** (e.g. a
   staging clone of a live realm) and one is pointed at the other's seed by
   mistake — cross-run contamination in both directions (stale progress
   applied locally, and — via `.ap` leaderboard / check attribution — locally
   observed check activity misattributed to the wrong seed's slot roster).

The common thread: **the realm's local persisted state and the AP server's
own idea of "which seed/slot is this" can silently diverge, and today nothing
detects it.**

## 3. Design

### 3.1 Identity marker

Capture the AP protocol's `seed_name` string from the `RoomInfo` message (the
first message the server sends after websocket connect, before any
`Connect` packet is even sent) as the primary identity marker. `RoomInfo` is
the right message to key on: it is authoritative, present before we've
authenticated as any particular slot, and every real AP seed carries a
seed_name that is effectively unique per generation (per project convention;
Archipelago's own client tooling already treats seed_name as *the* mismatch
signal for "wrong save file"/"wrong seed" checks).

Secondary marker (defense in depth, not a replacement): the slot name we
successfully connected as, taken from our own outgoing `ConnectPacketOptions.slotName`
at the moment `Connected` (not `ConnectionRefused`) comes back. This catches
scenario #3 (same seed, wrong slot) which a seed_name-only check would miss.

### 3.2 Storage

Add two nullable columns to `archipelago_realm_state` (single row, `id = 1`,
matching every other field on that table):

- `bound_seed_name VARCHAR(255) NULL`
- `bound_slot_name VARCHAR(255) NULL`

`NULL` on both means "never successfully bound to any seed" — the bootstrap
state for a brand-new realm.

No new table is needed: this identity is exactly as realm-wide/singleton as
every other field already on this table, and reusing the existing
load-once-at-startup/update-on-write pattern
(`ArchipelagoRealmState::Load()` / the `UPDATE archipelago_realm_state SET ...
WHERE id = 1` call sites) keeps the guard consistent with the rest of the
class instead of inventing a second persistence mechanism.

### 3.3 Connect-time check flow

Hook point: right after `RoomInfo` is received and parsed (before we send our
own `Connect` packet), and again right after a successful `Connected` (as
today's `onConnected` callback fires, `APProtocol.h:79`).

```
On RoomInfo received, seed_name = X:
  if bound_seed_name is NULL:
      # first-ever real connect for this realm
      store bound_seed_name = X   (bound_slot_name stays NULL until Connected)
      LOG_INFO: "Archipelago: binding this realm to seed '{X}' (first connect)"
      proceed normally
  elif bound_seed_name == X:
      proceed normally (silent — this is the 99% steady-state path)
  else:
      MISMATCH — do not proceed normally (see 3.4)

On Connected received, slot_name = Y (only reached if RoomInfo check passed):
  if bound_slot_name is NULL:
      store bound_slot_name = Y
  elif bound_slot_name == Y:
      proceed normally
  else:
      MISMATCH — same handling as seed mismatch (see 3.4)
```

### 3.4 Mismatch handling — fail loud, fail closed

On any mismatch:

- `LOG_ERROR` at the top severity this module uses anywhere, with both the
  stored and the newly-observed identity values verbatim, e.g.:
  `"Archipelago: REALM IDENTITY MISMATCH — this realm's persisted progress is
  bound to seed '{bound}' but the connected AP server reports seed '{seen}'.
  Refusing to apply cached realm state. See docs/design/cross-realm-identity-guard.md."`
- Force `ArchipelagoRealmState::IsEnabled()` to `false` for the remainder of
  the process, **regardless of `Archipelago.Enabled` in worldserver.conf** —
  reusing the exact same kill-switch the header comment already describes as
  making "every gating script... behave as if this module does not exist at
  all". This is the cheapest possible fail-closed behavior: it's an existing,
  already-audited code path, not a new one.
- Do **not** auto-correct (do not silently overwrite `bound_seed_name` to the
  new value) — that would turn a loud warning into a silent identity swap on
  the very next restart, defeating the guard.
- Recovery is a deliberate operator action, not automatic: either (a) a `.ap`
  GM subcommand that explicitly re-binds identity (e.g.
  `.ap admin rebind-seed`, gated the same way other destructive `.ap admin`
  subcommands are), or (b) clearing `bound_seed_name`/`bound_slot_name`
  directly via SQL as part of a deliberate reseed procedure. Either path is an
  explicit, auditable action — never a side effect of just reconnecting.

This means a legitimate reseed workflow (including the "one-click refresh"
script requested separately) **must** include an explicit identity-reset step
against `archipelago_realm_state` alongside whatever else it wipes — this
spec's guard is only correct if that workflow treats identity reset as a
first-class, deliberate part of "reset the realm," not an incidental side
effect of truncating other tables.

### 3.5 Why fail-closed instead of warn-and-continue

The explicit ask was "loud warning on mismatch," and a warn-only design is
simpler to implement. Recommending fail-closed anyway because the actual
failure mode here is silent *data* contamination (stale unlocks, stale goal
state, cross-seed leaderboard attribution) — a warning a server operator
doesn't immediately see in a scrollback (worldserver logs are not usually
watched live) does nothing to stop gameplay-visible corruption from
happening in the same session. Fail-closed converts "might get missed in
logs" into "the module visibly stops working, someone notices immediately."
This is the one point in this spec most worth the user's explicit sign-off
before implementation, since it changes operational behavior (a botched
reconnect now takes the whole module offline) rather than just adding a log
line.

## 4. Integration points (for a future implementation pass, not now)

- `APProtocol.h`/`.cpp`: extract `seed_name` from `RoomInfo`'s JSON payload;
  extract slot identity from `Connected`'s payload. Both currently parsed
  only far enough to detect message type, per the fork research above.
- `ArchipelagoRealmState.h`/`.cpp`: add `GetBoundSeedName()`/
  `SetBoundSeedName()`, `GetBoundSlotName()`/`SetBoundSlotName()`, following
  the exact getter/setter + `UPDATE ... WHERE id = 1` convention already used
  by every other field on this class.
- `ArchipelagoWorldScript.cpp`: the connect-flow orchestration point (already
  owns `OnStartup`/`OnUpdate` and the existing `IsEnabled()` gating) is the
  natural place to call the new compare-and-decide logic described in 3.3/3.4,
  immediately after each `RoomInfo`/`Connected` callback fires.
- A new `pending_db_characters` migration adding the two nullable columns to
  `archipelago_realm_state`.
- A new manual verification checklist under `docs/testing/`, following the
  existing convention (`docs/testing/m4.13-manual-verification-checklist.md`
  et al.), covering: first-connect bootstrap, steady-state reconnect (no
  warning), seed mismatch (module disables + logs), slot mismatch (same), and
  the deliberate rebind/reset path.

## 5. Open questions for the go-ahead decision

1. Fail-closed (§3.5) vs. warn-and-continue — recommend fail-closed, but this
   is a real behavior change worth explicit confirmation.
2. Should a seed mismatch also refuse worldserver startup entirely (not just
   disable the module), given how central AP is to this realm's design? Or is
   "module disabled, core WoW server still boots" the right scope? Recommend
   the latter (matches the existing `IsEnabled()` contract's own "as if this
   module does not exist" framing) unless there's a reason a completely dead
   AP module is unacceptable to run with.
3. Where should the deliberate rebind action live — a `.ap admin` GM command,
   a one-off SQL step documented in the reseed runbook, or both? This should
   probably be decided together with the "one-click refresh" script's own
   design, since that script is the main legitimate trigger for a rebind.
