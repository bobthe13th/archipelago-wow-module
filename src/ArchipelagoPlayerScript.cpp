#include "Player.h"
#include "ScriptMgr.h"
#include "Log.h"

class ArchipelagoPlayerScript : public PlayerScript
{
public:
    ArchipelagoPlayerScript() : PlayerScript("ArchipelagoPlayerScript", { PLAYERHOOK_ON_LOGIN }) { }

    void OnPlayerLogin(Player* player) override
    {
        LOG_INFO("module.archipelago_wow", "Archipelago: {} logged in, module is active", player->GetName());
    }
};

void AddArchipelagoPlayerScripts()
{
    new ArchipelagoPlayerScript();
}
