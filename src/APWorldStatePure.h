#pragma once

#include <string>
#include <vector>

namespace Archipelago::WorldState
{
    // Sec7: the mutation-data file's conventional path is
    // "<CWD>/<slot_name>_mutations.json" -- CWD-relative because a
    // normally-run worldserver's working directory is the same directory
    // as worldserver.conf, so "copy the file next to worldserver.conf" is
    // the operator's whole instruction; no new config key. slotName is the
    // module's own existing Archipelago.SlotName config value. Pure
    // string-building only, no file I/O, so it's unit-testable without a
    // live filesystem.
    std::string BuildMutationFilePath(std::string const& slotName);

    // Sec7's own bullet list, as a pure decision: Match (a marker is
    // present AND its world_seed equals the file's) -> Skip; Mismatch or
    // absent -> Apply. Factored out here (matching this module's
    // established *Pure.h convention -- see APGateDecision.h) so it's
    // covered by the standalone doctest target even though
    // APWorldState.cpp's own DB-touching Load/apply logic isn't
    // (Sec-Testing's accepted gap, same shape as ArchipelagoRealmState).
    enum class MutationApplyAction
    {
        Skip,
        Apply
    };

    MutationApplyAction DecideMutationApplyAction(bool markerPresent, std::string const& markerWorldSeed, std::string const& fileWorldSeed);

    // Sec8 cross-category fix (M5.6.2's own final review): identifies
    // which of `newColumns` are NOT already present in `existingColumns`.
    // Used when two Pipeline B categories target the same
    // (table_name, row_id): the pristine snapshot must capture EVERY
    // category's own columns, not just whichever category's INSERT ran
    // first, or a later category's own mutation becomes permanently
    // unrestorable (RestoreAllSnapshottedRows can only ever restore
    // columns present in the stored JSON). Preserves newColumns' own
    // relative order in the returned vector.
    std::vector<std::string> ColumnsMissingFromSnapshot(std::vector<std::string> const& existingColumns, std::vector<std::string> const& newColumns);
}
