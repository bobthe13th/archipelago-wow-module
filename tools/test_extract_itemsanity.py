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

    # M3 (final whole-branch review, M4.10.6): the SQL query string
    # extract() actually builds is never observed by any prior test here
    # (they all only ever inspect run_query's MOCKED RETURN value, never
    # the query it was CALLED with) -- so a regression that silently
    # dropped the entry<4000000 test-pollution filter, or Fix I1's new
    # reserved-range exclusion, from the real WHERE clause would pass
    # every test above while still re-polluting content/itemsanity.yaml
    # with test rows and this module's own internal icon/trap item rows.
    # This inspects the real SQL text passed to the mocked run_query.
    @patch("extract_itemsanity.load_exclusion_rules")
    @patch("extract_itemsanity.run_query")
    def test_query_contains_test_pollution_and_reserved_range_filters(
        self, mock_run_query, mock_load_rules
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_run_query.return_value = []
        extract()
        self.assertEqual(mock_run_query.call_count, 1)
        query = mock_run_query.call_args[0][0]
        self.assertIn("entry < 4000000", query)
        # Fix I1: this module's own reserved item_template ranges --
        # 850000-850016 (Traps-family AP_ITEM_TRAP_* rows,
        # src/ArchipelagoTrapsContentTable.h) and 850100-850103 (the 4
        # classification-icon rows IconEntryFor synthesizes,
        # src/APItemDisplay.cpp) -- must both be excluded from the real
        # query, not just present as a Python-side filter, since the query
        # itself is what determines which rows ever reach is_denylisted.
        self.assertIn("850000", query)
        self.assertIn("850016", query)
        self.assertIn("850100", query)
        self.assertIn("850103", query)

    # Fix I1 (final whole-branch review, M4.10.6): confirms the reserved
    # icon/trap item_template rows are excluded end-to-end even if a row
    # for one somehow reached the Python-side filtering (defense in depth
    # alongside the SQL-level test above).
    @patch("extract_itemsanity.load_exclusion_rules")
    @patch("extract_itemsanity.run_query")
    def test_gm_only_entries_are_excluded_even_if_returned_by_the_query(
        self, mock_run_query, mock_load_rules
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        # Real GM-only rows the review found live -- entry 17 "Martin
        # Fury" sorts first in the real DB and would otherwise become the
        # very first Itemsanity location (location_id 12,500,000).
        mock_run_query.return_value = [
            ("17", "Martin Fury", "4", "6", "0"),
            ("25", "Worn Shortsword", "2", "1", "0"),
        ]
        result = extract()
        self.assertEqual(len(result["locations"]), 1)
        self.assertEqual(result["locations"][0]["name"], "Itemsanity: Worn Shortsword (#25)")
        # The surviving row must still land on the family's real base id,
        # not skip ahead as if the excluded row had consumed an index.
        self.assertEqual(result["locations"][0]["location_id"], 12_500_000)

    # M1 (final whole-branch review, M4.10.6): a real trailing-whitespace
    # item_template.name (204 real rows found live) must not compile into
    # a location name with a double space before "(#entry)".
    @patch("extract_itemsanity.load_exclusion_rules")
    @patch("extract_itemsanity.run_query")
    def test_trailing_whitespace_in_name_is_stripped(
        self, mock_run_query, mock_load_rules
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_run_query.return_value = [("14940", "Warbringer's Sabatons  ", "4", "4", "80")]
        result = extract()
        self.assertEqual(result["locations"][0]["name"], "Itemsanity: Warbringer's Sabatons (#14940)")
        self.assertNotIn("  (", result["locations"][0]["name"])


if __name__ == "__main__":
    unittest.main()
