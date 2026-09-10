"""M5.1.0: DB-driven extraction for the shared mob snapshot -- every real
creature_template row and every real creature spawn row, in the shape
mobs_level.py/mobs_spawns.py (and later M5.1.2/M5.1.3) need at generation
time. Run this to regenerate content/mobs_snapshot.yaml; never hand-edit
that file.

Unlike every other extraction script in this project, this one does NOT
feed generate_content.py's location/item pipeline -- Pipeline B mutations
create no AP locations or items (design spec M5.0 Sec1), so there is no
`family`/`locations`/`items` shape to produce. compile_to_python() (Task 2)
writes a plain Python data module directly instead of going through the
shared C++/Python compiler.

Safe to regenerate against a played-on realm with no special precaution:
creature_template/creature/creature_multispawn are not among this module's
five live-play interception columns (see tools/README.md's own
"Regenerating against a played-on realm" section)."""
from __future__ import annotations

import pathlib

import yaml

from db_extract import (
    run_query, parse_world_map_areas, parse_area_zone_ids, parse_area_names,
    resolve_area_or_instance_tags_for_positions,
)

_TEMPLATE_COLUMNS = (
    "entry", "minlevel", "maxlevel", "rank", "AIName", "ScriptName",
    "HealthModifier", "ManaModifier", "DamageModifier", "ArmorModifier",
    "BaseAttackTime", "speed_walk", "speed_run", "speed_swim", "speed_flight",
    "detection_range",
)


def build_creature_template_row(row: tuple[str, ...], zone_tags: frozenset[str], home_maps: frozenset[int]) -> dict:
    (
        entry, minlevel, maxlevel, rank, ai_name, script_name,
        health_modifier, mana_modifier, damage_modifier, armor_modifier,
        base_attack_time, speed_walk, speed_run, speed_swim, speed_flight,
        detection_range,
    ) = row
    return {
        "entry": int(entry),
        "minlevel": int(minlevel),
        "maxlevel": int(maxlevel),
        "rank": int(rank),
        "ai_name": ai_name,
        "script_name": script_name,
        "health_modifier": float(health_modifier),
        "mana_modifier": float(mana_modifier),
        "damage_modifier": float(damage_modifier),
        "armor_modifier": float(armor_modifier),
        "base_attack_time": int(base_attack_time),
        "speed_walk": float(speed_walk),
        "speed_run": float(speed_run),
        "speed_swim": float(speed_swim),
        "speed_flight": float(speed_flight),
        "detection_range": float(detection_range),
        "zone_tags": sorted(zone_tags),
        "home_maps": sorted(home_maps),
    }


def build_creature_spawn_row(row: tuple[str, ...]) -> dict:
    guid, template_entry, map_id = row
    return {"guid": int(guid), "template_entry": int(template_entry), "map": int(map_id)}


def _load_primary_spawn_positions() -> dict[int, list[tuple[int, float, float]]]:
    """entry -> every real (map, x, y) this template spawns at directly via
    creature.id (primary spawns only -- creature_multispawn's own alternate
    assignments are folded in separately by _load_home_maps below, since
    zone_tags only needs REACHABLE positions, and an alternate-template
    spawn is exactly as reachable as its primary)."""
    rows = run_query("SELECT id, map, position_x, position_y FROM creature")
    result: dict[int, list[tuple[int, float, float]]] = {}
    for id_str, map_str, x_str, y_str in rows:
        result.setdefault(int(id_str), []).append((int(map_str), float(x_str), float(y_str)))
    return result


def _load_multispawn_positions() -> dict[int, list[tuple[int, float, float]]]:
    """entry -> every real (map, x, y) this template spawns at via
    creature_multispawn (spawnId -> creature.guid, entry ->
    creature_template.entry) -- the alternate-template mechanism this
    project's live schema actually uses (see this plan's Global Constraints
    and the M5.1 design spec's own schema-correction note)."""
    rows = run_query("""
        SELECT cms.entry, c.map, c.position_x, c.position_y
        FROM creature_multispawn cms
        JOIN creature c ON c.guid = cms.spawnId
    """)
    result: dict[int, list[tuple[int, float, float]]] = {}
    for entry_str, map_str, x_str, y_str in rows:
        result.setdefault(int(entry_str), []).append((int(map_str), float(x_str), float(y_str)))
    return result


def extract() -> dict:
    world_map_areas = parse_world_map_areas()
    area_zone_ids = parse_area_zone_ids()
    area_names = parse_area_names()

    primary_positions = _load_primary_spawn_positions()
    multispawn_positions = _load_multispawn_positions()

    template_rows = run_query(f"SELECT {', '.join(_TEMPLATE_COLUMNS)} FROM creature_template ORDER BY entry")
    creature_templates = []
    for row in template_rows:
        entry = int(row[0])
        positions = primary_positions.get(entry, []) + multispawn_positions.get(entry, [])
        zone_tags = resolve_area_or_instance_tags_for_positions(
            positions, world_map_areas, area_zone_ids, area_names, {}, {},
        ) if positions else frozenset()
        home_maps = frozenset(map_id for map_id, _x, _y in positions)
        creature_templates.append(build_creature_template_row(row, zone_tags, home_maps))

    spawn_rows = run_query("SELECT guid, id, map FROM creature ORDER BY guid")
    creature_spawns = [build_creature_spawn_row(row) for row in spawn_rows]

    return {"creature_templates": creature_templates, "creature_spawns": creature_spawns}


if __name__ == "__main__":
    data = extract()
    out_path = pathlib.Path(__file__).parent.parent / "content" / "mobs_snapshot.yaml"
    with open(out_path, "w", encoding="utf-8") as f:
        f.write("# GENERATED FILE - do not hand-edit.\n")
        f.write(f"# Regenerate with: python tools/{pathlib.Path(__file__).name}\n")
        yaml.safe_dump(data, f, sort_keys=False, allow_unicode=True)
    print(
        f"Wrote {len(data['creature_templates'])} creature templates and "
        f"{len(data['creature_spawns'])} creature spawns to {out_path}"
    )
