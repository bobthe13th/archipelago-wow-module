import unittest
from unittest.mock import patch, MagicMock

from extract_quest_rewards import (
    pick_representative_reward,
    extract,
    _compute_quest_type_tags,
    _load_quest_expansions,
    _resolve_zone_id,
)


class TestPickRepresentativeReward(unittest.TestCase):
    def test_prefers_first_nonzero_fixed_reward(self) -> None:
        row = {"RewardItem1": 0, "RewardItem2": 12345, "RewardItem3": 0, "RewardItem4": 0,
               "RewardChoiceItemID1": 999, "RewardChoiceItemID2": 0, "RewardChoiceItemID3": 0,
               "RewardChoiceItemID4": 0, "RewardChoiceItemID5": 0, "RewardChoiceItemID6": 0}
        self.assertEqual(pick_representative_reward(row), 12345)

    def test_falls_back_to_first_choice_reward_when_no_fixed_reward(self) -> None:
        row = {"RewardItem1": 0, "RewardItem2": 0, "RewardItem3": 0, "RewardItem4": 0,
               "RewardChoiceItemID1": 0, "RewardChoiceItemID2": 777, "RewardChoiceItemID3": 0,
               "RewardChoiceItemID4": 0, "RewardChoiceItemID5": 0, "RewardChoiceItemID6": 0}
        self.assertEqual(pick_representative_reward(row), 777)

    def test_returns_none_when_only_a_spell_reward_exists(self) -> None:
        row = {"RewardItem1": 0, "RewardItem2": 0, "RewardItem3": 0, "RewardItem4": 0,
               "RewardChoiceItemID1": 0, "RewardChoiceItemID2": 0, "RewardChoiceItemID3": 0,
               "RewardChoiceItemID4": 0, "RewardChoiceItemID5": 0, "RewardChoiceItemID6": 0}
        self.assertIsNone(pick_representative_reward(row))


class TestComputeQuestTypeTags(unittest.TestCase):
    def test_dungeon_quest_tag_from_quest_info_id_81(self) -> None:
        self.assertEqual(_compute_quest_type_tags(81, 0, 0), ["dungeon_quest"])

    def test_elite_quest_tag_from_suggested_group_num(self) -> None:
        self.assertEqual(_compute_quest_type_tags(0, 2, 0), ["elite_quest"])

    def test_repeatable_tag_from_daily_flag(self) -> None:
        self.assertEqual(_compute_quest_type_tags(0, 0, 0x1000), ["repeatable"])

    def test_repeatable_tag_from_weekly_flag(self) -> None:
        self.assertEqual(_compute_quest_type_tags(0, 0, 0x8000), ["repeatable"])

    def test_standard_tag_when_none_of_the_others_apply(self) -> None:
        self.assertEqual(_compute_quest_type_tags(0, 0, 0), ["standard"])

    def test_a_quest_can_carry_multiple_type_tags_at_once(self) -> None:
        self.assertEqual(
            sorted(_compute_quest_type_tags(81, 2, 0x1000)),
            ["dungeon_quest", "elite_quest", "repeatable"],
        )


class TestLoadQuestExpansions(unittest.TestCase):
    @patch("extract_quest_rewards.parse_map_expansions")
    @patch("extract_quest_rewards.run_query")
    def test_resolves_expansion_via_min_map_across_creature_and_gameobject_queststarters(
        self, mock_run_query, mock_parse_map
    ) -> None:
        mock_parse_map.return_value = {0: "vanilla", 530: "tbc", 571: "wotlk"}
        mock_run_query.return_value = [("100", "0"), ("200", "571")]
        result = _load_quest_expansions()
        self.assertEqual(result, {100: "vanilla", 200: "wotlk"})

    @patch("extract_quest_rewards.parse_map_expansions")
    @patch("extract_quest_rewards.run_query")
    def test_unknown_map_id_defaults_to_vanilla(self, mock_run_query, mock_parse_map) -> None:
        mock_parse_map.return_value = {}
        mock_run_query.return_value = [("100", "999")]
        result = _load_quest_expansions()
        self.assertEqual(result, {100: "vanilla"})


class TestResolveZoneId(unittest.TestCase):
    """M4.11.1 Task 2: quest_template.QuestSortID -> a real zone_id, or 0
    ("no resolvable real-world zone"). See db_extract.parse_area_zone_ids's
    own docstring for the full empirical justification -- this class only
    exercises _resolve_zone_id's own sign-check contract."""

    def test_positive_quest_sort_id_resolves_via_area_zone_ids(self) -> None:
        # Real-data shape: quest 850 "Kolkar Leaders" has QuestSortID = 17,
        # a real top-level AreaTable.dbc zone (The Barrens, zone_level_data
        # .ZONE_ID_BARRENS) -- a top-level zone resolves to itself.
        self.assertEqual(_resolve_zone_id(17, {17: 17}), 17)

    def test_positive_quest_sort_id_referencing_a_subzone_resolves_to_its_parent_zone(self) -> None:
        # Real-data shape: quest 783 "A Threat Within" has QuestSortID = 9
        # (Area 9, Northshire), a real SUBZONE whose own AreaTable.dbc
        # `zone` field is 12 (Elwynn Forest) -- parse_area_zone_ids already
        # walks that chain, so this dict simulates its resolved output.
        self.assertEqual(_resolve_zone_id(9, {9: 12}), 12)

    def test_negative_quest_sort_id_never_resolves_even_if_its_absolute_value_is_a_real_zone(self) -> None:
        # A real id-space collision exists between AreaTable.dbc and
        # QuestSort.dbc (e.g. id 22 is real in both) -- a negative
        # QuestSortID must NEVER be looked up by absolute value.
        self.assertEqual(_resolve_zone_id(-22, {22: 22}), 0)

    def test_zero_quest_sort_id_resolves_to_zero(self) -> None:
        self.assertEqual(_resolve_zone_id(0, {}), 0)

    def test_positive_quest_sort_id_absent_from_area_zone_ids_resolves_to_zero(self) -> None:
        self.assertEqual(_resolve_zone_id(999999, {}), 0)


class TestExtractNullHandling(unittest.TestCase):
    """Test that extract() correctly handles SQL NULL values from LEFT JOIN.

    db_extract.run_query returns all columns as strings; mysql.exe -Nse
    renders SQL NULL as the literal string "NULL", not as Python None.
    The extract() function must handle this correctly to avoid ValueError
    when a quest_template row has no matching quest_template_addon row.
    """

    @patch("extract_quest_rewards.parse_area_zone_ids")
    @patch("extract_quest_rewards._load_quest_expansions")
    @patch("extract_quest_rewards.load_exclusion_rules")
    @patch("extract_quest_rewards.run_query")
    def test_null_prev_quest_id_does_not_crash(
        self, mock_run_query, mock_load_rules, mock_load_expansions, mock_parse_area_zone_ids
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_load_expansions.return_value = {}
        mock_parse_area_zone_ids.return_value = {}
        mock_run_query.return_value = [
            ("100", "Test Quest", "10", "NULL",
             "1234", "0", "0", "0",
             "0", "0", "0", "0", "0", "0",
             "0", "0", "0", "0")
        ]

        result = extract()

        self.assertEqual(len(result["locations"]), 1)
        self.assertIsNone(result["locations"][0]["trigger"]["prev_quest_id"])


class TestExtractFillerRewardHandling(unittest.TestCase):
    """M4.7.1.3: a quest with zero real reward-item columns is no longer
    skipped at extraction -- it gets a real location + item, tagged
    distinctly, using the project's designated real filler item (7073,
    "Broken Fang", reused from APTraps.cpp's ApplyGreyItemBagFill)."""

    @patch("extract_quest_rewards.parse_area_zone_ids")
    @patch("extract_quest_rewards._load_quest_expansions")
    @patch("extract_quest_rewards.load_exclusion_rules")
    @patch("extract_quest_rewards.run_query")
    def test_zero_reward_quest_produces_filler_tagged_location_and_item(
        self, mock_run_query, mock_load_rules, mock_load_expansions, mock_parse_area_zone_ids
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_load_expansions.return_value = {}
        mock_parse_area_zone_ids.return_value = {}
        mock_run_query.return_value = [
            ("200", "No Reward Quest", "15", "NULL",
             "0", "0", "0", "0",
             "0", "0", "0", "0", "0", "0",
             "0", "0", "0", "0")
        ]

        result = extract()

        self.assertEqual(len(result["locations"]), 1)
        self.assertEqual(len(result["items"]), 1)
        self.assertTrue(result["locations"][0]["trigger"]["is_filler_reward"])
        self.assertEqual(result["items"][0]["delivery"]["wow_item_entry"], 7073)
        self.assertEqual(result["locations"][0]["name"], "Quest: No Reward Quest Reward (#200)")
        self.assertEqual(result["locations"][0]["trigger"]["quest_id"], 200)

    @patch("extract_quest_rewards.parse_area_zone_ids")
    @patch("extract_quest_rewards._load_quest_expansions")
    @patch("extract_quest_rewards.load_exclusion_rules")
    @patch("extract_quest_rewards.run_query")
    def test_real_reward_quest_has_no_filler_tag(
        self, mock_run_query, mock_load_rules, mock_load_expansions, mock_parse_area_zone_ids
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_load_expansions.return_value = {}
        mock_parse_area_zone_ids.return_value = {}
        mock_run_query.return_value = [
            ("300", "Real Reward Quest", "20", "NULL",
             "5555", "0", "0", "0",
             "0", "0", "0", "0", "0", "0",
             "0", "0", "0", "0")
        ]

        result = extract()

        self.assertEqual(len(result["locations"]), 1)
        self.assertNotIn("is_filler_reward", result["locations"][0]["trigger"])
        self.assertEqual(result["items"][0]["delivery"]["wow_item_entry"], 5555)

    @patch("extract_quest_rewards.parse_area_zone_ids")
    @patch("extract_quest_rewards._load_quest_expansions")
    @patch("extract_quest_rewards.load_exclusion_rules")
    @patch("extract_quest_rewards.run_query")
    def test_zero_reward_quest_with_denylisted_title_is_still_excluded(
        self, mock_run_query, mock_load_rules, mock_load_expansions, mock_parse_area_zone_ids
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": [r"(?i)\bqa\b"]}
        mock_load_expansions.return_value = {}
        mock_parse_area_zone_ids.return_value = {}
        mock_run_query.return_value = [
            ("400", "QA Test Quest", "1", "NULL",
             "0", "0", "0", "0",
             "0", "0", "0", "0", "0", "0",
             "0", "0", "0", "0")
        ]

        result = extract()

        self.assertEqual(len(result["locations"]), 0)
        self.assertEqual(len(result["items"]), 0)


class TestExtractTagsAndAlwaysPresent(unittest.TestCase):
    @patch("extract_quest_rewards.parse_area_zone_ids")
    @patch("extract_quest_rewards._load_quest_expansions")
    @patch("extract_quest_rewards.load_exclusion_rules")
    @patch("extract_quest_rewards.run_query")
    def test_every_location_gets_a_real_tags_block(
        self, mock_run_query, mock_load_rules, mock_load_expansions, mock_parse_area_zone_ids
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_load_expansions.return_value = {}
        mock_parse_area_zone_ids.return_value = {}
        mock_run_query.return_value = [
            ("500", "Dungeon Test Quest", "20", "NULL",
             "1234", "0", "0", "0",
             "0", "0", "0", "0", "0", "0",
             "81", "0", "0", "0")
        ]
        result = extract()
        # QuestSortID is 0 (no resolvable real-world zone) -- `area` is
        # OMITTED from the tags block entirely (not an empty list), since
        # generate_content.py's _validate_tags_rows rejects an empty list
        # for any dimension present in an export_tags family's tags block.
        self.assertEqual(
            result["locations"][0]["tags"],
            {"type": ["dungeon_quest"], "expansion": ["vanilla"]},
        )

    @patch("extract_quest_rewards.parse_area_zone_ids")
    @patch("extract_quest_rewards._load_quest_expansions")
    @patch("extract_quest_rewards.load_exclusion_rules")
    @patch("extract_quest_rewards.run_query")
    def test_expansion_comes_from_load_quest_expansions(
        self, mock_run_query, mock_load_rules, mock_load_expansions, mock_parse_area_zone_ids
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_load_expansions.return_value = {600: "wotlk"}
        mock_parse_area_zone_ids.return_value = {}
        mock_run_query.return_value = [
            ("600", "Northrend Test Quest", "70", "NULL",
             "1234", "0", "0", "0",
             "0", "0", "0", "0", "0", "0",
             "0", "0", "0", "0")
        ]
        result = extract()
        self.assertEqual(result["locations"][0]["tags"]["expansion"], ["wotlk"])

    @patch("extract_quest_rewards.parse_area_zone_ids")
    @patch("extract_quest_rewards._load_quest_expansions")
    @patch("extract_quest_rewards.load_exclusion_rules")
    @patch("extract_quest_rewards.run_query")
    def test_migrated_starting_quest_id_gets_always_present_true(
        self, mock_run_query, mock_load_rules, mock_load_expansions, mock_parse_area_zone_ids
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_load_expansions.return_value = {}
        mock_parse_area_zone_ids.return_value = {}
        mock_run_query.return_value = [
            ("783", "A Threat Within", "1", "NULL",
             "0", "0", "0", "0",
             "0", "0", "0", "0", "0", "0",
             "0", "0", "0", "9")
        ]
        result = extract()
        self.assertTrue(result["locations"][0]["always_present"])

    @patch("extract_quest_rewards.parse_area_zone_ids")
    @patch("extract_quest_rewards._load_quest_expansions")
    @patch("extract_quest_rewards.load_exclusion_rules")
    @patch("extract_quest_rewards.run_query")
    def test_non_migrated_quest_has_no_always_present_key(
        self, mock_run_query, mock_load_rules, mock_load_expansions, mock_parse_area_zone_ids
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_load_expansions.return_value = {}
        mock_parse_area_zone_ids.return_value = {}
        mock_run_query.return_value = [
            ("999999", "Some Other Quest", "1", "NULL",
             "1", "0", "0", "0",
             "0", "0", "0", "0", "0", "0",
             "0", "0", "0", "0")
        ]
        result = extract()
        self.assertNotIn("always_present", result["locations"][0])


class TestExtractQuestRewardsZoneTagging(unittest.TestCase):
    """M4.11.3.1: replaces M4.11.1 Task 2's own assertions on
    trigger["zone_id"] (removed entirely by this migration) with the new
    tags["area"] canonical-name shape, needed by
    zone_leveler_content_data.py to build Barrens' clear_all_zone_quests
    quest set (quest_rewards_content_data.TAGS[name]["area"] containing
    "barrens")."""

    @patch("extract_quest_rewards.parse_area_zone_ids")
    @patch("extract_quest_rewards._load_quest_expansions")
    @patch("extract_quest_rewards.load_exclusion_rules")
    @patch("extract_quest_rewards.run_query")
    def test_extracted_rows_carry_a_real_area_tag(
        self, mock_run_query, mock_load_rules, mock_load_expansions, mock_parse_area_zone_ids
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_load_expansions.return_value = {}
        # Real-data shape (M4.11.1 Task 2 research): quest 850 "Kolkar
        # Leaders" has QuestSortID = 17, a real top-level AreaTable.dbc
        # zone id (The Barrens, zone_level_data.ZONE_ID_BARRENS), whose
        # real parse_area_names() slug is "barrens".
        mock_parse_area_zone_ids.return_value = {17: 17}
        mock_run_query.return_value = [
            ("850", "Kolkar Leaders", "11", "NULL",
             "1234", "0", "0", "0",
             "0", "0", "0", "0", "0", "0",
             "0", "0", "0", "17")
        ]

        result = extract()
        rows = result["locations"]

        self.assertNotIn("zone_id", rows[0]["trigger"])
        self.assertEqual(rows[0]["tags"]["area"], ["barrens"])

    @patch("extract_quest_rewards.parse_area_zone_ids")
    @patch("extract_quest_rewards._load_quest_expansions")
    @patch("extract_quest_rewards.load_exclusion_rules")
    @patch("extract_quest_rewards.run_query")
    def test_negative_quest_sort_id_produces_no_area_tag_not_a_guessed_zone(
        self, mock_run_query, mock_load_rules, mock_load_expansions, mock_parse_area_zone_ids
    ) -> None:
        # QuestSortID <= 0 means "not a real zone reference" (either a
        # QuestSort.dbc category id or genuinely no data) -- must OMIT the
        # `area` key entirely (never an empty list, which
        # generate_content.py's _validate_tags_rows would reject), and
        # never a guessed zone, even if area_zone_ids happens to contain a
        # matching absolute-value key (id-space collisions between
        # AreaTable.dbc and QuestSort.dbc are real).
        mock_load_rules.return_value = {"name_denylist": []}
        mock_load_expansions.return_value = {}
        mock_parse_area_zone_ids.return_value = {22: 22}
        mock_run_query.return_value = [
            ("700", "Category Sorted Quest", "10", "NULL",
             "1234", "0", "0", "0",
             "0", "0", "0", "0", "0", "0",
             "0", "0", "0", "-22")
        ]

        result = extract()

        self.assertNotIn("area", result["locations"][0]["tags"])


class TestExtractQuestRewardsAreaTags(unittest.TestCase):
    """M4.11.3.1: exercises the real extract() against the live DB (same
    convention TestLoadRecipeSpellIds/TestExtractTrainerSpellsAreaTags
    already use) -- tags["area"] is derived from a QuestSortID's
    parent-chain walk via parse_area_zone_ids + parse_area_names, not
    position data, so it isn't meaningfully mockable without re-deriving
    the DBC/DB data by hand."""

    def test_extracted_rows_carry_area_tag_not_zone_id(self) -> None:
        # Confirmed against the live DB (same M4.11.1 Task 2 research
        # TestExtractQuestRewardsZoneTagging's own mocked
        # test_extracted_rows_carry_a_real_area_tag cites): quest 850
        # "Kolkar Leaders" has QuestSortID = 17, a real top-level
        # AreaTable.dbc zone id (The Barrens), whose real parse_area_names()
        # slug is "barrens" -- asserting on this named quest (rather than an
        # arbitrary resolved[0]) means this test still fails if quest 850
        # itself stops resolving, not just if every quest stopped resolving.
        rows = extract()
        sample = next(loc for loc in rows["locations"] if loc["trigger"]["quest_id"] == 850)
        self.assertIsInstance(sample["tags"]["area"], list)
        self.assertIn("barrens", sample["tags"]["area"])
        self.assertNotIn("zone_id", sample["trigger"])

    def test_unresolvable_quest_sort_id_yields_no_area_tag(self) -> None:
        # Confirmed against the live DB (M4.11.3.1 Task 5 research): quest
        # 26 "A Lesson to Learn" has QuestSortID = -263 (a negative
        # QuestSort.dbc category reference, never a real zone), this
        # family's own existing "unresolvable, real zone unknown" sentinel
        # -- matching this project's "unknown = excluded, never guessed"
        # convention. Asserting on this named quest (rather than a generic
        # "some row is unresolved" check) means this test still fails if
        # quest 26 itself stops being unresolvable.
        rows = extract()
        sample = next(loc for loc in rows["locations"] if loc["trigger"]["quest_id"] == 26)
        self.assertNotIn("area", sample["tags"])


if __name__ == "__main__":
    unittest.main()
