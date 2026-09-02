#!/usr/bin/env python3
"""DB-driven extraction for the Containersanity content family (M4.10.1).
Run this to regenerate content/containersanity.yaml; never hand-edit that
file. First real consumer of the M4.7 spec's documented-but-unbuilt
gameobject-loot-slot interception pattern."""
from __future__ import annotations

import pathlib

import yaml

from db_extract import (
    run_query, is_denylisted, load_exclusion_rules, parse_map_expansions,
    parse_world_map_areas, parse_area_zone_ids, parse_area_names, parse_map_instance_types,
    parse_map_names, resolve_area_or_instance_tags_for_positions,
)
from gathersanity_node_names import GATHERING_NODE_NAMES

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
    world_map_areas = parse_world_map_areas()
    area_zone_ids = parse_area_zone_ids()
    area_names = parse_area_names()
    map_instance_types = parse_map_instance_types()
    map_names = parse_map_names()

    # Real join confirmed live during planning: gameobject_loot_template.Entry
    # is a chest's LOOT id (chest.lootId == gameobject_template.Data1), NOT
    # gameobject_template.entry -- joining on entry directly silently
    # returns zero rows. Requiring a real item_template match excludes
    # Item=0 "nothing" chance-slots and any dangling item references (real
    # verified count with this exact join: 17,594 rows).
    #
    # Final whole-branch review fix (C2/I1): two more classes of rows are
    # real but permanently unlootable once Item gets rewritten to a
    # synthesized entry, so both are now excluded up front:
    #   - QuestRequired = 1 (761 real rows): LootItem::AllowedForPlayer
    #     requires the looting player to already have a quest that
    #     references the ORIGINAL item id -- once Item is rewritten to
    #     point at a synthesized entry no quest references, the row can
    #     never show in the loot window again.
    #   - Reference != 0 (23 real rows): for these rows the item that
    #     actually drops comes from reference_loot_template, not this row's
    #     own Item column at all -- rewriting Item here changes nothing
    #     that actually drops.
    loot_rows = run_query(f"""
        SELECT glt.Entry, glt.Item, MIN(gt.name), it.name
        FROM gameobject_loot_template glt
        JOIN gameobject_template gt ON gt.Data1 = glt.Entry AND gt.type = {_GAMEOBJECT_TYPE_CHEST}
        JOIN item_template it ON it.entry = glt.Item
        WHERE glt.QuestRequired = 0 AND glt.Reference = 0
        GROUP BY glt.Entry, glt.Item, it.name
        ORDER BY glt.Entry, glt.Item
    """)

    # Separate query for expansion/area tagging: which real map(s) and
    # position(s) does a spawn of ANY chest-type template backing a given
    # loot_id (Data1) appear on. gameobject's own template FK column is `id`
    # (same shape as creature.id -> creature_template.entry, per M4.9.2's
    # own precedent).
    #
    # M4.11.3.2: now also selects position_x/position_y so every real
    # spawn's exact position feeds resolve_area_or_instance_tags_for_
    # positions (Task 2, db_extract.py) for a real tags["area"] --
    # loot_id_to_maps (map-only) is still derived from this for
    # _expansion_tags_for_loot_id, which only ever needed the map id.
    spawn_rows = run_query(f"""
        SELECT gt.Data1, g.map, g.position_x, g.position_y
        FROM gameobject g
        JOIN gameobject_template gt ON gt.entry = g.id
        WHERE gt.type = {_GAMEOBJECT_TYPE_CHEST}
    """)
    loot_id_to_positions: dict[int, set[tuple[int, float, float]]] = {}
    for data1, map_id, x, y in spawn_rows:
        loot_id_to_positions.setdefault(int(data1), set()).add((int(map_id), float(x), float(y)))
    loot_id_to_maps: dict[int, set[int]] = {
        loot_id: {map_id for map_id, _, _ in positions} for loot_id, positions in loot_id_to_positions.items()
    }

    locations, items = [], []
    for loot_id_str, item_entry_str, chest_name, item_name in loot_rows:
        loot_id, item_entry = int(loot_id_str), int(item_entry_str)
        if not chest_name or is_denylisted(chest_name, rules):
            continue
        if chest_name in GATHERING_NODE_NAMES:
            # M4.10.2 regression fix: this checkout's real gathering nodes
            # (Copper Vein, Silverleaf, etc.) are GAMEOBJECT_TYPE_CHEST
            # (type=3) -- the same type this query already matches -- and
            # exclusion_rules.yaml's denylist never excluded them. These
            # rows now belong to Gathersanity's own extraction
            # (extract_gathersanity.py), not Containersanity's.
            continue
        if not item_name or is_denylisted(item_name, rules):
            continue

        idx = len(locations)
        display = f"{chest_name} - {item_name} (#{loot_id}/{item_entry})"
        expansions = _expansion_tags_for_loot_id(loot_id, loot_id_to_maps, map_expansions)
        area_tags = resolve_area_or_instance_tags_for_positions(
            sorted(loot_id_to_positions.get(loot_id, set())), world_map_areas, area_zone_ids,
            area_names, map_instance_types, map_names,
        )

        tags = {"expansion": expansions}
        # area is OMITTED (not an empty list) when none of this chest's real
        # spawns resolve to a real zone/instance name -- same
        # generate_content.py's _validate_tags_rows constraint
        # extract_enemysanity.py/extract_quest_rewards.py/
        # extract_trainer_spells.py's own tags["area"] omission already
        # handles (an empty list for a present dimension is a hard
        # ValidationError for any export_tags=True family, which
        # containersanity is). Expected to fire for some real chests -- not
        # a bug.
        if area_tags:
            tags["area"] = sorted(area_tags)

        locations.append({
            "name": f"Container: {display}",
            "location_id": _LOCATION_ID_BASE + idx,
            "trigger": {"kind": "gameobject_loot", "loot_id": loot_id, "item_entry": item_entry},
            "tags": tags,
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
