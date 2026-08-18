// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoManager.h
#pragma once

#include <functional>
#include <memory>
#include <vector>

#include "APClient.h"

class ArchipelagoManager
{
public:
    static ArchipelagoManager* instance();

    void Initialize(Archipelago::ClientOptions options,
        std::function<void(std::vector<Archipelago::ReceivedItem> const&)> onItemsReceived);
    void Shutdown();

    void SendLocationChecks(std::vector<int64_t> const& locationIds);
    void SendGoalComplete();
    void ResendAllChecksAndGoal();
    Archipelago::ConnectionState GetConnectionState() const;

private:
    std::unique_ptr<Archipelago::APClient> _client;
};

#define sArchipelagoMgr ArchipelagoManager::instance()
