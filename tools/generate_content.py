#!/usr/bin/env python3
# azerothcore-wotlk/modules/archipelago_wow/tools/generate_content.py
"""Compile a YAML content-table family into the C++ module's content-table
header and the Python apworld's content-data module.

See the plan/spec for the YAML schema. Run with --help for CLI usage.
"""
from __future__ import annotations

import argparse
import pathlib
import re
import sys
from dataclasses import dataclass

import yaml


class ValidationError(ValueError):
    """A content YAML file violates a schema/cross-reference constraint."""


def _cpp_const_name(name: str) -> str:
    """AP_ITEM_<NAME> constant identifier from a content item's display name.

    Replaces any run of characters that isn't [A-Za-z0-9] with a single
    underscore (not just space/colon) -- a real MSVC compile failure, caught
    only once this module was actually compiled for the first time, showed
    the narrower space/colon-only version left a literal '-' in "Weapon
    Proficiency: Two-Handed Swords", producing an illegal C++ identifier.
    """
    return "AP_ITEM_" + re.sub(r"[^A-Za-z0-9]+", "_", name.upper()).strip("_")


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
    _validate_recognized_kinds(data["family"], data["locations"], data["items"], yaml_path)
    _validate_boss_lists(data["locations"], yaml_path)

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


def _validate_boss_lists(locations: list, yaml_path: pathlib.Path) -> None:
    # Task 23: an instance_clear row's optional `bosses:` sub-list drives
    # all_bosses InstanceClearMode -- exactly one row must be marked
    # `final: true`, and its entry must match the trigger's own
    # final_boss_entry (the single field final_boss_only mode reads), so the
    # two modes can never disagree about which creature is "the" final boss.
    for loc in locations:
        trigger = loc["trigger"]
        if trigger["kind"] != "instance_clear" or "bosses" not in trigger:
            continue
        bosses = trigger["bosses"]
        final_bosses = [b for b in bosses if b.get("final")]
        if len(final_bosses) != 1:
            raise ValidationError(
                f"{yaml_path}: location {loc['name']!r} bosses list must have "
                f"exactly one entry marked final: true, found {len(final_bosses)}"
            )
        if final_bosses[0]["entry"] != trigger["final_boss_entry"]:
            raise ValidationError(
                f"{yaml_path}: location {loc['name']!r} bosses list's final "
                f"entry ({final_bosses[0]['entry']}) does not match "
                f"trigger.final_boss_entry ({trigger['final_boss_entry']})"
            )
        entries = [b["entry"] for b in bosses]
        if len(entries) != len(set(entries)):
            raise ValidationError(
                f"{yaml_path}: location {loc['name']!r} bosses list has "
                f"duplicate creature entries: {entries}"
            )


@dataclass
class FamilySchema:
    valid_trigger_kinds: set[str]
    valid_delivery_kinds: set[str]
    generic: bool = False  # True only for new families (Group 1-4) that use emit_*_generic;
                            # every existing family below keeps its own hand-rolled emitter.


FAMILY_SCHEMAS: dict[str, FamilySchema] = {
    "quests": FamilySchema(valid_trigger_kinds={"quest"}, valid_delivery_kinds={"mail"}),
    "core_loop": FamilySchema(
        valid_trigger_kinds={"level_milestone", "instance_clear"},
        valid_delivery_kinds={"realm_state"},
    ),
    "gates": FamilySchema(valid_trigger_kinds=set(), valid_delivery_kinds={"flag"}),
    "filler": FamilySchema(valid_trigger_kinds={"always_available"}, valid_delivery_kinds=set()),
    "traps": FamilySchema(valid_trigger_kinds=set(), valid_delivery_kinds={"trap"}),
    "rares": FamilySchema(valid_trigger_kinds={"rare_kill"}, valid_delivery_kinds={"realm_state"}),
    "fish": FamilySchema(valid_trigger_kinds={"fish_catch"}, valid_delivery_kinds={"mail"}),
    "professions": FamilySchema(valid_trigger_kinds={"skill_milestone"}, valid_delivery_kinds={"realm_state"}),
    "collections": FamilySchema(valid_trigger_kinds={"learn_spell"}, valid_delivery_kinds={"mail"}),
}

_REALM_STATE_EFFECTS = {
    "raise_level_cap",
    "unlock_instance",
    "unlock_dark_portal",
    "unlock_northrend_passage",
    "grant_key",
    "record_milestone",
}


def _validate_recognized_kinds(family: str, locations: list, items: list, yaml_path: pathlib.Path) -> None:
    schema = FAMILY_SCHEMAS.get(family)
    valid_trigger_kinds = schema.valid_trigger_kinds if schema is not None else None
    if valid_trigger_kinds is not None:
        for loc in locations:
            kind = loc["trigger"]["kind"]
            if kind not in valid_trigger_kinds:
                raise ValidationError(
                    f"{yaml_path}: location {loc['name']!r} has unrecognized "
                    f"trigger.kind {kind!r} for family {family!r} "
                    f"(expected one of {sorted(valid_trigger_kinds)})"
                )

    valid_delivery_kinds = schema.valid_delivery_kinds if schema is not None else None
    if valid_delivery_kinds is not None:
        for item in items:
            delivery = item["delivery"]
            kind = delivery["kind"]
            if kind not in valid_delivery_kinds:
                raise ValidationError(
                    f"{yaml_path}: item {item['name']!r} has unrecognized "
                    f"delivery.kind {kind!r} for family {family!r} "
                    f"(expected one of {sorted(valid_delivery_kinds)})"
                )
            if kind == "realm_state":
                effect = delivery["effect"]
                if effect not in _REALM_STATE_EFFECTS:
                    raise ValidationError(
                        f"{yaml_path}: item {item['name']!r} has unrecognized "
                        f"delivery.effect {effect!r} "
                        f"(expected one of {sorted(_REALM_STATE_EFFECTS)})"
                    )
            if kind == "flag":
                if "flag_key" not in delivery:
                    raise ValidationError(
                        f"{yaml_path}: item {item['name']!r} has delivery.kind "
                        f"'flag' but is missing required key 'flag_key'"
                    )
                if "tier" not in delivery:
                    raise ValidationError(
                        f"{yaml_path}: item {item['name']!r} has delivery.kind "
                        f"'flag' but is missing required key 'tier'"
                    )
            if kind == "trap":
                if "effect" not in delivery:
                    raise ValidationError(
                        f"{yaml_path}: item {item['name']!r} has delivery.kind "
                        f"'trap' but is missing required key 'effect'"
                    )
                if "lethal" not in delivery:
                    raise ValidationError(
                        f"{yaml_path}: item {item['name']!r} has delivery.kind "
                        f"'trap' but is missing required key 'lethal'"
                    )


_GENERATED_HEADER_PY = (
    "# GENERATED FILE - do not edit by hand.\n"
    "# Regenerate with: python modules/archipelago_wow/tools/generate_content.py {source}\n"
)


def emit_python_generic(data: dict) -> str:
    """Generic LOCATIONS/ITEMS emitter for new, name-keyed content families.

    Not used by any of the 9 existing families as of this task -- each keeps
    its own hand-rolled emitter, since 5 of 8 name-keyed families already emit
    extra family-specific exports (e.g. gates.FLAG_KEY_BY_ITEM_NAME) this
    generic shape doesn't cover. Group 1-4's new families register
    `generic=True` in FAMILY_SCHEMAS to opt into this emitter instead.
    """
    family = data["family"]
    lines = [_GENERATED_HEADER_PY.format(source=f"content/{family}.yaml"), ""]
    lines.append("LOCATIONS: dict[str, int] = {")
    for loc in data["locations"]:
        lines.append(f'    "{loc["name"]}": {loc["location_id"]},')
    lines.append("}")
    lines.append("")
    lines.append("ITEMS: dict[str, tuple[int, int]] = {")
    for item in data["items"]:
        count = item.get("count", 1)
        lines.append(f'    "{item["name"]}": ({item["item_id"]}, {count}),')
    lines.append("}")
    lines.append("")
    return "\n".join(lines)


def emit_python(data: dict) -> str:
    family = data["family"]
    schema = FAMILY_SCHEMAS.get(family)
    if schema is not None and schema.generic:
        return emit_python_generic(data)
    if family == "quests":
        return _emit_python_quests(data)
    if family == "core_loop":
        return _emit_python_core_loop(data)
    if family == "gates":
        return _emit_python_gates(data)
    if family == "filler":
        return _emit_python_filler(data)
    if family == "traps":
        return _emit_python_traps(data)
    if family == "rares":
        return _emit_python_rares(data)
    if family == "fish":
        return _emit_python_fish(data)
    if family == "professions":
        return _emit_python_professions(data)
    if family == "collections":
        return _emit_python_collections(data)
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
    lines.append("# Every item whose delivery is realm_state/unlock_instance, keyed by its")
    lines.append("# own AP item id -- a generic map so a new instance_clear row's unlock item")
    lines.append("# needs zero additional C++/Python code to actually unlock anything (found")
    lines.append("# the hard way in Task 23: the 3 new raid unlock items were added to this")
    lines.append("# content table but never wired into ArchipelagoPlayerScript.cpp's delivery")
    lines.append("# dispatch, since that dispatch hardcoded only the original 2 dungeons'")
    lines.append("# item ids -- receiving those items did nothing at all in real play until")
    lines.append("# this generic map replaced the hardcoded blocks).")
    lines.append("INSTANCE_UNLOCK_ITEM_TO_KEY: dict[int, str] = {")
    for item in data["items"]:
        delivery = item["delivery"]
        if delivery["kind"] == "realm_state" and delivery["effect"] == "unlock_instance":
            lines.append(f'    {item["item_id"]}: "{delivery["instance_key"]}",')
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
    lines.append("# Task 23 bugfix: locations.py's create_core_loop_locations previously")
    lines.append("# hardcoded a 2-way name ternary over INSTANCE_CLEAR_LOCATIONS' keys --")
    lines.append("# adding this family's 3rd+ instance_key broke it (every non-Ragefire key")
    lines.append("# collided on the literal string \"Clear Deadmines\", a real duplicate-")
    lines.append("# location crash caught by this task's own apworld test run). This map,")
    lines.append("# generated directly from each location row's own `name` field, replaces")
    lines.append("# that ternary generically for any future instance_clear row.")
    lines.append("INSTANCE_CLEAR_LOCATION_NAMES: dict[str, str] = {")
    for loc in data["locations"]:
        if loc["trigger"]["kind"] == "instance_clear":
            lines.append(f'    "{loc["trigger"]["instance_key"]}": "{loc["name"]}",')
    lines.append("}")
    lines.append("")
    lines.append("# Task 23: only instances whose YAML row carries a `bosses:` sub-list")
    lines.append("# appear here -- Ragefire Chasm/Deadmines (no bosses: list) are absent,")
    lines.append("# not present with a single-entry list. Not consumed by the apworld as")
    lines.append("# of Task 23 (no rules.py/goals.py logic needs per-boss creature ids),")
    lines.append("# emitted for parity with the C++ side per this task's own Files list.")
    lines.append("INSTANCE_BOSS_ENTRIES: dict[str, list[int]] = {")
    for loc in data["locations"]:
        trigger = loc["trigger"]
        if trigger["kind"] == "instance_clear" and "bosses" in trigger:
            entries = ", ".join(str(b["entry"]) for b in trigger["bosses"])
            lines.append(f'    "{trigger["instance_key"]}": [{entries}],')
    lines.append("}")
    lines.append("")
    lines.append("# Task 24 (Completionist mode): every instance_key with an `expansion:`")
    lines.append("# field on its location row, grouped by that expansion. A row with no")
    lines.append("# `expansion:` field (none exist as of Task 24, but the loader's schema")
    lines.append("# still treats it as optional -- see core_loop.yaml's own header comment)")
    lines.append("# is simply absent from every list here, not present under a None/empty key.")
    lines.append("INSTANCES_BY_EXPANSION: dict[str, list[str]] = {")
    expansions: dict[str, list[str]] = {}
    for loc in data["locations"]:
        trigger = loc["trigger"]
        if trigger["kind"] == "instance_clear" and "expansion" in trigger:
            expansions.setdefault(trigger["expansion"], []).append(trigger["instance_key"])
    for expansion, instance_keys in expansions.items():
        keys = ", ".join(f'"{k}"' for k in instance_keys)
        lines.append(f'    "{expansion}": [{keys}],')
    lines.append("}")
    lines.append("")
    return "\n".join(lines)


def _emit_python_gates(data: dict) -> str:
    lines = [_GENERATED_HEADER_PY.format(source="content/gates.yaml"), ""]
    lines.append("ITEMS: dict[str, tuple[int, int]] = {")
    for item in data["items"]:
        lines.append(f'    "{item["name"]}": ({item["item_id"]}, {item["count"]}),')
    lines.append("}")
    lines.append("")
    lines.append("FLAG_KEY_BY_ITEM_NAME: dict[str, str] = {")
    for item in data["items"]:
        lines.append(f'    "{item["name"]}": "{item["delivery"]["flag_key"]}",')
    lines.append("}")
    lines.append("")
    lines.append("FLAG_TIER_BY_ITEM_NAME: dict[str, int] = {")
    for item in data["items"]:
        lines.append(f'    "{item["name"]}": {item["delivery"]["tier"]},')
    lines.append("}")
    lines.append("")
    return "\n".join(lines)


def _emit_python_filler(data: dict) -> str:
    lines = [_GENERATED_HEADER_PY.format(source="content/filler.yaml"), ""]
    lines.append("LOCATIONS: dict[str, int] = {")
    for loc in data["locations"]:
        lines.append(f'    "{loc["name"]}": {loc["location_id"]},')
    lines.append("}")
    lines.append("")
    return "\n".join(lines)


def _emit_python_traps(data: dict) -> str:
    lines = [_GENERATED_HEADER_PY.format(source="content/traps.yaml"), ""]
    lines.append("ITEMS: dict[str, tuple[int, int]] = {")
    for item in data["items"]:
        lines.append(f'    "{item["name"]}": ({item["item_id"]}, {item["count"]}),')
    lines.append("}")
    lines.append("")
    lines.append("EFFECT_BY_ITEM_NAME: dict[str, str] = {")
    for item in data["items"]:
        lines.append(f'    "{item["name"]}": "{item["delivery"]["effect"]}",')
    lines.append("}")
    lines.append("")
    lines.append("LETHAL_BY_ITEM_NAME: dict[str, bool] = {")
    for item in data["items"]:
        lines.append(f'    "{item["name"]}": {item["delivery"]["lethal"]},')
    lines.append("}")
    lines.append("")
    return "\n".join(lines)


def _emit_python_rares(data: dict) -> str:
    lines = [_GENERATED_HEADER_PY.format(source="content/rares.yaml"), ""]
    lines.append("LOCATIONS: dict[str, int] = {")
    for loc in data["locations"]:
        lines.append(f'    "{loc["name"]}": {loc["location_id"]},')
    lines.append("}")
    lines.append("")
    lines.append("ITEMS: dict[str, tuple[int, int]] = {")
    for item in data["items"]:
        lines.append(f'    "{item["name"]}": ({item["item_id"]}, {item["count"]}),')
    lines.append("}")
    lines.append("")
    return "\n".join(lines)


def _emit_python_fish(data: dict) -> str:
    lines = [_GENERATED_HEADER_PY.format(source="content/fish.yaml"), ""]
    lines.append("LOCATIONS: dict[str, int] = {")
    for loc in data["locations"]:
        lines.append(f'    "{loc["name"]}": {loc["location_id"]},')
    lines.append("}")
    lines.append("")
    lines.append("ITEMS: dict[str, tuple[int, int]] = {")
    for item in data["items"]:
        lines.append(f'    "{item["name"]}": ({item["item_id"]}, {item["count"]}),')
    lines.append("}")
    lines.append("")
    lines.append("# Location names whose trigger carries `region: northrend` -- rules.py")
    lines.append("# attaches a state.has(\"Northrend Passage\", ...) rule to exactly these,")
    lines.append("# per spec Sec5.4: \"fish-catch locations inherit normal regional access")
    lines.append("# logic\". See fish.yaml's own header comment for how this was decided.")
    lines.append("NORTHREND_LOCATION_NAMES: frozenset[str] = frozenset({")
    for loc in data["locations"]:
        if loc["trigger"].get("region") == "northrend":
            lines.append(f'    "{loc["name"]}",')
    lines.append("})")
    lines.append("")
    return "\n".join(lines)


def _emit_python_professions(data: dict) -> str:
    lines = [_GENERATED_HEADER_PY.format(source="content/professions.yaml"), ""]
    lines.append("LOCATIONS: dict[str, int] = {")
    for loc in data["locations"]:
        lines.append(f'    "{loc["name"]}": {loc["location_id"]},')
    lines.append("}")
    lines.append("")
    lines.append("ITEMS: dict[str, tuple[int, int]] = {")
    for item in data["items"]:
        lines.append(f'    "{item["name"]}": ({item["item_id"]}, {item["count"]}),')
    lines.append("}")
    lines.append("")
    lines.append("# The skill-450 milestone item name for each primary/secondary profession")
    lines.append("# -- goals.py's Artisan completion rule needs these grouped by category,")
    lines.append("# not the full 84-item list, per professions.yaml's own KNOWN ACCEPTED")
    lines.append("# LIMITATION note (a single character can't realistically max all 9")
    lines.append("# primaries at once).")
    # Matched by (skill_id, threshold) parsed back out of each item's own
    # milestone_key -- not by list position/order, so this stays correct
    # even if a future edit reorders either list independently.
    item_name_by_skill_threshold = {}
    for item in data["items"]:
        milestone_key = item["delivery"]["milestone_key"]
        _prefix, skill_id_str, threshold_str = milestone_key.rsplit("_", 2)
        item_name_by_skill_threshold[(int(skill_id_str), int(threshold_str))] = item["name"]

    for category in ("primary", "secondary"):
        varname = f"{category.upper()}_PROFESSION_MAX_ITEM_NAMES"
        lines.append(f"{varname}: frozenset[str] = frozenset({{")
        for loc in data["locations"]:
            trigger = loc["trigger"]
            if trigger["category"] == category and trigger["threshold"] == 450:
                item_name = item_name_by_skill_threshold[(trigger["skill_id"], trigger["threshold"])]
                lines.append(f'    "{item_name}",')
        lines.append("})")
        lines.append("")
    return "\n".join(lines)


def _emit_python_collections(data: dict) -> str:
    lines = [_GENERATED_HEADER_PY.format(source="content/collections.yaml"), ""]
    lines.append("LOCATIONS: dict[str, int] = {")
    for loc in data["locations"]:
        lines.append(f'    "{loc["name"]}": {loc["location_id"]},')
    lines.append("}")
    lines.append("")
    lines.append("ITEMS: dict[str, tuple[int, int]] = {")
    for item in data["items"]:
        lines.append(f'    "{item["name"]}": ({item["item_id"]}, {item["count"]}),')
    lines.append("}")
    lines.append("")
    return "\n".join(lines)


_GENERATED_HEADER_CPP = (
    "// GENERATED FILE - do not edit by hand.\n"
    "// Regenerate with: python modules/archipelago_wow/tools/generate_content.py {source}\n"
)


def emit_cpp_generic(data: dict) -> str:
    """Generic LOCATIONS/ITEMS header emitter for new, name-keyed content families.

    Not used by any of the 9 existing families as of this task -- every
    existing header uses its own namespace/shape (e.g. Archipelago::Gates'
    ApItemToFlagKeyAndTier, Archipelago::Filler's unordered_set), and those
    symbols are referenced from compiled .cpp sources under src/, so they
    keep their own hand-rolled emitter. Group 1-4's new families register
    `generic=True` in FAMILY_SCHEMAS to opt into this emitter instead.
    """
    family = data["family"]
    lines = [
        "// GENERATED FILE - do not edit by hand.",
        f"// Regenerate with: python modules/archipelago_wow/tools/generate_content.py content/{family}.yaml",
        "#pragma once",
        "",
        "#include <map>",
        "#include <string>",
        "",
    ]
    guard = family.upper()
    lines.append(f"namespace Archipelago{guard}Content {{")
    lines.append("inline const std::map<std::string, uint32_t> LOCATIONS = {")
    for loc in data["locations"]:
        lines.append(f'    {{"{loc["name"]}", {loc["location_id"]}}},')
    lines.append("};")
    lines.append("inline const std::map<std::string, uint32_t> ITEMS = {")
    for item in data["items"]:
        lines.append(f'    {{"{item["name"]}", {item["item_id"]}}},')
    lines.append("};")
    lines.append("}")
    lines.append("")
    return "\n".join(lines)


def emit_cpp(data: dict) -> str:
    family = data["family"]
    schema = FAMILY_SCHEMAS.get(family)
    if schema is not None and schema.generic:
        return emit_cpp_generic(data)
    if family == "quests":
        return _emit_cpp_quests(data)
    if family == "core_loop":
        return _emit_cpp_core_loop(data)
    if family == "gates":
        return _emit_cpp_gates(data)
    if family == "filler":
        return _emit_cpp_filler(data)
    if family == "traps":
        return _emit_cpp_traps(data)
    if family == "rares":
        return _emit_cpp_rares(data)
    if family == "fish":
        return _emit_cpp_fish(data)
    if family == "professions":
        return _emit_cpp_professions(data)
    if family == "collections":
        return _emit_cpp_collections(data)
    raise ValidationError(f"unknown family: {family!r}")


def _emit_cpp_quests(data: dict) -> str:
    lines = [
        _GENERATED_HEADER_CPP.format(source="content/quests.yaml"),
        "#pragma once", "",
        "#include <cstdint>",
        "#include <unordered_map>", "",
        "namespace Archipelago::Content", "{",
    ]
    lines.append("    inline std::unordered_map<uint32_t, int64_t> const QuestIdToLocationId = {")
    for loc in data["locations"]:
        lines.append(f'        {{ {loc["trigger"]["quest_id"]}, {loc["location_id"]} }}, // {loc["name"]}')
    lines.append("    };")
    lines.append("")
    lines.append("    inline std::unordered_map<int64_t, uint32_t> const LocationIdToQuestId = {")
    for loc in data["locations"]:
        lines.append(f'        {{ {loc["location_id"]}, {loc["trigger"]["quest_id"]} }}, // {loc["name"]}')
    lines.append("    };")
    lines.append("")
    lines.append("    inline std::unordered_map<int64_t, uint32_t> const ApItemIdToWowItemEntry = {")
    for item in data["items"]:
        lines.append(f'        {{ {item["item_id"]}, {item["delivery"]["wow_item_entry"]} }}, // "{item["name"]}"')
    lines.append("    };")
    lines.append("}")
    lines.append("")
    return "\n".join(lines)


def _emit_cpp_core_loop(data: dict) -> str:
    constants = data["constants"]
    milestone_locs = sorted(
        (loc for loc in data["locations"] if loc["trigger"]["kind"] == "level_milestone"),
        key=lambda loc: loc["trigger"]["level"],
    )
    clear_locs = [loc for loc in data["locations"] if loc["trigger"]["kind"] == "instance_clear"]

    lines = [
        _GENERATED_HEADER_CPP.format(source="content/core_loop.yaml"),
        "#pragma once", "",
        "#include <cstdint>",
        "#include <string>",
        "#include <unordered_map>",
        "#include <vector>", "",
        "namespace Archipelago::CoreLoop", "{",
    ]
    lines.append("    // AP item ids (all int64_t, matching Archipelago::ReceivedItem::item).")
    for item in data["items"]:
        const_name = _cpp_const_name(item["name"])
        lines.append(f'    inline constexpr int64_t {const_name} = {item["item_id"]};')
    lines.append("")
    for key in ("STARTING_LEVEL_CAP", "LEVEL_CAP_STEP", "SPRINT_GOAL_LEVEL"):
        lines.append(f"    inline constexpr uint32_t {key} = {constants[key]};")
    lines.append("")
    for loc in clear_locs:
        key = loc["trigger"]["instance_key"]
        const_name = "INSTANCE_KEY_" + key.upper()
        lines.append(f'    inline std::string const {const_name} = "{key}";')
    lines.append("")
    lines.append("    // Every item whose delivery is realm_state/unlock_instance, keyed by its")
    lines.append("    // own AP item id -- a generic map so a new instance_clear row's unlock item")
    lines.append("    // needs zero additional C++/Python code to actually unlock anything (found")
    lines.append("    // the hard way in Task 23: the 3 new raid unlock items were added to this")
    lines.append("    // content table but never wired into ArchipelagoPlayerScript.cpp's delivery")
    lines.append("    // dispatch, since that dispatch hardcoded only the original 2 dungeons'")
    lines.append("    // item ids -- receiving those items did nothing at all in real play until")
    lines.append("    // this generic map replaced the hardcoded blocks).")
    lines.append("    inline std::unordered_map<int64_t, std::string> const INSTANCE_UNLOCK_ITEM_TO_KEY = {")
    for item in data["items"]:
        delivery = item["delivery"]
        if delivery["kind"] == "realm_state" and delivery["effect"] == "unlock_instance":
            const_name = "INSTANCE_KEY_" + delivery["instance_key"].upper()
            lines.append(f'        {{ {item["item_id"]}, {const_name} }},')
    lines.append("    };")
    lines.append("")
    lines.append("    inline std::unordered_map<std::string, uint32_t> const INSTANCE_FINAL_BOSS_ENTRY = {")
    for loc in clear_locs:
        const_name = "INSTANCE_KEY_" + loc["trigger"]["instance_key"].upper()
        lines.append(f'        {{ {const_name}, {loc["trigger"]["final_boss_entry"]} }},')
    lines.append("    };")
    lines.append("")
    lines.append("    inline std::unordered_map<uint32_t, int64_t> const LEVEL_LOCATIONS = {")
    for loc in milestone_locs:
        lines.append(f'        {{ {loc["trigger"]["level"]}, {loc["location_id"]} }},')
    lines.append("    };")
    lines.append("")
    lines.append("    inline std::unordered_map<std::string, int64_t> const INSTANCE_CLEAR_LOCATIONS = {")
    for loc in clear_locs:
        const_name = "INSTANCE_KEY_" + loc["trigger"]["instance_key"].upper()
        lines.append(f'        {{ {const_name}, {loc["location_id"]} }},')
    lines.append("    };")
    lines.append("")
    lines.append("    // Task 23: only instances whose YAML row carries a `bosses:` sub-list")
    lines.append("    // appear here -- Ragefire Chasm/Deadmines are absent, not present with a")
    lines.append("    // single-entry vector. Drives all_bosses InstanceClearMode; instances")
    lines.append("    // absent from this map always behave as final_boss_only, regardless of")
    lines.append("    // the operator's InstanceClearMode setting (see ArchipelagoInstanceScript.cpp).")
    lines.append("    inline std::unordered_map<std::string, std::vector<uint32_t>> const INSTANCE_BOSS_ENTRIES = {")
    for loc in clear_locs:
        trigger = loc["trigger"]
        if "bosses" not in trigger:
            continue
        const_name = "INSTANCE_KEY_" + trigger["instance_key"].upper()
        entries = ", ".join(str(b["entry"]) for b in trigger["bosses"])
        lines.append(f'        {{ {const_name}, {{ {entries} }} }},')
    lines.append("    };")
    lines.append("")
    lines.append("    // Task 24 (Completionist mode): every instance_key with an `expansion:`")
    lines.append("    // field on its location row, grouped by that expansion. Not consumed")
    lines.append("    // anywhere in the C++ module as of Task 24 (Completionist's validator/")
    lines.append("    // completion rule are apworld-only, generation-time logic) -- emitted")
    lines.append("    // for parity with the Python side per this task's own Files list.")
    lines.append("    inline std::unordered_map<std::string, std::vector<std::string>> const INSTANCES_BY_EXPANSION = {")
    cpp_expansions: dict[str, list[str]] = {}
    for loc in clear_locs:
        trigger = loc["trigger"]
        if "expansion" in trigger:
            cpp_expansions.setdefault(trigger["expansion"], []).append(trigger["instance_key"])
    for expansion, instance_keys in cpp_expansions.items():
        const_names = ", ".join("INSTANCE_KEY_" + k.upper() for k in instance_keys)
        lines.append(f'        {{ "{expansion}", {{ {const_names} }} }},')
    lines.append("    };")
    lines.append("}")
    lines.append("")
    return "\n".join(lines)


def _emit_cpp_gates(data: dict) -> str:
    lines = [
        _GENERATED_HEADER_CPP.format(source="content/gates.yaml"),
        "#pragma once", "",
        "#include <cstdint>",
        "#include <string>",
        "#include <unordered_map>",
        "#include <utility>", "",
        "namespace Archipelago::Gates", "{",
    ]
    for item in data["items"]:
        const_name = _cpp_const_name(item["name"])
        lines.append(f'    inline constexpr int64_t {const_name} = {item["item_id"]};')
    lines.append("")
    lines.append("    inline std::unordered_map<int64_t, std::pair<std::string, uint32_t>> const ApItemToFlagKeyAndTier = {")
    for item in data["items"]:
        delivery = item["delivery"]
        lines.append(f'        {{ {item["item_id"]}, {{ "{delivery["flag_key"]}", {delivery["tier"]} }} }}, // {item["name"]}')
    lines.append("    };")
    lines.append("}")
    lines.append("")
    return "\n".join(lines)


def _emit_cpp_filler(data: dict) -> str:
    lines = [
        _GENERATED_HEADER_CPP.format(source="content/filler.yaml"),
        "#pragma once", "",
        "#include <cstdint>",
        "#include <unordered_set>", "",
        "namespace Archipelago::Filler", "{",
        "    // Sink locations with no real in-game trigger -- they exist only",
        "    // to keep the AP fill algorithm's location count >= the worst-case",
        "    // (all optional gate families on) item count (see docs/m4-plan.md's",
        "    // Task 11 section). They carry no access rule, so the fill algorithm",
        "    // can and does place progression items on them (Progressive Level Cap",
        "    // included) -- ArchipelagoWorldScript::OnStartup sends every id here as",
        "    // a location check unconditionally on realm startup (see docs/m4-plan.md's",
        "    // Task 17 follow-up fix note) so whatever landed on one is never stranded.",
    ]
    lines.append("    inline std::unordered_set<int64_t> const LocationIds = {")
    for loc in data["locations"]:
        lines.append(f'        {loc["location_id"]}, // {loc["name"]}')
    lines.append("    };")
    lines.append("}")
    lines.append("")
    return "\n".join(lines)


def _emit_cpp_traps(data: dict) -> str:
    lines = [
        _GENERATED_HEADER_CPP.format(source="content/traps.yaml"),
        "#pragma once", "",
        "#include <cstdint>",
        "#include <string>",
        "#include <unordered_map>",
        "#include <utility>", "",
        "namespace Archipelago::Traps", "{",
    ]
    for item in data["items"]:
        const_name = _cpp_const_name(item["name"])
        lines.append(f'    inline constexpr int64_t {const_name} = {item["item_id"]};')
    lines.append("")
    lines.append("    // second = effect slug, third = lethal")
    lines.append("    inline std::unordered_map<int64_t, std::pair<std::string, bool>> const ApItemToEffectAndLethal = {")
    for item in data["items"]:
        delivery = item["delivery"]
        lethal_cpp = "true" if delivery["lethal"] else "false"
        lines.append(f'        {{ {item["item_id"]}, {{ "{delivery["effect"]}", {lethal_cpp} }} }}, // {item["name"]}')
    lines.append("    };")
    lines.append("}")
    lines.append("")
    return "\n".join(lines)


def _emit_cpp_rares(data: dict) -> str:
    lines = [
        _GENERATED_HEADER_CPP.format(source="content/rares.yaml"),
        "#pragma once", "",
        "#include <cstdint>",
        "#include <unordered_map>", "",
        "namespace Archipelago::Rares", "{",
    ]
    lines.append("    // AP item ids (all int64_t, matching Archipelago::ReceivedItem::item).")
    for item in data["items"]:
        const_name = _cpp_const_name(item["name"])
        lines.append(f'    inline constexpr int64_t {const_name} = {item["item_id"]};')
    lines.append("")
    lines.append("    // Every curated rare's real creature entry -> its own location id.")
    lines.append("    // Sent unconditionally on a matching kill, same as every other")
    lines.append("    // location-check table in this module -- a given generation may not")
    lines.append("    // have sampled every one of these 40 into its actual location pool")
    lines.append("    // (see rares.yaml's own header comment on density sampling), but the")
    lines.append("    // AP server silently ignores a location id outside a slot's actual")
    lines.append("    // location table (the same MultiServer.py behavior Task 11's filler")
    lines.append("    // fix already relies on), so sending the full set is safe regardless.")
    lines.append("    inline std::unordered_map<uint32_t, int64_t> const CreatureEntryToLocationId = {")
    for loc in data["locations"]:
        lines.append(f'        {{ {loc["trigger"]["creature_entry"]}, {loc["location_id"]} }}, // {loc["name"]}')
    lines.append("    };")
    lines.append("}")
    lines.append("")
    return "\n".join(lines)


def _emit_cpp_fish(data: dict) -> str:
    lines = [
        _GENERATED_HEADER_CPP.format(source="content/fish.yaml"),
        "#pragma once", "",
        "#include <cstdint>",
        "#include <unordered_map>", "",
        "namespace Archipelago::Fish", "{",
    ]
    lines.append("    // wow_item_entry (the real item a catch produces) -> its own location id.")
    lines.append("    // Consumed by the loot hook (ArchipelagoLootScript.cpp) to detect a catch.")
    lines.append("    inline std::unordered_map<uint32_t, int64_t> const ItemEntryToLocationId = {")
    for loc in data["locations"]:
        lines.append(f'        {{ {loc["trigger"]["item_entry"]}, {loc["location_id"]} }}, // {loc["name"]}')
    lines.append("    };")
    lines.append("")
    lines.append("    // AP item id -> the real wow_item_entry to mail -- mirrors")
    lines.append("    // Archipelago::Content::ApItemIdToWowItemEntry's exact shape (both use the")
    lines.append("    // `mail` delivery kind), kept as this family's own table rather than")
    lines.append("    // merged into the quests-family one so each compiled family stays")
    lines.append("    // self-contained; ArchipelagoPlayerScript.cpp checks this table explicitly")
    lines.append("    // before falling through to the quests-family one.")
    lines.append("    inline std::unordered_map<int64_t, uint32_t> const ApItemIdToWowItemEntry = {")
    for item in data["items"]:
        lines.append(f'        {{ {item["item_id"]}, {item["delivery"]["wow_item_entry"]} }}, // "{item["name"]}"')
    lines.append("    };")
    lines.append("}")
    lines.append("")
    return "\n".join(lines)


def _emit_cpp_professions(data: dict) -> str:
    lines = [
        _GENERATED_HEADER_CPP.format(source="content/professions.yaml"),
        "#pragma once", "",
        "#include <cstdint>",
        "#include <string>",
        "#include <unordered_map>",
        "#include <utility>",
        "#include <vector>", "",
        "namespace Archipelago::Professions", "{",
    ]
    lines.append("    // Every (threshold, location_id) pair for a given skill_id, sorted by")
    lines.append("    // threshold ascending -- the skill-up hook (ArchipelagoProfessionScript.cpp)")
    lines.append("    // scans this per skill_id to find which thresholds a skill-up newly")
    lines.append("    // crossed, mirroring ArchipelagoLevelScript.cpp's own oldLevel..newLevel")
    lines.append("    // range-scan (a single big skill-up, e.g. a trainer visit, can cross")
    lines.append("    // multiple thresholds in one OnPlayerSetSkill call).")
    lines.append("    inline std::unordered_map<uint32_t, std::vector<std::pair<uint32_t, int64_t>>> const ThresholdsBySkillId = {")
    by_skill: dict[int, list[tuple[int, int]]] = {}
    for loc in data["locations"]:
        trigger = loc["trigger"]
        by_skill.setdefault(trigger["skill_id"], []).append((trigger["threshold"], loc["location_id"]))
    for skill_id, pairs in by_skill.items():
        pairs.sort()
        entries = ", ".join(f'{{ {t}, {loc_id} }}' for t, loc_id in pairs)
        lines.append(f'        {{ {skill_id}, {{ {entries} }} }},')
    lines.append("    };")
    lines.append("")
    lines.append("    // AP item id -> the realm-state flag key to set on receipt (this")
    lines.append("    // family's `record_milestone` realm_state effect).")
    lines.append("    inline std::unordered_map<int64_t, std::string> const ApItemIdToMilestoneKey = {")
    for item in data["items"]:
        lines.append(f'        {{ {item["item_id"]}, "{item["delivery"]["milestone_key"]}" }}, // "{item["name"]}"')
    lines.append("    };")
    lines.append("}")
    lines.append("")
    return "\n".join(lines)


def _emit_cpp_collections(data: dict) -> str:
    lines = [
        _GENERATED_HEADER_CPP.format(source="content/collections.yaml"),
        "#pragma once", "",
        "#include <cstdint>",
        "#include <unordered_map>", "",
        "namespace Archipelago::Collections", "{",
    ]
    lines.append("    // The real spell a mount/pet item teaches -> its own location id.")
    lines.append("    // Consumed by the learn-spell hook (ArchipelagoCollectionScript.cpp).")
    lines.append("    inline std::unordered_map<uint32_t, int64_t> const SpellIdToLocationId = {")
    for loc in data["locations"]:
        lines.append(f'        {{ {loc["trigger"]["spell_id"]}, {loc["location_id"]} }}, // {loc["name"]}')
    lines.append("    };")
    lines.append("")
    lines.append("    // AP item id -> the real wow_item_entry to mail (this family's own copy")
    lines.append("    // of the mail-delivery table, same pattern as Archipelago::Fish's own")
    lines.append("    // ApItemIdToWowItemEntry -- checked before falling through to the")
    lines.append("    // quests-family table).")
    lines.append("    inline std::unordered_map<int64_t, uint32_t> const ApItemIdToWowItemEntry = {")
    for item in data["items"]:
        lines.append(f'        {{ {item["item_id"]}, {item["delivery"]["wow_item_entry"]} }}, // "{item["name"]}"')
    lines.append("    };")
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
    args.py_out.write_text(emit_python(data), encoding="utf-8", newline="\n")
    args.cpp_out.write_text(emit_cpp(data), encoding="utf-8", newline="\n")
    print(f"wrote {args.py_out}")
    print(f"wrote {args.cpp_out}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
