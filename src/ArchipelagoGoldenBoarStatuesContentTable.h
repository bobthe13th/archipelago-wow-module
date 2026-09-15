// GENERATED FILE - do not edit by hand.
// Regenerate with: python modules/archipelago_wow/tools/generate_content.py content/golden_boar_statues.yaml

#pragma once

#include <cstdint>
#include <unordered_map>

namespace Archipelago::GoldenBoarStatues
{
    // AP item ids (all int64_t, matching Archipelago::ReceivedItem::item).
    inline constexpr int64_t AP_ITEM_GOLDEN_BOAR_STATUE = 810011;

    // Every curated golden_boar_statues row's real creature entry -> its own location id.
    // Sent unconditionally on a matching kill, same as every other
    // location-check table in this module -- a given generation may not
    // have sampled every one of these 20 into its actual location pool
    // (see content/golden_boar_statues.yaml's own header comment on density sampling), but the
    // AP server silently ignores a location id outside a slot's actual
    // location table (the same MultiServer.py behavior Task 11's filler
    // fix already relies on), so sending the full set is safe regardless.
    inline std::unordered_map<uint32_t, int64_t> const CreatureEntryToLocationId = {
        { 5865, 731000 }, // Golden Boar Statue Kill: Dishu
        { 3270, 731001 }, // Golden Boar Statue Kill: Elder Mystic Razorsnout
        { 3470, 731002 }, // Golden Boar Statue Kill: Rathorian
        { 5837, 731003 }, // Golden Boar Statue Kill: Stonearm
        { 3652, 731004 }, // Golden Boar Statue Kill: Trigore the Lasher
        { 3672, 731005 }, // Golden Boar Statue Kill: Boahn
        { 5829, 731006 }, // Golden Boar Statue Kill: Snort the Heckler
        { 5838, 731007 }, // Golden Boar Statue Kill: Brokespear
        { 5841, 731008 }, // Golden Boar Statue Kill: Rocklance
        { 5835, 731009 }, // Golden Boar Statue Kill: Foreman Grills
        { 5842, 731010 }, // Golden Boar Statue Kill: Takk the Leaper
        { 5830, 731011 }, // Golden Boar Statue Kill: Sister Rathtalon
        { 3295, 731012 }, // Golden Boar Statue Kill: Sludge Beast
        { 5863, 731013 }, // Golden Boar Statue Kill: Geopriest Gukk'rok
        { 3398, 731014 }, // Golden Boar Statue Kill: Gesharahan
        { 5831, 731015 }, // Golden Boar Statue Kill: Swiftmane
        { 5864, 731016 }, // Golden Boar Statue Kill: Swinegart Spearhide
        { 5828, 731017 }, // Golden Boar Statue Kill: Humar the Pridelord
        { 3253, 731018 }, // Golden Boar Statue Kill: Silithid Harvester
        { 5834, 731019 }, // Golden Boar Statue Kill: Azzere the Skyblade
    };
}
