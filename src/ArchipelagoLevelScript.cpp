// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoLevelScript.cpp
#include "Player.h"
#include "ScriptMgr.h"
#include "APCatchUp.h"
#include "ArchipelagoManager.h"
#include "ArchipelagoCoreLoopContentTable.h"

class ArchipelagoLevelScript : public PlayerScript
{
public:
    ArchipelagoLevelScript() : PlayerScript("ArchipelagoLevelScript", { PLAYERHOOK_ON_LEVEL_CHANGED }) { }

    void OnPlayerLevelChanged(Player* player, uint8 oldLevel) override
    {
        uint8 newLevel = player->GetLevel();

        // Scan the whole range crossed, not just newLevel -- a GM command or
        // catch-up mechanic can jump multiple levels in one hook firing, and
        // OnPlayerLevelChanged only fires once for that jump (verified
        // against Player::GiveLevel/GiveXP during planning).
        std::vector<int64_t> checks;
        for (uint8 level = oldLevel + 1; level <= newLevel; ++level)
        {
            auto it = Archipelago::CoreLoop::LEVEL_LOCATIONS.find(level);
            if (it != Archipelago::CoreLoop::LEVEL_LOCATIONS.end())
                checks.push_back(it->second);
        }
        if (!checks.empty())
            sArchipelagoMgr->SendLocationChecks(checks);

        if (oldLevel < Archipelago::CoreLoop::SPRINT_GOAL_LEVEL && newLevel >= Archipelago::CoreLoop::SPRINT_GOAL_LEVEL)
            sArchipelagoMgr->SendGoalComplete();

        Archipelago::CatchUp::OnPlayerLevelChanged(player, oldLevel, newLevel);
    }
};

void AddArchipelagoLevelScripts()
{
    new ArchipelagoLevelScript();
}
