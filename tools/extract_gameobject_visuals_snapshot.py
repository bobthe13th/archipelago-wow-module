"""M5.6.4: DB-driven extraction for the safe-subset gameobject_template
visuals candidate pool. The SQL filter itself IS the safety mechanism
(matching this project's "safety is the clamp/construction, not a
post-hoc check" idiom) -- only GAMEOBJECT_TYPE_GENERIC (5, verified
against SharedDefines.h's real GameobjectTypes enum) rows with no quest
linkage (gameobject_questitem/gameobject_queststarter/gameobject_questender)
and no scripted behavior (empty AIName and ScriptName) are ever extracted.
See design spec Sec6 and this plan's Global Constraints. Run this to
regenerate content/gameobject_visuals_snapshot.yaml; never hand-edit that
file.

Safe to regenerate against a played-on realm with no special precaution:
gameobject_template is not among this module's live-play interception
columns."""
from __future__ import annotations

import pathlib

import yaml

from db_extract import run_query

_SAFE_TYPE_GENERIC = 5

_SAFE_SUBSET_QUERY = f"""
    SELECT entry, displayId, size
    FROM gameobject_template
    WHERE `type` = {_SAFE_TYPE_GENERIC}
      AND AIName = ''
      AND ScriptName = ''
      AND entry NOT IN (SELECT GameObjectEntry FROM gameobject_questitem)
      AND entry NOT IN (SELECT id FROM gameobject_queststarter)
      AND entry NOT IN (SELECT id FROM gameobject_questender)
    ORDER BY entry
"""


def build_gameobject_row(row: tuple[str, ...]) -> dict:
    return {"entry": int(row[0]), "displayId": int(row[1]), "size": float(row[2])}


def extract() -> dict:
    rows = run_query(_SAFE_SUBSET_QUERY)
    return {"gameobjects": [build_gameobject_row(row) for row in rows]}


def _write_dict_pretty(f, name: str, data: dict) -> None:
    f.write(f"{name}: dict[int, dict] = {{\n")
    for key in sorted(data.keys()):
        f.write(f"    {key!r}: {data[key]!r},\n")
    f.write("}\n")


def compile_to_python(data: dict, py_out: pathlib.Path) -> None:
    gameobjects_by_entry = {row["entry"]: {k: v for k, v in row.items() if k != "entry"} for row in data["gameobjects"]}

    with open(py_out, "w", encoding="utf-8") as f:
        f.write("# GENERATED FILE - do not hand-edit.\n")
        f.write("# Regenerate with: python tools/extract_gameobject_visuals_snapshot.py (from azerothcore-wotlk/modules/archipelago_wow/)\n")
        f.write("from __future__ import annotations\n\n")
        _write_dict_pretty(f, "GAMEOBJECTS", gameobjects_by_entry)


if __name__ == "__main__":
    import os

    data = extract()
    yaml_out = pathlib.Path(__file__).parent.parent / "content" / "gameobject_visuals_snapshot.yaml"
    with open(yaml_out, "w", encoding="utf-8") as f:
        f.write("# GENERATED FILE - do not hand-edit.\n")
        f.write(f"# Regenerate with: python tools/{pathlib.Path(__file__).name}\n")
        yaml.safe_dump(data, f, sort_keys=False, allow_unicode=True)
    print(f"Wrote {len(data['gameobjects'])} safe-subset gameobjects to {yaml_out}")

    py_out_override = os.environ.get("ARCHIPELAGO_WOW_WORLDS_DIR")
    py_out = (
        pathlib.Path(py_out_override) / "gameobject_visuals_content_data.py"
        if py_out_override
        else pathlib.Path(__file__).parent.parent.parent.parent.parent / "Archipelago" / "worlds" / "wow" / "gameobject_visuals_content_data.py"
    )
    compile_to_python(data, py_out)
    print(f"Compiled to {py_out}")
