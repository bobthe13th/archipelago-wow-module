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
        // Post-handshake idle timeout: closes the session if no frame (including
        // pings) is received within this window, and sets the cadence for our own
        // keep-alive pings. See OnWsHandshake() for why this must be an explicit
        // option rather than websocket::stream_base::timeout::suggested(client).
        constexpr std::chrono::seconds kIdleTimeout{ 60 };
    }

    // Owns exactly one live connection attempt (plain or TLS). A new Session
    // is created for each connect/reconnect cycle; APClient owns the
    // reconnect loop and outlives any single Session.
    class APClientSession : public std::enable_shared_from_this<APClientSession>
    {
    public:
        APClientSession(net::io_context& ioc, ClientOptions const& options,
            std::atomic<ConnectionState>& state, std::atomic<bool>& reachedHandshake,
            ArchipelagoCallbacks const& callbacks)
            : _resolver(net::make_strand(ioc))
            , _plainWs(net::make_strand(ioc))
            , _sslCtx(ssl::context::tlsv12_client)
            , _sslWs(net::make_strand(ioc), _sslCtx)
            , _options(options)
            , _state(state)
            , _reachedHandshake(reachedHandshake)
            , _callbacks(callbacks)
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
            std::size_t count = locationIds.size();
            net::dispatch(_options.useTls ? _sslWs.get_executor() : _plainWs.get_executor(),
                [self = shared_from_this(), payload, count]
                {
                    if (self->_state.load() != ConnectionState::HandshakeComplete)
                    {
                        // Not connected right now: check is stored durably in DB/memory and
                        // will be automatically resent on next successful connect (M4 Task 29).
                        LOG_INFO("module.archipelago_wow", "Archipelago: socket not connected, {} location check(s) queued for resend on reconnect", count);
                        return;
                    }
                    self->_outbox.push_back(payload);
                    if (self->_outbox.size() == 1)
                        self->WriteNextQueued();
                });
        }

        void SendGoalComplete()
        {
            // Reuses the exact same _outbox/WriteNextQueued/OnLocationChecksWritten
            // machinery as SendLocationChecks above -- both are just outgoing text
            // frames that must be serialized through the same single in-flight-write
            // budget (see WriteNextQueued's comment on Beast's one-write precondition).
            // A second, separate queue here would defeat that serialization.
            auto payload = std::make_shared<std::string>(BuildStatusUpdatePacket(30 /* ClientStatus.CLIENT_GOAL */));
            net::dispatch(_options.useTls ? _sslWs.get_executor() : _plainWs.get_executor(),
                [self = shared_from_this(), payload]
                {
                    if (self->_state.load() != ConnectionState::HandshakeComplete)
                    {
                        // Not connected right now: goal complete is stored durably in DB/memory
                        // and will be automatically resent on next successful connect (M4 Task 29).
                        LOG_INFO("module.archipelago_wow", "Archipelago: socket not connected, goal complete queued for resend on reconnect");
                        return;
                    }
                    self->_outbox.push_back(payload);
                    if (self->_outbox.size() == 1)
                        self->WriteNextQueued();
                });
        }

        void SendDeathLink(std::string const& cause, std::string const& source)
        {
            // Same _outbox/WriteNextQueued serialization as SendLocationChecks/
            // SendGoalComplete above. Deliberately NOT durably queued for
            // reconnect-resend the way those two are (M4 Task 29 explicitly
            // excludes DeathLink -- see docs/m4-plan.md's Decisions section,
            // item 4: "DeathLink sends are explicitly excluded from this
            // treatment (real-time/best-effort by nature)"): if the socket
            // isn't connected right now, this send is simply dropped.
            auto payload = std::make_shared<std::string>(BuildDeathLinkPacket(cause, source));
            net::dispatch(_options.useTls ? _sslWs.get_executor() : _plainWs.get_executor(),
                [self = shared_from_this(), payload]
                {
                    if (self->_state.load() != ConnectionState::HandshakeComplete)
                    {
                        LOG_INFO("module.archipelago_wow", "Archipelago: socket not connected, DeathLink dropped (not queued -- best-effort by design)");
                        return;
                    }
                    self->_outbox.push_back(payload);
                    if (self->_outbox.size() == 1)
                        self->WriteNextQueued();
                });
        }

        void SendChatCommand(std::string const& text)
        {
            // Same _outbox/WriteNextQueued serialization as SendLocationChecks/
            // SendGoalComplete/SendDeathLink above. Deliberately NOT durably queued
            // for reconnect-resend (same reasoning as SendDeathLink -- a hint
            // request is a one-off interactive action tied to the command
            // invocation that triggered it, not state to replay later): if the
            // socket isn't connected right now, this send is simply dropped.
            auto payload = std::make_shared<std::string>(BuildSayPacket(text));
            net::dispatch(_options.useTls ? _sslWs.get_executor() : _plainWs.get_executor(),
                [self = shared_from_this(), payload]
                {
                    if (self->_state.load() != ConnectionState::HandshakeComplete)
                    {
                        LOG_INFO("module.archipelago_wow",
                            "Archipelago: socket not connected, chat command dropped (best-effort by design)");
                        return;
                    }
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
            // session. Replace it with expires_never() plus an explicit websocket
            // idle-timeout option: this closes the connection if no frame, including
            // pings, is received for kIdleTimeout, and keeps the connection alive by
            // sending our own pings on that same cadence. (Beast's
            // timeout::suggested(client) must NOT be used here: in Boost 1.81 it sets
            // idle_timeout = none() and keep_alive_pings = false, which combined with
            // expires_never() leaves a silently-dead peer with zero timeouts forever.)
            websocket::stream_base::timeout opt;
            opt.handshake_timeout = kOperationTimeout;
            opt.idle_timeout = kIdleTimeout;
            opt.keep_alive_pings = true;
            if (_options.useTls)
            {
                beast::get_lowest_layer(_sslWs).expires_never();
                _sslWs.set_option(opt);
            }
            else
            {
                beast::get_lowest_layer(_plainWs).expires_never();
                _plainWs.set_option(opt);
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

            // A single frame can batch multiple commands as a JSON array
            // (e.g. [{"cmd":"PrintJSON"...},{"cmd":"ReceivedItems"...}]), so
            // every element must be inspected -- looking only at element 0
            // would silently miss a command (most critically ReceivedItems,
            // whose loss here is permanent player progression loss with no
            // re-request mechanism in this milestone) riding along after
            // something else in the same frame.
            std::vector<ServerMessageType> types = ParseServerMessageTypes(message);

            if (_expectRoomInfo)
            {
                bool sawRoomInfo = std::any_of(types.begin(), types.end(),
                    [](ServerMessageType type) { return type == ServerMessageType::RoomInfo; });
                if (!sawRoomInfo)
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

            bool refused = false;
            for (ServerMessageType type : types)
            {
                if (type == ServerMessageType::Connected)
                {
                    if (_state.load() != ConnectionState::HandshakeComplete)
                    {
                        _state = ConnectionState::HandshakeComplete;
                        _reachedHandshake = true; // consumed by APClient::RunIoContext to reset backoff
                        LOG_INFO("module.archipelago_wow", "Archipelago: handshake complete, connected to multiworld server");
                        if (_callbacks.onConnected)
                            _callbacks.onConnected();
                    }
                }
                else if (type == ServerMessageType::ConnectionRefused)
                {
                    refused = true;
                    LOG_ERROR("module.archipelago_wow", "Archipelago: server refused the connection");
                    break; // Refused is terminal; no need to scan the rest of this frame
                }
                // ReceivedItems is handled once below (via ParseReceivedItems, which
                // itself scans every element) rather than per-element here, since a
                // frame could in principle batch more than one ReceivedItems command.
                // PrintJSON / Unknown: no action needed in M2 beyond staying connected.
            }

            if (refused)
            {
                _state = ConnectionState::Refused;
                return; // do not keep reading; Refused is terminal for this session
            }

            if (std::any_of(types.begin(), types.end(),
                    [](ServerMessageType type) { return type == ServerMessageType::ReceivedItems; }))
            {
                auto items = ParseReceivedItems(message);
                if (!items.empty() && _callbacks.onItemsReceived)
                    _callbacks.onItemsReceived(items);
            }

            if (std::any_of(types.begin(), types.end(),
                    [](ServerMessageType type) { return type == ServerMessageType::DeathLinkBounce; }))
            {
                auto bounces = ParseIncomingDeathLinks(message);
                if (!bounces.empty() && _callbacks.onDeathLinkReceived)
                    _callbacks.onDeathLinkReceived(bounces);
            }

            // ParseApItemDisplayFromSlotData internally checks cmd == "Connected"
            // itself, so no extra gating on the parsed `types` list is needed here --
            // parsing the raw frame unconditionally is simplest and matches the M4.7
            // design spec's plumbing task (Task 4).
            auto slotData = ParseApItemDisplayFromSlotData(message);
            if (!slotData.empty() && _callbacks.onSlotDataReceived)
                _callbacks.onSlotDataReceived(slotData);

            // Same unconditional-parse rationale as ParseApItemDisplayFromSlotData
            // above -- ParseVendorCheckRepeatBehaviorFromSlotData internally checks
            // cmd == "Connected" itself (M4.7 Task 8).
            auto vendorCheckRepeatBehavior = ParseVendorCheckRepeatBehaviorFromSlotData(message);
            if (vendorCheckRepeatBehavior && _callbacks.onVendorCheckRepeatBehaviorReceived)
                _callbacks.onVendorCheckRepeatBehaviorReceived(*vendorCheckRepeatBehavior);

            // Same unconditional-parse rationale as ParseApItemDisplayFromSlotData/
            // ParseVendorCheckRepeatBehaviorFromSlotData above (M4.9).
            auto instanceClearMode = ParseInstanceClearModeFromSlotData(message);
            if (instanceClearMode && _callbacks.onInstanceClearModeReceived)
                _callbacks.onInstanceClearModeReceived(*instanceClearMode);

            // Same unconditional-parse rationale as ParseApItemDisplayFromSlotData/
            // ParseVendorCheckRepeatBehaviorFromSlotData above (M4.10.1).
            auto lootSlotCheckRepeatBehavior = ParseLootSlotCheckRepeatBehaviorFromSlotData(message);
            if (lootSlotCheckRepeatBehavior && _callbacks.onLootSlotCheckRepeatBehaviorReceived)
                _callbacks.onLootSlotCheckRepeatBehaviorReceived(*lootSlotCheckRepeatBehavior);

            // Same unconditional-parse rationale as ParseApItemDisplayFromSlotData above
            // (M4.13): PrintJSON text is meaningful even when the surrounding frame has
            // no Connected command in it at all (a live hint response arrives on its own,
            // long after connect).
            auto printJsonText = ParsePrintJSONText(message);
            if (!printJsonText.empty() && _callbacks.onPrintJsonReceived)
                _callbacks.onPrintJsonReceived(printJsonText);

            // Connected's real, top-level missing_locations array (M4.13, ".ap missing")
            // -- ParseMissingLocationsFromConnected internally checks cmd == "Connected"
            // itself, same unconditional-parse rationale as every other Parse* call above.
            auto missingLocations = ParseMissingLocationsFromConnected(message);
            if (!missingLocations.empty() && _callbacks.onMissingLocationsReceived)
                _callbacks.onMissingLocationsReceived(missingLocations);

            ReadNext(false);
        }

        void Fail(char const* what, error_code ec)
        {
            if (_stopping)
                return; // expected: Stop() closed the socket out from under a pending read
            if (_failed)
                return; // already tearing this session down; avoid double-logging and
                         // redundant state churn when the socket close below aborts a
                         // second op (e.g. a pending read) that was concurrently in flight
            _failed = true;
            LOG_ERROR("module.archipelago_wow", "Archipelago: {} failed: {}", what, ec.message());
            _state = ConnectionState::Disconnected;
            DisarmIdleTimer();

            // Close the lowest-layer socket so every other outstanding async op on this
            // session is aborted too, not just whichever one happened to fail here.
            // This matters most for the write path: Beast's write-error handling never
            // aborts or errors out a concurrently pending async_read. On a half-open
            // connection (peer vanished without a clean TCP close -- e.g. cable pulled,
            // NAT/firewall silently dropped the mapping), reads never error because
            // nothing ever arrives to error on, but a SendLocationChecks() write can
            // still eventually fail once TCP's own retransmits are exhausted. Before
            // this close() call, that write failure would disarm the idle timer above
            // and then leave *nothing* watching the connection: the pending read (which
            // holds a shared_from_this() and so keeps this session alive) runs forever,
            // io_context::run() in APClient::RunIoContext never returns, the reconnect
            // loop never re-fires, and the client is stuck at Disconnected with a leaked
            // session and an open socket. Closing the socket here aborts that pending
            // read immediately (with operation_aborted), which routes it back through
            // this same Fail() (see the _failed guard above) and lets _ioc.run() return
            // right away -- making the timer-disarm above redundant on this path rather
            // than load-bearing, and closing the actual gap.
            error_code closeEc;
            if (_options.useTls)
                beast::get_lowest_layer(_sslWs).socket().close(closeEc);
            else
                beast::get_lowest_layer(_plainWs).socket().close(closeEc);
        }

        // OnWsHandshake's idle_timeout/keep_alive_pings option arms Beast's internal
        // websocket idle timer, which re-arms itself at idle_timeout/2 on every
        // successful read. On a read *error*, Beast's read op only calls
        // check_stop_now() -- it never calls update_timer() -- so the timer is left
        // armed and outstanding. Since this session (and its stream) stays alive after
        // Fail(), that outstanding timer is still pending io_context work, and
        // APClient::RunIoContext's blocking _ioc.run() call cannot return until it
        // fires (up to kIdleTimeout after its last re-arm) -- stalling the whole
        // reconnect loop for up to ~30s after a drop instead of starting immediately.
        //
        // set_option() only calls the timer's cancel() synchronously when BOTH
        // handshake_timeout and idle_timeout are none() (see
        // stream_impl.hpp's set_option(): `if (opt.handshake_timeout == none() &&
        // opt.idle_timeout == none()) { timer.cancel(); ... }`) -- leaving
        // handshake_timeout at any non-none value, as an earlier version of this
        // function did, skips that branch entirely and only updates timeout_opt_
        // for future re-arms, which never happens on a dying session. The
        // already-scheduled async_wait then keeps counting down to whatever
        // absolute time it was last armed for, and that pending op is exactly
        // what keeps _ioc.run() blocked -- reproduced live with a drop at 33s of
        // uptime (past the idle_timeout/2=30s keep-alive re-arm), where the
        // stall landed at *exactly* the pre-existing timer deadline (t=60s)
        // instead of resolving immediately. Both fields must be none() to
        // actually hit the cancel() branch and unblock RunIoContext right away.
        void DisarmIdleTimer()
        {
            websocket::stream_base::timeout off;
            off.handshake_timeout = websocket::stream_base::none();
            off.idle_timeout = websocket::stream_base::none();
            off.keep_alive_pings = false;
            if (_options.useTls)
                _sslWs.set_option(off);
            else
                _plainWs.set_option(off);
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
        bool _failed = false;

        ClientOptions _options;
        std::atomic<ConnectionState>& _state;
        std::atomic<bool>& _reachedHandshake;
        ArchipelagoCallbacks const& _callbacks;
    };

    APClient::APClient(ClientOptions options, ArchipelagoCallbacks callbacks)
        : _options(std::move(options))
        , _callbacks(std::move(callbacks))
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

        std::shared_ptr<APClientSession> session;
        {
            std::lock_guard<std::mutex> lock(_sessionMutex);
            _session = std::make_shared<APClientSession>(_ioc, _options, _state, _reachedHandshake, _callbacks);
            session = _session;
        }
        session->Run();
        _ioThread = std::thread(&APClient::RunIoContext, this);
    }

    void APClient::Stop()
    {
        _stoppingAll = true;
        {
            // _reconnectTimer is deliberately not touched here: it's reassigned on the
            // io thread and only ever read+cancelled here with a bare null-check, which
            // is a use-after-free race, and it isn't load-bearing anyway -- _ioc.stop()
            // below already makes a pending async_wait (and everything else) fall out
            // of _ioc.run() immediately.
            std::lock_guard<std::mutex> lock(_sessionMutex);
            if (_session)
                _session->Stop();
        }
        _ioc.stop();
        if (_ioThread.joinable())
            _ioThread.join();
    }

    void APClient::Reconnect(uint16_t newPort)
    {
        std::shared_ptr<APClientSession> sessionToStop;
        {
            std::lock_guard<std::mutex> lock(_sessionMutex);
            _options.port = newPort;
            sessionToStop = _session;
        }
        // Force the next reconnect attempt to use reconnectMinSeconds rather than
        // whatever backoff a prior, unrelated drop may have climbed to.
        _currentBackoffSeconds = 0;
        if (sessionToStop)
            sessionToStop->Stop();
        LOG_INFO("module.archipelago_wow", "Archipelago: GM-triggered reconnect to port {}", newPort);
    }

    void APClient::SendLocationChecks(std::vector<int64_t> const& locationIds)
    {
        std::lock_guard<std::mutex> lock(_sessionMutex);
        if (_session)
            _session->SendLocationChecks(locationIds);
    }

    void APClient::SendGoalComplete()
    {
        std::lock_guard<std::mutex> lock(_sessionMutex);
        if (_session)
            _session->SendGoalComplete();
    }

    void APClient::SendDeathLink(std::string const& cause, std::string const& source)
    {
        std::lock_guard<std::mutex> lock(_sessionMutex);
        if (_session)
            _session->SendDeathLink(cause, source);
    }

    void APClient::SendChatCommand(std::string const& text)
    {
        std::lock_guard<std::mutex> lock(_sessionMutex);
        if (_session)
            _session->SendChatCommand(text);
    }

    void APClient::RunIoContext()
    {
        while (!_stoppingAll)
        {
            _ioc.restart();
            _ioc.run();

            if (_stoppingAll)
                break;

            ConnectionState state = _state.load();

            // Reset backoff after any period of being genuinely connected, so a
            // later drop starts from reconnectMinSeconds again rather than
            // staying maxed out. This can't be decided from `state` here: by the
            // time a dropped session's Fail() call returns and _ioc.run() above
            // unblocks, _state has already been overwritten away from
            // HandshakeComplete (to Disconnected, in the same Fail() call) --
            // verified live during manual testing, where checking `state ==
            // HandshakeComplete` here never once fired and backoff climbed
            // 2s/4s/8s/16s/32s across repeated reconnects instead of resetting.
            // _reachedHandshake is set by OnRead the instant HandshakeComplete is
            // reached and is consumed (read-and-cleared) here instead.
            if (_reachedHandshake.exchange(false))
                _currentBackoffSeconds = 0;

            if (state == ConnectionState::Refused)
                break; // server explicitly refused; do not hammer it with retries

            // Any other exit (Disconnected after a failed step, or a dropped
            // read) is treated as reconnect-worthy.
            _state = ConnectionState::Reconnecting;
            _currentBackoffSeconds = _currentBackoffSeconds == 0
                ? _options.reconnectMinSeconds
                : std::min(_currentBackoffSeconds * 2, _options.reconnectMaxSeconds);

            LOG_INFO("module.archipelago_wow", "Archipelago: reconnecting in {}s", _currentBackoffSeconds);

            // Arm the backoff with async_wait rather than a blocking wait(). steady_timer::cancel()
            // (called from Stop(), which may run on a different thread than this one) only forces
            // completion of a pending *asynchronous* wait; against a synchronous wait() it is a
            // documented no-op (boost/asio/detail/deadline_timer_service.hpp's wait() is a plain
            // blocking sleep loop with no cancellation hook). A blocking wait() here would mean
            // Stop() during backoff blocks its caller for up to reconnectMaxSeconds joining this
            // thread. async_wait keeps the wait genuinely cancellable, and the handler (run inside
            // this same loop's _ioc.run() call on the next iteration) drives the next connection
            // attempt to completion without this thread ever blocking outside of io_context::run().
            _reconnectTimer = std::make_unique<net::steady_timer>(_ioc, std::chrono::seconds(_currentBackoffSeconds));
            _reconnectTimer->async_wait(
                [this](error_code ec)
                {
                    if (ec || _stoppingAll)
                        return; // cancelled by Stop(), or already shutting down
                    std::shared_ptr<APClientSession> session;
                    {
                        // Guards against Stop() (world thread) reading/dereferencing
                        // _session concurrently with this reassignment; see the
                        // _sessionMutex comment on the member in APClient.h.
                        std::lock_guard<std::mutex> lock(_sessionMutex);
                        _session = std::make_shared<APClientSession>(
                            _ioc, _options, _state, _reachedHandshake, _callbacks);
                        session = _session;
                    }
                    session->Run();
                });
        }
    }
}
