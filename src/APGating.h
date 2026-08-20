// azerothcore-wotlk/modules/archipelago_wow/src/APGating.h
#pragma once

#include <cstdint>
#include <string>

class Player;

namespace Archipelago::Gating
{
    // Riding tiers, 1-5, matching content/gates.yaml's "riding" flag_key tiers:
    // 1=Apprentice, 2=Journeyman, 3=Expert, 4=Artisan, 5=Cold Weather Flying.
    inline constexpr uint32_t RIDING_TIER_APPRENTICE = 1;
    inline constexpr uint32_t RIDING_TIER_JOURNEYMAN = 2;
    inline constexpr uint32_t RIDING_TIER_EXPERT = 3;
    inline constexpr uint32_t RIDING_TIER_ARTISAN = 4;
    inline constexpr uint32_t RIDING_TIER_COLD_WEATHER_FLYING = 5;

    // Flight tiers, matching content/gates.yaml's "flight" flag_key tiers:
    // 1=Outland flying, 2=Northrend (Cold Weather) flying.
    inline constexpr uint32_t FLIGHT_TIER_OUTLAND = 1;
    inline constexpr uint32_t FLIGHT_TIER_NORTHREND = 2;

    // True if the realm has received a riding-tier item at least as high as
    // requiredTier. When the module is disabled, callers must treat this as
    // always-true themselves (matching every other gate's disabled-is-
    // vanilla contract) -- this helper does not re-check IsEnabled() so it
    // stays a pure state query, safe to call from any hook.
    bool IsRidingTierUnlocked(uint32_t requiredTier);

    // True if the realm has received a flight-tier item at least as high as
    // requiredTier (1=Outland, 2=Northrend). Same disabled-is-vanilla contract.
    bool IsFlightUnlocked(uint32_t requiredTier);

    // True if the realm has received the Armor/Weapon Proficiency item that
    // sets this flag_key (content/gates.yaml's "proficiency_*" flag_keys,
    // tier always 1 -- boolean gate). Same disabled-is-vanilla contract as
    // the other Is*Unlocked helpers: callers must also check
    // sArchipelagoRealmState->IsGateFamilyEnabled("proficiency") themselves
    // (or rely on the suppression script, which already does), since this
    // family is optional per-seed and off by default.
    bool IsProficiencyUnlocked(std::string const& proficiencyFlagKey);

    // True if the realm has received the Access item that sets this
    // flag_key (content/gates.yaml's "access_*" flag_keys -- currently
    // access_auction_house, access_hearth, access_mailbox; bank and
    // gathering have no suppression hook and are not part of this family).
    // Same disabled/family-off contract as IsProficiencyUnlocked.
    bool IsAccessUnlocked(std::string const& accessFlagKey);
}

void AddArchipelagoGatingScripts();

