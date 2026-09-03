#!/usr/bin/env python3
"""DB-driven extraction for the Vendor Inventories content family (M4.5 Group 2).
Run this to regenerate content/vendor_stock.yaml; never hand-edit that file."""
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


def build_row(
    row: tuple[str, ...], row_index: int, expansion: str, area_tags: frozenset[str] = frozenset(),
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
    omission already established (M4.11.3.2 Task 3)."""
    entry, npc_name, item, slot, extended_cost, item_name = row

    entry_int = int(entry)
    item_int = int(item)
    slot_int = int(slot)

    tags = {"expansion": [expansion]}
    if area_tags:
        tags["area"] = sorted(area_tags)

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
        built = build_row(row, row_index, expansion, area_tags)
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
