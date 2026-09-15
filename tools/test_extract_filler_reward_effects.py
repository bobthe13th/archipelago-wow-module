import unittest
from unittest.mock import patch

from extract_filler_reward_effects import extract, _GOLD_TIERS, _XP_TIERS, _TITLE_TIERS, _PORTABLE_SERVICE_TIERS


class TestExtract(unittest.TestCase):
    @patch("extract_filler_reward_effects.parse_filler_buff_spell_candidates")
    def test_extracts_one_item_per_real_buff_candidate_with_id_disambiguated_name(self, mock_parse) -> None:
        mock_parse.return_value = {774: "Rejuvenation", 100: "Charge"}
        result = extract()
        buff_items = [i for i in result["items"] if i["delivery"]["effect"] == "cast_spell"]
        self.assertEqual(len(buff_items), 2)
        names = {i["name"] for i in buff_items}
        self.assertIn("Filler: Random Buff - Rejuvenation (#774)", names)
        self.assertIn("Filler: Random Buff - Charge (#100)", names)

    @patch("extract_filler_reward_effects.parse_filler_buff_spell_candidates")
    def test_buff_item_param_is_the_real_spell_id(self, mock_parse) -> None:
        mock_parse.return_value = {774: "Rejuvenation"}
        result = extract()
        buff_item = next(i for i in result["items"] if i["delivery"]["effect"] == "cast_spell")
        self.assertEqual(buff_item["delivery"]["param"], 774)

    @patch("extract_filler_reward_effects.parse_filler_buff_spell_candidates")
    def test_family_and_locations_shape(self, mock_parse) -> None:
        mock_parse.return_value = {}
        result = extract()
        self.assertEqual(result["family"], "filler_reward_effects")
        self.assertEqual(result["locations"], [])

    @patch("extract_filler_reward_effects.parse_filler_buff_spell_candidates")
    def test_all_five_categories_present_with_the_real_curated_row_counts(self, mock_parse) -> None:
        mock_parse.return_value = {1: "Fake Buff"}
        result = extract()
        by_effect: dict[str, int] = {}
        for item in result["items"]:
            by_effect[item["delivery"]["effect"]] = by_effect.get(item["delivery"]["effect"], 0) + 1
        self.assertEqual(by_effect["cast_spell"], 1)
        self.assertEqual(by_effect["grant_money"], len(_GOLD_TIERS))
        self.assertEqual(by_effect["grant_xp_percent"], len(_XP_TIERS))
        self.assertEqual(by_effect["grant_title"], len(_TITLE_TIERS))
        self.assertEqual(by_effect["portable_service"], len(_PORTABLE_SERVICE_TIERS))

    @patch("extract_filler_reward_effects.parse_filler_buff_spell_candidates")
    def test_item_ids_are_sequential_from_the_real_base_with_no_gaps_or_collisions(self, mock_parse) -> None:
        mock_parse.return_value = {1: "Fake Buff"}
        result = extract()
        ids = [item["item_id"] for item in result["items"]]
        self.assertEqual(ids[0], 8_500_000)
        self.assertEqual(ids, list(range(8_500_000, 8_500_000 + len(ids))))
        self.assertEqual(len(ids), len(set(ids)))

    @patch("extract_filler_reward_effects.parse_filler_buff_spell_candidates")
    def test_every_row_has_a_required_int_param_and_a_flat_weight_of_one(self, mock_parse) -> None:
        mock_parse.return_value = {1: "Fake Buff"}
        result = extract()
        for item in result["items"]:
            self.assertIsInstance(item["delivery"]["param"], int)
            self.assertEqual(item["count"], 1)

    @patch("extract_filler_reward_effects.parse_filler_buff_spell_candidates")
    def test_gold_tier_amounts_match_the_curated_copper_values(self, mock_parse) -> None:
        mock_parse.return_value = {}
        result = extract()
        params = {i["delivery"]["param"] for i in result["items"] if i["delivery"]["effect"] == "grant_money"}
        self.assertIn(1, params)          # 1 copper
        self.assertIn(10000, params)      # 1 gold
        self.assertIn(10000000, params)   # 1000 gold
        self.assertEqual(len(params), 21)

    @patch("extract_filler_reward_effects.parse_filler_buff_spell_candidates")
    def test_xp_tier_percentages_match_the_curated_list(self, mock_parse) -> None:
        mock_parse.return_value = {}
        result = extract()
        params = {i["delivery"]["param"] for i in result["items"] if i["delivery"]["effect"] == "grant_xp_percent"}
        self.assertEqual(params, {1, 5, 10, 15, 20, 25, 30, 40, 50})

    @patch("extract_filler_reward_effects.parse_filler_buff_spell_candidates")
    def test_title_ids_are_unchanged_from_m4931(self, mock_parse) -> None:
        mock_parse.return_value = {}
        result = extract()
        params = {i["delivery"]["param"] for i in result["items"] if i["delivery"]["effect"] == "grant_title"}
        self.assertEqual(params, {77, 78, 79, 84, 89, 92, 93, 98})

    @patch("extract_filler_reward_effects.parse_filler_buff_spell_candidates")
    def test_portable_service_uses_the_real_confirmed_spell_ids(self, mock_parse) -> None:
        mock_parse.return_value = {}
        result = extract()
        by_name = {i["name"]: i["delivery"]["param"] for i in result["items"] if i["delivery"]["effect"] == "portable_service"}
        self.assertEqual(by_name["Filler: Portable Service - Jeeves"], 67826)
        self.assertEqual(by_name["Filler: Portable Service - Field Repair Bot 74A"], 22700)
        self.assertEqual(by_name["Filler: Portable Service - Remote Mail Terminal"], 30524)
        self.assertEqual(by_name["Filler: Portable Service - Field Repair Bot 110G"], 44389)
