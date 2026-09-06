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
    # collision cleanly. With only one real spell per fixture here (always
    # also its own trigger spell, per _is_spell_safe_to_grant_directly's own
    # real-data finding), every item in these tests falls through to the
    # consumable fallback, never "learn_spell" delivery.
    _CONSUMABLE_FIXTURE = [(117, "Tough Jerky"), (2287, "Refreshing Spring Water")]

    @patch("extract_trainer_spells._query_consumable_items")
    @patch("extract_trainer_spells.parse_spell_names")
    @patch("extract_trainer_spells._load_trainer_expansions")
    @patch("extract_trainer_spells._load_recipe_spell_ids")
    @patch("extract_trainer_spells.load_exclusion_rules")
    @patch("extract_trainer_spells.run_query")
    def test_extracts_one_location_per_distinct_spell_id(
        self, mock_run_query, mock_load_rules, mock_recipe_ids, mock_expansions, mock_names, mock_consumables
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_recipe_ids.return_value = frozenset()
        mock_expansions.return_value = {1: "vanilla"}
        mock_names.return_value = {72: "Shield Bash"}
        mock_run_query.return_value = [("72", "1", "1", "12")]
        mock_consumables.return_value = self._CONSUMABLE_FIXTURE
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
        # This spell (72) is also its own location's own trigger spell --
        # never safe to grant directly (see _is_spell_safe_to_grant_directly's
        # own docstring) -- falls through to the real consumable fallback.
        self.assertEqual(result["items"][0]["delivery"]["kind"], "mail")
        self.assertIn(result["items"][0]["delivery"]["wow_item_entry"], {117, 2287})

    @patch("extract_trainer_spells._query_consumable_items")
    @patch("extract_trainer_spells.resolve_area_tags_for_positions")
    @patch("extract_trainer_spells.parse_spell_names")
    @patch("extract_trainer_spells._load_trainer_expansions")
    @patch("extract_trainer_spells._load_recipe_spell_ids")
    @patch("extract_trainer_spells.load_exclusion_rules")
    @patch("extract_trainer_spells.run_query")
    def test_empty_area_tags_omits_area_key_not_empty_list(
        self, mock_run_query, mock_load_rules, mock_recipe_ids, mock_expansions, mock_names,
        mock_resolve_area_tags, mock_consumables,
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
        result = extract()
        self.assertNotIn("area", result["locations"][0]["tags"])

    @patch("extract_trainer_spells._query_consumable_items")
    @patch("extract_trainer_spells.parse_spell_names")
    @patch("extract_trainer_spells._load_trainer_expansions")
    @patch("extract_trainer_spells._load_recipe_spell_ids")
    @patch("extract_trainer_spells.load_exclusion_rules")
    @patch("extract_trainer_spells.run_query")
    def test_spell_taught_by_two_classes_gets_both_class_tags(
        self, mock_run_query, mock_load_rules, mock_recipe_ids, mock_expansions, mock_names, mock_consumables
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
        result = extract()
        self.assertEqual(len(result["locations"]), 1)
        self.assertEqual(result["locations"][0]["tags"]["class"], ["rogue", "warrior"])

    @patch("extract_trainer_spells._query_consumable_items")
    @patch("extract_trainer_spells.parse_spell_names")
    @patch("extract_trainer_spells._load_trainer_expansions")
    @patch("extract_trainer_spells._load_recipe_spell_ids")
    @patch("extract_trainer_spells.load_exclusion_rules")
    @patch("extract_trainer_spells.run_query")
    def test_min_level_is_lowest_req_level_across_trainers(
        self, mock_run_query, mock_load_rules, mock_recipe_ids, mock_expansions, mock_names, mock_consumables
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
        result = extract()
        self.assertEqual(result["locations"][0]["trigger"]["min_level"], 10)

    @patch("extract_trainer_spells._query_consumable_items")
    @patch("extract_trainer_spells.parse_spell_names")
    @patch("extract_trainer_spells._load_trainer_expansions")
    @patch("extract_trainer_spells._load_recipe_spell_ids")
    @patch("extract_trainer_spells.load_exclusion_rules")
    @patch("extract_trainer_spells.run_query")
    def test_spell_already_claimed_by_recipes_is_excluded(
        self, mock_run_query, mock_load_rules, mock_recipe_ids, mock_expansions, mock_names, mock_consumables
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_recipe_ids.return_value = frozenset({6417})
        mock_expansions.return_value = {}
        mock_names.return_value = {6417: "Dig Rat Stew"}
        mock_run_query.return_value = [("6417", "7", "5", "10")]
        mock_consumables.return_value = self._CONSUMABLE_FIXTURE
        result = extract()
        self.assertEqual(len(result["locations"]), 0)

    @patch("extract_trainer_spells._query_consumable_items")
    @patch("extract_trainer_spells.parse_spell_names")
    @patch("extract_trainer_spells._load_trainer_expansions")
    @patch("extract_trainer_spells._load_recipe_spell_ids")
    @patch("extract_trainer_spells.load_exclusion_rules")
    @patch("extract_trainer_spells.run_query")
    def test_spell_with_no_resolved_name_is_excluded(
        self, mock_run_query, mock_load_rules, mock_recipe_ids, mock_expansions, mock_names, mock_consumables
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_recipe_ids.return_value = frozenset()
        mock_expansions.return_value = {}
        mock_names.return_value = {}
        mock_run_query.return_value = [("999999", "1", "1", "1")]
        mock_consumables.return_value = self._CONSUMABLE_FIXTURE
        result = extract()
        self.assertEqual(len(result["locations"]), 0)


class TestIsSpellSafeToGrantDirectly(unittest.TestCase):
    def test_a_spell_that_is_also_a_trigger_spell_is_unsafe(self) -> None:
        from extract_trainer_spells import _is_spell_safe_to_grant_directly
        self.assertFalse(_is_spell_safe_to_grant_directly(116, frozenset({116, 118})))

    def test_a_spell_absent_from_the_trigger_set_is_safe(self) -> None:
        from extract_trainer_spells import _is_spell_safe_to_grant_directly
        self.assertTrue(_is_spell_safe_to_grant_directly(999999, frozenset({116, 118})))


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
    @patch("extract_trainer_spells._query_consumable_items")
    @patch("extract_trainer_spells.run_query")
    @patch("extract_trainer_spells.load_exclusion_rules")
    @patch("extract_trainer_spells.parse_spell_names")
    @patch("extract_trainer_spells._load_trainer_expansions")
    @patch("extract_trainer_spells._load_trainer_positions")
    @patch("extract_trainer_spells._load_recipe_spell_ids")
    def test_every_item_is_a_real_consumable_not_the_old_filler_constant(
        self, mock_recipe_ids, mock_positions, mock_expansions, mock_spell_names,
        mock_load_rules, mock_run_query, mock_query_consumables,
    ) -> None:
        mock_recipe_ids.return_value = frozenset()
        mock_positions.return_value = {}
        mock_expansions.return_value = {1: "vanilla"}
        mock_spell_names.return_value = {116: "Frostbolt", 118: "Polymorph"}
        mock_load_rules.return_value = {"name_denylist": []}
        mock_query_consumables.return_value = [(117, "Tough Jerky"), (2287, "Refreshing Spring Water")]
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
