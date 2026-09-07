// azerothcore-wotlk/modules/archipelago_wow/src/APDelivery.h
#pragma once

#include "DatabaseEnv.h"
#include "ObjectGuid.h"

#include <cstdint>
#include <map>
#include <optional>
#include <string>
#include <vector>

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

    // M4.11.5.2.1: which real Auction House(s) Policy::AuctionHouse lists a
    // delivered item on. This module never reads or writes the real, separate
    // worldserver.conf setting AllowTwoSide.Interaction.Auction -- but see
    // ListOnAuctionHouse's own comment (APDelivery.cpp) for the real
    // consequence when that OTHER setting is on: it collapses PerFaction's
    // three copies onto one house.
    enum class AuctionHouseFactionMode
    {
        Merged,     // today's existing, only behavior: one listing, AuctionHouseId::Neutral
        PerFaction, // three independent copies: AuctionHouseId::Alliance, Horde, and Neutral
    };

    // M4.11.5.2.0: one item queued for mail-shaped delivery, waiting to be flushed
    // by FlushDeliveryBatch. familyLabel is which family's own ApItemIdToWowItemEntry
    // map resolved this item (e.g. "Quest Rewards", "Vendor Stock") -- surfaced in
    // the flushed mail's own body text so the player knows where a delivered item
    // came from, not just what it is.
    struct QueuedItem
    {
        uint32_t wowItemEntry;
        std::string familyLabel;
    };

    // M4.11.5.2.0: accumulates every item queued for mail-shaped delivery
    // (SingleDeliveryCharacter's offline branch, AllAccountsDelivery) across one
    // whole DeliverArchipelagoItems drain, so FlushDeliveryBatch can combine them
    // into as few real mails as MAX_MAIL_ITEMS (12) allows per recipient, instead
    // of always sending one mail per item. AuctionHouse/SharedCacheNpc/FirstToClaim
    // never touch this -- confirmed live, none of them ever construct a MailDraft.
    struct DeliveryBatch
    {
        struct RecipientQueue
        {
            std::string recipientLabel; // the character/account-selected name MailItemTo's old error log used, kept for the same purpose here
            std::vector<QueuedItem> items;
        };

        void Queue(ObjectGuid::LowType lowGuid, std::string const& recipientLabel, uint32_t wowItemEntry, std::string const& familyLabel)
        {
            RecipientQueue& queue = queues[lowGuid];
            queue.recipientLabel = recipientLabel;
            queue.items.push_back({ wowItemEntry, familyLabel });
        }

        std::map<ObjectGuid::LowType, RecipientQueue> queues;

        // M4.11.5.2.0 fix: AllAccountsDelivery's own account-resolution query
        // (see MailToAllAccounts, APDelivery.cpp) is a real, expensive
        // full-table scan+sort -- the approved spec requires it run once per
        // whole drain, not once per delivered item. Cached here the first
        // time AllAccountsDelivery is queued into this batch (nullopt means
        // "not yet resolved this drain"); every later item in the same
        // drain reuses it instead of re-querying.
        std::optional<std::vector<std::pair<ObjectGuid::LowType, std::string>>> allAccountsRecipients;
    };

    // wowItemEntry is the WoW item_template entry to deliver. Policy::SingleDeliveryCharacter
    // constructs and mails one Item of this entry to deliveryCharacter (M2/M2.1's original,
    // only behavior, unchanged) -- or, since M4.11.5.0.2, grants it directly if that character
    // is online right now. Policy::SharedCacheNpc never constructs an Item here at
    // all -- see the enum comment above. Task 12 originally took an already-constructed
    // Item* here; changed to a raw entry id in Task 13 once SharedCacheNpc showed that
    // "construct then hand off" doesn't fit every policy (there is no single owner to
    // construct an Item for at receive time), so construction is now each branch's own
    // decision, made if and when it actually needs one. costTier is only consulted by
    // Policy::AuctionHouse. factionMode is only consulted by Policy::AuctionHouse
    // (M4.11.5.2.1), exactly like costTier. familyLabel/batch (M4.11.5.2.0) are only
    // consulted by the two mail-shaped policies (SingleDeliveryCharacter's offline
    // branch, AllAccountsDelivery), which queue into batch instead of mailing
    // immediately -- see FlushDeliveryBatch.
    void DeliverItem(Policy policy, uint32_t wowItemEntry, std::string const& deliveryCharacter, CostTier costTier, AuctionHouseFactionMode factionMode, std::string const& familyLabel, DeliveryBatch& batch, CharacterDatabaseTransaction trans);

    // M4.11.5.2.0: flushes every recipient's own queued items (built up by however many
    // DeliverItem calls queued into batch since it was last flushed) into real mails,
    // chunked at MAX_MAIL_ITEMS (12) items per mail per recipient. Real item name +
    // family label per line, built at flush time (not queue time) so item-name
    // resolution only happens once, right before the mail is actually sent. Clears
    // batch's own queues once flushed, so calling this twice on the same batch is
    // safe (a no-op the second time). Call once, after every DeliverItem call for a
    // given drain has completed, before committing the same trans those DeliverItem
    // calls' own trans->Append (or Item::SaveToDB) calls used.
    void FlushDeliveryBatch(DeliveryBatch& batch, CharacterDatabaseTransaction trans);

    // Shared "give this online player one copy of wowItemEntry right now" primitive:
    // stores it directly into their bags if there's room, otherwise mails it (same
    // postmaster sender DeliverItem's SingleDeliveryCharacter branch uses) so it's never
    // silently lost. Used by anything that grants an item to an already-identified,
    // online Player* -- the Archipelago Cache Keeper's claim options (Tasks 13/15)
    // and new-character catch-up (Task 16) -- as opposed to DeliverItem above, which
    // routes a freshly-received AP item according to the realm's configured policy
    // and doesn't assume a specific online recipient. familyLabel (M4.11.5.2.0 fix) is
    // only known/passed by GrantOrMailToDeliveryCharacter's own real AP-delivery call
    // site -- every other caller has no family concept and omits it, keeping today's
    // exact generic fallback body for those calls.
    void GiveOrMailItem(Player* player, uint32_t wowItemEntry, CharacterDatabaseTransaction trans, std::string const& familyLabel = "");
}
