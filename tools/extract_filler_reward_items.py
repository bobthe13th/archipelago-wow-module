#!/usr/bin/env python3
"""DB-driven extraction for the Filler Reward Items content family (M4.9.3.1).
Run this to regenerate content/filler_reward_items.yaml; never hand-edit
that file. 12 real categories total: 10 independent ones queried directly
from item_template, plus mount/pet (each cross-family-dependent on
Collections' own claimed-spell-id set, see _load_collections_claimed_spell_ids).

A "recipe" category (reusing content/recipes.yaml's own real recipe pool)
was implemented during an earlier pass but was REMOVED after a
whole-branch review found a real multiworld-integrity risk: WoW's
spell-learn hook (ArchipelagoLearnSpellScript.cpp) fires purely on
spell_id, source-agnostic to how the spell was learned, so a
Filler-delivered "duplicate" recipe item would silently complete that
same real Recipes location check outside the normal randomizer flow.
Mount/pet avoid this exact risk via Collections-exclusion (they skip any
entry whose taught spell is already claimed by Collections' own map,
leaving a real disjoint subset to draw from) -- but recipes.yaml claims
its ENTIRE real recipe pool, leaving no safe disjoint subset for Filler
to draw from, so recipe could not be made safe the same way and was
dropped entirely rather than building a more invasive C++ fix. NOT the
same family as the pre-existing content/filler.yaml (sink LOCATIONS with
no items, the opposite mechanism, backfilling gates/traps' item surplus)
-- see this plan's Global Constraints."""
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
        WHERE class = 0 AND subclass IN (1,2,3,4,5) AND HolidayId = 0 AND {_TEST_POLLUTION_FILTER}
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
        WHERE class IN (2,4) AND Quality IN (1,2) AND InventoryType != 19 AND HolidayId = 0 AND {_TEST_POLLUTION_FILTER}
        ORDER BY entry
    """,
    "openable": f"""
        SELECT entry, name FROM item_template
        WHERE class = 15 AND subclass = 0 AND (Flags & 4) AND lockid = 0 AND HolidayId = 0 AND {_TEST_POLLUTION_FILTER}
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


def _load_collections_claimed_spell_ids() -> frozenset[int]:
    """Real spell_ids already claimed by Collections' own SpellIdToLocationId
    map (264 total: confirmed against ArchipelagoCollectionsContentTable.h's
    own real content) -- Filler's Mount/Pet categories exclude these to
    prevent a Filler-delivered mount/pet from silently double-firing a
    Collections location check (OnPlayerLearnSpell fires on ANY learned
    spell matching Collections' map, regardless of delivery source --
    confirmed by reading ArchipelagoCollectionScript.cpp directly during
    planning).

    Deviation from this task's own brief: the brief called for exec()'ing
    the sibling Archipelago repo's compiled
    worlds/wow/collections_content_data.py and reading its TRIGGERS dict.
    Verified against the real, current file that this does not exist --
    Collections is one of the non-generic families in generate_content.py
    (_emit_python_collections), which -- unlike quest_rewards/recipes/
    trainer_spells/vendor_stock's emit_python_generic path -- only ever
    emits LOCATIONS/ITEMS, never a TRIGGERS dict (FAMILY_SCHEMAS["collections"]
    has no export_triggers=True). So collections_content_data.py has no
    spell_id data to read at all, in this repo state or any prior one --
    not a staleness problem, a real shape mismatch with the brief's
    assumption. Reading this module's own content/collections.yaml directly
    instead -- the same hand-curated source generate_content.py itself
    compiles from -- recovers the identical real data (confirmed: 264
    locations, 264 unique trigger.spell_id values, matching the brief's own
    264-total research figure) without depending on a cross-repo compiled
    artifact that doesn't carry it."""
    collections_yaml_path = pathlib.Path(__file__).parent.parent / "content" / "collections.yaml"
    with open(collections_yaml_path, "r", encoding="utf-8") as f:
        data = yaml.safe_load(f)
    return frozenset(
        loc["trigger"]["spell_id"]
        for loc in data["locations"]
        if loc.get("trigger", {}).get("kind") == "learn_spell"
    )


def _extract_mount_or_pet_category(subclass: int, category: str) -> list[dict]:
    already_claimed = _load_collections_claimed_spell_ids()
    rows = run_query(f"""
        SELECT entry, name, spellid_1, spelltrigger_1, spellid_2, spelltrigger_2,
               spellid_3, spelltrigger_3, spellid_4, spelltrigger_4, spellid_5, spelltrigger_5
        FROM item_template
        WHERE class = 15 AND subclass = {subclass} AND {_TEST_POLLUTION_FILTER}
        ORDER BY entry
    """)
    result = []
    for row in rows:
        entry_str, name = row[0], row[1]
        taught_spell = None
        for n in range(5):
            spellid, spelltrigger = row[2 + n * 2], row[3 + n * 2]
            if int(spelltrigger) == 6 and int(spellid) != 0:
                taught_spell = int(spellid)
                break
        if taught_spell is None or taught_spell in already_claimed:
            continue
        result.append({"entry": int(entry_str), "name": name, "category": category})
    return result


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

    for row in _extract_mount_or_pet_category(subclass=5, category="mount"):
        if is_denylisted(row["name"], rules):
            continue
        all_rows.append(row)

    for row in _extract_mount_or_pet_category(subclass=2, category="pet"):
        if is_denylisted(row["name"], rules):
            continue
        all_rows.append(row)

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
