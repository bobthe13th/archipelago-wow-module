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
#include "Chat.h"
#include "Creature.h"
#include "Player.h"
#include "ScriptMgr.h"
#include "ArchipelagoManager.h"
#include "ArchipelagoRealmState.h"
#include "ArchipelagoCoreLoopContentTable.h"

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
    void OnPlayerCreatureKill(Player* /*killer*/, Creature* killed) override
    {
        for (auto const& [instanceKey, bossEntry] : Archipelago::CoreLoop::INSTANCE_FINAL_BOSS_ENTRY)
        {
            if (killed->GetEntry() != bossEntry)
                continue;

            auto locIt = Archipelago::CoreLoop::INSTANCE_CLEAR_LOCATIONS.find(instanceKey);
            if (locIt != Archipelago::CoreLoop::INSTANCE_CLEAR_LOCATIONS.end())
                sArchipelagoMgr->SendLocationChecks({ locIt->second });
            return;
        }
    }
};

class ArchipelagoInstanceGateScript : public PlayerScript
{
public:
    ArchipelagoInstanceGateScript() : PlayerScript("ArchipelagoInstanceGateScript", { PLAYERHOOK_CAN_ENTER_MAP }) { }

    // Hard-enforcement fallback behind the (non-existent, see file header)
    // door: a determined player summoned into the instance by someone else
    // would bypass a closed door, but not this map-entry gate.
    bool OnPlayerCanEnterMap(Player* player, MapEntry const* entry, InstanceTemplate const* /*instance*/, MapDifficulty const* /*mapDiff*/, bool /*loginCheck*/) override
    {
        // Map ids verified against AreaDefines.h in this checkout:
        // MAP_RAGEFIRE_CHASM = 389, MAP_DEADMINES = 36.
        std::string instanceKey;
        if (entry->MapID == 389)
            instanceKey = Archipelago::CoreLoop::INSTANCE_KEY_RAGEFIRE_CHASM;
        else if (entry->MapID == 36)
            instanceKey = Archipelago::CoreLoop::INSTANCE_KEY_DEADMINES;
        else
            return true; // not a gated instance

        if (sArchipelagoRealmState->IsInstanceUnlocked(instanceKey))
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
