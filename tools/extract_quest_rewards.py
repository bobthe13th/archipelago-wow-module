#!/usr/bin/env python3
"""DB-driven extraction for the Quest Rewards content family (M4.5 Group 1).
Run this to regenerate content/quest_rewards.yaml; never hand-edit that file."""
from __future__ import annotations

import pathlib
from typing import Optional

import yaml

from db_extract import run_query, is_denylisted, load_exclusion_rules

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


def pick_representative_reward(row: dict) -> Optional[int]:
    """Exactly one reward item per quest, matching this codebase's 1:1
    location:item invariant (see the M4.5 plan's Repo-state findings #4) --
    prefer a fixed reward slot over a player-choice slot (a fixed reward is
    unconditionally granted; a choice slot is merely offered), and return
    None for a quest whose only reward is a spell grant with no item
    (excluded from this family in this pass -- no wow_item_entry to mail)."""
    for col in _FIXED_REWARD_COLS:
        if int(row[col]) != 0:
            return int(row[col])
    for col in _CHOICE_REWARD_COLS:
        if int(row[col]) != 0:
            return int(row[col])
    return None


def extract() -> dict:
    rules = load_exclusion_rules()
    rows = run_query("""
        SELECT q.ID, q.LogTitle, q.MinLevel, a.PrevQuestID,
               q.RewardItem1, q.RewardItem2, q.RewardItem3, q.RewardItem4,
               q.RewardChoiceItemID1, q.RewardChoiceItemID2, q.RewardChoiceItemID3,
               q.RewardChoiceItemID4, q.RewardChoiceItemID5, q.RewardChoiceItemID6
        FROM quest_template q
        LEFT JOIN quest_template_addon a ON q.ID = a.ID
        WHERE q.LogTitle != ''
        ORDER BY q.ID
    """)

    locations, items = [], []
    for row in rows:
        (quest_id, title, min_level, prev_quest_id,
         ri1, ri2, ri3, ri4, rc1, rc2, rc3, rc4, rc5, rc6) = row
        row_dict = {
            "RewardItem1": ri1, "RewardItem2": ri2, "RewardItem3": ri3, "RewardItem4": ri4,
            "RewardChoiceItemID1": rc1, "RewardChoiceItemID2": rc2, "RewardChoiceItemID3": rc3,
            "RewardChoiceItemID4": rc4, "RewardChoiceItemID5": rc5, "RewardChoiceItemID6": rc6,
        }
        reward_item = pick_representative_reward(row_dict)
        if reward_item is None:
            continue
        if not title or is_denylisted(title, rules):
            continue

        quest_id_int = int(quest_id)
        location_name = f"Quest: {title} Reward (#{quest_id_int})"
        item_name = f"Quest Reward: {title} (#{quest_id_int})"
        locations.append({
            "name": location_name,
            "location_id": _LOCATION_ID_BASE + quest_id_int,
            "trigger": {
                "kind": "quest_reward",
                "quest_id": quest_id_int,
                "min_level": int(min_level),
                "prev_quest_id": int(prev_quest_id) if prev_quest_id not in (None, "", "0", "NULL") else None,
            },
        })
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
