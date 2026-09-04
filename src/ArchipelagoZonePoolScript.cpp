// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoZonePoolScript.cpp
//
// M4.11.4.1: the new Abstracted Zone Pool crediting mechanism. Hooks
// AllGameObjectScript::OnGameObjectLootStateChanged (NOT the database-bound
// GameObjectScript::OnLootStateChanged the design spec's own text names --
// see this plan's Global Constraints for why) so it fires for every real
// gameobject in the world with no gameobject_template.ScriptName migration
// needed. On a real "player opened this object" event (state == GO_ACTIVATED,
// GameObject::Use() -> SetLootState(GO_ACTIVATED, user)), resolves the
// object's own real spawn id to its real zone(s) via a generation-time-baked
// lookup, then credits the first uncollected abstract location in that
// zone's ordinal pool -- a bounded linear scan against the module's existing
// durable "already sent" tracking (ArchipelagoRealmState::HasSentLocationCheck),
// exactly the same crediting shape ArchipelagoLootSlotScript.cpp already
// uses for a single fixed location id.
//
// M4.11.4.2: extended to also credit Gathersanity's own gathering_node zone
// pool, keyed by a "<zone_key>|<profession>|<tier>" composite instead of
// Containersanity's bare zone_key.
#include "GameObject.h"
#include "ScriptMgr.h"
#include "ArchipelagoManager.h"
#include "ArchipelagoRealmState.h"
#include "ArchipelagoCONTAINERSANITYContent.h"
#include "ArchipelagoGATHERSANITYContent.h"

namespace
{
    // Scans `candidatesByZone[zoneKey]` (already ordinal-sorted by
    // generate_content.py's own emitter) for the first location id this
    // realm has not yet sent, and sends it. A zoneKey with no matching
    // entry (a real zone with zero abstract Containersanity locations,
    // e.g. one with zero real chest units -- spec §5) or a zone whose
    // every candidate is already sent is a silent no-op, matching every
    // other repeat-interaction case in this module (see
    // ArchipelagoLootSlotScript.cpp's own ApplyLootSlotRepeatBehavior for
    // the shape of "nothing left to credit" handling elsewhere -- this
    // hook has no player-facing message of its own since, unlike a loot
    // window, a chest that's already fully credited for its zone still
    // drops its own real vanilla loot normally; no synthesized item is
    // ever inserted for this trigger kind).
    //
    // M4.11.4.1 final review fix (I2): returns true iff it actually sent a
    // real location check, so the caller can stop after the FIRST zone that
    // credited instead of crediting every zone a border-ambiguous spawn
    // resolves to (see OnGameObjectLootStateChanged below).
    bool CreditZonePool(
        std::map<std::string, std::vector<int64_t>> const& candidatesByZone,
        std::string const& zoneKey)
    {
        auto it = candidatesByZone.find(zoneKey);
        if (it == candidatesByZone.end())
            return false;

        for (int64_t locationId : it->second)
        {
            if (!sArchipelagoRealmState->HasSentLocationCheck(static_cast<uint64_t>(locationId)))
            {
                sArchipelagoMgr->SendLocationChecks({ locationId });
                return true;
            }
        }
        return false;
    }
}

class ArchipelagoZonePoolScript : public AllGameObjectScript
{
public:
    ArchipelagoZonePoolScript() : AllGameObjectScript("ArchipelagoZonePoolScript") { }

    void OnGameObjectLootStateChanged(GameObject* go, uint32 state, Unit* unit) override
    {
        if (state != GO_ACTIVATED)
            return;
        // M4.11.4.1 final review fix (minor): GO_ACTIVATED is also reached
        // from non-player paths (scripted/creature-driven GameObject::Use
        // callers, and GameObject::SetLootState called with a null user),
        // so the `unit` this hook is handed is the only thing that makes
        // this file's own "a player opened this object" premise true.
        if (!unit || !unit->IsPlayer())
            return;
        if (!sArchipelagoRealmState->IsEnabled())
            return;

        uint64_t spawnId = static_cast<uint64_t>(go->GetSpawnId());

        // Containersanity: bare zone_key credit, at most one per interaction.
        auto containerIt = ArchipelagoCONTAINERSANITYContent::ZONE_POOL_SPAWN_ZONE_KEYS.find(spawnId);
        if (containerIt != ArchipelagoCONTAINERSANITYContent::ZONE_POOL_SPAWN_ZONE_KEYS.end())
        {
            for (std::string const& zoneKey : containerIt->second)
            {
                if (CreditZonePool(ArchipelagoCONTAINERSANITYContent::ZONE_POOL_CREDIT_CANDIDATES, zoneKey))
                    return;
            }
        }

        // Gathersanity gathering_node: "<zone_key>|<profession>|<tier>" composite
        // credit, at most one per interaction (same M4.11.4.1 final-review pacing
        // fix applies here: a border-ambiguous node spawn must not credit more
        // than one zone from a single interaction). A gameobject whose own entry
        // has no real tier (not a gathering node at all, or a real
        // skinning/disenchant-adjacent object that happens to share
        // GAMEOBJECT_TYPE_CHEST) is silently skipped -- GetSpellForLock already
        // gated the interaction on the real skill requirement before this hook
        // ever fires (M4.11.4 design spec §6: "skill-gating is free"), so
        // reaching here for a real gathering node is already proof the real
        // skill check passed.
        auto tierIt = ArchipelagoGATHERSANITYContent::ZONE_POOL_NODE_TIER_BY_ENTRY.find(go->GetEntry());
        if (tierIt == ArchipelagoGATHERSANITYContent::ZONE_POOL_NODE_TIER_BY_ENTRY.end())
            return;

        auto nodeZonesIt = ArchipelagoGATHERSANITYContent::ZONE_POOL_SPAWN_ZONE_KEYS.find(spawnId);
        if (nodeZonesIt == ArchipelagoGATHERSANITYContent::ZONE_POOL_SPAWN_ZONE_KEYS.end())
            return;

        for (std::string const& zoneKey : nodeZonesIt->second)
        {
            std::string compositeKey = zoneKey + "|" + tierIt->second;
            if (CreditZonePool(ArchipelagoGATHERSANITYContent::ZONE_POOL_CREDIT_CANDIDATES, compositeKey))
                return;
        }
    }
};

void AddArchipelagoZonePoolScripts()
{
    new ArchipelagoZonePoolScript();
}
