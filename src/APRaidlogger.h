// azerothcore-wotlk/modules/archipelago_wow/src/APRaidlogger.h
#pragma once

#include <cstdint>

// Raidlogger's instant_level_set delivery (M4.11.7, design spec Sec2): a
// direct Player::GiveLevel jump, gated on the lower tier's raid having
// actually been cleared server-side (ArchipelagoRealmState::
// HasSentLocationCheck on that raid's real core_loop.yaml location id). If
// the gate isn't yet satisfied, or the delivery character is offline, the
// jump is deferred (persisted via the existing generic
// SetFlagTier("raidlogger_pending_level", level) flag) and re-applied by
// ReapplyPendingLevelIfEligible, called both right after the gating raid's
// clear is recorded and from OnPlayerLogin catch-up. Neither function takes
// a deliveryCharacter parameter -- both read
// ArchipelagoRealmState::GetDeliveryCharacter() internally, since the
// instance-clear call site has no other access to it.
namespace Archipelago::Raidlogger
{
    void ApplyOrDeferInstantLevelSet(uint8_t level);
    void ReapplyPendingLevelIfEligible();
}
