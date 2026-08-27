// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoLearnSpellScript.cpp
//
// M4.9 (design spec Sec2): OnPlayerLearnSpell(Player*, uint32 spellID)
// fires for EVERY spell a player learns, whether from using a recipe item
// (Learned Recipes family) or training from an NPC (Trainer Spells &
// Abilities family) -- there is no separate "recipe learned" vs "trainer
// spell learned" event. This checkout already has a real, working
// precedent for exactly this hook shape in production:
// ArchipelagoCollectionScript.cpp's OnPlayerLearnSpell (mounts/pets, Task
// 27) -- AzerothCore's ScriptMgr dispatches PLAYERHOOK_ON_LEARN_SPELL to
// every registered PlayerScript that declares it, so this script coexists
// safely alongside that one (and any future one), each doing its own
// independent lookup. One COMBINED SpellIdToLocationId map is built once,
// merging both generated content tables' own SPELL_ID_TO_LOCATION_ID maps
// -- extract_trainer_spells.py already guarantees the two source tables
// never share a spell_id (cross-family collisions excluded at extraction
// time, see this milestone's plan, Global Constraints), so a plain merge
// can never silently drop or overwrite a real entry.
#include "Player.h"
#include "ScriptMgr.h"
#include "ArchipelagoRecipesContentTable.h"
#include "ArchipelagoTrainerSpellsContentTable.h"
#include "ArchipelagoManager.h"

namespace
{
    std::unordered_map<uint32_t, int64_t> BuildCombinedSpellIdToLocationId()
    {
        std::unordered_map<uint32_t, int64_t> result;
        for (auto const& row : ArchipelagoRECIPESContent::SPELL_ID_TO_LOCATION_ID)
            result.emplace(row.first, row.second);
        for (auto const& row : ArchipelagoTRAINER_SPELLSContent::SPELL_ID_TO_LOCATION_ID)
            result.emplace(row.first, row.second);
        return result;
    }

    std::unordered_map<uint32_t, int64_t> const CombinedSpellIdToLocationId = BuildCombinedSpellIdToLocationId();
}

class ArchipelagoLearnSpellScript : public PlayerScript
{
public:
    ArchipelagoLearnSpellScript() : PlayerScript("ArchipelagoLearnSpellScript", { PLAYERHOOK_ON_LEARN_SPELL }) { }

    void OnPlayerLearnSpell(Player* /*player*/, uint32 spellID) override
    {
        auto it = CombinedSpellIdToLocationId.find(spellID);
        if (it != CombinedSpellIdToLocationId.end())
            sArchipelagoMgr->SendLocationChecks({ it->second });
    }
};

void AddArchipelagoLearnSpellScripts()
{
    new ArchipelagoLearnSpellScript();
}
