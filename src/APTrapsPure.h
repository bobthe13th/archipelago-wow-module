// azerothcore-wotlk/modules/archipelago_wow/src/APTrapsPure.h
#pragma once

#include <array>
#include <cmath>
#include <cstdint>

// M4.9 Sec1 (traps' 9 remaining effects). Pure, AzerothCore/Player-
// independent selection and arithmetic helpers for APTraps.cpp's Apply*
// functions -- unit-testable directly via test/test_APTraps.cpp, matching
// the exact split APItemDisplay.h already established (PickRewardColumn/
// RewardColumnsToRewrite, tested; the real DB rewrite in APItemDisplay.cpp,
// untested). This module's test executable (test/CMakeLists.txt) links
// ONLY APProtocol.cpp/APInterception.cpp -- no AzerothCore game-library
// headers -- so nothing that touches a real Player* can be exercised there;
// everything in this header is deliberately Player-free. See the M4.9.1
// plan's Global Constraints for the full reasoning.
namespace Archipelago::Traps::Pure
{
    struct Position3D
    {
        float x;
        float y;
        float z;
    };

    // Given a unit's current position/orientation, returns a point
    // `distance` yards in front of them -- spawning exactly on top of the
    // player (distance 0) can place the new creature inside the player's
    // own collision box. Used by ApplyRandomMobSpawn (this task) and
    // ApplySpawnRareOnYou (Task 8).
    inline Position3D ComputeSpawnOffsetPosition(float x, float y, float z, float orientation, float distance)
    {
        return Position3D{
            x + distance * std::cos(orientation),
            y + distance * std::sin(orientation),
            z
        };
    }

    // Entry 620 "Chicken": a real, harmless CREATURE_TYPE_CRITTER template.
    // See this plan's Global Constraints for the full citation (minlevel=
    // maxlevel=1, rank=0 Normal, type=8 CREATURE_TYPE_CRITTER -- critters
    // cannot enter combat).
    inline constexpr uint32_t RANDOM_MOB_SPAWN_CREATURE_ENTRY = 620;
    inline constexpr uint32_t RANDOM_MOB_SPAWN_DESPAWN_MS = 120000; // 2 minutes
    inline constexpr float RANDOM_MOB_SPAWN_DISTANCE_YARDS = 3.0f;

    // Player::UpdatePvP's real effect lasts until explicitly reverted --
    // this is the fixed duration this plan reverts it after.
    inline constexpr uint32_t TEMPORARY_PVP_FLAG_DURATION_MS = 60000; // 60 seconds

    // Raw WeatherType numeric values (SharedDefines.h), kept as plain
    // uint32_t here rather than pulling SharedDefines.h into this
    // deliberately AzerothCore-free header -- WEATHER_TYPE_STORM=3,
    // WEATHER_TYPE_SNOW=2 (real, confirmed values). APTraps.cpp casts the
    // picked value back to the real WeatherType enum.
    inline constexpr std::array<uint32_t, 2> WEATHER_BURST_TYPE_POOL = { 3, 2 };

    // Weather::GetWeatherState() (Weather.cpp:281) treats any grade below
    // 0.27 as indistinguishable from "fine" (no visible effect) -- 1.0f
    // (max intensity) is used so a "burst" is never invisible.
    inline constexpr float WEATHER_BURST_GRADE = 1.0f;

    inline uint32_t PickWeatherBurstType(uint32_t roll)
    {
        return WEATHER_BURST_TYPE_POOL[roll % WEATHER_BURST_TYPE_POOL.size()];
    }
}
