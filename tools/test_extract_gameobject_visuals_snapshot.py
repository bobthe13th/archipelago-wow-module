import unittest
from unittest.mock import patch

from extract_gameobject_visuals_snapshot import build_gameobject_row, extract, _SAFE_TYPE_GENERIC


class TestBuildGameobjectRow(unittest.TestCase):
    def test_maps_entry_display_id_size(self):
        row = ("500", "1234", "1.5")
        result = build_gameobject_row(row)
        self.assertEqual(result, {"entry": 500, "displayId": 1234, "size": 1.5})


class TestExtract(unittest.TestCase):
    def test_query_filters_to_safe_generic_type_only(self):
        def fake_run_query(sql):
            self.assertIn(f"`type` = {_SAFE_TYPE_GENERIC}", sql)
            self.assertIn("gameobject_questitem", sql)
            self.assertIn("gameobject_queststarter", sql)
            self.assertIn("gameobject_questender", sql)
            self.assertIn("AIName", sql)
            self.assertIn("ScriptName", sql)
            return [("500", "1234", "1.5")]

        with patch("extract_gameobject_visuals_snapshot.run_query", side_effect=fake_run_query):
            data = extract()

        self.assertEqual(len(data["gameobjects"]), 1)
        self.assertEqual(data["gameobjects"][0]["entry"], 500)

    def test_generic_type_constant_matches_the_real_enum_value(self):
        # GAMEOBJECT_TYPE_GENERIC = 5, verified against
        # azerothcore-wotlk/src/server/shared/SharedDefines.h -- a
        # mismatch here would silently widen or narrow the candidate pool
        # to the wrong gameobject type entirely.
        self.assertEqual(_SAFE_TYPE_GENERIC, 5)
