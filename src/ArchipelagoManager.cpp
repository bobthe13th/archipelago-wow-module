// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoManager.cpp
#include "ArchipelagoManager.h"
#include "ArchipelagoRealmState.h"
#include "Log.h"

ArchipelagoManager* ArchipelagoManager::instance()
{
    static ArchipelagoManager instance;
    return &instance;
}

void ArchipelagoManager::Initialize(Archipelago::ClientOptions options,
    std::function<void(std::vector<Archipelago::ReceivedItem> const&)> onItemsReceived,
    std::function<void(std::vector<Archipelago::IncomingDeathLink> const&)> onDeathLinkReceived,
    std::function<void(std::unordered_map<int64_t, Archipelago::ApItemDisplay> const&)> onSlotDataReceived,
    std::function<void(std::string const&)> onVendorCheckRepeatBehaviorReceived)
{
    if (_client)
        return;

    _client = std::make_unique<Archipelago::APClient>(
        std::move(options),
        std::move(onItemsReceived),
        [this]() { ResendAllChecksAndGoal(); },
        std::move(onDeathLinkReceived),
        std::move(onSlotDataReceived),
        std::move(onVendorCheckRepeatBehaviorReceived));
    _client->Start();
}

void ArchipelagoManager::Shutdown()
{
    if (_client)
        _client->Stop();
}

void ArchipelagoManager::SendLocationChecks(std::vector<int64_t> const& locationIds)
{
    for (int64_t id : locationIds)
        sArchipelagoRealmState->RecordLocationCheckSent(static_cast<uint64_t>(id));

    if (_client)
        _client->SendLocationChecks(locationIds);
}

void ArchipelagoManager::SendGoalComplete()
{
    sArchipelagoRealmState->SetGoalComplete();

    if (_client)
        _client->SendGoalComplete();
}

void ArchipelagoManager::SendDeathLink(std::string const& cause, std::string const& source)
{
    if (_client)
        _client->SendDeathLink(cause, source);
}

void ArchipelagoManager::ResendAllChecksAndGoal()
{
    auto const& checks = sArchipelagoRealmState->GetSentLocationChecks();
    if (!checks.empty())
    {
        std::vector<int64_t> ids;
        ids.reserve(checks.size());
        for (uint64_t id : checks)
            ids.push_back(static_cast<int64_t>(id));

        LOG_INFO("module.archipelago_wow", "Archipelago: resending {} location check(s) to server", ids.size());
        if (_client)
            _client->SendLocationChecks(ids);
    }

    if (sArchipelagoRealmState->IsGoalComplete())
    {
        LOG_INFO("module.archipelago_wow", "Archipelago: resending goal complete to server");
        if (_client)
            _client->SendGoalComplete();
    }
}

Archipelago::ConnectionState ArchipelagoManager::GetConnectionState() const
{
    return _client ? _client->GetState() : Archipelago::ConnectionState::Disconnected;
}

