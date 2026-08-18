// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoRealmState.h
#pragma once

#include <cstdint>
#include <string>
#include <unordered_map>
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

    // Cached mirror of the Archipelago.Enabled config value (set once from
    // ArchipelagoWorldScript::OnBeforeConfigLoad, per this codebase's config
    // convention of reading sConfigMgr once and caching rather than calling
    // GetOption in per-call gating checks). When false, every gating script
    // (instance entry, Dark Portal, Northrend transports) and the persisted
    // level-cap application in OnStartup must behave as if this module does
    // not exist at all -- full vanilla behavior, no warnings, no lookups
    // into the rest of this realm state.
    bool IsEnabled() const { return _enabled; }
    void SetEnabled(bool enabled) { _enabled = enabled; }

    uint32_t GetLevelCap() const { return _levelCap; }
    void RaiseLevelCap(uint32_t newCap);

    bool IsInstanceUnlocked(std::string const& instanceKey) const;
    void UnlockInstance(std::string const& instanceKey);

    bool IsDarkPortalUnlocked() const { return _darkPortalUnlocked; }
    void UnlockDarkPortal();

    bool IsNorthrendPassageUnlocked() const { return _northrendPassageUnlocked; }
    void UnlockNorthrendPassage();

    // Generic realm-wide unlock-flag store (M4 gate family). tier 0 means
    // "not unlocked, not present". Boolean gates always use tier 1.
    bool IsFlagUnlocked(std::string const& flagKey) const;
    uint32_t GetFlagTier(std::string const& flagKey) const;
    void SetFlagTier(std::string const& flagKey, uint32_t tier);

private:
    bool _enabled = false;
    uint32_t _levelCap = 10;
    bool _darkPortalUnlocked = false;
    bool _northrendPassageUnlocked = false;
    std::unordered_set<std::string> _unlockedInstances;
    std::unordered_map<std::string, uint32_t> _flagTiers;
};

#define sArchipelagoRealmState ArchipelagoRealmState::instance()
