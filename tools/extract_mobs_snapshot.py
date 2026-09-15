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
"Regenerating against a played-on realm" section).

M5.1.1 (design spec docs/superpowers/specs/2026-09-11-archipelago-wow-m5.1.1-mob-randomizer-exclusions-design.md)
adds `shuffle_excluded` to every template/spawn row -- computed once here,
from real DB queries, never re-derived by mobs_spawns.py at mutation time.
See that spec for the exact category list and the corrections made against
this project's real schema (several tables/columns named in the original
ask don't exist in this AzerothCore fork)."""
from __future__ import annotations

import pathlib

import yaml

from db_extract import (
    run_query, parse_world_map_areas, parse_area_zone_ids, parse_area_names,
    resolve_area_or_instance_tags_for_positions,
)

_TEMPLATE_COLUMNS = (
    "entry", "minlevel", "maxlevel", "`rank`", "`type`", "AIName", "ScriptName",
    "HealthModifier", "ManaModifier", "DamageModifier", "ArmorModifier",
    "BaseAttackTime", "speed_walk", "speed_run", "speed_swim", "speed_flight",
    "detection_range",
)

# Column/table names below are verified against this project's own live
# acore_world schema (DESCRIBE/SHOW TABLES), not guessed -- see the M5.1.1
# spec's exclusion-category table for the reasoning behind each one,
# including two corrections against the original ask (creature_linking*/
# taxi_nodes don't exist in this fork; `type IN (7, 8, 11)` would have
# excluded every Humanoid, corrected to (8, 11, 12, 13)). Note: type_flags
# & 2 checks the CREATURE_TYPE_FLAG_VISIBLE_TO_GHOSTS bit (spirit-healer-
# adjacent, ghost-interactible NPCs), kept out of shuffle pool as a
# conservative measure against edge cases, not a boss/civilian flag.
_ENTRY_EXCLUSION_CATALOG_QUERY = """
    SELECT entry FROM creature_template
    WHERE flags_extra & 0x81 != 0
       OR `type` = 0
       OR VehicleId != 0
       OR npcflag != 0
       OR type_flags & 2 != 0
       OR `type` IN (8, 11, 12, 13)
       OR `rank` = 3
       OR unit_flags & 0x02000102 != 0
"""
_ENTRY_EXCLUSION_DISTINCT_TABLES = (
    ("vehicle_accessory", "accessory_entry"),
    ("vehicle_template_accessory", "accessory_entry"),
    ("npc_vendor", "entry"),
    ("npc_trainer", "ID"),
    ("creature_queststarter", "id"),
    ("creature_questender", "id"),
)
_QUEST_REQUIRED_NPC_OR_GO_COLUMNS = (
    "RequiredNpcOrGo1", "RequiredNpcOrGo2", "RequiredNpcOrGo3", "RequiredNpcOrGo4",
)


def _load_excluded_entries() -> frozenset[int]:
    """Entries that may never be the NEW value written into any spawn's
    `id`, and whose OWN spawn(s) may never be reassigned away from them
    either (mobs_spawns.candidate_rows enforces the second half by
    checking each spawn's current template, not this function). See the
    M5.1.1 spec's "Entry-level" table for what each category is and why."""
    excluded: set[int] = set()

    rows = run_query(_ENTRY_EXCLUSION_CATALOG_QUERY)
    excluded.update(int(r[0]) for r in rows)

    for table, column in _ENTRY_EXCLUSION_DISTINCT_TABLES:
        rows = run_query(f"SELECT DISTINCT {column} FROM {table}")
        excluded.update(int(r[0]) for r in rows)

    rows = run_query("SELECT DISTINCT entryorguid FROM smart_scripts WHERE source_type = 0 AND entryorguid > 0")
    excluded.update(int(r[0]) for r in rows)

    rows = run_query("""
        SELECT entry FROM creature_template_addon
        WHERE (auras IS NOT NULL AND auras != '') OR path_id != 0
    """)
    excluded.update(int(r[0]) for r in rows)

    for column in _QUEST_REQUIRED_NPC_OR_GO_COLUMNS:
        rows = run_query(f"SELECT DISTINCT {column} FROM quest_template WHERE {column} > 0")
        excluded.update(int(r[0]) for r in rows)

    return frozenset(excluded)


def _load_excluded_guids() -> frozenset[int]:
    """Spawn guids that may never have their `id` reassigned, regardless of
    what entry currently occupies them. See the M5.1.1 spec's "Spawn-level"
    table."""
    excluded: set[int] = set()

    rows = run_query("SELECT leaderGUID FROM creature_formations")
    excluded.update(int(r[0]) for r in rows)
    rows = run_query("SELECT memberGUID FROM creature_formations")
    excluded.update(int(r[0]) for r in rows)

    rows = run_query("SELECT guid FROM creature WHERE phaseMask > 1 OR phaseMask = 0")
    excluded.update(int(r[0]) for r in rows)

    rows = run_query("SELECT DISTINCT -entryorguid FROM smart_scripts WHERE source_type = 0 AND entryorguid < 0")
    excluded.update(int(r[0]) for r in rows)

    rows = run_query("""
        SELECT guid FROM creature_addon
        WHERE (auras IS NOT NULL AND auras != '') OR path_id != 0
    """)
    excluded.update(int(r[0]) for r in rows)

    return frozenset(excluded)


def build_creature_template_row(
    row: tuple[str, ...], zone_tags: frozenset[str], home_maps: frozenset[int],
    excluded_entries: frozenset[int],
) -> dict:
    (
        entry, minlevel, maxlevel, rank, type_, ai_name, script_name,
        health_modifier, mana_modifier, damage_modifier, armor_modifier,
        base_attack_time, speed_walk, speed_run, speed_swim, speed_flight,
        detection_range,
    ) = row
    entry_int = int(entry)
    return {
        "entry": entry_int,
        "minlevel": int(minlevel),
        "maxlevel": int(maxlevel),
        "rank": int(rank),
        "type": int(type_),
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
        "shuffle_excluded": entry_int in excluded_entries,
    }


def build_creature_spawn_row(row: tuple[str, ...], excluded_guids: frozenset[int]) -> dict:
    guid, template_entry, map_id = row
    guid_int = int(guid)
    return {
        "guid": guid_int,
        "template_entry": int(template_entry),
        "map": int(map_id),
        "shuffle_excluded": guid_int in excluded_guids,
    }


def _load_primary_spawn_positions() -> dict[int, list[tuple[int, float, float]]]:
    """entry -> every real (map, x, y) this template spawns at directly via
    creature.id (primary spawns only -- creature_multispawn's own alternate
    assignments are folded in separately by _load_multispawn_positions below, since
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
    excluded_entries = _load_excluded_entries()
    excluded_guids = _load_excluded_guids()

    template_rows = run_query(f"SELECT {', '.join(_TEMPLATE_COLUMNS)} FROM creature_template ORDER BY entry")
    creature_templates = []
    for row in template_rows:
        entry = int(row[0])
        positions = primary_positions.get(entry, []) + multispawn_positions.get(entry, [])
        zone_tags = resolve_area_or_instance_tags_for_positions(
            positions, world_map_areas, area_zone_ids, area_names, {}, {},
        ) if positions else frozenset()
        home_maps = frozenset(map_id for map_id, _x, _y in positions)
        creature_templates.append(build_creature_template_row(row, zone_tags, home_maps, excluded_entries))

    spawn_rows = run_query("SELECT guid, id, map FROM creature ORDER BY guid")
    creature_spawns = [build_creature_spawn_row(row, excluded_guids) for row in spawn_rows]

    return {"creature_templates": creature_templates, "creature_spawns": creature_spawns}


def _write_dict_pretty(f, name: str, data: dict) -> None:
    f.write(f"{name}: dict[int, dict] = {{\n")
    for key in sorted(data.keys()):
        f.write(f"    {key!r}: {data[key]!r},\n")
    f.write("}\n")


def compile_to_python(data: dict, py_out: pathlib.Path) -> None:
    """Writes mobs_snapshot_content_data.py directly from extract()'s own
    output shape -- no intermediate C++ header (Pipeline B's boot-time
    application only ever reads the final mutation-data JSON, never this
    raw snapshot; see design spec Sec2). Deliberately a plain dict literal
    per table, keyed by each row's own real primary key, matching every
    other *_content_data.py module's "generated, never hand-edit"
    convention."""
    templates_by_entry = {row["entry"]: {k: v for k, v in row.items() if k != "entry"} for row in data["creature_templates"]}
    spawns_by_guid = {row["guid"]: {k: v for k, v in row.items() if k != "guid"} for row in data["creature_spawns"]}

    with open(py_out, "w", encoding="utf-8") as f:
        f.write("# GENERATED FILE - do not hand-edit.\n")
        f.write("# Regenerate with: python tools/extract_mobs_snapshot.py (from azerothcore-wotlk/modules/archipelago_wow/)\n")
        f.write("from __future__ import annotations\n\n")
        _write_dict_pretty(f, "CREATURE_TEMPLATES", templates_by_entry)
        f.write("\n")
        _write_dict_pretty(f, "CREATURE_SPAWNS", spawns_by_guid)


if __name__ == "__main__":
    import os

    data = extract()
    yaml_out = pathlib.Path(__file__).parent.parent / "content" / "mobs_snapshot.yaml"
    with open(yaml_out, "w", encoding="utf-8") as f:
        f.write("# GENERATED FILE - do not hand-edit.\n")
        f.write(f"# Regenerate with: python tools/{pathlib.Path(__file__).name}\n")
        yaml.safe_dump(data, f, sort_keys=False, allow_unicode=True)
    print(
        f"Wrote {len(data['creature_templates'])} creature templates and "
        f"{len(data['creature_spawns'])} creature spawns to {yaml_out}"
    )

    py_out_override = os.environ.get("ARCHIPELAGO_WOW_WORLDS_DIR")
    py_out = (
        pathlib.Path(py_out_override) / "mobs_snapshot_content_data.py"
        if py_out_override
        else pathlib.Path(__file__).parent.parent.parent.parent.parent / "Archipelago" / "worlds" / "wow" / "mobs_snapshot_content_data.py"
    )
    compile_to_python(data, py_out)
    print(f"Compiled to {py_out}")
