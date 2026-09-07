// azerothcore-wotlk/modules/archipelago_wow/src/APDelivery.cpp
#include "APDelivery.h"

#include <algorithm>
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
#include "QueryResult.h"
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

    // M4.11.5.0.2: SingleDeliveryCharacter's recipient IS the finder in every
    // realistic single-character-slot setup this policy exists for (its own
    // doc comment: "M2/M2.1's existing, only behavior" -- one WoW character
    // is the entire multiworld slot). Handing them the item directly, right
    // now, when they're actually online to receive it removes the delayed
    // mail round-trip design spec M4.11.5.0's own live-tester complaint --
    // with zero risk to the offline case, which now queues into batch
    // (M4.11.5.2.0) instead of mailing immediately, exactly like
    // AllAccountsDelivery below.
    void GrantOrMailToDeliveryCharacter(uint32_t wowItemEntry, std::string const& deliveryCharacter, std::string const& familyLabel, Archipelago::Delivery::DeliveryBatch& batch, CharacterDatabaseTransaction trans)
    {
        ObjectGuid receiverGuid = sCharacterCache->GetCharacterGuidByName(deliveryCharacter);
        if (receiverGuid.IsEmpty())
        {
            LOG_ERROR("module.archipelago_wow", "Archipelago: DeliveryCharacter '{}' does not exist, dropping item", deliveryCharacter);
            return;
        }

        if (Player* onlineReceiver = ObjectAccessor::FindPlayerByLowGUID(receiverGuid.GetCounter()))
        {
            Archipelago::Delivery::GiveOrMailItem(onlineReceiver, wowItemEntry, trans, familyLabel);
            return;
        }

        batch.Queue(receiverGuid.GetCounter(), deliveryCharacter, wowItemEntry, familyLabel);
    }

    // M4.7.1.3: the real "every player receives everything" policy. One
    // mail per ACCOUNT, not per character -- deduped to whichever
    // character on that account most recently logged out (highest
    // logout_time; ties broken deterministically by highest guid), a
    // design decision made explicitly (not literally "every single
    // character," which would mail every alt separately). Soft-deleted
    // characters (deleteDate IS NOT NULL) are excluded. Orthogonal to
    // CatchUpPolicy: this only ever reaches accounts/characters that exist
    // AT THE MOMENT this specific delivery runs, exactly like every other
    // delivery policy above -- an account created afterward relies
    // entirely on CatchUpPolicy (APCatchUp.h/.cpp) to backfill what it
    // missed. No volume cap: every delivered item is queued for every
    // eligible account, with no classification filtering -- a deliberate
    // choice (M4.7.1.3 design resolution), not an oversight; a long
    // campaign can still queue thousands of items for every account, now
    // batched (M4.11.5.2.0) into far fewer mails than before instead of
    // mailing each one immediately.
    void MailToAllAccounts(uint32_t wowItemEntry, std::string const& familyLabel, Archipelago::Delivery::DeliveryBatch& batch)
    {
        if (!batch.allAccountsRecipients.has_value())
        {
            batch.allAccountsRecipients.emplace();
            if (QueryResult result = CharacterDatabase.Query(
                "SELECT guid, name FROM ("
                "  SELECT guid, name, "
                "         ROW_NUMBER() OVER (PARTITION BY account ORDER BY logout_time DESC, guid DESC) AS rn "
                "  FROM characters WHERE deleteDate IS NULL"
                ") ranked WHERE rn = 1"
            ))
            {
                do
                {
                    Field* fields = result->Fetch();
                    ObjectGuid::LowType lowGuid = fields[0].Get<uint32_t>();
                    std::string recipientName = fields[1].Get<std::string>();
                    batch.allAccountsRecipients->emplace_back(lowGuid, recipientName);
                } while (result->NextRow());
            }
            LOG_INFO("module.archipelago_wow", "Archipelago: AllAccountsDelivery resolved {} eligible account(s) for this drain", batch.allAccountsRecipients->size());
        }

        if (batch.allAccountsRecipients->empty())
        {
            LOG_ERROR("module.archipelago_wow", "Archipelago: AllAccountsDelivery found no eligible accounts (no real characters exist yet), dropping item {}", wowItemEntry);
            return;
        }

        for (auto const& [lowGuid, recipientName] : *batch.allAccountsRecipients)
            batch.Queue(lowGuid, recipientName, wowItemEntry, familyLabel);
    }

    // M4.11.5.2.0: real, player-facing item name for richer mail text (design
    // spec Sec5) -- same real lookup/fallback DeliverItem's own Policy::FirstToClaim
    // branch below already uses for its own realm-wide announcement, reused here
    // rather than duplicated.
    std::string RealItemName(uint32_t wowItemEntry)
    {
        if (ItemTemplate const* itemTemplate = sObjectMgr->GetItemTemplate(wowItemEntry))
            return itemTemplate->Name1;
        return Acore::StringFormat("item #{}", wowItemEntry);
    }

    // M4.11.5.2.0: real body text for one flushed, possibly-multi-item mail --
    // one line per real item name plus the family it came from. Never a raw
    // entry id on its own (RealItemName's own fallback still names the entry,
    // just clearly labeled "item #N" rather than silently blank). No "finder"
    // line -- see this plan's Global Constraints for why no real live finder
    // identity is available to include here.
    std::string BuildBatchedMailBody(std::vector<Archipelago::Delivery::QueuedItem> const& items)
    {
        std::string body = items.size() == 1
            ? "Your multiworld delivered 1 item:\n"
            : Acore::StringFormat("Your multiworld delivered {} items:\n", items.size());
        for (Archipelago::Delivery::QueuedItem const& queuedItem : items)
            body += Acore::StringFormat("- {} ({})\n", RealItemName(queuedItem.wowItemEntry), queuedItem.familyLabel);
        return body;
    }
}

namespace Archipelago::Delivery
{
    void DeliverItem(Policy policy, uint32_t wowItemEntry, std::string const& deliveryCharacter, CostTier costTier, std::string const& familyLabel, DeliveryBatch& batch, CharacterDatabaseTransaction trans)
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

                std::string itemName = RealItemName(wowItemEntry);
                sWorldSessionMgr->SendServerMessage(SERVER_MSG_STRING, Acore::StringFormat(
                    "Archipelago: '{}' is up for grabs at the Archipelago Cache Keeper (Northshire Abbey) -- first come, first served!", itemName));
                break;
            }

            case Policy::AllAccountsDelivery:
                MailToAllAccounts(wowItemEntry, familyLabel, batch);
                break;

            case Policy::SingleDeliveryCharacter:
            default:
                GrantOrMailToDeliveryCharacter(wowItemEntry, deliveryCharacter, familyLabel, batch, trans);
                break;
        }
    }

    void FlushDeliveryBatch(DeliveryBatch& batch, CharacterDatabaseTransaction trans)
    {
        for (auto& [lowGuid, queue] : batch.queues)
        {
            Player* onlineReceiver = ObjectAccessor::FindPlayerByLowGUID(lowGuid);
            for (size_t offset = 0; offset < queue.items.size(); offset += MAX_MAIL_ITEMS)
            {
                size_t count = std::min<size_t>(MAX_MAIL_ITEMS, queue.items.size() - offset);
                std::vector<QueuedItem> chunk(queue.items.begin() + offset, queue.items.begin() + offset + count);

                // Create/save every item first, tracking only the ones that actually
                // succeeded -- the mail body (built below, from successItems) must never
                // describe an item that isn't actually attached to the mail it's sent
                // with, so BuildBatchedMailBody can't run until this loop is done.
                std::vector<Item*> createdItems;
                std::vector<QueuedItem> successItems;
                for (QueuedItem const& queuedItem : chunk)
                {
                    Item* item = Item::CreateItem(queuedItem.wowItemEntry, 1);
                    if (!item)
                    {
                        LOG_ERROR("module.archipelago_wow", "Archipelago: Item::CreateItem failed for WoW item entry {} while mailing to '{}', item is lost", queuedItem.wowItemEntry, queue.recipientLabel);
                        continue;
                    }
                    item->SaveToDB(trans);
                    createdItems.push_back(item);
                    successItems.push_back(queuedItem);
                }
                if (createdItems.empty())
                    continue;

                MailDraft draft("Archipelago", BuildBatchedMailBody(successItems));
                for (Item* item : createdItems)
                    draft.AddItem(item);

                MailSender sender(MAIL_CREATURE, 34337 /* The Postmaster, matches cs_item.cpp's precedent */);
                draft.SendMailTo(trans, MailReceiver(onlineReceiver, lowGuid), sender);
            }
        }

        size_t totalItems = 0, totalMails = 0, totalRecipients = batch.queues.size();
        for (auto const& [lowGuid, queue] : batch.queues)
        {
            totalItems += queue.items.size();
            totalMails += (queue.items.size() + MAX_MAIL_ITEMS - 1) / MAX_MAIL_ITEMS;
        }
        LOG_INFO("module.archipelago_wow", "Archipelago: flushed {} item(s) into {} mail(s) across {} recipient(s)", totalItems, totalMails, totalRecipients);

        batch.queues.clear();
    }

    void GiveOrMailItem(Player* player, uint32_t wowItemEntry, CharacterDatabaseTransaction trans, std::string const& familyLabel)
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
        std::string body = familyLabel.empty()
            ? "An item from Archipelago has arrived (your bags were full)."
            : Acore::StringFormat("{} ({}) has arrived, but your bags were full -- mailed instead.", RealItemName(wowItemEntry), familyLabel);
        MailDraft draft("Archipelago", body);
        draft.AddItem(item);
        MailSender sender(MAIL_CREATURE, 34337 /* The Postmaster, matches cs_item.cpp's precedent */);
        draft.SendMailTo(trans, MailReceiver(player, player->GetGUID().GetCounter()), sender);
    }
}
