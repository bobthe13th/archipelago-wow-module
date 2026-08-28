// azerothcore-wotlk/modules/archipelago_wow/test/test_APGating.cpp
#include "doctest.h"
#include "APGateDecision.h"

TEST_CASE("ShouldSuppressGatedAction suppresses only when module+family enabled and flag not yet unlocked")
{
    using namespace Archipelago::Gating;
    CHECK(ShouldSuppressGatedAction(true, true, false) == true);
    CHECK(ShouldSuppressGatedAction(true, true, true) == false);
    CHECK(ShouldSuppressGatedAction(true, false, false) == false);
    CHECK(ShouldSuppressGatedAction(false, true, false) == false);
    CHECK(ShouldSuppressGatedAction(false, false, false) == false);
}
