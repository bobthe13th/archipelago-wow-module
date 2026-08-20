// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoDeathLink.h
#pragma once

#include <vector>

#include "ObjectGuid.h"
#include "APProtocol.h"

class Player;

namespace Archipelago::DeathLink
{
    // Design spec Sec11's loop-guard requirement: "Tag every death with its
    // source; only player-caused deaths broadcast." Every code path that can
    // kill a player in a DeathLink-relevant way must tag itself with one of
    // these via TagNextDeath() before actually killing the player. Defined
    // here (not in Task 17, which runs earlier per the plan's recommended
    // sequencing) so both this file and APTraps.cpp/.h can depend on it --
    // Task 17's lethal trap effects (still unimplemented as of Task 17
    // landing; see docs/m4-plan.md) should call TagNextDeath(player, Trap) at
    // their kill call site once they exist.
    enum class DeathSource
    {
        PlayerCaused,
        IncomingDeathLink,
        Trap
    };

    // Call immediately before the code path that is about to kill a
    // specific player, when that death must NOT count as "player-caused"
    // for DeathLink's loop-guard purposes. Keyed per-player (by GUID), not
    // a single shared slot: OnPlayerJustDied does NOT fire synchronously
    // from every kill path -- verified against Player::Update()
    // (PlayerUpdates.cpp): "if (m_deathState == DeathState::JustDied)
    // KillPlayer();" is a general catch-all that only runs on the player's
    // *next* tick after Unit::DealDamage's kill chain sets that death
    // state, not inline with whatever code dealt the lethal damage. A batch
    // kill (HandleIncomingDeathLinks below, looping over every online
    // player in one world-thread tick) tags several different players
    // before any of their deferred KillPlayer() calls actually resolve, so
    // a single shared slot would have later players' tags silently
    // overwrite earlier ones before their hook fires. Per-GUID keying makes
    // each tag immune to that interleaving regardless of when its matching
    // OnPlayerJustDied eventually fires.
    void TagNextDeath(Player* player, DeathSource source);

    // Consumes (reads, then erases) the pending tag set by TagNextDeath for
    // this specific player. Returns PlayerCaused if no tag is pending (the
    // default assumption for every death this module didn't itself cause).
    // Called exactly once per death, by ArchipelagoDeathLinkScript's
    // OnPlayerJustDied -- not intended for any other caller.
    DeathSource ConsumePendingDeathSource(Player* player);

    // World-thread entry point for a batch of incoming DeathLink Bounces
    // received from the AP server -- drained from ArchipelagoWorldScript's
    // pending queue in OnUpdate, exactly like DeliverArchipelagoItems is for
    // received items. Respects Archipelago.DeathLinkReceiveEnabled and the
    // receive cooldown (ArchipelagoRealmState::TryConsumeDeathLinkReceiveCooldown).
    void HandleIncomingDeathLinks(std::vector<Archipelago::IncomingDeathLink> const& bounces);
}
