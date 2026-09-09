// azerothcore-wotlk/modules/archipelago_wow/src/APFillerDecision.cpp
#include "APFillerDecision.h"

#include <algorithm>

namespace Archipelago::Filler
{
    std::vector<int64_t> SliceNeededLocationIds(std::vector<int64_t> const& orderedLocationIds, uint32_t neededCount)
    {
        uint32_t clamped = std::min<uint32_t>(neededCount, static_cast<uint32_t>(orderedLocationIds.size()));
        return std::vector<int64_t>(orderedLocationIds.begin(), orderedLocationIds.begin() + clamped);
    }
}
