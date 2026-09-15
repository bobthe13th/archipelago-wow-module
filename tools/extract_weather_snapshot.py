"""M5.6.0: DB-driven extraction for the weather snapshot -- every real
game_weather row, in the shape environment_weather.py needs at generation
time. Run this to regenerate content/weather_snapshot.yaml; never hand-edit
that file.

Unlike every other extraction script in this project, this one does NOT
feed generate_content.py's location/item pipeline -- Pipeline B mutations
create no AP locations or items (design spec M5.0 Sec1). compile_to_python()
(Task 2) writes a plain Python data module directly instead of going
through the shared C++/Python compiler.

Safe to regenerate against a played-on realm with no special precaution:
game_weather is not among this module's live-play interception columns."""
from __future__ import annotations

import pathlib

import yaml

from db_extract import run_query

_CHANCE_COLUMNS = (
    "spring_rain_chance", "spring_snow_chance", "spring_storm_chance",
    "summer_rain_chance", "summer_snow_chance", "summer_storm_chance",
    "fall_rain_chance", "fall_snow_chance", "fall_storm_chance",
    "winter_rain_chance", "winter_snow_chance", "winter_storm_chance",
)


def build_weather_row(row: tuple[str, ...]) -> dict:
    result = {"zone": int(row[0])}
    for column, value in zip(_CHANCE_COLUMNS, row[1:]):
        result[column] = int(value)
    return result


def extract() -> dict:
    columns_sql = ", ".join(_CHANCE_COLUMNS)
    rows = run_query(f"SELECT zone, {columns_sql} FROM game_weather ORDER BY zone")
    return {"weather_zones": [build_weather_row(row) for row in rows]}


def _write_dict_pretty(f, name: str, data: dict) -> None:
    f.write(f"{name}: dict[int, dict] = {{\n")
    for key in sorted(data.keys()):
        f.write(f"    {key!r}: {data[key]!r},\n")
    f.write("}\n")


def compile_to_python(data: dict, py_out: pathlib.Path) -> None:
    """Writes weather_snapshot_content_data.py directly from extract()'s own
    output shape -- matching mobs_snapshot_content_data.py's own "generated,
    never hand-edit" convention (see extract_mobs_snapshot.py)."""
    zones_by_id = {row["zone"]: {k: v for k, v in row.items() if k != "zone"} for row in data["weather_zones"]}

    with open(py_out, "w", encoding="utf-8") as f:
        f.write("# GENERATED FILE - do not hand-edit.\n")
        f.write("# Regenerate with: python tools/extract_weather_snapshot.py (from azerothcore-wotlk/modules/archipelago_wow/)\n")
        f.write("from __future__ import annotations\n\n")
        _write_dict_pretty(f, "WEATHER_ZONES", zones_by_id)


if __name__ == "__main__":
    import os

    data = extract()
    yaml_out = pathlib.Path(__file__).parent.parent / "content" / "weather_snapshot.yaml"
    with open(yaml_out, "w", encoding="utf-8") as f:
        f.write("# GENERATED FILE - do not hand-edit.\n")
        f.write(f"# Regenerate with: python tools/{pathlib.Path(__file__).name}\n")
        yaml.safe_dump(data, f, sort_keys=False, allow_unicode=True)
    print(f"Wrote {len(data['weather_zones'])} weather zones to {yaml_out}")

    py_out_override = os.environ.get("ARCHIPELAGO_WOW_WORLDS_DIR")
    py_out = (
        pathlib.Path(py_out_override) / "weather_snapshot_content_data.py"
        if py_out_override
        else pathlib.Path(__file__).parent.parent.parent.parent.parent / "Archipelago" / "worlds" / "wow" / "weather_snapshot_content_data.py"
    )
    compile_to_python(data, py_out)
    print(f"Compiled to {py_out}")
