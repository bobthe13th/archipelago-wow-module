#!/usr/bin/env python3
"""DB-driven extraction for the Vendor Inventories content family (M4.5 Group 2).
Run this to regenerate content/vendor_stock.yaml; never hand-edit that file."""
from __future__ import annotations

import pathlib

import yaml

from db_extract import run_query, is_denylisted, load_exclusion_rules

_LOCATION_ID_BASE = 2_000_000
_ITEM_ID_BASE = 2_500_000
# row_index is the row's own 0-based position in this query's own
# ORDER BY v.entry, v.slot, v.item, v.ExtendedCost result order -- it is
# the only thing guaranteed unique per row: (entry, slot) alone is NOT
# unique (most vendors store every item at slot=0), while
# (entry, item, ExtendedCost) is confirmed fully unique in the real data
# but row_index is simpler and doubles as the name-collision fix below.


def build_row(row: tuple[str, ...], row_index: int) -> dict:
    """Map one raw npc_vendor/item_template/creature_template result row
    (entry, npc_name, item, slot, ExtendedCost, item_name) plus its stable
    row_index to the location/item dict shape this family emits.

    The row_index suffix on both names is required, not cosmetic: real
    data has 730 distinct (npc_name, item_name) pairs shared by 2+ rows
    (e.g. NPC "Alana Moonstrike" sells two different item_template entries
    that happen to share the literal name "Sanctified Lasherweave Cover")
    -- without it, the compiler's _validate_unique_names would reject the
    whole family, the same failure class that blocked Task 5 until Task 4
    was reopened."""
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
        "_item_name_for_denylist": item_name,
    }


def extract() -> dict:
    rules = load_exclusion_rules()
    rows = run_query("""
        SELECT v.entry, c.name AS npc_name, v.item, v.slot, v.ExtendedCost, i.name AS item_name
        FROM npc_vendor v
        JOIN item_template i ON v.item = i.entry
        JOIN creature_template c ON v.entry = c.entry
        ORDER BY v.entry, v.slot, v.item, v.ExtendedCost
    """)

    locations, items = [], []
    for row_index, row in enumerate(rows):
        built = build_row(row, row_index)
        # Denylist applies to item_name ONLY -- a legitimate vendor can
        # have a joke/flavor name without every item they sell being junk.
        if is_denylisted(built["_item_name_for_denylist"], rules):
            continue

        locations.append({
            "name": built["location_name"],
            "location_id": built["location_id"],
            "trigger": built["trigger"],
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
