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
