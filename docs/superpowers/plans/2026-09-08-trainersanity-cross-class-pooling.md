# Trainersanity Cross-Class Resource-Compatible Pooling Implementation Plan

> **For agentic workers:** REQUIRED SUB-SKILL: Use superpowers:subagent-driven-development (recommended) or superpowers:executing-plans to implement this plan task-by-task.

**Goal:** Implement Decision 2 (restrict cross-class pooling to resource-compatible classes) for the Progressive trainer-spell items introduced by the companion plan `2026-09-08-trainersanity-trigger-and-progressive-items.md`.

**Spec:** `modules/archipelago_wow/docs/design/trainersanity-redesign.md`

## This plan is not fully bite-sized yet — a third decision surfaced during grounding

Researching this deliverable found a real architectural conflict Decision 2's original framing didn't account for. Recording it here rather than picking a resolution unilaterally, since it changes what "restrict pooling" can even mean in this codebase.

**What was found:**

1. **No family in this apworld filters its item pool by the receiving character's class, anywhere, today.** Checked `rules.py` (no `tags["class"]`/per-class access-rule logic exists at all) and every `create_*_item_pool` function pattern in `items.py` (`create_gathering_skill_progression_item_pool` et al.) — none of them condition on class. This project's items already assume any pooled item might land on any class's character (e.g. Itemsanity places plate armor with no check that the delivery character can wear it). Introducing a first-ever class-aware pool filter for Trainersanity alone would be a new, unprecedented kind of restriction in this apworld, not an extension of an existing one.

2. **This realm's delivery model has no per-character-class routing to filter *for*.** `ArchipelagoRealmState`'s own header frames this whole project as "one realm = one AP slot" — `Archipelago.DeliveryCharacter` (or the account set, under `AllAccountsDelivery`/`FirstToClaim`) is a single, fixed, C++-worldserver.conf-configured target, decided independently of and after apworld generation. The apworld has no way to know, at generation time, which class(es) will actually receive its items. "Restrict pooling to resource-compatible classes" implicitly assumes the pool-builder can target a specific class's pool — that targeting doesn't exist in this project's architecture.

3. **Naively excluding Warrior/Rogue/Death Knight chains from the pool breaks location/item fill parity**, a real invariant this project enforces elsewhere (`count_gathering_skill_progression_items` exists specifically so `locations.py`'s sink-location count never drifts from what the pool actually contains). The companion plan's Task 6/7 still generates a `trainer_purchase_attempt` location for every rank of every class's spells, Warrior/Rogue/DK included — if their corresponding Progressive items are simply never pooled, those real locations still need *some* reward and would get filled with unrelated junk from the general pool, silently making those trainer visits never able to teach the ability through this system at all. That is a regression, not the intended fix.

4. **The resource-incompatibility claim itself needed a correction the original decision framing didn't have**: Warrior (Rage), Rogue (Energy), and Death Knight (Runic Power) are *pairwise* incompatible with each other, not just individually incompatible with the 7 mana classes — so "Warrior/Rogue/DK spells stay within those three" (one of the option's own words, per the earlier AskUserQuestion phrasing) is itself unsound; each of those three classes' spells can only ever be resource-safe for that *same* class, not for either of the other two. Only the 7 mana classes (Paladin/Hunter/Priest/Shaman/Mage/Warlock/Druid) form a genuinely mutually-compatible group.

**What this means:** Decision 2 needs to be re-posed as one of:

- **(a) Accept the pre-existing precedent**: don't build any new filtering at all. Every class's spell chain becomes a Progressive item exactly like every other family's items today, with the same "might land on a character that can't fully use it" property Itemsanity/every other family already has. Warrior/Rogue/DK chains are progressive-ified too (companion plan's Task 6/7, unmodified) — occasionally "wasted" on an incompatible receiving character, same as a cloth-class getting plate gear today. Zero new engineering.
- **(b) Build real per-character-class-aware delivery** (a new, first-ever mechanism: the apworld would need a new per-seed option declaring the delivery target's class, consumed by a new C++ dispatch check before granting) — a substantial feature in its own right, arguably bigger than the whole rest of this redesign, and would need its own spec.
- **(c) Keep Warrior/Rogue/Death Knight spell chains OUT of the `learn_next_chain_rank` progressive conversion entirely** (companion plan's Task 6 gets a class filter: only convert a chain to `learn_next_chain_rank` if every trainer class teaching it is one of the 7 mana classes; a Warrior/Rogue/DK chain keeps today's per-rank mail-shaped filler-item delivery, i.e. the location still exists and still sends a real check, it just never tries to be a "learn this spell" grant at all for those three classes specifically) — the only one of the three that adds zero new mechanism, doesn't touch delivery routing, and doesn't regress fill parity, at the cost of Warrior/Rogue/DK trainer spells never getting the "receive it as a real ability from the multiworld" treatment this whole redesign is for — they'd remain flavor-item-only forever, same as today.

**Recommendation: (c).** It's the only option that resolves the resource-mismatch risk with zero new architecture, doesn't touch the C++ delivery model, and fails safe (worse flavor for 3 classes, not broken/wasted grants). This needs your confirmation before task-by-task steps are written, since it's a real scope reduction from the original ask (cross-class casting was specifically requested for these classes too) — say the word and this plan gets finished the same way the companion plan was.

## What's ready regardless of that answer

One piece of this deliverable is correct under any of (a)/(b)/(c): the chain-name-to-eligible-classes data needs to exist somewhere for whichever choice is made, and it's cheap to build now.

### Task 1: Export which classes teach each chain, for later use by any of options (a)/(b)/(c)

**Files:**
- Modify: `archipelago_wow/tools/extract_trainer_spells.py`
- Modify: `archipelago_wow/tools/test_extract_trainer_spells.py`

**Interfaces:**
- Produces: each chain item (from the companion plan's Task 6) gains a `"tags": {"class": [...]}` block — the union of every rank-location's own `tags["class"]` in that chain (a chain's ranks can, in principle, be taught to different classes at different ranks in this DB's real data, though the common case is one class throughout) — mirroring how `content/trainer_spells.yaml` locations already carry `tags["class"]` today (seen in the very first entry read in this conversation: `'Trainer Spell: Blizzard (#10)'` tags `class: [mage]`).

- [ ] **Step 1: Write the failing test**

```python
    @patch("extract_trainer_spells._load_spell_ranks")
    @patch("extract_trainer_spells._query_consumable_items")
    @patch("extract_trainer_spells.parse_spell_names")
    @patch("extract_trainer_spells._load_trainer_expansions")
    @patch("extract_trainer_spells._load_recipe_spell_ids")
    @patch("extract_trainer_spells.load_exclusion_rules")
    @patch("extract_trainer_spells.run_query")
    def test_chain_item_tags_class_is_union_of_its_ranks(
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
        mock_spell_ranks.return_value = {116: (116, 1), 205: (116, 2)}
        result = extract()
        self.assertEqual(result["items"][0]["tags"]["class"], ["mage"])
```

- [ ] **Step 2: Run test to verify it fails**

Run: `python -m pytest archipelago_wow/tools/test_extract_trainer_spells.py -k chain_item_tags_class -v`
Expected: FAIL — `KeyError: 'tags'` (chain items don't have a `tags` key yet).

- [ ] **Step 3: Add the tags block to chain items**

In the chain-item-building loop added by the companion plan's Task 6, add a class-union step before constructing each chain item:

```python
    for first_spell_id in sorted(chains):
        ordered = [spell_id for _rank, spell_id in sorted(chains[first_spell_id])]
        chain_name = spell_names.get(first_spell_id, spell_names.get(ordered[0], ""))
        chain_classes: set[str] = set()
        for spell_id in ordered:
            chain_classes |= by_spell[spell_id]["classes"]
        items.append({
            "name": f"Progressive {chain_name}",
            "item_id": _ITEM_ID_BASE + first_spell_id,
            "delivery": {"kind": "learn_next_chain_rank", "spell_ids": ordered},
            "tags": {"class": sorted(chain_classes)},
        })
```

(`by_spell[spell_id]["classes"]` is the same per-spell class set `extract()` already builds earlier in the function for each rank's own location tags — reused here, not recomputed.)

- [ ] **Step 4: Run test to verify it passes**

Run the same command as Step 2. Expected: PASS.

- [ ] **Step 5: Commit**

```bash
git add archipelago_wow/tools/extract_trainer_spells.py archipelago_wow/tools/test_extract_trainer_spells.py
git commit -m "feat(wow): tag each Progressive trainer-spell chain item with its teaching class(es)"
```

---

Once you confirm (a), (b), or (c) above, the remaining tasks (consuming this new `tags["class"]` data from the apworld's `trainer_spells_content_data.py`, and either building `create_trainer_spell_progression_item_pool`/`count_trainer_spell_progression_items` per the `create_gathering_skill_progression_item_pool` precedent, or adding the Task 6 filter for option (c)) will be written the same way as the companion plan — real files, real signatures, no placeholders.
