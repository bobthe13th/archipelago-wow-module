import importlib
import pathlib
import tempfile
import unittest
from unittest.mock import patch

from extract_mobs_snapshot import (
    build_creature_template_row, build_creature_spawn_row, extract, compile_to_python,
    _load_excluded_entries, _load_excluded_guids,
)


class TestBuildCreatureTemplateRow(unittest.TestCase):
    def test_maps_every_real_column(self):
        row = ("148", "3", "4", "0", "1", "", "", "1.0", "1.0", "1.0", "1.0", "2000", "1.0", "1.0", "1.0", "1.0", "20.0")
        result = build_creature_template_row(
            row, zone_tags=frozenset({"elwynn_forest"}), home_maps=frozenset({0}), excluded_entries=frozenset(),
        )
        self.assertEqual(result["entry"], 148)
        self.assertEqual(result["minlevel"], 3)
        self.assertEqual(result["maxlevel"], 4)
        self.assertEqual(result["rank"], 0)
        self.assertEqual(result["type"], 1)
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
        self.assertEqual(result["shuffle_excluded"], False)

    def test_empty_zone_tags_and_home_maps_serialize_as_empty_lists(self):
        row = ("999", "1", "1", "0", "1", "", "", "1.0", "1.0", "1.0", "1.0", "2000", "1.0", "1.0", "1.0", "1.0", "20.0")
        result = build_creature_template_row(
            row, zone_tags=frozenset(), home_maps=frozenset(), excluded_entries=frozenset(),
        )
        self.assertEqual(result["zone_tags"], [])
        self.assertEqual(result["home_maps"], [])

    def test_ai_name_and_script_name_preserved_non_empty(self):
        row = ("100", "80", "80", "3", "7", "SmartAI", "boss_ragnaros", "2.0", "1.5", "1.2", "1.1", "1800", "1.0", "1.14286", "1.0", "1.0", "40.0")
        result = build_creature_template_row(
            row, zone_tags=frozenset(), home_maps=frozenset({409}), excluded_entries=frozenset(),
        )
        self.assertEqual(result["ai_name"], "SmartAI")
        self.assertEqual(result["script_name"], "boss_ragnaros")
        self.assertEqual(result["home_maps"], [409])

    def test_entry_in_excluded_entries_is_flagged(self):
        row = ("31883", "70", "70", "0", "11", "", "npc_pet_pri_lightwell", "1.0", "1.0", "1.0", "1.0", "2000", "1.0", "1.0", "1.0", "1.0", "20.0")
        result = build_creature_template_row(
            row, zone_tags=frozenset(), home_maps=frozenset({571}), excluded_entries=frozenset({31883}),
        )
        self.assertTrue(result["shuffle_excluded"])

    def test_entry_not_in_excluded_entries_is_not_flagged(self):
        row = ("148", "3", "4", "0", "1", "", "", "1.0", "1.0", "1.0", "1.0", "2000", "1.0", "1.0", "1.0", "1.0", "20.0")
        result = build_creature_template_row(
            row, zone_tags=frozenset(), home_maps=frozenset(), excluded_entries=frozenset({31883}),
        )
        self.assertFalse(result["shuffle_excluded"])


class TestBuildCreatureSpawnRow(unittest.TestCase):
    def test_maps_guid_template_and_map(self):
        row = ("51235", "148", "0")
        result = build_creature_spawn_row(row, excluded_guids=frozenset())
        self.assertEqual(result, {"guid": 51235, "template_entry": 148, "map": 0, "shuffle_excluded": False})

    def test_guid_in_excluded_guids_is_flagged(self):
        row = ("51235", "148", "0")
        result = build_creature_spawn_row(row, excluded_guids=frozenset({51235}))
        self.assertTrue(result["shuffle_excluded"])


class TestLoadExcludedEntries(unittest.TestCase):
    def test_unions_every_category(self):
        def fake_run_query(sql):
            if "flags_extra" in sql:
                return [("1",)]  # triggers/vehicles/npcflag/type/rank/unit_flags catch-all
            if "vehicle_accessory" in sql:
                return [("2",)]
            if "vehicle_template_accessory" in sql:
                return [("3",)]
            if "npc_vendor" in sql:
                return [("4",)]
            if "npc_trainer" in sql:
                return [("5",)]
            if "creature_queststarter" in sql:
                return [("6",)]
            if "creature_questender" in sql:
                return [("7",)]
            if "smart_scripts" in sql:
                return [("8",)]
            if "creature_template_addon" in sql:
                return [("9",)]
            if "RequiredNpcOrGo" in sql:
                return [("10",)]
            raise AssertionError(f"unexpected query: {sql}")

        with patch("extract_mobs_snapshot.run_query", side_effect=fake_run_query):
            result = _load_excluded_entries()

        self.assertEqual(result, frozenset({1, 2, 3, 4, 5, 6, 7, 8, 9, 10}))


class TestLoadExcludedGuids(unittest.TestCase):
    def test_unions_every_category(self):
        def fake_run_query(sql):
            if "leaderGUID" in sql:
                return [("100",)]
            if "memberGUID" in sql:
                return [("101",)]
            if "phaseMask" in sql:
                return [("102",)]
            if "creature_addon" in sql:
                return [("103",)]
            raise AssertionError(f"unexpected query: {sql}")

        with patch("extract_mobs_snapshot.run_query", side_effect=fake_run_query):
            result = _load_excluded_guids()

        self.assertEqual(result, frozenset({100, 101, 102, 103}))


class TestExtract(unittest.TestCase):
    def test_extract_shape(self):
        template_rows = [
            ("148", "3", "4", "0", "1", "", "", "1.0", "1.0", "1.0", "1.0", "2000", "1.0", "1.0", "1.0", "1.0", "20.0"),
        ]
        spawn_rows = [("51235", "148", "0")]
        multispawn_rows = []

        def fake_run_query(sql):
            # Dispatch order matters: extract() now issues several distinct
            # queries that all touch "creature"-named tables -- each
            # distinguishing substring below must be checked before the
            # bare "FROM creature" catch-all (which the real spawn-rows
            # query and the primary-positions query both also match).
            if "FROM creature_template_addon" in sql:
                return []
            if "flags_extra" in sql:
                return []  # _ENTRY_EXCLUSION_CATALOG_QUERY -- no matches
            if "ORDER BY entry" in sql:
                return template_rows  # Main template query
            if "FROM creature_multispawn" in sql:
                return multispawn_rows
            if "position_x" in sql:
                return []  # primary spawn positions -- not needed for this fixture's assertions
            if "leaderGUID" in sql or "memberGUID" in sql:
                return []
            if "phaseMask" in sql:
                return []
            if "FROM creature_addon" in sql:
                return []
            if any(name in sql for name in (
                "vehicle_accessory", "vehicle_template_accessory", "npc_vendor", "npc_trainer",
                "creature_queststarter", "creature_questender", "smart_scripts", "RequiredNpcOrGo",
            )):
                return []
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
        self.assertFalse(data["creature_templates"][0]["shuffle_excluded"])
        self.assertEqual(len(data["creature_spawns"]), 1)
        self.assertEqual(data["creature_spawns"][0]["guid"], 51235)
        self.assertFalse(data["creature_spawns"][0]["shuffle_excluded"])


class TestCompileToPython(unittest.TestCase):
    def test_writes_creature_templates_keyed_by_entry(self):
        data = {
            "creature_templates": [
                {
                    "entry": 148, "minlevel": 3, "maxlevel": 4, "rank": 0, "type": 1,
                    "ai_name": "", "script_name": "", "health_modifier": 1.0,
                    "mana_modifier": 1.0, "damage_modifier": 1.0, "armor_modifier": 1.0,
                    "base_attack_time": 2000, "speed_walk": 1.0, "speed_run": 1.0,
                    "speed_swim": 1.0, "speed_flight": 1.0, "detection_range": 20.0,
                    "zone_tags": ["elwynn_forest"], "home_maps": [0], "shuffle_excluded": False,
                },
            ],
            "creature_spawns": [
                {"guid": 51235, "template_entry": 148, "map": 0, "shuffle_excluded": False},
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
            self.assertFalse(module.CREATURE_TEMPLATES[148]["shuffle_excluded"])
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
