// azerothcore-wotlk/modules/archipelago_wow/src/APCatchUp.h
#pragma once

#include <cstdint>

class Player;

// Task 16 (design spec Sec7.2, "New characters"): every WoW item ever
// delivered to this realm (regardless of which Archipelago::Delivery::Policy
// routed it -- see ArchipelagoPlayerScript.cpp's DeliverArchipelagoItems,
// which logs every delivery into archipelago_delivery_history unconditionally)
// only ever reached one specific character historically (EveryoneReceives'
// Archipelago.DeliveryCharacter). A brand-new character on an established
// realm starts with none of that. These functions apply the operator's
// configured Archipelago.CatchUpPolicy (mirrored into ArchipelagoRealmState,
// same manual-sync convention as every other M4 config toggle) to close that
// gap -- called from ArchipelagoPlayerScript's OnPlayerLogin and
// ArchipelagoLevelScript's OnPlayerLevelChanged, the two existing PlayerScript
// hooks that already own those events.
namespace Archipelago::CatchUp
{
    void OnPlayerLogin(Player* player, bool isFirstLoginEver);
    void OnPlayerLevelChanged(Player* player, uint8_t oldLevel, uint8_t newLevel);
}
