// GENERATED FILE - do not edit by hand.
// Regenerate with: python modules/archipelago_wow/tools/generate_content.py content/collections.yaml

#pragma once

#include <cstdint>
#include <unordered_map>

namespace Archipelago::Collections
{
    // The real spell a mount/pet item teaches -> its own location id.
    // Consumed by the learn-spell hook (ArchipelagoCollectionScript.cpp).
    inline std::unordered_map<uint32_t, int64_t> const SpellIdToLocationId = {
        { 580, 780000 }, // Learn Mount: Horn of the Timber Wolf
        { 470, 780001 }, // Learn Mount: Black Stallion Bridle
        { 472, 780002 }, // Learn Mount: Pinto Bridle
        { 6648, 780003 }, // Learn Mount: Chestnut Mare Bridle
        { 458, 780004 }, // Learn Mount: Brown Horse Bridle
        { 6653, 780005 }, // Learn Mount: Horn of the Dire Wolf
        { 6654, 780006 }, // Learn Mount: Horn of the Brown Wolf
        { 6777, 780007 }, // Learn Mount: Gray Ram
        { 6899, 780008 }, // Learn Mount: Brown Ram
        { 6898, 780009 }, // Learn Mount: White Ram
        { 10873, 780010 }, // Learn Mount: Red Mechanostrider
        { 8395, 780011 }, // Learn Mount: Whistle of the Emerald Raptor
        { 10796, 780012 }, // Learn Mount: Whistle of the Turquoise Raptor
        { 10799, 780013 }, // Learn Mount: Whistle of the Violet Raptor
        { 10969, 780014 }, // Learn Mount: Blue Mechanostrider
        { 10793, 780015 }, // Learn Mount: Reins of the Striped Nightsaber
        { 8394, 780016 }, // Learn Mount: Reins of the Striped Frostsaber
        { 10789, 780017 }, // Learn Mount: Reins of the Spotted Frostsaber
        { 17229, 780018 }, // Learn Mount: Reins of the Winterspring Frostsaber
        { 17453, 780019 }, // Learn Mount: Green Mechanostrider
        { 17454, 780020 }, // Learn Mount: Unpainted Mechanostrider
        { 17462, 780021 }, // Learn Mount: Red Skeletal Horse
        { 17463, 780022 }, // Learn Mount: Blue Skeletal Horse
        { 17464, 780023 }, // Learn Mount: Brown Skeletal Horse
        { 17465, 780024 }, // Learn Mount: Green Skeletal Warhorse
        { 17481, 780025 }, // Learn Mount: Deathcharger's Reins
        { 18989, 780026 }, // Learn Mount: Gray Kodo
        { 18990, 780027 }, // Learn Mount: Brown Kodo
        { 23221, 780028 }, // Learn Mount: Reins of the Swift Frostsaber
        { 23219, 780029 }, // Learn Mount: Reins of the Swift Mistsaber
        { 23225, 780030 }, // Learn Mount: Swift Green Mechanostrider
        { 23223, 780031 }, // Learn Mount: Swift White Mechanostrider
        { 23222, 780032 }, // Learn Mount: Swift Yellow Mechanostrider
        { 23227, 780033 }, // Learn Mount: Swift Palomino
        { 23229, 780034 }, // Learn Mount: Swift Brown Steed
        { 23228, 780035 }, // Learn Mount: Swift White Steed
        { 23240, 780036 }, // Learn Mount: Swift White Ram
        { 23238, 780037 }, // Learn Mount: Swift Brown Ram
        { 23239, 780038 }, // Learn Mount: Swift Gray Ram
        { 23241, 780039 }, // Learn Mount: Swift Blue Raptor
        { 23242, 780040 }, // Learn Mount: Swift Olive Raptor
        { 23243, 780041 }, // Learn Mount: Swift Orange Raptor
        { 23246, 780042 }, // Learn Mount: Purple Skeletal Warhorse
        { 23247, 780043 }, // Learn Mount: Great White Kodo
        { 23249, 780044 }, // Learn Mount: Great Brown Kodo
        { 23248, 780045 }, // Learn Mount: Great Gray Kodo
        { 23250, 780046 }, // Learn Mount: Horn of the Swift Brown Wolf
        { 23251, 780047 }, // Learn Mount: Horn of the Swift Timber Wolf
        { 23252, 780048 }, // Learn Mount: Horn of the Swift Gray Wolf
        { 23338, 780049 }, // Learn Mount: Reins of the Swift Stormsaber
        { 23509, 780050 }, // Learn Mount: Horn of the Frostwolf Howler
        { 23510, 780051 }, // Learn Mount: Stormpike Battle Charger
        { 24242, 780052 }, // Learn Mount: Swift Razzashi Raptor
        { 24252, 780053 }, // Learn Mount: Swift Zulian Tiger
        { 26656, 780054 }, // Learn Mount: Black Qiraji Resonating Crystal
        { 25953, 780055 }, // Learn Mount: Blue Qiraji Resonating Crystal
        { 26054, 780056 }, // Learn Mount: Red Qiraji Resonating Crystal
        { 26056, 780057 }, // Learn Mount: Green Qiraji Resonating Crystal
        { 26055, 780058 }, // Learn Mount: Yellow Qiraji Resonating Crystal
        { 32235, 780059 }, // Learn Mount: Golden Gryphon
        { 32239, 780060 }, // Learn Mount: Ebon Gryphon
        { 32240, 780061 }, // Learn Mount: Snowy Gryphon
        { 32242, 780062 }, // Learn Mount: Swift Blue Gryphon
        { 32243, 780063 }, // Learn Mount: Tawny Wind Rider
        { 32244, 780064 }, // Learn Mount: Blue Wind Rider
        { 32245, 780065 }, // Learn Mount: Green Wind Rider
        { 32246, 780066 }, // Learn Mount: Swift Red Wind Rider
        { 32289, 780067 }, // Learn Mount: Swift Red Gryphon
        { 32290, 780068 }, // Learn Mount: Swift Green Gryphon
        { 32292, 780069 }, // Learn Mount: Swift Purple Gryphon
        { 32295, 780070 }, // Learn Mount: Swift Green Wind Rider
        { 32296, 780071 }, // Learn Mount: Swift Yellow Wind Rider
        { 32297, 780072 }, // Learn Mount: Swift Purple Wind Rider
        { 34406, 780073 }, // Learn Mount: Brown Elekk
        { 39316, 780074 }, // Learn Mount: Reins of the Dark Riding Talbuk
        { 34795, 780075 }, // Learn Mount: Red Hawkstrider
        { 33660, 780076 }, // Learn Mount: Swift Pink Hawkstrider
        { 34896, 780077 }, // Learn Mount: Reins of the Cobalt War Talbuk
        { 34897, 780078 }, // Learn Mount: Reins of the White War Talbuk
        { 34898, 780079 }, // Learn Mount: Reins of the Silver War Talbuk
        { 34899, 780080 }, // Learn Mount: Reins of the Tan War Talbuk
        { 35020, 780081 }, // Learn Mount: Blue Hawkstrider
        { 35022, 780082 }, // Learn Mount: Black Hawkstrider
        { 35018, 780083 }, // Learn Mount: Purple Hawkstrider
        { 35025, 780084 }, // Learn Mount: Swift Green Hawkstrider
        { 35027, 780085 }, // Learn Mount: Swift Purple Hawkstrider
        { 34790, 780086 }, // Learn Mount: Reins of the Dark War Talbuk
        { 22719, 780087 }, // Learn Mount: Black Battlestrider
        { 22718, 780088 }, // Learn Mount: Black War Kodo
        { 22720, 780089 }, // Learn Mount: Black War Ram
        { 22717, 780090 }, // Learn Mount: Black War Steed Bridle
        { 22724, 780091 }, // Learn Mount: Horn of the Black War Wolf
        { 22722, 780092 }, // Learn Mount: Red Skeletal Warhorse
        { 22723, 780093 }, // Learn Mount: Reins of the Black War Tiger
        { 22721, 780094 }, // Learn Mount: Whistle of the Black War Raptor
        { 35711, 780095 }, // Learn Mount: Purple Elekk
        { 35710, 780096 }, // Learn Mount: Gray Elekk
        { 35713, 780097 }, // Learn Mount: Great Blue Elekk
        { 35712, 780098 }, // Learn Mount: Great Green Elekk
        { 35714, 780099 }, // Learn Mount: Great Purple Elekk
        { 36702, 780100 }, // Learn Mount: Fiery Warhorse's Reins
        { 39315, 780101 }, // Learn Mount: Reins of the Cobalt Riding Talbuk
        { 39317, 780102 }, // Learn Mount: Reins of the Silver Riding Talbuk
        { 39318, 780103 }, // Learn Mount: Reins of the Tan Riding Talbuk
        { 39319, 780104 }, // Learn Mount: Reins of the White Riding Talbuk
        { 39798, 780105 }, // Learn Mount: Green Riding Nether Ray
        { 39801, 780106 }, // Learn Mount: Purple Riding Nether Ray
        { 39800, 780107 }, // Learn Mount: Red Riding Nether Ray
        { 39802, 780108 }, // Learn Mount: Silver Riding Nether Ray
        { 39803, 780109 }, // Learn Mount: Blue Riding Nether Ray
        { 40192, 780110 }, // Learn Mount: Ashes of Al'ar
        { 41252, 780111 }, // Learn Mount: Reins of the Raven Lord
        { 41513, 780112 }, // Learn Mount: Reins of the Onyx Netherwing Drake
        { 41514, 780113 }, // Learn Mount: Reins of the Azure Netherwing Drake
        { 41515, 780114 }, // Learn Mount: Reins of the Cobalt Netherwing Drake
        { 41516, 780115 }, // Learn Mount: Reins of the Purple Netherwing Drake
        { 41517, 780116 }, // Learn Mount: Reins of the Veridian Netherwing Drake
        { 41518, 780117 }, // Learn Mount: Reins of the Violet Netherwing Drake
        { 43899, 780118 }, // Learn Mount: Brewfest Ram
        { 43900, 780119 }, // Learn Mount: Swift Brewfest Ram
        { 43927, 780120 }, // Learn Mount: Cenarion War Hippogryph
        { 35028, 780121 }, // Learn Mount: Swift Warstrider
        { 46628, 780122 }, // Learn Mount: Swift White Hawkstrider
        { 48027, 780123 }, // Learn Mount: Reins of the Black War Elekk
        { 54729, 780124 }, // Learn Mount: Winged Steed of the Ebon Blade
        { 59569, 780125 }, // Learn Mount: Reins of the Bronze Drake
        { 59571, 780126 }, // Learn Mount: Reins of the Twilight Drake
        { 59570, 780127 }, // Learn Mount: Reins of the Red Drake
        { 59785, 780128 }, // Learn Mount: Reins of the Black War Mammoth (43956)
        { 59799, 780129 }, // Learn Mount: Reins of the Ice Mammoth (43958)
        { 61465, 780130 }, // Learn Mount: Reins of the Grand Black War Mammoth (43959)
        { 61470, 780131 }, // Learn Mount: Reins of the Grand Ice Mammoth (43961)
        { 59650, 780132 }, // Learn Mount: Reins of the Black Drake
        { 59788, 780133 }, // Learn Mount: Reins of the Black War Mammoth (44077)
        { 59797, 780134 }, // Learn Mount: Reins of the Ice Mammoth (44080)
        { 61467, 780135 }, // Learn Mount: Reins of the Grand Black War Mammoth (44083)
        { 61469, 780136 }, // Learn Mount: Reins of the Grand Ice Mammoth (44086)
        { 59996, 780137 }, // Learn Mount: Reins of the Blue Proto-Drake
        { 60002, 780138 }, // Learn Mount: Reins of the Time-Lost Proto-Drake
        { 60114, 780139 }, // Learn Mount: Reins of the Armored Brown Bear (44225)
        { 60116, 780140 }, // Learn Mount: Reins of the Armored Brown Bear (44226)
        { 59791, 780141 }, // Learn Mount: Reins of the Wooly Mammoth (44230)
        { 59793, 780142 }, // Learn Mount: Reins of the Wooly Mammoth (44231)
        { 61447, 780143 }, // Learn Mount: Reins of the Traveler's Tundra Mammoth (44234)
        { 61425, 780144 }, // Learn Mount: Reins of the Traveler's Tundra Mammoth (44235)
        { 61229, 780145 }, // Learn Mount: Armored Snowy Gryphon
        { 61230, 780146 }, // Learn Mount: Armored Blue Wind Rider
        { 63232, 780147 }, // Learn Mount: Stormwind Steed
        { 63636, 780148 }, // Learn Mount: Ironforge Ram
        { 63638, 780149 }, // Learn Mount: Gnomeregan Mechanostrider
        { 63639, 780150 }, // Learn Mount: Exodar Elekk
        { 63637, 780151 }, // Learn Mount: Darnassian Nightsaber
        { 63641, 780152 }, // Learn Mount: Thunder Bluff Kodo
        { 63635, 780153 }, // Learn Mount: Darkspear Raptor
        { 63640, 780154 }, // Learn Mount: Orgrimmar Wolf
        { 63642, 780155 }, // Learn Mount: Silvermoon Hawkstrider
        { 63643, 780156 }, // Learn Mount: Forsaken Warhorse
        { 63796, 780157 }, // Learn Mount: Mimiron's Head
        { 63844, 780158 }, // Learn Mount: Argent Hippogryph
        { 64658, 780159 }, // Learn Mount: Horn of the Black Wolf
        { 64657, 780160 }, // Learn Mount: White Kodo
        { 64659, 780161 }, // Learn Mount: Whistle of the Venomhide Ravasaur
        { 64977, 780162 }, // Learn Mount: Black Skeletal Horse
        { 65644, 780163 }, // Learn Mount: Swift Purple Raptor
        { 65638, 780164 }, // Learn Mount: Swift Moonsaber
        { 65637, 780165 }, // Learn Mount: Great Red Elekk
        { 65645, 780166 }, // Learn Mount: White Skeletal Warhorse
        { 65642, 780167 }, // Learn Mount: Turbostrider
        { 65643, 780168 }, // Learn Mount: Swift Violet Ram
        { 65646, 780169 }, // Learn Mount: Swift Burgundy Wolf
        { 65641, 780170 }, // Learn Mount: Great Golden Kodo
        { 65639, 780171 }, // Learn Mount: Swift Red Hawkstrider
        { 65640, 780172 }, // Learn Mount: Swift Gray Steed
        { 66087, 780173 }, // Learn Mount: Silver Covenant Hippogryph
        { 66088, 780174 }, // Learn Mount: Sunreaver Dragonhawk
        { 66090, 780175 }, // Learn Mount: Quel'dorei Steed
        { 66091, 780176 }, // Learn Mount: Sunreaver Hawkstrider
        { 66847, 780177 }, // Learn Mount: Reins of the Striped Dawnsaber
        { 66846, 780178 }, // Learn Mount: Ochre Skeletal Warhorse
        { 66906, 780179 }, // Learn Mount: Argent Charger
        { 67466, 780180 }, // Learn Mount: Argent Warhorse
        { 69395, 780181 }, // Learn Mount: Reins of the Onyxian Drake
        { 72286, 780182 }, // Learn Mount: Invincible's Reins
        { 73313, 780183 }, // Learn Mount: Reins of the Crimson Deathcharger
        { 10673, 780184 }, // Learn Pet: Cat Carrier (Bombay)
        { 10674, 780185 }, // Learn Pet: Cat Carrier (Cornish Rex)
        { 10676, 780186 }, // Learn Pet: Cat Carrier (Orange Tabby)
        { 10678, 780187 }, // Learn Pet: Cat Carrier (Silver Tabby)
        { 10679, 780188 }, // Learn Pet: Cat Carrier (White Kitten)
        { 10677, 780189 }, // Learn Pet: Cat Carrier (Siamese)
        { 10675, 780190 }, // Learn Pet: Cat Carrier (Black Tabby)
        { 10683, 780191 }, // Learn Pet: Parrot Cage (Green Wing Macaw)
        { 10682, 780192 }, // Learn Pet: Parrot Cage (Hyacinth Macaw)
        { 10684, 780193 }, // Learn Pet: Parrot Cage (Senegal)
        { 10680, 780194 }, // Learn Pet: Parrot Cage (Cockatiel)
        { 10711, 780195 }, // Learn Pet: Rabbit Crate (Snowshoe)
        { 10698, 780196 }, // Learn Pet: Tiny Emerald Whelpling
        { 10697, 780197 }, // Learn Pet: Tiny Crimson Whelpling
        { 10707, 780198 }, // Learn Pet: Great Horned Owl
        { 10706, 780199 }, // Learn Pet: Hawk Owl
        { 10714, 780200 }, // Learn Pet: Black Kingsnake
        { 10716, 780201 }, // Learn Pet: Brown Snake
        { 10717, 780202 }, // Learn Pet: Crimson Snake
        { 10688, 780203 }, // Learn Pet: Cockroach
        { 10709, 780204 }, // Learn Pet: Prairie Dog Whistle
        { 12243, 780205 }, // Learn Pet: Mechanical Chicken
        { 10695, 780206 }, // Learn Pet: Dark Whelpling
        { 10685, 780207 }, // Learn Pet: Ancona Chicken
        { 10704, 780208 }, // Learn Pet: Tree Frog Box
        { 10703, 780209 }, // Learn Pet: Wood Frog Box
        { 15067, 780210 }, // Learn Pet: Sprite Darter Egg
        { 17709, 780211 }, // Learn Pet: Zergling Leash
        { 17707, 780212 }, // Learn Pet: Panda Collar
        { 17708, 780213 }, // Learn Pet: Diablo Stone
        { 24696, 780214 }, // Learn Pet: Blue Murloc Egg
        { 25018, 780215 }, // Learn Pet: Orange Murloc Egg
        { 27241, 780216 }, // Learn Pet: Pink Murloc Egg
        { 27570, 780217 }, // Learn Pet: Truesilver Shafted Arrow
        { 28487, 780218 }, // Learn Pet: White Murloc Egg
        { 28505, 780219 }, // Learn Pet: Polar Bear Collar
        { 28738, 780220 }, // Learn Pet: Turtle Box
        { 28739, 780221 }, // Learn Pet: Piglet's Collar
        { 28740, 780222 }, // Learn Pet: Rat Cage
        { 28871, 780223 }, // Learn Pet: Captured Flame
        { 35156, 780224 }, // Learn Pet: Mana Wyrmling
        { 35239, 780225 }, // Learn Pet: Brown Rabbit Crate
        { 35907, 780226 }, // Learn Pet: Blue Moth Egg
        { 35909, 780227 }, // Learn Pet: Red Moth Egg
        { 35910, 780228 }, // Learn Pet: Yellow Moth Egg
        { 35911, 780229 }, // Learn Pet: White Moth Egg
        { 36027, 780230 }, // Learn Pet: Golden Dragonhawk Hatchling
        { 36028, 780231 }, // Learn Pet: Red Dragonhawk Hatchling
        { 36029, 780232 }, // Learn Pet: Silver Dragonhawk Hatchling
        { 36031, 780233 }, // Learn Pet: Blue Dragonhawk Hatchling
        { 36034, 780234 }, // Learn Pet: Captured Firefly
        { 39709, 780235 }, // Learn Pet: Wolpertinger's Tankard
        { 45082, 780236 }, // Learn Pet: Tiny Sporebat
        { 10696, 780237 }, // Learn Pet: Azure Whelpling
        { 46599, 780238 }, // Learn Pet: Phoenix Hatchling
        { 51716, 780239 }, // Learn Pet: Nether Ray Fry
        { 51851, 780240 }, // Learn Pet: Vampiric Batling
        { 53316, 780241 }, // Learn Pet: Ghostly Skull
        { 61357, 780242 }, // Learn Pet: Nurtured Penguin Egg
        { 10713, 780243 }, // Learn Pet: Albino Snake
        { 62491, 780244 }, // Learn Pet: Teldrassil Sproutling
        { 62508, 780245 }, // Learn Pet: Dun Morogh Cub
        { 62510, 780246 }, // Learn Pet: Tirisfal Batling
        { 62513, 780247 }, // Learn Pet: Durotar Scorpion
        { 62516, 780248 }, // Learn Pet: Elwynn Lamb
        { 62542, 780249 }, // Learn Pet: Mulgore Hatchling
        { 62564, 780250 }, // Learn Pet: Enchanted Broom
        { 62562, 780251 }, // Learn Pet: Ammen Vale Lashling
        { 62609, 780252 }, // Learn Pet: Argent Squire
        { 62674, 780253 }, // Learn Pet: Mechanopeep
        { 62746, 780254 }, // Learn Pet: Argent Gruntling
        { 63712, 780255 }, // Learn Pet: Sen'jin Fetish
        { 65358, 780256 }, // Learn Pet: Calico Cat
        { 44369, 780257 }, // Learn Pet: Pint-Sized Pink Pachyderm
        { 66096, 780258 }, // Learn Pet: Shimmering Wyrmling
        { 67414, 780259 }, // Learn Pet: Deviate Hatchling
        { 67415, 780260 }, // Learn Pet: Gundrak Hatchling
        { 67417, 780261 }, // Learn Pet: Obsidian Hatchling
        { 67420, 780262 }, // Learn Pet: Razzashi Hatchling
        { 75134, 780263 }, // Learn Pet: Blue Clockwork Rocket Bot
    };

    // AP item id -> the real wow_item_entry to mail -- this family's own
    // self-contained mail-delivery table, same pattern as Archipelago::Fish's
    // own ApItemIdToWowItemEntry.
    inline std::unordered_map<int64_t, uint32_t> const ApItemIdToWowItemEntry = {
        { 880000, 1132 }, // "Mount: Horn of the Timber Wolf"
        { 880001, 2411 }, // "Mount: Black Stallion Bridle"
        { 880002, 2414 }, // "Mount: Pinto Bridle"
        { 880003, 5655 }, // "Mount: Chestnut Mare Bridle"
        { 880004, 5656 }, // "Mount: Brown Horse Bridle"
        { 880005, 5665 }, // "Mount: Horn of the Dire Wolf"
        { 880006, 5668 }, // "Mount: Horn of the Brown Wolf"
        { 880007, 5864 }, // "Mount: Gray Ram"
        { 880008, 5872 }, // "Mount: Brown Ram"
        { 880009, 5873 }, // "Mount: White Ram"
        { 880010, 8563 }, // "Mount: Red Mechanostrider"
        { 880011, 8588 }, // "Mount: Whistle of the Emerald Raptor"
        { 880012, 8591 }, // "Mount: Whistle of the Turquoise Raptor"
        { 880013, 8592 }, // "Mount: Whistle of the Violet Raptor"
        { 880014, 8595 }, // "Mount: Blue Mechanostrider"
        { 880015, 8629 }, // "Mount: Reins of the Striped Nightsaber"
        { 880016, 8631 }, // "Mount: Reins of the Striped Frostsaber"
        { 880017, 8632 }, // "Mount: Reins of the Spotted Frostsaber"
        { 880018, 13086 }, // "Mount: Reins of the Winterspring Frostsaber"
        { 880019, 13321 }, // "Mount: Green Mechanostrider"
        { 880020, 13322 }, // "Mount: Unpainted Mechanostrider"
        { 880021, 13331 }, // "Mount: Red Skeletal Horse"
        { 880022, 13332 }, // "Mount: Blue Skeletal Horse"
        { 880023, 13333 }, // "Mount: Brown Skeletal Horse"
        { 880024, 13334 }, // "Mount: Green Skeletal Warhorse"
        { 880025, 13335 }, // "Mount: Deathcharger's Reins"
        { 880026, 15277 }, // "Mount: Gray Kodo"
        { 880027, 15290 }, // "Mount: Brown Kodo"
        { 880028, 18766 }, // "Mount: Reins of the Swift Frostsaber"
        { 880029, 18767 }, // "Mount: Reins of the Swift Mistsaber"
        { 880030, 18772 }, // "Mount: Swift Green Mechanostrider"
        { 880031, 18773 }, // "Mount: Swift White Mechanostrider"
        { 880032, 18774 }, // "Mount: Swift Yellow Mechanostrider"
        { 880033, 18776 }, // "Mount: Swift Palomino"
        { 880034, 18777 }, // "Mount: Swift Brown Steed"
        { 880035, 18778 }, // "Mount: Swift White Steed"
        { 880036, 18785 }, // "Mount: Swift White Ram"
        { 880037, 18786 }, // "Mount: Swift Brown Ram"
        { 880038, 18787 }, // "Mount: Swift Gray Ram"
        { 880039, 18788 }, // "Mount: Swift Blue Raptor"
        { 880040, 18789 }, // "Mount: Swift Olive Raptor"
        { 880041, 18790 }, // "Mount: Swift Orange Raptor"
        { 880042, 18791 }, // "Mount: Purple Skeletal Warhorse"
        { 880043, 18793 }, // "Mount: Great White Kodo"
        { 880044, 18794 }, // "Mount: Great Brown Kodo"
        { 880045, 18795 }, // "Mount: Great Gray Kodo"
        { 880046, 18796 }, // "Mount: Horn of the Swift Brown Wolf"
        { 880047, 18797 }, // "Mount: Horn of the Swift Timber Wolf"
        { 880048, 18798 }, // "Mount: Horn of the Swift Gray Wolf"
        { 880049, 18902 }, // "Mount: Reins of the Swift Stormsaber"
        { 880050, 19029 }, // "Mount: Horn of the Frostwolf Howler"
        { 880051, 19030 }, // "Mount: Stormpike Battle Charger"
        { 880052, 19872 }, // "Mount: Swift Razzashi Raptor"
        { 880053, 19902 }, // "Mount: Swift Zulian Tiger"
        { 880054, 21176 }, // "Mount: Black Qiraji Resonating Crystal"
        { 880055, 21218 }, // "Mount: Blue Qiraji Resonating Crystal"
        { 880056, 21321 }, // "Mount: Red Qiraji Resonating Crystal"
        { 880057, 21323 }, // "Mount: Green Qiraji Resonating Crystal"
        { 880058, 21324 }, // "Mount: Yellow Qiraji Resonating Crystal"
        { 880059, 25470 }, // "Mount: Golden Gryphon"
        { 880060, 25471 }, // "Mount: Ebon Gryphon"
        { 880061, 25472 }, // "Mount: Snowy Gryphon"
        { 880062, 25473 }, // "Mount: Swift Blue Gryphon"
        { 880063, 25474 }, // "Mount: Tawny Wind Rider"
        { 880064, 25475 }, // "Mount: Blue Wind Rider"
        { 880065, 25476 }, // "Mount: Green Wind Rider"
        { 880066, 25477 }, // "Mount: Swift Red Wind Rider"
        { 880067, 25527 }, // "Mount: Swift Red Gryphon"
        { 880068, 25528 }, // "Mount: Swift Green Gryphon"
        { 880069, 25529 }, // "Mount: Swift Purple Gryphon"
        { 880070, 25531 }, // "Mount: Swift Green Wind Rider"
        { 880071, 25532 }, // "Mount: Swift Yellow Wind Rider"
        { 880072, 25533 }, // "Mount: Swift Purple Wind Rider"
        { 880073, 28481 }, // "Mount: Brown Elekk"
        { 880074, 28915 }, // "Mount: Reins of the Dark Riding Talbuk"
        { 880075, 28927 }, // "Mount: Red Hawkstrider"
        { 880076, 28936 }, // "Mount: Swift Pink Hawkstrider"
        { 880077, 29102 }, // "Mount: Reins of the Cobalt War Talbuk"
        { 880078, 29103 }, // "Mount: Reins of the White War Talbuk"
        { 880079, 29104 }, // "Mount: Reins of the Silver War Talbuk"
        { 880080, 29105 }, // "Mount: Reins of the Tan War Talbuk"
        { 880081, 29220 }, // "Mount: Blue Hawkstrider"
        { 880082, 29221 }, // "Mount: Black Hawkstrider"
        { 880083, 29222 }, // "Mount: Purple Hawkstrider"
        { 880084, 29223 }, // "Mount: Swift Green Hawkstrider"
        { 880085, 29224 }, // "Mount: Swift Purple Hawkstrider"
        { 880086, 29228 }, // "Mount: Reins of the Dark War Talbuk"
        { 880087, 29465 }, // "Mount: Black Battlestrider"
        { 880088, 29466 }, // "Mount: Black War Kodo"
        { 880089, 29467 }, // "Mount: Black War Ram"
        { 880090, 29468 }, // "Mount: Black War Steed Bridle"
        { 880091, 29469 }, // "Mount: Horn of the Black War Wolf"
        { 880092, 29470 }, // "Mount: Red Skeletal Warhorse"
        { 880093, 29471 }, // "Mount: Reins of the Black War Tiger"
        { 880094, 29472 }, // "Mount: Whistle of the Black War Raptor"
        { 880095, 29743 }, // "Mount: Purple Elekk"
        { 880096, 29744 }, // "Mount: Gray Elekk"
        { 880097, 29745 }, // "Mount: Great Blue Elekk"
        { 880098, 29746 }, // "Mount: Great Green Elekk"
        { 880099, 29747 }, // "Mount: Great Purple Elekk"
        { 880100, 30480 }, // "Mount: Fiery Warhorse's Reins"
        { 880101, 31829 }, // "Mount: Reins of the Cobalt Riding Talbuk"
        { 880102, 31831 }, // "Mount: Reins of the Silver Riding Talbuk"
        { 880103, 31833 }, // "Mount: Reins of the Tan Riding Talbuk"
        { 880104, 31835 }, // "Mount: Reins of the White Riding Talbuk"
        { 880105, 32314 }, // "Mount: Green Riding Nether Ray"
        { 880106, 32316 }, // "Mount: Purple Riding Nether Ray"
        { 880107, 32317 }, // "Mount: Red Riding Nether Ray"
        { 880108, 32318 }, // "Mount: Silver Riding Nether Ray"
        { 880109, 32319 }, // "Mount: Blue Riding Nether Ray"
        { 880110, 32458 }, // "Mount: Ashes of Al'ar"
        { 880111, 32768 }, // "Mount: Reins of the Raven Lord"
        { 880112, 32857 }, // "Mount: Reins of the Onyx Netherwing Drake"
        { 880113, 32858 }, // "Mount: Reins of the Azure Netherwing Drake"
        { 880114, 32859 }, // "Mount: Reins of the Cobalt Netherwing Drake"
        { 880115, 32860 }, // "Mount: Reins of the Purple Netherwing Drake"
        { 880116, 32861 }, // "Mount: Reins of the Veridian Netherwing Drake"
        { 880117, 32862 }, // "Mount: Reins of the Violet Netherwing Drake"
        { 880118, 33976 }, // "Mount: Brewfest Ram"
        { 880119, 33977 }, // "Mount: Swift Brewfest Ram"
        { 880120, 33999 }, // "Mount: Cenarion War Hippogryph"
        { 880121, 34129 }, // "Mount: Swift Warstrider"
        { 880122, 35513 }, // "Mount: Swift White Hawkstrider"
        { 880123, 35906 }, // "Mount: Reins of the Black War Elekk"
        { 880124, 40775 }, // "Mount: Winged Steed of the Ebon Blade"
        { 880125, 43951 }, // "Mount: Reins of the Bronze Drake"
        { 880126, 43954 }, // "Mount: Reins of the Twilight Drake"
        { 880127, 43955 }, // "Mount: Reins of the Red Drake"
        { 880128, 43956 }, // "Mount: Reins of the Black War Mammoth (43956)"
        { 880129, 43958 }, // "Mount: Reins of the Ice Mammoth (43958)"
        { 880130, 43959 }, // "Mount: Reins of the Grand Black War Mammoth (43959)"
        { 880131, 43961 }, // "Mount: Reins of the Grand Ice Mammoth (43961)"
        { 880132, 43986 }, // "Mount: Reins of the Black Drake"
        { 880133, 44077 }, // "Mount: Reins of the Black War Mammoth (44077)"
        { 880134, 44080 }, // "Mount: Reins of the Ice Mammoth (44080)"
        { 880135, 44083 }, // "Mount: Reins of the Grand Black War Mammoth (44083)"
        { 880136, 44086 }, // "Mount: Reins of the Grand Ice Mammoth (44086)"
        { 880137, 44151 }, // "Mount: Reins of the Blue Proto-Drake"
        { 880138, 44168 }, // "Mount: Reins of the Time-Lost Proto-Drake"
        { 880139, 44225 }, // "Mount: Reins of the Armored Brown Bear (44225)"
        { 880140, 44226 }, // "Mount: Reins of the Armored Brown Bear (44226)"
        { 880141, 44230 }, // "Mount: Reins of the Wooly Mammoth (44230)"
        { 880142, 44231 }, // "Mount: Reins of the Wooly Mammoth (44231)"
        { 880143, 44234 }, // "Mount: Reins of the Traveler's Tundra Mammoth (44234)"
        { 880144, 44235 }, // "Mount: Reins of the Traveler's Tundra Mammoth (44235)"
        { 880145, 44689 }, // "Mount: Armored Snowy Gryphon"
        { 880146, 44690 }, // "Mount: Armored Blue Wind Rider"
        { 880147, 45125 }, // "Mount: Stormwind Steed"
        { 880148, 45586 }, // "Mount: Ironforge Ram"
        { 880149, 45589 }, // "Mount: Gnomeregan Mechanostrider"
        { 880150, 45590 }, // "Mount: Exodar Elekk"
        { 880151, 45591 }, // "Mount: Darnassian Nightsaber"
        { 880152, 45592 }, // "Mount: Thunder Bluff Kodo"
        { 880153, 45593 }, // "Mount: Darkspear Raptor"
        { 880154, 45595 }, // "Mount: Orgrimmar Wolf"
        { 880155, 45596 }, // "Mount: Silvermoon Hawkstrider"
        { 880156, 45597 }, // "Mount: Forsaken Warhorse"
        { 880157, 45693 }, // "Mount: Mimiron's Head"
        { 880158, 45725 }, // "Mount: Argent Hippogryph"
        { 880159, 46099 }, // "Mount: Horn of the Black Wolf"
        { 880160, 46100 }, // "Mount: White Kodo"
        { 880161, 46102 }, // "Mount: Whistle of the Venomhide Ravasaur"
        { 880162, 46308 }, // "Mount: Black Skeletal Horse"
        { 880163, 46743 }, // "Mount: Swift Purple Raptor"
        { 880164, 46744 }, // "Mount: Swift Moonsaber"
        { 880165, 46745 }, // "Mount: Great Red Elekk"
        { 880166, 46746 }, // "Mount: White Skeletal Warhorse"
        { 880167, 46747 }, // "Mount: Turbostrider"
        { 880168, 46748 }, // "Mount: Swift Violet Ram"
        { 880169, 46749 }, // "Mount: Swift Burgundy Wolf"
        { 880170, 46750 }, // "Mount: Great Golden Kodo"
        { 880171, 46751 }, // "Mount: Swift Red Hawkstrider"
        { 880172, 46752 }, // "Mount: Swift Gray Steed"
        { 880173, 46813 }, // "Mount: Silver Covenant Hippogryph"
        { 880174, 46814 }, // "Mount: Sunreaver Dragonhawk"
        { 880175, 46815 }, // "Mount: Quel'dorei Steed"
        { 880176, 46816 }, // "Mount: Sunreaver Hawkstrider"
        { 880177, 47100 }, // "Mount: Reins of the Striped Dawnsaber"
        { 880178, 47101 }, // "Mount: Ochre Skeletal Warhorse"
        { 880179, 47179 }, // "Mount: Argent Charger"
        { 880180, 47180 }, // "Mount: Argent Warhorse"
        { 880181, 49636 }, // "Mount: Reins of the Onyxian Drake"
        { 880182, 50818 }, // "Mount: Invincible's Reins"
        { 880183, 52200 }, // "Mount: Reins of the Crimson Deathcharger"
        { 880184, 8485 }, // "Pet: Cat Carrier (Bombay)"
        { 880185, 8486 }, // "Pet: Cat Carrier (Cornish Rex)"
        { 880186, 8487 }, // "Pet: Cat Carrier (Orange Tabby)"
        { 880187, 8488 }, // "Pet: Cat Carrier (Silver Tabby)"
        { 880188, 8489 }, // "Pet: Cat Carrier (White Kitten)"
        { 880189, 8490 }, // "Pet: Cat Carrier (Siamese)"
        { 880190, 8491 }, // "Pet: Cat Carrier (Black Tabby)"
        { 880191, 8492 }, // "Pet: Parrot Cage (Green Wing Macaw)"
        { 880192, 8494 }, // "Pet: Parrot Cage (Hyacinth Macaw)"
        { 880193, 8495 }, // "Pet: Parrot Cage (Senegal)"
        { 880194, 8496 }, // "Pet: Parrot Cage (Cockatiel)"
        { 880195, 8497 }, // "Pet: Rabbit Crate (Snowshoe)"
        { 880196, 8498 }, // "Pet: Tiny Emerald Whelpling"
        { 880197, 8499 }, // "Pet: Tiny Crimson Whelpling"
        { 880198, 8500 }, // "Pet: Great Horned Owl"
        { 880199, 8501 }, // "Pet: Hawk Owl"
        { 880200, 10360 }, // "Pet: Black Kingsnake"
        { 880201, 10361 }, // "Pet: Brown Snake"
        { 880202, 10392 }, // "Pet: Crimson Snake"
        { 880203, 10393 }, // "Pet: Cockroach"
        { 880204, 10394 }, // "Pet: Prairie Dog Whistle"
        { 880205, 10398 }, // "Pet: Mechanical Chicken"
        { 880206, 10822 }, // "Pet: Dark Whelpling"
        { 880207, 11023 }, // "Pet: Ancona Chicken"
        { 880208, 11026 }, // "Pet: Tree Frog Box"
        { 880209, 11027 }, // "Pet: Wood Frog Box"
        { 880210, 11474 }, // "Pet: Sprite Darter Egg"
        { 880211, 13582 }, // "Pet: Zergling Leash"
        { 880212, 13583 }, // "Pet: Panda Collar"
        { 880213, 13584 }, // "Pet: Diablo Stone"
        { 880214, 20371 }, // "Pet: Blue Murloc Egg"
        { 880215, 20651 }, // "Pet: Orange Murloc Egg"
        { 880216, 22114 }, // "Pet: Pink Murloc Egg"
        { 880217, 22235 }, // "Pet: Truesilver Shafted Arrow"
        { 880218, 22780 }, // "Pet: White Murloc Egg"
        { 880219, 22781 }, // "Pet: Polar Bear Collar"
        { 880220, 23002 }, // "Pet: Turtle Box"
        { 880221, 23007 }, // "Pet: Piglet's Collar"
        { 880222, 23015 }, // "Pet: Rat Cage"
        { 880223, 23083 }, // "Pet: Captured Flame"
        { 880224, 29363 }, // "Pet: Mana Wyrmling"
        { 880225, 29364 }, // "Pet: Brown Rabbit Crate"
        { 880226, 29901 }, // "Pet: Blue Moth Egg"
        { 880227, 29902 }, // "Pet: Red Moth Egg"
        { 880228, 29903 }, // "Pet: Yellow Moth Egg"
        { 880229, 29904 }, // "Pet: White Moth Egg"
        { 880230, 29953 }, // "Pet: Golden Dragonhawk Hatchling"
        { 880231, 29956 }, // "Pet: Red Dragonhawk Hatchling"
        { 880232, 29957 }, // "Pet: Silver Dragonhawk Hatchling"
        { 880233, 29958 }, // "Pet: Blue Dragonhawk Hatchling"
        { 880234, 29960 }, // "Pet: Captured Firefly"
        { 880235, 32233 }, // "Pet: Wolpertinger's Tankard"
        { 880236, 34478 }, // "Pet: Tiny Sporebat"
        { 880237, 34535 }, // "Pet: Azure Whelpling"
        { 880238, 35504 }, // "Pet: Phoenix Hatchling"
        { 880239, 38628 }, // "Pet: Nether Ray Fry"
        { 880240, 38658 }, // "Pet: Vampiric Batling"
        { 880241, 39973 }, // "Pet: Ghostly Skull"
        { 880242, 44723 }, // "Pet: Nurtured Penguin Egg"
        { 880243, 44822 }, // "Pet: Albino Snake"
        { 880244, 44965 }, // "Pet: Teldrassil Sproutling"
        { 880245, 44970 }, // "Pet: Dun Morogh Cub"
        { 880246, 44971 }, // "Pet: Tirisfal Batling"
        { 880247, 44973 }, // "Pet: Durotar Scorpion"
        { 880248, 44974 }, // "Pet: Elwynn Lamb"
        { 880249, 44980 }, // "Pet: Mulgore Hatchling"
        { 880250, 44982 }, // "Pet: Enchanted Broom"
        { 880251, 44984 }, // "Pet: Ammen Vale Lashling"
        { 880252, 44998 }, // "Pet: Argent Squire"
        { 880253, 45002 }, // "Pet: Mechanopeep"
        { 880254, 45022 }, // "Pet: Argent Gruntling"
        { 880255, 45606 }, // "Pet: Sen'jin Fetish"
        { 880256, 46398 }, // "Pet: Calico Cat"
        { 880257, 46707 }, // "Pet: Pint-Sized Pink Pachyderm"
        { 880258, 46820 }, // "Pet: Shimmering Wyrmling"
        { 880259, 48114 }, // "Pet: Deviate Hatchling"
        { 880260, 48116 }, // "Pet: Gundrak Hatchling"
        { 880261, 48120 }, // "Pet: Obsidian Hatchling"
        { 880262, 48126 }, // "Pet: Razzashi Hatchling"
        { 880263, 54436 }, // "Pet: Blue Clockwork Rocket Bot"
    };
}
