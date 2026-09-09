"""Real zone id -> enUS name data from AreaTable.dbc, for M4.14.2's curated
zone_access gate family. Field layout empirically verified live against 8
known real zones (see this plan's Global Constraints) -- field 0 = ID,
field 2 = zone (0 means this row IS a top-level zone), field 11 = area_name
enUS string-block offset."""
from __future__ import annotations

import os

from dbc_reader import load_dbc

_DEFAULT_DBC_PATH = os.path.join(
    os.path.dirname(__file__), "..", "..", "..", "var", "extractors", "dbc", "AreaTable.dbc"
)

_ID_FIELD = 0
_ZONE_FIELD = 2
_NAME_FIELD = 11

# Hand-curated, real zone ids -- verified live against this checkout's actual
# AreaTable.dbc during planning, not a mechanical filter (see this plan's
# Global Constraints for why each was chosen and what was deliberately
# excluded). Re-verify this dict against load_zone_names() if AreaTable.dbc
# ever changes, per test_real_top_level_zone_count_matches_this_checkout.
CURATED_ZONE_IDS: dict[str, int] = {
    "shattrath_city": 3703,
    "isle_of_quel_danas": 4080,
    "dalaran": 4395,
}


def load_zone_names(dbc_path: str | None = None) -> dict[int, str]:
    """Every real top-level zone id (zone field == 0) -> its enUS name."""
    path = dbc_path or os.environ.get("ARCHIPELAGO_WOW_AREATABLE_DBC_PATH", _DEFAULT_DBC_PATH)
    dbc = load_dbc(path)

    names: dict[int, str] = {}
    for i in range(dbc.record_count):
        fields = dbc.record_fields_u32(i)
        if fields[_ZONE_FIELD] != 0:
            continue  # sub-area, not a top-level zone
        zone_id = fields[_ID_FIELD]
        names[zone_id] = dbc.read_string(fields[_NAME_FIELD])
    return names
