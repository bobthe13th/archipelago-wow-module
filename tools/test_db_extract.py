import pathlib
import struct
import tempfile
import unittest
from unittest.mock import patch, MagicMock

import db_extract

from db_extract import (
    is_denylisted, load_exclusion_rules, run_query, DEFAULT_RULES_PATH,
    parse_map_expansions, parse_map_names, parse_map_instance_types,
    parse_skill_line_abilities, parse_spell_names,
    parse_achievements, parse_achievement_categories,
    parse_filler_buff_spell_candidates, parse_area_zone_ids,
    parse_world_map_areas, resolve_zone_id_from_position,
    resolve_zone_ids_from_position, parse_area_names, _slugify_area_name,
    resolve_area_tags_for_positions, resolve_area_or_instance_tags_for_positions,
)


class TestExclusionRules(unittest.TestCase):
    def test_denylist_matches_case_insensitive(self) -> None:
        rules = {"name_denylist": [r"(?i)\btest\b", r"(?i)\bdeprecated\b"]}
        self.assertTrue(is_denylisted("QA Test Sword", rules))
        self.assertTrue(is_denylisted("Deprecated Cloak", rules))
        self.assertFalse(is_denylisted("Worn Shortsword", rules))

    def test_real_rules_file_loads_and_matches_known_hits(self) -> None:
        # Confirmed empirically against this checkout's real acore_world data
        # (2026-08-21 spike): the shipped denylist must at minimum catch
        # these two real item_template names.
        rules = load_exclusion_rules(DEFAULT_RULES_PATH)
        self.assertTrue(is_denylisted("Recipe: Test Only Do Not Use", rules))
        self.assertTrue(is_denylisted("QA Deprecated Widget", rules))


class TestDatabaseQueries(unittest.TestCase):
    @patch("db_extract.subprocess.run")
    def test_run_query_success_parses_tab_separated_output(self, mock_run) -> None:
        """Test that run_query correctly parses tab-separated multi-row output."""
        mock_result = MagicMock()
        mock_result.returncode = 0
        mock_result.stdout = "9464\n37753\n3066\n"
        mock_run.return_value = mock_result

        result = run_query("SELECT COUNT(*) FROM quest_template")

        self.assertEqual(result, [("9464",), ("37753",), ("3066",)])
        mock_run.assert_called_once()

    @patch("db_extract.subprocess.run")
    def test_run_query_success_with_multiple_columns(self, mock_run) -> None:
        """Test run_query with multi-column tab-separated output."""
        mock_result = MagicMock()
        mock_result.returncode = 0
        mock_result.stdout = "1\tname1\tvalue1\n2\tname2\tvalue2\n"
        mock_run.return_value = mock_result

        result = run_query("SELECT id, name, value FROM items")

        self.assertEqual(
            result,
            [("1", "name1", "value1"), ("2", "name2", "value2")],
        )

    @patch("db_extract.subprocess.run")
    def test_run_query_raises_error_on_mysql_failure(self, mock_run) -> None:
        """Test that run_query raises RuntimeError when mysql.exe fails."""
        mock_result = MagicMock()
        mock_result.returncode = 1
        mock_result.stderr = "ERROR 1045: Access denied for user 'test'@'localhost'"
        mock_run.return_value = mock_result

        with self.assertRaises(RuntimeError) as context:
            run_query("SELECT * FROM invalid_table")

        self.assertIn("mysql.exe query failed", str(context.exception))
        self.assertIn("Access denied", str(context.exception))


class TestParseMapExpansions(unittest.TestCase):
    def _write_fake_dbc(self, tmpdir: str, records: list[tuple[int, int]]) -> pathlib.Path:
        """records: list of (map_id, expansion_id) -- writes a minimal real
        WDBC file with exactly 64 int32 fields per record (matching
        MapEntry's real field_count so field[63] really is expansionID),
        every other field zeroed, no string block content needed."""
        field_count = 64
        record_size = field_count * 4
        path = pathlib.Path(tmpdir) / "Map.dbc"
        with open(path, "wb") as f:
            f.write(b"WDBC")
            f.write(struct.pack("<4I", len(records), field_count, record_size, 0))
            for map_id, expansion_id in records:
                fields = [0] * field_count
                fields[0] = map_id
                fields[63] = expansion_id
                f.write(struct.pack("<" + "i" * field_count, *fields))
        return path

    def test_resolves_known_expansion_ids(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = self._write_fake_dbc(tmp, [(0, 0), (530, 1), (571, 2)])
            result = parse_map_expansions(path)
        self.assertEqual(result, {0: "vanilla", 530: "tbc", 571: "wotlk"})

    def test_unrecognized_expansion_id_defaults_to_vanilla(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = self._write_fake_dbc(tmp, [(999, 99)])
            result = parse_map_expansions(path)
        self.assertEqual(result, {999: "vanilla"})

    def test_rejects_non_wdbc_file(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = pathlib.Path(tmp) / "not_a_dbc.dbc"
            path.write_bytes(b"NOTWDBC!")
            with self.assertRaises(ValueError):
                parse_map_expansions(path)

    def test_real_map_dbc_resolves_known_continents_and_instances(self) -> None:
        # Real-file integration check against this checkout's actual
        # Map.dbc, confirming the field[63]=expansionID offset assumption
        # against known, human-verifiable data (not just a synthetic file).
        result = parse_map_expansions()
        self.assertEqual(result[0], "vanilla")   # Eastern Kingdoms
        self.assertEqual(result[1], "vanilla")   # Kalimdor
        self.assertEqual(result[389], "vanilla") # Ragefire Chasm
        self.assertEqual(result[530], "tbc")     # Outland
        self.assertEqual(result[532], "tbc")     # Karazhan
        self.assertEqual(result[571], "wotlk")   # Northrend
        self.assertEqual(result[574], "wotlk")   # Utgarde Keep
        self.assertEqual(result[631], "wotlk")   # Icecrown Citadel


class TestParseMapNamesAndInstanceTypes(unittest.TestCase):
    def test_real_map_dbc_resolves_known_names_and_slugifies(self) -> None:
        names = parse_map_names()
        self.assertEqual(names[0], "eastern_kingdoms")
        self.assertEqual(names[1], "kalimdor")
        self.assertEqual(names[43], "wailing_caverns")
        self.assertEqual(names[47], "razorfen_kraul")
        self.assertEqual(names[129], "razorfen_downs")
        self.assertEqual(names[409], "molten_core")

    def test_real_map_dbc_resolves_known_instance_types(self) -> None:
        instance_types = parse_map_instance_types()
        self.assertEqual(instance_types[0], 0)   # Eastern Kingdoms -- continent
        self.assertEqual(instance_types[1], 0)   # Kalimdor -- continent
        self.assertEqual(instance_types[530], 0)  # Outland -- continent
        self.assertEqual(instance_types[571], 0)  # Northrend -- continent
        self.assertEqual(instance_types[43], 1)   # Wailing Caverns -- dungeon
        self.assertEqual(instance_types[47], 1)   # Razorfen Kraul -- dungeon
        self.assertEqual(instance_types[129], 1)  # Razorfen Downs -- dungeon
        self.assertEqual(instance_types[409], 2)  # Molten Core -- raid

    def test_slugified_instance_names_match_existing_hand_curated_keys(self) -> None:
        # Real validation this task's own research already confirmed:
        # zone_leveler_content_data.py's hand-curated instance_keys tuple
        # ("wailing_caverns", "razorfen_kraul", "razorfen_downs") exactly
        # matches what this general Map.dbc mechanism produces on its
        # own -- not a coincidence to re-derive by hand each time.
        names = parse_map_names()
        for map_id, expected_key in ((43, "wailing_caverns"), (47, "razorfen_kraul"), (129, "razorfen_downs")):
            self.assertEqual(names[map_id], expected_key)


class TestParseSkillLineAbilities(unittest.TestCase):
    def _write_fake_dbc(self, tmpdir: str, records: list[tuple[int, int, int]]) -> pathlib.Path:
        """records: list of (id, skill_line, spell_id) -- writes a minimal
        real WDBC file with exactly 14 int32 fields per record (matching
        SkillLineAbilityEntry's real field_count so field[1]/field[2] really
        are SkillLine/Spell -- src/server/shared/DataStores/DBCStructure.h:
        1597-1612), every other field zeroed, no string block needed."""
        field_count = 14
        record_size = field_count * 4
        path = pathlib.Path(tmpdir) / "SkillLineAbility.dbc"
        with open(path, "wb") as f:
            f.write(b"WDBC")
            f.write(struct.pack("<4I", len(records), field_count, record_size, 0))
            for id_, skill_line, spell_id in records:
                fields = [0] * field_count
                fields[0] = id_
                fields[1] = skill_line
                fields[2] = spell_id
                f.write(struct.pack("<" + "i" * field_count, *fields))
        return path

    def test_resolves_spell_id_to_skill_line(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = self._write_fake_dbc(tmp, [(69, 6, 116), (472, 6, 205)])
            result = parse_skill_line_abilities(path)
        self.assertEqual(result, {116: 6, 205: 6})

    def test_first_record_wins_when_a_spell_id_appears_twice(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = self._write_fake_dbc(tmp, [(1, 100, 500), (2, 200, 500)])
            result = parse_skill_line_abilities(path)
        self.assertEqual(result, {500: 100})

    def test_rejects_non_wdbc_file(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = pathlib.Path(tmp) / "not_a_dbc.dbc"
            path.write_bytes(b"NOTWDBC!")
            with self.assertRaises(ValueError):
                parse_skill_line_abilities(path)

    def test_real_skill_line_ability_dbc_resolves_known_recipe_spells(self) -> None:
        # Real-file integration check against this checkout's actual
        # SkillLineAbility.dbc, confirming field[1]/field[2] against known,
        # human-verifiable recipe-target spells (this plan's own research).
        result = parse_skill_line_abilities()
        self.assertEqual(result[2543], 185)  # Cook: Westfall Stew -> Cooking
        self.assertEqual(result[2158], 165)  # Leatherworking pattern -> Leatherworking
        self.assertEqual(result[3230], 171)  # Alchemy recipe -> Alchemy


class TestParseSpellNames(unittest.TestCase):
    def _write_fake_dbc(self, tmpdir: str, records: list[tuple[int, str]]) -> pathlib.Path:
        """records: list of (spell_id, enUS_name) -- writes a minimal real
        WDBC file with exactly 234 int32-sized fields per record (matching
        SpellEntry's real field_count so field[136] really is the enUS
        SpellName string-block offset -- DBCStructure.h:1719) and a real
        trailing string block."""
        field_count = 234
        record_size = field_count * 4
        path = pathlib.Path(tmpdir) / "Spell.dbc"
        string_block = b"\x00"  # offset 0 is always the empty string
        offsets = []
        for _, name in records:
            offsets.append(len(string_block))
            string_block += name.encode("utf-8") + b"\x00"
        with open(path, "wb") as f:
            f.write(b"WDBC")
            f.write(struct.pack("<4I", len(records), field_count, record_size, len(string_block)))
            for (spell_id, _name), offset in zip(records, offsets):
                fields = [0] * field_count
                fields[0] = spell_id
                fields[136] = offset
                f.write(struct.pack("<" + "i" * field_count, *fields))
            f.write(string_block)
        return path

    def test_resolves_spell_id_to_enus_name(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = self._write_fake_dbc(tmp, [(72, "Shield Bash"), (100, "Charge")])
            result = parse_spell_names(path)
        self.assertEqual(result, {72: "Shield Bash", 100: "Charge"})

    def test_rejects_non_wdbc_file(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = pathlib.Path(tmp) / "not_a_dbc.dbc"
            path.write_bytes(b"NOTWDBC!")
            with self.assertRaises(ValueError):
                parse_spell_names(path)

    def test_real_spell_dbc_resolves_known_spell_names(self) -> None:
        # Real-file integration check against this checkout's actual
        # Spell.dbc, confirming field[136]'s string-block-offset resolution
        # against known, human-verifiable spell names.
        result = parse_spell_names()
        self.assertEqual(result[72], "Shield Bash")
        self.assertEqual(result[100], "Charge")
        self.assertEqual(result[2543], "Westfall Stew")


class TestParseAchievements(unittest.TestCase):
    def _write_fake_achievement_dbc(self, tmpdir: str, records: list[tuple[int, str, int, int]]) -> pathlib.Path:
        """records: list of (id, name, category_id, flags) -- writes a
        minimal real WDBC file with exactly 62 int32 fields per record
        (matching Achievementfmt's real field_count), name written into
        field[4] (the first of 16 locale slots) as a string-block offset,
        category_id into field[38], flags into field[41]."""
        field_count = 62
        record_size = field_count * 4
        path = pathlib.Path(tmpdir) / "Achievement.dbc"
        string_block = b"\x00"  # offset 0 is always the empty string
        offsets = []
        for _id, name, _cat, _flags in records:
            offsets.append(len(string_block))
            string_block += name.encode("utf-8") + b"\x00"
        with open(path, "wb") as f:
            f.write(b"WDBC")
            f.write(struct.pack("<4I", len(records), field_count, record_size, len(string_block)))
            for (aid, _name, cat, flags), name_offset in zip(records, offsets):
                fields = [0] * field_count
                fields[0] = aid
                fields[4] = name_offset
                fields[38] = cat
                fields[41] = flags
                f.write(struct.pack("<" + "i" * field_count, *fields))
            f.write(string_block)
        return path

    def test_parses_id_name_category_flags(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = self._write_fake_achievement_dbc(tmp, [(46, "World Explorer", 97, 0), (2336, "Insane in the Membrane", 81, 0)])
            result = parse_achievements(path)
        self.assertEqual(len(result), 2)
        self.assertEqual(result[0], {"id": 46, "name": "World Explorer", "category_id": 97, "flags": 0})
        self.assertEqual(result[1], {"id": 2336, "name": "Insane in the Membrane", "category_id": 81, "flags": 0})

    def test_real_achievement_dbc_finds_world_explorer_by_id_46(self) -> None:
        # Real-file integration check against this checkout's actual
        # Achievement.dbc -- confirms the field-offset assumptions above
        # against known, human-verifiable real data, not just a synthetic
        # fixture.
        result = parse_achievements()
        self.assertEqual(len(result), 1817)
        by_id = {row["id"]: row for row in result}
        self.assertEqual(by_id[46]["name"], "World Explorer")
        self.assertEqual(by_id[46]["category_id"], 97)
        self.assertEqual(by_id[46]["flags"], 0)


class TestParseAchievementCategories(unittest.TestCase):
    def _write_fake_category_dbc(self, tmpdir: str, records: list[tuple[int, int, str]]) -> pathlib.Path:
        """records: list of (id, parent_category, name) -- 20 int32
        fields/record (AchievementCategoryfmt), name in field[2]."""
        field_count = 20
        record_size = field_count * 4
        path = pathlib.Path(tmpdir) / "Achievement_Category.dbc"
        string_block = b"\x00"
        offsets = []
        for _id, _parent, name in records:
            offsets.append(len(string_block))
            string_block += name.encode("utf-8") + b"\x00"
        with open(path, "wb") as f:
            f.write(b"WDBC")
            f.write(struct.pack("<4I", len(records), field_count, record_size, len(string_block)))
            for (cid, parent, _name), name_offset in zip(records, offsets):
                fields = [0] * field_count
                fields[0] = cid
                fields[1] = parent
                fields[2] = name_offset
                f.write(struct.pack("<" + "i" * field_count, *fields))
            f.write(string_block)
        return path

    def test_a_root_category_resolves_to_itself(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = self._write_fake_category_dbc(tmp, [(97, -1, "Exploration")])
            result = parse_achievement_categories(path)
        self.assertEqual(result[97], (97, "Exploration"))

    def test_a_leaf_category_resolves_up_to_its_real_root(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = self._write_fake_category_dbc(tmp, [
                (168, -1, "Dungeons & Raids"),
                (14961, 168, "Secrets of Ulduar 10-Player Raid"),
            ])
            result = parse_achievement_categories(path)
        self.assertEqual(result[14961], (168, "Secrets of Ulduar 10-Player Raid"))

    def test_real_achievement_category_dbc_resolves_known_roots(self) -> None:
        result = parse_achievement_categories()
        self.assertEqual(result[97], (97, "Exploration"))
        self.assertEqual(result[81], (81, "Feats of Strength"))
        self.assertEqual(result[14961][0], 168)  # Secrets of Ulduar 10-Player Raid -> Dungeons & Raids
        self.assertEqual(result[14961][1], "Secrets of Ulduar 10-Player Raid")


class TestParseAreaZoneIds(unittest.TestCase):
    """M4.11.1 Task 2: quest_template.QuestSortID resolution mechanism --
    see parse_area_zone_ids's own docstring (db_extract.py) for the full
    empirical justification against this checkout's real live DB."""

    def _write_fake_dbc(self, tmpdir: str, records: list[tuple[int, int]]) -> pathlib.Path:
        """records: list of (area_id, zone_field) -- writes a minimal real
        WDBC file with exactly 36 int32 fields per record (matching
        AreaTableEntryfmt's real field_count, src/server/shared/DataStores/
        DBCfmt.h:24, so field[2] really is the `zone` parent field --
        DBCStructure.h:518-524), every other field zeroed, no string block
        content needed."""
        field_count = 36
        record_size = field_count * 4
        path = pathlib.Path(tmpdir) / "AreaTable.dbc"
        with open(path, "wb") as f:
            f.write(b"WDBC")
            f.write(struct.pack("<4I", len(records), field_count, record_size, 0))
            for area_id, zone_field in records:
                fields = [0] * field_count
                fields[0] = area_id
                fields[2] = zone_field
                f.write(struct.pack("<" + "i" * field_count, *fields))
        return path

    def test_a_top_level_zone_resolves_to_itself(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = self._write_fake_dbc(tmp, [(17, 0)])  # The Barrens: zone field 0
            result = parse_area_zone_ids(path)
        self.assertEqual(result[17], 17)

    def test_a_subzone_resolves_up_to_its_real_parent_zone(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = self._write_fake_dbc(tmp, [(12, 0), (9, 12)])  # Elwynn Forest / Northshire
            result = parse_area_zone_ids(path)
        self.assertEqual(result[9], 12)
        self.assertEqual(result[12], 12)

    def test_rejects_non_wdbc_file(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = pathlib.Path(tmp) / "not_a_dbc.dbc"
            path.write_bytes(b"NOTWDBC!")
            with self.assertRaises(ValueError):
                parse_area_zone_ids(path)

    def test_real_area_table_dbc_resolves_known_zones_and_subzones(self) -> None:
        # Real-file integration check against this checkout's actual
        # AreaTable.dbc, confirming the field[2]=`zone` offset assumption
        # against known, human-verifiable real data (M4.11.1 Task 2
        # research): Area 17 (The Barrens) and Area 14 (Durotar) are both
        # real top-level zones (zone field 0, resolve to themselves); Area
        # 9 (Northshire) is a real subzone of Area 12 (Elwynn Forest).
        result = parse_area_zone_ids()
        self.assertEqual(result[17], 17)   # The Barrens
        self.assertEqual(result[14], 14)   # Durotar
        self.assertEqual(result[9], 12)    # Northshire -> Elwynn Forest
        self.assertEqual(result[12], 12)   # Elwynn Forest (itself a top-level zone)


class TestParseWorldMapAreasAndResolveZoneIdFromPosition(unittest.TestCase):
    """M4.11.1 Task 5: Key Hunt rares.yaml zone-tagging mechanism -- see
    parse_world_map_areas's own docstring (db_extract.py) for the full
    empirical justification against this checkout's real live DB (every
    curated creature entry has creature.zoneId/areaId == 0, so this
    WorldMapArea.dbc bounding-box mechanism is the real replacement)."""

    def _write_fake_wma_dbc(
        self, tmpdir: str, rows: list[tuple[int, int, float, float, float, float, int]],
    ) -> pathlib.Path:
        """rows: list of (map_id, area_id, y1, y2, x1, x2, virtual_map_id) --
        writes a minimal real WDBC file with exactly 11 fields per record
        (matching WorldMapAreaEntryfmt's real field_count, "xinxffffixx" per
        src/server/shared/DataStores/DBCfmt.h:131), field0 (ID) zeroed since
        it's unused by parse_world_map_areas."""
        field_count = 11
        record_size = field_count * 4
        path = pathlib.Path(tmpdir) / "WorldMapArea.dbc"
        with open(path, "wb") as f:
            f.write(b"WDBC")
            f.write(struct.pack("<4I", len(rows), field_count, record_size, 0))
            for map_id, area_id, y1, y2, x1, x2, virtual_map_id in rows:
                f.write(struct.pack("<i", 0))                       # field0: ID (unused)
                f.write(struct.pack("<i", map_id))                  # field1: map_id
                f.write(struct.pack("<i", area_id))                 # field2: area_id
                f.write(struct.pack("<i", 0))                       # field3: internal_name (unused)
                f.write(struct.pack("<f", y1))                      # field4: y1
                f.write(struct.pack("<f", y2))                      # field5: y2
                f.write(struct.pack("<f", x1))                      # field6: x1
                f.write(struct.pack("<f", x2))                      # field7: x2
                f.write(struct.pack("<i", virtual_map_id))          # field8: virtual_map_id
                f.write(struct.pack("<i", 0))                       # field9: unused
                f.write(struct.pack("<i", 0))                       # field10: unused
        return path

    def test_parses_map_id_area_id_and_normalizes_bounding_box(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            # y1/y2 and x1/x2 deliberately given high-to-low, matching real
            # WorldMapArea.dbc rows (e.g. Elwynn Forest's own real row) --
            # parse_world_map_areas must normalize via min/max, not assume
            # already-sorted order.
            path = self._write_fake_wma_dbc(tmp, [(0, 12, 200.0, -200.0, 100.0, -100.0, -1)])
            result = parse_world_map_areas(path)
        self.assertEqual(result, [(0, 12, -100.0, 100.0, -200.0, 200.0)])

    def test_rejects_non_wdbc_file(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = pathlib.Path(tmp) / "not_a_dbc.dbc"
            path.write_bytes(b"NOTWDBC!")
            with self.assertRaises(ValueError):
                parse_world_map_areas(path)

    def test_resolve_picks_smallest_containing_box_not_first_match(self) -> None:
        # Two overlapping candidate boxes on the same map -- the smaller one
        # (a more specific sub-region) must win even though it's listed
        # second, matching this checkout's real overlapping-zone cases
        # (e.g. Mulgore/Dustwallow Marsh near their shared Kalimdor border).
        world_map_areas = [
            (1, 100, -1000.0, 1000.0, -1000.0, 1000.0),  # large enclosing box
            (1, 200, -10.0, 10.0, -10.0, 10.0),           # small box, fully inside the first
        ]
        area_zone_ids = {100: 100, 200: 200}
        result = resolve_zone_id_from_position(1, 5.0, 5.0, world_map_areas, area_zone_ids)
        self.assertEqual(result, 200)

    def test_resolve_returns_zero_sentinel_when_no_box_contains_the_point(self) -> None:
        world_map_areas = [(1, 100, -10.0, 10.0, -10.0, 10.0)]
        area_zone_ids = {100: 100}
        result = resolve_zone_id_from_position(1, 500.0, 500.0, world_map_areas, area_zone_ids)
        self.assertEqual(result, 0)

    def test_resolve_ignores_rows_on_a_different_map(self) -> None:
        world_map_areas = [(999, 100, -10.0, 10.0, -10.0, 10.0)]
        area_zone_ids = {100: 100}
        result = resolve_zone_id_from_position(1, 0.0, 0.0, world_map_areas, area_zone_ids)
        self.assertEqual(result, 0)

    def test_real_world_map_area_dbc_resolves_known_zones_from_real_positions(self) -> None:
        # Real-file integration check against this checkout's actual
        # WorldMapArea.dbc + AreaTable.dbc, using real (map, position_x,
        # position_y) rows taken directly from this checkout's live
        # `creature` table for rares.yaml's own curated entries (M4.11.1
        # Task 5 research) -- confirms the bounding-box mechanism resolves
        # to the same real zones documented in rares.yaml's own header
        # comment.
        world_map_areas = parse_world_map_areas()
        area_zone_ids = parse_area_zone_ids()

        # Morgaine the Sly (creature_entry 99): real spawn map=0,
        # position=(-9437.81, 466.159) -> Elwynn Forest (zone 12).
        self.assertEqual(
            resolve_zone_id_from_position(0, -9437.81, 466.159, world_map_areas, area_zone_ids), 12,
        )
        # Commander Felstrom (creature_entry 771): real spawn map=0,
        # position=(-10398.8, 347.001) -> Duskwood (zone 10).
        self.assertEqual(
            resolve_zone_id_from_position(0, -10398.8, 347.001, world_map_areas, area_zone_ids), 10,
        )
        # Gondria (creature_entry 33776): real spawn map=571 (Northrend),
        # position=(6067.13, -4072.1) -> Zul'Drak (zone 66).
        self.assertEqual(
            resolve_zone_id_from_position(571, 6067.13, -4072.1, world_map_areas, area_zone_ids), 66,
        )
        # Dr. Whitherlimb (creature_entry 22062): real spawn map=530,
        # position=(6300.91, -6252.88) -> Ghostlands (zone 3433) -- the real,
        # confirmed-not-a-bug WotLK client quirk documented in
        # parse_world_map_areas's own docstring (Quel'Thalas terrain shares
        # Outland's physical map_id).
        self.assertEqual(
            resolve_zone_id_from_position(530, 6300.91, -6252.88, world_map_areas, area_zone_ids), 3433,
        )

    def test_resolve_zone_ids_returns_every_containing_box_not_just_smallest(self) -> None:
        world_map_areas = [
            (1, 100, -1000.0, 1000.0, -1000.0, 1000.0),  # large enclosing box
            (1, 200, -10.0, 10.0, -10.0, 10.0),           # small box, fully inside the first
        ]
        area_zone_ids = {100: 100, 200: 200}
        result = resolve_zone_ids_from_position(1, 5.0, 5.0, world_map_areas, area_zone_ids)
        self.assertEqual(result, frozenset({100, 200}))

    def test_resolve_zone_ids_returns_empty_frozenset_when_no_box_contains_the_point(self) -> None:
        world_map_areas = [(1, 100, -10.0, 10.0, -10.0, 10.0)]
        area_zone_ids = {100: 100}
        result = resolve_zone_ids_from_position(1, 500.0, 500.0, world_map_areas, area_zone_ids)
        self.assertEqual(result, frozenset())

    def test_resolve_zone_ids_ignores_rows_on_a_different_map(self) -> None:
        world_map_areas = [(999, 100, -10.0, 10.0, -10.0, 10.0)]
        area_zone_ids = {100: 100}
        result = resolve_zone_ids_from_position(1, 0.0, 0.0, world_map_areas, area_zone_ids)
        self.assertEqual(result, frozenset())

    def test_real_barrens_durotar_border_ambiguity_now_returns_both_zones(self) -> None:
        # Babagaya Shadowcleft (a real Warlock Trainer): real spawn map=1,
        # position=(-782.82, -3704.84) -- geographically inside Barrens near
        # Ratchet, but the old single-winner resolver returns only 14
        # (Durotar) here because Barrens' own WorldMapArea box is almost
        # entirely overlapped by the smaller Durotar/Mulgore boxes on this
        # map (final whole-branch review, M4.11.2, 2026-09-02). Confirmed
        # this session: both 14 and 17 genuinely contain this point.
        world_map_areas = parse_world_map_areas()
        area_zone_ids = parse_area_zone_ids()
        result = resolve_zone_ids_from_position(1, -782.82, -3704.84, world_map_areas, area_zone_ids)
        self.assertIn(14, result)
        self.assertIn(17, result)


class TestParseFillerBuffSpellCandidates(unittest.TestCase):
    def _write_fake_dbc(self, tmpdir: str, records: list[dict]) -> pathlib.Path:
        """records: list of dicts with optional keys id/name/dispel/
        attributes/attributes4/effects (a list of up to 3
        (effect, base_points, aura_name) tuples; unfilled effect slots
        default to (0, 0, 0)) -- writes a minimal real WDBC file with
        exactly 234 int32 fields per record, matching SpellEntry's real
        field_count so field[2]/field[4]/field[8]/field[71-73]/[80-82]/
        [95-97]/[136] are the real Dispel/Attributes/AttributesEx4/Effect/
        EffectBasePoints/EffectApplyAuraName/SpellName offsets this
        parser reads (DBCStructure.h, verified during M4.9.6 planning)."""
        field_count = 234
        record_size = field_count * 4
        path = pathlib.Path(tmpdir) / "Spell.dbc"
        string_block = b"\x00"
        offsets = []
        for rec in records:
            offsets.append(len(string_block))
            string_block += rec.get("name", "").encode("utf-8") + b"\x00"
        with open(path, "wb") as f:
            f.write(b"WDBC")
            f.write(struct.pack("<4I", len(records), field_count, record_size, len(string_block)))
            for rec, offset in zip(records, offsets):
                fields = [0] * field_count
                fields[0] = rec.get("id", 1)
                fields[2] = rec.get("dispel", 1)
                fields[4] = rec.get("attributes", 0)
                fields[8] = rec.get("attributes4", 0)
                for idx, (effect, base_points, aura_name) in enumerate(rec.get("effects", [])[:3]):
                    fields[71 + idx] = effect
                    fields[80 + idx] = base_points
                    fields[95 + idx] = aura_name
                fields[136] = offset
                f.write(struct.pack("<" + "i" * field_count, *fields))
            f.write(string_block)
        return path

    def test_includes_a_real_positive_periodic_heal_aura_dispellable_by_magic(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = self._write_fake_dbc(tmp, [
                {"id": 774, "name": "Rejuvenation", "dispel": 1, "effects": [(6, 100, 8)]},
            ])
            result = parse_filler_buff_spell_candidates(path)
        self.assertEqual(result, {774: "Rejuvenation"})

    def test_excludes_non_magic_dispel(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = self._write_fake_dbc(tmp, [
                {"id": 6673, "name": "Battle Shout", "dispel": 0, "effects": [(6, 100, 99)]},
            ])
            result = parse_filler_buff_spell_candidates(path)
        self.assertEqual(result, {})

    def test_excludes_passive_spells(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = self._write_fake_dbc(tmp, [
                {"id": 100, "name": "Fake Passive", "dispel": 1, "attributes": 0x40, "effects": [(6, 100, 8)]},
            ])
            result = parse_filler_buff_spell_candidates(path)
        self.assertEqual(result, {})

    def test_excludes_cannot_be_stolen_spells(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = self._write_fake_dbc(tmp, [
                {"id": 101, "name": "Fake Unstealable", "dispel": 1, "attributes4": 0x40, "effects": [(6, 100, 8)]},
            ])
            result = parse_filler_buff_spell_candidates(path)
        self.assertEqual(result, {})

    def test_excludes_periodic_damage_aura_a_dot_not_a_buff(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = self._write_fake_dbc(tmp, [
                {"id": 172, "name": "Fake DoT", "dispel": 1, "effects": [(6, 50, 3)]},
            ])
            result = parse_filler_buff_spell_candidates(path)
        self.assertEqual(result, {})

    def test_excludes_negative_base_points_even_on_an_allowlisted_aura_type(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = self._write_fake_dbc(tmp, [
                {"id": 348, "name": "Fake Debuff", "dispel": 1, "effects": [(6, -50, 13)]},
            ])
            result = parse_filler_buff_spell_candidates(path)
        self.assertEqual(result, {})

    def test_excludes_a_spell_whose_other_slot_carries_a_negative_aura_even_though_one_slot_is_positive(self) -> None:
        # I1 (final whole-branch review): real spell 5782 "Fear" has
        # effect slots [MOD_FEAR (aura 7, bp=-1), MOD_INCREASE_SPEED
        # (aura 31, bp=24)] -- the OLD has_positive_aura-only check
        # accepted it purely on slot 2, never noticing slot 1's negative
        # aura. This fake record reproduces that exact two-slot shape:
        # slot 1 = MOD_FEAR (a denylisted negative aura type) with
        # POSITIVE base points (so it isn't excluded merely for negative
        # bp), slot 2 = MOD_INCREASE_SPEED (an allowlisted positive aura
        # type) with positive base points -- slot 2 alone would satisfy
        # the old positive-only check, so this proves the new veto pass
        # rejects the whole spell regardless.
        with tempfile.TemporaryDirectory() as tmp:
            path = self._write_fake_dbc(tmp, [
                {"id": 5782, "name": "Fake Fear", "dispel": 1, "effects": [(6, 1, 7), (6, 24, 31)]},
            ])
            result = parse_filler_buff_spell_candidates(path)
        self.assertEqual(result, {})

    def test_excludes_names_matching_the_shared_denylist(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = self._write_fake_dbc(tmp, [
                {"id": 2381, "name": "Resistance (OLD)", "dispel": 1, "effects": [(6, 10, 22)]},
            ])
            result = parse_filler_buff_spell_candidates(path)
        self.assertEqual(result, {})

    def test_excludes_glued_test_digit_names_matching_the_shared_denylist(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = self._write_fake_dbc(tmp, [
                {"id": 19362, "name": "MHTest03", "dispel": 1, "effects": [(6, 10, 22)]},
            ])
            result = parse_filler_buff_spell_candidates(path)
        self.assertEqual(result, {})

    def test_real_spell_dbc_produces_the_verified_candidate_count_and_spot_checks(self) -> None:
        # Real-file integration check against this checkout's actual
        # Spell.dbc. 568 confirmed live during M4.9.6 planning; 519
        # re-confirmed live after the final whole-branch review's I1 (the
        # cross-slot negative-aura veto pass, -45: 568 -> 523) and I2 (4
        # new exclusion_rules.yaml patterns, -4: 523 -> 519) fixes
        # (re-run the extraction if the checked-in Spell.dbc, db_extract.py's
        # aura denylist, or exclusion_rules.yaml ever change).
        result = parse_filler_buff_spell_candidates()
        self.assertEqual(len(result), 519)
        self.assertEqual(result[774], "Rejuvenation")
        self.assertEqual(result[1459], "Arcane Intellect")
        self.assertNotIn(469, result)    # not Magic-dispel
        self.assertNotIn(6673, result)   # not Magic-dispel (Battle Shout)
        self.assertNotIn(2381, result)   # "Resistance (OLD)" -- denylisted
        self.assertNotIn(19362, result)  # "MHTest03" -- denylisted
        # I1: cross-slot negative-aura veto -- real spells whose OTHER
        # effect slot carries a genuine CC/debuff aura even though one
        # slot alone would have passed the old positive-only check.
        self.assertNotIn(5782, result)   # "Fear" -- MOD_FEAR + MOD_INCREASE_SPEED
        self.assertNotIn(11020, result)  # "Petrify" -- MOD_STUN-bearing
        # I2: new exclusion_rules.yaml patterns (final whole-branch review).
        self.assertNotIn(67007, result)  # "Spell Steal Bug" -- \bBug\b
        self.assertNotIn(54283, result)  # "Increase Critical Strike Chance 100%"
        self.assertNotIn(54303, result)  # "Uber Spirit 80 Buff" -- \bUber\b
        self.assertNotIn(54675, result)  # "30% Crit 80 Buff" -- \d+\s+Buff\b
        # Real, legitimate Roman-numeral-tiered potion buffs investigated
        # and deliberately left IN during I2 (final whole-branch review):
        # no confident evidence they are internal/unused, so per that
        # finding's own explicit guidance a false negative here is not
        # asked for -- see the fix report for the full investigation.
        self.assertIn(3369, result)   # "Potion Strength II"
        self.assertIn(16884, result)  # "Health II"
        self.assertIn(16885, result)  # "Agility VIII"
        self.assertIn(16888, result)  # "Intellect IX"


class TestParseAreaNamesAndSlugify(unittest.TestCase):
    def test_slugify_strips_leading_the_and_snake_cases(self) -> None:
        self.assertEqual(_slugify_area_name("The Barrens"), "barrens")
        self.assertEqual(_slugify_area_name("Orgrimmar"), "orgrimmar")
        self.assertEqual(_slugify_area_name("Stonetalon Mountains"), "stonetalon_mountains")

    def test_slugify_strips_apostrophes_and_other_punctuation(self) -> None:
        self.assertEqual(_slugify_area_name("Un'Goro Crater"), "un_goro_crater")

    def test_real_area_table_dbc_resolves_known_names(self) -> None:
        # Real-file integration check against this checkout's actual
        # AreaTable.dbc -- confirms field index 11 is still AreaName_enUS
        # and the slugify output matches this project's existing
        # instance_keys naming convention (snake_case, no "the_" prefix).
        names = parse_area_names()
        self.assertEqual(names[14], "durotar")
        self.assertEqual(names[17], "barrens")
        self.assertEqual(names[331], "ashenvale")
        self.assertEqual(names[361], "felwood")
        self.assertEqual(names[406], "stonetalon_mountains")
        self.assertEqual(names[1637], "orgrimmar")


class TestResolveAreaTagsForPositions(unittest.TestCase):
    def test_unions_across_multiple_positions(self) -> None:
        world_map_areas = [
            (1, 100, -10.0, 10.0, -10.0, 10.0),
            (1, 200, 90.0, 110.0, 90.0, 110.0),
        ]
        area_zone_ids = {100: 100, 200: 200}
        area_names = {100: "zone_a", 200: "zone_b"}
        result = resolve_area_tags_for_positions(
            [(1, 0.0, 0.0), (1, 100.0, 100.0)], world_map_areas, area_zone_ids, area_names,
        )
        self.assertEqual(result, frozenset({"zone_a", "zone_b"}))

    def test_empty_positions_list_returns_empty_frozenset(self) -> None:
        result = resolve_area_tags_for_positions([], [], {}, {})
        self.assertEqual(result, frozenset())

    def test_real_ghostpaw_runner_spans_four_real_zones(self) -> None:
        # Ghostpaw Runner (creature_template.entry 3823): 69 real spawn
        # rows on map 1. Confirmed this session: unioning every real spawn
        # position resolves to (at least) Durotar/Ashenvale/Felwood/
        # Stonetalon Mountains -- a single-winner resolver (the old
        # mechanism) would have collapsed this to one zone, permanently
        # misclassifying the other three for any content family keying
        # off it. Re-run this query yourself before finalizing to confirm
        # the real position list still matches.
        from db_extract import run_query
        world_map_areas = parse_world_map_areas()
        area_zone_ids = parse_area_zone_ids()
        area_names = parse_area_names()
        rows = run_query("SELECT map, position_x, position_y FROM creature WHERE id = 3823")
        positions = [(int(m), float(x), float(y)) for m, x, y in rows]
        result = resolve_area_tags_for_positions(positions, world_map_areas, area_zone_ids, area_names)
        self.assertTrue({"durotar", "ashenvale", "felwood", "stonetalon_mountains"} <= result)


class TestResolveAreaOrInstanceTagsForPositions(unittest.TestCase):
    def test_open_world_position_resolves_normally(self) -> None:
        world_map_areas = [(1, 100, -10.0, 10.0, -10.0, 10.0)]
        area_zone_ids = {100: 100}
        area_names = {100: "barrens"}
        map_instance_types = {1: 0}
        map_names = {1: "kalimdor"}
        result = resolve_area_or_instance_tags_for_positions(
            [(1, 0.0, 0.0)], world_map_areas, area_zone_ids, area_names, map_instance_types, map_names,
        )
        self.assertEqual(result, frozenset({"barrens"}))

    def test_instanced_position_resolves_to_instance_name_not_open_world_zone(self) -> None:
        # The whole point: an interior spawn's map (43 = Wailing Caverns,
        # InstanceType=1) must resolve to "wailing_caverns" ONLY -- never
        # unioned with whatever open-world zone the instance's entrance
        # happens to sit in, since a future door-shuffle feature must be
        # able to relocate the entrance without silently reclassifying
        # the instance's own content (design spec section on instance
        # area tags).
        world_map_areas = [(43, 999, -10000.0, 10000.0, -10000.0, 10000.0)]  # deliberately
                            # broad, to prove it's ignored, not just absent
        area_zone_ids = {999: 999}
        area_names = {999: "should_never_be_used"}
        map_instance_types = {43: 1}
        map_names = {43: "wailing_caverns"}
        result = resolve_area_or_instance_tags_for_positions(
            [(43, 0.0, 0.0)], world_map_areas, area_zone_ids, area_names, map_instance_types, map_names,
        )
        self.assertEqual(result, frozenset({"wailing_caverns"}))

    def test_mixed_positions_union_correctly_without_cross_contamination(self) -> None:
        world_map_areas = [(1, 100, -10.0, 10.0, -10.0, 10.0)]
        area_zone_ids = {100: 100}
        area_names = {100: "barrens"}
        map_instance_types = {1: 0, 43: 1}
        map_names = {43: "wailing_caverns"}
        result = resolve_area_or_instance_tags_for_positions(
            [(1, 0.0, 0.0), (43, 5.0, 5.0)], world_map_areas, area_zone_ids, area_names, map_instance_types, map_names,
        )
        self.assertEqual(result, frozenset({"barrens", "wailing_caverns"}))


def test_parse_pool_gameobject_memberships_shape(monkeypatch):
    def fake_run_query(sql):
        assert "pool_gameobject" in sql
        return [("100", "5"), ("101", "5"), ("200", "9")]
    monkeypatch.setattr(db_extract, "run_query", fake_run_query)
    result = db_extract.parse_pool_gameobject_memberships()
    assert result == {100: 5, 101: 5, 200: 9}


def test_resolve_zone_pool_units_pooled_spawns_count_as_one_unit():
    # Two real spawn guids (100, 101) share pool_entry 5 -- they must
    # collapse into ONE unit for zone counting, matching a real player's
    # own experience of a rotating spawn-pool network (only one member is
    # ever findable at a time for the 87.9% of real chest pools with
    # max_limit=1).
    world_map_areas = [(1, 17, 0.0, 100.0, 0.0, 100.0)]  # map 1, area 17, box covering (10,10)
    area_zone_ids = {17: 17}
    area_names = {17: "barrens"}
    map_instance_types = {1: 0}
    map_names = {1: "kalimdor"}
    spawn_rows = [
        (100, 1, 10.0, 10.0),
        (101, 1, 11.0, 11.0),
        (200, 1, 12.0, 12.0),  # standalone (no pool membership)
    ]
    pool_memberships = {100: 5, 101: 5}
    units_by_zone = db_extract.resolve_zone_pool_units(
        spawn_rows, pool_memberships, world_map_areas, area_zone_ids,
        area_names, map_instance_types, map_names,
    )
    assert units_by_zone == {"barrens": {("pool", 5), ("standalone", 200)}}


def test_resolve_zone_pool_units_unit_spanning_two_zones_counts_in_both():
    world_map_areas = [
        (1, 17, 0.0, 50.0, 0.0, 100.0),   # map 1, area 17 ("barrens"), x in [0,50]
        (1, 18, 50.0, 100.0, 0.0, 100.0),  # map 1, area 18 ("durotar"), x in [50,100]
    ]
    area_zone_ids = {17: 17, 18: 18}
    area_names = {17: "barrens", 18: "durotar"}
    map_instance_types = {1: 0}
    map_names = {1: "kalimdor"}
    # One standalone spawn (guid 300) whose own position falls in BOTH boxes
    # (a border-ambiguous point, same real-world shape
    # resolve_zone_ids_from_position's own docstring documents for Barrens
    # vs Durotar/Mulgore) -- counted toward both zones, never one guessed winner.
    spawn_rows = [(300, 1, 50.0, 10.0)]
    units_by_zone = db_extract.resolve_zone_pool_units(
        spawn_rows, {}, world_map_areas, area_zone_ids, area_names,
        map_instance_types, map_names,
    )
    assert units_by_zone == {"barrens": {("standalone", 300)}, "durotar": {("standalone", 300)}}


def test_skill_tier_for_level_boundaries():
    assert db_extract.skill_tier_for_level(0) == "apprentice"
    assert db_extract.skill_tier_for_level(74) == "apprentice"
    assert db_extract.skill_tier_for_level(75) == "journeyman"
    assert db_extract.skill_tier_for_level(149) == "journeyman"
    assert db_extract.skill_tier_for_level(150) == "expert"
    assert db_extract.skill_tier_for_level(224) == "expert"
    assert db_extract.skill_tier_for_level(225) == "artisan"
    assert db_extract.skill_tier_for_level(299) == "artisan"
    assert db_extract.skill_tier_for_level(300) == "master"
    assert db_extract.skill_tier_for_level(374) == "master"
    assert db_extract.skill_tier_for_level(375) == "northrend_capped"
    assert db_extract.skill_tier_for_level(450) == "northrend_capped"


def test_parse_lock_skill_requirements_reads_real_lock_dbc():
    # Real, well-known WotLK lockIds (spec §6): Copper Vein-family Mining
    # locks require skill 0 (Apprentice tier), Peacebloom-family Herbalism
    # locks also require skill 0. This test only asserts SHAPE + that at
    # least one real herbalism and one real mining entry decode with a
    # plausible (0-450) skill level -- it deliberately does not hardcode a
    # specific lockId's numeric value as an equality assertion, since this
    # project's real Lock.dbc content is external client data this repo
    # does not control the exact ids of beyond what's already cited in the
    # spec's own verified examples.
    result = db_extract.parse_lock_skill_requirements()
    assert isinstance(result, dict)
    assert len(result) > 0
    herbalism_levels = [v["herbalism"] for v in result.values() if "herbalism" in v]
    mining_levels = [v["mining"] for v in result.values() if "mining" in v]
    assert herbalism_levels and all(0 <= lvl <= 450 for lvl in herbalism_levels)
    assert mining_levels and all(0 <= lvl <= 450 for lvl in mining_levels)


if __name__ == "__main__":
    unittest.main()
