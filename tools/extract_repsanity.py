"""DB/DBC-driven extraction for the Repsanity content family (M4.10.4). Run
this to regenerate content/repsanity.yaml; never hand-edit that file. First
M4.10 family with no items at all -- a reputation-rank crossing has no
real-world lootable slot to shuffle."""
from __future__ import annotations

import pathlib

import yaml

from parse_faction_dbc import RANK_NAMES, load_reputation_factions

_LOCATION_ID_BASE = 11_000_000

# Hand-curated against real WoW knowledge -- see this milestone's plan doc's
# "Real corrections" section for the full reasoning and false-positive list
# this excludes (opposing-team home cities, dual-track warfront pairs, etc).
_TBC_FACTIONS = frozenset({
    "The Aldor", "The Scryers", "Sha'tar", "Cenarion Expedition", "Ashtongue Deathsworn",
    "Netherwing", "Ogri'la", "Sporeggar", "Kurenai", "The Mag'har", "Honor Hold",
    "Thrallmar", "Shattered Sun Offensive", "Lower City", "Keepers of Time",
})
_WOTLK_FACTIONS = frozenset({
    "Kirin Tor", "The Wyrmrest Accord", "Argent Crusade", "Knights of the Ebon Blade",
    "The Kalu'ak", "The Oracles", "The Sons of Hodir", "Frenzyheart Tribe", "The Taunka",
    "The Silver Covenant", "The Sunreavers", "Explorers' League", "The Frostborn",
    "Alliance Vanguard", "Horde Expedition", "Valiance Expedition",
})


def expansion_tag_for_faction(name: str) -> str:
    """Hand-curated set for the two later expansions' well-known factions;
    every other real reputation-tracking faction defaults to vanilla (the
    same lowest-risk-default convention extract_containersanity.py's own
    _expansion_tags_for_loot_id already established). If Task 2 turns up a
    real TBC/WotLK faction missing from these two sets when run against the
    live 105-row roster, extend them -- do not silently leave it tagged
    vanilla."""
    if name in _TBC_FACTIONS:
        return "tbc"
    if name in _WOTLK_FACTIONS:
        return "wotlk"
    return "vanilla"


def extract() -> dict:
    factions = load_reputation_factions()
    locations: list[dict] = []
    next_id = _LOCATION_ID_BASE

    for faction in factions:
        expansion = expansion_tag_for_faction(faction.name)
        for rank in range(faction.starting_rank + 1, 8):  # every rank strictly above its own starting rank
            rank_name = RANK_NAMES[rank]
            rank_tier = "negative" if rank <= 2 else "standard"  # Hated/Hostile/Unfriendly vs Neutral+
            locations.append({
                "name": f"Reputation: {faction.name} ({rank_name})",
                "location_id": next_id,
                "trigger": {"kind": "reputation_rank", "faction_id": faction.faction_id, "rank": rank},
                "tags": {"expansion": [expansion], "rank_tier": [rank_tier]},
            })
            next_id += 1

    return {"family": "repsanity", "locations": locations}


if __name__ == "__main__":
    data = extract()
    out_path = pathlib.Path(__file__).parent.parent / "content" / "repsanity.yaml"
    with out_path.open("w", encoding="utf-8") as handle:
        handle.write("# GENERATED FILE - do not hand-edit.\n")
        handle.write("# Regenerate with: python tools/extract_repsanity.py\n")
        yaml.dump(data, handle, sort_keys=False, allow_unicode=True)
    print(f"wrote {len(data['locations'])} locations to {out_path}")
