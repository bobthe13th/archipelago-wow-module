// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoRealmState.cpp
#include "ArchipelagoRealmState.h"

#include "DatabaseEnv.h"
#include "Log.h"
#include "QueryResult.h"

ArchipelagoRealmState* ArchipelagoRealmState::instance()
{
    static ArchipelagoRealmState instance;
    return &instance;
}

void ArchipelagoRealmState::Load()
{
    if (QueryResult result = CharacterDatabase.Query(
            "SELECT level_cap, dark_portal_unlocked, northrend_passage_unlocked FROM archipelago_realm_state WHERE id = 1"))
    {
        Field* fields = result->Fetch();
        _levelCap = fields[0].Get<uint32_t>();
        _darkPortalUnlocked = fields[1].Get<uint8_t>() != 0;
        _northrendPassageUnlocked = fields[2].Get<uint8_t>() != 0;
    }
    else
    {
        LOG_ERROR("module.archipelago_wow", "Archipelago: archipelago_realm_state has no row with id=1, using defaults (level_cap=10). Was the pending_db_characters migration applied?");
    }

    _unlockedInstances.clear();
    if (QueryResult result = CharacterDatabase.Query("SELECT instance_key FROM archipelago_unlocked_instances"))
    {
        do
        {
            Field* fields = result->Fetch();
            _unlockedInstances.insert(fields[0].Get<std::string>());
        } while (result->NextRow());
    }

    _flagTiers.clear();
    if (QueryResult result = CharacterDatabase.Query("SELECT flag_key, tier FROM archipelago_unlocks"))
    {
        do
        {
            Field* fields = result->Fetch();
            _flagTiers[fields[0].Get<std::string>()] = fields[1].Get<uint32_t>();
        } while (result->NextRow());
    }

    LOG_INFO("module.archipelago_wow", "Archipelago: realm state loaded (level_cap={}, dark_portal={}, northrend_passage={}, unlocked_instances={}, unlock_flags={})",
        _levelCap, _darkPortalUnlocked, _northrendPassageUnlocked, _unlockedInstances.size(), _flagTiers.size());
}

void ArchipelagoRealmState::RaiseLevelCap(uint32_t newCap)
{
    if (newCap <= _levelCap)
        return;

    _levelCap = newCap;
    CharacterDatabase.Execute("UPDATE archipelago_realm_state SET level_cap = {} WHERE id = 1", newCap);
    LOG_INFO("module.archipelago_wow", "Archipelago: level cap raised to {}", newCap);
}

bool ArchipelagoRealmState::IsInstanceUnlocked(std::string const& instanceKey) const
{
    return _unlockedInstances.find(instanceKey) != _unlockedInstances.end();
}

void ArchipelagoRealmState::UnlockInstance(std::string const& instanceKey)
{
    if (_unlockedInstances.insert(instanceKey).second)
    {
        CharacterDatabase.Execute("INSERT IGNORE INTO archipelago_unlocked_instances (instance_key) VALUES (\"{}\")", instanceKey);
        LOG_INFO("module.archipelago_wow", "Archipelago: instance unlocked: {}", instanceKey);
    }
}

void ArchipelagoRealmState::UnlockDarkPortal()
{
    if (_darkPortalUnlocked)
        return;

    _darkPortalUnlocked = true;
    CharacterDatabase.Execute("UPDATE archipelago_realm_state SET dark_portal_unlocked = 1 WHERE id = 1");
    LOG_INFO("module.archipelago_wow", "Archipelago: Dark Portal unlocked");
}

void ArchipelagoRealmState::UnlockNorthrendPassage()
{
    if (_northrendPassageUnlocked)
        return;

    _northrendPassageUnlocked = true;
    CharacterDatabase.Execute("UPDATE archipelago_realm_state SET northrend_passage_unlocked = 1 WHERE id = 1");
    LOG_INFO("module.archipelago_wow", "Archipelago: Northrend Passage unlocked");
}

bool ArchipelagoRealmState::IsFlagUnlocked(std::string const& flagKey) const
{
    return GetFlagTier(flagKey) > 0;
}

uint32_t ArchipelagoRealmState::GetFlagTier(std::string const& flagKey) const
{
    auto it = _flagTiers.find(flagKey);
    return it != _flagTiers.end() ? it->second : 0;
}

void ArchipelagoRealmState::SetFlagTier(std::string const& flagKey, uint32_t tier)
{
    uint32_t& cached = _flagTiers[flagKey];
    if (tier <= cached)
        return; // flags only ever advance forward, same monotonic contract as RaiseLevelCap

    cached = tier;
    CharacterDatabase.Execute(
        "INSERT INTO archipelago_unlocks (flag_key, tier) VALUES (\"{}\", {}) "
        "ON DUPLICATE KEY UPDATE tier = {}", flagKey, tier, tier);
    LOG_INFO("module.archipelago_wow", "Archipelago: unlock flag '{}' set to tier {}", flagKey, tier);
}
