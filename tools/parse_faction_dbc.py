"""Real Faction.dbc reader for Repsanity (M4.10.4), built on the shared
dbc_reader.py WDBC container parser. Unlike every other M4.10 family,
reputation data is DBC-sourced, not MySQL-sourced -- this checkout's
`faction_dbc` SQL mirror is confirmed empty (0 rows), the same "empty stub
schema" situation professions.yaml's own header comment already documented
for achievement_dbc/areatable_dbc -- so this reads the real binary file
directly instead of going through db_extract.py's mysql.exe path."""
from __future__ import annotations

import os
import struct
from dataclasses import dataclass

from dbc_reader import load_dbc

_DEFAULT_DBC_PATH = os.path.join(
    os.path.dirname(__file__), "..", "..", "..", "azerothcore-wotlk", "var", "extractors", "dbc", "Faction.dbc"
)

# ReputationMgr.cpp:28-30 (real, confirmed): index = ReputationRank (0=Hated..7=Exalted).
_POINTS_IN_RANK = [36000, 3000, 3000, 3000, 6000, 12000, 21000, 1000]
_REPUTATION_CAP = 42999
_REPUTATION_BOTTOM = -42000

RANK_NAMES = ["Hated", "Hostile", "Unfriendly", "Neutral", "Friendly", "Honored", "Revered", "Exalted"]

# Real faction ids confirmed live against this checkout's Faction.dbc during
# planning, hand-curated against real WoW reputation knowledge to exclude the
# mechanical false positives every opposing-team home-city/warfront faction
# pair produces (see this milestone's plan doc, "Real corrections" section,
# for the full false-positive list and why each is excluded).
NEGATIVE_CAPABLE_FACTION_IDS = frozenset({
    87,    # Bloodsail Buccaneers
    70,    # Syndicate
    576,   # Timbermaw Hold
    910,   # Brood of Nozdormu
    970,   # Sporeggar
    978,   # Kurenai
    941,   # The Mag'har
    1015,  # Netherwing
    589,   # Wintersaber Trainers
    932,   # The Aldor
    934,   # The Scryers
    1119,  # The Sons of Hodir
})


def reputation_to_rank(standing: int) -> int:
    """Mirrors ReputationMgr::ReputationToRank exactly (ReputationMgr.cpp:32-42)."""
    limit = _REPUTATION_CAP + 1
    for rank in range(7, -1, -1):
        limit -= _POINTS_IN_RANK[rank]
        if standing >= limit:
            return rank
    return 0


@dataclass(frozen=True)
class FactionRepInfo:
    faction_id: int
    name: str
    starting_rank: int  # real ReputationToRank(BaseRepValue) for this faction's default bucket


def load_reputation_factions(dbc_path: str | None = None) -> list[FactionRepInfo]:
    """Every real Faction.dbc row with reputationListID >= 0 (CanHaveReputation(),
    FactionEntry.h's own helper) -- i.e. every faction the client's reputation
    pane can ever show. starting_rank is computed from BaseRepValue's bucket 0
    (the default/all-races bucket); factions whose real starting standing
    genuinely differs per player race (the curated NEGATIVE_CAPABLE set) are
    corrected below via reputation_to_rank on their real negative value."""
    path = dbc_path or os.environ.get("ARCHIPELAGO_WOW_FACTION_DBC_PATH", _DEFAULT_DBC_PATH)
    dbc = load_dbc(path)

    results: list[FactionRepInfo] = []
    for i in range(dbc.record_count):
        rec = dbc.record_bytes(i)
        faction_id = struct.unpack_from("<I", rec, 0)[0]
        reputation_list_id = struct.unpack_from("<i", rec, 4)[0]
        if reputation_list_id < 0:
            continue
        base_rep_value = struct.unpack_from("<4i", rec, 40)[0]  # bucket 0
        name_offset = struct.unpack_from("<I", rec, 23 * 4)[0]
        name = dbc.read_string(name_offset)

        starting_rank = 3  # Neutral, the safe default for every non-curated faction
        if faction_id in NEGATIVE_CAPABLE_FACTION_IDS:
            starting_rank = reputation_to_rank(base_rep_value if base_rep_value < 0 else _REPUTATION_BOTTOM)

        results.append(FactionRepInfo(faction_id=faction_id, name=name, starting_rank=starting_rank))
    return results
