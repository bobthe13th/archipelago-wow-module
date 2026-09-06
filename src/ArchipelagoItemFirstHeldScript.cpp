// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoItemFirstHeldScript.cpp
//
// M4.10.6 (design spec Sec5): OnPlayerStoreNewItem(Player*, Item*, uint32
// count) originally fired from only one real call site, Player::StoreNewItem
// -- confirmed live during that milestone's planning to cover loot, quest
// rewards, vendor purchases, GM grants, and crafting reagent-refund credit,
// but NOT mail retrieval or trade (both bypass StoreNewItem entirely).
// M4.11.5.0.7 moved the underlying core-engine call down into the shared
// Player::StoreItem (PlayerStorage.cpp), the one function every one of
// those paths funnels through (StoreNewItem itself, Player::
// MoveItemToInventory's mail-attachment-retrieval and trade-acceptance
// callers, and MailHandler.cpp's direct StoreItem call for mailed text-item
// attachments) -- this hook now observes all of them, with no change to
// this file itself beyond this comment. Modeled directly on
// ArchipelagoLearnSpellScript.cpp's combined-map-lookup-then-
// SendLocationChecks shape -- no destroy-on-interaction, no DB rewrite,
// since this hook only OBSERVES an acquisition that already happened
// through completely normal, unmutated gameplay.
#include "Player.h"
#include "ScriptMgr.h"
#include "ArchipelagoITEMSANITYContent.h"
#include "ArchipelagoManager.h"

class ArchipelagoItemFirstHeldScript : public PlayerScript
{
public:
    ArchipelagoItemFirstHeldScript() : PlayerScript("ArchipelagoItemFirstHeldScript", { PLAYERHOOK_ON_STORE_NEW_ITEM }) { }

    void OnPlayerStoreNewItem(Player* /*player*/, Item* item, uint32 /*count*/) override
    {
        auto it = ArchipelagoITEMSANITYContent::ITEM_ENTRY_TO_LOCATION_ID.find(item->GetEntry());
        if (it != ArchipelagoITEMSANITYContent::ITEM_ENTRY_TO_LOCATION_ID.end())
            sArchipelagoMgr->SendLocationChecks({ it->second });
    }
};

void AddArchipelagoItemFirstHeldScripts()
{
    new ArchipelagoItemFirstHeldScript();
}
