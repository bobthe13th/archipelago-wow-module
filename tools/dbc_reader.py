"""Generic WDBC binary container reader, shared by every M4.10 family that
reads a raw client DBC file directly because the MySQL DBC-mirror table for
that file is empty or missing the fields needed (Repsanity's Faction.dbc,
Craftsanity's Spell.dbc). This module knows only the generic WDBC container
format (4-byte magic, 4x uint32 header, fixed-size records, trailing string
block) -- it has no opinion on what any particular file's fields mean; each
family's own parser (parse_faction_dbc.py, parse_spell_dbc.py) layers real
field semantics on top."""
from __future__ import annotations

import struct
from dataclasses import dataclass

_HEADER_SIZE = 20  # 4-byte magic + 4x little-endian uint32


@dataclass(frozen=True)
class DbcFile:
    record_count: int
    field_count: int
    record_size: int
    _data: bytes
    _records_start: int
    _string_block: bytes

    def record_bytes(self, index: int) -> bytes:
        """Raw bytes of one record -- use this plus your own
        struct.unpack_from when a field is genuinely signed or float, not
        just an id/enum/string-offset."""
        offset = self._records_start + index * self.record_size
        return self._data[offset:offset + self.record_size]

    def record_fields_u32(self, index: int) -> tuple[int, ...]:
        """Every field of one record reinterpreted as unsigned uint32 --
        correct for ids, enums, and string-block offsets (the common case
        for most fields in most DBC files); NOT correct for a field that's
        actually signed (e.g. a negative reputation value) or a float --
        use record_bytes() for those instead."""
        return struct.unpack_from("<" + "I" * self.field_count, self.record_bytes(index))

    def read_string(self, string_block_offset: int) -> str:
        if string_block_offset == 0:
            return ""
        end = self._string_block.index(b"\x00", string_block_offset)
        return self._string_block[string_block_offset:end].decode("utf-8", errors="replace")


def load_dbc(path) -> DbcFile:
    with open(path, "rb") as handle:
        data = handle.read()

    magic = data[0:4]
    if magic != b"WDBC":
        raise ValueError(f"{path}: not a WDBC file (magic={magic!r})")

    record_count, field_count, record_size, string_block_size = struct.unpack_from("<4I", data, 4)
    if field_count * 4 != record_size:
        raise ValueError(
            f"{path}: unexpected record layout (field_count={field_count}, "
            f"record_size={record_size}) -- this file's shape no longer matches "
            f"this reader's assumption that every field is 4 bytes wide"
        )

    records_start = _HEADER_SIZE
    string_block_start = _HEADER_SIZE + record_count * record_size
    string_block = data[string_block_start:string_block_start + string_block_size]

    return DbcFile(
        record_count=record_count,
        field_count=field_count,
        record_size=record_size,
        _data=data,
        _records_start=records_start,
        _string_block=string_block,
    )
