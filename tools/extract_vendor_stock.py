#!/usr/bin/env python3
"""DB-driven extraction for the Vendor Inventories content family (M4.5 Group 2).
Run this to regenerate content/vendor_stock.yaml; never hand-edit that file.

WARNING: extract()'s own base query joins through npc_vendor.item -- this
column is rewritten at runtime by this module's own live vendor-purchase
interception mechanism (APItemDisplay.cpp) once a check has been claimed on
a played-on realm. See tools/README.md's own "Regenerating against a
played-on realm" section before regenerating against a realm that has been
played on at all -- this already happened once (M4.11.5.5) and required a
live DB restore to recover from. _load_vendor_types (below) is immune --
it's keyed only on npc_vendor.entry, never npc_vendor.item."""
from __future__ import annotations

import pathlib

import yaml

from db_extract import (
    run_query, is_denylisted, load_exclusion_rules, parse_map_expansions,
    parse_world_map_areas, parse_area_zone_ids, parse_area_names, parse_map_instance_types,
    parse_map_names, resolve_area_or_instance_tags_for_positions,
)

_LOCATION_ID_BASE = 2_000_000
_ITEM_ID_BASE = 2_500_000


def _load_vendor_expansions() -> dict[int, str]:
    """npc_vendor.entry (a creature TEMPLATE id) -> expansion, resolved from
    that template's real spawned instances -- npc_vendor.entry joins to
    creature.id (the spawn table's own primary key doubling as its template
    FK in this schema), NOT creature_template, which has no map column at
    all (confirmed: a vendor's map is spawn-level data, not template-level).
    MIN(map) is the deterministic tie-break for the small fraction of
    vendor entries whose spawns span multiple maps, mirroring
    extract_quest_rewards.py's _load_quest_expansions' identical tie-break.
    A vendor entry with no real spawn row at all (a handful of unused/
    GM-only templates, confirmed real via a live query) is absent from this
    dict; the caller defaults those to 'vanilla'."""
    map_expansions = parse_map_expansions()
    rows = run_query("""
        SELECT nv.entry, MIN(c.map)
        FROM npc_vendor nv
        JOIN creature c ON nv.entry = c.id
        GROUP BY nv.entry
    """)
    return {int(entry): map_expansions.get(int(map_id), "vanilla") for entry, map_id in rows}


def _load_vendor_area_tags(
    world_map_areas: list[tuple[int, int, float, float, float, float]],
    area_zone_ids: dict[int, int], area_names: dict[int, str],
    map_instance_types: dict[int, int], map_names: dict[int, str],
) -> dict[int, frozenset[str]]:
    """npc_vendor.entry -> the real, resolved area/instance tags for EVERY
    real spawn of that vendor template (a vendor's tag applies to every one
    of its inventory-slot rows, same convention as _load_vendor_expansions'
    entry-keyed dict above). Unlike that function's MIN(map) tie-break,
    this keeps every distinct real spawn position -- some vendors (e.g.
    seasonal-event vendors like 'Lhara', confirmed via a live query this
    session: 3 real spawns, one each on Eastern Kingdoms/Kalimdor/Outland,
    resolving to 8 real zone tags since each open-world position falls
    inside more than one overlapping WorldMapArea.dbc box) really do
    spawn across multiple zones, and resolve_area_or_instance_tags_for_
    positions (Task 2) needs every position to union them all, not just
    one map's worth."""
    rows = run_query("""
        SELECT nv.entry, c.map, c.position_x, c.position_y
        FROM npc_vendor nv
        JOIN creature c ON nv.entry = c.id
    """)
    entry_to_positions: dict[int, list[tuple[int, float, float]]] = {}
    for entry_str, map_str, x_str, y_str in rows:
        entry_to_positions.setdefault(int(entry_str), []).append(
            (int(map_str), float(x_str), float(y_str))
        )
    return {
        entry: resolve_area_or_instance_tags_for_positions(
            positions, world_map_areas, area_zone_ids, area_names, map_instance_types, map_names,
        )
        for entry, positions in entry_to_positions.items()
    }


# Real UnitDefines.h flag bits (src/server/game/Entities/Unit/UnitDefines.h:330-338),
# verified live against this checkout's real header -- confirmed real per-category
# row counts (live, this checkout): innkeeper 1,388 / general_goods 2,823 / food 3,700
# / poison 2,127 / reagent 3,246 (M4.11.5.5).
_VENDOR_TYPE_FLAGS: list[tuple[int, str]] = [
    (0x00010000, "innkeeper"),
    (0x00000100, "general_goods"),
    (0x00000200, "food"),
    (0x00000400, "poison"),
    (0x00000800, "reagent"),
]


def _load_vendor_types() -> dict[int, frozenset[str]]:
    """npc_vendor.entry -> the set of real "boring utility vendor" subtype
    tags this vendor's own creature_template.npcflag carries (M4.11.5.5).
    Deliberately keyed on npc_vendor.entry alone, joined only to
    creature_template -- NEVER through npc_vendor.item/item_template, same
    entry-only pattern _load_vendor_expansions/_load_vendor_area_tags above
    already establish, and for the same real reason: this module's own live
    vendor-slot interception mechanism (APItemDisplay.cpp) rewrites
    npc_vendor.item at runtime once a slot's AP check is intercepted, but
    never touches npc_vendor.entry -- a query keyed on entry alone is safe
    against a played-on realm where item is no longer trustworthy (verified
    live this checkout: of 37,753 real npc_vendor rows, only 3 still have a
    real item<4,000,000 value). A vendor with none of these five flags maps
    to an empty frozenset (an "untagged for this dimension" row, the normal
    case) -- see build_row's own docstring for why an empty set must not
    become an empty tags["vendor_type"] list.

    Reads creature_template.npcflag (the TEMPLATE's own flags), never a
    per-spawn creature.npcflag override -- npc_vendor is itself keyed by
    creature TEMPLATE id, not by a specific spawn, so a per-spawn override
    couldn't be meaningfully attributed to one particular npc_vendor row
    anyway; the template-level flag is the only real, unambiguous signal
    available at this granularity."""
    rows = run_query("""
        SELECT nv.entry, ct.npcflag
        FROM npc_vendor nv
        JOIN creature_template ct ON nv.entry = ct.entry
        GROUP BY nv.entry, ct.npcflag
    """)
    result: dict[int, frozenset[str]] = {}
    for entry_str, npcflag_str in rows:
        npcflag = int(npcflag_str)
        result[int(entry_str)] = frozenset(
            label for bit, label in _VENDOR_TYPE_FLAGS if npcflag & bit
        )
    return result


def build_row(
    row: tuple[str, ...], row_index: int, expansion: str, area_tags: frozenset[str] = frozenset(),
    vendor_types: frozenset[str] = frozenset(),
) -> dict:
    """Map one raw npc_vendor/item_template/creature_template result row
    (entry, npc_name, item, slot, ExtendedCost, item_name) plus its stable
    row_index, pre-resolved expansion tag, and pre-resolved area tags (from
    _load_vendor_area_tags, keyed by this row's own vendor entry) to the
    location/item dict shape this family emits.

    The row_index suffix on both names is required, not cosmetic -- see the
    prior version of this docstring (unchanged reasoning, M4.5/M4.7).

    area_tags defaults to an empty frozenset so callers that don't care
    about area resolution (most of this file's own unit tests) don't need
    to pass it. "area" is OMITTED from tags (not an empty list) when
    area_tags is empty -- generate_content.py's _validate_tags_rows hard-
    fails on an empty list for any dimension present in an export_tags
    family's tags block (vendor_stock is export_tags=True), the same
    "never zero tags" convention extract_enemysanity.py's own tags["area"]
    omission already established (M4.11.3.2 Task 3).

    vendor_types (M4.11.5.5) follows the exact same "omit when empty" convention as
    area_tags immediately above -- tags["vendor_type"] is present only when this
    row's own vendor NPC has at least one of the five real utility-vendor flag
    bits set (see _load_vendor_types), never as an empty list."""
    entry, npc_name, item, slot, extended_cost, item_name = row

    entry_int = int(entry)
    item_int = int(item)
    slot_int = int(slot)

    tags = {"expansion": [expansion]}
    if area_tags:
        tags["area"] = sorted(area_tags)
    if vendor_types:
        tags["vendor_type"] = sorted(vendor_types)

    return {
        "location_name": f"Vendor: {npc_name} - {item_name} (#{row_index})",
        "item_name": f"Vendor Item: {npc_name} - {item_name} (#{row_index})",
        "location_id": _LOCATION_ID_BASE + row_index,
        "item_id": _ITEM_ID_BASE + row_index,
        "trigger": {
            "kind": "vendor_purchase",
            "npc_entry": entry_int,
            "item_slot": slot_int,
        },
        "delivery": {
            "kind": "mail",
            "wow_item_entry": item_int,
        },
        "tags": tags,
        "_item_name_for_denylist": item_name,
    }


def extract() -> dict:
    rules = load_exclusion_rules()
    vendor_expansions = _load_vendor_expansions()
    world_map_areas = parse_world_map_areas()
    area_zone_ids = parse_area_zone_ids()
    area_names = parse_area_names()
    map_instance_types = parse_map_instance_types()
    map_names = parse_map_names()
    vendor_area_tags = _load_vendor_area_tags(
        world_map_areas, area_zone_ids, area_names, map_instance_types, map_names,
    )
    vendor_types_by_entry = _load_vendor_types()
    rows = run_query("""
        SELECT v.entry, c.name AS npc_name, v.item, v.slot, v.ExtendedCost, i.name AS item_name
        FROM npc_vendor v
        JOIN item_template i ON v.item = i.entry
        JOIN creature_template c ON v.entry = c.entry
        ORDER BY v.entry, v.slot, v.item, v.ExtendedCost
    """)

    locations, items = [], []
    for row_index, row in enumerate(rows):
        entry_int = int(row[0])
        expansion = vendor_expansions.get(entry_int, "vanilla")
        area_tags = vendor_area_tags.get(entry_int, frozenset())
        vendor_types = vendor_types_by_entry.get(entry_int, frozenset())
        built = build_row(row, row_index, expansion, area_tags, vendor_types)
        if is_denylisted(built["_item_name_for_denylist"], rules):
            continue

        locations.append({
            "name": built["location_name"],
            "location_id": built["location_id"],
            "trigger": built["trigger"],
            "tags": built["tags"],
        })
        items.append({
            "name": built["item_name"],
            "item_id": built["item_id"],
            "delivery": built["delivery"],
        })

    return {"family": "vendor_stock", "locations": locations, "items": items, "constants": {}}


if __name__ == "__main__":
    data = extract()
    out_path = pathlib.Path(__file__).parent.parent / "content" / "vendor_stock.yaml"
    with open(out_path, "w", encoding="utf-8") as f:
        f.write("# GENERATED FILE - do not hand-edit.\n")
        f.write(f"# Regenerate with: python tools/{pathlib.Path(__file__).name}\n")
        yaml.safe_dump(data, f, sort_keys=False, allow_unicode=True)
    print(f"Wrote {len(data['locations'])} vendor-stock locations to {out_path}")
