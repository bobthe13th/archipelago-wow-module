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

    ServerMessageType ParseServerMessageType(std::string const& raw);
    std::vector<ReceivedItem> ParseReceivedItems(std::string const& raw);
}
