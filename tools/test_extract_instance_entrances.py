import pathlib
import unittest

import extract_instance_entrances

_OUT_PATH = extract_instance_entrances._OUT_PATH


class TestExtractInstanceEntrances(unittest.TestCase):
    def test_wailing_caverns_reachable_from_barrens(self) -> None:
        result = extract_instance_entrances.extract()
        self.assertIn("barrens", result["wailing_caverns"])

    def test_razorfen_kraul_reachable_from_barrens(self) -> None:
        result = extract_instance_entrances.extract()
        self.assertIn("barrens", result["razorfen_kraul"])

    def test_razorfen_downs_reachable_from_barrens(self) -> None:
        result = extract_instance_entrances.extract()
        self.assertIn("barrens", result["razorfen_downs"])

    def test_exit_triggers_are_not_mistaken_for_entrances(self) -> None:
        # An instance's OWN interior exit trigger (e.g. id 226, sitting
        # inside Wailing Caverns itself at map=43, x=-172.181, y=138.98,
        # target_map=1) must never contribute a bogus "reachable from" entry.
        #
        # Verified this session: this specific example does NOT actually
        # exercise the origin-must-be-open-world exclusion in
        # extract_instance_entrances.extract() -- WorldMapArea.dbc has ZERO
        # rows for map 43 at all, so resolve_zone_ids_from_position(43, ...)
        # returns an empty frozenset whether or not that exclusion exists,
        # and separately, trigger 226's target_map=1 is open-world, so the
        # (independent) "target must be instanced" half of the rule would
        # exclude it anyway. So the strongest assertion this particular
        # example honestly supports is that wailing_caverns' own real
        # reachable-from set is unaffected by trigger 226's presence in the
        # areatrigger table (it still resolves correctly from the genuine
        # entrance, trigger 228). See
        # test_instance_to_instance_transitions_do_not_spuriously_appear
        # below for the real, load-bearing case for this exclusion.
        result = extract_instance_entrances.extract()
        self.assertIsInstance(result.get("wailing_caverns"), frozenset)
        self.assertIn("barrens", result["wailing_caverns"])

    def test_instance_to_instance_transitions_do_not_spuriously_appear(self) -> None:
        # THIS is where the origin-must-be-open-world exclusion is actually
        # load-bearing (verified this session against the real, full 276-row
        # areatrigger/areatrigger_teleport join): Blackwing Lair is reached
        # only via Blackrock Spire, itself an instance (map 229 ->
        # target_map 469, both InstanceType != 0). Without the exclusion,
        # this instance-to-instance row would slip past the "target must be
        # instanced" check (469 IS instanced) and spuriously add
        # "blackwing_lair" as a key in the result dict (with an empty
        # frozenset, since resolving map 229's own position doesn't land in
        # any real WorldMapArea box either) -- wrong either way, since
        # Blackwing Lair has no entrance directly reachable from open-world
        # terrain at all and should not appear as a key.
        result = extract_instance_entrances.extract()
        self.assertNotIn("blackwing_lair", result)


class TestInstanceEntranceDataFreshness(unittest.TestCase):
    def test_generated_file_matches_a_fresh_extraction(self) -> None:
        # Mirrors test_content_freshness.py's own real convention (re-run
        # extraction, compare against the checked-in generated file's own
        # text) -- but as a plain text comparison, not an import, since a
        # tools-side test process in this environment cannot import from
        # Archipelago/worlds/wow/ at all (confirmed this session: `from
        # worlds.wow import instance_entrance_data` raises
        # ModuleNotFoundError -- the two repos are separate checkouts with
        # no shared sys.path entry, the same thing M4.11.3.1 Task 1 already
        # found for its own cross-repo freshness check).
        fresh = extract_instance_entrances.extract()
        expected_text = extract_instance_entrances.render_module(fresh)
        actual_text = _OUT_PATH.read_text(encoding="utf-8")
        self.assertEqual(
            expected_text, actual_text,
            f"{_OUT_PATH} is stale relative to the real live DB/DBC data -- "
            f"regenerate with tools/extract_instance_entrances.py, don't hand-edit",
        )


if __name__ == "__main__":
    unittest.main()
