// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoWorldScript.cpp
#include <mutex>
#include <vector>

#include "Config.h"
#include "Log.h"
#include "ScriptMgr.h"
#include "ArchipelagoManager.h"

// Defined in ArchipelagoPlayerScript.cpp. Touches Player/CharacterCache/
// CharacterDatabase, so it must only ever be invoked from the world thread.
void DeliverArchipelagoItems(std::vector<Archipelago::ReceivedItem> const& items, std::string const& deliveryCharacter);

class ArchipelagoWorldScript : public WorldScript
{
public:
    ArchipelagoWorldScript()
        : WorldScript("ArchipelagoWorldScript", { WORLDHOOK_ON_BEFORE_CONFIG_LOAD, WORLDHOOK_ON_STARTUP, WORLDHOOK_ON_SHUTDOWN, WORLDHOOK_ON_UPDATE })
    { }

    void OnBeforeConfigLoad(bool /*reload*/) override
    {
        _enabled = sConfigMgr->GetOption<bool>("Archipelago.Enabled", false);
        _serverAddress = sConfigMgr->GetOption<std::string>("Archipelago.ServerAddress", "localhost");
        _serverPort = sConfigMgr->GetOption<uint16_t>("Archipelago.ServerPort", 38281);
        _slotName = sConfigMgr->GetOption<std::string>("Archipelago.SlotName", "");
        _password = sConfigMgr->GetOption<std::string>("Archipelago.Password", "");
        _useTls = sConfigMgr->GetOption<bool>("Archipelago.UseTLS", false);
        _deliveryCharacter = sConfigMgr->GetOption<std::string>("Archipelago.DeliveryCharacter", "");
        _reconnectMinSeconds = sConfigMgr->GetOption<int32_t>("Archipelago.ReconnectMinSeconds", 2);
        _reconnectMaxSeconds = sConfigMgr->GetOption<int32_t>("Archipelago.ReconnectMaxSeconds", 60);

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
        options.reconnectMinSeconds = _reconnectMinSeconds;
        options.reconnectMaxSeconds = _reconnectMaxSeconds;
        options.connectOptions.game = "World of Warcraft WotLK";
        options.connectOptions.slotName = _slotName;
        options.connectOptions.password = _password;
        options.connectOptions.uuid = "archipelago-wow-module";

        // This callback runs on the APClient's io thread, synchronously inside
        // APClientSession::OnRead -- NOT on the world/map-update thread. Player/
        // World/CharacterDatabase APIs are not thread-safe to call from here, so
        // only ever push the received items into this lock-guarded queue; the
        // actual mail/DB work happens in OnUpdate below, which always runs on
        // the world thread.
        sArchipelagoMgr->Initialize(options, [this](std::vector<Archipelago::ReceivedItem> const& items) {
            std::lock_guard<std::mutex> lock(_pendingItemsMutex);
            _pendingItems.insert(_pendingItems.end(), items.begin(), items.end());
        });
    }

    void OnShutdown() override
    {
        sArchipelagoMgr->Shutdown();
    }

    void OnUpdate(uint32 /*diff*/) override
    {
        if (!_enabled)
            return;

        std::vector<Archipelago::ReceivedItem> items;
        {
            std::lock_guard<std::mutex> lock(_pendingItemsMutex);
            if (_pendingItems.empty())
                return;
            items.swap(_pendingItems);
        }

        DeliverArchipelagoItems(items, _deliveryCharacter);
    }

private:
    bool _enabled = false;
    std::string _serverAddress;
    uint16_t _serverPort = 0;
    std::string _slotName;
    std::string _password;
    bool _useTls = false;
    std::string _deliveryCharacter;
    int32_t _reconnectMinSeconds = 2;
    int32_t _reconnectMaxSeconds = 60;

    // Populated (push_back only) from the APClient io thread inside the
    // Initialize() callback above; drained on the world thread in OnUpdate.
    // Guarded by _pendingItemsMutex so those two threads never touch the
    // vector concurrently.
    std::mutex _pendingItemsMutex;
    std::vector<Archipelago::ReceivedItem> _pendingItems;
};

void AddArchipelagoWorldScripts()
{
    new ArchipelagoWorldScript();
}
