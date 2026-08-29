#!/usr/bin/env python3
"""DB-driven extraction for the Containersanity content family (M4.10.1).
Run this to regenerate content/containersanity.yaml; never hand-edit that
file. First real consumer of the M4.7 spec's documented-but-unbuilt
gameobject-loot-slot interception pattern."""
from __future__ import annotations

import pathlib

import yaml

from db_extract import run_query, is_denylisted, load_exclusion_rules, parse_map_expansions

_LOCATION_ID_BASE = 8_000_000
_ITEM_ID_BASE = 7_600_000

_GAMEOBJECT_TYPE_CHEST = 3  # SharedDefines.h:1565


def _expansion_tags_for_loot_id(
    loot_id: int, loot_id_to_maps: dict[int, set[int]], map_expansions: dict[int, str]
) -> list[str]:
    """Every expansion where a real gameobject SPAWN exists for ANY
    chest-type template backing this loot_id (a loot_id can be shared by
    more than one gameobject_template row -- confirmed real in this
    checkout's data, e.g. many generic "Weapon Crate"-style templates share
    lootIds across zones). Falls back to ["vanilla"] for a loot_id with no
    real spawn row at all (a template that exists but was never placed in
    the world) -- same lowest-risk-default convention
    db_extract.parse_map_expansions' own callers already use for an
    unrecognized value, never a crash or silent drop."""
    maps = loot_id_to_maps.get(loot_id)
    if not maps:
        return ["vanilla"]
    expansions = {map_expansions.get(map_id, "vanilla") for map_id in maps}
    return sorted(expansions)


def extract() -> dict:
    rules = load_exclusion_rules()
    map_expansions = parse_map_expansions()

    # Real join confirmed live during planning: gameobject_loot_template.Entry
    # is a chest's LOOT id (chest.lootId == gameobject_template.Data1), NOT
    # gameobject_template.entry -- joining on entry directly silently
    # returns zero rows. Requiring a real item_template match excludes
    # Item=0 "nothing" chance-slots and any dangling item references (real
    # verified count with this exact join: 17,594 rows).
    loot_rows = run_query(f"""
        SELECT glt.Entry, glt.Item, MIN(gt.name), it.name
        FROM gameobject_loot_template glt
        JOIN gameobject_template gt ON gt.Data1 = glt.Entry AND gt.type = {_GAMEOBJECT_TYPE_CHEST}
        JOIN item_template it ON it.entry = glt.Item
        GROUP BY glt.Entry, glt.Item, it.name
        ORDER BY glt.Entry, glt.Item
    """)

    # Separate query for expansion tagging: which real map(s) does a spawn
    # of ANY chest-type template backing a given loot_id (Data1) appear on.
    # gameobject's own template FK column is `id` (same shape as
    # creature.id -> creature_template.entry, per M4.9.2's own precedent).
    spawn_rows = run_query(f"""
        SELECT gt.Data1, g.map
        FROM gameobject g
        JOIN gameobject_template gt ON gt.entry = g.id
        WHERE gt.type = {_GAMEOBJECT_TYPE_CHEST}
    """)
    loot_id_to_maps: dict[int, set[int]] = {}
    for data1, map_id in spawn_rows:
        loot_id_to_maps.setdefault(int(data1), set()).add(int(map_id))

    locations, items = [], []
    for loot_id_str, item_entry_str, chest_name, item_name in loot_rows:
        loot_id, item_entry = int(loot_id_str), int(item_entry_str)
        if not chest_name or is_denylisted(chest_name, rules):
            continue
        if not item_name or is_denylisted(item_name, rules):
            continue

        idx = len(locations)
        display = f"{chest_name} - {item_name} (#{loot_id}/{item_entry})"
        expansions = _expansion_tags_for_loot_id(loot_id, loot_id_to_maps, map_expansions)

        locations.append({
            "name": f"Container: {display}",
            "location_id": _LOCATION_ID_BASE + idx,
            "trigger": {"kind": "gameobject_loot", "loot_id": loot_id, "item_entry": item_entry},
            "tags": {"expansion": expansions},
        })
        items.append({
            "name": f"Container Item: {display}",
            "item_id": _ITEM_ID_BASE + idx,
            "delivery": {"kind": "mail", "wow_item_entry": item_entry},
        })

    return {"family": "containersanity", "locations": locations, "items": items, "constants": {}}


if __name__ == "__main__":
    data = extract()
    out_path = pathlib.Path(__file__).parent.parent / "content" / "containersanity.yaml"
    with open(out_path, "w", encoding="utf-8") as f:
        f.write("# GENERATED FILE - do not hand-edit.\n")
        f.write(f"# Regenerate with: python tools/{pathlib.Path(__file__).name}\n")
        yaml.safe_dump(data, f, sort_keys=False, allow_unicode=True)
    print(f"Wrote {len(data['locations'])} containersanity locations to {out_path}")
