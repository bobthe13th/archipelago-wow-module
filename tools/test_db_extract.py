import unittest
from unittest.mock import patch, MagicMock

from db_extract import is_denylisted, load_exclusion_rules, run_query, DEFAULT_RULES_PATH


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
