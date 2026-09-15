// azerothcore-wotlk/modules/archipelago_wow/src/APRandomTaxiNode.cpp
#include "APRandomTaxiNode.h"

#include <unordered_set>

namespace Archipelago::RandomTaxiNode
{
    std::vector<uint32_t> ComputeUnknownTaxiNodes(std::vector<uint32_t> const& allNodeIds, std::vector<uint32_t> const& knownNodeIds)
    {
        std::unordered_set<uint32_t> known(knownNodeIds.begin(), knownNodeIds.end());

        std::vector<uint32_t> unknown;
        unknown.reserve(allNodeIds.size());
        for (uint32_t id : allNodeIds)
        {
            if (!known.count(id))
                unknown.push_back(id);
        }
        return unknown;
    }
}
