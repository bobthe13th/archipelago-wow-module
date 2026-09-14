#include "doctest.h"
#include "DayNightPure.h"

using namespace Archipelago::DayNight;

TEST_CASE("ParseDayNightState: vanilla mode string")
{
    DayNightState state = ParseDayNightState("vanilla", 100.0);
    CHECK(state.mode == DayNightMode::Vanilla);
}

TEST_CASE("ParseDayNightState: speed_multiplier mode carries the percent as a multiplier")
{
    DayNightState state = ParseDayNightState("speed_multiplier", 250.0);
    CHECK(state.mode == DayNightMode::SpeedMultiplier);
    CHECK(state.speedMultiplier == doctest::Approx(2.5f));
}

TEST_CASE("ParseDayNightState: perma_day mode")
{
    DayNightState state = ParseDayNightState("perma_day", 100.0);
    CHECK(state.mode == DayNightMode::PermaDay);
}

TEST_CASE("ParseDayNightState: perma_night mode")
{
    DayNightState state = ParseDayNightState("perma_night", 100.0);
    CHECK(state.mode == DayNightMode::PermaNight);
}

TEST_CASE("ParseDayNightState: unrecognized mode string falls back to vanilla")
{
    DayNightState state = ParseDayNightState("not_a_real_mode", 100.0);
    CHECK(state.mode == DayNightMode::Vanilla);
}

TEST_CASE("ResolveGameSpeed: vanilla returns the stock 0.01666667f constant")
{
    DayNightState state;
    state.mode = DayNightMode::Vanilla;
    CHECK(ResolveGameSpeed(state) == doctest::Approx(0.01666667f));
}

TEST_CASE("ResolveGameSpeed: speed_multiplier scales the stock constant")
{
    DayNightState state;
    state.mode = DayNightMode::SpeedMultiplier;
    state.speedMultiplier = 2.0f;
    CHECK(ResolveGameSpeed(state) == doctest::Approx(0.03333334f));
}

TEST_CASE("ResolveGameSpeed: perma_day and perma_night both freeze speed at 0")
{
    DayNightState day;
    day.mode = DayNightMode::PermaDay;
    CHECK(ResolveGameSpeed(day) == doctest::Approx(0.0f));

    DayNightState night;
    night.mode = DayNightMode::PermaNight;
    CHECK(ResolveGameSpeed(night) == doctest::Approx(0.0f));
}

TEST_CASE("ResolveTimeBreakdown: vanilla and speed_multiplier pass the live breakdown through unchanged")
{
    std::tm live = {};
    live.tm_hour = 17;
    live.tm_min = 42;
    live.tm_mday = 3;

    DayNightState vanilla;
    vanilla.mode = DayNightMode::Vanilla;
    std::tm resolvedVanilla = ResolveTimeBreakdown(vanilla, live);
    CHECK(resolvedVanilla.tm_hour == 17);
    CHECK(resolvedVanilla.tm_min == 42);

    DayNightState multiplier;
    multiplier.mode = DayNightMode::SpeedMultiplier;
    multiplier.speedMultiplier = 3.0f;
    std::tm resolvedMultiplier = ResolveTimeBreakdown(multiplier, live);
    CHECK(resolvedMultiplier.tm_hour == 17);
    CHECK(resolvedMultiplier.tm_min == 42);
}

TEST_CASE("ResolveTimeBreakdown: perma_day pins hour to noon, minute to 0")
{
    std::tm live = {};
    live.tm_hour = 3;
    live.tm_min = 17;
    live.tm_mday = 9;  // day-of-month must survive unchanged -- only hour/min are pinned

    DayNightState state;
    state.mode = DayNightMode::PermaDay;
    std::tm resolved = ResolveTimeBreakdown(state, live);
    CHECK(resolved.tm_hour == 12);
    CHECK(resolved.tm_min == 0);
    CHECK(resolved.tm_mday == 9);
}

TEST_CASE("ResolveTimeBreakdown: perma_night pins hour to midnight, minute to 0")
{
    std::tm live = {};
    live.tm_hour = 15;
    live.tm_min = 22;

    DayNightState state;
    state.mode = DayNightMode::PermaNight;
    std::tm resolved = ResolveTimeBreakdown(state, live);
    CHECK(resolved.tm_hour == 0);
    CHECK(resolved.tm_min == 0);
}
