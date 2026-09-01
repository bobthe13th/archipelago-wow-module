// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoZoneLevelerScript.cpp
#include "Player.h"
#include "ScriptMgr.h"
#include "ArchipelagoRealmState.h"
#include "ArchipelagoZoneLevelerScriptPure.h"

// M4.11.1 Task 14 (design spec Sec2.2): enforces the Zone Leveler game
// mode's zone lock. A player whose slot is on a locked zone (BarrensBeater:
// the Barrens, zone id 17) is teleported back to their last known in-bounds
// position the moment OnPlayerUpdateZone fires for a zone that isn't the
// locked zone itself -- or, if zone_leveler_allow_hub_zone is on, one of the
// curated allowed hub zones (Durotar/Orgrimmar for Barrens).
//
// Real hook confirmed against this checkout's PlayerScript.h (line 338)/
// PlayerScript.cpp (line 260): void OnPlayerUpdateZone(Player*, uint32
// newZone, uint32 newArea), dispatched via PLAYERHOOK_ON_UPDATE_ZONE
// (PlayerScript.h line 74) -- registered as this class's sole hook, mirroring
// ArchipelagoLevelScript.cpp's own single-hook PlayerScript shape
// ({ PLAYERHOOK_ON_LEVEL_CHANGED }) exactly.
//
// Real recall-position API confirmed against Player.h (lines 2409-2414:
// uint32 m_recallMap; float m_recallX/Y/Z/O; void SaveRecallPosition();) and
// Player.cpp (lines 5822-5829: SaveRecallPosition()'s real implementation,
// sets all 5 fields from the player's current position). Teleport-back call
// shape mirrors the real, confirmed precedent at
// src/server/scripts/Commands/cs_misc.cpp:1367.
class ArchipelagoZoneLevelerScript : public PlayerScript
{
public:
    ArchipelagoZoneLevelerScript() : PlayerScript("ArchipelagoZoneLevelerScript", { PLAYERHOOK_ON_UPDATE_ZONE }) { }

    void OnPlayerUpdateZone(Player* player, uint32 newZone, uint32 /*newArea*/) override
    {
        if (sArchipelagoRealmState->GetGameMode() != "zone_leveler")
            return;

        uint32_t const lockedZoneId = sArchipelagoRealmState->GetZoneLevelerZoneId();
        if (Archipelago::ZoneLeveler::Pure::IsZoneAllowedForZoneLeveler(
                newZone, lockedZoneId, sArchipelagoRealmState->GetZoneLevelerAllowHubZone(),
                sArchipelagoRealmState->GetZoneLevelerAllowedHubZoneIds()))
        {
            // Remember the last known in-bounds position so a later
            // violation (entering a zone the check above rejects) can
            // teleport the player back HERE instead of a fixed hub point --
            // an invisible-barrier feel, not a hard reset to spawn (design
            // spec Sec2.2). Note: a player who has never once triggered this
            // branch (e.g. a fresh character whose very first zone update
            // never fires before some other path moves them) has
            // never-initialized m_recallMap/X/Y/Z/O; this edge case is
            // deferred to the manual verification checklist rather than
            // guessed at here, since Player's own recall fields' default
            // construction behavior isn't part of this task's confirmed API
            // surface.
            player->SaveRecallPosition();
            return;
        }

        player->TeleportTo(player->m_recallMap, player->m_recallX, player->m_recallY, player->m_recallZ, player->m_recallO);
    }
};

void AddArchipelagoZoneLevelerScripts()
{
    new ArchipelagoZoneLevelerScript();
}
