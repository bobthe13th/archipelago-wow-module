// azerothcore-wotlk/modules/archipelago_wow/src/APSpellGrant.cpp
#include "APSpellGrant.h"

#include "Player.h"
#include "QueryResult.h"

namespace Archipelago::SpellGrant
{
    void GrantOrQueue(Player* onlinePlayerOrNull, ObjectGuid::LowType lowGuid, uint32_t spellId, CharacterDatabaseTransaction trans)
    {
        if (onlinePlayerOrNull)
        {
            onlinePlayerOrNull->learnSpell(spellId);
            return;
        }
        trans->Append("INSERT INTO archipelago_pending_spell_grants (guid, spell_id) VALUES ({}, {})", lowGuid, spellId);
    }

    void ApplyPendingGrants(Player* player)
    {
        ObjectGuid::LowType lowGuid = player->GetGUID().GetCounter();
        if (QueryResult result = CharacterDatabase.Query(
                "SELECT spell_id FROM archipelago_pending_spell_grants WHERE guid = {}", lowGuid))
        {
            do
            {
                uint32_t spellId = (*result)[0].Get<uint32_t>();
                player->learnSpell(spellId);
            } while (result->NextRow());
            CharacterDatabase.Execute("DELETE FROM archipelago_pending_spell_grants WHERE guid = {}", lowGuid);
        }
    }
}
