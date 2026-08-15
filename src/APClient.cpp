// azerothcore-wotlk/modules/archipelago_wow/src/APClient.cpp
#include "APClient.h"

#include <boost/asio.hpp>
#include <boost/beast/core.hpp>
#include <boost/beast/websocket.hpp>

#include "Log.h"

namespace beast = boost::beast;
namespace websocket = beast::websocket;
namespace net = boost::asio;
using tcp = boost::asio::ip::tcp;

namespace Archipelago
{
    APClient::APClient(std::string host, uint16_t port, ConnectPacketOptions connectOptions)
        : _host(std::move(host)), _port(port), _connectOptions(std::move(connectOptions))
    {
    }

    APClient::~APClient()
    {
        Stop();
    }

    void APClient::Start()
    {
        _thread = std::thread(&APClient::Run, this);
    }

    void APClient::Stop()
    {
        if (_thread.joinable())
            _thread.join();
    }

    // M1 scope: a single blocking handshake attempt on its own thread. No reconnect,
    // no TLS, no item/location traffic yet -- all deferred to M2 per spec §9.2.
    void APClient::Run()
    {
        try
        {
            _state = ConnectionState::Connecting;

            net::io_context ioc;
            tcp::resolver resolver(ioc);
            websocket::stream<tcp::socket> ws(ioc);

            auto const results = resolver.resolve(_host, std::to_string(_port));
            net::connect(ws.next_layer(), results.begin(), results.end());

            ws.handshake(_host, "/");
            _state = ConnectionState::AwaitingRoomInfo;
            LOG_INFO("module.archipelago_wow", "Archipelago: websocket upgrade complete, awaiting RoomInfo");

            beast::flat_buffer buffer;
            ws.read(buffer);
            std::string roomInfo = beast::buffers_to_string(buffer.data());

            if (ParseServerMessageType(roomInfo) != ServerMessageType::RoomInfo)
            {
                LOG_ERROR("module.archipelago_wow", "Archipelago: expected RoomInfo, got something else");
                _state = ConnectionState::Disconnected;
                return;
            }

            std::string connectPacket = BuildConnectPacket(_connectOptions);
            ws.write(net::buffer(connectPacket));

            buffer.consume(buffer.size());
            ws.read(buffer);
            std::string reply = beast::buffers_to_string(buffer.data());

            ServerMessageType replyType = ParseServerMessageType(reply);
            if (replyType == ServerMessageType::Connected)
            {
                _state = ConnectionState::Connected;
                LOG_INFO("module.archipelago_wow", "Archipelago: handshake complete, connected to multiworld server");
            }
            else if (replyType == ServerMessageType::ConnectionRefused)
            {
                _state = ConnectionState::Refused;
                LOG_ERROR("module.archipelago_wow", "Archipelago: server refused the connection");
            }
            else
            {
                _state = ConnectionState::Disconnected;
                LOG_ERROR("module.archipelago_wow", "Archipelago: unexpected reply to Connect packet");
            }

            ws.close(websocket::close_code::normal);
        }
        catch (std::exception const& ex)
        {
            LOG_ERROR("module.archipelago_wow", "Archipelago: connection failed: {}", ex.what());
            _state = ConnectionState::Disconnected;
        }
    }
}
