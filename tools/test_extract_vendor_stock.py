import unittest
from unittest.mock import patch

import extract_vendor_stock
from extract_vendor_stock import build_row, extract, _load_vendor_expansions, _load_vendor_area_tags


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

    def test_area_tags_omitted_when_empty(self) -> None:
        # No area_tags argument passed -- defaults to an empty frozenset,
        # so "area" must be absent from tags entirely (never an empty
        # list -- generate_content.py's _validate_tags_rows hard-fails on
        # that for any export_tags family, and vendor_stock is one).
        row = ("100", "Alana Moonstrike", "51149", "0", "0", "Sanctified Lasherweave Cover")
        result = build_row(row, row_index=0, expansion="vanilla")
        self.assertNotIn("area", result["tags"])

    def test_area_tags_included_and_sorted_when_present(self) -> None:
        row = ("100", "Alana Moonstrike", "51149", "0", "0", "Sanctified Lasherweave Cover")
        result = build_row(
            row, row_index=0, expansion="vanilla",
            area_tags=frozenset({"stormwind_city", "orgrimmar", "shattrath_city"}),
        )
        self.assertEqual(
            result["tags"],
            {"expansion": ["vanilla"], "area": ["orgrimmar", "shattrath_city", "stormwind_city"]},
        )

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


class TestLoadVendorAreaTags(unittest.TestCase):
    # world_map_areas/area_zone_ids/area_names/map_instance_types/map_names
    # are passed straight through to resolve_area_or_instance_tags_for_
    # positions -- mocking that function directly (rather than re-deriving
    # real DBC data by hand) is enough to exercise this function's own job:
    # grouping raw (entry, map, x, y) rows into a per-entry position list.
    @patch("extract_vendor_stock.resolve_area_or_instance_tags_for_positions")
    @patch("extract_vendor_stock.run_query")
    def test_groups_every_real_spawn_position_by_vendor_entry(
        self, mock_run_query, mock_resolve
    ) -> None:
        mock_run_query.return_value = [
            ("54", "0", "1.0", "2.0"),
            ("54", "1", "3.0", "4.0"),
            ("999", "571", "5.0", "6.0"),
        ]
        mock_resolve.side_effect = [frozenset({"stormwind_city", "orgrimmar"}), frozenset({"dun_morogh"})]

        result = _load_vendor_area_tags(
            world_map_areas=[], area_zone_ids={}, area_names={}, map_instance_types={}, map_names={},
        )

        self.assertEqual(
            result, {54: frozenset({"stormwind_city", "orgrimmar"}), 999: frozenset({"dun_morogh"})}
        )
        self.assertEqual(
            mock_resolve.call_args_list[0].args[0], [(0, 1.0, 2.0), (1, 3.0, 4.0)]
        )
        self.assertEqual(mock_resolve.call_args_list[1].args[0], [(571, 5.0, 6.0)])

    @patch("extract_vendor_stock.resolve_area_or_instance_tags_for_positions")
    @patch("extract_vendor_stock.run_query")
    def test_no_spawns_yields_empty_dict(self, mock_run_query, mock_resolve) -> None:
        mock_run_query.return_value = []
        result = _load_vendor_area_tags(
            world_map_areas=[], area_zone_ids={}, area_names={}, map_instance_types={}, map_names={},
        )
        self.assertEqual(result, {})
        mock_resolve.assert_not_called()


class TestExtractDenylist(unittest.TestCase):
    @patch("extract_vendor_stock._load_vendor_area_tags")
    @patch("extract_vendor_stock._load_vendor_expansions")
    @patch("extract_vendor_stock.load_exclusion_rules")
    @patch("extract_vendor_stock.run_query")
    def test_denylist_is_applied_to_item_name_not_npc_name(
        self, mock_run_query, mock_load_rules, mock_load_expansions, mock_load_area_tags
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": [r"(?i)\btest\b"]}
        mock_load_expansions.return_value = {}
        mock_load_area_tags.return_value = {}
        mock_run_query.return_value = [
            ("1", "Test Vendor Bob", "500", "0", "0", "Ordinary Sword"),
            ("2", "Ordinary Vendor", "501", "0", "0", "Test Sword"),
        ]

        result = extract()

        self.assertEqual(len(result["locations"]), 1)
        self.assertEqual(len(result["items"]), 1)
        self.assertIn("Test Vendor Bob", result["locations"][0]["name"])

    @patch("extract_vendor_stock._load_vendor_area_tags")
    @patch("extract_vendor_stock._load_vendor_expansions")
    @patch("extract_vendor_stock.load_exclusion_rules")
    @patch("extract_vendor_stock.run_query")
    def test_locations_carry_the_resolved_expansion_tag(
        self, mock_run_query, mock_load_rules, mock_load_expansions, mock_load_area_tags
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_load_expansions.return_value = {1: "wotlk"}
        mock_load_area_tags.return_value = {}
        mock_run_query.return_value = [
            ("1", "Some Vendor", "500", "0", "0", "Some Item"),
        ]

        result = extract()

        self.assertEqual(result["locations"][0]["tags"], {"expansion": ["wotlk"]})

    @patch("extract_vendor_stock._load_vendor_area_tags")
    @patch("extract_vendor_stock._load_vendor_expansions")
    @patch("extract_vendor_stock.load_exclusion_rules")
    @patch("extract_vendor_stock.run_query")
    def test_missing_expansion_entry_defaults_to_vanilla(
        self, mock_run_query, mock_load_rules, mock_load_expansions, mock_load_area_tags
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_load_expansions.return_value = {}
        mock_load_area_tags.return_value = {}
        mock_run_query.return_value = [
            ("1", "Some Vendor", "500", "0", "0", "Some Item"),
        ]

        result = extract()

        self.assertEqual(result["locations"][0]["tags"], {"expansion": ["vanilla"]})

    @patch("extract_vendor_stock._load_vendor_area_tags")
    @patch("extract_vendor_stock._load_vendor_expansions")
    @patch("extract_vendor_stock.load_exclusion_rules")
    @patch("extract_vendor_stock.run_query")
    def test_locations_carry_a_resolved_area_tag_when_present(
        self, mock_run_query, mock_load_rules, mock_load_expansions, mock_load_area_tags
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_load_expansions.return_value = {1: "vanilla"}
        mock_load_area_tags.return_value = {1: frozenset({"elwynn_forest"})}
        mock_run_query.return_value = [
            ("1", "Some Vendor", "500", "0", "0", "Some Item"),
        ]

        result = extract()

        self.assertEqual(
            result["locations"][0]["tags"], {"expansion": ["vanilla"], "area": ["elwynn_forest"]}
        )

    @patch("extract_vendor_stock._load_vendor_area_tags")
    @patch("extract_vendor_stock._load_vendor_expansions")
    @patch("extract_vendor_stock.load_exclusion_rules")
    @patch("extract_vendor_stock.run_query")
    def test_area_key_omitted_not_empty_list_when_unresolved(
        self, mock_run_query, mock_load_rules, mock_load_expansions, mock_load_area_tags
    ) -> None:
        # Same "never zero tags" invariant generate_content.py's
        # _validate_tags_rows enforces for every export_tags family
        # (vendor_stock is one).
        mock_load_rules.return_value = {"name_denylist": []}
        mock_load_expansions.return_value = {1: "vanilla"}
        mock_load_area_tags.return_value = {}
        mock_run_query.return_value = [
            ("1", "Some Vendor", "500", "0", "0", "Some Item"),
        ]

        result = extract()

        self.assertNotIn("area", result["locations"][0]["tags"])


class TestExtractVendorStockAreaTags(unittest.TestCase):
    """M4.11.3.2: exercises the real extract() against the live DB (same
    convention TestExtractTrainerSpellsAreaTags/TestExtractEnemysanityAreaTags
    already use) -- tags["area"] is derived from every real vendor spawn
    position via db_extract's own resolve_area_or_instance_tags_for_positions
    (Task 2), which isn't meaningfully mockable without re-deriving the DBC
    data by hand."""

    def test_extracted_rows_carry_area_tag(self) -> None:
        rows = extract_vendor_stock.extract()
        resolved = [loc for loc in rows["locations"] if loc["tags"].get("area")]
        self.assertTrue(resolved)

    def test_lhara_spans_its_real_zones_across_three_continents(self) -> None:
        # Confirmed directly against this checkout's live DB: npc_vendor
        # entry 14846 ("Lhara", a seasonal-event vendor) has 3 real spawns,
        # one each on map 0 (Eastern Kingdoms), map 1 (Kalimdor), and map
        # 530 (Outland). Each spawn's open-world position falls inside more
        # than one overlapping WorldMapArea.dbc box on its own continent,
        # so this resolves to 8 real zone tags total, not just 3.
        rows = extract_vendor_stock.extract()
        lhara = next(loc for loc in rows["locations"] if loc["trigger"]["npc_entry"] == 14846)
        area_tags = set(lhara["tags"]["area"])
        self.assertTrue(
            {"elwynn_forest", "westfall", "barrens", "desolace", "mulgore", "shattrath_city",
             "terokkar_forest", "nagrand"} <= area_tags
        )


if __name__ == "__main__":
    unittest.main()
