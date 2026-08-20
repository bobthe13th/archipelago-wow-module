// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoWorldScript.cpp
#include <algorithm>
#include <mutex>
#include <vector>

#include "Config.h"
#include "Log.h"
#include "ScriptMgr.h"
#include "World.h"
#include "ArchipelagoManager.h"
#include "ArchipelagoRealmState.h"

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
        _proficiencyGating = sConfigMgr->GetOption<bool>("Archipelago.ProficiencyGating", false);

        // Mirror into ArchipelagoRealmState so the gating scripts (instance
        // entry, Dark Portal, Northrend transports), which only ever touch
        // ArchipelagoRealmState and never this class, can all check the same
        // cached enabled flag without each re-reading sConfigMgr on their own
        // per-call gating paths.
        sArchipelagoRealmState->SetEnabled(_enabled);

        // Optional gate families (§5.1) are opted into per-seed via the
        // player's AP YAML, but this module has no slot_data parsing yet
        // (flagged as a known gap, see docs/m4-plan.md repo-state findings) --
        // at worldserver startup there's no live AP connection to ask, so an
        // operator running an optional-gate seed must also flip the matching
        // worldserver.conf toggle by hand. Without this mirror, a seed that
        // never rolled the gate item would still permanently suppress it,
        // since the flag would never reach tier 1.
        sArchipelagoRealmState->SetGateFamilyEnabled("proficiency", _proficiencyGating);

        LOG_INFO("module.archipelago_wow", "Archipelago: config loaded (Enabled={}, ServerAddress={}, ServerPort={})",
            _enabled, _serverAddress, _serverPort);
    }

    void OnStartup() override
    {
        // Realm state (including the persisted level cap) must load
        // regardless of whether the AP connection itself is enabled, so a
        // restart doesn't lose the persisted values the moment an operator
        // flips Archipelago.Enabled back on later. But actually *applying*
        // the persisted level cap to the live server config must only
        // happen when Archipelago is enabled: otherwise every character on
        // a realm that ships/keeps this module disabled would be
        // permanently capped at whatever level_cap happens to be persisted
        // (10, for a fresh install) instead of the operator's own
        // worldserver.conf MaxPlayerLevel setting -- full vanilla behavior
        // when disabled, matching every gating script below.
        sArchipelagoRealmState->Load();
        if (_enabled)
            sWorld->setIntConfig(CONFIG_MAX_PLAYER_LEVEL, sArchipelagoRealmState->GetLevelCap());

        if (!_enabled)
            return;

        Archipelago::ClientOptions options;
        options.host = _serverAddress;
        options.port = _serverPort;
        options.useTls = _useTls;
        // Clamp operator-supplied values: a min <= 0 would pin APClient's backoff
        // timer at (or below) zero, spinning connect->fail->reconnect with no
        // delay and hammering both this process and the AP server.
        options.reconnectMinSeconds = std::max(1, _reconnectMinSeconds);
        options.reconnectMaxSeconds = std::max(options.reconnectMinSeconds, _reconnectMaxSeconds);
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
    bool _proficiencyGating = false;

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
