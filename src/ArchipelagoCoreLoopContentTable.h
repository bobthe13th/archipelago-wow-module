// GENERATED FILE - do not edit by hand.
// Regenerate with: python modules/archipelago_wow/tools/generate_content.py content/core_loop.yaml

#pragma once

#include <cstdint>
#include <string>
#include <unordered_map>
#include <vector>

namespace Archipelago::CoreLoop
{
    // AP item ids (all int64_t, matching Archipelago::ReceivedItem::item).
    inline constexpr int64_t AP_ITEM_PROGRESSIVE_LEVEL_CAP = 810000;
    inline constexpr int64_t AP_ITEM_INSTANCE_UNLOCK_RAGEFIRE_CHASM = 810001;
    inline constexpr int64_t AP_ITEM_INSTANCE_UNLOCK_DEADMINES = 810002;
    inline constexpr int64_t AP_ITEM_DARK_PORTAL_ACCESS = 810003;
    inline constexpr int64_t AP_ITEM_NORTHREND_PASSAGE = 810004;
    inline constexpr int64_t AP_ITEM_INSTANCE_UNLOCK_MOLTEN_CORE = 810005;
    inline constexpr int64_t AP_ITEM_INSTANCE_UNLOCK_SUNWELL_PLATEAU = 810006;
    inline constexpr int64_t AP_ITEM_INSTANCE_UNLOCK_ICECROWN_CITADEL = 810007;

    inline constexpr uint32_t STARTING_LEVEL_CAP = 10;
    inline constexpr uint32_t LEVEL_CAP_STEP = 5;
    inline constexpr uint32_t SPRINT_GOAL_LEVEL = 60;

    inline std::string const INSTANCE_KEY_RAGEFIRE_CHASM = "ragefire_chasm";
    inline std::string const INSTANCE_KEY_DEADMINES = "deadmines";
    inline std::string const INSTANCE_KEY_MOLTEN_CORE = "molten_core";
    inline std::string const INSTANCE_KEY_SUNWELL_PLATEAU = "sunwell_plateau";
    inline std::string const INSTANCE_KEY_ICECROWN_CITADEL = "icecrown_citadel";

    // Every item whose delivery is realm_state/unlock_instance, keyed by its
    // own AP item id -- a generic map so a new instance_clear row's unlock item
    // needs zero additional C++/Python code to actually unlock anything (found
    // the hard way in Task 23: the 3 new raid unlock items were added to this
    // content table but never wired into ArchipelagoPlayerScript.cpp's delivery
    // dispatch, since that dispatch hardcoded only the original 2 dungeons'
    // item ids -- receiving those items did nothing at all in real play until
    // this generic map replaced the hardcoded blocks).
    inline std::unordered_map<int64_t, std::string> const INSTANCE_UNLOCK_ITEM_TO_KEY = {
        { 810001, INSTANCE_KEY_RAGEFIRE_CHASM },
        { 810002, INSTANCE_KEY_DEADMINES },
        { 810005, INSTANCE_KEY_MOLTEN_CORE },
        { 810006, INSTANCE_KEY_SUNWELL_PLATEAU },
        { 810007, INSTANCE_KEY_ICECROWN_CITADEL },
    };

    inline std::unordered_map<std::string, uint32_t> const INSTANCE_FINAL_BOSS_ENTRY = {
        { INSTANCE_KEY_RAGEFIRE_CHASM, 11520 },
        { INSTANCE_KEY_DEADMINES, 639 },
        { INSTANCE_KEY_MOLTEN_CORE, 11502 },
        { INSTANCE_KEY_SUNWELL_PLATEAU, 25315 },
        { INSTANCE_KEY_ICECROWN_CITADEL, 36597 },
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
        { INSTANCE_KEY_MOLTEN_CORE, 720002 },
        { INSTANCE_KEY_SUNWELL_PLATEAU, 720003 },
        { INSTANCE_KEY_ICECROWN_CITADEL, 720004 },
    };

    // Task 23: only instances whose YAML row carries a `bosses:` sub-list
    // appear here -- Ragefire Chasm/Deadmines are absent, not present with a
    // single-entry vector. Drives all_bosses InstanceClearMode; instances
    // absent from this map always behave as final_boss_only, regardless of
    // the operator's InstanceClearMode setting (see ArchipelagoInstanceScript.cpp).
    inline std::unordered_map<std::string, std::vector<uint32_t>> const INSTANCE_BOSS_ENTRIES = {
        { INSTANCE_KEY_MOLTEN_CORE, { 12118, 11982, 12259, 12057, 12264, 12056, 12098, 11988, 12018, 11502 } },
        { INSTANCE_KEY_SUNWELL_PLATEAU, { 24892, 24882, 25038, 25165, 25166, 25840, 25315 } },
        { INSTANCE_KEY_ICECROWN_CITADEL, { 36612, 36855, 37813, 36626, 36627, 36678, 37972, 37973, 37970, 37955, 36853, 36597 } },
    };

    // Task 24 (Completionist mode): every instance_key with an `expansion:`
    // field on its location row, grouped by that expansion. Not consumed
    // anywhere in the C++ module as of Task 24 (Completionist's validator/
    // completion rule are apworld-only, generation-time logic) -- emitted
    // for parity with the Python side per this task's own Files list.
    inline std::unordered_map<std::string, std::vector<std::string>> const INSTANCES_BY_EXPANSION = {
        { "vanilla", { INSTANCE_KEY_RAGEFIRE_CHASM, INSTANCE_KEY_DEADMINES, INSTANCE_KEY_MOLTEN_CORE } },
        { "tbc", { INSTANCE_KEY_SUNWELL_PLATEAU } },
        { "wotlk", { INSTANCE_KEY_ICECROWN_CITADEL } },
    };
}
