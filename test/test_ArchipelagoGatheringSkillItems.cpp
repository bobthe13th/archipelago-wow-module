// azerothcore-wotlk/modules/archipelago_wow/test/test_ArchipelagoGatheringSkillItems.cpp
#include <string>

#include "doctest.h"
#include "ArchipelagoGatheringSkillItems.h"

using namespace Archipelago::GatheringSkills;

TEST_CASE("Progressive gathering item ids match the apworld's hand-declared values")
{
    // These two ids are hand-synced with Archipelago/worlds/wow/items.py's
    // GATHERING_SKILL_PROGRESSION_ITEMS -- neither side is generated from the
    // other, so drift here is silent: a mismatched id would fall straight
    // through ArchipelagoPlayerScript.cpp's dispatch to the "unknown AP item
    // id" LOG_ERROR, which is exactly the M4.11.4.2 final-review bug this
    // header was added to fix. Pin them.
    CHECK(AP_ITEM_PROGRESSIVE_MINING == 811000);
    CHECK(AP_ITEM_PROGRESSIVE_HERBALISM == 811001);
}

TEST_CASE("IsProgressionItem recognizes exactly the two gathering progression ids")
{
    CHECK(IsProgressionItem(811000));
    CHECK(IsProgressionItem(811001));
    // Must NOT swallow anything else -- in particular core_loop's own
    // adjacent generated 810000-810011 block, whose items DO have real
    // server-side effects and must keep reaching their own branches.
    CHECK_FALSE(IsProgressionItem(810011));
    CHECK_FALSE(IsProgressionItem(810999));
    CHECK_FALSE(IsProgressionItem(811002));
    CHECK_FALSE(IsProgressionItem(0));
}

TEST_CASE("ProgressionItemName returns the exact apworld-side item names")
{
    CHECK(std::string(ProgressionItemName(811000)) == "Progressive Mining");
    CHECK(std::string(ProgressionItemName(811001)) == "Progressive Herbalism");
    CHECK(ProgressionItemName(810011) == nullptr);
}
