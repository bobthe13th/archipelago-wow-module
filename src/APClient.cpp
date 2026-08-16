// azerothcore-wotlk/modules/archipelago_wow/src/APClient.cpp
#include "APClient.h"

#include <algorithm>
#include <deque>

#include <boost/asio/connect.hpp>
#include <boost/asio/dispatch.hpp>
#include <boost/asio/ip/tcp.hpp>
#include <boost/asio/steady_timer.hpp>
#include <boost/asio/strand.hpp>
#include <boost/asio/ssl/context.hpp>
#include <boost/asio/ssl/error.hpp>
#include <boost/beast/core.hpp>
#include <boost/beast/core/tcp_stream.hpp>
#include <boost/beast/ssl.hpp>
#include <boost/beast/websocket.hpp>
#include <boost/beast/websocket/ssl.hpp>

#include "Log.h"

namespace beast = boost::beast;
namespace websocket = beast::websocket;
namespace net = boost::asio;
namespace ssl = boost::asio::ssl;
using tcp = boost::asio::ip::tcp;
using error_code = boost::system::error_code;

namespace Archipelago
{
    namespace
    {
        constexpr std::chrono::seconds kOperationTimeout{ 10 };
    }

    // Owns exactly one live connection attempt (plain or TLS). A new Session
    // is created for each connect/reconnect cycle; APClient owns the
    // reconnect loop and outlives any single Session.
    class APClientSession : public std::enable_shared_from_this<APClientSession>
    {
    public:
        APClientSession(net::io_context& ioc, ClientOptions const& options,
            std::atomic<ConnectionState>& state,
            std::function<void(std::vector<ReceivedItem> const&)> const& onItemsReceived)
            : _resolver(net::make_strand(ioc))
            , _plainWs(net::make_strand(ioc))
            , _sslCtx(ssl::context::tlsv12_client)
            , _sslWs(net::make_strand(ioc), _sslCtx)
            , _options(options)
            , _state(state)
            , _onItemsReceived(onItemsReceived)
        {
            _sslCtx.set_verify_mode(ssl::verify_none); // see plan's Global Constraints
        }

        void Run()
        {
            _state = ConnectionState::Connecting;
            _resolver.async_resolve(_options.host, std::to_string(_options.port),
                beast::bind_front_handler(&APClientSession::OnResolve, shared_from_this()));
        }

        void Stop()
        {
            _stopping = true;
            net::dispatch(_options.useTls ? _sslWs.get_executor() : _plainWs.get_executor(),
                [self = shared_from_this()]
                {
                    error_code ec;
                    if (self->_options.useTls)
                        beast::get_lowest_layer(self->_sslWs).socket().close(ec);
                    else
                        beast::get_lowest_layer(self->_plainWs).socket().close(ec);
                });
        }

        void SendLocationChecks(std::vector<int64_t> const& locationIds)
        {
            auto payload = std::make_shared<std::string>(BuildLocationChecksPacket(locationIds));
            net::dispatch(_options.useTls ? _sslWs.get_executor() : _plainWs.get_executor(),
                [self = shared_from_this(), payload]
                {
                    if (self->_state.load() != ConnectionState::HandshakeComplete)
                        return; // not connected right now; drop (AP resends on next connect anyway)
                    self->_outbox.push_back(payload);
                    if (self->_outbox.size() == 1)
                        self->WriteNextQueued();
                });
        }

    private:
        void OnResolve(error_code ec, tcp::resolver::results_type results)
        {
            if (ec) { return Fail("resolve", ec); }

            auto& lowestLayer = _options.useTls ? beast::get_lowest_layer(_sslWs) : beast::get_lowest_layer(_plainWs);
            lowestLayer.expires_after(kOperationTimeout);
            lowestLayer.async_connect(results,
                beast::bind_front_handler(&APClientSession::OnConnect, shared_from_this()));
        }

        void OnConnect(error_code ec, tcp::resolver::results_type::endpoint_type)
        {
            if (ec) { return Fail("connect", ec); }

            if (_options.useTls)
            {
                if (!SSL_set_tlsext_host_name(_sslWs.next_layer().native_handle(), _options.host.c_str()))
                {
                    error_code sniEc{ static_cast<int>(::ERR_get_error()), net::error::get_ssl_category() };
                    return Fail("ssl sni", sniEc);
                }
                beast::get_lowest_layer(_sslWs).expires_after(kOperationTimeout);
                _sslWs.next_layer().async_handshake(ssl::stream_base::client,
                    beast::bind_front_handler(&APClientSession::OnSslHandshake, shared_from_this()));
            }
            else
            {
                DoWsHandshake();
            }
        }

        void OnSslHandshake(error_code ec)
        {
            if (ec) { return Fail("ssl handshake", ec); }
            DoWsHandshake();
        }

        void DoWsHandshake()
        {
            auto& lowestLayer = _options.useTls ? beast::get_lowest_layer(_sslWs) : beast::get_lowest_layer(_plainWs);
            lowestLayer.expires_after(kOperationTimeout);
            if (_options.useTls)
                _sslWs.async_handshake(_options.host, "/",
                    beast::bind_front_handler(&APClientSession::OnWsHandshake, shared_from_this()));
            else
                _plainWs.async_handshake(_options.host, "/",
                    beast::bind_front_handler(&APClientSession::OnWsHandshake, shared_from_this()));
        }

        void OnWsHandshake(error_code ec)
        {
            if (ec) { return Fail("ws handshake", ec); }

            // The handshake-time deadline set in DoWsHandshake() is a sticky, absolute
            // Beast basic_stream deadline: it is never reset by activity, only replaced
            // by a fresh call. Left alone, it fires ~kOperationTimeout after handshake
            // regardless of traffic and force-closes an otherwise-healthy persistent
            // session. Replace it with expires_never() plus Beast's own websocket
            // keep-alive/idle-timeout option, which is activity-aware.
            if (_options.useTls)
            {
                beast::get_lowest_layer(_sslWs).expires_never();
                _sslWs.set_option(websocket::stream_base::timeout::suggested(beast::role_type::client));
            }
            else
            {
                beast::get_lowest_layer(_plainWs).expires_never();
                _plainWs.set_option(websocket::stream_base::timeout::suggested(beast::role_type::client));
            }

            _state = ConnectionState::AwaitingRoomInfo;
            LOG_INFO("module.archipelago_wow", "Archipelago: websocket upgrade complete, awaiting RoomInfo");
            ReadNext(/*expectRoomInfo=*/true);
        }

        void ReadNext(bool expectRoomInfo)
        {
            _readBuffer.consume(_readBuffer.size());
            _expectRoomInfo = expectRoomInfo;
            if (_options.useTls)
                _sslWs.async_read(_readBuffer, beast::bind_front_handler(&APClientSession::OnRead, shared_from_this()));
            else
                _plainWs.async_read(_readBuffer, beast::bind_front_handler(&APClientSession::OnRead, shared_from_this()));
        }

        void OnRead(error_code ec, std::size_t)
        {
            if (ec)
            {
                if (_state.load() == ConnectionState::HandshakeComplete)
                    return Fail("connection dropped", ec); // triggers reconnect via APClient
                return Fail("read", ec);
            }

            std::string message = beast::buffers_to_string(_readBuffer.data());

            if (_expectRoomInfo)
            {
                if (ParseServerMessageType(message) != ServerMessageType::RoomInfo)
                {
                    LOG_ERROR("module.archipelago_wow", "Archipelago: expected RoomInfo, got something else");
                    _state = ConnectionState::Disconnected;
                    return;
                }
                std::string connectPacket = BuildConnectPacket(_options.connectOptions);
                auto payload = std::make_shared<std::string>(std::move(connectPacket));
                auto writeThen = [self = shared_from_this(), payload]() { self->ReadNext(false); };
                if (_options.useTls)
                    _sslWs.async_write(net::buffer(*payload), [payload, writeThen](error_code, std::size_t) { writeThen(); });
                else
                    _plainWs.async_write(net::buffer(*payload), [payload, writeThen](error_code, std::size_t) { writeThen(); });
                return;
            }

            ServerMessageType type = ParseServerMessageType(message);
            if (type == ServerMessageType::Connected)
            {
                if (_state.load() != ConnectionState::HandshakeComplete)
                {
                    _state = ConnectionState::HandshakeComplete;
                    LOG_INFO("module.archipelago_wow", "Archipelago: handshake complete, connected to multiworld server");
                }
            }
            else if (type == ServerMessageType::ConnectionRefused)
            {
                _state = ConnectionState::Refused;
                LOG_ERROR("module.archipelago_wow", "Archipelago: server refused the connection");
                return; // do not keep reading; Refused is terminal for this session
            }
            else if (type == ServerMessageType::ReceivedItems)
            {
                auto items = ParseReceivedItems(message);
                if (!items.empty() && _onItemsReceived)
                    _onItemsReceived(items);
            }
            // PrintJSON / Unknown: no action needed in M2 beyond staying connected.

            ReadNext(false);
        }

        void Fail(char const* what, error_code ec)
        {
            if (_stopping)
                return; // expected: Stop() closed the socket out from under a pending read
            LOG_ERROR("module.archipelago_wow", "Archipelago: {} failed: {}", what, ec.message());
            _state = ConnectionState::Disconnected;
        }

        // Beast tolerates at most one in-flight async_write plus one suspended write on
        // a websocket::stream; a second concurrent call beyond that hits an internal
        // precondition. Serialize location-check writes through this outbox instead of
        // firing async_write directly, so a burst of SendLocationChecks() calls (e.g. a
        // quest chain completing several locations back to back) can't violate it. Runs
        // entirely on the session's strand (SendLocationChecks() dispatches onto it), so
        // no extra locking is needed.
        void WriteNextQueued()
        {
            auto const& payload = _outbox.front();
            if (_options.useTls)
                _sslWs.async_write(net::buffer(*payload),
                    beast::bind_front_handler(&APClientSession::OnLocationChecksWritten, shared_from_this()));
            else
                _plainWs.async_write(net::buffer(*payload),
                    beast::bind_front_handler(&APClientSession::OnLocationChecksWritten, shared_from_this()));
        }

        void OnLocationChecksWritten(error_code ec, std::size_t)
        {
            _outbox.pop_front();
            if (ec)
                return Fail("location checks write", ec);
            if (!_outbox.empty())
                WriteNextQueued();
        }

        tcp::resolver _resolver;
        websocket::stream<beast::tcp_stream> _plainWs;
        ssl::context _sslCtx;
        websocket::stream<beast::ssl_stream<beast::tcp_stream>> _sslWs;
        beast::flat_buffer _readBuffer;
        std::deque<std::shared_ptr<std::string>> _outbox;
        bool _expectRoomInfo = true;
        bool _stopping = false;

        ClientOptions _options;
        std::atomic<ConnectionState>& _state;
        std::function<void(std::vector<ReceivedItem> const&)> const& _onItemsReceived;
    };

    APClient::APClient(ClientOptions options, std::function<void(std::vector<ReceivedItem> const&)> onItemsReceived)
        : _options(std::move(options)), _onItemsReceived(std::move(onItemsReceived))
    {
    }

    APClient::~APClient()
    {
        Stop();
    }

    void APClient::Start()
    {
        if (_ioThread.joinable())
            return;

        _session = std::make_shared<APClientSession>(_ioc, _options, _state, _onItemsReceived);
        _session->Run();
        _ioThread = std::thread(&APClient::RunIoContext, this);
    }

    void APClient::Stop()
    {
        if (_session)
            _session->Stop();
        _ioc.stop();
        if (_ioThread.joinable())
            _ioThread.join();
    }

    void APClient::SendLocationChecks(std::vector<int64_t> const& locationIds)
    {
        if (_session)
            _session->SendLocationChecks(locationIds);
    }

    void APClient::RunIoContext()
    {
        // A single io_context::run() call returns once all work (the resolve/
        // connect/handshake/read chain, plus any pending writes) completes or
        // ioc.stop() is called from Stop(). Reconnect-with-backoff (Task 4)
        // extends this loop to re-arm a new Session instead of returning.
        _ioc.run();
    }
}
