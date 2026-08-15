// azerothcore-wotlk/modules/archipelago_wow/src/APProtocol.h
#pragma once

#include <cstdint>
#include <string>

namespace Archipelago
{
    enum class ServerMessageType
    {
        Unknown,
        RoomInfo,
        Connected,
        ConnectionRefused
    };

    struct ConnectPacketOptions
    {
        std::string game;
        std::string slotName;
        std::string password;
        std::string uuid;
        uint32_t itemsHandling = 0b111;
    };

    // Hand-rolled JSON string builder for the one outbound message M1 needs.
    // A real JSON library replaces this once M2 needs to parse structured
    // ReceivedItems/LocationInfo payloads.
    std::string BuildConnectPacket(ConnectPacketOptions const& options);

    // Scans a raw server text frame for the outer "cmd" field. Only distinguishes
    // the three messages the M1 handshake needs to see; anything else is Unknown.
    ServerMessageType ParseServerMessageType(std::string const& raw);
}
