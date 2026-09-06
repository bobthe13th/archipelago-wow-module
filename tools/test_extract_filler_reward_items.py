import unittest
from unittest.mock import patch

from extract_filler_reward_items import extract, _query_category, _CATEGORY_QUERIES, _GAMEOBJECT_TYPE_CHEST


class TestQueryCategory(unittest.TestCase):
    @patch("extract_filler_reward_items.run_query")
    def test_tags_every_row_with_the_given_category(self, mock_run_query) -> None:
        mock_run_query.return_value = [("117", "Tough Jerky"), ("118", "Minor Healing Potion")]
        rules = {"name_denylist": []}
        rows = _query_category("consumable", "SELECT entry, name FROM item_template", rules)
        self.assertEqual(len(rows), 2)
        self.assertEqual(rows[0]["category"], "consumable")
        self.assertEqual(rows[0]["entry"], 117)
        self.assertEqual(rows[0]["name"], "Tough Jerky")

    @patch("extract_filler_reward_items.run_query")
    def test_denylisted_name_is_excluded(self, mock_run_query) -> None:
        mock_run_query.return_value = [("999", "Deprecated Test Item")]
        rules = {"name_denylist": [r"(?i)\bdeprecated\b"]}
        rows = _query_category("bag", "SELECT entry, name FROM item_template", rules)
        self.assertEqual(len(rows), 0)


class TestExtractElevenSimpleCategories(unittest.TestCase):
    @patch("extract_filler_reward_items._extract_mount_or_pet_category")
    @patch("extract_filler_reward_items.load_exclusion_rules")
    @patch("extract_filler_reward_items.run_query")
    def test_extracts_one_item_per_row_across_the_eleven_simple_categories(
        self, mock_run_query, mock_load_rules, mock_extract_mount_or_pet
    ) -> None:
        # mount/pet are cross-family-dependent and already covered by their
        # own dedicated test class below -- stub them out here so this test
        # stays scoped to the 11 simple, single-query categories its name
        # promises, and so mock_run_query's fixed 11-entry side_effect list
        # below (one per simple category) isn't consumed by the 2 extra
        # real run_query calls _extract_mount_or_pet_category makes.
        mock_extract_mount_or_pet.return_value = []
        mock_load_rules.return_value = {"name_denylist": []}
        # 11 categories queried in this task (10 pre-existing + container_loot,
        # in _CATEGORY_QUERIES dict order); one fixture row each.
        mock_run_query.side_effect = [
            [("40752", "Emblem of Heroism")],       # badge_currency
            [("117", "Tough Jerky")],               # consumable
            [("804", "Large Blue Sack")],            # bag
            [("38682", "Armor Vellum")],              # gear_enhancement (vellum)
            [("774", "Malachite")],                   # gear_enhancement (gem)
            [("25", "Worn Shortsword")],               # equipment
            [("5335", "A Sack of Coins")],             # openable
            [("18597", "Orcish Orphan Whistle")],      # seasonal
            [("5976", "Guild Tabard")],                # tabard
            [("2895", "Creeping Pain")],                # reagent
            [("2589", "Linen Cloth")],                  # container_loot
        ]
        result = extract()
        self.assertEqual(result["family"], "filler_reward_items")
        self.assertEqual(result["locations"], [])
        names = {item["name"] for item in result["items"]}
        self.assertIn("Filler: Emblem of Heroism (#40752)", names)
        self.assertIn("Filler: Linen Cloth (#2589)", names)
        categories = {item["tags"]["category"][0] for item in result["items"]}
        self.assertIn("badge_currency", categories)
        self.assertIn("container_loot", categories)

    def test_toy_category_is_hardcoded_not_queried(self) -> None:
        # The 6 real toy candidates are curated directly, not via a broad
        # query (no systematic DB column identifies "toy" items in this
        # schema) -- confirm the hardcoded list exists and has the right shape.
        from extract_filler_reward_items import _TOY_ENTRIES
        self.assertEqual(len(_TOY_ENTRIES), 6)
        self.assertEqual(_TOY_ENTRIES[33079], "Murloc Costume")


class TestContainerLootQuery(unittest.TestCase):
    def test_container_loot_query_joins_chest_gameobjects_through_their_loot_table(self) -> None:
        # Real schema confirmed live during planning: GAMEOBJECT_TYPE_CHEST's
        # (type=3) lootId lives in gameobject_template.Data1 (field index 1 of
        # the `chest` union member, GameObjectData.h) -- NOT Data0 (lockId).
        # This test guards against silently reverting to the wrong Data column.
        sql = _CATEGORY_QUERIES["container_loot"]
        self.assertIn("gt.type = {}".format(_GAMEOBJECT_TYPE_CHEST), sql)
        self.assertIn("gt.Data1", sql)
        self.assertIn("gameobject_loot_template", sql)
        self.assertIn("QuestRequired = 0", sql)
        self.assertIn("Reference = 0", sql)


class TestMountPetExcludeCollections(unittest.TestCase):
    @patch("extract_filler_reward_items._load_collections_claimed_spell_ids")
    @patch("extract_filler_reward_items.run_query")
    def test_excludes_a_spell_id_already_claimed_by_collections(
        self, mock_run_query, mock_load_claimed
    ) -> None:
        from extract_filler_reward_items import _extract_mount_or_pet_category
        mock_load_claimed.return_value = frozenset({16084})
        mock_run_query.return_value = [
            ("8586", "Whistle of the Mottled Red Raptor", "0", "0", "16084", "6", "0", "0", "0", "0", "0", "0"),
            ("12303", "Reins of the Nightsaber", "0", "0", "16055", "6", "0", "0", "0", "0", "0", "0"),
        ]
        rows = _extract_mount_or_pet_category(subclass=5, category="mount")
        self.assertEqual(len(rows), 1)
        self.assertEqual(rows[0]["entry"], 12303)


if __name__ == "__main__":
    unittest.main()
