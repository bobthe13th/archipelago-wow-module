// azerothcore-wotlk/modules/archipelago_wow/src/APBotSupport.cpp
#include "APBotSupport.h"

#if defined(AC_MODULE_PLAYERBOTS_AVAILABLE)
#include "Player.h"
#include "PlayerbotAI.h"
#include "PlayerbotMgr.h"
#endif

namespace Archipelago::Bots
{
    bool IsBotControlledPlayer(Player* player)
    {
#if defined(AC_MODULE_PLAYERBOTS_AVAILABLE)
        // The bot-AI lookup lives on the plural PlayerbotsMgr singleton (accessed via the
        // sPlayerbotsMgr macro), not the singular PlayerbotMgr class -- that one is
        // per-player (a real player's recruited bot party) and has no instance() accessor.
        // sPlayerbotsMgr expands to PlayerbotsMgr::instance(), a reference, so this uses
        // '.' rather than the '->' most AzerothCore singleton macros take.
        return player != nullptr && sPlayerbotsMgr.GetPlayerbotAI(player) != nullptr;
#else
        (void)player;
        return false;
#endif
    }
}
