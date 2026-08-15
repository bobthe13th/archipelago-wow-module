// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoWorldScript.cpp
#include "Config.h"
#include "Log.h"
#include "ScriptMgr.h"
#include "ArchipelagoManager.h"

class ArchipelagoWorldScript : public WorldScript
{
public:
    ArchipelagoWorldScript()
        : WorldScript("ArchipelagoWorldScript", { WORLDHOOK_ON_BEFORE_CONFIG_LOAD, WORLDHOOK_ON_STARTUP, WORLDHOOK_ON_SHUTDOWN })
    { }

    void OnBeforeConfigLoad(bool /*reload*/) override
    {
        _enabled = sConfigMgr->GetOption<bool>("Archipelago.Enabled", false);
        _serverAddress = sConfigMgr->GetOption<std::string>("Archipelago.ServerAddress", "localhost");
        _serverPort = sConfigMgr->GetOption<uint16_t>("Archipelago.ServerPort", 38281);
        _slotName = sConfigMgr->GetOption<std::string>("Archipelago.SlotName", "");
        _password = sConfigMgr->GetOption<std::string>("Archipelago.Password", "");

        LOG_INFO("module.archipelago_wow", "Archipelago: config loaded (Enabled={}, ServerAddress={}, ServerPort={})",
            _enabled, _serverAddress, _serverPort);
    }

    void OnStartup() override
    {
        if (!_enabled)
            return;

        Archipelago::ConnectPacketOptions options;
        options.game = "World of Warcraft WotLK";
        options.slotName = _slotName;
        options.password = _password;
        options.uuid = "archipelago-wow-module";

        sArchipelagoMgr->Initialize(_serverAddress, _serverPort, options);
    }

    void OnShutdown() override
    {
        sArchipelagoMgr->Shutdown();
    }

private:
    bool _enabled = false;
    std::string _serverAddress;
    uint16_t _serverPort = 0;
    std::string _slotName;
    std::string _password;
};

void AddArchipelagoWorldScripts()
{
    new ArchipelagoWorldScript();
}
