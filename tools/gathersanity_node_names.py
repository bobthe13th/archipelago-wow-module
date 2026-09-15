#!/usr/bin/env python3
"""Curated allowlist of real gameobject_template.name values (M4.10.2)
that are genuine, skill-gated Herbalism/Mining gathering nodes in this
checkout -- NOT a keyword/regex filter. A live broad keyword scan (Vein/
Deposit/Ore/bloom/leaf/root/thorn/weed/moss/lotus/mushroom/berry/...)
during this plan's research returned ~140 distinct chest-type
(gameobject_template.type=3) names. Every name below was individually
verified against BOTH of two real, live-DB signals before inclusion: (1)
its backing gameobject_loot_template row(s) show a genuine multi-item (or
well-known canonical single-item, e.g. Peacebloom's low-tier variant)
profession loot shape, not a single self-named item; and (2) it has a
real, non-trivial number of actual `gameobject` spawns in the world (20+
in every included case) -- a one-off quest prop typically has only a
handful of real placements, while a genuine node species is placed
world-wide. A name whose loot_id is shared with many differently-named,
unrelated templates (e.g. "Fissure Plant", whose loot_id backs 238 real
generic-loot chest templates) is excluded regardless of how node-like its
own name sounds -- MIN(gt.name) grouping would otherwise misclassify all
238 unrelated rows. This is the actual extraction filter, not a starting
point to refine later -- **real verified exclusion count (this checkout,
queried live against extract_containersanity.py's own MIN(gt.name)-grouped
query shape, not a naive per-template-name check): 284 rows** (an earlier
brainstorming-stage estimate of 291, and a first implementation attempt's
229, are both superseded by this figure -- see this plan's Global
Constraints for the correction history).

Shared between extract_containersanity.py (EXCLUDES these names --
regression fix, M4.10.2 Task 1) and extract_gathersanity.py (INCLUDES
these names -- Task 2) so the two extraction scripts can never disagree
on which chest-type templates are gathering nodes."""
from __future__ import annotations

GATHERING_NODE_NAMES: frozenset[str] = frozenset({
    # Mining -- ore veins/deposits, vanilla through WotLK
    "Copper Vein", "Tin Vein", "Silver Vein", "Iron Deposit", "Gold Vein",
    "Mithril Deposit", "Truesilver Deposit", "Small Thorium Vein",
    "Rich Thorium Vein", "Dark Iron Deposit",
    "Ooze Covered Silver Vein", "Ooze Covered Gold Vein",
    "Ooze Covered Iron Deposit", "Ooze Covered Mithril Deposit",
    "Ooze Covered Thorium Vein", "Ooze Covered Truesilver Deposit",
    "Ooze Covered Rich Thorium Vein",
    "Fel Iron Deposit", "Adamantite Deposit", "Rich Adamantite Deposit",
    "Khorium Vein",
    "Cobalt Deposit", "Rich Cobalt Deposit", "Saronite Deposit",
    "Rich Saronite Deposit", "Pure Saronite Deposit", "Titanium Vein",
    "Lesser Bloodstone Deposit", "Nethercite Deposit", "Hakkari Thorium Vein",
    "Incendicite Mineral Vein", "Indurium Mineral Vein",
    # Herbalism -- herbs, vanilla through WotLK
    "Peacebloom", "Silverleaf", "Mageroyal", "Briarthorn", "Bruiseweed",
    "Wild Steelbloom", "Grave Moss", "Liferoot", "Fadeleaf", "Goldthorn",
    "Khadgar's Whisker", "Firebloom", "Purple Lotus", "Sungrass",
    "Blindweed", "Golden Sansam", "Black Lotus",
    "Felweed", "Dreaming Glory", "Netherbloom", "Ancient Lichen",
    "Goldclover", "Frost Lotus", "Icethorn", "Lichbloom",
    "Talandra's Rose", "Tiger Lily", "Frozen Herb",
    "Adder's Tongue", "Arthas' Tears", "Dreamfoil", "Earthroot",
    "Firethorn", "Flame Cap", "Ghost Mushroom", "Gromsblood", "Icecap",
    "Kingsblood", "Mana Thistle", "Mountain Silversage", "Netherdust Bush",
    "Nightmare Vine", "Ragveil", "Sanguine Hibiscus", "Stranglekelp",
    "Terocone", "Wintersbite",
})
