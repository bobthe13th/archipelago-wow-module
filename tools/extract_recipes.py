#!/usr/bin/env python3
"""DB-driven extraction for the Learned Recipes content family (M4.9).
Run this to regenerate content/recipes.yaml; never hand-edit that file.
Must run BEFORE extract_trainer_spells.py -- that script reads this one's
output to exclude cross-family spell_id collisions (see this milestone's
plan, Global Constraints)."""
from __future__ import annotations

import pathlib
from typing import Optional

import yaml

from db_extract import run_query, is_denylisted, load_exclusion_rules, parse_skill_line_abilities

_LOCATION_ID_BASE = 6_000_000
_ITEM_ID_BASE = 6_500_000

_ITEM_CLASS_RECIPE = 9  # ITEM_CLASS_RECIPE, src/server/game/Entities/Item/ItemTemplate.h:300
_ITEM_SPELLTRIGGER_LEARN_SPELL_ID = 6  # ItemTemplate.h:88 -- NOT 1 (that's
                                        # ITEM_SPELLTRIGGER_ON_EQUIP); see this plan's
                                        # Global Constraints for the full verification.

# Same skill_id -> profession-name pairing content/professions.yaml already
# established (skill_milestone triggers) -- reused verbatim for a
# consistent tag vocabulary across both families.
_SKILL_ID_TO_PROFESSION = {
    129: "first_aid", 164: "blacksmithing", 165: "leatherworking", 171: "alchemy",
    182: "herbalism", 185: "cooking", 186: "mining", 197: "tailoring",
    202: "engineering", 333: "enchanting", 356: "fishing", 393: "skinning",
    755: "jewelcrafting", 773: "inscription",
}


def _pick_taught_spell(row: dict) -> Optional[int]:
    """Scan all 5 spellid_N/spelltrigger_N slot pairs for the real "this
    item teaches a spell" signal (spelltrigger_N == 6,
    ITEM_SPELLTRIGGER_LEARN_SPELL_ID) and return that slot's spellid_N.
    Verified against the real live DB (this plan's own research) that this
    signal is ALWAYS in slot 2 in practice for every one of the 2,034 real
    class=9 rows that carry it at all -- scanning all 5 is defensive, not
    a documented alternate case. Returns None for a class=9 row with no
    real spell association at all (confirmed real: 877 of the 1,032
    non-slot-6 rows are legacy "Tome of X"/"Tablet of X" rows with EVERY
    spellid_N/spelltrigger_N at 0 -- pre-existing junk data, not a real
    recipe; the remainder are literally named "Deprecated ..."/"...
    OLD"/"NPC Equip ...", already caught by exclusion_rules.yaml's
    denylist regardless)."""
    for n in range(1, 6):
        if int(row[f"spelltrigger_{n}"]) == _ITEM_SPELLTRIGGER_LEARN_SPELL_ID:
            spell_id = int(row[f"spellid_{n}"])
            if spell_id != 0:
                return spell_id
    return None


def _profession_tag(skill_line_id: Optional[int]) -> str:
    if skill_line_id is None:
        return "other"
    return _SKILL_ID_TO_PROFESSION.get(skill_line_id, "other")


def _expansion_tag(required_skill_rank: int) -> str:
    """WotLK's own profession-bracket convention -- the exact thresholds
    content/professions.yaml's skill_milestone rows already use (75/150/
    225/300/375/450): 300 is vanilla's real skill cap, 375 is TBC's.
    required_skill_rank == 0 (58 of 2,034 real rows, e.g. cooking recipes
    usable from skill 1) defaults to vanilla, the lowest-risk default,
    mirroring db_extract.parse_map_expansions' own unrecognized-value
    convention."""
    if required_skill_rank <= 300:
        return "vanilla"
    if required_skill_rank <= 375:
        return "tbc"
    return "wotlk"


def extract() -> dict:
    rules = load_exclusion_rules()
    spell_to_skill = parse_skill_line_abilities()
    rows = run_query(f"""
        SELECT entry, name, RequiredSkillRank,
               spellid_1, spelltrigger_1, spellid_2, spelltrigger_2,
               spellid_3, spelltrigger_3, spellid_4, spelltrigger_4,
               spellid_5, spelltrigger_5
        FROM item_template
        WHERE class = {_ITEM_CLASS_RECIPE}
          AND (spelltrigger_1 = {_ITEM_SPELLTRIGGER_LEARN_SPELL_ID}
            OR spelltrigger_2 = {_ITEM_SPELLTRIGGER_LEARN_SPELL_ID}
            OR spelltrigger_3 = {_ITEM_SPELLTRIGGER_LEARN_SPELL_ID}
            OR spelltrigger_4 = {_ITEM_SPELLTRIGGER_LEARN_SPELL_ID}
            OR spelltrigger_5 = {_ITEM_SPELLTRIGGER_LEARN_SPELL_ID})
        ORDER BY entry
    """)

    # Dedup by taught spell_id (this plan's own research: 119 of 2,034 real
    # rows share their taught spell_id with another item entry, e.g. two
    # different physical recipe items both teaching spell 6417 "Dig Rat
    # Stew"). The runtime C++ lookup is spell_id -> ONE location_id, so at
    # most one location may exist per spell_id -- keep the lowest item
    # entry (deterministic), drop the rest.
    best_row_by_spell: dict[int, tuple] = {}
    for row in rows:
        row_dict = {
            "spellid_1": row[3], "spelltrigger_1": row[4],
            "spellid_2": row[5], "spelltrigger_2": row[6],
            "spellid_3": row[7], "spelltrigger_3": row[8],
            "spellid_4": row[9], "spelltrigger_4": row[10],
            "spellid_5": row[11], "spelltrigger_5": row[12],
        }
        taught_spell = _pick_taught_spell(row_dict)
        if taught_spell is None:
            continue
        entry_int = int(row[0])
        existing = best_row_by_spell.get(taught_spell)
        if existing is None or entry_int < existing[0]:
            best_row_by_spell[taught_spell] = (entry_int, row[1], int(row[2]), taught_spell)

    locations, items = [], []
    for taught_spell in sorted(best_row_by_spell):
        entry_int, name, required_skill_rank, _ = best_row_by_spell[taught_spell]
        if not name or is_denylisted(name, rules):
            continue

        profession = _profession_tag(spell_to_skill.get(taught_spell))
        expansion = _expansion_tag(required_skill_rank)

        locations.append({
            "name": f"{name} (#{entry_int})",
            "location_id": _LOCATION_ID_BASE + entry_int,
            "trigger": {"kind": "learn_spell", "spell_id": taught_spell},
            "tags": {"profession": [profession], "expansion": [expansion]},
        })
        items.append({
            "name": f"Item: {name} (#{entry_int})",
            "item_id": _ITEM_ID_BASE + entry_int,
            "delivery": {"kind": "mail", "wow_item_entry": entry_int},
        })

    return {"family": "recipes", "locations": locations, "items": items, "constants": {}}


if __name__ == "__main__":
    data = extract()
    out_path = pathlib.Path(__file__).parent.parent / "content" / "recipes.yaml"
    with open(out_path, "w", encoding="utf-8") as f:
        f.write("# GENERATED FILE - do not hand-edit.\n")
        f.write(f"# Regenerate with: python tools/{pathlib.Path(__file__).name}\n")
        yaml.safe_dump(data, f, sort_keys=False, allow_unicode=True)
    print(f"Wrote {len(data['locations'])} recipe locations to {out_path}")
