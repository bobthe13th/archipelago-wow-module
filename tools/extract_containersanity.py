#!/usr/bin/env python3
"""DB-driven extraction for the Containersanity content family (M4.10.1).
Run this to regenerate content/containersanity.yaml; never hand-edit that
file. First real consumer of the M4.7 spec's documented-but-unbuilt
gameobject-loot-slot interception pattern."""
from __future__ import annotations

import pathlib

import yaml

from db_extract import (
    run_query, parse_pool_gameobject_memberships, resolve_zone_pool_units,
    parse_world_map_areas, parse_area_zone_ids, parse_area_names, parse_map_instance_types,
    parse_map_names, resolve_area_or_instance_tags_for_positions,
)

_LOCATION_ID_BASE = 8_000_000
_ITEM_ID_BASE = 7_600_000

_GAMEOBJECT_TYPE_CHEST = 3  # SharedDefines.h:1565

_MAX_CHESTS_PER_ZONE = 15  # generation-time ceiling -- must be >= options.py's
                            # ContainersanityChestsPerZone.range_end (15). A
                            # per-seed player option trims further at
                            # multiworld-generation time (locations.py's own
                            # _containersanity_zone_cap_matches); this constant
                            # only controls how many abstract locations exist
                            # to trim FROM.


def extract() -> dict:
    world_map_areas = parse_world_map_areas()
    area_zone_ids = parse_area_zone_ids()
    area_names = parse_area_names()
    map_instance_types = parse_map_instance_types()
    map_names = parse_map_names()
    pool_memberships = parse_pool_gameobject_memberships()

    # Real spawn rows for every chest-type gameobject in the world --
    # g.guid is the real GameObject::GetSpawnId() value the new C++
    # trigger looks up at runtime (M4.11.4.1 Task 3).
    spawn_rows_raw = run_query(f"""
        SELECT g.guid, g.map, g.position_x, g.position_y
        FROM gameobject g
        JOIN gameobject_template gt ON gt.entry = g.id
        WHERE gt.type = {_GAMEOBJECT_TYPE_CHEST}
    """)
    spawn_rows = [(int(guid), int(map_id), float(x), float(y)) for guid, map_id, x, y in spawn_rows_raw]

    units_by_zone = resolve_zone_pool_units(
        spawn_rows, pool_memberships, world_map_areas, area_zone_ids, area_names,
        map_instance_types, map_names,
    )

    locations = []
    for zone_key in sorted(units_by_zone):
        real_unit_count = len(units_by_zone[zone_key])
        count = min(_MAX_CHESTS_PER_ZONE, real_unit_count)
        for ordinal in range(1, count + 1):
            locations.append({
                "name": f"Container: {zone_key} - Chest {ordinal}",
                "trigger": {"kind": "zone_pool_credit", "zone_key": zone_key, "ordinal": ordinal},
                "tags": {"area": [zone_key]},
            })
    for idx, loc in enumerate(locations):
        loc["location_id"] = _LOCATION_ID_BASE + idx

    # Real per-spawn zone resolution for the new C++ runtime lookup
    # (Task 2's _emit_cpp_zone_pool_spawn_zones) -- deliberately NOT the
    # same as units_by_zone above (which unions a whole POOL's positions
    # together for cap-sizing purposes): the runtime hook only ever knows
    # the ONE specific gameobject a player just opened, so this resolves
    # each spawn's OWN individual position independently.
    zone_pool_spawn_zones: dict[int, list[str]] = {}
    for guid, map_id, x, y in spawn_rows:
        zone_tags = resolve_area_or_instance_tags_for_positions(
            [(map_id, x, y)], world_map_areas, area_zone_ids, area_names,
            map_instance_types, map_names,
        )
        if zone_tags:
            zone_pool_spawn_zones[guid] = sorted(zone_tags)

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
