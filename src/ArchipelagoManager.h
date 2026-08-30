// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoManager.h
#pragma once

#include <functional>
#include <memory>
#include <mutex>
#include <unordered_map>
#include <vector>

#include "APClient.h"
#include "APProtocol.h"

class ArchipelagoManager
{
public:
    static ArchipelagoManager* instance();

    void Initialize(Archipelago::ClientOptions options, Archipelago::ArchipelagoCallbacks callbacks);
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
    // Sends a plain chat "Say" command (M4.13, .ap hint's "!hint <item>" AP server
    // command). Fire-and-forget, same as SendDeathLink -- not durably queued for
    // resend on reconnect: a hint request is a one-off interactive action tied to
    // the command invocation that triggered it, not state to replay later.
    void SendChatCommand(std::string const& text);
    void ResendAllChecksAndGoal();
    Archipelago::ConnectionState GetConnectionState() const;

    // GM-triggered reconnect to a different port (M4.13, .ap port). See
    // Archipelago::APClient::Reconnect's own comment for why this reuses the
    // existing backoff/session machinery rather than tearing down the client.
    void Reconnect(uint16_t newPort);

    // Small persistent holder for the most recent Connected/RoomUpdate frame's
    // missing_locations snapshot (M4.13, ".ap missing") -- same "populate once
    // from the callback, expose a read accessor" shape as
    // Archipelago::ItemDisplay::GetSynthesizedDisplayData/SetSynthesizedDisplayData
    // (Task 3), but simplest placed directly on ArchipelagoManager since
    // ArchipelagoCommandScript.cpp already calls through sArchipelagoMgr. Unlike
    // that one-shot store, this is REPLACED (not merged) on every arrival: a
    // later Connected/RoomUpdate frame's missing_locations is the new full
    // snapshot, not an incremental delta.
    void SetLastKnownMissingLocations(std::vector<int64_t> const& locations);
    std::vector<int64_t> GetLastKnownMissingLocations() const;

private:
    std::unique_ptr<Archipelago::APClient> _client;
    mutable std::mutex _missingLocationsMutex;
    std::vector<int64_t> _lastKnownMissingLocations;
};

#define sArchipelagoMgr ArchipelagoManager::instance()
