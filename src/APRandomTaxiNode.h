// azerothcore-wotlk/modules/archipelago_wow/src/APRandomTaxiNode.h
#pragma once

#include <cstdint>
#include <vector>

namespace Archipelago::RandomTaxiNode
{
    // Pure: given every real TaxiNodesEntry::ID currently defined
    // (allNodeIds) and the subset already known to a player (knownNodeIds),
    // returns every id in allNodeIds that is NOT in knownNodeIds -- the
    // candidate pool GrantRandomTaxiNode (ArchipelagoPlayerScript.cpp)
    // uniformly picks one from via urand for the Random Flight Path Unlock
    // gate item (Task 4, M4.14.1 "Useful Items"). Zero Player*/
    // sTaxiNodesStore coupling, factored out here for the same
    // standalone-doctest testability reason as APGateDecision.h's own pure
    // helpers -- GrantRandomTaxiNode itself stays manually verified only,
    // per this module's established discipline for anything requiring a
    // live Player*/DBC store.
    std::vector<uint32_t> ComputeUnknownTaxiNodes(std::vector<uint32_t> const& allNodeIds, std::vector<uint32_t> const& knownNodeIds);
}
