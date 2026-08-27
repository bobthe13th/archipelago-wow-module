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


_SKILL_LINE_ABILITY_DBC_PATH = (
    pathlib.Path(__file__).parent.parent.parent.parent / "var" / "extractors" / "dbc" / "SkillLineAbility.dbc"
)


def parse_skill_line_abilities(dbc_path: pathlib.Path = _SKILL_LINE_ABILITY_DBC_PATH) -> dict[int, int]:
    """Parse SkillLineAbility.dbc's real Spell/SkillLine fields (WDBC
    format, same header shape parse_map_expansions already documents) into
    a spell_id -> skill_line_id dict. field[1] is SkillLine, field[2] is
    Spell per SkillLineAbilityEntry (src/server/shared/DataStores/
    DBCStructure.h:1597-1612) -- field_count=14 confirmed against this
    checkout's real var/extractors/dbc/SkillLineAbility.dbc
    (record_size=56=14*4). Needed because this DB's own
    skilllineability_dbc/skillline_dbc SQL tables (confirmed present via
    `SHOW TABLES LIKE '%skill%'`) are unpopulated stubs -- `SELECT COUNT(*)
    FROM skilllineability_dbc` returns 0 -- so a real spell_id -> profession
    join is only possible against the client DBC directly, the same
    situation M4.8 hit for Map.dbc's expansionID (see this plan's Global
    Constraints). Verified against known real recipe-teaching spells before
    trusting the field offsets: 2543 (Cook: Westfall Stew) -> 185
    (Cooking), 2158/2163 (leather patterns) -> 165 (Leatherworking),
    3230/2335 (elixir/potion recipes) -> 171 (Alchemy) -- all four match
    their real WotLK profession exactly. If a spell_id appears in more than
    one record, the FIRST record encountered wins -- deterministic since
    WDBC record order is stable file content, not a runtime concern."""
    with open(dbc_path, "rb") as f:
        data = f.read()
    magic = data[0:4]
    if magic != b"WDBC":
        raise ValueError(f"{dbc_path}: not a WDBC file (magic={magic!r})")
    record_count, field_count, record_size, _string_block_size = struct.unpack("<4I", data[4:20])
    records_start = 20
    result: dict[int, int] = {}
    for i in range(record_count):
        rec_off = records_start + i * record_size
        fields = struct.unpack("<" + "i" * field_count, data[rec_off:rec_off + record_size])
        skill_line, spell_id = fields[1], fields[2]
        result.setdefault(spell_id, skill_line)
    return result


_SPELL_DBC_PATH = pathlib.Path(__file__).parent.parent.parent.parent / "var" / "extractors" / "dbc" / "Spell.dbc"
_SPELL_NAME_FIELD_INDEX = 136  # SpellEntry::SpellName[0] (enUS), field 136 per DBCStructure.h:1719


def parse_spell_names(dbc_path: pathlib.Path = _SPELL_DBC_PATH) -> dict[int, str]:
    """Parse Spell.dbc's real enUS SpellName field (WDBC format WITH a
    string block, unlike Map.dbc/SkillLineAbility.dbc) into a spell_id ->
    name dict. field[0] is ID, field[136] is the enUS locale's
    string-block OFFSET for SpellName (src/server/shared/DataStores/
    DBCStructure.h:1719, `std::array<char const*, 16> SpellName; // 136-151
    m_name_lang`) -- confirmed against this checkout's real
    var/extractors/dbc/Spell.dbc: field_count=234, record_size=936=234*4,
    string_block_start (20 + record_count*record_size) lands exactly at
    the real file's string block (verified: string_block_start +
    string_block_size == the real file's exact byte length). Needed
    because this DB's own spell_dbc SQL table has no name column at all
    and only 4,491 rows (a partial stub, not the ~49,839-row real
    Spell.dbc) -- trainer_spell has no name column of its own, so this is
    the ONLY source of a real, player-facing spell name for the Trainer
    Spells & Abilities family. Verified against known real spells before
    trusting the offset: 72 -> "Shield Bash", 100 -> "Charge", 2543 ->
    "Westfall Stew" (matches the recipe item's own name, cross-checked
    against extract_recipes.py's independent item_template-sourced
    name)."""
    with open(dbc_path, "rb") as f:
        data = f.read()
    magic = data[0:4]
    if magic != b"WDBC":
        raise ValueError(f"{dbc_path}: not a WDBC file (magic={magic!r})")
    record_count, field_count, record_size, string_block_size = struct.unpack("<4I", data[4:20])
    records_start = 20
    string_block_start = records_start + record_count * record_size

    def _read_string(offset: int) -> str:
        if offset == 0:
            return ""
        start = string_block_start + offset
        end = data.index(b"\x00", start)
        return data[start:end].decode("utf-8", errors="replace")

    result: dict[int, str] = {}
    for i in range(record_count):
        rec_off = records_start + i * record_size
        fields = struct.unpack("<" + "i" * field_count, data[rec_off:rec_off + record_size])
        spell_id = fields[0]
        name_offset = fields[_SPELL_NAME_FIELD_INDEX]
        result[spell_id] = _read_string(name_offset)
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
