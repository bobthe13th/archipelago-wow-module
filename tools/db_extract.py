#!/usr/bin/env python3
"""Shared helpers for the content-extraction scripts in Group 1-4 of
docs/superpowers/plans/2026-08-21-archipelago-wow-m4.5-content-compiler-breadth.md.
Build-time only -- never imported by the apworld itself (see that plan's
Global Constraints)."""
from __future__ import annotations

import os
import pathlib
import re
import struct
import subprocess

DEFAULT_RULES_PATH = pathlib.Path(__file__).parent / "exclusion_rules.yaml"

_MYSQL_EXE = os.environ.get(
    "ARCHIPELAGO_WOW_MYSQL_EXE",
    "C:/Program Files/MySQL/MySQL Server 8.4/bin/mysql.exe",
)
_MYSQL_HOST = os.environ.get("ARCHIPELAGO_WOW_DB_HOST", "127.0.0.1")
_MYSQL_PORT = os.environ.get("ARCHIPELAGO_WOW_DB_PORT", "3306")
_MYSQL_USER = os.environ.get("ARCHIPELAGO_WOW_DB_USER", "acore")
_MYSQL_PASSWORD = os.environ.get("ARCHIPELAGO_WOW_DB_PASSWORD", "acore")
_MYSQL_DB = os.environ.get("ARCHIPELAGO_WOW_DB_NAME", "acore_world")

_MAP_DBC_PATH = pathlib.Path(__file__).parent.parent.parent.parent / "var" / "extractors" / "dbc" / "Map.dbc"
_MAP_EXPANSION_NAMES = {0: "vanilla", 1: "tbc", 2: "wotlk"}


def parse_map_expansions(dbc_path: pathlib.Path = _MAP_DBC_PATH) -> dict[int, str]:
    """Parse Map.dbc's real expansionID field (WDBC format: 4-byte magic,
    then record_count/field_count/record_size/string_block_size as 4x
    uint32, then record_count x record_size bytes of little-endian int32
    fields) into a map_id -> expansion-name dict. field[0] is MapID,
    field[63] is expansionID (0=Vanilla, 1=TBC, 2=WotLK per
    src/server/shared/DataStores/DBCStructure.h's real MapEntry struct) --
    confirmed against known real map ids before trusting this offset (see
    test_db_extract.py's real-file integration test): Eastern Kingdoms=0/
    vanilla, Outland=530/tbc, Karazhan=532/tbc, Northrend=571/wotlk,
    Icecrown Citadel=631/wotlk. Used instead of quest_template.QuestSortID
    for expansion resolution (extract_quest_rewards.py) -- QuestSortID's
    sign convention was verified NOT reliable against real data before this
    approach was adopted (see this plan's Global Constraints). An
    expansionID this parser has never seen (none as of the real Map.dbc in
    this checkout, but defensive against a future client-data update)
    defaults to 'vanilla', the numerically dominant, lowest-risk default."""
    with open(dbc_path, "rb") as f:
        data = f.read()
    magic = data[0:4]
    if magic != b"WDBC":
        raise ValueError(f"{dbc_path}: not a WDBC file (magic={magic!r})")
    record_count, field_count, record_size, _string_block_size = struct.unpack("<4I", data[4:20])
    records_start = 20
    result: dict[int, str] = {}
    for i in range(record_count):
        rec_off = records_start + i * record_size
        fields = struct.unpack("<" + "i" * field_count, data[rec_off:rec_off + record_size])
        map_id = fields[0]
        expansion_id = fields[63]
        result[map_id] = _MAP_EXPANSION_NAMES.get(expansion_id, "vanilla")
    return result


def run_query(sql: str) -> list[tuple[str, ...]]:
    """Run one SQL statement against acore_world via the mysql.exe CLI
    (matching this project's existing MySQLExecutable-via-CLI convention --
    see docs/m4-manual-verification-checklist.md Step 3) and return its
    tab-separated rows as tuples of strings. Raises RuntimeError with the
    real mysql.exe stderr on any failure -- never silently returns []."""
    result = subprocess.run(
        [
            _MYSQL_EXE,
            f"-h{_MYSQL_HOST}",
            f"-P{_MYSQL_PORT}",
            f"-u{_MYSQL_USER}",
            f"-p{_MYSQL_PASSWORD}",
            "-Nse",
            sql,
            _MYSQL_DB,
        ],
        capture_output=True,
        text=True,
    )
    if result.returncode != 0:
        raise RuntimeError(f"mysql.exe query failed: {result.stderr.strip()}\nSQL: {sql}")
    lines = [line for line in result.stdout.splitlines() if line != ""]
    return [tuple(line.split("\t")) for line in lines]


def load_exclusion_rules(path: pathlib.Path = DEFAULT_RULES_PATH) -> dict:
    import yaml

    with open(path, "r", encoding="utf-8") as f:
        return yaml.safe_load(f)


def is_denylisted(name: str, rules: dict) -> bool:
    return any(re.search(pattern, name) for pattern in rules["name_denylist"])
