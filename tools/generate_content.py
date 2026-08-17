#!/usr/bin/env python3
# azerothcore-wotlk/modules/archipelago_wow/tools/generate_content.py
"""Compile a YAML content-table family into the C++ module's content-table
header and the Python apworld's content-data module.

See the plan/spec for the YAML schema. Run with --help for CLI usage.
"""
from __future__ import annotations

import argparse
import pathlib
import sys

import yaml


class ValidationError(ValueError):
    """A content YAML file violates a schema/cross-reference constraint."""


def load_family(yaml_path: pathlib.Path) -> dict:
    with open(yaml_path, "r", encoding="utf-8") as f:
        data = yaml.safe_load(f) or {}

    if "family" not in data:
        raise ValidationError(f"{yaml_path}: missing required top-level 'family' key")

    data.setdefault("locations", [])
    data.setdefault("items", [])
    data.setdefault("constants", {})

    _validate_unique_ids(data["locations"], "location_id", yaml_path, "location")
    _validate_unique_ids(data["items"], "item_id", yaml_path, "item")
    _validate_unique_names(data["locations"], data["items"], yaml_path)
    _validate_instance_unlock_references(data["locations"], data["items"], yaml_path)

    return data


def _validate_unique_ids(rows: list, key: str, yaml_path: pathlib.Path, row_kind: str) -> None:
    seen: dict[int, str] = {}
    for row in rows:
        value = row[key]
        if value in seen:
            raise ValidationError(
                f"{yaml_path}: duplicate {row_kind} {key}={value} "
                f"(rows {seen[value]!r} and {row['name']!r})"
            )
        seen[value] = row["name"]


def _validate_unique_names(locations: list, items: list, yaml_path: pathlib.Path) -> None:
    names = [row["name"] for row in locations] + [row["name"] for row in items]
    dupes = sorted({n for n in names if names.count(n) > 1})
    if dupes:
        raise ValidationError(f"{yaml_path}: duplicate name(s) across locations/items: {dupes}")


def _validate_instance_unlock_references(locations: list, items: list, yaml_path: pathlib.Path) -> None:
    clear_keys = {
        loc["trigger"]["instance_key"]
        for loc in locations
        if loc["trigger"]["kind"] == "instance_clear"
    }
    for item in items:
        delivery = item["delivery"]
        if delivery["kind"] == "realm_state" and delivery["effect"] == "unlock_instance":
            instance_key = delivery["instance_key"]
            if instance_key not in clear_keys:
                raise ValidationError(
                    f"{yaml_path}: item {item['name']!r} unlocks instance_key "
                    f"{instance_key!r} but no location row has a matching "
                    f"instance_clear trigger"
                )


_GENERATED_HEADER_PY = (
    "# GENERATED FILE - do not edit by hand.\n"
    "# Regenerate with: python modules/archipelago_wow/tools/generate_content.py {source}\n"
)


def emit_python(data: dict) -> str:
    family = data["family"]
    if family == "quests":
        return _emit_python_quests(data)
    if family == "core_loop":
        return _emit_python_core_loop(data)
    raise ValidationError(f"unknown family: {family!r}")


def _emit_python_quests(data: dict) -> str:
    lines = [_GENERATED_HEADER_PY.format(source="content/quests.yaml"), ""]
    lines.append("LOCATIONS: dict[str, int] = {")
    for loc in data["locations"]:
        lines.append(f'    "{loc["name"]}": {loc["location_id"]},')
    lines.append("}")
    lines.append("")
    lines.append("ITEMS: dict[str, int] = {")
    for item in data["items"]:
        lines.append(f'    "{item["name"]}": {item["item_id"]},')
    lines.append("}")
    lines.append("")
    return "\n".join(lines)


def _emit_python_core_loop(data: dict) -> str:
    constants = data["constants"]
    lines = [_GENERATED_HEADER_PY.format(source="content/core_loop.yaml"), ""]
    for key in ("STARTING_LEVEL_CAP", "LEVEL_CAP_STEP", "SPRINT_GOAL_LEVEL"):
        lines.append(f"{key} = {constants[key]}")
    lines.append("")
    lines.append("ITEMS: dict[str, tuple[int, int]] = {")
    for item in data["items"]:
        lines.append(f'    "{item["name"]}": ({item["item_id"]}, {item["count"]}),')
    lines.append("}")
    lines.append("")
    lines.append("LEVEL_LOCATIONS: dict[int, int] = {")
    milestone_locs = [loc for loc in data["locations"] if loc["trigger"]["kind"] == "level_milestone"]
    milestone_locs.sort(key=lambda loc: loc["trigger"]["level"])
    for loc in milestone_locs:
        lines.append(f'    {loc["trigger"]["level"]}: {loc["location_id"]},')
    lines.append("}")
    lines.append("")
    lines.append("INSTANCE_CLEAR_LOCATIONS: dict[str, int] = {")
    for loc in data["locations"]:
        if loc["trigger"]["kind"] == "instance_clear":
            lines.append(f'    "{loc["trigger"]["instance_key"]}": {loc["location_id"]},')
    lines.append("}")
    lines.append("")
    return "\n".join(lines)


def main(argv: list[str] | None = None) -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("yaml_path", type=pathlib.Path)
    parser.add_argument("--py-out", type=pathlib.Path, required=True)
    parser.add_argument("--cpp-out", type=pathlib.Path, required=True)
    args = parser.parse_args(argv)

    data = load_family(args.yaml_path)
    args.py_out.write_text(emit_python(data), encoding="utf-8")
    # --cpp-out is wired up in Task 2; until then this only writes the Python side.
    print(f"wrote {args.py_out}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
