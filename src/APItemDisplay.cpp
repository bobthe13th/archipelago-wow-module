// azerothcore-wotlk/modules/archipelago_wow/src/APItemDisplay.cpp
#include "APItemDisplay.h"

#include "APInterception.h"
#include "ArchipelagoQuestRewardsContentTable.h"
#include "ArchipelagoVendorStockContentTable.h"
#include "DatabaseEnv.h"
#include "Log.h"

namespace
{
    uint32_t IconEntryFor(Archipelago::Interception::ItemClass itemClass)
    {
        using Archipelago::Interception::ItemClass;
        switch (itemClass)
        {
            case ItemClass::Progression: return 850100;
            case ItemClass::Useful:      return 850101;
            case ItemClass::Trap:        return 850102;
            case ItemClass::Filler:      return 850103;
        }
        return 850103; // unreachable, keeps MSVC's exhaustiveness warning quiet
    }

    // Builds an unordered_map<int64_t /*location_id*/, uint32_t /*original quest_id*/>
    // reversed from QUEST_ID_TO_LOCATION_ID -- SynthesizeAndRewireLocations iterates
    // `display` by location_id and needs to go the OTHER direction (location -> trigger
    // fields) to know which quest_template row to touch.
    std::unordered_map<int64_t, uint32_t> BuildLocationIdToQuestId()
    {
        std::unordered_map<int64_t, uint32_t> result;
        for (auto const& [questId, locationId] : ArchipelagoQUEST_REWARDSContent::QUEST_ID_TO_LOCATION_ID)
            result[locationId] = questId;
        return result;
    }

    // Reversed from the REAL VENDOR_SLOT_TO_LOCATION_ID shape, which is keyed
    // on (npc_entry, wow_item_entry) -- the actual WoW item entry the vendor
    // sells -- NOT (npc_entry, item_slot). It was re-keyed this way in Task 1
    // after review because slot=0 collides for ~99% of real npc_vendor rows,
    // whereas the real item entry is unique in practice. That real item entry
    // is also exactly what the corrected npc_vendor UPDATE below needs, since
    // this task's Global Constraints require matching on the ORIGINAL value
    // in the WHERE clause rather than blind-overwriting by slot/PK alone.
    std::unordered_map<int64_t, std::pair<uint32_t, uint32_t>> BuildLocationIdToVendorSlot()
    {
        std::unordered_map<int64_t, std::pair<uint32_t, uint32_t>> result;
        for (auto const& [npcAndItem, locationId] : ArchipelagoVENDOR_STOCKContent::VENDOR_SLOT_TO_LOCATION_ID)
            result[locationId] = npcAndItem;
        return result;
    }

    void SynthesizeItemTemplateRow(uint32_t entry, std::string const& name, uint32_t iconEntry)
    {
        // item names arrive verbatim from the AP server's slot_data and can
        // contain apostrophes (e.g. "Alice's Sword of Might") -- escape
        // before splicing into the raw SQL string literal below.
        std::string escapedName(name);
        WorldDatabase.EscapeString(escapedName);

        // Borrows the icon's real displayid rather than duplicating it --
        // one extra read avoids four hardcoded displayid literals here
        // drifting from Task 5b's migration if it's ever re-run with
        // different resolved values.
        WorldDatabase.Execute(
            "INSERT INTO item_template (entry, class, subclass, name, displayid, Quality, Flags, BuyCount, "
            "BuyPrice, SellPrice, InventoryType, MaxCount, Stackable, ContainerSlots, bonding, VerifiedBuild) "
            "SELECT {}, class, subclass, '{}', displayid, Quality, Flags, BuyCount, BuyPrice, 0, InventoryType, "
            "MaxCount, Stackable, ContainerSlots, bonding, VerifiedBuild "
            "FROM item_template WHERE entry = {} "
            "ON DUPLICATE KEY UPDATE name = VALUES(name)",
            entry, escapedName, iconEntry
        );
    }
}

namespace Archipelago::ItemDisplay
{
    void SynthesizeAndRewireLocations(std::unordered_map<int64_t, Archipelago::ApItemDisplay> const& display)
    {
        auto locationToQuestId = BuildLocationIdToQuestId();
        auto locationToVendorSlot = BuildLocationIdToVendorSlot();

        for (auto const& [locationId, itemDisplay] : display)
        {
            uint32_t entry = SynthesizedEntryFor(locationId);
            auto itemClass = Archipelago::Interception::ClassifyItem(itemDisplay.flags);
            SynthesizeItemTemplateRow(entry, itemDisplay.name, IconEntryFor(itemClass));

            if (auto it = locationToQuestId.find(locationId); it != locationToQuestId.end())
            {
                uint32_t questId = it->second;
                for (std::string const& column : { "RewardItem1", "RewardItem2", "RewardItem3", "RewardItem4",
                                                     "RewardChoiceItemID1", "RewardChoiceItemID2", "RewardChoiceItemID3",
                                                     "RewardChoiceItemID4", "RewardChoiceItemID5", "RewardChoiceItemID6" })
                {
                    // Every reward-slot column is a plain int (not part of
                    // quest_template's primary key -- confirmed schema),
                    // so this is a safe no-op for every column this quest
                    // doesn't actually use (WHERE matches zero rows).
                    WorldDatabase.Execute(
                        "UPDATE quest_template SET {} = {} WHERE ID = {}",
                        column, entry, questId
                    );
                }
                continue;
            }

            if (auto it = locationToVendorSlot.find(locationId); it != locationToVendorSlot.end())
            {
                auto [npcEntry, wowItemEntry] = it->second;
                // Matches on the original wow_item_entry per this task's
                // idempotency constraint (Global Constraints: DB writes
                // always match on the ORIGINAL value in the WHERE clause,
                // never blind-overwrite by primary key alone) -- after this
                // UPDATE runs once, npc_vendor.item no longer equals
                // wowItemEntry for this row, so a second run of this same
                // statement matches zero rows and is a safe no-op.
                WorldDatabase.Execute(
                    "UPDATE npc_vendor SET item = {} WHERE entry = {} AND item = {}",
                    entry, npcEntry, wowItemEntry
                );
                continue;
            }

            LOG_ERROR("module.archipelago_wow",
                "Archipelago: slot_data ap_item_display had location {} with no matching "
                "quest_reward or vendor_purchase trigger -- skipped, no row to rewrite",
                locationId);
        }
    }
}
