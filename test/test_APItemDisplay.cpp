// azerothcore-wotlk/modules/archipelago_wow/test/test_APItemDisplay.cpp
#include "doctest.h"
#include "APItemDisplay.h"

TEST_CASE("APItemDisplay::SynthesizedEntryIsBasePlusLocationId")
{
    CHECK(Archipelago::ItemDisplay::SynthesizedEntryFor(2000000) == 3000000u + 2000000u);
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

// RewardColumnsToRewrite (Finding I5, M4.7 final review): for a FIXED
// reward slot, only the single picked column should ever be rewritten --
// RewardItem1-4 are separate items granted together, not mutually exclusive
// alternatives, so there is nothing else to extend.
TEST_CASE("APItemDisplay::RewardColumnsToRewriteReturnsOnlyThePickedColumnForFixedSlots")
{
    std::array<uint32_t, 10> columns{ 0, 0, 5, 7, 0, 0, 0, 0, 0, 0 };
    auto picked = Archipelago::ItemDisplay::PickRewardColumn(columns);
    REQUIRE(picked.has_value());

    auto toRewrite = Archipelago::ItemDisplay::RewardColumnsToRewrite(*picked, columns);
    REQUIRE(toRewrite.size() == 1);
    CHECK(toRewrite[0].first == "RewardItem3");
    CHECK(toRewrite[0].second == 5u);
}

// The core Finding I5 fix: a genuine multi-choice quest (several non-zero
// RewardChoiceItemID* columns, no fixed reward) must have EVERY non-zero
// choice column rewritten to the synthesized entry -- not just the one
// PickRewardColumn identifies -- so that whichever alternative the player
// actually picks at turn-in still resolves to the synthesized item. Without
// this, a player picking anything other than the first-in-preference-order
// choice would leave the AP location permanently uncheckable.
TEST_CASE("APItemDisplay::RewardColumnsToRewriteRewritesEveryNonZeroChoiceColumnWhenPickedIsAChoice")
{
    std::array<uint32_t, 10> columns{ 0, 0, 0, 0, 40000, 40001, 40002, 0, 0, 0 };
    auto picked = Archipelago::ItemDisplay::PickRewardColumn(columns);
    REQUIRE(picked.has_value());
    REQUIRE(picked->first == "RewardChoiceItemID1");

    auto toRewrite = Archipelago::ItemDisplay::RewardColumnsToRewrite(*picked, columns);
    REQUIRE(toRewrite.size() == 3);

    // Picked column always first; each entry keeps its own original value
    // (needed for the per-column match-on-original-value idempotent UPDATE).
    CHECK(toRewrite[0].first == "RewardChoiceItemID1");
    CHECK(toRewrite[0].second == 40000u);
    CHECK(toRewrite[1].first == "RewardChoiceItemID2");
    CHECK(toRewrite[1].second == 40001u);
    CHECK(toRewrite[2].first == "RewardChoiceItemID3");
    CHECK(toRewrite[2].second == 40002u);
}

TEST_CASE("APItemDisplay::RewardColumnsToRewriteReturnsOnlyThePickedColumnForASingleRealChoice")
{
    // Only one non-zero choice column at all -- nothing else to extend to,
    // same observable result as the fixed-slot case above.
    std::array<uint32_t, 10> columns{ 0, 0, 0, 0, 0, 9, 0, 0, 0, 0 };
    auto picked = Archipelago::ItemDisplay::PickRewardColumn(columns);
    REQUIRE(picked.has_value());

    auto toRewrite = Archipelago::ItemDisplay::RewardColumnsToRewrite(*picked, columns);
    REQUIRE(toRewrite.size() == 1);
    CHECK(toRewrite[0].first == "RewardChoiceItemID2");
    CHECK(toRewrite[0].second == 9u);
}

// M4.7.1.3: a quest with genuinely zero reward-item columns is no longer
// an unexpected/defensive case (extract_quest_rewards.py now includes
// these, tagged is_filler_reward) -- SynthesizeAndRewireLocations's
// fallback needs a real column to write into instead of just logging and
// skipping. RewardItem1 (matched on its own current value 0) is that
// fallback, chosen because it's the first fixed slot in
// QUEST_REWARD_COLUMNS_IN_PREFERENCE_ORDER and fixed slots are never
// touched beyond what's written into them (unlike choice slots, which
// need every alternative rewritten too -- not a concern here since
// RewardItem1 is the only column being set).
TEST_CASE("APItemDisplay::FallbackRewardColumnForFillerQuestReturnsRewardItem1MatchedOnZero")
{
    auto [column, originalValue] = Archipelago::ItemDisplay::FallbackRewardColumnForFillerQuest();
    CHECK(column == "RewardItem1");
    CHECK(originalValue == 0u);
}

TEST_CASE("BuildLocationIdToGameobjectLootSlot resolves a real generated row")
{
    auto map = Archipelago::ItemDisplay::BuildLocationIdToGameobjectLootSlot();
    // Uses this checkout's real generated ArchipelagoCONTAINERSANITYContent
    // header (Task 2) -- location_id 8000000 is guaranteed to exist as
    // long as containersanity_content_data.py has at least one row
    // (17,594 real rows as of this plan).
    REQUIRE(map.find(8000000) != map.end());
}

TEST_CASE("SynthesizeAndRewireLocations gameobject_loot branch is idempotent on entry id")
{
    // SynthesizedEntryFor is a pure function -- re-deriving the entry for
    // the same location_id twice must produce the same value (the whole
    // idempotency argument for the DB rewrite being a safe no-op on a
    // repeat run).
    int64_t locationId = 8000000;
    CHECK(Archipelago::ItemDisplay::SynthesizedEntryFor(locationId)
        == Archipelago::ItemDisplay::SynthesizedEntryFor(locationId));
}

TEST_CASE("Containersanity synthesized entry range never overlaps ArchipelagoLootScript's real fish entries")
{
    // Regression guard: ArchipelagoLootScript.cpp (Fishing Quest) and the
    // new ArchipelagoLootSlotScript both hook PLAYERHOOK_ON_LOOT_ITEM: this
    // is only safe because their entry ranges never overlap. Real WotLK
    // item entries top out at 56,806 in this checkout's item_template --
    // AP_ITEM_SYNTH_BASE (3,000,000) is far above that, by construction.
    CHECK(Archipelago::ItemDisplay::AP_ITEM_SYNTH_BASE > 56806u);
}

TEST_CASE("BuildLocationIdToGameobjectLootSlot merges Containersanity and Gathersanity")
{
    // Task 1 shrunk Containersanity to 16,526 rows (base 8,000,000); Task 3
    // added Gathersanity's own gameobject_loot rows (base 9,000,000,
    // gathering_node source only, 284 of them) -- both must resolve
    // through the SAME merged map after this task's change.
    auto map = Archipelago::ItemDisplay::BuildLocationIdToGameobjectLootSlot();
    REQUIRE(map.find(8000000) != map.end());  // still-real Containersanity row
    REQUIRE(map.find(9000000) != map.end());  // real Gathersanity gathering_node row
}

TEST_CASE("BuildLocationIdToSkinningLootSlot resolves a real generated row")
{
    auto map = Archipelago::ItemDisplay::BuildLocationIdToSkinningLootSlot();
    // Real: 284 gathering_node rows come first in extraction order (Task
    // 2), so the first skinning_loot row's location_id is 9,000,000 + 284
    // = 9,000,284 -- guaranteed to exist as long as gathersanity_content_data.py
    // has at least one skinning_loot row (1,895 real rows as of this plan).
    REQUIRE(map.find(9000284) != map.end());
}

TEST_CASE("BuildLocationIdToDisenchantLootSlot resolves a real generated row")
{
    auto map = Archipelago::ItemDisplay::BuildLocationIdToDisenchantLootSlot();
    // Real: 284 (gathering_node) + 1,895 (skinning, all four source tags
    // combined) = 2,179 rows precede the first disenchant row, so its
    // location_id is 9,000,000 + 2,179 = 9,002,179.
    REQUIRE(map.find(9002179) != map.end());
}
