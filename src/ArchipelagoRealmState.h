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

    // Durable outbound location check persistence (M4, closes defect #1).
    bool HasSentLocationCheck(uint64_t locationId) const;
    void RecordLocationCheckSent(uint64_t locationId);
    std::unordered_set<uint64_t> const& GetSentLocationChecks() const { return _sentLocationChecks; }

    bool IsGoalComplete() const { return _goalComplete; }
    void SetGoalComplete();

    // Cached mirror of optional-gate-family config toggles (e.g.
    // Archipelago.ProficiencyGating), set once from
    // ArchipelagoWorldScript::OnBeforeConfigLoad following the same
    // read-once-and-cache convention as IsEnabled(). Not persisted to the
    // database -- these mirror worldserver.conf, not seed-earned state, so
    // they're recomputed fresh on every config load/reload. A family never
    // set reads as disabled, matching every optional gate's off-by-default
    // contract (an operator running an old .conf.dist without the new key
    // gets vanilla behavior, not an accidental lockout).
    bool IsGateFamilyEnabled(std::string const& familyKey) const;
    void SetGateFamilyEnabled(std::string const& familyKey, bool enabled);

    // Cached mirror of Archipelago.CatchUpPolicy / Archipelago.CatchUpPercentPerLevel
    // (Task 16, design spec Sec7.2), same not-persisted worldserver.conf-mirror
    // convention as the gate-family flags above. Stored as a raw string rather than
    // an enum so this header doesn't need to depend on APCatchUp.h's Policy type --
    // APCatchUp.cpp (the only reader) parses it. Consumed from ArchipelagoPlayerScript
    // (OnPlayerLogin) and ArchipelagoLevelScript (OnPlayerLevelChanged), two different
    // PlayerScript classes that ArchipelagoWorldScript cannot pass a parameter to
    // directly -- unlike DeliveryPolicy, which only has one call site
    // (ArchipelagoWorldScript::OnUpdate) and so didn't need this indirection.
    std::string GetCatchUpPolicy() const { return _catchUpPolicy; }
    void SetCatchUpPolicy(std::string const& policy) { _catchUpPolicy = policy; }
    uint32_t GetCatchUpPercentPerLevel() const { return _catchUpPercentPerLevel; }
    void SetCatchUpPercentPerLevel(uint32_t percent) { _catchUpPercentPerLevel = percent; }

private:
    bool _enabled = false;
    uint32_t _levelCap = 10;
    bool _darkPortalUnlocked = false;
    bool _northrendPassageUnlocked = false;
    bool _goalComplete = false;
    std::unordered_set<std::string> _unlockedInstances;
    std::unordered_map<std::string, uint32_t> _flagTiers;
    std::unordered_set<uint64_t> _sentLocationChecks;
    std::unordered_map<std::string, bool> _gateFamiliesEnabled;
    std::string _catchUpPolicy = "Nothing";
    uint32_t _catchUpPercentPerLevel = 10;
};

#define sArchipelagoRealmState ArchipelagoRealmState::instance()
