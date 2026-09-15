// azerothcore-wotlk/modules/archipelago_wow/src/APFillerRewardEffects.h
#pragma once

#include <cstdint>
#include <string>

class Player;

// M4.9.3.1 (design spec's Filler section), restructured M4.9.6. A filler
// reward "effect" fires once, on receipt of the AP item, exactly like
// Archipelago::Traps' ApplyTrapEffect -- filler effects have no
// persistent unlock state and no location of their own.
namespace Archipelago::FillerRewardEffects
{
    // effect/param come from ArchipelagoFillerRewardEffectsContentTable.h's
    // ApItemToEffect map (effect = one of: cast_spell, grant_money,
    // grant_xp_percent, grant_title, portable_service; param's meaning
    // varies per effect -- spell id for cast_spell/portable_service,
    // copper amount for grant_money, percent-of-remaining-XP for
    // grant_xp_percent, CharTitles.dbc title id for grant_title). Unlike
    // traps, every filler reward effect is unconditionally positive -- no
    // "lethal" concept applies.
    void ApplyFillerRewardEffect(Player* target, std::string const& effect, int32_t param);
}
