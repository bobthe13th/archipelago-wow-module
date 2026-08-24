// azerothcore-wotlk/modules/archipelago_wow/src/APInterception.h
#pragma once

#include <cstdint>

namespace Archipelago::Interception
{
    // Bit values confirmed against Archipelago/BaseClasses.py's
    // ItemClassification (IntFlag): progression=0b00001, useful=0b00010,
    // trap=0b00100, skip_balancing=0b01000. skip_balancing is orthogonal to
    // display and ignored here (see design spec §4 -- M4.7's "Classification
    // mapping" section for the full citation).
    enum class ItemClass { Progression, Useful, Trap, Filler };

    ItemClass ClassifyItem(int32_t flags);
}
