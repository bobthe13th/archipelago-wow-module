// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoHolidayHeraldScript.cpp
//
// M4.10.7: the Archipelago Holiday Herald, one gossip NPC per capital city
// (creature_template entry 900001). Copies npc_archipelago_cache_keeper's
// real, working gossip shape (ArchipelagoCacheKeeperScript.cpp). Lists
// every holiday whose AP flag is unlocked (item received), showing its
// current on/off state via GameEventMgr::IsActiveEvent, and toggles it via
// StartEvent/StopEvent on selection.
#include <vector>

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
    //
    // M4.10.7 final review fix (I4): spec §8a guards "Headless Horseman,
    // Coren Direbrew, or any other holiday-boss encounter tied to an active
    // holiday" -- the two names in that sentence were examples, not the
    // whole list. This checkout really ships two more holiday bosses, both
    // verified against their own scripts' headers:
    //   * Ahune, the Midsummer Fire Festival boss --
    //     src/server/scripts/Outland/CoilfangReservoir/SlavePens/the_slave_pens.h
    //     (NPC_AHUNE = 25740; boss_ahune.cpp sits beside it).
    //   * Apothecary Hummel, the Love is in the Air / Crown Chemical Co.
    //     boss -- src/server/scripts/EasternKingdoms/ShadowfangKeep/shadowfang_keep.h
    //     (NPC_APOTHECARY_HUMMEL = 36296).
    // Flag keys below are copied verbatim from ArchipelagoHolidayRoster.h.
    struct GuardedBoss { std::string_view flagKey; uint32 creatureEntry; };
    constexpr std::array<GuardedBoss, 4> GUARDED_BOSSES = { {
        { "holiday_hallows_end",        23682 }, // NPC_HEADLESS_HORSEMAN_MOUNTED
        { "holiday_brewfest",           23872 }, // NPC_COREN_DIREBREW
        { "holiday_midsummer",          25740 }, // NPC_AHUNE
        { "holiday_love_is_in_the_air", 36296 }, // NPC_APOTHECARY_HUMMEL
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

    // The two roster entries whose merged event-id groups are NOT a plain
    // "act on every id" set -- see ResolveEventIds below. Kept as named
    // constants so the string literals never drift from
    // ArchipelagoHolidayRoster.h's flagKey column.
    constexpr std::string_view FLAG_DARKMOON_FAIRE = "holiday_darkmoon_faire";
    constexpr std::string_view FLAG_SCOURGE_INVASION = "holiday_scourge_invasion";

    // M4.10.7 final review fix (I3): Darkmoon Faire's three roster event
    // ids are not three holidays -- they are three LOCATIONS of one
    // recurring festival whose rotation AzerothCore's own scheduler already
    // owns. Verified against real data in this checkout:
    //   * data/sql/base/db_world/game_event.sql rows 3/4/5 ("Darkmoon Faire
    //     (Terokkar Forest)" / "(Elwynn Forest)" / "(Mulgore)") all share
    //     occurence = 131040 minutes (91 days) and length = 10079 minutes
    //     (~7 days), with three distinct client holiday ids (376/374/375),
    //     and NULL start/end so their real windows come from the DBC.
    //   * src/server/game/Events/HolidayDateCalculator.cpp lines 141-143
    //     give each of those holidays a DARKMOON_FAIRE rule with a
    //     different locationOffset, staggering them one month apart:
    //     Elwynn = Mar/Jun/Sep/Dec, Thunder Bluff = Jan/Apr/Jul/Oct,
    //     Shattrath = Feb/May/Aug/Nov.
    // So at most one location is ever in season at a time, which is exactly
    // the design spec's "auto-rotates monthly via AzerothCore's own
    // scheduler; the merged flag's toggle permits/blocks whichever instance
    // is currently scheduled rather than forcing a specific location, so
    // the AP toggle never fights the scheduler's own rotation".
    //
    // What shipped before this fix started ALL THREE at once, spawning the
    // faire in Elwynn, Mulgore and Terokkar simultaneously -- precisely the
    // "forcing a specific location" the spec forbids. This picks exactly
    // ONE id and always lets the scheduler choose which:
    //   1. If one of the three is inside its own calendar window right now
    //      (GameEventMgr::CheckOneGameEvent -- the same predicate
    //      GameEventMgr::Update itself uses to decide what should be
    //      running), that is the currently scheduled instance; use it.
    //   2. Otherwise -- the common case, since each location runs only ~7
    //      days of its 91-day cycle -- use whichever one the scheduler will
    //      bring up SOONEST (GameEventMgr::NextCheck, which for an
    //      out-of-window event returns the delay until its next start).
    //      That is still the scheduler picking the location; this module
    //      never hardcodes one.
    //
    // Deliberately NOT done: passing overwrite = false for this holiday so
    // the engine would "filter" the three ids for us. StartEvent does not
    // consult CheckOneGameEvent at the call site at all (GameEventMgr.cpp,
    // GameEventMgr::StartEvent) -- it activates unconditionally, and only a
    // later GameEventMgr::Update tick reverts an out-of-window
    // GAMEEVENT_NORMAL event. So overwrite = false would still flash all
    // three faires up for however long that tick takes, AND would break the
    // "blocks" half of the toggle, because that same tick silently
    // re-starts an event stopped without overwrite -- the exact C3 bug this
    // fix wave closes everywhere else in this file.
    uint16 PickDarkmoonFaireEventId(Archipelago::HolidayRoster::Entry const& entry)
    {
        for (uint8_t i = 0; i < entry.eventIdCount; ++i)
            if (sGameEventMgr->CheckOneGameEvent(entry.eventIds[i]))
                return entry.eventIds[i];

        uint16 soonestId = entry.eventIds[0];
        uint32 soonestDelay = sGameEventMgr->NextCheck(entry.eventIds[0]);
        for (uint8_t i = 1; i < entry.eventIdCount; ++i)
        {
            uint32 const delay = sGameEventMgr->NextCheck(entry.eventIds[i]);
            if (delay < soonestDelay)
            {
                soonestDelay = delay;
                soonestId = entry.eventIds[i];
            }
        }
        return soonestId;
    }

    // Which of a roster entry's event ids the herald may actually act on.
    // `starting` distinguishes an activate (Darkmoon Faire: the scheduled,
    // or next-scheduled, location) from a deactivate (Darkmoon Faire:
    // whichever location is really running right now).
    //
    // The generic answer is "all of them" -- Winter Veil's {2, 52} really
    // is two halves of one holiday that belong on together. Two entries are
    // deliberate exceptions, both mandated by the design spec:
    //   * Scourge Invasion (M4.10.7 final review fix I3) -- spec: "Ships as
    //     a plain spawn-toggle: gossip NPC activates/deactivates via
    //     StartEvent(17)/StopEvent(17), no per-species kill-location wiring
    //     built for it." eventIds[0] is 17, the master event (a
    //     GAMEEVENT_INTERNAL row in game_event); 120-130 are its 11
    //     per-species sub-events, which the herald must never drive
    //     directly. What shipped before this fix toggled all 12.
    //   * Darkmoon Faire -- see PickDarkmoonFaireEventId above.
    std::vector<uint16> ResolveEventIds(Archipelago::HolidayRoster::Entry const& entry, bool starting)
    {
        if (entry.eventIdCount == 0)
            return {};

        if (entry.flagKey == FLAG_SCOURGE_INVASION)
            return { entry.eventIds[0] };

        if (entry.flagKey == FLAG_DARKMOON_FAIRE)
        {
            if (starting)
                return { PickDarkmoonFaireEventId(entry) };

            std::vector<uint16> running;
            for (uint8_t i = 0; i < entry.eventIdCount; ++i)
                if (sGameEventMgr->IsActiveEvent(entry.eventIds[i]))
                    running.push_back(entry.eventIds[i]);
            return running;
        }

        std::vector<uint16> ids;
        ids.reserve(entry.eventIdCount);
        for (uint8_t i = 0; i < entry.eventIdCount; ++i)
            ids.push_back(entry.eventIds[i]);
        return ids;
    }

    // Whether this holiday currently reads as "on" for the gossip menu.
    // Darkmoon Faire needs ANY of its three location events to count,
    // because the scheduler -- not this module -- decides which one
    // PickDarkmoonFaireEventId activated. Every other entry is correctly
    // represented by its first id, Scourge Invasion included (eventIds[0]
    // is its master event 17).
    bool IsHolidayActive(Archipelago::HolidayRoster::Entry const& entry)
    {
        if (entry.eventIdCount == 0)
            return false;

        if (entry.flagKey == FLAG_DARKMOON_FAIRE)
        {
            for (uint8_t i = 0; i < entry.eventIdCount; ++i)
                if (sGameEventMgr->IsActiveEvent(entry.eventIds[i]))
                    return true;
            return false;
        }

        return sGameEventMgr->IsActiveEvent(entry.eventIds[0]);
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
                for (uint16 const eventId : ResolveEventIds(other, /*starting=*/false))
                    if (sGameEventMgr->IsActiveEvent(eventId))
                        sGameEventMgr->StopEvent(eventId, true);
            }
        }

        // M4.10.7 final review fix (C3 part A): overwrite = true, matching
        // AzerothCore's own GM commands (cs_event.cpp's
        // HandleEventStartCommand/HandleEventStopCommand). Without it,
        // GameEventMgr::Update reverts on its very next tick any
        // GAMEEVENT_NORMAL event whose CheckOneGameEvent says it should not
        // currently be running -- so a holiday activated outside its real
        // WotLK calendar window (i.e. nearly always, which is the entire
        // point of this feature) was silently switched straight back off.
        std::vector<uint16> const eventIds = ResolveEventIds(entry, /*starting=*/true);
        bool started = false;
        for (uint16 const eventId : eventIds)
        {
            sGameEventMgr->StartEvent(eventId, true);
            started = started || sGameEventMgr->IsActiveEvent(eventId);
        }

        // M4.10.7 final review fix (C3 part B): the herald used to claim
        // success unconditionally. Success is confirmed via IsActiveEvent
        // rather than StartEvent's own bool return, because that return
        // value does NOT mean "started": for a GAMEEVENT_NORMAL or
        // GAMEEVENT_INTERNAL row -- which is every id in this roster --
        // StartEvent returns false on its SUCCESS path (the branch that
        // calls AddActiveEvent/ApplyNewEvent and then plainly returns
        // false); only the world-event branch returns a meaningful bool.
        // AzerothCore's own GM command discards the return for the same
        // reason. IsActiveEvent is the real post-condition.
        if (started)
            ChatHandler(player->GetSession()).PSendSysMessage("Archipelago: {} is now active.", entry.displayName);
        else
            ChatHandler(player->GetSession()).PSendSysMessage("Archipelago: could not activate {} right now.", entry.displayName);
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

        // overwrite = true here for the mirror-image reason to StartHoliday's
        // (C3 part A): a holiday stopped WITHOUT overwrite during its real
        // in-game season is silently re-started by the next
        // GameEventMgr::Update tick.
        for (uint16 const eventId : ResolveEventIds(entry, /*starting=*/false))
            if (sGameEventMgr->IsActiveEvent(eventId))
                sGameEventMgr->StopEvent(eventId, true);

        ChatHandler(player->GetSession()).PSendSysMessage("Archipelago: {} is now inactive.", entry.displayName);
    }
}

class npc_archipelago_holiday_herald : public CreatureScript
{
public:
    npc_archipelago_holiday_herald() : CreatureScript("npc_archipelago_holiday_herald") { }

    bool OnGossipHello(Player* player, Creature* creature) override
    {
        uint32 unlockedCount = 0;
        for (auto const& entry : Archipelago::HolidayRoster::ENTRIES)
        {
            if (!sArchipelagoRealmState->IsFlagUnlocked(std::string(entry.flagKey)))
                continue;
            ++unlockedCount;
            bool active = IsHolidayActive(entry);
            std::string label = active
                ? Acore::StringFormat("Deactivate {} (currently active)", entry.displayName)
                : Acore::StringFormat("Activate {}", entry.displayName);
            AddGossipItemFor(player, GOSSIP_ICON_CHAT, label, GOSSIP_SENDER_MAIN,
                GOSSIP_ACTION_INFO_DEF + static_cast<uint32>(&entry - &Archipelago::HolidayRoster::ENTRIES[0]));
        }

        // M4.10.7 final review fix (M3): before any Holiday Unlock item has
        // been received the menu was completely empty, which reads in-game
        // as a broken NPC rather than as "nothing unlocked yet". The action
        // id here is deliberately past the end of the roster, so
        // OnGossipSelect's existing range check turns a click into a no-op.
        if (unlockedCount == 0)
        {
            AddGossipItemFor(player, GOSSIP_ICON_CHAT, "No holidays unlocked yet.", GOSSIP_SENDER_MAIN,
                GOSSIP_ACTION_INFO_DEF + static_cast<uint32>(Archipelago::HolidayRoster::ENTRIES.size()));
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

        // M4.10.7 final review fix (M4): re-check the unlock here instead of
        // trusting the menu that was rendered by OnGossipHello. The gossip
        // action id is client-supplied and the realm-wide flag store can
        // change between render and select (a fresh Holiday Unlock delivery,
        // an operator resetting realm state), so this is the only place the
        // toggle is actually authorised.
        if (!sArchipelagoRealmState->IsFlagUnlocked(std::string(entry.flagKey)))
        {
            ChatHandler(player->GetSession()).PSendSysMessage(
                "Archipelago: {} is not unlocked.", entry.displayName);
            return true;
        }

        bool active = IsHolidayActive(entry);
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
