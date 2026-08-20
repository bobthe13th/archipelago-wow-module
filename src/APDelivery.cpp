// azerothcore-wotlk/modules/archipelago_wow/src/APDelivery.cpp
#include "APDelivery.h"

#include "CharacterCache.h"
#include "Item.h"
#include "Log.h"
#include "Mail.h"
#include "ObjectAccessor.h"

namespace
{
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
    void DeliverItem(Policy policy, uint32_t wowItemEntry, std::string const& deliveryCharacter, CharacterDatabaseTransaction trans)
    {
        switch (policy)
        {
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

            case Policy::EveryoneReceives:
            default:
                // Every other enumerator falls through to this behavior until its own task
                // (14, 15) implements a real branch here.
                MailToDeliveryCharacter(wowItemEntry, deliveryCharacter, trans);
                break;
        }
    }
}
