// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoRealmState.h
#pragma once

#include <cstdint>
#include <string>
#include <unordered_set>

// Realm-wide Archipelago core-loop progression state. One realm = one AP
// slot (spec core commitment), so this is a single cached row/set, not
// per-character. World-thread-only: Load() at OnStartup, everything else
// only ever called from the world thread (via ArchipelagoWorldScript's
// OnUpdate drain, matching the pattern already established for mail
// delivery in M2 -- see ArchipelagoPlayerScript.cpp).
class ArchipelagoRealmState
{
public:
    static ArchipelagoRealmState* instance();

    void Load();

    uint32_t GetLevelCap() const { return _levelCap; }
    void RaiseLevelCap(uint32_t newCap);

    bool IsInstanceUnlocked(std::string const& instanceKey) const;
    void UnlockInstance(std::string const& instanceKey);

    bool IsDarkPortalUnlocked() const { return _darkPortalUnlocked; }
    void UnlockDarkPortal();

    bool IsNorthrendPassageUnlocked() const { return _northrendPassageUnlocked; }
    void UnlockNorthrendPassage();

private:
    uint32_t _levelCap = 10;
    bool _darkPortalUnlocked = false;
    bool _northrendPassageUnlocked = false;
    std::unordered_set<std::string> _unlockedInstances;
};

#define sArchipelagoRealmState ArchipelagoRealmState::instance()
