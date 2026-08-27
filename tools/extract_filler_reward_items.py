#!/usr/bin/env python3
"""DB-driven extraction for the Filler Reward Items content family (M4.9.3.1).
Run this to regenerate content/filler_reward_items.yaml; never hand-edit
that file. 13 categories total: this file implements 10 independent ones
directly; the remaining 3 (recipe, mount, pet -- each cross-family-
dependent) are added by a later pass over this same file (see the plan's
Task 5). NOT the same family as the pre-existing content/filler.yaml
(sink LOCATIONS with no items, the opposite mechanism, backfilling gates/
traps' item surplus) -- see this plan's Global Constraints."""
from __future__ import annotations

import pathlib

import yaml

from db_extract import run_query, is_denylisted, load_exclusion_rules

_ITEM_ID_BASE = 8_000_000

# Real, live-DB test-pollution rows at entry>=4000000 (mirror copies from a
# prior milestone's manual-verification tooling, e.g. "m4-7test's Vendor
# Item: ...") that exclusion_rules.yaml's \btest\b denylist does NOT catch
# (no word boundary between "m4-7" and "test") -- every query below filters
# entry < 4000000 explicitly. See this plan's Global Constraints.
_TEST_POLLUTION_FILTER = "entry < 4000000"

# Real, verified-live queries (see this plan's own research for exact
# counts at the time of writing -- re-run for real counts, these are not
# hardcoded anywhere in the extraction logic itself).
_CATEGORY_QUERIES = {
    "badge_currency": f"""
        SELECT entry, name FROM item_template
        WHERE class = 10 AND name LIKE '%Emblem%' AND {_TEST_POLLUTION_FILTER}
        ORDER BY entry
    """,
    "consumable": f"""
        SELECT entry, name FROM item_template
        WHERE class = 0 AND subclass IN (1,2,3,4,5) AND {_TEST_POLLUTION_FILTER}
        ORDER BY entry
    """,
    "bag": f"""
        SELECT entry, name FROM item_template
        WHERE class = 1 AND {_TEST_POLLUTION_FILTER}
        ORDER BY entry
    """,
    "gear_enhancement_vellum": f"""
        SELECT entry, name FROM item_template
        WHERE name LIKE '%Vellum%' AND {_TEST_POLLUTION_FILTER}
        ORDER BY entry
    """,
    "gear_enhancement_gem": f"""
        SELECT entry, name FROM item_template
        WHERE class = 3 AND {_TEST_POLLUTION_FILTER}
        ORDER BY entry
    """,
    "equipment": f"""
        SELECT entry, name FROM item_template
        WHERE class IN (2,4) AND Quality IN (1,2) AND {_TEST_POLLUTION_FILTER}
        ORDER BY entry
    """,
    "openable": f"""
        SELECT entry, name FROM item_template
        WHERE class = 15 AND subclass = 0 AND (Flags & 4) AND lockid = 0 AND {_TEST_POLLUTION_FILTER}
        ORDER BY entry
    """,
    "seasonal": f"""
        SELECT entry, name FROM item_template
        WHERE HolidayId != 0 AND {_TEST_POLLUTION_FILTER}
        ORDER BY entry
    """,
    "tabard": f"""
        SELECT entry, name FROM item_template
        WHERE InventoryType = 19 AND {_TEST_POLLUTION_FILTER}
        ORDER BY entry
    """,
    "reagent": f"""
        SELECT entry, name FROM item_template
        WHERE class = 15 AND subclass = 1 AND {_TEST_POLLUTION_FILTER}
        ORDER BY entry
    """,
}

# Real "toy" candidates: WotLK 3.3.5a has no systematic Toy Box/IsToy
# column (a much later Blizzard feature) -- confirmed during planning that
# name-pattern search is too noisy to use as a live query (mostly quest-
# gated disguise-kit/whistle items, not standalone-usable toys). These 6
# are individually verified real, standalone-usable, non-quest-gated
# novelty items -- curated directly, same discipline as M4.9.1's Chicken/
# Hogger creature entries.
_TOY_ENTRIES = {
    33079: "Murloc Costume",
    17712: "Winter Veil Disguise Kit",
    23792: "Tree Disguise Kit",
    28607: "Sunfury Disguise",
    31122: "Overseer Disguise",
    3456: "Dog Whistle",
}


def _query_category(category: str, sql: str, rules: dict) -> list[dict]:
    rows = run_query(sql)
    result = []
    for entry_str, name in rows:
        if not name or is_denylisted(name, rules):
            continue
        result.append({"entry": int(entry_str), "name": name, "category": category})
    return result


def extract() -> dict:
    rules = load_exclusion_rules()

    all_rows: list[dict] = []
    for category, sql in _CATEGORY_QUERIES.items():
        # gear_enhancement_vellum/gear_enhancement_gem are two queries
        # feeding ONE player-facing category ("gear_enhancement") -- both
        # tagged identically below.
        real_category = "gear_enhancement" if category.startswith("gear_enhancement") else category
        rows = _query_category(real_category, sql, rules)
        all_rows.extend(rows)

    for entry, name in _TOY_ENTRIES.items():
        if is_denylisted(name, rules):
            continue
        all_rows.append({"entry": entry, "name": name, "category": "toy"})

    all_rows.sort(key=lambda r: r["entry"])

    items = []
    for row in all_rows:
        entry_int = row["entry"]
        items.append({
            "name": f"Filler: {row['name']} (#{entry_int})",
            "item_id": _ITEM_ID_BASE + entry_int,
            "delivery": {"kind": "mail", "wow_item_entry": entry_int},
            "tags": {"category": [row["category"]]},
        })

    return {"family": "filler_reward_items", "locations": [], "items": items, "constants": {}}


if __name__ == "__main__":
    data = extract()
    out_path = pathlib.Path(__file__).parent.parent / "content" / "filler_reward_items.yaml"
    with open(out_path, "w", encoding="utf-8") as f:
        f.write("# GENERATED FILE - do not hand-edit.\n")
        f.write(f"# Regenerate with: python tools/{pathlib.Path(__file__).name}\n")
        yaml.safe_dump(data, f, sort_keys=False, allow_unicode=True)
    print(f"Wrote {len(data['items'])} filler reward items to {out_path}")
