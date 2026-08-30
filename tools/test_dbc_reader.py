import os
import struct
import unittest

from dbc_reader import load_dbc

_FACTION_DBC_PATH = os.path.join(
    os.path.dirname(__file__), "..", "..", "..", "azerothcore-wotlk", "var", "extractors", "dbc", "Faction.dbc"
)


class TestLoadDbc(unittest.TestCase):
    def test_parses_real_faction_dbc_header(self) -> None:
        # Real header values confirmed live against this checkout's actual
        # Faction.dbc during planning (see this milestone's Global
        # Constraints): 401 records, 57 fields/record, 228 bytes/record.
        dbc = load_dbc(_FACTION_DBC_PATH)
        self.assertEqual(dbc.record_count, 401)
        self.assertEqual(dbc.field_count, 57)
        self.assertEqual(dbc.record_size, 228)

    def test_record_fields_u32_matches_manual_unpack_of_the_same_bytes(self) -> None:
        dbc = load_dbc(_FACTION_DBC_PATH)
        raw = dbc.record_bytes(0)
        expected = struct.unpack_from("<I", raw, 0)[0]
        self.assertEqual(dbc.record_fields_u32(0)[0], expected)

    def test_read_string_returns_a_real_faction_name(self) -> None:
        dbc = load_dbc(_FACTION_DBC_PATH)
        # Faction id 72 is Stormwind (field 0 of record 0's family varies by
        # row order, so scan for the real id rather than assuming index 0).
        for i in range(dbc.record_count):
            fields = dbc.record_fields_u32(i)
            if fields[0] == 72:
                name_offset = fields[23]
                self.assertEqual(dbc.read_string(name_offset), "Stormwind")
                break
        else:
            self.fail("faction id 72 (Stormwind) not found in real Faction.dbc")

    def test_read_string_zero_offset_is_empty(self) -> None:
        dbc = load_dbc(_FACTION_DBC_PATH)
        self.assertEqual(dbc.read_string(0), "")

    def test_bad_magic_raises(self) -> None:
        import tempfile
        with tempfile.NamedTemporaryFile(suffix=".dbc", delete=False) as f:
            f.write(b"NOPE" + b"\x00" * 16)
            path = f.name
        with self.assertRaises(ValueError):
            load_dbc(path)


if __name__ == "__main__":
    unittest.main()
