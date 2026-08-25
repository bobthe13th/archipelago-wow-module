// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoQuestScript.cpp
#include "Item.h"
#include "Player.h"
#include "QuestDef.h"
#include "ScriptMgr.h"
#include "APItemDisplay.h"
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

// Separate small PlayerScript rather than folding into ArchipelagoQuestScript
// above (one-hook-one-small-class precedent, see APTraps.cpp's header comment
// for ArchipelagoTrapZoneScript, and ArchipelagoInterceptionScript.cpp's own
// dedicated class for the analogous vendor-purchase case): that class tracks
// a curated, hand-picked set of M1/M2-era quests via QuestIdToLocationId, a
// completely different content family and lookup shape from the Quest
// Rewards family handled here, which recognizes ANY synthesized AP item
// (Task 6/APItemDisplay's AP_ITEM_SYNTH_BASE-offset entries) by id range
// rather than by a curated quest-id map. Mirrors
// ArchipelagoInterceptionScript's vendor-purchase interception exactly, minus
// the repeat-purchase handling that class needs and this one doesn't -- a
// quest can only be completed/turned in once, so there is no repeat-checkout
// scenario for a quest reward the way there is for an unlimited-stock vendor
// slot (see design spec's §8).
class ArchipelagoQuestRewardScript : public PlayerScript
{
public:
    ArchipelagoQuestRewardScript()
        : PlayerScript("ArchipelagoQuestRewardScript", { PLAYERHOOK_ON_QUEST_REWARD_ITEM }) { }

    void OnPlayerQuestRewardItem(Player* player, Item* item, uint32 /*count*/) override
    {
        if (item == nullptr)
            return;
        uint32_t entry = item->GetEntry();
        if (entry < Archipelago::ItemDisplay::AP_ITEM_SYNTH_BASE)
            return;
        int64_t locationId = static_cast<int64_t>(entry) - Archipelago::ItemDisplay::AP_ITEM_SYNTH_BASE;
        // Unlike vendor purchases, a completed quest can't be repeated for
        // this checkout's location pool (repeatable-quest rewards are rare
        // in this content family and out of scope for a repeat-behavior
        // option per the design spec's §8) -- always send-and-destroy.
        sArchipelagoMgr->SendLocationChecks({ locationId });
        player->DestroyItem(item->GetBagSlot(), item->GetSlot(), true);
    }
};

void AddArchipelagoQuestScripts()
{
    new ArchipelagoQuestScript();
    new ArchipelagoQuestRewardScript();
}
