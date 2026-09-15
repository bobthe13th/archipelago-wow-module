import unittest

from parse_faction_dbc import (
    NEGATIVE_CAPABLE_FACTION_IDS,
    RANK_NAMES,
    load_reputation_factions,
    reputation_to_rank,
)


class TestReputationToRank(unittest.TestCase):
    # Mirrors src/server/game/Reputation/ReputationMgr.cpp's real
    # PointsInRank/Reputation_Cap/Reputation_Bottom/ReputationToRank exactly.
    def test_zero_standing_is_neutral(self) -> None:
        self.assertEqual(reputation_to_rank(0), 3)  # REP_NEUTRAL

    def test_bottom_standing_is_hated(self) -> None:
        self.assertEqual(reputation_to_rank(-42000), 0)  # REP_HATED

    def test_cap_standing_is_exalted(self) -> None:
        self.assertEqual(reputation_to_rank(42999), 7)  # REP_EXALTED

    def test_bloodsail_buccaneers_starting_value_is_hated(self) -> None:
        self.assertEqual(reputation_to_rank(-6500), 0)  # REP_HATED

    def test_sporeggar_starting_value_is_unfriendly(self) -> None:
        self.assertEqual(reputation_to_rank(-2500), 2)  # REP_UNFRIENDLY


class TestLoadReputationFactions(unittest.TestCase):
    def test_loads_real_faction_dbc_and_finds_known_factions(self) -> None:
        factions = load_reputation_factions()
        by_id = {f.faction_id: f for f in factions}
        # Real, well-known reputation-tracking factions -- confirmed live
        # against this checkout's actual Faction.dbc during planning.
        self.assertIn(87, by_id)
        self.assertEqual(by_id[87].name, "Bloodsail Buccaneers")
        self.assertEqual(by_id[87].starting_rank, 0)  # Hated
        self.assertIn(72, by_id)
        self.assertEqual(by_id[72].name, "Stormwind")
        self.assertEqual(by_id[72].starting_rank, 3)  # Neutral (default)

    def test_reputation_capable_count_matches_real_data(self) -> None:
        # Real count confirmed live during planning: 105 of Faction.dbc's
        # 401 total rows have reputationListID >= 0 (CanHaveReputation()).
        # If this checkout's Faction.dbc changes, this is the live data
        # changing -- investigate before assuming the new number is fine,
        # same discipline every other M4.10 family's plan established.
        factions = load_reputation_factions()
        self.assertEqual(len(factions), 105)

    def test_curated_negative_capable_ids_are_all_real_reputation_factions(self) -> None:
        factions = load_reputation_factions()
        real_ids = {f.faction_id for f in factions}
        self.assertTrue(NEGATIVE_CAPABLE_FACTION_IDS.issubset(real_ids))
        self.assertEqual(len(NEGATIVE_CAPABLE_FACTION_IDS), 12)

    def test_rank_names_are_in_ascending_order(self) -> None:
        self.assertEqual(
            RANK_NAMES,
            ["Hated", "Hostile", "Unfriendly", "Neutral", "Friendly", "Honored", "Revered", "Exalted"],
        )


if __name__ == "__main__":
    unittest.main()
