import unittest
from unittest.mock import patch

from extract_enemysanity import extract, _expansion_tags_for_creature_entry, _rank_to_type_tag


class TestRankToTypeTag(unittest.TestCase):
    def test_normal_rank_is_regular(self) -> None:
        self.assertEqual(_rank_to_type_tag(0), "regular")

    def test_every_nonzero_rank_is_boss(self) -> None:
        # CreatureEliteType: 1=Elite, 2=RareElite, 3=WorldBoss, 4=Rare
        # (SharedDefines.h:2962-2970) -- all four non-Normal ranks are
        # "boss" for Enemysanity's own type tag. Rank 4 (Rare) overlaps
        # with the separate, curated Rares/Key-Hunt family -- see this
        # plan's Global Constraints; not excluded here, since it's real
        # WoW rank data, not a fabricated distinction.
        for rank in (1, 2, 3, 4):
            self.assertEqual(_rank_to_type_tag(rank), "boss")


class TestExpansionTagsForCreatureEntry(unittest.TestCase):
    def test_single_real_spawn_resolves_one_expansion(self) -> None:
        entry_to_maps = {1234: {0}}
        map_expansions = {0: "vanilla"}
        self.assertEqual(_expansion_tags_for_creature_entry(1234, entry_to_maps, map_expansions), ["vanilla"])

    def test_multiple_real_spawns_across_expansions_yields_both_sorted(self) -> None:
        entry_to_maps = {5678: {0, 571}}
        map_expansions = {0: "vanilla", 571: "wotlk"}
        self.assertEqual(_expansion_tags_for_creature_entry(5678, entry_to_maps, map_expansions), ["vanilla", "wotlk"])

    def test_entry_with_no_real_spawn_defaults_to_vanilla(self) -> None:
        # Mirrors extract_containersanity.py's _expansion_tags_for_loot_id
        # fallback convention exactly -- an entry that reaches this function
        # at all already passed the "has at least one real spawn" filter in
        # extract(), so this branch is defensive, not expected to fire on
        # real data; kept for parity with the established pattern.
        self.assertEqual(_expansion_tags_for_creature_entry(999999, {}, {}), ["vanilla"])


class TestExtract(unittest.TestCase):
    # NOTE on mock shapes: the plan's original draft assumed
    # creature.id1/id2/id3 columns directly on the `creature` table
    # (extract() issuing 2 run_query calls: template rows, then a single
    # id1/id2/id3/map spawn-row query). Live-checked against this
    # checkout's real acore_world DB during implementation: `creature` has
    # only a single `id` column; alternate-difficulty entries instead come
    # from a separate, real, populated `creature_multispawn` table
    # (confirmed via CreatureData.h:372-374's own "from creature_multispawn"
    # comment on id2/id3, and DESCRIBE creature returning no id1/id2/id3).
    # extract() therefore issues 3 run_query calls: template rows, primary
    # spawn rows (id, map), and multispawn rows (entry, map) -- these mocks
    # reflect that real shape, not the plan's original assumption.

    # NOTE on position columns (M4.11.3.2): primary_spawn_rows/multispawn_rows
    # now select position_x/position_y too (4-tuples, not 2-tuples) so
    # extract() can resolve a real tags["area"]. These mocked TestExtract
    # cases don't care about area resolution, so they use a deliberately
    # out-of-range position (999999.0, 999999.0) -- outside every real
    # WorldMapArea.dbc bounding box on any map, confirmed via
    # resolve_zone_ids_from_position's own min_x<=x<=max_x/min_y<=y<=max_y
    # containment check (db_extract.py) -- so resolve_area_or_instance_tags_
    # for_positions always returns an empty frozenset here and "area" stays
    # omitted from tags, keeping these assertions' exact dict shape valid.
    # parse_world_map_areas/parse_area_zone_ids/parse_area_names/
    # parse_map_instance_types/parse_map_names are NOT mocked -- they parse
    # real on-disk DBC files (no DB/network dependency), same convention
    # extract_trainer_spells.py's own TestExtract already established.
    _OUT_OF_RANGE_POS = ("999999.0", "999999.0")

    @patch("extract_enemysanity.parse_map_expansions")
    @patch("extract_enemysanity.load_exclusion_rules")
    @patch("extract_enemysanity.run_query")
    def test_extracts_one_location_per_real_species(
        self, mock_run_query, mock_load_rules, mock_map_expansions
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_map_expansions.return_value = {0: "vanilla"}
        mock_run_query.side_effect = [
            [("448", "Kobold Vermin", "0")],  # creature_template rows: entry, name, rank
            [("448", "0", *self._OUT_OF_RANGE_POS)],  # primary spawn rows: id, map, x, y
            [],                                         # multispawn rows: entry, map, x, y
        ]
        result = extract()
        self.assertEqual(len(result["locations"]), 1)
        self.assertEqual(result["items"], [])
        self.assertEqual(result["locations"][0]["name"], "Enemy: Kobold Vermin (#448)")
        self.assertEqual(
            result["locations"][0]["trigger"], {"kind": "creature_kill", "creature_entry": 448}
        )
        self.assertEqual(
            result["locations"][0]["tags"], {"type": ["regular"], "expansion": ["vanilla"]}
        )

    @patch("extract_enemysanity.parse_map_expansions")
    @patch("extract_enemysanity.load_exclusion_rules")
    @patch("extract_enemysanity.run_query")
    def test_sequential_location_ids_assigned_in_query_order(
        self, mock_run_query, mock_load_rules, mock_map_expansions
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_map_expansions.return_value = {0: "vanilla"}
        mock_run_query.side_effect = [
            [
                ("448", "Kobold Vermin", "0"),
                ("449", "Kobold Miner", "0"),
                ("450", "Elder Kobold", "1"),
            ],
            [
                ("448", "0", *self._OUT_OF_RANGE_POS),
                ("449", "0", *self._OUT_OF_RANGE_POS),
                ("450", "0", *self._OUT_OF_RANGE_POS),
            ],
            [],
        ]
        result = extract()
        self.assertEqual(
            [loc["location_id"] for loc in result["locations"]],
            [10_500_000, 10_500_001, 10_500_002],
        )

    @patch("extract_enemysanity.parse_map_expansions")
    @patch("extract_enemysanity.load_exclusion_rules")
    @patch("extract_enemysanity.run_query")
    def test_multispawn_only_entry_counts_as_a_real_spawn(
        self, mock_run_query, mock_load_rules, mock_map_expansions
    ) -> None:
        # entry 3456 only ever appears via creature_multispawn (a real,
        # confirmed-populated table in this checkout -- 17 real species hit
        # this exact path with zero creature.id spawn of their own) --
        # must still be picked up.
        mock_load_rules.return_value = {"name_denylist": []}
        mock_map_expansions.return_value = {571: "wotlk"}
        mock_run_query.side_effect = [
            [("3456", "Heroic-Only Ghoul", "1")],
            [],                       # no primary creature.id spawn
            [("3456", "571", *self._OUT_OF_RANGE_POS)],  # multispawn: entry, map, x, y
        ]
        result = extract()
        self.assertEqual(len(result["locations"]), 1)
        self.assertEqual(result["locations"][0]["tags"]["expansion"], ["wotlk"])

    @patch("extract_enemysanity.parse_map_expansions")
    @patch("extract_enemysanity.load_exclusion_rules")
    @patch("extract_enemysanity.run_query")
    def test_denylisted_name_is_excluded(
        self, mock_run_query, mock_load_rules, mock_map_expansions
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": [r"(?i)\bdeprecated\b"]}
        mock_map_expansions.return_value = {}
        mock_run_query.side_effect = [
            [("999", "Deprecated Test Mob", "0")],
            [],
            [],
        ]
        result = extract()
        self.assertEqual(len(result["locations"]), 0)

    @patch("extract_enemysanity.resolve_area_or_instance_tags_for_positions")
    @patch("extract_enemysanity.parse_map_expansions")
    @patch("extract_enemysanity.load_exclusion_rules")
    @patch("extract_enemysanity.run_query")
    def test_empty_area_tags_omits_area_key_not_empty_list(
        self, mock_run_query, mock_load_rules, mock_map_expansions, mock_resolve_area_tags
    ) -> None:
        # Same "never zero tags" invariant extract_quest_rewards.py/
        # extract_trainer_spells.py's own tags["area"] omission already
        # handles (generate_content.py's _validate_tags_rows rejects an
        # empty list for any dimension present in an export_tags family's
        # tags block, and enemysanity is export_tags=True).
        mock_load_rules.return_value = {"name_denylist": []}
        mock_map_expansions.return_value = {0: "vanilla"}
        mock_run_query.side_effect = [
            [("448", "Kobold Vermin", "0")],
            [("448", "0", "0.0", "0.0")],
            [],
        ]
        mock_resolve_area_tags.return_value = frozenset()
        result = extract()
        self.assertNotIn("area", result["locations"][0]["tags"])


class TestExtractEnemysanityAreaTags(unittest.TestCase):
    """M4.11.3.2: exercises the real extract() against the live DB (same
    convention TestExtractTrainerSpellsAreaTags already uses) -- tags["area"]
    is derived from every real creature spawn position via db_extract's own
    resolve_area_or_instance_tags_for_positions (Task 2's fixed mechanism),
    which isn't meaningfully mockable without re-deriving the DBC data by
    hand."""

    def test_extracted_rows_carry_area_tag(self) -> None:
        rows = extract()
        resolved = [loc for loc in rows["locations"] if loc["tags"].get("area")]
        self.assertTrue(resolved)

    def test_ghostpaw_runner_spans_its_real_four_zones(self) -> None:
        # Confirmed directly against this checkout's live DB: creature
        # entry 3823 (Ghostpaw Runner) has 69 real spawns across
        # Durotar/Ashenvale/Felwood/Stonetalon Mountains.
        rows = extract()
        ghostpaw = next(loc for loc in rows["locations"] if loc["trigger"]["creature_entry"] == 3823)
        area_tags = set(ghostpaw["tags"]["area"])
        self.assertTrue({"durotar", "ashenvale", "felwood", "stonetalon_mountains"} <= area_tags)


if __name__ == "__main__":
    unittest.main()
