// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoPlayerScript.cpp
#include <algorithm>

#include "CharacterCache.h"
#include "DatabaseEnv.h"
#include "Log.h"
#include "ObjectAccessor.h"
#include "Player.h"
#include "ScriptMgr.h"
#include "World.h"
#include "WorldSessionMgr.h"
#include "APCatchUp.h"
#include "APDelivery.h"
#include "APGating.h"
#include "APProtocol.h"
#include "APTraps.h"
#include "ArchipelagoContentTable.h"
#include "ArchipelagoCoreLoopContentTable.h"
#include "ArchipelagoGatesContentTable.h"
#include "ArchipelagoGoals.h"
#include "ArchipelagoRealmState.h"
#include "ArchipelagoTrapsContentTable.h"

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
void DeliverArchipelagoItems(std::vector<Archipelago::ReceivedItem> const& items, std::string const& deliveryCharacter, Archipelago::Delivery::Policy deliveryPolicy, Archipelago::Delivery::CostTier auctionHouseCostTier)
{
    // Archipelago.DeliveryCharacter is only load-bearing for Policy::EveryoneReceives
    // (the only branch APDelivery::DeliverItem actually mails to it) -- Task 13's
    // SharedCacheNpc, and Task 14/15's AuctionHouse/FirstToClaim, have no single
    // recipient at all, so an operator running one of those policies should not be
    // forced to also configure a delivery character that nothing here will use.
    if (deliveryPolicy == Archipelago::Delivery::Policy::EveryoneReceives)
    {
        if (deliveryCharacter.empty())
        {
            LOG_ERROR("module.archipelago_wow", "Archipelago: received {} item(s) but Archipelago.DeliveryCharacter is unset, dropping", items.size());
            return;
        }

        if (sCharacterCache->GetCharacterGuidByName(deliveryCharacter).IsEmpty())
        {
            LOG_ERROR("module.archipelago_wow", "Archipelago: DeliveryCharacter '{}' does not exist, dropping {} item(s)", deliveryCharacter, items.size());
            return;
        }
    }

    int64_t lastIndex = GetLastItemIndex();
    CharacterDatabaseTransaction trans = CharacterDatabase.BeginTransaction();
    int64_t highestSeen = lastIndex;

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
            // The actual XP-suppression gate re-reads CONFIG_MAX_PLAYER_LEVEL
            // live on every Player::GiveXP call, so the setIntConfig above is
            // already effective. PLAYER_FIELD_MAX_LEVEL is a separate cached
            // update-field only recomputed by Player::InitStatsForLevel (on
            // login/level-up/stat-reset); it drives Player::IsMaxLevel() and
            // the LFG handler's XP-reward check, so refresh it on everyone
            // already online now instead of leaving it stale until their next
            // level-up or relog.
            sWorldSessionMgr->DoForAllOnlinePlayers([newCap](Player* onlinePlayer)
            {
                onlinePlayer->SetUInt32Value(PLAYER_FIELD_MAX_LEVEL, newCap);
            });
            highestSeen = std::max(highestSeen, received.index);
            continue;
        }
        // Task 23 bugfix: this was previously two hardcoded if-blocks (one
        // per M2.1 dungeon) -- Task 23 added 3 more Instance Unlock items to
        // the content table without extending this dispatch, so receiving
        // any of them did nothing at all in real play (fell through to the
        // "unknown AP item id" error path below). Generic lookup means a
        // future instance_clear row's unlock item needs zero additional
        // code here.
        auto instanceUnlockIt = Archipelago::CoreLoop::INSTANCE_UNLOCK_ITEM_TO_KEY.find(received.item);
        if (instanceUnlockIt != Archipelago::CoreLoop::INSTANCE_UNLOCK_ITEM_TO_KEY.end())
        {
            sArchipelagoRealmState->UnlockInstance(instanceUnlockIt->second);
            Archipelago::Goals::CheckAndSendGoalComplete();
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

        auto gateIt = Archipelago::Gates::ApItemToFlagKeyAndTier.find(received.item);
        if (gateIt != Archipelago::Gates::ApItemToFlagKeyAndTier.end())
        {
            auto const& [flagKey, tier] = gateIt->second;
            sArchipelagoRealmState->SetFlagTier(flagKey, tier);
            // bank_bag_slots/dual_spec (Task 10) are per-character saved
            // fields, unlike every other gates-family flag_key -- apply the
            // grant to everyone already online now (OnPlayerLogin handles
            // anyone who logs in later, including characters who were
            // offline for this exact delivery).
            if (flagKey == "bank_bag_slots" || flagKey == "dual_spec")
            {
                sWorldSessionMgr->DoForAllOnlinePlayers([](Player* onlinePlayer)
                {
                    Archipelago::Gating::SyncCharacterUnlocksToPlayer(onlinePlayer);
                });
            }
            // Task 21: combo_unlock_tbc/combo_unlock_wotlk touch no Player at
            // all -- they're realm-wide character-creation config, not
            // per-character state -- so push the recomputed masks immediately
            // instead of iterating online players.
            else if (flagKey == "combo_unlock_tbc" || flagKey == "combo_unlock_wotlk")
            {
                Archipelago::Gating::ApplyComboUnlockMasks();
            }
            highestSeen = std::max(highestSeen, received.index);
            continue;
        }

        auto trapIt = Archipelago::Traps::ApItemToEffectAndLethal.find(received.item);
        if (trapIt != Archipelago::Traps::ApItemToEffectAndLethal.end())
        {
            auto const& [effect, lethal] = trapIt->second;
            // Traps fire on receipt, targeting the same delivery character
            // EveryoneReceives mails to -- there is no other single "the
            // player" to target in this realm-as-slot architecture. Only
            // fires if that character is online right now; an offline
            // delivery character never gets a queued/retroactive trap (a
            // deliberate, documented scope boundary -- traps are optional,
            // off by default, flavor-only content, unlike the sphere-0
            // deferral queue which DOES need to survive an online player
            // briefly re-entering Northshire).
            ObjectGuid receiverGuid = sCharacterCache->GetCharacterGuidByName(deliveryCharacter);
            Player* onlineReceiver = receiverGuid.IsEmpty() ? nullptr : ObjectAccessor::FindPlayerByLowGUID(receiverGuid.GetCounter());
            if (onlineReceiver)
                Archipelago::Traps::ApplyTrapEffect(onlineReceiver, effect, lethal);
            else
                LOG_INFO("module.archipelago_wow", "Archipelago: trap effect '{}' skipped, delivery character '{}' is offline", effect, deliveryCharacter);
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

        Archipelago::Delivery::DeliverItem(deliveryPolicy, entryIt->second, deliveryCharacter, auctionHouseCostTier, trans);
        // Logged unconditionally, regardless of deliveryPolicy -- Task 16's
        // new-character catch-up needs an authoritative record of every item
        // the realm has ever received, independent of which policy routed it.
        trans->Append("INSERT INTO archipelago_delivery_history (wow_item_entry) VALUES ({})", entryIt->second);

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
        Archipelago::Gating::SyncCharacterUnlocksToPlayer(player);
        // AT_LOGIN_FIRST is still set here (CharacterHandler.cpp clears it and fires
        // OnPlayerFirstLogin only after every OnPlayerLogin hook returns), so this is
        // the correct in-hook test for "this character's very first login ever".
        Archipelago::CatchUp::OnPlayerLogin(player, player->HasAtLoginFlag(AT_LOGIN_FIRST));
    }
};

void AddArchipelagoPlayerScripts()
{
    new ArchipelagoPlayerScript();
}
