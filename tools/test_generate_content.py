import pathlib
import tempfile
import textwrap
import unittest

from generate_content import load_family, emit_python, emit_cpp, ValidationError


class TestLoadFamily(unittest.TestCase):
    def _write(self, tmpdir: str, text: str) -> pathlib.Path:
        path = pathlib.Path(tmpdir) / "test.yaml"
        path.write_text(textwrap.dedent(text), encoding="utf-8")
        return path

    def test_missing_family_key_raises(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = self._write(tmp, """
                locations: []
                items: []
            """)
            with self.assertRaises(ValidationError):
                load_family(path)

    def test_duplicate_location_id_raises(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = self._write(tmp, """
                family: quests
                locations:
                  - name: A
                    location_id: 1
                    trigger: {kind: quest, quest_id: 100}
                  - name: B
                    location_id: 1
                    trigger: {kind: quest, quest_id: 101}
                items: []
            """)
            with self.assertRaises(ValidationError):
                load_family(path)

    def test_duplicate_name_across_locations_and_items_raises(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = self._write(tmp, """
                family: quests
                locations:
                  - name: Same Name
                    location_id: 1
                    trigger: {kind: quest, quest_id: 100}
                items:
                  - name: Same Name
                    item_id: 900000
                    count: 1
                    delivery: {kind: mail, wow_item_entry: 25}
            """)
            with self.assertRaises(ValidationError):
                load_family(path)

    def test_unlock_instance_with_no_matching_location_raises(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = self._write(tmp, """
                family: core_loop
                locations: []
                items:
                  - name: "Instance Unlock: Nowhere"
                    item_id: 900001
                    count: 1
                    delivery: {kind: realm_state, effect: unlock_instance, instance_key: nowhere}
            """)
            with self.assertRaises(ValidationError):
                load_family(path)

    def test_unrecognized_trigger_kind_raises(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = self._write(tmp, """
                family: core_loop
                locations:
                  - name: Reach Level 5
                    location_id: 710000
                    trigger: {kind: level_milestonee, level: 5}
                items: []
            """)
            with self.assertRaises(ValidationError):
                load_family(path)

    def test_valid_quests_family_loads_and_emits_python(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = self._write(tmp, """
                family: quests
                locations:
                  - name: A Threat Within
                    location_id: 700000
                    trigger: {kind: quest, quest_id: 783}
                items:
                  - name: Worn Shortsword
                    item_id: 800000
                    count: 1
                    delivery: {kind: mail, wow_item_entry: 25}
            """)
            data = load_family(path)
            self.assertEqual(data["family"], "quests")
            text = emit_python(data)
            self.assertIn('"A Threat Within": 700000', text)
            self.assertIn('"Worn Shortsword": 800000', text)
            self.assertIn("GENERATED FILE", text)


class TestEmitCpp(unittest.TestCase):
    def test_quests_family_emits_cpp_maps(self) -> None:
        data = {
            "family": "quests",
            "constants": {},
            "locations": [
                {"name": "A Threat Within", "location_id": 700000,
                 "trigger": {"kind": "quest", "quest_id": 783}},
            ],
            "items": [
                {"name": "Worn Shortsword", "item_id": 800000, "count": 1,
                 "delivery": {"kind": "mail", "wow_item_entry": 25}},
            ],
        }
        text = emit_cpp(data)
        self.assertIn("QuestIdToLocationId", text)
        self.assertIn("{ 783, 700000 }, // A Threat Within", text)
        self.assertIn("LocationIdToQuestId", text)
        self.assertIn("{ 700000, 783 }, // A Threat Within", text)
        self.assertIn("ApItemIdToWowItemEntry", text)
        self.assertIn('{ 800000, 25 }, // "Worn Shortsword"', text)

    def test_core_loop_family_emits_cpp_constants_and_maps(self) -> None:
        data = {
            "family": "core_loop",
            "constants": {"STARTING_LEVEL_CAP": 10, "LEVEL_CAP_STEP": 5, "SPRINT_GOAL_LEVEL": 60},
            "locations": [
                {"name": "Reach Level 5", "location_id": 710000,
                 "trigger": {"kind": "level_milestone", "level": 5}},
                {"name": "Clear Ragefire Chasm", "location_id": 720000,
                 "trigger": {"kind": "instance_clear", "instance_key": "ragefire_chasm",
                             "final_boss_entry": 11520}},
            ],
            "items": [
                {"name": "Progressive Level Cap", "item_id": 810000, "count": 10,
                 "delivery": {"kind": "realm_state", "effect": "raise_level_cap", "step": 5}},
                {"name": "Instance Unlock: Ragefire Chasm", "item_id": 810001, "count": 1,
                 "delivery": {"kind": "realm_state", "effect": "unlock_instance",
                              "instance_key": "ragefire_chasm"}},
            ],
        }
        text = emit_cpp(data)
        self.assertIn("AP_ITEM_PROGRESSIVE_LEVEL_CAP = 810000", text)
        self.assertIn("AP_ITEM_INSTANCE_UNLOCK_RAGEFIRE_CHASM = 810001", text)
        self.assertIn("STARTING_LEVEL_CAP = 10", text)
        self.assertIn('INSTANCE_KEY_RAGEFIRE_CHASM = "ragefire_chasm"', text)
        self.assertIn("{ INSTANCE_KEY_RAGEFIRE_CHASM, 11520 }", text)
        self.assertIn("{ 5, 710000 }", text)
        self.assertIn('{ INSTANCE_KEY_RAGEFIRE_CHASM, 720000 }', text)


if __name__ == "__main__":
    unittest.main()
