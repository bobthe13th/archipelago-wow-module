#!/usr/bin/env python3
"""DB-driven extraction for the Quest Rewards content family (M4.5 Group 1).
Run this to regenerate content/quest_rewards.yaml; never hand-edit that file."""
from __future__ import annotations

import pathlib
from typing import Optional

import yaml

from db_extract import run_query, is_denylisted, load_exclusion_rules, parse_map_expansions

_LOCATION_ID_BASE = 1_000_000
_ITEM_ID_BASE = 1_750_000
# Location base fixed from the plan's original 750_000 (Task 6 finding, not
# present in Task 4's original code or the plan text): quest_template.ID
# values in the 10000-19999 range are common in this checkout's real data
# (confirmed: quest_id 10005-10043 alone produce 12 real collisions), and
# 750_000 + a quest_id in that range lands squarely inside fish.yaml's own
# 760000-760045 decade block, corrupting location_name_to_id with duplicate
# IDs pointing at two different location names (caught by
# Archipelago/test/general/test_ids.py::TestIDs::test_duplicate_location_ids,
# which failed for this exact reason before this fix). 1_000_000 is
# disjoint from every existing decade block (700000-789999) and from every
# other million-wide block this plan reserves (2M/2.5M/3M/3.5M/4M/4.5M for
# Groups 2-4) -- quest_template.ID would need to exceed 750,000 to collide
# with _ITEM_ID_BASE, which is far beyond any real or plausible WotLK quest
# ID.

_FIXED_REWARD_COLS = ["RewardItem1", "RewardItem2", "RewardItem3", "RewardItem4"]
_CHOICE_REWARD_COLS = [f"RewardChoiceItemID{i}" for i in range(1, 7)]

_FILLER_ITEM_ENTRY = 7073  # "Broken Fang" -- real, confirmed Quality-0 (Poor/grey)
                            # junk item in this checkout's item_template, reused from
                            # APTraps.cpp's ApplyGreyItemBagFill (same "designated real
                            # junk item" purpose) -- used as the wow_item_entry payload
                            # for quests with no real vanilla reward at all (M4.7.1.3),
                            # since there's no genuine reward item to represent instead.

_QUEST_INFO_ID_DUNGEON = 81  # QuestInfo.dbc id 81 == "Dungeon" -- confirmed by directly
                              # parsing the real QuestInfo.dbc string block (M4.8.0 planning),
                              # not quest_template.Type (a different, unrelated column: real
                              # values there are only 0/1/2, nothing resembling "81 = Dungeon").
_QUEST_FLAG_DAILY = 0x00001000   # QUEST_FLAGS_DAILY, from QuestDef.h
_QUEST_FLAG_WEEKLY = 0x00008000  # QUEST_FLAGS_WEEKLY, from QuestDef.h

# The 19 quest_ids formerly hand-authored in the now-retired content/quests.yaml
# (M1/M2 Northshire/Goldshire starting quests) -- each of these ALREADY produces
# its own ordinary quest_rewards row via the query below (confirmed against the
# live DB: all 19 have LogTitle != '' and already appear in quest_rewards.yaml
# today). Tagging them always_present here is the entire "migration" -- no new
# rows, no new ids, just an exemption flag on rows that already exist.
_ALWAYS_PRESENT_QUEST_IDS = frozenset({
    783, 3100, 3101, 3102, 3103, 3104, 3105, 5261,
    7, 33, 15, 18, 3903, 5623, 3904, 3905, 6, 21, 54,
})


def pick_representative_reward(row: dict) -> Optional[int]:
    """Exactly one reward item per quest, matching this codebase's 1:1
    location:item invariant -- prefer a fixed reward slot over a
    player-choice slot, and return None for a quest whose only reward is a
    spell grant with no item."""
    for col in _FIXED_REWARD_COLS:
        if int(row[col]) != 0:
            return int(row[col])
    for col in _CHOICE_REWARD_COLS:
        if int(row[col]) != 0:
            return int(row[col])
    return None


def _compute_quest_type_tags(quest_info_id: int, suggested_group_num: int, flags: int) -> list[str]:
    """M4.8's quest_reward_type_pools tag dimension (spec §1). A quest can
    carry more than one tag (e.g. a repeatable dungeon quest gets both
    dungeon_quest and repeatable); `standard` is the fallback ONLY when
    none of the other three apply, guaranteeing every quest gets at least
    one type tag (the "never zero tags" invariant `_validate_tags_rows`
    enforces at compile time)."""
    tags = []
    if quest_info_id == _QUEST_INFO_ID_DUNGEON:
        tags.append("dungeon_quest")
    if suggested_group_num > 0:
        tags.append("elite_quest")
    if flags & _QUEST_FLAG_DAILY or flags & _QUEST_FLAG_WEEKLY:
        tags.append("repeatable")
    if not tags:
        tags.append("standard")
    return tags


def _load_quest_expansions() -> dict[int, str]:
    """quest_id -> expansion ('vanilla'/'tbc'/'wotlk'), resolved from the
    quest's own quest-giver's real spawn map (creature_queststarter/
    gameobject_queststarter joined to creature.map/gameobject.map), via
    Map.dbc's real expansionID field (db_extract.parse_map_expansions) --
    NOT quest_template.QuestSortID (see this plan's Global Constraints for
    why that approach was rejected during planning). MIN(map) is the
    deterministic tie-break for the small fraction of quests whose
    queststarters span multiple maps (creature templates reused across
    different physical locations) -- confirmed against real data that this
    can change the resolved expansion (e.g. vanilla vs tbc), so a tie-break
    is required, not just defensive. Quest ids with NEITHER a creature nor
    a gameobject queststarter row (chain-offered/item-triggered quests) are
    simply absent from this dict; the caller defaults those to 'vanilla'."""
    map_expansions = parse_map_expansions()
    rows = run_query("""
        SELECT quest, MIN(map) FROM (
            SELECT cqs.quest AS quest, c.map AS map
            FROM creature_queststarter cqs
            JOIN creature c ON cqs.id = c.id
            UNION ALL
            SELECT gqs.quest AS quest, g.map AS map
            FROM gameobject_queststarter gqs
            JOIN gameobject g ON gqs.id = g.id
        ) combined
        GROUP BY quest
    """)
    return {int(quest_id): map_expansions.get(int(map_id), "vanilla") for quest_id, map_id in rows}


def extract() -> dict:
    rules = load_exclusion_rules()
    quest_expansions = _load_quest_expansions()
    rows = run_query("""
        SELECT q.ID, q.LogTitle, q.MinLevel, a.PrevQuestID,
               q.RewardItem1, q.RewardItem2, q.RewardItem3, q.RewardItem4,
               q.RewardChoiceItemID1, q.RewardChoiceItemID2, q.RewardChoiceItemID3,
               q.RewardChoiceItemID4, q.RewardChoiceItemID5, q.RewardChoiceItemID6,
               q.QuestInfoID, q.SuggestedGroupNum, q.Flags
        FROM quest_template q
        LEFT JOIN quest_template_addon a ON q.ID = a.ID
        WHERE q.LogTitle != ''
        ORDER BY q.ID
    """)

    locations, items = [], []
    for row in rows:
        (quest_id, title, min_level, prev_quest_id,
         ri1, ri2, ri3, ri4, rc1, rc2, rc3, rc4, rc5, rc6,
         quest_info_id, suggested_group_num, flags) = row
        if not title or is_denylisted(title, rules):
            continue

        row_dict = {
            "RewardItem1": ri1, "RewardItem2": ri2, "RewardItem3": ri3, "RewardItem4": ri4,
            "RewardChoiceItemID1": rc1, "RewardChoiceItemID2": rc2, "RewardChoiceItemID3": rc3,
            "RewardChoiceItemID4": rc4, "RewardChoiceItemID5": rc5, "RewardChoiceItemID6": rc6,
        }
        reward_item = pick_representative_reward(row_dict)
        # M4.7.1.3: a quest with NO real reward item (only a spell grant, or
        # genuinely nothing) used to be skipped entirely here. It's now a
        # real, first-class member of this family -- every quest deserves a
        # checkable location, not just the ones that happened to already
        # hand out an item. is_filler_reward marks the location distinctly
        # (present only on these rows; absent, not False, on every other
        # row) so a future consumer (e.g. an M4.8-style tag dimension) can
        # tell the two cases apart without re-deriving it from the item id.
        is_filler_reward = reward_item is None
        if is_filler_reward:
            reward_item = _FILLER_ITEM_ENTRY

        quest_id_int = int(quest_id)
        location_name = f"Quest: {title} Reward (#{quest_id_int})"
        item_name = f"Quest Reward: {title} (#{quest_id_int})"
        trigger = {
            "kind": "quest_reward",
            "quest_id": quest_id_int,
            "min_level": int(min_level),
            "prev_quest_id": int(prev_quest_id) if prev_quest_id not in (None, "", "0", "NULL") else None,
        }
        if is_filler_reward:
            trigger["is_filler_reward"] = True

        type_tags = _compute_quest_type_tags(int(quest_info_id), int(suggested_group_num), int(flags))
        expansion = quest_expansions.get(quest_id_int, "vanilla")

        loc_dict = {
            "name": location_name,
            "location_id": _LOCATION_ID_BASE + quest_id_int,
            "trigger": trigger,
            "tags": {"type": type_tags, "expansion": [expansion]},
        }
        if quest_id_int in _ALWAYS_PRESENT_QUEST_IDS:
            loc_dict["always_present"] = True
        locations.append(loc_dict)

        items.append({
            "name": item_name,
            "item_id": _ITEM_ID_BASE + quest_id_int,
            "delivery": {"kind": "mail", "wow_item_entry": reward_item},
        })

    return {"family": "quest_rewards", "locations": locations, "items": items, "constants": {}}


if __name__ == "__main__":
    data = extract()
    out_path = pathlib.Path(__file__).parent.parent / "content" / "quest_rewards.yaml"
    with open(out_path, "w", encoding="utf-8") as f:
        f.write("# GENERATED FILE - do not hand-edit.\n")
        f.write(f"# Regenerate with: python tools/{pathlib.Path(__file__).name}\n")
        yaml.safe_dump(data, f, sort_keys=False, allow_unicode=True)
    print(f"Wrote {len(data['locations'])} quest-reward locations to {out_path}")
