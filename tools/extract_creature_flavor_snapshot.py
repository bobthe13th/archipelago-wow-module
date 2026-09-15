"""M5.6.3: DB-driven extraction for the creature flavor-trait bundle --
every real creature spawn's guid/id1/equipment_id, plus every EXISTING
creature_template_addon row (mount/bytes1/bytes2/emote/auras). Only
entries that already have an addon row are captured -- APWorldState can
UPDATE an existing row but never INSERT a new one, so a template with no
addon row simply isn't a candidate for posture/mount/aura mutation (see
this plan's Global Constraints). Run this to regenerate
content/creature_flavor_snapshot.yaml; never hand-edit that file.

Safe to regenerate against a played-on realm with no special precaution:
neither table is among this module's live-play interception columns."""
from __future__ import annotations

import pathlib

import yaml

from db_extract import run_query


def build_equipment_row(row: tuple[str, ...]) -> dict:
    return {"guid": int(row[0]), "id1": int(row[1]), "equipment_id": int(row[2])}


def build_addon_row(row: tuple[str, ...]) -> dict:
    auras = row[5]
    return {
        "entry": int(row[0]),
        "mount": int(row[1]),
        "bytes1": int(row[2]),
        "bytes2": int(row[3]),
        "emote": int(row[4]),
        "auras": "" if auras in ("", "NULL", None) else auras,
    }


def extract() -> dict:
    equipment_rows_raw = run_query("SELECT guid, id1, equipment_id FROM creature ORDER BY guid")
    creature_equipment = [build_equipment_row(row) for row in equipment_rows_raw]

    addon_rows_raw = run_query(
        "SELECT entry, mount, bytes1, bytes2, emote, auras FROM creature_template_addon ORDER BY entry"
    )
    creature_addons = [build_addon_row(row) for row in addon_rows_raw]

    return {"creature_equipment": creature_equipment, "creature_addons": creature_addons}


def _write_dict_pretty(f, name: str, data: dict) -> None:
    f.write(f"{name}: dict[int, dict] = {{\n")
    for key in sorted(data.keys()):
        f.write(f"    {key!r}: {data[key]!r},\n")
    f.write("}\n")


def compile_to_python(data: dict, py_out: pathlib.Path) -> None:
    equipment_by_guid = {row["guid"]: {k: v for k, v in row.items() if k != "guid"} for row in data["creature_equipment"]}
    addons_by_entry = {row["entry"]: {k: v for k, v in row.items() if k != "entry"} for row in data["creature_addons"]}

    with open(py_out, "w", encoding="utf-8") as f:
        f.write("# GENERATED FILE - do not hand-edit.\n")
        f.write("# Regenerate with: python tools/extract_creature_flavor_snapshot.py (from azerothcore-wotlk/modules/archipelago_wow/)\n")
        f.write("from __future__ import annotations\n\n")
        _write_dict_pretty(f, "CREATURE_EQUIPMENT", equipment_by_guid)
        f.write("\n")
        _write_dict_pretty(f, "CREATURE_ADDONS", addons_by_entry)


if __name__ == "__main__":
    import os

    data = extract()
    yaml_out = pathlib.Path(__file__).parent.parent / "content" / "creature_flavor_snapshot.yaml"
    with open(yaml_out, "w", encoding="utf-8") as f:
        f.write("# GENERATED FILE - do not hand-edit.\n")
        f.write(f"# Regenerate with: python tools/{pathlib.Path(__file__).name}\n")
        yaml.safe_dump(data, f, sort_keys=False, allow_unicode=True)
    print(
        f"Wrote {len(data['creature_equipment'])} creature spawns and "
        f"{len(data['creature_addons'])} creature_template_addon rows to {yaml_out}"
    )

    py_out_override = os.environ.get("ARCHIPELAGO_WOW_WORLDS_DIR")
    py_out = (
        pathlib.Path(py_out_override) / "creature_flavor_content_data.py"
        if py_out_override
        else pathlib.Path(__file__).parent.parent.parent.parent.parent / "Archipelago" / "worlds" / "wow" / "creature_flavor_content_data.py"
    )
    compile_to_python(data, py_out)
    print(f"Compiled to {py_out}")
