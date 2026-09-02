// azerothcore-wotlk/modules/archipelago_wow/test/test_ArchipelagoGoalsPure.cpp
#include "doctest.h"
#include "ArchipelagoGoalsPure.h"

using namespace Archipelago::Goals::Pure;

TEST_CASE("IsZoneLevelerComplete is false when no goals are selected at all")
{
    // Important 3 (final whole-branch review): an empty selectedGoals set
    // must fail closed, not vacuously-AND to true -- selectedGoals can be
    // empty at real runtime before the AP client's slot_data has arrived
    // (game_mode is set at worldserver boot, independent of any live
    // connection), and a level-up can occur in that window.
    ZoneLevelerCompletionInput input;
    CHECK(IsZoneLevelerComplete(input) == false);
}

TEST_CASE("reach_zone_level_cap requires enough Progressive Level Cap copies received")
{
    ZoneLevelerCompletionInput input;
    input.selectedGoals = { "reach_zone_level_cap" };
    input.levelCapCopiesRequired = 20;

    input.levelCapCopiesReceived = 19;
    CHECK(IsZoneLevelerComplete(input) == false);

    input.levelCapCopiesReceived = 20;
    CHECK(IsZoneLevelerComplete(input) == true);

    input.levelCapCopiesReceived = 25;
    CHECK(IsZoneLevelerComplete(input) == true);
}

TEST_CASE("reach_zone_level_cap is conservatively unsatisfied when the track total is unknown")
{
    ZoneLevelerCompletionInput input;
    input.selectedGoals = { "reach_zone_level_cap" };
    input.levelCapCopiesReceived = 1000; // even an absurdly high count must not report complete
    // input.levelCapCopiesRequired left as nullopt, e.g. GetZoneLevelerZoneKey()
    // not yet populated / an unrecognized track key.
    CHECK(IsZoneLevelerComplete(input) == false);
}

TEST_CASE("clear_all_zone_quests is always unsatisfied when selected -- deferred gap")
{
    ZoneLevelerCompletionInput input;
    input.selectedGoals = { "clear_all_zone_quests" };
    CHECK(IsZoneLevelerComplete(input) == false);

    // Even with every other goal kind's own condition satisfied, the whole
    // function must still report incomplete while clear_all_zone_quests is
    // selected -- there is no live per-zone check for it yet.
    input.selectedGoals = { "clear_all_zone_quests", "golden_boar_statues" };
    input.statueCount = 999;
    input.statuesRequired = 1;
    CHECK(IsZoneLevelerComplete(input) == false);
}

TEST_CASE("golden_boar_statues requires enough Golden Boar Statue items received")
{
    ZoneLevelerCompletionInput input;
    input.selectedGoals = { "golden_boar_statues" };
    input.statuesRequired = 5;

    input.statueCount = 4;
    CHECK(IsZoneLevelerComplete(input) == false);

    input.statueCount = 5;
    CHECK(IsZoneLevelerComplete(input) == true);
}

TEST_CASE("instance_clears requires enough of the zone's OWN curated instance keys unlocked")
{
    ZoneLevelerCompletionInput input;
    input.selectedGoals = { "instance_clears" };
    input.instanceKeys = { "wailing_caverns", "razorfen_kraul", "razorfen_downs" };
    input.instancesRequired = 2;

    // Only one of the zone's three curated instances unlocked, plus an
    // unrelated instance key that isn't in the zone's own curated list at
    // all (must not count toward the threshold).
    input.unlockedInstanceKeys = { "wailing_caverns", "molten_core" };
    CHECK(IsZoneLevelerComplete(input) == false);

    input.unlockedInstanceKeys = { "wailing_caverns", "razorfen_kraul" };
    CHECK(IsZoneLevelerComplete(input) == true);
}

TEST_CASE("instance_clears with zero required is always satisfied even with nothing unlocked")
{
    ZoneLevelerCompletionInput input;
    input.selectedGoals = { "instance_clears" };
    input.instanceKeys = { "wailing_caverns", "razorfen_kraul", "razorfen_downs" };
    input.instancesRequired = 0;
    CHECK(IsZoneLevelerComplete(input) == true);
}

TEST_CASE("multiple non-deferred goals are AND-ed together")
{
    ZoneLevelerCompletionInput input;
    input.selectedGoals = { "reach_zone_level_cap", "golden_boar_statues", "instance_clears" };
    input.levelCapCopiesRequired = 20;
    input.levelCapCopiesReceived = 20;
    input.statuesRequired = 5;
    input.statueCount = 5;
    input.instanceKeys = { "wailing_caverns" };
    input.instancesRequired = 1;
    input.unlockedInstanceKeys = {}; // instance_clears not yet satisfied

    CHECK(IsZoneLevelerComplete(input) == false);

    input.unlockedInstanceKeys = { "wailing_caverns" };
    CHECK(IsZoneLevelerComplete(input) == true);
}
