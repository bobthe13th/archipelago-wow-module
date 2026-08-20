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
    // Task 11 section). They carry no access rule, so the fill algorithm
    // can and does place progression items on them (Progressive Level Cap
    // included) -- ArchipelagoWorldScript::OnStartup sends every id here as
    // a location check unconditionally on realm startup (see docs/m4-plan.md's
    // Task 17 follow-up fix note) so whatever landed on one is never stranded.
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
        740027, // Filler Check 28
        740028, // Filler Check 29
        740029, // Filler Check 30
        740030, // Filler Check 31
        740031, // Filler Check 32
        740032, // Filler Check 33
        740033, // Filler Check 34
        740034, // Filler Check 35
        740035, // Filler Check 36
        740036, // Filler Check 37
        740037, // Filler Check 38
        740038, // Filler Check 39
        740039, // Filler Check 40
        740040, // Filler Check 41
        740041, // Filler Check 42
        740042, // Filler Check 43
        740043, // Filler Check 44
        740044, // Filler Check 45
        740045, // Filler Check 46
        740046, // Filler Check 47
        740047, // Filler Check 48
        740048, // Filler Check 49
        740049, // Filler Check 50
        740050, // Filler Check 51
        740051, // Filler Check 52
        740052, // Filler Check 53
        740053, // Filler Check 54
        740054, // Filler Check 55
        740055, // Filler Check 56
        740056, // Filler Check 57
        740057, // Filler Check 58
        740058, // Filler Check 59
        740059, // Filler Check 60
        740060, // Filler Check 61
        740061, // Filler Check 62
    };
}
