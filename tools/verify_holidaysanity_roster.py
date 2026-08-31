#!/usr/bin/env python3
"""Roster-curation freshness check for Holidaysanity (M4.10.7, design spec
§8a/§9). NOT part of the generate_content.py compiler pipeline -- this data
is hand-curated (see content/holidaysanity.yaml's header comment), so this
script is a manually-run auditor, not a regenerator: it reports mismatches
between the roster transcribed below and live game_event data, it does not
rewrite anything. Re-run this before hand-editing content/holidaysanity.yaml
if the underlying game_event SQL dump has changed since this plan was
written."""
from __future__ import annotations

from db_extract import run_query

# Transcribed from ArchipelagoHolidayRoster.h -- kept in sync by hand (see
# that header's own comment). event_ids intentionally include the merged
# Darkmoon Faire (3 rotating instances) and Scourge Invasion (master + 11
# zone/milestone sub-events) groups as single roster rows, matching how
# they're merged into one AP flag/item each.
ROSTER = [
    {"flag_key": "holiday_midsummer", "display_name": "Midsummer Fire Festival", "event_ids": [1]},
    {"flag_key": "holiday_hallows_end", "display_name": "Hallow's End", "event_ids": [12]},
    {"flag_key": "holiday_lunar_festival", "display_name": "Lunar Festival", "event_ids": [7]},
    {"flag_key": "holiday_love_is_in_the_air", "display_name": "Love is in the Air", "event_ids": [8]},
    {"flag_key": "holiday_childrens_week", "display_name": "Children's Week", "event_ids": [10]},
    {"flag_key": "holiday_brewfest", "display_name": "Brewfest", "event_ids": [24]},
    {"flag_key": "holiday_pilgrims_bounty", "display_name": "Pilgrim's Bounty", "event_ids": [26]},
    {"flag_key": "holiday_winter_veil", "display_name": "Winter Veil", "event_ids": [2, 52]},
    {"flag_key": "holiday_day_of_the_dead", "display_name": "Day of the Dead", "event_ids": [51]},
    {"flag_key": "holiday_noblegarden", "display_name": "Noblegarden", "event_ids": [9]},
    {"flag_key": "holiday_harvest_festival", "display_name": "Harvest Festival", "event_ids": [11]},
    {"flag_key": "holiday_new_years_eve", "display_name": "New Year's Eve", "event_ids": [6]},
    {"flag_key": "holiday_darkmoon_faire", "display_name": "Darkmoon Faire", "event_ids": [3, 4, 5]},
    {
        "flag_key": "holiday_scourge_invasion",
        "display_name": "Scourge Invasion",
        "event_ids": [17, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130],
    },
]


def verify(only_flag_key: str | None = None) -> list[str]:
    """Returns a list of human-readable mismatch strings; empty means every
    curated event id still exists in game_event with a name we'd recognize
    as belonging to that holiday (a loose substring check, since real
    game_event names sometimes carry extra qualifiers the curated
    display_name doesn't, e.g. sub-event names for Scourge Invasion's 11
    zone entries legitimately differ from "Scourge Invasion" itself --
    those are checked only for EXISTENCE, not name match, since this
    roster's own display_name intentionally names the merged GROUP, not
    each individual sub-event)."""
    mismatches: list[str] = []
    for entry in ROSTER:
        if only_flag_key is not None and entry["flag_key"] != only_flag_key:
            continue
        is_merged_subgroup = len(entry["event_ids"]) > 1
        for event_id in entry["event_ids"]:
            rows = run_query(f"SELECT eventEntry, description FROM game_event WHERE eventEntry = {event_id}")
            if not rows:
                mismatches.append(f"{entry['flag_key']}: event id {event_id} no longer exists in game_event")
                continue
            if is_merged_subgroup:
                continue  # existence only, per this function's own docstring
            _, description = rows[0]
            if entry["display_name"].lower() not in (description or "").lower():
                mismatches.append(
                    f"{entry['flag_key']}: name mismatch -- roster says "
                    f"{entry['display_name']!r}, live game_event.description is {description!r}"
                )
    return mismatches


if __name__ == "__main__":
    found = verify()
    if not found:
        print("Holidaysanity roster matches live game_event data -- no mismatches.")
    else:
        print(f"{len(found)} mismatch(es) found:")
        for line in found:
            print(f"  - {line}")
