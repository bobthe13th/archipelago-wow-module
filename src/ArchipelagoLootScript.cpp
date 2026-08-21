// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoLootScript.cpp
//
// Task 26 (Fishing Quest, design spec Sec5.4): "on successful fishing catch"
// hook, researched fresh against this checkout rather than assumed --
// AzerothCore has no fishing-specific ScriptMgr hook at all. The real event
// is PLAYERHOOK_ON_LOOT_ITEM / PlayerScript::OnPlayerLootItem(Player*,
// Item*, uint32 count, ObjectGuid lootguid), dispatched from
// Player::StoreLootItem (Player.cpp:13919) -- called whenever a player
// loots a single item out of ANY loot window (creature corpse, chest,
// fishing bobber, fishing hole GameObject). Fishing catches go through this
// exact same generic loot pipeline (LootTemplates_Fishing populates a Loot
// object no differently from a creature's loot table), so there is no
// separate "fishing" event to hook -- this hook fires for every kind of
// loot, and this script simply ignores anything whose resulting item's
// entry isn't one of fish.yaml's 46 curated species (Archipelago::Fish::
// ItemEntryToLocationId), the same "no match = no-op" discipline every
// other lookup-table hook in this module already uses.
#include "Item.h"
#include "Player.h"
#include "ScriptMgr.h"
#include "ArchipelagoFishContentTable.h"
#include "ArchipelagoManager.h"

class ArchipelagoLootScript : public PlayerScript
{
public:
    ArchipelagoLootScript() : PlayerScript("ArchipelagoLootScript", { PLAYERHOOK_ON_LOOT_ITEM }) { }

    void OnPlayerLootItem(Player* /*player*/, Item* item, uint32 /*count*/, ObjectGuid /*lootguid*/) override
    {
        auto it = Archipelago::Fish::ItemEntryToLocationId.find(item->GetEntry());
        if (it != Archipelago::Fish::ItemEntryToLocationId.end())
            sArchipelagoMgr->SendLocationChecks({ it->second });
    }
};

void AddArchipelagoLootScripts()
{
    new ArchipelagoLootScript();
}
