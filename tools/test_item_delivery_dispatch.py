import pathlib
import unittest

from generate_content import FAMILY_SCHEMAS

_TOOLS_DIR = pathlib.Path(__file__).parent
_MODULE_DIR = _TOOLS_DIR.parent
_PLAYER_SCRIPT = _MODULE_DIR / "src" / "ArchipelagoPlayerScript.cpp"

# M5 (final whole-branch review, M4.10.5): three separate milestones
# (M4.10.1 containersanity, M4.10.2 gathersanity, M4.10.5 craftsanity) each
# shipped a real, compiled generic-family ApItemIdToWowItemEntry map that
# nothing in ArchipelagoPlayerScript.cpp's ReceivedItems dispatch actually
# consumed -- the map was real, generate_content.py had built it, but the
# runtime delivery loop never called .find() on it, so a received item from
# that family silently fell through to the "unknown AP item id" log and the
# receiving player got nothing. The same gap shipped three times because
# nothing enforced the invariant that every family opting into
# export_item_delivery=True in FAMILY_SCHEMAS must have a corresponding
# `Archipelago<FAMILY>Content::ApItemIdToWowItemEntry` lookup wired into the
# dispatch chain. This test is that guard, so it can't ship a fourth time.
#
# The namespace a generic family's generated header declares is always
# `Archipelago{family.upper()}Content` (see generate_content.py's
# `guard = family.upper(); f"namespace Archipelago{guard}Content"` in its
# _emit_cpp path) -- true even for families like recipes/trainer_spells/
# quest_rewards/vendor_stock/filler_reward_items whose *file* is named
# Archipelago<PascalCase>ContentTable.h rather than
# Archipelago<UPPER>Content.h; the file-name convention varies, the
# namespace-name convention does not. Older, non-generic, hand-rolled
# families (fish, collections) use a different nested-namespace convention
# (Archipelago::Fish, Archipelago::Collections) entirely, but none of those
# currently opt into export_item_delivery=True, so this test does not need
# to special-case them -- if one ever does, its ApItemIdToWowItemEntry
# lookup would need this test taught its real namespace shape too.


def _export_item_delivery_families() -> list[str]:
    return sorted(
        family
        for family, schema in FAMILY_SCHEMAS.items()
        if schema.export_item_delivery
    )


class TestItemDeliveryDispatch(unittest.TestCase):
    def test_every_export_item_delivery_family_has_more_than_zero_families(self) -> None:
        # Guards the guard: if FAMILY_SCHEMAS ever stopped importing
        # correctly (or every family's export_item_delivery flag were
        # accidentally removed), the loop below would vacuously pass with
        # zero subTests and this whole file would silently stop protecting
        # anything.
        self.assertGreater(len(_export_item_delivery_families()), 0)

    def test_every_export_item_delivery_family_is_dispatched(self) -> None:
        player_script_text = _PLAYER_SCRIPT.read_text(encoding="utf-8")

        for family in _export_item_delivery_families():
            namespace = f"Archipelago{family.upper()}Content"
            symbol = f"{namespace}::ApItemIdToWowItemEntry"
            with self.subTest(family=family):
                self.assertIn(
                    symbol, player_script_text,
                    f"{_PLAYER_SCRIPT} never references {symbol} -- family "
                    f"{family!r} has export_item_delivery=True in "
                    f"FAMILY_SCHEMAS (generate_content.py) and generates a "
                    f"real, compiled ApItemIdToWowItemEntry map, but nothing "
                    f"in ArchipelagoPlayerScript.cpp's ReceivedItems dispatch "
                    f"chain consumes it. A received item from this family "
                    f"would silently fall through to the \"unknown AP item "
                    f"id\" log and the receiving player would get nothing -- "
                    f"the exact bug class fixed for containersanity "
                    f"(M4.10.1), gathersanity (M4.10.2), and craftsanity "
                    f"(M4.10.5). Add a `{symbol}.find(received.item)` block "
                    f"to the dispatch chain, copying the shape of the "
                    f"gathersanity/craftsanity blocks already there.",
                )


if __name__ == "__main__":
    unittest.main()
