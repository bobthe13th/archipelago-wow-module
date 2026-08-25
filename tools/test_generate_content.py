import pathlib
import tempfile
import textwrap
import unittest

from generate_content import load_family, emit_python, emit_cpp, emit_python_generic, emit_cpp_generic, ValidationError, FAMILY_SCHEMAS


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

    def test_valid_quests_family_loads_and_emits_python(self) -> None:
        with tempfile.TemporaryDirectory() as tmp:
            path = self._write(tmp, """
                family: quests
                locations:
                  - name: A Threat Within
                    location_id: 700000
                    trigger: {kind: quest, quest_id: 783}
                items:
                  - name: Worn Shortsword
                    item_id: 800000
                    count: 1
                    delivery: {kind: mail, wow_item_entry: 25}
            """)
            data = load_family(path)
            self.assertEqual(data["family"], "quests")
            text = emit_python(data)
            self.assertIn('"A Threat Within": 700000', text)
            self.assertIn('"Worn Shortsword": 800000', text)
            self.assertIn("GENERATED FILE", text)


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
    def test_quests_family_emits_cpp_maps(self) -> None:
        data = {
            "family": "quests",
            "constants": {},
            "locations": [
                {"name": "A Threat Within", "location_id": 700000,
                 "trigger": {"kind": "quest", "quest_id": 783}},
            ],
            "items": [
                {"name": "Worn Shortsword", "item_id": 800000, "count": 1,
                 "delivery": {"kind": "mail", "wow_item_entry": 25}},
            ],
        }
        text = emit_cpp(data)
        self.assertIn("QuestIdToLocationId", text)
        self.assertIn("{ 783, 700000 }, // A Threat Within", text)
        self.assertIn("LocationIdToQuestId", text)
        self.assertIn("{ 700000, 783 }, // A Threat Within", text)
        self.assertIn("ApItemIdToWowItemEntry", text)
        self.assertIn('{ 800000, 25 }, // "Worn Shortsword"', text)

    def test_core_loop_family_emits_cpp_constants_and_maps(self) -> None:
        data = {
            "family": "core_loop",
            "constants": {"STARTING_LEVEL_CAP": 10, "LEVEL_CAP_STEP": 5, "SPRINT_GOAL_LEVEL": 60},
            "locations": [
                {"name": "Reach Level 5", "location_id": 710000,
                 "trigger": {"kind": "level_milestone", "level": 5}},
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
        self.assertIn("{ 5, 710000 }", text)
        self.assertIn('{ INSTANCE_KEY_RAGEFIRE_CHASM, 720000 }', text)


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
    ever grows past a safe margin. 2,000 is comfortable headroom over the
    current largest legacy family (collections, 264 rows) and stays well
    below the real, empirically-confirmed crash point (~37,739 rows)."""

    LEGACY_FAMILY_ROW_LIMIT = 2000

    def test_no_legacy_family_exceeds_the_safe_row_count(self) -> None:
        content_dir = pathlib.Path(__file__).parent.parent / "content"
        for family, schema in FAMILY_SCHEMAS.items():
            if schema.generic:
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


if __name__ == "__main__":
    unittest.main()
