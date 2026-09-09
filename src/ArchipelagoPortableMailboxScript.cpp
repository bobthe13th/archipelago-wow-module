// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoPortableMailboxScript.cpp
//
// Task 5 (M4.14.1 "Useful Items"): Portable Mailbox. The consumable AP
// item (item_template entry 850104, see
// data/sql/updates/pending_db_world/) binds its spellid_1 to spell 5735,
// a real, existing, client-shipped spell (Spell.dbc name "REUSE") --
// confirmed live at implementation time to be a single-effect spell whose
// only real effect is SPELL_EFFECT_DUMMY (3), with zero item_template or
// src/server/scripts/ references anywhere in this checkout. Reusing this
// existing trigger spell (rather than fabricating a new one) honors the
// project's "no MPQ client patch" constraint -- a brand-new spell would
// need a new client-side Spell.dbc entry.
//
// EFFECT_0/1/2 slot ambiguity: this project's own DBC field-offset
// knowledge has been unreliable before (tools/parse_spell_dbc.py assumed
// Effect_1/2/3 live at DBC fields 69/70/71; the authoritative
// src/server/shared/DataStores/DBCStructure.h SpellEntry struct places
// them at 71/72/73 instead -- a 2-field-wide mismatch that would silently
// misattribute which effect slot is "real" for any spell with more than
// one effect). Rather than trust a single derived EFFECT_x index, this
// script registers HandleScriptEffect against all three real slots,
// filtered by the real effect type (SPELL_EFFECT_DUMMY) -- only the slot
// that genuinely matches will ever fire; the other two subscriptions are
// permanent, harmless no-ops. This sidesteps the offset-ambiguity problem
// entirely instead of re-deriving (and re-risking) a single "the" index.
#include "ObjectMgr.h"
#include "Player.h"
#include "SharedDefines.h"
#include "SpellScript.h"
#include "SpellScriptLoader.h"
#include "Unit.h"

namespace
{
    // gameobject_template entry 850200: a despawn-timed clone of the real
    // static mailbox row (entry 32349), see the SQL migration comment for
    // full provenance.
    constexpr uint32 PORTABLE_MAILBOX_GAMEOBJECT_ENTRY = 850200;
    constexpr uint32 PORTABLE_MAILBOX_DESPAWN_MS = 5 * MINUTE * IN_MILLISECONDS;
}

// 5735 - REUSE (real client spell, repurposed as the Portable Mailbox's
// trigger spell -- see file header comment)
class spell_archipelago_portable_mailbox : public SpellScript
{
    PrepareSpellScript(spell_archipelago_portable_mailbox);

    void HandleScriptEffect(SpellEffIndex /*effIndex*/)
    {
        Unit* caster = GetCaster();
        if (!caster)
            return;

        caster->SummonGameObject(PORTABLE_MAILBOX_GAMEOBJECT_ENTRY, caster->GetPositionX(), caster->GetPositionY(),
            caster->GetPositionZ(), caster->GetOrientation(), 0.0f, 0.0f, 0.0f, 0.0f, PORTABLE_MAILBOX_DESPAWN_MS);
    }

    void Register() override
    {
        // Independent subscriptions, one per real effect slot -- see file
        // header comment for why all three are registered instead of one
        // derived index. Only the slot spell 5735 actually uses will fire.
        OnEffectHit += SpellEffectFn(spell_archipelago_portable_mailbox::HandleScriptEffect,
            EFFECT_0, SPELL_EFFECT_DUMMY);
        OnEffectHit += SpellEffectFn(spell_archipelago_portable_mailbox::HandleScriptEffect,
            EFFECT_1, SPELL_EFFECT_DUMMY);
        OnEffectHit += SpellEffectFn(spell_archipelago_portable_mailbox::HandleScriptEffect,
            EFFECT_2, SPELL_EFFECT_DUMMY);
    }
};

void AddArchipelagoPortableMailboxScripts()
{
    RegisterSpellScript(spell_archipelago_portable_mailbox);
}
