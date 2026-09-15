// azerothcore-wotlk/modules/archipelago_wow/src/APWorldState.cpp
#include "APWorldState.h"

#include <fstream>
#include <sstream>
#include <unordered_map>

#include "APWorldStatePure.h"
#include "DatabaseEnv.h"
#include "QueryResult.h"
#include "Log.h"
#include "vendor/json.hpp"
#include "Timer.h"       // Acore::Time::TimeBreakdown
#include "GameTime.h"    // GameTime::GetGameTime

using json = nlohmann::json;

namespace
{
    // Sec8's row_id BIGINT column snapshots exactly one table's worth of PK per row -- apply/restore need
    // to know which real column that BIGINT maps back onto for a plain `UPDATE <table> SET ... WHERE
    // <pk column> = ?`. Extend this map, one line per table, the moment a later milestone's category
    // snapshots a new single-PK table. Apply()/RestoreAllSnapshottedRows() below both log and skip any
    // row for a table not in this map, rather than guessing a column name.
    //
    // Tables wired up so far: creature_template (PK `entry`, M5.0), creature (PK `guid`, M5.1.0),
    // game_weather (PK `zone`, M5.6.0), creature_template_model (PK `CreatureID`, M5.6.2 -- composite
    // key, see caveat below), creature_template_addon (PK `entry`, M5.6.3), and gameobject_template
    // (PK `entry`, M5.6.4). Composite-keyed tables without a single-row-per-key restriction (npc_vendor,
    // the loot templates -- Sec8's own documented caveat) need a different resolution entirely and are
    // out of scope until whichever milestone first touches one.
    //
    // IMPORTANT composite-key caveat: creature_template_model has a COMPOSITE primary key (CreatureID,
    // Idx) in the schema, but registering CreatureID alone here is ONLY SAFE because M5.6.2's extraction
    // step (in a separate Python repository) restricts candidates to creatures with exactly one
    // creature_template_model row -- for that specific subset, CreatureID alone uniquely identifies the
    // one row. This map has no way to express "single-column PK for a restricted subset only" -- the
    // safety boundary lives entirely in the Python layer, not here. A future developer reusing
    // creature_template_model for another purpose (without the single-row restriction) could silently
    // corrupt data. See M5.6.2's Global Constraints for context.
    std::unordered_map<std::string, std::string> const PK_COLUMN_BY_TABLE = {
        {"creature_template", "entry"},
        {"creature", "guid"},
        {"game_weather", "zone"},
        {"creature_template_model", "CreatureID"},
        {"creature_template_addon", "entry"},
        {"gameobject_template", "entry"},
    };
}

// Declared (not defined) directly in Player.cpp, next to its own patched
// call site (M5.6.1) -- deliberately no shared header, same
// deliberately-no-shared-header shape as
// ArchipelagoShouldSuppressBankAccess/ArchipelagoShouldSuppressGlyphSlot.
// See this plan's Global Constraints for why a hard #include wasn't used.
extern bool (*ArchipelagoResolveDayNight)(float& outSpeed, time_t& outGameTime);

APWorldState* APWorldState::instance()
{
    static APWorldState instance;
    return &instance;
}

std::optional<std::string> APWorldState::GetAppliedWorldSeed()
{
    if (QueryResult result = WorldDatabase.Query("SELECT world_seed FROM archipelago_world_mutation_state WHERE id = 1"))
        return result->Fetch()[0].Get<std::string>();
    return std::nullopt;
}

void APWorldState::ApplyIfNeeded(std::string const& slotName)
{
    if (slotName.empty())
    {
        LOG_INFO("module.archipelago_wow", "Archipelago: APWorldState skipped -- Archipelago.SlotName is empty");
        return;
    }

    std::string path = Archipelago::WorldState::BuildMutationFilePath(slotName);
    std::ifstream file(path);
    if (!file.is_open())
    {
        LOG_INFO("module.archipelago_wow", "Archipelago: APWorldState skipped -- no mutation-data file found at '{}'", path);
        return;
    }

    std::stringstream buffer;
    buffer << file.rdbuf();
    std::string contentsJson = buffer.str();

    json parsed = json::parse(contentsJson, nullptr, false);
    if (parsed.is_discarded() || !parsed.contains("world_seed") || !parsed["world_seed"].is_string())
    {
        LOG_ERROR("module.archipelago_wow", "Archipelago: APWorldState failed to parse '{}' -- malformed JSON or missing world_seed", path);
        return;
    }
    std::string fileWorldSeed = parsed["world_seed"].get<std::string>();

    // M5.6.1: day/night has no DB row to snapshot/restore/skip -- resolve
    // it on EVERY successful parse, independent of the category
    // marker/skip decision below (which only governs DB-row re-application).
    // Wiring the weak hook here too (idempotent, cheap to repeat) guarantees
    // it's set before any player can log in and hit
    // SendInitialPacketsBeforeAddToMap(), without needing a second,
    // separate module-init call site.
    if (parsed.contains("day_night") && parsed["day_night"].is_object())
    {
        std::string modeStr = parsed["day_night"].value("mode", "vanilla");
        double speedPercent = parsed["day_night"].value("speed_percent", 100.0);
        _dayNightState = Archipelago::DayNight::ParseDayNightState(modeStr, speedPercent);
    }
    ArchipelagoResolveDayNight = [](float& outSpeed, time_t& outGameTime) {
        return sAPWorldState->ResolveDayNight(outSpeed, outGameTime);
    };

    bool markerPresent = false;
    std::string markerWorldSeed;
    if (QueryResult result = WorldDatabase.Query("SELECT world_seed FROM archipelago_world_mutation_state WHERE id = 1"))
    {
        markerPresent = true;
        markerWorldSeed = result->Fetch()[0].Get<std::string>();
    }

    auto action = Archipelago::WorldState::DecideMutationApplyAction(markerPresent, markerWorldSeed, fileWorldSeed);
    if (action == Archipelago::WorldState::MutationApplyAction::Skip)
    {
        LOG_INFO("module.archipelago_wow", "Archipelago: APWorldState world_seed '{}' already applied, skipping", fileWorldSeed);
        return;
    }

    if (markerPresent)
        RestoreAllSnapshottedRows();

    Apply(fileWorldSeed, contentsJson);
}

void APWorldState::RestoreAllSnapshottedRows()
{
    if (QueryResult result = WorldDatabase.Query("SELECT table_name, row_id, original_data_json FROM archipelago_world_mutation_snapshot"))
    {
        do
        {
            Field* fields = result->Fetch();
            std::string tableName = fields[0].Get<std::string>();
            uint64_t rowId = fields[1].Get<uint64_t>();
            std::string dataJson = fields[2].Get<std::string>();

            auto pkIt = PK_COLUMN_BY_TABLE.find(tableName);
            if (pkIt == PK_COLUMN_BY_TABLE.end())
            {
                LOG_ERROR("module.archipelago_wow", "Archipelago: APWorldState cannot restore unknown table '{}' -- not registered in PK_COLUMN_BY_TABLE", tableName);
                continue;
            }

            json columns = json::parse(dataJson, nullptr, false);
            if (columns.is_discarded() || !columns.is_object())
            {
                LOG_ERROR("module.archipelago_wow", "Archipelago: APWorldState skipping corrupt snapshot for {}#{}", tableName, rowId);
                continue;
            }

            std::ostringstream setClause;
            bool first = true;
            for (auto const& [column, value] : columns.items())
            {
                if (!first)
                    setClause << ", ";
                first = false;
                if (value.is_null())
                {
                    setClause << column << " = NULL";
                    continue;
                }
                std::string valueStr = value.is_string() ? value.get<std::string>() : value.dump();
                WorldDatabase.EscapeString(valueStr);
                setClause << column << " = '" << valueStr << "'";
            }

            // Fix 2 (M5.6.2's own final review, same rationale as Apply()'s
            // capture-side guard): never blindly UPDATE a row when the PK
            // filter doesn't match exactly one live row -- a table like
            // creature_template_model has a composite real PK, and a
            // schema-drifted extra row sharing this rowId's single-column
            // PK value would otherwise get silently overwritten alongside
            // the intended row.
            if (QueryResult countResult = WorldDatabase.Query("SELECT COUNT(*) FROM {} WHERE {} = {}", tableName, pkIt->second, rowId))
            {
                uint64_t matchingRowCount = countResult->Fetch()[0].Get<uint64_t>();
                if (matchingRowCount != 1)
                {
                    LOG_ERROR("module.archipelago_wow", "Archipelago: APWorldState found {} rows for {}#{} (expected exactly 1, PK column '{}' may not uniquely identify this row for this table) -- skipping restore to avoid corrupting multiple rows", matchingRowCount, tableName, rowId, pkIt->second);
                    continue;
                }
            }

            WorldDatabase.DirectExecute("UPDATE {} SET {} WHERE {} = {}", tableName, setClause.str(), pkIt->second, rowId);
        } while (result->NextRow());
    }

    WorldDatabase.DirectExecute("DELETE FROM archipelago_world_mutation_snapshot");
}

void APWorldState::Apply(std::string const& fileWorldSeed, std::string const& contentsJson)
{
    json parsed = json::parse(contentsJson, nullptr, false);
    json categories = json::object();
    if (parsed.contains("categories"))
    {
        if (parsed["categories"].is_object())
            categories = parsed["categories"];
        else
            LOG_ERROR("module.archipelago_wow", "Archipelago: APWorldState 'categories' field is not an object, treating as empty");
    }

    for (auto const& [categoryKey, rows] : categories.items())
    {
        if (!rows.is_array())
        {
            LOG_ERROR("module.archipelago_wow", "Archipelago: APWorldState skipping non-array rows for category '{}'", categoryKey);
            continue;
        }
        for (auto const& row : rows)
        {
            if (!row.is_array() || row.size() != 3 || !row[0].is_string() || !row[2].is_object())
            {
                LOG_ERROR("module.archipelago_wow", "Archipelago: APWorldState skipping malformed mutation row in category '{}'", categoryKey);
                continue;
            }
            std::string tableName = row[0].get<std::string>();
            if (!row[1].is_number_integer())
            {
                LOG_ERROR("module.archipelago_wow", "Archipelago: APWorldState skipping composite-keyed row for table '{}' (category '{}') -- not yet supported", tableName, categoryKey);
                continue;
            }
            uint64_t rowId = row[1].get<uint64_t>();
            json payload = row[2];

            auto pkIt = PK_COLUMN_BY_TABLE.find(tableName);
            if (pkIt == PK_COLUMN_BY_TABLE.end())
            {
                LOG_ERROR("module.archipelago_wow", "Archipelago: APWorldState skipping unknown table '{}' -- not registered in PK_COLUMN_BY_TABLE", tableName);
                continue;
            }
            std::string const& pkColumn = pkIt->second;

            std::vector<std::string> columnNames;
            for (auto const& [column, _value] : payload.items())
                columnNames.push_back(column);

            std::string tableNameEscaped = tableName;
            WorldDatabase.EscapeString(tableNameEscaped);

            // Sec8 cross-category fix (M5.6.2's own final review): a
            // (table_name, row_id) may already have a snapshot captured by
            // an EARLIER category in this same categories loop (categories
            // are processed in the JSON's own key order -- alphabetical,
            // per mutation_output.py's sort_keys=True). If so, only the
            // columns THIS category's payload needs that are NOT already
            // in that snapshot get captured and merged in -- an already-
            // captured column's value is never overwritten (it's already
            // the true pristine value for that column), and a later
            // category's own columns are never silently dropped the way a
            // plain INSERT IGNORE would drop them. See
            // ColumnsMissingFromSnapshot (APWorldStatePure.h) for the pure
            // set-difference this relies on.
            std::vector<std::string> existingColumnNames;
            std::string existingSnapshotJson;
            bool hasExistingSnapshot = false;
            if (QueryResult existingResult = WorldDatabase.Query(
                    "SELECT original_data_json FROM archipelago_world_mutation_snapshot WHERE table_name = '{}' AND row_id = {}",
                    tableNameEscaped, rowId))
            {
                hasExistingSnapshot = true;
                existingSnapshotJson = existingResult->Fetch()[0].Get<std::string>();
                json existingParsed = json::parse(existingSnapshotJson, nullptr, false);
                if (!existingParsed.is_discarded() && existingParsed.is_object())
                    for (auto const& [column, _value] : existingParsed.items())
                        existingColumnNames.push_back(column);
            }

            std::vector<std::string> columnsToCapture = hasExistingSnapshot
                ? Archipelago::WorldState::ColumnsMissingFromSnapshot(existingColumnNames, columnNames)
                : columnNames;

            if (!columnsToCapture.empty())
            {
                std::ostringstream captureSelectCols;
                for (size_t i = 0; i < columnsToCapture.size(); ++i)
                {
                    if (i > 0)
                        captureSelectCols << ", ";
                    captureSelectCols << columnsToCapture[i];
                }

                // NULL-safe capture: Field::Get<std::string>() on a NULL
                // column silently returns "" (not JSON null), which would
                // permanently lose a true SQL NULL the moment it's captured
                // -- check IsNull() explicitly and store JSON null instead.
                json capturedColumns = json::object();
                if (QueryResult result = WorldDatabase.Query("SELECT {} FROM {} WHERE {} = {}", captureSelectCols.str(), tableName, pkColumn, rowId))
                {
                    if (result->GetRowCount() != 1)
                    {
                        LOG_ERROR("module.archipelago_wow", "Archipelago: APWorldState found {} rows for {}#{} (expected exactly 1, PK column '{}' may not uniquely identify this row for this table) -- skipping to avoid corrupting multiple rows", result->GetRowCount(), tableName, rowId, pkColumn);
                        continue;
                    }
                    Field* fields = result->Fetch();
                    for (size_t i = 0; i < columnsToCapture.size(); ++i)
                    {
                        if (fields[i].IsNull())
                            capturedColumns[columnsToCapture[i]] = nullptr;
                        else
                            capturedColumns[columnsToCapture[i]] = fields[i].Get<std::string>();
                    }
                }
                else
                {
                    LOG_ERROR("module.archipelago_wow", "Archipelago: APWorldState found no row {}#{} to mutate, skipping", tableName, rowId);
                    continue;
                }

                if (hasExistingSnapshot)
                {
                    json mergedColumns = json::parse(existingSnapshotJson, nullptr, false);
                    if (mergedColumns.is_discarded() || !mergedColumns.is_object())
                        mergedColumns = json::object();
                    for (auto const& [column, value] : capturedColumns.items())
                        mergedColumns[column] = value;
                    std::string escapedMergedJson = mergedColumns.dump();
                    WorldDatabase.EscapeString(escapedMergedJson);
                    WorldDatabase.DirectExecute(
                        "UPDATE archipelago_world_mutation_snapshot SET original_data_json = '{}' WHERE table_name = '{}' AND row_id = {}",
                        escapedMergedJson, tableNameEscaped, rowId);
                }
                else
                {
                    std::string escapedSnapshotJson = capturedColumns.dump();
                    WorldDatabase.EscapeString(escapedSnapshotJson);
                    WorldDatabase.DirectExecute(
                        "INSERT INTO archipelago_world_mutation_snapshot (table_name, row_id, original_data_json) VALUES ('{}', {}, '{}')",
                        tableNameEscaped, rowId, escapedSnapshotJson);
                }
            }

            std::ostringstream setClause;
            bool first = true;
            for (auto const& [column, value] : payload.items())
            {
                if (!first)
                    setClause << ", ";
                first = false;
                if (value.is_null())
                {
                    setClause << column << " = NULL";
                    continue;
                }
                std::string valueStr = value.is_string() ? value.get<std::string>() : value.dump();
                WorldDatabase.EscapeString(valueStr);
                setClause << column << " = '" << valueStr << "'";
            }
            WorldDatabase.DirectExecute("UPDATE {} SET {} WHERE {} = {}", tableName, setClause.str(), pkColumn, rowId);
        }
    }

    std::string escapedSeed = fileWorldSeed;
    WorldDatabase.EscapeString(escapedSeed);
    WorldDatabase.DirectExecute("DELETE FROM archipelago_world_mutation_state WHERE id = 1");
    WorldDatabase.DirectExecute("INSERT INTO archipelago_world_mutation_state (id, world_seed, applied_at) VALUES (1, '{}', NOW())", escapedSeed);
}

bool APWorldState::ResolveDayNight(float& outSpeed, time_t& outGameTime)
{
    if (_dayNightState.mode == Archipelago::DayNight::DayNightMode::Vanilla)
        return false;

    outSpeed = Archipelago::DayNight::ResolveGameSpeed(_dayNightState);

    // SpeedMultiplier doesn't touch tm_hour/tm_min (ResolveTimeBreakdown is a pure
    // passthrough for it), so outGameTime is just liveNow unchanged -- skip the
    // breakdown/mktime round-trip entirely rather than pay for a no-op conversion.
    if (_dayNightState.mode == Archipelago::DayNight::DayNightMode::SpeedMultiplier)
    {
        outGameTime = GameTime::GetGameTime().count();
        return true;
    }

    time_t liveNow = GameTime::GetGameTime().count();
    std::tm liveBreakdown = Acore::Time::TimeBreakdown(liveNow);
    std::tm resolvedBreakdown = Archipelago::DayNight::ResolveTimeBreakdown(_dayNightState, liveBreakdown);
    // NOTE: mktime() normalizes resolvedBreakdown as local time, which includes
    // resolving DST. On the ~2 days/year of a DST transition, an ambiguous
    // (fall-back) or nonexistent (spring-forward) local hour could in theory make
    // mktime() return a value slightly off from a naive hour-of-day expectation.
    // Only PermaDay/PermaNight reach this line (Vanilla returns early above,
    // SpeedMultiplier short-circuits just above), and the exact instant within
    // the target hour isn't gameplay-significant for either, so this is noted
    // here rather than worked around.
    outGameTime = mktime(&resolvedBreakdown);
    return true;
}
