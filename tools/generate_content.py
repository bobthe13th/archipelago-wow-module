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
    _validate_quest_reward_rows(data["locations"], yaml_path)
    _validate_vendor_purchase_rows(data["locations"], yaml_path)
    _validate_achievement_complete_rows(data["locations"], yaml_path)
    _validate_learn_spell_rows(data["locations"], yaml_path)
    _validate_trigger_lookup_uniqueness(data["family"], data["locations"], data["items"], yaml_path)
    _validate_tags_rows(data["family"], data["locations"], data["items"], yaml_path)
    _validate_level_milestone_tracks(data["family"], data["locations"], yaml_path)
    data["locations"], data["items"] = _dedupe_vendor_trigger_collisions(
        data["family"], data["locations"], data["items"], yaml_path
    )

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


def _validate_quest_reward_rows(locations: list, yaml_path: pathlib.Path) -> None:
    for loc in locations:
        trigger = loc["trigger"]
        if trigger["kind"] != "quest_reward":
            continue
        missing_keys = []
        if "quest_id" not in trigger:
            missing_keys.append("quest_id")
        if "min_level" not in trigger:
            missing_keys.append("min_level")
        if missing_keys:
            raise ValidationError(
                f"{yaml_path}: location {loc['name']!r} has quest_reward trigger "
                f"but is missing required key(s): {missing_keys}"
            )


def _validate_achievement_complete_rows(locations: list, yaml_path: pathlib.Path) -> None:
    for loc in locations:
        trigger = loc["trigger"]
        if trigger["kind"] != "achievement_complete":
            continue
        if "achievement_id" not in trigger:
            raise ValidationError(
                f"{yaml_path}: location {loc['name']!r} has achievement_complete trigger "
                f"but is missing required key 'achievement_id'"
            )


def _validate_vendor_purchase_rows(locations: list, yaml_path: pathlib.Path) -> None:
    for loc in locations:
        trigger = loc["trigger"]
        if trigger["kind"] != "vendor_purchase":
            continue
        missing_keys = []
        if "npc_entry" not in trigger:
            missing_keys.append("npc_entry")
        if "item_slot" not in trigger:
            missing_keys.append("item_slot")
        if missing_keys:
            raise ValidationError(
                f"{yaml_path}: location {loc['name']!r} has vendor_purchase trigger "
                f"but is missing required key(s): {missing_keys}"
            )


def _validate_learn_spell_rows(locations: list, yaml_path: pathlib.Path) -> None:
    for loc in locations:
        trigger = loc["trigger"]
        if trigger["kind"] != "learn_spell":
            continue
        if "spell_id" not in trigger:
            raise ValidationError(
                f"{yaml_path}: location {loc['name']!r} has learn_spell trigger "
                f"but is missing required key: spell_id"
            )


def _validate_trigger_lookup_uniqueness(
    family: str, locations: list, items: list, yaml_path: pathlib.Path
) -> None:
    """Validate that all locations in an export_triggers family would produce
    unique keys in the emitted trigger-lookup map. Raises ValidationError if
    any collision would occur, preventing silent data loss from map initialization."""
    schema = FAMILY_SCHEMAS.get(family)
    if schema is None or not schema.export_triggers:
        return
    if not locations:
        return

    kind = locations[0]["trigger"]["kind"]
    seen_keys: dict = {}

    if kind == "quest_reward":
        for loc in locations:
            key = loc["trigger"]["quest_id"]
            if key in seen_keys:
                raise ValidationError(
                    f"{yaml_path}: locations {seen_keys[key]!r} and {loc['name']!r} "
                    f"both have quest_id={key}, which would produce a collision in "
                    f"QUEST_ID_TO_LOCATION_ID trigger-lookup map"
                )
            seen_keys[key] = loc["name"]

    elif kind == "vendor_purchase":
        if len(items) != len(locations):
            raise ValidationError(
                f"{yaml_path}: for export_triggers family {family!r}, "
                f"locations and items must have equal length for parallel alignment "
                f"(got {len(locations)} locations, {len(items)} items)"
            )
        # Detect collisions but warn instead of raising, since some are legitimate edge cases.
        # WoW's npc_vendor real primary key is (entry, item, ExtendedCost), but our simplified
        # C++ map uses only (npc_entry, wow_item_entry). When the same vendor sells the same
        # item at different ExtendedCost values (e.g., Commendations at different currency costs,
        # honor requirements, arena points), our map can have collisions. This is an accepted
        # edge case: std::map keeps the last value, and Task 8/9 can still reverse-lookup
        # the representative location. Report collisions clearly for visibility.
        colliding_keys = {}
        for idx, loc in enumerate(locations):
            npc_entry = loc["trigger"]["npc_entry"]
            wow_item_entry = items[idx]["delivery"]["wow_item_entry"]
            key = (npc_entry, wow_item_entry)
            if key in seen_keys:
                if key not in colliding_keys:
                    colliding_keys[key] = [seen_keys[key]]
                colliding_keys[key].append(loc["name"])
            seen_keys[key] = loc["name"]

        if colliding_keys:
            print(f"\nWARNING: {yaml_path}: {len(colliding_keys)} trigger-lookup collisions in vendor_stock (same vendor/item, likely different ExtendedCost):")
            for (npc_entry, wow_item_entry), location_names in sorted(colliding_keys.items()):
                print(f"    (npc_entry={npc_entry}, wow_item_entry={wow_item_entry}):")
                for name in location_names:
                    print(f"      - {name}")
            print(f"   -> only the first-encountered location per key survives into VENDOR_SLOT_TO_LOCATION_ID; "
                  f"the rest are excluded from the emitted pool entirely (see _dedupe_vendor_trigger_collisions).\n")

    elif kind == "learn_spell":
        for loc in locations:
            key = loc["trigger"]["spell_id"]
            if key in seen_keys:
                raise ValidationError(
                    f"{yaml_path}: locations {seen_keys[key]!r} and {loc['name']!r} "
                    f"both have spell_id={key}, which would produce a collision in "
                    f"SPELL_ID_TO_LOCATION_ID trigger-lookup map"
                )
            seen_keys[key] = loc["name"]


def _validate_tags_rows(family: str, locations: list, items: list, yaml_path: pathlib.Path) -> None:
    """Every row in an export_tags family must carry a non-empty `tags`
    block, and every dimension inside it must resolve to at least one value
    -- the "never zero tags" invariant (spec §1: e.g. quest_reward_type_pools
    always has at least `standard` as a fallback). A row that silently has
    zero tags in some dimension would be permanently unreachable via any
    player selection for that dimension, which is a content-authoring bug,
    not a valid state.

    M4.9.3.1: extended to validate ITEM-level tags for items-only families
    (no locations of their own, e.g. filler_reward_items's per-item
    `category` tag) -- every export_tags family so far (quest_rewards,
    vendor_stock, recipes, trainer_spells) has real locations, so `rows`
    below resolves to `locations` for all of them, unchanged behavior.
    Only a family with an empty `locations` list (filler_reward_items) hits
    the new items-based branch."""
    schema = FAMILY_SCHEMAS.get(family)
    if schema is None or not schema.export_tags:
        return
    rows = locations if locations else items
    row_kind = "location" if locations else "item"
    for row in rows:
        tags = row.get("tags")
        if not tags:
            raise ValidationError(
                f"{yaml_path}: {row_kind} {row['name']!r} is missing a 'tags' block, "
                f"required because family {family!r} has export_tags=True"
            )
        for dimension, values in tags.items():
            if not values:
                raise ValidationError(
                    f"{yaml_path}: {row_kind} {row['name']!r} has an empty tag list for "
                    f"dimension {dimension!r} -- every dimension must resolve to at least "
                    f"one tag value"
                )


_VALID_LEVEL_MILESTONE_TRACKS = {"standard", "death_knight"}


def _validate_level_milestone_tracks(family: str, locations: list, yaml_path: pathlib.Path) -> None:
    """M4.9: every level_milestone location must declare which of the two
    per-class tracks it belongs to (standard: every class except Death
    Knight, levels 1-80; death_knight: Death Knight only, levels 55-80,
    matching the class's real Player::Create starting level). Both the C++
    level-up hook (ArchipelagoLevelScript.cpp, Task 4) and the apworld
    (locations.py's create_core_loop_locations, Task 3) need this to pick
    the right one of the two content tracks -- a location silently missing
    it (or naming an unrecognized track) would be a content-authoring bug,
    not a valid state. core_loop-specific (not gated by a FamilySchema
    opt-in flag like export_tags/export_triggers) since no other family has
    a level_milestone trigger kind at all."""
    if family != "core_loop":
        return
    for loc in locations:
        trigger = loc["trigger"]
        if trigger["kind"] != "level_milestone":
            continue
        track = trigger.get("track")
        if track not in _VALID_LEVEL_MILESTONE_TRACKS:
            raise ValidationError(
                f"{yaml_path}: location {loc['name']!r} has level_milestone trigger "
                f"with track={track!r} -- must be one of {sorted(_VALID_LEVEL_MILESTONE_TRACKS)}"
            )


def _dedupe_vendor_trigger_collisions(
    family: str, locations: list, items: list, yaml_path: pathlib.Path
) -> tuple[list, list]:
    """Finding I4 (M4.7 final review): when multiple vendor_stock locations
    share the same (npc_entry, wow_item_entry) trigger-lookup key,
    _validate_trigger_lookup_uniqueness above only WARNS -- it does not stop
    the colliding rows from being emitted into LOCATIONS/ITEMS. That used to
    leave 12 of 16 colliding locations (4 collision groups, one survivor
    each) sitting in the apworld's placeable location pool with NO access
    rule, while their C++ trigger silently disappeared: std::map's
    initializer-list construction keeps only the FIRST insertion for a
    duplicate key (see _emit_cpp_trigger_lookup's VENDOR_SLOT_TO_LOCATION_ID)
    -- not the last, despite an earlier, now-corrected comment here claiming
    otherwise. A seed that places a required progression item on one of
    those 12 unreachable locations was unwinnable. Excludes every duplicate
    beyond the first-encountered one (locations/items are parallel-aligned
    by index) at the SOURCE, so they never enter LOCATIONS/ITEMS for either
    the Python data module or the C++ header -- not just the trigger-lookup
    map. Only applies to vendor_purchase-kind export_triggers families
    (quest_reward collisions are a hard ValidationError above, never reach
    here); a no-op for every other family."""
    schema = FAMILY_SCHEMAS.get(family)
    if schema is None or not schema.export_triggers or not locations:
        return locations, items
    if locations[0]["trigger"]["kind"] != "vendor_purchase":
        return locations, items
    if len(items) != len(locations):
        return locations, items  # already reported as a hard error above

    seen_keys: dict[tuple[int, int], str] = {}
    kept_locations: list = []
    kept_items: list = []
    dropped_names: list[str] = []
    for loc, item in zip(locations, items):
        npc_entry = loc["trigger"]["npc_entry"]
        wow_item_entry = item["delivery"]["wow_item_entry"]
        key = (npc_entry, wow_item_entry)
        if key in seen_keys:
            dropped_names.append(loc["name"])
            continue
        seen_keys[key] = loc["name"]
        kept_locations.append(loc)
        kept_items.append(item)

    if dropped_names:
        print(f"\nNOTE: {yaml_path}: excluded {len(dropped_names)} duplicate-trigger-key location(s) "
              f"from the placeable pool -- each shares its (npc_entry, wow_item_entry) key with an "
              f"earlier location that already won the C++ VENDOR_SLOT_TO_LOCATION_ID slot, so these "
              f"would otherwise be unreachable/uncheckable in-game (Finding I4):")
        for name in dropped_names:
            print(f"    - {name}")
        print()

    return kept_locations, kept_items


@dataclass
class FamilySchema:
    valid_trigger_kinds: set[str]
    valid_delivery_kinds: set[str]
    generic: bool = False  # True only for new families (Group 1-4) that use emit_*_generic;
                            # every existing family below keeps its own hand-rolled emitter.
    export_triggers: bool = False  # True only for families whose generic Python module needs a
                                    # TRIGGERS: dict[str, dict] export (the raw `trigger` sub-dict
                                    # per location name, verbatim) alongside LOCATIONS/ITEMS -- e.g.
                                    # quest_rewards' rules.py rule reads TRIGGERS[name]["min_level"].
                                    # Opt-in per family, not automatically added to every generic
                                    # family, since most generic families have no rule that needs it.
    export_tags: bool = False  # True only for families whose generic Python module needs a
                                # TAGS: dict[str, dict[str, frozenset[str]]] export (M4.8) --
                                # opt-in per family, same shape as export_triggers above. C++ never
                                # needs this (spec §4) -- it's Python-only, generation-time bookkeeping.
    export_item_delivery: bool = False


FAMILY_SCHEMAS: dict[str, FamilySchema] = {
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
    "quest_rewards": FamilySchema(
        valid_trigger_kinds={"quest_reward"}, valid_delivery_kinds={"mail"},
        generic=True, export_triggers=True, export_tags=True,
    ),
    "vendor_stock": FamilySchema(
        valid_trigger_kinds={"vendor_purchase"}, valid_delivery_kinds={"mail"},
        generic=True, export_triggers=True, export_tags=True,
    ),
    "recipes": FamilySchema(
        valid_trigger_kinds={"learn_spell"}, valid_delivery_kinds={"mail"},
        generic=True, export_triggers=True, export_tags=True, export_item_delivery=True,
    ),
    "trainer_spells": FamilySchema(
        valid_trigger_kinds={"learn_spell"}, valid_delivery_kinds={"mail"},
        generic=True, export_triggers=True, export_tags=True, export_item_delivery=True,
    ),
    "filler_reward_items": FamilySchema(
        valid_trigger_kinds=set(), valid_delivery_kinds={"mail"},
        generic=True, export_tags=True, export_item_delivery=True,
    ),
    "filler_reward_effects": FamilySchema(
        valid_trigger_kinds=set(), valid_delivery_kinds={"filler_effect"},
    ),
    "achievements": FamilySchema(valid_trigger_kinds={"achievement_complete"}, valid_delivery_kinds={"realm_state"}),
}

_REALM_STATE_EFFECTS = {
    "raise_level_cap",
    "unlock_instance",
    "unlock_dark_portal",
    "unlock_northrend_passage",
    "grant_key",
    "record_milestone",
    "record_achievement",
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


def _string_literal(s: str) -> str:
    """A double-quoted Python OR C++ string literal for `s`, with embedded
    backslashes and double quotes escaped -- both languages use identical
    backslash-escaping rules for these two characters, so one helper covers
    emit_python_generic and emit_cpp_generic. Generated names come from raw
    DB text (quest/vendor/recipe/spell names), which can and does contain
    literal double quotes -- confirmed by Task 5's real extraction (9 of
    3735 quest titles). Without this, naive f'"{name}"' interpolation
    produces invalid syntax in both languages."""
    escaped = s.replace("\\", "\\\\").replace('"', '\\"')
    return f'"{escaped}"'


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
        lines.append(f'    {_string_literal(loc["name"])}: {loc["location_id"]},')
    lines.append("}")
    lines.append("")
    lines.append("ITEMS: dict[str, tuple[int, int]] = {")
    for item in data["items"]:
        count = item.get("count", 1)
        lines.append(f'    {_string_literal(item["name"])}: ({item["item_id"]}, {count}),')
    lines.append("}")
    lines.append("")

    lines.append("ALWAYS_PRESENT: frozenset[str] = frozenset({")
    for loc in data["locations"]:
        if loc.get("always_present"):
            lines.append(f'    {_string_literal(loc["name"])},')
    lines.append("})")
    lines.append("")

    schema = FAMILY_SCHEMAS.get(family)
    if schema is not None and schema.export_triggers:
        lines.append("TRIGGERS: dict[str, dict] = {")
        for loc in data["locations"]:
            # Keys here are the same location names as LOCATIONS above (can
            # contain embedded double quotes, e.g. the "Hogger" quest) --
            # reuse _string_literal rather than a naive f'"{name}"', same
            # fix as LOCATIONS/ITEMS above. The value is the raw `trigger`
            # sub-dict verbatim; repr() on a plain dict of str/int/None
            # values already produces a valid Python dict literal with
            # correct string escaping, so no separate helper is needed for
            # the trigger's own inner values.
            lines.append(f'    {_string_literal(loc["name"])}: {loc["trigger"]!r},')
        lines.append("}")
        lines.append("")

    if schema is not None and schema.export_tags:
        lines.append("TAGS: dict[str, dict[str, frozenset[str]]] = {")
        # M4.9.3.1: item-keyed for a family with no locations of its own
        # (e.g. filler_reward_items); every EXISTING export_tags family has
        # real locations, so this is unchanged behavior for all of them.
        tag_rows = data["locations"] if data["locations"] else data["items"]
        for row in tag_rows:
            dims = row.get("tags", {})
            dim_parts = [
                f'{_string_literal(dim)}: frozenset({{{", ".join(_string_literal(v) for v in values)}}})'
                for dim, values in dims.items()
            ]
            lines.append(f'    {_string_literal(row["name"])}: {{{", ".join(dim_parts)}}},')
        lines.append("}")
        lines.append("")

    return "\n".join(lines)


def emit_python(data: dict) -> str:
    family = data["family"]
    schema = FAMILY_SCHEMAS.get(family)
    if schema is not None and schema.generic:
        return emit_python_generic(data)
    if family == "core_loop":
        return _emit_python_core_loop(data)
    if family == "gates":
        return _emit_python_gates(data)
    if family == "filler":
        return _emit_python_filler(data)
    if family == "traps":
        return _emit_python_traps(data)
    if family == "filler_reward_effects":
        return _emit_python_filler_reward_effects(data)
    if family == "rares":
        return _emit_python_rares(data)
    if family == "fish":
        return _emit_python_fish(data)
    if family == "professions":
        return _emit_python_professions(data)
    if family == "collections":
        return _emit_python_collections(data)
    if family == "achievements":
        return _emit_python_achievements(data)
    raise ValidationError(f"unknown family: {family!r}")


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
    milestone_locs = [loc for loc in data["locations"] if loc["trigger"]["kind"] == "level_milestone"]
    milestone_locs.sort(key=lambda loc: loc["trigger"]["level"])
    tracks: dict[str, list] = {}
    for loc in milestone_locs:
        tracks.setdefault(loc["trigger"]["track"], []).append(loc)
    lines.append("LEVEL_LOCATIONS_BY_TRACK: dict[str, dict[int, int]] = {")
    for track_name, locs in tracks.items():
        entries = ", ".join(f'{loc["trigger"]["level"]}: {loc["location_id"]}' for loc in locs)
        lines.append(f'    "{track_name}": {{{entries}}},')
    lines.append("}")
    lines.append("")
    lines.append("# M4.9: name for each (track, level) pair, generated directly from each")
    lines.append("# location row's own `name` field -- same anti-hardcoded-ternary discipline")
    lines.append("# as INSTANCE_CLEAR_LOCATION_NAMES below (Task 23 bugfix), so locations.py/")
    lines.append("# rules.py never need to hand-format a track-specific name suffix themselves.")
    lines.append("LEVEL_LOCATION_NAMES_BY_TRACK: dict[str, dict[int, str]] = {")
    for track_name, locs in tracks.items():
        entries = ", ".join(f'{loc["trigger"]["level"]}: "{loc["name"]}"' for loc in locs)
        lines.append(f'    "{track_name}": {{{entries}}},')
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


def _emit_python_filler_reward_effects(data: dict) -> str:
    lines = [_GENERATED_HEADER_PY.format(source="content/filler_reward_effects.yaml"), ""]
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


def _emit_python_achievements(data: dict) -> str:
    constants = data["constants"]
    lines = [_GENERATED_HEADER_PY.format(source="content/achievements.yaml"), ""]
    lines.append(f'WORLD_EXPLORER_ACHIEVEMENT_ID = {constants["WORLD_EXPLORER_ACHIEVEMENT_ID"]}')
    lines.append("")
    lines.append("LOCATIONS: dict[str, int] = {")
    for loc in data["locations"]:
        lines.append(f'    {_string_literal(loc["name"])}: {loc["location_id"]},')
    lines.append("}")
    lines.append("")
    lines.append("ITEMS: dict[str, tuple[int, int]] = {")
    for item in data["items"]:
        lines.append(f'    {_string_literal(item["name"])}: ({item["item_id"]}, {item.get("count", 1)}),')
    lines.append("}")
    lines.append("")

    # Locations and items are parallel-aligned by list index (one item per
    # location, same achievement_id, same order) -- extract_achievements.py's
    # own invariant.
    item_name_by_index = [item["name"] for item in data["items"]]

    world_explorer_location_name = None
    world_explorer_item_name = None
    by_subset: dict[str, list[str]] = {}
    extremely_hard_item_names: list[str] = []
    for idx, loc in enumerate(data["locations"]):
        trigger = loc["trigger"]
        item_name = item_name_by_index[idx]
        subset = trigger.get("subset")
        if subset:
            by_subset.setdefault(subset, []).append(item_name)
        if trigger.get("extremely_hard"):
            extremely_hard_item_names.append(item_name)
        if trigger["achievement_id"] == constants["WORLD_EXPLORER_ACHIEVEMENT_ID"]:
            world_explorer_location_name = loc["name"]
            world_explorer_item_name = item_name

    if world_explorer_location_name is None:
        raise ValidationError(
            "content/achievements.yaml: no location's trigger.achievement_id matches "
            "constants.WORLD_EXPLORER_ACHIEVEMENT_ID -- extraction must have dropped "
            "achievement id 46 (e.g. via the counter-flag/Feats-of-Strength exclusion, "
            "which must never apply to id 46 itself)"
        )

    lines.append("ACHIEVEMENTS_BY_SUBSET: dict[str, frozenset[str]] = {")
    for subset, item_names in by_subset.items():
        names = ", ".join(_string_literal(n) for n in item_names)
        lines.append(f'    {_string_literal(subset)}: frozenset({{{names}}}),')
    lines.append("}")
    lines.append("")
    lines.append("EXTREMELY_HARD_ITEM_NAMES: frozenset[str] = frozenset({")
    for name in extremely_hard_item_names:
        lines.append(f'    {_string_literal(name)},')
    lines.append("})")
    lines.append("")
    lines.append(f"WORLD_EXPLORER_LOCATION_NAME = {_string_literal(world_explorer_location_name)}")
    lines.append(f"WORLD_EXPLORER_ITEM_NAME = {_string_literal(world_explorer_item_name)}")
    lines.append("")
    return "\n".join(lines)


_GENERATED_HEADER_CPP = (
    "// GENERATED FILE - do not edit by hand.\n"
    "// Regenerate with: python modules/archipelago_wow/tools/generate_content.py {source}\n"
)


def _emit_cpp_large_string_map(var_name: str, rows: list[tuple[str, int]]) -> list[str]:
    """Emits a `std::map<std::string, uint32_t>` global WITHOUT a single giant
    aggregate initializer (M4.7.1 finding #1). MSVC materializes a
    non-trivial (std::string-keyed) initializer_list's backing array on the
    STACK inside the global's dynamic initializer -- at tens of thousands of
    rows (Vendor Inventories' ~37,739-row LOCATIONS/ITEMS) that overflows the
    default 1 MiB thread stack, crashing worldserver.exe in __chkstk before
    main() ever runs, on every build, regardless of seed options. Fix: stage
    the raw (char const*, uint32_t) pairs -- a trivial type, so MSVC places
    the whole array directly in .rdata at zero stack cost -- then build the
    real map at runtime via a small loop whose stack usage is O(1) per
    iteration, not O(row count) for the whole table at once.

    LOCATIONS/ITEMS (std::string-keyed) need this treatment for certain --
    std::string isn't trivially constructible, so a giant initializer_list
    of them can never be placed in static storage. The trigger-lookup maps
    _emit_cpp_trigger_lookup emits separately (QUEST_ID_TO_LOCATION_ID,
    VENDOR_SLOT_TO_LOCATION_ID) use fully trivial key/value types, and this
    module originally assumed that made them safe from the same failure --
    a real rebuild-and-launch proved that assumption wrong for
    VENDOR_SLOT_TO_LOCATION_ID (see _emit_cpp_trigger_lookup_vendor_purchase's
    own docstring). Both trigger-lookup maps now use this same raw-array-
    plus-builder pattern too, not because their types turned out to be
    non-trivial, but because "this type is trivial, therefore it's safe"
    was an unverified theory that already failed once and wasn't worth
    re-trusting for the smaller of the two maps either.
    """
    if not rows:
        # An empty `constexpr ... X_RAW[] = {};` is illegal C++ (zero-size
        # array) -- and an empty map is never at stack-overflow risk anyway,
        # so just emit the simple, original form for this case.
        return [f"inline const std::map<std::string, uint32_t> {var_name} = {{}};"]

    lines = [f"inline constexpr std::pair<char const*, uint32_t> {var_name}_RAW[] = {{"]
    for name, id_ in rows:
        lines.append(f'    {{{_string_literal(name)}, {id_}}},')
    lines.append("};")
    lines.append(f"inline std::map<std::string, uint32_t> Build{var_name}()")
    lines.append("{")
    lines.append("    std::map<std::string, uint32_t> result;")
    lines.append(f"    for (auto const& row : {var_name}_RAW)")
    lines.append("        result.emplace(row.first, row.second);")
    lines.append("    return result;")
    lines.append("}")
    lines.append(f"inline const std::map<std::string, uint32_t> {var_name} = Build{var_name}();")
    return lines


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
        "#include <cstdint>",
        "#include <map>",
        "#include <string>",
        "#include <unordered_map>",
        "#include <utility>",
        "",
    ]
    guard = family.upper()
    lines.append(f"namespace Archipelago{guard}Content {{")
    lines.extend(_emit_cpp_large_string_map(
        "LOCATIONS", [(loc["name"], loc["location_id"]) for loc in data["locations"]]
    ))
    lines.extend(_emit_cpp_large_string_map(
        "ITEMS", [(item["name"], item["item_id"]) for item in data["items"]]
    ))
    schema = FAMILY_SCHEMAS.get(family)
    if schema is not None and schema.export_triggers:
        lines.extend(_emit_cpp_trigger_lookup(data))
    if schema is not None and schema.export_item_delivery:
        lines.extend(_emit_cpp_item_delivery_lookup(data["items"]))
    lines.append("}")
    lines.append("")
    return "\n".join(lines)


def _emit_cpp_trigger_lookup_quest_reward(locations: list) -> list[str]:
    """QUEST_ID_TO_LOCATION_ID via the same raw-constexpr-array-plus-runtime-
    builder pattern as _emit_cpp_large_string_map (M4.7.1 Task 3 -- empirical
    correction: this map's key/value types are fully trivial, and the
    original M4.7.1.1 plan argued on that basis it could never overflow the
    stack the way LOCATIONS/ITEMS did. A real rebuild-and-launch proved that
    argument wrong for VENDOR_SLOT_TO_LOCATION_ID's larger sibling below, so
    this one gets the same treatment rather than re-trusting the same
    falsified reasoning a second time -- it's small enough (~3,735 rows for
    quest_rewards) to likely never have been at real risk, but "likely" was
    exactly the confidence level that was already wrong once."""
    lines = ["inline constexpr std::pair<uint32_t, int64_t> QUEST_ID_TO_LOCATION_ID_RAW[] = {"]
    for loc in locations:
        lines.append(f'    {{ {loc["trigger"]["quest_id"]}, {loc["location_id"]} }}, // {_string_literal(loc["name"])}')
    lines.append("};")
    lines.append("inline std::unordered_map<uint32_t, int64_t> BuildQUEST_ID_TO_LOCATION_ID()")
    lines.append("{")
    lines.append("    std::unordered_map<uint32_t, int64_t> result;")
    lines.append("    for (auto const& row : QUEST_ID_TO_LOCATION_ID_RAW)")
    lines.append("        result.emplace(row.first, row.second);")
    lines.append("    return result;")
    lines.append("}")
    lines.append(
        "inline const std::unordered_map<uint32_t, int64_t> QUEST_ID_TO_LOCATION_ID = "
        "BuildQUEST_ID_TO_LOCATION_ID();"
    )
    return lines


def _emit_cpp_trigger_lookup_vendor_purchase(locations: list, items: list) -> list[str]:
    """VENDOR_SLOT_TO_LOCATION_ID via the same pattern -- this is the map
    that actually crashed worldserver.exe a second time after Task 1's fix
    (M4.7.1 Task 3), proving the "trivial types are always safe" theory
    wrong for this compiler/row-count in practice."""
    lines = [
        "inline constexpr std::pair<std::pair<uint32_t, uint32_t>, int64_t> VENDOR_SLOT_TO_LOCATION_ID_RAW[] = {"
    ]
    for idx, loc in enumerate(locations):
        if idx >= len(items):
            raise ValidationError(
                f"location index {idx} exceeds items list length {len(items)} -- "
                f"locations and items must be parallel aligned for trigger-lookup emission"
            )
        trigger = loc["trigger"]
        wow_item_entry = items[idx]["delivery"]["wow_item_entry"]
        lines.append(
            f'    {{ {{ {trigger["npc_entry"]}, {wow_item_entry} }}, {loc["location_id"]} }}, '
            f'// {_string_literal(loc["name"])}'
        )
    lines.append("};")
    lines.append("inline std::map<std::pair<uint32_t, uint32_t>, int64_t> BuildVENDOR_SLOT_TO_LOCATION_ID()")
    lines.append("{")
    lines.append("    std::map<std::pair<uint32_t, uint32_t>, int64_t> result;")
    lines.append("    for (auto const& row : VENDOR_SLOT_TO_LOCATION_ID_RAW)")
    lines.append("        result.emplace(row.first, row.second);")
    lines.append("    return result;")
    lines.append("}")
    lines.append(
        "inline const std::map<std::pair<uint32_t, uint32_t>, int64_t> VENDOR_SLOT_TO_LOCATION_ID = "
        "BuildVENDOR_SLOT_TO_LOCATION_ID();"
    )
    return lines


def _emit_cpp_trigger_lookup_learn_spell(locations: list) -> list[str]:
    """SPELL_ID_TO_LOCATION_ID via the same raw-constexpr-array-plus-
    runtime-builder pattern as _emit_cpp_trigger_lookup_quest_reward (M4.9)
    -- both new families (recipes: 1,912 rows, trainer_spells: 1,966 rows)
    are in the same order of magnitude as quest_rewards' own
    QUEST_ID_TO_LOCATION_ID, well past the point M4.7.1's real
    stack-overflow lesson (see _emit_cpp_large_string_map's docstring)
    says a bare aggregate initializer is safe to trust."""
    lines = ["inline constexpr std::pair<uint32_t, int64_t> SPELL_ID_TO_LOCATION_ID_RAW[] = {"]
    for loc in locations:
        lines.append(f'    {{ {loc["trigger"]["spell_id"]}, {loc["location_id"]} }}, // {_string_literal(loc["name"])}')
    lines.append("};")
    lines.append("inline std::unordered_map<uint32_t, int64_t> BuildSPELL_ID_TO_LOCATION_ID()")
    lines.append("{")
    lines.append("    std::unordered_map<uint32_t, int64_t> result;")
    lines.append("    for (auto const& row : SPELL_ID_TO_LOCATION_ID_RAW)")
    lines.append("        result.emplace(row.first, row.second);")
    lines.append("    return result;")
    lines.append("}")
    lines.append(
        "inline const std::unordered_map<uint32_t, int64_t> SPELL_ID_TO_LOCATION_ID = "
        "BuildSPELL_ID_TO_LOCATION_ID();"
    )
    return lines


def _emit_cpp_trigger_lookup(data: dict) -> list[str]:
    """Typed trigger-lookup map for a generic family's C++ header, gated on
    FamilySchema.export_triggers. Unlike emit_python_generic's TRIGGERS (a
    dynamic dict[str, dict] -- fine in Python), C++ needs a real key type per
    trigger kind, so this dispatches on the family's own trigger.kind rather
    than trying to emit one generic dict-of-dicts shape. New export_triggers
    families register a new branch here when they need one -- quest_reward,
    vendor_purchase, and learn_spell (added M4.9 for recipes/trainer_spells)
    are the kinds that exist as of M4.9.2. A new branch's map MUST use the
    same raw-constexpr-array-plus-runtime-builder pattern as
    `_emit_cpp_trigger_lookup_quest_reward`/`_emit_cpp_trigger_lookup_vendor_purchase`/
    `_emit_cpp_trigger_lookup_learn_spell` below, never a bare aggregate initializer -- that exact mistake is what
    caused a real production stack-overflow crash (M4.7.1 finding #1), twice,
    before this project learned that lesson."""
    locations = data["locations"]
    if not locations:
        return []
    kind = locations[0]["trigger"]["kind"]

    if kind == "quest_reward":
        return _emit_cpp_trigger_lookup_quest_reward(locations)

    if kind == "vendor_purchase":
        return _emit_cpp_trigger_lookup_vendor_purchase(locations, data.get("items", []))

    if kind == "learn_spell":
        return _emit_cpp_trigger_lookup_learn_spell(locations)

    raise ValidationError(
        f"family {data['family']!r} has export_triggers=True but trigger.kind "
        f"{kind!r} has no C++ trigger-lookup emission registered in "
        f"_emit_cpp_trigger_lookup -- add a branch for it"
    )


def _emit_cpp_item_delivery_lookup(items: list) -> list[str]:
    """AP item id -> real wow_item_entry to mail, for a generic family's
    `mail`-delivery items -- the same map shape/name Archipelago::Fish's/
    Archipelago::Collections' own hand-rolled emitters already produce
    (ApItemIdToWowItemEntry), but reusable via FamilySchema.
    export_item_delivery for any generic family instead of requiring its
    own bespoke emitter just for this one map. Uses the same
    raw-constexpr-array-plus-runtime-builder pattern every other
    large-row-count C++ export in this file uses (recipes: 1,912 items,
    trainer_spells: 1,966 items -- well past the M4.7.1 stack-overflow
    threshold a bare aggregate initializer proved unsafe at, twice, before
    this project learned that lesson -- see _emit_cpp_trigger_lookup's own
    docstring)."""
    lines = ["inline constexpr std::pair<int64_t, uint32_t> AP_ITEM_ID_TO_WOW_ITEM_ENTRY_RAW[] = {"]
    for item in items:
        lines.append(f'    {{ {item["item_id"]}, {item["delivery"]["wow_item_entry"]} }}, // {_string_literal(item["name"])}')
    lines.append("};")
    lines.append("inline std::unordered_map<int64_t, uint32_t> BuildApItemIdToWowItemEntry()")
    lines.append("{")
    lines.append("    std::unordered_map<int64_t, uint32_t> result;")
    lines.append("    for (auto const& row : AP_ITEM_ID_TO_WOW_ITEM_ENTRY_RAW)")
    lines.append("        result.emplace(row.first, row.second);")
    lines.append("    return result;")
    lines.append("}")
    lines.append("inline const std::unordered_map<int64_t, uint32_t> ApItemIdToWowItemEntry = BuildApItemIdToWowItemEntry();")
    return lines


def emit_cpp(data: dict) -> str:
    family = data["family"]
    schema = FAMILY_SCHEMAS.get(family)
    if schema is not None and schema.generic:
        return emit_cpp_generic(data)
    if family == "core_loop":
        return _emit_cpp_core_loop(data)
    if family == "gates":
        return _emit_cpp_gates(data)
    if family == "filler":
        return _emit_cpp_filler(data)
    if family == "traps":
        return _emit_cpp_traps(data)
    if family == "filler_reward_effects":
        return _emit_cpp_filler_reward_effects(data)
    if family == "rares":
        return _emit_cpp_rares(data)
    if family == "fish":
        return _emit_cpp_fish(data)
    if family == "professions":
        return _emit_cpp_professions(data)
    if family == "collections":
        return _emit_cpp_collections(data)
    if family == "achievements":
        return _emit_cpp_achievements(data)
    raise ValidationError(f"unknown family: {family!r}")


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
    lines.append("    // M4.9: split into two per-class tracks (standard: every class except")
    lines.append("    // Death Knight, levels 1-80; death_knight: Death Knight only, levels")
    lines.append("    // 55-80, matching the class's real starting level) -- the level-up hook")
    lines.append("    // (ArchipelagoLevelScript.cpp) reads the connecting player's own real")
    lines.append("    // class (player->getClass() == CLASS_DEATH_KNIGHT) to pick which one.")
    lines.append("    inline std::unordered_map<uint32_t, int64_t> const LEVEL_LOCATIONS_STANDARD = {")
    for loc in milestone_locs:
        if loc["trigger"]["track"] == "standard":
            lines.append(f'        {{ {loc["trigger"]["level"]}, {loc["location_id"]} }},')
    lines.append("    };")
    lines.append("")
    lines.append("    inline std::unordered_map<uint32_t, int64_t> const LEVEL_LOCATIONS_DEATH_KNIGHT = {")
    for loc in milestone_locs:
        if loc["trigger"]["track"] == "death_knight":
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


def _emit_cpp_filler_reward_effects(data: dict) -> str:
    lines = [
        _GENERATED_HEADER_CPP.format(source="content/filler_reward_effects.yaml"),
        "#pragma once", "",
        "#include <cstdint>",
        "#include <string>",
        "#include <unordered_map>", "",
        "namespace Archipelago::FillerRewardEffects", "{",
    ]
    lines.append("    inline std::unordered_map<int64_t, std::string> const ApItemToEffect = {")
    for item in data["items"]:
        lines.append(f'        {{ {item["item_id"]}, "{item["delivery"]["effect"]}" }}, // {item["name"]}')
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
    lines.append("    // AP item id -> the real wow_item_entry to mail -- this family's own")
    lines.append("    // self-contained mail-delivery table (the `mail` delivery kind), kept")
    lines.append("    // separate from every other family's table so each compiled family")
    lines.append("    // stays self-contained.")
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
    lines.append("    // AP item id -> the real wow_item_entry to mail -- this family's own")
    lines.append("    // self-contained mail-delivery table, same pattern as Archipelago::Fish's")
    lines.append("    // own ApItemIdToWowItemEntry.")
    lines.append("    inline std::unordered_map<int64_t, uint32_t> const ApItemIdToWowItemEntry = {")
    for item in data["items"]:
        lines.append(f'        {{ {item["item_id"]}, {item["delivery"]["wow_item_entry"]} }}, // "{item["name"]}"')
    lines.append("    };")
    lines.append("}")
    lines.append("")
    return "\n".join(lines)


def _emit_cpp_achievements(data: dict) -> str:
    constants = data["constants"]
    lines = [
        _GENERATED_HEADER_CPP.format(source="content/achievements.yaml"),
        "#pragma once", "",
        "#include <cstdint>",
        "#include <string>",
        "#include <unordered_map>",
        "#include <unordered_set>",
        "#include <utility>", "",
        "namespace Archipelago::Achievements", "{",
    ]
    lines.append(f'    inline constexpr uint32_t WORLD_EXPLORER_ACHIEVEMENT_ID = {constants["WORLD_EXPLORER_ACHIEVEMENT_ID"]};')
    lines.append("")
    lines.append("    // Real achievement id -> its own location id. Consumed by the shared")
    lines.append("    // OnPlayerAchievementComplete hook (ArchipelagoAchievementScript.cpp) --")
    lines.append("    // always sent unconditionally on a matching completion, same 'no match =")
    lines.append("    // no-op'/'the AP server silently ignores a location id outside this slot's")
    lines.append("    // actual location table' pattern as every other lookup-table hook in this")
    lines.append("    // module (see Archipelago::Rares' CreatureEntryToLocationId precedent).")
    lines.append("    // Raw-array-plus-runtime-builder pattern (not a bare aggregate initializer)")
    lines.append("    // -- at 1,162 rows this is the same stack-overflow risk class M4.7.1's own")
    lines.append("    // QUEST_ID_TO_LOCATION_ID crash already taught this project not to re-risk.")
    lines.append("    inline constexpr std::pair<uint32_t, int64_t> ACHIEVEMENT_ID_TO_LOCATION_ID_RAW[] = {")
    for loc in data["locations"]:
        lines.append(f'        {{ {loc["trigger"]["achievement_id"]}, {loc["location_id"]} }}, // {_string_literal(loc["name"])}')
    lines.append("    };")
    lines.append("    inline std::unordered_map<uint32_t, int64_t> BuildAchievementIdToLocationId()")
    lines.append("    {")
    lines.append("        std::unordered_map<uint32_t, int64_t> result;")
    lines.append("        for (auto const& row : ACHIEVEMENT_ID_TO_LOCATION_ID_RAW)")
    lines.append("            result.emplace(row.first, row.second);")
    lines.append("        return result;")
    lines.append("    }")
    lines.append("    inline std::unordered_map<uint32_t, int64_t> const AchievementIdToLocationId = BuildAchievementIdToLocationId();")
    lines.append("")
    lines.append("    // AP item id -> the real achievement id to record a realm-state")
    lines.append("    // 'achievement_received_<id>' flag for on receipt (this family's own")
    lines.append("    // record_achievement realm_state effect -- no real WoW item to mail, same")
    lines.append("    // shape as Archipelago::Professions' record_milestone).")
    lines.append("    inline constexpr std::pair<int64_t, uint32_t> AP_ITEM_ID_TO_ACHIEVEMENT_ID_RAW[] = {")
    for item in data["items"]:
        lines.append(f'        {{ {item["item_id"]}, {item["delivery"]["achievement_id"]} }}, // {_string_literal(item["name"])}')
    lines.append("    };")
    lines.append("    inline std::unordered_map<int64_t, uint32_t> BuildApItemIdToAchievementId()")
    lines.append("    {")
    lines.append("        std::unordered_map<int64_t, uint32_t> result;")
    lines.append("        for (auto const& row : AP_ITEM_ID_TO_ACHIEVEMENT_ID_RAW)")
    lines.append("            result.emplace(row.first, row.second);")
    lines.append("        return result;")
    lines.append("    }")
    lines.append("    inline std::unordered_map<int64_t, uint32_t> const ApItemIdToAchievementId = BuildApItemIdToAchievementId();")
    lines.append("")
    lines.append("    // Real achievement id -> its own subset name (only present for ids that")
    lines.append("    // belong to one of the six named thematic subsets). Consumed by")
    lines.append("    // ArchipelagoGoals.cpp's IsAchievementHuntComplete for named_subset tier.")
    lines.append("    // Raw-array-plus-runtime-builder pattern (not a bare aggregate initializer)")
    lines.append("    // -- same M4.7.1 stack-overflow crash-class rationale as")
    lines.append("    // ACHIEVEMENT_ID_TO_LOCATION_ID_RAW above: std::string is not trivially")
    lines.append("    // constructible, so a static/inline std::unordered_map<uint32_t, std::string>")
    lines.append("    // initialized directly as a bare aggregate at hundreds of rows is exactly")
    lines.append("    // the pattern that has crashed worldserver.exe at boot before (see")
    lines.append("    // _emit_cpp_large_string_map's own docstring). The raw array below uses")
    lines.append("    // char const* (a trivial type) for the subset value instead.")
    lines.append("    inline constexpr std::pair<uint32_t, char const*> ACHIEVEMENT_ID_TO_SUBSET_RAW[] = {")
    for loc in data["locations"]:
        subset = loc["trigger"].get("subset")
        if subset:
            lines.append(f'        {{ {loc["trigger"]["achievement_id"]}, "{subset}" }}, // {_string_literal(loc["name"])}')
    lines.append("    };")
    lines.append("    inline std::unordered_map<uint32_t, std::string> BuildAchievementIdToSubset()")
    lines.append("    {")
    lines.append("        std::unordered_map<uint32_t, std::string> result;")
    lines.append("        for (auto const& row : ACHIEVEMENT_ID_TO_SUBSET_RAW)")
    lines.append("            result.emplace(row.first, row.second);")
    lines.append("        return result;")
    lines.append("    }")
    lines.append("    inline std::unordered_map<uint32_t, std::string> const AchievementIdToSubset = BuildAchievementIdToSubset();")
    lines.append("")
    lines.append("    // Real achievement ids hand-flagged extremely_hard (Task 3's curated")
    lines.append("    // denylist) -- excluded from the ninety_nine_percent tier's target set.")
    lines.append("    inline std::unordered_set<uint32_t> const ExtremelyHardAchievementIds = {")
    for loc in data["locations"]:
        if loc["trigger"].get("extremely_hard"):
            lines.append(f'        {loc["trigger"]["achievement_id"]}, // {_string_literal(loc["name"])}')
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
