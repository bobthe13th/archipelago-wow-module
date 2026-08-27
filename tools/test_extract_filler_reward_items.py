import unittest
from unittest.mock import patch

from extract_filler_reward_items import extract, _query_category, _CATEGORY_QUERIES


class TestQueryCategory(unittest.TestCase):
    @patch("extract_filler_reward_items.run_query")
    def test_tags_every_row_with_the_given_category(self, mock_run_query) -> None:
        mock_run_query.return_value = [("117", "Tough Jerky"), ("118", "Minor Healing Potion")]
        rules = {"name_denylist": []}
        rows = _query_category("consumable", "SELECT entry, name FROM item_template", rules)
        self.assertEqual(len(rows), 2)
        self.assertEqual(rows[0]["category"], "consumable")
        self.assertEqual(rows[0]["entry"], 117)
        self.assertEqual(rows[0]["name"], "Tough Jerky")

    @patch("extract_filler_reward_items.run_query")
    def test_denylisted_name_is_excluded(self, mock_run_query) -> None:
        mock_run_query.return_value = [("999", "Deprecated Test Item")]
        rules = {"name_denylist": [r"(?i)\bdeprecated\b"]}
        rows = _query_category("bag", "SELECT entry, name FROM item_template", rules)
        self.assertEqual(len(rows), 0)


class TestExtractTenSimpleCategories(unittest.TestCase):
    @patch("extract_filler_reward_items.load_exclusion_rules")
    @patch("extract_filler_reward_items.run_query")
    def test_extracts_one_item_per_row_across_the_ten_simple_categories(
        self, mock_run_query, mock_load_rules
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        # 10 categories queried in this task; one fixture row each.
        mock_run_query.side_effect = [
            [("40752", "Emblem of Heroism")],       # badge_currency
            [("117", "Tough Jerky")],               # consumable
            [("804", "Large Blue Sack")],            # bag
            [("38682", "Armor Vellum")],              # gear_enhancement (vellum)
            [("774", "Malachite")],                   # gear_enhancement (gem)
            [("25", "Worn Shortsword")],               # equipment
            [("5335", "A Sack of Coins")],             # openable
            [("18597", "Orcish Orphan Whistle")],      # seasonal
            [("5976", "Guild Tabard")],                # tabard
            [("2895", "Creeping Pain")],                # reagent
        ]
        result = extract()
        self.assertEqual(result["family"], "filler_reward_items")
        self.assertEqual(result["locations"], [])
        names = {item["name"] for item in result["items"]}
        self.assertIn("Filler: Emblem of Heroism (#40752)", names)
        self.assertIn("Filler: Tough Jerky (#117)", names)
        categories = {item["tags"]["category"][0] for item in result["items"]}
        self.assertIn("badge_currency", categories)
        self.assertIn("gear_enhancement", categories)

    def test_toy_category_is_hardcoded_not_queried(self) -> None:
        # The 6 real toy candidates are curated directly, not via a broad
        # query (no systematic DB column identifies "toy" items in this
        # schema) -- confirm the hardcoded list exists and has the right shape.
        from extract_filler_reward_items import _TOY_ENTRIES
        self.assertEqual(len(_TOY_ENTRIES), 6)
        self.assertEqual(_TOY_ENTRIES[33079], "Murloc Costume")


if __name__ == "__main__":
    unittest.main()
