// azerothcore-wotlk/modules/archipelago_wow/src/APGateDecision.cpp
#include "APGateDecision.h"

namespace Archipelago::Gating
{
    bool ShouldSuppressGatedAction(bool moduleEnabled, bool gateFamilyEnabled, bool flagUnlocked)
    {
        return moduleEnabled && gateFamilyEnabled && !flagUnlocked;
    }
}
