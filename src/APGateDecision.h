// azerothcore-wotlk/modules/archipelago_wow/src/APGateDecision.h
#pragma once

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
}
