// azerothcore-wotlk/modules/archipelago_wow/src/APTraps.cpp
#include "APTraps.h"

#include <unordered_map>
#include <vector>

#include "APDelivery.h"
#include "APTrapsPure.h"
#include "DatabaseEnv.h"
#include "EventProcessor.h"
#include "Log.h"
#include "Map.h"
#include "ObjectAccessor.h"
#include "Player.h"
#include "Random.h"
#include "ScriptMgr.h"
#include "SharedDefines.h"
#include "SpellAuras.h"
#include "UpdateFields.h"
#include "Weather.h"

namespace
{
    // Elwynn Forest, WotLK 3.3.5a zone id 12 -- Northshire Abbey and Goldshire
    // are both sub-areas of this zone, and this module has been Alliance/
    // Northshire-only since M2.1 (Archipelago/worlds/wow/regions.py's
    // single-region model), so a single zone id covers all of this module's
    // sphere-0 content. This is well-established, stable public WoW game
    // data (unchanged across every expansion including 3.3.5a), NOT verified
    // against this checkout's own SQL/DBC tables -- areatable_dbc.sql in this
    // repo has the schema but no data rows (DBC-derived tables are populated
    // at deploy time from client-extracted files, not committed to git), so
    // there was nothing in-tree to grep for a citation.
    constexpr uint32_t SPHERE_ZERO_ZONE_ID = 12;

    // In-memory only, not persisted -- a trap effect queued because the
    // target was in a sphere-0 zone at delivery time is lost on a worldserver
    // restart before they leave that zone. Accepted trade-off for M4: traps
    // are flavor content with no progression weight, and this is a narrow
    // edge case (item arrives while physically standing in Northshire),
    // not worth a new DB table and restart-recovery path the way delivery
    // itself (archipelago_state) needed one.
    std::unordered_map<ObjectGuid, std::vector<std::pair<std::string, bool>>> g_queuedTrapsByPlayer;

    void ApplyDurabilityDamage(Player* target)
    {
        // Equipped items only (inventory=false), 10% durability loss per hit --
        // noticeable without being able to fully break gear from a single trap.
        target->DurabilityLossAll(0.10, false);
    }

    void ApplyBuffStrip(Player* target)
    {
        // Real precedent: Unit::RemoveArenaAuras() (Unit.cpp) uses this exact
        // RemoveAppliedAuras predicate shape to strip "positive visible auras"
        // without touching passives -- talents, racials, and stances are all
        // IsPassive() == true, so this leaves them alone. A plain
        // RemoveAllAuras() (also real, Unit.h) was rejected: it strips
        // passive auras too, which would be wrong for a flavor trap.
        target->RemoveAppliedAuras([](AuraApplication const* aurApp)
        {
            return aurApp->IsPositive() && !aurApp->GetBase()->IsPassive();
        });
    }

    void ApplyPolymorph(Player* target)
    {
        // Spell 118: the base-rank "Polymorph" (Mage sheep spell), universally
        // stable WotLK spell data. triggered=true bypasses cooldown/reagent/
        // cast-time/facing checks for a self-inflicted trap cast.
        target->CastSpell(target, 118, true);
    }

    void ApplyTeleportToGraveyard(Player* target)
    {
        // Confirmed safe to call on a live (non-ghost) player -- also used
        // outside the death/release flow elsewhere in this checkout (e.g.
        // Player::HandleFall when stuck on a transport).
        target->RepopAtGraveyard();
    }

    void ApplyScreenDrunk(Player* target)
    {
        // SetDrunkValue's range is uint8 (0-255); 100 is a strongly noticeable
        // drunk-screen-effect value without maxing out at 255. itemId=0 since
        // this isn't from a real consumed item.
        target->SetDrunkValue(100, 0);
    }

    void ApplyGreyItemBagFill(Player* target)
    {
        // Item 7073 "Broken Fang": a real Quality-0 (Poor/grey) junk item
        // confirmed in this checkout's item_template.sql. Reuses
        // APDelivery's shared bags-first/mail-fallback primitive rather than
        // duplicating that logic a third time.
        CharacterDatabaseTransaction trans = CharacterDatabase.BeginTransaction();
        Archipelago::Delivery::GiveOrMailItem(target, 7073, trans);
        CharacterDatabase.CommitTransaction(trans);
    }

    void ApplyDisarm(Player* target)
    {
        // Spell 15752: a real item-proc disarm spell already referenced in
        // this checkout (spell_item.cpp), preferred over the boss-ability
        // disarm ids (6713) since it's designed to be cast on a player by a
        // non-boss source.
        target->CastSpell(target, 15752, true);
    }

    void ApplyForcedDance(Player* target)
    {
        target->HandleEmoteCommand(EMOTE_ONESHOT_DANCE);
    }

    void ApplyRandomMobSpawn(Player* target)
    {
        // Entry 620 "Chicken": a real, harmless CREATURE_TYPE_CRITTER (type=8)
        // template confirmed in this checkout's own
        // data/sql/base/db_world/creature_template.sql:519 -- rank=0 (Normal,
        // not elite), minlevel=maxlevel=1, and critters cannot enter combat or
        // attack (Acore::AnyUnfriendlyUnitInObjectRangeCheck itself excludes
        // IsCritter() units -- see ApplyAggroNearby, Task 7), so this is
        // deliberately, verifiably NOT the "lethal" bucket's job -- pure
        // flavor. Spawned via the standard WorldObject::SummonCreature API
        // (Object.h) with TEMPSUMMON_TIMED_DESPAWN so it cleans itself up
        // with no extra bookkeeping on this module's side.
        auto pos = Archipelago::Traps::Pure::ComputeSpawnOffsetPosition(
            target->GetPositionX(), target->GetPositionY(), target->GetPositionZ(),
            target->GetOrientation(), Archipelago::Traps::Pure::RANDOM_MOB_SPAWN_DISTANCE_YARDS);
        target->SummonCreature(Archipelago::Traps::Pure::RANDOM_MOB_SPAWN_CREATURE_ENTRY,
            pos.x, pos.y, pos.z, target->GetOrientation(),
            TEMPSUMMON_TIMED_DESPAWN, Archipelago::Traps::Pure::RANDOM_MOB_SPAWN_DESPAWN_MS);
    }

    void ApplyTemporaryPvpFlag(Player* target)
    {
        // Player::UpdatePvP(bool state, bool _override) -- Player.h:1885, a
        // real API. state=true flags the player PvP-enabled immediately;
        // _override=true bypasses the normal client-initiated
        // sheathe-weapon-first/5-minute-timer PvP-flagging rules, matching a
        // trap's "it just happens to you" framing rather than a voluntary
        // toggle. Reverted after a fixed duration via a one-shot m_Events
        // lambda event (WorldObject::m_Events, Object.h:742;
        // EventProcessor::AddEventAtOffset, EventProcessor.h:108-114) -- the
        // first timed/delayed trap effect in this module (see this plan's
        // Global Constraints). ObjectAccessor::FindPlayer re-resolves the
        // player by guid rather than capturing the raw Player* directly,
        // since the player could log out during the delay and a dangling
        // pointer must never be dereferenced.
        target->UpdatePvP(true, true);

        ObjectGuid guid = target->GetGUID();
        target->m_Events.AddEventAtOffset([guid]()
        {
            if (Player* player = ObjectAccessor::FindPlayer(guid))
                player->UpdatePvP(false, true);
        }, Milliseconds(Archipelago::Traps::Pure::TEMPORARY_PVP_FLAG_DURATION_MS));
    }

    void ApplyRandomWeatherBurst(Player* target)
    {
        // Deviation from the M4.9 spec's own illustrative `Map::SetWeather(
        // ...)` call: no such method exists on Map in this checkout. The
        // real API (confirmed via cs_misc.cpp's `.weather` GM command,
        // HandleChangeWeather,
        // src/server/scripts/Commands/cs_misc.cpp:1976-1998) is
        // Map::GetOrGenerateZoneDefaultWeather(zoneId) -> Weather*, then
        // Weather::SetWeather(WeatherType, float grade) (Weather.h:76). See
        // this plan's Global Constraints.
        uint32_t zoneId = target->GetZoneId();
        Weather* weather = target->GetMap()->GetOrGenerateZoneDefaultWeather(zoneId);
        if (!weather)
        {
            LOG_INFO("module.archipelago_wow", "Archipelago: random_weather_burst for {} found no weather system for zone {}, skipped", target->GetName(), zoneId);
            return;
        }

        uint32_t picked = Archipelago::Traps::Pure::PickWeatherBurstType(
            urand(0, Archipelago::Traps::Pure::WEATHER_BURST_TYPE_POOL.size() - 1));
        weather->SetWeather(WeatherType(picked), Archipelago::Traps::Pure::WEATHER_BURST_GRADE);
    }

    void ApplyHaircut(Player* target)
    {
        // PLAYER_BYTES (UpdateFields.h:181) offset 2 = hairstyle, offset 3 =
        // haircolor -- confirmed against this checkout's OWN Player.cpp, not
        // just asserted as stable public data: Player::Create
        // (Player.cpp:551) packs `Skin | (Face<<8) | (HairStyle<<16) |
        // (HairColor<<24)` into PLAYER_BYTES, and
        // Player::SendInitialPacketsAfterAddToMap (Player.cpp:13566-13569)
        // reads GetByteValue(PLAYER_BYTES, 2) as hairstyle and
        // GetByteValue(PLAYER_BYTES, 3) as haircolor. Only the hairstyle
        // byte (offset 2) is touched here -- see this plan's Global
        // Constraints for why haircolor (offset 3) was deliberately left
        // out of this task's scope, and why "haircut" maps most literally
        // to hairstyle anyway.
        uint8_t currentStyle = target->GetByteValue(PLAYER_BYTES, 2);
        uint8_t newStyle = Archipelago::Traps::Pure::PickDifferentHairStyle(
            currentStyle, static_cast<uint8_t>(urand(0, Archipelago::Traps::Pure::HAIRSTYLE_VALUE_COUNT - 2)));
        target->SetByteValue(PLAYER_BYTES, 2, newStyle);
    }

    // effect slugs with no verified real implementation yet -- each needs its
    // own dedicated API research pass (see docs/m4-plan.md's Task 17 outcome
    // note for specifics on why each was deferred rather than guessed at).
    void ApplyNotYetImplemented(Player* target, std::string const& effect)
    {
        LOG_INFO("module.archipelago_wow", "Archipelago: trap effect '{}' is not yet implemented, skipped for {}", effect, target->GetName());
    }

    void Dispatch(Player* target, std::string const& effect)
    {
        if (effect == "durability_damage")
            ApplyDurabilityDamage(target);
        else if (effect == "buff_strip")
            ApplyBuffStrip(target);
        else if (effect == "polymorph")
            ApplyPolymorph(target);
        else if (effect == "teleport_to_graveyard")
            ApplyTeleportToGraveyard(target);
        else if (effect == "screen_drunk")
            ApplyScreenDrunk(target);
        else if (effect == "grey_item_bag_fill")
            ApplyGreyItemBagFill(target);
        else if (effect == "disarm")
            ApplyDisarm(target);
        else if (effect == "forced_dance")
            ApplyForcedDance(target);
        else if (effect == "random_mob_spawn")
            ApplyRandomMobSpawn(target);
        else if (effect == "temporary_pvp_flag")
            ApplyTemporaryPvpFlag(target);
        else if (effect == "random_weather_burst")
            ApplyRandomWeatherBurst(target);
        else if (effect == "haircut")
            ApplyHaircut(target);
        else
            ApplyNotYetImplemented(target, effect);
    }
}

namespace Archipelago::Traps
{
    void ApplyTrapEffect(Player* target, std::string const& effect, bool lethal)
    {
        if (target->GetZoneId() == SPHERE_ZERO_ZONE_ID)
        {
            // Sec8: "No traps in sphere-0 starting zones". Queue rather than
            // drop -- a silently vanished trap is exactly the kind of
            // un-narratable chaos the design spec's "legible chaos" framing
            // argues against (a queued-and-deferred trap still eventually
            // fires and is still visible in logs; a dropped one just
            // disappears with no trace).
            g_queuedTrapsByPlayer[target->GetGUID()].emplace_back(effect, lethal);
            LOG_INFO("module.archipelago_wow", "Archipelago: trap effect '{}' for {} queued (sphere-0 zone), will fire on their next zone change", effect, target->GetName());
            return;
        }

        Dispatch(target, effect);
    }

    void FlushQueuedTrapsIfLeavingSphereZero(Player* player, uint32_t newZone)
    {
        if (newZone == SPHERE_ZERO_ZONE_ID)
            return; // still in (or re-entered) the sphere-0 zone -- stay queued

        auto it = g_queuedTrapsByPlayer.find(player->GetGUID());
        if (it == g_queuedTrapsByPlayer.end())
            return;

        std::vector<std::pair<std::string, bool>> queued = std::move(it->second);
        g_queuedTrapsByPlayer.erase(it);

        for (auto const& [effect, lethal] : queued)
        {
            (void)lethal; // not yet consumed here -- Task 19's DeathSource tagging
                          // (see APTraps.h's ApplyTrapEffect comment and this task's
                          // Step 5) will read it once that enum exists.
            Dispatch(player, effect);
        }
    }
}

namespace
{
    class ArchipelagoTrapZoneScript : public PlayerScript
    {
    public:
        ArchipelagoTrapZoneScript() : PlayerScript("ArchipelagoTrapZoneScript", { PLAYERHOOK_ON_UPDATE_ZONE }) { }

        void OnPlayerUpdateZone(Player* player, uint32 newZone, uint32 /*newArea*/) override
        {
            Archipelago::Traps::FlushQueuedTrapsIfLeavingSphereZero(player, newZone);
        }
    };
}

void AddArchipelagoTrapScripts()
{
    new ArchipelagoTrapZoneScript();
}
