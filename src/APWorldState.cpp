// azerothcore-wotlk/modules/archipelago_wow/src/APWorldState.cpp
#include "APWorldState.h"

#include <fstream>
#include <sstream>
#include <unordered_map>

#include "APWorldStatePure.h"
#include "DatabaseEnv.h"
#include "Log.h"
#include "vendor/json.hpp"

using json = nlohmann::json;

namespace
{
    // Sec8's row_id BIGINT column snapshots exactly one table's worth of
    // PK per row -- apply/restore need to know which real column that
    // BIGINT maps back onto for a plain `UPDATE <table> SET ... WHERE
    // <pk column> = ?`. Only creature_template (M5.1 Mobs, PK `entry`) is
    // wired up as of M5.0 -- extend this map, one line per table, the
    // moment a later milestone's category snapshots a new single-PK
    // table. A composite-keyed table (npc_vendor, the loot templates --
    // Sec8's own documented caveat) needs a different resolution entirely
    // and is out of scope until whichever of M5.3-M5.5 first touches one;
    // Apply()/RestoreAllSnapshottedRows() below both log and skip any row
    // for a table not in this map, rather than guessing a column name.
    std::unordered_map<std::string, std::string> const PK_COLUMN_BY_TABLE = {
        {"creature_template", "entry"},
    };
}

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
                setClause << column << " = \"" << valueStr << "\"";
            }
            WorldDatabase.Execute("UPDATE {} SET {} WHERE {} = {}", tableName, setClause.str(), pkIt->second, rowId);
        } while (result->NextRow());
    }

    WorldDatabase.Execute("DELETE FROM archipelago_world_mutation_snapshot");
}

void APWorldState::Apply(std::string const& fileWorldSeed, std::string const& contentsJson)
{
    json parsed = json::parse(contentsJson, nullptr, false);
    json categories = parsed.value("categories", json::object());

    for (auto const& [categoryKey, rows] : categories.items())
    {
        if (!rows.is_array())
            continue;
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

            std::ostringstream selectCols;
            for (size_t i = 0; i < columnNames.size(); ++i)
            {
                if (i > 0)
                    selectCols << ", ";
                selectCols << columnNames[i];
            }

            // NULL-safe capture: Field::Get<std::string>() on a NULL
            // column silently returns "" (not JSON null), which would
            // permanently lose a true SQL NULL the moment it's captured
            // -- check IsNull() explicitly and store JSON null instead.
            json snapshotColumns = json::object();
            if (QueryResult result = WorldDatabase.Query("SELECT {} FROM {} WHERE {} = {}", selectCols.str(), tableName, pkColumn, rowId))
            {
                Field* fields = result->Fetch();
                for (size_t i = 0; i < columnNames.size(); ++i)
                {
                    if (fields[i].IsNull())
                        snapshotColumns[columnNames[i]] = nullptr;
                    else
                        snapshotColumns[columnNames[i]] = fields[i].Get<std::string>();
                }
            }
            else
            {
                LOG_ERROR("module.archipelago_wow", "Archipelago: APWorldState found no row {}#{} to mutate, skipping", tableName, rowId);
                continue;
            }

            std::string escapedSnapshotJson = snapshotColumns.dump();
            WorldDatabase.EscapeString(escapedSnapshotJson);
            std::string tableNameEscaped = tableName;
            WorldDatabase.EscapeString(tableNameEscaped);
            // INSERT IGNORE: two categories in the same mutation-data file
            // could target the same (table_name, row_id) -- the FIRST
            // capture is the true pristine value; a later category
            // targeting the same row must never overwrite that snapshot
            // with an already-mutated value, and must never hard-fail
            // the whole apply over a duplicate-key error.
            WorldDatabase.Execute(
                "INSERT IGNORE INTO archipelago_world_mutation_snapshot (table_name, row_id, original_data_json) VALUES (\"{}\", {}, \"{}\")",
                tableNameEscaped, rowId, escapedSnapshotJson);

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
                setClause << column << " = \"" << valueStr << "\"";
            }
            WorldDatabase.Execute("UPDATE {} SET {} WHERE {} = {}", tableName, setClause.str(), pkColumn, rowId);
        }
    }

    std::string escapedSeed = fileWorldSeed;
    WorldDatabase.EscapeString(escapedSeed);
    WorldDatabase.Execute("DELETE FROM archipelago_world_mutation_state WHERE id = 1");
    WorldDatabase.Execute("INSERT INTO archipelago_world_mutation_state (id, world_seed, applied_at) VALUES (1, \"{}\", NOW())", escapedSeed);
}
