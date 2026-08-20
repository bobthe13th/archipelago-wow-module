// azerothcore-wotlk/modules/archipelago_wow/src/APCatchUp.cpp
#include "APCatchUp.h"

#include <algorithm>
#include <array>
#include <cmath>

#include "APDelivery.h"
#include "ArchipelagoRealmState.h"
#include "Chat.h"
#include "DatabaseEnv.h"
#include "Player.h"
#include "WorldSession.h"

namespace
{
    enum class Policy
    {
        AllMailedOnLogin,
        Nothing,
        PercentPerLevel,
        LevelScaledBundle,
    };

    Policy ParsePolicy(std::string const& value)
    {
        if (value == "AllMailedOnLogin")
            return Policy::AllMailedOnLogin;
        if (value == "PercentPerLevel")
            return Policy::PercentPerLevel;
        if (value == "LevelScaledBundle")
            return Policy::LevelScaledBundle;
        return Policy::Nothing;
    }

    // Level-scaled bundle thresholds (Task 16's own choice -- the design spec
    // names the mode but not specific levels): one bundle per threshold
    // crossed, sized so 6 thresholds fully catch a character up by 60.
    constexpr std::array<uint8_t, 6> LEVEL_SCALED_BUNDLE_THRESHOLDS = { 10, 20, 30, 40, 50, 60 };

    uint32_t TotalDeliveryHistoryCount()
    {
        if (QueryResult result = CharacterDatabase.Query("SELECT COUNT(*) FROM archipelago_delivery_history"))
            return (*result)[0].Get<uint32_t>();
        return 0;
    }

    uint32_t GetGrantedCount(ObjectGuid::LowType guid)
    {
        if (QueryResult result = CharacterDatabase.Query("SELECT items_granted_count FROM archipelago_catchup_state WHERE character_guid = {}", guid))
            return (*result)[0].Get<uint32_t>();
        return 0;
    }

    // Grants the next `count` outstanding catch-up items (in original delivery
    // order) to player, capped at however many are actually still outstanding.
    // No-op if the character is already fully caught up or count is 0.
    void GrantNextItems(Player* player, uint32_t count)
    {
        if (count == 0)
            return;

        ObjectGuid::LowType guid = player->GetGUID().GetCounter();
        uint32_t alreadyGranted = GetGrantedCount(guid);
        uint32_t total = TotalDeliveryHistoryCount();
        if (alreadyGranted >= total)
            return;

        uint32_t toGrant = std::min(count, total - alreadyGranted);
        QueryResult result = CharacterDatabase.Query(
            "SELECT wow_item_entry FROM archipelago_delivery_history ORDER BY id LIMIT {} OFFSET {}",
            toGrant, alreadyGranted);
        if (!result)
            return;

        CharacterDatabaseTransaction trans = CharacterDatabase.BeginTransaction();
        uint32_t grantedNow = 0;
        do
        {
            uint32_t entry = (*result)[0].Get<uint32_t>();
            Archipelago::Delivery::GiveOrMailItem(player, entry, trans);
            ++grantedNow;
        } while (result->NextRow());

        trans->Append(
            "INSERT INTO archipelago_catchup_state (character_guid, items_granted_count) VALUES ({}, {}) "
            "ON DUPLICATE KEY UPDATE items_granted_count = items_granted_count + {}",
            guid, grantedNow, grantedNow);
        CharacterDatabase.CommitTransaction(trans);

        if (grantedNow > 0)
            ChatHandler(player->GetSession()).PSendSysMessage("Archipelago: caught you up on {} item(s) from the realm's history.", grantedNow);
    }
}

namespace Archipelago::CatchUp
{
    void OnPlayerLogin(Player* player, bool isFirstLoginEver)
    {
        if (!sArchipelagoRealmState->IsEnabled())
            return;

        Policy policy = ParsePolicy(sArchipelagoRealmState->GetCatchUpPolicy());
        // Only AllMailedOnLogin acts here, and only on a character's very first
        // login ever -- PercentPerLevel/LevelScaledBundle grant incrementally as
        // the character actually levels (see OnPlayerLevelChanged below), not in
        // one lump at login, and Nothing is a deliberate no-op.
        if (policy != Policy::AllMailedOnLogin || !isFirstLoginEver)
            return;

        GrantNextItems(player, TotalDeliveryHistoryCount());
    }

    void OnPlayerLevelChanged(Player* player, uint8_t oldLevel, uint8_t newLevel)
    {
        if (!sArchipelagoRealmState->IsEnabled())
            return;

        Policy policy = ParsePolicy(sArchipelagoRealmState->GetCatchUpPolicy());
        if (policy == Policy::PercentPerLevel)
        {
            uint32_t total = TotalDeliveryHistoryCount();
            uint32_t percent = sArchipelagoRealmState->GetCatchUpPercentPerLevel();
            uint32_t perLevel = static_cast<uint32_t>(std::ceil(total * (percent / 100.0)));
            GrantNextItems(player, perLevel);
        }
        else if (policy == Policy::LevelScaledBundle)
        {
            uint32_t total = TotalDeliveryHistoryCount();
            uint32_t bundleSize = static_cast<uint32_t>(std::ceil(total / static_cast<double>(LEVEL_SCALED_BUNDLE_THRESHOLDS.size())));
            // A level-up can cross multiple thresholds in one hook firing (matches
            // ArchipelagoLevelScript.cpp's own "scan the whole range crossed" note),
            // so grant one bundle per threshold actually crossed, not just one.
            uint32_t thresholdsCrossed = 0;
            for (uint8_t threshold : LEVEL_SCALED_BUNDLE_THRESHOLDS)
            {
                if (oldLevel < threshold && newLevel >= threshold)
                    ++thresholdsCrossed;
            }
            GrantNextItems(player, bundleSize * thresholdsCrossed);
        }
    }
}
