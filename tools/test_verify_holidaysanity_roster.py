# azerothcore-wotlk/modules/archipelago_wow/tools/test_verify_holidaysanity_roster.py
import unittest
from unittest.mock import patch

from verify_holidaysanity_roster import ROSTER, verify


class TestRosterShape(unittest.TestCase):
    def test_roster_has_fourteen_entries(self) -> None:
        self.assertEqual(len(ROSTER), 14)

    def test_darkmoon_faire_merges_three_event_ids(self) -> None:
        entry = next(e for e in ROSTER if e["flag_key"] == "holiday_darkmoon_faire")
        self.assertEqual(entry["event_ids"], [3, 4, 5])

    def test_scourge_invasion_merges_master_and_eleven_sub_events(self) -> None:
        entry = next(e for e in ROSTER if e["flag_key"] == "holiday_scourge_invasion")
        self.assertEqual(entry["event_ids"], [17, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130])


class TestVerify(unittest.TestCase):
    @patch("verify_holidaysanity_roster.run_query")
    def test_matching_live_data_reports_no_mismatches(self, mock_run_query) -> None:
        # One row per curated event id, name matching this plan's roster.
        mock_run_query.return_value = [("1", "Midsummer Fire Festival")]
        mismatches = verify(only_flag_key="holiday_midsummer")
        self.assertEqual(mismatches, [])

    @patch("verify_holidaysanity_roster.run_query")
    def test_missing_event_id_is_reported(self, mock_run_query) -> None:
        mock_run_query.return_value = []
        mismatches = verify(only_flag_key="holiday_midsummer")
        self.assertEqual(len(mismatches), 1)
        self.assertIn("event id 1", mismatches[0])

    @patch("verify_holidaysanity_roster.run_query")
    def test_renamed_event_is_reported(self, mock_run_query) -> None:
        mock_run_query.return_value = [("1", "Something Else Entirely")]
        mismatches = verify(only_flag_key="holiday_midsummer")
        self.assertEqual(len(mismatches), 1)
        self.assertIn("name mismatch", mismatches[0])


if __name__ == "__main__":
    unittest.main()
