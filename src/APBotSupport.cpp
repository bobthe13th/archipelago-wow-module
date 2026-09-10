// azerothcore-wotlk/modules/archipelago_wow/src/APBotSupport.cpp
#include "APBotSupport.h"

#if defined(AC_MODULE_PLAYERBOTS_AVAILABLE)
#include "Player.h"
#include "PlayerbotAI.h"
#include "PlayerbotAIConfig.h"
#include "PlayerbotMgr.h"
#include "WorldSession.h"
#endif

namespace Archipelago::Bots
{
    bool IsBotControlledPlayer(Player* player)
    {
#if defined(AC_MODULE_PLAYERBOTS_AVAILABLE)
        if (player == nullptr)
            return false;

        // The bot-AI lookup lives on the plural PlayerbotsMgr singleton (accessed via the
        // sPlayerbotsMgr macro), not the singular PlayerbotMgr class -- that one is
        // per-player (a real player's recruited bot party) and has no instance() accessor.
        // sPlayerbotsMgr expands to PlayerbotsMgr::instance(), a reference, so this uses
        // '.' rather than the '->' most AzerothCore singleton macros take. Correctly
        // recognizes a live-recruited party bot (confirmed via a real e2e test,
        // 2026-09-10): recruiting one via `.playerbots bot add` records zero new
        // location checks with BotChecksCount off.
        if (sPlayerbotsMgr.GetPlayerbotAI(player) != nullptr)
            return true;

        // Root-cause-traced gap (M6.0, confirmed live 2026-09-10): the live-AI check
        // above misses mod-playerbots' bulk random-bot roster creation at server boot
        // (RandomPlayerbotFactory::CreateRandomBots(), see
        // modules/mod-playerbots/src/Bot/Factory/RandomPlayerbotFactory.cpp). That code
        // calls the same shared AzerothCore engine functions used by real character
        // creation (Player::Create, Player::learnSpell, ...) on a freshly-constructed
        // Player/WorldSession that has no PlayerbotAI attached yet -- attachment only
        // happens later, at actual bot login, a separate event. Falling back to an
        // account-level signal catches this window too: sPlayerbotAIConfig's
        // randomBotAccounts list is populated for an account (RandomPlayerbotFactory.cpp's
        // own push_back) *before* that account's characters are created, in the same
        // per-account loop iteration -- confirmed by reading the loop directly -- so this
        // is reliably true by the time these hooks fire. Does not cover a real player's
        // own account running self-bots (AiPlayerbot.AllowAccountBots) -- those are
        // correctly identified by the live-AI check above once actually spawned, and
        // were never part of this gap.
        if (WorldSession* session = player->GetSession())
            if (sPlayerbotAIConfig.IsInRandomAccountList(session->GetAccountId()))
                return true;

        return false;
#else
        (void)player;
        return false;
#endif
    }
}
