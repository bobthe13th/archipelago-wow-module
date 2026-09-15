// azerothcore-wotlk/modules/archipelago_wow/src/APBotDecision.h
#pragma once

namespace Archipelago::Bots
{
    // True if the normal (non-bot-aware) behavior should still apply to this
    // player: always true for a real player, and for a bot only when the
    // matching Archipelago.Bots* toggle is on. All four M6.0 bot-awareness
    // config levers (BotsSubjectToGating, BotChecksCount,
    // BotDeathsTriggerDeathLink, BotsReceiveCatchUp) share this exact shape --
    // "off" always means "bots are exempted from this behavior."
    inline bool ShouldApplyToBot(bool isBotControlled, bool toggleEnabled)
    {
        return !isBotControlled || toggleEnabled;
    }
}
