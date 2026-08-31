#!/usr/bin/env python3
"""DB-driven extraction for the Itemsanity content family (M4.10.6).
Run this to regenerate content/itemsanity.yaml; never hand-edit that file.
Event-hook family (item_first_held trigger kind) -- no loot slot, no DB
rewrite. Deliberately the largest DB-extracted family in this project by
row count: raw entry>0 universe is 68,298 item_template rows; after the
test-pollution filter (entry < 4,000,000) plus this module's own
reserved-range filter (see _RESERVED_RANGE_FILTER below, excludes the 21
rows in 850000-850016/850100-850103) that's 46,096; after
exclusion_rules.yaml's name denylist that's 39,299; after the small
GM-only entry denylist (_GM_ONLY_ENTRY_DENYLIST below) the real final
count is 39,292 real locations/items (re-verified live, M4.10.6 final
whole-branch review fixes I1/I5/M1 -- re-derive by re-running this script
if the live DB or either denylist changes again; never hardcode a stale
number here). Registered generic=True in
generate_content.py's FAMILY_SCHEMAS so it inherits the already-safe
raw-array-plus-runtime-builder C++ emission M4.7.1 built, rather than
needing any bespoke stack-safety work."""
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

# Final whole-branch review fix I1 (M4.10.6): this module synthesizes its
# OWN internal item_template rows for two purposes, and neither is real,
# player-obtainable Itemsanity content -- both must be excluded from this
# query or they become real (bogus) locations/mailable items the next time
# this script runs:
#   - 850000-850016 (AP_ITEM_TRAP_* constants, src/ArchipelagoTrapsContentTable.h):
#     one row per Traps-family trap effect (17 rows).
#   - 850100-850103 (IconEntryFor in src/APItemDisplay.cpp:18-21): the 4
#     classification-icon rows ("Archipelago Item (Progression/Useful/Trap/
#     Filler)") every synthesized display item points at.
# Confirmed real, live hits before this fix: entries 850100-850103 had
# become real Itemsanity locations 12,539,351-12,539,354 and mailable
# items. AP_ITEM_SYNTH_BASE (3,000,000+, src/APItemDisplay.h) is NOT given
# its own filter here -- it's already fully covered by
# _TEST_POLLUTION_FILTER above: the smallest real _LOCATION_ID_BASE across
# every family is extract_quest_rewards.py's 1,000,000, so the smallest
# possible synthesized entry is 3,000,000 + 1,000,000 == 4,000,000, which
# entry < 4000000 already excludes.
_RESERVED_RANGE_FILTER = (
    "NOT (entry BETWEEN 850000 AND 850016) AND NOT (entry BETWEEN 850100 AND 850103)"
)

# Final whole-branch review fix I5 (M4.10.6): a small number of real,
# live-DB item_template rows are GM-only/developer artifacts that no
# generic exclusion_rules.yaml name pattern can safely catch (their names
# read as ordinary, sometimes celebrated, player-facing items -- "Martin
# Fury", "Frostmourne" -- so a name-based denylist pattern would be far too
# broad). Same local-entry-denylist convention extract_repsanity.py's own
# _LOCAL_DENYLIST already established for this exact situation (a handful
# of items that don't belong in exclusion_rules.yaml because the SHARED
# file affects other families' unrelated real content). Keyed by entry id,
# not name, because "Frostmourne" legitimately appears twice (33475 and
# 36942 are two distinct real rows) and a name-based exclusion would be
# less precise here than the entry ids the review already pinned down:
#   - 17 "Martin Fury": GM-only artifact shirt, notoriously never meant to
#     be player-obtainable -- this is the single most important entry in
#     this set, since #17 sorts first and becomes location_id 12,500,000,
#     the very FIRST location in the whole Itemsanity family.
#   - 12947 "Alex's Ring of Audacity", 32824 "Tigole's Trashbringer",
#     44807 "Indalamar's Holy Hand Grenade", 20880 "Golden Token": GM/dev
#     joke or event-only items, never obtainable through any of
#     Itemsanity's covered acquisition routes.
#   - 33475, 36942 "Frostmourne": the real weapon's non-obtainable
#     GM/cinematic item rows.
_GM_ONLY_ENTRY_DENYLIST = frozenset({17, 12947, 32824, 44807, 20880, 33475, 36942})

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
        WHERE entry > 0 AND {_TEST_POLLUTION_FILTER} AND {_RESERVED_RANGE_FILTER}
        ORDER BY entry
    """)

    locations, items = [], []
    for entry_str, name, class_str, quality_str, required_level_str in rows:
        entry = int(entry_str)
        name = name.strip() if name else name
        if not name or is_denylisted(name, rules) or entry in _GM_ONLY_ENTRY_DENYLIST:
            continue

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
