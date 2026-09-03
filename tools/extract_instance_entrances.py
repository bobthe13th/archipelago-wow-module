#!/usr/bin/env python3
# azerothcore-wotlk/modules/archipelago_wow/tools/extract_instance_entrances.py
"""Computes, for every real instance in the game, the set of real
open-world area tags at least one of its real entrances is physically
reachable from. Run this to regenerate
Archipelago/worlds/wow/instance_entrance_data.py; never hand-edit that
file. Not an AP content family (no locations/items) -- pure metadata
M4.11.3.3's Zone Leveler redesign reads directly, replacing
zone_leveler_content_data.py's own hand-curated instance_keys list with
a real, live-data-derived one that stays correct if an instance's
entrance is ever relocated (a future door-shuffle feature would only
need to change areatrigger_teleport's own real data, nothing here).

Entrance-vs-exit rule (verified this session against the real, full 276-row
areatrigger/areatrigger_teleport join, not just a handful of examples): a row
is an entrance (not an exit, and not a world-to-world or instance-to-instance
teleporter) only if its OWN origin map (at.map) is open-world
(parse_map_instance_types == 0) AND its target map (atp.target_map) is
instanced (parse_map_instance_types != 0). Confirmed on the real data:
  - 92 of the 276 rows are real entrances under this rule.
  - 115 rows are plain exit triggers (origin instanced, target open-world);
    these are already excluded by the "target must be instanced" half of the
    rule alone (their target_map's instance type is 0).
  - 38 rows are world-to-world teleporters (both sides open-world, e.g. two
    same-continent teleport pads); excluded by the "target must be instanced"
    half.
  - 31 rows are instance-to-instance transitions (e.g. Blackrock Spire ->
    Blackwing Lair, same-map arena "Game On" teleports, Mount Hyjal same-map
    triggers). These are the ONLY rows for which the "origin must be
    open-world" half of the rule is actually load-bearing: without it, 6 of
    them (blackwing_lair, dalaran_sewers, ruins_of_lordaeron, and the 3 arena
    maps ring_of_valor/blade_s_edge_arena/nagrand_arena) would spuriously
    appear as keys in the output dict (each with an empty frozenset, since
    none of their own origin positions land inside any real WorldMapArea.dbc
    box) instead of correctly not appearing at all. Verified by direct query
    this session -- see test_extract_instance_entrances.py's
    test_instance_to_instance_transitions_do_not_spuriously_appear.

The brief's own cited exit trigger 226 (map=43, x=-172.181, y=138.98, sitting
inside Wailing Caverns itself, target_map=1) does NOT exercise this
origin-must-be-open-world exclusion in practice: WorldMapArea.dbc has ZERO
rows for map 43 at all, so resolve_zone_ids_from_position(43, ...) returns an
empty frozenset regardless of whether the exclusion exists, and separately,
its target_map=1 is open-world, so the "target must be instanced" half of the
rule excludes it anyway. See test_exit_triggers_are_not_mistaken_for_entrances
for the honest (non-spurious-risk) assertion this specific example supports."""
from __future__ import annotations

import pathlib

from db_extract import (
    run_query, parse_world_map_areas, parse_area_zone_ids, parse_area_names,
    parse_map_names, parse_map_instance_types, resolve_zone_ids_from_position,
)

_OUT_PATH = (
    pathlib.Path(__file__).parent.parent.parent.parent.parent
    / "Archipelago" / "worlds" / "wow" / "instance_entrance_data.py"
)


def extract() -> dict[str, frozenset[str]]:
    world_map_areas = parse_world_map_areas()
    area_zone_ids = parse_area_zone_ids()
    area_names = parse_area_names()
    map_names = parse_map_names()
    map_instance_types = parse_map_instance_types()

    rows = run_query("""
        SELECT at.map, at.x, at.y, atp.target_map
        FROM areatrigger at
        JOIN areatrigger_teleport atp ON atp.ID = at.entry
    """)

    result: dict[str, set[str]] = {}
    for map_str, x_str, y_str, target_map_str in rows:
        map_id, target_map = int(map_str), int(target_map_str)
        if map_instance_types.get(map_id, 0) != 0:
            continue  # this row's own door is itself inside an instance -- an exit, not an entrance
        if map_instance_types.get(target_map, 0) == 0:
            continue  # target isn't an instance at all (a world-to-world teleporter, not a dungeon door)
        instance_name = map_names.get(target_map)
        if not instance_name:
            continue
        area_tags = {
            area_names[z] for z in resolve_zone_ids_from_position(
                map_id, float(x_str), float(y_str), world_map_areas, area_zone_ids,
            ) if z in area_names
        }
        result.setdefault(instance_name, set()).update(area_tags)

    return {name: frozenset(tags) for name, tags in result.items()}


def render_module(data: dict[str, frozenset[str]]) -> str:
    """Renders the generated module's own exact text from extracted data.
    Factored out so both the __main__ regeneration entry point below and
    test_extract_instance_entrances.py's freshness check share one real
    rendering path -- never two independently-maintained copies of the same
    formatting logic."""
    lines = [
        "# GENERATED FILE - do not hand-edit.\n",
        "# Regenerate with: python tools/extract_instance_entrances.py (from azerothcore-wotlk/modules/archipelago_wow)\n",
        "from __future__ import annotations\n\n",
        "INSTANCE_ENTRANCE_AREA_TAGS: dict[str, frozenset[str]] = {\n",
    ]
    for name in sorted(data):
        if data[name]:
            tags_repr = "frozenset({" + ", ".join(repr(t) for t in sorted(data[name])) + "})"
        else:
            tags_repr = "frozenset()"
        lines.append(f"    {name!r}: {tags_repr},\n")
    lines.append("}\n")
    return "".join(lines)


if __name__ == "__main__":
    extracted = extract()
    with open(_OUT_PATH, "w", encoding="utf-8") as f:
        f.write(render_module(extracted))
    print(f"Wrote {len(extracted)} instance entrance mappings to {_OUT_PATH}")
