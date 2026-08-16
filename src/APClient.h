// azerothcore-wotlk/modules/archipelago_wow/src/APClient.h
#pragma once

#include <atomic>
#include <cstdint>
#include <functional>
#include <memory>
#include <string>
#include <thread>
#include <vector>

#include <boost/asio/io_context.hpp>

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

        ConnectionState GetState() const { return _state.load(); }

    private:
        void RunIoContext();

        ClientOptions _options;
        std::function<void(std::vector<ReceivedItem> const&)> _onItemsReceived;

        std::atomic<ConnectionState> _state{ ConnectionState::Disconnected };
        boost::asio::io_context _ioc;
        std::shared_ptr<APClientSession> _session;
        std::thread _ioThread;
    };
}
