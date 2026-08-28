#!/usr/bin/env python3
"""DB-driven extraction for the Filler Reward Effects content family
(M4.9.6). Run this to regenerate content/filler_reward_effects.yaml; never
hand-edit that file. Replaces M4.9.3.1's static 5-row hand-written YAML
with many discrete per-value rows across the same 5 player-facing
categories (random_buff/gold_reward/xp_reward/title/portable_service) --
see docs/superpowers/specs/2026-08-28-archipelago-wow-m4.9.6-filler-effect-
variety-design.md.

Random Buff draws from db_extract.parse_filler_buff_spell_candidates (real,
DBC-derived, 568 rows as of this checkout's Spell.dbc). Gold/XP/Title/
Portable Service are small, fully-curated sets (real WoW discrete amounts/
percentages/title ids/items), following the same curation discipline
extract_filler_reward_items.py's own _TOY_ENTRIES already established for a
small hand-verified set."""
from __future__ import annotations

import pathlib

import yaml

from db_extract import parse_filler_buff_spell_candidates

_ITEM_ID_BASE = 8_500_000

# Real copper amounts for the 21 Gold Reward tiers (explicit user-specified
# discrete list, M4.9.6 brainstorming): 1c/5c/10c/50c/1s/5s/10s/50s/1g/5g/
# 10g/25g/50g/75g/100g/125g/150g/200g/250g/500g/1000g. Player::ModifyMoney's
# real unit is copper (100 copper = 1 silver, 100 silver = 1 gold --
# Player.h:1632).
_GOLD_TIERS = [
    ("1 Copper", 1), ("5 Copper", 5), ("10 Copper", 10), ("50 Copper", 50),
    ("1 Silver", 100), ("5 Silver", 500), ("10 Silver", 1000), ("50 Silver", 5000),
    ("1 Gold", 10000), ("5 Gold", 50000), ("10 Gold", 100000), ("25 Gold", 250000),
    ("50 Gold", 500000), ("75 Gold", 750000), ("100 Gold", 1000000), ("125 Gold", 1250000),
    ("150 Gold", 1500000), ("200 Gold", 2000000), ("250 Gold", 2500000),
    ("500 Gold", 5000000), ("1000 Gold", 10000000),
]

# Real percentages for the 9 XP Reward tiers (explicit user-specified
# discrete list, M4.9.6 brainstorming) -- percent of the player's CURRENT
# progress toward next level, read live at delivery time (unchanged from
# M4.9.3.1's ApplyXpReward).
_XP_TIERS = [1, 5, 10, 15, 20, 25, 30, 40, 50]

# Real, unchanged CharTitles.dbc ids and display names (direct DBC parse,
# field[2]=nameMale enUS, verified during M4.9.6 planning) -- same 8 ids
# M4.9.3.1's FILLER_TITLE_IDS already used ("leave titles as-is" per
# explicit user direction); only the delivery mechanism (one discrete row
# per title vs a single urand() pick) is new this milestone.
_TITLE_TIERS = [
    (77, "the Exalted"), (78, "the Explorer"), (79, "the Diplomat"),
    (84, "Chef"), (89, "Prophet"), (92, "of the Ebon Blade"),
    (93, "Archmage"), (98, "Iron Chef"),
]

# Real portable-service items, each with its own genuine on-use spell
# (item_template.spellid_1, data/sql/base/db_world/item_template.sql field
# 65 -- verified live during M4.9.6 planning): Jeeves (item 49040) casts
# spell 67826; Field Repair Bot 74A (item 18232) casts spell 22700; Remote
# Mail Terminal (item 23840) casts spell 30524; Field Repair Bot 110G
# (item 34113) casts spell 44389. Only the spell id is needed at delivery
# time -- ApplyPortableService now self-casts exactly like ApplyRandomBuff
# (no NPC summon); the real WoW item entries above are recorded here purely
# for traceability, not stored below.
_PORTABLE_SERVICE_TIERS = [
    ("Jeeves", 67826),
    ("Field Repair Bot 74A", 22700),
    ("Remote Mail Terminal", 30524),
    ("Field Repair Bot 110G", 44389),
]


def extract() -> dict:
    items: list[dict] = []
    next_id = _ITEM_ID_BASE

    buff_candidates = parse_filler_buff_spell_candidates()
    for spell_id, name in sorted(buff_candidates.items()):
        items.append({
            "name": f"Filler: Random Buff - {name} (#{spell_id})",
            "item_id": next_id,
            "count": 1,
            "delivery": {"kind": "filler_effect", "effect": "cast_spell", "param": spell_id},
        })
        next_id += 1

    for name, copper in _GOLD_TIERS:
        items.append({
            "name": f"Filler: Gold Reward - {name}",
            "item_id": next_id,
            "count": 1,
            "delivery": {"kind": "filler_effect", "effect": "grant_money", "param": copper},
        })
        next_id += 1

    for percent in _XP_TIERS:
        items.append({
            "name": f"Filler: XP Reward - {percent}%",
            "item_id": next_id,
            "count": 1,
            "delivery": {"kind": "filler_effect", "effect": "grant_xp_percent", "param": percent},
        })
        next_id += 1

    for title_id, display in _TITLE_TIERS:
        items.append({
            "name": f"Filler: Character Title - {display}",
            "item_id": next_id,
            "count": 1,
            "delivery": {"kind": "filler_effect", "effect": "grant_title", "param": title_id},
        })
        next_id += 1

    for name, spell_id in _PORTABLE_SERVICE_TIERS:
        items.append({
            "name": f"Filler: Portable Service - {name}",
            "item_id": next_id,
            "count": 1,
            "delivery": {"kind": "filler_effect", "effect": "portable_service", "param": spell_id},
        })
        next_id += 1

    return {"family": "filler_reward_effects", "locations": [], "items": items, "constants": {}}


if __name__ == "__main__":
    data = extract()
    out_path = pathlib.Path(__file__).parent.parent / "content" / "filler_reward_effects.yaml"
    with open(out_path, "w", encoding="utf-8") as f:
        f.write("# GENERATED FILE - do not hand-edit.\n")
        f.write(f"# Regenerate with: python tools/{pathlib.Path(__file__).name}\n")
        yaml.safe_dump(data, f, sort_keys=False, allow_unicode=True)
    print(f"Wrote {len(data['items'])} filler reward effect items to {out_path}")
