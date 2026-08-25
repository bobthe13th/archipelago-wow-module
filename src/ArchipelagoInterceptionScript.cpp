// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoInterceptionScript.cpp
//
// M4.7: recognizes a purchase from a Vendor Inventories-tagged slot (Task 6
// rewrote npc_vendor.item to one of the 4 synthesized AP item ids for that
// slot) and either sends the check + destroys the item (first interaction)
// or applies vendor_check_repeat_behavior (every interaction after).
#include "Item.h"
#include "Player.h"
#include "ScriptMgr.h"
#include "APItemDisplay.h"
#include "ArchipelagoManager.h"
#include "ArchipelagoRealmState.h"
#include "DatabaseEnv.h"

namespace
{
    bool LocationAlreadyChecked(int64_t locationId)
    {
        // Reuses ArchipelagoRealmState's existing durable sent-check tracking
        // (backing SendLocationChecks's own resend-on-reconnect discipline,
        // see ArchipelagoManager::SendLocationChecks) rather than a new
        // table, so "already checked" here can never disagree with what the
        // AP server itself was actually told.
        return sArchipelagoRealmState->HasSentLocationCheck(static_cast<uint64_t>(locationId));
    }

    // "vanilla_item"/"gold_conversion" both need the ORIGINAL item id, which
    // this class doesn't have direct access to (Task 6 only had it transiently
    // in scope while rewriting the npc_vendor row) -- Task 8 persists it into
    // archipelago_vendor_original_items (location_id -> original_item_id) at
    // synthesis time (see APItemDisplay.cpp's vendor branch), so it can be
    // recovered here.
    uint32_t GetOriginalItemId(int64_t locationId)
    {
        if (QueryResult result = WorldDatabase.Query(
                "SELECT original_item_id FROM archipelago_vendor_original_items WHERE location_id = {}", locationId))
            return (*result)[0].Get<uint32>();
        return 0;
    }

    void ApplyRepeatBehavior(Player* player, int64_t locationId, uint32_t vendorSlotItem)
    {
        std::string behavior = sArchipelagoRealmState->GetVendorCheckRepeatBehavior();
        if (behavior == "vanilla_item")
        {
            uint32_t originalItemId = GetOriginalItemId(locationId);
            if (originalItemId != 0)
                player->StoreNewItemInBestSlots(originalItemId, 1);
            return;
        }
        if (behavior == "gold_conversion")
        {
            uint32_t originalItemId = GetOriginalItemId(locationId);
            if (ItemTemplate const* proto = sObjectMgr->GetItemTemplate(originalItemId))
                player->ModifyMoney(static_cast<int32>(proto->SellPrice));
            return;
        }
        if (behavior == "filler_consumable")
        {
            player->StoreNewItemInBestSlots(5, 1); // "Tough Jerky" -- a real, harmless vanilla filler item
            return;
        }
        // suppress_entirely (default): do nothing -- the caller already
        // destroyed the synthesized item and stops here for this branch.
        (void)vendorSlotItem;
    }
}

class ArchipelagoInterceptionScript : public PlayerScript
{
public:
    ArchipelagoInterceptionScript()
        : PlayerScript("ArchipelagoInterceptionScript",
            { PLAYERHOOK_ON_BEFORE_STORE_OR_EQUIP_NEW_ITEM, PLAYERHOOK_ON_AFTER_STORE_OR_EQUIP_NEW_ITEM }) { }

    void OnPlayerBeforeStoreOrEquipNewItem(Player* /*player*/, uint32 /*vendorslot*/, uint32& item, uint8 /*count*/,
        uint8 /*bag*/, uint8 /*slot*/, ItemTemplate const* /*pProto*/, Creature* pVendor, VendorItem const* /*crItem*/,
        bool /*bStore*/) override
    {
        if (item < Archipelago::ItemDisplay::AP_ITEM_SYNTH_BASE || pVendor == nullptr)
            return;
        int64_t locationId = static_cast<int64_t>(item) - Archipelago::ItemDisplay::AP_ITEM_SYNTH_BASE;
        if (LocationAlreadyChecked(locationId) &&
            sArchipelagoRealmState->GetVendorCheckRepeatBehavior() == "vanilla_item")
        {
            // Swap back to the real item BEFORE it's stored -- the one case
            // this pre-store hook can act on directly; the other three
            // repeat behaviors are handled after storage, in the After hook.
            uint32_t originalItemId = GetOriginalItemId(locationId);
            if (originalItemId != 0)
                item = originalItemId;
        }
    }

    void OnPlayerAfterStoreOrEquipNewItem(Player* player, uint32 /*vendorslot*/, Item* item, uint8 /*count*/,
        uint8 /*bag*/, uint8 /*slot*/, ItemTemplate const* /*pProto*/, Creature* /*pVendor*/,
        VendorItem const* /*crItem*/, bool /*bStore*/) override
    {
        if (item == nullptr)
            return;
        uint32_t entry = item->GetEntry();
        if (entry < Archipelago::ItemDisplay::AP_ITEM_SYNTH_BASE)
            return;
        int64_t locationId = static_cast<int64_t>(entry) - Archipelago::ItemDisplay::AP_ITEM_SYNTH_BASE;

        if (!LocationAlreadyChecked(locationId))
        {
            sArchipelagoMgr->SendLocationChecks({ locationId });
            player->DestroyItem(item->GetBagSlot(), item->GetSlot(), true);
            return;
        }

        std::string behavior = sArchipelagoRealmState->GetVendorCheckRepeatBehavior();
        if (behavior != "vanilla_item") // vanilla_item already handled pre-store above
        {
            player->DestroyItem(item->GetBagSlot(), item->GetSlot(), true);
            ApplyRepeatBehavior(player, locationId, entry);
        }
    }
};

void AddArchipelagoInterceptionScripts()
{
    new ArchipelagoInterceptionScript();
}
