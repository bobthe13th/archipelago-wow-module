// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoZoneAccessScript.cpp
#include "Chat.h"
#include "Player.h"
#include "ScriptMgr.h"
#include "APGateDecision.h"
#include "ArchipelagoRealmState.h"

// Real hook: PlayerScript::OnPlayerUpdateZone (PlayerScript.h:355), dispatched
// from Player::UpdateZone -- fires AFTER the player has already physically
// entered the new zone (ordinary movement-opcode handling, not from inside
// any transport lock the way ArchipelagoNorthrendPassageScript.cpp's
// OnAddPassenger case is). A direct synchronous TeleportTo here is very
// likely safe, but this mirrors that file's own established deferred-kick
// convention rather than introducing the first unverified exception to it.
//
// Unlike the transport case, the player's OWN current position (snapshotted
// at hook-fire time) is already INSIDE the gated zone, so it can't be reused
// as the kick-back target. Instead: on every zone entry where the zone is
// NOT gated-and-locked, refresh Player::m_recallX/Y/Z/O/m_recallMap via
// SaveRecallPosition() (the same real, existing mechanism this server's own
// .recall/.appear GM commands use) -- so by the time an unauthorized entry
// is detected, the recall fields hold wherever the player last legitimately
// stood, and the deferred kick teleports them there.
namespace
{
    struct ZoneGateEntry
    {
        uint32 zoneId;
        char const* flagKey;
        char const* displayName;
    };

    ZoneGateEntry const kGatedZones[] =
    {
        { 3703, "zone_access_shattrath_city",     "Shattrath City" },
        { 4080, "zone_access_isle_of_quel_danas", "Isle of Quel'Danas" },
        { 4395, "zone_access_dalaran",            "Dalaran" },
    };
}

class player_archipelago_zone_access : public PlayerScript
{
public:
    player_archipelago_zone_access() : PlayerScript("player_archipelago_zone_access", { PLAYERHOOK_ON_UPDATE_ZONE }) { }

    void OnPlayerUpdateZone(Player* player, uint32 newZone, uint32 /*newArea*/) override
    {
        // When the module is disabled, this must be full vanilla behavior:
        // no gating, no lookups into unlock state at all.
        if (!sArchipelagoRealmState->IsEnabled())
            return;

        // Consumer-side half of the zone_access gate-family wiring (see
        // ArchipelagoWorldScript.cpp's OnBeforeConfigLoad): unless an
        // operator has explicitly opted in via Archipelago.ZoneGating (which
        // should only ever be on when the connected seed's own zone_gating
        // option is also on), this hook must be a no-op -- otherwise every
        // player would be permanently sealed out of all 3 curated zones,
        // since a seed that never rolled zone_gating never delivers the
        // matching flag items and the tier can never reach 1.
        if (!sArchipelagoRealmState->IsGateFamilyEnabled("zone_access"))
            return;

        ZoneGateEntry const* gate = nullptr;
        for (auto const& entry : kGatedZones)
        {
            if (entry.zoneId == newZone)
            {
                gate = &entry;
                break;
            }
        }

        if (!gate || !Archipelago::Gating::ShouldSuppressGatedAction(
                sArchipelagoRealmState->IsEnabled(),
                sArchipelagoRealmState->IsGateFamilyEnabled("zone_access"),
                sArchipelagoRealmState->IsFlagUnlocked(gate->flagKey)))
        {
            // Not a gated zone, or already unlocked -- this is a legitimate
            // stop; refresh the recall point so a LATER unauthorized entry
            // (into some other gated zone) has a fresh, valid fallback.
            player->SaveRecallPosition();
            return;
        }

        ChatHandler(player->GetSession()).PSendSysMessage(
            "{} is sealed. Find the Archipelago Zone Access item first.", gate->displayName);

        std::string const flagKey = gate->flagKey;
        uint32 const recallMap = player->m_recallMap;
        float const recallX = player->m_recallX;
        float const recallY = player->m_recallY;
        float const recallZ = player->m_recallZ;
        float const recallO = player->m_recallO;

        // Defer to the player's next update tick (0ms offset -- guaranteed to
        // run on a later call to EventProcessor::Update(), never inside the
        // current call stack), matching ArchipelagoNorthrendPassageScript.cpp's
        // own established convention. If the player logs out before then,
        // EventProcessor's destructor aborts and deletes this event without
        // ever calling its Execute(), so there is no use-after-free risk.
        player->m_Events.AddEventAtOffset([player, flagKey, recallMap, recallX, recallY, recallZ, recallO]()
        {
            if (!player->IsInWorld())
                return;

            // Re-validate before acting, mirroring
            // ArchipelagoNorthrendPassageScript.cpp's own discipline: in the
            // near-zero-but-nonzero gap between this hook firing and this
            // lambda executing, the player could have received the AP item
            // that unlocks this exact zone (e.g. via a queued mail delivery
            // processed on the same world tick). Don't kick them out of a
            // zone they're now legitimately allowed to be in.
            if (sArchipelagoRealmState->IsFlagUnlocked(flagKey))
                return;

            player->TeleportTo(recallMap, recallX, recallY, recallZ, recallO);
        }, 0ms);
    }
};

void AddArchipelagoZoneAccessScripts()
{
    new player_archipelago_zone_access();
}
