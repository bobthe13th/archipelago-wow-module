// azerothcore-wotlk/modules/archipelago_wow/src/APClient.h
#pragma once

#include <atomic>
#include <cstdint>
#include <functional>
#include <memory>
#include <mutex>
#include <string>
#include <thread>
#include <unordered_map>
#include <vector>

#include <boost/asio/io_context.hpp>
#include <boost/asio/steady_timer.hpp>

#include "APProtocol.h"

namespace Archipelago
{
    enum class ConnectionState
    {
        Disconnected,
        Connecting,
        AwaitingRoomInfo,
        Connected,
        HandshakeComplete, // M2: genuinely connected, persistent session active
        Refused,
        Reconnecting
    };

    struct ClientOptions
    {
        std::string host;
        uint16_t port = 0;
        bool useTls = false;
        ConnectPacketOptions connectOptions;
        int32_t reconnectMinSeconds = 2;
        int32_t reconnectMaxSeconds = 60;
    };

    class APClientSession; // defined in APClient.cpp, owns the live socket

    class APClient
    {
    public:
        APClient(ClientOptions options, ArchipelagoCallbacks callbacks);
        ~APClient();

        void Start();
        void Stop();
        void SendLocationChecks(std::vector<int64_t> const& locationIds);
        void SendGoalComplete();
        void SendDeathLink(std::string const& cause, std::string const& source);
        void SendChatCommand(std::string const& text);

        // GM-triggered reconnect to a different port (M4.13, .ap port). Reuses the
        // exact same reconnect-timer/session-construction path RunIoContext already
        // runs for a dropped connection -- does NOT tear down and rebuild this
        // APClient. Safe to call from any thread; the actual reconnect happens on
        // _ioThread once the current session's Stop() unblocks _ioc.run().
        void Reconnect(uint16_t newPort);

        ConnectionState GetState() const { return _state.load(); }

    private:
        void RunIoContext();

        ClientOptions _options;
        ArchipelagoCallbacks _callbacks;

        std::atomic<ConnectionState> _state{ ConnectionState::Disconnected };
        // Set by APClientSession the moment a session reaches HandshakeComplete, and
        // consumed (read-and-cleared) by RunIoContext to decide whether to reset the
        // backoff counter. This can't be inferred from _state alone: by the time a
        // dropped session's Fail() path runs and RunIoContext's io_context::run() call
        // returns, _state has already been overwritten away from HandshakeComplete (to
        // Disconnected/Refused) by that same Fail() call, in the same call chain -- so a
        // plain "was _state HandshakeComplete when run() returned" check can never
        // observe it.
        std::atomic<bool> _reachedHandshake{ false };
        boost::asio::io_context _ioc;
        // _session is reassigned on the io thread (inside RunIoContext's reconnect-timer
        // handler) but read from the world thread (Stop(), SendLocationChecks(),
        // SendGoalComplete(), SendDeathLink()); guard every access with _sessionMutex so
        // those two threads never race on the shared_ptr itself.
        std::mutex _sessionMutex;
        std::shared_ptr<APClientSession> _session;
        std::thread _ioThread;
        std::atomic<bool> _stoppingAll{ false };
        std::unique_ptr<boost::asio::steady_timer> _reconnectTimer;
        // Written from RunIoContext (io thread) and, as of M4.13's Reconnect(), also
        // from the world thread -- must be atomic for that cross-thread write to be
        // well-defined, matching _state/_reachedHandshake's identical reasoning above.
        std::atomic<int32_t> _currentBackoffSeconds{ 0 };
    };
}
