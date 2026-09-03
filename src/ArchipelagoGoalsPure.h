// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoGoalsPure.h
#pragma once

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_set>
#include <vector>

// M4.11.1 Task 15. Pure, ArchipelagoRealmState/singleton-independent "is the
// Zone Leveler goal satisfied" decision -- unit-testable directly via
// test/test_ArchipelagoGoalsPure.cpp, matching the "pure decision function,
// no AzerothCore/singleton dependency" split this module already uses
// elsewhere (e.g. APTrapsPure.h, APGateDecision.h): this module's
// test executable (test/CMakeLists.txt) links no ArchipelagoRealmState.cpp/
// ArchipelagoGoals.cpp at all (neither has doctest-harness coverage as of
// this task -- confirmed by reading test/CMakeLists.txt's source list before
// adding this), so nothing that reads the sArchipelagoRealmState singleton
// directly can be exercised there. ArchipelagoGoals.cpp's real
// IsZoneLevelerComplete() (no-arg, reads the singleton) is a thin wrapper
// around this pure function -- see that file for the singleton-reading half.
namespace Archipelago::Goals::Pure
{
    // Every value this decision needs, gathered by the caller from
    // ArchipelagoRealmState so this function itself touches no global state.
    struct ZoneLevelerCompletionInput
    {
        std::unordered_set<std::string> selectedGoals;

        // reach_zone_level_cap: levelCapCopiesRequired is nullopt when the
        // connected slot's own "zone_leveler_<zone_key>" track isn't (yet)
        // present in Archipelago::CoreLoop::LEVEL_CAP_TOTAL_BY_TRACK (e.g.
        // GetZoneLevelerZoneKey() hasn't been populated from slot_data yet) --
        // treated as conservatively unsatisfied, same "don't report a false
        // win before the real data exists" discipline IsCompletionistComplete
        // already applies to an unrecognized CompletionistExpansion.
        uint32_t levelCapCopiesReceived = 0;
        std::optional<uint32_t> levelCapCopiesRequired;

        // golden_boar_statues.
        uint32_t statueCount = 0;
        uint32_t statuesRequired = 0;

        // instance_clears: instanceKeys is the connected slot's own curated
        // zone_leveler_instance_keys (slot_data); unlockedInstanceKeys is
        // whichever subset of ALL realm-unlocked instance keys happens to
        // overlap it (the caller computes this via
        // ArchipelagoRealmState::IsInstanceUnlocked per key, since this pure
        // function has no realm-state access of its own).
        std::vector<std::string> instanceKeys;
        std::unordered_set<std::string> unlockedInstanceKeys;
        uint32_t instancesRequired = 0;
    };

    // Mirrors goals.py's _set_completion_rule_zone_leveler, AND-ing together
    // one sub-rule per selected goal kind -- adapted to what this bespoke
    // C++ APClient can actually check live (no rules-evaluation engine, no
    // per-item multiworld state, only realm-wide counters/flags).
    //
    // clear_all_zone_quests is a real, DEFERRED gap (M4.11.1 Task 15): full
    // live detection needs to know which of Quest Rewards' ~9,207 total AP
    // item ids belong to the connected slot's own zone, but the C++-compiled
    // ArchipelagoQuestRewardsContentTable.h carries no zone_id data at all
    // (quest_rewards is a "generic"-shaped family in generate_content.py's
    // shared emitter, used by 9+ other content families -- extending that
    // shared emitter with zone_id is real, separate scope this task does not
    // attempt). Conservatively unsatisfied whenever selected, so
    // CheckAndSendGoalComplete never fires a false "you won" -- see
    // ArchipelagoGoals.cpp's own IsZoneLevelerComplete for the full citation.
    inline bool IsZoneLevelerComplete(ZoneLevelerCompletionInput const& in)
    {
        // Important 3 (final whole-branch review): an empty selectedGoals
        // set must NOT report complete. The AND-of-zero-conditions loop
        // below is vacuously true for an empty set, which is exactly wrong
        // here -- selectedGoals is populated from the connected seed's own
        // slot_data (ArchipelagoWorldScript.cpp's Connected handling), but
        // ArchipelagoLevelScript::OnPlayerLevelChanged calls
        // CheckAndSendGoalComplete() on every level-up regardless of
        // whether a live AP connection has delivered that slot_data yet
        // (game_mode itself is set at worldserver boot from the conf file,
        // independent of any live connection). Without this guard, a
        // zone_leveler-mode server would falsely report the goal complete
        // on the very first level-up after boot, before the AP client ever
        // connects -- and ArchipelagoManager::SendGoalComplete()'s own
        // persistence (SetGoalComplete()) means that false-complete state
        // would survive and be re-sent on the next real connect.
        if (in.selectedGoals.empty())
            return false;

        if (in.selectedGoals.count("reach_zone_level_cap"))
        {
            if (!in.levelCapCopiesRequired || in.levelCapCopiesReceived < *in.levelCapCopiesRequired)
                return false;
        }

        if (in.selectedGoals.count("clear_all_zone_quests"))
            return false;

        if (in.selectedGoals.count("golden_boar_statues"))
        {
            if (in.statueCount < in.statuesRequired)
                return false;
        }

        if (in.selectedGoals.count("instance_clears"))
        {
            uint32_t unlockedCount = 0;
            for (std::string const& instanceKey : in.instanceKeys)
                if (in.unlockedInstanceKeys.count(instanceKey))
                    ++unlockedCount;
            if (unlockedCount < in.instancesRequired)
                return false;
        }

        return true;
    }
}
