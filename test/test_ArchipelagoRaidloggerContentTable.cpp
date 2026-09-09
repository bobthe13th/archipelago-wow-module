// azerothcore-wotlk/modules/archipelago_wow/test/test_ArchipelagoRaidloggerContentTable.cpp
#include "doctest.h"
#include "ArchipelagoRaidloggerContentTable.h"

// A pure-logic test: given ApItemToLevel's real generated content, looking
// up AP_ITEM_RAIDLOGGER_INSTANT_LEVEL_70's id resolves to 70, an unrelated
// id resolves to end(). Does not exercise ApplyOrDeferInstantLevelSet's
// gating/Player-mutation side (APRaidlogger.cpp depends on ArchipelagoRealmState/
// Player/ObjectAccessor, which this standalone doctest harness doesn't link
// against -- covered by the manual verification checklist instead).
TEST_CASE("Raidlogger ApItemToLevel resolves the real generated ids")
{
    using namespace Archipelago::Raidlogger;
    CHECK(ApItemToLevel.at(AP_ITEM_RAIDLOGGER_INSTANT_LEVEL_70) == 70);
    CHECK(ApItemToLevel.at(AP_ITEM_RAIDLOGGER_INSTANT_LEVEL_80) == 80);
    CHECK(ApItemToLevel.find(999999) == ApItemToLevel.end());
}
