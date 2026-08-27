import unittest
from unittest.mock import patch

from extract_recipes import extract, _pick_taught_spell, _profession_tag, _expansion_tag


class TestPickTaughtSpell(unittest.TestCase):
    def test_finds_learn_spell_trigger_in_slot_2(self) -> None:
        row = {"spellid_1": "483", "spelltrigger_1": "0", "spellid_2": "2543", "spelltrigger_2": "6",
               "spellid_3": "0", "spelltrigger_3": "0", "spellid_4": "0", "spelltrigger_4": "0",
               "spellid_5": "0", "spelltrigger_5": "0"}
        self.assertEqual(_pick_taught_spell(row), 2543)

    def test_finds_learn_spell_trigger_in_any_slot(self) -> None:
        row = {"spellid_1": "0", "spelltrigger_1": "0", "spellid_2": "0", "spelltrigger_2": "0",
               "spellid_3": "0", "spelltrigger_3": "0", "spellid_4": "9999", "spelltrigger_4": "6",
               "spellid_5": "0", "spelltrigger_5": "0"}
        self.assertEqual(_pick_taught_spell(row), 9999)

    def test_returns_none_for_a_spell_less_row(self) -> None:
        row = {f"spellid_{n}": "0" for n in range(1, 6)}
        row.update({f"spelltrigger_{n}": "0" for n in range(1, 6)})
        self.assertIsNone(_pick_taught_spell(row))

    def test_ignores_on_equip_trigger_value_1_not_learn_spell(self) -> None:
        # Regression guard for the spec's own documented deviation -- 1 is
        # ITEM_SPELLTRIGGER_ON_EQUIP, not "learn spell" (see this plan's
        # Global Constraints).
        row = {"spellid_1": "1234", "spelltrigger_1": "1", "spellid_2": "0", "spelltrigger_2": "0",
               "spellid_3": "0", "spelltrigger_3": "0", "spellid_4": "0", "spelltrigger_4": "0",
               "spellid_5": "0", "spelltrigger_5": "0"}
        self.assertIsNone(_pick_taught_spell(row))


class TestProfessionTag(unittest.TestCase):
    def test_known_skill_line_resolves_to_its_profession_name(self) -> None:
        self.assertEqual(_profession_tag(185), "cooking")
        self.assertEqual(_profession_tag(171), "alchemy")

    def test_unresolved_or_unknown_skill_line_falls_back_to_other(self) -> None:
        self.assertEqual(_profession_tag(None), "other")
        self.assertEqual(_profession_tag(99999), "other")


class TestExpansionTag(unittest.TestCase):
    def test_vanilla_bracket(self) -> None:
        self.assertEqual(_expansion_tag(0), "vanilla")
        self.assertEqual(_expansion_tag(300), "vanilla")

    def test_tbc_bracket(self) -> None:
        self.assertEqual(_expansion_tag(301), "tbc")
        self.assertEqual(_expansion_tag(375), "tbc")

    def test_wotlk_bracket(self) -> None:
        self.assertEqual(_expansion_tag(376), "wotlk")
        self.assertEqual(_expansion_tag(450), "wotlk")


class TestExtract(unittest.TestCase):
    @patch("extract_recipes.parse_skill_line_abilities")
    @patch("extract_recipes.load_exclusion_rules")
    @patch("extract_recipes.run_query")
    def test_extracts_one_location_and_item_per_real_recipe(
        self, mock_run_query, mock_load_rules, mock_parse_skills
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_parse_skills.return_value = {2543: 185}
        mock_run_query.return_value = [
            ("728", "Recipe: Westfall Stew", "0", "483", "0", "2543", "6", "0", "0", "0", "0", "0", "0"),
        ]
        result = extract()
        self.assertEqual(len(result["locations"]), 1)
        self.assertEqual(len(result["items"]), 1)
        self.assertEqual(result["locations"][0]["name"], "Recipe: Westfall Stew (#728)")
        self.assertEqual(result["locations"][0]["trigger"], {"kind": "learn_spell", "spell_id": 2543})
        self.assertEqual(result["locations"][0]["tags"], {"profession": ["cooking"], "expansion": ["vanilla"]})
        self.assertEqual(result["items"][0]["delivery"], {"kind": "mail", "wow_item_entry": 728})

    @patch("extract_recipes.parse_skill_line_abilities")
    @patch("extract_recipes.load_exclusion_rules")
    @patch("extract_recipes.run_query")
    def test_duplicate_taught_spell_keeps_only_the_lowest_item_entry(
        self, mock_run_query, mock_load_rules, mock_parse_skills
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_parse_skills.return_value = {6417: 185}
        mock_run_query.return_value = [
            ("44977", "Recipe: Dig Rat Stew", "0", "0", "0", "6417", "6", "0", "0", "0", "0", "0", "0"),
            ("5487", "Recipe: Dig Rat Stew", "0", "0", "0", "6417", "6", "0", "0", "0", "0", "0", "0"),
        ]
        result = extract()
        self.assertEqual(len(result["locations"]), 1)
        self.assertEqual(result["locations"][0]["name"], "Recipe: Dig Rat Stew (#5487)")

    @patch("extract_recipes.parse_skill_line_abilities")
    @patch("extract_recipes.load_exclusion_rules")
    @patch("extract_recipes.run_query")
    def test_denylisted_name_is_excluded(self, mock_run_query, mock_load_rules, mock_parse_skills) -> None:
        mock_load_rules.return_value = {"name_denylist": [r"(?i)\bdeprecated\b"]}
        mock_parse_skills.return_value = {}
        mock_run_query.return_value = [
            ("999", "Deprecated Pattern: X", "0", "0", "0", "111", "6", "0", "0", "0", "0", "0", "0"),
        ]
        result = extract()
        self.assertEqual(len(result["locations"]), 0)

    @patch("extract_recipes.parse_skill_line_abilities")
    @patch("extract_recipes.load_exclusion_rules")
    @patch("extract_recipes.run_query")
    def test_name_without_existing_recipe_prefix_gets_prefixed_not_doubled(
        self, mock_run_query, mock_load_rules, mock_parse_skills
    ) -> None:
        # Regression guard: most real recipe DB names (e.g. "Pattern: ...")
        # do NOT already start with "Recipe: " -- the guard must still add
        # the family prefix in that case, not skip it. Item names always
        # get the unconditional "Recipe Item: " prefix regardless.
        mock_load_rules.return_value = {"name_denylist": []}
        mock_parse_skills.return_value = {7788: 165}
        mock_run_query.return_value = [
            ("12345", "Pattern: Fine Leather Boots", "0", "0", "0", "7788", "6", "0", "0", "0", "0", "0", "0"),
        ]
        result = extract()
        self.assertEqual(result["locations"][0]["name"], "Recipe: Pattern: Fine Leather Boots (#12345)")
        self.assertEqual(result["items"][0]["name"], "Recipe Item: Pattern: Fine Leather Boots (#12345)")

    @patch("extract_recipes.parse_skill_line_abilities")
    @patch("extract_recipes.load_exclusion_rules")
    @patch("extract_recipes.run_query")
    def test_row_with_no_learn_spell_slot_is_excluded(
        self, mock_run_query, mock_load_rules, mock_parse_skills
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_parse_skills.return_value = {}
        mock_run_query.return_value = [
            ("966", "Tome of Frost Shield", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"),
        ]
        result = extract()
        self.assertEqual(len(result["locations"]), 0)


if __name__ == "__main__":
    unittest.main()
