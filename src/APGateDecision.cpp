// azerothcore-wotlk/modules/archipelago_wow/src/APGateDecision.cpp
#include "APGateDecision.h"

namespace Archipelago::Gating
{
    bool ShouldSuppressGatedAction(bool moduleEnabled, bool gateFamilyEnabled, bool flagUnlocked)
    {
        return moduleEnabled && gateFamilyEnabled && !flagUnlocked;
    }

    bool ShouldSuppressGatedTier(bool moduleEnabled, bool gateFamilyEnabled, uint32_t requiredTier, uint32_t grantedTier)
    {
        return moduleEnabled && gateFamilyEnabled && requiredTier > grantedTier;
    }

    bool ShouldBlockTrainerTeach(bool moduleEnabled, bool alreadyKnownOrGrantedViaAP)
    {
        return moduleEnabled && !alreadyKnownOrGrantedViaAP;
    }

    namespace
    {
        // Real constants confirmed in
        // src/server/game/Entities/Player/Player.h -- reproduced as literals
        // here (not #included) so this file stays free of AzerothCore engine
        // dependencies, matching APGateDecision.h's own stated discipline.
        constexpr uint32_t INVENTORY_SLOT_BAG_START = 19;
        constexpr uint32_t INVENTORY_SLOT_BAG_END = 23; // exclusive
    }

    bool IsNonBackpackBagSlot(uint32_t slot)
    {
        return slot >= INVENTORY_SLOT_BAG_START && slot < INVENTORY_SLOT_BAG_END;
    }

    uint32_t BagSlotToTier(uint32_t slot)
    {
        return slot - INVENTORY_SLOT_BAG_START + 1;
    }

    bool ShouldSuppressBagSlotEquip(bool notLoading, bool moduleEnabled, bool gateFamilyEnabled, uint32_t requiredTier, uint32_t grantedTier)
    {
        return notLoading && ShouldSuppressGatedTier(moduleEnabled, gateFamilyEnabled, requiredTier, grantedTier);
    }

    namespace
    {
        // Tranche boundaries for Progressive Talent Tranches (M4.14.1). Tier
        // 3+ has no entry here -- it is handled as "no cap" directly in
        // ShouldSuppressTalentLearn, not as a third bound, per this file's
        // own header-comment reasoning about RATE_TALENT.
        constexpr uint32_t TALENT_TRANCHE_1_CAP = 25;
        constexpr uint32_t TALENT_TRANCHE_2_CAP = 50;
    }

    bool ShouldSuppressTalentLearn(bool moduleEnabled, bool gateFamilyEnabled, uint32_t tier, uint32_t pointsAlreadySpent)
    {
        if (!moduleEnabled || !gateFamilyEnabled)
            return false;

        if (tier == 0)
            return true;

        if (tier >= 3)
            return false;

        uint32_t cap = (tier == 1) ? TALENT_TRANCHE_1_CAP : TALENT_TRANCHE_2_CAP;
        return pointsAlreadySpent >= cap;
    }
}
