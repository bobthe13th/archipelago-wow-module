// azerothcore-wotlk/modules/archipelago_wow/src/APProtocol.h
#pragma once

#include <cstdint>
#include <string>
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
        PrintJSON
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

    // Uses nlohmann::json (vendor/json.hpp) to build/parse the Archipelago
    // websocket protocol's JSON message arrays. M2: replaces M1's hand-rolled
    // string builder/scanner now that item/location traffic needs structured
    // parsing, not just outer "cmd" detection.
    std::string BuildConnectPacket(ConnectPacketOptions const& options);
    std::string BuildLocationChecksPacket(std::vector<int64_t> const& locationIds);

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
}
