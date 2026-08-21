import pathlib
import unittest

from generate_content import load_family, emit_python, emit_cpp

_TOOLS_DIR = pathlib.Path(__file__).parent
_MODULE_DIR = _TOOLS_DIR.parent
_CONTENT_DIR = _MODULE_DIR / "content"
_ARCHIPELAGO_WOW_DIR = _MODULE_DIR.parent.parent.parent / "Archipelago" / "worlds" / "wow"

_FAMILIES = {
    "quests": {
        "py_out": _ARCHIPELAGO_WOW_DIR / "content_data.py",
        "cpp_out": _MODULE_DIR / "src" / "ArchipelagoContentTable.h",
    },
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
