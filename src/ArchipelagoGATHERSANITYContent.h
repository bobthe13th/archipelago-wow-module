// GENERATED FILE - do not edit by hand.
// Regenerate with: python modules/archipelago_wow/tools/generate_content.py content/gathersanity.yaml
#pragma once

#include <cstdint>
#include <map>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

namespace ArchipelagoGATHERSANITYContent {
inline constexpr std::pair<char const*, uint32_t> LOCATIONS_RAW[] = {
    {"Gathersanity: Incendicite Mineral Vein - Incendicite Ore (#1409/3340)", 9000000},
    {"Gathersanity: Silverleaf - Silverleaf (#1414/765)", 9000001},
    {"Gathersanity: Peacebloom - Peacebloom (#1415/2447)", 9000002},
    {"Gathersanity: Earthroot - Earthroot (#1416/2449)", 9000003},
    {"Gathersanity: Mageroyal - Mageroyal (#1417/785)", 9000004},
    {"Gathersanity: Mageroyal - Swiftthistle (#1417/2452)", 9000005},
    {"Gathersanity: Briarthorn - Briarthorn (#1418/2450)", 9000006},
    {"Gathersanity: Briarthorn - Swiftthistle (#1418/2452)", 9000007},
    {"Gathersanity: Bruiseweed - Bruiseweed (#1419/2453)", 9000008},
    {"Gathersanity: Wild Steelbloom - Wild Steelbloom (#1420/3355)", 9000009},
    {"Gathersanity: Kingsblood - Kingsblood (#1421/3356)", 9000010},
    {"Gathersanity: Khadgar's Whisker - Khadgar's Whisker (#1423/3358)", 9000011},
    {"Gathersanity: Grave Moss - Grave Moss (#1424/3369)", 9000012},
    {"Gathersanity: Copper Vein - Malachite (#1502/774)", 9000013},
    {"Gathersanity: Copper Vein - Tigerseye (#1502/818)", 9000014},
    {"Gathersanity: Copper Vein - Shadowgem (#1502/1210)", 9000015},
    {"Gathersanity: Copper Vein - Copper Ore (#1502/2770)", 9000016},
    {"Gathersanity: Copper Vein - Rough Stone (#1502/2835)", 9000017},
    {"Gathersanity: Tin Vein - Moss Agate (#1503/1206)", 9000018},
    {"Gathersanity: Tin Vein - Shadowgem (#1503/1210)", 9000019},
    {"Gathersanity: Tin Vein - Jade (#1503/1529)", 9000020},
    {"Gathersanity: Tin Vein - Lesser Moonstone (#1503/1705)", 9000021},
    {"Gathersanity: Tin Vein - Tin Ore (#1503/2771)", 9000022},
    {"Gathersanity: Tin Vein - Coarse Stone (#1503/2836)", 9000023},
    {"Gathersanity: Ooze Covered Silver Vein - Moss Agate (#1504/1206)", 9000024},
    {"Gathersanity: Ooze Covered Silver Vein - Shadowgem (#1504/1210)", 9000025},
    {"Gathersanity: Ooze Covered Silver Vein - Lesser Moonstone (#1504/1705)", 9000026},
    {"Gathersanity: Ooze Covered Silver Vein - Silver Ore (#1504/2775)", 9000027},
    {"Gathersanity: Iron Deposit - Jade (#1505/1529)", 9000028},
    {"Gathersanity: Iron Deposit - Lesser Moonstone (#1505/1705)", 9000029},
    {"Gathersanity: Iron Deposit - Iron Ore (#1505/2772)", 9000030},
    {"Gathersanity: Iron Deposit - Heavy Stone (#1505/2838)", 9000031},
    {"Gathersanity: Iron Deposit - Citrine (#1505/3864)", 9000032},
    {"Gathersanity: Iron Deposit - Aquamarine (#1505/7909)", 9000033},
    {"Gathersanity: Gold Vein - Lesser Moonstone (#1506/1705)", 9000034},
    {"Gathersanity: Gold Vein - Gold Ore (#1506/2776)", 9000035},
    {"Gathersanity: Gold Vein - Citrine (#1506/3864)", 9000036},
    {"Gathersanity: Gold Vein - Aquamarine (#1506/7909)", 9000037},
    {"Gathersanity: Liferoot - Liferoot (#1730/3357)", 9000038},
    {"Gathersanity: Fadeleaf - Fadeleaf (#1731/3818)", 9000039},
    {"Gathersanity: Wintersbite - Wintersbite (#1732/3819)", 9000040},
    {"Gathersanity: Stranglekelp - Stranglekelp (#1733/3820)", 9000041},
    {"Gathersanity: Goldthorn - Goldthorn (#1734/3821)", 9000042},
    {"Gathersanity: Copper Vein - Malachite (#1735/774)", 9000043},
    {"Gathersanity: Copper Vein - Tigerseye (#1735/818)", 9000044},
    {"Gathersanity: Copper Vein - Shadowgem (#1735/1210)", 9000045},
    {"Gathersanity: Copper Vein - Copper Ore (#1735/2770)", 9000046},
    {"Gathersanity: Copper Vein - Rough Stone (#1735/2835)", 9000047},
    {"Gathersanity: Tin Vein - Moss Agate (#1736/1206)", 9000048},
    {"Gathersanity: Tin Vein - Shadowgem (#1736/1210)", 9000049},
    {"Gathersanity: Tin Vein - Jade (#1736/1529)", 9000050},
    {"Gathersanity: Tin Vein - Lesser Moonstone (#1736/1705)", 9000051},
    {"Gathersanity: Tin Vein - Tin Ore (#1736/2771)", 9000052},
    {"Gathersanity: Tin Vein - Coarse Stone (#1736/2836)", 9000053},
    {"Gathersanity: Mithril Deposit - Mithril Ore (#1742/3858)", 9000054},
    {"Gathersanity: Mithril Deposit - Citrine (#1742/3864)", 9000055},
    {"Gathersanity: Mithril Deposit - Aquamarine (#1742/7909)", 9000056},
    {"Gathersanity: Mithril Deposit - Star Ruby (#1742/7910)", 9000057},
    {"Gathersanity: Mithril Deposit - Solid Stone (#1742/7912)", 9000058},
    {"Gathersanity: Mithril Deposit - Black Vitriol (#1742/9262)", 9000059},
    {"Gathersanity: Lesser Bloodstone Deposit - Lesser Bloodstone Ore (#2039/4278)", 9000060},
    {"Gathersanity: Firebloom - Firebloom (#2292/4625)", 9000061},
    {"Gathersanity: Silverleaf - Silverleaf (#2511/765)", 9000062},
    {"Gathersanity: Peacebloom - Peacebloom (#2512/2447)", 9000063},
    {"Gathersanity: Earthroot - Earthroot (#2513/2449)", 9000064},
    {"Gathersanity: Mageroyal - Mageroyal (#2514/785)", 9000065},
    {"Gathersanity: Mageroyal - Swiftthistle (#2514/2452)", 9000066},
    {"Gathersanity: Briarthorn - Briarthorn (#2515/2450)", 9000067},
    {"Gathersanity: Briarthorn - Swiftthistle (#2515/2452)", 9000068},
    {"Gathersanity: Bruiseweed - Bruiseweed (#2516/2453)", 9000069},
    {"Gathersanity: Copper Vein - Malachite (#2626/774)", 9000070},
    {"Gathersanity: Copper Vein - Tigerseye (#2626/818)", 9000071},
    {"Gathersanity: Copper Vein - Shadowgem (#2626/1210)", 9000072},
    {"Gathersanity: Copper Vein - Copper Ore (#2626/2770)", 9000073},
    {"Gathersanity: Copper Vein - Rough Stone (#2626/2835)", 9000074},
    {"Gathersanity: Copper Vein - Blood Shard (#2626/5075)", 9000075},
    {"Gathersanity: Tin Vein - Moss Agate (#2627/1206)", 9000076},
    {"Gathersanity: Tin Vein - Shadowgem (#2627/1210)", 9000077},
    {"Gathersanity: Tin Vein - Jade (#2627/1529)", 9000078},
    {"Gathersanity: Tin Vein - Lesser Moonstone (#2627/1705)", 9000079},
    {"Gathersanity: Tin Vein - Tin Ore (#2627/2771)", 9000080},
    {"Gathersanity: Tin Vein - Coarse Stone (#2627/2836)", 9000081},
    {"Gathersanity: Tin Vein - Blood Shard (#2627/5075)", 9000082},
    {"Gathersanity: Indurium Mineral Vein - Indurium Ore (#3266/5833)", 9000083},
    {"Gathersanity: Ooze Covered Truesilver Deposit - Citrine (#5045/3864)", 9000084},
    {"Gathersanity: Ooze Covered Truesilver Deposit - Aquamarine (#5045/7909)", 9000085},
    {"Gathersanity: Ooze Covered Truesilver Deposit - Star Ruby (#5045/7910)", 9000086},
    {"Gathersanity: Ooze Covered Truesilver Deposit - Truesilver Ore (#5045/7911)", 9000087},
    {"Gathersanity: Purple Lotus - Wildvine (#6142/8153)", 9000088},
    {"Gathersanity: Purple Lotus - Purple Lotus (#6142/8831)", 9000089},
    {"Gathersanity: Arthas' Tears - Arthas' Tears (#6150/8836)", 9000090},
    {"Gathersanity: Sungrass - Sungrass (#6151/8838)", 9000091},
    {"Gathersanity: Blindweed - Blindweed (#6152/8839)", 9000092},
    {"Gathersanity: Ghost Mushroom - Ghost Mushroom (#6312/8845)", 9000093},
    {"Gathersanity: Gromsblood - Gromsblood (#6313/8846)", 9000094},
    {"Gathersanity: Ooze Covered Thorium Vein - Thorium Ore (#9597/10620)", 9000095},
    {"Gathersanity: Ooze Covered Thorium Vein - Dense Stone (#9597/12365)", 9000096},
    {"Gathersanity: Dark Iron Deposit - Black Vitriol (#11213/9262)", 9000097},
    {"Gathersanity: Dark Iron Deposit - Dark Iron Ore (#11213/11370)", 9000098},
    {"Gathersanity: Dark Iron Deposit - Blood of the Mountain (#11213/11382)", 9000099},
    {"Gathersanity: Dark Iron Deposit - Black Diamond (#11213/11754)", 9000100},
    {"Gathersanity: Ooze Covered Rich Thorium Vein - Thorium Ore (#12883/10620)", 9000101},
    {"Gathersanity: Ooze Covered Rich Thorium Vein - Dense Stone (#12883/12365)", 9000102},
    {"Gathersanity: Golden Sansam - Golden Sansam (#13945/13464)", 9000103},
    {"Gathersanity: Dreamfoil - Dreamfoil (#13946/13463)", 9000104},
    {"Gathersanity: Mountain Silversage - Mountain Silversage (#13947/13465)", 9000105},
    {"Gathersanity: Icecap - Icecap (#13949/13467)", 9000106},
    {"Gathersanity: Black Lotus - Black Lotus (#13950/13468)", 9000107},
    {"Gathersanity: Small Thorium Vein - Thorium Ore (#13960/10620)", 9000108},
    {"Gathersanity: Small Thorium Vein - Tainted Vitriol (#13960/11513)", 9000109},
    {"Gathersanity: Small Thorium Vein - Dense Stone (#13960/12365)", 9000110},
    {"Gathersanity: Mithril Deposit - Mithril Ore (#13961/3858)", 9000111},
    {"Gathersanity: Mithril Deposit - Citrine (#13961/3864)", 9000112},
    {"Gathersanity: Mithril Deposit - Aquamarine (#13961/7909)", 9000113},
    {"Gathersanity: Mithril Deposit - Star Ruby (#13961/7910)", 9000114},
    {"Gathersanity: Mithril Deposit - Solid Stone (#13961/7912)", 9000115},
    {"Gathersanity: Mithril Deposit - Black Vitriol (#13961/9262)", 9000116},
    {"Gathersanity: Mithril Deposit - Tainted Vitriol (#13961/11513)", 9000117},
    {"Gathersanity: Sungrass - Sungrass (#13965/8838)", 9000118},
    {"Gathersanity: Sungrass - Fel Creep (#13965/11514)", 9000119},
    {"Gathersanity: Gromsblood - Gromsblood (#13966/8846)", 9000120},
    {"Gathersanity: Gromsblood - Fel Creep (#13966/11514)", 9000121},
    {"Gathersanity: Golden Sansam - Fel Creep (#13967/11514)", 9000122},
    {"Gathersanity: Golden Sansam - Golden Sansam (#13967/13464)", 9000123},
    {"Gathersanity: Dreamfoil - Fel Creep (#13968/11514)", 9000124},
    {"Gathersanity: Dreamfoil - Dreamfoil (#13968/13463)", 9000125},
    {"Gathersanity: Mountain Silversage - Fel Creep (#13969/11514)", 9000126},
    {"Gathersanity: Mountain Silversage - Mountain Silversage (#13969/13465)", 9000127},
    {"Gathersanity: Arthas' Tears - Arthas' Tears (#13970/8836)", 9000128},
    {"Gathersanity: Arthas' Tears - Fel Creep (#13970/11514)", 9000129},
    {"Gathersanity: Purple Lotus - Wildvine (#17200/8153)", 9000130},
    {"Gathersanity: Purple Lotus - Purple Lotus (#17200/8831)", 9000131},
    {"Gathersanity: Purple Lotus - Bloodvine (#17200/19726)", 9000132},
    {"Gathersanity: Sungrass - Sungrass (#17201/8838)", 9000133},
    {"Gathersanity: Sungrass - Bloodvine (#17201/19726)", 9000134},
    {"Gathersanity: Golden Sansam - Golden Sansam (#17202/13464)", 9000135},
    {"Gathersanity: Golden Sansam - Bloodvine (#17202/19726)", 9000136},
    {"Gathersanity: Dreamfoil - Dreamfoil (#17203/13463)", 9000137},
    {"Gathersanity: Dreamfoil - Bloodvine (#17203/19726)", 9000138},
    {"Gathersanity: Mountain Silversage - Mountain Silversage (#17204/13465)", 9000139},
    {"Gathersanity: Mountain Silversage - Bloodvine (#17204/19726)", 9000140},
    {"Gathersanity: Hakkari Thorium Vein - Thorium Ore (#17241/10620)", 9000141},
    {"Gathersanity: Hakkari Thorium Vein - Dense Stone (#17241/12365)", 9000142},
    {"Gathersanity: Hakkari Thorium Vein - Souldarite (#17241/19774)", 9000143},
    {"Gathersanity: Truesilver Deposit - Citrine (#17938/3864)", 9000144},
    {"Gathersanity: Truesilver Deposit - Aquamarine (#17938/7909)", 9000145},
    {"Gathersanity: Truesilver Deposit - Star Ruby (#17938/7910)", 9000146},
    {"Gathersanity: Truesilver Deposit - Truesilver Ore (#17938/7911)", 9000147},
    {"Gathersanity: Truesilver Deposit - Tainted Vitriol (#17938/11513)", 9000148},
    {"Gathersanity: Gold Vein - Lesser Moonstone (#17939/1705)", 9000149},
    {"Gathersanity: Gold Vein - Gold Ore (#17939/2776)", 9000150},
    {"Gathersanity: Gold Vein - Citrine (#17939/3864)", 9000151},
    {"Gathersanity: Gold Vein - Aquamarine (#17939/7909)", 9000152},
    {"Gathersanity: Copper Vein - Malachite (#18092/774)", 9000153},
    {"Gathersanity: Copper Vein - Tigerseye (#18092/818)", 9000154},
    {"Gathersanity: Copper Vein - Shadowgem (#18092/1210)", 9000155},
    {"Gathersanity: Copper Vein - Copper Ore (#18092/2770)", 9000156},
    {"Gathersanity: Copper Vein - Rough Stone (#18092/2835)", 9000157},
    {"Gathersanity: Tin Vein - Moss Agate (#18093/1206)", 9000158},
    {"Gathersanity: Tin Vein - Shadowgem (#18093/1210)", 9000159},
    {"Gathersanity: Tin Vein - Jade (#18093/1529)", 9000160},
    {"Gathersanity: Tin Vein - Lesser Moonstone (#18093/1705)", 9000161},
    {"Gathersanity: Tin Vein - Tin Ore (#18093/2771)", 9000162},
    {"Gathersanity: Tin Vein - Coarse Stone (#18093/2836)", 9000163},
    {"Gathersanity: Felweed - Mote of Life (#18111/22575)", 9000164},
    {"Gathersanity: Felweed - Felweed (#18111/22785)", 9000165},
    {"Gathersanity: Felweed - Fel Lotus (#18111/22794)", 9000166},
    {"Gathersanity: Felweed - Fel Blossom (#18111/22795)", 9000167},
    {"Gathersanity: Dreaming Glory - Mote of Life (#18112/22575)", 9000168},
    {"Gathersanity: Dreaming Glory - Dreaming Glory (#18112/22786)", 9000169},
    {"Gathersanity: Dreaming Glory - Fel Lotus (#18112/22794)", 9000170},
    {"Gathersanity: Ragveil - Mote of Life (#18113/22575)", 9000171},
    {"Gathersanity: Ragveil - Ragveil (#18113/22787)", 9000172},
    {"Gathersanity: Ragveil - Fel Lotus (#18113/22794)", 9000173},
    {"Gathersanity: Flame Cap - Flame Cap (#18114/22788)", 9000174},
    {"Gathersanity: Flame Cap - Fel Lotus (#18114/22794)", 9000175},
    {"Gathersanity: Terocone - Mote of Life (#18115/22575)", 9000176},
    {"Gathersanity: Terocone - Terocone (#18115/22789)", 9000177},
    {"Gathersanity: Terocone - Fel Lotus (#18115/22794)", 9000178},
    {"Gathersanity: Ancient Lichen - Ancient Lichen (#18116/22790)", 9000179},
    {"Gathersanity: Ancient Lichen - Fel Lotus (#18116/22794)", 9000180},
    {"Gathersanity: Netherbloom - Mote of Mana (#18117/22576)", 9000181},
    {"Gathersanity: Netherbloom - Netherbloom (#18117/22791)", 9000182},
    {"Gathersanity: Netherbloom - Fel Lotus (#18117/22794)", 9000183},
    {"Gathersanity: Nightmare Vine - Mote of Life (#18118/22575)", 9000184},
    {"Gathersanity: Nightmare Vine - Nightmare Vine (#18118/22792)", 9000185},
    {"Gathersanity: Nightmare Vine - Fel Lotus (#18118/22794)", 9000186},
    {"Gathersanity: Mana Thistle - Mote of Life (#18119/22575)", 9000187},
    {"Gathersanity: Mana Thistle - Mana Thistle (#18119/22793)", 9000188},
    {"Gathersanity: Mana Thistle - Fel Lotus (#18119/22794)", 9000189},
    {"Gathersanity: Fel Iron Deposit - Mote of Earth (#18359/22573)", 9000190},
    {"Gathersanity: Fel Iron Deposit - Mote of Fire (#18359/22574)", 9000191},
    {"Gathersanity: Fel Iron Deposit - Fel Iron Ore (#18359/23424)", 9000192},
    {"Gathersanity: Fel Iron Deposit - Eternium Ore (#18359/23427)", 9000193},
    {"Gathersanity: Adamantite Deposit - Mote of Earth (#18361/22573)", 9000194},
    {"Gathersanity: Adamantite Deposit - Adamantite Ore (#18361/23425)", 9000195},
    {"Gathersanity: Adamantite Deposit - Eternium Ore (#18361/23427)", 9000196},
    {"Gathersanity: Khorium Vein - Mote of Earth (#18363/22573)", 9000197},
    {"Gathersanity: Khorium Vein - Mote of Fire (#18363/22574)", 9000198},
    {"Gathersanity: Khorium Vein - Khorium Ore (#18363/23426)", 9000199},
    {"Gathersanity: Khorium Vein - Eternium Ore (#18363/23427)", 9000200},
    {"Gathersanity: Ragveil - Mote of Life (#19627/22575)", 9000201},
    {"Gathersanity: Ragveil - Ragveil (#19627/22787)", 9000202},
    {"Gathersanity: Ragveil - Fel Lotus (#19627/22794)", 9000203},
    {"Gathersanity: Ragveil - Unidentified Plant Parts (#19627/24401)", 9000204},
    {"Gathersanity: Felweed - Mote of Life (#19628/22575)", 9000205},
    {"Gathersanity: Felweed - Felweed (#19628/22785)", 9000206},
    {"Gathersanity: Felweed - Fel Lotus (#19628/22794)", 9000207},
    {"Gathersanity: Felweed - Unidentified Plant Parts (#19628/24401)", 9000208},
    {"Gathersanity: Dreaming Glory - Mote of Life (#19629/22575)", 9000209},
    {"Gathersanity: Dreaming Glory - Dreaming Glory (#19629/22786)", 9000210},
    {"Gathersanity: Dreaming Glory - Fel Lotus (#19629/22794)", 9000211},
    {"Gathersanity: Dreaming Glory - Unidentified Plant Parts (#19629/24401)", 9000212},
    {"Gathersanity: Blindweed - Blindweed (#19630/8839)", 9000213},
    {"Gathersanity: Blindweed - Unidentified Plant Parts (#19630/24401)", 9000214},
    {"Gathersanity: Sanguine Hibiscus - Sanguine Hibiscus (#19848/24246)", 9000215},
    {"Gathersanity: Nethercite Deposit - Mote of Earth (#22070/22573)", 9000216},
    {"Gathersanity: Nethercite Deposit - Mote of Fire (#22070/22574)", 9000217},
    {"Gathersanity: Nethercite Deposit - Nethercite Ore (#22070/32464)", 9000218},
    {"Gathersanity: Nethercite Deposit - Netherwing Egg (#22070/32506)", 9000219},
    {"Gathersanity: Netherdust Bush - Mote of Mana (#22071/22576)", 9000220},
    {"Gathersanity: Netherdust Bush - Fel Lotus (#22071/22794)", 9000221},
    {"Gathersanity: Netherdust Bush - Netherdust Pollen (#22071/32468)", 9000222},
    {"Gathersanity: Netherdust Bush - Netherwing Egg (#22071/32506)", 9000223},
    {"Gathersanity: Goldclover - Goldclover (#24093/36901)", 9000224},
    {"Gathersanity: Goldclover - Frost Lotus (#24093/36908)", 9000225},
    {"Gathersanity: Goldclover - Crystallized Life (#24093/37704)", 9000226},
    {"Gathersanity: Goldclover - Deadnettle (#24093/37921)", 9000227},
    {"Gathersanity: Cobalt Deposit - Cobalt Ore (#24153/36909)", 9000228},
    {"Gathersanity: Cobalt Deposit - Crystallized Earth (#24153/37701)", 9000229},
    {"Gathersanity: Cobalt Deposit - Crystallized Water (#24153/37705)", 9000230},
    {"Gathersanity: Rich Cobalt Deposit - Cobalt Ore (#24154/36909)", 9000231},
    {"Gathersanity: Rich Cobalt Deposit - Crystallized Earth (#24154/37701)", 9000232},
    {"Gathersanity: Rich Cobalt Deposit - Crystallized Water (#24154/37705)", 9000233},
    {"Gathersanity: Saronite Deposit - Saronite Ore (#24155/36912)", 9000234},
    {"Gathersanity: Saronite Deposit - Crystallized Earth (#24155/37701)", 9000235},
    {"Gathersanity: Saronite Deposit - Crystallized Shadow (#24155/37703)", 9000236},
    {"Gathersanity: Rich Saronite Deposit - Saronite Ore (#24156/36912)", 9000237},
    {"Gathersanity: Rich Saronite Deposit - Crystallized Earth (#24156/37701)", 9000238},
    {"Gathersanity: Rich Saronite Deposit - Crystallized Shadow (#24156/37703)", 9000239},
    {"Gathersanity: Titanium Vein - Titanium Ore (#24157/36910)", 9000240},
    {"Gathersanity: Titanium Vein - Crystallized Air (#24157/37700)", 9000241},
    {"Gathersanity: Titanium Vein - Crystallized Earth (#24157/37701)", 9000242},
    {"Gathersanity: Titanium Vein - Crystallized Fire (#24157/37702)", 9000243},
    {"Gathersanity: Titanium Vein - Crystallized Water (#24157/37705)", 9000244},
    {"Gathersanity: Tiger Lily - Tiger Lily (#24224/36904)", 9000245},
    {"Gathersanity: Tiger Lily - Frost Lotus (#24224/36908)", 9000246},
    {"Gathersanity: Tiger Lily - Crystallized Life (#24224/37704)", 9000247},
    {"Gathersanity: Tiger Lily - Deadnettle (#24224/37921)", 9000248},
    {"Gathersanity: Talandra's Rose - Talandra's Rose (#24225/36907)", 9000249},
    {"Gathersanity: Talandra's Rose - Frost Lotus (#24225/36908)", 9000250},
    {"Gathersanity: Talandra's Rose - Crystallized Life (#24225/37704)", 9000251},
    {"Gathersanity: Talandra's Rose - Deadnettle (#24225/37921)", 9000252},
    {"Gathersanity: Lichbloom - Lichbloom (#24226/36905)", 9000253},
    {"Gathersanity: Lichbloom - Frost Lotus (#24226/36908)", 9000254},
    {"Gathersanity: Lichbloom - Crystallized Life (#24226/37704)", 9000255},
    {"Gathersanity: Icethorn - Icethorn (#24227/36906)", 9000256},
    {"Gathersanity: Icethorn - Frost Lotus (#24227/36908)", 9000257},
    {"Gathersanity: Icethorn - Crystallized Life (#24227/37704)", 9000258},
    {"Gathersanity: Frost Lotus - Frost Lotus (#24228/36908)", 9000259},
    {"Gathersanity: Frost Lotus - Crystallized Life (#24228/37704)", 9000260},
    {"Gathersanity: Frost Lotus - Deadnettle (#24228/37921)", 9000261},
    {"Gathersanity: Firethorn - Frost Lotus (#25089/36908)", 9000262},
    {"Gathersanity: Firethorn - Crystallized Life (#25089/37704)", 9000263},
    {"Gathersanity: Firethorn - Fire Seed (#25089/39969)", 9000264},
    {"Gathersanity: Firethorn - Fire Leaf (#25089/39970)", 9000265},
    {"Gathersanity: Adder's Tongue - Adder's Tongue (#25093/36903)", 9000266},
    {"Gathersanity: Adder's Tongue - Frost Lotus (#25093/36908)", 9000267},
    {"Gathersanity: Adder's Tongue - Crystallized Life (#25093/37704)", 9000268},
    {"Gathersanity: Frozen Herb - Goldclover (#25094/36901)", 9000269},
    {"Gathersanity: Frozen Herb - Tiger Lily (#25094/36904)", 9000270},
    {"Gathersanity: Frozen Herb - Talandra's Rose (#25094/36907)", 9000271},
    {"Gathersanity: Frozen Herb - Goldclover (#25095/36901)", 9000272},
    {"Gathersanity: Frozen Herb - Tiger Lily (#25095/36904)", 9000273},
    {"Gathersanity: Frozen Herb - Talandra's Rose (#25095/36907)", 9000274},
    {"Gathersanity: Frozen Herb - Goldclover (#25096/36901)", 9000275},
    {"Gathersanity: Frozen Herb - Tiger Lily (#25096/36904)", 9000276},
    {"Gathersanity: Frozen Herb - Talandra's Rose (#25096/36907)", 9000277},
    {"Gathersanity: Rich Adamantite Deposit - Mote of Earth (#26861/22573)", 9000278},
    {"Gathersanity: Rich Adamantite Deposit - Adamantite Ore (#26861/23425)", 9000279},
    {"Gathersanity: Rich Adamantite Deposit - Eternium Ore (#26861/23427)", 9000280},
    {"Gathersanity: Pure Saronite Deposit - Eternal Earth (#27244/35624)", 9000281},
    {"Gathersanity: Pure Saronite Deposit - Eternal Shadow (#27244/35627)", 9000282},
    {"Gathersanity: Pure Saronite Deposit - Saronite Ore (#27244/36912)", 9000283},
    {"Gathersanity: Thick Leather (skinning #193/4304)", 9000284},
    {"Gathersanity: Worn Dragonscale (skinning #193/8165)", 9000285},
    {"Gathersanity: Thick Hide (skinning #193/8169)", 9000286},
    {"Gathersanity: Rugged Leather (skinning #193/8170)", 9000287},
    {"Gathersanity: Rugged Hide (skinning #193/8171)", 9000288},
    {"Gathersanity: Blue Dragonscale (skinning #193/15415)", 9000289},
    {"Gathersanity: Light Hide (skinning #441/783)", 9000290},
    {"Gathersanity: Light Leather (skinning #441/2318)", 9000291},
    {"Gathersanity: Medium Hide (skinning #441/4232)", 9000292},
    {"Gathersanity: Black Whelp Scale (skinning #441/7286)", 9000293},
    {"Gathersanity: Medium Leather (skinning #534/2319)", 9000294},
    {"Gathersanity: Medium Hide (skinning #534/4232)", 9000295},
    {"Gathersanity: Heavy Leather (skinning #534/4234)", 9000296},
    {"Gathersanity: Heavy Hide (skinning #534/4235)", 9000297},
    {"Gathersanity: Heavy Leather (skinning #684/4234)", 9000298},
    {"Gathersanity: Heavy Hide (skinning #684/4235)", 9000299},
    {"Gathersanity: Thick Leather (skinning #684/4304)", 9000300},
    {"Gathersanity: Heavy Leather (skinning #729/4234)", 9000301},
    {"Gathersanity: Heavy Hide (skinning #729/4235)", 9000302},
    {"Gathersanity: Thick Leather (skinning #729/4304)", 9000303},
    {"Gathersanity: Thick Leather (skinning #731/4304)", 9000304},
    {"Gathersanity: Thick Hide (skinning #731/8169)", 9000305},
    {"Gathersanity: Rugged Leather (skinning #731/8170)", 9000306},
    {"Gathersanity: Medium Leather (skinning #740/2319)", 9000307},
    {"Gathersanity: Medium Hide (skinning #740/4232)", 9000308},
    {"Gathersanity: Heavy Leather (skinning #740/4234)", 9000309},
    {"Gathersanity: Heavy Hide (skinning #740/4235)", 9000310},
    {"Gathersanity: Green Whelp Scale (skinning #740/7392)", 9000311},
    {"Gathersanity: Medium Leather (skinning #741/2319)", 9000312},
    {"Gathersanity: Medium Hide (skinning #741/4232)", 9000313},
    {"Gathersanity: Heavy Leather (skinning #741/4234)", 9000314},
    {"Gathersanity: Heavy Hide (skinning #741/4235)", 9000315},
    {"Gathersanity: Green Whelp Scale (skinning #741/7392)", 9000316},
    {"Gathersanity: Heavy Leather (skinning #742/4234)", 9000317},
    {"Gathersanity: Heavy Hide (skinning #742/4235)", 9000318},
    {"Gathersanity: Thick Leather (skinning #742/4304)", 9000319},
    {"Gathersanity: Worn Dragonscale (skinning #742/8165)", 9000320},
    {"Gathersanity: Thick Hide (skinning #742/8169)", 9000321},
    {"Gathersanity: Green Dragonscale (skinning #742/15412)", 9000322},
    {"Gathersanity: Heavy Leather (skinning #743/4234)", 9000323},
    {"Gathersanity: Heavy Hide (skinning #743/4235)", 9000324},
    {"Gathersanity: Thick Leather (skinning #743/4304)", 9000325},
    {"Gathersanity: Worn Dragonscale (skinning #743/8165)", 9000326},
    {"Gathersanity: Thick Hide (skinning #743/8169)", 9000327},
    {"Gathersanity: Green Dragonscale (skinning #743/15412)", 9000328},
    {"Gathersanity: Heavy Leather (skinning #744/4234)", 9000329},
    {"Gathersanity: Heavy Hide (skinning #744/4235)", 9000330},
    {"Gathersanity: Thick Leather (skinning #744/4304)", 9000331},
    {"Gathersanity: Worn Dragonscale (skinning #744/8165)", 9000332},
    {"Gathersanity: Thick Hide (skinning #744/8169)", 9000333},
    {"Gathersanity: Green Dragonscale (skinning #744/15412)", 9000334},
    {"Gathersanity: Heavy Leather (skinning #745/4234)", 9000335},
    {"Gathersanity: Heavy Hide (skinning #745/4235)", 9000336},
    {"Gathersanity: Thick Leather (skinning #745/4304)", 9000337},
    {"Gathersanity: Worn Dragonscale (skinning #745/8165)", 9000338},
    {"Gathersanity: Thick Hide (skinning #745/8169)", 9000339},
    {"Gathersanity: Green Dragonscale (skinning #745/15412)", 9000340},
    {"Gathersanity: Heavy Leather (skinning #746/4234)", 9000341},
    {"Gathersanity: Heavy Hide (skinning #746/4235)", 9000342},
    {"Gathersanity: Thick Leather (skinning #746/4304)", 9000343},
    {"Gathersanity: Worn Dragonscale (skinning #746/8165)", 9000344},
    {"Gathersanity: Thick Hide (skinning #746/8169)", 9000345},
    {"Gathersanity: Green Dragonscale (skinning #746/15412)", 9000346},
    {"Gathersanity: Heavy Leather (skinning #768/4234)", 9000347},
    {"Gathersanity: Heavy Hide (skinning #768/4235)", 9000348},
    {"Gathersanity: Thick Leather (skinning #768/4304)", 9000349},
    {"Gathersanity: Shiny Fish Scales (skinning #905/17057)", 9000350},
    {"Gathersanity: Medium Leather (skinning #976/2319)", 9000351},
    {"Gathersanity: Medium Hide (skinning #976/4232)", 9000352},
    {"Gathersanity: Heavy Leather (skinning #976/4234)", 9000353},
    {"Gathersanity: Medium Leather (skinning #977/2319)", 9000354},
    {"Gathersanity: Medium Hide (skinning #977/4232)", 9000355},
    {"Gathersanity: Heavy Leather (skinning #977/4234)", 9000356},
    {"Gathersanity: Heavy Hide (skinning #977/4235)", 9000357},
    {"Gathersanity: Medium Leather (skinning #1044/2319)", 9000358},
    {"Gathersanity: Medium Hide (skinning #1044/4232)", 9000359},
    {"Gathersanity: Heavy Leather (skinning #1044/4234)", 9000360},
    {"Gathersanity: Heavy Hide (skinning #1044/4235)", 9000361},
    {"Gathersanity: Red Whelp Scale (skinning #1044/7287)", 9000362},
    {"Gathersanity: Thick Leather (skinning #1045/4304)", 9000363},
    {"Gathersanity: Worn Dragonscale (skinning #1045/8165)", 9000364},
    {"Gathersanity: Rugged Leather (skinning #1045/8170)", 9000365},
    {"Gathersanity: Rugged Hide (skinning #1045/8171)", 9000366},
    {"Gathersanity: Red Dragonscale (skinning #1045/15414)", 9000367},
    {"Gathersanity: Thick Leather (skinning #1046/4304)", 9000368},
    {"Gathersanity: Worn Dragonscale (skinning #1046/8165)", 9000369},
    {"Gathersanity: Rugged Leather (skinning #1046/8170)", 9000370},
    {"Gathersanity: Rugged Hide (skinning #1046/8171)", 9000371},
    {"Gathersanity: Red Dragonscale (skinning #1046/15414)", 9000372},
    {"Gathersanity: Thick Leather (skinning #1047/4304)", 9000373},
    {"Gathersanity: Worn Dragonscale (skinning #1047/8165)", 9000374},
    {"Gathersanity: Rugged Leather (skinning #1047/8170)", 9000375},
    {"Gathersanity: Rugged Hide (skinning #1047/8171)", 9000376},
    {"Gathersanity: Red Dragonscale (skinning #1047/15414)", 9000377},
    {"Gathersanity: Thick Leather (skinning #1048/4304)", 9000378},
    {"Gathersanity: Worn Dragonscale (skinning #1048/8165)", 9000379},
    {"Gathersanity: Rugged Leather (skinning #1048/8170)", 9000380},
    {"Gathersanity: Rugged Hide (skinning #1048/8171)", 9000381},
    {"Gathersanity: Red Dragonscale (skinning #1048/15414)", 9000382},
    {"Gathersanity: Thick Leather (skinning #1049/4304)", 9000383},
    {"Gathersanity: Worn Dragonscale (skinning #1049/8165)", 9000384},
    {"Gathersanity: Rugged Leather (skinning #1049/8170)", 9000385},
    {"Gathersanity: Rugged Hide (skinning #1049/8171)", 9000386},
    {"Gathersanity: Red Dragonscale (skinning #1049/15414)", 9000387},
    {"Gathersanity: Thick Leather (skinning #1050/4304)", 9000388},
    {"Gathersanity: Worn Dragonscale (skinning #1050/8165)", 9000389},
    {"Gathersanity: Rugged Leather (skinning #1050/8170)", 9000390},
    {"Gathersanity: Rugged Hide (skinning #1050/8171)", 9000391},
    {"Gathersanity: Red Dragonscale (skinning #1050/15414)", 9000392},
    {"Gathersanity: Thick Leather (skinning #1063/4304)", 9000393},
    {"Gathersanity: Rugged Leather (skinning #1063/8170)", 9000394},
    {"Gathersanity: Green Dragonscale (skinning #1063/15412)", 9000395},
    {"Gathersanity: Shiny Fish Scales (skinning #1193/17057)", 9000396},
    {"Gathersanity: Light Hide (skinning #1388/783)", 9000397},
    {"Gathersanity: Light Leather (skinning #1388/2318)", 9000398},
    {"Gathersanity: Ruined Leather Scraps (skinning #1388/2934)", 9000399},
    {"Gathersanity: Heavy Leather (skinning #1552/4234)", 9000400},
    {"Gathersanity: Heavy Hide (skinning #1552/4235)", 9000401},
    {"Gathersanity: Thick Leather (skinning #1552/4304)", 9000402},
    {"Gathersanity: Thick Leather (skinning #1559/4304)", 9000403},
    {"Gathersanity: Thick Hide (skinning #1559/8169)", 9000404},
    {"Gathersanity: Rugged Leather (skinning #1559/8170)", 9000405},
    {"Gathersanity: Rugged Hide (skinning #1559/8171)", 9000406},
    {"Gathersanity: Heavy Leather (skinning #1713/4234)", 9000407},
    {"Gathersanity: Heavy Hide (skinning #1713/4235)", 9000408},
    {"Gathersanity: Thick Leather (skinning #1713/4304)", 9000409},
    {"Gathersanity: Thick Leather (skinning #1815/4304)", 9000410},
    {"Gathersanity: Thick Hide (skinning #1815/8169)", 9000411},
    {"Gathersanity: Rugged Leather (skinning #1815/8170)", 9000412},
    {"Gathersanity: Rugged Hide (skinning #1815/8171)", 9000413},
    {"Gathersanity: Warbear Leather (skinning #1815/15419)", 9000414},
    {"Gathersanity: Thick Leather (skinning #1816/4304)", 9000415},
    {"Gathersanity: Rugged Leather (skinning #1816/8170)", 9000416},
    {"Gathersanity: Rugged Hide (skinning #1816/8171)", 9000417},
    {"Gathersanity: Warbear Leather (skinning #1816/15419)", 9000418},
    {"Gathersanity: Thick Leather (skinning #1817/4304)", 9000419},
    {"Gathersanity: Thick Hide (skinning #1817/8169)", 9000420},
    {"Gathersanity: Rugged Leather (skinning #1817/8170)", 9000421},
    {"Gathersanity: Rugged Hide (skinning #1817/8171)", 9000422},
    {"Gathersanity: Light Hide (skinning #1891/783)", 9000423},
    {"Gathersanity: Light Leather (skinning #1891/2318)", 9000424},
    {"Gathersanity: Ruined Leather Scraps (skinning #1891/2934)", 9000425},
    {"Gathersanity: Light Hide (skinning #1894/783)", 9000426},
    {"Gathersanity: Light Leather (skinning #1894/2318)", 9000427},
    {"Gathersanity: Ruined Leather Scraps (skinning #1894/2934)", 9000428},
    {"Gathersanity: Light Hide (skinning #1895/783)", 9000429},
    {"Gathersanity: Light Leather (skinning #1895/2318)", 9000430},
    {"Gathersanity: Ruined Leather Scraps (skinning #1895/2934)", 9000431},
    {"Gathersanity: Light Leather (skinning #1933/2318)", 9000432},
    {"Gathersanity: Wool Cloth (skinning #1933/2592)", 9000433},
    {"Gathersanity: Ruined Leather Scraps (skinning #1933/2934)", 9000434},
    {"Gathersanity: Shiny Fish Scales (skinning #2173/17057)", 9000435},
    {"Gathersanity: Shiny Fish Scales (skinning #2174/17057)", 9000436},
    {"Gathersanity: Heavy Leather (skinning #2347/4234)", 9000437},
    {"Gathersanity: Thick Leather (skinning #2347/4304)", 9000438},
    {"Gathersanity: Heavy Leather (skinning #2447/4234)", 9000439},
    {"Gathersanity: Heavy Hide (skinning #2447/4235)", 9000440},
    {"Gathersanity: Thick Leather (skinning #2447/4304)", 9000441},
    {"Gathersanity: Worn Dragonscale (skinning #2447/8165)", 9000442},
    {"Gathersanity: Thick Hide (skinning #2447/8169)", 9000443},
    {"Gathersanity: Heavy Leather (skinning #2452/4234)", 9000444},
    {"Gathersanity: Heavy Hide (skinning #2452/4235)", 9000445},
    {"Gathersanity: Thick Leather (skinning #2452/4304)", 9000446},
    {"Gathersanity: Heavy Leather (skinning #2474/4234)", 9000447},
    {"Gathersanity: Heavy Hide (skinning #2474/4235)", 9000448},
    {"Gathersanity: Thick Leather (skinning #2474/4304)", 9000449},
    {"Gathersanity: Thick Leather (skinning #2505/4304)", 9000450},
    {"Gathersanity: Turtle Scale (skinning #2505/8167)", 9000451},
    {"Gathersanity: Thick Hide (skinning #2505/8169)", 9000452},
    {"Gathersanity: Rugged Leather (skinning #2505/8170)", 9000453},
    {"Gathersanity: Thick Leather (skinning #2521/4304)", 9000454},
    {"Gathersanity: Thick Hide (skinning #2521/8169)", 9000455},
    {"Gathersanity: Rugged Leather (skinning #2521/8170)", 9000456},
    {"Gathersanity: Thick Leather (skinning #2522/4304)", 9000457},
    {"Gathersanity: Thick Hide (skinning #2522/8169)", 9000458},
    {"Gathersanity: Rugged Leather (skinning #2522/8170)", 9000459},
    {"Gathersanity: Heavy Leather (skinning #2635/4234)", 9000460},
    {"Gathersanity: Heavy Hide (skinning #2635/4235)", 9000461},
    {"Gathersanity: Thick Leather (skinning #2635/4304)", 9000462},
    {"Gathersanity: Thick Leather (skinning #2659/4304)", 9000463},
    {"Gathersanity: Thick Hide (skinning #2659/8169)", 9000464},
    {"Gathersanity: Rugged Leather (skinning #2659/8170)", 9000465},
    {"Gathersanity: Thick Leather (skinning #2680/4304)", 9000466},
    {"Gathersanity: Thick Hide (skinning #2680/8169)", 9000467},
    {"Gathersanity: Rugged Leather (skinning #2680/8170)", 9000468},
    {"Gathersanity: Thick Leather (skinning #2681/4304)", 9000469},
    {"Gathersanity: Thick Hide (skinning #2681/8169)", 9000470},
    {"Gathersanity: Rugged Leather (skinning #2681/8170)", 9000471},
    {"Gathersanity: Heavy Leather (skinning #2725/4234)", 9000472},
    {"Gathersanity: Heavy Hide (skinning #2725/4235)", 9000473},
    {"Gathersanity: Thick Leather (skinning #2725/4304)", 9000474},
    {"Gathersanity: Worn Dragonscale (skinning #2725/8165)", 9000475},
    {"Gathersanity: Thick Hide (skinning #2725/8169)", 9000476},
    {"Gathersanity: Heavy Leather (skinning #2726/4234)", 9000477},
    {"Gathersanity: Heavy Hide (skinning #2726/4235)", 9000478},
    {"Gathersanity: Thick Leather (skinning #2726/4304)", 9000479},
    {"Gathersanity: Worn Dragonscale (skinning #2726/8165)", 9000480},
    {"Gathersanity: Thick Hide (skinning #2726/8169)", 9000481},
    {"Gathersanity: Heavy Leather (skinning #2730/4234)", 9000482},
    {"Gathersanity: Heavy Hide (skinning #2730/4235)", 9000483},
    {"Gathersanity: Thick Leather (skinning #2730/4304)", 9000484},
    {"Gathersanity: Thick Hide (skinning #2730/8169)", 9000485},
    {"Gathersanity: Heavy Leather (skinning #2753/4234)", 9000486},
    {"Gathersanity: Heavy Hide (skinning #2753/4235)", 9000487},
    {"Gathersanity: Thick Leather (skinning #2753/4304)", 9000488},
    {"Gathersanity: Thick Leather (skinning #2757/4304)", 9000489},
    {"Gathersanity: Rugged Leather (skinning #2757/8170)", 9000490},
    {"Gathersanity: Rugged Hide (skinning #2757/8171)", 9000491},
    {"Gathersanity: Thick Leather (skinning #2759/4304)", 9000492},
    {"Gathersanity: Rugged Leather (skinning #2759/8170)", 9000493},
    {"Gathersanity: Rugged Hide (skinning #2759/8171)", 9000494},
    {"Gathersanity: Heavy Leather (skinning #2850/4234)", 9000495},
    {"Gathersanity: Thick Leather (skinning #2850/4304)", 9000496},
    {"Gathersanity: Thick Hide (skinning #2850/8169)", 9000497},
    {"Gathersanity: Heavy Leather (skinning #2923/4234)", 9000498},
    {"Gathersanity: Heavy Hide (skinning #2923/4235)", 9000499},
    {"Gathersanity: Thick Leather (skinning #2923/4304)", 9000500},
    {"Gathersanity: Thick Hide (skinning #2923/8169)", 9000501},
    {"Gathersanity: Heavy Leather (skinning #2924/4234)", 9000502},
    {"Gathersanity: Heavy Hide (skinning #2924/4235)", 9000503},
    {"Gathersanity: Thick Leather (skinning #2924/4304)", 9000504},
    {"Gathersanity: Thick Hide (skinning #2924/8169)", 9000505},
    {"Gathersanity: Thick Leather (skinning #2925/4304)", 9000506},
    {"Gathersanity: Thick Hide (skinning #2925/8169)", 9000507},
    {"Gathersanity: Rugged Leather (skinning #2925/8170)", 9000508},
    {"Gathersanity: Thick Leather (skinning #2926/4304)", 9000509},
    {"Gathersanity: Thick Hide (skinning #2926/8169)", 9000510},
    {"Gathersanity: Rugged Leather (skinning #2926/8170)", 9000511},
    {"Gathersanity: Light Leather (skinning #3529/2318)", 9000512},
    {"Gathersanity: Ruined Leather Scraps (skinning #3529/2934)", 9000513},
    {"Gathersanity: Light Hide (skinning #3530/783)", 9000514},
    {"Gathersanity: Light Leather (skinning #3530/2318)", 9000515},
    {"Gathersanity: Ruined Leather Scraps (skinning #3530/2934)", 9000516},
    {"Gathersanity: Light Hide (skinning #3532/783)", 9000517},
    {"Gathersanity: Light Leather (skinning #3532/2318)", 9000518},
    {"Gathersanity: Ruined Leather Scraps (skinning #3533/2934)", 9000519},
    {"Gathersanity: Light Hide (skinning #3619/783)", 9000520},
    {"Gathersanity: Light Leather (skinning #3619/2318)", 9000521},
    {"Gathersanity: Medium Leather (skinning #3619/2319)", 9000522},
    {"Gathersanity: Light Leather (skinning #3652/2318)", 9000523},
    {"Gathersanity: Medium Leather (skinning #3652/2319)", 9000524},
    {"Gathersanity: Medium Leather (skinning #3674/2319)", 9000525},
    {"Gathersanity: Medium Hide (skinning #3674/4232)", 9000526},
    {"Gathersanity: Light Leather (skinning #3722/2318)", 9000527},
    {"Gathersanity: Medium Leather (skinning #3722/2319)", 9000528},
    {"Gathersanity: Medium Hide (skinning #3722/4232)", 9000529},
    {"Gathersanity: Medium Leather (skinning #3792/2319)", 9000530},
    {"Gathersanity: Heavy Leather (skinning #3792/4234)", 9000531},
    {"Gathersanity: Medium Leather (skinning #4066/2319)", 9000532},
    {"Gathersanity: Medium Hide (skinning #4066/4232)", 9000533},
    {"Gathersanity: Heavy Leather (skinning #4066/4234)", 9000534},
    {"Gathersanity: Heavy Hide (skinning #4066/4235)", 9000535},
    {"Gathersanity: Heavy Leather (skinning #4323/4234)", 9000536},
    {"Gathersanity: Heavy Hide (skinning #4323/4235)", 9000537},
    {"Gathersanity: Thick Leather (skinning #4323/4304)", 9000538},
    {"Gathersanity: Worn Dragonscale (skinning #4323/8165)", 9000539},
    {"Gathersanity: Thick Hide (skinning #4323/8169)", 9000540},
    {"Gathersanity: Heavy Leather (skinning #4324/4234)", 9000541},
    {"Gathersanity: Heavy Hide (skinning #4324/4235)", 9000542},
    {"Gathersanity: Thick Leather (skinning #4324/4304)", 9000543},
    {"Gathersanity: Worn Dragonscale (skinning #4324/8165)", 9000544},
    {"Gathersanity: Thick Hide (skinning #4324/8169)", 9000545},
    {"Gathersanity: Heavy Leather (skinning #4328/4234)", 9000546},
    {"Gathersanity: Heavy Hide (skinning #4328/4235)", 9000547},
    {"Gathersanity: Thick Leather (skinning #4328/4304)", 9000548},
    {"Gathersanity: Worn Dragonscale (skinning #4328/8165)", 9000549},
    {"Gathersanity: Thick Hide (skinning #4328/8169)", 9000550},
    {"Gathersanity: Heavy Leather (skinning #4329/4234)", 9000551},
    {"Gathersanity: Heavy Hide (skinning #4329/4235)", 9000552},
    {"Gathersanity: Thick Leather (skinning #4329/4304)", 9000553},
    {"Gathersanity: Worn Dragonscale (skinning #4329/8165)", 9000554},
    {"Gathersanity: Thick Hide (skinning #4329/8169)", 9000555},
    {"Gathersanity: Heavy Leather (skinning #4331/4234)", 9000556},
    {"Gathersanity: Heavy Hide (skinning #4331/4235)", 9000557},
    {"Gathersanity: Thick Leather (skinning #4331/4304)", 9000558},
    {"Gathersanity: Worn Dragonscale (skinning #4331/8165)", 9000559},
    {"Gathersanity: Thick Hide (skinning #4331/8169)", 9000560},
    {"Gathersanity: Heavy Leather (skinning #4334/4234)", 9000561},
    {"Gathersanity: Heavy Hide (skinning #4334/4235)", 9000562},
    {"Gathersanity: Thick Leather (skinning #4334/4304)", 9000563},
    {"Gathersanity: Worn Dragonscale (skinning #4334/8165)", 9000564},
    {"Gathersanity: Thick Hide (skinning #4334/8169)", 9000565},
    {"Gathersanity: Heavy Leather (skinning #4339/4234)", 9000566},
    {"Gathersanity: Thick Leather (skinning #4339/4304)", 9000567},
    {"Gathersanity: Worn Dragonscale (skinning #4339/8165)", 9000568},
    {"Gathersanity: Thick Hide (skinning #4339/8169)", 9000569},
    {"Gathersanity: Medium Leather (skinning #4346/2319)", 9000570},
    {"Gathersanity: Medium Hide (skinning #4346/4232)", 9000571},
    {"Gathersanity: Heavy Leather (skinning #4346/4234)", 9000572},
    {"Gathersanity: Heavy Hide (skinning #4346/4235)", 9000573},
    {"Gathersanity: Thick Leather (skinning #4374/4304)", 9000574},
    {"Gathersanity: Rugged Leather (skinning #4374/8170)", 9000575},
    {"Gathersanity: Rugged Hide (skinning #4374/8171)", 9000576},
    {"Gathersanity: Heavy Leather (skinning #4390/4234)", 9000577},
    {"Gathersanity: Heavy Hide (skinning #4390/4235)", 9000578},
    {"Gathersanity: Thick Leather (skinning #4390/4304)", 9000579},
    {"Gathersanity: Thick Hide (skinning #4390/8169)", 9000580},
    {"Gathersanity: Heavy Leather (skinning #4396/4234)", 9000581},
    {"Gathersanity: Heavy Hide (skinning #4396/4235)", 9000582},
    {"Gathersanity: Thick Leather (skinning #4396/4304)", 9000583},
    {"Gathersanity: Turtle Scale (skinning #4396/8167)", 9000584},
    {"Gathersanity: Heavy Leather (skinning #4397/4234)", 9000585},
    {"Gathersanity: Heavy Hide (skinning #4397/4235)", 9000586},
    {"Gathersanity: Thick Leather (skinning #4397/4304)", 9000587},
    {"Gathersanity: Turtle Scale (skinning #4397/8167)", 9000588},
    {"Gathersanity: Heavy Leather (skinning #4398/4234)", 9000589},
    {"Gathersanity: Heavy Hide (skinning #4398/4235)", 9000590},
    {"Gathersanity: Thick Leather (skinning #4398/4304)", 9000591},
    {"Gathersanity: Turtle Scale (skinning #4398/8167)", 9000592},
    {"Gathersanity: Heavy Leather (skinning #4399/4234)", 9000593},
    {"Gathersanity: Heavy Hide (skinning #4399/4235)", 9000594},
    {"Gathersanity: Thick Leather (skinning #4399/4304)", 9000595},
    {"Gathersanity: Turtle Scale (skinning #4399/8167)", 9000596},
    {"Gathersanity: Thick Hide (skinning #4399/8169)", 9000597},
    {"Gathersanity: Heavy Leather (skinning #4400/4234)", 9000598},
    {"Gathersanity: Heavy Hide (skinning #4400/4235)", 9000599},
    {"Gathersanity: Thick Leather (skinning #4400/4304)", 9000600},
    {"Gathersanity: Turtle Scale (skinning #4400/8167)", 9000601},
    {"Gathersanity: Thick Hide (skinning #4400/8169)", 9000602},
    {"Gathersanity: Heavy Leather (skinning #4422/4234)", 9000603},
    {"Gathersanity: Heavy Hide (skinning #4422/4235)", 9000604},
    {"Gathersanity: Medium Leather (skinning #4425/2319)", 9000605},
    {"Gathersanity: Medium Hide (skinning #4425/4232)", 9000606},
    {"Gathersanity: Heavy Leather (skinning #4425/4234)", 9000607},
    {"Gathersanity: Heavy Leather (skinning #4504/4234)", 9000608},
    {"Gathersanity: Heavy Hide (skinning #4504/4235)", 9000609},
    {"Gathersanity: Thick Leather (skinning #4504/4304)", 9000610},
    {"Gathersanity: Medium Leather (skinning #4512/2319)", 9000611},
    {"Gathersanity: Medium Hide (skinning #4512/4232)", 9000612},
    {"Gathersanity: Heavy Leather (skinning #4512/4234)", 9000613},
    {"Gathersanity: Heavy Hide (skinning #4512/4235)", 9000614},
    {"Gathersanity: Medium Leather (skinning #4539/2319)", 9000615},
    {"Gathersanity: Medium Hide (skinning #4539/4232)", 9000616},
    {"Gathersanity: Heavy Leather (skinning #4539/4234)", 9000617},
    {"Gathersanity: Heavy Hide (skinning #4539/4235)", 9000618},
    {"Gathersanity: Heavy Leather (skinning #4660/4234)", 9000619},
    {"Gathersanity: Thick Leather (skinning #4660/4304)", 9000620},
    {"Gathersanity: Heavy Leather (skinning #4830/4234)", 9000621},
    {"Gathersanity: Heavy Hide (skinning #4830/4235)", 9000622},
    {"Gathersanity: Heavy Leather (skinning #4861/4234)", 9000623},
    {"Gathersanity: Heavy Hide (skinning #4861/4235)", 9000624},
    {"Gathersanity: Thick Leather (skinning #4861/4304)", 9000625},
    {"Gathersanity: Heavy Leather (skinning #4863/4234)", 9000626},
    {"Gathersanity: Heavy Hide (skinning #4863/4235)", 9000627},
    {"Gathersanity: Thick Leather (skinning #4863/4304)", 9000628},
    {"Gathersanity: Thick Leather (skinning #5225/4304)", 9000629},
    {"Gathersanity: Thick Hide (skinning #5225/8169)", 9000630},
    {"Gathersanity: Rugged Leather (skinning #5225/8170)", 9000631},
    {"Gathersanity: Thick Leather (skinning #5226/4304)", 9000632},
    {"Gathersanity: Thick Hide (skinning #5226/8169)", 9000633},
    {"Gathersanity: Rugged Leather (skinning #5226/8170)", 9000634},
    {"Gathersanity: Thick Leather (skinning #5262/4304)", 9000635},
    {"Gathersanity: Thick Hide (skinning #5262/8169)", 9000636},
    {"Gathersanity: Rugged Leather (skinning #5262/8170)", 9000637},
    {"Gathersanity: Thick Leather (skinning #5274/4304)", 9000638},
    {"Gathersanity: Thick Hide (skinning #5274/8169)", 9000639},
    {"Gathersanity: Rugged Leather (skinning #5274/8170)", 9000640},
    {"Gathersanity: Thick Leather (skinning #5276/4304)", 9000641},
    {"Gathersanity: Worn Dragonscale (skinning #5276/8165)", 9000642},
    {"Gathersanity: Thick Hide (skinning #5276/8169)", 9000643},
    {"Gathersanity: Rugged Leather (skinning #5276/8170)", 9000644},
    {"Gathersanity: Thick Leather (skinning #5277/4304)", 9000645},
    {"Gathersanity: Worn Dragonscale (skinning #5277/8165)", 9000646},
    {"Gathersanity: Thick Hide (skinning #5277/8169)", 9000647},
    {"Gathersanity: Rugged Leather (skinning #5277/8170)", 9000648},
    {"Gathersanity: Green Dragonscale (skinning #5277/15412)", 9000649},
    {"Gathersanity: Heavy Leather (skinning #5278/4234)", 9000650},
    {"Gathersanity: Heavy Hide (skinning #5278/4235)", 9000651},
    {"Gathersanity: Thick Leather (skinning #5278/4304)", 9000652},
    {"Gathersanity: Worn Dragonscale (skinning #5278/8165)", 9000653},
    {"Gathersanity: Thick Hide (skinning #5278/8169)", 9000654},
    {"Gathersanity: Thick Leather (skinning #5280/4304)", 9000655},
    {"Gathersanity: Worn Dragonscale (skinning #5280/8165)", 9000656},
    {"Gathersanity: Thick Hide (skinning #5280/8169)", 9000657},
    {"Gathersanity: Rugged Leather (skinning #5280/8170)", 9000658},
    {"Gathersanity: Green Dragonscale (skinning #5280/15412)", 9000659},
    {"Gathersanity: Thick Leather (skinning #5283/4304)", 9000660},
    {"Gathersanity: Worn Dragonscale (skinning #5283/8165)", 9000661},
    {"Gathersanity: Thick Hide (skinning #5283/8169)", 9000662},
    {"Gathersanity: Rugged Leather (skinning #5283/8170)", 9000663},
    {"Gathersanity: Green Dragonscale (skinning #5283/15412)", 9000664},
    {"Gathersanity: Heavy Leather (skinning #5286/4234)", 9000665},
    {"Gathersanity: Heavy Hide (skinning #5286/4235)", 9000666},
    {"Gathersanity: Thick Leather (skinning #5286/4304)", 9000667},
    {"Gathersanity: Thick Hide (skinning #5286/8169)", 9000668},
    {"Gathersanity: Heavy Leather (skinning #5287/4234)", 9000669},
    {"Gathersanity: Heavy Hide (skinning #5287/4235)", 9000670},
    {"Gathersanity: Thick Leather (skinning #5287/4304)", 9000671},
    {"Gathersanity: Thick Hide (skinning #5287/8169)", 9000672},
    {"Gathersanity: Thick Leather (skinning #5288/4304)", 9000673},
    {"Gathersanity: Thick Hide (skinning #5288/8169)", 9000674},
    {"Gathersanity: Rugged Leather (skinning #5288/8170)", 9000675},
    {"Gathersanity: Thick Leather (skinning #5291/4304)", 9000676},
    {"Gathersanity: Thick Hide (skinning #5291/8169)", 9000677},
    {"Gathersanity: Rugged Leather (skinning #5291/8170)", 9000678},
    {"Gathersanity: Heavy Leather (skinning #5292/4234)", 9000679},
    {"Gathersanity: Heavy Hide (skinning #5292/4235)", 9000680},
    {"Gathersanity: Thick Leather (skinning #5292/4304)", 9000681},
    {"Gathersanity: Thick Hide (skinning #5292/8169)", 9000682},
    {"Gathersanity: Heavy Leather (skinning #5293/4234)", 9000683},
    {"Gathersanity: Heavy Hide (skinning #5293/4235)", 9000684},
    {"Gathersanity: Thick Leather (skinning #5293/4304)", 9000685},
    {"Gathersanity: Thick Hide (skinning #5293/8169)", 9000686},
    {"Gathersanity: Heavy Leather (skinning #5295/4234)", 9000687},
    {"Gathersanity: Heavy Hide (skinning #5295/4235)", 9000688},
    {"Gathersanity: Thick Leather (skinning #5295/4304)", 9000689},
    {"Gathersanity: Thick Hide (skinning #5295/8169)", 9000690},
    {"Gathersanity: Thick Leather (skinning #5296/4304)", 9000691},
    {"Gathersanity: Thick Hide (skinning #5296/8169)", 9000692},
    {"Gathersanity: Rugged Leather (skinning #5296/8170)", 9000693},
    {"Gathersanity: Thick Leather (skinning #5297/4304)", 9000694},
    {"Gathersanity: Thick Hide (skinning #5297/8169)", 9000695},
    {"Gathersanity: Rugged Leather (skinning #5297/8170)", 9000696},
    {"Gathersanity: Thick Leather (skinning #5299/4304)", 9000697},
    {"Gathersanity: Thick Hide (skinning #5299/8169)", 9000698},
    {"Gathersanity: Rugged Leather (skinning #5299/8170)", 9000699},
    {"Gathersanity: Thick Leather (skinning #5306/4304)", 9000700},
    {"Gathersanity: Thick Hide (skinning #5306/8169)", 9000701},
    {"Gathersanity: Rugged Leather (skinning #5306/8170)", 9000702},
    {"Gathersanity: Thick Leather (skinning #5319/4304)", 9000703},
    {"Gathersanity: Worn Dragonscale (skinning #5319/8165)", 9000704},
    {"Gathersanity: Rugged Leather (skinning #5319/8170)", 9000705},
    {"Gathersanity: Rugged Hide (skinning #5319/8171)", 9000706},
    {"Gathersanity: Green Dragonscale (skinning #5319/15412)", 9000707},
    {"Gathersanity: Thick Leather (skinning #5320/4304)", 9000708},
    {"Gathersanity: Worn Dragonscale (skinning #5320/8165)", 9000709},
    {"Gathersanity: Rugged Leather (skinning #5320/8170)", 9000710},
    {"Gathersanity: Rugged Hide (skinning #5320/8171)", 9000711},
    {"Gathersanity: Green Dragonscale (skinning #5320/15412)", 9000712},
    {"Gathersanity: Thick Leather (skinning #5346/4304)", 9000713},
    {"Gathersanity: Thick Hide (skinning #5346/8169)", 9000714},
    {"Gathersanity: Rugged Leather (skinning #5346/8170)", 9000715},
    {"Gathersanity: Thick Leather (skinning #5349/4304)", 9000716},
    {"Gathersanity: Thick Hide (skinning #5349/8169)", 9000717},
    {"Gathersanity: Rugged Leather (skinning #5349/8170)", 9000718},
    {"Gathersanity: Heavy Leather (skinning #5356/4234)", 9000719},
    {"Gathersanity: Heavy Hide (skinning #5356/4235)", 9000720},
    {"Gathersanity: Thick Leather (skinning #5356/4304)", 9000721},
    {"Gathersanity: Thick Leather (skinning #5421/4304)", 9000722},
    {"Gathersanity: Thick Hide (skinning #5421/8169)", 9000723},
    {"Gathersanity: Rugged Leather (skinning #5421/8170)", 9000724},
    {"Gathersanity: Heavy Leather (skinning #5422/4234)", 9000725},
    {"Gathersanity: Heavy Hide (skinning #5422/4235)", 9000726},
    {"Gathersanity: Thick Leather (skinning #5422/4304)", 9000727},
    {"Gathersanity: Scorpid Scale (skinning #5422/8154)", 9000728},
    {"Gathersanity: Thick Hide (skinning #5422/8169)", 9000729},
    {"Gathersanity: Heavy Leather (skinning #5423/4234)", 9000730},
    {"Gathersanity: Heavy Hide (skinning #5423/4235)", 9000731},
    {"Gathersanity: Thick Leather (skinning #5423/4304)", 9000732},
    {"Gathersanity: Scorpid Scale (skinning #5423/8154)", 9000733},
    {"Gathersanity: Thick Hide (skinning #5423/8169)", 9000734},
    {"Gathersanity: Thick Leather (skinning #5424/4304)", 9000735},
    {"Gathersanity: Scorpid Scale (skinning #5424/8154)", 9000736},
    {"Gathersanity: Thick Hide (skinning #5424/8169)", 9000737},
    {"Gathersanity: Rugged Leather (skinning #5424/8170)", 9000738},
    {"Gathersanity: Thick Leather (skinning #5427/4304)", 9000739},
    {"Gathersanity: Thick Hide (skinning #5427/8169)", 9000740},
    {"Gathersanity: Rugged Leather (skinning #5427/8170)", 9000741},
    {"Gathersanity: Thick Leather (skinning #5431/4304)", 9000742},
    {"Gathersanity: Turtle Scale (skinning #5431/8167)", 9000743},
    {"Gathersanity: Thick Hide (skinning #5431/8169)", 9000744},
    {"Gathersanity: Rugged Leather (skinning #5431/8170)", 9000745},
    {"Gathersanity: Thick Leather (skinning #5708/4304)", 9000746},
    {"Gathersanity: Thick Hide (skinning #5708/8169)", 9000747},
    {"Gathersanity: Rugged Leather (skinning #5708/8170)", 9000748},
    {"Gathersanity: Rugged Hide (skinning #5708/8171)", 9000749},
    {"Gathersanity: Thick Leather (skinning #5709/4304)", 9000750},
    {"Gathersanity: Worn Dragonscale (skinning #5709/8165)", 9000751},
    {"Gathersanity: Thick Hide (skinning #5709/8169)", 9000752},
    {"Gathersanity: Rugged Leather (skinning #5709/8170)", 9000753},
    {"Gathersanity: Rugged Hide (skinning #5709/8171)", 9000754},
    {"Gathersanity: Green Dragonscale (skinning #5709/15412)", 9000755},
    {"Gathersanity: Worn Dragonscale (skinning #5719/8165)", 9000756},
    {"Gathersanity: Thick Hide (skinning #5719/8169)", 9000757},
    {"Gathersanity: Rugged Leather (skinning #5719/8170)", 9000758},
    {"Gathersanity: Green Dragonscale (skinning #5719/15412)", 9000759},
    {"Gathersanity: Worn Dragonscale (skinning #5720/8165)", 9000760},
    {"Gathersanity: Thick Hide (skinning #5720/8169)", 9000761},
    {"Gathersanity: Rugged Leather (skinning #5720/8170)", 9000762},
    {"Gathersanity: Green Dragonscale (skinning #5720/15412)", 9000763},
    {"Gathersanity: Worn Dragonscale (skinning #5721/8165)", 9000764},
    {"Gathersanity: Thick Hide (skinning #5721/8169)", 9000765},
    {"Gathersanity: Rugged Leather (skinning #5721/8170)", 9000766},
    {"Gathersanity: Green Dragonscale (skinning #5721/15412)", 9000767},
    {"Gathersanity: Worn Dragonscale (skinning #5722/8165)", 9000768},
    {"Gathersanity: Thick Hide (skinning #5722/8169)", 9000769},
    {"Gathersanity: Rugged Leather (skinning #5722/8170)", 9000770},
    {"Gathersanity: Green Dragonscale (skinning #5722/15412)", 9000771},
    {"Gathersanity: Light Leather (skinning #5831/2318)", 9000772},
    {"Gathersanity: Medium Leather (skinning #5831/2319)", 9000773},
    {"Gathersanity: Medium Hide (skinning #5831/4232)", 9000774},
    {"Gathersanity: Light Hide (skinning #5832/783)", 9000775},
    {"Gathersanity: Light Leather (skinning #5832/2318)", 9000776},
    {"Gathersanity: Medium Leather (skinning #5832/2319)", 9000777},
    {"Gathersanity: Medium Hide (skinning #5832/4232)", 9000778},
    {"Gathersanity: Thick Leather (skinning #5833/4304)", 9000779},
    {"Gathersanity: Thick Hide (skinning #5833/8169)", 9000780},
    {"Gathersanity: Rugged Leather (skinning #5833/8170)", 9000781},
    {"Gathersanity: Light Leather (skinning #5834/2318)", 9000782},
    {"Gathersanity: Medium Leather (skinning #5834/2319)", 9000783},
    {"Gathersanity: Medium Hide (skinning #5834/4232)", 9000784},
    {"Gathersanity: Light Hide (skinning #5842/783)", 9000785},
    {"Gathersanity: Light Leather (skinning #5842/2318)", 9000786},
    {"Gathersanity: Medium Leather (skinning #5842/2319)", 9000787},
    {"Gathersanity: Light Hide (skinning #5912/783)", 9000788},
    {"Gathersanity: Light Leather (skinning #5912/2318)", 9000789},
    {"Gathersanity: Medium Leather (skinning #5912/2319)", 9000790},
    {"Gathersanity: Deviate Scale (skinning #5912/6470)", 9000791},
    {"Gathersanity: Perfect Deviate Scale (skinning #5912/6471)", 9000792},
    {"Gathersanity: Medium Leather (skinning #5928/2319)", 9000793},
    {"Gathersanity: Medium Hide (skinning #5928/4232)", 9000794},
    {"Gathersanity: Heavy Leather (skinning #5928/4234)", 9000795},
    {"Gathersanity: Heavy Hide (skinning #5928/4235)", 9000796},
    {"Gathersanity: Medium Leather (skinning #5934/2319)", 9000797},
    {"Gathersanity: Medium Hide (skinning #5934/4232)", 9000798},
    {"Gathersanity: Heavy Leather (skinning #5934/4234)", 9000799},
    {"Gathersanity: Heavy Hide (skinning #5934/4235)", 9000800},
    {"Gathersanity: Thick Leather (skinning #5984/4304)", 9000801},
    {"Gathersanity: Thick Hide (skinning #5984/8169)", 9000802},
    {"Gathersanity: Rugged Leather (skinning #5984/8170)", 9000803},
    {"Gathersanity: Thick Leather (skinning #5985/4304)", 9000804},
    {"Gathersanity: Thick Hide (skinning #5985/8169)", 9000805},
    {"Gathersanity: Rugged Leather (skinning #5985/8170)", 9000806},
    {"Gathersanity: Thick Leather (skinning #5988/4304)", 9000807},
    {"Gathersanity: Scorpid Scale (skinning #5988/8154)", 9000808},
    {"Gathersanity: Thick Hide (skinning #5988/8169)", 9000809},
    {"Gathersanity: Rugged Leather (skinning #5988/8170)", 9000810},
    {"Gathersanity: Thick Leather (skinning #5990/4304)", 9000811},
    {"Gathersanity: Thick Hide (skinning #5990/8169)", 9000812},
    {"Gathersanity: Rugged Leather (skinning #5990/8170)", 9000813},
    {"Gathersanity: Thick Leather (skinning #5991/4304)", 9000814},
    {"Gathersanity: Thick Hide (skinning #5991/8169)", 9000815},
    {"Gathersanity: Rugged Leather (skinning #5991/8170)", 9000816},
    {"Gathersanity: Rugged Hide (skinning #5991/8171)", 9000817},
    {"Gathersanity: Thick Leather (skinning #5992/4304)", 9000818},
    {"Gathersanity: Thick Hide (skinning #5992/8169)", 9000819},
    {"Gathersanity: Rugged Leather (skinning #5992/8170)", 9000820},
    {"Gathersanity: Thick Leather (skinning #5993/4304)", 9000821},
    {"Gathersanity: Thick Hide (skinning #5993/8169)", 9000822},
    {"Gathersanity: Rugged Leather (skinning #5993/8170)", 9000823},
    {"Gathersanity: Rugged Hide (skinning #5993/8171)", 9000824},
    {"Gathersanity: Thick Leather (skinning #6010/4304)", 9000825},
    {"Gathersanity: Thick Hide (skinning #6010/8169)", 9000826},
    {"Gathersanity: Rugged Leather (skinning #6010/8170)", 9000827},
    {"Gathersanity: Rugged Hide (skinning #6010/8171)", 9000828},
    {"Gathersanity: Shiny Fish Scales (skinning #6033/17057)", 9000829},
    {"Gathersanity: Blue Dragonscale (skinning #6109/15415)", 9000830},
    {"Gathersanity: Thick Leather (skinning #6129/4304)", 9000831},
    {"Gathersanity: Worn Dragonscale (skinning #6129/8165)", 9000832},
    {"Gathersanity: Thick Hide (skinning #6129/8169)", 9000833},
    {"Gathersanity: Rugged Leather (skinning #6129/8170)", 9000834},
    {"Gathersanity: Rugged Hide (skinning #6129/8171)", 9000835},
    {"Gathersanity: Blue Dragonscale (skinning #6129/15415)", 9000836},
    {"Gathersanity: Thick Leather (skinning #6130/4304)", 9000837},
    {"Gathersanity: Worn Dragonscale (skinning #6130/8165)", 9000838},
    {"Gathersanity: Thick Hide (skinning #6130/8169)", 9000839},
    {"Gathersanity: Rugged Leather (skinning #6130/8170)", 9000840},
    {"Gathersanity: Rugged Hide (skinning #6130/8171)", 9000841},
    {"Gathersanity: Blue Dragonscale (skinning #6130/15415)", 9000842},
    {"Gathersanity: Thick Leather (skinning #6131/4304)", 9000843},
    {"Gathersanity: Worn Dragonscale (skinning #6131/8165)", 9000844},
    {"Gathersanity: Thick Hide (skinning #6131/8169)", 9000845},
    {"Gathersanity: Rugged Leather (skinning #6131/8170)", 9000846},
    {"Gathersanity: Rugged Hide (skinning #6131/8171)", 9000847},
    {"Gathersanity: Blue Dragonscale (skinning #6131/15415)", 9000848},
    {"Gathersanity: Thick Leather (skinning #6140/4304)", 9000849},
    {"Gathersanity: Thick Hide (skinning #6140/8169)", 9000850},
    {"Gathersanity: Rugged Leather (skinning #6140/8170)", 9000851},
    {"Gathersanity: Rugged Hide (skinning #6140/8171)", 9000852},
    {"Gathersanity: Medium Leather (skinning #6170/2319)", 9000853},
    {"Gathersanity: Medium Hide (skinning #6170/4232)", 9000854},
    {"Gathersanity: Heavy Leather (skinning #6170/4234)", 9000855},
    {"Gathersanity: Heavy Hide (skinning #6170/4235)", 9000856},
    {"Gathersanity: Medium Leather (skinning #6215/2319)", 9000857},
    {"Gathersanity: Medium Hide (skinning #6215/4232)", 9000858},
    {"Gathersanity: Heavy Leather (skinning #6215/4234)", 9000859},
    {"Gathersanity: Heavy Hide (skinning #6215/4235)", 9000860},
    {"Gathersanity: Thick Leather (skinning #6347/4304)", 9000861},
    {"Gathersanity: Thick Hide (skinning #6347/8169)", 9000862},
    {"Gathersanity: Rugged Leather (skinning #6347/8170)", 9000863},
    {"Gathersanity: Rugged Hide (skinning #6347/8171)", 9000864},
    {"Gathersanity: Thick Leather (skinning #6348/4304)", 9000865},
    {"Gathersanity: Thick Hide (skinning #6348/8169)", 9000866},
    {"Gathersanity: Rugged Leather (skinning #6348/8170)", 9000867},
    {"Gathersanity: Rugged Hide (skinning #6348/8171)", 9000868},
    {"Gathersanity: Thick Leather (skinning #6349/4304)", 9000869},
    {"Gathersanity: Zesty Clam Meat (skinning #6349/7974)", 9000870},
    {"Gathersanity: Thick Hide (skinning #6349/8169)", 9000871},
    {"Gathersanity: Rugged Leather (skinning #6349/8170)", 9000872},
    {"Gathersanity: Rugged Hide (skinning #6349/8171)", 9000873},
    {"Gathersanity: Thick Leather (skinning #6352/4304)", 9000874},
    {"Gathersanity: Turtle Scale (skinning #6352/8167)", 9000875},
    {"Gathersanity: Thick Hide (skinning #6352/8169)", 9000876},
    {"Gathersanity: Rugged Leather (skinning #6352/8170)", 9000877},
    {"Gathersanity: Rugged Hide (skinning #6352/8171)", 9000878},
    {"Gathersanity: Thick Leather (skinning #6369/4304)", 9000879},
    {"Gathersanity: Turtle Scale (skinning #6369/8167)", 9000880},
    {"Gathersanity: Thick Hide (skinning #6369/8169)", 9000881},
    {"Gathersanity: Rugged Leather (skinning #6369/8170)", 9000882},
    {"Gathersanity: Thick Leather (skinning #6375/4304)", 9000883},
    {"Gathersanity: Thick Hide (skinning #6375/8169)", 9000884},
    {"Gathersanity: Rugged Leather (skinning #6375/8170)", 9000885},
    {"Gathersanity: Thick Leather (skinning #6377/4304)", 9000886},
    {"Gathersanity: Thick Hide (skinning #6377/8169)", 9000887},
    {"Gathersanity: Rugged Leather (skinning #6377/8170)", 9000888},
    {"Gathersanity: Thick Leather (skinning #6378/4304)", 9000889},
    {"Gathersanity: Thick Hide (skinning #6378/8169)", 9000890},
    {"Gathersanity: Rugged Leather (skinning #6378/8170)", 9000891},
    {"Gathersanity: Thick Leather (skinning #6379/4304)", 9000892},
    {"Gathersanity: Thick Hide (skinning #6379/8169)", 9000893},
    {"Gathersanity: Rugged Leather (skinning #6379/8170)", 9000894},
    {"Gathersanity: Rugged Hide (skinning #6379/8171)", 9000895},
    {"Gathersanity: Thick Leather (skinning #6380/4304)", 9000896},
    {"Gathersanity: Thick Hide (skinning #6380/8169)", 9000897},
    {"Gathersanity: Rugged Leather (skinning #6380/8170)", 9000898},
    {"Gathersanity: Rugged Hide (skinning #6380/8171)", 9000899},
    {"Gathersanity: Devilsaur Leather (skinning #6498/15417)", 9000900},
    {"Gathersanity: Devilsaur Leather (skinning #6499/15417)", 9000901},
    {"Gathersanity: Devilsaur Leather (skinning #6500/15417)", 9000902},
    {"Gathersanity: Thick Leather (skinning #6501/4304)", 9000903},
    {"Gathersanity: Thick Hide (skinning #6501/8169)", 9000904},
    {"Gathersanity: Rugged Leather (skinning #6501/8170)", 9000905},
    {"Gathersanity: Rugged Hide (skinning #6501/8171)", 9000906},
    {"Gathersanity: Thick Leather (skinning #6502/4304)", 9000907},
    {"Gathersanity: Thick Hide (skinning #6502/8169)", 9000908},
    {"Gathersanity: Rugged Leather (skinning #6502/8170)", 9000909},
    {"Gathersanity: Rugged Hide (skinning #6502/8171)", 9000910},
    {"Gathersanity: Thick Leather (skinning #6503/4304)", 9000911},
    {"Gathersanity: Thick Hide (skinning #6503/8169)", 9000912},
    {"Gathersanity: Rugged Leather (skinning #6503/8170)", 9000913},
    {"Gathersanity: Rugged Hide (skinning #6503/8171)", 9000914},
    {"Gathersanity: Thick Leather (skinning #6504/4304)", 9000915},
    {"Gathersanity: Thick Hide (skinning #6504/8169)", 9000916},
    {"Gathersanity: Rugged Leather (skinning #6504/8170)", 9000917},
    {"Gathersanity: Rugged Hide (skinning #6504/8171)", 9000918},
    {"Gathersanity: Thick Leather (skinning #6505/4304)", 9000919},
    {"Gathersanity: Thick Hide (skinning #6505/8169)", 9000920},
    {"Gathersanity: Rugged Leather (skinning #6505/8170)", 9000921},
    {"Gathersanity: Thick Leather (skinning #6506/4304)", 9000922},
    {"Gathersanity: Thick Hide (skinning #6506/8169)", 9000923},
    {"Gathersanity: Rugged Leather (skinning #6506/8170)", 9000924},
    {"Gathersanity: Thick Leather (skinning #6507/4304)", 9000925},
    {"Gathersanity: Thick Hide (skinning #6507/8169)", 9000926},
    {"Gathersanity: Rugged Leather (skinning #6507/8170)", 9000927},
    {"Gathersanity: Thick Leather (skinning #6508/4304)", 9000928},
    {"Gathersanity: Thick Hide (skinning #6508/8169)", 9000929},
    {"Gathersanity: Rugged Leather (skinning #6508/8170)", 9000930},
    {"Gathersanity: Thick Leather (skinning #6513/4304)", 9000931},
    {"Gathersanity: Thick Hide (skinning #6513/8169)", 9000932},
    {"Gathersanity: Rugged Leather (skinning #6513/8170)", 9000933},
    {"Gathersanity: Rugged Hide (skinning #6513/8171)", 9000934},
    {"Gathersanity: Thick Leather (skinning #6514/4304)", 9000935},
    {"Gathersanity: Thick Hide (skinning #6514/8169)", 9000936},
    {"Gathersanity: Rugged Leather (skinning #6514/8170)", 9000937},
    {"Gathersanity: Rugged Hide (skinning #6514/8171)", 9000938},
    {"Gathersanity: Thick Leather (skinning #6516/4304)", 9000939},
    {"Gathersanity: Thick Hide (skinning #6516/8169)", 9000940},
    {"Gathersanity: Rugged Leather (skinning #6516/8170)", 9000941},
    {"Gathersanity: Rugged Hide (skinning #6516/8171)", 9000942},
    {"Gathersanity: Thick Leather (skinning #6581/4304)", 9000943},
    {"Gathersanity: Thick Hide (skinning #6581/8169)", 9000944},
    {"Gathersanity: Rugged Leather (skinning #6581/8170)", 9000945},
    {"Gathersanity: Devilsaur Leather (skinning #6584/15417)", 9000946},
    {"Gathersanity: Thick Leather (skinning #6585/4304)", 9000947},
    {"Gathersanity: Thick Hide (skinning #6585/8169)", 9000948},
    {"Gathersanity: Rugged Leather (skinning #6585/8170)", 9000949},
    {"Gathersanity: Rugged Hide (skinning #6585/8171)", 9000950},
    {"Gathersanity: Heavy Leather (skinning #7022/4234)", 9000951},
    {"Gathersanity: Heavy Hide (skinning #7022/4235)", 9000952},
    {"Gathersanity: Thick Leather (skinning #7022/4304)", 9000953},
    {"Gathersanity: Thick Leather (skinning #7040/4304)", 9000954},
    {"Gathersanity: Worn Dragonscale (skinning #7040/8165)", 9000955},
    {"Gathersanity: Thick Hide (skinning #7040/8169)", 9000956},
    {"Gathersanity: Rugged Leather (skinning #7040/8170)", 9000957},
    {"Gathersanity: Rugged Hide (skinning #7040/8171)", 9000958},
    {"Gathersanity: Black Dragonscale (skinning #7040/15416)", 9000959},
    {"Gathersanity: Thick Leather (skinning #7041/4304)", 9000960},
    {"Gathersanity: Worn Dragonscale (skinning #7041/8165)", 9000961},
    {"Gathersanity: Thick Hide (skinning #7041/8169)", 9000962},
    {"Gathersanity: Rugged Leather (skinning #7041/8170)", 9000963},
    {"Gathersanity: Rugged Hide (skinning #7041/8171)", 9000964},
    {"Gathersanity: Black Dragonscale (skinning #7041/15416)", 9000965},
    {"Gathersanity: Thick Leather (skinning #7042/4304)", 9000966},
    {"Gathersanity: Worn Dragonscale (skinning #7042/8165)", 9000967},
    {"Gathersanity: Rugged Leather (skinning #7042/8170)", 9000968},
    {"Gathersanity: Rugged Hide (skinning #7042/8171)", 9000969},
    {"Gathersanity: Black Dragonscale (skinning #7042/15416)", 9000970},
    {"Gathersanity: Thick Leather (skinning #7043/4304)", 9000971},
    {"Gathersanity: Worn Dragonscale (skinning #7043/8165)", 9000972},
    {"Gathersanity: Rugged Leather (skinning #7043/8170)", 9000973},
    {"Gathersanity: Rugged Hide (skinning #7043/8171)", 9000974},
    {"Gathersanity: Black Dragonscale (skinning #7043/15416)", 9000975},
    {"Gathersanity: Thick Leather (skinning #7044/4304)", 9000976},
    {"Gathersanity: Worn Dragonscale (skinning #7044/8165)", 9000977},
    {"Gathersanity: Thick Hide (skinning #7044/8169)", 9000978},
    {"Gathersanity: Rugged Leather (skinning #7044/8170)", 9000979},
    {"Gathersanity: Rugged Hide (skinning #7044/8171)", 9000980},
    {"Gathersanity: Black Dragonscale (skinning #7044/15416)", 9000981},
    {"Gathersanity: Thick Leather (skinning #7045/4304)", 9000982},
    {"Gathersanity: Worn Dragonscale (skinning #7045/8165)", 9000983},
    {"Gathersanity: Thick Hide (skinning #7045/8169)", 9000984},
    {"Gathersanity: Rugged Leather (skinning #7045/8170)", 9000985},
    {"Gathersanity: Rugged Hide (skinning #7045/8171)", 9000986},
    {"Gathersanity: Black Dragonscale (skinning #7045/15416)", 9000987},
    {"Gathersanity: Thick Leather (skinning #7046/4304)", 9000988},
    {"Gathersanity: Worn Dragonscale (skinning #7046/8165)", 9000989},
    {"Gathersanity: Rugged Leather (skinning #7046/8170)", 9000990},
    {"Gathersanity: Rugged Hide (skinning #7046/8171)", 9000991},
    {"Gathersanity: Black Dragonscale (skinning #7046/15416)", 9000992},
    {"Gathersanity: Thick Leather (skinning #7047/4304)", 9000993},
    {"Gathersanity: Worn Dragonscale (skinning #7047/8165)", 9000994},
    {"Gathersanity: Thick Hide (skinning #7047/8169)", 9000995},
    {"Gathersanity: Rugged Leather (skinning #7047/8170)", 9000996},
    {"Gathersanity: Rugged Hide (skinning #7047/8171)", 9000997},
    {"Gathersanity: Black Dragonscale (skinning #7047/15416)", 9000998},
    {"Gathersanity: Thick Leather (skinning #7048/4304)", 9000999},
    {"Gathersanity: Worn Dragonscale (skinning #7048/8165)", 9001000},
    {"Gathersanity: Thick Hide (skinning #7048/8169)", 9001001},
    {"Gathersanity: Rugged Leather (skinning #7048/8170)", 9001002},
    {"Gathersanity: Rugged Hide (skinning #7048/8171)", 9001003},
    {"Gathersanity: Black Dragonscale (skinning #7048/15416)", 9001004},
    {"Gathersanity: Thick Leather (skinning #7049/4304)", 9001005},
    {"Gathersanity: Worn Dragonscale (skinning #7049/8165)", 9001006},
    {"Gathersanity: Thick Hide (skinning #7049/8169)", 9001007},
    {"Gathersanity: Rugged Leather (skinning #7049/8170)", 9001008},
    {"Gathersanity: Rugged Hide (skinning #7049/8171)", 9001009},
    {"Gathersanity: Black Dragonscale (skinning #7049/15416)", 9001010},
    {"Gathersanity: Thick Leather (skinning #7055/4304)", 9001011},
    {"Gathersanity: Thick Hide (skinning #7055/8169)", 9001012},
    {"Gathersanity: Rugged Leather (skinning #7055/8170)", 9001013},
    {"Gathersanity: Rugged Hide (skinning #7055/8171)", 9001014},
    {"Gathersanity: Medium Leather (skinning #7078/2319)", 9001015},
    {"Gathersanity: Medium Hide (skinning #7078/4232)", 9001016},
    {"Gathersanity: Heavy Leather (skinning #7078/4234)", 9001017},
    {"Gathersanity: Heavy Hide (skinning #7078/4235)", 9001018},
    {"Gathersanity: Thick Leather (skinning #7125/4304)", 9001019},
    {"Gathersanity: Thick Hide (skinning #7125/8169)", 9001020},
    {"Gathersanity: Rugged Leather (skinning #7125/8170)", 9001021},
    {"Gathersanity: Rugged Hide (skinning #7125/8171)", 9001022},
    {"Gathersanity: Patch of Tainted Skin (skinning #7125/11512)", 9001023},
    {"Gathersanity: Thick Leather (skinning #7126/4304)", 9001024},
    {"Gathersanity: Thick Hide (skinning #7126/8169)", 9001025},
    {"Gathersanity: Rugged Leather (skinning #7126/8170)", 9001026},
    {"Gathersanity: Rugged Hide (skinning #7126/8171)", 9001027},
    {"Gathersanity: Patch of Tainted Skin (skinning #7126/11512)", 9001028},
    {"Gathersanity: Thick Leather (skinning #7273/4304)", 9001029},
    {"Gathersanity: Thick Hide (skinning #7273/8169)", 9001030},
    {"Gathersanity: Rugged Leather (skinning #7273/8170)", 9001031},
    {"Gathersanity: Medium Leather (skinning #7333/2319)", 9001032},
    {"Gathersanity: Medium Hide (skinning #7333/4232)", 9001033},
    {"Gathersanity: Heavy Leather (skinning #7333/4234)", 9001034},
    {"Gathersanity: Heavy Hide (skinning #7333/4235)", 9001035},
    {"Gathersanity: Heavy Leather (skinning #7334/4234)", 9001036},
    {"Gathersanity: Heavy Hide (skinning #7334/4235)", 9001037},
    {"Gathersanity: Thick Leather (skinning #7334/4304)", 9001038},
    {"Gathersanity: Heavy Leather (skinning #7405/4234)", 9001039},
    {"Gathersanity: Heavy Hide (skinning #7405/4235)", 9001040},
    {"Gathersanity: Thick Leather (skinning #7405/4304)", 9001041},
    {"Gathersanity: Scorpid Scale (skinning #7405/8154)", 9001042},
    {"Gathersanity: Thick Hide (skinning #7405/8169)", 9001043},
    {"Gathersanity: Thick Leather (skinning #7430/4304)", 9001044},
    {"Gathersanity: Thick Hide (skinning #7430/8169)", 9001045},
    {"Gathersanity: Rugged Leather (skinning #7430/8170)", 9001046},
    {"Gathersanity: Rugged Hide (skinning #7430/8171)", 9001047},
    {"Gathersanity: Frostsaber Leather (skinning #7430/15422)", 9001048},
    {"Gathersanity: Thick Leather (skinning #7431/4304)", 9001049},
    {"Gathersanity: Rugged Leather (skinning #7431/8170)", 9001050},
    {"Gathersanity: Rugged Hide (skinning #7431/8171)", 9001051},
    {"Gathersanity: Frostsaber Leather (skinning #7431/15422)", 9001052},
    {"Gathersanity: Thick Leather (skinning #7432/4304)", 9001053},
    {"Gathersanity: Rugged Leather (skinning #7432/8170)", 9001054},
    {"Gathersanity: Rugged Hide (skinning #7432/8171)", 9001055},
    {"Gathersanity: Frostsaber Leather (skinning #7432/15422)", 9001056},
    {"Gathersanity: Thick Leather (skinning #7433/4304)", 9001057},
    {"Gathersanity: Rugged Leather (skinning #7433/8170)", 9001058},
    {"Gathersanity: Rugged Hide (skinning #7433/8171)", 9001059},
    {"Gathersanity: Frostsaber Leather (skinning #7433/15422)", 9001060},
    {"Gathersanity: Thick Leather (skinning #7434/4304)", 9001061},
    {"Gathersanity: Rugged Leather (skinning #7434/8170)", 9001062},
    {"Gathersanity: Rugged Hide (skinning #7434/8171)", 9001063},
    {"Gathersanity: Frostsaber Leather (skinning #7434/15422)", 9001064},
    {"Gathersanity: Thick Leather (skinning #7435/4304)", 9001065},
    {"Gathersanity: Worn Dragonscale (skinning #7435/8165)", 9001066},
    {"Gathersanity: Thick Hide (skinning #7435/8169)", 9001067},
    {"Gathersanity: Rugged Leather (skinning #7435/8170)", 9001068},
    {"Gathersanity: Rugged Hide (skinning #7435/8171)", 9001069},
    {"Gathersanity: Blue Dragonscale (skinning #7435/15415)", 9001070},
    {"Gathersanity: Thick Leather (skinning #7436/4304)", 9001071},
    {"Gathersanity: Worn Dragonscale (skinning #7436/8165)", 9001072},
    {"Gathersanity: Rugged Leather (skinning #7436/8170)", 9001073},
    {"Gathersanity: Rugged Hide (skinning #7436/8171)", 9001074},
    {"Gathersanity: Blue Dragonscale (skinning #7436/15415)", 9001075},
    {"Gathersanity: Thick Leather (skinning #7437/4304)", 9001076},
    {"Gathersanity: Worn Dragonscale (skinning #7437/8165)", 9001077},
    {"Gathersanity: Rugged Leather (skinning #7437/8170)", 9001078},
    {"Gathersanity: Rugged Hide (skinning #7437/8171)", 9001079},
    {"Gathersanity: Blue Dragonscale (skinning #7437/15415)", 9001080},
    {"Gathersanity: Thick Leather (skinning #7443/4304)", 9001081},
    {"Gathersanity: Thick Hide (skinning #7443/8169)", 9001082},
    {"Gathersanity: Rugged Leather (skinning #7443/8170)", 9001083},
    {"Gathersanity: Rugged Hide (skinning #7443/8171)", 9001084},
    {"Gathersanity: Warbear Leather (skinning #7443/15419)", 9001085},
    {"Gathersanity: Thick Leather (skinning #7444/4304)", 9001086},
    {"Gathersanity: Thick Hide (skinning #7444/8169)", 9001087},
    {"Gathersanity: Rugged Leather (skinning #7444/8170)", 9001088},
    {"Gathersanity: Rugged Hide (skinning #7444/8171)", 9001089},
    {"Gathersanity: Warbear Leather (skinning #7444/15419)", 9001090},
    {"Gathersanity: Thick Leather (skinning #7445/4304)", 9001091},
    {"Gathersanity: Rugged Leather (skinning #7445/8170)", 9001092},
    {"Gathersanity: Rugged Hide (skinning #7445/8171)", 9001093},
    {"Gathersanity: Warbear Leather (skinning #7445/15419)", 9001094},
    {"Gathersanity: Thick Leather (skinning #7446/4304)", 9001095},
    {"Gathersanity: Rugged Leather (skinning #7446/8170)", 9001096},
    {"Gathersanity: Rugged Hide (skinning #7446/8171)", 9001097},
    {"Gathersanity: Warbear Leather (skinning #7446/15419)", 9001098},
    {"Gathersanity: Thick Leather (skinning #7447/4304)", 9001099},
    {"Gathersanity: Thick Hide (skinning #7447/8169)", 9001100},
    {"Gathersanity: Rugged Leather (skinning #7447/8170)", 9001101},
    {"Gathersanity: Rugged Hide (skinning #7447/8171)", 9001102},
    {"Gathersanity: Thick Leather (skinning #7448/4304)", 9001103},
    {"Gathersanity: Rugged Leather (skinning #7448/8170)", 9001104},
    {"Gathersanity: Rugged Hide (skinning #7448/8171)", 9001105},
    {"Gathersanity: Thick Leather (skinning #7449/4304)", 9001106},
    {"Gathersanity: Rugged Leather (skinning #7449/8170)", 9001107},
    {"Gathersanity: Rugged Hide (skinning #7449/8171)", 9001108},
    {"Gathersanity: Thick Leather (skinning #7457/4304)", 9001109},
    {"Gathersanity: Thick Hide (skinning #7457/8169)", 9001110},
    {"Gathersanity: Rugged Leather (skinning #7457/8170)", 9001111},
    {"Gathersanity: Rugged Hide (skinning #7457/8171)", 9001112},
    {"Gathersanity: Thick Leather (skinning #7458/4304)", 9001113},
    {"Gathersanity: Thick Hide (skinning #7458/8169)", 9001114},
    {"Gathersanity: Rugged Leather (skinning #7458/8170)", 9001115},
    {"Gathersanity: Rugged Hide (skinning #7458/8171)", 9001116},
    {"Gathersanity: Thick Leather (skinning #7459/4304)", 9001117},
    {"Gathersanity: Rugged Leather (skinning #7459/8170)", 9001118},
    {"Gathersanity: Rugged Hide (skinning #7459/8171)", 9001119},
    {"Gathersanity: Thick Leather (skinning #7460/4304)", 9001120},
    {"Gathersanity: Rugged Leather (skinning #7460/8170)", 9001121},
    {"Gathersanity: Rugged Hide (skinning #7460/8171)", 9001122},
    {"Gathersanity: Thick Leather (skinning #7462/4304)", 9001123},
    {"Gathersanity: Rugged Leather (skinning #7462/8170)", 9001124},
    {"Gathersanity: Rugged Hide (skinning #7462/8171)", 9001125},
    {"Gathersanity: Thick Leather (skinning #7803/4304)", 9001126},
    {"Gathersanity: Scorpid Scale (skinning #7803/8154)", 9001127},
    {"Gathersanity: Thick Hide (skinning #7803/8169)", 9001128},
    {"Gathersanity: Rugged Leather (skinning #7803/8170)", 9001129},
    {"Gathersanity: Thick Leather (skinning #7846/4304)", 9001130},
    {"Gathersanity: Worn Dragonscale (skinning #7846/8165)", 9001131},
    {"Gathersanity: Rugged Leather (skinning #7846/8170)", 9001132},
    {"Gathersanity: Rugged Hide (skinning #7846/8171)", 9001133},
    {"Gathersanity: Black Dragonscale (skinning #7846/15416)", 9001134},
    {"Gathersanity: Thick Leather (skinning #7848/4304)", 9001135},
    {"Gathersanity: Thick Hide (skinning #7848/8169)", 9001136},
    {"Gathersanity: Rugged Leather (skinning #7848/8170)", 9001137},
    {"Gathersanity: Thick Leather (skinning #7977/4304)", 9001138},
    {"Gathersanity: Turtle Scale (skinning #7977/8167)", 9001139},
    {"Gathersanity: Thick Hide (skinning #7977/8169)", 9001140},
    {"Gathersanity: Rugged Leather (skinning #7977/8170)", 9001141},
    {"Gathersanity: Thick Leather (skinning #8095/4304)", 9001142},
    {"Gathersanity: Thick Hide (skinning #8095/8169)", 9001143},
    {"Gathersanity: Rugged Leather (skinning #8095/8170)", 9001144},
    {"Gathersanity: Thick Leather (skinning #8120/4304)", 9001145},
    {"Gathersanity: Thick Hide (skinning #8120/8169)", 9001146},
    {"Gathersanity: Rugged Leather (skinning #8120/8170)", 9001147},
    {"Gathersanity: Heavy Leather (skinning #8138/4234)", 9001148},
    {"Gathersanity: Heavy Hide (skinning #8138/4235)", 9001149},
    {"Gathersanity: Thick Leather (skinning #8138/4304)", 9001150},
    {"Gathersanity: Thick Leather (skinning #8196/4304)", 9001151},
    {"Gathersanity: Worn Dragonscale (skinning #8196/8165)", 9001152},
    {"Gathersanity: Thick Hide (skinning #8196/8169)", 9001153},
    {"Gathersanity: Rugged Leather (skinning #8196/8170)", 9001154},
    {"Gathersanity: Thick Leather (skinning #8197/4304)", 9001155},
    {"Gathersanity: Worn Dragonscale (skinning #8197/8165)", 9001156},
    {"Gathersanity: Rugged Leather (skinning #8197/8170)", 9001157},
    {"Gathersanity: Rugged Hide (skinning #8197/8171)", 9001158},
    {"Gathersanity: Thick Leather (skinning #8198/4304)", 9001159},
    {"Gathersanity: Worn Dragonscale (skinning #8198/8165)", 9001160},
    {"Gathersanity: Thick Hide (skinning #8198/8169)", 9001161},
    {"Gathersanity: Rugged Leather (skinning #8198/8170)", 9001162},
    {"Gathersanity: Rugged Hide (skinning #8198/8171)", 9001163},
    {"Gathersanity: Heavy Leather (skinning #8211/4234)", 9001164},
    {"Gathersanity: Heavy Hide (skinning #8211/4235)", 9001165},
    {"Gathersanity: Thick Leather (skinning #8211/4304)", 9001166},
    {"Gathersanity: Thick Hide (skinning #8211/8169)", 9001167},
    {"Gathersanity: Thick Leather (skinning #8213/4304)", 9001168},
    {"Gathersanity: Turtle Scale (skinning #8213/8167)", 9001169},
    {"Gathersanity: Thick Hide (skinning #8213/8169)", 9001170},
    {"Gathersanity: Rugged Leather (skinning #8213/8170)", 9001171},
    {"Gathersanity: Shiny Fish Scales (skinning #8236/17057)", 9001172},
    {"Gathersanity: Thick Leather (skinning #8280/4304)", 9001173},
    {"Gathersanity: Thick Hide (skinning #8280/8169)", 9001174},
    {"Gathersanity: Thick Leather (skinning #8300/4304)", 9001175},
    {"Gathersanity: Rugged Leather (skinning #8300/8170)", 9001176},
    {"Gathersanity: Thick Leather (skinning #8301/4304)", 9001177},
    {"Gathersanity: Scorpid Scale (skinning #8301/8154)", 9001178},
    {"Gathersanity: Rugged Leather (skinning #8301/8170)", 9001179},
    {"Gathersanity: Heavy Scorpid Scale (skinning #8301/15408)", 9001180},
    {"Gathersanity: Thick Leather (skinning #8319/4304)", 9001181},
    {"Gathersanity: Worn Dragonscale (skinning #8319/8165)", 9001182},
    {"Gathersanity: Thick Hide (skinning #8319/8169)", 9001183},
    {"Gathersanity: Rugged Leather (skinning #8319/8170)", 9001184},
    {"Gathersanity: Green Dragonscale (skinning #8319/15412)", 9001185},
    {"Gathersanity: Thick Leather (skinning #8336/4304)", 9001186},
    {"Gathersanity: Thick Hide (skinning #8336/8169)", 9001187},
    {"Gathersanity: Rugged Leather (skinning #8336/8170)", 9001188},
    {"Gathersanity: Heavy Leather (skinning #8437/4234)", 9001189},
    {"Gathersanity: Heavy Hide (skinning #8437/4235)", 9001190},
    {"Gathersanity: Thick Leather (skinning #8437/4304)", 9001191},
    {"Gathersanity: Thick Hide (skinning #8437/8169)", 9001192},
    {"Gathersanity: Thick Leather (skinning #8438/4304)", 9001193},
    {"Gathersanity: Thick Hide (skinning #8438/8169)", 9001194},
    {"Gathersanity: Rugged Leather (skinning #8438/8170)", 9001195},
    {"Gathersanity: Thick Leather (skinning #8497/4304)", 9001196},
    {"Gathersanity: Worn Dragonscale (skinning #8497/8165)", 9001197},
    {"Gathersanity: Thick Hide (skinning #8497/8169)", 9001198},
    {"Gathersanity: Rugged Leather (skinning #8497/8170)", 9001199},
    {"Gathersanity: Green Dragonscale (skinning #8497/15412)", 9001200},
    {"Gathersanity: Thick Leather (skinning #8596/4304)", 9001201},
    {"Gathersanity: Thick Hide (skinning #8596/8169)", 9001202},
    {"Gathersanity: Rugged Leather (skinning #8596/8170)", 9001203},
    {"Gathersanity: Rugged Hide (skinning #8596/8171)", 9001204},
    {"Gathersanity: Thick Leather (skinning #8597/4304)", 9001205},
    {"Gathersanity: Thick Hide (skinning #8597/8169)", 9001206},
    {"Gathersanity: Rugged Leather (skinning #8597/8170)", 9001207},
    {"Gathersanity: Rugged Hide (skinning #8597/8171)", 9001208},
    {"Gathersanity: Thick Leather (skinning #8598/4304)", 9001209},
    {"Gathersanity: Rugged Leather (skinning #8598/8170)", 9001210},
    {"Gathersanity: Rugged Hide (skinning #8598/8171)", 9001211},
    {"Gathersanity: Thick Leather (skinning #8600/4304)", 9001212},
    {"Gathersanity: Thick Hide (skinning #8600/8169)", 9001213},
    {"Gathersanity: Rugged Leather (skinning #8600/8170)", 9001214},
    {"Gathersanity: Rugged Hide (skinning #8600/8171)", 9001215},
    {"Gathersanity: Thick Leather (skinning #8601/4304)", 9001216},
    {"Gathersanity: Thick Hide (skinning #8601/8169)", 9001217},
    {"Gathersanity: Rugged Leather (skinning #8601/8170)", 9001218},
    {"Gathersanity: Rugged Hide (skinning #8601/8171)", 9001219},
    {"Gathersanity: Thick Leather (skinning #8602/4304)", 9001220},
    {"Gathersanity: Rugged Leather (skinning #8602/8170)", 9001221},
    {"Gathersanity: Rugged Hide (skinning #8602/8171)", 9001222},
    {"Gathersanity: Thick Leather (skinning #8660/4304)", 9001223},
    {"Gathersanity: Rugged Leather (skinning #8660/8170)", 9001224},
    {"Gathersanity: Thick Leather (skinning #8675/4304)", 9001225},
    {"Gathersanity: Thick Hide (skinning #8675/8169)", 9001226},
    {"Gathersanity: Rugged Leather (skinning #8675/8170)", 9001227},
    {"Gathersanity: Rugged Leather (skinning #8718/8170)", 9001228},
    {"Gathersanity: Rugged Hide (skinning #8718/8171)", 9001229},
    {"Gathersanity: Thick Leather (skinning #8759/4304)", 9001230},
    {"Gathersanity: Thick Hide (skinning #8759/8169)", 9001231},
    {"Gathersanity: Rugged Leather (skinning #8759/8170)", 9001232},
    {"Gathersanity: Thick Leather (skinning #8760/4304)", 9001233},
    {"Gathersanity: Thick Hide (skinning #8760/8169)", 9001234},
    {"Gathersanity: Rugged Leather (skinning #8760/8170)", 9001235},
    {"Gathersanity: Thick Leather (skinning #8761/4304)", 9001236},
    {"Gathersanity: Thick Hide (skinning #8761/8169)", 9001237},
    {"Gathersanity: Rugged Leather (skinning #8761/8170)", 9001238},
    {"Gathersanity: Rugged Hide (skinning #8761/8171)", 9001239},
    {"Gathersanity: Thick Leather (skinning #8763/4304)", 9001240},
    {"Gathersanity: Thick Hide (skinning #8763/8169)", 9001241},
    {"Gathersanity: Rugged Leather (skinning #8763/8170)", 9001242},
    {"Gathersanity: Rugged Hide (skinning #8763/8171)", 9001243},
    {"Gathersanity: Thick Leather (skinning #8764/4304)", 9001244},
    {"Gathersanity: Thick Hide (skinning #8764/8169)", 9001245},
    {"Gathersanity: Rugged Leather (skinning #8764/8170)", 9001246},
    {"Gathersanity: Rugged Hide (skinning #8764/8171)", 9001247},
    {"Gathersanity: Thick Leather (skinning #8921/4304)", 9001248},
    {"Gathersanity: Thick Hide (skinning #8921/8169)", 9001249},
    {"Gathersanity: Rugged Leather (skinning #8921/8170)", 9001250},
    {"Gathersanity: Thick Leather (skinning #8922/4304)", 9001251},
    {"Gathersanity: Thick Hide (skinning #8922/8169)", 9001252},
    {"Gathersanity: Rugged Leather (skinning #8922/8170)", 9001253},
    {"Gathersanity: Rugged Hide (skinning #8922/8171)", 9001254},
    {"Gathersanity: Thick Leather (skinning #8926/4304)", 9001255},
    {"Gathersanity: Scorpid Scale (skinning #8926/8154)", 9001256},
    {"Gathersanity: Thick Hide (skinning #8926/8169)", 9001257},
    {"Gathersanity: Rugged Leather (skinning #8926/8170)", 9001258},
    {"Gathersanity: Thick Leather (skinning #8927/4304)", 9001259},
    {"Gathersanity: Thick Hide (skinning #8927/8169)", 9001260},
    {"Gathersanity: Rugged Leather (skinning #8927/8170)", 9001261},
    {"Gathersanity: Thick Leather (skinning #8928/4304)", 9001262},
    {"Gathersanity: Thick Hide (skinning #8928/8169)", 9001263},
    {"Gathersanity: Rugged Leather (skinning #8928/8170)", 9001264},
    {"Gathersanity: Thick Leather (skinning #8956/4304)", 9001265},
    {"Gathersanity: Thick Hide (skinning #8956/8169)", 9001266},
    {"Gathersanity: Rugged Leather (skinning #8956/8170)", 9001267},
    {"Gathersanity: Rugged Hide (skinning #8956/8171)", 9001268},
    {"Gathersanity: Patch of Tainted Skin (skinning #8956/11512)", 9001269},
    {"Gathersanity: Thick Leather (skinning #8957/4304)", 9001270},
    {"Gathersanity: Thick Hide (skinning #8957/8169)", 9001271},
    {"Gathersanity: Rugged Leather (skinning #8957/8170)", 9001272},
    {"Gathersanity: Rugged Hide (skinning #8957/8171)", 9001273},
    {"Gathersanity: Patch of Tainted Skin (skinning #8957/11512)", 9001274},
    {"Gathersanity: Warbear Leather (skinning #8957/15419)", 9001275},
    {"Gathersanity: Thick Leather (skinning #8958/4304)", 9001276},
    {"Gathersanity: Thick Hide (skinning #8958/8169)", 9001277},
    {"Gathersanity: Rugged Leather (skinning #8958/8170)", 9001278},
    {"Gathersanity: Rugged Hide (skinning #8958/8171)", 9001279},
    {"Gathersanity: Patch of Tainted Skin (skinning #8958/11512)", 9001280},
    {"Gathersanity: Thick Leather (skinning #8959/4304)", 9001281},
    {"Gathersanity: Thick Hide (skinning #8959/8169)", 9001282},
    {"Gathersanity: Rugged Leather (skinning #8959/8170)", 9001283},
    {"Gathersanity: Rugged Hide (skinning #8959/8171)", 9001284},
    {"Gathersanity: Patch of Tainted Skin (skinning #8959/11512)", 9001285},
    {"Gathersanity: Thick Leather (skinning #8960/4304)", 9001286},
    {"Gathersanity: Thick Hide (skinning #8960/8169)", 9001287},
    {"Gathersanity: Rugged Leather (skinning #8960/8170)", 9001288},
    {"Gathersanity: Rugged Hide (skinning #8960/8171)", 9001289},
    {"Gathersanity: Patch of Tainted Skin (skinning #8960/11512)", 9001290},
    {"Gathersanity: Thick Leather (skinning #8961/4304)", 9001291},
    {"Gathersanity: Thick Hide (skinning #8961/8169)", 9001292},
    {"Gathersanity: Rugged Leather (skinning #8961/8170)", 9001293},
    {"Gathersanity: Rugged Hide (skinning #8961/8171)", 9001294},
    {"Gathersanity: Patch of Tainted Skin (skinning #8961/11512)", 9001295},
    {"Gathersanity: Thick Leather (skinning #9029/4304)", 9001296},
    {"Gathersanity: Thick Hide (skinning #9029/8169)", 9001297},
    {"Gathersanity: Rugged Leather (skinning #9029/8170)", 9001298},
    {"Gathersanity: Thick Leather (skinning #9042/4304)", 9001299},
    {"Gathersanity: Thick Hide (skinning #9042/8169)", 9001300},
    {"Gathersanity: Rugged Leather (skinning #9042/8170)", 9001301},
    {"Gathersanity: Rugged Hide (skinning #9042/8171)", 9001302},
    {"Gathersanity: Thick Leather (skinning #9096/4304)", 9001303},
    {"Gathersanity: Worn Dragonscale (skinning #9096/8165)", 9001304},
    {"Gathersanity: Rugged Leather (skinning #9096/8170)", 9001305},
    {"Gathersanity: Rugged Hide (skinning #9096/8171)", 9001306},
    {"Gathersanity: Black Dragonscale (skinning #9096/15416)", 9001307},
    {"Gathersanity: Thick Leather (skinning #9162/4304)", 9001308},
    {"Gathersanity: Thick Hide (skinning #9162/8169)", 9001309},
    {"Gathersanity: Rugged Leather (skinning #9162/8170)", 9001310},
    {"Gathersanity: Thick Leather (skinning #9163/4304)", 9001311},
    {"Gathersanity: Thick Hide (skinning #9163/8169)", 9001312},
    {"Gathersanity: Rugged Leather (skinning #9163/8170)", 9001313},
    {"Gathersanity: Rugged Hide (skinning #9163/8171)", 9001314},
    {"Gathersanity: Thick Leather (skinning #9164/4304)", 9001315},
    {"Gathersanity: Thick Hide (skinning #9164/8169)", 9001316},
    {"Gathersanity: Rugged Leather (skinning #9164/8170)", 9001317},
    {"Gathersanity: Rugged Hide (skinning #9164/8171)", 9001318},
    {"Gathersanity: Thick Leather (skinning #9165/4304)", 9001319},
    {"Gathersanity: Thick Hide (skinning #9165/8169)", 9001320},
    {"Gathersanity: Rugged Leather (skinning #9165/8170)", 9001321},
    {"Gathersanity: Thick Leather (skinning #9166/4304)", 9001322},
    {"Gathersanity: Thick Hide (skinning #9166/8169)", 9001323},
    {"Gathersanity: Rugged Leather (skinning #9166/8170)", 9001324},
    {"Gathersanity: Thick Leather (skinning #9167/4304)", 9001325},
    {"Gathersanity: Thick Hide (skinning #9167/8169)", 9001326},
    {"Gathersanity: Rugged Leather (skinning #9167/8170)", 9001327},
    {"Gathersanity: Rugged Hide (skinning #9167/8171)", 9001328},
    {"Gathersanity: Thick Leather (skinning #9318/4304)", 9001329},
    {"Gathersanity: Thick Hide (skinning #9318/8169)", 9001330},
    {"Gathersanity: Rugged Leather (skinning #9318/8170)", 9001331},
    {"Gathersanity: Thick Leather (skinning #9416/4304)", 9001332},
    {"Gathersanity: Thick Hide (skinning #9416/8169)", 9001333},
    {"Gathersanity: Rugged Leather (skinning #9416/8170)", 9001334},
    {"Gathersanity: Rugged Hide (skinning #9416/8171)", 9001335},
    {"Gathersanity: Thick Leather (skinning #9461/4304)", 9001336},
    {"Gathersanity: Worn Dragonscale (skinning #9461/8165)", 9001337},
    {"Gathersanity: Thick Hide (skinning #9461/8169)", 9001338},
    {"Gathersanity: Rugged Leather (skinning #9461/8170)", 9001339},
    {"Gathersanity: Rugged Hide (skinning #9461/8171)", 9001340},
    {"Gathersanity: Black Dragonscale (skinning #9461/15416)", 9001341},
    {"Gathersanity: Thick Leather (skinning #9568/4304)", 9001342},
    {"Gathersanity: Worn Dragonscale (skinning #9568/8165)", 9001343},
    {"Gathersanity: Rugged Leather (skinning #9568/8170)", 9001344},
    {"Gathersanity: Rugged Hide (skinning #9568/8171)", 9001345},
    {"Gathersanity: Black Dragonscale (skinning #9568/15416)", 9001346},
    {"Gathersanity: Thick Leather (skinning #9622/4304)", 9001347},
    {"Gathersanity: Thick Hide (skinning #9622/8169)", 9001348},
    {"Gathersanity: Rugged Leather (skinning #9622/8170)", 9001349},
    {"Gathersanity: Rugged Hide (skinning #9622/8171)", 9001350},
    {"Gathersanity: Thick Leather (skinning #9683/4304)", 9001351},
    {"Gathersanity: Thick Hide (skinning #9683/8169)", 9001352},
    {"Gathersanity: Rugged Leather (skinning #9683/8170)", 9001353},
    {"Gathersanity: Thick Leather (skinning #9684/4304)", 9001354},
    {"Gathersanity: Rugged Leather (skinning #9684/8170)", 9001355},
    {"Gathersanity: Rugged Hide (skinning #9684/8171)", 9001356},
    {"Gathersanity: Thick Leather (skinning #9690/4304)", 9001357},
    {"Gathersanity: Thick Hide (skinning #9690/8169)", 9001358},
    {"Gathersanity: Rugged Leather (skinning #9690/8170)", 9001359},
    {"Gathersanity: Rugged Hide (skinning #9690/8171)", 9001360},
    {"Gathersanity: Thick Leather (skinning #9691/4304)", 9001361},
    {"Gathersanity: Scorpid Scale (skinning #9691/8154)", 9001362},
    {"Gathersanity: Thick Hide (skinning #9691/8169)", 9001363},
    {"Gathersanity: Rugged Leather (skinning #9691/8170)", 9001364},
    {"Gathersanity: Rugged Hide (skinning #9691/8171)", 9001365},
    {"Gathersanity: Heavy Scorpid Scale (skinning #9691/15408)", 9001366},
    {"Gathersanity: Thick Leather (skinning #9694/4304)", 9001367},
    {"Gathersanity: Thick Hide (skinning #9694/8169)", 9001368},
    {"Gathersanity: Rugged Leather (skinning #9694/8170)", 9001369},
    {"Gathersanity: Rugged Hide (skinning #9694/8171)", 9001370},
    {"Gathersanity: Thick Leather (skinning #9695/4304)", 9001371},
    {"Gathersanity: Scorpid Scale (skinning #9695/8154)", 9001372},
    {"Gathersanity: Thick Hide (skinning #9695/8169)", 9001373},
    {"Gathersanity: Rugged Leather (skinning #9695/8170)", 9001374},
    {"Gathersanity: Rugged Hide (skinning #9695/8171)", 9001375},
    {"Gathersanity: Heavy Scorpid Scale (skinning #9695/15408)", 9001376},
    {"Gathersanity: Thick Leather (skinning #9696/4304)", 9001377},
    {"Gathersanity: Rugged Leather (skinning #9696/8170)", 9001378},
    {"Gathersanity: Rugged Hide (skinning #9696/8171)", 9001379},
    {"Gathersanity: Thick Leather (skinning #9697/4304)", 9001380},
    {"Gathersanity: Thick Hide (skinning #9697/8169)", 9001381},
    {"Gathersanity: Rugged Leather (skinning #9697/8170)", 9001382},
    {"Gathersanity: Rugged Hide (skinning #9697/8171)", 9001383},
    {"Gathersanity: Thick Leather (skinning #9698/4304)", 9001384},
    {"Gathersanity: Thick Hide (skinning #9698/8169)", 9001385},
    {"Gathersanity: Rugged Leather (skinning #9698/8170)", 9001386},
    {"Gathersanity: Heavy Scorpid Scale (skinning #9698/15408)", 9001387},
    {"Gathersanity: Thick Leather (skinning #9701/4304)", 9001388},
    {"Gathersanity: Thick Hide (skinning #9701/8169)", 9001389},
    {"Gathersanity: Rugged Leather (skinning #9701/8170)", 9001390},
    {"Gathersanity: Heavy Scorpid Scale (skinning #9701/15408)", 9001391},
    {"Gathersanity: Thick Leather (skinning #10083/4304)", 9001392},
    {"Gathersanity: Worn Dragonscale (skinning #10083/8165)", 9001393},
    {"Gathersanity: Rugged Leather (skinning #10083/8170)", 9001394},
    {"Gathersanity: Rugged Hide (skinning #10083/8171)", 9001395},
    {"Gathersanity: Black Dragonscale (skinning #10083/15416)", 9001396},
    {"Gathersanity: Thick Leather (skinning #10147/4304)", 9001397},
    {"Gathersanity: Thick Hide (skinning #10147/8169)", 9001398},
    {"Gathersanity: Rugged Leather (skinning #10147/8170)", 9001399},
    {"Gathersanity: Rugged Hide (skinning #10147/8171)", 9001400},
    {"Gathersanity: Patch of Tainted Skin (skinning #10147/11512)", 9001401},
    {"Gathersanity: Thick Leather (skinning #10150/4304)", 9001402},
    {"Gathersanity: Thick Hide (skinning #10150/8169)", 9001403},
    {"Gathersanity: Rugged Leather (skinning #10150/8170)", 9001404},
    {"Gathersanity: Thick Leather (skinning #10156/4304)", 9001405},
    {"Gathersanity: Rugged Leather (skinning #10156/8170)", 9001406},
    {"Gathersanity: Rugged Hide (skinning #10156/8171)", 9001407},
    {"Gathersanity: Scale of Onyxia (skinning #10184/15410)", 9001408},
    {"Gathersanity: Worn Dragonscale (skinning #10196/8165)", 9001409},
    {"Gathersanity: Rugged Leather (skinning #10196/8170)", 9001410},
    {"Gathersanity: Blue Dragonscale (skinning #10196/15415)", 9001411},
    {"Gathersanity: Thick Leather (skinning #10197/4304)", 9001412},
    {"Gathersanity: Thick Hide (skinning #10197/8169)", 9001413},
    {"Gathersanity: Rugged Leather (skinning #10197/8170)", 9001414},
    {"Gathersanity: Rugged Hide (skinning #10197/8171)", 9001415},
    {"Gathersanity: Thick Leather (skinning #10200/4304)", 9001416},
    {"Gathersanity: Rugged Leather (skinning #10200/8170)", 9001417},
    {"Gathersanity: Rugged Hide (skinning #10200/8171)", 9001418},
    {"Gathersanity: Thick Leather (skinning #10202/4304)", 9001419},
    {"Gathersanity: Worn Dragonscale (skinning #10202/8165)", 9001420},
    {"Gathersanity: Rugged Leather (skinning #10202/8170)", 9001421},
    {"Gathersanity: Blue Dragonscale (skinning #10202/15415)", 9001422},
    {"Gathersanity: Rugged Leather (skinning #10220/8170)", 9001423},
    {"Gathersanity: Rugged Hide (skinning #10220/8171)", 9001424},
    {"Gathersanity: Thick Leather (skinning #10221/4304)", 9001425},
    {"Gathersanity: Thick Hide (skinning #10221/8169)", 9001426},
    {"Gathersanity: Rugged Leather (skinning #10221/8170)", 9001427},
    {"Gathersanity: Rugged Hide (skinning #10221/8171)", 9001428},
    {"Gathersanity: Thick Leather (skinning #10257/4304)", 9001429},
    {"Gathersanity: Rugged Leather (skinning #10257/8170)", 9001430},
    {"Gathersanity: Rugged Hide (skinning #10257/8171)", 9001431},
    {"Gathersanity: Primal Tiger Leather (skinning #10257/19768)", 9001432},
    {"Gathersanity: Thick Leather (skinning #10258/4304)", 9001433},
    {"Gathersanity: Worn Dragonscale (skinning #10258/8165)", 9001434},
    {"Gathersanity: Rugged Leather (skinning #10258/8170)", 9001435},
    {"Gathersanity: Rugged Hide (skinning #10258/8171)", 9001436},
    {"Gathersanity: Black Dragonscale (skinning #10258/15416)", 9001437},
    {"Gathersanity: Thick Leather (skinning #10264/4304)", 9001438},
    {"Gathersanity: Worn Dragonscale (skinning #10264/8165)", 9001439},
    {"Gathersanity: Rugged Leather (skinning #10264/8170)", 9001440},
    {"Gathersanity: Rugged Hide (skinning #10264/8171)", 9001441},
    {"Gathersanity: Black Dragonscale (skinning #10264/15416)", 9001442},
    {"Gathersanity: Rugged Leather (skinning #10268/8170)", 9001443},
    {"Gathersanity: Rugged Hide (skinning #10268/8171)", 9001444},
    {"Gathersanity: Thick Leather (skinning #10321/4304)", 9001445},
    {"Gathersanity: Worn Dragonscale (skinning #10321/8165)", 9001446},
    {"Gathersanity: Rugged Leather (skinning #10321/8170)", 9001447},
    {"Gathersanity: Rugged Hide (skinning #10321/8171)", 9001448},
    {"Gathersanity: Black Dragonscale (skinning #10321/15416)", 9001449},
    {"Gathersanity: Rugged Leather (skinning #10339/8170)", 9001450},
    {"Gathersanity: Green Dragonscale (skinning #10339/15412)", 9001451},
    {"Gathersanity: Red Dragonscale (skinning #10339/15414)", 9001452},
    {"Gathersanity: Blue Dragonscale (skinning #10339/15415)", 9001453},
    {"Gathersanity: Black Dragonscale (skinning #10339/15416)", 9001454},
    {"Gathersanity: Thick Leather (skinning #10363/4304)", 9001455},
    {"Gathersanity: Worn Dragonscale (skinning #10363/8165)", 9001456},
    {"Gathersanity: Rugged Leather (skinning #10363/8170)", 9001457},
    {"Gathersanity: Rugged Hide (skinning #10363/8171)", 9001458},
    {"Gathersanity: Black Dragonscale (skinning #10363/15416)", 9001459},
    {"Gathersanity: Thick Leather (skinning #10366/4304)", 9001460},
    {"Gathersanity: Worn Dragonscale (skinning #10366/8165)", 9001461},
    {"Gathersanity: Rugged Leather (skinning #10366/8170)", 9001462},
    {"Gathersanity: Rugged Hide (skinning #10366/8171)", 9001463},
    {"Gathersanity: Black Dragonscale (skinning #10366/15416)", 9001464},
    {"Gathersanity: Thick Leather (skinning #10371/4304)", 9001465},
    {"Gathersanity: Worn Dragonscale (skinning #10371/8165)", 9001466},
    {"Gathersanity: Rugged Leather (skinning #10371/8170)", 9001467},
    {"Gathersanity: Rugged Hide (skinning #10371/8171)", 9001468},
    {"Gathersanity: Black Dragonscale (skinning #10371/15416)", 9001469},
    {"Gathersanity: Thick Leather (skinning #10372/4304)", 9001470},
    {"Gathersanity: Worn Dragonscale (skinning #10372/8165)", 9001471},
    {"Gathersanity: Rugged Leather (skinning #10372/8170)", 9001472},
    {"Gathersanity: Rugged Hide (skinning #10372/8171)", 9001473},
    {"Gathersanity: Black Dragonscale (skinning #10372/15416)", 9001474},
    {"Gathersanity: Rugged Leather (skinning #10430/8170)", 9001475},
    {"Gathersanity: Rugged Hide (skinning #10430/8171)", 9001476},
    {"Gathersanity: Pristine Hide of the Beast (skinning #10430/12731)", 9001477},
    {"Gathersanity: Thick Leather (skinning #10442/4304)", 9001478},
    {"Gathersanity: Rugged Leather (skinning #10442/8170)", 9001479},
    {"Gathersanity: Rugged Hide (skinning #10442/8171)", 9001480},
    {"Gathersanity: Green Dragonscale (skinning #10442/15412)", 9001481},
    {"Gathersanity: Red Dragonscale (skinning #10442/15414)", 9001482},
    {"Gathersanity: Blue Dragonscale (skinning #10442/15415)", 9001483},
    {"Gathersanity: Black Dragonscale (skinning #10442/15416)", 9001484},
    {"Gathersanity: Thick Leather (skinning #10447/4304)", 9001485},
    {"Gathersanity: Worn Dragonscale (skinning #10447/8165)", 9001486},
    {"Gathersanity: Rugged Leather (skinning #10447/8170)", 9001487},
    {"Gathersanity: Rugged Hide (skinning #10447/8171)", 9001488},
    {"Gathersanity: Green Dragonscale (skinning #10447/15412)", 9001489},
    {"Gathersanity: Red Dragonscale (skinning #10447/15414)", 9001490},
    {"Gathersanity: Blue Dragonscale (skinning #10447/15415)", 9001491},
    {"Gathersanity: Black Dragonscale (skinning #10447/15416)", 9001492},
    {"Gathersanity: Thick Leather (skinning #10659/4304)", 9001493},
    {"Gathersanity: Worn Dragonscale (skinning #10659/8165)", 9001494},
    {"Gathersanity: Thick Hide (skinning #10659/8169)", 9001495},
    {"Gathersanity: Rugged Leather (skinning #10659/8170)", 9001496},
    {"Gathersanity: Rugged Hide (skinning #10659/8171)", 9001497},
    {"Gathersanity: Blue Dragonscale (skinning #10659/15415)", 9001498},
    {"Gathersanity: Thick Leather (skinning #10660/4304)", 9001499},
    {"Gathersanity: Worn Dragonscale (skinning #10660/8165)", 9001500},
    {"Gathersanity: Thick Hide (skinning #10660/8169)", 9001501},
    {"Gathersanity: Rugged Leather (skinning #10660/8170)", 9001502},
    {"Gathersanity: Rugged Hide (skinning #10660/8171)", 9001503},
    {"Gathersanity: Blue Dragonscale (skinning #10660/15415)", 9001504},
    {"Gathersanity: Thick Leather (skinning #10661/4304)", 9001505},
    {"Gathersanity: Worn Dragonscale (skinning #10661/8165)", 9001506},
    {"Gathersanity: Thick Hide (skinning #10661/8169)", 9001507},
    {"Gathersanity: Rugged Leather (skinning #10661/8170)", 9001508},
    {"Gathersanity: Rugged Hide (skinning #10661/8171)", 9001509},
    {"Gathersanity: Blue Dragonscale (skinning #10661/15415)", 9001510},
    {"Gathersanity: Thick Leather (skinning #10662/4304)", 9001511},
    {"Gathersanity: Worn Dragonscale (skinning #10662/8165)", 9001512},
    {"Gathersanity: Rugged Leather (skinning #10662/8170)", 9001513},
    {"Gathersanity: Blue Dragonscale (skinning #10662/15415)", 9001514},
    {"Gathersanity: Thick Leather (skinning #10663/4304)", 9001515},
    {"Gathersanity: Worn Dragonscale (skinning #10663/8165)", 9001516},
    {"Gathersanity: Rugged Leather (skinning #10663/8170)", 9001517},
    {"Gathersanity: Rugged Hide (skinning #10663/8171)", 9001518},
    {"Gathersanity: Blue Dragonscale (skinning #10663/15415)", 9001519},
    {"Gathersanity: Thick Leather (skinning #10664/4304)", 9001520},
    {"Gathersanity: Worn Dragonscale (skinning #10664/8165)", 9001521},
    {"Gathersanity: Rugged Leather (skinning #10664/8170)", 9001522},
    {"Gathersanity: Rugged Hide (skinning #10664/8171)", 9001523},
    {"Gathersanity: Blue Dragonscale (skinning #10664/15415)", 9001524},
    {"Gathersanity: Thick Leather (skinning #10678/4304)", 9001525},
    {"Gathersanity: Worn Dragonscale (skinning #10678/8165)", 9001526},
    {"Gathersanity: Rugged Leather (skinning #10678/8170)", 9001527},
    {"Gathersanity: Rugged Hide (skinning #10678/8171)", 9001528},
    {"Gathersanity: Thick Leather (skinning #10683/4304)", 9001529},
    {"Gathersanity: Worn Dragonscale (skinning #10683/8165)", 9001530},
    {"Gathersanity: Rugged Leather (skinning #10683/8170)", 9001531},
    {"Gathersanity: Rugged Hide (skinning #10683/8171)", 9001532},
    {"Gathersanity: Black Dragonscale (skinning #10683/15416)", 9001533},
    {"Gathersanity: Thick Leather (skinning #10737/4304)", 9001534},
    {"Gathersanity: Rugged Leather (skinning #10737/8170)", 9001535},
    {"Gathersanity: Rugged Hide (skinning #10737/8171)", 9001536},
    {"Gathersanity: Thick Leather (skinning #10741/4304)", 9001537},
    {"Gathersanity: Rugged Leather (skinning #10741/8170)", 9001538},
    {"Gathersanity: Rugged Hide (skinning #10741/8171)", 9001539},
    {"Gathersanity: Thick Leather (skinning #10806/4304)", 9001540},
    {"Gathersanity: Rugged Leather (skinning #10806/8170)", 9001541},
    {"Gathersanity: Rugged Hide (skinning #10806/8171)", 9001542},
    {"Gathersanity: Warbear Leather (skinning #10806/15419)", 9001543},
    {"Gathersanity: Thick Leather (skinning #10807/4304)", 9001544},
    {"Gathersanity: Rugged Leather (skinning #10807/8170)", 9001545},
    {"Gathersanity: Rugged Hide (skinning #10807/8171)", 9001546},
    {"Gathersanity: Thick Leather (skinning #10814/4304)", 9001547},
    {"Gathersanity: Worn Dragonscale (skinning #10814/8165)", 9001548},
    {"Gathersanity: Rugged Leather (skinning #10814/8170)", 9001549},
    {"Gathersanity: Rugged Hide (skinning #10814/8171)", 9001550},
    {"Gathersanity: Green Dragonscale (skinning #10814/15412)", 9001551},
    {"Gathersanity: Red Dragonscale (skinning #10814/15414)", 9001552},
    {"Gathersanity: Blue Dragonscale (skinning #10814/15415)", 9001553},
    {"Gathersanity: Black Dragonscale (skinning #10814/15416)", 9001554},
    {"Gathersanity: Thick Leather (skinning #10981/4304)", 9001555},
    {"Gathersanity: Thick Hide (skinning #10981/8169)", 9001556},
    {"Gathersanity: Rugged Leather (skinning #10981/8170)", 9001557},
    {"Gathersanity: Thick Leather (skinning #10990/4304)", 9001558},
    {"Gathersanity: Thick Hide (skinning #10990/8169)", 9001559},
    {"Gathersanity: Rugged Leather (skinning #10990/8170)", 9001560},
    {"Gathersanity: Thick Leather (skinning #11357/4304)", 9001561},
    {"Gathersanity: Rugged Leather (skinning #11357/8170)", 9001562},
    {"Gathersanity: Rugged Hide (skinning #11357/8171)", 9001563},
    {"Gathersanity: Rugged Leather (skinning #11359/8170)", 9001564},
    {"Gathersanity: Rugged Hide (skinning #11359/8171)", 9001565},
    {"Gathersanity: Thick Leather (skinning #11360/4304)", 9001566},
    {"Gathersanity: Rugged Leather (skinning #11360/8170)", 9001567},
    {"Gathersanity: Rugged Hide (skinning #11360/8171)", 9001568},
    {"Gathersanity: Primal Tiger Leather (skinning #11360/19768)", 9001569},
    {"Gathersanity: Thick Leather (skinning #11361/4304)", 9001570},
    {"Gathersanity: Rugged Leather (skinning #11361/8170)", 9001571},
    {"Gathersanity: Rugged Hide (skinning #11361/8171)", 9001572},
    {"Gathersanity: Primal Tiger Leather (skinning #11361/19768)", 9001573},
    {"Gathersanity: Thick Leather (skinning #11365/4304)", 9001574},
    {"Gathersanity: Rugged Leather (skinning #11365/8170)", 9001575},
    {"Gathersanity: Rugged Hide (skinning #11365/8171)", 9001576},
    {"Gathersanity: Thick Leather (skinning #11368/4304)", 9001577},
    {"Gathersanity: Rugged Leather (skinning #11368/8170)", 9001578},
    {"Gathersanity: Rugged Hide (skinning #11368/8171)", 9001579},
    {"Gathersanity: Primal Bat Leather (skinning #11368/19767)", 9001580},
    {"Gathersanity: Thick Leather (skinning #11371/4304)", 9001581},
    {"Gathersanity: Rugged Leather (skinning #11371/8170)", 9001582},
    {"Gathersanity: Rugged Hide (skinning #11371/8171)", 9001583},
    {"Gathersanity: Thick Leather (skinning #11372/4304)", 9001584},
    {"Gathersanity: Rugged Leather (skinning #11372/8170)", 9001585},
    {"Gathersanity: Rugged Hide (skinning #11372/8171)", 9001586},
    {"Gathersanity: Thick Leather (skinning #11373/4304)", 9001587},
    {"Gathersanity: Rugged Leather (skinning #11373/8170)", 9001588},
    {"Gathersanity: Rugged Hide (skinning #11373/8171)", 9001589},
    {"Gathersanity: Rugged Leather (skinning #11496/8170)", 9001590},
    {"Gathersanity: Thick Leather (skinning #11497/4304)", 9001591},
    {"Gathersanity: Rugged Leather (skinning #11497/8170)", 9001592},
    {"Gathersanity: Rugged Hide (skinning #11497/8171)", 9001593},
    {"Gathersanity: Black Dragonscale (skinning #11583/15416)", 9001594},
    {"Gathersanity: Core Leather (skinning #11673/17012)", 9001595},
    {"Gathersanity: Silithid Chitin (skinning #11698/20498)", 9001596},
    {"Gathersanity: Broken Silithid Chitin (skinning #11698/20499)", 9001597},
    {"Gathersanity: Light Silithid Carapace (skinning #11698/20500)", 9001598},
    {"Gathersanity: Silithid Chitin (skinning #11721/20498)", 9001599},
    {"Gathersanity: Broken Silithid Chitin (skinning #11721/20499)", 9001600},
    {"Gathersanity: Silithid Chitin (skinning #11722/20498)", 9001601},
    {"Gathersanity: Broken Silithid Chitin (skinning #11722/20499)", 9001602},
    {"Gathersanity: Silithid Chitin (skinning #11723/20498)", 9001603},
    {"Gathersanity: Broken Silithid Chitin (skinning #11723/20499)", 9001604},
    {"Gathersanity: Heavy Silithid Carapace (skinning #11723/20501)", 9001605},
    {"Gathersanity: Silithid Chitin (skinning #11724/20498)", 9001606},
    {"Gathersanity: Broken Silithid Chitin (skinning #11724/20499)", 9001607},
    {"Gathersanity: Light Silithid Carapace (skinning #11724/20500)", 9001608},
    {"Gathersanity: Silithid Chitin (skinning #11725/20498)", 9001609},
    {"Gathersanity: Broken Silithid Chitin (skinning #11725/20499)", 9001610},
    {"Gathersanity: Silithid Chitin (skinning #11726/20498)", 9001611},
    {"Gathersanity: Broken Silithid Chitin (skinning #11726/20499)", 9001612},
    {"Gathersanity: Silithid Chitin (skinning #11727/20498)", 9001613},
    {"Gathersanity: Broken Silithid Chitin (skinning #11727/20499)", 9001614},
    {"Gathersanity: Light Silithid Carapace (skinning #11727/20500)", 9001615},
    {"Gathersanity: Silithid Chitin (skinning #11728/20498)", 9001616},
    {"Gathersanity: Broken Silithid Chitin (skinning #11728/20499)", 9001617},
    {"Gathersanity: Heavy Silithid Carapace (skinning #11728/20501)", 9001618},
    {"Gathersanity: Silithid Chitin (skinning #11729/20498)", 9001619},
    {"Gathersanity: Broken Silithid Chitin (skinning #11729/20499)", 9001620},
    {"Gathersanity: Silithid Chitin (skinning #11730/20498)", 9001621},
    {"Gathersanity: Broken Silithid Chitin (skinning #11730/20499)", 9001622},
    {"Gathersanity: Heavy Silithid Carapace (skinning #11730/20501)", 9001623},
    {"Gathersanity: Silithid Chitin (skinning #11731/20498)", 9001624},
    {"Gathersanity: Broken Silithid Chitin (skinning #11731/20499)", 9001625},
    {"Gathersanity: Silithid Chitin (skinning #11732/20498)", 9001626},
    {"Gathersanity: Broken Silithid Chitin (skinning #11732/20499)", 9001627},
    {"Gathersanity: Light Silithid Carapace (skinning #11732/20500)", 9001628},
    {"Gathersanity: Silithid Chitin (skinning #11733/20498)", 9001629},
    {"Gathersanity: Broken Silithid Chitin (skinning #11733/20499)", 9001630},
    {"Gathersanity: Silithid Chitin (skinning #11734/20498)", 9001631},
    {"Gathersanity: Broken Silithid Chitin (skinning #11734/20499)", 9001632},
    {"Gathersanity: Heavy Silithid Carapace (skinning #11734/20501)", 9001633},
    {"Gathersanity: Thick Leather (skinning #11735/4304)", 9001634},
    {"Gathersanity: Thick Hide (skinning #11735/8169)", 9001635},
    {"Gathersanity: Rugged Leather (skinning #11735/8170)", 9001636},
    {"Gathersanity: Heavy Scorpid Scale (skinning #11735/15408)", 9001637},
    {"Gathersanity: Thick Leather (skinning #11736/4304)", 9001638},
    {"Gathersanity: Thick Hide (skinning #11736/8169)", 9001639},
    {"Gathersanity: Rugged Leather (skinning #11736/8170)", 9001640},
    {"Gathersanity: Heavy Scorpid Scale (skinning #11736/15408)", 9001641},
    {"Gathersanity: Thick Leather (skinning #11737/4304)", 9001642},
    {"Gathersanity: Thick Hide (skinning #11737/8169)", 9001643},
    {"Gathersanity: Rugged Leather (skinning #11737/8170)", 9001644},
    {"Gathersanity: Heavy Scorpid Scale (skinning #11737/15408)", 9001645},
    {"Gathersanity: Thick Leather (skinning #11740/4304)", 9001646},
    {"Gathersanity: Thick Hide (skinning #11740/8169)", 9001647},
    {"Gathersanity: Rugged Leather (skinning #11740/8170)", 9001648},
    {"Gathersanity: Rugged Hide (skinning #11740/8171)", 9001649},
    {"Gathersanity: Thick Leather (skinning #11741/4304)", 9001650},
    {"Gathersanity: Thick Hide (skinning #11741/8169)", 9001651},
    {"Gathersanity: Rugged Leather (skinning #11741/8170)", 9001652},
    {"Gathersanity: Rugged Hide (skinning #11741/8171)", 9001653},
    {"Gathersanity: Black Dragonscale (skinning #11981/15416)", 9001654},
    {"Gathersanity: Core Leather (skinning #11982/17012)", 9001655},
    {"Gathersanity: Black Dragonscale (skinning #11983/15416)", 9001656},
    {"Gathersanity: Medium Leather (skinning #12037/2319)", 9001657},
    {"Gathersanity: Heavy Leather (skinning #12037/4234)", 9001658},
    {"Gathersanity: Thick Leather (skinning #12121/4304)", 9001659},
    {"Gathersanity: Rugged Leather (skinning #12121/8170)", 9001660},
    {"Gathersanity: Rugged Hide (skinning #12121/8171)", 9001661},
    {"Gathersanity: Knothide Leather Scraps (skinning #12121/25649)", 9001662},
    {"Gathersanity: Thick Leather (skinning #12122/4304)", 9001663},
    {"Gathersanity: Rugged Leather (skinning #12122/8170)", 9001664},
    {"Gathersanity: Rugged Hide (skinning #12122/8171)", 9001665},
    {"Gathersanity: Knothide Leather (skinning #12122/21887)", 9001666},
    {"Gathersanity: Knothide Leather Scraps (skinning #12122/25649)", 9001667},
    {"Gathersanity: Thick Leather (skinning #12129/4304)", 9001668},
    {"Gathersanity: Worn Dragonscale (skinning #12129/8165)", 9001669},
    {"Gathersanity: Rugged Leather (skinning #12129/8170)", 9001670},
    {"Gathersanity: Rugged Hide (skinning #12129/8171)", 9001671},
    {"Gathersanity: Thick Leather (skinning #12207/4304)", 9001672},
    {"Gathersanity: Thick Hide (skinning #12207/8169)", 9001673},
    {"Gathersanity: Rugged Leather (skinning #12207/8170)", 9001674},
    {"Gathersanity: Thick Leather (skinning #12418/4304)", 9001675},
    {"Gathersanity: Thick Hide (skinning #12418/8169)", 9001676},
    {"Gathersanity: Rugged Leather (skinning #12418/8170)", 9001677},
    {"Gathersanity: Rugged Hide (skinning #12418/8171)", 9001678},
    {"Gathersanity: Rugged Leather (skinning #12460/8170)", 9001679},
    {"Gathersanity: Rugged Hide (skinning #12460/8171)", 9001680},
    {"Gathersanity: Black Dragonscale (skinning #12460/15416)", 9001681},
    {"Gathersanity: Rugged Leather (skinning #12461/8170)", 9001682},
    {"Gathersanity: Rugged Hide (skinning #12461/8171)", 9001683},
    {"Gathersanity: Black Dragonscale (skinning #12461/15416)", 9001684},
    {"Gathersanity: Rugged Leather (skinning #12463/8170)", 9001685},
    {"Gathersanity: Rugged Hide (skinning #12463/8171)", 9001686},
    {"Gathersanity: Black Dragonscale (skinning #12463/15416)", 9001687},
    {"Gathersanity: Rugged Leather (skinning #12464/8170)", 9001688},
    {"Gathersanity: Rugged Hide (skinning #12464/8171)", 9001689},
    {"Gathersanity: Black Dragonscale (skinning #12464/15416)", 9001690},
    {"Gathersanity: Rugged Leather (skinning #12465/8170)", 9001691},
    {"Gathersanity: Rugged Hide (skinning #12465/8171)", 9001692},
    {"Gathersanity: Black Dragonscale (skinning #12465/15416)", 9001693},
    {"Gathersanity: Rugged Leather (skinning #12467/8170)", 9001694},
    {"Gathersanity: Rugged Hide (skinning #12467/8171)", 9001695},
    {"Gathersanity: Black Dragonscale (skinning #12467/15416)", 9001696},
    {"Gathersanity: Rugged Leather (skinning #12468/8170)", 9001697},
    {"Gathersanity: Rugged Hide (skinning #12468/8171)", 9001698},
    {"Gathersanity: Black Dragonscale (skinning #12468/15416)", 9001699},
    {"Gathersanity: Thick Leather (skinning #12474/4304)", 9001700},
    {"Gathersanity: Worn Dragonscale (skinning #12474/8165)", 9001701},
    {"Gathersanity: Rugged Leather (skinning #12474/8170)", 9001702},
    {"Gathersanity: Rugged Hide (skinning #12474/8171)", 9001703},
    {"Gathersanity: Green Dragonscale (skinning #12474/15412)", 9001704},
    {"Gathersanity: Worn Dragonscale (skinning #12475/8165)", 9001705},
    {"Gathersanity: Rugged Leather (skinning #12475/8170)", 9001706},
    {"Gathersanity: Green Dragonscale (skinning #12475/15412)", 9001707},
    {"Gathersanity: Thick Leather (skinning #12476/4304)", 9001708},
    {"Gathersanity: Rugged Leather (skinning #12476/8170)", 9001709},
    {"Gathersanity: Green Dragonscale (skinning #12476/15412)", 9001710},
    {"Gathersanity: Thick Leather (skinning #12477/4304)", 9001711},
    {"Gathersanity: Worn Dragonscale (skinning #12477/8165)", 9001712},
    {"Gathersanity: Rugged Leather (skinning #12477/8170)", 9001713},
    {"Gathersanity: Green Dragonscale (skinning #12477/15412)", 9001714},
    {"Gathersanity: Thick Leather (skinning #12479/4304)", 9001715},
    {"Gathersanity: Worn Dragonscale (skinning #12479/8165)", 9001716},
    {"Gathersanity: Rugged Leather (skinning #12479/8170)", 9001717},
    {"Gathersanity: Rugged Hide (skinning #12479/8171)", 9001718},
    {"Gathersanity: Green Dragonscale (skinning #12479/15412)", 9001719},
    {"Gathersanity: Worn Dragonscale (skinning #12498/8165)", 9001720},
    {"Gathersanity: Rugged Leather (skinning #12498/8170)", 9001721},
    {"Gathersanity: Green Dragonscale (skinning #12498/15412)", 9001722},
    {"Gathersanity: Light Hide (skinning #12715/783)", 9001723},
    {"Gathersanity: Light Leather (skinning #12715/2318)", 9001724},
    {"Gathersanity: Medium Leather (skinning #12715/2319)", 9001725},
    {"Gathersanity: Medium Hide (skinning #12715/4232)", 9001726},
    {"Gathersanity: Deviate Scale (skinning #12715/6470)", 9001727},
    {"Gathersanity: Perfect Deviate Scale (skinning #12715/6471)", 9001728},
    {"Gathersanity: Thick Leather (skinning #12739/4304)", 9001729},
    {"Gathersanity: Worn Dragonscale (skinning #12739/8165)", 9001730},
    {"Gathersanity: Rugged Leather (skinning #12739/8170)", 9001731},
    {"Gathersanity: Rugged Hide (skinning #12739/8171)", 9001732},
    {"Gathersanity: Black Dragonscale (skinning #12739/15416)", 9001733},
    {"Gathersanity: Thick Leather (skinning #12800/4304)", 9001734},
    {"Gathersanity: Rugged Leather (skinning #12800/8170)", 9001735},
    {"Gathersanity: Rugged Hide (skinning #12800/8171)", 9001736},
    {"Gathersanity: Thick Leather (skinning #12801/4304)", 9001737},
    {"Gathersanity: Rugged Leather (skinning #12801/8170)", 9001738},
    {"Gathersanity: Rugged Hide (skinning #12801/8171)", 9001739},
    {"Gathersanity: Rugged Leather (skinning #12802/8170)", 9001740},
    {"Gathersanity: Rugged Hide (skinning #12802/8171)", 9001741},
    {"Gathersanity: Thick Leather (skinning #12899/4304)", 9001742},
    {"Gathersanity: Worn Dragonscale (skinning #12899/8165)", 9001743},
    {"Gathersanity: Rugged Leather (skinning #12899/8170)", 9001744},
    {"Gathersanity: Red Dragonscale (skinning #12899/15414)", 9001745},
    {"Gathersanity: Thick Leather (skinning #12900/4304)", 9001746},
    {"Gathersanity: Worn Dragonscale (skinning #12900/8165)", 9001747},
    {"Gathersanity: Rugged Leather (skinning #12900/8170)", 9001748},
    {"Gathersanity: Rugged Hide (skinning #12900/8171)", 9001749},
    {"Gathersanity: Green Dragonscale (skinning #12900/15412)", 9001750},
    {"Gathersanity: Thick Leather (skinning #13036/4304)", 9001751},
    {"Gathersanity: Rugged Leather (skinning #13036/8170)", 9001752},
    {"Gathersanity: Rugged Hide (skinning #13036/8171)", 9001753},
    {"Gathersanity: Silithid Chitin (skinning #13136/20498)", 9001754},
    {"Gathersanity: Broken Silithid Chitin (skinning #13136/20499)", 9001755},
    {"Gathersanity: Light Silithid Carapace (skinning #13136/20500)", 9001756},
    {"Gathersanity: Silithid Chitin (skinning #13301/20498)", 9001757},
    {"Gathersanity: Broken Silithid Chitin (skinning #13301/20499)", 9001758},
    {"Gathersanity: Light Silithid Carapace (skinning #13301/20500)", 9001759},
    {"Gathersanity: Thick Leather (skinning #13323/4304)", 9001760},
    {"Gathersanity: Thick Hide (skinning #13323/8169)", 9001761},
    {"Gathersanity: Rugged Leather (skinning #13323/8170)", 9001762},
    {"Gathersanity: Thick Leather (skinning #13596/4304)", 9001763},
    {"Gathersanity: Thick Hide (skinning #13596/8169)", 9001764},
    {"Gathersanity: Rugged Leather (skinning #13596/8170)", 9001765},
    {"Gathersanity: Thick Leather (skinning #13599/4304)", 9001766},
    {"Gathersanity: Turtle Scale (skinning #13599/8167)", 9001767},
    {"Gathersanity: Thick Hide (skinning #13599/8169)", 9001768},
    {"Gathersanity: Rugged Leather (skinning #13599/8170)", 9001769},
    {"Gathersanity: Thick Leather (skinning #13896/4304)", 9001770},
    {"Gathersanity: Turtle Scale (skinning #13896/8167)", 9001771},
    {"Gathersanity: Rugged Leather (skinning #13896/8170)", 9001772},
    {"Gathersanity: Brilliant Chromatic Scale (skinning #14020/12607)", 9001773},
    {"Gathersanity: Green Dragonscale (skinning #14020/15412)", 9001774},
    {"Gathersanity: Red Dragonscale (skinning #14020/15414)", 9001775},
    {"Gathersanity: Blue Dragonscale (skinning #14020/15415)", 9001776},
    {"Gathersanity: Black Dragonscale (skinning #14020/15416)", 9001777},
    {"Gathersanity: Heavy Leather (skinning #14123/4234)", 9001778},
    {"Gathersanity: Heavy Hide (skinning #14123/4235)", 9001779},
    {"Gathersanity: Thick Leather (skinning #14123/4304)", 9001780},
    {"Gathersanity: Turtle Scale (skinning #14123/8167)", 9001781},
    {"Gathersanity: Thick Hide (skinning #14123/8169)", 9001782},
    {"Gathersanity: Medium Leather (skinning #14228/2319)", 9001783},
    {"Gathersanity: Medium Hide (skinning #14228/4232)", 9001784},
    {"Gathersanity: Heavy Leather (skinning #14228/4234)", 9001785},
    {"Gathersanity: Heavy Hide (skinning #14228/4235)", 9001786},
    {"Gathersanity: Heavy Leather (skinning #14234/4234)", 9001787},
    {"Gathersanity: Heavy Hide (skinning #14234/4235)", 9001788},
    {"Gathersanity: Thick Leather (skinning #14234/4304)", 9001789},
    {"Gathersanity: Light Leather (skinning #14272/2318)", 9001790},
    {"Gathersanity: Black Whelp Scale (skinning #14272/7286)", 9001791},
    {"Gathersanity: Thick Leather (skinning #14282/4304)", 9001792},
    {"Gathersanity: Thick Hide (skinning #14282/8169)", 9001793},
    {"Gathersanity: Rugged Leather (skinning #14282/8170)", 9001794},
    {"Gathersanity: Rugged Hide (skinning #14282/8171)", 9001795},
    {"Gathersanity: Thick Leather (skinning #14308/4304)", 9001796},
    {"Gathersanity: Rugged Leather (skinning #14308/8170)", 9001797},
    {"Gathersanity: Rugged Hide (skinning #14308/8171)", 9001798},
    {"Gathersanity: Warbear Leather (skinning #14308/15419)", 9001799},
    {"Gathersanity: Thick Leather (skinning #14398/4304)", 9001800},
    {"Gathersanity: Worn Dragonscale (skinning #14398/8165)", 9001801},
    {"Gathersanity: Rugged Leather (skinning #14398/8170)", 9001802},
    {"Gathersanity: Thick Leather (skinning #14445/4304)", 9001803},
    {"Gathersanity: Worn Dragonscale (skinning #14445/8165)", 9001804},
    {"Gathersanity: Thick Hide (skinning #14445/8169)", 9001805},
    {"Gathersanity: Rugged Leather (skinning #14445/8170)", 9001806},
    {"Gathersanity: Green Dragonscale (skinning #14445/15412)", 9001807},
    {"Gathersanity: Silithid Chitin (skinning #14473/20498)", 9001808},
    {"Gathersanity: Broken Silithid Chitin (skinning #14473/20499)", 9001809},
    {"Gathersanity: Heavy Silithid Carapace (skinning #14473/20501)", 9001810},
    {"Gathersanity: Silithid Chitin (skinning #14474/20498)", 9001811},
    {"Gathersanity: Broken Silithid Chitin (skinning #14474/20499)", 9001812},
    {"Gathersanity: Light Silithid Carapace (skinning #14474/20500)", 9001813},
    {"Gathersanity: Silithid Chitin (skinning #14475/20498)", 9001814},
    {"Gathersanity: Broken Silithid Chitin (skinning #14475/20499)", 9001815},
    {"Gathersanity: Thick Leather (skinning #14502/4304)", 9001816},
    {"Gathersanity: Thick Hide (skinning #14502/8169)", 9001817},
    {"Gathersanity: Rugged Leather (skinning #14502/8170)", 9001818},
    {"Gathersanity: Rugged Hide (skinning #14502/8171)", 9001819},
    {"Gathersanity: Black Dragonscale (skinning #14601/15416)", 9001820},
    {"Gathersanity: Rugged Leather (skinning #14750/8170)", 9001821},
    {"Gathersanity: Thick Leather (skinning #14821/4304)", 9001822},
    {"Gathersanity: Rugged Leather (skinning #14821/8170)", 9001823},
    {"Gathersanity: Rugged Hide (skinning #14821/8171)", 9001824},
    {"Gathersanity: Green Dragonscale (skinning #14887/15412)", 9001825},
    {"Gathersanity: Dreamscale (skinning #14887/20381)", 9001826},
    {"Gathersanity: Thick Leather (skinning #15043/4304)", 9001827},
    {"Gathersanity: Rugged Leather (skinning #15043/8170)", 9001828},
    {"Gathersanity: Rugged Hide (skinning #15043/8171)", 9001829},
    {"Gathersanity: Thick Leather (skinning #15196/4304)", 9001830},
    {"Gathersanity: Thick Hide (skinning #15196/8169)", 9001831},
    {"Gathersanity: Rugged Leather (skinning #15196/8170)", 9001832},
    {"Gathersanity: Heavy Scorpid Scale (skinning #15196/15408)", 9001833},
    {"Gathersanity: Broken Silithid Chitin (skinning #15286/20499)", 9001834},
    {"Gathersanity: Silithid Chitin (skinning #15288/20498)", 9001835},
    {"Gathersanity: Broken Silithid Chitin (skinning #15288/20499)", 9001836},
    {"Gathersanity: Silithid Chitin (skinning #15290/20498)", 9001837},
    {"Gathersanity: Broken Silithid Chitin (skinning #15290/20499)", 9001838},
    {"Gathersanity: Broken Silithid Chitin (skinning #15319/20499)", 9001839},
    {"Gathersanity: Silithid Chitin (skinning #15320/20498)", 9001840},
    {"Gathersanity: Broken Silithid Chitin (skinning #15320/20499)", 9001841},
    {"Gathersanity: Heavy Silithid Carapace (skinning #15320/20501)", 9001842},
    {"Gathersanity: Silithid Chitin (skinning #15323/20498)", 9001843},
    {"Gathersanity: Broken Silithid Chitin (skinning #15323/20499)", 9001844},
    {"Gathersanity: Heavy Silithid Carapace (skinning #15323/20501)", 9001845},
    {"Gathersanity: Silithid Chitin (skinning #15325/20498)", 9001846},
    {"Gathersanity: Broken Silithid Chitin (skinning #15325/20499)", 9001847},
    {"Gathersanity: Light Silithid Carapace (skinning #15325/20500)", 9001848},
    {"Gathersanity: Silithid Chitin (skinning #15327/20498)", 9001849},
    {"Gathersanity: Broken Silithid Chitin (skinning #15327/20499)", 9001850},
    {"Gathersanity: Light Silithid Carapace (skinning #15327/20500)", 9001851},
    {"Gathersanity: Broken Silithid Chitin (skinning #15336/20499)", 9001852},
    {"Gathersanity: Green Dragonscale (skinning #15412/15412)", 9001853},
    {"Gathersanity: Red Dragonscale (skinning #15414/15414)", 9001854},
    {"Gathersanity: Blue Dragonscale (skinning #15415/15415)", 9001855},
    {"Gathersanity: Black Dragonscale (skinning #15416/15416)", 9001856},
    {"Gathersanity: Rugged Leather (skinning #15554/8170)", 9001857},
    {"Gathersanity: Rugged Leather (skinning #16095/8170)", 9001858},
    {"Gathersanity: Thick Leather (skinning #16117/4304)", 9001859},
    {"Gathersanity: Rugged Leather (skinning #16117/8170)", 9001860},
    {"Gathersanity: Rugged Hide (skinning #16117/8171)", 9001861},
    {"Gathersanity: Knothide Leather (skinning #16181/21887)", 9001862},
    {"Gathersanity: Knothide Leather Scraps (skinning #16181/25649)", 9001863},
    {"Gathersanity: Fel Hide (skinning #16181/25707)", 9001864},
    {"Gathersanity: Light Leather (skinning #17201/2318)", 9001865},
    {"Gathersanity: Ruined Leather Scraps (skinning #17201/2934)", 9001866},
    {"Gathersanity: Knothide Leather (skinning #17307/21887)", 9001867},
    {"Gathersanity: Light Leather (skinning #17374/2318)", 9001868},
    {"Gathersanity: Ruined Leather Scraps (skinning #17374/2934)", 9001869},
    {"Gathersanity: Light Hide (skinning #17592/783)", 9001870},
    {"Gathersanity: Light Leather (skinning #17592/2318)", 9001871},
    {"Gathersanity: Medium Leather (skinning #17592/2319)", 9001872},
    {"Gathersanity: Light Hide (skinning #17661/783)", 9001873},
    {"Gathersanity: Light Leather (skinning #17661/2318)", 9001874},
    {"Gathersanity: Medium Leather (skinning #17661/2319)", 9001875},
    {"Gathersanity: Knothide Leather (skinning #18398/21887)", 9001876},
    {"Gathersanity: Knothide Leather Scraps (skinning #18398/25649)", 9001877},
    {"Gathersanity: Thick Clefthoof Leather (skinning #18398/25708)", 9001878},
    {"Gathersanity: Knothide Leather (skinning #20520/21887)", 9001879},
    {"Gathersanity: Knothide Leather Scraps (skinning #20520/25649)", 9001880},
    {"Gathersanity: Crystal Infused Leather (skinning #20520/25699)", 9001881},
    {"Gathersanity: Fel Scales (skinning #20520/25700)", 9001882},
    {"Gathersanity: Knothide Leather (skinning #20775/21887)", 9001883},
    {"Gathersanity: Knothide Leather Scraps (skinning #20775/25649)", 9001884},
    {"Gathersanity: Knothide Leather (skinning #21387/21887)", 9001885},
    {"Gathersanity: Knothide Leather Scraps (skinning #21387/25649)", 9001886},
    {"Gathersanity: Knothide Leather (skinning #21697/21887)", 9001887},
    {"Gathersanity: Knothide Leather (skinning #21723/21887)", 9001888},
    {"Gathersanity: Knothide Leather (skinning #22072/21887)", 9001889},
    {"Gathersanity: Knothide Leather Scraps (skinning #22072/25649)", 9001890},
    {"Gathersanity: Nether Residue (skinning #22072/35229)", 9001891},
    {"Gathersanity: Knothide Leather (skinning #22885/21887)", 9001892},
    {"Gathersanity: Knothide Leather (skinning #23163/21887)", 9001893},
    {"Gathersanity: Knothide Leather Scraps (skinning #23163/25649)", 9001894},
    {"Gathersanity: Fel Hide (skinning #23163/25707)", 9001895},
    {"Gathersanity: Nether Residue (skinning #23163/35229)", 9001896},
    {"Gathersanity: Heavy Leather (skinning #23873/4234)", 9001897},
    {"Gathersanity: Heavy Hide (skinning #23873/4235)", 9001898},
    {"Gathersanity: Thick Leather (skinning #23873/4304)", 9001899},
    {"Gathersanity: Knothide Leather (skinning #24047/21887)", 9001900},
    {"Gathersanity: Crystal Infused Leather (skinning #24047/25699)", 9001901},
    {"Gathersanity: Knothide Leather (skinning #25599/21887)", 9001902},
    {"Gathersanity: Knothide Leather Scraps (skinning #25599/25649)", 9001903},
    {"Gathersanity: Fel Hide (skinning #25599/25707)", 9001904},
    {"Gathersanity: Borean Leather (skinning #26723/33568)", 9001905},
    {"Gathersanity: Icy Dragonscale (skinning #26723/38557)", 9001906},
    {"Gathersanity: Arctic Fur (skinning #26723/44128)", 9001907},
    {"Gathersanity: Sprung Sprocket (skinning #27641/36813)", 9001908},
    {"Gathersanity: Handful of Cobalt Bolts (skinning #27641/39681)", 9001909},
    {"Gathersanity: Overcharged Capacitor (skinning #27641/39682)", 9001910},
    {"Gathersanity: Hair Trigger (skinning #27641/39684)", 9001911},
    {"Gathersanity: Indestructible Frame (skinning #27641/39685)", 9001912},
    {"Gathersanity: Volatile Blasting Trigger (skinning #27641/39690)", 9001913},
    {"Gathersanity: Whizzed-Out Gizmo (skinning #27641/41337)", 9001914},
    {"Gathersanity: Sprung Whirlygig (skinning #27641/41338)", 9001915},
    {"Gathersanity: Schematic: Jeeves (skinning #27641/49050)", 9001916},
    {"Gathersanity: Borean Leather (skinning #28860/33568)", 9001917},
    {"Gathersanity: Icy Dragonscale (skinning #28860/38557)", 9001918},
    {"Gathersanity: Arctic Fur (skinning #28860/44128)", 9001919},
    {"Gathersanity: Handful of Cobalt Bolts (skinning #29380/39681)", 9001920},
    {"Gathersanity: Overcharged Capacitor (skinning #29380/39682)", 9001921},
    {"Gathersanity: Volatile Blasting Trigger (skinning #29380/39690)", 9001922},
    {"Gathersanity: Whizzed-Out Gizmo (skinning #29380/41337)", 9001923},
    {"Gathersanity: Sprung Whirlygig (skinning #29380/41338)", 9001924},
    {"Gathersanity: Schematic: Jeeves (skinning #29380/49050)", 9001925},
    {"Gathersanity: Handful of Cobalt Bolts (skinning #29729/39681)", 9001926},
    {"Gathersanity: Volatile Blasting Trigger (skinning #29729/39690)", 9001927},
    {"Gathersanity: Whizzed-Out Gizmo (skinning #29729/41337)", 9001928},
    {"Gathersanity: Sprung Whirlygig (skinning #29729/41338)", 9001929},
    {"Gathersanity: Schematic: Jeeves (skinning #29729/49050)", 9001930},
    {"Gathersanity: Handful of Cobalt Bolts (skinning #29730/39681)", 9001931},
    {"Gathersanity: Overcharged Capacitor (skinning #29730/39682)", 9001932},
    {"Gathersanity: Volatile Blasting Trigger (skinning #29730/39690)", 9001933},
    {"Gathersanity: Whizzed-Out Gizmo (skinning #29730/41337)", 9001934},
    {"Gathersanity: Sprung Whirlygig (skinning #29730/41338)", 9001935},
    {"Gathersanity: Schematic: Jeeves (skinning #29730/49050)", 9001936},
    {"Gathersanity: Borean Leather (skinning #30260/33568)", 9001937},
    {"Gathersanity: Borean Leather (skinning #32517/33568)", 9001938},
    {"Gathersanity: Arctic Fur (skinning #32517/44128)", 9001939},
    {"Gathersanity: Loque'Nahak's Pelt (skinning #32517/44687)", 9001940},
    {"Gathersanity: Borean Leather (skinning #34797/33568)", 9001941},
    {"Gathersanity: Arctic Fur (skinning #34797/44128)", 9001942},
    {"Gathersanity: Borean Leather (skinning #37501/33568)", 9001943},
    {"Gathersanity: Nerubian Chitin (skinning #37501/38558)", 9001944},
    {"Gathersanity: Borean Leather (skinning #37502/33568)", 9001945},
    {"Gathersanity: Nerubian Chitin (skinning #37502/38558)", 9001946},
    {"Gathersanity: Knothide Leather (skinning #70060/21887)", 9001947},
    {"Gathersanity: Knothide Leather Scraps (skinning #70060/25649)", 9001948},
    {"Gathersanity: Knothide Leather (skinning #70061/21887)", 9001949},
    {"Gathersanity: Knothide Leather Scraps (skinning #70061/25649)", 9001950},
    {"Gathersanity: Knothide Leather (skinning #70062/21887)", 9001951},
    {"Gathersanity: Knothide Leather Scraps (skinning #70062/25649)", 9001952},
    {"Gathersanity: Knothide Leather (skinning #70063/21887)", 9001953},
    {"Gathersanity: Knothide Leather Scraps (skinning #70063/25649)", 9001954},
    {"Gathersanity: Knothide Leather (skinning #70064/21887)", 9001955},
    {"Gathersanity: Knothide Leather Scraps (skinning #70064/25649)", 9001956},
    {"Gathersanity: Knothide Leather (skinning #70065/21887)", 9001957},
    {"Gathersanity: Knothide Leather Scraps (skinning #70065/25649)", 9001958},
    {"Gathersanity: Knothide Leather (skinning #70066/21887)", 9001959},
    {"Gathersanity: Knothide Leather Scraps (skinning #70066/25649)", 9001960},
    {"Gathersanity: Knothide Leather (skinning #70067/21887)", 9001961},
    {"Gathersanity: Knothide Leather (skinning #70068/21887)", 9001962},
    {"Gathersanity: Knothide Leather Scraps (skinning #70068/25649)", 9001963},
    {"Gathersanity: Knothide Leather (skinning #70069/21887)", 9001964},
    {"Gathersanity: Knothide Leather (skinning #70160/21887)", 9001965},
    {"Gathersanity: Knothide Leather Scraps (skinning #70160/25649)", 9001966},
    {"Gathersanity: Fel Hide (skinning #70160/25707)", 9001967},
    {"Gathersanity: Knothide Leather (skinning #70161/21887)", 9001968},
    {"Gathersanity: Knothide Leather Scraps (skinning #70161/25649)", 9001969},
    {"Gathersanity: Fel Hide (skinning #70161/25707)", 9001970},
    {"Gathersanity: Knothide Leather (skinning #70162/21887)", 9001971},
    {"Gathersanity: Knothide Leather Scraps (skinning #70162/25649)", 9001972},
    {"Gathersanity: Fel Hide (skinning #70162/25707)", 9001973},
    {"Gathersanity: Knothide Leather (skinning #70163/21887)", 9001974},
    {"Gathersanity: Knothide Leather Scraps (skinning #70163/25649)", 9001975},
    {"Gathersanity: Crystal Infused Leather (skinning #70163/25699)", 9001976},
    {"Gathersanity: Fel Scales (skinning #70163/25700)", 9001977},
    {"Gathersanity: Knothide Leather (skinning #70164/21887)", 9001978},
    {"Gathersanity: Knothide Leather Scraps (skinning #70164/25649)", 9001979},
    {"Gathersanity: Crystal Infused Leather (skinning #70164/25699)", 9001980},
    {"Gathersanity: Fel Scales (skinning #70164/25700)", 9001981},
    {"Gathersanity: Knothide Leather (skinning #70165/21887)", 9001982},
    {"Gathersanity: Knothide Leather Scraps (skinning #70165/25649)", 9001983},
    {"Gathersanity: Crystal Infused Leather (skinning #70165/25699)", 9001984},
    {"Gathersanity: Fel Scales (skinning #70165/25700)", 9001985},
    {"Gathersanity: Nethermine Flayer Hide (skinning #70165/32470)", 9001986},
    {"Gathersanity: Knothide Leather (skinning #70166/21887)", 9001987},
    {"Gathersanity: Knothide Leather Scraps (skinning #70166/25649)", 9001988},
    {"Gathersanity: Thick Clefthoof Leather (skinning #70166/25708)", 9001989},
    {"Gathersanity: Knothide Leather (skinning #70167/21887)", 9001990},
    {"Gathersanity: Knothide Leather Scraps (skinning #70167/25649)", 9001991},
    {"Gathersanity: Thick Clefthoof Leather (skinning #70167/25708)", 9001992},
    {"Gathersanity: Knothide Leather (skinning #70168/21887)", 9001993},
    {"Gathersanity: Knothide Leather Scraps (skinning #70168/25649)", 9001994},
    {"Gathersanity: Cobra Scales (skinning #70168/29539)", 9001995},
    {"Gathersanity: Knothide Leather (skinning #70169/21887)", 9001996},
    {"Gathersanity: Knothide Leather Scraps (skinning #70169/25649)", 9001997},
    {"Gathersanity: Wind Scales (skinning #70169/29547)", 9001998},
    {"Gathersanity: Knothide Leather (skinning #70170/21887)", 9001999},
    {"Gathersanity: Wind Scales (skinning #70170/29547)", 9002000},
    {"Gathersanity: Knothide Leather (skinning #70171/21887)", 9002001},
    {"Gathersanity: Knothide Leather Scraps (skinning #70171/25649)", 9002002},
    {"Gathersanity: Nether Dragonscales (skinning #70171/29548)", 9002003},
    {"Gathersanity: Knothide Leather (skinning #70172/21887)", 9002004},
    {"Gathersanity: Knothide Leather Scraps (skinning #70172/25649)", 9002005},
    {"Gathersanity: Nether Dragonscales (skinning #70172/29548)", 9002006},
    {"Gathersanity: Borean Leather Scraps (skinning #70200/33567)", 9002007},
    {"Gathersanity: Borean Leather (skinning #70200/33568)", 9002008},
    {"Gathersanity: Arctic Fur (skinning #70200/44128)", 9002009},
    {"Gathersanity: Borean Leather Scraps (skinning #70201/33567)", 9002010},
    {"Gathersanity: Borean Leather (skinning #70201/33568)", 9002011},
    {"Gathersanity: Arctic Fur (skinning #70201/44128)", 9002012},
    {"Gathersanity: Borean Leather Scraps (skinning #70202/33567)", 9002013},
    {"Gathersanity: Borean Leather (skinning #70202/33568)", 9002014},
    {"Gathersanity: Arctic Fur (skinning #70202/44128)", 9002015},
    {"Gathersanity: Borean Leather (skinning #70203/33568)", 9002016},
    {"Gathersanity: Nerubian Chitin (skinning #70203/38558)", 9002017},
    {"Gathersanity: Arctic Fur (skinning #70203/44128)", 9002018},
    {"Gathersanity: Borean Leather Scraps (skinning #70204/33567)", 9002019},
    {"Gathersanity: Borean Leather (skinning #70204/33568)", 9002020},
    {"Gathersanity: Nerubian Chitin (skinning #70204/38558)", 9002021},
    {"Gathersanity: Arctic Fur (skinning #70204/44128)", 9002022},
    {"Gathersanity: Borean Leather (skinning #70205/33568)", 9002023},
    {"Gathersanity: Nerubian Chitin (skinning #70205/38558)", 9002024},
    {"Gathersanity: Arctic Fur (skinning #70205/44128)", 9002025},
    {"Gathersanity: Borean Leather Scraps (skinning #70206/33567)", 9002026},
    {"Gathersanity: Borean Leather (skinning #70206/33568)", 9002027},
    {"Gathersanity: Jormungar Scale (skinning #70206/38561)", 9002028},
    {"Gathersanity: Arctic Fur (skinning #70206/44128)", 9002029},
    {"Gathersanity: Borean Leather (skinning #70207/33568)", 9002030},
    {"Gathersanity: Jormungar Scale (skinning #70207/38561)", 9002031},
    {"Gathersanity: Arctic Fur (skinning #70207/44128)", 9002032},
    {"Gathersanity: Borean Leather Scraps (skinning #70208/33567)", 9002033},
    {"Gathersanity: Borean Leather (skinning #70208/33568)", 9002034},
    {"Gathersanity: Icy Dragonscale (skinning #70208/38557)", 9002035},
    {"Gathersanity: Arctic Fur (skinning #70208/44128)", 9002036},
    {"Gathersanity: Borean Leather (skinning #70209/33568)", 9002037},
    {"Gathersanity: Icy Dragonscale (skinning #70209/38557)", 9002038},
    {"Gathersanity: Arctic Fur (skinning #70209/44128)", 9002039},
    {"Gathersanity: Borean Leather (skinning #70210/33568)", 9002040},
    {"Gathersanity: Icy Dragonscale (skinning #70210/38557)", 9002041},
    {"Gathersanity: Arctic Fur (skinning #70210/44128)", 9002042},
    {"Gathersanity: Borean Leather (skinning #70211/33568)", 9002043},
    {"Gathersanity: Arctic Fur (skinning #70211/44128)", 9002044},
    {"Gathersanity: Borean Leather (skinning #70212/33568)", 9002045},
    {"Gathersanity: Arctic Fur (skinning #70212/44128)", 9002046},
    {"Gathersanity: Borean Leather (skinning #70213/33568)", 9002047},
    {"Gathersanity: Arctic Fur (skinning #70213/44128)", 9002048},
    {"Gathersanity: Borean Leather (skinning #70214/33568)", 9002049},
    {"Gathersanity: Arctic Fur (skinning #70214/44128)", 9002050},
    {"Gathersanity: Borean Leather (skinning #70215/33568)", 9002051},
    {"Gathersanity: Nerubian Chitin (skinning #70215/38558)", 9002052},
    {"Gathersanity: Arctic Fur (skinning #70215/44128)", 9002053},
    {"Gathersanity: Mote of Life (skinning #80000/22575)", 9002054},
    {"Gathersanity: Felweed (skinning #80000/22785)", 9002055},
    {"Gathersanity: Dreaming Glory (skinning #80000/22786)", 9002056},
    {"Gathersanity: Ragveil (skinning #80000/22787)", 9002057},
    {"Gathersanity: Terocone (skinning #80000/22789)", 9002058},
    {"Gathersanity: Ancient Lichen (skinning #80000/22790)", 9002059},
    {"Gathersanity: Fel Lotus (skinning #80000/22794)", 9002060},
    {"Gathersanity: Unidentified Plant Parts (skinning #80000/24401)", 9002061},
    {"Gathersanity: Small Mushroom (skinning #80000/25813)", 9002062},
    {"Gathersanity: Zangar Caps (skinning #80000/27859)", 9002063},
    {"Gathersanity: Mote of Life (skinning #80001/22575)", 9002064},
    {"Gathersanity: Felweed (skinning #80001/22785)", 9002065},
    {"Gathersanity: Dreaming Glory (skinning #80001/22786)", 9002066},
    {"Gathersanity: Ragveil (skinning #80001/22787)", 9002067},
    {"Gathersanity: Terocone (skinning #80001/22789)", 9002068},
    {"Gathersanity: Ancient Lichen (skinning #80001/22790)", 9002069},
    {"Gathersanity: Fel Lotus (skinning #80001/22794)", 9002070},
    {"Gathersanity: Unidentified Plant Parts (skinning #80001/24401)", 9002071},
    {"Gathersanity: Small Mushroom (skinning #80001/25813)", 9002072},
    {"Gathersanity: Sporeggar Mushroom (skinning #80001/29453)", 9002073},
    {"Gathersanity: Mote of Life (skinning #80002/22575)", 9002074},
    {"Gathersanity: Felweed (skinning #80002/22785)", 9002075},
    {"Gathersanity: Dreaming Glory (skinning #80002/22786)", 9002076},
    {"Gathersanity: Ragveil (skinning #80002/22787)", 9002077},
    {"Gathersanity: Terocone (skinning #80002/22789)", 9002078},
    {"Gathersanity: Ancient Lichen (skinning #80002/22790)", 9002079},
    {"Gathersanity: Mana Thistle (skinning #80002/22793)", 9002080},
    {"Gathersanity: Fel Lotus (skinning #80002/22794)", 9002081},
    {"Gathersanity: Honey-Spiced Lichen (skinning #80007/33452)", 9002082},
    {"Gathersanity: Goldclover (skinning #80007/36901)", 9002083},
    {"Gathersanity: Constrictor Grass (skinning #80007/36902)", 9002084},
    {"Gathersanity: Adder's Tongue (skinning #80007/36903)", 9002085},
    {"Gathersanity: Tiger Lily (skinning #80007/36904)", 9002086},
    {"Gathersanity: Lichbloom (skinning #80007/36905)", 9002087},
    {"Gathersanity: Icethorn (skinning #80007/36906)", 9002088},
    {"Gathersanity: Talandra's Rose (skinning #80007/36907)", 9002089},
    {"Gathersanity: Crystallized Life (skinning #80007/37704)", 9002090},
    {"Gathersanity: Frosty Mushroom (skinning #80007/39516)", 9002091},
    {"Gathersanity: Mote of Earth (skinning #80100/22573)", 9002092},
    {"Gathersanity: Crystalline Fragments (skinning #80100/24189)", 9002093},
    {"Gathersanity: Mote of Earth (skinning #80101/22573)", 9002094},
    {"Gathersanity: Crystalline Fragments (skinning #80101/24189)", 9002095},
    {"Gathersanity: Flame Spessarite (skinning #80102/21929)", 9002096},
    {"Gathersanity: Blood Garnet (skinning #80102/23077)", 9002097},
    {"Gathersanity: Deep Peridot (skinning #80102/23079)", 9002098},
    {"Gathersanity: Shadow Draenite (skinning #80102/23107)", 9002099},
    {"Gathersanity: Golden Draenite (skinning #80102/23112)", 9002100},
    {"Gathersanity: Azure Moonstone (skinning #80102/23117)", 9002101},
    {"Gathersanity: Adamantite Ore (skinning #80102/23425)", 9002102},
    {"Gathersanity: Living Ruby (skinning #80102/23436)", 9002103},
    {"Gathersanity: Talasite (skinning #80102/23437)", 9002104},
    {"Gathersanity: Star of Elune (skinning #80102/23438)", 9002105},
    {"Gathersanity: Noble Topaz (skinning #80102/23439)", 9002106},
    {"Gathersanity: Dawnstone (skinning #80102/23440)", 9002107},
    {"Gathersanity: Nightseye (skinning #80102/23441)", 9002108},
    {"Gathersanity: Crystallized Earth (skinning #80103/37701)", 9002109},
    {"Gathersanity: Geodesic Fragments (skinning #80103/39220)", 9002110},
    {"Gathersanity: Crystallized Earth (skinning #80104/37701)", 9002111},
    {"Gathersanity: Geodesic Fragments (skinning #80104/39220)", 9002112},
    {"Gathersanity: Mote of Water (skinning #80200/22578)", 9002113},
    {"Gathersanity: Mote of Shadow (skinning #80201/22577)", 9002114},
    {"Gathersanity: Mote of Mana (skinning #80202/22576)", 9002115},
    {"Gathersanity: Mote of Air (skinning #80203/22572)", 9002116},
    {"Gathersanity: Crystallized Fire (skinning #80204/37702)", 9002117},
    {"Gathersanity: Crystallized Fire (skinning #80205/37702)", 9002118},
    {"Gathersanity: Crystallized Water (skinning #80205/37705)", 9002119},
    {"Gathersanity: Crystallized Air (skinning #80206/37700)", 9002120},
    {"Gathersanity: Crystallized Water (skinning #80206/37705)", 9002121},
    {"Gathersanity: Light Hide (skinning #100001/783)", 9002122},
    {"Gathersanity: Ruined Leather Scraps (skinning #100001/2934)", 9002123},
    {"Gathersanity: Light Leather (skinning #100002/2318)", 9002124},
    {"Gathersanity: Ruined Leather Scraps (skinning #100002/2934)", 9002125},
    {"Gathersanity: Thick Leather (skinning #100003/4304)", 9002126},
    {"Gathersanity: Thick Hide (skinning #100003/8169)", 9002127},
    {"Gathersanity: Rugged Leather (skinning #100003/8170)", 9002128},
    {"Gathersanity: Rugged Hide (skinning #100003/8171)", 9002129},
    {"Gathersanity: Light Hide (skinning #100004/783)", 9002130},
    {"Gathersanity: Light Leather (skinning #100004/2318)", 9002131},
    {"Gathersanity: Medium Leather (skinning #100004/2319)", 9002132},
    {"Gathersanity: Medium Hide (skinning #100004/4232)", 9002133},
    {"Gathersanity: Light Hide (skinning #100005/783)", 9002134},
    {"Gathersanity: Light Leather (skinning #100005/2318)", 9002135},
    {"Gathersanity: Medium Leather (skinning #100005/2319)", 9002136},
    {"Gathersanity: Medium Hide (skinning #100005/4232)", 9002137},
    {"Gathersanity: Light Hide (skinning #100006/783)", 9002138},
    {"Gathersanity: Light Leather (skinning #100006/2318)", 9002139},
    {"Gathersanity: Medium Leather (skinning #100006/2319)", 9002140},
    {"Gathersanity: Medium Hide (skinning #100006/4232)", 9002141},
    {"Gathersanity: Light Hide (skinning #100007/783)", 9002142},
    {"Gathersanity: Light Leather (skinning #100007/2318)", 9002143},
    {"Gathersanity: Medium Leather (skinning #100007/2319)", 9002144},
    {"Gathersanity: Medium Hide (skinning #100007/4232)", 9002145},
    {"Gathersanity: Light Hide (skinning #100008/783)", 9002146},
    {"Gathersanity: Light Leather (skinning #100008/2318)", 9002147},
    {"Gathersanity: Medium Leather (skinning #100008/2319)", 9002148},
    {"Gathersanity: Medium Hide (skinning #100008/4232)", 9002149},
    {"Gathersanity: Red Whelp Scale (skinning #100008/7287)", 9002150},
    {"Gathersanity: Light Hide (skinning #100009/783)", 9002151},
    {"Gathersanity: Light Leather (skinning #100009/2318)", 9002152},
    {"Gathersanity: Medium Leather (skinning #100009/2319)", 9002153},
    {"Gathersanity: Medium Hide (skinning #100009/4232)", 9002154},
    {"Gathersanity: Deviate Scale (skinning #100009/6470)", 9002155},
    {"Gathersanity: Perfect Deviate Scale (skinning #100009/6471)", 9002156},
    {"Gathersanity: Medium Leather (skinning #100010/2319)", 9002157},
    {"Gathersanity: Medium Hide (skinning #100010/4232)", 9002158},
    {"Gathersanity: Heavy Leather (skinning #100010/4234)", 9002159},
    {"Gathersanity: Heavy Hide (skinning #100010/4235)", 9002160},
    {"Gathersanity: Medium Leather (skinning #100011/2319)", 9002161},
    {"Gathersanity: Medium Hide (skinning #100011/4232)", 9002162},
    {"Gathersanity: Heavy Leather (skinning #100011/4234)", 9002163},
    {"Gathersanity: Heavy Hide (skinning #100011/4235)", 9002164},
    {"Gathersanity: Medium Leather (skinning #100012/2319)", 9002165},
    {"Gathersanity: Medium Hide (skinning #100012/4232)", 9002166},
    {"Gathersanity: Heavy Leather (skinning #100012/4234)", 9002167},
    {"Gathersanity: Heavy Hide (skinning #100012/4235)", 9002168},
    {"Gathersanity: Heavy Leather (skinning #100013/4234)", 9002169},
    {"Gathersanity: Heavy Hide (skinning #100013/4235)", 9002170},
    {"Gathersanity: Thick Leather (skinning #100013/4304)", 9002171},
    {"Gathersanity: Heavy Leather (skinning #100014/4234)", 9002172},
    {"Gathersanity: Heavy Hide (skinning #100014/4235)", 9002173},
    {"Gathersanity: Thick Leather (skinning #100014/4304)", 9002174},
    {"Gathersanity: Thick Hide (skinning #100014/8169)", 9002175},
    {"Gathersanity: Light Hide (skinning #100015/783)", 9002176},
    {"Gathersanity: Light Leather (skinning #100015/2318)", 9002177},
    {"Gathersanity: Ruined Leather Scraps (skinning #100015/2934)", 9002178},
    {"Gathersanity: Lesser Magic Essence (disenchant bracket #1)", 9002179},
    {"Gathersanity: Strange Dust (disenchant bracket #1)", 9002180},
    {"Gathersanity: Greater Magic Essence (disenchant bracket #2)", 9002181},
    {"Gathersanity: Strange Dust (disenchant bracket #2)", 9002182},
    {"Gathersanity: Small Glimmering Shard (disenchant bracket #2)", 9002183},
    {"Gathersanity: Strange Dust (disenchant bracket #3)", 9002184},
    {"Gathersanity: Small Glimmering Shard (disenchant bracket #3)", 9002185},
    {"Gathersanity: Lesser Astral Essence (disenchant bracket #3)", 9002186},
    {"Gathersanity: Greater Astral Essence (disenchant bracket #4)", 9002187},
    {"Gathersanity: Soul Dust (disenchant bracket #4)", 9002188},
    {"Gathersanity: Large Glimmering Shard (disenchant bracket #4)", 9002189},
    {"Gathersanity: Soul Dust (disenchant bracket #5)", 9002190},
    {"Gathersanity: Lesser Mystic Essence (disenchant bracket #5)", 9002191},
    {"Gathersanity: Small Glowing Shard (disenchant bracket #5)", 9002192},
    {"Gathersanity: Greater Mystic Essence (disenchant bracket #6)", 9002193},
    {"Gathersanity: Vision Dust (disenchant bracket #6)", 9002194},
    {"Gathersanity: Large Glowing Shard (disenchant bracket #6)", 9002195},
    {"Gathersanity: Vision Dust (disenchant bracket #7)", 9002196},
    {"Gathersanity: Lesser Nether Essence (disenchant bracket #7)", 9002197},
    {"Gathersanity: Small Radiant Shard (disenchant bracket #7)", 9002198},
    {"Gathersanity: Greater Nether Essence (disenchant bracket #8)", 9002199},
    {"Gathersanity: Dream Dust (disenchant bracket #8)", 9002200},
    {"Gathersanity: Large Radiant Shard (disenchant bracket #8)", 9002201},
    {"Gathersanity: Dream Dust (disenchant bracket #9)", 9002202},
    {"Gathersanity: Small Brilliant Shard (disenchant bracket #9)", 9002203},
    {"Gathersanity: Lesser Eternal Essence (disenchant bracket #9)", 9002204},
    {"Gathersanity: Large Brilliant Shard (disenchant bracket #10)", 9002205},
    {"Gathersanity: Greater Eternal Essence (disenchant bracket #10)", 9002206},
    {"Gathersanity: Illusion Dust (disenchant bracket #10)", 9002207},
    {"Gathersanity: Large Brilliant Shard (disenchant bracket #11)", 9002208},
    {"Gathersanity: Greater Eternal Essence (disenchant bracket #11)", 9002209},
    {"Gathersanity: Illusion Dust (disenchant bracket #11)", 9002210},
    {"Gathersanity: Arcane Dust (disenchant bracket #12)", 9002211},
    {"Gathersanity: Lesser Planar Essence (disenchant bracket #12)", 9002212},
    {"Gathersanity: Small Prismatic Shard (disenchant bracket #12)", 9002213},
    {"Gathersanity: Arcane Dust (disenchant bracket #13)", 9002214},
    {"Gathersanity: Lesser Planar Essence (disenchant bracket #13)", 9002215},
    {"Gathersanity: Small Prismatic Shard (disenchant bracket #13)", 9002216},
    {"Gathersanity: Arcane Dust (disenchant bracket #14)", 9002217},
    {"Gathersanity: Greater Planar Essence (disenchant bracket #14)", 9002218},
    {"Gathersanity: Large Prismatic Shard (disenchant bracket #14)", 9002219},
    {"Gathersanity: Small Dream Shard (disenchant bracket #15)", 9002220},
    {"Gathersanity: Infinite Dust (disenchant bracket #15)", 9002221},
    {"Gathersanity: Lesser Cosmic Essence (disenchant bracket #15)", 9002222},
    {"Gathersanity: Dream Shard (disenchant bracket #16)", 9002223},
    {"Gathersanity: Infinite Dust (disenchant bracket #16)", 9002224},
    {"Gathersanity: Greater Cosmic Essence (disenchant bracket #16)", 9002225},
    {"Gathersanity: Large Glowing Shard (disenchant bracket #17)", 9002226},
    {"Gathersanity: Large Brilliant Shard (disenchant bracket #18)", 9002227},
    {"Gathersanity: Lesser Magic Essence (disenchant bracket #21)", 9002228},
    {"Gathersanity: Strange Dust (disenchant bracket #21)", 9002229},
    {"Gathersanity: Greater Magic Essence (disenchant bracket #22)", 9002230},
    {"Gathersanity: Strange Dust (disenchant bracket #22)", 9002231},
    {"Gathersanity: Small Glimmering Shard (disenchant bracket #22)", 9002232},
    {"Gathersanity: Strange Dust (disenchant bracket #23)", 9002233},
    {"Gathersanity: Small Glimmering Shard (disenchant bracket #23)", 9002234},
    {"Gathersanity: Lesser Astral Essence (disenchant bracket #23)", 9002235},
    {"Gathersanity: Greater Astral Essence (disenchant bracket #24)", 9002236},
    {"Gathersanity: Soul Dust (disenchant bracket #24)", 9002237},
    {"Gathersanity: Large Glimmering Shard (disenchant bracket #24)", 9002238},
    {"Gathersanity: Soul Dust (disenchant bracket #25)", 9002239},
    {"Gathersanity: Lesser Mystic Essence (disenchant bracket #25)", 9002240},
    {"Gathersanity: Small Glowing Shard (disenchant bracket #25)", 9002241},
    {"Gathersanity: Greater Mystic Essence (disenchant bracket #26)", 9002242},
    {"Gathersanity: Vision Dust (disenchant bracket #26)", 9002243},
    {"Gathersanity: Large Glowing Shard (disenchant bracket #26)", 9002244},
    {"Gathersanity: Vision Dust (disenchant bracket #27)", 9002245},
    {"Gathersanity: Lesser Nether Essence (disenchant bracket #27)", 9002246},
    {"Gathersanity: Small Radiant Shard (disenchant bracket #27)", 9002247},
    {"Gathersanity: Greater Nether Essence (disenchant bracket #28)", 9002248},
    {"Gathersanity: Dream Dust (disenchant bracket #28)", 9002249},
    {"Gathersanity: Large Radiant Shard (disenchant bracket #28)", 9002250},
    {"Gathersanity: Dream Dust (disenchant bracket #29)", 9002251},
    {"Gathersanity: Small Brilliant Shard (disenchant bracket #29)", 9002252},
    {"Gathersanity: Lesser Eternal Essence (disenchant bracket #29)", 9002253},
    {"Gathersanity: Large Brilliant Shard (disenchant bracket #30)", 9002254},
    {"Gathersanity: Greater Eternal Essence (disenchant bracket #30)", 9002255},
    {"Gathersanity: Illusion Dust (disenchant bracket #30)", 9002256},
    {"Gathersanity: Large Brilliant Shard (disenchant bracket #31)", 9002257},
    {"Gathersanity: Greater Eternal Essence (disenchant bracket #31)", 9002258},
    {"Gathersanity: Illusion Dust (disenchant bracket #31)", 9002259},
    {"Gathersanity: Arcane Dust (disenchant bracket #32)", 9002260},
    {"Gathersanity: Lesser Planar Essence (disenchant bracket #32)", 9002261},
    {"Gathersanity: Small Prismatic Shard (disenchant bracket #32)", 9002262},
    {"Gathersanity: Arcane Dust (disenchant bracket #33)", 9002263},
    {"Gathersanity: Greater Planar Essence (disenchant bracket #33)", 9002264},
    {"Gathersanity: Large Prismatic Shard (disenchant bracket #33)", 9002265},
    {"Gathersanity: Small Dream Shard (disenchant bracket #34)", 9002266},
    {"Gathersanity: Infinite Dust (disenchant bracket #34)", 9002267},
    {"Gathersanity: Lesser Cosmic Essence (disenchant bracket #34)", 9002268},
    {"Gathersanity: Dream Shard (disenchant bracket #35)", 9002269},
    {"Gathersanity: Infinite Dust (disenchant bracket #35)", 9002270},
    {"Gathersanity: Greater Cosmic Essence (disenchant bracket #35)", 9002271},
    {"Gathersanity: Small Glimmering Shard (disenchant bracket #41)", 9002272},
    {"Gathersanity: Large Glimmering Shard (disenchant bracket #42)", 9002273},
    {"Gathersanity: Small Glowing Shard (disenchant bracket #43)", 9002274},
    {"Gathersanity: Large Glowing Shard (disenchant bracket #44)", 9002275},
    {"Gathersanity: Small Radiant Shard (disenchant bracket #45)", 9002276},
    {"Gathersanity: Large Radiant Shard (disenchant bracket #46)", 9002277},
    {"Gathersanity: Small Brilliant Shard (disenchant bracket #47)", 9002278},
    {"Gathersanity: Large Brilliant Shard (disenchant bracket #48)", 9002279},
    {"Gathersanity: Nexus Crystal (disenchant bracket #48)", 9002280},
    {"Gathersanity: Large Brilliant Shard (disenchant bracket #49)", 9002281},
    {"Gathersanity: Nexus Crystal (disenchant bracket #49)", 9002282},
    {"Gathersanity: Nexus Crystal (disenchant bracket #50)", 9002283},
    {"Gathersanity: Small Prismatic Shard (disenchant bracket #50)", 9002284},
    {"Gathersanity: Nexus Crystal (disenchant bracket #51)", 9002285},
    {"Gathersanity: Small Prismatic Shard (disenchant bracket #51)", 9002286},
    {"Gathersanity: Large Prismatic Shard (disenchant bracket #52)", 9002287},
    {"Gathersanity: Void Crystal (disenchant bracket #52)", 9002288},
    {"Gathersanity: Small Dream Shard (disenchant bracket #53)", 9002289},
    {"Gathersanity: Abyss Crystal (disenchant bracket #53)", 9002290},
    {"Gathersanity: Dream Shard (disenchant bracket #54)", 9002291},
    {"Gathersanity: Abyss Crystal (disenchant bracket #54)", 9002292},
    {"Gathersanity: Small Radiant Shard (disenchant bracket #61)", 9002293},
    {"Gathersanity: Large Radiant Shard (disenchant bracket #62)", 9002294},
    {"Gathersanity: Small Brilliant Shard (disenchant bracket #63)", 9002295},
    {"Gathersanity: Nexus Crystal (disenchant bracket #64)", 9002296},
    {"Gathersanity: Nexus Crystal (disenchant bracket #65)", 9002297},
    {"Gathersanity: Void Crystal (disenchant bracket #66)", 9002298},
    {"Gathersanity: Void Crystal (disenchant bracket #67)", 9002299},
    {"Gathersanity: Abyss Crystal (disenchant bracket #68)", 9002300},
    {"Gathersanity: Abyss Crystal (disenchant bracket #69)", 9002301},
};
inline std::map<std::string, uint32_t> BuildLOCATIONS()
{
    std::map<std::string, uint32_t> result;
    for (auto const& row : LOCATIONS_RAW)
        result.emplace(row.first, row.second);
    return result;
}
inline const std::map<std::string, uint32_t> LOCATIONS = BuildLOCATIONS();
inline constexpr std::pair<char const*, uint32_t> ITEMS_RAW[] = {
    {"Gathersanity Item: Incendicite Mineral Vein - Incendicite Ore (#1409/3340)", 9500000},
    {"Gathersanity Item: Silverleaf - Silverleaf (#1414/765)", 9500001},
    {"Gathersanity Item: Peacebloom - Peacebloom (#1415/2447)", 9500002},
    {"Gathersanity Item: Earthroot - Earthroot (#1416/2449)", 9500003},
    {"Gathersanity Item: Mageroyal - Mageroyal (#1417/785)", 9500004},
    {"Gathersanity Item: Mageroyal - Swiftthistle (#1417/2452)", 9500005},
    {"Gathersanity Item: Briarthorn - Briarthorn (#1418/2450)", 9500006},
    {"Gathersanity Item: Briarthorn - Swiftthistle (#1418/2452)", 9500007},
    {"Gathersanity Item: Bruiseweed - Bruiseweed (#1419/2453)", 9500008},
    {"Gathersanity Item: Wild Steelbloom - Wild Steelbloom (#1420/3355)", 9500009},
    {"Gathersanity Item: Kingsblood - Kingsblood (#1421/3356)", 9500010},
    {"Gathersanity Item: Khadgar's Whisker - Khadgar's Whisker (#1423/3358)", 9500011},
    {"Gathersanity Item: Grave Moss - Grave Moss (#1424/3369)", 9500012},
    {"Gathersanity Item: Copper Vein - Malachite (#1502/774)", 9500013},
    {"Gathersanity Item: Copper Vein - Tigerseye (#1502/818)", 9500014},
    {"Gathersanity Item: Copper Vein - Shadowgem (#1502/1210)", 9500015},
    {"Gathersanity Item: Copper Vein - Copper Ore (#1502/2770)", 9500016},
    {"Gathersanity Item: Copper Vein - Rough Stone (#1502/2835)", 9500017},
    {"Gathersanity Item: Tin Vein - Moss Agate (#1503/1206)", 9500018},
    {"Gathersanity Item: Tin Vein - Shadowgem (#1503/1210)", 9500019},
    {"Gathersanity Item: Tin Vein - Jade (#1503/1529)", 9500020},
    {"Gathersanity Item: Tin Vein - Lesser Moonstone (#1503/1705)", 9500021},
    {"Gathersanity Item: Tin Vein - Tin Ore (#1503/2771)", 9500022},
    {"Gathersanity Item: Tin Vein - Coarse Stone (#1503/2836)", 9500023},
    {"Gathersanity Item: Ooze Covered Silver Vein - Moss Agate (#1504/1206)", 9500024},
    {"Gathersanity Item: Ooze Covered Silver Vein - Shadowgem (#1504/1210)", 9500025},
    {"Gathersanity Item: Ooze Covered Silver Vein - Lesser Moonstone (#1504/1705)", 9500026},
    {"Gathersanity Item: Ooze Covered Silver Vein - Silver Ore (#1504/2775)", 9500027},
    {"Gathersanity Item: Iron Deposit - Jade (#1505/1529)", 9500028},
    {"Gathersanity Item: Iron Deposit - Lesser Moonstone (#1505/1705)", 9500029},
    {"Gathersanity Item: Iron Deposit - Iron Ore (#1505/2772)", 9500030},
    {"Gathersanity Item: Iron Deposit - Heavy Stone (#1505/2838)", 9500031},
    {"Gathersanity Item: Iron Deposit - Citrine (#1505/3864)", 9500032},
    {"Gathersanity Item: Iron Deposit - Aquamarine (#1505/7909)", 9500033},
    {"Gathersanity Item: Gold Vein - Lesser Moonstone (#1506/1705)", 9500034},
    {"Gathersanity Item: Gold Vein - Gold Ore (#1506/2776)", 9500035},
    {"Gathersanity Item: Gold Vein - Citrine (#1506/3864)", 9500036},
    {"Gathersanity Item: Gold Vein - Aquamarine (#1506/7909)", 9500037},
    {"Gathersanity Item: Liferoot - Liferoot (#1730/3357)", 9500038},
    {"Gathersanity Item: Fadeleaf - Fadeleaf (#1731/3818)", 9500039},
    {"Gathersanity Item: Wintersbite - Wintersbite (#1732/3819)", 9500040},
    {"Gathersanity Item: Stranglekelp - Stranglekelp (#1733/3820)", 9500041},
    {"Gathersanity Item: Goldthorn - Goldthorn (#1734/3821)", 9500042},
    {"Gathersanity Item: Copper Vein - Malachite (#1735/774)", 9500043},
    {"Gathersanity Item: Copper Vein - Tigerseye (#1735/818)", 9500044},
    {"Gathersanity Item: Copper Vein - Shadowgem (#1735/1210)", 9500045},
    {"Gathersanity Item: Copper Vein - Copper Ore (#1735/2770)", 9500046},
    {"Gathersanity Item: Copper Vein - Rough Stone (#1735/2835)", 9500047},
    {"Gathersanity Item: Tin Vein - Moss Agate (#1736/1206)", 9500048},
    {"Gathersanity Item: Tin Vein - Shadowgem (#1736/1210)", 9500049},
    {"Gathersanity Item: Tin Vein - Jade (#1736/1529)", 9500050},
    {"Gathersanity Item: Tin Vein - Lesser Moonstone (#1736/1705)", 9500051},
    {"Gathersanity Item: Tin Vein - Tin Ore (#1736/2771)", 9500052},
    {"Gathersanity Item: Tin Vein - Coarse Stone (#1736/2836)", 9500053},
    {"Gathersanity Item: Mithril Deposit - Mithril Ore (#1742/3858)", 9500054},
    {"Gathersanity Item: Mithril Deposit - Citrine (#1742/3864)", 9500055},
    {"Gathersanity Item: Mithril Deposit - Aquamarine (#1742/7909)", 9500056},
    {"Gathersanity Item: Mithril Deposit - Star Ruby (#1742/7910)", 9500057},
    {"Gathersanity Item: Mithril Deposit - Solid Stone (#1742/7912)", 9500058},
    {"Gathersanity Item: Mithril Deposit - Black Vitriol (#1742/9262)", 9500059},
    {"Gathersanity Item: Lesser Bloodstone Deposit - Lesser Bloodstone Ore (#2039/4278)", 9500060},
    {"Gathersanity Item: Firebloom - Firebloom (#2292/4625)", 9500061},
    {"Gathersanity Item: Silverleaf - Silverleaf (#2511/765)", 9500062},
    {"Gathersanity Item: Peacebloom - Peacebloom (#2512/2447)", 9500063},
    {"Gathersanity Item: Earthroot - Earthroot (#2513/2449)", 9500064},
    {"Gathersanity Item: Mageroyal - Mageroyal (#2514/785)", 9500065},
    {"Gathersanity Item: Mageroyal - Swiftthistle (#2514/2452)", 9500066},
    {"Gathersanity Item: Briarthorn - Briarthorn (#2515/2450)", 9500067},
    {"Gathersanity Item: Briarthorn - Swiftthistle (#2515/2452)", 9500068},
    {"Gathersanity Item: Bruiseweed - Bruiseweed (#2516/2453)", 9500069},
    {"Gathersanity Item: Copper Vein - Malachite (#2626/774)", 9500070},
    {"Gathersanity Item: Copper Vein - Tigerseye (#2626/818)", 9500071},
    {"Gathersanity Item: Copper Vein - Shadowgem (#2626/1210)", 9500072},
    {"Gathersanity Item: Copper Vein - Copper Ore (#2626/2770)", 9500073},
    {"Gathersanity Item: Copper Vein - Rough Stone (#2626/2835)", 9500074},
    {"Gathersanity Item: Copper Vein - Blood Shard (#2626/5075)", 9500075},
    {"Gathersanity Item: Tin Vein - Moss Agate (#2627/1206)", 9500076},
    {"Gathersanity Item: Tin Vein - Shadowgem (#2627/1210)", 9500077},
    {"Gathersanity Item: Tin Vein - Jade (#2627/1529)", 9500078},
    {"Gathersanity Item: Tin Vein - Lesser Moonstone (#2627/1705)", 9500079},
    {"Gathersanity Item: Tin Vein - Tin Ore (#2627/2771)", 9500080},
    {"Gathersanity Item: Tin Vein - Coarse Stone (#2627/2836)", 9500081},
    {"Gathersanity Item: Tin Vein - Blood Shard (#2627/5075)", 9500082},
    {"Gathersanity Item: Indurium Mineral Vein - Indurium Ore (#3266/5833)", 9500083},
    {"Gathersanity Item: Ooze Covered Truesilver Deposit - Citrine (#5045/3864)", 9500084},
    {"Gathersanity Item: Ooze Covered Truesilver Deposit - Aquamarine (#5045/7909)", 9500085},
    {"Gathersanity Item: Ooze Covered Truesilver Deposit - Star Ruby (#5045/7910)", 9500086},
    {"Gathersanity Item: Ooze Covered Truesilver Deposit - Truesilver Ore (#5045/7911)", 9500087},
    {"Gathersanity Item: Purple Lotus - Wildvine (#6142/8153)", 9500088},
    {"Gathersanity Item: Purple Lotus - Purple Lotus (#6142/8831)", 9500089},
    {"Gathersanity Item: Arthas' Tears - Arthas' Tears (#6150/8836)", 9500090},
    {"Gathersanity Item: Sungrass - Sungrass (#6151/8838)", 9500091},
    {"Gathersanity Item: Blindweed - Blindweed (#6152/8839)", 9500092},
    {"Gathersanity Item: Ghost Mushroom - Ghost Mushroom (#6312/8845)", 9500093},
    {"Gathersanity Item: Gromsblood - Gromsblood (#6313/8846)", 9500094},
    {"Gathersanity Item: Ooze Covered Thorium Vein - Thorium Ore (#9597/10620)", 9500095},
    {"Gathersanity Item: Ooze Covered Thorium Vein - Dense Stone (#9597/12365)", 9500096},
    {"Gathersanity Item: Dark Iron Deposit - Black Vitriol (#11213/9262)", 9500097},
    {"Gathersanity Item: Dark Iron Deposit - Dark Iron Ore (#11213/11370)", 9500098},
    {"Gathersanity Item: Dark Iron Deposit - Blood of the Mountain (#11213/11382)", 9500099},
    {"Gathersanity Item: Dark Iron Deposit - Black Diamond (#11213/11754)", 9500100},
    {"Gathersanity Item: Ooze Covered Rich Thorium Vein - Thorium Ore (#12883/10620)", 9500101},
    {"Gathersanity Item: Ooze Covered Rich Thorium Vein - Dense Stone (#12883/12365)", 9500102},
    {"Gathersanity Item: Golden Sansam - Golden Sansam (#13945/13464)", 9500103},
    {"Gathersanity Item: Dreamfoil - Dreamfoil (#13946/13463)", 9500104},
    {"Gathersanity Item: Mountain Silversage - Mountain Silversage (#13947/13465)", 9500105},
    {"Gathersanity Item: Icecap - Icecap (#13949/13467)", 9500106},
    {"Gathersanity Item: Black Lotus - Black Lotus (#13950/13468)", 9500107},
    {"Gathersanity Item: Small Thorium Vein - Thorium Ore (#13960/10620)", 9500108},
    {"Gathersanity Item: Small Thorium Vein - Tainted Vitriol (#13960/11513)", 9500109},
    {"Gathersanity Item: Small Thorium Vein - Dense Stone (#13960/12365)", 9500110},
    {"Gathersanity Item: Mithril Deposit - Mithril Ore (#13961/3858)", 9500111},
    {"Gathersanity Item: Mithril Deposit - Citrine (#13961/3864)", 9500112},
    {"Gathersanity Item: Mithril Deposit - Aquamarine (#13961/7909)", 9500113},
    {"Gathersanity Item: Mithril Deposit - Star Ruby (#13961/7910)", 9500114},
    {"Gathersanity Item: Mithril Deposit - Solid Stone (#13961/7912)", 9500115},
    {"Gathersanity Item: Mithril Deposit - Black Vitriol (#13961/9262)", 9500116},
    {"Gathersanity Item: Mithril Deposit - Tainted Vitriol (#13961/11513)", 9500117},
    {"Gathersanity Item: Sungrass - Sungrass (#13965/8838)", 9500118},
    {"Gathersanity Item: Sungrass - Fel Creep (#13965/11514)", 9500119},
    {"Gathersanity Item: Gromsblood - Gromsblood (#13966/8846)", 9500120},
    {"Gathersanity Item: Gromsblood - Fel Creep (#13966/11514)", 9500121},
    {"Gathersanity Item: Golden Sansam - Fel Creep (#13967/11514)", 9500122},
    {"Gathersanity Item: Golden Sansam - Golden Sansam (#13967/13464)", 9500123},
    {"Gathersanity Item: Dreamfoil - Fel Creep (#13968/11514)", 9500124},
    {"Gathersanity Item: Dreamfoil - Dreamfoil (#13968/13463)", 9500125},
    {"Gathersanity Item: Mountain Silversage - Fel Creep (#13969/11514)", 9500126},
    {"Gathersanity Item: Mountain Silversage - Mountain Silversage (#13969/13465)", 9500127},
    {"Gathersanity Item: Arthas' Tears - Arthas' Tears (#13970/8836)", 9500128},
    {"Gathersanity Item: Arthas' Tears - Fel Creep (#13970/11514)", 9500129},
    {"Gathersanity Item: Purple Lotus - Wildvine (#17200/8153)", 9500130},
    {"Gathersanity Item: Purple Lotus - Purple Lotus (#17200/8831)", 9500131},
    {"Gathersanity Item: Purple Lotus - Bloodvine (#17200/19726)", 9500132},
    {"Gathersanity Item: Sungrass - Sungrass (#17201/8838)", 9500133},
    {"Gathersanity Item: Sungrass - Bloodvine (#17201/19726)", 9500134},
    {"Gathersanity Item: Golden Sansam - Golden Sansam (#17202/13464)", 9500135},
    {"Gathersanity Item: Golden Sansam - Bloodvine (#17202/19726)", 9500136},
    {"Gathersanity Item: Dreamfoil - Dreamfoil (#17203/13463)", 9500137},
    {"Gathersanity Item: Dreamfoil - Bloodvine (#17203/19726)", 9500138},
    {"Gathersanity Item: Mountain Silversage - Mountain Silversage (#17204/13465)", 9500139},
    {"Gathersanity Item: Mountain Silversage - Bloodvine (#17204/19726)", 9500140},
    {"Gathersanity Item: Hakkari Thorium Vein - Thorium Ore (#17241/10620)", 9500141},
    {"Gathersanity Item: Hakkari Thorium Vein - Dense Stone (#17241/12365)", 9500142},
    {"Gathersanity Item: Hakkari Thorium Vein - Souldarite (#17241/19774)", 9500143},
    {"Gathersanity Item: Truesilver Deposit - Citrine (#17938/3864)", 9500144},
    {"Gathersanity Item: Truesilver Deposit - Aquamarine (#17938/7909)", 9500145},
    {"Gathersanity Item: Truesilver Deposit - Star Ruby (#17938/7910)", 9500146},
    {"Gathersanity Item: Truesilver Deposit - Truesilver Ore (#17938/7911)", 9500147},
    {"Gathersanity Item: Truesilver Deposit - Tainted Vitriol (#17938/11513)", 9500148},
    {"Gathersanity Item: Gold Vein - Lesser Moonstone (#17939/1705)", 9500149},
    {"Gathersanity Item: Gold Vein - Gold Ore (#17939/2776)", 9500150},
    {"Gathersanity Item: Gold Vein - Citrine (#17939/3864)", 9500151},
    {"Gathersanity Item: Gold Vein - Aquamarine (#17939/7909)", 9500152},
    {"Gathersanity Item: Copper Vein - Malachite (#18092/774)", 9500153},
    {"Gathersanity Item: Copper Vein - Tigerseye (#18092/818)", 9500154},
    {"Gathersanity Item: Copper Vein - Shadowgem (#18092/1210)", 9500155},
    {"Gathersanity Item: Copper Vein - Copper Ore (#18092/2770)", 9500156},
    {"Gathersanity Item: Copper Vein - Rough Stone (#18092/2835)", 9500157},
    {"Gathersanity Item: Tin Vein - Moss Agate (#18093/1206)", 9500158},
    {"Gathersanity Item: Tin Vein - Shadowgem (#18093/1210)", 9500159},
    {"Gathersanity Item: Tin Vein - Jade (#18093/1529)", 9500160},
    {"Gathersanity Item: Tin Vein - Lesser Moonstone (#18093/1705)", 9500161},
    {"Gathersanity Item: Tin Vein - Tin Ore (#18093/2771)", 9500162},
    {"Gathersanity Item: Tin Vein - Coarse Stone (#18093/2836)", 9500163},
    {"Gathersanity Item: Felweed - Mote of Life (#18111/22575)", 9500164},
    {"Gathersanity Item: Felweed - Felweed (#18111/22785)", 9500165},
    {"Gathersanity Item: Felweed - Fel Lotus (#18111/22794)", 9500166},
    {"Gathersanity Item: Felweed - Fel Blossom (#18111/22795)", 9500167},
    {"Gathersanity Item: Dreaming Glory - Mote of Life (#18112/22575)", 9500168},
    {"Gathersanity Item: Dreaming Glory - Dreaming Glory (#18112/22786)", 9500169},
    {"Gathersanity Item: Dreaming Glory - Fel Lotus (#18112/22794)", 9500170},
    {"Gathersanity Item: Ragveil - Mote of Life (#18113/22575)", 9500171},
    {"Gathersanity Item: Ragveil - Ragveil (#18113/22787)", 9500172},
    {"Gathersanity Item: Ragveil - Fel Lotus (#18113/22794)", 9500173},
    {"Gathersanity Item: Flame Cap - Flame Cap (#18114/22788)", 9500174},
    {"Gathersanity Item: Flame Cap - Fel Lotus (#18114/22794)", 9500175},
    {"Gathersanity Item: Terocone - Mote of Life (#18115/22575)", 9500176},
    {"Gathersanity Item: Terocone - Terocone (#18115/22789)", 9500177},
    {"Gathersanity Item: Terocone - Fel Lotus (#18115/22794)", 9500178},
    {"Gathersanity Item: Ancient Lichen - Ancient Lichen (#18116/22790)", 9500179},
    {"Gathersanity Item: Ancient Lichen - Fel Lotus (#18116/22794)", 9500180},
    {"Gathersanity Item: Netherbloom - Mote of Mana (#18117/22576)", 9500181},
    {"Gathersanity Item: Netherbloom - Netherbloom (#18117/22791)", 9500182},
    {"Gathersanity Item: Netherbloom - Fel Lotus (#18117/22794)", 9500183},
    {"Gathersanity Item: Nightmare Vine - Mote of Life (#18118/22575)", 9500184},
    {"Gathersanity Item: Nightmare Vine - Nightmare Vine (#18118/22792)", 9500185},
    {"Gathersanity Item: Nightmare Vine - Fel Lotus (#18118/22794)", 9500186},
    {"Gathersanity Item: Mana Thistle - Mote of Life (#18119/22575)", 9500187},
    {"Gathersanity Item: Mana Thistle - Mana Thistle (#18119/22793)", 9500188},
    {"Gathersanity Item: Mana Thistle - Fel Lotus (#18119/22794)", 9500189},
    {"Gathersanity Item: Fel Iron Deposit - Mote of Earth (#18359/22573)", 9500190},
    {"Gathersanity Item: Fel Iron Deposit - Mote of Fire (#18359/22574)", 9500191},
    {"Gathersanity Item: Fel Iron Deposit - Fel Iron Ore (#18359/23424)", 9500192},
    {"Gathersanity Item: Fel Iron Deposit - Eternium Ore (#18359/23427)", 9500193},
    {"Gathersanity Item: Adamantite Deposit - Mote of Earth (#18361/22573)", 9500194},
    {"Gathersanity Item: Adamantite Deposit - Adamantite Ore (#18361/23425)", 9500195},
    {"Gathersanity Item: Adamantite Deposit - Eternium Ore (#18361/23427)", 9500196},
    {"Gathersanity Item: Khorium Vein - Mote of Earth (#18363/22573)", 9500197},
    {"Gathersanity Item: Khorium Vein - Mote of Fire (#18363/22574)", 9500198},
    {"Gathersanity Item: Khorium Vein - Khorium Ore (#18363/23426)", 9500199},
    {"Gathersanity Item: Khorium Vein - Eternium Ore (#18363/23427)", 9500200},
    {"Gathersanity Item: Ragveil - Mote of Life (#19627/22575)", 9500201},
    {"Gathersanity Item: Ragveil - Ragveil (#19627/22787)", 9500202},
    {"Gathersanity Item: Ragveil - Fel Lotus (#19627/22794)", 9500203},
    {"Gathersanity Item: Ragveil - Unidentified Plant Parts (#19627/24401)", 9500204},
    {"Gathersanity Item: Felweed - Mote of Life (#19628/22575)", 9500205},
    {"Gathersanity Item: Felweed - Felweed (#19628/22785)", 9500206},
    {"Gathersanity Item: Felweed - Fel Lotus (#19628/22794)", 9500207},
    {"Gathersanity Item: Felweed - Unidentified Plant Parts (#19628/24401)", 9500208},
    {"Gathersanity Item: Dreaming Glory - Mote of Life (#19629/22575)", 9500209},
    {"Gathersanity Item: Dreaming Glory - Dreaming Glory (#19629/22786)", 9500210},
    {"Gathersanity Item: Dreaming Glory - Fel Lotus (#19629/22794)", 9500211},
    {"Gathersanity Item: Dreaming Glory - Unidentified Plant Parts (#19629/24401)", 9500212},
    {"Gathersanity Item: Blindweed - Blindweed (#19630/8839)", 9500213},
    {"Gathersanity Item: Blindweed - Unidentified Plant Parts (#19630/24401)", 9500214},
    {"Gathersanity Item: Sanguine Hibiscus - Sanguine Hibiscus (#19848/24246)", 9500215},
    {"Gathersanity Item: Nethercite Deposit - Mote of Earth (#22070/22573)", 9500216},
    {"Gathersanity Item: Nethercite Deposit - Mote of Fire (#22070/22574)", 9500217},
    {"Gathersanity Item: Nethercite Deposit - Nethercite Ore (#22070/32464)", 9500218},
    {"Gathersanity Item: Nethercite Deposit - Netherwing Egg (#22070/32506)", 9500219},
    {"Gathersanity Item: Netherdust Bush - Mote of Mana (#22071/22576)", 9500220},
    {"Gathersanity Item: Netherdust Bush - Fel Lotus (#22071/22794)", 9500221},
    {"Gathersanity Item: Netherdust Bush - Netherdust Pollen (#22071/32468)", 9500222},
    {"Gathersanity Item: Netherdust Bush - Netherwing Egg (#22071/32506)", 9500223},
    {"Gathersanity Item: Goldclover - Goldclover (#24093/36901)", 9500224},
    {"Gathersanity Item: Goldclover - Frost Lotus (#24093/36908)", 9500225},
    {"Gathersanity Item: Goldclover - Crystallized Life (#24093/37704)", 9500226},
    {"Gathersanity Item: Goldclover - Deadnettle (#24093/37921)", 9500227},
    {"Gathersanity Item: Cobalt Deposit - Cobalt Ore (#24153/36909)", 9500228},
    {"Gathersanity Item: Cobalt Deposit - Crystallized Earth (#24153/37701)", 9500229},
    {"Gathersanity Item: Cobalt Deposit - Crystallized Water (#24153/37705)", 9500230},
    {"Gathersanity Item: Rich Cobalt Deposit - Cobalt Ore (#24154/36909)", 9500231},
    {"Gathersanity Item: Rich Cobalt Deposit - Crystallized Earth (#24154/37701)", 9500232},
    {"Gathersanity Item: Rich Cobalt Deposit - Crystallized Water (#24154/37705)", 9500233},
    {"Gathersanity Item: Saronite Deposit - Saronite Ore (#24155/36912)", 9500234},
    {"Gathersanity Item: Saronite Deposit - Crystallized Earth (#24155/37701)", 9500235},
    {"Gathersanity Item: Saronite Deposit - Crystallized Shadow (#24155/37703)", 9500236},
    {"Gathersanity Item: Rich Saronite Deposit - Saronite Ore (#24156/36912)", 9500237},
    {"Gathersanity Item: Rich Saronite Deposit - Crystallized Earth (#24156/37701)", 9500238},
    {"Gathersanity Item: Rich Saronite Deposit - Crystallized Shadow (#24156/37703)", 9500239},
    {"Gathersanity Item: Titanium Vein - Titanium Ore (#24157/36910)", 9500240},
    {"Gathersanity Item: Titanium Vein - Crystallized Air (#24157/37700)", 9500241},
    {"Gathersanity Item: Titanium Vein - Crystallized Earth (#24157/37701)", 9500242},
    {"Gathersanity Item: Titanium Vein - Crystallized Fire (#24157/37702)", 9500243},
    {"Gathersanity Item: Titanium Vein - Crystallized Water (#24157/37705)", 9500244},
    {"Gathersanity Item: Tiger Lily - Tiger Lily (#24224/36904)", 9500245},
    {"Gathersanity Item: Tiger Lily - Frost Lotus (#24224/36908)", 9500246},
    {"Gathersanity Item: Tiger Lily - Crystallized Life (#24224/37704)", 9500247},
    {"Gathersanity Item: Tiger Lily - Deadnettle (#24224/37921)", 9500248},
    {"Gathersanity Item: Talandra's Rose - Talandra's Rose (#24225/36907)", 9500249},
    {"Gathersanity Item: Talandra's Rose - Frost Lotus (#24225/36908)", 9500250},
    {"Gathersanity Item: Talandra's Rose - Crystallized Life (#24225/37704)", 9500251},
    {"Gathersanity Item: Talandra's Rose - Deadnettle (#24225/37921)", 9500252},
    {"Gathersanity Item: Lichbloom - Lichbloom (#24226/36905)", 9500253},
    {"Gathersanity Item: Lichbloom - Frost Lotus (#24226/36908)", 9500254},
    {"Gathersanity Item: Lichbloom - Crystallized Life (#24226/37704)", 9500255},
    {"Gathersanity Item: Icethorn - Icethorn (#24227/36906)", 9500256},
    {"Gathersanity Item: Icethorn - Frost Lotus (#24227/36908)", 9500257},
    {"Gathersanity Item: Icethorn - Crystallized Life (#24227/37704)", 9500258},
    {"Gathersanity Item: Frost Lotus - Frost Lotus (#24228/36908)", 9500259},
    {"Gathersanity Item: Frost Lotus - Crystallized Life (#24228/37704)", 9500260},
    {"Gathersanity Item: Frost Lotus - Deadnettle (#24228/37921)", 9500261},
    {"Gathersanity Item: Firethorn - Frost Lotus (#25089/36908)", 9500262},
    {"Gathersanity Item: Firethorn - Crystallized Life (#25089/37704)", 9500263},
    {"Gathersanity Item: Firethorn - Fire Seed (#25089/39969)", 9500264},
    {"Gathersanity Item: Firethorn - Fire Leaf (#25089/39970)", 9500265},
    {"Gathersanity Item: Adder's Tongue - Adder's Tongue (#25093/36903)", 9500266},
    {"Gathersanity Item: Adder's Tongue - Frost Lotus (#25093/36908)", 9500267},
    {"Gathersanity Item: Adder's Tongue - Crystallized Life (#25093/37704)", 9500268},
    {"Gathersanity Item: Frozen Herb - Goldclover (#25094/36901)", 9500269},
    {"Gathersanity Item: Frozen Herb - Tiger Lily (#25094/36904)", 9500270},
    {"Gathersanity Item: Frozen Herb - Talandra's Rose (#25094/36907)", 9500271},
    {"Gathersanity Item: Frozen Herb - Goldclover (#25095/36901)", 9500272},
    {"Gathersanity Item: Frozen Herb - Tiger Lily (#25095/36904)", 9500273},
    {"Gathersanity Item: Frozen Herb - Talandra's Rose (#25095/36907)", 9500274},
    {"Gathersanity Item: Frozen Herb - Goldclover (#25096/36901)", 9500275},
    {"Gathersanity Item: Frozen Herb - Tiger Lily (#25096/36904)", 9500276},
    {"Gathersanity Item: Frozen Herb - Talandra's Rose (#25096/36907)", 9500277},
    {"Gathersanity Item: Rich Adamantite Deposit - Mote of Earth (#26861/22573)", 9500278},
    {"Gathersanity Item: Rich Adamantite Deposit - Adamantite Ore (#26861/23425)", 9500279},
    {"Gathersanity Item: Rich Adamantite Deposit - Eternium Ore (#26861/23427)", 9500280},
    {"Gathersanity Item: Pure Saronite Deposit - Eternal Earth (#27244/35624)", 9500281},
    {"Gathersanity Item: Pure Saronite Deposit - Eternal Shadow (#27244/35627)", 9500282},
    {"Gathersanity Item: Pure Saronite Deposit - Saronite Ore (#27244/36912)", 9500283},
    {"Gathersanity Item: Thick Leather (skinning #193/4304)", 9500284},
    {"Gathersanity Item: Worn Dragonscale (skinning #193/8165)", 9500285},
    {"Gathersanity Item: Thick Hide (skinning #193/8169)", 9500286},
    {"Gathersanity Item: Rugged Leather (skinning #193/8170)", 9500287},
    {"Gathersanity Item: Rugged Hide (skinning #193/8171)", 9500288},
    {"Gathersanity Item: Blue Dragonscale (skinning #193/15415)", 9500289},
    {"Gathersanity Item: Light Hide (skinning #441/783)", 9500290},
    {"Gathersanity Item: Light Leather (skinning #441/2318)", 9500291},
    {"Gathersanity Item: Medium Hide (skinning #441/4232)", 9500292},
    {"Gathersanity Item: Black Whelp Scale (skinning #441/7286)", 9500293},
    {"Gathersanity Item: Medium Leather (skinning #534/2319)", 9500294},
    {"Gathersanity Item: Medium Hide (skinning #534/4232)", 9500295},
    {"Gathersanity Item: Heavy Leather (skinning #534/4234)", 9500296},
    {"Gathersanity Item: Heavy Hide (skinning #534/4235)", 9500297},
    {"Gathersanity Item: Heavy Leather (skinning #684/4234)", 9500298},
    {"Gathersanity Item: Heavy Hide (skinning #684/4235)", 9500299},
    {"Gathersanity Item: Thick Leather (skinning #684/4304)", 9500300},
    {"Gathersanity Item: Heavy Leather (skinning #729/4234)", 9500301},
    {"Gathersanity Item: Heavy Hide (skinning #729/4235)", 9500302},
    {"Gathersanity Item: Thick Leather (skinning #729/4304)", 9500303},
    {"Gathersanity Item: Thick Leather (skinning #731/4304)", 9500304},
    {"Gathersanity Item: Thick Hide (skinning #731/8169)", 9500305},
    {"Gathersanity Item: Rugged Leather (skinning #731/8170)", 9500306},
    {"Gathersanity Item: Medium Leather (skinning #740/2319)", 9500307},
    {"Gathersanity Item: Medium Hide (skinning #740/4232)", 9500308},
    {"Gathersanity Item: Heavy Leather (skinning #740/4234)", 9500309},
    {"Gathersanity Item: Heavy Hide (skinning #740/4235)", 9500310},
    {"Gathersanity Item: Green Whelp Scale (skinning #740/7392)", 9500311},
    {"Gathersanity Item: Medium Leather (skinning #741/2319)", 9500312},
    {"Gathersanity Item: Medium Hide (skinning #741/4232)", 9500313},
    {"Gathersanity Item: Heavy Leather (skinning #741/4234)", 9500314},
    {"Gathersanity Item: Heavy Hide (skinning #741/4235)", 9500315},
    {"Gathersanity Item: Green Whelp Scale (skinning #741/7392)", 9500316},
    {"Gathersanity Item: Heavy Leather (skinning #742/4234)", 9500317},
    {"Gathersanity Item: Heavy Hide (skinning #742/4235)", 9500318},
    {"Gathersanity Item: Thick Leather (skinning #742/4304)", 9500319},
    {"Gathersanity Item: Worn Dragonscale (skinning #742/8165)", 9500320},
    {"Gathersanity Item: Thick Hide (skinning #742/8169)", 9500321},
    {"Gathersanity Item: Green Dragonscale (skinning #742/15412)", 9500322},
    {"Gathersanity Item: Heavy Leather (skinning #743/4234)", 9500323},
    {"Gathersanity Item: Heavy Hide (skinning #743/4235)", 9500324},
    {"Gathersanity Item: Thick Leather (skinning #743/4304)", 9500325},
    {"Gathersanity Item: Worn Dragonscale (skinning #743/8165)", 9500326},
    {"Gathersanity Item: Thick Hide (skinning #743/8169)", 9500327},
    {"Gathersanity Item: Green Dragonscale (skinning #743/15412)", 9500328},
    {"Gathersanity Item: Heavy Leather (skinning #744/4234)", 9500329},
    {"Gathersanity Item: Heavy Hide (skinning #744/4235)", 9500330},
    {"Gathersanity Item: Thick Leather (skinning #744/4304)", 9500331},
    {"Gathersanity Item: Worn Dragonscale (skinning #744/8165)", 9500332},
    {"Gathersanity Item: Thick Hide (skinning #744/8169)", 9500333},
    {"Gathersanity Item: Green Dragonscale (skinning #744/15412)", 9500334},
    {"Gathersanity Item: Heavy Leather (skinning #745/4234)", 9500335},
    {"Gathersanity Item: Heavy Hide (skinning #745/4235)", 9500336},
    {"Gathersanity Item: Thick Leather (skinning #745/4304)", 9500337},
    {"Gathersanity Item: Worn Dragonscale (skinning #745/8165)", 9500338},
    {"Gathersanity Item: Thick Hide (skinning #745/8169)", 9500339},
    {"Gathersanity Item: Green Dragonscale (skinning #745/15412)", 9500340},
    {"Gathersanity Item: Heavy Leather (skinning #746/4234)", 9500341},
    {"Gathersanity Item: Heavy Hide (skinning #746/4235)", 9500342},
    {"Gathersanity Item: Thick Leather (skinning #746/4304)", 9500343},
    {"Gathersanity Item: Worn Dragonscale (skinning #746/8165)", 9500344},
    {"Gathersanity Item: Thick Hide (skinning #746/8169)", 9500345},
    {"Gathersanity Item: Green Dragonscale (skinning #746/15412)", 9500346},
    {"Gathersanity Item: Heavy Leather (skinning #768/4234)", 9500347},
    {"Gathersanity Item: Heavy Hide (skinning #768/4235)", 9500348},
    {"Gathersanity Item: Thick Leather (skinning #768/4304)", 9500349},
    {"Gathersanity Item: Shiny Fish Scales (skinning #905/17057)", 9500350},
    {"Gathersanity Item: Medium Leather (skinning #976/2319)", 9500351},
    {"Gathersanity Item: Medium Hide (skinning #976/4232)", 9500352},
    {"Gathersanity Item: Heavy Leather (skinning #976/4234)", 9500353},
    {"Gathersanity Item: Medium Leather (skinning #977/2319)", 9500354},
    {"Gathersanity Item: Medium Hide (skinning #977/4232)", 9500355},
    {"Gathersanity Item: Heavy Leather (skinning #977/4234)", 9500356},
    {"Gathersanity Item: Heavy Hide (skinning #977/4235)", 9500357},
    {"Gathersanity Item: Medium Leather (skinning #1044/2319)", 9500358},
    {"Gathersanity Item: Medium Hide (skinning #1044/4232)", 9500359},
    {"Gathersanity Item: Heavy Leather (skinning #1044/4234)", 9500360},
    {"Gathersanity Item: Heavy Hide (skinning #1044/4235)", 9500361},
    {"Gathersanity Item: Red Whelp Scale (skinning #1044/7287)", 9500362},
    {"Gathersanity Item: Thick Leather (skinning #1045/4304)", 9500363},
    {"Gathersanity Item: Worn Dragonscale (skinning #1045/8165)", 9500364},
    {"Gathersanity Item: Rugged Leather (skinning #1045/8170)", 9500365},
    {"Gathersanity Item: Rugged Hide (skinning #1045/8171)", 9500366},
    {"Gathersanity Item: Red Dragonscale (skinning #1045/15414)", 9500367},
    {"Gathersanity Item: Thick Leather (skinning #1046/4304)", 9500368},
    {"Gathersanity Item: Worn Dragonscale (skinning #1046/8165)", 9500369},
    {"Gathersanity Item: Rugged Leather (skinning #1046/8170)", 9500370},
    {"Gathersanity Item: Rugged Hide (skinning #1046/8171)", 9500371},
    {"Gathersanity Item: Red Dragonscale (skinning #1046/15414)", 9500372},
    {"Gathersanity Item: Thick Leather (skinning #1047/4304)", 9500373},
    {"Gathersanity Item: Worn Dragonscale (skinning #1047/8165)", 9500374},
    {"Gathersanity Item: Rugged Leather (skinning #1047/8170)", 9500375},
    {"Gathersanity Item: Rugged Hide (skinning #1047/8171)", 9500376},
    {"Gathersanity Item: Red Dragonscale (skinning #1047/15414)", 9500377},
    {"Gathersanity Item: Thick Leather (skinning #1048/4304)", 9500378},
    {"Gathersanity Item: Worn Dragonscale (skinning #1048/8165)", 9500379},
    {"Gathersanity Item: Rugged Leather (skinning #1048/8170)", 9500380},
    {"Gathersanity Item: Rugged Hide (skinning #1048/8171)", 9500381},
    {"Gathersanity Item: Red Dragonscale (skinning #1048/15414)", 9500382},
    {"Gathersanity Item: Thick Leather (skinning #1049/4304)", 9500383},
    {"Gathersanity Item: Worn Dragonscale (skinning #1049/8165)", 9500384},
    {"Gathersanity Item: Rugged Leather (skinning #1049/8170)", 9500385},
    {"Gathersanity Item: Rugged Hide (skinning #1049/8171)", 9500386},
    {"Gathersanity Item: Red Dragonscale (skinning #1049/15414)", 9500387},
    {"Gathersanity Item: Thick Leather (skinning #1050/4304)", 9500388},
    {"Gathersanity Item: Worn Dragonscale (skinning #1050/8165)", 9500389},
    {"Gathersanity Item: Rugged Leather (skinning #1050/8170)", 9500390},
    {"Gathersanity Item: Rugged Hide (skinning #1050/8171)", 9500391},
    {"Gathersanity Item: Red Dragonscale (skinning #1050/15414)", 9500392},
    {"Gathersanity Item: Thick Leather (skinning #1063/4304)", 9500393},
    {"Gathersanity Item: Rugged Leather (skinning #1063/8170)", 9500394},
    {"Gathersanity Item: Green Dragonscale (skinning #1063/15412)", 9500395},
    {"Gathersanity Item: Shiny Fish Scales (skinning #1193/17057)", 9500396},
    {"Gathersanity Item: Light Hide (skinning #1388/783)", 9500397},
    {"Gathersanity Item: Light Leather (skinning #1388/2318)", 9500398},
    {"Gathersanity Item: Ruined Leather Scraps (skinning #1388/2934)", 9500399},
    {"Gathersanity Item: Heavy Leather (skinning #1552/4234)", 9500400},
    {"Gathersanity Item: Heavy Hide (skinning #1552/4235)", 9500401},
    {"Gathersanity Item: Thick Leather (skinning #1552/4304)", 9500402},
    {"Gathersanity Item: Thick Leather (skinning #1559/4304)", 9500403},
    {"Gathersanity Item: Thick Hide (skinning #1559/8169)", 9500404},
    {"Gathersanity Item: Rugged Leather (skinning #1559/8170)", 9500405},
    {"Gathersanity Item: Rugged Hide (skinning #1559/8171)", 9500406},
    {"Gathersanity Item: Heavy Leather (skinning #1713/4234)", 9500407},
    {"Gathersanity Item: Heavy Hide (skinning #1713/4235)", 9500408},
    {"Gathersanity Item: Thick Leather (skinning #1713/4304)", 9500409},
    {"Gathersanity Item: Thick Leather (skinning #1815/4304)", 9500410},
    {"Gathersanity Item: Thick Hide (skinning #1815/8169)", 9500411},
    {"Gathersanity Item: Rugged Leather (skinning #1815/8170)", 9500412},
    {"Gathersanity Item: Rugged Hide (skinning #1815/8171)", 9500413},
    {"Gathersanity Item: Warbear Leather (skinning #1815/15419)", 9500414},
    {"Gathersanity Item: Thick Leather (skinning #1816/4304)", 9500415},
    {"Gathersanity Item: Rugged Leather (skinning #1816/8170)", 9500416},
    {"Gathersanity Item: Rugged Hide (skinning #1816/8171)", 9500417},
    {"Gathersanity Item: Warbear Leather (skinning #1816/15419)", 9500418},
    {"Gathersanity Item: Thick Leather (skinning #1817/4304)", 9500419},
    {"Gathersanity Item: Thick Hide (skinning #1817/8169)", 9500420},
    {"Gathersanity Item: Rugged Leather (skinning #1817/8170)", 9500421},
    {"Gathersanity Item: Rugged Hide (skinning #1817/8171)", 9500422},
    {"Gathersanity Item: Light Hide (skinning #1891/783)", 9500423},
    {"Gathersanity Item: Light Leather (skinning #1891/2318)", 9500424},
    {"Gathersanity Item: Ruined Leather Scraps (skinning #1891/2934)", 9500425},
    {"Gathersanity Item: Light Hide (skinning #1894/783)", 9500426},
    {"Gathersanity Item: Light Leather (skinning #1894/2318)", 9500427},
    {"Gathersanity Item: Ruined Leather Scraps (skinning #1894/2934)", 9500428},
    {"Gathersanity Item: Light Hide (skinning #1895/783)", 9500429},
    {"Gathersanity Item: Light Leather (skinning #1895/2318)", 9500430},
    {"Gathersanity Item: Ruined Leather Scraps (skinning #1895/2934)", 9500431},
    {"Gathersanity Item: Light Leather (skinning #1933/2318)", 9500432},
    {"Gathersanity Item: Wool Cloth (skinning #1933/2592)", 9500433},
    {"Gathersanity Item: Ruined Leather Scraps (skinning #1933/2934)", 9500434},
    {"Gathersanity Item: Shiny Fish Scales (skinning #2173/17057)", 9500435},
    {"Gathersanity Item: Shiny Fish Scales (skinning #2174/17057)", 9500436},
    {"Gathersanity Item: Heavy Leather (skinning #2347/4234)", 9500437},
    {"Gathersanity Item: Thick Leather (skinning #2347/4304)", 9500438},
    {"Gathersanity Item: Heavy Leather (skinning #2447/4234)", 9500439},
    {"Gathersanity Item: Heavy Hide (skinning #2447/4235)", 9500440},
    {"Gathersanity Item: Thick Leather (skinning #2447/4304)", 9500441},
    {"Gathersanity Item: Worn Dragonscale (skinning #2447/8165)", 9500442},
    {"Gathersanity Item: Thick Hide (skinning #2447/8169)", 9500443},
    {"Gathersanity Item: Heavy Leather (skinning #2452/4234)", 9500444},
    {"Gathersanity Item: Heavy Hide (skinning #2452/4235)", 9500445},
    {"Gathersanity Item: Thick Leather (skinning #2452/4304)", 9500446},
    {"Gathersanity Item: Heavy Leather (skinning #2474/4234)", 9500447},
    {"Gathersanity Item: Heavy Hide (skinning #2474/4235)", 9500448},
    {"Gathersanity Item: Thick Leather (skinning #2474/4304)", 9500449},
    {"Gathersanity Item: Thick Leather (skinning #2505/4304)", 9500450},
    {"Gathersanity Item: Turtle Scale (skinning #2505/8167)", 9500451},
    {"Gathersanity Item: Thick Hide (skinning #2505/8169)", 9500452},
    {"Gathersanity Item: Rugged Leather (skinning #2505/8170)", 9500453},
    {"Gathersanity Item: Thick Leather (skinning #2521/4304)", 9500454},
    {"Gathersanity Item: Thick Hide (skinning #2521/8169)", 9500455},
    {"Gathersanity Item: Rugged Leather (skinning #2521/8170)", 9500456},
    {"Gathersanity Item: Thick Leather (skinning #2522/4304)", 9500457},
    {"Gathersanity Item: Thick Hide (skinning #2522/8169)", 9500458},
    {"Gathersanity Item: Rugged Leather (skinning #2522/8170)", 9500459},
    {"Gathersanity Item: Heavy Leather (skinning #2635/4234)", 9500460},
    {"Gathersanity Item: Heavy Hide (skinning #2635/4235)", 9500461},
    {"Gathersanity Item: Thick Leather (skinning #2635/4304)", 9500462},
    {"Gathersanity Item: Thick Leather (skinning #2659/4304)", 9500463},
    {"Gathersanity Item: Thick Hide (skinning #2659/8169)", 9500464},
    {"Gathersanity Item: Rugged Leather (skinning #2659/8170)", 9500465},
    {"Gathersanity Item: Thick Leather (skinning #2680/4304)", 9500466},
    {"Gathersanity Item: Thick Hide (skinning #2680/8169)", 9500467},
    {"Gathersanity Item: Rugged Leather (skinning #2680/8170)", 9500468},
    {"Gathersanity Item: Thick Leather (skinning #2681/4304)", 9500469},
    {"Gathersanity Item: Thick Hide (skinning #2681/8169)", 9500470},
    {"Gathersanity Item: Rugged Leather (skinning #2681/8170)", 9500471},
    {"Gathersanity Item: Heavy Leather (skinning #2725/4234)", 9500472},
    {"Gathersanity Item: Heavy Hide (skinning #2725/4235)", 9500473},
    {"Gathersanity Item: Thick Leather (skinning #2725/4304)", 9500474},
    {"Gathersanity Item: Worn Dragonscale (skinning #2725/8165)", 9500475},
    {"Gathersanity Item: Thick Hide (skinning #2725/8169)", 9500476},
    {"Gathersanity Item: Heavy Leather (skinning #2726/4234)", 9500477},
    {"Gathersanity Item: Heavy Hide (skinning #2726/4235)", 9500478},
    {"Gathersanity Item: Thick Leather (skinning #2726/4304)", 9500479},
    {"Gathersanity Item: Worn Dragonscale (skinning #2726/8165)", 9500480},
    {"Gathersanity Item: Thick Hide (skinning #2726/8169)", 9500481},
    {"Gathersanity Item: Heavy Leather (skinning #2730/4234)", 9500482},
    {"Gathersanity Item: Heavy Hide (skinning #2730/4235)", 9500483},
    {"Gathersanity Item: Thick Leather (skinning #2730/4304)", 9500484},
    {"Gathersanity Item: Thick Hide (skinning #2730/8169)", 9500485},
    {"Gathersanity Item: Heavy Leather (skinning #2753/4234)", 9500486},
    {"Gathersanity Item: Heavy Hide (skinning #2753/4235)", 9500487},
    {"Gathersanity Item: Thick Leather (skinning #2753/4304)", 9500488},
    {"Gathersanity Item: Thick Leather (skinning #2757/4304)", 9500489},
    {"Gathersanity Item: Rugged Leather (skinning #2757/8170)", 9500490},
    {"Gathersanity Item: Rugged Hide (skinning #2757/8171)", 9500491},
    {"Gathersanity Item: Thick Leather (skinning #2759/4304)", 9500492},
    {"Gathersanity Item: Rugged Leather (skinning #2759/8170)", 9500493},
    {"Gathersanity Item: Rugged Hide (skinning #2759/8171)", 9500494},
    {"Gathersanity Item: Heavy Leather (skinning #2850/4234)", 9500495},
    {"Gathersanity Item: Thick Leather (skinning #2850/4304)", 9500496},
    {"Gathersanity Item: Thick Hide (skinning #2850/8169)", 9500497},
    {"Gathersanity Item: Heavy Leather (skinning #2923/4234)", 9500498},
    {"Gathersanity Item: Heavy Hide (skinning #2923/4235)", 9500499},
    {"Gathersanity Item: Thick Leather (skinning #2923/4304)", 9500500},
    {"Gathersanity Item: Thick Hide (skinning #2923/8169)", 9500501},
    {"Gathersanity Item: Heavy Leather (skinning #2924/4234)", 9500502},
    {"Gathersanity Item: Heavy Hide (skinning #2924/4235)", 9500503},
    {"Gathersanity Item: Thick Leather (skinning #2924/4304)", 9500504},
    {"Gathersanity Item: Thick Hide (skinning #2924/8169)", 9500505},
    {"Gathersanity Item: Thick Leather (skinning #2925/4304)", 9500506},
    {"Gathersanity Item: Thick Hide (skinning #2925/8169)", 9500507},
    {"Gathersanity Item: Rugged Leather (skinning #2925/8170)", 9500508},
    {"Gathersanity Item: Thick Leather (skinning #2926/4304)", 9500509},
    {"Gathersanity Item: Thick Hide (skinning #2926/8169)", 9500510},
    {"Gathersanity Item: Rugged Leather (skinning #2926/8170)", 9500511},
    {"Gathersanity Item: Light Leather (skinning #3529/2318)", 9500512},
    {"Gathersanity Item: Ruined Leather Scraps (skinning #3529/2934)", 9500513},
    {"Gathersanity Item: Light Hide (skinning #3530/783)", 9500514},
    {"Gathersanity Item: Light Leather (skinning #3530/2318)", 9500515},
    {"Gathersanity Item: Ruined Leather Scraps (skinning #3530/2934)", 9500516},
    {"Gathersanity Item: Light Hide (skinning #3532/783)", 9500517},
    {"Gathersanity Item: Light Leather (skinning #3532/2318)", 9500518},
    {"Gathersanity Item: Ruined Leather Scraps (skinning #3533/2934)", 9500519},
    {"Gathersanity Item: Light Hide (skinning #3619/783)", 9500520},
    {"Gathersanity Item: Light Leather (skinning #3619/2318)", 9500521},
    {"Gathersanity Item: Medium Leather (skinning #3619/2319)", 9500522},
    {"Gathersanity Item: Light Leather (skinning #3652/2318)", 9500523},
    {"Gathersanity Item: Medium Leather (skinning #3652/2319)", 9500524},
    {"Gathersanity Item: Medium Leather (skinning #3674/2319)", 9500525},
    {"Gathersanity Item: Medium Hide (skinning #3674/4232)", 9500526},
    {"Gathersanity Item: Light Leather (skinning #3722/2318)", 9500527},
    {"Gathersanity Item: Medium Leather (skinning #3722/2319)", 9500528},
    {"Gathersanity Item: Medium Hide (skinning #3722/4232)", 9500529},
    {"Gathersanity Item: Medium Leather (skinning #3792/2319)", 9500530},
    {"Gathersanity Item: Heavy Leather (skinning #3792/4234)", 9500531},
    {"Gathersanity Item: Medium Leather (skinning #4066/2319)", 9500532},
    {"Gathersanity Item: Medium Hide (skinning #4066/4232)", 9500533},
    {"Gathersanity Item: Heavy Leather (skinning #4066/4234)", 9500534},
    {"Gathersanity Item: Heavy Hide (skinning #4066/4235)", 9500535},
    {"Gathersanity Item: Heavy Leather (skinning #4323/4234)", 9500536},
    {"Gathersanity Item: Heavy Hide (skinning #4323/4235)", 9500537},
    {"Gathersanity Item: Thick Leather (skinning #4323/4304)", 9500538},
    {"Gathersanity Item: Worn Dragonscale (skinning #4323/8165)", 9500539},
    {"Gathersanity Item: Thick Hide (skinning #4323/8169)", 9500540},
    {"Gathersanity Item: Heavy Leather (skinning #4324/4234)", 9500541},
    {"Gathersanity Item: Heavy Hide (skinning #4324/4235)", 9500542},
    {"Gathersanity Item: Thick Leather (skinning #4324/4304)", 9500543},
    {"Gathersanity Item: Worn Dragonscale (skinning #4324/8165)", 9500544},
    {"Gathersanity Item: Thick Hide (skinning #4324/8169)", 9500545},
    {"Gathersanity Item: Heavy Leather (skinning #4328/4234)", 9500546},
    {"Gathersanity Item: Heavy Hide (skinning #4328/4235)", 9500547},
    {"Gathersanity Item: Thick Leather (skinning #4328/4304)", 9500548},
    {"Gathersanity Item: Worn Dragonscale (skinning #4328/8165)", 9500549},
    {"Gathersanity Item: Thick Hide (skinning #4328/8169)", 9500550},
    {"Gathersanity Item: Heavy Leather (skinning #4329/4234)", 9500551},
    {"Gathersanity Item: Heavy Hide (skinning #4329/4235)", 9500552},
    {"Gathersanity Item: Thick Leather (skinning #4329/4304)", 9500553},
    {"Gathersanity Item: Worn Dragonscale (skinning #4329/8165)", 9500554},
    {"Gathersanity Item: Thick Hide (skinning #4329/8169)", 9500555},
    {"Gathersanity Item: Heavy Leather (skinning #4331/4234)", 9500556},
    {"Gathersanity Item: Heavy Hide (skinning #4331/4235)", 9500557},
    {"Gathersanity Item: Thick Leather (skinning #4331/4304)", 9500558},
    {"Gathersanity Item: Worn Dragonscale (skinning #4331/8165)", 9500559},
    {"Gathersanity Item: Thick Hide (skinning #4331/8169)", 9500560},
    {"Gathersanity Item: Heavy Leather (skinning #4334/4234)", 9500561},
    {"Gathersanity Item: Heavy Hide (skinning #4334/4235)", 9500562},
    {"Gathersanity Item: Thick Leather (skinning #4334/4304)", 9500563},
    {"Gathersanity Item: Worn Dragonscale (skinning #4334/8165)", 9500564},
    {"Gathersanity Item: Thick Hide (skinning #4334/8169)", 9500565},
    {"Gathersanity Item: Heavy Leather (skinning #4339/4234)", 9500566},
    {"Gathersanity Item: Thick Leather (skinning #4339/4304)", 9500567},
    {"Gathersanity Item: Worn Dragonscale (skinning #4339/8165)", 9500568},
    {"Gathersanity Item: Thick Hide (skinning #4339/8169)", 9500569},
    {"Gathersanity Item: Medium Leather (skinning #4346/2319)", 9500570},
    {"Gathersanity Item: Medium Hide (skinning #4346/4232)", 9500571},
    {"Gathersanity Item: Heavy Leather (skinning #4346/4234)", 9500572},
    {"Gathersanity Item: Heavy Hide (skinning #4346/4235)", 9500573},
    {"Gathersanity Item: Thick Leather (skinning #4374/4304)", 9500574},
    {"Gathersanity Item: Rugged Leather (skinning #4374/8170)", 9500575},
    {"Gathersanity Item: Rugged Hide (skinning #4374/8171)", 9500576},
    {"Gathersanity Item: Heavy Leather (skinning #4390/4234)", 9500577},
    {"Gathersanity Item: Heavy Hide (skinning #4390/4235)", 9500578},
    {"Gathersanity Item: Thick Leather (skinning #4390/4304)", 9500579},
    {"Gathersanity Item: Thick Hide (skinning #4390/8169)", 9500580},
    {"Gathersanity Item: Heavy Leather (skinning #4396/4234)", 9500581},
    {"Gathersanity Item: Heavy Hide (skinning #4396/4235)", 9500582},
    {"Gathersanity Item: Thick Leather (skinning #4396/4304)", 9500583},
    {"Gathersanity Item: Turtle Scale (skinning #4396/8167)", 9500584},
    {"Gathersanity Item: Heavy Leather (skinning #4397/4234)", 9500585},
    {"Gathersanity Item: Heavy Hide (skinning #4397/4235)", 9500586},
    {"Gathersanity Item: Thick Leather (skinning #4397/4304)", 9500587},
    {"Gathersanity Item: Turtle Scale (skinning #4397/8167)", 9500588},
    {"Gathersanity Item: Heavy Leather (skinning #4398/4234)", 9500589},
    {"Gathersanity Item: Heavy Hide (skinning #4398/4235)", 9500590},
    {"Gathersanity Item: Thick Leather (skinning #4398/4304)", 9500591},
    {"Gathersanity Item: Turtle Scale (skinning #4398/8167)", 9500592},
    {"Gathersanity Item: Heavy Leather (skinning #4399/4234)", 9500593},
    {"Gathersanity Item: Heavy Hide (skinning #4399/4235)", 9500594},
    {"Gathersanity Item: Thick Leather (skinning #4399/4304)", 9500595},
    {"Gathersanity Item: Turtle Scale (skinning #4399/8167)", 9500596},
    {"Gathersanity Item: Thick Hide (skinning #4399/8169)", 9500597},
    {"Gathersanity Item: Heavy Leather (skinning #4400/4234)", 9500598},
    {"Gathersanity Item: Heavy Hide (skinning #4400/4235)", 9500599},
    {"Gathersanity Item: Thick Leather (skinning #4400/4304)", 9500600},
    {"Gathersanity Item: Turtle Scale (skinning #4400/8167)", 9500601},
    {"Gathersanity Item: Thick Hide (skinning #4400/8169)", 9500602},
    {"Gathersanity Item: Heavy Leather (skinning #4422/4234)", 9500603},
    {"Gathersanity Item: Heavy Hide (skinning #4422/4235)", 9500604},
    {"Gathersanity Item: Medium Leather (skinning #4425/2319)", 9500605},
    {"Gathersanity Item: Medium Hide (skinning #4425/4232)", 9500606},
    {"Gathersanity Item: Heavy Leather (skinning #4425/4234)", 9500607},
    {"Gathersanity Item: Heavy Leather (skinning #4504/4234)", 9500608},
    {"Gathersanity Item: Heavy Hide (skinning #4504/4235)", 9500609},
    {"Gathersanity Item: Thick Leather (skinning #4504/4304)", 9500610},
    {"Gathersanity Item: Medium Leather (skinning #4512/2319)", 9500611},
    {"Gathersanity Item: Medium Hide (skinning #4512/4232)", 9500612},
    {"Gathersanity Item: Heavy Leather (skinning #4512/4234)", 9500613},
    {"Gathersanity Item: Heavy Hide (skinning #4512/4235)", 9500614},
    {"Gathersanity Item: Medium Leather (skinning #4539/2319)", 9500615},
    {"Gathersanity Item: Medium Hide (skinning #4539/4232)", 9500616},
    {"Gathersanity Item: Heavy Leather (skinning #4539/4234)", 9500617},
    {"Gathersanity Item: Heavy Hide (skinning #4539/4235)", 9500618},
    {"Gathersanity Item: Heavy Leather (skinning #4660/4234)", 9500619},
    {"Gathersanity Item: Thick Leather (skinning #4660/4304)", 9500620},
    {"Gathersanity Item: Heavy Leather (skinning #4830/4234)", 9500621},
    {"Gathersanity Item: Heavy Hide (skinning #4830/4235)", 9500622},
    {"Gathersanity Item: Heavy Leather (skinning #4861/4234)", 9500623},
    {"Gathersanity Item: Heavy Hide (skinning #4861/4235)", 9500624},
    {"Gathersanity Item: Thick Leather (skinning #4861/4304)", 9500625},
    {"Gathersanity Item: Heavy Leather (skinning #4863/4234)", 9500626},
    {"Gathersanity Item: Heavy Hide (skinning #4863/4235)", 9500627},
    {"Gathersanity Item: Thick Leather (skinning #4863/4304)", 9500628},
    {"Gathersanity Item: Thick Leather (skinning #5225/4304)", 9500629},
    {"Gathersanity Item: Thick Hide (skinning #5225/8169)", 9500630},
    {"Gathersanity Item: Rugged Leather (skinning #5225/8170)", 9500631},
    {"Gathersanity Item: Thick Leather (skinning #5226/4304)", 9500632},
    {"Gathersanity Item: Thick Hide (skinning #5226/8169)", 9500633},
    {"Gathersanity Item: Rugged Leather (skinning #5226/8170)", 9500634},
    {"Gathersanity Item: Thick Leather (skinning #5262/4304)", 9500635},
    {"Gathersanity Item: Thick Hide (skinning #5262/8169)", 9500636},
    {"Gathersanity Item: Rugged Leather (skinning #5262/8170)", 9500637},
    {"Gathersanity Item: Thick Leather (skinning #5274/4304)", 9500638},
    {"Gathersanity Item: Thick Hide (skinning #5274/8169)", 9500639},
    {"Gathersanity Item: Rugged Leather (skinning #5274/8170)", 9500640},
    {"Gathersanity Item: Thick Leather (skinning #5276/4304)", 9500641},
    {"Gathersanity Item: Worn Dragonscale (skinning #5276/8165)", 9500642},
    {"Gathersanity Item: Thick Hide (skinning #5276/8169)", 9500643},
    {"Gathersanity Item: Rugged Leather (skinning #5276/8170)", 9500644},
    {"Gathersanity Item: Thick Leather (skinning #5277/4304)", 9500645},
    {"Gathersanity Item: Worn Dragonscale (skinning #5277/8165)", 9500646},
    {"Gathersanity Item: Thick Hide (skinning #5277/8169)", 9500647},
    {"Gathersanity Item: Rugged Leather (skinning #5277/8170)", 9500648},
    {"Gathersanity Item: Green Dragonscale (skinning #5277/15412)", 9500649},
    {"Gathersanity Item: Heavy Leather (skinning #5278/4234)", 9500650},
    {"Gathersanity Item: Heavy Hide (skinning #5278/4235)", 9500651},
    {"Gathersanity Item: Thick Leather (skinning #5278/4304)", 9500652},
    {"Gathersanity Item: Worn Dragonscale (skinning #5278/8165)", 9500653},
    {"Gathersanity Item: Thick Hide (skinning #5278/8169)", 9500654},
    {"Gathersanity Item: Thick Leather (skinning #5280/4304)", 9500655},
    {"Gathersanity Item: Worn Dragonscale (skinning #5280/8165)", 9500656},
    {"Gathersanity Item: Thick Hide (skinning #5280/8169)", 9500657},
    {"Gathersanity Item: Rugged Leather (skinning #5280/8170)", 9500658},
    {"Gathersanity Item: Green Dragonscale (skinning #5280/15412)", 9500659},
    {"Gathersanity Item: Thick Leather (skinning #5283/4304)", 9500660},
    {"Gathersanity Item: Worn Dragonscale (skinning #5283/8165)", 9500661},
    {"Gathersanity Item: Thick Hide (skinning #5283/8169)", 9500662},
    {"Gathersanity Item: Rugged Leather (skinning #5283/8170)", 9500663},
    {"Gathersanity Item: Green Dragonscale (skinning #5283/15412)", 9500664},
    {"Gathersanity Item: Heavy Leather (skinning #5286/4234)", 9500665},
    {"Gathersanity Item: Heavy Hide (skinning #5286/4235)", 9500666},
    {"Gathersanity Item: Thick Leather (skinning #5286/4304)", 9500667},
    {"Gathersanity Item: Thick Hide (skinning #5286/8169)", 9500668},
    {"Gathersanity Item: Heavy Leather (skinning #5287/4234)", 9500669},
    {"Gathersanity Item: Heavy Hide (skinning #5287/4235)", 9500670},
    {"Gathersanity Item: Thick Leather (skinning #5287/4304)", 9500671},
    {"Gathersanity Item: Thick Hide (skinning #5287/8169)", 9500672},
    {"Gathersanity Item: Thick Leather (skinning #5288/4304)", 9500673},
    {"Gathersanity Item: Thick Hide (skinning #5288/8169)", 9500674},
    {"Gathersanity Item: Rugged Leather (skinning #5288/8170)", 9500675},
    {"Gathersanity Item: Thick Leather (skinning #5291/4304)", 9500676},
    {"Gathersanity Item: Thick Hide (skinning #5291/8169)", 9500677},
    {"Gathersanity Item: Rugged Leather (skinning #5291/8170)", 9500678},
    {"Gathersanity Item: Heavy Leather (skinning #5292/4234)", 9500679},
    {"Gathersanity Item: Heavy Hide (skinning #5292/4235)", 9500680},
    {"Gathersanity Item: Thick Leather (skinning #5292/4304)", 9500681},
    {"Gathersanity Item: Thick Hide (skinning #5292/8169)", 9500682},
    {"Gathersanity Item: Heavy Leather (skinning #5293/4234)", 9500683},
    {"Gathersanity Item: Heavy Hide (skinning #5293/4235)", 9500684},
    {"Gathersanity Item: Thick Leather (skinning #5293/4304)", 9500685},
    {"Gathersanity Item: Thick Hide (skinning #5293/8169)", 9500686},
    {"Gathersanity Item: Heavy Leather (skinning #5295/4234)", 9500687},
    {"Gathersanity Item: Heavy Hide (skinning #5295/4235)", 9500688},
    {"Gathersanity Item: Thick Leather (skinning #5295/4304)", 9500689},
    {"Gathersanity Item: Thick Hide (skinning #5295/8169)", 9500690},
    {"Gathersanity Item: Thick Leather (skinning #5296/4304)", 9500691},
    {"Gathersanity Item: Thick Hide (skinning #5296/8169)", 9500692},
    {"Gathersanity Item: Rugged Leather (skinning #5296/8170)", 9500693},
    {"Gathersanity Item: Thick Leather (skinning #5297/4304)", 9500694},
    {"Gathersanity Item: Thick Hide (skinning #5297/8169)", 9500695},
    {"Gathersanity Item: Rugged Leather (skinning #5297/8170)", 9500696},
    {"Gathersanity Item: Thick Leather (skinning #5299/4304)", 9500697},
    {"Gathersanity Item: Thick Hide (skinning #5299/8169)", 9500698},
    {"Gathersanity Item: Rugged Leather (skinning #5299/8170)", 9500699},
    {"Gathersanity Item: Thick Leather (skinning #5306/4304)", 9500700},
    {"Gathersanity Item: Thick Hide (skinning #5306/8169)", 9500701},
    {"Gathersanity Item: Rugged Leather (skinning #5306/8170)", 9500702},
    {"Gathersanity Item: Thick Leather (skinning #5319/4304)", 9500703},
    {"Gathersanity Item: Worn Dragonscale (skinning #5319/8165)", 9500704},
    {"Gathersanity Item: Rugged Leather (skinning #5319/8170)", 9500705},
    {"Gathersanity Item: Rugged Hide (skinning #5319/8171)", 9500706},
    {"Gathersanity Item: Green Dragonscale (skinning #5319/15412)", 9500707},
    {"Gathersanity Item: Thick Leather (skinning #5320/4304)", 9500708},
    {"Gathersanity Item: Worn Dragonscale (skinning #5320/8165)", 9500709},
    {"Gathersanity Item: Rugged Leather (skinning #5320/8170)", 9500710},
    {"Gathersanity Item: Rugged Hide (skinning #5320/8171)", 9500711},
    {"Gathersanity Item: Green Dragonscale (skinning #5320/15412)", 9500712},
    {"Gathersanity Item: Thick Leather (skinning #5346/4304)", 9500713},
    {"Gathersanity Item: Thick Hide (skinning #5346/8169)", 9500714},
    {"Gathersanity Item: Rugged Leather (skinning #5346/8170)", 9500715},
    {"Gathersanity Item: Thick Leather (skinning #5349/4304)", 9500716},
    {"Gathersanity Item: Thick Hide (skinning #5349/8169)", 9500717},
    {"Gathersanity Item: Rugged Leather (skinning #5349/8170)", 9500718},
    {"Gathersanity Item: Heavy Leather (skinning #5356/4234)", 9500719},
    {"Gathersanity Item: Heavy Hide (skinning #5356/4235)", 9500720},
    {"Gathersanity Item: Thick Leather (skinning #5356/4304)", 9500721},
    {"Gathersanity Item: Thick Leather (skinning #5421/4304)", 9500722},
    {"Gathersanity Item: Thick Hide (skinning #5421/8169)", 9500723},
    {"Gathersanity Item: Rugged Leather (skinning #5421/8170)", 9500724},
    {"Gathersanity Item: Heavy Leather (skinning #5422/4234)", 9500725},
    {"Gathersanity Item: Heavy Hide (skinning #5422/4235)", 9500726},
    {"Gathersanity Item: Thick Leather (skinning #5422/4304)", 9500727},
    {"Gathersanity Item: Scorpid Scale (skinning #5422/8154)", 9500728},
    {"Gathersanity Item: Thick Hide (skinning #5422/8169)", 9500729},
    {"Gathersanity Item: Heavy Leather (skinning #5423/4234)", 9500730},
    {"Gathersanity Item: Heavy Hide (skinning #5423/4235)", 9500731},
    {"Gathersanity Item: Thick Leather (skinning #5423/4304)", 9500732},
    {"Gathersanity Item: Scorpid Scale (skinning #5423/8154)", 9500733},
    {"Gathersanity Item: Thick Hide (skinning #5423/8169)", 9500734},
    {"Gathersanity Item: Thick Leather (skinning #5424/4304)", 9500735},
    {"Gathersanity Item: Scorpid Scale (skinning #5424/8154)", 9500736},
    {"Gathersanity Item: Thick Hide (skinning #5424/8169)", 9500737},
    {"Gathersanity Item: Rugged Leather (skinning #5424/8170)", 9500738},
    {"Gathersanity Item: Thick Leather (skinning #5427/4304)", 9500739},
    {"Gathersanity Item: Thick Hide (skinning #5427/8169)", 9500740},
    {"Gathersanity Item: Rugged Leather (skinning #5427/8170)", 9500741},
    {"Gathersanity Item: Thick Leather (skinning #5431/4304)", 9500742},
    {"Gathersanity Item: Turtle Scale (skinning #5431/8167)", 9500743},
    {"Gathersanity Item: Thick Hide (skinning #5431/8169)", 9500744},
    {"Gathersanity Item: Rugged Leather (skinning #5431/8170)", 9500745},
    {"Gathersanity Item: Thick Leather (skinning #5708/4304)", 9500746},
    {"Gathersanity Item: Thick Hide (skinning #5708/8169)", 9500747},
    {"Gathersanity Item: Rugged Leather (skinning #5708/8170)", 9500748},
    {"Gathersanity Item: Rugged Hide (skinning #5708/8171)", 9500749},
    {"Gathersanity Item: Thick Leather (skinning #5709/4304)", 9500750},
    {"Gathersanity Item: Worn Dragonscale (skinning #5709/8165)", 9500751},
    {"Gathersanity Item: Thick Hide (skinning #5709/8169)", 9500752},
    {"Gathersanity Item: Rugged Leather (skinning #5709/8170)", 9500753},
    {"Gathersanity Item: Rugged Hide (skinning #5709/8171)", 9500754},
    {"Gathersanity Item: Green Dragonscale (skinning #5709/15412)", 9500755},
    {"Gathersanity Item: Worn Dragonscale (skinning #5719/8165)", 9500756},
    {"Gathersanity Item: Thick Hide (skinning #5719/8169)", 9500757},
    {"Gathersanity Item: Rugged Leather (skinning #5719/8170)", 9500758},
    {"Gathersanity Item: Green Dragonscale (skinning #5719/15412)", 9500759},
    {"Gathersanity Item: Worn Dragonscale (skinning #5720/8165)", 9500760},
    {"Gathersanity Item: Thick Hide (skinning #5720/8169)", 9500761},
    {"Gathersanity Item: Rugged Leather (skinning #5720/8170)", 9500762},
    {"Gathersanity Item: Green Dragonscale (skinning #5720/15412)", 9500763},
    {"Gathersanity Item: Worn Dragonscale (skinning #5721/8165)", 9500764},
    {"Gathersanity Item: Thick Hide (skinning #5721/8169)", 9500765},
    {"Gathersanity Item: Rugged Leather (skinning #5721/8170)", 9500766},
    {"Gathersanity Item: Green Dragonscale (skinning #5721/15412)", 9500767},
    {"Gathersanity Item: Worn Dragonscale (skinning #5722/8165)", 9500768},
    {"Gathersanity Item: Thick Hide (skinning #5722/8169)", 9500769},
    {"Gathersanity Item: Rugged Leather (skinning #5722/8170)", 9500770},
    {"Gathersanity Item: Green Dragonscale (skinning #5722/15412)", 9500771},
    {"Gathersanity Item: Light Leather (skinning #5831/2318)", 9500772},
    {"Gathersanity Item: Medium Leather (skinning #5831/2319)", 9500773},
    {"Gathersanity Item: Medium Hide (skinning #5831/4232)", 9500774},
    {"Gathersanity Item: Light Hide (skinning #5832/783)", 9500775},
    {"Gathersanity Item: Light Leather (skinning #5832/2318)", 9500776},
    {"Gathersanity Item: Medium Leather (skinning #5832/2319)", 9500777},
    {"Gathersanity Item: Medium Hide (skinning #5832/4232)", 9500778},
    {"Gathersanity Item: Thick Leather (skinning #5833/4304)", 9500779},
    {"Gathersanity Item: Thick Hide (skinning #5833/8169)", 9500780},
    {"Gathersanity Item: Rugged Leather (skinning #5833/8170)", 9500781},
    {"Gathersanity Item: Light Leather (skinning #5834/2318)", 9500782},
    {"Gathersanity Item: Medium Leather (skinning #5834/2319)", 9500783},
    {"Gathersanity Item: Medium Hide (skinning #5834/4232)", 9500784},
    {"Gathersanity Item: Light Hide (skinning #5842/783)", 9500785},
    {"Gathersanity Item: Light Leather (skinning #5842/2318)", 9500786},
    {"Gathersanity Item: Medium Leather (skinning #5842/2319)", 9500787},
    {"Gathersanity Item: Light Hide (skinning #5912/783)", 9500788},
    {"Gathersanity Item: Light Leather (skinning #5912/2318)", 9500789},
    {"Gathersanity Item: Medium Leather (skinning #5912/2319)", 9500790},
    {"Gathersanity Item: Deviate Scale (skinning #5912/6470)", 9500791},
    {"Gathersanity Item: Perfect Deviate Scale (skinning #5912/6471)", 9500792},
    {"Gathersanity Item: Medium Leather (skinning #5928/2319)", 9500793},
    {"Gathersanity Item: Medium Hide (skinning #5928/4232)", 9500794},
    {"Gathersanity Item: Heavy Leather (skinning #5928/4234)", 9500795},
    {"Gathersanity Item: Heavy Hide (skinning #5928/4235)", 9500796},
    {"Gathersanity Item: Medium Leather (skinning #5934/2319)", 9500797},
    {"Gathersanity Item: Medium Hide (skinning #5934/4232)", 9500798},
    {"Gathersanity Item: Heavy Leather (skinning #5934/4234)", 9500799},
    {"Gathersanity Item: Heavy Hide (skinning #5934/4235)", 9500800},
    {"Gathersanity Item: Thick Leather (skinning #5984/4304)", 9500801},
    {"Gathersanity Item: Thick Hide (skinning #5984/8169)", 9500802},
    {"Gathersanity Item: Rugged Leather (skinning #5984/8170)", 9500803},
    {"Gathersanity Item: Thick Leather (skinning #5985/4304)", 9500804},
    {"Gathersanity Item: Thick Hide (skinning #5985/8169)", 9500805},
    {"Gathersanity Item: Rugged Leather (skinning #5985/8170)", 9500806},
    {"Gathersanity Item: Thick Leather (skinning #5988/4304)", 9500807},
    {"Gathersanity Item: Scorpid Scale (skinning #5988/8154)", 9500808},
    {"Gathersanity Item: Thick Hide (skinning #5988/8169)", 9500809},
    {"Gathersanity Item: Rugged Leather (skinning #5988/8170)", 9500810},
    {"Gathersanity Item: Thick Leather (skinning #5990/4304)", 9500811},
    {"Gathersanity Item: Thick Hide (skinning #5990/8169)", 9500812},
    {"Gathersanity Item: Rugged Leather (skinning #5990/8170)", 9500813},
    {"Gathersanity Item: Thick Leather (skinning #5991/4304)", 9500814},
    {"Gathersanity Item: Thick Hide (skinning #5991/8169)", 9500815},
    {"Gathersanity Item: Rugged Leather (skinning #5991/8170)", 9500816},
    {"Gathersanity Item: Rugged Hide (skinning #5991/8171)", 9500817},
    {"Gathersanity Item: Thick Leather (skinning #5992/4304)", 9500818},
    {"Gathersanity Item: Thick Hide (skinning #5992/8169)", 9500819},
    {"Gathersanity Item: Rugged Leather (skinning #5992/8170)", 9500820},
    {"Gathersanity Item: Thick Leather (skinning #5993/4304)", 9500821},
    {"Gathersanity Item: Thick Hide (skinning #5993/8169)", 9500822},
    {"Gathersanity Item: Rugged Leather (skinning #5993/8170)", 9500823},
    {"Gathersanity Item: Rugged Hide (skinning #5993/8171)", 9500824},
    {"Gathersanity Item: Thick Leather (skinning #6010/4304)", 9500825},
    {"Gathersanity Item: Thick Hide (skinning #6010/8169)", 9500826},
    {"Gathersanity Item: Rugged Leather (skinning #6010/8170)", 9500827},
    {"Gathersanity Item: Rugged Hide (skinning #6010/8171)", 9500828},
    {"Gathersanity Item: Shiny Fish Scales (skinning #6033/17057)", 9500829},
    {"Gathersanity Item: Blue Dragonscale (skinning #6109/15415)", 9500830},
    {"Gathersanity Item: Thick Leather (skinning #6129/4304)", 9500831},
    {"Gathersanity Item: Worn Dragonscale (skinning #6129/8165)", 9500832},
    {"Gathersanity Item: Thick Hide (skinning #6129/8169)", 9500833},
    {"Gathersanity Item: Rugged Leather (skinning #6129/8170)", 9500834},
    {"Gathersanity Item: Rugged Hide (skinning #6129/8171)", 9500835},
    {"Gathersanity Item: Blue Dragonscale (skinning #6129/15415)", 9500836},
    {"Gathersanity Item: Thick Leather (skinning #6130/4304)", 9500837},
    {"Gathersanity Item: Worn Dragonscale (skinning #6130/8165)", 9500838},
    {"Gathersanity Item: Thick Hide (skinning #6130/8169)", 9500839},
    {"Gathersanity Item: Rugged Leather (skinning #6130/8170)", 9500840},
    {"Gathersanity Item: Rugged Hide (skinning #6130/8171)", 9500841},
    {"Gathersanity Item: Blue Dragonscale (skinning #6130/15415)", 9500842},
    {"Gathersanity Item: Thick Leather (skinning #6131/4304)", 9500843},
    {"Gathersanity Item: Worn Dragonscale (skinning #6131/8165)", 9500844},
    {"Gathersanity Item: Thick Hide (skinning #6131/8169)", 9500845},
    {"Gathersanity Item: Rugged Leather (skinning #6131/8170)", 9500846},
    {"Gathersanity Item: Rugged Hide (skinning #6131/8171)", 9500847},
    {"Gathersanity Item: Blue Dragonscale (skinning #6131/15415)", 9500848},
    {"Gathersanity Item: Thick Leather (skinning #6140/4304)", 9500849},
    {"Gathersanity Item: Thick Hide (skinning #6140/8169)", 9500850},
    {"Gathersanity Item: Rugged Leather (skinning #6140/8170)", 9500851},
    {"Gathersanity Item: Rugged Hide (skinning #6140/8171)", 9500852},
    {"Gathersanity Item: Medium Leather (skinning #6170/2319)", 9500853},
    {"Gathersanity Item: Medium Hide (skinning #6170/4232)", 9500854},
    {"Gathersanity Item: Heavy Leather (skinning #6170/4234)", 9500855},
    {"Gathersanity Item: Heavy Hide (skinning #6170/4235)", 9500856},
    {"Gathersanity Item: Medium Leather (skinning #6215/2319)", 9500857},
    {"Gathersanity Item: Medium Hide (skinning #6215/4232)", 9500858},
    {"Gathersanity Item: Heavy Leather (skinning #6215/4234)", 9500859},
    {"Gathersanity Item: Heavy Hide (skinning #6215/4235)", 9500860},
    {"Gathersanity Item: Thick Leather (skinning #6347/4304)", 9500861},
    {"Gathersanity Item: Thick Hide (skinning #6347/8169)", 9500862},
    {"Gathersanity Item: Rugged Leather (skinning #6347/8170)", 9500863},
    {"Gathersanity Item: Rugged Hide (skinning #6347/8171)", 9500864},
    {"Gathersanity Item: Thick Leather (skinning #6348/4304)", 9500865},
    {"Gathersanity Item: Thick Hide (skinning #6348/8169)", 9500866},
    {"Gathersanity Item: Rugged Leather (skinning #6348/8170)", 9500867},
    {"Gathersanity Item: Rugged Hide (skinning #6348/8171)", 9500868},
    {"Gathersanity Item: Thick Leather (skinning #6349/4304)", 9500869},
    {"Gathersanity Item: Zesty Clam Meat (skinning #6349/7974)", 9500870},
    {"Gathersanity Item: Thick Hide (skinning #6349/8169)", 9500871},
    {"Gathersanity Item: Rugged Leather (skinning #6349/8170)", 9500872},
    {"Gathersanity Item: Rugged Hide (skinning #6349/8171)", 9500873},
    {"Gathersanity Item: Thick Leather (skinning #6352/4304)", 9500874},
    {"Gathersanity Item: Turtle Scale (skinning #6352/8167)", 9500875},
    {"Gathersanity Item: Thick Hide (skinning #6352/8169)", 9500876},
    {"Gathersanity Item: Rugged Leather (skinning #6352/8170)", 9500877},
    {"Gathersanity Item: Rugged Hide (skinning #6352/8171)", 9500878},
    {"Gathersanity Item: Thick Leather (skinning #6369/4304)", 9500879},
    {"Gathersanity Item: Turtle Scale (skinning #6369/8167)", 9500880},
    {"Gathersanity Item: Thick Hide (skinning #6369/8169)", 9500881},
    {"Gathersanity Item: Rugged Leather (skinning #6369/8170)", 9500882},
    {"Gathersanity Item: Thick Leather (skinning #6375/4304)", 9500883},
    {"Gathersanity Item: Thick Hide (skinning #6375/8169)", 9500884},
    {"Gathersanity Item: Rugged Leather (skinning #6375/8170)", 9500885},
    {"Gathersanity Item: Thick Leather (skinning #6377/4304)", 9500886},
    {"Gathersanity Item: Thick Hide (skinning #6377/8169)", 9500887},
    {"Gathersanity Item: Rugged Leather (skinning #6377/8170)", 9500888},
    {"Gathersanity Item: Thick Leather (skinning #6378/4304)", 9500889},
    {"Gathersanity Item: Thick Hide (skinning #6378/8169)", 9500890},
    {"Gathersanity Item: Rugged Leather (skinning #6378/8170)", 9500891},
    {"Gathersanity Item: Thick Leather (skinning #6379/4304)", 9500892},
    {"Gathersanity Item: Thick Hide (skinning #6379/8169)", 9500893},
    {"Gathersanity Item: Rugged Leather (skinning #6379/8170)", 9500894},
    {"Gathersanity Item: Rugged Hide (skinning #6379/8171)", 9500895},
    {"Gathersanity Item: Thick Leather (skinning #6380/4304)", 9500896},
    {"Gathersanity Item: Thick Hide (skinning #6380/8169)", 9500897},
    {"Gathersanity Item: Rugged Leather (skinning #6380/8170)", 9500898},
    {"Gathersanity Item: Rugged Hide (skinning #6380/8171)", 9500899},
    {"Gathersanity Item: Devilsaur Leather (skinning #6498/15417)", 9500900},
    {"Gathersanity Item: Devilsaur Leather (skinning #6499/15417)", 9500901},
    {"Gathersanity Item: Devilsaur Leather (skinning #6500/15417)", 9500902},
    {"Gathersanity Item: Thick Leather (skinning #6501/4304)", 9500903},
    {"Gathersanity Item: Thick Hide (skinning #6501/8169)", 9500904},
    {"Gathersanity Item: Rugged Leather (skinning #6501/8170)", 9500905},
    {"Gathersanity Item: Rugged Hide (skinning #6501/8171)", 9500906},
    {"Gathersanity Item: Thick Leather (skinning #6502/4304)", 9500907},
    {"Gathersanity Item: Thick Hide (skinning #6502/8169)", 9500908},
    {"Gathersanity Item: Rugged Leather (skinning #6502/8170)", 9500909},
    {"Gathersanity Item: Rugged Hide (skinning #6502/8171)", 9500910},
    {"Gathersanity Item: Thick Leather (skinning #6503/4304)", 9500911},
    {"Gathersanity Item: Thick Hide (skinning #6503/8169)", 9500912},
    {"Gathersanity Item: Rugged Leather (skinning #6503/8170)", 9500913},
    {"Gathersanity Item: Rugged Hide (skinning #6503/8171)", 9500914},
    {"Gathersanity Item: Thick Leather (skinning #6504/4304)", 9500915},
    {"Gathersanity Item: Thick Hide (skinning #6504/8169)", 9500916},
    {"Gathersanity Item: Rugged Leather (skinning #6504/8170)", 9500917},
    {"Gathersanity Item: Rugged Hide (skinning #6504/8171)", 9500918},
    {"Gathersanity Item: Thick Leather (skinning #6505/4304)", 9500919},
    {"Gathersanity Item: Thick Hide (skinning #6505/8169)", 9500920},
    {"Gathersanity Item: Rugged Leather (skinning #6505/8170)", 9500921},
    {"Gathersanity Item: Thick Leather (skinning #6506/4304)", 9500922},
    {"Gathersanity Item: Thick Hide (skinning #6506/8169)", 9500923},
    {"Gathersanity Item: Rugged Leather (skinning #6506/8170)", 9500924},
    {"Gathersanity Item: Thick Leather (skinning #6507/4304)", 9500925},
    {"Gathersanity Item: Thick Hide (skinning #6507/8169)", 9500926},
    {"Gathersanity Item: Rugged Leather (skinning #6507/8170)", 9500927},
    {"Gathersanity Item: Thick Leather (skinning #6508/4304)", 9500928},
    {"Gathersanity Item: Thick Hide (skinning #6508/8169)", 9500929},
    {"Gathersanity Item: Rugged Leather (skinning #6508/8170)", 9500930},
    {"Gathersanity Item: Thick Leather (skinning #6513/4304)", 9500931},
    {"Gathersanity Item: Thick Hide (skinning #6513/8169)", 9500932},
    {"Gathersanity Item: Rugged Leather (skinning #6513/8170)", 9500933},
    {"Gathersanity Item: Rugged Hide (skinning #6513/8171)", 9500934},
    {"Gathersanity Item: Thick Leather (skinning #6514/4304)", 9500935},
    {"Gathersanity Item: Thick Hide (skinning #6514/8169)", 9500936},
    {"Gathersanity Item: Rugged Leather (skinning #6514/8170)", 9500937},
    {"Gathersanity Item: Rugged Hide (skinning #6514/8171)", 9500938},
    {"Gathersanity Item: Thick Leather (skinning #6516/4304)", 9500939},
    {"Gathersanity Item: Thick Hide (skinning #6516/8169)", 9500940},
    {"Gathersanity Item: Rugged Leather (skinning #6516/8170)", 9500941},
    {"Gathersanity Item: Rugged Hide (skinning #6516/8171)", 9500942},
    {"Gathersanity Item: Thick Leather (skinning #6581/4304)", 9500943},
    {"Gathersanity Item: Thick Hide (skinning #6581/8169)", 9500944},
    {"Gathersanity Item: Rugged Leather (skinning #6581/8170)", 9500945},
    {"Gathersanity Item: Devilsaur Leather (skinning #6584/15417)", 9500946},
    {"Gathersanity Item: Thick Leather (skinning #6585/4304)", 9500947},
    {"Gathersanity Item: Thick Hide (skinning #6585/8169)", 9500948},
    {"Gathersanity Item: Rugged Leather (skinning #6585/8170)", 9500949},
    {"Gathersanity Item: Rugged Hide (skinning #6585/8171)", 9500950},
    {"Gathersanity Item: Heavy Leather (skinning #7022/4234)", 9500951},
    {"Gathersanity Item: Heavy Hide (skinning #7022/4235)", 9500952},
    {"Gathersanity Item: Thick Leather (skinning #7022/4304)", 9500953},
    {"Gathersanity Item: Thick Leather (skinning #7040/4304)", 9500954},
    {"Gathersanity Item: Worn Dragonscale (skinning #7040/8165)", 9500955},
    {"Gathersanity Item: Thick Hide (skinning #7040/8169)", 9500956},
    {"Gathersanity Item: Rugged Leather (skinning #7040/8170)", 9500957},
    {"Gathersanity Item: Rugged Hide (skinning #7040/8171)", 9500958},
    {"Gathersanity Item: Black Dragonscale (skinning #7040/15416)", 9500959},
    {"Gathersanity Item: Thick Leather (skinning #7041/4304)", 9500960},
    {"Gathersanity Item: Worn Dragonscale (skinning #7041/8165)", 9500961},
    {"Gathersanity Item: Thick Hide (skinning #7041/8169)", 9500962},
    {"Gathersanity Item: Rugged Leather (skinning #7041/8170)", 9500963},
    {"Gathersanity Item: Rugged Hide (skinning #7041/8171)", 9500964},
    {"Gathersanity Item: Black Dragonscale (skinning #7041/15416)", 9500965},
    {"Gathersanity Item: Thick Leather (skinning #7042/4304)", 9500966},
    {"Gathersanity Item: Worn Dragonscale (skinning #7042/8165)", 9500967},
    {"Gathersanity Item: Rugged Leather (skinning #7042/8170)", 9500968},
    {"Gathersanity Item: Rugged Hide (skinning #7042/8171)", 9500969},
    {"Gathersanity Item: Black Dragonscale (skinning #7042/15416)", 9500970},
    {"Gathersanity Item: Thick Leather (skinning #7043/4304)", 9500971},
    {"Gathersanity Item: Worn Dragonscale (skinning #7043/8165)", 9500972},
    {"Gathersanity Item: Rugged Leather (skinning #7043/8170)", 9500973},
    {"Gathersanity Item: Rugged Hide (skinning #7043/8171)", 9500974},
    {"Gathersanity Item: Black Dragonscale (skinning #7043/15416)", 9500975},
    {"Gathersanity Item: Thick Leather (skinning #7044/4304)", 9500976},
    {"Gathersanity Item: Worn Dragonscale (skinning #7044/8165)", 9500977},
    {"Gathersanity Item: Thick Hide (skinning #7044/8169)", 9500978},
    {"Gathersanity Item: Rugged Leather (skinning #7044/8170)", 9500979},
    {"Gathersanity Item: Rugged Hide (skinning #7044/8171)", 9500980},
    {"Gathersanity Item: Black Dragonscale (skinning #7044/15416)", 9500981},
    {"Gathersanity Item: Thick Leather (skinning #7045/4304)", 9500982},
    {"Gathersanity Item: Worn Dragonscale (skinning #7045/8165)", 9500983},
    {"Gathersanity Item: Thick Hide (skinning #7045/8169)", 9500984},
    {"Gathersanity Item: Rugged Leather (skinning #7045/8170)", 9500985},
    {"Gathersanity Item: Rugged Hide (skinning #7045/8171)", 9500986},
    {"Gathersanity Item: Black Dragonscale (skinning #7045/15416)", 9500987},
    {"Gathersanity Item: Thick Leather (skinning #7046/4304)", 9500988},
    {"Gathersanity Item: Worn Dragonscale (skinning #7046/8165)", 9500989},
    {"Gathersanity Item: Rugged Leather (skinning #7046/8170)", 9500990},
    {"Gathersanity Item: Rugged Hide (skinning #7046/8171)", 9500991},
    {"Gathersanity Item: Black Dragonscale (skinning #7046/15416)", 9500992},
    {"Gathersanity Item: Thick Leather (skinning #7047/4304)", 9500993},
    {"Gathersanity Item: Worn Dragonscale (skinning #7047/8165)", 9500994},
    {"Gathersanity Item: Thick Hide (skinning #7047/8169)", 9500995},
    {"Gathersanity Item: Rugged Leather (skinning #7047/8170)", 9500996},
    {"Gathersanity Item: Rugged Hide (skinning #7047/8171)", 9500997},
    {"Gathersanity Item: Black Dragonscale (skinning #7047/15416)", 9500998},
    {"Gathersanity Item: Thick Leather (skinning #7048/4304)", 9500999},
    {"Gathersanity Item: Worn Dragonscale (skinning #7048/8165)", 9501000},
    {"Gathersanity Item: Thick Hide (skinning #7048/8169)", 9501001},
    {"Gathersanity Item: Rugged Leather (skinning #7048/8170)", 9501002},
    {"Gathersanity Item: Rugged Hide (skinning #7048/8171)", 9501003},
    {"Gathersanity Item: Black Dragonscale (skinning #7048/15416)", 9501004},
    {"Gathersanity Item: Thick Leather (skinning #7049/4304)", 9501005},
    {"Gathersanity Item: Worn Dragonscale (skinning #7049/8165)", 9501006},
    {"Gathersanity Item: Thick Hide (skinning #7049/8169)", 9501007},
    {"Gathersanity Item: Rugged Leather (skinning #7049/8170)", 9501008},
    {"Gathersanity Item: Rugged Hide (skinning #7049/8171)", 9501009},
    {"Gathersanity Item: Black Dragonscale (skinning #7049/15416)", 9501010},
    {"Gathersanity Item: Thick Leather (skinning #7055/4304)", 9501011},
    {"Gathersanity Item: Thick Hide (skinning #7055/8169)", 9501012},
    {"Gathersanity Item: Rugged Leather (skinning #7055/8170)", 9501013},
    {"Gathersanity Item: Rugged Hide (skinning #7055/8171)", 9501014},
    {"Gathersanity Item: Medium Leather (skinning #7078/2319)", 9501015},
    {"Gathersanity Item: Medium Hide (skinning #7078/4232)", 9501016},
    {"Gathersanity Item: Heavy Leather (skinning #7078/4234)", 9501017},
    {"Gathersanity Item: Heavy Hide (skinning #7078/4235)", 9501018},
    {"Gathersanity Item: Thick Leather (skinning #7125/4304)", 9501019},
    {"Gathersanity Item: Thick Hide (skinning #7125/8169)", 9501020},
    {"Gathersanity Item: Rugged Leather (skinning #7125/8170)", 9501021},
    {"Gathersanity Item: Rugged Hide (skinning #7125/8171)", 9501022},
    {"Gathersanity Item: Patch of Tainted Skin (skinning #7125/11512)", 9501023},
    {"Gathersanity Item: Thick Leather (skinning #7126/4304)", 9501024},
    {"Gathersanity Item: Thick Hide (skinning #7126/8169)", 9501025},
    {"Gathersanity Item: Rugged Leather (skinning #7126/8170)", 9501026},
    {"Gathersanity Item: Rugged Hide (skinning #7126/8171)", 9501027},
    {"Gathersanity Item: Patch of Tainted Skin (skinning #7126/11512)", 9501028},
    {"Gathersanity Item: Thick Leather (skinning #7273/4304)", 9501029},
    {"Gathersanity Item: Thick Hide (skinning #7273/8169)", 9501030},
    {"Gathersanity Item: Rugged Leather (skinning #7273/8170)", 9501031},
    {"Gathersanity Item: Medium Leather (skinning #7333/2319)", 9501032},
    {"Gathersanity Item: Medium Hide (skinning #7333/4232)", 9501033},
    {"Gathersanity Item: Heavy Leather (skinning #7333/4234)", 9501034},
    {"Gathersanity Item: Heavy Hide (skinning #7333/4235)", 9501035},
    {"Gathersanity Item: Heavy Leather (skinning #7334/4234)", 9501036},
    {"Gathersanity Item: Heavy Hide (skinning #7334/4235)", 9501037},
    {"Gathersanity Item: Thick Leather (skinning #7334/4304)", 9501038},
    {"Gathersanity Item: Heavy Leather (skinning #7405/4234)", 9501039},
    {"Gathersanity Item: Heavy Hide (skinning #7405/4235)", 9501040},
    {"Gathersanity Item: Thick Leather (skinning #7405/4304)", 9501041},
    {"Gathersanity Item: Scorpid Scale (skinning #7405/8154)", 9501042},
    {"Gathersanity Item: Thick Hide (skinning #7405/8169)", 9501043},
    {"Gathersanity Item: Thick Leather (skinning #7430/4304)", 9501044},
    {"Gathersanity Item: Thick Hide (skinning #7430/8169)", 9501045},
    {"Gathersanity Item: Rugged Leather (skinning #7430/8170)", 9501046},
    {"Gathersanity Item: Rugged Hide (skinning #7430/8171)", 9501047},
    {"Gathersanity Item: Frostsaber Leather (skinning #7430/15422)", 9501048},
    {"Gathersanity Item: Thick Leather (skinning #7431/4304)", 9501049},
    {"Gathersanity Item: Rugged Leather (skinning #7431/8170)", 9501050},
    {"Gathersanity Item: Rugged Hide (skinning #7431/8171)", 9501051},
    {"Gathersanity Item: Frostsaber Leather (skinning #7431/15422)", 9501052},
    {"Gathersanity Item: Thick Leather (skinning #7432/4304)", 9501053},
    {"Gathersanity Item: Rugged Leather (skinning #7432/8170)", 9501054},
    {"Gathersanity Item: Rugged Hide (skinning #7432/8171)", 9501055},
    {"Gathersanity Item: Frostsaber Leather (skinning #7432/15422)", 9501056},
    {"Gathersanity Item: Thick Leather (skinning #7433/4304)", 9501057},
    {"Gathersanity Item: Rugged Leather (skinning #7433/8170)", 9501058},
    {"Gathersanity Item: Rugged Hide (skinning #7433/8171)", 9501059},
    {"Gathersanity Item: Frostsaber Leather (skinning #7433/15422)", 9501060},
    {"Gathersanity Item: Thick Leather (skinning #7434/4304)", 9501061},
    {"Gathersanity Item: Rugged Leather (skinning #7434/8170)", 9501062},
    {"Gathersanity Item: Rugged Hide (skinning #7434/8171)", 9501063},
    {"Gathersanity Item: Frostsaber Leather (skinning #7434/15422)", 9501064},
    {"Gathersanity Item: Thick Leather (skinning #7435/4304)", 9501065},
    {"Gathersanity Item: Worn Dragonscale (skinning #7435/8165)", 9501066},
    {"Gathersanity Item: Thick Hide (skinning #7435/8169)", 9501067},
    {"Gathersanity Item: Rugged Leather (skinning #7435/8170)", 9501068},
    {"Gathersanity Item: Rugged Hide (skinning #7435/8171)", 9501069},
    {"Gathersanity Item: Blue Dragonscale (skinning #7435/15415)", 9501070},
    {"Gathersanity Item: Thick Leather (skinning #7436/4304)", 9501071},
    {"Gathersanity Item: Worn Dragonscale (skinning #7436/8165)", 9501072},
    {"Gathersanity Item: Rugged Leather (skinning #7436/8170)", 9501073},
    {"Gathersanity Item: Rugged Hide (skinning #7436/8171)", 9501074},
    {"Gathersanity Item: Blue Dragonscale (skinning #7436/15415)", 9501075},
    {"Gathersanity Item: Thick Leather (skinning #7437/4304)", 9501076},
    {"Gathersanity Item: Worn Dragonscale (skinning #7437/8165)", 9501077},
    {"Gathersanity Item: Rugged Leather (skinning #7437/8170)", 9501078},
    {"Gathersanity Item: Rugged Hide (skinning #7437/8171)", 9501079},
    {"Gathersanity Item: Blue Dragonscale (skinning #7437/15415)", 9501080},
    {"Gathersanity Item: Thick Leather (skinning #7443/4304)", 9501081},
    {"Gathersanity Item: Thick Hide (skinning #7443/8169)", 9501082},
    {"Gathersanity Item: Rugged Leather (skinning #7443/8170)", 9501083},
    {"Gathersanity Item: Rugged Hide (skinning #7443/8171)", 9501084},
    {"Gathersanity Item: Warbear Leather (skinning #7443/15419)", 9501085},
    {"Gathersanity Item: Thick Leather (skinning #7444/4304)", 9501086},
    {"Gathersanity Item: Thick Hide (skinning #7444/8169)", 9501087},
    {"Gathersanity Item: Rugged Leather (skinning #7444/8170)", 9501088},
    {"Gathersanity Item: Rugged Hide (skinning #7444/8171)", 9501089},
    {"Gathersanity Item: Warbear Leather (skinning #7444/15419)", 9501090},
    {"Gathersanity Item: Thick Leather (skinning #7445/4304)", 9501091},
    {"Gathersanity Item: Rugged Leather (skinning #7445/8170)", 9501092},
    {"Gathersanity Item: Rugged Hide (skinning #7445/8171)", 9501093},
    {"Gathersanity Item: Warbear Leather (skinning #7445/15419)", 9501094},
    {"Gathersanity Item: Thick Leather (skinning #7446/4304)", 9501095},
    {"Gathersanity Item: Rugged Leather (skinning #7446/8170)", 9501096},
    {"Gathersanity Item: Rugged Hide (skinning #7446/8171)", 9501097},
    {"Gathersanity Item: Warbear Leather (skinning #7446/15419)", 9501098},
    {"Gathersanity Item: Thick Leather (skinning #7447/4304)", 9501099},
    {"Gathersanity Item: Thick Hide (skinning #7447/8169)", 9501100},
    {"Gathersanity Item: Rugged Leather (skinning #7447/8170)", 9501101},
    {"Gathersanity Item: Rugged Hide (skinning #7447/8171)", 9501102},
    {"Gathersanity Item: Thick Leather (skinning #7448/4304)", 9501103},
    {"Gathersanity Item: Rugged Leather (skinning #7448/8170)", 9501104},
    {"Gathersanity Item: Rugged Hide (skinning #7448/8171)", 9501105},
    {"Gathersanity Item: Thick Leather (skinning #7449/4304)", 9501106},
    {"Gathersanity Item: Rugged Leather (skinning #7449/8170)", 9501107},
    {"Gathersanity Item: Rugged Hide (skinning #7449/8171)", 9501108},
    {"Gathersanity Item: Thick Leather (skinning #7457/4304)", 9501109},
    {"Gathersanity Item: Thick Hide (skinning #7457/8169)", 9501110},
    {"Gathersanity Item: Rugged Leather (skinning #7457/8170)", 9501111},
    {"Gathersanity Item: Rugged Hide (skinning #7457/8171)", 9501112},
    {"Gathersanity Item: Thick Leather (skinning #7458/4304)", 9501113},
    {"Gathersanity Item: Thick Hide (skinning #7458/8169)", 9501114},
    {"Gathersanity Item: Rugged Leather (skinning #7458/8170)", 9501115},
    {"Gathersanity Item: Rugged Hide (skinning #7458/8171)", 9501116},
    {"Gathersanity Item: Thick Leather (skinning #7459/4304)", 9501117},
    {"Gathersanity Item: Rugged Leather (skinning #7459/8170)", 9501118},
    {"Gathersanity Item: Rugged Hide (skinning #7459/8171)", 9501119},
    {"Gathersanity Item: Thick Leather (skinning #7460/4304)", 9501120},
    {"Gathersanity Item: Rugged Leather (skinning #7460/8170)", 9501121},
    {"Gathersanity Item: Rugged Hide (skinning #7460/8171)", 9501122},
    {"Gathersanity Item: Thick Leather (skinning #7462/4304)", 9501123},
    {"Gathersanity Item: Rugged Leather (skinning #7462/8170)", 9501124},
    {"Gathersanity Item: Rugged Hide (skinning #7462/8171)", 9501125},
    {"Gathersanity Item: Thick Leather (skinning #7803/4304)", 9501126},
    {"Gathersanity Item: Scorpid Scale (skinning #7803/8154)", 9501127},
    {"Gathersanity Item: Thick Hide (skinning #7803/8169)", 9501128},
    {"Gathersanity Item: Rugged Leather (skinning #7803/8170)", 9501129},
    {"Gathersanity Item: Thick Leather (skinning #7846/4304)", 9501130},
    {"Gathersanity Item: Worn Dragonscale (skinning #7846/8165)", 9501131},
    {"Gathersanity Item: Rugged Leather (skinning #7846/8170)", 9501132},
    {"Gathersanity Item: Rugged Hide (skinning #7846/8171)", 9501133},
    {"Gathersanity Item: Black Dragonscale (skinning #7846/15416)", 9501134},
    {"Gathersanity Item: Thick Leather (skinning #7848/4304)", 9501135},
    {"Gathersanity Item: Thick Hide (skinning #7848/8169)", 9501136},
    {"Gathersanity Item: Rugged Leather (skinning #7848/8170)", 9501137},
    {"Gathersanity Item: Thick Leather (skinning #7977/4304)", 9501138},
    {"Gathersanity Item: Turtle Scale (skinning #7977/8167)", 9501139},
    {"Gathersanity Item: Thick Hide (skinning #7977/8169)", 9501140},
    {"Gathersanity Item: Rugged Leather (skinning #7977/8170)", 9501141},
    {"Gathersanity Item: Thick Leather (skinning #8095/4304)", 9501142},
    {"Gathersanity Item: Thick Hide (skinning #8095/8169)", 9501143},
    {"Gathersanity Item: Rugged Leather (skinning #8095/8170)", 9501144},
    {"Gathersanity Item: Thick Leather (skinning #8120/4304)", 9501145},
    {"Gathersanity Item: Thick Hide (skinning #8120/8169)", 9501146},
    {"Gathersanity Item: Rugged Leather (skinning #8120/8170)", 9501147},
    {"Gathersanity Item: Heavy Leather (skinning #8138/4234)", 9501148},
    {"Gathersanity Item: Heavy Hide (skinning #8138/4235)", 9501149},
    {"Gathersanity Item: Thick Leather (skinning #8138/4304)", 9501150},
    {"Gathersanity Item: Thick Leather (skinning #8196/4304)", 9501151},
    {"Gathersanity Item: Worn Dragonscale (skinning #8196/8165)", 9501152},
    {"Gathersanity Item: Thick Hide (skinning #8196/8169)", 9501153},
    {"Gathersanity Item: Rugged Leather (skinning #8196/8170)", 9501154},
    {"Gathersanity Item: Thick Leather (skinning #8197/4304)", 9501155},
    {"Gathersanity Item: Worn Dragonscale (skinning #8197/8165)", 9501156},
    {"Gathersanity Item: Rugged Leather (skinning #8197/8170)", 9501157},
    {"Gathersanity Item: Rugged Hide (skinning #8197/8171)", 9501158},
    {"Gathersanity Item: Thick Leather (skinning #8198/4304)", 9501159},
    {"Gathersanity Item: Worn Dragonscale (skinning #8198/8165)", 9501160},
    {"Gathersanity Item: Thick Hide (skinning #8198/8169)", 9501161},
    {"Gathersanity Item: Rugged Leather (skinning #8198/8170)", 9501162},
    {"Gathersanity Item: Rugged Hide (skinning #8198/8171)", 9501163},
    {"Gathersanity Item: Heavy Leather (skinning #8211/4234)", 9501164},
    {"Gathersanity Item: Heavy Hide (skinning #8211/4235)", 9501165},
    {"Gathersanity Item: Thick Leather (skinning #8211/4304)", 9501166},
    {"Gathersanity Item: Thick Hide (skinning #8211/8169)", 9501167},
    {"Gathersanity Item: Thick Leather (skinning #8213/4304)", 9501168},
    {"Gathersanity Item: Turtle Scale (skinning #8213/8167)", 9501169},
    {"Gathersanity Item: Thick Hide (skinning #8213/8169)", 9501170},
    {"Gathersanity Item: Rugged Leather (skinning #8213/8170)", 9501171},
    {"Gathersanity Item: Shiny Fish Scales (skinning #8236/17057)", 9501172},
    {"Gathersanity Item: Thick Leather (skinning #8280/4304)", 9501173},
    {"Gathersanity Item: Thick Hide (skinning #8280/8169)", 9501174},
    {"Gathersanity Item: Thick Leather (skinning #8300/4304)", 9501175},
    {"Gathersanity Item: Rugged Leather (skinning #8300/8170)", 9501176},
    {"Gathersanity Item: Thick Leather (skinning #8301/4304)", 9501177},
    {"Gathersanity Item: Scorpid Scale (skinning #8301/8154)", 9501178},
    {"Gathersanity Item: Rugged Leather (skinning #8301/8170)", 9501179},
    {"Gathersanity Item: Heavy Scorpid Scale (skinning #8301/15408)", 9501180},
    {"Gathersanity Item: Thick Leather (skinning #8319/4304)", 9501181},
    {"Gathersanity Item: Worn Dragonscale (skinning #8319/8165)", 9501182},
    {"Gathersanity Item: Thick Hide (skinning #8319/8169)", 9501183},
    {"Gathersanity Item: Rugged Leather (skinning #8319/8170)", 9501184},
    {"Gathersanity Item: Green Dragonscale (skinning #8319/15412)", 9501185},
    {"Gathersanity Item: Thick Leather (skinning #8336/4304)", 9501186},
    {"Gathersanity Item: Thick Hide (skinning #8336/8169)", 9501187},
    {"Gathersanity Item: Rugged Leather (skinning #8336/8170)", 9501188},
    {"Gathersanity Item: Heavy Leather (skinning #8437/4234)", 9501189},
    {"Gathersanity Item: Heavy Hide (skinning #8437/4235)", 9501190},
    {"Gathersanity Item: Thick Leather (skinning #8437/4304)", 9501191},
    {"Gathersanity Item: Thick Hide (skinning #8437/8169)", 9501192},
    {"Gathersanity Item: Thick Leather (skinning #8438/4304)", 9501193},
    {"Gathersanity Item: Thick Hide (skinning #8438/8169)", 9501194},
    {"Gathersanity Item: Rugged Leather (skinning #8438/8170)", 9501195},
    {"Gathersanity Item: Thick Leather (skinning #8497/4304)", 9501196},
    {"Gathersanity Item: Worn Dragonscale (skinning #8497/8165)", 9501197},
    {"Gathersanity Item: Thick Hide (skinning #8497/8169)", 9501198},
    {"Gathersanity Item: Rugged Leather (skinning #8497/8170)", 9501199},
    {"Gathersanity Item: Green Dragonscale (skinning #8497/15412)", 9501200},
    {"Gathersanity Item: Thick Leather (skinning #8596/4304)", 9501201},
    {"Gathersanity Item: Thick Hide (skinning #8596/8169)", 9501202},
    {"Gathersanity Item: Rugged Leather (skinning #8596/8170)", 9501203},
    {"Gathersanity Item: Rugged Hide (skinning #8596/8171)", 9501204},
    {"Gathersanity Item: Thick Leather (skinning #8597/4304)", 9501205},
    {"Gathersanity Item: Thick Hide (skinning #8597/8169)", 9501206},
    {"Gathersanity Item: Rugged Leather (skinning #8597/8170)", 9501207},
    {"Gathersanity Item: Rugged Hide (skinning #8597/8171)", 9501208},
    {"Gathersanity Item: Thick Leather (skinning #8598/4304)", 9501209},
    {"Gathersanity Item: Rugged Leather (skinning #8598/8170)", 9501210},
    {"Gathersanity Item: Rugged Hide (skinning #8598/8171)", 9501211},
    {"Gathersanity Item: Thick Leather (skinning #8600/4304)", 9501212},
    {"Gathersanity Item: Thick Hide (skinning #8600/8169)", 9501213},
    {"Gathersanity Item: Rugged Leather (skinning #8600/8170)", 9501214},
    {"Gathersanity Item: Rugged Hide (skinning #8600/8171)", 9501215},
    {"Gathersanity Item: Thick Leather (skinning #8601/4304)", 9501216},
    {"Gathersanity Item: Thick Hide (skinning #8601/8169)", 9501217},
    {"Gathersanity Item: Rugged Leather (skinning #8601/8170)", 9501218},
    {"Gathersanity Item: Rugged Hide (skinning #8601/8171)", 9501219},
    {"Gathersanity Item: Thick Leather (skinning #8602/4304)", 9501220},
    {"Gathersanity Item: Rugged Leather (skinning #8602/8170)", 9501221},
    {"Gathersanity Item: Rugged Hide (skinning #8602/8171)", 9501222},
    {"Gathersanity Item: Thick Leather (skinning #8660/4304)", 9501223},
    {"Gathersanity Item: Rugged Leather (skinning #8660/8170)", 9501224},
    {"Gathersanity Item: Thick Leather (skinning #8675/4304)", 9501225},
    {"Gathersanity Item: Thick Hide (skinning #8675/8169)", 9501226},
    {"Gathersanity Item: Rugged Leather (skinning #8675/8170)", 9501227},
    {"Gathersanity Item: Rugged Leather (skinning #8718/8170)", 9501228},
    {"Gathersanity Item: Rugged Hide (skinning #8718/8171)", 9501229},
    {"Gathersanity Item: Thick Leather (skinning #8759/4304)", 9501230},
    {"Gathersanity Item: Thick Hide (skinning #8759/8169)", 9501231},
    {"Gathersanity Item: Rugged Leather (skinning #8759/8170)", 9501232},
    {"Gathersanity Item: Thick Leather (skinning #8760/4304)", 9501233},
    {"Gathersanity Item: Thick Hide (skinning #8760/8169)", 9501234},
    {"Gathersanity Item: Rugged Leather (skinning #8760/8170)", 9501235},
    {"Gathersanity Item: Thick Leather (skinning #8761/4304)", 9501236},
    {"Gathersanity Item: Thick Hide (skinning #8761/8169)", 9501237},
    {"Gathersanity Item: Rugged Leather (skinning #8761/8170)", 9501238},
    {"Gathersanity Item: Rugged Hide (skinning #8761/8171)", 9501239},
    {"Gathersanity Item: Thick Leather (skinning #8763/4304)", 9501240},
    {"Gathersanity Item: Thick Hide (skinning #8763/8169)", 9501241},
    {"Gathersanity Item: Rugged Leather (skinning #8763/8170)", 9501242},
    {"Gathersanity Item: Rugged Hide (skinning #8763/8171)", 9501243},
    {"Gathersanity Item: Thick Leather (skinning #8764/4304)", 9501244},
    {"Gathersanity Item: Thick Hide (skinning #8764/8169)", 9501245},
    {"Gathersanity Item: Rugged Leather (skinning #8764/8170)", 9501246},
    {"Gathersanity Item: Rugged Hide (skinning #8764/8171)", 9501247},
    {"Gathersanity Item: Thick Leather (skinning #8921/4304)", 9501248},
    {"Gathersanity Item: Thick Hide (skinning #8921/8169)", 9501249},
    {"Gathersanity Item: Rugged Leather (skinning #8921/8170)", 9501250},
    {"Gathersanity Item: Thick Leather (skinning #8922/4304)", 9501251},
    {"Gathersanity Item: Thick Hide (skinning #8922/8169)", 9501252},
    {"Gathersanity Item: Rugged Leather (skinning #8922/8170)", 9501253},
    {"Gathersanity Item: Rugged Hide (skinning #8922/8171)", 9501254},
    {"Gathersanity Item: Thick Leather (skinning #8926/4304)", 9501255},
    {"Gathersanity Item: Scorpid Scale (skinning #8926/8154)", 9501256},
    {"Gathersanity Item: Thick Hide (skinning #8926/8169)", 9501257},
    {"Gathersanity Item: Rugged Leather (skinning #8926/8170)", 9501258},
    {"Gathersanity Item: Thick Leather (skinning #8927/4304)", 9501259},
    {"Gathersanity Item: Thick Hide (skinning #8927/8169)", 9501260},
    {"Gathersanity Item: Rugged Leather (skinning #8927/8170)", 9501261},
    {"Gathersanity Item: Thick Leather (skinning #8928/4304)", 9501262},
    {"Gathersanity Item: Thick Hide (skinning #8928/8169)", 9501263},
    {"Gathersanity Item: Rugged Leather (skinning #8928/8170)", 9501264},
    {"Gathersanity Item: Thick Leather (skinning #8956/4304)", 9501265},
    {"Gathersanity Item: Thick Hide (skinning #8956/8169)", 9501266},
    {"Gathersanity Item: Rugged Leather (skinning #8956/8170)", 9501267},
    {"Gathersanity Item: Rugged Hide (skinning #8956/8171)", 9501268},
    {"Gathersanity Item: Patch of Tainted Skin (skinning #8956/11512)", 9501269},
    {"Gathersanity Item: Thick Leather (skinning #8957/4304)", 9501270},
    {"Gathersanity Item: Thick Hide (skinning #8957/8169)", 9501271},
    {"Gathersanity Item: Rugged Leather (skinning #8957/8170)", 9501272},
    {"Gathersanity Item: Rugged Hide (skinning #8957/8171)", 9501273},
    {"Gathersanity Item: Patch of Tainted Skin (skinning #8957/11512)", 9501274},
    {"Gathersanity Item: Warbear Leather (skinning #8957/15419)", 9501275},
    {"Gathersanity Item: Thick Leather (skinning #8958/4304)", 9501276},
    {"Gathersanity Item: Thick Hide (skinning #8958/8169)", 9501277},
    {"Gathersanity Item: Rugged Leather (skinning #8958/8170)", 9501278},
    {"Gathersanity Item: Rugged Hide (skinning #8958/8171)", 9501279},
    {"Gathersanity Item: Patch of Tainted Skin (skinning #8958/11512)", 9501280},
    {"Gathersanity Item: Thick Leather (skinning #8959/4304)", 9501281},
    {"Gathersanity Item: Thick Hide (skinning #8959/8169)", 9501282},
    {"Gathersanity Item: Rugged Leather (skinning #8959/8170)", 9501283},
    {"Gathersanity Item: Rugged Hide (skinning #8959/8171)", 9501284},
    {"Gathersanity Item: Patch of Tainted Skin (skinning #8959/11512)", 9501285},
    {"Gathersanity Item: Thick Leather (skinning #8960/4304)", 9501286},
    {"Gathersanity Item: Thick Hide (skinning #8960/8169)", 9501287},
    {"Gathersanity Item: Rugged Leather (skinning #8960/8170)", 9501288},
    {"Gathersanity Item: Rugged Hide (skinning #8960/8171)", 9501289},
    {"Gathersanity Item: Patch of Tainted Skin (skinning #8960/11512)", 9501290},
    {"Gathersanity Item: Thick Leather (skinning #8961/4304)", 9501291},
    {"Gathersanity Item: Thick Hide (skinning #8961/8169)", 9501292},
    {"Gathersanity Item: Rugged Leather (skinning #8961/8170)", 9501293},
    {"Gathersanity Item: Rugged Hide (skinning #8961/8171)", 9501294},
    {"Gathersanity Item: Patch of Tainted Skin (skinning #8961/11512)", 9501295},
    {"Gathersanity Item: Thick Leather (skinning #9029/4304)", 9501296},
    {"Gathersanity Item: Thick Hide (skinning #9029/8169)", 9501297},
    {"Gathersanity Item: Rugged Leather (skinning #9029/8170)", 9501298},
    {"Gathersanity Item: Thick Leather (skinning #9042/4304)", 9501299},
    {"Gathersanity Item: Thick Hide (skinning #9042/8169)", 9501300},
    {"Gathersanity Item: Rugged Leather (skinning #9042/8170)", 9501301},
    {"Gathersanity Item: Rugged Hide (skinning #9042/8171)", 9501302},
    {"Gathersanity Item: Thick Leather (skinning #9096/4304)", 9501303},
    {"Gathersanity Item: Worn Dragonscale (skinning #9096/8165)", 9501304},
    {"Gathersanity Item: Rugged Leather (skinning #9096/8170)", 9501305},
    {"Gathersanity Item: Rugged Hide (skinning #9096/8171)", 9501306},
    {"Gathersanity Item: Black Dragonscale (skinning #9096/15416)", 9501307},
    {"Gathersanity Item: Thick Leather (skinning #9162/4304)", 9501308},
    {"Gathersanity Item: Thick Hide (skinning #9162/8169)", 9501309},
    {"Gathersanity Item: Rugged Leather (skinning #9162/8170)", 9501310},
    {"Gathersanity Item: Thick Leather (skinning #9163/4304)", 9501311},
    {"Gathersanity Item: Thick Hide (skinning #9163/8169)", 9501312},
    {"Gathersanity Item: Rugged Leather (skinning #9163/8170)", 9501313},
    {"Gathersanity Item: Rugged Hide (skinning #9163/8171)", 9501314},
    {"Gathersanity Item: Thick Leather (skinning #9164/4304)", 9501315},
    {"Gathersanity Item: Thick Hide (skinning #9164/8169)", 9501316},
    {"Gathersanity Item: Rugged Leather (skinning #9164/8170)", 9501317},
    {"Gathersanity Item: Rugged Hide (skinning #9164/8171)", 9501318},
    {"Gathersanity Item: Thick Leather (skinning #9165/4304)", 9501319},
    {"Gathersanity Item: Thick Hide (skinning #9165/8169)", 9501320},
    {"Gathersanity Item: Rugged Leather (skinning #9165/8170)", 9501321},
    {"Gathersanity Item: Thick Leather (skinning #9166/4304)", 9501322},
    {"Gathersanity Item: Thick Hide (skinning #9166/8169)", 9501323},
    {"Gathersanity Item: Rugged Leather (skinning #9166/8170)", 9501324},
    {"Gathersanity Item: Thick Leather (skinning #9167/4304)", 9501325},
    {"Gathersanity Item: Thick Hide (skinning #9167/8169)", 9501326},
    {"Gathersanity Item: Rugged Leather (skinning #9167/8170)", 9501327},
    {"Gathersanity Item: Rugged Hide (skinning #9167/8171)", 9501328},
    {"Gathersanity Item: Thick Leather (skinning #9318/4304)", 9501329},
    {"Gathersanity Item: Thick Hide (skinning #9318/8169)", 9501330},
    {"Gathersanity Item: Rugged Leather (skinning #9318/8170)", 9501331},
    {"Gathersanity Item: Thick Leather (skinning #9416/4304)", 9501332},
    {"Gathersanity Item: Thick Hide (skinning #9416/8169)", 9501333},
    {"Gathersanity Item: Rugged Leather (skinning #9416/8170)", 9501334},
    {"Gathersanity Item: Rugged Hide (skinning #9416/8171)", 9501335},
    {"Gathersanity Item: Thick Leather (skinning #9461/4304)", 9501336},
    {"Gathersanity Item: Worn Dragonscale (skinning #9461/8165)", 9501337},
    {"Gathersanity Item: Thick Hide (skinning #9461/8169)", 9501338},
    {"Gathersanity Item: Rugged Leather (skinning #9461/8170)", 9501339},
    {"Gathersanity Item: Rugged Hide (skinning #9461/8171)", 9501340},
    {"Gathersanity Item: Black Dragonscale (skinning #9461/15416)", 9501341},
    {"Gathersanity Item: Thick Leather (skinning #9568/4304)", 9501342},
    {"Gathersanity Item: Worn Dragonscale (skinning #9568/8165)", 9501343},
    {"Gathersanity Item: Rugged Leather (skinning #9568/8170)", 9501344},
    {"Gathersanity Item: Rugged Hide (skinning #9568/8171)", 9501345},
    {"Gathersanity Item: Black Dragonscale (skinning #9568/15416)", 9501346},
    {"Gathersanity Item: Thick Leather (skinning #9622/4304)", 9501347},
    {"Gathersanity Item: Thick Hide (skinning #9622/8169)", 9501348},
    {"Gathersanity Item: Rugged Leather (skinning #9622/8170)", 9501349},
    {"Gathersanity Item: Rugged Hide (skinning #9622/8171)", 9501350},
    {"Gathersanity Item: Thick Leather (skinning #9683/4304)", 9501351},
    {"Gathersanity Item: Thick Hide (skinning #9683/8169)", 9501352},
    {"Gathersanity Item: Rugged Leather (skinning #9683/8170)", 9501353},
    {"Gathersanity Item: Thick Leather (skinning #9684/4304)", 9501354},
    {"Gathersanity Item: Rugged Leather (skinning #9684/8170)", 9501355},
    {"Gathersanity Item: Rugged Hide (skinning #9684/8171)", 9501356},
    {"Gathersanity Item: Thick Leather (skinning #9690/4304)", 9501357},
    {"Gathersanity Item: Thick Hide (skinning #9690/8169)", 9501358},
    {"Gathersanity Item: Rugged Leather (skinning #9690/8170)", 9501359},
    {"Gathersanity Item: Rugged Hide (skinning #9690/8171)", 9501360},
    {"Gathersanity Item: Thick Leather (skinning #9691/4304)", 9501361},
    {"Gathersanity Item: Scorpid Scale (skinning #9691/8154)", 9501362},
    {"Gathersanity Item: Thick Hide (skinning #9691/8169)", 9501363},
    {"Gathersanity Item: Rugged Leather (skinning #9691/8170)", 9501364},
    {"Gathersanity Item: Rugged Hide (skinning #9691/8171)", 9501365},
    {"Gathersanity Item: Heavy Scorpid Scale (skinning #9691/15408)", 9501366},
    {"Gathersanity Item: Thick Leather (skinning #9694/4304)", 9501367},
    {"Gathersanity Item: Thick Hide (skinning #9694/8169)", 9501368},
    {"Gathersanity Item: Rugged Leather (skinning #9694/8170)", 9501369},
    {"Gathersanity Item: Rugged Hide (skinning #9694/8171)", 9501370},
    {"Gathersanity Item: Thick Leather (skinning #9695/4304)", 9501371},
    {"Gathersanity Item: Scorpid Scale (skinning #9695/8154)", 9501372},
    {"Gathersanity Item: Thick Hide (skinning #9695/8169)", 9501373},
    {"Gathersanity Item: Rugged Leather (skinning #9695/8170)", 9501374},
    {"Gathersanity Item: Rugged Hide (skinning #9695/8171)", 9501375},
    {"Gathersanity Item: Heavy Scorpid Scale (skinning #9695/15408)", 9501376},
    {"Gathersanity Item: Thick Leather (skinning #9696/4304)", 9501377},
    {"Gathersanity Item: Rugged Leather (skinning #9696/8170)", 9501378},
    {"Gathersanity Item: Rugged Hide (skinning #9696/8171)", 9501379},
    {"Gathersanity Item: Thick Leather (skinning #9697/4304)", 9501380},
    {"Gathersanity Item: Thick Hide (skinning #9697/8169)", 9501381},
    {"Gathersanity Item: Rugged Leather (skinning #9697/8170)", 9501382},
    {"Gathersanity Item: Rugged Hide (skinning #9697/8171)", 9501383},
    {"Gathersanity Item: Thick Leather (skinning #9698/4304)", 9501384},
    {"Gathersanity Item: Thick Hide (skinning #9698/8169)", 9501385},
    {"Gathersanity Item: Rugged Leather (skinning #9698/8170)", 9501386},
    {"Gathersanity Item: Heavy Scorpid Scale (skinning #9698/15408)", 9501387},
    {"Gathersanity Item: Thick Leather (skinning #9701/4304)", 9501388},
    {"Gathersanity Item: Thick Hide (skinning #9701/8169)", 9501389},
    {"Gathersanity Item: Rugged Leather (skinning #9701/8170)", 9501390},
    {"Gathersanity Item: Heavy Scorpid Scale (skinning #9701/15408)", 9501391},
    {"Gathersanity Item: Thick Leather (skinning #10083/4304)", 9501392},
    {"Gathersanity Item: Worn Dragonscale (skinning #10083/8165)", 9501393},
    {"Gathersanity Item: Rugged Leather (skinning #10083/8170)", 9501394},
    {"Gathersanity Item: Rugged Hide (skinning #10083/8171)", 9501395},
    {"Gathersanity Item: Black Dragonscale (skinning #10083/15416)", 9501396},
    {"Gathersanity Item: Thick Leather (skinning #10147/4304)", 9501397},
    {"Gathersanity Item: Thick Hide (skinning #10147/8169)", 9501398},
    {"Gathersanity Item: Rugged Leather (skinning #10147/8170)", 9501399},
    {"Gathersanity Item: Rugged Hide (skinning #10147/8171)", 9501400},
    {"Gathersanity Item: Patch of Tainted Skin (skinning #10147/11512)", 9501401},
    {"Gathersanity Item: Thick Leather (skinning #10150/4304)", 9501402},
    {"Gathersanity Item: Thick Hide (skinning #10150/8169)", 9501403},
    {"Gathersanity Item: Rugged Leather (skinning #10150/8170)", 9501404},
    {"Gathersanity Item: Thick Leather (skinning #10156/4304)", 9501405},
    {"Gathersanity Item: Rugged Leather (skinning #10156/8170)", 9501406},
    {"Gathersanity Item: Rugged Hide (skinning #10156/8171)", 9501407},
    {"Gathersanity Item: Scale of Onyxia (skinning #10184/15410)", 9501408},
    {"Gathersanity Item: Worn Dragonscale (skinning #10196/8165)", 9501409},
    {"Gathersanity Item: Rugged Leather (skinning #10196/8170)", 9501410},
    {"Gathersanity Item: Blue Dragonscale (skinning #10196/15415)", 9501411},
    {"Gathersanity Item: Thick Leather (skinning #10197/4304)", 9501412},
    {"Gathersanity Item: Thick Hide (skinning #10197/8169)", 9501413},
    {"Gathersanity Item: Rugged Leather (skinning #10197/8170)", 9501414},
    {"Gathersanity Item: Rugged Hide (skinning #10197/8171)", 9501415},
    {"Gathersanity Item: Thick Leather (skinning #10200/4304)", 9501416},
    {"Gathersanity Item: Rugged Leather (skinning #10200/8170)", 9501417},
    {"Gathersanity Item: Rugged Hide (skinning #10200/8171)", 9501418},
    {"Gathersanity Item: Thick Leather (skinning #10202/4304)", 9501419},
    {"Gathersanity Item: Worn Dragonscale (skinning #10202/8165)", 9501420},
    {"Gathersanity Item: Rugged Leather (skinning #10202/8170)", 9501421},
    {"Gathersanity Item: Blue Dragonscale (skinning #10202/15415)", 9501422},
    {"Gathersanity Item: Rugged Leather (skinning #10220/8170)", 9501423},
    {"Gathersanity Item: Rugged Hide (skinning #10220/8171)", 9501424},
    {"Gathersanity Item: Thick Leather (skinning #10221/4304)", 9501425},
    {"Gathersanity Item: Thick Hide (skinning #10221/8169)", 9501426},
    {"Gathersanity Item: Rugged Leather (skinning #10221/8170)", 9501427},
    {"Gathersanity Item: Rugged Hide (skinning #10221/8171)", 9501428},
    {"Gathersanity Item: Thick Leather (skinning #10257/4304)", 9501429},
    {"Gathersanity Item: Rugged Leather (skinning #10257/8170)", 9501430},
    {"Gathersanity Item: Rugged Hide (skinning #10257/8171)", 9501431},
    {"Gathersanity Item: Primal Tiger Leather (skinning #10257/19768)", 9501432},
    {"Gathersanity Item: Thick Leather (skinning #10258/4304)", 9501433},
    {"Gathersanity Item: Worn Dragonscale (skinning #10258/8165)", 9501434},
    {"Gathersanity Item: Rugged Leather (skinning #10258/8170)", 9501435},
    {"Gathersanity Item: Rugged Hide (skinning #10258/8171)", 9501436},
    {"Gathersanity Item: Black Dragonscale (skinning #10258/15416)", 9501437},
    {"Gathersanity Item: Thick Leather (skinning #10264/4304)", 9501438},
    {"Gathersanity Item: Worn Dragonscale (skinning #10264/8165)", 9501439},
    {"Gathersanity Item: Rugged Leather (skinning #10264/8170)", 9501440},
    {"Gathersanity Item: Rugged Hide (skinning #10264/8171)", 9501441},
    {"Gathersanity Item: Black Dragonscale (skinning #10264/15416)", 9501442},
    {"Gathersanity Item: Rugged Leather (skinning #10268/8170)", 9501443},
    {"Gathersanity Item: Rugged Hide (skinning #10268/8171)", 9501444},
    {"Gathersanity Item: Thick Leather (skinning #10321/4304)", 9501445},
    {"Gathersanity Item: Worn Dragonscale (skinning #10321/8165)", 9501446},
    {"Gathersanity Item: Rugged Leather (skinning #10321/8170)", 9501447},
    {"Gathersanity Item: Rugged Hide (skinning #10321/8171)", 9501448},
    {"Gathersanity Item: Black Dragonscale (skinning #10321/15416)", 9501449},
    {"Gathersanity Item: Rugged Leather (skinning #10339/8170)", 9501450},
    {"Gathersanity Item: Green Dragonscale (skinning #10339/15412)", 9501451},
    {"Gathersanity Item: Red Dragonscale (skinning #10339/15414)", 9501452},
    {"Gathersanity Item: Blue Dragonscale (skinning #10339/15415)", 9501453},
    {"Gathersanity Item: Black Dragonscale (skinning #10339/15416)", 9501454},
    {"Gathersanity Item: Thick Leather (skinning #10363/4304)", 9501455},
    {"Gathersanity Item: Worn Dragonscale (skinning #10363/8165)", 9501456},
    {"Gathersanity Item: Rugged Leather (skinning #10363/8170)", 9501457},
    {"Gathersanity Item: Rugged Hide (skinning #10363/8171)", 9501458},
    {"Gathersanity Item: Black Dragonscale (skinning #10363/15416)", 9501459},
    {"Gathersanity Item: Thick Leather (skinning #10366/4304)", 9501460},
    {"Gathersanity Item: Worn Dragonscale (skinning #10366/8165)", 9501461},
    {"Gathersanity Item: Rugged Leather (skinning #10366/8170)", 9501462},
    {"Gathersanity Item: Rugged Hide (skinning #10366/8171)", 9501463},
    {"Gathersanity Item: Black Dragonscale (skinning #10366/15416)", 9501464},
    {"Gathersanity Item: Thick Leather (skinning #10371/4304)", 9501465},
    {"Gathersanity Item: Worn Dragonscale (skinning #10371/8165)", 9501466},
    {"Gathersanity Item: Rugged Leather (skinning #10371/8170)", 9501467},
    {"Gathersanity Item: Rugged Hide (skinning #10371/8171)", 9501468},
    {"Gathersanity Item: Black Dragonscale (skinning #10371/15416)", 9501469},
    {"Gathersanity Item: Thick Leather (skinning #10372/4304)", 9501470},
    {"Gathersanity Item: Worn Dragonscale (skinning #10372/8165)", 9501471},
    {"Gathersanity Item: Rugged Leather (skinning #10372/8170)", 9501472},
    {"Gathersanity Item: Rugged Hide (skinning #10372/8171)", 9501473},
    {"Gathersanity Item: Black Dragonscale (skinning #10372/15416)", 9501474},
    {"Gathersanity Item: Rugged Leather (skinning #10430/8170)", 9501475},
    {"Gathersanity Item: Rugged Hide (skinning #10430/8171)", 9501476},
    {"Gathersanity Item: Pristine Hide of the Beast (skinning #10430/12731)", 9501477},
    {"Gathersanity Item: Thick Leather (skinning #10442/4304)", 9501478},
    {"Gathersanity Item: Rugged Leather (skinning #10442/8170)", 9501479},
    {"Gathersanity Item: Rugged Hide (skinning #10442/8171)", 9501480},
    {"Gathersanity Item: Green Dragonscale (skinning #10442/15412)", 9501481},
    {"Gathersanity Item: Red Dragonscale (skinning #10442/15414)", 9501482},
    {"Gathersanity Item: Blue Dragonscale (skinning #10442/15415)", 9501483},
    {"Gathersanity Item: Black Dragonscale (skinning #10442/15416)", 9501484},
    {"Gathersanity Item: Thick Leather (skinning #10447/4304)", 9501485},
    {"Gathersanity Item: Worn Dragonscale (skinning #10447/8165)", 9501486},
    {"Gathersanity Item: Rugged Leather (skinning #10447/8170)", 9501487},
    {"Gathersanity Item: Rugged Hide (skinning #10447/8171)", 9501488},
    {"Gathersanity Item: Green Dragonscale (skinning #10447/15412)", 9501489},
    {"Gathersanity Item: Red Dragonscale (skinning #10447/15414)", 9501490},
    {"Gathersanity Item: Blue Dragonscale (skinning #10447/15415)", 9501491},
    {"Gathersanity Item: Black Dragonscale (skinning #10447/15416)", 9501492},
    {"Gathersanity Item: Thick Leather (skinning #10659/4304)", 9501493},
    {"Gathersanity Item: Worn Dragonscale (skinning #10659/8165)", 9501494},
    {"Gathersanity Item: Thick Hide (skinning #10659/8169)", 9501495},
    {"Gathersanity Item: Rugged Leather (skinning #10659/8170)", 9501496},
    {"Gathersanity Item: Rugged Hide (skinning #10659/8171)", 9501497},
    {"Gathersanity Item: Blue Dragonscale (skinning #10659/15415)", 9501498},
    {"Gathersanity Item: Thick Leather (skinning #10660/4304)", 9501499},
    {"Gathersanity Item: Worn Dragonscale (skinning #10660/8165)", 9501500},
    {"Gathersanity Item: Thick Hide (skinning #10660/8169)", 9501501},
    {"Gathersanity Item: Rugged Leather (skinning #10660/8170)", 9501502},
    {"Gathersanity Item: Rugged Hide (skinning #10660/8171)", 9501503},
    {"Gathersanity Item: Blue Dragonscale (skinning #10660/15415)", 9501504},
    {"Gathersanity Item: Thick Leather (skinning #10661/4304)", 9501505},
    {"Gathersanity Item: Worn Dragonscale (skinning #10661/8165)", 9501506},
    {"Gathersanity Item: Thick Hide (skinning #10661/8169)", 9501507},
    {"Gathersanity Item: Rugged Leather (skinning #10661/8170)", 9501508},
    {"Gathersanity Item: Rugged Hide (skinning #10661/8171)", 9501509},
    {"Gathersanity Item: Blue Dragonscale (skinning #10661/15415)", 9501510},
    {"Gathersanity Item: Thick Leather (skinning #10662/4304)", 9501511},
    {"Gathersanity Item: Worn Dragonscale (skinning #10662/8165)", 9501512},
    {"Gathersanity Item: Rugged Leather (skinning #10662/8170)", 9501513},
    {"Gathersanity Item: Blue Dragonscale (skinning #10662/15415)", 9501514},
    {"Gathersanity Item: Thick Leather (skinning #10663/4304)", 9501515},
    {"Gathersanity Item: Worn Dragonscale (skinning #10663/8165)", 9501516},
    {"Gathersanity Item: Rugged Leather (skinning #10663/8170)", 9501517},
    {"Gathersanity Item: Rugged Hide (skinning #10663/8171)", 9501518},
    {"Gathersanity Item: Blue Dragonscale (skinning #10663/15415)", 9501519},
    {"Gathersanity Item: Thick Leather (skinning #10664/4304)", 9501520},
    {"Gathersanity Item: Worn Dragonscale (skinning #10664/8165)", 9501521},
    {"Gathersanity Item: Rugged Leather (skinning #10664/8170)", 9501522},
    {"Gathersanity Item: Rugged Hide (skinning #10664/8171)", 9501523},
    {"Gathersanity Item: Blue Dragonscale (skinning #10664/15415)", 9501524},
    {"Gathersanity Item: Thick Leather (skinning #10678/4304)", 9501525},
    {"Gathersanity Item: Worn Dragonscale (skinning #10678/8165)", 9501526},
    {"Gathersanity Item: Rugged Leather (skinning #10678/8170)", 9501527},
    {"Gathersanity Item: Rugged Hide (skinning #10678/8171)", 9501528},
    {"Gathersanity Item: Thick Leather (skinning #10683/4304)", 9501529},
    {"Gathersanity Item: Worn Dragonscale (skinning #10683/8165)", 9501530},
    {"Gathersanity Item: Rugged Leather (skinning #10683/8170)", 9501531},
    {"Gathersanity Item: Rugged Hide (skinning #10683/8171)", 9501532},
    {"Gathersanity Item: Black Dragonscale (skinning #10683/15416)", 9501533},
    {"Gathersanity Item: Thick Leather (skinning #10737/4304)", 9501534},
    {"Gathersanity Item: Rugged Leather (skinning #10737/8170)", 9501535},
    {"Gathersanity Item: Rugged Hide (skinning #10737/8171)", 9501536},
    {"Gathersanity Item: Thick Leather (skinning #10741/4304)", 9501537},
    {"Gathersanity Item: Rugged Leather (skinning #10741/8170)", 9501538},
    {"Gathersanity Item: Rugged Hide (skinning #10741/8171)", 9501539},
    {"Gathersanity Item: Thick Leather (skinning #10806/4304)", 9501540},
    {"Gathersanity Item: Rugged Leather (skinning #10806/8170)", 9501541},
    {"Gathersanity Item: Rugged Hide (skinning #10806/8171)", 9501542},
    {"Gathersanity Item: Warbear Leather (skinning #10806/15419)", 9501543},
    {"Gathersanity Item: Thick Leather (skinning #10807/4304)", 9501544},
    {"Gathersanity Item: Rugged Leather (skinning #10807/8170)", 9501545},
    {"Gathersanity Item: Rugged Hide (skinning #10807/8171)", 9501546},
    {"Gathersanity Item: Thick Leather (skinning #10814/4304)", 9501547},
    {"Gathersanity Item: Worn Dragonscale (skinning #10814/8165)", 9501548},
    {"Gathersanity Item: Rugged Leather (skinning #10814/8170)", 9501549},
    {"Gathersanity Item: Rugged Hide (skinning #10814/8171)", 9501550},
    {"Gathersanity Item: Green Dragonscale (skinning #10814/15412)", 9501551},
    {"Gathersanity Item: Red Dragonscale (skinning #10814/15414)", 9501552},
    {"Gathersanity Item: Blue Dragonscale (skinning #10814/15415)", 9501553},
    {"Gathersanity Item: Black Dragonscale (skinning #10814/15416)", 9501554},
    {"Gathersanity Item: Thick Leather (skinning #10981/4304)", 9501555},
    {"Gathersanity Item: Thick Hide (skinning #10981/8169)", 9501556},
    {"Gathersanity Item: Rugged Leather (skinning #10981/8170)", 9501557},
    {"Gathersanity Item: Thick Leather (skinning #10990/4304)", 9501558},
    {"Gathersanity Item: Thick Hide (skinning #10990/8169)", 9501559},
    {"Gathersanity Item: Rugged Leather (skinning #10990/8170)", 9501560},
    {"Gathersanity Item: Thick Leather (skinning #11357/4304)", 9501561},
    {"Gathersanity Item: Rugged Leather (skinning #11357/8170)", 9501562},
    {"Gathersanity Item: Rugged Hide (skinning #11357/8171)", 9501563},
    {"Gathersanity Item: Rugged Leather (skinning #11359/8170)", 9501564},
    {"Gathersanity Item: Rugged Hide (skinning #11359/8171)", 9501565},
    {"Gathersanity Item: Thick Leather (skinning #11360/4304)", 9501566},
    {"Gathersanity Item: Rugged Leather (skinning #11360/8170)", 9501567},
    {"Gathersanity Item: Rugged Hide (skinning #11360/8171)", 9501568},
    {"Gathersanity Item: Primal Tiger Leather (skinning #11360/19768)", 9501569},
    {"Gathersanity Item: Thick Leather (skinning #11361/4304)", 9501570},
    {"Gathersanity Item: Rugged Leather (skinning #11361/8170)", 9501571},
    {"Gathersanity Item: Rugged Hide (skinning #11361/8171)", 9501572},
    {"Gathersanity Item: Primal Tiger Leather (skinning #11361/19768)", 9501573},
    {"Gathersanity Item: Thick Leather (skinning #11365/4304)", 9501574},
    {"Gathersanity Item: Rugged Leather (skinning #11365/8170)", 9501575},
    {"Gathersanity Item: Rugged Hide (skinning #11365/8171)", 9501576},
    {"Gathersanity Item: Thick Leather (skinning #11368/4304)", 9501577},
    {"Gathersanity Item: Rugged Leather (skinning #11368/8170)", 9501578},
    {"Gathersanity Item: Rugged Hide (skinning #11368/8171)", 9501579},
    {"Gathersanity Item: Primal Bat Leather (skinning #11368/19767)", 9501580},
    {"Gathersanity Item: Thick Leather (skinning #11371/4304)", 9501581},
    {"Gathersanity Item: Rugged Leather (skinning #11371/8170)", 9501582},
    {"Gathersanity Item: Rugged Hide (skinning #11371/8171)", 9501583},
    {"Gathersanity Item: Thick Leather (skinning #11372/4304)", 9501584},
    {"Gathersanity Item: Rugged Leather (skinning #11372/8170)", 9501585},
    {"Gathersanity Item: Rugged Hide (skinning #11372/8171)", 9501586},
    {"Gathersanity Item: Thick Leather (skinning #11373/4304)", 9501587},
    {"Gathersanity Item: Rugged Leather (skinning #11373/8170)", 9501588},
    {"Gathersanity Item: Rugged Hide (skinning #11373/8171)", 9501589},
    {"Gathersanity Item: Rugged Leather (skinning #11496/8170)", 9501590},
    {"Gathersanity Item: Thick Leather (skinning #11497/4304)", 9501591},
    {"Gathersanity Item: Rugged Leather (skinning #11497/8170)", 9501592},
    {"Gathersanity Item: Rugged Hide (skinning #11497/8171)", 9501593},
    {"Gathersanity Item: Black Dragonscale (skinning #11583/15416)", 9501594},
    {"Gathersanity Item: Core Leather (skinning #11673/17012)", 9501595},
    {"Gathersanity Item: Silithid Chitin (skinning #11698/20498)", 9501596},
    {"Gathersanity Item: Broken Silithid Chitin (skinning #11698/20499)", 9501597},
    {"Gathersanity Item: Light Silithid Carapace (skinning #11698/20500)", 9501598},
    {"Gathersanity Item: Silithid Chitin (skinning #11721/20498)", 9501599},
    {"Gathersanity Item: Broken Silithid Chitin (skinning #11721/20499)", 9501600},
    {"Gathersanity Item: Silithid Chitin (skinning #11722/20498)", 9501601},
    {"Gathersanity Item: Broken Silithid Chitin (skinning #11722/20499)", 9501602},
    {"Gathersanity Item: Silithid Chitin (skinning #11723/20498)", 9501603},
    {"Gathersanity Item: Broken Silithid Chitin (skinning #11723/20499)", 9501604},
    {"Gathersanity Item: Heavy Silithid Carapace (skinning #11723/20501)", 9501605},
    {"Gathersanity Item: Silithid Chitin (skinning #11724/20498)", 9501606},
    {"Gathersanity Item: Broken Silithid Chitin (skinning #11724/20499)", 9501607},
    {"Gathersanity Item: Light Silithid Carapace (skinning #11724/20500)", 9501608},
    {"Gathersanity Item: Silithid Chitin (skinning #11725/20498)", 9501609},
    {"Gathersanity Item: Broken Silithid Chitin (skinning #11725/20499)", 9501610},
    {"Gathersanity Item: Silithid Chitin (skinning #11726/20498)", 9501611},
    {"Gathersanity Item: Broken Silithid Chitin (skinning #11726/20499)", 9501612},
    {"Gathersanity Item: Silithid Chitin (skinning #11727/20498)", 9501613},
    {"Gathersanity Item: Broken Silithid Chitin (skinning #11727/20499)", 9501614},
    {"Gathersanity Item: Light Silithid Carapace (skinning #11727/20500)", 9501615},
    {"Gathersanity Item: Silithid Chitin (skinning #11728/20498)", 9501616},
    {"Gathersanity Item: Broken Silithid Chitin (skinning #11728/20499)", 9501617},
    {"Gathersanity Item: Heavy Silithid Carapace (skinning #11728/20501)", 9501618},
    {"Gathersanity Item: Silithid Chitin (skinning #11729/20498)", 9501619},
    {"Gathersanity Item: Broken Silithid Chitin (skinning #11729/20499)", 9501620},
    {"Gathersanity Item: Silithid Chitin (skinning #11730/20498)", 9501621},
    {"Gathersanity Item: Broken Silithid Chitin (skinning #11730/20499)", 9501622},
    {"Gathersanity Item: Heavy Silithid Carapace (skinning #11730/20501)", 9501623},
    {"Gathersanity Item: Silithid Chitin (skinning #11731/20498)", 9501624},
    {"Gathersanity Item: Broken Silithid Chitin (skinning #11731/20499)", 9501625},
    {"Gathersanity Item: Silithid Chitin (skinning #11732/20498)", 9501626},
    {"Gathersanity Item: Broken Silithid Chitin (skinning #11732/20499)", 9501627},
    {"Gathersanity Item: Light Silithid Carapace (skinning #11732/20500)", 9501628},
    {"Gathersanity Item: Silithid Chitin (skinning #11733/20498)", 9501629},
    {"Gathersanity Item: Broken Silithid Chitin (skinning #11733/20499)", 9501630},
    {"Gathersanity Item: Silithid Chitin (skinning #11734/20498)", 9501631},
    {"Gathersanity Item: Broken Silithid Chitin (skinning #11734/20499)", 9501632},
    {"Gathersanity Item: Heavy Silithid Carapace (skinning #11734/20501)", 9501633},
    {"Gathersanity Item: Thick Leather (skinning #11735/4304)", 9501634},
    {"Gathersanity Item: Thick Hide (skinning #11735/8169)", 9501635},
    {"Gathersanity Item: Rugged Leather (skinning #11735/8170)", 9501636},
    {"Gathersanity Item: Heavy Scorpid Scale (skinning #11735/15408)", 9501637},
    {"Gathersanity Item: Thick Leather (skinning #11736/4304)", 9501638},
    {"Gathersanity Item: Thick Hide (skinning #11736/8169)", 9501639},
    {"Gathersanity Item: Rugged Leather (skinning #11736/8170)", 9501640},
    {"Gathersanity Item: Heavy Scorpid Scale (skinning #11736/15408)", 9501641},
    {"Gathersanity Item: Thick Leather (skinning #11737/4304)", 9501642},
    {"Gathersanity Item: Thick Hide (skinning #11737/8169)", 9501643},
    {"Gathersanity Item: Rugged Leather (skinning #11737/8170)", 9501644},
    {"Gathersanity Item: Heavy Scorpid Scale (skinning #11737/15408)", 9501645},
    {"Gathersanity Item: Thick Leather (skinning #11740/4304)", 9501646},
    {"Gathersanity Item: Thick Hide (skinning #11740/8169)", 9501647},
    {"Gathersanity Item: Rugged Leather (skinning #11740/8170)", 9501648},
    {"Gathersanity Item: Rugged Hide (skinning #11740/8171)", 9501649},
    {"Gathersanity Item: Thick Leather (skinning #11741/4304)", 9501650},
    {"Gathersanity Item: Thick Hide (skinning #11741/8169)", 9501651},
    {"Gathersanity Item: Rugged Leather (skinning #11741/8170)", 9501652},
    {"Gathersanity Item: Rugged Hide (skinning #11741/8171)", 9501653},
    {"Gathersanity Item: Black Dragonscale (skinning #11981/15416)", 9501654},
    {"Gathersanity Item: Core Leather (skinning #11982/17012)", 9501655},
    {"Gathersanity Item: Black Dragonscale (skinning #11983/15416)", 9501656},
    {"Gathersanity Item: Medium Leather (skinning #12037/2319)", 9501657},
    {"Gathersanity Item: Heavy Leather (skinning #12037/4234)", 9501658},
    {"Gathersanity Item: Thick Leather (skinning #12121/4304)", 9501659},
    {"Gathersanity Item: Rugged Leather (skinning #12121/8170)", 9501660},
    {"Gathersanity Item: Rugged Hide (skinning #12121/8171)", 9501661},
    {"Gathersanity Item: Knothide Leather Scraps (skinning #12121/25649)", 9501662},
    {"Gathersanity Item: Thick Leather (skinning #12122/4304)", 9501663},
    {"Gathersanity Item: Rugged Leather (skinning #12122/8170)", 9501664},
    {"Gathersanity Item: Rugged Hide (skinning #12122/8171)", 9501665},
    {"Gathersanity Item: Knothide Leather (skinning #12122/21887)", 9501666},
    {"Gathersanity Item: Knothide Leather Scraps (skinning #12122/25649)", 9501667},
    {"Gathersanity Item: Thick Leather (skinning #12129/4304)", 9501668},
    {"Gathersanity Item: Worn Dragonscale (skinning #12129/8165)", 9501669},
    {"Gathersanity Item: Rugged Leather (skinning #12129/8170)", 9501670},
    {"Gathersanity Item: Rugged Hide (skinning #12129/8171)", 9501671},
    {"Gathersanity Item: Thick Leather (skinning #12207/4304)", 9501672},
    {"Gathersanity Item: Thick Hide (skinning #12207/8169)", 9501673},
    {"Gathersanity Item: Rugged Leather (skinning #12207/8170)", 9501674},
    {"Gathersanity Item: Thick Leather (skinning #12418/4304)", 9501675},
    {"Gathersanity Item: Thick Hide (skinning #12418/8169)", 9501676},
    {"Gathersanity Item: Rugged Leather (skinning #12418/8170)", 9501677},
    {"Gathersanity Item: Rugged Hide (skinning #12418/8171)", 9501678},
    {"Gathersanity Item: Rugged Leather (skinning #12460/8170)", 9501679},
    {"Gathersanity Item: Rugged Hide (skinning #12460/8171)", 9501680},
    {"Gathersanity Item: Black Dragonscale (skinning #12460/15416)", 9501681},
    {"Gathersanity Item: Rugged Leather (skinning #12461/8170)", 9501682},
    {"Gathersanity Item: Rugged Hide (skinning #12461/8171)", 9501683},
    {"Gathersanity Item: Black Dragonscale (skinning #12461/15416)", 9501684},
    {"Gathersanity Item: Rugged Leather (skinning #12463/8170)", 9501685},
    {"Gathersanity Item: Rugged Hide (skinning #12463/8171)", 9501686},
    {"Gathersanity Item: Black Dragonscale (skinning #12463/15416)", 9501687},
    {"Gathersanity Item: Rugged Leather (skinning #12464/8170)", 9501688},
    {"Gathersanity Item: Rugged Hide (skinning #12464/8171)", 9501689},
    {"Gathersanity Item: Black Dragonscale (skinning #12464/15416)", 9501690},
    {"Gathersanity Item: Rugged Leather (skinning #12465/8170)", 9501691},
    {"Gathersanity Item: Rugged Hide (skinning #12465/8171)", 9501692},
    {"Gathersanity Item: Black Dragonscale (skinning #12465/15416)", 9501693},
    {"Gathersanity Item: Rugged Leather (skinning #12467/8170)", 9501694},
    {"Gathersanity Item: Rugged Hide (skinning #12467/8171)", 9501695},
    {"Gathersanity Item: Black Dragonscale (skinning #12467/15416)", 9501696},
    {"Gathersanity Item: Rugged Leather (skinning #12468/8170)", 9501697},
    {"Gathersanity Item: Rugged Hide (skinning #12468/8171)", 9501698},
    {"Gathersanity Item: Black Dragonscale (skinning #12468/15416)", 9501699},
    {"Gathersanity Item: Thick Leather (skinning #12474/4304)", 9501700},
    {"Gathersanity Item: Worn Dragonscale (skinning #12474/8165)", 9501701},
    {"Gathersanity Item: Rugged Leather (skinning #12474/8170)", 9501702},
    {"Gathersanity Item: Rugged Hide (skinning #12474/8171)", 9501703},
    {"Gathersanity Item: Green Dragonscale (skinning #12474/15412)", 9501704},
    {"Gathersanity Item: Worn Dragonscale (skinning #12475/8165)", 9501705},
    {"Gathersanity Item: Rugged Leather (skinning #12475/8170)", 9501706},
    {"Gathersanity Item: Green Dragonscale (skinning #12475/15412)", 9501707},
    {"Gathersanity Item: Thick Leather (skinning #12476/4304)", 9501708},
    {"Gathersanity Item: Rugged Leather (skinning #12476/8170)", 9501709},
    {"Gathersanity Item: Green Dragonscale (skinning #12476/15412)", 9501710},
    {"Gathersanity Item: Thick Leather (skinning #12477/4304)", 9501711},
    {"Gathersanity Item: Worn Dragonscale (skinning #12477/8165)", 9501712},
    {"Gathersanity Item: Rugged Leather (skinning #12477/8170)", 9501713},
    {"Gathersanity Item: Green Dragonscale (skinning #12477/15412)", 9501714},
    {"Gathersanity Item: Thick Leather (skinning #12479/4304)", 9501715},
    {"Gathersanity Item: Worn Dragonscale (skinning #12479/8165)", 9501716},
    {"Gathersanity Item: Rugged Leather (skinning #12479/8170)", 9501717},
    {"Gathersanity Item: Rugged Hide (skinning #12479/8171)", 9501718},
    {"Gathersanity Item: Green Dragonscale (skinning #12479/15412)", 9501719},
    {"Gathersanity Item: Worn Dragonscale (skinning #12498/8165)", 9501720},
    {"Gathersanity Item: Rugged Leather (skinning #12498/8170)", 9501721},
    {"Gathersanity Item: Green Dragonscale (skinning #12498/15412)", 9501722},
    {"Gathersanity Item: Light Hide (skinning #12715/783)", 9501723},
    {"Gathersanity Item: Light Leather (skinning #12715/2318)", 9501724},
    {"Gathersanity Item: Medium Leather (skinning #12715/2319)", 9501725},
    {"Gathersanity Item: Medium Hide (skinning #12715/4232)", 9501726},
    {"Gathersanity Item: Deviate Scale (skinning #12715/6470)", 9501727},
    {"Gathersanity Item: Perfect Deviate Scale (skinning #12715/6471)", 9501728},
    {"Gathersanity Item: Thick Leather (skinning #12739/4304)", 9501729},
    {"Gathersanity Item: Worn Dragonscale (skinning #12739/8165)", 9501730},
    {"Gathersanity Item: Rugged Leather (skinning #12739/8170)", 9501731},
    {"Gathersanity Item: Rugged Hide (skinning #12739/8171)", 9501732},
    {"Gathersanity Item: Black Dragonscale (skinning #12739/15416)", 9501733},
    {"Gathersanity Item: Thick Leather (skinning #12800/4304)", 9501734},
    {"Gathersanity Item: Rugged Leather (skinning #12800/8170)", 9501735},
    {"Gathersanity Item: Rugged Hide (skinning #12800/8171)", 9501736},
    {"Gathersanity Item: Thick Leather (skinning #12801/4304)", 9501737},
    {"Gathersanity Item: Rugged Leather (skinning #12801/8170)", 9501738},
    {"Gathersanity Item: Rugged Hide (skinning #12801/8171)", 9501739},
    {"Gathersanity Item: Rugged Leather (skinning #12802/8170)", 9501740},
    {"Gathersanity Item: Rugged Hide (skinning #12802/8171)", 9501741},
    {"Gathersanity Item: Thick Leather (skinning #12899/4304)", 9501742},
    {"Gathersanity Item: Worn Dragonscale (skinning #12899/8165)", 9501743},
    {"Gathersanity Item: Rugged Leather (skinning #12899/8170)", 9501744},
    {"Gathersanity Item: Red Dragonscale (skinning #12899/15414)", 9501745},
    {"Gathersanity Item: Thick Leather (skinning #12900/4304)", 9501746},
    {"Gathersanity Item: Worn Dragonscale (skinning #12900/8165)", 9501747},
    {"Gathersanity Item: Rugged Leather (skinning #12900/8170)", 9501748},
    {"Gathersanity Item: Rugged Hide (skinning #12900/8171)", 9501749},
    {"Gathersanity Item: Green Dragonscale (skinning #12900/15412)", 9501750},
    {"Gathersanity Item: Thick Leather (skinning #13036/4304)", 9501751},
    {"Gathersanity Item: Rugged Leather (skinning #13036/8170)", 9501752},
    {"Gathersanity Item: Rugged Hide (skinning #13036/8171)", 9501753},
    {"Gathersanity Item: Silithid Chitin (skinning #13136/20498)", 9501754},
    {"Gathersanity Item: Broken Silithid Chitin (skinning #13136/20499)", 9501755},
    {"Gathersanity Item: Light Silithid Carapace (skinning #13136/20500)", 9501756},
    {"Gathersanity Item: Silithid Chitin (skinning #13301/20498)", 9501757},
    {"Gathersanity Item: Broken Silithid Chitin (skinning #13301/20499)", 9501758},
    {"Gathersanity Item: Light Silithid Carapace (skinning #13301/20500)", 9501759},
    {"Gathersanity Item: Thick Leather (skinning #13323/4304)", 9501760},
    {"Gathersanity Item: Thick Hide (skinning #13323/8169)", 9501761},
    {"Gathersanity Item: Rugged Leather (skinning #13323/8170)", 9501762},
    {"Gathersanity Item: Thick Leather (skinning #13596/4304)", 9501763},
    {"Gathersanity Item: Thick Hide (skinning #13596/8169)", 9501764},
    {"Gathersanity Item: Rugged Leather (skinning #13596/8170)", 9501765},
    {"Gathersanity Item: Thick Leather (skinning #13599/4304)", 9501766},
    {"Gathersanity Item: Turtle Scale (skinning #13599/8167)", 9501767},
    {"Gathersanity Item: Thick Hide (skinning #13599/8169)", 9501768},
    {"Gathersanity Item: Rugged Leather (skinning #13599/8170)", 9501769},
    {"Gathersanity Item: Thick Leather (skinning #13896/4304)", 9501770},
    {"Gathersanity Item: Turtle Scale (skinning #13896/8167)", 9501771},
    {"Gathersanity Item: Rugged Leather (skinning #13896/8170)", 9501772},
    {"Gathersanity Item: Brilliant Chromatic Scale (skinning #14020/12607)", 9501773},
    {"Gathersanity Item: Green Dragonscale (skinning #14020/15412)", 9501774},
    {"Gathersanity Item: Red Dragonscale (skinning #14020/15414)", 9501775},
    {"Gathersanity Item: Blue Dragonscale (skinning #14020/15415)", 9501776},
    {"Gathersanity Item: Black Dragonscale (skinning #14020/15416)", 9501777},
    {"Gathersanity Item: Heavy Leather (skinning #14123/4234)", 9501778},
    {"Gathersanity Item: Heavy Hide (skinning #14123/4235)", 9501779},
    {"Gathersanity Item: Thick Leather (skinning #14123/4304)", 9501780},
    {"Gathersanity Item: Turtle Scale (skinning #14123/8167)", 9501781},
    {"Gathersanity Item: Thick Hide (skinning #14123/8169)", 9501782},
    {"Gathersanity Item: Medium Leather (skinning #14228/2319)", 9501783},
    {"Gathersanity Item: Medium Hide (skinning #14228/4232)", 9501784},
    {"Gathersanity Item: Heavy Leather (skinning #14228/4234)", 9501785},
    {"Gathersanity Item: Heavy Hide (skinning #14228/4235)", 9501786},
    {"Gathersanity Item: Heavy Leather (skinning #14234/4234)", 9501787},
    {"Gathersanity Item: Heavy Hide (skinning #14234/4235)", 9501788},
    {"Gathersanity Item: Thick Leather (skinning #14234/4304)", 9501789},
    {"Gathersanity Item: Light Leather (skinning #14272/2318)", 9501790},
    {"Gathersanity Item: Black Whelp Scale (skinning #14272/7286)", 9501791},
    {"Gathersanity Item: Thick Leather (skinning #14282/4304)", 9501792},
    {"Gathersanity Item: Thick Hide (skinning #14282/8169)", 9501793},
    {"Gathersanity Item: Rugged Leather (skinning #14282/8170)", 9501794},
    {"Gathersanity Item: Rugged Hide (skinning #14282/8171)", 9501795},
    {"Gathersanity Item: Thick Leather (skinning #14308/4304)", 9501796},
    {"Gathersanity Item: Rugged Leather (skinning #14308/8170)", 9501797},
    {"Gathersanity Item: Rugged Hide (skinning #14308/8171)", 9501798},
    {"Gathersanity Item: Warbear Leather (skinning #14308/15419)", 9501799},
    {"Gathersanity Item: Thick Leather (skinning #14398/4304)", 9501800},
    {"Gathersanity Item: Worn Dragonscale (skinning #14398/8165)", 9501801},
    {"Gathersanity Item: Rugged Leather (skinning #14398/8170)", 9501802},
    {"Gathersanity Item: Thick Leather (skinning #14445/4304)", 9501803},
    {"Gathersanity Item: Worn Dragonscale (skinning #14445/8165)", 9501804},
    {"Gathersanity Item: Thick Hide (skinning #14445/8169)", 9501805},
    {"Gathersanity Item: Rugged Leather (skinning #14445/8170)", 9501806},
    {"Gathersanity Item: Green Dragonscale (skinning #14445/15412)", 9501807},
    {"Gathersanity Item: Silithid Chitin (skinning #14473/20498)", 9501808},
    {"Gathersanity Item: Broken Silithid Chitin (skinning #14473/20499)", 9501809},
    {"Gathersanity Item: Heavy Silithid Carapace (skinning #14473/20501)", 9501810},
    {"Gathersanity Item: Silithid Chitin (skinning #14474/20498)", 9501811},
    {"Gathersanity Item: Broken Silithid Chitin (skinning #14474/20499)", 9501812},
    {"Gathersanity Item: Light Silithid Carapace (skinning #14474/20500)", 9501813},
    {"Gathersanity Item: Silithid Chitin (skinning #14475/20498)", 9501814},
    {"Gathersanity Item: Broken Silithid Chitin (skinning #14475/20499)", 9501815},
    {"Gathersanity Item: Thick Leather (skinning #14502/4304)", 9501816},
    {"Gathersanity Item: Thick Hide (skinning #14502/8169)", 9501817},
    {"Gathersanity Item: Rugged Leather (skinning #14502/8170)", 9501818},
    {"Gathersanity Item: Rugged Hide (skinning #14502/8171)", 9501819},
    {"Gathersanity Item: Black Dragonscale (skinning #14601/15416)", 9501820},
    {"Gathersanity Item: Rugged Leather (skinning #14750/8170)", 9501821},
    {"Gathersanity Item: Thick Leather (skinning #14821/4304)", 9501822},
    {"Gathersanity Item: Rugged Leather (skinning #14821/8170)", 9501823},
    {"Gathersanity Item: Rugged Hide (skinning #14821/8171)", 9501824},
    {"Gathersanity Item: Green Dragonscale (skinning #14887/15412)", 9501825},
    {"Gathersanity Item: Dreamscale (skinning #14887/20381)", 9501826},
    {"Gathersanity Item: Thick Leather (skinning #15043/4304)", 9501827},
    {"Gathersanity Item: Rugged Leather (skinning #15043/8170)", 9501828},
    {"Gathersanity Item: Rugged Hide (skinning #15043/8171)", 9501829},
    {"Gathersanity Item: Thick Leather (skinning #15196/4304)", 9501830},
    {"Gathersanity Item: Thick Hide (skinning #15196/8169)", 9501831},
    {"Gathersanity Item: Rugged Leather (skinning #15196/8170)", 9501832},
    {"Gathersanity Item: Heavy Scorpid Scale (skinning #15196/15408)", 9501833},
    {"Gathersanity Item: Broken Silithid Chitin (skinning #15286/20499)", 9501834},
    {"Gathersanity Item: Silithid Chitin (skinning #15288/20498)", 9501835},
    {"Gathersanity Item: Broken Silithid Chitin (skinning #15288/20499)", 9501836},
    {"Gathersanity Item: Silithid Chitin (skinning #15290/20498)", 9501837},
    {"Gathersanity Item: Broken Silithid Chitin (skinning #15290/20499)", 9501838},
    {"Gathersanity Item: Broken Silithid Chitin (skinning #15319/20499)", 9501839},
    {"Gathersanity Item: Silithid Chitin (skinning #15320/20498)", 9501840},
    {"Gathersanity Item: Broken Silithid Chitin (skinning #15320/20499)", 9501841},
    {"Gathersanity Item: Heavy Silithid Carapace (skinning #15320/20501)", 9501842},
    {"Gathersanity Item: Silithid Chitin (skinning #15323/20498)", 9501843},
    {"Gathersanity Item: Broken Silithid Chitin (skinning #15323/20499)", 9501844},
    {"Gathersanity Item: Heavy Silithid Carapace (skinning #15323/20501)", 9501845},
    {"Gathersanity Item: Silithid Chitin (skinning #15325/20498)", 9501846},
    {"Gathersanity Item: Broken Silithid Chitin (skinning #15325/20499)", 9501847},
    {"Gathersanity Item: Light Silithid Carapace (skinning #15325/20500)", 9501848},
    {"Gathersanity Item: Silithid Chitin (skinning #15327/20498)", 9501849},
    {"Gathersanity Item: Broken Silithid Chitin (skinning #15327/20499)", 9501850},
    {"Gathersanity Item: Light Silithid Carapace (skinning #15327/20500)", 9501851},
    {"Gathersanity Item: Broken Silithid Chitin (skinning #15336/20499)", 9501852},
    {"Gathersanity Item: Green Dragonscale (skinning #15412/15412)", 9501853},
    {"Gathersanity Item: Red Dragonscale (skinning #15414/15414)", 9501854},
    {"Gathersanity Item: Blue Dragonscale (skinning #15415/15415)", 9501855},
    {"Gathersanity Item: Black Dragonscale (skinning #15416/15416)", 9501856},
    {"Gathersanity Item: Rugged Leather (skinning #15554/8170)", 9501857},
    {"Gathersanity Item: Rugged Leather (skinning #16095/8170)", 9501858},
    {"Gathersanity Item: Thick Leather (skinning #16117/4304)", 9501859},
    {"Gathersanity Item: Rugged Leather (skinning #16117/8170)", 9501860},
    {"Gathersanity Item: Rugged Hide (skinning #16117/8171)", 9501861},
    {"Gathersanity Item: Knothide Leather (skinning #16181/21887)", 9501862},
    {"Gathersanity Item: Knothide Leather Scraps (skinning #16181/25649)", 9501863},
    {"Gathersanity Item: Fel Hide (skinning #16181/25707)", 9501864},
    {"Gathersanity Item: Light Leather (skinning #17201/2318)", 9501865},
    {"Gathersanity Item: Ruined Leather Scraps (skinning #17201/2934)", 9501866},
    {"Gathersanity Item: Knothide Leather (skinning #17307/21887)", 9501867},
    {"Gathersanity Item: Light Leather (skinning #17374/2318)", 9501868},
    {"Gathersanity Item: Ruined Leather Scraps (skinning #17374/2934)", 9501869},
    {"Gathersanity Item: Light Hide (skinning #17592/783)", 9501870},
    {"Gathersanity Item: Light Leather (skinning #17592/2318)", 9501871},
    {"Gathersanity Item: Medium Leather (skinning #17592/2319)", 9501872},
    {"Gathersanity Item: Light Hide (skinning #17661/783)", 9501873},
    {"Gathersanity Item: Light Leather (skinning #17661/2318)", 9501874},
    {"Gathersanity Item: Medium Leather (skinning #17661/2319)", 9501875},
    {"Gathersanity Item: Knothide Leather (skinning #18398/21887)", 9501876},
    {"Gathersanity Item: Knothide Leather Scraps (skinning #18398/25649)", 9501877},
    {"Gathersanity Item: Thick Clefthoof Leather (skinning #18398/25708)", 9501878},
    {"Gathersanity Item: Knothide Leather (skinning #20520/21887)", 9501879},
    {"Gathersanity Item: Knothide Leather Scraps (skinning #20520/25649)", 9501880},
    {"Gathersanity Item: Crystal Infused Leather (skinning #20520/25699)", 9501881},
    {"Gathersanity Item: Fel Scales (skinning #20520/25700)", 9501882},
    {"Gathersanity Item: Knothide Leather (skinning #20775/21887)", 9501883},
    {"Gathersanity Item: Knothide Leather Scraps (skinning #20775/25649)", 9501884},
    {"Gathersanity Item: Knothide Leather (skinning #21387/21887)", 9501885},
    {"Gathersanity Item: Knothide Leather Scraps (skinning #21387/25649)", 9501886},
    {"Gathersanity Item: Knothide Leather (skinning #21697/21887)", 9501887},
    {"Gathersanity Item: Knothide Leather (skinning #21723/21887)", 9501888},
    {"Gathersanity Item: Knothide Leather (skinning #22072/21887)", 9501889},
    {"Gathersanity Item: Knothide Leather Scraps (skinning #22072/25649)", 9501890},
    {"Gathersanity Item: Nether Residue (skinning #22072/35229)", 9501891},
    {"Gathersanity Item: Knothide Leather (skinning #22885/21887)", 9501892},
    {"Gathersanity Item: Knothide Leather (skinning #23163/21887)", 9501893},
    {"Gathersanity Item: Knothide Leather Scraps (skinning #23163/25649)", 9501894},
    {"Gathersanity Item: Fel Hide (skinning #23163/25707)", 9501895},
    {"Gathersanity Item: Nether Residue (skinning #23163/35229)", 9501896},
    {"Gathersanity Item: Heavy Leather (skinning #23873/4234)", 9501897},
    {"Gathersanity Item: Heavy Hide (skinning #23873/4235)", 9501898},
    {"Gathersanity Item: Thick Leather (skinning #23873/4304)", 9501899},
    {"Gathersanity Item: Knothide Leather (skinning #24047/21887)", 9501900},
    {"Gathersanity Item: Crystal Infused Leather (skinning #24047/25699)", 9501901},
    {"Gathersanity Item: Knothide Leather (skinning #25599/21887)", 9501902},
    {"Gathersanity Item: Knothide Leather Scraps (skinning #25599/25649)", 9501903},
    {"Gathersanity Item: Fel Hide (skinning #25599/25707)", 9501904},
    {"Gathersanity Item: Borean Leather (skinning #26723/33568)", 9501905},
    {"Gathersanity Item: Icy Dragonscale (skinning #26723/38557)", 9501906},
    {"Gathersanity Item: Arctic Fur (skinning #26723/44128)", 9501907},
    {"Gathersanity Item: Sprung Sprocket (skinning #27641/36813)", 9501908},
    {"Gathersanity Item: Handful of Cobalt Bolts (skinning #27641/39681)", 9501909},
    {"Gathersanity Item: Overcharged Capacitor (skinning #27641/39682)", 9501910},
    {"Gathersanity Item: Hair Trigger (skinning #27641/39684)", 9501911},
    {"Gathersanity Item: Indestructible Frame (skinning #27641/39685)", 9501912},
    {"Gathersanity Item: Volatile Blasting Trigger (skinning #27641/39690)", 9501913},
    {"Gathersanity Item: Whizzed-Out Gizmo (skinning #27641/41337)", 9501914},
    {"Gathersanity Item: Sprung Whirlygig (skinning #27641/41338)", 9501915},
    {"Gathersanity Item: Schematic: Jeeves (skinning #27641/49050)", 9501916},
    {"Gathersanity Item: Borean Leather (skinning #28860/33568)", 9501917},
    {"Gathersanity Item: Icy Dragonscale (skinning #28860/38557)", 9501918},
    {"Gathersanity Item: Arctic Fur (skinning #28860/44128)", 9501919},
    {"Gathersanity Item: Handful of Cobalt Bolts (skinning #29380/39681)", 9501920},
    {"Gathersanity Item: Overcharged Capacitor (skinning #29380/39682)", 9501921},
    {"Gathersanity Item: Volatile Blasting Trigger (skinning #29380/39690)", 9501922},
    {"Gathersanity Item: Whizzed-Out Gizmo (skinning #29380/41337)", 9501923},
    {"Gathersanity Item: Sprung Whirlygig (skinning #29380/41338)", 9501924},
    {"Gathersanity Item: Schematic: Jeeves (skinning #29380/49050)", 9501925},
    {"Gathersanity Item: Handful of Cobalt Bolts (skinning #29729/39681)", 9501926},
    {"Gathersanity Item: Volatile Blasting Trigger (skinning #29729/39690)", 9501927},
    {"Gathersanity Item: Whizzed-Out Gizmo (skinning #29729/41337)", 9501928},
    {"Gathersanity Item: Sprung Whirlygig (skinning #29729/41338)", 9501929},
    {"Gathersanity Item: Schematic: Jeeves (skinning #29729/49050)", 9501930},
    {"Gathersanity Item: Handful of Cobalt Bolts (skinning #29730/39681)", 9501931},
    {"Gathersanity Item: Overcharged Capacitor (skinning #29730/39682)", 9501932},
    {"Gathersanity Item: Volatile Blasting Trigger (skinning #29730/39690)", 9501933},
    {"Gathersanity Item: Whizzed-Out Gizmo (skinning #29730/41337)", 9501934},
    {"Gathersanity Item: Sprung Whirlygig (skinning #29730/41338)", 9501935},
    {"Gathersanity Item: Schematic: Jeeves (skinning #29730/49050)", 9501936},
    {"Gathersanity Item: Borean Leather (skinning #30260/33568)", 9501937},
    {"Gathersanity Item: Borean Leather (skinning #32517/33568)", 9501938},
    {"Gathersanity Item: Arctic Fur (skinning #32517/44128)", 9501939},
    {"Gathersanity Item: Loque'Nahak's Pelt (skinning #32517/44687)", 9501940},
    {"Gathersanity Item: Borean Leather (skinning #34797/33568)", 9501941},
    {"Gathersanity Item: Arctic Fur (skinning #34797/44128)", 9501942},
    {"Gathersanity Item: Borean Leather (skinning #37501/33568)", 9501943},
    {"Gathersanity Item: Nerubian Chitin (skinning #37501/38558)", 9501944},
    {"Gathersanity Item: Borean Leather (skinning #37502/33568)", 9501945},
    {"Gathersanity Item: Nerubian Chitin (skinning #37502/38558)", 9501946},
    {"Gathersanity Item: Knothide Leather (skinning #70060/21887)", 9501947},
    {"Gathersanity Item: Knothide Leather Scraps (skinning #70060/25649)", 9501948},
    {"Gathersanity Item: Knothide Leather (skinning #70061/21887)", 9501949},
    {"Gathersanity Item: Knothide Leather Scraps (skinning #70061/25649)", 9501950},
    {"Gathersanity Item: Knothide Leather (skinning #70062/21887)", 9501951},
    {"Gathersanity Item: Knothide Leather Scraps (skinning #70062/25649)", 9501952},
    {"Gathersanity Item: Knothide Leather (skinning #70063/21887)", 9501953},
    {"Gathersanity Item: Knothide Leather Scraps (skinning #70063/25649)", 9501954},
    {"Gathersanity Item: Knothide Leather (skinning #70064/21887)", 9501955},
    {"Gathersanity Item: Knothide Leather Scraps (skinning #70064/25649)", 9501956},
    {"Gathersanity Item: Knothide Leather (skinning #70065/21887)", 9501957},
    {"Gathersanity Item: Knothide Leather Scraps (skinning #70065/25649)", 9501958},
    {"Gathersanity Item: Knothide Leather (skinning #70066/21887)", 9501959},
    {"Gathersanity Item: Knothide Leather Scraps (skinning #70066/25649)", 9501960},
    {"Gathersanity Item: Knothide Leather (skinning #70067/21887)", 9501961},
    {"Gathersanity Item: Knothide Leather (skinning #70068/21887)", 9501962},
    {"Gathersanity Item: Knothide Leather Scraps (skinning #70068/25649)", 9501963},
    {"Gathersanity Item: Knothide Leather (skinning #70069/21887)", 9501964},
    {"Gathersanity Item: Knothide Leather (skinning #70160/21887)", 9501965},
    {"Gathersanity Item: Knothide Leather Scraps (skinning #70160/25649)", 9501966},
    {"Gathersanity Item: Fel Hide (skinning #70160/25707)", 9501967},
    {"Gathersanity Item: Knothide Leather (skinning #70161/21887)", 9501968},
    {"Gathersanity Item: Knothide Leather Scraps (skinning #70161/25649)", 9501969},
    {"Gathersanity Item: Fel Hide (skinning #70161/25707)", 9501970},
    {"Gathersanity Item: Knothide Leather (skinning #70162/21887)", 9501971},
    {"Gathersanity Item: Knothide Leather Scraps (skinning #70162/25649)", 9501972},
    {"Gathersanity Item: Fel Hide (skinning #70162/25707)", 9501973},
    {"Gathersanity Item: Knothide Leather (skinning #70163/21887)", 9501974},
    {"Gathersanity Item: Knothide Leather Scraps (skinning #70163/25649)", 9501975},
    {"Gathersanity Item: Crystal Infused Leather (skinning #70163/25699)", 9501976},
    {"Gathersanity Item: Fel Scales (skinning #70163/25700)", 9501977},
    {"Gathersanity Item: Knothide Leather (skinning #70164/21887)", 9501978},
    {"Gathersanity Item: Knothide Leather Scraps (skinning #70164/25649)", 9501979},
    {"Gathersanity Item: Crystal Infused Leather (skinning #70164/25699)", 9501980},
    {"Gathersanity Item: Fel Scales (skinning #70164/25700)", 9501981},
    {"Gathersanity Item: Knothide Leather (skinning #70165/21887)", 9501982},
    {"Gathersanity Item: Knothide Leather Scraps (skinning #70165/25649)", 9501983},
    {"Gathersanity Item: Crystal Infused Leather (skinning #70165/25699)", 9501984},
    {"Gathersanity Item: Fel Scales (skinning #70165/25700)", 9501985},
    {"Gathersanity Item: Nethermine Flayer Hide (skinning #70165/32470)", 9501986},
    {"Gathersanity Item: Knothide Leather (skinning #70166/21887)", 9501987},
    {"Gathersanity Item: Knothide Leather Scraps (skinning #70166/25649)", 9501988},
    {"Gathersanity Item: Thick Clefthoof Leather (skinning #70166/25708)", 9501989},
    {"Gathersanity Item: Knothide Leather (skinning #70167/21887)", 9501990},
    {"Gathersanity Item: Knothide Leather Scraps (skinning #70167/25649)", 9501991},
    {"Gathersanity Item: Thick Clefthoof Leather (skinning #70167/25708)", 9501992},
    {"Gathersanity Item: Knothide Leather (skinning #70168/21887)", 9501993},
    {"Gathersanity Item: Knothide Leather Scraps (skinning #70168/25649)", 9501994},
    {"Gathersanity Item: Cobra Scales (skinning #70168/29539)", 9501995},
    {"Gathersanity Item: Knothide Leather (skinning #70169/21887)", 9501996},
    {"Gathersanity Item: Knothide Leather Scraps (skinning #70169/25649)", 9501997},
    {"Gathersanity Item: Wind Scales (skinning #70169/29547)", 9501998},
    {"Gathersanity Item: Knothide Leather (skinning #70170/21887)", 9501999},
    {"Gathersanity Item: Wind Scales (skinning #70170/29547)", 9502000},
    {"Gathersanity Item: Knothide Leather (skinning #70171/21887)", 9502001},
    {"Gathersanity Item: Knothide Leather Scraps (skinning #70171/25649)", 9502002},
    {"Gathersanity Item: Nether Dragonscales (skinning #70171/29548)", 9502003},
    {"Gathersanity Item: Knothide Leather (skinning #70172/21887)", 9502004},
    {"Gathersanity Item: Knothide Leather Scraps (skinning #70172/25649)", 9502005},
    {"Gathersanity Item: Nether Dragonscales (skinning #70172/29548)", 9502006},
    {"Gathersanity Item: Borean Leather Scraps (skinning #70200/33567)", 9502007},
    {"Gathersanity Item: Borean Leather (skinning #70200/33568)", 9502008},
    {"Gathersanity Item: Arctic Fur (skinning #70200/44128)", 9502009},
    {"Gathersanity Item: Borean Leather Scraps (skinning #70201/33567)", 9502010},
    {"Gathersanity Item: Borean Leather (skinning #70201/33568)", 9502011},
    {"Gathersanity Item: Arctic Fur (skinning #70201/44128)", 9502012},
    {"Gathersanity Item: Borean Leather Scraps (skinning #70202/33567)", 9502013},
    {"Gathersanity Item: Borean Leather (skinning #70202/33568)", 9502014},
    {"Gathersanity Item: Arctic Fur (skinning #70202/44128)", 9502015},
    {"Gathersanity Item: Borean Leather (skinning #70203/33568)", 9502016},
    {"Gathersanity Item: Nerubian Chitin (skinning #70203/38558)", 9502017},
    {"Gathersanity Item: Arctic Fur (skinning #70203/44128)", 9502018},
    {"Gathersanity Item: Borean Leather Scraps (skinning #70204/33567)", 9502019},
    {"Gathersanity Item: Borean Leather (skinning #70204/33568)", 9502020},
    {"Gathersanity Item: Nerubian Chitin (skinning #70204/38558)", 9502021},
    {"Gathersanity Item: Arctic Fur (skinning #70204/44128)", 9502022},
    {"Gathersanity Item: Borean Leather (skinning #70205/33568)", 9502023},
    {"Gathersanity Item: Nerubian Chitin (skinning #70205/38558)", 9502024},
    {"Gathersanity Item: Arctic Fur (skinning #70205/44128)", 9502025},
    {"Gathersanity Item: Borean Leather Scraps (skinning #70206/33567)", 9502026},
    {"Gathersanity Item: Borean Leather (skinning #70206/33568)", 9502027},
    {"Gathersanity Item: Jormungar Scale (skinning #70206/38561)", 9502028},
    {"Gathersanity Item: Arctic Fur (skinning #70206/44128)", 9502029},
    {"Gathersanity Item: Borean Leather (skinning #70207/33568)", 9502030},
    {"Gathersanity Item: Jormungar Scale (skinning #70207/38561)", 9502031},
    {"Gathersanity Item: Arctic Fur (skinning #70207/44128)", 9502032},
    {"Gathersanity Item: Borean Leather Scraps (skinning #70208/33567)", 9502033},
    {"Gathersanity Item: Borean Leather (skinning #70208/33568)", 9502034},
    {"Gathersanity Item: Icy Dragonscale (skinning #70208/38557)", 9502035},
    {"Gathersanity Item: Arctic Fur (skinning #70208/44128)", 9502036},
    {"Gathersanity Item: Borean Leather (skinning #70209/33568)", 9502037},
    {"Gathersanity Item: Icy Dragonscale (skinning #70209/38557)", 9502038},
    {"Gathersanity Item: Arctic Fur (skinning #70209/44128)", 9502039},
    {"Gathersanity Item: Borean Leather (skinning #70210/33568)", 9502040},
    {"Gathersanity Item: Icy Dragonscale (skinning #70210/38557)", 9502041},
    {"Gathersanity Item: Arctic Fur (skinning #70210/44128)", 9502042},
    {"Gathersanity Item: Borean Leather (skinning #70211/33568)", 9502043},
    {"Gathersanity Item: Arctic Fur (skinning #70211/44128)", 9502044},
    {"Gathersanity Item: Borean Leather (skinning #70212/33568)", 9502045},
    {"Gathersanity Item: Arctic Fur (skinning #70212/44128)", 9502046},
    {"Gathersanity Item: Borean Leather (skinning #70213/33568)", 9502047},
    {"Gathersanity Item: Arctic Fur (skinning #70213/44128)", 9502048},
    {"Gathersanity Item: Borean Leather (skinning #70214/33568)", 9502049},
    {"Gathersanity Item: Arctic Fur (skinning #70214/44128)", 9502050},
    {"Gathersanity Item: Borean Leather (skinning #70215/33568)", 9502051},
    {"Gathersanity Item: Nerubian Chitin (skinning #70215/38558)", 9502052},
    {"Gathersanity Item: Arctic Fur (skinning #70215/44128)", 9502053},
    {"Gathersanity Item: Mote of Life (skinning #80000/22575)", 9502054},
    {"Gathersanity Item: Felweed (skinning #80000/22785)", 9502055},
    {"Gathersanity Item: Dreaming Glory (skinning #80000/22786)", 9502056},
    {"Gathersanity Item: Ragveil (skinning #80000/22787)", 9502057},
    {"Gathersanity Item: Terocone (skinning #80000/22789)", 9502058},
    {"Gathersanity Item: Ancient Lichen (skinning #80000/22790)", 9502059},
    {"Gathersanity Item: Fel Lotus (skinning #80000/22794)", 9502060},
    {"Gathersanity Item: Unidentified Plant Parts (skinning #80000/24401)", 9502061},
    {"Gathersanity Item: Small Mushroom (skinning #80000/25813)", 9502062},
    {"Gathersanity Item: Zangar Caps (skinning #80000/27859)", 9502063},
    {"Gathersanity Item: Mote of Life (skinning #80001/22575)", 9502064},
    {"Gathersanity Item: Felweed (skinning #80001/22785)", 9502065},
    {"Gathersanity Item: Dreaming Glory (skinning #80001/22786)", 9502066},
    {"Gathersanity Item: Ragveil (skinning #80001/22787)", 9502067},
    {"Gathersanity Item: Terocone (skinning #80001/22789)", 9502068},
    {"Gathersanity Item: Ancient Lichen (skinning #80001/22790)", 9502069},
    {"Gathersanity Item: Fel Lotus (skinning #80001/22794)", 9502070},
    {"Gathersanity Item: Unidentified Plant Parts (skinning #80001/24401)", 9502071},
    {"Gathersanity Item: Small Mushroom (skinning #80001/25813)", 9502072},
    {"Gathersanity Item: Sporeggar Mushroom (skinning #80001/29453)", 9502073},
    {"Gathersanity Item: Mote of Life (skinning #80002/22575)", 9502074},
    {"Gathersanity Item: Felweed (skinning #80002/22785)", 9502075},
    {"Gathersanity Item: Dreaming Glory (skinning #80002/22786)", 9502076},
    {"Gathersanity Item: Ragveil (skinning #80002/22787)", 9502077},
    {"Gathersanity Item: Terocone (skinning #80002/22789)", 9502078},
    {"Gathersanity Item: Ancient Lichen (skinning #80002/22790)", 9502079},
    {"Gathersanity Item: Mana Thistle (skinning #80002/22793)", 9502080},
    {"Gathersanity Item: Fel Lotus (skinning #80002/22794)", 9502081},
    {"Gathersanity Item: Honey-Spiced Lichen (skinning #80007/33452)", 9502082},
    {"Gathersanity Item: Goldclover (skinning #80007/36901)", 9502083},
    {"Gathersanity Item: Constrictor Grass (skinning #80007/36902)", 9502084},
    {"Gathersanity Item: Adder's Tongue (skinning #80007/36903)", 9502085},
    {"Gathersanity Item: Tiger Lily (skinning #80007/36904)", 9502086},
    {"Gathersanity Item: Lichbloom (skinning #80007/36905)", 9502087},
    {"Gathersanity Item: Icethorn (skinning #80007/36906)", 9502088},
    {"Gathersanity Item: Talandra's Rose (skinning #80007/36907)", 9502089},
    {"Gathersanity Item: Crystallized Life (skinning #80007/37704)", 9502090},
    {"Gathersanity Item: Frosty Mushroom (skinning #80007/39516)", 9502091},
    {"Gathersanity Item: Mote of Earth (skinning #80100/22573)", 9502092},
    {"Gathersanity Item: Crystalline Fragments (skinning #80100/24189)", 9502093},
    {"Gathersanity Item: Mote of Earth (skinning #80101/22573)", 9502094},
    {"Gathersanity Item: Crystalline Fragments (skinning #80101/24189)", 9502095},
    {"Gathersanity Item: Flame Spessarite (skinning #80102/21929)", 9502096},
    {"Gathersanity Item: Blood Garnet (skinning #80102/23077)", 9502097},
    {"Gathersanity Item: Deep Peridot (skinning #80102/23079)", 9502098},
    {"Gathersanity Item: Shadow Draenite (skinning #80102/23107)", 9502099},
    {"Gathersanity Item: Golden Draenite (skinning #80102/23112)", 9502100},
    {"Gathersanity Item: Azure Moonstone (skinning #80102/23117)", 9502101},
    {"Gathersanity Item: Adamantite Ore (skinning #80102/23425)", 9502102},
    {"Gathersanity Item: Living Ruby (skinning #80102/23436)", 9502103},
    {"Gathersanity Item: Talasite (skinning #80102/23437)", 9502104},
    {"Gathersanity Item: Star of Elune (skinning #80102/23438)", 9502105},
    {"Gathersanity Item: Noble Topaz (skinning #80102/23439)", 9502106},
    {"Gathersanity Item: Dawnstone (skinning #80102/23440)", 9502107},
    {"Gathersanity Item: Nightseye (skinning #80102/23441)", 9502108},
    {"Gathersanity Item: Crystallized Earth (skinning #80103/37701)", 9502109},
    {"Gathersanity Item: Geodesic Fragments (skinning #80103/39220)", 9502110},
    {"Gathersanity Item: Crystallized Earth (skinning #80104/37701)", 9502111},
    {"Gathersanity Item: Geodesic Fragments (skinning #80104/39220)", 9502112},
    {"Gathersanity Item: Mote of Water (skinning #80200/22578)", 9502113},
    {"Gathersanity Item: Mote of Shadow (skinning #80201/22577)", 9502114},
    {"Gathersanity Item: Mote of Mana (skinning #80202/22576)", 9502115},
    {"Gathersanity Item: Mote of Air (skinning #80203/22572)", 9502116},
    {"Gathersanity Item: Crystallized Fire (skinning #80204/37702)", 9502117},
    {"Gathersanity Item: Crystallized Fire (skinning #80205/37702)", 9502118},
    {"Gathersanity Item: Crystallized Water (skinning #80205/37705)", 9502119},
    {"Gathersanity Item: Crystallized Air (skinning #80206/37700)", 9502120},
    {"Gathersanity Item: Crystallized Water (skinning #80206/37705)", 9502121},
    {"Gathersanity Item: Light Hide (skinning #100001/783)", 9502122},
    {"Gathersanity Item: Ruined Leather Scraps (skinning #100001/2934)", 9502123},
    {"Gathersanity Item: Light Leather (skinning #100002/2318)", 9502124},
    {"Gathersanity Item: Ruined Leather Scraps (skinning #100002/2934)", 9502125},
    {"Gathersanity Item: Thick Leather (skinning #100003/4304)", 9502126},
    {"Gathersanity Item: Thick Hide (skinning #100003/8169)", 9502127},
    {"Gathersanity Item: Rugged Leather (skinning #100003/8170)", 9502128},
    {"Gathersanity Item: Rugged Hide (skinning #100003/8171)", 9502129},
    {"Gathersanity Item: Light Hide (skinning #100004/783)", 9502130},
    {"Gathersanity Item: Light Leather (skinning #100004/2318)", 9502131},
    {"Gathersanity Item: Medium Leather (skinning #100004/2319)", 9502132},
    {"Gathersanity Item: Medium Hide (skinning #100004/4232)", 9502133},
    {"Gathersanity Item: Light Hide (skinning #100005/783)", 9502134},
    {"Gathersanity Item: Light Leather (skinning #100005/2318)", 9502135},
    {"Gathersanity Item: Medium Leather (skinning #100005/2319)", 9502136},
    {"Gathersanity Item: Medium Hide (skinning #100005/4232)", 9502137},
    {"Gathersanity Item: Light Hide (skinning #100006/783)", 9502138},
    {"Gathersanity Item: Light Leather (skinning #100006/2318)", 9502139},
    {"Gathersanity Item: Medium Leather (skinning #100006/2319)", 9502140},
    {"Gathersanity Item: Medium Hide (skinning #100006/4232)", 9502141},
    {"Gathersanity Item: Light Hide (skinning #100007/783)", 9502142},
    {"Gathersanity Item: Light Leather (skinning #100007/2318)", 9502143},
    {"Gathersanity Item: Medium Leather (skinning #100007/2319)", 9502144},
    {"Gathersanity Item: Medium Hide (skinning #100007/4232)", 9502145},
    {"Gathersanity Item: Light Hide (skinning #100008/783)", 9502146},
    {"Gathersanity Item: Light Leather (skinning #100008/2318)", 9502147},
    {"Gathersanity Item: Medium Leather (skinning #100008/2319)", 9502148},
    {"Gathersanity Item: Medium Hide (skinning #100008/4232)", 9502149},
    {"Gathersanity Item: Red Whelp Scale (skinning #100008/7287)", 9502150},
    {"Gathersanity Item: Light Hide (skinning #100009/783)", 9502151},
    {"Gathersanity Item: Light Leather (skinning #100009/2318)", 9502152},
    {"Gathersanity Item: Medium Leather (skinning #100009/2319)", 9502153},
    {"Gathersanity Item: Medium Hide (skinning #100009/4232)", 9502154},
    {"Gathersanity Item: Deviate Scale (skinning #100009/6470)", 9502155},
    {"Gathersanity Item: Perfect Deviate Scale (skinning #100009/6471)", 9502156},
    {"Gathersanity Item: Medium Leather (skinning #100010/2319)", 9502157},
    {"Gathersanity Item: Medium Hide (skinning #100010/4232)", 9502158},
    {"Gathersanity Item: Heavy Leather (skinning #100010/4234)", 9502159},
    {"Gathersanity Item: Heavy Hide (skinning #100010/4235)", 9502160},
    {"Gathersanity Item: Medium Leather (skinning #100011/2319)", 9502161},
    {"Gathersanity Item: Medium Hide (skinning #100011/4232)", 9502162},
    {"Gathersanity Item: Heavy Leather (skinning #100011/4234)", 9502163},
    {"Gathersanity Item: Heavy Hide (skinning #100011/4235)", 9502164},
    {"Gathersanity Item: Medium Leather (skinning #100012/2319)", 9502165},
    {"Gathersanity Item: Medium Hide (skinning #100012/4232)", 9502166},
    {"Gathersanity Item: Heavy Leather (skinning #100012/4234)", 9502167},
    {"Gathersanity Item: Heavy Hide (skinning #100012/4235)", 9502168},
    {"Gathersanity Item: Heavy Leather (skinning #100013/4234)", 9502169},
    {"Gathersanity Item: Heavy Hide (skinning #100013/4235)", 9502170},
    {"Gathersanity Item: Thick Leather (skinning #100013/4304)", 9502171},
    {"Gathersanity Item: Heavy Leather (skinning #100014/4234)", 9502172},
    {"Gathersanity Item: Heavy Hide (skinning #100014/4235)", 9502173},
    {"Gathersanity Item: Thick Leather (skinning #100014/4304)", 9502174},
    {"Gathersanity Item: Thick Hide (skinning #100014/8169)", 9502175},
    {"Gathersanity Item: Light Hide (skinning #100015/783)", 9502176},
    {"Gathersanity Item: Light Leather (skinning #100015/2318)", 9502177},
    {"Gathersanity Item: Ruined Leather Scraps (skinning #100015/2934)", 9502178},
    {"Gathersanity Item: Lesser Magic Essence (disenchant bracket #1)", 9502179},
    {"Gathersanity Item: Strange Dust (disenchant bracket #1)", 9502180},
    {"Gathersanity Item: Greater Magic Essence (disenchant bracket #2)", 9502181},
    {"Gathersanity Item: Strange Dust (disenchant bracket #2)", 9502182},
    {"Gathersanity Item: Small Glimmering Shard (disenchant bracket #2)", 9502183},
    {"Gathersanity Item: Strange Dust (disenchant bracket #3)", 9502184},
    {"Gathersanity Item: Small Glimmering Shard (disenchant bracket #3)", 9502185},
    {"Gathersanity Item: Lesser Astral Essence (disenchant bracket #3)", 9502186},
    {"Gathersanity Item: Greater Astral Essence (disenchant bracket #4)", 9502187},
    {"Gathersanity Item: Soul Dust (disenchant bracket #4)", 9502188},
    {"Gathersanity Item: Large Glimmering Shard (disenchant bracket #4)", 9502189},
    {"Gathersanity Item: Soul Dust (disenchant bracket #5)", 9502190},
    {"Gathersanity Item: Lesser Mystic Essence (disenchant bracket #5)", 9502191},
    {"Gathersanity Item: Small Glowing Shard (disenchant bracket #5)", 9502192},
    {"Gathersanity Item: Greater Mystic Essence (disenchant bracket #6)", 9502193},
    {"Gathersanity Item: Vision Dust (disenchant bracket #6)", 9502194},
    {"Gathersanity Item: Large Glowing Shard (disenchant bracket #6)", 9502195},
    {"Gathersanity Item: Vision Dust (disenchant bracket #7)", 9502196},
    {"Gathersanity Item: Lesser Nether Essence (disenchant bracket #7)", 9502197},
    {"Gathersanity Item: Small Radiant Shard (disenchant bracket #7)", 9502198},
    {"Gathersanity Item: Greater Nether Essence (disenchant bracket #8)", 9502199},
    {"Gathersanity Item: Dream Dust (disenchant bracket #8)", 9502200},
    {"Gathersanity Item: Large Radiant Shard (disenchant bracket #8)", 9502201},
    {"Gathersanity Item: Dream Dust (disenchant bracket #9)", 9502202},
    {"Gathersanity Item: Small Brilliant Shard (disenchant bracket #9)", 9502203},
    {"Gathersanity Item: Lesser Eternal Essence (disenchant bracket #9)", 9502204},
    {"Gathersanity Item: Large Brilliant Shard (disenchant bracket #10)", 9502205},
    {"Gathersanity Item: Greater Eternal Essence (disenchant bracket #10)", 9502206},
    {"Gathersanity Item: Illusion Dust (disenchant bracket #10)", 9502207},
    {"Gathersanity Item: Large Brilliant Shard (disenchant bracket #11)", 9502208},
    {"Gathersanity Item: Greater Eternal Essence (disenchant bracket #11)", 9502209},
    {"Gathersanity Item: Illusion Dust (disenchant bracket #11)", 9502210},
    {"Gathersanity Item: Arcane Dust (disenchant bracket #12)", 9502211},
    {"Gathersanity Item: Lesser Planar Essence (disenchant bracket #12)", 9502212},
    {"Gathersanity Item: Small Prismatic Shard (disenchant bracket #12)", 9502213},
    {"Gathersanity Item: Arcane Dust (disenchant bracket #13)", 9502214},
    {"Gathersanity Item: Lesser Planar Essence (disenchant bracket #13)", 9502215},
    {"Gathersanity Item: Small Prismatic Shard (disenchant bracket #13)", 9502216},
    {"Gathersanity Item: Arcane Dust (disenchant bracket #14)", 9502217},
    {"Gathersanity Item: Greater Planar Essence (disenchant bracket #14)", 9502218},
    {"Gathersanity Item: Large Prismatic Shard (disenchant bracket #14)", 9502219},
    {"Gathersanity Item: Small Dream Shard (disenchant bracket #15)", 9502220},
    {"Gathersanity Item: Infinite Dust (disenchant bracket #15)", 9502221},
    {"Gathersanity Item: Lesser Cosmic Essence (disenchant bracket #15)", 9502222},
    {"Gathersanity Item: Dream Shard (disenchant bracket #16)", 9502223},
    {"Gathersanity Item: Infinite Dust (disenchant bracket #16)", 9502224},
    {"Gathersanity Item: Greater Cosmic Essence (disenchant bracket #16)", 9502225},
    {"Gathersanity Item: Large Glowing Shard (disenchant bracket #17)", 9502226},
    {"Gathersanity Item: Large Brilliant Shard (disenchant bracket #18)", 9502227},
    {"Gathersanity Item: Lesser Magic Essence (disenchant bracket #21)", 9502228},
    {"Gathersanity Item: Strange Dust (disenchant bracket #21)", 9502229},
    {"Gathersanity Item: Greater Magic Essence (disenchant bracket #22)", 9502230},
    {"Gathersanity Item: Strange Dust (disenchant bracket #22)", 9502231},
    {"Gathersanity Item: Small Glimmering Shard (disenchant bracket #22)", 9502232},
    {"Gathersanity Item: Strange Dust (disenchant bracket #23)", 9502233},
    {"Gathersanity Item: Small Glimmering Shard (disenchant bracket #23)", 9502234},
    {"Gathersanity Item: Lesser Astral Essence (disenchant bracket #23)", 9502235},
    {"Gathersanity Item: Greater Astral Essence (disenchant bracket #24)", 9502236},
    {"Gathersanity Item: Soul Dust (disenchant bracket #24)", 9502237},
    {"Gathersanity Item: Large Glimmering Shard (disenchant bracket #24)", 9502238},
    {"Gathersanity Item: Soul Dust (disenchant bracket #25)", 9502239},
    {"Gathersanity Item: Lesser Mystic Essence (disenchant bracket #25)", 9502240},
    {"Gathersanity Item: Small Glowing Shard (disenchant bracket #25)", 9502241},
    {"Gathersanity Item: Greater Mystic Essence (disenchant bracket #26)", 9502242},
    {"Gathersanity Item: Vision Dust (disenchant bracket #26)", 9502243},
    {"Gathersanity Item: Large Glowing Shard (disenchant bracket #26)", 9502244},
    {"Gathersanity Item: Vision Dust (disenchant bracket #27)", 9502245},
    {"Gathersanity Item: Lesser Nether Essence (disenchant bracket #27)", 9502246},
    {"Gathersanity Item: Small Radiant Shard (disenchant bracket #27)", 9502247},
    {"Gathersanity Item: Greater Nether Essence (disenchant bracket #28)", 9502248},
    {"Gathersanity Item: Dream Dust (disenchant bracket #28)", 9502249},
    {"Gathersanity Item: Large Radiant Shard (disenchant bracket #28)", 9502250},
    {"Gathersanity Item: Dream Dust (disenchant bracket #29)", 9502251},
    {"Gathersanity Item: Small Brilliant Shard (disenchant bracket #29)", 9502252},
    {"Gathersanity Item: Lesser Eternal Essence (disenchant bracket #29)", 9502253},
    {"Gathersanity Item: Large Brilliant Shard (disenchant bracket #30)", 9502254},
    {"Gathersanity Item: Greater Eternal Essence (disenchant bracket #30)", 9502255},
    {"Gathersanity Item: Illusion Dust (disenchant bracket #30)", 9502256},
    {"Gathersanity Item: Large Brilliant Shard (disenchant bracket #31)", 9502257},
    {"Gathersanity Item: Greater Eternal Essence (disenchant bracket #31)", 9502258},
    {"Gathersanity Item: Illusion Dust (disenchant bracket #31)", 9502259},
    {"Gathersanity Item: Arcane Dust (disenchant bracket #32)", 9502260},
    {"Gathersanity Item: Lesser Planar Essence (disenchant bracket #32)", 9502261},
    {"Gathersanity Item: Small Prismatic Shard (disenchant bracket #32)", 9502262},
    {"Gathersanity Item: Arcane Dust (disenchant bracket #33)", 9502263},
    {"Gathersanity Item: Greater Planar Essence (disenchant bracket #33)", 9502264},
    {"Gathersanity Item: Large Prismatic Shard (disenchant bracket #33)", 9502265},
    {"Gathersanity Item: Small Dream Shard (disenchant bracket #34)", 9502266},
    {"Gathersanity Item: Infinite Dust (disenchant bracket #34)", 9502267},
    {"Gathersanity Item: Lesser Cosmic Essence (disenchant bracket #34)", 9502268},
    {"Gathersanity Item: Dream Shard (disenchant bracket #35)", 9502269},
    {"Gathersanity Item: Infinite Dust (disenchant bracket #35)", 9502270},
    {"Gathersanity Item: Greater Cosmic Essence (disenchant bracket #35)", 9502271},
    {"Gathersanity Item: Small Glimmering Shard (disenchant bracket #41)", 9502272},
    {"Gathersanity Item: Large Glimmering Shard (disenchant bracket #42)", 9502273},
    {"Gathersanity Item: Small Glowing Shard (disenchant bracket #43)", 9502274},
    {"Gathersanity Item: Large Glowing Shard (disenchant bracket #44)", 9502275},
    {"Gathersanity Item: Small Radiant Shard (disenchant bracket #45)", 9502276},
    {"Gathersanity Item: Large Radiant Shard (disenchant bracket #46)", 9502277},
    {"Gathersanity Item: Small Brilliant Shard (disenchant bracket #47)", 9502278},
    {"Gathersanity Item: Large Brilliant Shard (disenchant bracket #48)", 9502279},
    {"Gathersanity Item: Nexus Crystal (disenchant bracket #48)", 9502280},
    {"Gathersanity Item: Large Brilliant Shard (disenchant bracket #49)", 9502281},
    {"Gathersanity Item: Nexus Crystal (disenchant bracket #49)", 9502282},
    {"Gathersanity Item: Nexus Crystal (disenchant bracket #50)", 9502283},
    {"Gathersanity Item: Small Prismatic Shard (disenchant bracket #50)", 9502284},
    {"Gathersanity Item: Nexus Crystal (disenchant bracket #51)", 9502285},
    {"Gathersanity Item: Small Prismatic Shard (disenchant bracket #51)", 9502286},
    {"Gathersanity Item: Large Prismatic Shard (disenchant bracket #52)", 9502287},
    {"Gathersanity Item: Void Crystal (disenchant bracket #52)", 9502288},
    {"Gathersanity Item: Small Dream Shard (disenchant bracket #53)", 9502289},
    {"Gathersanity Item: Abyss Crystal (disenchant bracket #53)", 9502290},
    {"Gathersanity Item: Dream Shard (disenchant bracket #54)", 9502291},
    {"Gathersanity Item: Abyss Crystal (disenchant bracket #54)", 9502292},
    {"Gathersanity Item: Small Radiant Shard (disenchant bracket #61)", 9502293},
    {"Gathersanity Item: Large Radiant Shard (disenchant bracket #62)", 9502294},
    {"Gathersanity Item: Small Brilliant Shard (disenchant bracket #63)", 9502295},
    {"Gathersanity Item: Nexus Crystal (disenchant bracket #64)", 9502296},
    {"Gathersanity Item: Nexus Crystal (disenchant bracket #65)", 9502297},
    {"Gathersanity Item: Void Crystal (disenchant bracket #66)", 9502298},
    {"Gathersanity Item: Void Crystal (disenchant bracket #67)", 9502299},
    {"Gathersanity Item: Abyss Crystal (disenchant bracket #68)", 9502300},
    {"Gathersanity Item: Abyss Crystal (disenchant bracket #69)", 9502301},
};
inline std::map<std::string, uint32_t> BuildITEMS()
{
    std::map<std::string, uint32_t> result;
    for (auto const& row : ITEMS_RAW)
        result.emplace(row.first, row.second);
    return result;
}
inline const std::map<std::string, uint32_t> ITEMS = BuildITEMS();
inline constexpr std::pair<std::pair<uint32_t, uint32_t>, int64_t> GAMEOBJECT_LOOT_SLOT_TO_LOCATION_ID_RAW[] = {
    { { 1409, 3340 }, 9000000 }, // "Gathersanity: Incendicite Mineral Vein - Incendicite Ore (#1409/3340)"
    { { 1414, 765 }, 9000001 }, // "Gathersanity: Silverleaf - Silverleaf (#1414/765)"
    { { 1415, 2447 }, 9000002 }, // "Gathersanity: Peacebloom - Peacebloom (#1415/2447)"
    { { 1416, 2449 }, 9000003 }, // "Gathersanity: Earthroot - Earthroot (#1416/2449)"
    { { 1417, 785 }, 9000004 }, // "Gathersanity: Mageroyal - Mageroyal (#1417/785)"
    { { 1417, 2452 }, 9000005 }, // "Gathersanity: Mageroyal - Swiftthistle (#1417/2452)"
    { { 1418, 2450 }, 9000006 }, // "Gathersanity: Briarthorn - Briarthorn (#1418/2450)"
    { { 1418, 2452 }, 9000007 }, // "Gathersanity: Briarthorn - Swiftthistle (#1418/2452)"
    { { 1419, 2453 }, 9000008 }, // "Gathersanity: Bruiseweed - Bruiseweed (#1419/2453)"
    { { 1420, 3355 }, 9000009 }, // "Gathersanity: Wild Steelbloom - Wild Steelbloom (#1420/3355)"
    { { 1421, 3356 }, 9000010 }, // "Gathersanity: Kingsblood - Kingsblood (#1421/3356)"
    { { 1423, 3358 }, 9000011 }, // "Gathersanity: Khadgar's Whisker - Khadgar's Whisker (#1423/3358)"
    { { 1424, 3369 }, 9000012 }, // "Gathersanity: Grave Moss - Grave Moss (#1424/3369)"
    { { 1502, 774 }, 9000013 }, // "Gathersanity: Copper Vein - Malachite (#1502/774)"
    { { 1502, 818 }, 9000014 }, // "Gathersanity: Copper Vein - Tigerseye (#1502/818)"
    { { 1502, 1210 }, 9000015 }, // "Gathersanity: Copper Vein - Shadowgem (#1502/1210)"
    { { 1502, 2770 }, 9000016 }, // "Gathersanity: Copper Vein - Copper Ore (#1502/2770)"
    { { 1502, 2835 }, 9000017 }, // "Gathersanity: Copper Vein - Rough Stone (#1502/2835)"
    { { 1503, 1206 }, 9000018 }, // "Gathersanity: Tin Vein - Moss Agate (#1503/1206)"
    { { 1503, 1210 }, 9000019 }, // "Gathersanity: Tin Vein - Shadowgem (#1503/1210)"
    { { 1503, 1529 }, 9000020 }, // "Gathersanity: Tin Vein - Jade (#1503/1529)"
    { { 1503, 1705 }, 9000021 }, // "Gathersanity: Tin Vein - Lesser Moonstone (#1503/1705)"
    { { 1503, 2771 }, 9000022 }, // "Gathersanity: Tin Vein - Tin Ore (#1503/2771)"
    { { 1503, 2836 }, 9000023 }, // "Gathersanity: Tin Vein - Coarse Stone (#1503/2836)"
    { { 1504, 1206 }, 9000024 }, // "Gathersanity: Ooze Covered Silver Vein - Moss Agate (#1504/1206)"
    { { 1504, 1210 }, 9000025 }, // "Gathersanity: Ooze Covered Silver Vein - Shadowgem (#1504/1210)"
    { { 1504, 1705 }, 9000026 }, // "Gathersanity: Ooze Covered Silver Vein - Lesser Moonstone (#1504/1705)"
    { { 1504, 2775 }, 9000027 }, // "Gathersanity: Ooze Covered Silver Vein - Silver Ore (#1504/2775)"
    { { 1505, 1529 }, 9000028 }, // "Gathersanity: Iron Deposit - Jade (#1505/1529)"
    { { 1505, 1705 }, 9000029 }, // "Gathersanity: Iron Deposit - Lesser Moonstone (#1505/1705)"
    { { 1505, 2772 }, 9000030 }, // "Gathersanity: Iron Deposit - Iron Ore (#1505/2772)"
    { { 1505, 2838 }, 9000031 }, // "Gathersanity: Iron Deposit - Heavy Stone (#1505/2838)"
    { { 1505, 3864 }, 9000032 }, // "Gathersanity: Iron Deposit - Citrine (#1505/3864)"
    { { 1505, 7909 }, 9000033 }, // "Gathersanity: Iron Deposit - Aquamarine (#1505/7909)"
    { { 1506, 1705 }, 9000034 }, // "Gathersanity: Gold Vein - Lesser Moonstone (#1506/1705)"
    { { 1506, 2776 }, 9000035 }, // "Gathersanity: Gold Vein - Gold Ore (#1506/2776)"
    { { 1506, 3864 }, 9000036 }, // "Gathersanity: Gold Vein - Citrine (#1506/3864)"
    { { 1506, 7909 }, 9000037 }, // "Gathersanity: Gold Vein - Aquamarine (#1506/7909)"
    { { 1730, 3357 }, 9000038 }, // "Gathersanity: Liferoot - Liferoot (#1730/3357)"
    { { 1731, 3818 }, 9000039 }, // "Gathersanity: Fadeleaf - Fadeleaf (#1731/3818)"
    { { 1732, 3819 }, 9000040 }, // "Gathersanity: Wintersbite - Wintersbite (#1732/3819)"
    { { 1733, 3820 }, 9000041 }, // "Gathersanity: Stranglekelp - Stranglekelp (#1733/3820)"
    { { 1734, 3821 }, 9000042 }, // "Gathersanity: Goldthorn - Goldthorn (#1734/3821)"
    { { 1735, 774 }, 9000043 }, // "Gathersanity: Copper Vein - Malachite (#1735/774)"
    { { 1735, 818 }, 9000044 }, // "Gathersanity: Copper Vein - Tigerseye (#1735/818)"
    { { 1735, 1210 }, 9000045 }, // "Gathersanity: Copper Vein - Shadowgem (#1735/1210)"
    { { 1735, 2770 }, 9000046 }, // "Gathersanity: Copper Vein - Copper Ore (#1735/2770)"
    { { 1735, 2835 }, 9000047 }, // "Gathersanity: Copper Vein - Rough Stone (#1735/2835)"
    { { 1736, 1206 }, 9000048 }, // "Gathersanity: Tin Vein - Moss Agate (#1736/1206)"
    { { 1736, 1210 }, 9000049 }, // "Gathersanity: Tin Vein - Shadowgem (#1736/1210)"
    { { 1736, 1529 }, 9000050 }, // "Gathersanity: Tin Vein - Jade (#1736/1529)"
    { { 1736, 1705 }, 9000051 }, // "Gathersanity: Tin Vein - Lesser Moonstone (#1736/1705)"
    { { 1736, 2771 }, 9000052 }, // "Gathersanity: Tin Vein - Tin Ore (#1736/2771)"
    { { 1736, 2836 }, 9000053 }, // "Gathersanity: Tin Vein - Coarse Stone (#1736/2836)"
    { { 1742, 3858 }, 9000054 }, // "Gathersanity: Mithril Deposit - Mithril Ore (#1742/3858)"
    { { 1742, 3864 }, 9000055 }, // "Gathersanity: Mithril Deposit - Citrine (#1742/3864)"
    { { 1742, 7909 }, 9000056 }, // "Gathersanity: Mithril Deposit - Aquamarine (#1742/7909)"
    { { 1742, 7910 }, 9000057 }, // "Gathersanity: Mithril Deposit - Star Ruby (#1742/7910)"
    { { 1742, 7912 }, 9000058 }, // "Gathersanity: Mithril Deposit - Solid Stone (#1742/7912)"
    { { 1742, 9262 }, 9000059 }, // "Gathersanity: Mithril Deposit - Black Vitriol (#1742/9262)"
    { { 2039, 4278 }, 9000060 }, // "Gathersanity: Lesser Bloodstone Deposit - Lesser Bloodstone Ore (#2039/4278)"
    { { 2292, 4625 }, 9000061 }, // "Gathersanity: Firebloom - Firebloom (#2292/4625)"
    { { 2511, 765 }, 9000062 }, // "Gathersanity: Silverleaf - Silverleaf (#2511/765)"
    { { 2512, 2447 }, 9000063 }, // "Gathersanity: Peacebloom - Peacebloom (#2512/2447)"
    { { 2513, 2449 }, 9000064 }, // "Gathersanity: Earthroot - Earthroot (#2513/2449)"
    { { 2514, 785 }, 9000065 }, // "Gathersanity: Mageroyal - Mageroyal (#2514/785)"
    { { 2514, 2452 }, 9000066 }, // "Gathersanity: Mageroyal - Swiftthistle (#2514/2452)"
    { { 2515, 2450 }, 9000067 }, // "Gathersanity: Briarthorn - Briarthorn (#2515/2450)"
    { { 2515, 2452 }, 9000068 }, // "Gathersanity: Briarthorn - Swiftthistle (#2515/2452)"
    { { 2516, 2453 }, 9000069 }, // "Gathersanity: Bruiseweed - Bruiseweed (#2516/2453)"
    { { 2626, 774 }, 9000070 }, // "Gathersanity: Copper Vein - Malachite (#2626/774)"
    { { 2626, 818 }, 9000071 }, // "Gathersanity: Copper Vein - Tigerseye (#2626/818)"
    { { 2626, 1210 }, 9000072 }, // "Gathersanity: Copper Vein - Shadowgem (#2626/1210)"
    { { 2626, 2770 }, 9000073 }, // "Gathersanity: Copper Vein - Copper Ore (#2626/2770)"
    { { 2626, 2835 }, 9000074 }, // "Gathersanity: Copper Vein - Rough Stone (#2626/2835)"
    { { 2626, 5075 }, 9000075 }, // "Gathersanity: Copper Vein - Blood Shard (#2626/5075)"
    { { 2627, 1206 }, 9000076 }, // "Gathersanity: Tin Vein - Moss Agate (#2627/1206)"
    { { 2627, 1210 }, 9000077 }, // "Gathersanity: Tin Vein - Shadowgem (#2627/1210)"
    { { 2627, 1529 }, 9000078 }, // "Gathersanity: Tin Vein - Jade (#2627/1529)"
    { { 2627, 1705 }, 9000079 }, // "Gathersanity: Tin Vein - Lesser Moonstone (#2627/1705)"
    { { 2627, 2771 }, 9000080 }, // "Gathersanity: Tin Vein - Tin Ore (#2627/2771)"
    { { 2627, 2836 }, 9000081 }, // "Gathersanity: Tin Vein - Coarse Stone (#2627/2836)"
    { { 2627, 5075 }, 9000082 }, // "Gathersanity: Tin Vein - Blood Shard (#2627/5075)"
    { { 3266, 5833 }, 9000083 }, // "Gathersanity: Indurium Mineral Vein - Indurium Ore (#3266/5833)"
    { { 5045, 3864 }, 9000084 }, // "Gathersanity: Ooze Covered Truesilver Deposit - Citrine (#5045/3864)"
    { { 5045, 7909 }, 9000085 }, // "Gathersanity: Ooze Covered Truesilver Deposit - Aquamarine (#5045/7909)"
    { { 5045, 7910 }, 9000086 }, // "Gathersanity: Ooze Covered Truesilver Deposit - Star Ruby (#5045/7910)"
    { { 5045, 7911 }, 9000087 }, // "Gathersanity: Ooze Covered Truesilver Deposit - Truesilver Ore (#5045/7911)"
    { { 6142, 8153 }, 9000088 }, // "Gathersanity: Purple Lotus - Wildvine (#6142/8153)"
    { { 6142, 8831 }, 9000089 }, // "Gathersanity: Purple Lotus - Purple Lotus (#6142/8831)"
    { { 6150, 8836 }, 9000090 }, // "Gathersanity: Arthas' Tears - Arthas' Tears (#6150/8836)"
    { { 6151, 8838 }, 9000091 }, // "Gathersanity: Sungrass - Sungrass (#6151/8838)"
    { { 6152, 8839 }, 9000092 }, // "Gathersanity: Blindweed - Blindweed (#6152/8839)"
    { { 6312, 8845 }, 9000093 }, // "Gathersanity: Ghost Mushroom - Ghost Mushroom (#6312/8845)"
    { { 6313, 8846 }, 9000094 }, // "Gathersanity: Gromsblood - Gromsblood (#6313/8846)"
    { { 9597, 10620 }, 9000095 }, // "Gathersanity: Ooze Covered Thorium Vein - Thorium Ore (#9597/10620)"
    { { 9597, 12365 }, 9000096 }, // "Gathersanity: Ooze Covered Thorium Vein - Dense Stone (#9597/12365)"
    { { 11213, 9262 }, 9000097 }, // "Gathersanity: Dark Iron Deposit - Black Vitriol (#11213/9262)"
    { { 11213, 11370 }, 9000098 }, // "Gathersanity: Dark Iron Deposit - Dark Iron Ore (#11213/11370)"
    { { 11213, 11382 }, 9000099 }, // "Gathersanity: Dark Iron Deposit - Blood of the Mountain (#11213/11382)"
    { { 11213, 11754 }, 9000100 }, // "Gathersanity: Dark Iron Deposit - Black Diamond (#11213/11754)"
    { { 12883, 10620 }, 9000101 }, // "Gathersanity: Ooze Covered Rich Thorium Vein - Thorium Ore (#12883/10620)"
    { { 12883, 12365 }, 9000102 }, // "Gathersanity: Ooze Covered Rich Thorium Vein - Dense Stone (#12883/12365)"
    { { 13945, 13464 }, 9000103 }, // "Gathersanity: Golden Sansam - Golden Sansam (#13945/13464)"
    { { 13946, 13463 }, 9000104 }, // "Gathersanity: Dreamfoil - Dreamfoil (#13946/13463)"
    { { 13947, 13465 }, 9000105 }, // "Gathersanity: Mountain Silversage - Mountain Silversage (#13947/13465)"
    { { 13949, 13467 }, 9000106 }, // "Gathersanity: Icecap - Icecap (#13949/13467)"
    { { 13950, 13468 }, 9000107 }, // "Gathersanity: Black Lotus - Black Lotus (#13950/13468)"
    { { 13960, 10620 }, 9000108 }, // "Gathersanity: Small Thorium Vein - Thorium Ore (#13960/10620)"
    { { 13960, 11513 }, 9000109 }, // "Gathersanity: Small Thorium Vein - Tainted Vitriol (#13960/11513)"
    { { 13960, 12365 }, 9000110 }, // "Gathersanity: Small Thorium Vein - Dense Stone (#13960/12365)"
    { { 13961, 3858 }, 9000111 }, // "Gathersanity: Mithril Deposit - Mithril Ore (#13961/3858)"
    { { 13961, 3864 }, 9000112 }, // "Gathersanity: Mithril Deposit - Citrine (#13961/3864)"
    { { 13961, 7909 }, 9000113 }, // "Gathersanity: Mithril Deposit - Aquamarine (#13961/7909)"
    { { 13961, 7910 }, 9000114 }, // "Gathersanity: Mithril Deposit - Star Ruby (#13961/7910)"
    { { 13961, 7912 }, 9000115 }, // "Gathersanity: Mithril Deposit - Solid Stone (#13961/7912)"
    { { 13961, 9262 }, 9000116 }, // "Gathersanity: Mithril Deposit - Black Vitriol (#13961/9262)"
    { { 13961, 11513 }, 9000117 }, // "Gathersanity: Mithril Deposit - Tainted Vitriol (#13961/11513)"
    { { 13965, 8838 }, 9000118 }, // "Gathersanity: Sungrass - Sungrass (#13965/8838)"
    { { 13965, 11514 }, 9000119 }, // "Gathersanity: Sungrass - Fel Creep (#13965/11514)"
    { { 13966, 8846 }, 9000120 }, // "Gathersanity: Gromsblood - Gromsblood (#13966/8846)"
    { { 13966, 11514 }, 9000121 }, // "Gathersanity: Gromsblood - Fel Creep (#13966/11514)"
    { { 13967, 11514 }, 9000122 }, // "Gathersanity: Golden Sansam - Fel Creep (#13967/11514)"
    { { 13967, 13464 }, 9000123 }, // "Gathersanity: Golden Sansam - Golden Sansam (#13967/13464)"
    { { 13968, 11514 }, 9000124 }, // "Gathersanity: Dreamfoil - Fel Creep (#13968/11514)"
    { { 13968, 13463 }, 9000125 }, // "Gathersanity: Dreamfoil - Dreamfoil (#13968/13463)"
    { { 13969, 11514 }, 9000126 }, // "Gathersanity: Mountain Silversage - Fel Creep (#13969/11514)"
    { { 13969, 13465 }, 9000127 }, // "Gathersanity: Mountain Silversage - Mountain Silversage (#13969/13465)"
    { { 13970, 8836 }, 9000128 }, // "Gathersanity: Arthas' Tears - Arthas' Tears (#13970/8836)"
    { { 13970, 11514 }, 9000129 }, // "Gathersanity: Arthas' Tears - Fel Creep (#13970/11514)"
    { { 17200, 8153 }, 9000130 }, // "Gathersanity: Purple Lotus - Wildvine (#17200/8153)"
    { { 17200, 8831 }, 9000131 }, // "Gathersanity: Purple Lotus - Purple Lotus (#17200/8831)"
    { { 17200, 19726 }, 9000132 }, // "Gathersanity: Purple Lotus - Bloodvine (#17200/19726)"
    { { 17201, 8838 }, 9000133 }, // "Gathersanity: Sungrass - Sungrass (#17201/8838)"
    { { 17201, 19726 }, 9000134 }, // "Gathersanity: Sungrass - Bloodvine (#17201/19726)"
    { { 17202, 13464 }, 9000135 }, // "Gathersanity: Golden Sansam - Golden Sansam (#17202/13464)"
    { { 17202, 19726 }, 9000136 }, // "Gathersanity: Golden Sansam - Bloodvine (#17202/19726)"
    { { 17203, 13463 }, 9000137 }, // "Gathersanity: Dreamfoil - Dreamfoil (#17203/13463)"
    { { 17203, 19726 }, 9000138 }, // "Gathersanity: Dreamfoil - Bloodvine (#17203/19726)"
    { { 17204, 13465 }, 9000139 }, // "Gathersanity: Mountain Silversage - Mountain Silversage (#17204/13465)"
    { { 17204, 19726 }, 9000140 }, // "Gathersanity: Mountain Silversage - Bloodvine (#17204/19726)"
    { { 17241, 10620 }, 9000141 }, // "Gathersanity: Hakkari Thorium Vein - Thorium Ore (#17241/10620)"
    { { 17241, 12365 }, 9000142 }, // "Gathersanity: Hakkari Thorium Vein - Dense Stone (#17241/12365)"
    { { 17241, 19774 }, 9000143 }, // "Gathersanity: Hakkari Thorium Vein - Souldarite (#17241/19774)"
    { { 17938, 3864 }, 9000144 }, // "Gathersanity: Truesilver Deposit - Citrine (#17938/3864)"
    { { 17938, 7909 }, 9000145 }, // "Gathersanity: Truesilver Deposit - Aquamarine (#17938/7909)"
    { { 17938, 7910 }, 9000146 }, // "Gathersanity: Truesilver Deposit - Star Ruby (#17938/7910)"
    { { 17938, 7911 }, 9000147 }, // "Gathersanity: Truesilver Deposit - Truesilver Ore (#17938/7911)"
    { { 17938, 11513 }, 9000148 }, // "Gathersanity: Truesilver Deposit - Tainted Vitriol (#17938/11513)"
    { { 17939, 1705 }, 9000149 }, // "Gathersanity: Gold Vein - Lesser Moonstone (#17939/1705)"
    { { 17939, 2776 }, 9000150 }, // "Gathersanity: Gold Vein - Gold Ore (#17939/2776)"
    { { 17939, 3864 }, 9000151 }, // "Gathersanity: Gold Vein - Citrine (#17939/3864)"
    { { 17939, 7909 }, 9000152 }, // "Gathersanity: Gold Vein - Aquamarine (#17939/7909)"
    { { 18092, 774 }, 9000153 }, // "Gathersanity: Copper Vein - Malachite (#18092/774)"
    { { 18092, 818 }, 9000154 }, // "Gathersanity: Copper Vein - Tigerseye (#18092/818)"
    { { 18092, 1210 }, 9000155 }, // "Gathersanity: Copper Vein - Shadowgem (#18092/1210)"
    { { 18092, 2770 }, 9000156 }, // "Gathersanity: Copper Vein - Copper Ore (#18092/2770)"
    { { 18092, 2835 }, 9000157 }, // "Gathersanity: Copper Vein - Rough Stone (#18092/2835)"
    { { 18093, 1206 }, 9000158 }, // "Gathersanity: Tin Vein - Moss Agate (#18093/1206)"
    { { 18093, 1210 }, 9000159 }, // "Gathersanity: Tin Vein - Shadowgem (#18093/1210)"
    { { 18093, 1529 }, 9000160 }, // "Gathersanity: Tin Vein - Jade (#18093/1529)"
    { { 18093, 1705 }, 9000161 }, // "Gathersanity: Tin Vein - Lesser Moonstone (#18093/1705)"
    { { 18093, 2771 }, 9000162 }, // "Gathersanity: Tin Vein - Tin Ore (#18093/2771)"
    { { 18093, 2836 }, 9000163 }, // "Gathersanity: Tin Vein - Coarse Stone (#18093/2836)"
    { { 18111, 22575 }, 9000164 }, // "Gathersanity: Felweed - Mote of Life (#18111/22575)"
    { { 18111, 22785 }, 9000165 }, // "Gathersanity: Felweed - Felweed (#18111/22785)"
    { { 18111, 22794 }, 9000166 }, // "Gathersanity: Felweed - Fel Lotus (#18111/22794)"
    { { 18111, 22795 }, 9000167 }, // "Gathersanity: Felweed - Fel Blossom (#18111/22795)"
    { { 18112, 22575 }, 9000168 }, // "Gathersanity: Dreaming Glory - Mote of Life (#18112/22575)"
    { { 18112, 22786 }, 9000169 }, // "Gathersanity: Dreaming Glory - Dreaming Glory (#18112/22786)"
    { { 18112, 22794 }, 9000170 }, // "Gathersanity: Dreaming Glory - Fel Lotus (#18112/22794)"
    { { 18113, 22575 }, 9000171 }, // "Gathersanity: Ragveil - Mote of Life (#18113/22575)"
    { { 18113, 22787 }, 9000172 }, // "Gathersanity: Ragveil - Ragveil (#18113/22787)"
    { { 18113, 22794 }, 9000173 }, // "Gathersanity: Ragveil - Fel Lotus (#18113/22794)"
    { { 18114, 22788 }, 9000174 }, // "Gathersanity: Flame Cap - Flame Cap (#18114/22788)"
    { { 18114, 22794 }, 9000175 }, // "Gathersanity: Flame Cap - Fel Lotus (#18114/22794)"
    { { 18115, 22575 }, 9000176 }, // "Gathersanity: Terocone - Mote of Life (#18115/22575)"
    { { 18115, 22789 }, 9000177 }, // "Gathersanity: Terocone - Terocone (#18115/22789)"
    { { 18115, 22794 }, 9000178 }, // "Gathersanity: Terocone - Fel Lotus (#18115/22794)"
    { { 18116, 22790 }, 9000179 }, // "Gathersanity: Ancient Lichen - Ancient Lichen (#18116/22790)"
    { { 18116, 22794 }, 9000180 }, // "Gathersanity: Ancient Lichen - Fel Lotus (#18116/22794)"
    { { 18117, 22576 }, 9000181 }, // "Gathersanity: Netherbloom - Mote of Mana (#18117/22576)"
    { { 18117, 22791 }, 9000182 }, // "Gathersanity: Netherbloom - Netherbloom (#18117/22791)"
    { { 18117, 22794 }, 9000183 }, // "Gathersanity: Netherbloom - Fel Lotus (#18117/22794)"
    { { 18118, 22575 }, 9000184 }, // "Gathersanity: Nightmare Vine - Mote of Life (#18118/22575)"
    { { 18118, 22792 }, 9000185 }, // "Gathersanity: Nightmare Vine - Nightmare Vine (#18118/22792)"
    { { 18118, 22794 }, 9000186 }, // "Gathersanity: Nightmare Vine - Fel Lotus (#18118/22794)"
    { { 18119, 22575 }, 9000187 }, // "Gathersanity: Mana Thistle - Mote of Life (#18119/22575)"
    { { 18119, 22793 }, 9000188 }, // "Gathersanity: Mana Thistle - Mana Thistle (#18119/22793)"
    { { 18119, 22794 }, 9000189 }, // "Gathersanity: Mana Thistle - Fel Lotus (#18119/22794)"
    { { 18359, 22573 }, 9000190 }, // "Gathersanity: Fel Iron Deposit - Mote of Earth (#18359/22573)"
    { { 18359, 22574 }, 9000191 }, // "Gathersanity: Fel Iron Deposit - Mote of Fire (#18359/22574)"
    { { 18359, 23424 }, 9000192 }, // "Gathersanity: Fel Iron Deposit - Fel Iron Ore (#18359/23424)"
    { { 18359, 23427 }, 9000193 }, // "Gathersanity: Fel Iron Deposit - Eternium Ore (#18359/23427)"
    { { 18361, 22573 }, 9000194 }, // "Gathersanity: Adamantite Deposit - Mote of Earth (#18361/22573)"
    { { 18361, 23425 }, 9000195 }, // "Gathersanity: Adamantite Deposit - Adamantite Ore (#18361/23425)"
    { { 18361, 23427 }, 9000196 }, // "Gathersanity: Adamantite Deposit - Eternium Ore (#18361/23427)"
    { { 18363, 22573 }, 9000197 }, // "Gathersanity: Khorium Vein - Mote of Earth (#18363/22573)"
    { { 18363, 22574 }, 9000198 }, // "Gathersanity: Khorium Vein - Mote of Fire (#18363/22574)"
    { { 18363, 23426 }, 9000199 }, // "Gathersanity: Khorium Vein - Khorium Ore (#18363/23426)"
    { { 18363, 23427 }, 9000200 }, // "Gathersanity: Khorium Vein - Eternium Ore (#18363/23427)"
    { { 19627, 22575 }, 9000201 }, // "Gathersanity: Ragveil - Mote of Life (#19627/22575)"
    { { 19627, 22787 }, 9000202 }, // "Gathersanity: Ragveil - Ragveil (#19627/22787)"
    { { 19627, 22794 }, 9000203 }, // "Gathersanity: Ragveil - Fel Lotus (#19627/22794)"
    { { 19627, 24401 }, 9000204 }, // "Gathersanity: Ragveil - Unidentified Plant Parts (#19627/24401)"
    { { 19628, 22575 }, 9000205 }, // "Gathersanity: Felweed - Mote of Life (#19628/22575)"
    { { 19628, 22785 }, 9000206 }, // "Gathersanity: Felweed - Felweed (#19628/22785)"
    { { 19628, 22794 }, 9000207 }, // "Gathersanity: Felweed - Fel Lotus (#19628/22794)"
    { { 19628, 24401 }, 9000208 }, // "Gathersanity: Felweed - Unidentified Plant Parts (#19628/24401)"
    { { 19629, 22575 }, 9000209 }, // "Gathersanity: Dreaming Glory - Mote of Life (#19629/22575)"
    { { 19629, 22786 }, 9000210 }, // "Gathersanity: Dreaming Glory - Dreaming Glory (#19629/22786)"
    { { 19629, 22794 }, 9000211 }, // "Gathersanity: Dreaming Glory - Fel Lotus (#19629/22794)"
    { { 19629, 24401 }, 9000212 }, // "Gathersanity: Dreaming Glory - Unidentified Plant Parts (#19629/24401)"
    { { 19630, 8839 }, 9000213 }, // "Gathersanity: Blindweed - Blindweed (#19630/8839)"
    { { 19630, 24401 }, 9000214 }, // "Gathersanity: Blindweed - Unidentified Plant Parts (#19630/24401)"
    { { 19848, 24246 }, 9000215 }, // "Gathersanity: Sanguine Hibiscus - Sanguine Hibiscus (#19848/24246)"
    { { 22070, 22573 }, 9000216 }, // "Gathersanity: Nethercite Deposit - Mote of Earth (#22070/22573)"
    { { 22070, 22574 }, 9000217 }, // "Gathersanity: Nethercite Deposit - Mote of Fire (#22070/22574)"
    { { 22070, 32464 }, 9000218 }, // "Gathersanity: Nethercite Deposit - Nethercite Ore (#22070/32464)"
    { { 22070, 32506 }, 9000219 }, // "Gathersanity: Nethercite Deposit - Netherwing Egg (#22070/32506)"
    { { 22071, 22576 }, 9000220 }, // "Gathersanity: Netherdust Bush - Mote of Mana (#22071/22576)"
    { { 22071, 22794 }, 9000221 }, // "Gathersanity: Netherdust Bush - Fel Lotus (#22071/22794)"
    { { 22071, 32468 }, 9000222 }, // "Gathersanity: Netherdust Bush - Netherdust Pollen (#22071/32468)"
    { { 22071, 32506 }, 9000223 }, // "Gathersanity: Netherdust Bush - Netherwing Egg (#22071/32506)"
    { { 24093, 36901 }, 9000224 }, // "Gathersanity: Goldclover - Goldclover (#24093/36901)"
    { { 24093, 36908 }, 9000225 }, // "Gathersanity: Goldclover - Frost Lotus (#24093/36908)"
    { { 24093, 37704 }, 9000226 }, // "Gathersanity: Goldclover - Crystallized Life (#24093/37704)"
    { { 24093, 37921 }, 9000227 }, // "Gathersanity: Goldclover - Deadnettle (#24093/37921)"
    { { 24153, 36909 }, 9000228 }, // "Gathersanity: Cobalt Deposit - Cobalt Ore (#24153/36909)"
    { { 24153, 37701 }, 9000229 }, // "Gathersanity: Cobalt Deposit - Crystallized Earth (#24153/37701)"
    { { 24153, 37705 }, 9000230 }, // "Gathersanity: Cobalt Deposit - Crystallized Water (#24153/37705)"
    { { 24154, 36909 }, 9000231 }, // "Gathersanity: Rich Cobalt Deposit - Cobalt Ore (#24154/36909)"
    { { 24154, 37701 }, 9000232 }, // "Gathersanity: Rich Cobalt Deposit - Crystallized Earth (#24154/37701)"
    { { 24154, 37705 }, 9000233 }, // "Gathersanity: Rich Cobalt Deposit - Crystallized Water (#24154/37705)"
    { { 24155, 36912 }, 9000234 }, // "Gathersanity: Saronite Deposit - Saronite Ore (#24155/36912)"
    { { 24155, 37701 }, 9000235 }, // "Gathersanity: Saronite Deposit - Crystallized Earth (#24155/37701)"
    { { 24155, 37703 }, 9000236 }, // "Gathersanity: Saronite Deposit - Crystallized Shadow (#24155/37703)"
    { { 24156, 36912 }, 9000237 }, // "Gathersanity: Rich Saronite Deposit - Saronite Ore (#24156/36912)"
    { { 24156, 37701 }, 9000238 }, // "Gathersanity: Rich Saronite Deposit - Crystallized Earth (#24156/37701)"
    { { 24156, 37703 }, 9000239 }, // "Gathersanity: Rich Saronite Deposit - Crystallized Shadow (#24156/37703)"
    { { 24157, 36910 }, 9000240 }, // "Gathersanity: Titanium Vein - Titanium Ore (#24157/36910)"
    { { 24157, 37700 }, 9000241 }, // "Gathersanity: Titanium Vein - Crystallized Air (#24157/37700)"
    { { 24157, 37701 }, 9000242 }, // "Gathersanity: Titanium Vein - Crystallized Earth (#24157/37701)"
    { { 24157, 37702 }, 9000243 }, // "Gathersanity: Titanium Vein - Crystallized Fire (#24157/37702)"
    { { 24157, 37705 }, 9000244 }, // "Gathersanity: Titanium Vein - Crystallized Water (#24157/37705)"
    { { 24224, 36904 }, 9000245 }, // "Gathersanity: Tiger Lily - Tiger Lily (#24224/36904)"
    { { 24224, 36908 }, 9000246 }, // "Gathersanity: Tiger Lily - Frost Lotus (#24224/36908)"
    { { 24224, 37704 }, 9000247 }, // "Gathersanity: Tiger Lily - Crystallized Life (#24224/37704)"
    { { 24224, 37921 }, 9000248 }, // "Gathersanity: Tiger Lily - Deadnettle (#24224/37921)"
    { { 24225, 36907 }, 9000249 }, // "Gathersanity: Talandra's Rose - Talandra's Rose (#24225/36907)"
    { { 24225, 36908 }, 9000250 }, // "Gathersanity: Talandra's Rose - Frost Lotus (#24225/36908)"
    { { 24225, 37704 }, 9000251 }, // "Gathersanity: Talandra's Rose - Crystallized Life (#24225/37704)"
    { { 24225, 37921 }, 9000252 }, // "Gathersanity: Talandra's Rose - Deadnettle (#24225/37921)"
    { { 24226, 36905 }, 9000253 }, // "Gathersanity: Lichbloom - Lichbloom (#24226/36905)"
    { { 24226, 36908 }, 9000254 }, // "Gathersanity: Lichbloom - Frost Lotus (#24226/36908)"
    { { 24226, 37704 }, 9000255 }, // "Gathersanity: Lichbloom - Crystallized Life (#24226/37704)"
    { { 24227, 36906 }, 9000256 }, // "Gathersanity: Icethorn - Icethorn (#24227/36906)"
    { { 24227, 36908 }, 9000257 }, // "Gathersanity: Icethorn - Frost Lotus (#24227/36908)"
    { { 24227, 37704 }, 9000258 }, // "Gathersanity: Icethorn - Crystallized Life (#24227/37704)"
    { { 24228, 36908 }, 9000259 }, // "Gathersanity: Frost Lotus - Frost Lotus (#24228/36908)"
    { { 24228, 37704 }, 9000260 }, // "Gathersanity: Frost Lotus - Crystallized Life (#24228/37704)"
    { { 24228, 37921 }, 9000261 }, // "Gathersanity: Frost Lotus - Deadnettle (#24228/37921)"
    { { 25089, 36908 }, 9000262 }, // "Gathersanity: Firethorn - Frost Lotus (#25089/36908)"
    { { 25089, 37704 }, 9000263 }, // "Gathersanity: Firethorn - Crystallized Life (#25089/37704)"
    { { 25089, 39969 }, 9000264 }, // "Gathersanity: Firethorn - Fire Seed (#25089/39969)"
    { { 25089, 39970 }, 9000265 }, // "Gathersanity: Firethorn - Fire Leaf (#25089/39970)"
    { { 25093, 36903 }, 9000266 }, // "Gathersanity: Adder's Tongue - Adder's Tongue (#25093/36903)"
    { { 25093, 36908 }, 9000267 }, // "Gathersanity: Adder's Tongue - Frost Lotus (#25093/36908)"
    { { 25093, 37704 }, 9000268 }, // "Gathersanity: Adder's Tongue - Crystallized Life (#25093/37704)"
    { { 25094, 36901 }, 9000269 }, // "Gathersanity: Frozen Herb - Goldclover (#25094/36901)"
    { { 25094, 36904 }, 9000270 }, // "Gathersanity: Frozen Herb - Tiger Lily (#25094/36904)"
    { { 25094, 36907 }, 9000271 }, // "Gathersanity: Frozen Herb - Talandra's Rose (#25094/36907)"
    { { 25095, 36901 }, 9000272 }, // "Gathersanity: Frozen Herb - Goldclover (#25095/36901)"
    { { 25095, 36904 }, 9000273 }, // "Gathersanity: Frozen Herb - Tiger Lily (#25095/36904)"
    { { 25095, 36907 }, 9000274 }, // "Gathersanity: Frozen Herb - Talandra's Rose (#25095/36907)"
    { { 25096, 36901 }, 9000275 }, // "Gathersanity: Frozen Herb - Goldclover (#25096/36901)"
    { { 25096, 36904 }, 9000276 }, // "Gathersanity: Frozen Herb - Tiger Lily (#25096/36904)"
    { { 25096, 36907 }, 9000277 }, // "Gathersanity: Frozen Herb - Talandra's Rose (#25096/36907)"
    { { 26861, 22573 }, 9000278 }, // "Gathersanity: Rich Adamantite Deposit - Mote of Earth (#26861/22573)"
    { { 26861, 23425 }, 9000279 }, // "Gathersanity: Rich Adamantite Deposit - Adamantite Ore (#26861/23425)"
    { { 26861, 23427 }, 9000280 }, // "Gathersanity: Rich Adamantite Deposit - Eternium Ore (#26861/23427)"
    { { 27244, 35624 }, 9000281 }, // "Gathersanity: Pure Saronite Deposit - Eternal Earth (#27244/35624)"
    { { 27244, 35627 }, 9000282 }, // "Gathersanity: Pure Saronite Deposit - Eternal Shadow (#27244/35627)"
    { { 27244, 36912 }, 9000283 }, // "Gathersanity: Pure Saronite Deposit - Saronite Ore (#27244/36912)"
};
inline std::map<std::pair<uint32_t, uint32_t>, int64_t> BuildGAMEOBJECT_LOOT_SLOT_TO_LOCATION_ID()
{
    std::map<std::pair<uint32_t, uint32_t>, int64_t> result;
    for (auto const& row : GAMEOBJECT_LOOT_SLOT_TO_LOCATION_ID_RAW)
        result.emplace(row.first, row.second);
    return result;
}
inline const std::map<std::pair<uint32_t, uint32_t>, int64_t> GAMEOBJECT_LOOT_SLOT_TO_LOCATION_ID = BuildGAMEOBJECT_LOOT_SLOT_TO_LOCATION_ID();

inline constexpr std::pair<std::pair<uint32_t, uint32_t>, int64_t> SKINNING_LOOT_SLOT_TO_LOCATION_ID_RAW[] = {
    { { 193, 4304 }, 9000284 }, // "Gathersanity: Thick Leather (skinning #193/4304)"
    { { 193, 8165 }, 9000285 }, // "Gathersanity: Worn Dragonscale (skinning #193/8165)"
    { { 193, 8169 }, 9000286 }, // "Gathersanity: Thick Hide (skinning #193/8169)"
    { { 193, 8170 }, 9000287 }, // "Gathersanity: Rugged Leather (skinning #193/8170)"
    { { 193, 8171 }, 9000288 }, // "Gathersanity: Rugged Hide (skinning #193/8171)"
    { { 193, 15415 }, 9000289 }, // "Gathersanity: Blue Dragonscale (skinning #193/15415)"
    { { 441, 783 }, 9000290 }, // "Gathersanity: Light Hide (skinning #441/783)"
    { { 441, 2318 }, 9000291 }, // "Gathersanity: Light Leather (skinning #441/2318)"
    { { 441, 4232 }, 9000292 }, // "Gathersanity: Medium Hide (skinning #441/4232)"
    { { 441, 7286 }, 9000293 }, // "Gathersanity: Black Whelp Scale (skinning #441/7286)"
    { { 534, 2319 }, 9000294 }, // "Gathersanity: Medium Leather (skinning #534/2319)"
    { { 534, 4232 }, 9000295 }, // "Gathersanity: Medium Hide (skinning #534/4232)"
    { { 534, 4234 }, 9000296 }, // "Gathersanity: Heavy Leather (skinning #534/4234)"
    { { 534, 4235 }, 9000297 }, // "Gathersanity: Heavy Hide (skinning #534/4235)"
    { { 684, 4234 }, 9000298 }, // "Gathersanity: Heavy Leather (skinning #684/4234)"
    { { 684, 4235 }, 9000299 }, // "Gathersanity: Heavy Hide (skinning #684/4235)"
    { { 684, 4304 }, 9000300 }, // "Gathersanity: Thick Leather (skinning #684/4304)"
    { { 729, 4234 }, 9000301 }, // "Gathersanity: Heavy Leather (skinning #729/4234)"
    { { 729, 4235 }, 9000302 }, // "Gathersanity: Heavy Hide (skinning #729/4235)"
    { { 729, 4304 }, 9000303 }, // "Gathersanity: Thick Leather (skinning #729/4304)"
    { { 731, 4304 }, 9000304 }, // "Gathersanity: Thick Leather (skinning #731/4304)"
    { { 731, 8169 }, 9000305 }, // "Gathersanity: Thick Hide (skinning #731/8169)"
    { { 731, 8170 }, 9000306 }, // "Gathersanity: Rugged Leather (skinning #731/8170)"
    { { 740, 2319 }, 9000307 }, // "Gathersanity: Medium Leather (skinning #740/2319)"
    { { 740, 4232 }, 9000308 }, // "Gathersanity: Medium Hide (skinning #740/4232)"
    { { 740, 4234 }, 9000309 }, // "Gathersanity: Heavy Leather (skinning #740/4234)"
    { { 740, 4235 }, 9000310 }, // "Gathersanity: Heavy Hide (skinning #740/4235)"
    { { 740, 7392 }, 9000311 }, // "Gathersanity: Green Whelp Scale (skinning #740/7392)"
    { { 741, 2319 }, 9000312 }, // "Gathersanity: Medium Leather (skinning #741/2319)"
    { { 741, 4232 }, 9000313 }, // "Gathersanity: Medium Hide (skinning #741/4232)"
    { { 741, 4234 }, 9000314 }, // "Gathersanity: Heavy Leather (skinning #741/4234)"
    { { 741, 4235 }, 9000315 }, // "Gathersanity: Heavy Hide (skinning #741/4235)"
    { { 741, 7392 }, 9000316 }, // "Gathersanity: Green Whelp Scale (skinning #741/7392)"
    { { 742, 4234 }, 9000317 }, // "Gathersanity: Heavy Leather (skinning #742/4234)"
    { { 742, 4235 }, 9000318 }, // "Gathersanity: Heavy Hide (skinning #742/4235)"
    { { 742, 4304 }, 9000319 }, // "Gathersanity: Thick Leather (skinning #742/4304)"
    { { 742, 8165 }, 9000320 }, // "Gathersanity: Worn Dragonscale (skinning #742/8165)"
    { { 742, 8169 }, 9000321 }, // "Gathersanity: Thick Hide (skinning #742/8169)"
    { { 742, 15412 }, 9000322 }, // "Gathersanity: Green Dragonscale (skinning #742/15412)"
    { { 743, 4234 }, 9000323 }, // "Gathersanity: Heavy Leather (skinning #743/4234)"
    { { 743, 4235 }, 9000324 }, // "Gathersanity: Heavy Hide (skinning #743/4235)"
    { { 743, 4304 }, 9000325 }, // "Gathersanity: Thick Leather (skinning #743/4304)"
    { { 743, 8165 }, 9000326 }, // "Gathersanity: Worn Dragonscale (skinning #743/8165)"
    { { 743, 8169 }, 9000327 }, // "Gathersanity: Thick Hide (skinning #743/8169)"
    { { 743, 15412 }, 9000328 }, // "Gathersanity: Green Dragonscale (skinning #743/15412)"
    { { 744, 4234 }, 9000329 }, // "Gathersanity: Heavy Leather (skinning #744/4234)"
    { { 744, 4235 }, 9000330 }, // "Gathersanity: Heavy Hide (skinning #744/4235)"
    { { 744, 4304 }, 9000331 }, // "Gathersanity: Thick Leather (skinning #744/4304)"
    { { 744, 8165 }, 9000332 }, // "Gathersanity: Worn Dragonscale (skinning #744/8165)"
    { { 744, 8169 }, 9000333 }, // "Gathersanity: Thick Hide (skinning #744/8169)"
    { { 744, 15412 }, 9000334 }, // "Gathersanity: Green Dragonscale (skinning #744/15412)"
    { { 745, 4234 }, 9000335 }, // "Gathersanity: Heavy Leather (skinning #745/4234)"
    { { 745, 4235 }, 9000336 }, // "Gathersanity: Heavy Hide (skinning #745/4235)"
    { { 745, 4304 }, 9000337 }, // "Gathersanity: Thick Leather (skinning #745/4304)"
    { { 745, 8165 }, 9000338 }, // "Gathersanity: Worn Dragonscale (skinning #745/8165)"
    { { 745, 8169 }, 9000339 }, // "Gathersanity: Thick Hide (skinning #745/8169)"
    { { 745, 15412 }, 9000340 }, // "Gathersanity: Green Dragonscale (skinning #745/15412)"
    { { 746, 4234 }, 9000341 }, // "Gathersanity: Heavy Leather (skinning #746/4234)"
    { { 746, 4235 }, 9000342 }, // "Gathersanity: Heavy Hide (skinning #746/4235)"
    { { 746, 4304 }, 9000343 }, // "Gathersanity: Thick Leather (skinning #746/4304)"
    { { 746, 8165 }, 9000344 }, // "Gathersanity: Worn Dragonscale (skinning #746/8165)"
    { { 746, 8169 }, 9000345 }, // "Gathersanity: Thick Hide (skinning #746/8169)"
    { { 746, 15412 }, 9000346 }, // "Gathersanity: Green Dragonscale (skinning #746/15412)"
    { { 768, 4234 }, 9000347 }, // "Gathersanity: Heavy Leather (skinning #768/4234)"
    { { 768, 4235 }, 9000348 }, // "Gathersanity: Heavy Hide (skinning #768/4235)"
    { { 768, 4304 }, 9000349 }, // "Gathersanity: Thick Leather (skinning #768/4304)"
    { { 905, 17057 }, 9000350 }, // "Gathersanity: Shiny Fish Scales (skinning #905/17057)"
    { { 976, 2319 }, 9000351 }, // "Gathersanity: Medium Leather (skinning #976/2319)"
    { { 976, 4232 }, 9000352 }, // "Gathersanity: Medium Hide (skinning #976/4232)"
    { { 976, 4234 }, 9000353 }, // "Gathersanity: Heavy Leather (skinning #976/4234)"
    { { 977, 2319 }, 9000354 }, // "Gathersanity: Medium Leather (skinning #977/2319)"
    { { 977, 4232 }, 9000355 }, // "Gathersanity: Medium Hide (skinning #977/4232)"
    { { 977, 4234 }, 9000356 }, // "Gathersanity: Heavy Leather (skinning #977/4234)"
    { { 977, 4235 }, 9000357 }, // "Gathersanity: Heavy Hide (skinning #977/4235)"
    { { 1044, 2319 }, 9000358 }, // "Gathersanity: Medium Leather (skinning #1044/2319)"
    { { 1044, 4232 }, 9000359 }, // "Gathersanity: Medium Hide (skinning #1044/4232)"
    { { 1044, 4234 }, 9000360 }, // "Gathersanity: Heavy Leather (skinning #1044/4234)"
    { { 1044, 4235 }, 9000361 }, // "Gathersanity: Heavy Hide (skinning #1044/4235)"
    { { 1044, 7287 }, 9000362 }, // "Gathersanity: Red Whelp Scale (skinning #1044/7287)"
    { { 1045, 4304 }, 9000363 }, // "Gathersanity: Thick Leather (skinning #1045/4304)"
    { { 1045, 8165 }, 9000364 }, // "Gathersanity: Worn Dragonscale (skinning #1045/8165)"
    { { 1045, 8170 }, 9000365 }, // "Gathersanity: Rugged Leather (skinning #1045/8170)"
    { { 1045, 8171 }, 9000366 }, // "Gathersanity: Rugged Hide (skinning #1045/8171)"
    { { 1045, 15414 }, 9000367 }, // "Gathersanity: Red Dragonscale (skinning #1045/15414)"
    { { 1046, 4304 }, 9000368 }, // "Gathersanity: Thick Leather (skinning #1046/4304)"
    { { 1046, 8165 }, 9000369 }, // "Gathersanity: Worn Dragonscale (skinning #1046/8165)"
    { { 1046, 8170 }, 9000370 }, // "Gathersanity: Rugged Leather (skinning #1046/8170)"
    { { 1046, 8171 }, 9000371 }, // "Gathersanity: Rugged Hide (skinning #1046/8171)"
    { { 1046, 15414 }, 9000372 }, // "Gathersanity: Red Dragonscale (skinning #1046/15414)"
    { { 1047, 4304 }, 9000373 }, // "Gathersanity: Thick Leather (skinning #1047/4304)"
    { { 1047, 8165 }, 9000374 }, // "Gathersanity: Worn Dragonscale (skinning #1047/8165)"
    { { 1047, 8170 }, 9000375 }, // "Gathersanity: Rugged Leather (skinning #1047/8170)"
    { { 1047, 8171 }, 9000376 }, // "Gathersanity: Rugged Hide (skinning #1047/8171)"
    { { 1047, 15414 }, 9000377 }, // "Gathersanity: Red Dragonscale (skinning #1047/15414)"
    { { 1048, 4304 }, 9000378 }, // "Gathersanity: Thick Leather (skinning #1048/4304)"
    { { 1048, 8165 }, 9000379 }, // "Gathersanity: Worn Dragonscale (skinning #1048/8165)"
    { { 1048, 8170 }, 9000380 }, // "Gathersanity: Rugged Leather (skinning #1048/8170)"
    { { 1048, 8171 }, 9000381 }, // "Gathersanity: Rugged Hide (skinning #1048/8171)"
    { { 1048, 15414 }, 9000382 }, // "Gathersanity: Red Dragonscale (skinning #1048/15414)"
    { { 1049, 4304 }, 9000383 }, // "Gathersanity: Thick Leather (skinning #1049/4304)"
    { { 1049, 8165 }, 9000384 }, // "Gathersanity: Worn Dragonscale (skinning #1049/8165)"
    { { 1049, 8170 }, 9000385 }, // "Gathersanity: Rugged Leather (skinning #1049/8170)"
    { { 1049, 8171 }, 9000386 }, // "Gathersanity: Rugged Hide (skinning #1049/8171)"
    { { 1049, 15414 }, 9000387 }, // "Gathersanity: Red Dragonscale (skinning #1049/15414)"
    { { 1050, 4304 }, 9000388 }, // "Gathersanity: Thick Leather (skinning #1050/4304)"
    { { 1050, 8165 }, 9000389 }, // "Gathersanity: Worn Dragonscale (skinning #1050/8165)"
    { { 1050, 8170 }, 9000390 }, // "Gathersanity: Rugged Leather (skinning #1050/8170)"
    { { 1050, 8171 }, 9000391 }, // "Gathersanity: Rugged Hide (skinning #1050/8171)"
    { { 1050, 15414 }, 9000392 }, // "Gathersanity: Red Dragonscale (skinning #1050/15414)"
    { { 1063, 4304 }, 9000393 }, // "Gathersanity: Thick Leather (skinning #1063/4304)"
    { { 1063, 8170 }, 9000394 }, // "Gathersanity: Rugged Leather (skinning #1063/8170)"
    { { 1063, 15412 }, 9000395 }, // "Gathersanity: Green Dragonscale (skinning #1063/15412)"
    { { 1193, 17057 }, 9000396 }, // "Gathersanity: Shiny Fish Scales (skinning #1193/17057)"
    { { 1388, 783 }, 9000397 }, // "Gathersanity: Light Hide (skinning #1388/783)"
    { { 1388, 2318 }, 9000398 }, // "Gathersanity: Light Leather (skinning #1388/2318)"
    { { 1388, 2934 }, 9000399 }, // "Gathersanity: Ruined Leather Scraps (skinning #1388/2934)"
    { { 1552, 4234 }, 9000400 }, // "Gathersanity: Heavy Leather (skinning #1552/4234)"
    { { 1552, 4235 }, 9000401 }, // "Gathersanity: Heavy Hide (skinning #1552/4235)"
    { { 1552, 4304 }, 9000402 }, // "Gathersanity: Thick Leather (skinning #1552/4304)"
    { { 1559, 4304 }, 9000403 }, // "Gathersanity: Thick Leather (skinning #1559/4304)"
    { { 1559, 8169 }, 9000404 }, // "Gathersanity: Thick Hide (skinning #1559/8169)"
    { { 1559, 8170 }, 9000405 }, // "Gathersanity: Rugged Leather (skinning #1559/8170)"
    { { 1559, 8171 }, 9000406 }, // "Gathersanity: Rugged Hide (skinning #1559/8171)"
    { { 1713, 4234 }, 9000407 }, // "Gathersanity: Heavy Leather (skinning #1713/4234)"
    { { 1713, 4235 }, 9000408 }, // "Gathersanity: Heavy Hide (skinning #1713/4235)"
    { { 1713, 4304 }, 9000409 }, // "Gathersanity: Thick Leather (skinning #1713/4304)"
    { { 1815, 4304 }, 9000410 }, // "Gathersanity: Thick Leather (skinning #1815/4304)"
    { { 1815, 8169 }, 9000411 }, // "Gathersanity: Thick Hide (skinning #1815/8169)"
    { { 1815, 8170 }, 9000412 }, // "Gathersanity: Rugged Leather (skinning #1815/8170)"
    { { 1815, 8171 }, 9000413 }, // "Gathersanity: Rugged Hide (skinning #1815/8171)"
    { { 1815, 15419 }, 9000414 }, // "Gathersanity: Warbear Leather (skinning #1815/15419)"
    { { 1816, 4304 }, 9000415 }, // "Gathersanity: Thick Leather (skinning #1816/4304)"
    { { 1816, 8170 }, 9000416 }, // "Gathersanity: Rugged Leather (skinning #1816/8170)"
    { { 1816, 8171 }, 9000417 }, // "Gathersanity: Rugged Hide (skinning #1816/8171)"
    { { 1816, 15419 }, 9000418 }, // "Gathersanity: Warbear Leather (skinning #1816/15419)"
    { { 1817, 4304 }, 9000419 }, // "Gathersanity: Thick Leather (skinning #1817/4304)"
    { { 1817, 8169 }, 9000420 }, // "Gathersanity: Thick Hide (skinning #1817/8169)"
    { { 1817, 8170 }, 9000421 }, // "Gathersanity: Rugged Leather (skinning #1817/8170)"
    { { 1817, 8171 }, 9000422 }, // "Gathersanity: Rugged Hide (skinning #1817/8171)"
    { { 1891, 783 }, 9000423 }, // "Gathersanity: Light Hide (skinning #1891/783)"
    { { 1891, 2318 }, 9000424 }, // "Gathersanity: Light Leather (skinning #1891/2318)"
    { { 1891, 2934 }, 9000425 }, // "Gathersanity: Ruined Leather Scraps (skinning #1891/2934)"
    { { 1894, 783 }, 9000426 }, // "Gathersanity: Light Hide (skinning #1894/783)"
    { { 1894, 2318 }, 9000427 }, // "Gathersanity: Light Leather (skinning #1894/2318)"
    { { 1894, 2934 }, 9000428 }, // "Gathersanity: Ruined Leather Scraps (skinning #1894/2934)"
    { { 1895, 783 }, 9000429 }, // "Gathersanity: Light Hide (skinning #1895/783)"
    { { 1895, 2318 }, 9000430 }, // "Gathersanity: Light Leather (skinning #1895/2318)"
    { { 1895, 2934 }, 9000431 }, // "Gathersanity: Ruined Leather Scraps (skinning #1895/2934)"
    { { 1933, 2318 }, 9000432 }, // "Gathersanity: Light Leather (skinning #1933/2318)"
    { { 1933, 2592 }, 9000433 }, // "Gathersanity: Wool Cloth (skinning #1933/2592)"
    { { 1933, 2934 }, 9000434 }, // "Gathersanity: Ruined Leather Scraps (skinning #1933/2934)"
    { { 2173, 17057 }, 9000435 }, // "Gathersanity: Shiny Fish Scales (skinning #2173/17057)"
    { { 2174, 17057 }, 9000436 }, // "Gathersanity: Shiny Fish Scales (skinning #2174/17057)"
    { { 2347, 4234 }, 9000437 }, // "Gathersanity: Heavy Leather (skinning #2347/4234)"
    { { 2347, 4304 }, 9000438 }, // "Gathersanity: Thick Leather (skinning #2347/4304)"
    { { 2447, 4234 }, 9000439 }, // "Gathersanity: Heavy Leather (skinning #2447/4234)"
    { { 2447, 4235 }, 9000440 }, // "Gathersanity: Heavy Hide (skinning #2447/4235)"
    { { 2447, 4304 }, 9000441 }, // "Gathersanity: Thick Leather (skinning #2447/4304)"
    { { 2447, 8165 }, 9000442 }, // "Gathersanity: Worn Dragonscale (skinning #2447/8165)"
    { { 2447, 8169 }, 9000443 }, // "Gathersanity: Thick Hide (skinning #2447/8169)"
    { { 2452, 4234 }, 9000444 }, // "Gathersanity: Heavy Leather (skinning #2452/4234)"
    { { 2452, 4235 }, 9000445 }, // "Gathersanity: Heavy Hide (skinning #2452/4235)"
    { { 2452, 4304 }, 9000446 }, // "Gathersanity: Thick Leather (skinning #2452/4304)"
    { { 2474, 4234 }, 9000447 }, // "Gathersanity: Heavy Leather (skinning #2474/4234)"
    { { 2474, 4235 }, 9000448 }, // "Gathersanity: Heavy Hide (skinning #2474/4235)"
    { { 2474, 4304 }, 9000449 }, // "Gathersanity: Thick Leather (skinning #2474/4304)"
    { { 2505, 4304 }, 9000450 }, // "Gathersanity: Thick Leather (skinning #2505/4304)"
    { { 2505, 8167 }, 9000451 }, // "Gathersanity: Turtle Scale (skinning #2505/8167)"
    { { 2505, 8169 }, 9000452 }, // "Gathersanity: Thick Hide (skinning #2505/8169)"
    { { 2505, 8170 }, 9000453 }, // "Gathersanity: Rugged Leather (skinning #2505/8170)"
    { { 2521, 4304 }, 9000454 }, // "Gathersanity: Thick Leather (skinning #2521/4304)"
    { { 2521, 8169 }, 9000455 }, // "Gathersanity: Thick Hide (skinning #2521/8169)"
    { { 2521, 8170 }, 9000456 }, // "Gathersanity: Rugged Leather (skinning #2521/8170)"
    { { 2522, 4304 }, 9000457 }, // "Gathersanity: Thick Leather (skinning #2522/4304)"
    { { 2522, 8169 }, 9000458 }, // "Gathersanity: Thick Hide (skinning #2522/8169)"
    { { 2522, 8170 }, 9000459 }, // "Gathersanity: Rugged Leather (skinning #2522/8170)"
    { { 2635, 4234 }, 9000460 }, // "Gathersanity: Heavy Leather (skinning #2635/4234)"
    { { 2635, 4235 }, 9000461 }, // "Gathersanity: Heavy Hide (skinning #2635/4235)"
    { { 2635, 4304 }, 9000462 }, // "Gathersanity: Thick Leather (skinning #2635/4304)"
    { { 2659, 4304 }, 9000463 }, // "Gathersanity: Thick Leather (skinning #2659/4304)"
    { { 2659, 8169 }, 9000464 }, // "Gathersanity: Thick Hide (skinning #2659/8169)"
    { { 2659, 8170 }, 9000465 }, // "Gathersanity: Rugged Leather (skinning #2659/8170)"
    { { 2680, 4304 }, 9000466 }, // "Gathersanity: Thick Leather (skinning #2680/4304)"
    { { 2680, 8169 }, 9000467 }, // "Gathersanity: Thick Hide (skinning #2680/8169)"
    { { 2680, 8170 }, 9000468 }, // "Gathersanity: Rugged Leather (skinning #2680/8170)"
    { { 2681, 4304 }, 9000469 }, // "Gathersanity: Thick Leather (skinning #2681/4304)"
    { { 2681, 8169 }, 9000470 }, // "Gathersanity: Thick Hide (skinning #2681/8169)"
    { { 2681, 8170 }, 9000471 }, // "Gathersanity: Rugged Leather (skinning #2681/8170)"
    { { 2725, 4234 }, 9000472 }, // "Gathersanity: Heavy Leather (skinning #2725/4234)"
    { { 2725, 4235 }, 9000473 }, // "Gathersanity: Heavy Hide (skinning #2725/4235)"
    { { 2725, 4304 }, 9000474 }, // "Gathersanity: Thick Leather (skinning #2725/4304)"
    { { 2725, 8165 }, 9000475 }, // "Gathersanity: Worn Dragonscale (skinning #2725/8165)"
    { { 2725, 8169 }, 9000476 }, // "Gathersanity: Thick Hide (skinning #2725/8169)"
    { { 2726, 4234 }, 9000477 }, // "Gathersanity: Heavy Leather (skinning #2726/4234)"
    { { 2726, 4235 }, 9000478 }, // "Gathersanity: Heavy Hide (skinning #2726/4235)"
    { { 2726, 4304 }, 9000479 }, // "Gathersanity: Thick Leather (skinning #2726/4304)"
    { { 2726, 8165 }, 9000480 }, // "Gathersanity: Worn Dragonscale (skinning #2726/8165)"
    { { 2726, 8169 }, 9000481 }, // "Gathersanity: Thick Hide (skinning #2726/8169)"
    { { 2730, 4234 }, 9000482 }, // "Gathersanity: Heavy Leather (skinning #2730/4234)"
    { { 2730, 4235 }, 9000483 }, // "Gathersanity: Heavy Hide (skinning #2730/4235)"
    { { 2730, 4304 }, 9000484 }, // "Gathersanity: Thick Leather (skinning #2730/4304)"
    { { 2730, 8169 }, 9000485 }, // "Gathersanity: Thick Hide (skinning #2730/8169)"
    { { 2753, 4234 }, 9000486 }, // "Gathersanity: Heavy Leather (skinning #2753/4234)"
    { { 2753, 4235 }, 9000487 }, // "Gathersanity: Heavy Hide (skinning #2753/4235)"
    { { 2753, 4304 }, 9000488 }, // "Gathersanity: Thick Leather (skinning #2753/4304)"
    { { 2757, 4304 }, 9000489 }, // "Gathersanity: Thick Leather (skinning #2757/4304)"
    { { 2757, 8170 }, 9000490 }, // "Gathersanity: Rugged Leather (skinning #2757/8170)"
    { { 2757, 8171 }, 9000491 }, // "Gathersanity: Rugged Hide (skinning #2757/8171)"
    { { 2759, 4304 }, 9000492 }, // "Gathersanity: Thick Leather (skinning #2759/4304)"
    { { 2759, 8170 }, 9000493 }, // "Gathersanity: Rugged Leather (skinning #2759/8170)"
    { { 2759, 8171 }, 9000494 }, // "Gathersanity: Rugged Hide (skinning #2759/8171)"
    { { 2850, 4234 }, 9000495 }, // "Gathersanity: Heavy Leather (skinning #2850/4234)"
    { { 2850, 4304 }, 9000496 }, // "Gathersanity: Thick Leather (skinning #2850/4304)"
    { { 2850, 8169 }, 9000497 }, // "Gathersanity: Thick Hide (skinning #2850/8169)"
    { { 2923, 4234 }, 9000498 }, // "Gathersanity: Heavy Leather (skinning #2923/4234)"
    { { 2923, 4235 }, 9000499 }, // "Gathersanity: Heavy Hide (skinning #2923/4235)"
    { { 2923, 4304 }, 9000500 }, // "Gathersanity: Thick Leather (skinning #2923/4304)"
    { { 2923, 8169 }, 9000501 }, // "Gathersanity: Thick Hide (skinning #2923/8169)"
    { { 2924, 4234 }, 9000502 }, // "Gathersanity: Heavy Leather (skinning #2924/4234)"
    { { 2924, 4235 }, 9000503 }, // "Gathersanity: Heavy Hide (skinning #2924/4235)"
    { { 2924, 4304 }, 9000504 }, // "Gathersanity: Thick Leather (skinning #2924/4304)"
    { { 2924, 8169 }, 9000505 }, // "Gathersanity: Thick Hide (skinning #2924/8169)"
    { { 2925, 4304 }, 9000506 }, // "Gathersanity: Thick Leather (skinning #2925/4304)"
    { { 2925, 8169 }, 9000507 }, // "Gathersanity: Thick Hide (skinning #2925/8169)"
    { { 2925, 8170 }, 9000508 }, // "Gathersanity: Rugged Leather (skinning #2925/8170)"
    { { 2926, 4304 }, 9000509 }, // "Gathersanity: Thick Leather (skinning #2926/4304)"
    { { 2926, 8169 }, 9000510 }, // "Gathersanity: Thick Hide (skinning #2926/8169)"
    { { 2926, 8170 }, 9000511 }, // "Gathersanity: Rugged Leather (skinning #2926/8170)"
    { { 3529, 2318 }, 9000512 }, // "Gathersanity: Light Leather (skinning #3529/2318)"
    { { 3529, 2934 }, 9000513 }, // "Gathersanity: Ruined Leather Scraps (skinning #3529/2934)"
    { { 3530, 783 }, 9000514 }, // "Gathersanity: Light Hide (skinning #3530/783)"
    { { 3530, 2318 }, 9000515 }, // "Gathersanity: Light Leather (skinning #3530/2318)"
    { { 3530, 2934 }, 9000516 }, // "Gathersanity: Ruined Leather Scraps (skinning #3530/2934)"
    { { 3532, 783 }, 9000517 }, // "Gathersanity: Light Hide (skinning #3532/783)"
    { { 3532, 2318 }, 9000518 }, // "Gathersanity: Light Leather (skinning #3532/2318)"
    { { 3533, 2934 }, 9000519 }, // "Gathersanity: Ruined Leather Scraps (skinning #3533/2934)"
    { { 3619, 783 }, 9000520 }, // "Gathersanity: Light Hide (skinning #3619/783)"
    { { 3619, 2318 }, 9000521 }, // "Gathersanity: Light Leather (skinning #3619/2318)"
    { { 3619, 2319 }, 9000522 }, // "Gathersanity: Medium Leather (skinning #3619/2319)"
    { { 3652, 2318 }, 9000523 }, // "Gathersanity: Light Leather (skinning #3652/2318)"
    { { 3652, 2319 }, 9000524 }, // "Gathersanity: Medium Leather (skinning #3652/2319)"
    { { 3674, 2319 }, 9000525 }, // "Gathersanity: Medium Leather (skinning #3674/2319)"
    { { 3674, 4232 }, 9000526 }, // "Gathersanity: Medium Hide (skinning #3674/4232)"
    { { 3722, 2318 }, 9000527 }, // "Gathersanity: Light Leather (skinning #3722/2318)"
    { { 3722, 2319 }, 9000528 }, // "Gathersanity: Medium Leather (skinning #3722/2319)"
    { { 3722, 4232 }, 9000529 }, // "Gathersanity: Medium Hide (skinning #3722/4232)"
    { { 3792, 2319 }, 9000530 }, // "Gathersanity: Medium Leather (skinning #3792/2319)"
    { { 3792, 4234 }, 9000531 }, // "Gathersanity: Heavy Leather (skinning #3792/4234)"
    { { 4066, 2319 }, 9000532 }, // "Gathersanity: Medium Leather (skinning #4066/2319)"
    { { 4066, 4232 }, 9000533 }, // "Gathersanity: Medium Hide (skinning #4066/4232)"
    { { 4066, 4234 }, 9000534 }, // "Gathersanity: Heavy Leather (skinning #4066/4234)"
    { { 4066, 4235 }, 9000535 }, // "Gathersanity: Heavy Hide (skinning #4066/4235)"
    { { 4323, 4234 }, 9000536 }, // "Gathersanity: Heavy Leather (skinning #4323/4234)"
    { { 4323, 4235 }, 9000537 }, // "Gathersanity: Heavy Hide (skinning #4323/4235)"
    { { 4323, 4304 }, 9000538 }, // "Gathersanity: Thick Leather (skinning #4323/4304)"
    { { 4323, 8165 }, 9000539 }, // "Gathersanity: Worn Dragonscale (skinning #4323/8165)"
    { { 4323, 8169 }, 9000540 }, // "Gathersanity: Thick Hide (skinning #4323/8169)"
    { { 4324, 4234 }, 9000541 }, // "Gathersanity: Heavy Leather (skinning #4324/4234)"
    { { 4324, 4235 }, 9000542 }, // "Gathersanity: Heavy Hide (skinning #4324/4235)"
    { { 4324, 4304 }, 9000543 }, // "Gathersanity: Thick Leather (skinning #4324/4304)"
    { { 4324, 8165 }, 9000544 }, // "Gathersanity: Worn Dragonscale (skinning #4324/8165)"
    { { 4324, 8169 }, 9000545 }, // "Gathersanity: Thick Hide (skinning #4324/8169)"
    { { 4328, 4234 }, 9000546 }, // "Gathersanity: Heavy Leather (skinning #4328/4234)"
    { { 4328, 4235 }, 9000547 }, // "Gathersanity: Heavy Hide (skinning #4328/4235)"
    { { 4328, 4304 }, 9000548 }, // "Gathersanity: Thick Leather (skinning #4328/4304)"
    { { 4328, 8165 }, 9000549 }, // "Gathersanity: Worn Dragonscale (skinning #4328/8165)"
    { { 4328, 8169 }, 9000550 }, // "Gathersanity: Thick Hide (skinning #4328/8169)"
    { { 4329, 4234 }, 9000551 }, // "Gathersanity: Heavy Leather (skinning #4329/4234)"
    { { 4329, 4235 }, 9000552 }, // "Gathersanity: Heavy Hide (skinning #4329/4235)"
    { { 4329, 4304 }, 9000553 }, // "Gathersanity: Thick Leather (skinning #4329/4304)"
    { { 4329, 8165 }, 9000554 }, // "Gathersanity: Worn Dragonscale (skinning #4329/8165)"
    { { 4329, 8169 }, 9000555 }, // "Gathersanity: Thick Hide (skinning #4329/8169)"
    { { 4331, 4234 }, 9000556 }, // "Gathersanity: Heavy Leather (skinning #4331/4234)"
    { { 4331, 4235 }, 9000557 }, // "Gathersanity: Heavy Hide (skinning #4331/4235)"
    { { 4331, 4304 }, 9000558 }, // "Gathersanity: Thick Leather (skinning #4331/4304)"
    { { 4331, 8165 }, 9000559 }, // "Gathersanity: Worn Dragonscale (skinning #4331/8165)"
    { { 4331, 8169 }, 9000560 }, // "Gathersanity: Thick Hide (skinning #4331/8169)"
    { { 4334, 4234 }, 9000561 }, // "Gathersanity: Heavy Leather (skinning #4334/4234)"
    { { 4334, 4235 }, 9000562 }, // "Gathersanity: Heavy Hide (skinning #4334/4235)"
    { { 4334, 4304 }, 9000563 }, // "Gathersanity: Thick Leather (skinning #4334/4304)"
    { { 4334, 8165 }, 9000564 }, // "Gathersanity: Worn Dragonscale (skinning #4334/8165)"
    { { 4334, 8169 }, 9000565 }, // "Gathersanity: Thick Hide (skinning #4334/8169)"
    { { 4339, 4234 }, 9000566 }, // "Gathersanity: Heavy Leather (skinning #4339/4234)"
    { { 4339, 4304 }, 9000567 }, // "Gathersanity: Thick Leather (skinning #4339/4304)"
    { { 4339, 8165 }, 9000568 }, // "Gathersanity: Worn Dragonscale (skinning #4339/8165)"
    { { 4339, 8169 }, 9000569 }, // "Gathersanity: Thick Hide (skinning #4339/8169)"
    { { 4346, 2319 }, 9000570 }, // "Gathersanity: Medium Leather (skinning #4346/2319)"
    { { 4346, 4232 }, 9000571 }, // "Gathersanity: Medium Hide (skinning #4346/4232)"
    { { 4346, 4234 }, 9000572 }, // "Gathersanity: Heavy Leather (skinning #4346/4234)"
    { { 4346, 4235 }, 9000573 }, // "Gathersanity: Heavy Hide (skinning #4346/4235)"
    { { 4374, 4304 }, 9000574 }, // "Gathersanity: Thick Leather (skinning #4374/4304)"
    { { 4374, 8170 }, 9000575 }, // "Gathersanity: Rugged Leather (skinning #4374/8170)"
    { { 4374, 8171 }, 9000576 }, // "Gathersanity: Rugged Hide (skinning #4374/8171)"
    { { 4390, 4234 }, 9000577 }, // "Gathersanity: Heavy Leather (skinning #4390/4234)"
    { { 4390, 4235 }, 9000578 }, // "Gathersanity: Heavy Hide (skinning #4390/4235)"
    { { 4390, 4304 }, 9000579 }, // "Gathersanity: Thick Leather (skinning #4390/4304)"
    { { 4390, 8169 }, 9000580 }, // "Gathersanity: Thick Hide (skinning #4390/8169)"
    { { 4396, 4234 }, 9000581 }, // "Gathersanity: Heavy Leather (skinning #4396/4234)"
    { { 4396, 4235 }, 9000582 }, // "Gathersanity: Heavy Hide (skinning #4396/4235)"
    { { 4396, 4304 }, 9000583 }, // "Gathersanity: Thick Leather (skinning #4396/4304)"
    { { 4396, 8167 }, 9000584 }, // "Gathersanity: Turtle Scale (skinning #4396/8167)"
    { { 4397, 4234 }, 9000585 }, // "Gathersanity: Heavy Leather (skinning #4397/4234)"
    { { 4397, 4235 }, 9000586 }, // "Gathersanity: Heavy Hide (skinning #4397/4235)"
    { { 4397, 4304 }, 9000587 }, // "Gathersanity: Thick Leather (skinning #4397/4304)"
    { { 4397, 8167 }, 9000588 }, // "Gathersanity: Turtle Scale (skinning #4397/8167)"
    { { 4398, 4234 }, 9000589 }, // "Gathersanity: Heavy Leather (skinning #4398/4234)"
    { { 4398, 4235 }, 9000590 }, // "Gathersanity: Heavy Hide (skinning #4398/4235)"
    { { 4398, 4304 }, 9000591 }, // "Gathersanity: Thick Leather (skinning #4398/4304)"
    { { 4398, 8167 }, 9000592 }, // "Gathersanity: Turtle Scale (skinning #4398/8167)"
    { { 4399, 4234 }, 9000593 }, // "Gathersanity: Heavy Leather (skinning #4399/4234)"
    { { 4399, 4235 }, 9000594 }, // "Gathersanity: Heavy Hide (skinning #4399/4235)"
    { { 4399, 4304 }, 9000595 }, // "Gathersanity: Thick Leather (skinning #4399/4304)"
    { { 4399, 8167 }, 9000596 }, // "Gathersanity: Turtle Scale (skinning #4399/8167)"
    { { 4399, 8169 }, 9000597 }, // "Gathersanity: Thick Hide (skinning #4399/8169)"
    { { 4400, 4234 }, 9000598 }, // "Gathersanity: Heavy Leather (skinning #4400/4234)"
    { { 4400, 4235 }, 9000599 }, // "Gathersanity: Heavy Hide (skinning #4400/4235)"
    { { 4400, 4304 }, 9000600 }, // "Gathersanity: Thick Leather (skinning #4400/4304)"
    { { 4400, 8167 }, 9000601 }, // "Gathersanity: Turtle Scale (skinning #4400/8167)"
    { { 4400, 8169 }, 9000602 }, // "Gathersanity: Thick Hide (skinning #4400/8169)"
    { { 4422, 4234 }, 9000603 }, // "Gathersanity: Heavy Leather (skinning #4422/4234)"
    { { 4422, 4235 }, 9000604 }, // "Gathersanity: Heavy Hide (skinning #4422/4235)"
    { { 4425, 2319 }, 9000605 }, // "Gathersanity: Medium Leather (skinning #4425/2319)"
    { { 4425, 4232 }, 9000606 }, // "Gathersanity: Medium Hide (skinning #4425/4232)"
    { { 4425, 4234 }, 9000607 }, // "Gathersanity: Heavy Leather (skinning #4425/4234)"
    { { 4504, 4234 }, 9000608 }, // "Gathersanity: Heavy Leather (skinning #4504/4234)"
    { { 4504, 4235 }, 9000609 }, // "Gathersanity: Heavy Hide (skinning #4504/4235)"
    { { 4504, 4304 }, 9000610 }, // "Gathersanity: Thick Leather (skinning #4504/4304)"
    { { 4512, 2319 }, 9000611 }, // "Gathersanity: Medium Leather (skinning #4512/2319)"
    { { 4512, 4232 }, 9000612 }, // "Gathersanity: Medium Hide (skinning #4512/4232)"
    { { 4512, 4234 }, 9000613 }, // "Gathersanity: Heavy Leather (skinning #4512/4234)"
    { { 4512, 4235 }, 9000614 }, // "Gathersanity: Heavy Hide (skinning #4512/4235)"
    { { 4539, 2319 }, 9000615 }, // "Gathersanity: Medium Leather (skinning #4539/2319)"
    { { 4539, 4232 }, 9000616 }, // "Gathersanity: Medium Hide (skinning #4539/4232)"
    { { 4539, 4234 }, 9000617 }, // "Gathersanity: Heavy Leather (skinning #4539/4234)"
    { { 4539, 4235 }, 9000618 }, // "Gathersanity: Heavy Hide (skinning #4539/4235)"
    { { 4660, 4234 }, 9000619 }, // "Gathersanity: Heavy Leather (skinning #4660/4234)"
    { { 4660, 4304 }, 9000620 }, // "Gathersanity: Thick Leather (skinning #4660/4304)"
    { { 4830, 4234 }, 9000621 }, // "Gathersanity: Heavy Leather (skinning #4830/4234)"
    { { 4830, 4235 }, 9000622 }, // "Gathersanity: Heavy Hide (skinning #4830/4235)"
    { { 4861, 4234 }, 9000623 }, // "Gathersanity: Heavy Leather (skinning #4861/4234)"
    { { 4861, 4235 }, 9000624 }, // "Gathersanity: Heavy Hide (skinning #4861/4235)"
    { { 4861, 4304 }, 9000625 }, // "Gathersanity: Thick Leather (skinning #4861/4304)"
    { { 4863, 4234 }, 9000626 }, // "Gathersanity: Heavy Leather (skinning #4863/4234)"
    { { 4863, 4235 }, 9000627 }, // "Gathersanity: Heavy Hide (skinning #4863/4235)"
    { { 4863, 4304 }, 9000628 }, // "Gathersanity: Thick Leather (skinning #4863/4304)"
    { { 5225, 4304 }, 9000629 }, // "Gathersanity: Thick Leather (skinning #5225/4304)"
    { { 5225, 8169 }, 9000630 }, // "Gathersanity: Thick Hide (skinning #5225/8169)"
    { { 5225, 8170 }, 9000631 }, // "Gathersanity: Rugged Leather (skinning #5225/8170)"
    { { 5226, 4304 }, 9000632 }, // "Gathersanity: Thick Leather (skinning #5226/4304)"
    { { 5226, 8169 }, 9000633 }, // "Gathersanity: Thick Hide (skinning #5226/8169)"
    { { 5226, 8170 }, 9000634 }, // "Gathersanity: Rugged Leather (skinning #5226/8170)"
    { { 5262, 4304 }, 9000635 }, // "Gathersanity: Thick Leather (skinning #5262/4304)"
    { { 5262, 8169 }, 9000636 }, // "Gathersanity: Thick Hide (skinning #5262/8169)"
    { { 5262, 8170 }, 9000637 }, // "Gathersanity: Rugged Leather (skinning #5262/8170)"
    { { 5274, 4304 }, 9000638 }, // "Gathersanity: Thick Leather (skinning #5274/4304)"
    { { 5274, 8169 }, 9000639 }, // "Gathersanity: Thick Hide (skinning #5274/8169)"
    { { 5274, 8170 }, 9000640 }, // "Gathersanity: Rugged Leather (skinning #5274/8170)"
    { { 5276, 4304 }, 9000641 }, // "Gathersanity: Thick Leather (skinning #5276/4304)"
    { { 5276, 8165 }, 9000642 }, // "Gathersanity: Worn Dragonscale (skinning #5276/8165)"
    { { 5276, 8169 }, 9000643 }, // "Gathersanity: Thick Hide (skinning #5276/8169)"
    { { 5276, 8170 }, 9000644 }, // "Gathersanity: Rugged Leather (skinning #5276/8170)"
    { { 5277, 4304 }, 9000645 }, // "Gathersanity: Thick Leather (skinning #5277/4304)"
    { { 5277, 8165 }, 9000646 }, // "Gathersanity: Worn Dragonscale (skinning #5277/8165)"
    { { 5277, 8169 }, 9000647 }, // "Gathersanity: Thick Hide (skinning #5277/8169)"
    { { 5277, 8170 }, 9000648 }, // "Gathersanity: Rugged Leather (skinning #5277/8170)"
    { { 5277, 15412 }, 9000649 }, // "Gathersanity: Green Dragonscale (skinning #5277/15412)"
    { { 5278, 4234 }, 9000650 }, // "Gathersanity: Heavy Leather (skinning #5278/4234)"
    { { 5278, 4235 }, 9000651 }, // "Gathersanity: Heavy Hide (skinning #5278/4235)"
    { { 5278, 4304 }, 9000652 }, // "Gathersanity: Thick Leather (skinning #5278/4304)"
    { { 5278, 8165 }, 9000653 }, // "Gathersanity: Worn Dragonscale (skinning #5278/8165)"
    { { 5278, 8169 }, 9000654 }, // "Gathersanity: Thick Hide (skinning #5278/8169)"
    { { 5280, 4304 }, 9000655 }, // "Gathersanity: Thick Leather (skinning #5280/4304)"
    { { 5280, 8165 }, 9000656 }, // "Gathersanity: Worn Dragonscale (skinning #5280/8165)"
    { { 5280, 8169 }, 9000657 }, // "Gathersanity: Thick Hide (skinning #5280/8169)"
    { { 5280, 8170 }, 9000658 }, // "Gathersanity: Rugged Leather (skinning #5280/8170)"
    { { 5280, 15412 }, 9000659 }, // "Gathersanity: Green Dragonscale (skinning #5280/15412)"
    { { 5283, 4304 }, 9000660 }, // "Gathersanity: Thick Leather (skinning #5283/4304)"
    { { 5283, 8165 }, 9000661 }, // "Gathersanity: Worn Dragonscale (skinning #5283/8165)"
    { { 5283, 8169 }, 9000662 }, // "Gathersanity: Thick Hide (skinning #5283/8169)"
    { { 5283, 8170 }, 9000663 }, // "Gathersanity: Rugged Leather (skinning #5283/8170)"
    { { 5283, 15412 }, 9000664 }, // "Gathersanity: Green Dragonscale (skinning #5283/15412)"
    { { 5286, 4234 }, 9000665 }, // "Gathersanity: Heavy Leather (skinning #5286/4234)"
    { { 5286, 4235 }, 9000666 }, // "Gathersanity: Heavy Hide (skinning #5286/4235)"
    { { 5286, 4304 }, 9000667 }, // "Gathersanity: Thick Leather (skinning #5286/4304)"
    { { 5286, 8169 }, 9000668 }, // "Gathersanity: Thick Hide (skinning #5286/8169)"
    { { 5287, 4234 }, 9000669 }, // "Gathersanity: Heavy Leather (skinning #5287/4234)"
    { { 5287, 4235 }, 9000670 }, // "Gathersanity: Heavy Hide (skinning #5287/4235)"
    { { 5287, 4304 }, 9000671 }, // "Gathersanity: Thick Leather (skinning #5287/4304)"
    { { 5287, 8169 }, 9000672 }, // "Gathersanity: Thick Hide (skinning #5287/8169)"
    { { 5288, 4304 }, 9000673 }, // "Gathersanity: Thick Leather (skinning #5288/4304)"
    { { 5288, 8169 }, 9000674 }, // "Gathersanity: Thick Hide (skinning #5288/8169)"
    { { 5288, 8170 }, 9000675 }, // "Gathersanity: Rugged Leather (skinning #5288/8170)"
    { { 5291, 4304 }, 9000676 }, // "Gathersanity: Thick Leather (skinning #5291/4304)"
    { { 5291, 8169 }, 9000677 }, // "Gathersanity: Thick Hide (skinning #5291/8169)"
    { { 5291, 8170 }, 9000678 }, // "Gathersanity: Rugged Leather (skinning #5291/8170)"
    { { 5292, 4234 }, 9000679 }, // "Gathersanity: Heavy Leather (skinning #5292/4234)"
    { { 5292, 4235 }, 9000680 }, // "Gathersanity: Heavy Hide (skinning #5292/4235)"
    { { 5292, 4304 }, 9000681 }, // "Gathersanity: Thick Leather (skinning #5292/4304)"
    { { 5292, 8169 }, 9000682 }, // "Gathersanity: Thick Hide (skinning #5292/8169)"
    { { 5293, 4234 }, 9000683 }, // "Gathersanity: Heavy Leather (skinning #5293/4234)"
    { { 5293, 4235 }, 9000684 }, // "Gathersanity: Heavy Hide (skinning #5293/4235)"
    { { 5293, 4304 }, 9000685 }, // "Gathersanity: Thick Leather (skinning #5293/4304)"
    { { 5293, 8169 }, 9000686 }, // "Gathersanity: Thick Hide (skinning #5293/8169)"
    { { 5295, 4234 }, 9000687 }, // "Gathersanity: Heavy Leather (skinning #5295/4234)"
    { { 5295, 4235 }, 9000688 }, // "Gathersanity: Heavy Hide (skinning #5295/4235)"
    { { 5295, 4304 }, 9000689 }, // "Gathersanity: Thick Leather (skinning #5295/4304)"
    { { 5295, 8169 }, 9000690 }, // "Gathersanity: Thick Hide (skinning #5295/8169)"
    { { 5296, 4304 }, 9000691 }, // "Gathersanity: Thick Leather (skinning #5296/4304)"
    { { 5296, 8169 }, 9000692 }, // "Gathersanity: Thick Hide (skinning #5296/8169)"
    { { 5296, 8170 }, 9000693 }, // "Gathersanity: Rugged Leather (skinning #5296/8170)"
    { { 5297, 4304 }, 9000694 }, // "Gathersanity: Thick Leather (skinning #5297/4304)"
    { { 5297, 8169 }, 9000695 }, // "Gathersanity: Thick Hide (skinning #5297/8169)"
    { { 5297, 8170 }, 9000696 }, // "Gathersanity: Rugged Leather (skinning #5297/8170)"
    { { 5299, 4304 }, 9000697 }, // "Gathersanity: Thick Leather (skinning #5299/4304)"
    { { 5299, 8169 }, 9000698 }, // "Gathersanity: Thick Hide (skinning #5299/8169)"
    { { 5299, 8170 }, 9000699 }, // "Gathersanity: Rugged Leather (skinning #5299/8170)"
    { { 5306, 4304 }, 9000700 }, // "Gathersanity: Thick Leather (skinning #5306/4304)"
    { { 5306, 8169 }, 9000701 }, // "Gathersanity: Thick Hide (skinning #5306/8169)"
    { { 5306, 8170 }, 9000702 }, // "Gathersanity: Rugged Leather (skinning #5306/8170)"
    { { 5319, 4304 }, 9000703 }, // "Gathersanity: Thick Leather (skinning #5319/4304)"
    { { 5319, 8165 }, 9000704 }, // "Gathersanity: Worn Dragonscale (skinning #5319/8165)"
    { { 5319, 8170 }, 9000705 }, // "Gathersanity: Rugged Leather (skinning #5319/8170)"
    { { 5319, 8171 }, 9000706 }, // "Gathersanity: Rugged Hide (skinning #5319/8171)"
    { { 5319, 15412 }, 9000707 }, // "Gathersanity: Green Dragonscale (skinning #5319/15412)"
    { { 5320, 4304 }, 9000708 }, // "Gathersanity: Thick Leather (skinning #5320/4304)"
    { { 5320, 8165 }, 9000709 }, // "Gathersanity: Worn Dragonscale (skinning #5320/8165)"
    { { 5320, 8170 }, 9000710 }, // "Gathersanity: Rugged Leather (skinning #5320/8170)"
    { { 5320, 8171 }, 9000711 }, // "Gathersanity: Rugged Hide (skinning #5320/8171)"
    { { 5320, 15412 }, 9000712 }, // "Gathersanity: Green Dragonscale (skinning #5320/15412)"
    { { 5346, 4304 }, 9000713 }, // "Gathersanity: Thick Leather (skinning #5346/4304)"
    { { 5346, 8169 }, 9000714 }, // "Gathersanity: Thick Hide (skinning #5346/8169)"
    { { 5346, 8170 }, 9000715 }, // "Gathersanity: Rugged Leather (skinning #5346/8170)"
    { { 5349, 4304 }, 9000716 }, // "Gathersanity: Thick Leather (skinning #5349/4304)"
    { { 5349, 8169 }, 9000717 }, // "Gathersanity: Thick Hide (skinning #5349/8169)"
    { { 5349, 8170 }, 9000718 }, // "Gathersanity: Rugged Leather (skinning #5349/8170)"
    { { 5356, 4234 }, 9000719 }, // "Gathersanity: Heavy Leather (skinning #5356/4234)"
    { { 5356, 4235 }, 9000720 }, // "Gathersanity: Heavy Hide (skinning #5356/4235)"
    { { 5356, 4304 }, 9000721 }, // "Gathersanity: Thick Leather (skinning #5356/4304)"
    { { 5421, 4304 }, 9000722 }, // "Gathersanity: Thick Leather (skinning #5421/4304)"
    { { 5421, 8169 }, 9000723 }, // "Gathersanity: Thick Hide (skinning #5421/8169)"
    { { 5421, 8170 }, 9000724 }, // "Gathersanity: Rugged Leather (skinning #5421/8170)"
    { { 5422, 4234 }, 9000725 }, // "Gathersanity: Heavy Leather (skinning #5422/4234)"
    { { 5422, 4235 }, 9000726 }, // "Gathersanity: Heavy Hide (skinning #5422/4235)"
    { { 5422, 4304 }, 9000727 }, // "Gathersanity: Thick Leather (skinning #5422/4304)"
    { { 5422, 8154 }, 9000728 }, // "Gathersanity: Scorpid Scale (skinning #5422/8154)"
    { { 5422, 8169 }, 9000729 }, // "Gathersanity: Thick Hide (skinning #5422/8169)"
    { { 5423, 4234 }, 9000730 }, // "Gathersanity: Heavy Leather (skinning #5423/4234)"
    { { 5423, 4235 }, 9000731 }, // "Gathersanity: Heavy Hide (skinning #5423/4235)"
    { { 5423, 4304 }, 9000732 }, // "Gathersanity: Thick Leather (skinning #5423/4304)"
    { { 5423, 8154 }, 9000733 }, // "Gathersanity: Scorpid Scale (skinning #5423/8154)"
    { { 5423, 8169 }, 9000734 }, // "Gathersanity: Thick Hide (skinning #5423/8169)"
    { { 5424, 4304 }, 9000735 }, // "Gathersanity: Thick Leather (skinning #5424/4304)"
    { { 5424, 8154 }, 9000736 }, // "Gathersanity: Scorpid Scale (skinning #5424/8154)"
    { { 5424, 8169 }, 9000737 }, // "Gathersanity: Thick Hide (skinning #5424/8169)"
    { { 5424, 8170 }, 9000738 }, // "Gathersanity: Rugged Leather (skinning #5424/8170)"
    { { 5427, 4304 }, 9000739 }, // "Gathersanity: Thick Leather (skinning #5427/4304)"
    { { 5427, 8169 }, 9000740 }, // "Gathersanity: Thick Hide (skinning #5427/8169)"
    { { 5427, 8170 }, 9000741 }, // "Gathersanity: Rugged Leather (skinning #5427/8170)"
    { { 5431, 4304 }, 9000742 }, // "Gathersanity: Thick Leather (skinning #5431/4304)"
    { { 5431, 8167 }, 9000743 }, // "Gathersanity: Turtle Scale (skinning #5431/8167)"
    { { 5431, 8169 }, 9000744 }, // "Gathersanity: Thick Hide (skinning #5431/8169)"
    { { 5431, 8170 }, 9000745 }, // "Gathersanity: Rugged Leather (skinning #5431/8170)"
    { { 5708, 4304 }, 9000746 }, // "Gathersanity: Thick Leather (skinning #5708/4304)"
    { { 5708, 8169 }, 9000747 }, // "Gathersanity: Thick Hide (skinning #5708/8169)"
    { { 5708, 8170 }, 9000748 }, // "Gathersanity: Rugged Leather (skinning #5708/8170)"
    { { 5708, 8171 }, 9000749 }, // "Gathersanity: Rugged Hide (skinning #5708/8171)"
    { { 5709, 4304 }, 9000750 }, // "Gathersanity: Thick Leather (skinning #5709/4304)"
    { { 5709, 8165 }, 9000751 }, // "Gathersanity: Worn Dragonscale (skinning #5709/8165)"
    { { 5709, 8169 }, 9000752 }, // "Gathersanity: Thick Hide (skinning #5709/8169)"
    { { 5709, 8170 }, 9000753 }, // "Gathersanity: Rugged Leather (skinning #5709/8170)"
    { { 5709, 8171 }, 9000754 }, // "Gathersanity: Rugged Hide (skinning #5709/8171)"
    { { 5709, 15412 }, 9000755 }, // "Gathersanity: Green Dragonscale (skinning #5709/15412)"
    { { 5719, 8165 }, 9000756 }, // "Gathersanity: Worn Dragonscale (skinning #5719/8165)"
    { { 5719, 8169 }, 9000757 }, // "Gathersanity: Thick Hide (skinning #5719/8169)"
    { { 5719, 8170 }, 9000758 }, // "Gathersanity: Rugged Leather (skinning #5719/8170)"
    { { 5719, 15412 }, 9000759 }, // "Gathersanity: Green Dragonscale (skinning #5719/15412)"
    { { 5720, 8165 }, 9000760 }, // "Gathersanity: Worn Dragonscale (skinning #5720/8165)"
    { { 5720, 8169 }, 9000761 }, // "Gathersanity: Thick Hide (skinning #5720/8169)"
    { { 5720, 8170 }, 9000762 }, // "Gathersanity: Rugged Leather (skinning #5720/8170)"
    { { 5720, 15412 }, 9000763 }, // "Gathersanity: Green Dragonscale (skinning #5720/15412)"
    { { 5721, 8165 }, 9000764 }, // "Gathersanity: Worn Dragonscale (skinning #5721/8165)"
    { { 5721, 8169 }, 9000765 }, // "Gathersanity: Thick Hide (skinning #5721/8169)"
    { { 5721, 8170 }, 9000766 }, // "Gathersanity: Rugged Leather (skinning #5721/8170)"
    { { 5721, 15412 }, 9000767 }, // "Gathersanity: Green Dragonscale (skinning #5721/15412)"
    { { 5722, 8165 }, 9000768 }, // "Gathersanity: Worn Dragonscale (skinning #5722/8165)"
    { { 5722, 8169 }, 9000769 }, // "Gathersanity: Thick Hide (skinning #5722/8169)"
    { { 5722, 8170 }, 9000770 }, // "Gathersanity: Rugged Leather (skinning #5722/8170)"
    { { 5722, 15412 }, 9000771 }, // "Gathersanity: Green Dragonscale (skinning #5722/15412)"
    { { 5831, 2318 }, 9000772 }, // "Gathersanity: Light Leather (skinning #5831/2318)"
    { { 5831, 2319 }, 9000773 }, // "Gathersanity: Medium Leather (skinning #5831/2319)"
    { { 5831, 4232 }, 9000774 }, // "Gathersanity: Medium Hide (skinning #5831/4232)"
    { { 5832, 783 }, 9000775 }, // "Gathersanity: Light Hide (skinning #5832/783)"
    { { 5832, 2318 }, 9000776 }, // "Gathersanity: Light Leather (skinning #5832/2318)"
    { { 5832, 2319 }, 9000777 }, // "Gathersanity: Medium Leather (skinning #5832/2319)"
    { { 5832, 4232 }, 9000778 }, // "Gathersanity: Medium Hide (skinning #5832/4232)"
    { { 5833, 4304 }, 9000779 }, // "Gathersanity: Thick Leather (skinning #5833/4304)"
    { { 5833, 8169 }, 9000780 }, // "Gathersanity: Thick Hide (skinning #5833/8169)"
    { { 5833, 8170 }, 9000781 }, // "Gathersanity: Rugged Leather (skinning #5833/8170)"
    { { 5834, 2318 }, 9000782 }, // "Gathersanity: Light Leather (skinning #5834/2318)"
    { { 5834, 2319 }, 9000783 }, // "Gathersanity: Medium Leather (skinning #5834/2319)"
    { { 5834, 4232 }, 9000784 }, // "Gathersanity: Medium Hide (skinning #5834/4232)"
    { { 5842, 783 }, 9000785 }, // "Gathersanity: Light Hide (skinning #5842/783)"
    { { 5842, 2318 }, 9000786 }, // "Gathersanity: Light Leather (skinning #5842/2318)"
    { { 5842, 2319 }, 9000787 }, // "Gathersanity: Medium Leather (skinning #5842/2319)"
    { { 5912, 783 }, 9000788 }, // "Gathersanity: Light Hide (skinning #5912/783)"
    { { 5912, 2318 }, 9000789 }, // "Gathersanity: Light Leather (skinning #5912/2318)"
    { { 5912, 2319 }, 9000790 }, // "Gathersanity: Medium Leather (skinning #5912/2319)"
    { { 5912, 6470 }, 9000791 }, // "Gathersanity: Deviate Scale (skinning #5912/6470)"
    { { 5912, 6471 }, 9000792 }, // "Gathersanity: Perfect Deviate Scale (skinning #5912/6471)"
    { { 5928, 2319 }, 9000793 }, // "Gathersanity: Medium Leather (skinning #5928/2319)"
    { { 5928, 4232 }, 9000794 }, // "Gathersanity: Medium Hide (skinning #5928/4232)"
    { { 5928, 4234 }, 9000795 }, // "Gathersanity: Heavy Leather (skinning #5928/4234)"
    { { 5928, 4235 }, 9000796 }, // "Gathersanity: Heavy Hide (skinning #5928/4235)"
    { { 5934, 2319 }, 9000797 }, // "Gathersanity: Medium Leather (skinning #5934/2319)"
    { { 5934, 4232 }, 9000798 }, // "Gathersanity: Medium Hide (skinning #5934/4232)"
    { { 5934, 4234 }, 9000799 }, // "Gathersanity: Heavy Leather (skinning #5934/4234)"
    { { 5934, 4235 }, 9000800 }, // "Gathersanity: Heavy Hide (skinning #5934/4235)"
    { { 5984, 4304 }, 9000801 }, // "Gathersanity: Thick Leather (skinning #5984/4304)"
    { { 5984, 8169 }, 9000802 }, // "Gathersanity: Thick Hide (skinning #5984/8169)"
    { { 5984, 8170 }, 9000803 }, // "Gathersanity: Rugged Leather (skinning #5984/8170)"
    { { 5985, 4304 }, 9000804 }, // "Gathersanity: Thick Leather (skinning #5985/4304)"
    { { 5985, 8169 }, 9000805 }, // "Gathersanity: Thick Hide (skinning #5985/8169)"
    { { 5985, 8170 }, 9000806 }, // "Gathersanity: Rugged Leather (skinning #5985/8170)"
    { { 5988, 4304 }, 9000807 }, // "Gathersanity: Thick Leather (skinning #5988/4304)"
    { { 5988, 8154 }, 9000808 }, // "Gathersanity: Scorpid Scale (skinning #5988/8154)"
    { { 5988, 8169 }, 9000809 }, // "Gathersanity: Thick Hide (skinning #5988/8169)"
    { { 5988, 8170 }, 9000810 }, // "Gathersanity: Rugged Leather (skinning #5988/8170)"
    { { 5990, 4304 }, 9000811 }, // "Gathersanity: Thick Leather (skinning #5990/4304)"
    { { 5990, 8169 }, 9000812 }, // "Gathersanity: Thick Hide (skinning #5990/8169)"
    { { 5990, 8170 }, 9000813 }, // "Gathersanity: Rugged Leather (skinning #5990/8170)"
    { { 5991, 4304 }, 9000814 }, // "Gathersanity: Thick Leather (skinning #5991/4304)"
    { { 5991, 8169 }, 9000815 }, // "Gathersanity: Thick Hide (skinning #5991/8169)"
    { { 5991, 8170 }, 9000816 }, // "Gathersanity: Rugged Leather (skinning #5991/8170)"
    { { 5991, 8171 }, 9000817 }, // "Gathersanity: Rugged Hide (skinning #5991/8171)"
    { { 5992, 4304 }, 9000818 }, // "Gathersanity: Thick Leather (skinning #5992/4304)"
    { { 5992, 8169 }, 9000819 }, // "Gathersanity: Thick Hide (skinning #5992/8169)"
    { { 5992, 8170 }, 9000820 }, // "Gathersanity: Rugged Leather (skinning #5992/8170)"
    { { 5993, 4304 }, 9000821 }, // "Gathersanity: Thick Leather (skinning #5993/4304)"
    { { 5993, 8169 }, 9000822 }, // "Gathersanity: Thick Hide (skinning #5993/8169)"
    { { 5993, 8170 }, 9000823 }, // "Gathersanity: Rugged Leather (skinning #5993/8170)"
    { { 5993, 8171 }, 9000824 }, // "Gathersanity: Rugged Hide (skinning #5993/8171)"
    { { 6010, 4304 }, 9000825 }, // "Gathersanity: Thick Leather (skinning #6010/4304)"
    { { 6010, 8169 }, 9000826 }, // "Gathersanity: Thick Hide (skinning #6010/8169)"
    { { 6010, 8170 }, 9000827 }, // "Gathersanity: Rugged Leather (skinning #6010/8170)"
    { { 6010, 8171 }, 9000828 }, // "Gathersanity: Rugged Hide (skinning #6010/8171)"
    { { 6033, 17057 }, 9000829 }, // "Gathersanity: Shiny Fish Scales (skinning #6033/17057)"
    { { 6109, 15415 }, 9000830 }, // "Gathersanity: Blue Dragonscale (skinning #6109/15415)"
    { { 6129, 4304 }, 9000831 }, // "Gathersanity: Thick Leather (skinning #6129/4304)"
    { { 6129, 8165 }, 9000832 }, // "Gathersanity: Worn Dragonscale (skinning #6129/8165)"
    { { 6129, 8169 }, 9000833 }, // "Gathersanity: Thick Hide (skinning #6129/8169)"
    { { 6129, 8170 }, 9000834 }, // "Gathersanity: Rugged Leather (skinning #6129/8170)"
    { { 6129, 8171 }, 9000835 }, // "Gathersanity: Rugged Hide (skinning #6129/8171)"
    { { 6129, 15415 }, 9000836 }, // "Gathersanity: Blue Dragonscale (skinning #6129/15415)"
    { { 6130, 4304 }, 9000837 }, // "Gathersanity: Thick Leather (skinning #6130/4304)"
    { { 6130, 8165 }, 9000838 }, // "Gathersanity: Worn Dragonscale (skinning #6130/8165)"
    { { 6130, 8169 }, 9000839 }, // "Gathersanity: Thick Hide (skinning #6130/8169)"
    { { 6130, 8170 }, 9000840 }, // "Gathersanity: Rugged Leather (skinning #6130/8170)"
    { { 6130, 8171 }, 9000841 }, // "Gathersanity: Rugged Hide (skinning #6130/8171)"
    { { 6130, 15415 }, 9000842 }, // "Gathersanity: Blue Dragonscale (skinning #6130/15415)"
    { { 6131, 4304 }, 9000843 }, // "Gathersanity: Thick Leather (skinning #6131/4304)"
    { { 6131, 8165 }, 9000844 }, // "Gathersanity: Worn Dragonscale (skinning #6131/8165)"
    { { 6131, 8169 }, 9000845 }, // "Gathersanity: Thick Hide (skinning #6131/8169)"
    { { 6131, 8170 }, 9000846 }, // "Gathersanity: Rugged Leather (skinning #6131/8170)"
    { { 6131, 8171 }, 9000847 }, // "Gathersanity: Rugged Hide (skinning #6131/8171)"
    { { 6131, 15415 }, 9000848 }, // "Gathersanity: Blue Dragonscale (skinning #6131/15415)"
    { { 6140, 4304 }, 9000849 }, // "Gathersanity: Thick Leather (skinning #6140/4304)"
    { { 6140, 8169 }, 9000850 }, // "Gathersanity: Thick Hide (skinning #6140/8169)"
    { { 6140, 8170 }, 9000851 }, // "Gathersanity: Rugged Leather (skinning #6140/8170)"
    { { 6140, 8171 }, 9000852 }, // "Gathersanity: Rugged Hide (skinning #6140/8171)"
    { { 6170, 2319 }, 9000853 }, // "Gathersanity: Medium Leather (skinning #6170/2319)"
    { { 6170, 4232 }, 9000854 }, // "Gathersanity: Medium Hide (skinning #6170/4232)"
    { { 6170, 4234 }, 9000855 }, // "Gathersanity: Heavy Leather (skinning #6170/4234)"
    { { 6170, 4235 }, 9000856 }, // "Gathersanity: Heavy Hide (skinning #6170/4235)"
    { { 6215, 2319 }, 9000857 }, // "Gathersanity: Medium Leather (skinning #6215/2319)"
    { { 6215, 4232 }, 9000858 }, // "Gathersanity: Medium Hide (skinning #6215/4232)"
    { { 6215, 4234 }, 9000859 }, // "Gathersanity: Heavy Leather (skinning #6215/4234)"
    { { 6215, 4235 }, 9000860 }, // "Gathersanity: Heavy Hide (skinning #6215/4235)"
    { { 6347, 4304 }, 9000861 }, // "Gathersanity: Thick Leather (skinning #6347/4304)"
    { { 6347, 8169 }, 9000862 }, // "Gathersanity: Thick Hide (skinning #6347/8169)"
    { { 6347, 8170 }, 9000863 }, // "Gathersanity: Rugged Leather (skinning #6347/8170)"
    { { 6347, 8171 }, 9000864 }, // "Gathersanity: Rugged Hide (skinning #6347/8171)"
    { { 6348, 4304 }, 9000865 }, // "Gathersanity: Thick Leather (skinning #6348/4304)"
    { { 6348, 8169 }, 9000866 }, // "Gathersanity: Thick Hide (skinning #6348/8169)"
    { { 6348, 8170 }, 9000867 }, // "Gathersanity: Rugged Leather (skinning #6348/8170)"
    { { 6348, 8171 }, 9000868 }, // "Gathersanity: Rugged Hide (skinning #6348/8171)"
    { { 6349, 4304 }, 9000869 }, // "Gathersanity: Thick Leather (skinning #6349/4304)"
    { { 6349, 7974 }, 9000870 }, // "Gathersanity: Zesty Clam Meat (skinning #6349/7974)"
    { { 6349, 8169 }, 9000871 }, // "Gathersanity: Thick Hide (skinning #6349/8169)"
    { { 6349, 8170 }, 9000872 }, // "Gathersanity: Rugged Leather (skinning #6349/8170)"
    { { 6349, 8171 }, 9000873 }, // "Gathersanity: Rugged Hide (skinning #6349/8171)"
    { { 6352, 4304 }, 9000874 }, // "Gathersanity: Thick Leather (skinning #6352/4304)"
    { { 6352, 8167 }, 9000875 }, // "Gathersanity: Turtle Scale (skinning #6352/8167)"
    { { 6352, 8169 }, 9000876 }, // "Gathersanity: Thick Hide (skinning #6352/8169)"
    { { 6352, 8170 }, 9000877 }, // "Gathersanity: Rugged Leather (skinning #6352/8170)"
    { { 6352, 8171 }, 9000878 }, // "Gathersanity: Rugged Hide (skinning #6352/8171)"
    { { 6369, 4304 }, 9000879 }, // "Gathersanity: Thick Leather (skinning #6369/4304)"
    { { 6369, 8167 }, 9000880 }, // "Gathersanity: Turtle Scale (skinning #6369/8167)"
    { { 6369, 8169 }, 9000881 }, // "Gathersanity: Thick Hide (skinning #6369/8169)"
    { { 6369, 8170 }, 9000882 }, // "Gathersanity: Rugged Leather (skinning #6369/8170)"
    { { 6375, 4304 }, 9000883 }, // "Gathersanity: Thick Leather (skinning #6375/4304)"
    { { 6375, 8169 }, 9000884 }, // "Gathersanity: Thick Hide (skinning #6375/8169)"
    { { 6375, 8170 }, 9000885 }, // "Gathersanity: Rugged Leather (skinning #6375/8170)"
    { { 6377, 4304 }, 9000886 }, // "Gathersanity: Thick Leather (skinning #6377/4304)"
    { { 6377, 8169 }, 9000887 }, // "Gathersanity: Thick Hide (skinning #6377/8169)"
    { { 6377, 8170 }, 9000888 }, // "Gathersanity: Rugged Leather (skinning #6377/8170)"
    { { 6378, 4304 }, 9000889 }, // "Gathersanity: Thick Leather (skinning #6378/4304)"
    { { 6378, 8169 }, 9000890 }, // "Gathersanity: Thick Hide (skinning #6378/8169)"
    { { 6378, 8170 }, 9000891 }, // "Gathersanity: Rugged Leather (skinning #6378/8170)"
    { { 6379, 4304 }, 9000892 }, // "Gathersanity: Thick Leather (skinning #6379/4304)"
    { { 6379, 8169 }, 9000893 }, // "Gathersanity: Thick Hide (skinning #6379/8169)"
    { { 6379, 8170 }, 9000894 }, // "Gathersanity: Rugged Leather (skinning #6379/8170)"
    { { 6379, 8171 }, 9000895 }, // "Gathersanity: Rugged Hide (skinning #6379/8171)"
    { { 6380, 4304 }, 9000896 }, // "Gathersanity: Thick Leather (skinning #6380/4304)"
    { { 6380, 8169 }, 9000897 }, // "Gathersanity: Thick Hide (skinning #6380/8169)"
    { { 6380, 8170 }, 9000898 }, // "Gathersanity: Rugged Leather (skinning #6380/8170)"
    { { 6380, 8171 }, 9000899 }, // "Gathersanity: Rugged Hide (skinning #6380/8171)"
    { { 6498, 15417 }, 9000900 }, // "Gathersanity: Devilsaur Leather (skinning #6498/15417)"
    { { 6499, 15417 }, 9000901 }, // "Gathersanity: Devilsaur Leather (skinning #6499/15417)"
    { { 6500, 15417 }, 9000902 }, // "Gathersanity: Devilsaur Leather (skinning #6500/15417)"
    { { 6501, 4304 }, 9000903 }, // "Gathersanity: Thick Leather (skinning #6501/4304)"
    { { 6501, 8169 }, 9000904 }, // "Gathersanity: Thick Hide (skinning #6501/8169)"
    { { 6501, 8170 }, 9000905 }, // "Gathersanity: Rugged Leather (skinning #6501/8170)"
    { { 6501, 8171 }, 9000906 }, // "Gathersanity: Rugged Hide (skinning #6501/8171)"
    { { 6502, 4304 }, 9000907 }, // "Gathersanity: Thick Leather (skinning #6502/4304)"
    { { 6502, 8169 }, 9000908 }, // "Gathersanity: Thick Hide (skinning #6502/8169)"
    { { 6502, 8170 }, 9000909 }, // "Gathersanity: Rugged Leather (skinning #6502/8170)"
    { { 6502, 8171 }, 9000910 }, // "Gathersanity: Rugged Hide (skinning #6502/8171)"
    { { 6503, 4304 }, 9000911 }, // "Gathersanity: Thick Leather (skinning #6503/4304)"
    { { 6503, 8169 }, 9000912 }, // "Gathersanity: Thick Hide (skinning #6503/8169)"
    { { 6503, 8170 }, 9000913 }, // "Gathersanity: Rugged Leather (skinning #6503/8170)"
    { { 6503, 8171 }, 9000914 }, // "Gathersanity: Rugged Hide (skinning #6503/8171)"
    { { 6504, 4304 }, 9000915 }, // "Gathersanity: Thick Leather (skinning #6504/4304)"
    { { 6504, 8169 }, 9000916 }, // "Gathersanity: Thick Hide (skinning #6504/8169)"
    { { 6504, 8170 }, 9000917 }, // "Gathersanity: Rugged Leather (skinning #6504/8170)"
    { { 6504, 8171 }, 9000918 }, // "Gathersanity: Rugged Hide (skinning #6504/8171)"
    { { 6505, 4304 }, 9000919 }, // "Gathersanity: Thick Leather (skinning #6505/4304)"
    { { 6505, 8169 }, 9000920 }, // "Gathersanity: Thick Hide (skinning #6505/8169)"
    { { 6505, 8170 }, 9000921 }, // "Gathersanity: Rugged Leather (skinning #6505/8170)"
    { { 6506, 4304 }, 9000922 }, // "Gathersanity: Thick Leather (skinning #6506/4304)"
    { { 6506, 8169 }, 9000923 }, // "Gathersanity: Thick Hide (skinning #6506/8169)"
    { { 6506, 8170 }, 9000924 }, // "Gathersanity: Rugged Leather (skinning #6506/8170)"
    { { 6507, 4304 }, 9000925 }, // "Gathersanity: Thick Leather (skinning #6507/4304)"
    { { 6507, 8169 }, 9000926 }, // "Gathersanity: Thick Hide (skinning #6507/8169)"
    { { 6507, 8170 }, 9000927 }, // "Gathersanity: Rugged Leather (skinning #6507/8170)"
    { { 6508, 4304 }, 9000928 }, // "Gathersanity: Thick Leather (skinning #6508/4304)"
    { { 6508, 8169 }, 9000929 }, // "Gathersanity: Thick Hide (skinning #6508/8169)"
    { { 6508, 8170 }, 9000930 }, // "Gathersanity: Rugged Leather (skinning #6508/8170)"
    { { 6513, 4304 }, 9000931 }, // "Gathersanity: Thick Leather (skinning #6513/4304)"
    { { 6513, 8169 }, 9000932 }, // "Gathersanity: Thick Hide (skinning #6513/8169)"
    { { 6513, 8170 }, 9000933 }, // "Gathersanity: Rugged Leather (skinning #6513/8170)"
    { { 6513, 8171 }, 9000934 }, // "Gathersanity: Rugged Hide (skinning #6513/8171)"
    { { 6514, 4304 }, 9000935 }, // "Gathersanity: Thick Leather (skinning #6514/4304)"
    { { 6514, 8169 }, 9000936 }, // "Gathersanity: Thick Hide (skinning #6514/8169)"
    { { 6514, 8170 }, 9000937 }, // "Gathersanity: Rugged Leather (skinning #6514/8170)"
    { { 6514, 8171 }, 9000938 }, // "Gathersanity: Rugged Hide (skinning #6514/8171)"
    { { 6516, 4304 }, 9000939 }, // "Gathersanity: Thick Leather (skinning #6516/4304)"
    { { 6516, 8169 }, 9000940 }, // "Gathersanity: Thick Hide (skinning #6516/8169)"
    { { 6516, 8170 }, 9000941 }, // "Gathersanity: Rugged Leather (skinning #6516/8170)"
    { { 6516, 8171 }, 9000942 }, // "Gathersanity: Rugged Hide (skinning #6516/8171)"
    { { 6581, 4304 }, 9000943 }, // "Gathersanity: Thick Leather (skinning #6581/4304)"
    { { 6581, 8169 }, 9000944 }, // "Gathersanity: Thick Hide (skinning #6581/8169)"
    { { 6581, 8170 }, 9000945 }, // "Gathersanity: Rugged Leather (skinning #6581/8170)"
    { { 6584, 15417 }, 9000946 }, // "Gathersanity: Devilsaur Leather (skinning #6584/15417)"
    { { 6585, 4304 }, 9000947 }, // "Gathersanity: Thick Leather (skinning #6585/4304)"
    { { 6585, 8169 }, 9000948 }, // "Gathersanity: Thick Hide (skinning #6585/8169)"
    { { 6585, 8170 }, 9000949 }, // "Gathersanity: Rugged Leather (skinning #6585/8170)"
    { { 6585, 8171 }, 9000950 }, // "Gathersanity: Rugged Hide (skinning #6585/8171)"
    { { 7022, 4234 }, 9000951 }, // "Gathersanity: Heavy Leather (skinning #7022/4234)"
    { { 7022, 4235 }, 9000952 }, // "Gathersanity: Heavy Hide (skinning #7022/4235)"
    { { 7022, 4304 }, 9000953 }, // "Gathersanity: Thick Leather (skinning #7022/4304)"
    { { 7040, 4304 }, 9000954 }, // "Gathersanity: Thick Leather (skinning #7040/4304)"
    { { 7040, 8165 }, 9000955 }, // "Gathersanity: Worn Dragonscale (skinning #7040/8165)"
    { { 7040, 8169 }, 9000956 }, // "Gathersanity: Thick Hide (skinning #7040/8169)"
    { { 7040, 8170 }, 9000957 }, // "Gathersanity: Rugged Leather (skinning #7040/8170)"
    { { 7040, 8171 }, 9000958 }, // "Gathersanity: Rugged Hide (skinning #7040/8171)"
    { { 7040, 15416 }, 9000959 }, // "Gathersanity: Black Dragonscale (skinning #7040/15416)"
    { { 7041, 4304 }, 9000960 }, // "Gathersanity: Thick Leather (skinning #7041/4304)"
    { { 7041, 8165 }, 9000961 }, // "Gathersanity: Worn Dragonscale (skinning #7041/8165)"
    { { 7041, 8169 }, 9000962 }, // "Gathersanity: Thick Hide (skinning #7041/8169)"
    { { 7041, 8170 }, 9000963 }, // "Gathersanity: Rugged Leather (skinning #7041/8170)"
    { { 7041, 8171 }, 9000964 }, // "Gathersanity: Rugged Hide (skinning #7041/8171)"
    { { 7041, 15416 }, 9000965 }, // "Gathersanity: Black Dragonscale (skinning #7041/15416)"
    { { 7042, 4304 }, 9000966 }, // "Gathersanity: Thick Leather (skinning #7042/4304)"
    { { 7042, 8165 }, 9000967 }, // "Gathersanity: Worn Dragonscale (skinning #7042/8165)"
    { { 7042, 8170 }, 9000968 }, // "Gathersanity: Rugged Leather (skinning #7042/8170)"
    { { 7042, 8171 }, 9000969 }, // "Gathersanity: Rugged Hide (skinning #7042/8171)"
    { { 7042, 15416 }, 9000970 }, // "Gathersanity: Black Dragonscale (skinning #7042/15416)"
    { { 7043, 4304 }, 9000971 }, // "Gathersanity: Thick Leather (skinning #7043/4304)"
    { { 7043, 8165 }, 9000972 }, // "Gathersanity: Worn Dragonscale (skinning #7043/8165)"
    { { 7043, 8170 }, 9000973 }, // "Gathersanity: Rugged Leather (skinning #7043/8170)"
    { { 7043, 8171 }, 9000974 }, // "Gathersanity: Rugged Hide (skinning #7043/8171)"
    { { 7043, 15416 }, 9000975 }, // "Gathersanity: Black Dragonscale (skinning #7043/15416)"
    { { 7044, 4304 }, 9000976 }, // "Gathersanity: Thick Leather (skinning #7044/4304)"
    { { 7044, 8165 }, 9000977 }, // "Gathersanity: Worn Dragonscale (skinning #7044/8165)"
    { { 7044, 8169 }, 9000978 }, // "Gathersanity: Thick Hide (skinning #7044/8169)"
    { { 7044, 8170 }, 9000979 }, // "Gathersanity: Rugged Leather (skinning #7044/8170)"
    { { 7044, 8171 }, 9000980 }, // "Gathersanity: Rugged Hide (skinning #7044/8171)"
    { { 7044, 15416 }, 9000981 }, // "Gathersanity: Black Dragonscale (skinning #7044/15416)"
    { { 7045, 4304 }, 9000982 }, // "Gathersanity: Thick Leather (skinning #7045/4304)"
    { { 7045, 8165 }, 9000983 }, // "Gathersanity: Worn Dragonscale (skinning #7045/8165)"
    { { 7045, 8169 }, 9000984 }, // "Gathersanity: Thick Hide (skinning #7045/8169)"
    { { 7045, 8170 }, 9000985 }, // "Gathersanity: Rugged Leather (skinning #7045/8170)"
    { { 7045, 8171 }, 9000986 }, // "Gathersanity: Rugged Hide (skinning #7045/8171)"
    { { 7045, 15416 }, 9000987 }, // "Gathersanity: Black Dragonscale (skinning #7045/15416)"
    { { 7046, 4304 }, 9000988 }, // "Gathersanity: Thick Leather (skinning #7046/4304)"
    { { 7046, 8165 }, 9000989 }, // "Gathersanity: Worn Dragonscale (skinning #7046/8165)"
    { { 7046, 8170 }, 9000990 }, // "Gathersanity: Rugged Leather (skinning #7046/8170)"
    { { 7046, 8171 }, 9000991 }, // "Gathersanity: Rugged Hide (skinning #7046/8171)"
    { { 7046, 15416 }, 9000992 }, // "Gathersanity: Black Dragonscale (skinning #7046/15416)"
    { { 7047, 4304 }, 9000993 }, // "Gathersanity: Thick Leather (skinning #7047/4304)"
    { { 7047, 8165 }, 9000994 }, // "Gathersanity: Worn Dragonscale (skinning #7047/8165)"
    { { 7047, 8169 }, 9000995 }, // "Gathersanity: Thick Hide (skinning #7047/8169)"
    { { 7047, 8170 }, 9000996 }, // "Gathersanity: Rugged Leather (skinning #7047/8170)"
    { { 7047, 8171 }, 9000997 }, // "Gathersanity: Rugged Hide (skinning #7047/8171)"
    { { 7047, 15416 }, 9000998 }, // "Gathersanity: Black Dragonscale (skinning #7047/15416)"
    { { 7048, 4304 }, 9000999 }, // "Gathersanity: Thick Leather (skinning #7048/4304)"
    { { 7048, 8165 }, 9001000 }, // "Gathersanity: Worn Dragonscale (skinning #7048/8165)"
    { { 7048, 8169 }, 9001001 }, // "Gathersanity: Thick Hide (skinning #7048/8169)"
    { { 7048, 8170 }, 9001002 }, // "Gathersanity: Rugged Leather (skinning #7048/8170)"
    { { 7048, 8171 }, 9001003 }, // "Gathersanity: Rugged Hide (skinning #7048/8171)"
    { { 7048, 15416 }, 9001004 }, // "Gathersanity: Black Dragonscale (skinning #7048/15416)"
    { { 7049, 4304 }, 9001005 }, // "Gathersanity: Thick Leather (skinning #7049/4304)"
    { { 7049, 8165 }, 9001006 }, // "Gathersanity: Worn Dragonscale (skinning #7049/8165)"
    { { 7049, 8169 }, 9001007 }, // "Gathersanity: Thick Hide (skinning #7049/8169)"
    { { 7049, 8170 }, 9001008 }, // "Gathersanity: Rugged Leather (skinning #7049/8170)"
    { { 7049, 8171 }, 9001009 }, // "Gathersanity: Rugged Hide (skinning #7049/8171)"
    { { 7049, 15416 }, 9001010 }, // "Gathersanity: Black Dragonscale (skinning #7049/15416)"
    { { 7055, 4304 }, 9001011 }, // "Gathersanity: Thick Leather (skinning #7055/4304)"
    { { 7055, 8169 }, 9001012 }, // "Gathersanity: Thick Hide (skinning #7055/8169)"
    { { 7055, 8170 }, 9001013 }, // "Gathersanity: Rugged Leather (skinning #7055/8170)"
    { { 7055, 8171 }, 9001014 }, // "Gathersanity: Rugged Hide (skinning #7055/8171)"
    { { 7078, 2319 }, 9001015 }, // "Gathersanity: Medium Leather (skinning #7078/2319)"
    { { 7078, 4232 }, 9001016 }, // "Gathersanity: Medium Hide (skinning #7078/4232)"
    { { 7078, 4234 }, 9001017 }, // "Gathersanity: Heavy Leather (skinning #7078/4234)"
    { { 7078, 4235 }, 9001018 }, // "Gathersanity: Heavy Hide (skinning #7078/4235)"
    { { 7125, 4304 }, 9001019 }, // "Gathersanity: Thick Leather (skinning #7125/4304)"
    { { 7125, 8169 }, 9001020 }, // "Gathersanity: Thick Hide (skinning #7125/8169)"
    { { 7125, 8170 }, 9001021 }, // "Gathersanity: Rugged Leather (skinning #7125/8170)"
    { { 7125, 8171 }, 9001022 }, // "Gathersanity: Rugged Hide (skinning #7125/8171)"
    { { 7125, 11512 }, 9001023 }, // "Gathersanity: Patch of Tainted Skin (skinning #7125/11512)"
    { { 7126, 4304 }, 9001024 }, // "Gathersanity: Thick Leather (skinning #7126/4304)"
    { { 7126, 8169 }, 9001025 }, // "Gathersanity: Thick Hide (skinning #7126/8169)"
    { { 7126, 8170 }, 9001026 }, // "Gathersanity: Rugged Leather (skinning #7126/8170)"
    { { 7126, 8171 }, 9001027 }, // "Gathersanity: Rugged Hide (skinning #7126/8171)"
    { { 7126, 11512 }, 9001028 }, // "Gathersanity: Patch of Tainted Skin (skinning #7126/11512)"
    { { 7273, 4304 }, 9001029 }, // "Gathersanity: Thick Leather (skinning #7273/4304)"
    { { 7273, 8169 }, 9001030 }, // "Gathersanity: Thick Hide (skinning #7273/8169)"
    { { 7273, 8170 }, 9001031 }, // "Gathersanity: Rugged Leather (skinning #7273/8170)"
    { { 7333, 2319 }, 9001032 }, // "Gathersanity: Medium Leather (skinning #7333/2319)"
    { { 7333, 4232 }, 9001033 }, // "Gathersanity: Medium Hide (skinning #7333/4232)"
    { { 7333, 4234 }, 9001034 }, // "Gathersanity: Heavy Leather (skinning #7333/4234)"
    { { 7333, 4235 }, 9001035 }, // "Gathersanity: Heavy Hide (skinning #7333/4235)"
    { { 7334, 4234 }, 9001036 }, // "Gathersanity: Heavy Leather (skinning #7334/4234)"
    { { 7334, 4235 }, 9001037 }, // "Gathersanity: Heavy Hide (skinning #7334/4235)"
    { { 7334, 4304 }, 9001038 }, // "Gathersanity: Thick Leather (skinning #7334/4304)"
    { { 7405, 4234 }, 9001039 }, // "Gathersanity: Heavy Leather (skinning #7405/4234)"
    { { 7405, 4235 }, 9001040 }, // "Gathersanity: Heavy Hide (skinning #7405/4235)"
    { { 7405, 4304 }, 9001041 }, // "Gathersanity: Thick Leather (skinning #7405/4304)"
    { { 7405, 8154 }, 9001042 }, // "Gathersanity: Scorpid Scale (skinning #7405/8154)"
    { { 7405, 8169 }, 9001043 }, // "Gathersanity: Thick Hide (skinning #7405/8169)"
    { { 7430, 4304 }, 9001044 }, // "Gathersanity: Thick Leather (skinning #7430/4304)"
    { { 7430, 8169 }, 9001045 }, // "Gathersanity: Thick Hide (skinning #7430/8169)"
    { { 7430, 8170 }, 9001046 }, // "Gathersanity: Rugged Leather (skinning #7430/8170)"
    { { 7430, 8171 }, 9001047 }, // "Gathersanity: Rugged Hide (skinning #7430/8171)"
    { { 7430, 15422 }, 9001048 }, // "Gathersanity: Frostsaber Leather (skinning #7430/15422)"
    { { 7431, 4304 }, 9001049 }, // "Gathersanity: Thick Leather (skinning #7431/4304)"
    { { 7431, 8170 }, 9001050 }, // "Gathersanity: Rugged Leather (skinning #7431/8170)"
    { { 7431, 8171 }, 9001051 }, // "Gathersanity: Rugged Hide (skinning #7431/8171)"
    { { 7431, 15422 }, 9001052 }, // "Gathersanity: Frostsaber Leather (skinning #7431/15422)"
    { { 7432, 4304 }, 9001053 }, // "Gathersanity: Thick Leather (skinning #7432/4304)"
    { { 7432, 8170 }, 9001054 }, // "Gathersanity: Rugged Leather (skinning #7432/8170)"
    { { 7432, 8171 }, 9001055 }, // "Gathersanity: Rugged Hide (skinning #7432/8171)"
    { { 7432, 15422 }, 9001056 }, // "Gathersanity: Frostsaber Leather (skinning #7432/15422)"
    { { 7433, 4304 }, 9001057 }, // "Gathersanity: Thick Leather (skinning #7433/4304)"
    { { 7433, 8170 }, 9001058 }, // "Gathersanity: Rugged Leather (skinning #7433/8170)"
    { { 7433, 8171 }, 9001059 }, // "Gathersanity: Rugged Hide (skinning #7433/8171)"
    { { 7433, 15422 }, 9001060 }, // "Gathersanity: Frostsaber Leather (skinning #7433/15422)"
    { { 7434, 4304 }, 9001061 }, // "Gathersanity: Thick Leather (skinning #7434/4304)"
    { { 7434, 8170 }, 9001062 }, // "Gathersanity: Rugged Leather (skinning #7434/8170)"
    { { 7434, 8171 }, 9001063 }, // "Gathersanity: Rugged Hide (skinning #7434/8171)"
    { { 7434, 15422 }, 9001064 }, // "Gathersanity: Frostsaber Leather (skinning #7434/15422)"
    { { 7435, 4304 }, 9001065 }, // "Gathersanity: Thick Leather (skinning #7435/4304)"
    { { 7435, 8165 }, 9001066 }, // "Gathersanity: Worn Dragonscale (skinning #7435/8165)"
    { { 7435, 8169 }, 9001067 }, // "Gathersanity: Thick Hide (skinning #7435/8169)"
    { { 7435, 8170 }, 9001068 }, // "Gathersanity: Rugged Leather (skinning #7435/8170)"
    { { 7435, 8171 }, 9001069 }, // "Gathersanity: Rugged Hide (skinning #7435/8171)"
    { { 7435, 15415 }, 9001070 }, // "Gathersanity: Blue Dragonscale (skinning #7435/15415)"
    { { 7436, 4304 }, 9001071 }, // "Gathersanity: Thick Leather (skinning #7436/4304)"
    { { 7436, 8165 }, 9001072 }, // "Gathersanity: Worn Dragonscale (skinning #7436/8165)"
    { { 7436, 8170 }, 9001073 }, // "Gathersanity: Rugged Leather (skinning #7436/8170)"
    { { 7436, 8171 }, 9001074 }, // "Gathersanity: Rugged Hide (skinning #7436/8171)"
    { { 7436, 15415 }, 9001075 }, // "Gathersanity: Blue Dragonscale (skinning #7436/15415)"
    { { 7437, 4304 }, 9001076 }, // "Gathersanity: Thick Leather (skinning #7437/4304)"
    { { 7437, 8165 }, 9001077 }, // "Gathersanity: Worn Dragonscale (skinning #7437/8165)"
    { { 7437, 8170 }, 9001078 }, // "Gathersanity: Rugged Leather (skinning #7437/8170)"
    { { 7437, 8171 }, 9001079 }, // "Gathersanity: Rugged Hide (skinning #7437/8171)"
    { { 7437, 15415 }, 9001080 }, // "Gathersanity: Blue Dragonscale (skinning #7437/15415)"
    { { 7443, 4304 }, 9001081 }, // "Gathersanity: Thick Leather (skinning #7443/4304)"
    { { 7443, 8169 }, 9001082 }, // "Gathersanity: Thick Hide (skinning #7443/8169)"
    { { 7443, 8170 }, 9001083 }, // "Gathersanity: Rugged Leather (skinning #7443/8170)"
    { { 7443, 8171 }, 9001084 }, // "Gathersanity: Rugged Hide (skinning #7443/8171)"
    { { 7443, 15419 }, 9001085 }, // "Gathersanity: Warbear Leather (skinning #7443/15419)"
    { { 7444, 4304 }, 9001086 }, // "Gathersanity: Thick Leather (skinning #7444/4304)"
    { { 7444, 8169 }, 9001087 }, // "Gathersanity: Thick Hide (skinning #7444/8169)"
    { { 7444, 8170 }, 9001088 }, // "Gathersanity: Rugged Leather (skinning #7444/8170)"
    { { 7444, 8171 }, 9001089 }, // "Gathersanity: Rugged Hide (skinning #7444/8171)"
    { { 7444, 15419 }, 9001090 }, // "Gathersanity: Warbear Leather (skinning #7444/15419)"
    { { 7445, 4304 }, 9001091 }, // "Gathersanity: Thick Leather (skinning #7445/4304)"
    { { 7445, 8170 }, 9001092 }, // "Gathersanity: Rugged Leather (skinning #7445/8170)"
    { { 7445, 8171 }, 9001093 }, // "Gathersanity: Rugged Hide (skinning #7445/8171)"
    { { 7445, 15419 }, 9001094 }, // "Gathersanity: Warbear Leather (skinning #7445/15419)"
    { { 7446, 4304 }, 9001095 }, // "Gathersanity: Thick Leather (skinning #7446/4304)"
    { { 7446, 8170 }, 9001096 }, // "Gathersanity: Rugged Leather (skinning #7446/8170)"
    { { 7446, 8171 }, 9001097 }, // "Gathersanity: Rugged Hide (skinning #7446/8171)"
    { { 7446, 15419 }, 9001098 }, // "Gathersanity: Warbear Leather (skinning #7446/15419)"
    { { 7447, 4304 }, 9001099 }, // "Gathersanity: Thick Leather (skinning #7447/4304)"
    { { 7447, 8169 }, 9001100 }, // "Gathersanity: Thick Hide (skinning #7447/8169)"
    { { 7447, 8170 }, 9001101 }, // "Gathersanity: Rugged Leather (skinning #7447/8170)"
    { { 7447, 8171 }, 9001102 }, // "Gathersanity: Rugged Hide (skinning #7447/8171)"
    { { 7448, 4304 }, 9001103 }, // "Gathersanity: Thick Leather (skinning #7448/4304)"
    { { 7448, 8170 }, 9001104 }, // "Gathersanity: Rugged Leather (skinning #7448/8170)"
    { { 7448, 8171 }, 9001105 }, // "Gathersanity: Rugged Hide (skinning #7448/8171)"
    { { 7449, 4304 }, 9001106 }, // "Gathersanity: Thick Leather (skinning #7449/4304)"
    { { 7449, 8170 }, 9001107 }, // "Gathersanity: Rugged Leather (skinning #7449/8170)"
    { { 7449, 8171 }, 9001108 }, // "Gathersanity: Rugged Hide (skinning #7449/8171)"
    { { 7457, 4304 }, 9001109 }, // "Gathersanity: Thick Leather (skinning #7457/4304)"
    { { 7457, 8169 }, 9001110 }, // "Gathersanity: Thick Hide (skinning #7457/8169)"
    { { 7457, 8170 }, 9001111 }, // "Gathersanity: Rugged Leather (skinning #7457/8170)"
    { { 7457, 8171 }, 9001112 }, // "Gathersanity: Rugged Hide (skinning #7457/8171)"
    { { 7458, 4304 }, 9001113 }, // "Gathersanity: Thick Leather (skinning #7458/4304)"
    { { 7458, 8169 }, 9001114 }, // "Gathersanity: Thick Hide (skinning #7458/8169)"
    { { 7458, 8170 }, 9001115 }, // "Gathersanity: Rugged Leather (skinning #7458/8170)"
    { { 7458, 8171 }, 9001116 }, // "Gathersanity: Rugged Hide (skinning #7458/8171)"
    { { 7459, 4304 }, 9001117 }, // "Gathersanity: Thick Leather (skinning #7459/4304)"
    { { 7459, 8170 }, 9001118 }, // "Gathersanity: Rugged Leather (skinning #7459/8170)"
    { { 7459, 8171 }, 9001119 }, // "Gathersanity: Rugged Hide (skinning #7459/8171)"
    { { 7460, 4304 }, 9001120 }, // "Gathersanity: Thick Leather (skinning #7460/4304)"
    { { 7460, 8170 }, 9001121 }, // "Gathersanity: Rugged Leather (skinning #7460/8170)"
    { { 7460, 8171 }, 9001122 }, // "Gathersanity: Rugged Hide (skinning #7460/8171)"
    { { 7462, 4304 }, 9001123 }, // "Gathersanity: Thick Leather (skinning #7462/4304)"
    { { 7462, 8170 }, 9001124 }, // "Gathersanity: Rugged Leather (skinning #7462/8170)"
    { { 7462, 8171 }, 9001125 }, // "Gathersanity: Rugged Hide (skinning #7462/8171)"
    { { 7803, 4304 }, 9001126 }, // "Gathersanity: Thick Leather (skinning #7803/4304)"
    { { 7803, 8154 }, 9001127 }, // "Gathersanity: Scorpid Scale (skinning #7803/8154)"
    { { 7803, 8169 }, 9001128 }, // "Gathersanity: Thick Hide (skinning #7803/8169)"
    { { 7803, 8170 }, 9001129 }, // "Gathersanity: Rugged Leather (skinning #7803/8170)"
    { { 7846, 4304 }, 9001130 }, // "Gathersanity: Thick Leather (skinning #7846/4304)"
    { { 7846, 8165 }, 9001131 }, // "Gathersanity: Worn Dragonscale (skinning #7846/8165)"
    { { 7846, 8170 }, 9001132 }, // "Gathersanity: Rugged Leather (skinning #7846/8170)"
    { { 7846, 8171 }, 9001133 }, // "Gathersanity: Rugged Hide (skinning #7846/8171)"
    { { 7846, 15416 }, 9001134 }, // "Gathersanity: Black Dragonscale (skinning #7846/15416)"
    { { 7848, 4304 }, 9001135 }, // "Gathersanity: Thick Leather (skinning #7848/4304)"
    { { 7848, 8169 }, 9001136 }, // "Gathersanity: Thick Hide (skinning #7848/8169)"
    { { 7848, 8170 }, 9001137 }, // "Gathersanity: Rugged Leather (skinning #7848/8170)"
    { { 7977, 4304 }, 9001138 }, // "Gathersanity: Thick Leather (skinning #7977/4304)"
    { { 7977, 8167 }, 9001139 }, // "Gathersanity: Turtle Scale (skinning #7977/8167)"
    { { 7977, 8169 }, 9001140 }, // "Gathersanity: Thick Hide (skinning #7977/8169)"
    { { 7977, 8170 }, 9001141 }, // "Gathersanity: Rugged Leather (skinning #7977/8170)"
    { { 8095, 4304 }, 9001142 }, // "Gathersanity: Thick Leather (skinning #8095/4304)"
    { { 8095, 8169 }, 9001143 }, // "Gathersanity: Thick Hide (skinning #8095/8169)"
    { { 8095, 8170 }, 9001144 }, // "Gathersanity: Rugged Leather (skinning #8095/8170)"
    { { 8120, 4304 }, 9001145 }, // "Gathersanity: Thick Leather (skinning #8120/4304)"
    { { 8120, 8169 }, 9001146 }, // "Gathersanity: Thick Hide (skinning #8120/8169)"
    { { 8120, 8170 }, 9001147 }, // "Gathersanity: Rugged Leather (skinning #8120/8170)"
    { { 8138, 4234 }, 9001148 }, // "Gathersanity: Heavy Leather (skinning #8138/4234)"
    { { 8138, 4235 }, 9001149 }, // "Gathersanity: Heavy Hide (skinning #8138/4235)"
    { { 8138, 4304 }, 9001150 }, // "Gathersanity: Thick Leather (skinning #8138/4304)"
    { { 8196, 4304 }, 9001151 }, // "Gathersanity: Thick Leather (skinning #8196/4304)"
    { { 8196, 8165 }, 9001152 }, // "Gathersanity: Worn Dragonscale (skinning #8196/8165)"
    { { 8196, 8169 }, 9001153 }, // "Gathersanity: Thick Hide (skinning #8196/8169)"
    { { 8196, 8170 }, 9001154 }, // "Gathersanity: Rugged Leather (skinning #8196/8170)"
    { { 8197, 4304 }, 9001155 }, // "Gathersanity: Thick Leather (skinning #8197/4304)"
    { { 8197, 8165 }, 9001156 }, // "Gathersanity: Worn Dragonscale (skinning #8197/8165)"
    { { 8197, 8170 }, 9001157 }, // "Gathersanity: Rugged Leather (skinning #8197/8170)"
    { { 8197, 8171 }, 9001158 }, // "Gathersanity: Rugged Hide (skinning #8197/8171)"
    { { 8198, 4304 }, 9001159 }, // "Gathersanity: Thick Leather (skinning #8198/4304)"
    { { 8198, 8165 }, 9001160 }, // "Gathersanity: Worn Dragonscale (skinning #8198/8165)"
    { { 8198, 8169 }, 9001161 }, // "Gathersanity: Thick Hide (skinning #8198/8169)"
    { { 8198, 8170 }, 9001162 }, // "Gathersanity: Rugged Leather (skinning #8198/8170)"
    { { 8198, 8171 }, 9001163 }, // "Gathersanity: Rugged Hide (skinning #8198/8171)"
    { { 8211, 4234 }, 9001164 }, // "Gathersanity: Heavy Leather (skinning #8211/4234)"
    { { 8211, 4235 }, 9001165 }, // "Gathersanity: Heavy Hide (skinning #8211/4235)"
    { { 8211, 4304 }, 9001166 }, // "Gathersanity: Thick Leather (skinning #8211/4304)"
    { { 8211, 8169 }, 9001167 }, // "Gathersanity: Thick Hide (skinning #8211/8169)"
    { { 8213, 4304 }, 9001168 }, // "Gathersanity: Thick Leather (skinning #8213/4304)"
    { { 8213, 8167 }, 9001169 }, // "Gathersanity: Turtle Scale (skinning #8213/8167)"
    { { 8213, 8169 }, 9001170 }, // "Gathersanity: Thick Hide (skinning #8213/8169)"
    { { 8213, 8170 }, 9001171 }, // "Gathersanity: Rugged Leather (skinning #8213/8170)"
    { { 8236, 17057 }, 9001172 }, // "Gathersanity: Shiny Fish Scales (skinning #8236/17057)"
    { { 8280, 4304 }, 9001173 }, // "Gathersanity: Thick Leather (skinning #8280/4304)"
    { { 8280, 8169 }, 9001174 }, // "Gathersanity: Thick Hide (skinning #8280/8169)"
    { { 8300, 4304 }, 9001175 }, // "Gathersanity: Thick Leather (skinning #8300/4304)"
    { { 8300, 8170 }, 9001176 }, // "Gathersanity: Rugged Leather (skinning #8300/8170)"
    { { 8301, 4304 }, 9001177 }, // "Gathersanity: Thick Leather (skinning #8301/4304)"
    { { 8301, 8154 }, 9001178 }, // "Gathersanity: Scorpid Scale (skinning #8301/8154)"
    { { 8301, 8170 }, 9001179 }, // "Gathersanity: Rugged Leather (skinning #8301/8170)"
    { { 8301, 15408 }, 9001180 }, // "Gathersanity: Heavy Scorpid Scale (skinning #8301/15408)"
    { { 8319, 4304 }, 9001181 }, // "Gathersanity: Thick Leather (skinning #8319/4304)"
    { { 8319, 8165 }, 9001182 }, // "Gathersanity: Worn Dragonscale (skinning #8319/8165)"
    { { 8319, 8169 }, 9001183 }, // "Gathersanity: Thick Hide (skinning #8319/8169)"
    { { 8319, 8170 }, 9001184 }, // "Gathersanity: Rugged Leather (skinning #8319/8170)"
    { { 8319, 15412 }, 9001185 }, // "Gathersanity: Green Dragonscale (skinning #8319/15412)"
    { { 8336, 4304 }, 9001186 }, // "Gathersanity: Thick Leather (skinning #8336/4304)"
    { { 8336, 8169 }, 9001187 }, // "Gathersanity: Thick Hide (skinning #8336/8169)"
    { { 8336, 8170 }, 9001188 }, // "Gathersanity: Rugged Leather (skinning #8336/8170)"
    { { 8437, 4234 }, 9001189 }, // "Gathersanity: Heavy Leather (skinning #8437/4234)"
    { { 8437, 4235 }, 9001190 }, // "Gathersanity: Heavy Hide (skinning #8437/4235)"
    { { 8437, 4304 }, 9001191 }, // "Gathersanity: Thick Leather (skinning #8437/4304)"
    { { 8437, 8169 }, 9001192 }, // "Gathersanity: Thick Hide (skinning #8437/8169)"
    { { 8438, 4304 }, 9001193 }, // "Gathersanity: Thick Leather (skinning #8438/4304)"
    { { 8438, 8169 }, 9001194 }, // "Gathersanity: Thick Hide (skinning #8438/8169)"
    { { 8438, 8170 }, 9001195 }, // "Gathersanity: Rugged Leather (skinning #8438/8170)"
    { { 8497, 4304 }, 9001196 }, // "Gathersanity: Thick Leather (skinning #8497/4304)"
    { { 8497, 8165 }, 9001197 }, // "Gathersanity: Worn Dragonscale (skinning #8497/8165)"
    { { 8497, 8169 }, 9001198 }, // "Gathersanity: Thick Hide (skinning #8497/8169)"
    { { 8497, 8170 }, 9001199 }, // "Gathersanity: Rugged Leather (skinning #8497/8170)"
    { { 8497, 15412 }, 9001200 }, // "Gathersanity: Green Dragonscale (skinning #8497/15412)"
    { { 8596, 4304 }, 9001201 }, // "Gathersanity: Thick Leather (skinning #8596/4304)"
    { { 8596, 8169 }, 9001202 }, // "Gathersanity: Thick Hide (skinning #8596/8169)"
    { { 8596, 8170 }, 9001203 }, // "Gathersanity: Rugged Leather (skinning #8596/8170)"
    { { 8596, 8171 }, 9001204 }, // "Gathersanity: Rugged Hide (skinning #8596/8171)"
    { { 8597, 4304 }, 9001205 }, // "Gathersanity: Thick Leather (skinning #8597/4304)"
    { { 8597, 8169 }, 9001206 }, // "Gathersanity: Thick Hide (skinning #8597/8169)"
    { { 8597, 8170 }, 9001207 }, // "Gathersanity: Rugged Leather (skinning #8597/8170)"
    { { 8597, 8171 }, 9001208 }, // "Gathersanity: Rugged Hide (skinning #8597/8171)"
    { { 8598, 4304 }, 9001209 }, // "Gathersanity: Thick Leather (skinning #8598/4304)"
    { { 8598, 8170 }, 9001210 }, // "Gathersanity: Rugged Leather (skinning #8598/8170)"
    { { 8598, 8171 }, 9001211 }, // "Gathersanity: Rugged Hide (skinning #8598/8171)"
    { { 8600, 4304 }, 9001212 }, // "Gathersanity: Thick Leather (skinning #8600/4304)"
    { { 8600, 8169 }, 9001213 }, // "Gathersanity: Thick Hide (skinning #8600/8169)"
    { { 8600, 8170 }, 9001214 }, // "Gathersanity: Rugged Leather (skinning #8600/8170)"
    { { 8600, 8171 }, 9001215 }, // "Gathersanity: Rugged Hide (skinning #8600/8171)"
    { { 8601, 4304 }, 9001216 }, // "Gathersanity: Thick Leather (skinning #8601/4304)"
    { { 8601, 8169 }, 9001217 }, // "Gathersanity: Thick Hide (skinning #8601/8169)"
    { { 8601, 8170 }, 9001218 }, // "Gathersanity: Rugged Leather (skinning #8601/8170)"
    { { 8601, 8171 }, 9001219 }, // "Gathersanity: Rugged Hide (skinning #8601/8171)"
    { { 8602, 4304 }, 9001220 }, // "Gathersanity: Thick Leather (skinning #8602/4304)"
    { { 8602, 8170 }, 9001221 }, // "Gathersanity: Rugged Leather (skinning #8602/8170)"
    { { 8602, 8171 }, 9001222 }, // "Gathersanity: Rugged Hide (skinning #8602/8171)"
    { { 8660, 4304 }, 9001223 }, // "Gathersanity: Thick Leather (skinning #8660/4304)"
    { { 8660, 8170 }, 9001224 }, // "Gathersanity: Rugged Leather (skinning #8660/8170)"
    { { 8675, 4304 }, 9001225 }, // "Gathersanity: Thick Leather (skinning #8675/4304)"
    { { 8675, 8169 }, 9001226 }, // "Gathersanity: Thick Hide (skinning #8675/8169)"
    { { 8675, 8170 }, 9001227 }, // "Gathersanity: Rugged Leather (skinning #8675/8170)"
    { { 8718, 8170 }, 9001228 }, // "Gathersanity: Rugged Leather (skinning #8718/8170)"
    { { 8718, 8171 }, 9001229 }, // "Gathersanity: Rugged Hide (skinning #8718/8171)"
    { { 8759, 4304 }, 9001230 }, // "Gathersanity: Thick Leather (skinning #8759/4304)"
    { { 8759, 8169 }, 9001231 }, // "Gathersanity: Thick Hide (skinning #8759/8169)"
    { { 8759, 8170 }, 9001232 }, // "Gathersanity: Rugged Leather (skinning #8759/8170)"
    { { 8760, 4304 }, 9001233 }, // "Gathersanity: Thick Leather (skinning #8760/4304)"
    { { 8760, 8169 }, 9001234 }, // "Gathersanity: Thick Hide (skinning #8760/8169)"
    { { 8760, 8170 }, 9001235 }, // "Gathersanity: Rugged Leather (skinning #8760/8170)"
    { { 8761, 4304 }, 9001236 }, // "Gathersanity: Thick Leather (skinning #8761/4304)"
    { { 8761, 8169 }, 9001237 }, // "Gathersanity: Thick Hide (skinning #8761/8169)"
    { { 8761, 8170 }, 9001238 }, // "Gathersanity: Rugged Leather (skinning #8761/8170)"
    { { 8761, 8171 }, 9001239 }, // "Gathersanity: Rugged Hide (skinning #8761/8171)"
    { { 8763, 4304 }, 9001240 }, // "Gathersanity: Thick Leather (skinning #8763/4304)"
    { { 8763, 8169 }, 9001241 }, // "Gathersanity: Thick Hide (skinning #8763/8169)"
    { { 8763, 8170 }, 9001242 }, // "Gathersanity: Rugged Leather (skinning #8763/8170)"
    { { 8763, 8171 }, 9001243 }, // "Gathersanity: Rugged Hide (skinning #8763/8171)"
    { { 8764, 4304 }, 9001244 }, // "Gathersanity: Thick Leather (skinning #8764/4304)"
    { { 8764, 8169 }, 9001245 }, // "Gathersanity: Thick Hide (skinning #8764/8169)"
    { { 8764, 8170 }, 9001246 }, // "Gathersanity: Rugged Leather (skinning #8764/8170)"
    { { 8764, 8171 }, 9001247 }, // "Gathersanity: Rugged Hide (skinning #8764/8171)"
    { { 8921, 4304 }, 9001248 }, // "Gathersanity: Thick Leather (skinning #8921/4304)"
    { { 8921, 8169 }, 9001249 }, // "Gathersanity: Thick Hide (skinning #8921/8169)"
    { { 8921, 8170 }, 9001250 }, // "Gathersanity: Rugged Leather (skinning #8921/8170)"
    { { 8922, 4304 }, 9001251 }, // "Gathersanity: Thick Leather (skinning #8922/4304)"
    { { 8922, 8169 }, 9001252 }, // "Gathersanity: Thick Hide (skinning #8922/8169)"
    { { 8922, 8170 }, 9001253 }, // "Gathersanity: Rugged Leather (skinning #8922/8170)"
    { { 8922, 8171 }, 9001254 }, // "Gathersanity: Rugged Hide (skinning #8922/8171)"
    { { 8926, 4304 }, 9001255 }, // "Gathersanity: Thick Leather (skinning #8926/4304)"
    { { 8926, 8154 }, 9001256 }, // "Gathersanity: Scorpid Scale (skinning #8926/8154)"
    { { 8926, 8169 }, 9001257 }, // "Gathersanity: Thick Hide (skinning #8926/8169)"
    { { 8926, 8170 }, 9001258 }, // "Gathersanity: Rugged Leather (skinning #8926/8170)"
    { { 8927, 4304 }, 9001259 }, // "Gathersanity: Thick Leather (skinning #8927/4304)"
    { { 8927, 8169 }, 9001260 }, // "Gathersanity: Thick Hide (skinning #8927/8169)"
    { { 8927, 8170 }, 9001261 }, // "Gathersanity: Rugged Leather (skinning #8927/8170)"
    { { 8928, 4304 }, 9001262 }, // "Gathersanity: Thick Leather (skinning #8928/4304)"
    { { 8928, 8169 }, 9001263 }, // "Gathersanity: Thick Hide (skinning #8928/8169)"
    { { 8928, 8170 }, 9001264 }, // "Gathersanity: Rugged Leather (skinning #8928/8170)"
    { { 8956, 4304 }, 9001265 }, // "Gathersanity: Thick Leather (skinning #8956/4304)"
    { { 8956, 8169 }, 9001266 }, // "Gathersanity: Thick Hide (skinning #8956/8169)"
    { { 8956, 8170 }, 9001267 }, // "Gathersanity: Rugged Leather (skinning #8956/8170)"
    { { 8956, 8171 }, 9001268 }, // "Gathersanity: Rugged Hide (skinning #8956/8171)"
    { { 8956, 11512 }, 9001269 }, // "Gathersanity: Patch of Tainted Skin (skinning #8956/11512)"
    { { 8957, 4304 }, 9001270 }, // "Gathersanity: Thick Leather (skinning #8957/4304)"
    { { 8957, 8169 }, 9001271 }, // "Gathersanity: Thick Hide (skinning #8957/8169)"
    { { 8957, 8170 }, 9001272 }, // "Gathersanity: Rugged Leather (skinning #8957/8170)"
    { { 8957, 8171 }, 9001273 }, // "Gathersanity: Rugged Hide (skinning #8957/8171)"
    { { 8957, 11512 }, 9001274 }, // "Gathersanity: Patch of Tainted Skin (skinning #8957/11512)"
    { { 8957, 15419 }, 9001275 }, // "Gathersanity: Warbear Leather (skinning #8957/15419)"
    { { 8958, 4304 }, 9001276 }, // "Gathersanity: Thick Leather (skinning #8958/4304)"
    { { 8958, 8169 }, 9001277 }, // "Gathersanity: Thick Hide (skinning #8958/8169)"
    { { 8958, 8170 }, 9001278 }, // "Gathersanity: Rugged Leather (skinning #8958/8170)"
    { { 8958, 8171 }, 9001279 }, // "Gathersanity: Rugged Hide (skinning #8958/8171)"
    { { 8958, 11512 }, 9001280 }, // "Gathersanity: Patch of Tainted Skin (skinning #8958/11512)"
    { { 8959, 4304 }, 9001281 }, // "Gathersanity: Thick Leather (skinning #8959/4304)"
    { { 8959, 8169 }, 9001282 }, // "Gathersanity: Thick Hide (skinning #8959/8169)"
    { { 8959, 8170 }, 9001283 }, // "Gathersanity: Rugged Leather (skinning #8959/8170)"
    { { 8959, 8171 }, 9001284 }, // "Gathersanity: Rugged Hide (skinning #8959/8171)"
    { { 8959, 11512 }, 9001285 }, // "Gathersanity: Patch of Tainted Skin (skinning #8959/11512)"
    { { 8960, 4304 }, 9001286 }, // "Gathersanity: Thick Leather (skinning #8960/4304)"
    { { 8960, 8169 }, 9001287 }, // "Gathersanity: Thick Hide (skinning #8960/8169)"
    { { 8960, 8170 }, 9001288 }, // "Gathersanity: Rugged Leather (skinning #8960/8170)"
    { { 8960, 8171 }, 9001289 }, // "Gathersanity: Rugged Hide (skinning #8960/8171)"
    { { 8960, 11512 }, 9001290 }, // "Gathersanity: Patch of Tainted Skin (skinning #8960/11512)"
    { { 8961, 4304 }, 9001291 }, // "Gathersanity: Thick Leather (skinning #8961/4304)"
    { { 8961, 8169 }, 9001292 }, // "Gathersanity: Thick Hide (skinning #8961/8169)"
    { { 8961, 8170 }, 9001293 }, // "Gathersanity: Rugged Leather (skinning #8961/8170)"
    { { 8961, 8171 }, 9001294 }, // "Gathersanity: Rugged Hide (skinning #8961/8171)"
    { { 8961, 11512 }, 9001295 }, // "Gathersanity: Patch of Tainted Skin (skinning #8961/11512)"
    { { 9029, 4304 }, 9001296 }, // "Gathersanity: Thick Leather (skinning #9029/4304)"
    { { 9029, 8169 }, 9001297 }, // "Gathersanity: Thick Hide (skinning #9029/8169)"
    { { 9029, 8170 }, 9001298 }, // "Gathersanity: Rugged Leather (skinning #9029/8170)"
    { { 9042, 4304 }, 9001299 }, // "Gathersanity: Thick Leather (skinning #9042/4304)"
    { { 9042, 8169 }, 9001300 }, // "Gathersanity: Thick Hide (skinning #9042/8169)"
    { { 9042, 8170 }, 9001301 }, // "Gathersanity: Rugged Leather (skinning #9042/8170)"
    { { 9042, 8171 }, 9001302 }, // "Gathersanity: Rugged Hide (skinning #9042/8171)"
    { { 9096, 4304 }, 9001303 }, // "Gathersanity: Thick Leather (skinning #9096/4304)"
    { { 9096, 8165 }, 9001304 }, // "Gathersanity: Worn Dragonscale (skinning #9096/8165)"
    { { 9096, 8170 }, 9001305 }, // "Gathersanity: Rugged Leather (skinning #9096/8170)"
    { { 9096, 8171 }, 9001306 }, // "Gathersanity: Rugged Hide (skinning #9096/8171)"
    { { 9096, 15416 }, 9001307 }, // "Gathersanity: Black Dragonscale (skinning #9096/15416)"
    { { 9162, 4304 }, 9001308 }, // "Gathersanity: Thick Leather (skinning #9162/4304)"
    { { 9162, 8169 }, 9001309 }, // "Gathersanity: Thick Hide (skinning #9162/8169)"
    { { 9162, 8170 }, 9001310 }, // "Gathersanity: Rugged Leather (skinning #9162/8170)"
    { { 9163, 4304 }, 9001311 }, // "Gathersanity: Thick Leather (skinning #9163/4304)"
    { { 9163, 8169 }, 9001312 }, // "Gathersanity: Thick Hide (skinning #9163/8169)"
    { { 9163, 8170 }, 9001313 }, // "Gathersanity: Rugged Leather (skinning #9163/8170)"
    { { 9163, 8171 }, 9001314 }, // "Gathersanity: Rugged Hide (skinning #9163/8171)"
    { { 9164, 4304 }, 9001315 }, // "Gathersanity: Thick Leather (skinning #9164/4304)"
    { { 9164, 8169 }, 9001316 }, // "Gathersanity: Thick Hide (skinning #9164/8169)"
    { { 9164, 8170 }, 9001317 }, // "Gathersanity: Rugged Leather (skinning #9164/8170)"
    { { 9164, 8171 }, 9001318 }, // "Gathersanity: Rugged Hide (skinning #9164/8171)"
    { { 9165, 4304 }, 9001319 }, // "Gathersanity: Thick Leather (skinning #9165/4304)"
    { { 9165, 8169 }, 9001320 }, // "Gathersanity: Thick Hide (skinning #9165/8169)"
    { { 9165, 8170 }, 9001321 }, // "Gathersanity: Rugged Leather (skinning #9165/8170)"
    { { 9166, 4304 }, 9001322 }, // "Gathersanity: Thick Leather (skinning #9166/4304)"
    { { 9166, 8169 }, 9001323 }, // "Gathersanity: Thick Hide (skinning #9166/8169)"
    { { 9166, 8170 }, 9001324 }, // "Gathersanity: Rugged Leather (skinning #9166/8170)"
    { { 9167, 4304 }, 9001325 }, // "Gathersanity: Thick Leather (skinning #9167/4304)"
    { { 9167, 8169 }, 9001326 }, // "Gathersanity: Thick Hide (skinning #9167/8169)"
    { { 9167, 8170 }, 9001327 }, // "Gathersanity: Rugged Leather (skinning #9167/8170)"
    { { 9167, 8171 }, 9001328 }, // "Gathersanity: Rugged Hide (skinning #9167/8171)"
    { { 9318, 4304 }, 9001329 }, // "Gathersanity: Thick Leather (skinning #9318/4304)"
    { { 9318, 8169 }, 9001330 }, // "Gathersanity: Thick Hide (skinning #9318/8169)"
    { { 9318, 8170 }, 9001331 }, // "Gathersanity: Rugged Leather (skinning #9318/8170)"
    { { 9416, 4304 }, 9001332 }, // "Gathersanity: Thick Leather (skinning #9416/4304)"
    { { 9416, 8169 }, 9001333 }, // "Gathersanity: Thick Hide (skinning #9416/8169)"
    { { 9416, 8170 }, 9001334 }, // "Gathersanity: Rugged Leather (skinning #9416/8170)"
    { { 9416, 8171 }, 9001335 }, // "Gathersanity: Rugged Hide (skinning #9416/8171)"
    { { 9461, 4304 }, 9001336 }, // "Gathersanity: Thick Leather (skinning #9461/4304)"
    { { 9461, 8165 }, 9001337 }, // "Gathersanity: Worn Dragonscale (skinning #9461/8165)"
    { { 9461, 8169 }, 9001338 }, // "Gathersanity: Thick Hide (skinning #9461/8169)"
    { { 9461, 8170 }, 9001339 }, // "Gathersanity: Rugged Leather (skinning #9461/8170)"
    { { 9461, 8171 }, 9001340 }, // "Gathersanity: Rugged Hide (skinning #9461/8171)"
    { { 9461, 15416 }, 9001341 }, // "Gathersanity: Black Dragonscale (skinning #9461/15416)"
    { { 9568, 4304 }, 9001342 }, // "Gathersanity: Thick Leather (skinning #9568/4304)"
    { { 9568, 8165 }, 9001343 }, // "Gathersanity: Worn Dragonscale (skinning #9568/8165)"
    { { 9568, 8170 }, 9001344 }, // "Gathersanity: Rugged Leather (skinning #9568/8170)"
    { { 9568, 8171 }, 9001345 }, // "Gathersanity: Rugged Hide (skinning #9568/8171)"
    { { 9568, 15416 }, 9001346 }, // "Gathersanity: Black Dragonscale (skinning #9568/15416)"
    { { 9622, 4304 }, 9001347 }, // "Gathersanity: Thick Leather (skinning #9622/4304)"
    { { 9622, 8169 }, 9001348 }, // "Gathersanity: Thick Hide (skinning #9622/8169)"
    { { 9622, 8170 }, 9001349 }, // "Gathersanity: Rugged Leather (skinning #9622/8170)"
    { { 9622, 8171 }, 9001350 }, // "Gathersanity: Rugged Hide (skinning #9622/8171)"
    { { 9683, 4304 }, 9001351 }, // "Gathersanity: Thick Leather (skinning #9683/4304)"
    { { 9683, 8169 }, 9001352 }, // "Gathersanity: Thick Hide (skinning #9683/8169)"
    { { 9683, 8170 }, 9001353 }, // "Gathersanity: Rugged Leather (skinning #9683/8170)"
    { { 9684, 4304 }, 9001354 }, // "Gathersanity: Thick Leather (skinning #9684/4304)"
    { { 9684, 8170 }, 9001355 }, // "Gathersanity: Rugged Leather (skinning #9684/8170)"
    { { 9684, 8171 }, 9001356 }, // "Gathersanity: Rugged Hide (skinning #9684/8171)"
    { { 9690, 4304 }, 9001357 }, // "Gathersanity: Thick Leather (skinning #9690/4304)"
    { { 9690, 8169 }, 9001358 }, // "Gathersanity: Thick Hide (skinning #9690/8169)"
    { { 9690, 8170 }, 9001359 }, // "Gathersanity: Rugged Leather (skinning #9690/8170)"
    { { 9690, 8171 }, 9001360 }, // "Gathersanity: Rugged Hide (skinning #9690/8171)"
    { { 9691, 4304 }, 9001361 }, // "Gathersanity: Thick Leather (skinning #9691/4304)"
    { { 9691, 8154 }, 9001362 }, // "Gathersanity: Scorpid Scale (skinning #9691/8154)"
    { { 9691, 8169 }, 9001363 }, // "Gathersanity: Thick Hide (skinning #9691/8169)"
    { { 9691, 8170 }, 9001364 }, // "Gathersanity: Rugged Leather (skinning #9691/8170)"
    { { 9691, 8171 }, 9001365 }, // "Gathersanity: Rugged Hide (skinning #9691/8171)"
    { { 9691, 15408 }, 9001366 }, // "Gathersanity: Heavy Scorpid Scale (skinning #9691/15408)"
    { { 9694, 4304 }, 9001367 }, // "Gathersanity: Thick Leather (skinning #9694/4304)"
    { { 9694, 8169 }, 9001368 }, // "Gathersanity: Thick Hide (skinning #9694/8169)"
    { { 9694, 8170 }, 9001369 }, // "Gathersanity: Rugged Leather (skinning #9694/8170)"
    { { 9694, 8171 }, 9001370 }, // "Gathersanity: Rugged Hide (skinning #9694/8171)"
    { { 9695, 4304 }, 9001371 }, // "Gathersanity: Thick Leather (skinning #9695/4304)"
    { { 9695, 8154 }, 9001372 }, // "Gathersanity: Scorpid Scale (skinning #9695/8154)"
    { { 9695, 8169 }, 9001373 }, // "Gathersanity: Thick Hide (skinning #9695/8169)"
    { { 9695, 8170 }, 9001374 }, // "Gathersanity: Rugged Leather (skinning #9695/8170)"
    { { 9695, 8171 }, 9001375 }, // "Gathersanity: Rugged Hide (skinning #9695/8171)"
    { { 9695, 15408 }, 9001376 }, // "Gathersanity: Heavy Scorpid Scale (skinning #9695/15408)"
    { { 9696, 4304 }, 9001377 }, // "Gathersanity: Thick Leather (skinning #9696/4304)"
    { { 9696, 8170 }, 9001378 }, // "Gathersanity: Rugged Leather (skinning #9696/8170)"
    { { 9696, 8171 }, 9001379 }, // "Gathersanity: Rugged Hide (skinning #9696/8171)"
    { { 9697, 4304 }, 9001380 }, // "Gathersanity: Thick Leather (skinning #9697/4304)"
    { { 9697, 8169 }, 9001381 }, // "Gathersanity: Thick Hide (skinning #9697/8169)"
    { { 9697, 8170 }, 9001382 }, // "Gathersanity: Rugged Leather (skinning #9697/8170)"
    { { 9697, 8171 }, 9001383 }, // "Gathersanity: Rugged Hide (skinning #9697/8171)"
    { { 9698, 4304 }, 9001384 }, // "Gathersanity: Thick Leather (skinning #9698/4304)"
    { { 9698, 8169 }, 9001385 }, // "Gathersanity: Thick Hide (skinning #9698/8169)"
    { { 9698, 8170 }, 9001386 }, // "Gathersanity: Rugged Leather (skinning #9698/8170)"
    { { 9698, 15408 }, 9001387 }, // "Gathersanity: Heavy Scorpid Scale (skinning #9698/15408)"
    { { 9701, 4304 }, 9001388 }, // "Gathersanity: Thick Leather (skinning #9701/4304)"
    { { 9701, 8169 }, 9001389 }, // "Gathersanity: Thick Hide (skinning #9701/8169)"
    { { 9701, 8170 }, 9001390 }, // "Gathersanity: Rugged Leather (skinning #9701/8170)"
    { { 9701, 15408 }, 9001391 }, // "Gathersanity: Heavy Scorpid Scale (skinning #9701/15408)"
    { { 10083, 4304 }, 9001392 }, // "Gathersanity: Thick Leather (skinning #10083/4304)"
    { { 10083, 8165 }, 9001393 }, // "Gathersanity: Worn Dragonscale (skinning #10083/8165)"
    { { 10083, 8170 }, 9001394 }, // "Gathersanity: Rugged Leather (skinning #10083/8170)"
    { { 10083, 8171 }, 9001395 }, // "Gathersanity: Rugged Hide (skinning #10083/8171)"
    { { 10083, 15416 }, 9001396 }, // "Gathersanity: Black Dragonscale (skinning #10083/15416)"
    { { 10147, 4304 }, 9001397 }, // "Gathersanity: Thick Leather (skinning #10147/4304)"
    { { 10147, 8169 }, 9001398 }, // "Gathersanity: Thick Hide (skinning #10147/8169)"
    { { 10147, 8170 }, 9001399 }, // "Gathersanity: Rugged Leather (skinning #10147/8170)"
    { { 10147, 8171 }, 9001400 }, // "Gathersanity: Rugged Hide (skinning #10147/8171)"
    { { 10147, 11512 }, 9001401 }, // "Gathersanity: Patch of Tainted Skin (skinning #10147/11512)"
    { { 10150, 4304 }, 9001402 }, // "Gathersanity: Thick Leather (skinning #10150/4304)"
    { { 10150, 8169 }, 9001403 }, // "Gathersanity: Thick Hide (skinning #10150/8169)"
    { { 10150, 8170 }, 9001404 }, // "Gathersanity: Rugged Leather (skinning #10150/8170)"
    { { 10156, 4304 }, 9001405 }, // "Gathersanity: Thick Leather (skinning #10156/4304)"
    { { 10156, 8170 }, 9001406 }, // "Gathersanity: Rugged Leather (skinning #10156/8170)"
    { { 10156, 8171 }, 9001407 }, // "Gathersanity: Rugged Hide (skinning #10156/8171)"
    { { 10184, 15410 }, 9001408 }, // "Gathersanity: Scale of Onyxia (skinning #10184/15410)"
    { { 10196, 8165 }, 9001409 }, // "Gathersanity: Worn Dragonscale (skinning #10196/8165)"
    { { 10196, 8170 }, 9001410 }, // "Gathersanity: Rugged Leather (skinning #10196/8170)"
    { { 10196, 15415 }, 9001411 }, // "Gathersanity: Blue Dragonscale (skinning #10196/15415)"
    { { 10197, 4304 }, 9001412 }, // "Gathersanity: Thick Leather (skinning #10197/4304)"
    { { 10197, 8169 }, 9001413 }, // "Gathersanity: Thick Hide (skinning #10197/8169)"
    { { 10197, 8170 }, 9001414 }, // "Gathersanity: Rugged Leather (skinning #10197/8170)"
    { { 10197, 8171 }, 9001415 }, // "Gathersanity: Rugged Hide (skinning #10197/8171)"
    { { 10200, 4304 }, 9001416 }, // "Gathersanity: Thick Leather (skinning #10200/4304)"
    { { 10200, 8170 }, 9001417 }, // "Gathersanity: Rugged Leather (skinning #10200/8170)"
    { { 10200, 8171 }, 9001418 }, // "Gathersanity: Rugged Hide (skinning #10200/8171)"
    { { 10202, 4304 }, 9001419 }, // "Gathersanity: Thick Leather (skinning #10202/4304)"
    { { 10202, 8165 }, 9001420 }, // "Gathersanity: Worn Dragonscale (skinning #10202/8165)"
    { { 10202, 8170 }, 9001421 }, // "Gathersanity: Rugged Leather (skinning #10202/8170)"
    { { 10202, 15415 }, 9001422 }, // "Gathersanity: Blue Dragonscale (skinning #10202/15415)"
    { { 10220, 8170 }, 9001423 }, // "Gathersanity: Rugged Leather (skinning #10220/8170)"
    { { 10220, 8171 }, 9001424 }, // "Gathersanity: Rugged Hide (skinning #10220/8171)"
    { { 10221, 4304 }, 9001425 }, // "Gathersanity: Thick Leather (skinning #10221/4304)"
    { { 10221, 8169 }, 9001426 }, // "Gathersanity: Thick Hide (skinning #10221/8169)"
    { { 10221, 8170 }, 9001427 }, // "Gathersanity: Rugged Leather (skinning #10221/8170)"
    { { 10221, 8171 }, 9001428 }, // "Gathersanity: Rugged Hide (skinning #10221/8171)"
    { { 10257, 4304 }, 9001429 }, // "Gathersanity: Thick Leather (skinning #10257/4304)"
    { { 10257, 8170 }, 9001430 }, // "Gathersanity: Rugged Leather (skinning #10257/8170)"
    { { 10257, 8171 }, 9001431 }, // "Gathersanity: Rugged Hide (skinning #10257/8171)"
    { { 10257, 19768 }, 9001432 }, // "Gathersanity: Primal Tiger Leather (skinning #10257/19768)"
    { { 10258, 4304 }, 9001433 }, // "Gathersanity: Thick Leather (skinning #10258/4304)"
    { { 10258, 8165 }, 9001434 }, // "Gathersanity: Worn Dragonscale (skinning #10258/8165)"
    { { 10258, 8170 }, 9001435 }, // "Gathersanity: Rugged Leather (skinning #10258/8170)"
    { { 10258, 8171 }, 9001436 }, // "Gathersanity: Rugged Hide (skinning #10258/8171)"
    { { 10258, 15416 }, 9001437 }, // "Gathersanity: Black Dragonscale (skinning #10258/15416)"
    { { 10264, 4304 }, 9001438 }, // "Gathersanity: Thick Leather (skinning #10264/4304)"
    { { 10264, 8165 }, 9001439 }, // "Gathersanity: Worn Dragonscale (skinning #10264/8165)"
    { { 10264, 8170 }, 9001440 }, // "Gathersanity: Rugged Leather (skinning #10264/8170)"
    { { 10264, 8171 }, 9001441 }, // "Gathersanity: Rugged Hide (skinning #10264/8171)"
    { { 10264, 15416 }, 9001442 }, // "Gathersanity: Black Dragonscale (skinning #10264/15416)"
    { { 10268, 8170 }, 9001443 }, // "Gathersanity: Rugged Leather (skinning #10268/8170)"
    { { 10268, 8171 }, 9001444 }, // "Gathersanity: Rugged Hide (skinning #10268/8171)"
    { { 10321, 4304 }, 9001445 }, // "Gathersanity: Thick Leather (skinning #10321/4304)"
    { { 10321, 8165 }, 9001446 }, // "Gathersanity: Worn Dragonscale (skinning #10321/8165)"
    { { 10321, 8170 }, 9001447 }, // "Gathersanity: Rugged Leather (skinning #10321/8170)"
    { { 10321, 8171 }, 9001448 }, // "Gathersanity: Rugged Hide (skinning #10321/8171)"
    { { 10321, 15416 }, 9001449 }, // "Gathersanity: Black Dragonscale (skinning #10321/15416)"
    { { 10339, 8170 }, 9001450 }, // "Gathersanity: Rugged Leather (skinning #10339/8170)"
    { { 10339, 15412 }, 9001451 }, // "Gathersanity: Green Dragonscale (skinning #10339/15412)"
    { { 10339, 15414 }, 9001452 }, // "Gathersanity: Red Dragonscale (skinning #10339/15414)"
    { { 10339, 15415 }, 9001453 }, // "Gathersanity: Blue Dragonscale (skinning #10339/15415)"
    { { 10339, 15416 }, 9001454 }, // "Gathersanity: Black Dragonscale (skinning #10339/15416)"
    { { 10363, 4304 }, 9001455 }, // "Gathersanity: Thick Leather (skinning #10363/4304)"
    { { 10363, 8165 }, 9001456 }, // "Gathersanity: Worn Dragonscale (skinning #10363/8165)"
    { { 10363, 8170 }, 9001457 }, // "Gathersanity: Rugged Leather (skinning #10363/8170)"
    { { 10363, 8171 }, 9001458 }, // "Gathersanity: Rugged Hide (skinning #10363/8171)"
    { { 10363, 15416 }, 9001459 }, // "Gathersanity: Black Dragonscale (skinning #10363/15416)"
    { { 10366, 4304 }, 9001460 }, // "Gathersanity: Thick Leather (skinning #10366/4304)"
    { { 10366, 8165 }, 9001461 }, // "Gathersanity: Worn Dragonscale (skinning #10366/8165)"
    { { 10366, 8170 }, 9001462 }, // "Gathersanity: Rugged Leather (skinning #10366/8170)"
    { { 10366, 8171 }, 9001463 }, // "Gathersanity: Rugged Hide (skinning #10366/8171)"
    { { 10366, 15416 }, 9001464 }, // "Gathersanity: Black Dragonscale (skinning #10366/15416)"
    { { 10371, 4304 }, 9001465 }, // "Gathersanity: Thick Leather (skinning #10371/4304)"
    { { 10371, 8165 }, 9001466 }, // "Gathersanity: Worn Dragonscale (skinning #10371/8165)"
    { { 10371, 8170 }, 9001467 }, // "Gathersanity: Rugged Leather (skinning #10371/8170)"
    { { 10371, 8171 }, 9001468 }, // "Gathersanity: Rugged Hide (skinning #10371/8171)"
    { { 10371, 15416 }, 9001469 }, // "Gathersanity: Black Dragonscale (skinning #10371/15416)"
    { { 10372, 4304 }, 9001470 }, // "Gathersanity: Thick Leather (skinning #10372/4304)"
    { { 10372, 8165 }, 9001471 }, // "Gathersanity: Worn Dragonscale (skinning #10372/8165)"
    { { 10372, 8170 }, 9001472 }, // "Gathersanity: Rugged Leather (skinning #10372/8170)"
    { { 10372, 8171 }, 9001473 }, // "Gathersanity: Rugged Hide (skinning #10372/8171)"
    { { 10372, 15416 }, 9001474 }, // "Gathersanity: Black Dragonscale (skinning #10372/15416)"
    { { 10430, 8170 }, 9001475 }, // "Gathersanity: Rugged Leather (skinning #10430/8170)"
    { { 10430, 8171 }, 9001476 }, // "Gathersanity: Rugged Hide (skinning #10430/8171)"
    { { 10430, 12731 }, 9001477 }, // "Gathersanity: Pristine Hide of the Beast (skinning #10430/12731)"
    { { 10442, 4304 }, 9001478 }, // "Gathersanity: Thick Leather (skinning #10442/4304)"
    { { 10442, 8170 }, 9001479 }, // "Gathersanity: Rugged Leather (skinning #10442/8170)"
    { { 10442, 8171 }, 9001480 }, // "Gathersanity: Rugged Hide (skinning #10442/8171)"
    { { 10442, 15412 }, 9001481 }, // "Gathersanity: Green Dragonscale (skinning #10442/15412)"
    { { 10442, 15414 }, 9001482 }, // "Gathersanity: Red Dragonscale (skinning #10442/15414)"
    { { 10442, 15415 }, 9001483 }, // "Gathersanity: Blue Dragonscale (skinning #10442/15415)"
    { { 10442, 15416 }, 9001484 }, // "Gathersanity: Black Dragonscale (skinning #10442/15416)"
    { { 10447, 4304 }, 9001485 }, // "Gathersanity: Thick Leather (skinning #10447/4304)"
    { { 10447, 8165 }, 9001486 }, // "Gathersanity: Worn Dragonscale (skinning #10447/8165)"
    { { 10447, 8170 }, 9001487 }, // "Gathersanity: Rugged Leather (skinning #10447/8170)"
    { { 10447, 8171 }, 9001488 }, // "Gathersanity: Rugged Hide (skinning #10447/8171)"
    { { 10447, 15412 }, 9001489 }, // "Gathersanity: Green Dragonscale (skinning #10447/15412)"
    { { 10447, 15414 }, 9001490 }, // "Gathersanity: Red Dragonscale (skinning #10447/15414)"
    { { 10447, 15415 }, 9001491 }, // "Gathersanity: Blue Dragonscale (skinning #10447/15415)"
    { { 10447, 15416 }, 9001492 }, // "Gathersanity: Black Dragonscale (skinning #10447/15416)"
    { { 10659, 4304 }, 9001493 }, // "Gathersanity: Thick Leather (skinning #10659/4304)"
    { { 10659, 8165 }, 9001494 }, // "Gathersanity: Worn Dragonscale (skinning #10659/8165)"
    { { 10659, 8169 }, 9001495 }, // "Gathersanity: Thick Hide (skinning #10659/8169)"
    { { 10659, 8170 }, 9001496 }, // "Gathersanity: Rugged Leather (skinning #10659/8170)"
    { { 10659, 8171 }, 9001497 }, // "Gathersanity: Rugged Hide (skinning #10659/8171)"
    { { 10659, 15415 }, 9001498 }, // "Gathersanity: Blue Dragonscale (skinning #10659/15415)"
    { { 10660, 4304 }, 9001499 }, // "Gathersanity: Thick Leather (skinning #10660/4304)"
    { { 10660, 8165 }, 9001500 }, // "Gathersanity: Worn Dragonscale (skinning #10660/8165)"
    { { 10660, 8169 }, 9001501 }, // "Gathersanity: Thick Hide (skinning #10660/8169)"
    { { 10660, 8170 }, 9001502 }, // "Gathersanity: Rugged Leather (skinning #10660/8170)"
    { { 10660, 8171 }, 9001503 }, // "Gathersanity: Rugged Hide (skinning #10660/8171)"
    { { 10660, 15415 }, 9001504 }, // "Gathersanity: Blue Dragonscale (skinning #10660/15415)"
    { { 10661, 4304 }, 9001505 }, // "Gathersanity: Thick Leather (skinning #10661/4304)"
    { { 10661, 8165 }, 9001506 }, // "Gathersanity: Worn Dragonscale (skinning #10661/8165)"
    { { 10661, 8169 }, 9001507 }, // "Gathersanity: Thick Hide (skinning #10661/8169)"
    { { 10661, 8170 }, 9001508 }, // "Gathersanity: Rugged Leather (skinning #10661/8170)"
    { { 10661, 8171 }, 9001509 }, // "Gathersanity: Rugged Hide (skinning #10661/8171)"
    { { 10661, 15415 }, 9001510 }, // "Gathersanity: Blue Dragonscale (skinning #10661/15415)"
    { { 10662, 4304 }, 9001511 }, // "Gathersanity: Thick Leather (skinning #10662/4304)"
    { { 10662, 8165 }, 9001512 }, // "Gathersanity: Worn Dragonscale (skinning #10662/8165)"
    { { 10662, 8170 }, 9001513 }, // "Gathersanity: Rugged Leather (skinning #10662/8170)"
    { { 10662, 15415 }, 9001514 }, // "Gathersanity: Blue Dragonscale (skinning #10662/15415)"
    { { 10663, 4304 }, 9001515 }, // "Gathersanity: Thick Leather (skinning #10663/4304)"
    { { 10663, 8165 }, 9001516 }, // "Gathersanity: Worn Dragonscale (skinning #10663/8165)"
    { { 10663, 8170 }, 9001517 }, // "Gathersanity: Rugged Leather (skinning #10663/8170)"
    { { 10663, 8171 }, 9001518 }, // "Gathersanity: Rugged Hide (skinning #10663/8171)"
    { { 10663, 15415 }, 9001519 }, // "Gathersanity: Blue Dragonscale (skinning #10663/15415)"
    { { 10664, 4304 }, 9001520 }, // "Gathersanity: Thick Leather (skinning #10664/4304)"
    { { 10664, 8165 }, 9001521 }, // "Gathersanity: Worn Dragonscale (skinning #10664/8165)"
    { { 10664, 8170 }, 9001522 }, // "Gathersanity: Rugged Leather (skinning #10664/8170)"
    { { 10664, 8171 }, 9001523 }, // "Gathersanity: Rugged Hide (skinning #10664/8171)"
    { { 10664, 15415 }, 9001524 }, // "Gathersanity: Blue Dragonscale (skinning #10664/15415)"
    { { 10678, 4304 }, 9001525 }, // "Gathersanity: Thick Leather (skinning #10678/4304)"
    { { 10678, 8165 }, 9001526 }, // "Gathersanity: Worn Dragonscale (skinning #10678/8165)"
    { { 10678, 8170 }, 9001527 }, // "Gathersanity: Rugged Leather (skinning #10678/8170)"
    { { 10678, 8171 }, 9001528 }, // "Gathersanity: Rugged Hide (skinning #10678/8171)"
    { { 10683, 4304 }, 9001529 }, // "Gathersanity: Thick Leather (skinning #10683/4304)"
    { { 10683, 8165 }, 9001530 }, // "Gathersanity: Worn Dragonscale (skinning #10683/8165)"
    { { 10683, 8170 }, 9001531 }, // "Gathersanity: Rugged Leather (skinning #10683/8170)"
    { { 10683, 8171 }, 9001532 }, // "Gathersanity: Rugged Hide (skinning #10683/8171)"
    { { 10683, 15416 }, 9001533 }, // "Gathersanity: Black Dragonscale (skinning #10683/15416)"
    { { 10737, 4304 }, 9001534 }, // "Gathersanity: Thick Leather (skinning #10737/4304)"
    { { 10737, 8170 }, 9001535 }, // "Gathersanity: Rugged Leather (skinning #10737/8170)"
    { { 10737, 8171 }, 9001536 }, // "Gathersanity: Rugged Hide (skinning #10737/8171)"
    { { 10741, 4304 }, 9001537 }, // "Gathersanity: Thick Leather (skinning #10741/4304)"
    { { 10741, 8170 }, 9001538 }, // "Gathersanity: Rugged Leather (skinning #10741/8170)"
    { { 10741, 8171 }, 9001539 }, // "Gathersanity: Rugged Hide (skinning #10741/8171)"
    { { 10806, 4304 }, 9001540 }, // "Gathersanity: Thick Leather (skinning #10806/4304)"
    { { 10806, 8170 }, 9001541 }, // "Gathersanity: Rugged Leather (skinning #10806/8170)"
    { { 10806, 8171 }, 9001542 }, // "Gathersanity: Rugged Hide (skinning #10806/8171)"
    { { 10806, 15419 }, 9001543 }, // "Gathersanity: Warbear Leather (skinning #10806/15419)"
    { { 10807, 4304 }, 9001544 }, // "Gathersanity: Thick Leather (skinning #10807/4304)"
    { { 10807, 8170 }, 9001545 }, // "Gathersanity: Rugged Leather (skinning #10807/8170)"
    { { 10807, 8171 }, 9001546 }, // "Gathersanity: Rugged Hide (skinning #10807/8171)"
    { { 10814, 4304 }, 9001547 }, // "Gathersanity: Thick Leather (skinning #10814/4304)"
    { { 10814, 8165 }, 9001548 }, // "Gathersanity: Worn Dragonscale (skinning #10814/8165)"
    { { 10814, 8170 }, 9001549 }, // "Gathersanity: Rugged Leather (skinning #10814/8170)"
    { { 10814, 8171 }, 9001550 }, // "Gathersanity: Rugged Hide (skinning #10814/8171)"
    { { 10814, 15412 }, 9001551 }, // "Gathersanity: Green Dragonscale (skinning #10814/15412)"
    { { 10814, 15414 }, 9001552 }, // "Gathersanity: Red Dragonscale (skinning #10814/15414)"
    { { 10814, 15415 }, 9001553 }, // "Gathersanity: Blue Dragonscale (skinning #10814/15415)"
    { { 10814, 15416 }, 9001554 }, // "Gathersanity: Black Dragonscale (skinning #10814/15416)"
    { { 10981, 4304 }, 9001555 }, // "Gathersanity: Thick Leather (skinning #10981/4304)"
    { { 10981, 8169 }, 9001556 }, // "Gathersanity: Thick Hide (skinning #10981/8169)"
    { { 10981, 8170 }, 9001557 }, // "Gathersanity: Rugged Leather (skinning #10981/8170)"
    { { 10990, 4304 }, 9001558 }, // "Gathersanity: Thick Leather (skinning #10990/4304)"
    { { 10990, 8169 }, 9001559 }, // "Gathersanity: Thick Hide (skinning #10990/8169)"
    { { 10990, 8170 }, 9001560 }, // "Gathersanity: Rugged Leather (skinning #10990/8170)"
    { { 11357, 4304 }, 9001561 }, // "Gathersanity: Thick Leather (skinning #11357/4304)"
    { { 11357, 8170 }, 9001562 }, // "Gathersanity: Rugged Leather (skinning #11357/8170)"
    { { 11357, 8171 }, 9001563 }, // "Gathersanity: Rugged Hide (skinning #11357/8171)"
    { { 11359, 8170 }, 9001564 }, // "Gathersanity: Rugged Leather (skinning #11359/8170)"
    { { 11359, 8171 }, 9001565 }, // "Gathersanity: Rugged Hide (skinning #11359/8171)"
    { { 11360, 4304 }, 9001566 }, // "Gathersanity: Thick Leather (skinning #11360/4304)"
    { { 11360, 8170 }, 9001567 }, // "Gathersanity: Rugged Leather (skinning #11360/8170)"
    { { 11360, 8171 }, 9001568 }, // "Gathersanity: Rugged Hide (skinning #11360/8171)"
    { { 11360, 19768 }, 9001569 }, // "Gathersanity: Primal Tiger Leather (skinning #11360/19768)"
    { { 11361, 4304 }, 9001570 }, // "Gathersanity: Thick Leather (skinning #11361/4304)"
    { { 11361, 8170 }, 9001571 }, // "Gathersanity: Rugged Leather (skinning #11361/8170)"
    { { 11361, 8171 }, 9001572 }, // "Gathersanity: Rugged Hide (skinning #11361/8171)"
    { { 11361, 19768 }, 9001573 }, // "Gathersanity: Primal Tiger Leather (skinning #11361/19768)"
    { { 11365, 4304 }, 9001574 }, // "Gathersanity: Thick Leather (skinning #11365/4304)"
    { { 11365, 8170 }, 9001575 }, // "Gathersanity: Rugged Leather (skinning #11365/8170)"
    { { 11365, 8171 }, 9001576 }, // "Gathersanity: Rugged Hide (skinning #11365/8171)"
    { { 11368, 4304 }, 9001577 }, // "Gathersanity: Thick Leather (skinning #11368/4304)"
    { { 11368, 8170 }, 9001578 }, // "Gathersanity: Rugged Leather (skinning #11368/8170)"
    { { 11368, 8171 }, 9001579 }, // "Gathersanity: Rugged Hide (skinning #11368/8171)"
    { { 11368, 19767 }, 9001580 }, // "Gathersanity: Primal Bat Leather (skinning #11368/19767)"
    { { 11371, 4304 }, 9001581 }, // "Gathersanity: Thick Leather (skinning #11371/4304)"
    { { 11371, 8170 }, 9001582 }, // "Gathersanity: Rugged Leather (skinning #11371/8170)"
    { { 11371, 8171 }, 9001583 }, // "Gathersanity: Rugged Hide (skinning #11371/8171)"
    { { 11372, 4304 }, 9001584 }, // "Gathersanity: Thick Leather (skinning #11372/4304)"
    { { 11372, 8170 }, 9001585 }, // "Gathersanity: Rugged Leather (skinning #11372/8170)"
    { { 11372, 8171 }, 9001586 }, // "Gathersanity: Rugged Hide (skinning #11372/8171)"
    { { 11373, 4304 }, 9001587 }, // "Gathersanity: Thick Leather (skinning #11373/4304)"
    { { 11373, 8170 }, 9001588 }, // "Gathersanity: Rugged Leather (skinning #11373/8170)"
    { { 11373, 8171 }, 9001589 }, // "Gathersanity: Rugged Hide (skinning #11373/8171)"
    { { 11496, 8170 }, 9001590 }, // "Gathersanity: Rugged Leather (skinning #11496/8170)"
    { { 11497, 4304 }, 9001591 }, // "Gathersanity: Thick Leather (skinning #11497/4304)"
    { { 11497, 8170 }, 9001592 }, // "Gathersanity: Rugged Leather (skinning #11497/8170)"
    { { 11497, 8171 }, 9001593 }, // "Gathersanity: Rugged Hide (skinning #11497/8171)"
    { { 11583, 15416 }, 9001594 }, // "Gathersanity: Black Dragonscale (skinning #11583/15416)"
    { { 11673, 17012 }, 9001595 }, // "Gathersanity: Core Leather (skinning #11673/17012)"
    { { 11698, 20498 }, 9001596 }, // "Gathersanity: Silithid Chitin (skinning #11698/20498)"
    { { 11698, 20499 }, 9001597 }, // "Gathersanity: Broken Silithid Chitin (skinning #11698/20499)"
    { { 11698, 20500 }, 9001598 }, // "Gathersanity: Light Silithid Carapace (skinning #11698/20500)"
    { { 11721, 20498 }, 9001599 }, // "Gathersanity: Silithid Chitin (skinning #11721/20498)"
    { { 11721, 20499 }, 9001600 }, // "Gathersanity: Broken Silithid Chitin (skinning #11721/20499)"
    { { 11722, 20498 }, 9001601 }, // "Gathersanity: Silithid Chitin (skinning #11722/20498)"
    { { 11722, 20499 }, 9001602 }, // "Gathersanity: Broken Silithid Chitin (skinning #11722/20499)"
    { { 11723, 20498 }, 9001603 }, // "Gathersanity: Silithid Chitin (skinning #11723/20498)"
    { { 11723, 20499 }, 9001604 }, // "Gathersanity: Broken Silithid Chitin (skinning #11723/20499)"
    { { 11723, 20501 }, 9001605 }, // "Gathersanity: Heavy Silithid Carapace (skinning #11723/20501)"
    { { 11724, 20498 }, 9001606 }, // "Gathersanity: Silithid Chitin (skinning #11724/20498)"
    { { 11724, 20499 }, 9001607 }, // "Gathersanity: Broken Silithid Chitin (skinning #11724/20499)"
    { { 11724, 20500 }, 9001608 }, // "Gathersanity: Light Silithid Carapace (skinning #11724/20500)"
    { { 11725, 20498 }, 9001609 }, // "Gathersanity: Silithid Chitin (skinning #11725/20498)"
    { { 11725, 20499 }, 9001610 }, // "Gathersanity: Broken Silithid Chitin (skinning #11725/20499)"
    { { 11726, 20498 }, 9001611 }, // "Gathersanity: Silithid Chitin (skinning #11726/20498)"
    { { 11726, 20499 }, 9001612 }, // "Gathersanity: Broken Silithid Chitin (skinning #11726/20499)"
    { { 11727, 20498 }, 9001613 }, // "Gathersanity: Silithid Chitin (skinning #11727/20498)"
    { { 11727, 20499 }, 9001614 }, // "Gathersanity: Broken Silithid Chitin (skinning #11727/20499)"
    { { 11727, 20500 }, 9001615 }, // "Gathersanity: Light Silithid Carapace (skinning #11727/20500)"
    { { 11728, 20498 }, 9001616 }, // "Gathersanity: Silithid Chitin (skinning #11728/20498)"
    { { 11728, 20499 }, 9001617 }, // "Gathersanity: Broken Silithid Chitin (skinning #11728/20499)"
    { { 11728, 20501 }, 9001618 }, // "Gathersanity: Heavy Silithid Carapace (skinning #11728/20501)"
    { { 11729, 20498 }, 9001619 }, // "Gathersanity: Silithid Chitin (skinning #11729/20498)"
    { { 11729, 20499 }, 9001620 }, // "Gathersanity: Broken Silithid Chitin (skinning #11729/20499)"
    { { 11730, 20498 }, 9001621 }, // "Gathersanity: Silithid Chitin (skinning #11730/20498)"
    { { 11730, 20499 }, 9001622 }, // "Gathersanity: Broken Silithid Chitin (skinning #11730/20499)"
    { { 11730, 20501 }, 9001623 }, // "Gathersanity: Heavy Silithid Carapace (skinning #11730/20501)"
    { { 11731, 20498 }, 9001624 }, // "Gathersanity: Silithid Chitin (skinning #11731/20498)"
    { { 11731, 20499 }, 9001625 }, // "Gathersanity: Broken Silithid Chitin (skinning #11731/20499)"
    { { 11732, 20498 }, 9001626 }, // "Gathersanity: Silithid Chitin (skinning #11732/20498)"
    { { 11732, 20499 }, 9001627 }, // "Gathersanity: Broken Silithid Chitin (skinning #11732/20499)"
    { { 11732, 20500 }, 9001628 }, // "Gathersanity: Light Silithid Carapace (skinning #11732/20500)"
    { { 11733, 20498 }, 9001629 }, // "Gathersanity: Silithid Chitin (skinning #11733/20498)"
    { { 11733, 20499 }, 9001630 }, // "Gathersanity: Broken Silithid Chitin (skinning #11733/20499)"
    { { 11734, 20498 }, 9001631 }, // "Gathersanity: Silithid Chitin (skinning #11734/20498)"
    { { 11734, 20499 }, 9001632 }, // "Gathersanity: Broken Silithid Chitin (skinning #11734/20499)"
    { { 11734, 20501 }, 9001633 }, // "Gathersanity: Heavy Silithid Carapace (skinning #11734/20501)"
    { { 11735, 4304 }, 9001634 }, // "Gathersanity: Thick Leather (skinning #11735/4304)"
    { { 11735, 8169 }, 9001635 }, // "Gathersanity: Thick Hide (skinning #11735/8169)"
    { { 11735, 8170 }, 9001636 }, // "Gathersanity: Rugged Leather (skinning #11735/8170)"
    { { 11735, 15408 }, 9001637 }, // "Gathersanity: Heavy Scorpid Scale (skinning #11735/15408)"
    { { 11736, 4304 }, 9001638 }, // "Gathersanity: Thick Leather (skinning #11736/4304)"
    { { 11736, 8169 }, 9001639 }, // "Gathersanity: Thick Hide (skinning #11736/8169)"
    { { 11736, 8170 }, 9001640 }, // "Gathersanity: Rugged Leather (skinning #11736/8170)"
    { { 11736, 15408 }, 9001641 }, // "Gathersanity: Heavy Scorpid Scale (skinning #11736/15408)"
    { { 11737, 4304 }, 9001642 }, // "Gathersanity: Thick Leather (skinning #11737/4304)"
    { { 11737, 8169 }, 9001643 }, // "Gathersanity: Thick Hide (skinning #11737/8169)"
    { { 11737, 8170 }, 9001644 }, // "Gathersanity: Rugged Leather (skinning #11737/8170)"
    { { 11737, 15408 }, 9001645 }, // "Gathersanity: Heavy Scorpid Scale (skinning #11737/15408)"
    { { 11740, 4304 }, 9001646 }, // "Gathersanity: Thick Leather (skinning #11740/4304)"
    { { 11740, 8169 }, 9001647 }, // "Gathersanity: Thick Hide (skinning #11740/8169)"
    { { 11740, 8170 }, 9001648 }, // "Gathersanity: Rugged Leather (skinning #11740/8170)"
    { { 11740, 8171 }, 9001649 }, // "Gathersanity: Rugged Hide (skinning #11740/8171)"
    { { 11741, 4304 }, 9001650 }, // "Gathersanity: Thick Leather (skinning #11741/4304)"
    { { 11741, 8169 }, 9001651 }, // "Gathersanity: Thick Hide (skinning #11741/8169)"
    { { 11741, 8170 }, 9001652 }, // "Gathersanity: Rugged Leather (skinning #11741/8170)"
    { { 11741, 8171 }, 9001653 }, // "Gathersanity: Rugged Hide (skinning #11741/8171)"
    { { 11981, 15416 }, 9001654 }, // "Gathersanity: Black Dragonscale (skinning #11981/15416)"
    { { 11982, 17012 }, 9001655 }, // "Gathersanity: Core Leather (skinning #11982/17012)"
    { { 11983, 15416 }, 9001656 }, // "Gathersanity: Black Dragonscale (skinning #11983/15416)"
    { { 12037, 2319 }, 9001657 }, // "Gathersanity: Medium Leather (skinning #12037/2319)"
    { { 12037, 4234 }, 9001658 }, // "Gathersanity: Heavy Leather (skinning #12037/4234)"
    { { 12121, 4304 }, 9001659 }, // "Gathersanity: Thick Leather (skinning #12121/4304)"
    { { 12121, 8170 }, 9001660 }, // "Gathersanity: Rugged Leather (skinning #12121/8170)"
    { { 12121, 8171 }, 9001661 }, // "Gathersanity: Rugged Hide (skinning #12121/8171)"
    { { 12121, 25649 }, 9001662 }, // "Gathersanity: Knothide Leather Scraps (skinning #12121/25649)"
    { { 12122, 4304 }, 9001663 }, // "Gathersanity: Thick Leather (skinning #12122/4304)"
    { { 12122, 8170 }, 9001664 }, // "Gathersanity: Rugged Leather (skinning #12122/8170)"
    { { 12122, 8171 }, 9001665 }, // "Gathersanity: Rugged Hide (skinning #12122/8171)"
    { { 12122, 21887 }, 9001666 }, // "Gathersanity: Knothide Leather (skinning #12122/21887)"
    { { 12122, 25649 }, 9001667 }, // "Gathersanity: Knothide Leather Scraps (skinning #12122/25649)"
    { { 12129, 4304 }, 9001668 }, // "Gathersanity: Thick Leather (skinning #12129/4304)"
    { { 12129, 8165 }, 9001669 }, // "Gathersanity: Worn Dragonscale (skinning #12129/8165)"
    { { 12129, 8170 }, 9001670 }, // "Gathersanity: Rugged Leather (skinning #12129/8170)"
    { { 12129, 8171 }, 9001671 }, // "Gathersanity: Rugged Hide (skinning #12129/8171)"
    { { 12207, 4304 }, 9001672 }, // "Gathersanity: Thick Leather (skinning #12207/4304)"
    { { 12207, 8169 }, 9001673 }, // "Gathersanity: Thick Hide (skinning #12207/8169)"
    { { 12207, 8170 }, 9001674 }, // "Gathersanity: Rugged Leather (skinning #12207/8170)"
    { { 12418, 4304 }, 9001675 }, // "Gathersanity: Thick Leather (skinning #12418/4304)"
    { { 12418, 8169 }, 9001676 }, // "Gathersanity: Thick Hide (skinning #12418/8169)"
    { { 12418, 8170 }, 9001677 }, // "Gathersanity: Rugged Leather (skinning #12418/8170)"
    { { 12418, 8171 }, 9001678 }, // "Gathersanity: Rugged Hide (skinning #12418/8171)"
    { { 12460, 8170 }, 9001679 }, // "Gathersanity: Rugged Leather (skinning #12460/8170)"
    { { 12460, 8171 }, 9001680 }, // "Gathersanity: Rugged Hide (skinning #12460/8171)"
    { { 12460, 15416 }, 9001681 }, // "Gathersanity: Black Dragonscale (skinning #12460/15416)"
    { { 12461, 8170 }, 9001682 }, // "Gathersanity: Rugged Leather (skinning #12461/8170)"
    { { 12461, 8171 }, 9001683 }, // "Gathersanity: Rugged Hide (skinning #12461/8171)"
    { { 12461, 15416 }, 9001684 }, // "Gathersanity: Black Dragonscale (skinning #12461/15416)"
    { { 12463, 8170 }, 9001685 }, // "Gathersanity: Rugged Leather (skinning #12463/8170)"
    { { 12463, 8171 }, 9001686 }, // "Gathersanity: Rugged Hide (skinning #12463/8171)"
    { { 12463, 15416 }, 9001687 }, // "Gathersanity: Black Dragonscale (skinning #12463/15416)"
    { { 12464, 8170 }, 9001688 }, // "Gathersanity: Rugged Leather (skinning #12464/8170)"
    { { 12464, 8171 }, 9001689 }, // "Gathersanity: Rugged Hide (skinning #12464/8171)"
    { { 12464, 15416 }, 9001690 }, // "Gathersanity: Black Dragonscale (skinning #12464/15416)"
    { { 12465, 8170 }, 9001691 }, // "Gathersanity: Rugged Leather (skinning #12465/8170)"
    { { 12465, 8171 }, 9001692 }, // "Gathersanity: Rugged Hide (skinning #12465/8171)"
    { { 12465, 15416 }, 9001693 }, // "Gathersanity: Black Dragonscale (skinning #12465/15416)"
    { { 12467, 8170 }, 9001694 }, // "Gathersanity: Rugged Leather (skinning #12467/8170)"
    { { 12467, 8171 }, 9001695 }, // "Gathersanity: Rugged Hide (skinning #12467/8171)"
    { { 12467, 15416 }, 9001696 }, // "Gathersanity: Black Dragonscale (skinning #12467/15416)"
    { { 12468, 8170 }, 9001697 }, // "Gathersanity: Rugged Leather (skinning #12468/8170)"
    { { 12468, 8171 }, 9001698 }, // "Gathersanity: Rugged Hide (skinning #12468/8171)"
    { { 12468, 15416 }, 9001699 }, // "Gathersanity: Black Dragonscale (skinning #12468/15416)"
    { { 12474, 4304 }, 9001700 }, // "Gathersanity: Thick Leather (skinning #12474/4304)"
    { { 12474, 8165 }, 9001701 }, // "Gathersanity: Worn Dragonscale (skinning #12474/8165)"
    { { 12474, 8170 }, 9001702 }, // "Gathersanity: Rugged Leather (skinning #12474/8170)"
    { { 12474, 8171 }, 9001703 }, // "Gathersanity: Rugged Hide (skinning #12474/8171)"
    { { 12474, 15412 }, 9001704 }, // "Gathersanity: Green Dragonscale (skinning #12474/15412)"
    { { 12475, 8165 }, 9001705 }, // "Gathersanity: Worn Dragonscale (skinning #12475/8165)"
    { { 12475, 8170 }, 9001706 }, // "Gathersanity: Rugged Leather (skinning #12475/8170)"
    { { 12475, 15412 }, 9001707 }, // "Gathersanity: Green Dragonscale (skinning #12475/15412)"
    { { 12476, 4304 }, 9001708 }, // "Gathersanity: Thick Leather (skinning #12476/4304)"
    { { 12476, 8170 }, 9001709 }, // "Gathersanity: Rugged Leather (skinning #12476/8170)"
    { { 12476, 15412 }, 9001710 }, // "Gathersanity: Green Dragonscale (skinning #12476/15412)"
    { { 12477, 4304 }, 9001711 }, // "Gathersanity: Thick Leather (skinning #12477/4304)"
    { { 12477, 8165 }, 9001712 }, // "Gathersanity: Worn Dragonscale (skinning #12477/8165)"
    { { 12477, 8170 }, 9001713 }, // "Gathersanity: Rugged Leather (skinning #12477/8170)"
    { { 12477, 15412 }, 9001714 }, // "Gathersanity: Green Dragonscale (skinning #12477/15412)"
    { { 12479, 4304 }, 9001715 }, // "Gathersanity: Thick Leather (skinning #12479/4304)"
    { { 12479, 8165 }, 9001716 }, // "Gathersanity: Worn Dragonscale (skinning #12479/8165)"
    { { 12479, 8170 }, 9001717 }, // "Gathersanity: Rugged Leather (skinning #12479/8170)"
    { { 12479, 8171 }, 9001718 }, // "Gathersanity: Rugged Hide (skinning #12479/8171)"
    { { 12479, 15412 }, 9001719 }, // "Gathersanity: Green Dragonscale (skinning #12479/15412)"
    { { 12498, 8165 }, 9001720 }, // "Gathersanity: Worn Dragonscale (skinning #12498/8165)"
    { { 12498, 8170 }, 9001721 }, // "Gathersanity: Rugged Leather (skinning #12498/8170)"
    { { 12498, 15412 }, 9001722 }, // "Gathersanity: Green Dragonscale (skinning #12498/15412)"
    { { 12715, 783 }, 9001723 }, // "Gathersanity: Light Hide (skinning #12715/783)"
    { { 12715, 2318 }, 9001724 }, // "Gathersanity: Light Leather (skinning #12715/2318)"
    { { 12715, 2319 }, 9001725 }, // "Gathersanity: Medium Leather (skinning #12715/2319)"
    { { 12715, 4232 }, 9001726 }, // "Gathersanity: Medium Hide (skinning #12715/4232)"
    { { 12715, 6470 }, 9001727 }, // "Gathersanity: Deviate Scale (skinning #12715/6470)"
    { { 12715, 6471 }, 9001728 }, // "Gathersanity: Perfect Deviate Scale (skinning #12715/6471)"
    { { 12739, 4304 }, 9001729 }, // "Gathersanity: Thick Leather (skinning #12739/4304)"
    { { 12739, 8165 }, 9001730 }, // "Gathersanity: Worn Dragonscale (skinning #12739/8165)"
    { { 12739, 8170 }, 9001731 }, // "Gathersanity: Rugged Leather (skinning #12739/8170)"
    { { 12739, 8171 }, 9001732 }, // "Gathersanity: Rugged Hide (skinning #12739/8171)"
    { { 12739, 15416 }, 9001733 }, // "Gathersanity: Black Dragonscale (skinning #12739/15416)"
    { { 12800, 4304 }, 9001734 }, // "Gathersanity: Thick Leather (skinning #12800/4304)"
    { { 12800, 8170 }, 9001735 }, // "Gathersanity: Rugged Leather (skinning #12800/8170)"
    { { 12800, 8171 }, 9001736 }, // "Gathersanity: Rugged Hide (skinning #12800/8171)"
    { { 12801, 4304 }, 9001737 }, // "Gathersanity: Thick Leather (skinning #12801/4304)"
    { { 12801, 8170 }, 9001738 }, // "Gathersanity: Rugged Leather (skinning #12801/8170)"
    { { 12801, 8171 }, 9001739 }, // "Gathersanity: Rugged Hide (skinning #12801/8171)"
    { { 12802, 8170 }, 9001740 }, // "Gathersanity: Rugged Leather (skinning #12802/8170)"
    { { 12802, 8171 }, 9001741 }, // "Gathersanity: Rugged Hide (skinning #12802/8171)"
    { { 12899, 4304 }, 9001742 }, // "Gathersanity: Thick Leather (skinning #12899/4304)"
    { { 12899, 8165 }, 9001743 }, // "Gathersanity: Worn Dragonscale (skinning #12899/8165)"
    { { 12899, 8170 }, 9001744 }, // "Gathersanity: Rugged Leather (skinning #12899/8170)"
    { { 12899, 15414 }, 9001745 }, // "Gathersanity: Red Dragonscale (skinning #12899/15414)"
    { { 12900, 4304 }, 9001746 }, // "Gathersanity: Thick Leather (skinning #12900/4304)"
    { { 12900, 8165 }, 9001747 }, // "Gathersanity: Worn Dragonscale (skinning #12900/8165)"
    { { 12900, 8170 }, 9001748 }, // "Gathersanity: Rugged Leather (skinning #12900/8170)"
    { { 12900, 8171 }, 9001749 }, // "Gathersanity: Rugged Hide (skinning #12900/8171)"
    { { 12900, 15412 }, 9001750 }, // "Gathersanity: Green Dragonscale (skinning #12900/15412)"
    { { 13036, 4304 }, 9001751 }, // "Gathersanity: Thick Leather (skinning #13036/4304)"
    { { 13036, 8170 }, 9001752 }, // "Gathersanity: Rugged Leather (skinning #13036/8170)"
    { { 13036, 8171 }, 9001753 }, // "Gathersanity: Rugged Hide (skinning #13036/8171)"
    { { 13136, 20498 }, 9001754 }, // "Gathersanity: Silithid Chitin (skinning #13136/20498)"
    { { 13136, 20499 }, 9001755 }, // "Gathersanity: Broken Silithid Chitin (skinning #13136/20499)"
    { { 13136, 20500 }, 9001756 }, // "Gathersanity: Light Silithid Carapace (skinning #13136/20500)"
    { { 13301, 20498 }, 9001757 }, // "Gathersanity: Silithid Chitin (skinning #13301/20498)"
    { { 13301, 20499 }, 9001758 }, // "Gathersanity: Broken Silithid Chitin (skinning #13301/20499)"
    { { 13301, 20500 }, 9001759 }, // "Gathersanity: Light Silithid Carapace (skinning #13301/20500)"
    { { 13323, 4304 }, 9001760 }, // "Gathersanity: Thick Leather (skinning #13323/4304)"
    { { 13323, 8169 }, 9001761 }, // "Gathersanity: Thick Hide (skinning #13323/8169)"
    { { 13323, 8170 }, 9001762 }, // "Gathersanity: Rugged Leather (skinning #13323/8170)"
    { { 13596, 4304 }, 9001763 }, // "Gathersanity: Thick Leather (skinning #13596/4304)"
    { { 13596, 8169 }, 9001764 }, // "Gathersanity: Thick Hide (skinning #13596/8169)"
    { { 13596, 8170 }, 9001765 }, // "Gathersanity: Rugged Leather (skinning #13596/8170)"
    { { 13599, 4304 }, 9001766 }, // "Gathersanity: Thick Leather (skinning #13599/4304)"
    { { 13599, 8167 }, 9001767 }, // "Gathersanity: Turtle Scale (skinning #13599/8167)"
    { { 13599, 8169 }, 9001768 }, // "Gathersanity: Thick Hide (skinning #13599/8169)"
    { { 13599, 8170 }, 9001769 }, // "Gathersanity: Rugged Leather (skinning #13599/8170)"
    { { 13896, 4304 }, 9001770 }, // "Gathersanity: Thick Leather (skinning #13896/4304)"
    { { 13896, 8167 }, 9001771 }, // "Gathersanity: Turtle Scale (skinning #13896/8167)"
    { { 13896, 8170 }, 9001772 }, // "Gathersanity: Rugged Leather (skinning #13896/8170)"
    { { 14020, 12607 }, 9001773 }, // "Gathersanity: Brilliant Chromatic Scale (skinning #14020/12607)"
    { { 14020, 15412 }, 9001774 }, // "Gathersanity: Green Dragonscale (skinning #14020/15412)"
    { { 14020, 15414 }, 9001775 }, // "Gathersanity: Red Dragonscale (skinning #14020/15414)"
    { { 14020, 15415 }, 9001776 }, // "Gathersanity: Blue Dragonscale (skinning #14020/15415)"
    { { 14020, 15416 }, 9001777 }, // "Gathersanity: Black Dragonscale (skinning #14020/15416)"
    { { 14123, 4234 }, 9001778 }, // "Gathersanity: Heavy Leather (skinning #14123/4234)"
    { { 14123, 4235 }, 9001779 }, // "Gathersanity: Heavy Hide (skinning #14123/4235)"
    { { 14123, 4304 }, 9001780 }, // "Gathersanity: Thick Leather (skinning #14123/4304)"
    { { 14123, 8167 }, 9001781 }, // "Gathersanity: Turtle Scale (skinning #14123/8167)"
    { { 14123, 8169 }, 9001782 }, // "Gathersanity: Thick Hide (skinning #14123/8169)"
    { { 14228, 2319 }, 9001783 }, // "Gathersanity: Medium Leather (skinning #14228/2319)"
    { { 14228, 4232 }, 9001784 }, // "Gathersanity: Medium Hide (skinning #14228/4232)"
    { { 14228, 4234 }, 9001785 }, // "Gathersanity: Heavy Leather (skinning #14228/4234)"
    { { 14228, 4235 }, 9001786 }, // "Gathersanity: Heavy Hide (skinning #14228/4235)"
    { { 14234, 4234 }, 9001787 }, // "Gathersanity: Heavy Leather (skinning #14234/4234)"
    { { 14234, 4235 }, 9001788 }, // "Gathersanity: Heavy Hide (skinning #14234/4235)"
    { { 14234, 4304 }, 9001789 }, // "Gathersanity: Thick Leather (skinning #14234/4304)"
    { { 14272, 2318 }, 9001790 }, // "Gathersanity: Light Leather (skinning #14272/2318)"
    { { 14272, 7286 }, 9001791 }, // "Gathersanity: Black Whelp Scale (skinning #14272/7286)"
    { { 14282, 4304 }, 9001792 }, // "Gathersanity: Thick Leather (skinning #14282/4304)"
    { { 14282, 8169 }, 9001793 }, // "Gathersanity: Thick Hide (skinning #14282/8169)"
    { { 14282, 8170 }, 9001794 }, // "Gathersanity: Rugged Leather (skinning #14282/8170)"
    { { 14282, 8171 }, 9001795 }, // "Gathersanity: Rugged Hide (skinning #14282/8171)"
    { { 14308, 4304 }, 9001796 }, // "Gathersanity: Thick Leather (skinning #14308/4304)"
    { { 14308, 8170 }, 9001797 }, // "Gathersanity: Rugged Leather (skinning #14308/8170)"
    { { 14308, 8171 }, 9001798 }, // "Gathersanity: Rugged Hide (skinning #14308/8171)"
    { { 14308, 15419 }, 9001799 }, // "Gathersanity: Warbear Leather (skinning #14308/15419)"
    { { 14398, 4304 }, 9001800 }, // "Gathersanity: Thick Leather (skinning #14398/4304)"
    { { 14398, 8165 }, 9001801 }, // "Gathersanity: Worn Dragonscale (skinning #14398/8165)"
    { { 14398, 8170 }, 9001802 }, // "Gathersanity: Rugged Leather (skinning #14398/8170)"
    { { 14445, 4304 }, 9001803 }, // "Gathersanity: Thick Leather (skinning #14445/4304)"
    { { 14445, 8165 }, 9001804 }, // "Gathersanity: Worn Dragonscale (skinning #14445/8165)"
    { { 14445, 8169 }, 9001805 }, // "Gathersanity: Thick Hide (skinning #14445/8169)"
    { { 14445, 8170 }, 9001806 }, // "Gathersanity: Rugged Leather (skinning #14445/8170)"
    { { 14445, 15412 }, 9001807 }, // "Gathersanity: Green Dragonscale (skinning #14445/15412)"
    { { 14473, 20498 }, 9001808 }, // "Gathersanity: Silithid Chitin (skinning #14473/20498)"
    { { 14473, 20499 }, 9001809 }, // "Gathersanity: Broken Silithid Chitin (skinning #14473/20499)"
    { { 14473, 20501 }, 9001810 }, // "Gathersanity: Heavy Silithid Carapace (skinning #14473/20501)"
    { { 14474, 20498 }, 9001811 }, // "Gathersanity: Silithid Chitin (skinning #14474/20498)"
    { { 14474, 20499 }, 9001812 }, // "Gathersanity: Broken Silithid Chitin (skinning #14474/20499)"
    { { 14474, 20500 }, 9001813 }, // "Gathersanity: Light Silithid Carapace (skinning #14474/20500)"
    { { 14475, 20498 }, 9001814 }, // "Gathersanity: Silithid Chitin (skinning #14475/20498)"
    { { 14475, 20499 }, 9001815 }, // "Gathersanity: Broken Silithid Chitin (skinning #14475/20499)"
    { { 14502, 4304 }, 9001816 }, // "Gathersanity: Thick Leather (skinning #14502/4304)"
    { { 14502, 8169 }, 9001817 }, // "Gathersanity: Thick Hide (skinning #14502/8169)"
    { { 14502, 8170 }, 9001818 }, // "Gathersanity: Rugged Leather (skinning #14502/8170)"
    { { 14502, 8171 }, 9001819 }, // "Gathersanity: Rugged Hide (skinning #14502/8171)"
    { { 14601, 15416 }, 9001820 }, // "Gathersanity: Black Dragonscale (skinning #14601/15416)"
    { { 14750, 8170 }, 9001821 }, // "Gathersanity: Rugged Leather (skinning #14750/8170)"
    { { 14821, 4304 }, 9001822 }, // "Gathersanity: Thick Leather (skinning #14821/4304)"
    { { 14821, 8170 }, 9001823 }, // "Gathersanity: Rugged Leather (skinning #14821/8170)"
    { { 14821, 8171 }, 9001824 }, // "Gathersanity: Rugged Hide (skinning #14821/8171)"
    { { 14887, 15412 }, 9001825 }, // "Gathersanity: Green Dragonscale (skinning #14887/15412)"
    { { 14887, 20381 }, 9001826 }, // "Gathersanity: Dreamscale (skinning #14887/20381)"
    { { 15043, 4304 }, 9001827 }, // "Gathersanity: Thick Leather (skinning #15043/4304)"
    { { 15043, 8170 }, 9001828 }, // "Gathersanity: Rugged Leather (skinning #15043/8170)"
    { { 15043, 8171 }, 9001829 }, // "Gathersanity: Rugged Hide (skinning #15043/8171)"
    { { 15196, 4304 }, 9001830 }, // "Gathersanity: Thick Leather (skinning #15196/4304)"
    { { 15196, 8169 }, 9001831 }, // "Gathersanity: Thick Hide (skinning #15196/8169)"
    { { 15196, 8170 }, 9001832 }, // "Gathersanity: Rugged Leather (skinning #15196/8170)"
    { { 15196, 15408 }, 9001833 }, // "Gathersanity: Heavy Scorpid Scale (skinning #15196/15408)"
    { { 15286, 20499 }, 9001834 }, // "Gathersanity: Broken Silithid Chitin (skinning #15286/20499)"
    { { 15288, 20498 }, 9001835 }, // "Gathersanity: Silithid Chitin (skinning #15288/20498)"
    { { 15288, 20499 }, 9001836 }, // "Gathersanity: Broken Silithid Chitin (skinning #15288/20499)"
    { { 15290, 20498 }, 9001837 }, // "Gathersanity: Silithid Chitin (skinning #15290/20498)"
    { { 15290, 20499 }, 9001838 }, // "Gathersanity: Broken Silithid Chitin (skinning #15290/20499)"
    { { 15319, 20499 }, 9001839 }, // "Gathersanity: Broken Silithid Chitin (skinning #15319/20499)"
    { { 15320, 20498 }, 9001840 }, // "Gathersanity: Silithid Chitin (skinning #15320/20498)"
    { { 15320, 20499 }, 9001841 }, // "Gathersanity: Broken Silithid Chitin (skinning #15320/20499)"
    { { 15320, 20501 }, 9001842 }, // "Gathersanity: Heavy Silithid Carapace (skinning #15320/20501)"
    { { 15323, 20498 }, 9001843 }, // "Gathersanity: Silithid Chitin (skinning #15323/20498)"
    { { 15323, 20499 }, 9001844 }, // "Gathersanity: Broken Silithid Chitin (skinning #15323/20499)"
    { { 15323, 20501 }, 9001845 }, // "Gathersanity: Heavy Silithid Carapace (skinning #15323/20501)"
    { { 15325, 20498 }, 9001846 }, // "Gathersanity: Silithid Chitin (skinning #15325/20498)"
    { { 15325, 20499 }, 9001847 }, // "Gathersanity: Broken Silithid Chitin (skinning #15325/20499)"
    { { 15325, 20500 }, 9001848 }, // "Gathersanity: Light Silithid Carapace (skinning #15325/20500)"
    { { 15327, 20498 }, 9001849 }, // "Gathersanity: Silithid Chitin (skinning #15327/20498)"
    { { 15327, 20499 }, 9001850 }, // "Gathersanity: Broken Silithid Chitin (skinning #15327/20499)"
    { { 15327, 20500 }, 9001851 }, // "Gathersanity: Light Silithid Carapace (skinning #15327/20500)"
    { { 15336, 20499 }, 9001852 }, // "Gathersanity: Broken Silithid Chitin (skinning #15336/20499)"
    { { 15412, 15412 }, 9001853 }, // "Gathersanity: Green Dragonscale (skinning #15412/15412)"
    { { 15414, 15414 }, 9001854 }, // "Gathersanity: Red Dragonscale (skinning #15414/15414)"
    { { 15415, 15415 }, 9001855 }, // "Gathersanity: Blue Dragonscale (skinning #15415/15415)"
    { { 15416, 15416 }, 9001856 }, // "Gathersanity: Black Dragonscale (skinning #15416/15416)"
    { { 15554, 8170 }, 9001857 }, // "Gathersanity: Rugged Leather (skinning #15554/8170)"
    { { 16095, 8170 }, 9001858 }, // "Gathersanity: Rugged Leather (skinning #16095/8170)"
    { { 16117, 4304 }, 9001859 }, // "Gathersanity: Thick Leather (skinning #16117/4304)"
    { { 16117, 8170 }, 9001860 }, // "Gathersanity: Rugged Leather (skinning #16117/8170)"
    { { 16117, 8171 }, 9001861 }, // "Gathersanity: Rugged Hide (skinning #16117/8171)"
    { { 16181, 21887 }, 9001862 }, // "Gathersanity: Knothide Leather (skinning #16181/21887)"
    { { 16181, 25649 }, 9001863 }, // "Gathersanity: Knothide Leather Scraps (skinning #16181/25649)"
    { { 16181, 25707 }, 9001864 }, // "Gathersanity: Fel Hide (skinning #16181/25707)"
    { { 17201, 2318 }, 9001865 }, // "Gathersanity: Light Leather (skinning #17201/2318)"
    { { 17201, 2934 }, 9001866 }, // "Gathersanity: Ruined Leather Scraps (skinning #17201/2934)"
    { { 17307, 21887 }, 9001867 }, // "Gathersanity: Knothide Leather (skinning #17307/21887)"
    { { 17374, 2318 }, 9001868 }, // "Gathersanity: Light Leather (skinning #17374/2318)"
    { { 17374, 2934 }, 9001869 }, // "Gathersanity: Ruined Leather Scraps (skinning #17374/2934)"
    { { 17592, 783 }, 9001870 }, // "Gathersanity: Light Hide (skinning #17592/783)"
    { { 17592, 2318 }, 9001871 }, // "Gathersanity: Light Leather (skinning #17592/2318)"
    { { 17592, 2319 }, 9001872 }, // "Gathersanity: Medium Leather (skinning #17592/2319)"
    { { 17661, 783 }, 9001873 }, // "Gathersanity: Light Hide (skinning #17661/783)"
    { { 17661, 2318 }, 9001874 }, // "Gathersanity: Light Leather (skinning #17661/2318)"
    { { 17661, 2319 }, 9001875 }, // "Gathersanity: Medium Leather (skinning #17661/2319)"
    { { 18398, 21887 }, 9001876 }, // "Gathersanity: Knothide Leather (skinning #18398/21887)"
    { { 18398, 25649 }, 9001877 }, // "Gathersanity: Knothide Leather Scraps (skinning #18398/25649)"
    { { 18398, 25708 }, 9001878 }, // "Gathersanity: Thick Clefthoof Leather (skinning #18398/25708)"
    { { 20520, 21887 }, 9001879 }, // "Gathersanity: Knothide Leather (skinning #20520/21887)"
    { { 20520, 25649 }, 9001880 }, // "Gathersanity: Knothide Leather Scraps (skinning #20520/25649)"
    { { 20520, 25699 }, 9001881 }, // "Gathersanity: Crystal Infused Leather (skinning #20520/25699)"
    { { 20520, 25700 }, 9001882 }, // "Gathersanity: Fel Scales (skinning #20520/25700)"
    { { 20775, 21887 }, 9001883 }, // "Gathersanity: Knothide Leather (skinning #20775/21887)"
    { { 20775, 25649 }, 9001884 }, // "Gathersanity: Knothide Leather Scraps (skinning #20775/25649)"
    { { 21387, 21887 }, 9001885 }, // "Gathersanity: Knothide Leather (skinning #21387/21887)"
    { { 21387, 25649 }, 9001886 }, // "Gathersanity: Knothide Leather Scraps (skinning #21387/25649)"
    { { 21697, 21887 }, 9001887 }, // "Gathersanity: Knothide Leather (skinning #21697/21887)"
    { { 21723, 21887 }, 9001888 }, // "Gathersanity: Knothide Leather (skinning #21723/21887)"
    { { 22072, 21887 }, 9001889 }, // "Gathersanity: Knothide Leather (skinning #22072/21887)"
    { { 22072, 25649 }, 9001890 }, // "Gathersanity: Knothide Leather Scraps (skinning #22072/25649)"
    { { 22072, 35229 }, 9001891 }, // "Gathersanity: Nether Residue (skinning #22072/35229)"
    { { 22885, 21887 }, 9001892 }, // "Gathersanity: Knothide Leather (skinning #22885/21887)"
    { { 23163, 21887 }, 9001893 }, // "Gathersanity: Knothide Leather (skinning #23163/21887)"
    { { 23163, 25649 }, 9001894 }, // "Gathersanity: Knothide Leather Scraps (skinning #23163/25649)"
    { { 23163, 25707 }, 9001895 }, // "Gathersanity: Fel Hide (skinning #23163/25707)"
    { { 23163, 35229 }, 9001896 }, // "Gathersanity: Nether Residue (skinning #23163/35229)"
    { { 23873, 4234 }, 9001897 }, // "Gathersanity: Heavy Leather (skinning #23873/4234)"
    { { 23873, 4235 }, 9001898 }, // "Gathersanity: Heavy Hide (skinning #23873/4235)"
    { { 23873, 4304 }, 9001899 }, // "Gathersanity: Thick Leather (skinning #23873/4304)"
    { { 24047, 21887 }, 9001900 }, // "Gathersanity: Knothide Leather (skinning #24047/21887)"
    { { 24047, 25699 }, 9001901 }, // "Gathersanity: Crystal Infused Leather (skinning #24047/25699)"
    { { 25599, 21887 }, 9001902 }, // "Gathersanity: Knothide Leather (skinning #25599/21887)"
    { { 25599, 25649 }, 9001903 }, // "Gathersanity: Knothide Leather Scraps (skinning #25599/25649)"
    { { 25599, 25707 }, 9001904 }, // "Gathersanity: Fel Hide (skinning #25599/25707)"
    { { 26723, 33568 }, 9001905 }, // "Gathersanity: Borean Leather (skinning #26723/33568)"
    { { 26723, 38557 }, 9001906 }, // "Gathersanity: Icy Dragonscale (skinning #26723/38557)"
    { { 26723, 44128 }, 9001907 }, // "Gathersanity: Arctic Fur (skinning #26723/44128)"
    { { 27641, 36813 }, 9001908 }, // "Gathersanity: Sprung Sprocket (skinning #27641/36813)"
    { { 27641, 39681 }, 9001909 }, // "Gathersanity: Handful of Cobalt Bolts (skinning #27641/39681)"
    { { 27641, 39682 }, 9001910 }, // "Gathersanity: Overcharged Capacitor (skinning #27641/39682)"
    { { 27641, 39684 }, 9001911 }, // "Gathersanity: Hair Trigger (skinning #27641/39684)"
    { { 27641, 39685 }, 9001912 }, // "Gathersanity: Indestructible Frame (skinning #27641/39685)"
    { { 27641, 39690 }, 9001913 }, // "Gathersanity: Volatile Blasting Trigger (skinning #27641/39690)"
    { { 27641, 41337 }, 9001914 }, // "Gathersanity: Whizzed-Out Gizmo (skinning #27641/41337)"
    { { 27641, 41338 }, 9001915 }, // "Gathersanity: Sprung Whirlygig (skinning #27641/41338)"
    { { 27641, 49050 }, 9001916 }, // "Gathersanity: Schematic: Jeeves (skinning #27641/49050)"
    { { 28860, 33568 }, 9001917 }, // "Gathersanity: Borean Leather (skinning #28860/33568)"
    { { 28860, 38557 }, 9001918 }, // "Gathersanity: Icy Dragonscale (skinning #28860/38557)"
    { { 28860, 44128 }, 9001919 }, // "Gathersanity: Arctic Fur (skinning #28860/44128)"
    { { 29380, 39681 }, 9001920 }, // "Gathersanity: Handful of Cobalt Bolts (skinning #29380/39681)"
    { { 29380, 39682 }, 9001921 }, // "Gathersanity: Overcharged Capacitor (skinning #29380/39682)"
    { { 29380, 39690 }, 9001922 }, // "Gathersanity: Volatile Blasting Trigger (skinning #29380/39690)"
    { { 29380, 41337 }, 9001923 }, // "Gathersanity: Whizzed-Out Gizmo (skinning #29380/41337)"
    { { 29380, 41338 }, 9001924 }, // "Gathersanity: Sprung Whirlygig (skinning #29380/41338)"
    { { 29380, 49050 }, 9001925 }, // "Gathersanity: Schematic: Jeeves (skinning #29380/49050)"
    { { 29729, 39681 }, 9001926 }, // "Gathersanity: Handful of Cobalt Bolts (skinning #29729/39681)"
    { { 29729, 39690 }, 9001927 }, // "Gathersanity: Volatile Blasting Trigger (skinning #29729/39690)"
    { { 29729, 41337 }, 9001928 }, // "Gathersanity: Whizzed-Out Gizmo (skinning #29729/41337)"
    { { 29729, 41338 }, 9001929 }, // "Gathersanity: Sprung Whirlygig (skinning #29729/41338)"
    { { 29729, 49050 }, 9001930 }, // "Gathersanity: Schematic: Jeeves (skinning #29729/49050)"
    { { 29730, 39681 }, 9001931 }, // "Gathersanity: Handful of Cobalt Bolts (skinning #29730/39681)"
    { { 29730, 39682 }, 9001932 }, // "Gathersanity: Overcharged Capacitor (skinning #29730/39682)"
    { { 29730, 39690 }, 9001933 }, // "Gathersanity: Volatile Blasting Trigger (skinning #29730/39690)"
    { { 29730, 41337 }, 9001934 }, // "Gathersanity: Whizzed-Out Gizmo (skinning #29730/41337)"
    { { 29730, 41338 }, 9001935 }, // "Gathersanity: Sprung Whirlygig (skinning #29730/41338)"
    { { 29730, 49050 }, 9001936 }, // "Gathersanity: Schematic: Jeeves (skinning #29730/49050)"
    { { 30260, 33568 }, 9001937 }, // "Gathersanity: Borean Leather (skinning #30260/33568)"
    { { 32517, 33568 }, 9001938 }, // "Gathersanity: Borean Leather (skinning #32517/33568)"
    { { 32517, 44128 }, 9001939 }, // "Gathersanity: Arctic Fur (skinning #32517/44128)"
    { { 32517, 44687 }, 9001940 }, // "Gathersanity: Loque'Nahak's Pelt (skinning #32517/44687)"
    { { 34797, 33568 }, 9001941 }, // "Gathersanity: Borean Leather (skinning #34797/33568)"
    { { 34797, 44128 }, 9001942 }, // "Gathersanity: Arctic Fur (skinning #34797/44128)"
    { { 37501, 33568 }, 9001943 }, // "Gathersanity: Borean Leather (skinning #37501/33568)"
    { { 37501, 38558 }, 9001944 }, // "Gathersanity: Nerubian Chitin (skinning #37501/38558)"
    { { 37502, 33568 }, 9001945 }, // "Gathersanity: Borean Leather (skinning #37502/33568)"
    { { 37502, 38558 }, 9001946 }, // "Gathersanity: Nerubian Chitin (skinning #37502/38558)"
    { { 70060, 21887 }, 9001947 }, // "Gathersanity: Knothide Leather (skinning #70060/21887)"
    { { 70060, 25649 }, 9001948 }, // "Gathersanity: Knothide Leather Scraps (skinning #70060/25649)"
    { { 70061, 21887 }, 9001949 }, // "Gathersanity: Knothide Leather (skinning #70061/21887)"
    { { 70061, 25649 }, 9001950 }, // "Gathersanity: Knothide Leather Scraps (skinning #70061/25649)"
    { { 70062, 21887 }, 9001951 }, // "Gathersanity: Knothide Leather (skinning #70062/21887)"
    { { 70062, 25649 }, 9001952 }, // "Gathersanity: Knothide Leather Scraps (skinning #70062/25649)"
    { { 70063, 21887 }, 9001953 }, // "Gathersanity: Knothide Leather (skinning #70063/21887)"
    { { 70063, 25649 }, 9001954 }, // "Gathersanity: Knothide Leather Scraps (skinning #70063/25649)"
    { { 70064, 21887 }, 9001955 }, // "Gathersanity: Knothide Leather (skinning #70064/21887)"
    { { 70064, 25649 }, 9001956 }, // "Gathersanity: Knothide Leather Scraps (skinning #70064/25649)"
    { { 70065, 21887 }, 9001957 }, // "Gathersanity: Knothide Leather (skinning #70065/21887)"
    { { 70065, 25649 }, 9001958 }, // "Gathersanity: Knothide Leather Scraps (skinning #70065/25649)"
    { { 70066, 21887 }, 9001959 }, // "Gathersanity: Knothide Leather (skinning #70066/21887)"
    { { 70066, 25649 }, 9001960 }, // "Gathersanity: Knothide Leather Scraps (skinning #70066/25649)"
    { { 70067, 21887 }, 9001961 }, // "Gathersanity: Knothide Leather (skinning #70067/21887)"
    { { 70068, 21887 }, 9001962 }, // "Gathersanity: Knothide Leather (skinning #70068/21887)"
    { { 70068, 25649 }, 9001963 }, // "Gathersanity: Knothide Leather Scraps (skinning #70068/25649)"
    { { 70069, 21887 }, 9001964 }, // "Gathersanity: Knothide Leather (skinning #70069/21887)"
    { { 70160, 21887 }, 9001965 }, // "Gathersanity: Knothide Leather (skinning #70160/21887)"
    { { 70160, 25649 }, 9001966 }, // "Gathersanity: Knothide Leather Scraps (skinning #70160/25649)"
    { { 70160, 25707 }, 9001967 }, // "Gathersanity: Fel Hide (skinning #70160/25707)"
    { { 70161, 21887 }, 9001968 }, // "Gathersanity: Knothide Leather (skinning #70161/21887)"
    { { 70161, 25649 }, 9001969 }, // "Gathersanity: Knothide Leather Scraps (skinning #70161/25649)"
    { { 70161, 25707 }, 9001970 }, // "Gathersanity: Fel Hide (skinning #70161/25707)"
    { { 70162, 21887 }, 9001971 }, // "Gathersanity: Knothide Leather (skinning #70162/21887)"
    { { 70162, 25649 }, 9001972 }, // "Gathersanity: Knothide Leather Scraps (skinning #70162/25649)"
    { { 70162, 25707 }, 9001973 }, // "Gathersanity: Fel Hide (skinning #70162/25707)"
    { { 70163, 21887 }, 9001974 }, // "Gathersanity: Knothide Leather (skinning #70163/21887)"
    { { 70163, 25649 }, 9001975 }, // "Gathersanity: Knothide Leather Scraps (skinning #70163/25649)"
    { { 70163, 25699 }, 9001976 }, // "Gathersanity: Crystal Infused Leather (skinning #70163/25699)"
    { { 70163, 25700 }, 9001977 }, // "Gathersanity: Fel Scales (skinning #70163/25700)"
    { { 70164, 21887 }, 9001978 }, // "Gathersanity: Knothide Leather (skinning #70164/21887)"
    { { 70164, 25649 }, 9001979 }, // "Gathersanity: Knothide Leather Scraps (skinning #70164/25649)"
    { { 70164, 25699 }, 9001980 }, // "Gathersanity: Crystal Infused Leather (skinning #70164/25699)"
    { { 70164, 25700 }, 9001981 }, // "Gathersanity: Fel Scales (skinning #70164/25700)"
    { { 70165, 21887 }, 9001982 }, // "Gathersanity: Knothide Leather (skinning #70165/21887)"
    { { 70165, 25649 }, 9001983 }, // "Gathersanity: Knothide Leather Scraps (skinning #70165/25649)"
    { { 70165, 25699 }, 9001984 }, // "Gathersanity: Crystal Infused Leather (skinning #70165/25699)"
    { { 70165, 25700 }, 9001985 }, // "Gathersanity: Fel Scales (skinning #70165/25700)"
    { { 70165, 32470 }, 9001986 }, // "Gathersanity: Nethermine Flayer Hide (skinning #70165/32470)"
    { { 70166, 21887 }, 9001987 }, // "Gathersanity: Knothide Leather (skinning #70166/21887)"
    { { 70166, 25649 }, 9001988 }, // "Gathersanity: Knothide Leather Scraps (skinning #70166/25649)"
    { { 70166, 25708 }, 9001989 }, // "Gathersanity: Thick Clefthoof Leather (skinning #70166/25708)"
    { { 70167, 21887 }, 9001990 }, // "Gathersanity: Knothide Leather (skinning #70167/21887)"
    { { 70167, 25649 }, 9001991 }, // "Gathersanity: Knothide Leather Scraps (skinning #70167/25649)"
    { { 70167, 25708 }, 9001992 }, // "Gathersanity: Thick Clefthoof Leather (skinning #70167/25708)"
    { { 70168, 21887 }, 9001993 }, // "Gathersanity: Knothide Leather (skinning #70168/21887)"
    { { 70168, 25649 }, 9001994 }, // "Gathersanity: Knothide Leather Scraps (skinning #70168/25649)"
    { { 70168, 29539 }, 9001995 }, // "Gathersanity: Cobra Scales (skinning #70168/29539)"
    { { 70169, 21887 }, 9001996 }, // "Gathersanity: Knothide Leather (skinning #70169/21887)"
    { { 70169, 25649 }, 9001997 }, // "Gathersanity: Knothide Leather Scraps (skinning #70169/25649)"
    { { 70169, 29547 }, 9001998 }, // "Gathersanity: Wind Scales (skinning #70169/29547)"
    { { 70170, 21887 }, 9001999 }, // "Gathersanity: Knothide Leather (skinning #70170/21887)"
    { { 70170, 29547 }, 9002000 }, // "Gathersanity: Wind Scales (skinning #70170/29547)"
    { { 70171, 21887 }, 9002001 }, // "Gathersanity: Knothide Leather (skinning #70171/21887)"
    { { 70171, 25649 }, 9002002 }, // "Gathersanity: Knothide Leather Scraps (skinning #70171/25649)"
    { { 70171, 29548 }, 9002003 }, // "Gathersanity: Nether Dragonscales (skinning #70171/29548)"
    { { 70172, 21887 }, 9002004 }, // "Gathersanity: Knothide Leather (skinning #70172/21887)"
    { { 70172, 25649 }, 9002005 }, // "Gathersanity: Knothide Leather Scraps (skinning #70172/25649)"
    { { 70172, 29548 }, 9002006 }, // "Gathersanity: Nether Dragonscales (skinning #70172/29548)"
    { { 70200, 33567 }, 9002007 }, // "Gathersanity: Borean Leather Scraps (skinning #70200/33567)"
    { { 70200, 33568 }, 9002008 }, // "Gathersanity: Borean Leather (skinning #70200/33568)"
    { { 70200, 44128 }, 9002009 }, // "Gathersanity: Arctic Fur (skinning #70200/44128)"
    { { 70201, 33567 }, 9002010 }, // "Gathersanity: Borean Leather Scraps (skinning #70201/33567)"
    { { 70201, 33568 }, 9002011 }, // "Gathersanity: Borean Leather (skinning #70201/33568)"
    { { 70201, 44128 }, 9002012 }, // "Gathersanity: Arctic Fur (skinning #70201/44128)"
    { { 70202, 33567 }, 9002013 }, // "Gathersanity: Borean Leather Scraps (skinning #70202/33567)"
    { { 70202, 33568 }, 9002014 }, // "Gathersanity: Borean Leather (skinning #70202/33568)"
    { { 70202, 44128 }, 9002015 }, // "Gathersanity: Arctic Fur (skinning #70202/44128)"
    { { 70203, 33568 }, 9002016 }, // "Gathersanity: Borean Leather (skinning #70203/33568)"
    { { 70203, 38558 }, 9002017 }, // "Gathersanity: Nerubian Chitin (skinning #70203/38558)"
    { { 70203, 44128 }, 9002018 }, // "Gathersanity: Arctic Fur (skinning #70203/44128)"
    { { 70204, 33567 }, 9002019 }, // "Gathersanity: Borean Leather Scraps (skinning #70204/33567)"
    { { 70204, 33568 }, 9002020 }, // "Gathersanity: Borean Leather (skinning #70204/33568)"
    { { 70204, 38558 }, 9002021 }, // "Gathersanity: Nerubian Chitin (skinning #70204/38558)"
    { { 70204, 44128 }, 9002022 }, // "Gathersanity: Arctic Fur (skinning #70204/44128)"
    { { 70205, 33568 }, 9002023 }, // "Gathersanity: Borean Leather (skinning #70205/33568)"
    { { 70205, 38558 }, 9002024 }, // "Gathersanity: Nerubian Chitin (skinning #70205/38558)"
    { { 70205, 44128 }, 9002025 }, // "Gathersanity: Arctic Fur (skinning #70205/44128)"
    { { 70206, 33567 }, 9002026 }, // "Gathersanity: Borean Leather Scraps (skinning #70206/33567)"
    { { 70206, 33568 }, 9002027 }, // "Gathersanity: Borean Leather (skinning #70206/33568)"
    { { 70206, 38561 }, 9002028 }, // "Gathersanity: Jormungar Scale (skinning #70206/38561)"
    { { 70206, 44128 }, 9002029 }, // "Gathersanity: Arctic Fur (skinning #70206/44128)"
    { { 70207, 33568 }, 9002030 }, // "Gathersanity: Borean Leather (skinning #70207/33568)"
    { { 70207, 38561 }, 9002031 }, // "Gathersanity: Jormungar Scale (skinning #70207/38561)"
    { { 70207, 44128 }, 9002032 }, // "Gathersanity: Arctic Fur (skinning #70207/44128)"
    { { 70208, 33567 }, 9002033 }, // "Gathersanity: Borean Leather Scraps (skinning #70208/33567)"
    { { 70208, 33568 }, 9002034 }, // "Gathersanity: Borean Leather (skinning #70208/33568)"
    { { 70208, 38557 }, 9002035 }, // "Gathersanity: Icy Dragonscale (skinning #70208/38557)"
    { { 70208, 44128 }, 9002036 }, // "Gathersanity: Arctic Fur (skinning #70208/44128)"
    { { 70209, 33568 }, 9002037 }, // "Gathersanity: Borean Leather (skinning #70209/33568)"
    { { 70209, 38557 }, 9002038 }, // "Gathersanity: Icy Dragonscale (skinning #70209/38557)"
    { { 70209, 44128 }, 9002039 }, // "Gathersanity: Arctic Fur (skinning #70209/44128)"
    { { 70210, 33568 }, 9002040 }, // "Gathersanity: Borean Leather (skinning #70210/33568)"
    { { 70210, 38557 }, 9002041 }, // "Gathersanity: Icy Dragonscale (skinning #70210/38557)"
    { { 70210, 44128 }, 9002042 }, // "Gathersanity: Arctic Fur (skinning #70210/44128)"
    { { 70211, 33568 }, 9002043 }, // "Gathersanity: Borean Leather (skinning #70211/33568)"
    { { 70211, 44128 }, 9002044 }, // "Gathersanity: Arctic Fur (skinning #70211/44128)"
    { { 70212, 33568 }, 9002045 }, // "Gathersanity: Borean Leather (skinning #70212/33568)"
    { { 70212, 44128 }, 9002046 }, // "Gathersanity: Arctic Fur (skinning #70212/44128)"
    { { 70213, 33568 }, 9002047 }, // "Gathersanity: Borean Leather (skinning #70213/33568)"
    { { 70213, 44128 }, 9002048 }, // "Gathersanity: Arctic Fur (skinning #70213/44128)"
    { { 70214, 33568 }, 9002049 }, // "Gathersanity: Borean Leather (skinning #70214/33568)"
    { { 70214, 44128 }, 9002050 }, // "Gathersanity: Arctic Fur (skinning #70214/44128)"
    { { 70215, 33568 }, 9002051 }, // "Gathersanity: Borean Leather (skinning #70215/33568)"
    { { 70215, 38558 }, 9002052 }, // "Gathersanity: Nerubian Chitin (skinning #70215/38558)"
    { { 70215, 44128 }, 9002053 }, // "Gathersanity: Arctic Fur (skinning #70215/44128)"
    { { 80000, 22575 }, 9002054 }, // "Gathersanity: Mote of Life (skinning #80000/22575)"
    { { 80000, 22785 }, 9002055 }, // "Gathersanity: Felweed (skinning #80000/22785)"
    { { 80000, 22786 }, 9002056 }, // "Gathersanity: Dreaming Glory (skinning #80000/22786)"
    { { 80000, 22787 }, 9002057 }, // "Gathersanity: Ragveil (skinning #80000/22787)"
    { { 80000, 22789 }, 9002058 }, // "Gathersanity: Terocone (skinning #80000/22789)"
    { { 80000, 22790 }, 9002059 }, // "Gathersanity: Ancient Lichen (skinning #80000/22790)"
    { { 80000, 22794 }, 9002060 }, // "Gathersanity: Fel Lotus (skinning #80000/22794)"
    { { 80000, 24401 }, 9002061 }, // "Gathersanity: Unidentified Plant Parts (skinning #80000/24401)"
    { { 80000, 25813 }, 9002062 }, // "Gathersanity: Small Mushroom (skinning #80000/25813)"
    { { 80000, 27859 }, 9002063 }, // "Gathersanity: Zangar Caps (skinning #80000/27859)"
    { { 80001, 22575 }, 9002064 }, // "Gathersanity: Mote of Life (skinning #80001/22575)"
    { { 80001, 22785 }, 9002065 }, // "Gathersanity: Felweed (skinning #80001/22785)"
    { { 80001, 22786 }, 9002066 }, // "Gathersanity: Dreaming Glory (skinning #80001/22786)"
    { { 80001, 22787 }, 9002067 }, // "Gathersanity: Ragveil (skinning #80001/22787)"
    { { 80001, 22789 }, 9002068 }, // "Gathersanity: Terocone (skinning #80001/22789)"
    { { 80001, 22790 }, 9002069 }, // "Gathersanity: Ancient Lichen (skinning #80001/22790)"
    { { 80001, 22794 }, 9002070 }, // "Gathersanity: Fel Lotus (skinning #80001/22794)"
    { { 80001, 24401 }, 9002071 }, // "Gathersanity: Unidentified Plant Parts (skinning #80001/24401)"
    { { 80001, 25813 }, 9002072 }, // "Gathersanity: Small Mushroom (skinning #80001/25813)"
    { { 80001, 29453 }, 9002073 }, // "Gathersanity: Sporeggar Mushroom (skinning #80001/29453)"
    { { 80002, 22575 }, 9002074 }, // "Gathersanity: Mote of Life (skinning #80002/22575)"
    { { 80002, 22785 }, 9002075 }, // "Gathersanity: Felweed (skinning #80002/22785)"
    { { 80002, 22786 }, 9002076 }, // "Gathersanity: Dreaming Glory (skinning #80002/22786)"
    { { 80002, 22787 }, 9002077 }, // "Gathersanity: Ragveil (skinning #80002/22787)"
    { { 80002, 22789 }, 9002078 }, // "Gathersanity: Terocone (skinning #80002/22789)"
    { { 80002, 22790 }, 9002079 }, // "Gathersanity: Ancient Lichen (skinning #80002/22790)"
    { { 80002, 22793 }, 9002080 }, // "Gathersanity: Mana Thistle (skinning #80002/22793)"
    { { 80002, 22794 }, 9002081 }, // "Gathersanity: Fel Lotus (skinning #80002/22794)"
    { { 80007, 33452 }, 9002082 }, // "Gathersanity: Honey-Spiced Lichen (skinning #80007/33452)"
    { { 80007, 36901 }, 9002083 }, // "Gathersanity: Goldclover (skinning #80007/36901)"
    { { 80007, 36902 }, 9002084 }, // "Gathersanity: Constrictor Grass (skinning #80007/36902)"
    { { 80007, 36903 }, 9002085 }, // "Gathersanity: Adder's Tongue (skinning #80007/36903)"
    { { 80007, 36904 }, 9002086 }, // "Gathersanity: Tiger Lily (skinning #80007/36904)"
    { { 80007, 36905 }, 9002087 }, // "Gathersanity: Lichbloom (skinning #80007/36905)"
    { { 80007, 36906 }, 9002088 }, // "Gathersanity: Icethorn (skinning #80007/36906)"
    { { 80007, 36907 }, 9002089 }, // "Gathersanity: Talandra's Rose (skinning #80007/36907)"
    { { 80007, 37704 }, 9002090 }, // "Gathersanity: Crystallized Life (skinning #80007/37704)"
    { { 80007, 39516 }, 9002091 }, // "Gathersanity: Frosty Mushroom (skinning #80007/39516)"
    { { 80100, 22573 }, 9002092 }, // "Gathersanity: Mote of Earth (skinning #80100/22573)"
    { { 80100, 24189 }, 9002093 }, // "Gathersanity: Crystalline Fragments (skinning #80100/24189)"
    { { 80101, 22573 }, 9002094 }, // "Gathersanity: Mote of Earth (skinning #80101/22573)"
    { { 80101, 24189 }, 9002095 }, // "Gathersanity: Crystalline Fragments (skinning #80101/24189)"
    { { 80102, 21929 }, 9002096 }, // "Gathersanity: Flame Spessarite (skinning #80102/21929)"
    { { 80102, 23077 }, 9002097 }, // "Gathersanity: Blood Garnet (skinning #80102/23077)"
    { { 80102, 23079 }, 9002098 }, // "Gathersanity: Deep Peridot (skinning #80102/23079)"
    { { 80102, 23107 }, 9002099 }, // "Gathersanity: Shadow Draenite (skinning #80102/23107)"
    { { 80102, 23112 }, 9002100 }, // "Gathersanity: Golden Draenite (skinning #80102/23112)"
    { { 80102, 23117 }, 9002101 }, // "Gathersanity: Azure Moonstone (skinning #80102/23117)"
    { { 80102, 23425 }, 9002102 }, // "Gathersanity: Adamantite Ore (skinning #80102/23425)"
    { { 80102, 23436 }, 9002103 }, // "Gathersanity: Living Ruby (skinning #80102/23436)"
    { { 80102, 23437 }, 9002104 }, // "Gathersanity: Talasite (skinning #80102/23437)"
    { { 80102, 23438 }, 9002105 }, // "Gathersanity: Star of Elune (skinning #80102/23438)"
    { { 80102, 23439 }, 9002106 }, // "Gathersanity: Noble Topaz (skinning #80102/23439)"
    { { 80102, 23440 }, 9002107 }, // "Gathersanity: Dawnstone (skinning #80102/23440)"
    { { 80102, 23441 }, 9002108 }, // "Gathersanity: Nightseye (skinning #80102/23441)"
    { { 80103, 37701 }, 9002109 }, // "Gathersanity: Crystallized Earth (skinning #80103/37701)"
    { { 80103, 39220 }, 9002110 }, // "Gathersanity: Geodesic Fragments (skinning #80103/39220)"
    { { 80104, 37701 }, 9002111 }, // "Gathersanity: Crystallized Earth (skinning #80104/37701)"
    { { 80104, 39220 }, 9002112 }, // "Gathersanity: Geodesic Fragments (skinning #80104/39220)"
    { { 80200, 22578 }, 9002113 }, // "Gathersanity: Mote of Water (skinning #80200/22578)"
    { { 80201, 22577 }, 9002114 }, // "Gathersanity: Mote of Shadow (skinning #80201/22577)"
    { { 80202, 22576 }, 9002115 }, // "Gathersanity: Mote of Mana (skinning #80202/22576)"
    { { 80203, 22572 }, 9002116 }, // "Gathersanity: Mote of Air (skinning #80203/22572)"
    { { 80204, 37702 }, 9002117 }, // "Gathersanity: Crystallized Fire (skinning #80204/37702)"
    { { 80205, 37702 }, 9002118 }, // "Gathersanity: Crystallized Fire (skinning #80205/37702)"
    { { 80205, 37705 }, 9002119 }, // "Gathersanity: Crystallized Water (skinning #80205/37705)"
    { { 80206, 37700 }, 9002120 }, // "Gathersanity: Crystallized Air (skinning #80206/37700)"
    { { 80206, 37705 }, 9002121 }, // "Gathersanity: Crystallized Water (skinning #80206/37705)"
    { { 100001, 783 }, 9002122 }, // "Gathersanity: Light Hide (skinning #100001/783)"
    { { 100001, 2934 }, 9002123 }, // "Gathersanity: Ruined Leather Scraps (skinning #100001/2934)"
    { { 100002, 2318 }, 9002124 }, // "Gathersanity: Light Leather (skinning #100002/2318)"
    { { 100002, 2934 }, 9002125 }, // "Gathersanity: Ruined Leather Scraps (skinning #100002/2934)"
    { { 100003, 4304 }, 9002126 }, // "Gathersanity: Thick Leather (skinning #100003/4304)"
    { { 100003, 8169 }, 9002127 }, // "Gathersanity: Thick Hide (skinning #100003/8169)"
    { { 100003, 8170 }, 9002128 }, // "Gathersanity: Rugged Leather (skinning #100003/8170)"
    { { 100003, 8171 }, 9002129 }, // "Gathersanity: Rugged Hide (skinning #100003/8171)"
    { { 100004, 783 }, 9002130 }, // "Gathersanity: Light Hide (skinning #100004/783)"
    { { 100004, 2318 }, 9002131 }, // "Gathersanity: Light Leather (skinning #100004/2318)"
    { { 100004, 2319 }, 9002132 }, // "Gathersanity: Medium Leather (skinning #100004/2319)"
    { { 100004, 4232 }, 9002133 }, // "Gathersanity: Medium Hide (skinning #100004/4232)"
    { { 100005, 783 }, 9002134 }, // "Gathersanity: Light Hide (skinning #100005/783)"
    { { 100005, 2318 }, 9002135 }, // "Gathersanity: Light Leather (skinning #100005/2318)"
    { { 100005, 2319 }, 9002136 }, // "Gathersanity: Medium Leather (skinning #100005/2319)"
    { { 100005, 4232 }, 9002137 }, // "Gathersanity: Medium Hide (skinning #100005/4232)"
    { { 100006, 783 }, 9002138 }, // "Gathersanity: Light Hide (skinning #100006/783)"
    { { 100006, 2318 }, 9002139 }, // "Gathersanity: Light Leather (skinning #100006/2318)"
    { { 100006, 2319 }, 9002140 }, // "Gathersanity: Medium Leather (skinning #100006/2319)"
    { { 100006, 4232 }, 9002141 }, // "Gathersanity: Medium Hide (skinning #100006/4232)"
    { { 100007, 783 }, 9002142 }, // "Gathersanity: Light Hide (skinning #100007/783)"
    { { 100007, 2318 }, 9002143 }, // "Gathersanity: Light Leather (skinning #100007/2318)"
    { { 100007, 2319 }, 9002144 }, // "Gathersanity: Medium Leather (skinning #100007/2319)"
    { { 100007, 4232 }, 9002145 }, // "Gathersanity: Medium Hide (skinning #100007/4232)"
    { { 100008, 783 }, 9002146 }, // "Gathersanity: Light Hide (skinning #100008/783)"
    { { 100008, 2318 }, 9002147 }, // "Gathersanity: Light Leather (skinning #100008/2318)"
    { { 100008, 2319 }, 9002148 }, // "Gathersanity: Medium Leather (skinning #100008/2319)"
    { { 100008, 4232 }, 9002149 }, // "Gathersanity: Medium Hide (skinning #100008/4232)"
    { { 100008, 7287 }, 9002150 }, // "Gathersanity: Red Whelp Scale (skinning #100008/7287)"
    { { 100009, 783 }, 9002151 }, // "Gathersanity: Light Hide (skinning #100009/783)"
    { { 100009, 2318 }, 9002152 }, // "Gathersanity: Light Leather (skinning #100009/2318)"
    { { 100009, 2319 }, 9002153 }, // "Gathersanity: Medium Leather (skinning #100009/2319)"
    { { 100009, 4232 }, 9002154 }, // "Gathersanity: Medium Hide (skinning #100009/4232)"
    { { 100009, 6470 }, 9002155 }, // "Gathersanity: Deviate Scale (skinning #100009/6470)"
    { { 100009, 6471 }, 9002156 }, // "Gathersanity: Perfect Deviate Scale (skinning #100009/6471)"
    { { 100010, 2319 }, 9002157 }, // "Gathersanity: Medium Leather (skinning #100010/2319)"
    { { 100010, 4232 }, 9002158 }, // "Gathersanity: Medium Hide (skinning #100010/4232)"
    { { 100010, 4234 }, 9002159 }, // "Gathersanity: Heavy Leather (skinning #100010/4234)"
    { { 100010, 4235 }, 9002160 }, // "Gathersanity: Heavy Hide (skinning #100010/4235)"
    { { 100011, 2319 }, 9002161 }, // "Gathersanity: Medium Leather (skinning #100011/2319)"
    { { 100011, 4232 }, 9002162 }, // "Gathersanity: Medium Hide (skinning #100011/4232)"
    { { 100011, 4234 }, 9002163 }, // "Gathersanity: Heavy Leather (skinning #100011/4234)"
    { { 100011, 4235 }, 9002164 }, // "Gathersanity: Heavy Hide (skinning #100011/4235)"
    { { 100012, 2319 }, 9002165 }, // "Gathersanity: Medium Leather (skinning #100012/2319)"
    { { 100012, 4232 }, 9002166 }, // "Gathersanity: Medium Hide (skinning #100012/4232)"
    { { 100012, 4234 }, 9002167 }, // "Gathersanity: Heavy Leather (skinning #100012/4234)"
    { { 100012, 4235 }, 9002168 }, // "Gathersanity: Heavy Hide (skinning #100012/4235)"
    { { 100013, 4234 }, 9002169 }, // "Gathersanity: Heavy Leather (skinning #100013/4234)"
    { { 100013, 4235 }, 9002170 }, // "Gathersanity: Heavy Hide (skinning #100013/4235)"
    { { 100013, 4304 }, 9002171 }, // "Gathersanity: Thick Leather (skinning #100013/4304)"
    { { 100014, 4234 }, 9002172 }, // "Gathersanity: Heavy Leather (skinning #100014/4234)"
    { { 100014, 4235 }, 9002173 }, // "Gathersanity: Heavy Hide (skinning #100014/4235)"
    { { 100014, 4304 }, 9002174 }, // "Gathersanity: Thick Leather (skinning #100014/4304)"
    { { 100014, 8169 }, 9002175 }, // "Gathersanity: Thick Hide (skinning #100014/8169)"
    { { 100015, 783 }, 9002176 }, // "Gathersanity: Light Hide (skinning #100015/783)"
    { { 100015, 2318 }, 9002177 }, // "Gathersanity: Light Leather (skinning #100015/2318)"
    { { 100015, 2934 }, 9002178 }, // "Gathersanity: Ruined Leather Scraps (skinning #100015/2934)"
};
inline std::map<std::pair<uint32_t, uint32_t>, int64_t> BuildSKINNING_LOOT_SLOT_TO_LOCATION_ID()
{
    std::map<std::pair<uint32_t, uint32_t>, int64_t> result;
    for (auto const& row : SKINNING_LOOT_SLOT_TO_LOCATION_ID_RAW)
        result.emplace(row.first, row.second);
    return result;
}
inline const std::map<std::pair<uint32_t, uint32_t>, int64_t> SKINNING_LOOT_SLOT_TO_LOCATION_ID = BuildSKINNING_LOOT_SLOT_TO_LOCATION_ID();

inline constexpr std::pair<std::pair<uint32_t, uint32_t>, int64_t> DISENCHANT_LOOT_SLOT_TO_LOCATION_ID_RAW[] = {
    { { 1, 10938 }, 9002179 }, // "Gathersanity: Lesser Magic Essence (disenchant bracket #1)"
    { { 1, 10940 }, 9002180 }, // "Gathersanity: Strange Dust (disenchant bracket #1)"
    { { 2, 10939 }, 9002181 }, // "Gathersanity: Greater Magic Essence (disenchant bracket #2)"
    { { 2, 10940 }, 9002182 }, // "Gathersanity: Strange Dust (disenchant bracket #2)"
    { { 2, 10978 }, 9002183 }, // "Gathersanity: Small Glimmering Shard (disenchant bracket #2)"
    { { 3, 10940 }, 9002184 }, // "Gathersanity: Strange Dust (disenchant bracket #3)"
    { { 3, 10978 }, 9002185 }, // "Gathersanity: Small Glimmering Shard (disenchant bracket #3)"
    { { 3, 10998 }, 9002186 }, // "Gathersanity: Lesser Astral Essence (disenchant bracket #3)"
    { { 4, 11082 }, 9002187 }, // "Gathersanity: Greater Astral Essence (disenchant bracket #4)"
    { { 4, 11083 }, 9002188 }, // "Gathersanity: Soul Dust (disenchant bracket #4)"
    { { 4, 11084 }, 9002189 }, // "Gathersanity: Large Glimmering Shard (disenchant bracket #4)"
    { { 5, 11083 }, 9002190 }, // "Gathersanity: Soul Dust (disenchant bracket #5)"
    { { 5, 11134 }, 9002191 }, // "Gathersanity: Lesser Mystic Essence (disenchant bracket #5)"
    { { 5, 11138 }, 9002192 }, // "Gathersanity: Small Glowing Shard (disenchant bracket #5)"
    { { 6, 11135 }, 9002193 }, // "Gathersanity: Greater Mystic Essence (disenchant bracket #6)"
    { { 6, 11137 }, 9002194 }, // "Gathersanity: Vision Dust (disenchant bracket #6)"
    { { 6, 11139 }, 9002195 }, // "Gathersanity: Large Glowing Shard (disenchant bracket #6)"
    { { 7, 11137 }, 9002196 }, // "Gathersanity: Vision Dust (disenchant bracket #7)"
    { { 7, 11174 }, 9002197 }, // "Gathersanity: Lesser Nether Essence (disenchant bracket #7)"
    { { 7, 11177 }, 9002198 }, // "Gathersanity: Small Radiant Shard (disenchant bracket #7)"
    { { 8, 11175 }, 9002199 }, // "Gathersanity: Greater Nether Essence (disenchant bracket #8)"
    { { 8, 11176 }, 9002200 }, // "Gathersanity: Dream Dust (disenchant bracket #8)"
    { { 8, 11178 }, 9002201 }, // "Gathersanity: Large Radiant Shard (disenchant bracket #8)"
    { { 9, 11176 }, 9002202 }, // "Gathersanity: Dream Dust (disenchant bracket #9)"
    { { 9, 14343 }, 9002203 }, // "Gathersanity: Small Brilliant Shard (disenchant bracket #9)"
    { { 9, 16202 }, 9002204 }, // "Gathersanity: Lesser Eternal Essence (disenchant bracket #9)"
    { { 10, 14344 }, 9002205 }, // "Gathersanity: Large Brilliant Shard (disenchant bracket #10)"
    { { 10, 16203 }, 9002206 }, // "Gathersanity: Greater Eternal Essence (disenchant bracket #10)"
    { { 10, 16204 }, 9002207 }, // "Gathersanity: Illusion Dust (disenchant bracket #10)"
    { { 11, 14344 }, 9002208 }, // "Gathersanity: Large Brilliant Shard (disenchant bracket #11)"
    { { 11, 16203 }, 9002209 }, // "Gathersanity: Greater Eternal Essence (disenchant bracket #11)"
    { { 11, 16204 }, 9002210 }, // "Gathersanity: Illusion Dust (disenchant bracket #11)"
    { { 12, 22445 }, 9002211 }, // "Gathersanity: Arcane Dust (disenchant bracket #12)"
    { { 12, 22447 }, 9002212 }, // "Gathersanity: Lesser Planar Essence (disenchant bracket #12)"
    { { 12, 22448 }, 9002213 }, // "Gathersanity: Small Prismatic Shard (disenchant bracket #12)"
    { { 13, 22445 }, 9002214 }, // "Gathersanity: Arcane Dust (disenchant bracket #13)"
    { { 13, 22447 }, 9002215 }, // "Gathersanity: Lesser Planar Essence (disenchant bracket #13)"
    { { 13, 22448 }, 9002216 }, // "Gathersanity: Small Prismatic Shard (disenchant bracket #13)"
    { { 14, 22445 }, 9002217 }, // "Gathersanity: Arcane Dust (disenchant bracket #14)"
    { { 14, 22446 }, 9002218 }, // "Gathersanity: Greater Planar Essence (disenchant bracket #14)"
    { { 14, 22449 }, 9002219 }, // "Gathersanity: Large Prismatic Shard (disenchant bracket #14)"
    { { 15, 34053 }, 9002220 }, // "Gathersanity: Small Dream Shard (disenchant bracket #15)"
    { { 15, 34054 }, 9002221 }, // "Gathersanity: Infinite Dust (disenchant bracket #15)"
    { { 15, 34056 }, 9002222 }, // "Gathersanity: Lesser Cosmic Essence (disenchant bracket #15)"
    { { 16, 34052 }, 9002223 }, // "Gathersanity: Dream Shard (disenchant bracket #16)"
    { { 16, 34054 }, 9002224 }, // "Gathersanity: Infinite Dust (disenchant bracket #16)"
    { { 16, 34055 }, 9002225 }, // "Gathersanity: Greater Cosmic Essence (disenchant bracket #16)"
    { { 17, 11139 }, 9002226 }, // "Gathersanity: Large Glowing Shard (disenchant bracket #17)"
    { { 18, 14344 }, 9002227 }, // "Gathersanity: Large Brilliant Shard (disenchant bracket #18)"
    { { 21, 10938 }, 9002228 }, // "Gathersanity: Lesser Magic Essence (disenchant bracket #21)"
    { { 21, 10940 }, 9002229 }, // "Gathersanity: Strange Dust (disenchant bracket #21)"
    { { 22, 10939 }, 9002230 }, // "Gathersanity: Greater Magic Essence (disenchant bracket #22)"
    { { 22, 10940 }, 9002231 }, // "Gathersanity: Strange Dust (disenchant bracket #22)"
    { { 22, 10978 }, 9002232 }, // "Gathersanity: Small Glimmering Shard (disenchant bracket #22)"
    { { 23, 10940 }, 9002233 }, // "Gathersanity: Strange Dust (disenchant bracket #23)"
    { { 23, 10978 }, 9002234 }, // "Gathersanity: Small Glimmering Shard (disenchant bracket #23)"
    { { 23, 10998 }, 9002235 }, // "Gathersanity: Lesser Astral Essence (disenchant bracket #23)"
    { { 24, 11082 }, 9002236 }, // "Gathersanity: Greater Astral Essence (disenchant bracket #24)"
    { { 24, 11083 }, 9002237 }, // "Gathersanity: Soul Dust (disenchant bracket #24)"
    { { 24, 11084 }, 9002238 }, // "Gathersanity: Large Glimmering Shard (disenchant bracket #24)"
    { { 25, 11083 }, 9002239 }, // "Gathersanity: Soul Dust (disenchant bracket #25)"
    { { 25, 11134 }, 9002240 }, // "Gathersanity: Lesser Mystic Essence (disenchant bracket #25)"
    { { 25, 11138 }, 9002241 }, // "Gathersanity: Small Glowing Shard (disenchant bracket #25)"
    { { 26, 11135 }, 9002242 }, // "Gathersanity: Greater Mystic Essence (disenchant bracket #26)"
    { { 26, 11137 }, 9002243 }, // "Gathersanity: Vision Dust (disenchant bracket #26)"
    { { 26, 11139 }, 9002244 }, // "Gathersanity: Large Glowing Shard (disenchant bracket #26)"
    { { 27, 11137 }, 9002245 }, // "Gathersanity: Vision Dust (disenchant bracket #27)"
    { { 27, 11174 }, 9002246 }, // "Gathersanity: Lesser Nether Essence (disenchant bracket #27)"
    { { 27, 11177 }, 9002247 }, // "Gathersanity: Small Radiant Shard (disenchant bracket #27)"
    { { 28, 11175 }, 9002248 }, // "Gathersanity: Greater Nether Essence (disenchant bracket #28)"
    { { 28, 11176 }, 9002249 }, // "Gathersanity: Dream Dust (disenchant bracket #28)"
    { { 28, 11178 }, 9002250 }, // "Gathersanity: Large Radiant Shard (disenchant bracket #28)"
    { { 29, 11176 }, 9002251 }, // "Gathersanity: Dream Dust (disenchant bracket #29)"
    { { 29, 14343 }, 9002252 }, // "Gathersanity: Small Brilliant Shard (disenchant bracket #29)"
    { { 29, 16202 }, 9002253 }, // "Gathersanity: Lesser Eternal Essence (disenchant bracket #29)"
    { { 30, 14344 }, 9002254 }, // "Gathersanity: Large Brilliant Shard (disenchant bracket #30)"
    { { 30, 16203 }, 9002255 }, // "Gathersanity: Greater Eternal Essence (disenchant bracket #30)"
    { { 30, 16204 }, 9002256 }, // "Gathersanity: Illusion Dust (disenchant bracket #30)"
    { { 31, 14344 }, 9002257 }, // "Gathersanity: Large Brilliant Shard (disenchant bracket #31)"
    { { 31, 16203 }, 9002258 }, // "Gathersanity: Greater Eternal Essence (disenchant bracket #31)"
    { { 31, 16204 }, 9002259 }, // "Gathersanity: Illusion Dust (disenchant bracket #31)"
    { { 32, 22445 }, 9002260 }, // "Gathersanity: Arcane Dust (disenchant bracket #32)"
    { { 32, 22447 }, 9002261 }, // "Gathersanity: Lesser Planar Essence (disenchant bracket #32)"
    { { 32, 22448 }, 9002262 }, // "Gathersanity: Small Prismatic Shard (disenchant bracket #32)"
    { { 33, 22445 }, 9002263 }, // "Gathersanity: Arcane Dust (disenchant bracket #33)"
    { { 33, 22446 }, 9002264 }, // "Gathersanity: Greater Planar Essence (disenchant bracket #33)"
    { { 33, 22449 }, 9002265 }, // "Gathersanity: Large Prismatic Shard (disenchant bracket #33)"
    { { 34, 34053 }, 9002266 }, // "Gathersanity: Small Dream Shard (disenchant bracket #34)"
    { { 34, 34054 }, 9002267 }, // "Gathersanity: Infinite Dust (disenchant bracket #34)"
    { { 34, 34056 }, 9002268 }, // "Gathersanity: Lesser Cosmic Essence (disenchant bracket #34)"
    { { 35, 34052 }, 9002269 }, // "Gathersanity: Dream Shard (disenchant bracket #35)"
    { { 35, 34054 }, 9002270 }, // "Gathersanity: Infinite Dust (disenchant bracket #35)"
    { { 35, 34055 }, 9002271 }, // "Gathersanity: Greater Cosmic Essence (disenchant bracket #35)"
    { { 41, 10978 }, 9002272 }, // "Gathersanity: Small Glimmering Shard (disenchant bracket #41)"
    { { 42, 11084 }, 9002273 }, // "Gathersanity: Large Glimmering Shard (disenchant bracket #42)"
    { { 43, 11138 }, 9002274 }, // "Gathersanity: Small Glowing Shard (disenchant bracket #43)"
    { { 44, 11139 }, 9002275 }, // "Gathersanity: Large Glowing Shard (disenchant bracket #44)"
    { { 45, 11177 }, 9002276 }, // "Gathersanity: Small Radiant Shard (disenchant bracket #45)"
    { { 46, 11178 }, 9002277 }, // "Gathersanity: Large Radiant Shard (disenchant bracket #46)"
    { { 47, 14343 }, 9002278 }, // "Gathersanity: Small Brilliant Shard (disenchant bracket #47)"
    { { 48, 14344 }, 9002279 }, // "Gathersanity: Large Brilliant Shard (disenchant bracket #48)"
    { { 48, 20725 }, 9002280 }, // "Gathersanity: Nexus Crystal (disenchant bracket #48)"
    { { 49, 14344 }, 9002281 }, // "Gathersanity: Large Brilliant Shard (disenchant bracket #49)"
    { { 49, 20725 }, 9002282 }, // "Gathersanity: Nexus Crystal (disenchant bracket #49)"
    { { 50, 20725 }, 9002283 }, // "Gathersanity: Nexus Crystal (disenchant bracket #50)"
    { { 50, 22448 }, 9002284 }, // "Gathersanity: Small Prismatic Shard (disenchant bracket #50)"
    { { 51, 20725 }, 9002285 }, // "Gathersanity: Nexus Crystal (disenchant bracket #51)"
    { { 51, 22448 }, 9002286 }, // "Gathersanity: Small Prismatic Shard (disenchant bracket #51)"
    { { 52, 22449 }, 9002287 }, // "Gathersanity: Large Prismatic Shard (disenchant bracket #52)"
    { { 52, 22450 }, 9002288 }, // "Gathersanity: Void Crystal (disenchant bracket #52)"
    { { 53, 34053 }, 9002289 }, // "Gathersanity: Small Dream Shard (disenchant bracket #53)"
    { { 53, 34057 }, 9002290 }, // "Gathersanity: Abyss Crystal (disenchant bracket #53)"
    { { 54, 34052 }, 9002291 }, // "Gathersanity: Dream Shard (disenchant bracket #54)"
    { { 54, 34057 }, 9002292 }, // "Gathersanity: Abyss Crystal (disenchant bracket #54)"
    { { 61, 11177 }, 9002293 }, // "Gathersanity: Small Radiant Shard (disenchant bracket #61)"
    { { 62, 11178 }, 9002294 }, // "Gathersanity: Large Radiant Shard (disenchant bracket #62)"
    { { 63, 14343 }, 9002295 }, // "Gathersanity: Small Brilliant Shard (disenchant bracket #63)"
    { { 64, 20725 }, 9002296 }, // "Gathersanity: Nexus Crystal (disenchant bracket #64)"
    { { 65, 20725 }, 9002297 }, // "Gathersanity: Nexus Crystal (disenchant bracket #65)"
    { { 66, 22450 }, 9002298 }, // "Gathersanity: Void Crystal (disenchant bracket #66)"
    { { 67, 22450 }, 9002299 }, // "Gathersanity: Void Crystal (disenchant bracket #67)"
    { { 68, 34057 }, 9002300 }, // "Gathersanity: Abyss Crystal (disenchant bracket #68)"
    { { 69, 34057 }, 9002301 }, // "Gathersanity: Abyss Crystal (disenchant bracket #69)"
};
inline std::map<std::pair<uint32_t, uint32_t>, int64_t> BuildDISENCHANT_LOOT_SLOT_TO_LOCATION_ID()
{
    std::map<std::pair<uint32_t, uint32_t>, int64_t> result;
    for (auto const& row : DISENCHANT_LOOT_SLOT_TO_LOCATION_ID_RAW)
        result.emplace(row.first, row.second);
    return result;
}
inline const std::map<std::pair<uint32_t, uint32_t>, int64_t> DISENCHANT_LOOT_SLOT_TO_LOCATION_ID = BuildDISENCHANT_LOOT_SLOT_TO_LOCATION_ID();
inline constexpr std::pair<int64_t, uint32_t> AP_ITEM_ID_TO_WOW_ITEM_ENTRY_RAW[] = {
    { 9500000, 3340 }, // "Gathersanity Item: Incendicite Mineral Vein - Incendicite Ore (#1409/3340)"
    { 9500001, 765 }, // "Gathersanity Item: Silverleaf - Silverleaf (#1414/765)"
    { 9500002, 2447 }, // "Gathersanity Item: Peacebloom - Peacebloom (#1415/2447)"
    { 9500003, 2449 }, // "Gathersanity Item: Earthroot - Earthroot (#1416/2449)"
    { 9500004, 785 }, // "Gathersanity Item: Mageroyal - Mageroyal (#1417/785)"
    { 9500005, 2452 }, // "Gathersanity Item: Mageroyal - Swiftthistle (#1417/2452)"
    { 9500006, 2450 }, // "Gathersanity Item: Briarthorn - Briarthorn (#1418/2450)"
    { 9500007, 2452 }, // "Gathersanity Item: Briarthorn - Swiftthistle (#1418/2452)"
    { 9500008, 2453 }, // "Gathersanity Item: Bruiseweed - Bruiseweed (#1419/2453)"
    { 9500009, 3355 }, // "Gathersanity Item: Wild Steelbloom - Wild Steelbloom (#1420/3355)"
    { 9500010, 3356 }, // "Gathersanity Item: Kingsblood - Kingsblood (#1421/3356)"
    { 9500011, 3358 }, // "Gathersanity Item: Khadgar's Whisker - Khadgar's Whisker (#1423/3358)"
    { 9500012, 3369 }, // "Gathersanity Item: Grave Moss - Grave Moss (#1424/3369)"
    { 9500013, 774 }, // "Gathersanity Item: Copper Vein - Malachite (#1502/774)"
    { 9500014, 818 }, // "Gathersanity Item: Copper Vein - Tigerseye (#1502/818)"
    { 9500015, 1210 }, // "Gathersanity Item: Copper Vein - Shadowgem (#1502/1210)"
    { 9500016, 2770 }, // "Gathersanity Item: Copper Vein - Copper Ore (#1502/2770)"
    { 9500017, 2835 }, // "Gathersanity Item: Copper Vein - Rough Stone (#1502/2835)"
    { 9500018, 1206 }, // "Gathersanity Item: Tin Vein - Moss Agate (#1503/1206)"
    { 9500019, 1210 }, // "Gathersanity Item: Tin Vein - Shadowgem (#1503/1210)"
    { 9500020, 1529 }, // "Gathersanity Item: Tin Vein - Jade (#1503/1529)"
    { 9500021, 1705 }, // "Gathersanity Item: Tin Vein - Lesser Moonstone (#1503/1705)"
    { 9500022, 2771 }, // "Gathersanity Item: Tin Vein - Tin Ore (#1503/2771)"
    { 9500023, 2836 }, // "Gathersanity Item: Tin Vein - Coarse Stone (#1503/2836)"
    { 9500024, 1206 }, // "Gathersanity Item: Ooze Covered Silver Vein - Moss Agate (#1504/1206)"
    { 9500025, 1210 }, // "Gathersanity Item: Ooze Covered Silver Vein - Shadowgem (#1504/1210)"
    { 9500026, 1705 }, // "Gathersanity Item: Ooze Covered Silver Vein - Lesser Moonstone (#1504/1705)"
    { 9500027, 2775 }, // "Gathersanity Item: Ooze Covered Silver Vein - Silver Ore (#1504/2775)"
    { 9500028, 1529 }, // "Gathersanity Item: Iron Deposit - Jade (#1505/1529)"
    { 9500029, 1705 }, // "Gathersanity Item: Iron Deposit - Lesser Moonstone (#1505/1705)"
    { 9500030, 2772 }, // "Gathersanity Item: Iron Deposit - Iron Ore (#1505/2772)"
    { 9500031, 2838 }, // "Gathersanity Item: Iron Deposit - Heavy Stone (#1505/2838)"
    { 9500032, 3864 }, // "Gathersanity Item: Iron Deposit - Citrine (#1505/3864)"
    { 9500033, 7909 }, // "Gathersanity Item: Iron Deposit - Aquamarine (#1505/7909)"
    { 9500034, 1705 }, // "Gathersanity Item: Gold Vein - Lesser Moonstone (#1506/1705)"
    { 9500035, 2776 }, // "Gathersanity Item: Gold Vein - Gold Ore (#1506/2776)"
    { 9500036, 3864 }, // "Gathersanity Item: Gold Vein - Citrine (#1506/3864)"
    { 9500037, 7909 }, // "Gathersanity Item: Gold Vein - Aquamarine (#1506/7909)"
    { 9500038, 3357 }, // "Gathersanity Item: Liferoot - Liferoot (#1730/3357)"
    { 9500039, 3818 }, // "Gathersanity Item: Fadeleaf - Fadeleaf (#1731/3818)"
    { 9500040, 3819 }, // "Gathersanity Item: Wintersbite - Wintersbite (#1732/3819)"
    { 9500041, 3820 }, // "Gathersanity Item: Stranglekelp - Stranglekelp (#1733/3820)"
    { 9500042, 3821 }, // "Gathersanity Item: Goldthorn - Goldthorn (#1734/3821)"
    { 9500043, 774 }, // "Gathersanity Item: Copper Vein - Malachite (#1735/774)"
    { 9500044, 818 }, // "Gathersanity Item: Copper Vein - Tigerseye (#1735/818)"
    { 9500045, 1210 }, // "Gathersanity Item: Copper Vein - Shadowgem (#1735/1210)"
    { 9500046, 2770 }, // "Gathersanity Item: Copper Vein - Copper Ore (#1735/2770)"
    { 9500047, 2835 }, // "Gathersanity Item: Copper Vein - Rough Stone (#1735/2835)"
    { 9500048, 1206 }, // "Gathersanity Item: Tin Vein - Moss Agate (#1736/1206)"
    { 9500049, 1210 }, // "Gathersanity Item: Tin Vein - Shadowgem (#1736/1210)"
    { 9500050, 1529 }, // "Gathersanity Item: Tin Vein - Jade (#1736/1529)"
    { 9500051, 1705 }, // "Gathersanity Item: Tin Vein - Lesser Moonstone (#1736/1705)"
    { 9500052, 2771 }, // "Gathersanity Item: Tin Vein - Tin Ore (#1736/2771)"
    { 9500053, 2836 }, // "Gathersanity Item: Tin Vein - Coarse Stone (#1736/2836)"
    { 9500054, 3858 }, // "Gathersanity Item: Mithril Deposit - Mithril Ore (#1742/3858)"
    { 9500055, 3864 }, // "Gathersanity Item: Mithril Deposit - Citrine (#1742/3864)"
    { 9500056, 7909 }, // "Gathersanity Item: Mithril Deposit - Aquamarine (#1742/7909)"
    { 9500057, 7910 }, // "Gathersanity Item: Mithril Deposit - Star Ruby (#1742/7910)"
    { 9500058, 7912 }, // "Gathersanity Item: Mithril Deposit - Solid Stone (#1742/7912)"
    { 9500059, 9262 }, // "Gathersanity Item: Mithril Deposit - Black Vitriol (#1742/9262)"
    { 9500060, 4278 }, // "Gathersanity Item: Lesser Bloodstone Deposit - Lesser Bloodstone Ore (#2039/4278)"
    { 9500061, 4625 }, // "Gathersanity Item: Firebloom - Firebloom (#2292/4625)"
    { 9500062, 765 }, // "Gathersanity Item: Silverleaf - Silverleaf (#2511/765)"
    { 9500063, 2447 }, // "Gathersanity Item: Peacebloom - Peacebloom (#2512/2447)"
    { 9500064, 2449 }, // "Gathersanity Item: Earthroot - Earthroot (#2513/2449)"
    { 9500065, 785 }, // "Gathersanity Item: Mageroyal - Mageroyal (#2514/785)"
    { 9500066, 2452 }, // "Gathersanity Item: Mageroyal - Swiftthistle (#2514/2452)"
    { 9500067, 2450 }, // "Gathersanity Item: Briarthorn - Briarthorn (#2515/2450)"
    { 9500068, 2452 }, // "Gathersanity Item: Briarthorn - Swiftthistle (#2515/2452)"
    { 9500069, 2453 }, // "Gathersanity Item: Bruiseweed - Bruiseweed (#2516/2453)"
    { 9500070, 774 }, // "Gathersanity Item: Copper Vein - Malachite (#2626/774)"
    { 9500071, 818 }, // "Gathersanity Item: Copper Vein - Tigerseye (#2626/818)"
    { 9500072, 1210 }, // "Gathersanity Item: Copper Vein - Shadowgem (#2626/1210)"
    { 9500073, 2770 }, // "Gathersanity Item: Copper Vein - Copper Ore (#2626/2770)"
    { 9500074, 2835 }, // "Gathersanity Item: Copper Vein - Rough Stone (#2626/2835)"
    { 9500075, 5075 }, // "Gathersanity Item: Copper Vein - Blood Shard (#2626/5075)"
    { 9500076, 1206 }, // "Gathersanity Item: Tin Vein - Moss Agate (#2627/1206)"
    { 9500077, 1210 }, // "Gathersanity Item: Tin Vein - Shadowgem (#2627/1210)"
    { 9500078, 1529 }, // "Gathersanity Item: Tin Vein - Jade (#2627/1529)"
    { 9500079, 1705 }, // "Gathersanity Item: Tin Vein - Lesser Moonstone (#2627/1705)"
    { 9500080, 2771 }, // "Gathersanity Item: Tin Vein - Tin Ore (#2627/2771)"
    { 9500081, 2836 }, // "Gathersanity Item: Tin Vein - Coarse Stone (#2627/2836)"
    { 9500082, 5075 }, // "Gathersanity Item: Tin Vein - Blood Shard (#2627/5075)"
    { 9500083, 5833 }, // "Gathersanity Item: Indurium Mineral Vein - Indurium Ore (#3266/5833)"
    { 9500084, 3864 }, // "Gathersanity Item: Ooze Covered Truesilver Deposit - Citrine (#5045/3864)"
    { 9500085, 7909 }, // "Gathersanity Item: Ooze Covered Truesilver Deposit - Aquamarine (#5045/7909)"
    { 9500086, 7910 }, // "Gathersanity Item: Ooze Covered Truesilver Deposit - Star Ruby (#5045/7910)"
    { 9500087, 7911 }, // "Gathersanity Item: Ooze Covered Truesilver Deposit - Truesilver Ore (#5045/7911)"
    { 9500088, 8153 }, // "Gathersanity Item: Purple Lotus - Wildvine (#6142/8153)"
    { 9500089, 8831 }, // "Gathersanity Item: Purple Lotus - Purple Lotus (#6142/8831)"
    { 9500090, 8836 }, // "Gathersanity Item: Arthas' Tears - Arthas' Tears (#6150/8836)"
    { 9500091, 8838 }, // "Gathersanity Item: Sungrass - Sungrass (#6151/8838)"
    { 9500092, 8839 }, // "Gathersanity Item: Blindweed - Blindweed (#6152/8839)"
    { 9500093, 8845 }, // "Gathersanity Item: Ghost Mushroom - Ghost Mushroom (#6312/8845)"
    { 9500094, 8846 }, // "Gathersanity Item: Gromsblood - Gromsblood (#6313/8846)"
    { 9500095, 10620 }, // "Gathersanity Item: Ooze Covered Thorium Vein - Thorium Ore (#9597/10620)"
    { 9500096, 12365 }, // "Gathersanity Item: Ooze Covered Thorium Vein - Dense Stone (#9597/12365)"
    { 9500097, 9262 }, // "Gathersanity Item: Dark Iron Deposit - Black Vitriol (#11213/9262)"
    { 9500098, 11370 }, // "Gathersanity Item: Dark Iron Deposit - Dark Iron Ore (#11213/11370)"
    { 9500099, 11382 }, // "Gathersanity Item: Dark Iron Deposit - Blood of the Mountain (#11213/11382)"
    { 9500100, 11754 }, // "Gathersanity Item: Dark Iron Deposit - Black Diamond (#11213/11754)"
    { 9500101, 10620 }, // "Gathersanity Item: Ooze Covered Rich Thorium Vein - Thorium Ore (#12883/10620)"
    { 9500102, 12365 }, // "Gathersanity Item: Ooze Covered Rich Thorium Vein - Dense Stone (#12883/12365)"
    { 9500103, 13464 }, // "Gathersanity Item: Golden Sansam - Golden Sansam (#13945/13464)"
    { 9500104, 13463 }, // "Gathersanity Item: Dreamfoil - Dreamfoil (#13946/13463)"
    { 9500105, 13465 }, // "Gathersanity Item: Mountain Silversage - Mountain Silversage (#13947/13465)"
    { 9500106, 13467 }, // "Gathersanity Item: Icecap - Icecap (#13949/13467)"
    { 9500107, 13468 }, // "Gathersanity Item: Black Lotus - Black Lotus (#13950/13468)"
    { 9500108, 10620 }, // "Gathersanity Item: Small Thorium Vein - Thorium Ore (#13960/10620)"
    { 9500109, 11513 }, // "Gathersanity Item: Small Thorium Vein - Tainted Vitriol (#13960/11513)"
    { 9500110, 12365 }, // "Gathersanity Item: Small Thorium Vein - Dense Stone (#13960/12365)"
    { 9500111, 3858 }, // "Gathersanity Item: Mithril Deposit - Mithril Ore (#13961/3858)"
    { 9500112, 3864 }, // "Gathersanity Item: Mithril Deposit - Citrine (#13961/3864)"
    { 9500113, 7909 }, // "Gathersanity Item: Mithril Deposit - Aquamarine (#13961/7909)"
    { 9500114, 7910 }, // "Gathersanity Item: Mithril Deposit - Star Ruby (#13961/7910)"
    { 9500115, 7912 }, // "Gathersanity Item: Mithril Deposit - Solid Stone (#13961/7912)"
    { 9500116, 9262 }, // "Gathersanity Item: Mithril Deposit - Black Vitriol (#13961/9262)"
    { 9500117, 11513 }, // "Gathersanity Item: Mithril Deposit - Tainted Vitriol (#13961/11513)"
    { 9500118, 8838 }, // "Gathersanity Item: Sungrass - Sungrass (#13965/8838)"
    { 9500119, 11514 }, // "Gathersanity Item: Sungrass - Fel Creep (#13965/11514)"
    { 9500120, 8846 }, // "Gathersanity Item: Gromsblood - Gromsblood (#13966/8846)"
    { 9500121, 11514 }, // "Gathersanity Item: Gromsblood - Fel Creep (#13966/11514)"
    { 9500122, 11514 }, // "Gathersanity Item: Golden Sansam - Fel Creep (#13967/11514)"
    { 9500123, 13464 }, // "Gathersanity Item: Golden Sansam - Golden Sansam (#13967/13464)"
    { 9500124, 11514 }, // "Gathersanity Item: Dreamfoil - Fel Creep (#13968/11514)"
    { 9500125, 13463 }, // "Gathersanity Item: Dreamfoil - Dreamfoil (#13968/13463)"
    { 9500126, 11514 }, // "Gathersanity Item: Mountain Silversage - Fel Creep (#13969/11514)"
    { 9500127, 13465 }, // "Gathersanity Item: Mountain Silversage - Mountain Silversage (#13969/13465)"
    { 9500128, 8836 }, // "Gathersanity Item: Arthas' Tears - Arthas' Tears (#13970/8836)"
    { 9500129, 11514 }, // "Gathersanity Item: Arthas' Tears - Fel Creep (#13970/11514)"
    { 9500130, 8153 }, // "Gathersanity Item: Purple Lotus - Wildvine (#17200/8153)"
    { 9500131, 8831 }, // "Gathersanity Item: Purple Lotus - Purple Lotus (#17200/8831)"
    { 9500132, 19726 }, // "Gathersanity Item: Purple Lotus - Bloodvine (#17200/19726)"
    { 9500133, 8838 }, // "Gathersanity Item: Sungrass - Sungrass (#17201/8838)"
    { 9500134, 19726 }, // "Gathersanity Item: Sungrass - Bloodvine (#17201/19726)"
    { 9500135, 13464 }, // "Gathersanity Item: Golden Sansam - Golden Sansam (#17202/13464)"
    { 9500136, 19726 }, // "Gathersanity Item: Golden Sansam - Bloodvine (#17202/19726)"
    { 9500137, 13463 }, // "Gathersanity Item: Dreamfoil - Dreamfoil (#17203/13463)"
    { 9500138, 19726 }, // "Gathersanity Item: Dreamfoil - Bloodvine (#17203/19726)"
    { 9500139, 13465 }, // "Gathersanity Item: Mountain Silversage - Mountain Silversage (#17204/13465)"
    { 9500140, 19726 }, // "Gathersanity Item: Mountain Silversage - Bloodvine (#17204/19726)"
    { 9500141, 10620 }, // "Gathersanity Item: Hakkari Thorium Vein - Thorium Ore (#17241/10620)"
    { 9500142, 12365 }, // "Gathersanity Item: Hakkari Thorium Vein - Dense Stone (#17241/12365)"
    { 9500143, 19774 }, // "Gathersanity Item: Hakkari Thorium Vein - Souldarite (#17241/19774)"
    { 9500144, 3864 }, // "Gathersanity Item: Truesilver Deposit - Citrine (#17938/3864)"
    { 9500145, 7909 }, // "Gathersanity Item: Truesilver Deposit - Aquamarine (#17938/7909)"
    { 9500146, 7910 }, // "Gathersanity Item: Truesilver Deposit - Star Ruby (#17938/7910)"
    { 9500147, 7911 }, // "Gathersanity Item: Truesilver Deposit - Truesilver Ore (#17938/7911)"
    { 9500148, 11513 }, // "Gathersanity Item: Truesilver Deposit - Tainted Vitriol (#17938/11513)"
    { 9500149, 1705 }, // "Gathersanity Item: Gold Vein - Lesser Moonstone (#17939/1705)"
    { 9500150, 2776 }, // "Gathersanity Item: Gold Vein - Gold Ore (#17939/2776)"
    { 9500151, 3864 }, // "Gathersanity Item: Gold Vein - Citrine (#17939/3864)"
    { 9500152, 7909 }, // "Gathersanity Item: Gold Vein - Aquamarine (#17939/7909)"
    { 9500153, 774 }, // "Gathersanity Item: Copper Vein - Malachite (#18092/774)"
    { 9500154, 818 }, // "Gathersanity Item: Copper Vein - Tigerseye (#18092/818)"
    { 9500155, 1210 }, // "Gathersanity Item: Copper Vein - Shadowgem (#18092/1210)"
    { 9500156, 2770 }, // "Gathersanity Item: Copper Vein - Copper Ore (#18092/2770)"
    { 9500157, 2835 }, // "Gathersanity Item: Copper Vein - Rough Stone (#18092/2835)"
    { 9500158, 1206 }, // "Gathersanity Item: Tin Vein - Moss Agate (#18093/1206)"
    { 9500159, 1210 }, // "Gathersanity Item: Tin Vein - Shadowgem (#18093/1210)"
    { 9500160, 1529 }, // "Gathersanity Item: Tin Vein - Jade (#18093/1529)"
    { 9500161, 1705 }, // "Gathersanity Item: Tin Vein - Lesser Moonstone (#18093/1705)"
    { 9500162, 2771 }, // "Gathersanity Item: Tin Vein - Tin Ore (#18093/2771)"
    { 9500163, 2836 }, // "Gathersanity Item: Tin Vein - Coarse Stone (#18093/2836)"
    { 9500164, 22575 }, // "Gathersanity Item: Felweed - Mote of Life (#18111/22575)"
    { 9500165, 22785 }, // "Gathersanity Item: Felweed - Felweed (#18111/22785)"
    { 9500166, 22794 }, // "Gathersanity Item: Felweed - Fel Lotus (#18111/22794)"
    { 9500167, 22795 }, // "Gathersanity Item: Felweed - Fel Blossom (#18111/22795)"
    { 9500168, 22575 }, // "Gathersanity Item: Dreaming Glory - Mote of Life (#18112/22575)"
    { 9500169, 22786 }, // "Gathersanity Item: Dreaming Glory - Dreaming Glory (#18112/22786)"
    { 9500170, 22794 }, // "Gathersanity Item: Dreaming Glory - Fel Lotus (#18112/22794)"
    { 9500171, 22575 }, // "Gathersanity Item: Ragveil - Mote of Life (#18113/22575)"
    { 9500172, 22787 }, // "Gathersanity Item: Ragveil - Ragveil (#18113/22787)"
    { 9500173, 22794 }, // "Gathersanity Item: Ragveil - Fel Lotus (#18113/22794)"
    { 9500174, 22788 }, // "Gathersanity Item: Flame Cap - Flame Cap (#18114/22788)"
    { 9500175, 22794 }, // "Gathersanity Item: Flame Cap - Fel Lotus (#18114/22794)"
    { 9500176, 22575 }, // "Gathersanity Item: Terocone - Mote of Life (#18115/22575)"
    { 9500177, 22789 }, // "Gathersanity Item: Terocone - Terocone (#18115/22789)"
    { 9500178, 22794 }, // "Gathersanity Item: Terocone - Fel Lotus (#18115/22794)"
    { 9500179, 22790 }, // "Gathersanity Item: Ancient Lichen - Ancient Lichen (#18116/22790)"
    { 9500180, 22794 }, // "Gathersanity Item: Ancient Lichen - Fel Lotus (#18116/22794)"
    { 9500181, 22576 }, // "Gathersanity Item: Netherbloom - Mote of Mana (#18117/22576)"
    { 9500182, 22791 }, // "Gathersanity Item: Netherbloom - Netherbloom (#18117/22791)"
    { 9500183, 22794 }, // "Gathersanity Item: Netherbloom - Fel Lotus (#18117/22794)"
    { 9500184, 22575 }, // "Gathersanity Item: Nightmare Vine - Mote of Life (#18118/22575)"
    { 9500185, 22792 }, // "Gathersanity Item: Nightmare Vine - Nightmare Vine (#18118/22792)"
    { 9500186, 22794 }, // "Gathersanity Item: Nightmare Vine - Fel Lotus (#18118/22794)"
    { 9500187, 22575 }, // "Gathersanity Item: Mana Thistle - Mote of Life (#18119/22575)"
    { 9500188, 22793 }, // "Gathersanity Item: Mana Thistle - Mana Thistle (#18119/22793)"
    { 9500189, 22794 }, // "Gathersanity Item: Mana Thistle - Fel Lotus (#18119/22794)"
    { 9500190, 22573 }, // "Gathersanity Item: Fel Iron Deposit - Mote of Earth (#18359/22573)"
    { 9500191, 22574 }, // "Gathersanity Item: Fel Iron Deposit - Mote of Fire (#18359/22574)"
    { 9500192, 23424 }, // "Gathersanity Item: Fel Iron Deposit - Fel Iron Ore (#18359/23424)"
    { 9500193, 23427 }, // "Gathersanity Item: Fel Iron Deposit - Eternium Ore (#18359/23427)"
    { 9500194, 22573 }, // "Gathersanity Item: Adamantite Deposit - Mote of Earth (#18361/22573)"
    { 9500195, 23425 }, // "Gathersanity Item: Adamantite Deposit - Adamantite Ore (#18361/23425)"
    { 9500196, 23427 }, // "Gathersanity Item: Adamantite Deposit - Eternium Ore (#18361/23427)"
    { 9500197, 22573 }, // "Gathersanity Item: Khorium Vein - Mote of Earth (#18363/22573)"
    { 9500198, 22574 }, // "Gathersanity Item: Khorium Vein - Mote of Fire (#18363/22574)"
    { 9500199, 23426 }, // "Gathersanity Item: Khorium Vein - Khorium Ore (#18363/23426)"
    { 9500200, 23427 }, // "Gathersanity Item: Khorium Vein - Eternium Ore (#18363/23427)"
    { 9500201, 22575 }, // "Gathersanity Item: Ragveil - Mote of Life (#19627/22575)"
    { 9500202, 22787 }, // "Gathersanity Item: Ragveil - Ragveil (#19627/22787)"
    { 9500203, 22794 }, // "Gathersanity Item: Ragveil - Fel Lotus (#19627/22794)"
    { 9500204, 24401 }, // "Gathersanity Item: Ragveil - Unidentified Plant Parts (#19627/24401)"
    { 9500205, 22575 }, // "Gathersanity Item: Felweed - Mote of Life (#19628/22575)"
    { 9500206, 22785 }, // "Gathersanity Item: Felweed - Felweed (#19628/22785)"
    { 9500207, 22794 }, // "Gathersanity Item: Felweed - Fel Lotus (#19628/22794)"
    { 9500208, 24401 }, // "Gathersanity Item: Felweed - Unidentified Plant Parts (#19628/24401)"
    { 9500209, 22575 }, // "Gathersanity Item: Dreaming Glory - Mote of Life (#19629/22575)"
    { 9500210, 22786 }, // "Gathersanity Item: Dreaming Glory - Dreaming Glory (#19629/22786)"
    { 9500211, 22794 }, // "Gathersanity Item: Dreaming Glory - Fel Lotus (#19629/22794)"
    { 9500212, 24401 }, // "Gathersanity Item: Dreaming Glory - Unidentified Plant Parts (#19629/24401)"
    { 9500213, 8839 }, // "Gathersanity Item: Blindweed - Blindweed (#19630/8839)"
    { 9500214, 24401 }, // "Gathersanity Item: Blindweed - Unidentified Plant Parts (#19630/24401)"
    { 9500215, 24246 }, // "Gathersanity Item: Sanguine Hibiscus - Sanguine Hibiscus (#19848/24246)"
    { 9500216, 22573 }, // "Gathersanity Item: Nethercite Deposit - Mote of Earth (#22070/22573)"
    { 9500217, 22574 }, // "Gathersanity Item: Nethercite Deposit - Mote of Fire (#22070/22574)"
    { 9500218, 32464 }, // "Gathersanity Item: Nethercite Deposit - Nethercite Ore (#22070/32464)"
    { 9500219, 32506 }, // "Gathersanity Item: Nethercite Deposit - Netherwing Egg (#22070/32506)"
    { 9500220, 22576 }, // "Gathersanity Item: Netherdust Bush - Mote of Mana (#22071/22576)"
    { 9500221, 22794 }, // "Gathersanity Item: Netherdust Bush - Fel Lotus (#22071/22794)"
    { 9500222, 32468 }, // "Gathersanity Item: Netherdust Bush - Netherdust Pollen (#22071/32468)"
    { 9500223, 32506 }, // "Gathersanity Item: Netherdust Bush - Netherwing Egg (#22071/32506)"
    { 9500224, 36901 }, // "Gathersanity Item: Goldclover - Goldclover (#24093/36901)"
    { 9500225, 36908 }, // "Gathersanity Item: Goldclover - Frost Lotus (#24093/36908)"
    { 9500226, 37704 }, // "Gathersanity Item: Goldclover - Crystallized Life (#24093/37704)"
    { 9500227, 37921 }, // "Gathersanity Item: Goldclover - Deadnettle (#24093/37921)"
    { 9500228, 36909 }, // "Gathersanity Item: Cobalt Deposit - Cobalt Ore (#24153/36909)"
    { 9500229, 37701 }, // "Gathersanity Item: Cobalt Deposit - Crystallized Earth (#24153/37701)"
    { 9500230, 37705 }, // "Gathersanity Item: Cobalt Deposit - Crystallized Water (#24153/37705)"
    { 9500231, 36909 }, // "Gathersanity Item: Rich Cobalt Deposit - Cobalt Ore (#24154/36909)"
    { 9500232, 37701 }, // "Gathersanity Item: Rich Cobalt Deposit - Crystallized Earth (#24154/37701)"
    { 9500233, 37705 }, // "Gathersanity Item: Rich Cobalt Deposit - Crystallized Water (#24154/37705)"
    { 9500234, 36912 }, // "Gathersanity Item: Saronite Deposit - Saronite Ore (#24155/36912)"
    { 9500235, 37701 }, // "Gathersanity Item: Saronite Deposit - Crystallized Earth (#24155/37701)"
    { 9500236, 37703 }, // "Gathersanity Item: Saronite Deposit - Crystallized Shadow (#24155/37703)"
    { 9500237, 36912 }, // "Gathersanity Item: Rich Saronite Deposit - Saronite Ore (#24156/36912)"
    { 9500238, 37701 }, // "Gathersanity Item: Rich Saronite Deposit - Crystallized Earth (#24156/37701)"
    { 9500239, 37703 }, // "Gathersanity Item: Rich Saronite Deposit - Crystallized Shadow (#24156/37703)"
    { 9500240, 36910 }, // "Gathersanity Item: Titanium Vein - Titanium Ore (#24157/36910)"
    { 9500241, 37700 }, // "Gathersanity Item: Titanium Vein - Crystallized Air (#24157/37700)"
    { 9500242, 37701 }, // "Gathersanity Item: Titanium Vein - Crystallized Earth (#24157/37701)"
    { 9500243, 37702 }, // "Gathersanity Item: Titanium Vein - Crystallized Fire (#24157/37702)"
    { 9500244, 37705 }, // "Gathersanity Item: Titanium Vein - Crystallized Water (#24157/37705)"
    { 9500245, 36904 }, // "Gathersanity Item: Tiger Lily - Tiger Lily (#24224/36904)"
    { 9500246, 36908 }, // "Gathersanity Item: Tiger Lily - Frost Lotus (#24224/36908)"
    { 9500247, 37704 }, // "Gathersanity Item: Tiger Lily - Crystallized Life (#24224/37704)"
    { 9500248, 37921 }, // "Gathersanity Item: Tiger Lily - Deadnettle (#24224/37921)"
    { 9500249, 36907 }, // "Gathersanity Item: Talandra's Rose - Talandra's Rose (#24225/36907)"
    { 9500250, 36908 }, // "Gathersanity Item: Talandra's Rose - Frost Lotus (#24225/36908)"
    { 9500251, 37704 }, // "Gathersanity Item: Talandra's Rose - Crystallized Life (#24225/37704)"
    { 9500252, 37921 }, // "Gathersanity Item: Talandra's Rose - Deadnettle (#24225/37921)"
    { 9500253, 36905 }, // "Gathersanity Item: Lichbloom - Lichbloom (#24226/36905)"
    { 9500254, 36908 }, // "Gathersanity Item: Lichbloom - Frost Lotus (#24226/36908)"
    { 9500255, 37704 }, // "Gathersanity Item: Lichbloom - Crystallized Life (#24226/37704)"
    { 9500256, 36906 }, // "Gathersanity Item: Icethorn - Icethorn (#24227/36906)"
    { 9500257, 36908 }, // "Gathersanity Item: Icethorn - Frost Lotus (#24227/36908)"
    { 9500258, 37704 }, // "Gathersanity Item: Icethorn - Crystallized Life (#24227/37704)"
    { 9500259, 36908 }, // "Gathersanity Item: Frost Lotus - Frost Lotus (#24228/36908)"
    { 9500260, 37704 }, // "Gathersanity Item: Frost Lotus - Crystallized Life (#24228/37704)"
    { 9500261, 37921 }, // "Gathersanity Item: Frost Lotus - Deadnettle (#24228/37921)"
    { 9500262, 36908 }, // "Gathersanity Item: Firethorn - Frost Lotus (#25089/36908)"
    { 9500263, 37704 }, // "Gathersanity Item: Firethorn - Crystallized Life (#25089/37704)"
    { 9500264, 39969 }, // "Gathersanity Item: Firethorn - Fire Seed (#25089/39969)"
    { 9500265, 39970 }, // "Gathersanity Item: Firethorn - Fire Leaf (#25089/39970)"
    { 9500266, 36903 }, // "Gathersanity Item: Adder's Tongue - Adder's Tongue (#25093/36903)"
    { 9500267, 36908 }, // "Gathersanity Item: Adder's Tongue - Frost Lotus (#25093/36908)"
    { 9500268, 37704 }, // "Gathersanity Item: Adder's Tongue - Crystallized Life (#25093/37704)"
    { 9500269, 36901 }, // "Gathersanity Item: Frozen Herb - Goldclover (#25094/36901)"
    { 9500270, 36904 }, // "Gathersanity Item: Frozen Herb - Tiger Lily (#25094/36904)"
    { 9500271, 36907 }, // "Gathersanity Item: Frozen Herb - Talandra's Rose (#25094/36907)"
    { 9500272, 36901 }, // "Gathersanity Item: Frozen Herb - Goldclover (#25095/36901)"
    { 9500273, 36904 }, // "Gathersanity Item: Frozen Herb - Tiger Lily (#25095/36904)"
    { 9500274, 36907 }, // "Gathersanity Item: Frozen Herb - Talandra's Rose (#25095/36907)"
    { 9500275, 36901 }, // "Gathersanity Item: Frozen Herb - Goldclover (#25096/36901)"
    { 9500276, 36904 }, // "Gathersanity Item: Frozen Herb - Tiger Lily (#25096/36904)"
    { 9500277, 36907 }, // "Gathersanity Item: Frozen Herb - Talandra's Rose (#25096/36907)"
    { 9500278, 22573 }, // "Gathersanity Item: Rich Adamantite Deposit - Mote of Earth (#26861/22573)"
    { 9500279, 23425 }, // "Gathersanity Item: Rich Adamantite Deposit - Adamantite Ore (#26861/23425)"
    { 9500280, 23427 }, // "Gathersanity Item: Rich Adamantite Deposit - Eternium Ore (#26861/23427)"
    { 9500281, 35624 }, // "Gathersanity Item: Pure Saronite Deposit - Eternal Earth (#27244/35624)"
    { 9500282, 35627 }, // "Gathersanity Item: Pure Saronite Deposit - Eternal Shadow (#27244/35627)"
    { 9500283, 36912 }, // "Gathersanity Item: Pure Saronite Deposit - Saronite Ore (#27244/36912)"
    { 9500284, 4304 }, // "Gathersanity Item: Thick Leather (skinning #193/4304)"
    { 9500285, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #193/8165)"
    { 9500286, 8169 }, // "Gathersanity Item: Thick Hide (skinning #193/8169)"
    { 9500287, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #193/8170)"
    { 9500288, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #193/8171)"
    { 9500289, 15415 }, // "Gathersanity Item: Blue Dragonscale (skinning #193/15415)"
    { 9500290, 783 }, // "Gathersanity Item: Light Hide (skinning #441/783)"
    { 9500291, 2318 }, // "Gathersanity Item: Light Leather (skinning #441/2318)"
    { 9500292, 4232 }, // "Gathersanity Item: Medium Hide (skinning #441/4232)"
    { 9500293, 7286 }, // "Gathersanity Item: Black Whelp Scale (skinning #441/7286)"
    { 9500294, 2319 }, // "Gathersanity Item: Medium Leather (skinning #534/2319)"
    { 9500295, 4232 }, // "Gathersanity Item: Medium Hide (skinning #534/4232)"
    { 9500296, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #534/4234)"
    { 9500297, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #534/4235)"
    { 9500298, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #684/4234)"
    { 9500299, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #684/4235)"
    { 9500300, 4304 }, // "Gathersanity Item: Thick Leather (skinning #684/4304)"
    { 9500301, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #729/4234)"
    { 9500302, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #729/4235)"
    { 9500303, 4304 }, // "Gathersanity Item: Thick Leather (skinning #729/4304)"
    { 9500304, 4304 }, // "Gathersanity Item: Thick Leather (skinning #731/4304)"
    { 9500305, 8169 }, // "Gathersanity Item: Thick Hide (skinning #731/8169)"
    { 9500306, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #731/8170)"
    { 9500307, 2319 }, // "Gathersanity Item: Medium Leather (skinning #740/2319)"
    { 9500308, 4232 }, // "Gathersanity Item: Medium Hide (skinning #740/4232)"
    { 9500309, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #740/4234)"
    { 9500310, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #740/4235)"
    { 9500311, 7392 }, // "Gathersanity Item: Green Whelp Scale (skinning #740/7392)"
    { 9500312, 2319 }, // "Gathersanity Item: Medium Leather (skinning #741/2319)"
    { 9500313, 4232 }, // "Gathersanity Item: Medium Hide (skinning #741/4232)"
    { 9500314, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #741/4234)"
    { 9500315, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #741/4235)"
    { 9500316, 7392 }, // "Gathersanity Item: Green Whelp Scale (skinning #741/7392)"
    { 9500317, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #742/4234)"
    { 9500318, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #742/4235)"
    { 9500319, 4304 }, // "Gathersanity Item: Thick Leather (skinning #742/4304)"
    { 9500320, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #742/8165)"
    { 9500321, 8169 }, // "Gathersanity Item: Thick Hide (skinning #742/8169)"
    { 9500322, 15412 }, // "Gathersanity Item: Green Dragonscale (skinning #742/15412)"
    { 9500323, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #743/4234)"
    { 9500324, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #743/4235)"
    { 9500325, 4304 }, // "Gathersanity Item: Thick Leather (skinning #743/4304)"
    { 9500326, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #743/8165)"
    { 9500327, 8169 }, // "Gathersanity Item: Thick Hide (skinning #743/8169)"
    { 9500328, 15412 }, // "Gathersanity Item: Green Dragonscale (skinning #743/15412)"
    { 9500329, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #744/4234)"
    { 9500330, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #744/4235)"
    { 9500331, 4304 }, // "Gathersanity Item: Thick Leather (skinning #744/4304)"
    { 9500332, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #744/8165)"
    { 9500333, 8169 }, // "Gathersanity Item: Thick Hide (skinning #744/8169)"
    { 9500334, 15412 }, // "Gathersanity Item: Green Dragonscale (skinning #744/15412)"
    { 9500335, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #745/4234)"
    { 9500336, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #745/4235)"
    { 9500337, 4304 }, // "Gathersanity Item: Thick Leather (skinning #745/4304)"
    { 9500338, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #745/8165)"
    { 9500339, 8169 }, // "Gathersanity Item: Thick Hide (skinning #745/8169)"
    { 9500340, 15412 }, // "Gathersanity Item: Green Dragonscale (skinning #745/15412)"
    { 9500341, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #746/4234)"
    { 9500342, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #746/4235)"
    { 9500343, 4304 }, // "Gathersanity Item: Thick Leather (skinning #746/4304)"
    { 9500344, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #746/8165)"
    { 9500345, 8169 }, // "Gathersanity Item: Thick Hide (skinning #746/8169)"
    { 9500346, 15412 }, // "Gathersanity Item: Green Dragonscale (skinning #746/15412)"
    { 9500347, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #768/4234)"
    { 9500348, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #768/4235)"
    { 9500349, 4304 }, // "Gathersanity Item: Thick Leather (skinning #768/4304)"
    { 9500350, 17057 }, // "Gathersanity Item: Shiny Fish Scales (skinning #905/17057)"
    { 9500351, 2319 }, // "Gathersanity Item: Medium Leather (skinning #976/2319)"
    { 9500352, 4232 }, // "Gathersanity Item: Medium Hide (skinning #976/4232)"
    { 9500353, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #976/4234)"
    { 9500354, 2319 }, // "Gathersanity Item: Medium Leather (skinning #977/2319)"
    { 9500355, 4232 }, // "Gathersanity Item: Medium Hide (skinning #977/4232)"
    { 9500356, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #977/4234)"
    { 9500357, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #977/4235)"
    { 9500358, 2319 }, // "Gathersanity Item: Medium Leather (skinning #1044/2319)"
    { 9500359, 4232 }, // "Gathersanity Item: Medium Hide (skinning #1044/4232)"
    { 9500360, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #1044/4234)"
    { 9500361, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #1044/4235)"
    { 9500362, 7287 }, // "Gathersanity Item: Red Whelp Scale (skinning #1044/7287)"
    { 9500363, 4304 }, // "Gathersanity Item: Thick Leather (skinning #1045/4304)"
    { 9500364, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #1045/8165)"
    { 9500365, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #1045/8170)"
    { 9500366, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #1045/8171)"
    { 9500367, 15414 }, // "Gathersanity Item: Red Dragonscale (skinning #1045/15414)"
    { 9500368, 4304 }, // "Gathersanity Item: Thick Leather (skinning #1046/4304)"
    { 9500369, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #1046/8165)"
    { 9500370, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #1046/8170)"
    { 9500371, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #1046/8171)"
    { 9500372, 15414 }, // "Gathersanity Item: Red Dragonscale (skinning #1046/15414)"
    { 9500373, 4304 }, // "Gathersanity Item: Thick Leather (skinning #1047/4304)"
    { 9500374, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #1047/8165)"
    { 9500375, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #1047/8170)"
    { 9500376, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #1047/8171)"
    { 9500377, 15414 }, // "Gathersanity Item: Red Dragonscale (skinning #1047/15414)"
    { 9500378, 4304 }, // "Gathersanity Item: Thick Leather (skinning #1048/4304)"
    { 9500379, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #1048/8165)"
    { 9500380, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #1048/8170)"
    { 9500381, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #1048/8171)"
    { 9500382, 15414 }, // "Gathersanity Item: Red Dragonscale (skinning #1048/15414)"
    { 9500383, 4304 }, // "Gathersanity Item: Thick Leather (skinning #1049/4304)"
    { 9500384, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #1049/8165)"
    { 9500385, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #1049/8170)"
    { 9500386, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #1049/8171)"
    { 9500387, 15414 }, // "Gathersanity Item: Red Dragonscale (skinning #1049/15414)"
    { 9500388, 4304 }, // "Gathersanity Item: Thick Leather (skinning #1050/4304)"
    { 9500389, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #1050/8165)"
    { 9500390, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #1050/8170)"
    { 9500391, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #1050/8171)"
    { 9500392, 15414 }, // "Gathersanity Item: Red Dragonscale (skinning #1050/15414)"
    { 9500393, 4304 }, // "Gathersanity Item: Thick Leather (skinning #1063/4304)"
    { 9500394, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #1063/8170)"
    { 9500395, 15412 }, // "Gathersanity Item: Green Dragonscale (skinning #1063/15412)"
    { 9500396, 17057 }, // "Gathersanity Item: Shiny Fish Scales (skinning #1193/17057)"
    { 9500397, 783 }, // "Gathersanity Item: Light Hide (skinning #1388/783)"
    { 9500398, 2318 }, // "Gathersanity Item: Light Leather (skinning #1388/2318)"
    { 9500399, 2934 }, // "Gathersanity Item: Ruined Leather Scraps (skinning #1388/2934)"
    { 9500400, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #1552/4234)"
    { 9500401, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #1552/4235)"
    { 9500402, 4304 }, // "Gathersanity Item: Thick Leather (skinning #1552/4304)"
    { 9500403, 4304 }, // "Gathersanity Item: Thick Leather (skinning #1559/4304)"
    { 9500404, 8169 }, // "Gathersanity Item: Thick Hide (skinning #1559/8169)"
    { 9500405, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #1559/8170)"
    { 9500406, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #1559/8171)"
    { 9500407, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #1713/4234)"
    { 9500408, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #1713/4235)"
    { 9500409, 4304 }, // "Gathersanity Item: Thick Leather (skinning #1713/4304)"
    { 9500410, 4304 }, // "Gathersanity Item: Thick Leather (skinning #1815/4304)"
    { 9500411, 8169 }, // "Gathersanity Item: Thick Hide (skinning #1815/8169)"
    { 9500412, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #1815/8170)"
    { 9500413, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #1815/8171)"
    { 9500414, 15419 }, // "Gathersanity Item: Warbear Leather (skinning #1815/15419)"
    { 9500415, 4304 }, // "Gathersanity Item: Thick Leather (skinning #1816/4304)"
    { 9500416, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #1816/8170)"
    { 9500417, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #1816/8171)"
    { 9500418, 15419 }, // "Gathersanity Item: Warbear Leather (skinning #1816/15419)"
    { 9500419, 4304 }, // "Gathersanity Item: Thick Leather (skinning #1817/4304)"
    { 9500420, 8169 }, // "Gathersanity Item: Thick Hide (skinning #1817/8169)"
    { 9500421, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #1817/8170)"
    { 9500422, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #1817/8171)"
    { 9500423, 783 }, // "Gathersanity Item: Light Hide (skinning #1891/783)"
    { 9500424, 2318 }, // "Gathersanity Item: Light Leather (skinning #1891/2318)"
    { 9500425, 2934 }, // "Gathersanity Item: Ruined Leather Scraps (skinning #1891/2934)"
    { 9500426, 783 }, // "Gathersanity Item: Light Hide (skinning #1894/783)"
    { 9500427, 2318 }, // "Gathersanity Item: Light Leather (skinning #1894/2318)"
    { 9500428, 2934 }, // "Gathersanity Item: Ruined Leather Scraps (skinning #1894/2934)"
    { 9500429, 783 }, // "Gathersanity Item: Light Hide (skinning #1895/783)"
    { 9500430, 2318 }, // "Gathersanity Item: Light Leather (skinning #1895/2318)"
    { 9500431, 2934 }, // "Gathersanity Item: Ruined Leather Scraps (skinning #1895/2934)"
    { 9500432, 2318 }, // "Gathersanity Item: Light Leather (skinning #1933/2318)"
    { 9500433, 2592 }, // "Gathersanity Item: Wool Cloth (skinning #1933/2592)"
    { 9500434, 2934 }, // "Gathersanity Item: Ruined Leather Scraps (skinning #1933/2934)"
    { 9500435, 17057 }, // "Gathersanity Item: Shiny Fish Scales (skinning #2173/17057)"
    { 9500436, 17057 }, // "Gathersanity Item: Shiny Fish Scales (skinning #2174/17057)"
    { 9500437, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #2347/4234)"
    { 9500438, 4304 }, // "Gathersanity Item: Thick Leather (skinning #2347/4304)"
    { 9500439, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #2447/4234)"
    { 9500440, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #2447/4235)"
    { 9500441, 4304 }, // "Gathersanity Item: Thick Leather (skinning #2447/4304)"
    { 9500442, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #2447/8165)"
    { 9500443, 8169 }, // "Gathersanity Item: Thick Hide (skinning #2447/8169)"
    { 9500444, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #2452/4234)"
    { 9500445, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #2452/4235)"
    { 9500446, 4304 }, // "Gathersanity Item: Thick Leather (skinning #2452/4304)"
    { 9500447, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #2474/4234)"
    { 9500448, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #2474/4235)"
    { 9500449, 4304 }, // "Gathersanity Item: Thick Leather (skinning #2474/4304)"
    { 9500450, 4304 }, // "Gathersanity Item: Thick Leather (skinning #2505/4304)"
    { 9500451, 8167 }, // "Gathersanity Item: Turtle Scale (skinning #2505/8167)"
    { 9500452, 8169 }, // "Gathersanity Item: Thick Hide (skinning #2505/8169)"
    { 9500453, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #2505/8170)"
    { 9500454, 4304 }, // "Gathersanity Item: Thick Leather (skinning #2521/4304)"
    { 9500455, 8169 }, // "Gathersanity Item: Thick Hide (skinning #2521/8169)"
    { 9500456, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #2521/8170)"
    { 9500457, 4304 }, // "Gathersanity Item: Thick Leather (skinning #2522/4304)"
    { 9500458, 8169 }, // "Gathersanity Item: Thick Hide (skinning #2522/8169)"
    { 9500459, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #2522/8170)"
    { 9500460, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #2635/4234)"
    { 9500461, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #2635/4235)"
    { 9500462, 4304 }, // "Gathersanity Item: Thick Leather (skinning #2635/4304)"
    { 9500463, 4304 }, // "Gathersanity Item: Thick Leather (skinning #2659/4304)"
    { 9500464, 8169 }, // "Gathersanity Item: Thick Hide (skinning #2659/8169)"
    { 9500465, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #2659/8170)"
    { 9500466, 4304 }, // "Gathersanity Item: Thick Leather (skinning #2680/4304)"
    { 9500467, 8169 }, // "Gathersanity Item: Thick Hide (skinning #2680/8169)"
    { 9500468, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #2680/8170)"
    { 9500469, 4304 }, // "Gathersanity Item: Thick Leather (skinning #2681/4304)"
    { 9500470, 8169 }, // "Gathersanity Item: Thick Hide (skinning #2681/8169)"
    { 9500471, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #2681/8170)"
    { 9500472, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #2725/4234)"
    { 9500473, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #2725/4235)"
    { 9500474, 4304 }, // "Gathersanity Item: Thick Leather (skinning #2725/4304)"
    { 9500475, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #2725/8165)"
    { 9500476, 8169 }, // "Gathersanity Item: Thick Hide (skinning #2725/8169)"
    { 9500477, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #2726/4234)"
    { 9500478, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #2726/4235)"
    { 9500479, 4304 }, // "Gathersanity Item: Thick Leather (skinning #2726/4304)"
    { 9500480, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #2726/8165)"
    { 9500481, 8169 }, // "Gathersanity Item: Thick Hide (skinning #2726/8169)"
    { 9500482, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #2730/4234)"
    { 9500483, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #2730/4235)"
    { 9500484, 4304 }, // "Gathersanity Item: Thick Leather (skinning #2730/4304)"
    { 9500485, 8169 }, // "Gathersanity Item: Thick Hide (skinning #2730/8169)"
    { 9500486, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #2753/4234)"
    { 9500487, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #2753/4235)"
    { 9500488, 4304 }, // "Gathersanity Item: Thick Leather (skinning #2753/4304)"
    { 9500489, 4304 }, // "Gathersanity Item: Thick Leather (skinning #2757/4304)"
    { 9500490, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #2757/8170)"
    { 9500491, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #2757/8171)"
    { 9500492, 4304 }, // "Gathersanity Item: Thick Leather (skinning #2759/4304)"
    { 9500493, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #2759/8170)"
    { 9500494, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #2759/8171)"
    { 9500495, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #2850/4234)"
    { 9500496, 4304 }, // "Gathersanity Item: Thick Leather (skinning #2850/4304)"
    { 9500497, 8169 }, // "Gathersanity Item: Thick Hide (skinning #2850/8169)"
    { 9500498, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #2923/4234)"
    { 9500499, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #2923/4235)"
    { 9500500, 4304 }, // "Gathersanity Item: Thick Leather (skinning #2923/4304)"
    { 9500501, 8169 }, // "Gathersanity Item: Thick Hide (skinning #2923/8169)"
    { 9500502, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #2924/4234)"
    { 9500503, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #2924/4235)"
    { 9500504, 4304 }, // "Gathersanity Item: Thick Leather (skinning #2924/4304)"
    { 9500505, 8169 }, // "Gathersanity Item: Thick Hide (skinning #2924/8169)"
    { 9500506, 4304 }, // "Gathersanity Item: Thick Leather (skinning #2925/4304)"
    { 9500507, 8169 }, // "Gathersanity Item: Thick Hide (skinning #2925/8169)"
    { 9500508, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #2925/8170)"
    { 9500509, 4304 }, // "Gathersanity Item: Thick Leather (skinning #2926/4304)"
    { 9500510, 8169 }, // "Gathersanity Item: Thick Hide (skinning #2926/8169)"
    { 9500511, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #2926/8170)"
    { 9500512, 2318 }, // "Gathersanity Item: Light Leather (skinning #3529/2318)"
    { 9500513, 2934 }, // "Gathersanity Item: Ruined Leather Scraps (skinning #3529/2934)"
    { 9500514, 783 }, // "Gathersanity Item: Light Hide (skinning #3530/783)"
    { 9500515, 2318 }, // "Gathersanity Item: Light Leather (skinning #3530/2318)"
    { 9500516, 2934 }, // "Gathersanity Item: Ruined Leather Scraps (skinning #3530/2934)"
    { 9500517, 783 }, // "Gathersanity Item: Light Hide (skinning #3532/783)"
    { 9500518, 2318 }, // "Gathersanity Item: Light Leather (skinning #3532/2318)"
    { 9500519, 2934 }, // "Gathersanity Item: Ruined Leather Scraps (skinning #3533/2934)"
    { 9500520, 783 }, // "Gathersanity Item: Light Hide (skinning #3619/783)"
    { 9500521, 2318 }, // "Gathersanity Item: Light Leather (skinning #3619/2318)"
    { 9500522, 2319 }, // "Gathersanity Item: Medium Leather (skinning #3619/2319)"
    { 9500523, 2318 }, // "Gathersanity Item: Light Leather (skinning #3652/2318)"
    { 9500524, 2319 }, // "Gathersanity Item: Medium Leather (skinning #3652/2319)"
    { 9500525, 2319 }, // "Gathersanity Item: Medium Leather (skinning #3674/2319)"
    { 9500526, 4232 }, // "Gathersanity Item: Medium Hide (skinning #3674/4232)"
    { 9500527, 2318 }, // "Gathersanity Item: Light Leather (skinning #3722/2318)"
    { 9500528, 2319 }, // "Gathersanity Item: Medium Leather (skinning #3722/2319)"
    { 9500529, 4232 }, // "Gathersanity Item: Medium Hide (skinning #3722/4232)"
    { 9500530, 2319 }, // "Gathersanity Item: Medium Leather (skinning #3792/2319)"
    { 9500531, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #3792/4234)"
    { 9500532, 2319 }, // "Gathersanity Item: Medium Leather (skinning #4066/2319)"
    { 9500533, 4232 }, // "Gathersanity Item: Medium Hide (skinning #4066/4232)"
    { 9500534, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #4066/4234)"
    { 9500535, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #4066/4235)"
    { 9500536, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #4323/4234)"
    { 9500537, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #4323/4235)"
    { 9500538, 4304 }, // "Gathersanity Item: Thick Leather (skinning #4323/4304)"
    { 9500539, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #4323/8165)"
    { 9500540, 8169 }, // "Gathersanity Item: Thick Hide (skinning #4323/8169)"
    { 9500541, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #4324/4234)"
    { 9500542, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #4324/4235)"
    { 9500543, 4304 }, // "Gathersanity Item: Thick Leather (skinning #4324/4304)"
    { 9500544, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #4324/8165)"
    { 9500545, 8169 }, // "Gathersanity Item: Thick Hide (skinning #4324/8169)"
    { 9500546, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #4328/4234)"
    { 9500547, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #4328/4235)"
    { 9500548, 4304 }, // "Gathersanity Item: Thick Leather (skinning #4328/4304)"
    { 9500549, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #4328/8165)"
    { 9500550, 8169 }, // "Gathersanity Item: Thick Hide (skinning #4328/8169)"
    { 9500551, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #4329/4234)"
    { 9500552, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #4329/4235)"
    { 9500553, 4304 }, // "Gathersanity Item: Thick Leather (skinning #4329/4304)"
    { 9500554, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #4329/8165)"
    { 9500555, 8169 }, // "Gathersanity Item: Thick Hide (skinning #4329/8169)"
    { 9500556, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #4331/4234)"
    { 9500557, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #4331/4235)"
    { 9500558, 4304 }, // "Gathersanity Item: Thick Leather (skinning #4331/4304)"
    { 9500559, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #4331/8165)"
    { 9500560, 8169 }, // "Gathersanity Item: Thick Hide (skinning #4331/8169)"
    { 9500561, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #4334/4234)"
    { 9500562, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #4334/4235)"
    { 9500563, 4304 }, // "Gathersanity Item: Thick Leather (skinning #4334/4304)"
    { 9500564, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #4334/8165)"
    { 9500565, 8169 }, // "Gathersanity Item: Thick Hide (skinning #4334/8169)"
    { 9500566, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #4339/4234)"
    { 9500567, 4304 }, // "Gathersanity Item: Thick Leather (skinning #4339/4304)"
    { 9500568, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #4339/8165)"
    { 9500569, 8169 }, // "Gathersanity Item: Thick Hide (skinning #4339/8169)"
    { 9500570, 2319 }, // "Gathersanity Item: Medium Leather (skinning #4346/2319)"
    { 9500571, 4232 }, // "Gathersanity Item: Medium Hide (skinning #4346/4232)"
    { 9500572, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #4346/4234)"
    { 9500573, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #4346/4235)"
    { 9500574, 4304 }, // "Gathersanity Item: Thick Leather (skinning #4374/4304)"
    { 9500575, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #4374/8170)"
    { 9500576, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #4374/8171)"
    { 9500577, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #4390/4234)"
    { 9500578, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #4390/4235)"
    { 9500579, 4304 }, // "Gathersanity Item: Thick Leather (skinning #4390/4304)"
    { 9500580, 8169 }, // "Gathersanity Item: Thick Hide (skinning #4390/8169)"
    { 9500581, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #4396/4234)"
    { 9500582, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #4396/4235)"
    { 9500583, 4304 }, // "Gathersanity Item: Thick Leather (skinning #4396/4304)"
    { 9500584, 8167 }, // "Gathersanity Item: Turtle Scale (skinning #4396/8167)"
    { 9500585, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #4397/4234)"
    { 9500586, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #4397/4235)"
    { 9500587, 4304 }, // "Gathersanity Item: Thick Leather (skinning #4397/4304)"
    { 9500588, 8167 }, // "Gathersanity Item: Turtle Scale (skinning #4397/8167)"
    { 9500589, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #4398/4234)"
    { 9500590, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #4398/4235)"
    { 9500591, 4304 }, // "Gathersanity Item: Thick Leather (skinning #4398/4304)"
    { 9500592, 8167 }, // "Gathersanity Item: Turtle Scale (skinning #4398/8167)"
    { 9500593, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #4399/4234)"
    { 9500594, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #4399/4235)"
    { 9500595, 4304 }, // "Gathersanity Item: Thick Leather (skinning #4399/4304)"
    { 9500596, 8167 }, // "Gathersanity Item: Turtle Scale (skinning #4399/8167)"
    { 9500597, 8169 }, // "Gathersanity Item: Thick Hide (skinning #4399/8169)"
    { 9500598, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #4400/4234)"
    { 9500599, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #4400/4235)"
    { 9500600, 4304 }, // "Gathersanity Item: Thick Leather (skinning #4400/4304)"
    { 9500601, 8167 }, // "Gathersanity Item: Turtle Scale (skinning #4400/8167)"
    { 9500602, 8169 }, // "Gathersanity Item: Thick Hide (skinning #4400/8169)"
    { 9500603, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #4422/4234)"
    { 9500604, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #4422/4235)"
    { 9500605, 2319 }, // "Gathersanity Item: Medium Leather (skinning #4425/2319)"
    { 9500606, 4232 }, // "Gathersanity Item: Medium Hide (skinning #4425/4232)"
    { 9500607, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #4425/4234)"
    { 9500608, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #4504/4234)"
    { 9500609, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #4504/4235)"
    { 9500610, 4304 }, // "Gathersanity Item: Thick Leather (skinning #4504/4304)"
    { 9500611, 2319 }, // "Gathersanity Item: Medium Leather (skinning #4512/2319)"
    { 9500612, 4232 }, // "Gathersanity Item: Medium Hide (skinning #4512/4232)"
    { 9500613, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #4512/4234)"
    { 9500614, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #4512/4235)"
    { 9500615, 2319 }, // "Gathersanity Item: Medium Leather (skinning #4539/2319)"
    { 9500616, 4232 }, // "Gathersanity Item: Medium Hide (skinning #4539/4232)"
    { 9500617, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #4539/4234)"
    { 9500618, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #4539/4235)"
    { 9500619, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #4660/4234)"
    { 9500620, 4304 }, // "Gathersanity Item: Thick Leather (skinning #4660/4304)"
    { 9500621, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #4830/4234)"
    { 9500622, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #4830/4235)"
    { 9500623, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #4861/4234)"
    { 9500624, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #4861/4235)"
    { 9500625, 4304 }, // "Gathersanity Item: Thick Leather (skinning #4861/4304)"
    { 9500626, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #4863/4234)"
    { 9500627, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #4863/4235)"
    { 9500628, 4304 }, // "Gathersanity Item: Thick Leather (skinning #4863/4304)"
    { 9500629, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5225/4304)"
    { 9500630, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5225/8169)"
    { 9500631, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #5225/8170)"
    { 9500632, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5226/4304)"
    { 9500633, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5226/8169)"
    { 9500634, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #5226/8170)"
    { 9500635, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5262/4304)"
    { 9500636, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5262/8169)"
    { 9500637, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #5262/8170)"
    { 9500638, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5274/4304)"
    { 9500639, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5274/8169)"
    { 9500640, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #5274/8170)"
    { 9500641, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5276/4304)"
    { 9500642, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #5276/8165)"
    { 9500643, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5276/8169)"
    { 9500644, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #5276/8170)"
    { 9500645, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5277/4304)"
    { 9500646, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #5277/8165)"
    { 9500647, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5277/8169)"
    { 9500648, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #5277/8170)"
    { 9500649, 15412 }, // "Gathersanity Item: Green Dragonscale (skinning #5277/15412)"
    { 9500650, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #5278/4234)"
    { 9500651, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #5278/4235)"
    { 9500652, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5278/4304)"
    { 9500653, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #5278/8165)"
    { 9500654, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5278/8169)"
    { 9500655, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5280/4304)"
    { 9500656, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #5280/8165)"
    { 9500657, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5280/8169)"
    { 9500658, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #5280/8170)"
    { 9500659, 15412 }, // "Gathersanity Item: Green Dragonscale (skinning #5280/15412)"
    { 9500660, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5283/4304)"
    { 9500661, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #5283/8165)"
    { 9500662, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5283/8169)"
    { 9500663, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #5283/8170)"
    { 9500664, 15412 }, // "Gathersanity Item: Green Dragonscale (skinning #5283/15412)"
    { 9500665, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #5286/4234)"
    { 9500666, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #5286/4235)"
    { 9500667, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5286/4304)"
    { 9500668, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5286/8169)"
    { 9500669, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #5287/4234)"
    { 9500670, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #5287/4235)"
    { 9500671, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5287/4304)"
    { 9500672, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5287/8169)"
    { 9500673, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5288/4304)"
    { 9500674, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5288/8169)"
    { 9500675, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #5288/8170)"
    { 9500676, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5291/4304)"
    { 9500677, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5291/8169)"
    { 9500678, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #5291/8170)"
    { 9500679, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #5292/4234)"
    { 9500680, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #5292/4235)"
    { 9500681, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5292/4304)"
    { 9500682, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5292/8169)"
    { 9500683, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #5293/4234)"
    { 9500684, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #5293/4235)"
    { 9500685, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5293/4304)"
    { 9500686, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5293/8169)"
    { 9500687, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #5295/4234)"
    { 9500688, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #5295/4235)"
    { 9500689, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5295/4304)"
    { 9500690, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5295/8169)"
    { 9500691, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5296/4304)"
    { 9500692, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5296/8169)"
    { 9500693, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #5296/8170)"
    { 9500694, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5297/4304)"
    { 9500695, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5297/8169)"
    { 9500696, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #5297/8170)"
    { 9500697, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5299/4304)"
    { 9500698, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5299/8169)"
    { 9500699, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #5299/8170)"
    { 9500700, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5306/4304)"
    { 9500701, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5306/8169)"
    { 9500702, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #5306/8170)"
    { 9500703, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5319/4304)"
    { 9500704, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #5319/8165)"
    { 9500705, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #5319/8170)"
    { 9500706, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #5319/8171)"
    { 9500707, 15412 }, // "Gathersanity Item: Green Dragonscale (skinning #5319/15412)"
    { 9500708, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5320/4304)"
    { 9500709, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #5320/8165)"
    { 9500710, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #5320/8170)"
    { 9500711, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #5320/8171)"
    { 9500712, 15412 }, // "Gathersanity Item: Green Dragonscale (skinning #5320/15412)"
    { 9500713, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5346/4304)"
    { 9500714, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5346/8169)"
    { 9500715, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #5346/8170)"
    { 9500716, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5349/4304)"
    { 9500717, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5349/8169)"
    { 9500718, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #5349/8170)"
    { 9500719, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #5356/4234)"
    { 9500720, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #5356/4235)"
    { 9500721, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5356/4304)"
    { 9500722, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5421/4304)"
    { 9500723, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5421/8169)"
    { 9500724, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #5421/8170)"
    { 9500725, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #5422/4234)"
    { 9500726, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #5422/4235)"
    { 9500727, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5422/4304)"
    { 9500728, 8154 }, // "Gathersanity Item: Scorpid Scale (skinning #5422/8154)"
    { 9500729, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5422/8169)"
    { 9500730, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #5423/4234)"
    { 9500731, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #5423/4235)"
    { 9500732, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5423/4304)"
    { 9500733, 8154 }, // "Gathersanity Item: Scorpid Scale (skinning #5423/8154)"
    { 9500734, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5423/8169)"
    { 9500735, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5424/4304)"
    { 9500736, 8154 }, // "Gathersanity Item: Scorpid Scale (skinning #5424/8154)"
    { 9500737, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5424/8169)"
    { 9500738, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #5424/8170)"
    { 9500739, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5427/4304)"
    { 9500740, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5427/8169)"
    { 9500741, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #5427/8170)"
    { 9500742, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5431/4304)"
    { 9500743, 8167 }, // "Gathersanity Item: Turtle Scale (skinning #5431/8167)"
    { 9500744, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5431/8169)"
    { 9500745, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #5431/8170)"
    { 9500746, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5708/4304)"
    { 9500747, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5708/8169)"
    { 9500748, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #5708/8170)"
    { 9500749, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #5708/8171)"
    { 9500750, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5709/4304)"
    { 9500751, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #5709/8165)"
    { 9500752, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5709/8169)"
    { 9500753, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #5709/8170)"
    { 9500754, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #5709/8171)"
    { 9500755, 15412 }, // "Gathersanity Item: Green Dragonscale (skinning #5709/15412)"
    { 9500756, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #5719/8165)"
    { 9500757, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5719/8169)"
    { 9500758, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #5719/8170)"
    { 9500759, 15412 }, // "Gathersanity Item: Green Dragonscale (skinning #5719/15412)"
    { 9500760, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #5720/8165)"
    { 9500761, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5720/8169)"
    { 9500762, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #5720/8170)"
    { 9500763, 15412 }, // "Gathersanity Item: Green Dragonscale (skinning #5720/15412)"
    { 9500764, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #5721/8165)"
    { 9500765, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5721/8169)"
    { 9500766, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #5721/8170)"
    { 9500767, 15412 }, // "Gathersanity Item: Green Dragonscale (skinning #5721/15412)"
    { 9500768, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #5722/8165)"
    { 9500769, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5722/8169)"
    { 9500770, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #5722/8170)"
    { 9500771, 15412 }, // "Gathersanity Item: Green Dragonscale (skinning #5722/15412)"
    { 9500772, 2318 }, // "Gathersanity Item: Light Leather (skinning #5831/2318)"
    { 9500773, 2319 }, // "Gathersanity Item: Medium Leather (skinning #5831/2319)"
    { 9500774, 4232 }, // "Gathersanity Item: Medium Hide (skinning #5831/4232)"
    { 9500775, 783 }, // "Gathersanity Item: Light Hide (skinning #5832/783)"
    { 9500776, 2318 }, // "Gathersanity Item: Light Leather (skinning #5832/2318)"
    { 9500777, 2319 }, // "Gathersanity Item: Medium Leather (skinning #5832/2319)"
    { 9500778, 4232 }, // "Gathersanity Item: Medium Hide (skinning #5832/4232)"
    { 9500779, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5833/4304)"
    { 9500780, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5833/8169)"
    { 9500781, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #5833/8170)"
    { 9500782, 2318 }, // "Gathersanity Item: Light Leather (skinning #5834/2318)"
    { 9500783, 2319 }, // "Gathersanity Item: Medium Leather (skinning #5834/2319)"
    { 9500784, 4232 }, // "Gathersanity Item: Medium Hide (skinning #5834/4232)"
    { 9500785, 783 }, // "Gathersanity Item: Light Hide (skinning #5842/783)"
    { 9500786, 2318 }, // "Gathersanity Item: Light Leather (skinning #5842/2318)"
    { 9500787, 2319 }, // "Gathersanity Item: Medium Leather (skinning #5842/2319)"
    { 9500788, 783 }, // "Gathersanity Item: Light Hide (skinning #5912/783)"
    { 9500789, 2318 }, // "Gathersanity Item: Light Leather (skinning #5912/2318)"
    { 9500790, 2319 }, // "Gathersanity Item: Medium Leather (skinning #5912/2319)"
    { 9500791, 6470 }, // "Gathersanity Item: Deviate Scale (skinning #5912/6470)"
    { 9500792, 6471 }, // "Gathersanity Item: Perfect Deviate Scale (skinning #5912/6471)"
    { 9500793, 2319 }, // "Gathersanity Item: Medium Leather (skinning #5928/2319)"
    { 9500794, 4232 }, // "Gathersanity Item: Medium Hide (skinning #5928/4232)"
    { 9500795, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #5928/4234)"
    { 9500796, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #5928/4235)"
    { 9500797, 2319 }, // "Gathersanity Item: Medium Leather (skinning #5934/2319)"
    { 9500798, 4232 }, // "Gathersanity Item: Medium Hide (skinning #5934/4232)"
    { 9500799, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #5934/4234)"
    { 9500800, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #5934/4235)"
    { 9500801, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5984/4304)"
    { 9500802, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5984/8169)"
    { 9500803, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #5984/8170)"
    { 9500804, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5985/4304)"
    { 9500805, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5985/8169)"
    { 9500806, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #5985/8170)"
    { 9500807, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5988/4304)"
    { 9500808, 8154 }, // "Gathersanity Item: Scorpid Scale (skinning #5988/8154)"
    { 9500809, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5988/8169)"
    { 9500810, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #5988/8170)"
    { 9500811, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5990/4304)"
    { 9500812, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5990/8169)"
    { 9500813, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #5990/8170)"
    { 9500814, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5991/4304)"
    { 9500815, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5991/8169)"
    { 9500816, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #5991/8170)"
    { 9500817, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #5991/8171)"
    { 9500818, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5992/4304)"
    { 9500819, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5992/8169)"
    { 9500820, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #5992/8170)"
    { 9500821, 4304 }, // "Gathersanity Item: Thick Leather (skinning #5993/4304)"
    { 9500822, 8169 }, // "Gathersanity Item: Thick Hide (skinning #5993/8169)"
    { 9500823, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #5993/8170)"
    { 9500824, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #5993/8171)"
    { 9500825, 4304 }, // "Gathersanity Item: Thick Leather (skinning #6010/4304)"
    { 9500826, 8169 }, // "Gathersanity Item: Thick Hide (skinning #6010/8169)"
    { 9500827, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #6010/8170)"
    { 9500828, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #6010/8171)"
    { 9500829, 17057 }, // "Gathersanity Item: Shiny Fish Scales (skinning #6033/17057)"
    { 9500830, 15415 }, // "Gathersanity Item: Blue Dragonscale (skinning #6109/15415)"
    { 9500831, 4304 }, // "Gathersanity Item: Thick Leather (skinning #6129/4304)"
    { 9500832, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #6129/8165)"
    { 9500833, 8169 }, // "Gathersanity Item: Thick Hide (skinning #6129/8169)"
    { 9500834, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #6129/8170)"
    { 9500835, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #6129/8171)"
    { 9500836, 15415 }, // "Gathersanity Item: Blue Dragonscale (skinning #6129/15415)"
    { 9500837, 4304 }, // "Gathersanity Item: Thick Leather (skinning #6130/4304)"
    { 9500838, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #6130/8165)"
    { 9500839, 8169 }, // "Gathersanity Item: Thick Hide (skinning #6130/8169)"
    { 9500840, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #6130/8170)"
    { 9500841, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #6130/8171)"
    { 9500842, 15415 }, // "Gathersanity Item: Blue Dragonscale (skinning #6130/15415)"
    { 9500843, 4304 }, // "Gathersanity Item: Thick Leather (skinning #6131/4304)"
    { 9500844, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #6131/8165)"
    { 9500845, 8169 }, // "Gathersanity Item: Thick Hide (skinning #6131/8169)"
    { 9500846, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #6131/8170)"
    { 9500847, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #6131/8171)"
    { 9500848, 15415 }, // "Gathersanity Item: Blue Dragonscale (skinning #6131/15415)"
    { 9500849, 4304 }, // "Gathersanity Item: Thick Leather (skinning #6140/4304)"
    { 9500850, 8169 }, // "Gathersanity Item: Thick Hide (skinning #6140/8169)"
    { 9500851, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #6140/8170)"
    { 9500852, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #6140/8171)"
    { 9500853, 2319 }, // "Gathersanity Item: Medium Leather (skinning #6170/2319)"
    { 9500854, 4232 }, // "Gathersanity Item: Medium Hide (skinning #6170/4232)"
    { 9500855, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #6170/4234)"
    { 9500856, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #6170/4235)"
    { 9500857, 2319 }, // "Gathersanity Item: Medium Leather (skinning #6215/2319)"
    { 9500858, 4232 }, // "Gathersanity Item: Medium Hide (skinning #6215/4232)"
    { 9500859, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #6215/4234)"
    { 9500860, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #6215/4235)"
    { 9500861, 4304 }, // "Gathersanity Item: Thick Leather (skinning #6347/4304)"
    { 9500862, 8169 }, // "Gathersanity Item: Thick Hide (skinning #6347/8169)"
    { 9500863, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #6347/8170)"
    { 9500864, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #6347/8171)"
    { 9500865, 4304 }, // "Gathersanity Item: Thick Leather (skinning #6348/4304)"
    { 9500866, 8169 }, // "Gathersanity Item: Thick Hide (skinning #6348/8169)"
    { 9500867, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #6348/8170)"
    { 9500868, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #6348/8171)"
    { 9500869, 4304 }, // "Gathersanity Item: Thick Leather (skinning #6349/4304)"
    { 9500870, 7974 }, // "Gathersanity Item: Zesty Clam Meat (skinning #6349/7974)"
    { 9500871, 8169 }, // "Gathersanity Item: Thick Hide (skinning #6349/8169)"
    { 9500872, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #6349/8170)"
    { 9500873, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #6349/8171)"
    { 9500874, 4304 }, // "Gathersanity Item: Thick Leather (skinning #6352/4304)"
    { 9500875, 8167 }, // "Gathersanity Item: Turtle Scale (skinning #6352/8167)"
    { 9500876, 8169 }, // "Gathersanity Item: Thick Hide (skinning #6352/8169)"
    { 9500877, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #6352/8170)"
    { 9500878, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #6352/8171)"
    { 9500879, 4304 }, // "Gathersanity Item: Thick Leather (skinning #6369/4304)"
    { 9500880, 8167 }, // "Gathersanity Item: Turtle Scale (skinning #6369/8167)"
    { 9500881, 8169 }, // "Gathersanity Item: Thick Hide (skinning #6369/8169)"
    { 9500882, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #6369/8170)"
    { 9500883, 4304 }, // "Gathersanity Item: Thick Leather (skinning #6375/4304)"
    { 9500884, 8169 }, // "Gathersanity Item: Thick Hide (skinning #6375/8169)"
    { 9500885, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #6375/8170)"
    { 9500886, 4304 }, // "Gathersanity Item: Thick Leather (skinning #6377/4304)"
    { 9500887, 8169 }, // "Gathersanity Item: Thick Hide (skinning #6377/8169)"
    { 9500888, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #6377/8170)"
    { 9500889, 4304 }, // "Gathersanity Item: Thick Leather (skinning #6378/4304)"
    { 9500890, 8169 }, // "Gathersanity Item: Thick Hide (skinning #6378/8169)"
    { 9500891, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #6378/8170)"
    { 9500892, 4304 }, // "Gathersanity Item: Thick Leather (skinning #6379/4304)"
    { 9500893, 8169 }, // "Gathersanity Item: Thick Hide (skinning #6379/8169)"
    { 9500894, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #6379/8170)"
    { 9500895, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #6379/8171)"
    { 9500896, 4304 }, // "Gathersanity Item: Thick Leather (skinning #6380/4304)"
    { 9500897, 8169 }, // "Gathersanity Item: Thick Hide (skinning #6380/8169)"
    { 9500898, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #6380/8170)"
    { 9500899, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #6380/8171)"
    { 9500900, 15417 }, // "Gathersanity Item: Devilsaur Leather (skinning #6498/15417)"
    { 9500901, 15417 }, // "Gathersanity Item: Devilsaur Leather (skinning #6499/15417)"
    { 9500902, 15417 }, // "Gathersanity Item: Devilsaur Leather (skinning #6500/15417)"
    { 9500903, 4304 }, // "Gathersanity Item: Thick Leather (skinning #6501/4304)"
    { 9500904, 8169 }, // "Gathersanity Item: Thick Hide (skinning #6501/8169)"
    { 9500905, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #6501/8170)"
    { 9500906, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #6501/8171)"
    { 9500907, 4304 }, // "Gathersanity Item: Thick Leather (skinning #6502/4304)"
    { 9500908, 8169 }, // "Gathersanity Item: Thick Hide (skinning #6502/8169)"
    { 9500909, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #6502/8170)"
    { 9500910, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #6502/8171)"
    { 9500911, 4304 }, // "Gathersanity Item: Thick Leather (skinning #6503/4304)"
    { 9500912, 8169 }, // "Gathersanity Item: Thick Hide (skinning #6503/8169)"
    { 9500913, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #6503/8170)"
    { 9500914, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #6503/8171)"
    { 9500915, 4304 }, // "Gathersanity Item: Thick Leather (skinning #6504/4304)"
    { 9500916, 8169 }, // "Gathersanity Item: Thick Hide (skinning #6504/8169)"
    { 9500917, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #6504/8170)"
    { 9500918, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #6504/8171)"
    { 9500919, 4304 }, // "Gathersanity Item: Thick Leather (skinning #6505/4304)"
    { 9500920, 8169 }, // "Gathersanity Item: Thick Hide (skinning #6505/8169)"
    { 9500921, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #6505/8170)"
    { 9500922, 4304 }, // "Gathersanity Item: Thick Leather (skinning #6506/4304)"
    { 9500923, 8169 }, // "Gathersanity Item: Thick Hide (skinning #6506/8169)"
    { 9500924, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #6506/8170)"
    { 9500925, 4304 }, // "Gathersanity Item: Thick Leather (skinning #6507/4304)"
    { 9500926, 8169 }, // "Gathersanity Item: Thick Hide (skinning #6507/8169)"
    { 9500927, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #6507/8170)"
    { 9500928, 4304 }, // "Gathersanity Item: Thick Leather (skinning #6508/4304)"
    { 9500929, 8169 }, // "Gathersanity Item: Thick Hide (skinning #6508/8169)"
    { 9500930, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #6508/8170)"
    { 9500931, 4304 }, // "Gathersanity Item: Thick Leather (skinning #6513/4304)"
    { 9500932, 8169 }, // "Gathersanity Item: Thick Hide (skinning #6513/8169)"
    { 9500933, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #6513/8170)"
    { 9500934, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #6513/8171)"
    { 9500935, 4304 }, // "Gathersanity Item: Thick Leather (skinning #6514/4304)"
    { 9500936, 8169 }, // "Gathersanity Item: Thick Hide (skinning #6514/8169)"
    { 9500937, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #6514/8170)"
    { 9500938, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #6514/8171)"
    { 9500939, 4304 }, // "Gathersanity Item: Thick Leather (skinning #6516/4304)"
    { 9500940, 8169 }, // "Gathersanity Item: Thick Hide (skinning #6516/8169)"
    { 9500941, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #6516/8170)"
    { 9500942, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #6516/8171)"
    { 9500943, 4304 }, // "Gathersanity Item: Thick Leather (skinning #6581/4304)"
    { 9500944, 8169 }, // "Gathersanity Item: Thick Hide (skinning #6581/8169)"
    { 9500945, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #6581/8170)"
    { 9500946, 15417 }, // "Gathersanity Item: Devilsaur Leather (skinning #6584/15417)"
    { 9500947, 4304 }, // "Gathersanity Item: Thick Leather (skinning #6585/4304)"
    { 9500948, 8169 }, // "Gathersanity Item: Thick Hide (skinning #6585/8169)"
    { 9500949, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #6585/8170)"
    { 9500950, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #6585/8171)"
    { 9500951, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #7022/4234)"
    { 9500952, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #7022/4235)"
    { 9500953, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7022/4304)"
    { 9500954, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7040/4304)"
    { 9500955, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #7040/8165)"
    { 9500956, 8169 }, // "Gathersanity Item: Thick Hide (skinning #7040/8169)"
    { 9500957, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #7040/8170)"
    { 9500958, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #7040/8171)"
    { 9500959, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #7040/15416)"
    { 9500960, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7041/4304)"
    { 9500961, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #7041/8165)"
    { 9500962, 8169 }, // "Gathersanity Item: Thick Hide (skinning #7041/8169)"
    { 9500963, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #7041/8170)"
    { 9500964, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #7041/8171)"
    { 9500965, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #7041/15416)"
    { 9500966, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7042/4304)"
    { 9500967, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #7042/8165)"
    { 9500968, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #7042/8170)"
    { 9500969, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #7042/8171)"
    { 9500970, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #7042/15416)"
    { 9500971, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7043/4304)"
    { 9500972, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #7043/8165)"
    { 9500973, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #7043/8170)"
    { 9500974, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #7043/8171)"
    { 9500975, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #7043/15416)"
    { 9500976, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7044/4304)"
    { 9500977, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #7044/8165)"
    { 9500978, 8169 }, // "Gathersanity Item: Thick Hide (skinning #7044/8169)"
    { 9500979, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #7044/8170)"
    { 9500980, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #7044/8171)"
    { 9500981, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #7044/15416)"
    { 9500982, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7045/4304)"
    { 9500983, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #7045/8165)"
    { 9500984, 8169 }, // "Gathersanity Item: Thick Hide (skinning #7045/8169)"
    { 9500985, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #7045/8170)"
    { 9500986, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #7045/8171)"
    { 9500987, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #7045/15416)"
    { 9500988, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7046/4304)"
    { 9500989, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #7046/8165)"
    { 9500990, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #7046/8170)"
    { 9500991, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #7046/8171)"
    { 9500992, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #7046/15416)"
    { 9500993, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7047/4304)"
    { 9500994, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #7047/8165)"
    { 9500995, 8169 }, // "Gathersanity Item: Thick Hide (skinning #7047/8169)"
    { 9500996, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #7047/8170)"
    { 9500997, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #7047/8171)"
    { 9500998, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #7047/15416)"
    { 9500999, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7048/4304)"
    { 9501000, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #7048/8165)"
    { 9501001, 8169 }, // "Gathersanity Item: Thick Hide (skinning #7048/8169)"
    { 9501002, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #7048/8170)"
    { 9501003, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #7048/8171)"
    { 9501004, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #7048/15416)"
    { 9501005, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7049/4304)"
    { 9501006, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #7049/8165)"
    { 9501007, 8169 }, // "Gathersanity Item: Thick Hide (skinning #7049/8169)"
    { 9501008, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #7049/8170)"
    { 9501009, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #7049/8171)"
    { 9501010, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #7049/15416)"
    { 9501011, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7055/4304)"
    { 9501012, 8169 }, // "Gathersanity Item: Thick Hide (skinning #7055/8169)"
    { 9501013, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #7055/8170)"
    { 9501014, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #7055/8171)"
    { 9501015, 2319 }, // "Gathersanity Item: Medium Leather (skinning #7078/2319)"
    { 9501016, 4232 }, // "Gathersanity Item: Medium Hide (skinning #7078/4232)"
    { 9501017, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #7078/4234)"
    { 9501018, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #7078/4235)"
    { 9501019, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7125/4304)"
    { 9501020, 8169 }, // "Gathersanity Item: Thick Hide (skinning #7125/8169)"
    { 9501021, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #7125/8170)"
    { 9501022, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #7125/8171)"
    { 9501023, 11512 }, // "Gathersanity Item: Patch of Tainted Skin (skinning #7125/11512)"
    { 9501024, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7126/4304)"
    { 9501025, 8169 }, // "Gathersanity Item: Thick Hide (skinning #7126/8169)"
    { 9501026, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #7126/8170)"
    { 9501027, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #7126/8171)"
    { 9501028, 11512 }, // "Gathersanity Item: Patch of Tainted Skin (skinning #7126/11512)"
    { 9501029, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7273/4304)"
    { 9501030, 8169 }, // "Gathersanity Item: Thick Hide (skinning #7273/8169)"
    { 9501031, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #7273/8170)"
    { 9501032, 2319 }, // "Gathersanity Item: Medium Leather (skinning #7333/2319)"
    { 9501033, 4232 }, // "Gathersanity Item: Medium Hide (skinning #7333/4232)"
    { 9501034, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #7333/4234)"
    { 9501035, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #7333/4235)"
    { 9501036, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #7334/4234)"
    { 9501037, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #7334/4235)"
    { 9501038, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7334/4304)"
    { 9501039, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #7405/4234)"
    { 9501040, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #7405/4235)"
    { 9501041, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7405/4304)"
    { 9501042, 8154 }, // "Gathersanity Item: Scorpid Scale (skinning #7405/8154)"
    { 9501043, 8169 }, // "Gathersanity Item: Thick Hide (skinning #7405/8169)"
    { 9501044, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7430/4304)"
    { 9501045, 8169 }, // "Gathersanity Item: Thick Hide (skinning #7430/8169)"
    { 9501046, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #7430/8170)"
    { 9501047, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #7430/8171)"
    { 9501048, 15422 }, // "Gathersanity Item: Frostsaber Leather (skinning #7430/15422)"
    { 9501049, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7431/4304)"
    { 9501050, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #7431/8170)"
    { 9501051, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #7431/8171)"
    { 9501052, 15422 }, // "Gathersanity Item: Frostsaber Leather (skinning #7431/15422)"
    { 9501053, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7432/4304)"
    { 9501054, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #7432/8170)"
    { 9501055, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #7432/8171)"
    { 9501056, 15422 }, // "Gathersanity Item: Frostsaber Leather (skinning #7432/15422)"
    { 9501057, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7433/4304)"
    { 9501058, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #7433/8170)"
    { 9501059, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #7433/8171)"
    { 9501060, 15422 }, // "Gathersanity Item: Frostsaber Leather (skinning #7433/15422)"
    { 9501061, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7434/4304)"
    { 9501062, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #7434/8170)"
    { 9501063, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #7434/8171)"
    { 9501064, 15422 }, // "Gathersanity Item: Frostsaber Leather (skinning #7434/15422)"
    { 9501065, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7435/4304)"
    { 9501066, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #7435/8165)"
    { 9501067, 8169 }, // "Gathersanity Item: Thick Hide (skinning #7435/8169)"
    { 9501068, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #7435/8170)"
    { 9501069, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #7435/8171)"
    { 9501070, 15415 }, // "Gathersanity Item: Blue Dragonscale (skinning #7435/15415)"
    { 9501071, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7436/4304)"
    { 9501072, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #7436/8165)"
    { 9501073, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #7436/8170)"
    { 9501074, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #7436/8171)"
    { 9501075, 15415 }, // "Gathersanity Item: Blue Dragonscale (skinning #7436/15415)"
    { 9501076, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7437/4304)"
    { 9501077, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #7437/8165)"
    { 9501078, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #7437/8170)"
    { 9501079, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #7437/8171)"
    { 9501080, 15415 }, // "Gathersanity Item: Blue Dragonscale (skinning #7437/15415)"
    { 9501081, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7443/4304)"
    { 9501082, 8169 }, // "Gathersanity Item: Thick Hide (skinning #7443/8169)"
    { 9501083, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #7443/8170)"
    { 9501084, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #7443/8171)"
    { 9501085, 15419 }, // "Gathersanity Item: Warbear Leather (skinning #7443/15419)"
    { 9501086, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7444/4304)"
    { 9501087, 8169 }, // "Gathersanity Item: Thick Hide (skinning #7444/8169)"
    { 9501088, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #7444/8170)"
    { 9501089, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #7444/8171)"
    { 9501090, 15419 }, // "Gathersanity Item: Warbear Leather (skinning #7444/15419)"
    { 9501091, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7445/4304)"
    { 9501092, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #7445/8170)"
    { 9501093, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #7445/8171)"
    { 9501094, 15419 }, // "Gathersanity Item: Warbear Leather (skinning #7445/15419)"
    { 9501095, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7446/4304)"
    { 9501096, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #7446/8170)"
    { 9501097, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #7446/8171)"
    { 9501098, 15419 }, // "Gathersanity Item: Warbear Leather (skinning #7446/15419)"
    { 9501099, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7447/4304)"
    { 9501100, 8169 }, // "Gathersanity Item: Thick Hide (skinning #7447/8169)"
    { 9501101, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #7447/8170)"
    { 9501102, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #7447/8171)"
    { 9501103, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7448/4304)"
    { 9501104, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #7448/8170)"
    { 9501105, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #7448/8171)"
    { 9501106, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7449/4304)"
    { 9501107, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #7449/8170)"
    { 9501108, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #7449/8171)"
    { 9501109, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7457/4304)"
    { 9501110, 8169 }, // "Gathersanity Item: Thick Hide (skinning #7457/8169)"
    { 9501111, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #7457/8170)"
    { 9501112, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #7457/8171)"
    { 9501113, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7458/4304)"
    { 9501114, 8169 }, // "Gathersanity Item: Thick Hide (skinning #7458/8169)"
    { 9501115, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #7458/8170)"
    { 9501116, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #7458/8171)"
    { 9501117, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7459/4304)"
    { 9501118, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #7459/8170)"
    { 9501119, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #7459/8171)"
    { 9501120, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7460/4304)"
    { 9501121, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #7460/8170)"
    { 9501122, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #7460/8171)"
    { 9501123, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7462/4304)"
    { 9501124, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #7462/8170)"
    { 9501125, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #7462/8171)"
    { 9501126, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7803/4304)"
    { 9501127, 8154 }, // "Gathersanity Item: Scorpid Scale (skinning #7803/8154)"
    { 9501128, 8169 }, // "Gathersanity Item: Thick Hide (skinning #7803/8169)"
    { 9501129, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #7803/8170)"
    { 9501130, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7846/4304)"
    { 9501131, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #7846/8165)"
    { 9501132, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #7846/8170)"
    { 9501133, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #7846/8171)"
    { 9501134, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #7846/15416)"
    { 9501135, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7848/4304)"
    { 9501136, 8169 }, // "Gathersanity Item: Thick Hide (skinning #7848/8169)"
    { 9501137, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #7848/8170)"
    { 9501138, 4304 }, // "Gathersanity Item: Thick Leather (skinning #7977/4304)"
    { 9501139, 8167 }, // "Gathersanity Item: Turtle Scale (skinning #7977/8167)"
    { 9501140, 8169 }, // "Gathersanity Item: Thick Hide (skinning #7977/8169)"
    { 9501141, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #7977/8170)"
    { 9501142, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8095/4304)"
    { 9501143, 8169 }, // "Gathersanity Item: Thick Hide (skinning #8095/8169)"
    { 9501144, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #8095/8170)"
    { 9501145, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8120/4304)"
    { 9501146, 8169 }, // "Gathersanity Item: Thick Hide (skinning #8120/8169)"
    { 9501147, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #8120/8170)"
    { 9501148, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #8138/4234)"
    { 9501149, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #8138/4235)"
    { 9501150, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8138/4304)"
    { 9501151, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8196/4304)"
    { 9501152, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #8196/8165)"
    { 9501153, 8169 }, // "Gathersanity Item: Thick Hide (skinning #8196/8169)"
    { 9501154, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #8196/8170)"
    { 9501155, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8197/4304)"
    { 9501156, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #8197/8165)"
    { 9501157, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #8197/8170)"
    { 9501158, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #8197/8171)"
    { 9501159, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8198/4304)"
    { 9501160, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #8198/8165)"
    { 9501161, 8169 }, // "Gathersanity Item: Thick Hide (skinning #8198/8169)"
    { 9501162, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #8198/8170)"
    { 9501163, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #8198/8171)"
    { 9501164, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #8211/4234)"
    { 9501165, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #8211/4235)"
    { 9501166, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8211/4304)"
    { 9501167, 8169 }, // "Gathersanity Item: Thick Hide (skinning #8211/8169)"
    { 9501168, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8213/4304)"
    { 9501169, 8167 }, // "Gathersanity Item: Turtle Scale (skinning #8213/8167)"
    { 9501170, 8169 }, // "Gathersanity Item: Thick Hide (skinning #8213/8169)"
    { 9501171, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #8213/8170)"
    { 9501172, 17057 }, // "Gathersanity Item: Shiny Fish Scales (skinning #8236/17057)"
    { 9501173, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8280/4304)"
    { 9501174, 8169 }, // "Gathersanity Item: Thick Hide (skinning #8280/8169)"
    { 9501175, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8300/4304)"
    { 9501176, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #8300/8170)"
    { 9501177, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8301/4304)"
    { 9501178, 8154 }, // "Gathersanity Item: Scorpid Scale (skinning #8301/8154)"
    { 9501179, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #8301/8170)"
    { 9501180, 15408 }, // "Gathersanity Item: Heavy Scorpid Scale (skinning #8301/15408)"
    { 9501181, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8319/4304)"
    { 9501182, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #8319/8165)"
    { 9501183, 8169 }, // "Gathersanity Item: Thick Hide (skinning #8319/8169)"
    { 9501184, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #8319/8170)"
    { 9501185, 15412 }, // "Gathersanity Item: Green Dragonscale (skinning #8319/15412)"
    { 9501186, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8336/4304)"
    { 9501187, 8169 }, // "Gathersanity Item: Thick Hide (skinning #8336/8169)"
    { 9501188, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #8336/8170)"
    { 9501189, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #8437/4234)"
    { 9501190, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #8437/4235)"
    { 9501191, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8437/4304)"
    { 9501192, 8169 }, // "Gathersanity Item: Thick Hide (skinning #8437/8169)"
    { 9501193, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8438/4304)"
    { 9501194, 8169 }, // "Gathersanity Item: Thick Hide (skinning #8438/8169)"
    { 9501195, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #8438/8170)"
    { 9501196, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8497/4304)"
    { 9501197, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #8497/8165)"
    { 9501198, 8169 }, // "Gathersanity Item: Thick Hide (skinning #8497/8169)"
    { 9501199, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #8497/8170)"
    { 9501200, 15412 }, // "Gathersanity Item: Green Dragonscale (skinning #8497/15412)"
    { 9501201, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8596/4304)"
    { 9501202, 8169 }, // "Gathersanity Item: Thick Hide (skinning #8596/8169)"
    { 9501203, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #8596/8170)"
    { 9501204, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #8596/8171)"
    { 9501205, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8597/4304)"
    { 9501206, 8169 }, // "Gathersanity Item: Thick Hide (skinning #8597/8169)"
    { 9501207, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #8597/8170)"
    { 9501208, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #8597/8171)"
    { 9501209, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8598/4304)"
    { 9501210, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #8598/8170)"
    { 9501211, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #8598/8171)"
    { 9501212, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8600/4304)"
    { 9501213, 8169 }, // "Gathersanity Item: Thick Hide (skinning #8600/8169)"
    { 9501214, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #8600/8170)"
    { 9501215, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #8600/8171)"
    { 9501216, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8601/4304)"
    { 9501217, 8169 }, // "Gathersanity Item: Thick Hide (skinning #8601/8169)"
    { 9501218, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #8601/8170)"
    { 9501219, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #8601/8171)"
    { 9501220, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8602/4304)"
    { 9501221, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #8602/8170)"
    { 9501222, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #8602/8171)"
    { 9501223, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8660/4304)"
    { 9501224, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #8660/8170)"
    { 9501225, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8675/4304)"
    { 9501226, 8169 }, // "Gathersanity Item: Thick Hide (skinning #8675/8169)"
    { 9501227, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #8675/8170)"
    { 9501228, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #8718/8170)"
    { 9501229, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #8718/8171)"
    { 9501230, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8759/4304)"
    { 9501231, 8169 }, // "Gathersanity Item: Thick Hide (skinning #8759/8169)"
    { 9501232, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #8759/8170)"
    { 9501233, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8760/4304)"
    { 9501234, 8169 }, // "Gathersanity Item: Thick Hide (skinning #8760/8169)"
    { 9501235, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #8760/8170)"
    { 9501236, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8761/4304)"
    { 9501237, 8169 }, // "Gathersanity Item: Thick Hide (skinning #8761/8169)"
    { 9501238, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #8761/8170)"
    { 9501239, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #8761/8171)"
    { 9501240, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8763/4304)"
    { 9501241, 8169 }, // "Gathersanity Item: Thick Hide (skinning #8763/8169)"
    { 9501242, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #8763/8170)"
    { 9501243, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #8763/8171)"
    { 9501244, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8764/4304)"
    { 9501245, 8169 }, // "Gathersanity Item: Thick Hide (skinning #8764/8169)"
    { 9501246, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #8764/8170)"
    { 9501247, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #8764/8171)"
    { 9501248, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8921/4304)"
    { 9501249, 8169 }, // "Gathersanity Item: Thick Hide (skinning #8921/8169)"
    { 9501250, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #8921/8170)"
    { 9501251, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8922/4304)"
    { 9501252, 8169 }, // "Gathersanity Item: Thick Hide (skinning #8922/8169)"
    { 9501253, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #8922/8170)"
    { 9501254, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #8922/8171)"
    { 9501255, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8926/4304)"
    { 9501256, 8154 }, // "Gathersanity Item: Scorpid Scale (skinning #8926/8154)"
    { 9501257, 8169 }, // "Gathersanity Item: Thick Hide (skinning #8926/8169)"
    { 9501258, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #8926/8170)"
    { 9501259, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8927/4304)"
    { 9501260, 8169 }, // "Gathersanity Item: Thick Hide (skinning #8927/8169)"
    { 9501261, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #8927/8170)"
    { 9501262, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8928/4304)"
    { 9501263, 8169 }, // "Gathersanity Item: Thick Hide (skinning #8928/8169)"
    { 9501264, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #8928/8170)"
    { 9501265, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8956/4304)"
    { 9501266, 8169 }, // "Gathersanity Item: Thick Hide (skinning #8956/8169)"
    { 9501267, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #8956/8170)"
    { 9501268, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #8956/8171)"
    { 9501269, 11512 }, // "Gathersanity Item: Patch of Tainted Skin (skinning #8956/11512)"
    { 9501270, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8957/4304)"
    { 9501271, 8169 }, // "Gathersanity Item: Thick Hide (skinning #8957/8169)"
    { 9501272, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #8957/8170)"
    { 9501273, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #8957/8171)"
    { 9501274, 11512 }, // "Gathersanity Item: Patch of Tainted Skin (skinning #8957/11512)"
    { 9501275, 15419 }, // "Gathersanity Item: Warbear Leather (skinning #8957/15419)"
    { 9501276, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8958/4304)"
    { 9501277, 8169 }, // "Gathersanity Item: Thick Hide (skinning #8958/8169)"
    { 9501278, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #8958/8170)"
    { 9501279, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #8958/8171)"
    { 9501280, 11512 }, // "Gathersanity Item: Patch of Tainted Skin (skinning #8958/11512)"
    { 9501281, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8959/4304)"
    { 9501282, 8169 }, // "Gathersanity Item: Thick Hide (skinning #8959/8169)"
    { 9501283, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #8959/8170)"
    { 9501284, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #8959/8171)"
    { 9501285, 11512 }, // "Gathersanity Item: Patch of Tainted Skin (skinning #8959/11512)"
    { 9501286, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8960/4304)"
    { 9501287, 8169 }, // "Gathersanity Item: Thick Hide (skinning #8960/8169)"
    { 9501288, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #8960/8170)"
    { 9501289, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #8960/8171)"
    { 9501290, 11512 }, // "Gathersanity Item: Patch of Tainted Skin (skinning #8960/11512)"
    { 9501291, 4304 }, // "Gathersanity Item: Thick Leather (skinning #8961/4304)"
    { 9501292, 8169 }, // "Gathersanity Item: Thick Hide (skinning #8961/8169)"
    { 9501293, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #8961/8170)"
    { 9501294, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #8961/8171)"
    { 9501295, 11512 }, // "Gathersanity Item: Patch of Tainted Skin (skinning #8961/11512)"
    { 9501296, 4304 }, // "Gathersanity Item: Thick Leather (skinning #9029/4304)"
    { 9501297, 8169 }, // "Gathersanity Item: Thick Hide (skinning #9029/8169)"
    { 9501298, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #9029/8170)"
    { 9501299, 4304 }, // "Gathersanity Item: Thick Leather (skinning #9042/4304)"
    { 9501300, 8169 }, // "Gathersanity Item: Thick Hide (skinning #9042/8169)"
    { 9501301, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #9042/8170)"
    { 9501302, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #9042/8171)"
    { 9501303, 4304 }, // "Gathersanity Item: Thick Leather (skinning #9096/4304)"
    { 9501304, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #9096/8165)"
    { 9501305, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #9096/8170)"
    { 9501306, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #9096/8171)"
    { 9501307, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #9096/15416)"
    { 9501308, 4304 }, // "Gathersanity Item: Thick Leather (skinning #9162/4304)"
    { 9501309, 8169 }, // "Gathersanity Item: Thick Hide (skinning #9162/8169)"
    { 9501310, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #9162/8170)"
    { 9501311, 4304 }, // "Gathersanity Item: Thick Leather (skinning #9163/4304)"
    { 9501312, 8169 }, // "Gathersanity Item: Thick Hide (skinning #9163/8169)"
    { 9501313, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #9163/8170)"
    { 9501314, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #9163/8171)"
    { 9501315, 4304 }, // "Gathersanity Item: Thick Leather (skinning #9164/4304)"
    { 9501316, 8169 }, // "Gathersanity Item: Thick Hide (skinning #9164/8169)"
    { 9501317, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #9164/8170)"
    { 9501318, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #9164/8171)"
    { 9501319, 4304 }, // "Gathersanity Item: Thick Leather (skinning #9165/4304)"
    { 9501320, 8169 }, // "Gathersanity Item: Thick Hide (skinning #9165/8169)"
    { 9501321, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #9165/8170)"
    { 9501322, 4304 }, // "Gathersanity Item: Thick Leather (skinning #9166/4304)"
    { 9501323, 8169 }, // "Gathersanity Item: Thick Hide (skinning #9166/8169)"
    { 9501324, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #9166/8170)"
    { 9501325, 4304 }, // "Gathersanity Item: Thick Leather (skinning #9167/4304)"
    { 9501326, 8169 }, // "Gathersanity Item: Thick Hide (skinning #9167/8169)"
    { 9501327, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #9167/8170)"
    { 9501328, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #9167/8171)"
    { 9501329, 4304 }, // "Gathersanity Item: Thick Leather (skinning #9318/4304)"
    { 9501330, 8169 }, // "Gathersanity Item: Thick Hide (skinning #9318/8169)"
    { 9501331, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #9318/8170)"
    { 9501332, 4304 }, // "Gathersanity Item: Thick Leather (skinning #9416/4304)"
    { 9501333, 8169 }, // "Gathersanity Item: Thick Hide (skinning #9416/8169)"
    { 9501334, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #9416/8170)"
    { 9501335, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #9416/8171)"
    { 9501336, 4304 }, // "Gathersanity Item: Thick Leather (skinning #9461/4304)"
    { 9501337, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #9461/8165)"
    { 9501338, 8169 }, // "Gathersanity Item: Thick Hide (skinning #9461/8169)"
    { 9501339, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #9461/8170)"
    { 9501340, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #9461/8171)"
    { 9501341, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #9461/15416)"
    { 9501342, 4304 }, // "Gathersanity Item: Thick Leather (skinning #9568/4304)"
    { 9501343, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #9568/8165)"
    { 9501344, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #9568/8170)"
    { 9501345, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #9568/8171)"
    { 9501346, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #9568/15416)"
    { 9501347, 4304 }, // "Gathersanity Item: Thick Leather (skinning #9622/4304)"
    { 9501348, 8169 }, // "Gathersanity Item: Thick Hide (skinning #9622/8169)"
    { 9501349, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #9622/8170)"
    { 9501350, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #9622/8171)"
    { 9501351, 4304 }, // "Gathersanity Item: Thick Leather (skinning #9683/4304)"
    { 9501352, 8169 }, // "Gathersanity Item: Thick Hide (skinning #9683/8169)"
    { 9501353, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #9683/8170)"
    { 9501354, 4304 }, // "Gathersanity Item: Thick Leather (skinning #9684/4304)"
    { 9501355, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #9684/8170)"
    { 9501356, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #9684/8171)"
    { 9501357, 4304 }, // "Gathersanity Item: Thick Leather (skinning #9690/4304)"
    { 9501358, 8169 }, // "Gathersanity Item: Thick Hide (skinning #9690/8169)"
    { 9501359, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #9690/8170)"
    { 9501360, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #9690/8171)"
    { 9501361, 4304 }, // "Gathersanity Item: Thick Leather (skinning #9691/4304)"
    { 9501362, 8154 }, // "Gathersanity Item: Scorpid Scale (skinning #9691/8154)"
    { 9501363, 8169 }, // "Gathersanity Item: Thick Hide (skinning #9691/8169)"
    { 9501364, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #9691/8170)"
    { 9501365, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #9691/8171)"
    { 9501366, 15408 }, // "Gathersanity Item: Heavy Scorpid Scale (skinning #9691/15408)"
    { 9501367, 4304 }, // "Gathersanity Item: Thick Leather (skinning #9694/4304)"
    { 9501368, 8169 }, // "Gathersanity Item: Thick Hide (skinning #9694/8169)"
    { 9501369, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #9694/8170)"
    { 9501370, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #9694/8171)"
    { 9501371, 4304 }, // "Gathersanity Item: Thick Leather (skinning #9695/4304)"
    { 9501372, 8154 }, // "Gathersanity Item: Scorpid Scale (skinning #9695/8154)"
    { 9501373, 8169 }, // "Gathersanity Item: Thick Hide (skinning #9695/8169)"
    { 9501374, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #9695/8170)"
    { 9501375, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #9695/8171)"
    { 9501376, 15408 }, // "Gathersanity Item: Heavy Scorpid Scale (skinning #9695/15408)"
    { 9501377, 4304 }, // "Gathersanity Item: Thick Leather (skinning #9696/4304)"
    { 9501378, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #9696/8170)"
    { 9501379, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #9696/8171)"
    { 9501380, 4304 }, // "Gathersanity Item: Thick Leather (skinning #9697/4304)"
    { 9501381, 8169 }, // "Gathersanity Item: Thick Hide (skinning #9697/8169)"
    { 9501382, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #9697/8170)"
    { 9501383, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #9697/8171)"
    { 9501384, 4304 }, // "Gathersanity Item: Thick Leather (skinning #9698/4304)"
    { 9501385, 8169 }, // "Gathersanity Item: Thick Hide (skinning #9698/8169)"
    { 9501386, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #9698/8170)"
    { 9501387, 15408 }, // "Gathersanity Item: Heavy Scorpid Scale (skinning #9698/15408)"
    { 9501388, 4304 }, // "Gathersanity Item: Thick Leather (skinning #9701/4304)"
    { 9501389, 8169 }, // "Gathersanity Item: Thick Hide (skinning #9701/8169)"
    { 9501390, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #9701/8170)"
    { 9501391, 15408 }, // "Gathersanity Item: Heavy Scorpid Scale (skinning #9701/15408)"
    { 9501392, 4304 }, // "Gathersanity Item: Thick Leather (skinning #10083/4304)"
    { 9501393, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #10083/8165)"
    { 9501394, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #10083/8170)"
    { 9501395, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #10083/8171)"
    { 9501396, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #10083/15416)"
    { 9501397, 4304 }, // "Gathersanity Item: Thick Leather (skinning #10147/4304)"
    { 9501398, 8169 }, // "Gathersanity Item: Thick Hide (skinning #10147/8169)"
    { 9501399, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #10147/8170)"
    { 9501400, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #10147/8171)"
    { 9501401, 11512 }, // "Gathersanity Item: Patch of Tainted Skin (skinning #10147/11512)"
    { 9501402, 4304 }, // "Gathersanity Item: Thick Leather (skinning #10150/4304)"
    { 9501403, 8169 }, // "Gathersanity Item: Thick Hide (skinning #10150/8169)"
    { 9501404, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #10150/8170)"
    { 9501405, 4304 }, // "Gathersanity Item: Thick Leather (skinning #10156/4304)"
    { 9501406, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #10156/8170)"
    { 9501407, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #10156/8171)"
    { 9501408, 15410 }, // "Gathersanity Item: Scale of Onyxia (skinning #10184/15410)"
    { 9501409, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #10196/8165)"
    { 9501410, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #10196/8170)"
    { 9501411, 15415 }, // "Gathersanity Item: Blue Dragonscale (skinning #10196/15415)"
    { 9501412, 4304 }, // "Gathersanity Item: Thick Leather (skinning #10197/4304)"
    { 9501413, 8169 }, // "Gathersanity Item: Thick Hide (skinning #10197/8169)"
    { 9501414, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #10197/8170)"
    { 9501415, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #10197/8171)"
    { 9501416, 4304 }, // "Gathersanity Item: Thick Leather (skinning #10200/4304)"
    { 9501417, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #10200/8170)"
    { 9501418, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #10200/8171)"
    { 9501419, 4304 }, // "Gathersanity Item: Thick Leather (skinning #10202/4304)"
    { 9501420, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #10202/8165)"
    { 9501421, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #10202/8170)"
    { 9501422, 15415 }, // "Gathersanity Item: Blue Dragonscale (skinning #10202/15415)"
    { 9501423, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #10220/8170)"
    { 9501424, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #10220/8171)"
    { 9501425, 4304 }, // "Gathersanity Item: Thick Leather (skinning #10221/4304)"
    { 9501426, 8169 }, // "Gathersanity Item: Thick Hide (skinning #10221/8169)"
    { 9501427, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #10221/8170)"
    { 9501428, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #10221/8171)"
    { 9501429, 4304 }, // "Gathersanity Item: Thick Leather (skinning #10257/4304)"
    { 9501430, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #10257/8170)"
    { 9501431, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #10257/8171)"
    { 9501432, 19768 }, // "Gathersanity Item: Primal Tiger Leather (skinning #10257/19768)"
    { 9501433, 4304 }, // "Gathersanity Item: Thick Leather (skinning #10258/4304)"
    { 9501434, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #10258/8165)"
    { 9501435, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #10258/8170)"
    { 9501436, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #10258/8171)"
    { 9501437, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #10258/15416)"
    { 9501438, 4304 }, // "Gathersanity Item: Thick Leather (skinning #10264/4304)"
    { 9501439, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #10264/8165)"
    { 9501440, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #10264/8170)"
    { 9501441, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #10264/8171)"
    { 9501442, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #10264/15416)"
    { 9501443, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #10268/8170)"
    { 9501444, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #10268/8171)"
    { 9501445, 4304 }, // "Gathersanity Item: Thick Leather (skinning #10321/4304)"
    { 9501446, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #10321/8165)"
    { 9501447, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #10321/8170)"
    { 9501448, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #10321/8171)"
    { 9501449, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #10321/15416)"
    { 9501450, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #10339/8170)"
    { 9501451, 15412 }, // "Gathersanity Item: Green Dragonscale (skinning #10339/15412)"
    { 9501452, 15414 }, // "Gathersanity Item: Red Dragonscale (skinning #10339/15414)"
    { 9501453, 15415 }, // "Gathersanity Item: Blue Dragonscale (skinning #10339/15415)"
    { 9501454, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #10339/15416)"
    { 9501455, 4304 }, // "Gathersanity Item: Thick Leather (skinning #10363/4304)"
    { 9501456, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #10363/8165)"
    { 9501457, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #10363/8170)"
    { 9501458, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #10363/8171)"
    { 9501459, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #10363/15416)"
    { 9501460, 4304 }, // "Gathersanity Item: Thick Leather (skinning #10366/4304)"
    { 9501461, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #10366/8165)"
    { 9501462, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #10366/8170)"
    { 9501463, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #10366/8171)"
    { 9501464, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #10366/15416)"
    { 9501465, 4304 }, // "Gathersanity Item: Thick Leather (skinning #10371/4304)"
    { 9501466, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #10371/8165)"
    { 9501467, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #10371/8170)"
    { 9501468, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #10371/8171)"
    { 9501469, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #10371/15416)"
    { 9501470, 4304 }, // "Gathersanity Item: Thick Leather (skinning #10372/4304)"
    { 9501471, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #10372/8165)"
    { 9501472, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #10372/8170)"
    { 9501473, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #10372/8171)"
    { 9501474, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #10372/15416)"
    { 9501475, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #10430/8170)"
    { 9501476, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #10430/8171)"
    { 9501477, 12731 }, // "Gathersanity Item: Pristine Hide of the Beast (skinning #10430/12731)"
    { 9501478, 4304 }, // "Gathersanity Item: Thick Leather (skinning #10442/4304)"
    { 9501479, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #10442/8170)"
    { 9501480, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #10442/8171)"
    { 9501481, 15412 }, // "Gathersanity Item: Green Dragonscale (skinning #10442/15412)"
    { 9501482, 15414 }, // "Gathersanity Item: Red Dragonscale (skinning #10442/15414)"
    { 9501483, 15415 }, // "Gathersanity Item: Blue Dragonscale (skinning #10442/15415)"
    { 9501484, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #10442/15416)"
    { 9501485, 4304 }, // "Gathersanity Item: Thick Leather (skinning #10447/4304)"
    { 9501486, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #10447/8165)"
    { 9501487, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #10447/8170)"
    { 9501488, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #10447/8171)"
    { 9501489, 15412 }, // "Gathersanity Item: Green Dragonscale (skinning #10447/15412)"
    { 9501490, 15414 }, // "Gathersanity Item: Red Dragonscale (skinning #10447/15414)"
    { 9501491, 15415 }, // "Gathersanity Item: Blue Dragonscale (skinning #10447/15415)"
    { 9501492, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #10447/15416)"
    { 9501493, 4304 }, // "Gathersanity Item: Thick Leather (skinning #10659/4304)"
    { 9501494, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #10659/8165)"
    { 9501495, 8169 }, // "Gathersanity Item: Thick Hide (skinning #10659/8169)"
    { 9501496, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #10659/8170)"
    { 9501497, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #10659/8171)"
    { 9501498, 15415 }, // "Gathersanity Item: Blue Dragonscale (skinning #10659/15415)"
    { 9501499, 4304 }, // "Gathersanity Item: Thick Leather (skinning #10660/4304)"
    { 9501500, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #10660/8165)"
    { 9501501, 8169 }, // "Gathersanity Item: Thick Hide (skinning #10660/8169)"
    { 9501502, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #10660/8170)"
    { 9501503, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #10660/8171)"
    { 9501504, 15415 }, // "Gathersanity Item: Blue Dragonscale (skinning #10660/15415)"
    { 9501505, 4304 }, // "Gathersanity Item: Thick Leather (skinning #10661/4304)"
    { 9501506, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #10661/8165)"
    { 9501507, 8169 }, // "Gathersanity Item: Thick Hide (skinning #10661/8169)"
    { 9501508, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #10661/8170)"
    { 9501509, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #10661/8171)"
    { 9501510, 15415 }, // "Gathersanity Item: Blue Dragonscale (skinning #10661/15415)"
    { 9501511, 4304 }, // "Gathersanity Item: Thick Leather (skinning #10662/4304)"
    { 9501512, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #10662/8165)"
    { 9501513, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #10662/8170)"
    { 9501514, 15415 }, // "Gathersanity Item: Blue Dragonscale (skinning #10662/15415)"
    { 9501515, 4304 }, // "Gathersanity Item: Thick Leather (skinning #10663/4304)"
    { 9501516, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #10663/8165)"
    { 9501517, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #10663/8170)"
    { 9501518, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #10663/8171)"
    { 9501519, 15415 }, // "Gathersanity Item: Blue Dragonscale (skinning #10663/15415)"
    { 9501520, 4304 }, // "Gathersanity Item: Thick Leather (skinning #10664/4304)"
    { 9501521, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #10664/8165)"
    { 9501522, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #10664/8170)"
    { 9501523, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #10664/8171)"
    { 9501524, 15415 }, // "Gathersanity Item: Blue Dragonscale (skinning #10664/15415)"
    { 9501525, 4304 }, // "Gathersanity Item: Thick Leather (skinning #10678/4304)"
    { 9501526, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #10678/8165)"
    { 9501527, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #10678/8170)"
    { 9501528, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #10678/8171)"
    { 9501529, 4304 }, // "Gathersanity Item: Thick Leather (skinning #10683/4304)"
    { 9501530, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #10683/8165)"
    { 9501531, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #10683/8170)"
    { 9501532, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #10683/8171)"
    { 9501533, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #10683/15416)"
    { 9501534, 4304 }, // "Gathersanity Item: Thick Leather (skinning #10737/4304)"
    { 9501535, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #10737/8170)"
    { 9501536, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #10737/8171)"
    { 9501537, 4304 }, // "Gathersanity Item: Thick Leather (skinning #10741/4304)"
    { 9501538, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #10741/8170)"
    { 9501539, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #10741/8171)"
    { 9501540, 4304 }, // "Gathersanity Item: Thick Leather (skinning #10806/4304)"
    { 9501541, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #10806/8170)"
    { 9501542, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #10806/8171)"
    { 9501543, 15419 }, // "Gathersanity Item: Warbear Leather (skinning #10806/15419)"
    { 9501544, 4304 }, // "Gathersanity Item: Thick Leather (skinning #10807/4304)"
    { 9501545, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #10807/8170)"
    { 9501546, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #10807/8171)"
    { 9501547, 4304 }, // "Gathersanity Item: Thick Leather (skinning #10814/4304)"
    { 9501548, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #10814/8165)"
    { 9501549, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #10814/8170)"
    { 9501550, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #10814/8171)"
    { 9501551, 15412 }, // "Gathersanity Item: Green Dragonscale (skinning #10814/15412)"
    { 9501552, 15414 }, // "Gathersanity Item: Red Dragonscale (skinning #10814/15414)"
    { 9501553, 15415 }, // "Gathersanity Item: Blue Dragonscale (skinning #10814/15415)"
    { 9501554, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #10814/15416)"
    { 9501555, 4304 }, // "Gathersanity Item: Thick Leather (skinning #10981/4304)"
    { 9501556, 8169 }, // "Gathersanity Item: Thick Hide (skinning #10981/8169)"
    { 9501557, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #10981/8170)"
    { 9501558, 4304 }, // "Gathersanity Item: Thick Leather (skinning #10990/4304)"
    { 9501559, 8169 }, // "Gathersanity Item: Thick Hide (skinning #10990/8169)"
    { 9501560, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #10990/8170)"
    { 9501561, 4304 }, // "Gathersanity Item: Thick Leather (skinning #11357/4304)"
    { 9501562, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #11357/8170)"
    { 9501563, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #11357/8171)"
    { 9501564, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #11359/8170)"
    { 9501565, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #11359/8171)"
    { 9501566, 4304 }, // "Gathersanity Item: Thick Leather (skinning #11360/4304)"
    { 9501567, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #11360/8170)"
    { 9501568, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #11360/8171)"
    { 9501569, 19768 }, // "Gathersanity Item: Primal Tiger Leather (skinning #11360/19768)"
    { 9501570, 4304 }, // "Gathersanity Item: Thick Leather (skinning #11361/4304)"
    { 9501571, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #11361/8170)"
    { 9501572, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #11361/8171)"
    { 9501573, 19768 }, // "Gathersanity Item: Primal Tiger Leather (skinning #11361/19768)"
    { 9501574, 4304 }, // "Gathersanity Item: Thick Leather (skinning #11365/4304)"
    { 9501575, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #11365/8170)"
    { 9501576, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #11365/8171)"
    { 9501577, 4304 }, // "Gathersanity Item: Thick Leather (skinning #11368/4304)"
    { 9501578, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #11368/8170)"
    { 9501579, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #11368/8171)"
    { 9501580, 19767 }, // "Gathersanity Item: Primal Bat Leather (skinning #11368/19767)"
    { 9501581, 4304 }, // "Gathersanity Item: Thick Leather (skinning #11371/4304)"
    { 9501582, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #11371/8170)"
    { 9501583, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #11371/8171)"
    { 9501584, 4304 }, // "Gathersanity Item: Thick Leather (skinning #11372/4304)"
    { 9501585, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #11372/8170)"
    { 9501586, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #11372/8171)"
    { 9501587, 4304 }, // "Gathersanity Item: Thick Leather (skinning #11373/4304)"
    { 9501588, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #11373/8170)"
    { 9501589, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #11373/8171)"
    { 9501590, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #11496/8170)"
    { 9501591, 4304 }, // "Gathersanity Item: Thick Leather (skinning #11497/4304)"
    { 9501592, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #11497/8170)"
    { 9501593, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #11497/8171)"
    { 9501594, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #11583/15416)"
    { 9501595, 17012 }, // "Gathersanity Item: Core Leather (skinning #11673/17012)"
    { 9501596, 20498 }, // "Gathersanity Item: Silithid Chitin (skinning #11698/20498)"
    { 9501597, 20499 }, // "Gathersanity Item: Broken Silithid Chitin (skinning #11698/20499)"
    { 9501598, 20500 }, // "Gathersanity Item: Light Silithid Carapace (skinning #11698/20500)"
    { 9501599, 20498 }, // "Gathersanity Item: Silithid Chitin (skinning #11721/20498)"
    { 9501600, 20499 }, // "Gathersanity Item: Broken Silithid Chitin (skinning #11721/20499)"
    { 9501601, 20498 }, // "Gathersanity Item: Silithid Chitin (skinning #11722/20498)"
    { 9501602, 20499 }, // "Gathersanity Item: Broken Silithid Chitin (skinning #11722/20499)"
    { 9501603, 20498 }, // "Gathersanity Item: Silithid Chitin (skinning #11723/20498)"
    { 9501604, 20499 }, // "Gathersanity Item: Broken Silithid Chitin (skinning #11723/20499)"
    { 9501605, 20501 }, // "Gathersanity Item: Heavy Silithid Carapace (skinning #11723/20501)"
    { 9501606, 20498 }, // "Gathersanity Item: Silithid Chitin (skinning #11724/20498)"
    { 9501607, 20499 }, // "Gathersanity Item: Broken Silithid Chitin (skinning #11724/20499)"
    { 9501608, 20500 }, // "Gathersanity Item: Light Silithid Carapace (skinning #11724/20500)"
    { 9501609, 20498 }, // "Gathersanity Item: Silithid Chitin (skinning #11725/20498)"
    { 9501610, 20499 }, // "Gathersanity Item: Broken Silithid Chitin (skinning #11725/20499)"
    { 9501611, 20498 }, // "Gathersanity Item: Silithid Chitin (skinning #11726/20498)"
    { 9501612, 20499 }, // "Gathersanity Item: Broken Silithid Chitin (skinning #11726/20499)"
    { 9501613, 20498 }, // "Gathersanity Item: Silithid Chitin (skinning #11727/20498)"
    { 9501614, 20499 }, // "Gathersanity Item: Broken Silithid Chitin (skinning #11727/20499)"
    { 9501615, 20500 }, // "Gathersanity Item: Light Silithid Carapace (skinning #11727/20500)"
    { 9501616, 20498 }, // "Gathersanity Item: Silithid Chitin (skinning #11728/20498)"
    { 9501617, 20499 }, // "Gathersanity Item: Broken Silithid Chitin (skinning #11728/20499)"
    { 9501618, 20501 }, // "Gathersanity Item: Heavy Silithid Carapace (skinning #11728/20501)"
    { 9501619, 20498 }, // "Gathersanity Item: Silithid Chitin (skinning #11729/20498)"
    { 9501620, 20499 }, // "Gathersanity Item: Broken Silithid Chitin (skinning #11729/20499)"
    { 9501621, 20498 }, // "Gathersanity Item: Silithid Chitin (skinning #11730/20498)"
    { 9501622, 20499 }, // "Gathersanity Item: Broken Silithid Chitin (skinning #11730/20499)"
    { 9501623, 20501 }, // "Gathersanity Item: Heavy Silithid Carapace (skinning #11730/20501)"
    { 9501624, 20498 }, // "Gathersanity Item: Silithid Chitin (skinning #11731/20498)"
    { 9501625, 20499 }, // "Gathersanity Item: Broken Silithid Chitin (skinning #11731/20499)"
    { 9501626, 20498 }, // "Gathersanity Item: Silithid Chitin (skinning #11732/20498)"
    { 9501627, 20499 }, // "Gathersanity Item: Broken Silithid Chitin (skinning #11732/20499)"
    { 9501628, 20500 }, // "Gathersanity Item: Light Silithid Carapace (skinning #11732/20500)"
    { 9501629, 20498 }, // "Gathersanity Item: Silithid Chitin (skinning #11733/20498)"
    { 9501630, 20499 }, // "Gathersanity Item: Broken Silithid Chitin (skinning #11733/20499)"
    { 9501631, 20498 }, // "Gathersanity Item: Silithid Chitin (skinning #11734/20498)"
    { 9501632, 20499 }, // "Gathersanity Item: Broken Silithid Chitin (skinning #11734/20499)"
    { 9501633, 20501 }, // "Gathersanity Item: Heavy Silithid Carapace (skinning #11734/20501)"
    { 9501634, 4304 }, // "Gathersanity Item: Thick Leather (skinning #11735/4304)"
    { 9501635, 8169 }, // "Gathersanity Item: Thick Hide (skinning #11735/8169)"
    { 9501636, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #11735/8170)"
    { 9501637, 15408 }, // "Gathersanity Item: Heavy Scorpid Scale (skinning #11735/15408)"
    { 9501638, 4304 }, // "Gathersanity Item: Thick Leather (skinning #11736/4304)"
    { 9501639, 8169 }, // "Gathersanity Item: Thick Hide (skinning #11736/8169)"
    { 9501640, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #11736/8170)"
    { 9501641, 15408 }, // "Gathersanity Item: Heavy Scorpid Scale (skinning #11736/15408)"
    { 9501642, 4304 }, // "Gathersanity Item: Thick Leather (skinning #11737/4304)"
    { 9501643, 8169 }, // "Gathersanity Item: Thick Hide (skinning #11737/8169)"
    { 9501644, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #11737/8170)"
    { 9501645, 15408 }, // "Gathersanity Item: Heavy Scorpid Scale (skinning #11737/15408)"
    { 9501646, 4304 }, // "Gathersanity Item: Thick Leather (skinning #11740/4304)"
    { 9501647, 8169 }, // "Gathersanity Item: Thick Hide (skinning #11740/8169)"
    { 9501648, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #11740/8170)"
    { 9501649, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #11740/8171)"
    { 9501650, 4304 }, // "Gathersanity Item: Thick Leather (skinning #11741/4304)"
    { 9501651, 8169 }, // "Gathersanity Item: Thick Hide (skinning #11741/8169)"
    { 9501652, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #11741/8170)"
    { 9501653, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #11741/8171)"
    { 9501654, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #11981/15416)"
    { 9501655, 17012 }, // "Gathersanity Item: Core Leather (skinning #11982/17012)"
    { 9501656, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #11983/15416)"
    { 9501657, 2319 }, // "Gathersanity Item: Medium Leather (skinning #12037/2319)"
    { 9501658, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #12037/4234)"
    { 9501659, 4304 }, // "Gathersanity Item: Thick Leather (skinning #12121/4304)"
    { 9501660, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #12121/8170)"
    { 9501661, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #12121/8171)"
    { 9501662, 25649 }, // "Gathersanity Item: Knothide Leather Scraps (skinning #12121/25649)"
    { 9501663, 4304 }, // "Gathersanity Item: Thick Leather (skinning #12122/4304)"
    { 9501664, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #12122/8170)"
    { 9501665, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #12122/8171)"
    { 9501666, 21887 }, // "Gathersanity Item: Knothide Leather (skinning #12122/21887)"
    { 9501667, 25649 }, // "Gathersanity Item: Knothide Leather Scraps (skinning #12122/25649)"
    { 9501668, 4304 }, // "Gathersanity Item: Thick Leather (skinning #12129/4304)"
    { 9501669, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #12129/8165)"
    { 9501670, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #12129/8170)"
    { 9501671, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #12129/8171)"
    { 9501672, 4304 }, // "Gathersanity Item: Thick Leather (skinning #12207/4304)"
    { 9501673, 8169 }, // "Gathersanity Item: Thick Hide (skinning #12207/8169)"
    { 9501674, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #12207/8170)"
    { 9501675, 4304 }, // "Gathersanity Item: Thick Leather (skinning #12418/4304)"
    { 9501676, 8169 }, // "Gathersanity Item: Thick Hide (skinning #12418/8169)"
    { 9501677, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #12418/8170)"
    { 9501678, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #12418/8171)"
    { 9501679, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #12460/8170)"
    { 9501680, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #12460/8171)"
    { 9501681, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #12460/15416)"
    { 9501682, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #12461/8170)"
    { 9501683, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #12461/8171)"
    { 9501684, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #12461/15416)"
    { 9501685, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #12463/8170)"
    { 9501686, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #12463/8171)"
    { 9501687, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #12463/15416)"
    { 9501688, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #12464/8170)"
    { 9501689, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #12464/8171)"
    { 9501690, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #12464/15416)"
    { 9501691, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #12465/8170)"
    { 9501692, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #12465/8171)"
    { 9501693, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #12465/15416)"
    { 9501694, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #12467/8170)"
    { 9501695, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #12467/8171)"
    { 9501696, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #12467/15416)"
    { 9501697, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #12468/8170)"
    { 9501698, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #12468/8171)"
    { 9501699, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #12468/15416)"
    { 9501700, 4304 }, // "Gathersanity Item: Thick Leather (skinning #12474/4304)"
    { 9501701, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #12474/8165)"
    { 9501702, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #12474/8170)"
    { 9501703, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #12474/8171)"
    { 9501704, 15412 }, // "Gathersanity Item: Green Dragonscale (skinning #12474/15412)"
    { 9501705, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #12475/8165)"
    { 9501706, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #12475/8170)"
    { 9501707, 15412 }, // "Gathersanity Item: Green Dragonscale (skinning #12475/15412)"
    { 9501708, 4304 }, // "Gathersanity Item: Thick Leather (skinning #12476/4304)"
    { 9501709, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #12476/8170)"
    { 9501710, 15412 }, // "Gathersanity Item: Green Dragonscale (skinning #12476/15412)"
    { 9501711, 4304 }, // "Gathersanity Item: Thick Leather (skinning #12477/4304)"
    { 9501712, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #12477/8165)"
    { 9501713, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #12477/8170)"
    { 9501714, 15412 }, // "Gathersanity Item: Green Dragonscale (skinning #12477/15412)"
    { 9501715, 4304 }, // "Gathersanity Item: Thick Leather (skinning #12479/4304)"
    { 9501716, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #12479/8165)"
    { 9501717, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #12479/8170)"
    { 9501718, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #12479/8171)"
    { 9501719, 15412 }, // "Gathersanity Item: Green Dragonscale (skinning #12479/15412)"
    { 9501720, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #12498/8165)"
    { 9501721, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #12498/8170)"
    { 9501722, 15412 }, // "Gathersanity Item: Green Dragonscale (skinning #12498/15412)"
    { 9501723, 783 }, // "Gathersanity Item: Light Hide (skinning #12715/783)"
    { 9501724, 2318 }, // "Gathersanity Item: Light Leather (skinning #12715/2318)"
    { 9501725, 2319 }, // "Gathersanity Item: Medium Leather (skinning #12715/2319)"
    { 9501726, 4232 }, // "Gathersanity Item: Medium Hide (skinning #12715/4232)"
    { 9501727, 6470 }, // "Gathersanity Item: Deviate Scale (skinning #12715/6470)"
    { 9501728, 6471 }, // "Gathersanity Item: Perfect Deviate Scale (skinning #12715/6471)"
    { 9501729, 4304 }, // "Gathersanity Item: Thick Leather (skinning #12739/4304)"
    { 9501730, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #12739/8165)"
    { 9501731, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #12739/8170)"
    { 9501732, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #12739/8171)"
    { 9501733, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #12739/15416)"
    { 9501734, 4304 }, // "Gathersanity Item: Thick Leather (skinning #12800/4304)"
    { 9501735, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #12800/8170)"
    { 9501736, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #12800/8171)"
    { 9501737, 4304 }, // "Gathersanity Item: Thick Leather (skinning #12801/4304)"
    { 9501738, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #12801/8170)"
    { 9501739, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #12801/8171)"
    { 9501740, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #12802/8170)"
    { 9501741, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #12802/8171)"
    { 9501742, 4304 }, // "Gathersanity Item: Thick Leather (skinning #12899/4304)"
    { 9501743, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #12899/8165)"
    { 9501744, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #12899/8170)"
    { 9501745, 15414 }, // "Gathersanity Item: Red Dragonscale (skinning #12899/15414)"
    { 9501746, 4304 }, // "Gathersanity Item: Thick Leather (skinning #12900/4304)"
    { 9501747, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #12900/8165)"
    { 9501748, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #12900/8170)"
    { 9501749, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #12900/8171)"
    { 9501750, 15412 }, // "Gathersanity Item: Green Dragonscale (skinning #12900/15412)"
    { 9501751, 4304 }, // "Gathersanity Item: Thick Leather (skinning #13036/4304)"
    { 9501752, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #13036/8170)"
    { 9501753, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #13036/8171)"
    { 9501754, 20498 }, // "Gathersanity Item: Silithid Chitin (skinning #13136/20498)"
    { 9501755, 20499 }, // "Gathersanity Item: Broken Silithid Chitin (skinning #13136/20499)"
    { 9501756, 20500 }, // "Gathersanity Item: Light Silithid Carapace (skinning #13136/20500)"
    { 9501757, 20498 }, // "Gathersanity Item: Silithid Chitin (skinning #13301/20498)"
    { 9501758, 20499 }, // "Gathersanity Item: Broken Silithid Chitin (skinning #13301/20499)"
    { 9501759, 20500 }, // "Gathersanity Item: Light Silithid Carapace (skinning #13301/20500)"
    { 9501760, 4304 }, // "Gathersanity Item: Thick Leather (skinning #13323/4304)"
    { 9501761, 8169 }, // "Gathersanity Item: Thick Hide (skinning #13323/8169)"
    { 9501762, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #13323/8170)"
    { 9501763, 4304 }, // "Gathersanity Item: Thick Leather (skinning #13596/4304)"
    { 9501764, 8169 }, // "Gathersanity Item: Thick Hide (skinning #13596/8169)"
    { 9501765, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #13596/8170)"
    { 9501766, 4304 }, // "Gathersanity Item: Thick Leather (skinning #13599/4304)"
    { 9501767, 8167 }, // "Gathersanity Item: Turtle Scale (skinning #13599/8167)"
    { 9501768, 8169 }, // "Gathersanity Item: Thick Hide (skinning #13599/8169)"
    { 9501769, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #13599/8170)"
    { 9501770, 4304 }, // "Gathersanity Item: Thick Leather (skinning #13896/4304)"
    { 9501771, 8167 }, // "Gathersanity Item: Turtle Scale (skinning #13896/8167)"
    { 9501772, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #13896/8170)"
    { 9501773, 12607 }, // "Gathersanity Item: Brilliant Chromatic Scale (skinning #14020/12607)"
    { 9501774, 15412 }, // "Gathersanity Item: Green Dragonscale (skinning #14020/15412)"
    { 9501775, 15414 }, // "Gathersanity Item: Red Dragonscale (skinning #14020/15414)"
    { 9501776, 15415 }, // "Gathersanity Item: Blue Dragonscale (skinning #14020/15415)"
    { 9501777, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #14020/15416)"
    { 9501778, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #14123/4234)"
    { 9501779, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #14123/4235)"
    { 9501780, 4304 }, // "Gathersanity Item: Thick Leather (skinning #14123/4304)"
    { 9501781, 8167 }, // "Gathersanity Item: Turtle Scale (skinning #14123/8167)"
    { 9501782, 8169 }, // "Gathersanity Item: Thick Hide (skinning #14123/8169)"
    { 9501783, 2319 }, // "Gathersanity Item: Medium Leather (skinning #14228/2319)"
    { 9501784, 4232 }, // "Gathersanity Item: Medium Hide (skinning #14228/4232)"
    { 9501785, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #14228/4234)"
    { 9501786, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #14228/4235)"
    { 9501787, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #14234/4234)"
    { 9501788, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #14234/4235)"
    { 9501789, 4304 }, // "Gathersanity Item: Thick Leather (skinning #14234/4304)"
    { 9501790, 2318 }, // "Gathersanity Item: Light Leather (skinning #14272/2318)"
    { 9501791, 7286 }, // "Gathersanity Item: Black Whelp Scale (skinning #14272/7286)"
    { 9501792, 4304 }, // "Gathersanity Item: Thick Leather (skinning #14282/4304)"
    { 9501793, 8169 }, // "Gathersanity Item: Thick Hide (skinning #14282/8169)"
    { 9501794, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #14282/8170)"
    { 9501795, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #14282/8171)"
    { 9501796, 4304 }, // "Gathersanity Item: Thick Leather (skinning #14308/4304)"
    { 9501797, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #14308/8170)"
    { 9501798, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #14308/8171)"
    { 9501799, 15419 }, // "Gathersanity Item: Warbear Leather (skinning #14308/15419)"
    { 9501800, 4304 }, // "Gathersanity Item: Thick Leather (skinning #14398/4304)"
    { 9501801, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #14398/8165)"
    { 9501802, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #14398/8170)"
    { 9501803, 4304 }, // "Gathersanity Item: Thick Leather (skinning #14445/4304)"
    { 9501804, 8165 }, // "Gathersanity Item: Worn Dragonscale (skinning #14445/8165)"
    { 9501805, 8169 }, // "Gathersanity Item: Thick Hide (skinning #14445/8169)"
    { 9501806, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #14445/8170)"
    { 9501807, 15412 }, // "Gathersanity Item: Green Dragonscale (skinning #14445/15412)"
    { 9501808, 20498 }, // "Gathersanity Item: Silithid Chitin (skinning #14473/20498)"
    { 9501809, 20499 }, // "Gathersanity Item: Broken Silithid Chitin (skinning #14473/20499)"
    { 9501810, 20501 }, // "Gathersanity Item: Heavy Silithid Carapace (skinning #14473/20501)"
    { 9501811, 20498 }, // "Gathersanity Item: Silithid Chitin (skinning #14474/20498)"
    { 9501812, 20499 }, // "Gathersanity Item: Broken Silithid Chitin (skinning #14474/20499)"
    { 9501813, 20500 }, // "Gathersanity Item: Light Silithid Carapace (skinning #14474/20500)"
    { 9501814, 20498 }, // "Gathersanity Item: Silithid Chitin (skinning #14475/20498)"
    { 9501815, 20499 }, // "Gathersanity Item: Broken Silithid Chitin (skinning #14475/20499)"
    { 9501816, 4304 }, // "Gathersanity Item: Thick Leather (skinning #14502/4304)"
    { 9501817, 8169 }, // "Gathersanity Item: Thick Hide (skinning #14502/8169)"
    { 9501818, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #14502/8170)"
    { 9501819, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #14502/8171)"
    { 9501820, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #14601/15416)"
    { 9501821, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #14750/8170)"
    { 9501822, 4304 }, // "Gathersanity Item: Thick Leather (skinning #14821/4304)"
    { 9501823, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #14821/8170)"
    { 9501824, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #14821/8171)"
    { 9501825, 15412 }, // "Gathersanity Item: Green Dragonscale (skinning #14887/15412)"
    { 9501826, 20381 }, // "Gathersanity Item: Dreamscale (skinning #14887/20381)"
    { 9501827, 4304 }, // "Gathersanity Item: Thick Leather (skinning #15043/4304)"
    { 9501828, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #15043/8170)"
    { 9501829, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #15043/8171)"
    { 9501830, 4304 }, // "Gathersanity Item: Thick Leather (skinning #15196/4304)"
    { 9501831, 8169 }, // "Gathersanity Item: Thick Hide (skinning #15196/8169)"
    { 9501832, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #15196/8170)"
    { 9501833, 15408 }, // "Gathersanity Item: Heavy Scorpid Scale (skinning #15196/15408)"
    { 9501834, 20499 }, // "Gathersanity Item: Broken Silithid Chitin (skinning #15286/20499)"
    { 9501835, 20498 }, // "Gathersanity Item: Silithid Chitin (skinning #15288/20498)"
    { 9501836, 20499 }, // "Gathersanity Item: Broken Silithid Chitin (skinning #15288/20499)"
    { 9501837, 20498 }, // "Gathersanity Item: Silithid Chitin (skinning #15290/20498)"
    { 9501838, 20499 }, // "Gathersanity Item: Broken Silithid Chitin (skinning #15290/20499)"
    { 9501839, 20499 }, // "Gathersanity Item: Broken Silithid Chitin (skinning #15319/20499)"
    { 9501840, 20498 }, // "Gathersanity Item: Silithid Chitin (skinning #15320/20498)"
    { 9501841, 20499 }, // "Gathersanity Item: Broken Silithid Chitin (skinning #15320/20499)"
    { 9501842, 20501 }, // "Gathersanity Item: Heavy Silithid Carapace (skinning #15320/20501)"
    { 9501843, 20498 }, // "Gathersanity Item: Silithid Chitin (skinning #15323/20498)"
    { 9501844, 20499 }, // "Gathersanity Item: Broken Silithid Chitin (skinning #15323/20499)"
    { 9501845, 20501 }, // "Gathersanity Item: Heavy Silithid Carapace (skinning #15323/20501)"
    { 9501846, 20498 }, // "Gathersanity Item: Silithid Chitin (skinning #15325/20498)"
    { 9501847, 20499 }, // "Gathersanity Item: Broken Silithid Chitin (skinning #15325/20499)"
    { 9501848, 20500 }, // "Gathersanity Item: Light Silithid Carapace (skinning #15325/20500)"
    { 9501849, 20498 }, // "Gathersanity Item: Silithid Chitin (skinning #15327/20498)"
    { 9501850, 20499 }, // "Gathersanity Item: Broken Silithid Chitin (skinning #15327/20499)"
    { 9501851, 20500 }, // "Gathersanity Item: Light Silithid Carapace (skinning #15327/20500)"
    { 9501852, 20499 }, // "Gathersanity Item: Broken Silithid Chitin (skinning #15336/20499)"
    { 9501853, 15412 }, // "Gathersanity Item: Green Dragonscale (skinning #15412/15412)"
    { 9501854, 15414 }, // "Gathersanity Item: Red Dragonscale (skinning #15414/15414)"
    { 9501855, 15415 }, // "Gathersanity Item: Blue Dragonscale (skinning #15415/15415)"
    { 9501856, 15416 }, // "Gathersanity Item: Black Dragonscale (skinning #15416/15416)"
    { 9501857, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #15554/8170)"
    { 9501858, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #16095/8170)"
    { 9501859, 4304 }, // "Gathersanity Item: Thick Leather (skinning #16117/4304)"
    { 9501860, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #16117/8170)"
    { 9501861, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #16117/8171)"
    { 9501862, 21887 }, // "Gathersanity Item: Knothide Leather (skinning #16181/21887)"
    { 9501863, 25649 }, // "Gathersanity Item: Knothide Leather Scraps (skinning #16181/25649)"
    { 9501864, 25707 }, // "Gathersanity Item: Fel Hide (skinning #16181/25707)"
    { 9501865, 2318 }, // "Gathersanity Item: Light Leather (skinning #17201/2318)"
    { 9501866, 2934 }, // "Gathersanity Item: Ruined Leather Scraps (skinning #17201/2934)"
    { 9501867, 21887 }, // "Gathersanity Item: Knothide Leather (skinning #17307/21887)"
    { 9501868, 2318 }, // "Gathersanity Item: Light Leather (skinning #17374/2318)"
    { 9501869, 2934 }, // "Gathersanity Item: Ruined Leather Scraps (skinning #17374/2934)"
    { 9501870, 783 }, // "Gathersanity Item: Light Hide (skinning #17592/783)"
    { 9501871, 2318 }, // "Gathersanity Item: Light Leather (skinning #17592/2318)"
    { 9501872, 2319 }, // "Gathersanity Item: Medium Leather (skinning #17592/2319)"
    { 9501873, 783 }, // "Gathersanity Item: Light Hide (skinning #17661/783)"
    { 9501874, 2318 }, // "Gathersanity Item: Light Leather (skinning #17661/2318)"
    { 9501875, 2319 }, // "Gathersanity Item: Medium Leather (skinning #17661/2319)"
    { 9501876, 21887 }, // "Gathersanity Item: Knothide Leather (skinning #18398/21887)"
    { 9501877, 25649 }, // "Gathersanity Item: Knothide Leather Scraps (skinning #18398/25649)"
    { 9501878, 25708 }, // "Gathersanity Item: Thick Clefthoof Leather (skinning #18398/25708)"
    { 9501879, 21887 }, // "Gathersanity Item: Knothide Leather (skinning #20520/21887)"
    { 9501880, 25649 }, // "Gathersanity Item: Knothide Leather Scraps (skinning #20520/25649)"
    { 9501881, 25699 }, // "Gathersanity Item: Crystal Infused Leather (skinning #20520/25699)"
    { 9501882, 25700 }, // "Gathersanity Item: Fel Scales (skinning #20520/25700)"
    { 9501883, 21887 }, // "Gathersanity Item: Knothide Leather (skinning #20775/21887)"
    { 9501884, 25649 }, // "Gathersanity Item: Knothide Leather Scraps (skinning #20775/25649)"
    { 9501885, 21887 }, // "Gathersanity Item: Knothide Leather (skinning #21387/21887)"
    { 9501886, 25649 }, // "Gathersanity Item: Knothide Leather Scraps (skinning #21387/25649)"
    { 9501887, 21887 }, // "Gathersanity Item: Knothide Leather (skinning #21697/21887)"
    { 9501888, 21887 }, // "Gathersanity Item: Knothide Leather (skinning #21723/21887)"
    { 9501889, 21887 }, // "Gathersanity Item: Knothide Leather (skinning #22072/21887)"
    { 9501890, 25649 }, // "Gathersanity Item: Knothide Leather Scraps (skinning #22072/25649)"
    { 9501891, 35229 }, // "Gathersanity Item: Nether Residue (skinning #22072/35229)"
    { 9501892, 21887 }, // "Gathersanity Item: Knothide Leather (skinning #22885/21887)"
    { 9501893, 21887 }, // "Gathersanity Item: Knothide Leather (skinning #23163/21887)"
    { 9501894, 25649 }, // "Gathersanity Item: Knothide Leather Scraps (skinning #23163/25649)"
    { 9501895, 25707 }, // "Gathersanity Item: Fel Hide (skinning #23163/25707)"
    { 9501896, 35229 }, // "Gathersanity Item: Nether Residue (skinning #23163/35229)"
    { 9501897, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #23873/4234)"
    { 9501898, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #23873/4235)"
    { 9501899, 4304 }, // "Gathersanity Item: Thick Leather (skinning #23873/4304)"
    { 9501900, 21887 }, // "Gathersanity Item: Knothide Leather (skinning #24047/21887)"
    { 9501901, 25699 }, // "Gathersanity Item: Crystal Infused Leather (skinning #24047/25699)"
    { 9501902, 21887 }, // "Gathersanity Item: Knothide Leather (skinning #25599/21887)"
    { 9501903, 25649 }, // "Gathersanity Item: Knothide Leather Scraps (skinning #25599/25649)"
    { 9501904, 25707 }, // "Gathersanity Item: Fel Hide (skinning #25599/25707)"
    { 9501905, 33568 }, // "Gathersanity Item: Borean Leather (skinning #26723/33568)"
    { 9501906, 38557 }, // "Gathersanity Item: Icy Dragonscale (skinning #26723/38557)"
    { 9501907, 44128 }, // "Gathersanity Item: Arctic Fur (skinning #26723/44128)"
    { 9501908, 36813 }, // "Gathersanity Item: Sprung Sprocket (skinning #27641/36813)"
    { 9501909, 39681 }, // "Gathersanity Item: Handful of Cobalt Bolts (skinning #27641/39681)"
    { 9501910, 39682 }, // "Gathersanity Item: Overcharged Capacitor (skinning #27641/39682)"
    { 9501911, 39684 }, // "Gathersanity Item: Hair Trigger (skinning #27641/39684)"
    { 9501912, 39685 }, // "Gathersanity Item: Indestructible Frame (skinning #27641/39685)"
    { 9501913, 39690 }, // "Gathersanity Item: Volatile Blasting Trigger (skinning #27641/39690)"
    { 9501914, 41337 }, // "Gathersanity Item: Whizzed-Out Gizmo (skinning #27641/41337)"
    { 9501915, 41338 }, // "Gathersanity Item: Sprung Whirlygig (skinning #27641/41338)"
    { 9501916, 49050 }, // "Gathersanity Item: Schematic: Jeeves (skinning #27641/49050)"
    { 9501917, 33568 }, // "Gathersanity Item: Borean Leather (skinning #28860/33568)"
    { 9501918, 38557 }, // "Gathersanity Item: Icy Dragonscale (skinning #28860/38557)"
    { 9501919, 44128 }, // "Gathersanity Item: Arctic Fur (skinning #28860/44128)"
    { 9501920, 39681 }, // "Gathersanity Item: Handful of Cobalt Bolts (skinning #29380/39681)"
    { 9501921, 39682 }, // "Gathersanity Item: Overcharged Capacitor (skinning #29380/39682)"
    { 9501922, 39690 }, // "Gathersanity Item: Volatile Blasting Trigger (skinning #29380/39690)"
    { 9501923, 41337 }, // "Gathersanity Item: Whizzed-Out Gizmo (skinning #29380/41337)"
    { 9501924, 41338 }, // "Gathersanity Item: Sprung Whirlygig (skinning #29380/41338)"
    { 9501925, 49050 }, // "Gathersanity Item: Schematic: Jeeves (skinning #29380/49050)"
    { 9501926, 39681 }, // "Gathersanity Item: Handful of Cobalt Bolts (skinning #29729/39681)"
    { 9501927, 39690 }, // "Gathersanity Item: Volatile Blasting Trigger (skinning #29729/39690)"
    { 9501928, 41337 }, // "Gathersanity Item: Whizzed-Out Gizmo (skinning #29729/41337)"
    { 9501929, 41338 }, // "Gathersanity Item: Sprung Whirlygig (skinning #29729/41338)"
    { 9501930, 49050 }, // "Gathersanity Item: Schematic: Jeeves (skinning #29729/49050)"
    { 9501931, 39681 }, // "Gathersanity Item: Handful of Cobalt Bolts (skinning #29730/39681)"
    { 9501932, 39682 }, // "Gathersanity Item: Overcharged Capacitor (skinning #29730/39682)"
    { 9501933, 39690 }, // "Gathersanity Item: Volatile Blasting Trigger (skinning #29730/39690)"
    { 9501934, 41337 }, // "Gathersanity Item: Whizzed-Out Gizmo (skinning #29730/41337)"
    { 9501935, 41338 }, // "Gathersanity Item: Sprung Whirlygig (skinning #29730/41338)"
    { 9501936, 49050 }, // "Gathersanity Item: Schematic: Jeeves (skinning #29730/49050)"
    { 9501937, 33568 }, // "Gathersanity Item: Borean Leather (skinning #30260/33568)"
    { 9501938, 33568 }, // "Gathersanity Item: Borean Leather (skinning #32517/33568)"
    { 9501939, 44128 }, // "Gathersanity Item: Arctic Fur (skinning #32517/44128)"
    { 9501940, 44687 }, // "Gathersanity Item: Loque'Nahak's Pelt (skinning #32517/44687)"
    { 9501941, 33568 }, // "Gathersanity Item: Borean Leather (skinning #34797/33568)"
    { 9501942, 44128 }, // "Gathersanity Item: Arctic Fur (skinning #34797/44128)"
    { 9501943, 33568 }, // "Gathersanity Item: Borean Leather (skinning #37501/33568)"
    { 9501944, 38558 }, // "Gathersanity Item: Nerubian Chitin (skinning #37501/38558)"
    { 9501945, 33568 }, // "Gathersanity Item: Borean Leather (skinning #37502/33568)"
    { 9501946, 38558 }, // "Gathersanity Item: Nerubian Chitin (skinning #37502/38558)"
    { 9501947, 21887 }, // "Gathersanity Item: Knothide Leather (skinning #70060/21887)"
    { 9501948, 25649 }, // "Gathersanity Item: Knothide Leather Scraps (skinning #70060/25649)"
    { 9501949, 21887 }, // "Gathersanity Item: Knothide Leather (skinning #70061/21887)"
    { 9501950, 25649 }, // "Gathersanity Item: Knothide Leather Scraps (skinning #70061/25649)"
    { 9501951, 21887 }, // "Gathersanity Item: Knothide Leather (skinning #70062/21887)"
    { 9501952, 25649 }, // "Gathersanity Item: Knothide Leather Scraps (skinning #70062/25649)"
    { 9501953, 21887 }, // "Gathersanity Item: Knothide Leather (skinning #70063/21887)"
    { 9501954, 25649 }, // "Gathersanity Item: Knothide Leather Scraps (skinning #70063/25649)"
    { 9501955, 21887 }, // "Gathersanity Item: Knothide Leather (skinning #70064/21887)"
    { 9501956, 25649 }, // "Gathersanity Item: Knothide Leather Scraps (skinning #70064/25649)"
    { 9501957, 21887 }, // "Gathersanity Item: Knothide Leather (skinning #70065/21887)"
    { 9501958, 25649 }, // "Gathersanity Item: Knothide Leather Scraps (skinning #70065/25649)"
    { 9501959, 21887 }, // "Gathersanity Item: Knothide Leather (skinning #70066/21887)"
    { 9501960, 25649 }, // "Gathersanity Item: Knothide Leather Scraps (skinning #70066/25649)"
    { 9501961, 21887 }, // "Gathersanity Item: Knothide Leather (skinning #70067/21887)"
    { 9501962, 21887 }, // "Gathersanity Item: Knothide Leather (skinning #70068/21887)"
    { 9501963, 25649 }, // "Gathersanity Item: Knothide Leather Scraps (skinning #70068/25649)"
    { 9501964, 21887 }, // "Gathersanity Item: Knothide Leather (skinning #70069/21887)"
    { 9501965, 21887 }, // "Gathersanity Item: Knothide Leather (skinning #70160/21887)"
    { 9501966, 25649 }, // "Gathersanity Item: Knothide Leather Scraps (skinning #70160/25649)"
    { 9501967, 25707 }, // "Gathersanity Item: Fel Hide (skinning #70160/25707)"
    { 9501968, 21887 }, // "Gathersanity Item: Knothide Leather (skinning #70161/21887)"
    { 9501969, 25649 }, // "Gathersanity Item: Knothide Leather Scraps (skinning #70161/25649)"
    { 9501970, 25707 }, // "Gathersanity Item: Fel Hide (skinning #70161/25707)"
    { 9501971, 21887 }, // "Gathersanity Item: Knothide Leather (skinning #70162/21887)"
    { 9501972, 25649 }, // "Gathersanity Item: Knothide Leather Scraps (skinning #70162/25649)"
    { 9501973, 25707 }, // "Gathersanity Item: Fel Hide (skinning #70162/25707)"
    { 9501974, 21887 }, // "Gathersanity Item: Knothide Leather (skinning #70163/21887)"
    { 9501975, 25649 }, // "Gathersanity Item: Knothide Leather Scraps (skinning #70163/25649)"
    { 9501976, 25699 }, // "Gathersanity Item: Crystal Infused Leather (skinning #70163/25699)"
    { 9501977, 25700 }, // "Gathersanity Item: Fel Scales (skinning #70163/25700)"
    { 9501978, 21887 }, // "Gathersanity Item: Knothide Leather (skinning #70164/21887)"
    { 9501979, 25649 }, // "Gathersanity Item: Knothide Leather Scraps (skinning #70164/25649)"
    { 9501980, 25699 }, // "Gathersanity Item: Crystal Infused Leather (skinning #70164/25699)"
    { 9501981, 25700 }, // "Gathersanity Item: Fel Scales (skinning #70164/25700)"
    { 9501982, 21887 }, // "Gathersanity Item: Knothide Leather (skinning #70165/21887)"
    { 9501983, 25649 }, // "Gathersanity Item: Knothide Leather Scraps (skinning #70165/25649)"
    { 9501984, 25699 }, // "Gathersanity Item: Crystal Infused Leather (skinning #70165/25699)"
    { 9501985, 25700 }, // "Gathersanity Item: Fel Scales (skinning #70165/25700)"
    { 9501986, 32470 }, // "Gathersanity Item: Nethermine Flayer Hide (skinning #70165/32470)"
    { 9501987, 21887 }, // "Gathersanity Item: Knothide Leather (skinning #70166/21887)"
    { 9501988, 25649 }, // "Gathersanity Item: Knothide Leather Scraps (skinning #70166/25649)"
    { 9501989, 25708 }, // "Gathersanity Item: Thick Clefthoof Leather (skinning #70166/25708)"
    { 9501990, 21887 }, // "Gathersanity Item: Knothide Leather (skinning #70167/21887)"
    { 9501991, 25649 }, // "Gathersanity Item: Knothide Leather Scraps (skinning #70167/25649)"
    { 9501992, 25708 }, // "Gathersanity Item: Thick Clefthoof Leather (skinning #70167/25708)"
    { 9501993, 21887 }, // "Gathersanity Item: Knothide Leather (skinning #70168/21887)"
    { 9501994, 25649 }, // "Gathersanity Item: Knothide Leather Scraps (skinning #70168/25649)"
    { 9501995, 29539 }, // "Gathersanity Item: Cobra Scales (skinning #70168/29539)"
    { 9501996, 21887 }, // "Gathersanity Item: Knothide Leather (skinning #70169/21887)"
    { 9501997, 25649 }, // "Gathersanity Item: Knothide Leather Scraps (skinning #70169/25649)"
    { 9501998, 29547 }, // "Gathersanity Item: Wind Scales (skinning #70169/29547)"
    { 9501999, 21887 }, // "Gathersanity Item: Knothide Leather (skinning #70170/21887)"
    { 9502000, 29547 }, // "Gathersanity Item: Wind Scales (skinning #70170/29547)"
    { 9502001, 21887 }, // "Gathersanity Item: Knothide Leather (skinning #70171/21887)"
    { 9502002, 25649 }, // "Gathersanity Item: Knothide Leather Scraps (skinning #70171/25649)"
    { 9502003, 29548 }, // "Gathersanity Item: Nether Dragonscales (skinning #70171/29548)"
    { 9502004, 21887 }, // "Gathersanity Item: Knothide Leather (skinning #70172/21887)"
    { 9502005, 25649 }, // "Gathersanity Item: Knothide Leather Scraps (skinning #70172/25649)"
    { 9502006, 29548 }, // "Gathersanity Item: Nether Dragonscales (skinning #70172/29548)"
    { 9502007, 33567 }, // "Gathersanity Item: Borean Leather Scraps (skinning #70200/33567)"
    { 9502008, 33568 }, // "Gathersanity Item: Borean Leather (skinning #70200/33568)"
    { 9502009, 44128 }, // "Gathersanity Item: Arctic Fur (skinning #70200/44128)"
    { 9502010, 33567 }, // "Gathersanity Item: Borean Leather Scraps (skinning #70201/33567)"
    { 9502011, 33568 }, // "Gathersanity Item: Borean Leather (skinning #70201/33568)"
    { 9502012, 44128 }, // "Gathersanity Item: Arctic Fur (skinning #70201/44128)"
    { 9502013, 33567 }, // "Gathersanity Item: Borean Leather Scraps (skinning #70202/33567)"
    { 9502014, 33568 }, // "Gathersanity Item: Borean Leather (skinning #70202/33568)"
    { 9502015, 44128 }, // "Gathersanity Item: Arctic Fur (skinning #70202/44128)"
    { 9502016, 33568 }, // "Gathersanity Item: Borean Leather (skinning #70203/33568)"
    { 9502017, 38558 }, // "Gathersanity Item: Nerubian Chitin (skinning #70203/38558)"
    { 9502018, 44128 }, // "Gathersanity Item: Arctic Fur (skinning #70203/44128)"
    { 9502019, 33567 }, // "Gathersanity Item: Borean Leather Scraps (skinning #70204/33567)"
    { 9502020, 33568 }, // "Gathersanity Item: Borean Leather (skinning #70204/33568)"
    { 9502021, 38558 }, // "Gathersanity Item: Nerubian Chitin (skinning #70204/38558)"
    { 9502022, 44128 }, // "Gathersanity Item: Arctic Fur (skinning #70204/44128)"
    { 9502023, 33568 }, // "Gathersanity Item: Borean Leather (skinning #70205/33568)"
    { 9502024, 38558 }, // "Gathersanity Item: Nerubian Chitin (skinning #70205/38558)"
    { 9502025, 44128 }, // "Gathersanity Item: Arctic Fur (skinning #70205/44128)"
    { 9502026, 33567 }, // "Gathersanity Item: Borean Leather Scraps (skinning #70206/33567)"
    { 9502027, 33568 }, // "Gathersanity Item: Borean Leather (skinning #70206/33568)"
    { 9502028, 38561 }, // "Gathersanity Item: Jormungar Scale (skinning #70206/38561)"
    { 9502029, 44128 }, // "Gathersanity Item: Arctic Fur (skinning #70206/44128)"
    { 9502030, 33568 }, // "Gathersanity Item: Borean Leather (skinning #70207/33568)"
    { 9502031, 38561 }, // "Gathersanity Item: Jormungar Scale (skinning #70207/38561)"
    { 9502032, 44128 }, // "Gathersanity Item: Arctic Fur (skinning #70207/44128)"
    { 9502033, 33567 }, // "Gathersanity Item: Borean Leather Scraps (skinning #70208/33567)"
    { 9502034, 33568 }, // "Gathersanity Item: Borean Leather (skinning #70208/33568)"
    { 9502035, 38557 }, // "Gathersanity Item: Icy Dragonscale (skinning #70208/38557)"
    { 9502036, 44128 }, // "Gathersanity Item: Arctic Fur (skinning #70208/44128)"
    { 9502037, 33568 }, // "Gathersanity Item: Borean Leather (skinning #70209/33568)"
    { 9502038, 38557 }, // "Gathersanity Item: Icy Dragonscale (skinning #70209/38557)"
    { 9502039, 44128 }, // "Gathersanity Item: Arctic Fur (skinning #70209/44128)"
    { 9502040, 33568 }, // "Gathersanity Item: Borean Leather (skinning #70210/33568)"
    { 9502041, 38557 }, // "Gathersanity Item: Icy Dragonscale (skinning #70210/38557)"
    { 9502042, 44128 }, // "Gathersanity Item: Arctic Fur (skinning #70210/44128)"
    { 9502043, 33568 }, // "Gathersanity Item: Borean Leather (skinning #70211/33568)"
    { 9502044, 44128 }, // "Gathersanity Item: Arctic Fur (skinning #70211/44128)"
    { 9502045, 33568 }, // "Gathersanity Item: Borean Leather (skinning #70212/33568)"
    { 9502046, 44128 }, // "Gathersanity Item: Arctic Fur (skinning #70212/44128)"
    { 9502047, 33568 }, // "Gathersanity Item: Borean Leather (skinning #70213/33568)"
    { 9502048, 44128 }, // "Gathersanity Item: Arctic Fur (skinning #70213/44128)"
    { 9502049, 33568 }, // "Gathersanity Item: Borean Leather (skinning #70214/33568)"
    { 9502050, 44128 }, // "Gathersanity Item: Arctic Fur (skinning #70214/44128)"
    { 9502051, 33568 }, // "Gathersanity Item: Borean Leather (skinning #70215/33568)"
    { 9502052, 38558 }, // "Gathersanity Item: Nerubian Chitin (skinning #70215/38558)"
    { 9502053, 44128 }, // "Gathersanity Item: Arctic Fur (skinning #70215/44128)"
    { 9502054, 22575 }, // "Gathersanity Item: Mote of Life (skinning #80000/22575)"
    { 9502055, 22785 }, // "Gathersanity Item: Felweed (skinning #80000/22785)"
    { 9502056, 22786 }, // "Gathersanity Item: Dreaming Glory (skinning #80000/22786)"
    { 9502057, 22787 }, // "Gathersanity Item: Ragveil (skinning #80000/22787)"
    { 9502058, 22789 }, // "Gathersanity Item: Terocone (skinning #80000/22789)"
    { 9502059, 22790 }, // "Gathersanity Item: Ancient Lichen (skinning #80000/22790)"
    { 9502060, 22794 }, // "Gathersanity Item: Fel Lotus (skinning #80000/22794)"
    { 9502061, 24401 }, // "Gathersanity Item: Unidentified Plant Parts (skinning #80000/24401)"
    { 9502062, 25813 }, // "Gathersanity Item: Small Mushroom (skinning #80000/25813)"
    { 9502063, 27859 }, // "Gathersanity Item: Zangar Caps (skinning #80000/27859)"
    { 9502064, 22575 }, // "Gathersanity Item: Mote of Life (skinning #80001/22575)"
    { 9502065, 22785 }, // "Gathersanity Item: Felweed (skinning #80001/22785)"
    { 9502066, 22786 }, // "Gathersanity Item: Dreaming Glory (skinning #80001/22786)"
    { 9502067, 22787 }, // "Gathersanity Item: Ragveil (skinning #80001/22787)"
    { 9502068, 22789 }, // "Gathersanity Item: Terocone (skinning #80001/22789)"
    { 9502069, 22790 }, // "Gathersanity Item: Ancient Lichen (skinning #80001/22790)"
    { 9502070, 22794 }, // "Gathersanity Item: Fel Lotus (skinning #80001/22794)"
    { 9502071, 24401 }, // "Gathersanity Item: Unidentified Plant Parts (skinning #80001/24401)"
    { 9502072, 25813 }, // "Gathersanity Item: Small Mushroom (skinning #80001/25813)"
    { 9502073, 29453 }, // "Gathersanity Item: Sporeggar Mushroom (skinning #80001/29453)"
    { 9502074, 22575 }, // "Gathersanity Item: Mote of Life (skinning #80002/22575)"
    { 9502075, 22785 }, // "Gathersanity Item: Felweed (skinning #80002/22785)"
    { 9502076, 22786 }, // "Gathersanity Item: Dreaming Glory (skinning #80002/22786)"
    { 9502077, 22787 }, // "Gathersanity Item: Ragveil (skinning #80002/22787)"
    { 9502078, 22789 }, // "Gathersanity Item: Terocone (skinning #80002/22789)"
    { 9502079, 22790 }, // "Gathersanity Item: Ancient Lichen (skinning #80002/22790)"
    { 9502080, 22793 }, // "Gathersanity Item: Mana Thistle (skinning #80002/22793)"
    { 9502081, 22794 }, // "Gathersanity Item: Fel Lotus (skinning #80002/22794)"
    { 9502082, 33452 }, // "Gathersanity Item: Honey-Spiced Lichen (skinning #80007/33452)"
    { 9502083, 36901 }, // "Gathersanity Item: Goldclover (skinning #80007/36901)"
    { 9502084, 36902 }, // "Gathersanity Item: Constrictor Grass (skinning #80007/36902)"
    { 9502085, 36903 }, // "Gathersanity Item: Adder's Tongue (skinning #80007/36903)"
    { 9502086, 36904 }, // "Gathersanity Item: Tiger Lily (skinning #80007/36904)"
    { 9502087, 36905 }, // "Gathersanity Item: Lichbloom (skinning #80007/36905)"
    { 9502088, 36906 }, // "Gathersanity Item: Icethorn (skinning #80007/36906)"
    { 9502089, 36907 }, // "Gathersanity Item: Talandra's Rose (skinning #80007/36907)"
    { 9502090, 37704 }, // "Gathersanity Item: Crystallized Life (skinning #80007/37704)"
    { 9502091, 39516 }, // "Gathersanity Item: Frosty Mushroom (skinning #80007/39516)"
    { 9502092, 22573 }, // "Gathersanity Item: Mote of Earth (skinning #80100/22573)"
    { 9502093, 24189 }, // "Gathersanity Item: Crystalline Fragments (skinning #80100/24189)"
    { 9502094, 22573 }, // "Gathersanity Item: Mote of Earth (skinning #80101/22573)"
    { 9502095, 24189 }, // "Gathersanity Item: Crystalline Fragments (skinning #80101/24189)"
    { 9502096, 21929 }, // "Gathersanity Item: Flame Spessarite (skinning #80102/21929)"
    { 9502097, 23077 }, // "Gathersanity Item: Blood Garnet (skinning #80102/23077)"
    { 9502098, 23079 }, // "Gathersanity Item: Deep Peridot (skinning #80102/23079)"
    { 9502099, 23107 }, // "Gathersanity Item: Shadow Draenite (skinning #80102/23107)"
    { 9502100, 23112 }, // "Gathersanity Item: Golden Draenite (skinning #80102/23112)"
    { 9502101, 23117 }, // "Gathersanity Item: Azure Moonstone (skinning #80102/23117)"
    { 9502102, 23425 }, // "Gathersanity Item: Adamantite Ore (skinning #80102/23425)"
    { 9502103, 23436 }, // "Gathersanity Item: Living Ruby (skinning #80102/23436)"
    { 9502104, 23437 }, // "Gathersanity Item: Talasite (skinning #80102/23437)"
    { 9502105, 23438 }, // "Gathersanity Item: Star of Elune (skinning #80102/23438)"
    { 9502106, 23439 }, // "Gathersanity Item: Noble Topaz (skinning #80102/23439)"
    { 9502107, 23440 }, // "Gathersanity Item: Dawnstone (skinning #80102/23440)"
    { 9502108, 23441 }, // "Gathersanity Item: Nightseye (skinning #80102/23441)"
    { 9502109, 37701 }, // "Gathersanity Item: Crystallized Earth (skinning #80103/37701)"
    { 9502110, 39220 }, // "Gathersanity Item: Geodesic Fragments (skinning #80103/39220)"
    { 9502111, 37701 }, // "Gathersanity Item: Crystallized Earth (skinning #80104/37701)"
    { 9502112, 39220 }, // "Gathersanity Item: Geodesic Fragments (skinning #80104/39220)"
    { 9502113, 22578 }, // "Gathersanity Item: Mote of Water (skinning #80200/22578)"
    { 9502114, 22577 }, // "Gathersanity Item: Mote of Shadow (skinning #80201/22577)"
    { 9502115, 22576 }, // "Gathersanity Item: Mote of Mana (skinning #80202/22576)"
    { 9502116, 22572 }, // "Gathersanity Item: Mote of Air (skinning #80203/22572)"
    { 9502117, 37702 }, // "Gathersanity Item: Crystallized Fire (skinning #80204/37702)"
    { 9502118, 37702 }, // "Gathersanity Item: Crystallized Fire (skinning #80205/37702)"
    { 9502119, 37705 }, // "Gathersanity Item: Crystallized Water (skinning #80205/37705)"
    { 9502120, 37700 }, // "Gathersanity Item: Crystallized Air (skinning #80206/37700)"
    { 9502121, 37705 }, // "Gathersanity Item: Crystallized Water (skinning #80206/37705)"
    { 9502122, 783 }, // "Gathersanity Item: Light Hide (skinning #100001/783)"
    { 9502123, 2934 }, // "Gathersanity Item: Ruined Leather Scraps (skinning #100001/2934)"
    { 9502124, 2318 }, // "Gathersanity Item: Light Leather (skinning #100002/2318)"
    { 9502125, 2934 }, // "Gathersanity Item: Ruined Leather Scraps (skinning #100002/2934)"
    { 9502126, 4304 }, // "Gathersanity Item: Thick Leather (skinning #100003/4304)"
    { 9502127, 8169 }, // "Gathersanity Item: Thick Hide (skinning #100003/8169)"
    { 9502128, 8170 }, // "Gathersanity Item: Rugged Leather (skinning #100003/8170)"
    { 9502129, 8171 }, // "Gathersanity Item: Rugged Hide (skinning #100003/8171)"
    { 9502130, 783 }, // "Gathersanity Item: Light Hide (skinning #100004/783)"
    { 9502131, 2318 }, // "Gathersanity Item: Light Leather (skinning #100004/2318)"
    { 9502132, 2319 }, // "Gathersanity Item: Medium Leather (skinning #100004/2319)"
    { 9502133, 4232 }, // "Gathersanity Item: Medium Hide (skinning #100004/4232)"
    { 9502134, 783 }, // "Gathersanity Item: Light Hide (skinning #100005/783)"
    { 9502135, 2318 }, // "Gathersanity Item: Light Leather (skinning #100005/2318)"
    { 9502136, 2319 }, // "Gathersanity Item: Medium Leather (skinning #100005/2319)"
    { 9502137, 4232 }, // "Gathersanity Item: Medium Hide (skinning #100005/4232)"
    { 9502138, 783 }, // "Gathersanity Item: Light Hide (skinning #100006/783)"
    { 9502139, 2318 }, // "Gathersanity Item: Light Leather (skinning #100006/2318)"
    { 9502140, 2319 }, // "Gathersanity Item: Medium Leather (skinning #100006/2319)"
    { 9502141, 4232 }, // "Gathersanity Item: Medium Hide (skinning #100006/4232)"
    { 9502142, 783 }, // "Gathersanity Item: Light Hide (skinning #100007/783)"
    { 9502143, 2318 }, // "Gathersanity Item: Light Leather (skinning #100007/2318)"
    { 9502144, 2319 }, // "Gathersanity Item: Medium Leather (skinning #100007/2319)"
    { 9502145, 4232 }, // "Gathersanity Item: Medium Hide (skinning #100007/4232)"
    { 9502146, 783 }, // "Gathersanity Item: Light Hide (skinning #100008/783)"
    { 9502147, 2318 }, // "Gathersanity Item: Light Leather (skinning #100008/2318)"
    { 9502148, 2319 }, // "Gathersanity Item: Medium Leather (skinning #100008/2319)"
    { 9502149, 4232 }, // "Gathersanity Item: Medium Hide (skinning #100008/4232)"
    { 9502150, 7287 }, // "Gathersanity Item: Red Whelp Scale (skinning #100008/7287)"
    { 9502151, 783 }, // "Gathersanity Item: Light Hide (skinning #100009/783)"
    { 9502152, 2318 }, // "Gathersanity Item: Light Leather (skinning #100009/2318)"
    { 9502153, 2319 }, // "Gathersanity Item: Medium Leather (skinning #100009/2319)"
    { 9502154, 4232 }, // "Gathersanity Item: Medium Hide (skinning #100009/4232)"
    { 9502155, 6470 }, // "Gathersanity Item: Deviate Scale (skinning #100009/6470)"
    { 9502156, 6471 }, // "Gathersanity Item: Perfect Deviate Scale (skinning #100009/6471)"
    { 9502157, 2319 }, // "Gathersanity Item: Medium Leather (skinning #100010/2319)"
    { 9502158, 4232 }, // "Gathersanity Item: Medium Hide (skinning #100010/4232)"
    { 9502159, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #100010/4234)"
    { 9502160, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #100010/4235)"
    { 9502161, 2319 }, // "Gathersanity Item: Medium Leather (skinning #100011/2319)"
    { 9502162, 4232 }, // "Gathersanity Item: Medium Hide (skinning #100011/4232)"
    { 9502163, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #100011/4234)"
    { 9502164, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #100011/4235)"
    { 9502165, 2319 }, // "Gathersanity Item: Medium Leather (skinning #100012/2319)"
    { 9502166, 4232 }, // "Gathersanity Item: Medium Hide (skinning #100012/4232)"
    { 9502167, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #100012/4234)"
    { 9502168, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #100012/4235)"
    { 9502169, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #100013/4234)"
    { 9502170, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #100013/4235)"
    { 9502171, 4304 }, // "Gathersanity Item: Thick Leather (skinning #100013/4304)"
    { 9502172, 4234 }, // "Gathersanity Item: Heavy Leather (skinning #100014/4234)"
    { 9502173, 4235 }, // "Gathersanity Item: Heavy Hide (skinning #100014/4235)"
    { 9502174, 4304 }, // "Gathersanity Item: Thick Leather (skinning #100014/4304)"
    { 9502175, 8169 }, // "Gathersanity Item: Thick Hide (skinning #100014/8169)"
    { 9502176, 783 }, // "Gathersanity Item: Light Hide (skinning #100015/783)"
    { 9502177, 2318 }, // "Gathersanity Item: Light Leather (skinning #100015/2318)"
    { 9502178, 2934 }, // "Gathersanity Item: Ruined Leather Scraps (skinning #100015/2934)"
    { 9502179, 10938 }, // "Gathersanity Item: Lesser Magic Essence (disenchant bracket #1)"
    { 9502180, 10940 }, // "Gathersanity Item: Strange Dust (disenchant bracket #1)"
    { 9502181, 10939 }, // "Gathersanity Item: Greater Magic Essence (disenchant bracket #2)"
    { 9502182, 10940 }, // "Gathersanity Item: Strange Dust (disenchant bracket #2)"
    { 9502183, 10978 }, // "Gathersanity Item: Small Glimmering Shard (disenchant bracket #2)"
    { 9502184, 10940 }, // "Gathersanity Item: Strange Dust (disenchant bracket #3)"
    { 9502185, 10978 }, // "Gathersanity Item: Small Glimmering Shard (disenchant bracket #3)"
    { 9502186, 10998 }, // "Gathersanity Item: Lesser Astral Essence (disenchant bracket #3)"
    { 9502187, 11082 }, // "Gathersanity Item: Greater Astral Essence (disenchant bracket #4)"
    { 9502188, 11083 }, // "Gathersanity Item: Soul Dust (disenchant bracket #4)"
    { 9502189, 11084 }, // "Gathersanity Item: Large Glimmering Shard (disenchant bracket #4)"
    { 9502190, 11083 }, // "Gathersanity Item: Soul Dust (disenchant bracket #5)"
    { 9502191, 11134 }, // "Gathersanity Item: Lesser Mystic Essence (disenchant bracket #5)"
    { 9502192, 11138 }, // "Gathersanity Item: Small Glowing Shard (disenchant bracket #5)"
    { 9502193, 11135 }, // "Gathersanity Item: Greater Mystic Essence (disenchant bracket #6)"
    { 9502194, 11137 }, // "Gathersanity Item: Vision Dust (disenchant bracket #6)"
    { 9502195, 11139 }, // "Gathersanity Item: Large Glowing Shard (disenchant bracket #6)"
    { 9502196, 11137 }, // "Gathersanity Item: Vision Dust (disenchant bracket #7)"
    { 9502197, 11174 }, // "Gathersanity Item: Lesser Nether Essence (disenchant bracket #7)"
    { 9502198, 11177 }, // "Gathersanity Item: Small Radiant Shard (disenchant bracket #7)"
    { 9502199, 11175 }, // "Gathersanity Item: Greater Nether Essence (disenchant bracket #8)"
    { 9502200, 11176 }, // "Gathersanity Item: Dream Dust (disenchant bracket #8)"
    { 9502201, 11178 }, // "Gathersanity Item: Large Radiant Shard (disenchant bracket #8)"
    { 9502202, 11176 }, // "Gathersanity Item: Dream Dust (disenchant bracket #9)"
    { 9502203, 14343 }, // "Gathersanity Item: Small Brilliant Shard (disenchant bracket #9)"
    { 9502204, 16202 }, // "Gathersanity Item: Lesser Eternal Essence (disenchant bracket #9)"
    { 9502205, 14344 }, // "Gathersanity Item: Large Brilliant Shard (disenchant bracket #10)"
    { 9502206, 16203 }, // "Gathersanity Item: Greater Eternal Essence (disenchant bracket #10)"
    { 9502207, 16204 }, // "Gathersanity Item: Illusion Dust (disenchant bracket #10)"
    { 9502208, 14344 }, // "Gathersanity Item: Large Brilliant Shard (disenchant bracket #11)"
    { 9502209, 16203 }, // "Gathersanity Item: Greater Eternal Essence (disenchant bracket #11)"
    { 9502210, 16204 }, // "Gathersanity Item: Illusion Dust (disenchant bracket #11)"
    { 9502211, 22445 }, // "Gathersanity Item: Arcane Dust (disenchant bracket #12)"
    { 9502212, 22447 }, // "Gathersanity Item: Lesser Planar Essence (disenchant bracket #12)"
    { 9502213, 22448 }, // "Gathersanity Item: Small Prismatic Shard (disenchant bracket #12)"
    { 9502214, 22445 }, // "Gathersanity Item: Arcane Dust (disenchant bracket #13)"
    { 9502215, 22447 }, // "Gathersanity Item: Lesser Planar Essence (disenchant bracket #13)"
    { 9502216, 22448 }, // "Gathersanity Item: Small Prismatic Shard (disenchant bracket #13)"
    { 9502217, 22445 }, // "Gathersanity Item: Arcane Dust (disenchant bracket #14)"
    { 9502218, 22446 }, // "Gathersanity Item: Greater Planar Essence (disenchant bracket #14)"
    { 9502219, 22449 }, // "Gathersanity Item: Large Prismatic Shard (disenchant bracket #14)"
    { 9502220, 34053 }, // "Gathersanity Item: Small Dream Shard (disenchant bracket #15)"
    { 9502221, 34054 }, // "Gathersanity Item: Infinite Dust (disenchant bracket #15)"
    { 9502222, 34056 }, // "Gathersanity Item: Lesser Cosmic Essence (disenchant bracket #15)"
    { 9502223, 34052 }, // "Gathersanity Item: Dream Shard (disenchant bracket #16)"
    { 9502224, 34054 }, // "Gathersanity Item: Infinite Dust (disenchant bracket #16)"
    { 9502225, 34055 }, // "Gathersanity Item: Greater Cosmic Essence (disenchant bracket #16)"
    { 9502226, 11139 }, // "Gathersanity Item: Large Glowing Shard (disenchant bracket #17)"
    { 9502227, 14344 }, // "Gathersanity Item: Large Brilliant Shard (disenchant bracket #18)"
    { 9502228, 10938 }, // "Gathersanity Item: Lesser Magic Essence (disenchant bracket #21)"
    { 9502229, 10940 }, // "Gathersanity Item: Strange Dust (disenchant bracket #21)"
    { 9502230, 10939 }, // "Gathersanity Item: Greater Magic Essence (disenchant bracket #22)"
    { 9502231, 10940 }, // "Gathersanity Item: Strange Dust (disenchant bracket #22)"
    { 9502232, 10978 }, // "Gathersanity Item: Small Glimmering Shard (disenchant bracket #22)"
    { 9502233, 10940 }, // "Gathersanity Item: Strange Dust (disenchant bracket #23)"
    { 9502234, 10978 }, // "Gathersanity Item: Small Glimmering Shard (disenchant bracket #23)"
    { 9502235, 10998 }, // "Gathersanity Item: Lesser Astral Essence (disenchant bracket #23)"
    { 9502236, 11082 }, // "Gathersanity Item: Greater Astral Essence (disenchant bracket #24)"
    { 9502237, 11083 }, // "Gathersanity Item: Soul Dust (disenchant bracket #24)"
    { 9502238, 11084 }, // "Gathersanity Item: Large Glimmering Shard (disenchant bracket #24)"
    { 9502239, 11083 }, // "Gathersanity Item: Soul Dust (disenchant bracket #25)"
    { 9502240, 11134 }, // "Gathersanity Item: Lesser Mystic Essence (disenchant bracket #25)"
    { 9502241, 11138 }, // "Gathersanity Item: Small Glowing Shard (disenchant bracket #25)"
    { 9502242, 11135 }, // "Gathersanity Item: Greater Mystic Essence (disenchant bracket #26)"
    { 9502243, 11137 }, // "Gathersanity Item: Vision Dust (disenchant bracket #26)"
    { 9502244, 11139 }, // "Gathersanity Item: Large Glowing Shard (disenchant bracket #26)"
    { 9502245, 11137 }, // "Gathersanity Item: Vision Dust (disenchant bracket #27)"
    { 9502246, 11174 }, // "Gathersanity Item: Lesser Nether Essence (disenchant bracket #27)"
    { 9502247, 11177 }, // "Gathersanity Item: Small Radiant Shard (disenchant bracket #27)"
    { 9502248, 11175 }, // "Gathersanity Item: Greater Nether Essence (disenchant bracket #28)"
    { 9502249, 11176 }, // "Gathersanity Item: Dream Dust (disenchant bracket #28)"
    { 9502250, 11178 }, // "Gathersanity Item: Large Radiant Shard (disenchant bracket #28)"
    { 9502251, 11176 }, // "Gathersanity Item: Dream Dust (disenchant bracket #29)"
    { 9502252, 14343 }, // "Gathersanity Item: Small Brilliant Shard (disenchant bracket #29)"
    { 9502253, 16202 }, // "Gathersanity Item: Lesser Eternal Essence (disenchant bracket #29)"
    { 9502254, 14344 }, // "Gathersanity Item: Large Brilliant Shard (disenchant bracket #30)"
    { 9502255, 16203 }, // "Gathersanity Item: Greater Eternal Essence (disenchant bracket #30)"
    { 9502256, 16204 }, // "Gathersanity Item: Illusion Dust (disenchant bracket #30)"
    { 9502257, 14344 }, // "Gathersanity Item: Large Brilliant Shard (disenchant bracket #31)"
    { 9502258, 16203 }, // "Gathersanity Item: Greater Eternal Essence (disenchant bracket #31)"
    { 9502259, 16204 }, // "Gathersanity Item: Illusion Dust (disenchant bracket #31)"
    { 9502260, 22445 }, // "Gathersanity Item: Arcane Dust (disenchant bracket #32)"
    { 9502261, 22447 }, // "Gathersanity Item: Lesser Planar Essence (disenchant bracket #32)"
    { 9502262, 22448 }, // "Gathersanity Item: Small Prismatic Shard (disenchant bracket #32)"
    { 9502263, 22445 }, // "Gathersanity Item: Arcane Dust (disenchant bracket #33)"
    { 9502264, 22446 }, // "Gathersanity Item: Greater Planar Essence (disenchant bracket #33)"
    { 9502265, 22449 }, // "Gathersanity Item: Large Prismatic Shard (disenchant bracket #33)"
    { 9502266, 34053 }, // "Gathersanity Item: Small Dream Shard (disenchant bracket #34)"
    { 9502267, 34054 }, // "Gathersanity Item: Infinite Dust (disenchant bracket #34)"
    { 9502268, 34056 }, // "Gathersanity Item: Lesser Cosmic Essence (disenchant bracket #34)"
    { 9502269, 34052 }, // "Gathersanity Item: Dream Shard (disenchant bracket #35)"
    { 9502270, 34054 }, // "Gathersanity Item: Infinite Dust (disenchant bracket #35)"
    { 9502271, 34055 }, // "Gathersanity Item: Greater Cosmic Essence (disenchant bracket #35)"
    { 9502272, 10978 }, // "Gathersanity Item: Small Glimmering Shard (disenchant bracket #41)"
    { 9502273, 11084 }, // "Gathersanity Item: Large Glimmering Shard (disenchant bracket #42)"
    { 9502274, 11138 }, // "Gathersanity Item: Small Glowing Shard (disenchant bracket #43)"
    { 9502275, 11139 }, // "Gathersanity Item: Large Glowing Shard (disenchant bracket #44)"
    { 9502276, 11177 }, // "Gathersanity Item: Small Radiant Shard (disenchant bracket #45)"
    { 9502277, 11178 }, // "Gathersanity Item: Large Radiant Shard (disenchant bracket #46)"
    { 9502278, 14343 }, // "Gathersanity Item: Small Brilliant Shard (disenchant bracket #47)"
    { 9502279, 14344 }, // "Gathersanity Item: Large Brilliant Shard (disenchant bracket #48)"
    { 9502280, 20725 }, // "Gathersanity Item: Nexus Crystal (disenchant bracket #48)"
    { 9502281, 14344 }, // "Gathersanity Item: Large Brilliant Shard (disenchant bracket #49)"
    { 9502282, 20725 }, // "Gathersanity Item: Nexus Crystal (disenchant bracket #49)"
    { 9502283, 20725 }, // "Gathersanity Item: Nexus Crystal (disenchant bracket #50)"
    { 9502284, 22448 }, // "Gathersanity Item: Small Prismatic Shard (disenchant bracket #50)"
    { 9502285, 20725 }, // "Gathersanity Item: Nexus Crystal (disenchant bracket #51)"
    { 9502286, 22448 }, // "Gathersanity Item: Small Prismatic Shard (disenchant bracket #51)"
    { 9502287, 22449 }, // "Gathersanity Item: Large Prismatic Shard (disenchant bracket #52)"
    { 9502288, 22450 }, // "Gathersanity Item: Void Crystal (disenchant bracket #52)"
    { 9502289, 34053 }, // "Gathersanity Item: Small Dream Shard (disenchant bracket #53)"
    { 9502290, 34057 }, // "Gathersanity Item: Abyss Crystal (disenchant bracket #53)"
    { 9502291, 34052 }, // "Gathersanity Item: Dream Shard (disenchant bracket #54)"
    { 9502292, 34057 }, // "Gathersanity Item: Abyss Crystal (disenchant bracket #54)"
    { 9502293, 11177 }, // "Gathersanity Item: Small Radiant Shard (disenchant bracket #61)"
    { 9502294, 11178 }, // "Gathersanity Item: Large Radiant Shard (disenchant bracket #62)"
    { 9502295, 14343 }, // "Gathersanity Item: Small Brilliant Shard (disenchant bracket #63)"
    { 9502296, 20725 }, // "Gathersanity Item: Nexus Crystal (disenchant bracket #64)"
    { 9502297, 20725 }, // "Gathersanity Item: Nexus Crystal (disenchant bracket #65)"
    { 9502298, 22450 }, // "Gathersanity Item: Void Crystal (disenchant bracket #66)"
    { 9502299, 22450 }, // "Gathersanity Item: Void Crystal (disenchant bracket #67)"
    { 9502300, 34057 }, // "Gathersanity Item: Abyss Crystal (disenchant bracket #68)"
    { 9502301, 34057 }, // "Gathersanity Item: Abyss Crystal (disenchant bracket #69)"
};
inline std::unordered_map<int64_t, uint32_t> BuildApItemIdToWowItemEntry()
{
    std::unordered_map<int64_t, uint32_t> result;
    for (auto const& row : AP_ITEM_ID_TO_WOW_ITEM_ENTRY_RAW)
        result.emplace(row.first, row.second);
    return result;
}
inline const std::unordered_map<int64_t, uint32_t> ApItemIdToWowItemEntry = BuildApItemIdToWowItemEntry();
}
