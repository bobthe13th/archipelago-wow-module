import unittest

from db_extract import is_denylisted, load_exclusion_rules, DEFAULT_RULES_PATH


class TestExclusionRules(unittest.TestCase):
    def test_denylist_matches_case_insensitive(self) -> None:
        rules = {"name_denylist": [r"(?i)\btest\b", r"(?i)\bdeprecated\b"]}
        self.assertTrue(is_denylisted("QA Test Sword", rules))
        self.assertTrue(is_denylisted("Deprecated Cloak", rules))
        self.assertFalse(is_denylisted("Worn Shortsword", rules))

    def test_real_rules_file_loads_and_matches_known_hits(self) -> None:
        # Confirmed empirically against this checkout's real acore_world data
        # (2026-08-21 spike): the shipped denylist must at minimum catch
        # these two real item_template names.
        rules = load_exclusion_rules(DEFAULT_RULES_PATH)
        self.assertTrue(is_denylisted("Recipe: Test Only Do Not Use", rules))
        self.assertTrue(is_denylisted("QA Deprecated Widget", rules))
