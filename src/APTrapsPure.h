// azerothcore-wotlk/modules/archipelago_wow/src/APTrapsPure.h
#pragma once

#include <array>
#include <cmath>
#include <cstddef>
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

    // CharHairGeosets.dbc VariationID range confirmed safe (0-9 inclusive)
    // for EVERY playable race/gender combination in this checkout's real
    // var/extractors/dbc/CharHairGeosets.dbc -- the minimum (RaceID=8
    // Troll, SexID=1 Female) has exactly 10 real VariationID rows (0-9).
    // See this plan's Global Constraints for the exact parse used to
    // confirm this.
    inline constexpr uint8_t HAIRSTYLE_VALUE_COUNT = 10;

    // Deterministically picks a value in [0, HAIRSTYLE_VALUE_COUNT) that is
    // guaranteed different from `current`, given `roll` in
    // [0, HAIRSTYLE_VALUE_COUNT - 2]. Works correctly even when `current`
    // is itself outside the safe range (some races have far more than 10
    // real hairstyle options, e.g. Human female has 24) -- in that case
    // every candidate in [0, HAIRSTYLE_VALUE_COUNT) is automatically <
    // current, so the "skip current" branch is simply never taken.
    inline uint8_t PickDifferentHairStyle(uint8_t current, uint8_t roll)
    {
        return roll < current ? roll : static_cast<uint8_t>(roll + 1);
    }

    // Curated pool of 2 real, non-lethal debuff spells, confirmed against
    // this checkout's own var/extractors/dbc/Spell.dbc (see this plan's
    // Global Constraints for the exact field-136 SpellName_lang decode used
    // to confirm both): spell 702 "Curse of Weakness" (Rank 1) and spell
    // 1714 "Curse of Tongues" (Rank 1, also independently in-tree cited at
    // src/server/scripts/EasternKingdoms/Karazhan/boss_shade_of_aran.cpp:79
    // as SPELL_CURSE_OF_TONGUE_RANK1). Both are pure debuffs (damage-dealt
    // reduction / cast-speed reduction) with no direct-damage component --
    // deliberately kept to just these two rather than padding the pool with
    // additional unverified ids.
    inline constexpr std::array<uint32_t, 2> DEBUFF_SPELL_POOL = { 702, 1714 };

    inline uint32_t PickDebuffSpellId(uint32_t roll)
    {
        return DEBUFF_SPELL_POOL[roll % DEBUFF_SPELL_POOL.size()];
    }

    // Display id 304: the Chicken model (creature_template_model.sql:489,
    // CreatureID=620 -- the same real "Chicken" template
    // RANDOM_MOB_SPAWN_CREATURE_ENTRY spawns, Idx=0, Probability=1, so this
    // is its one and only real model) -- reusing an already-curated,
    // already-cited harmless model rather than curating a second one from
    // scratch.
    inline constexpr uint32_t RANDOM_TRANSFORM_DISPLAY_ID = 304;
    inline constexpr uint32_t RANDOM_TRANSFORM_DURATION_MS = 90000; // 90 seconds

    inline constexpr float AGGRO_NEARBY_RADIUS_YARDS = 20.0f;
    inline constexpr size_t AGGRO_NEARBY_MAX_ENGAGED = 8;

    inline size_t ClampAggroCount(size_t found, size_t cap)
    {
        return found < cap ? found : cap;
    }
}
