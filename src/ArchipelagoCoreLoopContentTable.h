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

    // M4.9: split into two per-class tracks (standard: every class except
    // Death Knight, levels 1-80; death_knight: Death Knight only, levels
    // 55-80, matching the class's real starting level) -- the level-up hook
    // (ArchipelagoLevelScript.cpp) reads the connecting player's own real
    // class (player->getClass() == CLASS_DEATH_KNIGHT) to pick which one.
    inline std::unordered_map<uint32_t, int64_t> const LEVEL_LOCATIONS_STANDARD = {
        { 1, 710001 },
        { 2, 710002 },
        { 3, 710003 },
        { 4, 710004 },
        { 5, 710005 },
        { 6, 710006 },
        { 7, 710007 },
        { 8, 710008 },
        { 9, 710009 },
        { 10, 710010 },
        { 11, 710011 },
        { 12, 710012 },
        { 13, 710013 },
        { 14, 710014 },
        { 15, 710015 },
        { 16, 710016 },
        { 17, 710017 },
        { 18, 710018 },
        { 19, 710019 },
        { 20, 710020 },
        { 21, 710021 },
        { 22, 710022 },
        { 23, 710023 },
        { 24, 710024 },
        { 25, 710025 },
        { 26, 710026 },
        { 27, 710027 },
        { 28, 710028 },
        { 29, 710029 },
        { 30, 710030 },
        { 31, 710031 },
        { 32, 710032 },
        { 33, 710033 },
        { 34, 710034 },
        { 35, 710035 },
        { 36, 710036 },
        { 37, 710037 },
        { 38, 710038 },
        { 39, 710039 },
        { 40, 710040 },
        { 41, 710041 },
        { 42, 710042 },
        { 43, 710043 },
        { 44, 710044 },
        { 45, 710045 },
        { 46, 710046 },
        { 47, 710047 },
        { 48, 710048 },
        { 49, 710049 },
        { 50, 710050 },
        { 51, 710051 },
        { 52, 710052 },
        { 53, 710053 },
        { 54, 710054 },
        { 55, 710055 },
        { 56, 710056 },
        { 57, 710057 },
        { 58, 710058 },
        { 59, 710059 },
        { 60, 710060 },
        { 61, 710061 },
        { 62, 710062 },
        { 63, 710063 },
        { 64, 710064 },
        { 65, 710065 },
        { 66, 710066 },
        { 67, 710067 },
        { 68, 710068 },
        { 69, 710069 },
        { 70, 710070 },
        { 71, 710071 },
        { 72, 710072 },
        { 73, 710073 },
        { 74, 710074 },
        { 75, 710075 },
        { 76, 710076 },
        { 77, 710077 },
        { 78, 710078 },
        { 79, 710079 },
        { 80, 710080 },
    };

    inline std::unordered_map<uint32_t, int64_t> const LEVEL_LOCATIONS_DEATH_KNIGHT = {
        { 55, 711055 },
        { 56, 711056 },
        { 57, 711057 },
        { 58, 711058 },
        { 59, 711059 },
        { 60, 711060 },
        { 61, 711061 },
        { 62, 711062 },
        { 63, 711063 },
        { 64, 711064 },
        { 65, 711065 },
        { 66, 711066 },
        { 67, 711067 },
        { 68, 711068 },
        { 69, 711069 },
        { 70, 711070 },
        { 71, 711071 },
        { 72, 711072 },
        { 73, 711073 },
        { 74, 711074 },
        { 75, 711075 },
        { 76, 711076 },
        { 77, 711077 },
        { 78, 711078 },
        { 79, 711079 },
        { 80, 711080 },
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
    // the connected seed's instance_clear_mode value (read from slot_data at
    // connect time, not a worldserver.conf setting -- see
    // ArchipelagoInstanceScript.cpp).
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
