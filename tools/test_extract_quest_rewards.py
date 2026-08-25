import unittest
from unittest.mock import patch, MagicMock

from extract_quest_rewards import pick_representative_reward, extract


class TestPickRepresentativeReward(unittest.TestCase):
    def test_prefers_first_nonzero_fixed_reward(self) -> None:
        row = {"RewardItem1": 0, "RewardItem2": 12345, "RewardItem3": 0, "RewardItem4": 0,
               "RewardChoiceItemID1": 999, "RewardChoiceItemID2": 0, "RewardChoiceItemID3": 0,
               "RewardChoiceItemID4": 0, "RewardChoiceItemID5": 0, "RewardChoiceItemID6": 0}
        self.assertEqual(pick_representative_reward(row), 12345)

    def test_falls_back_to_first_choice_reward_when_no_fixed_reward(self) -> None:
        row = {"RewardItem1": 0, "RewardItem2": 0, "RewardItem3": 0, "RewardItem4": 0,
               "RewardChoiceItemID1": 0, "RewardChoiceItemID2": 777, "RewardChoiceItemID3": 0,
               "RewardChoiceItemID4": 0, "RewardChoiceItemID5": 0, "RewardChoiceItemID6": 0}
        self.assertEqual(pick_representative_reward(row), 777)

    def test_returns_none_when_only_a_spell_reward_exists(self) -> None:
        row = {"RewardItem1": 0, "RewardItem2": 0, "RewardItem3": 0, "RewardItem4": 0,
               "RewardChoiceItemID1": 0, "RewardChoiceItemID2": 0, "RewardChoiceItemID3": 0,
               "RewardChoiceItemID4": 0, "RewardChoiceItemID5": 0, "RewardChoiceItemID6": 0}
        self.assertIsNone(pick_representative_reward(row))


class TestExtractNullHandling(unittest.TestCase):
    """Test that extract() correctly handles SQL NULL values from LEFT JOIN.

    db_extract.run_query returns all columns as strings; mysql.exe -Nse
    renders SQL NULL as the literal string "NULL", not as Python None.
    The extract() function must handle this correctly to avoid ValueError
    when a quest_template row has no matching quest_template_addon row.
    """

    @patch("extract_quest_rewards.load_exclusion_rules")
    @patch("extract_quest_rewards.run_query")
    def test_null_prev_quest_id_does_not_crash(self, mock_run_query, mock_load_rules) -> None:
        """Test that a literal "NULL" string for prev_quest_id produces None in output."""
        mock_load_rules.return_value = {"name_denylist": []}
        # Simulate a quest with no matching quest_template_addon row:
        # prev_quest_id comes back as the literal string "NULL" from mysql.exe -Nse
        mock_run_query.return_value = [
            ("100", "Test Quest", "10", "NULL",
             "1234", "0", "0", "0",
             "0", "0", "0", "0", "0", "0")
        ]

        # Should not raise ValueError
        result = extract()

        # Should produce one location with prev_quest_id=None
        self.assertEqual(len(result["locations"]), 1)
        self.assertIsNone(result["locations"][0]["trigger"]["prev_quest_id"])


class TestExtractFillerRewardHandling(unittest.TestCase):
    """M4.7.1.3: a quest with zero real reward-item columns is no longer
    skipped at extraction -- it gets a real location + item, tagged
    distinctly, using the project's designated real filler item (7073,
    "Broken Fang", reused from APTraps.cpp's ApplyGreyItemBagFill)."""

    @patch("extract_quest_rewards.load_exclusion_rules")
    @patch("extract_quest_rewards.run_query")
    def test_zero_reward_quest_produces_filler_tagged_location_and_item(self, mock_run_query, mock_load_rules) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_run_query.return_value = [
            ("200", "No Reward Quest", "15", "NULL",
             "0", "0", "0", "0",
             "0", "0", "0", "0", "0", "0")
        ]

        result = extract()

        self.assertEqual(len(result["locations"]), 1)
        self.assertEqual(len(result["items"]), 1)
        self.assertTrue(result["locations"][0]["trigger"]["is_filler_reward"])
        self.assertEqual(result["items"][0]["delivery"]["wow_item_entry"], 7073)
        self.assertEqual(result["locations"][0]["name"], "Quest: No Reward Quest Reward (#200)")
        self.assertEqual(result["locations"][0]["trigger"]["quest_id"], 200)

    @patch("extract_quest_rewards.load_exclusion_rules")
    @patch("extract_quest_rewards.run_query")
    def test_real_reward_quest_has_no_filler_tag(self, mock_run_query, mock_load_rules) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_run_query.return_value = [
            ("300", "Real Reward Quest", "20", "NULL",
             "5555", "0", "0", "0",
             "0", "0", "0", "0", "0", "0")
        ]

        result = extract()

        self.assertEqual(len(result["locations"]), 1)
        self.assertNotIn("is_filler_reward", result["locations"][0]["trigger"])
        self.assertEqual(result["items"][0]["delivery"]["wow_item_entry"], 5555)

    @patch("extract_quest_rewards.load_exclusion_rules")
    @patch("extract_quest_rewards.run_query")
    def test_zero_reward_quest_with_denylisted_title_is_still_excluded(self, mock_run_query, mock_load_rules) -> None:
        # Filler-reward inclusion must not bypass the existing denylist
        # filter -- a junk/test/GM-titled quest with no reward is still junk.
        mock_load_rules.return_value = {"name_denylist": [r"(?i)\bqa\b"]}
        mock_run_query.return_value = [
            ("400", "QA Test Quest", "1", "NULL",
             "0", "0", "0", "0",
             "0", "0", "0", "0", "0", "0")
        ]

        result = extract()

        self.assertEqual(len(result["locations"]), 0)
        self.assertEqual(len(result["items"]), 0)
