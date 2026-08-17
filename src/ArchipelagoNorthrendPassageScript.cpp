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
//
// IMPORTANT: the actual removal/teleport MUST NOT happen synchronously from
// inside this callback. MotionTransport::AddPassenger (Transport.cpp) takes
// its non-recursive `Lock` for its entire body and calls
// sScriptMgr->OnAddPassenger(...) -- and therefore this method -- while still
// holding it. Transport::RemovePassenger() (both MotionTransport's and
// StaticTransport's overrides) unconditionally re-acquires that same lock at
// entry, and Player::TeleportTo() *also* calls m_transport->RemovePassenger()
// internally whenever the player currently has a transport set (which it
// already does at this point, per WorldSession::HandleMoverRelocation setting
// it before calling AddPassenger) -- so neither an explicit RemovePassenger()
// call nor a bare TeleportTo() call is safe here; both would re-lock the same
// mutex on the same thread and deadlock the owning map's update thread (and
// therefore the whole world tick, since World::Update() waits on
// MapUpdater::wait()).
//
// The fix is to defer the actual kick to the player's own next update tick,
// via the player's EventProcessor (Player::m_Events, inherited from
// WorldObject -- the same "schedule a lambda for later" idiom used all over
// this codebase, e.g. Spell.cpp's SpellEvent deferral to avoid similar
// reentrancy issues). WorldObject::Update() drives m_Events.Update(), and
// that only ever runs from the player's normal per-tick update, never from
// inside a transport's locked AddPassenger call stack -- so by the time our
// lambda executes, `Lock` is guaranteed to have been released.
class go_archipelago_northrend_passage : public TransportScript
{
public:
    go_archipelago_northrend_passage() : TransportScript("go_archipelago_northrend_passage") { }

    void OnAddPassenger(Transport* transport, Player* player) override
    {
        if (sArchipelagoRealmState->IsNorthrendPassageUnlocked())
            return;

        // Snapshot everything we need now; the deferred lambda re-validates
        // against live state (see below) before acting on any of it.
        ObjectGuid const transportGuid = transport->GetGUID();
        uint32 const mapId = player->GetMapId();
        float const x = player->GetPositionX();
        float const y = player->GetPositionY();
        float const z = player->GetPositionZ();
        float const o = player->GetOrientation();

        ChatHandler(player->GetSession()).PSendSysMessage(
            "Passage to Northrend is sealed. Find the Archipelago Northrend Passage item first.");

        // Defer to the player's next update tick (0ms offset -- guaranteed to
        // run on a later call to EventProcessor::Update(), never inside the
        // current call stack). If the player logs out before then,
        // EventProcessor's destructor (~EventProcessor -> KillAllEvents(true))
        // aborts and deletes this event without ever calling its Execute(),
        // so there is no use-after-free / dangling Player* risk.
        player->m_Events.AddEventAtOffset([player, transportGuid, mapId, x, y, z, o]()
        {
            // Re-validate before acting: the player may have already left
            // this transport by some other path (normal disembark, another
            // teleport, switching transports) between when this was
            // scheduled and when it actually runs. Only act if they're still
            // exactly where we think they are.
            if (!player->IsInWorld())
                return;

            Transport* currentTransport = player->GetTransport();
            if (!currentTransport || currentTransport->GetGUID() != transportGuid)
                return;

            currentTransport->RemovePassenger(player, true);
            player->TeleportTo(mapId, x, y, z, o);
        }, 0ms);
    }
};

void AddArchipelagoNorthrendPassageScripts()
{
    new go_archipelago_northrend_passage();
}
