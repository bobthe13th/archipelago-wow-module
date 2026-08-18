// azerothcore-wotlk/modules/archipelago_wow/src/APDelivery.cpp
#include "APDelivery.h"

#include "CharacterCache.h"
#include "Item.h"
#include "Log.h"
#include "Mail.h"
#include "ObjectAccessor.h"

namespace Archipelago::Delivery
{
    void DeliverItem(Policy policy, Item* item, std::string const& deliveryCharacter, CharacterDatabaseTransaction trans)
    {
        // Every policy value currently falls through to the one behavior
        // this task extracts; Tasks 13-15 give the other enumerators their
        // own branches here.
        switch (policy)
        {
            case Policy::EveryoneReceives:
            default:
            {
                ObjectGuid receiverGuid = sCharacterCache->GetCharacterGuidByName(deliveryCharacter);
                if (receiverGuid.IsEmpty())
                {
                    LOG_ERROR("module.archipelago_wow", "Archipelago: DeliveryCharacter '{}' does not exist, dropping item", deliveryCharacter);
                    return;
                }
                ObjectGuid::LowType lowGuid = receiverGuid.GetCounter();
                Player* onlineReceiver = ObjectAccessor::FindPlayerByLowGUID(lowGuid);
                item->SaveToDB(trans);
                MailDraft draft("Archipelago", "An item from your multiworld has arrived.");
                draft.AddItem(item);
                MailSender sender(MAIL_CREATURE, 34337 /* The Postmaster, matches cs_item.cpp's precedent */);
                draft.SendMailTo(trans, MailReceiver(onlineReceiver, lowGuid), sender);
                break;
            }
        }
    }
}
