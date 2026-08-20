// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoLevelScript.cpp
#include "Player.h"
#include "ScriptMgr.h"
#include "APCatchUp.h"
#include "ArchipelagoCoreLoopContentTable.h"
#include "ArchipelagoGoals.h"
#include "ArchipelagoManager.h"
#include "ArchipelagoRealmState.h"

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

        // Sprint's own completion check stays here, unchanged from M2.1 --
        // it's genuinely per-player (THIS player's own level crossing 60),
        // not a pure realm-state fact, so it doesn't fit
        // ArchipelagoGoals::CheckAndSendGoalComplete's no-argument,
        // realm-state-only dispatch (see that function's own comment for why
        // GetLevelCap() >= SPRINT_GOAL_LEVEL would be a real bug here).
        if (sArchipelagoRealmState->GetGameMode() == "sprint" &&
            oldLevel < Archipelago::CoreLoop::SPRINT_GOAL_LEVEL && newLevel >= Archipelago::CoreLoop::SPRINT_GOAL_LEVEL)
            sArchipelagoMgr->SendGoalComplete();

        // Task 23/24 bugfix: every OTHER mode's completion condition used to
        // never fire SendGoalComplete() at all in real play -- Classic/
        // Burning Crusade/Wrath/Completionist's own condition doesn't depend
        // on leveling, so this call is a correct no-op for them today, but
        // dispatches internally and only evaluates the configured mode's own
        // condition. See ArchipelagoGoals.h's header comment.
        Archipelago::Goals::CheckAndSendGoalComplete();

        Archipelago::CatchUp::OnPlayerLevelChanged(player, oldLevel, newLevel);
    }
};

void AddArchipelagoLevelScripts()
{
    new ArchipelagoLevelScript();
}
