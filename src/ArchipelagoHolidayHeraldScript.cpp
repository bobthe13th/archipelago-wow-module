// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoHolidayHeraldScript.cpp
//
// M4.10.7: the Archipelago Holiday Herald, one gossip NPC per capital city
// (creature_template entry 900001). Copies npc_archipelago_cache_keeper's
// real, working gossip shape (ArchipelagoCacheKeeperScript.cpp). Lists
// every holiday whose AP flag is unlocked (item received), showing its
// current on/off state via GameEventMgr::IsActiveEvent, and toggles it via
// StartEvent/StopEvent on selection.
#include "Chat.h"
#include "Creature.h"
#include "CreatureScript.h"
#include "GameEventMgr.h"
#include "GossipDef.h"
#include "MapMgr.h"
#include "Player.h"
#include "ScriptedGossip.h"
#include "StringFormat.h"
#include "WorldSession.h"
#include "ArchipelagoHolidayRoster.h"
#include "ArchipelagoRealmState.h"

namespace
{
    // Real boss creature entries whose in-progress combat should block a
    // StopEvent for the holiday they belong to (design spec §8a's
    // confirmation flow). Realm-wide, not per-instance -- see this task's
    // Interfaces note for why a per-instance InstanceScript flag would be
    // the wrong (and, for Coren Direbrew, nonexistent) mechanism here.
    struct GuardedBoss { std::string_view flagKey; uint32 creatureEntry; };
    constexpr std::array<GuardedBoss, 2> GUARDED_BOSSES = { {
        { "holiday_hallows_end", 23682 }, // NPC_HEADLESS_HORSEMAN_MOUNTED
        { "holiday_brewfest",    23872 }, // NPC_COREN_DIREBREW
    } };

    // Realm-wide "is a live copy of this boss entry currently in combat, in
    // any loaded map/instance" search, used by StopHoliday's confirmation
    // flow below. NOTE: HashMapHolder<Creature> is NOT usable here --
    // ObjectAccessor.cpp only explicitly instantiates HashMapHolder<Player>
    // and HashMapHolder<MotionTransport> (its own Insert() carries a
    // static_assert restricting registration to those two types: "Only
    // Player and Motion Transport can be registered in global
    // HashMapHolder"), so creatures are never tracked in that global
    // hashmap and HashMapHolder<Creature>::GetContainer()/GetLock() would
    // fail to link (their bodies live in ObjectAccessor.cpp and are never
    // instantiated for Creature). The real, verified realm-wide
    // creature-iteration mechanism is the one GameEventMgr itself already
    // uses one call up the chain from here
    // (GameEventMgr::RunSmartAIScripts, GameEventMgr.cpp): sMapMgr's
    // DoForAllMaps combined with a TypeContainerVisitor over each Map's own
    // GetObjectsStore(), which mirrors that function's own
    // GameEventAIHookWorker shape (an explicit Creature-map Visit()
    // overload plus a catch-all template Visit() for every other stored
    // object type in MapStoredObjectTypesContainer).
    class HolidayBossSearcher
    {
    public:
        explicit HolidayBossSearcher(uint32 creatureEntry) : _creatureEntry(creatureEntry) { }

        void Visit(std::unordered_map<ObjectGuid, Creature*>& creatureMap)
        {
            if (_found)
                return;
            for (auto const& p : creatureMap)
            {
                if (p.second->GetEntry() == _creatureEntry && p.second->IsInCombat())
                {
                    _found = true;
                    return;
                }
            }
        }

        template<class T>
        void Visit(std::unordered_map<ObjectGuid, T*>&) { }

        bool Found() const { return _found; }

    private:
        uint32 _creatureEntry;
        bool _found = false;
    };

    bool IsAnyHolidayBossEngaged(uint32 creatureEntry)
    {
        HolidayBossSearcher searcher(creatureEntry);
        sMapMgr->DoForAllMaps([&searcher](Map* map)
        {
            TypeContainerVisitor<HolidayBossSearcher, MapStoredObjectTypesContainer> visitor(searcher);
            visitor.Visit(map->GetObjectsStore());
        });
        return searcher.Found();
    }

    void StartHoliday(Player* player, Archipelago::HolidayRoster::Entry const& entry)
    {
        if (!sArchipelagoRealmState->GetHolidaysanityStacking())
        {
            // Deactivate whichever holiday is currently running before
            // starting the new one -- "only one holiday active at a time
            // by default" (design spec §8a).
            for (auto const& other : Archipelago::HolidayRoster::ENTRIES)
            {
                if (other.flagKey == entry.flagKey || !sArchipelagoRealmState->IsFlagUnlocked(std::string(other.flagKey)))
                    continue;
                for (uint8_t i = 0; i < other.eventIdCount; ++i)
                    if (sGameEventMgr->IsActiveEvent(other.eventIds[i]))
                        sGameEventMgr->StopEvent(other.eventIds[i]);
            }
        }

        for (uint8_t i = 0; i < entry.eventIdCount; ++i)
            sGameEventMgr->StartEvent(entry.eventIds[i]);

        ChatHandler(player->GetSession()).PSendSysMessage("Archipelago: {} is now active.", entry.displayName);
    }

    void StopHoliday(Player* player, Archipelago::HolidayRoster::Entry const& entry)
    {
        for (auto const& guarded : GUARDED_BOSSES)
        {
            if (guarded.flagKey != entry.flagKey)
                continue;
            if (IsAnyHolidayBossEngaged(guarded.creatureEntry))
            {
                ChatHandler(player->GetSession()).PSendSysMessage(
                    "Archipelago: cannot deactivate {} right now -- a player is still fighting its encounter. Try again once the fight ends.",
                    entry.displayName);
                return;
            }
        }

        for (uint8_t i = 0; i < entry.eventIdCount; ++i)
            if (sGameEventMgr->IsActiveEvent(entry.eventIds[i]))
                sGameEventMgr->StopEvent(entry.eventIds[i]);

        ChatHandler(player->GetSession()).PSendSysMessage("Archipelago: {} is now inactive.", entry.displayName);
    }
}

class npc_archipelago_holiday_herald : public CreatureScript
{
public:
    npc_archipelago_holiday_herald() : CreatureScript("npc_archipelago_holiday_herald") { }

    bool OnGossipHello(Player* player, Creature* creature) override
    {
        for (auto const& entry : Archipelago::HolidayRoster::ENTRIES)
        {
            if (!sArchipelagoRealmState->IsFlagUnlocked(std::string(entry.flagKey)))
                continue;
            bool active = entry.eventIdCount > 0 && sGameEventMgr->IsActiveEvent(entry.eventIds[0]);
            std::string label = active
                ? Acore::StringFormat("Deactivate {} (currently active)", entry.displayName)
                : Acore::StringFormat("Activate {}", entry.displayName);
            AddGossipItemFor(player, GOSSIP_ICON_CHAT, label, GOSSIP_SENDER_MAIN,
                GOSSIP_ACTION_INFO_DEF + static_cast<uint32>(&entry - &Archipelago::HolidayRoster::ENTRIES[0]));
        }
        SendGossipMenuFor(player, player->GetGossipTextId(creature), creature->GetGUID());
        return true;
    }

    bool OnGossipSelect(Player* player, Creature* /*creature*/, uint32 /*sender*/, uint32 action) override
    {
        ClearGossipMenuFor(player);
        CloseGossipMenuFor(player);

        uint32 index = action - GOSSIP_ACTION_INFO_DEF;
        if (index >= Archipelago::HolidayRoster::ENTRIES.size())
            return true;

        auto const& entry = Archipelago::HolidayRoster::ENTRIES[index];
        bool active = entry.eventIdCount > 0 && sGameEventMgr->IsActiveEvent(entry.eventIds[0]);
        if (active)
            StopHoliday(player, entry);
        else
            StartHoliday(player, entry);

        return true;
    }
};

void AddArchipelagoHolidayHeraldScripts()
{
    new npc_archipelago_holiday_herald();
}
