// azerothcore-wotlk/modules/archipelago_wow/src/APProtocol.cpp
#include "APProtocol.h"

#include "vendor/json.hpp"

using json = nlohmann::json;

namespace Archipelago
{
    std::string BuildConnectPacket(ConnectPacketOptions const& options)
    {
        json packet = json::array({ json{
            { "cmd", "Connect" },
            { "password", options.password },
            { "game", options.game },
            { "name", options.slotName },
            { "uuid", options.uuid },
            { "version", { { "major", 0 }, { "minor", 5 }, { "build", 0 }, { "class", "Version" } } },
            { "items_handling", options.itemsHandling },
            { "tags", json::array({ "AP" }) },
            { "slot_data", true }
        } });
        return packet.dump();
    }

    std::string BuildLocationChecksPacket(std::vector<int64_t> const& locationIds)
    {
        json packet = json::array({ json{
            { "cmd", "LocationChecks" },
            { "locations", locationIds }
        } });
        return packet.dump();
    }

    ServerMessageType ParseServerMessageType(std::string const& raw)
    {
        json parsed = json::parse(raw, nullptr, false /* don't throw */);
        if (parsed.is_discarded() || !parsed.is_array() || parsed.empty())
            return ServerMessageType::Unknown;

        std::string cmd = parsed[0].value("cmd", "");
        if (cmd == "RoomInfo")           return ServerMessageType::RoomInfo;
        if (cmd == "Connected")          return ServerMessageType::Connected;
        if (cmd == "ConnectionRefused")  return ServerMessageType::ConnectionRefused;
        if (cmd == "ReceivedItems")      return ServerMessageType::ReceivedItems;
        if (cmd == "PrintJSON")          return ServerMessageType::PrintJSON;
        return ServerMessageType::Unknown;
    }

    std::vector<ReceivedItem> ParseReceivedItems(std::string const& raw)
    {
        std::vector<ReceivedItem> result;
        json parsed = json::parse(raw, nullptr, false);
        if (parsed.is_discarded() || !parsed.is_array() || parsed.empty())
            return result;

        json const& msg = parsed[0];
        if (msg.value("cmd", "") != "ReceivedItems")
            return result;

        int64_t baseIndex = msg.value("index", int64_t(0));
        if (!msg.contains("items") || !msg["items"].is_array())
            return result;

        int64_t offset = 0;
        for (auto const& itemJson : msg["items"])
        {
            ReceivedItem item;
            item.item = itemJson.value("item", int64_t(0));
            item.location = itemJson.value("location", int64_t(0));
            item.player = itemJson.value("player", int64_t(0));
            item.flags = itemJson.value("flags", int32_t(0));
            item.index = baseIndex + offset;
            result.push_back(item);
            ++offset;
        }
        return result;
    }
}
