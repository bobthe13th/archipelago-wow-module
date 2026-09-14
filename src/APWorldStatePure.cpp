#include "APWorldStatePure.h"

#include <unordered_set>

namespace Archipelago::WorldState
{
    std::string BuildMutationFilePath(std::string const& slotName)
    {
        return slotName + "_mutations.json";
    }

    MutationApplyAction DecideMutationApplyAction(bool markerPresent, std::string const& markerWorldSeed, std::string const& fileWorldSeed)
    {
        if (markerPresent && markerWorldSeed == fileWorldSeed)
            return MutationApplyAction::Skip;
        return MutationApplyAction::Apply;
    }

    std::vector<std::string> ColumnsMissingFromSnapshot(std::vector<std::string> const& existingColumns, std::vector<std::string> const& newColumns)
    {
        std::unordered_set<std::string> existingSet(existingColumns.begin(), existingColumns.end());
        std::vector<std::string> missing;
        for (auto const& column : newColumns)
            if (!existingSet.count(column))
                missing.push_back(column);
        return missing;
    }
}
