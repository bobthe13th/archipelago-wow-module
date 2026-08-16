// azerothcore-wotlk/modules/archipelago_wow/src/APClient.h
#pragma once

#include <atomic>
#include <cstdint>
#include <functional>
#include <memory>
#include <mutex>
#include <string>
#include <thread>
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
        APClient(ClientOptions options, std::function<void(std::vector<ReceivedItem> const&)> onItemsReceived);
        ~APClient();

        void Start();
        void Stop();
        void SendLocationChecks(std::vector<int64_t> const& locationIds);
        void SendGoalComplete();

        ConnectionState GetState() const { return _state.load(); }

    private:
        void RunIoContext();

        ClientOptions _options;
        std::function<void(std::vector<ReceivedItem> const&)> _onItemsReceived;

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
        // SendGoalComplete()); guard every access with _sessionMutex so those two
        // threads never race on the shared_ptr itself.
        std::mutex _sessionMutex;
        std::shared_ptr<APClientSession> _session;
        std::thread _ioThread;
        std::atomic<bool> _stoppingAll{ false };
        std::unique_ptr<boost::asio::steady_timer> _reconnectTimer;
        int32_t _currentBackoffSeconds = 0;
    };
}
