// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoLootSlotScript.cpp
//
// M4.10.1 (Containersanity): recognizes a loot of a synthesized AP display
// item from ANY loot source (Task 5/6 rewrote the relevant loot_template
// item_id column to one of the synthesized AP item ids for that slot) and
// either sends the check + destroys the item (first loot) or applies
// loot_slot_check_repeat_behavior (every loot after).
//
// Hooks PLAYERHOOK_ON_LOOT_ITEM generically for ANY AP-synthesized item
// looted from ANY loot source -- not Containersanity-specific by design
// (see this milestone's plan header). M4.10.2's creature_loot_template
// skinning-loot slots reuse this SAME script/hook unchanged; they only
// need their own BuildLocationIdToXxxSlot-shaped population of the
// synthesis map and archipelago_lootslot_original_items rows, both
// upstream of this file. This coexists safely with the pre-existing
// ArchipelagoLootScript.cpp (Fishing Quest's curated real-item-entry
// hook on the same PLAYERHOOK_ON_LOOT_ITEM) since the entry ranges never
// overlap (see the regression test for this in test_APItemDisplay.cpp).
#include "Chat.h"
#include "Item.h"
#include "Player.h"
#include "ScriptMgr.h"
#include "APItemDisplay.h"
#include "ArchipelagoManager.h"
#include "ArchipelagoRealmState.h"
#include "DatabaseEnv.h"
#include "Log.h"

namespace
{
    // Same real value/justification as ArchipelagoInterceptionScript.cpp's
    // own FILLER_CONSUMABLE_ENTRY (file-scoped there too, in its own
    // anonymous namespace -- not a shared/exported symbol, so this file
    // declares its own copy rather than reaching across translation
    // units): "Tough Jerky", item_template entry 117, confirmed real
    // against data/sql/base/db_world/item_template.sql.
    constexpr uint32_t FILLER_CONSUMABLE_ENTRY = 117;

    uint32_t GetLootSlotOriginalItemId(int64_t locationId)
    {
        if (QueryResult result = WorldDatabase.Query(
                "SELECT original_item_id FROM archipelago_lootslot_original_items WHERE location_id = {}", locationId))
            return (*result)[0].Get<uint32>();
        return 0;
    }

    void ApplyLootSlotRepeatBehavior(Player* player, int64_t locationId)
    {
        std::string behavior = sArchipelagoRealmState->GetLootSlotCheckRepeatBehavior();
        if (behavior == "vanilla_item")
        {
            uint32_t originalItemId = GetLootSlotOriginalItemId(locationId);
            if (originalItemId != 0)
                player->AddItem(originalItemId, 1);
            else
                LOG_ERROR("module.archipelago_wow",
                    "Archipelago: vanilla_item repeat behavior for location {} has no "
                    "archipelago_lootslot_original_items row -- nothing granted", locationId);
            return;
        }
        if (behavior == "gold_conversion")
        {
            uint32_t originalItemId = GetLootSlotOriginalItemId(locationId);
            if (ItemTemplate const* proto = sObjectMgr->GetItemTemplate(originalItemId))
                player->ModifyMoney(static_cast<int32>(proto->SellPrice));
            else
                LOG_ERROR("module.archipelago_wow",
                    "Archipelago: gold_conversion repeat behavior for location {} has no "
                    "recoverable original item template -- nothing refunded", locationId);
            return;
        }
        if (behavior == "filler_consumable")
        {
            player->AddItem(FILLER_CONSUMABLE_ENTRY, 1);
            return;
        }
        // suppress_entirely (default): a looted item was never "purchased"
        // the way a vendor slot's was, so there is no gold to refund --
        // just a plain system message, no ModifyMoney call needed here
        // (unlike ArchipelagoInterceptionScript.cpp's vendor equivalent).
        ChatHandler(player->GetSession()).PSendSysMessage(
            "Archipelago: you have already sent this check.");
    }
}

class ArchipelagoLootSlotScript : public PlayerScript
{
public:
    ArchipelagoLootSlotScript() : PlayerScript("ArchipelagoLootSlotScript", { PLAYERHOOK_ON_LOOT_ITEM }) { }

    void OnPlayerLootItem(Player* player, Item* item, uint32 /*count*/, ObjectGuid /*lootguid*/) override
    {
        if (item == nullptr)
            return;
        uint32_t entry = item->GetEntry();
        if (entry < Archipelago::ItemDisplay::AP_ITEM_SYNTH_BASE)
            return;
        int64_t locationId = static_cast<int64_t>(entry) - Archipelago::ItemDisplay::AP_ITEM_SYNTH_BASE;

        // Destroy unconditionally, same discipline as
        // ArchipelagoInterceptionScript.cpp's vendor equivalent -- the
        // synthesized placeholder must never end up in the player's bags;
        // a repeat visit's real reward (if any) is granted separately by
        // ApplyLootSlotRepeatBehavior via Player::AddItem.
        player->DestroyItem(item->GetBagSlot(), item->GetSlot(), true);

        if (!sArchipelagoRealmState->HasSentLocationCheck(static_cast<uint64_t>(locationId)))
        {
            sArchipelagoMgr->SendLocationChecks({ locationId });
            return;
        }

        ApplyLootSlotRepeatBehavior(player, locationId);
    }
};

void AddArchipelagoLootSlotScripts()
{
    new ArchipelagoLootSlotScript();
}
