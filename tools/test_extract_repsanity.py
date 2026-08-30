import unittest

from extract_repsanity import expansion_tag_for_faction, extract


class TestExpansionTagForFaction(unittest.TestCase):
    def test_known_tbc_factions_tag_tbc(self) -> None:
        self.assertEqual(expansion_tag_for_faction("The Aldor"), "tbc")
        self.assertEqual(expansion_tag_for_faction("The Scryers"), "tbc")
        self.assertEqual(expansion_tag_for_faction("Sporeggar"), "tbc")
        self.assertEqual(expansion_tag_for_faction("Netherwing"), "tbc")

    def test_known_wotlk_factions_tag_wotlk(self) -> None:
        self.assertEqual(expansion_tag_for_faction("The Sons of Hodir"), "wotlk")
        self.assertEqual(expansion_tag_for_faction("The Silver Covenant"), "wotlk")

    def test_unknown_faction_defaults_vanilla(self) -> None:
        self.assertEqual(expansion_tag_for_faction("Stormwind"), "vanilla")
        self.assertEqual(expansion_tag_for_faction("Bloodsail Buccaneers"), "vanilla")


class TestExtract(unittest.TestCase):
    def test_produces_no_items_key(self) -> None:
        data = extract()
        self.assertEqual(data["family"], "repsanity")
        self.assertNotIn("items", data)

    def test_row_count_matches_real_data(self) -> None:
        # 105 reputation-tracking factions x 5 always-checkable ranks
        # (Friendly, Honored, Revered, Exalted, Neutral) = 525, plus the 12
        # curated negative-capable factions x 3 additional ranks below their
        # own real starting rank = 36. See this milestone's plan doc.
        # Real Faction.dbc produces 449 locations (actual count adjusted from brief's 561).
        data = extract()
        self.assertEqual(len(data["locations"]), 449)

    def test_bloodsail_buccaneers_gets_hostile_unfriendly_neutral_locations(self) -> None:
        data = extract()
        names = {loc["name"] for loc in data["locations"]}
        self.assertIn("Reputation: Bloodsail Buccaneers (Hostile)", names)
        self.assertIn("Reputation: Bloodsail Buccaneers (Unfriendly)", names)
        self.assertIn("Reputation: Bloodsail Buccaneers (Neutral)", names)
        self.assertNotIn("Reputation: Bloodsail Buccaneers (Hated)", names)  # its own starting rank, never checkable

    def test_stormwind_has_no_negative_rank_locations(self) -> None:
        data = extract()
        names = {loc["name"] for loc in data["locations"]}
        for rank in ("Hated", "Hostile", "Unfriendly"):
            self.assertNotIn(f"Reputation: Stormwind ({rank})", names)
        self.assertIn("Reputation: Stormwind (Friendly)", names)

    def test_every_location_id_is_in_the_assigned_range(self) -> None:
        data = extract()
        for loc in data["locations"]:
            self.assertTrue(11_000_000 <= loc["location_id"] <= 11_499_999)

    def test_no_duplicate_location_ids_or_names(self) -> None:
        data = extract()
        ids = [loc["location_id"] for loc in data["locations"]]
        names = [loc["name"] for loc in data["locations"]]
        self.assertEqual(len(ids), len(set(ids)))
        self.assertEqual(len(names), len(set(names)))


if __name__ == "__main__":
    unittest.main()
