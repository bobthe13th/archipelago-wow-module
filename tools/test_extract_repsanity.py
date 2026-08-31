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
        # Final whole-branch review fix (I1/M1, M4.10.4): the real 105-row
        # Faction.dbc reputation-pane roster includes 27 unobtainable junk
        # rows (10 profession-specialization pseudo-factions, 8 reputation-
        # pane headers/non-earnable "Forces" parents, 4 internal
        # rep-conversion rows, 3 Test Factions, 2 misc), leaving 78 real,
        # player-facing factions x 4 always-checkable ranks (Friendly,
        # Honored, Revered, Exalted) = 312, plus the 12 curated
        # negative-capable factions x however many ranks lie strictly above
        # their own real starting rank. The Aldor/The Scryers (932/934) also
        # moved from a wrongly-forced starting rank of Hated (0) to their
        # real Hostile (1) (M1 fix), each removing one more location.
        # Verified live: 449 (stale, pre-fix) -> 339 (108 junk-location rows
        # removed + 2 removed by the Aldor/Scryers rank fix).
        data = extract()
        self.assertEqual(len(data["locations"]), 339)

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
