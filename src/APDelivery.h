// azerothcore-wotlk/modules/archipelago_wow/src/APDelivery.h
#pragma once

#include "DatabaseEnv.h"

#include <string>

class Item;

namespace Archipelago::Delivery
{
    enum class Policy
    {
        EveryoneReceives, // M2/M2.1's existing, only behavior: mail to Archipelago.DeliveryCharacter
        SharedCacheNpc,   // Task 13
        AuctionHouse,     // Task 14
        FirstToClaim,     // Task 15
    };

    // Extracted, behavior-identical, from the mail-sending block of
    // DeliverArchipelagoItems (ArchipelagoPlayerScript.cpp) -- Policy::EveryoneReceives
    // is the only value this function needs to support correctly in this task;
    // the other enumerators are added as no-ops (fall through to EveryoneReceives'
    // behavior) until their own tasks implement them, so this task's diff stays
    // a pure extraction.
    void DeliverItem(Policy policy, Item* item, std::string const& deliveryCharacter, CharacterDatabaseTransaction trans);
}
