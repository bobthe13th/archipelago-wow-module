# M4.11.5.6 — Check Leaderboard Command: Manual Verification Checklist

Automated coverage: only Task 1's `ParseItemSendEvents` (`APProtocol.cpp`) is covered by
`archipelago_wow_tests` (real doctest coverage, 7 new `TEST_CASE` blocks / 15 assertions). Every
other file this milestone
touches (`ArchipelagoRealmState.cpp`, `ArchipelagoWorldScript.cpp`,
`ArchipelagoCommandScript.cpp`, and all 14 real `SendLocationChecks` call-site files) has no
automated coverage at all -- everything below requires a live worldserver + a real, live AP
multiworld room with at least 2 real slots, and cannot be exercised any other way.

## Known limitation (by design, not a bug)

Per-slot totals only accumulate for as long as this realm is actually connected and listening
to the AP server. If this realm is offline while another slot finds a check, that check's own
`ItemSend` broadcast is never sent to this client and is permanently missed -- there is no
local way to reconstruct it after the fact. Do not report a per-slot total that looks "too
low" compared to what you know really happened on another slot while this realm was
disconnected as a bug.

## 1. Per-slot totals (passive, cross-multiworld)

- [ ] Connect this realm to a real, live AP room with at least 2 real slots (this WoW slot
      plus at least one other real game's slot).
- [ ] From the OTHER slot, find a real check (any mechanism -- doesn't need to be a WoW
      action). Confirm this realm's own worldserver console logs a real `LOG_DEBUG`
      "Archipelago: slot N check total now M" line shortly after (may need `LOG_DEBUG` enabled
      for `module.archipelago_wow` in `worldserver.conf` -- confirm the real log level config
      first, or just check via `.ap leaderboard` directly instead of the debug log).
- [ ] Run `.ap leaderboard` as a normal player. Confirm the per-slot section lists that other
      slot's own real numeric id with a count of at least 1.
- [ ] Find a real check yourself, in WoW, that credits AN ITEM TO YOUR OWN SLOT (not a
      cross-world item). Confirm `.ap leaderboard`'s per-slot section shows YOUR OWN slot's own
      count incremented too -- the per-slot mechanism observes every real ItemSend broadcast
      multiworld-wide, including ones this realm's own slot sent to itself.
- [ ] Disconnect this realm's own AP client (e.g. via `.ap port` to an unreachable port, or
      stop/restart worldserver), find a real check from the other slot while disconnected,
      then reconnect. Confirm `.ap leaderboard`'s per-slot total for that other slot did NOT
      increment for the check found while this realm was disconnected -- this is the expected,
      documented "missed while offline" limitation, not a bug.

## 2. Per-WoW-player totals (this realm's own slot only)

- [ ] Using at least 2 different real WoW characters (on this realm), each complete at least
      one distinct real check (a quest turn-in, a vendor purchase, a level-up, etc. -- whatever
      is easiest to trigger against the currently-active game mode).
- [ ] Run `.ap leaderboard`. Confirm the per-WoW-player section lists both real character names
      (not GUIDs, not "(unknown character)") with correct per-character counts.
- [ ] Trigger several different KINDS of checks from the same character (e.g. a quest turn-in,
      then a vendor purchase, then a level-up) -- confirm each one increments that same
      character's own total in `.ap leaderboard`'s per-WoW-player section (this exercises
      several of the 19 real call sites this milestone's own Task 4 touched, not just one).
- [ ] Confirm a check whose location is later RE-sent (e.g. via a GM-triggered resend, or a
      worldserver restart followed by `ResendAllChecksAndGoal`) does NOT double-count in the
      per-WoW-player breakdown -- the attribution table is keyed by location_id with INSERT
      IGNORE, so a resend keeps the original attribution, not a duplicate row.
