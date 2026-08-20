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
    inline constexpr int64_t AP_ITEM_FLIGHT_UNLOCK_OUTLAND = 830005;
    inline constexpr int64_t AP_ITEM_FLIGHT_UNLOCK_NORTHREND = 830006;
    inline constexpr int64_t AP_ITEM_ARMOR_PROFICIENCY_PLATE = 830007;
    inline constexpr int64_t AP_ITEM_ARMOR_PROFICIENCY_MAIL = 830008;
    inline constexpr int64_t AP_ITEM_ARMOR_PROFICIENCY_LEATHER = 830009;
    inline constexpr int64_t AP_ITEM_WEAPON_PROFICIENCY_TWO-HANDED_SWORDS = 830010;
    inline constexpr int64_t AP_ITEM_WEAPON_PROFICIENCY_AXES = 830011;
    inline constexpr int64_t AP_ITEM_WEAPON_PROFICIENCY_MACES = 830012;
    inline constexpr int64_t AP_ITEM_WEAPON_PROFICIENCY_STAVES = 830013;
    inline constexpr int64_t AP_ITEM_WEAPON_PROFICIENCY_WANDS = 830014;
    inline constexpr int64_t AP_ITEM_AUCTION_HOUSE_ACCESS = 830015;
    inline constexpr int64_t AP_ITEM_HEARTHSTONE_ACCESS = 830016;
    inline constexpr int64_t AP_ITEM_MAILBOX_ACCESS = 830017;

    inline std::unordered_map<int64_t, std::pair<std::string, uint32_t>> const ApItemToFlagKeyAndTier = {
        { 830000, { "riding", 1 } }, // Progressive Riding: Apprentice
        { 830001, { "riding", 2 } }, // Progressive Riding: Journeyman
        { 830002, { "riding", 3 } }, // Progressive Riding: Expert
        { 830003, { "riding", 4 } }, // Progressive Riding: Artisan
        { 830004, { "riding", 5 } }, // Progressive Riding: Cold Weather Flying
        { 830005, { "flight", 1 } }, // Flight Unlock: Outland
        { 830006, { "flight", 2 } }, // Flight Unlock: Northrend
        { 830007, { "proficiency_armor_plate", 1 } }, // Armor Proficiency: Plate
        { 830008, { "proficiency_armor_mail", 1 } }, // Armor Proficiency: Mail
        { 830009, { "proficiency_armor_leather", 1 } }, // Armor Proficiency: Leather
        { 830010, { "proficiency_weapon_2h_sword", 1 } }, // Weapon Proficiency: Two-Handed Swords
        { 830011, { "proficiency_weapon_axe", 1 } }, // Weapon Proficiency: Axes
        { 830012, { "proficiency_weapon_mace", 1 } }, // Weapon Proficiency: Maces
        { 830013, { "proficiency_weapon_staff", 1 } }, // Weapon Proficiency: Staves
        { 830014, { "proficiency_weapon_wand", 1 } }, // Weapon Proficiency: Wands
        { 830015, { "access_auction_house", 1 } }, // Auction House Access
        { 830016, { "access_hearth", 1 } }, // Hearthstone Access
        { 830017, { "access_mailbox", 1 } }, // Mailbox Access
    };
}
