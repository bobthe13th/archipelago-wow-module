# Trainersanity Trigger Decoupling & Progressive Spell-Rank Items Implementation Plan

> **For agentic workers:** REQUIRED SUB-SKILL: Use superpowers:subagent-driven-development (recommended) or superpowers:executing-plans to implement this plan task-by-task. Steps use checkbox (`- [ ]`) syntax for tracking.

**Goal:** Stop trainer purchases from teaching Trainersanity-gated spells for free, and turn each spell's rank chain into one "Progressive `<Spell Name>`" AP item that only actually teaches the next rank when received from the multiworld.

**Architecture:** A new AzerothCore core hook (`PlayerScript::OnPlayerCanTrainerTeachSpell`) fires from inside `Trainer::TeachSpell` before any gold is charged or spell learned. The module's own `ArchipelagoTrainerPurchaseScript` answers it: send the (deduped) location check for "attempted to train this spell_id," then always deny the vanilla teach for any spell_id this family tracks — money is never charged, no visual/sound plays, nothing is ever actually learned this way. The only path that grants a real spell after this change is `APSpellGrant::GrantOrQueue`, invoked when the matching "Progressive `<Spell>`" item is received; a realm-wide tier counter (the same `GetFlagTier`/`SetFlagTier` mechanism `GrantLevelCapCopy`/`GrantStatue` already use) tracks which rank comes next for each chain.

**Tech Stack:** C++ (AzerothCore core + archipelago_wow module, doctest for pure-logic unit tests), Python (apworld extractor, `unittest`).

**Spec:** `modules/archipelago_wow/docs/design/trainersanity-redesign.md`

## Global Constraints

- Decision 1 (spec §5): block via a direct patch to `Trainer::TeachSpell` (`src/server/game/Entities/Creature/Trainer.cpp`), not the additive learn-then-revert hack.
- A blocked purchase charges **zero gold** and plays **no** visual/sound/success packet — the hook runs before `player->ModifyMoney(-moneyCost)` and before the two `SendPlaySpell*` calls.
- Every `.cpp`/`.h` file this module has ever shipped uses PlayerScript/AllSpellScript hooks, never a raw core call into module code — the new core hook must be a genuine new `ScriptMgr`/`PlayerScript` hook type (matching `PLAYERHOOK_CAN_USE_ITEM`'s exact shape), not a bespoke free-function call from `Trainer.cpp` into the module.
- Player/WorldSession-touching hook classes in this module are manually verified only (no automated C++ test) — this is this module's own established discipline (see `APGateDecision.h`'s own header comment); only *pure* decision logic gets a doctest. Don't invent a fake C++ test for the PlayerScript class itself.
- The real world-DB table for spell rank chains is `spell_ranks` (columns `first_spell_id`, `spell_id`, `rank` — **not** `spell_chain`, which doesn't exist in this schema; confirmed by reading `SpellMgr::LoadSpellRanks`, `src/server/game/Spells/SpellMgr.cpp:1279-1385`).
- `learnSpell()`/`addSpell()` has no class or level check anywhere in the path `APSpellGrant::GrantOrQueue` already uses — no bypass code is needed for cross-class/level-agnostic grants, that already works today. Do not add speculative bypass logic.
- Formatting: `.editorconfig` (4-space C++, 2-space Python/YAML, LF, no trailing whitespace). SQL is not touched by this plan.

---

### Task 1: Pure decision logic for the new trainer-teach gate (TDD, doctest)

**Files:**
- Modify: `archipelago_wow/src/APGateDecision.h`
- Create: `archipelago_wow/src/APGateDecision.cpp` (this header currently has no matching `.cpp` — its two existing functions are defined inline nowhere visible in the header, so check `archipelago_wow/src/APGateDecision.cpp` first; if it already exists, add to it instead of creating)
- Test: `archipelago_wow/test/test_APGateDecision.cpp` (create if absent, else extend)
- Modify: `archipelago_wow/test/CMakeLists.txt` (add the new test file to the doctest target's sources, following how `test_APGating.cpp` is already listed)

**Interfaces:**
- Produces: `bool Archipelago::Gating::ShouldBlockTrainerTeach(bool moduleEnabled, bool alreadyKnownOrGrantedViaAP)` — pure, no AzerothCore engine types. Returns `true` (block the vanilla teach) when the module is enabled and the spell has NOT yet been granted via AP; returns `false` (let the real `TeachSpell` flow decide, i.e. don't interfere) when the module is disabled, or once the player already legitimately knows the spell (covers both "already granted via AP" and the pre-existing "player already knows it" vanilla case — `Trainer::CanTeachSpell` already returns `false` for a known spell before this hook is ever reached, so this predicate only needs to distinguish "module on, not yet AP-granted" from every other case).

- [ ] **Step 1: Read the existing file first**

Read `archipelago_wow/src/APGateDecision.h` in full (already shown in this conversation: it declares `ShouldSuppressGatedAction`/`ShouldSuppressGatedTier`, both `namespace Archipelago::Gating`, zero engine includes, only `<cstdint>`). Confirm whether `APGateDecision.cpp` exists (glob `archipelago_wow/src/APGateDecision.cpp`); this file's two existing functions must be defined *somewhere* — find that definition file and match its exact style for the new function.

- [ ] **Step 2: Write the failing test**

```cpp
// archipelago_wow/test/test_APGateDecision.cpp
#include "doctest.h"
#include "APGateDecision.h"

TEST_CASE("ShouldBlockTrainerTeach blocks only when module enabled and not yet AP-granted")
{
    using namespace Archipelago::Gating;
    CHECK(ShouldBlockTrainerTeach(true, false) == true);
    CHECK(ShouldBlockTrainerTeach(true, true) == false);
    CHECK(ShouldBlockTrainerTeach(false, false) == false);
    CHECK(ShouldBlockTrainerTeach(false, true) == false);
}
```

Add `test_APGateDecision.cpp` next to `test_APGating.cpp` in `archipelago_wow/test/CMakeLists.txt`'s source list (mirror the existing entry for `test_APGating.cpp` exactly — same target, same pattern).

- [ ] **Step 3: Run test to verify it fails**

Run: `cmake --build archipelago_wow/test/build --target archipelago_wow_tests` (or whatever the existing doctest target is named — check `archipelago_wow/test/CMakeLists.txt` for the real target name before running; don't guess a target name that doesn't exist).
Expected: FAIL to compile — `ShouldBlockTrainerTeach` is not declared.

- [ ] **Step 4: Add the declaration and definition**

In `APGateDecision.h`, append:

```cpp
    // Pure decision logic for the Trainersanity trainer-purchase gate
    // (M-next): true means "block the vanilla TeachSpell learn/cast and
    // charge no gold" -- Trainer::CanTeachSpell already filters out a
    // spell the player legitimately already knows before this predicate
    // is ever consulted, so alreadyKnownOrGrantedViaAP only needs to
    // cover "already granted via APSpellGrant::GrantOrQueue" in practice.
    bool ShouldBlockTrainerTeach(bool moduleEnabled, bool alreadyKnownOrGrantedViaAP);
```

In the matching `.cpp` (found or created in Step 1), append:

```cpp
    bool ShouldBlockTrainerTeach(bool moduleEnabled, bool alreadyKnownOrGrantedViaAP)
    {
        return moduleEnabled && !alreadyKnownOrGrantedViaAP;
    }
```

- [ ] **Step 5: Run test to verify it passes**

Run the same build/test command as Step 3.
Expected: PASS.

- [ ] **Step 6: Commit**

```bash
git add archipelago_wow/src/APGateDecision.h archipelago_wow/src/APGateDecision.cpp archipelago_wow/test/test_APGateDecision.cpp archipelago_wow/test/CMakeLists.txt
git commit -m "feat(wow): add ShouldBlockTrainerTeach pure gate decision"
```

---

### Task 2: New core hook — `PlayerScript::OnPlayerCanTrainerTeachSpell`

**Files:**
- Modify: `azerothcore-wotlk/src/server/game/Scripting/ScriptDefines/PlayerScript.h`
- Modify: `azerothcore-wotlk/src/server/game/Scripting/ScriptDefines/PlayerScript.cpp`
- Modify: `azerothcore-wotlk/src/server/game/Scripting/ScriptMgr.h`
- Modify: `azerothcore-wotlk/src/server/game/Entities/Creature/Trainer.cpp`

**Interfaces:**
- Produces: `bool ScriptMgr::OnPlayerCanTrainerTeachSpell(Player* player, uint32 spellId)` — returns `true` to allow the vanilla teach (module's own script returns `true` when disabled or already granted), `false` to block it. Default (no script overrides it) is `true`, matching every other `OnPlayerCan*` hook's fail-open default.
- Consumes: nothing from Task 1 directly (that's consumed in Task 4's script, not here).

This is a manually-verified core patch, per the Global Constraints — no automated test for this task; verification happens via Task 8's manual checklist once the whole chain is wired end to end.

- [ ] **Step 1: Add the hook enum value**

In `PlayerScript.h`, find `PLAYERHOOK_CAN_USE_ITEM,` (around line 163) and add immediately after it:

```cpp
    PLAYERHOOK_CAN_TRAINER_TEACH_SPELL,
```

- [ ] **Step 2: Add the virtual method with a fail-open default**

In `PlayerScript.h`, find `[[nodiscard]] virtual bool OnPlayerCanUseItem(...)` (around line 586) and add immediately after it:

```cpp
    [[nodiscard]] virtual bool OnPlayerCanTrainerTeachSpell(Player* /*player*/, uint32 /*spellId*/) { return true; }
```

- [ ] **Step 3: Add the ScriptMgr dispatch**

In `ScriptMgr.h`, find `bool OnPlayerCanUseItem(Player* player, ItemTemplate const* proto, InventoryResult& result);` (around line 426) and add immediately after it:

```cpp
    bool OnPlayerCanTrainerTeachSpell(Player* player, uint32 spellId);
```

In `PlayerScript.cpp`, find the `ScriptMgr::OnPlayerCanUseItem` definition (around line 700) and add immediately after its closing brace:

```cpp
bool ScriptMgr::OnPlayerCanTrainerTeachSpell(Player* player, uint32 spellId)
{
    CALL_ENABLED_BOOLEAN_HOOKS(PlayerScript, PLAYERHOOK_CAN_TRAINER_TEACH_SPELL, !script->OnPlayerCanTrainerTeachSpell(player, spellId));
    return true;
}
```

- [ ] **Step 4: Call the hook from `Trainer::TeachSpell`, before any gold is charged**

In `Trainer.cpp`, `TeachSpell` currently reads (lines 98-106):

```cpp
        float reputationDiscount = player->GetReputationPriceDiscount(npc);
        int32 moneyCost = int32(trainerSpell->MoneyCost * reputationDiscount);
        if (!player->HasEnoughMoney(moneyCost))
        {
            SendTeachFailure(npc, player, spellId, FailReason::NotEnoughMoney);
            return;
        }

        player->ModifyMoney(-moneyCost);
```

Insert the new check between the money-sufficiency check and `ModifyMoney`:

```cpp
        float reputationDiscount = player->GetReputationPriceDiscount(npc);
        int32 moneyCost = int32(trainerSpell->MoneyCost * reputationDiscount);
        if (!player->HasEnoughMoney(moneyCost))
        {
            SendTeachFailure(npc, player, spellId, FailReason::NotEnoughMoney);
            return;
        }

        if (!sScriptMgr->OnPlayerCanTrainerTeachSpell(player, spellId))
        {
            SendTeachFailure(npc, player, spellId, FailReason::Unavailable);
            return;
        }

        player->ModifyMoney(-moneyCost);
```

`Trainer.cpp` needs `#include "ScriptMgr.h"` added to its include block (currently: `Trainer.h`, `Creature.h`, `NPCPackets.h`, `Player.h`, `SpellInfo.h`, `SpellMgr.h` — add `ScriptMgr.h` alongside them, alphabetically between `Player.h` and `SpellInfo.h`).

- [ ] **Step 5: Build core to confirm it compiles**

Per `.agents/docs/build.md`, build the `worldserver` target (or whatever minimal target compiles `Trainer.cpp`/`ScriptMgr`/`PlayerScript.cpp`). This is a core change — do not skip the build check for this step even though the module's own convention is normally build-light; a core `.h` enum/vtable change that fails to compile breaks everything downstream.

- [ ] **Step 6: Commit**

```bash
git add src/server/game/Scripting/ScriptDefines/PlayerScript.h src/server/game/Scripting/ScriptDefines/PlayerScript.cpp src/server/game/Scripting/ScriptMgr.h src/server/game/Entities/Creature/Trainer.cpp
git commit -m "feat(core): add OnPlayerCanTrainerTeachSpell hook, called before Trainer::TeachSpell charges gold"
```

(This commit lands in the `azerothcore-wotlk` repo, not the `archipelago_wow` module — separate worktree/branch from Tasks 1, 3-8.)

---

### Task 3: `ArchipelagoTrainerPurchaseScript` — send the check, block the teach

**Files:**
- Create: `archipelago_wow/src/ArchipelagoTrainerPurchaseScript.cpp`
- Modify: `archipelago_wow/src/ArchipelagoTrainerSpellsContentTable.h` (generated file — hand-edit only the specific map this step adds a lookup for is wrong; instead, this step ADDS a new hand-written helper in the new `.cpp`, and Task 5 regenerates the real compiled map it reads — for now, reference `ArchipelagoTRAINER_SPELLSContent::SPELL_ID_TO_LOCATION_ID`, which already exists and already has every gated spell_id, so no table changes are needed in this task)
- Modify: `archipelago_wow/src/archipelago_wow.cmake` (or wherever `.cpp` files are registered for compilation — check this module's real build file for the pattern every other `Archipelago*Script.cpp` follows, e.g. `ArchipelagoLearnSpellScript.cpp`'s own entry, and add the new file the same way)
- Modify: wherever `AddArchipelagoLearnSpellScripts()`-style registration functions are called at module load (search for the call site of `AddArchipelagoLearnSpellScripts()` — likely a central `AddSC_archipelago_wow`-style loader — and add the equivalent `AddArchipelagoTrainerPurchaseScripts()` call next to it)

**Interfaces:**
- Consumes: `Archipelago::Gating::ShouldBlockTrainerTeach` (Task 1), `ArchipelagoTRAINER_SPELLSContent::SPELL_ID_TO_LOCATION_ID` (existing, unchanged by this task), `sArchipelagoRealmState->HasSentLocationCheck(uint64_t)`/`RecordLocationCheckAttribution(uint64_t, uint32_t)` (existing, `ArchipelagoRealmState.h`), `sArchipelagoMgr->SendLocationChecks(std::vector<int64_t> const&)` (existing, `ArchipelagoManager.h` — already internally calls `RecordLocationCheckSent`, confirmed via `ArchipelagoManager.cpp:28-34`), `sArchipelagoRealmState->IsEnabled()`.
- Produces: `void AddArchipelagoTrainerPurchaseScripts()`, called once at module load.

No automated test for this task (Player/WorldSession-touching PlayerScript, per Global Constraints) — manual verification is Task 8.

- [ ] **Step 1: Write the script, following `ArchipelagoLootSlotScript.cpp`'s exact dedup idiom**

```cpp
// azerothcore-wotlk/modules/archipelago_wow/src/ArchipelagoTrainerPurchaseScript.cpp
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
```

`player->HasSpell(spellId)` at the point this hook runs can only be reached while `Trainer::CanTeachSpell` already returned `Available` (never `Known`) — see `Trainer.cpp:135-137` — so `alreadyGranted` is always `false` in practice today; it's kept as a real, checked condition (not assumed) for the same "never silently assume, always check" discipline `_is_spell_safe_to_grant_directly`'s own docstring establishes elsewhere in this family.

- [ ] **Step 2: Register the new `.cpp` and its loader call**

Find `ArchipelagoLearnSpellScript.cpp`'s entry in the module's CMake/source list and add `ArchipelagoTrainerPurchaseScript.cpp` immediately after it, alphabetically consistent with the existing list's ordering.

Find the call site of `AddArchipelagoLearnSpellScripts();` (the module's central script-loader function — grep `AddArchipelagoLearnSpellScripts` across `archipelago_wow/src/` to find it) and add `AddArchipelagoTrainerPurchaseScripts();` on the next line.

- [ ] **Step 3: Build to confirm it compiles**

Build the module per `.agents/docs/build.md`.

- [ ] **Step 4: Commit**

```bash
git add archipelago_wow/src/ArchipelagoTrainerPurchaseScript.cpp archipelago_wow/src/archipelago_wow.cmake <the loader file>
git commit -m "feat(wow): add ArchipelagoTrainerPurchaseScript, decoupling the trainer_spells check from OnPlayerLearnSpell"
```

---

### Task 4: Rewrite the extractor's trigger kind (TDD, Python)

**Files:**
- Modify: `archipelago_wow/tools/extract_trainer_spells.py`
- Modify: `archipelago_wow/tools/test_extract_trainer_spells.py`
- Modify: `archipelago_wow/tools/generate_content.py` (wherever the `trainer_spells` family's `FamilySchema` declares its valid `trigger.kind` values — search this file for `"learn_spell"` and the family's schema block; add `"trainer_purchase_attempt"` as a valid kind for this family, and remove `"learn_spell"` from its trigger kinds only if this file scopes valid kinds per-family — if `"learn_spell"` is a trigger kind shared with other families, do not remove it globally, only stop `trainer_spells` from emitting it)

**Interfaces:**
- Produces: `extract()`'s returned `locations[i]["trigger"]` now has `"kind": "trainer_purchase_attempt"` instead of `"kind": "learn_spell"`, same `spell_id`/`min_level` fields unchanged.

- [ ] **Step 1: Write the failing test**

In `test_extract_trainer_spells.py`, change `TestExtract.test_extracts_one_location_per_distinct_spell_id`'s assertion (currently implicit — the trigger kind was never asserted before). Add an explicit assertion:

```python
    @patch("extract_trainer_spells._query_consumable_items")
    @patch("extract_trainer_spells.parse_spell_names")
    @patch("extract_trainer_spells._load_trainer_expansions")
    @patch("extract_trainer_spells._load_recipe_spell_ids")
    @patch("extract_trainer_spells.load_exclusion_rules")
    @patch("extract_trainer_spells.run_query")
    def test_trigger_kind_is_trainer_purchase_attempt_not_learn_spell(
        self, mock_run_query, mock_load_rules, mock_recipe_ids, mock_expansions, mock_names, mock_consumables
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_recipe_ids.return_value = frozenset()
        mock_expansions.return_value = {1: "vanilla"}
        mock_names.return_value = {72: "Shield Bash"}
        mock_run_query.return_value = [("72", "1", "1", "12")]
        mock_consumables.return_value = self._CONSUMABLE_FIXTURE
        result = extract()
        self.assertEqual(result["locations"][0]["trigger"]["kind"], "trainer_purchase_attempt")
```

- [ ] **Step 2: Run test to verify it fails**

Run: `python -m pytest archipelago_wow/tools/test_extract_trainer_spells.py -k trigger_kind_is_trainer_purchase_attempt -v`
Expected: FAIL — `AssertionError: 'learn_spell' != 'trainer_purchase_attempt'`.

- [ ] **Step 3: Change the trigger kind**

In `extract_trainer_spells.py`'s `extract()`, change:

```python
            "trigger": {
                "kind": "learn_spell", "spell_id": spell_id,
                "min_level": info["req_level"],
            },
```

to:

```python
            "trigger": {
                "kind": "trainer_purchase_attempt", "spell_id": spell_id,
                "min_level": info["req_level"],
            },
```

- [ ] **Step 4: Update `generate_content.py`'s FamilySchema**

Read the `trainer_spells` family's `FamilySchema` declaration in `generate_content.py` (search for `"trainer_spells"` — it will list `valid_trigger_kinds` alongside `valid_delivery_kinds`). Add `"trainer_purchase_attempt"` to `valid_trigger_kinds` for this family. Do not remove `"learn_spell"` from wherever it's declared as a valid kind for the `recipes` family (a different family, unaffected by this plan) if the two share a `valid_trigger_kinds` set — only `trainer_spells`'s own set changes.

- [ ] **Step 5: Run test to verify it passes**

Run: `python -m pytest archipelago_wow/tools/test_extract_trainer_spells.py -v`
Expected: all PASS, including the new test and every pre-existing one (none of them asserted the old `"learn_spell"` string literal, per the file already read in full — only `trigger["spell_id"]`/`trigger["min_level"]` are asserted elsewhere, so this change doesn't break the existing suite).

- [ ] **Step 6: Commit**

```bash
git add archipelago_wow/tools/extract_trainer_spells.py archipelago_wow/tools/test_extract_trainer_spells.py archipelago_wow/tools/generate_content.py
git commit -m "feat(wow): trainer_spells locations trigger on trainer_purchase_attempt, not learn_spell"
```

---

### Task 5: `ArchipelagoLearnSpellScript` no longer needs the trainer_spells map

**Files:**
- Modify: `archipelago_wow/src/ArchipelagoLearnSpellScript.cpp`

**Interfaces:**
- Consumes: nothing new.
- Produces: `CombinedSpellIdToLocationId` now only merges `ArchipelagoRECIPESContent::SPELL_ID_TO_LOCATION_ID` — `ArchipelagoTRAINER_SPELLSContent::SPELL_ID_TO_LOCATION_ID` is no longer merged in here (Task 3's new script owns sending trainer_spells' checks now; leaving the old merge in place would make a trainer_spells check fire a SECOND time the moment the corresponding spell is actually learned via Task 6's progressive-item grant, since `learnSpell()` still unconditionally fires `OnPlayerLearnSpell` for that grant too — this is the exact re-entrancy hazard the spec's §1 finding warned about, and removing this merge is what actually closes it).

- [ ] **Step 1: Remove the trainer_spells merge**

Change:

```cpp
    std::unordered_map<uint32_t, int64_t> BuildCombinedSpellIdToLocationId()
    {
        std::unordered_map<uint32_t, int64_t> result;
        for (auto const& row : ArchipelagoRECIPESContent::SPELL_ID_TO_LOCATION_ID)
            result.emplace(row.first, row.second);
        for (auto const& row : ArchipelagoTRAINER_SPELLSContent::SPELL_ID_TO_LOCATION_ID)
            result.emplace(row.first, row.second);
        return result;
    }
```

to:

```cpp
    std::unordered_map<uint32_t, int64_t> BuildCombinedSpellIdToLocationId()
    {
        // trainer_spells no longer belongs here (M-next): that family's
        // location now fires from ArchipelagoTrainerPurchaseScript's own
        // OnPlayerCanTrainerTeachSpell hook, BEFORE the vanilla learn is
        // ever allowed to happen -- merging its map back in here would
        // make the same check fire a second time the moment the matching
        // Progressive item's grant calls learnSpell(), since that call
        // fires this same OnPlayerLearnSpell hook too (Player.cpp:3426).
        std::unordered_map<uint32_t, int64_t> result;
        for (auto const& row : ArchipelagoRECIPESContent::SPELL_ID_TO_LOCATION_ID)
            result.emplace(row.first, row.second);
        return result;
    }
```

Remove the now-unused `#include "ArchipelagoTrainerSpellsContentTable.h"` from this file only if nothing else in it references that header (check before removing).

- [ ] **Step 2: Build to confirm it compiles**

Build the module.

- [ ] **Step 3: Commit**

```bash
git add archipelago_wow/src/ArchipelagoLearnSpellScript.cpp
git commit -m "fix(wow): stop double-firing trainer_spells location checks via OnPlayerLearnSpell"
```

---

### Task 6: Group trainer-spell ranks into progressive items (TDD, Python)

**Files:**
- Modify: `archipelago_wow/tools/extract_trainer_spells.py`
- Modify: `archipelago_wow/tools/test_extract_trainer_spells.py`

**Interfaces:**
- Produces: `extract()`'s `items` list now has one entry per **chain** (keyed by `first_spell_id`), not one per rank. Each chain item's shape:
  ```python
  {
      "name": f"Progressive {first_spell_name}",
      "item_id": _ITEM_ID_BASE + first_spell_id,
      "delivery": {"kind": "learn_next_chain_rank", "spell_ids": [rank1_id, rank2_id, ...]},
  }
  ```
  A single-rank spell (not present in `spell_ranks` at all) keeps today's shape exactly: `"delivery": {"kind": "mail", "wow_item_entry": ...}` (per spec requirement "Single-Rank Spells: Spells with no higher ranks remain standalone AP items" — these are NOT converted to `learn_next_chain_rank` with a length-1 list; only real multi-rank chains are).

- [ ] **Step 1: Write the failing test for chain grouping**

```python
    @patch("extract_trainer_spells._load_spell_ranks")
    @patch("extract_trainer_spells._query_consumable_items")
    @patch("extract_trainer_spells.parse_spell_names")
    @patch("extract_trainer_spells._load_trainer_expansions")
    @patch("extract_trainer_spells._load_recipe_spell_ids")
    @patch("extract_trainer_spells.load_exclusion_rules")
    @patch("extract_trainer_spells.run_query")
    def test_multi_rank_chain_becomes_one_progressive_item(
        self, mock_run_query, mock_load_rules, mock_recipe_ids, mock_expansions, mock_names,
        mock_consumables, mock_spell_ranks,
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_recipe_ids.return_value = frozenset()
        mock_expansions.return_value = {1: "vanilla"}
        mock_names.return_value = {116: "Frostbolt", 205: "Frostbolt"}
        mock_run_query.return_value = [
            ("116", "8", "1", "4"),
            ("205", "8", "1", "10"),
        ]
        mock_consumables.return_value = self._CONSUMABLE_FIXTURE
        # spell_id -> (first_spell_id, rank); rank 1 is 116, rank 2 is 205
        mock_spell_ranks.return_value = {116: (116, 1), 205: (116, 2)}
        result = extract()
        self.assertEqual(len(result["locations"]), 2)  # one location per rank, unchanged
        self.assertEqual(len(result["items"]), 1)       # one progressive item for the whole chain
        self.assertEqual(result["items"][0]["name"], "Progressive Frostbolt")
        self.assertEqual(result["items"][0]["delivery"]["kind"], "learn_next_chain_rank")
        self.assertEqual(result["items"][0]["delivery"]["spell_ids"], [116, 205])

    @patch("extract_trainer_spells._load_spell_ranks")
    @patch("extract_trainer_spells._query_consumable_items")
    @patch("extract_trainer_spells.parse_spell_names")
    @patch("extract_trainer_spells._load_trainer_expansions")
    @patch("extract_trainer_spells._load_recipe_spell_ids")
    @patch("extract_trainer_spells.load_exclusion_rules")
    @patch("extract_trainer_spells.run_query")
    def test_single_rank_spell_keeps_standalone_mail_item(
        self, mock_run_query, mock_load_rules, mock_recipe_ids, mock_expansions, mock_names,
        mock_consumables, mock_spell_ranks,
    ) -> None:
        mock_load_rules.return_value = {"name_denylist": []}
        mock_recipe_ids.return_value = frozenset()
        mock_expansions.return_value = {1: "vanilla"}
        mock_names.return_value = {72: "Shield Bash"}
        mock_run_query.return_value = [("72", "1", "1", "12")]
        mock_consumables.return_value = self._CONSUMABLE_FIXTURE
        mock_spell_ranks.return_value = {}  # 72 has no chain entry at all
        result = extract()
        self.assertEqual(result["items"][0]["delivery"]["kind"], "mail")
        self.assertIn(result["items"][0]["delivery"]["wow_item_entry"], {117, 2287})
```

- [ ] **Step 2: Run tests to verify they fail**

Run: `python -m pytest archipelago_wow/tools/test_extract_trainer_spells.py -k "chain or standalone" -v`
Expected: FAIL — `_load_spell_ranks` doesn't exist yet, and `extract()` doesn't group by chain yet.

- [ ] **Step 3: Add `_load_spell_ranks` and rewrite the items-building loop**

```python
def _load_spell_ranks() -> dict[int, tuple[int, int]]:
    """spell_id -> (first_spell_id, rank), from the real `spell_ranks` world-DB
    table (columns first_spell_id, spell_id, rank -- confirmed via
    SpellMgr::LoadSpellRanks, src/server/game/Spells/SpellMgr.cpp:1279-1385;
    NOT a table called `spell_chain`, which doesn't exist in this schema).
    A spell_id absent from this dict has no rank chain at all (a genuine
    single-rank spell) -- callers must treat absence as "standalone," not
    as an error."""
    rows = run_query("SELECT first_spell_id, spell_id, `rank` FROM spell_ranks")
    return {int(spell_id): (int(first_spell_id), int(rank)) for first_spell_id, spell_id, rank in rows}
```

Replace the items-building half of `extract()` (currently the single loop building both `locations` and `items` together) so chain grouping happens as a second pass after all locations are built:

```python
    spell_ranks = _load_spell_ranks()
    chains: dict[int, list[tuple[int, int]]] = {}  # first_spell_id -> [(rank, spell_id), ...]
    standalone_spell_ids: list[int] = []
    for spell_id in sorted(by_spell):
        if spell_id not in (name_ok_spell_ids := {s for s in by_spell if spell_names.get(s) and not is_denylisted(spell_names[s], rules)}):
            continue
        if spell_id in spell_ranks:
            first_spell_id, rank = spell_ranks[spell_id]
            chains.setdefault(first_spell_id, []).append((rank, spell_id))
        else:
            standalone_spell_ids.append(spell_id)

    items = []
    for first_spell_id in sorted(chains):
        ordered = [spell_id for _rank, spell_id in sorted(chains[first_spell_id])]
        chain_name = spell_names.get(first_spell_id, spell_names.get(ordered[0], ""))
        items.append({
            "name": f"Progressive {chain_name}",
            "item_id": _ITEM_ID_BASE + first_spell_id,
            "delivery": {"kind": "learn_next_chain_rank", "spell_ids": ordered},
        })
    for spell_id in standalone_spell_ids:
        wow_item_entry = _assign_consumable_item(consumable_candidates, len(items))
        items.append({
            "name": f"Trainer Spell Item: {spell_names[spell_id]} (#{spell_id})",
            "item_id": _ITEM_ID_BASE + spell_id,
            "delivery": {"kind": "mail", "wow_item_entry": wow_item_entry},
        })
```

Remove `_is_spell_safe_to_grant_directly` and its two tests (`TestIsSpellSafeToGrantDirectly`) — it existed to guard the old "maybe deliver via learn_spell" branch, which no longer exists (every chain now unconditionally uses `learn_next_chain_rank`, and that path can never race with a `learn_spell`-triggered location the way the old design could, precisely because Task 5 removed trainer_spells from the `learn_spell`-driven trigger path entirely).

This rewrite folds into the existing `locations`-building loop above it in the real file rather than being a fully separate pass — reconcile the two loops into one coherent function body when implementing (the split shown here is for readability in this plan, not a literal two-loop instruction).

- [ ] **Step 4: Run tests to verify they pass**

Run: `python -m pytest archipelago_wow/tools/test_extract_trainer_spells.py -v`
Expected: all PASS. Fix any fallout in the untouched tests from the `TestIsSpellSafeToGrantDirectly`/`_is_spell_safe_to_grant_directly` removal (delete those two test methods along with the source function, per Step 3).

- [ ] **Step 5: Commit**

```bash
git add archipelago_wow/tools/extract_trainer_spells.py archipelago_wow/tools/test_extract_trainer_spells.py
git commit -m "feat(wow): group trainer spell ranks into one Progressive item per chain"
```

---

### Task 7: Wire `learn_next_chain_rank` delivery through `generate_content.py` and the C++ dispatch

**Files:**
- Modify: `archipelago_wow/tools/generate_content.py` (add `learn_next_chain_rank` as a valid `delivery.kind` for `trainer_spells`, and its C++ emission — mirror however `learn_spell`/`ApItemIdToSpellId` is currently emitted, described in this file's own comment already read in this conversation: "valid_delivery_kinds... additionally forces ApItemIdToSpellId to be emitted... whenever learn_spell is a kind this family is schema-eligible for." Read that emission function in full before changing it — it must now emit `ApItemIdToChainSpellIds: std::unordered_map<uint32_t, std::vector<uint32_t>>` for `learn_next_chain_rank` rows instead of a flat `uint32_t -> uint32_t` map)
- Modify: `archipelago_wow/src/ArchipelagoPlayerScript.cpp` (the existing dead dispatch block at the `ApItemIdToSpellId`/`GrantOrQueue` call site)

**Interfaces:**
- Consumes: `ArchipelagoTRAINER_SPELLSContent::ApItemIdToChainSpellIds` (new, generated), `sArchipelagoRealmState->GetFlagTier(std::string const&)`/`SetFlagTier(std::string const&, uint32_t)` (existing).
- Produces: receiving a "Progressive `<X>`" item grants exactly the next un-granted rank in its chain, realm-wide-tracked (matching this realm's existing "one realm = one AP slot" model, same mechanism `GetLevelCapCopiesReceived`/`GrantLevelCapCopy` already use).

- [ ] **Step 1: Read `generate_content.py`'s real `learn_spell`/`ApItemIdToSpellId` emission in full**

This was partially read in this conversation (the docstring at generate_content.py:1930-1946) but not the actual emission function body — read it now before writing the replacement, so the new map's emission follows the exact same raw-constexpr-array-plus-runtime-builder pattern this file's own comment says is required past the ~2000-row stack-overflow threshold (trainer_spells has ~1,966 rows).

- [ ] **Step 2: Change the schema and emission for `trainer_spells`**

Add `"learn_next_chain_rank"` to `trainer_spells`'s `valid_delivery_kinds` in its `FamilySchema`. Change the conditional emission this family triggers (currently keyed on `"learn_spell" in valid_delivery_kinds`) to instead key on `"learn_next_chain_rank" in valid_delivery_kinds`, and change what it emits from a flat pair-array (`{item_id, spell_id}`) to a grouped one:

```python
inline constexpr std::pair<uint32_t, std::initializer_list<uint32_t>> AP_ITEM_ID_TO_CHAIN_SPELL_IDS_RAW[] = {
    {7500116, {116, 205, ...}},
    ...
};
```

with the runtime builder populating `std::unordered_map<uint32_t, std::vector<uint32_t>> ApItemIdToChainSpellIds` from it, following the exact same "raw array + one-time runtime builder into a `static const` map" shape this file already uses for every other large compiled table (e.g. `SPELL_ID_TO_LOCATION_ID` itself, visible in `ArchipelagoTrainerSpellsContentTable.h`'s own real structure).

- [ ] **Step 3: Rewrite the C++ dispatch block**

In `ArchipelagoPlayerScript.cpp`, replace the existing block (lines ~380-391, shown in full earlier in this conversation):

```cpp
        auto trainerSpellSpellIt = ArchipelagoTRAINER_SPELLSContent::ApItemIdToSpellId.find(received.item);
        if (trainerSpellSpellIt != ArchipelagoTRAINER_SPELLSContent::ApItemIdToSpellId.end())
        {
            ObjectGuid receiverGuid = sCharacterCache->GetCharacterGuidByName(deliveryCharacter);
            if (!receiverGuid.IsEmpty())
            {
                Player* onlineReceiver = ObjectAccessor::FindPlayerByLowGUID(receiverGuid.GetCounter());
                Archipelago::SpellGrant::GrantOrQueue(onlineReceiver, receiverGuid.GetCounter(), trainerSpellSpellIt->second, trans);
            }
            highestSeen = std::max(highestSeen, received.index);
            continue;
        }
```

with:

```cpp
        // Progressive trainer-spell chain items (M-next): each chain's
        // realm-wide "how many ranks granted so far" tier lives in the
        // existing generic flag store under a per-chain key, same
        // mechanism GetLevelCapCopiesReceived/GrantLevelCapCopy already
        // use for Progressive Level Cap -- consistent with this realm's
        // "one realm = one AP slot" model (ArchipelagoRealmState.h),
        // which already collapses every delivery target to the single
        // configured deliveryCharacter regardless of which real
        // character eventually casts the spell.
        auto trainerChainIt = ArchipelagoTRAINER_SPELLSContent::ApItemIdToChainSpellIds.find(received.item);
        if (trainerChainIt != ArchipelagoTRAINER_SPELLSContent::ApItemIdToChainSpellIds.end())
        {
            std::string flagKey = "trainer_chain_rank_" + std::to_string(received.item);
            uint32_t tier = sArchipelagoRealmState->GetFlagTier(flagKey);
            std::vector<uint32_t> const& ranks = trainerChainIt->second;
            if (tier < ranks.size())
            {
                ObjectGuid receiverGuid = sCharacterCache->GetCharacterGuidByName(deliveryCharacter);
                if (!receiverGuid.IsEmpty())
                {
                    Player* onlineReceiver = ObjectAccessor::FindPlayerByLowGUID(receiverGuid.GetCounter());
                    Archipelago::SpellGrant::GrantOrQueue(onlineReceiver, receiverGuid.GetCounter(), ranks[tier], trans);
                }
                sArchipelagoRealmState->SetFlagTier(flagKey, tier + 1);
            }
            else
            {
                LOG_ERROR("module.archipelago_wow", "Archipelago: received Progressive chain item {} but all {} ranks are already granted", received.item, ranks.size());
            }
            highestSeen = std::max(highestSeen, received.index);
            continue;
        }
```

The `else` branch is a defensive log, not expected to ever fire against real data: the apworld (Deliverable 2 of this spec, or a follow-up task) must pool exactly `len(spell_ids)` copies of each chain's item, mirroring `GATHERING_SKILL_PROGRESSION_ITEMS`'s own `tier_count`-bounded pooling (`Archipelago/worlds/wow/items.py:118-132`) — over-receipt should be structurally impossible, not silently tolerated.

- [ ] **Step 4: Build to confirm it compiles**

Build the module.

- [ ] **Step 5: Commit**

```bash
git add archipelago_wow/tools/generate_content.py archipelago_wow/src/ArchipelagoPlayerScript.cpp
git commit -m "feat(wow): dispatch Progressive trainer-spell chain items through realm-wide tier tracking"
```

---

### Task 8: Regenerate content, add the manual verification checklist

**Files:**
- Regenerate: `archipelago_wow/content/trainer_spells.yaml` (run `python tools/extract_trainer_spells.py`)
- Regenerate: `archipelago_wow/src/ArchipelagoTrainerSpellsContentTable.h` (run `python tools/generate_content.py content/trainer_spells.yaml`, per that file's own header comment)
- Create: `archipelago_wow/docs/testing/m-next-trainersanity-progressive-items-manual-checklist.md` (follow the real naming convention already used by `m4.11.5.6-check-leaderboard-manual-checklist.md` et al. — replace `m-next` with whatever this milestone's real number turns out to be at implementation time)

**Interfaces:** none new — this task only regenerates derived artifacts and documents manual verification.

- [ ] **Step 1: Regenerate**

```bash
cd archipelago_wow
python tools/extract_trainer_spells.py
python tools/generate_content.py content/trainer_spells.yaml
```

- [ ] **Step 2: Diff-review the regenerated files**

Confirm `content/trainer_spells.yaml`'s `locations[].trigger.kind` is now `trainer_purchase_attempt` everywhere, and `items` has fewer entries than before (one per chain instead of one per rank, for every multi-rank spell). Confirm `ArchipelagoTrainerSpellsContentTable.h` compiles (rebuild the module).

- [ ] **Step 3: Write the manual verification checklist**

```markdown
# Trainersanity Progressive Items — Manual Verification Checklist

Prerequisite: a live worldserver with this module built, connected to a real AP session with at least one multi-rank class spell (e.g. Frostbolt) in the item pool.

- [ ] Visit a class trainer for a spell you're eligible to learn (level/skill/prior-rank requirements met) but have not received via AP yet. Click to purchase it.
  - Expected: gold is NOT deducted, the "you have learned" success sound/visual do NOT play, and you see the "this technique lies elsewhere in the multiworld" chat message.
- [ ] Confirm the AP client shows exactly one "location checked" event for that trainer visit, and does not show a second one later when the corresponding item is actually received.
- [ ] Receive the "Progressive `<Spell>`" item for that chain from the multiworld (via `.ap` test-send or a real generation).
  - Expected: you immediately know rank 1 of that spell (or the next un-granted rank, if some ranks were already granted), with no trainer visit required.
- [ ] Receive a second copy of the same "Progressive `<Spell>`" item.
  - Expected: you now know rank 2.
- [ ] Return to the trainer after already knowing a rank via AP.
  - Expected: the trainer UI shows that rank as already known (grayed out / "Known"), matching vanilla behavior — this path never re-reaches the new hook (`Trainer::CanTeachSpell` already returns `Known` before `OnPlayerCanTrainerTeachSpell` is ever called).
- [ ] Log out before an AP item grant is applied, receive the item while offline, log back in.
  - Expected: the spell is granted on login (via `APSpellGrant::ApplyPendingGrants`), same as every other offline-queued grant in this module.
```

- [ ] **Step 4: Commit**

```bash
git add archipelago_wow/content/trainer_spells.yaml archipelago_wow/src/ArchipelagoTrainerSpellsContentTable.h archipelago_wow/docs/testing/m-next-trainersanity-progressive-items-manual-checklist.md
git commit -m "chore(wow): regenerate trainer_spells content tables, add manual verification checklist"
```

---

## Self-Review

**Spec coverage:** §1 Progressive Items (Tasks 6-7) ✓. §2 Intercepting & Triggering, trainer purchase interception + decoupled trigger (Tasks 2-5) ✓. §2 "Gold & Requirements" (Task 2 Step 4: zero gold charged on block, resolved explicitly) ✓. §3 Bypass level/class restrictions (verified already-free in Global Constraints, no new code needed — correctly NOT a task) ✓. §3 Offline queueing (verified already-generic in Global Constraints, reused as-is in Task 7 — correctly NOT a task) ✓. §4 Global item pool placement / cross-class logic rules — **out of scope for this plan**, covered by the companion plan `2026-09-08-trainersanity-cross-class-pooling.md` per the spec's §2 dependency split.

**Placeholder scan:** no TBD/TODO, no "add appropriate error handling" — Task 7's `else` branch is a real, specific log statement, not a placeholder. No "similar to Task N" shortcuts — Task 6's rewrite is written out in full rather than referencing Task 4's pattern.

**Type consistency:** `ShouldBlockTrainerTeach(bool, bool)` (Task 1) is called with the same two-bool signature in Task 3. `ApItemIdToChainSpellIds: unordered_map<uint32_t, vector<uint32_t>>` (Task 7 Step 2) matches its consumption in Task 7 Step 3 exactly. `_load_spell_ranks() -> dict[int, tuple[int, int]]` (Task 6) matches the mock shape used in Task 6's own tests (`{116: (116, 1), 205: (116, 2)}`).
