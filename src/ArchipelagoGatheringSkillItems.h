// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoGatheringSkillItems.h
//
// M4.11.4.2 final review fix wave 2 (Fix 2): server-side recognition for
// Gathersanity's two "Progressive <profession>" AP items.
//
// These two ids are NOT generated. Unlike every other family's item ids,
// they are hand-declared on the apworld side in Archipelago/worlds/wow/
// items.py's GATHERING_SKILL_PROGRESSION_ITEMS, deliberately placed just
// outside core_loop's own generated 810000-810011 block so a future
// core_loop regeneration can never collide with them. This header is the
// hand-written C++ mirror of that same block -- see
// test_ArchipelagoGatheringSkillItems.cpp, which pins both values so the
// two hand-synced sides cannot silently drift apart.
//
// WHY THESE HAVE NO SERVER-SIDE EFFECT
//
// Gathering-node interaction is already gated by the player's own real
// in-game profession skill: GameObject::GetSpellForLock (src/server/game/
// Entities/GameObject/GameObject.cpp) requires the player to actually know
// a SPELL_EFFECT_OPEN_LOCK spell whose effect value meets the Lock.dbc
// Skill[] requirement for the node's LockType. Nothing this module could
// grant on receipt would make that gate more or less true.
//
// "Progressive Mining"/"Progressive Herbalism" therefore exist purely to
// gate the ABSTRACT CHECK-CREDITING logic on the AP side -- they decide
// which skill-tier zone pools are in logic for the player, in
// Archipelago/worlds/wow/rules.py. There is no corresponding server-side
// grant, no WoW item entry to mail, and no realm-state flag to set.
//
// Before this fix these ids had zero references anywhere in this module, so
// receiving one fell through ArchipelagoPlayerScript.cpp's final
// "received unknown AP item id {}, skipping" LOG_ERROR. That log line means
// "a real family shipped a lookup table nothing here consumes" -- a real
// bug shape this project has hit five separate times (see that file's own
// M4.10.1/M4.10.2/M4.10.5/M4.10.6/M4.10.7 comments). Recognising these two
// ids explicitly keeps that error path meaningful for the genuine case.
#pragma once

#include <cstdint>

namespace Archipelago::GatheringSkills
{
    // Mirrors GATHERING_SKILL_PROGRESSION_ITEMS in worlds/wow/items.py.
    inline constexpr int64_t AP_ITEM_PROGRESSIVE_MINING = 811000;
    inline constexpr int64_t AP_ITEM_PROGRESSIVE_HERBALISM = 811001;

    // True for an AP item id that this module recognises but deliberately
    // applies no server-side effect for (see the file comment above).
    inline constexpr bool IsProgressionItem(int64_t apItemId)
    {
        return apItemId == AP_ITEM_PROGRESSIVE_MINING
            || apItemId == AP_ITEM_PROGRESSIVE_HERBALISM;
    }

    // Human-readable name for the debug log this module emits on receipt --
    // matches the apworld-side item name exactly. Returns nullptr for an id
    // IsProgressionItem() rejects.
    inline constexpr char const* ProgressionItemName(int64_t apItemId)
    {
        return apItemId == AP_ITEM_PROGRESSIVE_MINING ? "Progressive Mining"
            : apItemId == AP_ITEM_PROGRESSIVE_HERBALISM ? "Progressive Herbalism"
            : nullptr;
    }
}
