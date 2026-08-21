// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoProfessionScript.cpp
//
// Task 27 (Artisan, design spec Sec5.4): profession skill-up hook,
// researched fresh against this checkout rather than assumed -- there is
// no achievement-based route here (data/sql/base/db_world's *_dbc.sql
// tables are empty stub schemas in this checkout, confirmed while
// researching this same task; see professions.yaml's own header comment).
// The real event is PLAYERHOOK_ON_SET_SKILL / PlayerScript::OnPlayerSetSkill
// (Player*, uint32 skillId, uint32 value, uint32 max, uint32 step,
// uint32 newValue), dispatched from Player::SetSkill (Player.cpp:5486+),
// which fires on every skill-value change for any skill line, professions
// included. `value` is the skill's value before this update, `newValue` is
// what it's being set to -- scanning [value+1, newValue] for configured
// thresholds (mirroring ArchipelagoLevelScript.cpp's own oldLevel..newLevel
// range-scan) correctly handles a single large skill-up (e.g. a trainer
// visit granting several points, or a GM command) crossing more than one
// milestone at once.
#include <vector>

#include "Player.h"
#include "ScriptMgr.h"
#include "ArchipelagoManager.h"
#include "ArchipelagoProfessionsContentTable.h"

class ArchipelagoProfessionScript : public PlayerScript
{
public:
    ArchipelagoProfessionScript() : PlayerScript("ArchipelagoProfessionScript", { PLAYERHOOK_ON_SET_SKILL }) { }

    void OnPlayerSetSkill(Player* /*player*/, uint32 skillId, uint32 value, uint32 /*max*/, uint32 /*step*/, uint32 newValue) override
    {
        auto it = Archipelago::Professions::ThresholdsBySkillId.find(skillId);
        if (it == Archipelago::Professions::ThresholdsBySkillId.end())
            return; // not one of the 14 curated professions

        std::vector<int64_t> checks;
        for (auto const& [threshold, locationId] : it->second)
        {
            if (threshold > value && threshold <= newValue)
                checks.push_back(locationId);
        }
        if (!checks.empty())
            sArchipelagoMgr->SendLocationChecks(checks);
    }
};

void AddArchipelagoProfessionScripts()
{
    new ArchipelagoProfessionScript();
}
