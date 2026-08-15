// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoManager.h
#pragma once

#include <cstdint>
#include <memory>
#include <string>

#include "APClient.h"

class ArchipelagoManager
{
public:
    static ArchipelagoManager* instance();

    void Initialize(std::string host, uint16_t port, Archipelago::ConnectPacketOptions options);
    void Shutdown();

    Archipelago::ConnectionState GetConnectionState() const;

private:
    std::unique_ptr<Archipelago::APClient> _client;
};

#define sArchipelagoMgr ArchipelagoManager::instance()
