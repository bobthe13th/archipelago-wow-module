// azerothcore-wotlk/modules/archipelago_wow/src/APSpellGrant.h
#pragma once

#include "DatabaseEnv.h"
#include "ObjectGuid.h"

#include <cstdint>

class Player;

namespace Archipelago::SpellGrant
{
    // M4.11.5.0.5: shared "teach this player spellId right now" primitive,
    // for delivery paths whose reward has no physical item at all (Trainer
    // Spells' own direct spell-grant items -- see that family's extraction
    // plan for why this is gated to never actually fire against this
    // checkout's real data today, and why the gate exists anyway). Learns
    // it immediately if the player is online; otherwise durably queues it
    // (archipelago_pending_spell_grants) for ApplyPendingGrants to apply on
    // next login -- there is no mail equivalent for a non-physical grant,
    // so this table is the deliberate substitute, same "never silently
    // lost" discipline APDelivery::GiveOrMailItem already established for
    // physical items.
    void GrantOrQueue(Player* onlinePlayerOrNull, ObjectGuid::LowType lowGuid, uint32_t spellId, CharacterDatabaseTransaction trans);

    // Called from ArchipelagoPlayerScript::OnPlayerLogin (mirroring
    // Archipelago::CatchUp::OnPlayerLogin's own call site there) -- applies
    // and clears every spell grant queued for this now-online character.
    void ApplyPendingGrants(Player* player);
}
