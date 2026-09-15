// azerothcore-wotlk/modules/archipelago_wow/src/APWorldState.h
#pragma once

#include <ctime>
#include <optional>
#include <string>

#include "DayNightPure.h"

// M5.0 Sec7-8: applies the generation-time mutation-data file
// (<slot_name>_mutations.json) to WorldDatabase at server boot, tracked
// via a world_seed marker + a generic pristine-row snapshot (both in the
// `world` DB -- Sec8's rebuild-together reasoning). Called once from
// ArchipelagoWorldScript::OnStartup, AFTER WorldDatabase is open (Sec7's
// hook-timing ruling) -- never from OnBeforeConfigLoad/OnAfterConfigLoad.
class APWorldState
{
public:
    static APWorldState* instance();

    // slotName: the module's own Archipelago.SlotName config value. No-op
    // (logs and returns) if slotName is empty or the expected mutation
    // file doesn't exist -- Pipeline B mutation-data is an
    // operator-supplied artifact (Sec7), never a hard boot requirement.
    void ApplyIfNeeded(std::string const& slotName);

    // Sec9's live cross-check reads this to compare against a connected
    // seed's own slot_data world_seed. std::nullopt if no marker row
    // exists yet (fresh install, no mutation-data ever applied).
    std::optional<std::string> GetAppliedWorldSeed();

    // M5.6.1: resolves this seed's day/night override, if any. Returns
    // false (out-params untouched) when the resolved mode is Vanilla --
    // callers must fall back to their own stock behavior in that case,
    // exactly like every other weak-hook consumer in this codebase
    // (ArchipelagoShouldSuppressBankAccess et al.).
    bool ResolveDayNight(float& outSpeed, time_t& outGameTime);

private:
    void Apply(std::string const& fileWorldSeed, std::string const& contentsJson);
    void RestoreAllSnapshottedRows();

    Archipelago::DayNight::DayNightState _dayNightState;
};

#define sAPWorldState APWorldState::instance()
