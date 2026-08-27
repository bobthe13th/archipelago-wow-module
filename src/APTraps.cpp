// azerothcore-wotlk/modules/archipelago_wow/src/APTraps.cpp
#include "APTraps.h"

#include <unordered_map>
#include <vector>

#include "APDelivery.h"
#include "APTrapsPure.h"
#include "CellImpl.h"
#include "Creature.h"
#include "DatabaseEnv.h"
#include "EventProcessor.h"
#include "GridNotifiers.h"
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

    void ApplyRandomDebuff(Player* target)
    {
        // Mirrors ApplyPolymorph's exact self-cast shape (target->CastSpell(
        // target, ..., true)) -- both curses in the curated pool are
        // normally "cast on an enemy" spells with no special self-target
        // restriction enforced server-side, the same property that already
        // lets ApplyPolymorph/ApplyDisarm self-cast their own nominally-
        // hostile spells successfully today.
        uint32_t spellId = Archipelago::Traps::Pure::PickDebuffSpellId(
            urand(0, Archipelago::Traps::Pure::DEBUFF_SPELL_POOL.size() - 1));
        target->CastSpell(target, spellId, true);
    }

    void ApplyRandomTransform(Player* target)
    {
        // Unit::SetDisplayId (Unit.h:1975) is the real morph API;
        // Unit::DeMorph() (Unit.h:1969) reverts to the player's own real
        // model. Reverted after a fixed duration via the same one-shot
        // m_Events lambda pattern ApplyTemporaryPvpFlag (Task 2)
        // introduced.
        target->SetDisplayId(Archipelago::Traps::Pure::RANDOM_TRANSFORM_DISPLAY_ID);

        ObjectGuid guid = target->GetGUID();
        target->m_Events.AddEventAtOffset([guid]()
        {
            if (Player* player = ObjectAccessor::FindPlayer(guid))
                player->DeMorph();
        }, Milliseconds(Archipelago::Traps::Pure::RANDOM_TRANSFORM_DURATION_MS));
    }

    void ApplyAggroNearby(Player* target)
    {
        // Real, in-tree precedent for this exact search+engage pattern:
        // src/server/game/Spells/SpellEffects.cpp:4051-4057 (and again at
        // :4813-4816) builds a UnitList (Unit.h:78) via
        // Acore::AnyUnfriendlyUnitInObjectRangeCheck (GridNotifiers.h:
        // 883-899, already excludes IsCritter() units and anything
        // IsFriendlyTo the target) + Acore::UnitListSearcher, then
        // Cell::VisitObjects (CellImpl.h) to actually run the grid query --
        // note the spec's own "Trinity::AnyUnfriendlyUnitInObjectRangeCheck"
        // is "Acore::" in this checkout (namespace rename, see this plan's
        // Global Constraints). A fixed 20-yard radius (not
        // GetVisibilityRange(), which can be 90+ yards) plus an explicit
        // engaged-count cap keep this "a few nearby mobs notice you," not
        // "everything on the screen dogpiles you." Filtering to
        // unit->ToCreature() (rather than engaging every Unit* the search
        // returns) is not just a type-narrowing convenience -- it is the
        // ONLY thing preventing this trap from forcibly PvP-engaging a
        // bystander real player: AnyUnfriendlyUnitInObjectRangeCheck's own
        // filter has no player/creature distinction, only
        // IsFriendlyTo/IsCritter/IsAlive.
        UnitList targets;
        Acore::AnyUnfriendlyUnitInObjectRangeCheck check(target, target, Archipelago::Traps::Pure::AGGRO_NEARBY_RADIUS_YARDS);
        Acore::UnitListSearcher<Acore::AnyUnfriendlyUnitInObjectRangeCheck> searcher(target, targets, check);
        Cell::VisitObjects(target, searcher, Archipelago::Traps::Pure::AGGRO_NEARBY_RADIUS_YARDS);

        size_t engageCount = Archipelago::Traps::Pure::ClampAggroCount(targets.size(), Archipelago::Traps::Pure::AGGRO_NEARBY_MAX_ENGAGED);
        size_t engaged = 0;
        for (Unit* unit : targets)
        {
            if (engaged >= engageCount)
                break;
            if (Creature* creature = unit->ToCreature())
            {
                creature->EngageWithTarget(target);
                ++engaged;
            }
        }
    }

    void ApplySpawnRareOnYou(Player* target)
    {
        // This module has no per-player creature-level-scaling mechanism
        // (none of the other 16 trap effects need one either), so a single
        // fixed, deliberately-curated elite (Hogger, level 11) is the
        // accepted trade-off: genuinely risky for a leveling character, a
        // low-risk inconvenience for an endgame one. See this plan's
        // Global Constraints.
        auto pos = Archipelago::Traps::Pure::ComputeSpawnOffsetPosition(
            target->GetPositionX(), target->GetPositionY(), target->GetPositionZ(),
            target->GetOrientation(), Archipelago::Traps::Pure::SPAWN_RARE_ON_YOU_DISTANCE_YARDS);
        target->SummonCreature(Archipelago::Traps::Pure::SPAWN_RARE_ON_YOU_CREATURE_ENTRY,
            pos.x, pos.y, pos.z, target->GetOrientation(),
            TEMPSUMMON_TIMED_DESPAWN, Archipelago::Traps::Pure::SPAWN_RARE_ON_YOU_DESPAWN_MS);
    }

    // The first repeating (not one-shot) scheduled trap effect in this
    // module -- Tasks 2 and 6's lambda events fire exactly once each, but a
    // LambdaBasicEvent's Execute() always returns true (EventProcessor.h),
    // meaning it can never reschedule itself. A real BasicEvent subclass is
    // needed instead: each tick's Execute() deals damage, then explicitly
    // schedules a FRESH instance for the next tick (if any remain) via
    // player->m_Events.AddEventAtOffset(new FloorIsLavaTickEvent(...), ...)
    // before returning true itself (this instance is always "done" after
    // Execute -- the next tick is a new object, not a kept-alive one).
    class FloorIsLavaTickEvent : public BasicEvent
    {
    public:
        FloorIsLavaTickEvent(ObjectGuid playerGuid, uint32_t remainingTicks)
            : _playerGuid(playerGuid), _remainingTicks(remainingTicks) { }

        bool Execute(uint64 /*e_time*/, uint32 /*p_time*/) override
        {
            Player* player = ObjectAccessor::FindPlayer(_playerGuid);
            if (!player || !player->IsAlive())
                return true; // player logged out or already died -- nothing left to tick

            uint32_t tickDamage = Archipelago::Traps::Pure::ComputeTickDamage(
                player->GetMaxHealth(), Archipelago::Traps::Pure::FLOOR_IS_LAVA_TICK_PERCENT);
            Unit::DealDamage(player, player, tickDamage, nullptr, DOT, SPELL_SCHOOL_MASK_FIRE, nullptr, true);

            if (_remainingTicks > 1 && player->IsAlive())
            {
                player->m_Events.AddEventAtOffset(
                    new FloorIsLavaTickEvent(_playerGuid, _remainingTicks - 1),
                    Milliseconds(Archipelago::Traps::Pure::FLOOR_IS_LAVA_TICK_INTERVAL_MS));
            }
            return true;
        }

    private:
        ObjectGuid _playerGuid;
        uint32_t _remainingTicks;
    };

    void ApplyFloorIsLava(Player* target)
    {
        // Deviation from the M4.9 spec's illustrative "periodic-damage aura
        // / real DOT-shaped spell id" framing for this row: no single
        // existing spell id was found in this checkout with the same
        // citation confidence as ApplyPolymorph's 118 or ApplyDisarm's
        // 15752 (a self-inflicted, fixed, level-independent damage-over-
        // time effect is not a common player-facing spell shape in WotLK's
        // real spell data). Uses the spec's own explicitly-sanctioned
        // fallback instead: a scheduled Unit::DealDamage (Unit.h:1228, the
        // same static API every other damage source in this checkout
        // ultimately funnels through) tick loop, self-inflicted (attacker
        // == victim == target), fire-schooled. 5 ticks at 1-second
        // intervals, 10% of the player's CURRENT max health per tick (not
        // remaining health) -- up to 50% cumulative over 5 seconds.
        // Genuinely risky (this IS the second "lethal" effect, alongside
        // ApplySpawnRareOnYou) without being a guaranteed kill for a
        // full-health player, matching this module's "legible chaos, not
        // instant unavoidable death" framing (see APTraps.cpp's own
        // sphere-0 queueing comment on ApplyTrapEffect).
        ObjectGuid guid = target->GetGUID();
        target->m_Events.AddEventAtOffset(
            new FloorIsLavaTickEvent(guid, Archipelago::Traps::Pure::FLOOR_IS_LAVA_TICK_COUNT),
            Milliseconds(Archipelago::Traps::Pure::FLOOR_IS_LAVA_TICK_INTERVAL_MS));
    }

    // Defensive fallback only, as of M4.9.1 -- every real effect slug in
    // ArchipelagoTrapsContentTable.h has its own Dispatch case (see
    // docs/m4-plan.md's Task 17 for the original 8, and this plan's own
    // Tasks 1-9 for the remaining 9). This only fires for a genuinely
    // unrecognized slug, e.g. a content-authoring typo.
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
        else if (effect == "random_debuff")
            ApplyRandomDebuff(target);
        else if (effect == "random_transform")
            ApplyRandomTransform(target);
        else if (effect == "aggro_nearby")
            ApplyAggroNearby(target);
        else if (effect == "spawn_rare_on_you")
            ApplySpawnRareOnYou(target);
        else if (effect == "floor_is_lava")
            ApplyFloorIsLava(target);
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
