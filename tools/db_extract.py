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


_MAP_NAME_FIELD = 5      # real display name -- verified M4.11.3.2 against 8 known real ids
_MAP_INSTANCE_TYPE_FIELD = 2  # 0=continent, 1=dungeon, 2=raid, 3=battleground, 4=arena --
                                # verified M4.11.3.2 against 4 continents + 3 dungeons + 1 raid


def parse_map_names(dbc_path: pathlib.Path = _MAP_DBC_PATH) -> dict[int, str]:
    """Map.dbc real map id -> its own real, slugified name. Generalizes
    zone_leveler_content_data.py's hand-curated 3-instance instance_keys
    tuple to EVERY real instance in the game -- confirmed this session
    that the same 3 names this mechanism produces automatically
    ("wailing_caverns"/"razorfen_kraul"/"razorfen_downs") already match
    what was hand-typed there, so this isn't a guess, it's the same real
    data reached generically. Reuses _slugify_area_name (M4.11.3.1) --
    that function's own logic (strip leading "the ", snake_case) applies
    identically to map names, no separate slugifier needed."""
    field_count, records, string_block = _read_wdbc(dbc_path)
    names: dict[int, str] = {}
    for raw in records:
        fields = struct.unpack("<" + "i" * field_count, raw)
        map_id = fields[0]
        names[map_id] = _slugify_area_name(_wdbc_string(string_block, fields[_MAP_NAME_FIELD]))
    return names


def parse_map_instance_types(dbc_path: pathlib.Path = _MAP_DBC_PATH) -> dict[int, int]:
    """Map.dbc real map id -> its own real InstanceType (0=open-world
    continent; 1/2/3/4=dungeon/raid/battleground/arena, all "this map is
    an instance, not open-world terrain"). The authoritative real signal
    for "should a spawn on this map get an instance area tag or an
    open-world one" -- not a hand-maintained allowlist of known instance
    ids, which would silently miss any instance this project hasn't
    already curated."""
    field_count, records, _string_block = _read_wdbc(dbc_path)
    instance_types: dict[int, int] = {}
    for raw in records:
        fields = struct.unpack("<" + "i" * field_count, raw)
        instance_types[fields[0]] = fields[_MAP_INSTANCE_TYPE_FIELD]
    return instance_types


_ACHIEVEMENT_DBC_PATH = pathlib.Path(__file__).parent.parent.parent.parent / "var" / "extractors" / "dbc" / "Achievement.dbc"
_ACHIEVEMENT_CATEGORY_DBC_PATH = pathlib.Path(__file__).parent.parent.parent.parent / "var" / "extractors" / "dbc" / "Achievement_Category.dbc"

_ACHIEVEMENT_NAME_FIELD = 4       # first of 16 locale-string slots (enUS)
_ACHIEVEMENT_CATEGORY_ID_FIELD = 38
_ACHIEVEMENT_FLAGS_FIELD = 41


def _read_wdbc(dbc_path: pathlib.Path) -> tuple[int, list[bytes], bytes]:
    """Shared WDBC-file reader for the two new achievement-family parsers
    below (parse_map_expansions above pre-dates this helper and is left
    untouched -- see this plan's Global Constraints). Returns
    (field_count, raw_record_bytes_per_row, string_block)."""
    with open(dbc_path, "rb") as f:
        data = f.read()
    magic = data[0:4]
    if magic != b"WDBC":
        raise ValueError(f"{dbc_path}: not a WDBC file (magic={magic!r})")
    record_count, field_count, record_size, string_block_size = struct.unpack("<4I", data[4:20])
    records_start = 20
    string_block_start = records_start + record_count * record_size
    string_block = data[string_block_start:string_block_start + string_block_size]
    records = [
        data[records_start + i * record_size: records_start + (i + 1) * record_size]
        for i in range(record_count)
    ]
    return field_count, records, string_block


def _wdbc_string(string_block: bytes, offset: int) -> str:
    if offset == 0:
        return ""
    end = string_block.index(b"\x00", offset)
    return string_block[offset:end].decode("utf-8", errors="replace")


def parse_achievements(dbc_path: pathlib.Path = _ACHIEVEMENT_DBC_PATH) -> list[dict]:
    """Parse Achievement.dbc's real fields (Achievementfmt, 62 int32
    fields/record, src/server/shared/DataStores/DBCfmt.h) into one dict per
    real achievement row: {id, name, category_id, flags}. field[0]=ID,
    field[4]=name (first of 16 locale-string slots -- only slot 0/enUS is
    populated in this checkout's single-locale-extracted client data,
    confirmed against all 1,817 real rows), field[38]=categoryId,
    field[41]=flags (AchievementFlags bitmask, DBCEnums.h -- notably
    ACHIEVEMENT_FLAG_COUNTER=0x1, which per AchievementMgr.cpp's
    CompletedAchievement() means the row never fires
    OnPlayerAchievementComplete at all; see extract_achievements.py)."""
    field_count, records, string_block = _read_wdbc(dbc_path)
    result = []
    for raw in records:
        fields = struct.unpack("<" + "i" * field_count, raw)
        result.append({
            "id": fields[0],
            "name": _wdbc_string(string_block, fields[_ACHIEVEMENT_NAME_FIELD]),
            "category_id": fields[_ACHIEVEMENT_CATEGORY_ID_FIELD],
            "flags": fields[_ACHIEVEMENT_FLAGS_FIELD],
        })
    return result


def parse_achievement_categories(dbc_path: pathlib.Path = _ACHIEVEMENT_CATEGORY_DBC_PATH) -> dict[int, tuple[int, str]]:
    """Parse Achievement_Category.dbc's real fields (AchievementCategoryfmt,
    20 int32 fields/record) into category_id -> (root_category_id,
    own_name). field[0]=ID, field[1]=parentCategory (-1 for a root
    category), field[2]=name (enUS locale offset). root_category_id is
    resolved by walking the parentCategory chain up to a parentCategory==-1
    row (a category that is already a root resolves to itself). Confirmed
    against this checkout's real 86-row Achievement_Category.dbc: 10 real
    roots (Statistics=1, Feats of Strength=81, General=92, Player vs.
    Player=95, Quests=96, Exploration=97, World Events=155, Dungeons &
    Raids=168, Professions=169, Reputation=201)."""
    field_count, records, string_block = _read_wdbc(dbc_path)
    parent_by_id: dict[int, int] = {}
    name_by_id: dict[int, str] = {}
    for raw in records:
        fields = struct.unpack("<" + "i" * field_count, raw)
        cat_id, parent, name_offset = fields[0], fields[1], fields[2]
        parent_by_id[cat_id] = parent
        name_by_id[cat_id] = _wdbc_string(string_block, name_offset)

    def _root_of(cat_id: int) -> int:
        seen: set[int] = set()
        while parent_by_id.get(cat_id, -1) != -1:
            if cat_id in seen:
                break  # defensive against a malformed cycle; never seen in real data
            seen.add(cat_id)
            cat_id = parent_by_id[cat_id]
        return cat_id

    return {cat_id: (_root_of(cat_id), name_by_id[cat_id]) for cat_id in parent_by_id}


_AREA_TABLE_DBC_PATH = pathlib.Path(__file__).parent.parent.parent.parent / "var" / "extractors" / "dbc" / "AreaTable.dbc"
_AREA_TABLE_ZONE_FIELD = 2  # AreaTableEntry::zone (src/server/shared/DataStores/DBCStructure.h:522):
                             # "0 if it's a zone, else it's zone id of this area" -- i.e. this field is
                             # 0 for a top-level zone row, or the AreaTable ID of that row's own parent
                             # zone otherwise. field_count=36 confirmed against AreaTableEntryfmt
                             # (src/server/shared/DataStores/DBCfmt.h:24, "niiiixxxxxissssssssssssssssxiiiiixxx").


def parse_area_zone_ids(dbc_path: pathlib.Path = _AREA_TABLE_DBC_PATH) -> dict[int, int]:
    """Parse AreaTable.dbc's real `zone` field (WDBC format, same header
    shape parse_map_expansions already documents) into an area_id ->
    resolved TOP-LEVEL zone_id dict, walking the `zone` parent-chain up to
    a row whose own `zone` field is 0 (a root/top-level zone resolves to
    itself), mirroring parse_achievement_categories's own `_root_of` walk
    for the identical reason (a subzone's real geography is its top-level
    zone, not the subzone id itself).

    This is extract_quest_rewards.py's real mechanism for resolving
    quest_template.QuestSortID (`ZoneOrSort` in this codebase's own Quest
    class, QuestDef.h) to a real zone_id -- confirmed reliable against this
    checkout's live acore_world DB (M4.11.1 Task 2 research): of 9456 real
    quest_template rows with a non-empty LogTitle, 7135 (75.5%) have a
    POSITIVE QuestSortID, and EVERY ONE of the 182 distinct positive values
    among them is a real AreaTable.dbc ID (zero exceptions) -- confirming
    positive QuestSortID values are genuine Area ids, not something to be
    guessed at. This supersedes the M4.8.0 plan's own earlier, narrower
    finding ("QuestSortID's sign convention is NOT reliable -- quest 783
    has QuestSortID=9, positive, contradicting an assumed 'negative=direct
    area reference' convention"): that assumed convention was backwards.
    This codebase's own Quest::GetZoneOrSort() is used DIRECTLY as a real
    zone id when positive (src/server/game/Entities/Player/PlayerQuest.cpp:
    878-879, `if (quest->GetZoneOrSort() > 0) UpdateAchievementCriteria(
    ACHIEVEMENT_CRITERIA_TYPE_COMPLETE_QUESTS_IN_ZONE, ...)`), proving
    positive = real zone reference. Quest 783's QuestSortID=9 resolves via
    this function to Area 9's real parent zone 12 (Area 9's own `zone`
    field is 12, not 0) -- not a contradiction once the parent-chain is
    walked, just a subzone reference one level down.

    The remaining 2321 rows (24.5%) have QuestSortID <= 0: 2117 negative
    (39 distinct absolute values, ALL 39 confirmed present among
    QuestSort.dbc's own 41 real category ids -- e.g. "Dungeon"/"PvP"/
    "Seasonal"-style quest-log GROUPING categories, not geography at all)
    plus 204 that are exactly 0 (no sort/zone data whatsoever). Note a real
    id-space COLLISION exists between AreaTable.dbc and QuestSort.dbc (at
    least 7 real ids -- 1, 22, 24, 25, 41, 141, 221 -- exist in BOTH
    tables) -- this is exactly why the caller must check QuestSortID's
    SIGN first and never blindly look up abs(QuestSortID) in AreaTable.dbc
    regardless of sign. extract_quest_rewards.py's `_resolve_zone_id`
    returns 0 (an unambiguous sentinel -- confirmed AreaTable.dbc's real
    ids start at 1, never 0) for every QuestSortID <= 0 row instead of
    guessing.

    A `creature`/`gameobject`-`zoneId`-column fallback (via
    creature_queststarter/gameobject_queststarter) for the QuestSortID <= 0
    rows was investigated and REJECTED: live-checked, it rescues only 3 of
    those 2321 rows (creature.zoneId is 0 for 144,945 of 149,975 = 96.6% of
    ALL creature rows in this checkout) -- not worth the extra query and
    complexity for a 0.03%-of-9456 gain.

    Verified empirically against this checkout's real AreaTable.dbc: for
    all 182 real distinct positive QuestSortID values seen in the live DB,
    the parent-chain walk below never exceeds depth 1 (a QuestSortID is
    either already a top-level zone, or a direct subzone of one) and never
    cycles -- the loop guard exists defensively anyway, matching
    parse_achievement_categories's own `_root_of` precedent."""
    field_count, records, _string_block = _read_wdbc(dbc_path)
    zone_field_by_id: dict[int, int] = {}
    for raw in records:
        fields = struct.unpack("<" + "i" * field_count, raw)
        zone_field_by_id[fields[0]] = fields[_AREA_TABLE_ZONE_FIELD]

    def _resolve_top_level_zone(area_id: int) -> int:
        seen: set[int] = set()
        while zone_field_by_id.get(area_id, 0) != 0:
            if area_id in seen:
                break  # defensive against a malformed cycle; never seen in real data
            seen.add(area_id)
            area_id = zone_field_by_id[area_id]
        return area_id

    return {area_id: _resolve_top_level_zone(area_id) for area_id in zone_field_by_id}


_AREA_TABLE_NAME_FIELD = 11  # AreaName_enUS -- verified M4.11.1 Task 13 (zone_level_data.py's
                              # own docstring) against ids 14/1637; re-confirmed this session
                              # (M4.11.3.1) against 17/331/361/406.


def _slugify_area_name(name: str) -> str:
    """'The Barrens' -> 'barrens', 'Stonetalon Mountains' -> 'stonetalon_mountains' --
    matches this project's existing instance_keys naming convention
    (zone_leveler_content_data.py's own 'wailing_caverns'/'razorfen_kraul') so open-world
    zones and instances share one string namespace with no visual
    inconsistency between them."""
    slug = name.strip().lower()
    if slug.startswith("the "):
        slug = slug[4:]
    slug = re.sub(r"[^a-z0-9]+", "_", slug).strip("_")
    return slug


def parse_area_names(dbc_path: pathlib.Path = _AREA_TABLE_DBC_PATH) -> dict[int, str]:
    """AreaTable.dbc real area id -> its own real, slugified name. Every
    resolved zone id this project's area-tag mechanism produces gets
    turned into one of these canonical strings before being written into
    any content/*.yaml file -- matching the existing convention every
    other TAGS dimension already uses (frozenset[str], never bare ints).

    NOTE (M4.11.3.1 final whole-branch review, Finding 9): slugification is
    NOT guaranteed injective -- this checkout's real AreaTable.dbc data has
    at least 4 slugs (e.g. "azjol_nerub", also "north_sea"/"great_sea"/
    "veiled_sea") each mapping to more than one distinct real zone id, most
    notably the open-world zone and the same-named dungeon instance both
    slugifying to "azjol_nerub". Harmless for this milestone's open-world
    area tags, but a consumer that needs to disambiguate an open-world zone
    from a same-named instance (expected of M4.11.3.2's instance area tags)
    will need a different mechanism than this dict's string values alone."""
    field_count, records, string_block = _read_wdbc(dbc_path)
    names: dict[int, str] = {}
    for raw in records:
        fields = struct.unpack("<" + "i" * field_count, raw)
        area_id = fields[0]
        names[area_id] = _slugify_area_name(_wdbc_string(string_block, fields[_AREA_TABLE_NAME_FIELD]))
    return names


_LOCK_DBC_PATH = pathlib.Path(__file__).parent.parent.parent.parent / "var" / "extractors" / "dbc" / "Lock.dbc"

# Real LockType enum values (SharedDefines.h:2594-2617) this parser cares
# about -- only these two real values map to a real gathering profession
# per SkillByLockType() (SharedDefines.h:3253-3271); every other real
# LockType value (PICKLOCK, OPEN, TREASURE, FISHING, INSCRIPTION, and the
# several "special open animation" values) is a real lock kind but not
# one this parser resolves to a profession.
_LOCK_TYPE_HERBALISM = 2
_LOCK_TYPE_MINING = 3
_LOCK_TYPE_SLOT_COUNT = 8  # Type[8]/Skill[8] are both real fixed-size 8-element arrays
_LOCK_TYPE_FIELD_START = 1   # Type[0] is field 1
_LOCK_SKILL_FIELD_START = 17  # Skill[0] is field 17


def parse_lock_skill_requirements(dbc_path: pathlib.Path = _LOCK_DBC_PATH) -> dict[int, dict[str, int]]:
    """Parse Lock.dbc's real Type[8]/Skill[8] array fields (WDBC format, no
    string block -- 33 real int32 fields/record) into lockId ->
    {"herbalism": skill} and/or {"mining": skill}, per M4.11.4's own
    verified real field layout (this plan's Global Constraints). A lockId
    with neither a real Herbalism nor Mining slot among its 8 is absent
    from the returned dict entirely -- most real locks in this game are
    Lockpicking/OPEN/other non-gathering kinds and are irrelevant to
    Gathersanity's own skill-tier grouping. Only includes plausible
    player-facing skill levels (0-450); impossible locks and special
    lock kinds (like quest objects with 5000+ skill requirements) are
    excluded as they cannot be opened by normal gathering."""
    field_count, records, _string_block = _read_wdbc(dbc_path)
    result: dict[int, dict[str, int]] = {}
    for raw in records:
        fields = struct.unpack("<" + "i" * field_count, raw)
        lock_id = fields[0]
        entry: dict[str, int] = {}
        for slot in range(_LOCK_TYPE_SLOT_COUNT):
            lock_type = fields[_LOCK_TYPE_FIELD_START + slot]
            skill_level = fields[_LOCK_SKILL_FIELD_START + slot]
            if lock_type == _LOCK_TYPE_HERBALISM and 0 <= skill_level <= 450:
                entry["herbalism"] = skill_level
            elif lock_type == _LOCK_TYPE_MINING and 0 <= skill_level <= 450:
                entry["mining"] = skill_level
        if entry:
            result[lock_id] = entry
    return result


_SKILL_TIER_BOUNDARIES = [
    (75, "apprentice"), (150, "journeyman"), (225, "expert"),
    (300, "artisan"), (375, "master"), (451, "northrend_capped"),
]


def skill_tier_for_level(skill_level: int) -> str:
    """Real WotLK profession rank bands (M4.11.4 design spec §6):
    Apprentice 0-75 / Journeyman 75-150 / Expert 150-225 / Artisan
    225-300 / Master 300-375 / Northrend-capped 375-450. Each boundary
    below is the tier's own EXCLUSIVE upper bound (451 for the last tier
    so skill_level==450 still matches it)."""
    for upper_bound, tier in _SKILL_TIER_BOUNDARIES:
        if skill_level < upper_bound:
            return tier
    return "northrend_capped"


_WORLD_MAP_AREA_DBC_PATH = pathlib.Path(__file__).parent.parent.parent.parent / "var" / "extractors" / "dbc" / "WorldMapArea.dbc"
# WorldMapAreaEntryfmt = "xinxffffixx" (src/server/shared/DataStores/DBCfmt.h:131),
# confirmed against this same checkout's own WorldMapAreaEntry struct
# (src/server/shared/DataStores/DBCStructure.h:2147-2160): field0=ID (unused,
# 'x'), field1=map_id, field2=area_id ('n', the row's own index -- an
# AreaTable.dbc ID), field3=internal_name (unused, 'x'), field4=y1,
# field5=y2, field6=x1, field7=x2 (the real WORLD-COORDINATE bounding box
# this area occupies on `map_id`), field8=virtual_map_id (-1 means map_id IS
# the real physical map; a non-(-1) value is cosmetic World-Map-UI grouping
# only -- see parse_world_map_areas's own docstring), field9-10=unused ('x').
# 11 fields total, all 4 bytes wide regardless of int/float typing --
# field_count=11 confirmed against this checkout's real WorldMapArea.dbc
# header.
_WORLD_MAP_AREA_MAP_ID_FIELD = 1
_WORLD_MAP_AREA_AREA_ID_FIELD = 2
_WORLD_MAP_AREA_Y1_FIELD = 4
_WORLD_MAP_AREA_Y2_FIELD = 5
_WORLD_MAP_AREA_X1_FIELD = 6
_WORLD_MAP_AREA_X2_FIELD = 7
_WORLD_MAP_AREA_VIRTUAL_MAP_ID_FIELD = 8


def parse_world_map_areas(dbc_path: pathlib.Path = _WORLD_MAP_AREA_DBC_PATH) -> list[tuple[int, int, float, float, float, float]]:
    """Parse WorldMapArea.dbc into a list of (map_id, area_id, min_x, max_x,
    min_y, max_y) tuples -- one per real top-level-zone-or-instance row this
    checkout's client data defines (108 real rows as of this checkout).
    y1/y2/x1/x2 are read directly off the row (not assumed already sorted
    low-to-high) and normalized here via min()/max() so callers never have
    to re-derive which of y1/y2 (or x1/x2) is the lower bound.

    M4.11.1 Task 5's real mechanism for resolving a creature's (map,
    position_x, position_y) spawn to a real top-level zone when
    creature.zoneId/areaId are 0 (confirmed true for every one of
    rares.yaml's 40 curated creature entries in this checkout's live DB --
    see rares.yaml's own header comment) and creature.map only gives
    continent-level granularity (already covered by the existing
    MAP_ID_TO_EXPANSION mechanism). Usage: for a real spawn point, collect
    every returned row whose map_id matches the creature's own real map AND
    whose bounding box contains (position_x, position_y); the SMALLEST-area
    matching box is the correct pick (a more specific sub-region always beats
    a larger enclosing/overlapping neighbor -- verified against this
    checkout's real data: Drogoth the Roamer's own two real spawn points
    split Mulgore/Dustwallow Marsh, and the Mulgore pick came from a spawn
    sitting only ~78 world-units inside Mulgore's own y-boundary, a near-miss
    that the OTHER spawn point -- landing solidly inside Dustwallow Marsh's
    box and entirely outside Mulgore's -- resolves unambiguously; taking
    EVERY real spawn row for a creature and majority-voting the per-point
    smallest-bbox pick, not just the first spawn row, is what actually
    catches this). Feed the winning area_id into parse_area_zone_ids()'s
    output to get the real top-level zone_id.

    virtual_map_id (field8, NOT returned here -- callers needing it should
    read the raw fields directly) is NOT used to exclude rows: verified
    against this checkout's real data that map_id (not virtual_map_id) is
    the row's real PHYSICAL-terrain map -- e.g. Ghostlands/Eversong Woods/
    Silvermoon City/Isle of Quel'Danas all carry map_id=530 (real Outland
    terrain file) with virtual_map_id=0, and Dr. Whitherlimb (rares.yaml
    entry 22062, real creature.map=530) resolves unanimously across all 4 of
    its real spawn rows to Ghostlands' bounding box under map_id=530 --
    consistent with Blizzard's own client technically storing Quel'Thalas
    terrain on the same physical map file as Outland (both shipped in the
    same Burning Crusade content patch), NOT a data bug. virtual_map_id is
    cosmetic World-Map-UI grouping only (which tab a zone's marker shows
    under), unrelated to which map_id a real creature's own position column
    actually uses.

    A creature/gameobject-`zoneId` column fallback was NOT considered here
    (unlike parse_area_zone_ids's own QuestSortID <= 0 fallback
    investigation) -- zoneId/areaId are 0 for effectively all of this
    checkout's creature rows (see parse_area_zone_ids's own docstring:
    96.6% of ALL creature rows), so there is no real fallback signal to
    reject or use; this bounding-box mechanism is the only real signal
    available."""
    field_count, records, _string_block = _read_wdbc(dbc_path)
    rows: list[tuple[int, int, float, float, float, float]] = []
    for raw in records:
        ints = struct.unpack("<" + "i" * field_count, raw)
        floats = struct.unpack("<" + "f" * field_count, raw)
        map_id = ints[_WORLD_MAP_AREA_MAP_ID_FIELD]
        area_id = ints[_WORLD_MAP_AREA_AREA_ID_FIELD]
        y1, y2 = floats[_WORLD_MAP_AREA_Y1_FIELD], floats[_WORLD_MAP_AREA_Y2_FIELD]
        x1, x2 = floats[_WORLD_MAP_AREA_X1_FIELD], floats[_WORLD_MAP_AREA_X2_FIELD]
        rows.append((map_id, area_id, min(x1, x2), max(x1, x2), min(y1, y2), max(y1, y2)))
    return rows


def resolve_zone_id_from_position(
    map_id: int, position_x: float, position_y: float,
    world_map_areas: list[tuple[int, int, float, float, float, float]],
    area_zone_ids: dict[int, int],
) -> int:
    """SUPERSEDED by resolve_area_tags_for_positions (M4.11.3.1) for any new
    family -- this single-winner resolver is known to misattribute
    border-ambiguous positions (see resolve_zone_ids_from_position's own
    docstring: only ~10.3% of Barrens' own WorldMapArea box actually
    resolves to zone 17 under smallest-box-wins, because the smaller,
    genuinely-overlapping Durotar/Mulgore boxes crowd it out almost
    everywhere else) and is retained only for its own test coverage /
    backward reference. Do not use for new extraction work.

    One (map_id, position_x, position_y) spawn point -> a real top-level
    zone_id, or 0 ("no resolvable real-world zone", the same unambiguous
    sentinel parse_area_zone_ids's own caller convention uses -- AreaTable.dbc
    IDs start at 1, never 0). Picks the SMALLEST-area WorldMapArea bounding
    box (from parse_world_map_areas's own output) that contains the point,
    among every row sharing this exact map_id -- see parse_world_map_areas's
    own docstring for why smallest-box-wins is correct and why map_id
    (not virtual_map_id) is the right real-terrain match key. Callers with
    more than one real spawn row for the same creature/object should call
    this once per row and majority-vote the results (see
    parse_world_map_areas's own docstring, Drogoth the Roamer example) rather
    than trusting a single spawn point, which this function deliberately does
    NOT do itself (it has no notion of "this creature's other spawns")."""
    best_area: tuple[float, int] | None = None
    for (row_map_id, area_id, min_x, max_x, min_y, max_y) in world_map_areas:
        if row_map_id != map_id:
            continue
        if not (min_x <= position_x <= max_x and min_y <= position_y <= max_y):
            continue
        size = (max_x - min_x) * (max_y - min_y)
        if best_area is None or size < best_area[0]:
            best_area = (size, area_id)
    if best_area is None:
        return 0
    return area_zone_ids.get(best_area[1], 0)


def resolve_zone_ids_from_position(
    map_id: int, position_x: float, position_y: float,
    world_map_areas: list[tuple[int, int, float, float, float, float]],
    area_zone_ids: dict[int, int],
) -> frozenset[int]:
    """M4.11.3.1: sibling of resolve_zone_id_from_position that returns
    EVERY real zone whose WorldMapArea.dbc bounding box contains this
    point, not just the smallest one. WorldMapArea.dbc's 108 real rows are
    crude axis-aligned rectangles, not real zone polygons -- on map 1,
    Barrens' own box is almost entirely overlapped by the smaller,
    genuinely-overlapping Durotar/Mulgore boxes (final whole-branch
    review, M4.11.2, 2026-09-02: only ~10.3% of Barrens' own box actually
    resolves to zone 17 under smallest-box-wins). Returning the full
    membership set instead of guessing one winner means a border-ambiguous
    position gets tagged with every real candidate instead of one
    possibly-wrong pick -- the right trade for every consumer of area
    tags, which are used to build a zone-scoped CHECK POOL: an occasional
    false-positive extra zone tag is far cheaper than the false-negative
    this project's tooling has repeatedly produced (a real check wrongly
    excluded from a zone-locked mode). Deliberately does NOT replace
    resolve_zone_id_from_position -- nothing currently needs a single
    best guess, but nothing is broken by this coexisting either."""
    matches: set[int] = set()
    for (row_map_id, area_id, min_x, max_x, min_y, max_y) in world_map_areas:
        if row_map_id != map_id:
            continue
        if min_x <= position_x <= max_x and min_y <= position_y <= max_y:
            zone_id = area_zone_ids.get(area_id, 0)
            if zone_id != 0:
                matches.add(zone_id)
    return frozenset(matches)


def resolve_area_tags_for_positions(
    positions: list[tuple[int, float, float]],
    world_map_areas: list[tuple[int, int, float, float, float, float]],
    area_zone_ids: dict[int, int],
    area_names: dict[int, str],
) -> frozenset[str]:
    """The one function every extraction script calls for open-world area
    tagging (M4.11.3.1): unions resolve_zone_ids_from_position across
    every one of an entity's real spawn positions (fixing the Ghostpaw
    Runner case -- a genuine multi-zone creature, not a resolver
    ambiguity), and each individual position already returns every
    containing zone rather than one guess (fixing the Babagaya
    Shadowcleft case -- a border-ambiguous single position). One
    mechanism, both problems. `positions` is every real (map_id, x, y) a
    caller has for one entity -- a single-spawn quest-giver passes a
    one-element list, a 69-spawn creature passes all 69."""
    zone_ids: set[int] = set()
    for map_id, x, y in positions:
        zone_ids |= resolve_zone_ids_from_position(map_id, x, y, world_map_areas, area_zone_ids)
    return frozenset(area_names[zone_id] for zone_id in zone_ids if zone_id in area_names)


def resolve_area_or_instance_tags_for_positions(
    positions: list[tuple[int, float, float]],
    world_map_areas: list[tuple[int, int, float, float, float, float]],
    area_zone_ids: dict[int, int],
    area_names: dict[int, str],
    map_instance_types: dict[int, int],
    map_names: dict[int, str],
) -> frozenset[str]:
    """M4.11.3.2: like resolve_area_tags_for_positions (M4.11.3.1), but
    aware that some real spawn positions are INSIDE an instance rather
    than on open-world terrain. An instanced position (map_instance_types
    says InstanceType != 0) resolves to that instance's own real name --
    ONLY that, never unioned with an open-world zone -- since an
    instance's own content identity must stay independent of wherever its
    entrance currently sits (design spec: this is what lets a future
    door-shuffle feature relocate an entrance without silently
    reclassifying the instance's interior content). An open-world
    position resolves exactly like resolve_area_tags_for_positions
    already does."""
    tags: set[str] = set()
    for map_id, x, y in positions:
        if map_instance_types.get(map_id, 0) != 0:
            name = map_names.get(map_id)
            if name:
                tags.add(name)
            continue
        for zone_id in resolve_zone_ids_from_position(map_id, x, y, world_map_areas, area_zone_ids):
            name = area_names.get(zone_id)
            if name:
                tags.add(name)
    return frozenset(tags)


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


_FILLER_BUFF_SPELL_ID_FIELD = 0
_FILLER_BUFF_DISPEL_FIELD = 2
_FILLER_BUFF_ATTRIBUTES_FIELD = 4       # Attributes (Attr0) -- SharedDefines.h SPELL_ATTR0_*
_FILLER_BUFF_ATTRIBUTES4_FIELD = 8      # AttributesEx4 (Attr4) -- SharedDefines.h SPELL_ATTR4_*
_FILLER_BUFF_EFFECT_FIELDS = (71, 72, 73)
_FILLER_BUFF_EFFECT_BASE_POINTS_FIELDS = (80, 81, 82)
_FILLER_BUFF_EFFECT_APPLY_AURA_NAME_FIELDS = (95, 96, 97)

_SPELL_ATTR0_PASSIVE = 0x00000040        # SharedDefines.h:376
_SPELL_ATTR4_CANNOT_BE_STOLEN = 0x00000040  # SharedDefines.h:524
_DISPEL_MAGIC = 1                         # SharedDefines.h:1376
_SPELL_EFFECT_APPLY_AURA = 6              # SharedDefines.h:772

# Curated allowlist of real AuraType values (src/server/game/Spells/Auras/
# SpellAuraDefines.h) accepted as a genuine, player-facing POSITIVE buff --
# PERIODIC_DAMAGE (3, a DoT) is deliberately NOT included even though some
# DoTs are Magic-dispel. Reached via 3 real refinement passes against the
# actual Spell.dbc during M4.9.6 planning (3,279 -> 1,857 -> 572 raw
# candidates before the shared exclusion_rules.yaml denylist trims to the
# final 568): PERIODIC_HEAL=8, MOD_DAMAGE_DONE=13, MOD_RESISTANCE=22,
# MOD_STAT=29, MOD_INCREASE_SPEED=31, MOD_INCREASE_HEALTH=34,
# MOD_SPELL_CRIT_CHANCE=57, MOD_DAMAGE_PERCENT_DONE=79, MOD_POWER_REGEN=85,
# MOD_ATTACK_POWER=99, MOD_RESISTANCE_PCT=101, MOD_RANGED_ATTACK_POWER=124,
# MOD_HEALING_DONE_PERCENT=136.
_FILLER_BUFF_POSITIVE_AURA_TYPES = frozenset({
    8, 13, 22, 29, 31, 34, 57, 79, 85, 99, 101, 124, 136,
})

# I1 (final whole-branch review, M4.9.6): the positive-aura check above
# accepts a spell as soon as ANY ONE of its 3 effect slots carries an
# allowlisted positive aura type -- it never checks whether a DIFFERENT
# slot on the SAME spell carries a genuinely negative/CC effect. Real
# confirmed examples that slipped through before this veto existed: spell
# 5782 "Fear" (slot1 MOD_FEAR bp=-1, slot2 MOD_INCREASE_SPEED bp=24 --
# accepted on slot2 alone) and spell 11020 "Petrify" (MOD_STUN bundled
# with a MOD_RESISTANCE-shaped slot). This is a curated NEGATIVE-aura
# denylist (real AuraType values, verified against the real
# src/server/game/Spells/Auras/SpellAuraDefines.h in this checkout) --
# ANY effect slot matching one of these vetoes the whole spell,
# regardless of what the positive-check loop above found:
# PERIODIC_DAMAGE=3 (a real DoT), MOD_CHARM=6, MOD_FEAR=7, MOD_STUN=12,
# MOD_DAMAGE_TAKEN=14 (distinct from the already-allowlisted
# MOD_DAMAGE_PERCENT_DONE=79 -- this one increases damage the TARGET
# takes, a debuff), MOD_ROOT=26, MOD_SILENCE=27, MOD_DECREASE_SPEED=33,
# TRANSFORM=56, MOD_DAMAGE_PERCENT_TAKEN=87. Verified live against the
# real Spell.dbc (parse_filler_buff_spell_candidates before this change:
# 568 candidates): this veto alone removes 45 real rows (568 -> 523),
# including real Fear/Psychic Scream/Scare Beast/Turn Evil/Dreamless
# Sleep/Petrify/Poultryized!-family crowd control and Boiling
# Blood/Unstable Magic/Arcane Residue-family damage-taken debuffs that
# were previously slipping through on a positive-shaped side effect.
_FILLER_BUFF_NEGATIVE_AURA_TYPES = frozenset({
    3, 6, 7, 12, 14, 26, 27, 33, 56, 87,
})


def parse_filler_buff_spell_candidates(dbc_path: pathlib.Path = _SPELL_DBC_PATH) -> dict[int, str]:
    """Parse Spell.dbc for a real, verified approximation of "anything
    spellstealable" (explicit user direction, M4.9.6 brainstorming) --
    SpellInfo::IsPositive() itself is a RUNTIME-COMPUTED field
    (AttributesCu, set by SpellMgr::LoadSpellInfoCorrections()), not raw
    DBC data, so it cannot be replicated by pure DBC parsing. This filter
    instead mirrors Spell::EffectStealBeneficialBuff's real criteria
    (src/server/game/Spells/SpellEffects.cpp): Dispel == DISPEL_MAGIC,
    !SPELL_ATTR0_PASSIVE, !SPELL_ATTR4_CANNOT_BE_STOLEN, plus a curated
    positive-AuraType allowlist with non-negative EffectBasePoints (a raw
    dispel-type-only filter over-included real DoTs/debuffs like
    Corruption -- confirmed against real data during planning). Field
    offsets match parse_spell_names' own real, verified field_count=234/
    record_size=936 Spell.dbc layout (DBCStructure.h's real SpellEntry
    struct), plus a separate cross-slot NEGATIVE-AuraType veto pass (see
    _FILLER_BUFF_NEGATIVE_AURA_TYPES -- final whole-branch review finding
    I1) that rejects a spell outright if ANY effect slot carries a
    genuine CC/debuff aura, even one that isn't the slot that satisfied
    the positive-aura check. Real result as of this checkout's Spell.dbc:
    519 candidates (568 originally, -45 from the I1 veto, -4 from I2's
    exclusion_rules.yaml additions -- see
    test_real_spell_dbc_produces_the_verified_candidate_count_and_spot_checks)."""
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

    rules = load_exclusion_rules()
    result: dict[int, str] = {}
    signed_fmt = "<" + "i" * field_count
    for i in range(record_count):
        rec_off = records_start + i * record_size
        fields = struct.unpack(signed_fmt, data[rec_off:rec_off + record_size])
        spell_id = fields[_FILLER_BUFF_SPELL_ID_FIELD]
        if fields[_FILLER_BUFF_DISPEL_FIELD] != _DISPEL_MAGIC:
            continue
        if (fields[_FILLER_BUFF_ATTRIBUTES_FIELD] & 0xFFFFFFFF) & _SPELL_ATTR0_PASSIVE:
            continue
        if (fields[_FILLER_BUFF_ATTRIBUTES4_FIELD] & 0xFFFFFFFF) & _SPELL_ATTR4_CANNOT_BE_STOLEN:
            continue
        has_positive_aura = False
        for eff_field, bp_field, aura_field in zip(
            _FILLER_BUFF_EFFECT_FIELDS,
            _FILLER_BUFF_EFFECT_BASE_POINTS_FIELDS,
            _FILLER_BUFF_EFFECT_APPLY_AURA_NAME_FIELDS,
        ):
            if fields[eff_field] != _SPELL_EFFECT_APPLY_AURA:
                continue
            if fields[aura_field] in _FILLER_BUFF_POSITIVE_AURA_TYPES and fields[bp_field] >= 0:
                has_positive_aura = True
                break
        if not has_positive_aura:
            continue
        # I1: separate veto pass -- independent of the positive-check loop
        # above -- over all 3 effect slots. Reject the whole spell if ANY
        # slot carries a negative/CC aura type, even one that isn't the
        # slot that satisfied has_positive_aura.
        has_negative_aura = False
        for eff_field, aura_field in zip(
            _FILLER_BUFF_EFFECT_FIELDS,
            _FILLER_BUFF_EFFECT_APPLY_AURA_NAME_FIELDS,
        ):
            if fields[eff_field] != _SPELL_EFFECT_APPLY_AURA:
                continue
            if fields[aura_field] in _FILLER_BUFF_NEGATIVE_AURA_TYPES:
                has_negative_aura = True
                break
        if has_negative_aura:
            continue
        name = _read_string(fields[_SPELL_NAME_FIELD_INDEX] & 0xFFFFFFFF)
        if not name or is_denylisted(name, rules):
            continue
        result[spell_id] = name
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


def parse_pool_gameobject_memberships() -> dict[int, int]:
    """Real gameobject.guid -> pool_gameobject.pool_entry for every real
    spawn registered in AzerothCore's own gameobject spawn-pool rotation
    table. A guid absent from the returned dict has no pool membership
    (a standalone spawn) -- see resolve_zone_pool_units's own docstring
    for why this distinction is the correct real unit of count for a
    zone's own chest/node population (M4.11.4 design spec §5)."""
    rows = run_query("SELECT guid, pool_entry FROM pool_gameobject")
    return {int(guid): int(pool_entry) for guid, pool_entry in rows}


def resolve_zone_pool_units(
    spawn_rows: list[tuple[int, int, float, float]],
    pool_memberships: dict[int, int],
    world_map_areas: list[tuple[int, int, float, float, float, float]],
    area_zone_ids: dict[int, int],
    area_names: dict[int, str],
    map_instance_types: dict[int, int],
    map_names: dict[int, str],
) -> dict[str, set[tuple[str, int]]]:
    """M4.11.4: real spawn rows (one row per real gameobject.guid, as
    (guid, map_id, position_x, position_y)) -> zone_key -> the set of
    distinct real "pool unit" ids resolving to that zone. A unit id is
    a type-tagged 2-tuple: ("pool", pool_entry) for a pool-managed spawn
    (from parse_pool_gameobject_memberships), or ("standalone", guid)
    for a standalone spawn -- the tag namespace prevents collisions
    between pool_entry and guid id spaces (both are independently
    numbered, and a numeric collision would silently merge distinct
    units, undercounting a zone's real distinct chest/node population).
    Matching what a real player can actually encounter (87.9% of real
    chest pools have max_limit=1: only one member is ever findable at a
    time, so an entire pool counts as ONE encounterable unit, never one
    per member). A unit whose own position(s) resolve to more than one
    real zone (a border-ambiguous spawn, or a pool whose members happen
    to sit across a zone boundary) is counted toward every zone it
    resolves to -- same union-not-guess convention
    resolve_zone_ids_from_position's own docstring establishes for this
    project, never a single arbitrarily-chosen winner."""
    positions_by_unit: dict[tuple[str, int], set[tuple[int, float, float]]] = {}
    for guid, map_id, x, y in spawn_rows:
        pool_entry = pool_memberships.get(guid)
        unit_id = ("pool", pool_entry) if pool_entry is not None else ("standalone", guid)
        positions_by_unit.setdefault(unit_id, set()).add((map_id, x, y))

    units_by_zone: dict[str, set[tuple[str, int]]] = {}
    for unit_id, positions in positions_by_unit.items():
        zone_tags = resolve_area_or_instance_tags_for_positions(
            sorted(positions), world_map_areas, area_zone_ids, area_names,
            map_instance_types, map_names,
        )
        for zone_key in zone_tags:
            units_by_zone.setdefault(zone_key, set()).add(unit_id)
    return units_by_zone
