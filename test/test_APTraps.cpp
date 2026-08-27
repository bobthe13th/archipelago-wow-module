// azerothcore-wotlk/modules/archipelago_wow/test/test_APTraps.cpp
#include "doctest.h"
#include "APTrapsPure.h"

TEST_CASE("APTraps::ComputeSpawnOffsetPositionOffsetsAlongOrientationZero")
{
    auto pos = Archipelago::Traps::Pure::ComputeSpawnOffsetPosition(100.0f, 200.0f, 50.0f, 0.0f, 3.0f);
    CHECK(pos.x == doctest::Approx(103.0f));
    CHECK(pos.y == doctest::Approx(200.0f));
    CHECK(pos.z == doctest::Approx(50.0f));
}

TEST_CASE("APTraps::ComputeSpawnOffsetPositionOffsetsAlongOrientationHalfPi")
{
    auto pos = Archipelago::Traps::Pure::ComputeSpawnOffsetPosition(0.0f, 0.0f, 0.0f, 1.5707963f, 3.0f);
    CHECK(pos.x == doctest::Approx(0.0f).epsilon(0.001));
    CHECK(pos.y == doctest::Approx(3.0f));
}

TEST_CASE("APTraps::ComputeSpawnOffsetPositionZeroDistanceReturnsTheOriginalPoint")
{
    auto pos = Archipelago::Traps::Pure::ComputeSpawnOffsetPosition(10.0f, 20.0f, 30.0f, 2.1f, 0.0f);
    CHECK(pos.x == doctest::Approx(10.0f));
    CHECK(pos.y == doctest::Approx(20.0f));
    CHECK(pos.z == doctest::Approx(30.0f));
}

TEST_CASE("APTraps::RandomMobSpawnCreatureEntryIsTheCuratedChickenTemplate")
{
    // Entry 620, data/sql/base/db_world/creature_template.sql:519 -- see
    // this plan's Global Constraints for the full citation.
    CHECK(Archipelago::Traps::Pure::RANDOM_MOB_SPAWN_CREATURE_ENTRY == 620u);
}

TEST_CASE("APTraps::TemporaryPvpFlagDurationIsSixtySeconds")
{
    CHECK(Archipelago::Traps::Pure::TEMPORARY_PVP_FLAG_DURATION_MS == 60000u);
}

TEST_CASE("APTraps::PickWeatherBurstTypeSelectsFromTheCuratedPool")
{
    CHECK(Archipelago::Traps::Pure::PickWeatherBurstType(0) == 3u); // WEATHER_TYPE_STORM
    CHECK(Archipelago::Traps::Pure::PickWeatherBurstType(1) == 2u); // WEATHER_TYPE_SNOW
}

TEST_CASE("APTraps::PickWeatherBurstTypeWrapsOutOfRangeRolls")
{
    CHECK(Archipelago::Traps::Pure::PickWeatherBurstType(2) == Archipelago::Traps::Pure::PickWeatherBurstType(0));
    CHECK(Archipelago::Traps::Pure::PickWeatherBurstType(3) == Archipelago::Traps::Pure::PickWeatherBurstType(1));
}

TEST_CASE("APTraps::PickDifferentHairStyleNeverReturnsTheCurrentValue")
{
    for (uint8_t current = 0; current < Archipelago::Traps::Pure::HAIRSTYLE_VALUE_COUNT; ++current)
        for (uint8_t roll = 0; roll < Archipelago::Traps::Pure::HAIRSTYLE_VALUE_COUNT - 1; ++roll)
            CHECK(Archipelago::Traps::Pure::PickDifferentHairStyle(current, roll) != current);
}

TEST_CASE("APTraps::PickDifferentHairStyleStaysWithinTheDbcVerifiedSafeRange")
{
    for (uint8_t current = 0; current < Archipelago::Traps::Pure::HAIRSTYLE_VALUE_COUNT; ++current)
        for (uint8_t roll = 0; roll < Archipelago::Traps::Pure::HAIRSTYLE_VALUE_COUNT - 1; ++roll)
            CHECK(Archipelago::Traps::Pure::PickDifferentHairStyle(current, roll) < Archipelago::Traps::Pure::HAIRSTYLE_VALUE_COUNT);
}

TEST_CASE("APTraps::PickDifferentHairStyleHandlesAHighCurrentValueFromARaceWithMoreOptions")
{
    // e.g. a Human female (24 real hairstyle options, CharHairGeosets.dbc
    // RaceID=1/SexID=1) whose CURRENT style (15) is already outside this
    // module's conservative universal-safe range -- must still produce a
    // valid, in-range, different value.
    CHECK(Archipelago::Traps::Pure::PickDifferentHairStyle(15, 3) == 3);
}

TEST_CASE("APTraps::PickDebuffSpellIdSelectsFromTheCuratedPool")
{
    CHECK(Archipelago::Traps::Pure::PickDebuffSpellId(0) == 702u);  // Curse of Weakness (Rank 1)
    CHECK(Archipelago::Traps::Pure::PickDebuffSpellId(1) == 1714u); // Curse of Tongues (Rank 1)
}

TEST_CASE("APTraps::PickDebuffSpellIdWrapsOutOfRangeRolls")
{
    CHECK(Archipelago::Traps::Pure::PickDebuffSpellId(2) == Archipelago::Traps::Pure::PickDebuffSpellId(0));
}

TEST_CASE("APTraps::RandomTransformDisplayIdIsTheCuratedChickenModel")
{
    // Display id 304, creature_template_model.sql:489 (CreatureID=620, the
    // same "Chicken" template ApplyRandomMobSpawn spawns) -- see this
    // plan's Global Constraints.
    CHECK(Archipelago::Traps::Pure::RANDOM_TRANSFORM_DISPLAY_ID == 304u);
}

TEST_CASE("APTraps::RandomTransformDurationIsNinetySeconds")
{
    CHECK(Archipelago::Traps::Pure::RANDOM_TRANSFORM_DURATION_MS == 90000u);
}

TEST_CASE("APTraps::ClampAggroCountReturnsFoundCountWhenUnderTheCap")
{
    CHECK(Archipelago::Traps::Pure::ClampAggroCount(3, 8) == 3u);
}

TEST_CASE("APTraps::ClampAggroCountCapsAtTheMaximum")
{
    CHECK(Archipelago::Traps::Pure::ClampAggroCount(50, 8) == 8u);
}

TEST_CASE("APTraps::ClampAggroCountReturnsZeroWhenNothingWasFound")
{
    CHECK(Archipelago::Traps::Pure::ClampAggroCount(0, 8) == 0u);
}

TEST_CASE("APTraps::SpawnRareOnYouCreatureEntryIsTheCuratedHoggerTemplate")
{
    // Entry 448, data/sql/base/db_world/creature_template.sql:392 -- see
    // this plan's Global Constraints for the full citation (rank=1 Elite,
    // HealthModifier=3, DamageModifier=1.7, real SmartAI abilities).
    CHECK(Archipelago::Traps::Pure::SPAWN_RARE_ON_YOU_CREATURE_ENTRY == 448u);
}

TEST_CASE("APTraps::SpawnRareOnYouSpawnPositionUsesTheSharedOffsetHelper")
{
    auto pos = Archipelago::Traps::Pure::ComputeSpawnOffsetPosition(
        0.0f, 0.0f, 0.0f, 0.0f, Archipelago::Traps::Pure::SPAWN_RARE_ON_YOU_DISTANCE_YARDS);
    CHECK(pos.x == doctest::Approx(Archipelago::Traps::Pure::SPAWN_RARE_ON_YOU_DISTANCE_YARDS));
    CHECK(pos.y == doctest::Approx(0.0f));
}

TEST_CASE("APTraps::ComputeTickDamageIsTenPercentOfMaxHealth")
{
    CHECK(Archipelago::Traps::Pure::ComputeTickDamage(1000, 10) == 100u);
}

TEST_CASE("APTraps::ComputeTickDamageFloorsAtOneForVeryLowMaxHealth")
{
    CHECK(Archipelago::Traps::Pure::ComputeTickDamage(5, 10) == 1u);
}

TEST_CASE("APTraps::FloorIsLavaConstantsMatchTheDesignedFiveSecondBurst")
{
    CHECK(Archipelago::Traps::Pure::FLOOR_IS_LAVA_TICK_COUNT == 5u);
    CHECK(Archipelago::Traps::Pure::FLOOR_IS_LAVA_TICK_INTERVAL_MS == 1000u);
    CHECK(Archipelago::Traps::Pure::FLOOR_IS_LAVA_TICK_PERCENT == 10u);
}
