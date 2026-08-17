// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoNorthrendPassageScript.cpp
#include "Chat.h"
#include "Player.h"
#include "ScriptMgr.h"
#include "Transport.h"
#include "ArchipelagoRealmState.h"

// Real, verified hook: TransportScript::OnAddPassenger (src/server/game/Scripting/ScriptDefines/TransportScript.h).
// This fires AFTER the player has already been inserted into the transport's
// passenger set (Transport.cpp: MotionTransport::AddPassenger /
// StaticTransport::AddPassenger both call _passengers.insert(...) before
// sScriptMgr->OnAddPassenger(...)). There is no pre-board cancellation point
// for GameObject transports, unlike AreaTriggerScript::OnTrigger used for the
// Dark Portal. This gate is therefore a post-hoc kick-back: detect the
// unauthorized boarding here and immediately remove the player and teleport
// them back to where they were standing, with a warning message. This has a
// visible UX cost (a brief moment of being on the transport before being
// kicked off) compared to the Dark Portal's clean pre-teleport block -- see
// the M2.1 checklist (Task 9) for this documented, known limitation.
class go_archipelago_northrend_passage : public TransportScript
{
public:
    go_archipelago_northrend_passage() : TransportScript("go_archipelago_northrend_passage") { }

    void OnAddPassenger(Transport* transport, Player* player) override
    {
        if (sArchipelagoRealmState->IsNorthrendPassageUnlocked())
            return;

        // Snapshot the player's current world position before detaching them
        // from the transport -- RemovePassenger(..., true) clears the
        // transport-relative movement state but does not touch the player's
        // absolute Position, so this is defensive rather than strictly
        // required.
        uint32 const mapId = player->GetMapId();
        float const x = player->GetPositionX();
        float const y = player->GetPositionY();
        float const z = player->GetPositionZ();
        float const o = player->GetOrientation();

        ChatHandler(player->GetSession()).PSendSysMessage("Passage to Northrend is sealed. Find the Archipelago Northrend Passage item first.");

        // withAll=true fully detaches the player (clears the transport
        // pointer, MOVEMENTFLAG_ONTRANSPORT, and the transport-relative
        // offset) rather than merely dropping them from the passenger set.
        transport->RemovePassenger(player, true);
        player->TeleportTo(mapId, x, y, z, o);
    }
};

void AddArchipelagoNorthrendPassageScripts()
{
    new go_archipelago_northrend_passage();
}
