// azerothcore-wotlk/modules/archipelago_wow/src/APGateDecision.h
#pragma once

#include <cstddef>
#include <cstdint>

namespace Archipelago::Gating
{
    // Pure decision logic for a continuous-suppression gate: true means
    // "block the action, show the system message" -- matching every
    // OnPlayerCan*/opcode handler's own inline "!enabled -> allow,
    // !familyEnabled -> allow, unlocked -> allow, else -> suppress" shape
    // already established in APGating.cpp's PlayerScript classes (e.g.
    // ArchipelagoHearthGateScript). Factored out here with zero
    // AzerothCore engine dependencies (matching APInterception.h's
    // precedent) specifically so it's unit-testable in the standalone
    // doctest target -- the Player/WorldSession-touching hook classes
    // themselves stay manually verified only, per this module's
    // established discipline for anything requiring a live session (see
    // APTraps.cpp/APDelivery.cpp/every PlayerScript in APGating.cpp).
    bool ShouldSuppressGatedAction(bool moduleEnabled, bool gateFamilyEnabled, bool flagUnlocked);

    // Pure decision logic for a progressive/tiered gate (e.g. bank bag
    // slots, glyph slots): true means "this specific tier is not yet
    // granted, skip applying it" -- matching SyncCharacterUnlocksToPlayer's
    // existing monotonic-max shape (APGating.cpp) but as a per-tier
    // predicate rather than a single grant call, since InitGlyphsForLevel
    // needs to decide per-slot-index whether to call SetGlyphSlot at all.
    bool ShouldSuppressGatedTier(bool moduleEnabled, bool gateFamilyEnabled, uint32_t requiredTier, uint32_t grantedTier);

    // Pure decision logic for the Trainersanity trainer-purchase gate
    // (M-next): true means "block the vanilla TeachSpell learn/cast and
    // charge no gold" -- Trainer::CanTeachSpell already filters out a
    // spell the player legitimately already knows before this predicate
    // is ever consulted, so alreadyKnownOrGrantedViaAP only needs to
    // cover "already granted via APSpellGrant::GrantOrQueue" in practice.
    bool ShouldBlockTrainerTeach(bool moduleEnabled, bool alreadyKnownOrGrantedViaAP);

    // Progressive Bag Slots gate (M4.14.1): true if slot is one of the 4
    // non-backpack inventory bag slots (INVENTORY_SLOT_BAG_START=19 through
    // INVENTORY_SLOT_BAG_END=23, exclusive -- real constants confirmed in
    // src/server/game/Entities/Player/Player.h, reproduced as literals in
    // the .cpp rather than #included so this header/its .cpp stay free of
    // AzerothCore engine dependencies, matching this file's own established
    // discipline). Backpack slots and all other equipment slots are false.
    // Factored out here for the same standalone-doctest testability reason
    // as ShouldSuppressGatedTier above -- the Player*/Item*-touching hook
    // (ArchipelagoBagSlotGateScript::OnPlayerCanEquipItem, APGating.cpp)
    // stays manually verified only.
    bool IsNonBackpackBagSlot(uint32_t slot);

    // Maps a non-backpack bag slot to its 1-indexed progressive tier
    // (slot 19 -> tier 1, ..., slot 22 -> tier 4), matching content/
    // gates.yaml's "bag_slots" flag_key tiers 1-4. Callers must check
    // IsNonBackpackBagSlot(slot) first -- the return value for a slot
    // outside that range is unspecified.
    uint32_t BagSlotToTier(uint32_t slot);

    // Full suppression decision for ArchipelagoBagSlotGateScript::
    // OnPlayerCanEquipItem (APGating.cpp): composes ShouldSuppressGatedTier
    // with one bag-slot-specific rule -- notLoading must be true (matching
    // this hook's own not_loading parameter name exactly). Player::
    // _LoadInventory calls OnPlayerCanEquipItem with not_loading=false for
    // every already-equipped item at every login (confirmed real call site:
    // src/server/game/Entities/Player/PlayerStorage.cpp:5993-5994); denying
    // there strips the bag from its slot and mails it back to the player
    // (PlayerStorage.cpp:6050-6056) instead of blocking a new manual equip
    // attempt, which is the only case this gate is meant to suppress. Never
    // re-tests ShouldSuppressGatedTier's own already-covered logic -- only
    // adds the notLoading short-circuit.
    bool ShouldSuppressBagSlotEquip(bool notLoading, bool moduleEnabled, bool gateFamilyEnabled, uint32_t requiredTier, uint32_t grantedTier);

    // M4.14.1 final review fix (I2): ShouldSuppressBagSlotEquip above only
    // ever engages when the real AzerothCore hook fires with a specific
    // non-backpack bag slot -- true for an explicit drag-to-slot equip, but
    // NOT for WorldSession::HandleAutoEquipItemOpcode (right-click/shift-
    // click auto-equip, real confirmed call site: ItemHandler.cpp:192),
    // which calls Player::CanEquipItem(NULL_SLOT, ...) BEFORE resolving
    // which real slot the item lands in -- so the gate silently never
    // engaged for that path, letting a player bypass it entirely by right-
    // clicking a bag instead of dragging it. Since the real destination
    // slot isn't knowable at that call, this counts the player's CURRENT
    // number of equipped non-backpack bags instead and suppresses if
    // adding one more would exceed the granted tier. This is exact, not an
    // approximation, specifically for bags: Player::FindEquipSlot (real,
    // confirmed) is called with swap=false for a bag item in
    // HandleAutoEquipItemOpcode, so auto-equipping a bag can ONLY ever
    // resolve to a genuinely EMPTY non-backpack bag slot -- it never swaps
    // into an already-occupied one -- so "current count + 1" is always the
    // real resulting count, never an over- or under-estimate.
    bool ShouldSuppressBagSlotEquipByCount(bool notLoading, bool moduleEnabled, bool gateFamilyEnabled, uint32_t currentlyEquippedBagCount, uint32_t grantedTier);

    // Progressive Talent Tranches (M4.14.1): true means "block spending this
    // talent point". Retrofits the originally-shipped "Talent Point Access"
    // boolean gate (flag_key access_talent_points) into 3 tranches without
    // breaking already-generated seeds -- the existing tier-1 item is kept
    // as-is and reinterpreted as Tranche 1. Tier 0 always suppresses (no
    // Talent Point Access item received at all yet). Tiers 1/2 cap
    // cumulative points already spent at 25/50 respectively. Tier 3 (and any
    // higher tier) applies no cap at all: deliberately NOT expressed as a
    // hardcoded upper bound (e.g. the real default-RATE_TALENT level-80 max
    // of 71, confirmed via Player::CalculateTalentsPoints/Player.cpp), since
    // that would silently assume RATE_TALENT == 1.0 and could wrongly keep
    // suppressing on a server configured with a higher rate -- "fully
    // unlocked" is expressed by skipping the cap comparison entirely.
    // pointsAlreadySpent must be the count *before* the point currently
    // being attempted (Player::CalculateTalentsPoints() -
    // Player::GetFreeTalentPoints(), read at
    // PLAYERHOOK_CAN_LEARN_TALENT-fire-time, both real Player.h public
    // accessors -- OnPlayerCanLearnTalent fires before the point being
    // learned is added to the player's used-talent count).
    bool ShouldSuppressTalentLearn(bool moduleEnabled, bool gateFamilyEnabled, uint32_t tier, uint32_t pointsAlreadySpent);

    // M4.14.2 final review fix (I2): one row of the caller's gated-zone
    // table, with the "is this gate currently locked" decision already
    // resolved by the caller (i.e. ShouldSuppressGatedAction's result for
    // that gate's flagKey) -- this struct carries only the zoneId + the
    // resulting bool, not the flagKey/displayName themselves, so this file
    // stays free of the live sArchipelagoRealmState singleton dependency
    // per its own established discipline (see file-level comments above).
    struct GatedZoneLockState
    {
        uint32_t zoneId;
        bool locked;
    };

    // Given a zone id and a snapshot of the module's gated-zone table (one
    // GatedZoneLockState per curated gate, "locked" already resolved by the
    // caller), returns whether zoneId matches one of those gates AND that
    // gate is currently locked. A zoneId that isn't in the table at all
    // (not one of the module's curated gated zones) returns false -- i.e.
    // "trust it".
    //
    // Used by ArchipelagoZoneAccessScript.cpp to decide whether a player's
    // saved recall position (Player::m_recallMap/X/Y/Z) is itself a safe
    // deferred-kick destination, or whether it resolves into a still-gated
    // zone and the caller should fall back to homebind instead. Bug this
    // guards against: Player::LoadFromDB calls SaveRecallPosition()
    // unconditionally at login using the player's own just-loaded (saved-
    // at-logout) position, with no gate check at all -- so a player who
    // logged out (or whose gate got enabled) while standing inside a
    // gated-and-locked zone has a recall position that is ALSO inside that
    // same locked zone, making the existing deferred kick-back a no-op
    // (it "kicks" them right back to where they already are).
    bool IsZoneGatedAndLocked(uint32_t zoneId, GatedZoneLockState const* gates, size_t count);

    // M4.14.2 final review fix (I2, round 2): the 3-tier kick-back
    // destination choice for ArchipelagoZoneAccessScript.cpp's deferred
    // kick. Tier 1 (recall) is used if it isn't itself gated-and-locked
    // (see IsZoneGatedAndLocked above). If it is, tier 2 (homebind) is
    // used instead -- UNLESS homebind is also gated-and-locked, which is a
    // real, plausible case and not just theoretical: Dalaran and Shattrath
    // City are both real WotLK player-hub cities specifically designed
    // with functioning Inns (Dalaran is the max-level hub precisely
    // because it has full amenities including an inn; Shattrath City
    // likewise), so a player could genuinely have bound their hearthstone
    // in either one before zone_gating was ever turned on, or before
    // receiving that specific zone's AP item. In that case, fall back to
    // tier 3: the player's real racial/class starting position, which by
    // game design can never be one of these 3 curated endgame-hub zones --
    // no playable race starts in an endgame hub city. This is the exact
    // same real, already-established "known-safe teleport target" this
    // codebase's own Player::LoadFromDB already falls back to for invalid
    // saved coordinates (confirmed real call site,
    // src/server/game/Entities/Player/PlayerStorage.cpp, immediately after
    // sMapMgr->CreateMap(mapId, this) fails: `PlayerInfo const* info =
    // sObjectMgr->GetPlayerInfo(getRace(true), getClass());`), not
    // something invented for this fix.
    enum class ZoneGateKickTarget
    {
        Recall,
        Homebind,
        RacialStart,
    };

    ZoneGateKickTarget ChooseZoneGateKickTarget(bool recallIsGatedAndLocked, bool homebindIsGatedAndLocked);
}
