// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoHolidayRoster.h
#pragma once

#include <array>
#include <cstdint>
#include <string_view>

// M4.10.7: the curated Holidaysanity roster (design spec §8a). Hand-written,
// not compiler-generated -- this is small (14 rows), static, editorially
// curated data (which real game_event ids belong to which AP flag, including
// the Darkmoon Faire 3-event and Scourge Invasion master+11-sub-event
// merges), not something an extraction script re-derives from a query. Kept
// in sync with content/holidaysanity.yaml's flag_key values by hand --
// verify_holidaysanity_roster.py checks this data (transcribed into the
// script's own literal, see that file) against live game_event rows, not
// this header directly (no Python/C++ shared-source mechanism exists for a
// hand-written header).
namespace Archipelago::HolidayRoster
{
    struct Entry
    {
        std::string_view flagKey;          // matches content/holidaysanity.yaml's delivery.flag_key
        std::string_view displayName;      // shown in the gossip menu
        std::array<uint16_t, 12> eventIds; // real game_event.eventId values; unused slots are 0
        uint8_t eventIdCount;
        bool requiresComboScopeBoth;       // Task 4's five combo_unlocks_scope-gated holidays
    };

    inline constexpr std::array<Entry, 14> ENTRIES = { {
        { "holiday_midsummer",         "Midsummer Fire Festival", { 1 },                          1,  false },
        { "holiday_hallows_end",       "Hallow's End",            { 12 },                         1,  true  },
        { "holiday_lunar_festival",    "Lunar Festival",          { 7 },                          1,  true  },
        { "holiday_love_is_in_the_air","Love is in the Air",      { 8 },                          1,  false },
        { "holiday_childrens_week",    "Children's Week",         { 10 },                         1,  true  },
        { "holiday_brewfest",          "Brewfest",                { 24 },                         1,  false },
        { "holiday_pilgrims_bounty",   "Pilgrim's Bounty",        { 26 },                         1,  true  },
        { "holiday_winter_veil",       "Winter Veil",             { 2, 52 },                      2,  true  },
        { "holiday_day_of_the_dead",   "Day of the Dead",         { 51 },                         1,  false },
        { "holiday_noblegarden",       "Noblegarden",             { 9 },                          1,  false },
        { "holiday_harvest_festival",  "Harvest Festival",        { 11 },                         1,  false },
        { "holiday_new_years_eve",     "New Year's Eve",          { 6 },                          1,  false },
        { "holiday_darkmoon_faire",    "Darkmoon Faire",          { 3, 4, 5 },                    3,  false },
        { "holiday_scourge_invasion",  "Scourge Invasion",        { 17, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130 }, 12, false },
    } };
}
