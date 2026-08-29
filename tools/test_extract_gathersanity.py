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
            [("1502", "0")],                                  # gathering_node spawn/map query
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
            [("193", "0"), ("999", "571")],  # skinning spawn/map query, keyed by creature entry's own spawn map
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
            [("1502", "0")],
            [("193", "4304", "Thick Leather", "193", "0")],
            [("193", "0")],
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


if __name__ == "__main__":
    unittest.main()
