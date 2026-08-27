// azerothcore-wotlk/modules/archipelago_wow/src/APFillerRewardEffects.h
#pragma once

#include <string>

class Player;

// M4.9.3.1 (design spec's Filler section). A filler reward "effect" fires
// once, on receipt of the AP item, exactly like Archipelago::Traps'
// ApplyTrapEffect (see APTraps.h's own header comment for the precedent
// this mirrors) -- filler effects have no persistent unlock state and no
// location of their own, unlike every content family with real WoW
// locations.
namespace Archipelago::FillerRewardEffects
{
    // effect is one of ArchipelagoFillerRewardEffectsContentTable.h's
    // ApItemToEffect values (one of: cast_spell, grant_money,
    // grant_xp_percent, grant_title, portable_service). Unlike traps,
    // every filler reward effect is unconditionally positive -- no
    // "lethal"/sphere-0-queueing concept applies here.
    void ApplyFillerRewardEffect(Player* target, std::string const& effect);
}
