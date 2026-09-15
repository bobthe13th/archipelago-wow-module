// azerothcore-wotlk/modules/archipelago_wow/test/test_APBotSupport.cpp
#include "doctest.h"
#include "APBotSupport.h"

// AC_MODULE_PLAYERBOTS_AVAILABLE is never defined in this standalone test
// build (it's only set by archipelago_wow.cmake inside the full worldserver
// CMake configure, which this doctest target doesn't run), so this exercises
// the "no mod-playerbots present" branch -- the only branch testable without
// a live Player/PlayerbotMgr, matching this module's own established
// precedent of not unit-testing PlayerScript hook glue that needs a real
// Player instance (see test_APGating.cpp, which only tests APGateDecision.h's
// pure functions, never APGating.cpp itself).
TEST_CASE("IsBotControlledPlayer is always false without mod-playerbots present")
{
    CHECK(Archipelago::Bots::IsBotControlledPlayer(nullptr) == false);
}
