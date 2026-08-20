// azerothcore-wotlk/modules/archipelago_wow/src/APDelivery.h
#pragma once

#include "DatabaseEnv.h"

#include <cstdint>
#include <string>

namespace Archipelago::Delivery
{
    enum class Policy
    {
        EveryoneReceives, // M2/M2.1's existing, only behavior: mail to Archipelago.DeliveryCharacter
        SharedCacheNpc,   // Task 13: no single recipient -- records the item type as available
                          // in the realm-wide cache instead (see archipelago_cache_items);
                          // npc_archipelago_cache_keeper.cpp hands each character their own
                          // unclaimed copies on interaction.
        AuctionHouse,     // Task 14
        FirstToClaim,     // Task 15
    };

    // wowItemEntry is the WoW item_template entry to deliver. Policy::EveryoneReceives
    // constructs and mails one Item of this entry to deliveryCharacter (M2/M2.1's original,
    // only behavior, unchanged). Policy::SharedCacheNpc never constructs an Item here at
    // all -- see the enum comment above. Task 12 originally took an already-constructed
    // Item* here; changed to a raw entry id in Task 13 once SharedCacheNpc showed that
    // "construct then hand off" doesn't fit every policy (there is no single owner to
    // construct an Item for at receive time), so construction is now each branch's own
    // decision, made if and when it actually needs one.
    void DeliverItem(Policy policy, uint32_t wowItemEntry, std::string const& deliveryCharacter, CharacterDatabaseTransaction trans);
}
