// azerothcore-wotlk/modules/archipelago_wow/src/APItemDisplay.h
#pragma once

#include <array>
#include <cstdint>
#include <optional>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

#include "APProtocol.h"
#include "ArchipelagoGATHERSANITYContent.h"

namespace Archipelago::ItemDisplay
{
    // MUST stay far below the real max WoW item_template entry (56,806 in
    // this checkout) plus this project's other custom blocks (traps
    // 850000-850016, classification icons 850100-850103) so synthesized
    // entries never collide with either -- but just as importantly, MUST
    // NOT be large. ObjectMgr::LoadItemTemplates() (src/server/game/Globals/
    // ObjectMgr.cpp) sizes _itemTemplateStoreFast via
    // resize(max_entry_in_item_template + 1, nullptr) with NO bounds check,
    // so the single highest entry across the whole item_template table
    // determines a vector allocation of that many pointer-sized slots --
    // paid on EVERY worldserver startup, on every seed, once ANY row this
    // high exists. The previous value (900000000) plus the max real
    // location_id in this project (2,037,749 as of this task) would have
    // resized that vector to ~902M entries (~6.7 GiB) on startup. At
    // 3,000,000 + that same max location_id, the vector tops out around
    // 5.04M entries (~40 MB) -- a normal, safe size. Do not raise this
    // constant without re-deriving that arithmetic against the CURRENT max
    // location_id across content/*.yaml.
    //
    // Re-derived M4.10.2: real max location_id is now 9,002,301
    // (gathersanity's highest assigned id, base 9,000,000 + 2,302 rows),
    // up from 8,017,593 (M4.10.1) -- Containersanity's own max actually
    // DROPPED to 8,016,525 after M4.10.2's Task 1 carved 284 rows out of
    // it, but Gathersanity's new range is higher regardless. At
    // AP_ITEM_SYNTH_BASE (3,000,000) + 9,002,301 ~= 12,002,301, the
    // item_template vector tops out around 96 MB -- same safe order of
    // magnitude as before, so no change to the constant itself is needed
    // here. Re-derive again before the next large family (Itemsanity,
    // M4.10.6).
    //
    // Re-derived M4.10.6: real max location_id is now 12,539,354
    // (itemsanity's own highest assigned id, 39,355 real rows after
    // test-pollution + denylist filtering -- NOT the worst-case 68,298
    // originally assumed), up from 11,501,697 (craftsanity, M4.10.5).
    // At AP_ITEM_SYNTH_BASE (3,000,000) + that figure, the item_template
    // vector tops out around 124 MB -- same safe order of magnitude the
    // prior re-derivations already established (88 MB, then 96 MB), so
    // no change to the constant itself is needed. Itemsanity itself never
    // synthesizes anything (event-hook family, no DB rewrite) -- this
    // comment is re-derived anyway because it tracks the real max
    // location_id across every content/*.yaml, not just synthesizing
    // families. Re-derive again before the next large family lands.
    inline constexpr int64_t AP_ITEM_SYNTH_BASE = 3000000;

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
    // in APItemDisplay.cpp must pick the exact same column via
    // PickRewardColumn or it targets the wrong slot. Keep this array and
    // PickRewardColumn in sync if that function's preference order ever
    // changes.
    //
    // Finding I5 (M4.7 final review): identifying the "representative"
    // column here is necessary but not sufficient for a genuine multi-choice
    // quest. If the picked column turns out to be one of the 6
    // RewardChoiceItemID slots (index >= FIRST_CHOICE_COLUMN_INDEX below),
    // RewardColumnsToRewrite (below PickRewardColumn) additionally rewrites
    // every OTHER non-zero choice column to the same synthesized entry --
    // otherwise a player who picks a different (real) choice at turn-in
    // never triggers the synthesized reward, and the location becomes
    // permanently uncheckable. Fixed slots (RewardItem1-4) are never touched
    // beyond the one PickRewardColumn selects: those are separate items
    // always granted together, not mutually-exclusive alternatives, so
    // there is nothing to extend for them.
    inline constexpr std::array<char const*, 10> QUEST_REWARD_COLUMNS_IN_PREFERENCE_ORDER = {
        "RewardItem1", "RewardItem2", "RewardItem3", "RewardItem4",
        "RewardChoiceItemID1", "RewardChoiceItemID2", "RewardChoiceItemID3",
        "RewardChoiceItemID4", "RewardChoiceItemID5", "RewardChoiceItemID6"
    };

    // Index into QUEST_REWARD_COLUMNS_IN_PREFERENCE_ORDER (and the parallel
    // columnValues array) of the first RewardChoiceItemID slot -- everything
    // at or after this index is a player-choice column; everything before it
    // is a fixed/always-granted column. See Finding I5's note above.
    inline constexpr size_t FIRST_CHOICE_COLUMN_INDEX = 4;

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

    // Finding I5 (M4.7 final review), pure function unit-testable without a
    // DB connection: given PickRewardColumn's already-identified (column,
    // originalValue) pick and the same columnValues array, returns EVERY
    // (column name, original value) pair the caller must rewrite to the
    // synthesized entry -- always the picked column itself, plus, when the
    // picked column is one of the 6 RewardChoiceItemID slots, every OTHER
    // non-zero choice column too (these are mutually-exclusive turn-in
    // alternatives; whichever one the player actually picks must still
    // resolve to the synthesized item, or the location can never be
    // checked). Fixed slots (RewardItem1-4) never get this treatment --
    // those are separate items granted together, not alternatives, so the
    // returned vector is just the single picked pair in that case. Results
    // are in QUEST_REWARD_COLUMNS_IN_PREFERENCE_ORDER order (picked column
    // first, since it's always index-lowest or equal among what's returned).
    inline std::vector<std::pair<std::string, uint32_t>> RewardColumnsToRewrite(
        std::pair<std::string, uint32_t> const& picked,
        std::array<uint32_t, 10> const& columnValues)
    {
        std::vector<std::pair<std::string, uint32_t>> result{ picked };

        size_t pickedIndex = 0;
        while (pickedIndex < QUEST_REWARD_COLUMNS_IN_PREFERENCE_ORDER.size()
               && picked.first != QUEST_REWARD_COLUMNS_IN_PREFERENCE_ORDER[pickedIndex])
            ++pickedIndex;

        if (pickedIndex < FIRST_CHOICE_COLUMN_INDEX)
            return result; // fixed slot -- nothing else to extend

        for (size_t i = FIRST_CHOICE_COLUMN_INDEX; i < columnValues.size(); ++i)
        {
            if (i == pickedIndex || columnValues[i] == 0)
                continue;
            result.emplace_back(QUEST_REWARD_COLUMNS_IN_PREFERENCE_ORDER[i], columnValues[i]);
        }
        return result;
    }

    // M4.7.1.3: PickRewardColumn returning std::nullopt used to be treated
    // as an unexpected/defensive case (a quest that made it into
    // QUEST_ID_TO_LOCATION_ID "shouldn't" have zero reward columns) -- now
    // that extract_quest_rewards.py deliberately includes zero-reward
    // quests (is_filler_reward-tagged), it's a real, routine case. This
    // returns the single (column, originalValue) pair the caller should
    // rewrite instead of skipping: always RewardItem1 matched on its own
    // current value 0 (the same idempotent WHERE-matched-on-original-value
    // discipline every other rewrite in this file already uses), giving
    // the quest a real, checkable reward where it previously had none.
    inline std::pair<std::string, uint32_t> FallbackRewardColumnForFillerQuest()
    {
        return std::make_pair(std::string("RewardItem1"), uint32_t(0));
    }

    // location_id -> (loot_id, original_item_entry) for skinning_loot_template
    // rows (M4.10.2). Defined inline here (not in APItemDisplay.cpp
    // alongside its quest/vendor-map siblings, BuildLocationIdToQuestId/
    // BuildLocationIdToVendorSlot) so it stays independently unit-testable
    // from test_APItemDisplay.cpp's standalone doctest harness, which links
    // only this header plus doctest -- never APItemDisplay.cpp itself,
    // since that translation unit pulls in DatabaseEnv.h/QueryResult.h
    // (the real AzerothCore DB layer, requiring the full server build,
    // MySQL connector, etc.), unlike this function or
    // ArchipelagoGATHERSANITYContent.h, both of which have zero DB
    // dependency. Every other pure/testable function in this file
    // (SynthesizedEntryFor, PickRewardColumn, RewardColumnsToRewrite,
    // FallbackRewardColumnForFillerQuest) is inline here for exactly this
    // reason.
    //
    // M4.10.2 originally had a sibling BuildLocationIdToGameobjectLootSlot
    // here too, covering both families' `gameobject_loot`-triggered rows.
    // M4.11.4.1 removed Containersanity's own contribution to that map
    // (its rewrite to abstract zone-pool locations, credited by
    // ArchipelagoZonePoolScript.cpp instead, has no per-loot-row item to
    // substitute). M4.11.4.2 completed the retirement: Gathersanity's own
    // gathering_node sub-family was rewritten the same way (also now
    // zone_pool_credit-triggered, also credited by
    // ArchipelagoZonePoolScript.cpp), so no family emits a
    // GAMEOBJECT_LOOT_SLOT_TO_LOCATION_ID map at all anymore --
    // generate_content.py's per-kind emitter (_emit_cpp_trigger_lookup)
    // only emits a map for a trigger kind actually present in a family's
    // locations, so the symbol itself no longer exists in any regenerated
    // header. BuildLocationIdToGameobjectLootSlot and its
    // SynthesizeAndRewireLocations branch (APItemDisplay.cpp) were removed
    // here rather than left referencing a now-undefined symbol.
    //
    // Migration note (M4.11.4.2 fix round 1): a realm previously set up
    // under the old per-item Containersanity/Gathersanity mechanism (any
    // build before M4.11.4.1's Containersanity rewrite, or before this
    // milestone's own Gathersanity gathering_node rewrite) has real
    // gameobject_loot_template rows this module already rewrote to point at
    // a synthesized AP-display item entry. This milestone does not revert
    // those rows -- the same real, precedented exposure M4.11.4.1 already
    // accepted for Containersanity's own migration, now also applying to
    // Gathersanity's gathering_node. A fresh realm set up under this
    // version never touches gameobject_loot_template at all (Containersanity
    // and Gathersanity's own abstract zone-pool locations draw rewards from
    // the shared filler pool instead, credited by ArchipelagoZonePoolScript.cpp),
    // so this is a one-time, migration-only residue, not an ongoing concern.
    inline std::unordered_map<int64_t, std::pair<uint32_t, uint32_t>> BuildLocationIdToSkinningLootSlot()
    {
        std::unordered_map<int64_t, std::pair<uint32_t, uint32_t>> result;
        for (auto const& [key, locationId] : ArchipelagoGATHERSANITYContent::SKINNING_LOOT_SLOT_TO_LOCATION_ID)
            result.emplace(locationId, key);
        return result;
    }

    // Same shape again, for disenchant_loot_template (M4.10.2).
    inline std::unordered_map<int64_t, std::pair<uint32_t, uint32_t>> BuildLocationIdToDisenchantLootSlot()
    {
        std::unordered_map<int64_t, std::pair<uint32_t, uint32_t>> result;
        for (auto const& [key, locationId] : ArchipelagoGATHERSANITYContent::DISENCHANT_LOOT_SLOT_TO_LOCATION_ID)
            result.emplace(locationId, key);
        return result;
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

    // Persistent store for the display data SynthesizeAndRewireLocations
    // consumes once and previously discarded (M4.13). Populated at the same
    // call site as SynthesizeAndRewireLocations (ArchipelagoWorldScript::OnUpdate)
    // the first time non-empty slot_data arrives; queried later, at any time,
    // by ".ap missing" (ArchipelagoCommandScript.cpp).
    std::unordered_map<int64_t, Archipelago::ApItemDisplay> const& GetSynthesizedDisplayData();
    void SetSynthesizedDisplayData(std::unordered_map<int64_t, Archipelago::ApItemDisplay> const& display);
}
