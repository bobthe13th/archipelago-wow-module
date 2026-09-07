# M4.11.5.2.0 — Mail Batching & Richer Delivery Text: Manual Verification Checklist

This change (batched mail delivery + real item name/family-label mail text) cannot be
meaningfully unit-tested without a live `Player`/`MailDraft`/database (same reason
`APDelivery.cpp` has never been in the doctest target). Verify manually on a running dev
realm.

## 1. AllAccountsDelivery batches correctly

- [ ] Set `Archipelago.DeliveryPolicy` to `AllAccountsDelivery` and `.reload config`.
- [ ] Ensure at least 2 real accounts each have at least one non-deleted character.
- [ ] Trigger at least 13 real, distinct checks in a single drain (e.g. queue several
      Vendor Stock/Quest Rewards/Recipes checks close together so one
      `ArchipelagoWorldScript::OnUpdate` tick's drain sees all of them at once — or use a GM
      command that credits several checks back-to-back).
- [ ] Confirm each eligible account's own most-recently-logged-out character receives
      **2 mails**, not 13 — the first with 12 items, the second with the 1 remaining item
      (`MAX_MAIL_ITEMS` = 12) — not one mail per item.
- [ ] Open one of the batched mails. Confirm the body lists each item's own real,
      human-readable name (never a raw entry id on its own) and its real source family
      (e.g. `"- Frostwolf Quartermaster - Deadly Poison VIII (Vendor Stock)"`), and the
      subject/opening line correctly states how many items this one mail carries.

## 2. SingleDeliveryCharacter still batches only its offline branch

- [ ] Set `Archipelago.DeliveryPolicy` to `SingleDeliveryCharacter` and set
      `Archipelago.DeliveryCharacter` to a real character name, and `.reload config`.
- [ ] While that character is logged OUT, trigger 13+ real checks in one drain. Confirm the
      same 12-then-1 batching behavior as above once they log back in and check their mail.
- [ ] While that same character is logged IN, trigger another real check. Confirm the item
      appears directly in their bags (no mail at all) — the M4.11.5.0.2 direct-grant path is
      unaffected by this batching change.

## 3. Non-mail-shaped policies are unaffected

- [ ] Switch to `Policy::AuctionHouse`, trigger a real check, confirm it's still listed on
      the neutral Auction House exactly as before (no mail involved at all).
- [ ] Switch to `Policy::FirstToClaim`, trigger a real check, confirm the real-time
      server-wide announcement still names the real item exactly as before.
