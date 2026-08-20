// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoCacheKeeperScript.cpp
//
// Task 13 (Delivery::Policy::SharedCacheNpc): the "Archipelago Cache Keeper"
// gossip NPC (creature_template entry 900000, see
// data/sql/updates/pending_db_world/rev_1787247438769110800.sql). Offers two
// distinct options, per design spec Sec7.1:
//   1. Personal copy (the default behavior): one copy of every WoW item
//      entry APDelivery.cpp has recorded into archipelago_cache_items that
//      this character hasn't already claimed (archipelago_cache_claims) --
//      "everyone who logs in sees the full cache and takes their own copy.
//      No scarcity."
//   2. Realm-wide pile (the opt-in variant, "clearly labeled" per spec, not
//      a silent default): grants every currently-unclaimed entry to this
//      character and permanently removes it from the cache for everyone
//      else, including future personal-copy claims
//      (archipelago_cache_realm_claimed).
//
// Task 15 (Delivery::Policy::FirstToClaim) repurposes the same NPC for a
// third gossip option, rather than spawning a second NPC: drains every
// row APDelivery.cpp queued into archipelago_first_to_claim_pending to
// whoever picks that option first.
#include "Chat.h"
#include "CreatureScript.h"
#include "DatabaseEnv.h"
#include "Player.h"
#include "ScriptedGossip.h"
#include "WorldSession.h"
#include "APDelivery.h"

namespace
{
    constexpr uint32 GOSSIP_ACTION_CLAIM_PERSONAL = GOSSIP_ACTION_INFO_DEF + 1;
    constexpr uint32 GOSSIP_ACTION_CLAIM_REALM_PILE = GOSSIP_ACTION_INFO_DEF + 2;
    constexpr uint32 GOSSIP_ACTION_CLAIM_FIRST_TO_CLAIM = GOSSIP_ACTION_INFO_DEF + 3;

    void ClaimPersonalCopies(Player* player)
    {
        ObjectGuid::LowType guid = player->GetGUID().GetCounter();
        // Excludes entries already claimed by this character AND entries
        // already taken from the realm-wide pile by anyone (those are gone
        // for the whole realm, not just their claimant).
        QueryResult result = CharacterDatabase.Query(
            "SELECT c.wow_item_entry FROM archipelago_cache_items c "
            "LEFT JOIN archipelago_cache_claims k ON k.wow_item_entry = c.wow_item_entry AND k.character_guid = {} "
            "LEFT JOIN archipelago_cache_realm_claimed r ON r.wow_item_entry = c.wow_item_entry "
            "WHERE k.character_guid IS NULL AND r.wow_item_entry IS NULL",
            guid);
        if (!result)
        {
            ChatHandler(player->GetSession()).PSendSysMessage("Archipelago: nothing new to claim from the shared cache.");
            return;
        }

        CharacterDatabaseTransaction trans = CharacterDatabase.BeginTransaction();
        uint32 grantedCount = 0;
        do
        {
            uint32 entry = (*result)[0].Get<uint32>();
            Archipelago::Delivery::GiveOrMailItem(player, entry, trans);
            trans->Append("INSERT IGNORE INTO archipelago_cache_claims (character_guid, wow_item_entry) VALUES ({}, {})", guid, entry);
            ++grantedCount;
        } while (result->NextRow());
        CharacterDatabase.CommitTransaction(trans);

        ChatHandler(player->GetSession()).PSendSysMessage("Archipelago: claimed {} item(s) from the shared cache.", grantedCount);
    }

    void ClaimRealmWidePile(Player* player)
    {
        QueryResult result = CharacterDatabase.Query(
            "SELECT c.wow_item_entry FROM archipelago_cache_items c "
            "LEFT JOIN archipelago_cache_realm_claimed r ON r.wow_item_entry = c.wow_item_entry "
            "WHERE r.wow_item_entry IS NULL");
        if (!result)
        {
            ChatHandler(player->GetSession()).PSendSysMessage("Archipelago: the realm-wide pile is empty.");
            return;
        }

        CharacterDatabaseTransaction trans = CharacterDatabase.BeginTransaction();
        uint32 grantedCount = 0;
        do
        {
            uint32 entry = (*result)[0].Get<uint32>();
            Archipelago::Delivery::GiveOrMailItem(player, entry, trans);
            // Marking this entry realm-claimed (not just per-character) is what makes
            // this option a single shared pile instead of another personal copy: once
            // taken here, it is gone from both this option and ClaimPersonalCopies for
            // every other character on the realm.
            trans->Append("INSERT IGNORE INTO archipelago_cache_realm_claimed (wow_item_entry) VALUES ({})", entry);
            ++grantedCount;
        } while (result->NextRow());
        CharacterDatabase.CommitTransaction(trans);

        ChatHandler(player->GetSession()).PSendSysMessage("Archipelago: took {} item(s) from the realm-wide pile -- no one else can claim them now.", grantedCount);
    }

    // Task 15 (Delivery::Policy::FirstToClaim): drains the whole pending queue to
    // whoever picks this option first, deleting each row as it's granted so a later
    // claimer sees nothing left. NOTE: like ClaimPersonalCopies/ClaimRealmWidePile
    // above, the initial SELECT and the granting transaction are not atomic with each
    // other, so two players interacting within the same instant could theoretically
    // both read the same still-pending rows before either commits -- an accepted,
    // narrow race matching this NPC's existing claim paths, not a new gap.
    void ClaimFirstToClaimQueue(Player* player)
    {
        QueryResult result = CharacterDatabase.Query("SELECT id, wow_item_entry FROM archipelago_first_to_claim_pending");
        if (!result)
        {
            ChatHandler(player->GetSession()).PSendSysMessage("Archipelago: nothing is waiting to be claimed right now.");
            return;
        }

        CharacterDatabaseTransaction trans = CharacterDatabase.BeginTransaction();
        uint32 grantedCount = 0;
        do
        {
            uint32 id = (*result)[0].Get<uint32>();
            uint32 entry = (*result)[1].Get<uint32>();
            Archipelago::Delivery::GiveOrMailItem(player, entry, trans);
            trans->Append("DELETE FROM archipelago_first_to_claim_pending WHERE id = {}", id);
            ++grantedCount;
        } while (result->NextRow());
        CharacterDatabase.CommitTransaction(trans);

        ChatHandler(player->GetSession()).PSendSysMessage("Archipelago: claimed {} first-to-claim item(s) -- you got there first!", grantedCount);
    }
}

class npc_archipelago_cache_keeper : public CreatureScript
{
public:
    npc_archipelago_cache_keeper() : CreatureScript("npc_archipelago_cache_keeper") { }

    bool OnGossipHello(Player* player, Creature* creature) override
    {
        AddGossipItemFor(player, GOSSIP_ICON_CHAT,
            "Give me my own copy of every item the realm has received that I haven't claimed yet.",
            GOSSIP_SENDER_MAIN, GOSSIP_ACTION_CLAIM_PERSONAL);
        AddGossipItemFor(player, GOSSIP_ICON_CHAT,
            "Take everything left in the realm-wide pile for good -- first come, first served, no one else will be able to claim it after me.",
            GOSSIP_SENDER_MAIN, GOSSIP_ACTION_CLAIM_REALM_PILE);
        AddGossipItemFor(player, GOSSIP_ICON_CHAT,
            "Claim whatever first-to-claim items are waiting -- first come, first served.",
            GOSSIP_SENDER_MAIN, GOSSIP_ACTION_CLAIM_FIRST_TO_CLAIM);
        SendGossipMenuFor(player, player->GetGossipTextId(creature), creature->GetGUID());
        return true;
    }

    bool OnGossipSelect(Player* player, Creature* /*creature*/, uint32 /*sender*/, uint32 action) override
    {
        ClearGossipMenuFor(player);
        CloseGossipMenuFor(player);

        if (action == GOSSIP_ACTION_CLAIM_PERSONAL)
            ClaimPersonalCopies(player);
        else if (action == GOSSIP_ACTION_CLAIM_REALM_PILE)
            ClaimRealmWidePile(player);
        else if (action == GOSSIP_ACTION_CLAIM_FIRST_TO_CLAIM)
            ClaimFirstToClaimQueue(player);

        return true;
    }
};

void AddArchipelagoCacheKeeperScripts()
{
    new npc_archipelago_cache_keeper();
}
