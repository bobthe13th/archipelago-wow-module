import unittest
from unittest.mock import patch

from extract_containersanity import extract, _expansion_tags_for_loot_id


class TestExpansionTagsForLootId(unittest.TestCase):
    def test_single_real_spawn_resolves_one_expansion(self) -> None:
        loot_id_to_maps = {1683: {0}}
        map_expansions = {0: "vanilla"}
        self.assertEqual(_expansion_tags_for_loot_id(1683, loot_id_to_maps, map_expansions), ["vanilla"])

    def test_multiple_real_spawns_across_expansions_yields_both_sorted(self) -> None:
        loot_id_to_maps = {404: {0, 571}}
        map_expansions = {0: "vanilla", 571: "wotlk"}
        self.assertEqual(_expansion_tags_for_loot_id(404, loot_id_to_maps, map_expansions), ["vanilla", "wotlk"])

    def test_loot_id_with_no_real_spawn_defaults_to_vanilla(self) -> None:
        # Mirrors db_extract.parse_map_expansions' own unrecognized-value
        # convention (see extract_recipes.py's _expansion_tag) -- a loot_id
        # whose only backing template(s) have zero real `gameobject` spawn
        # rows (e.g. a leftover/unused template) still needs a deterministic
        # tag rather than crashing or silently dropping the location.
        self.assertEqual(_expansion_tags_for_loot_id(999999, {}, {}), ["vanilla"])


class TestExtract(unittest.TestCase):
    # NOTE on position columns (M4.11.3.2): the spawn/map query now also
    # selects position_x/position_y (4-tuples, not 2-tuples) so extract()
    # can resolve a real tags["area"]. These mocked TestExtract cases don't
    # care about area resolution, so they use a deliberately out-of-range
    # position (999999.0, 999999.0) -- outside every real WorldMapArea.dbc
    # bounding box on any map, confirmed via resolve_zone_ids_from_position's
    # own min_x<=x<=max_x/min_y<=y<=max_y containment check (db_extract.py)
    # -- so resolve_area_or_instance_tags_for_positions always returns an
    # empty frozenset here and "area" stays omitted from tags, keeping these
    # assertions' exact dict shape valid. Same convention
    # test_extract_enemysanity.py's own TestExtract already established.
    # parse_world_map_areas/parse_area_zone_ids/parse_area_names/
    # parse_map_instance_types/parse_map_names are NOT mocked -- they parse
    # real on-disk DBC files (no DB/network dependency).
    _OUT_OF_RANGE_POS = ("999999.0", "999999.0")

    @patch("extract_containersanity.parse_map_expansions")
    @patch("extract_containersanity.load_exclusion_rules")
    @patch("extract_containersanity.run_query")
    def test_extracts_one_location_and_item_per_real_loot_row(
        self, mock_run_query, mock_load_rules, mock_map_expansions
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_map_expansions.return_value = {0: "vanilla"}
        # Real values verified live against this checkout's DB during
        # planning: loot_id=1683 ("Sunken Chest"'s Data1), item 1683
        # ("Oslow's Toolbox" -- coincidentally same numeric id as the chest
        # in this specific real row, not a bug).
        mock_run_query.side_effect = [
            [("1683", "1683", "Sunken Chest", "Oslow's Toolbox")],  # main loot query
            [("1683", "0", *self._OUT_OF_RANGE_POS)],  # spawn query: loot_id, map, x, y
        ]
        result = extract()
        self.assertEqual(len(result["locations"]), 1)
        self.assertEqual(len(result["items"]), 1)
        self.assertEqual(
            result["locations"][0]["name"],
            "Container: Sunken Chest - Oslow's Toolbox (#1683/1683)",
        )
        self.assertEqual(
            result["locations"][0]["trigger"],
            {"kind": "gameobject_loot", "loot_id": 1683, "item_entry": 1683},
        )
        self.assertEqual(result["locations"][0]["tags"], {"expansion": ["vanilla"]})
        self.assertEqual(
            result["items"][0]["name"],
            "Container Item: Sunken Chest - Oslow's Toolbox (#1683/1683)",
        )
        self.assertEqual(result["items"][0]["delivery"], {"kind": "mail", "wow_item_entry": 1683})

    @patch("extract_containersanity.parse_map_expansions")
    @patch("extract_containersanity.load_exclusion_rules")
    @patch("extract_containersanity.run_query")
    def test_sequential_location_ids_assigned_in_query_order(
        self, mock_run_query, mock_load_rules, mock_map_expansions
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_map_expansions.return_value = {0: "vanilla"}
        # Real values verified live: loot_id=404 ("Weapon Crate") backs 4
        # real distinct items in this checkout's actual data.
        mock_run_query.side_effect = [
            [
                ("404", "1179", "Weapon Crate", "Ice Cold Milk"),
                ("404", "1205", "Weapon Crate", "Melon Juice"),
                ("404", "1811", "Weapon Crate", "Blunt Claymore"),
                ("404", "1812", "Weapon Crate", "Short-handled Battle Axe"),
            ],
            [("404", "0", *self._OUT_OF_RANGE_POS)],
        ]
        result = extract()
        self.assertEqual([loc["location_id"] for loc in result["locations"]], [8_000_000, 8_000_001, 8_000_002, 8_000_003])
        self.assertEqual([item["item_id"] for item in result["items"]], [7_600_000, 7_600_001, 7_600_002, 7_600_003])

    @patch("extract_containersanity.parse_map_expansions")
    @patch("extract_containersanity.load_exclusion_rules")
    @patch("extract_containersanity.run_query")
    def test_denylisted_chest_or_item_name_is_excluded(
        self, mock_run_query, mock_load_rules, mock_map_expansions
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": [r"(?i)\bdeprecated\b"]}
        mock_map_expansions.return_value = {}
        mock_run_query.side_effect = [
            [("999", "111", "Deprecated Test Chest", "Some Item")],
            [],
        ]
        result = extract()
        self.assertEqual(len(result["locations"]), 0)

    @patch("extract_containersanity.parse_map_expansions")
    @patch("extract_containersanity.load_exclusion_rules")
    @patch("extract_containersanity.run_query")
    def test_loot_id_backed_by_templates_in_two_expansions_gets_both_tags(
        self, mock_run_query, mock_load_rules, mock_map_expansions
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_map_expansions.return_value = {0: "vanilla", 571: "wotlk"}
        mock_run_query.side_effect = [
            [("500", "600", "Shared Crate", "Shared Item")],
            [("500", "0", *self._OUT_OF_RANGE_POS), ("500", "571", *self._OUT_OF_RANGE_POS)],
        ]
        result = extract()
        self.assertEqual(result["locations"][0]["tags"], {"expansion": ["vanilla", "wotlk"]})

    @patch("extract_containersanity.resolve_area_or_instance_tags_for_positions")
    @patch("extract_containersanity.parse_map_expansions")
    @patch("extract_containersanity.load_exclusion_rules")
    @patch("extract_containersanity.run_query")
    def test_empty_area_tags_omits_area_key_not_empty_list(
        self, mock_run_query, mock_load_rules, mock_map_expansions, mock_resolve_area_tags
    ) -> None:
        # Same "never zero tags" invariant extract_enemysanity.py/
        # extract_quest_rewards.py/extract_trainer_spells.py's own
        # tags["area"] omission already handles (generate_content.py's
        # _validate_tags_rows rejects an empty list for any dimension
        # present in an export_tags family's tags block, and containersanity
        # is export_tags=True).
        mock_load_rules.return_value = {"name_denylist": []}
        mock_map_expansions.return_value = {0: "vanilla"}
        mock_run_query.side_effect = [
            [("1683", "1683", "Sunken Chest", "Oslow's Toolbox")],
            [("1683", "0", "0.0", "0.0")],
        ]
        mock_resolve_area_tags.return_value = frozenset()
        result = extract()
        self.assertNotIn("area", result["locations"][0]["tags"])


class TestExtractContainersanityAreaTags(unittest.TestCase):
    """M4.11.3.2: exercises the real extract() against the live DB (same
    convention TestExtractEnemysanityAreaTags/TestExtractVendorStockAreaTags
    already use) -- tags["area"] is derived from every real chest spawn
    position via db_extract's own resolve_area_or_instance_tags_for_positions
    (Task 2's fixed mechanism), which isn't meaningfully mockable without
    re-deriving the DBC data by hand."""

    def test_extracted_rows_carry_area_tag(self) -> None:
        rows = extract()
        resolved = [loc for loc in rows["locations"] if loc["tags"].get("area")]
        self.assertTrue(resolved)

    def test_a_barrens_chest_is_tagged_barrens(self) -> None:
        # Confirmed directly against this checkout's live DB: a real chest
        # spawn (gameobject_template.type=3) exists on map=1 (Kalimdor) near
        # Crossroads (-410, -2645), a real Barrens landmark -- see
        # task-5-report.md for the exact live-query confirmation.
        rows = extract()
        barrens_chests = [loc for loc in rows["locations"] if "barrens" in loc["tags"].get("area", [])]
        self.assertTrue(barrens_chests)


class TestGatheringNodeExclusion(unittest.TestCase):
    _OUT_OF_RANGE_POS = ("999999.0", "999999.0")

    @patch("extract_containersanity.parse_map_expansions")
    @patch("extract_containersanity.load_exclusion_rules")
    @patch("extract_containersanity.run_query")
    def test_real_gathering_node_name_is_excluded_even_though_it_is_type_3(
        self, mock_run_query, mock_load_rules, mock_map_expansions
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_map_expansions.return_value = {0: "vanilla"}
        # Real values verified live: Copper Vein IS gameobject_template.type=3
        # and DOES join cleanly against gameobject_loot_template -- it must
        # be excluded by name, not by type, since Containersanity's own
        # type=3 join can't distinguish it from a real chest.
        mock_run_query.side_effect = [
            [
                ("1502", "774", "Copper Vein", "Malachite"),
                ("1731", "999", "Mossy Footlocker", "Some Real Container Item"),
            ],
            [("1502", "0", *self._OUT_OF_RANGE_POS), ("1731", "0", *self._OUT_OF_RANGE_POS)],
        ]
        result = extract()
        names = [loc["name"] for loc in result["locations"]]
        self.assertEqual(len(names), 1)
        self.assertIn("Mossy Footlocker", names[0])
        self.assertNotIn("Copper Vein", " ".join(names))


if __name__ == "__main__":
    unittest.main()
