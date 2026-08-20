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
    inline constexpr int64_t AP_ITEM_PROGRESSIVE_BANK_BAG_SLOT_SLOT_1 = 830018;
    inline constexpr int64_t AP_ITEM_PROGRESSIVE_BANK_BAG_SLOT_SLOT_2 = 830019;
    inline constexpr int64_t AP_ITEM_PROGRESSIVE_BANK_BAG_SLOT_SLOT_3 = 830020;
    inline constexpr int64_t AP_ITEM_PROGRESSIVE_BANK_BAG_SLOT_SLOT_4 = 830021;
    inline constexpr int64_t AP_ITEM_PROGRESSIVE_BANK_BAG_SLOT_SLOT_5 = 830022;
    inline constexpr int64_t AP_ITEM_PROGRESSIVE_BANK_BAG_SLOT_SLOT_6 = 830023;
    inline constexpr int64_t AP_ITEM_PROGRESSIVE_BANK_BAG_SLOT_SLOT_7 = 830024;
    inline constexpr int64_t AP_ITEM_TALENT_POINT_ACCESS = 830025;
    inline constexpr int64_t AP_ITEM_DUAL_SPEC_UNLOCK = 830026;
    inline constexpr int64_t AP_ITEM_TBC_COMBO_UNLOCK = 830027;
    inline constexpr int64_t AP_ITEM_WOTLK_COMBO_UNLOCK = 830028;

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
        { 830018, { "bank_bag_slots", 1 } }, // Progressive Bank Bag Slot: Slot 1
        { 830019, { "bank_bag_slots", 2 } }, // Progressive Bank Bag Slot: Slot 2
        { 830020, { "bank_bag_slots", 3 } }, // Progressive Bank Bag Slot: Slot 3
        { 830021, { "bank_bag_slots", 4 } }, // Progressive Bank Bag Slot: Slot 4
        { 830022, { "bank_bag_slots", 5 } }, // Progressive Bank Bag Slot: Slot 5
        { 830023, { "bank_bag_slots", 6 } }, // Progressive Bank Bag Slot: Slot 6
        { 830024, { "bank_bag_slots", 7 } }, // Progressive Bank Bag Slot: Slot 7
        { 830025, { "access_talent_points", 1 } }, // Talent Point Access
        { 830026, { "dual_spec", 1 } }, // Dual Spec Unlock
        { 830027, { "combo_unlock_tbc", 1 } }, // TBC Combo Unlock
        { 830028, { "combo_unlock_wotlk", 1 } }, // WotLK Combo Unlock
    };
}
