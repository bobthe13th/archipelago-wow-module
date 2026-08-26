import unittest
from unittest.mock import patch, MagicMock

from extract_quest_rewards import (
    pick_representative_reward,
    extract,
    _compute_quest_type_tags,
    _load_quest_expansions,
)


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


class TestComputeQuestTypeTags(unittest.TestCase):
    def test_dungeon_quest_tag_from_quest_info_id_81(self) -> None:
        self.assertEqual(_compute_quest_type_tags(81, 0, 0), ["dungeon_quest"])

    def test_elite_quest_tag_from_suggested_group_num(self) -> None:
        self.assertEqual(_compute_quest_type_tags(0, 2, 0), ["elite_quest"])

    def test_repeatable_tag_from_daily_flag(self) -> None:
        self.assertEqual(_compute_quest_type_tags(0, 0, 0x1000), ["repeatable"])

    def test_repeatable_tag_from_weekly_flag(self) -> None:
        self.assertEqual(_compute_quest_type_tags(0, 0, 0x8000), ["repeatable"])

    def test_standard_tag_when_none_of_the_others_apply(self) -> None:
        self.assertEqual(_compute_quest_type_tags(0, 0, 0), ["standard"])

    def test_a_quest_can_carry_multiple_type_tags_at_once(self) -> None:
        self.assertEqual(
            sorted(_compute_quest_type_tags(81, 2, 0x1000)),
            ["dungeon_quest", "elite_quest", "repeatable"],
        )


class TestLoadQuestExpansions(unittest.TestCase):
    @patch("extract_quest_rewards.parse_map_expansions")
    @patch("extract_quest_rewards.run_query")
    def test_resolves_expansion_via_min_map_across_creature_and_gameobject_queststarters(
        self, mock_run_query, mock_parse_map
    ) -> None:
        mock_parse_map.return_value = {0: "vanilla", 530: "tbc", 571: "wotlk"}
        mock_run_query.return_value = [("100", "0"), ("200", "571")]
        result = _load_quest_expansions()
        self.assertEqual(result, {100: "vanilla", 200: "wotlk"})

    @patch("extract_quest_rewards.parse_map_expansions")
    @patch("extract_quest_rewards.run_query")
    def test_unknown_map_id_defaults_to_vanilla(self, mock_run_query, mock_parse_map) -> None:
        mock_parse_map.return_value = {}
        mock_run_query.return_value = [("100", "999")]
        result = _load_quest_expansions()
        self.assertEqual(result, {100: "vanilla"})


class TestExtractNullHandling(unittest.TestCase):
    """Test that extract() correctly handles SQL NULL values from LEFT JOIN.

    db_extract.run_query returns all columns as strings; mysql.exe -Nse
    renders SQL NULL as the literal string "NULL", not as Python None.
    The extract() function must handle this correctly to avoid ValueError
    when a quest_template row has no matching quest_template_addon row.
    """

    @patch("extract_quest_rewards._load_quest_expansions")
    @patch("extract_quest_rewards.load_exclusion_rules")
    @patch("extract_quest_rewards.run_query")
    def test_null_prev_quest_id_does_not_crash(self, mock_run_query, mock_load_rules, mock_load_expansions) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_load_expansions.return_value = {}
        mock_run_query.return_value = [
            ("100", "Test Quest", "10", "NULL",
             "1234", "0", "0", "0",
             "0", "0", "0", "0", "0", "0",
             "0", "0", "0")
        ]

        result = extract()

        self.assertEqual(len(result["locations"]), 1)
        self.assertIsNone(result["locations"][0]["trigger"]["prev_quest_id"])


class TestExtractFillerRewardHandling(unittest.TestCase):
    """M4.7.1.3: a quest with zero real reward-item columns is no longer
    skipped at extraction -- it gets a real location + item, tagged
    distinctly, using the project's designated real filler item (7073,
    "Broken Fang", reused from APTraps.cpp's ApplyGreyItemBagFill)."""

    @patch("extract_quest_rewards._load_quest_expansions")
    @patch("extract_quest_rewards.load_exclusion_rules")
    @patch("extract_quest_rewards.run_query")
    def test_zero_reward_quest_produces_filler_tagged_location_and_item(
        self, mock_run_query, mock_load_rules, mock_load_expansions
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_load_expansions.return_value = {}
        mock_run_query.return_value = [
            ("200", "No Reward Quest", "15", "NULL",
             "0", "0", "0", "0",
             "0", "0", "0", "0", "0", "0",
             "0", "0", "0")
        ]

        result = extract()

        self.assertEqual(len(result["locations"]), 1)
        self.assertEqual(len(result["items"]), 1)
        self.assertTrue(result["locations"][0]["trigger"]["is_filler_reward"])
        self.assertEqual(result["items"][0]["delivery"]["wow_item_entry"], 7073)
        self.assertEqual(result["locations"][0]["name"], "Quest: No Reward Quest Reward (#200)")
        self.assertEqual(result["locations"][0]["trigger"]["quest_id"], 200)

    @patch("extract_quest_rewards._load_quest_expansions")
    @patch("extract_quest_rewards.load_exclusion_rules")
    @patch("extract_quest_rewards.run_query")
    def test_real_reward_quest_has_no_filler_tag(self, mock_run_query, mock_load_rules, mock_load_expansions) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_load_expansions.return_value = {}
        mock_run_query.return_value = [
            ("300", "Real Reward Quest", "20", "NULL",
             "5555", "0", "0", "0",
             "0", "0", "0", "0", "0", "0",
             "0", "0", "0")
        ]

        result = extract()

        self.assertEqual(len(result["locations"]), 1)
        self.assertNotIn("is_filler_reward", result["locations"][0]["trigger"])
        self.assertEqual(result["items"][0]["delivery"]["wow_item_entry"], 5555)

    @patch("extract_quest_rewards._load_quest_expansions")
    @patch("extract_quest_rewards.load_exclusion_rules")
    @patch("extract_quest_rewards.run_query")
    def test_zero_reward_quest_with_denylisted_title_is_still_excluded(
        self, mock_run_query, mock_load_rules, mock_load_expansions
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": [r"(?i)\bqa\b"]}
        mock_load_expansions.return_value = {}
        mock_run_query.return_value = [
            ("400", "QA Test Quest", "1", "NULL",
             "0", "0", "0", "0",
             "0", "0", "0", "0", "0", "0",
             "0", "0", "0")
        ]

        result = extract()

        self.assertEqual(len(result["locations"]), 0)
        self.assertEqual(len(result["items"]), 0)


class TestExtractTagsAndAlwaysPresent(unittest.TestCase):
    @patch("extract_quest_rewards._load_quest_expansions")
    @patch("extract_quest_rewards.load_exclusion_rules")
    @patch("extract_quest_rewards.run_query")
    def test_every_location_gets_a_real_tags_block(self, mock_run_query, mock_load_rules, mock_load_expansions) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_load_expansions.return_value = {}
        mock_run_query.return_value = [
            ("500", "Dungeon Test Quest", "20", "NULL",
             "1234", "0", "0", "0",
             "0", "0", "0", "0", "0", "0",
             "81", "0", "0")
        ]
        result = extract()
        self.assertEqual(result["locations"][0]["tags"], {"type": ["dungeon_quest"], "expansion": ["vanilla"]})

    @patch("extract_quest_rewards._load_quest_expansions")
    @patch("extract_quest_rewards.load_exclusion_rules")
    @patch("extract_quest_rewards.run_query")
    def test_expansion_comes_from_load_quest_expansions(self, mock_run_query, mock_load_rules, mock_load_expansions) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_load_expansions.return_value = {600: "wotlk"}
        mock_run_query.return_value = [
            ("600", "Northrend Test Quest", "70", "NULL",
             "1234", "0", "0", "0",
             "0", "0", "0", "0", "0", "0",
             "0", "0", "0")
        ]
        result = extract()
        self.assertEqual(result["locations"][0]["tags"]["expansion"], ["wotlk"])

    @patch("extract_quest_rewards._load_quest_expansions")
    @patch("extract_quest_rewards.load_exclusion_rules")
    @patch("extract_quest_rewards.run_query")
    def test_migrated_starting_quest_id_gets_always_present_true(
        self, mock_run_query, mock_load_rules, mock_load_expansions
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_load_expansions.return_value = {}
        mock_run_query.return_value = [
            ("783", "A Threat Within", "1", "NULL",
             "0", "0", "0", "0",
             "0", "0", "0", "0", "0", "0",
             "0", "0", "0")
        ]
        result = extract()
        self.assertTrue(result["locations"][0]["always_present"])

    @patch("extract_quest_rewards._load_quest_expansions")
    @patch("extract_quest_rewards.load_exclusion_rules")
    @patch("extract_quest_rewards.run_query")
    def test_non_migrated_quest_has_no_always_present_key(
        self, mock_run_query, mock_load_rules, mock_load_expansions
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_load_expansions.return_value = {}
        mock_run_query.return_value = [
            ("999999", "Some Other Quest", "1", "NULL",
             "1", "0", "0", "0",
             "0", "0", "0", "0", "0", "0",
             "0", "0", "0")
        ]
        result = extract()
        self.assertNotIn("always_present", result["locations"][0])


if __name__ == "__main__":
    unittest.main()
