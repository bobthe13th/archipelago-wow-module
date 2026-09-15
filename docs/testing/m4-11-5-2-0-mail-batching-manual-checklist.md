# M4.11.5.2.0 — Mail Batching & Richer Delivery Text: Manual Verification Checklist

Automated coverage: `archipelago_wow_tests` (107 cases / 388 assertions as of this milestone)
covers zero bytes of `APDelivery.h/.cpp`/`ArchipelagoPlayerScript.cpp` (confirmed:
`test/CMakeLists.txt`'s source list is `APProtocol.cpp`/`APInterception.cpp`/
`APGateDecision.cpp` only) — it depends on live `Player`/`MailDraft`/`CharacterDatabase`/
`ObjectAccessor` types the lightweight doctest harness cannot construct. Everything below
requires a live worldserver + AP room and cannot be exercised any other way, matching this
module's existing "GM-console commands verified manually" precedent.

## Known limitation (by design, not a bug)

No mail produced by this mechanism ever names the real WoW character/player who triggered the
check that produced a given delivered item. This codebase's real AP protocol wiring has no live
"finder" identity available at this call site (`ReceivedItem.player` is the source AP *slot* id,
not a WoW character) — see the implementation plan's own "Correction to the Approved Spec"
section for the full reasoning. Do not report the absent finder line as a bug.

## 1. AllAccountsDelivery batches correctly, including the exact-12 boundary

- [ ] Set `Archipelago.DeliveryPolicy` to `AllAccountsDelivery` and `.reload config`.
- [ ] Ensure at least 2 real accounts each have at least one non-deleted character.
- [ ] Trigger exactly **12** real, distinct checks in a single drain. Confirm each eligible
      account's own most-recently-logged-out character receives **exactly 1 mail** with all 12
      items attached — not 12 separate mails, and not a second, empty mail.
- [ ] Trigger **13** real, distinct checks in a single drain. Confirm **2 mails** — the first
      with 12 items, the second with the 1 remaining item (`MAX_MAIL_ITEMS` = 12) — not one
      mail per item.
- [ ] Open one of the batched mails. Confirm the **body's own first line** (not the subject,
      which stays the fixed literal `"Archipelago"`) correctly states how many items this one
      mail carries, and each following line lists one item's own real, human-readable name
      (never a raw entry id on its own, e.g. `"- Deadly Poison VIII (Vendor Stock)"` — just the
      real `ItemTemplate::Name1` value, not a vendor/location-prefixed display name) and its
      real source family.
- [ ] Take every attachment out of a 12-item mail. Confirm all 12 items are actually present
      and retrievable (not just that the body text lists 12 names).

## 2. SingleDeliveryCharacter: both online and offline paths get richer text

- [ ] Set `Archipelago.DeliveryPolicy` to `SingleDeliveryCharacter` and set
      `Archipelago.DeliveryCharacter` to a real character name, and `.reload config`.
- [ ] While that character is logged OUT, trigger 13+ real checks in one drain. Confirm the
      same 12-then-1 batching behavior as Section 1 once they log back in and check their mail.
- [ ] While that same character is logged IN with a full inventory (no free bag slots), trigger
      a real check. Confirm a mail arrives via the bags-full fallback whose body names the real
      item and its real family (not the old fixed generic text) -- this is a real fix in this
      milestone's own final-review fix round, not covered by Section 1's tests.
- [ ] While that same character is logged IN with free bag space, trigger another real check.
      Confirm the item appears directly in their bags (no mail at all) -- the M4.11.5.0.2
      direct-grant path is unaffected by this batching/text change.

## 3. Non-mail-shaped policies are unaffected

- [ ] Switch to `Policy::AuctionHouse`, trigger a real check, confirm it's still listed on the
      neutral Auction House exactly as before (no mail involved at all).
- [ ] Switch to `Policy::SharedCacheNpc`, trigger a real check, confirm it's still recorded in
      the realm-wide cache exactly as before (no mail involved at all).
- [ ] Switch to `Policy::FirstToClaim`, trigger a real check, confirm the real-time
      server-wide announcement still names the real item exactly as before.
