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


def test_extract_gathering_nodes_groups_by_zone_and_tier(monkeypatch):
    # M4.11.4.2 Task 2: _extract_gathering_nodes no longer emits one
    # location per gameobject_loot_template row -- instead every real spawn
    # is grouped into an abstract zone+profession+skill-tier zone-pool
    # location (zone_pool_credit trigger), mirroring
    # extract_containersanity.py's own zone-pool rewrite (M4.11.4.1).
    # M4.11.4.2 fix round 1: now takes a real map_expansions param (same
    # shape parse_map_expansions() returns) so it can compute each
    # zone_key's own real "expansion" tag, mirroring
    # extract_containersanity.py's own zone_to_maps mechanism.
    import db_extract
    import extract_gathersanity

    def fake_run_query(sql):
        if "pool_gameobject" in sql:
            return []
        if "FROM gameobject g" in sql:
            # One real Copper Vein spawn (entry 1731, guid 500), one real
            # Silverleaf spawn (entry 1617, guid 501) -- both in "barrens",
            # both on map 1 (kalimdor).
            return [("1731", "500", "1", "10.0", "10.0"), ("1617", "501", "1", "11.0", "11.0")]
        return []

    # parse_pool_gameobject_memberships (db_extract.py) issues its own
    # pool_gameobject query through db_extract's OWN run_query name
    # binding, not through extract_gathersanity's imported copy of the
    # name -- patching only the latter leaves that call hitting the real
    # DB (same module-boundary distinction test_extract_containersanity.py's
    # own _install_common_fixtures already has to account for).
    monkeypatch.setattr(extract_gathersanity, "run_query", fake_run_query)
    monkeypatch.setattr(db_extract, "run_query", fake_run_query)
    monkeypatch.setattr(extract_gathersanity, "parse_lock_skill_requirements",
                         lambda: {8: {"mining": 0}, 2: {"herbalism": 0}})
    # gameobject_template.Data0 (lockId) per entry, real join fixture:
    monkeypatch.setattr(extract_gathersanity, "_query_lock_id_by_entry",
                         lambda entries: {1731: 8, 1617: 2})
    monkeypatch.setattr(extract_gathersanity, "parse_world_map_areas",
                         lambda: [(1, 17, 0.0, 100.0, 0.0, 100.0)])
    monkeypatch.setattr(extract_gathersanity, "parse_area_zone_ids", lambda: {17: 17})
    monkeypatch.setattr(extract_gathersanity, "parse_area_names", lambda: {17: "barrens"})
    monkeypatch.setattr(extract_gathersanity, "parse_map_instance_types", lambda: {1: 0})
    monkeypatch.setattr(extract_gathersanity, "parse_map_names", lambda: {1: "kalimdor"})

    locations, items, zone_pool_spawn_zones, node_tier_by_entry = extract_gathersanity._extract_gathering_nodes(
        {1: "tbc"}
    )
    zone_keys = {loc["trigger"]["zone_key"] for loc in locations}
    # Mining (entry 1731) and Herbalism (entry 1617) get INDEPENDENT abstract
    # pools even though both are Apprentice tier in the same zone -- spec §6's
    # own example names locations per profession ("Tanaris - Mining Node
    # (Expert) 2"), so a bare "<zone>|<tier>" composite (no profession) would
    # wrongly merge them into one pool.
    assert "barrens|mining|apprentice" in zone_keys
    assert "barrens|herbalism|apprentice" in zone_keys
    assert len(locations) == len(items) == 2
    assert all(item["delivery"] == {"kind": "mail", "wow_item_entry": 117} for item in items)
    assert node_tier_by_entry == {1731: "mining|apprentice", 1617: "herbalism|apprentice"}
    assert zone_pool_spawn_zones == {500: ["barrens"], 501: ["barrens"]}
    # M4.11.4.2 fix round 1: real "source"/"expansion" tags, not just "area"
    # -- both real spawns are on map 1, mocked above as a real "tbc" map, so
    # every location's own expansion tag must reflect that real value (not a
    # blind ["vanilla"] default -- this map_expansions fixture deliberately
    # uses "tbc" instead of "vanilla" so a fallback-to-default bug couldn't
    # hide behind a coincidentally-matching default value).
    for loc in locations:
        assert loc["tags"]["source"] == ["gathering_node"]
        assert loc["tags"]["expansion"] == ["tbc"]


class TestExtract(unittest.TestCase):
    # NOTE on position columns (M4.11.3.2): the skinning spawn/map query
    # still also selects position_x/position_y (4-tuples, not 2-tuples) so
    # extract() can resolve a real tags["area"]. These mocked TestExtract
    # cases don't care about area resolution, so they use a deliberately
    # out-of-range position (999999.0, 999999.0) -- outside every real
    # WorldMapArea.dbc bounding box on any map, confirmed via
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
    #
    # M4.11.4.2: _extract_gathering_nodes() (called first, inside extract())
    # now unconditionally calls parse_pool_gameobject_memberships(), which
    # issues its own real DB query -- every test below mocks that function
    # directly (rather than trying to route it through the same run_query
    # mock, which -- being db_extract's OWN module-level name binding, not
    # extract_gathersanity's imported copy -- a plain
    # "extract_gathersanity.run_query" patch cannot reach). parse_lock_skill_
    # requirements() is left unmocked in these gathering-node-empty cases --
    # it's a pure Lock.dbc file parse, same "real on-disk DBC, no DB
    # dependency" convention as the other unmocked parsers above -- and its
    # result is never consulted since the mocked gathering-node spawn query
    # below always returns no real entries.
    _OUT_OF_RANGE_POS = ("999999.0", "999999.0")

    @patch("extract_gathersanity.parse_pool_gameobject_memberships")
    @patch("extract_gathersanity.parse_map_expansions")
    @patch("extract_gathersanity.load_exclusion_rules")
    @patch("extract_gathersanity.run_query")
    def test_extracts_skinning_rows_with_correct_source_tag_per_flag(
        self, mock_run_query, mock_load_rules, mock_map_expansions, mock_pool_memberships
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_map_expansions.return_value = {0: "vanilla"}
        mock_pool_memberships.return_value = {}
        mock_run_query.side_effect = [
            [],  # gathering_node spawn query (no real gathering-node spawns in this fixture)
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

    @patch("extract_gathersanity.parse_pool_gameobject_memberships")
    @patch("extract_gathersanity.parse_map_expansions")
    @patch("extract_gathersanity.load_exclusion_rules")
    @patch("extract_gathersanity.run_query")
    def test_extracts_disenchant_rows_tagged_by_source_item_level_bracket(
        self, mock_run_query, mock_load_rules, mock_map_expansions, mock_pool_memberships
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_map_expansions.return_value = {}
        mock_pool_memberships.return_value = {}
        mock_run_query.side_effect = [
            [],  # gathering_node spawn query
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

    @patch("extract_gathersanity.parse_pool_gameobject_memberships")
    @patch("extract_gathersanity.parse_map_expansions")
    @patch("extract_gathersanity.load_exclusion_rules")
    @patch("extract_gathersanity.run_query")
    def test_sequential_ids_assigned_across_all_three_sources_in_order(
        self, mock_run_query, mock_load_rules, mock_map_expansions, mock_pool_memberships
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_map_expansions.return_value = {0: "vanilla"}
        mock_pool_memberships.return_value = {}
        with patch.multiple(
            "extract_gathersanity",
            parse_lock_skill_requirements=lambda: {8: {"mining": 0}},
            _query_lock_id_by_entry=lambda entries: {1731: 8},
            parse_world_map_areas=lambda: [(1, 17, 0.0, 100.0, 0.0, 100.0)],
            parse_area_zone_ids=lambda: {17: 17},
            parse_area_names=lambda: {17: "barrens"},
            parse_map_instance_types=lambda: {1: 0},
            parse_map_names=lambda: {1: "kalimdor"},
        ):
            mock_run_query.side_effect = [
                [("1731", "500", "1", "10.0", "10.0")],  # gathering_node spawn query: one real node, resolves to "barrens"
                [("193", "4304", "Thick Leather", "193", "0")],  # skinning query
                [("193", "0", *self._OUT_OF_RANGE_POS)],  # skinning spawn/map query
                [("1", "10938", "Lesser Magic Essence", "0", "20")],  # disenchant query
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

    @patch("extract_gathersanity.parse_pool_gameobject_memberships")
    @patch("extract_gathersanity.resolve_area_or_instance_tags_for_positions")
    @patch("extract_gathersanity.parse_map_expansions")
    @patch("extract_gathersanity.load_exclusion_rules")
    @patch("extract_gathersanity.run_query")
    def test_empty_area_tags_omits_area_key_not_empty_list_for_skinning(
        self, mock_run_query, mock_load_rules, mock_map_expansions, mock_resolve_area_tags, mock_pool_memberships
    ) -> None:
        # Same "never zero tags" invariant extract_containersanity.py/
        # extract_enemysanity.py/extract_quest_rewards.py/
        # extract_trainer_spells.py's own tags["area"] omission already
        # handles (generate_content.py's _validate_tags_rows rejects an
        # empty list for any dimension present in an export_tags family's
        # tags block, and gathersanity is export_tags=True). Gathering-node
        # locations no longer have this omission case at all (M4.11.4.2):
        # a zone_key only ever becomes an abstract zone-pool location once
        # it has already resolved a real area/instance name, so tags["area"]
        # is unconditionally present for every zone_pool_credit location --
        # this test now only exercises the skinning path, which keeps its
        # own per-item "area may be omitted" behavior unchanged.
        mock_load_rules.return_value = {"name_denylist": []}
        mock_map_expansions.return_value = {0: "vanilla"}
        mock_pool_memberships.return_value = {}
        mock_run_query.side_effect = [
            [],  # gathering_node spawn query
            [("193", "4304", "Thick Leather", "193", "0")],
            [("193", "0", "0.0", "0.0")],
            [],  # disenchant query
        ]
        mock_resolve_area_tags.return_value = frozenset()
        result = extract()
        self.assertNotIn("area", result["locations"][0]["tags"])

    @patch("extract_gathersanity.parse_pool_gameobject_memberships")
    @patch("extract_gathersanity.parse_map_expansions")
    @patch("extract_gathersanity.load_exclusion_rules")
    @patch("extract_gathersanity.run_query")
    def test_disenchant_rows_never_get_an_area_key_even_when_mocked_empty(
        self, mock_run_query, mock_load_rules, mock_map_expansions, mock_pool_memberships
    ) -> None:
        # disenchant has no real position data of its own -- confirm its
        # tags dict shape never includes "area" at all, not even an empty
        # list, regardless of the (irrelevant) gathering_node/skinning
        # mocked results in this same extract() call.
        mock_load_rules.return_value = {"name_denylist": []}
        mock_map_expansions.return_value = {0: "vanilla"}
        mock_pool_memberships.return_value = {}
        mock_run_query.side_effect = [
            [],  # gathering_node spawn query
            [],  # skinning query
            [],  # skinning spawn/map query
            [("1", "10938", "Lesser Magic Essence", "0", "20")],
        ]
        result = extract()
        self.assertEqual(len(result["locations"]), 1)
        self.assertEqual(result["locations"][0]["tags"], {"expansion": ["vanilla"], "source": ["disenchant"]})
        self.assertNotIn("area", result["locations"][0]["tags"])


class TestExtractGathersanityAreaTags(unittest.TestCase):
    """M4.11.3.2/M4.11.4.2: exercises the real extract() against the live DB
    (same convention TestExtractEnemysanityAreaTags/
    TestExtractContainersanityAreaTags already use). Gathering-node
    locations (zone_pool_credit trigger, M4.11.4.2) are grouped abstract
    zone+profession+tier pools whose tags["area"] is derived from every
    real spawn position feeding db_extract's own
    resolve_area_or_instance_tags_for_positions/resolve_zone_pool_units
    (Task 2's fixed mechanism) -- not meaningfully mockable without
    re-deriving the DBC data by hand. Skinning locations still carry their
    own per-item tags["area"] the same way as before. disenchant rows never
    carry position data, so this class also confirms the real live
    extraction never attaches an "area" key to them."""

    def test_gathering_node_rows_carry_area_tag(self) -> None:
        rows = extract()
        gathering_rows = [
            loc for loc in rows["locations"]
            if loc["trigger"]["kind"] == "zone_pool_credit"
        ]
        self.assertTrue(gathering_rows)
        for loc in gathering_rows:
            self.assertTrue(loc["tags"].get("area"))
        # New M4.11.4.2 top-level keys: real per-entry profession|tier
        # strings and real per-guid zone resolutions, both non-empty against
        # this checkout's real live gathering-node population.
        self.assertTrue(rows["zone_pool_node_tier_by_entry"])
        self.assertTrue(rows["zone_pool_spawn_zones"])
        self.assertTrue(
            all(
                len(tier.split("|")) == 2 and tier.split("|")[0] in ("mining", "herbalism")
                for tier in rows["zone_pool_node_tier_by_entry"].values()
            )
        )

    def test_gathering_node_rows_carry_source_and_expansion_tags(self) -> None:
        # M4.11.4.2 fix round 1: real bug found by Task 5's full-suite
        # pytest run -- gathering_node's own zone_pool_credit rows used to
        # carry only tags["area"], with no "source"/"expansion" key at all,
        # which silently made them un-gateable by
        # gathersanity_source_pools/gathersanity_expansion_pools (a tag
        # dimension entirely absent from a row's tags auto-passes that
        # dimension's own player-option filter, locations.py's
        # _location_matches_pools). Pins both fixes at the extraction layer
        # they were actually made, mirroring the "area" tag's own
        # test_gathering_node_rows_carry_area_tag above.
        rows = extract()
        gathering_rows = [
            loc for loc in rows["locations"]
            if loc["trigger"]["kind"] == "zone_pool_credit"
        ]
        self.assertTrue(gathering_rows)
        for loc in gathering_rows:
            self.assertEqual(loc["tags"].get("source"), ["gathering_node"])
            self.assertTrue(loc["tags"].get("expansion"))

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
