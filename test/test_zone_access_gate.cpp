// azerothcore-wotlk/modules/archipelago_wow/test/test_zone_access_gate.cpp
//
// M4.14.2 final review fix (I2): Player::LoadFromDB
// (PlayerStorage.cpp:5416) calls SaveRecallPosition() unconditionally at
// login, using the player's own just-loaded (saved-at-logout) position --
// so a player who logged out (or whose gate got enabled) while standing
// inside one of ArchipelagoZoneAccessScript.cpp's gated-and-locked zones
// has a recall position that is ALSO inside that same locked zone. The
// existing deferred kick-back would then teleport them right back to where
// they already are -- a complete no-op bypass. Archipelago::Gating::
// IsZoneGatedAndLocked is the pure decision extracted from that fix: given
// a zone id and a snapshot of the module's gated-zone table (with "is this
// gate locked" already resolved by the caller against the live
// sArchipelagoRealmState singleton), decide whether that zone id should be
// distrusted as a kick-back target. The live Map*/GetZoneId resolution
// itself is not exercised here -- it needs a live map and stays manually
// verified only, matching this module's own established discipline (see
// test_APGateDecision.cpp / test_bag_slot_gate.cpp for the same pattern).
#include "doctest.h"
#include "APGateDecision.h"

TEST_CASE("IsZoneGatedAndLocked returns the matching gate's locked state")
{
    using namespace Archipelago::Gating;

    GatedZoneLockState const gates[] =
    {
        { 3703, true },  // Shattrath City -- locked
        { 4080, false }, // Isle of Quel'Danas -- unlocked
        { 4395, true },  // Dalaran -- locked
    };

    CHECK(IsZoneGatedAndLocked(3703, gates, 3) == true);
    CHECK(IsZoneGatedAndLocked(4080, gates, 3) == false);
    CHECK(IsZoneGatedAndLocked(4395, gates, 3) == true);
}

TEST_CASE("IsZoneGatedAndLocked trusts a zone id that isn't in the gate table at all")
{
    using namespace Archipelago::Gating;

    GatedZoneLockState const gates[] =
    {
        { 3703, true },
        { 4080, true },
        { 4395, true },
    };

    // A recall position in, say, Orgrimmar (zone 1637) isn't one of the
    // module's curated gates at all -- must not be distrusted just because
    // every curated gate happens to be locked.
    CHECK(IsZoneGatedAndLocked(1637, gates, 3) == false);
}

TEST_CASE("IsZoneGatedAndLocked handles an empty gate table (module disabled/no gates configured)")
{
    using namespace Archipelago::Gating;

    CHECK(IsZoneGatedAndLocked(3703, nullptr, 0) == false);
}

// Regression scenario for the actual bug: a player's recall position
// resolves into the SAME zone they were just kicked from (the no-op
// bypass) -- IsZoneGatedAndLocked must say "don't trust this", so the
// caller falls back to homebind instead of teleporting the player to
// themselves.
TEST_CASE("IsZoneGatedAndLocked flags a recall position resolving into the same locked gate the player is being kicked from")
{
    using namespace Archipelago::Gating;

    GatedZoneLockState const gates[] =
    {
        { 3703, true }, // Shattrath City, still locked
    };

    uint32_t const recallZoneId = 3703; // player's saved recall position is ALSO inside Shattrath
    CHECK(IsZoneGatedAndLocked(recallZoneId, gates, 1) == true);
}

// M4.14.2 final review fix (I2, round 2): homebind is NOT an
// unconditionally safe fallback either -- Dalaran and Shattrath City are
// both real WotLK player-hub cities with functioning Inns, so a player
// could genuinely have bound their hearthstone in one of them before
// zone_gating was ever turned on, or before receiving that specific zone's
// AP item. ChooseZoneGateKickTarget is the pure 3-tier decision this fix
// adds on top of IsZoneGatedAndLocked: recall if safe, else homebind if
// safe, else the player's real racial/class starting position (which by
// game design can never be one of these 3 curated zones).
TEST_CASE("ChooseZoneGateKickTarget prefers recall when it isn't gated-and-locked")
{
    using namespace Archipelago::Gating;

    CHECK(ChooseZoneGateKickTarget(/*recallIsGatedAndLocked=*/false, /*homebindIsGatedAndLocked=*/false) == ZoneGateKickTarget::Recall);
    CHECK(ChooseZoneGateKickTarget(/*recallIsGatedAndLocked=*/false, /*homebindIsGatedAndLocked=*/true) == ZoneGateKickTarget::Recall);
}

TEST_CASE("ChooseZoneGateKickTarget falls back to homebind when recall is gated-and-locked but homebind isn't")
{
    using namespace Archipelago::Gating;

    CHECK(ChooseZoneGateKickTarget(/*recallIsGatedAndLocked=*/true, /*homebindIsGatedAndLocked=*/false) == ZoneGateKickTarget::Homebind);
}

TEST_CASE("ChooseZoneGateKickTarget falls back to the racial start position when both recall and homebind are gated-and-locked")
{
    using namespace Archipelago::Gating;

    // Regression scenario for round 2 of this fix: e.g. a player's recall
    // is inside Shattrath City and their hearthstone is bound in Dalaran,
    // both still locked -- neither is safe, so the decision must reach the
    // one guaranteed-safe tier.
    CHECK(ChooseZoneGateKickTarget(/*recallIsGatedAndLocked=*/true, /*homebindIsGatedAndLocked=*/true) == ZoneGateKickTarget::RacialStart);
}
