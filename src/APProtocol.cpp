// azerothcore-wotlk/modules/archipelago_wow/src/APProtocol.cpp
#include "APProtocol.h"

namespace Archipelago
{
    std::string BuildConnectPacket(ConnectPacketOptions const& options)
    {
        std::string json;
        json += "[{";
        json += "\"cmd\":\"Connect\",";
        json += "\"password\":\"" + options.password + "\",";
        json += "\"game\":\"" + options.game + "\",";
        json += "\"name\":\"" + options.slotName + "\",";
        json += "\"uuid\":\"" + options.uuid + "\",";
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
