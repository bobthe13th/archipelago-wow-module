// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoCommandScript.cpp
#include "Chat.h"
#include "ScriptMgr.h"

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
        handler->PSendSysMessage("Archipelago: module loaded, not yet connected (M1 skeleton).");
        return true;
    }
};

void AddArchipelagoCommandScripts()
{
    new ArchipelagoCommandScript();
}
