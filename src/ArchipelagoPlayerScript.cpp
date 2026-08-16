// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoPlayerScript.cpp
#include "CharacterCache.h"
#include "DatabaseEnv.h"
#include "Item.h"
#include "Log.h"
#include "Mail.h"
#include "Player.h"
#include "ScriptMgr.h"
#include "APProtocol.h"
#include "ArchipelagoContentTable.h"

namespace
{
    int64_t LoadLastItemIndex()
    {
        if (QueryResult result = CharacterDatabase.Query("SELECT last_item_index FROM archipelago_state WHERE id = 1"))
            return (*result)[0].Get<int64_t>();
        return -1;
    }

    void SaveLastItemIndex(int64_t index)
    {
        CharacterDatabase.Execute("UPDATE archipelago_state SET last_item_index = {} WHERE id = 1", index);
    }
}

// NOTE: must only ever be called from the world thread (e.g. from
// ArchipelagoWorldScript::OnUpdate, draining the io-thread-fed queue) -- it
// touches Player/CharacterCache/CharacterDatabase, none of which are safe to
// call from the APClient io thread.
void DeliverArchipelagoItems(std::vector<Archipelago::ReceivedItem> const& items, std::string const& deliveryCharacter)
{
    if (deliveryCharacter.empty())
    {
        LOG_ERROR("module.archipelago_wow", "Archipelago: received {} item(s) but Archipelago.DeliveryCharacter is unset, dropping", items.size());
        return;
    }

    ObjectGuid receiverGuid = sCharacterCache->GetCharacterGuidByName(deliveryCharacter);
    if (receiverGuid.IsEmpty())
    {
        LOG_ERROR("module.archipelago_wow", "Archipelago: DeliveryCharacter '{}' does not exist, dropping {} item(s)", deliveryCharacter, items.size());
        return;
    }

    int64_t lastIndex = LoadLastItemIndex();
    CharacterDatabaseTransaction trans = CharacterDatabase.BeginTransaction();
    int64_t highestSeen = lastIndex;

    for (Archipelago::ReceivedItem const& received : items)
    {
        if (received.index <= lastIndex)
            continue; // already delivered before a previous restart/reconnect

        auto entryIt = Archipelago::Content::ApItemIdToWowItemEntry.find(received.item);
        if (entryIt == Archipelago::Content::ApItemIdToWowItemEntry.end())
        {
            LOG_ERROR("module.archipelago_wow", "Archipelago: received unknown AP item id {}, skipping", received.item);
            highestSeen = std::max(highestSeen, received.index);
            continue;
        }

        if (Item* item = Item::CreateItem(entryIt->second, 1))
        {
            item->SaveToDB(trans);
            MailDraft draft("Archipelago", "An item from your multiworld has arrived.");
            draft.AddItem(item);
            MailSender sender(MAIL_CREATURE, 34337 /* The Postmaster, matches cs_item.cpp's precedent */);
            draft.SendMailTo(trans, MailReceiver(receiverGuid.GetCounter()), sender);
        }

        highestSeen = std::max(highestSeen, received.index);
    }

    CharacterDatabase.CommitTransaction(trans);
    if (highestSeen > lastIndex)
        SaveLastItemIndex(highestSeen);
}

class ArchipelagoPlayerScript : public PlayerScript
{
public:
    ArchipelagoPlayerScript() : PlayerScript("ArchipelagoPlayerScript", { PLAYERHOOK_ON_LOGIN }) { }

    void OnPlayerLogin(Player* player) override
    {
        LOG_INFO("module.archipelago_wow", "Archipelago: {} logged in, module is active", player->GetName());
    }
};

void AddArchipelagoPlayerScripts()
{
    new ArchipelagoPlayerScript();
}
