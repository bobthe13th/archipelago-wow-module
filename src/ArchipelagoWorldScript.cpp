// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoWorldScript.cpp
#include <algorithm>
#include <mutex>
#include <optional>
#include <string>
#include <unordered_map>
#include <vector>

#include "Config.h"
#include "Log.h"
#include "ScriptMgr.h"
#include "World.h"
#include "APDelivery.h"
#include "APGating.h"
#include "APItemDisplay.h"
#include "ArchipelagoDeathLink.h"
#include "ArchipelagoFillerContentTable.h"
#include "ArchipelagoManager.h"
#include "ArchipelagoRealmState.h"

// Defined in ArchipelagoPlayerScript.cpp. Touches Player/CharacterCache/
// CharacterDatabase, so it must only ever be invoked from the world thread.
void DeliverArchipelagoItems(std::vector<Archipelago::ReceivedItem> const& items, std::string const& deliveryCharacter, Archipelago::Delivery::Policy deliveryPolicy, Archipelago::Delivery::CostTier auctionHouseCostTier);

namespace
{
    // The apworld's DeliveryPolicy Choice (Task 12 Step 4) is resolved into
    // slot_data at generation, but this module has no slot_data parsing (the
    // same known gap Finding #10 documents for the gate-family toggles) --
    // an operator running a non-default delivery policy must mirror it here
    // by hand via Archipelago.DeliveryPolicy, same discipline as
    // Archipelago.ProficiencyGating/AccessGating/CharacterUnlockGating.
    Archipelago::Delivery::Policy ParseDeliveryPolicy(std::string const& value)
    {
        if (value == "SharedCacheNpc")
            return Archipelago::Delivery::Policy::SharedCacheNpc;
        if (value == "AuctionHouse")
            return Archipelago::Delivery::Policy::AuctionHouse;
        if (value == "FirstToClaim")
            return Archipelago::Delivery::Policy::FirstToClaim;
        if (value == "AllAccountsDelivery")
            return Archipelago::Delivery::Policy::AllAccountsDelivery;
        if (value != "SingleDeliveryCharacter")
            LOG_ERROR("module.archipelago_wow", "Archipelago: unrecognized Archipelago.DeliveryPolicy '{}', falling back to SingleDeliveryCharacter", value);
        return Archipelago::Delivery::Policy::SingleDeliveryCharacter;
    }

    // Task 14: same manual-sync mirror as ParseDeliveryPolicy above, for the apworld's
    // AuctionHouseCostTier Choice.
    Archipelago::Delivery::CostTier ParseCostTier(std::string const& value)
    {
        if (value == "Free")
            return Archipelago::Delivery::CostTier::Free;
        if (value == "Cheap")
            return Archipelago::Delivery::CostTier::Cheap;
        if (value == "Expensive")
            return Archipelago::Delivery::CostTier::Expensive;
        if (value == "Random")
            return Archipelago::Delivery::CostTier::Random;
        if (value != "Market")
            LOG_ERROR("module.archipelago_wow", "Archipelago: unrecognized Archipelago.AuctionHouseCostTier '{}', falling back to Market", value);
        return Archipelago::Delivery::CostTier::Market;
    }

    // Task 20: parses the apworld's SpiritHealerVariant Choice into its two
    // independent halves. "Neither" is read as "neither penalty applies" (both
    // suppressed), not "neither is suppressed" -- the design spec names this
    // option "neither" without pinning the reading; see the apworld's
    // options.py docstring for the same resolved interpretation.
    void ParseSpiritHealerVariant(std::string const& value, bool& suppressResSickness, bool& suppressDurabilityLoss)
    {
        suppressResSickness = false;
        suppressDurabilityLoss = false;
        if (value == "NoResSickness")
            suppressResSickness = true;
        else if (value == "NoDurabilityLoss")
            suppressDurabilityLoss = true;
        else if (value == "Neither")
        {
            suppressResSickness = true;
            suppressDurabilityLoss = true;
        }
        else if (value != "Vanilla")
            LOG_ERROR("module.archipelago_wow", "Archipelago: unrecognized Archipelago.SpiritHealerVariant '{}', falling back to Vanilla", value);
    }

    // Task 21: parses the apworld's ComboUnlocksScope Choice (off/tbc/wotlk/both)
    // into its two independent scope flags -- see APGating.cpp's
    // ApplyComboUnlockMasks for why each combo needs its own flag rather than one
    // combined toggle.
    void ParseComboUnlocksScope(std::string const& value, bool& tbcScopeActive, bool& wotlkScopeActive)
    {
        tbcScopeActive = false;
        wotlkScopeActive = false;
        if (value == "Tbc")
            tbcScopeActive = true;
        else if (value == "Wotlk")
            wotlkScopeActive = true;
        else if (value == "Both")
        {
            tbcScopeActive = true;
            wotlkScopeActive = true;
        }
        else if (value != "Off")
            LOG_ERROR("module.archipelago_wow", "Archipelago: unrecognized Archipelago.ComboUnlocksScope '{}', falling back to Off", value);
    }

    // Found needed during Task 23/24's own review: this bespoke C++ APClient
    // has no embedded rules-evaluation engine (unlike the reference Python
    // client), so it cannot independently derive "is the goal met" without
    // knowing which GameMode is active -- ArchipelagoGoals.cpp's
    // CheckAndSendGoalComplete dispatches on this. Values are PascalCase
    // (this module's own conf convention), parsed into the bare snake_case
    // strings goals.py's dispatch table itself uses as keys.
    std::string ParseGameMode(std::string const& value)
    {
        static std::unordered_map<std::string, std::string> const modes = {
            { "Sprint", "sprint" },
            { "KeyHunt", "key_hunt" },
            { "Classic", "classic" },
            { "BurningCrusade", "burning_crusade" },
            { "Wrath", "wrath" },
            { "Completionist", "completionist" },
            { "Artisan", "artisan" },
            { "Collector", "collector" },
            { "AchievementHunt", "achievement_hunt" },
            { "Explorer", "explorer" },
            { "FishingQuest", "fishing_quest" },
        };
        auto it = modes.find(value);
        if (it != modes.end())
            return it->second;

        LOG_ERROR("module.archipelago_wow", "Archipelago: unrecognized Archipelago.GameMode '{}', falling back to Sprint", value);
        return "sprint";
    }

    // Values are PascalCase (this module's own conf convention), parsed into
    // the bare snake_case strings the apworld's CompletionistExpansion Choice
    // itself uses as current_key (vanilla/tbc/wotlk) -- only meaningful when
    // Archipelago.GameMode is Completionist.
    std::string ParseCompletionistExpansion(std::string const& value)
    {
        if (value == "Tbc")
            return "tbc";
        if (value == "Wotlk")
            return "wotlk";
        if (value != "Vanilla")
            LOG_ERROR("module.archipelago_wow", "Archipelago: unrecognized Archipelago.CompletionistExpansion '{}', falling back to Vanilla", value);
        return "vanilla";
    }

    // Values are PascalCase (this module's own conf convention), parsed into
    // the bare snake_case strings the apworld's AchievementHuntTier/
    // AchievementHuntSubset Choices use as current_key. Only meaningful when
    // Archipelago.GameMode is AchievementHunt.
    std::string ParseAchievementHuntTier(std::string const& value)
    {
        if (value == "NinetyNinePercent")
            return "ninety_nine_percent";
        if (value == "NamedSubset")
            return "named_subset";
        if (value != "HundredPercent")
            LOG_ERROR("module.archipelago_wow", "Archipelago: unrecognized Archipelago.AchievementHuntTier '{}', falling back to HundredPercent", value);
        return "hundred_percent";
    }

    std::string ParseAchievementHuntSubset(std::string const& value)
    {
        static std::unordered_map<std::string, std::string> const subsets = {
            { "Explorer", "explorer" },
            { "Dungeons", "dungeons" },
            { "Raids", "raids" },
            { "Professions", "professions" },
            { "Reputation", "reputation" },
            { "Pvp", "pvp" },
            { "PvP", "pvp" },
        };
        auto it = subsets.find(value);
        if (it != subsets.end())
            return it->second;
        LOG_ERROR("module.archipelago_wow", "Archipelago: unrecognized Archipelago.AchievementHuntSubset '{}', falling back to Explorer", value);
        return "explorer";
    }
}

class ArchipelagoWorldScript : public WorldScript
{
public:
    ArchipelagoWorldScript()
        : WorldScript("ArchipelagoWorldScript", { WORLDHOOK_ON_BEFORE_CONFIG_LOAD, WORLDHOOK_ON_AFTER_CONFIG_LOAD, WORLDHOOK_ON_STARTUP, WORLDHOOK_ON_SHUTDOWN, WORLDHOOK_ON_UPDATE })
    { }

    void OnBeforeConfigLoad(bool /*reload*/) override
    {
        _enabled = sConfigMgr->GetOption<bool>("Archipelago.Enabled", false);
        _serverAddress = sConfigMgr->GetOption<std::string>("Archipelago.ServerAddress", "localhost");
        _serverPort = sConfigMgr->GetOption<uint16_t>("Archipelago.ServerPort", 38281);
        _slotName = sConfigMgr->GetOption<std::string>("Archipelago.SlotName", "");
        _password = sConfigMgr->GetOption<std::string>("Archipelago.Password", "");
        _useTls = sConfigMgr->GetOption<bool>("Archipelago.UseTLS", false);
        _deliveryCharacter = sConfigMgr->GetOption<std::string>("Archipelago.DeliveryCharacter", "");
        _reconnectMinSeconds = sConfigMgr->GetOption<int32_t>("Archipelago.ReconnectMinSeconds", 2);
        _reconnectMaxSeconds = sConfigMgr->GetOption<int32_t>("Archipelago.ReconnectMaxSeconds", 60);
        _proficiencyGating = sConfigMgr->GetOption<bool>("Archipelago.ProficiencyGating", false);
        _accessGating = sConfigMgr->GetOption<bool>("Archipelago.AccessGating", false);
        _characterUnlockGating = sConfigMgr->GetOption<bool>("Archipelago.CharacterUnlockGating", false);
        _deliveryPolicy = ParseDeliveryPolicy(sConfigMgr->GetOption<std::string>("Archipelago.DeliveryPolicy", "SingleDeliveryCharacter"));
        _auctionHouseCostTier = ParseCostTier(sConfigMgr->GetOption<std::string>("Archipelago.AuctionHouseCostTier", "Market"));

        // Task 16 (design spec Sec7.2): same manual-sync mirror-toggle discipline as
        // every other option above -- mirrored into ArchipelagoRealmState rather than
        // kept as a member here, since the consuming hooks (OnPlayerLogin,
        // OnPlayerLevelChanged) live in different PlayerScript classes this class
        // cannot pass a parameter to directly.
        sArchipelagoRealmState->SetCatchUpPolicy(sConfigMgr->GetOption<std::string>("Archipelago.CatchUpPolicy", "Nothing"));
        sArchipelagoRealmState->SetCatchUpPercentPerLevel(sConfigMgr->GetOption<uint32_t>("Archipelago.CatchUpPercentPerLevel", 10));

        // Task 19 (DeathLink, design spec Sec11): same not-persisted mirror-toggle
        // discipline as CatchUpPolicy above -- consumed from ArchipelagoDeathLinkScript
        // (a different PlayerScript class) and from this class's own OnUpdate (incoming
        // bounce processing), so both need to read the cached value from RealmState
        // rather than a member here.
        sArchipelagoRealmState->SetDeathLinkSendEnabled(sConfigMgr->GetOption<bool>("Archipelago.DeathLinkSendEnabled", false));
        sArchipelagoRealmState->SetDeathLinkReceiveEnabled(sConfigMgr->GetOption<bool>("Archipelago.DeathLinkReceiveEnabled", false));
        sArchipelagoRealmState->SetDeathLinkSendCooldownSeconds(sConfigMgr->GetOption<uint32_t>("Archipelago.DeathLinkSendCooldownSeconds", 15));
        sArchipelagoRealmState->SetDeathLinkReceiveCooldownSeconds(sConfigMgr->GetOption<uint32_t>("Archipelago.DeathLinkReceiveCooldownSeconds", 15));

        // Task 20: same not-persisted mirror-toggle discipline as DeathLink above.
        // suppressResSickness feeds ArchipelagoDeathLinkScript's OnPlayerResurrect
        // veto hook; suppressDurabilityLoss feeds this class's own OnStartup rate
        // override below.
        bool suppressResSickness = false;
        bool suppressDurabilityLoss = false;
        ParseSpiritHealerVariant(sConfigMgr->GetOption<std::string>("Archipelago.SpiritHealerVariant", "Vanilla"), suppressResSickness, suppressDurabilityLoss);
        sArchipelagoRealmState->SetSuppressResSickness(suppressResSickness);
        sArchipelagoRealmState->SetSuppressDurabilityLossOnSpiritResurrect(suppressDurabilityLoss);

        // Task 21 (design spec Sec5.5): reuses the existing generic gate-family
        // flag store (SetGateFamilyEnabled) rather than adding two new dedicated
        // RealmState fields -- combo_unlock_tbc/combo_unlock_wotlk behave exactly
        // like proficiency/access/character_unlocks (a per-seed opt-in family,
        // off/vanilla by default), just two independent ones instead of one.
        bool tbcScopeActive = false;
        bool wotlkScopeActive = false;
        ParseComboUnlocksScope(sConfigMgr->GetOption<std::string>("Archipelago.ComboUnlocksScope", "Off"), tbcScopeActive, wotlkScopeActive);
        sArchipelagoRealmState->SetGateFamilyEnabled("combo_unlock_tbc", tbcScopeActive);
        sArchipelagoRealmState->SetGateFamilyEnabled("combo_unlock_wotlk", wotlkScopeActive);

        // Task 23: consumed directly as a string by
        // ArchipelagoInstanceScript.cpp's kill hook -- unlike DeliveryPolicy/
        // CostTier, there is no C++ enum for this value anywhere else in the
        // module, so no Parse* helper is needed, just validate it and warn on
        // an unrecognized value the same way every Parse* helper's fallback
        // branch does.
        std::string instanceClearMode = sConfigMgr->GetOption<std::string>("Archipelago.InstanceClearMode", "AllBosses");
        if (instanceClearMode == "AllBosses")
            sArchipelagoRealmState->SetInstanceClearMode("all_bosses");
        else if (instanceClearMode == "FinalBossOnly")
            sArchipelagoRealmState->SetInstanceClearMode("final_boss_only");
        else
        {
            LOG_ERROR("module.archipelago_wow", "Archipelago: unrecognized Archipelago.InstanceClearMode '{}', falling back to AllBosses", instanceClearMode);
            sArchipelagoRealmState->SetInstanceClearMode("all_bosses");
        }

        // Found needed during Task 23/24's own review, not originally planned
        // for either task: ArchipelagoGoals.cpp's CheckAndSendGoalComplete
        // needs to know which mode is active to report completion at all
        // (see that file's header comment for why). Same manual-sync
        // requirement as game_mode/completionist_expansion in the connected
        // seed's own YAML.
        sArchipelagoRealmState->SetGameMode(ParseGameMode(sConfigMgr->GetOption<std::string>("Archipelago.GameMode", "Sprint")));
        sArchipelagoRealmState->SetCompletionistExpansion(ParseCompletionistExpansion(sConfigMgr->GetOption<std::string>("Archipelago.CompletionistExpansion", "Vanilla")));

        // M4.9 Sec4 (Achievement Hunt): must match the connected seed's own
        // achievement_hunt_tier/achievement_hunt_subset options -- same
        // manual-sync requirement as GameMode/CompletionistExpansion above.
        sArchipelagoRealmState->SetAchievementHuntTier(ParseAchievementHuntTier(sConfigMgr->GetOption<std::string>("Archipelago.AchievementHuntTier", "HundredPercent")));
        sArchipelagoRealmState->SetAchievementHuntSubset(ParseAchievementHuntSubset(sConfigMgr->GetOption<std::string>("Archipelago.AchievementHuntSubset", "Explorer")));

        // Task 25 (Key Hunt): must match the connected seed's own
        // key_hunt_keys_required/key_hunt_instances_required options -- same
        // manual-sync requirement as GameMode/CompletionistExpansion above.
        sArchipelagoRealmState->SetKeyHuntKeysRequired(sConfigMgr->GetOption<uint32_t>("Archipelago.KeyHuntKeysRequired", 10));
        sArchipelagoRealmState->SetKeyHuntInstancesRequired(sConfigMgr->GetOption<uint32_t>("Archipelago.KeyHuntInstancesRequired", 1));

        // Task 27 (Artisan): must match the connected seed's own
        // artisan_primary_professions_required option -- same manual-sync
        // requirement as every other option above.
        sArchipelagoRealmState->SetArtisanPrimaryProfessionsRequired(sConfigMgr->GetOption<uint32_t>("Archipelago.ArtisanPrimaryProfessionsRequired", 2));

        // Task 27 (Collector): must match the connected seed's own
        // collector_items_required option -- same manual-sync requirement
        // as every other option above.
        sArchipelagoRealmState->SetCollectorItemsRequired(sConfigMgr->GetOption<uint32_t>("Archipelago.CollectorItemsRequired", 264));

        // Task 14's known collision (flagged during Task 8): AccessGating can suppress
        // a player's ability to even open the Auction House window, so combining it with
        // Policy::AuctionHouse could list an AP-earned item on the AH a player is then
        // unable to retrieve -- a real softlock. Resolved with the same fail-safe every
        // other optional-feature combination in this module uses: refuse the risky
        // combination at config load and fall back to the always-safe default rather
        // than trying to special-case the suppression hook to let a player through for
        // "just their own" AH listings.
        if (_deliveryPolicy == Archipelago::Delivery::Policy::AuctionHouse && _accessGating)
        {
            LOG_ERROR("module.archipelago_wow", "Archipelago: DeliveryPolicy=AuctionHouse with AccessGating=1 can softlock a player's own AP-earned items (they could be listed before Auction House Access is granted) -- falling back to SingleDeliveryCharacter");
            _deliveryPolicy = Archipelago::Delivery::Policy::SingleDeliveryCharacter;
        }

        // Mirror into ArchipelagoRealmState so the gating scripts (instance
        // entry, Dark Portal, Northrend transports), which only ever touch
        // ArchipelagoRealmState and never this class, can all check the same
        // cached enabled flag without each re-reading sConfigMgr on their own
        // per-call gating paths.
        sArchipelagoRealmState->SetEnabled(_enabled);

        // Optional gate families (§5.1) are opted into per-seed via the
        // player's AP YAML, but this module has no slot_data parsing yet
        // (flagged as a known gap, see docs/m4-plan.md repo-state findings) --
        // at worldserver startup there's no live AP connection to ask, so an
        // operator running an optional-gate seed must also flip the matching
        // worldserver.conf toggle by hand. Without this mirror, a seed that
        // never rolled the gate item would still permanently suppress it,
        // since the flag would never reach tier 1.
        sArchipelagoRealmState->SetGateFamilyEnabled("proficiency", _proficiencyGating);
        sArchipelagoRealmState->SetGateFamilyEnabled("access", _accessGating);
        sArchipelagoRealmState->SetGateFamilyEnabled("character_unlocks", _characterUnlockGating);

        LOG_INFO("module.archipelago_wow", "Archipelago: config loaded (Enabled={}, ServerAddress={}, ServerPort={})",
            _enabled, _serverAddress, _serverPort);
    }

    // Re-derives every live sWorld config value this module overrides
    // (durability-loss rate, combo-unlock race/class masks) from the
    // currently-cached ArchipelagoRealmState flags. None of these are
    // sWorld config values this module persists of its own -- they're
    // re-pushed on top of whatever worldserver.conf/the operator's reload
    // just set, so this must run both at startup AND after every
    // `.reload config` (OnAfterConfigLoad fires for both, confirmed at
    // World.cpp's LoadConfigSettings -- reload=true only skips a handful of
    // unrelated settings like DataDir, not this call). Before this was
    // wired into OnAfterConfigLoad, a `.reload config` would silently
    // revert both overrides to the operator's raw conf value until the next
    // full restart -- for the durability rate that's just an annoyance, but
    // for the combo-unlock masks it's a progression-integrity bug: it would
    // make Death Knight/Blood Elf/Draenei creatable again even though the
    // AP seed never delivered that unlock item.
    void ApplyRuntimeConfigOverrides()
    {
        if (sArchipelagoRealmState->GetSuppressDurabilityLossOnSpiritResurrect())
            sWorld->setRate(RATE_DURABILITY_LOSS_ON_SPIRIT_RESURRECT, 0.0f);

        Archipelago::Gating::ApplyComboUnlockMasks();
    }

    void OnAfterConfigLoad(bool reload) override
    {
        // Guarded on _enabled (the freshly-reloaded value, since
        // OnBeforeConfigLoad already re-read it above) so an operator
        // disabling the module via reload doesn't re-push these overrides --
        // matches OnStartup's own "disabled == full vanilla behavior"
        // reasoning. Safe to call ApplyComboUnlockMasks() here even without
        // re-running Load() first: OnStartup calls sArchipelagoRealmState->
        // Load() unconditionally (outside its own _enabled check), so by the
        // time any reload can happen, the persisted flags are already
        // populated in memory regardless of what _enabled was at startup.
        if (_enabled && reload)
            ApplyRuntimeConfigOverrides();
    }

    void OnStartup() override
    {
        // Realm state (including the persisted level cap) must load
        // regardless of whether the AP connection itself is enabled, so a
        // restart doesn't lose the persisted values the moment an operator
        // flips Archipelago.Enabled back on later. But actually *applying*
        // the persisted level cap to the live server config must only
        // happen when Archipelago is enabled: otherwise every character on
        // a realm that ships/keeps this module disabled would be
        // permanently capped at whatever level_cap happens to be persisted
        // (10, for a fresh install) instead of the operator's own
        // worldserver.conf MaxPlayerLevel setting -- full vanilla behavior
        // when disabled, matching every gating script below.
        sArchipelagoRealmState->Load();
        if (_enabled)
        {
            sWorld->setIntConfig(CONFIG_MAX_PLAYER_LEVEL, sArchipelagoRealmState->GetLevelCap());
            ApplyRuntimeConfigOverrides();
        }

        if (!_enabled)
            return;

        // Fix (post-Task 17 review): Task 11's filler locations carry no access
        // rule, so distribute_items_restrictive can and does place progression
        // items on them (a Progressive Level Cap copy included) -- nothing in
        // this module ever sent these checks, so any progression item that
        // landed on one would be permanently unobtainable in real play, a live
        // softlock. Since these locations have no real in-game trigger by
        // design, the correct trigger is "this realm exists" -- send every
        // filler location id, unconditionally, once per startup.
        // ArchipelagoManager::SendLocationChecks only *inserts* new ids into
        // ArchipelagoRealmState's persisted sent-check set (already-sent ids
        // are a no-op), and the AP server silently ignores any id that isn't
        // part of this slot's actual location table (MultiServer.py's
        // register_location_checks: "ignore location IDs unknown to this
        // multidata") -- so sending the full worst-case id set here is safe
        // regardless of how many this seed's options actually used, and the
        // Initialize() callback below (ResendAllChecksAndGoal) will redeliver
        // them once the AP session actually connects, exactly like every
        // other check recorded before a (re)connect completes.
        sArchipelagoMgr->SendLocationChecks(std::vector<int64_t>(
            Archipelago::Filler::LocationIds.begin(), Archipelago::Filler::LocationIds.end()));

        Archipelago::ClientOptions options;
        options.host = _serverAddress;
        options.port = _serverPort;
        options.useTls = _useTls;
        // Clamp operator-supplied values: a min <= 0 would pin APClient's backoff
        // timer at (or below) zero, spinning connect->fail->reconnect with no
        // delay and hammering both this process and the AP server.
        options.reconnectMinSeconds = std::max(1, _reconnectMinSeconds);
        options.reconnectMaxSeconds = std::max(options.reconnectMinSeconds, _reconnectMaxSeconds);
        options.connectOptions.game = "World of Warcraft WotLK";
        options.connectOptions.slotName = _slotName;
        options.connectOptions.password = _password;
        options.connectOptions.uuid = "archipelago-wow-module";

        // This callback runs on the APClient's io thread, synchronously inside
        // APClientSession::OnRead -- NOT on the world/map-update thread. Player/
        // World/CharacterDatabase APIs are not thread-safe to call from here, so
        // only ever push the received items into this lock-guarded queue; the
        // actual mail/DB work happens in OnUpdate below, which always runs on
        // the world thread.
        sArchipelagoMgr->Initialize(options,
            [this](std::vector<Archipelago::ReceivedItem> const& items) {
                std::lock_guard<std::mutex> lock(_pendingItemsMutex);
                _pendingItems.insert(_pendingItems.end(), items.begin(), items.end());
            },
            [this](std::vector<Archipelago::IncomingDeathLink> const& deathLinks) {
                std::lock_guard<std::mutex> lock(_pendingDeathLinksMutex);
                _pendingDeathLinks.insert(_pendingDeathLinks.end(), deathLinks.begin(), deathLinks.end());
            },
            [this](std::unordered_map<int64_t, Archipelago::ApItemDisplay> const& display) {
                std::lock_guard<std::mutex> lock(_pendingSlotDataMutex);
                _pendingSlotData = display;
            },
            [this](std::string const& behavior) {
                std::lock_guard<std::mutex> lock(_pendingVendorCheckRepeatBehaviorMutex);
                _pendingVendorCheckRepeatBehavior = behavior;
            });
    }

    void OnShutdown() override
    {
        sArchipelagoMgr->Shutdown();
    }

    void OnUpdate(uint32 /*diff*/) override
    {
        if (!_enabled)
            return;

        std::vector<Archipelago::ReceivedItem> items;
        {
            std::lock_guard<std::mutex> lock(_pendingItemsMutex);
            items.swap(_pendingItems);
        }
        if (!items.empty())
            DeliverArchipelagoItems(items, _deliveryCharacter, _deliveryPolicy, _auctionHouseCostTier);

        std::vector<Archipelago::IncomingDeathLink> deathLinks;
        {
            std::lock_guard<std::mutex> lock(_pendingDeathLinksMutex);
            deathLinks.swap(_pendingDeathLinks);
        }
        if (!deathLinks.empty())
            Archipelago::DeathLink::HandleIncomingDeathLinks(deathLinks);

        std::unordered_map<int64_t, Archipelago::ApItemDisplay> slotData;
        {
            std::lock_guard<std::mutex> lock(_pendingSlotDataMutex);
            if (!_slotDataApplied && !_pendingSlotData.empty())
            {
                slotData = _pendingSlotData;
                _slotDataApplied = true;
            }
        }
        if (!slotData.empty())
            Archipelago::ItemDisplay::SynthesizeAndRewireLocations(slotData);

        std::optional<std::string> vendorCheckRepeatBehavior;
        {
            std::lock_guard<std::mutex> lock(_pendingVendorCheckRepeatBehaviorMutex);
            if (!_vendorCheckRepeatBehaviorApplied && _pendingVendorCheckRepeatBehavior)
            {
                vendorCheckRepeatBehavior = _pendingVendorCheckRepeatBehavior;
                _vendorCheckRepeatBehaviorApplied = true;
            }
        }
        if (vendorCheckRepeatBehavior)
            sArchipelagoRealmState->SetVendorCheckRepeatBehavior(*vendorCheckRepeatBehavior);
    }

private:
    bool _enabled = false;
    std::string _serverAddress;
    uint16_t _serverPort = 0;
    std::string _slotName;
    std::string _password;
    bool _useTls = false;
    std::string _deliveryCharacter;
    Archipelago::Delivery::Policy _deliveryPolicy = Archipelago::Delivery::Policy::SingleDeliveryCharacter;
    Archipelago::Delivery::CostTier _auctionHouseCostTier = Archipelago::Delivery::CostTier::Market;
    int32_t _reconnectMinSeconds = 2;
    int32_t _reconnectMaxSeconds = 60;
    bool _proficiencyGating = false;
    bool _accessGating = false;
    bool _characterUnlockGating = false;

    // Populated (push_back only) from the APClient io thread inside the
    // Initialize() callback above; drained on the world thread in OnUpdate.
    // Guarded by _pendingItemsMutex so those two threads never touch the
    // vector concurrently.
    std::mutex _pendingItemsMutex;
    std::vector<Archipelago::ReceivedItem> _pendingItems;

    // Same io-thread-producer/world-thread-consumer shape as _pendingItems
    // above, for incoming DeathLink Bounces (Task 19). A separate mutex/queue
    // rather than sharing _pendingItemsMutex: the two are logically unrelated
    // (different AP commands, different downstream handling) and keeping them
    // separate avoids one queue's lock contention blocking the other's.
    std::mutex _pendingDeathLinksMutex;
    std::vector<Archipelago::IncomingDeathLink> _pendingDeathLinks;

    // Same io-thread-producer/world-thread-consumer shape as _pendingItems/
    // _pendingDeathLinks above, for the one-shot ap_item_display slot_data map
    // (M4.7 Task 4). A separate mutex rather than sharing one of the above:
    // same reasoning as _pendingDeathLinksMutex -- logically unrelated data,
    // no reason to let one queue's lock contention block the other. Guarded
    // by _slotDataApplied so the (expensive, DB-writing) synthesis pass in
    // OnUpdate below runs at most once per server run, even across a
    // reconnect that re-sends Connected/slot_data.
    std::mutex _pendingSlotDataMutex;
    std::unordered_map<int64_t, Archipelago::ApItemDisplay> _pendingSlotData;
    bool _slotDataApplied = false;

    // Same io-thread-producer/world-thread-consumer, apply-once shape as
    // _pendingSlotData/_slotDataApplied above, for the one-shot
    // vendor_check_repeat_behavior slot_data string (M4.7 Task 8). A
    // separate mutex/optional rather than folding into _pendingSlotData's:
    // logically unrelated slot_data keys, parsed by a completely separate
    // Parse* function (ParseVendorCheckRepeatBehaviorFromSlotData), so no
    // reason to let one queue's lock contention block the other.
    std::mutex _pendingVendorCheckRepeatBehaviorMutex;
    std::optional<std::string> _pendingVendorCheckRepeatBehavior;
    bool _vendorCheckRepeatBehaviorApplied = false;
};

void AddArchipelagoWorldScripts()
{
    new ArchipelagoWorldScript();
}
