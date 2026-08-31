import pathlib
import os
import unittest

from parse_spell_dbc import load_create_item_effects

_DEFAULT_DBC_PATH = pathlib.Path(__file__).parent.parent.parent.parent / "var" / "extractors" / "dbc" / "Spell.dbc"
_DBC_PATH = pathlib.Path(os.environ.get("ARCHIPELAGO_WOW_SPELL_DBC_PATH", str(_DEFAULT_DBC_PATH)))


class TestLoadCreateItemEffects(unittest.TestCase):
    def test_known_real_recipe_spells_resolve_to_their_real_produced_items(self) -> None:
        # Spell 2158 "Pattern: Fine Leather Boots" -> item_template.entry 2307
        # "Fine Leather Boots"; spell 2163 "Pattern: White Leather Jerkin" ->
        # item_template.entry 2311 "White Leather Jerkin". Verified live
        # against this checkout's real Spell.dbc during planning (see this
        # plan's Global Constraints) -- a real regression anchor, not an
        # arbitrary fixture.
        effects = load_create_item_effects(_DBC_PATH)
        self.assertEqual(effects[2158], [2307])
        self.assertEqual(effects[2163], [2311])

    def test_a_spell_with_no_create_item_effect_is_absent(self) -> None:
        effects = load_create_item_effects(_DBC_PATH)
        # Spell 585 "Smite" (a real, well-known non-crafting spell) has no
        # SPELL_EFFECT_CREATE_ITEM effect and must not appear in the map.
        self.assertNotIn(585, effects)

    def test_unknown_spell_id_is_simply_absent_not_an_error(self) -> None:
        effects = load_create_item_effects(_DBC_PATH)
        self.assertNotIn(999_999_999, effects)


if __name__ == "__main__":
    unittest.main()
