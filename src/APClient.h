// azerothcore-wotlk/modules/archipelago_wow/src/APClient.h
#pragma once

#include <atomic>
#include <cstdint>
#include <string>
#include <thread>

#include "APProtocol.h"

namespace Archipelago
{
    enum class ConnectionState
    {
        Disconnected,
        Connecting,
        AwaitingRoomInfo,
        Connected,
        HandshakeComplete,
        Refused
    };

    class APClient
    {
    public:
        APClient(std::string host, uint16_t port, ConnectPacketOptions connectOptions);
        ~APClient();

        void Start();
        void Stop();

        ConnectionState GetState() const { return _state.load(); }

    private:
        void Run();

        std::string _host;
        uint16_t _port;
        ConnectPacketOptions _connectOptions;

        std::atomic<ConnectionState> _state{ ConnectionState::Disconnected };
        std::thread _thread;
    };
}
