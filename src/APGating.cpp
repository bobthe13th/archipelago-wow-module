// azerothcore-wotlk/modules/archipelago_wow/src/APGating.cpp
#include "APGating.h"

#include "ArchipelagoRealmState.h"
#include "Chat.h"
#include "ItemTemplate.h"
#include "MiscScript.h"
#include "Player.h"
#include "ScriptMgr.h"
#include "SharedDefines.h"
#include "Spell.h"
#include "SpellInfo.h"
#include "SpellMgr.h"
#include "WorldSession.h"

#include "AreaDefines.h"

#include <unordered_map>

namespace Archipelago::Gating
{
    bool IsRidingTierUnlocked(uint32_t requiredTier)
    {
        return sArchipelagoRealmState->GetFlagTier("riding") >= requiredTier;
    }

    bool IsFlightUnlocked(uint32_t requiredTier)
    {
        return sArchipelagoRealmState->GetFlagTier("flight") >= requiredTier;
    }

    bool IsProficiencyUnlocked(std::string const& proficiencyFlagKey)
    {
        return sArchipelagoRealmState->IsFlagUnlocked(proficiencyFlagKey);
    }

    bool IsAccessUnlocked(std::string const& accessFlagKey)
    {
        return sArchipelagoRealmState->IsFlagUnlocked(accessFlagKey);
    }
}

namespace
{
    // Real Hearthstone item entry / spell id, confirmed directly against
    // this checkout's src/server/game/Spells/SpellEffects.cpp (a spell
    // effect that resets its cooldown looks it up via both: item 6948,
    // spell 8690).
    constexpr uint32_t ITEM_HEARTHSTONE = 6948;
}

class ArchipelagoRidingGateScript : public PlayerScript
{
public:
    ArchipelagoRidingGateScript() : PlayerScript("ArchipelagoRidingGateScript", { PLAYERHOOK_CAN_USE_ITEM }) { }

    bool OnPlayerCanUseItem(Player* player, ItemTemplate const* proto, InventoryResult& result) override
    {
        if (!sArchipelagoRealmState->IsEnabled())
            return true;

        if (!IsMountItem(proto))
            return true;

        if (Archipelago::Gating::IsRidingTierUnlocked(Archipelago::Gating::RIDING_TIER_APPRENTICE))
            return true;

        result = EQUIP_ERR_CANT_DO_RIGHT_NOW;
        ChatHandler(player->GetSession()).PSendSysMessage("Archipelago: You need Progressive Riding to mount up.");
        return false;
    }

private:
    static bool IsMountItem(ItemTemplate const* proto)
    {
        for (uint8 i = 0; i < MAX_ITEM_PROTO_SPELLS; ++i)
        {
            if (proto->Spells[i].SpellId)
            {
                if (SpellInfo const* spellInfo = sSpellMgr->GetSpellInfo(proto->Spells[i].SpellId))
                {
                    if (spellInfo->HasAura(SPELL_AURA_MOUNTED))
                        return true;
                }
            }
        }
        return false;
    }
};

class ArchipelagoMountSpellScript : public AllSpellScript
{
public:
    ArchipelagoMountSpellScript() : AllSpellScript("ArchipelagoMountSpellScript", { ALLSPELLHOOK_ON_SPELL_CHECK_CAST }) { }

    void OnSpellCheckCast(Spell* spell, bool /*strict*/, SpellCastResult& res) override
    {
        if (!sArchipelagoRealmState->IsEnabled())
            return;

        SpellInfo const* spellInfo = spell->GetSpellInfo();
        if (!spellInfo || !spellInfo->HasAura(SPELL_AURA_MOUNTED))
            return;

        if (Archipelago::Gating::IsRidingTierUnlocked(Archipelago::Gating::RIDING_TIER_APPRENTICE))
            return;

        res = SPELL_FAILED_NOT_HERE;
        if (Unit* caster = spell->GetCaster())
        {
            if (Player* player = caster->ToPlayer())
                ChatHandler(player->GetSession()).PSendSysMessage("Archipelago: You need Progressive Riding to mount up.");
        }
    }
};

class ArchipelagoFlightGateScript : public PlayerScript
{
public:
    ArchipelagoFlightGateScript() : PlayerScript("ArchipelagoFlightGateScript", { PLAYERHOOK_ON_CAN_PLAYER_FLY_IN_ZONE }) { }

    // Called by Player::IsKnownAreaFlyable(). Return false to deny flight in
    // this zone/map. Core's own vanilla cold-weather-flying check runs BEFORE
    // this script hook, so we only need to add our extra Archipelago check
    // on top. Maps: 530=Outland, 571=Northrend.
    bool OnPlayerCanFlyInZone(Player* player, uint32 mapId, uint32 /*zoneId*/, SpellInfo const* /*bySpell*/) override
    {
        if (!sArchipelagoRealmState->IsEnabled())
            return true;

        if (mapId == MAP_OUTLAND && !Archipelago::Gating::IsFlightUnlocked(Archipelago::Gating::FLIGHT_TIER_OUTLAND))
        {
            ChatHandler(player->GetSession()).PSendSysMessage("Archipelago: You need Flight Unlock: Outland to fly here.");
            return false;
        }

        if (mapId == MAP_NORTHREND && !Archipelago::Gating::IsFlightUnlocked(Archipelago::Gating::FLIGHT_TIER_NORTHREND))
        {
            ChatHandler(player->GetSession()).PSendSysMessage("Archipelago: You need Flight Unlock: Northrend to fly here.");
            return false;
        }

        return true;
    }
};

class ArchipelagoProficiencyGateScript : public PlayerScript
{
public:
    ArchipelagoProficiencyGateScript() : PlayerScript("ArchipelagoProficiencyGateScript", { PLAYERHOOK_CAN_USE_ITEM }) { }

    // Same hook Task 5 uses for the riding-item check: OnPlayerCanUseItem
    // fires from the tail of Player::CanUseItem(ItemTemplate const*), which
    // is itself reached both from CanEquipItem (the actual equip attempt)
    // and from a couple of other CanUseItem(ItemTemplate const*) callers
    // (NeedBeforeGreed group-loot rolls, the auction-house "usable only"
    // filter) -- gating those the same way as equip is an accepted,
    // deliberate side effect of reusing this hook, not an oversight.
    bool OnPlayerCanUseItem(Player* player, ItemTemplate const* proto, InventoryResult& result) override
    {
        if (!sArchipelagoRealmState->IsEnabled())
            return true;

        if (!sArchipelagoRealmState->IsGateFamilyEnabled("proficiency"))
            return true;

        std::string const* flagKey = ProficiencyFlagKeyForSkill(proto->GetSkill());
        if (!flagKey)
            return true;

        if (Archipelago::Gating::IsProficiencyUnlocked(*flagKey))
            return true;

        result = EQUIP_ERR_NO_REQUIRED_PROFICIENCY;
        ChatHandler(player->GetSession()).PSendSysMessage("Archipelago: You need the matching Proficiency item to use this.");
        return false;
    }

private:
    // Bounded to the classMask-only subset of real playercreateinfo_skills
    // rows (see content/gates.yaml's comment) -- a skill not in this map is
    // never gated (Cloth, Unarmed, and every race-gated ranged weapon skill
    // deferred to a follow-on all fall through here and stay vanilla-free).
    static std::string const* ProficiencyFlagKeyForSkill(uint32_t skill)
    {
        static std::unordered_map<uint32_t, std::string> const flagKeyBySkill = {
            { SKILL_PLATE_MAIL, "proficiency_armor_plate" },
            { SKILL_MAIL,       "proficiency_armor_mail" },
            { SKILL_LEATHER,    "proficiency_armor_leather" },
            { SKILL_2H_SWORDS,  "proficiency_weapon_2h_sword" },
            { SKILL_AXES,       "proficiency_weapon_axe" },
            { SKILL_MACES,      "proficiency_weapon_mace" },
            { SKILL_STAVES,     "proficiency_weapon_staff" },
            { SKILL_WANDS,      "proficiency_weapon_wand" },
        };

        auto it = flagKeyBySkill.find(skill);
        return it != flagKeyBySkill.end() ? &it->second : nullptr;
    }
};

class ArchipelagoHearthGateScript : public PlayerScript
{
public:
    ArchipelagoHearthGateScript() : PlayerScript("ArchipelagoHearthGateScript", { PLAYERHOOK_CAN_USE_ITEM }) { }

    bool OnPlayerCanUseItem(Player* player, ItemTemplate const* proto, InventoryResult& result) override
    {
        if (!sArchipelagoRealmState->IsEnabled())
            return true;

        if (!sArchipelagoRealmState->IsGateFamilyEnabled("access"))
            return true;

        if (proto->ItemId != ITEM_HEARTHSTONE)
            return true;

        if (Archipelago::Gating::IsAccessUnlocked("access_hearth"))
            return true;

        result = EQUIP_ERR_CANT_DO_RIGHT_NOW;
        ChatHandler(player->GetSession()).PSendSysMessage("Archipelago: You need Hearthstone Access to use this.");
        return false;
    }
};

class ArchipelagoMailboxGateScript : public PlayerScript
{
public:
    ArchipelagoMailboxGateScript() : PlayerScript("ArchipelagoMailboxGateScript", { PLAYERHOOK_CAN_SEND_MAIL }) { }

    // Only fires from player-initiated opcode paths (composing new mail AND
    // returning existing mail to its sender both call this) -- this
    // module's own AP item delivery (APDelivery.cpp) builds a MailDraft and
    // calls SendMailTo() directly, a separate server-side API that never
    // reaches this hook, so gating it cannot block delivery mail. Reading/
    // collecting mail into your inbox is untouched (no hook exists there).
    bool OnPlayerCanSendMail(Player* player, ObjectGuid /*receiverGuid*/, ObjectGuid /*mailbox*/,
        std::string& /*subject*/, std::string& /*body*/, uint32 /*money*/, uint32 /*COD*/, Item* /*item*/) override
    {
        if (!sArchipelagoRealmState->IsEnabled())
            return true;

        if (!sArchipelagoRealmState->IsGateFamilyEnabled("access"))
            return true;

        if (Archipelago::Gating::IsAccessUnlocked("access_mailbox"))
            return true;

        ChatHandler(player->GetSession()).PSendSysMessage("Archipelago: You need Mailbox Access to send mail.");
        return false;
    }
};

class ArchipelagoAuctionHouseGateScript : public MiscScript
{
public:
    ArchipelagoAuctionHouseGateScript() : MiscScript("ArchipelagoAuctionHouseGateScript", { MISCHOOK_CAN_SEND_AUCTIONHELLO }) { }

    bool CanSendAuctionHello(WorldSession const* session, ObjectGuid /*guid*/, Creature* /*creature*/) override
    {
        if (!sArchipelagoRealmState->IsEnabled())
            return true;

        if (!sArchipelagoRealmState->IsGateFamilyEnabled("access"))
            return true;

        if (Archipelago::Gating::IsAccessUnlocked("access_auction_house"))
            return true;

        if (Player* player = session->GetPlayer())
            ChatHandler(player->GetSession()).PSendSysMessage("Archipelago: You need Auction House Access to use this.");
        return false;
    }
};

void AddArchipelagoGatingScripts()
{
    new ArchipelagoRidingGateScript();
    new ArchipelagoMountSpellScript();
    new ArchipelagoFlightGateScript();
    new ArchipelagoProficiencyGateScript();
    new ArchipelagoHearthGateScript();
    new ArchipelagoMailboxGateScript();
    new ArchipelagoAuctionHouseGateScript();
}
