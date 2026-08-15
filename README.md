# archipelago_wow

Archipelago multiworld client for a WoW 3.3.5a AzerothCore server. This is the
**Milestone 1 skeleton**: it builds as an AzerothCore module, loads, reads its
config, exposes a `.ap status` GM command, and performs a one-shot websocket
handshake against an Archipelago server. It does not yet exchange items or
locations, hold a persistent connection, or reconnect on failure -- that is
Milestone 2 scope.

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

## Deploy

The module ships a `.conf.dist` template at `conf/archipelago_wow.conf.dist`.
After building, AzerothCore copies it into the worldserver's config
directory as `configs/modules/archipelago_wow.conf.dist`. To activate it,
copy/rename it to drop the `.dist` suffix, then edit the values:

```
cd <worldserver bin dir>/configs/modules
cp archipelago_wow.conf.dist archipelago_wow.conf
```

Config keys: `Archipelago.Enabled`, `Archipelago.ServerAddress`,
`Archipelago.ServerPort`, `Archipelago.SlotName`, `Archipelago.Password`.

## Commands

- `.ap status` -- reports the current `Archipelago::ConnectionState` (not
  connected / connecting / handshake succeeded / server refused connection).

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
