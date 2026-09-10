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
        return player != nullptr && sPlayerbotMgr->GetPlayerbotAI(player) != nullptr;
#else
        (void)player;
        return false;
#endif
    }
}
