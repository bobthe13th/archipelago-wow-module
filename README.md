# archipelago_wow

Archipelago multiworld client for a WoW 3.3.5a AzerothCore server. It builds
as an AzerothCore module, loads, reads its config, and maintains a
**persistent** connection to an Archipelago server -- reconnecting
automatically with exponential backoff if the connection drops or the
initial connect fails. It sends `LocationChecks` from real, family-specific
runtime hooks (see "Sending location checks" below) and delivers
`ReceivedItems` as real in-game items, with restart-safe deduplication.

As of M4.15, this is well past its original Milestone 2 scope (quest-only
checks, `.ap status` only): it covers **14 game modes** (`GameMode` 0-14 --
Sprint/Key Hunt/Classic/Burning Crusade/Wrath/Completionist/Artisan/
Collector/Achievement Hunt/Explorer/Fishing Quest/100%/Zone Leveler
("BarrensBeater")/Raidlogger -- the never-buildable Gladiator slot was
retired, M4.9.4) and **24 real content families** (`content/*.yaml`: Quest
Rewards, Vendor Inventories, Recipes, Trainer Spells & Abilities,
Containersanity, Gathersanity, Enemysanity, Repsanity, Craftsanity,
Itemsanity, Achievement Hunt/Explorer, Holidaysanity, Key Hunt rares, Golden
Boar Statues, Raidlogger, Gates, Traps, Filler and its reward-item/
reward-effect pools, Collections, Professions, Fish, and the always-on core
loop). Built on M4.7's real in-game item-synthesis/interception mechanism
(see "Sending location checks" below), M4.8's tag-based sub-filtering
(expansion/type/class/profession pools per family, plus an `always_present`
exemption), M4.9's traps/recipes/trainer-spells/per-level-milestone work,
M4.10's sanity-family expansion (Containersanity/Gathersanity/Enemysanity/
Repsanity/Craftsanity/Itemsanity/Holidaysanity), and M4.11-M4.14's new game
modes (Zone Leveler/BarrensBeater, Raidlogger), zone/area tagging, and
"Useful"-item/zone-gate content. The in-game command surface now covers
`.ap status`, `.ap leaderboard`, `.ap missing`, `.ap hint <item>`, and
`.ap port <n>` -- see "Commands" below.

## Connection behavior

- Supports both plain `ws://` and TLS `wss://` (`Archipelago.UseTLS`).
  **TLS certificate validation is intentionally not performed** -- the client
  uses `ssl::verify_none`. This is a deliberate, documented simplification,
  still current, not an oversight; a future milestone can add proper
  certificate verification if/when it's needed.
- The connection is held open indefinitely. If it drops (server restart,
  network blip, AP server down at startup, etc.) the module reconnects
  automatically, backing off exponentially between
  `Archipelago.ReconnectMinSeconds` and `Archipelago.ReconnectMaxSeconds`;
  the backoff resets to the minimum after any period of being genuinely
  connected again.

## Sending location checks

Location checks are sent through several real, family-specific runtime
hooks, not a single mechanism:

- `ArchipelagoQuestRewardScript` (`PLAYERHOOK_ON_QUEST_REWARD_ITEM`) --
  Quest Rewards, including the 19 curated Northshire/Goldshire
  starting-quest locations (always-present rows in that same family, not a
  separate hook) and each multi-choice reward slot's own separately
  shuffled location/item pair (M4.11.5.0.6).
- `ArchipelagoLootSlotScript` (`OnPlayerLootItem`) -- the shared, generic
  loot-slot interception hook behind Containersanity (chest loot) and
  Gathersanity (gathering-node/skinning/disenchant loot); also drives the
  abstracted, per-zone `zone_pool_credit` checks (`ArchipelagoZonePoolScript`,
  `AllGameObjectScript::OnGameObjectLootStateChanged`) both families were
  migrated onto for Zone Leveler (M4.11.4.1/M4.11.4.2).
- `ArchipelagoLearnSpellScript` (`OnPlayerLearnSpell`) -- Recipes and
  Trainer Spells & Abilities.
- `ArchipelagoItemFirstHeldScript` (`Player::StoreItem`, covering ordinary
  acquisition, mail retrieval, and trade) -- Itemsanity, one check per item
  first held.
- `ArchipelagoCraftsanityScript` (`OnPlayerCreateItem`) -- Craftsanity.
- `ArchipelagoInstanceScript` (`OnPlayerCreatureKill`) -- Enemysanity
  (per-species first kill) and instance-clear locations.
- `ArchipelagoRepsanityScript` (`OnPlayerReputationRankChange`) --
  Repsanity.
- `ArchipelagoAchievementScript` (`OnPlayerAchievementComplete`) --
  Achievement Hunt and Explorer.
- `ArchipelagoInterceptionScript` -- vendor-purchase interception for
  Vendor Inventories, sharing the same delivery pipeline as loot.

Every family's real check-and-item pair is presented in-game as a
synthesized, classification-iconed item via `APItemDisplay.cpp`'s
`SynthesizeAndRewireLocations` (the M4.7 mechanism), not a live AP network
round-trip.

## Receiving items

`ReceivedItems` sent by the AP server are queued by the io thread and drained
on the world thread every tick. Each item is resolved (via the same
generated content table) to a WoW item entry, created, and mailed to the
character named in `Archipelago.DeliveryCharacter` (from "Archipelago", via
the Postmaster) -- the baseline/fallback delivery path. If that character is
online, they get the normal in-game new-mail notification immediately
instead of only seeing it after a relog.

Real, shipped delivery isn't limited to that one path, though: under
`Policy::SingleDeliveryCharacter` an item is given directly into the
recipient's bags if they're online right now, mailing only as a fallback
(M4.11.5.0.2); items delivered to the same recipient in one drain of the AP
item stream are batched into as few mails as the client allows, with mail
text describing what was received and which family/finder it came from
(M4.11.5.2.0); and `Archipelago.DeliveryPolicy = "AuctionHouse"` can deliver
via independent per-faction (Alliance/Horde/Neutral) Auction House listings
instead of a single neutral one (M4.11.5.2.1).

Delivery is deduplicated and restart-safe: the highest processed AP item
index is tracked both in memory and in the `archipelago_state` database
table (added by the `characters` DB migration in
`data/sql/updates/pending_db_characters/`, one row, `id = 1`), and bumped
only after the mail and the index update have been committed together in
the same transaction. A restart or reconnect will never re-mail an
already-delivered item. If `Item::CreateItem` fails for a resolved item, the
failure is logged (AP item id and WoW item entry) so there's a diagnostic
trail, but note that item is still marked processed -- it is not retried.

## Content tables

Locations and items are defined in YAML under `content/` (`core_loop.yaml`,
`quest_rewards.yaml`, and other content families) and compiled into both the C++ header maps used by this
module and the Python apworld's data modules by
`tools/generate_content.py` -- see `tools/README.md` for the regeneration
workflow. Never hand-edit `src/Archipelago*ContentTable.h` or
`Archipelago/worlds/wow/*content_data.py`; edit the YAML and regenerate.
`tools/test_content_freshness.py` catches drift between them -- run it before
committing.

## Build

From the `azerothcore-wotlk` checkout, configure and build as usual, with
`NOPCH` disabled (see the note below) and modules built statically:

```
cmake . -DNOPCH=0 -DMODULES=static -G "Visual Studio 17 2022" -A x64
cmake --build build --target worldserver --config RelWithDebInfo
```

> **Note:** use `-DNOPCH=0`, not `-DNOPCH=1` -- there is a pre-existing
> upstream bug in unforked AzerothCore's `NOPCH=1` path, unrelated to this
> module.

If you add or rename source files under `src/`, re-run `cmake .` in the
existing build directory before rebuilding, or the new files will not be
picked up (AzerothCore's module CMake globs `modules/*/src` at configure
time, not build time).

This module also adds a `characters` DB migration
(`data/sql/updates/pending_db_characters/`) that creates the
`archipelago_state` table used for delivery dedup; it's picked up by
AzerothCore's normal DB updater the next time `worldserver` starts against
that database.

## Deploy

The module ships a `.conf.dist` template at `conf/archipelago_wow.conf.dist`.
After building, AzerothCore copies it into the worldserver's config
directory as `configs/modules/archipelago_wow.conf.dist`. To activate it,
copy/rename it to drop the `.dist` suffix, then edit the values:

```
cd <worldserver bin dir>/configs/modules
cp archipelago_wow.conf.dist archipelago_wow.conf
```

Config keys:

- `Archipelago.Enabled` -- enable the client (default `0`).
- `Archipelago.ServerAddress` -- hostname or IP of the Archipelago server
  (default `"localhost"`).
- `Archipelago.ServerPort` -- port of the Archipelago server (default
  `38281`).
- `Archipelago.SlotName` -- the player slot name for this realm in the
  multiworld (default `""`).
- `Archipelago.Password` -- room password, if the Archipelago server
  requires one (default `""`).
- `Archipelago.DeliveryCharacter` -- character name that receives AP-granted
  items via mail (default `""`).
- `Archipelago.UseTLS` -- connect over `wss://` (TLS) instead of plain
  `ws://` (default `0`). See the note above on `ssl::verify_none`.
- `Archipelago.ReconnectMinSeconds` -- initial delay before retrying a
  dropped connection (default `2`; clamped to a minimum of `1` at runtime).
- `Archipelago.ReconnectMaxSeconds` -- maximum backoff delay between
  reconnect attempts (default `60`; clamped to at least
  `ReconnectMinSeconds` at runtime).

This is not the full list -- see `conf/archipelago_wow.conf.dist` for every
config key, including the per-family gating toggles, DeathLink options, and
per-game-mode goal settings added across M4.9-M4.14.

## Commands

- `.ap status` -- reports the current connection state:
  - `Archipelago: connected.` -- handshake complete, fully connected.
  - `Archipelago: connecting...` -- initial connect in progress (resolving,
    awaiting room info, or connected but pre-handshake).
  - `Archipelago: connection lost, reconnecting...` -- was connected,
    dropped, currently backing off before retrying.
  - `Archipelago: server refused the connection.` -- the AP server rejected
    the connection (e.g. bad slot/password).
  - `Archipelago: not connected.` -- disconnected and not currently
    attempting to connect (or module disabled).
- `.ap leaderboard` (M4.11.5.6) -- two real check-count breakdowns: per-slot
  totals observed multiworld-wide from real `ItemSend` broadcasts this
  realm's client receives while connected, and per-WoW-character totals
  scoped to this realm's own slot, resolved to real character names via
  `sCharacterCache`.
- `.ap missing` (M4.13) -- a paginated list of this slot's unchecked
  locations, each resolved to a real display name (M4.7's synthesized names
  for Quest Rewards/Vendor Inventories where applicable, a merged
  `AllLocationNames` reverse lookup otherwise).
- `.ap hint <item>` (M4.13) -- a real AP `Say`-command round trip
  (`{"cmd": "Say", "text": "!hint <item>"}`), broadcasting the resulting
  `PrintJSON` response to every currently-online player (AP's hint response
  isn't scoped to only the asking player).
- `.ap port <n>` (M4.13, `SEC_GAMEMASTER` only) -- reconnects to a different
  AP room/port, reusing the existing automatic-reconnect machinery rather
  than a bespoke teardown path.

## Testing

`test/` is a small standalone doctest project, independent of the main
AzerothCore build. Configure, build, and run it directly:

```
cmake -S test -B test/build -G "Visual Studio 17 2022" -A x64
cmake --build test/build --config Debug
test/build/Debug/archipelago_wow_tests.exe
```

`test/build/` is gitignored.

## Repo layout note: nested submodule, both repos are the project owner's own forks

This module repo (`archipelago-wow-module`, remote
`https://github.com/bobthe13th/archipelago-wow-module.git`) is nested as a
git submodule inside `azerothcore-wotlk/modules/`, which is itself a
submodule of the outer project repo. **Both `archipelago_wow` and
`azerothcore-wotlk` are the project owner's own forks, with real push
access** -- `azerothcore-wotlk` is not an unforked clone of upstream
AzerothCore (an earlier version of this file was wrong about that). The
commits that register/bump this module's submodule pointer on the
`azerothcore-wotlk` side are ordinary, pushable commits like any other.

The failure mode this section used to describe -- a fresh
`git clone --recursive` of the outer repo failing to resolve the
`azerothcore-wotlk` submodule pointer, or `azerothcore-wotlk` failing to
resolve its own `archipelago_wow` submodule pointer -- was caused by
forgetting to push a pending bump commit before a fresh clone was needed,
not by any structural inability to push. **Fixed for real** by pushing the
stranded commits on both repos (M4.15 Task 1: keeping both repos'
`azerothcore-archipelago-m3` branches pushed).

As defense-in-depth against the same class of mistake recurring,
`bootstrap/setup.ps1` / `bootstrap/setup.sh` (M4.15 Task 2, at the outer
project repo's root) clone `archipelago_wow` at its pinned commit
(`bootstrap/module-pins.json`) into `azerothcore-wotlk/modules/` if it
isn't already present after a fresh outer-repo clone -- safe to re-run, a
no-op if the module is already there. See `docs/guides/dev-cheat-sheet.md`'s
repo-layout section (outer repo) for the first-time-setup step this adds.
