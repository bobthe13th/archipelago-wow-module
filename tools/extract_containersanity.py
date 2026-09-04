#!/usr/bin/env python3
"""DB-driven extraction for the Containersanity content family (M4.10.1).
Run this to regenerate content/containersanity.yaml; never hand-edit that
file. First real consumer of the M4.7 spec's documented-but-unbuilt
gameobject-loot-slot interception pattern."""
from __future__ import annotations

import pathlib

import yaml

from db_extract import (
    run_query, is_denylisted, load_exclusion_rules,
    parse_pool_gameobject_memberships, resolve_zone_pool_units,
    parse_world_map_areas, parse_area_zone_ids, parse_area_names, parse_map_instance_types,
    parse_map_names, resolve_area_or_instance_tags_for_positions, parse_map_expansions,
)
from gathersanity_node_names import GATHERING_NODE_NAMES

_LOCATION_ID_BASE = 8_000_000

_GAMEOBJECT_TYPE_CHEST = 3  # SharedDefines.h:1565

_MAX_CHESTS_PER_ZONE = 15  # generation-time ceiling -- must be >= options.py's
                            # ContainersanityChestsPerZone.range_end (15). A
                            # per-seed player option trims further at
                            # multiworld-generation time (locations.py's own
                            # _containersanity_zone_cap_matches); this constant
                            # only controls how many abstract locations exist
                            # to trim FROM.


def _expansion_tags_for_zone_key(
    zone_key: str, zone_to_maps: dict[str, set[int]], map_expansions: dict[int, str]
) -> list[str]:
    """Every expansion where a real chest SPAWN exists for this abstract
    zone-pool location's own zone_key, across every real spawn map id that
    resolves to it (zone_to_maps, built below from the SAME spawn_rows this
    module already collects). Falls back to ["vanilla"] for a zone_key with
    no real spawn map on record (should not occur in practice -- extract()
    only ever builds locations for zone_keys already present in
    units_by_zone, which itself is derived from these exact spawn_rows) --
    same fallback convention extract_enemysanity.py's own
    _expansion_tags_for_creature_entry established (that function's own
    docstring in turn credits this module's now-deleted, loot-table-based
    _expansion_tags_for_loot_id as the original precedent for this
    "expansion" tag family)."""
    maps = zone_to_maps.get(zone_key)
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
    pool_memberships = parse_pool_gameobject_memberships()

    # Real spawn rows for every chest-type gameobject in the world --
    # g.guid is the real GameObject::GetSpawnId() value the new C++
    # trigger looks up at runtime (M4.11.4.1 Task 3).
    #
    # gt.name is selected purely to filter on (nothing downstream consumes
    # it): M4.11.4.1 final review fix (C3) restores the two exclusions the
    # zone-pool rewrite dropped. Both were established by M4.10.2 Task 1 and
    # are the ONLY thing keeping Containersanity's and Gathersanity's real
    # spawn populations disjoint -- this checkout's gathering nodes (Copper
    # Vein, Peacebloom, ...) are themselves gameobject_template.type=3, i.e.
    # matched by this query's own WHERE clause, so without the name filter
    # ~69% of all type=3 spawns would count into Containersanity's zone-pool
    # unit counts AND credit a "Chest N" check every time a player mined or
    # picked one, on top of that node's own real Gathersanity credit. See
    # gathersanity_node_names.py's docstring for the shared contract:
    # extract_containersanity.py EXCLUDES these names, extract_gathersanity.py
    # INCLUDES them.
    spawn_rows_raw = run_query(f"""
        SELECT g.guid, g.map, g.position_x, g.position_y, gt.name
        FROM gameobject g
        JOIN gameobject_template gt ON gt.entry = g.id
        WHERE gt.type = {_GAMEOBJECT_TYPE_CHEST}
    """)
    spawn_rows: list[tuple[int, int, float, float]] = []
    for guid, map_id, x, y, name in spawn_rows_raw:
        if not name or name in GATHERING_NODE_NAMES or is_denylisted(name, rules):
            continue
        spawn_rows.append((int(guid), int(map_id), float(x), float(y)))

    units_by_zone = resolve_zone_pool_units(
        spawn_rows, pool_memberships, world_map_areas, area_zone_ids, area_names,
        map_instance_types, map_names,
    )

    # Real per-spawn zone resolution -- feeds BOTH the new C++ runtime lookup
    # (Task 2's _emit_cpp_zone_pool_spawn_zones) AND, below, this zone_key's
    # own real "expansion" tag (zone_to_maps). Deliberately NOT the same as
    # units_by_zone above (which unions a whole POOL's positions together for
    # cap-sizing purposes): each spawn's OWN individual position is resolved
    # independently, since the runtime hook only ever knows the ONE specific
    # gameobject a player just opened.
    zone_pool_spawn_zones: dict[int, list[str]] = {}
    zone_to_maps: dict[str, set[int]] = {}
    for guid, map_id, x, y in spawn_rows:
        zone_tags = resolve_area_or_instance_tags_for_positions(
            [(map_id, x, y)], world_map_areas, area_zone_ids, area_names,
            map_instance_types, map_names,
        )
        if zone_tags:
            zone_pool_spawn_zones[guid] = sorted(zone_tags)
        for zone_key in zone_tags:
            zone_to_maps.setdefault(zone_key, set()).add(map_id)

    locations = []
    for zone_key in sorted(units_by_zone):
        real_unit_count = len(units_by_zone[zone_key])
        count = min(_MAX_CHESTS_PER_ZONE, real_unit_count)
        expansions = _expansion_tags_for_zone_key(zone_key, zone_to_maps, map_expansions)
        for ordinal in range(1, count + 1):
            locations.append({
                "name": f"Container: {zone_key} - Chest {ordinal}",
                "trigger": {"kind": "zone_pool_credit", "zone_key": zone_key, "ordinal": ordinal},
                "tags": {"area": [zone_key], "expansion": expansions},
            })
    for idx, loc in enumerate(locations):
        loc["location_id"] = _LOCATION_ID_BASE + idx

    return {
        "family": "containersanity", "locations": locations, "items": [],
        "constants": {}, "zone_pool_spawn_zones": zone_pool_spawn_zones,
    }


if __name__ == "__main__":
    data = extract()
    out_path = pathlib.Path(__file__).parent.parent / "content" / "containersanity.yaml"
    with open(out_path, "w", encoding="utf-8") as f:
        f.write("# GENERATED FILE - do not hand-edit.\n")
        f.write(f"# Regenerate with: python tools/{pathlib.Path(__file__).name}\n")
        yaml.safe_dump(data, f, sort_keys=False, allow_unicode=True)
    print(f"Wrote {len(data['locations'])} containersanity locations to {out_path}")
