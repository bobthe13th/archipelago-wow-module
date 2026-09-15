import unittest
from unittest.mock import patch

from extract_creature_flavor_snapshot import build_equipment_row, build_addon_row, extract


class TestBuildEquipmentRow(unittest.TestCase):
    def test_maps_guid_id1_equipment_id(self):
        row = ("51235", "148", "2")
        result = build_equipment_row(row)
        self.assertEqual(result, {"guid": 51235, "id1": 148, "equipment_id": 2})


class TestBuildAddonRow(unittest.TestCase):
    def test_maps_every_field(self):
        row = ("148", "1234", "16777216", "1", "5", "26400 17252")
        result = build_addon_row(row)
        self.assertEqual(result, {
            "entry": 148, "mount": 1234, "bytes1": 16777216, "bytes2": 1, "emote": 5, "auras": "26400 17252",
        })

    def test_null_auras_becomes_empty_string(self):
        row = ("148", "0", "0", "0", "0", "NULL")
        result = build_addon_row(row)
        self.assertEqual(result["auras"], "")


class TestExtract(unittest.TestCase):
    def test_extract_shape(self):
        equipment_rows = [("51235", "148", "2")]
        addon_rows = [("148", "1234", "16777216", "1", "5", "")]

        def fake_run_query(sql):
            if "creature_template_addon" in sql:
                return addon_rows
            return equipment_rows

        with patch("extract_creature_flavor_snapshot.run_query", side_effect=fake_run_query):
            data = extract()

        self.assertEqual(len(data["creature_equipment"]), 1)
        self.assertEqual(len(data["creature_addons"]), 1)
        self.assertEqual(data["creature_addons"][0]["entry"], 148)
