// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoRepsanityScript.cpp
//
// M4.10.4 (design spec Sec6): PlayerScript::OnPlayerReputationRankChange
// fires once per real reputation-rank-changing SetReputation call, carrying
// both the old and new rank -- confirmed live against
// ReputationMgr::SetReputation (ReputationMgr.cpp:416-444: old_rank/new_rank
// are each computed once, and sScriptMgr->OnPlayerReputationRankChange fires
// exactly once when they differ, with no loop over intervening ranks in the
// core). Like ArchipelagoProfessionScript.cpp's skill-value threshold-scan
// loop (needed because a single OnPlayerSetSkill call, e.g. a trainer visit
// or GM command, can cross more than one milestone at once) and
// ArchipelagoLevelScript.cpp's oldLevel..newLevel range-scan, a single
// reputation-changing event here (a GM command, or a large real quest-reward
// reputation grant -- this happens in real WotLK content) can likewise cross
// more than one rank in one call, and there is no later event that would
// naturally re-trigger a skipped intermediate rank on the way up. So this
// hook mirrors that same (oldRank, newRank] range-scan rather than checking
// newRank alone.
#include <vector>

#include "Player.h"
#include "ScriptMgr.h"
#include "SharedDefines.h"
#include "ArchipelagoManager.h"
#include "ArchipelagoREPSANITYContent.h"

class ArchipelagoRepsanityScript : public PlayerScript
{
public:
    ArchipelagoRepsanityScript() : PlayerScript("ArchipelagoRepsanityScript", { PLAYERHOOK_ON_REPUTATION_RANK_CHANGE }) { }

    void OnPlayerReputationRankChange(Player* /*player*/, uint32 factionID, ReputationRank newRank,
        ReputationRank oldRank, bool /*increased*/) override
    {
        // A single reputation-changing event can cross more than one rank at
        // once (see file header) -- scan every rank in (oldRank, newRank]
        // rather than only checking newRank. When newRank <= oldRank (a
        // reputation decrease), oldRank+1 > newRank and the loop body never
        // executes, so this is naturally a no-op for decreases too.
        std::vector<int64_t> checks;
        for (uint32 rank = uint32(oldRank) + 1; rank <= uint32(newRank); ++rank)
        {
            auto it = ArchipelagoREPSANITYContent::FACTION_RANK_TO_LOCATION_ID.find({ factionID, rank });
            if (it != ArchipelagoREPSANITYContent::FACTION_RANK_TO_LOCATION_ID.end())
                checks.push_back(it->second);
        }
        if (!checks.empty())
            sArchipelagoMgr->SendLocationChecks(checks);
    }
};

void AddArchipelagoRepsanityScripts()
{
    new ArchipelagoRepsanityScript();
}
