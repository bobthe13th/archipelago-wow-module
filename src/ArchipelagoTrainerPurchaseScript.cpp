// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoTrainerPurchaseScript.cpp
//
// Trainersanity redesign, Task 3: decouples the trainer_spells check-send
// from OnPlayerLearnSpell (ArchipelagoLearnSpellScript.cpp, which still owns
// the Learned Recipes family) and instead hooks the new
// PLAYERHOOK_CAN_TRAINER_TEACH_SPELL (added to core in a separate task/repo)
// so the check is sent AND the vanilla teach can be blocked/refunded before
// the spell is ever actually learned -- OnPlayerLearnSpell fires too late to
// veto anything. Trainer::CanTeachSpell already filters out a spell the
// player legitimately already knows before this hook is ever consulted (see
// Trainer.cpp:135-137), so player->HasSpell(spellId) below is always false
// in practice today; it's kept as a real, checked condition anyway -- same
// "never silently assume, always check" discipline this family already
// follows elsewhere -- rather than assumed true/false.
#include "APGateDecision.h"
#include "ArchipelagoManager.h"
#include "ArchipelagoRealmState.h"
#include "ArchipelagoTrainerSpellsContentTable.h"
#include "Chat.h"
#include "Player.h"
#include "ScriptMgr.h"

class ArchipelagoTrainerPurchaseScript : public PlayerScript
{
public:
    ArchipelagoTrainerPurchaseScript() : PlayerScript("ArchipelagoTrainerPurchaseScript", { PLAYERHOOK_CAN_TRAINER_TEACH_SPELL }) { }

    bool OnPlayerCanTrainerTeachSpell(Player* player, uint32 spellId) override
    {
        auto locationIt = ArchipelagoTRAINER_SPELLSContent::SPELL_ID_TO_LOCATION_ID.find(spellId);
        if (locationIt == ArchipelagoTRAINER_SPELLSContent::SPELL_ID_TO_LOCATION_ID.end())
            return true; // not one of this family's gated spells -- vanilla behavior

        uint64_t locationId = static_cast<uint64_t>(locationIt->second);
        if (!sArchipelagoRealmState->HasSentLocationCheck(locationId))
        {
            sArchipelagoMgr->SendLocationChecks({ locationIt->second });
            sArchipelagoRealmState->RecordLocationCheckAttribution(locationId, player->GetGUID().GetCounter());
        }

        bool alreadyGranted = player->HasSpell(spellId);
        if (Archipelago::Gating::ShouldBlockTrainerTeach(sArchipelagoRealmState->IsEnabled(), alreadyGranted))
        {
            ChatHandler(player->GetSession()).PSendSysMessage("Archipelago: this technique lies elsewhere in the multiworld.");
            return false;
        }

        return true;
    }
};

void AddArchipelagoTrainerPurchaseScripts()
{
    new ArchipelagoTrainerPurchaseScript();
}
