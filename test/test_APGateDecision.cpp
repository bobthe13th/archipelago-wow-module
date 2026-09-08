// azerothcore-wotlk/modules/archipelago_wow/test/test_APGateDecision.cpp
#include "doctest.h"
#include "APGateDecision.h"

TEST_CASE("ShouldBlockTrainerTeach blocks only when module enabled and not yet AP-granted")
{
    using namespace Archipelago::Gating;
    CHECK(ShouldBlockTrainerTeach(true, false) == true);
    CHECK(ShouldBlockTrainerTeach(true, true) == false);
    CHECK(ShouldBlockTrainerTeach(false, false) == false);
    CHECK(ShouldBlockTrainerTeach(false, true) == false);
}
