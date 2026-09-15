def _install_common_fixtures(monkeypatch, extract_containersanity, db_extract, fake_run_query):
    """Shared monkeypatching for every extract() test below.

    parse_pool_gameobject_memberships (db_extract.py) issues its own
    pool_gameobject query through db_extract's OWN run_query name binding,
    not through extract_containersanity's imported copy of the name --
    patching only the latter leaves that call hitting the real DB (same
    module-boundary distinction test_db_extract.py's own
    test_parse_pool_gameobject_memberships_shape already has to account
    for by patching db_extract.run_query directly).
    """
    monkeypatch.setattr(extract_containersanity, "run_query", fake_run_query)
    monkeypatch.setattr(db_extract, "run_query", fake_run_query)
    monkeypatch.setattr(extract_containersanity, "parse_world_map_areas",
                        lambda: [(1, 17, 0.0, 100.0, 0.0, 100.0)])
    monkeypatch.setattr(extract_containersanity, "parse_area_zone_ids", lambda: {17: 17})
    monkeypatch.setattr(extract_containersanity, "parse_area_names", lambda: {17: "barrens"})
    monkeypatch.setattr(extract_containersanity, "parse_map_instance_types", lambda: {1: 0})
    monkeypatch.setattr(extract_containersanity, "parse_map_names", lambda: {1: "kalimdor"})
    # Map 1 (Kalimdor) is real vanilla content in the real Map.dbc -- this
    # fixture map_expansions dict makes that explicit rather than relying on
    # _expansion_tags_for_zone_key's own ["vanilla"]-for-unknown-map fallback,
    # so these tests still catch a real regression if that fallback path
    # were ever hit by mistake.
    monkeypatch.setattr(extract_containersanity, "parse_map_expansions", lambda: {1: "vanilla"})


def test_extract_caps_locations_per_zone_and_emits_no_items(monkeypatch):
    import db_extract
    import extract_containersanity

    def fake_run_query(sql):
        if "pool_gameobject" in sql:
            return []  # no pools in this fixture -- every spawn is standalone
        if "FROM gameobject g" in sql:
            # 3 standalone chest spawns, all resolving to "barrens".
            # Columns: guid, map, position_x, position_y, gameobject_template.name.
            return [
                ("1", "1", "10.0", "10.0", "Battered Chest"),
                ("2", "1", "11.0", "11.0", "Mossy Footlocker"),
                ("3", "1", "12.0", "12.0", "Solid Chest"),
            ]
        return []

    _install_common_fixtures(monkeypatch, extract_containersanity, db_extract, fake_run_query)
    monkeypatch.setattr(extract_containersanity, "load_exclusion_rules", lambda: {"name_denylist": []})
    monkeypatch.setattr(extract_containersanity, "_MAX_CHESTS_PER_ZONE", 2)

    data = extract_containersanity.extract()
    assert data["items"] == []
    barrens_locs = [loc for loc in data["locations"] if loc["trigger"]["zone_key"] == "barrens"]
    assert len(barrens_locs) == 2  # capped at 2 even though 3 real units exist
    assert sorted(loc["trigger"]["ordinal"] for loc in barrens_locs) == [1, 2]
    # All 3 fixture spawns (guids 1, 2, 3) sit inside the single "barrens"
    # area box, independent of the per-zone cap above -- the runtime lookup
    # covers every real spawn, not just the ones that made the capped pool.
    assert data["zone_pool_spawn_zones"] == {1: ["barrens"], 2: ["barrens"], 3: ["barrens"]}
    # Restored per-zone expansion tagging (M4.11.4.1 fix): every real chest
    # spawn resolving to "barrens" sits on map 1, which the fixture
    # map_expansions dict above marks "vanilla" -- so every "barrens"
    # location's own tags["expansion"] must be exactly ["vanilla"], not
    # missing (the regression this fix corrects) and not some other value.
    for loc in barrens_locs:
        assert loc["tags"]["expansion"] == ["vanilla"]


def test_real_gathering_node_spawn_is_excluded_even_though_it_is_type_3(monkeypatch):
    """M4.11.4.1 final review fix (C3), restoring M4.10.2 Task 1's separation.

    Real, live-verified: Copper Vein IS gameobject_template.type=3 -- the
    exact same type extract_containersanity.py's own spawn query matches --
    so it can only be excluded by NAME, never by type. Without this filter a
    player mining a Copper Vein would credit a Containersanity "Chest N"
    check on top of that node's own real Gathersanity credit, and the node's
    spawn would also inflate the zone's unit count (and therefore its
    per-zone chest cap). gathersanity_node_names.py's docstring is the
    shared contract: this script EXCLUDES those names, extract_gathersanity.py
    INCLUDES them, so the two families' spawn populations stay disjoint.
    """
    import db_extract
    import extract_containersanity

    def fake_run_query(sql):
        if "pool_gameobject" in sql:
            return []
        if "FROM gameobject g" in sql:
            return [
                ("1", "1", "10.0", "10.0", "Copper Vein"),       # real gathering node -- excluded
                ("2", "1", "11.0", "11.0", "Mossy Footlocker"),  # real chest -- kept
                ("3", "1", "12.0", "12.0", "Peacebloom"),        # real gathering node -- excluded
            ]
        return []

    _install_common_fixtures(monkeypatch, extract_containersanity, db_extract, fake_run_query)
    monkeypatch.setattr(extract_containersanity, "load_exclusion_rules", lambda: {"name_denylist": []})

    data = extract_containersanity.extract()
    # Only the one real chest spawn survives, so "barrens" has exactly one
    # real unit and therefore exactly one abstract location.
    barrens_locs = [loc for loc in data["locations"] if loc["trigger"]["zone_key"] == "barrens"]
    assert len(barrens_locs) == 1
    assert barrens_locs[0]["trigger"]["ordinal"] == 1
    # And the excluded nodes must not be reachable from the runtime lookup
    # either -- guids 1 and 3 credit nothing at all in Containersanity.
    assert data["zone_pool_spawn_zones"] == {2: ["barrens"]}


def test_denylisted_spawn_name_is_excluded(monkeypatch):
    """The second exclusion the zone-pool rewrite dropped: exclusion_rules.yaml's
    own name_denylist, applied through db_extract.is_denylisted (a regex search,
    not an exact match), exactly as every other family's extraction applies it."""
    import db_extract
    import extract_containersanity

    def fake_run_query(sql):
        if "pool_gameobject" in sql:
            return []
        if "FROM gameobject g" in sql:
            return [
                ("1", "1", "10.0", "10.0", "[PH] Unused Test Chest"),  # denylisted
                ("2", "1", "11.0", "11.0", "Mossy Footlocker"),        # kept
            ]
        return []

    _install_common_fixtures(monkeypatch, extract_containersanity, db_extract, fake_run_query)
    monkeypatch.setattr(extract_containersanity, "load_exclusion_rules",
                        lambda: {"name_denylist": [r"\[PH\]"]})

    data = extract_containersanity.extract()
    barrens_locs = [loc for loc in data["locations"] if loc["trigger"]["zone_key"] == "barrens"]
    assert len(barrens_locs) == 1
    assert data["zone_pool_spawn_zones"] == {2: ["barrens"]}


def test_expansion_tags_for_zone_key_unions_real_spawn_maps(monkeypatch):
    """Direct unit test of _expansion_tags_for_zone_key -- the new helper
    this fix adds, mirroring extract_enemysanity.py's own
    _expansion_tags_for_creature_entry precedent. A zone_key whose real
    spawns span two different real expansions (map 1=vanilla, map
    571=wotlk, per parse_map_expansions' own real Northrend=571 example)
    must union to both, sorted."""
    import extract_containersanity

    zone_to_maps = {"crossroads_zone": {1, 571}}
    map_expansions = {1: "vanilla", 571: "wotlk"}
    assert extract_containersanity._expansion_tags_for_zone_key(
        "crossroads_zone", zone_to_maps, map_expansions
    ) == ["vanilla", "wotlk"]
    # A zone_key with no real spawn map on record falls back to ["vanilla"]
    # -- same convention extract_enemysanity.py's own fallback established.
    assert extract_containersanity._expansion_tags_for_zone_key(
        "unknown_zone", zone_to_maps, map_expansions
    ) == ["vanilla"]
