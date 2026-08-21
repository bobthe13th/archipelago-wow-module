// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoGoals.cpp
#include "ArchipelagoGoals.h"

#include <string>

#include <vector>

#include "ArchipelagoCollectionsContentTable.h"
#include "ArchipelagoCoreLoopContentTable.h"
#include "ArchipelagoFishContentTable.h"
#include "ArchipelagoManager.h"
#include "ArchipelagoRealmState.h"

namespace Archipelago::Goals
{
    namespace
    {
        bool IsCompletionistComplete()
        {
            auto it = Archipelago::CoreLoop::INSTANCES_BY_EXPANSION.find(sArchipelagoRealmState->GetCompletionistExpansion());
            if (it == Archipelago::CoreLoop::INSTANCES_BY_EXPANSION.end() || it->second.empty())
                return false;

            for (std::string const& instanceKey : it->second)
                if (!sArchipelagoRealmState->IsInstanceUnlocked(instanceKey))
                    return false;

            return true;
        }

        // Task 25 (Key Hunt): needs BOTH enough keys AND enough distinct
        // raids/dungeons cleared -- mirrors goals.py's
        // _set_completion_rule_key_hunt (state.has(...) AND
        // state.has_from_list_unique(...)) in C++ terms. Counts unlocked
        // instances across ALL 5 keys in INSTANCE_CLEAR_LOCATIONS (every
        // core_loop.yaml instance_clear row), not just the 3 with a
        // `bosses:` list -- Key Hunt's own completion condition doesn't
        // distinguish which InstanceClearMode granularity unlocked each one.
        bool IsKeyHuntComplete()
        {
            if (sArchipelagoRealmState->GetKeyCount() < sArchipelagoRealmState->GetKeyHuntKeysRequired())
                return false;

            uint32_t unlockedCount = 0;
            for (auto const& [instanceKey, locationId] : Archipelago::CoreLoop::INSTANCE_CLEAR_LOCATIONS)
            {
                (void)locationId;
                if (sArchipelagoRealmState->IsInstanceUnlocked(instanceKey))
                    ++unlockedCount;
            }

            return unlockedCount >= sArchipelagoRealmState->GetKeyHuntInstancesRequired();
        }

        // Task 26 (Fishing Quest): complete once every one of the 46
        // curated fish species has been received at least once -- "has this
        // exact AP item id's fish_received_ flag been set", recorded at the
        // point of delivery (ArchipelagoPlayerScript.cpp's fish-item
        // dispatch block), not "has this species been caught" (a species
        // could be received via any location's fill placement, not
        // necessarily its own -- see fish.yaml's own header comment on why
        // item/location identity is decoupled in AP).
        bool IsFishingQuestComplete()
        {
            for (auto const& [apItemId, wowItemEntry] : Archipelago::Fish::ApItemIdToWowItemEntry)
            {
                (void)wowItemEntry;
                if (!sArchipelagoRealmState->IsFlagUnlocked("fish_received_" + std::to_string(apItemId)))
                    return false;
            }
            return true;
        }

        // Task 27 (Artisan): skill ids sourced from professions.yaml's own
        // header comment (SharedDefines.h's SkillType enum) -- 11 primary,
        // 3 secondary. Complete once all 3 secondary professions AND at
        // least ArtisanPrimaryProfessionsRequired of the 11 primaries have
        // reached the "profession_<skillId>_450" milestone flag. Kept as a
        // small local list rather than a generated structure -- unlike
        // INSTANCE_CLEAR_LOCATIONS (5 entries, genuinely core content), this
        // is fixed design-catalog data professions.yaml itself hardcodes,
        // and duplicating 14 stable ids here avoids adding yet another
        // generated Archipelago::Professions:: structure for a one-caller need.
        bool IsArtisanComplete()
        {
            static std::vector<uint32_t> const secondarySkillIds = { 129, 185, 356 }; // First Aid, Cooking, Fishing
            static std::vector<uint32_t> const primarySkillIds = {
                171, 164, 333, 202, 182, 773, 755, 165, 186, 393, 197,
                // Alchemy, Blacksmithing, Enchanting, Engineering, Herbalism,
                // Inscription, Jewelcrafting, Leatherworking, Mining, Skinning, Tailoring
            };

            for (uint32_t skillId : secondarySkillIds)
                if (!sArchipelagoRealmState->IsFlagUnlocked("profession_" + std::to_string(skillId) + "_450"))
                    return false;

            uint32_t maxedPrimaries = 0;
            for (uint32_t skillId : primarySkillIds)
                if (sArchipelagoRealmState->IsFlagUnlocked("profession_" + std::to_string(skillId) + "_450"))
                    ++maxedPrimaries;

            return maxedPrimaries >= sArchipelagoRealmState->GetArtisanPrimaryProfessionsRequired();
        }

        // Task 27 (Collector): complete once at least CollectorItemsRequired
        // of the 264 curated mounts/pets have been received at least once --
        // "collection_received_<apItemId>" flag, recorded at the point of
        // delivery (ArchipelagoPlayerScript.cpp's collections-item dispatch
        // block), same convention as Fishing Quest's fish_received_ flags.
        // Default CollectorItemsRequired (264) matches Fishing Quest's
        // require-everything shape exactly; the threshold is configurable
        // (like Artisan's primary-professions count) purely so a shorter
        // Collector run is selectable per-seed, not because completion is
        // mechanically harder to reach than Fishing Quest's.
        bool IsCollectorComplete()
        {
            uint32_t receivedCount = 0;
            for (auto const& [apItemId, wowItemEntry] : Archipelago::Collections::ApItemIdToWowItemEntry)
            {
                (void)wowItemEntry;
                if (sArchipelagoRealmState->IsFlagUnlocked("collection_received_" + std::to_string(apItemId)))
                    ++receivedCount;
            }
            return receivedCount >= sArchipelagoRealmState->GetCollectorItemsRequired();
        }
    }

    void CheckAndSendGoalComplete()
    {
        std::string const& mode = sArchipelagoRealmState->GetGameMode();

        // Sprint is NOT handled here, deliberately: its real completion
        // condition is "some specific player's own level reached 60", not a
        // pure realm-state fact -- ArchipelagoLevelScript.cpp's
        // OnPlayerLevelChanged already checks that correctly, inline, using
        // the level-changed event's own oldLevel/newLevel (Player::GetLevel())
        // context this function doesn't have. Checking
        // GetLevelCap() >= SPRINT_GOAL_LEVEL here instead would be a real bug:
        // the cap can be raised to 60 by item delivery well before any player
        // has actually ground the XP to reach it, which would report the goal
        // complete too early.
        bool complete = false;
        if (mode == "key_hunt")
            complete = IsKeyHuntComplete();
        else if (mode == "artisan")
            complete = IsArtisanComplete();
        else if (mode == "fishing_quest")
            complete = IsFishingQuestComplete();
        else if (mode == "classic")
            complete = sArchipelagoRealmState->IsInstanceUnlocked(Archipelago::CoreLoop::INSTANCE_KEY_MOLTEN_CORE);
        else if (mode == "burning_crusade")
            complete = sArchipelagoRealmState->IsInstanceUnlocked(Archipelago::CoreLoop::INSTANCE_KEY_SUNWELL_PLATEAU);
        else if (mode == "wrath")
            complete = sArchipelagoRealmState->IsInstanceUnlocked(Archipelago::CoreLoop::INSTANCE_KEY_ICECROWN_CITADEL);
        else if (mode == "completionist")
            complete = IsCompletionistComplete();
        else if (mode == "collector")
            complete = IsCollectorComplete();
        // Every other GameMode value (gladiator) has no C++-side completion
        // check yet, matching goals.py's own dispatch for that mode -- this
        // function simply never reports completion for it, rather than
        // guessing. achievement_hunt/explorer are deferred entirely
        // (not_buildable, see docs/m4-plan.md Task 27's outcome note), not
        // merely not-yet-implemented.

        if (complete)
            sArchipelagoMgr->SendGoalComplete();
    }
}
