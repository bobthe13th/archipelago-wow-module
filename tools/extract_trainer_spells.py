#!/usr/bin/env python3
"""DB-driven extraction for the Trainer Spells & Abilities content family
(M4.9). Run this to regenerate content/trainer_spells.yaml; never
hand-edit that file. Must run AFTER extract_recipes.py -- reads its output
(content/recipes.yaml) to exclude any spell_id already claimed there (see
this plan's Global Constraints on cross-family spell_id collisions)."""
from __future__ import annotations

import pathlib

import yaml

from db_extract import (
    run_query, is_denylisted, load_exclusion_rules, parse_map_expansions, parse_spell_names,
    parse_world_map_areas, parse_area_zone_ids, parse_area_names, resolve_area_tags_for_positions,
)

_LOCATION_ID_BASE = 7_000_000
_ITEM_ID_BASE = 7_500_000

_TRAINER_TYPE_CLASS = 0  # Trainer::Type::Class, Trainer.h:33 -- Mount(1)/Tradeskill(2)/Pet(3)
                          # excluded (see this plan's Global Constraints).
_FILLER_ITEM_ENTRY = 7073  # "Broken Fang" -- same M4.7.1.3 filler-reward item quest_rewards
                            # reuses for a reward-less location; no natural WoW item exists
                            # for "you may now train this class ability" the way a quest
                            # reward or recipe item does.

# Real WotLK class ids (Trainer::IsTrainerValidForPlayer, Trainer.cpp:
# 216-219: for Type::Class, trainer.Requirement IS player->getClass()
# directly) -- confirmed against the live DB that Requirement only ever
# takes these 10 values for Type=0 trainers (class id 10 doesn't exist in
# 3.3.5a's class table).
_CLASS_ID_TO_NAME = {
    1: "warrior", 2: "paladin", 3: "hunter", 4: "rogue", 5: "priest",
    6: "death_knight", 7: "shaman", 8: "mage", 9: "warlock", 11: "druid",
}


def _load_recipe_spell_ids() -> frozenset[int]:
    """spell_ids already claimed by content/recipes.yaml -- 48 real
    spell_ids (this plan's own research) are taught by BOTH a recipe item
    AND a class trainer (e.g. shaman totem-carving recipes). The runtime
    combined SpellIdToLocationId map can only resolve a spell_id to ONE
    location_id, so trainer_spells excludes anything recipes.yaml already
    claims; recipes wins deterministically (this function's caller runs
    strictly after extract_recipes.py in the standard regeneration
    order). Returns an empty set (not an error) if content/recipes.yaml
    doesn't exist yet -- keeps this script independently runnable/testable
    before Task 2 lands."""
    recipes_path = pathlib.Path(__file__).parent.parent / "content" / "recipes.yaml"
    if not recipes_path.exists():
        return frozenset()
    with open(recipes_path, "r", encoding="utf-8") as f:
        data = yaml.safe_load(f) or {}
    return frozenset(loc["trigger"]["spell_id"] for loc in data.get("locations", []))


def _load_trainer_expansions() -> dict[int, str]:
    """trainer.Id -> expansion, resolved from creature_default_trainer's
    real CreatureId (a creature_template.entry per ObjectMgr::LoadTrainers'
    own GetCreatureTemplate(creatureId) validation) joined to creature.id
    (the spawn table's own PK doubling as its template FK, same join shape
    as extract_vendor_stock.py's _load_vendor_expansions), then Map.dbc's
    real expansionID. Confirmed 100% coverage against the real DB: all 34
    real Type=0 (class) trainers have a matching creature_default_trainer
    row and a matching creature.map."""
    map_expansions = parse_map_expansions()
    rows = run_query(f"""
        SELECT t.Id, MIN(c.map)
        FROM trainer t
        JOIN creature_default_trainer cdt ON cdt.TrainerId = t.Id
        JOIN creature c ON c.id = cdt.CreatureId
        WHERE t.Type = {_TRAINER_TYPE_CLASS}
        GROUP BY t.Id
    """)
    return {int(trainer_id): map_expansions.get(int(map_id), "vanilla") for trainer_id, map_id in rows}


def _load_trainer_positions() -> dict[int, list[tuple[int, float, float]]]:
    """trainer_id -> list of every real (map, x, y) spawn position for the
    creature(s) that serve as this trainer's own creature_default_trainer
    row. A trainer can have more than one real spawn (city guards/trainers
    sometimes have multiple spawn rows) -- collect all of them, the caller
    resolves each independently and unions the results (M4.11.2)."""
    rows = run_query(f"""
        SELECT cdt.TrainerId, c.map, c.position_x, c.position_y
        FROM creature_default_trainer cdt
        JOIN creature c ON c.id = cdt.CreatureId
        JOIN trainer t ON t.Id = cdt.TrainerId
        WHERE t.Type = {_TRAINER_TYPE_CLASS}
    """)
    positions: dict[int, list[tuple[int, float, float]]] = {}
    for trainer_id_str, map_id_str, x_str, y_str in rows:
        positions.setdefault(int(trainer_id_str), []).append(
            (int(map_id_str), float(x_str), float(y_str))
        )
    return positions


def _trainer_area_tags(
    trainer_ids: set[int], trainer_positions: dict[int, list[tuple[int, float, float]]],
    world_map_areas, area_zone_ids, area_names,
) -> frozenset[str]:
    """M4.11.3.1: replaces M4.11.2's own _resolve_trainer_zone_ids, which was
    built on the old single-winner resolve_zone_id_from_position (raw
    trigger["trainer_zone_ids"] ints). Unions every real (map, x, y)
    position across every trainer that teaches this spell into one
    resolve_area_tags_for_positions() call (Task 3's fixed mechanism,
    db_extract.py) -- produces canonical, deduplicated zone-name strings
    for tags["area"] instead. A trainer_id with no matching
    creature_default_trainer/creature row at all contributes no positions
    (defensive; extract()'s own real join already filters to trainers with
    a real creature)."""
    positions = [
        position
        for trainer_id in trainer_ids
        for position in trainer_positions.get(trainer_id, [])
    ]
    return resolve_area_tags_for_positions(positions, world_map_areas, area_zone_ids, area_names)


def extract() -> dict:
    rules = load_exclusion_rules()
    already_claimed = _load_recipe_spell_ids()
    trainer_expansions = _load_trainer_expansions()
    spell_names = parse_spell_names()
    trainer_positions = _load_trainer_positions()
    world_map_areas = parse_world_map_areas()
    area_zone_ids = parse_area_zone_ids()
    area_names = parse_area_names()

    rows = run_query(f"""
        SELECT ts.SpellId, t.Requirement, t.Id, ts.ReqLevel
        FROM trainer_spell ts
        JOIN trainer t ON ts.TrainerId = t.Id
        WHERE t.Type = {_TRAINER_TYPE_CLASS}
    """)

    # Aggregate by spell_id: a spell can be taught by more than one class's
    # trainer (4 real spell_ids in this checkout's data), and by more than
    # one trainer of the SAME class (34 class trainers across factions/
    # cities each teaching largely overlapping spell lists) -- collect
    # every distinct class name and the min req_level/lowest trainer id
    # across all of them, one location per spell_id.
    by_spell: dict[int, dict] = {}
    for spell_id_str, class_id_str, trainer_id_str, req_level_str in rows:
        spell_id = int(spell_id_str)
        if spell_id in already_claimed:
            continue
        class_name = _CLASS_ID_TO_NAME.get(int(class_id_str))
        if class_name is None:
            continue
        entry = by_spell.setdefault(spell_id, {"classes": set(), "req_level": int(req_level_str), "trainer_ids": set()})
        entry["classes"].add(class_name)
        entry["req_level"] = min(entry["req_level"], int(req_level_str))
        entry["trainer_ids"].add(int(trainer_id_str))

    locations, items = [], []
    for spell_id in sorted(by_spell):
        info = by_spell[spell_id]
        name = spell_names.get(spell_id, "")
        if not name or is_denylisted(name, rules):
            continue

        lowest_trainer_id = min(info["trainer_ids"])
        expansion = trainer_expansions.get(lowest_trainer_id, "vanilla")
        area_tags = _trainer_area_tags(
            info["trainer_ids"], trainer_positions, world_map_areas, area_zone_ids, area_names
        )

        # area: real, deduplicated, sorted canonical zone-name strings at
        # least one teaching trainer resolves to (M4.11.3.1, Task 3's fixed
        # resolve_area_tags_for_positions mechanism -- replaces M4.11.2's
        # own trigger["trainer_zone_ids"] int list). Zone Leveler's own
        # physical-reachability check for this possession-triggered family
        # (locations.py) reads this instead. `area` is OMITTED (not an
        # empty list) when none of this spell's trainers resolve to a real
        # zone -- generate_content.py's own _validate_tags_rows rejects an
        # empty list for any dimension present in an export_tags family's
        # tags block (same edge case extract_quest_rewards.py's own
        # tags["area"] omission already handles). Every real consumer reads
        # it via `tags.get("area", frozenset())` (or equivalent), never
        # assumes presence.
        tags = {"class": sorted(info["classes"]), "expansion": [expansion]}
        if area_tags:
            tags["area"] = sorted(area_tags)

        locations.append({
            "name": f"Trainer Spell: {name} (#{spell_id})",
            "location_id": _LOCATION_ID_BASE + spell_id,
            # min_level: real trainer_spell.ReqLevel, minimum across every
            # class trainer that teaches this spell_id (M4.11.1 Task 12) --
            # already computed above (info["req_level"]) for aggregation
            # purposes; now also exported so Zone Leveler's whole_game_scaled
            # filter (locations.py) can read it. Lives in `trigger`, not
            # `tags`, same placement extract_quest_rewards.py's own min_level/
            # zone_id already use -- TAGS is dict[str, frozenset[str]]-only
            # (generate_content.py's export_tags emission), TRIGGERS keeps the
            # raw trigger dict verbatim.
            "trigger": {
                "kind": "learn_spell", "spell_id": spell_id, "is_filler_reward": True,
                "min_level": info["req_level"],
            },
            "tags": tags,
        })
        items.append({
            "name": f"Trainer Spell Item: {name} (#{spell_id})",
            "item_id": _ITEM_ID_BASE + spell_id,
            "delivery": {"kind": "mail", "wow_item_entry": _FILLER_ITEM_ENTRY},
        })

    return {"family": "trainer_spells", "locations": locations, "items": items, "constants": {}}


if __name__ == "__main__":
    data = extract()
    out_path = pathlib.Path(__file__).parent.parent / "content" / "trainer_spells.yaml"
    with open(out_path, "w", encoding="utf-8") as f:
        f.write("# GENERATED FILE - do not hand-edit.\n")
        f.write(f"# Regenerate with: python tools/{pathlib.Path(__file__).name}\n")
        yaml.safe_dump(data, f, sort_keys=False, allow_unicode=True)
    print(f"Wrote {len(data['locations'])} trainer-spell locations to {out_path}")
