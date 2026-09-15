# Content-table compiler

`generate_content.py` compiles a YAML content-table family (`content/*.yaml`)
into both halves of this project's content tables: the C++ module's header
(`src/Archipelago*ContentTable.h`) and the Python apworld's data module
(`Archipelago/worlds/wow/*content_data.py`). See the project root's
`docs/wow-archipelago-design-spec.md` §4 for the design rationale (drift
between the two languages becomes structurally impossible, not something to
remember to check).

## Regenerating after a content-table edit

Edit the YAML under `content/`, never the generated `.h`/`.py` files
directly, then run:

```bash
python tools/generate_content.py content/core_loop.yaml \
  --py-out ../../../Archipelago/worlds/wow/core_loop_content_data.py \
  --cpp-out src/ArchipelagoCoreLoopContentTable.h
```

(paths above assume the standard sibling-repo layout used throughout this
project: `Archipelago/` and `azerothcore-wotlk/` as sibling directories.)

`tools/test_content_freshness.py` fails the test suite if a generated file
and its YAML source ever disagree -- run it after any content-table change,
before committing.

## Adding a new content family

See the schema documented at the top of `generate_content.py`. Add a new
`_emit_python_<family>`/`_emit_cpp_<family>` pair and register it in
`emit_python`/`emit_cpp`'s family dispatch. Optional location categories and
new `trigger`/`delivery` kinds (mob kills, achievements, etc.) are follow-on
work, not something this compiler's core needs to anticipate up front.

## Regenerating against a played-on realm

This module's own live-play interception mechanism (`src/APItemDisplay.cpp`) rewrites five
real world-DB columns at runtime, once a check on that row has actually been intercepted
during real play:

- `npc_vendor.item` (vendor-purchase interception)
- `quest_template`'s reward-item columns (quest-turn-in interception)
- `skinning_loot_template.Item` (skinning-loot interception)
- `disenchant_loot_template.Item` (disenchant-loot interception)

On a realm that has genuinely been played on, these columns no longer hold the real, original
item entry for any row whose check has already been claimed — they hold a synthesized
display-item entry instead. **Any extraction script's own SQL that reads one of these columns
directly (or joins `item_template` through one of them) will silently produce wrong data on
such a realm.** This already happened once (M4.11.5.5): `extract_vendor_stock.py`'s own base
row-selection query joins through `npc_vendor.item`, and this checkout's own dev realm had
been played on enough that only 3 of 37,753 rows still held a real item id — regenerating
`content/vendor_stock.yaml` at that point would have silently replaced real historical item
identities with synthesized garbage.

**The safe pattern**, already used by every extraction script's own real *tag*-dimension
queries in this project (e.g. `_load_vendor_expansions`/`_load_vendor_area_tags`/
`_load_vendor_types` in `extract_vendor_stock.py`): key any NEW query on the row's own real
*identity* column (`npc_vendor.entry`, `quest_template.ID`, a loot table's `Entry`) — never on
one of the five columns above. An identity-only query is immune to this corruption, since the
interception mechanism never rewrites identity columns, only reward/item columns.

**Before regenerating a file whose own base extraction reads one of the five columns above**
(confirmed real content, item identities, prices — not just tags), check whether the live
world DB has actually been played on. A quick, real check for `npc_vendor.item` specifically:
```bash
python3 -c "
import db_extract
total = db_extract.run_query('SELECT COUNT(*) FROM npc_vendor')
real = db_extract.run_query('SELECT COUNT(*) FROM npc_vendor WHERE item < 4000000')
print('total:', total[0][0], 'real:', real[0][0])
"
```
If `real` is meaningfully less than `total`, the live DB is corrupted for this purpose — do
not regenerate. Restore the affected table from AzerothCore's own clean base SQL data
(`data/sql/base/db_world/<table>.sql`) first, or use whichever family's own already-extracted
content file is still valid as a stand-in ground truth.
