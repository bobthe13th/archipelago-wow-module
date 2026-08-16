// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoCoreLoopContentTable.h
// HAND-CURATED content table for M2.1 (core loop). Unlike
// ArchipelagoContentTable.h (M2's quest-based content, generated from live
// DB rows), this table has no DB source to generate from -- level-ups and
// progression items aren't rows in acore_world. Keep in sync with
// Archipelago/worlds/wow/core_loop_content_data.py by hand; both must
// agree on every ID below.
#pragma once

#include <cstdint>
#include <string>
#include <unordered_map>

namespace Archipelago::CoreLoop
{
    // AP item ids (all int64_t, matching Archipelago::ReceivedItem::item).
    inline constexpr int64_t AP_ITEM_PROGRESSIVE_LEVEL_CAP = 810000; // 10 copies in the pool, +5 cap each
    inline constexpr int64_t AP_ITEM_INSTANCE_UNLOCK_RAGEFIRE_CHASM = 810001;
    inline constexpr int64_t AP_ITEM_INSTANCE_UNLOCK_DEADMINES = 810002;
    inline constexpr int64_t AP_ITEM_DARK_PORTAL_ACCESS = 810003;
    inline constexpr int64_t AP_ITEM_NORTHREND_PASSAGE = 810004;

    inline constexpr uint32_t STARTING_LEVEL_CAP = 10;
    inline constexpr uint32_t LEVEL_CAP_STEP = 5;
    inline constexpr uint32_t SPRINT_GOAL_LEVEL = 60;

    inline std::string const INSTANCE_KEY_RAGEFIRE_CHASM = "ragefire_chasm";
    inline std::string const INSTANCE_KEY_DEADMINES = "deadmines";

    // Verified live against acore_world during planning (2026-08-16): single
    // entry each, no difficulty variants in this WotLK 3.3.5a dataset.
    inline std::unordered_map<std::string, uint32_t> const INSTANCE_FINAL_BOSS_ENTRY = {
        { INSTANCE_KEY_RAGEFIRE_CHASM, 11520 }, // Taragaman the Hungerer
        { INSTANCE_KEY_DEADMINES, 639 },        // Edwin VanCleef
    };

    // AP location ids for level-up milestones 5,10,...,60 (12 locations).
    inline std::unordered_map<uint32_t, int64_t> const LEVEL_LOCATIONS = {
        { 5, 710000 }, { 10, 710001 }, { 15, 710002 }, { 20, 710003 },
        { 25, 710004 }, { 30, 710005 }, { 35, 710006 }, { 40, 710007 },
        { 45, 710008 }, { 50, 710009 }, { 55, 710010 }, { 60, 710011 },
    };

    // AP location ids for instance-clear checks (2 locations).
    inline std::unordered_map<std::string, int64_t> const INSTANCE_CLEAR_LOCATIONS = {
        { INSTANCE_KEY_RAGEFIRE_CHASM, 720000 },
        { INSTANCE_KEY_DEADMINES, 720001 },
    };
}
