import unittest

from extract_quest_rewards import pick_representative_reward


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
