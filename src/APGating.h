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
    // flag_key (content/gates.yaml's "access_*" flag_keys -- access_auction_house,
    // access_hearth, access_mailbox, access_bank (M4.9), access_gathering
    // (M4.9, covers mining/herbalism/skinning as one access type)). Same
    // disabled/family-off contract as IsProficiencyUnlocked.
    bool IsAccessUnlocked(std::string const& accessFlagKey);

    // Applies this realm's character-unlock grants (bank bag slots, dual
    // spec -- content/gates.yaml's "bank_bag_slots"/"dual_spec" flag_keys)
    // to one character, monotonic-max against whatever that character
    // already has (never downgrades gold-purchased bank slots or an
    // already-unlocked second spec). Safe to call repeatedly/idempotently:
    // once on every login (ArchipelagoPlayerScript::OnPlayerLogin), and
    // again for every already-online character whenever
    // DeliverArchipelagoItems raises one of these two flags. No-op when the
    // module or the "character_unlocks" gate family is disabled. Talent
    // Point Access is NOT applied here -- it's continuous suppression via
    // OnPlayerCanLearnTalent, not a character-field grant.
    void SyncCharacterUnlocksToPlayer(Player* player);

    // Task 21 (design spec Sec5.5): pushes CONFIG_CHARACTER_CREATING_DISABLED_
    // RACEMASK/_CLASSMASK to block or allow Blood Elf/Draenei (content/gates.yaml's
    // "combo_unlock_tbc" flag_key) and Death Knight (its "combo_unlock_wotlk"
    // flag_key) character creation, based on content/gates.yaml's flag store --
    // unlike SyncCharacterUnlocksToPlayer above, this touches no Player at all,
    // since race/class creation eligibility is realm-wide server config, not
    // per-character state. Re-derives BOTH masks from scratch every call rather
    // than incrementally flipping a bit, so it's safe/idempotent to call from
    // both ArchipelagoWorldScript::OnStartup (restart-safety -- the masks
    // themselves are not separately persisted, only the earned flags are) and
    // DeliverArchipelagoItems (instant effect the moment either item is
    // received: CharacterHandler.cpp's HandleCharCreateOpcode reads these two
    // config values fresh on every character-creation attempt, not cached, so
    // no restart or re-login is needed). Only touches the specific bits this
    // module owns (Blood Elf/Draenei/Death Knight); any other race/class bit an
    // operator has independently disabled in their own worldserver.conf is left
    // untouched. Callers must ensure the module itself is enabled before
    // calling -- unlike the other helpers in this file, this one is only ever
    // called from within an already-IsEnabled()-gated context (ArchipelagoWorldScript
    // and the delivery dispatch), so it does not re-check IsEnabled() itself. It
    // DOES check two separate gate-family flags ("combo_unlock_tbc"/
    // "combo_unlock_wotlk", mirroring the apworld's 4-way ComboUnlocksScope
    // option) itself, since each needs its own "scope not active -> fully
    // vanilla (unlocked)" branch, not one combined toggle -- see the .cpp for why.
    void ApplyComboUnlockMasks();
}

void AddArchipelagoGatingScripts();

