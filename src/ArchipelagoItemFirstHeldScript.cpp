// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoItemFirstHeldScript.cpp
//
// M4.10.6 (design spec Sec5): OnPlayerStoreNewItem(Player*, Item*, uint32
// count) fires from the single real call site Player::StoreNewItem
// (PlayerStorage.cpp:2606,2613, hook fired at :2656) -- confirmed live
// during this milestone's planning to cover loot, quest rewards, vendor
// purchases, GM grants, and crafting reagent-refund credit. It does NOT
// fire for mail retrieval (MailHandler.cpp uses the separate
// Player::StoreItem path for an already-existing Item* object) or trade
// (same reasoning) -- a real, accepted gap, not an oversight (see this
// milestone's plan header). Modeled directly on
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
