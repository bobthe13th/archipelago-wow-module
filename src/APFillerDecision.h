// azerothcore-wotlk/modules/archipelago_wow/src/APFillerDecision.h
#pragma once

#include <cstdint>
#include <vector>

namespace Archipelago::Filler
{
    // Pure slice logic (M4.11.6): the C++ side must send exactly the first
    // `neededCount` ids from the generated, ordered Filler location list --
    // never the full compiled worst-case set unconditionally (the bug this
    // milestone fixes), and never more than the list actually holds (a
    // malformed/future slot_data value must not read past the end).
    // Factored out with zero AzerothCore engine dependencies (matching
    // APGateDecision.h's precedent) so it's unit-testable in the standalone
    // doctest target without a live ArchipelagoWorldScript/OnUpdate context.
    std::vector<int64_t> SliceNeededLocationIds(std::vector<int64_t> const& orderedLocationIds, uint32_t neededCount);
}
