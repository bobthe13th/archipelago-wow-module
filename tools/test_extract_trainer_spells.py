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
    @patch("extract_trainer_spells.parse_spell_names")
    @patch("extract_trainer_spells._load_trainer_expansions")
    @patch("extract_trainer_spells._load_recipe_spell_ids")
    @patch("extract_trainer_spells.load_exclusion_rules")
    @patch("extract_trainer_spells.run_query")
    def test_extracts_one_location_per_distinct_spell_id(
        self, mock_run_query, mock_load_rules, mock_recipe_ids, mock_expansions, mock_names
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_recipe_ids.return_value = frozenset()
        mock_expansions.return_value = {1: "vanilla"}
        mock_names.return_value = {72: "Shield Bash"}
        mock_run_query.return_value = [("72", "1", "1", "12")]
        result = extract()
        self.assertEqual(len(result["locations"]), 1)
        self.assertEqual(result["locations"][0]["name"], "Trainer Spell: Shield Bash (#72)")
        self.assertEqual(result["locations"][0]["trigger"]["spell_id"], 72)
        self.assertTrue(result["locations"][0]["trigger"]["is_filler_reward"])
        # M4.11.1 Task 12: min_level is the real trainer_spell.ReqLevel
        # (mock row's ReqLevel column, "12"), exported verbatim into
        # `trigger` for Zone Leveler's whole_game_scaled filter.
        self.assertEqual(result["locations"][0]["trigger"]["min_level"], 12)
        self.assertEqual(result["locations"][0]["tags"]["class"], ["warrior"])
        self.assertEqual(result["locations"][0]["tags"]["expansion"], ["vanilla"])
        self.assertEqual(result["items"][0]["delivery"], {"kind": "mail", "wow_item_entry": 7073})

    @patch("extract_trainer_spells.parse_spell_names")
    @patch("extract_trainer_spells._load_trainer_expansions")
    @patch("extract_trainer_spells._load_recipe_spell_ids")
    @patch("extract_trainer_spells.load_exclusion_rules")
    @patch("extract_trainer_spells.run_query")
    def test_spell_taught_by_two_classes_gets_both_class_tags(
        self, mock_run_query, mock_load_rules, mock_recipe_ids, mock_expansions, mock_names
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_recipe_ids.return_value = frozenset()
        mock_expansions.return_value = {1: "vanilla", 2: "vanilla"}
        mock_names.return_value = {674: "Dual Wield"}
        mock_run_query.return_value = [
            ("674", "4", "1", "20"),
            ("674", "1", "2", "20"),
        ]
        result = extract()
        self.assertEqual(len(result["locations"]), 1)
        self.assertEqual(result["locations"][0]["tags"]["class"], ["rogue", "warrior"])

    @patch("extract_trainer_spells.parse_spell_names")
    @patch("extract_trainer_spells._load_trainer_expansions")
    @patch("extract_trainer_spells._load_recipe_spell_ids")
    @patch("extract_trainer_spells.load_exclusion_rules")
    @patch("extract_trainer_spells.run_query")
    def test_min_level_is_lowest_req_level_across_trainers(
        self, mock_run_query, mock_load_rules, mock_recipe_ids, mock_expansions, mock_names
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
        result = extract()
        self.assertEqual(result["locations"][0]["trigger"]["min_level"], 10)

    @patch("extract_trainer_spells.parse_spell_names")
    @patch("extract_trainer_spells._load_trainer_expansions")
    @patch("extract_trainer_spells._load_recipe_spell_ids")
    @patch("extract_trainer_spells.load_exclusion_rules")
    @patch("extract_trainer_spells.run_query")
    def test_spell_already_claimed_by_recipes_is_excluded(
        self, mock_run_query, mock_load_rules, mock_recipe_ids, mock_expansions, mock_names
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_recipe_ids.return_value = frozenset({6417})
        mock_expansions.return_value = {}
        mock_names.return_value = {6417: "Dig Rat Stew"}
        mock_run_query.return_value = [("6417", "7", "5", "10")]
        result = extract()
        self.assertEqual(len(result["locations"]), 0)

    @patch("extract_trainer_spells.parse_spell_names")
    @patch("extract_trainer_spells._load_trainer_expansions")
    @patch("extract_trainer_spells._load_recipe_spell_ids")
    @patch("extract_trainer_spells.load_exclusion_rules")
    @patch("extract_trainer_spells.run_query")
    def test_spell_with_no_resolved_name_is_excluded(
        self, mock_run_query, mock_load_rules, mock_recipe_ids, mock_expansions, mock_names
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_recipe_ids.return_value = frozenset()
        mock_expansions.return_value = {}
        mock_names.return_value = {}
        mock_run_query.return_value = [("999999", "1", "1", "1")]
        result = extract()
        self.assertEqual(len(result["locations"]), 0)


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
