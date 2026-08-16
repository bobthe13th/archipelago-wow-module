// GENERATED FILE - do not edit by hand.
// Regenerate with: python modules/archipelago_wow/tools/generate_content.py
#pragma once

#include <cstdint>
#include <unordered_map>

namespace Archipelago::Content
{
    inline std::unordered_map<uint32_t, int64_t> const QuestIdToLocationId = {
        { 783, 700000 }, // A Threat Within
        { 3100, 700001 }, // Simple Letter
        { 3101, 700002 }, // Consecrated Letter
        { 3102, 700003 }, // Encrypted Letter
        { 3103, 700004 }, // Hallowed Letter
        { 3104, 700005 }, // Glyphic Letter
        { 3105, 700006 }, // Tainted Letter
        { 5261, 700007 }, // Eagan Peltskinner
        { 7, 700008 }, // Kobold Camp Cleanup
        { 33, 700009 }, // Wolves Across the Border
        { 15, 700010 }, // Investigate Echo Ridge
        { 18, 700011 }, // Brotherhood of Thieves
        { 3903, 700012 }, // Milly Osworth
        { 5623, 700013 }, // In Favor of the Light
        { 3904, 700014 }, // Milly's Harvest
        { 3905, 700015 }, // Grape Manifest
        { 6, 700016 }, // Bounty on Garrick Padfoot
        { 21, 700017 }, // Skirmish at Echo Ridge
        { 54, 700018 }, // Report to Goldshire
    };

    inline std::unordered_map<int64_t, uint32_t> const LocationIdToQuestId = {
        { 700000, 783 }, // A Threat Within
        { 700001, 3100 }, // Simple Letter
        { 700002, 3101 }, // Consecrated Letter
        { 700003, 3102 }, // Encrypted Letter
        { 700004, 3103 }, // Hallowed Letter
        { 700005, 3104 }, // Glyphic Letter
        { 700006, 3105 }, // Tainted Letter
        { 700007, 5261 }, // Eagan Peltskinner
        { 700008, 7 }, // Kobold Camp Cleanup
        { 700009, 33 }, // Wolves Across the Border
        { 700010, 15 }, // Investigate Echo Ridge
        { 700011, 18 }, // Brotherhood of Thieves
        { 700012, 3903 }, // Milly Osworth
        { 700013, 5623 }, // In Favor of the Light
        { 700014, 3904 }, // Milly's Harvest
        { 700015, 3905 }, // Grape Manifest
        { 700016, 6 }, // Bounty on Garrick Padfoot
        { 700017, 21 }, // Skirmish at Echo Ridge
        { 700018, 54 }, // Report to Goldshire
    };

    inline std::unordered_map<int64_t, uint32_t> const ApItemIdToWowItemEntry = {
        { 800000, 25 }, // "Worn Shortsword"
        { 800001, 35 }, // "Bent Staff"
        { 800002, 36 }, // "Worn Mace"
        { 800003, 37 }, // "Worn Axe"
        { 800004, 38 }, // "Recruit's Shirt"
        { 800005, 40 }, // "Recruit's Boots"
        { 800006, 41 }, // "OLDRecruit's Belt"
        { 800007, 42 }, // "OLDSquire's Belt"
        { 800008, 43 }, // "Squire's Boots"
        { 800009, 45 }, // "Squire's Shirt"
        { 800010, 46 }, // "OLDFootpad's Belt"
        { 800011, 47 }, // "Footpad's Shoes"
        { 800012, 49 }, // "Footpad's Shirt"
        { 800013, 50 }, // "OLDInitiate's Belt"
        { 800014, 51 }, // "Neophyte's Boots"
        { 800015, 53 }, // "Neophyte's Shirt"
        { 800016, 54 }, // "OLDNovice's Belt"
        { 800017, 55 }, // "Apprentice's Boots"
        { 800018, 58 }, // "OLDAcolyte's Belt"
    };
}
