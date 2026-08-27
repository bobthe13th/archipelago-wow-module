// azerothcore-wotlk/modules/archipelago_wow/src/APTraps.h
#pragma once

#include <cstdint>
#include <string>

class Player;

// Task 17 (design spec Sec8's trap menu). A trap's effect fires once, on
// receipt of the AP item (see ArchipelagoPlayerScript.cpp's dispatch into
// Archipelago::Traps::ApItemToEffectAndLethal, ArchipelagoTrapsContentTable.h)
// -- traps have no persistent unlock state and no location of their own,
// unlike every other M4 content family.
namespace Archipelago::Traps
{
    // effect is one of ArchipelagoTrapsContentTable.h's delivery.effect slugs.
    // All 17 slugs have a real implementation as of M4.9.1 (see APTraps.cpp's
    // dispatcher); an unrecognized slug (e.g. a content-authoring typo) logs
    // and safely no-ops rather than crashing or silently pretending to have
    // applied something.
    //
    // Sec8's "No traps in sphere-0 starting zones" rule: if target is
    // currently in a sphere-0 zone, the effect is queued instead of applied
    // or dropped -- see FlushQueuedTrapsIfLeavingSphereZero below.
    void ApplyTrapEffect(Player* target, std::string const& effect, bool lethal);

    // Called from a small dedicated PlayerScript's OnPlayerUpdateZone hook
    // (ArchipelagoTrapZoneScript, registered in APTraps.cpp, same
    // one-hook-one-small-class shape as ArchipelagoLevelScript) whenever a
    // player's zone changes -- flushes any trap effects that were queued
    // while they were still in a sphere-0 zone, once they've actually left it.
    void FlushQueuedTrapsIfLeavingSphereZero(Player* player, uint32_t newZone);
}
