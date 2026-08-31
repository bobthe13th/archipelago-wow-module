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
    {"Reputation: Ironforge (Friendly)", 11000004},
    {"Reputation: Ironforge (Honored)", 11000005},
    {"Reputation: Ironforge (Revered)", 11000006},
    {"Reputation: Ironforge (Exalted)", 11000007},
    {"Reputation: Gnomeregan Exiles (Friendly)", 11000008},
    {"Reputation: Gnomeregan Exiles (Honored)", 11000009},
    {"Reputation: Gnomeregan Exiles (Revered)", 11000010},
    {"Reputation: Gnomeregan Exiles (Exalted)", 11000011},
    {"Reputation: Thorium Brotherhood (Friendly)", 11000012},
    {"Reputation: Thorium Brotherhood (Honored)", 11000013},
    {"Reputation: Thorium Brotherhood (Revered)", 11000014},
    {"Reputation: Thorium Brotherhood (Exalted)", 11000015},
    {"Reputation: Undercity (Friendly)", 11000016},
    {"Reputation: Undercity (Honored)", 11000017},
    {"Reputation: Undercity (Revered)", 11000018},
    {"Reputation: Undercity (Exalted)", 11000019},
    {"Reputation: Darnassus (Friendly)", 11000020},
    {"Reputation: Darnassus (Honored)", 11000021},
    {"Reputation: Darnassus (Revered)", 11000022},
    {"Reputation: Darnassus (Exalted)", 11000023},
    {"Reputation: Syndicate (Hostile)", 11000024},
    {"Reputation: Syndicate (Unfriendly)", 11000025},
    {"Reputation: Syndicate (Neutral)", 11000026},
    {"Reputation: Syndicate (Friendly)", 11000027},
    {"Reputation: Syndicate (Honored)", 11000028},
    {"Reputation: Syndicate (Revered)", 11000029},
    {"Reputation: Syndicate (Exalted)", 11000030},
    {"Reputation: Stormwind (Friendly)", 11000031},
    {"Reputation: Stormwind (Honored)", 11000032},
    {"Reputation: Stormwind (Revered)", 11000033},
    {"Reputation: Stormwind (Exalted)", 11000034},
    {"Reputation: Orgrimmar (Friendly)", 11000035},
    {"Reputation: Orgrimmar (Honored)", 11000036},
    {"Reputation: Orgrimmar (Revered)", 11000037},
    {"Reputation: Orgrimmar (Exalted)", 11000038},
    {"Reputation: Thunder Bluff (Friendly)", 11000039},
    {"Reputation: Thunder Bluff (Honored)", 11000040},
    {"Reputation: Thunder Bluff (Revered)", 11000041},
    {"Reputation: Thunder Bluff (Exalted)", 11000042},
    {"Reputation: Bloodsail Buccaneers (Hostile)", 11000043},
    {"Reputation: Bloodsail Buccaneers (Unfriendly)", 11000044},
    {"Reputation: Bloodsail Buccaneers (Neutral)", 11000045},
    {"Reputation: Bloodsail Buccaneers (Friendly)", 11000046},
    {"Reputation: Bloodsail Buccaneers (Honored)", 11000047},
    {"Reputation: Bloodsail Buccaneers (Revered)", 11000048},
    {"Reputation: Bloodsail Buccaneers (Exalted)", 11000049},
    {"Reputation: Gelkis Clan Centaur (Friendly)", 11000050},
    {"Reputation: Gelkis Clan Centaur (Honored)", 11000051},
    {"Reputation: Gelkis Clan Centaur (Revered)", 11000052},
    {"Reputation: Gelkis Clan Centaur (Exalted)", 11000053},
    {"Reputation: Magram Clan Centaur (Friendly)", 11000054},
    {"Reputation: Magram Clan Centaur (Honored)", 11000055},
    {"Reputation: Magram Clan Centaur (Revered)", 11000056},
    {"Reputation: Magram Clan Centaur (Exalted)", 11000057},
    {"Reputation: Steamwheedle Cartel (Friendly)", 11000058},
    {"Reputation: Steamwheedle Cartel (Honored)", 11000059},
    {"Reputation: Steamwheedle Cartel (Revered)", 11000060},
    {"Reputation: Steamwheedle Cartel (Exalted)", 11000061},
    {"Reputation: Zandalar Tribe (Friendly)", 11000062},
    {"Reputation: Zandalar Tribe (Honored)", 11000063},
    {"Reputation: Zandalar Tribe (Revered)", 11000064},
    {"Reputation: Zandalar Tribe (Exalted)", 11000065},
    {"Reputation: Ravenholdt (Friendly)", 11000066},
    {"Reputation: Ravenholdt (Honored)", 11000067},
    {"Reputation: Ravenholdt (Revered)", 11000068},
    {"Reputation: Ravenholdt (Exalted)", 11000069},
    {"Reputation: Gadgetzan (Friendly)", 11000070},
    {"Reputation: Gadgetzan (Honored)", 11000071},
    {"Reputation: Gadgetzan (Revered)", 11000072},
    {"Reputation: Gadgetzan (Exalted)", 11000073},
    {"Reputation: Ratchet (Friendly)", 11000074},
    {"Reputation: Ratchet (Honored)", 11000075},
    {"Reputation: Ratchet (Revered)", 11000076},
    {"Reputation: Ratchet (Exalted)", 11000077},
    {"Reputation: Wildhammer Clan (Friendly)", 11000078},
    {"Reputation: Wildhammer Clan (Honored)", 11000079},
    {"Reputation: Wildhammer Clan (Revered)", 11000080},
    {"Reputation: Wildhammer Clan (Exalted)", 11000081},
    {"Reputation: The League of Arathor (Friendly)", 11000082},
    {"Reputation: The League of Arathor (Honored)", 11000083},
    {"Reputation: The League of Arathor (Revered)", 11000084},
    {"Reputation: The League of Arathor (Exalted)", 11000085},
    {"Reputation: The Defilers (Friendly)", 11000086},
    {"Reputation: The Defilers (Honored)", 11000087},
    {"Reputation: The Defilers (Revered)", 11000088},
    {"Reputation: The Defilers (Exalted)", 11000089},
    {"Reputation: Argent Dawn (Friendly)", 11000090},
    {"Reputation: Argent Dawn (Honored)", 11000091},
    {"Reputation: Argent Dawn (Revered)", 11000092},
    {"Reputation: Argent Dawn (Exalted)", 11000093},
    {"Reputation: Darkspear Trolls (Friendly)", 11000094},
    {"Reputation: Darkspear Trolls (Honored)", 11000095},
    {"Reputation: Darkspear Trolls (Revered)", 11000096},
    {"Reputation: Darkspear Trolls (Exalted)", 11000097},
    {"Reputation: Caer Darrow (Friendly)", 11000098},
    {"Reputation: Caer Darrow (Honored)", 11000099},
    {"Reputation: Caer Darrow (Revered)", 11000100},
    {"Reputation: Caer Darrow (Exalted)", 11000101},
    {"Reputation: Timbermaw Hold (Unfriendly)", 11000102},
    {"Reputation: Timbermaw Hold (Neutral)", 11000103},
    {"Reputation: Timbermaw Hold (Friendly)", 11000104},
    {"Reputation: Timbermaw Hold (Honored)", 11000105},
    {"Reputation: Timbermaw Hold (Revered)", 11000106},
    {"Reputation: Timbermaw Hold (Exalted)", 11000107},
    {"Reputation: Everlook (Friendly)", 11000108},
    {"Reputation: Everlook (Honored)", 11000109},
    {"Reputation: Everlook (Revered)", 11000110},
    {"Reputation: Everlook (Exalted)", 11000111},
    {"Reputation: Wintersaber Trainers (Hostile)", 11000112},
    {"Reputation: Wintersaber Trainers (Unfriendly)", 11000113},
    {"Reputation: Wintersaber Trainers (Neutral)", 11000114},
    {"Reputation: Wintersaber Trainers (Friendly)", 11000115},
    {"Reputation: Wintersaber Trainers (Honored)", 11000116},
    {"Reputation: Wintersaber Trainers (Revered)", 11000117},
    {"Reputation: Wintersaber Trainers (Exalted)", 11000118},
    {"Reputation: Cenarion Circle (Friendly)", 11000119},
    {"Reputation: Cenarion Circle (Honored)", 11000120},
    {"Reputation: Cenarion Circle (Revered)", 11000121},
    {"Reputation: Cenarion Circle (Exalted)", 11000122},
    {"Reputation: Frostwolf Clan (Friendly)", 11000123},
    {"Reputation: Frostwolf Clan (Honored)", 11000124},
    {"Reputation: Frostwolf Clan (Revered)", 11000125},
    {"Reputation: Frostwolf Clan (Exalted)", 11000126},
    {"Reputation: Stormpike Guard (Friendly)", 11000127},
    {"Reputation: Stormpike Guard (Honored)", 11000128},
    {"Reputation: Stormpike Guard (Revered)", 11000129},
    {"Reputation: Stormpike Guard (Exalted)", 11000130},
    {"Reputation: Hydraxian Waterlords (Friendly)", 11000131},
    {"Reputation: Hydraxian Waterlords (Honored)", 11000132},
    {"Reputation: Hydraxian Waterlords (Revered)", 11000133},
    {"Reputation: Hydraxian Waterlords (Exalted)", 11000134},
    {"Reputation: Shen'dralar (Friendly)", 11000135},
    {"Reputation: Shen'dralar (Honored)", 11000136},
    {"Reputation: Shen'dralar (Revered)", 11000137},
    {"Reputation: Shen'dralar (Exalted)", 11000138},
    {"Reputation: Warsong Outriders (Friendly)", 11000139},
    {"Reputation: Warsong Outriders (Honored)", 11000140},
    {"Reputation: Warsong Outriders (Revered)", 11000141},
    {"Reputation: Warsong Outriders (Exalted)", 11000142},
    {"Reputation: Silverwing Sentinels (Friendly)", 11000143},
    {"Reputation: Silverwing Sentinels (Honored)", 11000144},
    {"Reputation: Silverwing Sentinels (Revered)", 11000145},
    {"Reputation: Silverwing Sentinels (Exalted)", 11000146},
    {"Reputation: Darkmoon Faire (Friendly)", 11000147},
    {"Reputation: Darkmoon Faire (Honored)", 11000148},
    {"Reputation: Darkmoon Faire (Revered)", 11000149},
    {"Reputation: Darkmoon Faire (Exalted)", 11000150},
    {"Reputation: Brood of Nozdormu (Hostile)", 11000151},
    {"Reputation: Brood of Nozdormu (Unfriendly)", 11000152},
    {"Reputation: Brood of Nozdormu (Neutral)", 11000153},
    {"Reputation: Brood of Nozdormu (Friendly)", 11000154},
    {"Reputation: Brood of Nozdormu (Honored)", 11000155},
    {"Reputation: Brood of Nozdormu (Revered)", 11000156},
    {"Reputation: Brood of Nozdormu (Exalted)", 11000157},
    {"Reputation: Silvermoon City (Friendly)", 11000158},
    {"Reputation: Silvermoon City (Honored)", 11000159},
    {"Reputation: Silvermoon City (Revered)", 11000160},
    {"Reputation: Silvermoon City (Exalted)", 11000161},
    {"Reputation: Tranquillien (Friendly)", 11000162},
    {"Reputation: Tranquillien (Honored)", 11000163},
    {"Reputation: Tranquillien (Revered)", 11000164},
    {"Reputation: Tranquillien (Exalted)", 11000165},
    {"Reputation: Exodar (Friendly)", 11000166},
    {"Reputation: Exodar (Honored)", 11000167},
    {"Reputation: Exodar (Revered)", 11000168},
    {"Reputation: Exodar (Exalted)", 11000169},
    {"Reputation: The Aldor (Unfriendly)", 11000170},
    {"Reputation: The Aldor (Neutral)", 11000171},
    {"Reputation: The Aldor (Friendly)", 11000172},
    {"Reputation: The Aldor (Honored)", 11000173},
    {"Reputation: The Aldor (Revered)", 11000174},
    {"Reputation: The Aldor (Exalted)", 11000175},
    {"Reputation: The Consortium (Friendly)", 11000176},
    {"Reputation: The Consortium (Honored)", 11000177},
    {"Reputation: The Consortium (Revered)", 11000178},
    {"Reputation: The Consortium (Exalted)", 11000179},
    {"Reputation: The Scryers (Unfriendly)", 11000180},
    {"Reputation: The Scryers (Neutral)", 11000181},
    {"Reputation: The Scryers (Friendly)", 11000182},
    {"Reputation: The Scryers (Honored)", 11000183},
    {"Reputation: The Scryers (Revered)", 11000184},
    {"Reputation: The Scryers (Exalted)", 11000185},
    {"Reputation: The Sha'tar (Friendly)", 11000186},
    {"Reputation: The Sha'tar (Honored)", 11000187},
    {"Reputation: The Sha'tar (Revered)", 11000188},
    {"Reputation: The Sha'tar (Exalted)", 11000189},
    {"Reputation: Shattrath City (Friendly)", 11000190},
    {"Reputation: Shattrath City (Honored)", 11000191},
    {"Reputation: Shattrath City (Revered)", 11000192},
    {"Reputation: Shattrath City (Exalted)", 11000193},
    {"Reputation: The Mag'har (Neutral)", 11000194},
    {"Reputation: The Mag'har (Friendly)", 11000195},
    {"Reputation: The Mag'har (Honored)", 11000196},
    {"Reputation: The Mag'har (Revered)", 11000197},
    {"Reputation: The Mag'har (Exalted)", 11000198},
    {"Reputation: Cenarion Expedition (Friendly)", 11000199},
    {"Reputation: Cenarion Expedition (Honored)", 11000200},
    {"Reputation: Cenarion Expedition (Revered)", 11000201},
    {"Reputation: Cenarion Expedition (Exalted)", 11000202},
    {"Reputation: Honor Hold (Friendly)", 11000203},
    {"Reputation: Honor Hold (Honored)", 11000204},
    {"Reputation: Honor Hold (Revered)", 11000205},
    {"Reputation: Honor Hold (Exalted)", 11000206},
    {"Reputation: Thrallmar (Friendly)", 11000207},
    {"Reputation: Thrallmar (Honored)", 11000208},
    {"Reputation: Thrallmar (Revered)", 11000209},
    {"Reputation: Thrallmar (Exalted)", 11000210},
    {"Reputation: The Violet Eye (Friendly)", 11000211},
    {"Reputation: The Violet Eye (Honored)", 11000212},
    {"Reputation: The Violet Eye (Revered)", 11000213},
    {"Reputation: The Violet Eye (Exalted)", 11000214},
    {"Reputation: Sporeggar (Neutral)", 11000215},
    {"Reputation: Sporeggar (Friendly)", 11000216},
    {"Reputation: Sporeggar (Honored)", 11000217},
    {"Reputation: Sporeggar (Revered)", 11000218},
    {"Reputation: Sporeggar (Exalted)", 11000219},
    {"Reputation: Kurenai (Neutral)", 11000220},
    {"Reputation: Kurenai (Friendly)", 11000221},
    {"Reputation: Kurenai (Honored)", 11000222},
    {"Reputation: Kurenai (Revered)", 11000223},
    {"Reputation: Kurenai (Exalted)", 11000224},
    {"Reputation: Keepers of Time (Friendly)", 11000225},
    {"Reputation: Keepers of Time (Honored)", 11000226},
    {"Reputation: Keepers of Time (Revered)", 11000227},
    {"Reputation: Keepers of Time (Exalted)", 11000228},
    {"Reputation: The Scale of the Sands (Friendly)", 11000229},
    {"Reputation: The Scale of the Sands (Honored)", 11000230},
    {"Reputation: The Scale of the Sands (Revered)", 11000231},
    {"Reputation: The Scale of the Sands (Exalted)", 11000232},
    {"Reputation: Lower City (Friendly)", 11000233},
    {"Reputation: Lower City (Honored)", 11000234},
    {"Reputation: Lower City (Revered)", 11000235},
    {"Reputation: Lower City (Exalted)", 11000236},
    {"Reputation: Ashtongue Deathsworn (Friendly)", 11000237},
    {"Reputation: Ashtongue Deathsworn (Honored)", 11000238},
    {"Reputation: Ashtongue Deathsworn (Revered)", 11000239},
    {"Reputation: Ashtongue Deathsworn (Exalted)", 11000240},
    {"Reputation: Netherwing (Hostile)", 11000241},
    {"Reputation: Netherwing (Unfriendly)", 11000242},
    {"Reputation: Netherwing (Neutral)", 11000243},
    {"Reputation: Netherwing (Friendly)", 11000244},
    {"Reputation: Netherwing (Honored)", 11000245},
    {"Reputation: Netherwing (Revered)", 11000246},
    {"Reputation: Netherwing (Exalted)", 11000247},
    {"Reputation: Sha'tari Skyguard (Friendly)", 11000248},
    {"Reputation: Sha'tari Skyguard (Honored)", 11000249},
    {"Reputation: Sha'tari Skyguard (Revered)", 11000250},
    {"Reputation: Sha'tari Skyguard (Exalted)", 11000251},
    {"Reputation: Alliance Vanguard (Friendly)", 11000252},
    {"Reputation: Alliance Vanguard (Honored)", 11000253},
    {"Reputation: Alliance Vanguard (Revered)", 11000254},
    {"Reputation: Alliance Vanguard (Exalted)", 11000255},
    {"Reputation: Ogri'la (Friendly)", 11000256},
    {"Reputation: Ogri'la (Honored)", 11000257},
    {"Reputation: Ogri'la (Revered)", 11000258},
    {"Reputation: Ogri'la (Exalted)", 11000259},
    {"Reputation: Valiance Expedition (Friendly)", 11000260},
    {"Reputation: Valiance Expedition (Honored)", 11000261},
    {"Reputation: Valiance Expedition (Revered)", 11000262},
    {"Reputation: Valiance Expedition (Exalted)", 11000263},
    {"Reputation: Horde Expedition (Friendly)", 11000264},
    {"Reputation: Horde Expedition (Honored)", 11000265},
    {"Reputation: Horde Expedition (Revered)", 11000266},
    {"Reputation: Horde Expedition (Exalted)", 11000267},
    {"Reputation: The Taunka (Friendly)", 11000268},
    {"Reputation: The Taunka (Honored)", 11000269},
    {"Reputation: The Taunka (Revered)", 11000270},
    {"Reputation: The Taunka (Exalted)", 11000271},
    {"Reputation: The Hand of Vengeance (Friendly)", 11000272},
    {"Reputation: The Hand of Vengeance (Honored)", 11000273},
    {"Reputation: The Hand of Vengeance (Revered)", 11000274},
    {"Reputation: The Hand of Vengeance (Exalted)", 11000275},
    {"Reputation: Explorers' League (Friendly)", 11000276},
    {"Reputation: Explorers' League (Honored)", 11000277},
    {"Reputation: Explorers' League (Revered)", 11000278},
    {"Reputation: Explorers' League (Exalted)", 11000279},
    {"Reputation: The Kalu'ak (Friendly)", 11000280},
    {"Reputation: The Kalu'ak (Honored)", 11000281},
    {"Reputation: The Kalu'ak (Revered)", 11000282},
    {"Reputation: The Kalu'ak (Exalted)", 11000283},
    {"Reputation: Shattered Sun Offensive (Friendly)", 11000284},
    {"Reputation: Shattered Sun Offensive (Honored)", 11000285},
    {"Reputation: Shattered Sun Offensive (Revered)", 11000286},
    {"Reputation: Shattered Sun Offensive (Exalted)", 11000287},
    {"Reputation: Warsong Offensive (Friendly)", 11000288},
    {"Reputation: Warsong Offensive (Honored)", 11000289},
    {"Reputation: Warsong Offensive (Revered)", 11000290},
    {"Reputation: Warsong Offensive (Exalted)", 11000291},
    {"Reputation: Kirin Tor (Friendly)", 11000292},
    {"Reputation: Kirin Tor (Honored)", 11000293},
    {"Reputation: Kirin Tor (Revered)", 11000294},
    {"Reputation: Kirin Tor (Exalted)", 11000295},
    {"Reputation: The Wyrmrest Accord (Friendly)", 11000296},
    {"Reputation: The Wyrmrest Accord (Honored)", 11000297},
    {"Reputation: The Wyrmrest Accord (Revered)", 11000298},
    {"Reputation: The Wyrmrest Accord (Exalted)", 11000299},
    {"Reputation: The Silver Covenant (Friendly)", 11000300},
    {"Reputation: The Silver Covenant (Honored)", 11000301},
    {"Reputation: The Silver Covenant (Revered)", 11000302},
    {"Reputation: The Silver Covenant (Exalted)", 11000303},
    {"Reputation: Knights of the Ebon Blade (Friendly)", 11000304},
    {"Reputation: Knights of the Ebon Blade (Honored)", 11000305},
    {"Reputation: Knights of the Ebon Blade (Revered)", 11000306},
    {"Reputation: Knights of the Ebon Blade (Exalted)", 11000307},
    {"Reputation: Frenzyheart Tribe (Friendly)", 11000308},
    {"Reputation: Frenzyheart Tribe (Honored)", 11000309},
    {"Reputation: Frenzyheart Tribe (Revered)", 11000310},
    {"Reputation: Frenzyheart Tribe (Exalted)", 11000311},
    {"Reputation: The Oracles (Friendly)", 11000312},
    {"Reputation: The Oracles (Honored)", 11000313},
    {"Reputation: The Oracles (Revered)", 11000314},
    {"Reputation: The Oracles (Exalted)", 11000315},
    {"Reputation: Argent Crusade (Friendly)", 11000316},
    {"Reputation: Argent Crusade (Honored)", 11000317},
    {"Reputation: Argent Crusade (Revered)", 11000318},
    {"Reputation: Argent Crusade (Exalted)", 11000319},
    {"Reputation: The Sons of Hodir (Hostile)", 11000320},
    {"Reputation: The Sons of Hodir (Unfriendly)", 11000321},
    {"Reputation: The Sons of Hodir (Neutral)", 11000322},
    {"Reputation: The Sons of Hodir (Friendly)", 11000323},
    {"Reputation: The Sons of Hodir (Honored)", 11000324},
    {"Reputation: The Sons of Hodir (Revered)", 11000325},
    {"Reputation: The Sons of Hodir (Exalted)", 11000326},
    {"Reputation: The Sunreavers (Friendly)", 11000327},
    {"Reputation: The Sunreavers (Honored)", 11000328},
    {"Reputation: The Sunreavers (Revered)", 11000329},
    {"Reputation: The Sunreavers (Exalted)", 11000330},
    {"Reputation: The Frostborn (Friendly)", 11000331},
    {"Reputation: The Frostborn (Honored)", 11000332},
    {"Reputation: The Frostborn (Revered)", 11000333},
    {"Reputation: The Frostborn (Exalted)", 11000334},
    {"Reputation: The Ashen Verdict (Friendly)", 11000335},
    {"Reputation: The Ashen Verdict (Honored)", 11000336},
    {"Reputation: The Ashen Verdict (Revered)", 11000337},
    {"Reputation: The Ashen Verdict (Exalted)", 11000338},
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
    { { 47, 4 }, 11000004 }, // "Reputation: Ironforge (Friendly)"
    { { 47, 5 }, 11000005 }, // "Reputation: Ironforge (Honored)"
    { { 47, 6 }, 11000006 }, // "Reputation: Ironforge (Revered)"
    { { 47, 7 }, 11000007 }, // "Reputation: Ironforge (Exalted)"
    { { 54, 4 }, 11000008 }, // "Reputation: Gnomeregan Exiles (Friendly)"
    { { 54, 5 }, 11000009 }, // "Reputation: Gnomeregan Exiles (Honored)"
    { { 54, 6 }, 11000010 }, // "Reputation: Gnomeregan Exiles (Revered)"
    { { 54, 7 }, 11000011 }, // "Reputation: Gnomeregan Exiles (Exalted)"
    { { 59, 4 }, 11000012 }, // "Reputation: Thorium Brotherhood (Friendly)"
    { { 59, 5 }, 11000013 }, // "Reputation: Thorium Brotherhood (Honored)"
    { { 59, 6 }, 11000014 }, // "Reputation: Thorium Brotherhood (Revered)"
    { { 59, 7 }, 11000015 }, // "Reputation: Thorium Brotherhood (Exalted)"
    { { 68, 4 }, 11000016 }, // "Reputation: Undercity (Friendly)"
    { { 68, 5 }, 11000017 }, // "Reputation: Undercity (Honored)"
    { { 68, 6 }, 11000018 }, // "Reputation: Undercity (Revered)"
    { { 68, 7 }, 11000019 }, // "Reputation: Undercity (Exalted)"
    { { 69, 4 }, 11000020 }, // "Reputation: Darnassus (Friendly)"
    { { 69, 5 }, 11000021 }, // "Reputation: Darnassus (Honored)"
    { { 69, 6 }, 11000022 }, // "Reputation: Darnassus (Revered)"
    { { 69, 7 }, 11000023 }, // "Reputation: Darnassus (Exalted)"
    { { 70, 1 }, 11000024 }, // "Reputation: Syndicate (Hostile)"
    { { 70, 2 }, 11000025 }, // "Reputation: Syndicate (Unfriendly)"
    { { 70, 3 }, 11000026 }, // "Reputation: Syndicate (Neutral)"
    { { 70, 4 }, 11000027 }, // "Reputation: Syndicate (Friendly)"
    { { 70, 5 }, 11000028 }, // "Reputation: Syndicate (Honored)"
    { { 70, 6 }, 11000029 }, // "Reputation: Syndicate (Revered)"
    { { 70, 7 }, 11000030 }, // "Reputation: Syndicate (Exalted)"
    { { 72, 4 }, 11000031 }, // "Reputation: Stormwind (Friendly)"
    { { 72, 5 }, 11000032 }, // "Reputation: Stormwind (Honored)"
    { { 72, 6 }, 11000033 }, // "Reputation: Stormwind (Revered)"
    { { 72, 7 }, 11000034 }, // "Reputation: Stormwind (Exalted)"
    { { 76, 4 }, 11000035 }, // "Reputation: Orgrimmar (Friendly)"
    { { 76, 5 }, 11000036 }, // "Reputation: Orgrimmar (Honored)"
    { { 76, 6 }, 11000037 }, // "Reputation: Orgrimmar (Revered)"
    { { 76, 7 }, 11000038 }, // "Reputation: Orgrimmar (Exalted)"
    { { 81, 4 }, 11000039 }, // "Reputation: Thunder Bluff (Friendly)"
    { { 81, 5 }, 11000040 }, // "Reputation: Thunder Bluff (Honored)"
    { { 81, 6 }, 11000041 }, // "Reputation: Thunder Bluff (Revered)"
    { { 81, 7 }, 11000042 }, // "Reputation: Thunder Bluff (Exalted)"
    { { 87, 1 }, 11000043 }, // "Reputation: Bloodsail Buccaneers (Hostile)"
    { { 87, 2 }, 11000044 }, // "Reputation: Bloodsail Buccaneers (Unfriendly)"
    { { 87, 3 }, 11000045 }, // "Reputation: Bloodsail Buccaneers (Neutral)"
    { { 87, 4 }, 11000046 }, // "Reputation: Bloodsail Buccaneers (Friendly)"
    { { 87, 5 }, 11000047 }, // "Reputation: Bloodsail Buccaneers (Honored)"
    { { 87, 6 }, 11000048 }, // "Reputation: Bloodsail Buccaneers (Revered)"
    { { 87, 7 }, 11000049 }, // "Reputation: Bloodsail Buccaneers (Exalted)"
    { { 92, 4 }, 11000050 }, // "Reputation: Gelkis Clan Centaur (Friendly)"
    { { 92, 5 }, 11000051 }, // "Reputation: Gelkis Clan Centaur (Honored)"
    { { 92, 6 }, 11000052 }, // "Reputation: Gelkis Clan Centaur (Revered)"
    { { 92, 7 }, 11000053 }, // "Reputation: Gelkis Clan Centaur (Exalted)"
    { { 93, 4 }, 11000054 }, // "Reputation: Magram Clan Centaur (Friendly)"
    { { 93, 5 }, 11000055 }, // "Reputation: Magram Clan Centaur (Honored)"
    { { 93, 6 }, 11000056 }, // "Reputation: Magram Clan Centaur (Revered)"
    { { 93, 7 }, 11000057 }, // "Reputation: Magram Clan Centaur (Exalted)"
    { { 169, 4 }, 11000058 }, // "Reputation: Steamwheedle Cartel (Friendly)"
    { { 169, 5 }, 11000059 }, // "Reputation: Steamwheedle Cartel (Honored)"
    { { 169, 6 }, 11000060 }, // "Reputation: Steamwheedle Cartel (Revered)"
    { { 169, 7 }, 11000061 }, // "Reputation: Steamwheedle Cartel (Exalted)"
    { { 270, 4 }, 11000062 }, // "Reputation: Zandalar Tribe (Friendly)"
    { { 270, 5 }, 11000063 }, // "Reputation: Zandalar Tribe (Honored)"
    { { 270, 6 }, 11000064 }, // "Reputation: Zandalar Tribe (Revered)"
    { { 270, 7 }, 11000065 }, // "Reputation: Zandalar Tribe (Exalted)"
    { { 349, 4 }, 11000066 }, // "Reputation: Ravenholdt (Friendly)"
    { { 349, 5 }, 11000067 }, // "Reputation: Ravenholdt (Honored)"
    { { 349, 6 }, 11000068 }, // "Reputation: Ravenholdt (Revered)"
    { { 349, 7 }, 11000069 }, // "Reputation: Ravenholdt (Exalted)"
    { { 369, 4 }, 11000070 }, // "Reputation: Gadgetzan (Friendly)"
    { { 369, 5 }, 11000071 }, // "Reputation: Gadgetzan (Honored)"
    { { 369, 6 }, 11000072 }, // "Reputation: Gadgetzan (Revered)"
    { { 369, 7 }, 11000073 }, // "Reputation: Gadgetzan (Exalted)"
    { { 470, 4 }, 11000074 }, // "Reputation: Ratchet (Friendly)"
    { { 470, 5 }, 11000075 }, // "Reputation: Ratchet (Honored)"
    { { 470, 6 }, 11000076 }, // "Reputation: Ratchet (Revered)"
    { { 470, 7 }, 11000077 }, // "Reputation: Ratchet (Exalted)"
    { { 471, 4 }, 11000078 }, // "Reputation: Wildhammer Clan (Friendly)"
    { { 471, 5 }, 11000079 }, // "Reputation: Wildhammer Clan (Honored)"
    { { 471, 6 }, 11000080 }, // "Reputation: Wildhammer Clan (Revered)"
    { { 471, 7 }, 11000081 }, // "Reputation: Wildhammer Clan (Exalted)"
    { { 509, 4 }, 11000082 }, // "Reputation: The League of Arathor (Friendly)"
    { { 509, 5 }, 11000083 }, // "Reputation: The League of Arathor (Honored)"
    { { 509, 6 }, 11000084 }, // "Reputation: The League of Arathor (Revered)"
    { { 509, 7 }, 11000085 }, // "Reputation: The League of Arathor (Exalted)"
    { { 510, 4 }, 11000086 }, // "Reputation: The Defilers (Friendly)"
    { { 510, 5 }, 11000087 }, // "Reputation: The Defilers (Honored)"
    { { 510, 6 }, 11000088 }, // "Reputation: The Defilers (Revered)"
    { { 510, 7 }, 11000089 }, // "Reputation: The Defilers (Exalted)"
    { { 529, 4 }, 11000090 }, // "Reputation: Argent Dawn (Friendly)"
    { { 529, 5 }, 11000091 }, // "Reputation: Argent Dawn (Honored)"
    { { 529, 6 }, 11000092 }, // "Reputation: Argent Dawn (Revered)"
    { { 529, 7 }, 11000093 }, // "Reputation: Argent Dawn (Exalted)"
    { { 530, 4 }, 11000094 }, // "Reputation: Darkspear Trolls (Friendly)"
    { { 530, 5 }, 11000095 }, // "Reputation: Darkspear Trolls (Honored)"
    { { 530, 6 }, 11000096 }, // "Reputation: Darkspear Trolls (Revered)"
    { { 530, 7 }, 11000097 }, // "Reputation: Darkspear Trolls (Exalted)"
    { { 574, 4 }, 11000098 }, // "Reputation: Caer Darrow (Friendly)"
    { { 574, 5 }, 11000099 }, // "Reputation: Caer Darrow (Honored)"
    { { 574, 6 }, 11000100 }, // "Reputation: Caer Darrow (Revered)"
    { { 574, 7 }, 11000101 }, // "Reputation: Caer Darrow (Exalted)"
    { { 576, 2 }, 11000102 }, // "Reputation: Timbermaw Hold (Unfriendly)"
    { { 576, 3 }, 11000103 }, // "Reputation: Timbermaw Hold (Neutral)"
    { { 576, 4 }, 11000104 }, // "Reputation: Timbermaw Hold (Friendly)"
    { { 576, 5 }, 11000105 }, // "Reputation: Timbermaw Hold (Honored)"
    { { 576, 6 }, 11000106 }, // "Reputation: Timbermaw Hold (Revered)"
    { { 576, 7 }, 11000107 }, // "Reputation: Timbermaw Hold (Exalted)"
    { { 577, 4 }, 11000108 }, // "Reputation: Everlook (Friendly)"
    { { 577, 5 }, 11000109 }, // "Reputation: Everlook (Honored)"
    { { 577, 6 }, 11000110 }, // "Reputation: Everlook (Revered)"
    { { 577, 7 }, 11000111 }, // "Reputation: Everlook (Exalted)"
    { { 589, 1 }, 11000112 }, // "Reputation: Wintersaber Trainers (Hostile)"
    { { 589, 2 }, 11000113 }, // "Reputation: Wintersaber Trainers (Unfriendly)"
    { { 589, 3 }, 11000114 }, // "Reputation: Wintersaber Trainers (Neutral)"
    { { 589, 4 }, 11000115 }, // "Reputation: Wintersaber Trainers (Friendly)"
    { { 589, 5 }, 11000116 }, // "Reputation: Wintersaber Trainers (Honored)"
    { { 589, 6 }, 11000117 }, // "Reputation: Wintersaber Trainers (Revered)"
    { { 589, 7 }, 11000118 }, // "Reputation: Wintersaber Trainers (Exalted)"
    { { 609, 4 }, 11000119 }, // "Reputation: Cenarion Circle (Friendly)"
    { { 609, 5 }, 11000120 }, // "Reputation: Cenarion Circle (Honored)"
    { { 609, 6 }, 11000121 }, // "Reputation: Cenarion Circle (Revered)"
    { { 609, 7 }, 11000122 }, // "Reputation: Cenarion Circle (Exalted)"
    { { 729, 4 }, 11000123 }, // "Reputation: Frostwolf Clan (Friendly)"
    { { 729, 5 }, 11000124 }, // "Reputation: Frostwolf Clan (Honored)"
    { { 729, 6 }, 11000125 }, // "Reputation: Frostwolf Clan (Revered)"
    { { 729, 7 }, 11000126 }, // "Reputation: Frostwolf Clan (Exalted)"
    { { 730, 4 }, 11000127 }, // "Reputation: Stormpike Guard (Friendly)"
    { { 730, 5 }, 11000128 }, // "Reputation: Stormpike Guard (Honored)"
    { { 730, 6 }, 11000129 }, // "Reputation: Stormpike Guard (Revered)"
    { { 730, 7 }, 11000130 }, // "Reputation: Stormpike Guard (Exalted)"
    { { 749, 4 }, 11000131 }, // "Reputation: Hydraxian Waterlords (Friendly)"
    { { 749, 5 }, 11000132 }, // "Reputation: Hydraxian Waterlords (Honored)"
    { { 749, 6 }, 11000133 }, // "Reputation: Hydraxian Waterlords (Revered)"
    { { 749, 7 }, 11000134 }, // "Reputation: Hydraxian Waterlords (Exalted)"
    { { 809, 4 }, 11000135 }, // "Reputation: Shen'dralar (Friendly)"
    { { 809, 5 }, 11000136 }, // "Reputation: Shen'dralar (Honored)"
    { { 809, 6 }, 11000137 }, // "Reputation: Shen'dralar (Revered)"
    { { 809, 7 }, 11000138 }, // "Reputation: Shen'dralar (Exalted)"
    { { 889, 4 }, 11000139 }, // "Reputation: Warsong Outriders (Friendly)"
    { { 889, 5 }, 11000140 }, // "Reputation: Warsong Outriders (Honored)"
    { { 889, 6 }, 11000141 }, // "Reputation: Warsong Outriders (Revered)"
    { { 889, 7 }, 11000142 }, // "Reputation: Warsong Outriders (Exalted)"
    { { 890, 4 }, 11000143 }, // "Reputation: Silverwing Sentinels (Friendly)"
    { { 890, 5 }, 11000144 }, // "Reputation: Silverwing Sentinels (Honored)"
    { { 890, 6 }, 11000145 }, // "Reputation: Silverwing Sentinels (Revered)"
    { { 890, 7 }, 11000146 }, // "Reputation: Silverwing Sentinels (Exalted)"
    { { 909, 4 }, 11000147 }, // "Reputation: Darkmoon Faire (Friendly)"
    { { 909, 5 }, 11000148 }, // "Reputation: Darkmoon Faire (Honored)"
    { { 909, 6 }, 11000149 }, // "Reputation: Darkmoon Faire (Revered)"
    { { 909, 7 }, 11000150 }, // "Reputation: Darkmoon Faire (Exalted)"
    { { 910, 1 }, 11000151 }, // "Reputation: Brood of Nozdormu (Hostile)"
    { { 910, 2 }, 11000152 }, // "Reputation: Brood of Nozdormu (Unfriendly)"
    { { 910, 3 }, 11000153 }, // "Reputation: Brood of Nozdormu (Neutral)"
    { { 910, 4 }, 11000154 }, // "Reputation: Brood of Nozdormu (Friendly)"
    { { 910, 5 }, 11000155 }, // "Reputation: Brood of Nozdormu (Honored)"
    { { 910, 6 }, 11000156 }, // "Reputation: Brood of Nozdormu (Revered)"
    { { 910, 7 }, 11000157 }, // "Reputation: Brood of Nozdormu (Exalted)"
    { { 911, 4 }, 11000158 }, // "Reputation: Silvermoon City (Friendly)"
    { { 911, 5 }, 11000159 }, // "Reputation: Silvermoon City (Honored)"
    { { 911, 6 }, 11000160 }, // "Reputation: Silvermoon City (Revered)"
    { { 911, 7 }, 11000161 }, // "Reputation: Silvermoon City (Exalted)"
    { { 922, 4 }, 11000162 }, // "Reputation: Tranquillien (Friendly)"
    { { 922, 5 }, 11000163 }, // "Reputation: Tranquillien (Honored)"
    { { 922, 6 }, 11000164 }, // "Reputation: Tranquillien (Revered)"
    { { 922, 7 }, 11000165 }, // "Reputation: Tranquillien (Exalted)"
    { { 930, 4 }, 11000166 }, // "Reputation: Exodar (Friendly)"
    { { 930, 5 }, 11000167 }, // "Reputation: Exodar (Honored)"
    { { 930, 6 }, 11000168 }, // "Reputation: Exodar (Revered)"
    { { 930, 7 }, 11000169 }, // "Reputation: Exodar (Exalted)"
    { { 932, 2 }, 11000170 }, // "Reputation: The Aldor (Unfriendly)"
    { { 932, 3 }, 11000171 }, // "Reputation: The Aldor (Neutral)"
    { { 932, 4 }, 11000172 }, // "Reputation: The Aldor (Friendly)"
    { { 932, 5 }, 11000173 }, // "Reputation: The Aldor (Honored)"
    { { 932, 6 }, 11000174 }, // "Reputation: The Aldor (Revered)"
    { { 932, 7 }, 11000175 }, // "Reputation: The Aldor (Exalted)"
    { { 933, 4 }, 11000176 }, // "Reputation: The Consortium (Friendly)"
    { { 933, 5 }, 11000177 }, // "Reputation: The Consortium (Honored)"
    { { 933, 6 }, 11000178 }, // "Reputation: The Consortium (Revered)"
    { { 933, 7 }, 11000179 }, // "Reputation: The Consortium (Exalted)"
    { { 934, 2 }, 11000180 }, // "Reputation: The Scryers (Unfriendly)"
    { { 934, 3 }, 11000181 }, // "Reputation: The Scryers (Neutral)"
    { { 934, 4 }, 11000182 }, // "Reputation: The Scryers (Friendly)"
    { { 934, 5 }, 11000183 }, // "Reputation: The Scryers (Honored)"
    { { 934, 6 }, 11000184 }, // "Reputation: The Scryers (Revered)"
    { { 934, 7 }, 11000185 }, // "Reputation: The Scryers (Exalted)"
    { { 935, 4 }, 11000186 }, // "Reputation: The Sha'tar (Friendly)"
    { { 935, 5 }, 11000187 }, // "Reputation: The Sha'tar (Honored)"
    { { 935, 6 }, 11000188 }, // "Reputation: The Sha'tar (Revered)"
    { { 935, 7 }, 11000189 }, // "Reputation: The Sha'tar (Exalted)"
    { { 936, 4 }, 11000190 }, // "Reputation: Shattrath City (Friendly)"
    { { 936, 5 }, 11000191 }, // "Reputation: Shattrath City (Honored)"
    { { 936, 6 }, 11000192 }, // "Reputation: Shattrath City (Revered)"
    { { 936, 7 }, 11000193 }, // "Reputation: Shattrath City (Exalted)"
    { { 941, 3 }, 11000194 }, // "Reputation: The Mag'har (Neutral)"
    { { 941, 4 }, 11000195 }, // "Reputation: The Mag'har (Friendly)"
    { { 941, 5 }, 11000196 }, // "Reputation: The Mag'har (Honored)"
    { { 941, 6 }, 11000197 }, // "Reputation: The Mag'har (Revered)"
    { { 941, 7 }, 11000198 }, // "Reputation: The Mag'har (Exalted)"
    { { 942, 4 }, 11000199 }, // "Reputation: Cenarion Expedition (Friendly)"
    { { 942, 5 }, 11000200 }, // "Reputation: Cenarion Expedition (Honored)"
    { { 942, 6 }, 11000201 }, // "Reputation: Cenarion Expedition (Revered)"
    { { 942, 7 }, 11000202 }, // "Reputation: Cenarion Expedition (Exalted)"
    { { 946, 4 }, 11000203 }, // "Reputation: Honor Hold (Friendly)"
    { { 946, 5 }, 11000204 }, // "Reputation: Honor Hold (Honored)"
    { { 946, 6 }, 11000205 }, // "Reputation: Honor Hold (Revered)"
    { { 946, 7 }, 11000206 }, // "Reputation: Honor Hold (Exalted)"
    { { 947, 4 }, 11000207 }, // "Reputation: Thrallmar (Friendly)"
    { { 947, 5 }, 11000208 }, // "Reputation: Thrallmar (Honored)"
    { { 947, 6 }, 11000209 }, // "Reputation: Thrallmar (Revered)"
    { { 947, 7 }, 11000210 }, // "Reputation: Thrallmar (Exalted)"
    { { 967, 4 }, 11000211 }, // "Reputation: The Violet Eye (Friendly)"
    { { 967, 5 }, 11000212 }, // "Reputation: The Violet Eye (Honored)"
    { { 967, 6 }, 11000213 }, // "Reputation: The Violet Eye (Revered)"
    { { 967, 7 }, 11000214 }, // "Reputation: The Violet Eye (Exalted)"
    { { 970, 3 }, 11000215 }, // "Reputation: Sporeggar (Neutral)"
    { { 970, 4 }, 11000216 }, // "Reputation: Sporeggar (Friendly)"
    { { 970, 5 }, 11000217 }, // "Reputation: Sporeggar (Honored)"
    { { 970, 6 }, 11000218 }, // "Reputation: Sporeggar (Revered)"
    { { 970, 7 }, 11000219 }, // "Reputation: Sporeggar (Exalted)"
    { { 978, 3 }, 11000220 }, // "Reputation: Kurenai (Neutral)"
    { { 978, 4 }, 11000221 }, // "Reputation: Kurenai (Friendly)"
    { { 978, 5 }, 11000222 }, // "Reputation: Kurenai (Honored)"
    { { 978, 6 }, 11000223 }, // "Reputation: Kurenai (Revered)"
    { { 978, 7 }, 11000224 }, // "Reputation: Kurenai (Exalted)"
    { { 989, 4 }, 11000225 }, // "Reputation: Keepers of Time (Friendly)"
    { { 989, 5 }, 11000226 }, // "Reputation: Keepers of Time (Honored)"
    { { 989, 6 }, 11000227 }, // "Reputation: Keepers of Time (Revered)"
    { { 989, 7 }, 11000228 }, // "Reputation: Keepers of Time (Exalted)"
    { { 990, 4 }, 11000229 }, // "Reputation: The Scale of the Sands (Friendly)"
    { { 990, 5 }, 11000230 }, // "Reputation: The Scale of the Sands (Honored)"
    { { 990, 6 }, 11000231 }, // "Reputation: The Scale of the Sands (Revered)"
    { { 990, 7 }, 11000232 }, // "Reputation: The Scale of the Sands (Exalted)"
    { { 1011, 4 }, 11000233 }, // "Reputation: Lower City (Friendly)"
    { { 1011, 5 }, 11000234 }, // "Reputation: Lower City (Honored)"
    { { 1011, 6 }, 11000235 }, // "Reputation: Lower City (Revered)"
    { { 1011, 7 }, 11000236 }, // "Reputation: Lower City (Exalted)"
    { { 1012, 4 }, 11000237 }, // "Reputation: Ashtongue Deathsworn (Friendly)"
    { { 1012, 5 }, 11000238 }, // "Reputation: Ashtongue Deathsworn (Honored)"
    { { 1012, 6 }, 11000239 }, // "Reputation: Ashtongue Deathsworn (Revered)"
    { { 1012, 7 }, 11000240 }, // "Reputation: Ashtongue Deathsworn (Exalted)"
    { { 1015, 1 }, 11000241 }, // "Reputation: Netherwing (Hostile)"
    { { 1015, 2 }, 11000242 }, // "Reputation: Netherwing (Unfriendly)"
    { { 1015, 3 }, 11000243 }, // "Reputation: Netherwing (Neutral)"
    { { 1015, 4 }, 11000244 }, // "Reputation: Netherwing (Friendly)"
    { { 1015, 5 }, 11000245 }, // "Reputation: Netherwing (Honored)"
    { { 1015, 6 }, 11000246 }, // "Reputation: Netherwing (Revered)"
    { { 1015, 7 }, 11000247 }, // "Reputation: Netherwing (Exalted)"
    { { 1031, 4 }, 11000248 }, // "Reputation: Sha'tari Skyguard (Friendly)"
    { { 1031, 5 }, 11000249 }, // "Reputation: Sha'tari Skyguard (Honored)"
    { { 1031, 6 }, 11000250 }, // "Reputation: Sha'tari Skyguard (Revered)"
    { { 1031, 7 }, 11000251 }, // "Reputation: Sha'tari Skyguard (Exalted)"
    { { 1037, 4 }, 11000252 }, // "Reputation: Alliance Vanguard (Friendly)"
    { { 1037, 5 }, 11000253 }, // "Reputation: Alliance Vanguard (Honored)"
    { { 1037, 6 }, 11000254 }, // "Reputation: Alliance Vanguard (Revered)"
    { { 1037, 7 }, 11000255 }, // "Reputation: Alliance Vanguard (Exalted)"
    { { 1038, 4 }, 11000256 }, // "Reputation: Ogri'la (Friendly)"
    { { 1038, 5 }, 11000257 }, // "Reputation: Ogri'la (Honored)"
    { { 1038, 6 }, 11000258 }, // "Reputation: Ogri'la (Revered)"
    { { 1038, 7 }, 11000259 }, // "Reputation: Ogri'la (Exalted)"
    { { 1050, 4 }, 11000260 }, // "Reputation: Valiance Expedition (Friendly)"
    { { 1050, 5 }, 11000261 }, // "Reputation: Valiance Expedition (Honored)"
    { { 1050, 6 }, 11000262 }, // "Reputation: Valiance Expedition (Revered)"
    { { 1050, 7 }, 11000263 }, // "Reputation: Valiance Expedition (Exalted)"
    { { 1052, 4 }, 11000264 }, // "Reputation: Horde Expedition (Friendly)"
    { { 1052, 5 }, 11000265 }, // "Reputation: Horde Expedition (Honored)"
    { { 1052, 6 }, 11000266 }, // "Reputation: Horde Expedition (Revered)"
    { { 1052, 7 }, 11000267 }, // "Reputation: Horde Expedition (Exalted)"
    { { 1064, 4 }, 11000268 }, // "Reputation: The Taunka (Friendly)"
    { { 1064, 5 }, 11000269 }, // "Reputation: The Taunka (Honored)"
    { { 1064, 6 }, 11000270 }, // "Reputation: The Taunka (Revered)"
    { { 1064, 7 }, 11000271 }, // "Reputation: The Taunka (Exalted)"
    { { 1067, 4 }, 11000272 }, // "Reputation: The Hand of Vengeance (Friendly)"
    { { 1067, 5 }, 11000273 }, // "Reputation: The Hand of Vengeance (Honored)"
    { { 1067, 6 }, 11000274 }, // "Reputation: The Hand of Vengeance (Revered)"
    { { 1067, 7 }, 11000275 }, // "Reputation: The Hand of Vengeance (Exalted)"
    { { 1068, 4 }, 11000276 }, // "Reputation: Explorers' League (Friendly)"
    { { 1068, 5 }, 11000277 }, // "Reputation: Explorers' League (Honored)"
    { { 1068, 6 }, 11000278 }, // "Reputation: Explorers' League (Revered)"
    { { 1068, 7 }, 11000279 }, // "Reputation: Explorers' League (Exalted)"
    { { 1073, 4 }, 11000280 }, // "Reputation: The Kalu'ak (Friendly)"
    { { 1073, 5 }, 11000281 }, // "Reputation: The Kalu'ak (Honored)"
    { { 1073, 6 }, 11000282 }, // "Reputation: The Kalu'ak (Revered)"
    { { 1073, 7 }, 11000283 }, // "Reputation: The Kalu'ak (Exalted)"
    { { 1077, 4 }, 11000284 }, // "Reputation: Shattered Sun Offensive (Friendly)"
    { { 1077, 5 }, 11000285 }, // "Reputation: Shattered Sun Offensive (Honored)"
    { { 1077, 6 }, 11000286 }, // "Reputation: Shattered Sun Offensive (Revered)"
    { { 1077, 7 }, 11000287 }, // "Reputation: Shattered Sun Offensive (Exalted)"
    { { 1085, 4 }, 11000288 }, // "Reputation: Warsong Offensive (Friendly)"
    { { 1085, 5 }, 11000289 }, // "Reputation: Warsong Offensive (Honored)"
    { { 1085, 6 }, 11000290 }, // "Reputation: Warsong Offensive (Revered)"
    { { 1085, 7 }, 11000291 }, // "Reputation: Warsong Offensive (Exalted)"
    { { 1090, 4 }, 11000292 }, // "Reputation: Kirin Tor (Friendly)"
    { { 1090, 5 }, 11000293 }, // "Reputation: Kirin Tor (Honored)"
    { { 1090, 6 }, 11000294 }, // "Reputation: Kirin Tor (Revered)"
    { { 1090, 7 }, 11000295 }, // "Reputation: Kirin Tor (Exalted)"
    { { 1091, 4 }, 11000296 }, // "Reputation: The Wyrmrest Accord (Friendly)"
    { { 1091, 5 }, 11000297 }, // "Reputation: The Wyrmrest Accord (Honored)"
    { { 1091, 6 }, 11000298 }, // "Reputation: The Wyrmrest Accord (Revered)"
    { { 1091, 7 }, 11000299 }, // "Reputation: The Wyrmrest Accord (Exalted)"
    { { 1094, 4 }, 11000300 }, // "Reputation: The Silver Covenant (Friendly)"
    { { 1094, 5 }, 11000301 }, // "Reputation: The Silver Covenant (Honored)"
    { { 1094, 6 }, 11000302 }, // "Reputation: The Silver Covenant (Revered)"
    { { 1094, 7 }, 11000303 }, // "Reputation: The Silver Covenant (Exalted)"
    { { 1098, 4 }, 11000304 }, // "Reputation: Knights of the Ebon Blade (Friendly)"
    { { 1098, 5 }, 11000305 }, // "Reputation: Knights of the Ebon Blade (Honored)"
    { { 1098, 6 }, 11000306 }, // "Reputation: Knights of the Ebon Blade (Revered)"
    { { 1098, 7 }, 11000307 }, // "Reputation: Knights of the Ebon Blade (Exalted)"
    { { 1104, 4 }, 11000308 }, // "Reputation: Frenzyheart Tribe (Friendly)"
    { { 1104, 5 }, 11000309 }, // "Reputation: Frenzyheart Tribe (Honored)"
    { { 1104, 6 }, 11000310 }, // "Reputation: Frenzyheart Tribe (Revered)"
    { { 1104, 7 }, 11000311 }, // "Reputation: Frenzyheart Tribe (Exalted)"
    { { 1105, 4 }, 11000312 }, // "Reputation: The Oracles (Friendly)"
    { { 1105, 5 }, 11000313 }, // "Reputation: The Oracles (Honored)"
    { { 1105, 6 }, 11000314 }, // "Reputation: The Oracles (Revered)"
    { { 1105, 7 }, 11000315 }, // "Reputation: The Oracles (Exalted)"
    { { 1106, 4 }, 11000316 }, // "Reputation: Argent Crusade (Friendly)"
    { { 1106, 5 }, 11000317 }, // "Reputation: Argent Crusade (Honored)"
    { { 1106, 6 }, 11000318 }, // "Reputation: Argent Crusade (Revered)"
    { { 1106, 7 }, 11000319 }, // "Reputation: Argent Crusade (Exalted)"
    { { 1119, 1 }, 11000320 }, // "Reputation: The Sons of Hodir (Hostile)"
    { { 1119, 2 }, 11000321 }, // "Reputation: The Sons of Hodir (Unfriendly)"
    { { 1119, 3 }, 11000322 }, // "Reputation: The Sons of Hodir (Neutral)"
    { { 1119, 4 }, 11000323 }, // "Reputation: The Sons of Hodir (Friendly)"
    { { 1119, 5 }, 11000324 }, // "Reputation: The Sons of Hodir (Honored)"
    { { 1119, 6 }, 11000325 }, // "Reputation: The Sons of Hodir (Revered)"
    { { 1119, 7 }, 11000326 }, // "Reputation: The Sons of Hodir (Exalted)"
    { { 1124, 4 }, 11000327 }, // "Reputation: The Sunreavers (Friendly)"
    { { 1124, 5 }, 11000328 }, // "Reputation: The Sunreavers (Honored)"
    { { 1124, 6 }, 11000329 }, // "Reputation: The Sunreavers (Revered)"
    { { 1124, 7 }, 11000330 }, // "Reputation: The Sunreavers (Exalted)"
    { { 1126, 4 }, 11000331 }, // "Reputation: The Frostborn (Friendly)"
    { { 1126, 5 }, 11000332 }, // "Reputation: The Frostborn (Honored)"
    { { 1126, 6 }, 11000333 }, // "Reputation: The Frostborn (Revered)"
    { { 1126, 7 }, 11000334 }, // "Reputation: The Frostborn (Exalted)"
    { { 1156, 4 }, 11000335 }, // "Reputation: The Ashen Verdict (Friendly)"
    { { 1156, 5 }, 11000336 }, // "Reputation: The Ashen Verdict (Honored)"
    { { 1156, 6 }, 11000337 }, // "Reputation: The Ashen Verdict (Revered)"
    { { 1156, 7 }, 11000338 }, // "Reputation: The Ashen Verdict (Exalted)"
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
