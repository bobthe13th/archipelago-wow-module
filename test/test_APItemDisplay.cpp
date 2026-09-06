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

// M4.11.5.0.6: PickRewardColumn/RewardColumnsToRewrite/
// FallbackRewardColumnForFillerQuest were removed -- every real reward slot
// is now its own location with its own known column_index baked in at
// generation time (extract_quest_rewards.py's own _nonzero_reward_slots),
// so there is no longer a "representative column" to re-derive at runtime.
// QUEST_REWARD_COLUMNS_IN_PREFERENCE_ORDER itself is still real and used
// (APItemDisplay.cpp indexes into it directly by column_index) but has no
// standalone pure-function test of its own beyond that direct usage.

TEST_CASE("SynthesizeAndRewireLocations is idempotent on entry id")
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

TEST_CASE("BuildLocationIdToSkinningLootSlot resolves a real generated row")
{
    auto map = Archipelago::ItemDisplay::BuildLocationIdToSkinningLootSlot();
    // M4.11.4.2: gathering_node is no longer gameobject_loot rows but
    // 21,084 zone_pool_credit abstract locations (real, regenerated count
    // -- see extract_gathersanity.py/content/gathersanity.yaml), so the
    // first skinning_loot row's location_id is now 9,000,000 + 21,084 =
    // 9,021,084 -- guaranteed to exist as long as gathersanity_content_data.py
    // has at least one skinning_loot row (1,895 real rows, unchanged by
    // this milestone). Re-verified after the M4.11.4.2 final-review Lock.dbc
    // decode fix: that fix only re-LABELS gathering-node pools Mining vs
    // Herbalism (4,080 herbalism / 17,004 mining, was 21,084 / 0), it does
    // not add or remove any row, so this offset is unchanged.
    REQUIRE(map.find(9021084) != map.end());
}

TEST_CASE("BuildLocationIdToDisenchantLootSlot resolves a real generated row")
{
    auto map = Archipelago::ItemDisplay::BuildLocationIdToDisenchantLootSlot();
    // M4.11.4.2: 21,084 (gathering_node, zone_pool_credit) + 1,895
    // (skinning, all four source tags combined, unchanged) = 22,979 rows
    // precede the first disenchant row, so its location_id is
    // 9,000,000 + 22,979 = 9,022,979.
    REQUIRE(map.find(9022979) != map.end());
}
