// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoCollectionScript.cpp
//
// Task 27 (Collector, design spec Sec5.4): "learned a new mount/companion"
// hook, researched fresh against this checkout. Mounts and companion pets
// are both learned as SPELLS (using the item, e.g. "Swift Brown Steed",
// casts a SPELL_GENERIC_LEARN wrapper that in turn teaches the real
// summon-mount/summon-companion spell -- see collections.yaml's own header
// comment for the full research trail, including a real mistake caught and
// fixed before shipping: item_template's spellid_1 is a shared generic
// wrapper spell, NOT the real taught spell). The real completion event is
// PLAYERHOOK_ON_LEARN_SPELL / PlayerScript::OnPlayerLearnSpell(Player*,
// uint32 spellID), which fires for ANY newly learned spell, not just
// mounts/pets -- this script simply ignores anything whose spellID isn't
// one of the 264 curated mount/pet spells, the same "no match = no-op"
// discipline every other lookup-table hook in this module already uses.
#include "Player.h"
#include "ScriptMgr.h"
#include "ArchipelagoCollectionsContentTable.h"
#include "ArchipelagoManager.h"

class ArchipelagoCollectionScript : public PlayerScript
{
public:
    ArchipelagoCollectionScript() : PlayerScript("ArchipelagoCollectionScript", { PLAYERHOOK_ON_LEARN_SPELL }) { }

    void OnPlayerLearnSpell(Player* /*player*/, uint32 spellID) override
    {
        auto it = Archipelago::Collections::SpellIdToLocationId.find(spellID);
        if (it != Archipelago::Collections::SpellIdToLocationId.end())
            sArchipelagoMgr->SendLocationChecks({ it->second });
    }
};

void AddArchipelagoCollectionScripts()
{
    new ArchipelagoCollectionScript();
}
