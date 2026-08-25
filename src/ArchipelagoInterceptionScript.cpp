// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoInterceptionScript.cpp
//
// M4.7: recognizes a purchase from a Vendor Inventories-tagged slot (Task 6
// rewrote npc_vendor.item to one of the 4 synthesized AP item ids for that
// slot) and either sends the check + destroys the item (first interaction)
// or applies vendor_check_repeat_behavior (every interaction after).
//
// Single-hook design (After only, no Before hook): an earlier revision also
// hooked PLAYERHOOK_ON_BEFORE_STORE_OR_EQUIP_NEW_ITEM to swap the synthesized
// item id back to the real one pre-store for vanilla_item, but
// Player::_StoreOrEquipNewItem (Player.cpp) computes the storage destination
// (vDest/uiDest, via CanStoreNewItem/CanEquipNewItem) against the SYNTHESIZED
// item's template *before* the Before-hook runs -- swapping `item` there
// still stores/equips the real item into a destination that was only ever
// validated against the placeholder, bypassing the real item's unique-item
// MaxCount limit and any faction/reputation vendor gating it should have had.
// Handling every repeat behavior uniformly, after the (harmless, always-
// unique-count-1) placeholder has actually been stored and then destroyed,
// and granting the real effect via Player::AddItem (which runs its own full
// CanStoreNewItem validation) avoids that entirely.
#include <cmath>

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
    // "Tough Jerky" (item_template entry 117) -- confirmed against this
    // checkout's data/sql/base/db_world/item_template.sql; entry 5 does not
    // exist in this client's item_template at all (lowest real entry is 17).
    constexpr uint32_t FILLER_CONSUMABLE_ENTRY = 117;

    bool LocationAlreadyChecked(int64_t locationId)
    {
        // Reuses ArchipelagoRealmState's existing durable sent-check tracking
        // (backing SendLocationChecks's own resend-on-reconnect discipline,
        // see ArchipelagoManager::SendLocationChecks) rather than a new
        // table, so "already checked" here can never disagree with what the
        // AP server itself was actually told.
        return sArchipelagoRealmState->HasSentLocationCheck(static_cast<uint64_t>(locationId));
    }

    // "vanilla_item"/"gold_conversion"/the suppress_entirely refund all need
    // the ORIGINAL item id, which this class doesn't have direct access to
    // (Task 6 only had it transiently in scope while rewriting the
    // npc_vendor row) -- Task 8 persists it into
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

    // Called for every REPEAT purchase of an already-checked vendor slot
    // (the caller has already destroyed the synthesized placeholder by the
    // time this runs -- see OnPlayerAfterStoreOrEquipNewItem). `pVendor`/
    // `crItem`/`count` are threaded straight through from the hook's own
    // parameters (the same values Player::BuyItemFromVendorSlot used to
    // charge for this purchase in the first place) so suppress_entirely's
    // refund below can reproduce that exact charge rather than assuming a
    // flat, undiscounted BuyPrice.
    void ApplyRepeatBehavior(Player* player, int64_t locationId, Creature* pVendor, VendorItem const* crItem, uint8_t count)
    {
        std::string behavior = sArchipelagoRealmState->GetVendorCheckRepeatBehavior();
        if (behavior == "vanilla_item")
        {
            uint32_t originalItemId = GetOriginalItemId(locationId);
            if (originalItemId != 0)
                player->AddItem(originalItemId, 1);
            else
                LOG_ERROR("module.archipelago_wow",
                    "Archipelago: vanilla_item repeat behavior for location {} has no "
                    "archipelago_vendor_original_items row -- nothing granted", locationId);
            return;
        }
        if (behavior == "gold_conversion")
        {
            uint32_t originalItemId = GetOriginalItemId(locationId);
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
        // suppress_entirely (default): cancel the purchase -- refund EXACTLY
        // the real gold the player was just charged, reproducing
        // Player::BuyItemFromVendorSlot's own price computation (Player.cpp):
        // "price = pProto->BuyPrice * count;
        //  price = uint32(std::floor(price * GetReputationPriceDiscount(creature)));"
        // -- gated the same way by VendorItem::IsGoldRequired, so a
        // token/ExtendedCost-only slot (which charged 0 gold) correctly
        // refunds 0, rather than always refunding the flat BuyPrice
        // regardless of what was actually charged (a real, if smaller, gold
        // faucet the earlier revision of this fix introduced). Reads the
        // ORIGINAL item's proto -- its BuyPrice is numerically identical to
        // the synthesized item's own BuyPrice (APItemDisplay.cpp's vendor
        // branch keeps them in sync), so this is equivalent for the price
        // magnitude and is the more directly correct source to read from.
        uint32_t refundAmount = 0;
        uint32_t originalItemId = GetOriginalItemId(locationId);
        if (ItemTemplate const* originalProto = sObjectMgr->GetItemTemplate(originalItemId))
        {
            if (crItem->IsGoldRequired(originalProto))
                refundAmount = static_cast<uint32_t>(
                    std::floor(originalProto->BuyPrice * count * player->GetReputationPriceDiscount(pVendor)));
        }
        else
        {
            LOG_ERROR("module.archipelago_wow",
                "Archipelago: suppress_entirely repeat behavior for location {} has no "
                "recoverable original item template -- cannot compute the real gold charged, "
                "refunding nothing", locationId);
        }
        player->ModifyMoney(static_cast<int32>(refundAmount));
        ChatHandler(player->GetSession()).PSendSysMessage(
            "Archipelago: you have already sent this check -- purchase refunded.");
    }
}

class ArchipelagoInterceptionScript : public PlayerScript
{
public:
    ArchipelagoInterceptionScript()
        : PlayerScript("ArchipelagoInterceptionScript", { PLAYERHOOK_ON_AFTER_STORE_OR_EQUIP_NEW_ITEM }) { }

    void OnPlayerAfterStoreOrEquipNewItem(Player* player, uint32 /*vendorslot*/, Item* item, uint8 count,
        uint8 /*bag*/, uint8 /*slot*/, ItemTemplate const* /*pProto*/, Creature* pVendor,
        VendorItem const* crItem, bool /*bStore*/) override
    {
        if (item == nullptr)
            return;
        uint32_t entry = item->GetEntry();
        if (entry < Archipelago::ItemDisplay::AP_ITEM_SYNTH_BASE)
            return;
        int64_t locationId = static_cast<int64_t>(entry) - Archipelago::ItemDisplay::AP_ITEM_SYNTH_BASE;

        // The synthesized placeholder must never end up in the player's
        // bags -- on a first purchase it's replaced by the location check
        // itself; on any repeat purchase (including vanilla_item) the
        // player's real reward is granted separately by ApplyRepeatBehavior
        // below via Player::AddItem, never by keeping this placeholder.
        // Destroying it unconditionally here (rather than only in the
        // branches that used to need it) also means a lookup miss inside
        // ApplyRepeatBehavior can no longer leave the placeholder stuck in
        // the player's inventory.
        player->DestroyItem(item->GetBagSlot(), item->GetSlot(), true);

        if (!LocationAlreadyChecked(locationId))
        {
            sArchipelagoMgr->SendLocationChecks({ locationId });
            return;
        }

        ApplyRepeatBehavior(player, locationId, pVendor, crItem, count);
    }
};

void AddArchipelagoInterceptionScripts()
{
    new ArchipelagoInterceptionScript();
}
