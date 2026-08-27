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
