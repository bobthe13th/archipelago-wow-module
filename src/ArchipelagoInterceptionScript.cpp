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
    // `crItem`/`count`/`pProto` are threaded straight through from the
    // hook's own parameters (the exact same values -- `pProto` included --
    // Player::BuyItemFromVendorSlot used to charge for this purchase in the
    // first place: the core resolves `pProto` there as
    // sObjectMgr->GetItemTemplate(item), `item` being the SYNTHESIZED entry
    // the client actually bought, and passes that identical pointer through
    // to this hook) so suppress_entirely's refund below can reproduce that
    // exact charge byte-for-byte rather than assuming a flat, undiscounted
    // BuyPrice, or re-deriving a DIFFERENT (original-item) proto that can
    // diverge from what was actually charged.
    void ApplyRepeatBehavior(Player* player, int64_t locationId, Creature* pVendor, VendorItem const* crItem,
        uint8_t count, ItemTemplate const* pProto)
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
        // gated by "crItem->IsGoldRequired(pProto) && pProto->BuyPrice > 0".
        //
        // Deliberately uses the SYNTHESIZED item's own `pProto` here (the
        // hook parameter), NOT a separately-looked-up original-item proto --
        // an earlier revision of this fix used the original item's proto for
        // this check, which is WRONG: the real purchase evaluates
        // IsGoldRequired against the SYNTHESIZED placeholder's proto (the
        // core resolves it as sObjectMgr->GetItemTemplate(item) where `item`
        // is the synthesized entry the client actually bought), and
        // SynthesizeItemTemplateRow never copies FlagsExtra, so the
        // synthesized proto's ITEM_FLAG2_DONT_IGNORE_BUY_PRICE is always
        // unset. For any vendor slot with a nonzero ExtendedCost, this means
        // the REAL purchase always charges 0 gold -- but reading the
        // ORIGINAL item's proto instead pays out full (BuyPrice * discount)
        // whenever the original item happens to carry that flag. Confirmed
        // against this project's own compiled Vendor Inventories content:
        // 77 real npc_vendor rows (42 distinct items, all unlimited stock)
        // hit exactly this, including several Kirin Tor faction rings worth
        // 1,250g per repeat purchase -- a real, systematic gold faucet under
        // the default suppress_entirely behavior, not a theoretical edge
        // case. Using `pProto` here makes this byte-exact by construction
        // (same pointer the real charge computation used) and also removes
        // the DB round-trip GetOriginalItemId/GetItemTemplate previously did
        // for this specific check.
        uint32_t refundAmount = 0;
        if (pProto != nullptr && crItem->IsGoldRequired(pProto) && pProto->BuyPrice > 0)
            refundAmount = static_cast<uint32_t>(
                std::floor(pProto->BuyPrice * count * player->GetReputationPriceDiscount(pVendor)));
        player->ModifyMoney(static_cast<int32>(refundAmount));
        // Honest messaging: an ExtendedCost-only slot already consumed the
        // player's honor/arena/token currency before this hook ever ran (in
        // Player::BuyItemFromVendorSlot, well before _StoreOrEquipNewItem),
        // and that currency is NOT refunded here (a larger design question,
        // out of this fix's scope) -- refundAmount correctly computes to 0
        // gold for such a slot, so the message must not claim a refund that
        // didn't happen.
        if (refundAmount > 0)
            ChatHandler(player->GetSession()).PSendSysMessage(
                "Archipelago: you have already sent this check -- purchase refunded.");
        else
            ChatHandler(player->GetSession()).PSendSysMessage(
                "Archipelago: you have already sent this check.");
    }
}

class ArchipelagoInterceptionScript : public PlayerScript
{
public:
    ArchipelagoInterceptionScript()
        : PlayerScript("ArchipelagoInterceptionScript", { PLAYERHOOK_ON_AFTER_STORE_OR_EQUIP_NEW_ITEM }) { }

    void OnPlayerAfterStoreOrEquipNewItem(Player* player, uint32 /*vendorslot*/, Item* item, uint8 count,
        uint8 /*bag*/, uint8 /*slot*/, ItemTemplate const* pProto, Creature* pVendor,
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

        ApplyRepeatBehavior(player, locationId, pVendor, crItem, count, pProto);
    }
};

void AddArchipelagoInterceptionScripts()
{
    new ArchipelagoInterceptionScript();
}
