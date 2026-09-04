#!/usr/bin/env python3
"""DB-driven extraction for the Gathersanity content family (M4.10.2).
Run this to regenerate content/gathersanity.yaml; never hand-edit that
file. Gathering nodes (M4.11.4.2) are grouped into abstract
zone+profession+skill-tier zone-pool locations, the same zone_pool_credit
trigger kind Containersanity's own zone-pool rewrite (M4.11.4.1) uses --
see _extract_gathering_nodes below. Introduces two other trigger kinds
(skinning_loot, disenchant_loot) for the two backing tables Gathersanity
adds, both still per-loot-table-item (unchanged by this rewrite)."""
from __future__ import annotations

import pathlib

import yaml

from db_extract import (
    run_query, is_denylisted, load_exclusion_rules, parse_map_expansions,
    parse_world_map_areas, parse_area_zone_ids, parse_area_names, parse_map_instance_types,
    parse_map_names, resolve_area_or_instance_tags_for_positions,
    parse_pool_gameobject_memberships, resolve_zone_pool_units,
    parse_lock_skill_requirements, skill_tier_for_level,
)
from gathersanity_node_names import GATHERING_NODE_NAMES

_LOCATION_ID_BASE = 9_000_000
_ITEM_ID_BASE = 9_500_000  # NOT the same range as containersanity (7,600,000) -- both this range
                            # and 9,000,000 (locations) were audited live during planning to be
                            # completely free (current real max location_id 8,016,809, item_id
                            # 8,500,560) -- no gap-fitting needed this time, see this plan's Global
                            # Constraints.

_GAMEOBJECT_TYPE_CHEST = 3  # SharedDefines.h:1567

# Real vanilla CREATURE_TYPE_FLAG bits (src/server/shared/SharedDefines.h:2697-2704) marking a
# creature's skinning-equivalent loot as gated by a profession other than Skinning. Real, already-
# existing content -- confirmed live: 38 herbalism-flagged, 21 mining-flagged, 26 engineering-
# flagged skinning_loot_template rows in this checkout, none overlapping each other.
_CREATURE_TYPE_FLAG_SKIN_WITH_HERBALISM = 0x00000100
_CREATURE_TYPE_FLAG_SKIN_WITH_MINING = 0x00000200
_CREATURE_TYPE_FLAG_SKIN_WITH_ENGINEERING = 0x00008000


def _skinning_source_tag(combined_type_flags: int) -> str:
    """combined_type_flags is the bitwise OR of every real creature's
    type_flags sharing this skinloot table id (a single skinning loot
    table can be shared across multiple creatures -- same convention
    Containersanity's own _expansion_tags_for_loot_id uses for shared
    loot_ids). Confirmed live: no real skinloot id in this checkout has
    more than one of the three profession bits set across its backing
    creatures, so this is a plain if/elif, not a multi-tag union (unlike
    expansion tagging)."""
    if combined_type_flags & _CREATURE_TYPE_FLAG_SKIN_WITH_HERBALISM:
        return "mob_herbalism"
    if combined_type_flags & _CREATURE_TYPE_FLAG_SKIN_WITH_MINING:
        return "mob_mining"
    if combined_type_flags & _CREATURE_TYPE_FLAG_SKIN_WITH_ENGINEERING:
        return "mob_engineering"
    return "skinning"


def _expansion_tags_for_maps(maps: set[int], map_expansions: dict[int, str]) -> list[str]:
    """Shared helper -- same lowest-risk-default convention as
    Containersanity's _expansion_tags_for_loot_id (falls back to
    ["vanilla"] for no real spawn row at all)."""
    if not maps:
        return ["vanilla"]
    return sorted({map_expansions.get(map_id, "vanilla") for map_id in maps})


_FILLER_CONSUMABLE_ITEM_ENTRY = 117  # "Tough Jerky" -- same real value FILLER_CONSUMABLE_ENTRY
                                       # uses in ArchipelagoLootSlotScript.cpp/
                                       # ArchipelagoInterceptionScript.cpp for "no real backing
                                       # item" cases (M4.11.4.2's own Global Constraints).


def _query_lock_id_by_entry(entries: set[int]) -> dict[int, int]:
    """Real gameobject_template.entry -> gameobject_template.Data0 (lockId),
    restricted to the given real entries (the gathering-node templates this
    extraction already found via GATHERING_NODE_NAMES). Split out as its
    own small query (rather than folded into the existing loot_rows/
    spawn_rows queries) since it's keyed by template entry, not loot_id or
    spawn guid -- a genuinely different real join."""
    if not entries:
        return {}
    entries_csv = ",".join(str(e) for e in sorted(entries))
    rows = run_query(f"SELECT entry, Data0 FROM gameobject_template WHERE entry IN ({entries_csv})")
    return {int(entry): int(lock_id) for entry, lock_id in rows}


def _profession_and_tier_by_entry(
    entries: set[int], lock_requirements: dict[int, dict[str, int]]
) -> dict[int, tuple[str, str]]:
    """Real gameobject_template.entry -> (profession, tier), via
    entry -> lockId -> {profession: skill_level} -> skill_tier_for_level.
    An entry whose lockId has no real Herbalism/Mining slot (or whose
    lockId itself doesn't resolve) is absent from the returned dict --
    excluded from the abstract zone-pool entirely rather than guessed at,
    matching this project's "unknown means excluded" convention. Keeping
    profession alongside tier (rather than tier alone) is required so
    Mining and Herbalism get INDEPENDENT abstract pools per zone+tier --
    spec §6's own example names locations per profession ("Tanaris -
    Mining Node (Expert) 2"), which a merged "<zone>|<tier>" key could not
    represent."""
    lock_id_by_entry = _query_lock_id_by_entry(entries)
    result: dict[int, tuple[str, str]] = {}
    for entry in entries:
        lock_id = lock_id_by_entry.get(entry)
        if lock_id is None:
            continue
        requirement = lock_requirements.get(lock_id)
        if not requirement:
            continue
        # A real node's lockId has exactly one of herbalism/mining set in
        # this checkout's own real data (confirmed during the spec's own
        # research); take whichever is present.
        if "herbalism" in requirement:
            profession, skill_level = "herbalism", requirement["herbalism"]
        elif "mining" in requirement:
            profession, skill_level = "mining", requirement["mining"]
        else:
            continue
        result[entry] = (profession, skill_tier_for_level(skill_level))
    return result


def _extract_gathering_nodes() -> tuple[list, list, dict[int, list[str]], dict[int, str]]:
    lock_requirements = parse_lock_skill_requirements()
    world_map_areas = parse_world_map_areas()
    area_zone_ids = parse_area_zone_ids()
    area_names = parse_area_names()
    map_instance_types = parse_map_instance_types()
    map_names = parse_map_names()
    pool_memberships = parse_pool_gameobject_memberships()

    # Identical INCLUDE-filter to GATHERING_NODE_NAMES as before Task 2's
    # rewrite -- the exact 284 rows M4.10.2 Task 1 carved out of
    # Containersanity. Real names in this allowlist include embedded
    # apostrophes (Adder's Tongue, Khadgar's Whisker, Arthas' Tears,
    # Talandra's Rose) -- standard SQL quote-doubling (MySQL also accepts
    # this) so the IN(...) clause stays valid.
    names_placeholder = ",".join("'{}'".format(n.replace("'", "''")) for n in GATHERING_NODE_NAMES)
    spawn_rows_raw = run_query(f"""
        SELECT gt.entry, g.guid, g.map, g.position_x, g.position_y
        FROM gameobject g
        JOIN gameobject_template gt ON gt.entry = g.id
        WHERE gt.type = {_GAMEOBJECT_TYPE_CHEST} AND gt.name IN ({names_placeholder})
    """)
    spawn_rows_raw = [
        (int(entry), int(guid), int(map_id), float(x), float(y))
        for entry, guid, map_id, x, y in spawn_rows_raw
    ]

    real_entries = {entry for entry, _guid, _map, _x, _y in spawn_rows_raw}
    profession_tier_by_entry = _profession_and_tier_by_entry(real_entries, lock_requirements)

    # Only spawns whose own template resolved to a real (profession, tier)
    # pair feed the zone-pool unit count -- a node whose lockId isn't a real
    # Herbalism/Mining skill lock (should not occur for a real
    # GATHERING_NODE_NAMES row, but defensively excluded rather than
    # crashing) contributes nothing.
    spawn_rows_by_profession_tier: dict[tuple[str, str], list[tuple[int, int, float, float]]] = {}
    for entry, guid, map_id, x, y in spawn_rows_raw:
        profession_tier = profession_tier_by_entry.get(entry)
        if profession_tier is None:
            continue
        spawn_rows_by_profession_tier.setdefault(profession_tier, []).append((guid, map_id, x, y))

    locations, items = [], []
    for profession, tier in sorted(spawn_rows_by_profession_tier):
        units_by_zone = resolve_zone_pool_units(
            spawn_rows_by_profession_tier[(profession, tier)], pool_memberships, world_map_areas,
            area_zone_ids, area_names, map_instance_types, map_names,
        )
        profession_label = "Mining" if profession == "mining" else "Herbalism"
        tier_label = tier.replace("_", " ").title()
        for zone_key in sorted(units_by_zone):
            # Mining and Herbalism get INDEPENDENT abstract pools at the
            # same zone+tier -- a 3-part composite, not the 2-part
            # "<zone>|<tier>" a first draft of this task used, which would
            # have silently merged both professions' nodes into one pool
            # and made per-profession item-gating (Task 4) ill-defined.
            composite_key = f"{zone_key}|{profession}|{tier}"
            real_unit_count = len(units_by_zone[zone_key])
            for ordinal in range(1, real_unit_count + 1):
                display = f"{zone_key} - {profession_label} Node ({tier_label}) {ordinal}"
                locations.append({
                    "name": f"Gathersanity: {display}",
                    "trigger": {"kind": "zone_pool_credit", "zone_key": composite_key, "ordinal": ordinal},
                    "tags": {"area": [zone_key]},
                })
                items.append({
                    "name": f"Gathersanity Item: {display}",
                    "delivery": {"kind": "mail", "wow_item_entry": _FILLER_CONSUMABLE_ITEM_ENTRY},
                })

    # Real per-spawn zone resolution + per-entry "profession|tier" (for the
    # new C++ runtime lookups, this plan's Task 3) -- same "resolve this ONE
    # spawn's own individual position" shape as
    # extract_containersanity.py's own zone_pool_spawn_zones (M4.11.4.1
    # Task 6), not the unioned-per-unit shape resolve_zone_pool_units
    # produces for cap-sizing. The stored value is "profession|tier" (not
    # tier alone) so the C++ side can composite the full 3-part zone_key
    # (zoneKey + "|" + this value) without a separate profession lookup.
    zone_pool_spawn_zones: dict[int, list[str]] = {}
    node_tier_by_entry: dict[int, str] = {}
    for entry, profession_tier in profession_tier_by_entry.items():
        node_tier_by_entry[entry] = f"{profession_tier[0]}|{profession_tier[1]}"
    for entry, guid, map_id, x, y in spawn_rows_raw:
        if entry not in profession_tier_by_entry:
            continue
        zone_tags = resolve_area_or_instance_tags_for_positions(
            [(map_id, x, y)], world_map_areas, area_zone_ids, area_names,
            map_instance_types, map_names,
        )
        if zone_tags:
            zone_pool_spawn_zones[guid] = sorted(zone_tags)

    return locations, items, zone_pool_spawn_zones, node_tier_by_entry


def _extract_skinning(
    rules: dict, map_expansions: dict[int, str],
    world_map_areas: list[tuple[int, int, float, float, float, float]],
    area_zone_ids: dict[int, int], area_names: dict[int, str],
    map_instance_types: dict[int, int], map_names: dict[int, str],
) -> tuple[list, list]:
    # Real join confirmed live during planning: creature_template.skinloot
    # -> skinning_loot_template.Entry (a DEDICATED table, NOT
    # creature_loot_template -- see this plan's header for the real
    # correction to the spec's own text). BIT_OR aggregates every real
    # creature's type_flags sharing a skinloot id, since a single loot
    # table can be shared across multiple creatures.
    loot_rows = run_query("""
        SELECT slt.Entry, slt.Item, it.name,
               MIN(ct.entry) AS sample_creature_entry,
               BIT_OR(ct.type_flags) AS combined_type_flags
        FROM skinning_loot_template slt
        JOIN item_template it ON it.entry = slt.Item
        JOIN creature_template ct ON ct.skinloot = slt.Entry
        WHERE slt.QuestRequired = 0 AND slt.Reference = 0
        GROUP BY slt.Entry, slt.Item, it.name
        ORDER BY slt.Entry, slt.Item
    """)
    # M4.11.3.2: now also selects position_x/position_y so every real spawn's
    # exact position feeds resolve_area_or_instance_tags_for_positions (Task
    # 2, db_extract.py) for a real tags["area"] -- skinloot_to_maps (map-only)
    # is still derived from this for _expansion_tags_for_maps, which only
    # ever needed the map id.
    spawn_rows = run_query("""
        SELECT ct.skinloot, c.map, c.position_x, c.position_y
        FROM creature c
        JOIN creature_template ct ON ct.entry = c.id
        WHERE ct.skinloot > 0
    """)
    skinloot_to_positions: dict[int, set[tuple[int, float, float]]] = {}
    for skinloot_id, map_id, x, y in spawn_rows:
        skinloot_to_positions.setdefault(int(skinloot_id), set()).add((int(map_id), float(x), float(y)))
    skinloot_to_maps: dict[int, set[int]] = {
        skinloot_id: {map_id for map_id, _, _ in positions} for skinloot_id, positions in skinloot_to_positions.items()
    }

    locations, items = [], []
    for loot_id_str, item_entry_str, item_name, _sample_entry, type_flags_str in loot_rows:
        loot_id, item_entry = int(loot_id_str), int(item_entry_str)
        if not item_name or is_denylisted(item_name, rules):
            continue
        source = _skinning_source_tag(int(type_flags_str))
        display = f"{item_name} (skinning #{loot_id}/{item_entry})"
        expansions = _expansion_tags_for_maps(skinloot_to_maps.get(loot_id, set()), map_expansions)
        area_tags = resolve_area_or_instance_tags_for_positions(
            sorted(skinloot_to_positions.get(loot_id, set())), world_map_areas, area_zone_ids,
            area_names, map_instance_types, map_names,
        )

        tags = {"expansion": expansions, "source": [source]}
        # area is OMITTED (not an empty list) when none of this skinloot id's
        # real creature spawns resolve to a real zone/instance name -- same
        # "never zero tags" convention _extract_gathering_nodes above
        # follows.
        if area_tags:
            tags["area"] = sorted(area_tags)

        locations.append({
            "name": f"Gathersanity: {display}",
            "trigger": {"kind": "skinning_loot", "loot_id": loot_id, "item_entry": item_entry},
            "tags": tags,
        })
        items.append({
            "name": f"Gathersanity Item: {display}",
            "delivery": {"kind": "mail", "wow_item_entry": item_entry},
        })
    return locations, items


def _disenchant_expansion_tags(min_lvl: int, max_lvl: int) -> list[str]:
    """Real character-level-tier convention (vanilla cap 60, TBC cap 70,
    WotLK cap 80) -- disenchant_loot_template's Entry brackets are keyed
    by an item-level/quality budget, not by a single clean expansion, and
    real live data confirms many brackets span the FULL 0-80 range across
    their many real source items (a shared essence/dust bracket genuinely
    spans expansions, not an artifact of a lazy default). RequiredLevel=0
    (no requirement) falls back to vanilla, same lowest-risk-default
    convention as every other family's unresolvable-row case."""
    tags = set()
    if min_lvl <= 60 or min_lvl == 0:
        tags.add("vanilla")
    if 61 <= max_lvl <= 70 or (min_lvl <= 70 and max_lvl >= 61):
        tags.add("tbc")
    if max_lvl >= 71:
        tags.add("wotlk")
    if not tags:
        tags.add("vanilla")
    return sorted(tags)


def _extract_disenchant(rules: dict) -> tuple[list, list]:
    # Real join confirmed live: item_template.DisenchantID ->
    # disenchant_loot_template.Entry. min/max RequiredLevel across every
    # real source item sharing a bracket drives the expansion tag (see
    # _disenchant_expansion_tags).
    loot_rows = run_query("""
        SELECT dlt.Entry, dlt.Item, it.name,
               MIN(src.RequiredLevel) AS min_lvl, MAX(src.RequiredLevel) AS max_lvl
        FROM disenchant_loot_template dlt
        JOIN item_template it ON it.entry = dlt.Item
        JOIN item_template src ON src.DisenchantID = dlt.Entry
        WHERE dlt.QuestRequired = 0 AND dlt.Reference = 0
        GROUP BY dlt.Entry, dlt.Item, it.name
        ORDER BY dlt.Entry, dlt.Item
    """)
    locations, items = [], []
    for loot_id_str, item_entry_str, item_name, min_lvl_str, max_lvl_str in loot_rows:
        loot_id, item_entry = int(loot_id_str), int(item_entry_str)
        if not item_name or is_denylisted(item_name, rules):
            continue
        display = f"{item_name} (disenchant bracket #{loot_id})"
        expansions = _disenchant_expansion_tags(int(min_lvl_str), int(max_lvl_str))
        locations.append({
            "name": f"Gathersanity: {display}",
            "trigger": {"kind": "disenchant_loot", "loot_id": loot_id, "item_entry": item_entry},
            "tags": {"expansion": expansions, "source": ["disenchant"]},
        })
        items.append({
            "name": f"Gathersanity Item: {display}",
            "delivery": {"kind": "mail", "wow_item_entry": item_entry},
        })
    return locations, items


def extract() -> dict:
    rules = load_exclusion_rules()
    map_expansions = parse_map_expansions()
    world_map_areas = parse_world_map_areas()
    area_zone_ids = parse_area_zone_ids()
    area_names = parse_area_names()
    map_instance_types = parse_map_instance_types()
    map_names = parse_map_names()

    node_locs, node_items, zone_pool_spawn_zones, node_tier_by_entry = _extract_gathering_nodes()
    skin_locs, skin_items = _extract_skinning(
        rules, map_expansions, world_map_areas, area_zone_ids, area_names, map_instance_types, map_names,
    )
    # disenchant is NOT extended with area resolution -- it is keyed by an
    # item-level bracket only, with no real gameobject/creature spawn
    # position of its own (see _extract_disenchant's own docstring/comments
    # above), so it never gains a tags["area"] key at all -- same "no
    # physical location" exemption core_loop's level milestones and
    # Repsanity already have.
    dis_locs, dis_items = _extract_disenchant(rules)

    locations = node_locs + skin_locs + dis_locs
    items = node_items + skin_items + dis_items
    for idx, (loc, item) in enumerate(zip(locations, items)):
        loc["location_id"] = _LOCATION_ID_BASE + idx
        item["item_id"] = _ITEM_ID_BASE + idx

    return {
        "family": "gathersanity", "locations": locations, "items": items, "constants": {},
        "zone_pool_spawn_zones": zone_pool_spawn_zones,
        "zone_pool_node_tier_by_entry": node_tier_by_entry,
    }


if __name__ == "__main__":
    data = extract()
    out_path = pathlib.Path(__file__).parent.parent / "content" / "gathersanity.yaml"
    with open(out_path, "w", encoding="utf-8") as f:
        f.write("# GENERATED FILE - do not hand-edit.\n")
        f.write(f"# Regenerate with: python tools/{pathlib.Path(__file__).name}\n")
        yaml.safe_dump(data, f, sort_keys=False, allow_unicode=True)
    print(f"Wrote {len(data['locations'])} gathersanity locations to {out_path}")
