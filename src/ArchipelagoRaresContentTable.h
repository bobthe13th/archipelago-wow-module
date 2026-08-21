// GENERATED FILE - do not edit by hand.
// Regenerate with: python modules/archipelago_wow/tools/generate_content.py content/rares.yaml

#pragma once

#include <cstdint>
#include <unordered_map>

namespace Archipelago::Rares
{
    // AP item ids (all int64_t, matching Archipelago::ReceivedItem::item).
    inline constexpr int64_t AP_ITEM_KEY_HUNT_KEY = 830029;

    // Every curated rare's real creature entry -> its own location id.
    // Sent unconditionally on a matching kill, same as every other
    // location-check table in this module -- a given generation may not
    // have sampled every one of these 40 into its actual location pool
    // (see rares.yaml's own header comment on density sampling), but the
    // AP server silently ignores a location id outside a slot's actual
    // location table (the same MultiServer.py behavior Task 11's filler
    // fix already relies on), so sending the full set is safe regardless.
    inline std::unordered_map<uint32_t, int64_t> const CreatureEntryToLocationId = {
        { 1531, 730000 }, // Rare Kill: Lost Soul
        { 5786, 730001 }, // Rare Kill: Snagglespear
        { 99, 730002 }, // Rare Kill: Morgaine the Sly
        { 5785, 730003 }, // Rare Kill: Sister Hatelash
        { 1130, 730004 }, // Rare Kill: Bjarn
        { 1425, 730005 }, // Rare Kill: Grizlak
        { 2186, 730006 }, // Rare Kill: Carnivous the Breaker
        { 22062, 730007 }, // Rare Kill: Dr. Whitherlimb
        { 5836, 730008 }, // Rare Kill: Engineer Whirleygig
        { 1399, 730009 }, // Rare Kill: Magosh
        { 5932, 730010 }, // Rare Kill: Taskmaster Whipfang
        { 616, 730011 }, // Rare Kill: Chatter
        { 1112, 730012 }, // Rare Kill: Leech Widow
        { 10641, 730013 }, // Rare Kill: Branch Snapper
        { 584, 730014 }, // Rare Kill: Kazon
        { 5915, 730015 }, // Rare Kill: Brother Ravenoak
        { 771, 730016 }, // Rare Kill: Commander Felstrom
        { 14228, 730017 }, // Rare Kill: Giggler
        { 2603, 730018 }, // Rare Kill: Kovork
        { 14231, 730019 }, // Rare Kill: Drogoth the Roamer
        { 14234, 730020 }, // Rare Kill: Hayoc
        { 4339, 730021 }, // Rare Kill: Brimgore
        { 14447, 730022 }, // Rare Kill: Gilmorian
        { 2752, 730023 }, // Rare Kill: Rumbler
        { 8279, 730024 }, // Rare Kill: Faulty War Golem
        { 5347, 730025 }, // Rare Kill: Antilus the Soarer
        { 8214, 730026 }, // Rare Kill: Jalinde Summerdrake
        { 6648, 730027 }, // Rare Kill: Antilos
        { 6649, 730028 }, // Rare Kill: Lady Sesspira
        { 14343, 730029 }, // Rare Kill: Olm the Wise
        { 10197, 730030 }, // Rare Kill: Mezzir the Howler
        { 10825, 730031 }, // Rare Kill: Gish the Unmoving
        { 14477, 730032 }, // Rare Kill: Grubthor
        { 10828, 730033 }, // Rare Kill: High General Abbendis
        { 1841, 730034 }, // Rare Kill: Scarlet Executioner
        { 1843, 730035 }, // Rare Kill: Foreman Jerris
        { 17144, 730036 }, // Rare Kill: Goretooth
        { 18695, 730037 }, // Rare Kill: Ambassador Jerrikar
        { 32400, 730038 }, // Rare Kill: Tukemuth
        { 33776, 730039 }, // Rare Kill: Gondria
    };
}
