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
python tools/generate_content.py content/quests.yaml \
  --py-out ../../../Archipelago/worlds/wow/content_data.py \
  --cpp-out src/ArchipelagoContentTable.h

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
