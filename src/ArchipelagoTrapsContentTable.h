// GENERATED FILE - do not edit by hand.
// Regenerate with: python modules/archipelago_wow/tools/generate_content.py content/traps.yaml

#pragma once

#include <cstdint>
#include <string>
#include <unordered_map>
#include <utility>

namespace Archipelago::Traps
{
    inline constexpr int64_t AP_ITEM_TRAP_RANDOM_DEBUFF = 850000;
    inline constexpr int64_t AP_ITEM_TRAP_RANDOM_MOB_SPAWN = 850001;
    inline constexpr int64_t AP_ITEM_TRAP_POLYMORPH = 850002;
    inline constexpr int64_t AP_ITEM_TRAP_HAIRCUT = 850003;
    inline constexpr int64_t AP_ITEM_TRAP_GREY_ITEM_BAG_FILL = 850004;
    inline constexpr int64_t AP_ITEM_TRAP_DURABILITY_DAMAGE = 850005;
    inline constexpr int64_t AP_ITEM_TRAP_RANDOM_WEATHER_BURST = 850006;
    inline constexpr int64_t AP_ITEM_TRAP_RANDOM_TRANSFORM = 850007;
    inline constexpr int64_t AP_ITEM_TRAP_TELEPORT_TO_GRAVEYARD = 850008;
    inline constexpr int64_t AP_ITEM_TRAP_AGGRO_NEARBY = 850009;
    inline constexpr int64_t AP_ITEM_TRAP_FORCED_DANCE = 850010;
    inline constexpr int64_t AP_ITEM_TRAP_TEMPORARY_PVP_FLAG = 850011;
    inline constexpr int64_t AP_ITEM_TRAP_SCREEN_DRUNK = 850012;
    inline constexpr int64_t AP_ITEM_TRAP_DISARM = 850013;
    inline constexpr int64_t AP_ITEM_TRAP_BUFF_STRIP = 850014;
    inline constexpr int64_t AP_ITEM_TRAP_SPAWN_A_RARE_ON_YOU = 850015;
    inline constexpr int64_t AP_ITEM_TRAP_FLOOR_IS_LAVA = 850016;

    // second = effect slug, third = lethal
    inline std::unordered_map<int64_t, std::pair<std::string, bool>> const ApItemToEffectAndLethal = {
        { 850000, { "random_debuff", false } }, // Trap: Random Debuff
        { 850001, { "random_mob_spawn", false } }, // Trap: Random Mob Spawn
        { 850002, { "polymorph", false } }, // Trap: Polymorph
        { 850003, { "haircut", false } }, // Trap: Haircut
        { 850004, { "grey_item_bag_fill", false } }, // Trap: Grey Item Bag Fill
        { 850005, { "durability_damage", false } }, // Trap: Durability Damage
        { 850006, { "random_weather_burst", false } }, // Trap: Random Weather Burst
        { 850007, { "random_transform", false } }, // Trap: Random Transform
        { 850008, { "teleport_to_graveyard", false } }, // Trap: Teleport to Graveyard
        { 850009, { "aggro_nearby", false } }, // Trap: Aggro Nearby
        { 850010, { "forced_dance", false } }, // Trap: Forced Dance
        { 850011, { "temporary_pvp_flag", false } }, // Trap: Temporary PvP Flag
        { 850012, { "screen_drunk", false } }, // Trap: Screen Drunk
        { 850013, { "disarm", false } }, // Trap: Disarm
        { 850014, { "buff_strip", false } }, // Trap: Buff Strip
        { 850015, { "spawn_rare_on_you", true } }, // Trap: Spawn a Rare on You
        { 850016, { "floor_is_lava", true } }, // Trap: Floor is Lava
    };
}
