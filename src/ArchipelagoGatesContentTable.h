// GENERATED FILE - do not edit by hand.
// Regenerate with: python modules/archipelago_wow/tools/generate_content.py content/gates.yaml

#pragma once

#include <cstdint>
#include <string>
#include <unordered_map>
#include <utility>

namespace Archipelago::Gates
{
    inline constexpr int64_t AP_ITEM_PROGRESSIVE_RIDING_APPRENTICE = 830000;
    inline constexpr int64_t AP_ITEM_PROGRESSIVE_RIDING_JOURNEYMAN = 830001;
    inline constexpr int64_t AP_ITEM_PROGRESSIVE_RIDING_EXPERT = 830002;
    inline constexpr int64_t AP_ITEM_PROGRESSIVE_RIDING_ARTISAN = 830003;
    inline constexpr int64_t AP_ITEM_PROGRESSIVE_RIDING_COLD_WEATHER_FLYING = 830004;

    inline std::unordered_map<int64_t, std::pair<std::string, uint32_t>> const ApItemToFlagKeyAndTier = {
        { 830000, { "riding", 1 } }, // Progressive Riding: Apprentice
        { 830001, { "riding", 2 } }, // Progressive Riding: Journeyman
        { 830002, { "riding", 3 } }, // Progressive Riding: Expert
        { 830003, { "riding", 4 } }, // Progressive Riding: Artisan
        { 830004, { "riding", 5 } }, // Progressive Riding: Cold Weather Flying
    };
}
