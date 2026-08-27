// azerothcore-wotlk/modules/archipelago_wow/src/APFillerRewardEffects.cpp
#include "APFillerRewardEffects.h"

#include <array>

#include "Creature.h"
#include "DBCStores.h"
#include "Log.h"
#include "Player.h"
#include "Random.h"
#include "WorldSession.h"

namespace
{
    // Real, curated, verified-positive WotLK 3.3.5a buff spell ids (Spell.dbc
    // directly parsed during planning, field 136 = enUS SpellName string-block
    // offset): 469 Commanding Shout, 1459 Arcane Intellect, 6673 Battle Shout,
    // 21562 Prayer of Fortitude, 21850 Gift of the Wild, 23028 Arcane
    // Brilliance. Self-cast, exact pattern APTraps.cpp's ApplyRandomDebuff
    // already established for a curated-pool self-cast.
    constexpr std::array<uint32_t, 6> FILLER_BUFF_SPELL_POOL = { 469, 1459, 6673, 21562, 21850, 23028 };

    void ApplyRandomBuff(Player* target)
    {
        uint32_t spellId = FILLER_BUFF_SPELL_POOL[urand(0, FILLER_BUFF_SPELL_POOL.size() - 1)];
        target->CastSpell(target, spellId, true);
    }

    // Real range, in gold (converted to copper -- Player::ModifyMoney's real
    // unit, Player.h:1632). A modest, clearly-a-filler-reward amount.
    constexpr int32_t FILLER_GOLD_MIN = 1;
    constexpr int32_t FILLER_GOLD_MAX = 10;

    void ApplyGoldReward(Player* target)
    {
        int32_t gold = urand(FILLER_GOLD_MIN, FILLER_GOLD_MAX);
        target->ModifyMoney(gold * 10000); // gold -> copper
    }

    // 10-50% of the player's CURRENT progress toward their next level (per
    // spec) -- read live at delivery time via PLAYER_XP/PLAYER_NEXT_LEVEL_XP
    // (UpdateFields.h:339-340), not a fixed absolute amount.
    constexpr uint32_t FILLER_XP_PERCENT_MIN = 10;
    constexpr uint32_t FILLER_XP_PERCENT_MAX = 50;

    void ApplyXpReward(Player* target)
    {
        uint32_t curXp = target->GetUInt32Value(PLAYER_XP);
        uint32_t nextLvlXp = target->GetUInt32Value(PLAYER_NEXT_LEVEL_XP);
        if (nextLvlXp <= curXp)
            return; // already at max level or malformed state -- safe no-op
        uint32_t remaining = nextLvlXp - curXp;
        uint32_t percent = urand(FILLER_XP_PERCENT_MIN, FILLER_XP_PERCENT_MAX);
        uint32_t xpToGrant = static_cast<uint32_t>(remaining * percent / 100.0f);
        // GiveXP (Player.h:1194, impl Player.cpp:2404) handles level-up
        // overflow internally if this grant crosses a level boundary -- no
        // manual clamping needed.
        target->GiveXP(xpToGrant, nullptr);
    }

    // Real, curated, non-PvP-rank-gated flavor titles (CharTitles.dbc
    // directly parsed during planning, field[2]=nameMale enUS,
    // field[36]=bit_index; ids 1-41 are all PvP-rank-gated, excluded).
    constexpr std::array<uint32_t, 8> FILLER_TITLE_IDS = { 77, 78, 79, 84, 89, 92, 93, 98 };

    void ApplyGrantTitle(Player* target)
    {
        uint32_t titleId = FILLER_TITLE_IDS[urand(0, FILLER_TITLE_IDS.size() - 1)];
        if (CharTitlesEntry const* title = sCharTitlesStore.LookupEntry(titleId))
            target->SetTitle(title);
    }

    // Real, curated, verifiably-safe creature entry for the summoned
    // banker/mailbox NPC: 620 "Chicken" -- the SAME entry APTraps.cpp's own
    // ApplyRandomMobSpawn already summons successfully in production (see
    // that file's Task-7-era comment), a proven-safe precedent in this exact
    // codebase. Its ScriptName is 'npc_chicken_cluck'
    // (data/sql/base/db_world/creature_template.sql:519), but that script's
    // Reset() (src/server/scripts/World/npcs_special.cpp:619-624) only does
    // SetFaction(FACTION_PREY) and RemoveNpcFlag(UNIT_NPC_FLAG_QUESTGIVER) --
    // no despawn/self-kill logic anywhere in the file, and it never touches
    // UNIT_NPC_FLAG_BANKER/UNIT_NPC_FLAG_MAILBOX, so the ReplaceAllNpcFlags
    // call below is unaffected and the full 60-second SummonCreature/
    // TEMPSUMMON_TIMED_DESPAWN window below is genuinely honored. (An
    // earlier choice, entry 2673 "Target Dummy", was reverted: its real
    // ScriptName 'npc_target_dummy' -- src/server/scripts/World/
    // npcs_special.cpp:358-385 -- self-kills 15 seconds after spawn, well
    // inside this 60-second window.) Summoned via the same SummonCreature
    // API APTraps.cpp's ApplyRandomMobSpawn/ApplySpawnRareOnYou already use,
    // then flagged as banker+mailbox and shown directly via the session --
    // no player interaction/gossip click required (real, in-tree precedent:
    // src/server/scripts/Pet/pet_generic.cpp's "Argent Pony" companion).
    // Repair needs no summoned NPC at all -- DurabilityRepairAll operates
    // directly on the player.
    constexpr uint32_t PORTABLE_SERVICE_NPC_ENTRY = 620;
    constexpr uint32_t PORTABLE_SERVICE_DESPAWN_MS = 60000; // 1 minute

    void ApplyPortableService(Player* target)
    {
        if (Creature* npc = target->SummonCreature(
                PORTABLE_SERVICE_NPC_ENTRY,
                target->GetPositionX(), target->GetPositionY(), target->GetPositionZ(), target->GetOrientation(),
                TEMPSUMMON_TIMED_DESPAWN, PORTABLE_SERVICE_DESPAWN_MS))
        {
            npc->ReplaceAllNpcFlags(UNIT_NPC_FLAG_BANKER | UNIT_NPC_FLAG_MAILBOX);
            target->GetSession()->SendShowBank(npc->GetGUID());
        }
        target->DurabilityRepairAll(false, 1.0f, false); // free (cost=false)
    }

    void ApplyNotYetImplemented(Player* target, std::string const& effect)
    {
        LOG_INFO("module.archipelago_wow", "Archipelago: filler reward effect '{}' is not yet implemented, skipped for {}", effect, target->GetName());
    }
}

namespace Archipelago::FillerRewardEffects
{
    void ApplyFillerRewardEffect(Player* target, std::string const& effect)
    {
        if (effect == "cast_spell")
            ApplyRandomBuff(target);
        else if (effect == "grant_money")
            ApplyGoldReward(target);
        else if (effect == "grant_xp_percent")
            ApplyXpReward(target);
        else if (effect == "grant_title")
            ApplyGrantTitle(target);
        else if (effect == "portable_service")
            ApplyPortableService(target);
        else
            ApplyNotYetImplemented(target, effect);
    }
}
