import pathlib
import tempfile
import textwrap
import unittest

import generate_content
from generate_content import (
    load_family,
    emit_python,
    emit_cpp,
    emit_python_generic,
    emit_cpp_generic,
    validate_family,
    _emit_cpp_trigger_lookup,
    ValidationError,
    FAMILY_SCHEMAS,
)


class TestLoadFamily(unittest.TestCase):
    def _write(self, tmpdir: str, text: str) -> pathlib.Path:
        path = pathlib.Path(tmpdir) / "test.yaml"
        path.write_text(textwrap.dedent(text), encoding="utf-8")
        return path

    def test_missing_family_key_raises(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = self._write(tmp, """
                locations: []
                items: []
            """)
            with self.assertRaises(ValidationError):
                load_family(path)

    def test_duplicate_location_id_raises(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = self._write(tmp, """
                family: quests
                locations:
                  - name: A
                    location_id: 1
                    trigger: {kind: quest, quest_id: 100}
                  - name: B
                    location_id: 1
                    trigger: {kind: quest, quest_id: 101}
                items: []
            """)
            with self.assertRaises(ValidationError):
                load_family(path)

    def test_duplicate_name_across_locations_and_items_raises(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = self._write(tmp, """
                family: quests
                locations:
                  - name: Same Name
                    location_id: 1
                    trigger: {kind: quest, quest_id: 100}
                items:
                  - name: Same Name
                    item_id: 900000
                    count: 1
                    delivery: {kind: mail, wow_item_entry: 25}
            """)
            with self.assertRaises(ValidationError):
                load_family(path)

    def test_unlock_instance_with_no_matching_location_raises(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = self._write(tmp, """
                family: core_loop
                locations: []
                items:
                  - name: "Instance Unlock: Nowhere"
                    item_id: 900001
                    count: 1
                    delivery: {kind: realm_state, effect: unlock_instance, instance_key: nowhere}
            """)
            with self.assertRaises(ValidationError):
                load_family(path)

    def test_unrecognized_trigger_kind_raises(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = self._write(tmp, """
                family: core_loop
                locations:
                  - name: Reach Level 5
                    location_id: 710000
                    trigger: {kind: level_milestonee, level: 5}
                items: []
            """)
            with self.assertRaises(ValidationError):
                load_family(path)

class TestGatesFamily(unittest.TestCase):
    def _write(self, tmpdir: str, text: str) -> pathlib.Path:
        path = pathlib.Path(tmpdir) / "test.yaml"
        path.write_text(textwrap.dedent(text), encoding="utf-8")
        return path

    def test_flag_delivery_emits_python_and_cpp(self) -> None:
        data = {
            "family": "gates",
            "constants": {},
            "locations": [],
            "items": [
                {"name": "Progressive Riding: Apprentice", "item_id": 830000, "count": 1,
                 "delivery": {"kind": "flag", "flag_key": "riding", "tier": 1}},
                {"name": "Progressive Riding: Journeyman", "item_id": 830001, "count": 1,
                 "delivery": {"kind": "flag", "flag_key": "riding", "tier": 2}},
            ],
        }
        py_text = emit_python(data)
        self.assertIn('"Progressive Riding: Apprentice": (830000, 1)', py_text)
        self.assertIn('FLAG_KEY_BY_ITEM_NAME', py_text)
        self.assertIn('"Progressive Riding: Apprentice": "riding"', py_text)

        cpp_text = emit_cpp(data)
        self.assertIn("AP_ITEM_PROGRESSIVE_RIDING_APPRENTICE = 830000", cpp_text)
        self.assertIn("ApItemToFlagKeyAndTier", cpp_text)
        self.assertIn('{ 830000, { "riding", 1 } }', cpp_text)

    def test_gates_family_rejects_unrecognized_delivery_kind(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = self._write(tmp, """
                family: gates
                locations: []
                items:
                  - name: Bad Gate
                    item_id: 830099
                    count: 1
                    delivery: {kind: mail, wow_item_entry: 1}
            """)
            with self.assertRaises(ValidationError):
                load_family(path)


class TestEmitCpp(unittest.TestCase):
    def test_core_loop_family_emits_cpp_constants_and_maps(self) -> None:
        data = {
            "family": "core_loop",
            "constants": {"STARTING_LEVEL_CAP": 10, "LEVEL_CAP_STEP": 5, "SPRINT_GOAL_LEVEL": 60},
            "locations": [
                {"name": "Reach Level 5", "location_id": 710005,
                 "trigger": {"kind": "level_milestone", "level": 5, "track": "standard"}},
                {"name": "Reach Level 55 (Death Knight)", "location_id": 711055,
                 "trigger": {"kind": "level_milestone", "level": 55, "track": "death_knight"}},
                {"name": "Clear Ragefire Chasm", "location_id": 720000,
                 "trigger": {"kind": "instance_clear", "instance_key": "ragefire_chasm",
                             "final_boss_entry": 11520}},
            ],
            "items": [
                {"name": "Progressive Level Cap", "item_id": 810000, "count": 10,
                 "delivery": {"kind": "realm_state", "effect": "raise_level_cap", "step": 5}},
                {"name": "Instance Unlock: Ragefire Chasm", "item_id": 810001, "count": 1,
                 "delivery": {"kind": "realm_state", "effect": "unlock_instance",
                              "instance_key": "ragefire_chasm"}},
            ],
        }
        text = emit_cpp(data)
        self.assertIn("AP_ITEM_PROGRESSIVE_LEVEL_CAP = 810000", text)
        self.assertIn("AP_ITEM_INSTANCE_UNLOCK_RAGEFIRE_CHASM = 810001", text)
        self.assertIn("STARTING_LEVEL_CAP = 10", text)
        self.assertIn('INSTANCE_KEY_RAGEFIRE_CHASM = "ragefire_chasm"', text)
        self.assertIn("{ INSTANCE_KEY_RAGEFIRE_CHASM, 11520 }", text)
        self.assertIn("LEVEL_LOCATIONS_STANDARD", text)
        self.assertIn("LEVEL_LOCATIONS_DEATH_KNIGHT", text)
        self.assertIn("{ 5, 710005 }", text)
        self.assertIn("{ 55, 711055 }", text)
        self.assertIn('{ INSTANCE_KEY_RAGEFIRE_CHASM, 720000 }', text)

    def test_core_loop_death_knight_track_row_is_excluded_from_standard_map(self) -> None:
        data = {
            "family": "core_loop",
            "constants": {"STARTING_LEVEL_CAP": 10, "LEVEL_CAP_STEP": 5, "SPRINT_GOAL_LEVEL": 60},
            "locations": [
                {"name": "Reach Level 5", "location_id": 710005,
                 "trigger": {"kind": "level_milestone", "level": 5, "track": "standard"}},
                {"name": "Reach Level 55 (Death Knight)", "location_id": 711055,
                 "trigger": {"kind": "level_milestone", "level": 55, "track": "death_knight"}},
            ],
            "items": [],
        }
        text = emit_cpp(data)
        standard_block = text.split("LEVEL_LOCATIONS_STANDARD = {")[1].split("};")[0]
        self.assertNotIn("711055", standard_block)
        dk_block = text.split("LEVEL_LOCATIONS_DEATH_KNIGHT = {")[1].split("};")[0]
        self.assertNotIn("710005", dk_block)


class TestEmitPythonCoreLoopTracks(unittest.TestCase):
    def test_emits_level_locations_and_names_grouped_by_track(self) -> None:
        data = {
            "family": "core_loop",
            "constants": {"STARTING_LEVEL_CAP": 10, "LEVEL_CAP_STEP": 5, "SPRINT_GOAL_LEVEL": 60},
            "locations": [
                {"name": "Reach Level 5", "location_id": 710005,
                 "trigger": {"kind": "level_milestone", "level": 5, "track": "standard"}},
                {"name": "Reach Level 55 (Death Knight)", "location_id": 711055,
                 "trigger": {"kind": "level_milestone", "level": 55, "track": "death_knight"}},
            ],
            "items": [],
        }
        text = emit_python(data)
        compile(text, "<test>", "exec")
        namespace: dict = {}
        exec(text, namespace)
        self.assertEqual(namespace["LEVEL_LOCATIONS_BY_TRACK"]["standard"], {5: 710005})
        self.assertEqual(namespace["LEVEL_LOCATIONS_BY_TRACK"]["death_knight"], {55: 711055})
        self.assertEqual(namespace["LEVEL_LOCATION_NAMES_BY_TRACK"]["standard"], {5: "Reach Level 5"})
        self.assertEqual(
            namespace["LEVEL_LOCATION_NAMES_BY_TRACK"]["death_knight"],
            {55: "Reach Level 55 (Death Knight)"},
        )


class TestLoadFamilyLevelMilestoneTrack(unittest.TestCase):
    def _write(self, tmpdir: str, text: str) -> pathlib.Path:
        path = pathlib.Path(tmpdir) / "test.yaml"
        path.write_text(textwrap.dedent(text), encoding="utf-8")
        return path

    def test_level_milestone_missing_track_raises(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = self._write(tmp, """
                family: core_loop
                locations:
                  - name: Reach Level 5
                    location_id: 710005
                    trigger: {kind: level_milestone, level: 5}
                items: []
            """)
            with self.assertRaises(ValidationError):
                load_family(path)

    def test_level_milestone_unrecognized_track_raises(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = self._write(tmp, """
                family: core_loop
                locations:
                  - name: Reach Level 5
                    location_id: 710005
                    trigger: {kind: level_milestone, level: 5, track: nonsense}
                items: []
            """)
            with self.assertRaises(ValidationError):
                load_family(path)

    def test_level_milestone_valid_track_loads_successfully(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = self._write(tmp, """
                family: core_loop
                locations:
                  - name: Reach Level 5
                    location_id: 710005
                    trigger: {kind: level_milestone, level: 5, track: standard}
                items: []
            """)
            data = load_family(path)
            self.assertEqual(len(data["locations"]), 1)

    def test_instance_clear_rows_are_unaffected_by_the_track_validator(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = self._write(tmp, """
                family: core_loop
                locations:
                  - name: Clear Ragefire Chasm
                    location_id: 720000
                    trigger: {kind: instance_clear, instance_key: ragefire_chasm, final_boss_entry: 11520}
                items: []
            """)
            data = load_family(path)
            self.assertEqual(len(data["locations"]), 1)


class TestGenericEmitter(unittest.TestCase):
    def test_emit_python_generic_includes_counts(self) -> None:
        data = {
            "family": "quests",
            "locations": [{"name": "A Threat Within", "location_id": 700000, "trigger": {"kind": "quest", "quest_id": 783}}],
            "items": [{"name": "A Threat Within", "item_id": 800000, "delivery": {"kind": "mail", "wow_item_entry": 25}}],
            "constants": {},
        }
        output = emit_python_generic(data)
        self.assertIn('"A Threat Within": (800000, 1)', output)
        self.assertIn('"A Threat Within": 700000', output)

    def test_emit_python_generic_always_emits_always_present_even_when_empty(self) -> None:
        data = {
            "family": "quests",
            "locations": [{"name": "A Threat Within", "location_id": 700000, "trigger": {"kind": "quest", "quest_id": 783}}],
            "items": [],
            "constants": {},
        }
        output = emit_python_generic(data)
        self.assertIn("ALWAYS_PRESENT: frozenset[str] = frozenset({", output)
        compile(output, "<test>", "exec")

    def test_emit_python_generic_escapes_embedded_double_quotes(self) -> None:
        data = {
            "family": "quest_rewards",
            "locations": [{"name": 'Quest: Wanted:  "Hogger" Reward (#176)', "location_id": 750176,
                           "trigger": {"kind": "quest_reward", "quest_id": 176, "min_level": 1}}],
            "items": [{"name": 'Quest Reward: Wanted:  "Hogger" (#176)', "item_id": 1750176,
                       "delivery": {"kind": "mail", "wow_item_entry": 1}}],
            "constants": {},
        }
        output = emit_python_generic(data)
        # must compile as valid Python -- the real, end-to-end regression this
        # bug produced (py_compile failure on the checked-in file)
        compile(output, "<test>", "exec")
        self.assertIn('"Quest: Wanted:  \\"Hogger\\" Reward (#176)": 750176', output)

    def test_emit_cpp_generic_escapes_embedded_double_quotes(self) -> None:
        data = {
            "family": "quest_rewards",
            "locations": [{"name": 'Quest: Wanted:  "Hogger" Reward (#176)', "location_id": 750176,
                           "trigger": {"kind": "quest_reward", "quest_id": 176, "min_level": 1}}],
            "items": [],
            "constants": {},
        }
        output = emit_cpp_generic(data)
        self.assertIn('{"Quest: Wanted:  \\"Hogger\\" Reward (#176)", 750176}', output)

    def test_emit_python_generic_omits_triggers_when_not_opted_in(self) -> None:
        # "quests" is generic=True in this test's data but export_triggers
        # defaults to False -- FAMILY_SCHEMAS["quests"] in the real registry
        # doesn't even set generic=True, but this test only exercises
        # emit_python_generic's own opt-in gate, not family dispatch, so any
        # family name whose real schema has export_triggers unset (or absent
        # entirely) demonstrates the default.
        data = {
            "family": "quests",
            "locations": [{"name": "A Threat Within", "location_id": 700000,
                           "trigger": {"kind": "quest", "quest_id": 783}}],
            "items": [{"name": "A Threat Within", "item_id": 800000, "delivery": {"kind": "mail", "wow_item_entry": 25}}],
            "constants": {},
        }
        output = emit_python_generic(data)
        self.assertNotIn("TRIGGERS", output)

    def test_emit_python_generic_exports_triggers_for_quest_rewards(self) -> None:
        # quest_rewards is the one family with export_triggers=True in the
        # real FAMILY_SCHEMAS registry -- confirms the opt-in actually fires
        # for it, the trigger dict round-trips as a valid Python literal via
        # repr(), and the TRIGGERS dict's own KEYS reuse _string_literal
        # (not a naive f'"{name}"') for names with an embedded double quote,
        # exactly like LOCATIONS/ITEMS above.
        data = {
            "family": "quest_rewards",
            "locations": [{"name": 'Quest: Wanted:  "Hogger" Reward (#176)', "location_id": 750176,
                           "trigger": {"kind": "quest_reward", "quest_id": 176, "min_level": 5, "prev_quest_id": None}}],
            "items": [{"name": 'Quest Reward: Wanted:  "Hogger" (#176)', "item_id": 1750176,
                       "delivery": {"kind": "mail", "wow_item_entry": 1}}],
            "constants": {},
        }
        output = emit_python_generic(data)
        compile(output, "<test>", "exec")
        self.assertIn("TRIGGERS: dict[str, dict] = {", output)
        self.assertIn(
            '"Quest: Wanted:  \\"Hogger\\" Reward (#176)": '
            "{'kind': 'quest_reward', 'quest_id': 176, 'min_level': 5, 'prev_quest_id': None}",
            output,
        )
        namespace: dict = {}
        exec(output, namespace)
        self.assertEqual(
            namespace["TRIGGERS"]['Quest: Wanted:  "Hogger" Reward (#176)']["min_level"], 5,
        )


class TestEmitCppGenericTriggers(unittest.TestCase):
    def test_quest_reward_family_emits_quest_id_to_location_id_via_raw_array_builder(self) -> None:
        data = {
            "family": "quest_rewards",
            "locations": [
                {"name": "Quest: A Reward (#1)", "location_id": 1000001,
                 "trigger": {"kind": "quest_reward", "quest_id": 1, "min_level": 1, "prev_quest_id": None}},
            ],
            "items": [],
        }
        cpp = emit_cpp_generic(data)
        self.assertIn("QUEST_ID_TO_LOCATION_ID_RAW[]", cpp)
        self.assertIn("inline std::unordered_map<uint32_t, int64_t> BuildQUEST_ID_TO_LOCATION_ID()", cpp)
        self.assertIn(
            "inline const std::unordered_map<uint32_t, int64_t> QUEST_ID_TO_LOCATION_ID = BuildQUEST_ID_TO_LOCATION_ID();",
            cpp,
        )
        self.assertIn("{ 1, 1000001 }", cpp)

    def test_vendor_purchase_family_emits_slot_to_location_id_via_raw_array_builder(self) -> None:
        data = {
            "family": "vendor_stock",
            "locations": [
                {"name": "Vendor: Someone - Item (#0)", "location_id": 2000000,
                 "trigger": {"kind": "vendor_purchase", "npc_entry": 54, "item_slot": 0}},
            ],
            "items": [
                {"name": "Some Item", "item_id": 5000000, "count": 1,
                 "delivery": {"kind": "mail", "wow_item_entry": 1234}},
            ],
        }
        cpp = emit_cpp_generic(data)
        self.assertIn("VENDOR_SLOT_TO_LOCATION_ID_RAW[]", cpp)
        self.assertIn(
            "inline std::map<std::pair<uint32_t, uint32_t>, int64_t> BuildVENDOR_SLOT_TO_LOCATION_ID()",
            cpp,
        )
        self.assertIn(
            "inline const std::map<std::pair<uint32_t, uint32_t>, int64_t> VENDOR_SLOT_TO_LOCATION_ID = "
            "BuildVENDOR_SLOT_TO_LOCATION_ID();",
            cpp,
        )
        self.assertIn("{ { 54, 1234 }, 2000000 }", cpp)


class TestEmitCppGenericLargeMaps(unittest.TestCase):
    def test_locations_and_items_use_raw_array_plus_builder_not_a_single_aggregate(self) -> None:
        data = {
            "family": "vendor_stock",
            "locations": [
                {"name": "Vendor: Someone - Item (#0)", "location_id": 2000000,
                 "trigger": {"kind": "vendor_purchase", "npc_entry": 54, "item_slot": 0}},
            ],
            "items": [
                {"name": "Some Item", "item_id": 5000000, "count": 1,
                 "delivery": {"kind": "mail", "wow_item_entry": 1234}},
            ],
        }
        cpp = emit_cpp_generic(data)
        self.assertIn("LOCATIONS_RAW[]", cpp)
        self.assertIn("inline std::map<std::string, uint32_t> BuildLOCATIONS()", cpp)
        self.assertIn("inline const std::map<std::string, uint32_t> LOCATIONS = BuildLOCATIONS();", cpp)
        self.assertIn("ITEMS_RAW[]", cpp)
        self.assertIn("inline std::map<std::string, uint32_t> BuildITEMS()", cpp)
        self.assertIn("inline const std::map<std::string, uint32_t> ITEMS = BuildITEMS();", cpp)
        self.assertIn('{"Vendor: Someone - Item (#0)", 2000000}', cpp)
        self.assertIn('{"Some Item", 5000000}', cpp)

    def test_empty_locations_emits_simple_empty_map_not_a_raw_array(self) -> None:
        data = {
            "family": "quest_rewards",
            "locations": [],
            "items": [],
        }
        cpp = emit_cpp_generic(data)
        self.assertIn("inline const std::map<std::string, uint32_t> LOCATIONS = {};", cpp)
        self.assertIn("inline const std::map<std::string, uint32_t> ITEMS = {};", cpp)
        self.assertNotIn("LOCATIONS_RAW", cpp)
        self.assertNotIn("ITEMS_RAW", cpp)


class TestLegacyEmitterSizeGuard(unittest.TestCase):
    """M4.7.1 Finding 4: guards against the exact stack-overflow class of
    bug M4.7.1.1 fixed reopening for a DIFFERENT family. The generic=True
    families (quest_rewards, vendor_stock) already use the safe
    raw-array-plus-builder pattern (_emit_cpp_large_string_map /
    _emit_cpp_trigger_lookup_quest_reward / _emit_cpp_trigger_lookup_vendor_purchase)
    regardless of size -- this guard is only for the remaining hand-rolled
    emitters (quests/core_loop/gates/filler/traps/rares/fish/professions/
    collections as of M4.7.1.3), which still build bare aggregate
    initializers and would silently reopen the crash if any one of them
    ever grows past a safe margin. 2,000 is ~3.8x headroom over the
    current largest legacy family (collections, 264 locations + 264 items
    = 528 combined rows) and stays well below the real,
    empirically-confirmed crash point (~37,739 rows)."""

    LEGACY_FAMILY_ROW_LIMIT = 2000

    # Families whose hand-rolled (non-generic) emitter already uses the safe
    # raw-array-plus-runtime-builder pattern (not a bare aggregate
    # initializer) despite not being dispatched via emit_*_generic --
    # achievements (M4.9.4 Task 5) hand-rolls _emit_python_achievements/
    # _emit_cpp_achievements (rather than opting into generic=True) because
    # it needs bespoke exports (WORLD_EXPLORER_*, ACHIEVEMENTS_BY_SUBSET,
    # EXTREMELY_HARD_ITEM_NAMES) the generic emitter doesn't produce, but its
    # C++ side follows exactly the same raw-array-plus-builder pattern as
    # _emit_cpp_trigger_lookup_quest_reward -- just as safe from the M4.7.1
    # stack-overflow class as any generic=True family, at 1,162 rows each
    # for LOCATIONS/ITEMS (2,324 combined, over this guard's 2000-row margin).
    _SAFE_HAND_ROLLED_FAMILIES = {"achievements"}

    def test_no_legacy_family_exceeds_the_safe_row_count(self) -> None:
        content_dir = pathlib.Path(__file__).parent.parent / "content"
        for family, schema in FAMILY_SCHEMAS.items():
            if schema.generic or family in self._SAFE_HAND_ROLLED_FAMILIES:
                continue  # already on the safe raw-array-plus-builder pattern regardless of size
            yaml_path = content_dir / f"{family}.yaml"
            if not yaml_path.exists():
                continue
            data = load_family(yaml_path)
            row_count = len(data["locations"]) + len(data["items"])
            self.assertLess(
                row_count, self.LEGACY_FAMILY_ROW_LIMIT,
                f"{family}.yaml has {row_count} combined location+item rows, over the "
                f"{self.LEGACY_FAMILY_ROW_LIMIT}-row safety margin for its hand-rolled "
                f"emitter (_emit_cpp_{family}) -- this is the exact failure class M4.7.1.1 "
                f"fixed for quest_rewards/vendor_stock (a bare aggregate initializer over "
                f"~37,739 rows overflowed MSVC's default 1 MiB stack at startup). Convert "
                f"{family}'s C++ emission to the same raw-array-plus-builder pattern "
                f"(_emit_cpp_large_string_map or equivalent) before this ships, per Finding "
                f"4 in docs/superpowers/plans/2026-08-25-archipelago-wow-m4.7.1-findings.md."
            )


class TestAlwaysPresentAndTags(unittest.TestCase):
    def test_always_present_true_locations_are_included_in_the_frozenset(self) -> None:
        data = {
            "family": "quest_rewards",
            "locations": [
                {"name": "Quest: A Reward (#1)", "location_id": 1000001,
                 "trigger": {"kind": "quest_reward", "quest_id": 1, "min_level": 1}, "always_present": True,
                 "tags": {"type": ["standard"], "expansion": ["vanilla"]}},
                {"name": "Quest: B Reward (#2)", "location_id": 1000002,
                 "trigger": {"kind": "quest_reward", "quest_id": 2, "min_level": 1},
                 "tags": {"type": ["standard"], "expansion": ["vanilla"]}},
            ],
            "items": [],
            "constants": {},
        }
        output = emit_python_generic(data)
        compile(output, "<test>", "exec")
        namespace: dict = {}
        exec(output, namespace)
        self.assertEqual(namespace["ALWAYS_PRESENT"], frozenset({"Quest: A Reward (#1)"}))

    def test_export_tags_off_by_default_omits_tags_block(self) -> None:
        data = {
            "family": "quest_rewards",
            "locations": [{"name": "Quest: A Reward (#1)", "location_id": 1000001,
                           "trigger": {"kind": "quest_reward", "quest_id": 1, "min_level": 1},
                           "tags": {"type": ["standard"], "expansion": ["vanilla"]}}],
            "items": [],
            "constants": {},
        }
        # This test constructs `data` directly (bypassing FAMILY_SCHEMAS'
        # real export_tags=True for quest_rewards, which this task does NOT
        # flip yet -- see Task 3) to prove emit_python_generic's OWN gate
        # works independent of the real registry's current state.
        original_schema = FAMILY_SCHEMAS["quest_rewards"]
        FAMILY_SCHEMAS["quest_rewards"] = type(original_schema)(
            valid_trigger_kinds=original_schema.valid_trigger_kinds,
            valid_delivery_kinds=original_schema.valid_delivery_kinds,
            generic=True, export_triggers=True, export_tags=False,
        )
        try:
            output = emit_python_generic(data)
            self.assertNotIn("TAGS:", output)
        finally:
            FAMILY_SCHEMAS["quest_rewards"] = original_schema

    def test_export_tags_on_emits_tags_block_as_valid_python(self) -> None:
        data = {
            "family": "quest_rewards",
            "locations": [{"name": 'Quest: Wanted:  "Hogger" Reward (#176)', "location_id": 750176,
                           "trigger": {"kind": "quest_reward", "quest_id": 176, "min_level": 1},
                           "tags": {"type": ["dungeon_quest", "repeatable"], "expansion": ["wotlk"]}}],
            "items": [],
            "constants": {},
        }
        original_schema = FAMILY_SCHEMAS["quest_rewards"]
        FAMILY_SCHEMAS["quest_rewards"] = type(original_schema)(
            valid_trigger_kinds=original_schema.valid_trigger_kinds,
            valid_delivery_kinds=original_schema.valid_delivery_kinds,
            generic=True, export_triggers=True, export_tags=True,
        )
        try:
            output = emit_python_generic(data)
            compile(output, "<test>", "exec")
            namespace: dict = {}
            exec(output, namespace)
            tags = namespace["TAGS"]['Quest: Wanted:  "Hogger" Reward (#176)']
            self.assertEqual(tags["type"], frozenset({"dungeon_quest", "repeatable"}))
            self.assertEqual(tags["expansion"], frozenset({"wotlk"}))
        finally:
            FAMILY_SCHEMAS["quest_rewards"] = original_schema

    def test_load_family_rejects_missing_tags_block_when_export_tags_is_on(self) -> None:
        # As of this task, the REAL FAMILY_SCHEMAS["quest_rewards"] still has
        # export_tags=False (flipped in Task 3, alongside real tags data) --
        # temporarily override it here so this test exercises the validator
        # gate itself, not the real registry's current (pre-Task-3) state.
        original_schema = FAMILY_SCHEMAS["quest_rewards"]
        FAMILY_SCHEMAS["quest_rewards"] = type(original_schema)(
            valid_trigger_kinds=original_schema.valid_trigger_kinds,
            valid_delivery_kinds=original_schema.valid_delivery_kinds,
            generic=True, export_triggers=True, export_tags=True,
        )
        try:
            with tempfile.TemporaryDirectory() as tmp:
                path = pathlib.Path(tmp) / "test.yaml"
                path.write_text(textwrap.dedent("""
                    family: quest_rewards
                    locations:
                      - name: 'Quest: No Tags Reward (#1)'
                        location_id: 1000001
                        trigger: {kind: quest_reward, quest_id: 1, min_level: 1}
                    items: []
                """), encoding="utf-8")
                with self.assertRaises(ValidationError):
                    load_family(path)
        finally:
            FAMILY_SCHEMAS["quest_rewards"] = original_schema

    def test_load_family_rejects_empty_dimension_list_when_export_tags_is_on(self) -> None:
        original_schema = FAMILY_SCHEMAS["quest_rewards"]
        FAMILY_SCHEMAS["quest_rewards"] = type(original_schema)(
            valid_trigger_kinds=original_schema.valid_trigger_kinds,
            valid_delivery_kinds=original_schema.valid_delivery_kinds,
            generic=True, export_triggers=True, export_tags=True,
        )
        try:
            with tempfile.TemporaryDirectory() as tmp:
                path = pathlib.Path(tmp) / "test.yaml"
                path.write_text(textwrap.dedent("""
                    family: quest_rewards
                    locations:
                      - name: 'Quest: Empty Dim Reward (#1)'
                        location_id: 1000001
                        trigger: {kind: quest_reward, quest_id: 1, min_level: 1}
                        tags: {type: [], expansion: [vanilla]}
                    items: []
                """), encoding="utf-8")
                with self.assertRaises(ValidationError):
                    load_family(path)
        finally:
            FAMILY_SCHEMAS["quest_rewards"] = original_schema


class TestLearnSpellTriggerLookup(unittest.TestCase):
    def test_emits_spell_id_to_location_id_map(self) -> None:
        data = {
            "family": "recipes",
            "locations": [
                {"name": "Recipe: Westfall Stew (#728)", "location_id": 6000728,
                 "trigger": {"kind": "learn_spell", "spell_id": 2543},
                 "tags": {"profession": ["cooking"], "expansion": ["vanilla"]}},
            ],
            "items": [
                {"name": "Recipe Item: Westfall Stew (#728)", "item_id": 6500728,
                 "delivery": {"kind": "mail", "wow_item_entry": 728}},
            ],
        }
        cpp = generate_content.emit_cpp_generic(data)
        self.assertIn("SPELL_ID_TO_LOCATION_ID", cpp)
        self.assertIn("{ 2543, 6000728 }", cpp)

    def test_duplicate_spell_id_within_one_family_is_a_hard_validation_error(self) -> None:
        data = {
            "family": "recipes",
            "locations": [
                {"name": "Recipe: A (#1)", "location_id": 6000001,
                 "trigger": {"kind": "learn_spell", "spell_id": 100},
                 "tags": {"profession": ["cooking"], "expansion": ["vanilla"]}},
                {"name": "Recipe: B (#2)", "location_id": 6000002,
                 "trigger": {"kind": "learn_spell", "spell_id": 100},
                 "tags": {"profession": ["cooking"], "expansion": ["vanilla"]}},
            ],
            "items": [],
        }
        with self.assertRaises(generate_content.ValidationError):
            generate_content._validate_trigger_lookup_uniqueness("recipes", data["locations"], data["items"], pathlib.Path("test.yaml"))

    def test_learn_spell_row_missing_spell_id_is_rejected(self) -> None:
        locations = [
            {"name": "Recipe: A (#1)", "location_id": 6000001, "trigger": {"kind": "learn_spell"}},
        ]
        with self.assertRaises(generate_content.ValidationError):
            generate_content._validate_learn_spell_rows(locations, pathlib.Path("test.yaml"))


class TestEmitCppItemDeliveryLookup(unittest.TestCase):
    def test_emits_ap_item_id_to_wow_item_entry_map_when_flag_set(self) -> None:
        data = {
            "family": "recipes",
            "locations": [
                {"name": "Recipe: Westfall Stew (#728)", "location_id": 6000728,
                 "trigger": {"kind": "learn_spell", "spell_id": 2543},
                 "tags": {"profession": ["cooking"], "expansion": ["vanilla"]}},
            ],
            "items": [
                {"name": "Recipe Item: Westfall Stew (#728)", "item_id": 6500728,
                 "delivery": {"kind": "mail", "wow_item_entry": 728}},
            ],
        }
        cpp = emit_cpp_generic(data)
        self.assertIn("ApItemIdToWowItemEntry", cpp)
        self.assertIn("{ 6500728, 728 }", cpp)

    def test_no_map_emitted_when_flag_unset(self) -> None:
        data = {
            "family": "vendor_stock",
            "locations": [
                {"name": "Vendor: Fake NPC - Fake Item (#1)", "location_id": 2000001,
                 "trigger": {"kind": "vendor_purchase", "npc_entry": 1, "item_slot": 0},
                 "tags": {"expansion": ["vanilla"]}},
            ],
            "items": [
                {"name": "Vendor Item: Fake NPC - Fake Item (#1)", "item_id": 2500001,
                 "delivery": {"kind": "mail", "wow_item_entry": 1}},
            ],
        }
        # vendor_stock's real FAMILY_SCHEMAS entry now sets
        # export_item_delivery=True (cross-world mail-delivery dispatch fix --
        # quest_rewards/vendor_stock items were compiled with no
        # ApItemIdToWowItemEntry map at all, so an item assigned to a
        # different player's world than the one that unlocked it silently
        # vanished instead of ever being mailed). Temporarily override the
        # registry entry here so this test still exercises emit_cpp_generic's
        # OWN gate in isolation, same pattern as TestAlwaysPresentAndTags's
        # export_tags override tests above.
        original_schema = FAMILY_SCHEMAS["vendor_stock"]
        FAMILY_SCHEMAS["vendor_stock"] = type(original_schema)(
            valid_trigger_kinds=original_schema.valid_trigger_kinds,
            valid_delivery_kinds=original_schema.valid_delivery_kinds,
            generic=True, export_triggers=True, export_tags=True, export_item_delivery=False,
        )
        try:
            cpp = emit_cpp_generic(data)
            self.assertNotIn("ApItemIdToWowItemEntry", cpp)
        finally:
            FAMILY_SCHEMAS["vendor_stock"] = original_schema


class TestItemLevelTags(unittest.TestCase):
    def test_validate_tags_rows_checks_items_when_locations_empty(self) -> None:
        with self.assertRaises(ValidationError):
            generate_content._validate_tags_rows(
                "filler_reward_items", [],
                [{"name": "Filler: Test Item (#1)", "item_id": 8000001, "delivery": {"kind": "mail", "wow_item_entry": 1}}],
                pathlib.Path("test.yaml"),
            )

    def test_validate_tags_rows_passes_with_a_real_item_tag(self) -> None:
        generate_content._validate_tags_rows(
            "filler_reward_items", [],
            [{"name": "Filler: Test Item (#1)", "item_id": 8000001,
              "delivery": {"kind": "mail", "wow_item_entry": 1}, "tags": {"category": ["consumable"]}}],
            pathlib.Path("test.yaml"),
        )

    def test_validate_tags_rows_still_checks_locations_when_present(self) -> None:
        # Unchanged behavior for every existing location-tagged family --
        # confirms this extension doesn't regress quest_rewards/vendor_stock/
        # recipes/trainer_spells' own existing location-keyed tags.
        with self.assertRaises(ValidationError):
            generate_content._validate_tags_rows(
                "recipes",
                [{"name": "Recipe: X (#1)", "location_id": 6000001, "trigger": {"kind": "learn_spell", "spell_id": 1}}],
                [], pathlib.Path("test.yaml"),
            )

    def test_emit_python_generic_emits_item_keyed_tags_when_locations_empty(self) -> None:
        data = {
            "family": "filler_reward_items",
            "locations": [],
            "items": [
                {"name": "Filler: Test Item (#1)", "item_id": 8000001,
                 "delivery": {"kind": "mail", "wow_item_entry": 1}, "tags": {"category": ["consumable"]}},
            ],
        }
        text = emit_python_generic(data)
        self.assertIn('"Filler: Test Item (#1)": {"category": frozenset({"consumable"})}', text)


class TestFillerRewardEffectsEmitter(unittest.TestCase):
    def test_emits_param_by_item_name_and_pair_valued_cpp_map(self) -> None:
        data = {
            "family": "filler_reward_effects",
            "items": [
                {"name": "Filler: Random Buff - Rejuvenation (#774)", "item_id": 8500000, "count": 1,
                 "delivery": {"kind": "filler_effect", "effect": "cast_spell", "param": 774}},
            ],
        }
        py = emit_python(data)
        self.assertIn('"Filler: Random Buff - Rejuvenation (#774)": "cast_spell"', py)
        self.assertIn('"Filler: Random Buff - Rejuvenation (#774)": 774', py)
        cpp = emit_cpp(data)
        self.assertIn("ApItemToEffect", cpp)
        self.assertIn("std::pair<std::string, int32_t>", cpp)
        self.assertIn('{ 8500000, { "cast_spell", 774 } }', cpp)


class TestValidateFillerEffectRows(unittest.TestCase):
    def test_raises_when_filler_effect_delivery_is_missing_param(self) -> None:
        with self.assertRaises(ValidationError):
            generate_content._validate_filler_effect_rows(
                [{"name": "Filler: X", "delivery": {"kind": "filler_effect", "effect": "cast_spell"}}],
                pathlib.Path("test.yaml"),
            )

    def test_raises_when_param_is_not_an_int(self) -> None:
        with self.assertRaises(ValidationError):
            generate_content._validate_filler_effect_rows(
                [{"name": "Filler: X", "delivery": {"kind": "filler_effect", "effect": "cast_spell", "param": "774"}}],
                pathlib.Path("test.yaml"),
            )

    def test_passes_with_a_real_int_param(self) -> None:
        generate_content._validate_filler_effect_rows(
            [{"name": "Filler: X", "delivery": {"kind": "filler_effect", "effect": "cast_spell", "param": 774}}],
            pathlib.Path("test.yaml"),
        )

    def test_ignores_non_filler_effect_delivery_kinds(self) -> None:
        generate_content._validate_filler_effect_rows(
            [{"name": "Gate: X", "delivery": {"kind": "flag", "flag_key": "x", "tier": 1}}],
            pathlib.Path("test.yaml"),
        )


class TestEmitAchievements(unittest.TestCase):
    def _sample_data(self) -> dict:
        return {
            "family": "achievements",
            "locations": [
                {"name": "Achievement: World Explorer (#46)", "location_id": 3600046,
                 "trigger": {"kind": "achievement_complete", "achievement_id": 46, "category_id": 97, "subset": "explorer"}},
                {"name": "Achievement: Duelist (#2092)", "location_id": 3602092,
                 "trigger": {"kind": "achievement_complete", "achievement_id": 2092, "category_id": 165, "subset": "pvp", "extremely_hard": True}},
            ],
            "items": [
                {"name": "Achievement Complete: World Explorer (#46)", "item_id": 3800046,
                 "delivery": {"kind": "realm_state", "effect": "record_achievement", "achievement_id": 46}},
                {"name": "Achievement Complete: Duelist (#2092)", "item_id": 3802092,
                 "delivery": {"kind": "realm_state", "effect": "record_achievement", "achievement_id": 2092}},
            ],
            "constants": {"WORLD_EXPLORER_ACHIEVEMENT_ID": 46},
        }

    def test_emit_python_produces_valid_python_with_expected_exports(self) -> None:
        data = self._sample_data()
        output = emit_python(data)
        compile(output, "<test>", "exec")
        namespace: dict = {}
        exec(output, namespace)
        self.assertEqual(namespace["WORLD_EXPLORER_ACHIEVEMENT_ID"], 46)
        self.assertEqual(namespace["LOCATIONS"]["Achievement: World Explorer (#46)"], 3600046)
        self.assertEqual(namespace["ITEMS"]["Achievement Complete: Duelist (#2092)"], (3802092, 1))
        self.assertEqual(
            namespace["ACHIEVEMENTS_BY_SUBSET"]["pvp"],
            frozenset({"Achievement Complete: Duelist (#2092)"}),
        )
        self.assertEqual(
            namespace["EXTREMELY_HARD_ITEM_NAMES"],
            frozenset({"Achievement Complete: Duelist (#2092)"}),
        )
        self.assertEqual(namespace["WORLD_EXPLORER_LOCATION_NAME"], "Achievement: World Explorer (#46)")
        self.assertEqual(namespace["WORLD_EXPLORER_ITEM_NAME"], "Achievement Complete: World Explorer (#46)")

    def test_emit_python_raises_if_world_explorer_id_has_no_matching_location(self) -> None:
        data = self._sample_data()
        data["constants"]["WORLD_EXPLORER_ACHIEVEMENT_ID"] = 999999
        with self.assertRaises(ValidationError):
            emit_python(data)

    def test_emit_cpp_produces_expected_lookup_tables(self) -> None:
        data = self._sample_data()
        output = emit_cpp(data)
        self.assertIn("namespace Archipelago::Achievements", output)
        self.assertIn("WORLD_EXPLORER_ACHIEVEMENT_ID = 46", output)
        self.assertIn("ACHIEVEMENT_ID_TO_LOCATION_ID_RAW", output)
        self.assertIn("{ 46, 3600046 }", output)
        self.assertIn("AP_ITEM_ID_TO_ACHIEVEMENT_ID_RAW", output)
        self.assertIn("{ 3800046, 46 }", output)

    def test_load_family_rejects_achievement_complete_trigger_missing_achievement_id(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = pathlib.Path(tmp) / "test.yaml"
            path.write_text(textwrap.dedent("""
                family: achievements
                locations:
                  - name: 'Achievement: Bad Row (#1)'
                    location_id: 3600001
                    trigger: {kind: achievement_complete}
                items: []
                constants: {WORLD_EXPLORER_ACHIEVEMENT_ID: 46}
            """), encoding="utf-8")
            with self.assertRaises(ValidationError):
                load_family(path)

    def test_load_family_accepts_a_well_formed_achievements_row(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = pathlib.Path(tmp) / "test.yaml"
            path.write_text(textwrap.dedent("""
                family: achievements
                locations:
                  - name: 'Achievement: World Explorer (#46)'
                    location_id: 3600046
                    trigger: {kind: achievement_complete, achievement_id: 46, category_id: 97, subset: explorer}
                items:
                  - name: 'Achievement Complete: World Explorer (#46)'
                    item_id: 3800046
                    delivery: {kind: realm_state, effect: record_achievement, achievement_id: 46}
                constants: {WORLD_EXPLORER_ACHIEVEMENT_ID: 46}
            """), encoding="utf-8")
            data = load_family(path)  # must not raise
        self.assertEqual(len(data["locations"]), 1)


class TestGameobjectLootTriggerLookup(unittest.TestCase):
    def test_validate_gameobject_loot_rows_accepts_well_formed_data(self) -> None:
        data = {
            "family": "containersanity",
            "locations": [
                # containersanity is export_tags=True (same "never zero tags"
                # invariant _validate_tags_rows enforces for every other
                # export_tags family), so this fixture uses a real tag shape
                # (matching the actual extracted `expansion` dimension) --
                # not an empty {} placeholder, which would fail that
                # pre-existing invariant on its own, independent of anything
                # gameobject_loot-specific.
                {"name": "Container: A (#1/2)", "location_id": 8000000,
                 "trigger": {"kind": "gameobject_loot", "loot_id": 1, "item_entry": 2},
                 "tags": {"expansion": ["vanilla"]}},
            ],
            "items": [{"name": "Container Item: A (#1/2)", "item_id": 8500000,
                       "delivery": {"kind": "mail", "wow_item_entry": 2}}],
        }
        validate_family(data)  # must not raise

    def test_duplicate_loot_id_item_entry_pair_is_a_hard_validation_error(self) -> None:
        # gameobject_loot_template's real PK is (Entry, Item) -- a real
        # extraction collision on that key would mean a genuine extraction
        # bug (unlike vendor_purchase's soft dedup, which exists because
        # npc_vendor legitimately allows repeated (npc,item) pairs via
        # ExtendedCost variations). This must hard-fail, same as quest_reward.
        data = {
            "family": "containersanity",
            "locations": [
                {"name": "Container: A (#1/2)", "location_id": 8000000,
                 "trigger": {"kind": "gameobject_loot", "loot_id": 1, "item_entry": 2},
                 "tags": {"expansion": ["vanilla"]}},
                {"name": "Container: B (#1/2)", "location_id": 8000001,
                 "trigger": {"kind": "gameobject_loot", "loot_id": 1, "item_entry": 2},
                 "tags": {"expansion": ["vanilla"]}},
            ],
            "items": [
                {"name": "Container Item: A (#1/2)", "item_id": 8500000, "delivery": {"kind": "mail", "wow_item_entry": 2}},
                {"name": "Container Item: B (#1/2)", "item_id": 8500001, "delivery": {"kind": "mail", "wow_item_entry": 2}},
            ],
        }
        with self.assertRaises(ValidationError):
            validate_family(data)

    def test_emit_cpp_trigger_lookup_gameobject_loot_shape(self) -> None:
        data = {
            "family": "containersanity",
            "locations": [
                {"name": "Container: A (#1/2)", "location_id": 8000000,
                 "trigger": {"kind": "gameobject_loot", "loot_id": 1, "item_entry": 2}, "tags": {}},
            ],
        }
        lines = _emit_cpp_trigger_lookup(data)
        joined = "\n".join(lines)
        self.assertIn("GAMEOBJECT_LOOT_SLOT_TO_LOCATION_ID_RAW", joined)
        self.assertIn("{ { 1, 2 }, 8000000 }", joined)
        self.assertIn("std::map<std::pair<uint32_t, uint32_t>, int64_t> GAMEOBJECT_LOOT_SLOT_TO_LOCATION_ID", joined)


if __name__ == "__main__":
    unittest.main()
