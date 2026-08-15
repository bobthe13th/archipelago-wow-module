// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoManager.cpp
#include "ArchipelagoManager.h"

ArchipelagoManager* ArchipelagoManager::instance()
{
    static ArchipelagoManager instance;
    return &instance;
}

void ArchipelagoManager::Initialize(std::string host, uint16_t port, Archipelago::ConnectPacketOptions options)
{
    if (_client)
        return;

    _client = std::make_unique<Archipelago::APClient>(std::move(host), port, std::move(options));
    _client->Start();
}

void ArchipelagoManager::Shutdown()
{
    if (_client)
        _client->Stop();
}

Archipelago::ConnectionState ArchipelagoManager::GetConnectionState() const
{
    return _client ? _client->GetState() : Archipelago::ConnectionState::Disconnected;
}
