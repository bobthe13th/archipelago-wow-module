// azerothcore-wotlk/modules/archipelago_wow/src/APItemDisplay.cpp
#include "APItemDisplay.h"

#include "APInterception.h"
#include "ArchipelagoQuestRewardsContentTable.h"
#include "ArchipelagoVendorStockContentTable.h"
#include "DatabaseEnv.h"
#include "Log.h"
#include "QueryResult.h"

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

    // Reversed from QUEST_REWARD_SLOT_TO_LOCATION_ID (M4.11.5.0.6) --
    // SynthesizeAndRewireLocations iterates `display` by location_id and
    // needs to go the OTHER direction (location -> its own exact quest_id +
    // column_index) to know which single quest_template column this
    // location's own reward slot is.
    std::unordered_map<int64_t, std::pair<uint32_t, uint32_t>> BuildLocationIdToQuestRewardSlot()
    {
        std::unordered_map<int64_t, std::pair<uint32_t, uint32_t>> result;
        for (auto const& [questIdAndColumn, locationId] : ArchipelagoQUEST_REWARDSContent::QUEST_REWARD_SLOT_TO_LOCATION_ID)
            result[locationId] = questIdAndColumn;
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
        //
        // The ON DUPLICATE KEY UPDATE clause must refresh every
        // classification-relevant column the SELECT above computes from the
        // icon source row (class, subclass, displayid, Quality, Flags,
        // InventoryType, bonding) -- not just name. A re-seed against an
        // already-set-up world DB (same realm, new seed -- a normal
        // randomizer workflow) reuses this same synthesized entry
        // (SynthesizedEntryFor is a pure function of location_id), but the
        // new seed's item at that location can have a DIFFERENT
        // classification (e.g. Progression last time, Trap this time). If
        // only name were refreshed, the row would show a new name paired
        // with the OLD icon/displayid -- silently showing the wrong
        // classification to the player.
        WorldDatabase.Execute(
            "INSERT INTO item_template (entry, class, subclass, name, displayid, Quality, Flags, BuyCount, "
            "BuyPrice, SellPrice, InventoryType, MaxCount, Stackable, ContainerSlots, bonding, VerifiedBuild) "
            "SELECT {}, class, subclass, '{}', displayid, Quality, Flags, BuyCount, BuyPrice, 0, InventoryType, "
            "MaxCount, Stackable, ContainerSlots, bonding, VerifiedBuild "
            "FROM item_template WHERE entry = {} "
            "ON DUPLICATE KEY UPDATE name = VALUES(name), class = VALUES(class), subclass = VALUES(subclass), "
            "displayid = VALUES(displayid), Quality = VALUES(Quality), Flags = VALUES(Flags), "
            "InventoryType = VALUES(InventoryType), bonding = VALUES(bonding)",
            entry, escapedName, iconEntry
        );
    }
}

namespace
{
    std::unordered_map<int64_t, Archipelago::ApItemDisplay> g_synthesizedDisplayData;
}

namespace Archipelago::ItemDisplay
{
    std::unordered_map<int64_t, Archipelago::ApItemDisplay> const& GetSynthesizedDisplayData()
    {
        return g_synthesizedDisplayData;
    }

    void SetSynthesizedDisplayData(std::unordered_map<int64_t, Archipelago::ApItemDisplay> const& display)
    {
        g_synthesizedDisplayData = display;
    }

    void SynthesizeAndRewireLocations(std::unordered_map<int64_t, Archipelago::ApItemDisplay> const& display)
    {
        auto locationToQuestRewardSlot = BuildLocationIdToQuestRewardSlot();
        auto locationToVendorSlot = BuildLocationIdToVendorSlot();
        auto locationToSkinningLootSlot = BuildLocationIdToSkinningLootSlot();
        auto locationToDisenchantLootSlot = BuildLocationIdToDisenchantLootSlot();
        uint32_t newlySynthesizedCount = 0;

        for (auto const& [locationId, itemDisplay] : display)
        {
            uint32_t entry = SynthesizedEntryFor(locationId);

            // SynthesizedEntryFor is a pure function of locationId, so a
            // re-seed against an already-set-up realm (a normal randomizer
            // workflow -- see SynthesizeItemTemplateRow's own comment below
            // on exactly this scenario) can reuse this same entry for a
            // DIFFERENT item's name/classification. Checking mere row
            // EXISTENCE would wrongly count that as "not new" even though
            // the name/icon are about to be rewritten to something new --
            // comparing against the row's CURRENT name catches a real
            // content change even when the entry already existed (name is
            // always rewritten by SynthesizeItemTemplateRow whenever the
            // underlying item genuinely changed, since it encodes
            // "<player>'s <item>"). A name match means this exact
            // location's content is unchanged since the last run; a
            // mismatch (or no row at all) means it's genuinely new/changed
            // and the restart-required warning below should fire for it.
            std::string escapedNewName(itemDisplay.name);
            WorldDatabase.EscapeString(escapedNewName);
            bool contentUnchanged = static_cast<bool>(WorldDatabase.Query(
                "SELECT name FROM item_template WHERE entry = {} AND name = '{}'",
                entry, escapedNewName));
            if (!contentUnchanged)
                ++newlySynthesizedCount;

            auto itemClass = Archipelago::Interception::ClassifyItem(itemDisplay.flags);
            SynthesizeItemTemplateRow(entry, itemDisplay.name, IconEntryFor(itemClass));

            if (auto it = locationToQuestRewardSlot.find(locationId); it != locationToQuestRewardSlot.end())
            {
                auto const& [questId, columnIndex] = it->second;
                std::string column = Archipelago::ItemDisplay::QUEST_REWARD_COLUMNS_IN_PREFERENCE_ORDER[columnIndex];

                if (QueryResult result = WorldDatabase.Query(
                        "SELECT {}, RewardAmount1 FROM quest_template WHERE ID = {}", column, questId))
                {
                    Field* fields = result->Fetch();
                    uint32_t originalValue = fields[0].Get<uint32_t>();
                    uint32_t rewardAmount1 = fields[1].Get<uint32_t>();
                    if (columnIndex == 0 && rewardAmount1 == 0)
                    {
                        // M4.11.5.0.6: the is_filler_reward fallback case (a
                        // quest with no real reward at all) always lands here
                        // as column_index 0 (RewardItem1) with its own real
                        // RewardAmount1 still at 0 -- force it to 1 in the
                        // same UPDATE, same "RewardItemId != 0 with count ==
                        // 0 means don't actually reward it" bug this project
                        // already found and fixed once (M4.7.1.3). A genuine
                        // real RewardItem1 fixed-slot reward never has
                        // RewardAmount1 == 0 in real vanilla data, so this
                        // branch never fires for a real reward by
                        // construction.
                        WorldDatabase.Execute(
                            "UPDATE quest_template SET {} = {}, RewardAmount1 = 1 WHERE ID = {} AND {} = {}",
                            column, entry, questId, column, originalValue);
                    }
                    else
                    {
                        WorldDatabase.Execute(
                            "UPDATE quest_template SET {} = {} WHERE ID = {} AND {} = {}",
                            column, entry, questId, column, originalValue);
                    }
                }
                else
                {
                    LOG_ERROR("module.archipelago_wow",
                        "Archipelago: quest {} slot {} (location {}) has no quest_template row at all "
                        "-- content/data desync, no trigger column to rewrite, skipped",
                        questId, columnIndex, locationId);
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
                // maxcount=1 + a large incrtime (never 0 -- ObjectMgr::IsVendorItemValid
                // rejects any row with maxcount > 0 && incrtime == 0 at data-load time
                // (ObjectMgr.cpp:10416-10423), silently dropping it from the vendor's
                // list entirely, rather than the more commonly assumed "restocks
                // instantly"; separately, Creature.cpp's GetVendorItemCurrentCount/
                // UpdateVendorItemCurrentCount also use incrtime as a divisor, which 0
                // would additionally break if that guard were ever bypassed) makes the
                // client's own vendor UI show this slot as 1-in-stock, then
                // out-of-stock after purchase -- a strictly better player
                // experience than today's buy-then-refund, layered on top
                // of (not replacing) the interception hook below, which
                // remains the real enforcement (e.g. against a GM .additem
                // bypass of the vendor UI). Stock counts are tracked
                // in-memory per Creature instance, not persisted -- a
                // worldserver restart shows 1-in-stock again for an
                // already-checked slot even though the interception hook
                // still correctly refuses to re-grant the check; cosmetic
                // only, not an exploit.
                WorldDatabase.Execute(
                    "UPDATE npc_vendor SET item = {}, maxcount = 1, incrtime = 2147483647 "
                    "WHERE entry = {} AND item = {}",
                    entry, npcEntry, wowItemEntry
                );

                // Persist the ORIGINAL wow item entry (already in scope above,
                // from the same npcEntry/wowItemEntry destructure the UPDATE
                // just used) so ArchipelagoInterceptionScript.cpp's repeat-
                // purchase behaviors (vanilla_item/gold_conversion) can
                // recover it later without re-deriving it from anything
                // lossy (e.g. the synthesized item's player-chosen name).
                // ON DUPLICATE KEY UPDATE keeps this idempotent across a
                // re-seed against the same realm, same as the UPDATE above.
                WorldDatabase.Execute(
                    "INSERT INTO archipelago_vendor_original_items (location_id, original_item_id) "
                    "VALUES ({}, {}) ON DUPLICATE KEY UPDATE original_item_id = VALUES(original_item_id)",
                    locationId, wowItemEntry
                );

                // Design spec Sec6: the synthesized item's price must come
                // from the game's own normal vendor-list rendering -- i.e.
                // the REAL vendor item's BuyPrice, not the 4 classification-
                // icon templates' own BuyPrice (0, inherited from the
                // giftbox icon items SynthesizeItemTemplateRow copies from).
                // Without this, every synthesized vendor slot is free, and a
                // vendor with unlimited stock lets a player repeat-buy it
                // for free real items (vanilla_item) or free gold
                // (gold_conversion) -- an unlimited duplication exploit. Kept
                // in sync here (not baked into SynthesizeItemTemplateRow's
                // ON DUPLICATE KEY UPDATE) because only the vendor branch has
                // a real "price" concept at all -- quest rewards are never
                // purchased.
                //
                // MySQL 8.4 (this project's real target -- confirmed via
                // DatabaseWorkerPool.h's MIN_MYSQL_SERVER_VERSION and
                // docker-compose.yml's mysql:8.4 image, NOT MariaDB) rejects
                // an UPDATE whose subquery SELECTs from the SAME table being
                // updated (ER_UPDATE_TABLE_USED, error 1093) -- a prior
                // revision of this statement used exactly that form and
                // silently failed every time (WorldDatabase.Execute is
                // fire-and-forget async, so the error only ever reached the
                // log, never a caller). The standard MySQL-safe multi-table
                // UPDATE-JOIN form below has no such restriction, and also
                // degrades to a safe no-op (rather than a NULL-propagation
                // hazard) if wowItemEntry doesn't match any row.
                WorldDatabase.Execute(
                    "UPDATE item_template AS tgt JOIN item_template AS src ON src.entry = {} "
                    "SET tgt.BuyPrice = src.BuyPrice WHERE tgt.entry = {}",
                    wowItemEntry, entry
                );
                continue;
            }

            // M4.11.4.2: the gameobject_loot branch that used to live here
            // (Gathersanity's own gathering_node rows, keyed through
            // BuildLocationIdToGameobjectLootSlot) was removed once
            // gathering_node was rewritten to zone_pool_credit -- see
            // APItemDisplay.h's comment on the removed
            // BuildLocationIdToGameobjectLootSlot for the full history. No
            // family emits a gameobject_loot-triggered row anymore.

            if (auto it = locationToSkinningLootSlot.find(locationId); it != locationToSkinningLootSlot.end())
            {
                auto const& [lootId, originalItemEntry] = it->second;

                // skinning_loot_template's real PK is (Entry, Item, GroupId),
                // but GroupId is deliberately NOT in this WHERE clause --
                // confirmed live during planning that GroupId is AzerothCore's
                // normal multi-group loot mechanic here (most real rows use
                // GroupId=1, not 0) and that zero real (Entry, Item) pairs
                // span more than one GroupId, so matching on (Entry, Item)
                // alone is safe, unambiguous, and correctly reaches every real
                // row regardless of its GroupId -- same idempotent shape as
                // every other synthesis branch here.
                WorldDatabase.Execute(
                    "UPDATE skinning_loot_template SET Item = {} WHERE Entry = {} AND Item = {}",
                    entry, lootId, originalItemEntry
                );

                // Persist the ORIGINAL wow item entry, same rationale/shape
                // as the gameobject-loot branch above -- ArchipelagoLootSlotScript.cpp's
                // repeat-loot behaviors need it back after Item has been
                // overwritten to point at the synthesized entry.
                WorldDatabase.Execute(
                    "INSERT INTO archipelago_lootslot_original_items (location_id, original_item_id) "
                    "VALUES ({}, {}) ON DUPLICATE KEY UPDATE original_item_id = VALUES(original_item_id)",
                    locationId, originalItemEntry
                );
                continue;
            }

            if (auto it = locationToDisenchantLootSlot.find(locationId); it != locationToDisenchantLootSlot.end())
            {
                auto const& [lootId, originalItemEntry] = it->second;

                // Same GroupId reasoning as the skinning branch above --
                // disenchant_loot_template's real rows split 18/GroupId=0 vs
                // 105/GroupId=1, zero (Entry, Item) collisions across groups,
                // so GroupId is deliberately omitted from this WHERE clause too.
                WorldDatabase.Execute(
                    "UPDATE disenchant_loot_template SET Item = {} WHERE Entry = {} AND Item = {}",
                    entry, lootId, originalItemEntry
                );

                WorldDatabase.Execute(
                    "INSERT INTO archipelago_lootslot_original_items (location_id, original_item_id) "
                    "VALUES ({}, {}) ON DUPLICATE KEY UPDATE original_item_id = VALUES(original_item_id)",
                    locationId, originalItemEntry
                );
                continue;
            }

            LOG_ERROR("module.archipelago_wow",
                "Archipelago: slot_data ap_item_display had location {} with no matching "
                "quest_reward, vendor_purchase, gameobject_loot, skinning_loot, or "
                "disenchant_loot trigger -- skipped, no row to rewrite",
                locationId);
        }

        // Finding C2 (M4.7 final review): this function runs from
        // ArchipelagoWorldScript::OnUpdate, which fires only AFTER
        // SetInitialWorldSettings() has already loaded item_template/
        // npc_vendor/quest_template into their in-memory caches at startup.
        // The DB rows just written above are correct, but this AzerothCore
        // checkout has no live-reload path for any of those tables (no bare
        // `.reload item_template`, confirmed against
        // src/server/scripts/Commands/cs_reload.cpp), so the vendor/quest/
        // loot slot this run just rewrote still shows the REAL WoW item
        // in-game until the process restarts and reloads those caches from
        // disk. skinning_loot_template/disenchant_loot_template (M4.10.2's
        // Gathersanity synthesis branches above) are cached in-memory too,
        // same restart requirement. gameobject_loot_template is NOT among
        // these anymore as of M4.11.4.2: Containersanity's own rewrite to
        // abstract zone-pool locations already retired its synthesis branch
        // in M4.11.4.1, and Gathersanity's own gathering_node sub-family
        // (M4.10.2's original gameobject_loot consumer) was rewritten the
        // same way in M4.11.4.2 -- no family emits a gameobject_loot-kind
        // location, and no branch in this function writes to that table,
        // anymore.
        // Without this log, that looks like the feature silently did
        // nothing rather than "worked, but needs a restart to show." M4.7.1
        // finding #2: this used to fire on EVERY connection with non-empty
        // slot_data, not just the first -- newlySynthesizedCount (computed
        // above) is what actually distinguishes "did real work, you need a
        // restart" from "ran again, changed nothing, you're already done."
        if (newlySynthesizedCount > 0)
        {
            LOG_WARN("module.archipelago_wow",
                "Archipelago: synthesized {} AP-display item(s) and rewrote vendor/quest reward/"
                "loot slot data -- a worldserver RESTART is required before these changes take "
                "effect (item_template/npc_vendor/quest_template/skinning_loot_template/"
                "disenchant_loot_template are cached in memory and have no live-reload path)",
                newlySynthesizedCount);
        }
        else if (!display.empty())
        {
            LOG_INFO("module.archipelago_wow",
                "Archipelago: {} AP-display location(s) already synthesized, 0 new -- no "
                "restart needed",
                display.size());
        }
    }
}
