// azerothcore-wotlk/modules/archipelago_wow/test/test_random_taxi_node.cpp
//
// Random Flight Path Unlock (Task 4, M4.14.1 "Useful Items") grants one
// uniformly-random previously-unknown real taxi node
// (TaxiNodesEntry::ID/sTaxiNodesStore) via GrantRandomTaxiNode
// (ArchipelagoPlayerScript.cpp), which touches a live Player*/DBC store
// directly. Per this module's established discipline (see
// APGateDecision.h's own stated rationale), that function itself stays
// manually verified only, not unit tested here -- there is no fake
// Player*/sTaxiNodesStore available to the standalone doctest target.
//
// What IS pure and testable is the set-difference GrantRandomTaxiNode
// delegates to: Archipelago::RandomTaxiNode::ComputeUnknownTaxiNodes
// (APRandomTaxiNode.h/.cpp), given a fake "universe of real node ids" and a
// fake "already known" subset, with zero Player*/DBC dependency -- mirrors
// how Task 1 factored IsNonBackpackBagSlot/BagSlotToTier out of
// ArchipelagoBagSlotGateScript for the same reason (see
// test_bag_slot_gate.cpp).
#include "doctest.h"
#include "APRandomTaxiNode.h"

#include <algorithm>

TEST_CASE("ComputeUnknownTaxiNodes returns exactly the ids not already known")
{
    using namespace Archipelago::RandomTaxiNode;

    std::vector<uint32_t> allNodes = { 1, 2, 3, 4, 5 };
    std::vector<uint32_t> known = { 2, 4 };

    std::vector<uint32_t> unknown = ComputeUnknownTaxiNodes(allNodes, known);
    std::sort(unknown.begin(), unknown.end());

    CHECK(unknown == std::vector<uint32_t>{ 1, 3, 5 });
}

TEST_CASE("ComputeUnknownTaxiNodes returns every node when none are known yet")
{
    using namespace Archipelago::RandomTaxiNode;

    std::vector<uint32_t> allNodes = { 10, 20, 30 };
    std::vector<uint32_t> known;

    std::vector<uint32_t> unknown = ComputeUnknownTaxiNodes(allNodes, known);
    std::sort(unknown.begin(), unknown.end());

    CHECK(unknown == std::vector<uint32_t>{ 10, 20, 30 });
}

TEST_CASE("ComputeUnknownTaxiNodes returns empty (not a crash) when every real node is already known")
{
    using namespace Archipelago::RandomTaxiNode;

    std::vector<uint32_t> allNodes = { 1, 2, 3 };
    std::vector<uint32_t> known = { 1, 2, 3 };

    CHECK(ComputeUnknownTaxiNodes(allNodes, known).empty());
}

TEST_CASE("ComputeUnknownTaxiNodes ignores known ids that aren't part of the real universe")
{
    using namespace Archipelago::RandomTaxiNode;

    std::vector<uint32_t> allNodes = { 1, 2, 3 };
    std::vector<uint32_t> known = { 2, 999 }; // 999 isn't a real node id

    std::vector<uint32_t> unknown = ComputeUnknownTaxiNodes(allNodes, known);
    std::sort(unknown.begin(), unknown.end());

    CHECK(unknown == std::vector<uint32_t>{ 1, 3 });
}
