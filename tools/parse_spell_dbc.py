#!/usr/bin/env python3
"""Spell.dbc reader for Craftsanity (M4.10.5), built on the shared
dbc_reader.py WDBC container parser (M4.10.4 Repsanity's Task 1) -- scoped to
exactly the two field groups Craftsanity needs. No existing tool in this
repo's tooling parsed raw client DBC files before Repsanity's dbc_reader.py;
azerothcore-wotlk's own extractors read Spell.dbc for map/vmap generation,
but nothing here reads its spell-effect data. Real, empirically-verified
field layout (see this milestone's plan Global Constraints -- confirmed live
against three known real recipes, not assumed from external documentation):

  field 0            = ID (spell id)
  fields 69, 70, 71   = Effect_1, Effect_2, Effect_3
  fields 105,106,107  = EffectItemType_1, EffectItemType_2, EffectItemType_3

SPELL_EFFECT_CREATE_ITEM = 24 (azerothcore-wotlk/src/server/shared/SharedDefines.h:790).
"""
from __future__ import annotations

import pathlib

from dbc_reader import load_dbc

_SPELL_EFFECT_CREATE_ITEM = 24
_ID_FIELD = 0
_EFFECT_FIELDS = (69, 70, 71)
_EFFECT_ITEM_TYPE_FIELDS = (105, 106, 107)


def load_create_item_effects(dbc_path: pathlib.Path) -> dict[int, list[int]]:
    """Return {spell_id: [produced_item_entry, ...]} for every spell in
    dbc_path with at least one real SPELL_EFFECT_CREATE_ITEM effect and a
    nonzero produced item entry. Spells with no such effect are absent from
    the result (not an error -- most spells aren't crafting spells). All
    fields this family needs (spell id, effect enum, produced item entry)
    are naturally non-negative, so dbc_reader's unsigned record_fields_u32
    is the correct accessor -- no signed/float reinterpretation needed here
    (contrast parse_faction_dbc.py, which does need that)."""
    dbc = load_dbc(dbc_path)

    result: dict[int, list[int]] = {}
    for i in range(dbc.record_count):
        fields = dbc.record_fields_u32(i)
        spell_id = fields[_ID_FIELD]
        produced = [
            fields[item_field]
            for effect_field, item_field in zip(_EFFECT_FIELDS, _EFFECT_ITEM_TYPE_FIELDS)
            if fields[effect_field] == _SPELL_EFFECT_CREATE_ITEM and fields[item_field] != 0
        ]
        if produced:
            result[spell_id] = produced
    return result
