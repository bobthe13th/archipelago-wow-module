#!/usr/bin/env python3
"""DB-driven extraction for the Itemsanity content family (M4.10.6).
Run this to regenerate content/itemsanity.yaml; never hand-edit that file.
Event-hook family (item_first_held trigger kind) -- no loot slot, no DB
rewrite. Deliberately the largest DB-extracted family in this project by
row count (real live count 68,298 item_template rows before denylist
filtering); registered generic=True in generate_content.py's FAMILY_SCHEMAS
so it inherits the already-safe raw-array-plus-runtime-builder C++
emission M4.7.1 built, rather than needing any bespoke stack-safety work."""
from __future__ import annotations

import pathlib

import yaml

from db_extract import run_query, is_denylisted, load_exclusion_rules

_LOCATION_ID_BASE = 12_500_000
_ITEM_ID_BASE = 13_500_000  # deliberately 1,000,000 clear of the location range -- see Global Constraints

# Real, live-DB test-pollution rows at entry>=4000000 (mirror copies from a
# prior milestone's manual-verification tooling, e.g. "m4-7test's Vendor
# Item: ...") that exclusion_rules.yaml's \btest\b denylist does NOT catch
# (no word boundary between "m4-7" and "test") -- this query filters
# entry < 4000000 explicitly. See this plan's Global Constraints.
_TEST_POLLUTION_FILTER = "entry < 4000000"

# Real ItemClass enum values (src/server/game/Entities/Item/ItemTemplate.h:289-308).
_CLASS_NAMES = {
    0: "consumable", 1: "container", 2: "weapon", 3: "gem", 4: "armor",
    5: "reagent", 6: "projectile", 7: "trade_goods", 8: "generic", 9: "recipe",
    10: "money", 11: "quiver", 12: "quest", 13: "key", 14: "permanent",
    15: "misc", 16: "glyph",
}

# Real ItemQualities enum values (src/server/shared/SharedDefines.h:315-327).
_QUALITY_NAMES = {
    0: "poor", 1: "normal", 2: "uncommon", 3: "rare", 4: "epic",
    5: "legendary", 6: "artifact", 7: "heirloom",
}


def _class_tag(class_value: int) -> str:
    """Real item_template.class values are exhaustively 0-16 per the real
    ItemClass enum -- a value outside this map would mean the live DB has
    a class byte this project's AzerothCore version doesn't define, which
    is a real data problem worth a loud failure, not a silent guess."""
    return _CLASS_NAMES[class_value]


def _quality_tag(quality_value: int) -> str:
    """Same exhaustiveness argument as _class_tag -- real Quality values
    are 0-7 per the real ItemQualities enum."""
    return _QUALITY_NAMES[quality_value]


def _expansion_tag(required_level: int) -> str:
    """No expansion column exists on item_template (unlike every prior
    family, which joins a real spawn map). Same bracket convention
    Gathersanity's own _disenchant_expansion_tags established for exactly
    this situation -- RequiredLevel=0 (the common "no requirement" case)
    falls back to vanilla, same lowest-risk-default convention this
    project already uses everywhere else for an unresolvable row."""
    if required_level <= 60:
        return "vanilla"
    if required_level <= 70:
        return "tbc"
    return "wotlk"


def extract() -> dict:
    rules = load_exclusion_rules()

    rows = run_query(f"""
        SELECT entry, name, class, Quality, RequiredLevel
        FROM item_template
        WHERE entry > 0 AND {_TEST_POLLUTION_FILTER}
        ORDER BY entry
    """)

    locations, items = [], []
    for entry_str, name, class_str, quality_str, required_level_str in rows:
        if not name or is_denylisted(name, rules):
            continue

        entry = int(entry_str)
        idx = len(locations)
        display = f"{name} (#{entry})"

        locations.append({
            "name": f"Itemsanity: {display}",
            "location_id": _LOCATION_ID_BASE + idx,
            "trigger": {"kind": "item_first_held", "item_entry": entry},
            "tags": {
                "class": [_class_tag(int(class_str))],
                "quality": [_quality_tag(int(quality_str))],
                "expansion": [_expansion_tag(int(required_level_str))],
            },
        })
        items.append({
            "name": f"Itemsanity Item: {display}",
            "item_id": _ITEM_ID_BASE + idx,
            "delivery": {"kind": "mail", "wow_item_entry": entry},
        })

    return {"family": "itemsanity", "locations": locations, "items": items, "constants": {}}


if __name__ == "__main__":
    data = extract()
    out_path = pathlib.Path(__file__).parent.parent / "content" / "itemsanity.yaml"
    with open(out_path, "w", encoding="utf-8") as f:
        f.write("# GENERATED FILE - do not hand-edit.\n")
        f.write(f"# Regenerate with: python tools/{pathlib.Path(__file__).name}\n")
        yaml.safe_dump(data, f, sort_keys=False, allow_unicode=True)
    print(f"Wrote {len(data['locations'])} itemsanity locations to {out_path}")
