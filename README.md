# archipelago_wow

Archipelago multiworld client for a WoW 3.3.5a AzerothCore server. This is the
**Milestone 2** client: it builds as an AzerothCore module, loads, reads its
config, exposes a `.ap status` GM command, and maintains a **persistent**
connection to an Archipelago server -- reconnecting automatically with
exponential backoff if the connection drops or the initial connect fails. It
sends `LocationChecks` when a player completes one of a curated set of
Northshire/Goldshire quests, and delivers `ReceivedItems` as real mailed
in-game items to a configured delivery character, with restart-safe
deduplication.

## Connection behavior

- Supports both plain `ws://` and TLS `wss://` (`Archipelago.UseTLS`).
  **TLS certificate validation is intentionally not performed** in this
  milestone -- the client uses `ssl::verify_none`. This is a deliberate,
  documented simplification for M2, not an oversight; a future milestone can
  add proper certificate verification if/when it's needed.
- The connection is held open indefinitely. If it drops (server restart,
  network blip, AP server down at startup, etc.) the module reconnects
  automatically, backing off exponentially between
  `Archipelago.ReconnectMinSeconds` and `Archipelago.ReconnectMaxSeconds`;
  the backoff resets to the minimum after any period of being genuinely
  connected again.
- **Known gap:** a location check sent while the connection is down (during
  the reconnect backoff window, or while the AP server happens to be
  unreachable) is dropped and is **not** queued or resent once the
  connection comes back -- the Archipelago protocol has no server-side
  memory of checks the client never actually transmitted. This means a quest
  completed during an outage permanently never releases its item to
  whoever picked up that location. The drop is logged as an error so it's at
  least visible in the server log; building a durable, re-sent-on-reconnect
  checked-location set is out of scope for this milestone and deferred to a
  future one.

## Sending location checks

`ArchipelagoQuestScript` hooks `PLAYERHOOK_ON_PLAYER_COMPLETE_QUEST`. When the
completed quest is one of the curated Northshire/Goldshire starting quests
(mapped via a generated content table, see below), it sends the
corresponding AP location id as a `LocationChecks` packet.

## Receiving items

`ReceivedItems` sent by the AP server are queued by the io thread and drained
on the world thread every tick. Each item is resolved (via the same
generated content table) to a WoW item entry, created, and mailed to the
character named in `Archipelago.DeliveryCharacter` (from "Archipelago", via
the Postmaster). If that character is online, they get the normal in-game
new-mail notification immediately instead of only seeing it after a relog.

Delivery is deduplicated and restart-safe: the highest processed AP item
index is tracked both in memory and in the `archipelago_state` database
table (added by the `characters` DB migration in
`data/sql/updates/pending_db_characters/`, one row, `id = 1`), and bumped
only after the mail and the index update have been committed together in
the same transaction. A restart or reconnect will never re-mail an
already-delivered item. If `Item::CreateItem` fails for a resolved item, the
failure is logged (AP item id and WoW item entry) so there's a diagnostic
trail, but note that item is still marked processed -- it is not retried.

## Content tables

Locations and items are defined in YAML under `content/` (`quests.yaml`,
`core_loop.yaml`) and compiled into both the C++ header maps used by this
module and the Python apworld's data modules by
`tools/generate_content.py` -- see `tools/README.md` for the regeneration
workflow. Never hand-edit `src/Archipelago*ContentTable.h` or
`Archipelago/worlds/wow/*content_data.py`; edit the YAML and regenerate.
`tools/test_content_freshness.py` enforces this in CI.

## Build

From the `azerothcore-wotlk` checkout, configure and build as usual, with
`NOPCH` disabled (see the note below) and modules built statically:

```
cmake . -DNOPCH=0 -DMODULES=static -G "Visual Studio 17 2022" -A x64
cmake --build build --target worldserver --config RelWithDebInfo
```

> **Note:** use `-DNOPCH=0`, not `-DNOPCH=1` -- there is a pre-existing
> upstream bug in unforked AzerothCore's `NOPCH=1` path, unrelated to this
> module.

If you add or rename source files under `src/`, re-run `cmake .` in the
existing build directory before rebuilding, or the new files will not be
picked up (AzerothCore's module CMake globs `modules/*/src` at configure
time, not build time).

This module also adds a `characters` DB migration
(`data/sql/updates/pending_db_characters/`) that creates the
`archipelago_state` table used for delivery dedup; it's picked up by
AzerothCore's normal DB updater the next time `worldserver` starts against
that database.

## Deploy

The module ships a `.conf.dist` template at `conf/archipelago_wow.conf.dist`.
After building, AzerothCore copies it into the worldserver's config
directory as `configs/modules/archipelago_wow.conf.dist`. To activate it,
copy/rename it to drop the `.dist` suffix, then edit the values:

```
cd <worldserver bin dir>/configs/modules
cp archipelago_wow.conf.dist archipelago_wow.conf
```

Config keys:

- `Archipelago.Enabled` -- enable the client (default `0`).
- `Archipelago.ServerAddress` -- hostname or IP of the Archipelago server
  (default `"localhost"`).
- `Archipelago.ServerPort` -- port of the Archipelago server (default
  `38281`).
- `Archipelago.SlotName` -- the player slot name for this realm in the
  multiworld (default `""`).
- `Archipelago.Password` -- room password, if the Archipelago server
  requires one (default `""`).
- `Archipelago.DeliveryCharacter` -- character name that receives AP-granted
  items via mail (default `""`).
- `Archipelago.UseTLS` -- connect over `wss://` (TLS) instead of plain
  `ws://` (default `0`). See the note above on `ssl::verify_none`.
- `Archipelago.ReconnectMinSeconds` -- initial delay before retrying a
  dropped connection (default `2`; clamped to a minimum of `1` at runtime).
- `Archipelago.ReconnectMaxSeconds` -- maximum backoff delay between
  reconnect attempts (default `60`; clamped to at least
  `ReconnectMinSeconds` at runtime).

## Commands

- `.ap status` -- reports the current connection state:
  - `Archipelago: connected.` -- handshake complete, fully connected.
  - `Archipelago: connecting...` -- initial connect in progress (resolving,
    awaiting room info, or connected but pre-handshake).
  - `Archipelago: connection lost, reconnecting...` -- was connected,
    dropped, currently backing off before retrying.
  - `Archipelago: server refused the connection.` -- the AP server rejected
    the connection (e.g. bad slot/password).
  - `Archipelago: not connected.` -- disconnected and not currently
    attempting to connect (or module disabled).

## Testing

`test/` is a small standalone doctest project, independent of the main
AzerothCore build. Configure, build, and run it directly:

```
cmake -S test -B test/build -G "Visual Studio 17 2022" -A x64
cmake --build test/build --config Debug
test/build/Debug/archipelago_wow_tests.exe
```

`test/build/` is gitignored.

## Known limitation -- repo is not currently clonable by a second machine

This module repo (`archipelago-wow-module`, remote
`https://github.com/bobthe13th/archipelago-wow-module.git`) is nested as a
git submodule inside `azerothcore-wotlk`, which is itself a submodule of the
outer project repo. `azerothcore-wotlk` is deliberately left as an unforked
clone of upstream AzerothCore (no core files are ever modified) -- which
means the commits on the `azerothcore-wotlk` side that register this
module's submodule entry (`.gitmodules` addition, and the subsequent
pointer-bump commits each time this module's `main` branch advances) are
**local-only and can never be pushed** to the AzerothCore remote.

The practical consequence: a fresh `git clone --recursive` of the outer
project repo, by anyone else or by CI, will currently **fail to resolve the
`azerothcore-wotlk` submodule pointer**, because that commit only exists on
this one machine.

This is a known, structural tradeoff from the project's original
repo-scaffolding design, already discussed and accepted by the project
owner. It is not fixed here. Options for resolving it later, in no
particular order (the choice belongs to the project owner):

- **(a) Fork AzerothCore after all**, and push the `.gitmodules`/pointer-bump
  commits to that fork.
- **(b) Restructure this module as a top-level submodule of the outer
  project repo** instead of nesting it inside the AzerothCore checkout, with
  a small bootstrap script that symlinks or copies it into
  `azerothcore-wotlk/modules/` after clone -- the more common pattern for
  AzerothCore module projects.
- **(c) Accept the limitation for now**, and provide a documented bootstrap
  script that recreates the necessary local AzerothCore-side commit after a
  fresh clone.
