# M4.11.5.2.1 — Per-Faction Auction House Delivery: Manual Verification Checklist

Automated coverage: `archipelago_wow_tests` covers zero bytes of `APDelivery.h/.cpp`,
`ArchipelagoPlayerScript.cpp`, or `ArchipelagoWorldScript.cpp` (confirmed:
`test/CMakeLists.txt`'s source list is `APProtocol.cpp`/`APInterception.cpp`/
`APGateDecision.cpp` only) -- it depends on live `Player`/`AuctionHouseMgr`/`CharacterDatabase`
types the lightweight doctest harness cannot construct. Everything below requires a live
worldserver + AP room and cannot be exercised any other way.

## Known limitation (by design, not a bug)

This setting is entirely independent of the real, separate
`Archipelago.AllowTwoSide.Interaction.Auction` server-wide config. Setting
`AuctionHouseFactionMode = "PerFaction"` does NOT change whether players can browse another
faction's auction house at all -- it only changes which house(s) an AP delivery lists on. A
Horde player will only ever be able to buy from the Horde or neutral copy unless the
server-wide two-side-interaction config is separately enabled.

## 1. Merged (default) behaves exactly like before this milestone

- [ ] Set `Archipelago.DeliveryPolicy = "AuctionHouse"`, leave `Archipelago.AuctionHouseFactionMode`
      at its default (`"Merged"`, or omit the line entirely), `.reload config`.
- [ ] Trigger a real check. Confirm exactly ONE listing appears, on the NEUTRAL auction house
      only (visible from a goblin town -- Booty Bay/Gadgetzan/Everlook -- or any auctioneer if
      the server-wide two-side-interaction config happens to be on).
- [ ] Confirm the listing's buyout price matches the configured `Archipelago.AuctionHouseCostTier`
      exactly as before this milestone (unaffected by this change).

## 2. PerFaction lists three independent copies

- [ ] Set `Archipelago.AuctionHouseFactionMode = "PerFaction"`, `.reload config`.
- [ ] Trigger a real check. Confirm THREE separate listings appear: one on the Alliance auction
      house, one on the Horde auction house, one on the neutral auction house -- each for the
      SAME underlying item, but as three independently-buyable auction entries (buying one does
      not remove or affect the other two).
- [ ] Buy the Alliance copy (from an Alliance character, or a Horde character if the server-wide
      two-side-interaction config is on). Confirm the Horde and neutral copies are still present
      and independently buyable afterward.
- [ ] Set `Archipelago.AuctionHouseCostTier = "Random"`, trigger several more real checks under
      `PerFaction`. Confirm each of the three copies for a given delivered item can show a
      DIFFERENT buyout price/tier from the other two (independent rolls per copy, not one shared
      roll applied to all three) -- check server logs (`Archipelago: listed WoW item entry ...`)
      across a few deliveries to confirm this, since a single delivery's three rolls could
      coincidentally match by chance.

## 3. Unaffected by the existing AccessGating softlock fallback

- [ ] Set `Archipelago.AccessGating = 1` alongside `Archipelago.DeliveryPolicy = "AuctionHouse"`
      (either faction mode), `.reload config`. Confirm the existing fallback still fires exactly
      as before this milestone: an error log naming the softlock risk, and the realm actually
      running under `SingleDeliveryCharacter` instead -- this plan does not change that check.
