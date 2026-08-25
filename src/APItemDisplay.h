// azerothcore-wotlk/modules/archipelago_wow/src/APItemDisplay.h
#pragma once

#include <array>
#include <cstdint>
#include <optional>
#include <string>
#include <unordered_map>
#include <utility>

#include "APProtocol.h"

namespace Archipelago::ItemDisplay
{
    inline constexpr int64_t AP_ITEM_SYNTH_BASE = 900000000;

    // Pure function of location_id -- this is the entire idempotency
    // argument for the DB rewrites below: re-running synthesis for an
    // already-synthesized location produces the exact same entry id, so an
    // INSERT IGNORE / matching-WHERE UPDATE is a safe no-op the second time.
    inline uint32_t SynthesizedEntryFor(int64_t locationId)
    {
        return static_cast<uint32_t>(AP_ITEM_SYNTH_BASE + locationId);
    }

    // Column order MUST exactly match pick_representative_reward() in
    // modules/archipelago_wow/tools/extract_quest_rewards.py: fixed reward
    // slots first (RewardItem1-4, in order), then choice slots
    // (RewardChoiceItemID1-6, in order) -- that function's "first non-zero
    // column wins" logic is what decided which single column is "the" AP
    // reward for a given quest at generation time, and the runtime rewrite
    // below must pick the exact same column or it corrupts the other 9
    // (which may be legitimately-unused zeros OR real alternate-choice
    // rewards for a genuine multi-choice quest). Keep this array and
    // PickRewardColumn in sync if that function's preference order ever
    // changes.
    inline constexpr std::array<char const*, 10> QUEST_REWARD_COLUMNS_IN_PREFERENCE_ORDER = {
        "RewardItem1", "RewardItem2", "RewardItem3", "RewardItem4",
        "RewardChoiceItemID1", "RewardChoiceItemID2", "RewardChoiceItemID3",
        "RewardChoiceItemID4", "RewardChoiceItemID5", "RewardChoiceItemID6"
    };

    // Pure selection logic, unit-testable without a DB connection: given the
    // CURRENT value of each of the 10 reward-item columns above (in the same
    // order as QUEST_REWARD_COLUMNS_IN_PREFERENCE_ORDER), returns the
    // (column name, original value) of the first non-zero one -- mirroring
    // pick_representative_reward() -- or std::nullopt if all 10 are zero
    // (shouldn't happen for a quest that made it into QUEST_ID_TO_LOCATION_ID,
    // but defended against rather than assumed).
    inline std::optional<std::pair<std::string, uint32_t>> PickRewardColumn(
        std::array<uint32_t, 10> const& columnValues)
    {
        for (size_t i = 0; i < columnValues.size(); ++i)
        {
            if (columnValues[i] != 0)
                return std::make_pair(std::string(QUEST_REWARD_COLUMNS_IN_PREFERENCE_ORDER[i]), columnValues[i]);
        }
        return std::nullopt;
    }

    // Called once, from ArchipelagoWorldScript::OnUpdate, the first time
    // slot_data arrives with a non-empty ap_item_display map. For every
    // location present in `display` that also has a real npc_vendor or
    // quest_template row (via the trigger-lookup maps generated into
    // ArchipelagoQuestRewardsContentTable.h/ArchipelagoVendorStockContentTable.h,
    // Task 1), synthesizes one item_template row (Task 5b's 4 classification
    // icons picked by Archipelago::Interception::ClassifyItem) and rewrites
    // the underlying vendor slot / quest reward slot to point at it.
    void SynthesizeAndRewireLocations(std::unordered_map<int64_t, Archipelago::ApItemDisplay> const& display);
}
