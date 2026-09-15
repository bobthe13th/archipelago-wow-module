import unittest

from gathersanity_node_names import GATHERING_NODE_NAMES


class TestGatheringNodeNames(unittest.TestCase):
    def test_contains_well_known_vanilla_mining_and_herb_nodes(self) -> None:
        for name in ("Copper Vein", "Silverleaf", "Peacebloom", "Iron Deposit", "Truesilver Deposit"):
            self.assertIn(name, GATHERING_NODE_NAMES)

    def test_excludes_quest_pickup_objects_that_merely_sound_like_nodes(self) -> None:
        # Verified live during this plan's research: these are real
        # single-item quest pickups (a chest named after the exact single
        # item it always drops -- the real-node/quest-pickup discriminator
        # this list's curation used), not skill-gated profession nodes.
        # Node-shaped chests that are ACTUALLY like this in real data:
        # Bloodthistle (drops only "Bloodthistle"), Ore Cart (drops only
        # "Strange Ore" via its own separate loot_id), Composite Ore,
        # Ancient Gem Vein -- none of these are in GATHERING_NODE_NAMES.
        for name in ("Bloodthistle", "Ore Cart", "Composite Ore", "Ancient Gem Vein", "Mossy Footlocker"):
            self.assertNotIn(name, GATHERING_NODE_NAMES)

    def test_is_not_empty_and_has_no_duplicates(self) -> None:
        names = list(GATHERING_NODE_NAMES)
        self.assertEqual(len(names), len(set(names)))
        self.assertGreater(len(names), 50)


if __name__ == "__main__":
    unittest.main()
