import unittest

from extract_weather_snapshot import build_weather_row, extract, _CHANCE_COLUMNS


class TestBuildWeatherRow(unittest.TestCase):
    def test_maps_zone_and_every_chance_column(self):
        row = ("12", "10", "0", "5", "20", "0", "10", "15", "0", "5", "30", "40", "25")
        result = build_weather_row(row)
        self.assertEqual(result["zone"], 12)
        self.assertEqual(result["spring_rain_chance"], 10)
        self.assertEqual(result["spring_snow_chance"], 0)
        self.assertEqual(result["spring_storm_chance"], 5)
        self.assertEqual(result["summer_rain_chance"], 20)
        self.assertEqual(result["summer_snow_chance"], 0)
        self.assertEqual(result["summer_storm_chance"], 10)
        self.assertEqual(result["fall_rain_chance"], 15)
        self.assertEqual(result["fall_snow_chance"], 0)
        self.assertEqual(result["fall_storm_chance"], 5)
        self.assertEqual(result["winter_rain_chance"], 30)
        self.assertEqual(result["winter_snow_chance"], 40)
        self.assertEqual(result["winter_storm_chance"], 25)

    def test_maps_every_column_name_in_order(self):
        # 12 chance columns, matches _CHANCE_COLUMNS' own declared order --
        # a mismatch here would silently swap e.g. summer_snow for fall_rain.
        self.assertEqual(len(_CHANCE_COLUMNS), 12)
        row = ("1",) + tuple(str(i) for i in range(12))
        result = build_weather_row(row)
        for i, column in enumerate(_CHANCE_COLUMNS):
            self.assertEqual(result[column], i)


class TestExtract(unittest.TestCase):
    def test_extract_shape(self):
        from unittest.mock import patch

        weather_rows = [("12", "10", "0", "5", "20", "0", "10", "15", "0", "5", "30", "40", "25")]

        def fake_run_query(sql):
            self.assertIn("FROM game_weather", sql)
            return weather_rows

        with patch("extract_weather_snapshot.run_query", side_effect=fake_run_query):
            data = extract()

        self.assertEqual(len(data["weather_zones"]), 1)
        self.assertEqual(data["weather_zones"][0]["zone"], 12)
