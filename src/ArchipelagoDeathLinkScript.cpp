// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoDeathLinkScript.cpp
//
// Task 18/19 (design spec Sec11): confirmed against this checkout, not
// inferred from upstream docs or a different AzerothCore fork/version --
//   azerothcore-wotlk/src/server/game/Scripting/ScriptDefines/PlayerScript.h:32
//       PLAYERHOOK_ON_PLAYER_JUST_DIED,
//   azerothcore-wotlk/src/server/game/Scripting/ScriptDefines/PlayerScript.h:228
//       virtual void OnPlayerJustDied(Player* /*player*/) { }
// fired from exactly one chokepoint, Player::KillPlayer()
// (azerothcore-wotlk/src/server/game/Entities/Player/Player.cpp:4628-4653):
// not scoped to any damage source, so it fires identically for a mob kill,
// fall damage, environmental damage, PvP, and an incoming DeathLink kill --
// grep for OnPlayerJustDied in this checkout returns exactly the ScriptMgr
// plumbing plus this single call site.
//
// The receive-side kill path deliberately does NOT call Player::KillPlayer()
// on its own -- verified against KillPlayer()'s body that it is pure
// post-death bookkeeping (corpse timers, death-state transition) that
// assumes health is already 0, not a "deal lethal damage" API. Every real
// explicit call site of KillPlayer() in this codebase (MiscHandler.cpp,
// MovementHandler.cpp, WorldSession.cpp) only ever calls it after lethal
// damage/health-zero has already been produced some other way. The verified
// real precedent for "this player must die, full stop" is
// MovementHandler.cpp's out-of-bounds handling: Player::EnvironmentalDamage
// (DAMAGE_FALL_TO_VOID, GetMaxHealth()) -- which bypasses immunities like
// Divine Shield and internally drives the normal DealDamage->death chain --
// followed by a KillPlayer() fallback only if the player is somehow still
// alive afterward (the same still-alive-after-EnvironmentalDamage edge case
// that precedent itself guards against).
//
// KillPlayer() does NOT fire inline with EnvironmentalDamage in the normal
// case -- verified against PlayerUpdates.cpp's Player::Update(): "if
// (m_deathState == DeathState::JustDied) KillPlayer();" is a general
// catch-all that only runs on that player's *next* tick after
// Unit::DealDamage's kill chain sets DeathState::JustDied, not inline with
// whatever code dealt the lethal damage. This is why TagNextDeath/
// ConsumePendingDeathSource below are keyed per-player (by GUID) rather than
// a single shared slot -- see ArchipelagoDeathLink.h's comment for why a
// shared slot would silently misattribute deaths when this function kills
// several players in the same tick.
#include <unordered_map>
#include <vector>

#include "Log.h"
#include "Player.h"
#include "ScriptMgr.h"
#include "WorldSessionMgr.h"
#include "ArchipelagoDeathLink.h"
#include "ArchipelagoManager.h"
#include "ArchipelagoRealmState.h"

namespace Archipelago::DeathLink
{
    namespace
    {
        std::unordered_map<ObjectGuid, DeathSource> g_pendingDeathSources;
    }

    void TagNextDeath(Player* player, DeathSource source)
    {
        if (player)
            g_pendingDeathSources[player->GetGUID()] = source;
    }

    DeathSource ConsumePendingDeathSource(Player* player)
    {
        if (!player)
            return DeathSource::PlayerCaused;

        auto it = g_pendingDeathSources.find(player->GetGUID());
        if (it == g_pendingDeathSources.end())
            return DeathSource::PlayerCaused;

        DeathSource source = it->second;
        g_pendingDeathSources.erase(it);
        return source;
    }

    void HandleIncomingDeathLinks(std::vector<Archipelago::IncomingDeathLink> const& bounces)
    {
        if (bounces.empty())
            return;
        // When the module is disabled, this must be full vanilla behavior --
        // no lookups into realm state at all, matching every other gating
        // script's convention.
        if (!sArchipelagoRealmState->IsEnabled())
            return;
        if (!sArchipelagoRealmState->GetDeathLinkReceiveEnabled())
            return;

        for (Archipelago::IncomingDeathLink const& bounce : bounces)
        {
            if (!sArchipelagoRealmState->TryConsumeDeathLinkReceiveCooldown())
            {
                LOG_INFO("module.archipelago_wow", "Archipelago: incoming DeathLink from '{}' suppressed by cooldown", bounce.source);
                continue;
            }

            LOG_INFO("module.archipelago_wow", "Archipelago: incoming DeathLink -- {}", bounce.cause);

            // Snapshot the player list before killing anyone: each kill runs a
            // full death chain (pet removal, battleground handlers, every
            // other registered PlayerScript's OnPlayerJustDied), any of which
            // could plausibly touch WorldSessionMgr's session map. Iterating
            // sWorldSessionMgr->GetAllSessions() directly while triggering
            // that is an avoidable iterator-invalidation risk -- collect first,
            // act after.
            std::vector<Player*> onlinePlayers;
            for (auto const& [accountId, session] : sWorldSessionMgr->GetAllSessions())
            {
                if (Player* player = session->GetPlayer())
                    onlinePlayers.push_back(player);
            }

            for (Player* player : onlinePlayers)
            {
                if (!player->IsAlive())
                    continue;

                TagNextDeath(player, DeathSource::IncomingDeathLink);
                player->EnvironmentalDamage(DAMAGE_FALL_TO_VOID, player->GetMaxHealth());
                if (player->IsAlive())
                    player->KillPlayer();
            }
        }
    }
}

class ArchipelagoDeathLinkScript : public PlayerScript
{
public:
    ArchipelagoDeathLinkScript() : PlayerScript("ArchipelagoDeathLinkScript", { PLAYERHOOK_ON_PLAYER_JUST_DIED }) { }

    void OnPlayerJustDied(Player* player) override
    {
        Archipelago::DeathLink::DeathSource source = Archipelago::DeathLink::ConsumePendingDeathSource(player);

        // Loop guard (Sec11, plan Step 7): only a genuinely player-caused
        // death may broadcast. An incoming DeathLink kill (tagged just above
        // this hook firing, in HandleIncomingDeathLinks) or a future lethal
        // trap kill (Task 17's deferred Step 5) must never re-broadcast, or
        // two AP slots each running this module would ping-pong deaths back
        // and forth forever.
        if (source != Archipelago::DeathLink::DeathSource::PlayerCaused)
            return;

        if (!sArchipelagoRealmState->IsEnabled())
            return;
        if (!sArchipelagoRealmState->GetDeathLinkSendEnabled())
            return;
        if (!sArchipelagoRealmState->TryConsumeDeathLinkSendCooldown())
        {
            LOG_INFO("module.archipelago_wow", "Archipelago: DeathLink send suppressed by cooldown for {}", player->GetName());
            return;
        }

        sArchipelagoMgr->SendDeathLink(player->GetName() + " died.", player->GetName());
    }
};

void AddArchipelagoDeathLinkScripts()
{
    new ArchipelagoDeathLinkScript();
}
