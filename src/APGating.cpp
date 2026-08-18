// azerothcore-wotlk/modules/archipelago_wow/src/APGating.cpp
#include "APGating.h"

#include "ArchipelagoRealmState.h"
#include "Chat.h"
#include "ItemTemplate.h"
#include "Player.h"
#include "ScriptMgr.h"
#include "Spell.h"
#include "SpellInfo.h"
#include "SpellMgr.h"

namespace Archipelago::Gating
{
    bool IsRidingTierUnlocked(uint32_t requiredTier)
    {
        return sArchipelagoRealmState->GetFlagTier("riding") >= requiredTier;
    }
}

class ArchipelagoRidingGateScript : public PlayerScript
{
public:
    ArchipelagoRidingGateScript() : PlayerScript("ArchipelagoRidingGateScript", { PLAYERHOOK_CAN_USE_ITEM }) { }

    bool OnPlayerCanUseItem(Player* player, ItemTemplate const* proto, InventoryResult& result) override
    {
        if (!sArchipelagoRealmState->IsEnabled())
            return true;

        if (!IsMountItem(proto))
            return true;

        if (Archipelago::Gating::IsRidingTierUnlocked(Archipelago::Gating::RIDING_TIER_APPRENTICE))
            return true;

        result = EQUIP_ERR_CANT_DO_RIGHT_NOW;
        ChatHandler(player->GetSession()).PSendSysMessage("Archipelago: You need Progressive Riding to mount up.");
        return false;
    }

private:
    static bool IsMountItem(ItemTemplate const* proto)
    {
        for (uint8 i = 0; i < MAX_ITEM_PROTO_SPELLS; ++i)
        {
            if (proto->Spells[i].SpellId)
            {
                if (SpellInfo const* spellInfo = sSpellMgr->GetSpellInfo(proto->Spells[i].SpellId))
                {
                    if (spellInfo->HasAura(SPELL_AURA_MOUNTED))
                        return true;
                }
            }
        }
        return false;
    }
};

class ArchipelagoMountSpellScript : public AllSpellScript
{
public:
    ArchipelagoMountSpellScript() : AllSpellScript("ArchipelagoMountSpellScript", { ALLSPELLHOOK_ON_SPELL_CHECK_CAST }) { }

    void OnSpellCheckCast(Spell* spell, bool /*strict*/, SpellCastResult& res) override
    {
        if (!sArchipelagoRealmState->IsEnabled())
            return;

        SpellInfo const* spellInfo = spell->GetSpellInfo();
        if (!spellInfo || !spellInfo->HasAura(SPELL_AURA_MOUNTED))
            return;

        if (Archipelago::Gating::IsRidingTierUnlocked(Archipelago::Gating::RIDING_TIER_APPRENTICE))
            return;

        res = SPELL_FAILED_NOT_HERE;
        if (Unit* caster = spell->GetCaster())
        {
            if (Player* player = caster->ToPlayer())
                ChatHandler(player->GetSession()).PSendSysMessage("Archipelago: You need Progressive Riding to mount up.");
        }
    }
};

void AddArchipelagoGatingScripts()
{
    new ArchipelagoRidingGateScript();
    new ArchipelagoMountSpellScript();
}
