# M4.11.5.2.1 — Per-Faction Auction House Delivery: Manual Verification Checklist

Automated coverage: `archipelago_wow_tests` covers zero bytes of `APDelivery.h/.cpp`,
`ArchipelagoPlayerScript.cpp`, or `ArchipelagoWorldScript.cpp` (confirmed:
`test/CMakeLists.txt`'s source list is `APProtocol.cpp`/`APInterception.cpp`/
`APGateDecision.cpp` only) -- it depends on live `Player`/`AuctionHouseMgr`/`CharacterDatabase`
types the lightweight doctest harness cannot construct. Everything below requires a live
worldserver + AP room and cannot be exercised any other way.

## Known limitations (by design or pre-existing, not new bugs)

- **This setting is unaffected by, but NOT independent of the EFFECT of, `worldserver.conf`'s
  real `AllowTwoSide.Interaction.Auction` setting** (a real, separate core config, no
  `Archipelago.` prefix, lives in `worldserver.conf` not this module's own conf file). This
  module never reads or writes it -- but if it's ON, AzerothCore's own `AuctionHouseMgr`
  routes EVERY house lookup to the neutral house regardless of which one this module asks
  for, so `PerFaction`'s three copies land as THREE DUPLICATE LISTINGS ON THE NEUTRAL HOUSE,
  not one per faction. For `PerFaction`'s real three-house split, leave that other setting at
  its own default (off).
- **Switching `PerFaction` back to `Merged` does not retroactively remove listings already
  created under `PerFaction`** -- old triples remain on their houses until bought or (after 10
  years) they'd expire; this is the same pre-existing "AP listings effectively never expire"
  design as `Merged`'s own single listing.
- **A `Free` CostTier (or `Random` rolling `Free`) produces a bid-only, unbuyable listing** --
  this is a real, pre-existing behavior of `CostTier::Free` from before this milestone
  (`buyout=0` disables the client's Buyout button entirely), NOT something this milestone's
  own PerFaction/Merged change introduced. Roughly 1 in 5 `Random` rolls will hit this. Not a
  `PerFaction`-specific bug -- if you see an unbuyable listing while testing `Random` below,
  confirm it's tagged `Free` in the server log before treating it as a failure.

## 1. Merged (default) behaves exactly like before this milestone

- [ ] Set `Archipelago.DeliveryPolicy = "AuctionHouse"`, leave `Archipelago.AuctionHouseFactionMode`
      at its default (`"Merged"`, or omit the line entirely), `.reload config`.
- [ ] Confirm `worldserver.conf`'s own `AllowTwoSide.Interaction.Auction` is at its own default
      (`0`) for this test, so the neutral-house behavior below isn't confused with the
      collapsed-`PerFaction` case described above.
- [ ] Trigger a real check. Confirm exactly ONE listing appears, on the NEUTRAL auction house
      only (visible from a goblin town -- Booty Bay/Gadgetzan/Everlook -- or any auctioneer if
      `AllowTwoSide.Interaction.Auction` happens to be on).
- [ ] Confirm the listing's buyout price matches the configured `Archipelago.AuctionHouseCostTier`
      exactly as before this milestone (unaffected by this change).

## 2. PerFaction lists three independent copies (with `AllowTwoSide.Interaction.Auction` off)

- [ ] Confirm `worldserver.conf`'s own `AllowTwoSide.Interaction.Auction` is `0` (its own
      default) -- this test specifically verifies PerFaction's real three-house split, which
      only happens when that other setting is off (see Known Limitations above).
- [ ] Set `Archipelago.AuctionHouseFactionMode = "PerFaction"`, `.reload config`.
- [ ] Trigger a real check. Confirm THREE separate listings appear: one on the Alliance auction
      house, one on the Horde auction house, one on the neutral auction house -- each for the
      SAME underlying item, but as three independently-buyable auction entries (buying one does
      not remove or affect the other two).
- [ ] Buy the Alliance copy (from an Alliance character). Confirm the Horde and neutral copies
      are still present and independently buyable afterward.
- [ ] Set `Archipelago.AuctionHouseCostTier = "Random"`, trigger several more real checks under
      `PerFaction`. Confirm each of the three copies for a given delivered item can show a
      DIFFERENT buyout price/tier from the other two (independent rolls per copy, not one shared
      roll applied to all three) -- check server logs (`Archipelago: listed WoW item entry ...`)
      across a few deliveries to confirm this, since a single delivery's three rolls could
      coincidentally match by chance. (Per the Known Limitations note above, a copy that rolled
      `Free` will show `buyout 0 copper` in the log and be bid-only -- that's expected, not a
      failure.)

## 3. PerFaction with `AllowTwoSide.Interaction.Auction` on (documents the real collapse, not a bug)

- [ ] Set `worldserver.conf`'s own `AllowTwoSide.Interaction.Auction = 1`, restart or otherwise
      apply per that setting's own real reload requirements, with `Archipelago.AuctionHouseFactionMode`
      still `"PerFaction"`.
- [ ] Trigger a real check. Confirm THREE listings still appear, but all THREE are now on the
      SAME (neutral) house -- this is the real, documented AzerothCore core behavior described
      in Known Limitations above, not a regression in this module's own code.
- [ ] Set `AllowTwoSide.Interaction.Auction` back to its own default (`0`) when done testing
      this case.

## 4. Unaffected by the existing AccessGating softlock fallback

- [ ] Set `Archipelago.AccessGating = 1` alongside `Archipelago.DeliveryPolicy = "AuctionHouse"`
      (either faction mode), `.reload config`. Confirm the existing fallback still fires exactly
      as before this milestone: an error log naming the softlock risk, and the realm actually
      running under `SingleDeliveryCharacter` instead -- this plan does not change that check.
