"""DB/DBC-driven extraction for the Repsanity content family (M4.10.4). Run
this to regenerate content/repsanity.yaml; never hand-edit that file. First
M4.10 family with no items at all -- a reputation-rank crossing has no
real-world lootable slot to shuffle."""
from __future__ import annotations

import pathlib

import yaml

from db_extract import is_denylisted, load_exclusion_rules
from parse_faction_dbc import RANK_NAMES, load_reputation_factions

_LOCATION_ID_BASE = 11_000_000

# Final whole-branch review fix (I1, M4.10.4): these 3 names are real
# DBC/quest-log junk for Repsanity specifically, but each is ALSO a real,
# legitimate, already-shipped name elsewhere in the same shared
# exclusion_rules.yaml denylist's OTHER consumers -- adding them there would
# silently delete real content from unrelated families the next time they
# regenerate. Verified live against every table/DBC source is_denylisted is
# ever checked against (item_template.name, creature_template.name,
# quest_template.LogTitle, gameobject_template.name, Spell.dbc SpellName)
# before choosing this local-only approach over the shared file:
#   - "Wrath of the Lich King": quest_template.LogTitle ids 24500/24802 are
#     real, already-shipped rows in content/quest_rewards.yaml (4 real
#     locations); Spell.dbc ids 43488/50156 are real spells too.
#   - "Sholazar Basin": Spell.dbc id 67835 is a real spell (the zone's
#     exploration/discovery buff).
#   - "REUSE": quest_template.LogTitle matches 20 real quest rows, already
#     36 real, already-shipped locations in content/quest_rewards.yaml;
#     Spell.dbc matches 6 real spells too.
_LOCAL_DENYLIST = frozenset({
    "Wrath of the Lich King",
    "Sholazar Basin",
    "REUSE",
})

# Hand-curated against real WoW knowledge -- see this milestone's plan doc's
# "Real corrections" section for the full reasoning and false-positive list
# this excludes (opposing-team home cities, dual-track warfront pairs, etc).
# Audited against the full real live 105-row Faction.dbc roster during the
# M4.10.4 final whole-branch review (finding I3): "Sha'tar" was a typo for
# the real DBC name "The Sha'tar" (never matched anything before this fix);
# "The Consortium", "Shattrath City", "The Violet Eye", "The Scale of the
# Sands", "Sha'tari Skyguard", "Tranquillien", "Silvermoon City", and
# "Exodar" were real TBC-introduced factions missing from this set entirely
# (the last two are the two new-playable-race capital-city reputation
# factions TBC introduced -- Blood Elf/Silvermoon and Draenei/Exodar).
_TBC_FACTIONS = frozenset({
    "The Aldor", "The Scryers", "The Sha'tar", "Cenarion Expedition", "Ashtongue Deathsworn",
    "Netherwing", "Ogri'la", "Sporeggar", "Kurenai", "The Mag'har", "Honor Hold",
    "Thrallmar", "Shattered Sun Offensive", "Lower City", "Keepers of Time",
    "The Consortium", "Shattrath City", "The Violet Eye", "The Scale of the Sands",
    "Sha'tari Skyguard", "Tranquillien", "Silvermoon City", "Exodar",
})
# Audited against the full real live 105-row Faction.dbc roster during the
# M4.10.4 final whole-branch review (finding I3): "The Hand of Vengeance"
# (Horde Death Knight starting-zone faction), "Warsong Offensive" (Horde
# Borean Tundra faction), and "The Ashen Verdict" (Icecrown Citadel faction)
# were real WotLK-introduced factions missing from this set entirely.
_WOTLK_FACTIONS = frozenset({
    "Kirin Tor", "The Wyrmrest Accord", "Argent Crusade", "Knights of the Ebon Blade",
    "The Kalu'ak", "The Oracles", "The Sons of Hodir", "Frenzyheart Tribe", "The Taunka",
    "The Silver Covenant", "The Sunreavers", "Explorers' League", "The Frostborn",
    "Alliance Vanguard", "Horde Expedition", "Valiance Expedition",
    "The Hand of Vengeance", "Warsong Offensive", "The Ashen Verdict",
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
    rules = load_exclusion_rules()
    factions = load_reputation_factions()
    locations: list[dict] = []
    next_id = _LOCATION_ID_BASE

    for faction in factions:
        # .strip() is defense-in-depth hygiene (final whole-branch review
        # fix I1): the real DBC has at least 10 rows with a leading space
        # (the profession-specialization pseudo-factions, e.g. "
        # Blacksmithing - Armorsmithing"), which the denylist patterns below
        # already match and exclude regardless -- this strip just guards
        # against any OTHER stray whitespace a denylist pattern doesn't
        # happen to catch, so a real faction name is never rendered with a
        # double space.
        name = faction.name.strip()
        if not name or is_denylisted(name, rules) or name in _LOCAL_DENYLIST:
            continue
        expansion = expansion_tag_for_faction(name)
        for rank in range(faction.starting_rank + 1, 8):  # every rank strictly above its own starting rank
            rank_name = RANK_NAMES[rank]
            rank_tier = "negative" if rank <= 2 else "standard"  # Hated/Hostile/Unfriendly vs Neutral+
            locations.append({
                "name": f"Reputation: {name} ({rank_name})",
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
