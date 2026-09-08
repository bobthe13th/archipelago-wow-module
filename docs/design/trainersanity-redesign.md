# Trainersanity redesign — scoping doc

Status: **scoping only**. No code has been written. This grounds the requested
redesign in the real engine/apworld APIs and proposes splitting it into
sub-projects with a specific dependency order, per two decisions that need to
be made before a full bite-sized implementation plan can be written for the
back half of the work.

## 0. Why this isn't one plan

The request (progressive spell-rank items, trainer-purchase interception,
cross-class casting bypass, offline queueing) reads as four features but is
really **two independent decisions gating three dependent pieces of work**.
Writing a single bite-sized TDD plan for all of it now would mean guessing at
both decisions and likely discarding most of the plan once you weigh in. This
doc grounds each piece in the real codebase, then asks for the two decisions.

## 1. Grounded facts (verified against this checkout, not assumed)

**Spell chains are real and usable.** `SpellChainNode` (`src/server/game/Spells/SpellMgr.h:550-557`, fields `prev`/`next`/`first`/`last`/`rank`) is loaded from the real `spell_chain` DB table (not a DBC parse) and queryable via `SpellMgr::GetSpellChainNode(uint32 spell_id)` (`SpellMgr.h:674`). Rank-chain traversal is a solved problem — no new data source needed.

**There is no trainer-purchase hook — this would be the module's first-ever core patch.** `WorldSession::HandleTrainerBuySpellOpcode` (`Handlers/NPCHandler.cpp:119`) calls `Trainer::TeachSpell` (`Entities/Creature/Trainer.cpp:80`), which does eligibility check → `player->ModifyMoney(-cost)` → `player->learnSpell(...)`, all in one function, with zero `sScriptMgr` calls anywhere in `Trainer.cpp`. `ScriptMgr.h` has no trainer-purchase hook of any kind. Every other mechanism this module has ever shipped is additive (PlayerScript/AllSpellScript hooks) — it has never patched a core `src/server/game` file. Blocking the vanilla purchase outright means either (a) patching `Trainer.cpp` directly, breaking that streak, or (b) staying additive by letting the vanilla learn happen and reverting it in a hook (see §3).

**`learnSpell()` fires the SAME hook for every caller, including our own grants — this is the load-bearing finding.** `Player::learnSpell()` (`Entities/Player/Player.cpp:3412-3427`) calls `sScriptMgr->OnPlayerLearnSpell(this, spellId)` unconditionally, whether the caller is `Trainer::TeachSpell` (vanilla purchase), `APSpellGrant::GrantOrQueue` (our own item-grant path), or anything else. **Consequence: introducing direct-grant progressive spell items today, without first changing what `ArchipelagoLearnSpellScript` listens for, would make our own grants re-trigger the exact same location check they were supposed to be gated behind** — the identical out-of-band-completion hazard `trainer_spells`' current design was built to avoid (see the `trainersanity-design-mismatch` memory from the prior investigation). **This means progressive items (the "1. Progressive Items" ask) cannot ship before the trigger is decoupled from `learn_spell` (the "2. Intercepting & Triggering" ask) — the dependency runs opposite to the order they were listed in the request.**

**Cast-time class ownership is likely not checked, but not exhaustively confirmed.** No generic "does caster's class match this spell's `SpellFamilyName`" gate was found in `Spell::CheckCast` or `SpellMgr` in the time spent looking (the `SpellFamilyName` references found in `Spell.cpp` are all spell-specific effect dispatch, e.g. pet-scaling special cases, not a permission gate). This matches long-standing private-server folklore that a `.learn`-granted out-of-class spell casts fine, mana permitting. Treat as "probably true, verify with a real spike before committing" rather than a settled fact.

**The resource-type problem is real but narrower than it looks.** `Player`'s power type is class-driven via `ChrClassesEntry::powerType` (`Player.cpp:10777`) — a class's max value for a power type it doesn't use is 0. In WotLK specifically, only **3 of 10 classes are non-mana**: Warrior (Rage), Rogue (Energy), Death Knight (Runic Power). The other 7 (Paladin, Hunter, Priest, Shaman, Mage, Warlock, Druid) all run on Mana pre-Cataclysm. So "any class casts any spell" is only a hard resource dead-end for granting a mana-cost spell to a Warrior/Rogue/DK, or a Rage/Energy/Runic-cost spell to any of the 7 mana classes — not a universal problem across all 45 class pairs. This changes the shape of a reasonable fix (see §4, Decision 2).

**Progressive-item precedent is real, and has a name to copy, not invent.** The actual pattern already shipping is `GATHERING_SKILL_PROGRESSION_ITEMS: dict[str, tuple[int, int]]` (`Archipelago/worlds/wow/items.py:75-78`) — `name -> (item_id, tier_count)`, the same shape `core_loop`'s "Progressive Level Cap" (item ids 810000-810010) already uses. A "Progressive Fireball" family should follow this exact shape, not a new one.

**Offline queueing already works and is already class/level-agnostic.** `APSpellGrant::GrantOrQueue`/`ApplyPendingGrants` (`archipelago_wow/src/APSpellGrant.cpp`) call `learnSpell()` directly online or queue into `archipelago_pending_spell_grants` offline, with no class or level check in either path today. Nothing to build here — reuse as-is once the trigger/grant redesign lands. (The "queue safely without failing core validation" part of the request is already solved; `learnSpell()`/`addSpell()` don't reject on class/level mismatch, matching §1's class-check finding.)

## 2. Corrected dependency order

```
Sub-project B (foundation): decouple the trigger + stop the double-grant
        |
        v
Sub-project A: progressive spell-rank items (needs B's new trigger to exist)
        |
        v (optional, separable)
Sub-project C: cross-class eligibility in the apworld item pool
```

B is not optional infrastructure for A — it is a hard prerequisite. C only
changes *which classes can receive which chain's progressive item* in the
apworld's pool logic; it doesn't touch the C++ grant/trigger path at all, so
it can genuinely ship later (or never) without blocking A.

## 3. Decision 1 — how to stop the vanilla trainer purchase from teaching the spell for free

Two real options, given no script hook exists on the purchase path (§1):

**Option 1 — patch `Trainer::TeachSpell` directly (`Entities/Creature/Trainer.cpp:80`)** to skip the `learnSpell` call when the target spell_id is one of this family's own gated spells (checked against the compiled `SpellIdToLocationId`-style map already used elsewhere in this module), while still charging gold and sending the "you have learned" client packet if that's the desired feel (or refusing the purchase outright with a chat message, closer to `APGating.cpp`'s existing riding-gate pattern). Clean, no re-entrancy risk, but this is a real core-file diff this project has never carried before — it needs manual reconciliation on every future upstream AzerothCore sync, forever, and there's no existing precedent in this codebase for how that maintenance burden is tracked.

**Option 2 — stay additive: let the vanilla learn happen, then revert it inside the existing `ArchipelagoLearnSpellScript::OnPlayerLearnSpell` hook** if the corresponding location hasn't been "genuinely triggered" yet under the new decoupled definition — refund the gold (`player->ModifyMoney(+cost)`, cost is knowable from `spell_ranks`/trainer data at generation time) and call `player->removeSpell(spellId, SPEC_MASK_ALL, false)` (`Player.h:1728`, confirmed real signature). Stays 100% additive, matching this module's established pattern, but has a real (if brief) window where the player's client shows "you have learned X" before it's silently taken back — a one-off visual/UX rough edge, not a correctness bug.

**Recommendation: Option 2.** It preserves the "never patch core" invariant this whole module has held for its entire history, and the UX rough edge (a flash "learned" toast) is far cheaper than starting a core-patch-maintenance burden for one feature. But this is your call to make, not mine to assume — the two options have genuinely different long-term costs.

## 4. Decision 2 — what happens when a cross-class grant's resource type doesn't match

Given only 3 of 10 classes (Warrior/Rogue/DK) are the actual incompatible cases (§1):

**Option 1 — apworld-side exclusion (cheapest, no C++ engineering).** When building each class's eligible item pool, only ever place a mana-costing spell chain into a mana-class's pool, and keep Warrior/Rogue/DK spell chains restricted to those same three classes (or excluded from cross-class pooling entirely, standalone). "Cross-class" becomes real and meaningful for the 7 mana classes trading spells among themselves (a Priest casting Fireball, a Druid casting Renew, etc. — which is most of the fun of the ask), while sidestepping the guaranteed-broken combinations instead of trying to engineer around them.

**Option 2 — force-zero the cost of any cross-class-granted spell server-side.** Needs a new per-grant cost-override mechanism (nothing like this exists today) and reopens real balance/exploit risk (free-casting a powerful spell repeatedly).

**Option 3 — grant a baseline resource pool to every class regardless of their real power type.** The most invasive option: touches `Unit::GetMaxPower`-equivalent core logic for every player, not just ones with cross-class grants, with a large, hard-to-fully-enumerate blast radius across existing hybrid-resource systems (Death Knight Runic Power, Warrior Rage generation, etc.).

**Recommendation: Option 1.** It's the only option with zero new C++ surface area and zero new balance risk, and it still delivers the core fun of the ask (mana-class cross-pollination, which is 7/10 classes and the more interesting combinations anyway — a Rogue casting Fireball was always going to be the least balanced part of this idea). Again, your call.

## 5. Decisions made (2026-09-08)

- **Decision 1: patch `Trainer::TeachSpell` directly** (`Entities/Creature/Trainer.cpp:80`). This is azerothcore-wotlk core's own first-ever direct patch from this project — track it explicitly as a diff that needs manual reconciliation on future upstream AzerothCore syncs (no mechanism for that currently exists in this repo; worth a follow-up note of its own once this lands).
- **Decision 2: restrict pooling by resource compatibility.** Mana-cost spell chains (Paladin/Hunter/Priest/Shaman/Mage/Warlock/Druid) cross-pollinate freely among those 7 classes in the apworld's pool logic; Warrior/Rogue/Death Knight spell chains stay restricted to those three (or standalone), never mixed with a mana class in either direction.

## 6. What's ready to plan now

With both decisions made, a full bite-sized implementation plan (file-by-file,
TDD steps, per `superpowers:writing-plans`) can be written for:

- **Sub-project B+A** (combined — A structurally depends on B, per §2): the new "trainer purchase attempted" trigger kind, the `Trainer::TeachSpell` patch from Decision 1, updating `extract_trainer_spells.py`'s trigger schema away from `learn_spell`, and `SpellChainNode`-driven grouping of trainer-spell locations into `Progressive <Spell Name>` items (following `GATHERING_SKILL_PROGRESSION_ITEMS`'s exact shape), wired to `APSpellGrant::GrantOrQueue` (already generic enough to reuse as-is) instead of the current mail-shaped filler-item delivery.
- **Sub-project C**: pool-eligibility filtering in the apworld per Decision 2 — independent of B/A's C++ work, can be planned/implemented in parallel.

Nothing above requires new research — the plan can be written directly.
