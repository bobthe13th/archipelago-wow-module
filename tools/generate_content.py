#!/usr/bin/env python3
# azerothcore-wotlk/modules/archipelago_wow/tools/generate_content.py
"""
Generates ArchipelagoContentTable.h and content_data.py from the live
acore_world database. Run manually by a developer whenever the curated
Northshire/Goldshire quest set changes -- NOT part of the build.

Usage:
    python generate_content.py --host 127.0.0.1 --port 3306 --user acore --password acore --database acore_world
"""
import argparse

import pymysql  # pip install pymysql

# Curated, hand-picked quest IDs: the Northshire Abbey / Goldshire human
# starting-quest line, confirmed live against acore_world during M2 planning.
QUEST_IDS = [
    783, 3100, 3101, 3102, 3103, 3104, 3105, 5261, 7, 33,
    15, 18, 3903, 5623, 3904, 3905, 6, 21, 54,
]

# Curated item pool: common/uncommon starter-appropriate items, independent of
# quest rewards (most of the quests above pay money/XP only, not items -- see
# plan's Global Constraints on why M2 doesn't touch quest reward tables).
ITEM_QUERY = """
    SELECT entry, name FROM item_template
    WHERE Quality IN (1, 2) AND ItemLevel BETWEEN 1 AND 15
      AND `class` IN (2, 4) -- Weapon, Armor
      AND RequiredLevel <= 10
      AND (Flags & 16) = 0 -- exclude ITEM_FLAG_DEPRECATED (legacy duplicate rows)
    ORDER BY entry
    LIMIT 19
"""


def fetch_quests(cursor):
    fmt_ids = ",".join(str(q) for q in QUEST_IDS)
    cursor.execute(f"SELECT ID, LogTitle FROM quest_template WHERE ID IN ({fmt_ids})")
    rows = {row[0]: row[1] for row in cursor.fetchall()}
    # preserve QUEST_IDS order, fail loudly if the live DB is missing one
    missing = [q for q in QUEST_IDS if q not in rows]
    if missing:
        raise SystemExit(f"quest_template is missing curated quest ids: {missing}")
    return [(q, rows[q]) for q in QUEST_IDS]


def fetch_items(cursor):
    cursor.execute(ITEM_QUERY)
    rows = cursor.fetchall()
    if len(rows) < len(QUEST_IDS):
        raise SystemExit(
            f"item_template query returned {len(rows)} items, need {len(QUEST_IDS)} "
            "(one per location for M2's simple 1:1 fill) -- widen ITEM_QUERY's filters"
        )
    return rows[: len(QUEST_IDS)]


def write_cpp_header(path, quests, items):
    lines = [
        "// GENERATED FILE - do not edit by hand.",
        "// Regenerate with: python modules/archipelago_wow/tools/generate_content.py",
        "#pragma once",
        "",
        "#include <cstdint>",
        "#include <unordered_map>",
        "",
        "namespace Archipelago::Content",
        "{",
        "    inline std::unordered_map<uint32_t, int64_t> const QuestIdToLocationId = {",
    ]
    for i, (quest_id, title) in enumerate(quests):
        ap_location_id = 700000 + i  # arbitrary stable base, must match content_data.py
        lines.append(f'        {{ {quest_id}, {ap_location_id} }}, // {title}')
    lines.append("    };")
    lines.append("")
    lines.append("    inline std::unordered_map<int64_t, uint32_t> const LocationIdToQuestId = {")
    for i, (quest_id, title) in enumerate(quests):
        ap_location_id = 700000 + i
        lines.append(f'        {{ {ap_location_id}, {quest_id} }}, // {title}')
    lines.append("    };")
    lines.append("")
    lines.append("    inline std::unordered_map<int64_t, uint32_t> const ApItemIdToWowItemEntry = {")
    for i, (entry, name) in enumerate(items):
        ap_item_id = 800000 + i  # arbitrary stable base, must match content_data.py
        safe_name = name.replace("\\", "\\\\").replace('"', '\\"')
        lines.append(f'        {{ {ap_item_id}, {entry} }}, // "{safe_name}"')
    lines.append("    };")
    lines.append("}")
    lines.append("")

    with open(path, "w", newline="\n") as f:
        f.write("\n".join(lines))


def write_python_data(path, quests, items):
    lines = [
        "# GENERATED FILE - do not edit by hand.",
        "# Regenerate with: python modules/archipelago_wow/tools/generate_content.py",
        "",
        "LOCATIONS: dict[str, int] = {",
    ]
    for i, (quest_id, title) in enumerate(quests):
        ap_location_id = 700000 + i
        lines.append(f'    "{title}": {ap_location_id},')
    lines.append("}")
    lines.append("")
    lines.append("ITEMS: dict[str, int] = {")
    for i, (entry, name) in enumerate(items):
        ap_item_id = 800000 + i
        lines.append(f'    "{name}": {ap_item_id},')
    lines.append("}")
    lines.append("")

    with open(path, "w", newline="\n") as f:
        f.write("\n".join(lines))


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--host", default="127.0.0.1")
    parser.add_argument("--port", type=int, default=3306)
    parser.add_argument("--user", default="acore")
    parser.add_argument("--password", default="acore")
    parser.add_argument("--database", default="acore_world")
    args = parser.parse_args()

    conn = pymysql.connect(host=args.host, port=args.port, user=args.user,
                            password=args.password, database=args.database)
    try:
        with conn.cursor() as cursor:
            quests = fetch_quests(cursor)
            items = fetch_items(cursor)
    finally:
        conn.close()

    write_cpp_header("../src/ArchipelagoContentTable.h", quests, items)
    write_python_data("../../../../Archipelago/worlds/wow/content_data.py", quests, items)

    print(f"Wrote {len(quests)} locations and {len(items)} items.")


if __name__ == "__main__":
    main()
