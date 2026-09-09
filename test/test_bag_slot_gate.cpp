// azerothcore-wotlk/modules/archipelago_wow/test/test_bag_slot_gate.cpp
//
// The Progressive Bag Slots gate (M4.14.1) reuses the already-tested
// Archipelago::Gating::ShouldSuppressGatedTier for its enabled/family/tier
// suppression decision (see "ShouldSuppressGatedTier suppresses only when
// the granted tier is below the required tier" in test_APGating.cpp) --
// that generic logic is not re-tested here. What's new in this task is the
// slot<->tier mapping itself: IsNonBackpackBagSlot and BagSlotToTier, pure
// functions with no Player*/Item* dependency (factored into
// APGateDecision.h/.cpp for the same standalone-doctest testability reason
// as ShouldSuppressGatedTier) that ArchipelagoBagSlotGateScript::
// OnPlayerCanEquipItem (APGating.cpp) consults before ever calling
// ShouldSuppressGatedTier.
#include "doctest.h"
#include "APGateDecision.h"

TEST_CASE("IsNonBackpackBagSlot identifies exactly slots 19-22 (INVENTORY_SLOT_BAG_START..INVENTORY_SLOT_BAG_END-1)")
{
    using namespace Archipelago::Gating;

    CHECK(IsNonBackpackBagSlot(19) == true);
    CHECK(IsNonBackpackBagSlot(20) == true);
    CHECK(IsNonBackpackBagSlot(21) == true);
    CHECK(IsNonBackpackBagSlot(22) == true);

    // Backpack slot (23, INVENTORY_SLOT_BAG_END) and everything outside the
    // bag-slot range must be rejected.
    CHECK(IsNonBackpackBagSlot(18) == false);
    CHECK(IsNonBackpackBagSlot(23) == false);
    CHECK(IsNonBackpackBagSlot(0) == false);
    CHECK(IsNonBackpackBagSlot(255) == false);
}

TEST_CASE("BagSlotToTier maps slots 19-22 to 1-indexed progressive tiers 1-4")
{
    using namespace Archipelago::Gating;

    CHECK(BagSlotToTier(19) == 1);
    CHECK(BagSlotToTier(20) == 2);
    CHECK(BagSlotToTier(21) == 3);
    CHECK(BagSlotToTier(22) == 4);
}

// Fix (post-review): Player::_LoadInventory calls OnPlayerCanEquipItem with
// not_loading=false for every already-equipped item at every login
// (PlayerStorage.cpp:5993-5994). Denying during that call strips the bag
// from its slot and mails it back to the player (PlayerStorage.cpp:6050-
// 6056) instead of blocking a genuine new manual equip attempt -- a
// real data-loss bug for any pre-existing character with a bag already
// equipped in a not-yet-unlocked slot (GetFlagTier("bag_slots") starts at
// 0). ShouldSuppressBagSlotEquip composes the already-tested
// ShouldSuppressGatedTier with this one extra notLoading rule; only the
// new composition is tested here, not ShouldSuppressGatedTier's own logic
// again.
TEST_CASE("ShouldSuppressBagSlotEquip never suppresses during inventory load (notLoading == false)")
{
    using namespace Archipelago::Gating;

    // Same suppress-worthy state (module+family enabled, required tier 3 >
    // granted tier 2) suppresses on an interactive equip attempt...
    CHECK(ShouldSuppressBagSlotEquip(/*notLoading=*/true, true, true, 3, 2) == true);
    // ...but must never suppress during Player::_LoadInventory's
    // not_loading=false call, regardless of tier state.
    CHECK(ShouldSuppressBagSlotEquip(/*notLoading=*/false, true, true, 3, 2) == false);
}

TEST_CASE("ShouldSuppressBagSlotEquip still respects module/family/tier when notLoading == true")
{
    using namespace Archipelago::Gating;

    CHECK(ShouldSuppressBagSlotEquip(true, true, true, 3, 3) == false);  // tier already granted
    CHECK(ShouldSuppressBagSlotEquip(true, true, false, 3, 0) == false); // family disabled
    CHECK(ShouldSuppressBagSlotEquip(true, false, true, 3, 0) == false); // module disabled
}
