import pathlib
import struct
import tempfile
import unittest
from unittest.mock import patch, MagicMock

from db_extract import is_denylisted, load_exclusion_rules, run_query, DEFAULT_RULES_PATH, parse_map_expansions


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
