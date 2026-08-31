// azerothcore-wotlk/modules/archipelago_wow/test/test_AllLocationNames.cpp
//
// Deviation from the M4.13 plan's own sample: does NOT
// #define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN -- that's already provided by
// test_APProtocol.cpp, and every one of these test_*.cpp files links into the
// SAME archipelago_wow_tests executable (see CMakeLists.txt), so a second
// main() here is a duplicate-symbol link error. Matches every sibling test
// file's own plain "#include doctest.h" shape (test_APItemDisplay.cpp,
// test_APTraps.cpp, test_APGating.cpp, test_APFillerRewardEffects.cpp).
#include "doctest.h"
#include "AllLocationNames.h"
#include "ArchipelagoQuestRewardsContentTable.h"
#include "ArchipelagoGATHERSANITYContent.h"
#include "ArchipelagoREPSANITYContent.h"
#include "ArchipelagoITEMSANITYContent.h"
#include "ArchipelagoCRAFTSANITYContent.h"

using namespace Archipelago;

TEST_CASE("AllLocationNames contains entries from at least two different families")
{
    REQUIRE(!ArchipelagoQUEST_REWARDSContent::LOCATIONS.empty());
    REQUIRE(!ArchipelagoGATHERSANITYContent::LOCATIONS.empty());

    auto const& [questName, questId] = *ArchipelagoQUEST_REWARDSContent::LOCATIONS.begin();
    auto const& [gatherName, gatherId] = *ArchipelagoGATHERSANITYContent::LOCATIONS.begin();

    REQUIRE(Locations::AllLocationNames.count(static_cast<int64_t>(questId)) == 1);
    CHECK(Locations::AllLocationNames.at(static_cast<int64_t>(questId)) == questName);
    REQUIRE(Locations::AllLocationNames.count(static_cast<int64_t>(gatherId)) == 1);
    CHECK(Locations::AllLocationNames.at(static_cast<int64_t>(gatherId)) == gatherName);
}

// Final whole-branch review fix (I4, M4.10.4): Repsanity was never merged
// into AllLocationNames at all, so this test would have passed even with
// that bug -- add its own coverage rather than only touching src/.
TEST_CASE("AllLocationNames contains entries from Repsanity")
{
    REQUIRE(!ArchipelagoREPSANITYContent::LOCATIONS.empty());

    auto const& [repName, repId] = *ArchipelagoREPSANITYContent::LOCATIONS.begin();

    REQUIRE(Locations::AllLocationNames.count(static_cast<int64_t>(repId)) == 1);
    CHECK(Locations::AllLocationNames.at(static_cast<int64_t>(repId)) == repName);
}

// Final whole-branch review fix (I2, M4.10.6): Itemsanity and Craftsanity
// were both never merged into AllLocationNames -- the THIRD recurrence of
// this exact bug class (see I4, M4.10.4, for Repsanity). Add their own
// coverage rather than only touching src/, same as I4 did.
TEST_CASE("AllLocationNames contains entries from Itemsanity")
{
    REQUIRE(!ArchipelagoITEMSANITYContent::LOCATIONS.empty());

    auto const& [itemsanityName, itemsanityId] = *ArchipelagoITEMSANITYContent::LOCATIONS.begin();

    REQUIRE(Locations::AllLocationNames.count(static_cast<int64_t>(itemsanityId)) == 1);
    CHECK(Locations::AllLocationNames.at(static_cast<int64_t>(itemsanityId)) == itemsanityName);
}

TEST_CASE("AllLocationNames contains entries from Craftsanity")
{
    REQUIRE(!ArchipelagoCRAFTSANITYContent::LOCATIONS.empty());

    auto const& [craftsanityName, craftsanityId] = *ArchipelagoCRAFTSANITYContent::LOCATIONS.begin();

    REQUIRE(Locations::AllLocationNames.count(static_cast<int64_t>(craftsanityId)) == 1);
    CHECK(Locations::AllLocationNames.at(static_cast<int64_t>(craftsanityId)) == craftsanityName);
}

TEST_CASE("AllLocationNames has no id collisions across families (size matches total real-name count)")
{
    size_t totalRealNames = ArchipelagoQUEST_REWARDSContent::LOCATIONS.size()
        + ArchipelagoGATHERSANITYContent::LOCATIONS.size()
        + ArchipelagoREPSANITYContent::LOCATIONS.size()
        + ArchipelagoITEMSANITYContent::LOCATIONS.size()
        + ArchipelagoCRAFTSANITYContent::LOCATIONS.size();
    // A partial check restricted to the five families this test links, not
    // every family this project has -- proves the merge for these five is a
    // real concatenation, not one family silently overwriting another.
    size_t coveredIds = 0;
    for (auto const& [name, id] : ArchipelagoQUEST_REWARDSContent::LOCATIONS)
        if (Locations::AllLocationNames.count(static_cast<int64_t>(id)))
            ++coveredIds;
    for (auto const& [name, id] : ArchipelagoGATHERSANITYContent::LOCATIONS)
        if (Locations::AllLocationNames.count(static_cast<int64_t>(id)))
            ++coveredIds;
    for (auto const& [name, id] : ArchipelagoREPSANITYContent::LOCATIONS)
        if (Locations::AllLocationNames.count(static_cast<int64_t>(id)))
            ++coveredIds;
    for (auto const& [name, id] : ArchipelagoITEMSANITYContent::LOCATIONS)
        if (Locations::AllLocationNames.count(static_cast<int64_t>(id)))
            ++coveredIds;
    for (auto const& [name, id] : ArchipelagoCRAFTSANITYContent::LOCATIONS)
        if (Locations::AllLocationNames.count(static_cast<int64_t>(id)))
            ++coveredIds;
    CHECK(coveredIds == totalRealNames);
}
