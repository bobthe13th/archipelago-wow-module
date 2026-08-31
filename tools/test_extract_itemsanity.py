import unittest
from unittest.mock import patch

from extract_itemsanity import extract, _class_tag, _quality_tag, _expansion_tag


class TestClassTag(unittest.TestCase):
    def test_known_values_map_to_real_item_class_names(self) -> None:
        self.assertEqual(_class_tag(0), "consumable")
        self.assertEqual(_class_tag(2), "weapon")
        self.assertEqual(_class_tag(4), "armor")
        self.assertEqual(_class_tag(9), "recipe")
        self.assertEqual(_class_tag(16), "glyph")


class TestQualityTag(unittest.TestCase):
    def test_known_values_map_to_real_item_quality_names(self) -> None:
        self.assertEqual(_quality_tag(0), "poor")
        self.assertEqual(_quality_tag(1), "normal")
        self.assertEqual(_quality_tag(4), "epic")
        self.assertEqual(_quality_tag(7), "heirloom")


class TestExpansionTag(unittest.TestCase):
    def test_zero_required_level_defaults_to_vanilla(self) -> None:
        # Real, common case -- most consumables/reagents have no level
        # requirement at all. Same "unresolvable -> vanilla" convention
        # every other family in this project already uses.
        self.assertEqual(_expansion_tag(0), "vanilla")

    def test_vanilla_bracket(self) -> None:
        self.assertEqual(_expansion_tag(60), "vanilla")

    def test_tbc_bracket(self) -> None:
        self.assertEqual(_expansion_tag(61), "tbc")
        self.assertEqual(_expansion_tag(70), "tbc")

    def test_wotlk_bracket(self) -> None:
        self.assertEqual(_expansion_tag(71), "wotlk")
        self.assertEqual(_expansion_tag(80), "wotlk")


class TestExtract(unittest.TestCase):
    @patch("extract_itemsanity.load_exclusion_rules")
    @patch("extract_itemsanity.run_query")
    def test_extracts_one_location_and_item_per_real_row(
        self, mock_run_query, mock_load_rules
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        # Real values verified live against this checkout's DB during
        # planning: entry=6948 ("Hearthstone"), class=15 (misc),
        # Quality=1 (normal), RequiredLevel=0.
        mock_run_query.return_value = [("6948", "Hearthstone", "15", "1", "0")]
        result = extract()
        self.assertEqual(len(result["locations"]), 1)
        self.assertEqual(len(result["items"]), 1)
        loc = result["locations"][0]
        self.assertEqual(loc["name"], "Itemsanity: Hearthstone (#6948)")
        self.assertEqual(loc["trigger"], {"kind": "item_first_held", "item_entry": 6948})
        self.assertEqual(loc["tags"], {"class": ["misc"], "quality": ["normal"], "expansion": ["vanilla"]})
        item = result["items"][0]
        self.assertEqual(item["name"], "Itemsanity Item: Hearthstone (#6948)")
        self.assertEqual(item["delivery"], {"kind": "mail", "wow_item_entry": 6948})

    @patch("extract_itemsanity.load_exclusion_rules")
    @patch("extract_itemsanity.run_query")
    def test_sequential_ids_assigned_in_query_order(
        self, mock_run_query, mock_load_rules
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_run_query.return_value = [
            ("25", "Worn Shortsword", "2", "0", "0"),
            ("117", "Tigerseye", "3", "0", "0"),
            ("159", "Refreshing Spring Water", "0", "0", "0"),
        ]
        result = extract()
        self.assertEqual(
            [loc["location_id"] for loc in result["locations"]],
            [12_500_000, 12_500_001, 12_500_002],
        )
        self.assertEqual(
            [item["item_id"] for item in result["items"]],
            [13_500_000, 13_500_001, 13_500_002],
        )

    @patch("extract_itemsanity.load_exclusion_rules")
    @patch("extract_itemsanity.run_query")
    def test_denylisted_item_name_is_excluded(
        self, mock_run_query, mock_load_rules
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": [r"(?i)\bdeprecated\b"]}
        mock_run_query.return_value = [("999", "Deprecated Test Item", "15", "0", "0")]
        result = extract()
        self.assertEqual(len(result["locations"]), 0)
        self.assertEqual(len(result["items"]), 0)

    @patch("extract_itemsanity.load_exclusion_rules")
    @patch("extract_itemsanity.run_query")
    def test_high_required_level_tags_wotlk(
        self, mock_run_query, mock_load_rules
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_run_query.return_value = [("40395", "Bloodsurge", "4", "4", "78")]
        result = extract()
        self.assertEqual(result["locations"][0]["tags"]["expansion"], ["wotlk"])


if __name__ == "__main__":
    unittest.main()
