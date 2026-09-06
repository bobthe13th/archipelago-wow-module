// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoQuestScript.cpp
#include "Item.h"
#include "Player.h"
#include "QuestDef.h"
#include "ScriptMgr.h"
#include "APItemDisplay.h"
#include "ArchipelagoManager.h"
#include "ArchipelagoQuestRewardsContentTable.h"

// M4.8.0: the standalone `quests` family's ArchipelagoQuestScript
// (PLAYERHOOK_ON_PLAYER_COMPLETE_QUEST, keyed off a curated
// Archipelago::Content::QuestIdToLocationId map) is retired -- those 19
// locations now live in the quest_rewards family (always_present), which
// is delivered exclusively through ArchipelagoQuestRewardScript below (item
// synthesis + PLAYERHOOK_ON_QUEST_REWARD_ITEM), same as every other
// quest_rewards location.

// Separate small PlayerScript rather than a hook folded into some other
// class (one-hook-one-small-class precedent, see APTraps.cpp's header comment
// for ArchipelagoTrapZoneScript, and ArchipelagoInterceptionScript.cpp's own
// dedicated class for the analogous vendor-purchase case): the now-deleted
// ArchipelagoQuestScript (see comment above) tracked a curated, hand-picked
// set of M1/M2-era quests via QuestIdToLocationId, a completely different
// content family and lookup shape from the Quest Rewards family handled
// here, which recognizes ANY synthesized AP item (Task 6/APItemDisplay's
// AP_ITEM_SYNTH_BASE-offset entries) by id range rather than by a curated
// quest-id map. Mirrors
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

// M4.11.5.0.6: ArchipelagoQuestRewardScript above only ever fires for the
// ONE real item the engine actually grants (whichever choice the player
// picked, plus every fixed slot) -- the OTHER choice slots a quest offered
// are never physically granted to anyone by the engine, so they need a
// separate signal. PLAYERHOOK_ON_PLAYER_COMPLETE_QUEST fires once per
// quest turn-in, after every OnPlayerQuestRewardItem call in the same real
// Player::RewardQuest function (confirmed live: OnPlayerQuestRewardItem at
// PlayerQuest.cpp:718/739, OnPlayerCompleteQuest at :903) -- so the one
// choice the player DID pick is credited twice (once via each hook), a
// safe, idempotent no-op under this project's own established
// already-sent-check dedup discipline (ArchipelagoRealmState::
// HasSentLocationCheck, same as ArchipelagoLootSlotScript's own repeat-visit
// handling).
class ArchipelagoQuestChoiceSiblingScript : public PlayerScript
{
public:
    ArchipelagoQuestChoiceSiblingScript()
        : PlayerScript("ArchipelagoQuestChoiceSiblingScript", { PLAYERHOOK_ON_PLAYER_COMPLETE_QUEST }) { }

    void OnPlayerCompleteQuest(Player* /*player*/, Quest const* quest) override
    {
        if (quest == nullptr)
            return;
        auto it = ArchipelagoQUEST_REWARDSContent::QUEST_ID_TO_CHOICE_LOCATION_IDS.find(quest->GetQuestId());
        if (it == ArchipelagoQUEST_REWARDSContent::QUEST_ID_TO_CHOICE_LOCATION_IDS.end())
            return;
        sArchipelagoMgr->SendLocationChecks(it->second);
    }
};

void AddArchipelagoQuestScripts()
{
    new ArchipelagoQuestRewardScript();
    new ArchipelagoQuestChoiceSiblingScript();
}
