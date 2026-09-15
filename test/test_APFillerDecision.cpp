// azerothcore-wotlk/modules/archipelago_wow/test/test_APFillerDecision.cpp
#include "doctest.h"
#include "APFillerDecision.h"

using namespace Archipelago::Filler;

TEST_CASE("SliceNeededLocationIds returns the correct prefix when neededCount is less than the list size")
{
    std::vector<int64_t> ids = { 740000, 740001, 740002, 740003, 740004 };
    std::vector<int64_t> result = SliceNeededLocationIds(ids, 3);
    CHECK(result == std::vector<int64_t>{ 740000, 740001, 740002 });
}

TEST_CASE("SliceNeededLocationIds returns the full list when neededCount equals the list size")
{
    std::vector<int64_t> ids = { 740000, 740001, 740002 };
    std::vector<int64_t> result = SliceNeededLocationIds(ids, 3);
    CHECK(result == ids);
}

TEST_CASE("SliceNeededLocationIds clamps rather than reading out of bounds when neededCount exceeds the list size")
{
    std::vector<int64_t> ids = { 740000, 740001 };
    std::vector<int64_t> result = SliceNeededLocationIds(ids, 999);
    CHECK(result == ids);
}

TEST_CASE("SliceNeededLocationIds returns empty for a zero neededCount")
{
    std::vector<int64_t> ids = { 740000, 740001, 740002 };
    CHECK(SliceNeededLocationIds(ids, 0).empty());
}

TEST_CASE("SliceNeededLocationIds returns empty for an empty input list regardless of neededCount")
{
    std::vector<int64_t> empty;
    CHECK(SliceNeededLocationIds(empty, 5).empty());
}
