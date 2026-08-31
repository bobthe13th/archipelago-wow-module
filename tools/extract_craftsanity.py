#!/usr/bin/env python3
"""DB+DBC-driven extraction for the Craftsanity "recipe crafted" content
family (M4.10.5). Run this to regenerate content/craftsanity.yaml; never
hand-edit that file. Must run AFTER extract_recipes.py and
extract_trainer_spells.py -- this script reads both their outputs
(content/recipes.yaml, content/trainer_spells.yaml) for the real spell-id
universe and their already-computed profession/expansion tags, exactly the
same cross-referencing precedent extract_trainer_spells.py already
established against extract_recipes.py's output.

"Recipe found" is intentionally NOT extracted here -- see this plan's Scope
decision. This family covers ONLY "recipe crafted" (OnPlayerCreateItem)."""
from __future__ import annotations

import pathlib
import os

import yaml

from db_extract import run_query
from parse_spell_dbc import load_create_item_effects

_LOCATION_ID_BASE = 11_500_000
_ITEM_ID_BASE = 11_750_000

_DEFAULT_DBC_PATH = pathlib.Path(__file__).parent.parent.parent.parent / "var" / "extractors" / "dbc" / "Spell.dbc"
_DBC_PATH = pathlib.Path(os.environ.get("ARCHIPELAGO_WOW_SPELL_DBC_PATH", str(_DEFAULT_DBC_PATH)))
_CONTENT_DIR = pathlib.Path(__file__).parent.parent / "content"


def _load_spell_tags(yaml_path: pathlib.Path) -> dict[int, dict[str, list[str]]]:
    """spell_id -> tags, read from an already-generated content/*.yaml
    (recipes.yaml or trainer_spells.yaml)'s own locations list. Both files
    have exactly one learn_spell-triggered location per spell_id (confirmed
    by extract_trainer_spells.py's own cross-family collision exclusion),
    so this is a clean 1:1 join, not a fan-out."""
    data = yaml.safe_load(yaml_path.read_text(encoding="utf-8"))
    result: dict[int, dict[str, list[str]]] = {}
    for loc in data["locations"]:
        spell_id = loc["trigger"]["spell_id"]
        result[spell_id] = loc["tags"]
    return result


def build_craftsanity_rows(
    create_item_effects: dict[int, list[int]],
    spell_tags: dict[int, dict[str, list[str]]],
    item_names: dict[int, str],
) -> tuple[list[dict], list[dict]]:
    """Collapse (spell_id -> [produced item entries]) into one location per
    distinct produced item entry, unioning tags across every spell that
    produces the same item (a real, confirmed case: 8 item entries in this
    checkout's live data are produced by 2 different spells each).
    Item entries with no real item_template row are skipped (item_names
    only contains real, confirmed rows -- see extract_craftsanity_yaml's
    caller). Deterministic: sorted by item entry."""
    tags_by_item: dict[int, dict[str, set[str]]] = {}
    for spell_id, produced_items in create_item_effects.items():
        tags = spell_tags.get(spell_id)
        if tags is None:
            continue  # spell not in the recipes/trainer_spells universe -- out of scope
        for item_entry in produced_items:
            if item_entry not in item_names:
                continue
            merged = tags_by_item.setdefault(item_entry, {"profession": set(), "expansion": set()})
            merged["profession"].update(tags.get("profession", []))
            merged["expansion"].update(tags.get("expansion", []))

    locations: list[dict] = []
    items: list[dict] = []
    for index, item_entry in enumerate(sorted(tags_by_item)):
        merged_tags = tags_by_item[item_entry]
        name = item_names[item_entry]
        location_id = _LOCATION_ID_BASE + index
        item_id = _ITEM_ID_BASE + index
        locations.append({
            "name": f"Craft: {name} (#{item_entry})",
            "location_id": location_id,
            "trigger": {"kind": "recipe_craft", "item_entry": item_entry},
            "tags": {
                "profession": sorted(merged_tags["profession"]),
                "expansion": sorted(merged_tags["expansion"]),
            },
        })
        items.append({
            "name": f"Craftsanity Item: {name} (#{item_entry})",
            "item_id": item_id,
            "delivery": {"kind": "mail", "wow_item_entry": item_entry},
        })
    return locations, items


def main() -> None:
    create_item_effects = load_create_item_effects(_DBC_PATH)
    recipe_tags = _load_spell_tags(_CONTENT_DIR / "recipes.yaml")
    trainer_tags = _load_spell_tags(_CONTENT_DIR / "trainer_spells.yaml")
    spell_tags = {**recipe_tags, **trainer_tags}  # no overlap, confirmed (see Global Constraints)

    all_produced_entries = sorted({entry for entries in create_item_effects.values() for entry in entries})
    rows = run_query(
        f"SELECT entry, name FROM item_template WHERE entry IN "
        f"({','.join(str(e) for e in all_produced_entries)})"
    )
    item_names = {int(entry): name for entry, name in rows}

    locations, items = build_craftsanity_rows(create_item_effects, spell_tags, item_names)

    out_path = _CONTENT_DIR / "craftsanity.yaml"
    with out_path.open("w", encoding="utf-8") as f:
        f.write("# GENERATED FILE - do not hand-edit.\n")
        f.write("# Regenerate with: python tools/extract_craftsanity.py\n")
        yaml.safe_dump({"family": "craftsanity", "locations": locations, "items": items}, f, sort_keys=False)

    print(f"Wrote {len(locations)} locations, {len(items)} items to {out_path}")


if __name__ == "__main__":
    main()
