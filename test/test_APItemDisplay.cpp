// azerothcore-wotlk/modules/archipelago_wow/test/test_APItemDisplay.cpp
#include "doctest.h"
#include "APItemDisplay.h"

TEST_CASE("APItemDisplay::SynthesizedEntryIsBasePlusLocationId")
{
    CHECK(Archipelago::ItemDisplay::SynthesizedEntryFor(2000000) == 900000000u + 2000000u);
}

TEST_CASE("APItemDisplay::SynthesizedEntryRoundTripsBackToLocationId")
{
    int64_t locationId = 1000001;
    uint32_t entry = Archipelago::ItemDisplay::SynthesizedEntryFor(locationId);
    CHECK(static_cast<int64_t>(entry) - Archipelago::ItemDisplay::AP_ITEM_SYNTH_BASE == locationId);
}
