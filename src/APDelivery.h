// azerothcore-wotlk/modules/archipelago_wow/src/APDelivery.h
#pragma once

#include "DatabaseEnv.h"

#include <cstdint>
#include <string>

class Player;

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
        FirstToClaim,     // Task 15: queued into archipelago_first_to_claim_pending
                          // and announced realm-wide -- see npc_archipelago_cache_keeper
                          // (ArchipelagoCacheKeeperScript.cpp), repurposed with a third
                          // gossip option that drains the whole pending queue to whoever
                          // interacts with it first.
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

    // Shared "give this online player one copy of wowItemEntry right now" primitive:
    // stores it directly into their bags if there's room, otherwise mails it (same
    // postmaster sender DeliverItem's EveryoneReceives branch uses) so it's never
    // silently lost. Used by anything that grants an item to an already-identified,
    // online Player* -- the Archipelago Cache Keeper's claim options (Tasks 13/15)
    // and new-character catch-up (Task 16) -- as opposed to DeliverItem above, which
    // routes a freshly-received AP item according to the realm's configured policy
    // and doesn't assume a specific online recipient.
    void GiveOrMailItem(Player* player, uint32_t wowItemEntry, CharacterDatabaseTransaction trans);
}
