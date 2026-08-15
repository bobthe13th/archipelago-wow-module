// azerothcore-wotlk/modules/archipelago_wow/src/APClient.cpp
#include "APClient.h"

#include <chrono>

#include <boost/asio.hpp>
#include <boost/beast/core.hpp>
#include <boost/beast/core/tcp_stream.hpp>
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
        if (_thread.joinable())
            return;

        _thread = std::thread(&APClient::Run, this);
    }

    void APClient::Stop()
    {
        if (_thread.joinable())
            _thread.join();
    }

    namespace
    {
        // Deadline applied before each blocking step below via
        // beast::get_lowest_layer(ws).expires_after(...), following the standard
        // Beast tcp_stream timeout pattern.
        //
        // IMPORTANT CAVEAT (verified against Boost 1.81 boost/beast/core/basic_stream.hpp):
        // expires_after()'s deadline is only enforced for *asynchronous* operations
        // pumped through a running io_context -- the header's own "Blocking I/O"
        // section states plainly: "Synchronous functions behave identically as
        // that of the wrapped net::basic_stream_socket. Timeouts are not available
        // when performing blocking calls." Run() below uses the synchronous
        // connect/handshake/read/write entry points and never calls ioc.run(), so
        // these expires_after() calls do not currently bound anything -- Finding 1's
        // "can hang forever" risk is not actually closed by this change alone. See
        // the fix report for the follow-up options (a bounded async wrapper driven
        // by io_context::run_for(), vs. accepting the gap for the M1 skeleton).
        constexpr std::chrono::seconds kOperationTimeout{ 10 };
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
            websocket::stream<beast::tcp_stream> ws(ioc);

            auto const results = resolver.resolve(_host, std::to_string(_port));

            beast::get_lowest_layer(ws).expires_after(kOperationTimeout);
            beast::get_lowest_layer(ws).connect(results.begin(), results.end());

            beast::get_lowest_layer(ws).expires_after(kOperationTimeout);
            ws.handshake(_host, "/");
            _state = ConnectionState::AwaitingRoomInfo;
            LOG_INFO("module.archipelago_wow", "Archipelago: websocket upgrade complete, awaiting RoomInfo");

            beast::flat_buffer buffer;
            beast::get_lowest_layer(ws).expires_after(kOperationTimeout);
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
            beast::get_lowest_layer(ws).expires_after(kOperationTimeout);
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

            // The one-shot M1 handshake socket is now closed. Overwrite whatever
            // terminal state was set above (Connected/Refused/Disconnected) so a
            // successful handshake is reported as "handshake succeeded, session
            // closed" rather than falsely implying a persistent connection.
            if (replyType == ServerMessageType::Connected)
                _state = ConnectionState::HandshakeComplete;
        }
        catch (std::exception const& ex)
        {
            LOG_ERROR("module.archipelago_wow", "Archipelago: connection failed: {}", ex.what());
            _state = ConnectionState::Disconnected;
        }
    }
}
