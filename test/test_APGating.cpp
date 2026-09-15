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

TEST_CASE("ShouldSuppressGatedTier suppresses only when the granted tier is below the required tier")
{
    using namespace Archipelago::Gating;
    CHECK(ShouldSuppressGatedTier(true, true, 3, 2) == true);
    CHECK(ShouldSuppressGatedTier(true, true, 3, 3) == false);
    CHECK(ShouldSuppressGatedTier(true, true, 3, 4) == false);
    CHECK(ShouldSuppressGatedTier(true, false, 3, 0) == false);
    CHECK(ShouldSuppressGatedTier(false, true, 3, 0) == false);
}

TEST_CASE("ShouldSuppressTalentLearn gates cumulative talent points spent against a per-tranche cap")
{
    using namespace Archipelago::Gating;

    // Tier 0: no Talent Point Access received yet -- always suppress,
    // regardless of how many points the character already has banked from
    // before this gate applied.
    CHECK(ShouldSuppressTalentLearn(true, true, 0, 0) == true);
    CHECK(ShouldSuppressTalentLearn(true, true, 0, 100) == true);

    // Tier 1 (Tranche 1, points 1-25): allow while fewer than 25 points are
    // already spent, suppress once 25 are already spent (i.e. blocks #26).
    CHECK(ShouldSuppressTalentLearn(true, true, 1, 10) == false);
    CHECK(ShouldSuppressTalentLearn(true, true, 1, 24) == false);
    CHECK(ShouldSuppressTalentLearn(true, true, 1, 25) == true);
    CHECK(ShouldSuppressTalentLearn(true, true, 1, 26) == true);

    // Tier 2 (Tranches 1-2, points 1-50): boundary at 50.
    CHECK(ShouldSuppressTalentLearn(true, true, 2, 26) == false);
    CHECK(ShouldSuppressTalentLearn(true, true, 2, 49) == false);
    CHECK(ShouldSuppressTalentLearn(true, true, 2, 50) == true);
    CHECK(ShouldSuppressTalentLearn(true, true, 2, 51) == true);

    // Tier 3+ (Tranche 3, "fully unlocked"): never suppresses, no matter how
    // many points are spent -- deliberately not hardcoded to the default-
    // RATE_TALENT level-80 max of 71, since a server with a different
    // RATE_TALENT would earn a different real max and a hardcoded cap could
    // wrongly keep suppressing above it.
    CHECK(ShouldSuppressTalentLearn(true, true, 3, 0) == false);
    CHECK(ShouldSuppressTalentLearn(true, true, 3, 71) == false);
    CHECK(ShouldSuppressTalentLearn(true, true, 3, 1000) == false);
    CHECK(ShouldSuppressTalentLearn(true, true, 4, 1000) == false);

    // Disabled module/gate family: never suppresses, regardless of tier/spend.
    CHECK(ShouldSuppressTalentLearn(false, true, 0, 0) == false);
    CHECK(ShouldSuppressTalentLearn(true, false, 0, 0) == false);
}
