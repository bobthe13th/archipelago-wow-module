// azerothcore-wotlk/modules/archipelago_wow/src/APItemDisplay.h
#pragma once

#include <cstdint>
#include <unordered_map>

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
