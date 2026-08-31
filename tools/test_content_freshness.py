import os
import pathlib
import unittest

from generate_content import load_family, emit_python, emit_cpp

_TOOLS_DIR = pathlib.Path(__file__).parent
_MODULE_DIR = _TOOLS_DIR.parent
_CONTENT_DIR = _MODULE_DIR / "content"

# M4.10.4: unlike the M4.10.1/M4.10.2 worktree escape hatches (see commits
# b629565/db869d0, eafd02d/2e64891), this milestone's whole session runs
# with BOTH repos as sibling git worktrees directly under a shared
# .worktrees/ directory, rather than the module worktree nesting at its
# normal azerothcore-wotlk/modules/archipelago_wow/ depth. That shallower
# nesting means _MODULE_DIR.parent.parent.parent does not resolve to the
# real checkout's parent directory for THIS worktree -- so unlike prior
# milestones, every family (not just the newly-added one) needs the
# override, not only repsanity's own py_out below. ARCHIPELAGO_WOW_WORLDS_DIR
# reuses the exact same env var name as the earlier per-family escape
# hatches for the same reason eafd02d's comment gave for gathersanity: same
# convention, no need to invent a second one. Once this worktree's branch
# is merged, a normal run with this env var unset resolves to the same
# sibling-checkout directory as before -- remove this override in a
# follow-up chore commit at that point, same as db869d0/2e64891 did.
_ARCHIPELAGO_WOW_DIR = pathlib.Path(
    os.environ.get(
        "ARCHIPELAGO_WOW_WORLDS_DIR",
        str(_MODULE_DIR.parent.parent.parent / "Archipelago" / "worlds" / "wow"),
    )
)

_FAMILIES = {
    "core_loop": {
        "py_out": _ARCHIPELAGO_WOW_DIR / "core_loop_content_data.py",
        "cpp_out": _MODULE_DIR / "src" / "ArchipelagoCoreLoopContentTable.h",
    },
    "gates": {
        "py_out": _ARCHIPELAGO_WOW_DIR / "gates_content_data.py",
        "cpp_out": _MODULE_DIR / "src" / "ArchipelagoGatesContentTable.h",
    },
    "filler": {
        "py_out": _ARCHIPELAGO_WOW_DIR / "filler_content_data.py",
        "cpp_out": _MODULE_DIR / "src" / "ArchipelagoFillerContentTable.h",
    },
    "traps": {
        "py_out": _ARCHIPELAGO_WOW_DIR / "traps_content_data.py",
        "cpp_out": _MODULE_DIR / "src" / "ArchipelagoTrapsContentTable.h",
    },
    "rares": {
        "py_out": _ARCHIPELAGO_WOW_DIR / "rares_content_data.py",
        "cpp_out": _MODULE_DIR / "src" / "ArchipelagoRaresContentTable.h",
    },
    "fish": {
        "py_out": _ARCHIPELAGO_WOW_DIR / "fish_content_data.py",
        "cpp_out": _MODULE_DIR / "src" / "ArchipelagoFishContentTable.h",
    },
    "professions": {
        "py_out": _ARCHIPELAGO_WOW_DIR / "professions_content_data.py",
        "cpp_out": _MODULE_DIR / "src" / "ArchipelagoProfessionsContentTable.h",
    },
    "collections": {
        "py_out": _ARCHIPELAGO_WOW_DIR / "collections_content_data.py",
        "cpp_out": _MODULE_DIR / "src" / "ArchipelagoCollectionsContentTable.h",
    },
    "quest_rewards": {
        "py_out": _ARCHIPELAGO_WOW_DIR / "quest_rewards_content_data.py",
        "cpp_out": _MODULE_DIR / "src" / "ArchipelagoQuestRewardsContentTable.h",
    },
    "vendor_stock": {
        "py_out": _ARCHIPELAGO_WOW_DIR / "vendor_stock_content_data.py",
        "cpp_out": _MODULE_DIR / "src" / "ArchipelagoVendorStockContentTable.h",
    },
    "recipes": {
        "py_out": _ARCHIPELAGO_WOW_DIR / "recipes_content_data.py",
        "cpp_out": _MODULE_DIR / "src" / "ArchipelagoRecipesContentTable.h",
    },
    "trainer_spells": {
        "py_out": _ARCHIPELAGO_WOW_DIR / "trainer_spells_content_data.py",
        "cpp_out": _MODULE_DIR / "src" / "ArchipelagoTrainerSpellsContentTable.h",
    },
    "filler_reward_effects": {
        "py_out": _ARCHIPELAGO_WOW_DIR / "filler_reward_effects_content_data.py",
        "cpp_out": _MODULE_DIR / "src" / "ArchipelagoFillerRewardEffectsContentTable.h",
    },
    "filler_reward_items": {
        "py_out": _ARCHIPELAGO_WOW_DIR / "filler_reward_items_content_data.py",
        "cpp_out": _MODULE_DIR / "src" / "ArchipelagoFillerRewardItemsContentTable.h",
    },
    "achievements": {
        "py_out": _ARCHIPELAGO_WOW_DIR / "achievements_content_data.py",
        "cpp_out": _MODULE_DIR / "src" / "ArchipelagoAchievementsContentTable.h",
    },
    "containersanity": {
        "py_out": _ARCHIPELAGO_WOW_DIR / "containersanity_content_data.py",
        "cpp_out": _MODULE_DIR / "src" / "ArchipelagoCONTAINERSANITYContent.h",
    },
    "gathersanity": {
        "py_out": _ARCHIPELAGO_WOW_DIR / "gathersanity_content_data.py",
        "cpp_out": _MODULE_DIR / "src" / "ArchipelagoGATHERSANITYContent.h",
    },
    "enemysanity": {
        "py_out": _ARCHIPELAGO_WOW_DIR / "enemysanity_content_data.py",
        "cpp_out": _MODULE_DIR / "src" / "ArchipelagoENEMYSANITYContent.h",
    },
    "repsanity": {
        "py_out": _ARCHIPELAGO_WOW_DIR / "repsanity_content_data.py",
        "cpp_out": _MODULE_DIR / "src" / "ArchipelagoREPSANITYContent.h",
    },
}


class TestContentFreshness(unittest.TestCase):
    def test_generated_files_match_their_yaml_source(self) -> None:
        for family_name, paths in _FAMILIES.items():
            yaml_path = _CONTENT_DIR / f"{family_name}.yaml"
            with self.subTest(family=family_name):
                data = load_family(yaml_path)

                expected_py = emit_python(data)
                actual_py = paths["py_out"].read_text(encoding="utf-8")
                self.assertEqual(
                    expected_py, actual_py,
                    f"{paths['py_out']} is stale relative to {yaml_path} -- "
                    f"regenerate with generate_content.py, don't hand-edit",
                )

                expected_cpp = emit_cpp(data)
                actual_cpp = paths["cpp_out"].read_text(encoding="utf-8")
                self.assertEqual(
                    expected_cpp, actual_cpp,
                    f"{paths['cpp_out']} is stale relative to {yaml_path} -- "
                    f"regenerate with generate_content.py, don't hand-edit",
                )


if __name__ == "__main__":
    unittest.main()

