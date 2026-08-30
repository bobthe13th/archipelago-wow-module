// azerothcore-wotlk/modules/archipelago_wow/src/AllLocationNames.h
#pragma once

#include <cstdint>
#include <map>
#include <string>
#include <unordered_map>

#include "ArchipelagoQuestRewardsContentTable.h"
#include "ArchipelagoVendorStockContentTable.h"
#include "ArchipelagoRecipesContentTable.h"
#include "ArchipelagoTrainerSpellsContentTable.h"
#include "ArchipelagoCONTAINERSANITYContent.h"
#include "ArchipelagoGATHERSANITYContent.h"

namespace Archipelago::Locations
{
    namespace detail
    {
        // Deviation from the M4.13 plan's own sample, found live at compile time:
        // ArchipelagoQUEST_REWARDSContent et al. are C++ NAMESPACES (confirmed by
        // reading the generated headers -- `namespace ArchipelagoQUEST_REWARDSContent
        // { ... LOCATIONS ... }`), not structs/classes, so the plan's
        // "template<typename Family> ... Family::LOCATIONS" approach cannot compile
        // -- a namespace is not a valid template type argument (MSVC C2882/C2672).
        // This merges each family's already-concrete LOCATIONS map by value instead
        // of templating on the (nonexistent) family type.
        inline void MergeFamilyLocations(std::map<std::string, uint32_t> const& locations,
            std::unordered_map<int64_t, std::string>& out)
        {
            for (auto const& [name, id] : locations)
                out.emplace(static_cast<int64_t>(id), name);
        }

        inline std::unordered_map<int64_t, std::string> BuildAllLocationNames()
        {
            std::unordered_map<int64_t, std::string> result;
            MergeFamilyLocations(ArchipelagoQUEST_REWARDSContent::LOCATIONS, result);
            MergeFamilyLocations(ArchipelagoVENDOR_STOCKContent::LOCATIONS, result);
            MergeFamilyLocations(ArchipelagoRECIPESContent::LOCATIONS, result);
            MergeFamilyLocations(ArchipelagoTRAINER_SPELLSContent::LOCATIONS, result);
            MergeFamilyLocations(ArchipelagoCONTAINERSANITYContent::LOCATIONS, result);
            MergeFamilyLocations(ArchipelagoGATHERSANITYContent::LOCATIONS, result);
            return result;
        }
    }

    // location_id -> plain content-table name, merged across every family.
    // ".ap missing" checks Archipelago::ItemDisplay::GetSynthesizedDisplayData()
    // FIRST (for the real synthesized name of a Vendor Inventories/Quest
    // Rewards slot) and falls back to this table for everything else.
    inline const std::unordered_map<int64_t, std::string> AllLocationNames = detail::BuildAllLocationNames();
}
