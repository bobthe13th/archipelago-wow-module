// GENERATED FILE - do not edit by hand.
// Regenerate with: python modules/archipelago_wow/tools/generate_content.py content/trainer_spells.yaml
#pragma once

#include <cstdint>
#include <map>
#include <string>
#include <unordered_map>
#include <utility>

namespace ArchipelagoTRAINER_SPELLSContent {
inline constexpr std::pair<char const*, uint32_t> LOCATIONS_RAW[] = {
    {"Trainer Spell: Blizzard (#10)", 7000010},
    {"Trainer Spell: Power Word: Shield (#17)", 7000017},
    {"Trainer Spell: Backstab (#53)", 7000053},
    {"Trainer Spell: Invisibility (#66)", 7000066},
    {"Trainer Spell: Shield Bash (#72)", 7000072},
    {"Trainer Spell: Demoralizing Roar (#99)", 7000099},
    {"Trainer Spell: Charge (#100)", 7000100},
    {"Trainer Spell: Frostbolt (#116)", 7000116},
    {"Trainer Spell: Polymorph (#118)", 7000118},
    {"Trainer Spell: Cone of Cold (#120)", 7000120},
    {"Trainer Spell: Frost Nova (#122)", 7000122},
    {"Trainer Spell: Eye of Kilrogg (#126)", 7000126},
    {"Trainer Spell: Slow Fall (#130)", 7000130},
    {"Trainer Spell: Water Breathing (#131)", 7000131},
    {"Trainer Spell: Detect Invisibility (#132)", 7000132},
    {"Trainer Spell: Mend Pet (#136)", 7000136},
    {"Trainer Spell: Renew (#139)", 7000139},
    {"Trainer Spell: Fireball (#143)", 7000143},
    {"Trainer Spell: Fireball (#145)", 7000145},
    {"Trainer Spell: Corruption (#172)", 7000172},
    {"Trainer Spell: Frostbolt (#205)", 7000205},
    {"Trainer Spell: Heroic Strike (#284)", 7000284},
    {"Trainer Spell: Heroic Strike (#285)", 7000285},
    {"Trainer Spell: Lightning Shield (#324)", 7000324},
    {"Trainer Spell: Lightning Shield (#325)", 7000325},
    {"Trainer Spell: Healing Wave (#332)", 7000332},
    {"Trainer Spell: Entangling Roots (#339)", 7000339},
    {"Trainer Spell: Immolate (#348)", 7000348},
    {"Trainer Spell: Purge (#370)", 7000370},
    {"Trainer Spell: Kidney Shot (#408)", 7000408},
    {"Trainer Spell: Chain Lightning (#421)", 7000421},
    {"Trainer Spell: Mind Soothe (#453)", 7000453},
    {"Trainer Spell: Devotion Aura (#465)", 7000465},
    {"Trainer Spell: Thorns (#467)", 7000467},
    {"Trainer Spell: Commanding Shout (#469)", 7000469},
    {"Trainer Spell: Remove Curse (#475)", 7000475},
    {"Trainer Spell: Divine Protection (#498)", 7000498},
    {"Trainer Spell: Cure Toxins (#526)", 7000526},
    {"Trainer Spell: Dispel Magic (#527)", 7000527},
    {"Trainer Spell: Cure Disease (#528)", 7000528},
    {"Trainer Spell: Lightning Bolt (#529)", 7000529},
    {"Trainer Spell: Fire Ward (#543)", 7000543},
    {"Trainer Spell: Water Walking (#546)", 7000546},
    {"Trainer Spell: Healing Wave (#547)", 7000547},
    {"Trainer Spell: Lightning Bolt (#548)", 7000548},
    {"Trainer Spell: Abolish Disease (#552)", 7000552},
    {"Trainer Spell: Astral Recall (#556)", 7000556},
    {"Trainer Spell: Fade (#586)", 7000586},
    {"Trainer Spell: Conjure Food (#587)", 7000587},
    {"Trainer Spell: Inner Fire (#588)", 7000588},
    {"Trainer Spell: Shadow Word: Pain (#589)", 7000589},
    {"Trainer Spell: Smite (#591)", 7000591},
    {"Trainer Spell: Power Word: Shield (#592)", 7000592},
    {"Trainer Spell: Shadow Word: Pain (#594)", 7000594},
    {"Trainer Spell: Prayer of Healing (#596)", 7000596},
    {"Trainer Spell: Conjure Food (#597)", 7000597},
    {"Trainer Spell: Smite (#598)", 7000598},
    {"Trainer Spell: Inner Fire (#602)", 7000602},
    {"Trainer Spell: Curse of Doom (#603)", 7000603},
    {"Trainer Spell: Dampen Magic (#604)", 7000604},
    {"Trainer Spell: Mind Control (#605)", 7000605},
    {"Trainer Spell: Lay on Hands (#633)", 7000633},
    {"Trainer Spell: Holy Light (#639)", 7000639},
    {"Trainer Spell: Divine Shield (#642)", 7000642},
    {"Trainer Spell: Devotion Aura (#643)", 7000643},
    {"Trainer Spell: Holy Light (#647)", 7000647},
    {"Trainer Spell: Dual Wield (#674)", 7000674},
    {"Trainer Spell: Disarm (#676)", 7000676},
    {"Trainer Spell: Summon Imp (#688)", 7000688},
    {"Trainer Spell: Drain Life (#689)", 7000689},
    {"Trainer Spell: Create Soulstone (#693)", 7000693},
    {"Trainer Spell: Mocking Blow (#694)", 7000694},
    {"Trainer Spell: Shadow Bolt (#695)", 7000695},
    {"Trainer Spell: Demon Skin (#696)", 7000696},
    {"Trainer Spell: Ritual of Summoning (#698)", 7000698},
    {"Trainer Spell: Drain Life (#699)", 7000699},
    {"Trainer Spell: Curse of Weakness (#702)", 7000702},
    {"Trainer Spell: Garrote (#703)", 7000703},
    {"Trainer Spell: Shadow Bolt (#705)", 7000705},
    {"Trainer Spell: Demon Armor (#706)", 7000706},
    {"Trainer Spell: Immolate (#707)", 7000707},
    {"Trainer Spell: Drain Life (#709)", 7000709},
    {"Trainer Spell: Banish (#710)", 7000710},
    {"Trainer Spell: Tranquility (#740)", 7000740},
    {"Trainer Spell: Plate Mail (#750)", 7000750},
    {"Trainer Spell: Health Funnel (#755)", 7000755},
    {"Trainer Spell: Conjure Mana Gem (#759)", 7000759},
    {"Trainer Spell: Cat Form (#768)", 7000768},
    {"Trainer Spell: Swipe (Bear) (#769)", 7000769},
    {"Trainer Spell: Faerie Fire (#770)", 7000770},
    {"Trainer Spell: Rend (#772)", 7000772},
    {"Trainer Spell: Rejuvenation (#774)", 7000774},
    {"Trainer Spell: Swipe (Bear) (#779)", 7000779},
    {"Trainer Spell: Swipe (Bear) (#780)", 7000780},
    {"Trainer Spell: Disengage (#781)", 7000781},
    {"Trainer Spell: Thorns (#782)", 7000782},
    {"Trainer Spell: Travel Form (#783)", 7000783},
    {"Trainer Spell: Frostbolt (#837)", 7000837},
    {"Trainer Spell: Cleave (#845)", 7000845},
    {"Trainer Spell: Hammer of Justice (#853)", 7000853},
    {"Trainer Spell: Frost Nova (#865)", 7000865},
    {"Trainer Spell: Shield Wall (#871)", 7000871},
    {"Trainer Spell: Exorcism (#879)", 7000879},
    {"Trainer Spell: Lightning Shield (#905)", 7000905},
    {"Trainer Spell: Healing Wave (#913)", 7000913},
    {"Trainer Spell: Lightning Bolt (#915)", 7000915},
    {"Trainer Spell: Pick Pocket (#921)", 7000921},
    {"Trainer Spell: Chain Lightning (#930)", 7000930},
    {"Trainer Spell: Healing Wave (#939)", 7000939},
    {"Trainer Spell: Lightning Bolt (#943)", 7000943},
    {"Trainer Spell: Lightning Shield (#945)", 7000945},
    {"Trainer Spell: Healing Wave (#959)", 7000959},
    {"Trainer Spell: Shadow Word: Pain (#970)", 7000970},
    {"Trainer Spell: Shadow Protection (#976)", 7000976},
    {"Trainer Spell: Curse of Agony (#980)", 7000980},
    {"Trainer Spell: Smite (#984)", 7000984},
    {"Trainer Spell: Dispel Magic (#988)", 7000988},
    {"Trainer Spell: Conjure Food (#990)", 7000990},
    {"Trainer Spell: Shadow Word: Pain (#992)", 7000992},
    {"Trainer Spell: Prayer of Healing (#996)", 7000996},
    {"Trainer Spell: Eyes of the Beast (#1002)", 7001002},
    {"Trainer Spell: Smite (#1004)", 7001004},
    {"Trainer Spell: Inner Fire (#1006)", 7001006},
    {"Trainer Spell: Amplify Magic (#1008)", 7001008},
    {"Trainer Spell: Curse of Agony (#1014)", 7001014},
    {"Trainer Spell: Hand of Protection (#1022)", 7001022},
    {"Trainer Spell: Holy Light (#1026)", 7001026},
    {"Trainer Spell: Devotion Aura (#1032)", 7001032},
    {"Trainer Spell: Hand of Salvation (#1038)", 7001038},
    {"Trainer Spell: Holy Light (#1042)", 7001042},
    {"Trainer Spell: Hand of Freedom (#1044)", 7001044},
    {"Trainer Spell: Rejuvenation (#1058)", 7001058},
    {"Trainer Spell: Entangling Roots (#1062)", 7001062},
    {"Trainer Spell: Chain Heal (#1064)", 7001064},
    {"Trainer Spell: Aquatic Form (#1066)", 7001066},
    {"Trainer Spell: Thorns (#1075)", 7001075},
    {"Trainer Spell: Rip (#1079)", 7001079},
    {"Trainer Spell: Claw (#1082)", 7001082},
    {"Trainer Spell: Demon Armor (#1086)", 7001086},
    {"Trainer Spell: Shadow Bolt (#1088)", 7001088},
    {"Trainer Spell: Enslave Demon (#1098)", 7001098},
    {"Trainer Spell: Shadow Bolt (#1106)", 7001106},
    {"Trainer Spell: Curse of Weakness (#1108)", 7001108},
    {"Trainer Spell: Drain Soul (#1120)", 7001120},
    {"Trainer Spell: Mark of the Wild (#1126)", 7001126},
    {"Trainer Spell: Hunter's Mark (#1130)", 7001130},
    {"Trainer Spell: Purify (#1152)", 7001152},
    {"Trainer Spell: Demoralizing Shout (#1160)", 7001160},
    {"Trainer Spell: Challenging Shout (#1161)", 7001161},
    {"Trainer Spell: Power Word: Fortitude (#1243)", 7001243},
    {"Trainer Spell: Power Word: Fortitude (#1244)", 7001244},
    {"Trainer Spell: Power Word: Fortitude (#1245)", 7001245},
    {"Trainer Spell: Rejuvenation (#1430)", 7001430},
    {"Trainer Spell: Arcane Explosion (#1449)", 7001449},
    {"Trainer Spell: Life Tap (#1454)", 7001454},
    {"Trainer Spell: Life Tap (#1455)", 7001455},
    {"Trainer Spell: Life Tap (#1456)", 7001456},
    {"Trainer Spell: Arcane Intellect (#1459)", 7001459},
    {"Trainer Spell: Arcane Intellect (#1460)", 7001460},
    {"Trainer Spell: Arcane Intellect (#1461)", 7001461},
    {"Trainer Spell: Beast Lore (#1462)", 7001462},
    {"Trainer Spell: Mana Shield (#1463)", 7001463},
    {"Trainer Spell: Slam (#1464)", 7001464},
    {"Trainer Spell: Curse of the Elements (#1490)", 7001490},
    {"Trainer Spell: Track Beasts (#1494)", 7001494},
    {"Trainer Spell: Mongoose Bite (#1495)", 7001495},
    {"Trainer Spell: Freezing Trap (#1499)", 7001499},
    {"Trainer Spell: Volley (#1510)", 7001510},
    {"Trainer Spell: Scare Beast (#1513)", 7001513},
    {"Trainer Spell: Fire Nova (#1535)", 7001535},
    {"Trainer Spell: Flare (#1543)", 7001543},
    {"Trainer Spell: Heroic Strike (#1608)", 7001608},
    {"Trainer Spell: Whirlwind (#1680)", 7001680},
    {"Trainer Spell: Levitate (#1706)", 7001706},
    {"Trainer Spell: Summon Felsteed (#1710)", 7001710},
    {"Trainer Spell: Curse of Tongues (#1714)", 7001714},
    {"Trainer Spell: Hamstring (#1715)", 7001715},
    {"Trainer Spell: Recklessness (#1719)", 7001719},
    {"Trainer Spell: Distract (#1725)", 7001725},
    {"Trainer Spell: Demoralizing Roar (#1735)", 7001735},
    {"Trainer Spell: Sinister Strike (#1757)", 7001757},
    {"Trainer Spell: Sinister Strike (#1758)", 7001758},
    {"Trainer Spell: Sinister Strike (#1759)", 7001759},
    {"Trainer Spell: Sinister Strike (#1760)", 7001760},
    {"Trainer Spell: Kick (#1766)", 7001766},
    {"Trainer Spell: Gouge (#1776)", 7001776},
    {"Trainer Spell: Stealth (#1784)", 7001784},
    {"Trainer Spell: Pick Lock (#1804)", 7001804},
    {"Trainer Spell: Rake (#1822)", 7001822},
    {"Trainer Spell: Rake (#1823)", 7001823},
    {"Trainer Spell: Rake (#1824)", 7001824},
    {"Trainer Spell: Cheap Shot (#1833)", 7001833},
    {"Trainer Spell: Disarm Trap (#1842)", 7001842},
    {"Trainer Spell: Dash (#1850)", 7001850},
    {"Trainer Spell: Vanish (#1856)", 7001856},
    {"Trainer Spell: Vanish (#1857)", 7001857},
    {"Trainer Spell: Safe Fall (#1860)", 7001860},
    {"Trainer Spell: Rupture (#1943)", 7001943},
    {"Trainer Spell: Hellfire (#1949)", 7001949},
    {"Trainer Spell: Blink (#1953)", 7001953},
    {"Trainer Spell: Feint (#1966)", 7001966},
    {"Trainer Spell: Serpent Sting (#1978)", 7001978},
    {"Trainer Spell: Resurrection (#2006)", 7002006},
    {"Trainer Spell: Ancestral Spirit (#2008)", 7002008},
    {"Trainer Spell: Resurrection (#2010)", 7002010},
    {"Trainer Spell: Battle Shout (#2048)", 7002048},
    {"Trainer Spell: Lesser Heal (#2052)", 7002052},
    {"Trainer Spell: Lesser Heal (#2053)", 7002053},
    {"Trainer Spell: Heal (#2054)", 7002054},
    {"Trainer Spell: Heal (#2055)", 7002055},
    {"Trainer Spell: Greater Heal (#2060)", 7002060},
    {"Trainer Spell: Flash Heal (#2061)", 7002061},
    {"Trainer Spell: Earth Elemental Totem (#2062)", 7002062},
    {"Trainer Spell: Sap (#2070)", 7002070},
    {"Trainer Spell: Rejuvenation (#2090)", 7002090},
    {"Trainer Spell: Rejuvenation (#2091)", 7002091},
    {"Trainer Spell: Blind (#2094)", 7002094},
    {"Trainer Spell: Mind Vision (#2096)", 7002096},
    {"Trainer Spell: Flamestrike (#2120)", 7002120},
    {"Trainer Spell: Flamestrike (#2121)", 7002121},
    {"Trainer Spell: Fire Blast (#2136)", 7002136},
    {"Trainer Spell: Fire Blast (#2137)", 7002137},
    {"Trainer Spell: Fire Blast (#2138)", 7002138},
    {"Trainer Spell: Counterspell (#2139)", 7002139},
    {"Trainer Spell: Create Spellstone (#2362)", 7002362},
    {"Trainer Spell: Earthbind Totem (#2484)", 7002484},
    {"Trainer Spell: Shield Block (#2565)", 7002565},
    {"Trainer Spell: Backstab (#2589)", 7002589},
    {"Trainer Spell: Backstab (#2590)", 7002590},
    {"Trainer Spell: Backstab (#2591)", 7002591},
    {"Trainer Spell: Hibernate (#2637)", 7002637},
    {"Trainer Spell: Multi-Shot (#2643)", 7002643},
    {"Trainer Spell: Ghost Wolf (#2645)", 7002645},
    {"Trainer Spell: Bloodrage (#2687)", 7002687},
    {"Trainer Spell: Shadow Word: Pain (#2767)", 7002767},
    {"Trainer Spell: Remove Curse (#2782)", 7002782},
    {"Trainer Spell: Power Word: Fortitude (#2791)", 7002791},
    {"Trainer Spell: Lay on Hands (#2800)", 7002800},
    {"Trainer Spell: Holy Wrath (#2812)", 7002812},
    {"Trainer Spell: Bloodlust (#2825)", 7002825},
    {"Trainer Spell: Detect Traps (#2836)", 7002836},
    {"Trainer Spell: Chain Lightning (#2860)", 7002860},
    {"Trainer Spell: Abolish Poison (#2893)", 7002893},
    {"Trainer Spell: Fire Elemental Totem (#2894)", 7002894},
    {"Trainer Spell: Soothe Animal (#2908)", 7002908},
    {"Trainer Spell: Starfire (#2912)", 7002912},
    {"Trainer Spell: Immolate (#2941)", 7002941},
    {"Trainer Spell: Devouring Plague (#2944)", 7002944},
    {"Trainer Spell: Scorch (#2948)", 7002948},
    {"Trainer Spell: Wing Clip (#2974)", 7002974},
    {"Trainer Spell: Sprint (#2983)", 7002983},
    {"Trainer Spell: Claw (#3029)", 7003029},
    {"Trainer Spell: Viper Sting (#3034)", 7003034},
    {"Trainer Spell: Scorpid Sting (#3043)", 7003043},
    {"Trainer Spell: Arcane Shot (#3044)", 7003044},
    {"Trainer Spell: Rapid Fire (#3045)", 7003045},
    {"Trainer Spell: Mend Pet (#3111)", 7003111},
    {"Trainer Spell: Parry (#3127)", 7003127},
    {"Trainer Spell: Fireball (#3140)", 7003140},
    {"Trainer Spell: Intervene (#3411)", 7003411},
    {"Trainer Spell: Holy Light (#3472)", 7003472},
    {"Trainer Spell: Conjure Mana Gem (#3552)", 7003552},
    {"Trainer Spell: Teleport: Stormwind (#3561)", 7003561},
    {"Trainer Spell: Teleport: Ironforge (#3562)", 7003562},
    {"Trainer Spell: Teleport: Undercity (#3563)", 7003563},
    {"Trainer Spell: Teleport: Darnassus (#3565)", 7003565},
    {"Trainer Spell: Teleport: Thunder Bluff (#3566)", 7003566},
    {"Trainer Spell: Teleport: Orgrimmar (#3567)", 7003567},
    {"Trainer Spell: Rejuvenation (#3627)", 7003627},
    {"Trainer Spell: Mend Pet (#3661)", 7003661},
    {"Trainer Spell: Mend Pet (#3662)", 7003662},
    {"Trainer Spell: Health Funnel (#3698)", 7003698},
    {"Trainer Spell: Health Funnel (#3699)", 7003699},
    {"Trainer Spell: Health Funnel (#3700)", 7003700},
    {"Trainer Spell: Path of Frost (#3714)", 7003714},
    {"Trainer Spell: Wrath of Air Totem (#3738)", 7003738},
    {"Trainer Spell: Power Word: Shield (#3747)", 7003747},
    {"Trainer Spell: Cleanse (#4987)", 7004987},
    {"Trainer Spell: Concussive Shot (#5116)", 7005116},
    {"Trainer Spell: Aspect of the Cheetah (#5118)", 7005118},
    {"Trainer Spell: Drain Mana (#5138)", 7005138},
    {"Trainer Spell: Arcane Missiles (#5143)", 7005143},
    {"Trainer Spell: Arcane Missiles (#5144)", 7005144},
    {"Trainer Spell: Arcane Missiles (#5145)", 7005145},
    {"Trainer Spell: Slice and Dice (#5171)", 7005171},
    {"Trainer Spell: Wrath (#5177)", 7005177},
    {"Trainer Spell: Wrath (#5178)", 7005178},
    {"Trainer Spell: Wrath (#5179)", 7005179},
    {"Trainer Spell: Wrath (#5180)", 7005180},
    {"Trainer Spell: Healing Touch (#5186)", 7005186},
    {"Trainer Spell: Healing Touch (#5187)", 7005187},
    {"Trainer Spell: Healing Touch (#5188)", 7005188},
    {"Trainer Spell: Healing Touch (#5189)", 7005189},
    {"Trainer Spell: Entangling Roots (#5195)", 7005195},
    {"Trainer Spell: Entangling Roots (#5196)", 7005196},
    {"Trainer Spell: Claw (#5201)", 7005201},
    {"Trainer Spell: Challenging Roar (#5209)", 7005209},
    {"Trainer Spell: Bash (#5211)", 7005211},
    {"Trainer Spell: Prowl (#5215)", 7005215},
    {"Trainer Spell: Tiger's Fury (#5217)", 7005217},
    {"Trainer Spell: Shred (#5221)", 7005221},
    {"Trainer Spell: Track Humanoids (#5225)", 7005225},
    {"Trainer Spell: Enrage (#5229)", 7005229},
    {"Trainer Spell: Mark of the Wild (#5232)", 7005232},
    {"Trainer Spell: Mark of the Wild (#5234)", 7005234},
    {"Trainer Spell: Battle Shout (#5242)", 7005242},
    {"Trainer Spell: Intimidating Shout (#5246)", 7005246},
    {"Trainer Spell: Evasion (#5277)", 7005277},
    {"Trainer Spell: Execute (#5308)", 7005308},
    {"Trainer Spell: Feign Death (#5384)", 7005384},
    {"Trainer Spell: Howl of Terror (#5484)", 7005484},
    {"Trainer Spell: Sense Demons (#5500)", 7005500},
    {"Trainer Spell: Sense Undead (#5502)", 7005502},
    {"Trainer Spell: Conjure Water (#5504)", 7005504},
    {"Trainer Spell: Conjure Water (#5505)", 7005505},
    {"Trainer Spell: Conjure Water (#5506)", 7005506},
    {"Trainer Spell: Hammer of Justice (#5588)", 7005588},
    {"Trainer Spell: Hammer of Justice (#5589)", 7005589},
    {"Trainer Spell: Hand of Protection (#5599)", 7005599},
    {"Trainer Spell: Exorcism (#5614)", 7005614},
    {"Trainer Spell: Exorcism (#5615)", 7005615},
    {"Trainer Spell: Mana Spring Totem (#5675)", 7005675},
    {"Trainer Spell: Searing Pain (#5676)", 7005676},
    {"Trainer Spell: Unending Breath (#5697)", 7005697},
    {"Trainer Spell: Create Healthstone (#5699)", 7005699},
    {"Trainer Spell: Stoneclaw Totem (#5730)", 7005730},
    {"Trainer Spell: Rain of Fire (#5740)", 7005740},
    {"Trainer Spell: Fear (#5782)", 7005782},
    {"Trainer Spell: Shiv (#5938)", 7005938},
    {"Trainer Spell: Lightning Bolt (#6041)", 7006041},
    {"Trainer Spell: Smite (#6060)", 7006060},
    {"Trainer Spell: Heal (#6064)", 7006064},
    {"Trainer Spell: Power Word: Shield (#6065)", 7006065},
    {"Trainer Spell: Power Word: Shield (#6066)", 7006066},
    {"Trainer Spell: Renew (#6074)", 7006074},
    {"Trainer Spell: Renew (#6075)", 7006075},
    {"Trainer Spell: Renew (#6076)", 7006076},
    {"Trainer Spell: Renew (#6077)", 7006077},
    {"Trainer Spell: Renew (#6078)", 7006078},
    {"Trainer Spell: Mage Armor (#6117)", 7006117},
    {"Trainer Spell: Conjure Water (#6127)", 7006127},
    {"Trainer Spell: Conjure Food (#6129)", 7006129},
    {"Trainer Spell: Frost Nova (#6131)", 7006131},
    {"Trainer Spell: Blizzard (#6141)", 7006141},
    {"Trainer Spell: Frost Ward (#6143)", 7006143},
    {"Trainer Spell: Charge (#6178)", 7006178},
    {"Trainer Spell: Demoralizing Shout (#6190)", 7006190},
    {"Trainer Spell: Battle Shout (#6192)", 7006192},
    {"Trainer Spell: Far Sight (#6196)", 7006196},
    {"Trainer Spell: Eagle Eye (#6197)", 7006197},
    {"Trainer Spell: Create Healthstone (#6201)", 7006201},
    {"Trainer Spell: Create Healthstone (#6202)", 7006202},
    {"Trainer Spell: Curse of Weakness (#6205)", 7006205},
    {"Trainer Spell: Fear (#6213)", 7006213},
    {"Trainer Spell: Fear (#6215)", 7006215},
    {"Trainer Spell: Curse of Agony (#6217)", 7006217},
    {"Trainer Spell: Rain of Fire (#6219)", 7006219},
    {"Trainer Spell: Corruption (#6222)", 7006222},
    {"Trainer Spell: Corruption (#6223)", 7006223},
    {"Trainer Spell: Shadow Ward (#6229)", 7006229},
    {"Trainer Spell: Thunder Clap (#6343)", 7006343},
    {"Trainer Spell: Fear Ward (#6346)", 7006346},
    {"Trainer Spell: Soul Fire (#6353)", 7006353},
    {"Trainer Spell: Searing Totem (#6363)", 7006363},
    {"Trainer Spell: Searing Totem (#6364)", 7006364},
    {"Trainer Spell: Searing Totem (#6365)", 7006365},
    {"Trainer Spell: Create Firestone (#6366)", 7006366},
    {"Trainer Spell: Healing Stream Totem (#6375)", 7006375},
    {"Trainer Spell: Healing Stream Totem (#6377)", 7006377},
    {"Trainer Spell: Stoneclaw Totem (#6390)", 7006390},
    {"Trainer Spell: Stoneclaw Totem (#6391)", 7006391},
    {"Trainer Spell: Stoneclaw Totem (#6392)", 7006392},
    {"Trainer Spell: Sentry Totem (#6495)", 7006495},
    {"Trainer Spell: Rend (#6546)", 7006546},
    {"Trainer Spell: Rend (#6547)", 7006547},
    {"Trainer Spell: Rend (#6548)", 7006548},
    {"Trainer Spell: Pummel (#6552)", 7006552},
    {"Trainer Spell: Revenge (#6572)", 7006572},
    {"Trainer Spell: Revenge (#6574)", 7006574},
    {"Trainer Spell: Battle Shout (#6673)", 7006673},
    {"Trainer Spell: Mark of the Wild (#6756)", 7006756},
    {"Trainer Spell: Eviscerate (#6760)", 7006760},
    {"Trainer Spell: Eviscerate (#6761)", 7006761},
    {"Trainer Spell: Eviscerate (#6762)", 7006762},
    {"Trainer Spell: Feint (#6768)", 7006768},
    {"Trainer Spell: Sap (#6770)", 7006770},
    {"Trainer Spell: Slice and Dice (#6774)", 7006774},
    {"Trainer Spell: Healing Touch (#6778)", 7006778},
    {"Trainer Spell: Wrath (#6780)", 7006780},
    {"Trainer Spell: Ravage (#6785)", 7006785},
    {"Trainer Spell: Ravage (#6787)", 7006787},
    {"Trainer Spell: Death Coil (#6789)", 7006789},
    {"Trainer Spell: Tiger's Fury (#6793)", 7006793},
    {"Trainer Spell: Bash (#6798)", 7006798},
    {"Trainer Spell: Shred (#6800)", 7006800},
    {"Trainer Spell: Maul (#6808)", 7006808},
    {"Trainer Spell: Maul (#6809)", 7006809},
    {"Trainer Spell: Hand of Sacrifice (#6940)", 7006940},
    {"Trainer Spell: Inner Fire (#7128)", 7007128},
    {"Trainer Spell: Retribution Aura (#7294)", 7007294},
    {"Trainer Spell: Frost Armor (#7300)", 7007300},
    {"Trainer Spell: Frost Armor (#7301)", 7007301},
    {"Trainer Spell: Ice Armor (#7302)", 7007302},
    {"Trainer Spell: Ice Armor (#7320)", 7007320},
    {"Trainer Spell: Frostbolt (#7322)", 7007322},
    {"Trainer Spell: Cleave (#7369)", 7007369},
    {"Trainer Spell: Revenge (#7379)", 7007379},
    {"Trainer Spell: Overpower (#7384)", 7007384},
    {"Trainer Spell: Shadow Bolt (#7641)", 7007641},
    {"Trainer Spell: Curse of Weakness (#7646)", 7007646},
    {"Trainer Spell: Corruption (#7648)", 7007648},
    {"Trainer Spell: Drain Life (#7651)", 7007651},
    {"Trainer Spell: Lesser Healing Wave (#8004)", 7008004},
    {"Trainer Spell: Healing Wave (#8005)", 7008005},
    {"Trainer Spell: Lesser Healing Wave (#8008)", 7008008},
    {"Trainer Spell: Lesser Healing Wave (#8010)", 7008010},
    {"Trainer Spell: Purge (#8012)", 7008012},
    {"Trainer Spell: Rockbiter Weapon (#8017)", 7008017},
    {"Trainer Spell: Rockbiter Weapon (#8018)", 7008018},
    {"Trainer Spell: Rockbiter Weapon (#8019)", 7008019},
    {"Trainer Spell: Flametongue Weapon (#8024)", 7008024},
    {"Trainer Spell: Flametongue Weapon (#8027)", 7008027},
    {"Trainer Spell: Flametongue Weapon (#8030)", 7008030},
    {"Trainer Spell: Frostbrand Weapon (#8033)", 7008033},
    {"Trainer Spell: Frostbrand Weapon (#8038)", 7008038},
    {"Trainer Spell: Earth Shock (#8042)", 7008042},
    {"Trainer Spell: Earth Shock (#8044)", 7008044},
    {"Trainer Spell: Earth Shock (#8045)", 7008045},
    {"Trainer Spell: Earth Shock (#8046)", 7008046},
    {"Trainer Spell: Flame Shock (#8050)", 7008050},
    {"Trainer Spell: Flame Shock (#8052)", 7008052},
    {"Trainer Spell: Flame Shock (#8053)", 7008053},
    {"Trainer Spell: Frost Shock (#8056)", 7008056},
    {"Trainer Spell: Frost Shock (#8058)", 7008058},
    {"Trainer Spell: Strength of Earth Totem (#8075)", 7008075},
    {"Trainer Spell: Mind Blast (#8092)", 7008092},
    {"Trainer Spell: Mind Blast (#8102)", 7008102},
    {"Trainer Spell: Mind Blast (#8103)", 7008103},
    {"Trainer Spell: Mind Blast (#8104)", 7008104},
    {"Trainer Spell: Mind Blast (#8105)", 7008105},
    {"Trainer Spell: Mind Blast (#8106)", 7008106},
    {"Trainer Spell: Psychic Scream (#8122)", 7008122},
    {"Trainer Spell: Psychic Scream (#8124)", 7008124},
    {"Trainer Spell: Mana Burn (#8129)", 7008129},
    {"Trainer Spell: Lightning Shield (#8134)", 7008134},
    {"Trainer Spell: Tremor Totem (#8143)", 7008143},
    {"Trainer Spell: Stoneskin Totem (#8154)", 7008154},
    {"Trainer Spell: Stoneskin Totem (#8155)", 7008155},
    {"Trainer Spell: Strength of Earth Totem (#8160)", 7008160},
    {"Trainer Spell: Strength of Earth Totem (#8161)", 7008161},
    {"Trainer Spell: Cleansing Totem (#8170)", 7008170},
    {"Trainer Spell: Grounding Totem (#8177)", 7008177},
    {"Trainer Spell: Frost Resistance Totem (#8181)", 7008181},
    {"Trainer Spell: Fire Resistance Totem (#8184)", 7008184},
    {"Trainer Spell: Magma Totem (#8190)", 7008190},
    {"Trainer Spell: Thunder Clap (#8198)", 7008198},
    {"Trainer Spell: Thunder Clap (#8204)", 7008204},
    {"Trainer Spell: Thunder Clap (#8205)", 7008205},
    {"Trainer Spell: Flametongue Totem (#8227)", 7008227},
    {"Trainer Spell: Windfury Weapon (#8232)", 7008232},
    {"Trainer Spell: Windfury Weapon (#8235)", 7008235},
    {"Trainer Spell: Flametongue Totem (#8249)", 7008249},
    {"Trainer Spell: Drain Soul (#8288)", 7008288},
    {"Trainer Spell: Drain Soul (#8289)", 7008289},
    {"Trainer Spell: Fireball (#8400)", 7008400},
    {"Trainer Spell: Fireball (#8401)", 7008401},
    {"Trainer Spell: Fireball (#8402)", 7008402},
    {"Trainer Spell: Frostbolt (#8406)", 7008406},
    {"Trainer Spell: Frostbolt (#8407)", 7008407},
    {"Trainer Spell: Frostbolt (#8408)", 7008408},
    {"Trainer Spell: Fire Blast (#8412)", 7008412},
    {"Trainer Spell: Fire Blast (#8413)", 7008413},
    {"Trainer Spell: Arcane Missiles (#8416)", 7008416},
    {"Trainer Spell: Arcane Missiles (#8417)", 7008417},
    {"Trainer Spell: Flamestrike (#8422)", 7008422},
    {"Trainer Spell: Flamestrike (#8423)", 7008423},
    {"Trainer Spell: Blizzard (#8427)", 7008427},
    {"Trainer Spell: Arcane Explosion (#8437)", 7008437},
    {"Trainer Spell: Arcane Explosion (#8438)", 7008438},
    {"Trainer Spell: Arcane Explosion (#8439)", 7008439},
    {"Trainer Spell: Scorch (#8444)", 7008444},
    {"Trainer Spell: Scorch (#8445)", 7008445},
    {"Trainer Spell: Scorch (#8446)", 7008446},
    {"Trainer Spell: Dampen Magic (#8450)", 7008450},
    {"Trainer Spell: Dampen Magic (#8451)", 7008451},
    {"Trainer Spell: Amplify Magic (#8455)", 7008455},
    {"Trainer Spell: Fire Ward (#8457)", 7008457},
    {"Trainer Spell: Fire Ward (#8458)", 7008458},
    {"Trainer Spell: Frost Ward (#8461)", 7008461},
    {"Trainer Spell: Frost Ward (#8462)", 7008462},
    {"Trainer Spell: Cone of Cold (#8492)", 7008492},
    {"Trainer Spell: Mana Shield (#8494)", 7008494},
    {"Trainer Spell: Mana Shield (#8495)", 7008495},
    {"Trainer Spell: Fire Nova (#8498)", 7008498},
    {"Trainer Spell: Fire Nova (#8499)", 7008499},
    {"Trainer Spell: Windfury Totem (#8512)", 7008512},
    {"Trainer Spell: Sinister Strike (#8621)", 7008621},
    {"Trainer Spell: Eviscerate (#8623)", 7008623},
    {"Trainer Spell: Eviscerate (#8624)", 7008624},
    {"Trainer Spell: Garrote (#8631)", 7008631},
    {"Trainer Spell: Garrote (#8632)", 7008632},
    {"Trainer Spell: Garrote (#8633)", 7008633},
    {"Trainer Spell: Feint (#8637)", 7008637},
    {"Trainer Spell: Rupture (#8639)", 7008639},
    {"Trainer Spell: Rupture (#8640)", 7008640},
    {"Trainer Spell: Kidney Shot (#8643)", 7008643},
    {"Trainer Spell: Expose Armor (#8647)", 7008647},
    {"Trainer Spell: Ambush (#8676)", 7008676},
    {"Trainer Spell: Sprint (#8696)", 7008696},
    {"Trainer Spell: Backstab (#8721)", 7008721},
    {"Trainer Spell: Ambush (#8724)", 7008724},
    {"Trainer Spell: Ambush (#8725)", 7008725},
    {"Trainer Spell: Mail (#8737)", 7008737},
    {"Trainer Spell: Slam (#8820)", 7008820},
    {"Trainer Spell: Healing Touch (#8903)", 7008903},
    {"Trainer Spell: Wrath (#8905)", 7008905},
    {"Trainer Spell: Mark of the Wild (#8907)", 7008907},
    {"Trainer Spell: Rejuvenation (#8910)", 7008910},
    {"Trainer Spell: Thorns (#8914)", 7008914},
    {"Trainer Spell: Tranquility (#8918)", 7008918},
    {"Trainer Spell: Moonfire (#8921)", 7008921},
    {"Trainer Spell: Moonfire (#8924)", 7008924},
    {"Trainer Spell: Moonfire (#8925)", 7008925},
    {"Trainer Spell: Moonfire (#8926)", 7008926},
    {"Trainer Spell: Moonfire (#8927)", 7008927},
    {"Trainer Spell: Moonfire (#8928)", 7008928},
    {"Trainer Spell: Moonfire (#8929)", 7008929},
    {"Trainer Spell: Regrowth (#8936)", 7008936},
    {"Trainer Spell: Regrowth (#8938)", 7008938},
    {"Trainer Spell: Regrowth (#8939)", 7008939},
    {"Trainer Spell: Regrowth (#8940)", 7008940},
    {"Trainer Spell: Regrowth (#8941)", 7008941},
    {"Trainer Spell: Starfire (#8949)", 7008949},
    {"Trainer Spell: Starfire (#8950)", 7008950},
    {"Trainer Spell: Starfire (#8951)", 7008951},
    {"Trainer Spell: Soothe Animal (#8955)", 7008955},
    {"Trainer Spell: Maul (#8972)", 7008972},
    {"Trainer Spell: Bash (#8983)", 7008983},
    {"Trainer Spell: Shred (#8992)", 7008992},
    {"Trainer Spell: Cower (#8998)", 7008998},
    {"Trainer Spell: Cower (#9000)", 7009000},
    {"Trainer Spell: Pounce (#9005)", 7009005},
    {"Trainer Spell: Flash Heal (#9472)", 7009472},
    {"Trainer Spell: Flash Heal (#9473)", 7009473},
    {"Trainer Spell: Flash Heal (#9474)", 7009474},
    {"Trainer Spell: Shackle Undead (#9484)", 7009484},
    {"Trainer Spell: Shackle Undead (#9485)", 7009485},
    {"Trainer Spell: Demoralizing Roar (#9490)", 7009490},
    {"Trainer Spell: Rip (#9492)", 7009492},
    {"Trainer Spell: Rip (#9493)", 7009493},
    {"Trainer Spell: Dire Bear Form (#9634)", 7009634},
    {"Trainer Spell: Maul (#9745)", 7009745},
    {"Trainer Spell: Demoralizing Roar (#9747)", 7009747},
    {"Trainer Spell: Regrowth (#9750)", 7009750},
    {"Trainer Spell: Rip (#9752)", 7009752},
    {"Trainer Spell: Swipe (Bear) (#9754)", 7009754},
    {"Trainer Spell: Thorns (#9756)", 7009756},
    {"Trainer Spell: Healing Touch (#9758)", 7009758},
    {"Trainer Spell: Dash (#9821)", 7009821},
    {"Trainer Spell: Pounce (#9823)", 7009823},
    {"Trainer Spell: Pounce (#9827)", 7009827},
    {"Trainer Spell: Shred (#9829)", 7009829},
    {"Trainer Spell: Shred (#9830)", 7009830},
    {"Trainer Spell: Moonfire (#9833)", 7009833},
    {"Trainer Spell: Moonfire (#9834)", 7009834},
    {"Trainer Spell: Moonfire (#9835)", 7009835},
    {"Trainer Spell: Rejuvenation (#9839)", 7009839},
    {"Trainer Spell: Rejuvenation (#9840)", 7009840},
    {"Trainer Spell: Rejuvenation (#9841)", 7009841},
    {"Trainer Spell: Tiger's Fury (#9845)", 7009845},
    {"Trainer Spell: Tiger's Fury (#9846)", 7009846},
    {"Trainer Spell: Claw (#9849)", 7009849},
    {"Trainer Spell: Claw (#9850)", 7009850},
    {"Trainer Spell: Entangling Roots (#9852)", 7009852},
    {"Trainer Spell: Entangling Roots (#9853)", 7009853},
    {"Trainer Spell: Regrowth (#9856)", 7009856},
    {"Trainer Spell: Regrowth (#9857)", 7009857},
    {"Trainer Spell: Regrowth (#9858)", 7009858},
    {"Trainer Spell: Tranquility (#9862)", 7009862},
    {"Trainer Spell: Tranquility (#9863)", 7009863},
    {"Trainer Spell: Ravage (#9866)", 7009866},
    {"Trainer Spell: Ravage (#9867)", 7009867},
    {"Trainer Spell: Starfire (#9875)", 7009875},
    {"Trainer Spell: Starfire (#9876)", 7009876},
    {"Trainer Spell: Maul (#9880)", 7009880},
    {"Trainer Spell: Maul (#9881)", 7009881},
    {"Trainer Spell: Mark of the Wild (#9884)", 7009884},
    {"Trainer Spell: Mark of the Wild (#9885)", 7009885},
    {"Trainer Spell: Healing Touch (#9888)", 7009888},
    {"Trainer Spell: Healing Touch (#9889)", 7009889},
    {"Trainer Spell: Cower (#9892)", 7009892},
    {"Trainer Spell: Rip (#9894)", 7009894},
    {"Trainer Spell: Rip (#9896)", 7009896},
    {"Trainer Spell: Demoralizing Roar (#9898)", 7009898},
    {"Trainer Spell: Soothe Animal (#9901)", 7009901},
    {"Trainer Spell: Rake (#9904)", 7009904},
    {"Trainer Spell: Swipe (Bear) (#9908)", 7009908},
    {"Trainer Spell: Thorns (#9910)", 7009910},
    {"Trainer Spell: Wrath (#9912)", 7009912},
    {"Trainer Spell: Conjure Mana Gem (#10053)", 7010053},
    {"Trainer Spell: Conjure Mana Gem (#10054)", 7010054},
    {"Trainer Spell: Portal: Stormwind (#10059)", 7010059},
    {"Trainer Spell: Conjure Water (#10138)", 7010138},
    {"Trainer Spell: Conjure Water (#10139)", 7010139},
    {"Trainer Spell: Conjure Water (#10140)", 7010140},
    {"Trainer Spell: Conjure Food (#10144)", 7010144},
    {"Trainer Spell: Conjure Food (#10145)", 7010145},
    {"Trainer Spell: Fireball (#10148)", 7010148},
    {"Trainer Spell: Fireball (#10149)", 7010149},
    {"Trainer Spell: Fireball (#10150)", 7010150},
    {"Trainer Spell: Fireball (#10151)", 7010151},
    {"Trainer Spell: Arcane Intellect (#10156)", 7010156},
    {"Trainer Spell: Arcane Intellect (#10157)", 7010157},
    {"Trainer Spell: Cone of Cold (#10159)", 7010159},
    {"Trainer Spell: Cone of Cold (#10160)", 7010160},
    {"Trainer Spell: Cone of Cold (#10161)", 7010161},
    {"Trainer Spell: Amplify Magic (#10169)", 7010169},
    {"Trainer Spell: Amplify Magic (#10170)", 7010170},
    {"Trainer Spell: Dampen Magic (#10173)", 7010173},
    {"Trainer Spell: Dampen Magic (#10174)", 7010174},
    {"Trainer Spell: Frost Ward (#10177)", 7010177},
    {"Trainer Spell: Frostbolt (#10179)", 7010179},
    {"Trainer Spell: Frostbolt (#10180)", 7010180},
    {"Trainer Spell: Frostbolt (#10181)", 7010181},
    {"Trainer Spell: Blizzard (#10185)", 7010185},
    {"Trainer Spell: Blizzard (#10186)", 7010186},
    {"Trainer Spell: Blizzard (#10187)", 7010187},
    {"Trainer Spell: Mana Shield (#10191)", 7010191},
    {"Trainer Spell: Mana Shield (#10192)", 7010192},
    {"Trainer Spell: Mana Shield (#10193)", 7010193},
    {"Trainer Spell: Fire Blast (#10197)", 7010197},
    {"Trainer Spell: Fire Blast (#10199)", 7010199},
    {"Trainer Spell: Arcane Explosion (#10201)", 7010201},
    {"Trainer Spell: Arcane Explosion (#10202)", 7010202},
    {"Trainer Spell: Scorch (#10205)", 7010205},
    {"Trainer Spell: Scorch (#10206)", 7010206},
    {"Trainer Spell: Scorch (#10207)", 7010207},
    {"Trainer Spell: Arcane Missiles (#10211)", 7010211},
    {"Trainer Spell: Arcane Missiles (#10212)", 7010212},
    {"Trainer Spell: Flamestrike (#10215)", 7010215},
    {"Trainer Spell: Flamestrike (#10216)", 7010216},
    {"Trainer Spell: Ice Armor (#10219)", 7010219},
    {"Trainer Spell: Ice Armor (#10220)", 7010220},
    {"Trainer Spell: Fire Ward (#10223)", 7010223},
    {"Trainer Spell: Fire Ward (#10225)", 7010225},
    {"Trainer Spell: Frost Nova (#10230)", 7010230},
    {"Trainer Spell: Hand of Protection (#10278)", 7010278},
    {"Trainer Spell: Devotion Aura (#10290)", 7010290},
    {"Trainer Spell: Devotion Aura (#10291)", 7010291},
    {"Trainer Spell: Devotion Aura (#10292)", 7010292},
    {"Trainer Spell: Devotion Aura (#10293)", 7010293},
    {"Trainer Spell: Retribution Aura (#10298)", 7010298},
    {"Trainer Spell: Retribution Aura (#10299)", 7010299},
    {"Trainer Spell: Retribution Aura (#10300)", 7010300},
    {"Trainer Spell: Retribution Aura (#10301)", 7010301},
    {"Trainer Spell: Hammer of Justice (#10308)", 7010308},
    {"Trainer Spell: Lay on Hands (#10310)", 7010310},
    {"Trainer Spell: Exorcism (#10312)", 7010312},
    {"Trainer Spell: Exorcism (#10313)", 7010313},
    {"Trainer Spell: Exorcism (#10314)", 7010314},
    {"Trainer Spell: Holy Wrath (#10318)", 7010318},
    {"Trainer Spell: Judgement (#10321)", 7010321},
    {"Trainer Spell: Redemption (#10322)", 7010322},
    {"Trainer Spell: Redemption (#10324)", 7010324},
    {"Trainer Spell: Turn Evil (#10326)", 7010326},
    {"Trainer Spell: Holy Light (#10328)", 7010328},
    {"Trainer Spell: Holy Light (#10329)", 7010329},
    {"Trainer Spell: Lightning Bolt (#10391)", 7010391},
    {"Trainer Spell: Lightning Bolt (#10392)", 7010392},
    {"Trainer Spell: Healing Wave (#10395)", 7010395},
    {"Trainer Spell: Healing Wave (#10396)", 7010396},
    {"Trainer Spell: Rockbiter Weapon (#10399)", 7010399},
    {"Trainer Spell: Stoneskin Totem (#10406)", 7010406},
    {"Trainer Spell: Stoneskin Totem (#10407)", 7010407},
    {"Trainer Spell: Stoneskin Totem (#10408)", 7010408},
    {"Trainer Spell: Earth Shock (#10412)", 7010412},
    {"Trainer Spell: Earth Shock (#10413)", 7010413},
    {"Trainer Spell: Earth Shock (#10414)", 7010414},
    {"Trainer Spell: Stoneclaw Totem (#10427)", 7010427},
    {"Trainer Spell: Stoneclaw Totem (#10428)", 7010428},
    {"Trainer Spell: Lightning Shield (#10431)", 7010431},
    {"Trainer Spell: Lightning Shield (#10432)", 7010432},
    {"Trainer Spell: Searing Totem (#10437)", 7010437},
    {"Trainer Spell: Searing Totem (#10438)", 7010438},
    {"Trainer Spell: Strength of Earth Totem (#10442)", 7010442},
    {"Trainer Spell: Flame Shock (#10447)", 7010447},
    {"Trainer Spell: Flame Shock (#10448)", 7010448},
    {"Trainer Spell: Frostbrand Weapon (#10456)", 7010456},
    {"Trainer Spell: Healing Stream Totem (#10462)", 7010462},
    {"Trainer Spell: Healing Stream Totem (#10463)", 7010463},
    {"Trainer Spell: Lesser Healing Wave (#10466)", 7010466},
    {"Trainer Spell: Lesser Healing Wave (#10467)", 7010467},
    {"Trainer Spell: Lesser Healing Wave (#10468)", 7010468},
    {"Trainer Spell: Frost Shock (#10472)", 7010472},
    {"Trainer Spell: Frost Shock (#10473)", 7010473},
    {"Trainer Spell: Frost Resistance Totem (#10478)", 7010478},
    {"Trainer Spell: Frost Resistance Totem (#10479)", 7010479},
    {"Trainer Spell: Windfury Weapon (#10486)", 7010486},
    {"Trainer Spell: Mana Spring Totem (#10495)", 7010495},
    {"Trainer Spell: Mana Spring Totem (#10496)", 7010496},
    {"Trainer Spell: Mana Spring Totem (#10497)", 7010497},
    {"Trainer Spell: Flametongue Totem (#10526)", 7010526},
    {"Trainer Spell: Fire Resistance Totem (#10537)", 7010537},
    {"Trainer Spell: Fire Resistance Totem (#10538)", 7010538},
    {"Trainer Spell: Magma Totem (#10585)", 7010585},
    {"Trainer Spell: Magma Totem (#10586)", 7010586},
    {"Trainer Spell: Magma Totem (#10587)", 7010587},
    {"Trainer Spell: Nature Resistance Totem (#10595)", 7010595},
    {"Trainer Spell: Nature Resistance Totem (#10600)", 7010600},
    {"Trainer Spell: Nature Resistance Totem (#10601)", 7010601},
    {"Trainer Spell: Chain Lightning (#10605)", 7010605},
    {"Trainer Spell: Chain Heal (#10622)", 7010622},
    {"Trainer Spell: Chain Heal (#10623)", 7010623},
    {"Trainer Spell: Resurrection (#10880)", 7010880},
    {"Trainer Spell: Resurrection (#10881)", 7010881},
    {"Trainer Spell: Psychic Scream (#10888)", 7010888},
    {"Trainer Spell: Psychic Scream (#10890)", 7010890},
    {"Trainer Spell: Shadow Word: Pain (#10892)", 7010892},
    {"Trainer Spell: Shadow Word: Pain (#10893)", 7010893},
    {"Trainer Spell: Shadow Word: Pain (#10894)", 7010894},
    {"Trainer Spell: Power Word: Shield (#10898)", 7010898},
    {"Trainer Spell: Power Word: Shield (#10899)", 7010899},
    {"Trainer Spell: Power Word: Shield (#10900)", 7010900},
    {"Trainer Spell: Power Word: Shield (#10901)", 7010901},
    {"Trainer Spell: Mind Vision (#10909)", 7010909},
    {"Trainer Spell: Flash Heal (#10915)", 7010915},
    {"Trainer Spell: Flash Heal (#10916)", 7010916},
    {"Trainer Spell: Flash Heal (#10917)", 7010917},
    {"Trainer Spell: Renew (#10927)", 7010927},
    {"Trainer Spell: Renew (#10928)", 7010928},
    {"Trainer Spell: Renew (#10929)", 7010929},
    {"Trainer Spell: Smite (#10933)", 7010933},
    {"Trainer Spell: Smite (#10934)", 7010934},
    {"Trainer Spell: Power Word: Fortitude (#10937)", 7010937},
    {"Trainer Spell: Power Word: Fortitude (#10938)", 7010938},
    {"Trainer Spell: Mind Blast (#10945)", 7010945},
    {"Trainer Spell: Mind Blast (#10946)", 7010946},
    {"Trainer Spell: Mind Blast (#10947)", 7010947},
    {"Trainer Spell: Inner Fire (#10951)", 7010951},
    {"Trainer Spell: Inner Fire (#10952)", 7010952},
    {"Trainer Spell: Shackle Undead (#10955)", 7010955},
    {"Trainer Spell: Shadow Protection (#10957)", 7010957},
    {"Trainer Spell: Shadow Protection (#10958)", 7010958},
    {"Trainer Spell: Prayer of Healing (#10960)", 7010960},
    {"Trainer Spell: Prayer of Healing (#10961)", 7010961},
    {"Trainer Spell: Greater Heal (#10963)", 7010963},
    {"Trainer Spell: Greater Heal (#10964)", 7010964},
    {"Trainer Spell: Greater Heal (#10965)", 7010965},
    {"Trainer Spell: Ambush (#11267)", 7011267},
    {"Trainer Spell: Ambush (#11268)", 7011268},
    {"Trainer Spell: Ambush (#11269)", 7011269},
    {"Trainer Spell: Rupture (#11273)", 7011273},
    {"Trainer Spell: Rupture (#11274)", 7011274},
    {"Trainer Spell: Rupture (#11275)", 7011275},
    {"Trainer Spell: Backstab (#11279)", 7011279},
    {"Trainer Spell: Backstab (#11280)", 7011280},
    {"Trainer Spell: Backstab (#11281)", 7011281},
    {"Trainer Spell: Garrote (#11289)", 7011289},
    {"Trainer Spell: Garrote (#11290)", 7011290},
    {"Trainer Spell: Sinister Strike (#11293)", 7011293},
    {"Trainer Spell: Sinister Strike (#11294)", 7011294},
    {"Trainer Spell: Sap (#11297)", 7011297},
    {"Trainer Spell: Eviscerate (#11299)", 7011299},
    {"Trainer Spell: Eviscerate (#11300)", 7011300},
    {"Trainer Spell: Feint (#11303)", 7011303},
    {"Trainer Spell: Sprint (#11305)", 7011305},
    {"Trainer Spell: Fire Nova (#11314)", 7011314},
    {"Trainer Spell: Fire Nova (#11315)", 7011315},
    {"Trainer Spell: Portal: Ironforge (#11416)", 7011416},
    {"Trainer Spell: Portal: Orgrimmar (#11417)", 7011417},
    {"Trainer Spell: Portal: Undercity (#11418)", 7011418},
    {"Trainer Spell: Portal: Darnassus (#11419)", 7011419},
    {"Trainer Spell: Portal: Thunder Bluff (#11420)", 7011420},
    {"Trainer Spell: Battle Shout (#11549)", 7011549},
    {"Trainer Spell: Battle Shout (#11550)", 7011550},
    {"Trainer Spell: Battle Shout (#11551)", 7011551},
    {"Trainer Spell: Demoralizing Shout (#11554)", 7011554},
    {"Trainer Spell: Demoralizing Shout (#11555)", 7011555},
    {"Trainer Spell: Demoralizing Shout (#11556)", 7011556},
    {"Trainer Spell: Heroic Strike (#11564)", 7011564},
    {"Trainer Spell: Heroic Strike (#11565)", 7011565},
    {"Trainer Spell: Heroic Strike (#11566)", 7011566},
    {"Trainer Spell: Heroic Strike (#11567)", 7011567},
    {"Trainer Spell: Rend (#11572)", 7011572},
    {"Trainer Spell: Rend (#11573)", 7011573},
    {"Trainer Spell: Rend (#11574)", 7011574},
    {"Trainer Spell: Charge (#11578)", 7011578},
    {"Trainer Spell: Thunder Clap (#11580)", 7011580},
    {"Trainer Spell: Thunder Clap (#11581)", 7011581},
    {"Trainer Spell: Revenge (#11600)", 7011600},
    {"Trainer Spell: Revenge (#11601)", 7011601},
    {"Trainer Spell: Slam (#11604)", 7011604},
    {"Trainer Spell: Slam (#11605)", 7011605},
    {"Trainer Spell: Cleave (#11608)", 7011608},
    {"Trainer Spell: Cleave (#11609)", 7011609},
    {"Trainer Spell: Shadow Bolt (#11659)", 7011659},
    {"Trainer Spell: Shadow Bolt (#11660)", 7011660},
    {"Trainer Spell: Shadow Bolt (#11661)", 7011661},
    {"Trainer Spell: Immolate (#11665)", 7011665},
    {"Trainer Spell: Immolate (#11667)", 7011667},
    {"Trainer Spell: Immolate (#11668)", 7011668},
    {"Trainer Spell: Corruption (#11671)", 7011671},
    {"Trainer Spell: Corruption (#11672)", 7011672},
    {"Trainer Spell: Drain Soul (#11675)", 7011675},
    {"Trainer Spell: Rain of Fire (#11677)", 7011677},
    {"Trainer Spell: Rain of Fire (#11678)", 7011678},
    {"Trainer Spell: Hellfire (#11683)", 7011683},
    {"Trainer Spell: Hellfire (#11684)", 7011684},
    {"Trainer Spell: Life Tap (#11687)", 7011687},
    {"Trainer Spell: Life Tap (#11688)", 7011688},
    {"Trainer Spell: Life Tap (#11689)", 7011689},
    {"Trainer Spell: Health Funnel (#11693)", 7011693},
    {"Trainer Spell: Health Funnel (#11694)", 7011694},
    {"Trainer Spell: Health Funnel (#11695)", 7011695},
    {"Trainer Spell: Drain Life (#11699)", 7011699},
    {"Trainer Spell: Drain Life (#11700)", 7011700},
    {"Trainer Spell: Curse of Weakness (#11707)", 7011707},
    {"Trainer Spell: Curse of Weakness (#11708)", 7011708},
    {"Trainer Spell: Curse of Agony (#11711)", 7011711},
    {"Trainer Spell: Curse of Agony (#11712)", 7011712},
    {"Trainer Spell: Curse of Agony (#11713)", 7011713},
    {"Trainer Spell: Curse of Tongues (#11719)", 7011719},
    {"Trainer Spell: Curse of the Elements (#11721)", 7011721},
    {"Trainer Spell: Curse of the Elements (#11722)", 7011722},
    {"Trainer Spell: Enslave Demon (#11725)", 7011725},
    {"Trainer Spell: Enslave Demon (#11726)", 7011726},
    {"Trainer Spell: Create Healthstone (#11729)", 7011729},
    {"Trainer Spell: Create Healthstone (#11730)", 7011730},
    {"Trainer Spell: Demon Armor (#11733)", 7011733},
    {"Trainer Spell: Demon Armor (#11734)", 7011734},
    {"Trainer Spell: Demon Armor (#11735)", 7011735},
    {"Trainer Spell: Shadow Ward (#11739)", 7011739},
    {"Trainer Spell: Shadow Ward (#11740)", 7011740},
    {"Trainer Spell: Evocation (#12051)", 7012051},
    {"Trainer Spell: Pyroblast (#12505)", 7012505},
    {"Trainer Spell: Pyroblast (#12522)", 7012522},
    {"Trainer Spell: Pyroblast (#12523)", 7012523},
    {"Trainer Spell: Pyroblast (#12524)", 7012524},
    {"Trainer Spell: Pyroblast (#12525)", 7012525},
    {"Trainer Spell: Pyroblast (#12526)", 7012526},
    {"Trainer Spell: Stance Mastery (#12678)", 7012678},
    {"Trainer Spell: Polymorph (#12824)", 7012824},
    {"Trainer Spell: Polymorph (#12825)", 7012825},
    {"Trainer Spell: Polymorph (#12826)", 7012826},
    {"Trainer Spell: Blast Wave (#13018)", 7013018},
    {"Trainer Spell: Blast Wave (#13019)", 7013019},
    {"Trainer Spell: Blast Wave (#13020)", 7013020},
    {"Trainer Spell: Blast Wave (#13021)", 7013021},
    {"Trainer Spell: Ice Barrier (#13031)", 7013031},
    {"Trainer Spell: Ice Barrier (#13032)", 7013032},
    {"Trainer Spell: Ice Barrier (#13033)", 7013033},
    {"Trainer Spell: Aspect of the Pack (#13159)", 7013159},
    {"Trainer Spell: Aspect of the Beast (#13161)", 7013161},
    {"Trainer Spell: Aspect of the Monkey (#13163)", 7013163},
    {"Trainer Spell: Aspect of the Hawk (#13165)", 7013165},
    {"Trainer Spell: Mend Pet (#13542)", 7013542},
    {"Trainer Spell: Mend Pet (#13543)", 7013543},
    {"Trainer Spell: Mend Pet (#13544)", 7013544},
    {"Trainer Spell: Serpent Sting (#13549)", 7013549},
    {"Trainer Spell: Serpent Sting (#13550)", 7013550},
    {"Trainer Spell: Serpent Sting (#13551)", 7013551},
    {"Trainer Spell: Serpent Sting (#13552)", 7013552},
    {"Trainer Spell: Serpent Sting (#13553)", 7013553},
    {"Trainer Spell: Serpent Sting (#13554)", 7013554},
    {"Trainer Spell: Serpent Sting (#13555)", 7013555},
    {"Trainer Spell: Immolation Trap (#13795)", 7013795},
    {"Trainer Spell: Frost Trap (#13809)", 7013809},
    {"Trainer Spell: Explosive Trap (#13813)", 7013813},
    {"Trainer Spell: Summon Warhorse (#13820)", 7013820},
    {"Trainer Spell: Raptor Strike (#14260)", 7014260},
    {"Trainer Spell: Raptor Strike (#14261)", 7014261},
    {"Trainer Spell: Raptor Strike (#14262)", 7014262},
    {"Trainer Spell: Raptor Strike (#14263)", 7014263},
    {"Trainer Spell: Raptor Strike (#14264)", 7014264},
    {"Trainer Spell: Raptor Strike (#14265)", 7014265},
    {"Trainer Spell: Raptor Strike (#14266)", 7014266},
    {"Trainer Spell: Mongoose Bite (#14269)", 7014269},
    {"Trainer Spell: Mongoose Bite (#14270)", 7014270},
    {"Trainer Spell: Mongoose Bite (#14271)", 7014271},
    {"Trainer Spell: Arcane Shot (#14281)", 7014281},
    {"Trainer Spell: Arcane Shot (#14282)", 7014282},
    {"Trainer Spell: Arcane Shot (#14283)", 7014283},
    {"Trainer Spell: Arcane Shot (#14284)", 7014284},
    {"Trainer Spell: Arcane Shot (#14285)", 7014285},
    {"Trainer Spell: Arcane Shot (#14286)", 7014286},
    {"Trainer Spell: Arcane Shot (#14287)", 7014287},
    {"Trainer Spell: Multi-Shot (#14288)", 7014288},
    {"Trainer Spell: Multi-Shot (#14289)", 7014289},
    {"Trainer Spell: Multi-Shot (#14290)", 7014290},
    {"Trainer Spell: Volley (#14294)", 7014294},
    {"Trainer Spell: Volley (#14295)", 7014295},
    {"Trainer Spell: Immolation Trap (#14302)", 7014302},
    {"Trainer Spell: Immolation Trap (#14303)", 7014303},
    {"Trainer Spell: Immolation Trap (#14304)", 7014304},
    {"Trainer Spell: Immolation Trap (#14305)", 7014305},
    {"Trainer Spell: Freezing Trap (#14310)", 7014310},
    {"Trainer Spell: Freezing Trap (#14311)", 7014311},
    {"Trainer Spell: Explosive Trap (#14316)", 7014316},
    {"Trainer Spell: Explosive Trap (#14317)", 7014317},
    {"Trainer Spell: Aspect of the Hawk (#14318)", 7014318},
    {"Trainer Spell: Aspect of the Hawk (#14319)", 7014319},
    {"Trainer Spell: Aspect of the Hawk (#14320)", 7014320},
    {"Trainer Spell: Aspect of the Hawk (#14321)", 7014321},
    {"Trainer Spell: Aspect of the Hawk (#14322)", 7014322},
    {"Trainer Spell: Hunter's Mark (#14323)", 7014323},
    {"Trainer Spell: Hunter's Mark (#14324)", 7014324},
    {"Trainer Spell: Hunter's Mark (#14325)", 7014325},
    {"Trainer Spell: Scare Beast (#14326)", 7014326},
    {"Trainer Spell: Scare Beast (#14327)", 7014327},
    {"Trainer Spell: Divine Spirit (#14752)", 7014752},
    {"Trainer Spell: Divine Spirit (#14818)", 7014818},
    {"Trainer Spell: Divine Spirit (#14819)", 7014819},
    {"Trainer Spell: Holy Fire (#14914)", 7014914},
    {"Trainer Spell: Lightning Bolt (#15207)", 7015207},
    {"Trainer Spell: Lightning Bolt (#15208)", 7015208},
    {"Trainer Spell: Holy Nova (#15237)", 7015237},
    {"Trainer Spell: Holy Fire (#15261)", 7015261},
    {"Trainer Spell: Holy Fire (#15262)", 7015262},
    {"Trainer Spell: Holy Fire (#15263)", 7015263},
    {"Trainer Spell: Holy Fire (#15264)", 7015264},
    {"Trainer Spell: Holy Fire (#15265)", 7015265},
    {"Trainer Spell: Holy Fire (#15266)", 7015266},
    {"Trainer Spell: Holy Fire (#15267)", 7015267},
    {"Trainer Spell: Holy Nova (#15430)", 7015430},
    {"Trainer Spell: Holy Nova (#15431)", 7015431},
    {"Trainer Spell: Flametongue Weapon (#16339)", 7016339},
    {"Trainer Spell: Flametongue Weapon (#16341)", 7016341},
    {"Trainer Spell: Flametongue Weapon (#16342)", 7016342},
    {"Trainer Spell: Frostbrand Weapon (#16355)", 7016355},
    {"Trainer Spell: Frostbrand Weapon (#16356)", 7016356},
    {"Trainer Spell: Windfury Weapon (#16362)", 7016362},
    {"Trainer Spell: Flametongue Totem (#16387)", 7016387},
    {"Trainer Spell: Nature's Grasp (#16689)", 7016689},
    {"Trainer Spell: Nature's Grasp (#16810)", 7016810},
    {"Trainer Spell: Nature's Grasp (#16811)", 7016811},
    {"Trainer Spell: Nature's Grasp (#16812)", 7016812},
    {"Trainer Spell: Nature's Grasp (#16813)", 7016813},
    {"Trainer Spell: Faerie Fire (Feral) (#16857)", 7016857},
    {"Trainer Spell: Hurricane (#16914)", 7016914},
    {"Trainer Spell: Mind Flay (#17311)", 7017311},
    {"Trainer Spell: Mind Flay (#17312)", 7017312},
    {"Trainer Spell: Mind Flay (#17313)", 7017313},
    {"Trainer Spell: Mind Flay (#17314)", 7017314},
    {"Trainer Spell: Nature's Grasp (#17329)", 7017329},
    {"Trainer Spell: Hemorrhage (#17347)", 7017347},
    {"Trainer Spell: Hemorrhage (#17348)", 7017348},
    {"Trainer Spell: Hurricane (#17401)", 7017401},
    {"Trainer Spell: Hurricane (#17402)", 7017402},
    {"Trainer Spell: Create Spellstone (#17727)", 7017727},
    {"Trainer Spell: Create Spellstone (#17728)", 7017728},
    {"Trainer Spell: Searing Pain (#17919)", 7017919},
    {"Trainer Spell: Searing Pain (#17920)", 7017920},
    {"Trainer Spell: Searing Pain (#17921)", 7017921},
    {"Trainer Spell: Searing Pain (#17922)", 7017922},
    {"Trainer Spell: Searing Pain (#17923)", 7017923},
    {"Trainer Spell: Soul Fire (#17924)", 7017924},
    {"Trainer Spell: Death Coil (#17925)", 7017925},
    {"Trainer Spell: Death Coil (#17926)", 7017926},
    {"Trainer Spell: Howl of Terror (#17928)", 7017928},
    {"Trainer Spell: Create Firestone (#17951)", 7017951},
    {"Trainer Spell: Create Firestone (#17952)", 7017952},
    {"Trainer Spell: Create Firestone (#17953)", 7017953},
    {"Trainer Spell: Berserker Rage (#18499)", 7018499},
    {"Trainer Spell: Banish (#18647)", 7018647},
    {"Trainer Spell: Hibernate (#18657)", 7018657},
    {"Trainer Spell: Hibernate (#18658)", 7018658},
    {"Trainer Spell: Mind Flay (#18807)", 7018807},
    {"Trainer Spell: Pyroblast (#18809)", 7018809},
    {"Trainer Spell: Shadowburn (#18867)", 7018867},
    {"Trainer Spell: Shadowburn (#18868)", 7018868},
    {"Trainer Spell: Shadowburn (#18869)", 7018869},
    {"Trainer Spell: Shadowburn (#18870)", 7018870},
    {"Trainer Spell: Shadowburn (#18871)", 7018871},
    {"Trainer Spell: Dark Pact (#18937)", 7018937},
    {"Trainer Spell: Dark Pact (#18938)", 7018938},
    {"Trainer Spell: Desperate Prayer (#19238)", 7019238},
    {"Trainer Spell: Desperate Prayer (#19240)", 7019240},
    {"Trainer Spell: Desperate Prayer (#19241)", 7019241},
    {"Trainer Spell: Desperate Prayer (#19242)", 7019242},
    {"Trainer Spell: Desperate Prayer (#19243)", 7019243},
    {"Trainer Spell: Deterrence (#19263)", 7019263},
    {"Trainer Spell: Devouring Plague (#19276)", 7019276},
    {"Trainer Spell: Devouring Plague (#19277)", 7019277},
    {"Trainer Spell: Devouring Plague (#19278)", 7019278},
    {"Trainer Spell: Devouring Plague (#19279)", 7019279},
    {"Trainer Spell: Devouring Plague (#19280)", 7019280},
    {"Trainer Spell: Blessing of Might (#19740)", 7019740},
    {"Trainer Spell: Blessing of Wisdom (#19742)", 7019742},
    {"Trainer Spell: Concentration Aura (#19746)", 7019746},
    {"Trainer Spell: Flash of Light (#19750)", 7019750},
    {"Trainer Spell: Divine Intervention (#19752)", 7019752},
    {"Trainer Spell: Blessing of Might (#19834)", 7019834},
    {"Trainer Spell: Blessing of Might (#19835)", 7019835},
    {"Trainer Spell: Blessing of Might (#19836)", 7019836},
    {"Trainer Spell: Blessing of Might (#19837)", 7019837},
    {"Trainer Spell: Blessing of Might (#19838)", 7019838},
    {"Trainer Spell: Blessing of Wisdom (#19850)", 7019850},
    {"Trainer Spell: Blessing of Wisdom (#19852)", 7019852},
    {"Trainer Spell: Blessing of Wisdom (#19853)", 7019853},
    {"Trainer Spell: Blessing of Wisdom (#19854)", 7019854},
    {"Trainer Spell: Shadow Resistance Aura (#19876)", 7019876},
    {"Trainer Spell: Track Demons (#19878)", 7019878},
    {"Trainer Spell: Track Dragonkin (#19879)", 7019879},
    {"Trainer Spell: Track Elementals (#19880)", 7019880},
    {"Trainer Spell: Track Giants (#19882)", 7019882},
    {"Trainer Spell: Track Humanoids (#19883)", 7019883},
    {"Trainer Spell: Track Undead (#19884)", 7019884},
    {"Trainer Spell: Track Hidden (#19885)", 7019885},
    {"Trainer Spell: Frost Resistance Aura (#19888)", 7019888},
    {"Trainer Spell: Fire Resistance Aura (#19891)", 7019891},
    {"Trainer Spell: Shadow Resistance Aura (#19895)", 7019895},
    {"Trainer Spell: Shadow Resistance Aura (#19896)", 7019896},
    {"Trainer Spell: Frost Resistance Aura (#19897)", 7019897},
    {"Trainer Spell: Frost Resistance Aura (#19898)", 7019898},
    {"Trainer Spell: Fire Resistance Aura (#19899)", 7019899},
    {"Trainer Spell: Fire Resistance Aura (#19900)", 7019900},
    {"Trainer Spell: Flash of Light (#19939)", 7019939},
    {"Trainer Spell: Flash of Light (#19940)", 7019940},
    {"Trainer Spell: Flash of Light (#19941)", 7019941},
    {"Trainer Spell: Flash of Light (#19942)", 7019942},
    {"Trainer Spell: Flash of Light (#19943)", 7019943},
    {"Trainer Spell: Aspect of the Wild (#20043)", 7020043},
    {"Trainer Spell: Consecration (#20116)", 7020116},
    {"Trainer Spell: Seal of Justice (#20164)", 7020164},
    {"Trainer Spell: Seal of Light (#20165)", 7020165},
    {"Trainer Spell: Seal of Wisdom (#20166)", 7020166},
    {"Trainer Spell: Aspect of the Wild (#20190)", 7020190},
    {"Trainer Spell: Blessing of Kings (#20217)", 7020217},
    {"Trainer Spell: Retaliation (#20230)", 7020230},
    {"Trainer Spell: Intercept (#20252)", 7020252},
    {"Trainer Spell: Rebirth (#20484)", 7020484},
    {"Trainer Spell: Cleave (#20569)", 7020569},
    {"Trainer Spell: Reincarnation (#20608)", 7020608},
    {"Trainer Spell: Ancestral Spirit (#20609)", 7020609},
    {"Trainer Spell: Ancestral Spirit (#20610)", 7020610},
    {"Trainer Spell: Execute (#20658)", 7020658},
    {"Trainer Spell: Execute (#20660)", 7020660},
    {"Trainer Spell: Execute (#20661)", 7020661},
    {"Trainer Spell: Execute (#20662)", 7020662},
    {"Trainer Spell: Feline Grace (#20719)", 7020719},
    {"Trainer Spell: Distracting Shot (#20736)", 7020736},
    {"Trainer Spell: Rebirth (#20739)", 7020739},
    {"Trainer Spell: Rebirth (#20742)", 7020742},
    {"Trainer Spell: Rebirth (#20747)", 7020747},
    {"Trainer Spell: Rebirth (#20748)", 7020748},
    {"Trainer Spell: Create Soulstone (#20752)", 7020752},
    {"Trainer Spell: Create Soulstone (#20755)", 7020755},
    {"Trainer Spell: Create Soulstone (#20756)", 7020756},
    {"Trainer Spell: Create Soulstone (#20757)", 7020757},
    {"Trainer Spell: Resurrection (#20770)", 7020770},
    {"Trainer Spell: Redemption (#20772)", 7020772},
    {"Trainer Spell: Redemption (#20773)", 7020773},
    {"Trainer Spell: Ancestral Spirit (#20776)", 7020776},
    {"Trainer Spell: Ancestral Spirit (#20777)", 7020777},
    {"Trainer Spell: Aimed Shot (#20900)", 7020900},
    {"Trainer Spell: Aimed Shot (#20901)", 7020901},
    {"Trainer Spell: Aimed Shot (#20902)", 7020902},
    {"Trainer Spell: Aimed Shot (#20903)", 7020903},
    {"Trainer Spell: Aimed Shot (#20904)", 7020904},
    {"Trainer Spell: Counterattack (#20909)", 7020909},
    {"Trainer Spell: Counterattack (#20910)", 7020910},
    {"Trainer Spell: Consecration (#20922)", 7020922},
    {"Trainer Spell: Consecration (#20923)", 7020923},
    {"Trainer Spell: Consecration (#20924)", 7020924},
    {"Trainer Spell: Holy Shield (#20927)", 7020927},
    {"Trainer Spell: Holy Shield (#20928)", 7020928},
    {"Trainer Spell: Holy Shock (#20929)", 7020929},
    {"Trainer Spell: Holy Shock (#20930)", 7020930},
    {"Trainer Spell: Mortal Strike (#21551)", 7021551},
    {"Trainer Spell: Mortal Strike (#21552)", 7021552},
    {"Trainer Spell: Mortal Strike (#21553)", 7021553},
    {"Trainer Spell: Ferocious Bite (#22568)", 7022568},
    {"Trainer Spell: Maim (#22570)", 7022570},
    {"Trainer Spell: Mage Armor (#22782)", 7022782},
    {"Trainer Spell: Mage Armor (#22783)", 7022783},
    {"Trainer Spell: Barkskin (#22812)", 7022812},
    {"Trainer Spell: Ferocious Bite (#22827)", 7022827},
    {"Trainer Spell: Ferocious Bite (#22828)", 7022828},
    {"Trainer Spell: Ferocious Bite (#22829)", 7022829},
    {"Trainer Spell: Frenzied Regeneration (#22842)", 7022842},
    {"Trainer Spell: Dreadsteed (#23161)", 7023161},
    {"Trainer Spell: Charger (#23214)", 7023214},
    {"Trainer Spell: Spell Reflection (#23920)", 7023920},
    {"Trainer Spell: Shield Slam (#23922)", 7023922},
    {"Trainer Spell: Shield Slam (#23923)", 7023923},
    {"Trainer Spell: Shield Slam (#23924)", 7023924},
    {"Trainer Spell: Shield Slam (#23925)", 7023925},
    {"Trainer Spell: Wyvern Sting (#24132)", 7024132},
    {"Trainer Spell: Wyvern Sting (#24133)", 7024133},
    {"Trainer Spell: Hammer of Wrath (#24239)", 7024239},
    {"Trainer Spell: Ferocious Bite (#24248)", 7024248},
    {"Trainer Spell: Hammer of Wrath (#24274)", 7024274},
    {"Trainer Spell: Hammer of Wrath (#24275)", 7024275},
    {"Trainer Spell: Water Shield (#24398)", 7024398},
    {"Trainer Spell: Insect Swarm (#24974)", 7024974},
    {"Trainer Spell: Insect Swarm (#24975)", 7024975},
    {"Trainer Spell: Insect Swarm (#24976)", 7024976},
    {"Trainer Spell: Insect Swarm (#24977)", 7024977},
    {"Trainer Spell: Demoralizing Shout (#25202)", 7025202},
    {"Trainer Spell: Demoralizing Shout (#25203)", 7025203},
    {"Trainer Spell: Rend (#25208)", 7025208},
    {"Trainer Spell: Greater Heal (#25210)", 7025210},
    {"Trainer Spell: Greater Heal (#25213)", 7025213},
    {"Trainer Spell: Power Word: Shield (#25217)", 7025217},
    {"Trainer Spell: Power Word: Shield (#25218)", 7025218},
    {"Trainer Spell: Renew (#25221)", 7025221},
    {"Trainer Spell: Renew (#25222)", 7025222},
    {"Trainer Spell: Cleave (#25231)", 7025231},
    {"Trainer Spell: Flash Heal (#25233)", 7025233},
    {"Trainer Spell: Execute (#25234)", 7025234},
    {"Trainer Spell: Flash Heal (#25235)", 7025235},
    {"Trainer Spell: Execute (#25236)", 7025236},
    {"Trainer Spell: Slam (#25241)", 7025241},
    {"Trainer Spell: Slam (#25242)", 7025242},
    {"Trainer Spell: Mortal Strike (#25248)", 7025248},
    {"Trainer Spell: Shield Slam (#25258)", 7025258},
    {"Trainer Spell: Thunder Clap (#25264)", 7025264},
    {"Trainer Spell: Revenge (#25269)", 7025269},
    {"Trainer Spell: Prayer of Healing (#25308)", 7025308},
    {"Trainer Spell: Divine Spirit (#25312)", 7025312},
    {"Trainer Spell: Holy Nova (#25331)", 7025331},
    {"Trainer Spell: Smite (#25363)", 7025363},
    {"Trainer Spell: Smite (#25364)", 7025364},
    {"Trainer Spell: Shadow Word: Pain (#25367)", 7025367},
    {"Trainer Spell: Shadow Word: Pain (#25368)", 7025368},
    {"Trainer Spell: Mind Blast (#25372)", 7025372},
    {"Trainer Spell: Mind Blast (#25375)", 7025375},
    {"Trainer Spell: Holy Fire (#25384)", 7025384},
    {"Trainer Spell: Mind Flay (#25387)", 7025387},
    {"Trainer Spell: Power Word: Fortitude (#25389)", 7025389},
    {"Trainer Spell: Healing Wave (#25391)", 7025391},
    {"Trainer Spell: Healing Wave (#25396)", 7025396},
    {"Trainer Spell: Lesser Healing Wave (#25420)", 7025420},
    {"Trainer Spell: Chain Heal (#25422)", 7025422},
    {"Trainer Spell: Chain Heal (#25423)", 7025423},
    {"Trainer Spell: Inner Fire (#25431)", 7025431},
    {"Trainer Spell: Shadow Protection (#25433)", 7025433},
    {"Trainer Spell: Resurrection (#25435)", 7025435},
    {"Trainer Spell: Desperate Prayer (#25437)", 7025437},
    {"Trainer Spell: Chain Lightning (#25439)", 7025439},
    {"Trainer Spell: Chain Lightning (#25442)", 7025442},
    {"Trainer Spell: Lightning Bolt (#25448)", 7025448},
    {"Trainer Spell: Lightning Bolt (#25449)", 7025449},
    {"Trainer Spell: Earth Shock (#25454)", 7025454},
    {"Trainer Spell: Flame Shock (#25457)", 7025457},
    {"Trainer Spell: Frost Shock (#25464)", 7025464},
    {"Trainer Spell: Devouring Plague (#25467)", 7025467},
    {"Trainer Spell: Lightning Shield (#25469)", 7025469},
    {"Trainer Spell: Lightning Shield (#25472)", 7025472},
    {"Trainer Spell: Flametongue Weapon (#25489)", 7025489},
    {"Trainer Spell: Frostbrand Weapon (#25500)", 7025500},
    {"Trainer Spell: Windfury Weapon (#25505)", 7025505},
    {"Trainer Spell: Stoneskin Totem (#25508)", 7025508},
    {"Trainer Spell: Stoneskin Totem (#25509)", 7025509},
    {"Trainer Spell: Stoneclaw Totem (#25525)", 7025525},
    {"Trainer Spell: Strength of Earth Totem (#25528)", 7025528},
    {"Trainer Spell: Searing Totem (#25533)", 7025533},
    {"Trainer Spell: Fire Nova (#25546)", 7025546},
    {"Trainer Spell: Fire Nova (#25547)", 7025547},
    {"Trainer Spell: Magma Totem (#25552)", 7025552},
    {"Trainer Spell: Flametongue Totem (#25557)", 7025557},
    {"Trainer Spell: Frost Resistance Totem (#25560)", 7025560},
    {"Trainer Spell: Fire Resistance Totem (#25563)", 7025563},
    {"Trainer Spell: Healing Stream Totem (#25567)", 7025567},
    {"Trainer Spell: Mana Spring Totem (#25570)", 7025570},
    {"Trainer Spell: Nature Resistance Totem (#25574)", 7025574},
    {"Trainer Spell: Ancestral Spirit (#25590)", 7025590},
    {"Trainer Spell: Righteous Fury (#25780)", 7025780},
    {"Trainer Spell: Greater Blessing of Might (#25782)", 7025782},
    {"Trainer Spell: Greater Blessing of Wisdom (#25894)", 7025894},
    {"Trainer Spell: Greater Blessing of Kings (#25898)", 7025898},
    {"Trainer Spell: Greater Blessing of Sanctuary (#25899)", 7025899},
    {"Trainer Spell: Greater Blessing of Might (#25916)", 7025916},
    {"Trainer Spell: Greater Blessing of Wisdom (#25918)", 7025918},
    {"Trainer Spell: Consecration (#26573)", 7026573},
    {"Trainer Spell: Evasion (#26669)", 7026669},
    {"Trainer Spell: Deadly Throw (#26679)", 7026679},
    {"Trainer Spell: Garrote (#26839)", 7026839},
    {"Trainer Spell: Sinister Strike (#26861)", 7026861},
    {"Trainer Spell: Sinister Strike (#26862)", 7026862},
    {"Trainer Spell: Backstab (#26863)", 7026863},
    {"Trainer Spell: Hemorrhage (#26864)", 7026864},
    {"Trainer Spell: Eviscerate (#26865)", 7026865},
    {"Trainer Spell: Rupture (#26867)", 7026867},
    {"Trainer Spell: Garrote (#26884)", 7026884},
    {"Trainer Spell: Vanish (#26889)", 7026889},
    {"Trainer Spell: Healing Touch (#26978)", 7026978},
    {"Trainer Spell: Healing Touch (#26979)", 7026979},
    {"Trainer Spell: Regrowth (#26980)", 7026980},
    {"Trainer Spell: Rejuvenation (#26981)", 7026981},
    {"Trainer Spell: Rejuvenation (#26982)", 7026982},
    {"Trainer Spell: Tranquility (#26983)", 7026983},
    {"Trainer Spell: Wrath (#26984)", 7026984},
    {"Trainer Spell: Wrath (#26985)", 7026985},
    {"Trainer Spell: Starfire (#26986)", 7026986},
    {"Trainer Spell: Moonfire (#26987)", 7026987},
    {"Trainer Spell: Moonfire (#26988)", 7026988},
    {"Trainer Spell: Entangling Roots (#26989)", 7026989},
    {"Trainer Spell: Mark of the Wild (#26990)", 7026990},
    {"Trainer Spell: Thorns (#26992)", 7026992},
    {"Trainer Spell: Rebirth (#26994)", 7026994},
    {"Trainer Spell: Soothe Animal (#26995)", 7026995},
    {"Trainer Spell: Maul (#26996)", 7026996},
    {"Trainer Spell: Swipe (Bear) (#26997)", 7026997},
    {"Trainer Spell: Demoralizing Roar (#26998)", 7026998},
    {"Trainer Spell: Claw (#27000)", 7027000},
    {"Trainer Spell: Shred (#27001)", 7027001},
    {"Trainer Spell: Shred (#27002)", 7027002},
    {"Trainer Spell: Rake (#27003)", 7027003},
    {"Trainer Spell: Cower (#27004)", 7027004},
    {"Trainer Spell: Ravage (#27005)", 7027005},
    {"Trainer Spell: Pounce (#27006)", 7027006},
    {"Trainer Spell: Rip (#27008)", 7027008},
    {"Trainer Spell: Nature's Grasp (#27009)", 7027009},
    {"Trainer Spell: Hurricane (#27012)", 7027012},
    {"Trainer Spell: Insect Swarm (#27013)", 7027013},
    {"Trainer Spell: Raptor Strike (#27014)", 7027014},
    {"Trainer Spell: Serpent Sting (#27016)", 7027016},
    {"Trainer Spell: Arcane Shot (#27019)", 7027019},
    {"Trainer Spell: Multi-Shot (#27021)", 7027021},
    {"Trainer Spell: Volley (#27022)", 7027022},
    {"Trainer Spell: Immolation Trap (#27023)", 7027023},
    {"Trainer Spell: Explosive Trap (#27025)", 7027025},
    {"Trainer Spell: Aspect of the Hawk (#27044)", 7027044},
    {"Trainer Spell: Aspect of the Wild (#27045)", 7027045},
    {"Trainer Spell: Mend Pet (#27046)", 7027046},
    {"Trainer Spell: Aimed Shot (#27065)", 7027065},
    {"Trainer Spell: Counterattack (#27067)", 7027067},
    {"Trainer Spell: Wyvern Sting (#27068)", 7027068},
    {"Trainer Spell: Fireball (#27070)", 7027070},
    {"Trainer Spell: Frostbolt (#27071)", 7027071},
    {"Trainer Spell: Frostbolt (#27072)", 7027072},
    {"Trainer Spell: Scorch (#27073)", 7027073},
    {"Trainer Spell: Scorch (#27074)", 7027074},
    {"Trainer Spell: Arcane Missiles (#27075)", 7027075},
    {"Trainer Spell: Fire Blast (#27078)", 7027078},
    {"Trainer Spell: Fire Blast (#27079)", 7027079},
    {"Trainer Spell: Arcane Explosion (#27080)", 7027080},
    {"Trainer Spell: Arcane Explosion (#27082)", 7027082},
    {"Trainer Spell: Blizzard (#27085)", 7027085},
    {"Trainer Spell: Flamestrike (#27086)", 7027086},
    {"Trainer Spell: Cone of Cold (#27087)", 7027087},
    {"Trainer Spell: Frost Nova (#27088)", 7027088},
    {"Trainer Spell: Conjure Mana Gem (#27101)", 7027101},
    {"Trainer Spell: Ice Armor (#27124)", 7027124},
    {"Trainer Spell: Mage Armor (#27125)", 7027125},
    {"Trainer Spell: Arcane Intellect (#27126)", 7027126},
    {"Trainer Spell: Fire Ward (#27128)", 7027128},
    {"Trainer Spell: Amplify Magic (#27130)", 7027130},
    {"Trainer Spell: Mana Shield (#27131)", 7027131},
    {"Trainer Spell: Pyroblast (#27132)", 7027132},
    {"Trainer Spell: Blast Wave (#27133)", 7027133},
    {"Trainer Spell: Ice Barrier (#27134)", 7027134},
    {"Trainer Spell: Holy Light (#27135)", 7027135},
    {"Trainer Spell: Holy Light (#27136)", 7027136},
    {"Trainer Spell: Flash of Light (#27137)", 7027137},
    {"Trainer Spell: Exorcism (#27138)", 7027138},
    {"Trainer Spell: Holy Wrath (#27139)", 7027139},
    {"Trainer Spell: Blessing of Might (#27140)", 7027140},
    {"Trainer Spell: Greater Blessing of Might (#27141)", 7027141},
    {"Trainer Spell: Blessing of Wisdom (#27142)", 7027142},
    {"Trainer Spell: Greater Blessing of Wisdom (#27143)", 7027143},
    {"Trainer Spell: Devotion Aura (#27149)", 7027149},
    {"Trainer Spell: Retribution Aura (#27150)", 7027150},
    {"Trainer Spell: Shadow Resistance Aura (#27151)", 7027151},
    {"Trainer Spell: Frost Resistance Aura (#27152)", 7027152},
    {"Trainer Spell: Fire Resistance Aura (#27153)", 7027153},
    {"Trainer Spell: Lay on Hands (#27154)", 7027154},
    {"Trainer Spell: Consecration (#27173)", 7027173},
    {"Trainer Spell: Holy Shock (#27174)", 7027174},
    {"Trainer Spell: Holy Shield (#27179)", 7027179},
    {"Trainer Spell: Hammer of Wrath (#27180)", 7027180},
    {"Trainer Spell: Shadow Bolt (#27209)", 7027209},
    {"Trainer Spell: Searing Pain (#27210)", 7027210},
    {"Trainer Spell: Soul Fire (#27211)", 7027211},
    {"Trainer Spell: Rain of Fire (#27212)", 7027212},
    {"Trainer Spell: Hellfire (#27213)", 7027213},
    {"Trainer Spell: Immolate (#27215)", 7027215},
    {"Trainer Spell: Corruption (#27216)", 7027216},
    {"Trainer Spell: Drain Soul (#27217)", 7027217},
    {"Trainer Spell: Curse of Agony (#27218)", 7027218},
    {"Trainer Spell: Drain Life (#27219)", 7027219},
    {"Trainer Spell: Drain Life (#27220)", 7027220},
    {"Trainer Spell: Life Tap (#27222)", 7027222},
    {"Trainer Spell: Death Coil (#27223)", 7027223},
    {"Trainer Spell: Curse of Weakness (#27224)", 7027224},
    {"Trainer Spell: Curse of the Elements (#27228)", 7027228},
    {"Trainer Spell: Create Healthstone (#27230)", 7027230},
    {"Trainer Spell: Create Soulstone (#27238)", 7027238},
    {"Trainer Spell: Seed of Corruption (#27243)", 7027243},
    {"Trainer Spell: Create Firestone (#27250)", 7027250},
    {"Trainer Spell: Health Funnel (#27259)", 7027259},
    {"Trainer Spell: Demon Armor (#27260)", 7027260},
    {"Trainer Spell: Shadowburn (#27263)", 7027263},
    {"Trainer Spell: Dark Pact (#27265)", 7027265},
    {"Trainer Spell: Ambush (#27441)", 7027441},
    {"Trainer Spell: Feint (#27448)", 7027448},
    {"Trainer Spell: Prayer of Spirit (#27681)", 7027681},
    {"Trainer Spell: Holy Nova (#27799)", 7027799},
    {"Trainer Spell: Holy Nova (#27800)", 7027800},
    {"Trainer Spell: Holy Nova (#27801)", 7027801},
    {"Trainer Spell: Divine Spirit (#27841)", 7027841},
    {"Trainer Spell: Lightwell (#27870)", 7027870},
    {"Trainer Spell: Lightwell (#27871)", 7027871},
    {"Trainer Spell: Create Spellstone (#28172)", 7028172},
    {"Trainer Spell: Fel Armor (#28176)", 7028176},
    {"Trainer Spell: Fel Armor (#28189)", 7028189},
    {"Trainer Spell: Lightwell (#28275)", 7028275},
    {"Trainer Spell: Innervate (#29166)", 7029166},
    {"Trainer Spell: Heroic Strike (#29707)", 7029707},
    {"Trainer Spell: Incinerate (#29722)", 7029722},
    {"Trainer Spell: Soulshatter (#29858)", 7029858},
    {"Trainer Spell: Ritual of Souls (#29893)", 7029893},
    {"Trainer Spell: Devastate (#30016)", 7030016},
    {"Trainer Spell: Devastate (#30022)", 7030022},
    {"Trainer Spell: Heroic Strike (#30324)", 7030324},
    {"Trainer Spell: Mortal Strike (#30330)", 7030330},
    {"Trainer Spell: Shield Slam (#30356)", 7030356},
    {"Trainer Spell: Revenge (#30357)", 7030357},
    {"Trainer Spell: Unstable Affliction (#30404)", 7030404},
    {"Trainer Spell: Unstable Affliction (#30405)", 7030405},
    {"Trainer Spell: Shadowfury (#30413)", 7030413},
    {"Trainer Spell: Shadowfury (#30414)", 7030414},
    {"Trainer Spell: Spellsteal (#30449)", 7030449},
    {"Trainer Spell: Arcane Blast (#30451)", 7030451},
    {"Trainer Spell: Ice Lance (#30455)", 7030455},
    {"Trainer Spell: Searing Pain (#30459)", 7030459},
    {"Trainer Spell: Molten Armor (#30482)", 7030482},
    {"Trainer Spell: Soul Fire (#30545)", 7030545},
    {"Trainer Spell: Shadowburn (#30546)", 7030546},
    {"Trainer Spell: Curse of Weakness (#30909)", 7030909},
    {"Trainer Spell: Curse of Doom (#30910)", 7030910},
    {"Trainer Spell: Cloak of Shadows (#31224)", 7031224},
    {"Trainer Spell: Righteous Defense (#31789)", 7031789},
    {"Trainer Spell: Seal of Vengeance (#31801)", 7031801},
    {"Trainer Spell: Avenging Wrath (#31884)", 7031884},
    {"Trainer Spell: Heroism (#32182)", 7032182},
    {"Trainer Spell: Crusader Aura (#32223)", 7032223},
    {"Trainer Spell: Incinerate (#32231)", 7032231},
    {"Trainer Spell: Portal: Exodar (#32266)", 7032266},
    {"Trainer Spell: Portal: Silvermoon (#32267)", 7032267},
    {"Trainer Spell: Teleport: Exodar (#32271)", 7032271},
    {"Trainer Spell: Teleport: Silvermoon (#32272)", 7032272},
    {"Trainer Spell: Mass Dispel (#32375)", 7032375},
    {"Trainer Spell: Shadow Word: Death (#32379)", 7032379},
    {"Trainer Spell: Binding Heal (#32546)", 7032546},
    {"Trainer Spell: Earth Shield (#32593)", 7032593},
    {"Trainer Spell: Earth Shield (#32594)", 7032594},
    {"Trainer Spell: Envenom (#32645)", 7032645},
    {"Trainer Spell: Envenom (#32684)", 7032684},
    {"Trainer Spell: Avenger's Shield (#32699)", 7032699},
    {"Trainer Spell: Avenger's Shield (#32700)", 7032700},
    {"Trainer Spell: Frost Ward (#32796)", 7032796},
    {"Trainer Spell: Shadow Word: Death (#32996)", 7032996},
    {"Trainer Spell: Prayer of Spirit (#32999)", 7032999},
    {"Trainer Spell: Dragon's Breath (#33041)", 7033041},
    {"Trainer Spell: Dragon's Breath (#33042)", 7033042},
    {"Trainer Spell: Dragon's Breath (#33043)", 7033043},
    {"Trainer Spell: Holy Shock (#33072)", 7033072},
    {"Trainer Spell: Prayer of Mending (#33076)", 7033076},
    {"Trainer Spell: Dash (#33357)", 7033357},
    {"Trainer Spell: Ice Barrier (#33405)", 7033405},
    {"Trainer Spell: Teleport: Shattrath (#33690)", 7033690},
    {"Trainer Spell: Portal: Shattrath (#33691)", 7033691},
    {"Trainer Spell: Water Shield (#33736)", 7033736},
    {"Trainer Spell: Lacerate (#33745)", 7033745},
    {"Trainer Spell: Lifebloom (#33763)", 7033763},
    {"Trainer Spell: Cyclone (#33786)", 7033786},
    {"Trainer Spell: Blast Wave (#33933)", 7033933},
    {"Trainer Spell: Pyroblast (#33938)", 7033938},
    {"Trainer Spell: Dampen Magic (#33944)", 7033944},
    {"Trainer Spell: Amplify Magic (#33946)", 7033946},
    {"Trainer Spell: Flight Form (#33950)", 7033950},
    {"Trainer Spell: Mangle (Cat) (#33982)", 7033982},
    {"Trainer Spell: Mangle (Cat) (#33983)", 7033983},
    {"Trainer Spell: Mangle (Bear) (#33986)", 7033986},
    {"Trainer Spell: Mangle (Bear) (#33987)", 7033987},
    {"Trainer Spell: Kill Command (#34026)", 7034026},
    {"Trainer Spell: Aspect of the Viper (#34074)", 7034074},
    {"Trainer Spell: Steady Shot (#34120)", 7034120},
    {"Trainer Spell: Mutilate (#34411)", 7034411},
    {"Trainer Spell: Mutilate (#34412)", 7034412},
    {"Trainer Spell: Mutilate (#34413)", 7034413},
    {"Trainer Spell: Victory Rush (#34428)", 7034428},
    {"Trainer Spell: Shadowfiend (#34433)", 7034433},
    {"Trainer Spell: Misdirection (#34477)", 7034477},
    {"Trainer Spell: Snake Trap (#34600)", 7034600},
    {"Trainer Spell: Summon Charger (#34767)", 7034767},
    {"Trainer Spell: Summon Warhorse (#34768)", 7034768},
    {"Trainer Spell: Circle of Healing (#34863)", 7034863},
    {"Trainer Spell: Circle of Healing (#34864)", 7034864},
    {"Trainer Spell: Circle of Healing (#34865)", 7034865},
    {"Trainer Spell: Circle of Healing (#34866)", 7034866},
    {"Trainer Spell: Vampiric Touch (#34916)", 7034916},
    {"Trainer Spell: Vampiric Touch (#34917)", 7034917},
    {"Trainer Spell: Teleport: Shattrath (#35715)", 7035715},
    {"Trainer Spell: Portal: Shattrath (#35717)", 7035717},
    {"Trainer Spell: Mongoose Bite (#36916)", 7036916},
    {"Trainer Spell: Totemic Recall (#36936)", 7036936},
    {"Trainer Spell: Conjure Water (#37420)", 7037420},
    {"Trainer Spell: Fireball (#38692)", 7038692},
    {"Trainer Spell: Frostbolt (#38697)", 7038697},
    {"Trainer Spell: Arcane Missiles (#38699)", 7038699},
    {"Trainer Spell: Arcane Missiles (#38704)", 7038704},
    {"Trainer Spell: Swift Flight Form (#40120)", 7040120},
    {"Trainer Spell: Army of the Dead (#42650)", 7042650},
    {"Trainer Spell: Fireball (#42832)", 7042832},
    {"Trainer Spell: Fireball (#42833)", 7042833},
    {"Trainer Spell: Frostbolt (#42841)", 7042841},
    {"Trainer Spell: Frostbolt (#42842)", 7042842},
    {"Trainer Spell: Arcane Missiles (#42843)", 7042843},
    {"Trainer Spell: Arcane Missiles (#42846)", 7042846},
    {"Trainer Spell: Scorch (#42858)", 7042858},
    {"Trainer Spell: Scorch (#42859)", 7042859},
    {"Trainer Spell: Fire Blast (#42872)", 7042872},
    {"Trainer Spell: Fire Blast (#42873)", 7042873},
    {"Trainer Spell: Pyroblast (#42890)", 7042890},
    {"Trainer Spell: Pyroblast (#42891)", 7042891},
    {"Trainer Spell: Arcane Blast (#42894)", 7042894},
    {"Trainer Spell: Arcane Blast (#42896)", 7042896},
    {"Trainer Spell: Arcane Blast (#42897)", 7042897},
    {"Trainer Spell: Ice Lance (#42913)", 7042913},
    {"Trainer Spell: Ice Lance (#42914)", 7042914},
    {"Trainer Spell: Frost Nova (#42917)", 7042917},
    {"Trainer Spell: Arcane Explosion (#42920)", 7042920},
    {"Trainer Spell: Arcane Explosion (#42921)", 7042921},
    {"Trainer Spell: Flamestrike (#42925)", 7042925},
    {"Trainer Spell: Flamestrike (#42926)", 7042926},
    {"Trainer Spell: Cone of Cold (#42930)", 7042930},
    {"Trainer Spell: Cone of Cold (#42931)", 7042931},
    {"Trainer Spell: Blizzard (#42939)", 7042939},
    {"Trainer Spell: Blizzard (#42940)", 7042940},
    {"Trainer Spell: Blast Wave (#42944)", 7042944},
    {"Trainer Spell: Blast Wave (#42945)", 7042945},
    {"Trainer Spell: Dragon's Breath (#42949)", 7042949},
    {"Trainer Spell: Dragon's Breath (#42950)", 7042950},
    {"Trainer Spell: Conjure Refreshment (#42955)", 7042955},
    {"Trainer Spell: Conjure Refreshment (#42956)", 7042956},
    {"Trainer Spell: Conjure Mana Gem (#42985)", 7042985},
    {"Trainer Spell: Arcane Intellect (#42995)", 7042995},
    {"Trainer Spell: Arcane Brilliance (#43002)", 7043002},
    {"Trainer Spell: Ice Armor (#43008)", 7043008},
    {"Trainer Spell: Fire Ward (#43010)", 7043010},
    {"Trainer Spell: Frost Ward (#43012)", 7043012},
    {"Trainer Spell: Dampen Magic (#43015)", 7043015},
    {"Trainer Spell: Amplify Magic (#43017)", 7043017},
    {"Trainer Spell: Mana Shield (#43019)", 7043019},
    {"Trainer Spell: Mana Shield (#43020)", 7043020},
    {"Trainer Spell: Mage Armor (#43023)", 7043023},
    {"Trainer Spell: Mage Armor (#43024)", 7043024},
    {"Trainer Spell: Ice Barrier (#43038)", 7043038},
    {"Trainer Spell: Ice Barrier (#43039)", 7043039},
    {"Trainer Spell: Molten Armor (#43045)", 7043045},
    {"Trainer Spell: Molten Armor (#43046)", 7043046},
    {"Trainer Spell: Death and Decay (#43265)", 7043265},
    {"Trainer Spell: Ritual of Refreshment (#43987)", 7043987},
    {"Trainer Spell: Frostfire Bolt (#44614)", 7044614},
    {"Trainer Spell: Arcane Barrage (#44780)", 7044780},
    {"Trainer Spell: Arcane Barrage (#44781)", 7044781},
    {"Trainer Spell: Ice Block (#45438)", 7045438},
    {"Trainer Spell: Death Strike (#45463)", 7045463},
    {"Trainer Spell: Chains of Ice (#45524)", 7045524},
    {"Trainer Spell: Blood Tap (#45529)", 7045529},
    {"Trainer Spell: Raise Dead (#46584)", 7046584},
    {"Trainer Spell: Rend (#46845)", 7046845},
    {"Trainer Spell: Battle Shout (#47436)", 7047436},
    {"Trainer Spell: Demoralizing Shout (#47437)", 7047437},
    {"Trainer Spell: Commanding Shout (#47439)", 7047439},
    {"Trainer Spell: Commanding Shout (#47440)", 7047440},
    {"Trainer Spell: Heroic Strike (#47449)", 7047449},
    {"Trainer Spell: Heroic Strike (#47450)", 7047450},
    {"Trainer Spell: Rend (#47465)", 7047465},
    {"Trainer Spell: Execute (#47470)", 7047470},
    {"Trainer Spell: Execute (#47471)", 7047471},
    {"Trainer Spell: Slam (#47474)", 7047474},
    {"Trainer Spell: Slam (#47475)", 7047475},
    {"Trainer Spell: Strangulate (#47476)", 7047476},
    {"Trainer Spell: Mortal Strike (#47485)", 7047485},
    {"Trainer Spell: Mortal Strike (#47486)", 7047486},
    {"Trainer Spell: Shield Slam (#47487)", 7047487},
    {"Trainer Spell: Shield Slam (#47488)", 7047488},
    {"Trainer Spell: Devastate (#47497)", 7047497},
    {"Trainer Spell: Devastate (#47498)", 7047498},
    {"Trainer Spell: Thunder Clap (#47501)", 7047501},
    {"Trainer Spell: Thunder Clap (#47502)", 7047502},
    {"Trainer Spell: Cleave (#47519)", 7047519},
    {"Trainer Spell: Cleave (#47520)", 7047520},
    {"Trainer Spell: Mind Freeze (#47528)", 7047528},
    {"Trainer Spell: Empower Rune Weapon (#47568)", 7047568},
    {"Trainer Spell: Frostfire Bolt (#47610)", 7047610},
    {"Trainer Spell: Demon Armor (#47793)", 7047793},
    {"Trainer Spell: Shadow Bolt (#47808)", 7047808},
    {"Trainer Spell: Shadow Bolt (#47809)", 7047809},
    {"Trainer Spell: Immolate (#47810)", 7047810},
    {"Trainer Spell: Immolate (#47811)", 7047811},
    {"Trainer Spell: Corruption (#47812)", 7047812},
    {"Trainer Spell: Corruption (#47813)", 7047813},
    {"Trainer Spell: Searing Pain (#47814)", 7047814},
    {"Trainer Spell: Searing Pain (#47815)", 7047815},
    {"Trainer Spell: Rain of Fire (#47819)", 7047819},
    {"Trainer Spell: Rain of Fire (#47820)", 7047820},
    {"Trainer Spell: Hellfire (#47823)", 7047823},
    {"Trainer Spell: Soul Fire (#47824)", 7047824},
    {"Trainer Spell: Soul Fire (#47825)", 7047825},
    {"Trainer Spell: Shadowburn (#47826)", 7047826},
    {"Trainer Spell: Shadowburn (#47827)", 7047827},
    {"Trainer Spell: Seed of Corruption (#47835)", 7047835},
    {"Trainer Spell: Seed of Corruption (#47836)", 7047836},
    {"Trainer Spell: Incinerate (#47837)", 7047837},
    {"Trainer Spell: Incinerate (#47838)", 7047838},
    {"Trainer Spell: Unstable Affliction (#47841)", 7047841},
    {"Trainer Spell: Unstable Affliction (#47843)", 7047843},
    {"Trainer Spell: Shadowfury (#47846)", 7047846},
    {"Trainer Spell: Shadowfury (#47847)", 7047847},
    {"Trainer Spell: Drain Soul (#47855)", 7047855},
    {"Trainer Spell: Health Funnel (#47856)", 7047856},
    {"Trainer Spell: Drain Life (#47857)", 7047857},
    {"Trainer Spell: Death Coil (#47859)", 7047859},
    {"Trainer Spell: Death Coil (#47860)", 7047860},
    {"Trainer Spell: Curse of Agony (#47863)", 7047863},
    {"Trainer Spell: Curse of Agony (#47864)", 7047864},
    {"Trainer Spell: Curse of the Elements (#47865)", 7047865},
    {"Trainer Spell: Curse of Doom (#47867)", 7047867},
    {"Trainer Spell: Create Healthstone (#47871)", 7047871},
    {"Trainer Spell: Create Healthstone (#47878)", 7047878},
    {"Trainer Spell: Create Soulstone (#47884)", 7047884},
    {"Trainer Spell: Create Spellstone (#47886)", 7047886},
    {"Trainer Spell: Create Spellstone (#47888)", 7047888},
    {"Trainer Spell: Demon Armor (#47889)", 7047889},
    {"Trainer Spell: Shadow Ward (#47890)", 7047890},
    {"Trainer Spell: Shadow Ward (#47891)", 7047891},
    {"Trainer Spell: Fel Armor (#47892)", 7047892},
    {"Trainer Spell: Fel Armor (#47893)", 7047893},
    {"Trainer Spell: Shadowflame (#47897)", 7047897},
    {"Trainer Spell: Demonic Circle: Summon (#48018)", 7048018},
    {"Trainer Spell: Demonic Circle: Teleport (#48020)", 7048020},
    {"Trainer Spell: Inner Fire (#48040)", 7048040},
    {"Trainer Spell: Mind Sear (#48045)", 7048045},
    {"Trainer Spell: Greater Heal (#48062)", 7048062},
    {"Trainer Spell: Greater Heal (#48063)", 7048063},
    {"Trainer Spell: Power Word: Shield (#48065)", 7048065},
    {"Trainer Spell: Power Word: Shield (#48066)", 7048066},
    {"Trainer Spell: Renew (#48067)", 7048067},
    {"Trainer Spell: Renew (#48068)", 7048068},
    {"Trainer Spell: Flash Heal (#48070)", 7048070},
    {"Trainer Spell: Flash Heal (#48071)", 7048071},
    {"Trainer Spell: Prayer of Healing (#48072)", 7048072},
    {"Trainer Spell: Divine Spirit (#48073)", 7048073},
    {"Trainer Spell: Prayer of Spirit (#48074)", 7048074},
    {"Trainer Spell: Holy Nova (#48077)", 7048077},
    {"Trainer Spell: Holy Nova (#48078)", 7048078},
    {"Trainer Spell: Lightwell (#48086)", 7048086},
    {"Trainer Spell: Lightwell (#48087)", 7048087},
    {"Trainer Spell: Circle of Healing (#48088)", 7048088},
    {"Trainer Spell: Circle of Healing (#48089)", 7048089},
    {"Trainer Spell: Prayer of Mending (#48112)", 7048112},
    {"Trainer Spell: Prayer of Mending (#48113)", 7048113},
    {"Trainer Spell: Binding Heal (#48119)", 7048119},
    {"Trainer Spell: Binding Heal (#48120)", 7048120},
    {"Trainer Spell: Smite (#48122)", 7048122},
    {"Trainer Spell: Smite (#48123)", 7048123},
    {"Trainer Spell: Shadow Word: Pain (#48124)", 7048124},
    {"Trainer Spell: Shadow Word: Pain (#48125)", 7048125},
    {"Trainer Spell: Mind Blast (#48126)", 7048126},
    {"Trainer Spell: Mind Blast (#48127)", 7048127},
    {"Trainer Spell: Holy Fire (#48134)", 7048134},
    {"Trainer Spell: Holy Fire (#48135)", 7048135},
    {"Trainer Spell: Mind Flay (#48155)", 7048155},
    {"Trainer Spell: Mind Flay (#48156)", 7048156},
    {"Trainer Spell: Shadow Word: Death (#48157)", 7048157},
    {"Trainer Spell: Shadow Word: Death (#48158)", 7048158},
    {"Trainer Spell: Vampiric Touch (#48159)", 7048159},
    {"Trainer Spell: Vampiric Touch (#48160)", 7048160},
    {"Trainer Spell: Power Word: Fortitude (#48161)", 7048161},
    {"Trainer Spell: Prayer of Fortitude (#48162)", 7048162},
    {"Trainer Spell: Inner Fire (#48168)", 7048168},
    {"Trainer Spell: Shadow Protection (#48169)", 7048169},
    {"Trainer Spell: Prayer of Shadow Protection (#48170)", 7048170},
    {"Trainer Spell: Resurrection (#48171)", 7048171},
    {"Trainer Spell: Desperate Prayer (#48172)", 7048172},
    {"Trainer Spell: Desperate Prayer (#48173)", 7048173},
    {"Trainer Spell: Frost Presence (#48263)", 7048263},
    {"Trainer Spell: Unholy Presence (#48265)", 7048265},
    {"Trainer Spell: Devouring Plague (#48299)", 7048299},
    {"Trainer Spell: Devouring Plague (#48300)", 7048300},
    {"Trainer Spell: Healing Touch (#48377)", 7048377},
    {"Trainer Spell: Healing Touch (#48378)", 7048378},
    {"Trainer Spell: Rejuvenation (#48440)", 7048440},
    {"Trainer Spell: Rejuvenation (#48441)", 7048441},
    {"Trainer Spell: Regrowth (#48442)", 7048442},
    {"Trainer Spell: Regrowth (#48443)", 7048443},
    {"Trainer Spell: Tranquility (#48446)", 7048446},
    {"Trainer Spell: Tranquility (#48447)", 7048447},
    {"Trainer Spell: Lifebloom (#48450)", 7048450},
    {"Trainer Spell: Lifebloom (#48451)", 7048451},
    {"Trainer Spell: Wrath (#48459)", 7048459},
    {"Trainer Spell: Wrath (#48461)", 7048461},
    {"Trainer Spell: Moonfire (#48462)", 7048462},
    {"Trainer Spell: Moonfire (#48463)", 7048463},
    {"Trainer Spell: Starfire (#48464)", 7048464},
    {"Trainer Spell: Starfire (#48465)", 7048465},
    {"Trainer Spell: Hurricane (#48467)", 7048467},
    {"Trainer Spell: Insect Swarm (#48468)", 7048468},
    {"Trainer Spell: Mark of the Wild (#48469)", 7048469},
    {"Trainer Spell: Gift of the Wild (#48470)", 7048470},
    {"Trainer Spell: Rebirth (#48477)", 7048477},
    {"Trainer Spell: Maul (#48479)", 7048479},
    {"Trainer Spell: Maul (#48480)", 7048480},
    {"Trainer Spell: Demoralizing Roar (#48559)", 7048559},
    {"Trainer Spell: Demoralizing Roar (#48560)", 7048560},
    {"Trainer Spell: Swipe (Bear) (#48561)", 7048561},
    {"Trainer Spell: Swipe (Bear) (#48562)", 7048562},
    {"Trainer Spell: Mangle (Bear) (#48563)", 7048563},
    {"Trainer Spell: Mangle (Bear) (#48564)", 7048564},
    {"Trainer Spell: Mangle (Cat) (#48565)", 7048565},
    {"Trainer Spell: Mangle (Cat) (#48566)", 7048566},
    {"Trainer Spell: Lacerate (#48567)", 7048567},
    {"Trainer Spell: Lacerate (#48568)", 7048568},
    {"Trainer Spell: Claw (#48569)", 7048569},
    {"Trainer Spell: Claw (#48570)", 7048570},
    {"Trainer Spell: Shred (#48571)", 7048571},
    {"Trainer Spell: Shred (#48572)", 7048572},
    {"Trainer Spell: Rake (#48573)", 7048573},
    {"Trainer Spell: Rake (#48574)", 7048574},
    {"Trainer Spell: Cower (#48575)", 7048575},
    {"Trainer Spell: Ferocious Bite (#48576)", 7048576},
    {"Trainer Spell: Ferocious Bite (#48577)", 7048577},
    {"Trainer Spell: Ravage (#48578)", 7048578},
    {"Trainer Spell: Ravage (#48579)", 7048579},
    {"Trainer Spell: Sinister Strike (#48637)", 7048637},
    {"Trainer Spell: Sinister Strike (#48638)", 7048638},
    {"Trainer Spell: Backstab (#48656)", 7048656},
    {"Trainer Spell: Backstab (#48657)", 7048657},
    {"Trainer Spell: Feint (#48658)", 7048658},
    {"Trainer Spell: Feint (#48659)", 7048659},
    {"Trainer Spell: Hemorrhage (#48660)", 7048660},
    {"Trainer Spell: Mutilate (#48663)", 7048663},
    {"Trainer Spell: Mutilate (#48666)", 7048666},
    {"Trainer Spell: Eviscerate (#48667)", 7048667},
    {"Trainer Spell: Eviscerate (#48668)", 7048668},
    {"Trainer Spell: Rupture (#48671)", 7048671},
    {"Trainer Spell: Rupture (#48672)", 7048672},
    {"Trainer Spell: Deadly Throw (#48673)", 7048673},
    {"Trainer Spell: Deadly Throw (#48674)", 7048674},
    {"Trainer Spell: Garrote (#48675)", 7048675},
    {"Trainer Spell: Garrote (#48676)", 7048676},
    {"Trainer Spell: Ambush (#48689)", 7048689},
    {"Trainer Spell: Ambush (#48690)", 7048690},
    {"Trainer Spell: Ambush (#48691)", 7048691},
    {"Trainer Spell: Anti-Magic Shell (#48707)", 7048707},
    {"Trainer Spell: Blood Boil (#48721)", 7048721},
    {"Trainer Spell: Death Pact (#48743)", 7048743},
    {"Trainer Spell: Holy Light (#48781)", 7048781},
    {"Trainer Spell: Holy Light (#48782)", 7048782},
    {"Trainer Spell: Flash of Light (#48784)", 7048784},
    {"Trainer Spell: Flash of Light (#48785)", 7048785},
    {"Trainer Spell: Lay on Hands (#48788)", 7048788},
    {"Trainer Spell: Icebound Fortitude (#48792)", 7048792},
    {"Trainer Spell: Exorcism (#48800)", 7048800},
    {"Trainer Spell: Exorcism (#48801)", 7048801},
    {"Trainer Spell: Hammer of Wrath (#48805)", 7048805},
    {"Trainer Spell: Hammer of Wrath (#48806)", 7048806},
    {"Trainer Spell: Holy Wrath (#48816)", 7048816},
    {"Trainer Spell: Holy Wrath (#48817)", 7048817},
    {"Trainer Spell: Consecration (#48818)", 7048818},
    {"Trainer Spell: Consecration (#48819)", 7048819},
    {"Trainer Spell: Holy Shock (#48824)", 7048824},
    {"Trainer Spell: Holy Shock (#48825)", 7048825},
    {"Trainer Spell: Avenger's Shield (#48826)", 7048826},
    {"Trainer Spell: Avenger's Shield (#48827)", 7048827},
    {"Trainer Spell: Blessing of Might (#48931)", 7048931},
    {"Trainer Spell: Blessing of Might (#48932)", 7048932},
    {"Trainer Spell: Greater Blessing of Might (#48933)", 7048933},
    {"Trainer Spell: Greater Blessing of Might (#48934)", 7048934},
    {"Trainer Spell: Blessing of Wisdom (#48935)", 7048935},
    {"Trainer Spell: Blessing of Wisdom (#48936)", 7048936},
    {"Trainer Spell: Greater Blessing of Wisdom (#48937)", 7048937},
    {"Trainer Spell: Greater Blessing of Wisdom (#48938)", 7048938},
    {"Trainer Spell: Devotion Aura (#48941)", 7048941},
    {"Trainer Spell: Devotion Aura (#48942)", 7048942},
    {"Trainer Spell: Shadow Resistance Aura (#48943)", 7048943},
    {"Trainer Spell: Frost Resistance Aura (#48945)", 7048945},
    {"Trainer Spell: Fire Resistance Aura (#48947)", 7048947},
    {"Trainer Spell: Redemption (#48949)", 7048949},
    {"Trainer Spell: Redemption (#48950)", 7048950},
    {"Trainer Spell: Holy Shield (#48951)", 7048951},
    {"Trainer Spell: Holy Shield (#48952)", 7048952},
    {"Trainer Spell: Mend Pet (#48989)", 7048989},
    {"Trainer Spell: Mend Pet (#48990)", 7048990},
    {"Trainer Spell: Raptor Strike (#48995)", 7048995},
    {"Trainer Spell: Raptor Strike (#48996)", 7048996},
    {"Trainer Spell: Counterattack (#48998)", 7048998},
    {"Trainer Spell: Counterattack (#48999)", 7048999},
    {"Trainer Spell: Serpent Sting (#49000)", 7049000},
    {"Trainer Spell: Serpent Sting (#49001)", 7049001},
    {"Trainer Spell: Wyvern Sting (#49011)", 7049011},
    {"Trainer Spell: Wyvern Sting (#49012)", 7049012},
    {"Trainer Spell: Obliterate (#49020)", 7049020},
    {"Trainer Spell: Arcane Shot (#49044)", 7049044},
    {"Trainer Spell: Arcane Shot (#49045)", 7049045},
    {"Trainer Spell: Multi-Shot (#49047)", 7049047},
    {"Trainer Spell: Multi-Shot (#49048)", 7049048},
    {"Trainer Spell: Aimed Shot (#49049)", 7049049},
    {"Trainer Spell: Aimed Shot (#49050)", 7049050},
    {"Trainer Spell: Steady Shot (#49051)", 7049051},
    {"Trainer Spell: Steady Shot (#49052)", 7049052},
    {"Trainer Spell: Immolation Trap (#49055)", 7049055},
    {"Trainer Spell: Immolation Trap (#49056)", 7049056},
    {"Trainer Spell: Explosive Trap (#49066)", 7049066},
    {"Trainer Spell: Explosive Trap (#49067)", 7049067},
    {"Trainer Spell: Aspect of the Wild (#49071)", 7049071},
    {"Trainer Spell: Earth Shock (#49230)", 7049230},
    {"Trainer Spell: Earth Shock (#49231)", 7049231},
    {"Trainer Spell: Flame Shock (#49232)", 7049232},
    {"Trainer Spell: Flame Shock (#49233)", 7049233},
    {"Trainer Spell: Frost Shock (#49235)", 7049235},
    {"Trainer Spell: Frost Shock (#49236)", 7049236},
    {"Trainer Spell: Lightning Bolt (#49237)", 7049237},
    {"Trainer Spell: Lightning Bolt (#49238)", 7049238},
    {"Trainer Spell: Chain Lightning (#49270)", 7049270},
    {"Trainer Spell: Chain Lightning (#49271)", 7049271},
    {"Trainer Spell: Healing Wave (#49272)", 7049272},
    {"Trainer Spell: Healing Wave (#49273)", 7049273},
    {"Trainer Spell: Lesser Healing Wave (#49275)", 7049275},
    {"Trainer Spell: Lesser Healing Wave (#49276)", 7049276},
    {"Trainer Spell: Ancestral Spirit (#49277)", 7049277},
    {"Trainer Spell: Lightning Shield (#49280)", 7049280},
    {"Trainer Spell: Lightning Shield (#49281)", 7049281},
    {"Trainer Spell: Earth Shield (#49283)", 7049283},
    {"Trainer Spell: Earth Shield (#49284)", 7049284},
    {"Trainer Spell: Teleport: Stonard (#49358)", 7049358},
    {"Trainer Spell: Teleport: Theramore (#49359)", 7049359},
    {"Trainer Spell: Portal: Theramore (#49360)", 7049360},
    {"Trainer Spell: Portal: Stonard (#49361)", 7049361},
    {"Trainer Spell: Rip (#49799)", 7049799},
    {"Trainer Spell: Rip (#49800)", 7049800},
    {"Trainer Spell: Maim (#49802)", 7049802},
    {"Trainer Spell: Pounce (#49803)", 7049803},
    {"Trainer Spell: Death Coil (#49892)", 7049892},
    {"Trainer Spell: Death Coil (#49893)", 7049893},
    {"Trainer Spell: Death Coil (#49894)", 7049894},
    {"Trainer Spell: Death Coil (#49895)", 7049895},
    {"Trainer Spell: Icy Touch (#49896)", 7049896},
    {"Trainer Spell: Icy Touch (#49903)", 7049903},
    {"Trainer Spell: Icy Touch (#49904)", 7049904},
    {"Trainer Spell: Icy Touch (#49909)", 7049909},
    {"Trainer Spell: Plague Strike (#49917)", 7049917},
    {"Trainer Spell: Plague Strike (#49918)", 7049918},
    {"Trainer Spell: Plague Strike (#49919)", 7049919},
    {"Trainer Spell: Plague Strike (#49920)", 7049920},
    {"Trainer Spell: Plague Strike (#49921)", 7049921},
    {"Trainer Spell: Death Strike (#49923)", 7049923},
    {"Trainer Spell: Death Strike (#49924)", 7049924},
    {"Trainer Spell: Blood Strike (#49926)", 7049926},
    {"Trainer Spell: Blood Strike (#49927)", 7049927},
    {"Trainer Spell: Blood Strike (#49928)", 7049928},
    {"Trainer Spell: Blood Strike (#49929)", 7049929},
    {"Trainer Spell: Blood Strike (#49930)", 7049930},
    {"Trainer Spell: Death and Decay (#49936)", 7049936},
    {"Trainer Spell: Death and Decay (#49937)", 7049937},
    {"Trainer Spell: Death and Decay (#49938)", 7049938},
    {"Trainer Spell: Blood Boil (#49939)", 7049939},
    {"Trainer Spell: Blood Boil (#49940)", 7049940},
    {"Trainer Spell: Blood Boil (#49941)", 7049941},
    {"Trainer Spell: Death Strike (#49998)", 7049998},
    {"Trainer Spell: Death Strike (#49999)", 7049999},
    {"Trainer Spell: Tiger's Fury (#50212)", 7050212},
    {"Trainer Spell: Tiger's Fury (#50213)", 7050213},
    {"Trainer Spell: Nourish (#50464)", 7050464},
    {"Trainer Spell: Curse of Weakness (#50511)", 7050511},
    {"Trainer Spell: Revive (#50763)", 7050763},
    {"Trainer Spell: Revive (#50764)", 7050764},
    {"Trainer Spell: Revive (#50765)", 7050765},
    {"Trainer Spell: Revive (#50766)", 7050766},
    {"Trainer Spell: Revive (#50767)", 7050767},
    {"Trainer Spell: Revive (#50768)", 7050768},
    {"Trainer Spell: Revive (#50769)", 7050769},
    {"Trainer Spell: Pestilence (#50842)", 7050842},
    {"Trainer Spell: Corpse Explosion (#51325)", 7051325},
    {"Trainer Spell: Corpse Explosion (#51326)", 7051326},
    {"Trainer Spell: Corpse Explosion (#51327)", 7051327},
    {"Trainer Spell: Corpse Explosion (#51328)", 7051328},
    {"Trainer Spell: Howling Blast (#51409)", 7051409},
    {"Trainer Spell: Howling Blast (#51410)", 7051410},
    {"Trainer Spell: Howling Blast (#51411)", 7051411},
    {"Trainer Spell: Frost Strike (#51416)", 7051416},
    {"Trainer Spell: Frost Strike (#51417)", 7051417},
    {"Trainer Spell: Frost Strike (#51418)", 7051418},
    {"Trainer Spell: Frost Strike (#51419)", 7051419},
    {"Trainer Spell: Obliterate (#51423)", 7051423},
    {"Trainer Spell: Obliterate (#51424)", 7051424},
    {"Trainer Spell: Obliterate (#51425)", 7051425},
    {"Trainer Spell: Lava Burst (#51505)", 7051505},
    {"Trainer Spell: Hex (#51514)", 7051514},
    {"Trainer Spell: Dismantle (#51722)", 7051722},
    {"Trainer Spell: Fan of Knives (#51723)", 7051723},
    {"Trainer Spell: Sap (#51724)", 7051724},
    {"Trainer Spell: Earthliving Weapon (#51730)", 7051730},
    {"Trainer Spell: Earthliving Weapon (#51988)", 7051988},
    {"Trainer Spell: Earthliving Weapon (#51991)", 7051991},
    {"Trainer Spell: Earthliving Weapon (#51992)", 7051992},
    {"Trainer Spell: Earthliving Weapon (#51993)", 7051993},
    {"Trainer Spell: Earthliving Weapon (#51994)", 7051994},
    {"Trainer Spell: Water Shield (#52127)", 7052127},
    {"Trainer Spell: Water Shield (#52129)", 7052129},
    {"Trainer Spell: Water Shield (#52131)", 7052131},
    {"Trainer Spell: Water Shield (#52134)", 7052134},
    {"Trainer Spell: Water Shield (#52136)", 7052136},
    {"Trainer Spell: Water Shield (#52138)", 7052138},
    {"Trainer Spell: Savage Roar (#52610)", 7052610},
    {"Trainer Spell: Penance (#53005)", 7053005},
    {"Trainer Spell: Penance (#53006)", 7053006},
    {"Trainer Spell: Penance (#53007)", 7053007},
    {"Trainer Spell: Mind Sear (#53023)", 7053023},
    {"Trainer Spell: Teleport: Dalaran (#53140)", 7053140},
    {"Trainer Spell: Portal: Dalaran (#53142)", 7053142},
    {"Trainer Spell: Starfall (#53199)", 7053199},
    {"Trainer Spell: Starfall (#53200)", 7053200},
    {"Trainer Spell: Starfall (#53201)", 7053201},
    {"Trainer Spell: Typhoon (#53223)", 7053223},
    {"Trainer Spell: Typhoon (#53225)", 7053225},
    {"Trainer Spell: Typhoon (#53226)", 7053226},
    {"Trainer Spell: Wild Growth (#53248)", 7053248},
    {"Trainer Spell: Wild Growth (#53249)", 7053249},
    {"Trainer Spell: Wild Growth (#53251)", 7053251},
    {"Trainer Spell: Master's Call (#53271)", 7053271},
    {"Trainer Spell: Thorns (#53307)", 7053307},
    {"Trainer Spell: Entangling Roots (#53308)", 7053308},
    {"Trainer Spell: Nature's Grasp (#53312)", 7053312},
    {"Trainer Spell: Rune of Swordshattering (#53323)", 7053323},
    {"Trainer Spell: Rune of Lichbane (#53331)", 7053331},
    {"Trainer Spell: Hunter's Mark (#53338)", 7053338},
    {"Trainer Spell: Mongoose Bite (#53339)", 7053339},
    {"Trainer Spell: Rune of Cinderglacier (#53341)", 7053341},
    {"Trainer Spell: Rune of Spellshattering (#53342)", 7053342},
    {"Trainer Spell: Rune of Razorice (#53343)", 7053343},
    {"Trainer Spell: Rune of the Fallen Crusader (#53344)", 7053344},
    {"Trainer Spell: Kill Shot (#53351)", 7053351},
    {"Trainer Spell: Judgement of Justice (#53407)", 7053407},
    {"Trainer Spell: Judgement of Wisdom (#53408)", 7053408},
    {"Trainer Spell: Shield of Righteousness (#53600)", 7053600},
    {"Trainer Spell: Sacred Shield (#53601)", 7053601},
    {"Trainer Spell: Seal of Corruption (#53736)", 7053736},
    {"Trainer Spell: Retribution Aura (#54043)", 7054043},
    {"Trainer Spell: Divine Plea (#54428)", 7054428},
    {"Trainer Spell: Rune of Swordbreaking (#54446)", 7054446},
    {"Trainer Spell: Rune of Spellbreaking (#54447)", 7054447},
    {"Trainer Spell: Heart Strike (#55258)", 7055258},
    {"Trainer Spell: Heart Strike (#55259)", 7055259},
    {"Trainer Spell: Heart Strike (#55260)", 7055260},
    {"Trainer Spell: Heart Strike (#55261)", 7055261},
    {"Trainer Spell: Heart Strike (#55262)", 7055262},
    {"Trainer Spell: Scourge Strike (#55265)", 7055265},
    {"Trainer Spell: Frost Strike (#55268)", 7055268},
    {"Trainer Spell: Scourge Strike (#55270)", 7055270},
    {"Trainer Spell: Scourge Strike (#55271)", 7055271},
    {"Trainer Spell: Mirror Image (#55342)", 7055342},
    {"Trainer Spell: Living Bomb (#55359)", 7055359},
    {"Trainer Spell: Living Bomb (#55360)", 7055360},
    {"Trainer Spell: Chain Heal (#55458)", 7055458},
    {"Trainer Spell: Chain Heal (#55459)", 7055459},
    {"Trainer Spell: Enraged Regeneration (#55694)", 7055694},
    {"Trainer Spell: Dark Command (#56222)", 7056222},
    {"Trainer Spell: Steady Shot (#56641)", 7056641},
    {"Trainer Spell: Rune Strike (#56815)", 7056815},
    {"Trainer Spell: Horn of Winter (#57330)", 7057330},
    {"Trainer Spell: Strength of Earth Totem (#57622)", 7057622},
    {"Trainer Spell: Horn of Winter (#57623)", 7057623},
    {"Trainer Spell: Totem of Wrath (#57720)", 7057720},
    {"Trainer Spell: Totem of Wrath (#57721)", 7057721},
    {"Trainer Spell: Totem of Wrath (#57722)", 7057722},
    {"Trainer Spell: Heroic Throw (#57755)", 7057755},
    {"Trainer Spell: Revenge (#57823)", 7057823},
    {"Trainer Spell: Tricks of the Trade (#57934)", 7057934},
    {"Trainer Spell: Life Tap (#57946)", 7057946},
    {"Trainer Spell: Water Shield (#57960)", 7057960},
    {"Trainer Spell: Envenom (#57992)", 7057992},
    {"Trainer Spell: Envenom (#57993)", 7057993},
    {"Trainer Spell: Wind Shear (#57994)", 7057994},
    {"Trainer Spell: Volley (#58431)", 7058431},
    {"Trainer Spell: Volley (#58434)", 7058434},
    {"Trainer Spell: Stoneclaw Totem (#58580)", 7058580},
    {"Trainer Spell: Stoneclaw Totem (#58581)", 7058581},
    {"Trainer Spell: Stoneclaw Totem (#58582)", 7058582},
    {"Trainer Spell: Strength of Earth Totem (#58643)", 7058643},
    {"Trainer Spell: Flametongue Totem (#58649)", 7058649},
    {"Trainer Spell: Flametongue Totem (#58652)", 7058652},
    {"Trainer Spell: Flametongue Totem (#58656)", 7058656},
    {"Trainer Spell: Ritual of Refreshment (#58659)", 7058659},
    {"Trainer Spell: Searing Totem (#58699)", 7058699},
    {"Trainer Spell: Searing Totem (#58703)", 7058703},
    {"Trainer Spell: Searing Totem (#58704)", 7058704},
    {"Trainer Spell: Magma Totem (#58731)", 7058731},
    {"Trainer Spell: Magma Totem (#58734)", 7058734},
    {"Trainer Spell: Fire Resistance Totem (#58737)", 7058737},
    {"Trainer Spell: Fire Resistance Totem (#58739)", 7058739},
    {"Trainer Spell: Frost Resistance Totem (#58741)", 7058741},
    {"Trainer Spell: Frost Resistance Totem (#58745)", 7058745},
    {"Trainer Spell: Nature Resistance Totem (#58746)", 7058746},
    {"Trainer Spell: Nature Resistance Totem (#58749)", 7058749},
    {"Trainer Spell: Stoneskin Totem (#58751)", 7058751},
    {"Trainer Spell: Stoneskin Totem (#58753)", 7058753},
    {"Trainer Spell: Healing Stream Totem (#58755)", 7058755},
    {"Trainer Spell: Healing Stream Totem (#58756)", 7058756},
    {"Trainer Spell: Healing Stream Totem (#58757)", 7058757},
    {"Trainer Spell: Mana Spring Totem (#58771)", 7058771},
    {"Trainer Spell: Mana Spring Totem (#58773)", 7058773},
    {"Trainer Spell: Mana Spring Totem (#58774)", 7058774},
    {"Trainer Spell: Flametongue Weapon (#58785)", 7058785},
    {"Trainer Spell: Flametongue Weapon (#58789)", 7058789},
    {"Trainer Spell: Flametongue Weapon (#58790)", 7058790},
    {"Trainer Spell: Frostbrand Weapon (#58794)", 7058794},
    {"Trainer Spell: Frostbrand Weapon (#58795)", 7058795},
    {"Trainer Spell: Frostbrand Weapon (#58796)", 7058796},
    {"Trainer Spell: Windfury Weapon (#58801)", 7058801},
    {"Trainer Spell: Windfury Weapon (#58803)", 7058803},
    {"Trainer Spell: Windfury Weapon (#58804)", 7058804},
    {"Trainer Spell: Ritual of Souls (#58887)", 7058887},
    {"Trainer Spell: Dark Pact (#59092)", 7059092},
    {"Trainer Spell: Thunderstorm (#59156)", 7059156},
    {"Trainer Spell: Thunderstorm (#59158)", 7059158},
    {"Trainer Spell: Thunderstorm (#59159)", 7059159},
    {"Trainer Spell: Haunt (#59161)", 7059161},
    {"Trainer Spell: Haunt (#59163)", 7059163},
    {"Trainer Spell: Haunt (#59164)", 7059164},
    {"Trainer Spell: Chaos Bolt (#59170)", 7059170},
    {"Trainer Spell: Chaos Bolt (#59171)", 7059171},
    {"Trainer Spell: Chaos Bolt (#59172)", 7059172},
    {"Trainer Spell: Lava Burst (#60043)", 7060043},
    {"Trainer Spell: Explosive Shot (#60051)", 7060051},
    {"Trainer Spell: Explosive Shot (#60052)", 7060052},
    {"Trainer Spell: Explosive Shot (#60053)", 7060053},
    {"Trainer Spell: Freezing Arrow (#60192)", 7060192},
    {"Trainer Spell: Create Firestone (#60219)", 7060219},
    {"Trainer Spell: Create Firestone (#60220)", 7060220},
    {"Trainer Spell: Kill Shot (#61005)", 7061005},
    {"Trainer Spell: Kill Shot (#61006)", 7061006},
    {"Trainer Spell: Enslave Demon (#61191)", 7061191},
    {"Trainer Spell: Shadowflame (#61290)", 7061290},
    {"Trainer Spell: Riptide (#61299)", 7061299},
    {"Trainer Spell: Riptide (#61300)", 7061300},
    {"Trainer Spell: Riptide (#61301)", 7061301},
    {"Trainer Spell: Typhoon (#61384)", 7061384},
    {"Trainer Spell: Shield of Righteousness (#61411)", 7061411},
    {"Trainer Spell: Fire Nova (#61649)", 7061649},
    {"Trainer Spell: Fire Nova (#61657)", 7061657},
    {"Trainer Spell: Aspect of the Dragonhawk (#61846)", 7061846},
    {"Trainer Spell: Aspect of the Dragonhawk (#61847)", 7061847},
    {"Trainer Spell: Raise Ally (#61999)", 7061999},
    {"Trainer Spell: Swipe (Cat) (#62078)", 7062078},
    {"Trainer Spell: Hand of Reckoning (#62124)", 7062124},
    {"Trainer Spell: Rune of the Stoneskin Gargoyle (#62158)", 7062158},
    {"Trainer Spell: Savage Defense (#62600)", 7062600},
    {"Trainer Spell: Call Stabled Pet (#62757)", 7062757},
    {"Trainer Spell: Black Arrow (#63668)", 7063668},
    {"Trainer Spell: Black Arrow (#63669)", 7063669},
    {"Trainer Spell: Black Arrow (#63670)", 7063670},
    {"Trainer Spell: Black Arrow (#63671)", 7063671},
    {"Trainer Spell: Black Arrow (#63672)", 7063672},
    {"Trainer Spell: Shattering Throw (#64382)", 7064382},
    {"Trainer Spell: Divine Hymn (#64843)", 7064843},
    {"Trainer Spell: Hymn of Hope (#64901)", 7064901},
    {"Trainer Spell: Call of the Elements (#66842)", 7066842},
    {"Trainer Spell: Call of the Ancestors (#66843)", 7066843},
    {"Trainer Spell: Call of the Spirits (#66844)", 7066844},
    {"Trainer Spell: Rune of the Nerubian Carapace (#70164)", 7070164},
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
    {"Trainer Spell Item: Blizzard (#10)", 7500010},
    {"Trainer Spell Item: Power Word: Shield (#17)", 7500017},
    {"Trainer Spell Item: Backstab (#53)", 7500053},
    {"Trainer Spell Item: Invisibility (#66)", 7500066},
    {"Trainer Spell Item: Shield Bash (#72)", 7500072},
    {"Trainer Spell Item: Demoralizing Roar (#99)", 7500099},
    {"Trainer Spell Item: Charge (#100)", 7500100},
    {"Trainer Spell Item: Frostbolt (#116)", 7500116},
    {"Trainer Spell Item: Polymorph (#118)", 7500118},
    {"Trainer Spell Item: Cone of Cold (#120)", 7500120},
    {"Trainer Spell Item: Frost Nova (#122)", 7500122},
    {"Trainer Spell Item: Eye of Kilrogg (#126)", 7500126},
    {"Trainer Spell Item: Slow Fall (#130)", 7500130},
    {"Trainer Spell Item: Water Breathing (#131)", 7500131},
    {"Trainer Spell Item: Detect Invisibility (#132)", 7500132},
    {"Trainer Spell Item: Mend Pet (#136)", 7500136},
    {"Trainer Spell Item: Renew (#139)", 7500139},
    {"Trainer Spell Item: Fireball (#143)", 7500143},
    {"Trainer Spell Item: Fireball (#145)", 7500145},
    {"Trainer Spell Item: Corruption (#172)", 7500172},
    {"Trainer Spell Item: Frostbolt (#205)", 7500205},
    {"Trainer Spell Item: Heroic Strike (#284)", 7500284},
    {"Trainer Spell Item: Heroic Strike (#285)", 7500285},
    {"Trainer Spell Item: Lightning Shield (#324)", 7500324},
    {"Trainer Spell Item: Lightning Shield (#325)", 7500325},
    {"Trainer Spell Item: Healing Wave (#332)", 7500332},
    {"Trainer Spell Item: Entangling Roots (#339)", 7500339},
    {"Trainer Spell Item: Immolate (#348)", 7500348},
    {"Trainer Spell Item: Purge (#370)", 7500370},
    {"Trainer Spell Item: Kidney Shot (#408)", 7500408},
    {"Trainer Spell Item: Chain Lightning (#421)", 7500421},
    {"Trainer Spell Item: Mind Soothe (#453)", 7500453},
    {"Trainer Spell Item: Devotion Aura (#465)", 7500465},
    {"Trainer Spell Item: Thorns (#467)", 7500467},
    {"Trainer Spell Item: Commanding Shout (#469)", 7500469},
    {"Trainer Spell Item: Remove Curse (#475)", 7500475},
    {"Trainer Spell Item: Divine Protection (#498)", 7500498},
    {"Trainer Spell Item: Cure Toxins (#526)", 7500526},
    {"Trainer Spell Item: Dispel Magic (#527)", 7500527},
    {"Trainer Spell Item: Cure Disease (#528)", 7500528},
    {"Trainer Spell Item: Lightning Bolt (#529)", 7500529},
    {"Trainer Spell Item: Fire Ward (#543)", 7500543},
    {"Trainer Spell Item: Water Walking (#546)", 7500546},
    {"Trainer Spell Item: Healing Wave (#547)", 7500547},
    {"Trainer Spell Item: Lightning Bolt (#548)", 7500548},
    {"Trainer Spell Item: Abolish Disease (#552)", 7500552},
    {"Trainer Spell Item: Astral Recall (#556)", 7500556},
    {"Trainer Spell Item: Fade (#586)", 7500586},
    {"Trainer Spell Item: Conjure Food (#587)", 7500587},
    {"Trainer Spell Item: Inner Fire (#588)", 7500588},
    {"Trainer Spell Item: Shadow Word: Pain (#589)", 7500589},
    {"Trainer Spell Item: Smite (#591)", 7500591},
    {"Trainer Spell Item: Power Word: Shield (#592)", 7500592},
    {"Trainer Spell Item: Shadow Word: Pain (#594)", 7500594},
    {"Trainer Spell Item: Prayer of Healing (#596)", 7500596},
    {"Trainer Spell Item: Conjure Food (#597)", 7500597},
    {"Trainer Spell Item: Smite (#598)", 7500598},
    {"Trainer Spell Item: Inner Fire (#602)", 7500602},
    {"Trainer Spell Item: Curse of Doom (#603)", 7500603},
    {"Trainer Spell Item: Dampen Magic (#604)", 7500604},
    {"Trainer Spell Item: Mind Control (#605)", 7500605},
    {"Trainer Spell Item: Lay on Hands (#633)", 7500633},
    {"Trainer Spell Item: Holy Light (#639)", 7500639},
    {"Trainer Spell Item: Divine Shield (#642)", 7500642},
    {"Trainer Spell Item: Devotion Aura (#643)", 7500643},
    {"Trainer Spell Item: Holy Light (#647)", 7500647},
    {"Trainer Spell Item: Dual Wield (#674)", 7500674},
    {"Trainer Spell Item: Disarm (#676)", 7500676},
    {"Trainer Spell Item: Summon Imp (#688)", 7500688},
    {"Trainer Spell Item: Drain Life (#689)", 7500689},
    {"Trainer Spell Item: Create Soulstone (#693)", 7500693},
    {"Trainer Spell Item: Mocking Blow (#694)", 7500694},
    {"Trainer Spell Item: Shadow Bolt (#695)", 7500695},
    {"Trainer Spell Item: Demon Skin (#696)", 7500696},
    {"Trainer Spell Item: Ritual of Summoning (#698)", 7500698},
    {"Trainer Spell Item: Drain Life (#699)", 7500699},
    {"Trainer Spell Item: Curse of Weakness (#702)", 7500702},
    {"Trainer Spell Item: Garrote (#703)", 7500703},
    {"Trainer Spell Item: Shadow Bolt (#705)", 7500705},
    {"Trainer Spell Item: Demon Armor (#706)", 7500706},
    {"Trainer Spell Item: Immolate (#707)", 7500707},
    {"Trainer Spell Item: Drain Life (#709)", 7500709},
    {"Trainer Spell Item: Banish (#710)", 7500710},
    {"Trainer Spell Item: Tranquility (#740)", 7500740},
    {"Trainer Spell Item: Plate Mail (#750)", 7500750},
    {"Trainer Spell Item: Health Funnel (#755)", 7500755},
    {"Trainer Spell Item: Conjure Mana Gem (#759)", 7500759},
    {"Trainer Spell Item: Cat Form (#768)", 7500768},
    {"Trainer Spell Item: Swipe (Bear) (#769)", 7500769},
    {"Trainer Spell Item: Faerie Fire (#770)", 7500770},
    {"Trainer Spell Item: Rend (#772)", 7500772},
    {"Trainer Spell Item: Rejuvenation (#774)", 7500774},
    {"Trainer Spell Item: Swipe (Bear) (#779)", 7500779},
    {"Trainer Spell Item: Swipe (Bear) (#780)", 7500780},
    {"Trainer Spell Item: Disengage (#781)", 7500781},
    {"Trainer Spell Item: Thorns (#782)", 7500782},
    {"Trainer Spell Item: Travel Form (#783)", 7500783},
    {"Trainer Spell Item: Frostbolt (#837)", 7500837},
    {"Trainer Spell Item: Cleave (#845)", 7500845},
    {"Trainer Spell Item: Hammer of Justice (#853)", 7500853},
    {"Trainer Spell Item: Frost Nova (#865)", 7500865},
    {"Trainer Spell Item: Shield Wall (#871)", 7500871},
    {"Trainer Spell Item: Exorcism (#879)", 7500879},
    {"Trainer Spell Item: Lightning Shield (#905)", 7500905},
    {"Trainer Spell Item: Healing Wave (#913)", 7500913},
    {"Trainer Spell Item: Lightning Bolt (#915)", 7500915},
    {"Trainer Spell Item: Pick Pocket (#921)", 7500921},
    {"Trainer Spell Item: Chain Lightning (#930)", 7500930},
    {"Trainer Spell Item: Healing Wave (#939)", 7500939},
    {"Trainer Spell Item: Lightning Bolt (#943)", 7500943},
    {"Trainer Spell Item: Lightning Shield (#945)", 7500945},
    {"Trainer Spell Item: Healing Wave (#959)", 7500959},
    {"Trainer Spell Item: Shadow Word: Pain (#970)", 7500970},
    {"Trainer Spell Item: Shadow Protection (#976)", 7500976},
    {"Trainer Spell Item: Curse of Agony (#980)", 7500980},
    {"Trainer Spell Item: Smite (#984)", 7500984},
    {"Trainer Spell Item: Dispel Magic (#988)", 7500988},
    {"Trainer Spell Item: Conjure Food (#990)", 7500990},
    {"Trainer Spell Item: Shadow Word: Pain (#992)", 7500992},
    {"Trainer Spell Item: Prayer of Healing (#996)", 7500996},
    {"Trainer Spell Item: Eyes of the Beast (#1002)", 7501002},
    {"Trainer Spell Item: Smite (#1004)", 7501004},
    {"Trainer Spell Item: Inner Fire (#1006)", 7501006},
    {"Trainer Spell Item: Amplify Magic (#1008)", 7501008},
    {"Trainer Spell Item: Curse of Agony (#1014)", 7501014},
    {"Trainer Spell Item: Hand of Protection (#1022)", 7501022},
    {"Trainer Spell Item: Holy Light (#1026)", 7501026},
    {"Trainer Spell Item: Devotion Aura (#1032)", 7501032},
    {"Trainer Spell Item: Hand of Salvation (#1038)", 7501038},
    {"Trainer Spell Item: Holy Light (#1042)", 7501042},
    {"Trainer Spell Item: Hand of Freedom (#1044)", 7501044},
    {"Trainer Spell Item: Rejuvenation (#1058)", 7501058},
    {"Trainer Spell Item: Entangling Roots (#1062)", 7501062},
    {"Trainer Spell Item: Chain Heal (#1064)", 7501064},
    {"Trainer Spell Item: Aquatic Form (#1066)", 7501066},
    {"Trainer Spell Item: Thorns (#1075)", 7501075},
    {"Trainer Spell Item: Rip (#1079)", 7501079},
    {"Trainer Spell Item: Claw (#1082)", 7501082},
    {"Trainer Spell Item: Demon Armor (#1086)", 7501086},
    {"Trainer Spell Item: Shadow Bolt (#1088)", 7501088},
    {"Trainer Spell Item: Enslave Demon (#1098)", 7501098},
    {"Trainer Spell Item: Shadow Bolt (#1106)", 7501106},
    {"Trainer Spell Item: Curse of Weakness (#1108)", 7501108},
    {"Trainer Spell Item: Drain Soul (#1120)", 7501120},
    {"Trainer Spell Item: Mark of the Wild (#1126)", 7501126},
    {"Trainer Spell Item: Hunter's Mark (#1130)", 7501130},
    {"Trainer Spell Item: Purify (#1152)", 7501152},
    {"Trainer Spell Item: Demoralizing Shout (#1160)", 7501160},
    {"Trainer Spell Item: Challenging Shout (#1161)", 7501161},
    {"Trainer Spell Item: Power Word: Fortitude (#1243)", 7501243},
    {"Trainer Spell Item: Power Word: Fortitude (#1244)", 7501244},
    {"Trainer Spell Item: Power Word: Fortitude (#1245)", 7501245},
    {"Trainer Spell Item: Rejuvenation (#1430)", 7501430},
    {"Trainer Spell Item: Arcane Explosion (#1449)", 7501449},
    {"Trainer Spell Item: Life Tap (#1454)", 7501454},
    {"Trainer Spell Item: Life Tap (#1455)", 7501455},
    {"Trainer Spell Item: Life Tap (#1456)", 7501456},
    {"Trainer Spell Item: Arcane Intellect (#1459)", 7501459},
    {"Trainer Spell Item: Arcane Intellect (#1460)", 7501460},
    {"Trainer Spell Item: Arcane Intellect (#1461)", 7501461},
    {"Trainer Spell Item: Beast Lore (#1462)", 7501462},
    {"Trainer Spell Item: Mana Shield (#1463)", 7501463},
    {"Trainer Spell Item: Slam (#1464)", 7501464},
    {"Trainer Spell Item: Curse of the Elements (#1490)", 7501490},
    {"Trainer Spell Item: Track Beasts (#1494)", 7501494},
    {"Trainer Spell Item: Mongoose Bite (#1495)", 7501495},
    {"Trainer Spell Item: Freezing Trap (#1499)", 7501499},
    {"Trainer Spell Item: Volley (#1510)", 7501510},
    {"Trainer Spell Item: Scare Beast (#1513)", 7501513},
    {"Trainer Spell Item: Fire Nova (#1535)", 7501535},
    {"Trainer Spell Item: Flare (#1543)", 7501543},
    {"Trainer Spell Item: Heroic Strike (#1608)", 7501608},
    {"Trainer Spell Item: Whirlwind (#1680)", 7501680},
    {"Trainer Spell Item: Levitate (#1706)", 7501706},
    {"Trainer Spell Item: Summon Felsteed (#1710)", 7501710},
    {"Trainer Spell Item: Curse of Tongues (#1714)", 7501714},
    {"Trainer Spell Item: Hamstring (#1715)", 7501715},
    {"Trainer Spell Item: Recklessness (#1719)", 7501719},
    {"Trainer Spell Item: Distract (#1725)", 7501725},
    {"Trainer Spell Item: Demoralizing Roar (#1735)", 7501735},
    {"Trainer Spell Item: Sinister Strike (#1757)", 7501757},
    {"Trainer Spell Item: Sinister Strike (#1758)", 7501758},
    {"Trainer Spell Item: Sinister Strike (#1759)", 7501759},
    {"Trainer Spell Item: Sinister Strike (#1760)", 7501760},
    {"Trainer Spell Item: Kick (#1766)", 7501766},
    {"Trainer Spell Item: Gouge (#1776)", 7501776},
    {"Trainer Spell Item: Stealth (#1784)", 7501784},
    {"Trainer Spell Item: Pick Lock (#1804)", 7501804},
    {"Trainer Spell Item: Rake (#1822)", 7501822},
    {"Trainer Spell Item: Rake (#1823)", 7501823},
    {"Trainer Spell Item: Rake (#1824)", 7501824},
    {"Trainer Spell Item: Cheap Shot (#1833)", 7501833},
    {"Trainer Spell Item: Disarm Trap (#1842)", 7501842},
    {"Trainer Spell Item: Dash (#1850)", 7501850},
    {"Trainer Spell Item: Vanish (#1856)", 7501856},
    {"Trainer Spell Item: Vanish (#1857)", 7501857},
    {"Trainer Spell Item: Safe Fall (#1860)", 7501860},
    {"Trainer Spell Item: Rupture (#1943)", 7501943},
    {"Trainer Spell Item: Hellfire (#1949)", 7501949},
    {"Trainer Spell Item: Blink (#1953)", 7501953},
    {"Trainer Spell Item: Feint (#1966)", 7501966},
    {"Trainer Spell Item: Serpent Sting (#1978)", 7501978},
    {"Trainer Spell Item: Resurrection (#2006)", 7502006},
    {"Trainer Spell Item: Ancestral Spirit (#2008)", 7502008},
    {"Trainer Spell Item: Resurrection (#2010)", 7502010},
    {"Trainer Spell Item: Battle Shout (#2048)", 7502048},
    {"Trainer Spell Item: Lesser Heal (#2052)", 7502052},
    {"Trainer Spell Item: Lesser Heal (#2053)", 7502053},
    {"Trainer Spell Item: Heal (#2054)", 7502054},
    {"Trainer Spell Item: Heal (#2055)", 7502055},
    {"Trainer Spell Item: Greater Heal (#2060)", 7502060},
    {"Trainer Spell Item: Flash Heal (#2061)", 7502061},
    {"Trainer Spell Item: Earth Elemental Totem (#2062)", 7502062},
    {"Trainer Spell Item: Sap (#2070)", 7502070},
    {"Trainer Spell Item: Rejuvenation (#2090)", 7502090},
    {"Trainer Spell Item: Rejuvenation (#2091)", 7502091},
    {"Trainer Spell Item: Blind (#2094)", 7502094},
    {"Trainer Spell Item: Mind Vision (#2096)", 7502096},
    {"Trainer Spell Item: Flamestrike (#2120)", 7502120},
    {"Trainer Spell Item: Flamestrike (#2121)", 7502121},
    {"Trainer Spell Item: Fire Blast (#2136)", 7502136},
    {"Trainer Spell Item: Fire Blast (#2137)", 7502137},
    {"Trainer Spell Item: Fire Blast (#2138)", 7502138},
    {"Trainer Spell Item: Counterspell (#2139)", 7502139},
    {"Trainer Spell Item: Create Spellstone (#2362)", 7502362},
    {"Trainer Spell Item: Earthbind Totem (#2484)", 7502484},
    {"Trainer Spell Item: Shield Block (#2565)", 7502565},
    {"Trainer Spell Item: Backstab (#2589)", 7502589},
    {"Trainer Spell Item: Backstab (#2590)", 7502590},
    {"Trainer Spell Item: Backstab (#2591)", 7502591},
    {"Trainer Spell Item: Hibernate (#2637)", 7502637},
    {"Trainer Spell Item: Multi-Shot (#2643)", 7502643},
    {"Trainer Spell Item: Ghost Wolf (#2645)", 7502645},
    {"Trainer Spell Item: Bloodrage (#2687)", 7502687},
    {"Trainer Spell Item: Shadow Word: Pain (#2767)", 7502767},
    {"Trainer Spell Item: Remove Curse (#2782)", 7502782},
    {"Trainer Spell Item: Power Word: Fortitude (#2791)", 7502791},
    {"Trainer Spell Item: Lay on Hands (#2800)", 7502800},
    {"Trainer Spell Item: Holy Wrath (#2812)", 7502812},
    {"Trainer Spell Item: Bloodlust (#2825)", 7502825},
    {"Trainer Spell Item: Detect Traps (#2836)", 7502836},
    {"Trainer Spell Item: Chain Lightning (#2860)", 7502860},
    {"Trainer Spell Item: Abolish Poison (#2893)", 7502893},
    {"Trainer Spell Item: Fire Elemental Totem (#2894)", 7502894},
    {"Trainer Spell Item: Soothe Animal (#2908)", 7502908},
    {"Trainer Spell Item: Starfire (#2912)", 7502912},
    {"Trainer Spell Item: Immolate (#2941)", 7502941},
    {"Trainer Spell Item: Devouring Plague (#2944)", 7502944},
    {"Trainer Spell Item: Scorch (#2948)", 7502948},
    {"Trainer Spell Item: Wing Clip (#2974)", 7502974},
    {"Trainer Spell Item: Sprint (#2983)", 7502983},
    {"Trainer Spell Item: Claw (#3029)", 7503029},
    {"Trainer Spell Item: Viper Sting (#3034)", 7503034},
    {"Trainer Spell Item: Scorpid Sting (#3043)", 7503043},
    {"Trainer Spell Item: Arcane Shot (#3044)", 7503044},
    {"Trainer Spell Item: Rapid Fire (#3045)", 7503045},
    {"Trainer Spell Item: Mend Pet (#3111)", 7503111},
    {"Trainer Spell Item: Parry (#3127)", 7503127},
    {"Trainer Spell Item: Fireball (#3140)", 7503140},
    {"Trainer Spell Item: Intervene (#3411)", 7503411},
    {"Trainer Spell Item: Holy Light (#3472)", 7503472},
    {"Trainer Spell Item: Conjure Mana Gem (#3552)", 7503552},
    {"Trainer Spell Item: Teleport: Stormwind (#3561)", 7503561},
    {"Trainer Spell Item: Teleport: Ironforge (#3562)", 7503562},
    {"Trainer Spell Item: Teleport: Undercity (#3563)", 7503563},
    {"Trainer Spell Item: Teleport: Darnassus (#3565)", 7503565},
    {"Trainer Spell Item: Teleport: Thunder Bluff (#3566)", 7503566},
    {"Trainer Spell Item: Teleport: Orgrimmar (#3567)", 7503567},
    {"Trainer Spell Item: Rejuvenation (#3627)", 7503627},
    {"Trainer Spell Item: Mend Pet (#3661)", 7503661},
    {"Trainer Spell Item: Mend Pet (#3662)", 7503662},
    {"Trainer Spell Item: Health Funnel (#3698)", 7503698},
    {"Trainer Spell Item: Health Funnel (#3699)", 7503699},
    {"Trainer Spell Item: Health Funnel (#3700)", 7503700},
    {"Trainer Spell Item: Path of Frost (#3714)", 7503714},
    {"Trainer Spell Item: Wrath of Air Totem (#3738)", 7503738},
    {"Trainer Spell Item: Power Word: Shield (#3747)", 7503747},
    {"Trainer Spell Item: Cleanse (#4987)", 7504987},
    {"Trainer Spell Item: Concussive Shot (#5116)", 7505116},
    {"Trainer Spell Item: Aspect of the Cheetah (#5118)", 7505118},
    {"Trainer Spell Item: Drain Mana (#5138)", 7505138},
    {"Trainer Spell Item: Arcane Missiles (#5143)", 7505143},
    {"Trainer Spell Item: Arcane Missiles (#5144)", 7505144},
    {"Trainer Spell Item: Arcane Missiles (#5145)", 7505145},
    {"Trainer Spell Item: Slice and Dice (#5171)", 7505171},
    {"Trainer Spell Item: Wrath (#5177)", 7505177},
    {"Trainer Spell Item: Wrath (#5178)", 7505178},
    {"Trainer Spell Item: Wrath (#5179)", 7505179},
    {"Trainer Spell Item: Wrath (#5180)", 7505180},
    {"Trainer Spell Item: Healing Touch (#5186)", 7505186},
    {"Trainer Spell Item: Healing Touch (#5187)", 7505187},
    {"Trainer Spell Item: Healing Touch (#5188)", 7505188},
    {"Trainer Spell Item: Healing Touch (#5189)", 7505189},
    {"Trainer Spell Item: Entangling Roots (#5195)", 7505195},
    {"Trainer Spell Item: Entangling Roots (#5196)", 7505196},
    {"Trainer Spell Item: Claw (#5201)", 7505201},
    {"Trainer Spell Item: Challenging Roar (#5209)", 7505209},
    {"Trainer Spell Item: Bash (#5211)", 7505211},
    {"Trainer Spell Item: Prowl (#5215)", 7505215},
    {"Trainer Spell Item: Tiger's Fury (#5217)", 7505217},
    {"Trainer Spell Item: Shred (#5221)", 7505221},
    {"Trainer Spell Item: Track Humanoids (#5225)", 7505225},
    {"Trainer Spell Item: Enrage (#5229)", 7505229},
    {"Trainer Spell Item: Mark of the Wild (#5232)", 7505232},
    {"Trainer Spell Item: Mark of the Wild (#5234)", 7505234},
    {"Trainer Spell Item: Battle Shout (#5242)", 7505242},
    {"Trainer Spell Item: Intimidating Shout (#5246)", 7505246},
    {"Trainer Spell Item: Evasion (#5277)", 7505277},
    {"Trainer Spell Item: Execute (#5308)", 7505308},
    {"Trainer Spell Item: Feign Death (#5384)", 7505384},
    {"Trainer Spell Item: Howl of Terror (#5484)", 7505484},
    {"Trainer Spell Item: Sense Demons (#5500)", 7505500},
    {"Trainer Spell Item: Sense Undead (#5502)", 7505502},
    {"Trainer Spell Item: Conjure Water (#5504)", 7505504},
    {"Trainer Spell Item: Conjure Water (#5505)", 7505505},
    {"Trainer Spell Item: Conjure Water (#5506)", 7505506},
    {"Trainer Spell Item: Hammer of Justice (#5588)", 7505588},
    {"Trainer Spell Item: Hammer of Justice (#5589)", 7505589},
    {"Trainer Spell Item: Hand of Protection (#5599)", 7505599},
    {"Trainer Spell Item: Exorcism (#5614)", 7505614},
    {"Trainer Spell Item: Exorcism (#5615)", 7505615},
    {"Trainer Spell Item: Mana Spring Totem (#5675)", 7505675},
    {"Trainer Spell Item: Searing Pain (#5676)", 7505676},
    {"Trainer Spell Item: Unending Breath (#5697)", 7505697},
    {"Trainer Spell Item: Create Healthstone (#5699)", 7505699},
    {"Trainer Spell Item: Stoneclaw Totem (#5730)", 7505730},
    {"Trainer Spell Item: Rain of Fire (#5740)", 7505740},
    {"Trainer Spell Item: Fear (#5782)", 7505782},
    {"Trainer Spell Item: Shiv (#5938)", 7505938},
    {"Trainer Spell Item: Lightning Bolt (#6041)", 7506041},
    {"Trainer Spell Item: Smite (#6060)", 7506060},
    {"Trainer Spell Item: Heal (#6064)", 7506064},
    {"Trainer Spell Item: Power Word: Shield (#6065)", 7506065},
    {"Trainer Spell Item: Power Word: Shield (#6066)", 7506066},
    {"Trainer Spell Item: Renew (#6074)", 7506074},
    {"Trainer Spell Item: Renew (#6075)", 7506075},
    {"Trainer Spell Item: Renew (#6076)", 7506076},
    {"Trainer Spell Item: Renew (#6077)", 7506077},
    {"Trainer Spell Item: Renew (#6078)", 7506078},
    {"Trainer Spell Item: Mage Armor (#6117)", 7506117},
    {"Trainer Spell Item: Conjure Water (#6127)", 7506127},
    {"Trainer Spell Item: Conjure Food (#6129)", 7506129},
    {"Trainer Spell Item: Frost Nova (#6131)", 7506131},
    {"Trainer Spell Item: Blizzard (#6141)", 7506141},
    {"Trainer Spell Item: Frost Ward (#6143)", 7506143},
    {"Trainer Spell Item: Charge (#6178)", 7506178},
    {"Trainer Spell Item: Demoralizing Shout (#6190)", 7506190},
    {"Trainer Spell Item: Battle Shout (#6192)", 7506192},
    {"Trainer Spell Item: Far Sight (#6196)", 7506196},
    {"Trainer Spell Item: Eagle Eye (#6197)", 7506197},
    {"Trainer Spell Item: Create Healthstone (#6201)", 7506201},
    {"Trainer Spell Item: Create Healthstone (#6202)", 7506202},
    {"Trainer Spell Item: Curse of Weakness (#6205)", 7506205},
    {"Trainer Spell Item: Fear (#6213)", 7506213},
    {"Trainer Spell Item: Fear (#6215)", 7506215},
    {"Trainer Spell Item: Curse of Agony (#6217)", 7506217},
    {"Trainer Spell Item: Rain of Fire (#6219)", 7506219},
    {"Trainer Spell Item: Corruption (#6222)", 7506222},
    {"Trainer Spell Item: Corruption (#6223)", 7506223},
    {"Trainer Spell Item: Shadow Ward (#6229)", 7506229},
    {"Trainer Spell Item: Thunder Clap (#6343)", 7506343},
    {"Trainer Spell Item: Fear Ward (#6346)", 7506346},
    {"Trainer Spell Item: Soul Fire (#6353)", 7506353},
    {"Trainer Spell Item: Searing Totem (#6363)", 7506363},
    {"Trainer Spell Item: Searing Totem (#6364)", 7506364},
    {"Trainer Spell Item: Searing Totem (#6365)", 7506365},
    {"Trainer Spell Item: Create Firestone (#6366)", 7506366},
    {"Trainer Spell Item: Healing Stream Totem (#6375)", 7506375},
    {"Trainer Spell Item: Healing Stream Totem (#6377)", 7506377},
    {"Trainer Spell Item: Stoneclaw Totem (#6390)", 7506390},
    {"Trainer Spell Item: Stoneclaw Totem (#6391)", 7506391},
    {"Trainer Spell Item: Stoneclaw Totem (#6392)", 7506392},
    {"Trainer Spell Item: Sentry Totem (#6495)", 7506495},
    {"Trainer Spell Item: Rend (#6546)", 7506546},
    {"Trainer Spell Item: Rend (#6547)", 7506547},
    {"Trainer Spell Item: Rend (#6548)", 7506548},
    {"Trainer Spell Item: Pummel (#6552)", 7506552},
    {"Trainer Spell Item: Revenge (#6572)", 7506572},
    {"Trainer Spell Item: Revenge (#6574)", 7506574},
    {"Trainer Spell Item: Battle Shout (#6673)", 7506673},
    {"Trainer Spell Item: Mark of the Wild (#6756)", 7506756},
    {"Trainer Spell Item: Eviscerate (#6760)", 7506760},
    {"Trainer Spell Item: Eviscerate (#6761)", 7506761},
    {"Trainer Spell Item: Eviscerate (#6762)", 7506762},
    {"Trainer Spell Item: Feint (#6768)", 7506768},
    {"Trainer Spell Item: Sap (#6770)", 7506770},
    {"Trainer Spell Item: Slice and Dice (#6774)", 7506774},
    {"Trainer Spell Item: Healing Touch (#6778)", 7506778},
    {"Trainer Spell Item: Wrath (#6780)", 7506780},
    {"Trainer Spell Item: Ravage (#6785)", 7506785},
    {"Trainer Spell Item: Ravage (#6787)", 7506787},
    {"Trainer Spell Item: Death Coil (#6789)", 7506789},
    {"Trainer Spell Item: Tiger's Fury (#6793)", 7506793},
    {"Trainer Spell Item: Bash (#6798)", 7506798},
    {"Trainer Spell Item: Shred (#6800)", 7506800},
    {"Trainer Spell Item: Maul (#6808)", 7506808},
    {"Trainer Spell Item: Maul (#6809)", 7506809},
    {"Trainer Spell Item: Hand of Sacrifice (#6940)", 7506940},
    {"Trainer Spell Item: Inner Fire (#7128)", 7507128},
    {"Trainer Spell Item: Retribution Aura (#7294)", 7507294},
    {"Trainer Spell Item: Frost Armor (#7300)", 7507300},
    {"Trainer Spell Item: Frost Armor (#7301)", 7507301},
    {"Trainer Spell Item: Ice Armor (#7302)", 7507302},
    {"Trainer Spell Item: Ice Armor (#7320)", 7507320},
    {"Trainer Spell Item: Frostbolt (#7322)", 7507322},
    {"Trainer Spell Item: Cleave (#7369)", 7507369},
    {"Trainer Spell Item: Revenge (#7379)", 7507379},
    {"Trainer Spell Item: Overpower (#7384)", 7507384},
    {"Trainer Spell Item: Shadow Bolt (#7641)", 7507641},
    {"Trainer Spell Item: Curse of Weakness (#7646)", 7507646},
    {"Trainer Spell Item: Corruption (#7648)", 7507648},
    {"Trainer Spell Item: Drain Life (#7651)", 7507651},
    {"Trainer Spell Item: Lesser Healing Wave (#8004)", 7508004},
    {"Trainer Spell Item: Healing Wave (#8005)", 7508005},
    {"Trainer Spell Item: Lesser Healing Wave (#8008)", 7508008},
    {"Trainer Spell Item: Lesser Healing Wave (#8010)", 7508010},
    {"Trainer Spell Item: Purge (#8012)", 7508012},
    {"Trainer Spell Item: Rockbiter Weapon (#8017)", 7508017},
    {"Trainer Spell Item: Rockbiter Weapon (#8018)", 7508018},
    {"Trainer Spell Item: Rockbiter Weapon (#8019)", 7508019},
    {"Trainer Spell Item: Flametongue Weapon (#8024)", 7508024},
    {"Trainer Spell Item: Flametongue Weapon (#8027)", 7508027},
    {"Trainer Spell Item: Flametongue Weapon (#8030)", 7508030},
    {"Trainer Spell Item: Frostbrand Weapon (#8033)", 7508033},
    {"Trainer Spell Item: Frostbrand Weapon (#8038)", 7508038},
    {"Trainer Spell Item: Earth Shock (#8042)", 7508042},
    {"Trainer Spell Item: Earth Shock (#8044)", 7508044},
    {"Trainer Spell Item: Earth Shock (#8045)", 7508045},
    {"Trainer Spell Item: Earth Shock (#8046)", 7508046},
    {"Trainer Spell Item: Flame Shock (#8050)", 7508050},
    {"Trainer Spell Item: Flame Shock (#8052)", 7508052},
    {"Trainer Spell Item: Flame Shock (#8053)", 7508053},
    {"Trainer Spell Item: Frost Shock (#8056)", 7508056},
    {"Trainer Spell Item: Frost Shock (#8058)", 7508058},
    {"Trainer Spell Item: Strength of Earth Totem (#8075)", 7508075},
    {"Trainer Spell Item: Mind Blast (#8092)", 7508092},
    {"Trainer Spell Item: Mind Blast (#8102)", 7508102},
    {"Trainer Spell Item: Mind Blast (#8103)", 7508103},
    {"Trainer Spell Item: Mind Blast (#8104)", 7508104},
    {"Trainer Spell Item: Mind Blast (#8105)", 7508105},
    {"Trainer Spell Item: Mind Blast (#8106)", 7508106},
    {"Trainer Spell Item: Psychic Scream (#8122)", 7508122},
    {"Trainer Spell Item: Psychic Scream (#8124)", 7508124},
    {"Trainer Spell Item: Mana Burn (#8129)", 7508129},
    {"Trainer Spell Item: Lightning Shield (#8134)", 7508134},
    {"Trainer Spell Item: Tremor Totem (#8143)", 7508143},
    {"Trainer Spell Item: Stoneskin Totem (#8154)", 7508154},
    {"Trainer Spell Item: Stoneskin Totem (#8155)", 7508155},
    {"Trainer Spell Item: Strength of Earth Totem (#8160)", 7508160},
    {"Trainer Spell Item: Strength of Earth Totem (#8161)", 7508161},
    {"Trainer Spell Item: Cleansing Totem (#8170)", 7508170},
    {"Trainer Spell Item: Grounding Totem (#8177)", 7508177},
    {"Trainer Spell Item: Frost Resistance Totem (#8181)", 7508181},
    {"Trainer Spell Item: Fire Resistance Totem (#8184)", 7508184},
    {"Trainer Spell Item: Magma Totem (#8190)", 7508190},
    {"Trainer Spell Item: Thunder Clap (#8198)", 7508198},
    {"Trainer Spell Item: Thunder Clap (#8204)", 7508204},
    {"Trainer Spell Item: Thunder Clap (#8205)", 7508205},
    {"Trainer Spell Item: Flametongue Totem (#8227)", 7508227},
    {"Trainer Spell Item: Windfury Weapon (#8232)", 7508232},
    {"Trainer Spell Item: Windfury Weapon (#8235)", 7508235},
    {"Trainer Spell Item: Flametongue Totem (#8249)", 7508249},
    {"Trainer Spell Item: Drain Soul (#8288)", 7508288},
    {"Trainer Spell Item: Drain Soul (#8289)", 7508289},
    {"Trainer Spell Item: Fireball (#8400)", 7508400},
    {"Trainer Spell Item: Fireball (#8401)", 7508401},
    {"Trainer Spell Item: Fireball (#8402)", 7508402},
    {"Trainer Spell Item: Frostbolt (#8406)", 7508406},
    {"Trainer Spell Item: Frostbolt (#8407)", 7508407},
    {"Trainer Spell Item: Frostbolt (#8408)", 7508408},
    {"Trainer Spell Item: Fire Blast (#8412)", 7508412},
    {"Trainer Spell Item: Fire Blast (#8413)", 7508413},
    {"Trainer Spell Item: Arcane Missiles (#8416)", 7508416},
    {"Trainer Spell Item: Arcane Missiles (#8417)", 7508417},
    {"Trainer Spell Item: Flamestrike (#8422)", 7508422},
    {"Trainer Spell Item: Flamestrike (#8423)", 7508423},
    {"Trainer Spell Item: Blizzard (#8427)", 7508427},
    {"Trainer Spell Item: Arcane Explosion (#8437)", 7508437},
    {"Trainer Spell Item: Arcane Explosion (#8438)", 7508438},
    {"Trainer Spell Item: Arcane Explosion (#8439)", 7508439},
    {"Trainer Spell Item: Scorch (#8444)", 7508444},
    {"Trainer Spell Item: Scorch (#8445)", 7508445},
    {"Trainer Spell Item: Scorch (#8446)", 7508446},
    {"Trainer Spell Item: Dampen Magic (#8450)", 7508450},
    {"Trainer Spell Item: Dampen Magic (#8451)", 7508451},
    {"Trainer Spell Item: Amplify Magic (#8455)", 7508455},
    {"Trainer Spell Item: Fire Ward (#8457)", 7508457},
    {"Trainer Spell Item: Fire Ward (#8458)", 7508458},
    {"Trainer Spell Item: Frost Ward (#8461)", 7508461},
    {"Trainer Spell Item: Frost Ward (#8462)", 7508462},
    {"Trainer Spell Item: Cone of Cold (#8492)", 7508492},
    {"Trainer Spell Item: Mana Shield (#8494)", 7508494},
    {"Trainer Spell Item: Mana Shield (#8495)", 7508495},
    {"Trainer Spell Item: Fire Nova (#8498)", 7508498},
    {"Trainer Spell Item: Fire Nova (#8499)", 7508499},
    {"Trainer Spell Item: Windfury Totem (#8512)", 7508512},
    {"Trainer Spell Item: Sinister Strike (#8621)", 7508621},
    {"Trainer Spell Item: Eviscerate (#8623)", 7508623},
    {"Trainer Spell Item: Eviscerate (#8624)", 7508624},
    {"Trainer Spell Item: Garrote (#8631)", 7508631},
    {"Trainer Spell Item: Garrote (#8632)", 7508632},
    {"Trainer Spell Item: Garrote (#8633)", 7508633},
    {"Trainer Spell Item: Feint (#8637)", 7508637},
    {"Trainer Spell Item: Rupture (#8639)", 7508639},
    {"Trainer Spell Item: Rupture (#8640)", 7508640},
    {"Trainer Spell Item: Kidney Shot (#8643)", 7508643},
    {"Trainer Spell Item: Expose Armor (#8647)", 7508647},
    {"Trainer Spell Item: Ambush (#8676)", 7508676},
    {"Trainer Spell Item: Sprint (#8696)", 7508696},
    {"Trainer Spell Item: Backstab (#8721)", 7508721},
    {"Trainer Spell Item: Ambush (#8724)", 7508724},
    {"Trainer Spell Item: Ambush (#8725)", 7508725},
    {"Trainer Spell Item: Mail (#8737)", 7508737},
    {"Trainer Spell Item: Slam (#8820)", 7508820},
    {"Trainer Spell Item: Healing Touch (#8903)", 7508903},
    {"Trainer Spell Item: Wrath (#8905)", 7508905},
    {"Trainer Spell Item: Mark of the Wild (#8907)", 7508907},
    {"Trainer Spell Item: Rejuvenation (#8910)", 7508910},
    {"Trainer Spell Item: Thorns (#8914)", 7508914},
    {"Trainer Spell Item: Tranquility (#8918)", 7508918},
    {"Trainer Spell Item: Moonfire (#8921)", 7508921},
    {"Trainer Spell Item: Moonfire (#8924)", 7508924},
    {"Trainer Spell Item: Moonfire (#8925)", 7508925},
    {"Trainer Spell Item: Moonfire (#8926)", 7508926},
    {"Trainer Spell Item: Moonfire (#8927)", 7508927},
    {"Trainer Spell Item: Moonfire (#8928)", 7508928},
    {"Trainer Spell Item: Moonfire (#8929)", 7508929},
    {"Trainer Spell Item: Regrowth (#8936)", 7508936},
    {"Trainer Spell Item: Regrowth (#8938)", 7508938},
    {"Trainer Spell Item: Regrowth (#8939)", 7508939},
    {"Trainer Spell Item: Regrowth (#8940)", 7508940},
    {"Trainer Spell Item: Regrowth (#8941)", 7508941},
    {"Trainer Spell Item: Starfire (#8949)", 7508949},
    {"Trainer Spell Item: Starfire (#8950)", 7508950},
    {"Trainer Spell Item: Starfire (#8951)", 7508951},
    {"Trainer Spell Item: Soothe Animal (#8955)", 7508955},
    {"Trainer Spell Item: Maul (#8972)", 7508972},
    {"Trainer Spell Item: Bash (#8983)", 7508983},
    {"Trainer Spell Item: Shred (#8992)", 7508992},
    {"Trainer Spell Item: Cower (#8998)", 7508998},
    {"Trainer Spell Item: Cower (#9000)", 7509000},
    {"Trainer Spell Item: Pounce (#9005)", 7509005},
    {"Trainer Spell Item: Flash Heal (#9472)", 7509472},
    {"Trainer Spell Item: Flash Heal (#9473)", 7509473},
    {"Trainer Spell Item: Flash Heal (#9474)", 7509474},
    {"Trainer Spell Item: Shackle Undead (#9484)", 7509484},
    {"Trainer Spell Item: Shackle Undead (#9485)", 7509485},
    {"Trainer Spell Item: Demoralizing Roar (#9490)", 7509490},
    {"Trainer Spell Item: Rip (#9492)", 7509492},
    {"Trainer Spell Item: Rip (#9493)", 7509493},
    {"Trainer Spell Item: Dire Bear Form (#9634)", 7509634},
    {"Trainer Spell Item: Maul (#9745)", 7509745},
    {"Trainer Spell Item: Demoralizing Roar (#9747)", 7509747},
    {"Trainer Spell Item: Regrowth (#9750)", 7509750},
    {"Trainer Spell Item: Rip (#9752)", 7509752},
    {"Trainer Spell Item: Swipe (Bear) (#9754)", 7509754},
    {"Trainer Spell Item: Thorns (#9756)", 7509756},
    {"Trainer Spell Item: Healing Touch (#9758)", 7509758},
    {"Trainer Spell Item: Dash (#9821)", 7509821},
    {"Trainer Spell Item: Pounce (#9823)", 7509823},
    {"Trainer Spell Item: Pounce (#9827)", 7509827},
    {"Trainer Spell Item: Shred (#9829)", 7509829},
    {"Trainer Spell Item: Shred (#9830)", 7509830},
    {"Trainer Spell Item: Moonfire (#9833)", 7509833},
    {"Trainer Spell Item: Moonfire (#9834)", 7509834},
    {"Trainer Spell Item: Moonfire (#9835)", 7509835},
    {"Trainer Spell Item: Rejuvenation (#9839)", 7509839},
    {"Trainer Spell Item: Rejuvenation (#9840)", 7509840},
    {"Trainer Spell Item: Rejuvenation (#9841)", 7509841},
    {"Trainer Spell Item: Tiger's Fury (#9845)", 7509845},
    {"Trainer Spell Item: Tiger's Fury (#9846)", 7509846},
    {"Trainer Spell Item: Claw (#9849)", 7509849},
    {"Trainer Spell Item: Claw (#9850)", 7509850},
    {"Trainer Spell Item: Entangling Roots (#9852)", 7509852},
    {"Trainer Spell Item: Entangling Roots (#9853)", 7509853},
    {"Trainer Spell Item: Regrowth (#9856)", 7509856},
    {"Trainer Spell Item: Regrowth (#9857)", 7509857},
    {"Trainer Spell Item: Regrowth (#9858)", 7509858},
    {"Trainer Spell Item: Tranquility (#9862)", 7509862},
    {"Trainer Spell Item: Tranquility (#9863)", 7509863},
    {"Trainer Spell Item: Ravage (#9866)", 7509866},
    {"Trainer Spell Item: Ravage (#9867)", 7509867},
    {"Trainer Spell Item: Starfire (#9875)", 7509875},
    {"Trainer Spell Item: Starfire (#9876)", 7509876},
    {"Trainer Spell Item: Maul (#9880)", 7509880},
    {"Trainer Spell Item: Maul (#9881)", 7509881},
    {"Trainer Spell Item: Mark of the Wild (#9884)", 7509884},
    {"Trainer Spell Item: Mark of the Wild (#9885)", 7509885},
    {"Trainer Spell Item: Healing Touch (#9888)", 7509888},
    {"Trainer Spell Item: Healing Touch (#9889)", 7509889},
    {"Trainer Spell Item: Cower (#9892)", 7509892},
    {"Trainer Spell Item: Rip (#9894)", 7509894},
    {"Trainer Spell Item: Rip (#9896)", 7509896},
    {"Trainer Spell Item: Demoralizing Roar (#9898)", 7509898},
    {"Trainer Spell Item: Soothe Animal (#9901)", 7509901},
    {"Trainer Spell Item: Rake (#9904)", 7509904},
    {"Trainer Spell Item: Swipe (Bear) (#9908)", 7509908},
    {"Trainer Spell Item: Thorns (#9910)", 7509910},
    {"Trainer Spell Item: Wrath (#9912)", 7509912},
    {"Trainer Spell Item: Conjure Mana Gem (#10053)", 7510053},
    {"Trainer Spell Item: Conjure Mana Gem (#10054)", 7510054},
    {"Trainer Spell Item: Portal: Stormwind (#10059)", 7510059},
    {"Trainer Spell Item: Conjure Water (#10138)", 7510138},
    {"Trainer Spell Item: Conjure Water (#10139)", 7510139},
    {"Trainer Spell Item: Conjure Water (#10140)", 7510140},
    {"Trainer Spell Item: Conjure Food (#10144)", 7510144},
    {"Trainer Spell Item: Conjure Food (#10145)", 7510145},
    {"Trainer Spell Item: Fireball (#10148)", 7510148},
    {"Trainer Spell Item: Fireball (#10149)", 7510149},
    {"Trainer Spell Item: Fireball (#10150)", 7510150},
    {"Trainer Spell Item: Fireball (#10151)", 7510151},
    {"Trainer Spell Item: Arcane Intellect (#10156)", 7510156},
    {"Trainer Spell Item: Arcane Intellect (#10157)", 7510157},
    {"Trainer Spell Item: Cone of Cold (#10159)", 7510159},
    {"Trainer Spell Item: Cone of Cold (#10160)", 7510160},
    {"Trainer Spell Item: Cone of Cold (#10161)", 7510161},
    {"Trainer Spell Item: Amplify Magic (#10169)", 7510169},
    {"Trainer Spell Item: Amplify Magic (#10170)", 7510170},
    {"Trainer Spell Item: Dampen Magic (#10173)", 7510173},
    {"Trainer Spell Item: Dampen Magic (#10174)", 7510174},
    {"Trainer Spell Item: Frost Ward (#10177)", 7510177},
    {"Trainer Spell Item: Frostbolt (#10179)", 7510179},
    {"Trainer Spell Item: Frostbolt (#10180)", 7510180},
    {"Trainer Spell Item: Frostbolt (#10181)", 7510181},
    {"Trainer Spell Item: Blizzard (#10185)", 7510185},
    {"Trainer Spell Item: Blizzard (#10186)", 7510186},
    {"Trainer Spell Item: Blizzard (#10187)", 7510187},
    {"Trainer Spell Item: Mana Shield (#10191)", 7510191},
    {"Trainer Spell Item: Mana Shield (#10192)", 7510192},
    {"Trainer Spell Item: Mana Shield (#10193)", 7510193},
    {"Trainer Spell Item: Fire Blast (#10197)", 7510197},
    {"Trainer Spell Item: Fire Blast (#10199)", 7510199},
    {"Trainer Spell Item: Arcane Explosion (#10201)", 7510201},
    {"Trainer Spell Item: Arcane Explosion (#10202)", 7510202},
    {"Trainer Spell Item: Scorch (#10205)", 7510205},
    {"Trainer Spell Item: Scorch (#10206)", 7510206},
    {"Trainer Spell Item: Scorch (#10207)", 7510207},
    {"Trainer Spell Item: Arcane Missiles (#10211)", 7510211},
    {"Trainer Spell Item: Arcane Missiles (#10212)", 7510212},
    {"Trainer Spell Item: Flamestrike (#10215)", 7510215},
    {"Trainer Spell Item: Flamestrike (#10216)", 7510216},
    {"Trainer Spell Item: Ice Armor (#10219)", 7510219},
    {"Trainer Spell Item: Ice Armor (#10220)", 7510220},
    {"Trainer Spell Item: Fire Ward (#10223)", 7510223},
    {"Trainer Spell Item: Fire Ward (#10225)", 7510225},
    {"Trainer Spell Item: Frost Nova (#10230)", 7510230},
    {"Trainer Spell Item: Hand of Protection (#10278)", 7510278},
    {"Trainer Spell Item: Devotion Aura (#10290)", 7510290},
    {"Trainer Spell Item: Devotion Aura (#10291)", 7510291},
    {"Trainer Spell Item: Devotion Aura (#10292)", 7510292},
    {"Trainer Spell Item: Devotion Aura (#10293)", 7510293},
    {"Trainer Spell Item: Retribution Aura (#10298)", 7510298},
    {"Trainer Spell Item: Retribution Aura (#10299)", 7510299},
    {"Trainer Spell Item: Retribution Aura (#10300)", 7510300},
    {"Trainer Spell Item: Retribution Aura (#10301)", 7510301},
    {"Trainer Spell Item: Hammer of Justice (#10308)", 7510308},
    {"Trainer Spell Item: Lay on Hands (#10310)", 7510310},
    {"Trainer Spell Item: Exorcism (#10312)", 7510312},
    {"Trainer Spell Item: Exorcism (#10313)", 7510313},
    {"Trainer Spell Item: Exorcism (#10314)", 7510314},
    {"Trainer Spell Item: Holy Wrath (#10318)", 7510318},
    {"Trainer Spell Item: Judgement (#10321)", 7510321},
    {"Trainer Spell Item: Redemption (#10322)", 7510322},
    {"Trainer Spell Item: Redemption (#10324)", 7510324},
    {"Trainer Spell Item: Turn Evil (#10326)", 7510326},
    {"Trainer Spell Item: Holy Light (#10328)", 7510328},
    {"Trainer Spell Item: Holy Light (#10329)", 7510329},
    {"Trainer Spell Item: Lightning Bolt (#10391)", 7510391},
    {"Trainer Spell Item: Lightning Bolt (#10392)", 7510392},
    {"Trainer Spell Item: Healing Wave (#10395)", 7510395},
    {"Trainer Spell Item: Healing Wave (#10396)", 7510396},
    {"Trainer Spell Item: Rockbiter Weapon (#10399)", 7510399},
    {"Trainer Spell Item: Stoneskin Totem (#10406)", 7510406},
    {"Trainer Spell Item: Stoneskin Totem (#10407)", 7510407},
    {"Trainer Spell Item: Stoneskin Totem (#10408)", 7510408},
    {"Trainer Spell Item: Earth Shock (#10412)", 7510412},
    {"Trainer Spell Item: Earth Shock (#10413)", 7510413},
    {"Trainer Spell Item: Earth Shock (#10414)", 7510414},
    {"Trainer Spell Item: Stoneclaw Totem (#10427)", 7510427},
    {"Trainer Spell Item: Stoneclaw Totem (#10428)", 7510428},
    {"Trainer Spell Item: Lightning Shield (#10431)", 7510431},
    {"Trainer Spell Item: Lightning Shield (#10432)", 7510432},
    {"Trainer Spell Item: Searing Totem (#10437)", 7510437},
    {"Trainer Spell Item: Searing Totem (#10438)", 7510438},
    {"Trainer Spell Item: Strength of Earth Totem (#10442)", 7510442},
    {"Trainer Spell Item: Flame Shock (#10447)", 7510447},
    {"Trainer Spell Item: Flame Shock (#10448)", 7510448},
    {"Trainer Spell Item: Frostbrand Weapon (#10456)", 7510456},
    {"Trainer Spell Item: Healing Stream Totem (#10462)", 7510462},
    {"Trainer Spell Item: Healing Stream Totem (#10463)", 7510463},
    {"Trainer Spell Item: Lesser Healing Wave (#10466)", 7510466},
    {"Trainer Spell Item: Lesser Healing Wave (#10467)", 7510467},
    {"Trainer Spell Item: Lesser Healing Wave (#10468)", 7510468},
    {"Trainer Spell Item: Frost Shock (#10472)", 7510472},
    {"Trainer Spell Item: Frost Shock (#10473)", 7510473},
    {"Trainer Spell Item: Frost Resistance Totem (#10478)", 7510478},
    {"Trainer Spell Item: Frost Resistance Totem (#10479)", 7510479},
    {"Trainer Spell Item: Windfury Weapon (#10486)", 7510486},
    {"Trainer Spell Item: Mana Spring Totem (#10495)", 7510495},
    {"Trainer Spell Item: Mana Spring Totem (#10496)", 7510496},
    {"Trainer Spell Item: Mana Spring Totem (#10497)", 7510497},
    {"Trainer Spell Item: Flametongue Totem (#10526)", 7510526},
    {"Trainer Spell Item: Fire Resistance Totem (#10537)", 7510537},
    {"Trainer Spell Item: Fire Resistance Totem (#10538)", 7510538},
    {"Trainer Spell Item: Magma Totem (#10585)", 7510585},
    {"Trainer Spell Item: Magma Totem (#10586)", 7510586},
    {"Trainer Spell Item: Magma Totem (#10587)", 7510587},
    {"Trainer Spell Item: Nature Resistance Totem (#10595)", 7510595},
    {"Trainer Spell Item: Nature Resistance Totem (#10600)", 7510600},
    {"Trainer Spell Item: Nature Resistance Totem (#10601)", 7510601},
    {"Trainer Spell Item: Chain Lightning (#10605)", 7510605},
    {"Trainer Spell Item: Chain Heal (#10622)", 7510622},
    {"Trainer Spell Item: Chain Heal (#10623)", 7510623},
    {"Trainer Spell Item: Resurrection (#10880)", 7510880},
    {"Trainer Spell Item: Resurrection (#10881)", 7510881},
    {"Trainer Spell Item: Psychic Scream (#10888)", 7510888},
    {"Trainer Spell Item: Psychic Scream (#10890)", 7510890},
    {"Trainer Spell Item: Shadow Word: Pain (#10892)", 7510892},
    {"Trainer Spell Item: Shadow Word: Pain (#10893)", 7510893},
    {"Trainer Spell Item: Shadow Word: Pain (#10894)", 7510894},
    {"Trainer Spell Item: Power Word: Shield (#10898)", 7510898},
    {"Trainer Spell Item: Power Word: Shield (#10899)", 7510899},
    {"Trainer Spell Item: Power Word: Shield (#10900)", 7510900},
    {"Trainer Spell Item: Power Word: Shield (#10901)", 7510901},
    {"Trainer Spell Item: Mind Vision (#10909)", 7510909},
    {"Trainer Spell Item: Flash Heal (#10915)", 7510915},
    {"Trainer Spell Item: Flash Heal (#10916)", 7510916},
    {"Trainer Spell Item: Flash Heal (#10917)", 7510917},
    {"Trainer Spell Item: Renew (#10927)", 7510927},
    {"Trainer Spell Item: Renew (#10928)", 7510928},
    {"Trainer Spell Item: Renew (#10929)", 7510929},
    {"Trainer Spell Item: Smite (#10933)", 7510933},
    {"Trainer Spell Item: Smite (#10934)", 7510934},
    {"Trainer Spell Item: Power Word: Fortitude (#10937)", 7510937},
    {"Trainer Spell Item: Power Word: Fortitude (#10938)", 7510938},
    {"Trainer Spell Item: Mind Blast (#10945)", 7510945},
    {"Trainer Spell Item: Mind Blast (#10946)", 7510946},
    {"Trainer Spell Item: Mind Blast (#10947)", 7510947},
    {"Trainer Spell Item: Inner Fire (#10951)", 7510951},
    {"Trainer Spell Item: Inner Fire (#10952)", 7510952},
    {"Trainer Spell Item: Shackle Undead (#10955)", 7510955},
    {"Trainer Spell Item: Shadow Protection (#10957)", 7510957},
    {"Trainer Spell Item: Shadow Protection (#10958)", 7510958},
    {"Trainer Spell Item: Prayer of Healing (#10960)", 7510960},
    {"Trainer Spell Item: Prayer of Healing (#10961)", 7510961},
    {"Trainer Spell Item: Greater Heal (#10963)", 7510963},
    {"Trainer Spell Item: Greater Heal (#10964)", 7510964},
    {"Trainer Spell Item: Greater Heal (#10965)", 7510965},
    {"Trainer Spell Item: Ambush (#11267)", 7511267},
    {"Trainer Spell Item: Ambush (#11268)", 7511268},
    {"Trainer Spell Item: Ambush (#11269)", 7511269},
    {"Trainer Spell Item: Rupture (#11273)", 7511273},
    {"Trainer Spell Item: Rupture (#11274)", 7511274},
    {"Trainer Spell Item: Rupture (#11275)", 7511275},
    {"Trainer Spell Item: Backstab (#11279)", 7511279},
    {"Trainer Spell Item: Backstab (#11280)", 7511280},
    {"Trainer Spell Item: Backstab (#11281)", 7511281},
    {"Trainer Spell Item: Garrote (#11289)", 7511289},
    {"Trainer Spell Item: Garrote (#11290)", 7511290},
    {"Trainer Spell Item: Sinister Strike (#11293)", 7511293},
    {"Trainer Spell Item: Sinister Strike (#11294)", 7511294},
    {"Trainer Spell Item: Sap (#11297)", 7511297},
    {"Trainer Spell Item: Eviscerate (#11299)", 7511299},
    {"Trainer Spell Item: Eviscerate (#11300)", 7511300},
    {"Trainer Spell Item: Feint (#11303)", 7511303},
    {"Trainer Spell Item: Sprint (#11305)", 7511305},
    {"Trainer Spell Item: Fire Nova (#11314)", 7511314},
    {"Trainer Spell Item: Fire Nova (#11315)", 7511315},
    {"Trainer Spell Item: Portal: Ironforge (#11416)", 7511416},
    {"Trainer Spell Item: Portal: Orgrimmar (#11417)", 7511417},
    {"Trainer Spell Item: Portal: Undercity (#11418)", 7511418},
    {"Trainer Spell Item: Portal: Darnassus (#11419)", 7511419},
    {"Trainer Spell Item: Portal: Thunder Bluff (#11420)", 7511420},
    {"Trainer Spell Item: Battle Shout (#11549)", 7511549},
    {"Trainer Spell Item: Battle Shout (#11550)", 7511550},
    {"Trainer Spell Item: Battle Shout (#11551)", 7511551},
    {"Trainer Spell Item: Demoralizing Shout (#11554)", 7511554},
    {"Trainer Spell Item: Demoralizing Shout (#11555)", 7511555},
    {"Trainer Spell Item: Demoralizing Shout (#11556)", 7511556},
    {"Trainer Spell Item: Heroic Strike (#11564)", 7511564},
    {"Trainer Spell Item: Heroic Strike (#11565)", 7511565},
    {"Trainer Spell Item: Heroic Strike (#11566)", 7511566},
    {"Trainer Spell Item: Heroic Strike (#11567)", 7511567},
    {"Trainer Spell Item: Rend (#11572)", 7511572},
    {"Trainer Spell Item: Rend (#11573)", 7511573},
    {"Trainer Spell Item: Rend (#11574)", 7511574},
    {"Trainer Spell Item: Charge (#11578)", 7511578},
    {"Trainer Spell Item: Thunder Clap (#11580)", 7511580},
    {"Trainer Spell Item: Thunder Clap (#11581)", 7511581},
    {"Trainer Spell Item: Revenge (#11600)", 7511600},
    {"Trainer Spell Item: Revenge (#11601)", 7511601},
    {"Trainer Spell Item: Slam (#11604)", 7511604},
    {"Trainer Spell Item: Slam (#11605)", 7511605},
    {"Trainer Spell Item: Cleave (#11608)", 7511608},
    {"Trainer Spell Item: Cleave (#11609)", 7511609},
    {"Trainer Spell Item: Shadow Bolt (#11659)", 7511659},
    {"Trainer Spell Item: Shadow Bolt (#11660)", 7511660},
    {"Trainer Spell Item: Shadow Bolt (#11661)", 7511661},
    {"Trainer Spell Item: Immolate (#11665)", 7511665},
    {"Trainer Spell Item: Immolate (#11667)", 7511667},
    {"Trainer Spell Item: Immolate (#11668)", 7511668},
    {"Trainer Spell Item: Corruption (#11671)", 7511671},
    {"Trainer Spell Item: Corruption (#11672)", 7511672},
    {"Trainer Spell Item: Drain Soul (#11675)", 7511675},
    {"Trainer Spell Item: Rain of Fire (#11677)", 7511677},
    {"Trainer Spell Item: Rain of Fire (#11678)", 7511678},
    {"Trainer Spell Item: Hellfire (#11683)", 7511683},
    {"Trainer Spell Item: Hellfire (#11684)", 7511684},
    {"Trainer Spell Item: Life Tap (#11687)", 7511687},
    {"Trainer Spell Item: Life Tap (#11688)", 7511688},
    {"Trainer Spell Item: Life Tap (#11689)", 7511689},
    {"Trainer Spell Item: Health Funnel (#11693)", 7511693},
    {"Trainer Spell Item: Health Funnel (#11694)", 7511694},
    {"Trainer Spell Item: Health Funnel (#11695)", 7511695},
    {"Trainer Spell Item: Drain Life (#11699)", 7511699},
    {"Trainer Spell Item: Drain Life (#11700)", 7511700},
    {"Trainer Spell Item: Curse of Weakness (#11707)", 7511707},
    {"Trainer Spell Item: Curse of Weakness (#11708)", 7511708},
    {"Trainer Spell Item: Curse of Agony (#11711)", 7511711},
    {"Trainer Spell Item: Curse of Agony (#11712)", 7511712},
    {"Trainer Spell Item: Curse of Agony (#11713)", 7511713},
    {"Trainer Spell Item: Curse of Tongues (#11719)", 7511719},
    {"Trainer Spell Item: Curse of the Elements (#11721)", 7511721},
    {"Trainer Spell Item: Curse of the Elements (#11722)", 7511722},
    {"Trainer Spell Item: Enslave Demon (#11725)", 7511725},
    {"Trainer Spell Item: Enslave Demon (#11726)", 7511726},
    {"Trainer Spell Item: Create Healthstone (#11729)", 7511729},
    {"Trainer Spell Item: Create Healthstone (#11730)", 7511730},
    {"Trainer Spell Item: Demon Armor (#11733)", 7511733},
    {"Trainer Spell Item: Demon Armor (#11734)", 7511734},
    {"Trainer Spell Item: Demon Armor (#11735)", 7511735},
    {"Trainer Spell Item: Shadow Ward (#11739)", 7511739},
    {"Trainer Spell Item: Shadow Ward (#11740)", 7511740},
    {"Trainer Spell Item: Evocation (#12051)", 7512051},
    {"Trainer Spell Item: Pyroblast (#12505)", 7512505},
    {"Trainer Spell Item: Pyroblast (#12522)", 7512522},
    {"Trainer Spell Item: Pyroblast (#12523)", 7512523},
    {"Trainer Spell Item: Pyroblast (#12524)", 7512524},
    {"Trainer Spell Item: Pyroblast (#12525)", 7512525},
    {"Trainer Spell Item: Pyroblast (#12526)", 7512526},
    {"Trainer Spell Item: Stance Mastery (#12678)", 7512678},
    {"Trainer Spell Item: Polymorph (#12824)", 7512824},
    {"Trainer Spell Item: Polymorph (#12825)", 7512825},
    {"Trainer Spell Item: Polymorph (#12826)", 7512826},
    {"Trainer Spell Item: Blast Wave (#13018)", 7513018},
    {"Trainer Spell Item: Blast Wave (#13019)", 7513019},
    {"Trainer Spell Item: Blast Wave (#13020)", 7513020},
    {"Trainer Spell Item: Blast Wave (#13021)", 7513021},
    {"Trainer Spell Item: Ice Barrier (#13031)", 7513031},
    {"Trainer Spell Item: Ice Barrier (#13032)", 7513032},
    {"Trainer Spell Item: Ice Barrier (#13033)", 7513033},
    {"Trainer Spell Item: Aspect of the Pack (#13159)", 7513159},
    {"Trainer Spell Item: Aspect of the Beast (#13161)", 7513161},
    {"Trainer Spell Item: Aspect of the Monkey (#13163)", 7513163},
    {"Trainer Spell Item: Aspect of the Hawk (#13165)", 7513165},
    {"Trainer Spell Item: Mend Pet (#13542)", 7513542},
    {"Trainer Spell Item: Mend Pet (#13543)", 7513543},
    {"Trainer Spell Item: Mend Pet (#13544)", 7513544},
    {"Trainer Spell Item: Serpent Sting (#13549)", 7513549},
    {"Trainer Spell Item: Serpent Sting (#13550)", 7513550},
    {"Trainer Spell Item: Serpent Sting (#13551)", 7513551},
    {"Trainer Spell Item: Serpent Sting (#13552)", 7513552},
    {"Trainer Spell Item: Serpent Sting (#13553)", 7513553},
    {"Trainer Spell Item: Serpent Sting (#13554)", 7513554},
    {"Trainer Spell Item: Serpent Sting (#13555)", 7513555},
    {"Trainer Spell Item: Immolation Trap (#13795)", 7513795},
    {"Trainer Spell Item: Frost Trap (#13809)", 7513809},
    {"Trainer Spell Item: Explosive Trap (#13813)", 7513813},
    {"Trainer Spell Item: Summon Warhorse (#13820)", 7513820},
    {"Trainer Spell Item: Raptor Strike (#14260)", 7514260},
    {"Trainer Spell Item: Raptor Strike (#14261)", 7514261},
    {"Trainer Spell Item: Raptor Strike (#14262)", 7514262},
    {"Trainer Spell Item: Raptor Strike (#14263)", 7514263},
    {"Trainer Spell Item: Raptor Strike (#14264)", 7514264},
    {"Trainer Spell Item: Raptor Strike (#14265)", 7514265},
    {"Trainer Spell Item: Raptor Strike (#14266)", 7514266},
    {"Trainer Spell Item: Mongoose Bite (#14269)", 7514269},
    {"Trainer Spell Item: Mongoose Bite (#14270)", 7514270},
    {"Trainer Spell Item: Mongoose Bite (#14271)", 7514271},
    {"Trainer Spell Item: Arcane Shot (#14281)", 7514281},
    {"Trainer Spell Item: Arcane Shot (#14282)", 7514282},
    {"Trainer Spell Item: Arcane Shot (#14283)", 7514283},
    {"Trainer Spell Item: Arcane Shot (#14284)", 7514284},
    {"Trainer Spell Item: Arcane Shot (#14285)", 7514285},
    {"Trainer Spell Item: Arcane Shot (#14286)", 7514286},
    {"Trainer Spell Item: Arcane Shot (#14287)", 7514287},
    {"Trainer Spell Item: Multi-Shot (#14288)", 7514288},
    {"Trainer Spell Item: Multi-Shot (#14289)", 7514289},
    {"Trainer Spell Item: Multi-Shot (#14290)", 7514290},
    {"Trainer Spell Item: Volley (#14294)", 7514294},
    {"Trainer Spell Item: Volley (#14295)", 7514295},
    {"Trainer Spell Item: Immolation Trap (#14302)", 7514302},
    {"Trainer Spell Item: Immolation Trap (#14303)", 7514303},
    {"Trainer Spell Item: Immolation Trap (#14304)", 7514304},
    {"Trainer Spell Item: Immolation Trap (#14305)", 7514305},
    {"Trainer Spell Item: Freezing Trap (#14310)", 7514310},
    {"Trainer Spell Item: Freezing Trap (#14311)", 7514311},
    {"Trainer Spell Item: Explosive Trap (#14316)", 7514316},
    {"Trainer Spell Item: Explosive Trap (#14317)", 7514317},
    {"Trainer Spell Item: Aspect of the Hawk (#14318)", 7514318},
    {"Trainer Spell Item: Aspect of the Hawk (#14319)", 7514319},
    {"Trainer Spell Item: Aspect of the Hawk (#14320)", 7514320},
    {"Trainer Spell Item: Aspect of the Hawk (#14321)", 7514321},
    {"Trainer Spell Item: Aspect of the Hawk (#14322)", 7514322},
    {"Trainer Spell Item: Hunter's Mark (#14323)", 7514323},
    {"Trainer Spell Item: Hunter's Mark (#14324)", 7514324},
    {"Trainer Spell Item: Hunter's Mark (#14325)", 7514325},
    {"Trainer Spell Item: Scare Beast (#14326)", 7514326},
    {"Trainer Spell Item: Scare Beast (#14327)", 7514327},
    {"Trainer Spell Item: Divine Spirit (#14752)", 7514752},
    {"Trainer Spell Item: Divine Spirit (#14818)", 7514818},
    {"Trainer Spell Item: Divine Spirit (#14819)", 7514819},
    {"Trainer Spell Item: Holy Fire (#14914)", 7514914},
    {"Trainer Spell Item: Lightning Bolt (#15207)", 7515207},
    {"Trainer Spell Item: Lightning Bolt (#15208)", 7515208},
    {"Trainer Spell Item: Holy Nova (#15237)", 7515237},
    {"Trainer Spell Item: Holy Fire (#15261)", 7515261},
    {"Trainer Spell Item: Holy Fire (#15262)", 7515262},
    {"Trainer Spell Item: Holy Fire (#15263)", 7515263},
    {"Trainer Spell Item: Holy Fire (#15264)", 7515264},
    {"Trainer Spell Item: Holy Fire (#15265)", 7515265},
    {"Trainer Spell Item: Holy Fire (#15266)", 7515266},
    {"Trainer Spell Item: Holy Fire (#15267)", 7515267},
    {"Trainer Spell Item: Holy Nova (#15430)", 7515430},
    {"Trainer Spell Item: Holy Nova (#15431)", 7515431},
    {"Trainer Spell Item: Flametongue Weapon (#16339)", 7516339},
    {"Trainer Spell Item: Flametongue Weapon (#16341)", 7516341},
    {"Trainer Spell Item: Flametongue Weapon (#16342)", 7516342},
    {"Trainer Spell Item: Frostbrand Weapon (#16355)", 7516355},
    {"Trainer Spell Item: Frostbrand Weapon (#16356)", 7516356},
    {"Trainer Spell Item: Windfury Weapon (#16362)", 7516362},
    {"Trainer Spell Item: Flametongue Totem (#16387)", 7516387},
    {"Trainer Spell Item: Nature's Grasp (#16689)", 7516689},
    {"Trainer Spell Item: Nature's Grasp (#16810)", 7516810},
    {"Trainer Spell Item: Nature's Grasp (#16811)", 7516811},
    {"Trainer Spell Item: Nature's Grasp (#16812)", 7516812},
    {"Trainer Spell Item: Nature's Grasp (#16813)", 7516813},
    {"Trainer Spell Item: Faerie Fire (Feral) (#16857)", 7516857},
    {"Trainer Spell Item: Hurricane (#16914)", 7516914},
    {"Trainer Spell Item: Mind Flay (#17311)", 7517311},
    {"Trainer Spell Item: Mind Flay (#17312)", 7517312},
    {"Trainer Spell Item: Mind Flay (#17313)", 7517313},
    {"Trainer Spell Item: Mind Flay (#17314)", 7517314},
    {"Trainer Spell Item: Nature's Grasp (#17329)", 7517329},
    {"Trainer Spell Item: Hemorrhage (#17347)", 7517347},
    {"Trainer Spell Item: Hemorrhage (#17348)", 7517348},
    {"Trainer Spell Item: Hurricane (#17401)", 7517401},
    {"Trainer Spell Item: Hurricane (#17402)", 7517402},
    {"Trainer Spell Item: Create Spellstone (#17727)", 7517727},
    {"Trainer Spell Item: Create Spellstone (#17728)", 7517728},
    {"Trainer Spell Item: Searing Pain (#17919)", 7517919},
    {"Trainer Spell Item: Searing Pain (#17920)", 7517920},
    {"Trainer Spell Item: Searing Pain (#17921)", 7517921},
    {"Trainer Spell Item: Searing Pain (#17922)", 7517922},
    {"Trainer Spell Item: Searing Pain (#17923)", 7517923},
    {"Trainer Spell Item: Soul Fire (#17924)", 7517924},
    {"Trainer Spell Item: Death Coil (#17925)", 7517925},
    {"Trainer Spell Item: Death Coil (#17926)", 7517926},
    {"Trainer Spell Item: Howl of Terror (#17928)", 7517928},
    {"Trainer Spell Item: Create Firestone (#17951)", 7517951},
    {"Trainer Spell Item: Create Firestone (#17952)", 7517952},
    {"Trainer Spell Item: Create Firestone (#17953)", 7517953},
    {"Trainer Spell Item: Berserker Rage (#18499)", 7518499},
    {"Trainer Spell Item: Banish (#18647)", 7518647},
    {"Trainer Spell Item: Hibernate (#18657)", 7518657},
    {"Trainer Spell Item: Hibernate (#18658)", 7518658},
    {"Trainer Spell Item: Mind Flay (#18807)", 7518807},
    {"Trainer Spell Item: Pyroblast (#18809)", 7518809},
    {"Trainer Spell Item: Shadowburn (#18867)", 7518867},
    {"Trainer Spell Item: Shadowburn (#18868)", 7518868},
    {"Trainer Spell Item: Shadowburn (#18869)", 7518869},
    {"Trainer Spell Item: Shadowburn (#18870)", 7518870},
    {"Trainer Spell Item: Shadowburn (#18871)", 7518871},
    {"Trainer Spell Item: Dark Pact (#18937)", 7518937},
    {"Trainer Spell Item: Dark Pact (#18938)", 7518938},
    {"Trainer Spell Item: Desperate Prayer (#19238)", 7519238},
    {"Trainer Spell Item: Desperate Prayer (#19240)", 7519240},
    {"Trainer Spell Item: Desperate Prayer (#19241)", 7519241},
    {"Trainer Spell Item: Desperate Prayer (#19242)", 7519242},
    {"Trainer Spell Item: Desperate Prayer (#19243)", 7519243},
    {"Trainer Spell Item: Deterrence (#19263)", 7519263},
    {"Trainer Spell Item: Devouring Plague (#19276)", 7519276},
    {"Trainer Spell Item: Devouring Plague (#19277)", 7519277},
    {"Trainer Spell Item: Devouring Plague (#19278)", 7519278},
    {"Trainer Spell Item: Devouring Plague (#19279)", 7519279},
    {"Trainer Spell Item: Devouring Plague (#19280)", 7519280},
    {"Trainer Spell Item: Blessing of Might (#19740)", 7519740},
    {"Trainer Spell Item: Blessing of Wisdom (#19742)", 7519742},
    {"Trainer Spell Item: Concentration Aura (#19746)", 7519746},
    {"Trainer Spell Item: Flash of Light (#19750)", 7519750},
    {"Trainer Spell Item: Divine Intervention (#19752)", 7519752},
    {"Trainer Spell Item: Blessing of Might (#19834)", 7519834},
    {"Trainer Spell Item: Blessing of Might (#19835)", 7519835},
    {"Trainer Spell Item: Blessing of Might (#19836)", 7519836},
    {"Trainer Spell Item: Blessing of Might (#19837)", 7519837},
    {"Trainer Spell Item: Blessing of Might (#19838)", 7519838},
    {"Trainer Spell Item: Blessing of Wisdom (#19850)", 7519850},
    {"Trainer Spell Item: Blessing of Wisdom (#19852)", 7519852},
    {"Trainer Spell Item: Blessing of Wisdom (#19853)", 7519853},
    {"Trainer Spell Item: Blessing of Wisdom (#19854)", 7519854},
    {"Trainer Spell Item: Shadow Resistance Aura (#19876)", 7519876},
    {"Trainer Spell Item: Track Demons (#19878)", 7519878},
    {"Trainer Spell Item: Track Dragonkin (#19879)", 7519879},
    {"Trainer Spell Item: Track Elementals (#19880)", 7519880},
    {"Trainer Spell Item: Track Giants (#19882)", 7519882},
    {"Trainer Spell Item: Track Humanoids (#19883)", 7519883},
    {"Trainer Spell Item: Track Undead (#19884)", 7519884},
    {"Trainer Spell Item: Track Hidden (#19885)", 7519885},
    {"Trainer Spell Item: Frost Resistance Aura (#19888)", 7519888},
    {"Trainer Spell Item: Fire Resistance Aura (#19891)", 7519891},
    {"Trainer Spell Item: Shadow Resistance Aura (#19895)", 7519895},
    {"Trainer Spell Item: Shadow Resistance Aura (#19896)", 7519896},
    {"Trainer Spell Item: Frost Resistance Aura (#19897)", 7519897},
    {"Trainer Spell Item: Frost Resistance Aura (#19898)", 7519898},
    {"Trainer Spell Item: Fire Resistance Aura (#19899)", 7519899},
    {"Trainer Spell Item: Fire Resistance Aura (#19900)", 7519900},
    {"Trainer Spell Item: Flash of Light (#19939)", 7519939},
    {"Trainer Spell Item: Flash of Light (#19940)", 7519940},
    {"Trainer Spell Item: Flash of Light (#19941)", 7519941},
    {"Trainer Spell Item: Flash of Light (#19942)", 7519942},
    {"Trainer Spell Item: Flash of Light (#19943)", 7519943},
    {"Trainer Spell Item: Aspect of the Wild (#20043)", 7520043},
    {"Trainer Spell Item: Consecration (#20116)", 7520116},
    {"Trainer Spell Item: Seal of Justice (#20164)", 7520164},
    {"Trainer Spell Item: Seal of Light (#20165)", 7520165},
    {"Trainer Spell Item: Seal of Wisdom (#20166)", 7520166},
    {"Trainer Spell Item: Aspect of the Wild (#20190)", 7520190},
    {"Trainer Spell Item: Blessing of Kings (#20217)", 7520217},
    {"Trainer Spell Item: Retaliation (#20230)", 7520230},
    {"Trainer Spell Item: Intercept (#20252)", 7520252},
    {"Trainer Spell Item: Rebirth (#20484)", 7520484},
    {"Trainer Spell Item: Cleave (#20569)", 7520569},
    {"Trainer Spell Item: Reincarnation (#20608)", 7520608},
    {"Trainer Spell Item: Ancestral Spirit (#20609)", 7520609},
    {"Trainer Spell Item: Ancestral Spirit (#20610)", 7520610},
    {"Trainer Spell Item: Execute (#20658)", 7520658},
    {"Trainer Spell Item: Execute (#20660)", 7520660},
    {"Trainer Spell Item: Execute (#20661)", 7520661},
    {"Trainer Spell Item: Execute (#20662)", 7520662},
    {"Trainer Spell Item: Feline Grace (#20719)", 7520719},
    {"Trainer Spell Item: Distracting Shot (#20736)", 7520736},
    {"Trainer Spell Item: Rebirth (#20739)", 7520739},
    {"Trainer Spell Item: Rebirth (#20742)", 7520742},
    {"Trainer Spell Item: Rebirth (#20747)", 7520747},
    {"Trainer Spell Item: Rebirth (#20748)", 7520748},
    {"Trainer Spell Item: Create Soulstone (#20752)", 7520752},
    {"Trainer Spell Item: Create Soulstone (#20755)", 7520755},
    {"Trainer Spell Item: Create Soulstone (#20756)", 7520756},
    {"Trainer Spell Item: Create Soulstone (#20757)", 7520757},
    {"Trainer Spell Item: Resurrection (#20770)", 7520770},
    {"Trainer Spell Item: Redemption (#20772)", 7520772},
    {"Trainer Spell Item: Redemption (#20773)", 7520773},
    {"Trainer Spell Item: Ancestral Spirit (#20776)", 7520776},
    {"Trainer Spell Item: Ancestral Spirit (#20777)", 7520777},
    {"Trainer Spell Item: Aimed Shot (#20900)", 7520900},
    {"Trainer Spell Item: Aimed Shot (#20901)", 7520901},
    {"Trainer Spell Item: Aimed Shot (#20902)", 7520902},
    {"Trainer Spell Item: Aimed Shot (#20903)", 7520903},
    {"Trainer Spell Item: Aimed Shot (#20904)", 7520904},
    {"Trainer Spell Item: Counterattack (#20909)", 7520909},
    {"Trainer Spell Item: Counterattack (#20910)", 7520910},
    {"Trainer Spell Item: Consecration (#20922)", 7520922},
    {"Trainer Spell Item: Consecration (#20923)", 7520923},
    {"Trainer Spell Item: Consecration (#20924)", 7520924},
    {"Trainer Spell Item: Holy Shield (#20927)", 7520927},
    {"Trainer Spell Item: Holy Shield (#20928)", 7520928},
    {"Trainer Spell Item: Holy Shock (#20929)", 7520929},
    {"Trainer Spell Item: Holy Shock (#20930)", 7520930},
    {"Trainer Spell Item: Mortal Strike (#21551)", 7521551},
    {"Trainer Spell Item: Mortal Strike (#21552)", 7521552},
    {"Trainer Spell Item: Mortal Strike (#21553)", 7521553},
    {"Trainer Spell Item: Ferocious Bite (#22568)", 7522568},
    {"Trainer Spell Item: Maim (#22570)", 7522570},
    {"Trainer Spell Item: Mage Armor (#22782)", 7522782},
    {"Trainer Spell Item: Mage Armor (#22783)", 7522783},
    {"Trainer Spell Item: Barkskin (#22812)", 7522812},
    {"Trainer Spell Item: Ferocious Bite (#22827)", 7522827},
    {"Trainer Spell Item: Ferocious Bite (#22828)", 7522828},
    {"Trainer Spell Item: Ferocious Bite (#22829)", 7522829},
    {"Trainer Spell Item: Frenzied Regeneration (#22842)", 7522842},
    {"Trainer Spell Item: Dreadsteed (#23161)", 7523161},
    {"Trainer Spell Item: Charger (#23214)", 7523214},
    {"Trainer Spell Item: Spell Reflection (#23920)", 7523920},
    {"Trainer Spell Item: Shield Slam (#23922)", 7523922},
    {"Trainer Spell Item: Shield Slam (#23923)", 7523923},
    {"Trainer Spell Item: Shield Slam (#23924)", 7523924},
    {"Trainer Spell Item: Shield Slam (#23925)", 7523925},
    {"Trainer Spell Item: Wyvern Sting (#24132)", 7524132},
    {"Trainer Spell Item: Wyvern Sting (#24133)", 7524133},
    {"Trainer Spell Item: Hammer of Wrath (#24239)", 7524239},
    {"Trainer Spell Item: Ferocious Bite (#24248)", 7524248},
    {"Trainer Spell Item: Hammer of Wrath (#24274)", 7524274},
    {"Trainer Spell Item: Hammer of Wrath (#24275)", 7524275},
    {"Trainer Spell Item: Water Shield (#24398)", 7524398},
    {"Trainer Spell Item: Insect Swarm (#24974)", 7524974},
    {"Trainer Spell Item: Insect Swarm (#24975)", 7524975},
    {"Trainer Spell Item: Insect Swarm (#24976)", 7524976},
    {"Trainer Spell Item: Insect Swarm (#24977)", 7524977},
    {"Trainer Spell Item: Demoralizing Shout (#25202)", 7525202},
    {"Trainer Spell Item: Demoralizing Shout (#25203)", 7525203},
    {"Trainer Spell Item: Rend (#25208)", 7525208},
    {"Trainer Spell Item: Greater Heal (#25210)", 7525210},
    {"Trainer Spell Item: Greater Heal (#25213)", 7525213},
    {"Trainer Spell Item: Power Word: Shield (#25217)", 7525217},
    {"Trainer Spell Item: Power Word: Shield (#25218)", 7525218},
    {"Trainer Spell Item: Renew (#25221)", 7525221},
    {"Trainer Spell Item: Renew (#25222)", 7525222},
    {"Trainer Spell Item: Cleave (#25231)", 7525231},
    {"Trainer Spell Item: Flash Heal (#25233)", 7525233},
    {"Trainer Spell Item: Execute (#25234)", 7525234},
    {"Trainer Spell Item: Flash Heal (#25235)", 7525235},
    {"Trainer Spell Item: Execute (#25236)", 7525236},
    {"Trainer Spell Item: Slam (#25241)", 7525241},
    {"Trainer Spell Item: Slam (#25242)", 7525242},
    {"Trainer Spell Item: Mortal Strike (#25248)", 7525248},
    {"Trainer Spell Item: Shield Slam (#25258)", 7525258},
    {"Trainer Spell Item: Thunder Clap (#25264)", 7525264},
    {"Trainer Spell Item: Revenge (#25269)", 7525269},
    {"Trainer Spell Item: Prayer of Healing (#25308)", 7525308},
    {"Trainer Spell Item: Divine Spirit (#25312)", 7525312},
    {"Trainer Spell Item: Holy Nova (#25331)", 7525331},
    {"Trainer Spell Item: Smite (#25363)", 7525363},
    {"Trainer Spell Item: Smite (#25364)", 7525364},
    {"Trainer Spell Item: Shadow Word: Pain (#25367)", 7525367},
    {"Trainer Spell Item: Shadow Word: Pain (#25368)", 7525368},
    {"Trainer Spell Item: Mind Blast (#25372)", 7525372},
    {"Trainer Spell Item: Mind Blast (#25375)", 7525375},
    {"Trainer Spell Item: Holy Fire (#25384)", 7525384},
    {"Trainer Spell Item: Mind Flay (#25387)", 7525387},
    {"Trainer Spell Item: Power Word: Fortitude (#25389)", 7525389},
    {"Trainer Spell Item: Healing Wave (#25391)", 7525391},
    {"Trainer Spell Item: Healing Wave (#25396)", 7525396},
    {"Trainer Spell Item: Lesser Healing Wave (#25420)", 7525420},
    {"Trainer Spell Item: Chain Heal (#25422)", 7525422},
    {"Trainer Spell Item: Chain Heal (#25423)", 7525423},
    {"Trainer Spell Item: Inner Fire (#25431)", 7525431},
    {"Trainer Spell Item: Shadow Protection (#25433)", 7525433},
    {"Trainer Spell Item: Resurrection (#25435)", 7525435},
    {"Trainer Spell Item: Desperate Prayer (#25437)", 7525437},
    {"Trainer Spell Item: Chain Lightning (#25439)", 7525439},
    {"Trainer Spell Item: Chain Lightning (#25442)", 7525442},
    {"Trainer Spell Item: Lightning Bolt (#25448)", 7525448},
    {"Trainer Spell Item: Lightning Bolt (#25449)", 7525449},
    {"Trainer Spell Item: Earth Shock (#25454)", 7525454},
    {"Trainer Spell Item: Flame Shock (#25457)", 7525457},
    {"Trainer Spell Item: Frost Shock (#25464)", 7525464},
    {"Trainer Spell Item: Devouring Plague (#25467)", 7525467},
    {"Trainer Spell Item: Lightning Shield (#25469)", 7525469},
    {"Trainer Spell Item: Lightning Shield (#25472)", 7525472},
    {"Trainer Spell Item: Flametongue Weapon (#25489)", 7525489},
    {"Trainer Spell Item: Frostbrand Weapon (#25500)", 7525500},
    {"Trainer Spell Item: Windfury Weapon (#25505)", 7525505},
    {"Trainer Spell Item: Stoneskin Totem (#25508)", 7525508},
    {"Trainer Spell Item: Stoneskin Totem (#25509)", 7525509},
    {"Trainer Spell Item: Stoneclaw Totem (#25525)", 7525525},
    {"Trainer Spell Item: Strength of Earth Totem (#25528)", 7525528},
    {"Trainer Spell Item: Searing Totem (#25533)", 7525533},
    {"Trainer Spell Item: Fire Nova (#25546)", 7525546},
    {"Trainer Spell Item: Fire Nova (#25547)", 7525547},
    {"Trainer Spell Item: Magma Totem (#25552)", 7525552},
    {"Trainer Spell Item: Flametongue Totem (#25557)", 7525557},
    {"Trainer Spell Item: Frost Resistance Totem (#25560)", 7525560},
    {"Trainer Spell Item: Fire Resistance Totem (#25563)", 7525563},
    {"Trainer Spell Item: Healing Stream Totem (#25567)", 7525567},
    {"Trainer Spell Item: Mana Spring Totem (#25570)", 7525570},
    {"Trainer Spell Item: Nature Resistance Totem (#25574)", 7525574},
    {"Trainer Spell Item: Ancestral Spirit (#25590)", 7525590},
    {"Trainer Spell Item: Righteous Fury (#25780)", 7525780},
    {"Trainer Spell Item: Greater Blessing of Might (#25782)", 7525782},
    {"Trainer Spell Item: Greater Blessing of Wisdom (#25894)", 7525894},
    {"Trainer Spell Item: Greater Blessing of Kings (#25898)", 7525898},
    {"Trainer Spell Item: Greater Blessing of Sanctuary (#25899)", 7525899},
    {"Trainer Spell Item: Greater Blessing of Might (#25916)", 7525916},
    {"Trainer Spell Item: Greater Blessing of Wisdom (#25918)", 7525918},
    {"Trainer Spell Item: Consecration (#26573)", 7526573},
    {"Trainer Spell Item: Evasion (#26669)", 7526669},
    {"Trainer Spell Item: Deadly Throw (#26679)", 7526679},
    {"Trainer Spell Item: Garrote (#26839)", 7526839},
    {"Trainer Spell Item: Sinister Strike (#26861)", 7526861},
    {"Trainer Spell Item: Sinister Strike (#26862)", 7526862},
    {"Trainer Spell Item: Backstab (#26863)", 7526863},
    {"Trainer Spell Item: Hemorrhage (#26864)", 7526864},
    {"Trainer Spell Item: Eviscerate (#26865)", 7526865},
    {"Trainer Spell Item: Rupture (#26867)", 7526867},
    {"Trainer Spell Item: Garrote (#26884)", 7526884},
    {"Trainer Spell Item: Vanish (#26889)", 7526889},
    {"Trainer Spell Item: Healing Touch (#26978)", 7526978},
    {"Trainer Spell Item: Healing Touch (#26979)", 7526979},
    {"Trainer Spell Item: Regrowth (#26980)", 7526980},
    {"Trainer Spell Item: Rejuvenation (#26981)", 7526981},
    {"Trainer Spell Item: Rejuvenation (#26982)", 7526982},
    {"Trainer Spell Item: Tranquility (#26983)", 7526983},
    {"Trainer Spell Item: Wrath (#26984)", 7526984},
    {"Trainer Spell Item: Wrath (#26985)", 7526985},
    {"Trainer Spell Item: Starfire (#26986)", 7526986},
    {"Trainer Spell Item: Moonfire (#26987)", 7526987},
    {"Trainer Spell Item: Moonfire (#26988)", 7526988},
    {"Trainer Spell Item: Entangling Roots (#26989)", 7526989},
    {"Trainer Spell Item: Mark of the Wild (#26990)", 7526990},
    {"Trainer Spell Item: Thorns (#26992)", 7526992},
    {"Trainer Spell Item: Rebirth (#26994)", 7526994},
    {"Trainer Spell Item: Soothe Animal (#26995)", 7526995},
    {"Trainer Spell Item: Maul (#26996)", 7526996},
    {"Trainer Spell Item: Swipe (Bear) (#26997)", 7526997},
    {"Trainer Spell Item: Demoralizing Roar (#26998)", 7526998},
    {"Trainer Spell Item: Claw (#27000)", 7527000},
    {"Trainer Spell Item: Shred (#27001)", 7527001},
    {"Trainer Spell Item: Shred (#27002)", 7527002},
    {"Trainer Spell Item: Rake (#27003)", 7527003},
    {"Trainer Spell Item: Cower (#27004)", 7527004},
    {"Trainer Spell Item: Ravage (#27005)", 7527005},
    {"Trainer Spell Item: Pounce (#27006)", 7527006},
    {"Trainer Spell Item: Rip (#27008)", 7527008},
    {"Trainer Spell Item: Nature's Grasp (#27009)", 7527009},
    {"Trainer Spell Item: Hurricane (#27012)", 7527012},
    {"Trainer Spell Item: Insect Swarm (#27013)", 7527013},
    {"Trainer Spell Item: Raptor Strike (#27014)", 7527014},
    {"Trainer Spell Item: Serpent Sting (#27016)", 7527016},
    {"Trainer Spell Item: Arcane Shot (#27019)", 7527019},
    {"Trainer Spell Item: Multi-Shot (#27021)", 7527021},
    {"Trainer Spell Item: Volley (#27022)", 7527022},
    {"Trainer Spell Item: Immolation Trap (#27023)", 7527023},
    {"Trainer Spell Item: Explosive Trap (#27025)", 7527025},
    {"Trainer Spell Item: Aspect of the Hawk (#27044)", 7527044},
    {"Trainer Spell Item: Aspect of the Wild (#27045)", 7527045},
    {"Trainer Spell Item: Mend Pet (#27046)", 7527046},
    {"Trainer Spell Item: Aimed Shot (#27065)", 7527065},
    {"Trainer Spell Item: Counterattack (#27067)", 7527067},
    {"Trainer Spell Item: Wyvern Sting (#27068)", 7527068},
    {"Trainer Spell Item: Fireball (#27070)", 7527070},
    {"Trainer Spell Item: Frostbolt (#27071)", 7527071},
    {"Trainer Spell Item: Frostbolt (#27072)", 7527072},
    {"Trainer Spell Item: Scorch (#27073)", 7527073},
    {"Trainer Spell Item: Scorch (#27074)", 7527074},
    {"Trainer Spell Item: Arcane Missiles (#27075)", 7527075},
    {"Trainer Spell Item: Fire Blast (#27078)", 7527078},
    {"Trainer Spell Item: Fire Blast (#27079)", 7527079},
    {"Trainer Spell Item: Arcane Explosion (#27080)", 7527080},
    {"Trainer Spell Item: Arcane Explosion (#27082)", 7527082},
    {"Trainer Spell Item: Blizzard (#27085)", 7527085},
    {"Trainer Spell Item: Flamestrike (#27086)", 7527086},
    {"Trainer Spell Item: Cone of Cold (#27087)", 7527087},
    {"Trainer Spell Item: Frost Nova (#27088)", 7527088},
    {"Trainer Spell Item: Conjure Mana Gem (#27101)", 7527101},
    {"Trainer Spell Item: Ice Armor (#27124)", 7527124},
    {"Trainer Spell Item: Mage Armor (#27125)", 7527125},
    {"Trainer Spell Item: Arcane Intellect (#27126)", 7527126},
    {"Trainer Spell Item: Fire Ward (#27128)", 7527128},
    {"Trainer Spell Item: Amplify Magic (#27130)", 7527130},
    {"Trainer Spell Item: Mana Shield (#27131)", 7527131},
    {"Trainer Spell Item: Pyroblast (#27132)", 7527132},
    {"Trainer Spell Item: Blast Wave (#27133)", 7527133},
    {"Trainer Spell Item: Ice Barrier (#27134)", 7527134},
    {"Trainer Spell Item: Holy Light (#27135)", 7527135},
    {"Trainer Spell Item: Holy Light (#27136)", 7527136},
    {"Trainer Spell Item: Flash of Light (#27137)", 7527137},
    {"Trainer Spell Item: Exorcism (#27138)", 7527138},
    {"Trainer Spell Item: Holy Wrath (#27139)", 7527139},
    {"Trainer Spell Item: Blessing of Might (#27140)", 7527140},
    {"Trainer Spell Item: Greater Blessing of Might (#27141)", 7527141},
    {"Trainer Spell Item: Blessing of Wisdom (#27142)", 7527142},
    {"Trainer Spell Item: Greater Blessing of Wisdom (#27143)", 7527143},
    {"Trainer Spell Item: Devotion Aura (#27149)", 7527149},
    {"Trainer Spell Item: Retribution Aura (#27150)", 7527150},
    {"Trainer Spell Item: Shadow Resistance Aura (#27151)", 7527151},
    {"Trainer Spell Item: Frost Resistance Aura (#27152)", 7527152},
    {"Trainer Spell Item: Fire Resistance Aura (#27153)", 7527153},
    {"Trainer Spell Item: Lay on Hands (#27154)", 7527154},
    {"Trainer Spell Item: Consecration (#27173)", 7527173},
    {"Trainer Spell Item: Holy Shock (#27174)", 7527174},
    {"Trainer Spell Item: Holy Shield (#27179)", 7527179},
    {"Trainer Spell Item: Hammer of Wrath (#27180)", 7527180},
    {"Trainer Spell Item: Shadow Bolt (#27209)", 7527209},
    {"Trainer Spell Item: Searing Pain (#27210)", 7527210},
    {"Trainer Spell Item: Soul Fire (#27211)", 7527211},
    {"Trainer Spell Item: Rain of Fire (#27212)", 7527212},
    {"Trainer Spell Item: Hellfire (#27213)", 7527213},
    {"Trainer Spell Item: Immolate (#27215)", 7527215},
    {"Trainer Spell Item: Corruption (#27216)", 7527216},
    {"Trainer Spell Item: Drain Soul (#27217)", 7527217},
    {"Trainer Spell Item: Curse of Agony (#27218)", 7527218},
    {"Trainer Spell Item: Drain Life (#27219)", 7527219},
    {"Trainer Spell Item: Drain Life (#27220)", 7527220},
    {"Trainer Spell Item: Life Tap (#27222)", 7527222},
    {"Trainer Spell Item: Death Coil (#27223)", 7527223},
    {"Trainer Spell Item: Curse of Weakness (#27224)", 7527224},
    {"Trainer Spell Item: Curse of the Elements (#27228)", 7527228},
    {"Trainer Spell Item: Create Healthstone (#27230)", 7527230},
    {"Trainer Spell Item: Create Soulstone (#27238)", 7527238},
    {"Trainer Spell Item: Seed of Corruption (#27243)", 7527243},
    {"Trainer Spell Item: Create Firestone (#27250)", 7527250},
    {"Trainer Spell Item: Health Funnel (#27259)", 7527259},
    {"Trainer Spell Item: Demon Armor (#27260)", 7527260},
    {"Trainer Spell Item: Shadowburn (#27263)", 7527263},
    {"Trainer Spell Item: Dark Pact (#27265)", 7527265},
    {"Trainer Spell Item: Ambush (#27441)", 7527441},
    {"Trainer Spell Item: Feint (#27448)", 7527448},
    {"Trainer Spell Item: Prayer of Spirit (#27681)", 7527681},
    {"Trainer Spell Item: Holy Nova (#27799)", 7527799},
    {"Trainer Spell Item: Holy Nova (#27800)", 7527800},
    {"Trainer Spell Item: Holy Nova (#27801)", 7527801},
    {"Trainer Spell Item: Divine Spirit (#27841)", 7527841},
    {"Trainer Spell Item: Lightwell (#27870)", 7527870},
    {"Trainer Spell Item: Lightwell (#27871)", 7527871},
    {"Trainer Spell Item: Create Spellstone (#28172)", 7528172},
    {"Trainer Spell Item: Fel Armor (#28176)", 7528176},
    {"Trainer Spell Item: Fel Armor (#28189)", 7528189},
    {"Trainer Spell Item: Lightwell (#28275)", 7528275},
    {"Trainer Spell Item: Innervate (#29166)", 7529166},
    {"Trainer Spell Item: Heroic Strike (#29707)", 7529707},
    {"Trainer Spell Item: Incinerate (#29722)", 7529722},
    {"Trainer Spell Item: Soulshatter (#29858)", 7529858},
    {"Trainer Spell Item: Ritual of Souls (#29893)", 7529893},
    {"Trainer Spell Item: Devastate (#30016)", 7530016},
    {"Trainer Spell Item: Devastate (#30022)", 7530022},
    {"Trainer Spell Item: Heroic Strike (#30324)", 7530324},
    {"Trainer Spell Item: Mortal Strike (#30330)", 7530330},
    {"Trainer Spell Item: Shield Slam (#30356)", 7530356},
    {"Trainer Spell Item: Revenge (#30357)", 7530357},
    {"Trainer Spell Item: Unstable Affliction (#30404)", 7530404},
    {"Trainer Spell Item: Unstable Affliction (#30405)", 7530405},
    {"Trainer Spell Item: Shadowfury (#30413)", 7530413},
    {"Trainer Spell Item: Shadowfury (#30414)", 7530414},
    {"Trainer Spell Item: Spellsteal (#30449)", 7530449},
    {"Trainer Spell Item: Arcane Blast (#30451)", 7530451},
    {"Trainer Spell Item: Ice Lance (#30455)", 7530455},
    {"Trainer Spell Item: Searing Pain (#30459)", 7530459},
    {"Trainer Spell Item: Molten Armor (#30482)", 7530482},
    {"Trainer Spell Item: Soul Fire (#30545)", 7530545},
    {"Trainer Spell Item: Shadowburn (#30546)", 7530546},
    {"Trainer Spell Item: Curse of Weakness (#30909)", 7530909},
    {"Trainer Spell Item: Curse of Doom (#30910)", 7530910},
    {"Trainer Spell Item: Cloak of Shadows (#31224)", 7531224},
    {"Trainer Spell Item: Righteous Defense (#31789)", 7531789},
    {"Trainer Spell Item: Seal of Vengeance (#31801)", 7531801},
    {"Trainer Spell Item: Avenging Wrath (#31884)", 7531884},
    {"Trainer Spell Item: Heroism (#32182)", 7532182},
    {"Trainer Spell Item: Crusader Aura (#32223)", 7532223},
    {"Trainer Spell Item: Incinerate (#32231)", 7532231},
    {"Trainer Spell Item: Portal: Exodar (#32266)", 7532266},
    {"Trainer Spell Item: Portal: Silvermoon (#32267)", 7532267},
    {"Trainer Spell Item: Teleport: Exodar (#32271)", 7532271},
    {"Trainer Spell Item: Teleport: Silvermoon (#32272)", 7532272},
    {"Trainer Spell Item: Mass Dispel (#32375)", 7532375},
    {"Trainer Spell Item: Shadow Word: Death (#32379)", 7532379},
    {"Trainer Spell Item: Binding Heal (#32546)", 7532546},
    {"Trainer Spell Item: Earth Shield (#32593)", 7532593},
    {"Trainer Spell Item: Earth Shield (#32594)", 7532594},
    {"Trainer Spell Item: Envenom (#32645)", 7532645},
    {"Trainer Spell Item: Envenom (#32684)", 7532684},
    {"Trainer Spell Item: Avenger's Shield (#32699)", 7532699},
    {"Trainer Spell Item: Avenger's Shield (#32700)", 7532700},
    {"Trainer Spell Item: Frost Ward (#32796)", 7532796},
    {"Trainer Spell Item: Shadow Word: Death (#32996)", 7532996},
    {"Trainer Spell Item: Prayer of Spirit (#32999)", 7532999},
    {"Trainer Spell Item: Dragon's Breath (#33041)", 7533041},
    {"Trainer Spell Item: Dragon's Breath (#33042)", 7533042},
    {"Trainer Spell Item: Dragon's Breath (#33043)", 7533043},
    {"Trainer Spell Item: Holy Shock (#33072)", 7533072},
    {"Trainer Spell Item: Prayer of Mending (#33076)", 7533076},
    {"Trainer Spell Item: Dash (#33357)", 7533357},
    {"Trainer Spell Item: Ice Barrier (#33405)", 7533405},
    {"Trainer Spell Item: Teleport: Shattrath (#33690)", 7533690},
    {"Trainer Spell Item: Portal: Shattrath (#33691)", 7533691},
    {"Trainer Spell Item: Water Shield (#33736)", 7533736},
    {"Trainer Spell Item: Lacerate (#33745)", 7533745},
    {"Trainer Spell Item: Lifebloom (#33763)", 7533763},
    {"Trainer Spell Item: Cyclone (#33786)", 7533786},
    {"Trainer Spell Item: Blast Wave (#33933)", 7533933},
    {"Trainer Spell Item: Pyroblast (#33938)", 7533938},
    {"Trainer Spell Item: Dampen Magic (#33944)", 7533944},
    {"Trainer Spell Item: Amplify Magic (#33946)", 7533946},
    {"Trainer Spell Item: Flight Form (#33950)", 7533950},
    {"Trainer Spell Item: Mangle (Cat) (#33982)", 7533982},
    {"Trainer Spell Item: Mangle (Cat) (#33983)", 7533983},
    {"Trainer Spell Item: Mangle (Bear) (#33986)", 7533986},
    {"Trainer Spell Item: Mangle (Bear) (#33987)", 7533987},
    {"Trainer Spell Item: Kill Command (#34026)", 7534026},
    {"Trainer Spell Item: Aspect of the Viper (#34074)", 7534074},
    {"Trainer Spell Item: Steady Shot (#34120)", 7534120},
    {"Trainer Spell Item: Mutilate (#34411)", 7534411},
    {"Trainer Spell Item: Mutilate (#34412)", 7534412},
    {"Trainer Spell Item: Mutilate (#34413)", 7534413},
    {"Trainer Spell Item: Victory Rush (#34428)", 7534428},
    {"Trainer Spell Item: Shadowfiend (#34433)", 7534433},
    {"Trainer Spell Item: Misdirection (#34477)", 7534477},
    {"Trainer Spell Item: Snake Trap (#34600)", 7534600},
    {"Trainer Spell Item: Summon Charger (#34767)", 7534767},
    {"Trainer Spell Item: Summon Warhorse (#34768)", 7534768},
    {"Trainer Spell Item: Circle of Healing (#34863)", 7534863},
    {"Trainer Spell Item: Circle of Healing (#34864)", 7534864},
    {"Trainer Spell Item: Circle of Healing (#34865)", 7534865},
    {"Trainer Spell Item: Circle of Healing (#34866)", 7534866},
    {"Trainer Spell Item: Vampiric Touch (#34916)", 7534916},
    {"Trainer Spell Item: Vampiric Touch (#34917)", 7534917},
    {"Trainer Spell Item: Teleport: Shattrath (#35715)", 7535715},
    {"Trainer Spell Item: Portal: Shattrath (#35717)", 7535717},
    {"Trainer Spell Item: Mongoose Bite (#36916)", 7536916},
    {"Trainer Spell Item: Totemic Recall (#36936)", 7536936},
    {"Trainer Spell Item: Conjure Water (#37420)", 7537420},
    {"Trainer Spell Item: Fireball (#38692)", 7538692},
    {"Trainer Spell Item: Frostbolt (#38697)", 7538697},
    {"Trainer Spell Item: Arcane Missiles (#38699)", 7538699},
    {"Trainer Spell Item: Arcane Missiles (#38704)", 7538704},
    {"Trainer Spell Item: Swift Flight Form (#40120)", 7540120},
    {"Trainer Spell Item: Army of the Dead (#42650)", 7542650},
    {"Trainer Spell Item: Fireball (#42832)", 7542832},
    {"Trainer Spell Item: Fireball (#42833)", 7542833},
    {"Trainer Spell Item: Frostbolt (#42841)", 7542841},
    {"Trainer Spell Item: Frostbolt (#42842)", 7542842},
    {"Trainer Spell Item: Arcane Missiles (#42843)", 7542843},
    {"Trainer Spell Item: Arcane Missiles (#42846)", 7542846},
    {"Trainer Spell Item: Scorch (#42858)", 7542858},
    {"Trainer Spell Item: Scorch (#42859)", 7542859},
    {"Trainer Spell Item: Fire Blast (#42872)", 7542872},
    {"Trainer Spell Item: Fire Blast (#42873)", 7542873},
    {"Trainer Spell Item: Pyroblast (#42890)", 7542890},
    {"Trainer Spell Item: Pyroblast (#42891)", 7542891},
    {"Trainer Spell Item: Arcane Blast (#42894)", 7542894},
    {"Trainer Spell Item: Arcane Blast (#42896)", 7542896},
    {"Trainer Spell Item: Arcane Blast (#42897)", 7542897},
    {"Trainer Spell Item: Ice Lance (#42913)", 7542913},
    {"Trainer Spell Item: Ice Lance (#42914)", 7542914},
    {"Trainer Spell Item: Frost Nova (#42917)", 7542917},
    {"Trainer Spell Item: Arcane Explosion (#42920)", 7542920},
    {"Trainer Spell Item: Arcane Explosion (#42921)", 7542921},
    {"Trainer Spell Item: Flamestrike (#42925)", 7542925},
    {"Trainer Spell Item: Flamestrike (#42926)", 7542926},
    {"Trainer Spell Item: Cone of Cold (#42930)", 7542930},
    {"Trainer Spell Item: Cone of Cold (#42931)", 7542931},
    {"Trainer Spell Item: Blizzard (#42939)", 7542939},
    {"Trainer Spell Item: Blizzard (#42940)", 7542940},
    {"Trainer Spell Item: Blast Wave (#42944)", 7542944},
    {"Trainer Spell Item: Blast Wave (#42945)", 7542945},
    {"Trainer Spell Item: Dragon's Breath (#42949)", 7542949},
    {"Trainer Spell Item: Dragon's Breath (#42950)", 7542950},
    {"Trainer Spell Item: Conjure Refreshment (#42955)", 7542955},
    {"Trainer Spell Item: Conjure Refreshment (#42956)", 7542956},
    {"Trainer Spell Item: Conjure Mana Gem (#42985)", 7542985},
    {"Trainer Spell Item: Arcane Intellect (#42995)", 7542995},
    {"Trainer Spell Item: Arcane Brilliance (#43002)", 7543002},
    {"Trainer Spell Item: Ice Armor (#43008)", 7543008},
    {"Trainer Spell Item: Fire Ward (#43010)", 7543010},
    {"Trainer Spell Item: Frost Ward (#43012)", 7543012},
    {"Trainer Spell Item: Dampen Magic (#43015)", 7543015},
    {"Trainer Spell Item: Amplify Magic (#43017)", 7543017},
    {"Trainer Spell Item: Mana Shield (#43019)", 7543019},
    {"Trainer Spell Item: Mana Shield (#43020)", 7543020},
    {"Trainer Spell Item: Mage Armor (#43023)", 7543023},
    {"Trainer Spell Item: Mage Armor (#43024)", 7543024},
    {"Trainer Spell Item: Ice Barrier (#43038)", 7543038},
    {"Trainer Spell Item: Ice Barrier (#43039)", 7543039},
    {"Trainer Spell Item: Molten Armor (#43045)", 7543045},
    {"Trainer Spell Item: Molten Armor (#43046)", 7543046},
    {"Trainer Spell Item: Death and Decay (#43265)", 7543265},
    {"Trainer Spell Item: Ritual of Refreshment (#43987)", 7543987},
    {"Trainer Spell Item: Frostfire Bolt (#44614)", 7544614},
    {"Trainer Spell Item: Arcane Barrage (#44780)", 7544780},
    {"Trainer Spell Item: Arcane Barrage (#44781)", 7544781},
    {"Trainer Spell Item: Ice Block (#45438)", 7545438},
    {"Trainer Spell Item: Death Strike (#45463)", 7545463},
    {"Trainer Spell Item: Chains of Ice (#45524)", 7545524},
    {"Trainer Spell Item: Blood Tap (#45529)", 7545529},
    {"Trainer Spell Item: Raise Dead (#46584)", 7546584},
    {"Trainer Spell Item: Rend (#46845)", 7546845},
    {"Trainer Spell Item: Battle Shout (#47436)", 7547436},
    {"Trainer Spell Item: Demoralizing Shout (#47437)", 7547437},
    {"Trainer Spell Item: Commanding Shout (#47439)", 7547439},
    {"Trainer Spell Item: Commanding Shout (#47440)", 7547440},
    {"Trainer Spell Item: Heroic Strike (#47449)", 7547449},
    {"Trainer Spell Item: Heroic Strike (#47450)", 7547450},
    {"Trainer Spell Item: Rend (#47465)", 7547465},
    {"Trainer Spell Item: Execute (#47470)", 7547470},
    {"Trainer Spell Item: Execute (#47471)", 7547471},
    {"Trainer Spell Item: Slam (#47474)", 7547474},
    {"Trainer Spell Item: Slam (#47475)", 7547475},
    {"Trainer Spell Item: Strangulate (#47476)", 7547476},
    {"Trainer Spell Item: Mortal Strike (#47485)", 7547485},
    {"Trainer Spell Item: Mortal Strike (#47486)", 7547486},
    {"Trainer Spell Item: Shield Slam (#47487)", 7547487},
    {"Trainer Spell Item: Shield Slam (#47488)", 7547488},
    {"Trainer Spell Item: Devastate (#47497)", 7547497},
    {"Trainer Spell Item: Devastate (#47498)", 7547498},
    {"Trainer Spell Item: Thunder Clap (#47501)", 7547501},
    {"Trainer Spell Item: Thunder Clap (#47502)", 7547502},
    {"Trainer Spell Item: Cleave (#47519)", 7547519},
    {"Trainer Spell Item: Cleave (#47520)", 7547520},
    {"Trainer Spell Item: Mind Freeze (#47528)", 7547528},
    {"Trainer Spell Item: Empower Rune Weapon (#47568)", 7547568},
    {"Trainer Spell Item: Frostfire Bolt (#47610)", 7547610},
    {"Trainer Spell Item: Demon Armor (#47793)", 7547793},
    {"Trainer Spell Item: Shadow Bolt (#47808)", 7547808},
    {"Trainer Spell Item: Shadow Bolt (#47809)", 7547809},
    {"Trainer Spell Item: Immolate (#47810)", 7547810},
    {"Trainer Spell Item: Immolate (#47811)", 7547811},
    {"Trainer Spell Item: Corruption (#47812)", 7547812},
    {"Trainer Spell Item: Corruption (#47813)", 7547813},
    {"Trainer Spell Item: Searing Pain (#47814)", 7547814},
    {"Trainer Spell Item: Searing Pain (#47815)", 7547815},
    {"Trainer Spell Item: Rain of Fire (#47819)", 7547819},
    {"Trainer Spell Item: Rain of Fire (#47820)", 7547820},
    {"Trainer Spell Item: Hellfire (#47823)", 7547823},
    {"Trainer Spell Item: Soul Fire (#47824)", 7547824},
    {"Trainer Spell Item: Soul Fire (#47825)", 7547825},
    {"Trainer Spell Item: Shadowburn (#47826)", 7547826},
    {"Trainer Spell Item: Shadowburn (#47827)", 7547827},
    {"Trainer Spell Item: Seed of Corruption (#47835)", 7547835},
    {"Trainer Spell Item: Seed of Corruption (#47836)", 7547836},
    {"Trainer Spell Item: Incinerate (#47837)", 7547837},
    {"Trainer Spell Item: Incinerate (#47838)", 7547838},
    {"Trainer Spell Item: Unstable Affliction (#47841)", 7547841},
    {"Trainer Spell Item: Unstable Affliction (#47843)", 7547843},
    {"Trainer Spell Item: Shadowfury (#47846)", 7547846},
    {"Trainer Spell Item: Shadowfury (#47847)", 7547847},
    {"Trainer Spell Item: Drain Soul (#47855)", 7547855},
    {"Trainer Spell Item: Health Funnel (#47856)", 7547856},
    {"Trainer Spell Item: Drain Life (#47857)", 7547857},
    {"Trainer Spell Item: Death Coil (#47859)", 7547859},
    {"Trainer Spell Item: Death Coil (#47860)", 7547860},
    {"Trainer Spell Item: Curse of Agony (#47863)", 7547863},
    {"Trainer Spell Item: Curse of Agony (#47864)", 7547864},
    {"Trainer Spell Item: Curse of the Elements (#47865)", 7547865},
    {"Trainer Spell Item: Curse of Doom (#47867)", 7547867},
    {"Trainer Spell Item: Create Healthstone (#47871)", 7547871},
    {"Trainer Spell Item: Create Healthstone (#47878)", 7547878},
    {"Trainer Spell Item: Create Soulstone (#47884)", 7547884},
    {"Trainer Spell Item: Create Spellstone (#47886)", 7547886},
    {"Trainer Spell Item: Create Spellstone (#47888)", 7547888},
    {"Trainer Spell Item: Demon Armor (#47889)", 7547889},
    {"Trainer Spell Item: Shadow Ward (#47890)", 7547890},
    {"Trainer Spell Item: Shadow Ward (#47891)", 7547891},
    {"Trainer Spell Item: Fel Armor (#47892)", 7547892},
    {"Trainer Spell Item: Fel Armor (#47893)", 7547893},
    {"Trainer Spell Item: Shadowflame (#47897)", 7547897},
    {"Trainer Spell Item: Demonic Circle: Summon (#48018)", 7548018},
    {"Trainer Spell Item: Demonic Circle: Teleport (#48020)", 7548020},
    {"Trainer Spell Item: Inner Fire (#48040)", 7548040},
    {"Trainer Spell Item: Mind Sear (#48045)", 7548045},
    {"Trainer Spell Item: Greater Heal (#48062)", 7548062},
    {"Trainer Spell Item: Greater Heal (#48063)", 7548063},
    {"Trainer Spell Item: Power Word: Shield (#48065)", 7548065},
    {"Trainer Spell Item: Power Word: Shield (#48066)", 7548066},
    {"Trainer Spell Item: Renew (#48067)", 7548067},
    {"Trainer Spell Item: Renew (#48068)", 7548068},
    {"Trainer Spell Item: Flash Heal (#48070)", 7548070},
    {"Trainer Spell Item: Flash Heal (#48071)", 7548071},
    {"Trainer Spell Item: Prayer of Healing (#48072)", 7548072},
    {"Trainer Spell Item: Divine Spirit (#48073)", 7548073},
    {"Trainer Spell Item: Prayer of Spirit (#48074)", 7548074},
    {"Trainer Spell Item: Holy Nova (#48077)", 7548077},
    {"Trainer Spell Item: Holy Nova (#48078)", 7548078},
    {"Trainer Spell Item: Lightwell (#48086)", 7548086},
    {"Trainer Spell Item: Lightwell (#48087)", 7548087},
    {"Trainer Spell Item: Circle of Healing (#48088)", 7548088},
    {"Trainer Spell Item: Circle of Healing (#48089)", 7548089},
    {"Trainer Spell Item: Prayer of Mending (#48112)", 7548112},
    {"Trainer Spell Item: Prayer of Mending (#48113)", 7548113},
    {"Trainer Spell Item: Binding Heal (#48119)", 7548119},
    {"Trainer Spell Item: Binding Heal (#48120)", 7548120},
    {"Trainer Spell Item: Smite (#48122)", 7548122},
    {"Trainer Spell Item: Smite (#48123)", 7548123},
    {"Trainer Spell Item: Shadow Word: Pain (#48124)", 7548124},
    {"Trainer Spell Item: Shadow Word: Pain (#48125)", 7548125},
    {"Trainer Spell Item: Mind Blast (#48126)", 7548126},
    {"Trainer Spell Item: Mind Blast (#48127)", 7548127},
    {"Trainer Spell Item: Holy Fire (#48134)", 7548134},
    {"Trainer Spell Item: Holy Fire (#48135)", 7548135},
    {"Trainer Spell Item: Mind Flay (#48155)", 7548155},
    {"Trainer Spell Item: Mind Flay (#48156)", 7548156},
    {"Trainer Spell Item: Shadow Word: Death (#48157)", 7548157},
    {"Trainer Spell Item: Shadow Word: Death (#48158)", 7548158},
    {"Trainer Spell Item: Vampiric Touch (#48159)", 7548159},
    {"Trainer Spell Item: Vampiric Touch (#48160)", 7548160},
    {"Trainer Spell Item: Power Word: Fortitude (#48161)", 7548161},
    {"Trainer Spell Item: Prayer of Fortitude (#48162)", 7548162},
    {"Trainer Spell Item: Inner Fire (#48168)", 7548168},
    {"Trainer Spell Item: Shadow Protection (#48169)", 7548169},
    {"Trainer Spell Item: Prayer of Shadow Protection (#48170)", 7548170},
    {"Trainer Spell Item: Resurrection (#48171)", 7548171},
    {"Trainer Spell Item: Desperate Prayer (#48172)", 7548172},
    {"Trainer Spell Item: Desperate Prayer (#48173)", 7548173},
    {"Trainer Spell Item: Frost Presence (#48263)", 7548263},
    {"Trainer Spell Item: Unholy Presence (#48265)", 7548265},
    {"Trainer Spell Item: Devouring Plague (#48299)", 7548299},
    {"Trainer Spell Item: Devouring Plague (#48300)", 7548300},
    {"Trainer Spell Item: Healing Touch (#48377)", 7548377},
    {"Trainer Spell Item: Healing Touch (#48378)", 7548378},
    {"Trainer Spell Item: Rejuvenation (#48440)", 7548440},
    {"Trainer Spell Item: Rejuvenation (#48441)", 7548441},
    {"Trainer Spell Item: Regrowth (#48442)", 7548442},
    {"Trainer Spell Item: Regrowth (#48443)", 7548443},
    {"Trainer Spell Item: Tranquility (#48446)", 7548446},
    {"Trainer Spell Item: Tranquility (#48447)", 7548447},
    {"Trainer Spell Item: Lifebloom (#48450)", 7548450},
    {"Trainer Spell Item: Lifebloom (#48451)", 7548451},
    {"Trainer Spell Item: Wrath (#48459)", 7548459},
    {"Trainer Spell Item: Wrath (#48461)", 7548461},
    {"Trainer Spell Item: Moonfire (#48462)", 7548462},
    {"Trainer Spell Item: Moonfire (#48463)", 7548463},
    {"Trainer Spell Item: Starfire (#48464)", 7548464},
    {"Trainer Spell Item: Starfire (#48465)", 7548465},
    {"Trainer Spell Item: Hurricane (#48467)", 7548467},
    {"Trainer Spell Item: Insect Swarm (#48468)", 7548468},
    {"Trainer Spell Item: Mark of the Wild (#48469)", 7548469},
    {"Trainer Spell Item: Gift of the Wild (#48470)", 7548470},
    {"Trainer Spell Item: Rebirth (#48477)", 7548477},
    {"Trainer Spell Item: Maul (#48479)", 7548479},
    {"Trainer Spell Item: Maul (#48480)", 7548480},
    {"Trainer Spell Item: Demoralizing Roar (#48559)", 7548559},
    {"Trainer Spell Item: Demoralizing Roar (#48560)", 7548560},
    {"Trainer Spell Item: Swipe (Bear) (#48561)", 7548561},
    {"Trainer Spell Item: Swipe (Bear) (#48562)", 7548562},
    {"Trainer Spell Item: Mangle (Bear) (#48563)", 7548563},
    {"Trainer Spell Item: Mangle (Bear) (#48564)", 7548564},
    {"Trainer Spell Item: Mangle (Cat) (#48565)", 7548565},
    {"Trainer Spell Item: Mangle (Cat) (#48566)", 7548566},
    {"Trainer Spell Item: Lacerate (#48567)", 7548567},
    {"Trainer Spell Item: Lacerate (#48568)", 7548568},
    {"Trainer Spell Item: Claw (#48569)", 7548569},
    {"Trainer Spell Item: Claw (#48570)", 7548570},
    {"Trainer Spell Item: Shred (#48571)", 7548571},
    {"Trainer Spell Item: Shred (#48572)", 7548572},
    {"Trainer Spell Item: Rake (#48573)", 7548573},
    {"Trainer Spell Item: Rake (#48574)", 7548574},
    {"Trainer Spell Item: Cower (#48575)", 7548575},
    {"Trainer Spell Item: Ferocious Bite (#48576)", 7548576},
    {"Trainer Spell Item: Ferocious Bite (#48577)", 7548577},
    {"Trainer Spell Item: Ravage (#48578)", 7548578},
    {"Trainer Spell Item: Ravage (#48579)", 7548579},
    {"Trainer Spell Item: Sinister Strike (#48637)", 7548637},
    {"Trainer Spell Item: Sinister Strike (#48638)", 7548638},
    {"Trainer Spell Item: Backstab (#48656)", 7548656},
    {"Trainer Spell Item: Backstab (#48657)", 7548657},
    {"Trainer Spell Item: Feint (#48658)", 7548658},
    {"Trainer Spell Item: Feint (#48659)", 7548659},
    {"Trainer Spell Item: Hemorrhage (#48660)", 7548660},
    {"Trainer Spell Item: Mutilate (#48663)", 7548663},
    {"Trainer Spell Item: Mutilate (#48666)", 7548666},
    {"Trainer Spell Item: Eviscerate (#48667)", 7548667},
    {"Trainer Spell Item: Eviscerate (#48668)", 7548668},
    {"Trainer Spell Item: Rupture (#48671)", 7548671},
    {"Trainer Spell Item: Rupture (#48672)", 7548672},
    {"Trainer Spell Item: Deadly Throw (#48673)", 7548673},
    {"Trainer Spell Item: Deadly Throw (#48674)", 7548674},
    {"Trainer Spell Item: Garrote (#48675)", 7548675},
    {"Trainer Spell Item: Garrote (#48676)", 7548676},
    {"Trainer Spell Item: Ambush (#48689)", 7548689},
    {"Trainer Spell Item: Ambush (#48690)", 7548690},
    {"Trainer Spell Item: Ambush (#48691)", 7548691},
    {"Trainer Spell Item: Anti-Magic Shell (#48707)", 7548707},
    {"Trainer Spell Item: Blood Boil (#48721)", 7548721},
    {"Trainer Spell Item: Death Pact (#48743)", 7548743},
    {"Trainer Spell Item: Holy Light (#48781)", 7548781},
    {"Trainer Spell Item: Holy Light (#48782)", 7548782},
    {"Trainer Spell Item: Flash of Light (#48784)", 7548784},
    {"Trainer Spell Item: Flash of Light (#48785)", 7548785},
    {"Trainer Spell Item: Lay on Hands (#48788)", 7548788},
    {"Trainer Spell Item: Icebound Fortitude (#48792)", 7548792},
    {"Trainer Spell Item: Exorcism (#48800)", 7548800},
    {"Trainer Spell Item: Exorcism (#48801)", 7548801},
    {"Trainer Spell Item: Hammer of Wrath (#48805)", 7548805},
    {"Trainer Spell Item: Hammer of Wrath (#48806)", 7548806},
    {"Trainer Spell Item: Holy Wrath (#48816)", 7548816},
    {"Trainer Spell Item: Holy Wrath (#48817)", 7548817},
    {"Trainer Spell Item: Consecration (#48818)", 7548818},
    {"Trainer Spell Item: Consecration (#48819)", 7548819},
    {"Trainer Spell Item: Holy Shock (#48824)", 7548824},
    {"Trainer Spell Item: Holy Shock (#48825)", 7548825},
    {"Trainer Spell Item: Avenger's Shield (#48826)", 7548826},
    {"Trainer Spell Item: Avenger's Shield (#48827)", 7548827},
    {"Trainer Spell Item: Blessing of Might (#48931)", 7548931},
    {"Trainer Spell Item: Blessing of Might (#48932)", 7548932},
    {"Trainer Spell Item: Greater Blessing of Might (#48933)", 7548933},
    {"Trainer Spell Item: Greater Blessing of Might (#48934)", 7548934},
    {"Trainer Spell Item: Blessing of Wisdom (#48935)", 7548935},
    {"Trainer Spell Item: Blessing of Wisdom (#48936)", 7548936},
    {"Trainer Spell Item: Greater Blessing of Wisdom (#48937)", 7548937},
    {"Trainer Spell Item: Greater Blessing of Wisdom (#48938)", 7548938},
    {"Trainer Spell Item: Devotion Aura (#48941)", 7548941},
    {"Trainer Spell Item: Devotion Aura (#48942)", 7548942},
    {"Trainer Spell Item: Shadow Resistance Aura (#48943)", 7548943},
    {"Trainer Spell Item: Frost Resistance Aura (#48945)", 7548945},
    {"Trainer Spell Item: Fire Resistance Aura (#48947)", 7548947},
    {"Trainer Spell Item: Redemption (#48949)", 7548949},
    {"Trainer Spell Item: Redemption (#48950)", 7548950},
    {"Trainer Spell Item: Holy Shield (#48951)", 7548951},
    {"Trainer Spell Item: Holy Shield (#48952)", 7548952},
    {"Trainer Spell Item: Mend Pet (#48989)", 7548989},
    {"Trainer Spell Item: Mend Pet (#48990)", 7548990},
    {"Trainer Spell Item: Raptor Strike (#48995)", 7548995},
    {"Trainer Spell Item: Raptor Strike (#48996)", 7548996},
    {"Trainer Spell Item: Counterattack (#48998)", 7548998},
    {"Trainer Spell Item: Counterattack (#48999)", 7548999},
    {"Trainer Spell Item: Serpent Sting (#49000)", 7549000},
    {"Trainer Spell Item: Serpent Sting (#49001)", 7549001},
    {"Trainer Spell Item: Wyvern Sting (#49011)", 7549011},
    {"Trainer Spell Item: Wyvern Sting (#49012)", 7549012},
    {"Trainer Spell Item: Obliterate (#49020)", 7549020},
    {"Trainer Spell Item: Arcane Shot (#49044)", 7549044},
    {"Trainer Spell Item: Arcane Shot (#49045)", 7549045},
    {"Trainer Spell Item: Multi-Shot (#49047)", 7549047},
    {"Trainer Spell Item: Multi-Shot (#49048)", 7549048},
    {"Trainer Spell Item: Aimed Shot (#49049)", 7549049},
    {"Trainer Spell Item: Aimed Shot (#49050)", 7549050},
    {"Trainer Spell Item: Steady Shot (#49051)", 7549051},
    {"Trainer Spell Item: Steady Shot (#49052)", 7549052},
    {"Trainer Spell Item: Immolation Trap (#49055)", 7549055},
    {"Trainer Spell Item: Immolation Trap (#49056)", 7549056},
    {"Trainer Spell Item: Explosive Trap (#49066)", 7549066},
    {"Trainer Spell Item: Explosive Trap (#49067)", 7549067},
    {"Trainer Spell Item: Aspect of the Wild (#49071)", 7549071},
    {"Trainer Spell Item: Earth Shock (#49230)", 7549230},
    {"Trainer Spell Item: Earth Shock (#49231)", 7549231},
    {"Trainer Spell Item: Flame Shock (#49232)", 7549232},
    {"Trainer Spell Item: Flame Shock (#49233)", 7549233},
    {"Trainer Spell Item: Frost Shock (#49235)", 7549235},
    {"Trainer Spell Item: Frost Shock (#49236)", 7549236},
    {"Trainer Spell Item: Lightning Bolt (#49237)", 7549237},
    {"Trainer Spell Item: Lightning Bolt (#49238)", 7549238},
    {"Trainer Spell Item: Chain Lightning (#49270)", 7549270},
    {"Trainer Spell Item: Chain Lightning (#49271)", 7549271},
    {"Trainer Spell Item: Healing Wave (#49272)", 7549272},
    {"Trainer Spell Item: Healing Wave (#49273)", 7549273},
    {"Trainer Spell Item: Lesser Healing Wave (#49275)", 7549275},
    {"Trainer Spell Item: Lesser Healing Wave (#49276)", 7549276},
    {"Trainer Spell Item: Ancestral Spirit (#49277)", 7549277},
    {"Trainer Spell Item: Lightning Shield (#49280)", 7549280},
    {"Trainer Spell Item: Lightning Shield (#49281)", 7549281},
    {"Trainer Spell Item: Earth Shield (#49283)", 7549283},
    {"Trainer Spell Item: Earth Shield (#49284)", 7549284},
    {"Trainer Spell Item: Teleport: Stonard (#49358)", 7549358},
    {"Trainer Spell Item: Teleport: Theramore (#49359)", 7549359},
    {"Trainer Spell Item: Portal: Theramore (#49360)", 7549360},
    {"Trainer Spell Item: Portal: Stonard (#49361)", 7549361},
    {"Trainer Spell Item: Rip (#49799)", 7549799},
    {"Trainer Spell Item: Rip (#49800)", 7549800},
    {"Trainer Spell Item: Maim (#49802)", 7549802},
    {"Trainer Spell Item: Pounce (#49803)", 7549803},
    {"Trainer Spell Item: Death Coil (#49892)", 7549892},
    {"Trainer Spell Item: Death Coil (#49893)", 7549893},
    {"Trainer Spell Item: Death Coil (#49894)", 7549894},
    {"Trainer Spell Item: Death Coil (#49895)", 7549895},
    {"Trainer Spell Item: Icy Touch (#49896)", 7549896},
    {"Trainer Spell Item: Icy Touch (#49903)", 7549903},
    {"Trainer Spell Item: Icy Touch (#49904)", 7549904},
    {"Trainer Spell Item: Icy Touch (#49909)", 7549909},
    {"Trainer Spell Item: Plague Strike (#49917)", 7549917},
    {"Trainer Spell Item: Plague Strike (#49918)", 7549918},
    {"Trainer Spell Item: Plague Strike (#49919)", 7549919},
    {"Trainer Spell Item: Plague Strike (#49920)", 7549920},
    {"Trainer Spell Item: Plague Strike (#49921)", 7549921},
    {"Trainer Spell Item: Death Strike (#49923)", 7549923},
    {"Trainer Spell Item: Death Strike (#49924)", 7549924},
    {"Trainer Spell Item: Blood Strike (#49926)", 7549926},
    {"Trainer Spell Item: Blood Strike (#49927)", 7549927},
    {"Trainer Spell Item: Blood Strike (#49928)", 7549928},
    {"Trainer Spell Item: Blood Strike (#49929)", 7549929},
    {"Trainer Spell Item: Blood Strike (#49930)", 7549930},
    {"Trainer Spell Item: Death and Decay (#49936)", 7549936},
    {"Trainer Spell Item: Death and Decay (#49937)", 7549937},
    {"Trainer Spell Item: Death and Decay (#49938)", 7549938},
    {"Trainer Spell Item: Blood Boil (#49939)", 7549939},
    {"Trainer Spell Item: Blood Boil (#49940)", 7549940},
    {"Trainer Spell Item: Blood Boil (#49941)", 7549941},
    {"Trainer Spell Item: Death Strike (#49998)", 7549998},
    {"Trainer Spell Item: Death Strike (#49999)", 7549999},
    {"Trainer Spell Item: Tiger's Fury (#50212)", 7550212},
    {"Trainer Spell Item: Tiger's Fury (#50213)", 7550213},
    {"Trainer Spell Item: Nourish (#50464)", 7550464},
    {"Trainer Spell Item: Curse of Weakness (#50511)", 7550511},
    {"Trainer Spell Item: Revive (#50763)", 7550763},
    {"Trainer Spell Item: Revive (#50764)", 7550764},
    {"Trainer Spell Item: Revive (#50765)", 7550765},
    {"Trainer Spell Item: Revive (#50766)", 7550766},
    {"Trainer Spell Item: Revive (#50767)", 7550767},
    {"Trainer Spell Item: Revive (#50768)", 7550768},
    {"Trainer Spell Item: Revive (#50769)", 7550769},
    {"Trainer Spell Item: Pestilence (#50842)", 7550842},
    {"Trainer Spell Item: Corpse Explosion (#51325)", 7551325},
    {"Trainer Spell Item: Corpse Explosion (#51326)", 7551326},
    {"Trainer Spell Item: Corpse Explosion (#51327)", 7551327},
    {"Trainer Spell Item: Corpse Explosion (#51328)", 7551328},
    {"Trainer Spell Item: Howling Blast (#51409)", 7551409},
    {"Trainer Spell Item: Howling Blast (#51410)", 7551410},
    {"Trainer Spell Item: Howling Blast (#51411)", 7551411},
    {"Trainer Spell Item: Frost Strike (#51416)", 7551416},
    {"Trainer Spell Item: Frost Strike (#51417)", 7551417},
    {"Trainer Spell Item: Frost Strike (#51418)", 7551418},
    {"Trainer Spell Item: Frost Strike (#51419)", 7551419},
    {"Trainer Spell Item: Obliterate (#51423)", 7551423},
    {"Trainer Spell Item: Obliterate (#51424)", 7551424},
    {"Trainer Spell Item: Obliterate (#51425)", 7551425},
    {"Trainer Spell Item: Lava Burst (#51505)", 7551505},
    {"Trainer Spell Item: Hex (#51514)", 7551514},
    {"Trainer Spell Item: Dismantle (#51722)", 7551722},
    {"Trainer Spell Item: Fan of Knives (#51723)", 7551723},
    {"Trainer Spell Item: Sap (#51724)", 7551724},
    {"Trainer Spell Item: Earthliving Weapon (#51730)", 7551730},
    {"Trainer Spell Item: Earthliving Weapon (#51988)", 7551988},
    {"Trainer Spell Item: Earthliving Weapon (#51991)", 7551991},
    {"Trainer Spell Item: Earthliving Weapon (#51992)", 7551992},
    {"Trainer Spell Item: Earthliving Weapon (#51993)", 7551993},
    {"Trainer Spell Item: Earthliving Weapon (#51994)", 7551994},
    {"Trainer Spell Item: Water Shield (#52127)", 7552127},
    {"Trainer Spell Item: Water Shield (#52129)", 7552129},
    {"Trainer Spell Item: Water Shield (#52131)", 7552131},
    {"Trainer Spell Item: Water Shield (#52134)", 7552134},
    {"Trainer Spell Item: Water Shield (#52136)", 7552136},
    {"Trainer Spell Item: Water Shield (#52138)", 7552138},
    {"Trainer Spell Item: Savage Roar (#52610)", 7552610},
    {"Trainer Spell Item: Penance (#53005)", 7553005},
    {"Trainer Spell Item: Penance (#53006)", 7553006},
    {"Trainer Spell Item: Penance (#53007)", 7553007},
    {"Trainer Spell Item: Mind Sear (#53023)", 7553023},
    {"Trainer Spell Item: Teleport: Dalaran (#53140)", 7553140},
    {"Trainer Spell Item: Portal: Dalaran (#53142)", 7553142},
    {"Trainer Spell Item: Starfall (#53199)", 7553199},
    {"Trainer Spell Item: Starfall (#53200)", 7553200},
    {"Trainer Spell Item: Starfall (#53201)", 7553201},
    {"Trainer Spell Item: Typhoon (#53223)", 7553223},
    {"Trainer Spell Item: Typhoon (#53225)", 7553225},
    {"Trainer Spell Item: Typhoon (#53226)", 7553226},
    {"Trainer Spell Item: Wild Growth (#53248)", 7553248},
    {"Trainer Spell Item: Wild Growth (#53249)", 7553249},
    {"Trainer Spell Item: Wild Growth (#53251)", 7553251},
    {"Trainer Spell Item: Master's Call (#53271)", 7553271},
    {"Trainer Spell Item: Thorns (#53307)", 7553307},
    {"Trainer Spell Item: Entangling Roots (#53308)", 7553308},
    {"Trainer Spell Item: Nature's Grasp (#53312)", 7553312},
    {"Trainer Spell Item: Rune of Swordshattering (#53323)", 7553323},
    {"Trainer Spell Item: Rune of Lichbane (#53331)", 7553331},
    {"Trainer Spell Item: Hunter's Mark (#53338)", 7553338},
    {"Trainer Spell Item: Mongoose Bite (#53339)", 7553339},
    {"Trainer Spell Item: Rune of Cinderglacier (#53341)", 7553341},
    {"Trainer Spell Item: Rune of Spellshattering (#53342)", 7553342},
    {"Trainer Spell Item: Rune of Razorice (#53343)", 7553343},
    {"Trainer Spell Item: Rune of the Fallen Crusader (#53344)", 7553344},
    {"Trainer Spell Item: Kill Shot (#53351)", 7553351},
    {"Trainer Spell Item: Judgement of Justice (#53407)", 7553407},
    {"Trainer Spell Item: Judgement of Wisdom (#53408)", 7553408},
    {"Trainer Spell Item: Shield of Righteousness (#53600)", 7553600},
    {"Trainer Spell Item: Sacred Shield (#53601)", 7553601},
    {"Trainer Spell Item: Seal of Corruption (#53736)", 7553736},
    {"Trainer Spell Item: Retribution Aura (#54043)", 7554043},
    {"Trainer Spell Item: Divine Plea (#54428)", 7554428},
    {"Trainer Spell Item: Rune of Swordbreaking (#54446)", 7554446},
    {"Trainer Spell Item: Rune of Spellbreaking (#54447)", 7554447},
    {"Trainer Spell Item: Heart Strike (#55258)", 7555258},
    {"Trainer Spell Item: Heart Strike (#55259)", 7555259},
    {"Trainer Spell Item: Heart Strike (#55260)", 7555260},
    {"Trainer Spell Item: Heart Strike (#55261)", 7555261},
    {"Trainer Spell Item: Heart Strike (#55262)", 7555262},
    {"Trainer Spell Item: Scourge Strike (#55265)", 7555265},
    {"Trainer Spell Item: Frost Strike (#55268)", 7555268},
    {"Trainer Spell Item: Scourge Strike (#55270)", 7555270},
    {"Trainer Spell Item: Scourge Strike (#55271)", 7555271},
    {"Trainer Spell Item: Mirror Image (#55342)", 7555342},
    {"Trainer Spell Item: Living Bomb (#55359)", 7555359},
    {"Trainer Spell Item: Living Bomb (#55360)", 7555360},
    {"Trainer Spell Item: Chain Heal (#55458)", 7555458},
    {"Trainer Spell Item: Chain Heal (#55459)", 7555459},
    {"Trainer Spell Item: Enraged Regeneration (#55694)", 7555694},
    {"Trainer Spell Item: Dark Command (#56222)", 7556222},
    {"Trainer Spell Item: Steady Shot (#56641)", 7556641},
    {"Trainer Spell Item: Rune Strike (#56815)", 7556815},
    {"Trainer Spell Item: Horn of Winter (#57330)", 7557330},
    {"Trainer Spell Item: Strength of Earth Totem (#57622)", 7557622},
    {"Trainer Spell Item: Horn of Winter (#57623)", 7557623},
    {"Trainer Spell Item: Totem of Wrath (#57720)", 7557720},
    {"Trainer Spell Item: Totem of Wrath (#57721)", 7557721},
    {"Trainer Spell Item: Totem of Wrath (#57722)", 7557722},
    {"Trainer Spell Item: Heroic Throw (#57755)", 7557755},
    {"Trainer Spell Item: Revenge (#57823)", 7557823},
    {"Trainer Spell Item: Tricks of the Trade (#57934)", 7557934},
    {"Trainer Spell Item: Life Tap (#57946)", 7557946},
    {"Trainer Spell Item: Water Shield (#57960)", 7557960},
    {"Trainer Spell Item: Envenom (#57992)", 7557992},
    {"Trainer Spell Item: Envenom (#57993)", 7557993},
    {"Trainer Spell Item: Wind Shear (#57994)", 7557994},
    {"Trainer Spell Item: Volley (#58431)", 7558431},
    {"Trainer Spell Item: Volley (#58434)", 7558434},
    {"Trainer Spell Item: Stoneclaw Totem (#58580)", 7558580},
    {"Trainer Spell Item: Stoneclaw Totem (#58581)", 7558581},
    {"Trainer Spell Item: Stoneclaw Totem (#58582)", 7558582},
    {"Trainer Spell Item: Strength of Earth Totem (#58643)", 7558643},
    {"Trainer Spell Item: Flametongue Totem (#58649)", 7558649},
    {"Trainer Spell Item: Flametongue Totem (#58652)", 7558652},
    {"Trainer Spell Item: Flametongue Totem (#58656)", 7558656},
    {"Trainer Spell Item: Ritual of Refreshment (#58659)", 7558659},
    {"Trainer Spell Item: Searing Totem (#58699)", 7558699},
    {"Trainer Spell Item: Searing Totem (#58703)", 7558703},
    {"Trainer Spell Item: Searing Totem (#58704)", 7558704},
    {"Trainer Spell Item: Magma Totem (#58731)", 7558731},
    {"Trainer Spell Item: Magma Totem (#58734)", 7558734},
    {"Trainer Spell Item: Fire Resistance Totem (#58737)", 7558737},
    {"Trainer Spell Item: Fire Resistance Totem (#58739)", 7558739},
    {"Trainer Spell Item: Frost Resistance Totem (#58741)", 7558741},
    {"Trainer Spell Item: Frost Resistance Totem (#58745)", 7558745},
    {"Trainer Spell Item: Nature Resistance Totem (#58746)", 7558746},
    {"Trainer Spell Item: Nature Resistance Totem (#58749)", 7558749},
    {"Trainer Spell Item: Stoneskin Totem (#58751)", 7558751},
    {"Trainer Spell Item: Stoneskin Totem (#58753)", 7558753},
    {"Trainer Spell Item: Healing Stream Totem (#58755)", 7558755},
    {"Trainer Spell Item: Healing Stream Totem (#58756)", 7558756},
    {"Trainer Spell Item: Healing Stream Totem (#58757)", 7558757},
    {"Trainer Spell Item: Mana Spring Totem (#58771)", 7558771},
    {"Trainer Spell Item: Mana Spring Totem (#58773)", 7558773},
    {"Trainer Spell Item: Mana Spring Totem (#58774)", 7558774},
    {"Trainer Spell Item: Flametongue Weapon (#58785)", 7558785},
    {"Trainer Spell Item: Flametongue Weapon (#58789)", 7558789},
    {"Trainer Spell Item: Flametongue Weapon (#58790)", 7558790},
    {"Trainer Spell Item: Frostbrand Weapon (#58794)", 7558794},
    {"Trainer Spell Item: Frostbrand Weapon (#58795)", 7558795},
    {"Trainer Spell Item: Frostbrand Weapon (#58796)", 7558796},
    {"Trainer Spell Item: Windfury Weapon (#58801)", 7558801},
    {"Trainer Spell Item: Windfury Weapon (#58803)", 7558803},
    {"Trainer Spell Item: Windfury Weapon (#58804)", 7558804},
    {"Trainer Spell Item: Ritual of Souls (#58887)", 7558887},
    {"Trainer Spell Item: Dark Pact (#59092)", 7559092},
    {"Trainer Spell Item: Thunderstorm (#59156)", 7559156},
    {"Trainer Spell Item: Thunderstorm (#59158)", 7559158},
    {"Trainer Spell Item: Thunderstorm (#59159)", 7559159},
    {"Trainer Spell Item: Haunt (#59161)", 7559161},
    {"Trainer Spell Item: Haunt (#59163)", 7559163},
    {"Trainer Spell Item: Haunt (#59164)", 7559164},
    {"Trainer Spell Item: Chaos Bolt (#59170)", 7559170},
    {"Trainer Spell Item: Chaos Bolt (#59171)", 7559171},
    {"Trainer Spell Item: Chaos Bolt (#59172)", 7559172},
    {"Trainer Spell Item: Lava Burst (#60043)", 7560043},
    {"Trainer Spell Item: Explosive Shot (#60051)", 7560051},
    {"Trainer Spell Item: Explosive Shot (#60052)", 7560052},
    {"Trainer Spell Item: Explosive Shot (#60053)", 7560053},
    {"Trainer Spell Item: Freezing Arrow (#60192)", 7560192},
    {"Trainer Spell Item: Create Firestone (#60219)", 7560219},
    {"Trainer Spell Item: Create Firestone (#60220)", 7560220},
    {"Trainer Spell Item: Kill Shot (#61005)", 7561005},
    {"Trainer Spell Item: Kill Shot (#61006)", 7561006},
    {"Trainer Spell Item: Enslave Demon (#61191)", 7561191},
    {"Trainer Spell Item: Shadowflame (#61290)", 7561290},
    {"Trainer Spell Item: Riptide (#61299)", 7561299},
    {"Trainer Spell Item: Riptide (#61300)", 7561300},
    {"Trainer Spell Item: Riptide (#61301)", 7561301},
    {"Trainer Spell Item: Typhoon (#61384)", 7561384},
    {"Trainer Spell Item: Shield of Righteousness (#61411)", 7561411},
    {"Trainer Spell Item: Fire Nova (#61649)", 7561649},
    {"Trainer Spell Item: Fire Nova (#61657)", 7561657},
    {"Trainer Spell Item: Aspect of the Dragonhawk (#61846)", 7561846},
    {"Trainer Spell Item: Aspect of the Dragonhawk (#61847)", 7561847},
    {"Trainer Spell Item: Raise Ally (#61999)", 7561999},
    {"Trainer Spell Item: Swipe (Cat) (#62078)", 7562078},
    {"Trainer Spell Item: Hand of Reckoning (#62124)", 7562124},
    {"Trainer Spell Item: Rune of the Stoneskin Gargoyle (#62158)", 7562158},
    {"Trainer Spell Item: Savage Defense (#62600)", 7562600},
    {"Trainer Spell Item: Call Stabled Pet (#62757)", 7562757},
    {"Trainer Spell Item: Black Arrow (#63668)", 7563668},
    {"Trainer Spell Item: Black Arrow (#63669)", 7563669},
    {"Trainer Spell Item: Black Arrow (#63670)", 7563670},
    {"Trainer Spell Item: Black Arrow (#63671)", 7563671},
    {"Trainer Spell Item: Black Arrow (#63672)", 7563672},
    {"Trainer Spell Item: Shattering Throw (#64382)", 7564382},
    {"Trainer Spell Item: Divine Hymn (#64843)", 7564843},
    {"Trainer Spell Item: Hymn of Hope (#64901)", 7564901},
    {"Trainer Spell Item: Call of the Elements (#66842)", 7566842},
    {"Trainer Spell Item: Call of the Ancestors (#66843)", 7566843},
    {"Trainer Spell Item: Call of the Spirits (#66844)", 7566844},
    {"Trainer Spell Item: Rune of the Nerubian Carapace (#70164)", 7570164},
};
inline std::map<std::string, uint32_t> BuildITEMS()
{
    std::map<std::string, uint32_t> result;
    for (auto const& row : ITEMS_RAW)
        result.emplace(row.first, row.second);
    return result;
}
inline const std::map<std::string, uint32_t> ITEMS = BuildITEMS();
inline constexpr std::pair<uint32_t, int64_t> SPELL_ID_TO_LOCATION_ID_RAW[] = {
    { 10, 7000010 }, // "Trainer Spell: Blizzard (#10)"
    { 17, 7000017 }, // "Trainer Spell: Power Word: Shield (#17)"
    { 53, 7000053 }, // "Trainer Spell: Backstab (#53)"
    { 66, 7000066 }, // "Trainer Spell: Invisibility (#66)"
    { 72, 7000072 }, // "Trainer Spell: Shield Bash (#72)"
    { 99, 7000099 }, // "Trainer Spell: Demoralizing Roar (#99)"
    { 100, 7000100 }, // "Trainer Spell: Charge (#100)"
    { 116, 7000116 }, // "Trainer Spell: Frostbolt (#116)"
    { 118, 7000118 }, // "Trainer Spell: Polymorph (#118)"
    { 120, 7000120 }, // "Trainer Spell: Cone of Cold (#120)"
    { 122, 7000122 }, // "Trainer Spell: Frost Nova (#122)"
    { 126, 7000126 }, // "Trainer Spell: Eye of Kilrogg (#126)"
    { 130, 7000130 }, // "Trainer Spell: Slow Fall (#130)"
    { 131, 7000131 }, // "Trainer Spell: Water Breathing (#131)"
    { 132, 7000132 }, // "Trainer Spell: Detect Invisibility (#132)"
    { 136, 7000136 }, // "Trainer Spell: Mend Pet (#136)"
    { 139, 7000139 }, // "Trainer Spell: Renew (#139)"
    { 143, 7000143 }, // "Trainer Spell: Fireball (#143)"
    { 145, 7000145 }, // "Trainer Spell: Fireball (#145)"
    { 172, 7000172 }, // "Trainer Spell: Corruption (#172)"
    { 205, 7000205 }, // "Trainer Spell: Frostbolt (#205)"
    { 284, 7000284 }, // "Trainer Spell: Heroic Strike (#284)"
    { 285, 7000285 }, // "Trainer Spell: Heroic Strike (#285)"
    { 324, 7000324 }, // "Trainer Spell: Lightning Shield (#324)"
    { 325, 7000325 }, // "Trainer Spell: Lightning Shield (#325)"
    { 332, 7000332 }, // "Trainer Spell: Healing Wave (#332)"
    { 339, 7000339 }, // "Trainer Spell: Entangling Roots (#339)"
    { 348, 7000348 }, // "Trainer Spell: Immolate (#348)"
    { 370, 7000370 }, // "Trainer Spell: Purge (#370)"
    { 408, 7000408 }, // "Trainer Spell: Kidney Shot (#408)"
    { 421, 7000421 }, // "Trainer Spell: Chain Lightning (#421)"
    { 453, 7000453 }, // "Trainer Spell: Mind Soothe (#453)"
    { 465, 7000465 }, // "Trainer Spell: Devotion Aura (#465)"
    { 467, 7000467 }, // "Trainer Spell: Thorns (#467)"
    { 469, 7000469 }, // "Trainer Spell: Commanding Shout (#469)"
    { 475, 7000475 }, // "Trainer Spell: Remove Curse (#475)"
    { 498, 7000498 }, // "Trainer Spell: Divine Protection (#498)"
    { 526, 7000526 }, // "Trainer Spell: Cure Toxins (#526)"
    { 527, 7000527 }, // "Trainer Spell: Dispel Magic (#527)"
    { 528, 7000528 }, // "Trainer Spell: Cure Disease (#528)"
    { 529, 7000529 }, // "Trainer Spell: Lightning Bolt (#529)"
    { 543, 7000543 }, // "Trainer Spell: Fire Ward (#543)"
    { 546, 7000546 }, // "Trainer Spell: Water Walking (#546)"
    { 547, 7000547 }, // "Trainer Spell: Healing Wave (#547)"
    { 548, 7000548 }, // "Trainer Spell: Lightning Bolt (#548)"
    { 552, 7000552 }, // "Trainer Spell: Abolish Disease (#552)"
    { 556, 7000556 }, // "Trainer Spell: Astral Recall (#556)"
    { 586, 7000586 }, // "Trainer Spell: Fade (#586)"
    { 587, 7000587 }, // "Trainer Spell: Conjure Food (#587)"
    { 588, 7000588 }, // "Trainer Spell: Inner Fire (#588)"
    { 589, 7000589 }, // "Trainer Spell: Shadow Word: Pain (#589)"
    { 591, 7000591 }, // "Trainer Spell: Smite (#591)"
    { 592, 7000592 }, // "Trainer Spell: Power Word: Shield (#592)"
    { 594, 7000594 }, // "Trainer Spell: Shadow Word: Pain (#594)"
    { 596, 7000596 }, // "Trainer Spell: Prayer of Healing (#596)"
    { 597, 7000597 }, // "Trainer Spell: Conjure Food (#597)"
    { 598, 7000598 }, // "Trainer Spell: Smite (#598)"
    { 602, 7000602 }, // "Trainer Spell: Inner Fire (#602)"
    { 603, 7000603 }, // "Trainer Spell: Curse of Doom (#603)"
    { 604, 7000604 }, // "Trainer Spell: Dampen Magic (#604)"
    { 605, 7000605 }, // "Trainer Spell: Mind Control (#605)"
    { 633, 7000633 }, // "Trainer Spell: Lay on Hands (#633)"
    { 639, 7000639 }, // "Trainer Spell: Holy Light (#639)"
    { 642, 7000642 }, // "Trainer Spell: Divine Shield (#642)"
    { 643, 7000643 }, // "Trainer Spell: Devotion Aura (#643)"
    { 647, 7000647 }, // "Trainer Spell: Holy Light (#647)"
    { 674, 7000674 }, // "Trainer Spell: Dual Wield (#674)"
    { 676, 7000676 }, // "Trainer Spell: Disarm (#676)"
    { 688, 7000688 }, // "Trainer Spell: Summon Imp (#688)"
    { 689, 7000689 }, // "Trainer Spell: Drain Life (#689)"
    { 693, 7000693 }, // "Trainer Spell: Create Soulstone (#693)"
    { 694, 7000694 }, // "Trainer Spell: Mocking Blow (#694)"
    { 695, 7000695 }, // "Trainer Spell: Shadow Bolt (#695)"
    { 696, 7000696 }, // "Trainer Spell: Demon Skin (#696)"
    { 698, 7000698 }, // "Trainer Spell: Ritual of Summoning (#698)"
    { 699, 7000699 }, // "Trainer Spell: Drain Life (#699)"
    { 702, 7000702 }, // "Trainer Spell: Curse of Weakness (#702)"
    { 703, 7000703 }, // "Trainer Spell: Garrote (#703)"
    { 705, 7000705 }, // "Trainer Spell: Shadow Bolt (#705)"
    { 706, 7000706 }, // "Trainer Spell: Demon Armor (#706)"
    { 707, 7000707 }, // "Trainer Spell: Immolate (#707)"
    { 709, 7000709 }, // "Trainer Spell: Drain Life (#709)"
    { 710, 7000710 }, // "Trainer Spell: Banish (#710)"
    { 740, 7000740 }, // "Trainer Spell: Tranquility (#740)"
    { 750, 7000750 }, // "Trainer Spell: Plate Mail (#750)"
    { 755, 7000755 }, // "Trainer Spell: Health Funnel (#755)"
    { 759, 7000759 }, // "Trainer Spell: Conjure Mana Gem (#759)"
    { 768, 7000768 }, // "Trainer Spell: Cat Form (#768)"
    { 769, 7000769 }, // "Trainer Spell: Swipe (Bear) (#769)"
    { 770, 7000770 }, // "Trainer Spell: Faerie Fire (#770)"
    { 772, 7000772 }, // "Trainer Spell: Rend (#772)"
    { 774, 7000774 }, // "Trainer Spell: Rejuvenation (#774)"
    { 779, 7000779 }, // "Trainer Spell: Swipe (Bear) (#779)"
    { 780, 7000780 }, // "Trainer Spell: Swipe (Bear) (#780)"
    { 781, 7000781 }, // "Trainer Spell: Disengage (#781)"
    { 782, 7000782 }, // "Trainer Spell: Thorns (#782)"
    { 783, 7000783 }, // "Trainer Spell: Travel Form (#783)"
    { 837, 7000837 }, // "Trainer Spell: Frostbolt (#837)"
    { 845, 7000845 }, // "Trainer Spell: Cleave (#845)"
    { 853, 7000853 }, // "Trainer Spell: Hammer of Justice (#853)"
    { 865, 7000865 }, // "Trainer Spell: Frost Nova (#865)"
    { 871, 7000871 }, // "Trainer Spell: Shield Wall (#871)"
    { 879, 7000879 }, // "Trainer Spell: Exorcism (#879)"
    { 905, 7000905 }, // "Trainer Spell: Lightning Shield (#905)"
    { 913, 7000913 }, // "Trainer Spell: Healing Wave (#913)"
    { 915, 7000915 }, // "Trainer Spell: Lightning Bolt (#915)"
    { 921, 7000921 }, // "Trainer Spell: Pick Pocket (#921)"
    { 930, 7000930 }, // "Trainer Spell: Chain Lightning (#930)"
    { 939, 7000939 }, // "Trainer Spell: Healing Wave (#939)"
    { 943, 7000943 }, // "Trainer Spell: Lightning Bolt (#943)"
    { 945, 7000945 }, // "Trainer Spell: Lightning Shield (#945)"
    { 959, 7000959 }, // "Trainer Spell: Healing Wave (#959)"
    { 970, 7000970 }, // "Trainer Spell: Shadow Word: Pain (#970)"
    { 976, 7000976 }, // "Trainer Spell: Shadow Protection (#976)"
    { 980, 7000980 }, // "Trainer Spell: Curse of Agony (#980)"
    { 984, 7000984 }, // "Trainer Spell: Smite (#984)"
    { 988, 7000988 }, // "Trainer Spell: Dispel Magic (#988)"
    { 990, 7000990 }, // "Trainer Spell: Conjure Food (#990)"
    { 992, 7000992 }, // "Trainer Spell: Shadow Word: Pain (#992)"
    { 996, 7000996 }, // "Trainer Spell: Prayer of Healing (#996)"
    { 1002, 7001002 }, // "Trainer Spell: Eyes of the Beast (#1002)"
    { 1004, 7001004 }, // "Trainer Spell: Smite (#1004)"
    { 1006, 7001006 }, // "Trainer Spell: Inner Fire (#1006)"
    { 1008, 7001008 }, // "Trainer Spell: Amplify Magic (#1008)"
    { 1014, 7001014 }, // "Trainer Spell: Curse of Agony (#1014)"
    { 1022, 7001022 }, // "Trainer Spell: Hand of Protection (#1022)"
    { 1026, 7001026 }, // "Trainer Spell: Holy Light (#1026)"
    { 1032, 7001032 }, // "Trainer Spell: Devotion Aura (#1032)"
    { 1038, 7001038 }, // "Trainer Spell: Hand of Salvation (#1038)"
    { 1042, 7001042 }, // "Trainer Spell: Holy Light (#1042)"
    { 1044, 7001044 }, // "Trainer Spell: Hand of Freedom (#1044)"
    { 1058, 7001058 }, // "Trainer Spell: Rejuvenation (#1058)"
    { 1062, 7001062 }, // "Trainer Spell: Entangling Roots (#1062)"
    { 1064, 7001064 }, // "Trainer Spell: Chain Heal (#1064)"
    { 1066, 7001066 }, // "Trainer Spell: Aquatic Form (#1066)"
    { 1075, 7001075 }, // "Trainer Spell: Thorns (#1075)"
    { 1079, 7001079 }, // "Trainer Spell: Rip (#1079)"
    { 1082, 7001082 }, // "Trainer Spell: Claw (#1082)"
    { 1086, 7001086 }, // "Trainer Spell: Demon Armor (#1086)"
    { 1088, 7001088 }, // "Trainer Spell: Shadow Bolt (#1088)"
    { 1098, 7001098 }, // "Trainer Spell: Enslave Demon (#1098)"
    { 1106, 7001106 }, // "Trainer Spell: Shadow Bolt (#1106)"
    { 1108, 7001108 }, // "Trainer Spell: Curse of Weakness (#1108)"
    { 1120, 7001120 }, // "Trainer Spell: Drain Soul (#1120)"
    { 1126, 7001126 }, // "Trainer Spell: Mark of the Wild (#1126)"
    { 1130, 7001130 }, // "Trainer Spell: Hunter's Mark (#1130)"
    { 1152, 7001152 }, // "Trainer Spell: Purify (#1152)"
    { 1160, 7001160 }, // "Trainer Spell: Demoralizing Shout (#1160)"
    { 1161, 7001161 }, // "Trainer Spell: Challenging Shout (#1161)"
    { 1243, 7001243 }, // "Trainer Spell: Power Word: Fortitude (#1243)"
    { 1244, 7001244 }, // "Trainer Spell: Power Word: Fortitude (#1244)"
    { 1245, 7001245 }, // "Trainer Spell: Power Word: Fortitude (#1245)"
    { 1430, 7001430 }, // "Trainer Spell: Rejuvenation (#1430)"
    { 1449, 7001449 }, // "Trainer Spell: Arcane Explosion (#1449)"
    { 1454, 7001454 }, // "Trainer Spell: Life Tap (#1454)"
    { 1455, 7001455 }, // "Trainer Spell: Life Tap (#1455)"
    { 1456, 7001456 }, // "Trainer Spell: Life Tap (#1456)"
    { 1459, 7001459 }, // "Trainer Spell: Arcane Intellect (#1459)"
    { 1460, 7001460 }, // "Trainer Spell: Arcane Intellect (#1460)"
    { 1461, 7001461 }, // "Trainer Spell: Arcane Intellect (#1461)"
    { 1462, 7001462 }, // "Trainer Spell: Beast Lore (#1462)"
    { 1463, 7001463 }, // "Trainer Spell: Mana Shield (#1463)"
    { 1464, 7001464 }, // "Trainer Spell: Slam (#1464)"
    { 1490, 7001490 }, // "Trainer Spell: Curse of the Elements (#1490)"
    { 1494, 7001494 }, // "Trainer Spell: Track Beasts (#1494)"
    { 1495, 7001495 }, // "Trainer Spell: Mongoose Bite (#1495)"
    { 1499, 7001499 }, // "Trainer Spell: Freezing Trap (#1499)"
    { 1510, 7001510 }, // "Trainer Spell: Volley (#1510)"
    { 1513, 7001513 }, // "Trainer Spell: Scare Beast (#1513)"
    { 1535, 7001535 }, // "Trainer Spell: Fire Nova (#1535)"
    { 1543, 7001543 }, // "Trainer Spell: Flare (#1543)"
    { 1608, 7001608 }, // "Trainer Spell: Heroic Strike (#1608)"
    { 1680, 7001680 }, // "Trainer Spell: Whirlwind (#1680)"
    { 1706, 7001706 }, // "Trainer Spell: Levitate (#1706)"
    { 1710, 7001710 }, // "Trainer Spell: Summon Felsteed (#1710)"
    { 1714, 7001714 }, // "Trainer Spell: Curse of Tongues (#1714)"
    { 1715, 7001715 }, // "Trainer Spell: Hamstring (#1715)"
    { 1719, 7001719 }, // "Trainer Spell: Recklessness (#1719)"
    { 1725, 7001725 }, // "Trainer Spell: Distract (#1725)"
    { 1735, 7001735 }, // "Trainer Spell: Demoralizing Roar (#1735)"
    { 1757, 7001757 }, // "Trainer Spell: Sinister Strike (#1757)"
    { 1758, 7001758 }, // "Trainer Spell: Sinister Strike (#1758)"
    { 1759, 7001759 }, // "Trainer Spell: Sinister Strike (#1759)"
    { 1760, 7001760 }, // "Trainer Spell: Sinister Strike (#1760)"
    { 1766, 7001766 }, // "Trainer Spell: Kick (#1766)"
    { 1776, 7001776 }, // "Trainer Spell: Gouge (#1776)"
    { 1784, 7001784 }, // "Trainer Spell: Stealth (#1784)"
    { 1804, 7001804 }, // "Trainer Spell: Pick Lock (#1804)"
    { 1822, 7001822 }, // "Trainer Spell: Rake (#1822)"
    { 1823, 7001823 }, // "Trainer Spell: Rake (#1823)"
    { 1824, 7001824 }, // "Trainer Spell: Rake (#1824)"
    { 1833, 7001833 }, // "Trainer Spell: Cheap Shot (#1833)"
    { 1842, 7001842 }, // "Trainer Spell: Disarm Trap (#1842)"
    { 1850, 7001850 }, // "Trainer Spell: Dash (#1850)"
    { 1856, 7001856 }, // "Trainer Spell: Vanish (#1856)"
    { 1857, 7001857 }, // "Trainer Spell: Vanish (#1857)"
    { 1860, 7001860 }, // "Trainer Spell: Safe Fall (#1860)"
    { 1943, 7001943 }, // "Trainer Spell: Rupture (#1943)"
    { 1949, 7001949 }, // "Trainer Spell: Hellfire (#1949)"
    { 1953, 7001953 }, // "Trainer Spell: Blink (#1953)"
    { 1966, 7001966 }, // "Trainer Spell: Feint (#1966)"
    { 1978, 7001978 }, // "Trainer Spell: Serpent Sting (#1978)"
    { 2006, 7002006 }, // "Trainer Spell: Resurrection (#2006)"
    { 2008, 7002008 }, // "Trainer Spell: Ancestral Spirit (#2008)"
    { 2010, 7002010 }, // "Trainer Spell: Resurrection (#2010)"
    { 2048, 7002048 }, // "Trainer Spell: Battle Shout (#2048)"
    { 2052, 7002052 }, // "Trainer Spell: Lesser Heal (#2052)"
    { 2053, 7002053 }, // "Trainer Spell: Lesser Heal (#2053)"
    { 2054, 7002054 }, // "Trainer Spell: Heal (#2054)"
    { 2055, 7002055 }, // "Trainer Spell: Heal (#2055)"
    { 2060, 7002060 }, // "Trainer Spell: Greater Heal (#2060)"
    { 2061, 7002061 }, // "Trainer Spell: Flash Heal (#2061)"
    { 2062, 7002062 }, // "Trainer Spell: Earth Elemental Totem (#2062)"
    { 2070, 7002070 }, // "Trainer Spell: Sap (#2070)"
    { 2090, 7002090 }, // "Trainer Spell: Rejuvenation (#2090)"
    { 2091, 7002091 }, // "Trainer Spell: Rejuvenation (#2091)"
    { 2094, 7002094 }, // "Trainer Spell: Blind (#2094)"
    { 2096, 7002096 }, // "Trainer Spell: Mind Vision (#2096)"
    { 2120, 7002120 }, // "Trainer Spell: Flamestrike (#2120)"
    { 2121, 7002121 }, // "Trainer Spell: Flamestrike (#2121)"
    { 2136, 7002136 }, // "Trainer Spell: Fire Blast (#2136)"
    { 2137, 7002137 }, // "Trainer Spell: Fire Blast (#2137)"
    { 2138, 7002138 }, // "Trainer Spell: Fire Blast (#2138)"
    { 2139, 7002139 }, // "Trainer Spell: Counterspell (#2139)"
    { 2362, 7002362 }, // "Trainer Spell: Create Spellstone (#2362)"
    { 2484, 7002484 }, // "Trainer Spell: Earthbind Totem (#2484)"
    { 2565, 7002565 }, // "Trainer Spell: Shield Block (#2565)"
    { 2589, 7002589 }, // "Trainer Spell: Backstab (#2589)"
    { 2590, 7002590 }, // "Trainer Spell: Backstab (#2590)"
    { 2591, 7002591 }, // "Trainer Spell: Backstab (#2591)"
    { 2637, 7002637 }, // "Trainer Spell: Hibernate (#2637)"
    { 2643, 7002643 }, // "Trainer Spell: Multi-Shot (#2643)"
    { 2645, 7002645 }, // "Trainer Spell: Ghost Wolf (#2645)"
    { 2687, 7002687 }, // "Trainer Spell: Bloodrage (#2687)"
    { 2767, 7002767 }, // "Trainer Spell: Shadow Word: Pain (#2767)"
    { 2782, 7002782 }, // "Trainer Spell: Remove Curse (#2782)"
    { 2791, 7002791 }, // "Trainer Spell: Power Word: Fortitude (#2791)"
    { 2800, 7002800 }, // "Trainer Spell: Lay on Hands (#2800)"
    { 2812, 7002812 }, // "Trainer Spell: Holy Wrath (#2812)"
    { 2825, 7002825 }, // "Trainer Spell: Bloodlust (#2825)"
    { 2836, 7002836 }, // "Trainer Spell: Detect Traps (#2836)"
    { 2860, 7002860 }, // "Trainer Spell: Chain Lightning (#2860)"
    { 2893, 7002893 }, // "Trainer Spell: Abolish Poison (#2893)"
    { 2894, 7002894 }, // "Trainer Spell: Fire Elemental Totem (#2894)"
    { 2908, 7002908 }, // "Trainer Spell: Soothe Animal (#2908)"
    { 2912, 7002912 }, // "Trainer Spell: Starfire (#2912)"
    { 2941, 7002941 }, // "Trainer Spell: Immolate (#2941)"
    { 2944, 7002944 }, // "Trainer Spell: Devouring Plague (#2944)"
    { 2948, 7002948 }, // "Trainer Spell: Scorch (#2948)"
    { 2974, 7002974 }, // "Trainer Spell: Wing Clip (#2974)"
    { 2983, 7002983 }, // "Trainer Spell: Sprint (#2983)"
    { 3029, 7003029 }, // "Trainer Spell: Claw (#3029)"
    { 3034, 7003034 }, // "Trainer Spell: Viper Sting (#3034)"
    { 3043, 7003043 }, // "Trainer Spell: Scorpid Sting (#3043)"
    { 3044, 7003044 }, // "Trainer Spell: Arcane Shot (#3044)"
    { 3045, 7003045 }, // "Trainer Spell: Rapid Fire (#3045)"
    { 3111, 7003111 }, // "Trainer Spell: Mend Pet (#3111)"
    { 3127, 7003127 }, // "Trainer Spell: Parry (#3127)"
    { 3140, 7003140 }, // "Trainer Spell: Fireball (#3140)"
    { 3411, 7003411 }, // "Trainer Spell: Intervene (#3411)"
    { 3472, 7003472 }, // "Trainer Spell: Holy Light (#3472)"
    { 3552, 7003552 }, // "Trainer Spell: Conjure Mana Gem (#3552)"
    { 3561, 7003561 }, // "Trainer Spell: Teleport: Stormwind (#3561)"
    { 3562, 7003562 }, // "Trainer Spell: Teleport: Ironforge (#3562)"
    { 3563, 7003563 }, // "Trainer Spell: Teleport: Undercity (#3563)"
    { 3565, 7003565 }, // "Trainer Spell: Teleport: Darnassus (#3565)"
    { 3566, 7003566 }, // "Trainer Spell: Teleport: Thunder Bluff (#3566)"
    { 3567, 7003567 }, // "Trainer Spell: Teleport: Orgrimmar (#3567)"
    { 3627, 7003627 }, // "Trainer Spell: Rejuvenation (#3627)"
    { 3661, 7003661 }, // "Trainer Spell: Mend Pet (#3661)"
    { 3662, 7003662 }, // "Trainer Spell: Mend Pet (#3662)"
    { 3698, 7003698 }, // "Trainer Spell: Health Funnel (#3698)"
    { 3699, 7003699 }, // "Trainer Spell: Health Funnel (#3699)"
    { 3700, 7003700 }, // "Trainer Spell: Health Funnel (#3700)"
    { 3714, 7003714 }, // "Trainer Spell: Path of Frost (#3714)"
    { 3738, 7003738 }, // "Trainer Spell: Wrath of Air Totem (#3738)"
    { 3747, 7003747 }, // "Trainer Spell: Power Word: Shield (#3747)"
    { 4987, 7004987 }, // "Trainer Spell: Cleanse (#4987)"
    { 5116, 7005116 }, // "Trainer Spell: Concussive Shot (#5116)"
    { 5118, 7005118 }, // "Trainer Spell: Aspect of the Cheetah (#5118)"
    { 5138, 7005138 }, // "Trainer Spell: Drain Mana (#5138)"
    { 5143, 7005143 }, // "Trainer Spell: Arcane Missiles (#5143)"
    { 5144, 7005144 }, // "Trainer Spell: Arcane Missiles (#5144)"
    { 5145, 7005145 }, // "Trainer Spell: Arcane Missiles (#5145)"
    { 5171, 7005171 }, // "Trainer Spell: Slice and Dice (#5171)"
    { 5177, 7005177 }, // "Trainer Spell: Wrath (#5177)"
    { 5178, 7005178 }, // "Trainer Spell: Wrath (#5178)"
    { 5179, 7005179 }, // "Trainer Spell: Wrath (#5179)"
    { 5180, 7005180 }, // "Trainer Spell: Wrath (#5180)"
    { 5186, 7005186 }, // "Trainer Spell: Healing Touch (#5186)"
    { 5187, 7005187 }, // "Trainer Spell: Healing Touch (#5187)"
    { 5188, 7005188 }, // "Trainer Spell: Healing Touch (#5188)"
    { 5189, 7005189 }, // "Trainer Spell: Healing Touch (#5189)"
    { 5195, 7005195 }, // "Trainer Spell: Entangling Roots (#5195)"
    { 5196, 7005196 }, // "Trainer Spell: Entangling Roots (#5196)"
    { 5201, 7005201 }, // "Trainer Spell: Claw (#5201)"
    { 5209, 7005209 }, // "Trainer Spell: Challenging Roar (#5209)"
    { 5211, 7005211 }, // "Trainer Spell: Bash (#5211)"
    { 5215, 7005215 }, // "Trainer Spell: Prowl (#5215)"
    { 5217, 7005217 }, // "Trainer Spell: Tiger's Fury (#5217)"
    { 5221, 7005221 }, // "Trainer Spell: Shred (#5221)"
    { 5225, 7005225 }, // "Trainer Spell: Track Humanoids (#5225)"
    { 5229, 7005229 }, // "Trainer Spell: Enrage (#5229)"
    { 5232, 7005232 }, // "Trainer Spell: Mark of the Wild (#5232)"
    { 5234, 7005234 }, // "Trainer Spell: Mark of the Wild (#5234)"
    { 5242, 7005242 }, // "Trainer Spell: Battle Shout (#5242)"
    { 5246, 7005246 }, // "Trainer Spell: Intimidating Shout (#5246)"
    { 5277, 7005277 }, // "Trainer Spell: Evasion (#5277)"
    { 5308, 7005308 }, // "Trainer Spell: Execute (#5308)"
    { 5384, 7005384 }, // "Trainer Spell: Feign Death (#5384)"
    { 5484, 7005484 }, // "Trainer Spell: Howl of Terror (#5484)"
    { 5500, 7005500 }, // "Trainer Spell: Sense Demons (#5500)"
    { 5502, 7005502 }, // "Trainer Spell: Sense Undead (#5502)"
    { 5504, 7005504 }, // "Trainer Spell: Conjure Water (#5504)"
    { 5505, 7005505 }, // "Trainer Spell: Conjure Water (#5505)"
    { 5506, 7005506 }, // "Trainer Spell: Conjure Water (#5506)"
    { 5588, 7005588 }, // "Trainer Spell: Hammer of Justice (#5588)"
    { 5589, 7005589 }, // "Trainer Spell: Hammer of Justice (#5589)"
    { 5599, 7005599 }, // "Trainer Spell: Hand of Protection (#5599)"
    { 5614, 7005614 }, // "Trainer Spell: Exorcism (#5614)"
    { 5615, 7005615 }, // "Trainer Spell: Exorcism (#5615)"
    { 5675, 7005675 }, // "Trainer Spell: Mana Spring Totem (#5675)"
    { 5676, 7005676 }, // "Trainer Spell: Searing Pain (#5676)"
    { 5697, 7005697 }, // "Trainer Spell: Unending Breath (#5697)"
    { 5699, 7005699 }, // "Trainer Spell: Create Healthstone (#5699)"
    { 5730, 7005730 }, // "Trainer Spell: Stoneclaw Totem (#5730)"
    { 5740, 7005740 }, // "Trainer Spell: Rain of Fire (#5740)"
    { 5782, 7005782 }, // "Trainer Spell: Fear (#5782)"
    { 5938, 7005938 }, // "Trainer Spell: Shiv (#5938)"
    { 6041, 7006041 }, // "Trainer Spell: Lightning Bolt (#6041)"
    { 6060, 7006060 }, // "Trainer Spell: Smite (#6060)"
    { 6064, 7006064 }, // "Trainer Spell: Heal (#6064)"
    { 6065, 7006065 }, // "Trainer Spell: Power Word: Shield (#6065)"
    { 6066, 7006066 }, // "Trainer Spell: Power Word: Shield (#6066)"
    { 6074, 7006074 }, // "Trainer Spell: Renew (#6074)"
    { 6075, 7006075 }, // "Trainer Spell: Renew (#6075)"
    { 6076, 7006076 }, // "Trainer Spell: Renew (#6076)"
    { 6077, 7006077 }, // "Trainer Spell: Renew (#6077)"
    { 6078, 7006078 }, // "Trainer Spell: Renew (#6078)"
    { 6117, 7006117 }, // "Trainer Spell: Mage Armor (#6117)"
    { 6127, 7006127 }, // "Trainer Spell: Conjure Water (#6127)"
    { 6129, 7006129 }, // "Trainer Spell: Conjure Food (#6129)"
    { 6131, 7006131 }, // "Trainer Spell: Frost Nova (#6131)"
    { 6141, 7006141 }, // "Trainer Spell: Blizzard (#6141)"
    { 6143, 7006143 }, // "Trainer Spell: Frost Ward (#6143)"
    { 6178, 7006178 }, // "Trainer Spell: Charge (#6178)"
    { 6190, 7006190 }, // "Trainer Spell: Demoralizing Shout (#6190)"
    { 6192, 7006192 }, // "Trainer Spell: Battle Shout (#6192)"
    { 6196, 7006196 }, // "Trainer Spell: Far Sight (#6196)"
    { 6197, 7006197 }, // "Trainer Spell: Eagle Eye (#6197)"
    { 6201, 7006201 }, // "Trainer Spell: Create Healthstone (#6201)"
    { 6202, 7006202 }, // "Trainer Spell: Create Healthstone (#6202)"
    { 6205, 7006205 }, // "Trainer Spell: Curse of Weakness (#6205)"
    { 6213, 7006213 }, // "Trainer Spell: Fear (#6213)"
    { 6215, 7006215 }, // "Trainer Spell: Fear (#6215)"
    { 6217, 7006217 }, // "Trainer Spell: Curse of Agony (#6217)"
    { 6219, 7006219 }, // "Trainer Spell: Rain of Fire (#6219)"
    { 6222, 7006222 }, // "Trainer Spell: Corruption (#6222)"
    { 6223, 7006223 }, // "Trainer Spell: Corruption (#6223)"
    { 6229, 7006229 }, // "Trainer Spell: Shadow Ward (#6229)"
    { 6343, 7006343 }, // "Trainer Spell: Thunder Clap (#6343)"
    { 6346, 7006346 }, // "Trainer Spell: Fear Ward (#6346)"
    { 6353, 7006353 }, // "Trainer Spell: Soul Fire (#6353)"
    { 6363, 7006363 }, // "Trainer Spell: Searing Totem (#6363)"
    { 6364, 7006364 }, // "Trainer Spell: Searing Totem (#6364)"
    { 6365, 7006365 }, // "Trainer Spell: Searing Totem (#6365)"
    { 6366, 7006366 }, // "Trainer Spell: Create Firestone (#6366)"
    { 6375, 7006375 }, // "Trainer Spell: Healing Stream Totem (#6375)"
    { 6377, 7006377 }, // "Trainer Spell: Healing Stream Totem (#6377)"
    { 6390, 7006390 }, // "Trainer Spell: Stoneclaw Totem (#6390)"
    { 6391, 7006391 }, // "Trainer Spell: Stoneclaw Totem (#6391)"
    { 6392, 7006392 }, // "Trainer Spell: Stoneclaw Totem (#6392)"
    { 6495, 7006495 }, // "Trainer Spell: Sentry Totem (#6495)"
    { 6546, 7006546 }, // "Trainer Spell: Rend (#6546)"
    { 6547, 7006547 }, // "Trainer Spell: Rend (#6547)"
    { 6548, 7006548 }, // "Trainer Spell: Rend (#6548)"
    { 6552, 7006552 }, // "Trainer Spell: Pummel (#6552)"
    { 6572, 7006572 }, // "Trainer Spell: Revenge (#6572)"
    { 6574, 7006574 }, // "Trainer Spell: Revenge (#6574)"
    { 6673, 7006673 }, // "Trainer Spell: Battle Shout (#6673)"
    { 6756, 7006756 }, // "Trainer Spell: Mark of the Wild (#6756)"
    { 6760, 7006760 }, // "Trainer Spell: Eviscerate (#6760)"
    { 6761, 7006761 }, // "Trainer Spell: Eviscerate (#6761)"
    { 6762, 7006762 }, // "Trainer Spell: Eviscerate (#6762)"
    { 6768, 7006768 }, // "Trainer Spell: Feint (#6768)"
    { 6770, 7006770 }, // "Trainer Spell: Sap (#6770)"
    { 6774, 7006774 }, // "Trainer Spell: Slice and Dice (#6774)"
    { 6778, 7006778 }, // "Trainer Spell: Healing Touch (#6778)"
    { 6780, 7006780 }, // "Trainer Spell: Wrath (#6780)"
    { 6785, 7006785 }, // "Trainer Spell: Ravage (#6785)"
    { 6787, 7006787 }, // "Trainer Spell: Ravage (#6787)"
    { 6789, 7006789 }, // "Trainer Spell: Death Coil (#6789)"
    { 6793, 7006793 }, // "Trainer Spell: Tiger's Fury (#6793)"
    { 6798, 7006798 }, // "Trainer Spell: Bash (#6798)"
    { 6800, 7006800 }, // "Trainer Spell: Shred (#6800)"
    { 6808, 7006808 }, // "Trainer Spell: Maul (#6808)"
    { 6809, 7006809 }, // "Trainer Spell: Maul (#6809)"
    { 6940, 7006940 }, // "Trainer Spell: Hand of Sacrifice (#6940)"
    { 7128, 7007128 }, // "Trainer Spell: Inner Fire (#7128)"
    { 7294, 7007294 }, // "Trainer Spell: Retribution Aura (#7294)"
    { 7300, 7007300 }, // "Trainer Spell: Frost Armor (#7300)"
    { 7301, 7007301 }, // "Trainer Spell: Frost Armor (#7301)"
    { 7302, 7007302 }, // "Trainer Spell: Ice Armor (#7302)"
    { 7320, 7007320 }, // "Trainer Spell: Ice Armor (#7320)"
    { 7322, 7007322 }, // "Trainer Spell: Frostbolt (#7322)"
    { 7369, 7007369 }, // "Trainer Spell: Cleave (#7369)"
    { 7379, 7007379 }, // "Trainer Spell: Revenge (#7379)"
    { 7384, 7007384 }, // "Trainer Spell: Overpower (#7384)"
    { 7641, 7007641 }, // "Trainer Spell: Shadow Bolt (#7641)"
    { 7646, 7007646 }, // "Trainer Spell: Curse of Weakness (#7646)"
    { 7648, 7007648 }, // "Trainer Spell: Corruption (#7648)"
    { 7651, 7007651 }, // "Trainer Spell: Drain Life (#7651)"
    { 8004, 7008004 }, // "Trainer Spell: Lesser Healing Wave (#8004)"
    { 8005, 7008005 }, // "Trainer Spell: Healing Wave (#8005)"
    { 8008, 7008008 }, // "Trainer Spell: Lesser Healing Wave (#8008)"
    { 8010, 7008010 }, // "Trainer Spell: Lesser Healing Wave (#8010)"
    { 8012, 7008012 }, // "Trainer Spell: Purge (#8012)"
    { 8017, 7008017 }, // "Trainer Spell: Rockbiter Weapon (#8017)"
    { 8018, 7008018 }, // "Trainer Spell: Rockbiter Weapon (#8018)"
    { 8019, 7008019 }, // "Trainer Spell: Rockbiter Weapon (#8019)"
    { 8024, 7008024 }, // "Trainer Spell: Flametongue Weapon (#8024)"
    { 8027, 7008027 }, // "Trainer Spell: Flametongue Weapon (#8027)"
    { 8030, 7008030 }, // "Trainer Spell: Flametongue Weapon (#8030)"
    { 8033, 7008033 }, // "Trainer Spell: Frostbrand Weapon (#8033)"
    { 8038, 7008038 }, // "Trainer Spell: Frostbrand Weapon (#8038)"
    { 8042, 7008042 }, // "Trainer Spell: Earth Shock (#8042)"
    { 8044, 7008044 }, // "Trainer Spell: Earth Shock (#8044)"
    { 8045, 7008045 }, // "Trainer Spell: Earth Shock (#8045)"
    { 8046, 7008046 }, // "Trainer Spell: Earth Shock (#8046)"
    { 8050, 7008050 }, // "Trainer Spell: Flame Shock (#8050)"
    { 8052, 7008052 }, // "Trainer Spell: Flame Shock (#8052)"
    { 8053, 7008053 }, // "Trainer Spell: Flame Shock (#8053)"
    { 8056, 7008056 }, // "Trainer Spell: Frost Shock (#8056)"
    { 8058, 7008058 }, // "Trainer Spell: Frost Shock (#8058)"
    { 8075, 7008075 }, // "Trainer Spell: Strength of Earth Totem (#8075)"
    { 8092, 7008092 }, // "Trainer Spell: Mind Blast (#8092)"
    { 8102, 7008102 }, // "Trainer Spell: Mind Blast (#8102)"
    { 8103, 7008103 }, // "Trainer Spell: Mind Blast (#8103)"
    { 8104, 7008104 }, // "Trainer Spell: Mind Blast (#8104)"
    { 8105, 7008105 }, // "Trainer Spell: Mind Blast (#8105)"
    { 8106, 7008106 }, // "Trainer Spell: Mind Blast (#8106)"
    { 8122, 7008122 }, // "Trainer Spell: Psychic Scream (#8122)"
    { 8124, 7008124 }, // "Trainer Spell: Psychic Scream (#8124)"
    { 8129, 7008129 }, // "Trainer Spell: Mana Burn (#8129)"
    { 8134, 7008134 }, // "Trainer Spell: Lightning Shield (#8134)"
    { 8143, 7008143 }, // "Trainer Spell: Tremor Totem (#8143)"
    { 8154, 7008154 }, // "Trainer Spell: Stoneskin Totem (#8154)"
    { 8155, 7008155 }, // "Trainer Spell: Stoneskin Totem (#8155)"
    { 8160, 7008160 }, // "Trainer Spell: Strength of Earth Totem (#8160)"
    { 8161, 7008161 }, // "Trainer Spell: Strength of Earth Totem (#8161)"
    { 8170, 7008170 }, // "Trainer Spell: Cleansing Totem (#8170)"
    { 8177, 7008177 }, // "Trainer Spell: Grounding Totem (#8177)"
    { 8181, 7008181 }, // "Trainer Spell: Frost Resistance Totem (#8181)"
    { 8184, 7008184 }, // "Trainer Spell: Fire Resistance Totem (#8184)"
    { 8190, 7008190 }, // "Trainer Spell: Magma Totem (#8190)"
    { 8198, 7008198 }, // "Trainer Spell: Thunder Clap (#8198)"
    { 8204, 7008204 }, // "Trainer Spell: Thunder Clap (#8204)"
    { 8205, 7008205 }, // "Trainer Spell: Thunder Clap (#8205)"
    { 8227, 7008227 }, // "Trainer Spell: Flametongue Totem (#8227)"
    { 8232, 7008232 }, // "Trainer Spell: Windfury Weapon (#8232)"
    { 8235, 7008235 }, // "Trainer Spell: Windfury Weapon (#8235)"
    { 8249, 7008249 }, // "Trainer Spell: Flametongue Totem (#8249)"
    { 8288, 7008288 }, // "Trainer Spell: Drain Soul (#8288)"
    { 8289, 7008289 }, // "Trainer Spell: Drain Soul (#8289)"
    { 8400, 7008400 }, // "Trainer Spell: Fireball (#8400)"
    { 8401, 7008401 }, // "Trainer Spell: Fireball (#8401)"
    { 8402, 7008402 }, // "Trainer Spell: Fireball (#8402)"
    { 8406, 7008406 }, // "Trainer Spell: Frostbolt (#8406)"
    { 8407, 7008407 }, // "Trainer Spell: Frostbolt (#8407)"
    { 8408, 7008408 }, // "Trainer Spell: Frostbolt (#8408)"
    { 8412, 7008412 }, // "Trainer Spell: Fire Blast (#8412)"
    { 8413, 7008413 }, // "Trainer Spell: Fire Blast (#8413)"
    { 8416, 7008416 }, // "Trainer Spell: Arcane Missiles (#8416)"
    { 8417, 7008417 }, // "Trainer Spell: Arcane Missiles (#8417)"
    { 8422, 7008422 }, // "Trainer Spell: Flamestrike (#8422)"
    { 8423, 7008423 }, // "Trainer Spell: Flamestrike (#8423)"
    { 8427, 7008427 }, // "Trainer Spell: Blizzard (#8427)"
    { 8437, 7008437 }, // "Trainer Spell: Arcane Explosion (#8437)"
    { 8438, 7008438 }, // "Trainer Spell: Arcane Explosion (#8438)"
    { 8439, 7008439 }, // "Trainer Spell: Arcane Explosion (#8439)"
    { 8444, 7008444 }, // "Trainer Spell: Scorch (#8444)"
    { 8445, 7008445 }, // "Trainer Spell: Scorch (#8445)"
    { 8446, 7008446 }, // "Trainer Spell: Scorch (#8446)"
    { 8450, 7008450 }, // "Trainer Spell: Dampen Magic (#8450)"
    { 8451, 7008451 }, // "Trainer Spell: Dampen Magic (#8451)"
    { 8455, 7008455 }, // "Trainer Spell: Amplify Magic (#8455)"
    { 8457, 7008457 }, // "Trainer Spell: Fire Ward (#8457)"
    { 8458, 7008458 }, // "Trainer Spell: Fire Ward (#8458)"
    { 8461, 7008461 }, // "Trainer Spell: Frost Ward (#8461)"
    { 8462, 7008462 }, // "Trainer Spell: Frost Ward (#8462)"
    { 8492, 7008492 }, // "Trainer Spell: Cone of Cold (#8492)"
    { 8494, 7008494 }, // "Trainer Spell: Mana Shield (#8494)"
    { 8495, 7008495 }, // "Trainer Spell: Mana Shield (#8495)"
    { 8498, 7008498 }, // "Trainer Spell: Fire Nova (#8498)"
    { 8499, 7008499 }, // "Trainer Spell: Fire Nova (#8499)"
    { 8512, 7008512 }, // "Trainer Spell: Windfury Totem (#8512)"
    { 8621, 7008621 }, // "Trainer Spell: Sinister Strike (#8621)"
    { 8623, 7008623 }, // "Trainer Spell: Eviscerate (#8623)"
    { 8624, 7008624 }, // "Trainer Spell: Eviscerate (#8624)"
    { 8631, 7008631 }, // "Trainer Spell: Garrote (#8631)"
    { 8632, 7008632 }, // "Trainer Spell: Garrote (#8632)"
    { 8633, 7008633 }, // "Trainer Spell: Garrote (#8633)"
    { 8637, 7008637 }, // "Trainer Spell: Feint (#8637)"
    { 8639, 7008639 }, // "Trainer Spell: Rupture (#8639)"
    { 8640, 7008640 }, // "Trainer Spell: Rupture (#8640)"
    { 8643, 7008643 }, // "Trainer Spell: Kidney Shot (#8643)"
    { 8647, 7008647 }, // "Trainer Spell: Expose Armor (#8647)"
    { 8676, 7008676 }, // "Trainer Spell: Ambush (#8676)"
    { 8696, 7008696 }, // "Trainer Spell: Sprint (#8696)"
    { 8721, 7008721 }, // "Trainer Spell: Backstab (#8721)"
    { 8724, 7008724 }, // "Trainer Spell: Ambush (#8724)"
    { 8725, 7008725 }, // "Trainer Spell: Ambush (#8725)"
    { 8737, 7008737 }, // "Trainer Spell: Mail (#8737)"
    { 8820, 7008820 }, // "Trainer Spell: Slam (#8820)"
    { 8903, 7008903 }, // "Trainer Spell: Healing Touch (#8903)"
    { 8905, 7008905 }, // "Trainer Spell: Wrath (#8905)"
    { 8907, 7008907 }, // "Trainer Spell: Mark of the Wild (#8907)"
    { 8910, 7008910 }, // "Trainer Spell: Rejuvenation (#8910)"
    { 8914, 7008914 }, // "Trainer Spell: Thorns (#8914)"
    { 8918, 7008918 }, // "Trainer Spell: Tranquility (#8918)"
    { 8921, 7008921 }, // "Trainer Spell: Moonfire (#8921)"
    { 8924, 7008924 }, // "Trainer Spell: Moonfire (#8924)"
    { 8925, 7008925 }, // "Trainer Spell: Moonfire (#8925)"
    { 8926, 7008926 }, // "Trainer Spell: Moonfire (#8926)"
    { 8927, 7008927 }, // "Trainer Spell: Moonfire (#8927)"
    { 8928, 7008928 }, // "Trainer Spell: Moonfire (#8928)"
    { 8929, 7008929 }, // "Trainer Spell: Moonfire (#8929)"
    { 8936, 7008936 }, // "Trainer Spell: Regrowth (#8936)"
    { 8938, 7008938 }, // "Trainer Spell: Regrowth (#8938)"
    { 8939, 7008939 }, // "Trainer Spell: Regrowth (#8939)"
    { 8940, 7008940 }, // "Trainer Spell: Regrowth (#8940)"
    { 8941, 7008941 }, // "Trainer Spell: Regrowth (#8941)"
    { 8949, 7008949 }, // "Trainer Spell: Starfire (#8949)"
    { 8950, 7008950 }, // "Trainer Spell: Starfire (#8950)"
    { 8951, 7008951 }, // "Trainer Spell: Starfire (#8951)"
    { 8955, 7008955 }, // "Trainer Spell: Soothe Animal (#8955)"
    { 8972, 7008972 }, // "Trainer Spell: Maul (#8972)"
    { 8983, 7008983 }, // "Trainer Spell: Bash (#8983)"
    { 8992, 7008992 }, // "Trainer Spell: Shred (#8992)"
    { 8998, 7008998 }, // "Trainer Spell: Cower (#8998)"
    { 9000, 7009000 }, // "Trainer Spell: Cower (#9000)"
    { 9005, 7009005 }, // "Trainer Spell: Pounce (#9005)"
    { 9472, 7009472 }, // "Trainer Spell: Flash Heal (#9472)"
    { 9473, 7009473 }, // "Trainer Spell: Flash Heal (#9473)"
    { 9474, 7009474 }, // "Trainer Spell: Flash Heal (#9474)"
    { 9484, 7009484 }, // "Trainer Spell: Shackle Undead (#9484)"
    { 9485, 7009485 }, // "Trainer Spell: Shackle Undead (#9485)"
    { 9490, 7009490 }, // "Trainer Spell: Demoralizing Roar (#9490)"
    { 9492, 7009492 }, // "Trainer Spell: Rip (#9492)"
    { 9493, 7009493 }, // "Trainer Spell: Rip (#9493)"
    { 9634, 7009634 }, // "Trainer Spell: Dire Bear Form (#9634)"
    { 9745, 7009745 }, // "Trainer Spell: Maul (#9745)"
    { 9747, 7009747 }, // "Trainer Spell: Demoralizing Roar (#9747)"
    { 9750, 7009750 }, // "Trainer Spell: Regrowth (#9750)"
    { 9752, 7009752 }, // "Trainer Spell: Rip (#9752)"
    { 9754, 7009754 }, // "Trainer Spell: Swipe (Bear) (#9754)"
    { 9756, 7009756 }, // "Trainer Spell: Thorns (#9756)"
    { 9758, 7009758 }, // "Trainer Spell: Healing Touch (#9758)"
    { 9821, 7009821 }, // "Trainer Spell: Dash (#9821)"
    { 9823, 7009823 }, // "Trainer Spell: Pounce (#9823)"
    { 9827, 7009827 }, // "Trainer Spell: Pounce (#9827)"
    { 9829, 7009829 }, // "Trainer Spell: Shred (#9829)"
    { 9830, 7009830 }, // "Trainer Spell: Shred (#9830)"
    { 9833, 7009833 }, // "Trainer Spell: Moonfire (#9833)"
    { 9834, 7009834 }, // "Trainer Spell: Moonfire (#9834)"
    { 9835, 7009835 }, // "Trainer Spell: Moonfire (#9835)"
    { 9839, 7009839 }, // "Trainer Spell: Rejuvenation (#9839)"
    { 9840, 7009840 }, // "Trainer Spell: Rejuvenation (#9840)"
    { 9841, 7009841 }, // "Trainer Spell: Rejuvenation (#9841)"
    { 9845, 7009845 }, // "Trainer Spell: Tiger's Fury (#9845)"
    { 9846, 7009846 }, // "Trainer Spell: Tiger's Fury (#9846)"
    { 9849, 7009849 }, // "Trainer Spell: Claw (#9849)"
    { 9850, 7009850 }, // "Trainer Spell: Claw (#9850)"
    { 9852, 7009852 }, // "Trainer Spell: Entangling Roots (#9852)"
    { 9853, 7009853 }, // "Trainer Spell: Entangling Roots (#9853)"
    { 9856, 7009856 }, // "Trainer Spell: Regrowth (#9856)"
    { 9857, 7009857 }, // "Trainer Spell: Regrowth (#9857)"
    { 9858, 7009858 }, // "Trainer Spell: Regrowth (#9858)"
    { 9862, 7009862 }, // "Trainer Spell: Tranquility (#9862)"
    { 9863, 7009863 }, // "Trainer Spell: Tranquility (#9863)"
    { 9866, 7009866 }, // "Trainer Spell: Ravage (#9866)"
    { 9867, 7009867 }, // "Trainer Spell: Ravage (#9867)"
    { 9875, 7009875 }, // "Trainer Spell: Starfire (#9875)"
    { 9876, 7009876 }, // "Trainer Spell: Starfire (#9876)"
    { 9880, 7009880 }, // "Trainer Spell: Maul (#9880)"
    { 9881, 7009881 }, // "Trainer Spell: Maul (#9881)"
    { 9884, 7009884 }, // "Trainer Spell: Mark of the Wild (#9884)"
    { 9885, 7009885 }, // "Trainer Spell: Mark of the Wild (#9885)"
    { 9888, 7009888 }, // "Trainer Spell: Healing Touch (#9888)"
    { 9889, 7009889 }, // "Trainer Spell: Healing Touch (#9889)"
    { 9892, 7009892 }, // "Trainer Spell: Cower (#9892)"
    { 9894, 7009894 }, // "Trainer Spell: Rip (#9894)"
    { 9896, 7009896 }, // "Trainer Spell: Rip (#9896)"
    { 9898, 7009898 }, // "Trainer Spell: Demoralizing Roar (#9898)"
    { 9901, 7009901 }, // "Trainer Spell: Soothe Animal (#9901)"
    { 9904, 7009904 }, // "Trainer Spell: Rake (#9904)"
    { 9908, 7009908 }, // "Trainer Spell: Swipe (Bear) (#9908)"
    { 9910, 7009910 }, // "Trainer Spell: Thorns (#9910)"
    { 9912, 7009912 }, // "Trainer Spell: Wrath (#9912)"
    { 10053, 7010053 }, // "Trainer Spell: Conjure Mana Gem (#10053)"
    { 10054, 7010054 }, // "Trainer Spell: Conjure Mana Gem (#10054)"
    { 10059, 7010059 }, // "Trainer Spell: Portal: Stormwind (#10059)"
    { 10138, 7010138 }, // "Trainer Spell: Conjure Water (#10138)"
    { 10139, 7010139 }, // "Trainer Spell: Conjure Water (#10139)"
    { 10140, 7010140 }, // "Trainer Spell: Conjure Water (#10140)"
    { 10144, 7010144 }, // "Trainer Spell: Conjure Food (#10144)"
    { 10145, 7010145 }, // "Trainer Spell: Conjure Food (#10145)"
    { 10148, 7010148 }, // "Trainer Spell: Fireball (#10148)"
    { 10149, 7010149 }, // "Trainer Spell: Fireball (#10149)"
    { 10150, 7010150 }, // "Trainer Spell: Fireball (#10150)"
    { 10151, 7010151 }, // "Trainer Spell: Fireball (#10151)"
    { 10156, 7010156 }, // "Trainer Spell: Arcane Intellect (#10156)"
    { 10157, 7010157 }, // "Trainer Spell: Arcane Intellect (#10157)"
    { 10159, 7010159 }, // "Trainer Spell: Cone of Cold (#10159)"
    { 10160, 7010160 }, // "Trainer Spell: Cone of Cold (#10160)"
    { 10161, 7010161 }, // "Trainer Spell: Cone of Cold (#10161)"
    { 10169, 7010169 }, // "Trainer Spell: Amplify Magic (#10169)"
    { 10170, 7010170 }, // "Trainer Spell: Amplify Magic (#10170)"
    { 10173, 7010173 }, // "Trainer Spell: Dampen Magic (#10173)"
    { 10174, 7010174 }, // "Trainer Spell: Dampen Magic (#10174)"
    { 10177, 7010177 }, // "Trainer Spell: Frost Ward (#10177)"
    { 10179, 7010179 }, // "Trainer Spell: Frostbolt (#10179)"
    { 10180, 7010180 }, // "Trainer Spell: Frostbolt (#10180)"
    { 10181, 7010181 }, // "Trainer Spell: Frostbolt (#10181)"
    { 10185, 7010185 }, // "Trainer Spell: Blizzard (#10185)"
    { 10186, 7010186 }, // "Trainer Spell: Blizzard (#10186)"
    { 10187, 7010187 }, // "Trainer Spell: Blizzard (#10187)"
    { 10191, 7010191 }, // "Trainer Spell: Mana Shield (#10191)"
    { 10192, 7010192 }, // "Trainer Spell: Mana Shield (#10192)"
    { 10193, 7010193 }, // "Trainer Spell: Mana Shield (#10193)"
    { 10197, 7010197 }, // "Trainer Spell: Fire Blast (#10197)"
    { 10199, 7010199 }, // "Trainer Spell: Fire Blast (#10199)"
    { 10201, 7010201 }, // "Trainer Spell: Arcane Explosion (#10201)"
    { 10202, 7010202 }, // "Trainer Spell: Arcane Explosion (#10202)"
    { 10205, 7010205 }, // "Trainer Spell: Scorch (#10205)"
    { 10206, 7010206 }, // "Trainer Spell: Scorch (#10206)"
    { 10207, 7010207 }, // "Trainer Spell: Scorch (#10207)"
    { 10211, 7010211 }, // "Trainer Spell: Arcane Missiles (#10211)"
    { 10212, 7010212 }, // "Trainer Spell: Arcane Missiles (#10212)"
    { 10215, 7010215 }, // "Trainer Spell: Flamestrike (#10215)"
    { 10216, 7010216 }, // "Trainer Spell: Flamestrike (#10216)"
    { 10219, 7010219 }, // "Trainer Spell: Ice Armor (#10219)"
    { 10220, 7010220 }, // "Trainer Spell: Ice Armor (#10220)"
    { 10223, 7010223 }, // "Trainer Spell: Fire Ward (#10223)"
    { 10225, 7010225 }, // "Trainer Spell: Fire Ward (#10225)"
    { 10230, 7010230 }, // "Trainer Spell: Frost Nova (#10230)"
    { 10278, 7010278 }, // "Trainer Spell: Hand of Protection (#10278)"
    { 10290, 7010290 }, // "Trainer Spell: Devotion Aura (#10290)"
    { 10291, 7010291 }, // "Trainer Spell: Devotion Aura (#10291)"
    { 10292, 7010292 }, // "Trainer Spell: Devotion Aura (#10292)"
    { 10293, 7010293 }, // "Trainer Spell: Devotion Aura (#10293)"
    { 10298, 7010298 }, // "Trainer Spell: Retribution Aura (#10298)"
    { 10299, 7010299 }, // "Trainer Spell: Retribution Aura (#10299)"
    { 10300, 7010300 }, // "Trainer Spell: Retribution Aura (#10300)"
    { 10301, 7010301 }, // "Trainer Spell: Retribution Aura (#10301)"
    { 10308, 7010308 }, // "Trainer Spell: Hammer of Justice (#10308)"
    { 10310, 7010310 }, // "Trainer Spell: Lay on Hands (#10310)"
    { 10312, 7010312 }, // "Trainer Spell: Exorcism (#10312)"
    { 10313, 7010313 }, // "Trainer Spell: Exorcism (#10313)"
    { 10314, 7010314 }, // "Trainer Spell: Exorcism (#10314)"
    { 10318, 7010318 }, // "Trainer Spell: Holy Wrath (#10318)"
    { 10321, 7010321 }, // "Trainer Spell: Judgement (#10321)"
    { 10322, 7010322 }, // "Trainer Spell: Redemption (#10322)"
    { 10324, 7010324 }, // "Trainer Spell: Redemption (#10324)"
    { 10326, 7010326 }, // "Trainer Spell: Turn Evil (#10326)"
    { 10328, 7010328 }, // "Trainer Spell: Holy Light (#10328)"
    { 10329, 7010329 }, // "Trainer Spell: Holy Light (#10329)"
    { 10391, 7010391 }, // "Trainer Spell: Lightning Bolt (#10391)"
    { 10392, 7010392 }, // "Trainer Spell: Lightning Bolt (#10392)"
    { 10395, 7010395 }, // "Trainer Spell: Healing Wave (#10395)"
    { 10396, 7010396 }, // "Trainer Spell: Healing Wave (#10396)"
    { 10399, 7010399 }, // "Trainer Spell: Rockbiter Weapon (#10399)"
    { 10406, 7010406 }, // "Trainer Spell: Stoneskin Totem (#10406)"
    { 10407, 7010407 }, // "Trainer Spell: Stoneskin Totem (#10407)"
    { 10408, 7010408 }, // "Trainer Spell: Stoneskin Totem (#10408)"
    { 10412, 7010412 }, // "Trainer Spell: Earth Shock (#10412)"
    { 10413, 7010413 }, // "Trainer Spell: Earth Shock (#10413)"
    { 10414, 7010414 }, // "Trainer Spell: Earth Shock (#10414)"
    { 10427, 7010427 }, // "Trainer Spell: Stoneclaw Totem (#10427)"
    { 10428, 7010428 }, // "Trainer Spell: Stoneclaw Totem (#10428)"
    { 10431, 7010431 }, // "Trainer Spell: Lightning Shield (#10431)"
    { 10432, 7010432 }, // "Trainer Spell: Lightning Shield (#10432)"
    { 10437, 7010437 }, // "Trainer Spell: Searing Totem (#10437)"
    { 10438, 7010438 }, // "Trainer Spell: Searing Totem (#10438)"
    { 10442, 7010442 }, // "Trainer Spell: Strength of Earth Totem (#10442)"
    { 10447, 7010447 }, // "Trainer Spell: Flame Shock (#10447)"
    { 10448, 7010448 }, // "Trainer Spell: Flame Shock (#10448)"
    { 10456, 7010456 }, // "Trainer Spell: Frostbrand Weapon (#10456)"
    { 10462, 7010462 }, // "Trainer Spell: Healing Stream Totem (#10462)"
    { 10463, 7010463 }, // "Trainer Spell: Healing Stream Totem (#10463)"
    { 10466, 7010466 }, // "Trainer Spell: Lesser Healing Wave (#10466)"
    { 10467, 7010467 }, // "Trainer Spell: Lesser Healing Wave (#10467)"
    { 10468, 7010468 }, // "Trainer Spell: Lesser Healing Wave (#10468)"
    { 10472, 7010472 }, // "Trainer Spell: Frost Shock (#10472)"
    { 10473, 7010473 }, // "Trainer Spell: Frost Shock (#10473)"
    { 10478, 7010478 }, // "Trainer Spell: Frost Resistance Totem (#10478)"
    { 10479, 7010479 }, // "Trainer Spell: Frost Resistance Totem (#10479)"
    { 10486, 7010486 }, // "Trainer Spell: Windfury Weapon (#10486)"
    { 10495, 7010495 }, // "Trainer Spell: Mana Spring Totem (#10495)"
    { 10496, 7010496 }, // "Trainer Spell: Mana Spring Totem (#10496)"
    { 10497, 7010497 }, // "Trainer Spell: Mana Spring Totem (#10497)"
    { 10526, 7010526 }, // "Trainer Spell: Flametongue Totem (#10526)"
    { 10537, 7010537 }, // "Trainer Spell: Fire Resistance Totem (#10537)"
    { 10538, 7010538 }, // "Trainer Spell: Fire Resistance Totem (#10538)"
    { 10585, 7010585 }, // "Trainer Spell: Magma Totem (#10585)"
    { 10586, 7010586 }, // "Trainer Spell: Magma Totem (#10586)"
    { 10587, 7010587 }, // "Trainer Spell: Magma Totem (#10587)"
    { 10595, 7010595 }, // "Trainer Spell: Nature Resistance Totem (#10595)"
    { 10600, 7010600 }, // "Trainer Spell: Nature Resistance Totem (#10600)"
    { 10601, 7010601 }, // "Trainer Spell: Nature Resistance Totem (#10601)"
    { 10605, 7010605 }, // "Trainer Spell: Chain Lightning (#10605)"
    { 10622, 7010622 }, // "Trainer Spell: Chain Heal (#10622)"
    { 10623, 7010623 }, // "Trainer Spell: Chain Heal (#10623)"
    { 10880, 7010880 }, // "Trainer Spell: Resurrection (#10880)"
    { 10881, 7010881 }, // "Trainer Spell: Resurrection (#10881)"
    { 10888, 7010888 }, // "Trainer Spell: Psychic Scream (#10888)"
    { 10890, 7010890 }, // "Trainer Spell: Psychic Scream (#10890)"
    { 10892, 7010892 }, // "Trainer Spell: Shadow Word: Pain (#10892)"
    { 10893, 7010893 }, // "Trainer Spell: Shadow Word: Pain (#10893)"
    { 10894, 7010894 }, // "Trainer Spell: Shadow Word: Pain (#10894)"
    { 10898, 7010898 }, // "Trainer Spell: Power Word: Shield (#10898)"
    { 10899, 7010899 }, // "Trainer Spell: Power Word: Shield (#10899)"
    { 10900, 7010900 }, // "Trainer Spell: Power Word: Shield (#10900)"
    { 10901, 7010901 }, // "Trainer Spell: Power Word: Shield (#10901)"
    { 10909, 7010909 }, // "Trainer Spell: Mind Vision (#10909)"
    { 10915, 7010915 }, // "Trainer Spell: Flash Heal (#10915)"
    { 10916, 7010916 }, // "Trainer Spell: Flash Heal (#10916)"
    { 10917, 7010917 }, // "Trainer Spell: Flash Heal (#10917)"
    { 10927, 7010927 }, // "Trainer Spell: Renew (#10927)"
    { 10928, 7010928 }, // "Trainer Spell: Renew (#10928)"
    { 10929, 7010929 }, // "Trainer Spell: Renew (#10929)"
    { 10933, 7010933 }, // "Trainer Spell: Smite (#10933)"
    { 10934, 7010934 }, // "Trainer Spell: Smite (#10934)"
    { 10937, 7010937 }, // "Trainer Spell: Power Word: Fortitude (#10937)"
    { 10938, 7010938 }, // "Trainer Spell: Power Word: Fortitude (#10938)"
    { 10945, 7010945 }, // "Trainer Spell: Mind Blast (#10945)"
    { 10946, 7010946 }, // "Trainer Spell: Mind Blast (#10946)"
    { 10947, 7010947 }, // "Trainer Spell: Mind Blast (#10947)"
    { 10951, 7010951 }, // "Trainer Spell: Inner Fire (#10951)"
    { 10952, 7010952 }, // "Trainer Spell: Inner Fire (#10952)"
    { 10955, 7010955 }, // "Trainer Spell: Shackle Undead (#10955)"
    { 10957, 7010957 }, // "Trainer Spell: Shadow Protection (#10957)"
    { 10958, 7010958 }, // "Trainer Spell: Shadow Protection (#10958)"
    { 10960, 7010960 }, // "Trainer Spell: Prayer of Healing (#10960)"
    { 10961, 7010961 }, // "Trainer Spell: Prayer of Healing (#10961)"
    { 10963, 7010963 }, // "Trainer Spell: Greater Heal (#10963)"
    { 10964, 7010964 }, // "Trainer Spell: Greater Heal (#10964)"
    { 10965, 7010965 }, // "Trainer Spell: Greater Heal (#10965)"
    { 11267, 7011267 }, // "Trainer Spell: Ambush (#11267)"
    { 11268, 7011268 }, // "Trainer Spell: Ambush (#11268)"
    { 11269, 7011269 }, // "Trainer Spell: Ambush (#11269)"
    { 11273, 7011273 }, // "Trainer Spell: Rupture (#11273)"
    { 11274, 7011274 }, // "Trainer Spell: Rupture (#11274)"
    { 11275, 7011275 }, // "Trainer Spell: Rupture (#11275)"
    { 11279, 7011279 }, // "Trainer Spell: Backstab (#11279)"
    { 11280, 7011280 }, // "Trainer Spell: Backstab (#11280)"
    { 11281, 7011281 }, // "Trainer Spell: Backstab (#11281)"
    { 11289, 7011289 }, // "Trainer Spell: Garrote (#11289)"
    { 11290, 7011290 }, // "Trainer Spell: Garrote (#11290)"
    { 11293, 7011293 }, // "Trainer Spell: Sinister Strike (#11293)"
    { 11294, 7011294 }, // "Trainer Spell: Sinister Strike (#11294)"
    { 11297, 7011297 }, // "Trainer Spell: Sap (#11297)"
    { 11299, 7011299 }, // "Trainer Spell: Eviscerate (#11299)"
    { 11300, 7011300 }, // "Trainer Spell: Eviscerate (#11300)"
    { 11303, 7011303 }, // "Trainer Spell: Feint (#11303)"
    { 11305, 7011305 }, // "Trainer Spell: Sprint (#11305)"
    { 11314, 7011314 }, // "Trainer Spell: Fire Nova (#11314)"
    { 11315, 7011315 }, // "Trainer Spell: Fire Nova (#11315)"
    { 11416, 7011416 }, // "Trainer Spell: Portal: Ironforge (#11416)"
    { 11417, 7011417 }, // "Trainer Spell: Portal: Orgrimmar (#11417)"
    { 11418, 7011418 }, // "Trainer Spell: Portal: Undercity (#11418)"
    { 11419, 7011419 }, // "Trainer Spell: Portal: Darnassus (#11419)"
    { 11420, 7011420 }, // "Trainer Spell: Portal: Thunder Bluff (#11420)"
    { 11549, 7011549 }, // "Trainer Spell: Battle Shout (#11549)"
    { 11550, 7011550 }, // "Trainer Spell: Battle Shout (#11550)"
    { 11551, 7011551 }, // "Trainer Spell: Battle Shout (#11551)"
    { 11554, 7011554 }, // "Trainer Spell: Demoralizing Shout (#11554)"
    { 11555, 7011555 }, // "Trainer Spell: Demoralizing Shout (#11555)"
    { 11556, 7011556 }, // "Trainer Spell: Demoralizing Shout (#11556)"
    { 11564, 7011564 }, // "Trainer Spell: Heroic Strike (#11564)"
    { 11565, 7011565 }, // "Trainer Spell: Heroic Strike (#11565)"
    { 11566, 7011566 }, // "Trainer Spell: Heroic Strike (#11566)"
    { 11567, 7011567 }, // "Trainer Spell: Heroic Strike (#11567)"
    { 11572, 7011572 }, // "Trainer Spell: Rend (#11572)"
    { 11573, 7011573 }, // "Trainer Spell: Rend (#11573)"
    { 11574, 7011574 }, // "Trainer Spell: Rend (#11574)"
    { 11578, 7011578 }, // "Trainer Spell: Charge (#11578)"
    { 11580, 7011580 }, // "Trainer Spell: Thunder Clap (#11580)"
    { 11581, 7011581 }, // "Trainer Spell: Thunder Clap (#11581)"
    { 11600, 7011600 }, // "Trainer Spell: Revenge (#11600)"
    { 11601, 7011601 }, // "Trainer Spell: Revenge (#11601)"
    { 11604, 7011604 }, // "Trainer Spell: Slam (#11604)"
    { 11605, 7011605 }, // "Trainer Spell: Slam (#11605)"
    { 11608, 7011608 }, // "Trainer Spell: Cleave (#11608)"
    { 11609, 7011609 }, // "Trainer Spell: Cleave (#11609)"
    { 11659, 7011659 }, // "Trainer Spell: Shadow Bolt (#11659)"
    { 11660, 7011660 }, // "Trainer Spell: Shadow Bolt (#11660)"
    { 11661, 7011661 }, // "Trainer Spell: Shadow Bolt (#11661)"
    { 11665, 7011665 }, // "Trainer Spell: Immolate (#11665)"
    { 11667, 7011667 }, // "Trainer Spell: Immolate (#11667)"
    { 11668, 7011668 }, // "Trainer Spell: Immolate (#11668)"
    { 11671, 7011671 }, // "Trainer Spell: Corruption (#11671)"
    { 11672, 7011672 }, // "Trainer Spell: Corruption (#11672)"
    { 11675, 7011675 }, // "Trainer Spell: Drain Soul (#11675)"
    { 11677, 7011677 }, // "Trainer Spell: Rain of Fire (#11677)"
    { 11678, 7011678 }, // "Trainer Spell: Rain of Fire (#11678)"
    { 11683, 7011683 }, // "Trainer Spell: Hellfire (#11683)"
    { 11684, 7011684 }, // "Trainer Spell: Hellfire (#11684)"
    { 11687, 7011687 }, // "Trainer Spell: Life Tap (#11687)"
    { 11688, 7011688 }, // "Trainer Spell: Life Tap (#11688)"
    { 11689, 7011689 }, // "Trainer Spell: Life Tap (#11689)"
    { 11693, 7011693 }, // "Trainer Spell: Health Funnel (#11693)"
    { 11694, 7011694 }, // "Trainer Spell: Health Funnel (#11694)"
    { 11695, 7011695 }, // "Trainer Spell: Health Funnel (#11695)"
    { 11699, 7011699 }, // "Trainer Spell: Drain Life (#11699)"
    { 11700, 7011700 }, // "Trainer Spell: Drain Life (#11700)"
    { 11707, 7011707 }, // "Trainer Spell: Curse of Weakness (#11707)"
    { 11708, 7011708 }, // "Trainer Spell: Curse of Weakness (#11708)"
    { 11711, 7011711 }, // "Trainer Spell: Curse of Agony (#11711)"
    { 11712, 7011712 }, // "Trainer Spell: Curse of Agony (#11712)"
    { 11713, 7011713 }, // "Trainer Spell: Curse of Agony (#11713)"
    { 11719, 7011719 }, // "Trainer Spell: Curse of Tongues (#11719)"
    { 11721, 7011721 }, // "Trainer Spell: Curse of the Elements (#11721)"
    { 11722, 7011722 }, // "Trainer Spell: Curse of the Elements (#11722)"
    { 11725, 7011725 }, // "Trainer Spell: Enslave Demon (#11725)"
    { 11726, 7011726 }, // "Trainer Spell: Enslave Demon (#11726)"
    { 11729, 7011729 }, // "Trainer Spell: Create Healthstone (#11729)"
    { 11730, 7011730 }, // "Trainer Spell: Create Healthstone (#11730)"
    { 11733, 7011733 }, // "Trainer Spell: Demon Armor (#11733)"
    { 11734, 7011734 }, // "Trainer Spell: Demon Armor (#11734)"
    { 11735, 7011735 }, // "Trainer Spell: Demon Armor (#11735)"
    { 11739, 7011739 }, // "Trainer Spell: Shadow Ward (#11739)"
    { 11740, 7011740 }, // "Trainer Spell: Shadow Ward (#11740)"
    { 12051, 7012051 }, // "Trainer Spell: Evocation (#12051)"
    { 12505, 7012505 }, // "Trainer Spell: Pyroblast (#12505)"
    { 12522, 7012522 }, // "Trainer Spell: Pyroblast (#12522)"
    { 12523, 7012523 }, // "Trainer Spell: Pyroblast (#12523)"
    { 12524, 7012524 }, // "Trainer Spell: Pyroblast (#12524)"
    { 12525, 7012525 }, // "Trainer Spell: Pyroblast (#12525)"
    { 12526, 7012526 }, // "Trainer Spell: Pyroblast (#12526)"
    { 12678, 7012678 }, // "Trainer Spell: Stance Mastery (#12678)"
    { 12824, 7012824 }, // "Trainer Spell: Polymorph (#12824)"
    { 12825, 7012825 }, // "Trainer Spell: Polymorph (#12825)"
    { 12826, 7012826 }, // "Trainer Spell: Polymorph (#12826)"
    { 13018, 7013018 }, // "Trainer Spell: Blast Wave (#13018)"
    { 13019, 7013019 }, // "Trainer Spell: Blast Wave (#13019)"
    { 13020, 7013020 }, // "Trainer Spell: Blast Wave (#13020)"
    { 13021, 7013021 }, // "Trainer Spell: Blast Wave (#13021)"
    { 13031, 7013031 }, // "Trainer Spell: Ice Barrier (#13031)"
    { 13032, 7013032 }, // "Trainer Spell: Ice Barrier (#13032)"
    { 13033, 7013033 }, // "Trainer Spell: Ice Barrier (#13033)"
    { 13159, 7013159 }, // "Trainer Spell: Aspect of the Pack (#13159)"
    { 13161, 7013161 }, // "Trainer Spell: Aspect of the Beast (#13161)"
    { 13163, 7013163 }, // "Trainer Spell: Aspect of the Monkey (#13163)"
    { 13165, 7013165 }, // "Trainer Spell: Aspect of the Hawk (#13165)"
    { 13542, 7013542 }, // "Trainer Spell: Mend Pet (#13542)"
    { 13543, 7013543 }, // "Trainer Spell: Mend Pet (#13543)"
    { 13544, 7013544 }, // "Trainer Spell: Mend Pet (#13544)"
    { 13549, 7013549 }, // "Trainer Spell: Serpent Sting (#13549)"
    { 13550, 7013550 }, // "Trainer Spell: Serpent Sting (#13550)"
    { 13551, 7013551 }, // "Trainer Spell: Serpent Sting (#13551)"
    { 13552, 7013552 }, // "Trainer Spell: Serpent Sting (#13552)"
    { 13553, 7013553 }, // "Trainer Spell: Serpent Sting (#13553)"
    { 13554, 7013554 }, // "Trainer Spell: Serpent Sting (#13554)"
    { 13555, 7013555 }, // "Trainer Spell: Serpent Sting (#13555)"
    { 13795, 7013795 }, // "Trainer Spell: Immolation Trap (#13795)"
    { 13809, 7013809 }, // "Trainer Spell: Frost Trap (#13809)"
    { 13813, 7013813 }, // "Trainer Spell: Explosive Trap (#13813)"
    { 13820, 7013820 }, // "Trainer Spell: Summon Warhorse (#13820)"
    { 14260, 7014260 }, // "Trainer Spell: Raptor Strike (#14260)"
    { 14261, 7014261 }, // "Trainer Spell: Raptor Strike (#14261)"
    { 14262, 7014262 }, // "Trainer Spell: Raptor Strike (#14262)"
    { 14263, 7014263 }, // "Trainer Spell: Raptor Strike (#14263)"
    { 14264, 7014264 }, // "Trainer Spell: Raptor Strike (#14264)"
    { 14265, 7014265 }, // "Trainer Spell: Raptor Strike (#14265)"
    { 14266, 7014266 }, // "Trainer Spell: Raptor Strike (#14266)"
    { 14269, 7014269 }, // "Trainer Spell: Mongoose Bite (#14269)"
    { 14270, 7014270 }, // "Trainer Spell: Mongoose Bite (#14270)"
    { 14271, 7014271 }, // "Trainer Spell: Mongoose Bite (#14271)"
    { 14281, 7014281 }, // "Trainer Spell: Arcane Shot (#14281)"
    { 14282, 7014282 }, // "Trainer Spell: Arcane Shot (#14282)"
    { 14283, 7014283 }, // "Trainer Spell: Arcane Shot (#14283)"
    { 14284, 7014284 }, // "Trainer Spell: Arcane Shot (#14284)"
    { 14285, 7014285 }, // "Trainer Spell: Arcane Shot (#14285)"
    { 14286, 7014286 }, // "Trainer Spell: Arcane Shot (#14286)"
    { 14287, 7014287 }, // "Trainer Spell: Arcane Shot (#14287)"
    { 14288, 7014288 }, // "Trainer Spell: Multi-Shot (#14288)"
    { 14289, 7014289 }, // "Trainer Spell: Multi-Shot (#14289)"
    { 14290, 7014290 }, // "Trainer Spell: Multi-Shot (#14290)"
    { 14294, 7014294 }, // "Trainer Spell: Volley (#14294)"
    { 14295, 7014295 }, // "Trainer Spell: Volley (#14295)"
    { 14302, 7014302 }, // "Trainer Spell: Immolation Trap (#14302)"
    { 14303, 7014303 }, // "Trainer Spell: Immolation Trap (#14303)"
    { 14304, 7014304 }, // "Trainer Spell: Immolation Trap (#14304)"
    { 14305, 7014305 }, // "Trainer Spell: Immolation Trap (#14305)"
    { 14310, 7014310 }, // "Trainer Spell: Freezing Trap (#14310)"
    { 14311, 7014311 }, // "Trainer Spell: Freezing Trap (#14311)"
    { 14316, 7014316 }, // "Trainer Spell: Explosive Trap (#14316)"
    { 14317, 7014317 }, // "Trainer Spell: Explosive Trap (#14317)"
    { 14318, 7014318 }, // "Trainer Spell: Aspect of the Hawk (#14318)"
    { 14319, 7014319 }, // "Trainer Spell: Aspect of the Hawk (#14319)"
    { 14320, 7014320 }, // "Trainer Spell: Aspect of the Hawk (#14320)"
    { 14321, 7014321 }, // "Trainer Spell: Aspect of the Hawk (#14321)"
    { 14322, 7014322 }, // "Trainer Spell: Aspect of the Hawk (#14322)"
    { 14323, 7014323 }, // "Trainer Spell: Hunter's Mark (#14323)"
    { 14324, 7014324 }, // "Trainer Spell: Hunter's Mark (#14324)"
    { 14325, 7014325 }, // "Trainer Spell: Hunter's Mark (#14325)"
    { 14326, 7014326 }, // "Trainer Spell: Scare Beast (#14326)"
    { 14327, 7014327 }, // "Trainer Spell: Scare Beast (#14327)"
    { 14752, 7014752 }, // "Trainer Spell: Divine Spirit (#14752)"
    { 14818, 7014818 }, // "Trainer Spell: Divine Spirit (#14818)"
    { 14819, 7014819 }, // "Trainer Spell: Divine Spirit (#14819)"
    { 14914, 7014914 }, // "Trainer Spell: Holy Fire (#14914)"
    { 15207, 7015207 }, // "Trainer Spell: Lightning Bolt (#15207)"
    { 15208, 7015208 }, // "Trainer Spell: Lightning Bolt (#15208)"
    { 15237, 7015237 }, // "Trainer Spell: Holy Nova (#15237)"
    { 15261, 7015261 }, // "Trainer Spell: Holy Fire (#15261)"
    { 15262, 7015262 }, // "Trainer Spell: Holy Fire (#15262)"
    { 15263, 7015263 }, // "Trainer Spell: Holy Fire (#15263)"
    { 15264, 7015264 }, // "Trainer Spell: Holy Fire (#15264)"
    { 15265, 7015265 }, // "Trainer Spell: Holy Fire (#15265)"
    { 15266, 7015266 }, // "Trainer Spell: Holy Fire (#15266)"
    { 15267, 7015267 }, // "Trainer Spell: Holy Fire (#15267)"
    { 15430, 7015430 }, // "Trainer Spell: Holy Nova (#15430)"
    { 15431, 7015431 }, // "Trainer Spell: Holy Nova (#15431)"
    { 16339, 7016339 }, // "Trainer Spell: Flametongue Weapon (#16339)"
    { 16341, 7016341 }, // "Trainer Spell: Flametongue Weapon (#16341)"
    { 16342, 7016342 }, // "Trainer Spell: Flametongue Weapon (#16342)"
    { 16355, 7016355 }, // "Trainer Spell: Frostbrand Weapon (#16355)"
    { 16356, 7016356 }, // "Trainer Spell: Frostbrand Weapon (#16356)"
    { 16362, 7016362 }, // "Trainer Spell: Windfury Weapon (#16362)"
    { 16387, 7016387 }, // "Trainer Spell: Flametongue Totem (#16387)"
    { 16689, 7016689 }, // "Trainer Spell: Nature's Grasp (#16689)"
    { 16810, 7016810 }, // "Trainer Spell: Nature's Grasp (#16810)"
    { 16811, 7016811 }, // "Trainer Spell: Nature's Grasp (#16811)"
    { 16812, 7016812 }, // "Trainer Spell: Nature's Grasp (#16812)"
    { 16813, 7016813 }, // "Trainer Spell: Nature's Grasp (#16813)"
    { 16857, 7016857 }, // "Trainer Spell: Faerie Fire (Feral) (#16857)"
    { 16914, 7016914 }, // "Trainer Spell: Hurricane (#16914)"
    { 17311, 7017311 }, // "Trainer Spell: Mind Flay (#17311)"
    { 17312, 7017312 }, // "Trainer Spell: Mind Flay (#17312)"
    { 17313, 7017313 }, // "Trainer Spell: Mind Flay (#17313)"
    { 17314, 7017314 }, // "Trainer Spell: Mind Flay (#17314)"
    { 17329, 7017329 }, // "Trainer Spell: Nature's Grasp (#17329)"
    { 17347, 7017347 }, // "Trainer Spell: Hemorrhage (#17347)"
    { 17348, 7017348 }, // "Trainer Spell: Hemorrhage (#17348)"
    { 17401, 7017401 }, // "Trainer Spell: Hurricane (#17401)"
    { 17402, 7017402 }, // "Trainer Spell: Hurricane (#17402)"
    { 17727, 7017727 }, // "Trainer Spell: Create Spellstone (#17727)"
    { 17728, 7017728 }, // "Trainer Spell: Create Spellstone (#17728)"
    { 17919, 7017919 }, // "Trainer Spell: Searing Pain (#17919)"
    { 17920, 7017920 }, // "Trainer Spell: Searing Pain (#17920)"
    { 17921, 7017921 }, // "Trainer Spell: Searing Pain (#17921)"
    { 17922, 7017922 }, // "Trainer Spell: Searing Pain (#17922)"
    { 17923, 7017923 }, // "Trainer Spell: Searing Pain (#17923)"
    { 17924, 7017924 }, // "Trainer Spell: Soul Fire (#17924)"
    { 17925, 7017925 }, // "Trainer Spell: Death Coil (#17925)"
    { 17926, 7017926 }, // "Trainer Spell: Death Coil (#17926)"
    { 17928, 7017928 }, // "Trainer Spell: Howl of Terror (#17928)"
    { 17951, 7017951 }, // "Trainer Spell: Create Firestone (#17951)"
    { 17952, 7017952 }, // "Trainer Spell: Create Firestone (#17952)"
    { 17953, 7017953 }, // "Trainer Spell: Create Firestone (#17953)"
    { 18499, 7018499 }, // "Trainer Spell: Berserker Rage (#18499)"
    { 18647, 7018647 }, // "Trainer Spell: Banish (#18647)"
    { 18657, 7018657 }, // "Trainer Spell: Hibernate (#18657)"
    { 18658, 7018658 }, // "Trainer Spell: Hibernate (#18658)"
    { 18807, 7018807 }, // "Trainer Spell: Mind Flay (#18807)"
    { 18809, 7018809 }, // "Trainer Spell: Pyroblast (#18809)"
    { 18867, 7018867 }, // "Trainer Spell: Shadowburn (#18867)"
    { 18868, 7018868 }, // "Trainer Spell: Shadowburn (#18868)"
    { 18869, 7018869 }, // "Trainer Spell: Shadowburn (#18869)"
    { 18870, 7018870 }, // "Trainer Spell: Shadowburn (#18870)"
    { 18871, 7018871 }, // "Trainer Spell: Shadowburn (#18871)"
    { 18937, 7018937 }, // "Trainer Spell: Dark Pact (#18937)"
    { 18938, 7018938 }, // "Trainer Spell: Dark Pact (#18938)"
    { 19238, 7019238 }, // "Trainer Spell: Desperate Prayer (#19238)"
    { 19240, 7019240 }, // "Trainer Spell: Desperate Prayer (#19240)"
    { 19241, 7019241 }, // "Trainer Spell: Desperate Prayer (#19241)"
    { 19242, 7019242 }, // "Trainer Spell: Desperate Prayer (#19242)"
    { 19243, 7019243 }, // "Trainer Spell: Desperate Prayer (#19243)"
    { 19263, 7019263 }, // "Trainer Spell: Deterrence (#19263)"
    { 19276, 7019276 }, // "Trainer Spell: Devouring Plague (#19276)"
    { 19277, 7019277 }, // "Trainer Spell: Devouring Plague (#19277)"
    { 19278, 7019278 }, // "Trainer Spell: Devouring Plague (#19278)"
    { 19279, 7019279 }, // "Trainer Spell: Devouring Plague (#19279)"
    { 19280, 7019280 }, // "Trainer Spell: Devouring Plague (#19280)"
    { 19740, 7019740 }, // "Trainer Spell: Blessing of Might (#19740)"
    { 19742, 7019742 }, // "Trainer Spell: Blessing of Wisdom (#19742)"
    { 19746, 7019746 }, // "Trainer Spell: Concentration Aura (#19746)"
    { 19750, 7019750 }, // "Trainer Spell: Flash of Light (#19750)"
    { 19752, 7019752 }, // "Trainer Spell: Divine Intervention (#19752)"
    { 19834, 7019834 }, // "Trainer Spell: Blessing of Might (#19834)"
    { 19835, 7019835 }, // "Trainer Spell: Blessing of Might (#19835)"
    { 19836, 7019836 }, // "Trainer Spell: Blessing of Might (#19836)"
    { 19837, 7019837 }, // "Trainer Spell: Blessing of Might (#19837)"
    { 19838, 7019838 }, // "Trainer Spell: Blessing of Might (#19838)"
    { 19850, 7019850 }, // "Trainer Spell: Blessing of Wisdom (#19850)"
    { 19852, 7019852 }, // "Trainer Spell: Blessing of Wisdom (#19852)"
    { 19853, 7019853 }, // "Trainer Spell: Blessing of Wisdom (#19853)"
    { 19854, 7019854 }, // "Trainer Spell: Blessing of Wisdom (#19854)"
    { 19876, 7019876 }, // "Trainer Spell: Shadow Resistance Aura (#19876)"
    { 19878, 7019878 }, // "Trainer Spell: Track Demons (#19878)"
    { 19879, 7019879 }, // "Trainer Spell: Track Dragonkin (#19879)"
    { 19880, 7019880 }, // "Trainer Spell: Track Elementals (#19880)"
    { 19882, 7019882 }, // "Trainer Spell: Track Giants (#19882)"
    { 19883, 7019883 }, // "Trainer Spell: Track Humanoids (#19883)"
    { 19884, 7019884 }, // "Trainer Spell: Track Undead (#19884)"
    { 19885, 7019885 }, // "Trainer Spell: Track Hidden (#19885)"
    { 19888, 7019888 }, // "Trainer Spell: Frost Resistance Aura (#19888)"
    { 19891, 7019891 }, // "Trainer Spell: Fire Resistance Aura (#19891)"
    { 19895, 7019895 }, // "Trainer Spell: Shadow Resistance Aura (#19895)"
    { 19896, 7019896 }, // "Trainer Spell: Shadow Resistance Aura (#19896)"
    { 19897, 7019897 }, // "Trainer Spell: Frost Resistance Aura (#19897)"
    { 19898, 7019898 }, // "Trainer Spell: Frost Resistance Aura (#19898)"
    { 19899, 7019899 }, // "Trainer Spell: Fire Resistance Aura (#19899)"
    { 19900, 7019900 }, // "Trainer Spell: Fire Resistance Aura (#19900)"
    { 19939, 7019939 }, // "Trainer Spell: Flash of Light (#19939)"
    { 19940, 7019940 }, // "Trainer Spell: Flash of Light (#19940)"
    { 19941, 7019941 }, // "Trainer Spell: Flash of Light (#19941)"
    { 19942, 7019942 }, // "Trainer Spell: Flash of Light (#19942)"
    { 19943, 7019943 }, // "Trainer Spell: Flash of Light (#19943)"
    { 20043, 7020043 }, // "Trainer Spell: Aspect of the Wild (#20043)"
    { 20116, 7020116 }, // "Trainer Spell: Consecration (#20116)"
    { 20164, 7020164 }, // "Trainer Spell: Seal of Justice (#20164)"
    { 20165, 7020165 }, // "Trainer Spell: Seal of Light (#20165)"
    { 20166, 7020166 }, // "Trainer Spell: Seal of Wisdom (#20166)"
    { 20190, 7020190 }, // "Trainer Spell: Aspect of the Wild (#20190)"
    { 20217, 7020217 }, // "Trainer Spell: Blessing of Kings (#20217)"
    { 20230, 7020230 }, // "Trainer Spell: Retaliation (#20230)"
    { 20252, 7020252 }, // "Trainer Spell: Intercept (#20252)"
    { 20484, 7020484 }, // "Trainer Spell: Rebirth (#20484)"
    { 20569, 7020569 }, // "Trainer Spell: Cleave (#20569)"
    { 20608, 7020608 }, // "Trainer Spell: Reincarnation (#20608)"
    { 20609, 7020609 }, // "Trainer Spell: Ancestral Spirit (#20609)"
    { 20610, 7020610 }, // "Trainer Spell: Ancestral Spirit (#20610)"
    { 20658, 7020658 }, // "Trainer Spell: Execute (#20658)"
    { 20660, 7020660 }, // "Trainer Spell: Execute (#20660)"
    { 20661, 7020661 }, // "Trainer Spell: Execute (#20661)"
    { 20662, 7020662 }, // "Trainer Spell: Execute (#20662)"
    { 20719, 7020719 }, // "Trainer Spell: Feline Grace (#20719)"
    { 20736, 7020736 }, // "Trainer Spell: Distracting Shot (#20736)"
    { 20739, 7020739 }, // "Trainer Spell: Rebirth (#20739)"
    { 20742, 7020742 }, // "Trainer Spell: Rebirth (#20742)"
    { 20747, 7020747 }, // "Trainer Spell: Rebirth (#20747)"
    { 20748, 7020748 }, // "Trainer Spell: Rebirth (#20748)"
    { 20752, 7020752 }, // "Trainer Spell: Create Soulstone (#20752)"
    { 20755, 7020755 }, // "Trainer Spell: Create Soulstone (#20755)"
    { 20756, 7020756 }, // "Trainer Spell: Create Soulstone (#20756)"
    { 20757, 7020757 }, // "Trainer Spell: Create Soulstone (#20757)"
    { 20770, 7020770 }, // "Trainer Spell: Resurrection (#20770)"
    { 20772, 7020772 }, // "Trainer Spell: Redemption (#20772)"
    { 20773, 7020773 }, // "Trainer Spell: Redemption (#20773)"
    { 20776, 7020776 }, // "Trainer Spell: Ancestral Spirit (#20776)"
    { 20777, 7020777 }, // "Trainer Spell: Ancestral Spirit (#20777)"
    { 20900, 7020900 }, // "Trainer Spell: Aimed Shot (#20900)"
    { 20901, 7020901 }, // "Trainer Spell: Aimed Shot (#20901)"
    { 20902, 7020902 }, // "Trainer Spell: Aimed Shot (#20902)"
    { 20903, 7020903 }, // "Trainer Spell: Aimed Shot (#20903)"
    { 20904, 7020904 }, // "Trainer Spell: Aimed Shot (#20904)"
    { 20909, 7020909 }, // "Trainer Spell: Counterattack (#20909)"
    { 20910, 7020910 }, // "Trainer Spell: Counterattack (#20910)"
    { 20922, 7020922 }, // "Trainer Spell: Consecration (#20922)"
    { 20923, 7020923 }, // "Trainer Spell: Consecration (#20923)"
    { 20924, 7020924 }, // "Trainer Spell: Consecration (#20924)"
    { 20927, 7020927 }, // "Trainer Spell: Holy Shield (#20927)"
    { 20928, 7020928 }, // "Trainer Spell: Holy Shield (#20928)"
    { 20929, 7020929 }, // "Trainer Spell: Holy Shock (#20929)"
    { 20930, 7020930 }, // "Trainer Spell: Holy Shock (#20930)"
    { 21551, 7021551 }, // "Trainer Spell: Mortal Strike (#21551)"
    { 21552, 7021552 }, // "Trainer Spell: Mortal Strike (#21552)"
    { 21553, 7021553 }, // "Trainer Spell: Mortal Strike (#21553)"
    { 22568, 7022568 }, // "Trainer Spell: Ferocious Bite (#22568)"
    { 22570, 7022570 }, // "Trainer Spell: Maim (#22570)"
    { 22782, 7022782 }, // "Trainer Spell: Mage Armor (#22782)"
    { 22783, 7022783 }, // "Trainer Spell: Mage Armor (#22783)"
    { 22812, 7022812 }, // "Trainer Spell: Barkskin (#22812)"
    { 22827, 7022827 }, // "Trainer Spell: Ferocious Bite (#22827)"
    { 22828, 7022828 }, // "Trainer Spell: Ferocious Bite (#22828)"
    { 22829, 7022829 }, // "Trainer Spell: Ferocious Bite (#22829)"
    { 22842, 7022842 }, // "Trainer Spell: Frenzied Regeneration (#22842)"
    { 23161, 7023161 }, // "Trainer Spell: Dreadsteed (#23161)"
    { 23214, 7023214 }, // "Trainer Spell: Charger (#23214)"
    { 23920, 7023920 }, // "Trainer Spell: Spell Reflection (#23920)"
    { 23922, 7023922 }, // "Trainer Spell: Shield Slam (#23922)"
    { 23923, 7023923 }, // "Trainer Spell: Shield Slam (#23923)"
    { 23924, 7023924 }, // "Trainer Spell: Shield Slam (#23924)"
    { 23925, 7023925 }, // "Trainer Spell: Shield Slam (#23925)"
    { 24132, 7024132 }, // "Trainer Spell: Wyvern Sting (#24132)"
    { 24133, 7024133 }, // "Trainer Spell: Wyvern Sting (#24133)"
    { 24239, 7024239 }, // "Trainer Spell: Hammer of Wrath (#24239)"
    { 24248, 7024248 }, // "Trainer Spell: Ferocious Bite (#24248)"
    { 24274, 7024274 }, // "Trainer Spell: Hammer of Wrath (#24274)"
    { 24275, 7024275 }, // "Trainer Spell: Hammer of Wrath (#24275)"
    { 24398, 7024398 }, // "Trainer Spell: Water Shield (#24398)"
    { 24974, 7024974 }, // "Trainer Spell: Insect Swarm (#24974)"
    { 24975, 7024975 }, // "Trainer Spell: Insect Swarm (#24975)"
    { 24976, 7024976 }, // "Trainer Spell: Insect Swarm (#24976)"
    { 24977, 7024977 }, // "Trainer Spell: Insect Swarm (#24977)"
    { 25202, 7025202 }, // "Trainer Spell: Demoralizing Shout (#25202)"
    { 25203, 7025203 }, // "Trainer Spell: Demoralizing Shout (#25203)"
    { 25208, 7025208 }, // "Trainer Spell: Rend (#25208)"
    { 25210, 7025210 }, // "Trainer Spell: Greater Heal (#25210)"
    { 25213, 7025213 }, // "Trainer Spell: Greater Heal (#25213)"
    { 25217, 7025217 }, // "Trainer Spell: Power Word: Shield (#25217)"
    { 25218, 7025218 }, // "Trainer Spell: Power Word: Shield (#25218)"
    { 25221, 7025221 }, // "Trainer Spell: Renew (#25221)"
    { 25222, 7025222 }, // "Trainer Spell: Renew (#25222)"
    { 25231, 7025231 }, // "Trainer Spell: Cleave (#25231)"
    { 25233, 7025233 }, // "Trainer Spell: Flash Heal (#25233)"
    { 25234, 7025234 }, // "Trainer Spell: Execute (#25234)"
    { 25235, 7025235 }, // "Trainer Spell: Flash Heal (#25235)"
    { 25236, 7025236 }, // "Trainer Spell: Execute (#25236)"
    { 25241, 7025241 }, // "Trainer Spell: Slam (#25241)"
    { 25242, 7025242 }, // "Trainer Spell: Slam (#25242)"
    { 25248, 7025248 }, // "Trainer Spell: Mortal Strike (#25248)"
    { 25258, 7025258 }, // "Trainer Spell: Shield Slam (#25258)"
    { 25264, 7025264 }, // "Trainer Spell: Thunder Clap (#25264)"
    { 25269, 7025269 }, // "Trainer Spell: Revenge (#25269)"
    { 25308, 7025308 }, // "Trainer Spell: Prayer of Healing (#25308)"
    { 25312, 7025312 }, // "Trainer Spell: Divine Spirit (#25312)"
    { 25331, 7025331 }, // "Trainer Spell: Holy Nova (#25331)"
    { 25363, 7025363 }, // "Trainer Spell: Smite (#25363)"
    { 25364, 7025364 }, // "Trainer Spell: Smite (#25364)"
    { 25367, 7025367 }, // "Trainer Spell: Shadow Word: Pain (#25367)"
    { 25368, 7025368 }, // "Trainer Spell: Shadow Word: Pain (#25368)"
    { 25372, 7025372 }, // "Trainer Spell: Mind Blast (#25372)"
    { 25375, 7025375 }, // "Trainer Spell: Mind Blast (#25375)"
    { 25384, 7025384 }, // "Trainer Spell: Holy Fire (#25384)"
    { 25387, 7025387 }, // "Trainer Spell: Mind Flay (#25387)"
    { 25389, 7025389 }, // "Trainer Spell: Power Word: Fortitude (#25389)"
    { 25391, 7025391 }, // "Trainer Spell: Healing Wave (#25391)"
    { 25396, 7025396 }, // "Trainer Spell: Healing Wave (#25396)"
    { 25420, 7025420 }, // "Trainer Spell: Lesser Healing Wave (#25420)"
    { 25422, 7025422 }, // "Trainer Spell: Chain Heal (#25422)"
    { 25423, 7025423 }, // "Trainer Spell: Chain Heal (#25423)"
    { 25431, 7025431 }, // "Trainer Spell: Inner Fire (#25431)"
    { 25433, 7025433 }, // "Trainer Spell: Shadow Protection (#25433)"
    { 25435, 7025435 }, // "Trainer Spell: Resurrection (#25435)"
    { 25437, 7025437 }, // "Trainer Spell: Desperate Prayer (#25437)"
    { 25439, 7025439 }, // "Trainer Spell: Chain Lightning (#25439)"
    { 25442, 7025442 }, // "Trainer Spell: Chain Lightning (#25442)"
    { 25448, 7025448 }, // "Trainer Spell: Lightning Bolt (#25448)"
    { 25449, 7025449 }, // "Trainer Spell: Lightning Bolt (#25449)"
    { 25454, 7025454 }, // "Trainer Spell: Earth Shock (#25454)"
    { 25457, 7025457 }, // "Trainer Spell: Flame Shock (#25457)"
    { 25464, 7025464 }, // "Trainer Spell: Frost Shock (#25464)"
    { 25467, 7025467 }, // "Trainer Spell: Devouring Plague (#25467)"
    { 25469, 7025469 }, // "Trainer Spell: Lightning Shield (#25469)"
    { 25472, 7025472 }, // "Trainer Spell: Lightning Shield (#25472)"
    { 25489, 7025489 }, // "Trainer Spell: Flametongue Weapon (#25489)"
    { 25500, 7025500 }, // "Trainer Spell: Frostbrand Weapon (#25500)"
    { 25505, 7025505 }, // "Trainer Spell: Windfury Weapon (#25505)"
    { 25508, 7025508 }, // "Trainer Spell: Stoneskin Totem (#25508)"
    { 25509, 7025509 }, // "Trainer Spell: Stoneskin Totem (#25509)"
    { 25525, 7025525 }, // "Trainer Spell: Stoneclaw Totem (#25525)"
    { 25528, 7025528 }, // "Trainer Spell: Strength of Earth Totem (#25528)"
    { 25533, 7025533 }, // "Trainer Spell: Searing Totem (#25533)"
    { 25546, 7025546 }, // "Trainer Spell: Fire Nova (#25546)"
    { 25547, 7025547 }, // "Trainer Spell: Fire Nova (#25547)"
    { 25552, 7025552 }, // "Trainer Spell: Magma Totem (#25552)"
    { 25557, 7025557 }, // "Trainer Spell: Flametongue Totem (#25557)"
    { 25560, 7025560 }, // "Trainer Spell: Frost Resistance Totem (#25560)"
    { 25563, 7025563 }, // "Trainer Spell: Fire Resistance Totem (#25563)"
    { 25567, 7025567 }, // "Trainer Spell: Healing Stream Totem (#25567)"
    { 25570, 7025570 }, // "Trainer Spell: Mana Spring Totem (#25570)"
    { 25574, 7025574 }, // "Trainer Spell: Nature Resistance Totem (#25574)"
    { 25590, 7025590 }, // "Trainer Spell: Ancestral Spirit (#25590)"
    { 25780, 7025780 }, // "Trainer Spell: Righteous Fury (#25780)"
    { 25782, 7025782 }, // "Trainer Spell: Greater Blessing of Might (#25782)"
    { 25894, 7025894 }, // "Trainer Spell: Greater Blessing of Wisdom (#25894)"
    { 25898, 7025898 }, // "Trainer Spell: Greater Blessing of Kings (#25898)"
    { 25899, 7025899 }, // "Trainer Spell: Greater Blessing of Sanctuary (#25899)"
    { 25916, 7025916 }, // "Trainer Spell: Greater Blessing of Might (#25916)"
    { 25918, 7025918 }, // "Trainer Spell: Greater Blessing of Wisdom (#25918)"
    { 26573, 7026573 }, // "Trainer Spell: Consecration (#26573)"
    { 26669, 7026669 }, // "Trainer Spell: Evasion (#26669)"
    { 26679, 7026679 }, // "Trainer Spell: Deadly Throw (#26679)"
    { 26839, 7026839 }, // "Trainer Spell: Garrote (#26839)"
    { 26861, 7026861 }, // "Trainer Spell: Sinister Strike (#26861)"
    { 26862, 7026862 }, // "Trainer Spell: Sinister Strike (#26862)"
    { 26863, 7026863 }, // "Trainer Spell: Backstab (#26863)"
    { 26864, 7026864 }, // "Trainer Spell: Hemorrhage (#26864)"
    { 26865, 7026865 }, // "Trainer Spell: Eviscerate (#26865)"
    { 26867, 7026867 }, // "Trainer Spell: Rupture (#26867)"
    { 26884, 7026884 }, // "Trainer Spell: Garrote (#26884)"
    { 26889, 7026889 }, // "Trainer Spell: Vanish (#26889)"
    { 26978, 7026978 }, // "Trainer Spell: Healing Touch (#26978)"
    { 26979, 7026979 }, // "Trainer Spell: Healing Touch (#26979)"
    { 26980, 7026980 }, // "Trainer Spell: Regrowth (#26980)"
    { 26981, 7026981 }, // "Trainer Spell: Rejuvenation (#26981)"
    { 26982, 7026982 }, // "Trainer Spell: Rejuvenation (#26982)"
    { 26983, 7026983 }, // "Trainer Spell: Tranquility (#26983)"
    { 26984, 7026984 }, // "Trainer Spell: Wrath (#26984)"
    { 26985, 7026985 }, // "Trainer Spell: Wrath (#26985)"
    { 26986, 7026986 }, // "Trainer Spell: Starfire (#26986)"
    { 26987, 7026987 }, // "Trainer Spell: Moonfire (#26987)"
    { 26988, 7026988 }, // "Trainer Spell: Moonfire (#26988)"
    { 26989, 7026989 }, // "Trainer Spell: Entangling Roots (#26989)"
    { 26990, 7026990 }, // "Trainer Spell: Mark of the Wild (#26990)"
    { 26992, 7026992 }, // "Trainer Spell: Thorns (#26992)"
    { 26994, 7026994 }, // "Trainer Spell: Rebirth (#26994)"
    { 26995, 7026995 }, // "Trainer Spell: Soothe Animal (#26995)"
    { 26996, 7026996 }, // "Trainer Spell: Maul (#26996)"
    { 26997, 7026997 }, // "Trainer Spell: Swipe (Bear) (#26997)"
    { 26998, 7026998 }, // "Trainer Spell: Demoralizing Roar (#26998)"
    { 27000, 7027000 }, // "Trainer Spell: Claw (#27000)"
    { 27001, 7027001 }, // "Trainer Spell: Shred (#27001)"
    { 27002, 7027002 }, // "Trainer Spell: Shred (#27002)"
    { 27003, 7027003 }, // "Trainer Spell: Rake (#27003)"
    { 27004, 7027004 }, // "Trainer Spell: Cower (#27004)"
    { 27005, 7027005 }, // "Trainer Spell: Ravage (#27005)"
    { 27006, 7027006 }, // "Trainer Spell: Pounce (#27006)"
    { 27008, 7027008 }, // "Trainer Spell: Rip (#27008)"
    { 27009, 7027009 }, // "Trainer Spell: Nature's Grasp (#27009)"
    { 27012, 7027012 }, // "Trainer Spell: Hurricane (#27012)"
    { 27013, 7027013 }, // "Trainer Spell: Insect Swarm (#27013)"
    { 27014, 7027014 }, // "Trainer Spell: Raptor Strike (#27014)"
    { 27016, 7027016 }, // "Trainer Spell: Serpent Sting (#27016)"
    { 27019, 7027019 }, // "Trainer Spell: Arcane Shot (#27019)"
    { 27021, 7027021 }, // "Trainer Spell: Multi-Shot (#27021)"
    { 27022, 7027022 }, // "Trainer Spell: Volley (#27022)"
    { 27023, 7027023 }, // "Trainer Spell: Immolation Trap (#27023)"
    { 27025, 7027025 }, // "Trainer Spell: Explosive Trap (#27025)"
    { 27044, 7027044 }, // "Trainer Spell: Aspect of the Hawk (#27044)"
    { 27045, 7027045 }, // "Trainer Spell: Aspect of the Wild (#27045)"
    { 27046, 7027046 }, // "Trainer Spell: Mend Pet (#27046)"
    { 27065, 7027065 }, // "Trainer Spell: Aimed Shot (#27065)"
    { 27067, 7027067 }, // "Trainer Spell: Counterattack (#27067)"
    { 27068, 7027068 }, // "Trainer Spell: Wyvern Sting (#27068)"
    { 27070, 7027070 }, // "Trainer Spell: Fireball (#27070)"
    { 27071, 7027071 }, // "Trainer Spell: Frostbolt (#27071)"
    { 27072, 7027072 }, // "Trainer Spell: Frostbolt (#27072)"
    { 27073, 7027073 }, // "Trainer Spell: Scorch (#27073)"
    { 27074, 7027074 }, // "Trainer Spell: Scorch (#27074)"
    { 27075, 7027075 }, // "Trainer Spell: Arcane Missiles (#27075)"
    { 27078, 7027078 }, // "Trainer Spell: Fire Blast (#27078)"
    { 27079, 7027079 }, // "Trainer Spell: Fire Blast (#27079)"
    { 27080, 7027080 }, // "Trainer Spell: Arcane Explosion (#27080)"
    { 27082, 7027082 }, // "Trainer Spell: Arcane Explosion (#27082)"
    { 27085, 7027085 }, // "Trainer Spell: Blizzard (#27085)"
    { 27086, 7027086 }, // "Trainer Spell: Flamestrike (#27086)"
    { 27087, 7027087 }, // "Trainer Spell: Cone of Cold (#27087)"
    { 27088, 7027088 }, // "Trainer Spell: Frost Nova (#27088)"
    { 27101, 7027101 }, // "Trainer Spell: Conjure Mana Gem (#27101)"
    { 27124, 7027124 }, // "Trainer Spell: Ice Armor (#27124)"
    { 27125, 7027125 }, // "Trainer Spell: Mage Armor (#27125)"
    { 27126, 7027126 }, // "Trainer Spell: Arcane Intellect (#27126)"
    { 27128, 7027128 }, // "Trainer Spell: Fire Ward (#27128)"
    { 27130, 7027130 }, // "Trainer Spell: Amplify Magic (#27130)"
    { 27131, 7027131 }, // "Trainer Spell: Mana Shield (#27131)"
    { 27132, 7027132 }, // "Trainer Spell: Pyroblast (#27132)"
    { 27133, 7027133 }, // "Trainer Spell: Blast Wave (#27133)"
    { 27134, 7027134 }, // "Trainer Spell: Ice Barrier (#27134)"
    { 27135, 7027135 }, // "Trainer Spell: Holy Light (#27135)"
    { 27136, 7027136 }, // "Trainer Spell: Holy Light (#27136)"
    { 27137, 7027137 }, // "Trainer Spell: Flash of Light (#27137)"
    { 27138, 7027138 }, // "Trainer Spell: Exorcism (#27138)"
    { 27139, 7027139 }, // "Trainer Spell: Holy Wrath (#27139)"
    { 27140, 7027140 }, // "Trainer Spell: Blessing of Might (#27140)"
    { 27141, 7027141 }, // "Trainer Spell: Greater Blessing of Might (#27141)"
    { 27142, 7027142 }, // "Trainer Spell: Blessing of Wisdom (#27142)"
    { 27143, 7027143 }, // "Trainer Spell: Greater Blessing of Wisdom (#27143)"
    { 27149, 7027149 }, // "Trainer Spell: Devotion Aura (#27149)"
    { 27150, 7027150 }, // "Trainer Spell: Retribution Aura (#27150)"
    { 27151, 7027151 }, // "Trainer Spell: Shadow Resistance Aura (#27151)"
    { 27152, 7027152 }, // "Trainer Spell: Frost Resistance Aura (#27152)"
    { 27153, 7027153 }, // "Trainer Spell: Fire Resistance Aura (#27153)"
    { 27154, 7027154 }, // "Trainer Spell: Lay on Hands (#27154)"
    { 27173, 7027173 }, // "Trainer Spell: Consecration (#27173)"
    { 27174, 7027174 }, // "Trainer Spell: Holy Shock (#27174)"
    { 27179, 7027179 }, // "Trainer Spell: Holy Shield (#27179)"
    { 27180, 7027180 }, // "Trainer Spell: Hammer of Wrath (#27180)"
    { 27209, 7027209 }, // "Trainer Spell: Shadow Bolt (#27209)"
    { 27210, 7027210 }, // "Trainer Spell: Searing Pain (#27210)"
    { 27211, 7027211 }, // "Trainer Spell: Soul Fire (#27211)"
    { 27212, 7027212 }, // "Trainer Spell: Rain of Fire (#27212)"
    { 27213, 7027213 }, // "Trainer Spell: Hellfire (#27213)"
    { 27215, 7027215 }, // "Trainer Spell: Immolate (#27215)"
    { 27216, 7027216 }, // "Trainer Spell: Corruption (#27216)"
    { 27217, 7027217 }, // "Trainer Spell: Drain Soul (#27217)"
    { 27218, 7027218 }, // "Trainer Spell: Curse of Agony (#27218)"
    { 27219, 7027219 }, // "Trainer Spell: Drain Life (#27219)"
    { 27220, 7027220 }, // "Trainer Spell: Drain Life (#27220)"
    { 27222, 7027222 }, // "Trainer Spell: Life Tap (#27222)"
    { 27223, 7027223 }, // "Trainer Spell: Death Coil (#27223)"
    { 27224, 7027224 }, // "Trainer Spell: Curse of Weakness (#27224)"
    { 27228, 7027228 }, // "Trainer Spell: Curse of the Elements (#27228)"
    { 27230, 7027230 }, // "Trainer Spell: Create Healthstone (#27230)"
    { 27238, 7027238 }, // "Trainer Spell: Create Soulstone (#27238)"
    { 27243, 7027243 }, // "Trainer Spell: Seed of Corruption (#27243)"
    { 27250, 7027250 }, // "Trainer Spell: Create Firestone (#27250)"
    { 27259, 7027259 }, // "Trainer Spell: Health Funnel (#27259)"
    { 27260, 7027260 }, // "Trainer Spell: Demon Armor (#27260)"
    { 27263, 7027263 }, // "Trainer Spell: Shadowburn (#27263)"
    { 27265, 7027265 }, // "Trainer Spell: Dark Pact (#27265)"
    { 27441, 7027441 }, // "Trainer Spell: Ambush (#27441)"
    { 27448, 7027448 }, // "Trainer Spell: Feint (#27448)"
    { 27681, 7027681 }, // "Trainer Spell: Prayer of Spirit (#27681)"
    { 27799, 7027799 }, // "Trainer Spell: Holy Nova (#27799)"
    { 27800, 7027800 }, // "Trainer Spell: Holy Nova (#27800)"
    { 27801, 7027801 }, // "Trainer Spell: Holy Nova (#27801)"
    { 27841, 7027841 }, // "Trainer Spell: Divine Spirit (#27841)"
    { 27870, 7027870 }, // "Trainer Spell: Lightwell (#27870)"
    { 27871, 7027871 }, // "Trainer Spell: Lightwell (#27871)"
    { 28172, 7028172 }, // "Trainer Spell: Create Spellstone (#28172)"
    { 28176, 7028176 }, // "Trainer Spell: Fel Armor (#28176)"
    { 28189, 7028189 }, // "Trainer Spell: Fel Armor (#28189)"
    { 28275, 7028275 }, // "Trainer Spell: Lightwell (#28275)"
    { 29166, 7029166 }, // "Trainer Spell: Innervate (#29166)"
    { 29707, 7029707 }, // "Trainer Spell: Heroic Strike (#29707)"
    { 29722, 7029722 }, // "Trainer Spell: Incinerate (#29722)"
    { 29858, 7029858 }, // "Trainer Spell: Soulshatter (#29858)"
    { 29893, 7029893 }, // "Trainer Spell: Ritual of Souls (#29893)"
    { 30016, 7030016 }, // "Trainer Spell: Devastate (#30016)"
    { 30022, 7030022 }, // "Trainer Spell: Devastate (#30022)"
    { 30324, 7030324 }, // "Trainer Spell: Heroic Strike (#30324)"
    { 30330, 7030330 }, // "Trainer Spell: Mortal Strike (#30330)"
    { 30356, 7030356 }, // "Trainer Spell: Shield Slam (#30356)"
    { 30357, 7030357 }, // "Trainer Spell: Revenge (#30357)"
    { 30404, 7030404 }, // "Trainer Spell: Unstable Affliction (#30404)"
    { 30405, 7030405 }, // "Trainer Spell: Unstable Affliction (#30405)"
    { 30413, 7030413 }, // "Trainer Spell: Shadowfury (#30413)"
    { 30414, 7030414 }, // "Trainer Spell: Shadowfury (#30414)"
    { 30449, 7030449 }, // "Trainer Spell: Spellsteal (#30449)"
    { 30451, 7030451 }, // "Trainer Spell: Arcane Blast (#30451)"
    { 30455, 7030455 }, // "Trainer Spell: Ice Lance (#30455)"
    { 30459, 7030459 }, // "Trainer Spell: Searing Pain (#30459)"
    { 30482, 7030482 }, // "Trainer Spell: Molten Armor (#30482)"
    { 30545, 7030545 }, // "Trainer Spell: Soul Fire (#30545)"
    { 30546, 7030546 }, // "Trainer Spell: Shadowburn (#30546)"
    { 30909, 7030909 }, // "Trainer Spell: Curse of Weakness (#30909)"
    { 30910, 7030910 }, // "Trainer Spell: Curse of Doom (#30910)"
    { 31224, 7031224 }, // "Trainer Spell: Cloak of Shadows (#31224)"
    { 31789, 7031789 }, // "Trainer Spell: Righteous Defense (#31789)"
    { 31801, 7031801 }, // "Trainer Spell: Seal of Vengeance (#31801)"
    { 31884, 7031884 }, // "Trainer Spell: Avenging Wrath (#31884)"
    { 32182, 7032182 }, // "Trainer Spell: Heroism (#32182)"
    { 32223, 7032223 }, // "Trainer Spell: Crusader Aura (#32223)"
    { 32231, 7032231 }, // "Trainer Spell: Incinerate (#32231)"
    { 32266, 7032266 }, // "Trainer Spell: Portal: Exodar (#32266)"
    { 32267, 7032267 }, // "Trainer Spell: Portal: Silvermoon (#32267)"
    { 32271, 7032271 }, // "Trainer Spell: Teleport: Exodar (#32271)"
    { 32272, 7032272 }, // "Trainer Spell: Teleport: Silvermoon (#32272)"
    { 32375, 7032375 }, // "Trainer Spell: Mass Dispel (#32375)"
    { 32379, 7032379 }, // "Trainer Spell: Shadow Word: Death (#32379)"
    { 32546, 7032546 }, // "Trainer Spell: Binding Heal (#32546)"
    { 32593, 7032593 }, // "Trainer Spell: Earth Shield (#32593)"
    { 32594, 7032594 }, // "Trainer Spell: Earth Shield (#32594)"
    { 32645, 7032645 }, // "Trainer Spell: Envenom (#32645)"
    { 32684, 7032684 }, // "Trainer Spell: Envenom (#32684)"
    { 32699, 7032699 }, // "Trainer Spell: Avenger's Shield (#32699)"
    { 32700, 7032700 }, // "Trainer Spell: Avenger's Shield (#32700)"
    { 32796, 7032796 }, // "Trainer Spell: Frost Ward (#32796)"
    { 32996, 7032996 }, // "Trainer Spell: Shadow Word: Death (#32996)"
    { 32999, 7032999 }, // "Trainer Spell: Prayer of Spirit (#32999)"
    { 33041, 7033041 }, // "Trainer Spell: Dragon's Breath (#33041)"
    { 33042, 7033042 }, // "Trainer Spell: Dragon's Breath (#33042)"
    { 33043, 7033043 }, // "Trainer Spell: Dragon's Breath (#33043)"
    { 33072, 7033072 }, // "Trainer Spell: Holy Shock (#33072)"
    { 33076, 7033076 }, // "Trainer Spell: Prayer of Mending (#33076)"
    { 33357, 7033357 }, // "Trainer Spell: Dash (#33357)"
    { 33405, 7033405 }, // "Trainer Spell: Ice Barrier (#33405)"
    { 33690, 7033690 }, // "Trainer Spell: Teleport: Shattrath (#33690)"
    { 33691, 7033691 }, // "Trainer Spell: Portal: Shattrath (#33691)"
    { 33736, 7033736 }, // "Trainer Spell: Water Shield (#33736)"
    { 33745, 7033745 }, // "Trainer Spell: Lacerate (#33745)"
    { 33763, 7033763 }, // "Trainer Spell: Lifebloom (#33763)"
    { 33786, 7033786 }, // "Trainer Spell: Cyclone (#33786)"
    { 33933, 7033933 }, // "Trainer Spell: Blast Wave (#33933)"
    { 33938, 7033938 }, // "Trainer Spell: Pyroblast (#33938)"
    { 33944, 7033944 }, // "Trainer Spell: Dampen Magic (#33944)"
    { 33946, 7033946 }, // "Trainer Spell: Amplify Magic (#33946)"
    { 33950, 7033950 }, // "Trainer Spell: Flight Form (#33950)"
    { 33982, 7033982 }, // "Trainer Spell: Mangle (Cat) (#33982)"
    { 33983, 7033983 }, // "Trainer Spell: Mangle (Cat) (#33983)"
    { 33986, 7033986 }, // "Trainer Spell: Mangle (Bear) (#33986)"
    { 33987, 7033987 }, // "Trainer Spell: Mangle (Bear) (#33987)"
    { 34026, 7034026 }, // "Trainer Spell: Kill Command (#34026)"
    { 34074, 7034074 }, // "Trainer Spell: Aspect of the Viper (#34074)"
    { 34120, 7034120 }, // "Trainer Spell: Steady Shot (#34120)"
    { 34411, 7034411 }, // "Trainer Spell: Mutilate (#34411)"
    { 34412, 7034412 }, // "Trainer Spell: Mutilate (#34412)"
    { 34413, 7034413 }, // "Trainer Spell: Mutilate (#34413)"
    { 34428, 7034428 }, // "Trainer Spell: Victory Rush (#34428)"
    { 34433, 7034433 }, // "Trainer Spell: Shadowfiend (#34433)"
    { 34477, 7034477 }, // "Trainer Spell: Misdirection (#34477)"
    { 34600, 7034600 }, // "Trainer Spell: Snake Trap (#34600)"
    { 34767, 7034767 }, // "Trainer Spell: Summon Charger (#34767)"
    { 34768, 7034768 }, // "Trainer Spell: Summon Warhorse (#34768)"
    { 34863, 7034863 }, // "Trainer Spell: Circle of Healing (#34863)"
    { 34864, 7034864 }, // "Trainer Spell: Circle of Healing (#34864)"
    { 34865, 7034865 }, // "Trainer Spell: Circle of Healing (#34865)"
    { 34866, 7034866 }, // "Trainer Spell: Circle of Healing (#34866)"
    { 34916, 7034916 }, // "Trainer Spell: Vampiric Touch (#34916)"
    { 34917, 7034917 }, // "Trainer Spell: Vampiric Touch (#34917)"
    { 35715, 7035715 }, // "Trainer Spell: Teleport: Shattrath (#35715)"
    { 35717, 7035717 }, // "Trainer Spell: Portal: Shattrath (#35717)"
    { 36916, 7036916 }, // "Trainer Spell: Mongoose Bite (#36916)"
    { 36936, 7036936 }, // "Trainer Spell: Totemic Recall (#36936)"
    { 37420, 7037420 }, // "Trainer Spell: Conjure Water (#37420)"
    { 38692, 7038692 }, // "Trainer Spell: Fireball (#38692)"
    { 38697, 7038697 }, // "Trainer Spell: Frostbolt (#38697)"
    { 38699, 7038699 }, // "Trainer Spell: Arcane Missiles (#38699)"
    { 38704, 7038704 }, // "Trainer Spell: Arcane Missiles (#38704)"
    { 40120, 7040120 }, // "Trainer Spell: Swift Flight Form (#40120)"
    { 42650, 7042650 }, // "Trainer Spell: Army of the Dead (#42650)"
    { 42832, 7042832 }, // "Trainer Spell: Fireball (#42832)"
    { 42833, 7042833 }, // "Trainer Spell: Fireball (#42833)"
    { 42841, 7042841 }, // "Trainer Spell: Frostbolt (#42841)"
    { 42842, 7042842 }, // "Trainer Spell: Frostbolt (#42842)"
    { 42843, 7042843 }, // "Trainer Spell: Arcane Missiles (#42843)"
    { 42846, 7042846 }, // "Trainer Spell: Arcane Missiles (#42846)"
    { 42858, 7042858 }, // "Trainer Spell: Scorch (#42858)"
    { 42859, 7042859 }, // "Trainer Spell: Scorch (#42859)"
    { 42872, 7042872 }, // "Trainer Spell: Fire Blast (#42872)"
    { 42873, 7042873 }, // "Trainer Spell: Fire Blast (#42873)"
    { 42890, 7042890 }, // "Trainer Spell: Pyroblast (#42890)"
    { 42891, 7042891 }, // "Trainer Spell: Pyroblast (#42891)"
    { 42894, 7042894 }, // "Trainer Spell: Arcane Blast (#42894)"
    { 42896, 7042896 }, // "Trainer Spell: Arcane Blast (#42896)"
    { 42897, 7042897 }, // "Trainer Spell: Arcane Blast (#42897)"
    { 42913, 7042913 }, // "Trainer Spell: Ice Lance (#42913)"
    { 42914, 7042914 }, // "Trainer Spell: Ice Lance (#42914)"
    { 42917, 7042917 }, // "Trainer Spell: Frost Nova (#42917)"
    { 42920, 7042920 }, // "Trainer Spell: Arcane Explosion (#42920)"
    { 42921, 7042921 }, // "Trainer Spell: Arcane Explosion (#42921)"
    { 42925, 7042925 }, // "Trainer Spell: Flamestrike (#42925)"
    { 42926, 7042926 }, // "Trainer Spell: Flamestrike (#42926)"
    { 42930, 7042930 }, // "Trainer Spell: Cone of Cold (#42930)"
    { 42931, 7042931 }, // "Trainer Spell: Cone of Cold (#42931)"
    { 42939, 7042939 }, // "Trainer Spell: Blizzard (#42939)"
    { 42940, 7042940 }, // "Trainer Spell: Blizzard (#42940)"
    { 42944, 7042944 }, // "Trainer Spell: Blast Wave (#42944)"
    { 42945, 7042945 }, // "Trainer Spell: Blast Wave (#42945)"
    { 42949, 7042949 }, // "Trainer Spell: Dragon's Breath (#42949)"
    { 42950, 7042950 }, // "Trainer Spell: Dragon's Breath (#42950)"
    { 42955, 7042955 }, // "Trainer Spell: Conjure Refreshment (#42955)"
    { 42956, 7042956 }, // "Trainer Spell: Conjure Refreshment (#42956)"
    { 42985, 7042985 }, // "Trainer Spell: Conjure Mana Gem (#42985)"
    { 42995, 7042995 }, // "Trainer Spell: Arcane Intellect (#42995)"
    { 43002, 7043002 }, // "Trainer Spell: Arcane Brilliance (#43002)"
    { 43008, 7043008 }, // "Trainer Spell: Ice Armor (#43008)"
    { 43010, 7043010 }, // "Trainer Spell: Fire Ward (#43010)"
    { 43012, 7043012 }, // "Trainer Spell: Frost Ward (#43012)"
    { 43015, 7043015 }, // "Trainer Spell: Dampen Magic (#43015)"
    { 43017, 7043017 }, // "Trainer Spell: Amplify Magic (#43017)"
    { 43019, 7043019 }, // "Trainer Spell: Mana Shield (#43019)"
    { 43020, 7043020 }, // "Trainer Spell: Mana Shield (#43020)"
    { 43023, 7043023 }, // "Trainer Spell: Mage Armor (#43023)"
    { 43024, 7043024 }, // "Trainer Spell: Mage Armor (#43024)"
    { 43038, 7043038 }, // "Trainer Spell: Ice Barrier (#43038)"
    { 43039, 7043039 }, // "Trainer Spell: Ice Barrier (#43039)"
    { 43045, 7043045 }, // "Trainer Spell: Molten Armor (#43045)"
    { 43046, 7043046 }, // "Trainer Spell: Molten Armor (#43046)"
    { 43265, 7043265 }, // "Trainer Spell: Death and Decay (#43265)"
    { 43987, 7043987 }, // "Trainer Spell: Ritual of Refreshment (#43987)"
    { 44614, 7044614 }, // "Trainer Spell: Frostfire Bolt (#44614)"
    { 44780, 7044780 }, // "Trainer Spell: Arcane Barrage (#44780)"
    { 44781, 7044781 }, // "Trainer Spell: Arcane Barrage (#44781)"
    { 45438, 7045438 }, // "Trainer Spell: Ice Block (#45438)"
    { 45463, 7045463 }, // "Trainer Spell: Death Strike (#45463)"
    { 45524, 7045524 }, // "Trainer Spell: Chains of Ice (#45524)"
    { 45529, 7045529 }, // "Trainer Spell: Blood Tap (#45529)"
    { 46584, 7046584 }, // "Trainer Spell: Raise Dead (#46584)"
    { 46845, 7046845 }, // "Trainer Spell: Rend (#46845)"
    { 47436, 7047436 }, // "Trainer Spell: Battle Shout (#47436)"
    { 47437, 7047437 }, // "Trainer Spell: Demoralizing Shout (#47437)"
    { 47439, 7047439 }, // "Trainer Spell: Commanding Shout (#47439)"
    { 47440, 7047440 }, // "Trainer Spell: Commanding Shout (#47440)"
    { 47449, 7047449 }, // "Trainer Spell: Heroic Strike (#47449)"
    { 47450, 7047450 }, // "Trainer Spell: Heroic Strike (#47450)"
    { 47465, 7047465 }, // "Trainer Spell: Rend (#47465)"
    { 47470, 7047470 }, // "Trainer Spell: Execute (#47470)"
    { 47471, 7047471 }, // "Trainer Spell: Execute (#47471)"
    { 47474, 7047474 }, // "Trainer Spell: Slam (#47474)"
    { 47475, 7047475 }, // "Trainer Spell: Slam (#47475)"
    { 47476, 7047476 }, // "Trainer Spell: Strangulate (#47476)"
    { 47485, 7047485 }, // "Trainer Spell: Mortal Strike (#47485)"
    { 47486, 7047486 }, // "Trainer Spell: Mortal Strike (#47486)"
    { 47487, 7047487 }, // "Trainer Spell: Shield Slam (#47487)"
    { 47488, 7047488 }, // "Trainer Spell: Shield Slam (#47488)"
    { 47497, 7047497 }, // "Trainer Spell: Devastate (#47497)"
    { 47498, 7047498 }, // "Trainer Spell: Devastate (#47498)"
    { 47501, 7047501 }, // "Trainer Spell: Thunder Clap (#47501)"
    { 47502, 7047502 }, // "Trainer Spell: Thunder Clap (#47502)"
    { 47519, 7047519 }, // "Trainer Spell: Cleave (#47519)"
    { 47520, 7047520 }, // "Trainer Spell: Cleave (#47520)"
    { 47528, 7047528 }, // "Trainer Spell: Mind Freeze (#47528)"
    { 47568, 7047568 }, // "Trainer Spell: Empower Rune Weapon (#47568)"
    { 47610, 7047610 }, // "Trainer Spell: Frostfire Bolt (#47610)"
    { 47793, 7047793 }, // "Trainer Spell: Demon Armor (#47793)"
    { 47808, 7047808 }, // "Trainer Spell: Shadow Bolt (#47808)"
    { 47809, 7047809 }, // "Trainer Spell: Shadow Bolt (#47809)"
    { 47810, 7047810 }, // "Trainer Spell: Immolate (#47810)"
    { 47811, 7047811 }, // "Trainer Spell: Immolate (#47811)"
    { 47812, 7047812 }, // "Trainer Spell: Corruption (#47812)"
    { 47813, 7047813 }, // "Trainer Spell: Corruption (#47813)"
    { 47814, 7047814 }, // "Trainer Spell: Searing Pain (#47814)"
    { 47815, 7047815 }, // "Trainer Spell: Searing Pain (#47815)"
    { 47819, 7047819 }, // "Trainer Spell: Rain of Fire (#47819)"
    { 47820, 7047820 }, // "Trainer Spell: Rain of Fire (#47820)"
    { 47823, 7047823 }, // "Trainer Spell: Hellfire (#47823)"
    { 47824, 7047824 }, // "Trainer Spell: Soul Fire (#47824)"
    { 47825, 7047825 }, // "Trainer Spell: Soul Fire (#47825)"
    { 47826, 7047826 }, // "Trainer Spell: Shadowburn (#47826)"
    { 47827, 7047827 }, // "Trainer Spell: Shadowburn (#47827)"
    { 47835, 7047835 }, // "Trainer Spell: Seed of Corruption (#47835)"
    { 47836, 7047836 }, // "Trainer Spell: Seed of Corruption (#47836)"
    { 47837, 7047837 }, // "Trainer Spell: Incinerate (#47837)"
    { 47838, 7047838 }, // "Trainer Spell: Incinerate (#47838)"
    { 47841, 7047841 }, // "Trainer Spell: Unstable Affliction (#47841)"
    { 47843, 7047843 }, // "Trainer Spell: Unstable Affliction (#47843)"
    { 47846, 7047846 }, // "Trainer Spell: Shadowfury (#47846)"
    { 47847, 7047847 }, // "Trainer Spell: Shadowfury (#47847)"
    { 47855, 7047855 }, // "Trainer Spell: Drain Soul (#47855)"
    { 47856, 7047856 }, // "Trainer Spell: Health Funnel (#47856)"
    { 47857, 7047857 }, // "Trainer Spell: Drain Life (#47857)"
    { 47859, 7047859 }, // "Trainer Spell: Death Coil (#47859)"
    { 47860, 7047860 }, // "Trainer Spell: Death Coil (#47860)"
    { 47863, 7047863 }, // "Trainer Spell: Curse of Agony (#47863)"
    { 47864, 7047864 }, // "Trainer Spell: Curse of Agony (#47864)"
    { 47865, 7047865 }, // "Trainer Spell: Curse of the Elements (#47865)"
    { 47867, 7047867 }, // "Trainer Spell: Curse of Doom (#47867)"
    { 47871, 7047871 }, // "Trainer Spell: Create Healthstone (#47871)"
    { 47878, 7047878 }, // "Trainer Spell: Create Healthstone (#47878)"
    { 47884, 7047884 }, // "Trainer Spell: Create Soulstone (#47884)"
    { 47886, 7047886 }, // "Trainer Spell: Create Spellstone (#47886)"
    { 47888, 7047888 }, // "Trainer Spell: Create Spellstone (#47888)"
    { 47889, 7047889 }, // "Trainer Spell: Demon Armor (#47889)"
    { 47890, 7047890 }, // "Trainer Spell: Shadow Ward (#47890)"
    { 47891, 7047891 }, // "Trainer Spell: Shadow Ward (#47891)"
    { 47892, 7047892 }, // "Trainer Spell: Fel Armor (#47892)"
    { 47893, 7047893 }, // "Trainer Spell: Fel Armor (#47893)"
    { 47897, 7047897 }, // "Trainer Spell: Shadowflame (#47897)"
    { 48018, 7048018 }, // "Trainer Spell: Demonic Circle: Summon (#48018)"
    { 48020, 7048020 }, // "Trainer Spell: Demonic Circle: Teleport (#48020)"
    { 48040, 7048040 }, // "Trainer Spell: Inner Fire (#48040)"
    { 48045, 7048045 }, // "Trainer Spell: Mind Sear (#48045)"
    { 48062, 7048062 }, // "Trainer Spell: Greater Heal (#48062)"
    { 48063, 7048063 }, // "Trainer Spell: Greater Heal (#48063)"
    { 48065, 7048065 }, // "Trainer Spell: Power Word: Shield (#48065)"
    { 48066, 7048066 }, // "Trainer Spell: Power Word: Shield (#48066)"
    { 48067, 7048067 }, // "Trainer Spell: Renew (#48067)"
    { 48068, 7048068 }, // "Trainer Spell: Renew (#48068)"
    { 48070, 7048070 }, // "Trainer Spell: Flash Heal (#48070)"
    { 48071, 7048071 }, // "Trainer Spell: Flash Heal (#48071)"
    { 48072, 7048072 }, // "Trainer Spell: Prayer of Healing (#48072)"
    { 48073, 7048073 }, // "Trainer Spell: Divine Spirit (#48073)"
    { 48074, 7048074 }, // "Trainer Spell: Prayer of Spirit (#48074)"
    { 48077, 7048077 }, // "Trainer Spell: Holy Nova (#48077)"
    { 48078, 7048078 }, // "Trainer Spell: Holy Nova (#48078)"
    { 48086, 7048086 }, // "Trainer Spell: Lightwell (#48086)"
    { 48087, 7048087 }, // "Trainer Spell: Lightwell (#48087)"
    { 48088, 7048088 }, // "Trainer Spell: Circle of Healing (#48088)"
    { 48089, 7048089 }, // "Trainer Spell: Circle of Healing (#48089)"
    { 48112, 7048112 }, // "Trainer Spell: Prayer of Mending (#48112)"
    { 48113, 7048113 }, // "Trainer Spell: Prayer of Mending (#48113)"
    { 48119, 7048119 }, // "Trainer Spell: Binding Heal (#48119)"
    { 48120, 7048120 }, // "Trainer Spell: Binding Heal (#48120)"
    { 48122, 7048122 }, // "Trainer Spell: Smite (#48122)"
    { 48123, 7048123 }, // "Trainer Spell: Smite (#48123)"
    { 48124, 7048124 }, // "Trainer Spell: Shadow Word: Pain (#48124)"
    { 48125, 7048125 }, // "Trainer Spell: Shadow Word: Pain (#48125)"
    { 48126, 7048126 }, // "Trainer Spell: Mind Blast (#48126)"
    { 48127, 7048127 }, // "Trainer Spell: Mind Blast (#48127)"
    { 48134, 7048134 }, // "Trainer Spell: Holy Fire (#48134)"
    { 48135, 7048135 }, // "Trainer Spell: Holy Fire (#48135)"
    { 48155, 7048155 }, // "Trainer Spell: Mind Flay (#48155)"
    { 48156, 7048156 }, // "Trainer Spell: Mind Flay (#48156)"
    { 48157, 7048157 }, // "Trainer Spell: Shadow Word: Death (#48157)"
    { 48158, 7048158 }, // "Trainer Spell: Shadow Word: Death (#48158)"
    { 48159, 7048159 }, // "Trainer Spell: Vampiric Touch (#48159)"
    { 48160, 7048160 }, // "Trainer Spell: Vampiric Touch (#48160)"
    { 48161, 7048161 }, // "Trainer Spell: Power Word: Fortitude (#48161)"
    { 48162, 7048162 }, // "Trainer Spell: Prayer of Fortitude (#48162)"
    { 48168, 7048168 }, // "Trainer Spell: Inner Fire (#48168)"
    { 48169, 7048169 }, // "Trainer Spell: Shadow Protection (#48169)"
    { 48170, 7048170 }, // "Trainer Spell: Prayer of Shadow Protection (#48170)"
    { 48171, 7048171 }, // "Trainer Spell: Resurrection (#48171)"
    { 48172, 7048172 }, // "Trainer Spell: Desperate Prayer (#48172)"
    { 48173, 7048173 }, // "Trainer Spell: Desperate Prayer (#48173)"
    { 48263, 7048263 }, // "Trainer Spell: Frost Presence (#48263)"
    { 48265, 7048265 }, // "Trainer Spell: Unholy Presence (#48265)"
    { 48299, 7048299 }, // "Trainer Spell: Devouring Plague (#48299)"
    { 48300, 7048300 }, // "Trainer Spell: Devouring Plague (#48300)"
    { 48377, 7048377 }, // "Trainer Spell: Healing Touch (#48377)"
    { 48378, 7048378 }, // "Trainer Spell: Healing Touch (#48378)"
    { 48440, 7048440 }, // "Trainer Spell: Rejuvenation (#48440)"
    { 48441, 7048441 }, // "Trainer Spell: Rejuvenation (#48441)"
    { 48442, 7048442 }, // "Trainer Spell: Regrowth (#48442)"
    { 48443, 7048443 }, // "Trainer Spell: Regrowth (#48443)"
    { 48446, 7048446 }, // "Trainer Spell: Tranquility (#48446)"
    { 48447, 7048447 }, // "Trainer Spell: Tranquility (#48447)"
    { 48450, 7048450 }, // "Trainer Spell: Lifebloom (#48450)"
    { 48451, 7048451 }, // "Trainer Spell: Lifebloom (#48451)"
    { 48459, 7048459 }, // "Trainer Spell: Wrath (#48459)"
    { 48461, 7048461 }, // "Trainer Spell: Wrath (#48461)"
    { 48462, 7048462 }, // "Trainer Spell: Moonfire (#48462)"
    { 48463, 7048463 }, // "Trainer Spell: Moonfire (#48463)"
    { 48464, 7048464 }, // "Trainer Spell: Starfire (#48464)"
    { 48465, 7048465 }, // "Trainer Spell: Starfire (#48465)"
    { 48467, 7048467 }, // "Trainer Spell: Hurricane (#48467)"
    { 48468, 7048468 }, // "Trainer Spell: Insect Swarm (#48468)"
    { 48469, 7048469 }, // "Trainer Spell: Mark of the Wild (#48469)"
    { 48470, 7048470 }, // "Trainer Spell: Gift of the Wild (#48470)"
    { 48477, 7048477 }, // "Trainer Spell: Rebirth (#48477)"
    { 48479, 7048479 }, // "Trainer Spell: Maul (#48479)"
    { 48480, 7048480 }, // "Trainer Spell: Maul (#48480)"
    { 48559, 7048559 }, // "Trainer Spell: Demoralizing Roar (#48559)"
    { 48560, 7048560 }, // "Trainer Spell: Demoralizing Roar (#48560)"
    { 48561, 7048561 }, // "Trainer Spell: Swipe (Bear) (#48561)"
    { 48562, 7048562 }, // "Trainer Spell: Swipe (Bear) (#48562)"
    { 48563, 7048563 }, // "Trainer Spell: Mangle (Bear) (#48563)"
    { 48564, 7048564 }, // "Trainer Spell: Mangle (Bear) (#48564)"
    { 48565, 7048565 }, // "Trainer Spell: Mangle (Cat) (#48565)"
    { 48566, 7048566 }, // "Trainer Spell: Mangle (Cat) (#48566)"
    { 48567, 7048567 }, // "Trainer Spell: Lacerate (#48567)"
    { 48568, 7048568 }, // "Trainer Spell: Lacerate (#48568)"
    { 48569, 7048569 }, // "Trainer Spell: Claw (#48569)"
    { 48570, 7048570 }, // "Trainer Spell: Claw (#48570)"
    { 48571, 7048571 }, // "Trainer Spell: Shred (#48571)"
    { 48572, 7048572 }, // "Trainer Spell: Shred (#48572)"
    { 48573, 7048573 }, // "Trainer Spell: Rake (#48573)"
    { 48574, 7048574 }, // "Trainer Spell: Rake (#48574)"
    { 48575, 7048575 }, // "Trainer Spell: Cower (#48575)"
    { 48576, 7048576 }, // "Trainer Spell: Ferocious Bite (#48576)"
    { 48577, 7048577 }, // "Trainer Spell: Ferocious Bite (#48577)"
    { 48578, 7048578 }, // "Trainer Spell: Ravage (#48578)"
    { 48579, 7048579 }, // "Trainer Spell: Ravage (#48579)"
    { 48637, 7048637 }, // "Trainer Spell: Sinister Strike (#48637)"
    { 48638, 7048638 }, // "Trainer Spell: Sinister Strike (#48638)"
    { 48656, 7048656 }, // "Trainer Spell: Backstab (#48656)"
    { 48657, 7048657 }, // "Trainer Spell: Backstab (#48657)"
    { 48658, 7048658 }, // "Trainer Spell: Feint (#48658)"
    { 48659, 7048659 }, // "Trainer Spell: Feint (#48659)"
    { 48660, 7048660 }, // "Trainer Spell: Hemorrhage (#48660)"
    { 48663, 7048663 }, // "Trainer Spell: Mutilate (#48663)"
    { 48666, 7048666 }, // "Trainer Spell: Mutilate (#48666)"
    { 48667, 7048667 }, // "Trainer Spell: Eviscerate (#48667)"
    { 48668, 7048668 }, // "Trainer Spell: Eviscerate (#48668)"
    { 48671, 7048671 }, // "Trainer Spell: Rupture (#48671)"
    { 48672, 7048672 }, // "Trainer Spell: Rupture (#48672)"
    { 48673, 7048673 }, // "Trainer Spell: Deadly Throw (#48673)"
    { 48674, 7048674 }, // "Trainer Spell: Deadly Throw (#48674)"
    { 48675, 7048675 }, // "Trainer Spell: Garrote (#48675)"
    { 48676, 7048676 }, // "Trainer Spell: Garrote (#48676)"
    { 48689, 7048689 }, // "Trainer Spell: Ambush (#48689)"
    { 48690, 7048690 }, // "Trainer Spell: Ambush (#48690)"
    { 48691, 7048691 }, // "Trainer Spell: Ambush (#48691)"
    { 48707, 7048707 }, // "Trainer Spell: Anti-Magic Shell (#48707)"
    { 48721, 7048721 }, // "Trainer Spell: Blood Boil (#48721)"
    { 48743, 7048743 }, // "Trainer Spell: Death Pact (#48743)"
    { 48781, 7048781 }, // "Trainer Spell: Holy Light (#48781)"
    { 48782, 7048782 }, // "Trainer Spell: Holy Light (#48782)"
    { 48784, 7048784 }, // "Trainer Spell: Flash of Light (#48784)"
    { 48785, 7048785 }, // "Trainer Spell: Flash of Light (#48785)"
    { 48788, 7048788 }, // "Trainer Spell: Lay on Hands (#48788)"
    { 48792, 7048792 }, // "Trainer Spell: Icebound Fortitude (#48792)"
    { 48800, 7048800 }, // "Trainer Spell: Exorcism (#48800)"
    { 48801, 7048801 }, // "Trainer Spell: Exorcism (#48801)"
    { 48805, 7048805 }, // "Trainer Spell: Hammer of Wrath (#48805)"
    { 48806, 7048806 }, // "Trainer Spell: Hammer of Wrath (#48806)"
    { 48816, 7048816 }, // "Trainer Spell: Holy Wrath (#48816)"
    { 48817, 7048817 }, // "Trainer Spell: Holy Wrath (#48817)"
    { 48818, 7048818 }, // "Trainer Spell: Consecration (#48818)"
    { 48819, 7048819 }, // "Trainer Spell: Consecration (#48819)"
    { 48824, 7048824 }, // "Trainer Spell: Holy Shock (#48824)"
    { 48825, 7048825 }, // "Trainer Spell: Holy Shock (#48825)"
    { 48826, 7048826 }, // "Trainer Spell: Avenger's Shield (#48826)"
    { 48827, 7048827 }, // "Trainer Spell: Avenger's Shield (#48827)"
    { 48931, 7048931 }, // "Trainer Spell: Blessing of Might (#48931)"
    { 48932, 7048932 }, // "Trainer Spell: Blessing of Might (#48932)"
    { 48933, 7048933 }, // "Trainer Spell: Greater Blessing of Might (#48933)"
    { 48934, 7048934 }, // "Trainer Spell: Greater Blessing of Might (#48934)"
    { 48935, 7048935 }, // "Trainer Spell: Blessing of Wisdom (#48935)"
    { 48936, 7048936 }, // "Trainer Spell: Blessing of Wisdom (#48936)"
    { 48937, 7048937 }, // "Trainer Spell: Greater Blessing of Wisdom (#48937)"
    { 48938, 7048938 }, // "Trainer Spell: Greater Blessing of Wisdom (#48938)"
    { 48941, 7048941 }, // "Trainer Spell: Devotion Aura (#48941)"
    { 48942, 7048942 }, // "Trainer Spell: Devotion Aura (#48942)"
    { 48943, 7048943 }, // "Trainer Spell: Shadow Resistance Aura (#48943)"
    { 48945, 7048945 }, // "Trainer Spell: Frost Resistance Aura (#48945)"
    { 48947, 7048947 }, // "Trainer Spell: Fire Resistance Aura (#48947)"
    { 48949, 7048949 }, // "Trainer Spell: Redemption (#48949)"
    { 48950, 7048950 }, // "Trainer Spell: Redemption (#48950)"
    { 48951, 7048951 }, // "Trainer Spell: Holy Shield (#48951)"
    { 48952, 7048952 }, // "Trainer Spell: Holy Shield (#48952)"
    { 48989, 7048989 }, // "Trainer Spell: Mend Pet (#48989)"
    { 48990, 7048990 }, // "Trainer Spell: Mend Pet (#48990)"
    { 48995, 7048995 }, // "Trainer Spell: Raptor Strike (#48995)"
    { 48996, 7048996 }, // "Trainer Spell: Raptor Strike (#48996)"
    { 48998, 7048998 }, // "Trainer Spell: Counterattack (#48998)"
    { 48999, 7048999 }, // "Trainer Spell: Counterattack (#48999)"
    { 49000, 7049000 }, // "Trainer Spell: Serpent Sting (#49000)"
    { 49001, 7049001 }, // "Trainer Spell: Serpent Sting (#49001)"
    { 49011, 7049011 }, // "Trainer Spell: Wyvern Sting (#49011)"
    { 49012, 7049012 }, // "Trainer Spell: Wyvern Sting (#49012)"
    { 49020, 7049020 }, // "Trainer Spell: Obliterate (#49020)"
    { 49044, 7049044 }, // "Trainer Spell: Arcane Shot (#49044)"
    { 49045, 7049045 }, // "Trainer Spell: Arcane Shot (#49045)"
    { 49047, 7049047 }, // "Trainer Spell: Multi-Shot (#49047)"
    { 49048, 7049048 }, // "Trainer Spell: Multi-Shot (#49048)"
    { 49049, 7049049 }, // "Trainer Spell: Aimed Shot (#49049)"
    { 49050, 7049050 }, // "Trainer Spell: Aimed Shot (#49050)"
    { 49051, 7049051 }, // "Trainer Spell: Steady Shot (#49051)"
    { 49052, 7049052 }, // "Trainer Spell: Steady Shot (#49052)"
    { 49055, 7049055 }, // "Trainer Spell: Immolation Trap (#49055)"
    { 49056, 7049056 }, // "Trainer Spell: Immolation Trap (#49056)"
    { 49066, 7049066 }, // "Trainer Spell: Explosive Trap (#49066)"
    { 49067, 7049067 }, // "Trainer Spell: Explosive Trap (#49067)"
    { 49071, 7049071 }, // "Trainer Spell: Aspect of the Wild (#49071)"
    { 49230, 7049230 }, // "Trainer Spell: Earth Shock (#49230)"
    { 49231, 7049231 }, // "Trainer Spell: Earth Shock (#49231)"
    { 49232, 7049232 }, // "Trainer Spell: Flame Shock (#49232)"
    { 49233, 7049233 }, // "Trainer Spell: Flame Shock (#49233)"
    { 49235, 7049235 }, // "Trainer Spell: Frost Shock (#49235)"
    { 49236, 7049236 }, // "Trainer Spell: Frost Shock (#49236)"
    { 49237, 7049237 }, // "Trainer Spell: Lightning Bolt (#49237)"
    { 49238, 7049238 }, // "Trainer Spell: Lightning Bolt (#49238)"
    { 49270, 7049270 }, // "Trainer Spell: Chain Lightning (#49270)"
    { 49271, 7049271 }, // "Trainer Spell: Chain Lightning (#49271)"
    { 49272, 7049272 }, // "Trainer Spell: Healing Wave (#49272)"
    { 49273, 7049273 }, // "Trainer Spell: Healing Wave (#49273)"
    { 49275, 7049275 }, // "Trainer Spell: Lesser Healing Wave (#49275)"
    { 49276, 7049276 }, // "Trainer Spell: Lesser Healing Wave (#49276)"
    { 49277, 7049277 }, // "Trainer Spell: Ancestral Spirit (#49277)"
    { 49280, 7049280 }, // "Trainer Spell: Lightning Shield (#49280)"
    { 49281, 7049281 }, // "Trainer Spell: Lightning Shield (#49281)"
    { 49283, 7049283 }, // "Trainer Spell: Earth Shield (#49283)"
    { 49284, 7049284 }, // "Trainer Spell: Earth Shield (#49284)"
    { 49358, 7049358 }, // "Trainer Spell: Teleport: Stonard (#49358)"
    { 49359, 7049359 }, // "Trainer Spell: Teleport: Theramore (#49359)"
    { 49360, 7049360 }, // "Trainer Spell: Portal: Theramore (#49360)"
    { 49361, 7049361 }, // "Trainer Spell: Portal: Stonard (#49361)"
    { 49799, 7049799 }, // "Trainer Spell: Rip (#49799)"
    { 49800, 7049800 }, // "Trainer Spell: Rip (#49800)"
    { 49802, 7049802 }, // "Trainer Spell: Maim (#49802)"
    { 49803, 7049803 }, // "Trainer Spell: Pounce (#49803)"
    { 49892, 7049892 }, // "Trainer Spell: Death Coil (#49892)"
    { 49893, 7049893 }, // "Trainer Spell: Death Coil (#49893)"
    { 49894, 7049894 }, // "Trainer Spell: Death Coil (#49894)"
    { 49895, 7049895 }, // "Trainer Spell: Death Coil (#49895)"
    { 49896, 7049896 }, // "Trainer Spell: Icy Touch (#49896)"
    { 49903, 7049903 }, // "Trainer Spell: Icy Touch (#49903)"
    { 49904, 7049904 }, // "Trainer Spell: Icy Touch (#49904)"
    { 49909, 7049909 }, // "Trainer Spell: Icy Touch (#49909)"
    { 49917, 7049917 }, // "Trainer Spell: Plague Strike (#49917)"
    { 49918, 7049918 }, // "Trainer Spell: Plague Strike (#49918)"
    { 49919, 7049919 }, // "Trainer Spell: Plague Strike (#49919)"
    { 49920, 7049920 }, // "Trainer Spell: Plague Strike (#49920)"
    { 49921, 7049921 }, // "Trainer Spell: Plague Strike (#49921)"
    { 49923, 7049923 }, // "Trainer Spell: Death Strike (#49923)"
    { 49924, 7049924 }, // "Trainer Spell: Death Strike (#49924)"
    { 49926, 7049926 }, // "Trainer Spell: Blood Strike (#49926)"
    { 49927, 7049927 }, // "Trainer Spell: Blood Strike (#49927)"
    { 49928, 7049928 }, // "Trainer Spell: Blood Strike (#49928)"
    { 49929, 7049929 }, // "Trainer Spell: Blood Strike (#49929)"
    { 49930, 7049930 }, // "Trainer Spell: Blood Strike (#49930)"
    { 49936, 7049936 }, // "Trainer Spell: Death and Decay (#49936)"
    { 49937, 7049937 }, // "Trainer Spell: Death and Decay (#49937)"
    { 49938, 7049938 }, // "Trainer Spell: Death and Decay (#49938)"
    { 49939, 7049939 }, // "Trainer Spell: Blood Boil (#49939)"
    { 49940, 7049940 }, // "Trainer Spell: Blood Boil (#49940)"
    { 49941, 7049941 }, // "Trainer Spell: Blood Boil (#49941)"
    { 49998, 7049998 }, // "Trainer Spell: Death Strike (#49998)"
    { 49999, 7049999 }, // "Trainer Spell: Death Strike (#49999)"
    { 50212, 7050212 }, // "Trainer Spell: Tiger's Fury (#50212)"
    { 50213, 7050213 }, // "Trainer Spell: Tiger's Fury (#50213)"
    { 50464, 7050464 }, // "Trainer Spell: Nourish (#50464)"
    { 50511, 7050511 }, // "Trainer Spell: Curse of Weakness (#50511)"
    { 50763, 7050763 }, // "Trainer Spell: Revive (#50763)"
    { 50764, 7050764 }, // "Trainer Spell: Revive (#50764)"
    { 50765, 7050765 }, // "Trainer Spell: Revive (#50765)"
    { 50766, 7050766 }, // "Trainer Spell: Revive (#50766)"
    { 50767, 7050767 }, // "Trainer Spell: Revive (#50767)"
    { 50768, 7050768 }, // "Trainer Spell: Revive (#50768)"
    { 50769, 7050769 }, // "Trainer Spell: Revive (#50769)"
    { 50842, 7050842 }, // "Trainer Spell: Pestilence (#50842)"
    { 51325, 7051325 }, // "Trainer Spell: Corpse Explosion (#51325)"
    { 51326, 7051326 }, // "Trainer Spell: Corpse Explosion (#51326)"
    { 51327, 7051327 }, // "Trainer Spell: Corpse Explosion (#51327)"
    { 51328, 7051328 }, // "Trainer Spell: Corpse Explosion (#51328)"
    { 51409, 7051409 }, // "Trainer Spell: Howling Blast (#51409)"
    { 51410, 7051410 }, // "Trainer Spell: Howling Blast (#51410)"
    { 51411, 7051411 }, // "Trainer Spell: Howling Blast (#51411)"
    { 51416, 7051416 }, // "Trainer Spell: Frost Strike (#51416)"
    { 51417, 7051417 }, // "Trainer Spell: Frost Strike (#51417)"
    { 51418, 7051418 }, // "Trainer Spell: Frost Strike (#51418)"
    { 51419, 7051419 }, // "Trainer Spell: Frost Strike (#51419)"
    { 51423, 7051423 }, // "Trainer Spell: Obliterate (#51423)"
    { 51424, 7051424 }, // "Trainer Spell: Obliterate (#51424)"
    { 51425, 7051425 }, // "Trainer Spell: Obliterate (#51425)"
    { 51505, 7051505 }, // "Trainer Spell: Lava Burst (#51505)"
    { 51514, 7051514 }, // "Trainer Spell: Hex (#51514)"
    { 51722, 7051722 }, // "Trainer Spell: Dismantle (#51722)"
    { 51723, 7051723 }, // "Trainer Spell: Fan of Knives (#51723)"
    { 51724, 7051724 }, // "Trainer Spell: Sap (#51724)"
    { 51730, 7051730 }, // "Trainer Spell: Earthliving Weapon (#51730)"
    { 51988, 7051988 }, // "Trainer Spell: Earthliving Weapon (#51988)"
    { 51991, 7051991 }, // "Trainer Spell: Earthliving Weapon (#51991)"
    { 51992, 7051992 }, // "Trainer Spell: Earthliving Weapon (#51992)"
    { 51993, 7051993 }, // "Trainer Spell: Earthliving Weapon (#51993)"
    { 51994, 7051994 }, // "Trainer Spell: Earthliving Weapon (#51994)"
    { 52127, 7052127 }, // "Trainer Spell: Water Shield (#52127)"
    { 52129, 7052129 }, // "Trainer Spell: Water Shield (#52129)"
    { 52131, 7052131 }, // "Trainer Spell: Water Shield (#52131)"
    { 52134, 7052134 }, // "Trainer Spell: Water Shield (#52134)"
    { 52136, 7052136 }, // "Trainer Spell: Water Shield (#52136)"
    { 52138, 7052138 }, // "Trainer Spell: Water Shield (#52138)"
    { 52610, 7052610 }, // "Trainer Spell: Savage Roar (#52610)"
    { 53005, 7053005 }, // "Trainer Spell: Penance (#53005)"
    { 53006, 7053006 }, // "Trainer Spell: Penance (#53006)"
    { 53007, 7053007 }, // "Trainer Spell: Penance (#53007)"
    { 53023, 7053023 }, // "Trainer Spell: Mind Sear (#53023)"
    { 53140, 7053140 }, // "Trainer Spell: Teleport: Dalaran (#53140)"
    { 53142, 7053142 }, // "Trainer Spell: Portal: Dalaran (#53142)"
    { 53199, 7053199 }, // "Trainer Spell: Starfall (#53199)"
    { 53200, 7053200 }, // "Trainer Spell: Starfall (#53200)"
    { 53201, 7053201 }, // "Trainer Spell: Starfall (#53201)"
    { 53223, 7053223 }, // "Trainer Spell: Typhoon (#53223)"
    { 53225, 7053225 }, // "Trainer Spell: Typhoon (#53225)"
    { 53226, 7053226 }, // "Trainer Spell: Typhoon (#53226)"
    { 53248, 7053248 }, // "Trainer Spell: Wild Growth (#53248)"
    { 53249, 7053249 }, // "Trainer Spell: Wild Growth (#53249)"
    { 53251, 7053251 }, // "Trainer Spell: Wild Growth (#53251)"
    { 53271, 7053271 }, // "Trainer Spell: Master's Call (#53271)"
    { 53307, 7053307 }, // "Trainer Spell: Thorns (#53307)"
    { 53308, 7053308 }, // "Trainer Spell: Entangling Roots (#53308)"
    { 53312, 7053312 }, // "Trainer Spell: Nature's Grasp (#53312)"
    { 53323, 7053323 }, // "Trainer Spell: Rune of Swordshattering (#53323)"
    { 53331, 7053331 }, // "Trainer Spell: Rune of Lichbane (#53331)"
    { 53338, 7053338 }, // "Trainer Spell: Hunter's Mark (#53338)"
    { 53339, 7053339 }, // "Trainer Spell: Mongoose Bite (#53339)"
    { 53341, 7053341 }, // "Trainer Spell: Rune of Cinderglacier (#53341)"
    { 53342, 7053342 }, // "Trainer Spell: Rune of Spellshattering (#53342)"
    { 53343, 7053343 }, // "Trainer Spell: Rune of Razorice (#53343)"
    { 53344, 7053344 }, // "Trainer Spell: Rune of the Fallen Crusader (#53344)"
    { 53351, 7053351 }, // "Trainer Spell: Kill Shot (#53351)"
    { 53407, 7053407 }, // "Trainer Spell: Judgement of Justice (#53407)"
    { 53408, 7053408 }, // "Trainer Spell: Judgement of Wisdom (#53408)"
    { 53600, 7053600 }, // "Trainer Spell: Shield of Righteousness (#53600)"
    { 53601, 7053601 }, // "Trainer Spell: Sacred Shield (#53601)"
    { 53736, 7053736 }, // "Trainer Spell: Seal of Corruption (#53736)"
    { 54043, 7054043 }, // "Trainer Spell: Retribution Aura (#54043)"
    { 54428, 7054428 }, // "Trainer Spell: Divine Plea (#54428)"
    { 54446, 7054446 }, // "Trainer Spell: Rune of Swordbreaking (#54446)"
    { 54447, 7054447 }, // "Trainer Spell: Rune of Spellbreaking (#54447)"
    { 55258, 7055258 }, // "Trainer Spell: Heart Strike (#55258)"
    { 55259, 7055259 }, // "Trainer Spell: Heart Strike (#55259)"
    { 55260, 7055260 }, // "Trainer Spell: Heart Strike (#55260)"
    { 55261, 7055261 }, // "Trainer Spell: Heart Strike (#55261)"
    { 55262, 7055262 }, // "Trainer Spell: Heart Strike (#55262)"
    { 55265, 7055265 }, // "Trainer Spell: Scourge Strike (#55265)"
    { 55268, 7055268 }, // "Trainer Spell: Frost Strike (#55268)"
    { 55270, 7055270 }, // "Trainer Spell: Scourge Strike (#55270)"
    { 55271, 7055271 }, // "Trainer Spell: Scourge Strike (#55271)"
    { 55342, 7055342 }, // "Trainer Spell: Mirror Image (#55342)"
    { 55359, 7055359 }, // "Trainer Spell: Living Bomb (#55359)"
    { 55360, 7055360 }, // "Trainer Spell: Living Bomb (#55360)"
    { 55458, 7055458 }, // "Trainer Spell: Chain Heal (#55458)"
    { 55459, 7055459 }, // "Trainer Spell: Chain Heal (#55459)"
    { 55694, 7055694 }, // "Trainer Spell: Enraged Regeneration (#55694)"
    { 56222, 7056222 }, // "Trainer Spell: Dark Command (#56222)"
    { 56641, 7056641 }, // "Trainer Spell: Steady Shot (#56641)"
    { 56815, 7056815 }, // "Trainer Spell: Rune Strike (#56815)"
    { 57330, 7057330 }, // "Trainer Spell: Horn of Winter (#57330)"
    { 57622, 7057622 }, // "Trainer Spell: Strength of Earth Totem (#57622)"
    { 57623, 7057623 }, // "Trainer Spell: Horn of Winter (#57623)"
    { 57720, 7057720 }, // "Trainer Spell: Totem of Wrath (#57720)"
    { 57721, 7057721 }, // "Trainer Spell: Totem of Wrath (#57721)"
    { 57722, 7057722 }, // "Trainer Spell: Totem of Wrath (#57722)"
    { 57755, 7057755 }, // "Trainer Spell: Heroic Throw (#57755)"
    { 57823, 7057823 }, // "Trainer Spell: Revenge (#57823)"
    { 57934, 7057934 }, // "Trainer Spell: Tricks of the Trade (#57934)"
    { 57946, 7057946 }, // "Trainer Spell: Life Tap (#57946)"
    { 57960, 7057960 }, // "Trainer Spell: Water Shield (#57960)"
    { 57992, 7057992 }, // "Trainer Spell: Envenom (#57992)"
    { 57993, 7057993 }, // "Trainer Spell: Envenom (#57993)"
    { 57994, 7057994 }, // "Trainer Spell: Wind Shear (#57994)"
    { 58431, 7058431 }, // "Trainer Spell: Volley (#58431)"
    { 58434, 7058434 }, // "Trainer Spell: Volley (#58434)"
    { 58580, 7058580 }, // "Trainer Spell: Stoneclaw Totem (#58580)"
    { 58581, 7058581 }, // "Trainer Spell: Stoneclaw Totem (#58581)"
    { 58582, 7058582 }, // "Trainer Spell: Stoneclaw Totem (#58582)"
    { 58643, 7058643 }, // "Trainer Spell: Strength of Earth Totem (#58643)"
    { 58649, 7058649 }, // "Trainer Spell: Flametongue Totem (#58649)"
    { 58652, 7058652 }, // "Trainer Spell: Flametongue Totem (#58652)"
    { 58656, 7058656 }, // "Trainer Spell: Flametongue Totem (#58656)"
    { 58659, 7058659 }, // "Trainer Spell: Ritual of Refreshment (#58659)"
    { 58699, 7058699 }, // "Trainer Spell: Searing Totem (#58699)"
    { 58703, 7058703 }, // "Trainer Spell: Searing Totem (#58703)"
    { 58704, 7058704 }, // "Trainer Spell: Searing Totem (#58704)"
    { 58731, 7058731 }, // "Trainer Spell: Magma Totem (#58731)"
    { 58734, 7058734 }, // "Trainer Spell: Magma Totem (#58734)"
    { 58737, 7058737 }, // "Trainer Spell: Fire Resistance Totem (#58737)"
    { 58739, 7058739 }, // "Trainer Spell: Fire Resistance Totem (#58739)"
    { 58741, 7058741 }, // "Trainer Spell: Frost Resistance Totem (#58741)"
    { 58745, 7058745 }, // "Trainer Spell: Frost Resistance Totem (#58745)"
    { 58746, 7058746 }, // "Trainer Spell: Nature Resistance Totem (#58746)"
    { 58749, 7058749 }, // "Trainer Spell: Nature Resistance Totem (#58749)"
    { 58751, 7058751 }, // "Trainer Spell: Stoneskin Totem (#58751)"
    { 58753, 7058753 }, // "Trainer Spell: Stoneskin Totem (#58753)"
    { 58755, 7058755 }, // "Trainer Spell: Healing Stream Totem (#58755)"
    { 58756, 7058756 }, // "Trainer Spell: Healing Stream Totem (#58756)"
    { 58757, 7058757 }, // "Trainer Spell: Healing Stream Totem (#58757)"
    { 58771, 7058771 }, // "Trainer Spell: Mana Spring Totem (#58771)"
    { 58773, 7058773 }, // "Trainer Spell: Mana Spring Totem (#58773)"
    { 58774, 7058774 }, // "Trainer Spell: Mana Spring Totem (#58774)"
    { 58785, 7058785 }, // "Trainer Spell: Flametongue Weapon (#58785)"
    { 58789, 7058789 }, // "Trainer Spell: Flametongue Weapon (#58789)"
    { 58790, 7058790 }, // "Trainer Spell: Flametongue Weapon (#58790)"
    { 58794, 7058794 }, // "Trainer Spell: Frostbrand Weapon (#58794)"
    { 58795, 7058795 }, // "Trainer Spell: Frostbrand Weapon (#58795)"
    { 58796, 7058796 }, // "Trainer Spell: Frostbrand Weapon (#58796)"
    { 58801, 7058801 }, // "Trainer Spell: Windfury Weapon (#58801)"
    { 58803, 7058803 }, // "Trainer Spell: Windfury Weapon (#58803)"
    { 58804, 7058804 }, // "Trainer Spell: Windfury Weapon (#58804)"
    { 58887, 7058887 }, // "Trainer Spell: Ritual of Souls (#58887)"
    { 59092, 7059092 }, // "Trainer Spell: Dark Pact (#59092)"
    { 59156, 7059156 }, // "Trainer Spell: Thunderstorm (#59156)"
    { 59158, 7059158 }, // "Trainer Spell: Thunderstorm (#59158)"
    { 59159, 7059159 }, // "Trainer Spell: Thunderstorm (#59159)"
    { 59161, 7059161 }, // "Trainer Spell: Haunt (#59161)"
    { 59163, 7059163 }, // "Trainer Spell: Haunt (#59163)"
    { 59164, 7059164 }, // "Trainer Spell: Haunt (#59164)"
    { 59170, 7059170 }, // "Trainer Spell: Chaos Bolt (#59170)"
    { 59171, 7059171 }, // "Trainer Spell: Chaos Bolt (#59171)"
    { 59172, 7059172 }, // "Trainer Spell: Chaos Bolt (#59172)"
    { 60043, 7060043 }, // "Trainer Spell: Lava Burst (#60043)"
    { 60051, 7060051 }, // "Trainer Spell: Explosive Shot (#60051)"
    { 60052, 7060052 }, // "Trainer Spell: Explosive Shot (#60052)"
    { 60053, 7060053 }, // "Trainer Spell: Explosive Shot (#60053)"
    { 60192, 7060192 }, // "Trainer Spell: Freezing Arrow (#60192)"
    { 60219, 7060219 }, // "Trainer Spell: Create Firestone (#60219)"
    { 60220, 7060220 }, // "Trainer Spell: Create Firestone (#60220)"
    { 61005, 7061005 }, // "Trainer Spell: Kill Shot (#61005)"
    { 61006, 7061006 }, // "Trainer Spell: Kill Shot (#61006)"
    { 61191, 7061191 }, // "Trainer Spell: Enslave Demon (#61191)"
    { 61290, 7061290 }, // "Trainer Spell: Shadowflame (#61290)"
    { 61299, 7061299 }, // "Trainer Spell: Riptide (#61299)"
    { 61300, 7061300 }, // "Trainer Spell: Riptide (#61300)"
    { 61301, 7061301 }, // "Trainer Spell: Riptide (#61301)"
    { 61384, 7061384 }, // "Trainer Spell: Typhoon (#61384)"
    { 61411, 7061411 }, // "Trainer Spell: Shield of Righteousness (#61411)"
    { 61649, 7061649 }, // "Trainer Spell: Fire Nova (#61649)"
    { 61657, 7061657 }, // "Trainer Spell: Fire Nova (#61657)"
    { 61846, 7061846 }, // "Trainer Spell: Aspect of the Dragonhawk (#61846)"
    { 61847, 7061847 }, // "Trainer Spell: Aspect of the Dragonhawk (#61847)"
    { 61999, 7061999 }, // "Trainer Spell: Raise Ally (#61999)"
    { 62078, 7062078 }, // "Trainer Spell: Swipe (Cat) (#62078)"
    { 62124, 7062124 }, // "Trainer Spell: Hand of Reckoning (#62124)"
    { 62158, 7062158 }, // "Trainer Spell: Rune of the Stoneskin Gargoyle (#62158)"
    { 62600, 7062600 }, // "Trainer Spell: Savage Defense (#62600)"
    { 62757, 7062757 }, // "Trainer Spell: Call Stabled Pet (#62757)"
    { 63668, 7063668 }, // "Trainer Spell: Black Arrow (#63668)"
    { 63669, 7063669 }, // "Trainer Spell: Black Arrow (#63669)"
    { 63670, 7063670 }, // "Trainer Spell: Black Arrow (#63670)"
    { 63671, 7063671 }, // "Trainer Spell: Black Arrow (#63671)"
    { 63672, 7063672 }, // "Trainer Spell: Black Arrow (#63672)"
    { 64382, 7064382 }, // "Trainer Spell: Shattering Throw (#64382)"
    { 64843, 7064843 }, // "Trainer Spell: Divine Hymn (#64843)"
    { 64901, 7064901 }, // "Trainer Spell: Hymn of Hope (#64901)"
    { 66842, 7066842 }, // "Trainer Spell: Call of the Elements (#66842)"
    { 66843, 7066843 }, // "Trainer Spell: Call of the Ancestors (#66843)"
    { 66844, 7066844 }, // "Trainer Spell: Call of the Spirits (#66844)"
    { 70164, 7070164 }, // "Trainer Spell: Rune of the Nerubian Carapace (#70164)"
};
inline std::unordered_map<uint32_t, int64_t> BuildSPELL_ID_TO_LOCATION_ID()
{
    std::unordered_map<uint32_t, int64_t> result;
    for (auto const& row : SPELL_ID_TO_LOCATION_ID_RAW)
        result.emplace(row.first, row.second);
    return result;
}
inline const std::unordered_map<uint32_t, int64_t> SPELL_ID_TO_LOCATION_ID = BuildSPELL_ID_TO_LOCATION_ID();
}
