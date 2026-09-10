#include "APWorldStatePure.h"

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
}
