"""M5.6.2: DB-driven extraction for creature appearance data -- every real
creature_template name/subname, plus creature_template_model rows for
creatures with exactly ONE model variant (see this plan's Global
Constraints for why multi-model creatures are excluded: their composite
(CreatureID, Idx) PK isn't safely snapshotable via APWorldState's
single-column machinery). Run this to regenerate
content/creature_appearance_snapshot.yaml; never hand-edit that file.

Safe to regenerate against a played-on realm with no special precaution:
neither table is among this module's live-play interception columns."""
from __future__ import annotations

import collections
import pathlib

import yaml

from db_extract import run_query


def build_name_row(row: tuple[str, ...]) -> dict:
    subname = row[2]
    return {"entry": int(row[0]), "name": row[1], "subname": "" if subname in ("", "NULL", None) else subname}


def build_model_row(row: tuple[str, ...]) -> dict:
    # Keys deliberately match the real creature_template_model column
    # names (CreatureDisplayID/DisplayScale) -- environment_model_scale_
    # name.py's mutate() writes these dict keys straight through as SQL
    # column names via APWorldState::Apply's literal `UPDATE ... SET
    # <key> = <value>`, so this snapshot must use the real names, not a
    # translated/simplified internal alias.
    return {"creature_id": int(row[0]), "CreatureDisplayID": int(row[1]), "DisplayScale": float(row[2])}


def extract() -> dict:
    name_rows = run_query("SELECT entry, name, subname FROM creature_template ORDER BY entry")
    creature_names = [build_name_row(row) for row in name_rows]

    model_rows_raw = run_query(
        "SELECT CreatureID, CreatureDisplayID, DisplayScale FROM creature_template_model ORDER BY CreatureID, Idx"
    )
    rows_by_creature: dict[int, list] = collections.defaultdict(list)
    for row in model_rows_raw:
        rows_by_creature[int(row[0])].append(row)

    creature_models = [
        build_model_row(rows[0])
        for creature_id, rows in rows_by_creature.items()
        if len(rows) == 1
    ]

    return {"creature_names": creature_names, "creature_models": creature_models}


def _write_dict_pretty(f, name: str, data: dict) -> None:
    f.write(f"{name}: dict[int, dict] = {{\n")
    for key in sorted(data.keys()):
        f.write(f"    {key!r}: {data[key]!r},\n")
    f.write("}\n")


def compile_to_python(data: dict, py_out: pathlib.Path) -> None:
    names_by_entry = {row["entry"]: {k: v for k, v in row.items() if k != "entry"} for row in data["creature_names"]}
    models_by_creature_id = {
        row["creature_id"]: {k: v for k, v in row.items() if k != "creature_id"} for row in data["creature_models"]
    }

    with open(py_out, "w", encoding="utf-8") as f:
        f.write("# GENERATED FILE - do not hand-edit.\n")
        f.write("# Regenerate with: python tools/extract_creature_appearance_snapshot.py (from azerothcore-wotlk/modules/archipelago_wow/)\n")
        f.write("from __future__ import annotations\n\n")
        _write_dict_pretty(f, "CREATURE_NAMES", names_by_entry)
        f.write("\n")
        _write_dict_pretty(f, "CREATURE_MODELS", models_by_creature_id)


if __name__ == "__main__":
    import os

    data = extract()
    yaml_out = pathlib.Path(__file__).parent.parent / "content" / "creature_appearance_snapshot.yaml"
    with open(yaml_out, "w", encoding="utf-8") as f:
        f.write("# GENERATED FILE - do not hand-edit.\n")
        f.write(f"# Regenerate with: python tools/{pathlib.Path(__file__).name}\n")
        yaml.safe_dump(data, f, sort_keys=False, allow_unicode=True)
    print(
        f"Wrote {len(data['creature_names'])} creature names and "
        f"{len(data['creature_models'])} single-model creatures to {yaml_out}"
    )

    py_out_override = os.environ.get("ARCHIPELAGO_WOW_WORLDS_DIR")
    py_out = (
        pathlib.Path(py_out_override) / "creature_appearance_content_data.py"
        if py_out_override
        else pathlib.Path(__file__).parent.parent.parent.parent.parent / "Archipelago" / "worlds" / "wow" / "creature_appearance_content_data.py"
    )
    compile_to_python(data, py_out)
    print(f"Compiled to {py_out}")
