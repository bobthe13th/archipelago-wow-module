// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoZoneLevelerScriptPure.h
#pragma once

#include <cstdint>
#include <unordered_set>

// M4.11.1 Task 14. Pure, AzerothCore/Player-independent "is this zone id
// currently allowed for a Zone Leveler slot" decision -- unit-testable
// directly via test/test_ArchipelagoZoneLevelerScript.cpp, matching the
// exact split APTrapsPure.h/APGateDecision.h already established elsewhere
// in this module (PickRewardColumn/RewardColumnsToRewrite in APItemDisplay.h,
// ComputeSpawnOffsetPosition etc. in APTrapsPure.h): this module's test
// executable (test/CMakeLists.txt) links no AzerothCore game-library
// headers, so nothing that touches a real Player* can be exercised there.
// ArchipelagoZoneLevelerScript.cpp's real OnPlayerUpdateZone hook (which
// DOES touch a real Player* -- SaveRecallPosition/TeleportTo) is
// deliberately left untested here and instead covered by the manual
// verification checklist
// (docs/testing/m4.11.1-manual-verification-checklist.md).
namespace Archipelago::ZoneLeveler::Pure
{
    // zone == lockedZoneId is always allowed (the locked zone itself,
    // BarrensBeater: the Barrens, zone id 17). Otherwise allowed only if
    // allowHubZone is true AND zone is one of allowedHubZoneIds (Barrens'
    // curated hub exception: Durotar/Orgrimmar) -- see design spec Sec2.2.
    inline bool IsZoneAllowedForZoneLeveler(uint32_t zone, uint32_t lockedZoneId, bool allowHubZone,
        std::unordered_set<uint32_t> const& allowedHubZoneIds)
    {
        if (zone == lockedZoneId)
            return true;
        return allowHubZone && allowedHubZoneIds.count(zone) > 0;
    }
}
