#!/usr/bin/env python3
"""DB-driven extraction for the Vendor Inventories content family (M4.5 Group 2).
Run this to regenerate content/vendor_stock.yaml; never hand-edit that file."""
from __future__ import annotations

import pathlib

import yaml

from db_extract import run_query, is_denylisted, load_exclusion_rules, parse_map_expansions

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


def build_row(row: tuple[str, ...], row_index: int, expansion: str) -> dict:
    """Map one raw npc_vendor/item_template/creature_template result row
    (entry, npc_name, item, slot, ExtendedCost, item_name) plus its stable
    row_index and pre-resolved expansion tag to the location/item dict
    shape this family emits.

    The row_index suffix on both names is required, not cosmetic -- see the
    prior version of this docstring (unchanged reasoning, M4.5/M4.7)."""
    entry, npc_name, item, slot, extended_cost, item_name = row

    entry_int = int(entry)
    item_int = int(item)
    slot_int = int(slot)

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
        "tags": {"expansion": [expansion]},
        "_item_name_for_denylist": item_name,
    }


def extract() -> dict:
    rules = load_exclusion_rules()
    vendor_expansions = _load_vendor_expansions()
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
        built = build_row(row, row_index, expansion)
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
