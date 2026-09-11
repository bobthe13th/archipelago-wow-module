// azerothcore-wotlk/modules/archipelago_wow/test/test_APBotDecision.cpp
#include "doctest.h"
#include "APBotDecision.h"

TEST_CASE("ShouldApplyToBot exempts a bot only when its toggle is off")
{
    using namespace Archipelago::Bots;
    CHECK(ShouldApplyToBot(false, false) == true);  // real player, toggle irrelevant
    CHECK(ShouldApplyToBot(false, true) == true);   // real player, toggle irrelevant
    CHECK(ShouldApplyToBot(true, true) == true);    // bot, toggle on -> normal behavior applies
    CHECK(ShouldApplyToBot(true, false) == false);  // bot, toggle off -> exempted
}
