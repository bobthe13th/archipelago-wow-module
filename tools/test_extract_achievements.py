import unittest
from unittest.mock import patch

from extract_achievements import extract, _dungeons_or_raids, WORLD_EXPLORER_ACHIEVEMENT_ID


class TestDungeonsOrRaids(unittest.TestCase):
    def test_raid_in_leaf_name_is_raids(self) -> None:
        self.assertEqual(_dungeons_or_raids("Lich King 10-Player Raid"), "raids")
        self.assertEqual(_dungeons_or_raids("Secrets of Ulduar 25-Player Raid"), "raids")

    def test_no_raid_in_leaf_name_is_dungeons(self) -> None:
        self.assertEqual(_dungeons_or_raids("Lich King Heroic"), "dungeons")
        self.assertEqual(_dungeons_or_raids("Classic"), "dungeons")
        self.assertEqual(_dungeons_or_raids(""), "dungeons")


class TestExtract(unittest.TestCase):
    @patch("extract_achievements._load_extremely_hard_ids")
    @patch("extract_achievements.parse_achievement_categories")
    @patch("extract_achievements.parse_achievements")
    def test_counter_flagged_achievement_is_excluded(self, mock_achievements, mock_categories, mock_hard) -> None:
        mock_hard.return_value = set()
        mock_categories.return_value = {97: (97, "Exploration"), 1: (1, "Statistics")}
        mock_achievements.return_value = [
            {"id": WORLD_EXPLORER_ACHIEVEMENT_ID, "name": "World Explorer", "category_id": 97, "flags": 0},
            {"id": 999, "name": "Total Gold Looted", "category_id": 1, "flags": 0x1},
        ]
        result = extract()
        ids = {loc["trigger"]["achievement_id"] for loc in result["locations"]}
        self.assertNotIn(999, ids)
        self.assertIn(WORLD_EXPLORER_ACHIEVEMENT_ID, ids)

    @patch("extract_achievements._load_extremely_hard_ids")
    @patch("extract_achievements.parse_achievement_categories")
    @patch("extract_achievements.parse_achievements")
    def test_feats_of_strength_is_excluded(self, mock_achievements, mock_categories, mock_hard) -> None:
        mock_hard.return_value = set()
        mock_categories.return_value = {97: (97, "Exploration"), 81: (81, "Feats of Strength")}
        mock_achievements.return_value = [
            {"id": WORLD_EXPLORER_ACHIEVEMENT_ID, "name": "World Explorer", "category_id": 97, "flags": 0},
            {"id": 457, "name": "Realm First! Level 80", "category_id": 81, "flags": 256},
        ]
        result = extract()
        ids = {loc["trigger"]["achievement_id"] for loc in result["locations"]}
        self.assertNotIn(457, ids)

    @patch("extract_achievements._load_extremely_hard_ids")
    @patch("extract_achievements.parse_achievement_categories")
    @patch("extract_achievements.parse_achievements")
    def test_subset_tag_from_category_root(self, mock_achievements, mock_categories, mock_hard) -> None:
        mock_hard.return_value = set()
        mock_categories.return_value = {
            97: (97, "Exploration"),
            14961: (168, "Secrets of Ulduar 10-Player Raid"),
            14806: (168, "Lich King Dungeon"),
            169: (169, "Professions"),
        }
        mock_achievements.return_value = [
            {"id": WORLD_EXPLORER_ACHIEVEMENT_ID, "name": "World Explorer", "category_id": 97, "flags": 0},
            {"id": 100, "name": "Ulduar Raid Thing", "category_id": 14961, "flags": 0},
            {"id": 101, "name": "Dungeon Thing", "category_id": 14806, "flags": 0},
            {"id": 102, "name": "Profession Thing", "category_id": 169, "flags": 0},
        ]
        result = extract()
        by_id = {loc["trigger"]["achievement_id"]: loc for loc in result["locations"]}
        self.assertEqual(by_id[WORLD_EXPLORER_ACHIEVEMENT_ID]["trigger"]["subset"], "explorer")
        self.assertEqual(by_id[100]["trigger"]["subset"], "raids")
        self.assertEqual(by_id[101]["trigger"]["subset"], "dungeons")
        self.assertEqual(by_id[102]["trigger"]["subset"], "professions")

    @patch("extract_achievements._load_extremely_hard_ids")
    @patch("extract_achievements.parse_achievement_categories")
    @patch("extract_achievements.parse_achievements")
    def test_uncategorized_root_gets_no_subset_key(self, mock_achievements, mock_categories, mock_hard) -> None:
        mock_hard.return_value = set()
        mock_categories.return_value = {97: (97, "Exploration"), 96: (96, "Quests")}
        mock_achievements.return_value = [
            {"id": WORLD_EXPLORER_ACHIEVEMENT_ID, "name": "World Explorer", "category_id": 97, "flags": 0},
            {"id": 200, "name": "Some Quest Thing", "category_id": 96, "flags": 0},
        ]
        result = extract()
        by_id = {loc["trigger"]["achievement_id"]: loc for loc in result["locations"]}
        self.assertNotIn("subset", by_id[200]["trigger"])

    @patch("extract_achievements._load_extremely_hard_ids")
    @patch("extract_achievements.parse_achievement_categories")
    @patch("extract_achievements.parse_achievements")
    def test_extremely_hard_id_gets_the_trigger_flag(self, mock_achievements, mock_categories, mock_hard) -> None:
        mock_hard.return_value = {2091}
        mock_categories.return_value = {97: (97, "Exploration"), 165: (95, "Arena")}
        mock_achievements.return_value = [
            {"id": WORLD_EXPLORER_ACHIEVEMENT_ID, "name": "World Explorer", "category_id": 97, "flags": 0},
            {"id": 2091, "name": "Gladiator", "category_id": 165, "flags": 0},
        ]
        result = extract()
        by_id = {loc["trigger"]["achievement_id"]: loc for loc in result["locations"]}
        self.assertTrue(by_id[2091]["trigger"]["extremely_hard"])
        self.assertNotIn("extremely_hard", by_id[WORLD_EXPLORER_ACHIEVEMENT_ID]["trigger"])

    @patch("extract_achievements._load_extremely_hard_ids")
    @patch("extract_achievements.parse_achievement_categories")
    @patch("extract_achievements.parse_achievements")
    def test_location_and_item_ids_use_the_real_id_ranges(self, mock_achievements, mock_categories, mock_hard) -> None:
        mock_hard.return_value = set()
        mock_categories.return_value = {97: (97, "Exploration")}
        mock_achievements.return_value = [
            {"id": WORLD_EXPLORER_ACHIEVEMENT_ID, "name": "World Explorer", "category_id": 97, "flags": 0},
        ]
        result = extract()
        loc = result["locations"][0]
        item = result["items"][0]
        self.assertEqual(loc["location_id"], 3_600_000 + WORLD_EXPLORER_ACHIEVEMENT_ID)
        self.assertEqual(item["item_id"], 3_800_000 + WORLD_EXPLORER_ACHIEVEMENT_ID)
        self.assertEqual(loc["name"], "Achievement: World Explorer (#46)")
        self.assertEqual(item["name"], "Achievement Complete: World Explorer (#46)")
        self.assertEqual(item["delivery"], {"kind": "realm_state", "effect": "record_achievement", "achievement_id": 46})

    @patch("extract_achievements._load_extremely_hard_ids")
    @patch("extract_achievements.parse_achievement_categories")
    @patch("extract_achievements.parse_achievements")
    def test_missing_world_explorer_raises(self, mock_achievements, mock_categories, mock_hard) -> None:
        mock_hard.return_value = set()
        mock_categories.return_value = {81: (81, "Feats of Strength")}
        mock_achievements.return_value = [
            {"id": WORLD_EXPLORER_ACHIEVEMENT_ID, "name": "World Explorer", "category_id": 81, "flags": 0},
        ]
        with self.assertRaises(RuntimeError):
            extract()


if __name__ == "__main__":
    unittest.main()
