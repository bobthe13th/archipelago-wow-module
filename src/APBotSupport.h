// azerothcore-wotlk/modules/archipelago_wow/src/APBotSupport.h
#pragma once

#include "APBotDecision.h"
#include "ArchipelagoRealmState.h"

class Player;

namespace Archipelago::Bots
{
    // True if `player` is a bot character controlled by mod-playerbots
    // (sPlayerbotMgr->GetPlayerbotAI(player) != nullptr). Always false when
    // this build has no mod-playerbots module present
    // (AC_MODULE_PLAYERBOTS_AVAILABLE undefined, set by archipelago_wow.cmake)
    // -- archipelago_wow must never *require* playerbots to compile or run,
    // only cooperate with it when present.
    bool IsBotControlledPlayer(Player* player);

    // Convenience composition of IsBotControlledPlayer + APBotDecision.h's
    // ShouldApplyToBot against Archipelago.BotChecksCount, used at all
    // location-check-firing hook call sites (every family in the M6.0 design
    // spec's §4 audit, plus ArchipelagoLevelScript.cpp's goal-completion call)
    // since they all share this exact one-liner. The other three M6.0
    // bot-awareness levers (BotsSubjectToGating, BotDeathsTriggerDeathLink,
    // BotsReceiveCatchUp) each have only a handful of call sites and use
    // IsBotControlledPlayer + ShouldApplyToBot directly instead (see
    // APGating.cpp, ArchipelagoDeathLinkScript.cpp, APCatchUp.cpp).
    //
    // Kept `inline` here (rather than in APBotSupport.cpp) so the standalone
    // doctest target -- which compiles APBotSupport.cpp but never links
    // ArchipelagoRealmState.cpp's sArchipelagoRealmState definition -- doesn't
    // need to resolve that symbol: an unused inline function referencing it
    // is never ODR-used by test_APBotSupport.cpp's own test (which only calls
    // IsBotControlledPlayer directly), so it's never emitted or linked there.
    inline bool ShouldRecordLocationCheck(Player* player)
    {
        return ShouldApplyToBot(IsBotControlledPlayer(player), sArchipelagoRealmState->IsBotChecksCountEnabled());
    }
}
