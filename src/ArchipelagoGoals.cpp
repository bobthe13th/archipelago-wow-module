// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoGoals.cpp
#include "ArchipelagoGoals.h"

#include <string>

#include "ArchipelagoCoreLoopContentTable.h"
#include "ArchipelagoManager.h"
#include "ArchipelagoRealmState.h"

namespace Archipelago::Goals
{
    namespace
    {
        bool IsCompletionistComplete()
        {
            auto it = Archipelago::CoreLoop::INSTANCES_BY_EXPANSION.find(sArchipelagoRealmState->GetCompletionistExpansion());
            if (it == Archipelago::CoreLoop::INSTANCES_BY_EXPANSION.end() || it->second.empty())
                return false;

            for (std::string const& instanceKey : it->second)
                if (!sArchipelagoRealmState->IsInstanceUnlocked(instanceKey))
                    return false;

            return true;
        }
    }

    void CheckAndSendGoalComplete()
    {
        std::string const& mode = sArchipelagoRealmState->GetGameMode();

        // Sprint is NOT handled here, deliberately: its real completion
        // condition is "some specific player's own level reached 60", not a
        // pure realm-state fact -- ArchipelagoLevelScript.cpp's
        // OnPlayerLevelChanged already checks that correctly, inline, using
        // the level-changed event's own oldLevel/newLevel (Player::GetLevel())
        // context this function doesn't have. Checking
        // GetLevelCap() >= SPRINT_GOAL_LEVEL here instead would be a real bug:
        // the cap can be raised to 60 by item delivery well before any player
        // has actually ground the XP to reach it, which would report the goal
        // complete too early.
        bool complete = false;
        if (mode == "classic")
            complete = sArchipelagoRealmState->IsInstanceUnlocked(Archipelago::CoreLoop::INSTANCE_KEY_MOLTEN_CORE);
        else if (mode == "burning_crusade")
            complete = sArchipelagoRealmState->IsInstanceUnlocked(Archipelago::CoreLoop::INSTANCE_KEY_SUNWELL_PLATEAU);
        else if (mode == "wrath")
            complete = sArchipelagoRealmState->IsInstanceUnlocked(Archipelago::CoreLoop::INSTANCE_KEY_ICECROWN_CITADEL);
        else if (mode == "completionist")
            complete = IsCompletionistComplete();
        // Every other GameMode value (key_hunt, artisan, collector, ...) has
        // no C++-side completion check yet, matching goals.py's own
        // _not_yet_implemented deferral for those modes -- this function
        // simply never reports completion for them, rather than guessing.

        if (complete)
            sArchipelagoMgr->SendGoalComplete();
    }
}
