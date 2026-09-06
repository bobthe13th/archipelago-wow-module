import unittest
from unittest.mock import patch

from extract_itemsanity import extract, _class_tag, _quality_tag, _expansion_tag


class TestClassTag(unittest.TestCase):
    def test_known_values_map_to_real_item_class_names(self) -> None:
        self.assertEqual(_class_tag(0), "consumable")
        self.assertEqual(_class_tag(2), "weapon")
        self.assertEqual(_class_tag(4), "armor")
        self.assertEqual(_class_tag(9), "recipe")
        self.assertEqual(_class_tag(16), "glyph")


class TestQualityTag(unittest.TestCase):
    def test_known_values_map_to_real_item_quality_names(self) -> None:
        self.assertEqual(_quality_tag(0), "poor")
        self.assertEqual(_quality_tag(1), "normal")
        self.assertEqual(_quality_tag(4), "epic")
        self.assertEqual(_quality_tag(7), "heirloom")


class TestExpansionTag(unittest.TestCase):
    def test_zero_required_level_defaults_to_vanilla(self) -> None:
        # Real, common case -- most consumables/reagents have no level
        # requirement at all. Same "unresolvable -> vanilla" convention
        # every other family in this project already uses.
        self.assertEqual(_expansion_tag(0), "vanilla")

    def test_vanilla_bracket(self) -> None:
        self.assertEqual(_expansion_tag(60), "vanilla")

    def test_tbc_bracket(self) -> None:
        self.assertEqual(_expansion_tag(61), "tbc")
        self.assertEqual(_expansion_tag(70), "tbc")

    def test_wotlk_bracket(self) -> None:
        self.assertEqual(_expansion_tag(71), "wotlk")
        self.assertEqual(_expansion_tag(80), "wotlk")


class TestExtract(unittest.TestCase):
    @patch("extract_itemsanity.compute_acquired_item_ids")
    @patch("extract_itemsanity.parse_char_start_outfit_item_ids")
    @patch("extract_itemsanity.parse_spell_created_item_ids")
    @patch("extract_itemsanity.load_exclusion_rules")
    @patch("extract_itemsanity.run_query")
    def test_extracts_one_location_and_item_per_real_row(
        self, mock_run_query, mock_load_rules, mock_spell_ids, mock_outfit_ids, mock_acquired
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_spell_ids.return_value = frozenset()
        # M4.11.5.1 plan-defect fix (matches this same plan's Task 1
        # precedent): entry 6948 (Hearthstone) is real starting-gear
        # content (Task 3's own real-DBC-verified acquisition route), so
        # it must be in the mocked acquired set here for this test's own
        # pre-existing "no debug_category" assertion below to remain
        # true under the new tagging logic -- otherwise every row would
        # be "unobtainable" by construction whenever all three mocks
        # return an empty set, which contradicts this test's own intent
        # of exercising ordinary, untagged row extraction.
        mock_outfit_ids.return_value = frozenset({6948})
        mock_acquired.return_value = frozenset()
        # Real values verified live against this checkout's DB during
        # planning: entry=6948 ("Hearthstone"), class=15 (misc),
        # Quality=1 (normal), RequiredLevel=0.
        mock_run_query.return_value = [("6948", "Hearthstone", "15", "1", "0")]
        result = extract()
        self.assertEqual(len(result["locations"]), 1)
        self.assertEqual(len(result["items"]), 1)
        loc = result["locations"][0]
        self.assertEqual(loc["name"], "Itemsanity: Hearthstone (#6948)")
        self.assertEqual(loc["trigger"], {"kind": "item_first_held", "item_entry": 6948, "min_level": 0})
        self.assertEqual(loc["tags"], {"class": ["misc"], "quality": ["normal"], "expansion": ["vanilla"]})
        item = result["items"][0]
        self.assertEqual(item["name"], "Itemsanity Item: Hearthstone (#6948)")
        self.assertEqual(item["delivery"], {"kind": "mail", "wow_item_entry": 6948})

    @patch("extract_itemsanity.compute_acquired_item_ids")
    @patch("extract_itemsanity.parse_char_start_outfit_item_ids")
    @patch("extract_itemsanity.parse_spell_created_item_ids")
    @patch("extract_itemsanity.load_exclusion_rules")
    @patch("extract_itemsanity.run_query")
    def test_sequential_ids_assigned_in_query_order(
        self, mock_run_query, mock_load_rules, mock_spell_ids, mock_outfit_ids, mock_acquired
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_spell_ids.return_value = frozenset()
        mock_outfit_ids.return_value = frozenset()
        mock_acquired.return_value = frozenset()
        mock_run_query.return_value = [
            ("25", "Worn Shortsword", "2", "0", "0"),
            ("117", "Tigerseye", "3", "0", "0"),
            ("159", "Refreshing Spring Water", "0", "0", "0"),
        ]
        result = extract()
        self.assertEqual(
            [loc["location_id"] for loc in result["locations"]],
            [12_500_000, 12_500_001, 12_500_002],
        )
        self.assertEqual(
            [item["item_id"] for item in result["items"]],
            [13_500_000, 13_500_001, 13_500_002],
        )

    @patch("extract_itemsanity.compute_acquired_item_ids")
    @patch("extract_itemsanity.parse_char_start_outfit_item_ids")
    @patch("extract_itemsanity.parse_spell_created_item_ids")
    @patch("extract_itemsanity.load_exclusion_rules")
    @patch("extract_itemsanity.run_query")
    def test_denylisted_item_name_is_tagged_debug_not_excluded(
        self, mock_run_query, mock_load_rules, mock_spell_ids, mock_outfit_ids, mock_acquired
    ) -> None:
        # M4.11.5.1: a denylisted row is now a real, tagged location --
        # no longer silently dropped -- so a player can opt back in via
        # itemsanity_debug_item_inclusion.
        mock_load_rules.return_value = {"name_denylist": [r"(?i)\bdeprecated\b"]}
        mock_spell_ids.return_value = frozenset()
        mock_outfit_ids.return_value = frozenset()
        mock_acquired.return_value = frozenset()
        mock_run_query.return_value = [("999", "Deprecated Test Item", "15", "0", "0")]
        result = extract()
        self.assertEqual(len(result["locations"]), 1)
        self.assertEqual(result["locations"][0]["tags"]["debug_category"], ["debug"])

    @patch("extract_itemsanity.compute_acquired_item_ids")
    @patch("extract_itemsanity.parse_char_start_outfit_item_ids")
    @patch("extract_itemsanity.parse_spell_created_item_ids")
    @patch("extract_itemsanity.load_exclusion_rules")
    @patch("extract_itemsanity.run_query")
    def test_unacquired_real_item_is_tagged_unobtainable(
        self, mock_run_query, mock_load_rules, mock_spell_ids, mock_outfit_ids, mock_acquired
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_spell_ids.return_value = frozenset()
        mock_outfit_ids.return_value = frozenset()
        mock_acquired.return_value = frozenset()  # entry 17 acquired via nothing
        mock_run_query.return_value = [("17", "Martin Fury", "4", "6", "0")]
        result = extract()
        self.assertEqual(len(result["locations"]), 1)
        self.assertEqual(result["locations"][0]["tags"]["debug_category"], ["unobtainable"])

    @patch("extract_itemsanity.compute_acquired_item_ids")
    @patch("extract_itemsanity.parse_char_start_outfit_item_ids")
    @patch("extract_itemsanity.parse_spell_created_item_ids")
    @patch("extract_itemsanity.load_exclusion_rules")
    @patch("extract_itemsanity.run_query")
    def test_acquired_item_from_any_of_the_three_sources_is_normal_and_untagged(
        self, mock_run_query, mock_load_rules, mock_spell_ids, mock_outfit_ids, mock_acquired
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_spell_ids.return_value = frozenset()
        mock_outfit_ids.return_value = frozenset({6948})  # Hearthstone via starting gear
        mock_acquired.return_value = frozenset()
        mock_run_query.return_value = [("6948", "Hearthstone", "15", "1", "0")]
        result = extract()
        self.assertNotIn("debug_category", result["locations"][0]["tags"])

    @patch("extract_itemsanity.compute_acquired_item_ids")
    @patch("extract_itemsanity.parse_char_start_outfit_item_ids")
    @patch("extract_itemsanity.parse_spell_created_item_ids")
    @patch("extract_itemsanity.load_exclusion_rules")
    @patch("extract_itemsanity.run_query")
    def test_debug_tag_takes_priority_even_if_the_name_also_matches_an_acquired_id(
        self, mock_run_query, mock_load_rules, mock_spell_ids, mock_outfit_ids, mock_acquired
    ) -> None:
        # A denylisted row is ALWAYS `debug`, never `unobtainable`, even if
        # its entry happens to also appear in the acquired set -- the two
        # tiers are mutually exclusive by construction (spec Sec5: debug
        # is checked first).
        mock_load_rules.return_value = {"name_denylist": [r"(?i)\btest\b"]}
        mock_spell_ids.return_value = frozenset()
        mock_outfit_ids.return_value = frozenset()
        mock_acquired.return_value = frozenset({999})
        mock_run_query.return_value = [("999", "QA Test Item", "15", "0", "0")]
        result = extract()
        self.assertEqual(result["locations"][0]["tags"]["debug_category"], ["debug"])

    @patch("extract_itemsanity.compute_acquired_item_ids")
    @patch("extract_itemsanity.parse_char_start_outfit_item_ids")
    @patch("extract_itemsanity.parse_spell_created_item_ids")
    @patch("extract_itemsanity.load_exclusion_rules")
    @patch("extract_itemsanity.run_query")
    def test_high_required_level_tags_wotlk(
        self, mock_run_query, mock_load_rules, mock_spell_ids, mock_outfit_ids, mock_acquired
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_spell_ids.return_value = frozenset()
        mock_outfit_ids.return_value = frozenset()
        mock_acquired.return_value = frozenset()
        mock_run_query.return_value = [("40395", "Bloodsurge", "4", "4", "78")]
        result = extract()
        self.assertEqual(result["locations"][0]["tags"]["expansion"], ["wotlk"])

    # M4.11.1 Task 12: min_level is the row's own real item_template.
    # RequiredLevel, exported verbatim into `trigger` (not `tags` --
    # TAGS is frozenset[str]-only) so Zone Leveler's whole_game_scaled
    # filter (Archipelago's locations.py) can read it.
    @patch("extract_itemsanity.compute_acquired_item_ids")
    @patch("extract_itemsanity.parse_char_start_outfit_item_ids")
    @patch("extract_itemsanity.parse_spell_created_item_ids")
    @patch("extract_itemsanity.load_exclusion_rules")
    @patch("extract_itemsanity.run_query")
    def test_trigger_carries_real_required_level_as_min_level(
        self, mock_run_query, mock_load_rules, mock_spell_ids, mock_outfit_ids, mock_acquired
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_spell_ids.return_value = frozenset()
        mock_outfit_ids.return_value = frozenset()
        mock_acquired.return_value = frozenset()
        mock_run_query.return_value = [("40395", "Bloodsurge", "4", "4", "78")]
        result = extract()
        self.assertEqual(result["locations"][0]["trigger"]["min_level"], 78)

    # M3 (final whole-branch review, M4.10.6): the SQL query string
    # extract() actually builds is never observed by any prior test here
    # (they all only ever inspect run_query's MOCKED RETURN value, never
    # the query it was CALLED with) -- so a regression that silently
    # dropped the entry<4000000 test-pollution filter, or Fix I1's new
    # reserved-range exclusion, from the real WHERE clause would pass
    # every test above while still re-polluting content/itemsanity.yaml
    # with test rows and this module's own internal icon/trap item rows.
    # This inspects the real SQL text passed to the mocked run_query.
    @patch("extract_itemsanity.compute_acquired_item_ids")
    @patch("extract_itemsanity.parse_char_start_outfit_item_ids")
    @patch("extract_itemsanity.parse_spell_created_item_ids")
    @patch("extract_itemsanity.load_exclusion_rules")
    @patch("extract_itemsanity.run_query")
    def test_query_contains_test_pollution_and_reserved_range_filters(
        self, mock_run_query, mock_load_rules, mock_spell_ids, mock_outfit_ids, mock_acquired
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_spell_ids.return_value = frozenset()
        mock_outfit_ids.return_value = frozenset()
        mock_acquired.return_value = frozenset()
        mock_run_query.return_value = []
        extract()
        self.assertEqual(mock_run_query.call_count, 1)
        query = mock_run_query.call_args[0][0]
        self.assertIn("entry < 4000000", query)
        # Fix I1: this module's own reserved item_template ranges --
        # 850000-850016 (Traps-family AP_ITEM_TRAP_* rows,
        # src/ArchipelagoTrapsContentTable.h) and 850100-850103 (the 4
        # classification-icon rows IconEntryFor synthesizes,
        # src/APItemDisplay.cpp) -- must both be excluded from the real
        # query, not just present as a Python-side filter, since the query
        # itself is what determines which rows ever reach is_denylisted.
        self.assertIn("850000", query)
        self.assertIn("850016", query)
        self.assertIn("850100", query)
        self.assertIn("850103", query)

    # Fix I1 (final whole-branch review, M4.10.6): confirms the reserved
    # icon/trap item_template rows are excluded end-to-end even if a row
    # for one somehow reached the Python-side filtering (defense in depth
    # alongside the SQL-level test above).
    @patch("extract_itemsanity.compute_acquired_item_ids")
    @patch("extract_itemsanity.parse_char_start_outfit_item_ids")
    @patch("extract_itemsanity.parse_spell_created_item_ids")
    @patch("extract_itemsanity.load_exclusion_rules")
    @patch("extract_itemsanity.run_query")
    def test_gm_only_entries_are_now_tagged_unobtainable_not_excluded(
        self, mock_run_query, mock_load_rules, mock_spell_ids, mock_outfit_ids, mock_acquired
    ) -> None:
        # M4.11.5.1: replaces the old hand-maintained _GM_ONLY_ENTRY_DENYLIST
        # (which used to drop these rows outright) with the comprehensive
        # unobtainable check -- real entry 17 "Martin Fury" is STILL not a
        # normal, always-on location, but it's no longer silently gone
        # either: it's a real, tagged, opt-in-able location, and the
        # family's own base id assignment is unaffected by which tier a
        # row lands in.
        mock_load_rules.return_value = {"name_denylist": []}
        mock_spell_ids.return_value = frozenset()
        mock_outfit_ids.return_value = frozenset()
        # M4.11.5.1 plan-defect fix (matches this same plan's Task 1
        # precedent): entry 25 (Worn Shortsword) must be in the mocked
        # acquired set so this test's own final assertion (Worn
        # Shortsword stays untagged/normal, only Martin Fury #17 is
        # unobtainable) is achievable -- an all-frozenset() mock setup
        # would make every real row "unobtainable" by construction,
        # contradicting the test's own stated intent (its comment above
        # says Martin Fury alone is "STILL not a normal, always-on
        # location").
        mock_acquired.return_value = frozenset({25})
        mock_run_query.return_value = [
            ("17", "Martin Fury", "4", "6", "0"),
            ("25", "Worn Shortsword", "2", "1", "0"),
        ]
        result = extract()
        self.assertEqual(len(result["locations"]), 2)
        self.assertEqual(result["locations"][0]["name"], "Itemsanity: Martin Fury (#17)")
        self.assertEqual(result["locations"][0]["tags"]["debug_category"], ["unobtainable"])
        self.assertEqual(result["locations"][0]["location_id"], 12_500_000)
        self.assertNotIn("debug_category", result["locations"][1]["tags"])

    # M1 (final whole-branch review, M4.10.6): a real trailing-whitespace
    # item_template.name (204 real rows found live) must not compile into
    # a location name with a double space before "(#entry)".
    @patch("extract_itemsanity.compute_acquired_item_ids")
    @patch("extract_itemsanity.parse_char_start_outfit_item_ids")
    @patch("extract_itemsanity.parse_spell_created_item_ids")
    @patch("extract_itemsanity.load_exclusion_rules")
    @patch("extract_itemsanity.run_query")
    def test_trailing_whitespace_in_name_is_stripped(
        self, mock_run_query, mock_load_rules, mock_spell_ids, mock_outfit_ids, mock_acquired
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_spell_ids.return_value = frozenset()
        mock_outfit_ids.return_value = frozenset()
        mock_acquired.return_value = frozenset()
        mock_run_query.return_value = [("14940", "Warbringer's Sabatons  ", "4", "4", "80")]
        result = extract()
        self.assertEqual(result["locations"][0]["name"], "Itemsanity: Warbringer's Sabatons (#14940)")
        self.assertNotIn("  (", result["locations"][0]["name"])


if __name__ == "__main__":
    unittest.main()
