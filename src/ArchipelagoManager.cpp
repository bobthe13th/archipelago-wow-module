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

    Archipelago::ClientOptions clientOptions;
    clientOptions.host = std::move(host);
    clientOptions.port = port;
    clientOptions.connectOptions = std::move(options);

    // M2 Task 2 scope is APClient itself; wiring received items through to
    // players/world state is Task 4's job. Until then this is a no-op so the
    // module keeps building and connecting.
    _client = std::make_unique<Archipelago::APClient>(std::move(clientOptions),
        [](std::vector<Archipelago::ReceivedItem> const&) {});
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
