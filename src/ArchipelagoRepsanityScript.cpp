// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoRepsanityScript.cpp
//
// M4.10.4 (design spec Sec6): PlayerScript::OnPlayerReputationRankChange
// fires directly on every real reputation-rank crossing, already carrying
// the new rank -- confirmed live against ReputationMgr::SetReputation
// (ReputationMgr.cpp:443, sScriptMgr->OnPlayerReputationRankChange(_player,
// factionEntry->ID, new_rank, old_rank, _sendFactionIncreased)). Unlike
// ArchipelagoProfessionScript.cpp's skill-value threshold-scan loop (needed
// because OnPlayerSetSkill fires on every point of skill gain, not just
// milestone crossings), this hook needs no loop at all: newRank IS the
// milestone.
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
        ReputationRank /*oldRank*/, bool /*increased*/) override
    {
        auto it = ArchipelagoREPSANITYContent::FACTION_RANK_TO_LOCATION_ID.find({ factionID, uint32(newRank) });
        if (it != ArchipelagoREPSANITYContent::FACTION_RANK_TO_LOCATION_ID.end())
            sArchipelagoMgr->SendLocationChecks({ it->second });
    }
};

void AddArchipelagoRepsanityScripts()
{
    new ArchipelagoRepsanityScript();
}
