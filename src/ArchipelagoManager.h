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
        std::function<void(std::vector<Archipelago::ReceivedItem> const&)> onItemsReceived,
        std::function<void(std::vector<Archipelago::IncomingDeathLink> const&)> onDeathLinkReceived);
    void Shutdown();

    void SendLocationChecks(std::vector<int64_t> const& locationIds);
    void SendGoalComplete();
    // Fire-and-forget: no durable queue, no resend-on-reconnect (M4 Task 29
    // deliberately excludes DeathLink -- see docs/m4-plan.md's Decisions
    // section, item 4). Cooldown/enabled-toggle policy is decided by the
    // caller (ArchipelagoDeathLinkScript.cpp, via ArchipelagoRealmState) --
    // this method is pure network transport, matching SendLocationChecks/
    // SendGoalComplete's separation of concerns.
    void SendDeathLink(std::string const& cause, std::string const& source);
    void ResendAllChecksAndGoal();
    Archipelago::ConnectionState GetConnectionState() const;

private:
    std::unique_ptr<Archipelago::APClient> _client;
};

#define sArchipelagoMgr ArchipelagoManager::instance()
