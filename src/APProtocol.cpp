// azerothcore-wotlk/modules/archipelago_wow/src/APProtocol.cpp
#include "APProtocol.h"

#include <ctime>

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

    std::string BuildStatusUpdatePacket(int32_t status)
    {
        json packet = json::array({ json{
            { "cmd", "StatusUpdate" },
            { "status", status }
        } });
        return packet.dump();
    }

    std::string BuildDeathLinkPacket(std::string const& cause, std::string const& source)
    {
        json packet = json::array({ json{
            { "cmd", "Bounce" },
            { "tags", json::array({ "DeathLink" }) },
            { "data", {
                { "time", static_cast<double>(std::time(nullptr)) },
                { "cause", cause },
                { "source", source }
            } }
        } });
        return packet.dump();
    }

    namespace
    {
        bool HasDeathLinkTag(json const& element)
        {
            if (!element.contains("tags") || !element["tags"].is_array())
                return false;
            for (json const& tag : element["tags"])
                if (tag.is_string() && tag.get<std::string>() == "DeathLink")
                    return true;
            return false;
        }

        ServerMessageType TypeFromElement(json const& element)
        {
            if (!element.is_object())
                return ServerMessageType::Unknown;

            std::string cmd = element.value("cmd", "");
            if (cmd == "RoomInfo")           return ServerMessageType::RoomInfo;
            if (cmd == "Connected")          return ServerMessageType::Connected;
            if (cmd == "ConnectionRefused")  return ServerMessageType::ConnectionRefused;
            if (cmd == "ReceivedItems")      return ServerMessageType::ReceivedItems;
            if (cmd == "PrintJSON")          return ServerMessageType::PrintJSON;
            // A Bounce without the DeathLink tag isn't a command this module
            // consumes for anything, so it deliberately falls through to Unknown.
            if (cmd == "Bounce" && HasDeathLinkTag(element))
                return ServerMessageType::DeathLinkBounce;
            return ServerMessageType::Unknown;
        }

        void CollectReceivedItemsFromElement(json const& element, std::vector<ReceivedItem>& out)
        {
            if (!element.is_object() || element.value("cmd", "") != "ReceivedItems")
                return;
            if (!element.contains("items") || !element["items"].is_array())
                return;

            int64_t baseIndex = element.value("index", int64_t(0));
            int64_t offset = 0;
            for (auto const& itemJson : element["items"])
            {
                ReceivedItem item;
                item.item = itemJson.value("item", int64_t(0));
                item.location = itemJson.value("location", int64_t(0));
                item.player = itemJson.value("player", int64_t(0));
                item.flags = itemJson.value("flags", int32_t(0));
                item.index = baseIndex + offset;
                out.push_back(item);
                ++offset;
            }
        }

        void CollectIncomingDeathLinkFromElement(json const& element, std::vector<IncomingDeathLink>& out)
        {
            if (!element.is_object() || element.value("cmd", "") != "Bounce" || !HasDeathLinkTag(element))
                return;
            if (!element.contains("data") || !element["data"].is_object())
                return;

            IncomingDeathLink bounce;
            bounce.cause = element["data"].value("cause", std::string());
            bounce.source = element["data"].value("source", std::string());
            out.push_back(std::move(bounce));
        }
    }

    std::vector<ServerMessageType> ParseServerMessageTypes(std::string const& raw)
    {
        std::vector<ServerMessageType> result;
        json parsed = json::parse(raw, nullptr, false /* don't throw */);
        if (parsed.is_discarded() || !parsed.is_array())
            return result;

        for (json const& element : parsed)
            result.push_back(TypeFromElement(element));
        return result;
    }

    ServerMessageType ParseServerMessageType(std::string const& raw)
    {
        std::vector<ServerMessageType> types = ParseServerMessageTypes(raw);
        return types.empty() ? ServerMessageType::Unknown : types.front();
    }

    std::vector<ReceivedItem> ParseReceivedItems(std::string const& raw)
    {
        std::vector<ReceivedItem> result;
        json parsed = json::parse(raw, nullptr, false);
        if (parsed.is_discarded() || !parsed.is_array())
            return result;

        for (json const& element : parsed)
            CollectReceivedItemsFromElement(element, result);
        return result;
    }

    std::vector<IncomingDeathLink> ParseIncomingDeathLinks(std::string const& raw)
    {
        std::vector<IncomingDeathLink> result;
        json parsed = json::parse(raw, nullptr, false);
        if (parsed.is_discarded() || !parsed.is_array())
            return result;

        for (json const& element : parsed)
            CollectIncomingDeathLinkFromElement(element, result);
        return result;
    }

    std::unordered_map<int64_t, ApItemDisplay> ParseApItemDisplayFromSlotData(std::string const& raw)
    {
        std::unordered_map<int64_t, ApItemDisplay> result;
        json parsed = json::parse(raw, nullptr, false /* don't throw */);
        if (parsed.is_discarded() || !parsed.is_array())
            return result;

        for (json const& element : parsed)
        {
            if (!element.is_object() || element.value("cmd", "") != "Connected")
                continue;
            if (!element.contains("slot_data") || !element["slot_data"].is_object())
                continue;
            json const& slotData = element["slot_data"];
            if (!slotData.contains("ap_item_display") || !slotData["ap_item_display"].is_object())
                continue;

            for (auto const& [locationIdStr, displayJson] : slotData["ap_item_display"].items())
            {
                if (!displayJson.is_object())
                    continue;
                try
                {
                    ApItemDisplay display;
                    // .value() only substitutes the default when the key is
                    // absent -- a present-but-wrong-typed field (e.g. a
                    // numeric "name" or a string "flags") still throws
                    // json::type_error out of get<T>(), so that has to be
                    // caught here too, not just the stoll() below.
                    display.name = displayJson.value("name", std::string());
                    display.flags = displayJson.value("flags", int32_t(0));
                    result[std::stoll(locationIdStr)] = display;
                }
                catch (std::exception const&)
                {
                    // Non-numeric key, or a wrong-typed name/flags field --
                    // skip rather than crash; a malformed slot_data payload
                    // should degrade to "no display data for this location",
                    // not take down the connection.
                    continue;
                }
            }
        }
        return result;
    }
}
