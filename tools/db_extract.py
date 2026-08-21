#!/usr/bin/env python3
"""Shared helpers for the content-extraction scripts in Group 1-4 of
docs/superpowers/plans/2026-08-21-archipelago-wow-m4.5-content-compiler-breadth.md.
Build-time only -- never imported by the apworld itself (see that plan's
Global Constraints)."""
from __future__ import annotations

import os
import pathlib
import re
import subprocess

DEFAULT_RULES_PATH = pathlib.Path(__file__).parent / "exclusion_rules.yaml"

_MYSQL_EXE = os.environ.get(
    "ARCHIPELAGO_WOW_MYSQL_EXE",
    "C:/Program Files/MySQL/MySQL Server 8.4/bin/mysql.exe",
)
_MYSQL_HOST = os.environ.get("ARCHIPELAGO_WOW_DB_HOST", "127.0.0.1")
_MYSQL_PORT = os.environ.get("ARCHIPELAGO_WOW_DB_PORT", "3306")
_MYSQL_USER = os.environ.get("ARCHIPELAGO_WOW_DB_USER", "acore")
_MYSQL_PASSWORD = os.environ.get("ARCHIPELAGO_WOW_DB_PASSWORD", "acore")
_MYSQL_DB = os.environ.get("ARCHIPELAGO_WOW_DB_NAME", "acore_world")


def run_query(sql: str) -> list[tuple[str, ...]]:
    """Run one SQL statement against acore_world via the mysql.exe CLI
    (matching this project's existing MySQLExecutable-via-CLI convention --
    see docs/m4-manual-verification-checklist.md Step 3) and return its
    tab-separated rows as tuples of strings. Raises RuntimeError with the
    real mysql.exe stderr on any failure -- never silently returns []."""
    result = subprocess.run(
        [
            _MYSQL_EXE,
            f"-h{_MYSQL_HOST}",
            f"-P{_MYSQL_PORT}",
            f"-u{_MYSQL_USER}",
            f"-p{_MYSQL_PASSWORD}",
            "-Nse",
            sql,
            _MYSQL_DB,
        ],
        capture_output=True,
        text=True,
    )
    if result.returncode != 0:
        raise RuntimeError(f"mysql.exe query failed: {result.stderr.strip()}\nSQL: {sql}")
    lines = [line for line in result.stdout.splitlines() if line != ""]
    return [tuple(line.split("\t")) for line in lines]


def load_exclusion_rules(path: pathlib.Path = DEFAULT_RULES_PATH) -> dict:
    import yaml

    with open(path, "r", encoding="utf-8") as f:
        return yaml.safe_load(f)


def is_denylisted(name: str, rules: dict) -> bool:
    return any(re.search(pattern, name) for pattern in rules["name_denylist"])
