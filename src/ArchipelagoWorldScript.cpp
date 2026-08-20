// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoWorldScript.cpp
#include <algorithm>
#include <mutex>
#include <vector>

#include "Config.h"
#include "Log.h"
#include "ScriptMgr.h"
#include "World.h"
#include "APDelivery.h"
#include "ArchipelagoFillerContentTable.h"
#include "ArchipelagoManager.h"
#include "ArchipelagoRealmState.h"

// Defined in ArchipelagoPlayerScript.cpp. Touches Player/CharacterCache/
// CharacterDatabase, so it must only ever be invoked from the world thread.
void DeliverArchipelagoItems(std::vector<Archipelago::ReceivedItem> const& items, std::string const& deliveryCharacter, Archipelago::Delivery::Policy deliveryPolicy, Archipelago::Delivery::CostTier auctionHouseCostTier);

namespace
{
    // The apworld's DeliveryPolicy Choice (Task 12 Step 4) is resolved into
    // slot_data at generation, but this module has no slot_data parsing (the
    // same known gap Finding #10 documents for the gate-family toggles) --
    // an operator running a non-default delivery policy must mirror it here
    // by hand via Archipelago.DeliveryPolicy, same discipline as
    // Archipelago.ProficiencyGating/AccessGating/CharacterUnlockGating.
    Archipelago::Delivery::Policy ParseDeliveryPolicy(std::string const& value)
    {
        if (value == "SharedCacheNpc")
            return Archipelago::Delivery::Policy::SharedCacheNpc;
        if (value == "AuctionHouse")
            return Archipelago::Delivery::Policy::AuctionHouse;
        if (value == "FirstToClaim")
            return Archipelago::Delivery::Policy::FirstToClaim;
        if (value != "EveryoneReceives")
            LOG_ERROR("module.archipelago_wow", "Archipelago: unrecognized Archipelago.DeliveryPolicy '{}', falling back to EveryoneReceives", value);
        return Archipelago::Delivery::Policy::EveryoneReceives;
    }

    // Task 14: same manual-sync mirror as ParseDeliveryPolicy above, for the apworld's
    // AuctionHouseCostTier Choice.
    Archipelago::Delivery::CostTier ParseCostTier(std::string const& value)
    {
        if (value == "Free")
            return Archipelago::Delivery::CostTier::Free;
        if (value == "Cheap")
            return Archipelago::Delivery::CostTier::Cheap;
        if (value == "Expensive")
            return Archipelago::Delivery::CostTier::Expensive;
        if (value == "Random")
            return Archipelago::Delivery::CostTier::Random;
        if (value != "Market")
            LOG_ERROR("module.archipelago_wow", "Archipelago: unrecognized Archipelago.AuctionHouseCostTier '{}', falling back to Market", value);
        return Archipelago::Delivery::CostTier::Market;
    }
}

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
        _accessGating = sConfigMgr->GetOption<bool>("Archipelago.AccessGating", false);
        _characterUnlockGating = sConfigMgr->GetOption<bool>("Archipelago.CharacterUnlockGating", false);
        _deliveryPolicy = ParseDeliveryPolicy(sConfigMgr->GetOption<std::string>("Archipelago.DeliveryPolicy", "EveryoneReceives"));
        _auctionHouseCostTier = ParseCostTier(sConfigMgr->GetOption<std::string>("Archipelago.AuctionHouseCostTier", "Market"));

        // Task 16 (design spec Sec7.2): same manual-sync mirror-toggle discipline as
        // every other option above -- mirrored into ArchipelagoRealmState rather than
        // kept as a member here, since the consuming hooks (OnPlayerLogin,
        // OnPlayerLevelChanged) live in different PlayerScript classes this class
        // cannot pass a parameter to directly.
        sArchipelagoRealmState->SetCatchUpPolicy(sConfigMgr->GetOption<std::string>("Archipelago.CatchUpPolicy", "Nothing"));
        sArchipelagoRealmState->SetCatchUpPercentPerLevel(sConfigMgr->GetOption<uint32_t>("Archipelago.CatchUpPercentPerLevel", 10));

        // Task 14's known collision (flagged during Task 8): AccessGating can suppress
        // a player's ability to even open the Auction House window, so combining it with
        // Policy::AuctionHouse could list an AP-earned item on the AH a player is then
        // unable to retrieve -- a real softlock. Resolved with the same fail-safe every
        // other optional-feature combination in this module uses: refuse the risky
        // combination at config load and fall back to the always-safe default rather
        // than trying to special-case the suppression hook to let a player through for
        // "just their own" AH listings.
        if (_deliveryPolicy == Archipelago::Delivery::Policy::AuctionHouse && _accessGating)
        {
            LOG_ERROR("module.archipelago_wow", "Archipelago: DeliveryPolicy=AuctionHouse with AccessGating=1 can softlock a player's own AP-earned items (they could be listed before Auction House Access is granted) -- falling back to EveryoneReceives");
            _deliveryPolicy = Archipelago::Delivery::Policy::EveryoneReceives;
        }

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
        sArchipelagoRealmState->SetGateFamilyEnabled("access", _accessGating);
        sArchipelagoRealmState->SetGateFamilyEnabled("character_unlocks", _characterUnlockGating);

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

        // Fix (post-Task 17 review): Task 11's filler locations carry no access
        // rule, so distribute_items_restrictive can and does place progression
        // items on them (a Progressive Level Cap copy included) -- nothing in
        // this module ever sent these checks, so any progression item that
        // landed on one would be permanently unobtainable in real play, a live
        // softlock. Since these locations have no real in-game trigger by
        // design, the correct trigger is "this realm exists" -- send every
        // filler location id, unconditionally, once per startup.
        // ArchipelagoManager::SendLocationChecks only *inserts* new ids into
        // ArchipelagoRealmState's persisted sent-check set (already-sent ids
        // are a no-op), and the AP server silently ignores any id that isn't
        // part of this slot's actual location table (MultiServer.py's
        // register_location_checks: "ignore location IDs unknown to this
        // multidata") -- so sending the full worst-case id set here is safe
        // regardless of how many this seed's options actually used, and the
        // Initialize() callback below (ResendAllChecksAndGoal) will redeliver
        // them once the AP session actually connects, exactly like every
        // other check recorded before a (re)connect completes.
        sArchipelagoMgr->SendLocationChecks(std::vector<int64_t>(
            Archipelago::Filler::LocationIds.begin(), Archipelago::Filler::LocationIds.end()));

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

        DeliverArchipelagoItems(items, _deliveryCharacter, _deliveryPolicy, _auctionHouseCostTier);
    }

private:
    bool _enabled = false;
    std::string _serverAddress;
    uint16_t _serverPort = 0;
    std::string _slotName;
    std::string _password;
    bool _useTls = false;
    std::string _deliveryCharacter;
    Archipelago::Delivery::Policy _deliveryPolicy = Archipelago::Delivery::Policy::EveryoneReceives;
    Archipelago::Delivery::CostTier _auctionHouseCostTier = Archipelago::Delivery::CostTier::Market;
    int32_t _reconnectMinSeconds = 2;
    int32_t _reconnectMaxSeconds = 60;
    bool _proficiencyGating = false;
    bool _accessGating = false;
    bool _characterUnlockGating = false;

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
