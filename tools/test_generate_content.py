import pathlib
import tempfile
import textwrap
import unittest

from generate_content import load_family, emit_python, ValidationError


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


if __name__ == "__main__":
    unittest.main()
