// GENERATED FILE - do not edit by hand.
// Regenerate with: python modules/archipelago_wow/tools/generate_content.py content/core_loop.yaml

#pragma once

#include <cstdint>
#include <string>
#include <unordered_map>

namespace Archipelago::CoreLoop
{
    // AP item ids (all int64_t, matching Archipelago::ReceivedItem::item).
    inline constexpr int64_t AP_ITEM_PROGRESSIVE_LEVEL_CAP = 810000;
    inline constexpr int64_t AP_ITEM_INSTANCE_UNLOCK_RAGEFIRE_CHASM = 810001;
    inline constexpr int64_t AP_ITEM_INSTANCE_UNLOCK_DEADMINES = 810002;
    inline constexpr int64_t AP_ITEM_DARK_PORTAL_ACCESS = 810003;
    inline constexpr int64_t AP_ITEM_NORTHREND_PASSAGE = 810004;

    inline constexpr uint32_t STARTING_LEVEL_CAP = 10;
    inline constexpr uint32_t LEVEL_CAP_STEP = 5;
    inline constexpr uint32_t SPRINT_GOAL_LEVEL = 60;

    inline std::string const INSTANCE_KEY_RAGEFIRE_CHASM = "ragefire_chasm";
    inline std::string const INSTANCE_KEY_DEADMINES = "deadmines";

    inline std::unordered_map<std::string, uint32_t> const INSTANCE_FINAL_BOSS_ENTRY = {
        { INSTANCE_KEY_RAGEFIRE_CHASM, 11520 },
        { INSTANCE_KEY_DEADMINES, 639 },
    };

    inline std::unordered_map<uint32_t, int64_t> const LEVEL_LOCATIONS = {
        { 5, 710000 },
        { 10, 710001 },
        { 15, 710002 },
        { 20, 710003 },
        { 25, 710004 },
        { 30, 710005 },
        { 35, 710006 },
        { 40, 710007 },
        { 45, 710008 },
        { 50, 710009 },
        { 55, 710010 },
        { 60, 710011 },
    };

    inline std::unordered_map<std::string, int64_t> const INSTANCE_CLEAR_LOCATIONS = {
        { INSTANCE_KEY_RAGEFIRE_CHASM, 720000 },
        { INSTANCE_KEY_DEADMINES, 720001 },
    };
}
