// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoCommandScript.cpp
#include <algorithm>

#include "Chat.h"
#include "ScriptMgr.h"
#include "AllLocationNames.h"
#include "APItemDisplay.h"
#include "ArchipelagoManager.h"

using namespace Acore::ChatCommands;

namespace
{
    constexpr size_t AP_MISSING_PAGE_SIZE = 20;
}

class ArchipelagoCommandScript : public CommandScript
{
public:
    ArchipelagoCommandScript() : CommandScript("ArchipelagoCommandScript") { }

    ChatCommandTable GetCommands() const override
    {
        static ChatCommandTable apCommandTable =
        {
            { "status",  HandleApStatusCommand,  SEC_PLAYER,     Console::No },
            { "missing", HandleApMissingCommand, SEC_PLAYER,     Console::No },
            { "hint",    HandleApHintCommand,    SEC_PLAYER,     Console::No },
            { "port",    HandleApPortCommand,    SEC_GAMEMASTER, Console::No },
        };
        static ChatCommandTable commandTable =
        {
            { "ap", apCommandTable },
        };
        return commandTable;
    }

    static bool HandleApStatusCommand(ChatHandler* handler, const char* /*args*/)
    {
        switch (sArchipelagoMgr->GetConnectionState())
        {
            case Archipelago::ConnectionState::HandshakeComplete:
                handler->PSendSysMessage("Archipelago: connected.");
                break;
            case Archipelago::ConnectionState::Connecting:
            case Archipelago::ConnectionState::AwaitingRoomInfo:
            case Archipelago::ConnectionState::Connected:
                handler->PSendSysMessage("Archipelago: connecting...");
                break;
            case Archipelago::ConnectionState::Reconnecting:
                handler->PSendSysMessage("Archipelago: connection lost, reconnecting...");
                break;
            case Archipelago::ConnectionState::Refused:
                handler->PSendSysMessage("Archipelago: server refused the connection.");
                break;
            case Archipelago::ConnectionState::Disconnected:
            default:
                handler->PSendSysMessage("Archipelago: not connected.");
                break;
        }
        return true;
    }

    // Design spec Sec1: paginated listing of remaining (unchecked) locations,
    // resolving each id to a display name via M4.7's synthesized display data
    // first (real player-facing item name for a Vendor Inventories/Quest
    // Rewards slot) and AllLocationNames (Task 3) as the fallback for every
    // other family. Real per-session missing-locations data (RoomUpdate/
    // Connected's own "missing_locations" array) isn't retained live -- only
    // the most recent Connected/RoomUpdate frame's snapshot is available, fed
    // via ArchipelagoManager::GetLastKnownMissingLocations (Step 3 below).
    static bool HandleApMissingCommand(ChatHandler* handler, char const* args)
    {
        if (sArchipelagoMgr->GetConnectionState() != Archipelago::ConnectionState::HandshakeComplete)
        {
            handler->PSendSysMessage("Archipelago: not connected.");
            return true;
        }

        std::vector<int64_t> missing = sArchipelagoMgr->GetLastKnownMissingLocations();

        uint32_t page = 1;
        if (args && *args)
        {
            Optional<uint32_t> parsed = Acore::StringTo<uint32_t>(args);
            if (parsed && *parsed > 0)
                page = *parsed;
        }

        size_t startIndex = (page - 1) * AP_MISSING_PAGE_SIZE;
        if (missing.empty())
        {
            handler->PSendSysMessage("Archipelago: no locations remaining.");
            return true;
        }
        if (startIndex >= missing.size())
        {
            handler->PSendSysMessage("Archipelago: page {} is past the end ({} location(s) remaining total).",
                page, missing.size());
            return true;
        }

        handler->PSendSysMessage("Archipelago: {} location(s) remaining (page {}):", missing.size(), page);
        size_t endIndex = std::min(startIndex + AP_MISSING_PAGE_SIZE, missing.size());
        auto const& displayData = Archipelago::ItemDisplay::GetSynthesizedDisplayData();
        for (size_t i = startIndex; i < endIndex; ++i)
        {
            int64_t locationId = missing[i];
            auto displayIt = displayData.find(locationId);
            if (displayIt != displayData.end())
            {
                handler->PSendSysMessage("  - {}", displayIt->second.name);
                continue;
            }
            auto nameIt = Archipelago::Locations::AllLocationNames.find(locationId);
            handler->PSendSysMessage("  - {}", nameIt != Archipelago::Locations::AllLocationNames.end()
                ? nameIt->second : std::string("(unknown location)"));
        }
        if (endIndex < missing.size())
            handler->PSendSysMessage("Use '.ap missing {}' for more.", page + 1);
        return true;
    }

    // Design spec Sec2: AP's real hint mechanism is a server-interpreted chat
    // command ("!hint <item name>"), sent as a plain Say -- the server's
    // response comes back as a PrintJSON broadcast (M4.13 Task 2's
    // onPrintJsonReceived, drained/broadcast every OnUpdate tick in
    // ArchipelagoWorldScript.cpp). NOTE (see this plan's "Real corrections"
    // section): item/location names inside that response show as raw numeric
    // ids, not resolved names -- this module has no cached DataPackage to
    // resolve them with, and building that is real, separate, out-of-scope
    // future work.
    static bool HandleApHintCommand(ChatHandler* handler, char const* args)
    {
        if (!args || !*args)
        {
            handler->PSendSysMessage("Usage: .ap hint <item name>");
            return true;
        }
        if (sArchipelagoMgr->GetConnectionState() != Archipelago::ConnectionState::HandshakeComplete)
        {
            handler->PSendSysMessage("Archipelago: not connected.");
            return true;
        }
        sArchipelagoMgr->SendChatCommand(std::string("!hint ") + args);
        handler->PSendSysMessage("Archipelago: hint requested, watch chat for the response.");
        return true;
    }

    // Design spec Sec3: GM-only (SEC_GAMEMASTER, enforced by the ChatCommandTable
    // entry above -- AzerothCore's own command dispatcher rejects a non-GM
    // caller before this handler ever runs). Reconnects the already-live
    // APClient to a different port without a worldserver restart (Task 4).
    static bool HandleApPortCommand(ChatHandler* handler, char const* args)
    {
        if (!args || !*args)
        {
            handler->PSendSysMessage("Usage: .ap port <port number>");
            return true;
        }
        Optional<uint16_t> port = Acore::StringTo<uint16_t>(args);
        if (!port)
        {
            handler->PSendSysMessage("Archipelago: '{}' is not a valid port number.", args);
            return true;
        }
        sArchipelagoMgr->Reconnect(*port);
        handler->PSendSysMessage("Archipelago: reconnecting to port {}...", *port);
        return true;
    }
};

void AddArchipelagoCommandScripts()
{
    new ArchipelagoCommandScript();
}
