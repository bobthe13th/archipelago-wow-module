// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoDarkPortalScript.cpp
#include "Chat.h"
#include "Player.h"
#include "ScriptMgr.h"
#include "ArchipelagoRealmState.h"

class at_archipelago_dark_portal : public AreaTriggerScript
{
public:
    at_archipelago_dark_portal() : AreaTriggerScript("at_archipelago_dark_portal") { }

    bool OnTrigger(Player* player, AreaTrigger const* /*trigger*/) override
    {
        if (sArchipelagoRealmState->IsDarkPortalUnlocked())
            return false; // let the default teleport proceed

        ChatHandler(player->GetSession()).PSendSysMessage("The Dark Portal is sealed. Find the Archipelago Dark Portal Access item first.");
        return true; // suppress the teleport
    }
};

void AddArchipelagoDarkPortalScripts()
{
    new at_archipelago_dark_portal();
}
