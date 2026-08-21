import unittest
from unittest.mock import patch

from extract_vendor_stock import build_row, extract


class TestBuildRow(unittest.TestCase):
    def test_names_and_ids_use_row_index(self) -> None:
        # row tuple shape: (entry, npc_name, item, slot, ExtendedCost, item_name)
        row = ("100", "Alana Moonstrike", "51149", "0", "0", "Sanctified Lasherweave Cover")
        result = build_row(row, row_index=42)

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
        result = build_row(row, row_index=0)

        self.assertEqual(
            result["trigger"],
            {"kind": "vendor_purchase", "npc_entry": 100, "item_slot": 3},
        )
        self.assertEqual(
            result["delivery"],
            {"kind": "mail", "wow_item_entry": 51149},
        )

    def test_two_rows_with_same_npc_and_item_name_get_distinct_names(self) -> None:
        # This is the real Alana Moonstrike collision from the live DB: two
        # different item_template entries (51149, 51290) share the literal
        # item name "Sanctified Lasherweave Cover". Without the row_index
        # suffix these two rows would produce identical location/item names.
        row_a = ("100", "Alana Moonstrike", "51149", "0", "0", "Sanctified Lasherweave Cover")
        row_b = ("100", "Alana Moonstrike", "51290", "0", "0", "Sanctified Lasherweave Cover")

        result_a = build_row(row_a, row_index=5)
        result_b = build_row(row_b, row_index=6)

        self.assertNotEqual(result_a["location_name"], result_b["location_name"])
        self.assertNotEqual(result_a["item_name"], result_b["item_name"])
        self.assertNotEqual(result_a["location_id"], result_b["location_id"])
        self.assertNotEqual(result_a["item_id"], result_b["item_id"])


class TestExtractDenylist(unittest.TestCase):
    @patch("extract_vendor_stock.load_exclusion_rules")
    @patch("extract_vendor_stock.run_query")
    def test_denylist_is_applied_to_item_name_not_npc_name(self, mock_run_query, mock_load_rules) -> None:
        mock_load_rules.return_value = {"name_denylist": [r"(?i)\btest\b"]}
        mock_run_query.return_value = [
            # npc_name contains "Test" but item_name does not -- must NOT be excluded.
            ("1", "Test Vendor Bob", "500", "0", "0", "Ordinary Sword"),
            # item_name contains "Test" -- must be excluded.
            ("2", "Ordinary Vendor", "501", "0", "0", "Test Sword"),
        ]

        result = extract()

        self.assertEqual(len(result["locations"]), 1)
        self.assertEqual(len(result["items"]), 1)
        self.assertIn("Test Vendor Bob", result["locations"][0]["name"])


if __name__ == "__main__":
    unittest.main()
