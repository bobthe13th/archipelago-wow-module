import pathlib
import struct
import tempfile
import unittest
from unittest.mock import patch, MagicMock

from db_extract import (
    is_denylisted, load_exclusion_rules, run_query, DEFAULT_RULES_PATH,
    parse_map_expansions, parse_skill_line_abilities, parse_spell_names,
    parse_achievements, parse_achievement_categories,
    parse_filler_buff_spell_candidates, parse_area_zone_ids,
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


if __name__ == "__main__":
    unittest.main()
