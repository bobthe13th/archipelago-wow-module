// azerothcore-wotlk/modules/archipelago_wow/src/APFillerRewardEffects.cpp
#include "APFillerRewardEffects.h"
#include "APFillerRewardEffectsPure.h"

#include "DBCStores.h"
#include "Log.h"
#include "Player.h"

namespace
{
    // cast_spell and portable_service both resolve to a plain self-cast of
    // a real, verified WoW spell -- M4.9.6 dropped portable_service's old
    // summoned-generic-NPC workaround since all 4 real portable-service
    // items (Jeeves/Field Repair Bot 74A/Field Repair Bot 110G/Remote Mail
    // Terminal) have their own genuine on-use spell (item_template.
    // spellid_1, verified live during planning).
    void ApplySelfCastSpell(Player* target, int32_t spellId)
    {
        target->CastSpell(target, static_cast<uint32_t>(spellId), true);
    }

    void ApplyGoldReward(Player* target, int32_t copper)
    {
        // param is already in copper (Player::ModifyMoney's real unit,
        // Player.h:1632) -- no gold->copper conversion needed, unlike the
        // pre-M4.9.6 single-urand()-pick version.
        target->ModifyMoney(copper);
    }

    void ApplyXpReward(Player* target, int32_t percent)
    {
        uint32_t curXp = target->GetUInt32Value(PLAYER_XP);
        uint32_t nextLvlXp = target->GetUInt32Value(PLAYER_NEXT_LEVEL_XP);
        uint32_t xpToGrant = Archipelago::FillerRewardEffects::Pure::ComputeXpToGrant(
            curXp, nextLvlXp, static_cast<uint32_t>(percent));
        if (xpToGrant > 0)
            target->GiveXP(xpToGrant, nullptr);
    }

    void ApplyGrantTitle(Player* target, int32_t titleId)
    {
        if (CharTitlesEntry const* title = sCharTitlesStore.LookupEntry(static_cast<uint32_t>(titleId)))
            target->SetTitle(title);
    }

    void ApplyNotYetImplemented(Player* target, std::string const& effect)
    {
        LOG_INFO("module.archipelago_wow", "Archipelago: filler reward effect '{}' is not yet implemented, skipped for {}", effect, target->GetName());
    }
}

namespace Archipelago::FillerRewardEffects
{
    void ApplyFillerRewardEffect(Player* target, std::string const& effect, int32_t param)
    {
        if (effect == "cast_spell")
            ApplySelfCastSpell(target, param);
        else if (effect == "grant_money")
            ApplyGoldReward(target, param);
        else if (effect == "grant_xp_percent")
            ApplyXpReward(target, param);
        else if (effect == "grant_title")
            ApplyGrantTitle(target, param);
        else if (effect == "portable_service")
            ApplySelfCastSpell(target, param);
        else
            ApplyNotYetImplemented(target, effect);
    }
}
