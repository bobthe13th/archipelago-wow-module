// azerothcore-wotlk/modules/archipelago_wow/src/APProtocol.h
#pragma once

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_map>
#include <vector>

namespace Archipelago
{
    enum class ServerMessageType
    {
        Unknown,
        RoomInfo,
        Connected,
        ConnectionRefused,
        ReceivedItems,
        PrintJSON,
        // A "Bounce" command carrying the "DeathLink" tag (Task 19, design
        // spec Sec11). A Bounce without that tag is not a mechanism this
        // module uses for anything else, so it maps to Unknown rather than
        // getting its own value.
        DeathLinkBounce
    };

    struct ConnectPacketOptions
    {
        std::string game;
        std::string slotName;
        std::string password;
        std::string uuid;
        uint32_t itemsHandling = 0b111;
    };

    struct ReceivedItem
    {
        int64_t item = 0;
        int64_t location = 0;
        int64_t player = 0;
        int32_t flags = 0;
        int64_t index = 0; // absolute position in the server's item stream
    };

    // One incoming "Bounce"+"DeathLink" event (Task 19). cause/source come
    // straight from the other slot's outgoing packet's "data" object -- this
    // module only ever displays/logs them, never parses them structurally.
    struct IncomingDeathLink
    {
        std::string cause;
        std::string source;
    };

    // One location's synthesized-item display data, computed at generation
    // time in slot_data.py's _add_ap_item_display_data and carried here
    // verbatim over the Connected message's slot_data object -- see the
    // M4.7 design spec's §2-3 for why generation-time computation replaced
    // an earlier LocationScouts-based design.
    struct ApItemDisplay
    {
        std::string name;
        int32_t flags = 0;
    };

    // Uses nlohmann::json (vendor/json.hpp) to build/parse the Archipelago
    // websocket protocol's JSON message arrays. M2: replaces M1's hand-rolled
    // string builder/scanner now that item/location traffic needs structured
    // parsing, not just outer "cmd" detection.
    std::string BuildConnectPacket(ConnectPacketOptions const& options);
    std::string BuildLocationChecksPacket(std::vector<int64_t> const& locationIds);

    // Builds a StatusUpdate command. M2.1 uses this exclusively to report
    // ClientStatus.CLIENT_GOAL (30) when the Sprint mode's goal level is
    // reached; see Archipelago/NetUtils.py's ClientStatus enum and
    // Archipelago/CommonClient.py's status-update send path for the wire
    // format this mirrors.
    std::string BuildStatusUpdatePacket(int32_t status);

    // Builds a DeathLink "Bounce" command (Task 19, design spec Sec11): a
    // JSON array containing one object with cmd="Bounce", tags=["DeathLink"],
    // and a "data" object carrying cause/source (plus a "time" unix
    // timestamp, matching the real AP DeathLink wire format used by other
    // games' clients). Only ever sent for a PlayerCaused death -- the
    // loop-guard predicate lives in ArchipelagoDeathLinkScript.cpp, not here.
    std::string BuildDeathLinkPacket(std::string const& cause, std::string const& source);

    // A single websocket text frame from the Archipelago server may batch
    // multiple protocol commands into one JSON array (e.g.
    // [{"cmd":"PrintJSON"...},{"cmd":"ReceivedItems"...}]). Returns the
    // ServerMessageType of every element in that array, in order, so callers
    // can inspect every command in the frame instead of only the first.
    std::vector<ServerMessageType> ParseServerMessageTypes(std::string const& raw);

    // Convenience for the common (unbatched) single-message case: equivalent
    // to ParseServerMessageTypes(raw).front(), or Unknown if raw doesn't
    // parse as a non-empty JSON array. Do NOT use this to decide whether a
    // frame contains a given command type when the frame might be batched --
    // use ParseServerMessageTypes and scan all entries instead.
    ServerMessageType ParseServerMessageType(std::string const& raw);

    // Scans every element of a (possibly batched) frame and collects the
    // items from every "ReceivedItems" command found -- not just the first
    // element -- so no items are dropped when ReceivedItems is batched
    // alongside other commands in the same frame.
    std::vector<ReceivedItem> ParseReceivedItems(std::string const& raw);

    // Mirrors ParseReceivedItems' shape: scans every element of a (possibly
    // batched) frame and collects one IncomingDeathLink per "Bounce"+
    // "DeathLink" command found, in order.
    std::vector<IncomingDeathLink> ParseIncomingDeathLinks(std::string const& raw);

    // Parses Connected's slot_data["ap_item_display"] object (a JSON object
    // keyed by location id as a STRING -- JSON object keys are always
    // strings, even though the apworld's dict is keyed by int -- into
    // location_id -> ApItemDisplay. Returns an empty map (never throws) if
    // slot_data or ap_item_display is absent/malformed, matching every
    // other Parse* function's "don't crash the connection state machine on
    // a shape it doesn't recognize" discipline.
    std::unordered_map<int64_t, ApItemDisplay> ParseApItemDisplayFromSlotData(std::string const& raw);

    // Parses Connected's slot_data["vendor_check_repeat_behavior"] (a single
    // string option, M4.7 Task 8) mirroring ParseApItemDisplayFromSlotData's
    // exact "don't crash the connection state machine on a shape it doesn't
    // recognize" discipline. Returns std::nullopt (never throws) if
    // slot_data or the key is absent/malformed (wrong type, missing, no
    // Connected command in the frame).
    std::optional<std::string> ParseVendorCheckRepeatBehaviorFromSlotData(std::string const& raw);

    // Parses Connected's slot_data["instance_clear_mode"] (a single string
    // option, M4.9) -- mirrors ParseVendorCheckRepeatBehaviorFromSlotData's
    // exact shape (M4.7 Task 8): "don't crash the connection state machine
    // on a shape it doesn't recognize". Returns std::nullopt (never throws)
    // if slot_data or the key is absent/malformed. Replaces the
    // Archipelago.InstanceClearMode manual worldserver.conf mirror outright
    // -- see ArchipelagoWorldScript.cpp's OnUpdate for the consumer.
    std::optional<std::string> ParseInstanceClearModeFromSlotData(std::string const& raw);
}
