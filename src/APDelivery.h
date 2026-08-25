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
        SingleDeliveryCharacter, // M2/M2.1's existing, only behavior: mail to Archipelago.DeliveryCharacter --
                                  // renamed from EveryoneReceives (M4.7.1.2), which never mailed "everyone,"
                                  // only this one named character; see CatchUpPolicy for the real gap this named.
        SharedCacheNpc,   // Task 13: no single recipient -- records the item type as available
                          // in the realm-wide cache instead (see archipelago_cache_items);
                          // npc_archipelago_cache_keeper.cpp hands each character their own
                          // unclaimed copies on interaction.
        AuctionHouse,     // Task 14: see CostTier below
        FirstToClaim,     // Task 15: queued into archipelago_first_to_claim_pending
                          // and announced realm-wide -- see npc_archipelago_cache_keeper
                          // (ArchipelagoCacheKeeperScript.cpp), repurposed with a third
                          // gossip option that drains the whole pending queue to whoever
                          // interacts with it first.
        AllAccountsDelivery, // M4.7.1.3: the real "every player receives everything" policy
                             // SingleDeliveryCharacter's old name (EveryoneReceives) always
                             // implied but never built. Mails to ONE character per account
                             // (the account's own most-recently-logged-out character, not
                             // literally every character) -- see MailToAllAccounts's own
                             // comment in APDelivery.cpp for the full design (account
                             // selection, CatchUpPolicy orthogonality, no volume cap).
    };

    // Task 14: buyout price band for Policy::AuctionHouse listings, resolved once at
    // generation (design spec Sec7.1: "Cost configurable: free / cheap / market /
    // expensive / random") and mirrored via Archipelago.AuctionHouseCostTier, same
    // manual-sync convention as everything else in this module. Random picks
    // uniformly among the other four tiers, per listing.
    enum class CostTier
    {
        Free,
        Cheap,
        Market,
        Expensive,
        Random,
    };

    // wowItemEntry is the WoW item_template entry to deliver. Policy::SingleDeliveryCharacter
    // constructs and mails one Item of this entry to deliveryCharacter (M2/M2.1's original,
    // only behavior, unchanged). Policy::SharedCacheNpc never constructs an Item here at
    // all -- see the enum comment above. Task 12 originally took an already-constructed
    // Item* here; changed to a raw entry id in Task 13 once SharedCacheNpc showed that
    // "construct then hand off" doesn't fit every policy (there is no single owner to
    // construct an Item for at receive time), so construction is now each branch's own
    // decision, made if and when it actually needs one. costTier is only consulted by
    // Policy::AuctionHouse.
    void DeliverItem(Policy policy, uint32_t wowItemEntry, std::string const& deliveryCharacter, CostTier costTier, CharacterDatabaseTransaction trans);

    // Shared "give this online player one copy of wowItemEntry right now" primitive:
    // stores it directly into their bags if there's room, otherwise mails it (same
    // postmaster sender DeliverItem's SingleDeliveryCharacter branch uses) so it's never
    // silently lost. Used by anything that grants an item to an already-identified,
    // online Player* -- the Archipelago Cache Keeper's claim options (Tasks 13/15)
    // and new-character catch-up (Task 16) -- as opposed to DeliverItem above, which
    // routes a freshly-received AP item according to the realm's configured policy
    // and doesn't assume a specific online recipient.
    void GiveOrMailItem(Player* player, uint32_t wowItemEntry, CharacterDatabaseTransaction trans);
}
