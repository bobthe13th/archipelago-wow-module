// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoCraftsanityScript.cpp
//
// M4.10.5 (Craftsanity, "recipe crafted" half): OnPlayerCreateItem(Player*,
// Item*, uint32) fires once per crafted item stack, for EVERY real trade-
// skill spell that produces an item (Cooking, Alchemy, Tailoring, etc, and
// First Aid's bandages) -- confirmed real and, before this file, never
// registered by any script in this module (PlayerScript.h:103,435). Unlike
// OnPlayerLearnSpell, this hook gives no spell id -- only the resulting
// Item*, so the lookup is keyed by the crafted item's real entry, not a
// spell id (see this milestone's plan, Global Constraints).
#include "Item.h"
#include "Player.h"
#include "ScriptMgr.h"
#include "ArchipelagoCRAFTSANITYContent.h"
#include "ArchipelagoManager.h"

class ArchipelagoCraftsanityScript : public PlayerScript
{
public:
    ArchipelagoCraftsanityScript() : PlayerScript("ArchipelagoCraftsanityScript", { PLAYERHOOK_ON_CREATE_ITEM }) { }

    void OnPlayerCreateItem(Player* /*player*/, Item* item, uint32 /*count*/) override
    {
        if (!item)
            return;

        auto it = ArchipelagoCRAFTSANITYContent::ITEM_ENTRY_TO_LOCATION_ID.find(item->GetEntry());
        if (it != ArchipelagoCRAFTSANITYContent::ITEM_ENTRY_TO_LOCATION_ID.end())
            sArchipelagoMgr->SendLocationChecks({ it->second });
    }
};

void AddArchipelagoCraftsanityScripts()
{
    new ArchipelagoCraftsanityScript();
}
