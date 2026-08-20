// azerothcore-wotlk/modules/archipelago_wow/src/APDelivery.cpp
#include "APDelivery.h"

#include <array>

#include "AuctionHouseMgr.h"
#include "CharacterCache.h"
#include "Common.h"
#include "GameTime.h"
#include "Item.h"
#include "Log.h"
#include "Mail.h"
#include "ObjectAccessor.h"
#include "ObjectMgr.h"
#include "Player.h"
#include "Random.h"
#include "StringFormat.h"
#include "WorldSessionMgr.h"

namespace
{
    // Cost-tier base price (Task 14, design spec Sec7.1): most AP-granted items are
    // custom/reward items with BuyPrice unset (0), so fall back to a vendor-markup
    // approximation of SellPrice, then a flat minimum -- every tier must still
    // produce a sane nonzero "market" price even for a zero-priced item.
    uint32_t BasePriceCopper(ItemTemplate const* itemTemplate)
    {
        if (itemTemplate->BuyPrice > 0)
            return static_cast<uint32_t>(itemTemplate->BuyPrice);
        if (itemTemplate->SellPrice > 0)
            return itemTemplate->SellPrice * 4; // approximates the standard vendor sell/buy markup
        return 100; // 1 silver floor
    }

    uint32_t BuyoutForCostTier(Archipelago::Delivery::CostTier costTier, ItemTemplate const* itemTemplate)
    {
        using Archipelago::Delivery::CostTier;
        if (costTier == CostTier::Random)
        {
            static constexpr std::array<CostTier, 4> NON_RANDOM_TIERS = { CostTier::Free, CostTier::Cheap, CostTier::Market, CostTier::Expensive };
            costTier = NON_RANDOM_TIERS[urand(0, NON_RANDOM_TIERS.size() - 1)];
        }

        uint32_t base = BasePriceCopper(itemTemplate);
        switch (costTier)
        {
            case CostTier::Free:      return 0;
            case CostTier::Cheap:     return base / 4;
            case CostTier::Expensive: return base * 4;
            case CostTier::Market:
            default:                  return base;
        }
    }

    // Policy::AuctionHouse (Task 14): lists the item on the neutral Auction House
    // (design spec Sec7.1: "forces cross-faction contact") as a system auction --
    // owner is ObjectGuid::Empty since there is no real seller, so no deposit is
    // charged and no payout is owed to anyone on sale (AuctionHouseMgr::
    // SendAuctionSuccessfulMail's payout/mail block is guarded on the owner
    // existing, confirmed against this checkout, so an empty owner just means the
    // "sale proceeds" are never paid out -- appropriate for a gifted AP item, not a
    // real player's auction). startbid == buyout: a flat "buy now" price, no
    // bidding war, matching the fact this isn't a real economic listing.
    void ListOnAuctionHouse(uint32_t wowItemEntry, Archipelago::Delivery::CostTier costTier, CharacterDatabaseTransaction trans)
    {
        Item* item = Item::CreateItem(wowItemEntry, 1);
        if (!item)
        {
            LOG_ERROR("module.archipelago_wow", "Archipelago: Item::CreateItem failed for WoW item entry {}, item is lost", wowItemEntry);
            return;
        }

        ItemTemplate const* itemTemplate = item->GetTemplate();
        uint32_t buyout = BuyoutForCostTier(costTier, itemTemplate);

        AuctionHouseObject* auctionHouse = sAuctionMgr->GetAuctionsMapByHouseId(AuctionHouseId::Neutral);
        AuctionHouseEntry const* auctionHouseEntry = AuctionHouseMgr::GetAuctionHouseEntryFromHouse(AuctionHouseId::Neutral);

        AuctionEntry* auction = new AuctionEntry();
        auction->Id = sObjectMgr->GenerateAuctionID();
        auction->houseId = AuctionHouseId::Neutral;
        auction->item_guid = item->GetGUID();
        auction->item_template = item->GetEntry();
        auction->itemCount = item->GetCount();
        auction->owner = ObjectGuid::Empty;
        auction->startbid = buyout;
        auction->bidder = ObjectGuid::Empty;
        auction->bid = 0;
        auction->buyout = buyout;
        // NOT a short listing window: AuctionHouseObject::Update()'s expiry path
        // (AuctionHouseMgr.cpp) calls SendAuctionExpiredMail for any unbidded auction
        // past expire_time, and that function's "owner doesn't exist" branch --
        // exactly our case, owner is ObjectGuid::Empty -- permanently deletes the
        // item via RemoveAItem(..., true, ...) instead of mailing it back to anyone.
        // A real player's listing expiring back to their own mailbox is normal; an
        // AP-earned progression item silently vanishing because nobody bought it in
        // 48 hours is not acceptable. 10 years effectively never expires under normal
        // server operation, so the item just waits indefinitely to be bought instead.
        auction->expire_time = GameTime::GetGameTime().count() + 10 * YEAR;
        auction->deposit = 0; // no real seller to charge
        auction->auctionHouseEntry = auctionHouseEntry;

        item->SaveToDB(trans);
        sAuctionMgr->AddAItem(item);
        auctionHouse->AddAuction(auction);
        auction->SaveToDB(trans);

        LOG_INFO("module.archipelago_wow", "Archipelago: listed WoW item entry {} on the neutral Auction House (auction #{}, buyout {} copper)", wowItemEntry, auction->Id, buyout);
    }

    void MailToDeliveryCharacter(uint32_t wowItemEntry, std::string const& deliveryCharacter, CharacterDatabaseTransaction trans)
    {
        ObjectGuid receiverGuid = sCharacterCache->GetCharacterGuidByName(deliveryCharacter);
        if (receiverGuid.IsEmpty())
        {
            LOG_ERROR("module.archipelago_wow", "Archipelago: DeliveryCharacter '{}' does not exist, dropping item", deliveryCharacter);
            return;
        }

        Item* item = Item::CreateItem(wowItemEntry, 1);
        if (!item)
        {
            LOG_ERROR("module.archipelago_wow", "Archipelago: Item::CreateItem failed for WoW item entry {}, item is lost", wowItemEntry);
            return;
        }

        ObjectGuid::LowType lowGuid = receiverGuid.GetCounter();
        Player* onlineReceiver = ObjectAccessor::FindPlayerByLowGUID(lowGuid);
        item->SaveToDB(trans);
        MailDraft draft("Archipelago", "An item from your multiworld has arrived.");
        draft.AddItem(item);
        MailSender sender(MAIL_CREATURE, 34337 /* The Postmaster, matches cs_item.cpp's precedent */);
        draft.SendMailTo(trans, MailReceiver(onlineReceiver, lowGuid), sender);
    }
}

namespace Archipelago::Delivery
{
    void DeliverItem(Policy policy, uint32_t wowItemEntry, std::string const& deliveryCharacter, CostTier costTier, CharacterDatabaseTransaction trans)
    {
        switch (policy)
        {
            case Policy::AuctionHouse:
                ListOnAuctionHouse(wowItemEntry, costTier, trans);
                break;

            case Policy::SharedCacheNpc:
                // No immediate recipient: just record that the realm has now received this
                // item type. archipelago_cache_claims (character_guid, wow_item_entry), read
                // by npc_archipelago_cache_keeper.cpp, tracks who has already taken their
                // copy. INSERT IGNORE because the cache is a set of item TYPES available to
                // claim, not a count -- a repeat grant of the same entry within a run doesn't
                // add a second claimable copy (design spec Sec7.1: "everyone who logs in sees
                // the full cache and takes their own copy. No scarcity" -- the scarcity axis
                // this policy removes is about people racing each other, not about how many
                // times the same item type happened to be rolled).
                trans->Append("INSERT IGNORE INTO archipelago_cache_items (wow_item_entry) VALUES ({})", wowItemEntry);
                break;

            case Policy::FirstToClaim:
            {
                // One row per delivery, not deduped by entry (see the table's own
                // migration comment) -- each queued delivery gets its own announcement
                // and is claimed independently by whoever gets to the NPC first.
                trans->Append("INSERT INTO archipelago_first_to_claim_pending (wow_item_entry) VALUES ({})", wowItemEntry);

                std::string itemName = Acore::StringFormat("item #{}", wowItemEntry);
                if (ItemTemplate const* itemTemplate = sObjectMgr->GetItemTemplate(wowItemEntry))
                    itemName = itemTemplate->Name1;
                sWorldSessionMgr->SendServerMessage(SERVER_MSG_STRING, Acore::StringFormat(
                    "Archipelago: '{}' is up for grabs at the Archipelago Cache Keeper (Northshire Abbey) -- first come, first served!", itemName));
                break;
            }

            case Policy::EveryoneReceives:
            default:
                MailToDeliveryCharacter(wowItemEntry, deliveryCharacter, trans);
                break;
        }
    }

    void GiveOrMailItem(Player* player, uint32_t wowItemEntry, CharacterDatabaseTransaction trans)
    {
        ItemPosCountVec dest;
        InventoryResult msg = player->CanStoreNewItem(NULL_BAG, NULL_SLOT, dest, wowItemEntry, 1);
        if (msg == EQUIP_ERR_OK)
        {
            if (Item* item = player->StoreNewItem(dest, wowItemEntry, true))
                player->SendNewItem(item, 1, true, false);
            return;
        }

        Item* item = Item::CreateItem(wowItemEntry, 1);
        if (!item)
        {
            LOG_ERROR("module.archipelago_wow", "Archipelago: Item::CreateItem failed for WoW item entry {}, item is lost", wowItemEntry);
            return;
        }
        item->SaveToDB(trans);
        MailDraft draft("Archipelago", "An item from Archipelago has arrived (your bags were full).");
        draft.AddItem(item);
        MailSender sender(MAIL_CREATURE, 34337 /* The Postmaster, matches MailToDeliveryCharacter's precedent above */);
        draft.SendMailTo(trans, MailReceiver(player, player->GetGUID().GetCounter()), sender);
    }
}
