// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoRealmState.h
#pragma once

#include <cstdint>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

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

    // Cached mirrors of slot_data["zone_leveler_zone_id"] /
    // ["zone_leveler_allowed_hub_zone_ids"] / ["zone_leveler_allow_hub_zone"]
    // (M4.11.1 Task 14), same not-persisted, set-once-from-slot_data
    // convention as GetInstanceClearMode/GetVendorCheckRepeatBehavior above
    // -- consumed by ArchipelagoZoneLevelerScript.cpp's OnPlayerUpdateZone
    // hook to decide whether a zone-change is inside the locked zone
    // (BarrensBeater: the Barrens, area/zone id 17), inside an allowed hub
    // zone exception (Durotar/Orgrimmar for Barrens, only reachable when
    // GetZoneLevelerAllowHubZone() is true), or a violation that should
    // teleport the player back to their last known in-bounds position.
    uint32_t GetZoneLevelerZoneId() const { return _zoneLevelerZoneId; }
    void SetZoneLevelerZoneId(uint32_t zoneId) { _zoneLevelerZoneId = zoneId; }

    std::unordered_set<uint32_t> const& GetZoneLevelerAllowedHubZoneIds() const { return _zoneLevelerAllowedHubZoneIds; }
    void SetZoneLevelerAllowedHubZoneIds(std::unordered_set<uint32_t> ids) { _zoneLevelerAllowedHubZoneIds = std::move(ids); }

    bool GetZoneLevelerAllowHubZone() const { return _zoneLevelerAllowHubZone; }
    void SetZoneLevelerAllowHubZone(bool allow) { _zoneLevelerAllowHubZone = allow; }

    // Cached mirror of slot_data["zone_leveler_zone_key"] (M4.11.1 Task 15) --
    // the connected zone's own short key (e.g. "barrens"), same
    // not-persisted, set-once-from-slot_data convention as
    // GetZoneLevelerZoneId above. Needed IN ADDITION TO the numeric zone id:
    // Archipelago::CoreLoop::LEVEL_CAP_TOTAL_BY_TRACK (Task 3) is keyed by
    // the STRING "zone_leveler_<zone_key>", and this C++ module has no
    // zone_id -> zone_key reverse map of its own (unlike Python's
    // zone_leveler_content_data.ZONES) -- without this, IsZoneLevelerComplete's
    // reach_zone_level_cap check would have to hardcode "zone_leveler_barrens"
    // literally, which would silently stop matching the moment a second zone
    // is curated (M4.11.2). Consumed by ArchipelagoGoals.cpp's
    // IsZoneLevelerComplete.
    std::string GetZoneLevelerZoneKey() const { return _zoneLevelerZoneKey; }
    void SetZoneLevelerZoneKey(std::string const& key) { _zoneLevelerZoneKey = key; }

    // Cached mirror of slot_data["zone_leveler_goals"] (M4.11.1 Task 15) --
    // the connected slot's own selected win conditions (options.py's
    // ZoneLevelerGoals OptionSet: any of reach_zone_level_cap,
    // clear_all_zone_quests, golden_boar_statues, instance_clears), same
    // not-persisted, set-once-from-slot_data convention as
    // GetZoneLevelerZoneId above. Consumed by ArchipelagoGoals.cpp's
    // IsZoneLevelerComplete to decide which goal-kind sub-checks apply, the
    // same role GetGameMode plays for CheckAndSendGoalComplete's own
    // top-level dispatch.
    std::unordered_set<std::string> const& GetZoneLevelerGoals() const { return _zoneLevelerGoals; }
    void SetZoneLevelerGoals(std::unordered_set<std::string> goals) { _zoneLevelerGoals = std::move(goals); }

    // Cached mirrors of slot_data["zone_leveler_statues_required"] /
    // ["zone_leveler_instances_required"] (M4.11.1 Task 15), same
    // not-persisted, set-once-from-slot_data convention as
    // GetZoneLevelerZoneId above -- consumed by ArchipelagoGoals.cpp's
    // IsZoneLevelerComplete for the golden_boar_statues/instance_clears goal
    // kinds respectively.
    uint32_t GetZoneLevelerStatuesRequired() const { return _zoneLevelerStatuesRequired; }
    void SetZoneLevelerStatuesRequired(uint32_t required) { _zoneLevelerStatuesRequired = required; }
    uint32_t GetZoneLevelerInstancesRequired() const { return _zoneLevelerInstancesRequired; }
    void SetZoneLevelerInstancesRequired(uint32_t required) { _zoneLevelerInstancesRequired = required; }

    // Cached mirror of slot_data["zone_leveler_instance_keys"] (M4.11.1 Task
    // 15) -- the connected zone's own curated instance_keys tuple (e.g.
    // Barrens' wailing_caverns/razorfen_kraul/razorfen_downs), same
    // not-persisted, set-once-from-slot_data convention as
    // GetZoneLevelerZoneId above. Consumed by ArchipelagoGoals.cpp's
    // IsZoneLevelerComplete's instance_clears check, which counts how many
    // of THESE SPECIFIC keys (not every realm-unlocked instance) are
    // unlocked -- mirrors goals.py's own instance_item_names, built from the
    // same zone_data.instance_keys.
    std::vector<std::string> const& GetZoneLevelerInstanceKeys() const { return _zoneLevelerInstanceKeys; }
    void SetZoneLevelerInstanceKeys(std::vector<std::string> keys) { _zoneLevelerInstanceKeys = std::move(keys); }

    // M4.11.1 Task 15 (reach_zone_level_cap): realm-wide count of
    // "Progressive Level Cap" items ever received -- exact same generic
    // flag-store mechanism as GetKeyCount()/GrantKey() above (Task 25),
    // under its own dedicated flag key. Deliberately distinct from
    // GetLevelCap() itself (the realm's CURRENT max level, e.g. starting cap
    // + copies*LEVEL_CAP_STEP): goals.py's real completion condition for
    // this goal kind (_set_completion_rule_zone_leveler,
    // state.has("Progressive Level Cap", count=total_caps)) counts copies
    // RECEIVED, not the resulting cap value, so this needs its own counter
    // rather than reverse-deriving a copy count from GetLevelCap() and a
    // per-track starting cap. Incremented alongside RaiseLevelCap in
    // ArchipelagoPlayerScript.cpp's AP_ITEM_PROGRESSIVE_LEVEL_CAP delivery
    // block.
    uint32_t GetLevelCapCopiesReceived() const { return GetFlagTier("progressive_level_cap_copies_received"); }
    void GrantLevelCapCopy() { SetFlagTier("progressive_level_cap_copies_received", GetFlagTier("progressive_level_cap_copies_received") + 1); }

    // M4.11.1 Task 15 (golden_boar_statues): realm-wide count of "Golden
    // Boar Statue" items ever received -- exact same generic flag-store
    // mechanism as GetKeyCount()/GrantKey() above (Task 25), under its own
    // dedicated flag key (golden_boar_statues.yaml's own header comment: "a
    // new `grant_statue` realm_state effect... needs its OWN distinct
    // realm-state counter, not a silent alias of Key Hunt's"). Incremented
    // from ArchipelagoPlayerScript.cpp's AP_ITEM_GOLDEN_BOAR_STATUE delivery
    // block, the exact analog of the AP_ITEM_KEY_HUNT_KEY block.
    uint32_t GetGoldenBoarStatueCount() const { return GetFlagTier("golden_boar_statue_count"); }
    void GrantStatue() { SetFlagTier("golden_boar_statue_count", GetFlagTier("golden_boar_statue_count") + 1); }

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
    uint32_t _zoneLevelerZoneId = 0;
    std::unordered_set<uint32_t> _zoneLevelerAllowedHubZoneIds;
    bool _zoneLevelerAllowHubZone = false;
    std::string _zoneLevelerZoneKey;
    std::unordered_set<std::string> _zoneLevelerGoals;
    uint32_t _zoneLevelerStatuesRequired = 0;
    uint32_t _zoneLevelerInstancesRequired = 0;
    std::vector<std::string> _zoneLevelerInstanceKeys;
};

#define sArchipelagoRealmState ArchipelagoRealmState::instance()
