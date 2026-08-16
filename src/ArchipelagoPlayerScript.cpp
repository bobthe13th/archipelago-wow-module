// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoPlayerScript.cpp
#include <algorithm>

#include "CharacterCache.h"
#include "DatabaseEnv.h"
#include "Item.h"
#include "Log.h"
#include "Mail.h"
#include "ObjectAccessor.h"
#include "Player.h"
#include "ScriptMgr.h"
#include "World.h"
#include "APProtocol.h"
#include "ArchipelagoContentTable.h"
#include "ArchipelagoCoreLoopContentTable.h"
#include "ArchipelagoRealmState.h"

namespace
{
    // Cached in memory so the dedup check never depends on a synchronous
    // Query racing an async Execute/transaction-commit from a very recent
    // prior drain. Loaded once at startup, bumped in memory immediately
    // after each successful drain; the DB row exists only so this survives
    // a process restart.
    int64_t g_lastItemIndex = -2; // -2 == "not yet loaded from DB"

    int64_t LoadLastItemIndexFromDB()
    {
        if (QueryResult result = CharacterDatabase.Query("SELECT last_item_index FROM archipelago_state WHERE id = 1"))
            return (*result)[0].Get<int64_t>();
        return -1;
    }

    // NOTE: must only ever be called from the world thread; see the note on
    // DeliverArchipelagoItems below.
    int64_t GetLastItemIndex()
    {
        if (g_lastItemIndex == -2)
            g_lastItemIndex = LoadLastItemIndexFromDB();
        return g_lastItemIndex;
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

    int64_t lastIndex = GetLastItemIndex();
    CharacterDatabaseTransaction trans = CharacterDatabase.BeginTransaction();
    int64_t highestSeen = lastIndex;

    ObjectGuid::LowType lowGuid = receiverGuid.GetCounter();
    // Resolve the live player, if any, so a delivery character who is online
    // right now gets the normal "new mail" notification / in-memory mail
    // list update instead of only seeing the mail after a relog. See
    // cs_send.cpp's MailReceiver(target->GetConnectedPlayer(), ...) precedent.
    Player* onlineReceiver = ObjectAccessor::FindPlayerByLowGUID(lowGuid);

    for (Archipelago::ReceivedItem const& received : items)
    {
        if (received.index <= lastIndex)
            continue; // already delivered before a previous restart/reconnect

        // Core-loop progression items (M2.1) are routed to the realm-wide
        // ArchipelagoRealmState instead of being mailed as WoW items -- they
        // have no WoW item entry at all. Dedup above still applies to them.
        if (received.item == Archipelago::CoreLoop::AP_ITEM_PROGRESSIVE_LEVEL_CAP)
        {
            uint32_t newCap = sArchipelagoRealmState->GetLevelCap() + Archipelago::CoreLoop::LEVEL_CAP_STEP;
            sArchipelagoRealmState->RaiseLevelCap(newCap);
            sWorld->setIntConfig(CONFIG_MAX_PLAYER_LEVEL, newCap);
            highestSeen = std::max(highestSeen, received.index);
            continue;
        }
        if (received.item == Archipelago::CoreLoop::AP_ITEM_INSTANCE_UNLOCK_RAGEFIRE_CHASM)
        {
            sArchipelagoRealmState->UnlockInstance(Archipelago::CoreLoop::INSTANCE_KEY_RAGEFIRE_CHASM);
            highestSeen = std::max(highestSeen, received.index);
            continue;
        }
        if (received.item == Archipelago::CoreLoop::AP_ITEM_INSTANCE_UNLOCK_DEADMINES)
        {
            sArchipelagoRealmState->UnlockInstance(Archipelago::CoreLoop::INSTANCE_KEY_DEADMINES);
            highestSeen = std::max(highestSeen, received.index);
            continue;
        }
        if (received.item == Archipelago::CoreLoop::AP_ITEM_DARK_PORTAL_ACCESS)
        {
            sArchipelagoRealmState->UnlockDarkPortal();
            highestSeen = std::max(highestSeen, received.index);
            continue;
        }
        if (received.item == Archipelago::CoreLoop::AP_ITEM_NORTHREND_PASSAGE)
        {
            sArchipelagoRealmState->UnlockNorthrendPassage();
            highestSeen = std::max(highestSeen, received.index);
            continue;
        }

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
            draft.SendMailTo(trans, MailReceiver(onlineReceiver, lowGuid), sender);
        }
        else
        {
            LOG_ERROR("module.archipelago_wow", "Archipelago: Item::CreateItem failed for AP item id {} (WoW item entry {}), item is lost", received.item, entryIt->second);
        }

        highestSeen = std::max(highestSeen, received.index);
    }

    if (highestSeen > lastIndex)
        trans->Append("UPDATE archipelago_state SET last_item_index = {} WHERE id = 1", highestSeen);

    CharacterDatabase.CommitTransaction(trans);

    // Only after the transaction (mail rows + index bump) has been handed to
    // the async worker does the in-memory value advance, so a concurrent
    // drain on the world thread can't observe it early. Since drains only
    // ever happen on the world thread, there is no reader/writer race here.
    if (highestSeen > lastIndex)
        g_lastItemIndex = highestSeen;
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
