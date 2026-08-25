// azerothcore-wotlk/modules/archipelago_wow/test/test_APItemDisplay.cpp
#include "doctest.h"
#include "APItemDisplay.h"

TEST_CASE("APItemDisplay::SynthesizedEntryIsBasePlusLocationId")
{
    CHECK(Archipelago::ItemDisplay::SynthesizedEntryFor(2000000) == 900000000u + 2000000u);
}

TEST_CASE("APItemDisplay::SynthesizedEntryRoundTripsBackToLocationId")
{
    int64_t locationId = 1000001;
    uint32_t entry = Archipelago::ItemDisplay::SynthesizedEntryFor(locationId);
    CHECK(static_cast<int64_t>(entry) - Archipelago::ItemDisplay::AP_ITEM_SYNTH_BASE == locationId);
}

// PickRewardColumn must mirror extract_quest_rewards.py's
// pick_representative_reward() exactly (fixed RewardItem1-4 first in order,
// then RewardChoiceItemID1-6 in order, first non-zero column wins) -- these
// tests guard the fix for a real bug where the quest_template rewrite used
// to blindly overwrite all 10 reward-item columns instead of just the one
// pick_representative_reward() actually selected at generation time.

TEST_CASE("APItemDisplay::PickRewardColumnPrefersFixedSlotsInOrder")
{
    std::array<uint32_t, 10> columns{ 0, 0, 5, 7, 0, 0, 0, 0, 0, 0 };
    auto picked = Archipelago::ItemDisplay::PickRewardColumn(columns);
    REQUIRE(picked.has_value());
    CHECK(picked->first == "RewardItem3");
    CHECK(picked->second == 5u);
}

TEST_CASE("APItemDisplay::PickRewardColumnFallsBackToChoiceSlotsWhenFixedSlotsAreAllZero")
{
    std::array<uint32_t, 10> columns{ 0, 0, 0, 0, 0, 9, 0, 0, 0, 0 };
    auto picked = Archipelago::ItemDisplay::PickRewardColumn(columns);
    REQUIRE(picked.has_value());
    CHECK(picked->first == "RewardChoiceItemID2");
    CHECK(picked->second == 9u);
}

TEST_CASE("APItemDisplay::PickRewardColumnReturnsNulloptWhenAllColumnsAreZero")
{
    std::array<uint32_t, 10> columns{};
    CHECK_FALSE(Archipelago::ItemDisplay::PickRewardColumn(columns).has_value());
}

TEST_CASE("APItemDisplay::PickRewardColumnLeavesOtherRealChoiceAlternativesUntouched")
{
    // A legitimate multi-choice quest with several real, non-zero alternate
    // choices -- only the first one in preference order should be picked.
    // This is exactly the case the old blind-overwrite-all-10-columns logic
    // would have corrupted (it would have set every alternate to the same
    // synthesized item, destroying the real choice).
    std::array<uint32_t, 10> columns{ 0, 0, 0, 0, 40000, 40001, 40002, 0, 0, 0 };
    auto picked = Archipelago::ItemDisplay::PickRewardColumn(columns);
    REQUIRE(picked.has_value());
    CHECK(picked->first == "RewardChoiceItemID1");
    CHECK(picked->second == 40000u);
}
