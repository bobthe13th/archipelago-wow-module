import unittest

from extract_zone_names import CURATED_ZONE_IDS, load_zone_names


class TestExtractZoneNames(unittest.TestCase):
    def test_curated_zone_ids_resolve_to_the_expected_real_names(self) -> None:
        names = load_zone_names()
        self.assertEqual(names[CURATED_ZONE_IDS["shattrath_city"]], "Shattrath City")
        self.assertEqual(names[CURATED_ZONE_IDS["isle_of_quel_danas"]], "Isle of Quel'Danas")
        self.assertEqual(names[CURATED_ZONE_IDS["dalaran"]], "Dalaran")

    def test_curated_zone_ids_are_all_real_top_level_zones(self) -> None:
        names = load_zone_names()
        for zone_id in CURATED_ZONE_IDS.values():
            self.assertIn(zone_id, names)

    def test_real_top_level_zone_count_matches_this_checkout(self) -> None:
        # Real count confirmed live during planning: 220 rows in AreaTable.dbc
        # have zone == 0 (i.e., are top-level zones, not sub-areas). If this
        # checkout's AreaTable.dbc changes, investigate before assuming a
        # different count is fine -- same discipline every other M4.10/M4.11
        # DBC-sourced family's plan already established.
        names = load_zone_names()
        self.assertEqual(len(names), 220)


if __name__ == "__main__":
    unittest.main()
