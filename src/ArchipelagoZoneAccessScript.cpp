// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoZoneAccessScript.cpp
#include <vector>

#include "Chat.h"
#include "Map.h"
#include "MapMgr.h"
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

    // Shared table lookup, used both for the zone the player just entered
    // (main hook body) and for the zone the player's recall position
    // resolves to (M4.14.2 final review fix I2, see below).
    ZoneGateEntry const* FindGate(uint32 zoneId)
    {
        for (auto const& entry : kGatedZones)
        {
            if (entry.zoneId == zoneId)
                return &entry;
        }

        return nullptr;
    }

    // Snapshot of "is this gate currently locked" for every row of
    // kGatedZones, evaluated against the live sArchipelagoRealmState
    // singleton at call time -- feeds the pure
    // Archipelago::Gating::IsZoneGatedAndLocked lookup (M4.14.2 final
    // review fix I2) without that pure layer needing the singleton itself.
    std::vector<Archipelago::Gating::GatedZoneLockState> SnapshotGateLockStates()
    {
        std::vector<Archipelago::Gating::GatedZoneLockState> states;
        states.reserve(sizeof(kGatedZones) / sizeof(kGatedZones[0]));

        for (auto const& entry : kGatedZones)
        {
            states.push_back({ entry.zoneId, Archipelago::Gating::ShouldSuppressGatedAction(
                sArchipelagoRealmState->IsEnabled(),
                sArchipelagoRealmState->IsGateFamilyEnabled("zone_access"),
                sArchipelagoRealmState->IsFlagUnlocked(entry.flagKey)) });
        }

        return states;
    }
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

        ZoneGateEntry const* gate = FindGate(newZone);

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

        // M4.14.2 final review fix (I2): Player::LoadFromDB
        // (PlayerStorage.cpp:5416) calls SaveRecallPosition() UNCONDITIONALLY
        // at login, using the player's own just-loaded (saved-at-logout)
        // position, with no gate check at all. If a player logged out (or
        // this gate got enabled) while standing inside a gated-and-locked
        // zone -- e.g. having entered before the AP item was ever required,
        // or via a GM .tele -- then at next login m_recall* == their current
        // (just-loaded, still-gated) position, and the "kick-back" below
        // would be a complete no-op: it would teleport them to the exact
        // spot they're already standing at, leaving them fully free to play
        // inside the gated zone. Guard against that by resolving the recall
        // position's own real zone id and checking whether IT is also
        // gated-and-locked. These resolutions can't change in the 0ms gap
        // before the deferred lambda runs (unlike the original zone's lock
        // state, which the lambda below still re-validates independently),
        // so resolving them once here at snapshot time is sufficient.
        uint32 const homebindMap = player->m_homebindMapId;
        float const homebindX = player->m_homebindX;
        float const homebindY = player->m_homebindY;
        float const homebindZ = player->m_homebindZ;

        Map* recallMapPtr = sMapMgr->CreateBaseMap(recallMap);
        uint32 const recallZoneId = recallMapPtr
            ? recallMapPtr->GetZoneId(PHASEMASK_NORMAL, recallX, recallY, recallZ)
            : 0;

        // Round 2 (final review re-check): homebind is NOT an unconditionally
        // safe fallback either -- Dalaran and Shattrath City are both real
        // WotLK player-hub cities with functioning Inns, so a player could
        // genuinely have bound their hearthstone in one of them before
        // zone_gating was ever turned on, or before receiving that specific
        // zone's AP item. Resolve homebind's real zone id the same way, so a
        // gated-and-locked homebind is caught too instead of teleporting the
        // player right back into a (possibly different) still-gated zone,
        // which would just re-trigger this same hook.
        Map* homebindMapPtr = sMapMgr->CreateBaseMap(homebindMap);
        uint32 const homebindZoneId = homebindMapPtr
            ? homebindMapPtr->GetZoneId(PHASEMASK_NORMAL, homebindX, homebindY, homebindZ)
            : 0;

        std::vector<Archipelago::Gating::GatedZoneLockState> const gateLockStates = SnapshotGateLockStates();

        // No usable map (shouldn't happen for a real saved position, but
        // treat it the same as "gated and locked" out of caution) or the
        // position resolves into one of our own still-locked gates: don't
        // trust it as a kick-back target.
        bool const recallIsGatedAndLocked = !recallMapPtr
            || Archipelago::Gating::IsZoneGatedAndLocked(recallZoneId, gateLockStates.data(), gateLockStates.size());
        bool const homebindIsGatedAndLocked = !homebindMapPtr
            || Archipelago::Gating::IsZoneGatedAndLocked(homebindZoneId, gateLockStates.data(), gateLockStates.size());

        Archipelago::Gating::ZoneGateKickTarget const kickTarget =
            Archipelago::Gating::ChooseZoneGateKickTarget(recallIsGatedAndLocked, homebindIsGatedAndLocked);

        uint32 kickMap = recallMap;
        float kickX = recallX;
        float kickY = recallY;
        float kickZ = recallZ;
        // Homebind and the racial start position have no stored orientation
        // field; 0.0f is fine for either, matching how a hearthstone-style
        // teleport doesn't care about landing orientation.
        float kickO = recallO;

        if (kickTarget == Archipelago::Gating::ZoneGateKickTarget::Homebind)
        {
            kickMap = homebindMap;
            kickX = homebindX;
            kickY = homebindY;
            kickZ = homebindZ;
            kickO = 0.0f;
        }
        else if (kickTarget == Archipelago::Gating::ZoneGateKickTarget::RacialStart)
        {
            // Tier 3: the player's real racial/class starting position --
            // by game design this can NEVER be one of the 3 curated
            // endgame-hub zones (no playable race starts in one of them).
            // This is the exact same real, established "known-safe
            // teleport target" Player::LoadFromDB itself already falls
            // back to for invalid saved coordinates
            // (PlayerStorage.cpp, right after sMapMgr->CreateMap(mapId,
            // this) fails), not something invented for this fix.
            if (PlayerInfo const* info = sObjectMgr->GetPlayerInfo(player->getRace(true), player->getClass()))
            {
                kickMap = info->mapId;
                kickX = info->positionX;
                kickY = info->positionY;
                kickZ = info->positionZ;
                kickO = 0.0f;
            }
            else
            {
                // GetPlayerInfo returning nullptr here would mean the
                // player's own race/class has no known starting location
                // at all, which can't happen for a real logged-in
                // character (the same race/class was already validated at
                // character creation) -- fall back to homebind's own
                // coordinates as the best remaining option (still
                // gated-and-locked, per this branch's own condition, but
                // strictly no worse than the pre-fix behavior) rather than
                // leaving kickMap/X/Y/Z at the also-gated-and-locked recall
                // position.
                kickMap = homebindMap;
                kickX = homebindX;
                kickY = homebindY;
                kickZ = homebindZ;
                kickO = 0.0f;
            }
        }

        // Defer to the player's next update tick (0ms offset -- guaranteed to
        // run on a later call to EventProcessor::Update(), never inside the
        // current call stack), matching ArchipelagoNorthrendPassageScript.cpp's
        // own established convention. If the player logs out before then,
        // EventProcessor's destructor aborts and deletes this event without
        // ever calling its Execute(), so there is no use-after-free risk.
        player->m_Events.AddEventAtOffset([player, flagKey, kickMap, kickX, kickY, kickZ, kickO]()
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

            player->TeleportTo(kickMap, kickX, kickY, kickZ, kickO);
        }, 0ms);
    }
};

void AddArchipelagoZoneAccessScripts()
{
    new player_archipelago_zone_access();
}
