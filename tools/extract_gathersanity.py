#!/usr/bin/env python3
"""DB-driven extraction for the Gathersanity content family (M4.10.2).
Run this to regenerate content/gathersanity.yaml; never hand-edit that
file. Reuses M4.10.1's gameobject_loot trigger kind for gathering nodes
(the exact rows Task 1 carved out of Containersanity), and introduces two
new trigger kinds (skinning_loot, disenchant_loot) for the two backing
tables Gathersanity adds."""
from __future__ import annotations

import pathlib

import yaml

from db_extract import run_query, is_denylisted, load_exclusion_rules, parse_map_expansions
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


def _extract_gathering_nodes(rules: dict, map_expansions: dict[int, str]) -> tuple[list, list]:
    # Identical join shape to extract_containersanity.py's own query, but
    # INCLUDE-filtered to GATHERING_NODE_NAMES instead of excluding it --
    # the exact 284 rows Task 1 carved out of Containersanity. Real names in
    # this allowlist include embedded apostrophes (Adder's Tongue, Khadgar's
    # Whisker, Arthas' Tears, Talandra's Rose) -- standard SQL quote-doubling
    # (MySQL also accepts this) so the IN(...) clause stays valid.
    names_placeholder = ",".join("'{}'".format(n.replace("'", "''")) for n in GATHERING_NODE_NAMES)
    loot_rows = run_query(f"""
        SELECT glt.Entry, glt.Item, MIN(gt.name), it.name
        FROM gameobject_loot_template glt
        JOIN gameobject_template gt ON gt.Data1 = glt.Entry AND gt.type = {_GAMEOBJECT_TYPE_CHEST}
        JOIN item_template it ON it.entry = glt.Item
        WHERE gt.name IN ({names_placeholder}) AND glt.QuestRequired = 0 AND glt.Reference = 0
        GROUP BY glt.Entry, glt.Item, it.name
        ORDER BY glt.Entry, glt.Item
    """)
    spawn_rows = run_query(f"""
        SELECT gt.Data1, g.map
        FROM gameobject g
        JOIN gameobject_template gt ON gt.entry = g.id
        WHERE gt.type = {_GAMEOBJECT_TYPE_CHEST} AND gt.name IN ({names_placeholder})
    """)
    loot_id_to_maps: dict[int, set[int]] = {}
    for data1, map_id in spawn_rows:
        loot_id_to_maps.setdefault(int(data1), set()).add(int(map_id))

    locations, items = [], []
    for loot_id_str, item_entry_str, chest_name, item_name in loot_rows:
        loot_id, item_entry = int(loot_id_str), int(item_entry_str)
        if not chest_name or is_denylisted(chest_name, rules):
            continue
        if not item_name or is_denylisted(item_name, rules):
            continue
        display = f"{chest_name} - {item_name} (#{loot_id}/{item_entry})"
        expansions = _expansion_tags_for_maps(loot_id_to_maps.get(loot_id, set()), map_expansions)
        locations.append({
            "name": f"Gathersanity: {display}",
            "trigger": {"kind": "gameobject_loot", "loot_id": loot_id, "item_entry": item_entry},
            "tags": {"expansion": expansions, "source": ["gathering_node"]},
        })
        items.append({
            "name": f"Gathersanity Item: {display}",
            "delivery": {"kind": "mail", "wow_item_entry": item_entry},
        })
    return locations, items


def _extract_skinning(rules: dict, map_expansions: dict[int, str]) -> tuple[list, list]:
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
    spawn_rows = run_query("""
        SELECT ct.skinloot, c.map
        FROM creature c
        JOIN creature_template ct ON ct.entry = c.id
        WHERE ct.skinloot > 0
    """)
    skinloot_to_maps: dict[int, set[int]] = {}
    for skinloot_id, map_id in spawn_rows:
        skinloot_to_maps.setdefault(int(skinloot_id), set()).add(int(map_id))

    locations, items = [], []
    for loot_id_str, item_entry_str, item_name, _sample_entry, type_flags_str in loot_rows:
        loot_id, item_entry = int(loot_id_str), int(item_entry_str)
        if not item_name or is_denylisted(item_name, rules):
            continue
        source = _skinning_source_tag(int(type_flags_str))
        display = f"{item_name} (skinning #{loot_id}/{item_entry})"
        expansions = _expansion_tags_for_maps(skinloot_to_maps.get(loot_id, set()), map_expansions)
        locations.append({
            "name": f"Gathersanity: {display}",
            "trigger": {"kind": "skinning_loot", "loot_id": loot_id, "item_entry": item_entry},
            "tags": {"expansion": expansions, "source": [source]},
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

    node_locs, node_items = _extract_gathering_nodes(rules, map_expansions)
    skin_locs, skin_items = _extract_skinning(rules, map_expansions)
    dis_locs, dis_items = _extract_disenchant(rules)

    locations = node_locs + skin_locs + dis_locs
    items = node_items + skin_items + dis_items
    for idx, (loc, item) in enumerate(zip(locations, items)):
        loc["location_id"] = _LOCATION_ID_BASE + idx
        item["item_id"] = _ITEM_ID_BASE + idx

    return {"family": "gathersanity", "locations": locations, "items": items, "constants": {}}


if __name__ == "__main__":
    data = extract()
    out_path = pathlib.Path(__file__).parent.parent / "content" / "gathersanity.yaml"
    with open(out_path, "w", encoding="utf-8") as f:
        f.write("# GENERATED FILE - do not hand-edit.\n")
        f.write(f"# Regenerate with: python tools/{pathlib.Path(__file__).name}\n")
        yaml.safe_dump(data, f, sort_keys=False, allow_unicode=True)
    print(f"Wrote {len(data['locations'])} gathersanity locations to {out_path}")
