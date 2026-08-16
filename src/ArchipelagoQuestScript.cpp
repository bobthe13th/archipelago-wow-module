// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoQuestScript.cpp
#include "Player.h"
#include "QuestDef.h"
#include "ScriptMgr.h"
#include "ArchipelagoManager.h"
#include "ArchipelagoContentTable.h"

class ArchipelagoQuestScript : public PlayerScript
{
public:
    ArchipelagoQuestScript() : PlayerScript("ArchipelagoQuestScript", { PLAYERHOOK_ON_PLAYER_COMPLETE_QUEST }) { }

    void OnPlayerCompleteQuest(Player* /*player*/, Quest const* quest) override
    {
        auto it = Archipelago::Content::QuestIdToLocationId.find(quest->GetQuestId());
        if (it == Archipelago::Content::QuestIdToLocationId.end())
            return; // not one of the curated Northshire/Goldshire quests this milestone tracks

        sArchipelagoMgr->SendLocationChecks({ it->second });
    }
};

void AddArchipelagoQuestScripts()
{
    new ArchipelagoQuestScript();
}
