// GENERATED FILE - do not edit by hand.
// Regenerate with: python modules/archipelago_wow/tools/generate_content.py content/fish.yaml

#pragma once

#include <cstdint>
#include <unordered_map>

namespace Archipelago::Fish
{
    // wow_item_entry (the real item a catch produces) -> its own location id.
    // Consumed by the loot hook (ArchipelagoLootScript.cpp) to detect a catch.
    inline std::unordered_map<uint32_t, int64_t> const ItemEntryToLocationId = {
        { 27422, 760000 }, // Fish Catch: Barbed Gill Trout
        { 41812, 760001 }, // Fish Catch: Barrelhead Goby
        { 33823, 760002 }, // Fish Catch: Bloodfin Catfish
        { 41808, 760003 }, // Fish Catch: Bonescale Snapper
        { 41805, 760004 }, // Fish Catch: Borean Man O' War
        { 33824, 760005 }, // Fish Catch: Crescent-Tail Skullfish
        { 13888, 760006 }, // Fish Catch: Darkclaw Lobster
        { 41800, 760007 }, // Fish Catch: Deep Sea Monsterbelly
        { 41807, 760008 }, // Fish Catch: Dragonfin Angelfish
        { 27516, 760009 }, // Fish Catch: Enormous Barbed Gill Trout
        { 41810, 760010 }, // Fish Catch: Fangtooth Herring
        { 27435, 760011 }, // Fish Catch: Figluster's Mudfish
        { 43646, 760012 }, // Fish Catch: Fountain Goldfish
        { 35285, 760013 }, // Fish Catch: Giant Sunfish
        { 41809, 760014 }, // Fish Catch: Glacial Salmon
        { 41814, 760015 }, // Fish Catch: Glassfin Minnow
        { 27438, 760016 }, // Fish Catch: Golden Darter
        { 27515, 760017 }, // Fish Catch: Huge Spotted Feltail
        { 27437, 760018 }, // Fish Catch: Icefin Bluefish
        { 41802, 760019 }, // Fish Catch: Imperial Manta Ray
        { 43572, 760020 }, // Fish Catch: Magic Eater
        { 41801, 760021 }, // Fish Catch: Moonglow Cuttlefish
        { 41806, 760022 }, // Fish Catch: Musselback Sculpin
        { 41813, 760023 }, // Fish Catch: Nettlefish
        { 13890, 760024 }, // Fish Catch: Plated Armorfish
        { 6291, 760025 }, // Fish Catch: Raw Brilliant Smallfish
        { 6308, 760026 }, // Fish Catch: Raw Bristle Whisker Catfish
        { 13754, 760027 }, // Fish Catch: Raw Glossy Mightfish
        { 6317, 760028 }, // Fish Catch: Raw Loch Frenzy
        { 6289, 760029 }, // Fish Catch: Raw Longjaw Mud Snapper
        { 8365, 760030 }, // Fish Catch: Raw Mithril Head Trout
        { 13759, 760031 }, // Fish Catch: Raw Nightfin Snapper
        { 6361, 760032 }, // Fish Catch: Raw Rainbow Fin Albacore
        { 13758, 760033 }, // Fish Catch: Raw Redgill
        { 6362, 760034 }, // Fish Catch: Raw Rockscale Cod
        { 6303, 760035 }, // Fish Catch: Raw Slitherskin Mackerel
        { 4603, 760036 }, // Fish Catch: Raw Spotted Yellowtail
        { 13756, 760037 }, // Fish Catch: Raw Summer Bass
        { 13760, 760038 }, // Fish Catch: Raw Sunscale Salmon
        { 13889, 760039 }, // Fish Catch: Raw Whitescale Salmon
        { 41803, 760040 }, // Fish Catch: Rockfin Grouper
        { 43571, 760041 }, // Fish Catch: Sewer Carp
        { 43647, 760042 }, // Fish Catch: Shimmering Minnow
        { 43652, 760043 }, // Fish Catch: Slippery Eel
        { 27425, 760044 }, // Fish Catch: Spotted Feltail
        { 27429, 760045 }, // Fish Catch: Zangarian Sporefish
    };

    // AP item id -> the real wow_item_entry to mail -- this family's own
    // self-contained mail-delivery table (the `mail` delivery kind), kept
    // separate from every other family's table so each compiled family
    // stays self-contained.
    inline std::unordered_map<int64_t, uint32_t> const ApItemIdToWowItemEntry = {
        { 860000, 27422 }, // "Fish: Barbed Gill Trout"
        { 860001, 41812 }, // "Fish: Barrelhead Goby"
        { 860002, 33823 }, // "Fish: Bloodfin Catfish"
        { 860003, 41808 }, // "Fish: Bonescale Snapper"
        { 860004, 41805 }, // "Fish: Borean Man O' War"
        { 860005, 33824 }, // "Fish: Crescent-Tail Skullfish"
        { 860006, 13888 }, // "Fish: Darkclaw Lobster"
        { 860007, 41800 }, // "Fish: Deep Sea Monsterbelly"
        { 860008, 41807 }, // "Fish: Dragonfin Angelfish"
        { 860009, 27516 }, // "Fish: Enormous Barbed Gill Trout"
        { 860010, 41810 }, // "Fish: Fangtooth Herring"
        { 860011, 27435 }, // "Fish: Figluster's Mudfish"
        { 860012, 43646 }, // "Fish: Fountain Goldfish"
        { 860013, 35285 }, // "Fish: Giant Sunfish"
        { 860014, 41809 }, // "Fish: Glacial Salmon"
        { 860015, 41814 }, // "Fish: Glassfin Minnow"
        { 860016, 27438 }, // "Fish: Golden Darter"
        { 860017, 27515 }, // "Fish: Huge Spotted Feltail"
        { 860018, 27437 }, // "Fish: Icefin Bluefish"
        { 860019, 41802 }, // "Fish: Imperial Manta Ray"
        { 860020, 43572 }, // "Fish: Magic Eater"
        { 860021, 41801 }, // "Fish: Moonglow Cuttlefish"
        { 860022, 41806 }, // "Fish: Musselback Sculpin"
        { 860023, 41813 }, // "Fish: Nettlefish"
        { 860024, 13890 }, // "Fish: Plated Armorfish"
        { 860025, 6291 }, // "Fish: Raw Brilliant Smallfish"
        { 860026, 6308 }, // "Fish: Raw Bristle Whisker Catfish"
        { 860027, 13754 }, // "Fish: Raw Glossy Mightfish"
        { 860028, 6317 }, // "Fish: Raw Loch Frenzy"
        { 860029, 6289 }, // "Fish: Raw Longjaw Mud Snapper"
        { 860030, 8365 }, // "Fish: Raw Mithril Head Trout"
        { 860031, 13759 }, // "Fish: Raw Nightfin Snapper"
        { 860032, 6361 }, // "Fish: Raw Rainbow Fin Albacore"
        { 860033, 13758 }, // "Fish: Raw Redgill"
        { 860034, 6362 }, // "Fish: Raw Rockscale Cod"
        { 860035, 6303 }, // "Fish: Raw Slitherskin Mackerel"
        { 860036, 4603 }, // "Fish: Raw Spotted Yellowtail"
        { 860037, 13756 }, // "Fish: Raw Summer Bass"
        { 860038, 13760 }, // "Fish: Raw Sunscale Salmon"
        { 860039, 13889 }, // "Fish: Raw Whitescale Salmon"
        { 860040, 41803 }, // "Fish: Rockfin Grouper"
        { 860041, 43571 }, // "Fish: Sewer Carp"
        { 860042, 43647 }, // "Fish: Shimmering Minnow"
        { 860043, 43652 }, // "Fish: Slippery Eel"
        { 860044, 27425 }, // "Fish: Spotted Feltail"
        { 860045, 27429 }, // "Fish: Zangarian Sporefish"
    };
}
