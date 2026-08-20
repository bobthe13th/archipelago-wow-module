// GENERATED FILE - do not edit by hand.
// Regenerate with: python modules/archipelago_wow/tools/generate_content.py content/filler.yaml

#pragma once

#include <cstdint>
#include <unordered_set>

namespace Archipelago::Filler
{
    // Sink locations with no real in-game trigger -- they exist only
    // to keep the AP fill algorithm's location count >= the worst-case
    // (all optional gate families on) item count (see docs/m4-plan.md's
    // Task 11 section). Not auto-completed by this module in M4; a real
    // player's server session will never send these checks, which is an
    // accepted scope boundary, not a bug -- they never hold anything
    // required to win a seed.
    inline std::unordered_set<int64_t> const LocationIds = {
        740000, // Filler Check 1
        740001, // Filler Check 2
        740002, // Filler Check 3
        740003, // Filler Check 4
        740004, // Filler Check 5
        740005, // Filler Check 6
        740006, // Filler Check 7
        740007, // Filler Check 8
        740008, // Filler Check 9
        740009, // Filler Check 10
        740010, // Filler Check 11
        740011, // Filler Check 12
        740012, // Filler Check 13
        740013, // Filler Check 14
        740014, // Filler Check 15
        740015, // Filler Check 16
        740016, // Filler Check 17
        740017, // Filler Check 18
        740018, // Filler Check 19
        740019, // Filler Check 20
        740020, // Filler Check 21
        740021, // Filler Check 22
        740022, // Filler Check 23
        740023, // Filler Check 24
        740024, // Filler Check 25
        740025, // Filler Check 26
        740026, // Filler Check 27
    };
}
