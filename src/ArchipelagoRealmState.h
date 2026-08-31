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

    // Cached mirrors of Archipelago.DeathLink{Send,Receive}Enabled /
    // Archipelago.DeathLink{Send,Receive}CooldownSeconds (Task 19, design
    // spec Sec11), same not-persisted worldserver.conf-mirror convention as
    // CatchUpPolicy above -- consumed from ArchipelagoDeathLinkScript
    // (OnPlayerJustDied for send, ArchipelagoWorldScript::OnUpdate's
    // incoming-bounce drain for receive), classes ArchipelagoWorldScript
    // cannot pass a parameter to directly.
    bool GetDeathLinkSendEnabled() const { return _deathLinkSendEnabled; }
    void SetDeathLinkSendEnabled(bool enabled) { _deathLinkSendEnabled = enabled; }
    bool GetDeathLinkReceiveEnabled() const { return _deathLinkReceiveEnabled; }
    void SetDeathLinkReceiveEnabled(bool enabled) { _deathLinkReceiveEnabled = enabled; }
    void SetDeathLinkSendCooldownSeconds(uint32_t seconds) { _deathLinkSendCooldownSeconds = seconds; }
    void SetDeathLinkReceiveCooldownSeconds(uint32_t seconds) { _deathLinkReceiveCooldownSeconds = seconds; }

    // Sec11: "send-side prevents a raid wipe spamming the multiworld" /
    // "receive-side prevents cascades". Each call either records "now" as the
    // new last-fired time and returns true (caller may proceed), or returns
    // false because the configured cooldown hasn't elapsed since the last
    // permitted call (caller must log the suppression, not silently drop it
    // -- see ArchipelagoDeathLinkScript.cpp). World-thread-only, like the
    // rest of this class -- no locking needed. Not persisted: a worldserver
    // restart resetting the cooldown clock is an accepted, low-stakes edge
    // case (worst case, one extra DeathLink fires slightly early after a
    // restart), unlike the durable state above.
    bool TryConsumeDeathLinkSendCooldown();
    bool TryConsumeDeathLinkReceiveCooldown();

    // Cached mirrors of the two independent halves of Archipelago.SpiritHealerVariant
    // (Task 20, design spec Sec11), same not-persisted worldserver.conf-mirror
    // convention as the DeathLink toggles above. Parsed once from the single conf
    // string in ArchipelagoWorldScript::OnBeforeConfigLoad into these two booleans,
    // since there are two independent consumers (this class's own OnStartup, which
    // pushes the durability-loss rate override, and ArchipelagoDeathLinkScript's
    // resurrection-sickness veto hook) rather than one.
    bool GetSuppressResSickness() const { return _suppressResSickness; }
    void SetSuppressResSickness(bool suppress) { _suppressResSickness = suppress; }
    bool GetSuppressDurabilityLossOnSpiritResurrect() const { return _suppressDurabilityLossOnSpiritResurrect; }
    void SetSuppressDurabilityLossOnSpiritResurrect(bool suppress) { _suppressDurabilityLossOnSpiritResurrect = suppress; }

    // Task 23 (design spec Sec5.4): realm-wide "has this boss ever been
    // recorded dead in this instance" tracking, backing all_bosses
    // InstanceClearMode -- same insert-only/idempotent/cached-then-persisted
    // shape as UnlockInstance above. Composite-keyed by instanceKey+bossEntry
    // rather than a nested map, matching how _flagTiers/_sentLocationChecks
    // are flat containers too; ArchipelagoInstanceScript.cpp is the only
    // caller and always has both values on hand together. The "has the
    // instance-clear check already been sent for this instance_key" guard
    // (avoiding a duplicate send once the full roster is recorded) reuses
    // the existing generic flag store above (SetFlagTier("instance_clear_sent_"
    // + instanceKey, 1)) rather than a third dedicated mechanism.
    bool IsBossKillRecorded(std::string const& instanceKey, uint32_t bossEntry) const;
    void RecordBossKill(std::string const& instanceKey, uint32_t bossEntry);

    // Cached value of instance_clear_mode (Task 23), read from the connected
    // seed's own slot_data at connect time (M4.9.5 removed the old manual
    // worldserver.conf mirror this used to have) -- consumed from
    // ArchipelagoInstanceScript.cpp's kill hook.
    std::string GetInstanceClearMode() const { return _instanceClearMode; }
    void SetInstanceClearMode(std::string const& mode) { _instanceClearMode = mode; }

    // Cached mirror of Archipelago.GameMode/Archipelago.CompletionistExpansion
    // (found needed during Task 23/24's own review -- this bespoke C++
    // APClient has no embedded rules-evaluation engine, so it cannot derive
    // "is the goal met" from anything the AP server sends; it must
    // independently know which mode is active to report completion at all).
    // Same not-persisted worldserver.conf-mirror convention as every other
    // option above -- values are the bare GameMode option name (e.g.
    // "sprint", "classic"), matching goals.py's own dispatch keys, not the
    // "option_"-prefixed Choice attribute name. Consumed from
    // ArchipelagoGoals.cpp's CheckAndSendGoalComplete.
    std::string GetGameMode() const { return _gameMode; }
    void SetGameMode(std::string const& mode) { _gameMode = mode; }
    std::string GetCompletionistExpansion() const { return _completionistExpansion; }
    void SetCompletionistExpansion(std::string const& expansion) { _completionistExpansion = expansion; }

    // Task 25 (Key Hunt): realm-wide count of "Key Hunt: Key" items ever
    // received. Reuses the existing generic flag store (GetFlagTier/
    // SetFlagTier) under a dedicated key rather than adding a new
    // archipelago_realm_state column/migration -- a "tier" and a "count" are
    // both just a monotonically-increasing uint32_t, and this family's flag
    // key ("key_hunt_key_count") is namespaced clearly enough not to collide
    // with any real gate flag_key (those are all named after a specific
    // gated feature, e.g. "proficiency_armor_plate", never a generic noun).
    uint32_t GetKeyCount() const { return GetFlagTier("key_hunt_key_count"); }
    void GrantKey() { SetFlagTier("key_hunt_key_count", GetFlagTier("key_hunt_key_count") + 1); }

    // Cached mirrors of Archipelago.KeyHuntKeysRequired/InstancesRequired
    // (Task 25), same not-persisted worldserver.conf-mirror convention as
    // GameMode/CompletionistExpansion above -- consumed from
    // ArchipelagoGoals.cpp's CheckAndSendGoalComplete.
    uint32_t GetKeyHuntKeysRequired() const { return _keyHuntKeysRequired; }
    void SetKeyHuntKeysRequired(uint32_t required) { _keyHuntKeysRequired = required; }
    uint32_t GetKeyHuntInstancesRequired() const { return _keyHuntInstancesRequired; }
    void SetKeyHuntInstancesRequired(uint32_t required) { _keyHuntInstancesRequired = required; }

    // Cached mirror of Archipelago.ArtisanPrimaryProfessionsRequired
    // (Task 27), same not-persisted worldserver.conf-mirror convention as
    // every other option above -- consumed from
    // ArchipelagoGoals.cpp's IsArtisanComplete.
    uint32_t GetArtisanPrimaryProfessionsRequired() const { return _artisanPrimaryProfessionsRequired; }
    void SetArtisanPrimaryProfessionsRequired(uint32_t required) { _artisanPrimaryProfessionsRequired = required; }

    // Cached mirror of Archipelago.CollectorItemsRequired (Task 27) -- the
    // default (264, matching CollectorItemsRequired's default in options.py)
    // is the FULL roster, per the design spec's "every collectible mount AND
    // every collectible pet" scope; unlike Artisan's hard profession-slot
    // constraint, AP item delivery here isn't gated by in-game drop rarity,
    // so there's no mechanical reason to default lower. The option exists so
    // a shorter Collector run is selectable per-seed. Consumed from
    // ArchipelagoGoals.cpp's IsCollectorComplete.
    uint32_t GetCollectorItemsRequired() const { return _collectorItemsRequired; }
    void SetCollectorItemsRequired(uint32_t required) { _collectorItemsRequired = required; }

    // Cached mirror of slot_data["vendor_check_repeat_behavior"] (M4.7 Task 8),
    // same not-persisted, set-once-from-slot_data convention as GameMode/
    // CompletionistExpansion above -- consumed from
    // ArchipelagoInterceptionScript.cpp's vendor purchase hook to decide what
    // happens on a REPEAT purchase of an already-checked Vendor Inventories
    // slot (the first purchase always sends the check and destroys the item,
    // regardless of this setting). Defaults to "suppress_entirely" (matching
    // the apworld option's own default), meaning subsequent purchases from
    // the slot silently do nothing.
    std::string GetVendorCheckRepeatBehavior() const { return _vendorCheckRepeatBehavior; }
    void SetVendorCheckRepeatBehavior(std::string behavior) { _vendorCheckRepeatBehavior = std::move(behavior); }

    // Cached mirror of slot_data["loot_slot_check_repeat_behavior"]
    // (M4.10.1), same not-persisted, set-once-from-slot_data convention as
    // GetVendorCheckRepeatBehavior above -- consumed from
    // ArchipelagoLootSlotScript.cpp's loot hook to decide what happens on
    // a REPEAT loot of an already-checked Containersanity/Gathersanity
    // slot. Defaults to "suppress_entirely" (matching the apworld option's
    // own default).
    std::string GetLootSlotCheckRepeatBehavior() const { return _lootSlotCheckRepeatBehavior; }
    void SetLootSlotCheckRepeatBehavior(std::string behavior) { _lootSlotCheckRepeatBehavior = std::move(behavior); }

    // Cached mirror of slot_data["holidaysanity_stacking"] (M4.10.7), same
    // not-persisted, set-once-from-slot_data convention as
    // GetLootSlotCheckRepeatBehavior above -- consumed by
    // ArchipelagoHolidayHeraldScript.cpp's gossip toggle logic to decide
    // whether activating a new holiday deactivates the currently-running
    // one. Defaults to false (only one holiday active at a time), matching
    // the apworld option's own off-by-default.
    bool GetHolidaysanityStacking() const { return _holidaysanityStacking; }
    void SetHolidaysanityStacking(bool stacking) { _holidaysanityStacking = stacking; }

    // Cached mirror of Archipelago.AchievementHuntTier/AchievementHuntSubset
    // (M4.9 Sec4), same not-persisted worldserver.conf-mirror convention as
    // GameMode/CompletionistExpansion above -- consumed from
    // ArchipelagoGoals.cpp's IsAchievementHuntComplete.
    std::string GetAchievementHuntTier() const { return _achievementHuntTier; }
    void SetAchievementHuntTier(std::string const& tier) { _achievementHuntTier = tier; }
    std::string GetAchievementHuntSubset() const { return _achievementHuntSubset; }
    void SetAchievementHuntSubset(std::string const& subset) { _achievementHuntSubset = subset; }

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
    bool _deathLinkSendEnabled = false;
    bool _deathLinkReceiveEnabled = false;
    uint32_t _deathLinkSendCooldownSeconds = 15;
    uint32_t _deathLinkReceiveCooldownSeconds = 15;
    int64_t _lastDeathLinkSentAt = 0;
    int64_t _lastDeathLinkReceivedAt = 0;
    bool _suppressResSickness = false;
    bool _suppressDurabilityLossOnSpiritResurrect = false;
    std::unordered_set<std::string> _recordedBossKills; // "instanceKey|bossEntry" composite keys
    std::string _instanceClearMode = "all_bosses";
    std::string _gameMode = "sprint";
    std::string _completionistExpansion = "vanilla";
    uint32_t _keyHuntKeysRequired = 10;
    uint32_t _keyHuntInstancesRequired = 1;
    uint32_t _artisanPrimaryProfessionsRequired = 2;
    uint32_t _collectorItemsRequired = 264;
    std::string _vendorCheckRepeatBehavior = "suppress_entirely";
    std::string _lootSlotCheckRepeatBehavior = "suppress_entirely";
    bool _holidaysanityStacking = false;
    std::string _achievementHuntTier = "hundred_percent";
    std::string _achievementHuntSubset = "explorer";
};

#define sArchipelagoRealmState ArchipelagoRealmState::instance()
