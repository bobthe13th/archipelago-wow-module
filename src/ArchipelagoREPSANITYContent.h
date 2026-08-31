// GENERATED FILE - do not edit by hand.
// Regenerate with: python modules/archipelago_wow/tools/generate_content.py content/repsanity.yaml
#pragma once

#include <cstdint>
#include <map>
#include <string>
#include <unordered_map>
#include <utility>

namespace ArchipelagoREPSANITYContent {
inline constexpr std::pair<char const*, uint32_t> LOCATIONS_RAW[] = {
    {"Reputation: Booty Bay (Friendly)", 11000000},
    {"Reputation: Booty Bay (Honored)", 11000001},
    {"Reputation: Booty Bay (Revered)", 11000002},
    {"Reputation: Booty Bay (Exalted)", 11000003},
    {"Reputation:  Blacksmithing - Armorsmithing (Friendly)", 11000004},
    {"Reputation:  Blacksmithing - Armorsmithing (Honored)", 11000005},
    {"Reputation:  Blacksmithing - Armorsmithing (Revered)", 11000006},
    {"Reputation:  Blacksmithing - Armorsmithing (Exalted)", 11000007},
    {"Reputation: Ironforge (Friendly)", 11000008},
    {"Reputation: Ironforge (Honored)", 11000009},
    {"Reputation: Ironforge (Revered)", 11000010},
    {"Reputation: Ironforge (Exalted)", 11000011},
    {"Reputation: Gnomeregan Exiles (Friendly)", 11000012},
    {"Reputation: Gnomeregan Exiles (Honored)", 11000013},
    {"Reputation: Gnomeregan Exiles (Revered)", 11000014},
    {"Reputation: Gnomeregan Exiles (Exalted)", 11000015},
    {"Reputation: Thorium Brotherhood (Friendly)", 11000016},
    {"Reputation: Thorium Brotherhood (Honored)", 11000017},
    {"Reputation: Thorium Brotherhood (Revered)", 11000018},
    {"Reputation: Thorium Brotherhood (Exalted)", 11000019},
    {"Reputation: Horde (Friendly)", 11000020},
    {"Reputation: Horde (Honored)", 11000021},
    {"Reputation: Horde (Revered)", 11000022},
    {"Reputation: Horde (Exalted)", 11000023},
    {"Reputation: Undercity (Friendly)", 11000024},
    {"Reputation: Undercity (Honored)", 11000025},
    {"Reputation: Undercity (Revered)", 11000026},
    {"Reputation: Undercity (Exalted)", 11000027},
    {"Reputation: Darnassus (Friendly)", 11000028},
    {"Reputation: Darnassus (Honored)", 11000029},
    {"Reputation: Darnassus (Revered)", 11000030},
    {"Reputation: Darnassus (Exalted)", 11000031},
    {"Reputation: Syndicate (Hostile)", 11000032},
    {"Reputation: Syndicate (Unfriendly)", 11000033},
    {"Reputation: Syndicate (Neutral)", 11000034},
    {"Reputation: Syndicate (Friendly)", 11000035},
    {"Reputation: Syndicate (Honored)", 11000036},
    {"Reputation: Syndicate (Revered)", 11000037},
    {"Reputation: Syndicate (Exalted)", 11000038},
    {"Reputation: Stormwind (Friendly)", 11000039},
    {"Reputation: Stormwind (Honored)", 11000040},
    {"Reputation: Stormwind (Revered)", 11000041},
    {"Reputation: Stormwind (Exalted)", 11000042},
    {"Reputation: Orgrimmar (Friendly)", 11000043},
    {"Reputation: Orgrimmar (Honored)", 11000044},
    {"Reputation: Orgrimmar (Revered)", 11000045},
    {"Reputation: Orgrimmar (Exalted)", 11000046},
    {"Reputation: Thunder Bluff (Friendly)", 11000047},
    {"Reputation: Thunder Bluff (Honored)", 11000048},
    {"Reputation: Thunder Bluff (Revered)", 11000049},
    {"Reputation: Thunder Bluff (Exalted)", 11000050},
    {"Reputation:  Leatherworking - Elemental (Friendly)", 11000051},
    {"Reputation:  Leatherworking - Elemental (Honored)", 11000052},
    {"Reputation:  Leatherworking - Elemental (Revered)", 11000053},
    {"Reputation:  Leatherworking - Elemental (Exalted)", 11000054},
    {"Reputation:  Leatherworking - Dragonscale (Friendly)", 11000055},
    {"Reputation:  Leatherworking - Dragonscale (Honored)", 11000056},
    {"Reputation:  Leatherworking - Dragonscale (Revered)", 11000057},
    {"Reputation:  Leatherworking - Dragonscale (Exalted)", 11000058},
    {"Reputation: Bloodsail Buccaneers (Hostile)", 11000059},
    {"Reputation: Bloodsail Buccaneers (Unfriendly)", 11000060},
    {"Reputation: Bloodsail Buccaneers (Neutral)", 11000061},
    {"Reputation: Bloodsail Buccaneers (Friendly)", 11000062},
    {"Reputation: Bloodsail Buccaneers (Honored)", 11000063},
    {"Reputation: Bloodsail Buccaneers (Revered)", 11000064},
    {"Reputation: Bloodsail Buccaneers (Exalted)", 11000065},
    {"Reputation: Gelkis Clan Centaur (Friendly)", 11000066},
    {"Reputation: Gelkis Clan Centaur (Honored)", 11000067},
    {"Reputation: Gelkis Clan Centaur (Revered)", 11000068},
    {"Reputation: Gelkis Clan Centaur (Exalted)", 11000069},
    {"Reputation: Magram Clan Centaur (Friendly)", 11000070},
    {"Reputation: Magram Clan Centaur (Honored)", 11000071},
    {"Reputation: Magram Clan Centaur (Revered)", 11000072},
    {"Reputation: Magram Clan Centaur (Exalted)", 11000073},
    {"Reputation: Steamwheedle Cartel (Friendly)", 11000074},
    {"Reputation: Steamwheedle Cartel (Honored)", 11000075},
    {"Reputation: Steamwheedle Cartel (Revered)", 11000076},
    {"Reputation: Steamwheedle Cartel (Exalted)", 11000077},
    {"Reputation: Zandalar Tribe (Friendly)", 11000078},
    {"Reputation: Zandalar Tribe (Honored)", 11000079},
    {"Reputation: Zandalar Tribe (Revered)", 11000080},
    {"Reputation: Zandalar Tribe (Exalted)", 11000081},
    {"Reputation:  Blacksmithing - Weaponsmithing (Friendly)", 11000082},
    {"Reputation:  Blacksmithing - Weaponsmithing (Honored)", 11000083},
    {"Reputation:  Blacksmithing - Weaponsmithing (Revered)", 11000084},
    {"Reputation:  Blacksmithing - Weaponsmithing (Exalted)", 11000085},
    {"Reputation: Ravenholdt (Friendly)", 11000086},
    {"Reputation: Ravenholdt (Honored)", 11000087},
    {"Reputation: Ravenholdt (Revered)", 11000088},
    {"Reputation: Ravenholdt (Exalted)", 11000089},
    {"Reputation: Gadgetzan (Friendly)", 11000090},
    {"Reputation: Gadgetzan (Honored)", 11000091},
    {"Reputation: Gadgetzan (Revered)", 11000092},
    {"Reputation: Gadgetzan (Exalted)", 11000093},
    {"Reputation: Alliance (Friendly)", 11000094},
    {"Reputation: Alliance (Honored)", 11000095},
    {"Reputation: Alliance (Revered)", 11000096},
    {"Reputation: Alliance (Exalted)", 11000097},
    {"Reputation: Ratchet (Friendly)", 11000098},
    {"Reputation: Ratchet (Honored)", 11000099},
    {"Reputation: Ratchet (Revered)", 11000100},
    {"Reputation: Ratchet (Exalted)", 11000101},
    {"Reputation: Wildhammer Clan (Friendly)", 11000102},
    {"Reputation: Wildhammer Clan (Honored)", 11000103},
    {"Reputation: Wildhammer Clan (Revered)", 11000104},
    {"Reputation: Wildhammer Clan (Exalted)", 11000105},
    {"Reputation: The League of Arathor (Friendly)", 11000106},
    {"Reputation: The League of Arathor (Honored)", 11000107},
    {"Reputation: The League of Arathor (Revered)", 11000108},
    {"Reputation: The League of Arathor (Exalted)", 11000109},
    {"Reputation: The Defilers (Friendly)", 11000110},
    {"Reputation: The Defilers (Honored)", 11000111},
    {"Reputation: The Defilers (Revered)", 11000112},
    {"Reputation: The Defilers (Exalted)", 11000113},
    {"Reputation: Argent Dawn (Friendly)", 11000114},
    {"Reputation: Argent Dawn (Honored)", 11000115},
    {"Reputation: Argent Dawn (Revered)", 11000116},
    {"Reputation: Argent Dawn (Exalted)", 11000117},
    {"Reputation: Darkspear Trolls (Friendly)", 11000118},
    {"Reputation: Darkspear Trolls (Honored)", 11000119},
    {"Reputation: Darkspear Trolls (Revered)", 11000120},
    {"Reputation: Darkspear Trolls (Exalted)", 11000121},
    {"Reputation:  Leatherworking - Tribal (Friendly)", 11000122},
    {"Reputation:  Leatherworking - Tribal (Honored)", 11000123},
    {"Reputation:  Leatherworking - Tribal (Revered)", 11000124},
    {"Reputation:  Leatherworking - Tribal (Exalted)", 11000125},
    {"Reputation:  Engineering - Goblin (Friendly)", 11000126},
    {"Reputation:  Engineering - Goblin (Honored)", 11000127},
    {"Reputation:  Engineering - Goblin (Revered)", 11000128},
    {"Reputation:  Engineering - Goblin (Exalted)", 11000129},
    {"Reputation:  Engineering - Gnome (Friendly)", 11000130},
    {"Reputation:  Engineering - Gnome (Honored)", 11000131},
    {"Reputation:  Engineering - Gnome (Revered)", 11000132},
    {"Reputation:  Engineering - Gnome (Exalted)", 11000133},
    {"Reputation:  Blacksmithing - Hammersmithing (Friendly)", 11000134},
    {"Reputation:  Blacksmithing - Hammersmithing (Honored)", 11000135},
    {"Reputation:  Blacksmithing - Hammersmithing (Revered)", 11000136},
    {"Reputation:  Blacksmithing - Hammersmithing (Exalted)", 11000137},
    {"Reputation:  Blacksmithing - Axesmithing (Friendly)", 11000138},
    {"Reputation:  Blacksmithing - Axesmithing (Honored)", 11000139},
    {"Reputation:  Blacksmithing - Axesmithing (Revered)", 11000140},
    {"Reputation:  Blacksmithing - Axesmithing (Exalted)", 11000141},
    {"Reputation:  Blacksmithing - Swordsmithing (Friendly)", 11000142},
    {"Reputation:  Blacksmithing - Swordsmithing (Honored)", 11000143},
    {"Reputation:  Blacksmithing - Swordsmithing (Revered)", 11000144},
    {"Reputation:  Blacksmithing - Swordsmithing (Exalted)", 11000145},
    {"Reputation: Caer Darrow (Friendly)", 11000146},
    {"Reputation: Caer Darrow (Honored)", 11000147},
    {"Reputation: Caer Darrow (Revered)", 11000148},
    {"Reputation: Caer Darrow (Exalted)", 11000149},
    {"Reputation: Timbermaw Hold (Unfriendly)", 11000150},
    {"Reputation: Timbermaw Hold (Neutral)", 11000151},
    {"Reputation: Timbermaw Hold (Friendly)", 11000152},
    {"Reputation: Timbermaw Hold (Honored)", 11000153},
    {"Reputation: Timbermaw Hold (Revered)", 11000154},
    {"Reputation: Timbermaw Hold (Exalted)", 11000155},
    {"Reputation: Everlook (Friendly)", 11000156},
    {"Reputation: Everlook (Honored)", 11000157},
    {"Reputation: Everlook (Revered)", 11000158},
    {"Reputation: Everlook (Exalted)", 11000159},
    {"Reputation: Wintersaber Trainers (Hostile)", 11000160},
    {"Reputation: Wintersaber Trainers (Unfriendly)", 11000161},
    {"Reputation: Wintersaber Trainers (Neutral)", 11000162},
    {"Reputation: Wintersaber Trainers (Friendly)", 11000163},
    {"Reputation: Wintersaber Trainers (Honored)", 11000164},
    {"Reputation: Wintersaber Trainers (Revered)", 11000165},
    {"Reputation: Wintersaber Trainers (Exalted)", 11000166},
    {"Reputation: Cenarion Circle (Friendly)", 11000167},
    {"Reputation: Cenarion Circle (Honored)", 11000168},
    {"Reputation: Cenarion Circle (Revered)", 11000169},
    {"Reputation: Cenarion Circle (Exalted)", 11000170},
    {"Reputation: Frostwolf Clan (Friendly)", 11000171},
    {"Reputation: Frostwolf Clan (Honored)", 11000172},
    {"Reputation: Frostwolf Clan (Revered)", 11000173},
    {"Reputation: Frostwolf Clan (Exalted)", 11000174},
    {"Reputation: Stormpike Guard (Friendly)", 11000175},
    {"Reputation: Stormpike Guard (Honored)", 11000176},
    {"Reputation: Stormpike Guard (Revered)", 11000177},
    {"Reputation: Stormpike Guard (Exalted)", 11000178},
    {"Reputation: Hydraxian Waterlords (Friendly)", 11000179},
    {"Reputation: Hydraxian Waterlords (Honored)", 11000180},
    {"Reputation: Hydraxian Waterlords (Revered)", 11000181},
    {"Reputation: Hydraxian Waterlords (Exalted)", 11000182},
    {"Reputation: Shen'dralar (Friendly)", 11000183},
    {"Reputation: Shen'dralar (Honored)", 11000184},
    {"Reputation: Shen'dralar (Revered)", 11000185},
    {"Reputation: Shen'dralar (Exalted)", 11000186},
    {"Reputation: Warsong Outriders (Friendly)", 11000187},
    {"Reputation: Warsong Outriders (Honored)", 11000188},
    {"Reputation: Warsong Outriders (Revered)", 11000189},
    {"Reputation: Warsong Outriders (Exalted)", 11000190},
    {"Reputation: Silverwing Sentinels (Friendly)", 11000191},
    {"Reputation: Silverwing Sentinels (Honored)", 11000192},
    {"Reputation: Silverwing Sentinels (Revered)", 11000193},
    {"Reputation: Silverwing Sentinels (Exalted)", 11000194},
    {"Reputation: Alliance Forces (Friendly)", 11000195},
    {"Reputation: Alliance Forces (Honored)", 11000196},
    {"Reputation: Alliance Forces (Revered)", 11000197},
    {"Reputation: Alliance Forces (Exalted)", 11000198},
    {"Reputation: Horde Forces (Friendly)", 11000199},
    {"Reputation: Horde Forces (Honored)", 11000200},
    {"Reputation: Horde Forces (Revered)", 11000201},
    {"Reputation: Horde Forces (Exalted)", 11000202},
    {"Reputation: Darkmoon Faire (Friendly)", 11000203},
    {"Reputation: Darkmoon Faire (Honored)", 11000204},
    {"Reputation: Darkmoon Faire (Revered)", 11000205},
    {"Reputation: Darkmoon Faire (Exalted)", 11000206},
    {"Reputation: Brood of Nozdormu (Hostile)", 11000207},
    {"Reputation: Brood of Nozdormu (Unfriendly)", 11000208},
    {"Reputation: Brood of Nozdormu (Neutral)", 11000209},
    {"Reputation: Brood of Nozdormu (Friendly)", 11000210},
    {"Reputation: Brood of Nozdormu (Honored)", 11000211},
    {"Reputation: Brood of Nozdormu (Revered)", 11000212},
    {"Reputation: Brood of Nozdormu (Exalted)", 11000213},
    {"Reputation: Silvermoon City (Friendly)", 11000214},
    {"Reputation: Silvermoon City (Honored)", 11000215},
    {"Reputation: Silvermoon City (Revered)", 11000216},
    {"Reputation: Silvermoon City (Exalted)", 11000217},
    {"Reputation: Tranquillien (Friendly)", 11000218},
    {"Reputation: Tranquillien (Honored)", 11000219},
    {"Reputation: Tranquillien (Revered)", 11000220},
    {"Reputation: Tranquillien (Exalted)", 11000221},
    {"Reputation: Exodar (Friendly)", 11000222},
    {"Reputation: Exodar (Honored)", 11000223},
    {"Reputation: Exodar (Revered)", 11000224},
    {"Reputation: Exodar (Exalted)", 11000225},
    {"Reputation: The Aldor (Hostile)", 11000226},
    {"Reputation: The Aldor (Unfriendly)", 11000227},
    {"Reputation: The Aldor (Neutral)", 11000228},
    {"Reputation: The Aldor (Friendly)", 11000229},
    {"Reputation: The Aldor (Honored)", 11000230},
    {"Reputation: The Aldor (Revered)", 11000231},
    {"Reputation: The Aldor (Exalted)", 11000232},
    {"Reputation: The Consortium (Friendly)", 11000233},
    {"Reputation: The Consortium (Honored)", 11000234},
    {"Reputation: The Consortium (Revered)", 11000235},
    {"Reputation: The Consortium (Exalted)", 11000236},
    {"Reputation: The Scryers (Hostile)", 11000237},
    {"Reputation: The Scryers (Unfriendly)", 11000238},
    {"Reputation: The Scryers (Neutral)", 11000239},
    {"Reputation: The Scryers (Friendly)", 11000240},
    {"Reputation: The Scryers (Honored)", 11000241},
    {"Reputation: The Scryers (Revered)", 11000242},
    {"Reputation: The Scryers (Exalted)", 11000243},
    {"Reputation: The Sha'tar (Friendly)", 11000244},
    {"Reputation: The Sha'tar (Honored)", 11000245},
    {"Reputation: The Sha'tar (Revered)", 11000246},
    {"Reputation: The Sha'tar (Exalted)", 11000247},
    {"Reputation: Shattrath City (Friendly)", 11000248},
    {"Reputation: Shattrath City (Honored)", 11000249},
    {"Reputation: Shattrath City (Revered)", 11000250},
    {"Reputation: Shattrath City (Exalted)", 11000251},
    {"Reputation: The Mag'har (Neutral)", 11000252},
    {"Reputation: The Mag'har (Friendly)", 11000253},
    {"Reputation: The Mag'har (Honored)", 11000254},
    {"Reputation: The Mag'har (Revered)", 11000255},
    {"Reputation: The Mag'har (Exalted)", 11000256},
    {"Reputation: Cenarion Expedition (Friendly)", 11000257},
    {"Reputation: Cenarion Expedition (Honored)", 11000258},
    {"Reputation: Cenarion Expedition (Revered)", 11000259},
    {"Reputation: Cenarion Expedition (Exalted)", 11000260},
    {"Reputation: Honor Hold (Friendly)", 11000261},
    {"Reputation: Honor Hold (Honored)", 11000262},
    {"Reputation: Honor Hold (Revered)", 11000263},
    {"Reputation: Honor Hold (Exalted)", 11000264},
    {"Reputation: Thrallmar (Friendly)", 11000265},
    {"Reputation: Thrallmar (Honored)", 11000266},
    {"Reputation: Thrallmar (Revered)", 11000267},
    {"Reputation: Thrallmar (Exalted)", 11000268},
    {"Reputation: Test Faction 2 (Friendly)", 11000269},
    {"Reputation: Test Faction 2 (Honored)", 11000270},
    {"Reputation: Test Faction 2 (Revered)", 11000271},
    {"Reputation: Test Faction 2 (Exalted)", 11000272},
    {"Reputation: Test Faction 1 (Friendly)", 11000273},
    {"Reputation: Test Faction 1 (Honored)", 11000274},
    {"Reputation: Test Faction 1 (Revered)", 11000275},
    {"Reputation: Test Faction 1 (Exalted)", 11000276},
    {"Reputation: Test Faction 3 (Friendly)", 11000277},
    {"Reputation: Test Faction 3 (Honored)", 11000278},
    {"Reputation: Test Faction 3 (Revered)", 11000279},
    {"Reputation: Test Faction 3 (Exalted)", 11000280},
    {"Reputation: The Violet Eye (Friendly)", 11000281},
    {"Reputation: The Violet Eye (Honored)", 11000282},
    {"Reputation: The Violet Eye (Revered)", 11000283},
    {"Reputation: The Violet Eye (Exalted)", 11000284},
    {"Reputation: Sporeggar (Neutral)", 11000285},
    {"Reputation: Sporeggar (Friendly)", 11000286},
    {"Reputation: Sporeggar (Honored)", 11000287},
    {"Reputation: Sporeggar (Revered)", 11000288},
    {"Reputation: Sporeggar (Exalted)", 11000289},
    {"Reputation: Kurenai (Neutral)", 11000290},
    {"Reputation: Kurenai (Friendly)", 11000291},
    {"Reputation: Kurenai (Honored)", 11000292},
    {"Reputation: Kurenai (Revered)", 11000293},
    {"Reputation: Kurenai (Exalted)", 11000294},
    {"Reputation: The Burning Crusade (Friendly)", 11000295},
    {"Reputation: The Burning Crusade (Honored)", 11000296},
    {"Reputation: The Burning Crusade (Revered)", 11000297},
    {"Reputation: The Burning Crusade (Exalted)", 11000298},
    {"Reputation: Keepers of Time (Friendly)", 11000299},
    {"Reputation: Keepers of Time (Honored)", 11000300},
    {"Reputation: Keepers of Time (Revered)", 11000301},
    {"Reputation: Keepers of Time (Exalted)", 11000302},
    {"Reputation: The Scale of the Sands (Friendly)", 11000303},
    {"Reputation: The Scale of the Sands (Honored)", 11000304},
    {"Reputation: The Scale of the Sands (Revered)", 11000305},
    {"Reputation: The Scale of the Sands (Exalted)", 11000306},
    {"Reputation: Friendly, Hidden (Friendly)", 11000307},
    {"Reputation: Friendly, Hidden (Honored)", 11000308},
    {"Reputation: Friendly, Hidden (Revered)", 11000309},
    {"Reputation: Friendly, Hidden (Exalted)", 11000310},
    {"Reputation: Lower City (Friendly)", 11000311},
    {"Reputation: Lower City (Honored)", 11000312},
    {"Reputation: Lower City (Revered)", 11000313},
    {"Reputation: Lower City (Exalted)", 11000314},
    {"Reputation: Ashtongue Deathsworn (Friendly)", 11000315},
    {"Reputation: Ashtongue Deathsworn (Honored)", 11000316},
    {"Reputation: Ashtongue Deathsworn (Revered)", 11000317},
    {"Reputation: Ashtongue Deathsworn (Exalted)", 11000318},
    {"Reputation: Netherwing (Hostile)", 11000319},
    {"Reputation: Netherwing (Unfriendly)", 11000320},
    {"Reputation: Netherwing (Neutral)", 11000321},
    {"Reputation: Netherwing (Friendly)", 11000322},
    {"Reputation: Netherwing (Honored)", 11000323},
    {"Reputation: Netherwing (Revered)", 11000324},
    {"Reputation: Netherwing (Exalted)", 11000325},
    {"Reputation: Sha'tari Skyguard (Friendly)", 11000326},
    {"Reputation: Sha'tari Skyguard (Honored)", 11000327},
    {"Reputation: Sha'tari Skyguard (Revered)", 11000328},
    {"Reputation: Sha'tari Skyguard (Exalted)", 11000329},
    {"Reputation: Alliance Vanguard (Friendly)", 11000330},
    {"Reputation: Alliance Vanguard (Honored)", 11000331},
    {"Reputation: Alliance Vanguard (Revered)", 11000332},
    {"Reputation: Alliance Vanguard (Exalted)", 11000333},
    {"Reputation: Ogri'la (Friendly)", 11000334},
    {"Reputation: Ogri'la (Honored)", 11000335},
    {"Reputation: Ogri'la (Revered)", 11000336},
    {"Reputation: Ogri'la (Exalted)", 11000337},
    {"Reputation: Valiance Expedition (Friendly)", 11000338},
    {"Reputation: Valiance Expedition (Honored)", 11000339},
    {"Reputation: Valiance Expedition (Revered)", 11000340},
    {"Reputation: Valiance Expedition (Exalted)", 11000341},
    {"Reputation: Horde Expedition (Friendly)", 11000342},
    {"Reputation: Horde Expedition (Honored)", 11000343},
    {"Reputation: Horde Expedition (Revered)", 11000344},
    {"Reputation: Horde Expedition (Exalted)", 11000345},
    {"Reputation: The Taunka (Friendly)", 11000346},
    {"Reputation: The Taunka (Honored)", 11000347},
    {"Reputation: The Taunka (Revered)", 11000348},
    {"Reputation: The Taunka (Exalted)", 11000349},
    {"Reputation: The Hand of Vengeance (Friendly)", 11000350},
    {"Reputation: The Hand of Vengeance (Honored)", 11000351},
    {"Reputation: The Hand of Vengeance (Revered)", 11000352},
    {"Reputation: The Hand of Vengeance (Exalted)", 11000353},
    {"Reputation: Explorers' League (Friendly)", 11000354},
    {"Reputation: Explorers' League (Honored)", 11000355},
    {"Reputation: Explorers' League (Revered)", 11000356},
    {"Reputation: Explorers' League (Exalted)", 11000357},
    {"Reputation: The Kalu'ak (Friendly)", 11000358},
    {"Reputation: The Kalu'ak (Honored)", 11000359},
    {"Reputation: The Kalu'ak (Revered)", 11000360},
    {"Reputation: The Kalu'ak (Exalted)", 11000361},
    {"Reputation: Shattered Sun Offensive (Friendly)", 11000362},
    {"Reputation: Shattered Sun Offensive (Honored)", 11000363},
    {"Reputation: Shattered Sun Offensive (Revered)", 11000364},
    {"Reputation: Shattered Sun Offensive (Exalted)", 11000365},
    {"Reputation: REUSE (Friendly)", 11000366},
    {"Reputation: REUSE (Honored)", 11000367},
    {"Reputation: REUSE (Revered)", 11000368},
    {"Reputation: REUSE (Exalted)", 11000369},
    {"Reputation: Warsong Offensive (Friendly)", 11000370},
    {"Reputation: Warsong Offensive (Honored)", 11000371},
    {"Reputation: Warsong Offensive (Revered)", 11000372},
    {"Reputation: Warsong Offensive (Exalted)", 11000373},
    {"Reputation: Kirin Tor (Friendly)", 11000374},
    {"Reputation: Kirin Tor (Honored)", 11000375},
    {"Reputation: Kirin Tor (Revered)", 11000376},
    {"Reputation: Kirin Tor (Exalted)", 11000377},
    {"Reputation: The Wyrmrest Accord (Friendly)", 11000378},
    {"Reputation: The Wyrmrest Accord (Honored)", 11000379},
    {"Reputation: The Wyrmrest Accord (Revered)", 11000380},
    {"Reputation: The Wyrmrest Accord (Exalted)", 11000381},
    {"Reputation: The Silver Covenant (Friendly)", 11000382},
    {"Reputation: The Silver Covenant (Honored)", 11000383},
    {"Reputation: The Silver Covenant (Revered)", 11000384},
    {"Reputation: The Silver Covenant (Exalted)", 11000385},
    {"Reputation: Wrath of the Lich King (Friendly)", 11000386},
    {"Reputation: Wrath of the Lich King (Honored)", 11000387},
    {"Reputation: Wrath of the Lich King (Revered)", 11000388},
    {"Reputation: Wrath of the Lich King (Exalted)", 11000389},
    {"Reputation: Knights of the Ebon Blade (Friendly)", 11000390},
    {"Reputation: Knights of the Ebon Blade (Honored)", 11000391},
    {"Reputation: Knights of the Ebon Blade (Revered)", 11000392},
    {"Reputation: Knights of the Ebon Blade (Exalted)", 11000393},
    {"Reputation: Frenzyheart Tribe (Friendly)", 11000394},
    {"Reputation: Frenzyheart Tribe (Honored)", 11000395},
    {"Reputation: Frenzyheart Tribe (Revered)", 11000396},
    {"Reputation: Frenzyheart Tribe (Exalted)", 11000397},
    {"Reputation: The Oracles (Friendly)", 11000398},
    {"Reputation: The Oracles (Honored)", 11000399},
    {"Reputation: The Oracles (Revered)", 11000400},
    {"Reputation: The Oracles (Exalted)", 11000401},
    {"Reputation: Argent Crusade (Friendly)", 11000402},
    {"Reputation: Argent Crusade (Honored)", 11000403},
    {"Reputation: Argent Crusade (Revered)", 11000404},
    {"Reputation: Argent Crusade (Exalted)", 11000405},
    {"Reputation: Sholazar Basin (Friendly)", 11000406},
    {"Reputation: Sholazar Basin (Honored)", 11000407},
    {"Reputation: Sholazar Basin (Revered)", 11000408},
    {"Reputation: Sholazar Basin (Exalted)", 11000409},
    {"Reputation: Classic (Friendly)", 11000410},
    {"Reputation: Classic (Honored)", 11000411},
    {"Reputation: Classic (Revered)", 11000412},
    {"Reputation: Classic (Exalted)", 11000413},
    {"Reputation: The Sons of Hodir (Hostile)", 11000414},
    {"Reputation: The Sons of Hodir (Unfriendly)", 11000415},
    {"Reputation: The Sons of Hodir (Neutral)", 11000416},
    {"Reputation: The Sons of Hodir (Friendly)", 11000417},
    {"Reputation: The Sons of Hodir (Honored)", 11000418},
    {"Reputation: The Sons of Hodir (Revered)", 11000419},
    {"Reputation: The Sons of Hodir (Exalted)", 11000420},
    {"Reputation: The Sunreavers (Friendly)", 11000421},
    {"Reputation: The Sunreavers (Honored)", 11000422},
    {"Reputation: The Sunreavers (Revered)", 11000423},
    {"Reputation: The Sunreavers (Exalted)", 11000424},
    {"Reputation: The Frostborn (Friendly)", 11000425},
    {"Reputation: The Frostborn (Honored)", 11000426},
    {"Reputation: The Frostborn (Revered)", 11000427},
    {"Reputation: The Frostborn (Exalted)", 11000428},
    {"Reputation: Tranquillien Conversion (Friendly)", 11000429},
    {"Reputation: Tranquillien Conversion (Honored)", 11000430},
    {"Reputation: Tranquillien Conversion (Revered)", 11000431},
    {"Reputation: Tranquillien Conversion (Exalted)", 11000432},
    {"Reputation: Wintersaber Conversion (Friendly)", 11000433},
    {"Reputation: Wintersaber Conversion (Honored)", 11000434},
    {"Reputation: Wintersaber Conversion (Revered)", 11000435},
    {"Reputation: Wintersaber Conversion (Exalted)", 11000436},
    {"Reputation: Silver Covenant Conversion (Friendly)", 11000437},
    {"Reputation: Silver Covenant Conversion (Honored)", 11000438},
    {"Reputation: Silver Covenant Conversion (Revered)", 11000439},
    {"Reputation: Silver Covenant Conversion (Exalted)", 11000440},
    {"Reputation: Sunreavers Conversion (Friendly)", 11000441},
    {"Reputation: Sunreavers Conversion (Honored)", 11000442},
    {"Reputation: Sunreavers Conversion (Revered)", 11000443},
    {"Reputation: Sunreavers Conversion (Exalted)", 11000444},
    {"Reputation: The Ashen Verdict (Friendly)", 11000445},
    {"Reputation: The Ashen Verdict (Honored)", 11000446},
    {"Reputation: The Ashen Verdict (Revered)", 11000447},
    {"Reputation: The Ashen Verdict (Exalted)", 11000448},
};
inline std::map<std::string, uint32_t> BuildLOCATIONS()
{
    std::map<std::string, uint32_t> result;
    for (auto const& row : LOCATIONS_RAW)
        result.emplace(row.first, row.second);
    return result;
}
inline const std::map<std::string, uint32_t> LOCATIONS = BuildLOCATIONS();
inline const std::map<std::string, uint32_t> ITEMS = {};
inline constexpr std::pair<std::pair<uint32_t, uint32_t>, int64_t> FACTION_RANK_TO_LOCATION_ID_RAW[] = {
    { { 21, 4 }, 11000000 }, // "Reputation: Booty Bay (Friendly)"
    { { 21, 5 }, 11000001 }, // "Reputation: Booty Bay (Honored)"
    { { 21, 6 }, 11000002 }, // "Reputation: Booty Bay (Revered)"
    { { 21, 7 }, 11000003 }, // "Reputation: Booty Bay (Exalted)"
    { { 46, 4 }, 11000004 }, // "Reputation:  Blacksmithing - Armorsmithing (Friendly)"
    { { 46, 5 }, 11000005 }, // "Reputation:  Blacksmithing - Armorsmithing (Honored)"
    { { 46, 6 }, 11000006 }, // "Reputation:  Blacksmithing - Armorsmithing (Revered)"
    { { 46, 7 }, 11000007 }, // "Reputation:  Blacksmithing - Armorsmithing (Exalted)"
    { { 47, 4 }, 11000008 }, // "Reputation: Ironforge (Friendly)"
    { { 47, 5 }, 11000009 }, // "Reputation: Ironforge (Honored)"
    { { 47, 6 }, 11000010 }, // "Reputation: Ironforge (Revered)"
    { { 47, 7 }, 11000011 }, // "Reputation: Ironforge (Exalted)"
    { { 54, 4 }, 11000012 }, // "Reputation: Gnomeregan Exiles (Friendly)"
    { { 54, 5 }, 11000013 }, // "Reputation: Gnomeregan Exiles (Honored)"
    { { 54, 6 }, 11000014 }, // "Reputation: Gnomeregan Exiles (Revered)"
    { { 54, 7 }, 11000015 }, // "Reputation: Gnomeregan Exiles (Exalted)"
    { { 59, 4 }, 11000016 }, // "Reputation: Thorium Brotherhood (Friendly)"
    { { 59, 5 }, 11000017 }, // "Reputation: Thorium Brotherhood (Honored)"
    { { 59, 6 }, 11000018 }, // "Reputation: Thorium Brotherhood (Revered)"
    { { 59, 7 }, 11000019 }, // "Reputation: Thorium Brotherhood (Exalted)"
    { { 67, 4 }, 11000020 }, // "Reputation: Horde (Friendly)"
    { { 67, 5 }, 11000021 }, // "Reputation: Horde (Honored)"
    { { 67, 6 }, 11000022 }, // "Reputation: Horde (Revered)"
    { { 67, 7 }, 11000023 }, // "Reputation: Horde (Exalted)"
    { { 68, 4 }, 11000024 }, // "Reputation: Undercity (Friendly)"
    { { 68, 5 }, 11000025 }, // "Reputation: Undercity (Honored)"
    { { 68, 6 }, 11000026 }, // "Reputation: Undercity (Revered)"
    { { 68, 7 }, 11000027 }, // "Reputation: Undercity (Exalted)"
    { { 69, 4 }, 11000028 }, // "Reputation: Darnassus (Friendly)"
    { { 69, 5 }, 11000029 }, // "Reputation: Darnassus (Honored)"
    { { 69, 6 }, 11000030 }, // "Reputation: Darnassus (Revered)"
    { { 69, 7 }, 11000031 }, // "Reputation: Darnassus (Exalted)"
    { { 70, 1 }, 11000032 }, // "Reputation: Syndicate (Hostile)"
    { { 70, 2 }, 11000033 }, // "Reputation: Syndicate (Unfriendly)"
    { { 70, 3 }, 11000034 }, // "Reputation: Syndicate (Neutral)"
    { { 70, 4 }, 11000035 }, // "Reputation: Syndicate (Friendly)"
    { { 70, 5 }, 11000036 }, // "Reputation: Syndicate (Honored)"
    { { 70, 6 }, 11000037 }, // "Reputation: Syndicate (Revered)"
    { { 70, 7 }, 11000038 }, // "Reputation: Syndicate (Exalted)"
    { { 72, 4 }, 11000039 }, // "Reputation: Stormwind (Friendly)"
    { { 72, 5 }, 11000040 }, // "Reputation: Stormwind (Honored)"
    { { 72, 6 }, 11000041 }, // "Reputation: Stormwind (Revered)"
    { { 72, 7 }, 11000042 }, // "Reputation: Stormwind (Exalted)"
    { { 76, 4 }, 11000043 }, // "Reputation: Orgrimmar (Friendly)"
    { { 76, 5 }, 11000044 }, // "Reputation: Orgrimmar (Honored)"
    { { 76, 6 }, 11000045 }, // "Reputation: Orgrimmar (Revered)"
    { { 76, 7 }, 11000046 }, // "Reputation: Orgrimmar (Exalted)"
    { { 81, 4 }, 11000047 }, // "Reputation: Thunder Bluff (Friendly)"
    { { 81, 5 }, 11000048 }, // "Reputation: Thunder Bluff (Honored)"
    { { 81, 6 }, 11000049 }, // "Reputation: Thunder Bluff (Revered)"
    { { 81, 7 }, 11000050 }, // "Reputation: Thunder Bluff (Exalted)"
    { { 83, 4 }, 11000051 }, // "Reputation:  Leatherworking - Elemental (Friendly)"
    { { 83, 5 }, 11000052 }, // "Reputation:  Leatherworking - Elemental (Honored)"
    { { 83, 6 }, 11000053 }, // "Reputation:  Leatherworking - Elemental (Revered)"
    { { 83, 7 }, 11000054 }, // "Reputation:  Leatherworking - Elemental (Exalted)"
    { { 86, 4 }, 11000055 }, // "Reputation:  Leatherworking - Dragonscale (Friendly)"
    { { 86, 5 }, 11000056 }, // "Reputation:  Leatherworking - Dragonscale (Honored)"
    { { 86, 6 }, 11000057 }, // "Reputation:  Leatherworking - Dragonscale (Revered)"
    { { 86, 7 }, 11000058 }, // "Reputation:  Leatherworking - Dragonscale (Exalted)"
    { { 87, 1 }, 11000059 }, // "Reputation: Bloodsail Buccaneers (Hostile)"
    { { 87, 2 }, 11000060 }, // "Reputation: Bloodsail Buccaneers (Unfriendly)"
    { { 87, 3 }, 11000061 }, // "Reputation: Bloodsail Buccaneers (Neutral)"
    { { 87, 4 }, 11000062 }, // "Reputation: Bloodsail Buccaneers (Friendly)"
    { { 87, 5 }, 11000063 }, // "Reputation: Bloodsail Buccaneers (Honored)"
    { { 87, 6 }, 11000064 }, // "Reputation: Bloodsail Buccaneers (Revered)"
    { { 87, 7 }, 11000065 }, // "Reputation: Bloodsail Buccaneers (Exalted)"
    { { 92, 4 }, 11000066 }, // "Reputation: Gelkis Clan Centaur (Friendly)"
    { { 92, 5 }, 11000067 }, // "Reputation: Gelkis Clan Centaur (Honored)"
    { { 92, 6 }, 11000068 }, // "Reputation: Gelkis Clan Centaur (Revered)"
    { { 92, 7 }, 11000069 }, // "Reputation: Gelkis Clan Centaur (Exalted)"
    { { 93, 4 }, 11000070 }, // "Reputation: Magram Clan Centaur (Friendly)"
    { { 93, 5 }, 11000071 }, // "Reputation: Magram Clan Centaur (Honored)"
    { { 93, 6 }, 11000072 }, // "Reputation: Magram Clan Centaur (Revered)"
    { { 93, 7 }, 11000073 }, // "Reputation: Magram Clan Centaur (Exalted)"
    { { 169, 4 }, 11000074 }, // "Reputation: Steamwheedle Cartel (Friendly)"
    { { 169, 5 }, 11000075 }, // "Reputation: Steamwheedle Cartel (Honored)"
    { { 169, 6 }, 11000076 }, // "Reputation: Steamwheedle Cartel (Revered)"
    { { 169, 7 }, 11000077 }, // "Reputation: Steamwheedle Cartel (Exalted)"
    { { 270, 4 }, 11000078 }, // "Reputation: Zandalar Tribe (Friendly)"
    { { 270, 5 }, 11000079 }, // "Reputation: Zandalar Tribe (Honored)"
    { { 270, 6 }, 11000080 }, // "Reputation: Zandalar Tribe (Revered)"
    { { 270, 7 }, 11000081 }, // "Reputation: Zandalar Tribe (Exalted)"
    { { 289, 4 }, 11000082 }, // "Reputation:  Blacksmithing - Weaponsmithing (Friendly)"
    { { 289, 5 }, 11000083 }, // "Reputation:  Blacksmithing - Weaponsmithing (Honored)"
    { { 289, 6 }, 11000084 }, // "Reputation:  Blacksmithing - Weaponsmithing (Revered)"
    { { 289, 7 }, 11000085 }, // "Reputation:  Blacksmithing - Weaponsmithing (Exalted)"
    { { 349, 4 }, 11000086 }, // "Reputation: Ravenholdt (Friendly)"
    { { 349, 5 }, 11000087 }, // "Reputation: Ravenholdt (Honored)"
    { { 349, 6 }, 11000088 }, // "Reputation: Ravenholdt (Revered)"
    { { 349, 7 }, 11000089 }, // "Reputation: Ravenholdt (Exalted)"
    { { 369, 4 }, 11000090 }, // "Reputation: Gadgetzan (Friendly)"
    { { 369, 5 }, 11000091 }, // "Reputation: Gadgetzan (Honored)"
    { { 369, 6 }, 11000092 }, // "Reputation: Gadgetzan (Revered)"
    { { 369, 7 }, 11000093 }, // "Reputation: Gadgetzan (Exalted)"
    { { 469, 4 }, 11000094 }, // "Reputation: Alliance (Friendly)"
    { { 469, 5 }, 11000095 }, // "Reputation: Alliance (Honored)"
    { { 469, 6 }, 11000096 }, // "Reputation: Alliance (Revered)"
    { { 469, 7 }, 11000097 }, // "Reputation: Alliance (Exalted)"
    { { 470, 4 }, 11000098 }, // "Reputation: Ratchet (Friendly)"
    { { 470, 5 }, 11000099 }, // "Reputation: Ratchet (Honored)"
    { { 470, 6 }, 11000100 }, // "Reputation: Ratchet (Revered)"
    { { 470, 7 }, 11000101 }, // "Reputation: Ratchet (Exalted)"
    { { 471, 4 }, 11000102 }, // "Reputation: Wildhammer Clan (Friendly)"
    { { 471, 5 }, 11000103 }, // "Reputation: Wildhammer Clan (Honored)"
    { { 471, 6 }, 11000104 }, // "Reputation: Wildhammer Clan (Revered)"
    { { 471, 7 }, 11000105 }, // "Reputation: Wildhammer Clan (Exalted)"
    { { 509, 4 }, 11000106 }, // "Reputation: The League of Arathor (Friendly)"
    { { 509, 5 }, 11000107 }, // "Reputation: The League of Arathor (Honored)"
    { { 509, 6 }, 11000108 }, // "Reputation: The League of Arathor (Revered)"
    { { 509, 7 }, 11000109 }, // "Reputation: The League of Arathor (Exalted)"
    { { 510, 4 }, 11000110 }, // "Reputation: The Defilers (Friendly)"
    { { 510, 5 }, 11000111 }, // "Reputation: The Defilers (Honored)"
    { { 510, 6 }, 11000112 }, // "Reputation: The Defilers (Revered)"
    { { 510, 7 }, 11000113 }, // "Reputation: The Defilers (Exalted)"
    { { 529, 4 }, 11000114 }, // "Reputation: Argent Dawn (Friendly)"
    { { 529, 5 }, 11000115 }, // "Reputation: Argent Dawn (Honored)"
    { { 529, 6 }, 11000116 }, // "Reputation: Argent Dawn (Revered)"
    { { 529, 7 }, 11000117 }, // "Reputation: Argent Dawn (Exalted)"
    { { 530, 4 }, 11000118 }, // "Reputation: Darkspear Trolls (Friendly)"
    { { 530, 5 }, 11000119 }, // "Reputation: Darkspear Trolls (Honored)"
    { { 530, 6 }, 11000120 }, // "Reputation: Darkspear Trolls (Revered)"
    { { 530, 7 }, 11000121 }, // "Reputation: Darkspear Trolls (Exalted)"
    { { 549, 4 }, 11000122 }, // "Reputation:  Leatherworking - Tribal (Friendly)"
    { { 549, 5 }, 11000123 }, // "Reputation:  Leatherworking - Tribal (Honored)"
    { { 549, 6 }, 11000124 }, // "Reputation:  Leatherworking - Tribal (Revered)"
    { { 549, 7 }, 11000125 }, // "Reputation:  Leatherworking - Tribal (Exalted)"
    { { 550, 4 }, 11000126 }, // "Reputation:  Engineering - Goblin (Friendly)"
    { { 550, 5 }, 11000127 }, // "Reputation:  Engineering - Goblin (Honored)"
    { { 550, 6 }, 11000128 }, // "Reputation:  Engineering - Goblin (Revered)"
    { { 550, 7 }, 11000129 }, // "Reputation:  Engineering - Goblin (Exalted)"
    { { 551, 4 }, 11000130 }, // "Reputation:  Engineering - Gnome (Friendly)"
    { { 551, 5 }, 11000131 }, // "Reputation:  Engineering - Gnome (Honored)"
    { { 551, 6 }, 11000132 }, // "Reputation:  Engineering - Gnome (Revered)"
    { { 551, 7 }, 11000133 }, // "Reputation:  Engineering - Gnome (Exalted)"
    { { 569, 4 }, 11000134 }, // "Reputation:  Blacksmithing - Hammersmithing (Friendly)"
    { { 569, 5 }, 11000135 }, // "Reputation:  Blacksmithing - Hammersmithing (Honored)"
    { { 569, 6 }, 11000136 }, // "Reputation:  Blacksmithing - Hammersmithing (Revered)"
    { { 569, 7 }, 11000137 }, // "Reputation:  Blacksmithing - Hammersmithing (Exalted)"
    { { 570, 4 }, 11000138 }, // "Reputation:  Blacksmithing - Axesmithing (Friendly)"
    { { 570, 5 }, 11000139 }, // "Reputation:  Blacksmithing - Axesmithing (Honored)"
    { { 570, 6 }, 11000140 }, // "Reputation:  Blacksmithing - Axesmithing (Revered)"
    { { 570, 7 }, 11000141 }, // "Reputation:  Blacksmithing - Axesmithing (Exalted)"
    { { 571, 4 }, 11000142 }, // "Reputation:  Blacksmithing - Swordsmithing (Friendly)"
    { { 571, 5 }, 11000143 }, // "Reputation:  Blacksmithing - Swordsmithing (Honored)"
    { { 571, 6 }, 11000144 }, // "Reputation:  Blacksmithing - Swordsmithing (Revered)"
    { { 571, 7 }, 11000145 }, // "Reputation:  Blacksmithing - Swordsmithing (Exalted)"
    { { 574, 4 }, 11000146 }, // "Reputation: Caer Darrow (Friendly)"
    { { 574, 5 }, 11000147 }, // "Reputation: Caer Darrow (Honored)"
    { { 574, 6 }, 11000148 }, // "Reputation: Caer Darrow (Revered)"
    { { 574, 7 }, 11000149 }, // "Reputation: Caer Darrow (Exalted)"
    { { 576, 2 }, 11000150 }, // "Reputation: Timbermaw Hold (Unfriendly)"
    { { 576, 3 }, 11000151 }, // "Reputation: Timbermaw Hold (Neutral)"
    { { 576, 4 }, 11000152 }, // "Reputation: Timbermaw Hold (Friendly)"
    { { 576, 5 }, 11000153 }, // "Reputation: Timbermaw Hold (Honored)"
    { { 576, 6 }, 11000154 }, // "Reputation: Timbermaw Hold (Revered)"
    { { 576, 7 }, 11000155 }, // "Reputation: Timbermaw Hold (Exalted)"
    { { 577, 4 }, 11000156 }, // "Reputation: Everlook (Friendly)"
    { { 577, 5 }, 11000157 }, // "Reputation: Everlook (Honored)"
    { { 577, 6 }, 11000158 }, // "Reputation: Everlook (Revered)"
    { { 577, 7 }, 11000159 }, // "Reputation: Everlook (Exalted)"
    { { 589, 1 }, 11000160 }, // "Reputation: Wintersaber Trainers (Hostile)"
    { { 589, 2 }, 11000161 }, // "Reputation: Wintersaber Trainers (Unfriendly)"
    { { 589, 3 }, 11000162 }, // "Reputation: Wintersaber Trainers (Neutral)"
    { { 589, 4 }, 11000163 }, // "Reputation: Wintersaber Trainers (Friendly)"
    { { 589, 5 }, 11000164 }, // "Reputation: Wintersaber Trainers (Honored)"
    { { 589, 6 }, 11000165 }, // "Reputation: Wintersaber Trainers (Revered)"
    { { 589, 7 }, 11000166 }, // "Reputation: Wintersaber Trainers (Exalted)"
    { { 609, 4 }, 11000167 }, // "Reputation: Cenarion Circle (Friendly)"
    { { 609, 5 }, 11000168 }, // "Reputation: Cenarion Circle (Honored)"
    { { 609, 6 }, 11000169 }, // "Reputation: Cenarion Circle (Revered)"
    { { 609, 7 }, 11000170 }, // "Reputation: Cenarion Circle (Exalted)"
    { { 729, 4 }, 11000171 }, // "Reputation: Frostwolf Clan (Friendly)"
    { { 729, 5 }, 11000172 }, // "Reputation: Frostwolf Clan (Honored)"
    { { 729, 6 }, 11000173 }, // "Reputation: Frostwolf Clan (Revered)"
    { { 729, 7 }, 11000174 }, // "Reputation: Frostwolf Clan (Exalted)"
    { { 730, 4 }, 11000175 }, // "Reputation: Stormpike Guard (Friendly)"
    { { 730, 5 }, 11000176 }, // "Reputation: Stormpike Guard (Honored)"
    { { 730, 6 }, 11000177 }, // "Reputation: Stormpike Guard (Revered)"
    { { 730, 7 }, 11000178 }, // "Reputation: Stormpike Guard (Exalted)"
    { { 749, 4 }, 11000179 }, // "Reputation: Hydraxian Waterlords (Friendly)"
    { { 749, 5 }, 11000180 }, // "Reputation: Hydraxian Waterlords (Honored)"
    { { 749, 6 }, 11000181 }, // "Reputation: Hydraxian Waterlords (Revered)"
    { { 749, 7 }, 11000182 }, // "Reputation: Hydraxian Waterlords (Exalted)"
    { { 809, 4 }, 11000183 }, // "Reputation: Shen'dralar (Friendly)"
    { { 809, 5 }, 11000184 }, // "Reputation: Shen'dralar (Honored)"
    { { 809, 6 }, 11000185 }, // "Reputation: Shen'dralar (Revered)"
    { { 809, 7 }, 11000186 }, // "Reputation: Shen'dralar (Exalted)"
    { { 889, 4 }, 11000187 }, // "Reputation: Warsong Outriders (Friendly)"
    { { 889, 5 }, 11000188 }, // "Reputation: Warsong Outriders (Honored)"
    { { 889, 6 }, 11000189 }, // "Reputation: Warsong Outriders (Revered)"
    { { 889, 7 }, 11000190 }, // "Reputation: Warsong Outriders (Exalted)"
    { { 890, 4 }, 11000191 }, // "Reputation: Silverwing Sentinels (Friendly)"
    { { 890, 5 }, 11000192 }, // "Reputation: Silverwing Sentinels (Honored)"
    { { 890, 6 }, 11000193 }, // "Reputation: Silverwing Sentinels (Revered)"
    { { 890, 7 }, 11000194 }, // "Reputation: Silverwing Sentinels (Exalted)"
    { { 891, 4 }, 11000195 }, // "Reputation: Alliance Forces (Friendly)"
    { { 891, 5 }, 11000196 }, // "Reputation: Alliance Forces (Honored)"
    { { 891, 6 }, 11000197 }, // "Reputation: Alliance Forces (Revered)"
    { { 891, 7 }, 11000198 }, // "Reputation: Alliance Forces (Exalted)"
    { { 892, 4 }, 11000199 }, // "Reputation: Horde Forces (Friendly)"
    { { 892, 5 }, 11000200 }, // "Reputation: Horde Forces (Honored)"
    { { 892, 6 }, 11000201 }, // "Reputation: Horde Forces (Revered)"
    { { 892, 7 }, 11000202 }, // "Reputation: Horde Forces (Exalted)"
    { { 909, 4 }, 11000203 }, // "Reputation: Darkmoon Faire (Friendly)"
    { { 909, 5 }, 11000204 }, // "Reputation: Darkmoon Faire (Honored)"
    { { 909, 6 }, 11000205 }, // "Reputation: Darkmoon Faire (Revered)"
    { { 909, 7 }, 11000206 }, // "Reputation: Darkmoon Faire (Exalted)"
    { { 910, 1 }, 11000207 }, // "Reputation: Brood of Nozdormu (Hostile)"
    { { 910, 2 }, 11000208 }, // "Reputation: Brood of Nozdormu (Unfriendly)"
    { { 910, 3 }, 11000209 }, // "Reputation: Brood of Nozdormu (Neutral)"
    { { 910, 4 }, 11000210 }, // "Reputation: Brood of Nozdormu (Friendly)"
    { { 910, 5 }, 11000211 }, // "Reputation: Brood of Nozdormu (Honored)"
    { { 910, 6 }, 11000212 }, // "Reputation: Brood of Nozdormu (Revered)"
    { { 910, 7 }, 11000213 }, // "Reputation: Brood of Nozdormu (Exalted)"
    { { 911, 4 }, 11000214 }, // "Reputation: Silvermoon City (Friendly)"
    { { 911, 5 }, 11000215 }, // "Reputation: Silvermoon City (Honored)"
    { { 911, 6 }, 11000216 }, // "Reputation: Silvermoon City (Revered)"
    { { 911, 7 }, 11000217 }, // "Reputation: Silvermoon City (Exalted)"
    { { 922, 4 }, 11000218 }, // "Reputation: Tranquillien (Friendly)"
    { { 922, 5 }, 11000219 }, // "Reputation: Tranquillien (Honored)"
    { { 922, 6 }, 11000220 }, // "Reputation: Tranquillien (Revered)"
    { { 922, 7 }, 11000221 }, // "Reputation: Tranquillien (Exalted)"
    { { 930, 4 }, 11000222 }, // "Reputation: Exodar (Friendly)"
    { { 930, 5 }, 11000223 }, // "Reputation: Exodar (Honored)"
    { { 930, 6 }, 11000224 }, // "Reputation: Exodar (Revered)"
    { { 930, 7 }, 11000225 }, // "Reputation: Exodar (Exalted)"
    { { 932, 1 }, 11000226 }, // "Reputation: The Aldor (Hostile)"
    { { 932, 2 }, 11000227 }, // "Reputation: The Aldor (Unfriendly)"
    { { 932, 3 }, 11000228 }, // "Reputation: The Aldor (Neutral)"
    { { 932, 4 }, 11000229 }, // "Reputation: The Aldor (Friendly)"
    { { 932, 5 }, 11000230 }, // "Reputation: The Aldor (Honored)"
    { { 932, 6 }, 11000231 }, // "Reputation: The Aldor (Revered)"
    { { 932, 7 }, 11000232 }, // "Reputation: The Aldor (Exalted)"
    { { 933, 4 }, 11000233 }, // "Reputation: The Consortium (Friendly)"
    { { 933, 5 }, 11000234 }, // "Reputation: The Consortium (Honored)"
    { { 933, 6 }, 11000235 }, // "Reputation: The Consortium (Revered)"
    { { 933, 7 }, 11000236 }, // "Reputation: The Consortium (Exalted)"
    { { 934, 1 }, 11000237 }, // "Reputation: The Scryers (Hostile)"
    { { 934, 2 }, 11000238 }, // "Reputation: The Scryers (Unfriendly)"
    { { 934, 3 }, 11000239 }, // "Reputation: The Scryers (Neutral)"
    { { 934, 4 }, 11000240 }, // "Reputation: The Scryers (Friendly)"
    { { 934, 5 }, 11000241 }, // "Reputation: The Scryers (Honored)"
    { { 934, 6 }, 11000242 }, // "Reputation: The Scryers (Revered)"
    { { 934, 7 }, 11000243 }, // "Reputation: The Scryers (Exalted)"
    { { 935, 4 }, 11000244 }, // "Reputation: The Sha'tar (Friendly)"
    { { 935, 5 }, 11000245 }, // "Reputation: The Sha'tar (Honored)"
    { { 935, 6 }, 11000246 }, // "Reputation: The Sha'tar (Revered)"
    { { 935, 7 }, 11000247 }, // "Reputation: The Sha'tar (Exalted)"
    { { 936, 4 }, 11000248 }, // "Reputation: Shattrath City (Friendly)"
    { { 936, 5 }, 11000249 }, // "Reputation: Shattrath City (Honored)"
    { { 936, 6 }, 11000250 }, // "Reputation: Shattrath City (Revered)"
    { { 936, 7 }, 11000251 }, // "Reputation: Shattrath City (Exalted)"
    { { 941, 3 }, 11000252 }, // "Reputation: The Mag'har (Neutral)"
    { { 941, 4 }, 11000253 }, // "Reputation: The Mag'har (Friendly)"
    { { 941, 5 }, 11000254 }, // "Reputation: The Mag'har (Honored)"
    { { 941, 6 }, 11000255 }, // "Reputation: The Mag'har (Revered)"
    { { 941, 7 }, 11000256 }, // "Reputation: The Mag'har (Exalted)"
    { { 942, 4 }, 11000257 }, // "Reputation: Cenarion Expedition (Friendly)"
    { { 942, 5 }, 11000258 }, // "Reputation: Cenarion Expedition (Honored)"
    { { 942, 6 }, 11000259 }, // "Reputation: Cenarion Expedition (Revered)"
    { { 942, 7 }, 11000260 }, // "Reputation: Cenarion Expedition (Exalted)"
    { { 946, 4 }, 11000261 }, // "Reputation: Honor Hold (Friendly)"
    { { 946, 5 }, 11000262 }, // "Reputation: Honor Hold (Honored)"
    { { 946, 6 }, 11000263 }, // "Reputation: Honor Hold (Revered)"
    { { 946, 7 }, 11000264 }, // "Reputation: Honor Hold (Exalted)"
    { { 947, 4 }, 11000265 }, // "Reputation: Thrallmar (Friendly)"
    { { 947, 5 }, 11000266 }, // "Reputation: Thrallmar (Honored)"
    { { 947, 6 }, 11000267 }, // "Reputation: Thrallmar (Revered)"
    { { 947, 7 }, 11000268 }, // "Reputation: Thrallmar (Exalted)"
    { { 948, 4 }, 11000269 }, // "Reputation: Test Faction 2 (Friendly)"
    { { 948, 5 }, 11000270 }, // "Reputation: Test Faction 2 (Honored)"
    { { 948, 6 }, 11000271 }, // "Reputation: Test Faction 2 (Revered)"
    { { 948, 7 }, 11000272 }, // "Reputation: Test Faction 2 (Exalted)"
    { { 949, 4 }, 11000273 }, // "Reputation: Test Faction 1 (Friendly)"
    { { 949, 5 }, 11000274 }, // "Reputation: Test Faction 1 (Honored)"
    { { 949, 6 }, 11000275 }, // "Reputation: Test Faction 1 (Revered)"
    { { 949, 7 }, 11000276 }, // "Reputation: Test Faction 1 (Exalted)"
    { { 952, 4 }, 11000277 }, // "Reputation: Test Faction 3 (Friendly)"
    { { 952, 5 }, 11000278 }, // "Reputation: Test Faction 3 (Honored)"
    { { 952, 6 }, 11000279 }, // "Reputation: Test Faction 3 (Revered)"
    { { 952, 7 }, 11000280 }, // "Reputation: Test Faction 3 (Exalted)"
    { { 967, 4 }, 11000281 }, // "Reputation: The Violet Eye (Friendly)"
    { { 967, 5 }, 11000282 }, // "Reputation: The Violet Eye (Honored)"
    { { 967, 6 }, 11000283 }, // "Reputation: The Violet Eye (Revered)"
    { { 967, 7 }, 11000284 }, // "Reputation: The Violet Eye (Exalted)"
    { { 970, 3 }, 11000285 }, // "Reputation: Sporeggar (Neutral)"
    { { 970, 4 }, 11000286 }, // "Reputation: Sporeggar (Friendly)"
    { { 970, 5 }, 11000287 }, // "Reputation: Sporeggar (Honored)"
    { { 970, 6 }, 11000288 }, // "Reputation: Sporeggar (Revered)"
    { { 970, 7 }, 11000289 }, // "Reputation: Sporeggar (Exalted)"
    { { 978, 3 }, 11000290 }, // "Reputation: Kurenai (Neutral)"
    { { 978, 4 }, 11000291 }, // "Reputation: Kurenai (Friendly)"
    { { 978, 5 }, 11000292 }, // "Reputation: Kurenai (Honored)"
    { { 978, 6 }, 11000293 }, // "Reputation: Kurenai (Revered)"
    { { 978, 7 }, 11000294 }, // "Reputation: Kurenai (Exalted)"
    { { 980, 4 }, 11000295 }, // "Reputation: The Burning Crusade (Friendly)"
    { { 980, 5 }, 11000296 }, // "Reputation: The Burning Crusade (Honored)"
    { { 980, 6 }, 11000297 }, // "Reputation: The Burning Crusade (Revered)"
    { { 980, 7 }, 11000298 }, // "Reputation: The Burning Crusade (Exalted)"
    { { 989, 4 }, 11000299 }, // "Reputation: Keepers of Time (Friendly)"
    { { 989, 5 }, 11000300 }, // "Reputation: Keepers of Time (Honored)"
    { { 989, 6 }, 11000301 }, // "Reputation: Keepers of Time (Revered)"
    { { 989, 7 }, 11000302 }, // "Reputation: Keepers of Time (Exalted)"
    { { 990, 4 }, 11000303 }, // "Reputation: The Scale of the Sands (Friendly)"
    { { 990, 5 }, 11000304 }, // "Reputation: The Scale of the Sands (Honored)"
    { { 990, 6 }, 11000305 }, // "Reputation: The Scale of the Sands (Revered)"
    { { 990, 7 }, 11000306 }, // "Reputation: The Scale of the Sands (Exalted)"
    { { 1005, 4 }, 11000307 }, // "Reputation: Friendly, Hidden (Friendly)"
    { { 1005, 5 }, 11000308 }, // "Reputation: Friendly, Hidden (Honored)"
    { { 1005, 6 }, 11000309 }, // "Reputation: Friendly, Hidden (Revered)"
    { { 1005, 7 }, 11000310 }, // "Reputation: Friendly, Hidden (Exalted)"
    { { 1011, 4 }, 11000311 }, // "Reputation: Lower City (Friendly)"
    { { 1011, 5 }, 11000312 }, // "Reputation: Lower City (Honored)"
    { { 1011, 6 }, 11000313 }, // "Reputation: Lower City (Revered)"
    { { 1011, 7 }, 11000314 }, // "Reputation: Lower City (Exalted)"
    { { 1012, 4 }, 11000315 }, // "Reputation: Ashtongue Deathsworn (Friendly)"
    { { 1012, 5 }, 11000316 }, // "Reputation: Ashtongue Deathsworn (Honored)"
    { { 1012, 6 }, 11000317 }, // "Reputation: Ashtongue Deathsworn (Revered)"
    { { 1012, 7 }, 11000318 }, // "Reputation: Ashtongue Deathsworn (Exalted)"
    { { 1015, 1 }, 11000319 }, // "Reputation: Netherwing (Hostile)"
    { { 1015, 2 }, 11000320 }, // "Reputation: Netherwing (Unfriendly)"
    { { 1015, 3 }, 11000321 }, // "Reputation: Netherwing (Neutral)"
    { { 1015, 4 }, 11000322 }, // "Reputation: Netherwing (Friendly)"
    { { 1015, 5 }, 11000323 }, // "Reputation: Netherwing (Honored)"
    { { 1015, 6 }, 11000324 }, // "Reputation: Netherwing (Revered)"
    { { 1015, 7 }, 11000325 }, // "Reputation: Netherwing (Exalted)"
    { { 1031, 4 }, 11000326 }, // "Reputation: Sha'tari Skyguard (Friendly)"
    { { 1031, 5 }, 11000327 }, // "Reputation: Sha'tari Skyguard (Honored)"
    { { 1031, 6 }, 11000328 }, // "Reputation: Sha'tari Skyguard (Revered)"
    { { 1031, 7 }, 11000329 }, // "Reputation: Sha'tari Skyguard (Exalted)"
    { { 1037, 4 }, 11000330 }, // "Reputation: Alliance Vanguard (Friendly)"
    { { 1037, 5 }, 11000331 }, // "Reputation: Alliance Vanguard (Honored)"
    { { 1037, 6 }, 11000332 }, // "Reputation: Alliance Vanguard (Revered)"
    { { 1037, 7 }, 11000333 }, // "Reputation: Alliance Vanguard (Exalted)"
    { { 1038, 4 }, 11000334 }, // "Reputation: Ogri'la (Friendly)"
    { { 1038, 5 }, 11000335 }, // "Reputation: Ogri'la (Honored)"
    { { 1038, 6 }, 11000336 }, // "Reputation: Ogri'la (Revered)"
    { { 1038, 7 }, 11000337 }, // "Reputation: Ogri'la (Exalted)"
    { { 1050, 4 }, 11000338 }, // "Reputation: Valiance Expedition (Friendly)"
    { { 1050, 5 }, 11000339 }, // "Reputation: Valiance Expedition (Honored)"
    { { 1050, 6 }, 11000340 }, // "Reputation: Valiance Expedition (Revered)"
    { { 1050, 7 }, 11000341 }, // "Reputation: Valiance Expedition (Exalted)"
    { { 1052, 4 }, 11000342 }, // "Reputation: Horde Expedition (Friendly)"
    { { 1052, 5 }, 11000343 }, // "Reputation: Horde Expedition (Honored)"
    { { 1052, 6 }, 11000344 }, // "Reputation: Horde Expedition (Revered)"
    { { 1052, 7 }, 11000345 }, // "Reputation: Horde Expedition (Exalted)"
    { { 1064, 4 }, 11000346 }, // "Reputation: The Taunka (Friendly)"
    { { 1064, 5 }, 11000347 }, // "Reputation: The Taunka (Honored)"
    { { 1064, 6 }, 11000348 }, // "Reputation: The Taunka (Revered)"
    { { 1064, 7 }, 11000349 }, // "Reputation: The Taunka (Exalted)"
    { { 1067, 4 }, 11000350 }, // "Reputation: The Hand of Vengeance (Friendly)"
    { { 1067, 5 }, 11000351 }, // "Reputation: The Hand of Vengeance (Honored)"
    { { 1067, 6 }, 11000352 }, // "Reputation: The Hand of Vengeance (Revered)"
    { { 1067, 7 }, 11000353 }, // "Reputation: The Hand of Vengeance (Exalted)"
    { { 1068, 4 }, 11000354 }, // "Reputation: Explorers' League (Friendly)"
    { { 1068, 5 }, 11000355 }, // "Reputation: Explorers' League (Honored)"
    { { 1068, 6 }, 11000356 }, // "Reputation: Explorers' League (Revered)"
    { { 1068, 7 }, 11000357 }, // "Reputation: Explorers' League (Exalted)"
    { { 1073, 4 }, 11000358 }, // "Reputation: The Kalu'ak (Friendly)"
    { { 1073, 5 }, 11000359 }, // "Reputation: The Kalu'ak (Honored)"
    { { 1073, 6 }, 11000360 }, // "Reputation: The Kalu'ak (Revered)"
    { { 1073, 7 }, 11000361 }, // "Reputation: The Kalu'ak (Exalted)"
    { { 1077, 4 }, 11000362 }, // "Reputation: Shattered Sun Offensive (Friendly)"
    { { 1077, 5 }, 11000363 }, // "Reputation: Shattered Sun Offensive (Honored)"
    { { 1077, 6 }, 11000364 }, // "Reputation: Shattered Sun Offensive (Revered)"
    { { 1077, 7 }, 11000365 }, // "Reputation: Shattered Sun Offensive (Exalted)"
    { { 1082, 4 }, 11000366 }, // "Reputation: REUSE (Friendly)"
    { { 1082, 5 }, 11000367 }, // "Reputation: REUSE (Honored)"
    { { 1082, 6 }, 11000368 }, // "Reputation: REUSE (Revered)"
    { { 1082, 7 }, 11000369 }, // "Reputation: REUSE (Exalted)"
    { { 1085, 4 }, 11000370 }, // "Reputation: Warsong Offensive (Friendly)"
    { { 1085, 5 }, 11000371 }, // "Reputation: Warsong Offensive (Honored)"
    { { 1085, 6 }, 11000372 }, // "Reputation: Warsong Offensive (Revered)"
    { { 1085, 7 }, 11000373 }, // "Reputation: Warsong Offensive (Exalted)"
    { { 1090, 4 }, 11000374 }, // "Reputation: Kirin Tor (Friendly)"
    { { 1090, 5 }, 11000375 }, // "Reputation: Kirin Tor (Honored)"
    { { 1090, 6 }, 11000376 }, // "Reputation: Kirin Tor (Revered)"
    { { 1090, 7 }, 11000377 }, // "Reputation: Kirin Tor (Exalted)"
    { { 1091, 4 }, 11000378 }, // "Reputation: The Wyrmrest Accord (Friendly)"
    { { 1091, 5 }, 11000379 }, // "Reputation: The Wyrmrest Accord (Honored)"
    { { 1091, 6 }, 11000380 }, // "Reputation: The Wyrmrest Accord (Revered)"
    { { 1091, 7 }, 11000381 }, // "Reputation: The Wyrmrest Accord (Exalted)"
    { { 1094, 4 }, 11000382 }, // "Reputation: The Silver Covenant (Friendly)"
    { { 1094, 5 }, 11000383 }, // "Reputation: The Silver Covenant (Honored)"
    { { 1094, 6 }, 11000384 }, // "Reputation: The Silver Covenant (Revered)"
    { { 1094, 7 }, 11000385 }, // "Reputation: The Silver Covenant (Exalted)"
    { { 1097, 4 }, 11000386 }, // "Reputation: Wrath of the Lich King (Friendly)"
    { { 1097, 5 }, 11000387 }, // "Reputation: Wrath of the Lich King (Honored)"
    { { 1097, 6 }, 11000388 }, // "Reputation: Wrath of the Lich King (Revered)"
    { { 1097, 7 }, 11000389 }, // "Reputation: Wrath of the Lich King (Exalted)"
    { { 1098, 4 }, 11000390 }, // "Reputation: Knights of the Ebon Blade (Friendly)"
    { { 1098, 5 }, 11000391 }, // "Reputation: Knights of the Ebon Blade (Honored)"
    { { 1098, 6 }, 11000392 }, // "Reputation: Knights of the Ebon Blade (Revered)"
    { { 1098, 7 }, 11000393 }, // "Reputation: Knights of the Ebon Blade (Exalted)"
    { { 1104, 4 }, 11000394 }, // "Reputation: Frenzyheart Tribe (Friendly)"
    { { 1104, 5 }, 11000395 }, // "Reputation: Frenzyheart Tribe (Honored)"
    { { 1104, 6 }, 11000396 }, // "Reputation: Frenzyheart Tribe (Revered)"
    { { 1104, 7 }, 11000397 }, // "Reputation: Frenzyheart Tribe (Exalted)"
    { { 1105, 4 }, 11000398 }, // "Reputation: The Oracles (Friendly)"
    { { 1105, 5 }, 11000399 }, // "Reputation: The Oracles (Honored)"
    { { 1105, 6 }, 11000400 }, // "Reputation: The Oracles (Revered)"
    { { 1105, 7 }, 11000401 }, // "Reputation: The Oracles (Exalted)"
    { { 1106, 4 }, 11000402 }, // "Reputation: Argent Crusade (Friendly)"
    { { 1106, 5 }, 11000403 }, // "Reputation: Argent Crusade (Honored)"
    { { 1106, 6 }, 11000404 }, // "Reputation: Argent Crusade (Revered)"
    { { 1106, 7 }, 11000405 }, // "Reputation: Argent Crusade (Exalted)"
    { { 1117, 4 }, 11000406 }, // "Reputation: Sholazar Basin (Friendly)"
    { { 1117, 5 }, 11000407 }, // "Reputation: Sholazar Basin (Honored)"
    { { 1117, 6 }, 11000408 }, // "Reputation: Sholazar Basin (Revered)"
    { { 1117, 7 }, 11000409 }, // "Reputation: Sholazar Basin (Exalted)"
    { { 1118, 4 }, 11000410 }, // "Reputation: Classic (Friendly)"
    { { 1118, 5 }, 11000411 }, // "Reputation: Classic (Honored)"
    { { 1118, 6 }, 11000412 }, // "Reputation: Classic (Revered)"
    { { 1118, 7 }, 11000413 }, // "Reputation: Classic (Exalted)"
    { { 1119, 1 }, 11000414 }, // "Reputation: The Sons of Hodir (Hostile)"
    { { 1119, 2 }, 11000415 }, // "Reputation: The Sons of Hodir (Unfriendly)"
    { { 1119, 3 }, 11000416 }, // "Reputation: The Sons of Hodir (Neutral)"
    { { 1119, 4 }, 11000417 }, // "Reputation: The Sons of Hodir (Friendly)"
    { { 1119, 5 }, 11000418 }, // "Reputation: The Sons of Hodir (Honored)"
    { { 1119, 6 }, 11000419 }, // "Reputation: The Sons of Hodir (Revered)"
    { { 1119, 7 }, 11000420 }, // "Reputation: The Sons of Hodir (Exalted)"
    { { 1124, 4 }, 11000421 }, // "Reputation: The Sunreavers (Friendly)"
    { { 1124, 5 }, 11000422 }, // "Reputation: The Sunreavers (Honored)"
    { { 1124, 6 }, 11000423 }, // "Reputation: The Sunreavers (Revered)"
    { { 1124, 7 }, 11000424 }, // "Reputation: The Sunreavers (Exalted)"
    { { 1126, 4 }, 11000425 }, // "Reputation: The Frostborn (Friendly)"
    { { 1126, 5 }, 11000426 }, // "Reputation: The Frostborn (Honored)"
    { { 1126, 6 }, 11000427 }, // "Reputation: The Frostborn (Revered)"
    { { 1126, 7 }, 11000428 }, // "Reputation: The Frostborn (Exalted)"
    { { 1136, 4 }, 11000429 }, // "Reputation: Tranquillien Conversion (Friendly)"
    { { 1136, 5 }, 11000430 }, // "Reputation: Tranquillien Conversion (Honored)"
    { { 1136, 6 }, 11000431 }, // "Reputation: Tranquillien Conversion (Revered)"
    { { 1136, 7 }, 11000432 }, // "Reputation: Tranquillien Conversion (Exalted)"
    { { 1137, 4 }, 11000433 }, // "Reputation: Wintersaber Conversion (Friendly)"
    { { 1137, 5 }, 11000434 }, // "Reputation: Wintersaber Conversion (Honored)"
    { { 1137, 6 }, 11000435 }, // "Reputation: Wintersaber Conversion (Revered)"
    { { 1137, 7 }, 11000436 }, // "Reputation: Wintersaber Conversion (Exalted)"
    { { 1154, 4 }, 11000437 }, // "Reputation: Silver Covenant Conversion (Friendly)"
    { { 1154, 5 }, 11000438 }, // "Reputation: Silver Covenant Conversion (Honored)"
    { { 1154, 6 }, 11000439 }, // "Reputation: Silver Covenant Conversion (Revered)"
    { { 1154, 7 }, 11000440 }, // "Reputation: Silver Covenant Conversion (Exalted)"
    { { 1155, 4 }, 11000441 }, // "Reputation: Sunreavers Conversion (Friendly)"
    { { 1155, 5 }, 11000442 }, // "Reputation: Sunreavers Conversion (Honored)"
    { { 1155, 6 }, 11000443 }, // "Reputation: Sunreavers Conversion (Revered)"
    { { 1155, 7 }, 11000444 }, // "Reputation: Sunreavers Conversion (Exalted)"
    { { 1156, 4 }, 11000445 }, // "Reputation: The Ashen Verdict (Friendly)"
    { { 1156, 5 }, 11000446 }, // "Reputation: The Ashen Verdict (Honored)"
    { { 1156, 6 }, 11000447 }, // "Reputation: The Ashen Verdict (Revered)"
    { { 1156, 7 }, 11000448 }, // "Reputation: The Ashen Verdict (Exalted)"
};
inline std::map<std::pair<uint32_t, uint32_t>, int64_t> BuildFACTION_RANK_TO_LOCATION_ID()
{
    std::map<std::pair<uint32_t, uint32_t>, int64_t> result;
    for (auto const& row : FACTION_RANK_TO_LOCATION_ID_RAW)
        result.emplace(row.first, row.second);
    return result;
}
inline const std::map<std::pair<uint32_t, uint32_t>, int64_t> FACTION_RANK_TO_LOCATION_ID = BuildFACTION_RANK_TO_LOCATION_ID();
}
