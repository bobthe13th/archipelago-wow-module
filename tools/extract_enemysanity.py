#!/usr/bin/env python3
"""DB-driven extraction for the Enemysanity content family (M4.10.3).
Run this to regenerate content/enemysanity.yaml; never hand-edit that file.
One location per real mob SPECIES (creature_template.entry with at least one
real spawn), no paired item -- the first locations-only family in this
project's _OPTIONAL_CATEGORIES registry (see the M4.10.3 plan's Global
Constraints for why that requires a matching items.py fix, Task 5)."""
from __future__ import annotations

import pathlib

import yaml

from db_extract import run_query, is_denylisted, load_exclusion_rules, parse_map_expansions

_LOCATION_ID_BASE = 10_500_000

# CreatureEliteType (SharedDefines.h:2962-2970): 0=Normal, 1=Elite,
# 2=RareElite, 3=WorldBoss, 4=Rare. Enemysanity's own "type" tag collapses
# this to a binary boss/regular per the design spec -- rank 4 (Rare)
# deliberately stays tagged "boss" here even though it overlaps with the
# separate, curated Rares/Key-Hunt family (see this plan's Global
# Constraints); it is real WoW rank data, not a distinction to fabricate
# around.
def _rank_to_type_tag(rank: int) -> str:
    return "regular" if rank == 0 else "boss"


def _expansion_tags_for_creature_entry(
    entry: int, entry_to_maps: dict[int, set[int]], map_expansions: dict[int, str]
) -> list[str]:
    """Every expansion where a real creature SPAWN exists for this species
    entry, across all three of a spawn row's possible template columns
    (id1/id2/id3 -- see Global Constraints). Falls back to ["vanilla"] for
    an entry with no real spawn row (should not occur in practice, since
    extract() only calls this for entries that already passed the "has a
    real spawn" join filter) -- same fallback convention
    extract_containersanity.py's _expansion_tags_for_loot_id established."""
    maps = entry_to_maps.get(entry)
    if not maps:
        return ["vanilla"]
    expansions = {map_expansions.get(map_id, "vanilla") for map_id in maps}
    return sorted(expansions)


def extract() -> dict:
    rules = load_exclusion_rules()
    map_expansions = parse_map_expansions()

    # DEVIATION from this plan's original Global Constraints text: that text
    # claimed `creature` has real `id1`/`id2`/`id3` columns per
    # data/sql/base/db_world/creature.sql:25-27. Live-checked against this
    # checkout's actual acore_world DB (`DESCRIBE creature`) during
    # implementation: this live DB's `creature` table has a single `id`
    # column only -- the id1/id2/id3-column schema in that base SQL file
    # does not match what is actually loaded here. Confirmed against the
    # real C++ loader too (CreatureData.h:372-374): `id` is "entry in
    # creature_template", while `id2`/`id3` are explicitly commented "from
    # creature_multispawn" -- a separate, real, populated join table
    # (`spawnId` -> creature.guid, `entry` -> creature_template.entry;
    # confirmed 1,020 real rows in this checkout, 17 of which reference a
    # species with NO `creature.id` spawn at all -- those 17 would be
    # silently dropped by an id-only join). "Has at least one real spawn"
    # is therefore: referenced by creature.id directly, OR referenced by
    # creature_multispawn.entry for some real spawn row.
    template_rows = run_query("""
        SELECT ct.entry, ct.name, ct.rank
        FROM creature_template ct
        WHERE EXISTS (SELECT 1 FROM creature c WHERE c.id = ct.entry)
           OR EXISTS (SELECT 1 FROM creature_multispawn cms WHERE cms.entry = ct.entry)
        ORDER BY ct.entry
    """)

    # Zone tagging: primary spawns (creature.id -> that spawn row's own
    # map) plus alternate-template spawns (creature_multispawn.entry,
    # joined back to its OWN spawn row's real map via
    # spawnId -> creature.guid -- the alternate template can be placed on a
    # different map than its spawn's primary id, so this must resolve the
    # multispawn row's actual spawn, not assume it matches the primary).
    primary_spawn_rows = run_query("SELECT id, map FROM creature")
    multispawn_rows = run_query("""
        SELECT cms.entry, c.map
        FROM creature_multispawn cms
        JOIN creature c ON c.guid = cms.spawnId
    """)
    entry_to_maps: dict[int, set[int]] = {}
    for entry_str, map_str in primary_spawn_rows:
        entry = int(entry_str)
        if entry != 0:
            entry_to_maps.setdefault(entry, set()).add(int(map_str))
    for entry_str, map_str in multispawn_rows:
        entry_to_maps.setdefault(int(entry_str), set()).add(int(map_str))

    locations: list[dict] = []
    for entry_str, name, rank_str in template_rows:
        entry, rank = int(entry_str), int(rank_str)
        if not name or is_denylisted(name, rules):
            continue

        idx = len(locations)
        expansions = _expansion_tags_for_creature_entry(entry, entry_to_maps, map_expansions)

        locations.append({
            "name": f"Enemy: {name} (#{entry})",
            "location_id": _LOCATION_ID_BASE + idx,
            "trigger": {"kind": "creature_kill", "creature_entry": entry},
            "tags": {"type": [_rank_to_type_tag(rank)], "expansion": expansions},
        })

    return {"family": "enemysanity", "locations": locations, "items": [], "constants": {}}


if __name__ == "__main__":
    data = extract()
    out_path = pathlib.Path(__file__).parent.parent / "content" / "enemysanity.yaml"
    with open(out_path, "w", encoding="utf-8") as f:
        f.write("# GENERATED FILE - do not hand-edit.\n")
        f.write(f"# Regenerate with: python tools/{pathlib.Path(__file__).name}\n")
        yaml.safe_dump(data, f, sort_keys=False, allow_unicode=True)
    print(f"Wrote {len(data['locations'])} enemysanity locations to {out_path}")
