// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoGoals.h
#pragma once

namespace Archipelago::Goals
{
    // Checks whether the realm's configured Archipelago.GameMode's
    // completion condition is now satisfied, and if so, reports it via
    // sArchipelagoMgr->SendGoalComplete() (idempotent --
    // ArchipelagoRealmState::SetGoalComplete() no-ops once already
    // complete, so this is always safe to call speculatively). Call this
    // from every state-change event that could plausibly make ANY mode's
    // condition true (level-up, instance-unlock receipt) -- it internally
    // dispatches on the configured mode and only evaluates that one mode's
    // own condition, so calling it from an irrelevant event (e.g. a level-up
    // while GameMode is "classic") is a cheap, correct no-op, not a bug.
    //
    // Mirrors goals.py's per-mode dispatch table (Archipelago/worlds/wow/
    // goals.py), but only for modes that need a REAL server-side trigger to
    // notify the AP server -- this bespoke C++ APClient has no embedded
    // rules-evaluation engine, so unlike the reference Python client, this
    // module must independently re-derive "is the goal met" in C++ terms for
    // every mode it wants to actually report completion for. Modes with no
    // entry here (key_hunt, artisan, ...) never report completion -- matches
    // goals.py's own _not_yet_implemented deferral for those modes.
    // achievement_hunt and explorer both gained real entries in M4.9 Sec4;
    // gladiator no longer exists as a GameMode value at all, so it was never
    // a candidate for an entry here in the first place.
    void CheckAndSendGoalComplete();
}
