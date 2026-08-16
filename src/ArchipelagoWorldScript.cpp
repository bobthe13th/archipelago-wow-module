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
        _useTls = sConfigMgr->GetOption<bool>("Archipelago.UseTLS", false);

        LOG_INFO("module.archipelago_wow", "Archipelago: config loaded (Enabled={}, ServerAddress={}, ServerPort={})",
            _enabled, _serverAddress, _serverPort);
    }

    void OnStartup() override
    {
        if (!_enabled)
            return;

        Archipelago::ClientOptions options;
        options.host = _serverAddress;
        options.port = _serverPort;
        options.useTls = _useTls;
        options.connectOptions.game = "World of Warcraft WotLK";
        options.connectOptions.slotName = _slotName;
        options.connectOptions.password = _password;
        options.connectOptions.uuid = "archipelago-wow-module";

        // NOTE: this callback runs on the APClient's io thread, synchronously inside
        // APClientSession::OnRead -- NOT on the world/map-update thread. Do not call
        // Player/World/DB APIs (or anything else that isn't thread-safe) directly from
        // here. Task 7 must marshal received items onto the world thread instead, e.g.
        // by pushing them into a lock-guarded queue here and draining that queue from a
        // WorldScript::OnUpdate hook.
        sArchipelagoMgr->Initialize(options, [](std::vector<Archipelago::ReceivedItem> const&) {
            // wired up in Task 7
        });
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
    bool _useTls = false;
};

void AddArchipelagoWorldScripts()
{
    new ArchipelagoWorldScript();
}
