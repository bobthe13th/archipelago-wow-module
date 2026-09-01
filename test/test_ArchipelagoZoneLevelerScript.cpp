// azerothcore-wotlk/modules/archipelago_wow/test/test_ArchipelagoZoneLevelerScript.cpp
#include "doctest.h"
#include "ArchipelagoZoneLevelerScriptPure.h"

using namespace Archipelago::ZoneLeveler::Pure;

TEST_CASE("IsZoneAllowedForZoneLeveler allows the locked zone itself regardless of the hub toggle")
{
    std::unordered_set<uint32_t> hubZones{ 1, 14 };
    CHECK(IsZoneAllowedForZoneLeveler(17, 17, false, hubZones) == true);
    CHECK(IsZoneAllowedForZoneLeveler(17, 17, true, hubZones) == true);
}

TEST_CASE("IsZoneAllowedForZoneLeveler blocks a hub zone when allowHubZone is off")
{
    std::unordered_set<uint32_t> hubZones{ 1, 14 };
    CHECK(IsZoneAllowedForZoneLeveler(1, 17, false, hubZones) == false);
    CHECK(IsZoneAllowedForZoneLeveler(14, 17, false, hubZones) == false);
}

TEST_CASE("IsZoneAllowedForZoneLeveler allows a hub zone when allowHubZone is on")
{
    std::unordered_set<uint32_t> hubZones{ 1, 14 };
    CHECK(IsZoneAllowedForZoneLeveler(1, 17, true, hubZones) == true);
    CHECK(IsZoneAllowedForZoneLeveler(14, 17, true, hubZones) == true);
}

TEST_CASE("IsZoneAllowedForZoneLeveler blocks a non-hub, non-locked zone regardless of the hub toggle")
{
    std::unordered_set<uint32_t> hubZones{ 1, 14 };
    CHECK(IsZoneAllowedForZoneLeveler(331, 17, false, hubZones) == false); // Ashenvale
    CHECK(IsZoneAllowedForZoneLeveler(331, 17, true, hubZones) == false);
}

TEST_CASE("IsZoneAllowedForZoneLeveler blocks every zone when the allowed-hub-zone set is empty, even with the toggle on")
{
    std::unordered_set<uint32_t> hubZones;
    CHECK(IsZoneAllowedForZoneLeveler(1, 17, true, hubZones) == false);
}
