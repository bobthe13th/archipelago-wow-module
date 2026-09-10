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
