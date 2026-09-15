#include "DayNightPure.h"

namespace Archipelago::DayNight
{
    namespace
    {
        constexpr float STOCK_GAME_SPEED = 0.01666667f;
        constexpr int PERMA_DAY_HOUR = 12;
        constexpr int PERMA_NIGHT_HOUR = 0;
    }

    DayNightState ParseDayNightState(std::string const& modeStr, double speedPercent)
    {
        DayNightState state;
        if (modeStr == "speed_multiplier")
        {
            state.mode = DayNightMode::SpeedMultiplier;
            state.speedMultiplier = static_cast<float>(speedPercent / 100.0);
        }
        else if (modeStr == "perma_day")
        {
            state.mode = DayNightMode::PermaDay;
        }
        else if (modeStr == "perma_night")
        {
            state.mode = DayNightMode::PermaNight;
        }
        else
        {
            state.mode = DayNightMode::Vanilla;
        }
        return state;
    }

    float ResolveGameSpeed(DayNightState const& state)
    {
        switch (state.mode)
        {
            case DayNightMode::SpeedMultiplier:
                return STOCK_GAME_SPEED * state.speedMultiplier;
            case DayNightMode::PermaDay:
            case DayNightMode::PermaNight:
                return 0.0f;
            case DayNightMode::Vanilla:
            default:
                return STOCK_GAME_SPEED;
        }
    }

    std::tm ResolveTimeBreakdown(DayNightState const& state, std::tm liveBreakdown)
    {
        if (state.mode == DayNightMode::PermaDay)
        {
            liveBreakdown.tm_hour = PERMA_DAY_HOUR;
            liveBreakdown.tm_min = 0;
        }
        else if (state.mode == DayNightMode::PermaNight)
        {
            liveBreakdown.tm_hour = PERMA_NIGHT_HOUR;
            liveBreakdown.tm_min = 0;
        }
        return liveBreakdown;
    }
}
