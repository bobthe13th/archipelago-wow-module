#!/usr/bin/env python3
"""DBC-driven extraction for the Achievement Hunt / Explorer content family
(M4.9 Sec4). Run this to regenerate content/achievements.yaml; never
hand-edit that file. Pure DBC parse -- unlike every other extraction script
in this directory, this one needs NO acore_world SQL query at all."""
from __future__ import annotations

import pathlib

import yaml

from db_extract import parse_achievements, parse_achievement_categories

_LOCATION_ID_BASE = 3_600_000
_ITEM_ID_BASE = 3_800_000

_ACHIEVEMENT_FLAG_COUNTER = 0x00000001  # AchievementFlags, DBCEnums.h -- "just count
                                          # statistic, never stop and complete" -- confirmed
                                          # via AchievementMgr.cpp's CompletedAchievement()
                                          # that a counter-flagged row NEVER fires
                                          # OnPlayerAchievementComplete at all.
_FEATS_OF_STRENGTH_CATEGORY_ID = 81  # Achievement_Category.dbc's real root id for
                                       # "Feats of Strength" (spec Sec4: excluded by
                                       # default -- typically require other achievements
                                       # as prerequisites, redundant location checks).

WORLD_EXPLORER_ACHIEVEMENT_ID = 46  # Confirmed via a real Achievement.dbc lookup during
                                      # M4.9 planning -- see this plan's Global Constraints
                                      # for the exact method (searched every populated
                                      # name-locale slot of all 1,817 real rows).

# Achievement.dbc's real category ROOT ids (db_extract.parse_achievement_categories
# resolves any leaf category up to one of these) -> the M4.9 spec's six named
# thematic subsets (Sec4). Roots that exist in the real data but are NOT one of the
# spec's six (Statistics=1 -- always excluded by the counter-flag rule above;
# Feats of Strength=81 -- always excluded by the FoS rule above; General=92,
# Quests=96, World Events=155) simply produce no "subset" trigger key at all --
# still real 100%/99% pool members, just not grouped under any named subset,
# matching the spec's own "which categories map to which named subset is a
# curation choice" license.
_ROOT_CATEGORY_TO_SUBSET = {
    97: "explorer",      # Exploration
    169: "professions",  # Professions
    201: "reputation",   # Reputation
    95: "pvp",           # Player vs. Player
}
# Dungeons & Raids (root 168) is the one root the spec splits into TWO named
# subsets (Dungeons, Raids) instead of one -- a curation choice made here by the
# leaf category's own real name: any leaf whose name contains "Raid" is a real
# raid subcategory (Lich King/Secrets of Ulduar/Call of the Crusade/Fall of the
# Lich King 10- and 25-Player Raid); everything else under this root (Classic,
# The Burning Crusade, Lich King Dungeon, Lich King Heroic, and rows categorized
# directly under the bare root with no leaf) is a dungeon subcategory. Confirmed
# against every one of the 460 real Dungeons & Raids achievements in this
# checkout during M4.9 planning: 286 real "Raid" name matches, 174 real
# non-matches.
_DUNGEONS_AND_RAIDS_ROOT = 168


def _dungeons_or_raids(category_name: str) -> str:
    # NOTE: deliberately category_name.endswith("Raid"), not the substring
    # check "Raid" in category_name -- the real Achievement_Category.dbc root
    # row itself (category_id 168) is OWN-named "Dungeons & Raids" (plural),
    # which a naive substring check would also match, misclassifying every
    # achievement categorized directly under the bare root (no leaf) as a
    # raid. Every real raid LEAF name (e.g. "Lich King 10-Player Raid",
    # "Secrets of Ulduar 25-Player Raid") ends with the singular "Raid" with
    # no trailing "s", which the plural root name does not -- confirmed
    # against this checkout's real 460-achievement Dungeons & Raids root
    # during M4.9 planning (see this plan's Global Constraints: 286 real
    # "Raid"-suffixed leaf matches, 174 real non-matches, including the 27
    # rows categorized directly under the bare root).
    return "raids" if category_name.endswith("Raid") else "dungeons"


def _load_extremely_hard_ids() -> set[int]:
    path = pathlib.Path(__file__).parent / "achievement_hunt_extremely_hard.yaml"
    with open(path, "r", encoding="utf-8") as f:
        data = yaml.safe_load(f)
    return set(data["extremely_hard_achievement_ids"])


def extract() -> dict:
    achievements = parse_achievements()
    categories = parse_achievement_categories()
    extremely_hard_ids = _load_extremely_hard_ids()

    locations, items = [], []
    seen_world_explorer = False
    for row in achievements:
        aid = row["id"]
        flags = row["flags"]
        category_id = row["category_id"]

        if flags & _ACHIEVEMENT_FLAG_COUNTER:
            # Never fires OnPlayerAchievementComplete at all -- see this
            # module's own header comment. A correctness exclusion, not a
            # curation choice: including it would be a permanently
            # unreachable location check.
            continue
        if category_id == _FEATS_OF_STRENGTH_CATEGORY_ID:
            continue

        root_category_id, category_name = categories.get(category_id, (category_id, ""))
        if root_category_id == _DUNGEONS_AND_RAIDS_ROOT:
            subset = _dungeons_or_raids(category_name)
        else:
            subset = _ROOT_CATEGORY_TO_SUBSET.get(root_category_id)

        title = row["name"]
        location_name = f"Achievement: {title} (#{aid})"
        item_name = f"Achievement Complete: {title} (#{aid})"
        trigger = {
            "kind": "achievement_complete",
            "achievement_id": aid,
            "category_id": category_id,
        }
        if subset:
            trigger["subset"] = subset
        if aid in extremely_hard_ids:
            trigger["extremely_hard"] = True
        if aid == WORLD_EXPLORER_ACHIEVEMENT_ID:
            seen_world_explorer = True

        locations.append({
            "name": location_name,
            "location_id": _LOCATION_ID_BASE + aid,
            "trigger": trigger,
        })
        items.append({
            "name": item_name,
            "item_id": _ITEM_ID_BASE + aid,
            "delivery": {"kind": "realm_state", "effect": "record_achievement", "achievement_id": aid},
        })

    if not seen_world_explorer:
        raise RuntimeError(
            f"extract_achievements: World Explorer (id {WORLD_EXPLORER_ACHIEVEMENT_ID}) was "
            f"excluded by the counter-flag/Feats-of-Strength filter -- this should never happen "
            f"(confirmed real: id 46, categoryId 97/Exploration, flags 0); check whether "
            f"Achievement.dbc itself has changed in this checkout"
        )

    surviving_ids = {loc["trigger"]["achievement_id"] for loc in locations}
    stale_hard_ids = extremely_hard_ids - surviving_ids
    if stale_hard_ids:
        print(f"WARNING: achievement_hunt_extremely_hard.yaml lists {len(stale_hard_ids)} id(s) "
              f"not in the surviving 100% pool (already excluded by the counter-flag/Feats-of-"
              f"Strength rule, or a stale id): {sorted(stale_hard_ids)}")

    return {
        "family": "achievements",
        "locations": locations,
        "items": items,
        "constants": {"WORLD_EXPLORER_ACHIEVEMENT_ID": WORLD_EXPLORER_ACHIEVEMENT_ID},
    }


if __name__ == "__main__":
    data = extract()
    out_path = pathlib.Path(__file__).parent.parent / "content" / "achievements.yaml"
    with open(out_path, "w", encoding="utf-8") as f:
        f.write("# GENERATED FILE - do not hand-edit.\n")
        f.write(f"# Regenerate with: python tools/{pathlib.Path(__file__).name}\n")
        yaml.safe_dump(data, f, sort_keys=False, allow_unicode=True)
    print(f"Wrote {len(data['locations'])} achievement locations to {out_path}")
