import unittest
from unittest.mock import patch

from extract_gathersanity import extract, _skinning_source_tag


class TestSkinningSourceTag(unittest.TestCase):
    def test_no_profession_flags_yields_plain_skinning(self) -> None:
        self.assertEqual(_skinning_source_tag(0), "skinning")

    def test_herbalism_flag_bit(self) -> None:
        self.assertEqual(_skinning_source_tag(0x100), "mob_herbalism")

    def test_mining_flag_bit(self) -> None:
        self.assertEqual(_skinning_source_tag(0x200), "mob_mining")

    def test_engineering_flag_bit(self) -> None:
        self.assertEqual(_skinning_source_tag(0x8000), "mob_engineering")

    def test_unrelated_flag_bits_do_not_affect_the_result(self) -> None:
        # Real data has creatures with other, unrelated type_flags bits set
        # alongside (or instead of) the three profession bits -- only those
        # three bits matter for this tag.
        self.assertEqual(_skinning_source_tag(0x100 | 0x00000001), "mob_herbalism")
        self.assertEqual(_skinning_source_tag(0x00000001), "skinning")


class TestExtract(unittest.TestCase):
    # NOTE on position columns (M4.11.3.2): the gathering_node and skinning
    # spawn/map queries now also select position_x/position_y (4-tuples, not
    # 2-tuples) so extract() can resolve a real tags["area"]. These mocked
    # TestExtract cases don't care about area resolution, so they use a
    # deliberately out-of-range position (999999.0, 999999.0) -- outside
    # every real WorldMapArea.dbc bounding box on any map, confirmed via
    # resolve_zone_ids_from_position's own min_x<=x<=max_x/min_y<=y<=max_y
    # containment check (db_extract.py) -- so
    # resolve_area_or_instance_tags_for_positions always returns an empty
    # frozenset here and "area" stays omitted from tags, keeping these
    # assertions' exact dict shape valid. Same convention
    # test_extract_containersanity.py/test_extract_enemysanity.py's own
    # TestExtract already established. parse_world_map_areas/
    # parse_area_zone_ids/parse_area_names/parse_map_instance_types/
    # parse_map_names are NOT mocked -- they parse real on-disk DBC files (no
    # DB/network dependency). disenchant is never extended with position
    # data at all, so its mocked rows are unaffected.
    _OUT_OF_RANGE_POS = ("999999.0", "999999.0")

    @patch("extract_gathersanity.parse_map_expansions")
    @patch("extract_gathersanity.load_exclusion_rules")
    @patch("extract_gathersanity.run_query")
    def test_extracts_gathering_node_rows_with_gameobject_loot_trigger(
        self, mock_run_query, mock_load_rules, mock_map_expansions
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_map_expansions.return_value = {0: "vanilla"}
        # Real values verified live: loot_id=1502 backs "Copper Vein" (in
        # GATHERING_NODE_NAMES), dropping Malachite among other real ores.
        mock_run_query.side_effect = [
            [("1502", "774", "Copper Vein", "Malachite")],   # gathering_node query
            [("1502", "0", *self._OUT_OF_RANGE_POS)],         # gathering_node spawn/map query
            [],  # skinning query
            [],  # skinning spawn/map query
            [],  # disenchant query
        ]
        result = extract()
        self.assertEqual(len(result["locations"]), 1)
        loc = result["locations"][0]
        self.assertEqual(loc["trigger"], {"kind": "gameobject_loot", "loot_id": 1502, "item_entry": 774})
        self.assertEqual(loc["tags"], {"expansion": ["vanilla"], "source": ["gathering_node"]})
        self.assertEqual(result["items"][0]["delivery"], {"kind": "mail", "wow_item_entry": 774})

    @patch("extract_gathersanity.parse_map_expansions")
    @patch("extract_gathersanity.load_exclusion_rules")
    @patch("extract_gathersanity.run_query")
    def test_extracts_skinning_rows_with_correct_source_tag_per_flag(
        self, mock_run_query, mock_load_rules, mock_map_expansions
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_map_expansions.return_value = {0: "vanilla"}
        mock_run_query.side_effect = [
            [],  # gathering_node query
            [],  # gathering_node spawn/map query
            [
                # (loot_id, item_entry, item_name, creature_entry, combined_type_flags)
                ("193", "4304", "Thick Leather", "193", "0"),
                ("999", "5000", "Herb-Flagged Drop", "888", str(0x100)),
            ],
            [
                ("193", "0", *self._OUT_OF_RANGE_POS),
                ("999", "571", *self._OUT_OF_RANGE_POS),
            ],  # skinning spawn/map query, keyed by creature entry's own spawn map
            [],  # disenchant query
        ]
        result = extract()
        self.assertEqual(len(result["locations"]), 2)
        self.assertEqual(result["locations"][0]["trigger"], {"kind": "skinning_loot", "loot_id": 193, "item_entry": 4304})
        self.assertEqual(result["locations"][0]["tags"]["source"], ["skinning"])
        self.assertEqual(result["locations"][1]["tags"]["source"], ["mob_herbalism"])

    @patch("extract_gathersanity.parse_map_expansions")
    @patch("extract_gathersanity.load_exclusion_rules")
    @patch("extract_gathersanity.run_query")
    def test_extracts_disenchant_rows_tagged_by_source_item_level_bracket(
        self, mock_run_query, mock_load_rules, mock_map_expansions
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_map_expansions.return_value = {}
        mock_run_query.side_effect = [
            [],  # gathering_node query
            [],  # gathering_node spawn/map query
            [],  # skinning query
            [],  # skinning spawn/map query
            [
                # (loot_id, item_entry, item_name, min_required_level, max_required_level)
                ("1", "10938", "Lesser Magic Essence", "0", "20"),
            ],
        ]
        result = extract()
        self.assertEqual(len(result["locations"]), 1)
        loc = result["locations"][0]
        self.assertEqual(loc["trigger"], {"kind": "disenchant_loot", "loot_id": 1, "item_entry": 10938})
        self.assertEqual(loc["tags"], {"expansion": ["vanilla"], "source": ["disenchant"]})

    @patch("extract_gathersanity.parse_map_expansions")
    @patch("extract_gathersanity.load_exclusion_rules")
    @patch("extract_gathersanity.run_query")
    def test_sequential_ids_assigned_across_all_three_sources_in_order(
        self, mock_run_query, mock_load_rules, mock_map_expansions
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_map_expansions.return_value = {0: "vanilla"}
        mock_run_query.side_effect = [
            [("1502", "774", "Copper Vein", "Malachite")],
            [("1502", "0", *self._OUT_OF_RANGE_POS)],
            [("193", "4304", "Thick Leather", "193", "0")],
            [("193", "0", *self._OUT_OF_RANGE_POS)],
            [("1", "10938", "Lesser Magic Essence", "0", "20")],
        ]
        result = extract()
        self.assertEqual(
            [loc["location_id"] for loc in result["locations"]],
            [9_000_000, 9_000_001, 9_000_002],
        )
        self.assertEqual(
            [item["item_id"] for item in result["items"]],
            [9_500_000, 9_500_001, 9_500_002],
        )

    @patch("extract_gathersanity.resolve_area_or_instance_tags_for_positions")
    @patch("extract_gathersanity.parse_map_expansions")
    @patch("extract_gathersanity.load_exclusion_rules")
    @patch("extract_gathersanity.run_query")
    def test_empty_area_tags_omits_area_key_not_empty_list_for_gathering_node(
        self, mock_run_query, mock_load_rules, mock_map_expansions, mock_resolve_area_tags
    ) -> None:
        # Same "never zero tags" invariant extract_containersanity.py/
        # extract_enemysanity.py/extract_quest_rewards.py/
        # extract_trainer_spells.py's own tags["area"] omission already
        # handles (generate_content.py's _validate_tags_rows rejects an
        # empty list for any dimension present in an export_tags family's
        # tags block, and gathersanity is export_tags=True).
        mock_load_rules.return_value = {"name_denylist": []}
        mock_map_expansions.return_value = {0: "vanilla"}
        mock_run_query.side_effect = [
            [("1502", "774", "Copper Vein", "Malachite")],
            [("1502", "0", "0.0", "0.0")],
            [],  # skinning query
            [],  # skinning spawn/map query
            [],  # disenchant query
        ]
        mock_resolve_area_tags.return_value = frozenset()
        result = extract()
        self.assertNotIn("area", result["locations"][0]["tags"])

    @patch("extract_gathersanity.resolve_area_or_instance_tags_for_positions")
    @patch("extract_gathersanity.parse_map_expansions")
    @patch("extract_gathersanity.load_exclusion_rules")
    @patch("extract_gathersanity.run_query")
    def test_empty_area_tags_omits_area_key_not_empty_list_for_skinning(
        self, mock_run_query, mock_load_rules, mock_map_expansions, mock_resolve_area_tags
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_map_expansions.return_value = {0: "vanilla"}
        mock_run_query.side_effect = [
            [],  # gathering_node query
            [],  # gathering_node spawn/map query
            [("193", "4304", "Thick Leather", "193", "0")],
            [("193", "0", "0.0", "0.0")],
            [],  # disenchant query
        ]
        mock_resolve_area_tags.return_value = frozenset()
        result = extract()
        self.assertNotIn("area", result["locations"][0]["tags"])

    @patch("extract_gathersanity.parse_map_expansions")
    @patch("extract_gathersanity.load_exclusion_rules")
    @patch("extract_gathersanity.run_query")
    def test_disenchant_rows_never_get_an_area_key_even_when_mocked_empty(
        self, mock_run_query, mock_load_rules, mock_map_expansions
    ) -> None:
        # disenchant has no real position data of its own -- confirm its
        # tags dict shape never includes "area" at all, not even an empty
        # list, regardless of the (irrelevant) gathering_node/skinning
        # mocked results in this same extract() call.
        mock_load_rules.return_value = {"name_denylist": []}
        mock_map_expansions.return_value = {0: "vanilla"}
        mock_run_query.side_effect = [
            [],  # gathering_node query
            [],  # gathering_node spawn/map query
            [],  # skinning query
            [],  # skinning spawn/map query
            [("1", "10938", "Lesser Magic Essence", "0", "20")],
        ]
        result = extract()
        self.assertEqual(len(result["locations"]), 1)
        self.assertEqual(result["locations"][0]["tags"], {"expansion": ["vanilla"], "source": ["disenchant"]})
        self.assertNotIn("area", result["locations"][0]["tags"])


class TestExtractGathersanityAreaTags(unittest.TestCase):
    """M4.11.3.2: exercises the real extract() against the live DB (same
    convention TestExtractEnemysanityAreaTags/TestExtractContainersanityAreaTags
    already use) -- tags["area"] is derived from every real gathering-node/
    skinning spawn position via db_extract's own
    resolve_area_or_instance_tags_for_positions (Task 2's fixed mechanism),
    which isn't meaningfully mockable without re-deriving the DBC data by
    hand. disenchant rows never carry position data, so this class also
    confirms the real live extraction never attaches an "area" key to them."""

    def test_gathering_node_rows_carry_area_tag(self) -> None:
        rows = extract()
        gathering_rows = [
            loc for loc in rows["locations"]
            if "gathering_node" in loc["tags"].get("source", [])
        ]
        self.assertTrue(gathering_rows)
        resolved = [loc for loc in gathering_rows if loc["tags"].get("area")]
        self.assertTrue(resolved)

    def test_disenchant_rows_have_no_area_tag(self) -> None:
        rows = extract()
        disenchant_rows = [
            loc for loc in rows["locations"]
            if "disenchant" in loc["tags"].get("source", [])
        ]
        self.assertTrue(disenchant_rows)
        for loc in disenchant_rows:
            self.assertFalse(loc["tags"].get("area"))
            self.assertNotIn("area", loc["tags"])


if __name__ == "__main__":
    unittest.main()
