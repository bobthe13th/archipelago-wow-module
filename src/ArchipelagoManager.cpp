// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoManager.cpp
#include "ArchipelagoManager.h"

ArchipelagoManager* ArchipelagoManager::instance()
{
    static ArchipelagoManager instance;
    return &instance;
}

void ArchipelagoManager::Initialize(Archipelago::ClientOptions options,
    std::function<void(std::vector<Archipelago::ReceivedItem> const&)> onItemsReceived)
{
    if (_client)
        return;

    _client = std::make_unique<Archipelago::APClient>(std::move(options), std::move(onItemsReceived));
    _client->Start();
}

void ArchipelagoManager::Shutdown()
{
    if (_client)
        _client->Stop();
}

void ArchipelagoManager::SendLocationChecks(std::vector<int64_t> const& locationIds)
{
    if (_client)
        _client->SendLocationChecks(locationIds);
}

Archipelago::ConnectionState ArchipelagoManager::GetConnectionState() const
{
    return _client ? _client->GetState() : Archipelago::ConnectionState::Disconnected;
}
