import importlib
import pathlib
import sys
import tempfile
import unittest

from extract_mobs_snapshot import build_creature_template_row, build_creature_spawn_row, extract, compile_to_python


class TestBuildCreatureTemplateRow(unittest.TestCase):
    def test_maps_every_real_column(self):
        row = ("148", "3", "4", "0", "", "", "1.0", "1.0", "1.0", "1.0", "2000", "1.0", "1.0", "1.0", "1.0", "20.0")
        result = build_creature_template_row(
            row, zone_tags=frozenset({"elwynn_forest"}), home_maps=frozenset({0})
        )
        self.assertEqual(result["entry"], 148)
        self.assertEqual(result["minlevel"], 3)
        self.assertEqual(result["maxlevel"], 4)
        self.assertEqual(result["rank"], 0)
        self.assertEqual(result["ai_name"], "")
        self.assertEqual(result["script_name"], "")
        self.assertEqual(result["health_modifier"], 1.0)
        self.assertEqual(result["mana_modifier"], 1.0)
        self.assertEqual(result["damage_modifier"], 1.0)
        self.assertEqual(result["armor_modifier"], 1.0)
        self.assertEqual(result["base_attack_time"], 2000)
        self.assertEqual(result["speed_walk"], 1.0)
        self.assertEqual(result["speed_run"], 1.0)
        self.assertEqual(result["speed_swim"], 1.0)
        self.assertEqual(result["speed_flight"], 1.0)
        self.assertEqual(result["detection_range"], 20.0)
        self.assertEqual(result["zone_tags"], ["elwynn_forest"])
        self.assertEqual(result["home_maps"], [0])

    def test_empty_zone_tags_and_home_maps_serialize_as_empty_lists(self):
        row = ("999", "1", "1", "0", "", "", "1.0", "1.0", "1.0", "1.0", "2000", "1.0", "1.0", "1.0", "1.0", "20.0")
        result = build_creature_template_row(row, zone_tags=frozenset(), home_maps=frozenset())
        self.assertEqual(result["zone_tags"], [])
        self.assertEqual(result["home_maps"], [])

    def test_ai_name_and_script_name_preserved_non_empty(self):
        row = ("100", "80", "80", "3", "SmartAI", "boss_ragnaros", "2.0", "1.5", "1.2", "1.1", "1800", "1.0", "1.14286", "1.0", "1.0", "40.0")
        result = build_creature_template_row(row, zone_tags=frozenset(), home_maps=frozenset({409}))
        self.assertEqual(result["ai_name"], "SmartAI")
        self.assertEqual(result["script_name"], "boss_ragnaros")
        self.assertEqual(result["home_maps"], [409])


class TestBuildCreatureSpawnRow(unittest.TestCase):
    def test_maps_guid_template_and_map(self):
        row = ("51235", "148", "0")
        result = build_creature_spawn_row(row)
        self.assertEqual(result, {"guid": 51235, "template_entry": 148, "map": 0})


class TestExtract(unittest.TestCase):
    def test_extract_shape(self):
        from unittest.mock import patch

        template_rows = [
            ("148", "3", "4", "0", "", "", "1.0", "1.0", "1.0", "1.0", "2000", "1.0", "1.0", "1.0", "1.0", "20.0"),
        ]
        spawn_rows = [("51235", "148", "0")]
        multispawn_rows = []

        def fake_run_query(sql):
            # Dispatch order matters: extract() issues FOUR distinct
            # queries that all touch "creature", not three -- the primary
            # spawn-positions query (SELECT id, map, position_x, position_y
            # FROM creature, used only for zone_tags resolution) and the
            # real spawn-rows query (SELECT guid, id, map FROM creature
            # ORDER BY guid) BOTH match a bare "FROM creature" substring
            # check, so "position_x" must be checked first to disambiguate
            # them -- returning spawn_rows (5-element tuples) for the
            # 4-element positions query would raise ValueError on unpack.
            if "FROM creature_template" in sql:
                return template_rows
            if "FROM creature_multispawn" in sql:
                return multispawn_rows
            if "position_x" in sql:
                return []  # primary spawn positions -- not needed for this fixture's assertions
            if "FROM creature" in sql:
                return spawn_rows
            raise AssertionError(f"unexpected query: {sql}")

        with patch("extract_mobs_snapshot.run_query", side_effect=fake_run_query), \
             patch("extract_mobs_snapshot.parse_world_map_areas", return_value=[]), \
             patch("extract_mobs_snapshot.parse_area_zone_ids", return_value={}), \
             patch("extract_mobs_snapshot.parse_area_names", return_value={}):
            data = extract()

        self.assertIn("creature_templates", data)
        self.assertIn("creature_spawns", data)
        self.assertEqual(len(data["creature_templates"]), 1)
        self.assertEqual(data["creature_templates"][0]["entry"], 148)
        self.assertEqual(len(data["creature_spawns"]), 1)
        self.assertEqual(data["creature_spawns"][0]["guid"], 51235)


class TestCompileToPython(unittest.TestCase):
    def test_writes_creature_templates_keyed_by_entry(self):
        data = {
            "creature_templates": [
                {
                    "entry": 148, "minlevel": 3, "maxlevel": 4, "rank": 0,
                    "ai_name": "", "script_name": "", "health_modifier": 1.0,
                    "mana_modifier": 1.0, "damage_modifier": 1.0, "armor_modifier": 1.0,
                    "base_attack_time": 2000, "speed_walk": 1.0, "speed_run": 1.0,
                    "speed_swim": 1.0, "speed_flight": 1.0, "detection_range": 20.0,
                    "zone_tags": ["elwynn_forest"], "home_maps": [0],
                },
            ],
            "creature_spawns": [
                {"guid": 51235, "template_entry": 148, "map": 0},
            ],
        }
        with tempfile.TemporaryDirectory() as tmp_dir:
            py_out = pathlib.Path(tmp_dir) / "mobs_snapshot_content_data.py"
            compile_to_python(data, py_out)

            spec = importlib.util.spec_from_file_location("mobs_snapshot_content_data_test", py_out)
            module = importlib.util.module_from_spec(spec)
            spec.loader.exec_module(module)

            self.assertIn(148, module.CREATURE_TEMPLATES)
            self.assertEqual(module.CREATURE_TEMPLATES[148]["minlevel"], 3)
            self.assertEqual(module.CREATURE_TEMPLATES[148]["zone_tags"], ["elwynn_forest"])
            self.assertIn(51235, module.CREATURE_SPAWNS)
            self.assertEqual(module.CREATURE_SPAWNS[51235]["template_entry"], 148)

    def test_empty_input_produces_empty_dicts(self):
        data = {"creature_templates": [], "creature_spawns": []}
        with tempfile.TemporaryDirectory() as tmp_dir:
            py_out = pathlib.Path(tmp_dir) / "mobs_snapshot_content_data.py"
            compile_to_python(data, py_out)

            spec = importlib.util.spec_from_file_location("mobs_snapshot_content_data_empty_test", py_out)
            module = importlib.util.module_from_spec(spec)
            spec.loader.exec_module(module)

            self.assertEqual(module.CREATURE_TEMPLATES, {})
            self.assertEqual(module.CREATURE_SPAWNS, {})
