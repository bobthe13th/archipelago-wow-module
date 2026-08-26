import unittest
from unittest.mock import patch

from extract_vendor_stock import build_row, extract, _load_vendor_expansions


class TestBuildRow(unittest.TestCase):
    def test_names_and_ids_use_row_index(self) -> None:
        row = ("100", "Alana Moonstrike", "51149", "0", "0", "Sanctified Lasherweave Cover")
        result = build_row(row, row_index=42, expansion="vanilla")

        self.assertEqual(
            result["location_name"],
            "Vendor: Alana Moonstrike - Sanctified Lasherweave Cover (#42)",
        )
        self.assertEqual(
            result["item_name"],
            "Vendor Item: Alana Moonstrike - Sanctified Lasherweave Cover (#42)",
        )
        self.assertEqual(result["location_id"], 2_000_042)
        self.assertEqual(result["item_id"], 2_500_042)

    def test_trigger_and_delivery_fields(self) -> None:
        row = ("100", "Alana Moonstrike", "51149", "3", "500", "Sanctified Lasherweave Cover")
        result = build_row(row, row_index=0, expansion="vanilla")

        self.assertEqual(
            result["trigger"],
            {"kind": "vendor_purchase", "npc_entry": 100, "item_slot": 3},
        )
        self.assertEqual(
            result["delivery"],
            {"kind": "mail", "wow_item_entry": 51149},
        )

    def test_tags_field_carries_the_passed_expansion(self) -> None:
        row = ("100", "Alana Moonstrike", "51149", "0", "0", "Sanctified Lasherweave Cover")
        result = build_row(row, row_index=0, expansion="tbc")
        self.assertEqual(result["tags"], {"expansion": ["tbc"]})

    def test_two_rows_with_same_npc_and_item_name_get_distinct_names(self) -> None:
        row_a = ("100", "Alana Moonstrike", "51149", "0", "0", "Sanctified Lasherweave Cover")
        row_b = ("100", "Alana Moonstrike", "51290", "0", "0", "Sanctified Lasherweave Cover")

        result_a = build_row(row_a, row_index=5, expansion="vanilla")
        result_b = build_row(row_b, row_index=6, expansion="vanilla")

        self.assertNotEqual(result_a["location_name"], result_b["location_name"])
        self.assertNotEqual(result_a["item_name"], result_b["item_name"])
        self.assertNotEqual(result_a["location_id"], result_b["location_id"])
        self.assertNotEqual(result_a["item_id"], result_b["item_id"])


class TestLoadVendorExpansions(unittest.TestCase):
    @patch("extract_vendor_stock.parse_map_expansions")
    @patch("extract_vendor_stock.run_query")
    def test_resolves_expansion_via_min_map_across_vendor_spawns(self, mock_run_query, mock_parse_map) -> None:
        mock_parse_map.return_value = {0: "vanilla", 530: "tbc", 571: "wotlk"}
        mock_run_query.return_value = [("54", "0"), ("999", "571")]
        result = _load_vendor_expansions()
        self.assertEqual(result, {54: "vanilla", 999: "wotlk"})

    @patch("extract_vendor_stock.parse_map_expansions")
    @patch("extract_vendor_stock.run_query")
    def test_unspawned_vendor_entry_absent_from_result(self, mock_run_query, mock_parse_map) -> None:
        mock_parse_map.return_value = {0: "vanilla"}
        mock_run_query.return_value = []
        result = _load_vendor_expansions()
        self.assertEqual(result, {})


class TestExtractDenylist(unittest.TestCase):
    @patch("extract_vendor_stock._load_vendor_expansions")
    @patch("extract_vendor_stock.load_exclusion_rules")
    @patch("extract_vendor_stock.run_query")
    def test_denylist_is_applied_to_item_name_not_npc_name(
        self, mock_run_query, mock_load_rules, mock_load_expansions
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": [r"(?i)\btest\b"]}
        mock_load_expansions.return_value = {}
        mock_run_query.return_value = [
            ("1", "Test Vendor Bob", "500", "0", "0", "Ordinary Sword"),
            ("2", "Ordinary Vendor", "501", "0", "0", "Test Sword"),
        ]

        result = extract()

        self.assertEqual(len(result["locations"]), 1)
        self.assertEqual(len(result["items"]), 1)
        self.assertIn("Test Vendor Bob", result["locations"][0]["name"])

    @patch("extract_vendor_stock._load_vendor_expansions")
    @patch("extract_vendor_stock.load_exclusion_rules")
    @patch("extract_vendor_stock.run_query")
    def test_locations_carry_the_resolved_expansion_tag(
        self, mock_run_query, mock_load_rules, mock_load_expansions
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_load_expansions.return_value = {1: "wotlk"}
        mock_run_query.return_value = [
            ("1", "Some Vendor", "500", "0", "0", "Some Item"),
        ]

        result = extract()

        self.assertEqual(result["locations"][0]["tags"], {"expansion": ["wotlk"]})

    @patch("extract_vendor_stock._load_vendor_expansions")
    @patch("extract_vendor_stock.load_exclusion_rules")
    @patch("extract_vendor_stock.run_query")
    def test_missing_expansion_entry_defaults_to_vanilla(
        self, mock_run_query, mock_load_rules, mock_load_expansions
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_load_expansions.return_value = {}
        mock_run_query.return_value = [
            ("1", "Some Vendor", "500", "0", "0", "Some Item"),
        ]

        result = extract()

        self.assertEqual(result["locations"][0]["tags"], {"expansion": ["vanilla"]})


if __name__ == "__main__":
    unittest.main()
