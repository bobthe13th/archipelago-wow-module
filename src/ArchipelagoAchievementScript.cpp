// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoAchievementScript.cpp
//
// M4.9 Sec4: shared "player completed a real WotLK achievement" hook,
// confirmed real signature virtual void OnPlayerAchievementComplete(Player*,
// AchievementEntry const* achievement) -- PlayerScript.h:378, fired from
// AchievementMgr.cpp's CompletedAchievement() (line 2311,
// sScriptMgr->OnPlayerAchievementComplete(GetPlayer(), achievement)), AFTER
// that function's own early-return for a counter-flagged achievement (see
// extract_achievements.py's own header comment -- this is exactly why
// counter-flagged rows are excluded from the compiled content table at
// extraction time rather than filtered here: this hook genuinely never
// fires for them). Serves BOTH Explorer (the table's single World Explorer
// row) and Achievement Hunt (the full 1,162-row table) identically -- this
// script has no notion of which mode is active at all, same "no match =
// no-op"/"the AP server silently ignores a location id outside this slot's
// actual location table" pattern as every other lookup-table hook in this
// module (ArchipelagoLootScript.cpp, ArchipelagoCollectionScript.cpp).
#include "Player.h"
#include "ScriptMgr.h"
#include "DBCStructure.h"
#include "ArchipelagoAchievementsContentTable.h"
#include "ArchipelagoManager.h"

class ArchipelagoAchievementScript : public PlayerScript
{
public:
    ArchipelagoAchievementScript() : PlayerScript("ArchipelagoAchievementScript", { PLAYERHOOK_ON_ACHI_COMPLETE }) { }

    void OnPlayerAchievementComplete(Player* /*player*/, AchievementEntry const* achievement) override
    {
        auto it = Archipelago::Achievements::AchievementIdToLocationId.find(achievement->ID);
        if (it != Archipelago::Achievements::AchievementIdToLocationId.end())
            sArchipelagoMgr->SendLocationChecks({ it->second });
    }
};

void AddArchipelagoAchievementScripts()
{
    new ArchipelagoAchievementScript();
}
