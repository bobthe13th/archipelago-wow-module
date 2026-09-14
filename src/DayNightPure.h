#pragma once

#include <ctime>
#include <string>

namespace Archipelago::DayNight
{
    // M5.6.1: no world-DB row backs the client's day/night clock (it's a
    // hardcoded speed float + a live packed timestamp sent once at login
    // and again on every teleport/map change -- see APWorldState.cpp's own
    // wiring and this plan's Global Constraints). Pure resolution logic
    // lives here, matching this module's established *Pure.h convention
    // (see APWorldStatePure.h), so it's covered by the standalone doctest
    // target even though APWorldState.cpp's own JSON-parsing/boot logic
    // isn't (this module's accepted gap, same shape as ArchipelagoRealmState).
    enum class DayNightMode
    {
        Vanilla,
        SpeedMultiplier,
        PermaDay,
        PermaNight,
    };

    struct DayNightState
    {
        DayNightMode mode = DayNightMode::Vanilla;
        float speedMultiplier = 1.0f;  // only meaningful when mode == SpeedMultiplier
    };

    // modeStr: the resolved mode's option key ("vanilla"/"speed_multiplier"/
    // "perma_day"/"perma_night"), as written into the mutation-data file's
    // "day_night" key by day_night.py. An unrecognized string falls back to
    // Vanilla rather than asserting -- a malformed/future-version mutation
    // file must never crash the boot sequence over this one optional key.
    // speedPercent: only consulted for speed_multiplier (100.0 == 1.0x).
    DayNightState ParseDayNightState(std::string const& modeStr, double speedPercent);

    // The float sent as SMSG_LOGIN_SETTIMESPEED's game-speed field.
    // Vanilla reproduces the stock 0.01666667f constant exactly.
    float ResolveGameSpeed(DayNightState const& state);

    // liveBreakdown: the caller's own Acore::Time::TimeBreakdown() result
    // for the current live game time. Vanilla and SpeedMultiplier pass it
    // through unchanged (only the speed float differs for those two modes);
    // PermaDay/PermaNight pin tm_hour/tm_min to a fixed daytime/nighttime
    // value and leave every other field (date, weekday) untouched, since
    // only hour-of-day drives the client's day/night visual state.
    std::tm ResolveTimeBreakdown(DayNightState const& state, std::tm liveBreakdown);
}
