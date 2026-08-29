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
        740062, // Filler Check 63
        740063, // Filler Check 64
        740064, // Filler Check 65
        740065, // Filler Check 66
        740066, // Filler Check 67
        740067, // Filler Check 68
        740068, // Filler Check 69
        740069, // Filler Check 70
        740070, // Filler Check 71
        740071, // Filler Check 72
        740072, // Filler Check 73
        740073, // Filler Check 74
        740074, // Filler Check 75
        740075, // Filler Check 76
        740076, // Filler Check 77
        740077, // Filler Check 78
        740078, // Filler Check 79
        740079, // Filler Check 80
        740080, // Filler Check 81
        740081, // Filler Check 82
        740082, // Filler Check 83
        740083, // Filler Check 84
        740084, // Filler Check 85
        740085, // Filler Check 86
        740086, // Filler Check 87
        740087, // Filler Check 88
        740088, // Filler Check 89
        740089, // Filler Check 90
        740090, // Filler Check 91
        740091, // Filler Check 92
        740092, // Filler Check 93
        740093, // Filler Check 94
        740094, // Filler Check 95
        740095, // Filler Check 96
        740096, // Filler Check 97
        740097, // Filler Check 98
        740098, // Filler Check 99
        740099, // Filler Check 100
        740100, // Filler Check 101
        740101, // Filler Check 102
        740102, // Filler Check 103
        740103, // Filler Check 104
        740104, // Filler Check 105
        740105, // Filler Check 106
        740106, // Filler Check 107
        740107, // Filler Check 108
        740108, // Filler Check 109
        740109, // Filler Check 110
        740110, // Filler Check 111
        740111, // Filler Check 112
        740112, // Filler Check 113
        740113, // Filler Check 114
        740114, // Filler Check 115
        740115, // Filler Check 116
        740116, // Filler Check 117
        740117, // Filler Check 118
        740118, // Filler Check 119
        740119, // Filler Check 120
        740120, // Filler Check 121
        740121, // Filler Check 122
    };
}
