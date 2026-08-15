// azerothcore-wotlk/modules/archipelago_wow/src/APProtocol.cpp
#include "APProtocol.h"

namespace Archipelago
{
    // Minimal JSON string escaper covering the realistic cases for free-form
    // slot names/passwords: quotes, backslashes, and common whitespace control
    // characters. Not a full JSON string escaper (no \uXXXX escaping of other
    // control chars) -- that's more than M1's hand-rolled builder needs.
    std::string EscapeJsonString(std::string const& input)
    {
        std::string out;
        out.reserve(input.size());
        for (char c : input)
        {
            switch (c)
            {
                case '"':  out += "\\\""; break;
                case '\\': out += "\\\\"; break;
                case '\n': out += "\\n"; break;
                case '\r': out += "\\r"; break;
                case '\t': out += "\\t"; break;
                default:   out += c; break;
            }
        }
        return out;
    }

    std::string BuildConnectPacket(ConnectPacketOptions const& options)
    {
        std::string json;
        json += "[{";
        json += "\"cmd\":\"Connect\",";
        json += "\"password\":\"" + EscapeJsonString(options.password) + "\",";
        json += "\"game\":\"" + EscapeJsonString(options.game) + "\",";
        json += "\"name\":\"" + EscapeJsonString(options.slotName) + "\",";
        json += "\"uuid\":\"" + EscapeJsonString(options.uuid) + "\",";
        json += "\"version\":{\"major\":0,\"minor\":5,\"build\":0,\"class\":\"Version\"},";
        json += "\"items_handling\":" + std::to_string(options.itemsHandling) + ",";
        json += "\"tags\":[\"AP\"],";
        json += "\"slot_data\":true";
        json += "}]";
        return json;
    }

    ServerMessageType ParseServerMessageType(std::string const& raw)
    {
        if (raw.find("\"cmd\": \"RoomInfo\"") != std::string::npos ||
            raw.find("\"cmd\":\"RoomInfo\"") != std::string::npos)
            return ServerMessageType::RoomInfo;

        if (raw.find("\"cmd\": \"Connected\"") != std::string::npos ||
            raw.find("\"cmd\":\"Connected\"") != std::string::npos)
            return ServerMessageType::Connected;

        if (raw.find("\"cmd\": \"ConnectionRefused\"") != std::string::npos ||
            raw.find("\"cmd\":\"ConnectionRefused\"") != std::string::npos)
            return ServerMessageType::ConnectionRefused;

        return ServerMessageType::Unknown;
    }
}
