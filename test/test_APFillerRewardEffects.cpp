// azerothcore-wotlk/modules/archipelago_wow/test/test_APFillerRewardEffects.cpp
#include "doctest.h"
#include "APFillerRewardEffectsPure.h"

TEST_CASE("APFillerRewardEffects::ComputeXpToGrantAppliesThePercentToRemainingXp")
{
    CHECK(Archipelago::FillerRewardEffects::Pure::ComputeXpToGrant(0, 1000, 50) == 500u);
}

TEST_CASE("APFillerRewardEffects::ComputeXpToGrantHandlesTheSmallestRealDiscreteTier")
{
    // Design spec's smallest real tier, 1%: 1000 remaining -> 10
    CHECK(Archipelago::FillerRewardEffects::Pure::ComputeXpToGrant(0, 1000, 1) == 10u);
}

TEST_CASE("APFillerRewardEffects::ComputeXpToGrantReturnsZeroAtMaxLevel")
{
    CHECK(Archipelago::FillerRewardEffects::Pure::ComputeXpToGrant(1000, 1000, 50) == 0u);
}

TEST_CASE("APFillerRewardEffects::ComputeXpToGrantReturnsZeroOnMalformedState")
{
    // nextLvlXp < curXp -- defensive, matches ApplyXpReward's existing
    // safe-no-op guard.
    CHECK(Archipelago::FillerRewardEffects::Pure::ComputeXpToGrant(500, 100, 50) == 0u);
}
