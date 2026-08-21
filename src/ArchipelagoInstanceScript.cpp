// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoInstanceScript.cpp
//
// Instance-clear location checks + instance entry gating for M2.1's core
// loop. Door-visual gating (Step in the M2.1 task-6 brief) was researched
// live against acore_world and found not to apply to either gated instance
// in this dataset:
//   - Ragefire Chasm (map 389) has zero type=0 (GAMEOBJECT_TYPE_DOOR) rows
//     at all, and nothing of any GO type near its entrance teleport target
//     (areatrigger_teleport id 2230, ~3.81,-14.82,-17.84) other than a
//     decorative brazier doodad -- the entrance is an open archway.
//   - Deadmines (map 36) does have several door GameObjects, but all are
//     interior encounter gates (Foundry Door, Heavy Door x2, Mast Room
//     Door, Factory Door, Iron Clad Door); none are within 30 units of its
//     entrance teleport target (areatrigger_teleport id 78, ~-16.4,-383.07),
//     which is itself just a tunnel mouth from Westfall.
// So there is no real entrance-door GameObject to drive for either
// instance -- fabricating one would be exactly the mistake this plan's
// research phase exists to avoid. Beyond that, AzerothCore only dispatches
// one InstanceMapScript per map (bound via instance_template.ScriptName),
// and both maps already have one from core content (instance_ragefire_chasm
// / instance_deadmines) that must not be displaced. Adding a second,
// module-owned InstanceMapScript for either map would either silently never
// fire (if instance_template.ScriptName isn't repointed) or replace the
// existing encounter script (if it were), which is out of this task's
// scope and would be a real regression. Hard enforcement below via
// OnPlayerCanEnterMap is therefore the sole (and, per the brief, acceptable)
// gating mechanism for M2.1; a door visual remains a documented follow-up
// if a suitable GameObject is ever added to the map data.
#include <algorithm>
#include <unordered_map>

#include "Chat.h"
#include "Creature.h"
#include "Player.h"
#include "ScriptMgr.h"
#include "ArchipelagoManager.h"
#include "ArchipelagoRealmState.h"
#include "ArchipelagoCoreLoopContentTable.h"
#include "ArchipelagoRaresContentTable.h"

class ArchipelagoInstanceKillScript : public PlayerScript
{
public:
    ArchipelagoInstanceKillScript() : PlayerScript("ArchipelagoInstanceKillScript", { PLAYERHOOK_ON_CREATURE_KILL }) { }

    // Fires exactly once per creature death, attributed to the single
    // player who landed the killing blow (verified against the real call
    // site in Unit::Kill) -- not broadcast per party member. Known M2.1
    // edge case: if a pet/guardian lands the final blow, this hook does not
    // fire for the owner, so a pet-tanked/pet-finished final boss kill will
    // not send the instance-clear location check.
    //
    // Task 23: Archipelago.InstanceClearMode splits behavior in two.
    // final_boss_only (and every instance with no `bosses:` list at all --
    // Ragefire Chasm/Deadmines, unconditionally, regardless of the operator's
    // InstanceClearMode setting) keeps the original M2.1 behavior below:
    // fire immediately the instant the configured final-boss entry dies, no
    // other boss kill matters. all_bosses instead records every recognized
    // boss kill into archipelago_boss_kills (realm-wide, survives restarts)
    // and only fires once every entry configured for that instance has been
    // recorded at least once -- resurrection-prone fights (Sunwell's Eredar
    // Twins) or scripted multi-phase kills (Kalecgos's Sathrovarr, M'uru's
    // Entropius phase -- see core_loop.yaml's own header comment for why
    // those specific entries were chosen) are all handled correctly by this
    // "recorded at least once, order doesn't matter" model.
    void OnPlayerCreatureKill(Player* /*killer*/, Creature* killed) override
    {
        uint32_t entry = killed->GetEntry();

        if (sArchipelagoRealmState->GetInstanceClearMode() == "all_bosses")
        {
            for (auto const& [instanceKey, bossEntries] : Archipelago::CoreLoop::INSTANCE_BOSS_ENTRIES)
            {
                if (std::find(bossEntries.begin(), bossEntries.end(), entry) == bossEntries.end())
                    continue;

                sArchipelagoRealmState->RecordBossKill(instanceKey, entry);

                std::string sentFlagKey = "instance_clear_sent_" + instanceKey;
                if (sArchipelagoRealmState->IsFlagUnlocked(sentFlagKey))
                    return; // already sent for this instance

                bool allRecorded = std::all_of(bossEntries.begin(), bossEntries.end(),
                    [&](uint32_t bossEntry) { return sArchipelagoRealmState->IsBossKillRecorded(instanceKey, bossEntry); });
                if (!allRecorded)
                    return;

                sArchipelagoRealmState->SetFlagTier(sentFlagKey, 1);
                auto locIt = Archipelago::CoreLoop::INSTANCE_CLEAR_LOCATIONS.find(instanceKey);
                if (locIt != Archipelago::CoreLoop::INSTANCE_CLEAR_LOCATIONS.end())
                    sArchipelagoMgr->SendLocationChecks({ locIt->second });
                return;
            }
            // entry matched no all_bosses-tracked roster -- fall through to
            // the final_boss_only path below, which also covers Ragefire
            // Chasm/Deadmines (never present in INSTANCE_BOSS_ENTRIES).
        }

        for (auto const& [instanceKey, bossEntry] : Archipelago::CoreLoop::INSTANCE_FINAL_BOSS_ENTRY)
        {
            if (entry != bossEntry)
                continue;

            auto locIt = Archipelago::CoreLoop::INSTANCE_CLEAR_LOCATIONS.find(instanceKey);
            if (locIt != Archipelago::CoreLoop::INSTANCE_CLEAR_LOCATIONS.end())
                sArchipelagoMgr->SendLocationChecks({ locIt->second });
            return;
        }

        // Task 25 (Key Hunt): reuses this exact hook rather than registering
        // a second PLAYERHOOK_ON_CREATURE_KILL script -- AzerothCore
        // dispatches every registered script for a hook, so a second
        // registration would be redundant, not additive. Sent unconditionally
        // on a matching kill regardless of Archipelago.GameMode/whether this
        // generation actually sampled the location into its pool -- see
        // ArchipelagoRaresContentTable.h's own header comment for why that's
        // safe (the AP server silently ignores an unrecognized location id).
        auto rareIt = Archipelago::Rares::CreatureEntryToLocationId.find(entry);
        if (rareIt != Archipelago::Rares::CreatureEntryToLocationId.end())
            sArchipelagoMgr->SendLocationChecks({ rareIt->second });
    }
};

class ArchipelagoInstanceGateScript : public PlayerScript
{
public:
    ArchipelagoInstanceGateScript() : PlayerScript("ArchipelagoInstanceGateScript", { PLAYERHOOK_CAN_ENTER_MAP }) { }

    // Hard-enforcement fallback behind the (non-existent, see file header)
    // door: a determined player summoned into the instance by someone else
    // would bypass a closed door, but not this map-entry gate.
    //
    // Task 23: extended from a 2-way if/else to a data-driven map covering
    // all 5 gated instances -- Molten Core/Sunwell Plateau/Icecrown Citadel
    // get the same hard entry gate Ragefire Chasm/Deadmines already had,
    // unconditionally regardless of InstanceClearMode (a raid group could
    // otherwise physically clear a raid before its Instance Unlock item was
    // ever delivered, which the kill-recording hook alone doesn't prevent --
    // it only tracks/reports kills, it never blocks entry).
    bool OnPlayerCanEnterMap(Player* player, MapEntry const* entry, InstanceTemplate const* /*instance*/, MapDifficulty const* /*mapDiff*/, bool /*loginCheck*/) override
    {
        // When the module is disabled, this must be full vanilla behavior:
        // no gating, no lookups into unlock state at all.
        if (!sArchipelagoRealmState->IsEnabled())
            return true;

        // Map ids verified against AreaDefines.h in this checkout:
        // MAP_RAGEFIRE_CHASM = 389, MAP_DEADMINES = 36, MAP_MOLTEN_CORE = 409,
        // MAP_THE_SUNWELL = 580, MAP_ICECROWN_CITADEL = 631.
        static std::unordered_map<uint32_t, std::string> const mapIdToInstanceKey = {
            { 389, Archipelago::CoreLoop::INSTANCE_KEY_RAGEFIRE_CHASM },
            { 36, Archipelago::CoreLoop::INSTANCE_KEY_DEADMINES },
            { 409, Archipelago::CoreLoop::INSTANCE_KEY_MOLTEN_CORE },
            { 580, Archipelago::CoreLoop::INSTANCE_KEY_SUNWELL_PLATEAU },
            { 631, Archipelago::CoreLoop::INSTANCE_KEY_ICECROWN_CITADEL },
        };

        auto it = mapIdToInstanceKey.find(entry->MapID);
        if (it == mapIdToInstanceKey.end())
            return true; // not a gated instance

        if (sArchipelagoRealmState->IsInstanceUnlocked(it->second))
            return true;

        ChatHandler(player->GetSession()).PSendSysMessage("This instance is locked. Find its Archipelago unlock item first.");
        return false;
    }
};

void AddArchipelagoInstanceScripts()
{
    new ArchipelagoInstanceKillScript();
    new ArchipelagoInstanceGateScript();
}
