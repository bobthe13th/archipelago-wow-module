// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoCommandScript.cpp
#include "Chat.h"
#include "ScriptMgr.h"
#include "ArchipelagoManager.h"

using namespace Acore::ChatCommands;

class ArchipelagoCommandScript : public CommandScript
{
public:
    ArchipelagoCommandScript() : CommandScript("ArchipelagoCommandScript") { }

    ChatCommandTable GetCommands() const override
    {
        static ChatCommandTable apCommandTable =
        {
            { "status", HandleApStatusCommand, SEC_PLAYER, Console::No },
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
            case Archipelago::ConnectionState::Connected:
                handler->PSendSysMessage("Archipelago: connected.");
                break;
            case Archipelago::ConnectionState::Connecting:
            case Archipelago::ConnectionState::AwaitingRoomInfo:
                handler->PSendSysMessage("Archipelago: connecting...");
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
};

void AddArchipelagoCommandScripts()
{
    new ArchipelagoCommandScript();
}
