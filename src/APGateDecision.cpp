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
}
