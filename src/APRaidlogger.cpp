// azerothcore-wotlk/modules/archipelago_wow/src/APRaidlogger.cpp
#include "APRaidlogger.h"

#include "ArchipelagoRealmState.h"
#include "CharacterCache.h"
#include "ObjectAccessor.h"
#include "Player.h"

namespace
{
    // Real core_loop.yaml location ids (content/core_loop.yaml:530,548) --
    // load-bearing, not incidental; if core_loop.yaml's ids ever change,
    // update these two constants.
    constexpr uint64_t MOLTEN_CORE_CLEAR_LOCATION_ID = 720002;
    constexpr uint64_t SUNWELL_PLATEAU_CLEAR_LOCATION_ID = 720003;

    bool IsGateSatisfied(uint8_t level)
    {
        if (level == 70)
            return sArchipelagoRealmState->HasSentLocationCheck(MOLTEN_CORE_CLEAR_LOCATION_ID);
        if (level == 80)
            return sArchipelagoRealmState->HasSentLocationCheck(SUNWELL_PLATEAU_CLEAR_LOCATION_ID);
        return true; // unknown level -- fail open rather than block forever; should never happen given ApItemToLevel's real content
    }

    Player* FindOnlineDeliveryCharacter()
    {
        std::string deliveryCharacter = sArchipelagoRealmState->GetDeliveryCharacter();
        ObjectGuid guid = sCharacterCache->GetCharacterGuidByName(deliveryCharacter);
        if (guid.IsEmpty())
            return nullptr;
        return ObjectAccessor::FindPlayerByLowGUID(guid.GetCounter());
    }
}

namespace Archipelago::Raidlogger
{
    void ApplyOrDeferInstantLevelSet(uint8_t level)
    {
        if (!IsGateSatisfied(level))
        {
            sArchipelagoRealmState->SetFlagTier("raidlogger_pending_level", level);
            return;
        }

        if (Player* onlineReceiver = FindOnlineDeliveryCharacter())
        {
            if (onlineReceiver->GetLevel() < level)
                onlineReceiver->GiveLevel(level);
        }
        else
        {
            // Character offline right now -- defer to their next login
            // (OnPlayerLogin catch-up calls ReapplyPendingLevelIfEligible).
            sArchipelagoRealmState->SetFlagTier("raidlogger_pending_level", level);
        }
    }

    void ReapplyPendingLevelIfEligible()
    {
        uint32_t pending = sArchipelagoRealmState->GetFlagTier("raidlogger_pending_level");
        if (pending == 0)
            return;
        auto level = static_cast<uint8_t>(pending);
        if (!IsGateSatisfied(level))
            return;
        if (Player* onlineReceiver = FindOnlineDeliveryCharacter())
        {
            if (onlineReceiver->GetLevel() < level)
                onlineReceiver->GiveLevel(level);
        }
    }
}
