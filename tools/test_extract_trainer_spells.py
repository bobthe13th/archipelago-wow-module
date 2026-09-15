import unittest
from unittest.mock import patch

from extract_trainer_spells import extract, _load_recipe_spell_ids


class TestLoadRecipeSpellIds(unittest.TestCase):
    def test_returns_a_frozenset(self) -> None:
        # Exercises the real function against whatever content/recipes.yaml
        # currently is (present after Task 2, absent before it) -- either
        # way this must not raise and must return a frozenset.
        result = _load_recipe_spell_ids()
        self.assertIsInstance(result, frozenset)


class TestExtract(unittest.TestCase):
    # M4.11.5.0.5: every test below now also mocks _query_consumable_items
    # directly -- run_query is shared between the main trainer_spell query
    # and the new consumable-fallback query, and a single mock_run_query
    # fixture cannot serve both shapes at once (each test's mocked
    # trainer_spell rows are 4-tuples; the consumable query expects
    # 2-tuples). Mocking _query_consumable_items directly sidesteps that
    # collision cleanly. Task 6 adds the same collision for _load_spell_ranks
    # (also backed by run_query, but expects 3-tuples) -- every test below
    # that doesn't specifically exercise chain grouping now also mocks
    # _load_spell_ranks directly, returning {} (no chains at all), so every
    # spell in these single-spell fixtures falls through to the standalone
    # consumable-mail path, same as before this task.
    _CONSUMABLE_FIXTURE = [(117, "Tough Jerky"), (2287, "Refreshing Spring Water")]

    @patch("extract_trainer_spells._load_spell_ranks")
    @patch("extract_trainer_spells._query_consumable_items")
    @patch("extract_trainer_spells.parse_spell_names")
    @patch("extract_trainer_spells._load_trainer_expansions")
    @patch("extract_trainer_spells._load_recipe_spell_ids")
    @patch("extract_trainer_spells.load_exclusion_rules")
    @patch("extract_trainer_spells.run_query")
    def test_extracts_one_location_per_distinct_spell_id(
        self, mock_run_query, mock_load_rules, mock_recipe_ids, mock_expansions, mock_names, mock_consumables,
        mock_spell_ranks,
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_recipe_ids.return_value = frozenset()
        mock_expansions.return_value = {1: "vanilla"}
        mock_names.return_value = {72: "Shield Bash"}
        mock_run_query.return_value = [("72", "1", "1", "12")]
        mock_consumables.return_value = self._CONSUMABLE_FIXTURE
        mock_spell_ranks.return_value = {}
        result = extract()
        self.assertEqual(len(result["locations"]), 1)
        self.assertEqual(result["locations"][0]["name"], "Trainer Spell: Shield Bash (#72)")
        self.assertEqual(result["locations"][0]["trigger"]["spell_id"], 72)
        self.assertNotIn("is_filler_reward", result["locations"][0]["trigger"])
        # M4.11.1 Task 12: min_level is the real trainer_spell.ReqLevel
        # (mock row's ReqLevel column, "12"), exported verbatim into
        # `trigger` for Zone Leveler's whole_game_scaled filter.
        self.assertEqual(result["locations"][0]["trigger"]["min_level"], 12)
        self.assertEqual(result["locations"][0]["tags"]["class"], ["warrior"])
        self.assertEqual(result["locations"][0]["tags"]["expansion"], ["vanilla"])
        # This spell (72) has no spell_ranks entry (mocked to {} above) --
        # a genuine single-rank spell, so it falls through to the real
        # consumable-mail fallback, unchanged from before Task 6.
        self.assertEqual(result["items"][0]["delivery"]["kind"], "mail")
        self.assertIn(result["items"][0]["delivery"]["wow_item_entry"], {117, 2287})

    @patch("extract_trainer_spells._load_spell_ranks")
    @patch("extract_trainer_spells._query_consumable_items")
    @patch("extract_trainer_spells.parse_area_names")
    @patch("extract_trainer_spells.parse_area_zone_ids")
    @patch("extract_trainer_spells.parse_world_map_areas")
    @patch("extract_trainer_spells._load_trainer_positions")
    @patch("extract_trainer_spells.parse_spell_names")
    @patch("extract_trainer_spells._load_trainer_expansions")
    @patch("extract_trainer_spells._load_recipe_spell_ids")
    @patch("extract_trainer_spells.load_exclusion_rules")
    @patch("extract_trainer_spells.run_query")
    def test_trigger_kind_is_trainer_purchase_attempt_not_learn_spell(
        self, mock_run_query, mock_load_rules, mock_recipe_ids, mock_expansions, mock_names,
        mock_positions, mock_world_map_areas, mock_area_zone_ids, mock_area_names, mock_consumables,
        mock_spell_ranks,
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_recipe_ids.return_value = frozenset()
        mock_expansions.return_value = {1: "vanilla"}
        mock_names.return_value = {72: "Shield Bash"}
        mock_positions.return_value = {}
        mock_world_map_areas.return_value = {}
        mock_area_zone_ids.return_value = {}
        mock_area_names.return_value = {}
        mock_run_query.return_value = [("72", "1", "1", "12")]
        mock_consumables.return_value = self._CONSUMABLE_FIXTURE
        mock_spell_ranks.return_value = {}
        result = extract()
        self.assertEqual(result["locations"][0]["trigger"]["kind"], "trainer_purchase_attempt")

    @patch("extract_trainer_spells._load_spell_ranks")
    @patch("extract_trainer_spells._query_consumable_items")
    @patch("extract_trainer_spells.resolve_area_tags_for_positions")
    @patch("extract_trainer_spells.parse_spell_names")
    @patch("extract_trainer_spells._load_trainer_expansions")
    @patch("extract_trainer_spells._load_recipe_spell_ids")
    @patch("extract_trainer_spells.load_exclusion_rules")
    @patch("extract_trainer_spells.run_query")
    def test_empty_area_tags_omits_area_key_not_empty_list(
        self, mock_run_query, mock_load_rules, mock_recipe_ids, mock_expansions, mock_names,
        mock_resolve_area_tags, mock_consumables, mock_spell_ranks,
    ) -> None:
        # M4.11.3.1 final whole-branch review Finding 3: when none of a
        # spell's teaching trainers resolve to a real zone (mocked here via
        # resolve_area_tags_for_positions returning an empty frozenset --
        # not reproducible against this checkout's live DB, where every
        # class trainer resolves to a real zone), tags["area"] must be
        # OMITTED entirely, never set to an empty list -- the same "never
        # zero tags" invariant extract_quest_rewards.py's own tags["area"]
        # omission already handles (generate_content.py's
        # _validate_tags_rows rejects an empty list for any dimension
        # present in an export_tags family's tags block).
        mock_load_rules.return_value = {"name_denylist": []}
        mock_recipe_ids.return_value = frozenset()
        mock_expansions.return_value = {1: "vanilla"}
        mock_names.return_value = {72: "Shield Bash"}
        mock_run_query.return_value = [("72", "1", "1", "12")]
        mock_resolve_area_tags.return_value = frozenset()
        mock_consumables.return_value = self._CONSUMABLE_FIXTURE
        mock_spell_ranks.return_value = {}
        result = extract()
        self.assertNotIn("area", result["locations"][0]["tags"])

    @patch("extract_trainer_spells._load_spell_ranks")
    @patch("extract_trainer_spells._query_consumable_items")
    @patch("extract_trainer_spells.parse_spell_names")
    @patch("extract_trainer_spells._load_trainer_expansions")
    @patch("extract_trainer_spells._load_recipe_spell_ids")
    @patch("extract_trainer_spells.load_exclusion_rules")
    @patch("extract_trainer_spells.run_query")
    def test_spell_taught_by_two_classes_gets_both_class_tags(
        self, mock_run_query, mock_load_rules, mock_recipe_ids, mock_expansions, mock_names, mock_consumables,
        mock_spell_ranks,
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_recipe_ids.return_value = frozenset()
        mock_expansions.return_value = {1: "vanilla", 2: "vanilla"}
        mock_names.return_value = {674: "Dual Wield"}
        mock_run_query.return_value = [
            ("674", "4", "1", "20"),
            ("674", "1", "2", "20"),
        ]
        mock_consumables.return_value = self._CONSUMABLE_FIXTURE
        mock_spell_ranks.return_value = {}
        result = extract()
        self.assertEqual(len(result["locations"]), 1)
        self.assertEqual(result["locations"][0]["tags"]["class"], ["rogue", "warrior"])

    @patch("extract_trainer_spells._load_spell_ranks")
    @patch("extract_trainer_spells._query_consumable_items")
    @patch("extract_trainer_spells.parse_spell_names")
    @patch("extract_trainer_spells._load_trainer_expansions")
    @patch("extract_trainer_spells._load_recipe_spell_ids")
    @patch("extract_trainer_spells.load_exclusion_rules")
    @patch("extract_trainer_spells.run_query")
    def test_min_level_is_lowest_req_level_across_trainers(
        self, mock_run_query, mock_load_rules, mock_recipe_ids, mock_expansions, mock_names, mock_consumables,
        mock_spell_ranks,
    ) -> None:
        # M4.11.1 Task 12: a spell taught by two class trainers at different
        # ReqLevel values (a real, common case -- see extract_trainer_spells'
        # own by_spell aggregation comment) must export the MINIMUM of the
        # two, same aggregation _load_trainer_expansions already applies to
        # req_level internally.
        mock_load_rules.return_value = {"name_denylist": []}
        mock_recipe_ids.return_value = frozenset()
        mock_expansions.return_value = {1: "vanilla", 2: "vanilla"}
        mock_names.return_value = {674: "Dual Wield"}
        mock_run_query.return_value = [
            ("674", "4", "1", "20"),
            ("674", "1", "2", "10"),
        ]
        mock_consumables.return_value = self._CONSUMABLE_FIXTURE
        mock_spell_ranks.return_value = {}
        result = extract()
        self.assertEqual(result["locations"][0]["trigger"]["min_level"], 10)

    @patch("extract_trainer_spells._load_spell_ranks")
    @patch("extract_trainer_spells._query_consumable_items")
    @patch("extract_trainer_spells.parse_spell_names")
    @patch("extract_trainer_spells._load_trainer_expansions")
    @patch("extract_trainer_spells._load_recipe_spell_ids")
    @patch("extract_trainer_spells.load_exclusion_rules")
    @patch("extract_trainer_spells.run_query")
    def test_spell_already_claimed_by_recipes_is_excluded(
        self, mock_run_query, mock_load_rules, mock_recipe_ids, mock_expansions, mock_names, mock_consumables,
        mock_spell_ranks,
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_recipe_ids.return_value = frozenset({6417})
        mock_expansions.return_value = {}
        mock_names.return_value = {6417: "Dig Rat Stew"}
        mock_run_query.return_value = [("6417", "7", "5", "10")]
        mock_consumables.return_value = self._CONSUMABLE_FIXTURE
        mock_spell_ranks.return_value = {}
        result = extract()
        self.assertEqual(len(result["locations"]), 0)

    @patch("extract_trainer_spells._load_spell_ranks")
    @patch("extract_trainer_spells._query_consumable_items")
    @patch("extract_trainer_spells.parse_spell_names")
    @patch("extract_trainer_spells._load_trainer_expansions")
    @patch("extract_trainer_spells._load_recipe_spell_ids")
    @patch("extract_trainer_spells.load_exclusion_rules")
    @patch("extract_trainer_spells.run_query")
    def test_spell_with_no_resolved_name_is_excluded(
        self, mock_run_query, mock_load_rules, mock_recipe_ids, mock_expansions, mock_names, mock_consumables,
        mock_spell_ranks,
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_recipe_ids.return_value = frozenset()
        mock_expansions.return_value = {}
        mock_names.return_value = {}
        mock_run_query.return_value = [("999999", "1", "1", "1")]
        mock_consumables.return_value = self._CONSUMABLE_FIXTURE
        mock_spell_ranks.return_value = {}
        result = extract()
        self.assertEqual(len(result["locations"]), 0)

    @patch("extract_trainer_spells._load_spell_ranks")
    @patch("extract_trainer_spells._query_consumable_items")
    @patch("extract_trainer_spells.parse_spell_names")
    @patch("extract_trainer_spells._load_trainer_expansions")
    @patch("extract_trainer_spells._load_recipe_spell_ids")
    @patch("extract_trainer_spells.load_exclusion_rules")
    @patch("extract_trainer_spells.run_query")
    def test_multi_rank_chain_becomes_one_progressive_item(
        self, mock_run_query, mock_load_rules, mock_recipe_ids, mock_expansions, mock_names,
        mock_consumables, mock_spell_ranks,
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_recipe_ids.return_value = frozenset()
        mock_expansions.return_value = {1: "vanilla"}
        mock_names.return_value = {116: "Frostbolt", 205: "Frostbolt"}
        mock_run_query.return_value = [
            ("116", "8", "1", "4"),
            ("205", "8", "1", "10"),
        ]
        mock_consumables.return_value = self._CONSUMABLE_FIXTURE
        # spell_id -> (first_spell_id, rank); rank 1 is 116, rank 2 is 205
        mock_spell_ranks.return_value = {116: (116, 1), 205: (116, 2)}
        result = extract()
        self.assertEqual(len(result["locations"]), 2)  # one location per rank, unchanged
        self.assertEqual(len(result["items"]), 1)       # one progressive item for the whole chain
        self.assertEqual(result["items"][0]["name"], "Progressive Frostbolt")
        self.assertEqual(result["items"][0]["delivery"]["kind"], "learn_next_chain_rank")
        self.assertEqual(result["items"][0]["delivery"]["spell_ids"], [116, 205])

    @patch("extract_trainer_spells._load_spell_ranks")
    @patch("extract_trainer_spells._query_consumable_items")
    @patch("extract_trainer_spells.parse_spell_names")
    @patch("extract_trainer_spells._load_trainer_expansions")
    @patch("extract_trainer_spells._load_recipe_spell_ids")
    @patch("extract_trainer_spells.load_exclusion_rules")
    @patch("extract_trainer_spells.run_query")
    def test_single_rank_spell_keeps_standalone_mail_item(
        self, mock_run_query, mock_load_rules, mock_recipe_ids, mock_expansions, mock_names,
        mock_consumables, mock_spell_ranks,
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_recipe_ids.return_value = frozenset()
        mock_expansions.return_value = {1: "vanilla"}
        mock_names.return_value = {72: "Shield Bash"}
        mock_run_query.return_value = [("72", "1", "1", "12")]
        mock_consumables.return_value = self._CONSUMABLE_FIXTURE
        mock_spell_ranks.return_value = {}  # 72 has no chain entry at all
        result = extract()
        self.assertEqual(result["items"][0]["delivery"]["kind"], "mail")
        self.assertIn(result["items"][0]["delivery"]["wow_item_entry"], {117, 2287})

    @patch("extract_trainer_spells._load_spell_ranks")
    @patch("extract_trainer_spells._query_consumable_items")
    @patch("extract_trainer_spells.parse_spell_names")
    @patch("extract_trainer_spells._load_trainer_expansions")
    @patch("extract_trainer_spells._load_recipe_spell_ids")
    @patch("extract_trainer_spells.load_exclusion_rules")
    @patch("extract_trainer_spells.run_query")
    def test_two_chains_sharing_a_display_name_get_disambiguated_by_class(
        self, mock_run_query, mock_load_rules, mock_recipe_ids, mock_expansions, mock_names,
        mock_consumables, mock_spell_ranks,
    ) -> None:
        # Real M4.11.6/Task 8 regeneration bug, reproduced with a minimal
        # fixture: Death Knight's and Warlock's spells are BOTH named
        # "Death Coil" in spell.dbc (distinct chains) -- undisambiguated,
        # this produced two items both named "Progressive Death Coil",
        # which generate_content.py's own _validate_unique_names correctly
        # rejects. Also exercises the chain-300 case where the chain's own
        # first_spell_id (300, rank 1) is NOT itself taught by any class
        # trainer (absent from the mocked run_query rows below) -- the
        # disambiguation lookup must use the lowest TAUGHT rank (301)
        # instead of first_spell_id itself, or it would KeyError.
        mock_load_rules.return_value = {"name_denylist": []}
        mock_recipe_ids.return_value = frozenset()
        mock_expansions.return_value = {1: "vanilla"}
        mock_names.return_value = {300: "Death Coil", 301: "Death Coil", 400: "Death Coil", 401: "Death Coil"}
        mock_run_query.return_value = [
            ("301", "6", "1", "10"),  # Death Knight (class id 6) -- rank 2 only; rank 1 (300) untaught
            ("400", "9", "1", "4"),   # Warlock (class id 9) -- rank 1
            ("401", "9", "1", "10"),  # Warlock -- rank 2
        ]
        mock_consumables.return_value = self._CONSUMABLE_FIXTURE
        mock_spell_ranks.return_value = {301: (300, 2), 400: (400, 1), 401: (400, 2)}
        result = extract()
        names = {it["name"] for it in result["items"]}
        self.assertIn("Progressive Death Coil (Death Knight)", names)
        self.assertIn("Progressive Death Coil (Warlock)", names)
        self.assertNotIn("Progressive Death Coil", names)


class TestAssignConsumableItem(unittest.TestCase):
    def test_cycles_through_candidates_in_order(self) -> None:
        from extract_trainer_spells import _assign_consumable_item
        candidates = [(117, "Tough Jerky"), (2287, "Refreshing Spring Water")]
        self.assertEqual(_assign_consumable_item(candidates, 0), 117)
        self.assertEqual(_assign_consumable_item(candidates, 1), 2287)
        self.assertEqual(_assign_consumable_item(candidates, 2), 117)  # wraps

    def test_falls_back_to_filler_item_entry_when_no_real_candidates_exist(self) -> None:
        from extract_trainer_spells import _assign_consumable_item, _FILLER_ITEM_ENTRY
        self.assertEqual(_assign_consumable_item([], 0), _FILLER_ITEM_ENTRY)


class TestExtractDeliversRealSafeItems(unittest.TestCase):
    @patch("extract_trainer_spells._load_spell_ranks")
    @patch("extract_trainer_spells._query_consumable_items")
    @patch("extract_trainer_spells.run_query")
    @patch("extract_trainer_spells.load_exclusion_rules")
    @patch("extract_trainer_spells.parse_spell_names")
    @patch("extract_trainer_spells._load_trainer_expansions")
    @patch("extract_trainer_spells._load_trainer_positions")
    @patch("extract_trainer_spells._load_recipe_spell_ids")
    def test_every_item_is_a_real_consumable_not_the_old_filler_constant(
        self, mock_recipe_ids, mock_positions, mock_expansions, mock_spell_names,
        mock_load_rules, mock_run_query, mock_query_consumables, mock_spell_ranks,
    ) -> None:
        mock_recipe_ids.return_value = frozenset()
        mock_positions.return_value = {}
        mock_expansions.return_value = {1: "vanilla"}
        mock_spell_names.return_value = {116: "Frostbolt", 118: "Polymorph"}
        mock_load_rules.return_value = {"name_denylist": []}
        mock_query_consumables.return_value = [(117, "Tough Jerky"), (2287, "Refreshing Spring Water")]
        mock_spell_ranks.return_value = {}
        mock_run_query.return_value = [
            ("116", "8", "1", "4"),   # Frostbolt, mage trainer, trainer_id 1, req_level 4
            ("118", "8", "1", "20"),  # Polymorph, mage trainer, trainer_id 1, req_level 20
        ]
        result = extract()
        self.assertEqual(len(result["items"]), 2)
        for item in result["items"]:
            self.assertEqual(item["delivery"]["kind"], "mail")
            self.assertIn(item["delivery"]["wow_item_entry"], {117, 2287})
        for loc in result["locations"]:
            self.assertNotIn("is_filler_reward", loc["trigger"])


class TestExtractTrainerSpellsAreaTags(unittest.TestCase):
    """M4.11.3.1: exercises the real extract() against the live DB (same
    convention TestLoadRecipeSpellIds already uses for _load_recipe_spell_ids)
    -- tags["area"] is derived from real creature spawn positions via
    db_extract's own resolve_area_tags_for_positions (Task 3's fixed
    mechanism), which isn't meaningfully mockable without re-deriving the
    DBC data by hand. Replaces M4.11.2's own TestExtractTrainerSpellsZoneData,
    which asserted on trigger["trainer_zone_ids"] -- removed entirely by this
    migration."""

    def test_extracted_rows_carry_area_tag_not_trainer_zone_ids(self) -> None:
        rows = extract()
        sample = rows["locations"][0]
        self.assertIn("area", sample["tags"])
        self.assertIsInstance(sample["tags"]["area"], list)
        self.assertNotIn("trainer_zone_ids", sample["trigger"])

    def test_frost_nova_area_tags_include_durotar_and_orgrimmar(self) -> None:
        rows = extract()
        frost_nova = next(loc for loc in rows["locations"] if loc["trigger"]["spell_id"] == 122)
        area_tags = set(frost_nova["tags"]["area"])
        self.assertTrue({"durotar", "orgrimmar"} & area_tags)

    def test_teleport_stormwind_area_tags_have_no_horde_hub(self) -> None:
        rows = extract()
        teleport_stormwind = next(loc for loc in rows["locations"] if loc["trigger"]["spell_id"] == 3561)
        area_tags = set(teleport_stormwind["tags"]["area"])
        self.assertFalse({"durotar", "orgrimmar"} & area_tags)
        # Real AreaTable.dbc area 1519's own name slugifies to
        # "stormwind_city", not "stormwind" (confirmed against this
        # checkout's real parse_area_names() output) -- this task's own
        # brief cited the shorter, unverified form; corrected here per this
        # task's own "confirm the real current shape" instruction.
        self.assertIn("stormwind_city", area_tags)


if __name__ == "__main__":
    unittest.main()
