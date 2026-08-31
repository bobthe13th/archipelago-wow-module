import unittest

from extract_craftsanity import build_craftsanity_rows


class TestBuildCraftsanityRows(unittest.TestCase):
    def test_two_spells_producing_the_same_item_collapse_to_one_location(self) -> None:
        create_item_effects = {100: [500], 200: [500]}
        spell_tags = {100: {"profession": ["tailoring"], "expansion": ["vanilla"]},
                      200: {"profession": ["leatherworking"], "expansion": ["tbc"]}}
        item_names = {500: "Test Item"}
        locations, items = build_craftsanity_rows(create_item_effects, spell_tags, item_names)
        self.assertEqual(len(locations), 1)
        self.assertEqual(len(items), 1)
        tags = locations[0]["tags"]
        self.assertEqual(set(tags["profession"]), {"tailoring", "leatherworking"})
        self.assertEqual(set(tags["expansion"]), {"vanilla", "tbc"})

    def test_item_with_no_real_item_template_name_is_skipped(self) -> None:
        create_item_effects = {100: [999]}
        spell_tags = {100: {"profession": ["tailoring"], "expansion": ["vanilla"]}}
        item_names: dict[int, str] = {}  # 999 not a real item_template row
        locations, items = build_craftsanity_rows(create_item_effects, spell_tags, item_names)
        self.assertEqual(locations, [])
        self.assertEqual(items, [])

    def test_location_and_item_ids_use_the_reserved_bases_in_sorted_item_entry_order(self) -> None:
        create_item_effects = {100: [777], 200: [111]}
        spell_tags = {100: {"profession": ["tailoring"], "expansion": ["vanilla"]},
                      200: {"profession": ["tailoring"], "expansion": ["vanilla"]}}
        item_names = {777: "Zzz Item", 111: "Aaa Item"}
        locations, items = build_craftsanity_rows(create_item_effects, spell_tags, item_names)
        # sorted by item entry: 111 first, then 777
        self.assertEqual(locations[0]["location_id"], 11_500_000)
        self.assertEqual(locations[1]["location_id"], 11_500_001)
        self.assertEqual(items[0]["item_id"], 11_750_000)
        self.assertEqual(items[1]["item_id"], 11_750_001)
        self.assertEqual(items[0]["delivery"]["wow_item_entry"], 111)


if __name__ == "__main__":
    unittest.main()
