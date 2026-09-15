// azerothcore-wotlk/modules/archipelago_wow/src/APFillerRewardEffectsPure.h
#pragma once

#include <cstdint>

// M4.9.6. Pure, AzerothCore/Player-independent arithmetic helper for
// APFillerRewardEffects.cpp's ApplyXpReward -- unit-testable directly via
// test/test_APFillerRewardEffects.cpp, matching the exact
// Pure-header/tested-vs-untested-impl split APTrapsPure.h already
// established (see that header's own comment for the full reasoning).
// This module's test executable (test/CMakeLists.txt) links no
// AzerothCore game-library headers, so this stays deliberately
// Player-free.
namespace Archipelago::FillerRewardEffects::Pure
{
    // Percent of the player's CURRENT progress toward their next level to
    // grant (design spec's own discrete list: 1/5/10/15/20/25/30/40/50%,
    // now driven by each row's own delivery.param instead of a runtime
    // urand() roll). Returns 0 if nextLvlXp <= curXp (already at max level
    // or malformed state), matching ApplyXpReward's pre-M4.9.6 safe-no-op
    // guard exactly.
    inline uint32_t ComputeXpToGrant(uint32_t curXp, uint32_t nextLvlXp, uint32_t percent)
    {
        if (nextLvlXp <= curXp)
            return 0;
        uint32_t remaining = nextLvlXp - curXp;
        return static_cast<uint32_t>(remaining * percent / 100.0f);
    }
}
