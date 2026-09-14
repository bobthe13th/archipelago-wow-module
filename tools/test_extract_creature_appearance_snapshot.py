import unittest
from unittest.mock import patch

from extract_creature_appearance_snapshot import build_name_row, build_model_row, extract


class TestBuildNameRow(unittest.TestCase):
    def test_maps_entry_name_subname(self):
        row = ("148", "Grizzly Bear", "")
        result = build_name_row(row)
        self.assertEqual(result, {"entry": 148, "name": "Grizzly Bear", "subname": ""})

    def test_null_subname_becomes_empty_string(self):
        # MySQL NULL surfaces as the Python string "NULL" via run_query's
        # tab-separated CLI output (matching every other extractor's own
        # NULL-handling convention) -- normalize to "" for a plain string field.
        row = ("999", "Some Critter", "NULL")
        result = build_name_row(row)
        self.assertEqual(result["subname"], "")


class TestBuildModelRow(unittest.TestCase):
    def test_maps_creature_id_display_id_scale(self):
        row = ("148", "1234", "1.0")
        result = build_model_row(row)
        self.assertEqual(result, {"creature_id": 148, "CreatureDisplayID": 1234, "DisplayScale": 1.0})


class TestExtract(unittest.TestCase):
    def test_extract_shape_and_single_model_row_filter(self):
        name_rows = [("148", "Grizzly Bear", "")]

        # Two rows share CreatureID 200 (a real multi-model creature) --
        # extract() must exclude it entirely from creature_models, since a
        # composite (CreatureID, Idx) PK can't be safely snapshotted via
        # APWorldState's single-column machinery (see Global Constraints).
        model_rows_raw = [
            ("148", "1234", "1.0"),
            ("200", "5555", "1.0"),
            ("200", "5556", "1.2"),
        ]

        def fake_run_query(sql):
            if "creature_template_model" in sql:
                return model_rows_raw
            return name_rows

        with patch("extract_creature_appearance_snapshot.run_query", side_effect=fake_run_query):
            data = extract()

        self.assertEqual(len(data["creature_names"]), 1)
        self.assertEqual(data["creature_names"][0]["entry"], 148)

        model_creature_ids = {row["creature_id"] for row in data["creature_models"]}
        self.assertEqual(model_creature_ids, {148})  # 200 excluded -- two Idx rows
