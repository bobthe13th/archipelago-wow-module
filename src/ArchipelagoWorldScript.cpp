#include "Config.h"
#include "Log.h"
#include "ScriptMgr.h"

class ArchipelagoWorldScript : public WorldScript
{
public:
    ArchipelagoWorldScript() : WorldScript("ArchipelagoWorldScript", { WORLDHOOK_ON_BEFORE_CONFIG_LOAD }) { }

    void OnBeforeConfigLoad(bool /*reload*/) override
    {
        bool enabled = sConfigMgr->GetOption<bool>("Archipelago.Enabled", false);
        std::string serverAddress = sConfigMgr->GetOption<std::string>("Archipelago.ServerAddress", "localhost");
        uint16_t serverPort = sConfigMgr->GetOption<uint16_t>("Archipelago.ServerPort", 38281);

        LOG_INFO("module.archipelago_wow", "Archipelago: config loaded (Enabled={}, ServerAddress={}, ServerPort={})",
            enabled, serverAddress, serverPort);
    }
};

void AddArchipelagoWorldScripts()
{
    new ArchipelagoWorldScript();
}
