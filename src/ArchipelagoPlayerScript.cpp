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
#include "APFillerRewardEffects.h"
#include "APGating.h"
#include "APProtocol.h"
#include "APTraps.h"
#include "ArchipelagoAchievementsContentTable.h"
#include "ArchipelagoCollectionsContentTable.h"
#include "ArchipelagoCoreLoopContentTable.h"
#include "ArchipelagoCRAFTSANITYContent.h"
#include "ArchipelagoFillerRewardEffectsContentTable.h"
#include "ArchipelagoFillerRewardItemsContentTable.h"
#include "ArchipelagoFishContentTable.h"
#include "ArchipelagoGatesContentTable.h"
#include "ArchipelagoGATHERSANITYContent.h"
#include "ArchipelagoGoals.h"
#include "ArchipelagoGoldenBoarStatuesContentTable.h"
#include "ArchipelagoHOLIDAYSANITYContent.h"
#include "ArchipelagoITEMSANITYContent.h"
#include "ArchipelagoProfessionsContentTable.h"
#include "ArchipelagoQuestRewardsContentTable.h"
#include "ArchipelagoRaresContentTable.h"
#include "ArchipelagoRealmState.h"
#include "ArchipelagoRecipesContentTable.h"
#include "ArchipelagoTrainerSpellsContentTable.h"
#include "ArchipelagoTrapsContentTable.h"
#include "ArchipelagoVendorStockContentTable.h"

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
    // Archipelago.DeliveryCharacter is only load-bearing for Policy::SingleDeliveryCharacter
    // (the only branch APDelivery::DeliverItem actually mails to it) -- Task 13's
    // SharedCacheNpc, Task 14/15's AuctionHouse/FirstToClaim, and M4.7.1.3's
    // AllAccountsDelivery, have no single recipient at all, so an operator running
    // one of those policies should not be forced to also configure a delivery
    // character that nothing here will use.
    if (deliveryPolicy == Archipelago::Delivery::Policy::SingleDeliveryCharacter)
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
            // M4.11.1 Task 15 (Zone Leveler's reach_zone_level_cap goal):
            // realm-wide "how many Progressive Level Cap copies have ever
            // been received" counter, distinct from GetLevelCap() itself
            // (the resulting cap value) -- see ArchipelagoRealmState.h's own
            // GetLevelCapCopiesReceived comment for why this needs its own
            // counter rather than being derived from GetLevelCap().
            sArchipelagoRealmState->GrantLevelCapCopy();
            Archipelago::Goals::CheckAndSendGoalComplete();
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
        if (received.item == Archipelago::Rares::AP_ITEM_KEY_HUNT_KEY)
        {
            sArchipelagoRealmState->GrantKey();
            Archipelago::Goals::CheckAndSendGoalComplete();
            highestSeen = std::max(highestSeen, received.index);
            continue;
        }
        // M4.11.1 Task 15 (Zone Leveler's golden_boar_statues goal): exact
        // analog of the AP_ITEM_KEY_HUNT_KEY block directly above --
        // golden_boar_statues.yaml's own header comment: "Golden Boar
        // Statue" needs its OWN distinct realm-state counter (delivery:
        // {kind: realm_state, effect: grant_statue}, not a real WoW item to
        // mail, same realm_state-effect shape as Key Hunt's grant_key).
        if (received.item == Archipelago::GoldenBoarStatues::AP_ITEM_GOLDEN_BOAR_STATUE)
        {
            sArchipelagoRealmState->GrantStatue();
            Archipelago::Goals::CheckAndSendGoalComplete();
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
            // M4.9.5 final review fix: glyph_slots deliveries also need an
            // immediate refresh for already-online characters, same reasoning
            // as bank_bag_slots/dual_spec above. InitGlyphsForLevel() is the
            // same call Player::GiveLevel already makes mid-session, so it's
            // known-safe to call live here too.
            else if (flagKey == "glyph_slots")
            {
                sWorldSessionMgr->DoForAllOnlinePlayers([](Player* onlinePlayer)
                {
                    onlinePlayer->InitGlyphsForLevel();
                });
            }
            highestSeen = std::max(highestSeen, received.index);
            continue;
        }

        // M4.10.7 final whole-branch review fix (C2): holidaysanity is the
        // FIFTH family to ship with a real, compiled lookup map that
        // nothing here consumed -- the same dispatch-wiring gap the
        // M4.10.1/M4.10.2/M4.10.5 fixes below closed for containersanity,
        // gathersanity and craftsanity (M4.10.6's itemsanity avoided it by
        // catching the omission in its own pre-flight review). Its map is
        // flag-shaped rather than mail-shaped, so this branch mirrors the
        // gates branch directly above instead of the DeliverItem ones:
        // Archipelago::Holidaysanity::ApItemToFlagKeyAndTier (14 entries,
        // compiled by generate_content.py from content/holidaysanity.yaml)
        // was real and already built, but a received "Holiday Unlock: ..."
        // item fell all the way through to the "unknown AP item id" log
        // below, so its holiday_* flag was never set and the Archipelago
        // Holiday Herald never listed the holiday.
        //
        // No per-character refresh is needed here (unlike gates'
        // bank_bag_slots/dual_spec/glyph_slots special cases above): the
        // holiday_* flags are realm-wide-only state, re-read live every
        // time a player interacts with the Archipelago Holiday Herald
        // gossip NPC (ArchipelagoHolidayHeraldScript.cpp's
        // OnGossipHello/OnGossipSelect), never cached on a Player.
        auto holidayIt = Archipelago::Holidaysanity::ApItemToFlagKeyAndTier.find(received.item);
        if (holidayIt != Archipelago::Holidaysanity::ApItemToFlagKeyAndTier.end())
        {
            auto const& [flagKey, tier] = holidayIt->second;
            sArchipelagoRealmState->SetFlagTier(flagKey, tier);
            highestSeen = std::max(highestSeen, received.index);
            continue;
        }

        auto trapIt = Archipelago::Traps::ApItemToEffectAndLethal.find(received.item);
        if (trapIt != Archipelago::Traps::ApItemToEffectAndLethal.end())
        {
            auto const& [effect, lethal] = trapIt->second;
            // Traps fire on receipt, targeting the same delivery character
            // SingleDeliveryCharacter mails to -- there is no other single "the
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

        // Task 26: fish.yaml's items use the same `mail` delivery kind as
        // the quests family, but are kept in their own generated table
        // (Archipelago::Fish::ApItemIdToWowItemEntry) rather than merged
        // into the quests-family one, so each compiled family stays
        // self-contained -- checked first, falling through to the
        // quests-family table below if it's not a fish item.
        auto fishEntryIt = Archipelago::Fish::ApItemIdToWowItemEntry.find(received.item);
        if (fishEntryIt != Archipelago::Fish::ApItemIdToWowItemEntry.end())
        {
            Archipelago::Delivery::DeliverItem(deliveryPolicy, fishEntryIt->second, deliveryCharacter, auctionHouseCostTier, trans);
            trans->Append("INSERT INTO archipelago_delivery_history (wow_item_entry) VALUES ({})", fishEntryIt->second);
            // Realm-wide "has this exact fish species ever been received"
            // set, backing Fishing Quest's "all 46 species" completion check
            // -- reuses the existing generic flag store (SetFlagTier under a
            // per-AP-item-id key) rather than a new mechanism, same as Key
            // Hunt's key counter and Task 23's instance-clear-sent guard.
            sArchipelagoRealmState->SetFlagTier("fish_received_" + std::to_string(received.item), 1);
            Archipelago::Goals::CheckAndSendGoalComplete();
            highestSeen = std::max(highestSeen, received.index);
            continue;
        }

        // Task 27 (Artisan): professions.yaml's items use the record_milestone
        // realm_state effect -- no real WoW item to mail (unlike fish),
        // just a flag-store entry under this item's own milestone_key.
        auto professionMilestoneIt = Archipelago::Professions::ApItemIdToMilestoneKey.find(received.item);
        if (professionMilestoneIt != Archipelago::Professions::ApItemIdToMilestoneKey.end())
        {
            sArchipelagoRealmState->SetFlagTier(professionMilestoneIt->second, 1);
            Archipelago::Goals::CheckAndSendGoalComplete();
            highestSeen = std::max(highestSeen, received.index);
            continue;
        }

        // M4.9 Sec4 (Achievement Hunt/Explorer): achievements.yaml's items
        // also use the record_milestone-shaped realm_state effect (named
        // record_achievement) -- no real WoW item to mail, same shape as
        // Archipelago::Professions' record_milestone. Keyed by the real
        // achievement id (not the AP item id) so ArchipelagoGoals.cpp's
        // IsAchievementHuntComplete/IsExplorerComplete can check the exact
        // same "achievement_received_<id>" flag namespace this dispatch
        // writes to.
        auto achievementIt = Archipelago::Achievements::ApItemIdToAchievementId.find(received.item);
        if (achievementIt != Archipelago::Achievements::ApItemIdToAchievementId.end())
        {
            sArchipelagoRealmState->SetFlagTier("achievement_received_" + std::to_string(achievementIt->second), 1);
            Archipelago::Goals::CheckAndSendGoalComplete();
            highestSeen = std::max(highestSeen, received.index);
            continue;
        }

        // Task 27 (Collector): collections.yaml's items also use `mail`
        // delivery (a real WoW item exists to hand over, unlike Artisan's
        // pure flavor milestones), kept in its own generated table for the
        // same self-contained-family reason as fish.
        auto collectionEntryIt = Archipelago::Collections::ApItemIdToWowItemEntry.find(received.item);
        if (collectionEntryIt != Archipelago::Collections::ApItemIdToWowItemEntry.end())
        {
            Archipelago::Delivery::DeliverItem(deliveryPolicy, collectionEntryIt->second, deliveryCharacter, auctionHouseCostTier, trans);
            trans->Append("INSERT INTO archipelago_delivery_history (wow_item_entry) VALUES ({})", collectionEntryIt->second);
            // Realm-wide "has this exact mount/pet ever been received" flag,
            // backing Collector's "all 264 collectibles" completion check --
            // same generic flag-store reuse as fish's per-species flag.
            sArchipelagoRealmState->SetFlagTier("collection_received_" + std::to_string(received.item), 1);
            Archipelago::Goals::CheckAndSendGoalComplete();
            highestSeen = std::max(highestSeen, received.index);
            continue;
        }

        // M4.9.3.1 fix: recipes.yaml/trainer_spells.yaml items use `mail`
        // delivery exactly like fish/collections, but were never wired into
        // this dispatch when M4.9.2 landed -- Task 1 of this plan gave the
        // generic compiler path a real ApItemIdToWowItemEntry map (recipes/
        // trainer_spells previously had no such map emitted at all), this
        // is the runtime half of that fix.
        auto recipeEntryIt = ArchipelagoRECIPESContent::ApItemIdToWowItemEntry.find(received.item);
        if (recipeEntryIt != ArchipelagoRECIPESContent::ApItemIdToWowItemEntry.end())
        {
            Archipelago::Delivery::DeliverItem(deliveryPolicy, recipeEntryIt->second, deliveryCharacter, auctionHouseCostTier, trans);
            trans->Append("INSERT INTO archipelago_delivery_history (wow_item_entry) VALUES ({})", recipeEntryIt->second);
            highestSeen = std::max(highestSeen, received.index);
            continue;
        }

        auto trainerSpellEntryIt = ArchipelagoTRAINER_SPELLSContent::ApItemIdToWowItemEntry.find(received.item);
        if (trainerSpellEntryIt != ArchipelagoTRAINER_SPELLSContent::ApItemIdToWowItemEntry.end())
        {
            Archipelago::Delivery::DeliverItem(deliveryPolicy, trainerSpellEntryIt->second, deliveryCharacter, auctionHouseCostTier, trans);
            trans->Append("INSERT INTO archipelago_delivery_history (wow_item_entry) VALUES ({})", trainerSpellEntryIt->second);
            highestSeen = std::max(highestSeen, received.index);
            continue;
        }

        // M4.11.4.1 final review fix (C1): containersanity used to have its
        // own block here (added by the M4.10.1 final review fix, mailing the
        // real WoW item behind a Container Item another player received
        // cross-world). That family no longer HAS per-row items: its rewrite
        // to abstract zone-pool locations set valid_delivery_kinds to the
        // empty set, so generate_content.py emits no ApItemIdToWowItemEntry
        // map for it at all and its abstract checks draw from the shared
        // filler pool instead (items.py's items_module=None convention).
        // Nothing to dispatch here anymore -- the block was removed rather
        // than left referencing a symbol that no longer exists.

        // M4.10.2 final whole-branch review fix (C2): gathersanity is the
        // SECOND family to ship with a real, compiled
        // ApItemIdToWowItemEntry map that nothing here consumed -- the exact
        // same gap the M4.10.1 fix directly above closed for containersanity,
        // recurring one milestone later.
        // ArchipelagoGATHERSANITYContent::ApItemIdToWowItemEntry (2,302
        // entries, compiled by generate_content.py's export_item_delivery
        // path) was real and already built, but a Gathersanity Item the
        // normal AP fill algorithm placed in a DIFFERENT player's world than
        // the one who unlocked it fell all the way through to the "unknown AP
        // item id" log below and the receiving player got nothing. Item id
        // ranges are disjoint across every family, so this block's position
        // in the chain is purely a readability choice -- kept adjacent to
        // containersanity's, the other M4.10.x loot-slot family.
        auto gathersanityEntryIt = ArchipelagoGATHERSANITYContent::ApItemIdToWowItemEntry.find(received.item);
        if (gathersanityEntryIt != ArchipelagoGATHERSANITYContent::ApItemIdToWowItemEntry.end())
        {
            Archipelago::Delivery::DeliverItem(deliveryPolicy, gathersanityEntryIt->second, deliveryCharacter, auctionHouseCostTier, trans);
            trans->Append("INSERT INTO archipelago_delivery_history (wow_item_entry) VALUES ({})", gathersanityEntryIt->second);
            highestSeen = std::max(highestSeen, received.index);
            continue;
        }

        // M4.10.5 final whole-branch review fix (C1): craftsanity is the
        // THIRD family to ship with a real, compiled ApItemIdToWowItemEntry
        // map that nothing here consumed -- the exact same gap the M4.10.1
        // and M4.10.2 fixes directly above closed for containersanity and
        // gathersanity, recurring a third time.
        // ArchipelagoCRAFTSANITYContent::ApItemIdToWowItemEntry (1,698
        // entries, compiled by generate_content.py's export_item_delivery
        // path) was real and already built, but a Craftsanity Item the
        // normal AP fill algorithm placed in a DIFFERENT player's world than
        // the one who crafted the tracked item fell all the way through to
        // the "unknown AP item id" log below and the receiving player got
        // nothing.
        auto craftsanityEntryIt = ArchipelagoCRAFTSANITYContent::ApItemIdToWowItemEntry.find(received.item);
        if (craftsanityEntryIt != ArchipelagoCRAFTSANITYContent::ApItemIdToWowItemEntry.end())
        {
            Archipelago::Delivery::DeliverItem(deliveryPolicy, craftsanityEntryIt->second, deliveryCharacter, auctionHouseCostTier, trans);
            trans->Append("INSERT INTO archipelago_delivery_history (wow_item_entry) VALUES ({})", craftsanityEntryIt->second);
            highestSeen = std::max(highestSeen, received.index);
            continue;
        }

        // M4.10.6 (Task 5 Step 1b): itemsanity is the FOURTH family to ship
        // with a real, compiled ApItemIdToWowItemEntry map that nothing
        // here consumed -- the exact same gap the M4.10.1/M4.10.2/M4.10.5
        // fixes directly above closed for containersanity, gathersanity,
        // and craftsanity, recurring a fourth time. Caught during this
        // milestone's own pre-flight review instead of at a later
        // whole-branch review.
        auto itemsanityEntryIt = ArchipelagoITEMSANITYContent::ApItemIdToWowItemEntry.find(received.item);
        if (itemsanityEntryIt != ArchipelagoITEMSANITYContent::ApItemIdToWowItemEntry.end())
        {
            Archipelago::Delivery::DeliverItem(deliveryPolicy, itemsanityEntryIt->second, deliveryCharacter, auctionHouseCostTier, trans);
            trans->Append("INSERT INTO archipelago_delivery_history (wow_item_entry) VALUES ({})", itemsanityEntryIt->second);
            highestSeen = std::max(highestSeen, received.index);
            continue;
        }

        // M4.9.3.1: filler_reward_items uses the same generic mail-delivery
        // path as fish/collections/recipes/trainer_spells.
        auto fillerItemEntryIt = ArchipelagoFILLER_REWARD_ITEMSContent::ApItemIdToWowItemEntry.find(received.item);
        if (fillerItemEntryIt != ArchipelagoFILLER_REWARD_ITEMSContent::ApItemIdToWowItemEntry.end())
        {
            Archipelago::Delivery::DeliverItem(deliveryPolicy, fillerItemEntryIt->second, deliveryCharacter, auctionHouseCostTier, trans);
            trans->Append("INSERT INTO archipelago_delivery_history (wow_item_entry) VALUES ({})", fillerItemEntryIt->second);
            highestSeen = std::max(highestSeen, received.index);
            continue;
        }

        // M4.9.3.1/M4.9.6: filler_reward_effects fires an instant effect on
        // receipt, exactly like Traps -- same online-delivery-character
        // resolution pattern as the traps lookup above, and the same
        // structured-binding idiom that lookup already uses for its own
        // pair-valued map.
        auto fillerEffectIt = Archipelago::FillerRewardEffects::ApItemToEffect.find(received.item);
        if (fillerEffectIt != Archipelago::FillerRewardEffects::ApItemToEffect.end())
        {
            auto const& [effect, param] = fillerEffectIt->second;
            ObjectGuid receiverGuid = sCharacterCache->GetCharacterGuidByName(deliveryCharacter);
            Player* onlineReceiver = receiverGuid.IsEmpty() ? nullptr : ObjectAccessor::FindPlayerByLowGUID(receiverGuid.GetCounter());
            if (onlineReceiver)
                Archipelago::FillerRewardEffects::ApplyFillerRewardEffect(onlineReceiver, effect, param);
            else
                LOG_INFO("module.archipelago_wow", "Archipelago: filler reward effect '{}' skipped, delivery character '{}' is offline", effect, deliveryCharacter);
            highestSeen = std::max(highestSeen, received.index);
            continue;
        }

        // M4.10.1 follow-up fix: quest_rewards/vendor_stock items also use
        // the same generic mail-delivery path as recipes/trainer_spells/
        // containersanity -- ArchipelagoQUEST_REWARDSContent::
        // ApItemIdToWowItemEntry (9,239 entries) and
        // ArchipelagoVENDOR_STOCKContent::ApItemIdToWowItemEntry (37,738
        // entries -- 37,750 real rows minus 12 dropped as duplicate
        // locations, same count every other emitted export agrees on)
        // were real and already built by generate_content.py's
        // export_item_delivery path once flipped on for these two families,
        // but nothing consumed them here. The retired comment this replaces
        // claimed these items were "delivered via item-synthesis
        // interception, never through this AP-ReceivedItems-mail path at
        // all" -- that doesn't hold up: item-synthesis interception only
        // explains how the *location* gets checked when the owning player
        // interacts with the real in-game quest/vendor NPC, not how the
        // *item* (which the normal AP fill algorithm may place on a
        // completely different player's world) ever reaches whoever it was
        // actually assigned to. A quest_rewards/vendor_stock item received
        // cross-world fell all the way through to the "unknown AP item id"
        // log below and the receiving player got nothing.
        auto questRewardEntryIt = ArchipelagoQUEST_REWARDSContent::ApItemIdToWowItemEntry.find(received.item);
        if (questRewardEntryIt != ArchipelagoQUEST_REWARDSContent::ApItemIdToWowItemEntry.end())
        {
            Archipelago::Delivery::DeliverItem(deliveryPolicy, questRewardEntryIt->second, deliveryCharacter, auctionHouseCostTier, trans);
            trans->Append("INSERT INTO archipelago_delivery_history (wow_item_entry) VALUES ({})", questRewardEntryIt->second);
            // M4.11.1 Task 15 fix: Quest Rewards deliveries never set a
            // per-item "received" flag or called CheckAndSendGoalComplete,
            // unlike every other family that delivers a real WoW item
            // (Fish/Collections both do both, see their own blocks above) --
            // a genuine, pre-existing, project-wide gap (Quest Rewards
            // triggered no live completion signal for ANY game mode, not
            // just Zone Leveler). Mirrors Fish's exact
            // "fish_received_<apItemId>" flag shape, under its own
            // "quest_reward_received_" namespace. Not yet consumed by any
            // live C++ completion check (Zone Leveler's own
            // clear_all_zone_quests goal needs zone-filtered item ids this
            // flag alone can't provide -- see ArchipelagoGoalsPure.h's own
            // comment on that deferred gap), but is independently correct
            // and low-risk to add now regardless, and unblocks that future
            // per-zone check the moment zone_id data is exported to C++.
            sArchipelagoRealmState->SetFlagTier("quest_reward_received_" + std::to_string(received.item), 1);
            Archipelago::Goals::CheckAndSendGoalComplete();
            highestSeen = std::max(highestSeen, received.index);
            continue;
        }

        auto vendorStockEntryIt = ArchipelagoVENDOR_STOCKContent::ApItemIdToWowItemEntry.find(received.item);
        if (vendorStockEntryIt != ArchipelagoVENDOR_STOCKContent::ApItemIdToWowItemEntry.end())
        {
            Archipelago::Delivery::DeliverItem(deliveryPolicy, vendorStockEntryIt->second, deliveryCharacter, auctionHouseCostTier, trans);
            trans->Append("INSERT INTO archipelago_delivery_history (wow_item_entry) VALUES ({})", vendorStockEntryIt->second);
            highestSeen = std::max(highestSeen, received.index);
            continue;
        }

        // M4.8.0: the standalone `quests` family is retired. Every real
        // family's items are now caught by their own lookup table above --
        // reaching this point means a genuinely unrecognized AP item id.
        LOG_ERROR("module.archipelago_wow", "Archipelago: received unknown AP item id {}, skipping", received.item);
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
