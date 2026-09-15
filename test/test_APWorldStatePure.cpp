#include "doctest.h"
#include "APWorldStatePure.h"

using namespace Archipelago::WorldState;

TEST_CASE("BuildMutationFilePath appends _mutations.json to the slot name")
{
    CHECK(BuildMutationFilePath("MySlot") == "MySlot_mutations.json");
}

TEST_CASE("BuildMutationFilePath handles an empty slot name")
{
    CHECK(BuildMutationFilePath("") == "_mutations.json");
}

TEST_CASE("DecideMutationApplyAction: matching marker and file world_seed skips")
{
    CHECK(DecideMutationApplyAction(true, "abc123", "abc123") == MutationApplyAction::Skip);
}

TEST_CASE("DecideMutationApplyAction: no marker present applies")
{
    CHECK(DecideMutationApplyAction(false, "", "abc123") == MutationApplyAction::Apply);
}

TEST_CASE("DecideMutationApplyAction: mismatched marker and file world_seed applies")
{
    CHECK(DecideMutationApplyAction(true, "old-seed", "new-seed") == MutationApplyAction::Apply);
}

TEST_CASE("ColumnsMissingFromSnapshot: all new columns missing when existing is empty")
{
    std::vector<std::string> existing = {};
    std::vector<std::string> incoming = {"name", "subname"};
    CHECK(ColumnsMissingFromSnapshot(existing, incoming) == std::vector<std::string>{"name", "subname"});
}

TEST_CASE("ColumnsMissingFromSnapshot: no columns missing when all already present")
{
    std::vector<std::string> existing = {"minlevel", "maxlevel"};
    std::vector<std::string> incoming = {"minlevel", "maxlevel"};
    CHECK(ColumnsMissingFromSnapshot(existing, incoming).empty());
}

TEST_CASE("ColumnsMissingFromSnapshot: only the genuinely-missing columns are returned, in incoming order")
{
    std::vector<std::string> existing = {"name", "subname"};
    std::vector<std::string> incoming = {"minlevel", "name", "maxlevel"};
    CHECK(ColumnsMissingFromSnapshot(existing, incoming) == std::vector<std::string>{"minlevel", "maxlevel"});
}

TEST_CASE("ColumnsMissingFromSnapshot: empty incoming returns empty regardless of existing")
{
    std::vector<std::string> existing = {"name"};
    std::vector<std::string> incoming = {};
    CHECK(ColumnsMissingFromSnapshot(existing, incoming).empty());
}
