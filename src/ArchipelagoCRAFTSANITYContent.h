// GENERATED FILE - do not edit by hand.
// Regenerate with: python modules/archipelago_wow/tools/generate_content.py content/craftsanity.yaml
#pragma once

#include <cstdint>
#include <map>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

namespace ArchipelagoCRAFTSANITYContent {
inline constexpr std::pair<char const*, uint32_t> LOCATIONS_RAW[] = {
    {"Craft: Goretusk Liver Pie (#724)", 11500000},
    {"Craft: Westfall Stew (#733)", 11500001},
    {"Craft: Slitherskin Mackerel (#787)", 11500002},
    {"Craft: Seasoned Wolf Kabob (#1017)", 11500003},
    {"Craft: Redridge Goulash (#1082)", 11500004},
    {"Craft: Conjured Bread (#1113)", 11500005},
    {"Craft: Conjured Rye (#1114)", 11500006},
    {"Craft: Conjured Pumpernickel (#1487)", 11500007},
    {"Craft: Conjured Purified Water (#2136)", 11500008},
    {"Craft: Conjured Fresh Water (#2288)", 11500009},
    {"Craft: Fine Leather Boots (#2307)", 11500010},
    {"Craft: White Leather Jerkin (#2311)", 11500011},
    {"Craft: Fine Leather Gloves (#2312)", 11500012},
    {"Craft: Dark Leather Tunic (#2317)", 11500013},
    {"Craft: Elixir of Minor Agility (#2457)", 11500014},
    {"Craft: Swiftness Potion (#2459)", 11500015},
    {"Craft: Red Linen Robe (#2572)", 11500016},
    {"Craft: Gray Woolen Robe (#2585)", 11500017},
    {"Craft: Cooked Crab Claw (#2682)", 11500018},
    {"Craft: Succulent Pork Ribs (#2685)", 11500019},
    {"Craft: Runed Copper Breastplate (#2864)", 11500020},
    {"Craft: Silvered Bronze Breastplate (#2869)", 11500021},
    {"Craft: Beer Basted Boar Ribs (#2888)", 11500022},
    {"Craft: Blood Sausage (#3220)", 11500023},
    {"Craft: Minor Magic Resistance Potion (#3384)", 11500024},
    {"Craft: Potion of Curing (#3386)", 11500025},
    {"Craft: Limited Invulnerability Potion (#3387)", 11500026},
    {"Craft: Elixir of Lesser Agility (#3390)", 11500027},
    {"Craft: Elixir of Ogre's Strength (#3391)", 11500028},
    {"Craft: Copper Chain Vest (#3471)", 11500029},
    {"Craft: Gemmed Copper Gauntlets (#3474)", 11500030},
    {"Craft: Silvered Bronze Shoulders (#3481)", 11500031},
    {"Craft: Green Iron Boots (#3484)", 11500032},
    {"Craft: Green Iron Gauntlets (#3485)", 11500033},
    {"Craft: Deadly Bronze Poniard (#3490)", 11500034},
    {"Craft: Mighty Iron Hammer (#3492)", 11500035},
    {"Craft: Gold Bar (#3577)", 11500036},
    {"Craft: Crocolisk Steak (#3662)", 11500037},
    {"Craft: Murloc Fin Soup (#3663)", 11500038},
    {"Craft: Crocolisk Gumbo (#3664)", 11500039},
    {"Craft: Curiously Tasty Omelet (#3665)", 11500040},
    {"Craft: Gooey Spider Cake (#3666)", 11500041},
    {"Craft: Big Bear Steak (#3726)", 11500042},
    {"Craft: Hot Lion Chops (#3727)", 11500043},
    {"Craft: Tasty Lion Steak (#3728)", 11500044},
    {"Craft: Soothing Turtle Bisque (#3729)", 11500045},
    {"Craft: Conjured Spring Water (#3772)", 11500046},
    {"Craft: Shadow Oil (#3824)", 11500047},
    {"Craft: Elixir of Fortitude (#3825)", 11500048},
    {"Craft: Major Troll's Blood Elixir (#3826)", 11500049},
    {"Craft: Elixir of Detect Lesser Invisibility (#3828)", 11500050},
    {"Craft: Frost Oil (#3829)", 11500051},
    {"Craft: Golden Scale Coif (#3837)", 11500052},
    {"Craft: Green Iron Shoulders (#3840)", 11500053},
    {"Craft: Golden Scale Shoulders (#3841)", 11500054},
    {"Craft: Golden Scale Leggings (#3843)", 11500055},
    {"Craft: Golden Scale Cuirass (#3845)", 11500056},
    {"Craft: Polished Steel Boots (#3846)", 11500057},
    {"Craft: Golden Scale Boots (#3847)", 11500058},
    {"Craft: Hardened Iron Shortsword (#3849)", 11500059},
    {"Craft: Jade Serpentblade (#3850)", 11500060},
    {"Craft: Solid Iron Maul (#3851)", 11500061},
    {"Craft: Golden Iron Destroyer (#3852)", 11500062},
    {"Craft: Moonsteel Broadsword (#3853)", 11500063},
    {"Craft: Frost Tiger Blade (#3854)", 11500064},
    {"Craft: Massive Iron Axe (#3855)", 11500065},
    {"Craft: Shadow Crescent Axe (#3856)", 11500066},
    {"Craft: Green Woolen Bag (#4241)", 11500067},
    {"Craft: Hillman's Leather Vest (#4244)", 11500068},
    {"Craft: Dark Leather Gloves (#4248)", 11500069},
    {"Craft: Hillman's Belt (#4250)", 11500070},
    {"Craft: Dark Leather Shoulders (#4252)", 11500071},
    {"Craft: Barbaric Gloves (#4254)", 11500072},
    {"Craft: Green Leather Armor (#4255)", 11500073},
    {"Craft: Guardian Armor (#4256)", 11500074},
    {"Craft: Guardian Belt (#4258)", 11500075},
    {"Craft: Guardian Leather Bracers (#4260)", 11500076},
    {"Craft: Gem-studded Leather Belt (#4262)", 11500077},
    {"Craft: Barbaric Belt (#4264)", 11500078},
    {"Craft: Heavy Woolen Cloak (#4311)", 11500079},
    {"Craft: Red Woolen Boots (#4313)", 11500080},
    {"Craft: Reinforced Woolen Shoulders (#4315)", 11500081},
    {"Craft: Phoenix Pants (#4317)", 11500082},
    {"Craft: Azure Silk Gloves (#4319)", 11500083},
    {"Craft: Spider Silk Slippers (#4321)", 11500084},
    {"Craft: Enchanter's Cowl (#4322)", 11500085},
    {"Craft: Shadow Hood (#4323)", 11500086},
    {"Craft: Boots of the Enchanter (#4325)", 11500087},
    {"Craft: Icy Cloak (#4327)", 11500088},
    {"Craft: Spider Belt (#4328)", 11500089},
    {"Craft: Star Belt (#4329)", 11500090},
    {"Craft: Phoenix Gloves (#4331)", 11500091},
    {"Craft: Bright Yellow Shirt (#4332)", 11500092},
    {"Craft: Dark Silk Shirt (#4333)", 11500093},
    {"Craft: Rich Purple Silk Shirt (#4335)", 11500094},
    {"Craft: Black Swashbuckler's Shirt (#4336)", 11500095},
    {"Craft: Small Seaforium Charge (#4367)", 11500096},
    {"Craft: Lovingly Crafted Boomstick (#4372)", 11500097},
    {"Craft: Shadow Goggles (#4373)", 11500098},
    {"Craft: Flame Deflector (#4376)", 11500099},
    {"Craft: Minor Recombobulator (#4381)", 11500100},
    {"Craft: Moonsight Rifle (#4383)", 11500101},
    {"Craft: Ice Deflector (#4386)", 11500102},
    {"Craft: Discombobulator Ray (#4388)", 11500103},
    {"Craft: Craftsman's Monocle (#4393)", 11500104},
    {"Craft: Goblin Land Mine (#4395)", 11500105},
    {"Craft: Mechanical Dragonling (#4396)", 11500106},
    {"Craft: Gnomish Cloaking Device (#4397)", 11500107},
    {"Craft: Large Seaforium Charge (#4398)", 11500108},
    {"Craft: Mechanical Squirrel Box (#4401)", 11500109},
    {"Craft: Portable Bronze Mortar (#4403)", 11500110},
    {"Craft: Accurate Scope (#4407)", 11500111},
    {"Craft: Raptor Hide Harness (#4455)", 11500112},
    {"Craft: Raptor Hide Belt (#4456)", 11500113},
    {"Craft: Barbecued Buzzard Wing (#4457)", 11500114},
    {"Craft: Longjaw Mud Snapper (#4592)", 11500115},
    {"Craft: Bristle Whisker Catfish (#4593)", 11500116},
    {"Craft: Rockscale Cod (#4594)", 11500117},
    {"Craft: Discolored Healing Potion (#4596)", 11500118},
    {"Craft: Lesser Stoneshield Potion (#4623)", 11500119},
    {"Craft: Flash Bomb (#4852)", 11500120},
    {"Craft: Kodo Hide Bag (#5081)", 11500121},
    {"Craft: Rainbow Fin Albacore (#5095)", 11500122},
    {"Craft: Minor Soulstone (#5232)", 11500123},
    {"Craft: Conjured Muffin (#5349)", 11500124},
    {"Craft: Conjured Water (#5350)", 11500125},
    {"Craft: Kaldorei Spider Kabob (#5472)", 11500126},
    {"Craft: Scorpid Surprise (#5473)", 11500127},
    {"Craft: Roasted Kodo Meat (#5474)", 11500128},
    {"Craft: Fillet of Frenzy (#5476)", 11500129},
    {"Craft: Strider Stew (#5477)", 11500130},
    {"Craft: Dig Rat Stew (#5478)", 11500131},
    {"Craft: Crispy Lizard Tail (#5479)", 11500132},
    {"Craft: Lean Venison (#5480)", 11500133},
    {"Craft: Mana Jade (#5513)", 11500134},
    {"Craft: Mana Agate (#5514)", 11500135},
    {"Craft: Clam Chowder (#5526)", 11500136},
    {"Craft: Iridescent Hammer (#5541)", 11500137},
    {"Craft: Rage Potion (#5631)", 11500138},
    {"Craft: Great Rage Potion (#5633)", 11500139},
    {"Craft: Free Action Potion (#5634)", 11500140},
    {"Craft: Red Linen Bag (#5762)", 11500141},
    {"Craft: Red Woolen Bag (#5763)", 11500142},
    {"Craft: Green Silk Pack (#5764)", 11500143},
    {"Craft: Black Silk Pack (#5765)", 11500144},
    {"Craft: Robes of Arcana (#5770)", 11500145},
    {"Craft: Murloc Scale Belt (#5780)", 11500146},
    {"Craft: Murloc Scale Breastplate (#5781)", 11500147},
    {"Craft: Thick Murloc Armor (#5782)", 11500148},
    {"Craft: Murloc Scale Bracers (#5783)", 11500149},
    {"Craft: Fine Leather Pants (#5958)", 11500150},
    {"Craft: Barbaric Leggings (#5963)", 11500151},
    {"Craft: Guardian Cloak (#5965)", 11500152},
    {"Craft: Truesilver Bar (#6037)", 11500153},
    {"Craft: Giant Clam Scorcho (#6038)", 11500154},
    {"Craft: Steel Weapon Chain (#6041)", 11500155},
    {"Craft: Iron Shield Spike (#6042)", 11500156},
    {"Craft: Iron Counterweight (#6043)", 11500157},
    {"Craft: Shadow Protection Potion (#6048)", 11500158},
    {"Craft: Fire Protection Potion (#6049)", 11500159},
    {"Craft: Frost Protection Potion (#6050)", 11500160},
    {"Craft: Holy Protection Potion (#6051)", 11500161},
    {"Craft: Nature Protection Potion (#6052)", 11500162},
    {"Craft: Red Linen Vest (#6239)", 11500163},
    {"Craft: Blue Linen Vest (#6240)", 11500164},
    {"Craft: Blue Linen Robe (#6242)", 11500165},
    {"Craft: Blue Overalls (#6263)", 11500166},
    {"Craft: Greater Adept's Robe (#6264)", 11500167},
    {"Craft: Brilliant Smallfish (#6290)", 11500168},
    {"Craft: Loch Frenzy Delight (#6316)", 11500169},
    {"Craft: Stylish Blue Shirt (#6384)", 11500170},
    {"Craft: Stylish Green Shirt (#6385)", 11500171},
    {"Craft: Heavy Silk Bandage (#6451)", 11500172},
    {"Craft: Strong Anti-Venom (#6453)", 11500173},
    {"Craft: Deviate Scale Cloak (#6466)", 11500174},
    {"Craft: Deviate Scale Gloves (#6467)", 11500175},
    {"Craft: Deviate Scale Belt (#6468)", 11500176},
    {"Craft: Savory Deviate Delight (#6657)", 11500177},
    {"Craft: Elixir of Giant Growth (#6662)", 11500178},
    {"Craft: Moonglow Vest (#6709)", 11500179},
    {"Craft: Ez-Thro Dynamite (#6714)", 11500180},
    {"Craft: Ironforge Breastplate (#6731)", 11500181},
    {"Craft: Dress Shoes (#6836)", 11500182},
    {"Craft: Spotted Yellowtail (#6887)", 11500183},
    {"Craft: Smoked Bear Meat (#6890)", 11500184},
    {"Craft: Hands of Darkness (#7047)", 11500185},
    {"Craft: Truefaith Gloves (#7049)", 11500186},
    {"Craft: Azure Silk Cloak (#7053)", 11500187},
    {"Craft: Crimson Silk Cloak (#7056)", 11500188},
    {"Craft: Crimson Silk Shoulders (#7059)", 11500189},
    {"Craft: Azure Shoulders (#7060)", 11500190},
    {"Craft: Earthen Silk Belt (#7061)", 11500191},
    {"Craft: Crimson Silk Robe (#7063)", 11500192},
    {"Craft: Green Silk Armor (#7065)", 11500193},
    {"Craft: Elemental Fire (#7068)", 11500194},
    {"Craft: Essence of Earth (#7076)", 11500195},
    {"Craft: Essence of Fire (#7078)", 11500196},
    {"Craft: Essence of Water (#7080)", 11500197},
    {"Craft: Essence of Air (#7082)", 11500198},
    {"Craft: Goblin Jumper Cables (#7148)", 11500199},
    {"Craft: Fused Wiring (#7191)", 11500200},
    {"Craft: Rugged Leather Pants (#7280)", 11500201},
    {"Craft: Black Whelp Cloak (#7283)", 11500202},
    {"Craft: Red Whelp Gloves (#7284)", 11500203},
    {"Craft: Herbalist's Gloves (#7349)", 11500204},
    {"Craft: Earthen Leather Shoulders (#7352)", 11500205},
    {"Craft: Pilferer's Gloves (#7358)", 11500206},
    {"Craft: Heavy Earthen Gloves (#7359)", 11500207},
    {"Craft: Dusky Leather Leggings (#7373)", 11500208},
    {"Craft: Green Whelp Armor (#7375)", 11500209},
    {"Craft: Green Whelp Bracers (#7386)", 11500210},
    {"Craft: Dusky Boots (#7390)", 11500211},
    {"Craft: Swift Boots (#7391)", 11500212},
    {"Craft: Gnomish Universal Remote (#7506)", 11500213},
    {"Craft: Thistle Tea (#7676)", 11500214},
    {"Craft: Barbaric Iron Shoulders (#7913)", 11500215},
    {"Craft: Barbaric Iron Breastplate (#7914)", 11500216},
    {"Craft: Barbaric Iron Helm (#7915)", 11500217},
    {"Craft: Barbaric Iron Boots (#7916)", 11500218},
    {"Craft: Barbaric Iron Gloves (#7917)", 11500219},
    {"Craft: Heavy Mithril Pants (#7921)", 11500220},
    {"Craft: Mithril Scale Bracers (#7924)", 11500221},
    {"Craft: Ornate Mithril Pants (#7926)", 11500222},
    {"Craft: Ornate Mithril Gloves (#7927)", 11500223},
    {"Craft: Ornate Mithril Shoulder (#7928)", 11500224},
    {"Craft: Mithril Scale Shoulders (#7932)", 11500225},
    {"Craft: Heavy Mithril Helm (#7934)", 11500226},
    {"Craft: Blue Glittering Axe (#7942)", 11500227},
    {"Craft: Wicked Mithril Blade (#7943)", 11500228},
    {"Craft: Dazzling Mithril Rapier (#7944)", 11500229},
    {"Craft: Runed Mithril Hammer (#7946)", 11500230},
    {"Craft: Ebon Shiv (#7947)", 11500231},
    {"Craft: Mithril Shield Spike (#7967)", 11500232},
    {"Craft: Mithril Spurs (#7969)", 11500233},
    {"Craft: Mana Citrine (#8007)", 11500234},
    {"Craft: Mana Ruby (#8008)", 11500235},
    {"Craft: Conjured Sourdough (#8075)", 11500236},
    {"Craft: Conjured Sweet Roll (#8076)", 11500237},
    {"Craft: Conjured Mineral Water (#8077)", 11500238},
    {"Craft: Conjured Sparkling Water (#8078)", 11500239},
    {"Craft: Conjured Crystal Water (#8079)", 11500240},
    {"Craft: Comfortable Leather Hat (#8174)", 11500241},
    {"Craft: Turtle Scale Gloves (#8187)", 11500242},
    {"Craft: Nightscape Shoulders (#8192)", 11500243},
    {"Craft: Big Voodoo Robe (#8200)", 11500244},
    {"Craft: Big Voodoo Mask (#8201)", 11500245},
    {"Craft: Big Voodoo Pants (#8202)", 11500246},
    {"Craft: Tough Scorpid Breastplate (#8203)", 11500247},
    {"Craft: Tough Scorpid Gloves (#8204)", 11500248},
    {"Craft: Tough Scorpid Bracers (#8205)", 11500249},
    {"Craft: Tough Scorpid Leggings (#8206)", 11500250},
    {"Craft: Tough Scorpid Shoulders (#8207)", 11500251},
    {"Craft: Tough Scorpid Helm (#8208)", 11500252},
    {"Craft: Tough Scorpid Boots (#8209)", 11500253},
    {"Craft: Wild Leather Shoulders (#8210)", 11500254},
    {"Craft: Wild Leather Vest (#8211)", 11500255},
    {"Craft: Wild Leather Leggings (#8212)", 11500256},
    {"Craft: Wild Leather Boots (#8213)", 11500257},
    {"Craft: Wild Leather Helmet (#8214)", 11500258},
    {"Craft: Wild Leather Cloak (#8215)", 11500259},
    {"Craft: Big Voodoo Cloak (#8216)", 11500260},
    {"Craft: Mithril Head Trout (#8364)", 11500261},
    {"Craft: Mageweave Bandage (#8544)", 11500262},
    {"Craft: Magic Resistance Potion (#9036)", 11500263},
    {"Craft: Inlaid Mithril Cylinder (#9060)", 11500264},
    {"Craft: Goblin Rocket Fuel (#9061)", 11500265},
    {"Craft: Gift of Arthas (#9088)", 11500266},
    {"Craft: Wildvine Potion (#9144)", 11500267},
    {"Craft: Philosopher's Stone (#9149)", 11500268},
    {"Craft: Invisibility Potion (#9172)", 11500269},
    {"Craft: Elixir of Dream Vision (#9197)", 11500270},
    {"Craft: Elixir of Giants (#9206)", 11500271},
    {"Craft: Ghost Dye (#9210)", 11500272},
    {"Craft: Elixir of Demonslaying (#9224)", 11500273},
    {"Craft: Elixir of Shadow Power (#9264)", 11500274},
    {"Craft: Blue Firework (#9312)", 11500275},
    {"Craft: Green Firework (#9313)", 11500276},
    {"Craft: Red Firework (#9318)", 11500277},
    {"Craft: Golden Scale Gauntlets (#9366)", 11500278},
    {"Craft: Red Mageweave Vest (#10007)", 11500279},
    {"Craft: White Bandit Mask (#10008)", 11500280},
    {"Craft: Red Mageweave Pants (#10009)", 11500281},
    {"Craft: Red Mageweave Gloves (#10018)", 11500282},
    {"Craft: Shadoweave Mask (#10025)", 11500283},
    {"Craft: Red Mageweave Shoulders (#10029)", 11500284},
    {"Craft: Admiral's Hat (#10030)", 11500285},
    {"Craft: Red Mageweave Headband (#10033)", 11500286},
    {"Craft: Tuxedo Shirt (#10034)", 11500287},
    {"Craft: Tuxedo Pants (#10035)", 11500288},
    {"Craft: Tuxedo Jacket (#10036)", 11500289},
    {"Craft: White Wedding Dress (#10040)", 11500290},
    {"Craft: Colorful Kilt (#10048)", 11500291},
    {"Craft: Orange Martial Shirt (#10052)", 11500292},
    {"Craft: Lavender Mageweave Shirt (#10054)", 11500293},
    {"Craft: Pink Mageweave Shirt (#10055)", 11500294},
    {"Craft: Silvered Bronze Leggings (#10423)", 11500295},
    {"Craft: Bright-Eye Goggles (#10499)", 11500296},
    {"Craft: Catseye Ultra Goggles (#10501)", 11500297},
    {"Craft: Spellpower Goggles Xtreme (#10502)", 11500298},
    {"Craft: Deepdive Helmet (#10506)", 11500299},
    {"Craft: Mithril Heavy-bore Rifle (#10510)", 11500300},
    {"Craft: Parachute Cloak (#10518)", 11500301},
    {"Craft: Deadly Scope (#10546)", 11500302},
    {"Craft: Sniper Scope (#10548)", 11500303},
    {"Craft: Mithril Mechanical Dragonling (#10576)", 11500304},
    {"Craft: Dark Iron Plate (#11604)", 11500305},
    {"Craft: Dark Iron Shoulders (#11605)", 11500306},
    {"Craft: Dark Iron Mail (#11606)", 11500307},
    {"Craft: Dark Iron Sunderer (#11607)", 11500308},
    {"Craft: Dark Iron Pulverizer (#11608)", 11500309},
    {"Craft: Smoking Heart of the Mountain (#11811)", 11500310},
    {"Craft: Pet Bombling (#11825)", 11500311},
    {"Craft: Lil' Smoky (#11826)", 11500312},
    {"Craft: Lean Wolf Steak (#12209)", 11500313},
    {"Craft: Roast Raptor (#12210)", 11500314},
    {"Craft: Jungle Stew (#12212)", 11500315},
    {"Craft: Carrion Surprise (#12213)", 11500316},
    {"Craft: Mystery Stew (#12214)", 11500317},
    {"Craft: Heavy Kodo Stew (#12215)", 11500318},
    {"Craft: Spiced Chili Crab (#12216)", 11500319},
    {"Craft: Dragonbreath Chili (#12217)", 11500320},
    {"Craft: Monster Omelet (#12218)", 11500321},
    {"Craft: Crispy Bat Wing (#12224)", 11500322},
    {"Craft: Searing Golden Blade (#12260)", 11500323},
    {"Craft: Arcanite Bar (#12360)", 11500324},
    {"Craft: Thorium Armor (#12405)", 11500325},
    {"Craft: Thorium Belt (#12406)", 11500326},
    {"Craft: Thorium Bracers (#12408)", 11500327},
    {"Craft: Thorium Boots (#12409)", 11500328},
    {"Craft: Thorium Helm (#12410)", 11500329},
    {"Craft: Thorium Leggings (#12414)", 11500330},
    {"Craft: Radiant Breastplate (#12415)", 11500331},
    {"Craft: Radiant Belt (#12416)", 11500332},
    {"Craft: Radiant Circlet (#12417)", 11500333},
    {"Craft: Radiant Gloves (#12418)", 11500334},
    {"Craft: Radiant Boots (#12419)", 11500335},
    {"Craft: Radiant Leggings (#12420)", 11500336},
    {"Craft: Imperial Plate Chest (#12422)", 11500337},
    {"Craft: Imperial Plate Belt (#12424)", 11500338},
    {"Craft: Imperial Plate Bracers (#12425)", 11500339},
    {"Craft: Imperial Plate Boots (#12426)", 11500340},
    {"Craft: Imperial Plate Helm (#12427)", 11500341},
    {"Craft: Imperial Plate Shoulders (#12428)", 11500342},
    {"Craft: Imperial Plate Leggings (#12429)", 11500343},
    {"Craft: Runic Plate Shoulders (#12610)", 11500344},
    {"Craft: Runic Plate Boots (#12611)", 11500345},
    {"Craft: Runic Plate Helm (#12612)", 11500346},
    {"Craft: Runic Breastplate (#12613)", 11500347},
    {"Craft: Runic Plate Leggings (#12614)", 11500348},
    {"Craft: Enchanted Thorium Breastplate (#12618)", 11500349},
    {"Craft: Enchanted Thorium Leggings (#12619)", 11500350},
    {"Craft: Enchanted Thorium Helm (#12620)", 11500351},
    {"Craft: Wildthorn Mail (#12624)", 11500352},
    {"Craft: Dawnbringer Shoulders (#12625)", 11500353},
    {"Craft: Demon Forged Breastplate (#12628)", 11500354},
    {"Craft: Fiery Plate Gauntlets (#12631)", 11500355},
    {"Craft: Storm Gauntlets (#12632)", 11500356},
    {"Craft: Whitesoul Helm (#12633)", 11500357},
    {"Craft: Helm of the Great Chief (#12636)", 11500358},
    {"Craft: Stronghold Gauntlets (#12639)", 11500359},
    {"Craft: Lionheart Helm (#12640)", 11500360},
    {"Craft: Invulnerable Mail (#12641)", 11500361},
    {"Craft: Thorium Shield Spike (#12645)", 11500362},
    {"Craft: Ornate Thorium Handaxe (#12773)", 11500363},
    {"Craft: Dawn's Edge (#12774)", 11500364},
    {"Craft: Huge Thorium Battleaxe (#12775)", 11500365},
    {"Craft: Enchanted Battlehammer (#12776)", 11500366},
    {"Craft: Blazing Rapier (#12777)", 11500367},
    {"Craft: Serenity (#12781)", 11500368},
    {"Craft: Corruption (#12782)", 11500369},
    {"Craft: Heartseeker (#12783)", 11500370},
    {"Craft: Arcanite Reaper (#12784)", 11500371},
    {"Craft: Arcanite Champion (#12790)", 11500372},
    {"Craft: Volcanic Hammer (#12792)", 11500373},
    {"Craft: Masterwork Stormhammer (#12794)", 11500374},
    {"Craft: Hammer of the Titans (#12796)", 11500375},
    {"Craft: Frostguard (#12797)", 11500376},
    {"Craft: Annihilator (#12798)", 11500377},
    {"Craft: Living Essence (#12803)", 11500378},
    {"Craft: Essence of Undeath (#12808)", 11500379},
    {"Craft: Mighty Rage Potion (#13442)", 11500380},
    {"Craft: Superior Mana Potion (#13443)", 11500381},
    {"Craft: Major Mana Potion (#13444)", 11500382},
    {"Craft: Elixir of Superior Defense (#13445)", 11500383},
    {"Craft: Major Healing Potion (#13446)", 11500384},
    {"Craft: Elixir of the Sages (#13447)", 11500385},
    {"Craft: Elixir of the Mongoose (#13452)", 11500386},
    {"Craft: Elixir of Brute Force (#13453)", 11500387},
    {"Craft: Greater Arcane Elixir (#13454)", 11500388},
    {"Craft: Greater Stoneshield Potion (#13455)", 11500389},
    {"Craft: Greater Frost Protection Potion (#13456)", 11500390},
    {"Craft: Greater Fire Protection Potion (#13457)", 11500391},
    {"Craft: Greater Nature Protection Potion (#13458)", 11500392},
    {"Craft: Greater Shadow Protection Potion (#13459)", 11500393},
    {"Craft: Greater Arcane Protection Potion (#13461)", 11500394},
    {"Craft: Purification Potion (#13462)", 11500395},
    {"Craft: Alchemist's Stone (#13503)", 11500396},
    {"Craft: Potion of Petrification (#13506)", 11500397},
    {"Craft: Flask of the Titans (#13510)", 11500398},
    {"Craft: Flask of Distilled Wisdom (#13511)", 11500399},
    {"Craft: Flask of Supreme Power (#13512)", 11500400},
    {"Craft: Flask of Chromatic Resistance (#13513)", 11500401},
    {"Craft: Hot Wolf Ribs (#13851)", 11500402},
    {"Craft: Runecloth Tunic (#13857)", 11500403},
    {"Craft: Runecloth Robe (#13858)", 11500404},
    {"Craft: Runecloth Cloak (#13860)", 11500405},
    {"Craft: Runecloth Gloves (#13863)", 11500406},
    {"Craft: Runecloth Boots (#13864)", 11500407},
    {"Craft: Runecloth Pants (#13865)", 11500408},
    {"Craft: Runecloth Headband (#13866)", 11500409},
    {"Craft: Runecloth Shoulders (#13867)", 11500410},
    {"Craft: Frostweave Robe (#13868)", 11500411},
    {"Craft: Frostweave Tunic (#13869)", 11500412},
    {"Craft: Frostweave Gloves (#13870)", 11500413},
    {"Craft: Frostweave Pants (#13871)", 11500414},
    {"Craft: Cooked Glossy Mightfish (#13927)", 11500415},
    {"Craft: Grilled Squid (#13928)", 11500416},
    {"Craft: Hot Smoked Bass (#13929)", 11500417},
    {"Craft: Filet of Redgill (#13930)", 11500418},
    {"Craft: Nightfin Soup (#13931)", 11500419},
    {"Craft: Poached Sunscale Salmon (#13932)", 11500420},
    {"Craft: Lobster Stew (#13933)", 11500421},
    {"Craft: Mightfish Steak (#13934)", 11500422},
    {"Craft: Baked Salmon (#13935)", 11500423},
    {"Craft: Cindercloth Vest (#14042)", 11500424},
    {"Craft: Cindercloth Gloves (#14043)", 11500425},
    {"Craft: Cindercloth Cloak (#14044)", 11500426},
    {"Craft: Cindercloth Pants (#14045)", 11500427},
    {"Craft: Runecloth Bag (#14046)", 11500428},
    {"Craft: Brightcloth Robe (#14100)", 11500429},
    {"Craft: Brightcloth Gloves (#14101)", 11500430},
    {"Craft: Brightcloth Cloak (#14103)", 11500431},
    {"Craft: Brightcloth Pants (#14104)", 11500432},
    {"Craft: Felcloth Robe (#14106)", 11500433},
    {"Craft: Felcloth Pants (#14107)", 11500434},
    {"Craft: Felcloth Boots (#14108)", 11500435},
    {"Craft: Felcloth Hood (#14111)", 11500436},
    {"Craft: Felcloth Shoulders (#14112)", 11500437},
    {"Craft: Wizardweave Robe (#14128)", 11500438},
    {"Craft: Wizardweave Turban (#14130)", 11500439},
    {"Craft: Wizardweave Leggings (#14132)", 11500440},
    {"Craft: Cloak of Fire (#14134)", 11500441},
    {"Craft: Robe of Winter Night (#14136)", 11500442},
    {"Craft: Mooncloth Leggings (#14137)", 11500443},
    {"Craft: Mooncloth Vest (#14138)", 11500444},
    {"Craft: Mooncloth Shoulders (#14139)", 11500445},
    {"Craft: Mooncloth Circlet (#14140)", 11500446},
    {"Craft: Ghostweave Vest (#14141)", 11500447},
    {"Craft: Ghostweave Gloves (#14142)", 11500448},
    {"Craft: Ghostweave Belt (#14143)", 11500449},
    {"Craft: Ghostweave Pants (#14144)", 11500450},
    {"Craft: Gloves of Spell Mastery (#14146)", 11500451},
    {"Craft: Robe of the Archmage (#14152)", 11500452},
    {"Craft: Robe of the Void (#14153)", 11500453},
    {"Craft: Truefaith Vestments (#14154)", 11500454},
    {"Craft: Mooncloth Bag (#14155)", 11500455},
    {"Craft: Bottomless Bag (#14156)", 11500456},
    {"Craft: Mooncloth (#14342)", 11500457},
    {"Craft: Green Dragonscale Breastplate (#15045)", 11500458},
    {"Craft: Green Dragonscale Leggings (#15046)", 11500459},
    {"Craft: Red Dragonscale Breastplate (#15047)", 11500460},
    {"Craft: Blue Dragonscale Breastplate (#15048)", 11500461},
    {"Craft: Blue Dragonscale Shoulders (#15049)", 11500462},
    {"Craft: Black Dragonscale Breastplate (#15050)", 11500463},
    {"Craft: Black Dragonscale Shoulders (#15051)", 11500464},
    {"Craft: Black Dragonscale Leggings (#15052)", 11500465},
    {"Craft: Volcanic Breastplate (#15053)", 11500466},
    {"Craft: Volcanic Leggings (#15054)", 11500467},
    {"Craft: Volcanic Shoulders (#15055)", 11500468},
    {"Craft: Stormshroud Armor (#15056)", 11500469},
    {"Craft: Stormshroud Pants (#15057)", 11500470},
    {"Craft: Stormshroud Shoulders (#15058)", 11500471},
    {"Craft: Living Breastplate (#15059)", 11500472},
    {"Craft: Living Leggings (#15060)", 11500473},
    {"Craft: Living Shoulders (#15061)", 11500474},
    {"Craft: Devilsaur Leggings (#15062)", 11500475},
    {"Craft: Devilsaur Gauntlets (#15063)", 11500476},
    {"Craft: Warbear Harness (#15064)", 11500477},
    {"Craft: Warbear Woolies (#15065)", 11500478},
    {"Craft: Ironfeather Breastplate (#15066)", 11500479},
    {"Craft: Ironfeather Shoulders (#15067)", 11500480},
    {"Craft: Frostsaber Tunic (#15068)", 11500481},
    {"Craft: Frostsaber Leggings (#15069)", 11500482},
    {"Craft: Frostsaber Gloves (#15070)", 11500483},
    {"Craft: Frostsaber Boots (#15071)", 11500484},
    {"Craft: Chimeric Leggings (#15072)", 11500485},
    {"Craft: Chimeric Boots (#15073)", 11500486},
    {"Craft: Chimeric Gloves (#15074)", 11500487},
    {"Craft: Chimeric Vest (#15075)", 11500488},
    {"Craft: Heavy Scorpid Vest (#15076)", 11500489},
    {"Craft: Heavy Scorpid Bracers (#15077)", 11500490},
    {"Craft: Heavy Scorpid Gauntlets (#15078)", 11500491},
    {"Craft: Heavy Scorpid Leggings (#15079)", 11500492},
    {"Craft: Heavy Scorpid Helm (#15080)", 11500493},
    {"Craft: Heavy Scorpid Shoulders (#15081)", 11500494},
    {"Craft: Heavy Scorpid Belt (#15082)", 11500495},
    {"Craft: Wicked Leather Gauntlets (#15083)", 11500496},
    {"Craft: Wicked Leather Bracers (#15084)", 11500497},
    {"Craft: Wicked Leather Armor (#15085)", 11500498},
    {"Craft: Wicked Leather Headband (#15086)", 11500499},
    {"Craft: Wicked Leather Pants (#15087)", 11500500},
    {"Craft: Wicked Leather Belt (#15088)", 11500501},
    {"Craft: Runic Leather Armor (#15090)", 11500502},
    {"Craft: Runic Leather Gauntlets (#15091)", 11500503},
    {"Craft: Runic Leather Bracers (#15092)", 11500504},
    {"Craft: Runic Leather Belt (#15093)", 11500505},
    {"Craft: Runic Leather Headband (#15094)", 11500506},
    {"Craft: Runic Leather Pants (#15095)", 11500507},
    {"Craft: Runic Leather Shoulders (#15096)", 11500508},
    {"Craft: Onyxia Scale Breastplate (#15141)", 11500509},
    {"Craft: Thorium Grenade (#15993)", 11500510},
    {"Craft: Thorium Widget (#15994)", 11500511},
    {"Craft: Thorium Rifle (#15995)", 11500512},
    {"Craft: Lifelike Mechanical Toad (#15996)", 11500513},
    {"Craft: Thorium Shells (#15997)", 11500514},
    {"Craft: Spellpower Goggles Xtreme Plus (#15999)", 11500515},
    {"Craft: Thorium Tube (#16000)", 11500516},
    {"Craft: Dark Iron Rifle (#16004)", 11500517},
    {"Craft: Dark Iron Bomb (#16005)", 11500518},
    {"Craft: Delicate Arcanite Converter (#16006)", 11500519},
    {"Craft: Flawless Arcanite Rifle (#16007)", 11500520},
    {"Craft: Master Engineer's Goggles (#16008)", 11500521},
    {"Craft: Voice Amplification Modulator (#16009)", 11500522},
    {"Craft: Arcanite Dragonling (#16022)", 11500523},
    {"Craft: Masterwork Target Dummy (#16023)", 11500524},
    {"Craft: Arcane Bomb (#16040)", 11500525},
    {"Craft: Runed Arcanite Rod (#16207)", 11500526},
    {"Craft: Undermine Clam Chowder (#16766)", 11500527},
    {"Craft: Lesser Soulstone (#16892)", 11500528},
    {"Craft: Soulstone (#16893)", 11500529},
    {"Craft: Greater Soulstone (#16895)", 11500530},
    {"Craft: Major Soulstone (#16896)", 11500531},
    {"Craft: Flarecore Gloves (#16979)", 11500532},
    {"Craft: Flarecore Mantle (#16980)", 11500533},
    {"Craft: Corehound Boots (#16982)", 11500534},
    {"Craft: Molten Helm (#16983)", 11500535},
    {"Craft: Black Dragonscale Boots (#16984)", 11500536},
    {"Craft: Fiery Chain Shoulders (#16988)", 11500537},
    {"Craft: Fiery Chain Girdle (#16989)", 11500538},
    {"Craft: Dark Iron Leggings (#17013)", 11500539},
    {"Craft: Dark Iron Bracers (#17014)", 11500540},
    {"Craft: Dark Iron Reaver (#17015)", 11500541},
    {"Craft: Dark Iron Destroyer (#17016)", 11500542},
    {"Craft: Sulfuron Hammer (#17193)", 11500543},
    {"Craft: Gingerbread Cookie (#17197)", 11500544},
    {"Craft: Egg Nog (#17198)", 11500545},
    {"Craft: Edge of Winter (#17704)", 11500546},
    {"Craft: Elixir of Frost Power (#17708)", 11500547},
    {"Craft: Snowmaster 9000 (#17716)", 11500548},
    {"Craft: Gloves of the Greatfather (#17721)", 11500549},
    {"Craft: Green Holiday Shirt (#17723)", 11500550},
    {"Craft: Elementium Bar (#17771)", 11500551},
    {"Craft: Tender Wolf Steak (#18045)", 11500552},
    {"Craft: Force Reactive Disk (#18168)", 11500553},
    {"Craft: Shadowskin Gloves (#18238)", 11500554},
    {"Craft: Core Armor Kit (#18251)", 11500555},
    {"Craft: Major Rejuvenation Potion (#18253)", 11500556},
    {"Craft: Runn Tum Tuber Surprise (#18254)", 11500557},
    {"Craft: Elemental Sharpening Stone (#18262)", 11500558},
    {"Craft: Flarecore Wraps (#18263)", 11500559},
    {"Craft: Core Marksman Rifle (#18282)", 11500560},
    {"Craft: Biznicks 247x128 Accurascope (#18283)", 11500561},
    {"Craft: Belt of the Archmage (#18405)", 11500562},
    {"Craft: Felcloth Gloves (#18407)", 11500563},
    {"Craft: Inferno Gloves (#18408)", 11500564},
    {"Craft: Mooncloth Gloves (#18409)", 11500565},
    {"Craft: Cloak of Warding (#18413)", 11500566},
    {"Craft: Mooncloth Robe (#18486)", 11500567},
    {"Craft: Girdle of Insight (#18504)", 11500568},
    {"Craft: Mongoose Boots (#18506)", 11500569},
    {"Craft: Swift Flight Bracers (#18508)", 11500570},
    {"Craft: Chromatic Cloak (#18509)", 11500571},
    {"Craft: Hide of the Wild (#18510)", 11500572},
    {"Craft: Shifting Cloak (#18511)", 11500573},
    {"Craft: Goblin Jumper Cables XL (#18587)", 11500574},
    {"Craft: Ez-Thro Dynamite II (#18588)", 11500575},
    {"Craft: Powerful Seaforium Charge (#18594)", 11500576},
    {"Craft: Truesilver Transformer (#18631)", 11500577},
    {"Craft: Gyrofreeze Ice Reflector (#18634)", 11500578},
    {"Craft: Major Recombobulator (#18637)", 11500579},
    {"Craft: Hyper-Radiant Flame Reflector (#18638)", 11500580},
    {"Craft: Ultra-Flash Shadow Reflector (#18639)", 11500581},
    {"Craft: Gnomish Alarm-o-Bot (#18645)", 11500582},
    {"Craft: World Enlarger (#18660)", 11500583},
    {"Craft: Heavy Leather Ball (#18662)", 11500584},
    {"Craft: Barbaric Bracers (#18948)", 11500585},
    {"Craft: Snake Burst Firework (#19026)", 11500586},
    {"Craft: Heavy Timbermaw Belt (#19043)", 11500587},
    {"Craft: Might of the Timbermaw (#19044)", 11500588},
    {"Craft: Wisdom of the Timbermaw (#19047)", 11500589},
    {"Craft: Heavy Timbermaw Boots (#19048)", 11500590},
    {"Craft: Timbermaw Brawlers (#19049)", 11500591},
    {"Craft: Mantle of the Timbermaw (#19050)", 11500592},
    {"Craft: Girdle of the Dawn (#19051)", 11500593},
    {"Craft: Dawn Treaders (#19052)", 11500594},
    {"Craft: Argent Boots (#19056)", 11500595},
    {"Craft: Gloves of the Dawn (#19057)", 11500596},
    {"Craft: Golden Mantle of the Dawn (#19058)", 11500597},
    {"Craft: Argent Shoulders (#19059)", 11500598},
    {"Craft: Dark Iron Helm (#19148)", 11500599},
    {"Craft: Lava Belt (#19149)", 11500600},
    {"Craft: Flarecore Robe (#19156)", 11500601},
    {"Craft: Chromatic Gauntlets (#19157)", 11500602},
    {"Craft: Corehound Belt (#19162)", 11500603},
    {"Craft: Molten Belt (#19163)", 11500604},
    {"Craft: Dark Iron Gauntlets (#19164)", 11500605},
    {"Craft: Flarecore Leggings (#19165)", 11500606},
    {"Craft: Black Amnesty (#19166)", 11500607},
    {"Craft: Blackfury (#19167)", 11500608},
    {"Craft: Blackguard (#19168)", 11500609},
    {"Craft: Nightfall (#19169)", 11500610},
    {"Craft: Ebon Hand (#19170)", 11500611},
    {"Craft: Powerful Anti-Venom (#19440)", 11500612},
    {"Craft: Bloodvine Vest (#19682)", 11500613},
    {"Craft: Bloodvine Leggings (#19683)", 11500614},
    {"Craft: Bloodvine Boots (#19684)", 11500615},
    {"Craft: Primal Batskin Jerkin (#19685)", 11500616},
    {"Craft: Primal Batskin Gloves (#19686)", 11500617},
    {"Craft: Primal Batskin Bracers (#19687)", 11500618},
    {"Craft: Blood Tiger Breastplate (#19688)", 11500619},
    {"Craft: Blood Tiger Shoulders (#19689)", 11500620},
    {"Craft: Bloodsoul Breastplate (#19690)", 11500621},
    {"Craft: Bloodsoul Shoulders (#19691)", 11500622},
    {"Craft: Bloodsoul Gauntlets (#19692)", 11500623},
    {"Craft: Darksoul Breastplate (#19693)", 11500624},
    {"Craft: Darksoul Leggings (#19694)", 11500625},
    {"Craft: Darksoul Shoulders (#19695)", 11500626},
    {"Craft: Bloodvine Lens (#19998)", 11500627},
    {"Craft: Bloodvine Goggles (#19999)", 11500628},
    {"Craft: Greater Dreamless Sleep Potion (#20002)", 11500629},
    {"Craft: Mighty Troll's Blood Elixir (#20004)", 11500630},
    {"Craft: Mageblood Elixir (#20007)", 11500631},
    {"Craft: Living Action Potion (#20008)", 11500632},
    {"Craft: Dark Iron Boots (#20039)", 11500633},
    {"Craft: Heavy Crocolisk Stew (#20074)", 11500634},
    {"Craft: Dreamscale Breastplate (#20380)", 11500635},
    {"Craft: Adamantite Arrow Maker (#20475)", 11500636},
    {"Craft: Sandstalker Bracers (#20476)", 11500637},
    {"Craft: Sandstalker Gauntlets (#20477)", 11500638},
    {"Craft: Sandstalker Breastplate (#20478)", 11500639},
    {"Craft: Spitfire Breastplate (#20479)", 11500640},
    {"Craft: Spitfire Gauntlets (#20480)", 11500641},
    {"Craft: Spitfire Bracers (#20481)", 11500642},
    {"Craft: Runed Stygian Boots (#20537)", 11500643},
    {"Craft: Runed Stygian Leggings (#20538)", 11500644},
    {"Craft: Runed Stygian Belt (#20539)", 11500645},
    {"Craft: Darkrune Gauntlets (#20549)", 11500646},
    {"Craft: Darkrune Breastplate (#20550)", 11500647},
    {"Craft: Darkrune Helm (#20551)", 11500648},
    {"Craft: Black Whelp Tunic (#20575)", 11500649},
    {"Craft: Minor Wizard Oil (#20744)", 11500650},
    {"Craft: Minor Mana Oil (#20745)", 11500651},
    {"Craft: Lesser Wizard Oil (#20746)", 11500652},
    {"Craft: Lesser Mana Oil (#20747)", 11500653},
    {"Craft: Brilliant Mana Oil (#20748)", 11500654},
    {"Craft: Brilliant Wizard Oil (#20749)", 11500655},
    {"Craft: Wizard Oil (#20750)", 11500656},
    {"Craft: Amulet of the Moon (#20830)", 11500657},
    {"Craft: Heavy Golden Necklace of Battle (#20831)", 11500658},
    {"Craft: Wicked Moonstone Ring (#20833)", 11500659},
    {"Craft: Pendant of the Agate Shield (#20950)", 11500660},
    {"Craft: Heavy Iron Knuckles (#20954)", 11500661},
    {"Craft: Blazing Citrine Ring (#20958)", 11500662},
    {"Craft: The Jade Eye (#20959)", 11500663},
    {"Craft: Jade Pendant of Blasting (#20966)", 11500664},
    {"Craft: Citrine Pendant of Golden Healing (#20967)", 11500665},
    {"Craft: Ruby Crown of Restoration (#20969)", 11500666},
    {"Craft: Dirge's Kickin' Chimaerok Chops (#21023)", 11500667},
    {"Craft: Smoked Sagefish (#21072)", 11500668},
    {"Craft: Festival Dress (#21154)", 11500669},
    {"Craft: Sagefish Delight (#21217)", 11500670},
    {"Craft: Stormshroud Gloves (#21278)", 11500671},
    {"Craft: Soul Pouch (#21340)", 11500672},
    {"Craft: Core Felcloth Bag (#21342)", 11500673},
    {"Craft: Festival Suit (#21542)", 11500674},
    {"Craft: Elixir of Greater Firepower (#21546)", 11500675},
    {"Craft: Small Red Rocket (#21557)", 11500676},
    {"Craft: Small Blue Rocket (#21558)", 11500677},
    {"Craft: Small Green Rocket (#21559)", 11500678},
    {"Craft: Firework Launcher (#21569)", 11500679},
    {"Craft: Cluster Launcher (#21570)", 11500680},
    {"Craft: Blue Rocket Cluster (#21571)", 11500681},
    {"Craft: Green Rocket Cluster (#21574)", 11500682},
    {"Craft: Red Rocket Cluster (#21576)", 11500683},
    {"Craft: Large Blue Rocket (#21589)", 11500684},
    {"Craft: Large Green Rocket (#21590)", 11500685},
    {"Craft: Large Red Rocket (#21592)", 11500686},
    {"Craft: Large Blue Rocket Cluster (#21714)", 11500687},
    {"Craft: Large Green Rocket Cluster (#21716)", 11500688},
    {"Craft: Large Red Rocket Cluster (#21718)", 11500689},
    {"Craft: Gem Studded Band (#21753)", 11500690},
    {"Craft: The Aquamarine Ward (#21754)", 11500691},
    {"Craft: Figurine - Golden Hare (#21756)", 11500692},
    {"Craft: Figurine - Black Pearl Panther (#21758)", 11500693},
    {"Craft: Figurine - Truesilver Crab (#21760)", 11500694},
    {"Craft: Figurine - Truesilver Boar (#21763)", 11500695},
    {"Craft: Opal Necklace of Impact (#21766)", 11500696},
    {"Craft: Figurine - Ruby Serpent (#21769)", 11500697},
    {"Craft: Emerald Crown of Destruction (#21774)", 11500698},
    {"Craft: Figurine - Emerald Owl (#21777)", 11500699},
    {"Craft: Ring of Bitter Shadows (#21778)", 11500700},
    {"Craft: Figurine - Black Diamond Crab (#21784)", 11500701},
    {"Craft: Figurine - Dark Iron Scorpid (#21789)", 11500702},
    {"Craft: Necklace of the Diamond Tower (#21792)", 11500703},
    {"Craft: Bolt of Imbued Netherweave (#21842)", 11500704},
    {"Craft: Imbued Netherweave Bag (#21843)", 11500705},
    {"Craft: Bolt of Soulcloth (#21844)", 11500706},
    {"Craft: Primal Mooncloth (#21845)", 11500707},
    {"Craft: Spellfire Belt (#21846)", 11500708},
    {"Craft: Spellfire Gloves (#21847)", 11500709},
    {"Craft: Spellfire Robe (#21848)", 11500710},
    {"Craft: Netherweave Robe (#21854)", 11500711},
    {"Craft: Netherweave Tunic (#21855)", 11500712},
    {"Craft: Spellfire Bag (#21858)", 11500713},
    {"Craft: Imbued Netherweave Pants (#21859)", 11500714},
    {"Craft: Imbued Netherweave Boots (#21860)", 11500715},
    {"Craft: Imbued Netherweave Robe (#21861)", 11500716},
    {"Craft: Imbued Netherweave Tunic (#21862)", 11500717},
    {"Craft: Soulcloth Gloves (#21863)", 11500718},
    {"Craft: Soulcloth Shoulders (#21864)", 11500719},
    {"Craft: Soulcloth Vest (#21865)", 11500720},
    {"Craft: Arcanoweave Bracers (#21866)", 11500721},
    {"Craft: Arcanoweave Boots (#21867)", 11500722},
    {"Craft: Arcanoweave Robe (#21868)", 11500723},
    {"Craft: Frozen Shadoweave Shoulders (#21869)", 11500724},
    {"Craft: Frozen Shadoweave Boots (#21870)", 11500725},
    {"Craft: Frozen Shadoweave Robe (#21871)", 11500726},
    {"Craft: Ebon Shadowbag (#21872)", 11500727},
    {"Craft: Primal Mooncloth Belt (#21873)", 11500728},
    {"Craft: Primal Mooncloth Shoulders (#21874)", 11500729},
    {"Craft: Primal Mooncloth Robe (#21875)", 11500730},
    {"Craft: Primal Mooncloth Bag (#21876)", 11500731},
    {"Craft: Primal Fire (#21884)", 11500732},
    {"Craft: Primal Water (#21885)", 11500733},
    {"Craft: Netherweave Bandage (#21990)", 11500734},
    {"Craft: Heavy Netherweave Bandage (#21991)", 11500735},
    {"Craft: Conjured Glacier Water (#22018)", 11500736},
    {"Craft: Conjured Croissant (#22019)", 11500737},
    {"Craft: Mana Emerald (#22044)", 11500738},
    {"Craft: Master Soulstone (#22116)", 11500739},
    {"Craft: Obsidian Mail Tunic (#22191)", 11500740},
    {"Craft: Black Grasp of the Destroyer (#22194)", 11500741},
    {"Craft: Light Obsidian Belt (#22195)", 11500742},
    {"Craft: Thick Obsidian Breastplate (#22196)", 11500743},
    {"Craft: Heavy Obsidian Belt (#22197)", 11500744},
    {"Craft: Jagged Obsidian Shield (#22198)", 11500745},
    {"Craft: Enchanted Mageweave Pouch (#22246)", 11500746},
    {"Craft: Enchanted Runecloth Bag (#22248)", 11500747},
    {"Craft: Big Bag of Enchantment (#22249)", 11500748},
    {"Craft: Cenarion Herb Bag (#22251)", 11500749},
    {"Craft: Satchel of Cenarius (#22252)", 11500750},
    {"Craft: Sageblade (#22383)", 11500751},
    {"Craft: Persuader (#22384)", 11500752},
    {"Craft: Titanic Leggings (#22385)", 11500753},
    {"Craft: Large Prismatic Shard (#22449)", 11500754},
    {"Craft: Primal Air (#22451)", 11500755},
    {"Craft: Primal Earth (#22452)", 11500756},
    {"Craft: Runed Adamantite Rod (#22462)", 11500757},
    {"Craft: Runed Eternium Rod (#22463)", 11500758},
    {"Craft: Superior Mana Oil (#22521)", 11500759},
    {"Craft: Superior Wizard Oil (#22522)", 11500760},
    {"Craft: Crunchy Spider Surprise (#22645)", 11500761},
    {"Craft: Gaea's Embrace (#22660)", 11500762},
    {"Craft: Steam Tonk Controller (#22728)", 11500763},
    {"Craft: Sylvan Vest (#22756)", 11500764},
    {"Craft: Sylvan Crown (#22757)", 11500765},
    {"Craft: Sylvan Shoulders (#22758)", 11500766},
    {"Craft: Bramblewood Helm (#22759)", 11500767},
    {"Craft: Bramblewood Boots (#22760)", 11500768},
    {"Craft: Bramblewood Belt (#22761)", 11500769},
    {"Craft: Ironvine Breastplate (#22762)", 11500770},
    {"Craft: Ironvine Gloves (#22763)", 11500771},
    {"Craft: Ironvine Belt (#22764)", 11500772},
    {"Craft: Elixir of Camouflage (#22823)", 11500773},
    {"Craft: Sneaking Potion (#22826)", 11500774},
    {"Craft: Elixir of Major Frost Power (#22827)", 11500775},
    {"Craft: Insane Strength Potion (#22828)", 11500776},
    {"Craft: Elixir of the Searching Eye (#22830)", 11500777},
    {"Craft: Elixir of Major Agility (#22831)", 11500778},
    {"Craft: Super Mana Potion (#22832)", 11500779},
    {"Craft: Elixir of Major Firepower (#22833)", 11500780},
    {"Craft: Elixir of Major Defense (#22834)", 11500781},
    {"Craft: Elixir of Major Shadow Power (#22835)", 11500782},
    {"Craft: Major Dreamless Sleep Potion (#22836)", 11500783},
    {"Craft: Heroic Potion (#22837)", 11500784},
    {"Craft: Haste Potion (#22838)", 11500785},
    {"Craft: Destruction Potion (#22839)", 11500786},
    {"Craft: Elixir of Major Mageblood (#22840)", 11500787},
    {"Craft: Major Fire Protection Potion (#22841)", 11500788},
    {"Craft: Major Frost Protection Potion (#22842)", 11500789},
    {"Craft: Major Nature Protection Potion (#22844)", 11500790},
    {"Craft: Major Arcane Protection Potion (#22845)", 11500791},
    {"Craft: Major Shadow Protection Potion (#22846)", 11500792},
    {"Craft: Major Holy Protection Potion (#22847)", 11500793},
    {"Craft: Elixir of Empowerment (#22848)", 11500794},
    {"Craft: Ironshield Potion (#22849)", 11500795},
    {"Craft: Shrouding Potion (#22871)", 11500796},
    {"Craft: Conjured Cinnamon Roll (#22895)", 11500797},
    {"Craft: Teardrop Blood Garnet (#23094)", 11500798},
    {"Craft: Bold Blood Garnet (#23095)", 11500799},
    {"Craft: Runed Blood Garnet (#23096)", 11500800},
    {"Craft: Delicate Blood Garnet (#23097)", 11500801},
    {"Craft: Inscribed Flame Spessarite (#23098)", 11500802},
    {"Craft: Luminous Flame Spessarite (#23099)", 11500803},
    {"Craft: Glinting Flame Spessarite (#23100)", 11500804},
    {"Craft: Potent Flame Spessarite (#23101)", 11500805},
    {"Craft: Radiant Deep Peridot (#23103)", 11500806},
    {"Craft: Jagged Deep Peridot (#23104)", 11500807},
    {"Craft: Enduring Deep Peridot (#23105)", 11500808},
    {"Craft: Dazzling Deep Peridot (#23106)", 11500809},
    {"Craft: Glowing Shadow Draenite (#23108)", 11500810},
    {"Craft: Royal Shadow Draenite (#23109)", 11500811},
    {"Craft: Shifting Shadow Draenite (#23110)", 11500812},
    {"Craft: Sovereign Shadow Draenite (#23111)", 11500813},
    {"Craft: Brilliant Golden Draenite (#23113)", 11500814},
    {"Craft: Gleaming Golden Draenite (#23114)", 11500815},
    {"Craft: Thick Golden Draenite (#23115)", 11500816},
    {"Craft: Rigid Golden Draenite (#23116)", 11500817},
    {"Craft: Solid Azure Moonstone (#23118)", 11500818},
    {"Craft: Sparkling Azure Moonstone (#23119)", 11500819},
    {"Craft: Stormy Azure Moonstone (#23120)", 11500820},
    {"Craft: Lustrous Azure Moonstone (#23121)", 11500821},
    {"Craft: Adamantite Maul (#23502)", 11500822},
    {"Craft: Adamantite Cleaver (#23503)", 11500823},
    {"Craft: Adamantite Dagger (#23504)", 11500824},
    {"Craft: Adamantite Rapier (#23505)", 11500825},
    {"Craft: Adamantite Plate Bracers (#23506)", 11500826},
    {"Craft: Adamantite Breastplate (#23507)", 11500827},
    {"Craft: Adamantite Plate Gloves (#23508)", 11500828},
    {"Craft: Enchanted Adamantite Breastplate (#23509)", 11500829},
    {"Craft: Enchanted Adamantite Belt (#23510)", 11500830},
    {"Craft: Enchanted Adamantite Boots (#23511)", 11500831},
    {"Craft: Enchanted Adamantite Leggings (#23512)", 11500832},
    {"Craft: Flamebane Breastplate (#23513)", 11500833},
    {"Craft: Flamebane Gloves (#23514)", 11500834},
    {"Craft: Flamebane Bracers (#23515)", 11500835},
    {"Craft: Flamebane Helm (#23516)", 11500836},
    {"Craft: Felsteel Gloves (#23517)", 11500837},
    {"Craft: Felsteel Leggings (#23518)", 11500838},
    {"Craft: Felsteel Helm (#23519)", 11500839},
    {"Craft: Ragesteel Gloves (#23520)", 11500840},
    {"Craft: Ragesteel Helm (#23521)", 11500841},
    {"Craft: Ragesteel Breastplate (#23522)", 11500842},
    {"Craft: Khorium Pants (#23523)", 11500843},
    {"Craft: Khorium Belt (#23524)", 11500844},
    {"Craft: Khorium Boots (#23525)", 11500845},
    {"Craft: Swiftsteel Gloves (#23526)", 11500846},
    {"Craft: Earthpeace Breastplate (#23527)", 11500847},
    {"Craft: Adamantite Sharpening Stone (#23529)", 11500848},
    {"Craft: Felsteel Shield Spike (#23530)", 11500849},
    {"Craft: Felfury Gauntlets (#23531)", 11500850},
    {"Craft: Gauntlets of the Iron Tower (#23532)", 11500851},
    {"Craft: Steelgrip Gauntlets (#23533)", 11500852},
    {"Craft: Storm Helm (#23534)", 11500853},
    {"Craft: Helm of the Stalwart Defender (#23535)", 11500854},
    {"Craft: Oathkeeper's Helm (#23536)", 11500855},
    {"Craft: Black Felsteel Bracers (#23537)", 11500856},
    {"Craft: Bracers of the Green Fortress (#23538)", 11500857},
    {"Craft: Blessed Bracers (#23539)", 11500858},
    {"Craft: Felsteel Longblade (#23540)", 11500859},
    {"Craft: Khorium Champion (#23541)", 11500860},
    {"Craft: Fel Edged Battleaxe (#23542)", 11500861},
    {"Craft: Felsteel Reaper (#23543)", 11500862},
    {"Craft: Runic Hammer (#23544)", 11500863},
    {"Craft: Fel Hardened Maul (#23546)", 11500864},
    {"Craft: Eternium Runed Blade (#23554)", 11500865},
    {"Craft: Dirge (#23555)", 11500866},
    {"Craft: Hand of Eternity (#23556)", 11500867},
    {"Craft: Primal Might (#23571)", 11500868},
    {"Craft: Lesser Ward of Shielding (#23575)", 11500869},
    {"Craft: Greater Ward of Shielding (#23576)", 11500870},
    {"Craft: Adamantite Rifle (#23746)", 11500871},
    {"Craft: Felsteel Boomstick (#23747)", 11500872},
    {"Craft: Ornate Khorium Rifle (#23748)", 11500873},
    {"Craft: Cogspinner Goggles (#23758)", 11500874},
    {"Craft: Power Amplification Goggles (#23761)", 11500875},
    {"Craft: Ultra-Spectropic Detection Goggles (#23762)", 11500876},
    {"Craft: Hyper-Vision Goggles (#23763)", 11500877},
    {"Craft: Adamantite Scope (#23764)", 11500878},
    {"Craft: Khorium Scope (#23765)", 11500879},
    {"Craft: Stabilized Eternium Scope (#23766)", 11500880},
    {"Craft: Crashin' Thrashin' Robot (#23767)", 11500881},
    {"Craft: White Smoke Flare (#23768)", 11500882},
    {"Craft: Green Smoke Flare (#23771)", 11500883},
    {"Craft: Fel Iron Toolbox (#23774)", 11500884},
    {"Craft: Titanium Toolbox (#23775)", 11500885},
    {"Craft: Heavy Knothide Leather (#23793)", 11500886},
    {"Craft: Elemental Seaforium Charge (#23819)", 11500887},
    {"Craft: Critter Enlarger (#23820)", 11500888},
    {"Craft: Zapthrottle Mote Extractor (#23821)", 11500889},
    {"Craft: Rocket Boots Xtreme (#23824)", 11500890},
    {"Craft: Remote Mail Terminal (#23840)", 11500891},
    {"Craft: Bold Living Ruby (#24027)", 11500892},
    {"Craft: Delicate Living Ruby (#24028)", 11500893},
    {"Craft: Teardrop Living Ruby (#24029)", 11500894},
    {"Craft: Runed Living Ruby (#24030)", 11500895},
    {"Craft: Bright Living Ruby (#24031)", 11500896},
    {"Craft: Subtle Living Ruby (#24032)", 11500897},
    {"Craft: Solid Star of Elune (#24033)", 11500898},
    {"Craft: Sparkling Star of Elune (#24035)", 11500899},
    {"Craft: Flashing Living Ruby (#24036)", 11500900},
    {"Craft: Lustrous Star of Elune (#24037)", 11500901},
    {"Craft: Stormy Star of Elune (#24039)", 11500902},
    {"Craft: Brilliant Dawnstone (#24047)", 11500903},
    {"Craft: Smooth Dawnstone (#24048)", 11500904},
    {"Craft: Gleaming Dawnstone (#24050)", 11500905},
    {"Craft: Rigid Dawnstone (#24051)", 11500906},
    {"Craft: Thick Dawnstone (#24052)", 11500907},
    {"Craft: Mystic Dawnstone (#24053)", 11500908},
    {"Craft: Sovereign Nightseye (#24054)", 11500909},
    {"Craft: Shifting Nightseye (#24055)", 11500910},
    {"Craft: Glowing Nightseye (#24056)", 11500911},
    {"Craft: Royal Nightseye (#24057)", 11500912},
    {"Craft: Inscribed Noble Topaz (#24058)", 11500913},
    {"Craft: Potent Noble Topaz (#24059)", 11500914},
    {"Craft: Luminous Noble Topaz (#24060)", 11500915},
    {"Craft: Glinting Noble Topaz (#24061)", 11500916},
    {"Craft: Enduring Talasite (#24062)", 11500917},
    {"Craft: Dazzling Talasite (#24065)", 11500918},
    {"Craft: Radiant Talasite (#24066)", 11500919},
    {"Craft: Jagged Talasite (#24067)", 11500920},
    {"Craft: Khorium Band of Shadows (#24079)", 11500921},
    {"Craft: Khorium Band of Frost (#24080)", 11500922},
    {"Craft: Khorium Inferno Band (#24082)", 11500923},
    {"Craft: Khorium Band of Leaves (#24085)", 11500924},
    {"Craft: Arcane Khorium Band (#24086)", 11500925},
    {"Craft: Heavy Felsteel Ring (#24087)", 11500926},
    {"Craft: Delicate Eternium Ring (#24088)", 11500927},
    {"Craft: Blazing Eternium Band (#24089)", 11500928},
    {"Craft: Pendant of Frozen Flame (#24092)", 11500929},
    {"Craft: Pendant of Thawing (#24093)", 11500930},
    {"Craft: Pendant of Withering (#24095)", 11500931},
    {"Craft: Pendant of Shadow's End (#24097)", 11500932},
    {"Craft: Pendant of the Null Rune (#24098)", 11500933},
    {"Craft: Roasted Moongraze Tenderloin (#24105)", 11500934},
    {"Craft: Thick Felsteel Necklace (#24106)", 11500935},
    {"Craft: Living Ruby Pendant (#24110)", 11500936},
    {"Craft: Braided Eternium Chain (#24114)", 11500937},
    {"Craft: Eye of the Night (#24116)", 11500938},
    {"Craft: Embrace of the Dawn (#24117)", 11500939},
    {"Craft: Chain of the Twilight Owl (#24121)", 11500940},
    {"Craft: Coronet of Verdant Flame (#24122)", 11500941},
    {"Craft: Circlet of Arcane Might (#24123)", 11500942},
    {"Craft: Figurine - Felsteel Boar (#24124)", 11500943},
    {"Craft: Figurine - Dawnstone Crab (#24125)", 11500944},
    {"Craft: Figurine - Living Ruby Serpent (#24126)", 11500945},
    {"Craft: Figurine - Talasite Owl (#24127)", 11500946},
    {"Craft: Figurine - Nightseye Panther (#24128)", 11500947},
    {"Craft: Unyielding Bracers (#24249)", 11500948},
    {"Craft: Bracers of Havok (#24250)", 11500949},
    {"Craft: Blackstrike Bracers (#24251)", 11500950},
    {"Craft: Cloak of the Black Void (#24252)", 11500951},
    {"Craft: Cloak of Eternity (#24253)", 11500952},
    {"Craft: White Remedy Cape (#24254)", 11500953},
    {"Craft: Unyielding Girdle (#24255)", 11500954},
    {"Craft: Girdle of Ruination (#24256)", 11500955},
    {"Craft: Black Belt of Knowledge (#24257)", 11500956},
    {"Craft: Resolute Cape (#24258)", 11500957},
    {"Craft: Vengeance Wrap (#24259)", 11500958},
    {"Craft: Manaweave Cloak (#24260)", 11500959},
    {"Craft: Whitemend Pants (#24261)", 11500960},
    {"Craft: Spellstrike Pants (#24262)", 11500961},
    {"Craft: Battlecast Pants (#24263)", 11500962},
    {"Craft: Whitemend Hood (#24264)", 11500963},
    {"Craft: Spellstrike Hood (#24266)", 11500964},
    {"Craft: Battlecast Hood (#24267)", 11500965},
    {"Craft: Heavy Netherweave Net (#24269)", 11500966},
    {"Craft: Bag of Jewels (#24270)", 11500967},
    {"Craft: Spellcloth (#24271)", 11500968},
    {"Craft: Shadowcloth (#24272)", 11500969},
    {"Craft: Mystic Spellthread (#24273)", 11500970},
    {"Craft: Runic Spellthread (#24274)", 11500971},
    {"Craft: Silver Spellthread (#24275)", 11500972},
    {"Craft: Golden Spellthread (#24276)", 11500973},
    {"Craft: Greater Rune of Warding (#25521)", 11500974},
    {"Craft: Vindicator's Armor Kit (#25651)", 11500975},
    {"Craft: Magister's Armor Kit (#25652)", 11500976},
    {"Craft: Riding Crop (#25653)", 11500977},
    {"Craft: Comfortable Insoles (#25679)", 11500978},
    {"Craft: Stylin' Purple Hat (#25680)", 11500979},
    {"Craft: Stylin' Adventure Hat (#25681)", 11500980},
    {"Craft: Stylin' Jungle Hat (#25682)", 11500981},
    {"Craft: Stylin' Crimson Hat (#25683)", 11500982},
    {"Craft: Fel Leather Gloves (#25685)", 11500983},
    {"Craft: Fel Leather Boots (#25686)", 11500984},
    {"Craft: Fel Leather Leggings (#25687)", 11500985},
    {"Craft: Heavy Clefthoof Vest (#25689)", 11500986},
    {"Craft: Heavy Clefthoof Leggings (#25690)", 11500987},
    {"Craft: Heavy Clefthoof Boots (#25691)", 11500988},
    {"Craft: Netherfury Leggings (#25692)", 11500989},
    {"Craft: Netherfury Boots (#25693)", 11500990},
    {"Craft: Netherfury Belt (#25694)", 11500991},
    {"Craft: Felstalker Belt (#25695)", 11500992},
    {"Craft: Felstalker Breastplate (#25696)", 11500993},
    {"Craft: Felstalker Bracers (#25697)", 11500994},
    {"Craft: Adamantite Rod (#25844)", 11500995},
    {"Craft: Eternium Rod (#25845)", 11500996},
    {"Craft: Earthstorm Diamond (#25867)", 11500997},
    {"Craft: Skyfire Diamond (#25868)", 11500998},
    {"Craft: Purple Smoke Flare (#25886)", 11500999},
    {"Craft: Destructive Skyfire Diamond (#25890)", 11501000},
    {"Craft: Mystical Skyfire Diamond (#25893)", 11501001},
    {"Craft: Swift Skyfire Diamond (#25894)", 11501002},
    {"Craft: Enigmatic Skyfire Diamond (#25895)", 11501003},
    {"Craft: Powerful Earthstorm Diamond (#25896)", 11501004},
    {"Craft: Bracing Earthstorm Diamond (#25897)", 11501005},
    {"Craft: Tenacious Earthstorm Diamond (#25898)", 11501006},
    {"Craft: Brutal Earthstorm Diamond (#25899)", 11501007},
    {"Craft: Insightful Earthstorm Diamond (#25901)", 11501008},
    {"Craft: Lynx Steak (#27635)", 11501009},
    {"Craft: Bat Bites (#27636)", 11501010},
    {"Craft: Buzzard Bites (#27651)", 11501011},
    {"Craft: Ravager Dog (#27655)", 11501012},
    {"Craft: Sporeling Snack (#27656)", 11501013},
    {"Craft: Blackened Basilisk (#27657)", 11501014},
    {"Craft: Roasted Clefthoof (#27658)", 11501015},
    {"Craft: Warp Burger (#27659)", 11501016},
    {"Craft: Talbuk Steak (#27660)", 11501017},
    {"Craft: Blackened Trout (#27661)", 11501018},
    {"Craft: Feltail Delight (#27662)", 11501019},
    {"Craft: Blackened Sporefish (#27663)", 11501020},
    {"Craft: Grilled Mudfish (#27664)", 11501021},
    {"Craft: Poached Bluefish (#27665)", 11501022},
    {"Craft: Golden Fish Sticks (#27666)", 11501023},
    {"Craft: Spicy Crawdad (#27667)", 11501024},
    {"Craft: Smooth Golden Draenite (#28290)", 11501025},
    {"Craft: Adamantite Weightstone (#28421)", 11501026},
    {"Craft: Bright Blood Garnet (#28595)", 11501027},
    {"Craft: Shadow Armor Kit (#29483)", 11501028},
    {"Craft: Flame Armor Kit (#29485)", 11501029},
    {"Craft: Frost Armor Kit (#29486)", 11501030},
    {"Craft: Nature Armor Kit (#29487)", 11501031},
    {"Craft: Arcane Armor Kit (#29488)", 11501032},
    {"Craft: Enchanted Felscale Leggings (#29489)", 11501033},
    {"Craft: Enchanted Felscale Gloves (#29490)", 11501034},
    {"Craft: Enchanted Felscale Boots (#29491)", 11501035},
    {"Craft: Flamescale Leggings (#29492)", 11501036},
    {"Craft: Flamescale Boots (#29493)", 11501037},
    {"Craft: Flamescale Belt (#29494)", 11501038},
    {"Craft: Enchanted Clefthoof Leggings (#29495)", 11501039},
    {"Craft: Enchanted Clefthoof Gloves (#29496)", 11501040},
    {"Craft: Enchanted Clefthoof Boots (#29497)", 11501041},
    {"Craft: Blastguard Pants (#29498)", 11501042},
    {"Craft: Blastguard Boots (#29499)", 11501043},
    {"Craft: Blastguard Belt (#29500)", 11501044},
    {"Craft: Cobrascale Hood (#29502)", 11501045},
    {"Craft: Cobrascale Gloves (#29503)", 11501046},
    {"Craft: Windscale Hood (#29504)", 11501047},
    {"Craft: Hood of Primal Life (#29505)", 11501048},
    {"Craft: Gloves of the Living Touch (#29506)", 11501049},
    {"Craft: Windslayer Wraps (#29507)", 11501050},
    {"Craft: Living Dragonscale Helm (#29508)", 11501051},
    {"Craft: Windstrike Gloves (#29509)", 11501052},
    {"Craft: Netherdrake Helm (#29510)", 11501053},
    {"Craft: Netherdrake Gloves (#29511)", 11501054},
    {"Craft: Earthen Netherscale Boots (#29512)", 11501055},
    {"Craft: Thick Netherscale Breastplate (#29514)", 11501056},
    {"Craft: Drums of Battle (#29529)", 11501057},
    {"Craft: Drums of Speed (#29530)", 11501058},
    {"Craft: Drums of Restoration (#29531)", 11501059},
    {"Craft: Drums of Panic (#29532)", 11501060},
    {"Craft: Cobrahide Leg Armor (#29533)", 11501061},
    {"Craft: Clefthide Leg Armor (#29534)", 11501062},
    {"Craft: Nethercobra Leg Armor (#29535)", 11501063},
    {"Craft: Nethercleft Leg Armor (#29536)", 11501064},
    {"Craft: Reinforced Mining Bag (#29540)", 11501065},
    {"Craft: Red Havoc Boots (#30031)", 11501066},
    {"Craft: Red Belt of Battle (#30032)", 11501067},
    {"Craft: Boots of the Protector (#30033)", 11501068},
    {"Craft: Belt of the Guardian (#30034)", 11501069},
    {"Craft: Boots of the Long Road (#30035)", 11501070},
    {"Craft: Belt of the Long Road (#30036)", 11501071},
    {"Craft: Boots of Blasting (#30037)", 11501072},
    {"Craft: Belt of Blasting (#30038)", 11501073},
    {"Craft: Boots of Utter Darkness (#30039)", 11501074},
    {"Craft: Belt of Deep Shadow (#30040)", 11501075},
    {"Craft: Boots of Natural Grace (#30041)", 11501076},
    {"Craft: Belt of Natural Power (#30042)", 11501077},
    {"Craft: Hurricane Boots (#30043)", 11501078},
    {"Craft: Monsoon Belt (#30044)", 11501079},
    {"Craft: Boots of the Crimson Hawk (#30045)", 11501080},
    {"Craft: Belt of the Black Eagle (#30046)", 11501081},
    {"Craft: Clam Bar (#30155)", 11501082},
    {"Craft: Conjured Mountain Spring Water (#30703)", 11501083},
    {"Craft: Ring of Arcane Shielding (#30825)", 11501084},
    {"Craft: Cloak of Arcane Evasion (#30831)", 11501085},
    {"Craft: Flameheart Bracers (#30837)", 11501086},
    {"Craft: Flameheart Gloves (#30838)", 11501087},
    {"Craft: Flameheart Vest (#30839)", 11501088},
    {"Craft: Wildguard Breastplate (#31364)", 11501089},
    {"Craft: Wildguard Leggings (#31367)", 11501090},
    {"Craft: Wildguard Helm (#31368)", 11501091},
    {"Craft: Iceguard Breastplate (#31369)", 11501092},
    {"Craft: Iceguard Leggings (#31370)", 11501093},
    {"Craft: Iceguard Helm (#31371)", 11501094},
    {"Craft: The Frozen Eye (#31398)", 11501095},
    {"Craft: The Natural Ward (#31399)", 11501096},
    {"Craft: Mok'Nathal Shortribs (#31672)", 11501097},
    {"Craft: Crunchy Serpent (#31673)", 11501098},
    {"Craft: Fel Regeneration Potion (#31676)", 11501099},
    {"Craft: Fel Mana Potion (#31677)", 11501100},
    {"Craft: Fel Strength Elixir (#31679)", 11501101},
    {"Craft: Great Golden Draenite (#31860)", 11501102},
    {"Craft: Great Dawnstone (#31861)", 11501103},
    {"Craft: Balanced Shadow Draenite (#31862)", 11501104},
    {"Craft: Balanced Nightseye (#31863)", 11501105},
    {"Craft: Infused Shadow Draenite (#31864)", 11501106},
    {"Craft: Infused Nightseye (#31865)", 11501107},
    {"Craft: Veiled Flame Spessarite (#31866)", 11501108},
    {"Craft: Veiled Noble Topaz (#31867)", 11501109},
    {"Craft: Wicked Noble Topaz (#31868)", 11501110},
    {"Craft: Wicked Flame Spessarite (#31869)", 11501111},
    {"Craft: Earthen Elixir (#32063)", 11501112},
    {"Craft: Elixir of Ironskin (#32068)", 11501113},
    {"Craft: Bold Crimson Spinel (#32193)", 11501114},
    {"Craft: Delicate Crimson Spinel (#32194)", 11501115},
    {"Craft: Teardrop Crimson Spinel (#32195)", 11501116},
    {"Craft: Runed Crimson Spinel (#32196)", 11501117},
    {"Craft: Bright Crimson Spinel (#32197)", 11501118},
    {"Craft: Subtle Crimson Spinel (#32198)", 11501119},
    {"Craft: Flashing Crimson Spinel (#32199)", 11501120},
    {"Craft: Solid Empyrean Sapphire (#32200)", 11501121},
    {"Craft: Sparkling Empyrean Sapphire (#32201)", 11501122},
    {"Craft: Lustrous Empyrean Sapphire (#32202)", 11501123},
    {"Craft: Stormy Empyrean Sapphire (#32203)", 11501124},
    {"Craft: Brilliant Lionseye (#32204)", 11501125},
    {"Craft: Smooth Lionseye (#32205)", 11501126},
    {"Craft: Rigid Lionseye (#32206)", 11501127},
    {"Craft: Gleaming Lionseye (#32207)", 11501128},
    {"Craft: Thick Lionseye (#32208)", 11501129},
    {"Craft: Mystic Lionseye (#32209)", 11501130},
    {"Craft: Great Lionseye (#32210)", 11501131},
    {"Craft: Sovereign Shadowsong Amethyst (#32211)", 11501132},
    {"Craft: Shifting Shadowsong Amethyst (#32212)", 11501133},
    {"Craft: Balanced Shadowsong Amethyst (#32213)", 11501134},
    {"Craft: Infused Shadowsong Amethyst (#32214)", 11501135},
    {"Craft: Glowing Shadowsong Amethyst (#32215)", 11501136},
    {"Craft: Royal Shadowsong Amethyst (#32216)", 11501137},
    {"Craft: Inscribed Pyrestone (#32217)", 11501138},
    {"Craft: Potent Pyrestone (#32218)", 11501139},
    {"Craft: Luminous Pyrestone (#32219)", 11501140},
    {"Craft: Glinting Pyrestone (#32220)", 11501141},
    {"Craft: Veiled Pyrestone (#32221)", 11501142},
    {"Craft: Wicked Pyrestone (#32222)", 11501143},
    {"Craft: Enduring Seaspray Emerald (#32223)", 11501144},
    {"Craft: Radiant Seaspray Emerald (#32224)", 11501145},
    {"Craft: Dazzling Seaspray Emerald (#32225)", 11501146},
    {"Craft: Jagged Seaspray Emerald (#32226)", 11501147},
    {"Craft: Soulguard Leggings (#32389)", 11501148},
    {"Craft: Soulguard Girdle (#32390)", 11501149},
    {"Craft: Soulguard Slippers (#32391)", 11501150},
    {"Craft: Soulguard Bracers (#32392)", 11501151},
    {"Craft: Redeemed Soul Cinch (#32393)", 11501152},
    {"Craft: Redeemed Soul Moccasins (#32394)", 11501153},
    {"Craft: Redeemed Soul Wristguards (#32395)", 11501154},
    {"Craft: Redeemed Soul Legguards (#32396)", 11501155},
    {"Craft: Waistguard of Shackled Souls (#32397)", 11501156},
    {"Craft: Boots of Shackled Souls (#32398)", 11501157},
    {"Craft: Bracers of Shackled Souls (#32399)", 11501158},
    {"Craft: Greaves of Shackled Souls (#32400)", 11501159},
    {"Craft: Shadesteel Girdle (#32401)", 11501160},
    {"Craft: Shadesteel Sabots (#32402)", 11501161},
    {"Craft: Shadesteel Bracers (#32403)", 11501162},
    {"Craft: Shadesteel Greaves (#32404)", 11501163},
    {"Craft: Relentless Earthstorm Diamond (#32409)", 11501164},
    {"Craft: Thundering Skyfire Diamond (#32410)", 11501165},
    {"Craft: Night's End (#32420)", 11501166},
    {"Craft: Swiftsteel Bracers (#32568)", 11501167},
    {"Craft: Swiftsteel Shoulders (#32570)", 11501168},
    {"Craft: Dawnsteel Bracers (#32571)", 11501169},
    {"Craft: Dawnsteel Shoulders (#32573)", 11501170},
    {"Craft: Bindings of Lightning Reflexes (#32574)", 11501171},
    {"Craft: Shoulders of Lightning Reflexes (#32575)", 11501172},
    {"Craft: Living Earth Bindings (#32577)", 11501173},
    {"Craft: Living Earth Shoulders (#32579)", 11501174},
    {"Craft: Swiftstrike Bracers (#32580)", 11501175},
    {"Craft: Swiftstrike Shoulders (#32581)", 11501176},
    {"Craft: Bracers of Renewed Life (#32582)", 11501177},
    {"Craft: Shoulderpads of Renewed Life (#32583)", 11501178},
    {"Craft: Swiftheal Wraps (#32584)", 11501179},
    {"Craft: Swiftheal Mantle (#32585)", 11501180},
    {"Craft: Bracers of Nimble Thought (#32586)", 11501181},
    {"Craft: Mantle of Nimble Thought (#32587)", 11501182},
    {"Craft: Hammer of Righteous Might (#32854)", 11501183},
    {"Craft: Healing Potion Injector (#33092)", 11501184},
    {"Craft: Mana Potion Injector (#33093)", 11501185},
    {"Craft: Cloak of Darkness (#33122)", 11501186},
    {"Craft: Crimson Sun (#33131)", 11501187},
    {"Craft: Don Julio's Heart (#33133)", 11501188},
    {"Craft: Kailee's Rose (#33134)", 11501189},
    {"Craft: Falling Star (#33135)", 11501190},
    {"Craft: Blood of Amber (#33140)", 11501191},
    {"Craft: Stone of Blades (#33143)", 11501192},
    {"Craft: Facet of Eternity (#33144)", 11501193},
    {"Craft: Ragesteel Shoulders (#33173)", 11501194},
    {"Craft: Adamantite Weapon Chain (#33185)", 11501195},
    {"Craft: Shadowprowler's Chestguard (#33204)", 11501196},
    {"Craft: Flask of Chromatic Wonder (#33208)", 11501197},
    {"Craft: Mana Sapphire (#33312)", 11501198},
    {"Craft: Steady Talasite (#33782)", 11501199},
    {"Craft: Heavy Copper Longsword (#33791)", 11501200},
    {"Craft: Skullfish Soup (#33825)", 11501201},
    {"Craft: Stormchops (#33866)", 11501202},
    {"Craft: Broiled Bloodfin (#33867)", 11501203},
    {"Craft: Spicy Hot Talbuk (#33872)", 11501204},
    {"Craft: Kibler's Bits (#33874)", 11501205},
    {"Craft: Delicious Chocolate Cake (#33924)", 11501206},
    {"Craft: Red Winter Clothes (#34085)", 11501207},
    {"Craft: Winter Boots (#34086)", 11501208},
    {"Craft: Green Winter Clothes (#34087)", 11501209},
    {"Craft: Quiver of a Thousand Feathers (#34105)", 11501210},
    {"Craft: Netherscale Ammo Pouch (#34106)", 11501211},
    {"Craft: Field Repair Bot 110G (#34113)", 11501212},
    {"Craft: Chaotic Skyfire Diamond (#34220)", 11501213},
    {"Craft: Quad Deathblow X44 Goggles (#34353)", 11501214},
    {"Craft: Mayhem Projection Goggles (#34354)", 11501215},
    {"Craft: Lightning Etched Specs (#34355)", 11501216},
    {"Craft: Surestrike Goggles v3.0 (#34356)", 11501217},
    {"Craft: Hard Khorium Goggles (#34357)", 11501218},
    {"Craft: Hard Khorium Choker (#34358)", 11501219},
    {"Craft: Pendant of Sunfire (#34359)", 11501220},
    {"Craft: Amulet of Flowing Life (#34360)", 11501221},
    {"Craft: Hard Khorium Band (#34361)", 11501222},
    {"Craft: Loop of Forged Power (#34362)", 11501223},
    {"Craft: Ring of Flowing Life (#34363)", 11501224},
    {"Craft: Sunfire Robe (#34364)", 11501225},
    {"Craft: Robe of Eternal Light (#34365)", 11501226},
    {"Craft: Sunfire Handwraps (#34366)", 11501227},
    {"Craft: Hands of Eternal Light (#34367)", 11501228},
    {"Craft: Carapace of Sun and Shadow (#34369)", 11501229},
    {"Craft: Gloves of Immortal Dusk (#34370)", 11501230},
    {"Craft: Leather Chestguard of the Sun (#34371)", 11501231},
    {"Craft: Leather Gauntlets of the Sun (#34372)", 11501232},
    {"Craft: Embrace of the Phoenix (#34373)", 11501233},
    {"Craft: Fletcher's Gloves of the Phoenix (#34374)", 11501234},
    {"Craft: Sun-Drenched Scale Chestguard (#34375)", 11501235},
    {"Craft: Sun-Drenched Scale Gloves (#34376)", 11501236},
    {"Craft: Hard Khorium Battleplate (#34377)", 11501237},
    {"Craft: Hard Khorium Battlefists (#34378)", 11501238},
    {"Craft: Sunblessed Breastplate (#34379)", 11501239},
    {"Craft: Sunblessed Gauntlets (#34380)", 11501240},
    {"Craft: Hot Apple Cider (#34411)", 11501241},
    {"Craft: Bag of Many Hides (#34490)", 11501242},
    {"Craft: Adamantite Shell Machine (#34504)", 11501243},
    {"Craft: Heavy Frostweave Bandage (#34722)", 11501244},
    {"Craft: Mega Mammoth Meal (#34754)", 11501245},
    {"Craft: Tender Shoveltusk Steak (#34755)", 11501246},
    {"Craft: Spiced Worm Burger (#34756)", 11501247},
    {"Craft: Very Burnt Worg (#34757)", 11501248},
    {"Craft: Mighty Rhino Dogs (#34758)", 11501249},
    {"Craft: Poached Northern Sculpin (#34766)", 11501250},
    {"Craft: Firecracker Salmon (#34767)", 11501251},
    {"Craft: Spicy Blue Nettlefish (#34768)", 11501252},
    {"Craft: Imperial Manta Steak (#34769)", 11501253},
    {"Craft: Captain Rumsey's Lager (#34832)", 11501254},
    {"Craft: Annihilator Holo-Gogs (#34847)", 11501255},
    {"Craft: Hardened Khorium (#35128)", 11501256},
    {"Craft: Powerheal 9000 Lens (#35181)", 11501257},
    {"Craft: Hyper-Magnified Moon Specs (#35182)", 11501258},
    {"Craft: Wonderheal XT68 Shades (#35183)", 11501259},
    {"Craft: Primal-Attuned Goggles (#35184)", 11501260},
    {"Craft: Justicebringer 3000 Specs (#35185)", 11501261},
    {"Craft: Quick Dawnstone (#35315)", 11501262},
    {"Craft: Reckless Noble Topaz (#35316)", 11501263},
    {"Craft: Forceful Talasite (#35318)", 11501264},
    {"Craft: Eternal Earthstorm Diamond (#35501)", 11501265},
    {"Craft: Ember Skyfire Diamond (#35503)", 11501266},
    {"Craft: Charred Bear Kabobs (#35563)", 11501267},
    {"Craft: Juicy Bear Burger (#35565)", 11501268},
    {"Craft: Rocket Boots Xtreme Lite (#35581)", 11501269},
    {"Craft: Figurine - Empyrean Tortoise (#35693)", 11501270},
    {"Craft: Figurine - Khorium Boar (#35694)", 11501271},
    {"Craft: Figurine - Crimson Serpent (#35700)", 11501272},
    {"Craft: Figurine - Shadowsong Panther (#35702)", 11501273},
    {"Craft: Figurine - Seaspray Albatross (#35703)", 11501274},
    {"Craft: Regal Nightseye (#35707)", 11501275},
    {"Craft: Guardian's Alchemist Stone (#35748)", 11501276},
    {"Craft: Sorcerer's Alchemist Stone (#35749)", 11501277},
    {"Craft: Redeemer's Alchemist Stone (#35750)", 11501278},
    {"Craft: Assassin's Alchemist Stone (#35751)", 11501279},
    {"Craft: Steady Seaspray Emerald (#35758)", 11501280},
    {"Craft: Forceful Seaspray Emerald (#35759)", 11501281},
    {"Craft: Reckless Pyrestone (#35760)", 11501282},
    {"Craft: Quick Lionseye (#35761)", 11501283},
    {"Craft: Bright Dragon's Eye (#36766)", 11501284},
    {"Craft: Solid Dragon's Eye (#36767)", 11501285},
    {"Craft: Demonic Soulstone (#36895)", 11501286},
    {"Craft: Purified Shadowsong Amethyst (#37503)", 11501287},
    {"Craft: Mycah's Botanical Bag (#38225)", 11501288},
    {"Craft: Haliscan Jacket (#38277)", 11501289},
    {"Craft: Haliscan Pantaloons (#38278)", 11501290},
    {"Craft: Mammoth Mining Bag (#38347)", 11501291},
    {"Craft: Trapper's Traveling Pack (#38399)", 11501292},
    {"Craft: Black Chitinguard Boots (#38590)", 11501293},
    {"Craft: Kungaloosh (#39520)", 11501294},
    {"Craft: Bold Scarlet Ruby (#39996)", 11501295},
    {"Craft: Delicate Scarlet Ruby (#39997)", 11501296},
    {"Craft: Runed Scarlet Ruby (#39998)", 11501297},
    {"Craft: Subtle Scarlet Ruby (#40000)", 11501298},
    {"Craft: Flashing Scarlet Ruby (#40001)", 11501299},
    {"Craft: Fractured Scarlet Ruby (#40002)", 11501300},
    {"Craft: Precise Scarlet Ruby (#40003)", 11501301},
    {"Craft: Solid Sky Sapphire (#40008)", 11501302},
    {"Craft: Lustrous Sky Sapphire (#40010)", 11501303},
    {"Craft: Stormy Sky Sapphire (#40011)", 11501304},
    {"Craft: Smooth Autumn's Glow (#40013)", 11501305},
    {"Craft: Rigid Autumn's Glow (#40014)", 11501306},
    {"Craft: Thick Autumn's Glow (#40015)", 11501307},
    {"Craft: Mystic Autumn's Glow (#40016)", 11501308},
    {"Craft: Quick Autumn's Glow (#40017)", 11501309},
    {"Craft: Sovereign Twilight Opal (#40022)", 11501310},
    {"Craft: Shifting Twilight Opal (#40023)", 11501311},
    {"Craft: Tenuous Twilight Opal (#40024)", 11501312},
    {"Craft: Glowing Twilight Opal (#40025)", 11501313},
    {"Craft: Purified Twilight Opal (#40026)", 11501314},
    {"Craft: Royal Twilight Opal (#40027)", 11501315},
    {"Craft: Mysterious Twilight Opal (#40028)", 11501316},
    {"Craft: Infused Twilight Opal (#40030)", 11501317},
    {"Craft: Regal Twilight Opal (#40031)", 11501318},
    {"Craft: Defender's Twilight Opal (#40032)", 11501319},
    {"Craft: Puissant Twilight Opal (#40033)", 11501320},
    {"Craft: Guardian's Twilight Opal (#40034)", 11501321},
    {"Craft: Inscribed Monarch Topaz (#40037)", 11501322},
    {"Craft: Etched Monarch Topaz (#40038)", 11501323},
    {"Craft: Champion's Monarch Topaz (#40039)", 11501324},
    {"Craft: Resplendent Monarch Topaz (#40040)", 11501325},
    {"Craft: Fierce Monarch Topaz (#40041)", 11501326},
    {"Craft: Deadly Monarch Topaz (#40043)", 11501327},
    {"Craft: Glinting Monarch Topaz (#40044)", 11501328},
    {"Craft: Lucent Monarch Topaz (#40045)", 11501329},
    {"Craft: Deft Monarch Topaz (#40046)", 11501330},
    {"Craft: Luminous Monarch Topaz (#40047)", 11501331},
    {"Craft: Potent Monarch Topaz (#40048)", 11501332},
    {"Craft: Veiled Monarch Topaz (#40049)", 11501333},
    {"Craft: Durable Monarch Topaz (#40050)", 11501334},
    {"Craft: Reckless Monarch Topaz (#40051)", 11501335},
    {"Craft: Wicked Monarch Topaz (#40052)", 11501336},
    {"Craft: Empowered Monarch Topaz (#40054)", 11501337},
    {"Craft: Stark Monarch Topaz (#40055)", 11501338},
    {"Craft: Stalwart Monarch Topaz (#40056)", 11501339},
    {"Craft: Glimmering Monarch Topaz (#40057)", 11501340},
    {"Craft: Accurate Monarch Topaz (#40058)", 11501341},
    {"Craft: Resolute Monarch Topaz (#40059)", 11501342},
    {"Craft: Timeless Forest Emerald (#40085)", 11501343},
    {"Craft: Jagged Forest Emerald (#40086)", 11501344},
    {"Craft: Vivid Forest Emerald (#40088)", 11501345},
    {"Craft: Enduring Forest Emerald (#40089)", 11501346},
    {"Craft: Steady Forest Emerald (#40090)", 11501347},
    {"Craft: Forceful Forest Emerald (#40091)", 11501348},
    {"Craft: Seer's Forest Emerald (#40092)", 11501349},
    {"Craft: Misty Forest Emerald (#40095)", 11501350},
    {"Craft: Sundered Forest Emerald (#40096)", 11501351},
    {"Craft: Radiant Forest Emerald (#40098)", 11501352},
    {"Craft: Shining Forest Emerald (#40099)", 11501353},
    {"Craft: Lambent Forest Emerald (#40100)", 11501354},
    {"Craft: Tense Forest Emerald (#40101)", 11501355},
    {"Craft: Turbid Forest Emerald (#40102)", 11501356},
    {"Craft: Opaque Forest Emerald (#40103)", 11501357},
    {"Craft: Intricate Forest Emerald (#40104)", 11501358},
    {"Craft: Energized Forest Emerald (#40105)", 11501359},
    {"Craft: Shattered Forest Emerald (#40106)", 11501360},
    {"Craft: Bold Cardinal Ruby (#40111)", 11501361},
    {"Craft: Delicate Cardinal Ruby (#40112)", 11501362},
    {"Craft: Runed Cardinal Ruby (#40113)", 11501363},
    {"Craft: Bright Cardinal Ruby (#40114)", 11501364},
    {"Craft: Subtle Cardinal Ruby (#40115)", 11501365},
    {"Craft: Flashing Cardinal Ruby (#40116)", 11501366},
    {"Craft: Fractured Cardinal Ruby (#40117)", 11501367},
    {"Craft: Precise Cardinal Ruby (#40118)", 11501368},
    {"Craft: Solid Majestic Zircon (#40119)", 11501369},
    {"Craft: Sparkling Majestic Zircon (#40120)", 11501370},
    {"Craft: Lustrous Majestic Zircon (#40121)", 11501371},
    {"Craft: Stormy Majestic Zircon (#40122)", 11501372},
    {"Craft: Brilliant King's Amber (#40123)", 11501373},
    {"Craft: Smooth King's Amber (#40124)", 11501374},
    {"Craft: Rigid King's Amber (#40125)", 11501375},
    {"Craft: Thick King's Amber (#40126)", 11501376},
    {"Craft: Mystic King's Amber (#40127)", 11501377},
    {"Craft: Quick King's Amber (#40128)", 11501378},
    {"Craft: Sovereign Dreadstone (#40129)", 11501379},
    {"Craft: Shifting Dreadstone (#40130)", 11501380},
    {"Craft: Tenuous Dreadstone (#40131)", 11501381},
    {"Craft: Glowing Dreadstone (#40132)", 11501382},
    {"Craft: Purified Dreadstone (#40133)", 11501383},
    {"Craft: Royal Dreadstone (#40134)", 11501384},
    {"Craft: Mysterious Dreadstone (#40135)", 11501385},
    {"Craft: Balanced Dreadstone (#40136)", 11501386},
    {"Craft: Infused Dreadstone (#40137)", 11501387},
    {"Craft: Regal Dreadstone (#40138)", 11501388},
    {"Craft: Defender's Dreadstone (#40139)", 11501389},
    {"Craft: Puissant Dreadstone (#40140)", 11501390},
    {"Craft: Guardian's Dreadstone (#40141)", 11501391},
    {"Craft: Inscribed Ametrine (#40142)", 11501392},
    {"Craft: Etched Ametrine (#40143)", 11501393},
    {"Craft: Champion's Ametrine (#40144)", 11501394},
    {"Craft: Resplendent Ametrine (#40145)", 11501395},
    {"Craft: Fierce Ametrine (#40146)", 11501396},
    {"Craft: Deadly Ametrine (#40147)", 11501397},
    {"Craft: Glinting Ametrine (#40148)", 11501398},
    {"Craft: Lucent Ametrine (#40149)", 11501399},
    {"Craft: Deft Ametrine (#40150)", 11501400},
    {"Craft: Luminous Ametrine (#40151)", 11501401},
    {"Craft: Potent Ametrine (#40152)", 11501402},
    {"Craft: Veiled Ametrine (#40153)", 11501403},
    {"Craft: Durable Ametrine (#40154)", 11501404},
    {"Craft: Reckless Ametrine (#40155)", 11501405},
    {"Craft: Wicked Ametrine (#40156)", 11501406},
    {"Craft: Pristine Ametrine (#40157)", 11501407},
    {"Craft: Empowered Ametrine (#40158)", 11501408},
    {"Craft: Stark Ametrine (#40159)", 11501409},
    {"Craft: Stalwart Ametrine (#40160)", 11501410},
    {"Craft: Glimmering Ametrine (#40161)", 11501411},
    {"Craft: Accurate Ametrine (#40162)", 11501412},
    {"Craft: Resolute Ametrine (#40163)", 11501413},
    {"Craft: Timeless Eye of Zul (#40164)", 11501414},
    {"Craft: Jagged Eye of Zul (#40165)", 11501415},
    {"Craft: Vivid Eye of Zul (#40166)", 11501416},
    {"Craft: Enduring Eye of Zul (#40167)", 11501417},
    {"Craft: Steady Eye of Zul (#40168)", 11501418},
    {"Craft: Forceful Eye of Zul (#40169)", 11501419},
    {"Craft: Seer's Eye of Zul (#40170)", 11501420},
    {"Craft: Misty Eye of Zul (#40171)", 11501421},
    {"Craft: Shining Eye of Zul (#40172)", 11501422},
    {"Craft: Turbid Eye of Zul (#40173)", 11501423},
    {"Craft: Intricate Eye of Zul (#40174)", 11501424},
    {"Craft: Dazzling Eye of Zul (#40175)", 11501425},
    {"Craft: Sundered Eye of Zul (#40176)", 11501426},
    {"Craft: Lambent Eye of Zul (#40177)", 11501427},
    {"Craft: Opaque Eye of Zul (#40178)", 11501428},
    {"Craft: Energized Eye of Zul (#40179)", 11501429},
    {"Craft: Radiant Eye of Zul (#40180)", 11501430},
    {"Craft: Tense Eye of Zul (#40181)", 11501431},
    {"Craft: Shattered Eye of Zul (#40182)", 11501432},
    {"Craft: Mighty Arcane Protection Potion (#40213)", 11501433},
    {"Craft: Mighty Fire Protection Potion (#40214)", 11501434},
    {"Craft: Mighty Frost Protection Potion (#40215)", 11501435},
    {"Craft: Mighty Nature Protection Potion (#40216)", 11501436},
    {"Craft: Mighty Shadow Protection Potion (#40217)", 11501437},
    {"Craft: Master Firestone (#40773)", 11501438},
    {"Craft: Reinforced Cobalt Shoulders (#40956)", 11501439},
    {"Craft: Reinforced Cobalt Helm (#40957)", 11501440},
    {"Craft: Reinforced Cobalt Legplates (#40958)", 11501441},
    {"Craft: Reinforced Cobalt Chestpiece (#40959)", 11501442},
    {"Craft: Firestone (#41169)", 11501443},
    {"Craft: Lesser Firestone (#41170)", 11501444},
    {"Craft: Greater Firestone (#41171)", 11501445},
    {"Craft: Major Firestone (#41172)", 11501446},
    {"Craft: Fel Firestone (#41173)", 11501447},
    {"Craft: Grand Firestone (#41174)", 11501448},
    {"Craft: Spellstone (#41191)", 11501449},
    {"Craft: Greater Spellstone (#41192)", 11501450},
    {"Craft: Major Spellstone (#41193)", 11501451},
    {"Craft: Master Spellstone (#41194)", 11501452},
    {"Craft: Demonic Spellstone (#41195)", 11501453},
    {"Craft: Grand Spellstone (#41196)", 11501454},
    {"Craft: Red Lumberjack Shirt (#41248)", 11501455},
    {"Craft: Blue Lumberjack Shirt (#41249)", 11501456},
    {"Craft: Green Lumberjack Shirt (#41250)", 11501457},
    {"Craft: Yellow Lumberjack Shirt (#41251)", 11501458},
    {"Craft: Red Workman's Shirt (#41252)", 11501459},
    {"Craft: Blue Workman's Shirt (#41253)", 11501460},
    {"Craft: Rustic Workman's Shirt (#41254)", 11501461},
    {"Craft: Green Workman's Shirt (#41255)", 11501462},
    {"Craft: Chaotic Skyflare Diamond (#41285)", 11501463},
    {"Craft: Destructive Skyflare Diamond (#41307)", 11501464},
    {"Craft: Ember Skyflare Diamond (#41333)", 11501465},
    {"Craft: Enigmatic Skyflare Diamond (#41335)", 11501466},
    {"Craft: Swift Skyflare Diamond (#41339)", 11501467},
    {"Craft: Tireless Skyflare Diamond (#41375)", 11501468},
    {"Craft: Revitalizing Skyflare Diamond (#41376)", 11501469},
    {"Craft: Effulgent Skyflare Diamond (#41377)", 11501470},
    {"Craft: Forlorn Skyflare Diamond (#41378)", 11501471},
    {"Craft: Impassive Skyflare Diamond (#41379)", 11501472},
    {"Craft: Austere Earthsiege Diamond (#41380)", 11501473},
    {"Craft: Persistent Earthsiege Diamond (#41381)", 11501474},
    {"Craft: Trenchant Earthsiege Diamond (#41382)", 11501475},
    {"Craft: Invigorating Earthsiege Diamond (#41385)", 11501476},
    {"Craft: Beaming Earthsiege Diamond (#41389)", 11501477},
    {"Craft: Bracing Earthsiege Diamond (#41395)", 11501478},
    {"Craft: Eternal Earthsiege Diamond (#41396)", 11501479},
    {"Craft: Powerful Earthsiege Diamond (#41397)", 11501480},
    {"Craft: Relentless Earthsiege Diamond (#41398)", 11501481},
    {"Craft: Thundering Skyflare Diamond (#41400)", 11501482},
    {"Craft: Insightful Earthsiege Diamond (#41401)", 11501483},
    {"Craft: Mechano-hog (#41508)", 11501484},
    {"Craft: Ebonweave (#41593)", 11501485},
    {"Craft: Moonshroud (#41594)", 11501486},
    {"Craft: Spellweave (#41595)", 11501487},
    {"Craft: Abyssal Bag (#41597)", 11501488},
    {"Craft: Mysterious Bag (#41598)", 11501489},
    {"Craft: Frostweave Bag (#41599)", 11501490},
    {"Craft: Glacial Bag (#41600)", 11501491},
    {"Craft: Brilliant Spellthread (#41602)", 11501492},
    {"Craft: Sapphire Spellthread (#41604)", 11501493},
    {"Craft: Wispcloak (#41609)", 11501494},
    {"Craft: Deathchill Cloak (#41610)", 11501495},
    {"Craft: Hat of Wintry Doom (#41984)", 11501496},
    {"Craft: Silky Iceshard Boots (#41985)", 11501497},
    {"Craft: Deep Frozen Cord (#41986)", 11501498},
    {"Craft: Frostmoon Pants (#42093)", 11501499},
    {"Craft: Light Blessed Mittens (#42095)", 11501500},
    {"Craft: Aurora Slippers (#42096)", 11501501},
    {"Craft: Moonshroud Robe (#42100)", 11501502},
    {"Craft: Ebonweave Robe (#42101)", 11501503},
    {"Craft: Spellweave Robe (#42102)", 11501504},
    {"Craft: Moonshroud Gloves (#42103)", 11501505},
    {"Craft: Ebonweave Gloves (#42111)", 11501506},
    {"Craft: Spellweave Gloves (#42113)", 11501507},
    {"Craft: Bold Dragon's Eye (#42142)", 11501508},
    {"Craft: Delicate Dragon's Eye (#42143)", 11501509},
    {"Craft: Runed Dragon's Eye (#42144)", 11501510},
    {"Craft: Sparkling Dragon's Eye (#42145)", 11501511},
    {"Craft: Lustrous Dragon's Eye (#42146)", 11501512},
    {"Craft: Brilliant Dragon's Eye (#42148)", 11501513},
    {"Craft: Smooth Dragon's Eye (#42149)", 11501514},
    {"Craft: Quick Dragon's Eye (#42150)", 11501515},
    {"Craft: Subtle Dragon's Eye (#42151)", 11501516},
    {"Craft: Flashing Dragon's Eye (#42152)", 11501517},
    {"Craft: Fractured Dragon's Eye (#42153)", 11501518},
    {"Craft: Precise Dragon's Eye (#42154)", 11501519},
    {"Craft: Stormy Dragon's Eye (#42155)", 11501520},
    {"Craft: Rigid Dragon's Eye (#42156)", 11501521},
    {"Craft: Thick Dragon's Eye (#42157)", 11501522},
    {"Craft: Mystic Dragon's Eye (#42158)", 11501523},
    {"Craft: Titanium Impact Band (#42642)", 11501524},
    {"Craft: Titanium Earthguard Ring (#42643)", 11501525},
    {"Craft: Titanium Spellshock Ring (#42644)", 11501526},
    {"Craft: Titanium Impact Choker (#42645)", 11501527},
    {"Craft: Titanium Earthguard Chain (#42646)", 11501528},
    {"Craft: Titanium Spellshock Necklace (#42647)", 11501529},
    {"Craft: Spicy Fried Herring (#42993)", 11501530},
    {"Craft: Rhinolicious Wormsteak (#42994)", 11501531},
    {"Craft: Hearty Rhino (#42995)", 11501532},
    {"Craft: Snapper Extreme (#42996)", 11501533},
    {"Craft: Blackened Worg Steak (#42997)", 11501534},
    {"Craft: Cuttlesteak (#42998)", 11501535},
    {"Craft: Blackened Dragonfin (#42999)", 11501536},
    {"Craft: Dragonfin Filet (#43000)", 11501537},
    {"Craft: Tracker Snacks (#43001)", 11501538},
    {"Craft: Critter Bites (#43004)", 11501539},
    {"Craft: Spiced Mammoth Treats (#43005)", 11501540},
    {"Craft: Fish Feast (#43015)", 11501541},
    {"Craft: Ring of Earthen Might (#43250)", 11501542},
    {"Craft: Ring of Scarlet Shadows (#43251)", 11501543},
    {"Craft: Windfire Band (#43252)", 11501544},
    {"Craft: Ring of Northern Tears (#43253)", 11501545},
    {"Craft: Eviscerator's Facemask (#43260)", 11501546},
    {"Craft: Overcast Headguard (#43261)", 11501547},
    {"Craft: Overcast Spaulders (#43262)", 11501548},
    {"Craft: Overcast Chestguard (#43263)", 11501549},
    {"Craft: Overcast Bracers (#43264)", 11501550},
    {"Craft: Overcast Handwraps (#43265)", 11501551},
    {"Craft: Overcast Belt (#43266)", 11501552},
    {"Craft: Overcast Leggings (#43271)", 11501553},
    {"Craft: Overcast Boots (#43273)", 11501554},
    {"Craft: Eviscerator's Shoulderpads (#43433)", 11501555},
    {"Craft: Eviscerator's Chestguard (#43434)", 11501556},
    {"Craft: Eviscerator's Bindings (#43435)", 11501557},
    {"Craft: Eviscerator's Gauntlets (#43436)", 11501558},
    {"Craft: Eviscerator's Waistguard (#43437)", 11501559},
    {"Craft: Eviscerator's Legguards (#43438)", 11501560},
    {"Craft: Eviscerator's Treads (#43439)", 11501561},
    {"Craft: Swiftarrow Belt (#43442)", 11501562},
    {"Craft: Swiftarrow Boots (#43443)", 11501563},
    {"Craft: Swiftarrow Bracers (#43444)", 11501564},
    {"Craft: Swiftarrow Hauberk (#43445)", 11501565},
    {"Craft: Swiftarrow Gauntlets (#43446)", 11501566},
    {"Craft: Swiftarrow Helm (#43447)", 11501567},
    {"Craft: Swiftarrow Leggings (#43448)", 11501568},
    {"Craft: Swiftarrow Shoulderguards (#43449)", 11501569},
    {"Craft: Stormhide Belt (#43450)", 11501570},
    {"Craft: Stormhide Stompers (#43451)", 11501571},
    {"Craft: Stormhide Wristguards (#43452)", 11501572},
    {"Craft: Stormhide Hauberk (#43453)", 11501573},
    {"Craft: Stormhide Grips (#43454)", 11501574},
    {"Craft: Stormhide Crown (#43455)", 11501575},
    {"Craft: Stormhide Legguards (#43456)", 11501576},
    {"Craft: Stormhide Shoulders (#43457)", 11501577},
    {"Craft: Giantmaim Legguards (#43458)", 11501578},
    {"Craft: Giantmaim Bracers (#43459)", 11501579},
    {"Craft: Revenant's Breastplate (#43461)", 11501580},
    {"Craft: Revenant's Treads (#43469)", 11501581},
    {"Craft: Gigantic Feast (#43478)", 11501582},
    {"Craft: Small Feast (#43480)", 11501583},
    {"Craft: Trollwoven Spaulders (#43481)", 11501584},
    {"Craft: Savage Titanium Ring (#43482)", 11501585},
    {"Craft: Trollwoven Girdle (#43484)", 11501586},
    {"Craft: Last Weeks Mammoth (#43488)", 11501587},
    {"Craft: Tasty Cupcake (#43490)", 11501588},
    {"Craft: Bad Clams (#43491)", 11501589},
    {"Craft: Haunted Herring (#43492)", 11501590},
    {"Craft: Earthgiving Legguards (#43495)", 11501591},
    {"Craft: Savage Titanium Band (#43498)", 11501592},
    {"Craft: Earthgiving Boots (#43502)", 11501593},
    {"Craft: Conjured Mana Pie (#43518)", 11501594},
    {"Craft: Conjured Mana Strudel (#43523)", 11501595},
    {"Craft: Titanium Frostguard Ring (#43582)", 11501596},
    {"Craft: Polar Vest (#43590)", 11501597},
    {"Craft: Polar Cord (#43591)", 11501598},
    {"Craft: Polar Boots (#43592)", 11501599},
    {"Craft: Icy Scale Chestguard (#43593)", 11501600},
    {"Craft: Icy Scale Belt (#43594)", 11501601},
    {"Craft: Icy Scale Boots (#43595)", 11501602},
    {"Craft: Mekgineer's Chopper (#44413)", 11501603},
    {"Craft: Dragonscale Ammo Pouch (#44447)", 11501604},
    {"Craft: Nerubian Reinforced Quiver (#44448)", 11501605},
    {"Craft: Pumpkin Pie (#44836)", 11501606},
    {"Craft: Spice Bread Stuffing (#44837)", 11501607},
    {"Craft: Slow-Roasted Turkey (#44838)", 11501608},
    {"Craft: Candied Sweet Potato (#44839)", 11501609},
    {"Craft: Cranberry Chutney (#44840)", 11501610},
    {"Craft: Windripper Boots (#44930)", 11501611},
    {"Craft: Windripper Leggings (#44931)", 11501612},
    {"Craft: Titanium Plating (#44936)", 11501613},
    {"Craft: Worg Tartare (#44953)", 11501614},
    {"Craft: Belt of the Titans (#45550)", 11501615},
    {"Craft: Indestructible Plate Girdle (#45551)", 11501616},
    {"Craft: Plate Girdle of Righteousness (#45552)", 11501617},
    {"Craft: Belt of Dragons (#45553)", 11501618},
    {"Craft: Blue Belt of Chaos (#45554)", 11501619},
    {"Craft: Death-warmed Belt (#45555)", 11501620},
    {"Craft: Belt of Arctic Life (#45556)", 11501621},
    {"Craft: Sash of Ancient Power (#45557)", 11501622},
    {"Craft: Cord of the White Dawn (#45558)", 11501623},
    {"Craft: Battlelord's Plate Boots (#45559)", 11501624},
    {"Craft: Spiked Deathdealers (#45560)", 11501625},
    {"Craft: Treads of Destiny (#45561)", 11501626},
    {"Craft: Boots of Living Scale (#45562)", 11501627},
    {"Craft: Lightning Grounded Boots (#45563)", 11501628},
    {"Craft: Footpads of Silence (#45564)", 11501629},
    {"Craft: Boots of Wintry Endurance (#45565)", 11501630},
    {"Craft: Spellslinger's Slippers (#45566)", 11501631},
    {"Craft: Savior's Slippers (#45567)", 11501632},
    {"Craft: Emerald Bag (#45773)", 11501633},
    {"Craft: Bread of the Dead (#46691)", 11501634},
    {"Craft: Flask of the North (#47499)", 11501635},
    {"Craft: Saronite Swordbreakers (#47570)", 11501636},
    {"Craft: Saronite Swordbreakers (#47571)", 11501637},
    {"Craft: Titanium Spikeguards (#47572)", 11501638},
    {"Craft: Titanium Spikeguards (#47573)", 11501639},
    {"Craft: Sunforged Bracers (#47574)", 11501640},
    {"Craft: Sunforged Bracers (#47575)", 11501641},
    {"Craft: Crusader's Dragonscale Bracers (#47576)", 11501642},
    {"Craft: Crusader's Dragonscale Bracers (#47577)", 11501643},
    {"Craft: Black Chitin Bracers (#47579)", 11501644},
    {"Craft: Black Chitin Bracers (#47580)", 11501645},
    {"Craft: Bracers of Swift Death (#47581)", 11501646},
    {"Craft: Bracers of Swift Death (#47582)", 11501647},
    {"Craft: Moonshadow Armguards (#47583)", 11501648},
    {"Craft: Moonshadow Armguards (#47584)", 11501649},
    {"Craft: Bejeweled Wizard's Bracers (#47585)", 11501650},
    {"Craft: Bejeweled Wizard's Bracers (#47586)", 11501651},
    {"Craft: Royal Moonshroud Bracers (#47587)", 11501652},
    {"Craft: Royal Moonshroud Bracers (#47588)", 11501653},
    {"Craft: Titanium Razorplate (#47589)", 11501654},
    {"Craft: Titanium Razorplate (#47590)", 11501655},
    {"Craft: Breastplate of the White Knight (#47591)", 11501656},
    {"Craft: Breastplate of the White Knight (#47592)", 11501657},
    {"Craft: Sunforged Breastplate (#47593)", 11501658},
    {"Craft: Sunforged Breastplate (#47594)", 11501659},
    {"Craft: Crusader's Dragonscale Breastplate (#47595)", 11501660},
    {"Craft: Crusader's Dragonscale Breastplate (#47596)", 11501661},
    {"Craft: Ensorcelled Nerubian Breastplate (#47597)", 11501662},
    {"Craft: Ensorcelled Nerubian Breastplate (#47598)", 11501663},
    {"Craft: Knightbane Carapace (#47599)", 11501664},
    {"Craft: Knightbane Carapace (#47600)", 11501665},
    {"Craft: Lunar Eclipse Robes (#47601)", 11501666},
    {"Craft: Lunar Eclipse Robes (#47602)", 11501667},
    {"Craft: Merlin's Robe (#47603)", 11501668},
    {"Craft: Merlin's Robe (#47604)", 11501669},
    {"Craft: Royal Moonshroud Robe (#47605)", 11501670},
    {"Craft: Royal Moonshroud Robe (#47606)", 11501671},
    {"Craft: Jeeves (#49040)", 11501672},
    {"Craft: Nightmare Tear (#49110)", 11501673},
    {"Craft: Deathfrost Boots (#49890)", 11501674},
    {"Craft: Leggings of Woven Death (#49891)", 11501675},
    {"Craft: Lightweave Leggings (#49892)", 11501676},
    {"Craft: Sandals of Consecration (#49893)", 11501677},
    {"Craft: Blessed Cenarion Boots (#49894)", 11501678},
    {"Craft: Footpads of Impending Death (#49895)", 11501679},
    {"Craft: Earthsoul Boots (#49896)", 11501680},
    {"Craft: Rock-Steady Treads (#49897)", 11501681},
    {"Craft: Legwraps of Unleashed Nature (#49898)", 11501682},
    {"Craft: Bladeborn Leggings (#49899)", 11501683},
    {"Craft: Lightning-Infused Leggings (#49900)", 11501684},
    {"Craft: Draconic Bonesplinter Legguards (#49901)", 11501685},
    {"Craft: Puresteel Legplates (#49902)", 11501686},
    {"Craft: Legplates of Painful Death (#49903)", 11501687},
    {"Craft: Pillars of Might (#49904)", 11501688},
    {"Craft: Protectors of Life (#49905)", 11501689},
    {"Craft: Hellfrozen Bonegrinders (#49906)", 11501690},
    {"Craft: Boots of Kingly Upheaval (#49907)", 11501691},
    {"Craft: Glyph of Eternal Water (#50045)", 11501692},
    {"Craft: Glyph of Quick Decay (#50077)", 11501693},
    {"Craft: Glyph of Rapid Rejuvenation (#50125)", 11501694},
    {"Craft: Shatter Rounds (#52020)", 11501695},
    {"Craft: Iceblade Arrow (#52021)", 11501696},
    {"Craft: Frosty Flying Carpet (#54797)", 11501697},
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
    {"Craftsanity Item: Goretusk Liver Pie (#724)", 11750000},
    {"Craftsanity Item: Westfall Stew (#733)", 11750001},
    {"Craftsanity Item: Slitherskin Mackerel (#787)", 11750002},
    {"Craftsanity Item: Seasoned Wolf Kabob (#1017)", 11750003},
    {"Craftsanity Item: Redridge Goulash (#1082)", 11750004},
    {"Craftsanity Item: Conjured Bread (#1113)", 11750005},
    {"Craftsanity Item: Conjured Rye (#1114)", 11750006},
    {"Craftsanity Item: Conjured Pumpernickel (#1487)", 11750007},
    {"Craftsanity Item: Conjured Purified Water (#2136)", 11750008},
    {"Craftsanity Item: Conjured Fresh Water (#2288)", 11750009},
    {"Craftsanity Item: Fine Leather Boots (#2307)", 11750010},
    {"Craftsanity Item: White Leather Jerkin (#2311)", 11750011},
    {"Craftsanity Item: Fine Leather Gloves (#2312)", 11750012},
    {"Craftsanity Item: Dark Leather Tunic (#2317)", 11750013},
    {"Craftsanity Item: Elixir of Minor Agility (#2457)", 11750014},
    {"Craftsanity Item: Swiftness Potion (#2459)", 11750015},
    {"Craftsanity Item: Red Linen Robe (#2572)", 11750016},
    {"Craftsanity Item: Gray Woolen Robe (#2585)", 11750017},
    {"Craftsanity Item: Cooked Crab Claw (#2682)", 11750018},
    {"Craftsanity Item: Succulent Pork Ribs (#2685)", 11750019},
    {"Craftsanity Item: Runed Copper Breastplate (#2864)", 11750020},
    {"Craftsanity Item: Silvered Bronze Breastplate (#2869)", 11750021},
    {"Craftsanity Item: Beer Basted Boar Ribs (#2888)", 11750022},
    {"Craftsanity Item: Blood Sausage (#3220)", 11750023},
    {"Craftsanity Item: Minor Magic Resistance Potion (#3384)", 11750024},
    {"Craftsanity Item: Potion of Curing (#3386)", 11750025},
    {"Craftsanity Item: Limited Invulnerability Potion (#3387)", 11750026},
    {"Craftsanity Item: Elixir of Lesser Agility (#3390)", 11750027},
    {"Craftsanity Item: Elixir of Ogre's Strength (#3391)", 11750028},
    {"Craftsanity Item: Copper Chain Vest (#3471)", 11750029},
    {"Craftsanity Item: Gemmed Copper Gauntlets (#3474)", 11750030},
    {"Craftsanity Item: Silvered Bronze Shoulders (#3481)", 11750031},
    {"Craftsanity Item: Green Iron Boots (#3484)", 11750032},
    {"Craftsanity Item: Green Iron Gauntlets (#3485)", 11750033},
    {"Craftsanity Item: Deadly Bronze Poniard (#3490)", 11750034},
    {"Craftsanity Item: Mighty Iron Hammer (#3492)", 11750035},
    {"Craftsanity Item: Gold Bar (#3577)", 11750036},
    {"Craftsanity Item: Crocolisk Steak (#3662)", 11750037},
    {"Craftsanity Item: Murloc Fin Soup (#3663)", 11750038},
    {"Craftsanity Item: Crocolisk Gumbo (#3664)", 11750039},
    {"Craftsanity Item: Curiously Tasty Omelet (#3665)", 11750040},
    {"Craftsanity Item: Gooey Spider Cake (#3666)", 11750041},
    {"Craftsanity Item: Big Bear Steak (#3726)", 11750042},
    {"Craftsanity Item: Hot Lion Chops (#3727)", 11750043},
    {"Craftsanity Item: Tasty Lion Steak (#3728)", 11750044},
    {"Craftsanity Item: Soothing Turtle Bisque (#3729)", 11750045},
    {"Craftsanity Item: Conjured Spring Water (#3772)", 11750046},
    {"Craftsanity Item: Shadow Oil (#3824)", 11750047},
    {"Craftsanity Item: Elixir of Fortitude (#3825)", 11750048},
    {"Craftsanity Item: Major Troll's Blood Elixir (#3826)", 11750049},
    {"Craftsanity Item: Elixir of Detect Lesser Invisibility (#3828)", 11750050},
    {"Craftsanity Item: Frost Oil (#3829)", 11750051},
    {"Craftsanity Item: Golden Scale Coif (#3837)", 11750052},
    {"Craftsanity Item: Green Iron Shoulders (#3840)", 11750053},
    {"Craftsanity Item: Golden Scale Shoulders (#3841)", 11750054},
    {"Craftsanity Item: Golden Scale Leggings (#3843)", 11750055},
    {"Craftsanity Item: Golden Scale Cuirass (#3845)", 11750056},
    {"Craftsanity Item: Polished Steel Boots (#3846)", 11750057},
    {"Craftsanity Item: Golden Scale Boots (#3847)", 11750058},
    {"Craftsanity Item: Hardened Iron Shortsword (#3849)", 11750059},
    {"Craftsanity Item: Jade Serpentblade (#3850)", 11750060},
    {"Craftsanity Item: Solid Iron Maul (#3851)", 11750061},
    {"Craftsanity Item: Golden Iron Destroyer (#3852)", 11750062},
    {"Craftsanity Item: Moonsteel Broadsword (#3853)", 11750063},
    {"Craftsanity Item: Frost Tiger Blade (#3854)", 11750064},
    {"Craftsanity Item: Massive Iron Axe (#3855)", 11750065},
    {"Craftsanity Item: Shadow Crescent Axe (#3856)", 11750066},
    {"Craftsanity Item: Green Woolen Bag (#4241)", 11750067},
    {"Craftsanity Item: Hillman's Leather Vest (#4244)", 11750068},
    {"Craftsanity Item: Dark Leather Gloves (#4248)", 11750069},
    {"Craftsanity Item: Hillman's Belt (#4250)", 11750070},
    {"Craftsanity Item: Dark Leather Shoulders (#4252)", 11750071},
    {"Craftsanity Item: Barbaric Gloves (#4254)", 11750072},
    {"Craftsanity Item: Green Leather Armor (#4255)", 11750073},
    {"Craftsanity Item: Guardian Armor (#4256)", 11750074},
    {"Craftsanity Item: Guardian Belt (#4258)", 11750075},
    {"Craftsanity Item: Guardian Leather Bracers (#4260)", 11750076},
    {"Craftsanity Item: Gem-studded Leather Belt (#4262)", 11750077},
    {"Craftsanity Item: Barbaric Belt (#4264)", 11750078},
    {"Craftsanity Item: Heavy Woolen Cloak (#4311)", 11750079},
    {"Craftsanity Item: Red Woolen Boots (#4313)", 11750080},
    {"Craftsanity Item: Reinforced Woolen Shoulders (#4315)", 11750081},
    {"Craftsanity Item: Phoenix Pants (#4317)", 11750082},
    {"Craftsanity Item: Azure Silk Gloves (#4319)", 11750083},
    {"Craftsanity Item: Spider Silk Slippers (#4321)", 11750084},
    {"Craftsanity Item: Enchanter's Cowl (#4322)", 11750085},
    {"Craftsanity Item: Shadow Hood (#4323)", 11750086},
    {"Craftsanity Item: Boots of the Enchanter (#4325)", 11750087},
    {"Craftsanity Item: Icy Cloak (#4327)", 11750088},
    {"Craftsanity Item: Spider Belt (#4328)", 11750089},
    {"Craftsanity Item: Star Belt (#4329)", 11750090},
    {"Craftsanity Item: Phoenix Gloves (#4331)", 11750091},
    {"Craftsanity Item: Bright Yellow Shirt (#4332)", 11750092},
    {"Craftsanity Item: Dark Silk Shirt (#4333)", 11750093},
    {"Craftsanity Item: Rich Purple Silk Shirt (#4335)", 11750094},
    {"Craftsanity Item: Black Swashbuckler's Shirt (#4336)", 11750095},
    {"Craftsanity Item: Small Seaforium Charge (#4367)", 11750096},
    {"Craftsanity Item: Lovingly Crafted Boomstick (#4372)", 11750097},
    {"Craftsanity Item: Shadow Goggles (#4373)", 11750098},
    {"Craftsanity Item: Flame Deflector (#4376)", 11750099},
    {"Craftsanity Item: Minor Recombobulator (#4381)", 11750100},
    {"Craftsanity Item: Moonsight Rifle (#4383)", 11750101},
    {"Craftsanity Item: Ice Deflector (#4386)", 11750102},
    {"Craftsanity Item: Discombobulator Ray (#4388)", 11750103},
    {"Craftsanity Item: Craftsman's Monocle (#4393)", 11750104},
    {"Craftsanity Item: Goblin Land Mine (#4395)", 11750105},
    {"Craftsanity Item: Mechanical Dragonling (#4396)", 11750106},
    {"Craftsanity Item: Gnomish Cloaking Device (#4397)", 11750107},
    {"Craftsanity Item: Large Seaforium Charge (#4398)", 11750108},
    {"Craftsanity Item: Mechanical Squirrel Box (#4401)", 11750109},
    {"Craftsanity Item: Portable Bronze Mortar (#4403)", 11750110},
    {"Craftsanity Item: Accurate Scope (#4407)", 11750111},
    {"Craftsanity Item: Raptor Hide Harness (#4455)", 11750112},
    {"Craftsanity Item: Raptor Hide Belt (#4456)", 11750113},
    {"Craftsanity Item: Barbecued Buzzard Wing (#4457)", 11750114},
    {"Craftsanity Item: Longjaw Mud Snapper (#4592)", 11750115},
    {"Craftsanity Item: Bristle Whisker Catfish (#4593)", 11750116},
    {"Craftsanity Item: Rockscale Cod (#4594)", 11750117},
    {"Craftsanity Item: Discolored Healing Potion (#4596)", 11750118},
    {"Craftsanity Item: Lesser Stoneshield Potion (#4623)", 11750119},
    {"Craftsanity Item: Flash Bomb (#4852)", 11750120},
    {"Craftsanity Item: Kodo Hide Bag (#5081)", 11750121},
    {"Craftsanity Item: Rainbow Fin Albacore (#5095)", 11750122},
    {"Craftsanity Item: Minor Soulstone (#5232)", 11750123},
    {"Craftsanity Item: Conjured Muffin (#5349)", 11750124},
    {"Craftsanity Item: Conjured Water (#5350)", 11750125},
    {"Craftsanity Item: Kaldorei Spider Kabob (#5472)", 11750126},
    {"Craftsanity Item: Scorpid Surprise (#5473)", 11750127},
    {"Craftsanity Item: Roasted Kodo Meat (#5474)", 11750128},
    {"Craftsanity Item: Fillet of Frenzy (#5476)", 11750129},
    {"Craftsanity Item: Strider Stew (#5477)", 11750130},
    {"Craftsanity Item: Dig Rat Stew (#5478)", 11750131},
    {"Craftsanity Item: Crispy Lizard Tail (#5479)", 11750132},
    {"Craftsanity Item: Lean Venison (#5480)", 11750133},
    {"Craftsanity Item: Mana Jade (#5513)", 11750134},
    {"Craftsanity Item: Mana Agate (#5514)", 11750135},
    {"Craftsanity Item: Clam Chowder (#5526)", 11750136},
    {"Craftsanity Item: Iridescent Hammer (#5541)", 11750137},
    {"Craftsanity Item: Rage Potion (#5631)", 11750138},
    {"Craftsanity Item: Great Rage Potion (#5633)", 11750139},
    {"Craftsanity Item: Free Action Potion (#5634)", 11750140},
    {"Craftsanity Item: Red Linen Bag (#5762)", 11750141},
    {"Craftsanity Item: Red Woolen Bag (#5763)", 11750142},
    {"Craftsanity Item: Green Silk Pack (#5764)", 11750143},
    {"Craftsanity Item: Black Silk Pack (#5765)", 11750144},
    {"Craftsanity Item: Robes of Arcana (#5770)", 11750145},
    {"Craftsanity Item: Murloc Scale Belt (#5780)", 11750146},
    {"Craftsanity Item: Murloc Scale Breastplate (#5781)", 11750147},
    {"Craftsanity Item: Thick Murloc Armor (#5782)", 11750148},
    {"Craftsanity Item: Murloc Scale Bracers (#5783)", 11750149},
    {"Craftsanity Item: Fine Leather Pants (#5958)", 11750150},
    {"Craftsanity Item: Barbaric Leggings (#5963)", 11750151},
    {"Craftsanity Item: Guardian Cloak (#5965)", 11750152},
    {"Craftsanity Item: Truesilver Bar (#6037)", 11750153},
    {"Craftsanity Item: Giant Clam Scorcho (#6038)", 11750154},
    {"Craftsanity Item: Steel Weapon Chain (#6041)", 11750155},
    {"Craftsanity Item: Iron Shield Spike (#6042)", 11750156},
    {"Craftsanity Item: Iron Counterweight (#6043)", 11750157},
    {"Craftsanity Item: Shadow Protection Potion (#6048)", 11750158},
    {"Craftsanity Item: Fire Protection Potion (#6049)", 11750159},
    {"Craftsanity Item: Frost Protection Potion (#6050)", 11750160},
    {"Craftsanity Item: Holy Protection Potion (#6051)", 11750161},
    {"Craftsanity Item: Nature Protection Potion (#6052)", 11750162},
    {"Craftsanity Item: Red Linen Vest (#6239)", 11750163},
    {"Craftsanity Item: Blue Linen Vest (#6240)", 11750164},
    {"Craftsanity Item: Blue Linen Robe (#6242)", 11750165},
    {"Craftsanity Item: Blue Overalls (#6263)", 11750166},
    {"Craftsanity Item: Greater Adept's Robe (#6264)", 11750167},
    {"Craftsanity Item: Brilliant Smallfish (#6290)", 11750168},
    {"Craftsanity Item: Loch Frenzy Delight (#6316)", 11750169},
    {"Craftsanity Item: Stylish Blue Shirt (#6384)", 11750170},
    {"Craftsanity Item: Stylish Green Shirt (#6385)", 11750171},
    {"Craftsanity Item: Heavy Silk Bandage (#6451)", 11750172},
    {"Craftsanity Item: Strong Anti-Venom (#6453)", 11750173},
    {"Craftsanity Item: Deviate Scale Cloak (#6466)", 11750174},
    {"Craftsanity Item: Deviate Scale Gloves (#6467)", 11750175},
    {"Craftsanity Item: Deviate Scale Belt (#6468)", 11750176},
    {"Craftsanity Item: Savory Deviate Delight (#6657)", 11750177},
    {"Craftsanity Item: Elixir of Giant Growth (#6662)", 11750178},
    {"Craftsanity Item: Moonglow Vest (#6709)", 11750179},
    {"Craftsanity Item: Ez-Thro Dynamite (#6714)", 11750180},
    {"Craftsanity Item: Ironforge Breastplate (#6731)", 11750181},
    {"Craftsanity Item: Dress Shoes (#6836)", 11750182},
    {"Craftsanity Item: Spotted Yellowtail (#6887)", 11750183},
    {"Craftsanity Item: Smoked Bear Meat (#6890)", 11750184},
    {"Craftsanity Item: Hands of Darkness (#7047)", 11750185},
    {"Craftsanity Item: Truefaith Gloves (#7049)", 11750186},
    {"Craftsanity Item: Azure Silk Cloak (#7053)", 11750187},
    {"Craftsanity Item: Crimson Silk Cloak (#7056)", 11750188},
    {"Craftsanity Item: Crimson Silk Shoulders (#7059)", 11750189},
    {"Craftsanity Item: Azure Shoulders (#7060)", 11750190},
    {"Craftsanity Item: Earthen Silk Belt (#7061)", 11750191},
    {"Craftsanity Item: Crimson Silk Robe (#7063)", 11750192},
    {"Craftsanity Item: Green Silk Armor (#7065)", 11750193},
    {"Craftsanity Item: Elemental Fire (#7068)", 11750194},
    {"Craftsanity Item: Essence of Earth (#7076)", 11750195},
    {"Craftsanity Item: Essence of Fire (#7078)", 11750196},
    {"Craftsanity Item: Essence of Water (#7080)", 11750197},
    {"Craftsanity Item: Essence of Air (#7082)", 11750198},
    {"Craftsanity Item: Goblin Jumper Cables (#7148)", 11750199},
    {"Craftsanity Item: Fused Wiring (#7191)", 11750200},
    {"Craftsanity Item: Rugged Leather Pants (#7280)", 11750201},
    {"Craftsanity Item: Black Whelp Cloak (#7283)", 11750202},
    {"Craftsanity Item: Red Whelp Gloves (#7284)", 11750203},
    {"Craftsanity Item: Herbalist's Gloves (#7349)", 11750204},
    {"Craftsanity Item: Earthen Leather Shoulders (#7352)", 11750205},
    {"Craftsanity Item: Pilferer's Gloves (#7358)", 11750206},
    {"Craftsanity Item: Heavy Earthen Gloves (#7359)", 11750207},
    {"Craftsanity Item: Dusky Leather Leggings (#7373)", 11750208},
    {"Craftsanity Item: Green Whelp Armor (#7375)", 11750209},
    {"Craftsanity Item: Green Whelp Bracers (#7386)", 11750210},
    {"Craftsanity Item: Dusky Boots (#7390)", 11750211},
    {"Craftsanity Item: Swift Boots (#7391)", 11750212},
    {"Craftsanity Item: Gnomish Universal Remote (#7506)", 11750213},
    {"Craftsanity Item: Thistle Tea (#7676)", 11750214},
    {"Craftsanity Item: Barbaric Iron Shoulders (#7913)", 11750215},
    {"Craftsanity Item: Barbaric Iron Breastplate (#7914)", 11750216},
    {"Craftsanity Item: Barbaric Iron Helm (#7915)", 11750217},
    {"Craftsanity Item: Barbaric Iron Boots (#7916)", 11750218},
    {"Craftsanity Item: Barbaric Iron Gloves (#7917)", 11750219},
    {"Craftsanity Item: Heavy Mithril Pants (#7921)", 11750220},
    {"Craftsanity Item: Mithril Scale Bracers (#7924)", 11750221},
    {"Craftsanity Item: Ornate Mithril Pants (#7926)", 11750222},
    {"Craftsanity Item: Ornate Mithril Gloves (#7927)", 11750223},
    {"Craftsanity Item: Ornate Mithril Shoulder (#7928)", 11750224},
    {"Craftsanity Item: Mithril Scale Shoulders (#7932)", 11750225},
    {"Craftsanity Item: Heavy Mithril Helm (#7934)", 11750226},
    {"Craftsanity Item: Blue Glittering Axe (#7942)", 11750227},
    {"Craftsanity Item: Wicked Mithril Blade (#7943)", 11750228},
    {"Craftsanity Item: Dazzling Mithril Rapier (#7944)", 11750229},
    {"Craftsanity Item: Runed Mithril Hammer (#7946)", 11750230},
    {"Craftsanity Item: Ebon Shiv (#7947)", 11750231},
    {"Craftsanity Item: Mithril Shield Spike (#7967)", 11750232},
    {"Craftsanity Item: Mithril Spurs (#7969)", 11750233},
    {"Craftsanity Item: Mana Citrine (#8007)", 11750234},
    {"Craftsanity Item: Mana Ruby (#8008)", 11750235},
    {"Craftsanity Item: Conjured Sourdough (#8075)", 11750236},
    {"Craftsanity Item: Conjured Sweet Roll (#8076)", 11750237},
    {"Craftsanity Item: Conjured Mineral Water (#8077)", 11750238},
    {"Craftsanity Item: Conjured Sparkling Water (#8078)", 11750239},
    {"Craftsanity Item: Conjured Crystal Water (#8079)", 11750240},
    {"Craftsanity Item: Comfortable Leather Hat (#8174)", 11750241},
    {"Craftsanity Item: Turtle Scale Gloves (#8187)", 11750242},
    {"Craftsanity Item: Nightscape Shoulders (#8192)", 11750243},
    {"Craftsanity Item: Big Voodoo Robe (#8200)", 11750244},
    {"Craftsanity Item: Big Voodoo Mask (#8201)", 11750245},
    {"Craftsanity Item: Big Voodoo Pants (#8202)", 11750246},
    {"Craftsanity Item: Tough Scorpid Breastplate (#8203)", 11750247},
    {"Craftsanity Item: Tough Scorpid Gloves (#8204)", 11750248},
    {"Craftsanity Item: Tough Scorpid Bracers (#8205)", 11750249},
    {"Craftsanity Item: Tough Scorpid Leggings (#8206)", 11750250},
    {"Craftsanity Item: Tough Scorpid Shoulders (#8207)", 11750251},
    {"Craftsanity Item: Tough Scorpid Helm (#8208)", 11750252},
    {"Craftsanity Item: Tough Scorpid Boots (#8209)", 11750253},
    {"Craftsanity Item: Wild Leather Shoulders (#8210)", 11750254},
    {"Craftsanity Item: Wild Leather Vest (#8211)", 11750255},
    {"Craftsanity Item: Wild Leather Leggings (#8212)", 11750256},
    {"Craftsanity Item: Wild Leather Boots (#8213)", 11750257},
    {"Craftsanity Item: Wild Leather Helmet (#8214)", 11750258},
    {"Craftsanity Item: Wild Leather Cloak (#8215)", 11750259},
    {"Craftsanity Item: Big Voodoo Cloak (#8216)", 11750260},
    {"Craftsanity Item: Mithril Head Trout (#8364)", 11750261},
    {"Craftsanity Item: Mageweave Bandage (#8544)", 11750262},
    {"Craftsanity Item: Magic Resistance Potion (#9036)", 11750263},
    {"Craftsanity Item: Inlaid Mithril Cylinder (#9060)", 11750264},
    {"Craftsanity Item: Goblin Rocket Fuel (#9061)", 11750265},
    {"Craftsanity Item: Gift of Arthas (#9088)", 11750266},
    {"Craftsanity Item: Wildvine Potion (#9144)", 11750267},
    {"Craftsanity Item: Philosopher's Stone (#9149)", 11750268},
    {"Craftsanity Item: Invisibility Potion (#9172)", 11750269},
    {"Craftsanity Item: Elixir of Dream Vision (#9197)", 11750270},
    {"Craftsanity Item: Elixir of Giants (#9206)", 11750271},
    {"Craftsanity Item: Ghost Dye (#9210)", 11750272},
    {"Craftsanity Item: Elixir of Demonslaying (#9224)", 11750273},
    {"Craftsanity Item: Elixir of Shadow Power (#9264)", 11750274},
    {"Craftsanity Item: Blue Firework (#9312)", 11750275},
    {"Craftsanity Item: Green Firework (#9313)", 11750276},
    {"Craftsanity Item: Red Firework (#9318)", 11750277},
    {"Craftsanity Item: Golden Scale Gauntlets (#9366)", 11750278},
    {"Craftsanity Item: Red Mageweave Vest (#10007)", 11750279},
    {"Craftsanity Item: White Bandit Mask (#10008)", 11750280},
    {"Craftsanity Item: Red Mageweave Pants (#10009)", 11750281},
    {"Craftsanity Item: Red Mageweave Gloves (#10018)", 11750282},
    {"Craftsanity Item: Shadoweave Mask (#10025)", 11750283},
    {"Craftsanity Item: Red Mageweave Shoulders (#10029)", 11750284},
    {"Craftsanity Item: Admiral's Hat (#10030)", 11750285},
    {"Craftsanity Item: Red Mageweave Headband (#10033)", 11750286},
    {"Craftsanity Item: Tuxedo Shirt (#10034)", 11750287},
    {"Craftsanity Item: Tuxedo Pants (#10035)", 11750288},
    {"Craftsanity Item: Tuxedo Jacket (#10036)", 11750289},
    {"Craftsanity Item: White Wedding Dress (#10040)", 11750290},
    {"Craftsanity Item: Colorful Kilt (#10048)", 11750291},
    {"Craftsanity Item: Orange Martial Shirt (#10052)", 11750292},
    {"Craftsanity Item: Lavender Mageweave Shirt (#10054)", 11750293},
    {"Craftsanity Item: Pink Mageweave Shirt (#10055)", 11750294},
    {"Craftsanity Item: Silvered Bronze Leggings (#10423)", 11750295},
    {"Craftsanity Item: Bright-Eye Goggles (#10499)", 11750296},
    {"Craftsanity Item: Catseye Ultra Goggles (#10501)", 11750297},
    {"Craftsanity Item: Spellpower Goggles Xtreme (#10502)", 11750298},
    {"Craftsanity Item: Deepdive Helmet (#10506)", 11750299},
    {"Craftsanity Item: Mithril Heavy-bore Rifle (#10510)", 11750300},
    {"Craftsanity Item: Parachute Cloak (#10518)", 11750301},
    {"Craftsanity Item: Deadly Scope (#10546)", 11750302},
    {"Craftsanity Item: Sniper Scope (#10548)", 11750303},
    {"Craftsanity Item: Mithril Mechanical Dragonling (#10576)", 11750304},
    {"Craftsanity Item: Dark Iron Plate (#11604)", 11750305},
    {"Craftsanity Item: Dark Iron Shoulders (#11605)", 11750306},
    {"Craftsanity Item: Dark Iron Mail (#11606)", 11750307},
    {"Craftsanity Item: Dark Iron Sunderer (#11607)", 11750308},
    {"Craftsanity Item: Dark Iron Pulverizer (#11608)", 11750309},
    {"Craftsanity Item: Smoking Heart of the Mountain (#11811)", 11750310},
    {"Craftsanity Item: Pet Bombling (#11825)", 11750311},
    {"Craftsanity Item: Lil' Smoky (#11826)", 11750312},
    {"Craftsanity Item: Lean Wolf Steak (#12209)", 11750313},
    {"Craftsanity Item: Roast Raptor (#12210)", 11750314},
    {"Craftsanity Item: Jungle Stew (#12212)", 11750315},
    {"Craftsanity Item: Carrion Surprise (#12213)", 11750316},
    {"Craftsanity Item: Mystery Stew (#12214)", 11750317},
    {"Craftsanity Item: Heavy Kodo Stew (#12215)", 11750318},
    {"Craftsanity Item: Spiced Chili Crab (#12216)", 11750319},
    {"Craftsanity Item: Dragonbreath Chili (#12217)", 11750320},
    {"Craftsanity Item: Monster Omelet (#12218)", 11750321},
    {"Craftsanity Item: Crispy Bat Wing (#12224)", 11750322},
    {"Craftsanity Item: Searing Golden Blade (#12260)", 11750323},
    {"Craftsanity Item: Arcanite Bar (#12360)", 11750324},
    {"Craftsanity Item: Thorium Armor (#12405)", 11750325},
    {"Craftsanity Item: Thorium Belt (#12406)", 11750326},
    {"Craftsanity Item: Thorium Bracers (#12408)", 11750327},
    {"Craftsanity Item: Thorium Boots (#12409)", 11750328},
    {"Craftsanity Item: Thorium Helm (#12410)", 11750329},
    {"Craftsanity Item: Thorium Leggings (#12414)", 11750330},
    {"Craftsanity Item: Radiant Breastplate (#12415)", 11750331},
    {"Craftsanity Item: Radiant Belt (#12416)", 11750332},
    {"Craftsanity Item: Radiant Circlet (#12417)", 11750333},
    {"Craftsanity Item: Radiant Gloves (#12418)", 11750334},
    {"Craftsanity Item: Radiant Boots (#12419)", 11750335},
    {"Craftsanity Item: Radiant Leggings (#12420)", 11750336},
    {"Craftsanity Item: Imperial Plate Chest (#12422)", 11750337},
    {"Craftsanity Item: Imperial Plate Belt (#12424)", 11750338},
    {"Craftsanity Item: Imperial Plate Bracers (#12425)", 11750339},
    {"Craftsanity Item: Imperial Plate Boots (#12426)", 11750340},
    {"Craftsanity Item: Imperial Plate Helm (#12427)", 11750341},
    {"Craftsanity Item: Imperial Plate Shoulders (#12428)", 11750342},
    {"Craftsanity Item: Imperial Plate Leggings (#12429)", 11750343},
    {"Craftsanity Item: Runic Plate Shoulders (#12610)", 11750344},
    {"Craftsanity Item: Runic Plate Boots (#12611)", 11750345},
    {"Craftsanity Item: Runic Plate Helm (#12612)", 11750346},
    {"Craftsanity Item: Runic Breastplate (#12613)", 11750347},
    {"Craftsanity Item: Runic Plate Leggings (#12614)", 11750348},
    {"Craftsanity Item: Enchanted Thorium Breastplate (#12618)", 11750349},
    {"Craftsanity Item: Enchanted Thorium Leggings (#12619)", 11750350},
    {"Craftsanity Item: Enchanted Thorium Helm (#12620)", 11750351},
    {"Craftsanity Item: Wildthorn Mail (#12624)", 11750352},
    {"Craftsanity Item: Dawnbringer Shoulders (#12625)", 11750353},
    {"Craftsanity Item: Demon Forged Breastplate (#12628)", 11750354},
    {"Craftsanity Item: Fiery Plate Gauntlets (#12631)", 11750355},
    {"Craftsanity Item: Storm Gauntlets (#12632)", 11750356},
    {"Craftsanity Item: Whitesoul Helm (#12633)", 11750357},
    {"Craftsanity Item: Helm of the Great Chief (#12636)", 11750358},
    {"Craftsanity Item: Stronghold Gauntlets (#12639)", 11750359},
    {"Craftsanity Item: Lionheart Helm (#12640)", 11750360},
    {"Craftsanity Item: Invulnerable Mail (#12641)", 11750361},
    {"Craftsanity Item: Thorium Shield Spike (#12645)", 11750362},
    {"Craftsanity Item: Ornate Thorium Handaxe (#12773)", 11750363},
    {"Craftsanity Item: Dawn's Edge (#12774)", 11750364},
    {"Craftsanity Item: Huge Thorium Battleaxe (#12775)", 11750365},
    {"Craftsanity Item: Enchanted Battlehammer (#12776)", 11750366},
    {"Craftsanity Item: Blazing Rapier (#12777)", 11750367},
    {"Craftsanity Item: Serenity (#12781)", 11750368},
    {"Craftsanity Item: Corruption (#12782)", 11750369},
    {"Craftsanity Item: Heartseeker (#12783)", 11750370},
    {"Craftsanity Item: Arcanite Reaper (#12784)", 11750371},
    {"Craftsanity Item: Arcanite Champion (#12790)", 11750372},
    {"Craftsanity Item: Volcanic Hammer (#12792)", 11750373},
    {"Craftsanity Item: Masterwork Stormhammer (#12794)", 11750374},
    {"Craftsanity Item: Hammer of the Titans (#12796)", 11750375},
    {"Craftsanity Item: Frostguard (#12797)", 11750376},
    {"Craftsanity Item: Annihilator (#12798)", 11750377},
    {"Craftsanity Item: Living Essence (#12803)", 11750378},
    {"Craftsanity Item: Essence of Undeath (#12808)", 11750379},
    {"Craftsanity Item: Mighty Rage Potion (#13442)", 11750380},
    {"Craftsanity Item: Superior Mana Potion (#13443)", 11750381},
    {"Craftsanity Item: Major Mana Potion (#13444)", 11750382},
    {"Craftsanity Item: Elixir of Superior Defense (#13445)", 11750383},
    {"Craftsanity Item: Major Healing Potion (#13446)", 11750384},
    {"Craftsanity Item: Elixir of the Sages (#13447)", 11750385},
    {"Craftsanity Item: Elixir of the Mongoose (#13452)", 11750386},
    {"Craftsanity Item: Elixir of Brute Force (#13453)", 11750387},
    {"Craftsanity Item: Greater Arcane Elixir (#13454)", 11750388},
    {"Craftsanity Item: Greater Stoneshield Potion (#13455)", 11750389},
    {"Craftsanity Item: Greater Frost Protection Potion (#13456)", 11750390},
    {"Craftsanity Item: Greater Fire Protection Potion (#13457)", 11750391},
    {"Craftsanity Item: Greater Nature Protection Potion (#13458)", 11750392},
    {"Craftsanity Item: Greater Shadow Protection Potion (#13459)", 11750393},
    {"Craftsanity Item: Greater Arcane Protection Potion (#13461)", 11750394},
    {"Craftsanity Item: Purification Potion (#13462)", 11750395},
    {"Craftsanity Item: Alchemist's Stone (#13503)", 11750396},
    {"Craftsanity Item: Potion of Petrification (#13506)", 11750397},
    {"Craftsanity Item: Flask of the Titans (#13510)", 11750398},
    {"Craftsanity Item: Flask of Distilled Wisdom (#13511)", 11750399},
    {"Craftsanity Item: Flask of Supreme Power (#13512)", 11750400},
    {"Craftsanity Item: Flask of Chromatic Resistance (#13513)", 11750401},
    {"Craftsanity Item: Hot Wolf Ribs (#13851)", 11750402},
    {"Craftsanity Item: Runecloth Tunic (#13857)", 11750403},
    {"Craftsanity Item: Runecloth Robe (#13858)", 11750404},
    {"Craftsanity Item: Runecloth Cloak (#13860)", 11750405},
    {"Craftsanity Item: Runecloth Gloves (#13863)", 11750406},
    {"Craftsanity Item: Runecloth Boots (#13864)", 11750407},
    {"Craftsanity Item: Runecloth Pants (#13865)", 11750408},
    {"Craftsanity Item: Runecloth Headband (#13866)", 11750409},
    {"Craftsanity Item: Runecloth Shoulders (#13867)", 11750410},
    {"Craftsanity Item: Frostweave Robe (#13868)", 11750411},
    {"Craftsanity Item: Frostweave Tunic (#13869)", 11750412},
    {"Craftsanity Item: Frostweave Gloves (#13870)", 11750413},
    {"Craftsanity Item: Frostweave Pants (#13871)", 11750414},
    {"Craftsanity Item: Cooked Glossy Mightfish (#13927)", 11750415},
    {"Craftsanity Item: Grilled Squid (#13928)", 11750416},
    {"Craftsanity Item: Hot Smoked Bass (#13929)", 11750417},
    {"Craftsanity Item: Filet of Redgill (#13930)", 11750418},
    {"Craftsanity Item: Nightfin Soup (#13931)", 11750419},
    {"Craftsanity Item: Poached Sunscale Salmon (#13932)", 11750420},
    {"Craftsanity Item: Lobster Stew (#13933)", 11750421},
    {"Craftsanity Item: Mightfish Steak (#13934)", 11750422},
    {"Craftsanity Item: Baked Salmon (#13935)", 11750423},
    {"Craftsanity Item: Cindercloth Vest (#14042)", 11750424},
    {"Craftsanity Item: Cindercloth Gloves (#14043)", 11750425},
    {"Craftsanity Item: Cindercloth Cloak (#14044)", 11750426},
    {"Craftsanity Item: Cindercloth Pants (#14045)", 11750427},
    {"Craftsanity Item: Runecloth Bag (#14046)", 11750428},
    {"Craftsanity Item: Brightcloth Robe (#14100)", 11750429},
    {"Craftsanity Item: Brightcloth Gloves (#14101)", 11750430},
    {"Craftsanity Item: Brightcloth Cloak (#14103)", 11750431},
    {"Craftsanity Item: Brightcloth Pants (#14104)", 11750432},
    {"Craftsanity Item: Felcloth Robe (#14106)", 11750433},
    {"Craftsanity Item: Felcloth Pants (#14107)", 11750434},
    {"Craftsanity Item: Felcloth Boots (#14108)", 11750435},
    {"Craftsanity Item: Felcloth Hood (#14111)", 11750436},
    {"Craftsanity Item: Felcloth Shoulders (#14112)", 11750437},
    {"Craftsanity Item: Wizardweave Robe (#14128)", 11750438},
    {"Craftsanity Item: Wizardweave Turban (#14130)", 11750439},
    {"Craftsanity Item: Wizardweave Leggings (#14132)", 11750440},
    {"Craftsanity Item: Cloak of Fire (#14134)", 11750441},
    {"Craftsanity Item: Robe of Winter Night (#14136)", 11750442},
    {"Craftsanity Item: Mooncloth Leggings (#14137)", 11750443},
    {"Craftsanity Item: Mooncloth Vest (#14138)", 11750444},
    {"Craftsanity Item: Mooncloth Shoulders (#14139)", 11750445},
    {"Craftsanity Item: Mooncloth Circlet (#14140)", 11750446},
    {"Craftsanity Item: Ghostweave Vest (#14141)", 11750447},
    {"Craftsanity Item: Ghostweave Gloves (#14142)", 11750448},
    {"Craftsanity Item: Ghostweave Belt (#14143)", 11750449},
    {"Craftsanity Item: Ghostweave Pants (#14144)", 11750450},
    {"Craftsanity Item: Gloves of Spell Mastery (#14146)", 11750451},
    {"Craftsanity Item: Robe of the Archmage (#14152)", 11750452},
    {"Craftsanity Item: Robe of the Void (#14153)", 11750453},
    {"Craftsanity Item: Truefaith Vestments (#14154)", 11750454},
    {"Craftsanity Item: Mooncloth Bag (#14155)", 11750455},
    {"Craftsanity Item: Bottomless Bag (#14156)", 11750456},
    {"Craftsanity Item: Mooncloth (#14342)", 11750457},
    {"Craftsanity Item: Green Dragonscale Breastplate (#15045)", 11750458},
    {"Craftsanity Item: Green Dragonscale Leggings (#15046)", 11750459},
    {"Craftsanity Item: Red Dragonscale Breastplate (#15047)", 11750460},
    {"Craftsanity Item: Blue Dragonscale Breastplate (#15048)", 11750461},
    {"Craftsanity Item: Blue Dragonscale Shoulders (#15049)", 11750462},
    {"Craftsanity Item: Black Dragonscale Breastplate (#15050)", 11750463},
    {"Craftsanity Item: Black Dragonscale Shoulders (#15051)", 11750464},
    {"Craftsanity Item: Black Dragonscale Leggings (#15052)", 11750465},
    {"Craftsanity Item: Volcanic Breastplate (#15053)", 11750466},
    {"Craftsanity Item: Volcanic Leggings (#15054)", 11750467},
    {"Craftsanity Item: Volcanic Shoulders (#15055)", 11750468},
    {"Craftsanity Item: Stormshroud Armor (#15056)", 11750469},
    {"Craftsanity Item: Stormshroud Pants (#15057)", 11750470},
    {"Craftsanity Item: Stormshroud Shoulders (#15058)", 11750471},
    {"Craftsanity Item: Living Breastplate (#15059)", 11750472},
    {"Craftsanity Item: Living Leggings (#15060)", 11750473},
    {"Craftsanity Item: Living Shoulders (#15061)", 11750474},
    {"Craftsanity Item: Devilsaur Leggings (#15062)", 11750475},
    {"Craftsanity Item: Devilsaur Gauntlets (#15063)", 11750476},
    {"Craftsanity Item: Warbear Harness (#15064)", 11750477},
    {"Craftsanity Item: Warbear Woolies (#15065)", 11750478},
    {"Craftsanity Item: Ironfeather Breastplate (#15066)", 11750479},
    {"Craftsanity Item: Ironfeather Shoulders (#15067)", 11750480},
    {"Craftsanity Item: Frostsaber Tunic (#15068)", 11750481},
    {"Craftsanity Item: Frostsaber Leggings (#15069)", 11750482},
    {"Craftsanity Item: Frostsaber Gloves (#15070)", 11750483},
    {"Craftsanity Item: Frostsaber Boots (#15071)", 11750484},
    {"Craftsanity Item: Chimeric Leggings (#15072)", 11750485},
    {"Craftsanity Item: Chimeric Boots (#15073)", 11750486},
    {"Craftsanity Item: Chimeric Gloves (#15074)", 11750487},
    {"Craftsanity Item: Chimeric Vest (#15075)", 11750488},
    {"Craftsanity Item: Heavy Scorpid Vest (#15076)", 11750489},
    {"Craftsanity Item: Heavy Scorpid Bracers (#15077)", 11750490},
    {"Craftsanity Item: Heavy Scorpid Gauntlets (#15078)", 11750491},
    {"Craftsanity Item: Heavy Scorpid Leggings (#15079)", 11750492},
    {"Craftsanity Item: Heavy Scorpid Helm (#15080)", 11750493},
    {"Craftsanity Item: Heavy Scorpid Shoulders (#15081)", 11750494},
    {"Craftsanity Item: Heavy Scorpid Belt (#15082)", 11750495},
    {"Craftsanity Item: Wicked Leather Gauntlets (#15083)", 11750496},
    {"Craftsanity Item: Wicked Leather Bracers (#15084)", 11750497},
    {"Craftsanity Item: Wicked Leather Armor (#15085)", 11750498},
    {"Craftsanity Item: Wicked Leather Headband (#15086)", 11750499},
    {"Craftsanity Item: Wicked Leather Pants (#15087)", 11750500},
    {"Craftsanity Item: Wicked Leather Belt (#15088)", 11750501},
    {"Craftsanity Item: Runic Leather Armor (#15090)", 11750502},
    {"Craftsanity Item: Runic Leather Gauntlets (#15091)", 11750503},
    {"Craftsanity Item: Runic Leather Bracers (#15092)", 11750504},
    {"Craftsanity Item: Runic Leather Belt (#15093)", 11750505},
    {"Craftsanity Item: Runic Leather Headband (#15094)", 11750506},
    {"Craftsanity Item: Runic Leather Pants (#15095)", 11750507},
    {"Craftsanity Item: Runic Leather Shoulders (#15096)", 11750508},
    {"Craftsanity Item: Onyxia Scale Breastplate (#15141)", 11750509},
    {"Craftsanity Item: Thorium Grenade (#15993)", 11750510},
    {"Craftsanity Item: Thorium Widget (#15994)", 11750511},
    {"Craftsanity Item: Thorium Rifle (#15995)", 11750512},
    {"Craftsanity Item: Lifelike Mechanical Toad (#15996)", 11750513},
    {"Craftsanity Item: Thorium Shells (#15997)", 11750514},
    {"Craftsanity Item: Spellpower Goggles Xtreme Plus (#15999)", 11750515},
    {"Craftsanity Item: Thorium Tube (#16000)", 11750516},
    {"Craftsanity Item: Dark Iron Rifle (#16004)", 11750517},
    {"Craftsanity Item: Dark Iron Bomb (#16005)", 11750518},
    {"Craftsanity Item: Delicate Arcanite Converter (#16006)", 11750519},
    {"Craftsanity Item: Flawless Arcanite Rifle (#16007)", 11750520},
    {"Craftsanity Item: Master Engineer's Goggles (#16008)", 11750521},
    {"Craftsanity Item: Voice Amplification Modulator (#16009)", 11750522},
    {"Craftsanity Item: Arcanite Dragonling (#16022)", 11750523},
    {"Craftsanity Item: Masterwork Target Dummy (#16023)", 11750524},
    {"Craftsanity Item: Arcane Bomb (#16040)", 11750525},
    {"Craftsanity Item: Runed Arcanite Rod (#16207)", 11750526},
    {"Craftsanity Item: Undermine Clam Chowder (#16766)", 11750527},
    {"Craftsanity Item: Lesser Soulstone (#16892)", 11750528},
    {"Craftsanity Item: Soulstone (#16893)", 11750529},
    {"Craftsanity Item: Greater Soulstone (#16895)", 11750530},
    {"Craftsanity Item: Major Soulstone (#16896)", 11750531},
    {"Craftsanity Item: Flarecore Gloves (#16979)", 11750532},
    {"Craftsanity Item: Flarecore Mantle (#16980)", 11750533},
    {"Craftsanity Item: Corehound Boots (#16982)", 11750534},
    {"Craftsanity Item: Molten Helm (#16983)", 11750535},
    {"Craftsanity Item: Black Dragonscale Boots (#16984)", 11750536},
    {"Craftsanity Item: Fiery Chain Shoulders (#16988)", 11750537},
    {"Craftsanity Item: Fiery Chain Girdle (#16989)", 11750538},
    {"Craftsanity Item: Dark Iron Leggings (#17013)", 11750539},
    {"Craftsanity Item: Dark Iron Bracers (#17014)", 11750540},
    {"Craftsanity Item: Dark Iron Reaver (#17015)", 11750541},
    {"Craftsanity Item: Dark Iron Destroyer (#17016)", 11750542},
    {"Craftsanity Item: Sulfuron Hammer (#17193)", 11750543},
    {"Craftsanity Item: Gingerbread Cookie (#17197)", 11750544},
    {"Craftsanity Item: Egg Nog (#17198)", 11750545},
    {"Craftsanity Item: Edge of Winter (#17704)", 11750546},
    {"Craftsanity Item: Elixir of Frost Power (#17708)", 11750547},
    {"Craftsanity Item: Snowmaster 9000 (#17716)", 11750548},
    {"Craftsanity Item: Gloves of the Greatfather (#17721)", 11750549},
    {"Craftsanity Item: Green Holiday Shirt (#17723)", 11750550},
    {"Craftsanity Item: Elementium Bar (#17771)", 11750551},
    {"Craftsanity Item: Tender Wolf Steak (#18045)", 11750552},
    {"Craftsanity Item: Force Reactive Disk (#18168)", 11750553},
    {"Craftsanity Item: Shadowskin Gloves (#18238)", 11750554},
    {"Craftsanity Item: Core Armor Kit (#18251)", 11750555},
    {"Craftsanity Item: Major Rejuvenation Potion (#18253)", 11750556},
    {"Craftsanity Item: Runn Tum Tuber Surprise (#18254)", 11750557},
    {"Craftsanity Item: Elemental Sharpening Stone (#18262)", 11750558},
    {"Craftsanity Item: Flarecore Wraps (#18263)", 11750559},
    {"Craftsanity Item: Core Marksman Rifle (#18282)", 11750560},
    {"Craftsanity Item: Biznicks 247x128 Accurascope (#18283)", 11750561},
    {"Craftsanity Item: Belt of the Archmage (#18405)", 11750562},
    {"Craftsanity Item: Felcloth Gloves (#18407)", 11750563},
    {"Craftsanity Item: Inferno Gloves (#18408)", 11750564},
    {"Craftsanity Item: Mooncloth Gloves (#18409)", 11750565},
    {"Craftsanity Item: Cloak of Warding (#18413)", 11750566},
    {"Craftsanity Item: Mooncloth Robe (#18486)", 11750567},
    {"Craftsanity Item: Girdle of Insight (#18504)", 11750568},
    {"Craftsanity Item: Mongoose Boots (#18506)", 11750569},
    {"Craftsanity Item: Swift Flight Bracers (#18508)", 11750570},
    {"Craftsanity Item: Chromatic Cloak (#18509)", 11750571},
    {"Craftsanity Item: Hide of the Wild (#18510)", 11750572},
    {"Craftsanity Item: Shifting Cloak (#18511)", 11750573},
    {"Craftsanity Item: Goblin Jumper Cables XL (#18587)", 11750574},
    {"Craftsanity Item: Ez-Thro Dynamite II (#18588)", 11750575},
    {"Craftsanity Item: Powerful Seaforium Charge (#18594)", 11750576},
    {"Craftsanity Item: Truesilver Transformer (#18631)", 11750577},
    {"Craftsanity Item: Gyrofreeze Ice Reflector (#18634)", 11750578},
    {"Craftsanity Item: Major Recombobulator (#18637)", 11750579},
    {"Craftsanity Item: Hyper-Radiant Flame Reflector (#18638)", 11750580},
    {"Craftsanity Item: Ultra-Flash Shadow Reflector (#18639)", 11750581},
    {"Craftsanity Item: Gnomish Alarm-o-Bot (#18645)", 11750582},
    {"Craftsanity Item: World Enlarger (#18660)", 11750583},
    {"Craftsanity Item: Heavy Leather Ball (#18662)", 11750584},
    {"Craftsanity Item: Barbaric Bracers (#18948)", 11750585},
    {"Craftsanity Item: Snake Burst Firework (#19026)", 11750586},
    {"Craftsanity Item: Heavy Timbermaw Belt (#19043)", 11750587},
    {"Craftsanity Item: Might of the Timbermaw (#19044)", 11750588},
    {"Craftsanity Item: Wisdom of the Timbermaw (#19047)", 11750589},
    {"Craftsanity Item: Heavy Timbermaw Boots (#19048)", 11750590},
    {"Craftsanity Item: Timbermaw Brawlers (#19049)", 11750591},
    {"Craftsanity Item: Mantle of the Timbermaw (#19050)", 11750592},
    {"Craftsanity Item: Girdle of the Dawn (#19051)", 11750593},
    {"Craftsanity Item: Dawn Treaders (#19052)", 11750594},
    {"Craftsanity Item: Argent Boots (#19056)", 11750595},
    {"Craftsanity Item: Gloves of the Dawn (#19057)", 11750596},
    {"Craftsanity Item: Golden Mantle of the Dawn (#19058)", 11750597},
    {"Craftsanity Item: Argent Shoulders (#19059)", 11750598},
    {"Craftsanity Item: Dark Iron Helm (#19148)", 11750599},
    {"Craftsanity Item: Lava Belt (#19149)", 11750600},
    {"Craftsanity Item: Flarecore Robe (#19156)", 11750601},
    {"Craftsanity Item: Chromatic Gauntlets (#19157)", 11750602},
    {"Craftsanity Item: Corehound Belt (#19162)", 11750603},
    {"Craftsanity Item: Molten Belt (#19163)", 11750604},
    {"Craftsanity Item: Dark Iron Gauntlets (#19164)", 11750605},
    {"Craftsanity Item: Flarecore Leggings (#19165)", 11750606},
    {"Craftsanity Item: Black Amnesty (#19166)", 11750607},
    {"Craftsanity Item: Blackfury (#19167)", 11750608},
    {"Craftsanity Item: Blackguard (#19168)", 11750609},
    {"Craftsanity Item: Nightfall (#19169)", 11750610},
    {"Craftsanity Item: Ebon Hand (#19170)", 11750611},
    {"Craftsanity Item: Powerful Anti-Venom (#19440)", 11750612},
    {"Craftsanity Item: Bloodvine Vest (#19682)", 11750613},
    {"Craftsanity Item: Bloodvine Leggings (#19683)", 11750614},
    {"Craftsanity Item: Bloodvine Boots (#19684)", 11750615},
    {"Craftsanity Item: Primal Batskin Jerkin (#19685)", 11750616},
    {"Craftsanity Item: Primal Batskin Gloves (#19686)", 11750617},
    {"Craftsanity Item: Primal Batskin Bracers (#19687)", 11750618},
    {"Craftsanity Item: Blood Tiger Breastplate (#19688)", 11750619},
    {"Craftsanity Item: Blood Tiger Shoulders (#19689)", 11750620},
    {"Craftsanity Item: Bloodsoul Breastplate (#19690)", 11750621},
    {"Craftsanity Item: Bloodsoul Shoulders (#19691)", 11750622},
    {"Craftsanity Item: Bloodsoul Gauntlets (#19692)", 11750623},
    {"Craftsanity Item: Darksoul Breastplate (#19693)", 11750624},
    {"Craftsanity Item: Darksoul Leggings (#19694)", 11750625},
    {"Craftsanity Item: Darksoul Shoulders (#19695)", 11750626},
    {"Craftsanity Item: Bloodvine Lens (#19998)", 11750627},
    {"Craftsanity Item: Bloodvine Goggles (#19999)", 11750628},
    {"Craftsanity Item: Greater Dreamless Sleep Potion (#20002)", 11750629},
    {"Craftsanity Item: Mighty Troll's Blood Elixir (#20004)", 11750630},
    {"Craftsanity Item: Mageblood Elixir (#20007)", 11750631},
    {"Craftsanity Item: Living Action Potion (#20008)", 11750632},
    {"Craftsanity Item: Dark Iron Boots (#20039)", 11750633},
    {"Craftsanity Item: Heavy Crocolisk Stew (#20074)", 11750634},
    {"Craftsanity Item: Dreamscale Breastplate (#20380)", 11750635},
    {"Craftsanity Item: Adamantite Arrow Maker (#20475)", 11750636},
    {"Craftsanity Item: Sandstalker Bracers (#20476)", 11750637},
    {"Craftsanity Item: Sandstalker Gauntlets (#20477)", 11750638},
    {"Craftsanity Item: Sandstalker Breastplate (#20478)", 11750639},
    {"Craftsanity Item: Spitfire Breastplate (#20479)", 11750640},
    {"Craftsanity Item: Spitfire Gauntlets (#20480)", 11750641},
    {"Craftsanity Item: Spitfire Bracers (#20481)", 11750642},
    {"Craftsanity Item: Runed Stygian Boots (#20537)", 11750643},
    {"Craftsanity Item: Runed Stygian Leggings (#20538)", 11750644},
    {"Craftsanity Item: Runed Stygian Belt (#20539)", 11750645},
    {"Craftsanity Item: Darkrune Gauntlets (#20549)", 11750646},
    {"Craftsanity Item: Darkrune Breastplate (#20550)", 11750647},
    {"Craftsanity Item: Darkrune Helm (#20551)", 11750648},
    {"Craftsanity Item: Black Whelp Tunic (#20575)", 11750649},
    {"Craftsanity Item: Minor Wizard Oil (#20744)", 11750650},
    {"Craftsanity Item: Minor Mana Oil (#20745)", 11750651},
    {"Craftsanity Item: Lesser Wizard Oil (#20746)", 11750652},
    {"Craftsanity Item: Lesser Mana Oil (#20747)", 11750653},
    {"Craftsanity Item: Brilliant Mana Oil (#20748)", 11750654},
    {"Craftsanity Item: Brilliant Wizard Oil (#20749)", 11750655},
    {"Craftsanity Item: Wizard Oil (#20750)", 11750656},
    {"Craftsanity Item: Amulet of the Moon (#20830)", 11750657},
    {"Craftsanity Item: Heavy Golden Necklace of Battle (#20831)", 11750658},
    {"Craftsanity Item: Wicked Moonstone Ring (#20833)", 11750659},
    {"Craftsanity Item: Pendant of the Agate Shield (#20950)", 11750660},
    {"Craftsanity Item: Heavy Iron Knuckles (#20954)", 11750661},
    {"Craftsanity Item: Blazing Citrine Ring (#20958)", 11750662},
    {"Craftsanity Item: The Jade Eye (#20959)", 11750663},
    {"Craftsanity Item: Jade Pendant of Blasting (#20966)", 11750664},
    {"Craftsanity Item: Citrine Pendant of Golden Healing (#20967)", 11750665},
    {"Craftsanity Item: Ruby Crown of Restoration (#20969)", 11750666},
    {"Craftsanity Item: Dirge's Kickin' Chimaerok Chops (#21023)", 11750667},
    {"Craftsanity Item: Smoked Sagefish (#21072)", 11750668},
    {"Craftsanity Item: Festival Dress (#21154)", 11750669},
    {"Craftsanity Item: Sagefish Delight (#21217)", 11750670},
    {"Craftsanity Item: Stormshroud Gloves (#21278)", 11750671},
    {"Craftsanity Item: Soul Pouch (#21340)", 11750672},
    {"Craftsanity Item: Core Felcloth Bag (#21342)", 11750673},
    {"Craftsanity Item: Festival Suit (#21542)", 11750674},
    {"Craftsanity Item: Elixir of Greater Firepower (#21546)", 11750675},
    {"Craftsanity Item: Small Red Rocket (#21557)", 11750676},
    {"Craftsanity Item: Small Blue Rocket (#21558)", 11750677},
    {"Craftsanity Item: Small Green Rocket (#21559)", 11750678},
    {"Craftsanity Item: Firework Launcher (#21569)", 11750679},
    {"Craftsanity Item: Cluster Launcher (#21570)", 11750680},
    {"Craftsanity Item: Blue Rocket Cluster (#21571)", 11750681},
    {"Craftsanity Item: Green Rocket Cluster (#21574)", 11750682},
    {"Craftsanity Item: Red Rocket Cluster (#21576)", 11750683},
    {"Craftsanity Item: Large Blue Rocket (#21589)", 11750684},
    {"Craftsanity Item: Large Green Rocket (#21590)", 11750685},
    {"Craftsanity Item: Large Red Rocket (#21592)", 11750686},
    {"Craftsanity Item: Large Blue Rocket Cluster (#21714)", 11750687},
    {"Craftsanity Item: Large Green Rocket Cluster (#21716)", 11750688},
    {"Craftsanity Item: Large Red Rocket Cluster (#21718)", 11750689},
    {"Craftsanity Item: Gem Studded Band (#21753)", 11750690},
    {"Craftsanity Item: The Aquamarine Ward (#21754)", 11750691},
    {"Craftsanity Item: Figurine - Golden Hare (#21756)", 11750692},
    {"Craftsanity Item: Figurine - Black Pearl Panther (#21758)", 11750693},
    {"Craftsanity Item: Figurine - Truesilver Crab (#21760)", 11750694},
    {"Craftsanity Item: Figurine - Truesilver Boar (#21763)", 11750695},
    {"Craftsanity Item: Opal Necklace of Impact (#21766)", 11750696},
    {"Craftsanity Item: Figurine - Ruby Serpent (#21769)", 11750697},
    {"Craftsanity Item: Emerald Crown of Destruction (#21774)", 11750698},
    {"Craftsanity Item: Figurine - Emerald Owl (#21777)", 11750699},
    {"Craftsanity Item: Ring of Bitter Shadows (#21778)", 11750700},
    {"Craftsanity Item: Figurine - Black Diamond Crab (#21784)", 11750701},
    {"Craftsanity Item: Figurine - Dark Iron Scorpid (#21789)", 11750702},
    {"Craftsanity Item: Necklace of the Diamond Tower (#21792)", 11750703},
    {"Craftsanity Item: Bolt of Imbued Netherweave (#21842)", 11750704},
    {"Craftsanity Item: Imbued Netherweave Bag (#21843)", 11750705},
    {"Craftsanity Item: Bolt of Soulcloth (#21844)", 11750706},
    {"Craftsanity Item: Primal Mooncloth (#21845)", 11750707},
    {"Craftsanity Item: Spellfire Belt (#21846)", 11750708},
    {"Craftsanity Item: Spellfire Gloves (#21847)", 11750709},
    {"Craftsanity Item: Spellfire Robe (#21848)", 11750710},
    {"Craftsanity Item: Netherweave Robe (#21854)", 11750711},
    {"Craftsanity Item: Netherweave Tunic (#21855)", 11750712},
    {"Craftsanity Item: Spellfire Bag (#21858)", 11750713},
    {"Craftsanity Item: Imbued Netherweave Pants (#21859)", 11750714},
    {"Craftsanity Item: Imbued Netherweave Boots (#21860)", 11750715},
    {"Craftsanity Item: Imbued Netherweave Robe (#21861)", 11750716},
    {"Craftsanity Item: Imbued Netherweave Tunic (#21862)", 11750717},
    {"Craftsanity Item: Soulcloth Gloves (#21863)", 11750718},
    {"Craftsanity Item: Soulcloth Shoulders (#21864)", 11750719},
    {"Craftsanity Item: Soulcloth Vest (#21865)", 11750720},
    {"Craftsanity Item: Arcanoweave Bracers (#21866)", 11750721},
    {"Craftsanity Item: Arcanoweave Boots (#21867)", 11750722},
    {"Craftsanity Item: Arcanoweave Robe (#21868)", 11750723},
    {"Craftsanity Item: Frozen Shadoweave Shoulders (#21869)", 11750724},
    {"Craftsanity Item: Frozen Shadoweave Boots (#21870)", 11750725},
    {"Craftsanity Item: Frozen Shadoweave Robe (#21871)", 11750726},
    {"Craftsanity Item: Ebon Shadowbag (#21872)", 11750727},
    {"Craftsanity Item: Primal Mooncloth Belt (#21873)", 11750728},
    {"Craftsanity Item: Primal Mooncloth Shoulders (#21874)", 11750729},
    {"Craftsanity Item: Primal Mooncloth Robe (#21875)", 11750730},
    {"Craftsanity Item: Primal Mooncloth Bag (#21876)", 11750731},
    {"Craftsanity Item: Primal Fire (#21884)", 11750732},
    {"Craftsanity Item: Primal Water (#21885)", 11750733},
    {"Craftsanity Item: Netherweave Bandage (#21990)", 11750734},
    {"Craftsanity Item: Heavy Netherweave Bandage (#21991)", 11750735},
    {"Craftsanity Item: Conjured Glacier Water (#22018)", 11750736},
    {"Craftsanity Item: Conjured Croissant (#22019)", 11750737},
    {"Craftsanity Item: Mana Emerald (#22044)", 11750738},
    {"Craftsanity Item: Master Soulstone (#22116)", 11750739},
    {"Craftsanity Item: Obsidian Mail Tunic (#22191)", 11750740},
    {"Craftsanity Item: Black Grasp of the Destroyer (#22194)", 11750741},
    {"Craftsanity Item: Light Obsidian Belt (#22195)", 11750742},
    {"Craftsanity Item: Thick Obsidian Breastplate (#22196)", 11750743},
    {"Craftsanity Item: Heavy Obsidian Belt (#22197)", 11750744},
    {"Craftsanity Item: Jagged Obsidian Shield (#22198)", 11750745},
    {"Craftsanity Item: Enchanted Mageweave Pouch (#22246)", 11750746},
    {"Craftsanity Item: Enchanted Runecloth Bag (#22248)", 11750747},
    {"Craftsanity Item: Big Bag of Enchantment (#22249)", 11750748},
    {"Craftsanity Item: Cenarion Herb Bag (#22251)", 11750749},
    {"Craftsanity Item: Satchel of Cenarius (#22252)", 11750750},
    {"Craftsanity Item: Sageblade (#22383)", 11750751},
    {"Craftsanity Item: Persuader (#22384)", 11750752},
    {"Craftsanity Item: Titanic Leggings (#22385)", 11750753},
    {"Craftsanity Item: Large Prismatic Shard (#22449)", 11750754},
    {"Craftsanity Item: Primal Air (#22451)", 11750755},
    {"Craftsanity Item: Primal Earth (#22452)", 11750756},
    {"Craftsanity Item: Runed Adamantite Rod (#22462)", 11750757},
    {"Craftsanity Item: Runed Eternium Rod (#22463)", 11750758},
    {"Craftsanity Item: Superior Mana Oil (#22521)", 11750759},
    {"Craftsanity Item: Superior Wizard Oil (#22522)", 11750760},
    {"Craftsanity Item: Crunchy Spider Surprise (#22645)", 11750761},
    {"Craftsanity Item: Gaea's Embrace (#22660)", 11750762},
    {"Craftsanity Item: Steam Tonk Controller (#22728)", 11750763},
    {"Craftsanity Item: Sylvan Vest (#22756)", 11750764},
    {"Craftsanity Item: Sylvan Crown (#22757)", 11750765},
    {"Craftsanity Item: Sylvan Shoulders (#22758)", 11750766},
    {"Craftsanity Item: Bramblewood Helm (#22759)", 11750767},
    {"Craftsanity Item: Bramblewood Boots (#22760)", 11750768},
    {"Craftsanity Item: Bramblewood Belt (#22761)", 11750769},
    {"Craftsanity Item: Ironvine Breastplate (#22762)", 11750770},
    {"Craftsanity Item: Ironvine Gloves (#22763)", 11750771},
    {"Craftsanity Item: Ironvine Belt (#22764)", 11750772},
    {"Craftsanity Item: Elixir of Camouflage (#22823)", 11750773},
    {"Craftsanity Item: Sneaking Potion (#22826)", 11750774},
    {"Craftsanity Item: Elixir of Major Frost Power (#22827)", 11750775},
    {"Craftsanity Item: Insane Strength Potion (#22828)", 11750776},
    {"Craftsanity Item: Elixir of the Searching Eye (#22830)", 11750777},
    {"Craftsanity Item: Elixir of Major Agility (#22831)", 11750778},
    {"Craftsanity Item: Super Mana Potion (#22832)", 11750779},
    {"Craftsanity Item: Elixir of Major Firepower (#22833)", 11750780},
    {"Craftsanity Item: Elixir of Major Defense (#22834)", 11750781},
    {"Craftsanity Item: Elixir of Major Shadow Power (#22835)", 11750782},
    {"Craftsanity Item: Major Dreamless Sleep Potion (#22836)", 11750783},
    {"Craftsanity Item: Heroic Potion (#22837)", 11750784},
    {"Craftsanity Item: Haste Potion (#22838)", 11750785},
    {"Craftsanity Item: Destruction Potion (#22839)", 11750786},
    {"Craftsanity Item: Elixir of Major Mageblood (#22840)", 11750787},
    {"Craftsanity Item: Major Fire Protection Potion (#22841)", 11750788},
    {"Craftsanity Item: Major Frost Protection Potion (#22842)", 11750789},
    {"Craftsanity Item: Major Nature Protection Potion (#22844)", 11750790},
    {"Craftsanity Item: Major Arcane Protection Potion (#22845)", 11750791},
    {"Craftsanity Item: Major Shadow Protection Potion (#22846)", 11750792},
    {"Craftsanity Item: Major Holy Protection Potion (#22847)", 11750793},
    {"Craftsanity Item: Elixir of Empowerment (#22848)", 11750794},
    {"Craftsanity Item: Ironshield Potion (#22849)", 11750795},
    {"Craftsanity Item: Shrouding Potion (#22871)", 11750796},
    {"Craftsanity Item: Conjured Cinnamon Roll (#22895)", 11750797},
    {"Craftsanity Item: Teardrop Blood Garnet (#23094)", 11750798},
    {"Craftsanity Item: Bold Blood Garnet (#23095)", 11750799},
    {"Craftsanity Item: Runed Blood Garnet (#23096)", 11750800},
    {"Craftsanity Item: Delicate Blood Garnet (#23097)", 11750801},
    {"Craftsanity Item: Inscribed Flame Spessarite (#23098)", 11750802},
    {"Craftsanity Item: Luminous Flame Spessarite (#23099)", 11750803},
    {"Craftsanity Item: Glinting Flame Spessarite (#23100)", 11750804},
    {"Craftsanity Item: Potent Flame Spessarite (#23101)", 11750805},
    {"Craftsanity Item: Radiant Deep Peridot (#23103)", 11750806},
    {"Craftsanity Item: Jagged Deep Peridot (#23104)", 11750807},
    {"Craftsanity Item: Enduring Deep Peridot (#23105)", 11750808},
    {"Craftsanity Item: Dazzling Deep Peridot (#23106)", 11750809},
    {"Craftsanity Item: Glowing Shadow Draenite (#23108)", 11750810},
    {"Craftsanity Item: Royal Shadow Draenite (#23109)", 11750811},
    {"Craftsanity Item: Shifting Shadow Draenite (#23110)", 11750812},
    {"Craftsanity Item: Sovereign Shadow Draenite (#23111)", 11750813},
    {"Craftsanity Item: Brilliant Golden Draenite (#23113)", 11750814},
    {"Craftsanity Item: Gleaming Golden Draenite (#23114)", 11750815},
    {"Craftsanity Item: Thick Golden Draenite (#23115)", 11750816},
    {"Craftsanity Item: Rigid Golden Draenite (#23116)", 11750817},
    {"Craftsanity Item: Solid Azure Moonstone (#23118)", 11750818},
    {"Craftsanity Item: Sparkling Azure Moonstone (#23119)", 11750819},
    {"Craftsanity Item: Stormy Azure Moonstone (#23120)", 11750820},
    {"Craftsanity Item: Lustrous Azure Moonstone (#23121)", 11750821},
    {"Craftsanity Item: Adamantite Maul (#23502)", 11750822},
    {"Craftsanity Item: Adamantite Cleaver (#23503)", 11750823},
    {"Craftsanity Item: Adamantite Dagger (#23504)", 11750824},
    {"Craftsanity Item: Adamantite Rapier (#23505)", 11750825},
    {"Craftsanity Item: Adamantite Plate Bracers (#23506)", 11750826},
    {"Craftsanity Item: Adamantite Breastplate (#23507)", 11750827},
    {"Craftsanity Item: Adamantite Plate Gloves (#23508)", 11750828},
    {"Craftsanity Item: Enchanted Adamantite Breastplate (#23509)", 11750829},
    {"Craftsanity Item: Enchanted Adamantite Belt (#23510)", 11750830},
    {"Craftsanity Item: Enchanted Adamantite Boots (#23511)", 11750831},
    {"Craftsanity Item: Enchanted Adamantite Leggings (#23512)", 11750832},
    {"Craftsanity Item: Flamebane Breastplate (#23513)", 11750833},
    {"Craftsanity Item: Flamebane Gloves (#23514)", 11750834},
    {"Craftsanity Item: Flamebane Bracers (#23515)", 11750835},
    {"Craftsanity Item: Flamebane Helm (#23516)", 11750836},
    {"Craftsanity Item: Felsteel Gloves (#23517)", 11750837},
    {"Craftsanity Item: Felsteel Leggings (#23518)", 11750838},
    {"Craftsanity Item: Felsteel Helm (#23519)", 11750839},
    {"Craftsanity Item: Ragesteel Gloves (#23520)", 11750840},
    {"Craftsanity Item: Ragesteel Helm (#23521)", 11750841},
    {"Craftsanity Item: Ragesteel Breastplate (#23522)", 11750842},
    {"Craftsanity Item: Khorium Pants (#23523)", 11750843},
    {"Craftsanity Item: Khorium Belt (#23524)", 11750844},
    {"Craftsanity Item: Khorium Boots (#23525)", 11750845},
    {"Craftsanity Item: Swiftsteel Gloves (#23526)", 11750846},
    {"Craftsanity Item: Earthpeace Breastplate (#23527)", 11750847},
    {"Craftsanity Item: Adamantite Sharpening Stone (#23529)", 11750848},
    {"Craftsanity Item: Felsteel Shield Spike (#23530)", 11750849},
    {"Craftsanity Item: Felfury Gauntlets (#23531)", 11750850},
    {"Craftsanity Item: Gauntlets of the Iron Tower (#23532)", 11750851},
    {"Craftsanity Item: Steelgrip Gauntlets (#23533)", 11750852},
    {"Craftsanity Item: Storm Helm (#23534)", 11750853},
    {"Craftsanity Item: Helm of the Stalwart Defender (#23535)", 11750854},
    {"Craftsanity Item: Oathkeeper's Helm (#23536)", 11750855},
    {"Craftsanity Item: Black Felsteel Bracers (#23537)", 11750856},
    {"Craftsanity Item: Bracers of the Green Fortress (#23538)", 11750857},
    {"Craftsanity Item: Blessed Bracers (#23539)", 11750858},
    {"Craftsanity Item: Felsteel Longblade (#23540)", 11750859},
    {"Craftsanity Item: Khorium Champion (#23541)", 11750860},
    {"Craftsanity Item: Fel Edged Battleaxe (#23542)", 11750861},
    {"Craftsanity Item: Felsteel Reaper (#23543)", 11750862},
    {"Craftsanity Item: Runic Hammer (#23544)", 11750863},
    {"Craftsanity Item: Fel Hardened Maul (#23546)", 11750864},
    {"Craftsanity Item: Eternium Runed Blade (#23554)", 11750865},
    {"Craftsanity Item: Dirge (#23555)", 11750866},
    {"Craftsanity Item: Hand of Eternity (#23556)", 11750867},
    {"Craftsanity Item: Primal Might (#23571)", 11750868},
    {"Craftsanity Item: Lesser Ward of Shielding (#23575)", 11750869},
    {"Craftsanity Item: Greater Ward of Shielding (#23576)", 11750870},
    {"Craftsanity Item: Adamantite Rifle (#23746)", 11750871},
    {"Craftsanity Item: Felsteel Boomstick (#23747)", 11750872},
    {"Craftsanity Item: Ornate Khorium Rifle (#23748)", 11750873},
    {"Craftsanity Item: Cogspinner Goggles (#23758)", 11750874},
    {"Craftsanity Item: Power Amplification Goggles (#23761)", 11750875},
    {"Craftsanity Item: Ultra-Spectropic Detection Goggles (#23762)", 11750876},
    {"Craftsanity Item: Hyper-Vision Goggles (#23763)", 11750877},
    {"Craftsanity Item: Adamantite Scope (#23764)", 11750878},
    {"Craftsanity Item: Khorium Scope (#23765)", 11750879},
    {"Craftsanity Item: Stabilized Eternium Scope (#23766)", 11750880},
    {"Craftsanity Item: Crashin' Thrashin' Robot (#23767)", 11750881},
    {"Craftsanity Item: White Smoke Flare (#23768)", 11750882},
    {"Craftsanity Item: Green Smoke Flare (#23771)", 11750883},
    {"Craftsanity Item: Fel Iron Toolbox (#23774)", 11750884},
    {"Craftsanity Item: Titanium Toolbox (#23775)", 11750885},
    {"Craftsanity Item: Heavy Knothide Leather (#23793)", 11750886},
    {"Craftsanity Item: Elemental Seaforium Charge (#23819)", 11750887},
    {"Craftsanity Item: Critter Enlarger (#23820)", 11750888},
    {"Craftsanity Item: Zapthrottle Mote Extractor (#23821)", 11750889},
    {"Craftsanity Item: Rocket Boots Xtreme (#23824)", 11750890},
    {"Craftsanity Item: Remote Mail Terminal (#23840)", 11750891},
    {"Craftsanity Item: Bold Living Ruby (#24027)", 11750892},
    {"Craftsanity Item: Delicate Living Ruby (#24028)", 11750893},
    {"Craftsanity Item: Teardrop Living Ruby (#24029)", 11750894},
    {"Craftsanity Item: Runed Living Ruby (#24030)", 11750895},
    {"Craftsanity Item: Bright Living Ruby (#24031)", 11750896},
    {"Craftsanity Item: Subtle Living Ruby (#24032)", 11750897},
    {"Craftsanity Item: Solid Star of Elune (#24033)", 11750898},
    {"Craftsanity Item: Sparkling Star of Elune (#24035)", 11750899},
    {"Craftsanity Item: Flashing Living Ruby (#24036)", 11750900},
    {"Craftsanity Item: Lustrous Star of Elune (#24037)", 11750901},
    {"Craftsanity Item: Stormy Star of Elune (#24039)", 11750902},
    {"Craftsanity Item: Brilliant Dawnstone (#24047)", 11750903},
    {"Craftsanity Item: Smooth Dawnstone (#24048)", 11750904},
    {"Craftsanity Item: Gleaming Dawnstone (#24050)", 11750905},
    {"Craftsanity Item: Rigid Dawnstone (#24051)", 11750906},
    {"Craftsanity Item: Thick Dawnstone (#24052)", 11750907},
    {"Craftsanity Item: Mystic Dawnstone (#24053)", 11750908},
    {"Craftsanity Item: Sovereign Nightseye (#24054)", 11750909},
    {"Craftsanity Item: Shifting Nightseye (#24055)", 11750910},
    {"Craftsanity Item: Glowing Nightseye (#24056)", 11750911},
    {"Craftsanity Item: Royal Nightseye (#24057)", 11750912},
    {"Craftsanity Item: Inscribed Noble Topaz (#24058)", 11750913},
    {"Craftsanity Item: Potent Noble Topaz (#24059)", 11750914},
    {"Craftsanity Item: Luminous Noble Topaz (#24060)", 11750915},
    {"Craftsanity Item: Glinting Noble Topaz (#24061)", 11750916},
    {"Craftsanity Item: Enduring Talasite (#24062)", 11750917},
    {"Craftsanity Item: Dazzling Talasite (#24065)", 11750918},
    {"Craftsanity Item: Radiant Talasite (#24066)", 11750919},
    {"Craftsanity Item: Jagged Talasite (#24067)", 11750920},
    {"Craftsanity Item: Khorium Band of Shadows (#24079)", 11750921},
    {"Craftsanity Item: Khorium Band of Frost (#24080)", 11750922},
    {"Craftsanity Item: Khorium Inferno Band (#24082)", 11750923},
    {"Craftsanity Item: Khorium Band of Leaves (#24085)", 11750924},
    {"Craftsanity Item: Arcane Khorium Band (#24086)", 11750925},
    {"Craftsanity Item: Heavy Felsteel Ring (#24087)", 11750926},
    {"Craftsanity Item: Delicate Eternium Ring (#24088)", 11750927},
    {"Craftsanity Item: Blazing Eternium Band (#24089)", 11750928},
    {"Craftsanity Item: Pendant of Frozen Flame (#24092)", 11750929},
    {"Craftsanity Item: Pendant of Thawing (#24093)", 11750930},
    {"Craftsanity Item: Pendant of Withering (#24095)", 11750931},
    {"Craftsanity Item: Pendant of Shadow's End (#24097)", 11750932},
    {"Craftsanity Item: Pendant of the Null Rune (#24098)", 11750933},
    {"Craftsanity Item: Roasted Moongraze Tenderloin (#24105)", 11750934},
    {"Craftsanity Item: Thick Felsteel Necklace (#24106)", 11750935},
    {"Craftsanity Item: Living Ruby Pendant (#24110)", 11750936},
    {"Craftsanity Item: Braided Eternium Chain (#24114)", 11750937},
    {"Craftsanity Item: Eye of the Night (#24116)", 11750938},
    {"Craftsanity Item: Embrace of the Dawn (#24117)", 11750939},
    {"Craftsanity Item: Chain of the Twilight Owl (#24121)", 11750940},
    {"Craftsanity Item: Coronet of Verdant Flame (#24122)", 11750941},
    {"Craftsanity Item: Circlet of Arcane Might (#24123)", 11750942},
    {"Craftsanity Item: Figurine - Felsteel Boar (#24124)", 11750943},
    {"Craftsanity Item: Figurine - Dawnstone Crab (#24125)", 11750944},
    {"Craftsanity Item: Figurine - Living Ruby Serpent (#24126)", 11750945},
    {"Craftsanity Item: Figurine - Talasite Owl (#24127)", 11750946},
    {"Craftsanity Item: Figurine - Nightseye Panther (#24128)", 11750947},
    {"Craftsanity Item: Unyielding Bracers (#24249)", 11750948},
    {"Craftsanity Item: Bracers of Havok (#24250)", 11750949},
    {"Craftsanity Item: Blackstrike Bracers (#24251)", 11750950},
    {"Craftsanity Item: Cloak of the Black Void (#24252)", 11750951},
    {"Craftsanity Item: Cloak of Eternity (#24253)", 11750952},
    {"Craftsanity Item: White Remedy Cape (#24254)", 11750953},
    {"Craftsanity Item: Unyielding Girdle (#24255)", 11750954},
    {"Craftsanity Item: Girdle of Ruination (#24256)", 11750955},
    {"Craftsanity Item: Black Belt of Knowledge (#24257)", 11750956},
    {"Craftsanity Item: Resolute Cape (#24258)", 11750957},
    {"Craftsanity Item: Vengeance Wrap (#24259)", 11750958},
    {"Craftsanity Item: Manaweave Cloak (#24260)", 11750959},
    {"Craftsanity Item: Whitemend Pants (#24261)", 11750960},
    {"Craftsanity Item: Spellstrike Pants (#24262)", 11750961},
    {"Craftsanity Item: Battlecast Pants (#24263)", 11750962},
    {"Craftsanity Item: Whitemend Hood (#24264)", 11750963},
    {"Craftsanity Item: Spellstrike Hood (#24266)", 11750964},
    {"Craftsanity Item: Battlecast Hood (#24267)", 11750965},
    {"Craftsanity Item: Heavy Netherweave Net (#24269)", 11750966},
    {"Craftsanity Item: Bag of Jewels (#24270)", 11750967},
    {"Craftsanity Item: Spellcloth (#24271)", 11750968},
    {"Craftsanity Item: Shadowcloth (#24272)", 11750969},
    {"Craftsanity Item: Mystic Spellthread (#24273)", 11750970},
    {"Craftsanity Item: Runic Spellthread (#24274)", 11750971},
    {"Craftsanity Item: Silver Spellthread (#24275)", 11750972},
    {"Craftsanity Item: Golden Spellthread (#24276)", 11750973},
    {"Craftsanity Item: Greater Rune of Warding (#25521)", 11750974},
    {"Craftsanity Item: Vindicator's Armor Kit (#25651)", 11750975},
    {"Craftsanity Item: Magister's Armor Kit (#25652)", 11750976},
    {"Craftsanity Item: Riding Crop (#25653)", 11750977},
    {"Craftsanity Item: Comfortable Insoles (#25679)", 11750978},
    {"Craftsanity Item: Stylin' Purple Hat (#25680)", 11750979},
    {"Craftsanity Item: Stylin' Adventure Hat (#25681)", 11750980},
    {"Craftsanity Item: Stylin' Jungle Hat (#25682)", 11750981},
    {"Craftsanity Item: Stylin' Crimson Hat (#25683)", 11750982},
    {"Craftsanity Item: Fel Leather Gloves (#25685)", 11750983},
    {"Craftsanity Item: Fel Leather Boots (#25686)", 11750984},
    {"Craftsanity Item: Fel Leather Leggings (#25687)", 11750985},
    {"Craftsanity Item: Heavy Clefthoof Vest (#25689)", 11750986},
    {"Craftsanity Item: Heavy Clefthoof Leggings (#25690)", 11750987},
    {"Craftsanity Item: Heavy Clefthoof Boots (#25691)", 11750988},
    {"Craftsanity Item: Netherfury Leggings (#25692)", 11750989},
    {"Craftsanity Item: Netherfury Boots (#25693)", 11750990},
    {"Craftsanity Item: Netherfury Belt (#25694)", 11750991},
    {"Craftsanity Item: Felstalker Belt (#25695)", 11750992},
    {"Craftsanity Item: Felstalker Breastplate (#25696)", 11750993},
    {"Craftsanity Item: Felstalker Bracers (#25697)", 11750994},
    {"Craftsanity Item: Adamantite Rod (#25844)", 11750995},
    {"Craftsanity Item: Eternium Rod (#25845)", 11750996},
    {"Craftsanity Item: Earthstorm Diamond (#25867)", 11750997},
    {"Craftsanity Item: Skyfire Diamond (#25868)", 11750998},
    {"Craftsanity Item: Purple Smoke Flare (#25886)", 11750999},
    {"Craftsanity Item: Destructive Skyfire Diamond (#25890)", 11751000},
    {"Craftsanity Item: Mystical Skyfire Diamond (#25893)", 11751001},
    {"Craftsanity Item: Swift Skyfire Diamond (#25894)", 11751002},
    {"Craftsanity Item: Enigmatic Skyfire Diamond (#25895)", 11751003},
    {"Craftsanity Item: Powerful Earthstorm Diamond (#25896)", 11751004},
    {"Craftsanity Item: Bracing Earthstorm Diamond (#25897)", 11751005},
    {"Craftsanity Item: Tenacious Earthstorm Diamond (#25898)", 11751006},
    {"Craftsanity Item: Brutal Earthstorm Diamond (#25899)", 11751007},
    {"Craftsanity Item: Insightful Earthstorm Diamond (#25901)", 11751008},
    {"Craftsanity Item: Lynx Steak (#27635)", 11751009},
    {"Craftsanity Item: Bat Bites (#27636)", 11751010},
    {"Craftsanity Item: Buzzard Bites (#27651)", 11751011},
    {"Craftsanity Item: Ravager Dog (#27655)", 11751012},
    {"Craftsanity Item: Sporeling Snack (#27656)", 11751013},
    {"Craftsanity Item: Blackened Basilisk (#27657)", 11751014},
    {"Craftsanity Item: Roasted Clefthoof (#27658)", 11751015},
    {"Craftsanity Item: Warp Burger (#27659)", 11751016},
    {"Craftsanity Item: Talbuk Steak (#27660)", 11751017},
    {"Craftsanity Item: Blackened Trout (#27661)", 11751018},
    {"Craftsanity Item: Feltail Delight (#27662)", 11751019},
    {"Craftsanity Item: Blackened Sporefish (#27663)", 11751020},
    {"Craftsanity Item: Grilled Mudfish (#27664)", 11751021},
    {"Craftsanity Item: Poached Bluefish (#27665)", 11751022},
    {"Craftsanity Item: Golden Fish Sticks (#27666)", 11751023},
    {"Craftsanity Item: Spicy Crawdad (#27667)", 11751024},
    {"Craftsanity Item: Smooth Golden Draenite (#28290)", 11751025},
    {"Craftsanity Item: Adamantite Weightstone (#28421)", 11751026},
    {"Craftsanity Item: Bright Blood Garnet (#28595)", 11751027},
    {"Craftsanity Item: Shadow Armor Kit (#29483)", 11751028},
    {"Craftsanity Item: Flame Armor Kit (#29485)", 11751029},
    {"Craftsanity Item: Frost Armor Kit (#29486)", 11751030},
    {"Craftsanity Item: Nature Armor Kit (#29487)", 11751031},
    {"Craftsanity Item: Arcane Armor Kit (#29488)", 11751032},
    {"Craftsanity Item: Enchanted Felscale Leggings (#29489)", 11751033},
    {"Craftsanity Item: Enchanted Felscale Gloves (#29490)", 11751034},
    {"Craftsanity Item: Enchanted Felscale Boots (#29491)", 11751035},
    {"Craftsanity Item: Flamescale Leggings (#29492)", 11751036},
    {"Craftsanity Item: Flamescale Boots (#29493)", 11751037},
    {"Craftsanity Item: Flamescale Belt (#29494)", 11751038},
    {"Craftsanity Item: Enchanted Clefthoof Leggings (#29495)", 11751039},
    {"Craftsanity Item: Enchanted Clefthoof Gloves (#29496)", 11751040},
    {"Craftsanity Item: Enchanted Clefthoof Boots (#29497)", 11751041},
    {"Craftsanity Item: Blastguard Pants (#29498)", 11751042},
    {"Craftsanity Item: Blastguard Boots (#29499)", 11751043},
    {"Craftsanity Item: Blastguard Belt (#29500)", 11751044},
    {"Craftsanity Item: Cobrascale Hood (#29502)", 11751045},
    {"Craftsanity Item: Cobrascale Gloves (#29503)", 11751046},
    {"Craftsanity Item: Windscale Hood (#29504)", 11751047},
    {"Craftsanity Item: Hood of Primal Life (#29505)", 11751048},
    {"Craftsanity Item: Gloves of the Living Touch (#29506)", 11751049},
    {"Craftsanity Item: Windslayer Wraps (#29507)", 11751050},
    {"Craftsanity Item: Living Dragonscale Helm (#29508)", 11751051},
    {"Craftsanity Item: Windstrike Gloves (#29509)", 11751052},
    {"Craftsanity Item: Netherdrake Helm (#29510)", 11751053},
    {"Craftsanity Item: Netherdrake Gloves (#29511)", 11751054},
    {"Craftsanity Item: Earthen Netherscale Boots (#29512)", 11751055},
    {"Craftsanity Item: Thick Netherscale Breastplate (#29514)", 11751056},
    {"Craftsanity Item: Drums of Battle (#29529)", 11751057},
    {"Craftsanity Item: Drums of Speed (#29530)", 11751058},
    {"Craftsanity Item: Drums of Restoration (#29531)", 11751059},
    {"Craftsanity Item: Drums of Panic (#29532)", 11751060},
    {"Craftsanity Item: Cobrahide Leg Armor (#29533)", 11751061},
    {"Craftsanity Item: Clefthide Leg Armor (#29534)", 11751062},
    {"Craftsanity Item: Nethercobra Leg Armor (#29535)", 11751063},
    {"Craftsanity Item: Nethercleft Leg Armor (#29536)", 11751064},
    {"Craftsanity Item: Reinforced Mining Bag (#29540)", 11751065},
    {"Craftsanity Item: Red Havoc Boots (#30031)", 11751066},
    {"Craftsanity Item: Red Belt of Battle (#30032)", 11751067},
    {"Craftsanity Item: Boots of the Protector (#30033)", 11751068},
    {"Craftsanity Item: Belt of the Guardian (#30034)", 11751069},
    {"Craftsanity Item: Boots of the Long Road (#30035)", 11751070},
    {"Craftsanity Item: Belt of the Long Road (#30036)", 11751071},
    {"Craftsanity Item: Boots of Blasting (#30037)", 11751072},
    {"Craftsanity Item: Belt of Blasting (#30038)", 11751073},
    {"Craftsanity Item: Boots of Utter Darkness (#30039)", 11751074},
    {"Craftsanity Item: Belt of Deep Shadow (#30040)", 11751075},
    {"Craftsanity Item: Boots of Natural Grace (#30041)", 11751076},
    {"Craftsanity Item: Belt of Natural Power (#30042)", 11751077},
    {"Craftsanity Item: Hurricane Boots (#30043)", 11751078},
    {"Craftsanity Item: Monsoon Belt (#30044)", 11751079},
    {"Craftsanity Item: Boots of the Crimson Hawk (#30045)", 11751080},
    {"Craftsanity Item: Belt of the Black Eagle (#30046)", 11751081},
    {"Craftsanity Item: Clam Bar (#30155)", 11751082},
    {"Craftsanity Item: Conjured Mountain Spring Water (#30703)", 11751083},
    {"Craftsanity Item: Ring of Arcane Shielding (#30825)", 11751084},
    {"Craftsanity Item: Cloak of Arcane Evasion (#30831)", 11751085},
    {"Craftsanity Item: Flameheart Bracers (#30837)", 11751086},
    {"Craftsanity Item: Flameheart Gloves (#30838)", 11751087},
    {"Craftsanity Item: Flameheart Vest (#30839)", 11751088},
    {"Craftsanity Item: Wildguard Breastplate (#31364)", 11751089},
    {"Craftsanity Item: Wildguard Leggings (#31367)", 11751090},
    {"Craftsanity Item: Wildguard Helm (#31368)", 11751091},
    {"Craftsanity Item: Iceguard Breastplate (#31369)", 11751092},
    {"Craftsanity Item: Iceguard Leggings (#31370)", 11751093},
    {"Craftsanity Item: Iceguard Helm (#31371)", 11751094},
    {"Craftsanity Item: The Frozen Eye (#31398)", 11751095},
    {"Craftsanity Item: The Natural Ward (#31399)", 11751096},
    {"Craftsanity Item: Mok'Nathal Shortribs (#31672)", 11751097},
    {"Craftsanity Item: Crunchy Serpent (#31673)", 11751098},
    {"Craftsanity Item: Fel Regeneration Potion (#31676)", 11751099},
    {"Craftsanity Item: Fel Mana Potion (#31677)", 11751100},
    {"Craftsanity Item: Fel Strength Elixir (#31679)", 11751101},
    {"Craftsanity Item: Great Golden Draenite (#31860)", 11751102},
    {"Craftsanity Item: Great Dawnstone (#31861)", 11751103},
    {"Craftsanity Item: Balanced Shadow Draenite (#31862)", 11751104},
    {"Craftsanity Item: Balanced Nightseye (#31863)", 11751105},
    {"Craftsanity Item: Infused Shadow Draenite (#31864)", 11751106},
    {"Craftsanity Item: Infused Nightseye (#31865)", 11751107},
    {"Craftsanity Item: Veiled Flame Spessarite (#31866)", 11751108},
    {"Craftsanity Item: Veiled Noble Topaz (#31867)", 11751109},
    {"Craftsanity Item: Wicked Noble Topaz (#31868)", 11751110},
    {"Craftsanity Item: Wicked Flame Spessarite (#31869)", 11751111},
    {"Craftsanity Item: Earthen Elixir (#32063)", 11751112},
    {"Craftsanity Item: Elixir of Ironskin (#32068)", 11751113},
    {"Craftsanity Item: Bold Crimson Spinel (#32193)", 11751114},
    {"Craftsanity Item: Delicate Crimson Spinel (#32194)", 11751115},
    {"Craftsanity Item: Teardrop Crimson Spinel (#32195)", 11751116},
    {"Craftsanity Item: Runed Crimson Spinel (#32196)", 11751117},
    {"Craftsanity Item: Bright Crimson Spinel (#32197)", 11751118},
    {"Craftsanity Item: Subtle Crimson Spinel (#32198)", 11751119},
    {"Craftsanity Item: Flashing Crimson Spinel (#32199)", 11751120},
    {"Craftsanity Item: Solid Empyrean Sapphire (#32200)", 11751121},
    {"Craftsanity Item: Sparkling Empyrean Sapphire (#32201)", 11751122},
    {"Craftsanity Item: Lustrous Empyrean Sapphire (#32202)", 11751123},
    {"Craftsanity Item: Stormy Empyrean Sapphire (#32203)", 11751124},
    {"Craftsanity Item: Brilliant Lionseye (#32204)", 11751125},
    {"Craftsanity Item: Smooth Lionseye (#32205)", 11751126},
    {"Craftsanity Item: Rigid Lionseye (#32206)", 11751127},
    {"Craftsanity Item: Gleaming Lionseye (#32207)", 11751128},
    {"Craftsanity Item: Thick Lionseye (#32208)", 11751129},
    {"Craftsanity Item: Mystic Lionseye (#32209)", 11751130},
    {"Craftsanity Item: Great Lionseye (#32210)", 11751131},
    {"Craftsanity Item: Sovereign Shadowsong Amethyst (#32211)", 11751132},
    {"Craftsanity Item: Shifting Shadowsong Amethyst (#32212)", 11751133},
    {"Craftsanity Item: Balanced Shadowsong Amethyst (#32213)", 11751134},
    {"Craftsanity Item: Infused Shadowsong Amethyst (#32214)", 11751135},
    {"Craftsanity Item: Glowing Shadowsong Amethyst (#32215)", 11751136},
    {"Craftsanity Item: Royal Shadowsong Amethyst (#32216)", 11751137},
    {"Craftsanity Item: Inscribed Pyrestone (#32217)", 11751138},
    {"Craftsanity Item: Potent Pyrestone (#32218)", 11751139},
    {"Craftsanity Item: Luminous Pyrestone (#32219)", 11751140},
    {"Craftsanity Item: Glinting Pyrestone (#32220)", 11751141},
    {"Craftsanity Item: Veiled Pyrestone (#32221)", 11751142},
    {"Craftsanity Item: Wicked Pyrestone (#32222)", 11751143},
    {"Craftsanity Item: Enduring Seaspray Emerald (#32223)", 11751144},
    {"Craftsanity Item: Radiant Seaspray Emerald (#32224)", 11751145},
    {"Craftsanity Item: Dazzling Seaspray Emerald (#32225)", 11751146},
    {"Craftsanity Item: Jagged Seaspray Emerald (#32226)", 11751147},
    {"Craftsanity Item: Soulguard Leggings (#32389)", 11751148},
    {"Craftsanity Item: Soulguard Girdle (#32390)", 11751149},
    {"Craftsanity Item: Soulguard Slippers (#32391)", 11751150},
    {"Craftsanity Item: Soulguard Bracers (#32392)", 11751151},
    {"Craftsanity Item: Redeemed Soul Cinch (#32393)", 11751152},
    {"Craftsanity Item: Redeemed Soul Moccasins (#32394)", 11751153},
    {"Craftsanity Item: Redeemed Soul Wristguards (#32395)", 11751154},
    {"Craftsanity Item: Redeemed Soul Legguards (#32396)", 11751155},
    {"Craftsanity Item: Waistguard of Shackled Souls (#32397)", 11751156},
    {"Craftsanity Item: Boots of Shackled Souls (#32398)", 11751157},
    {"Craftsanity Item: Bracers of Shackled Souls (#32399)", 11751158},
    {"Craftsanity Item: Greaves of Shackled Souls (#32400)", 11751159},
    {"Craftsanity Item: Shadesteel Girdle (#32401)", 11751160},
    {"Craftsanity Item: Shadesteel Sabots (#32402)", 11751161},
    {"Craftsanity Item: Shadesteel Bracers (#32403)", 11751162},
    {"Craftsanity Item: Shadesteel Greaves (#32404)", 11751163},
    {"Craftsanity Item: Relentless Earthstorm Diamond (#32409)", 11751164},
    {"Craftsanity Item: Thundering Skyfire Diamond (#32410)", 11751165},
    {"Craftsanity Item: Night's End (#32420)", 11751166},
    {"Craftsanity Item: Swiftsteel Bracers (#32568)", 11751167},
    {"Craftsanity Item: Swiftsteel Shoulders (#32570)", 11751168},
    {"Craftsanity Item: Dawnsteel Bracers (#32571)", 11751169},
    {"Craftsanity Item: Dawnsteel Shoulders (#32573)", 11751170},
    {"Craftsanity Item: Bindings of Lightning Reflexes (#32574)", 11751171},
    {"Craftsanity Item: Shoulders of Lightning Reflexes (#32575)", 11751172},
    {"Craftsanity Item: Living Earth Bindings (#32577)", 11751173},
    {"Craftsanity Item: Living Earth Shoulders (#32579)", 11751174},
    {"Craftsanity Item: Swiftstrike Bracers (#32580)", 11751175},
    {"Craftsanity Item: Swiftstrike Shoulders (#32581)", 11751176},
    {"Craftsanity Item: Bracers of Renewed Life (#32582)", 11751177},
    {"Craftsanity Item: Shoulderpads of Renewed Life (#32583)", 11751178},
    {"Craftsanity Item: Swiftheal Wraps (#32584)", 11751179},
    {"Craftsanity Item: Swiftheal Mantle (#32585)", 11751180},
    {"Craftsanity Item: Bracers of Nimble Thought (#32586)", 11751181},
    {"Craftsanity Item: Mantle of Nimble Thought (#32587)", 11751182},
    {"Craftsanity Item: Hammer of Righteous Might (#32854)", 11751183},
    {"Craftsanity Item: Healing Potion Injector (#33092)", 11751184},
    {"Craftsanity Item: Mana Potion Injector (#33093)", 11751185},
    {"Craftsanity Item: Cloak of Darkness (#33122)", 11751186},
    {"Craftsanity Item: Crimson Sun (#33131)", 11751187},
    {"Craftsanity Item: Don Julio's Heart (#33133)", 11751188},
    {"Craftsanity Item: Kailee's Rose (#33134)", 11751189},
    {"Craftsanity Item: Falling Star (#33135)", 11751190},
    {"Craftsanity Item: Blood of Amber (#33140)", 11751191},
    {"Craftsanity Item: Stone of Blades (#33143)", 11751192},
    {"Craftsanity Item: Facet of Eternity (#33144)", 11751193},
    {"Craftsanity Item: Ragesteel Shoulders (#33173)", 11751194},
    {"Craftsanity Item: Adamantite Weapon Chain (#33185)", 11751195},
    {"Craftsanity Item: Shadowprowler's Chestguard (#33204)", 11751196},
    {"Craftsanity Item: Flask of Chromatic Wonder (#33208)", 11751197},
    {"Craftsanity Item: Mana Sapphire (#33312)", 11751198},
    {"Craftsanity Item: Steady Talasite (#33782)", 11751199},
    {"Craftsanity Item: Heavy Copper Longsword (#33791)", 11751200},
    {"Craftsanity Item: Skullfish Soup (#33825)", 11751201},
    {"Craftsanity Item: Stormchops (#33866)", 11751202},
    {"Craftsanity Item: Broiled Bloodfin (#33867)", 11751203},
    {"Craftsanity Item: Spicy Hot Talbuk (#33872)", 11751204},
    {"Craftsanity Item: Kibler's Bits (#33874)", 11751205},
    {"Craftsanity Item: Delicious Chocolate Cake (#33924)", 11751206},
    {"Craftsanity Item: Red Winter Clothes (#34085)", 11751207},
    {"Craftsanity Item: Winter Boots (#34086)", 11751208},
    {"Craftsanity Item: Green Winter Clothes (#34087)", 11751209},
    {"Craftsanity Item: Quiver of a Thousand Feathers (#34105)", 11751210},
    {"Craftsanity Item: Netherscale Ammo Pouch (#34106)", 11751211},
    {"Craftsanity Item: Field Repair Bot 110G (#34113)", 11751212},
    {"Craftsanity Item: Chaotic Skyfire Diamond (#34220)", 11751213},
    {"Craftsanity Item: Quad Deathblow X44 Goggles (#34353)", 11751214},
    {"Craftsanity Item: Mayhem Projection Goggles (#34354)", 11751215},
    {"Craftsanity Item: Lightning Etched Specs (#34355)", 11751216},
    {"Craftsanity Item: Surestrike Goggles v3.0 (#34356)", 11751217},
    {"Craftsanity Item: Hard Khorium Goggles (#34357)", 11751218},
    {"Craftsanity Item: Hard Khorium Choker (#34358)", 11751219},
    {"Craftsanity Item: Pendant of Sunfire (#34359)", 11751220},
    {"Craftsanity Item: Amulet of Flowing Life (#34360)", 11751221},
    {"Craftsanity Item: Hard Khorium Band (#34361)", 11751222},
    {"Craftsanity Item: Loop of Forged Power (#34362)", 11751223},
    {"Craftsanity Item: Ring of Flowing Life (#34363)", 11751224},
    {"Craftsanity Item: Sunfire Robe (#34364)", 11751225},
    {"Craftsanity Item: Robe of Eternal Light (#34365)", 11751226},
    {"Craftsanity Item: Sunfire Handwraps (#34366)", 11751227},
    {"Craftsanity Item: Hands of Eternal Light (#34367)", 11751228},
    {"Craftsanity Item: Carapace of Sun and Shadow (#34369)", 11751229},
    {"Craftsanity Item: Gloves of Immortal Dusk (#34370)", 11751230},
    {"Craftsanity Item: Leather Chestguard of the Sun (#34371)", 11751231},
    {"Craftsanity Item: Leather Gauntlets of the Sun (#34372)", 11751232},
    {"Craftsanity Item: Embrace of the Phoenix (#34373)", 11751233},
    {"Craftsanity Item: Fletcher's Gloves of the Phoenix (#34374)", 11751234},
    {"Craftsanity Item: Sun-Drenched Scale Chestguard (#34375)", 11751235},
    {"Craftsanity Item: Sun-Drenched Scale Gloves (#34376)", 11751236},
    {"Craftsanity Item: Hard Khorium Battleplate (#34377)", 11751237},
    {"Craftsanity Item: Hard Khorium Battlefists (#34378)", 11751238},
    {"Craftsanity Item: Sunblessed Breastplate (#34379)", 11751239},
    {"Craftsanity Item: Sunblessed Gauntlets (#34380)", 11751240},
    {"Craftsanity Item: Hot Apple Cider (#34411)", 11751241},
    {"Craftsanity Item: Bag of Many Hides (#34490)", 11751242},
    {"Craftsanity Item: Adamantite Shell Machine (#34504)", 11751243},
    {"Craftsanity Item: Heavy Frostweave Bandage (#34722)", 11751244},
    {"Craftsanity Item: Mega Mammoth Meal (#34754)", 11751245},
    {"Craftsanity Item: Tender Shoveltusk Steak (#34755)", 11751246},
    {"Craftsanity Item: Spiced Worm Burger (#34756)", 11751247},
    {"Craftsanity Item: Very Burnt Worg (#34757)", 11751248},
    {"Craftsanity Item: Mighty Rhino Dogs (#34758)", 11751249},
    {"Craftsanity Item: Poached Northern Sculpin (#34766)", 11751250},
    {"Craftsanity Item: Firecracker Salmon (#34767)", 11751251},
    {"Craftsanity Item: Spicy Blue Nettlefish (#34768)", 11751252},
    {"Craftsanity Item: Imperial Manta Steak (#34769)", 11751253},
    {"Craftsanity Item: Captain Rumsey's Lager (#34832)", 11751254},
    {"Craftsanity Item: Annihilator Holo-Gogs (#34847)", 11751255},
    {"Craftsanity Item: Hardened Khorium (#35128)", 11751256},
    {"Craftsanity Item: Powerheal 9000 Lens (#35181)", 11751257},
    {"Craftsanity Item: Hyper-Magnified Moon Specs (#35182)", 11751258},
    {"Craftsanity Item: Wonderheal XT68 Shades (#35183)", 11751259},
    {"Craftsanity Item: Primal-Attuned Goggles (#35184)", 11751260},
    {"Craftsanity Item: Justicebringer 3000 Specs (#35185)", 11751261},
    {"Craftsanity Item: Quick Dawnstone (#35315)", 11751262},
    {"Craftsanity Item: Reckless Noble Topaz (#35316)", 11751263},
    {"Craftsanity Item: Forceful Talasite (#35318)", 11751264},
    {"Craftsanity Item: Eternal Earthstorm Diamond (#35501)", 11751265},
    {"Craftsanity Item: Ember Skyfire Diamond (#35503)", 11751266},
    {"Craftsanity Item: Charred Bear Kabobs (#35563)", 11751267},
    {"Craftsanity Item: Juicy Bear Burger (#35565)", 11751268},
    {"Craftsanity Item: Rocket Boots Xtreme Lite (#35581)", 11751269},
    {"Craftsanity Item: Figurine - Empyrean Tortoise (#35693)", 11751270},
    {"Craftsanity Item: Figurine - Khorium Boar (#35694)", 11751271},
    {"Craftsanity Item: Figurine - Crimson Serpent (#35700)", 11751272},
    {"Craftsanity Item: Figurine - Shadowsong Panther (#35702)", 11751273},
    {"Craftsanity Item: Figurine - Seaspray Albatross (#35703)", 11751274},
    {"Craftsanity Item: Regal Nightseye (#35707)", 11751275},
    {"Craftsanity Item: Guardian's Alchemist Stone (#35748)", 11751276},
    {"Craftsanity Item: Sorcerer's Alchemist Stone (#35749)", 11751277},
    {"Craftsanity Item: Redeemer's Alchemist Stone (#35750)", 11751278},
    {"Craftsanity Item: Assassin's Alchemist Stone (#35751)", 11751279},
    {"Craftsanity Item: Steady Seaspray Emerald (#35758)", 11751280},
    {"Craftsanity Item: Forceful Seaspray Emerald (#35759)", 11751281},
    {"Craftsanity Item: Reckless Pyrestone (#35760)", 11751282},
    {"Craftsanity Item: Quick Lionseye (#35761)", 11751283},
    {"Craftsanity Item: Bright Dragon's Eye (#36766)", 11751284},
    {"Craftsanity Item: Solid Dragon's Eye (#36767)", 11751285},
    {"Craftsanity Item: Demonic Soulstone (#36895)", 11751286},
    {"Craftsanity Item: Purified Shadowsong Amethyst (#37503)", 11751287},
    {"Craftsanity Item: Mycah's Botanical Bag (#38225)", 11751288},
    {"Craftsanity Item: Haliscan Jacket (#38277)", 11751289},
    {"Craftsanity Item: Haliscan Pantaloons (#38278)", 11751290},
    {"Craftsanity Item: Mammoth Mining Bag (#38347)", 11751291},
    {"Craftsanity Item: Trapper's Traveling Pack (#38399)", 11751292},
    {"Craftsanity Item: Black Chitinguard Boots (#38590)", 11751293},
    {"Craftsanity Item: Kungaloosh (#39520)", 11751294},
    {"Craftsanity Item: Bold Scarlet Ruby (#39996)", 11751295},
    {"Craftsanity Item: Delicate Scarlet Ruby (#39997)", 11751296},
    {"Craftsanity Item: Runed Scarlet Ruby (#39998)", 11751297},
    {"Craftsanity Item: Subtle Scarlet Ruby (#40000)", 11751298},
    {"Craftsanity Item: Flashing Scarlet Ruby (#40001)", 11751299},
    {"Craftsanity Item: Fractured Scarlet Ruby (#40002)", 11751300},
    {"Craftsanity Item: Precise Scarlet Ruby (#40003)", 11751301},
    {"Craftsanity Item: Solid Sky Sapphire (#40008)", 11751302},
    {"Craftsanity Item: Lustrous Sky Sapphire (#40010)", 11751303},
    {"Craftsanity Item: Stormy Sky Sapphire (#40011)", 11751304},
    {"Craftsanity Item: Smooth Autumn's Glow (#40013)", 11751305},
    {"Craftsanity Item: Rigid Autumn's Glow (#40014)", 11751306},
    {"Craftsanity Item: Thick Autumn's Glow (#40015)", 11751307},
    {"Craftsanity Item: Mystic Autumn's Glow (#40016)", 11751308},
    {"Craftsanity Item: Quick Autumn's Glow (#40017)", 11751309},
    {"Craftsanity Item: Sovereign Twilight Opal (#40022)", 11751310},
    {"Craftsanity Item: Shifting Twilight Opal (#40023)", 11751311},
    {"Craftsanity Item: Tenuous Twilight Opal (#40024)", 11751312},
    {"Craftsanity Item: Glowing Twilight Opal (#40025)", 11751313},
    {"Craftsanity Item: Purified Twilight Opal (#40026)", 11751314},
    {"Craftsanity Item: Royal Twilight Opal (#40027)", 11751315},
    {"Craftsanity Item: Mysterious Twilight Opal (#40028)", 11751316},
    {"Craftsanity Item: Infused Twilight Opal (#40030)", 11751317},
    {"Craftsanity Item: Regal Twilight Opal (#40031)", 11751318},
    {"Craftsanity Item: Defender's Twilight Opal (#40032)", 11751319},
    {"Craftsanity Item: Puissant Twilight Opal (#40033)", 11751320},
    {"Craftsanity Item: Guardian's Twilight Opal (#40034)", 11751321},
    {"Craftsanity Item: Inscribed Monarch Topaz (#40037)", 11751322},
    {"Craftsanity Item: Etched Monarch Topaz (#40038)", 11751323},
    {"Craftsanity Item: Champion's Monarch Topaz (#40039)", 11751324},
    {"Craftsanity Item: Resplendent Monarch Topaz (#40040)", 11751325},
    {"Craftsanity Item: Fierce Monarch Topaz (#40041)", 11751326},
    {"Craftsanity Item: Deadly Monarch Topaz (#40043)", 11751327},
    {"Craftsanity Item: Glinting Monarch Topaz (#40044)", 11751328},
    {"Craftsanity Item: Lucent Monarch Topaz (#40045)", 11751329},
    {"Craftsanity Item: Deft Monarch Topaz (#40046)", 11751330},
    {"Craftsanity Item: Luminous Monarch Topaz (#40047)", 11751331},
    {"Craftsanity Item: Potent Monarch Topaz (#40048)", 11751332},
    {"Craftsanity Item: Veiled Monarch Topaz (#40049)", 11751333},
    {"Craftsanity Item: Durable Monarch Topaz (#40050)", 11751334},
    {"Craftsanity Item: Reckless Monarch Topaz (#40051)", 11751335},
    {"Craftsanity Item: Wicked Monarch Topaz (#40052)", 11751336},
    {"Craftsanity Item: Empowered Monarch Topaz (#40054)", 11751337},
    {"Craftsanity Item: Stark Monarch Topaz (#40055)", 11751338},
    {"Craftsanity Item: Stalwart Monarch Topaz (#40056)", 11751339},
    {"Craftsanity Item: Glimmering Monarch Topaz (#40057)", 11751340},
    {"Craftsanity Item: Accurate Monarch Topaz (#40058)", 11751341},
    {"Craftsanity Item: Resolute Monarch Topaz (#40059)", 11751342},
    {"Craftsanity Item: Timeless Forest Emerald (#40085)", 11751343},
    {"Craftsanity Item: Jagged Forest Emerald (#40086)", 11751344},
    {"Craftsanity Item: Vivid Forest Emerald (#40088)", 11751345},
    {"Craftsanity Item: Enduring Forest Emerald (#40089)", 11751346},
    {"Craftsanity Item: Steady Forest Emerald (#40090)", 11751347},
    {"Craftsanity Item: Forceful Forest Emerald (#40091)", 11751348},
    {"Craftsanity Item: Seer's Forest Emerald (#40092)", 11751349},
    {"Craftsanity Item: Misty Forest Emerald (#40095)", 11751350},
    {"Craftsanity Item: Sundered Forest Emerald (#40096)", 11751351},
    {"Craftsanity Item: Radiant Forest Emerald (#40098)", 11751352},
    {"Craftsanity Item: Shining Forest Emerald (#40099)", 11751353},
    {"Craftsanity Item: Lambent Forest Emerald (#40100)", 11751354},
    {"Craftsanity Item: Tense Forest Emerald (#40101)", 11751355},
    {"Craftsanity Item: Turbid Forest Emerald (#40102)", 11751356},
    {"Craftsanity Item: Opaque Forest Emerald (#40103)", 11751357},
    {"Craftsanity Item: Intricate Forest Emerald (#40104)", 11751358},
    {"Craftsanity Item: Energized Forest Emerald (#40105)", 11751359},
    {"Craftsanity Item: Shattered Forest Emerald (#40106)", 11751360},
    {"Craftsanity Item: Bold Cardinal Ruby (#40111)", 11751361},
    {"Craftsanity Item: Delicate Cardinal Ruby (#40112)", 11751362},
    {"Craftsanity Item: Runed Cardinal Ruby (#40113)", 11751363},
    {"Craftsanity Item: Bright Cardinal Ruby (#40114)", 11751364},
    {"Craftsanity Item: Subtle Cardinal Ruby (#40115)", 11751365},
    {"Craftsanity Item: Flashing Cardinal Ruby (#40116)", 11751366},
    {"Craftsanity Item: Fractured Cardinal Ruby (#40117)", 11751367},
    {"Craftsanity Item: Precise Cardinal Ruby (#40118)", 11751368},
    {"Craftsanity Item: Solid Majestic Zircon (#40119)", 11751369},
    {"Craftsanity Item: Sparkling Majestic Zircon (#40120)", 11751370},
    {"Craftsanity Item: Lustrous Majestic Zircon (#40121)", 11751371},
    {"Craftsanity Item: Stormy Majestic Zircon (#40122)", 11751372},
    {"Craftsanity Item: Brilliant King's Amber (#40123)", 11751373},
    {"Craftsanity Item: Smooth King's Amber (#40124)", 11751374},
    {"Craftsanity Item: Rigid King's Amber (#40125)", 11751375},
    {"Craftsanity Item: Thick King's Amber (#40126)", 11751376},
    {"Craftsanity Item: Mystic King's Amber (#40127)", 11751377},
    {"Craftsanity Item: Quick King's Amber (#40128)", 11751378},
    {"Craftsanity Item: Sovereign Dreadstone (#40129)", 11751379},
    {"Craftsanity Item: Shifting Dreadstone (#40130)", 11751380},
    {"Craftsanity Item: Tenuous Dreadstone (#40131)", 11751381},
    {"Craftsanity Item: Glowing Dreadstone (#40132)", 11751382},
    {"Craftsanity Item: Purified Dreadstone (#40133)", 11751383},
    {"Craftsanity Item: Royal Dreadstone (#40134)", 11751384},
    {"Craftsanity Item: Mysterious Dreadstone (#40135)", 11751385},
    {"Craftsanity Item: Balanced Dreadstone (#40136)", 11751386},
    {"Craftsanity Item: Infused Dreadstone (#40137)", 11751387},
    {"Craftsanity Item: Regal Dreadstone (#40138)", 11751388},
    {"Craftsanity Item: Defender's Dreadstone (#40139)", 11751389},
    {"Craftsanity Item: Puissant Dreadstone (#40140)", 11751390},
    {"Craftsanity Item: Guardian's Dreadstone (#40141)", 11751391},
    {"Craftsanity Item: Inscribed Ametrine (#40142)", 11751392},
    {"Craftsanity Item: Etched Ametrine (#40143)", 11751393},
    {"Craftsanity Item: Champion's Ametrine (#40144)", 11751394},
    {"Craftsanity Item: Resplendent Ametrine (#40145)", 11751395},
    {"Craftsanity Item: Fierce Ametrine (#40146)", 11751396},
    {"Craftsanity Item: Deadly Ametrine (#40147)", 11751397},
    {"Craftsanity Item: Glinting Ametrine (#40148)", 11751398},
    {"Craftsanity Item: Lucent Ametrine (#40149)", 11751399},
    {"Craftsanity Item: Deft Ametrine (#40150)", 11751400},
    {"Craftsanity Item: Luminous Ametrine (#40151)", 11751401},
    {"Craftsanity Item: Potent Ametrine (#40152)", 11751402},
    {"Craftsanity Item: Veiled Ametrine (#40153)", 11751403},
    {"Craftsanity Item: Durable Ametrine (#40154)", 11751404},
    {"Craftsanity Item: Reckless Ametrine (#40155)", 11751405},
    {"Craftsanity Item: Wicked Ametrine (#40156)", 11751406},
    {"Craftsanity Item: Pristine Ametrine (#40157)", 11751407},
    {"Craftsanity Item: Empowered Ametrine (#40158)", 11751408},
    {"Craftsanity Item: Stark Ametrine (#40159)", 11751409},
    {"Craftsanity Item: Stalwart Ametrine (#40160)", 11751410},
    {"Craftsanity Item: Glimmering Ametrine (#40161)", 11751411},
    {"Craftsanity Item: Accurate Ametrine (#40162)", 11751412},
    {"Craftsanity Item: Resolute Ametrine (#40163)", 11751413},
    {"Craftsanity Item: Timeless Eye of Zul (#40164)", 11751414},
    {"Craftsanity Item: Jagged Eye of Zul (#40165)", 11751415},
    {"Craftsanity Item: Vivid Eye of Zul (#40166)", 11751416},
    {"Craftsanity Item: Enduring Eye of Zul (#40167)", 11751417},
    {"Craftsanity Item: Steady Eye of Zul (#40168)", 11751418},
    {"Craftsanity Item: Forceful Eye of Zul (#40169)", 11751419},
    {"Craftsanity Item: Seer's Eye of Zul (#40170)", 11751420},
    {"Craftsanity Item: Misty Eye of Zul (#40171)", 11751421},
    {"Craftsanity Item: Shining Eye of Zul (#40172)", 11751422},
    {"Craftsanity Item: Turbid Eye of Zul (#40173)", 11751423},
    {"Craftsanity Item: Intricate Eye of Zul (#40174)", 11751424},
    {"Craftsanity Item: Dazzling Eye of Zul (#40175)", 11751425},
    {"Craftsanity Item: Sundered Eye of Zul (#40176)", 11751426},
    {"Craftsanity Item: Lambent Eye of Zul (#40177)", 11751427},
    {"Craftsanity Item: Opaque Eye of Zul (#40178)", 11751428},
    {"Craftsanity Item: Energized Eye of Zul (#40179)", 11751429},
    {"Craftsanity Item: Radiant Eye of Zul (#40180)", 11751430},
    {"Craftsanity Item: Tense Eye of Zul (#40181)", 11751431},
    {"Craftsanity Item: Shattered Eye of Zul (#40182)", 11751432},
    {"Craftsanity Item: Mighty Arcane Protection Potion (#40213)", 11751433},
    {"Craftsanity Item: Mighty Fire Protection Potion (#40214)", 11751434},
    {"Craftsanity Item: Mighty Frost Protection Potion (#40215)", 11751435},
    {"Craftsanity Item: Mighty Nature Protection Potion (#40216)", 11751436},
    {"Craftsanity Item: Mighty Shadow Protection Potion (#40217)", 11751437},
    {"Craftsanity Item: Master Firestone (#40773)", 11751438},
    {"Craftsanity Item: Reinforced Cobalt Shoulders (#40956)", 11751439},
    {"Craftsanity Item: Reinforced Cobalt Helm (#40957)", 11751440},
    {"Craftsanity Item: Reinforced Cobalt Legplates (#40958)", 11751441},
    {"Craftsanity Item: Reinforced Cobalt Chestpiece (#40959)", 11751442},
    {"Craftsanity Item: Firestone (#41169)", 11751443},
    {"Craftsanity Item: Lesser Firestone (#41170)", 11751444},
    {"Craftsanity Item: Greater Firestone (#41171)", 11751445},
    {"Craftsanity Item: Major Firestone (#41172)", 11751446},
    {"Craftsanity Item: Fel Firestone (#41173)", 11751447},
    {"Craftsanity Item: Grand Firestone (#41174)", 11751448},
    {"Craftsanity Item: Spellstone (#41191)", 11751449},
    {"Craftsanity Item: Greater Spellstone (#41192)", 11751450},
    {"Craftsanity Item: Major Spellstone (#41193)", 11751451},
    {"Craftsanity Item: Master Spellstone (#41194)", 11751452},
    {"Craftsanity Item: Demonic Spellstone (#41195)", 11751453},
    {"Craftsanity Item: Grand Spellstone (#41196)", 11751454},
    {"Craftsanity Item: Red Lumberjack Shirt (#41248)", 11751455},
    {"Craftsanity Item: Blue Lumberjack Shirt (#41249)", 11751456},
    {"Craftsanity Item: Green Lumberjack Shirt (#41250)", 11751457},
    {"Craftsanity Item: Yellow Lumberjack Shirt (#41251)", 11751458},
    {"Craftsanity Item: Red Workman's Shirt (#41252)", 11751459},
    {"Craftsanity Item: Blue Workman's Shirt (#41253)", 11751460},
    {"Craftsanity Item: Rustic Workman's Shirt (#41254)", 11751461},
    {"Craftsanity Item: Green Workman's Shirt (#41255)", 11751462},
    {"Craftsanity Item: Chaotic Skyflare Diamond (#41285)", 11751463},
    {"Craftsanity Item: Destructive Skyflare Diamond (#41307)", 11751464},
    {"Craftsanity Item: Ember Skyflare Diamond (#41333)", 11751465},
    {"Craftsanity Item: Enigmatic Skyflare Diamond (#41335)", 11751466},
    {"Craftsanity Item: Swift Skyflare Diamond (#41339)", 11751467},
    {"Craftsanity Item: Tireless Skyflare Diamond (#41375)", 11751468},
    {"Craftsanity Item: Revitalizing Skyflare Diamond (#41376)", 11751469},
    {"Craftsanity Item: Effulgent Skyflare Diamond (#41377)", 11751470},
    {"Craftsanity Item: Forlorn Skyflare Diamond (#41378)", 11751471},
    {"Craftsanity Item: Impassive Skyflare Diamond (#41379)", 11751472},
    {"Craftsanity Item: Austere Earthsiege Diamond (#41380)", 11751473},
    {"Craftsanity Item: Persistent Earthsiege Diamond (#41381)", 11751474},
    {"Craftsanity Item: Trenchant Earthsiege Diamond (#41382)", 11751475},
    {"Craftsanity Item: Invigorating Earthsiege Diamond (#41385)", 11751476},
    {"Craftsanity Item: Beaming Earthsiege Diamond (#41389)", 11751477},
    {"Craftsanity Item: Bracing Earthsiege Diamond (#41395)", 11751478},
    {"Craftsanity Item: Eternal Earthsiege Diamond (#41396)", 11751479},
    {"Craftsanity Item: Powerful Earthsiege Diamond (#41397)", 11751480},
    {"Craftsanity Item: Relentless Earthsiege Diamond (#41398)", 11751481},
    {"Craftsanity Item: Thundering Skyflare Diamond (#41400)", 11751482},
    {"Craftsanity Item: Insightful Earthsiege Diamond (#41401)", 11751483},
    {"Craftsanity Item: Mechano-hog (#41508)", 11751484},
    {"Craftsanity Item: Ebonweave (#41593)", 11751485},
    {"Craftsanity Item: Moonshroud (#41594)", 11751486},
    {"Craftsanity Item: Spellweave (#41595)", 11751487},
    {"Craftsanity Item: Abyssal Bag (#41597)", 11751488},
    {"Craftsanity Item: Mysterious Bag (#41598)", 11751489},
    {"Craftsanity Item: Frostweave Bag (#41599)", 11751490},
    {"Craftsanity Item: Glacial Bag (#41600)", 11751491},
    {"Craftsanity Item: Brilliant Spellthread (#41602)", 11751492},
    {"Craftsanity Item: Sapphire Spellthread (#41604)", 11751493},
    {"Craftsanity Item: Wispcloak (#41609)", 11751494},
    {"Craftsanity Item: Deathchill Cloak (#41610)", 11751495},
    {"Craftsanity Item: Hat of Wintry Doom (#41984)", 11751496},
    {"Craftsanity Item: Silky Iceshard Boots (#41985)", 11751497},
    {"Craftsanity Item: Deep Frozen Cord (#41986)", 11751498},
    {"Craftsanity Item: Frostmoon Pants (#42093)", 11751499},
    {"Craftsanity Item: Light Blessed Mittens (#42095)", 11751500},
    {"Craftsanity Item: Aurora Slippers (#42096)", 11751501},
    {"Craftsanity Item: Moonshroud Robe (#42100)", 11751502},
    {"Craftsanity Item: Ebonweave Robe (#42101)", 11751503},
    {"Craftsanity Item: Spellweave Robe (#42102)", 11751504},
    {"Craftsanity Item: Moonshroud Gloves (#42103)", 11751505},
    {"Craftsanity Item: Ebonweave Gloves (#42111)", 11751506},
    {"Craftsanity Item: Spellweave Gloves (#42113)", 11751507},
    {"Craftsanity Item: Bold Dragon's Eye (#42142)", 11751508},
    {"Craftsanity Item: Delicate Dragon's Eye (#42143)", 11751509},
    {"Craftsanity Item: Runed Dragon's Eye (#42144)", 11751510},
    {"Craftsanity Item: Sparkling Dragon's Eye (#42145)", 11751511},
    {"Craftsanity Item: Lustrous Dragon's Eye (#42146)", 11751512},
    {"Craftsanity Item: Brilliant Dragon's Eye (#42148)", 11751513},
    {"Craftsanity Item: Smooth Dragon's Eye (#42149)", 11751514},
    {"Craftsanity Item: Quick Dragon's Eye (#42150)", 11751515},
    {"Craftsanity Item: Subtle Dragon's Eye (#42151)", 11751516},
    {"Craftsanity Item: Flashing Dragon's Eye (#42152)", 11751517},
    {"Craftsanity Item: Fractured Dragon's Eye (#42153)", 11751518},
    {"Craftsanity Item: Precise Dragon's Eye (#42154)", 11751519},
    {"Craftsanity Item: Stormy Dragon's Eye (#42155)", 11751520},
    {"Craftsanity Item: Rigid Dragon's Eye (#42156)", 11751521},
    {"Craftsanity Item: Thick Dragon's Eye (#42157)", 11751522},
    {"Craftsanity Item: Mystic Dragon's Eye (#42158)", 11751523},
    {"Craftsanity Item: Titanium Impact Band (#42642)", 11751524},
    {"Craftsanity Item: Titanium Earthguard Ring (#42643)", 11751525},
    {"Craftsanity Item: Titanium Spellshock Ring (#42644)", 11751526},
    {"Craftsanity Item: Titanium Impact Choker (#42645)", 11751527},
    {"Craftsanity Item: Titanium Earthguard Chain (#42646)", 11751528},
    {"Craftsanity Item: Titanium Spellshock Necklace (#42647)", 11751529},
    {"Craftsanity Item: Spicy Fried Herring (#42993)", 11751530},
    {"Craftsanity Item: Rhinolicious Wormsteak (#42994)", 11751531},
    {"Craftsanity Item: Hearty Rhino (#42995)", 11751532},
    {"Craftsanity Item: Snapper Extreme (#42996)", 11751533},
    {"Craftsanity Item: Blackened Worg Steak (#42997)", 11751534},
    {"Craftsanity Item: Cuttlesteak (#42998)", 11751535},
    {"Craftsanity Item: Blackened Dragonfin (#42999)", 11751536},
    {"Craftsanity Item: Dragonfin Filet (#43000)", 11751537},
    {"Craftsanity Item: Tracker Snacks (#43001)", 11751538},
    {"Craftsanity Item: Critter Bites (#43004)", 11751539},
    {"Craftsanity Item: Spiced Mammoth Treats (#43005)", 11751540},
    {"Craftsanity Item: Fish Feast (#43015)", 11751541},
    {"Craftsanity Item: Ring of Earthen Might (#43250)", 11751542},
    {"Craftsanity Item: Ring of Scarlet Shadows (#43251)", 11751543},
    {"Craftsanity Item: Windfire Band (#43252)", 11751544},
    {"Craftsanity Item: Ring of Northern Tears (#43253)", 11751545},
    {"Craftsanity Item: Eviscerator's Facemask (#43260)", 11751546},
    {"Craftsanity Item: Overcast Headguard (#43261)", 11751547},
    {"Craftsanity Item: Overcast Spaulders (#43262)", 11751548},
    {"Craftsanity Item: Overcast Chestguard (#43263)", 11751549},
    {"Craftsanity Item: Overcast Bracers (#43264)", 11751550},
    {"Craftsanity Item: Overcast Handwraps (#43265)", 11751551},
    {"Craftsanity Item: Overcast Belt (#43266)", 11751552},
    {"Craftsanity Item: Overcast Leggings (#43271)", 11751553},
    {"Craftsanity Item: Overcast Boots (#43273)", 11751554},
    {"Craftsanity Item: Eviscerator's Shoulderpads (#43433)", 11751555},
    {"Craftsanity Item: Eviscerator's Chestguard (#43434)", 11751556},
    {"Craftsanity Item: Eviscerator's Bindings (#43435)", 11751557},
    {"Craftsanity Item: Eviscerator's Gauntlets (#43436)", 11751558},
    {"Craftsanity Item: Eviscerator's Waistguard (#43437)", 11751559},
    {"Craftsanity Item: Eviscerator's Legguards (#43438)", 11751560},
    {"Craftsanity Item: Eviscerator's Treads (#43439)", 11751561},
    {"Craftsanity Item: Swiftarrow Belt (#43442)", 11751562},
    {"Craftsanity Item: Swiftarrow Boots (#43443)", 11751563},
    {"Craftsanity Item: Swiftarrow Bracers (#43444)", 11751564},
    {"Craftsanity Item: Swiftarrow Hauberk (#43445)", 11751565},
    {"Craftsanity Item: Swiftarrow Gauntlets (#43446)", 11751566},
    {"Craftsanity Item: Swiftarrow Helm (#43447)", 11751567},
    {"Craftsanity Item: Swiftarrow Leggings (#43448)", 11751568},
    {"Craftsanity Item: Swiftarrow Shoulderguards (#43449)", 11751569},
    {"Craftsanity Item: Stormhide Belt (#43450)", 11751570},
    {"Craftsanity Item: Stormhide Stompers (#43451)", 11751571},
    {"Craftsanity Item: Stormhide Wristguards (#43452)", 11751572},
    {"Craftsanity Item: Stormhide Hauberk (#43453)", 11751573},
    {"Craftsanity Item: Stormhide Grips (#43454)", 11751574},
    {"Craftsanity Item: Stormhide Crown (#43455)", 11751575},
    {"Craftsanity Item: Stormhide Legguards (#43456)", 11751576},
    {"Craftsanity Item: Stormhide Shoulders (#43457)", 11751577},
    {"Craftsanity Item: Giantmaim Legguards (#43458)", 11751578},
    {"Craftsanity Item: Giantmaim Bracers (#43459)", 11751579},
    {"Craftsanity Item: Revenant's Breastplate (#43461)", 11751580},
    {"Craftsanity Item: Revenant's Treads (#43469)", 11751581},
    {"Craftsanity Item: Gigantic Feast (#43478)", 11751582},
    {"Craftsanity Item: Small Feast (#43480)", 11751583},
    {"Craftsanity Item: Trollwoven Spaulders (#43481)", 11751584},
    {"Craftsanity Item: Savage Titanium Ring (#43482)", 11751585},
    {"Craftsanity Item: Trollwoven Girdle (#43484)", 11751586},
    {"Craftsanity Item: Last Weeks Mammoth (#43488)", 11751587},
    {"Craftsanity Item: Tasty Cupcake (#43490)", 11751588},
    {"Craftsanity Item: Bad Clams (#43491)", 11751589},
    {"Craftsanity Item: Haunted Herring (#43492)", 11751590},
    {"Craftsanity Item: Earthgiving Legguards (#43495)", 11751591},
    {"Craftsanity Item: Savage Titanium Band (#43498)", 11751592},
    {"Craftsanity Item: Earthgiving Boots (#43502)", 11751593},
    {"Craftsanity Item: Conjured Mana Pie (#43518)", 11751594},
    {"Craftsanity Item: Conjured Mana Strudel (#43523)", 11751595},
    {"Craftsanity Item: Titanium Frostguard Ring (#43582)", 11751596},
    {"Craftsanity Item: Polar Vest (#43590)", 11751597},
    {"Craftsanity Item: Polar Cord (#43591)", 11751598},
    {"Craftsanity Item: Polar Boots (#43592)", 11751599},
    {"Craftsanity Item: Icy Scale Chestguard (#43593)", 11751600},
    {"Craftsanity Item: Icy Scale Belt (#43594)", 11751601},
    {"Craftsanity Item: Icy Scale Boots (#43595)", 11751602},
    {"Craftsanity Item: Mekgineer's Chopper (#44413)", 11751603},
    {"Craftsanity Item: Dragonscale Ammo Pouch (#44447)", 11751604},
    {"Craftsanity Item: Nerubian Reinforced Quiver (#44448)", 11751605},
    {"Craftsanity Item: Pumpkin Pie (#44836)", 11751606},
    {"Craftsanity Item: Spice Bread Stuffing (#44837)", 11751607},
    {"Craftsanity Item: Slow-Roasted Turkey (#44838)", 11751608},
    {"Craftsanity Item: Candied Sweet Potato (#44839)", 11751609},
    {"Craftsanity Item: Cranberry Chutney (#44840)", 11751610},
    {"Craftsanity Item: Windripper Boots (#44930)", 11751611},
    {"Craftsanity Item: Windripper Leggings (#44931)", 11751612},
    {"Craftsanity Item: Titanium Plating (#44936)", 11751613},
    {"Craftsanity Item: Worg Tartare (#44953)", 11751614},
    {"Craftsanity Item: Belt of the Titans (#45550)", 11751615},
    {"Craftsanity Item: Indestructible Plate Girdle (#45551)", 11751616},
    {"Craftsanity Item: Plate Girdle of Righteousness (#45552)", 11751617},
    {"Craftsanity Item: Belt of Dragons (#45553)", 11751618},
    {"Craftsanity Item: Blue Belt of Chaos (#45554)", 11751619},
    {"Craftsanity Item: Death-warmed Belt (#45555)", 11751620},
    {"Craftsanity Item: Belt of Arctic Life (#45556)", 11751621},
    {"Craftsanity Item: Sash of Ancient Power (#45557)", 11751622},
    {"Craftsanity Item: Cord of the White Dawn (#45558)", 11751623},
    {"Craftsanity Item: Battlelord's Plate Boots (#45559)", 11751624},
    {"Craftsanity Item: Spiked Deathdealers (#45560)", 11751625},
    {"Craftsanity Item: Treads of Destiny (#45561)", 11751626},
    {"Craftsanity Item: Boots of Living Scale (#45562)", 11751627},
    {"Craftsanity Item: Lightning Grounded Boots (#45563)", 11751628},
    {"Craftsanity Item: Footpads of Silence (#45564)", 11751629},
    {"Craftsanity Item: Boots of Wintry Endurance (#45565)", 11751630},
    {"Craftsanity Item: Spellslinger's Slippers (#45566)", 11751631},
    {"Craftsanity Item: Savior's Slippers (#45567)", 11751632},
    {"Craftsanity Item: Emerald Bag (#45773)", 11751633},
    {"Craftsanity Item: Bread of the Dead (#46691)", 11751634},
    {"Craftsanity Item: Flask of the North (#47499)", 11751635},
    {"Craftsanity Item: Saronite Swordbreakers (#47570)", 11751636},
    {"Craftsanity Item: Saronite Swordbreakers (#47571)", 11751637},
    {"Craftsanity Item: Titanium Spikeguards (#47572)", 11751638},
    {"Craftsanity Item: Titanium Spikeguards (#47573)", 11751639},
    {"Craftsanity Item: Sunforged Bracers (#47574)", 11751640},
    {"Craftsanity Item: Sunforged Bracers (#47575)", 11751641},
    {"Craftsanity Item: Crusader's Dragonscale Bracers (#47576)", 11751642},
    {"Craftsanity Item: Crusader's Dragonscale Bracers (#47577)", 11751643},
    {"Craftsanity Item: Black Chitin Bracers (#47579)", 11751644},
    {"Craftsanity Item: Black Chitin Bracers (#47580)", 11751645},
    {"Craftsanity Item: Bracers of Swift Death (#47581)", 11751646},
    {"Craftsanity Item: Bracers of Swift Death (#47582)", 11751647},
    {"Craftsanity Item: Moonshadow Armguards (#47583)", 11751648},
    {"Craftsanity Item: Moonshadow Armguards (#47584)", 11751649},
    {"Craftsanity Item: Bejeweled Wizard's Bracers (#47585)", 11751650},
    {"Craftsanity Item: Bejeweled Wizard's Bracers (#47586)", 11751651},
    {"Craftsanity Item: Royal Moonshroud Bracers (#47587)", 11751652},
    {"Craftsanity Item: Royal Moonshroud Bracers (#47588)", 11751653},
    {"Craftsanity Item: Titanium Razorplate (#47589)", 11751654},
    {"Craftsanity Item: Titanium Razorplate (#47590)", 11751655},
    {"Craftsanity Item: Breastplate of the White Knight (#47591)", 11751656},
    {"Craftsanity Item: Breastplate of the White Knight (#47592)", 11751657},
    {"Craftsanity Item: Sunforged Breastplate (#47593)", 11751658},
    {"Craftsanity Item: Sunforged Breastplate (#47594)", 11751659},
    {"Craftsanity Item: Crusader's Dragonscale Breastplate (#47595)", 11751660},
    {"Craftsanity Item: Crusader's Dragonscale Breastplate (#47596)", 11751661},
    {"Craftsanity Item: Ensorcelled Nerubian Breastplate (#47597)", 11751662},
    {"Craftsanity Item: Ensorcelled Nerubian Breastplate (#47598)", 11751663},
    {"Craftsanity Item: Knightbane Carapace (#47599)", 11751664},
    {"Craftsanity Item: Knightbane Carapace (#47600)", 11751665},
    {"Craftsanity Item: Lunar Eclipse Robes (#47601)", 11751666},
    {"Craftsanity Item: Lunar Eclipse Robes (#47602)", 11751667},
    {"Craftsanity Item: Merlin's Robe (#47603)", 11751668},
    {"Craftsanity Item: Merlin's Robe (#47604)", 11751669},
    {"Craftsanity Item: Royal Moonshroud Robe (#47605)", 11751670},
    {"Craftsanity Item: Royal Moonshroud Robe (#47606)", 11751671},
    {"Craftsanity Item: Jeeves (#49040)", 11751672},
    {"Craftsanity Item: Nightmare Tear (#49110)", 11751673},
    {"Craftsanity Item: Deathfrost Boots (#49890)", 11751674},
    {"Craftsanity Item: Leggings of Woven Death (#49891)", 11751675},
    {"Craftsanity Item: Lightweave Leggings (#49892)", 11751676},
    {"Craftsanity Item: Sandals of Consecration (#49893)", 11751677},
    {"Craftsanity Item: Blessed Cenarion Boots (#49894)", 11751678},
    {"Craftsanity Item: Footpads of Impending Death (#49895)", 11751679},
    {"Craftsanity Item: Earthsoul Boots (#49896)", 11751680},
    {"Craftsanity Item: Rock-Steady Treads (#49897)", 11751681},
    {"Craftsanity Item: Legwraps of Unleashed Nature (#49898)", 11751682},
    {"Craftsanity Item: Bladeborn Leggings (#49899)", 11751683},
    {"Craftsanity Item: Lightning-Infused Leggings (#49900)", 11751684},
    {"Craftsanity Item: Draconic Bonesplinter Legguards (#49901)", 11751685},
    {"Craftsanity Item: Puresteel Legplates (#49902)", 11751686},
    {"Craftsanity Item: Legplates of Painful Death (#49903)", 11751687},
    {"Craftsanity Item: Pillars of Might (#49904)", 11751688},
    {"Craftsanity Item: Protectors of Life (#49905)", 11751689},
    {"Craftsanity Item: Hellfrozen Bonegrinders (#49906)", 11751690},
    {"Craftsanity Item: Boots of Kingly Upheaval (#49907)", 11751691},
    {"Craftsanity Item: Glyph of Eternal Water (#50045)", 11751692},
    {"Craftsanity Item: Glyph of Quick Decay (#50077)", 11751693},
    {"Craftsanity Item: Glyph of Rapid Rejuvenation (#50125)", 11751694},
    {"Craftsanity Item: Shatter Rounds (#52020)", 11751695},
    {"Craftsanity Item: Iceblade Arrow (#52021)", 11751696},
    {"Craftsanity Item: Frosty Flying Carpet (#54797)", 11751697},
};
inline std::map<std::string, uint32_t> BuildITEMS()
{
    std::map<std::string, uint32_t> result;
    for (auto const& row : ITEMS_RAW)
        result.emplace(row.first, row.second);
    return result;
}
inline const std::map<std::string, uint32_t> ITEMS = BuildITEMS();
inline constexpr std::pair<uint32_t, int64_t> ITEM_ENTRY_TO_LOCATION_ID_RAW[] = {
    { 724, 11500000 }, // "Craft: Goretusk Liver Pie (#724)"
    { 733, 11500001 }, // "Craft: Westfall Stew (#733)"
    { 787, 11500002 }, // "Craft: Slitherskin Mackerel (#787)"
    { 1017, 11500003 }, // "Craft: Seasoned Wolf Kabob (#1017)"
    { 1082, 11500004 }, // "Craft: Redridge Goulash (#1082)"
    { 1113, 11500005 }, // "Craft: Conjured Bread (#1113)"
    { 1114, 11500006 }, // "Craft: Conjured Rye (#1114)"
    { 1487, 11500007 }, // "Craft: Conjured Pumpernickel (#1487)"
    { 2136, 11500008 }, // "Craft: Conjured Purified Water (#2136)"
    { 2288, 11500009 }, // "Craft: Conjured Fresh Water (#2288)"
    { 2307, 11500010 }, // "Craft: Fine Leather Boots (#2307)"
    { 2311, 11500011 }, // "Craft: White Leather Jerkin (#2311)"
    { 2312, 11500012 }, // "Craft: Fine Leather Gloves (#2312)"
    { 2317, 11500013 }, // "Craft: Dark Leather Tunic (#2317)"
    { 2457, 11500014 }, // "Craft: Elixir of Minor Agility (#2457)"
    { 2459, 11500015 }, // "Craft: Swiftness Potion (#2459)"
    { 2572, 11500016 }, // "Craft: Red Linen Robe (#2572)"
    { 2585, 11500017 }, // "Craft: Gray Woolen Robe (#2585)"
    { 2682, 11500018 }, // "Craft: Cooked Crab Claw (#2682)"
    { 2685, 11500019 }, // "Craft: Succulent Pork Ribs (#2685)"
    { 2864, 11500020 }, // "Craft: Runed Copper Breastplate (#2864)"
    { 2869, 11500021 }, // "Craft: Silvered Bronze Breastplate (#2869)"
    { 2888, 11500022 }, // "Craft: Beer Basted Boar Ribs (#2888)"
    { 3220, 11500023 }, // "Craft: Blood Sausage (#3220)"
    { 3384, 11500024 }, // "Craft: Minor Magic Resistance Potion (#3384)"
    { 3386, 11500025 }, // "Craft: Potion of Curing (#3386)"
    { 3387, 11500026 }, // "Craft: Limited Invulnerability Potion (#3387)"
    { 3390, 11500027 }, // "Craft: Elixir of Lesser Agility (#3390)"
    { 3391, 11500028 }, // "Craft: Elixir of Ogre's Strength (#3391)"
    { 3471, 11500029 }, // "Craft: Copper Chain Vest (#3471)"
    { 3474, 11500030 }, // "Craft: Gemmed Copper Gauntlets (#3474)"
    { 3481, 11500031 }, // "Craft: Silvered Bronze Shoulders (#3481)"
    { 3484, 11500032 }, // "Craft: Green Iron Boots (#3484)"
    { 3485, 11500033 }, // "Craft: Green Iron Gauntlets (#3485)"
    { 3490, 11500034 }, // "Craft: Deadly Bronze Poniard (#3490)"
    { 3492, 11500035 }, // "Craft: Mighty Iron Hammer (#3492)"
    { 3577, 11500036 }, // "Craft: Gold Bar (#3577)"
    { 3662, 11500037 }, // "Craft: Crocolisk Steak (#3662)"
    { 3663, 11500038 }, // "Craft: Murloc Fin Soup (#3663)"
    { 3664, 11500039 }, // "Craft: Crocolisk Gumbo (#3664)"
    { 3665, 11500040 }, // "Craft: Curiously Tasty Omelet (#3665)"
    { 3666, 11500041 }, // "Craft: Gooey Spider Cake (#3666)"
    { 3726, 11500042 }, // "Craft: Big Bear Steak (#3726)"
    { 3727, 11500043 }, // "Craft: Hot Lion Chops (#3727)"
    { 3728, 11500044 }, // "Craft: Tasty Lion Steak (#3728)"
    { 3729, 11500045 }, // "Craft: Soothing Turtle Bisque (#3729)"
    { 3772, 11500046 }, // "Craft: Conjured Spring Water (#3772)"
    { 3824, 11500047 }, // "Craft: Shadow Oil (#3824)"
    { 3825, 11500048 }, // "Craft: Elixir of Fortitude (#3825)"
    { 3826, 11500049 }, // "Craft: Major Troll's Blood Elixir (#3826)"
    { 3828, 11500050 }, // "Craft: Elixir of Detect Lesser Invisibility (#3828)"
    { 3829, 11500051 }, // "Craft: Frost Oil (#3829)"
    { 3837, 11500052 }, // "Craft: Golden Scale Coif (#3837)"
    { 3840, 11500053 }, // "Craft: Green Iron Shoulders (#3840)"
    { 3841, 11500054 }, // "Craft: Golden Scale Shoulders (#3841)"
    { 3843, 11500055 }, // "Craft: Golden Scale Leggings (#3843)"
    { 3845, 11500056 }, // "Craft: Golden Scale Cuirass (#3845)"
    { 3846, 11500057 }, // "Craft: Polished Steel Boots (#3846)"
    { 3847, 11500058 }, // "Craft: Golden Scale Boots (#3847)"
    { 3849, 11500059 }, // "Craft: Hardened Iron Shortsword (#3849)"
    { 3850, 11500060 }, // "Craft: Jade Serpentblade (#3850)"
    { 3851, 11500061 }, // "Craft: Solid Iron Maul (#3851)"
    { 3852, 11500062 }, // "Craft: Golden Iron Destroyer (#3852)"
    { 3853, 11500063 }, // "Craft: Moonsteel Broadsword (#3853)"
    { 3854, 11500064 }, // "Craft: Frost Tiger Blade (#3854)"
    { 3855, 11500065 }, // "Craft: Massive Iron Axe (#3855)"
    { 3856, 11500066 }, // "Craft: Shadow Crescent Axe (#3856)"
    { 4241, 11500067 }, // "Craft: Green Woolen Bag (#4241)"
    { 4244, 11500068 }, // "Craft: Hillman's Leather Vest (#4244)"
    { 4248, 11500069 }, // "Craft: Dark Leather Gloves (#4248)"
    { 4250, 11500070 }, // "Craft: Hillman's Belt (#4250)"
    { 4252, 11500071 }, // "Craft: Dark Leather Shoulders (#4252)"
    { 4254, 11500072 }, // "Craft: Barbaric Gloves (#4254)"
    { 4255, 11500073 }, // "Craft: Green Leather Armor (#4255)"
    { 4256, 11500074 }, // "Craft: Guardian Armor (#4256)"
    { 4258, 11500075 }, // "Craft: Guardian Belt (#4258)"
    { 4260, 11500076 }, // "Craft: Guardian Leather Bracers (#4260)"
    { 4262, 11500077 }, // "Craft: Gem-studded Leather Belt (#4262)"
    { 4264, 11500078 }, // "Craft: Barbaric Belt (#4264)"
    { 4311, 11500079 }, // "Craft: Heavy Woolen Cloak (#4311)"
    { 4313, 11500080 }, // "Craft: Red Woolen Boots (#4313)"
    { 4315, 11500081 }, // "Craft: Reinforced Woolen Shoulders (#4315)"
    { 4317, 11500082 }, // "Craft: Phoenix Pants (#4317)"
    { 4319, 11500083 }, // "Craft: Azure Silk Gloves (#4319)"
    { 4321, 11500084 }, // "Craft: Spider Silk Slippers (#4321)"
    { 4322, 11500085 }, // "Craft: Enchanter's Cowl (#4322)"
    { 4323, 11500086 }, // "Craft: Shadow Hood (#4323)"
    { 4325, 11500087 }, // "Craft: Boots of the Enchanter (#4325)"
    { 4327, 11500088 }, // "Craft: Icy Cloak (#4327)"
    { 4328, 11500089 }, // "Craft: Spider Belt (#4328)"
    { 4329, 11500090 }, // "Craft: Star Belt (#4329)"
    { 4331, 11500091 }, // "Craft: Phoenix Gloves (#4331)"
    { 4332, 11500092 }, // "Craft: Bright Yellow Shirt (#4332)"
    { 4333, 11500093 }, // "Craft: Dark Silk Shirt (#4333)"
    { 4335, 11500094 }, // "Craft: Rich Purple Silk Shirt (#4335)"
    { 4336, 11500095 }, // "Craft: Black Swashbuckler's Shirt (#4336)"
    { 4367, 11500096 }, // "Craft: Small Seaforium Charge (#4367)"
    { 4372, 11500097 }, // "Craft: Lovingly Crafted Boomstick (#4372)"
    { 4373, 11500098 }, // "Craft: Shadow Goggles (#4373)"
    { 4376, 11500099 }, // "Craft: Flame Deflector (#4376)"
    { 4381, 11500100 }, // "Craft: Minor Recombobulator (#4381)"
    { 4383, 11500101 }, // "Craft: Moonsight Rifle (#4383)"
    { 4386, 11500102 }, // "Craft: Ice Deflector (#4386)"
    { 4388, 11500103 }, // "Craft: Discombobulator Ray (#4388)"
    { 4393, 11500104 }, // "Craft: Craftsman's Monocle (#4393)"
    { 4395, 11500105 }, // "Craft: Goblin Land Mine (#4395)"
    { 4396, 11500106 }, // "Craft: Mechanical Dragonling (#4396)"
    { 4397, 11500107 }, // "Craft: Gnomish Cloaking Device (#4397)"
    { 4398, 11500108 }, // "Craft: Large Seaforium Charge (#4398)"
    { 4401, 11500109 }, // "Craft: Mechanical Squirrel Box (#4401)"
    { 4403, 11500110 }, // "Craft: Portable Bronze Mortar (#4403)"
    { 4407, 11500111 }, // "Craft: Accurate Scope (#4407)"
    { 4455, 11500112 }, // "Craft: Raptor Hide Harness (#4455)"
    { 4456, 11500113 }, // "Craft: Raptor Hide Belt (#4456)"
    { 4457, 11500114 }, // "Craft: Barbecued Buzzard Wing (#4457)"
    { 4592, 11500115 }, // "Craft: Longjaw Mud Snapper (#4592)"
    { 4593, 11500116 }, // "Craft: Bristle Whisker Catfish (#4593)"
    { 4594, 11500117 }, // "Craft: Rockscale Cod (#4594)"
    { 4596, 11500118 }, // "Craft: Discolored Healing Potion (#4596)"
    { 4623, 11500119 }, // "Craft: Lesser Stoneshield Potion (#4623)"
    { 4852, 11500120 }, // "Craft: Flash Bomb (#4852)"
    { 5081, 11500121 }, // "Craft: Kodo Hide Bag (#5081)"
    { 5095, 11500122 }, // "Craft: Rainbow Fin Albacore (#5095)"
    { 5232, 11500123 }, // "Craft: Minor Soulstone (#5232)"
    { 5349, 11500124 }, // "Craft: Conjured Muffin (#5349)"
    { 5350, 11500125 }, // "Craft: Conjured Water (#5350)"
    { 5472, 11500126 }, // "Craft: Kaldorei Spider Kabob (#5472)"
    { 5473, 11500127 }, // "Craft: Scorpid Surprise (#5473)"
    { 5474, 11500128 }, // "Craft: Roasted Kodo Meat (#5474)"
    { 5476, 11500129 }, // "Craft: Fillet of Frenzy (#5476)"
    { 5477, 11500130 }, // "Craft: Strider Stew (#5477)"
    { 5478, 11500131 }, // "Craft: Dig Rat Stew (#5478)"
    { 5479, 11500132 }, // "Craft: Crispy Lizard Tail (#5479)"
    { 5480, 11500133 }, // "Craft: Lean Venison (#5480)"
    { 5513, 11500134 }, // "Craft: Mana Jade (#5513)"
    { 5514, 11500135 }, // "Craft: Mana Agate (#5514)"
    { 5526, 11500136 }, // "Craft: Clam Chowder (#5526)"
    { 5541, 11500137 }, // "Craft: Iridescent Hammer (#5541)"
    { 5631, 11500138 }, // "Craft: Rage Potion (#5631)"
    { 5633, 11500139 }, // "Craft: Great Rage Potion (#5633)"
    { 5634, 11500140 }, // "Craft: Free Action Potion (#5634)"
    { 5762, 11500141 }, // "Craft: Red Linen Bag (#5762)"
    { 5763, 11500142 }, // "Craft: Red Woolen Bag (#5763)"
    { 5764, 11500143 }, // "Craft: Green Silk Pack (#5764)"
    { 5765, 11500144 }, // "Craft: Black Silk Pack (#5765)"
    { 5770, 11500145 }, // "Craft: Robes of Arcana (#5770)"
    { 5780, 11500146 }, // "Craft: Murloc Scale Belt (#5780)"
    { 5781, 11500147 }, // "Craft: Murloc Scale Breastplate (#5781)"
    { 5782, 11500148 }, // "Craft: Thick Murloc Armor (#5782)"
    { 5783, 11500149 }, // "Craft: Murloc Scale Bracers (#5783)"
    { 5958, 11500150 }, // "Craft: Fine Leather Pants (#5958)"
    { 5963, 11500151 }, // "Craft: Barbaric Leggings (#5963)"
    { 5965, 11500152 }, // "Craft: Guardian Cloak (#5965)"
    { 6037, 11500153 }, // "Craft: Truesilver Bar (#6037)"
    { 6038, 11500154 }, // "Craft: Giant Clam Scorcho (#6038)"
    { 6041, 11500155 }, // "Craft: Steel Weapon Chain (#6041)"
    { 6042, 11500156 }, // "Craft: Iron Shield Spike (#6042)"
    { 6043, 11500157 }, // "Craft: Iron Counterweight (#6043)"
    { 6048, 11500158 }, // "Craft: Shadow Protection Potion (#6048)"
    { 6049, 11500159 }, // "Craft: Fire Protection Potion (#6049)"
    { 6050, 11500160 }, // "Craft: Frost Protection Potion (#6050)"
    { 6051, 11500161 }, // "Craft: Holy Protection Potion (#6051)"
    { 6052, 11500162 }, // "Craft: Nature Protection Potion (#6052)"
    { 6239, 11500163 }, // "Craft: Red Linen Vest (#6239)"
    { 6240, 11500164 }, // "Craft: Blue Linen Vest (#6240)"
    { 6242, 11500165 }, // "Craft: Blue Linen Robe (#6242)"
    { 6263, 11500166 }, // "Craft: Blue Overalls (#6263)"
    { 6264, 11500167 }, // "Craft: Greater Adept's Robe (#6264)"
    { 6290, 11500168 }, // "Craft: Brilliant Smallfish (#6290)"
    { 6316, 11500169 }, // "Craft: Loch Frenzy Delight (#6316)"
    { 6384, 11500170 }, // "Craft: Stylish Blue Shirt (#6384)"
    { 6385, 11500171 }, // "Craft: Stylish Green Shirt (#6385)"
    { 6451, 11500172 }, // "Craft: Heavy Silk Bandage (#6451)"
    { 6453, 11500173 }, // "Craft: Strong Anti-Venom (#6453)"
    { 6466, 11500174 }, // "Craft: Deviate Scale Cloak (#6466)"
    { 6467, 11500175 }, // "Craft: Deviate Scale Gloves (#6467)"
    { 6468, 11500176 }, // "Craft: Deviate Scale Belt (#6468)"
    { 6657, 11500177 }, // "Craft: Savory Deviate Delight (#6657)"
    { 6662, 11500178 }, // "Craft: Elixir of Giant Growth (#6662)"
    { 6709, 11500179 }, // "Craft: Moonglow Vest (#6709)"
    { 6714, 11500180 }, // "Craft: Ez-Thro Dynamite (#6714)"
    { 6731, 11500181 }, // "Craft: Ironforge Breastplate (#6731)"
    { 6836, 11500182 }, // "Craft: Dress Shoes (#6836)"
    { 6887, 11500183 }, // "Craft: Spotted Yellowtail (#6887)"
    { 6890, 11500184 }, // "Craft: Smoked Bear Meat (#6890)"
    { 7047, 11500185 }, // "Craft: Hands of Darkness (#7047)"
    { 7049, 11500186 }, // "Craft: Truefaith Gloves (#7049)"
    { 7053, 11500187 }, // "Craft: Azure Silk Cloak (#7053)"
    { 7056, 11500188 }, // "Craft: Crimson Silk Cloak (#7056)"
    { 7059, 11500189 }, // "Craft: Crimson Silk Shoulders (#7059)"
    { 7060, 11500190 }, // "Craft: Azure Shoulders (#7060)"
    { 7061, 11500191 }, // "Craft: Earthen Silk Belt (#7061)"
    { 7063, 11500192 }, // "Craft: Crimson Silk Robe (#7063)"
    { 7065, 11500193 }, // "Craft: Green Silk Armor (#7065)"
    { 7068, 11500194 }, // "Craft: Elemental Fire (#7068)"
    { 7076, 11500195 }, // "Craft: Essence of Earth (#7076)"
    { 7078, 11500196 }, // "Craft: Essence of Fire (#7078)"
    { 7080, 11500197 }, // "Craft: Essence of Water (#7080)"
    { 7082, 11500198 }, // "Craft: Essence of Air (#7082)"
    { 7148, 11500199 }, // "Craft: Goblin Jumper Cables (#7148)"
    { 7191, 11500200 }, // "Craft: Fused Wiring (#7191)"
    { 7280, 11500201 }, // "Craft: Rugged Leather Pants (#7280)"
    { 7283, 11500202 }, // "Craft: Black Whelp Cloak (#7283)"
    { 7284, 11500203 }, // "Craft: Red Whelp Gloves (#7284)"
    { 7349, 11500204 }, // "Craft: Herbalist's Gloves (#7349)"
    { 7352, 11500205 }, // "Craft: Earthen Leather Shoulders (#7352)"
    { 7358, 11500206 }, // "Craft: Pilferer's Gloves (#7358)"
    { 7359, 11500207 }, // "Craft: Heavy Earthen Gloves (#7359)"
    { 7373, 11500208 }, // "Craft: Dusky Leather Leggings (#7373)"
    { 7375, 11500209 }, // "Craft: Green Whelp Armor (#7375)"
    { 7386, 11500210 }, // "Craft: Green Whelp Bracers (#7386)"
    { 7390, 11500211 }, // "Craft: Dusky Boots (#7390)"
    { 7391, 11500212 }, // "Craft: Swift Boots (#7391)"
    { 7506, 11500213 }, // "Craft: Gnomish Universal Remote (#7506)"
    { 7676, 11500214 }, // "Craft: Thistle Tea (#7676)"
    { 7913, 11500215 }, // "Craft: Barbaric Iron Shoulders (#7913)"
    { 7914, 11500216 }, // "Craft: Barbaric Iron Breastplate (#7914)"
    { 7915, 11500217 }, // "Craft: Barbaric Iron Helm (#7915)"
    { 7916, 11500218 }, // "Craft: Barbaric Iron Boots (#7916)"
    { 7917, 11500219 }, // "Craft: Barbaric Iron Gloves (#7917)"
    { 7921, 11500220 }, // "Craft: Heavy Mithril Pants (#7921)"
    { 7924, 11500221 }, // "Craft: Mithril Scale Bracers (#7924)"
    { 7926, 11500222 }, // "Craft: Ornate Mithril Pants (#7926)"
    { 7927, 11500223 }, // "Craft: Ornate Mithril Gloves (#7927)"
    { 7928, 11500224 }, // "Craft: Ornate Mithril Shoulder (#7928)"
    { 7932, 11500225 }, // "Craft: Mithril Scale Shoulders (#7932)"
    { 7934, 11500226 }, // "Craft: Heavy Mithril Helm (#7934)"
    { 7942, 11500227 }, // "Craft: Blue Glittering Axe (#7942)"
    { 7943, 11500228 }, // "Craft: Wicked Mithril Blade (#7943)"
    { 7944, 11500229 }, // "Craft: Dazzling Mithril Rapier (#7944)"
    { 7946, 11500230 }, // "Craft: Runed Mithril Hammer (#7946)"
    { 7947, 11500231 }, // "Craft: Ebon Shiv (#7947)"
    { 7967, 11500232 }, // "Craft: Mithril Shield Spike (#7967)"
    { 7969, 11500233 }, // "Craft: Mithril Spurs (#7969)"
    { 8007, 11500234 }, // "Craft: Mana Citrine (#8007)"
    { 8008, 11500235 }, // "Craft: Mana Ruby (#8008)"
    { 8075, 11500236 }, // "Craft: Conjured Sourdough (#8075)"
    { 8076, 11500237 }, // "Craft: Conjured Sweet Roll (#8076)"
    { 8077, 11500238 }, // "Craft: Conjured Mineral Water (#8077)"
    { 8078, 11500239 }, // "Craft: Conjured Sparkling Water (#8078)"
    { 8079, 11500240 }, // "Craft: Conjured Crystal Water (#8079)"
    { 8174, 11500241 }, // "Craft: Comfortable Leather Hat (#8174)"
    { 8187, 11500242 }, // "Craft: Turtle Scale Gloves (#8187)"
    { 8192, 11500243 }, // "Craft: Nightscape Shoulders (#8192)"
    { 8200, 11500244 }, // "Craft: Big Voodoo Robe (#8200)"
    { 8201, 11500245 }, // "Craft: Big Voodoo Mask (#8201)"
    { 8202, 11500246 }, // "Craft: Big Voodoo Pants (#8202)"
    { 8203, 11500247 }, // "Craft: Tough Scorpid Breastplate (#8203)"
    { 8204, 11500248 }, // "Craft: Tough Scorpid Gloves (#8204)"
    { 8205, 11500249 }, // "Craft: Tough Scorpid Bracers (#8205)"
    { 8206, 11500250 }, // "Craft: Tough Scorpid Leggings (#8206)"
    { 8207, 11500251 }, // "Craft: Tough Scorpid Shoulders (#8207)"
    { 8208, 11500252 }, // "Craft: Tough Scorpid Helm (#8208)"
    { 8209, 11500253 }, // "Craft: Tough Scorpid Boots (#8209)"
    { 8210, 11500254 }, // "Craft: Wild Leather Shoulders (#8210)"
    { 8211, 11500255 }, // "Craft: Wild Leather Vest (#8211)"
    { 8212, 11500256 }, // "Craft: Wild Leather Leggings (#8212)"
    { 8213, 11500257 }, // "Craft: Wild Leather Boots (#8213)"
    { 8214, 11500258 }, // "Craft: Wild Leather Helmet (#8214)"
    { 8215, 11500259 }, // "Craft: Wild Leather Cloak (#8215)"
    { 8216, 11500260 }, // "Craft: Big Voodoo Cloak (#8216)"
    { 8364, 11500261 }, // "Craft: Mithril Head Trout (#8364)"
    { 8544, 11500262 }, // "Craft: Mageweave Bandage (#8544)"
    { 9036, 11500263 }, // "Craft: Magic Resistance Potion (#9036)"
    { 9060, 11500264 }, // "Craft: Inlaid Mithril Cylinder (#9060)"
    { 9061, 11500265 }, // "Craft: Goblin Rocket Fuel (#9061)"
    { 9088, 11500266 }, // "Craft: Gift of Arthas (#9088)"
    { 9144, 11500267 }, // "Craft: Wildvine Potion (#9144)"
    { 9149, 11500268 }, // "Craft: Philosopher's Stone (#9149)"
    { 9172, 11500269 }, // "Craft: Invisibility Potion (#9172)"
    { 9197, 11500270 }, // "Craft: Elixir of Dream Vision (#9197)"
    { 9206, 11500271 }, // "Craft: Elixir of Giants (#9206)"
    { 9210, 11500272 }, // "Craft: Ghost Dye (#9210)"
    { 9224, 11500273 }, // "Craft: Elixir of Demonslaying (#9224)"
    { 9264, 11500274 }, // "Craft: Elixir of Shadow Power (#9264)"
    { 9312, 11500275 }, // "Craft: Blue Firework (#9312)"
    { 9313, 11500276 }, // "Craft: Green Firework (#9313)"
    { 9318, 11500277 }, // "Craft: Red Firework (#9318)"
    { 9366, 11500278 }, // "Craft: Golden Scale Gauntlets (#9366)"
    { 10007, 11500279 }, // "Craft: Red Mageweave Vest (#10007)"
    { 10008, 11500280 }, // "Craft: White Bandit Mask (#10008)"
    { 10009, 11500281 }, // "Craft: Red Mageweave Pants (#10009)"
    { 10018, 11500282 }, // "Craft: Red Mageweave Gloves (#10018)"
    { 10025, 11500283 }, // "Craft: Shadoweave Mask (#10025)"
    { 10029, 11500284 }, // "Craft: Red Mageweave Shoulders (#10029)"
    { 10030, 11500285 }, // "Craft: Admiral's Hat (#10030)"
    { 10033, 11500286 }, // "Craft: Red Mageweave Headband (#10033)"
    { 10034, 11500287 }, // "Craft: Tuxedo Shirt (#10034)"
    { 10035, 11500288 }, // "Craft: Tuxedo Pants (#10035)"
    { 10036, 11500289 }, // "Craft: Tuxedo Jacket (#10036)"
    { 10040, 11500290 }, // "Craft: White Wedding Dress (#10040)"
    { 10048, 11500291 }, // "Craft: Colorful Kilt (#10048)"
    { 10052, 11500292 }, // "Craft: Orange Martial Shirt (#10052)"
    { 10054, 11500293 }, // "Craft: Lavender Mageweave Shirt (#10054)"
    { 10055, 11500294 }, // "Craft: Pink Mageweave Shirt (#10055)"
    { 10423, 11500295 }, // "Craft: Silvered Bronze Leggings (#10423)"
    { 10499, 11500296 }, // "Craft: Bright-Eye Goggles (#10499)"
    { 10501, 11500297 }, // "Craft: Catseye Ultra Goggles (#10501)"
    { 10502, 11500298 }, // "Craft: Spellpower Goggles Xtreme (#10502)"
    { 10506, 11500299 }, // "Craft: Deepdive Helmet (#10506)"
    { 10510, 11500300 }, // "Craft: Mithril Heavy-bore Rifle (#10510)"
    { 10518, 11500301 }, // "Craft: Parachute Cloak (#10518)"
    { 10546, 11500302 }, // "Craft: Deadly Scope (#10546)"
    { 10548, 11500303 }, // "Craft: Sniper Scope (#10548)"
    { 10576, 11500304 }, // "Craft: Mithril Mechanical Dragonling (#10576)"
    { 11604, 11500305 }, // "Craft: Dark Iron Plate (#11604)"
    { 11605, 11500306 }, // "Craft: Dark Iron Shoulders (#11605)"
    { 11606, 11500307 }, // "Craft: Dark Iron Mail (#11606)"
    { 11607, 11500308 }, // "Craft: Dark Iron Sunderer (#11607)"
    { 11608, 11500309 }, // "Craft: Dark Iron Pulverizer (#11608)"
    { 11811, 11500310 }, // "Craft: Smoking Heart of the Mountain (#11811)"
    { 11825, 11500311 }, // "Craft: Pet Bombling (#11825)"
    { 11826, 11500312 }, // "Craft: Lil' Smoky (#11826)"
    { 12209, 11500313 }, // "Craft: Lean Wolf Steak (#12209)"
    { 12210, 11500314 }, // "Craft: Roast Raptor (#12210)"
    { 12212, 11500315 }, // "Craft: Jungle Stew (#12212)"
    { 12213, 11500316 }, // "Craft: Carrion Surprise (#12213)"
    { 12214, 11500317 }, // "Craft: Mystery Stew (#12214)"
    { 12215, 11500318 }, // "Craft: Heavy Kodo Stew (#12215)"
    { 12216, 11500319 }, // "Craft: Spiced Chili Crab (#12216)"
    { 12217, 11500320 }, // "Craft: Dragonbreath Chili (#12217)"
    { 12218, 11500321 }, // "Craft: Monster Omelet (#12218)"
    { 12224, 11500322 }, // "Craft: Crispy Bat Wing (#12224)"
    { 12260, 11500323 }, // "Craft: Searing Golden Blade (#12260)"
    { 12360, 11500324 }, // "Craft: Arcanite Bar (#12360)"
    { 12405, 11500325 }, // "Craft: Thorium Armor (#12405)"
    { 12406, 11500326 }, // "Craft: Thorium Belt (#12406)"
    { 12408, 11500327 }, // "Craft: Thorium Bracers (#12408)"
    { 12409, 11500328 }, // "Craft: Thorium Boots (#12409)"
    { 12410, 11500329 }, // "Craft: Thorium Helm (#12410)"
    { 12414, 11500330 }, // "Craft: Thorium Leggings (#12414)"
    { 12415, 11500331 }, // "Craft: Radiant Breastplate (#12415)"
    { 12416, 11500332 }, // "Craft: Radiant Belt (#12416)"
    { 12417, 11500333 }, // "Craft: Radiant Circlet (#12417)"
    { 12418, 11500334 }, // "Craft: Radiant Gloves (#12418)"
    { 12419, 11500335 }, // "Craft: Radiant Boots (#12419)"
    { 12420, 11500336 }, // "Craft: Radiant Leggings (#12420)"
    { 12422, 11500337 }, // "Craft: Imperial Plate Chest (#12422)"
    { 12424, 11500338 }, // "Craft: Imperial Plate Belt (#12424)"
    { 12425, 11500339 }, // "Craft: Imperial Plate Bracers (#12425)"
    { 12426, 11500340 }, // "Craft: Imperial Plate Boots (#12426)"
    { 12427, 11500341 }, // "Craft: Imperial Plate Helm (#12427)"
    { 12428, 11500342 }, // "Craft: Imperial Plate Shoulders (#12428)"
    { 12429, 11500343 }, // "Craft: Imperial Plate Leggings (#12429)"
    { 12610, 11500344 }, // "Craft: Runic Plate Shoulders (#12610)"
    { 12611, 11500345 }, // "Craft: Runic Plate Boots (#12611)"
    { 12612, 11500346 }, // "Craft: Runic Plate Helm (#12612)"
    { 12613, 11500347 }, // "Craft: Runic Breastplate (#12613)"
    { 12614, 11500348 }, // "Craft: Runic Plate Leggings (#12614)"
    { 12618, 11500349 }, // "Craft: Enchanted Thorium Breastplate (#12618)"
    { 12619, 11500350 }, // "Craft: Enchanted Thorium Leggings (#12619)"
    { 12620, 11500351 }, // "Craft: Enchanted Thorium Helm (#12620)"
    { 12624, 11500352 }, // "Craft: Wildthorn Mail (#12624)"
    { 12625, 11500353 }, // "Craft: Dawnbringer Shoulders (#12625)"
    { 12628, 11500354 }, // "Craft: Demon Forged Breastplate (#12628)"
    { 12631, 11500355 }, // "Craft: Fiery Plate Gauntlets (#12631)"
    { 12632, 11500356 }, // "Craft: Storm Gauntlets (#12632)"
    { 12633, 11500357 }, // "Craft: Whitesoul Helm (#12633)"
    { 12636, 11500358 }, // "Craft: Helm of the Great Chief (#12636)"
    { 12639, 11500359 }, // "Craft: Stronghold Gauntlets (#12639)"
    { 12640, 11500360 }, // "Craft: Lionheart Helm (#12640)"
    { 12641, 11500361 }, // "Craft: Invulnerable Mail (#12641)"
    { 12645, 11500362 }, // "Craft: Thorium Shield Spike (#12645)"
    { 12773, 11500363 }, // "Craft: Ornate Thorium Handaxe (#12773)"
    { 12774, 11500364 }, // "Craft: Dawn's Edge (#12774)"
    { 12775, 11500365 }, // "Craft: Huge Thorium Battleaxe (#12775)"
    { 12776, 11500366 }, // "Craft: Enchanted Battlehammer (#12776)"
    { 12777, 11500367 }, // "Craft: Blazing Rapier (#12777)"
    { 12781, 11500368 }, // "Craft: Serenity (#12781)"
    { 12782, 11500369 }, // "Craft: Corruption (#12782)"
    { 12783, 11500370 }, // "Craft: Heartseeker (#12783)"
    { 12784, 11500371 }, // "Craft: Arcanite Reaper (#12784)"
    { 12790, 11500372 }, // "Craft: Arcanite Champion (#12790)"
    { 12792, 11500373 }, // "Craft: Volcanic Hammer (#12792)"
    { 12794, 11500374 }, // "Craft: Masterwork Stormhammer (#12794)"
    { 12796, 11500375 }, // "Craft: Hammer of the Titans (#12796)"
    { 12797, 11500376 }, // "Craft: Frostguard (#12797)"
    { 12798, 11500377 }, // "Craft: Annihilator (#12798)"
    { 12803, 11500378 }, // "Craft: Living Essence (#12803)"
    { 12808, 11500379 }, // "Craft: Essence of Undeath (#12808)"
    { 13442, 11500380 }, // "Craft: Mighty Rage Potion (#13442)"
    { 13443, 11500381 }, // "Craft: Superior Mana Potion (#13443)"
    { 13444, 11500382 }, // "Craft: Major Mana Potion (#13444)"
    { 13445, 11500383 }, // "Craft: Elixir of Superior Defense (#13445)"
    { 13446, 11500384 }, // "Craft: Major Healing Potion (#13446)"
    { 13447, 11500385 }, // "Craft: Elixir of the Sages (#13447)"
    { 13452, 11500386 }, // "Craft: Elixir of the Mongoose (#13452)"
    { 13453, 11500387 }, // "Craft: Elixir of Brute Force (#13453)"
    { 13454, 11500388 }, // "Craft: Greater Arcane Elixir (#13454)"
    { 13455, 11500389 }, // "Craft: Greater Stoneshield Potion (#13455)"
    { 13456, 11500390 }, // "Craft: Greater Frost Protection Potion (#13456)"
    { 13457, 11500391 }, // "Craft: Greater Fire Protection Potion (#13457)"
    { 13458, 11500392 }, // "Craft: Greater Nature Protection Potion (#13458)"
    { 13459, 11500393 }, // "Craft: Greater Shadow Protection Potion (#13459)"
    { 13461, 11500394 }, // "Craft: Greater Arcane Protection Potion (#13461)"
    { 13462, 11500395 }, // "Craft: Purification Potion (#13462)"
    { 13503, 11500396 }, // "Craft: Alchemist's Stone (#13503)"
    { 13506, 11500397 }, // "Craft: Potion of Petrification (#13506)"
    { 13510, 11500398 }, // "Craft: Flask of the Titans (#13510)"
    { 13511, 11500399 }, // "Craft: Flask of Distilled Wisdom (#13511)"
    { 13512, 11500400 }, // "Craft: Flask of Supreme Power (#13512)"
    { 13513, 11500401 }, // "Craft: Flask of Chromatic Resistance (#13513)"
    { 13851, 11500402 }, // "Craft: Hot Wolf Ribs (#13851)"
    { 13857, 11500403 }, // "Craft: Runecloth Tunic (#13857)"
    { 13858, 11500404 }, // "Craft: Runecloth Robe (#13858)"
    { 13860, 11500405 }, // "Craft: Runecloth Cloak (#13860)"
    { 13863, 11500406 }, // "Craft: Runecloth Gloves (#13863)"
    { 13864, 11500407 }, // "Craft: Runecloth Boots (#13864)"
    { 13865, 11500408 }, // "Craft: Runecloth Pants (#13865)"
    { 13866, 11500409 }, // "Craft: Runecloth Headband (#13866)"
    { 13867, 11500410 }, // "Craft: Runecloth Shoulders (#13867)"
    { 13868, 11500411 }, // "Craft: Frostweave Robe (#13868)"
    { 13869, 11500412 }, // "Craft: Frostweave Tunic (#13869)"
    { 13870, 11500413 }, // "Craft: Frostweave Gloves (#13870)"
    { 13871, 11500414 }, // "Craft: Frostweave Pants (#13871)"
    { 13927, 11500415 }, // "Craft: Cooked Glossy Mightfish (#13927)"
    { 13928, 11500416 }, // "Craft: Grilled Squid (#13928)"
    { 13929, 11500417 }, // "Craft: Hot Smoked Bass (#13929)"
    { 13930, 11500418 }, // "Craft: Filet of Redgill (#13930)"
    { 13931, 11500419 }, // "Craft: Nightfin Soup (#13931)"
    { 13932, 11500420 }, // "Craft: Poached Sunscale Salmon (#13932)"
    { 13933, 11500421 }, // "Craft: Lobster Stew (#13933)"
    { 13934, 11500422 }, // "Craft: Mightfish Steak (#13934)"
    { 13935, 11500423 }, // "Craft: Baked Salmon (#13935)"
    { 14042, 11500424 }, // "Craft: Cindercloth Vest (#14042)"
    { 14043, 11500425 }, // "Craft: Cindercloth Gloves (#14043)"
    { 14044, 11500426 }, // "Craft: Cindercloth Cloak (#14044)"
    { 14045, 11500427 }, // "Craft: Cindercloth Pants (#14045)"
    { 14046, 11500428 }, // "Craft: Runecloth Bag (#14046)"
    { 14100, 11500429 }, // "Craft: Brightcloth Robe (#14100)"
    { 14101, 11500430 }, // "Craft: Brightcloth Gloves (#14101)"
    { 14103, 11500431 }, // "Craft: Brightcloth Cloak (#14103)"
    { 14104, 11500432 }, // "Craft: Brightcloth Pants (#14104)"
    { 14106, 11500433 }, // "Craft: Felcloth Robe (#14106)"
    { 14107, 11500434 }, // "Craft: Felcloth Pants (#14107)"
    { 14108, 11500435 }, // "Craft: Felcloth Boots (#14108)"
    { 14111, 11500436 }, // "Craft: Felcloth Hood (#14111)"
    { 14112, 11500437 }, // "Craft: Felcloth Shoulders (#14112)"
    { 14128, 11500438 }, // "Craft: Wizardweave Robe (#14128)"
    { 14130, 11500439 }, // "Craft: Wizardweave Turban (#14130)"
    { 14132, 11500440 }, // "Craft: Wizardweave Leggings (#14132)"
    { 14134, 11500441 }, // "Craft: Cloak of Fire (#14134)"
    { 14136, 11500442 }, // "Craft: Robe of Winter Night (#14136)"
    { 14137, 11500443 }, // "Craft: Mooncloth Leggings (#14137)"
    { 14138, 11500444 }, // "Craft: Mooncloth Vest (#14138)"
    { 14139, 11500445 }, // "Craft: Mooncloth Shoulders (#14139)"
    { 14140, 11500446 }, // "Craft: Mooncloth Circlet (#14140)"
    { 14141, 11500447 }, // "Craft: Ghostweave Vest (#14141)"
    { 14142, 11500448 }, // "Craft: Ghostweave Gloves (#14142)"
    { 14143, 11500449 }, // "Craft: Ghostweave Belt (#14143)"
    { 14144, 11500450 }, // "Craft: Ghostweave Pants (#14144)"
    { 14146, 11500451 }, // "Craft: Gloves of Spell Mastery (#14146)"
    { 14152, 11500452 }, // "Craft: Robe of the Archmage (#14152)"
    { 14153, 11500453 }, // "Craft: Robe of the Void (#14153)"
    { 14154, 11500454 }, // "Craft: Truefaith Vestments (#14154)"
    { 14155, 11500455 }, // "Craft: Mooncloth Bag (#14155)"
    { 14156, 11500456 }, // "Craft: Bottomless Bag (#14156)"
    { 14342, 11500457 }, // "Craft: Mooncloth (#14342)"
    { 15045, 11500458 }, // "Craft: Green Dragonscale Breastplate (#15045)"
    { 15046, 11500459 }, // "Craft: Green Dragonscale Leggings (#15046)"
    { 15047, 11500460 }, // "Craft: Red Dragonscale Breastplate (#15047)"
    { 15048, 11500461 }, // "Craft: Blue Dragonscale Breastplate (#15048)"
    { 15049, 11500462 }, // "Craft: Blue Dragonscale Shoulders (#15049)"
    { 15050, 11500463 }, // "Craft: Black Dragonscale Breastplate (#15050)"
    { 15051, 11500464 }, // "Craft: Black Dragonscale Shoulders (#15051)"
    { 15052, 11500465 }, // "Craft: Black Dragonscale Leggings (#15052)"
    { 15053, 11500466 }, // "Craft: Volcanic Breastplate (#15053)"
    { 15054, 11500467 }, // "Craft: Volcanic Leggings (#15054)"
    { 15055, 11500468 }, // "Craft: Volcanic Shoulders (#15055)"
    { 15056, 11500469 }, // "Craft: Stormshroud Armor (#15056)"
    { 15057, 11500470 }, // "Craft: Stormshroud Pants (#15057)"
    { 15058, 11500471 }, // "Craft: Stormshroud Shoulders (#15058)"
    { 15059, 11500472 }, // "Craft: Living Breastplate (#15059)"
    { 15060, 11500473 }, // "Craft: Living Leggings (#15060)"
    { 15061, 11500474 }, // "Craft: Living Shoulders (#15061)"
    { 15062, 11500475 }, // "Craft: Devilsaur Leggings (#15062)"
    { 15063, 11500476 }, // "Craft: Devilsaur Gauntlets (#15063)"
    { 15064, 11500477 }, // "Craft: Warbear Harness (#15064)"
    { 15065, 11500478 }, // "Craft: Warbear Woolies (#15065)"
    { 15066, 11500479 }, // "Craft: Ironfeather Breastplate (#15066)"
    { 15067, 11500480 }, // "Craft: Ironfeather Shoulders (#15067)"
    { 15068, 11500481 }, // "Craft: Frostsaber Tunic (#15068)"
    { 15069, 11500482 }, // "Craft: Frostsaber Leggings (#15069)"
    { 15070, 11500483 }, // "Craft: Frostsaber Gloves (#15070)"
    { 15071, 11500484 }, // "Craft: Frostsaber Boots (#15071)"
    { 15072, 11500485 }, // "Craft: Chimeric Leggings (#15072)"
    { 15073, 11500486 }, // "Craft: Chimeric Boots (#15073)"
    { 15074, 11500487 }, // "Craft: Chimeric Gloves (#15074)"
    { 15075, 11500488 }, // "Craft: Chimeric Vest (#15075)"
    { 15076, 11500489 }, // "Craft: Heavy Scorpid Vest (#15076)"
    { 15077, 11500490 }, // "Craft: Heavy Scorpid Bracers (#15077)"
    { 15078, 11500491 }, // "Craft: Heavy Scorpid Gauntlets (#15078)"
    { 15079, 11500492 }, // "Craft: Heavy Scorpid Leggings (#15079)"
    { 15080, 11500493 }, // "Craft: Heavy Scorpid Helm (#15080)"
    { 15081, 11500494 }, // "Craft: Heavy Scorpid Shoulders (#15081)"
    { 15082, 11500495 }, // "Craft: Heavy Scorpid Belt (#15082)"
    { 15083, 11500496 }, // "Craft: Wicked Leather Gauntlets (#15083)"
    { 15084, 11500497 }, // "Craft: Wicked Leather Bracers (#15084)"
    { 15085, 11500498 }, // "Craft: Wicked Leather Armor (#15085)"
    { 15086, 11500499 }, // "Craft: Wicked Leather Headband (#15086)"
    { 15087, 11500500 }, // "Craft: Wicked Leather Pants (#15087)"
    { 15088, 11500501 }, // "Craft: Wicked Leather Belt (#15088)"
    { 15090, 11500502 }, // "Craft: Runic Leather Armor (#15090)"
    { 15091, 11500503 }, // "Craft: Runic Leather Gauntlets (#15091)"
    { 15092, 11500504 }, // "Craft: Runic Leather Bracers (#15092)"
    { 15093, 11500505 }, // "Craft: Runic Leather Belt (#15093)"
    { 15094, 11500506 }, // "Craft: Runic Leather Headband (#15094)"
    { 15095, 11500507 }, // "Craft: Runic Leather Pants (#15095)"
    { 15096, 11500508 }, // "Craft: Runic Leather Shoulders (#15096)"
    { 15141, 11500509 }, // "Craft: Onyxia Scale Breastplate (#15141)"
    { 15993, 11500510 }, // "Craft: Thorium Grenade (#15993)"
    { 15994, 11500511 }, // "Craft: Thorium Widget (#15994)"
    { 15995, 11500512 }, // "Craft: Thorium Rifle (#15995)"
    { 15996, 11500513 }, // "Craft: Lifelike Mechanical Toad (#15996)"
    { 15997, 11500514 }, // "Craft: Thorium Shells (#15997)"
    { 15999, 11500515 }, // "Craft: Spellpower Goggles Xtreme Plus (#15999)"
    { 16000, 11500516 }, // "Craft: Thorium Tube (#16000)"
    { 16004, 11500517 }, // "Craft: Dark Iron Rifle (#16004)"
    { 16005, 11500518 }, // "Craft: Dark Iron Bomb (#16005)"
    { 16006, 11500519 }, // "Craft: Delicate Arcanite Converter (#16006)"
    { 16007, 11500520 }, // "Craft: Flawless Arcanite Rifle (#16007)"
    { 16008, 11500521 }, // "Craft: Master Engineer's Goggles (#16008)"
    { 16009, 11500522 }, // "Craft: Voice Amplification Modulator (#16009)"
    { 16022, 11500523 }, // "Craft: Arcanite Dragonling (#16022)"
    { 16023, 11500524 }, // "Craft: Masterwork Target Dummy (#16023)"
    { 16040, 11500525 }, // "Craft: Arcane Bomb (#16040)"
    { 16207, 11500526 }, // "Craft: Runed Arcanite Rod (#16207)"
    { 16766, 11500527 }, // "Craft: Undermine Clam Chowder (#16766)"
    { 16892, 11500528 }, // "Craft: Lesser Soulstone (#16892)"
    { 16893, 11500529 }, // "Craft: Soulstone (#16893)"
    { 16895, 11500530 }, // "Craft: Greater Soulstone (#16895)"
    { 16896, 11500531 }, // "Craft: Major Soulstone (#16896)"
    { 16979, 11500532 }, // "Craft: Flarecore Gloves (#16979)"
    { 16980, 11500533 }, // "Craft: Flarecore Mantle (#16980)"
    { 16982, 11500534 }, // "Craft: Corehound Boots (#16982)"
    { 16983, 11500535 }, // "Craft: Molten Helm (#16983)"
    { 16984, 11500536 }, // "Craft: Black Dragonscale Boots (#16984)"
    { 16988, 11500537 }, // "Craft: Fiery Chain Shoulders (#16988)"
    { 16989, 11500538 }, // "Craft: Fiery Chain Girdle (#16989)"
    { 17013, 11500539 }, // "Craft: Dark Iron Leggings (#17013)"
    { 17014, 11500540 }, // "Craft: Dark Iron Bracers (#17014)"
    { 17015, 11500541 }, // "Craft: Dark Iron Reaver (#17015)"
    { 17016, 11500542 }, // "Craft: Dark Iron Destroyer (#17016)"
    { 17193, 11500543 }, // "Craft: Sulfuron Hammer (#17193)"
    { 17197, 11500544 }, // "Craft: Gingerbread Cookie (#17197)"
    { 17198, 11500545 }, // "Craft: Egg Nog (#17198)"
    { 17704, 11500546 }, // "Craft: Edge of Winter (#17704)"
    { 17708, 11500547 }, // "Craft: Elixir of Frost Power (#17708)"
    { 17716, 11500548 }, // "Craft: Snowmaster 9000 (#17716)"
    { 17721, 11500549 }, // "Craft: Gloves of the Greatfather (#17721)"
    { 17723, 11500550 }, // "Craft: Green Holiday Shirt (#17723)"
    { 17771, 11500551 }, // "Craft: Elementium Bar (#17771)"
    { 18045, 11500552 }, // "Craft: Tender Wolf Steak (#18045)"
    { 18168, 11500553 }, // "Craft: Force Reactive Disk (#18168)"
    { 18238, 11500554 }, // "Craft: Shadowskin Gloves (#18238)"
    { 18251, 11500555 }, // "Craft: Core Armor Kit (#18251)"
    { 18253, 11500556 }, // "Craft: Major Rejuvenation Potion (#18253)"
    { 18254, 11500557 }, // "Craft: Runn Tum Tuber Surprise (#18254)"
    { 18262, 11500558 }, // "Craft: Elemental Sharpening Stone (#18262)"
    { 18263, 11500559 }, // "Craft: Flarecore Wraps (#18263)"
    { 18282, 11500560 }, // "Craft: Core Marksman Rifle (#18282)"
    { 18283, 11500561 }, // "Craft: Biznicks 247x128 Accurascope (#18283)"
    { 18405, 11500562 }, // "Craft: Belt of the Archmage (#18405)"
    { 18407, 11500563 }, // "Craft: Felcloth Gloves (#18407)"
    { 18408, 11500564 }, // "Craft: Inferno Gloves (#18408)"
    { 18409, 11500565 }, // "Craft: Mooncloth Gloves (#18409)"
    { 18413, 11500566 }, // "Craft: Cloak of Warding (#18413)"
    { 18486, 11500567 }, // "Craft: Mooncloth Robe (#18486)"
    { 18504, 11500568 }, // "Craft: Girdle of Insight (#18504)"
    { 18506, 11500569 }, // "Craft: Mongoose Boots (#18506)"
    { 18508, 11500570 }, // "Craft: Swift Flight Bracers (#18508)"
    { 18509, 11500571 }, // "Craft: Chromatic Cloak (#18509)"
    { 18510, 11500572 }, // "Craft: Hide of the Wild (#18510)"
    { 18511, 11500573 }, // "Craft: Shifting Cloak (#18511)"
    { 18587, 11500574 }, // "Craft: Goblin Jumper Cables XL (#18587)"
    { 18588, 11500575 }, // "Craft: Ez-Thro Dynamite II (#18588)"
    { 18594, 11500576 }, // "Craft: Powerful Seaforium Charge (#18594)"
    { 18631, 11500577 }, // "Craft: Truesilver Transformer (#18631)"
    { 18634, 11500578 }, // "Craft: Gyrofreeze Ice Reflector (#18634)"
    { 18637, 11500579 }, // "Craft: Major Recombobulator (#18637)"
    { 18638, 11500580 }, // "Craft: Hyper-Radiant Flame Reflector (#18638)"
    { 18639, 11500581 }, // "Craft: Ultra-Flash Shadow Reflector (#18639)"
    { 18645, 11500582 }, // "Craft: Gnomish Alarm-o-Bot (#18645)"
    { 18660, 11500583 }, // "Craft: World Enlarger (#18660)"
    { 18662, 11500584 }, // "Craft: Heavy Leather Ball (#18662)"
    { 18948, 11500585 }, // "Craft: Barbaric Bracers (#18948)"
    { 19026, 11500586 }, // "Craft: Snake Burst Firework (#19026)"
    { 19043, 11500587 }, // "Craft: Heavy Timbermaw Belt (#19043)"
    { 19044, 11500588 }, // "Craft: Might of the Timbermaw (#19044)"
    { 19047, 11500589 }, // "Craft: Wisdom of the Timbermaw (#19047)"
    { 19048, 11500590 }, // "Craft: Heavy Timbermaw Boots (#19048)"
    { 19049, 11500591 }, // "Craft: Timbermaw Brawlers (#19049)"
    { 19050, 11500592 }, // "Craft: Mantle of the Timbermaw (#19050)"
    { 19051, 11500593 }, // "Craft: Girdle of the Dawn (#19051)"
    { 19052, 11500594 }, // "Craft: Dawn Treaders (#19052)"
    { 19056, 11500595 }, // "Craft: Argent Boots (#19056)"
    { 19057, 11500596 }, // "Craft: Gloves of the Dawn (#19057)"
    { 19058, 11500597 }, // "Craft: Golden Mantle of the Dawn (#19058)"
    { 19059, 11500598 }, // "Craft: Argent Shoulders (#19059)"
    { 19148, 11500599 }, // "Craft: Dark Iron Helm (#19148)"
    { 19149, 11500600 }, // "Craft: Lava Belt (#19149)"
    { 19156, 11500601 }, // "Craft: Flarecore Robe (#19156)"
    { 19157, 11500602 }, // "Craft: Chromatic Gauntlets (#19157)"
    { 19162, 11500603 }, // "Craft: Corehound Belt (#19162)"
    { 19163, 11500604 }, // "Craft: Molten Belt (#19163)"
    { 19164, 11500605 }, // "Craft: Dark Iron Gauntlets (#19164)"
    { 19165, 11500606 }, // "Craft: Flarecore Leggings (#19165)"
    { 19166, 11500607 }, // "Craft: Black Amnesty (#19166)"
    { 19167, 11500608 }, // "Craft: Blackfury (#19167)"
    { 19168, 11500609 }, // "Craft: Blackguard (#19168)"
    { 19169, 11500610 }, // "Craft: Nightfall (#19169)"
    { 19170, 11500611 }, // "Craft: Ebon Hand (#19170)"
    { 19440, 11500612 }, // "Craft: Powerful Anti-Venom (#19440)"
    { 19682, 11500613 }, // "Craft: Bloodvine Vest (#19682)"
    { 19683, 11500614 }, // "Craft: Bloodvine Leggings (#19683)"
    { 19684, 11500615 }, // "Craft: Bloodvine Boots (#19684)"
    { 19685, 11500616 }, // "Craft: Primal Batskin Jerkin (#19685)"
    { 19686, 11500617 }, // "Craft: Primal Batskin Gloves (#19686)"
    { 19687, 11500618 }, // "Craft: Primal Batskin Bracers (#19687)"
    { 19688, 11500619 }, // "Craft: Blood Tiger Breastplate (#19688)"
    { 19689, 11500620 }, // "Craft: Blood Tiger Shoulders (#19689)"
    { 19690, 11500621 }, // "Craft: Bloodsoul Breastplate (#19690)"
    { 19691, 11500622 }, // "Craft: Bloodsoul Shoulders (#19691)"
    { 19692, 11500623 }, // "Craft: Bloodsoul Gauntlets (#19692)"
    { 19693, 11500624 }, // "Craft: Darksoul Breastplate (#19693)"
    { 19694, 11500625 }, // "Craft: Darksoul Leggings (#19694)"
    { 19695, 11500626 }, // "Craft: Darksoul Shoulders (#19695)"
    { 19998, 11500627 }, // "Craft: Bloodvine Lens (#19998)"
    { 19999, 11500628 }, // "Craft: Bloodvine Goggles (#19999)"
    { 20002, 11500629 }, // "Craft: Greater Dreamless Sleep Potion (#20002)"
    { 20004, 11500630 }, // "Craft: Mighty Troll's Blood Elixir (#20004)"
    { 20007, 11500631 }, // "Craft: Mageblood Elixir (#20007)"
    { 20008, 11500632 }, // "Craft: Living Action Potion (#20008)"
    { 20039, 11500633 }, // "Craft: Dark Iron Boots (#20039)"
    { 20074, 11500634 }, // "Craft: Heavy Crocolisk Stew (#20074)"
    { 20380, 11500635 }, // "Craft: Dreamscale Breastplate (#20380)"
    { 20475, 11500636 }, // "Craft: Adamantite Arrow Maker (#20475)"
    { 20476, 11500637 }, // "Craft: Sandstalker Bracers (#20476)"
    { 20477, 11500638 }, // "Craft: Sandstalker Gauntlets (#20477)"
    { 20478, 11500639 }, // "Craft: Sandstalker Breastplate (#20478)"
    { 20479, 11500640 }, // "Craft: Spitfire Breastplate (#20479)"
    { 20480, 11500641 }, // "Craft: Spitfire Gauntlets (#20480)"
    { 20481, 11500642 }, // "Craft: Spitfire Bracers (#20481)"
    { 20537, 11500643 }, // "Craft: Runed Stygian Boots (#20537)"
    { 20538, 11500644 }, // "Craft: Runed Stygian Leggings (#20538)"
    { 20539, 11500645 }, // "Craft: Runed Stygian Belt (#20539)"
    { 20549, 11500646 }, // "Craft: Darkrune Gauntlets (#20549)"
    { 20550, 11500647 }, // "Craft: Darkrune Breastplate (#20550)"
    { 20551, 11500648 }, // "Craft: Darkrune Helm (#20551)"
    { 20575, 11500649 }, // "Craft: Black Whelp Tunic (#20575)"
    { 20744, 11500650 }, // "Craft: Minor Wizard Oil (#20744)"
    { 20745, 11500651 }, // "Craft: Minor Mana Oil (#20745)"
    { 20746, 11500652 }, // "Craft: Lesser Wizard Oil (#20746)"
    { 20747, 11500653 }, // "Craft: Lesser Mana Oil (#20747)"
    { 20748, 11500654 }, // "Craft: Brilliant Mana Oil (#20748)"
    { 20749, 11500655 }, // "Craft: Brilliant Wizard Oil (#20749)"
    { 20750, 11500656 }, // "Craft: Wizard Oil (#20750)"
    { 20830, 11500657 }, // "Craft: Amulet of the Moon (#20830)"
    { 20831, 11500658 }, // "Craft: Heavy Golden Necklace of Battle (#20831)"
    { 20833, 11500659 }, // "Craft: Wicked Moonstone Ring (#20833)"
    { 20950, 11500660 }, // "Craft: Pendant of the Agate Shield (#20950)"
    { 20954, 11500661 }, // "Craft: Heavy Iron Knuckles (#20954)"
    { 20958, 11500662 }, // "Craft: Blazing Citrine Ring (#20958)"
    { 20959, 11500663 }, // "Craft: The Jade Eye (#20959)"
    { 20966, 11500664 }, // "Craft: Jade Pendant of Blasting (#20966)"
    { 20967, 11500665 }, // "Craft: Citrine Pendant of Golden Healing (#20967)"
    { 20969, 11500666 }, // "Craft: Ruby Crown of Restoration (#20969)"
    { 21023, 11500667 }, // "Craft: Dirge's Kickin' Chimaerok Chops (#21023)"
    { 21072, 11500668 }, // "Craft: Smoked Sagefish (#21072)"
    { 21154, 11500669 }, // "Craft: Festival Dress (#21154)"
    { 21217, 11500670 }, // "Craft: Sagefish Delight (#21217)"
    { 21278, 11500671 }, // "Craft: Stormshroud Gloves (#21278)"
    { 21340, 11500672 }, // "Craft: Soul Pouch (#21340)"
    { 21342, 11500673 }, // "Craft: Core Felcloth Bag (#21342)"
    { 21542, 11500674 }, // "Craft: Festival Suit (#21542)"
    { 21546, 11500675 }, // "Craft: Elixir of Greater Firepower (#21546)"
    { 21557, 11500676 }, // "Craft: Small Red Rocket (#21557)"
    { 21558, 11500677 }, // "Craft: Small Blue Rocket (#21558)"
    { 21559, 11500678 }, // "Craft: Small Green Rocket (#21559)"
    { 21569, 11500679 }, // "Craft: Firework Launcher (#21569)"
    { 21570, 11500680 }, // "Craft: Cluster Launcher (#21570)"
    { 21571, 11500681 }, // "Craft: Blue Rocket Cluster (#21571)"
    { 21574, 11500682 }, // "Craft: Green Rocket Cluster (#21574)"
    { 21576, 11500683 }, // "Craft: Red Rocket Cluster (#21576)"
    { 21589, 11500684 }, // "Craft: Large Blue Rocket (#21589)"
    { 21590, 11500685 }, // "Craft: Large Green Rocket (#21590)"
    { 21592, 11500686 }, // "Craft: Large Red Rocket (#21592)"
    { 21714, 11500687 }, // "Craft: Large Blue Rocket Cluster (#21714)"
    { 21716, 11500688 }, // "Craft: Large Green Rocket Cluster (#21716)"
    { 21718, 11500689 }, // "Craft: Large Red Rocket Cluster (#21718)"
    { 21753, 11500690 }, // "Craft: Gem Studded Band (#21753)"
    { 21754, 11500691 }, // "Craft: The Aquamarine Ward (#21754)"
    { 21756, 11500692 }, // "Craft: Figurine - Golden Hare (#21756)"
    { 21758, 11500693 }, // "Craft: Figurine - Black Pearl Panther (#21758)"
    { 21760, 11500694 }, // "Craft: Figurine - Truesilver Crab (#21760)"
    { 21763, 11500695 }, // "Craft: Figurine - Truesilver Boar (#21763)"
    { 21766, 11500696 }, // "Craft: Opal Necklace of Impact (#21766)"
    { 21769, 11500697 }, // "Craft: Figurine - Ruby Serpent (#21769)"
    { 21774, 11500698 }, // "Craft: Emerald Crown of Destruction (#21774)"
    { 21777, 11500699 }, // "Craft: Figurine - Emerald Owl (#21777)"
    { 21778, 11500700 }, // "Craft: Ring of Bitter Shadows (#21778)"
    { 21784, 11500701 }, // "Craft: Figurine - Black Diamond Crab (#21784)"
    { 21789, 11500702 }, // "Craft: Figurine - Dark Iron Scorpid (#21789)"
    { 21792, 11500703 }, // "Craft: Necklace of the Diamond Tower (#21792)"
    { 21842, 11500704 }, // "Craft: Bolt of Imbued Netherweave (#21842)"
    { 21843, 11500705 }, // "Craft: Imbued Netherweave Bag (#21843)"
    { 21844, 11500706 }, // "Craft: Bolt of Soulcloth (#21844)"
    { 21845, 11500707 }, // "Craft: Primal Mooncloth (#21845)"
    { 21846, 11500708 }, // "Craft: Spellfire Belt (#21846)"
    { 21847, 11500709 }, // "Craft: Spellfire Gloves (#21847)"
    { 21848, 11500710 }, // "Craft: Spellfire Robe (#21848)"
    { 21854, 11500711 }, // "Craft: Netherweave Robe (#21854)"
    { 21855, 11500712 }, // "Craft: Netherweave Tunic (#21855)"
    { 21858, 11500713 }, // "Craft: Spellfire Bag (#21858)"
    { 21859, 11500714 }, // "Craft: Imbued Netherweave Pants (#21859)"
    { 21860, 11500715 }, // "Craft: Imbued Netherweave Boots (#21860)"
    { 21861, 11500716 }, // "Craft: Imbued Netherweave Robe (#21861)"
    { 21862, 11500717 }, // "Craft: Imbued Netherweave Tunic (#21862)"
    { 21863, 11500718 }, // "Craft: Soulcloth Gloves (#21863)"
    { 21864, 11500719 }, // "Craft: Soulcloth Shoulders (#21864)"
    { 21865, 11500720 }, // "Craft: Soulcloth Vest (#21865)"
    { 21866, 11500721 }, // "Craft: Arcanoweave Bracers (#21866)"
    { 21867, 11500722 }, // "Craft: Arcanoweave Boots (#21867)"
    { 21868, 11500723 }, // "Craft: Arcanoweave Robe (#21868)"
    { 21869, 11500724 }, // "Craft: Frozen Shadoweave Shoulders (#21869)"
    { 21870, 11500725 }, // "Craft: Frozen Shadoweave Boots (#21870)"
    { 21871, 11500726 }, // "Craft: Frozen Shadoweave Robe (#21871)"
    { 21872, 11500727 }, // "Craft: Ebon Shadowbag (#21872)"
    { 21873, 11500728 }, // "Craft: Primal Mooncloth Belt (#21873)"
    { 21874, 11500729 }, // "Craft: Primal Mooncloth Shoulders (#21874)"
    { 21875, 11500730 }, // "Craft: Primal Mooncloth Robe (#21875)"
    { 21876, 11500731 }, // "Craft: Primal Mooncloth Bag (#21876)"
    { 21884, 11500732 }, // "Craft: Primal Fire (#21884)"
    { 21885, 11500733 }, // "Craft: Primal Water (#21885)"
    { 21990, 11500734 }, // "Craft: Netherweave Bandage (#21990)"
    { 21991, 11500735 }, // "Craft: Heavy Netherweave Bandage (#21991)"
    { 22018, 11500736 }, // "Craft: Conjured Glacier Water (#22018)"
    { 22019, 11500737 }, // "Craft: Conjured Croissant (#22019)"
    { 22044, 11500738 }, // "Craft: Mana Emerald (#22044)"
    { 22116, 11500739 }, // "Craft: Master Soulstone (#22116)"
    { 22191, 11500740 }, // "Craft: Obsidian Mail Tunic (#22191)"
    { 22194, 11500741 }, // "Craft: Black Grasp of the Destroyer (#22194)"
    { 22195, 11500742 }, // "Craft: Light Obsidian Belt (#22195)"
    { 22196, 11500743 }, // "Craft: Thick Obsidian Breastplate (#22196)"
    { 22197, 11500744 }, // "Craft: Heavy Obsidian Belt (#22197)"
    { 22198, 11500745 }, // "Craft: Jagged Obsidian Shield (#22198)"
    { 22246, 11500746 }, // "Craft: Enchanted Mageweave Pouch (#22246)"
    { 22248, 11500747 }, // "Craft: Enchanted Runecloth Bag (#22248)"
    { 22249, 11500748 }, // "Craft: Big Bag of Enchantment (#22249)"
    { 22251, 11500749 }, // "Craft: Cenarion Herb Bag (#22251)"
    { 22252, 11500750 }, // "Craft: Satchel of Cenarius (#22252)"
    { 22383, 11500751 }, // "Craft: Sageblade (#22383)"
    { 22384, 11500752 }, // "Craft: Persuader (#22384)"
    { 22385, 11500753 }, // "Craft: Titanic Leggings (#22385)"
    { 22449, 11500754 }, // "Craft: Large Prismatic Shard (#22449)"
    { 22451, 11500755 }, // "Craft: Primal Air (#22451)"
    { 22452, 11500756 }, // "Craft: Primal Earth (#22452)"
    { 22462, 11500757 }, // "Craft: Runed Adamantite Rod (#22462)"
    { 22463, 11500758 }, // "Craft: Runed Eternium Rod (#22463)"
    { 22521, 11500759 }, // "Craft: Superior Mana Oil (#22521)"
    { 22522, 11500760 }, // "Craft: Superior Wizard Oil (#22522)"
    { 22645, 11500761 }, // "Craft: Crunchy Spider Surprise (#22645)"
    { 22660, 11500762 }, // "Craft: Gaea's Embrace (#22660)"
    { 22728, 11500763 }, // "Craft: Steam Tonk Controller (#22728)"
    { 22756, 11500764 }, // "Craft: Sylvan Vest (#22756)"
    { 22757, 11500765 }, // "Craft: Sylvan Crown (#22757)"
    { 22758, 11500766 }, // "Craft: Sylvan Shoulders (#22758)"
    { 22759, 11500767 }, // "Craft: Bramblewood Helm (#22759)"
    { 22760, 11500768 }, // "Craft: Bramblewood Boots (#22760)"
    { 22761, 11500769 }, // "Craft: Bramblewood Belt (#22761)"
    { 22762, 11500770 }, // "Craft: Ironvine Breastplate (#22762)"
    { 22763, 11500771 }, // "Craft: Ironvine Gloves (#22763)"
    { 22764, 11500772 }, // "Craft: Ironvine Belt (#22764)"
    { 22823, 11500773 }, // "Craft: Elixir of Camouflage (#22823)"
    { 22826, 11500774 }, // "Craft: Sneaking Potion (#22826)"
    { 22827, 11500775 }, // "Craft: Elixir of Major Frost Power (#22827)"
    { 22828, 11500776 }, // "Craft: Insane Strength Potion (#22828)"
    { 22830, 11500777 }, // "Craft: Elixir of the Searching Eye (#22830)"
    { 22831, 11500778 }, // "Craft: Elixir of Major Agility (#22831)"
    { 22832, 11500779 }, // "Craft: Super Mana Potion (#22832)"
    { 22833, 11500780 }, // "Craft: Elixir of Major Firepower (#22833)"
    { 22834, 11500781 }, // "Craft: Elixir of Major Defense (#22834)"
    { 22835, 11500782 }, // "Craft: Elixir of Major Shadow Power (#22835)"
    { 22836, 11500783 }, // "Craft: Major Dreamless Sleep Potion (#22836)"
    { 22837, 11500784 }, // "Craft: Heroic Potion (#22837)"
    { 22838, 11500785 }, // "Craft: Haste Potion (#22838)"
    { 22839, 11500786 }, // "Craft: Destruction Potion (#22839)"
    { 22840, 11500787 }, // "Craft: Elixir of Major Mageblood (#22840)"
    { 22841, 11500788 }, // "Craft: Major Fire Protection Potion (#22841)"
    { 22842, 11500789 }, // "Craft: Major Frost Protection Potion (#22842)"
    { 22844, 11500790 }, // "Craft: Major Nature Protection Potion (#22844)"
    { 22845, 11500791 }, // "Craft: Major Arcane Protection Potion (#22845)"
    { 22846, 11500792 }, // "Craft: Major Shadow Protection Potion (#22846)"
    { 22847, 11500793 }, // "Craft: Major Holy Protection Potion (#22847)"
    { 22848, 11500794 }, // "Craft: Elixir of Empowerment (#22848)"
    { 22849, 11500795 }, // "Craft: Ironshield Potion (#22849)"
    { 22871, 11500796 }, // "Craft: Shrouding Potion (#22871)"
    { 22895, 11500797 }, // "Craft: Conjured Cinnamon Roll (#22895)"
    { 23094, 11500798 }, // "Craft: Teardrop Blood Garnet (#23094)"
    { 23095, 11500799 }, // "Craft: Bold Blood Garnet (#23095)"
    { 23096, 11500800 }, // "Craft: Runed Blood Garnet (#23096)"
    { 23097, 11500801 }, // "Craft: Delicate Blood Garnet (#23097)"
    { 23098, 11500802 }, // "Craft: Inscribed Flame Spessarite (#23098)"
    { 23099, 11500803 }, // "Craft: Luminous Flame Spessarite (#23099)"
    { 23100, 11500804 }, // "Craft: Glinting Flame Spessarite (#23100)"
    { 23101, 11500805 }, // "Craft: Potent Flame Spessarite (#23101)"
    { 23103, 11500806 }, // "Craft: Radiant Deep Peridot (#23103)"
    { 23104, 11500807 }, // "Craft: Jagged Deep Peridot (#23104)"
    { 23105, 11500808 }, // "Craft: Enduring Deep Peridot (#23105)"
    { 23106, 11500809 }, // "Craft: Dazzling Deep Peridot (#23106)"
    { 23108, 11500810 }, // "Craft: Glowing Shadow Draenite (#23108)"
    { 23109, 11500811 }, // "Craft: Royal Shadow Draenite (#23109)"
    { 23110, 11500812 }, // "Craft: Shifting Shadow Draenite (#23110)"
    { 23111, 11500813 }, // "Craft: Sovereign Shadow Draenite (#23111)"
    { 23113, 11500814 }, // "Craft: Brilliant Golden Draenite (#23113)"
    { 23114, 11500815 }, // "Craft: Gleaming Golden Draenite (#23114)"
    { 23115, 11500816 }, // "Craft: Thick Golden Draenite (#23115)"
    { 23116, 11500817 }, // "Craft: Rigid Golden Draenite (#23116)"
    { 23118, 11500818 }, // "Craft: Solid Azure Moonstone (#23118)"
    { 23119, 11500819 }, // "Craft: Sparkling Azure Moonstone (#23119)"
    { 23120, 11500820 }, // "Craft: Stormy Azure Moonstone (#23120)"
    { 23121, 11500821 }, // "Craft: Lustrous Azure Moonstone (#23121)"
    { 23502, 11500822 }, // "Craft: Adamantite Maul (#23502)"
    { 23503, 11500823 }, // "Craft: Adamantite Cleaver (#23503)"
    { 23504, 11500824 }, // "Craft: Adamantite Dagger (#23504)"
    { 23505, 11500825 }, // "Craft: Adamantite Rapier (#23505)"
    { 23506, 11500826 }, // "Craft: Adamantite Plate Bracers (#23506)"
    { 23507, 11500827 }, // "Craft: Adamantite Breastplate (#23507)"
    { 23508, 11500828 }, // "Craft: Adamantite Plate Gloves (#23508)"
    { 23509, 11500829 }, // "Craft: Enchanted Adamantite Breastplate (#23509)"
    { 23510, 11500830 }, // "Craft: Enchanted Adamantite Belt (#23510)"
    { 23511, 11500831 }, // "Craft: Enchanted Adamantite Boots (#23511)"
    { 23512, 11500832 }, // "Craft: Enchanted Adamantite Leggings (#23512)"
    { 23513, 11500833 }, // "Craft: Flamebane Breastplate (#23513)"
    { 23514, 11500834 }, // "Craft: Flamebane Gloves (#23514)"
    { 23515, 11500835 }, // "Craft: Flamebane Bracers (#23515)"
    { 23516, 11500836 }, // "Craft: Flamebane Helm (#23516)"
    { 23517, 11500837 }, // "Craft: Felsteel Gloves (#23517)"
    { 23518, 11500838 }, // "Craft: Felsteel Leggings (#23518)"
    { 23519, 11500839 }, // "Craft: Felsteel Helm (#23519)"
    { 23520, 11500840 }, // "Craft: Ragesteel Gloves (#23520)"
    { 23521, 11500841 }, // "Craft: Ragesteel Helm (#23521)"
    { 23522, 11500842 }, // "Craft: Ragesteel Breastplate (#23522)"
    { 23523, 11500843 }, // "Craft: Khorium Pants (#23523)"
    { 23524, 11500844 }, // "Craft: Khorium Belt (#23524)"
    { 23525, 11500845 }, // "Craft: Khorium Boots (#23525)"
    { 23526, 11500846 }, // "Craft: Swiftsteel Gloves (#23526)"
    { 23527, 11500847 }, // "Craft: Earthpeace Breastplate (#23527)"
    { 23529, 11500848 }, // "Craft: Adamantite Sharpening Stone (#23529)"
    { 23530, 11500849 }, // "Craft: Felsteel Shield Spike (#23530)"
    { 23531, 11500850 }, // "Craft: Felfury Gauntlets (#23531)"
    { 23532, 11500851 }, // "Craft: Gauntlets of the Iron Tower (#23532)"
    { 23533, 11500852 }, // "Craft: Steelgrip Gauntlets (#23533)"
    { 23534, 11500853 }, // "Craft: Storm Helm (#23534)"
    { 23535, 11500854 }, // "Craft: Helm of the Stalwart Defender (#23535)"
    { 23536, 11500855 }, // "Craft: Oathkeeper's Helm (#23536)"
    { 23537, 11500856 }, // "Craft: Black Felsteel Bracers (#23537)"
    { 23538, 11500857 }, // "Craft: Bracers of the Green Fortress (#23538)"
    { 23539, 11500858 }, // "Craft: Blessed Bracers (#23539)"
    { 23540, 11500859 }, // "Craft: Felsteel Longblade (#23540)"
    { 23541, 11500860 }, // "Craft: Khorium Champion (#23541)"
    { 23542, 11500861 }, // "Craft: Fel Edged Battleaxe (#23542)"
    { 23543, 11500862 }, // "Craft: Felsteel Reaper (#23543)"
    { 23544, 11500863 }, // "Craft: Runic Hammer (#23544)"
    { 23546, 11500864 }, // "Craft: Fel Hardened Maul (#23546)"
    { 23554, 11500865 }, // "Craft: Eternium Runed Blade (#23554)"
    { 23555, 11500866 }, // "Craft: Dirge (#23555)"
    { 23556, 11500867 }, // "Craft: Hand of Eternity (#23556)"
    { 23571, 11500868 }, // "Craft: Primal Might (#23571)"
    { 23575, 11500869 }, // "Craft: Lesser Ward of Shielding (#23575)"
    { 23576, 11500870 }, // "Craft: Greater Ward of Shielding (#23576)"
    { 23746, 11500871 }, // "Craft: Adamantite Rifle (#23746)"
    { 23747, 11500872 }, // "Craft: Felsteel Boomstick (#23747)"
    { 23748, 11500873 }, // "Craft: Ornate Khorium Rifle (#23748)"
    { 23758, 11500874 }, // "Craft: Cogspinner Goggles (#23758)"
    { 23761, 11500875 }, // "Craft: Power Amplification Goggles (#23761)"
    { 23762, 11500876 }, // "Craft: Ultra-Spectropic Detection Goggles (#23762)"
    { 23763, 11500877 }, // "Craft: Hyper-Vision Goggles (#23763)"
    { 23764, 11500878 }, // "Craft: Adamantite Scope (#23764)"
    { 23765, 11500879 }, // "Craft: Khorium Scope (#23765)"
    { 23766, 11500880 }, // "Craft: Stabilized Eternium Scope (#23766)"
    { 23767, 11500881 }, // "Craft: Crashin' Thrashin' Robot (#23767)"
    { 23768, 11500882 }, // "Craft: White Smoke Flare (#23768)"
    { 23771, 11500883 }, // "Craft: Green Smoke Flare (#23771)"
    { 23774, 11500884 }, // "Craft: Fel Iron Toolbox (#23774)"
    { 23775, 11500885 }, // "Craft: Titanium Toolbox (#23775)"
    { 23793, 11500886 }, // "Craft: Heavy Knothide Leather (#23793)"
    { 23819, 11500887 }, // "Craft: Elemental Seaforium Charge (#23819)"
    { 23820, 11500888 }, // "Craft: Critter Enlarger (#23820)"
    { 23821, 11500889 }, // "Craft: Zapthrottle Mote Extractor (#23821)"
    { 23824, 11500890 }, // "Craft: Rocket Boots Xtreme (#23824)"
    { 23840, 11500891 }, // "Craft: Remote Mail Terminal (#23840)"
    { 24027, 11500892 }, // "Craft: Bold Living Ruby (#24027)"
    { 24028, 11500893 }, // "Craft: Delicate Living Ruby (#24028)"
    { 24029, 11500894 }, // "Craft: Teardrop Living Ruby (#24029)"
    { 24030, 11500895 }, // "Craft: Runed Living Ruby (#24030)"
    { 24031, 11500896 }, // "Craft: Bright Living Ruby (#24031)"
    { 24032, 11500897 }, // "Craft: Subtle Living Ruby (#24032)"
    { 24033, 11500898 }, // "Craft: Solid Star of Elune (#24033)"
    { 24035, 11500899 }, // "Craft: Sparkling Star of Elune (#24035)"
    { 24036, 11500900 }, // "Craft: Flashing Living Ruby (#24036)"
    { 24037, 11500901 }, // "Craft: Lustrous Star of Elune (#24037)"
    { 24039, 11500902 }, // "Craft: Stormy Star of Elune (#24039)"
    { 24047, 11500903 }, // "Craft: Brilliant Dawnstone (#24047)"
    { 24048, 11500904 }, // "Craft: Smooth Dawnstone (#24048)"
    { 24050, 11500905 }, // "Craft: Gleaming Dawnstone (#24050)"
    { 24051, 11500906 }, // "Craft: Rigid Dawnstone (#24051)"
    { 24052, 11500907 }, // "Craft: Thick Dawnstone (#24052)"
    { 24053, 11500908 }, // "Craft: Mystic Dawnstone (#24053)"
    { 24054, 11500909 }, // "Craft: Sovereign Nightseye (#24054)"
    { 24055, 11500910 }, // "Craft: Shifting Nightseye (#24055)"
    { 24056, 11500911 }, // "Craft: Glowing Nightseye (#24056)"
    { 24057, 11500912 }, // "Craft: Royal Nightseye (#24057)"
    { 24058, 11500913 }, // "Craft: Inscribed Noble Topaz (#24058)"
    { 24059, 11500914 }, // "Craft: Potent Noble Topaz (#24059)"
    { 24060, 11500915 }, // "Craft: Luminous Noble Topaz (#24060)"
    { 24061, 11500916 }, // "Craft: Glinting Noble Topaz (#24061)"
    { 24062, 11500917 }, // "Craft: Enduring Talasite (#24062)"
    { 24065, 11500918 }, // "Craft: Dazzling Talasite (#24065)"
    { 24066, 11500919 }, // "Craft: Radiant Talasite (#24066)"
    { 24067, 11500920 }, // "Craft: Jagged Talasite (#24067)"
    { 24079, 11500921 }, // "Craft: Khorium Band of Shadows (#24079)"
    { 24080, 11500922 }, // "Craft: Khorium Band of Frost (#24080)"
    { 24082, 11500923 }, // "Craft: Khorium Inferno Band (#24082)"
    { 24085, 11500924 }, // "Craft: Khorium Band of Leaves (#24085)"
    { 24086, 11500925 }, // "Craft: Arcane Khorium Band (#24086)"
    { 24087, 11500926 }, // "Craft: Heavy Felsteel Ring (#24087)"
    { 24088, 11500927 }, // "Craft: Delicate Eternium Ring (#24088)"
    { 24089, 11500928 }, // "Craft: Blazing Eternium Band (#24089)"
    { 24092, 11500929 }, // "Craft: Pendant of Frozen Flame (#24092)"
    { 24093, 11500930 }, // "Craft: Pendant of Thawing (#24093)"
    { 24095, 11500931 }, // "Craft: Pendant of Withering (#24095)"
    { 24097, 11500932 }, // "Craft: Pendant of Shadow's End (#24097)"
    { 24098, 11500933 }, // "Craft: Pendant of the Null Rune (#24098)"
    { 24105, 11500934 }, // "Craft: Roasted Moongraze Tenderloin (#24105)"
    { 24106, 11500935 }, // "Craft: Thick Felsteel Necklace (#24106)"
    { 24110, 11500936 }, // "Craft: Living Ruby Pendant (#24110)"
    { 24114, 11500937 }, // "Craft: Braided Eternium Chain (#24114)"
    { 24116, 11500938 }, // "Craft: Eye of the Night (#24116)"
    { 24117, 11500939 }, // "Craft: Embrace of the Dawn (#24117)"
    { 24121, 11500940 }, // "Craft: Chain of the Twilight Owl (#24121)"
    { 24122, 11500941 }, // "Craft: Coronet of Verdant Flame (#24122)"
    { 24123, 11500942 }, // "Craft: Circlet of Arcane Might (#24123)"
    { 24124, 11500943 }, // "Craft: Figurine - Felsteel Boar (#24124)"
    { 24125, 11500944 }, // "Craft: Figurine - Dawnstone Crab (#24125)"
    { 24126, 11500945 }, // "Craft: Figurine - Living Ruby Serpent (#24126)"
    { 24127, 11500946 }, // "Craft: Figurine - Talasite Owl (#24127)"
    { 24128, 11500947 }, // "Craft: Figurine - Nightseye Panther (#24128)"
    { 24249, 11500948 }, // "Craft: Unyielding Bracers (#24249)"
    { 24250, 11500949 }, // "Craft: Bracers of Havok (#24250)"
    { 24251, 11500950 }, // "Craft: Blackstrike Bracers (#24251)"
    { 24252, 11500951 }, // "Craft: Cloak of the Black Void (#24252)"
    { 24253, 11500952 }, // "Craft: Cloak of Eternity (#24253)"
    { 24254, 11500953 }, // "Craft: White Remedy Cape (#24254)"
    { 24255, 11500954 }, // "Craft: Unyielding Girdle (#24255)"
    { 24256, 11500955 }, // "Craft: Girdle of Ruination (#24256)"
    { 24257, 11500956 }, // "Craft: Black Belt of Knowledge (#24257)"
    { 24258, 11500957 }, // "Craft: Resolute Cape (#24258)"
    { 24259, 11500958 }, // "Craft: Vengeance Wrap (#24259)"
    { 24260, 11500959 }, // "Craft: Manaweave Cloak (#24260)"
    { 24261, 11500960 }, // "Craft: Whitemend Pants (#24261)"
    { 24262, 11500961 }, // "Craft: Spellstrike Pants (#24262)"
    { 24263, 11500962 }, // "Craft: Battlecast Pants (#24263)"
    { 24264, 11500963 }, // "Craft: Whitemend Hood (#24264)"
    { 24266, 11500964 }, // "Craft: Spellstrike Hood (#24266)"
    { 24267, 11500965 }, // "Craft: Battlecast Hood (#24267)"
    { 24269, 11500966 }, // "Craft: Heavy Netherweave Net (#24269)"
    { 24270, 11500967 }, // "Craft: Bag of Jewels (#24270)"
    { 24271, 11500968 }, // "Craft: Spellcloth (#24271)"
    { 24272, 11500969 }, // "Craft: Shadowcloth (#24272)"
    { 24273, 11500970 }, // "Craft: Mystic Spellthread (#24273)"
    { 24274, 11500971 }, // "Craft: Runic Spellthread (#24274)"
    { 24275, 11500972 }, // "Craft: Silver Spellthread (#24275)"
    { 24276, 11500973 }, // "Craft: Golden Spellthread (#24276)"
    { 25521, 11500974 }, // "Craft: Greater Rune of Warding (#25521)"
    { 25651, 11500975 }, // "Craft: Vindicator's Armor Kit (#25651)"
    { 25652, 11500976 }, // "Craft: Magister's Armor Kit (#25652)"
    { 25653, 11500977 }, // "Craft: Riding Crop (#25653)"
    { 25679, 11500978 }, // "Craft: Comfortable Insoles (#25679)"
    { 25680, 11500979 }, // "Craft: Stylin' Purple Hat (#25680)"
    { 25681, 11500980 }, // "Craft: Stylin' Adventure Hat (#25681)"
    { 25682, 11500981 }, // "Craft: Stylin' Jungle Hat (#25682)"
    { 25683, 11500982 }, // "Craft: Stylin' Crimson Hat (#25683)"
    { 25685, 11500983 }, // "Craft: Fel Leather Gloves (#25685)"
    { 25686, 11500984 }, // "Craft: Fel Leather Boots (#25686)"
    { 25687, 11500985 }, // "Craft: Fel Leather Leggings (#25687)"
    { 25689, 11500986 }, // "Craft: Heavy Clefthoof Vest (#25689)"
    { 25690, 11500987 }, // "Craft: Heavy Clefthoof Leggings (#25690)"
    { 25691, 11500988 }, // "Craft: Heavy Clefthoof Boots (#25691)"
    { 25692, 11500989 }, // "Craft: Netherfury Leggings (#25692)"
    { 25693, 11500990 }, // "Craft: Netherfury Boots (#25693)"
    { 25694, 11500991 }, // "Craft: Netherfury Belt (#25694)"
    { 25695, 11500992 }, // "Craft: Felstalker Belt (#25695)"
    { 25696, 11500993 }, // "Craft: Felstalker Breastplate (#25696)"
    { 25697, 11500994 }, // "Craft: Felstalker Bracers (#25697)"
    { 25844, 11500995 }, // "Craft: Adamantite Rod (#25844)"
    { 25845, 11500996 }, // "Craft: Eternium Rod (#25845)"
    { 25867, 11500997 }, // "Craft: Earthstorm Diamond (#25867)"
    { 25868, 11500998 }, // "Craft: Skyfire Diamond (#25868)"
    { 25886, 11500999 }, // "Craft: Purple Smoke Flare (#25886)"
    { 25890, 11501000 }, // "Craft: Destructive Skyfire Diamond (#25890)"
    { 25893, 11501001 }, // "Craft: Mystical Skyfire Diamond (#25893)"
    { 25894, 11501002 }, // "Craft: Swift Skyfire Diamond (#25894)"
    { 25895, 11501003 }, // "Craft: Enigmatic Skyfire Diamond (#25895)"
    { 25896, 11501004 }, // "Craft: Powerful Earthstorm Diamond (#25896)"
    { 25897, 11501005 }, // "Craft: Bracing Earthstorm Diamond (#25897)"
    { 25898, 11501006 }, // "Craft: Tenacious Earthstorm Diamond (#25898)"
    { 25899, 11501007 }, // "Craft: Brutal Earthstorm Diamond (#25899)"
    { 25901, 11501008 }, // "Craft: Insightful Earthstorm Diamond (#25901)"
    { 27635, 11501009 }, // "Craft: Lynx Steak (#27635)"
    { 27636, 11501010 }, // "Craft: Bat Bites (#27636)"
    { 27651, 11501011 }, // "Craft: Buzzard Bites (#27651)"
    { 27655, 11501012 }, // "Craft: Ravager Dog (#27655)"
    { 27656, 11501013 }, // "Craft: Sporeling Snack (#27656)"
    { 27657, 11501014 }, // "Craft: Blackened Basilisk (#27657)"
    { 27658, 11501015 }, // "Craft: Roasted Clefthoof (#27658)"
    { 27659, 11501016 }, // "Craft: Warp Burger (#27659)"
    { 27660, 11501017 }, // "Craft: Talbuk Steak (#27660)"
    { 27661, 11501018 }, // "Craft: Blackened Trout (#27661)"
    { 27662, 11501019 }, // "Craft: Feltail Delight (#27662)"
    { 27663, 11501020 }, // "Craft: Blackened Sporefish (#27663)"
    { 27664, 11501021 }, // "Craft: Grilled Mudfish (#27664)"
    { 27665, 11501022 }, // "Craft: Poached Bluefish (#27665)"
    { 27666, 11501023 }, // "Craft: Golden Fish Sticks (#27666)"
    { 27667, 11501024 }, // "Craft: Spicy Crawdad (#27667)"
    { 28290, 11501025 }, // "Craft: Smooth Golden Draenite (#28290)"
    { 28421, 11501026 }, // "Craft: Adamantite Weightstone (#28421)"
    { 28595, 11501027 }, // "Craft: Bright Blood Garnet (#28595)"
    { 29483, 11501028 }, // "Craft: Shadow Armor Kit (#29483)"
    { 29485, 11501029 }, // "Craft: Flame Armor Kit (#29485)"
    { 29486, 11501030 }, // "Craft: Frost Armor Kit (#29486)"
    { 29487, 11501031 }, // "Craft: Nature Armor Kit (#29487)"
    { 29488, 11501032 }, // "Craft: Arcane Armor Kit (#29488)"
    { 29489, 11501033 }, // "Craft: Enchanted Felscale Leggings (#29489)"
    { 29490, 11501034 }, // "Craft: Enchanted Felscale Gloves (#29490)"
    { 29491, 11501035 }, // "Craft: Enchanted Felscale Boots (#29491)"
    { 29492, 11501036 }, // "Craft: Flamescale Leggings (#29492)"
    { 29493, 11501037 }, // "Craft: Flamescale Boots (#29493)"
    { 29494, 11501038 }, // "Craft: Flamescale Belt (#29494)"
    { 29495, 11501039 }, // "Craft: Enchanted Clefthoof Leggings (#29495)"
    { 29496, 11501040 }, // "Craft: Enchanted Clefthoof Gloves (#29496)"
    { 29497, 11501041 }, // "Craft: Enchanted Clefthoof Boots (#29497)"
    { 29498, 11501042 }, // "Craft: Blastguard Pants (#29498)"
    { 29499, 11501043 }, // "Craft: Blastguard Boots (#29499)"
    { 29500, 11501044 }, // "Craft: Blastguard Belt (#29500)"
    { 29502, 11501045 }, // "Craft: Cobrascale Hood (#29502)"
    { 29503, 11501046 }, // "Craft: Cobrascale Gloves (#29503)"
    { 29504, 11501047 }, // "Craft: Windscale Hood (#29504)"
    { 29505, 11501048 }, // "Craft: Hood of Primal Life (#29505)"
    { 29506, 11501049 }, // "Craft: Gloves of the Living Touch (#29506)"
    { 29507, 11501050 }, // "Craft: Windslayer Wraps (#29507)"
    { 29508, 11501051 }, // "Craft: Living Dragonscale Helm (#29508)"
    { 29509, 11501052 }, // "Craft: Windstrike Gloves (#29509)"
    { 29510, 11501053 }, // "Craft: Netherdrake Helm (#29510)"
    { 29511, 11501054 }, // "Craft: Netherdrake Gloves (#29511)"
    { 29512, 11501055 }, // "Craft: Earthen Netherscale Boots (#29512)"
    { 29514, 11501056 }, // "Craft: Thick Netherscale Breastplate (#29514)"
    { 29529, 11501057 }, // "Craft: Drums of Battle (#29529)"
    { 29530, 11501058 }, // "Craft: Drums of Speed (#29530)"
    { 29531, 11501059 }, // "Craft: Drums of Restoration (#29531)"
    { 29532, 11501060 }, // "Craft: Drums of Panic (#29532)"
    { 29533, 11501061 }, // "Craft: Cobrahide Leg Armor (#29533)"
    { 29534, 11501062 }, // "Craft: Clefthide Leg Armor (#29534)"
    { 29535, 11501063 }, // "Craft: Nethercobra Leg Armor (#29535)"
    { 29536, 11501064 }, // "Craft: Nethercleft Leg Armor (#29536)"
    { 29540, 11501065 }, // "Craft: Reinforced Mining Bag (#29540)"
    { 30031, 11501066 }, // "Craft: Red Havoc Boots (#30031)"
    { 30032, 11501067 }, // "Craft: Red Belt of Battle (#30032)"
    { 30033, 11501068 }, // "Craft: Boots of the Protector (#30033)"
    { 30034, 11501069 }, // "Craft: Belt of the Guardian (#30034)"
    { 30035, 11501070 }, // "Craft: Boots of the Long Road (#30035)"
    { 30036, 11501071 }, // "Craft: Belt of the Long Road (#30036)"
    { 30037, 11501072 }, // "Craft: Boots of Blasting (#30037)"
    { 30038, 11501073 }, // "Craft: Belt of Blasting (#30038)"
    { 30039, 11501074 }, // "Craft: Boots of Utter Darkness (#30039)"
    { 30040, 11501075 }, // "Craft: Belt of Deep Shadow (#30040)"
    { 30041, 11501076 }, // "Craft: Boots of Natural Grace (#30041)"
    { 30042, 11501077 }, // "Craft: Belt of Natural Power (#30042)"
    { 30043, 11501078 }, // "Craft: Hurricane Boots (#30043)"
    { 30044, 11501079 }, // "Craft: Monsoon Belt (#30044)"
    { 30045, 11501080 }, // "Craft: Boots of the Crimson Hawk (#30045)"
    { 30046, 11501081 }, // "Craft: Belt of the Black Eagle (#30046)"
    { 30155, 11501082 }, // "Craft: Clam Bar (#30155)"
    { 30703, 11501083 }, // "Craft: Conjured Mountain Spring Water (#30703)"
    { 30825, 11501084 }, // "Craft: Ring of Arcane Shielding (#30825)"
    { 30831, 11501085 }, // "Craft: Cloak of Arcane Evasion (#30831)"
    { 30837, 11501086 }, // "Craft: Flameheart Bracers (#30837)"
    { 30838, 11501087 }, // "Craft: Flameheart Gloves (#30838)"
    { 30839, 11501088 }, // "Craft: Flameheart Vest (#30839)"
    { 31364, 11501089 }, // "Craft: Wildguard Breastplate (#31364)"
    { 31367, 11501090 }, // "Craft: Wildguard Leggings (#31367)"
    { 31368, 11501091 }, // "Craft: Wildguard Helm (#31368)"
    { 31369, 11501092 }, // "Craft: Iceguard Breastplate (#31369)"
    { 31370, 11501093 }, // "Craft: Iceguard Leggings (#31370)"
    { 31371, 11501094 }, // "Craft: Iceguard Helm (#31371)"
    { 31398, 11501095 }, // "Craft: The Frozen Eye (#31398)"
    { 31399, 11501096 }, // "Craft: The Natural Ward (#31399)"
    { 31672, 11501097 }, // "Craft: Mok'Nathal Shortribs (#31672)"
    { 31673, 11501098 }, // "Craft: Crunchy Serpent (#31673)"
    { 31676, 11501099 }, // "Craft: Fel Regeneration Potion (#31676)"
    { 31677, 11501100 }, // "Craft: Fel Mana Potion (#31677)"
    { 31679, 11501101 }, // "Craft: Fel Strength Elixir (#31679)"
    { 31860, 11501102 }, // "Craft: Great Golden Draenite (#31860)"
    { 31861, 11501103 }, // "Craft: Great Dawnstone (#31861)"
    { 31862, 11501104 }, // "Craft: Balanced Shadow Draenite (#31862)"
    { 31863, 11501105 }, // "Craft: Balanced Nightseye (#31863)"
    { 31864, 11501106 }, // "Craft: Infused Shadow Draenite (#31864)"
    { 31865, 11501107 }, // "Craft: Infused Nightseye (#31865)"
    { 31866, 11501108 }, // "Craft: Veiled Flame Spessarite (#31866)"
    { 31867, 11501109 }, // "Craft: Veiled Noble Topaz (#31867)"
    { 31868, 11501110 }, // "Craft: Wicked Noble Topaz (#31868)"
    { 31869, 11501111 }, // "Craft: Wicked Flame Spessarite (#31869)"
    { 32063, 11501112 }, // "Craft: Earthen Elixir (#32063)"
    { 32068, 11501113 }, // "Craft: Elixir of Ironskin (#32068)"
    { 32193, 11501114 }, // "Craft: Bold Crimson Spinel (#32193)"
    { 32194, 11501115 }, // "Craft: Delicate Crimson Spinel (#32194)"
    { 32195, 11501116 }, // "Craft: Teardrop Crimson Spinel (#32195)"
    { 32196, 11501117 }, // "Craft: Runed Crimson Spinel (#32196)"
    { 32197, 11501118 }, // "Craft: Bright Crimson Spinel (#32197)"
    { 32198, 11501119 }, // "Craft: Subtle Crimson Spinel (#32198)"
    { 32199, 11501120 }, // "Craft: Flashing Crimson Spinel (#32199)"
    { 32200, 11501121 }, // "Craft: Solid Empyrean Sapphire (#32200)"
    { 32201, 11501122 }, // "Craft: Sparkling Empyrean Sapphire (#32201)"
    { 32202, 11501123 }, // "Craft: Lustrous Empyrean Sapphire (#32202)"
    { 32203, 11501124 }, // "Craft: Stormy Empyrean Sapphire (#32203)"
    { 32204, 11501125 }, // "Craft: Brilliant Lionseye (#32204)"
    { 32205, 11501126 }, // "Craft: Smooth Lionseye (#32205)"
    { 32206, 11501127 }, // "Craft: Rigid Lionseye (#32206)"
    { 32207, 11501128 }, // "Craft: Gleaming Lionseye (#32207)"
    { 32208, 11501129 }, // "Craft: Thick Lionseye (#32208)"
    { 32209, 11501130 }, // "Craft: Mystic Lionseye (#32209)"
    { 32210, 11501131 }, // "Craft: Great Lionseye (#32210)"
    { 32211, 11501132 }, // "Craft: Sovereign Shadowsong Amethyst (#32211)"
    { 32212, 11501133 }, // "Craft: Shifting Shadowsong Amethyst (#32212)"
    { 32213, 11501134 }, // "Craft: Balanced Shadowsong Amethyst (#32213)"
    { 32214, 11501135 }, // "Craft: Infused Shadowsong Amethyst (#32214)"
    { 32215, 11501136 }, // "Craft: Glowing Shadowsong Amethyst (#32215)"
    { 32216, 11501137 }, // "Craft: Royal Shadowsong Amethyst (#32216)"
    { 32217, 11501138 }, // "Craft: Inscribed Pyrestone (#32217)"
    { 32218, 11501139 }, // "Craft: Potent Pyrestone (#32218)"
    { 32219, 11501140 }, // "Craft: Luminous Pyrestone (#32219)"
    { 32220, 11501141 }, // "Craft: Glinting Pyrestone (#32220)"
    { 32221, 11501142 }, // "Craft: Veiled Pyrestone (#32221)"
    { 32222, 11501143 }, // "Craft: Wicked Pyrestone (#32222)"
    { 32223, 11501144 }, // "Craft: Enduring Seaspray Emerald (#32223)"
    { 32224, 11501145 }, // "Craft: Radiant Seaspray Emerald (#32224)"
    { 32225, 11501146 }, // "Craft: Dazzling Seaspray Emerald (#32225)"
    { 32226, 11501147 }, // "Craft: Jagged Seaspray Emerald (#32226)"
    { 32389, 11501148 }, // "Craft: Soulguard Leggings (#32389)"
    { 32390, 11501149 }, // "Craft: Soulguard Girdle (#32390)"
    { 32391, 11501150 }, // "Craft: Soulguard Slippers (#32391)"
    { 32392, 11501151 }, // "Craft: Soulguard Bracers (#32392)"
    { 32393, 11501152 }, // "Craft: Redeemed Soul Cinch (#32393)"
    { 32394, 11501153 }, // "Craft: Redeemed Soul Moccasins (#32394)"
    { 32395, 11501154 }, // "Craft: Redeemed Soul Wristguards (#32395)"
    { 32396, 11501155 }, // "Craft: Redeemed Soul Legguards (#32396)"
    { 32397, 11501156 }, // "Craft: Waistguard of Shackled Souls (#32397)"
    { 32398, 11501157 }, // "Craft: Boots of Shackled Souls (#32398)"
    { 32399, 11501158 }, // "Craft: Bracers of Shackled Souls (#32399)"
    { 32400, 11501159 }, // "Craft: Greaves of Shackled Souls (#32400)"
    { 32401, 11501160 }, // "Craft: Shadesteel Girdle (#32401)"
    { 32402, 11501161 }, // "Craft: Shadesteel Sabots (#32402)"
    { 32403, 11501162 }, // "Craft: Shadesteel Bracers (#32403)"
    { 32404, 11501163 }, // "Craft: Shadesteel Greaves (#32404)"
    { 32409, 11501164 }, // "Craft: Relentless Earthstorm Diamond (#32409)"
    { 32410, 11501165 }, // "Craft: Thundering Skyfire Diamond (#32410)"
    { 32420, 11501166 }, // "Craft: Night's End (#32420)"
    { 32568, 11501167 }, // "Craft: Swiftsteel Bracers (#32568)"
    { 32570, 11501168 }, // "Craft: Swiftsteel Shoulders (#32570)"
    { 32571, 11501169 }, // "Craft: Dawnsteel Bracers (#32571)"
    { 32573, 11501170 }, // "Craft: Dawnsteel Shoulders (#32573)"
    { 32574, 11501171 }, // "Craft: Bindings of Lightning Reflexes (#32574)"
    { 32575, 11501172 }, // "Craft: Shoulders of Lightning Reflexes (#32575)"
    { 32577, 11501173 }, // "Craft: Living Earth Bindings (#32577)"
    { 32579, 11501174 }, // "Craft: Living Earth Shoulders (#32579)"
    { 32580, 11501175 }, // "Craft: Swiftstrike Bracers (#32580)"
    { 32581, 11501176 }, // "Craft: Swiftstrike Shoulders (#32581)"
    { 32582, 11501177 }, // "Craft: Bracers of Renewed Life (#32582)"
    { 32583, 11501178 }, // "Craft: Shoulderpads of Renewed Life (#32583)"
    { 32584, 11501179 }, // "Craft: Swiftheal Wraps (#32584)"
    { 32585, 11501180 }, // "Craft: Swiftheal Mantle (#32585)"
    { 32586, 11501181 }, // "Craft: Bracers of Nimble Thought (#32586)"
    { 32587, 11501182 }, // "Craft: Mantle of Nimble Thought (#32587)"
    { 32854, 11501183 }, // "Craft: Hammer of Righteous Might (#32854)"
    { 33092, 11501184 }, // "Craft: Healing Potion Injector (#33092)"
    { 33093, 11501185 }, // "Craft: Mana Potion Injector (#33093)"
    { 33122, 11501186 }, // "Craft: Cloak of Darkness (#33122)"
    { 33131, 11501187 }, // "Craft: Crimson Sun (#33131)"
    { 33133, 11501188 }, // "Craft: Don Julio's Heart (#33133)"
    { 33134, 11501189 }, // "Craft: Kailee's Rose (#33134)"
    { 33135, 11501190 }, // "Craft: Falling Star (#33135)"
    { 33140, 11501191 }, // "Craft: Blood of Amber (#33140)"
    { 33143, 11501192 }, // "Craft: Stone of Blades (#33143)"
    { 33144, 11501193 }, // "Craft: Facet of Eternity (#33144)"
    { 33173, 11501194 }, // "Craft: Ragesteel Shoulders (#33173)"
    { 33185, 11501195 }, // "Craft: Adamantite Weapon Chain (#33185)"
    { 33204, 11501196 }, // "Craft: Shadowprowler's Chestguard (#33204)"
    { 33208, 11501197 }, // "Craft: Flask of Chromatic Wonder (#33208)"
    { 33312, 11501198 }, // "Craft: Mana Sapphire (#33312)"
    { 33782, 11501199 }, // "Craft: Steady Talasite (#33782)"
    { 33791, 11501200 }, // "Craft: Heavy Copper Longsword (#33791)"
    { 33825, 11501201 }, // "Craft: Skullfish Soup (#33825)"
    { 33866, 11501202 }, // "Craft: Stormchops (#33866)"
    { 33867, 11501203 }, // "Craft: Broiled Bloodfin (#33867)"
    { 33872, 11501204 }, // "Craft: Spicy Hot Talbuk (#33872)"
    { 33874, 11501205 }, // "Craft: Kibler's Bits (#33874)"
    { 33924, 11501206 }, // "Craft: Delicious Chocolate Cake (#33924)"
    { 34085, 11501207 }, // "Craft: Red Winter Clothes (#34085)"
    { 34086, 11501208 }, // "Craft: Winter Boots (#34086)"
    { 34087, 11501209 }, // "Craft: Green Winter Clothes (#34087)"
    { 34105, 11501210 }, // "Craft: Quiver of a Thousand Feathers (#34105)"
    { 34106, 11501211 }, // "Craft: Netherscale Ammo Pouch (#34106)"
    { 34113, 11501212 }, // "Craft: Field Repair Bot 110G (#34113)"
    { 34220, 11501213 }, // "Craft: Chaotic Skyfire Diamond (#34220)"
    { 34353, 11501214 }, // "Craft: Quad Deathblow X44 Goggles (#34353)"
    { 34354, 11501215 }, // "Craft: Mayhem Projection Goggles (#34354)"
    { 34355, 11501216 }, // "Craft: Lightning Etched Specs (#34355)"
    { 34356, 11501217 }, // "Craft: Surestrike Goggles v3.0 (#34356)"
    { 34357, 11501218 }, // "Craft: Hard Khorium Goggles (#34357)"
    { 34358, 11501219 }, // "Craft: Hard Khorium Choker (#34358)"
    { 34359, 11501220 }, // "Craft: Pendant of Sunfire (#34359)"
    { 34360, 11501221 }, // "Craft: Amulet of Flowing Life (#34360)"
    { 34361, 11501222 }, // "Craft: Hard Khorium Band (#34361)"
    { 34362, 11501223 }, // "Craft: Loop of Forged Power (#34362)"
    { 34363, 11501224 }, // "Craft: Ring of Flowing Life (#34363)"
    { 34364, 11501225 }, // "Craft: Sunfire Robe (#34364)"
    { 34365, 11501226 }, // "Craft: Robe of Eternal Light (#34365)"
    { 34366, 11501227 }, // "Craft: Sunfire Handwraps (#34366)"
    { 34367, 11501228 }, // "Craft: Hands of Eternal Light (#34367)"
    { 34369, 11501229 }, // "Craft: Carapace of Sun and Shadow (#34369)"
    { 34370, 11501230 }, // "Craft: Gloves of Immortal Dusk (#34370)"
    { 34371, 11501231 }, // "Craft: Leather Chestguard of the Sun (#34371)"
    { 34372, 11501232 }, // "Craft: Leather Gauntlets of the Sun (#34372)"
    { 34373, 11501233 }, // "Craft: Embrace of the Phoenix (#34373)"
    { 34374, 11501234 }, // "Craft: Fletcher's Gloves of the Phoenix (#34374)"
    { 34375, 11501235 }, // "Craft: Sun-Drenched Scale Chestguard (#34375)"
    { 34376, 11501236 }, // "Craft: Sun-Drenched Scale Gloves (#34376)"
    { 34377, 11501237 }, // "Craft: Hard Khorium Battleplate (#34377)"
    { 34378, 11501238 }, // "Craft: Hard Khorium Battlefists (#34378)"
    { 34379, 11501239 }, // "Craft: Sunblessed Breastplate (#34379)"
    { 34380, 11501240 }, // "Craft: Sunblessed Gauntlets (#34380)"
    { 34411, 11501241 }, // "Craft: Hot Apple Cider (#34411)"
    { 34490, 11501242 }, // "Craft: Bag of Many Hides (#34490)"
    { 34504, 11501243 }, // "Craft: Adamantite Shell Machine (#34504)"
    { 34722, 11501244 }, // "Craft: Heavy Frostweave Bandage (#34722)"
    { 34754, 11501245 }, // "Craft: Mega Mammoth Meal (#34754)"
    { 34755, 11501246 }, // "Craft: Tender Shoveltusk Steak (#34755)"
    { 34756, 11501247 }, // "Craft: Spiced Worm Burger (#34756)"
    { 34757, 11501248 }, // "Craft: Very Burnt Worg (#34757)"
    { 34758, 11501249 }, // "Craft: Mighty Rhino Dogs (#34758)"
    { 34766, 11501250 }, // "Craft: Poached Northern Sculpin (#34766)"
    { 34767, 11501251 }, // "Craft: Firecracker Salmon (#34767)"
    { 34768, 11501252 }, // "Craft: Spicy Blue Nettlefish (#34768)"
    { 34769, 11501253 }, // "Craft: Imperial Manta Steak (#34769)"
    { 34832, 11501254 }, // "Craft: Captain Rumsey's Lager (#34832)"
    { 34847, 11501255 }, // "Craft: Annihilator Holo-Gogs (#34847)"
    { 35128, 11501256 }, // "Craft: Hardened Khorium (#35128)"
    { 35181, 11501257 }, // "Craft: Powerheal 9000 Lens (#35181)"
    { 35182, 11501258 }, // "Craft: Hyper-Magnified Moon Specs (#35182)"
    { 35183, 11501259 }, // "Craft: Wonderheal XT68 Shades (#35183)"
    { 35184, 11501260 }, // "Craft: Primal-Attuned Goggles (#35184)"
    { 35185, 11501261 }, // "Craft: Justicebringer 3000 Specs (#35185)"
    { 35315, 11501262 }, // "Craft: Quick Dawnstone (#35315)"
    { 35316, 11501263 }, // "Craft: Reckless Noble Topaz (#35316)"
    { 35318, 11501264 }, // "Craft: Forceful Talasite (#35318)"
    { 35501, 11501265 }, // "Craft: Eternal Earthstorm Diamond (#35501)"
    { 35503, 11501266 }, // "Craft: Ember Skyfire Diamond (#35503)"
    { 35563, 11501267 }, // "Craft: Charred Bear Kabobs (#35563)"
    { 35565, 11501268 }, // "Craft: Juicy Bear Burger (#35565)"
    { 35581, 11501269 }, // "Craft: Rocket Boots Xtreme Lite (#35581)"
    { 35693, 11501270 }, // "Craft: Figurine - Empyrean Tortoise (#35693)"
    { 35694, 11501271 }, // "Craft: Figurine - Khorium Boar (#35694)"
    { 35700, 11501272 }, // "Craft: Figurine - Crimson Serpent (#35700)"
    { 35702, 11501273 }, // "Craft: Figurine - Shadowsong Panther (#35702)"
    { 35703, 11501274 }, // "Craft: Figurine - Seaspray Albatross (#35703)"
    { 35707, 11501275 }, // "Craft: Regal Nightseye (#35707)"
    { 35748, 11501276 }, // "Craft: Guardian's Alchemist Stone (#35748)"
    { 35749, 11501277 }, // "Craft: Sorcerer's Alchemist Stone (#35749)"
    { 35750, 11501278 }, // "Craft: Redeemer's Alchemist Stone (#35750)"
    { 35751, 11501279 }, // "Craft: Assassin's Alchemist Stone (#35751)"
    { 35758, 11501280 }, // "Craft: Steady Seaspray Emerald (#35758)"
    { 35759, 11501281 }, // "Craft: Forceful Seaspray Emerald (#35759)"
    { 35760, 11501282 }, // "Craft: Reckless Pyrestone (#35760)"
    { 35761, 11501283 }, // "Craft: Quick Lionseye (#35761)"
    { 36766, 11501284 }, // "Craft: Bright Dragon's Eye (#36766)"
    { 36767, 11501285 }, // "Craft: Solid Dragon's Eye (#36767)"
    { 36895, 11501286 }, // "Craft: Demonic Soulstone (#36895)"
    { 37503, 11501287 }, // "Craft: Purified Shadowsong Amethyst (#37503)"
    { 38225, 11501288 }, // "Craft: Mycah's Botanical Bag (#38225)"
    { 38277, 11501289 }, // "Craft: Haliscan Jacket (#38277)"
    { 38278, 11501290 }, // "Craft: Haliscan Pantaloons (#38278)"
    { 38347, 11501291 }, // "Craft: Mammoth Mining Bag (#38347)"
    { 38399, 11501292 }, // "Craft: Trapper's Traveling Pack (#38399)"
    { 38590, 11501293 }, // "Craft: Black Chitinguard Boots (#38590)"
    { 39520, 11501294 }, // "Craft: Kungaloosh (#39520)"
    { 39996, 11501295 }, // "Craft: Bold Scarlet Ruby (#39996)"
    { 39997, 11501296 }, // "Craft: Delicate Scarlet Ruby (#39997)"
    { 39998, 11501297 }, // "Craft: Runed Scarlet Ruby (#39998)"
    { 40000, 11501298 }, // "Craft: Subtle Scarlet Ruby (#40000)"
    { 40001, 11501299 }, // "Craft: Flashing Scarlet Ruby (#40001)"
    { 40002, 11501300 }, // "Craft: Fractured Scarlet Ruby (#40002)"
    { 40003, 11501301 }, // "Craft: Precise Scarlet Ruby (#40003)"
    { 40008, 11501302 }, // "Craft: Solid Sky Sapphire (#40008)"
    { 40010, 11501303 }, // "Craft: Lustrous Sky Sapphire (#40010)"
    { 40011, 11501304 }, // "Craft: Stormy Sky Sapphire (#40011)"
    { 40013, 11501305 }, // "Craft: Smooth Autumn's Glow (#40013)"
    { 40014, 11501306 }, // "Craft: Rigid Autumn's Glow (#40014)"
    { 40015, 11501307 }, // "Craft: Thick Autumn's Glow (#40015)"
    { 40016, 11501308 }, // "Craft: Mystic Autumn's Glow (#40016)"
    { 40017, 11501309 }, // "Craft: Quick Autumn's Glow (#40017)"
    { 40022, 11501310 }, // "Craft: Sovereign Twilight Opal (#40022)"
    { 40023, 11501311 }, // "Craft: Shifting Twilight Opal (#40023)"
    { 40024, 11501312 }, // "Craft: Tenuous Twilight Opal (#40024)"
    { 40025, 11501313 }, // "Craft: Glowing Twilight Opal (#40025)"
    { 40026, 11501314 }, // "Craft: Purified Twilight Opal (#40026)"
    { 40027, 11501315 }, // "Craft: Royal Twilight Opal (#40027)"
    { 40028, 11501316 }, // "Craft: Mysterious Twilight Opal (#40028)"
    { 40030, 11501317 }, // "Craft: Infused Twilight Opal (#40030)"
    { 40031, 11501318 }, // "Craft: Regal Twilight Opal (#40031)"
    { 40032, 11501319 }, // "Craft: Defender's Twilight Opal (#40032)"
    { 40033, 11501320 }, // "Craft: Puissant Twilight Opal (#40033)"
    { 40034, 11501321 }, // "Craft: Guardian's Twilight Opal (#40034)"
    { 40037, 11501322 }, // "Craft: Inscribed Monarch Topaz (#40037)"
    { 40038, 11501323 }, // "Craft: Etched Monarch Topaz (#40038)"
    { 40039, 11501324 }, // "Craft: Champion's Monarch Topaz (#40039)"
    { 40040, 11501325 }, // "Craft: Resplendent Monarch Topaz (#40040)"
    { 40041, 11501326 }, // "Craft: Fierce Monarch Topaz (#40041)"
    { 40043, 11501327 }, // "Craft: Deadly Monarch Topaz (#40043)"
    { 40044, 11501328 }, // "Craft: Glinting Monarch Topaz (#40044)"
    { 40045, 11501329 }, // "Craft: Lucent Monarch Topaz (#40045)"
    { 40046, 11501330 }, // "Craft: Deft Monarch Topaz (#40046)"
    { 40047, 11501331 }, // "Craft: Luminous Monarch Topaz (#40047)"
    { 40048, 11501332 }, // "Craft: Potent Monarch Topaz (#40048)"
    { 40049, 11501333 }, // "Craft: Veiled Monarch Topaz (#40049)"
    { 40050, 11501334 }, // "Craft: Durable Monarch Topaz (#40050)"
    { 40051, 11501335 }, // "Craft: Reckless Monarch Topaz (#40051)"
    { 40052, 11501336 }, // "Craft: Wicked Monarch Topaz (#40052)"
    { 40054, 11501337 }, // "Craft: Empowered Monarch Topaz (#40054)"
    { 40055, 11501338 }, // "Craft: Stark Monarch Topaz (#40055)"
    { 40056, 11501339 }, // "Craft: Stalwart Monarch Topaz (#40056)"
    { 40057, 11501340 }, // "Craft: Glimmering Monarch Topaz (#40057)"
    { 40058, 11501341 }, // "Craft: Accurate Monarch Topaz (#40058)"
    { 40059, 11501342 }, // "Craft: Resolute Monarch Topaz (#40059)"
    { 40085, 11501343 }, // "Craft: Timeless Forest Emerald (#40085)"
    { 40086, 11501344 }, // "Craft: Jagged Forest Emerald (#40086)"
    { 40088, 11501345 }, // "Craft: Vivid Forest Emerald (#40088)"
    { 40089, 11501346 }, // "Craft: Enduring Forest Emerald (#40089)"
    { 40090, 11501347 }, // "Craft: Steady Forest Emerald (#40090)"
    { 40091, 11501348 }, // "Craft: Forceful Forest Emerald (#40091)"
    { 40092, 11501349 }, // "Craft: Seer's Forest Emerald (#40092)"
    { 40095, 11501350 }, // "Craft: Misty Forest Emerald (#40095)"
    { 40096, 11501351 }, // "Craft: Sundered Forest Emerald (#40096)"
    { 40098, 11501352 }, // "Craft: Radiant Forest Emerald (#40098)"
    { 40099, 11501353 }, // "Craft: Shining Forest Emerald (#40099)"
    { 40100, 11501354 }, // "Craft: Lambent Forest Emerald (#40100)"
    { 40101, 11501355 }, // "Craft: Tense Forest Emerald (#40101)"
    { 40102, 11501356 }, // "Craft: Turbid Forest Emerald (#40102)"
    { 40103, 11501357 }, // "Craft: Opaque Forest Emerald (#40103)"
    { 40104, 11501358 }, // "Craft: Intricate Forest Emerald (#40104)"
    { 40105, 11501359 }, // "Craft: Energized Forest Emerald (#40105)"
    { 40106, 11501360 }, // "Craft: Shattered Forest Emerald (#40106)"
    { 40111, 11501361 }, // "Craft: Bold Cardinal Ruby (#40111)"
    { 40112, 11501362 }, // "Craft: Delicate Cardinal Ruby (#40112)"
    { 40113, 11501363 }, // "Craft: Runed Cardinal Ruby (#40113)"
    { 40114, 11501364 }, // "Craft: Bright Cardinal Ruby (#40114)"
    { 40115, 11501365 }, // "Craft: Subtle Cardinal Ruby (#40115)"
    { 40116, 11501366 }, // "Craft: Flashing Cardinal Ruby (#40116)"
    { 40117, 11501367 }, // "Craft: Fractured Cardinal Ruby (#40117)"
    { 40118, 11501368 }, // "Craft: Precise Cardinal Ruby (#40118)"
    { 40119, 11501369 }, // "Craft: Solid Majestic Zircon (#40119)"
    { 40120, 11501370 }, // "Craft: Sparkling Majestic Zircon (#40120)"
    { 40121, 11501371 }, // "Craft: Lustrous Majestic Zircon (#40121)"
    { 40122, 11501372 }, // "Craft: Stormy Majestic Zircon (#40122)"
    { 40123, 11501373 }, // "Craft: Brilliant King's Amber (#40123)"
    { 40124, 11501374 }, // "Craft: Smooth King's Amber (#40124)"
    { 40125, 11501375 }, // "Craft: Rigid King's Amber (#40125)"
    { 40126, 11501376 }, // "Craft: Thick King's Amber (#40126)"
    { 40127, 11501377 }, // "Craft: Mystic King's Amber (#40127)"
    { 40128, 11501378 }, // "Craft: Quick King's Amber (#40128)"
    { 40129, 11501379 }, // "Craft: Sovereign Dreadstone (#40129)"
    { 40130, 11501380 }, // "Craft: Shifting Dreadstone (#40130)"
    { 40131, 11501381 }, // "Craft: Tenuous Dreadstone (#40131)"
    { 40132, 11501382 }, // "Craft: Glowing Dreadstone (#40132)"
    { 40133, 11501383 }, // "Craft: Purified Dreadstone (#40133)"
    { 40134, 11501384 }, // "Craft: Royal Dreadstone (#40134)"
    { 40135, 11501385 }, // "Craft: Mysterious Dreadstone (#40135)"
    { 40136, 11501386 }, // "Craft: Balanced Dreadstone (#40136)"
    { 40137, 11501387 }, // "Craft: Infused Dreadstone (#40137)"
    { 40138, 11501388 }, // "Craft: Regal Dreadstone (#40138)"
    { 40139, 11501389 }, // "Craft: Defender's Dreadstone (#40139)"
    { 40140, 11501390 }, // "Craft: Puissant Dreadstone (#40140)"
    { 40141, 11501391 }, // "Craft: Guardian's Dreadstone (#40141)"
    { 40142, 11501392 }, // "Craft: Inscribed Ametrine (#40142)"
    { 40143, 11501393 }, // "Craft: Etched Ametrine (#40143)"
    { 40144, 11501394 }, // "Craft: Champion's Ametrine (#40144)"
    { 40145, 11501395 }, // "Craft: Resplendent Ametrine (#40145)"
    { 40146, 11501396 }, // "Craft: Fierce Ametrine (#40146)"
    { 40147, 11501397 }, // "Craft: Deadly Ametrine (#40147)"
    { 40148, 11501398 }, // "Craft: Glinting Ametrine (#40148)"
    { 40149, 11501399 }, // "Craft: Lucent Ametrine (#40149)"
    { 40150, 11501400 }, // "Craft: Deft Ametrine (#40150)"
    { 40151, 11501401 }, // "Craft: Luminous Ametrine (#40151)"
    { 40152, 11501402 }, // "Craft: Potent Ametrine (#40152)"
    { 40153, 11501403 }, // "Craft: Veiled Ametrine (#40153)"
    { 40154, 11501404 }, // "Craft: Durable Ametrine (#40154)"
    { 40155, 11501405 }, // "Craft: Reckless Ametrine (#40155)"
    { 40156, 11501406 }, // "Craft: Wicked Ametrine (#40156)"
    { 40157, 11501407 }, // "Craft: Pristine Ametrine (#40157)"
    { 40158, 11501408 }, // "Craft: Empowered Ametrine (#40158)"
    { 40159, 11501409 }, // "Craft: Stark Ametrine (#40159)"
    { 40160, 11501410 }, // "Craft: Stalwart Ametrine (#40160)"
    { 40161, 11501411 }, // "Craft: Glimmering Ametrine (#40161)"
    { 40162, 11501412 }, // "Craft: Accurate Ametrine (#40162)"
    { 40163, 11501413 }, // "Craft: Resolute Ametrine (#40163)"
    { 40164, 11501414 }, // "Craft: Timeless Eye of Zul (#40164)"
    { 40165, 11501415 }, // "Craft: Jagged Eye of Zul (#40165)"
    { 40166, 11501416 }, // "Craft: Vivid Eye of Zul (#40166)"
    { 40167, 11501417 }, // "Craft: Enduring Eye of Zul (#40167)"
    { 40168, 11501418 }, // "Craft: Steady Eye of Zul (#40168)"
    { 40169, 11501419 }, // "Craft: Forceful Eye of Zul (#40169)"
    { 40170, 11501420 }, // "Craft: Seer's Eye of Zul (#40170)"
    { 40171, 11501421 }, // "Craft: Misty Eye of Zul (#40171)"
    { 40172, 11501422 }, // "Craft: Shining Eye of Zul (#40172)"
    { 40173, 11501423 }, // "Craft: Turbid Eye of Zul (#40173)"
    { 40174, 11501424 }, // "Craft: Intricate Eye of Zul (#40174)"
    { 40175, 11501425 }, // "Craft: Dazzling Eye of Zul (#40175)"
    { 40176, 11501426 }, // "Craft: Sundered Eye of Zul (#40176)"
    { 40177, 11501427 }, // "Craft: Lambent Eye of Zul (#40177)"
    { 40178, 11501428 }, // "Craft: Opaque Eye of Zul (#40178)"
    { 40179, 11501429 }, // "Craft: Energized Eye of Zul (#40179)"
    { 40180, 11501430 }, // "Craft: Radiant Eye of Zul (#40180)"
    { 40181, 11501431 }, // "Craft: Tense Eye of Zul (#40181)"
    { 40182, 11501432 }, // "Craft: Shattered Eye of Zul (#40182)"
    { 40213, 11501433 }, // "Craft: Mighty Arcane Protection Potion (#40213)"
    { 40214, 11501434 }, // "Craft: Mighty Fire Protection Potion (#40214)"
    { 40215, 11501435 }, // "Craft: Mighty Frost Protection Potion (#40215)"
    { 40216, 11501436 }, // "Craft: Mighty Nature Protection Potion (#40216)"
    { 40217, 11501437 }, // "Craft: Mighty Shadow Protection Potion (#40217)"
    { 40773, 11501438 }, // "Craft: Master Firestone (#40773)"
    { 40956, 11501439 }, // "Craft: Reinforced Cobalt Shoulders (#40956)"
    { 40957, 11501440 }, // "Craft: Reinforced Cobalt Helm (#40957)"
    { 40958, 11501441 }, // "Craft: Reinforced Cobalt Legplates (#40958)"
    { 40959, 11501442 }, // "Craft: Reinforced Cobalt Chestpiece (#40959)"
    { 41169, 11501443 }, // "Craft: Firestone (#41169)"
    { 41170, 11501444 }, // "Craft: Lesser Firestone (#41170)"
    { 41171, 11501445 }, // "Craft: Greater Firestone (#41171)"
    { 41172, 11501446 }, // "Craft: Major Firestone (#41172)"
    { 41173, 11501447 }, // "Craft: Fel Firestone (#41173)"
    { 41174, 11501448 }, // "Craft: Grand Firestone (#41174)"
    { 41191, 11501449 }, // "Craft: Spellstone (#41191)"
    { 41192, 11501450 }, // "Craft: Greater Spellstone (#41192)"
    { 41193, 11501451 }, // "Craft: Major Spellstone (#41193)"
    { 41194, 11501452 }, // "Craft: Master Spellstone (#41194)"
    { 41195, 11501453 }, // "Craft: Demonic Spellstone (#41195)"
    { 41196, 11501454 }, // "Craft: Grand Spellstone (#41196)"
    { 41248, 11501455 }, // "Craft: Red Lumberjack Shirt (#41248)"
    { 41249, 11501456 }, // "Craft: Blue Lumberjack Shirt (#41249)"
    { 41250, 11501457 }, // "Craft: Green Lumberjack Shirt (#41250)"
    { 41251, 11501458 }, // "Craft: Yellow Lumberjack Shirt (#41251)"
    { 41252, 11501459 }, // "Craft: Red Workman's Shirt (#41252)"
    { 41253, 11501460 }, // "Craft: Blue Workman's Shirt (#41253)"
    { 41254, 11501461 }, // "Craft: Rustic Workman's Shirt (#41254)"
    { 41255, 11501462 }, // "Craft: Green Workman's Shirt (#41255)"
    { 41285, 11501463 }, // "Craft: Chaotic Skyflare Diamond (#41285)"
    { 41307, 11501464 }, // "Craft: Destructive Skyflare Diamond (#41307)"
    { 41333, 11501465 }, // "Craft: Ember Skyflare Diamond (#41333)"
    { 41335, 11501466 }, // "Craft: Enigmatic Skyflare Diamond (#41335)"
    { 41339, 11501467 }, // "Craft: Swift Skyflare Diamond (#41339)"
    { 41375, 11501468 }, // "Craft: Tireless Skyflare Diamond (#41375)"
    { 41376, 11501469 }, // "Craft: Revitalizing Skyflare Diamond (#41376)"
    { 41377, 11501470 }, // "Craft: Effulgent Skyflare Diamond (#41377)"
    { 41378, 11501471 }, // "Craft: Forlorn Skyflare Diamond (#41378)"
    { 41379, 11501472 }, // "Craft: Impassive Skyflare Diamond (#41379)"
    { 41380, 11501473 }, // "Craft: Austere Earthsiege Diamond (#41380)"
    { 41381, 11501474 }, // "Craft: Persistent Earthsiege Diamond (#41381)"
    { 41382, 11501475 }, // "Craft: Trenchant Earthsiege Diamond (#41382)"
    { 41385, 11501476 }, // "Craft: Invigorating Earthsiege Diamond (#41385)"
    { 41389, 11501477 }, // "Craft: Beaming Earthsiege Diamond (#41389)"
    { 41395, 11501478 }, // "Craft: Bracing Earthsiege Diamond (#41395)"
    { 41396, 11501479 }, // "Craft: Eternal Earthsiege Diamond (#41396)"
    { 41397, 11501480 }, // "Craft: Powerful Earthsiege Diamond (#41397)"
    { 41398, 11501481 }, // "Craft: Relentless Earthsiege Diamond (#41398)"
    { 41400, 11501482 }, // "Craft: Thundering Skyflare Diamond (#41400)"
    { 41401, 11501483 }, // "Craft: Insightful Earthsiege Diamond (#41401)"
    { 41508, 11501484 }, // "Craft: Mechano-hog (#41508)"
    { 41593, 11501485 }, // "Craft: Ebonweave (#41593)"
    { 41594, 11501486 }, // "Craft: Moonshroud (#41594)"
    { 41595, 11501487 }, // "Craft: Spellweave (#41595)"
    { 41597, 11501488 }, // "Craft: Abyssal Bag (#41597)"
    { 41598, 11501489 }, // "Craft: Mysterious Bag (#41598)"
    { 41599, 11501490 }, // "Craft: Frostweave Bag (#41599)"
    { 41600, 11501491 }, // "Craft: Glacial Bag (#41600)"
    { 41602, 11501492 }, // "Craft: Brilliant Spellthread (#41602)"
    { 41604, 11501493 }, // "Craft: Sapphire Spellthread (#41604)"
    { 41609, 11501494 }, // "Craft: Wispcloak (#41609)"
    { 41610, 11501495 }, // "Craft: Deathchill Cloak (#41610)"
    { 41984, 11501496 }, // "Craft: Hat of Wintry Doom (#41984)"
    { 41985, 11501497 }, // "Craft: Silky Iceshard Boots (#41985)"
    { 41986, 11501498 }, // "Craft: Deep Frozen Cord (#41986)"
    { 42093, 11501499 }, // "Craft: Frostmoon Pants (#42093)"
    { 42095, 11501500 }, // "Craft: Light Blessed Mittens (#42095)"
    { 42096, 11501501 }, // "Craft: Aurora Slippers (#42096)"
    { 42100, 11501502 }, // "Craft: Moonshroud Robe (#42100)"
    { 42101, 11501503 }, // "Craft: Ebonweave Robe (#42101)"
    { 42102, 11501504 }, // "Craft: Spellweave Robe (#42102)"
    { 42103, 11501505 }, // "Craft: Moonshroud Gloves (#42103)"
    { 42111, 11501506 }, // "Craft: Ebonweave Gloves (#42111)"
    { 42113, 11501507 }, // "Craft: Spellweave Gloves (#42113)"
    { 42142, 11501508 }, // "Craft: Bold Dragon's Eye (#42142)"
    { 42143, 11501509 }, // "Craft: Delicate Dragon's Eye (#42143)"
    { 42144, 11501510 }, // "Craft: Runed Dragon's Eye (#42144)"
    { 42145, 11501511 }, // "Craft: Sparkling Dragon's Eye (#42145)"
    { 42146, 11501512 }, // "Craft: Lustrous Dragon's Eye (#42146)"
    { 42148, 11501513 }, // "Craft: Brilliant Dragon's Eye (#42148)"
    { 42149, 11501514 }, // "Craft: Smooth Dragon's Eye (#42149)"
    { 42150, 11501515 }, // "Craft: Quick Dragon's Eye (#42150)"
    { 42151, 11501516 }, // "Craft: Subtle Dragon's Eye (#42151)"
    { 42152, 11501517 }, // "Craft: Flashing Dragon's Eye (#42152)"
    { 42153, 11501518 }, // "Craft: Fractured Dragon's Eye (#42153)"
    { 42154, 11501519 }, // "Craft: Precise Dragon's Eye (#42154)"
    { 42155, 11501520 }, // "Craft: Stormy Dragon's Eye (#42155)"
    { 42156, 11501521 }, // "Craft: Rigid Dragon's Eye (#42156)"
    { 42157, 11501522 }, // "Craft: Thick Dragon's Eye (#42157)"
    { 42158, 11501523 }, // "Craft: Mystic Dragon's Eye (#42158)"
    { 42642, 11501524 }, // "Craft: Titanium Impact Band (#42642)"
    { 42643, 11501525 }, // "Craft: Titanium Earthguard Ring (#42643)"
    { 42644, 11501526 }, // "Craft: Titanium Spellshock Ring (#42644)"
    { 42645, 11501527 }, // "Craft: Titanium Impact Choker (#42645)"
    { 42646, 11501528 }, // "Craft: Titanium Earthguard Chain (#42646)"
    { 42647, 11501529 }, // "Craft: Titanium Spellshock Necklace (#42647)"
    { 42993, 11501530 }, // "Craft: Spicy Fried Herring (#42993)"
    { 42994, 11501531 }, // "Craft: Rhinolicious Wormsteak (#42994)"
    { 42995, 11501532 }, // "Craft: Hearty Rhino (#42995)"
    { 42996, 11501533 }, // "Craft: Snapper Extreme (#42996)"
    { 42997, 11501534 }, // "Craft: Blackened Worg Steak (#42997)"
    { 42998, 11501535 }, // "Craft: Cuttlesteak (#42998)"
    { 42999, 11501536 }, // "Craft: Blackened Dragonfin (#42999)"
    { 43000, 11501537 }, // "Craft: Dragonfin Filet (#43000)"
    { 43001, 11501538 }, // "Craft: Tracker Snacks (#43001)"
    { 43004, 11501539 }, // "Craft: Critter Bites (#43004)"
    { 43005, 11501540 }, // "Craft: Spiced Mammoth Treats (#43005)"
    { 43015, 11501541 }, // "Craft: Fish Feast (#43015)"
    { 43250, 11501542 }, // "Craft: Ring of Earthen Might (#43250)"
    { 43251, 11501543 }, // "Craft: Ring of Scarlet Shadows (#43251)"
    { 43252, 11501544 }, // "Craft: Windfire Band (#43252)"
    { 43253, 11501545 }, // "Craft: Ring of Northern Tears (#43253)"
    { 43260, 11501546 }, // "Craft: Eviscerator's Facemask (#43260)"
    { 43261, 11501547 }, // "Craft: Overcast Headguard (#43261)"
    { 43262, 11501548 }, // "Craft: Overcast Spaulders (#43262)"
    { 43263, 11501549 }, // "Craft: Overcast Chestguard (#43263)"
    { 43264, 11501550 }, // "Craft: Overcast Bracers (#43264)"
    { 43265, 11501551 }, // "Craft: Overcast Handwraps (#43265)"
    { 43266, 11501552 }, // "Craft: Overcast Belt (#43266)"
    { 43271, 11501553 }, // "Craft: Overcast Leggings (#43271)"
    { 43273, 11501554 }, // "Craft: Overcast Boots (#43273)"
    { 43433, 11501555 }, // "Craft: Eviscerator's Shoulderpads (#43433)"
    { 43434, 11501556 }, // "Craft: Eviscerator's Chestguard (#43434)"
    { 43435, 11501557 }, // "Craft: Eviscerator's Bindings (#43435)"
    { 43436, 11501558 }, // "Craft: Eviscerator's Gauntlets (#43436)"
    { 43437, 11501559 }, // "Craft: Eviscerator's Waistguard (#43437)"
    { 43438, 11501560 }, // "Craft: Eviscerator's Legguards (#43438)"
    { 43439, 11501561 }, // "Craft: Eviscerator's Treads (#43439)"
    { 43442, 11501562 }, // "Craft: Swiftarrow Belt (#43442)"
    { 43443, 11501563 }, // "Craft: Swiftarrow Boots (#43443)"
    { 43444, 11501564 }, // "Craft: Swiftarrow Bracers (#43444)"
    { 43445, 11501565 }, // "Craft: Swiftarrow Hauberk (#43445)"
    { 43446, 11501566 }, // "Craft: Swiftarrow Gauntlets (#43446)"
    { 43447, 11501567 }, // "Craft: Swiftarrow Helm (#43447)"
    { 43448, 11501568 }, // "Craft: Swiftarrow Leggings (#43448)"
    { 43449, 11501569 }, // "Craft: Swiftarrow Shoulderguards (#43449)"
    { 43450, 11501570 }, // "Craft: Stormhide Belt (#43450)"
    { 43451, 11501571 }, // "Craft: Stormhide Stompers (#43451)"
    { 43452, 11501572 }, // "Craft: Stormhide Wristguards (#43452)"
    { 43453, 11501573 }, // "Craft: Stormhide Hauberk (#43453)"
    { 43454, 11501574 }, // "Craft: Stormhide Grips (#43454)"
    { 43455, 11501575 }, // "Craft: Stormhide Crown (#43455)"
    { 43456, 11501576 }, // "Craft: Stormhide Legguards (#43456)"
    { 43457, 11501577 }, // "Craft: Stormhide Shoulders (#43457)"
    { 43458, 11501578 }, // "Craft: Giantmaim Legguards (#43458)"
    { 43459, 11501579 }, // "Craft: Giantmaim Bracers (#43459)"
    { 43461, 11501580 }, // "Craft: Revenant's Breastplate (#43461)"
    { 43469, 11501581 }, // "Craft: Revenant's Treads (#43469)"
    { 43478, 11501582 }, // "Craft: Gigantic Feast (#43478)"
    { 43480, 11501583 }, // "Craft: Small Feast (#43480)"
    { 43481, 11501584 }, // "Craft: Trollwoven Spaulders (#43481)"
    { 43482, 11501585 }, // "Craft: Savage Titanium Ring (#43482)"
    { 43484, 11501586 }, // "Craft: Trollwoven Girdle (#43484)"
    { 43488, 11501587 }, // "Craft: Last Weeks Mammoth (#43488)"
    { 43490, 11501588 }, // "Craft: Tasty Cupcake (#43490)"
    { 43491, 11501589 }, // "Craft: Bad Clams (#43491)"
    { 43492, 11501590 }, // "Craft: Haunted Herring (#43492)"
    { 43495, 11501591 }, // "Craft: Earthgiving Legguards (#43495)"
    { 43498, 11501592 }, // "Craft: Savage Titanium Band (#43498)"
    { 43502, 11501593 }, // "Craft: Earthgiving Boots (#43502)"
    { 43518, 11501594 }, // "Craft: Conjured Mana Pie (#43518)"
    { 43523, 11501595 }, // "Craft: Conjured Mana Strudel (#43523)"
    { 43582, 11501596 }, // "Craft: Titanium Frostguard Ring (#43582)"
    { 43590, 11501597 }, // "Craft: Polar Vest (#43590)"
    { 43591, 11501598 }, // "Craft: Polar Cord (#43591)"
    { 43592, 11501599 }, // "Craft: Polar Boots (#43592)"
    { 43593, 11501600 }, // "Craft: Icy Scale Chestguard (#43593)"
    { 43594, 11501601 }, // "Craft: Icy Scale Belt (#43594)"
    { 43595, 11501602 }, // "Craft: Icy Scale Boots (#43595)"
    { 44413, 11501603 }, // "Craft: Mekgineer's Chopper (#44413)"
    { 44447, 11501604 }, // "Craft: Dragonscale Ammo Pouch (#44447)"
    { 44448, 11501605 }, // "Craft: Nerubian Reinforced Quiver (#44448)"
    { 44836, 11501606 }, // "Craft: Pumpkin Pie (#44836)"
    { 44837, 11501607 }, // "Craft: Spice Bread Stuffing (#44837)"
    { 44838, 11501608 }, // "Craft: Slow-Roasted Turkey (#44838)"
    { 44839, 11501609 }, // "Craft: Candied Sweet Potato (#44839)"
    { 44840, 11501610 }, // "Craft: Cranberry Chutney (#44840)"
    { 44930, 11501611 }, // "Craft: Windripper Boots (#44930)"
    { 44931, 11501612 }, // "Craft: Windripper Leggings (#44931)"
    { 44936, 11501613 }, // "Craft: Titanium Plating (#44936)"
    { 44953, 11501614 }, // "Craft: Worg Tartare (#44953)"
    { 45550, 11501615 }, // "Craft: Belt of the Titans (#45550)"
    { 45551, 11501616 }, // "Craft: Indestructible Plate Girdle (#45551)"
    { 45552, 11501617 }, // "Craft: Plate Girdle of Righteousness (#45552)"
    { 45553, 11501618 }, // "Craft: Belt of Dragons (#45553)"
    { 45554, 11501619 }, // "Craft: Blue Belt of Chaos (#45554)"
    { 45555, 11501620 }, // "Craft: Death-warmed Belt (#45555)"
    { 45556, 11501621 }, // "Craft: Belt of Arctic Life (#45556)"
    { 45557, 11501622 }, // "Craft: Sash of Ancient Power (#45557)"
    { 45558, 11501623 }, // "Craft: Cord of the White Dawn (#45558)"
    { 45559, 11501624 }, // "Craft: Battlelord's Plate Boots (#45559)"
    { 45560, 11501625 }, // "Craft: Spiked Deathdealers (#45560)"
    { 45561, 11501626 }, // "Craft: Treads of Destiny (#45561)"
    { 45562, 11501627 }, // "Craft: Boots of Living Scale (#45562)"
    { 45563, 11501628 }, // "Craft: Lightning Grounded Boots (#45563)"
    { 45564, 11501629 }, // "Craft: Footpads of Silence (#45564)"
    { 45565, 11501630 }, // "Craft: Boots of Wintry Endurance (#45565)"
    { 45566, 11501631 }, // "Craft: Spellslinger's Slippers (#45566)"
    { 45567, 11501632 }, // "Craft: Savior's Slippers (#45567)"
    { 45773, 11501633 }, // "Craft: Emerald Bag (#45773)"
    { 46691, 11501634 }, // "Craft: Bread of the Dead (#46691)"
    { 47499, 11501635 }, // "Craft: Flask of the North (#47499)"
    { 47570, 11501636 }, // "Craft: Saronite Swordbreakers (#47570)"
    { 47571, 11501637 }, // "Craft: Saronite Swordbreakers (#47571)"
    { 47572, 11501638 }, // "Craft: Titanium Spikeguards (#47572)"
    { 47573, 11501639 }, // "Craft: Titanium Spikeguards (#47573)"
    { 47574, 11501640 }, // "Craft: Sunforged Bracers (#47574)"
    { 47575, 11501641 }, // "Craft: Sunforged Bracers (#47575)"
    { 47576, 11501642 }, // "Craft: Crusader's Dragonscale Bracers (#47576)"
    { 47577, 11501643 }, // "Craft: Crusader's Dragonscale Bracers (#47577)"
    { 47579, 11501644 }, // "Craft: Black Chitin Bracers (#47579)"
    { 47580, 11501645 }, // "Craft: Black Chitin Bracers (#47580)"
    { 47581, 11501646 }, // "Craft: Bracers of Swift Death (#47581)"
    { 47582, 11501647 }, // "Craft: Bracers of Swift Death (#47582)"
    { 47583, 11501648 }, // "Craft: Moonshadow Armguards (#47583)"
    { 47584, 11501649 }, // "Craft: Moonshadow Armguards (#47584)"
    { 47585, 11501650 }, // "Craft: Bejeweled Wizard's Bracers (#47585)"
    { 47586, 11501651 }, // "Craft: Bejeweled Wizard's Bracers (#47586)"
    { 47587, 11501652 }, // "Craft: Royal Moonshroud Bracers (#47587)"
    { 47588, 11501653 }, // "Craft: Royal Moonshroud Bracers (#47588)"
    { 47589, 11501654 }, // "Craft: Titanium Razorplate (#47589)"
    { 47590, 11501655 }, // "Craft: Titanium Razorplate (#47590)"
    { 47591, 11501656 }, // "Craft: Breastplate of the White Knight (#47591)"
    { 47592, 11501657 }, // "Craft: Breastplate of the White Knight (#47592)"
    { 47593, 11501658 }, // "Craft: Sunforged Breastplate (#47593)"
    { 47594, 11501659 }, // "Craft: Sunforged Breastplate (#47594)"
    { 47595, 11501660 }, // "Craft: Crusader's Dragonscale Breastplate (#47595)"
    { 47596, 11501661 }, // "Craft: Crusader's Dragonscale Breastplate (#47596)"
    { 47597, 11501662 }, // "Craft: Ensorcelled Nerubian Breastplate (#47597)"
    { 47598, 11501663 }, // "Craft: Ensorcelled Nerubian Breastplate (#47598)"
    { 47599, 11501664 }, // "Craft: Knightbane Carapace (#47599)"
    { 47600, 11501665 }, // "Craft: Knightbane Carapace (#47600)"
    { 47601, 11501666 }, // "Craft: Lunar Eclipse Robes (#47601)"
    { 47602, 11501667 }, // "Craft: Lunar Eclipse Robes (#47602)"
    { 47603, 11501668 }, // "Craft: Merlin's Robe (#47603)"
    { 47604, 11501669 }, // "Craft: Merlin's Robe (#47604)"
    { 47605, 11501670 }, // "Craft: Royal Moonshroud Robe (#47605)"
    { 47606, 11501671 }, // "Craft: Royal Moonshroud Robe (#47606)"
    { 49040, 11501672 }, // "Craft: Jeeves (#49040)"
    { 49110, 11501673 }, // "Craft: Nightmare Tear (#49110)"
    { 49890, 11501674 }, // "Craft: Deathfrost Boots (#49890)"
    { 49891, 11501675 }, // "Craft: Leggings of Woven Death (#49891)"
    { 49892, 11501676 }, // "Craft: Lightweave Leggings (#49892)"
    { 49893, 11501677 }, // "Craft: Sandals of Consecration (#49893)"
    { 49894, 11501678 }, // "Craft: Blessed Cenarion Boots (#49894)"
    { 49895, 11501679 }, // "Craft: Footpads of Impending Death (#49895)"
    { 49896, 11501680 }, // "Craft: Earthsoul Boots (#49896)"
    { 49897, 11501681 }, // "Craft: Rock-Steady Treads (#49897)"
    { 49898, 11501682 }, // "Craft: Legwraps of Unleashed Nature (#49898)"
    { 49899, 11501683 }, // "Craft: Bladeborn Leggings (#49899)"
    { 49900, 11501684 }, // "Craft: Lightning-Infused Leggings (#49900)"
    { 49901, 11501685 }, // "Craft: Draconic Bonesplinter Legguards (#49901)"
    { 49902, 11501686 }, // "Craft: Puresteel Legplates (#49902)"
    { 49903, 11501687 }, // "Craft: Legplates of Painful Death (#49903)"
    { 49904, 11501688 }, // "Craft: Pillars of Might (#49904)"
    { 49905, 11501689 }, // "Craft: Protectors of Life (#49905)"
    { 49906, 11501690 }, // "Craft: Hellfrozen Bonegrinders (#49906)"
    { 49907, 11501691 }, // "Craft: Boots of Kingly Upheaval (#49907)"
    { 50045, 11501692 }, // "Craft: Glyph of Eternal Water (#50045)"
    { 50077, 11501693 }, // "Craft: Glyph of Quick Decay (#50077)"
    { 50125, 11501694 }, // "Craft: Glyph of Rapid Rejuvenation (#50125)"
    { 52020, 11501695 }, // "Craft: Shatter Rounds (#52020)"
    { 52021, 11501696 }, // "Craft: Iceblade Arrow (#52021)"
    { 54797, 11501697 }, // "Craft: Frosty Flying Carpet (#54797)"
};
inline std::unordered_map<uint32_t, int64_t> BuildITEM_ENTRY_TO_LOCATION_ID()
{
    std::unordered_map<uint32_t, int64_t> result;
    for (auto const& row : ITEM_ENTRY_TO_LOCATION_ID_RAW)
        result.emplace(row.first, row.second);
    return result;
}
inline const std::unordered_map<uint32_t, int64_t> ITEM_ENTRY_TO_LOCATION_ID = BuildITEM_ENTRY_TO_LOCATION_ID();
inline constexpr std::pair<int64_t, uint32_t> AP_ITEM_ID_TO_WOW_ITEM_ENTRY_RAW[] = {
    { 11750000, 724 }, // "Craftsanity Item: Goretusk Liver Pie (#724)"
    { 11750001, 733 }, // "Craftsanity Item: Westfall Stew (#733)"
    { 11750002, 787 }, // "Craftsanity Item: Slitherskin Mackerel (#787)"
    { 11750003, 1017 }, // "Craftsanity Item: Seasoned Wolf Kabob (#1017)"
    { 11750004, 1082 }, // "Craftsanity Item: Redridge Goulash (#1082)"
    { 11750005, 1113 }, // "Craftsanity Item: Conjured Bread (#1113)"
    { 11750006, 1114 }, // "Craftsanity Item: Conjured Rye (#1114)"
    { 11750007, 1487 }, // "Craftsanity Item: Conjured Pumpernickel (#1487)"
    { 11750008, 2136 }, // "Craftsanity Item: Conjured Purified Water (#2136)"
    { 11750009, 2288 }, // "Craftsanity Item: Conjured Fresh Water (#2288)"
    { 11750010, 2307 }, // "Craftsanity Item: Fine Leather Boots (#2307)"
    { 11750011, 2311 }, // "Craftsanity Item: White Leather Jerkin (#2311)"
    { 11750012, 2312 }, // "Craftsanity Item: Fine Leather Gloves (#2312)"
    { 11750013, 2317 }, // "Craftsanity Item: Dark Leather Tunic (#2317)"
    { 11750014, 2457 }, // "Craftsanity Item: Elixir of Minor Agility (#2457)"
    { 11750015, 2459 }, // "Craftsanity Item: Swiftness Potion (#2459)"
    { 11750016, 2572 }, // "Craftsanity Item: Red Linen Robe (#2572)"
    { 11750017, 2585 }, // "Craftsanity Item: Gray Woolen Robe (#2585)"
    { 11750018, 2682 }, // "Craftsanity Item: Cooked Crab Claw (#2682)"
    { 11750019, 2685 }, // "Craftsanity Item: Succulent Pork Ribs (#2685)"
    { 11750020, 2864 }, // "Craftsanity Item: Runed Copper Breastplate (#2864)"
    { 11750021, 2869 }, // "Craftsanity Item: Silvered Bronze Breastplate (#2869)"
    { 11750022, 2888 }, // "Craftsanity Item: Beer Basted Boar Ribs (#2888)"
    { 11750023, 3220 }, // "Craftsanity Item: Blood Sausage (#3220)"
    { 11750024, 3384 }, // "Craftsanity Item: Minor Magic Resistance Potion (#3384)"
    { 11750025, 3386 }, // "Craftsanity Item: Potion of Curing (#3386)"
    { 11750026, 3387 }, // "Craftsanity Item: Limited Invulnerability Potion (#3387)"
    { 11750027, 3390 }, // "Craftsanity Item: Elixir of Lesser Agility (#3390)"
    { 11750028, 3391 }, // "Craftsanity Item: Elixir of Ogre's Strength (#3391)"
    { 11750029, 3471 }, // "Craftsanity Item: Copper Chain Vest (#3471)"
    { 11750030, 3474 }, // "Craftsanity Item: Gemmed Copper Gauntlets (#3474)"
    { 11750031, 3481 }, // "Craftsanity Item: Silvered Bronze Shoulders (#3481)"
    { 11750032, 3484 }, // "Craftsanity Item: Green Iron Boots (#3484)"
    { 11750033, 3485 }, // "Craftsanity Item: Green Iron Gauntlets (#3485)"
    { 11750034, 3490 }, // "Craftsanity Item: Deadly Bronze Poniard (#3490)"
    { 11750035, 3492 }, // "Craftsanity Item: Mighty Iron Hammer (#3492)"
    { 11750036, 3577 }, // "Craftsanity Item: Gold Bar (#3577)"
    { 11750037, 3662 }, // "Craftsanity Item: Crocolisk Steak (#3662)"
    { 11750038, 3663 }, // "Craftsanity Item: Murloc Fin Soup (#3663)"
    { 11750039, 3664 }, // "Craftsanity Item: Crocolisk Gumbo (#3664)"
    { 11750040, 3665 }, // "Craftsanity Item: Curiously Tasty Omelet (#3665)"
    { 11750041, 3666 }, // "Craftsanity Item: Gooey Spider Cake (#3666)"
    { 11750042, 3726 }, // "Craftsanity Item: Big Bear Steak (#3726)"
    { 11750043, 3727 }, // "Craftsanity Item: Hot Lion Chops (#3727)"
    { 11750044, 3728 }, // "Craftsanity Item: Tasty Lion Steak (#3728)"
    { 11750045, 3729 }, // "Craftsanity Item: Soothing Turtle Bisque (#3729)"
    { 11750046, 3772 }, // "Craftsanity Item: Conjured Spring Water (#3772)"
    { 11750047, 3824 }, // "Craftsanity Item: Shadow Oil (#3824)"
    { 11750048, 3825 }, // "Craftsanity Item: Elixir of Fortitude (#3825)"
    { 11750049, 3826 }, // "Craftsanity Item: Major Troll's Blood Elixir (#3826)"
    { 11750050, 3828 }, // "Craftsanity Item: Elixir of Detect Lesser Invisibility (#3828)"
    { 11750051, 3829 }, // "Craftsanity Item: Frost Oil (#3829)"
    { 11750052, 3837 }, // "Craftsanity Item: Golden Scale Coif (#3837)"
    { 11750053, 3840 }, // "Craftsanity Item: Green Iron Shoulders (#3840)"
    { 11750054, 3841 }, // "Craftsanity Item: Golden Scale Shoulders (#3841)"
    { 11750055, 3843 }, // "Craftsanity Item: Golden Scale Leggings (#3843)"
    { 11750056, 3845 }, // "Craftsanity Item: Golden Scale Cuirass (#3845)"
    { 11750057, 3846 }, // "Craftsanity Item: Polished Steel Boots (#3846)"
    { 11750058, 3847 }, // "Craftsanity Item: Golden Scale Boots (#3847)"
    { 11750059, 3849 }, // "Craftsanity Item: Hardened Iron Shortsword (#3849)"
    { 11750060, 3850 }, // "Craftsanity Item: Jade Serpentblade (#3850)"
    { 11750061, 3851 }, // "Craftsanity Item: Solid Iron Maul (#3851)"
    { 11750062, 3852 }, // "Craftsanity Item: Golden Iron Destroyer (#3852)"
    { 11750063, 3853 }, // "Craftsanity Item: Moonsteel Broadsword (#3853)"
    { 11750064, 3854 }, // "Craftsanity Item: Frost Tiger Blade (#3854)"
    { 11750065, 3855 }, // "Craftsanity Item: Massive Iron Axe (#3855)"
    { 11750066, 3856 }, // "Craftsanity Item: Shadow Crescent Axe (#3856)"
    { 11750067, 4241 }, // "Craftsanity Item: Green Woolen Bag (#4241)"
    { 11750068, 4244 }, // "Craftsanity Item: Hillman's Leather Vest (#4244)"
    { 11750069, 4248 }, // "Craftsanity Item: Dark Leather Gloves (#4248)"
    { 11750070, 4250 }, // "Craftsanity Item: Hillman's Belt (#4250)"
    { 11750071, 4252 }, // "Craftsanity Item: Dark Leather Shoulders (#4252)"
    { 11750072, 4254 }, // "Craftsanity Item: Barbaric Gloves (#4254)"
    { 11750073, 4255 }, // "Craftsanity Item: Green Leather Armor (#4255)"
    { 11750074, 4256 }, // "Craftsanity Item: Guardian Armor (#4256)"
    { 11750075, 4258 }, // "Craftsanity Item: Guardian Belt (#4258)"
    { 11750076, 4260 }, // "Craftsanity Item: Guardian Leather Bracers (#4260)"
    { 11750077, 4262 }, // "Craftsanity Item: Gem-studded Leather Belt (#4262)"
    { 11750078, 4264 }, // "Craftsanity Item: Barbaric Belt (#4264)"
    { 11750079, 4311 }, // "Craftsanity Item: Heavy Woolen Cloak (#4311)"
    { 11750080, 4313 }, // "Craftsanity Item: Red Woolen Boots (#4313)"
    { 11750081, 4315 }, // "Craftsanity Item: Reinforced Woolen Shoulders (#4315)"
    { 11750082, 4317 }, // "Craftsanity Item: Phoenix Pants (#4317)"
    { 11750083, 4319 }, // "Craftsanity Item: Azure Silk Gloves (#4319)"
    { 11750084, 4321 }, // "Craftsanity Item: Spider Silk Slippers (#4321)"
    { 11750085, 4322 }, // "Craftsanity Item: Enchanter's Cowl (#4322)"
    { 11750086, 4323 }, // "Craftsanity Item: Shadow Hood (#4323)"
    { 11750087, 4325 }, // "Craftsanity Item: Boots of the Enchanter (#4325)"
    { 11750088, 4327 }, // "Craftsanity Item: Icy Cloak (#4327)"
    { 11750089, 4328 }, // "Craftsanity Item: Spider Belt (#4328)"
    { 11750090, 4329 }, // "Craftsanity Item: Star Belt (#4329)"
    { 11750091, 4331 }, // "Craftsanity Item: Phoenix Gloves (#4331)"
    { 11750092, 4332 }, // "Craftsanity Item: Bright Yellow Shirt (#4332)"
    { 11750093, 4333 }, // "Craftsanity Item: Dark Silk Shirt (#4333)"
    { 11750094, 4335 }, // "Craftsanity Item: Rich Purple Silk Shirt (#4335)"
    { 11750095, 4336 }, // "Craftsanity Item: Black Swashbuckler's Shirt (#4336)"
    { 11750096, 4367 }, // "Craftsanity Item: Small Seaforium Charge (#4367)"
    { 11750097, 4372 }, // "Craftsanity Item: Lovingly Crafted Boomstick (#4372)"
    { 11750098, 4373 }, // "Craftsanity Item: Shadow Goggles (#4373)"
    { 11750099, 4376 }, // "Craftsanity Item: Flame Deflector (#4376)"
    { 11750100, 4381 }, // "Craftsanity Item: Minor Recombobulator (#4381)"
    { 11750101, 4383 }, // "Craftsanity Item: Moonsight Rifle (#4383)"
    { 11750102, 4386 }, // "Craftsanity Item: Ice Deflector (#4386)"
    { 11750103, 4388 }, // "Craftsanity Item: Discombobulator Ray (#4388)"
    { 11750104, 4393 }, // "Craftsanity Item: Craftsman's Monocle (#4393)"
    { 11750105, 4395 }, // "Craftsanity Item: Goblin Land Mine (#4395)"
    { 11750106, 4396 }, // "Craftsanity Item: Mechanical Dragonling (#4396)"
    { 11750107, 4397 }, // "Craftsanity Item: Gnomish Cloaking Device (#4397)"
    { 11750108, 4398 }, // "Craftsanity Item: Large Seaforium Charge (#4398)"
    { 11750109, 4401 }, // "Craftsanity Item: Mechanical Squirrel Box (#4401)"
    { 11750110, 4403 }, // "Craftsanity Item: Portable Bronze Mortar (#4403)"
    { 11750111, 4407 }, // "Craftsanity Item: Accurate Scope (#4407)"
    { 11750112, 4455 }, // "Craftsanity Item: Raptor Hide Harness (#4455)"
    { 11750113, 4456 }, // "Craftsanity Item: Raptor Hide Belt (#4456)"
    { 11750114, 4457 }, // "Craftsanity Item: Barbecued Buzzard Wing (#4457)"
    { 11750115, 4592 }, // "Craftsanity Item: Longjaw Mud Snapper (#4592)"
    { 11750116, 4593 }, // "Craftsanity Item: Bristle Whisker Catfish (#4593)"
    { 11750117, 4594 }, // "Craftsanity Item: Rockscale Cod (#4594)"
    { 11750118, 4596 }, // "Craftsanity Item: Discolored Healing Potion (#4596)"
    { 11750119, 4623 }, // "Craftsanity Item: Lesser Stoneshield Potion (#4623)"
    { 11750120, 4852 }, // "Craftsanity Item: Flash Bomb (#4852)"
    { 11750121, 5081 }, // "Craftsanity Item: Kodo Hide Bag (#5081)"
    { 11750122, 5095 }, // "Craftsanity Item: Rainbow Fin Albacore (#5095)"
    { 11750123, 5232 }, // "Craftsanity Item: Minor Soulstone (#5232)"
    { 11750124, 5349 }, // "Craftsanity Item: Conjured Muffin (#5349)"
    { 11750125, 5350 }, // "Craftsanity Item: Conjured Water (#5350)"
    { 11750126, 5472 }, // "Craftsanity Item: Kaldorei Spider Kabob (#5472)"
    { 11750127, 5473 }, // "Craftsanity Item: Scorpid Surprise (#5473)"
    { 11750128, 5474 }, // "Craftsanity Item: Roasted Kodo Meat (#5474)"
    { 11750129, 5476 }, // "Craftsanity Item: Fillet of Frenzy (#5476)"
    { 11750130, 5477 }, // "Craftsanity Item: Strider Stew (#5477)"
    { 11750131, 5478 }, // "Craftsanity Item: Dig Rat Stew (#5478)"
    { 11750132, 5479 }, // "Craftsanity Item: Crispy Lizard Tail (#5479)"
    { 11750133, 5480 }, // "Craftsanity Item: Lean Venison (#5480)"
    { 11750134, 5513 }, // "Craftsanity Item: Mana Jade (#5513)"
    { 11750135, 5514 }, // "Craftsanity Item: Mana Agate (#5514)"
    { 11750136, 5526 }, // "Craftsanity Item: Clam Chowder (#5526)"
    { 11750137, 5541 }, // "Craftsanity Item: Iridescent Hammer (#5541)"
    { 11750138, 5631 }, // "Craftsanity Item: Rage Potion (#5631)"
    { 11750139, 5633 }, // "Craftsanity Item: Great Rage Potion (#5633)"
    { 11750140, 5634 }, // "Craftsanity Item: Free Action Potion (#5634)"
    { 11750141, 5762 }, // "Craftsanity Item: Red Linen Bag (#5762)"
    { 11750142, 5763 }, // "Craftsanity Item: Red Woolen Bag (#5763)"
    { 11750143, 5764 }, // "Craftsanity Item: Green Silk Pack (#5764)"
    { 11750144, 5765 }, // "Craftsanity Item: Black Silk Pack (#5765)"
    { 11750145, 5770 }, // "Craftsanity Item: Robes of Arcana (#5770)"
    { 11750146, 5780 }, // "Craftsanity Item: Murloc Scale Belt (#5780)"
    { 11750147, 5781 }, // "Craftsanity Item: Murloc Scale Breastplate (#5781)"
    { 11750148, 5782 }, // "Craftsanity Item: Thick Murloc Armor (#5782)"
    { 11750149, 5783 }, // "Craftsanity Item: Murloc Scale Bracers (#5783)"
    { 11750150, 5958 }, // "Craftsanity Item: Fine Leather Pants (#5958)"
    { 11750151, 5963 }, // "Craftsanity Item: Barbaric Leggings (#5963)"
    { 11750152, 5965 }, // "Craftsanity Item: Guardian Cloak (#5965)"
    { 11750153, 6037 }, // "Craftsanity Item: Truesilver Bar (#6037)"
    { 11750154, 6038 }, // "Craftsanity Item: Giant Clam Scorcho (#6038)"
    { 11750155, 6041 }, // "Craftsanity Item: Steel Weapon Chain (#6041)"
    { 11750156, 6042 }, // "Craftsanity Item: Iron Shield Spike (#6042)"
    { 11750157, 6043 }, // "Craftsanity Item: Iron Counterweight (#6043)"
    { 11750158, 6048 }, // "Craftsanity Item: Shadow Protection Potion (#6048)"
    { 11750159, 6049 }, // "Craftsanity Item: Fire Protection Potion (#6049)"
    { 11750160, 6050 }, // "Craftsanity Item: Frost Protection Potion (#6050)"
    { 11750161, 6051 }, // "Craftsanity Item: Holy Protection Potion (#6051)"
    { 11750162, 6052 }, // "Craftsanity Item: Nature Protection Potion (#6052)"
    { 11750163, 6239 }, // "Craftsanity Item: Red Linen Vest (#6239)"
    { 11750164, 6240 }, // "Craftsanity Item: Blue Linen Vest (#6240)"
    { 11750165, 6242 }, // "Craftsanity Item: Blue Linen Robe (#6242)"
    { 11750166, 6263 }, // "Craftsanity Item: Blue Overalls (#6263)"
    { 11750167, 6264 }, // "Craftsanity Item: Greater Adept's Robe (#6264)"
    { 11750168, 6290 }, // "Craftsanity Item: Brilliant Smallfish (#6290)"
    { 11750169, 6316 }, // "Craftsanity Item: Loch Frenzy Delight (#6316)"
    { 11750170, 6384 }, // "Craftsanity Item: Stylish Blue Shirt (#6384)"
    { 11750171, 6385 }, // "Craftsanity Item: Stylish Green Shirt (#6385)"
    { 11750172, 6451 }, // "Craftsanity Item: Heavy Silk Bandage (#6451)"
    { 11750173, 6453 }, // "Craftsanity Item: Strong Anti-Venom (#6453)"
    { 11750174, 6466 }, // "Craftsanity Item: Deviate Scale Cloak (#6466)"
    { 11750175, 6467 }, // "Craftsanity Item: Deviate Scale Gloves (#6467)"
    { 11750176, 6468 }, // "Craftsanity Item: Deviate Scale Belt (#6468)"
    { 11750177, 6657 }, // "Craftsanity Item: Savory Deviate Delight (#6657)"
    { 11750178, 6662 }, // "Craftsanity Item: Elixir of Giant Growth (#6662)"
    { 11750179, 6709 }, // "Craftsanity Item: Moonglow Vest (#6709)"
    { 11750180, 6714 }, // "Craftsanity Item: Ez-Thro Dynamite (#6714)"
    { 11750181, 6731 }, // "Craftsanity Item: Ironforge Breastplate (#6731)"
    { 11750182, 6836 }, // "Craftsanity Item: Dress Shoes (#6836)"
    { 11750183, 6887 }, // "Craftsanity Item: Spotted Yellowtail (#6887)"
    { 11750184, 6890 }, // "Craftsanity Item: Smoked Bear Meat (#6890)"
    { 11750185, 7047 }, // "Craftsanity Item: Hands of Darkness (#7047)"
    { 11750186, 7049 }, // "Craftsanity Item: Truefaith Gloves (#7049)"
    { 11750187, 7053 }, // "Craftsanity Item: Azure Silk Cloak (#7053)"
    { 11750188, 7056 }, // "Craftsanity Item: Crimson Silk Cloak (#7056)"
    { 11750189, 7059 }, // "Craftsanity Item: Crimson Silk Shoulders (#7059)"
    { 11750190, 7060 }, // "Craftsanity Item: Azure Shoulders (#7060)"
    { 11750191, 7061 }, // "Craftsanity Item: Earthen Silk Belt (#7061)"
    { 11750192, 7063 }, // "Craftsanity Item: Crimson Silk Robe (#7063)"
    { 11750193, 7065 }, // "Craftsanity Item: Green Silk Armor (#7065)"
    { 11750194, 7068 }, // "Craftsanity Item: Elemental Fire (#7068)"
    { 11750195, 7076 }, // "Craftsanity Item: Essence of Earth (#7076)"
    { 11750196, 7078 }, // "Craftsanity Item: Essence of Fire (#7078)"
    { 11750197, 7080 }, // "Craftsanity Item: Essence of Water (#7080)"
    { 11750198, 7082 }, // "Craftsanity Item: Essence of Air (#7082)"
    { 11750199, 7148 }, // "Craftsanity Item: Goblin Jumper Cables (#7148)"
    { 11750200, 7191 }, // "Craftsanity Item: Fused Wiring (#7191)"
    { 11750201, 7280 }, // "Craftsanity Item: Rugged Leather Pants (#7280)"
    { 11750202, 7283 }, // "Craftsanity Item: Black Whelp Cloak (#7283)"
    { 11750203, 7284 }, // "Craftsanity Item: Red Whelp Gloves (#7284)"
    { 11750204, 7349 }, // "Craftsanity Item: Herbalist's Gloves (#7349)"
    { 11750205, 7352 }, // "Craftsanity Item: Earthen Leather Shoulders (#7352)"
    { 11750206, 7358 }, // "Craftsanity Item: Pilferer's Gloves (#7358)"
    { 11750207, 7359 }, // "Craftsanity Item: Heavy Earthen Gloves (#7359)"
    { 11750208, 7373 }, // "Craftsanity Item: Dusky Leather Leggings (#7373)"
    { 11750209, 7375 }, // "Craftsanity Item: Green Whelp Armor (#7375)"
    { 11750210, 7386 }, // "Craftsanity Item: Green Whelp Bracers (#7386)"
    { 11750211, 7390 }, // "Craftsanity Item: Dusky Boots (#7390)"
    { 11750212, 7391 }, // "Craftsanity Item: Swift Boots (#7391)"
    { 11750213, 7506 }, // "Craftsanity Item: Gnomish Universal Remote (#7506)"
    { 11750214, 7676 }, // "Craftsanity Item: Thistle Tea (#7676)"
    { 11750215, 7913 }, // "Craftsanity Item: Barbaric Iron Shoulders (#7913)"
    { 11750216, 7914 }, // "Craftsanity Item: Barbaric Iron Breastplate (#7914)"
    { 11750217, 7915 }, // "Craftsanity Item: Barbaric Iron Helm (#7915)"
    { 11750218, 7916 }, // "Craftsanity Item: Barbaric Iron Boots (#7916)"
    { 11750219, 7917 }, // "Craftsanity Item: Barbaric Iron Gloves (#7917)"
    { 11750220, 7921 }, // "Craftsanity Item: Heavy Mithril Pants (#7921)"
    { 11750221, 7924 }, // "Craftsanity Item: Mithril Scale Bracers (#7924)"
    { 11750222, 7926 }, // "Craftsanity Item: Ornate Mithril Pants (#7926)"
    { 11750223, 7927 }, // "Craftsanity Item: Ornate Mithril Gloves (#7927)"
    { 11750224, 7928 }, // "Craftsanity Item: Ornate Mithril Shoulder (#7928)"
    { 11750225, 7932 }, // "Craftsanity Item: Mithril Scale Shoulders (#7932)"
    { 11750226, 7934 }, // "Craftsanity Item: Heavy Mithril Helm (#7934)"
    { 11750227, 7942 }, // "Craftsanity Item: Blue Glittering Axe (#7942)"
    { 11750228, 7943 }, // "Craftsanity Item: Wicked Mithril Blade (#7943)"
    { 11750229, 7944 }, // "Craftsanity Item: Dazzling Mithril Rapier (#7944)"
    { 11750230, 7946 }, // "Craftsanity Item: Runed Mithril Hammer (#7946)"
    { 11750231, 7947 }, // "Craftsanity Item: Ebon Shiv (#7947)"
    { 11750232, 7967 }, // "Craftsanity Item: Mithril Shield Spike (#7967)"
    { 11750233, 7969 }, // "Craftsanity Item: Mithril Spurs (#7969)"
    { 11750234, 8007 }, // "Craftsanity Item: Mana Citrine (#8007)"
    { 11750235, 8008 }, // "Craftsanity Item: Mana Ruby (#8008)"
    { 11750236, 8075 }, // "Craftsanity Item: Conjured Sourdough (#8075)"
    { 11750237, 8076 }, // "Craftsanity Item: Conjured Sweet Roll (#8076)"
    { 11750238, 8077 }, // "Craftsanity Item: Conjured Mineral Water (#8077)"
    { 11750239, 8078 }, // "Craftsanity Item: Conjured Sparkling Water (#8078)"
    { 11750240, 8079 }, // "Craftsanity Item: Conjured Crystal Water (#8079)"
    { 11750241, 8174 }, // "Craftsanity Item: Comfortable Leather Hat (#8174)"
    { 11750242, 8187 }, // "Craftsanity Item: Turtle Scale Gloves (#8187)"
    { 11750243, 8192 }, // "Craftsanity Item: Nightscape Shoulders (#8192)"
    { 11750244, 8200 }, // "Craftsanity Item: Big Voodoo Robe (#8200)"
    { 11750245, 8201 }, // "Craftsanity Item: Big Voodoo Mask (#8201)"
    { 11750246, 8202 }, // "Craftsanity Item: Big Voodoo Pants (#8202)"
    { 11750247, 8203 }, // "Craftsanity Item: Tough Scorpid Breastplate (#8203)"
    { 11750248, 8204 }, // "Craftsanity Item: Tough Scorpid Gloves (#8204)"
    { 11750249, 8205 }, // "Craftsanity Item: Tough Scorpid Bracers (#8205)"
    { 11750250, 8206 }, // "Craftsanity Item: Tough Scorpid Leggings (#8206)"
    { 11750251, 8207 }, // "Craftsanity Item: Tough Scorpid Shoulders (#8207)"
    { 11750252, 8208 }, // "Craftsanity Item: Tough Scorpid Helm (#8208)"
    { 11750253, 8209 }, // "Craftsanity Item: Tough Scorpid Boots (#8209)"
    { 11750254, 8210 }, // "Craftsanity Item: Wild Leather Shoulders (#8210)"
    { 11750255, 8211 }, // "Craftsanity Item: Wild Leather Vest (#8211)"
    { 11750256, 8212 }, // "Craftsanity Item: Wild Leather Leggings (#8212)"
    { 11750257, 8213 }, // "Craftsanity Item: Wild Leather Boots (#8213)"
    { 11750258, 8214 }, // "Craftsanity Item: Wild Leather Helmet (#8214)"
    { 11750259, 8215 }, // "Craftsanity Item: Wild Leather Cloak (#8215)"
    { 11750260, 8216 }, // "Craftsanity Item: Big Voodoo Cloak (#8216)"
    { 11750261, 8364 }, // "Craftsanity Item: Mithril Head Trout (#8364)"
    { 11750262, 8544 }, // "Craftsanity Item: Mageweave Bandage (#8544)"
    { 11750263, 9036 }, // "Craftsanity Item: Magic Resistance Potion (#9036)"
    { 11750264, 9060 }, // "Craftsanity Item: Inlaid Mithril Cylinder (#9060)"
    { 11750265, 9061 }, // "Craftsanity Item: Goblin Rocket Fuel (#9061)"
    { 11750266, 9088 }, // "Craftsanity Item: Gift of Arthas (#9088)"
    { 11750267, 9144 }, // "Craftsanity Item: Wildvine Potion (#9144)"
    { 11750268, 9149 }, // "Craftsanity Item: Philosopher's Stone (#9149)"
    { 11750269, 9172 }, // "Craftsanity Item: Invisibility Potion (#9172)"
    { 11750270, 9197 }, // "Craftsanity Item: Elixir of Dream Vision (#9197)"
    { 11750271, 9206 }, // "Craftsanity Item: Elixir of Giants (#9206)"
    { 11750272, 9210 }, // "Craftsanity Item: Ghost Dye (#9210)"
    { 11750273, 9224 }, // "Craftsanity Item: Elixir of Demonslaying (#9224)"
    { 11750274, 9264 }, // "Craftsanity Item: Elixir of Shadow Power (#9264)"
    { 11750275, 9312 }, // "Craftsanity Item: Blue Firework (#9312)"
    { 11750276, 9313 }, // "Craftsanity Item: Green Firework (#9313)"
    { 11750277, 9318 }, // "Craftsanity Item: Red Firework (#9318)"
    { 11750278, 9366 }, // "Craftsanity Item: Golden Scale Gauntlets (#9366)"
    { 11750279, 10007 }, // "Craftsanity Item: Red Mageweave Vest (#10007)"
    { 11750280, 10008 }, // "Craftsanity Item: White Bandit Mask (#10008)"
    { 11750281, 10009 }, // "Craftsanity Item: Red Mageweave Pants (#10009)"
    { 11750282, 10018 }, // "Craftsanity Item: Red Mageweave Gloves (#10018)"
    { 11750283, 10025 }, // "Craftsanity Item: Shadoweave Mask (#10025)"
    { 11750284, 10029 }, // "Craftsanity Item: Red Mageweave Shoulders (#10029)"
    { 11750285, 10030 }, // "Craftsanity Item: Admiral's Hat (#10030)"
    { 11750286, 10033 }, // "Craftsanity Item: Red Mageweave Headband (#10033)"
    { 11750287, 10034 }, // "Craftsanity Item: Tuxedo Shirt (#10034)"
    { 11750288, 10035 }, // "Craftsanity Item: Tuxedo Pants (#10035)"
    { 11750289, 10036 }, // "Craftsanity Item: Tuxedo Jacket (#10036)"
    { 11750290, 10040 }, // "Craftsanity Item: White Wedding Dress (#10040)"
    { 11750291, 10048 }, // "Craftsanity Item: Colorful Kilt (#10048)"
    { 11750292, 10052 }, // "Craftsanity Item: Orange Martial Shirt (#10052)"
    { 11750293, 10054 }, // "Craftsanity Item: Lavender Mageweave Shirt (#10054)"
    { 11750294, 10055 }, // "Craftsanity Item: Pink Mageweave Shirt (#10055)"
    { 11750295, 10423 }, // "Craftsanity Item: Silvered Bronze Leggings (#10423)"
    { 11750296, 10499 }, // "Craftsanity Item: Bright-Eye Goggles (#10499)"
    { 11750297, 10501 }, // "Craftsanity Item: Catseye Ultra Goggles (#10501)"
    { 11750298, 10502 }, // "Craftsanity Item: Spellpower Goggles Xtreme (#10502)"
    { 11750299, 10506 }, // "Craftsanity Item: Deepdive Helmet (#10506)"
    { 11750300, 10510 }, // "Craftsanity Item: Mithril Heavy-bore Rifle (#10510)"
    { 11750301, 10518 }, // "Craftsanity Item: Parachute Cloak (#10518)"
    { 11750302, 10546 }, // "Craftsanity Item: Deadly Scope (#10546)"
    { 11750303, 10548 }, // "Craftsanity Item: Sniper Scope (#10548)"
    { 11750304, 10576 }, // "Craftsanity Item: Mithril Mechanical Dragonling (#10576)"
    { 11750305, 11604 }, // "Craftsanity Item: Dark Iron Plate (#11604)"
    { 11750306, 11605 }, // "Craftsanity Item: Dark Iron Shoulders (#11605)"
    { 11750307, 11606 }, // "Craftsanity Item: Dark Iron Mail (#11606)"
    { 11750308, 11607 }, // "Craftsanity Item: Dark Iron Sunderer (#11607)"
    { 11750309, 11608 }, // "Craftsanity Item: Dark Iron Pulverizer (#11608)"
    { 11750310, 11811 }, // "Craftsanity Item: Smoking Heart of the Mountain (#11811)"
    { 11750311, 11825 }, // "Craftsanity Item: Pet Bombling (#11825)"
    { 11750312, 11826 }, // "Craftsanity Item: Lil' Smoky (#11826)"
    { 11750313, 12209 }, // "Craftsanity Item: Lean Wolf Steak (#12209)"
    { 11750314, 12210 }, // "Craftsanity Item: Roast Raptor (#12210)"
    { 11750315, 12212 }, // "Craftsanity Item: Jungle Stew (#12212)"
    { 11750316, 12213 }, // "Craftsanity Item: Carrion Surprise (#12213)"
    { 11750317, 12214 }, // "Craftsanity Item: Mystery Stew (#12214)"
    { 11750318, 12215 }, // "Craftsanity Item: Heavy Kodo Stew (#12215)"
    { 11750319, 12216 }, // "Craftsanity Item: Spiced Chili Crab (#12216)"
    { 11750320, 12217 }, // "Craftsanity Item: Dragonbreath Chili (#12217)"
    { 11750321, 12218 }, // "Craftsanity Item: Monster Omelet (#12218)"
    { 11750322, 12224 }, // "Craftsanity Item: Crispy Bat Wing (#12224)"
    { 11750323, 12260 }, // "Craftsanity Item: Searing Golden Blade (#12260)"
    { 11750324, 12360 }, // "Craftsanity Item: Arcanite Bar (#12360)"
    { 11750325, 12405 }, // "Craftsanity Item: Thorium Armor (#12405)"
    { 11750326, 12406 }, // "Craftsanity Item: Thorium Belt (#12406)"
    { 11750327, 12408 }, // "Craftsanity Item: Thorium Bracers (#12408)"
    { 11750328, 12409 }, // "Craftsanity Item: Thorium Boots (#12409)"
    { 11750329, 12410 }, // "Craftsanity Item: Thorium Helm (#12410)"
    { 11750330, 12414 }, // "Craftsanity Item: Thorium Leggings (#12414)"
    { 11750331, 12415 }, // "Craftsanity Item: Radiant Breastplate (#12415)"
    { 11750332, 12416 }, // "Craftsanity Item: Radiant Belt (#12416)"
    { 11750333, 12417 }, // "Craftsanity Item: Radiant Circlet (#12417)"
    { 11750334, 12418 }, // "Craftsanity Item: Radiant Gloves (#12418)"
    { 11750335, 12419 }, // "Craftsanity Item: Radiant Boots (#12419)"
    { 11750336, 12420 }, // "Craftsanity Item: Radiant Leggings (#12420)"
    { 11750337, 12422 }, // "Craftsanity Item: Imperial Plate Chest (#12422)"
    { 11750338, 12424 }, // "Craftsanity Item: Imperial Plate Belt (#12424)"
    { 11750339, 12425 }, // "Craftsanity Item: Imperial Plate Bracers (#12425)"
    { 11750340, 12426 }, // "Craftsanity Item: Imperial Plate Boots (#12426)"
    { 11750341, 12427 }, // "Craftsanity Item: Imperial Plate Helm (#12427)"
    { 11750342, 12428 }, // "Craftsanity Item: Imperial Plate Shoulders (#12428)"
    { 11750343, 12429 }, // "Craftsanity Item: Imperial Plate Leggings (#12429)"
    { 11750344, 12610 }, // "Craftsanity Item: Runic Plate Shoulders (#12610)"
    { 11750345, 12611 }, // "Craftsanity Item: Runic Plate Boots (#12611)"
    { 11750346, 12612 }, // "Craftsanity Item: Runic Plate Helm (#12612)"
    { 11750347, 12613 }, // "Craftsanity Item: Runic Breastplate (#12613)"
    { 11750348, 12614 }, // "Craftsanity Item: Runic Plate Leggings (#12614)"
    { 11750349, 12618 }, // "Craftsanity Item: Enchanted Thorium Breastplate (#12618)"
    { 11750350, 12619 }, // "Craftsanity Item: Enchanted Thorium Leggings (#12619)"
    { 11750351, 12620 }, // "Craftsanity Item: Enchanted Thorium Helm (#12620)"
    { 11750352, 12624 }, // "Craftsanity Item: Wildthorn Mail (#12624)"
    { 11750353, 12625 }, // "Craftsanity Item: Dawnbringer Shoulders (#12625)"
    { 11750354, 12628 }, // "Craftsanity Item: Demon Forged Breastplate (#12628)"
    { 11750355, 12631 }, // "Craftsanity Item: Fiery Plate Gauntlets (#12631)"
    { 11750356, 12632 }, // "Craftsanity Item: Storm Gauntlets (#12632)"
    { 11750357, 12633 }, // "Craftsanity Item: Whitesoul Helm (#12633)"
    { 11750358, 12636 }, // "Craftsanity Item: Helm of the Great Chief (#12636)"
    { 11750359, 12639 }, // "Craftsanity Item: Stronghold Gauntlets (#12639)"
    { 11750360, 12640 }, // "Craftsanity Item: Lionheart Helm (#12640)"
    { 11750361, 12641 }, // "Craftsanity Item: Invulnerable Mail (#12641)"
    { 11750362, 12645 }, // "Craftsanity Item: Thorium Shield Spike (#12645)"
    { 11750363, 12773 }, // "Craftsanity Item: Ornate Thorium Handaxe (#12773)"
    { 11750364, 12774 }, // "Craftsanity Item: Dawn's Edge (#12774)"
    { 11750365, 12775 }, // "Craftsanity Item: Huge Thorium Battleaxe (#12775)"
    { 11750366, 12776 }, // "Craftsanity Item: Enchanted Battlehammer (#12776)"
    { 11750367, 12777 }, // "Craftsanity Item: Blazing Rapier (#12777)"
    { 11750368, 12781 }, // "Craftsanity Item: Serenity (#12781)"
    { 11750369, 12782 }, // "Craftsanity Item: Corruption (#12782)"
    { 11750370, 12783 }, // "Craftsanity Item: Heartseeker (#12783)"
    { 11750371, 12784 }, // "Craftsanity Item: Arcanite Reaper (#12784)"
    { 11750372, 12790 }, // "Craftsanity Item: Arcanite Champion (#12790)"
    { 11750373, 12792 }, // "Craftsanity Item: Volcanic Hammer (#12792)"
    { 11750374, 12794 }, // "Craftsanity Item: Masterwork Stormhammer (#12794)"
    { 11750375, 12796 }, // "Craftsanity Item: Hammer of the Titans (#12796)"
    { 11750376, 12797 }, // "Craftsanity Item: Frostguard (#12797)"
    { 11750377, 12798 }, // "Craftsanity Item: Annihilator (#12798)"
    { 11750378, 12803 }, // "Craftsanity Item: Living Essence (#12803)"
    { 11750379, 12808 }, // "Craftsanity Item: Essence of Undeath (#12808)"
    { 11750380, 13442 }, // "Craftsanity Item: Mighty Rage Potion (#13442)"
    { 11750381, 13443 }, // "Craftsanity Item: Superior Mana Potion (#13443)"
    { 11750382, 13444 }, // "Craftsanity Item: Major Mana Potion (#13444)"
    { 11750383, 13445 }, // "Craftsanity Item: Elixir of Superior Defense (#13445)"
    { 11750384, 13446 }, // "Craftsanity Item: Major Healing Potion (#13446)"
    { 11750385, 13447 }, // "Craftsanity Item: Elixir of the Sages (#13447)"
    { 11750386, 13452 }, // "Craftsanity Item: Elixir of the Mongoose (#13452)"
    { 11750387, 13453 }, // "Craftsanity Item: Elixir of Brute Force (#13453)"
    { 11750388, 13454 }, // "Craftsanity Item: Greater Arcane Elixir (#13454)"
    { 11750389, 13455 }, // "Craftsanity Item: Greater Stoneshield Potion (#13455)"
    { 11750390, 13456 }, // "Craftsanity Item: Greater Frost Protection Potion (#13456)"
    { 11750391, 13457 }, // "Craftsanity Item: Greater Fire Protection Potion (#13457)"
    { 11750392, 13458 }, // "Craftsanity Item: Greater Nature Protection Potion (#13458)"
    { 11750393, 13459 }, // "Craftsanity Item: Greater Shadow Protection Potion (#13459)"
    { 11750394, 13461 }, // "Craftsanity Item: Greater Arcane Protection Potion (#13461)"
    { 11750395, 13462 }, // "Craftsanity Item: Purification Potion (#13462)"
    { 11750396, 13503 }, // "Craftsanity Item: Alchemist's Stone (#13503)"
    { 11750397, 13506 }, // "Craftsanity Item: Potion of Petrification (#13506)"
    { 11750398, 13510 }, // "Craftsanity Item: Flask of the Titans (#13510)"
    { 11750399, 13511 }, // "Craftsanity Item: Flask of Distilled Wisdom (#13511)"
    { 11750400, 13512 }, // "Craftsanity Item: Flask of Supreme Power (#13512)"
    { 11750401, 13513 }, // "Craftsanity Item: Flask of Chromatic Resistance (#13513)"
    { 11750402, 13851 }, // "Craftsanity Item: Hot Wolf Ribs (#13851)"
    { 11750403, 13857 }, // "Craftsanity Item: Runecloth Tunic (#13857)"
    { 11750404, 13858 }, // "Craftsanity Item: Runecloth Robe (#13858)"
    { 11750405, 13860 }, // "Craftsanity Item: Runecloth Cloak (#13860)"
    { 11750406, 13863 }, // "Craftsanity Item: Runecloth Gloves (#13863)"
    { 11750407, 13864 }, // "Craftsanity Item: Runecloth Boots (#13864)"
    { 11750408, 13865 }, // "Craftsanity Item: Runecloth Pants (#13865)"
    { 11750409, 13866 }, // "Craftsanity Item: Runecloth Headband (#13866)"
    { 11750410, 13867 }, // "Craftsanity Item: Runecloth Shoulders (#13867)"
    { 11750411, 13868 }, // "Craftsanity Item: Frostweave Robe (#13868)"
    { 11750412, 13869 }, // "Craftsanity Item: Frostweave Tunic (#13869)"
    { 11750413, 13870 }, // "Craftsanity Item: Frostweave Gloves (#13870)"
    { 11750414, 13871 }, // "Craftsanity Item: Frostweave Pants (#13871)"
    { 11750415, 13927 }, // "Craftsanity Item: Cooked Glossy Mightfish (#13927)"
    { 11750416, 13928 }, // "Craftsanity Item: Grilled Squid (#13928)"
    { 11750417, 13929 }, // "Craftsanity Item: Hot Smoked Bass (#13929)"
    { 11750418, 13930 }, // "Craftsanity Item: Filet of Redgill (#13930)"
    { 11750419, 13931 }, // "Craftsanity Item: Nightfin Soup (#13931)"
    { 11750420, 13932 }, // "Craftsanity Item: Poached Sunscale Salmon (#13932)"
    { 11750421, 13933 }, // "Craftsanity Item: Lobster Stew (#13933)"
    { 11750422, 13934 }, // "Craftsanity Item: Mightfish Steak (#13934)"
    { 11750423, 13935 }, // "Craftsanity Item: Baked Salmon (#13935)"
    { 11750424, 14042 }, // "Craftsanity Item: Cindercloth Vest (#14042)"
    { 11750425, 14043 }, // "Craftsanity Item: Cindercloth Gloves (#14043)"
    { 11750426, 14044 }, // "Craftsanity Item: Cindercloth Cloak (#14044)"
    { 11750427, 14045 }, // "Craftsanity Item: Cindercloth Pants (#14045)"
    { 11750428, 14046 }, // "Craftsanity Item: Runecloth Bag (#14046)"
    { 11750429, 14100 }, // "Craftsanity Item: Brightcloth Robe (#14100)"
    { 11750430, 14101 }, // "Craftsanity Item: Brightcloth Gloves (#14101)"
    { 11750431, 14103 }, // "Craftsanity Item: Brightcloth Cloak (#14103)"
    { 11750432, 14104 }, // "Craftsanity Item: Brightcloth Pants (#14104)"
    { 11750433, 14106 }, // "Craftsanity Item: Felcloth Robe (#14106)"
    { 11750434, 14107 }, // "Craftsanity Item: Felcloth Pants (#14107)"
    { 11750435, 14108 }, // "Craftsanity Item: Felcloth Boots (#14108)"
    { 11750436, 14111 }, // "Craftsanity Item: Felcloth Hood (#14111)"
    { 11750437, 14112 }, // "Craftsanity Item: Felcloth Shoulders (#14112)"
    { 11750438, 14128 }, // "Craftsanity Item: Wizardweave Robe (#14128)"
    { 11750439, 14130 }, // "Craftsanity Item: Wizardweave Turban (#14130)"
    { 11750440, 14132 }, // "Craftsanity Item: Wizardweave Leggings (#14132)"
    { 11750441, 14134 }, // "Craftsanity Item: Cloak of Fire (#14134)"
    { 11750442, 14136 }, // "Craftsanity Item: Robe of Winter Night (#14136)"
    { 11750443, 14137 }, // "Craftsanity Item: Mooncloth Leggings (#14137)"
    { 11750444, 14138 }, // "Craftsanity Item: Mooncloth Vest (#14138)"
    { 11750445, 14139 }, // "Craftsanity Item: Mooncloth Shoulders (#14139)"
    { 11750446, 14140 }, // "Craftsanity Item: Mooncloth Circlet (#14140)"
    { 11750447, 14141 }, // "Craftsanity Item: Ghostweave Vest (#14141)"
    { 11750448, 14142 }, // "Craftsanity Item: Ghostweave Gloves (#14142)"
    { 11750449, 14143 }, // "Craftsanity Item: Ghostweave Belt (#14143)"
    { 11750450, 14144 }, // "Craftsanity Item: Ghostweave Pants (#14144)"
    { 11750451, 14146 }, // "Craftsanity Item: Gloves of Spell Mastery (#14146)"
    { 11750452, 14152 }, // "Craftsanity Item: Robe of the Archmage (#14152)"
    { 11750453, 14153 }, // "Craftsanity Item: Robe of the Void (#14153)"
    { 11750454, 14154 }, // "Craftsanity Item: Truefaith Vestments (#14154)"
    { 11750455, 14155 }, // "Craftsanity Item: Mooncloth Bag (#14155)"
    { 11750456, 14156 }, // "Craftsanity Item: Bottomless Bag (#14156)"
    { 11750457, 14342 }, // "Craftsanity Item: Mooncloth (#14342)"
    { 11750458, 15045 }, // "Craftsanity Item: Green Dragonscale Breastplate (#15045)"
    { 11750459, 15046 }, // "Craftsanity Item: Green Dragonscale Leggings (#15046)"
    { 11750460, 15047 }, // "Craftsanity Item: Red Dragonscale Breastplate (#15047)"
    { 11750461, 15048 }, // "Craftsanity Item: Blue Dragonscale Breastplate (#15048)"
    { 11750462, 15049 }, // "Craftsanity Item: Blue Dragonscale Shoulders (#15049)"
    { 11750463, 15050 }, // "Craftsanity Item: Black Dragonscale Breastplate (#15050)"
    { 11750464, 15051 }, // "Craftsanity Item: Black Dragonscale Shoulders (#15051)"
    { 11750465, 15052 }, // "Craftsanity Item: Black Dragonscale Leggings (#15052)"
    { 11750466, 15053 }, // "Craftsanity Item: Volcanic Breastplate (#15053)"
    { 11750467, 15054 }, // "Craftsanity Item: Volcanic Leggings (#15054)"
    { 11750468, 15055 }, // "Craftsanity Item: Volcanic Shoulders (#15055)"
    { 11750469, 15056 }, // "Craftsanity Item: Stormshroud Armor (#15056)"
    { 11750470, 15057 }, // "Craftsanity Item: Stormshroud Pants (#15057)"
    { 11750471, 15058 }, // "Craftsanity Item: Stormshroud Shoulders (#15058)"
    { 11750472, 15059 }, // "Craftsanity Item: Living Breastplate (#15059)"
    { 11750473, 15060 }, // "Craftsanity Item: Living Leggings (#15060)"
    { 11750474, 15061 }, // "Craftsanity Item: Living Shoulders (#15061)"
    { 11750475, 15062 }, // "Craftsanity Item: Devilsaur Leggings (#15062)"
    { 11750476, 15063 }, // "Craftsanity Item: Devilsaur Gauntlets (#15063)"
    { 11750477, 15064 }, // "Craftsanity Item: Warbear Harness (#15064)"
    { 11750478, 15065 }, // "Craftsanity Item: Warbear Woolies (#15065)"
    { 11750479, 15066 }, // "Craftsanity Item: Ironfeather Breastplate (#15066)"
    { 11750480, 15067 }, // "Craftsanity Item: Ironfeather Shoulders (#15067)"
    { 11750481, 15068 }, // "Craftsanity Item: Frostsaber Tunic (#15068)"
    { 11750482, 15069 }, // "Craftsanity Item: Frostsaber Leggings (#15069)"
    { 11750483, 15070 }, // "Craftsanity Item: Frostsaber Gloves (#15070)"
    { 11750484, 15071 }, // "Craftsanity Item: Frostsaber Boots (#15071)"
    { 11750485, 15072 }, // "Craftsanity Item: Chimeric Leggings (#15072)"
    { 11750486, 15073 }, // "Craftsanity Item: Chimeric Boots (#15073)"
    { 11750487, 15074 }, // "Craftsanity Item: Chimeric Gloves (#15074)"
    { 11750488, 15075 }, // "Craftsanity Item: Chimeric Vest (#15075)"
    { 11750489, 15076 }, // "Craftsanity Item: Heavy Scorpid Vest (#15076)"
    { 11750490, 15077 }, // "Craftsanity Item: Heavy Scorpid Bracers (#15077)"
    { 11750491, 15078 }, // "Craftsanity Item: Heavy Scorpid Gauntlets (#15078)"
    { 11750492, 15079 }, // "Craftsanity Item: Heavy Scorpid Leggings (#15079)"
    { 11750493, 15080 }, // "Craftsanity Item: Heavy Scorpid Helm (#15080)"
    { 11750494, 15081 }, // "Craftsanity Item: Heavy Scorpid Shoulders (#15081)"
    { 11750495, 15082 }, // "Craftsanity Item: Heavy Scorpid Belt (#15082)"
    { 11750496, 15083 }, // "Craftsanity Item: Wicked Leather Gauntlets (#15083)"
    { 11750497, 15084 }, // "Craftsanity Item: Wicked Leather Bracers (#15084)"
    { 11750498, 15085 }, // "Craftsanity Item: Wicked Leather Armor (#15085)"
    { 11750499, 15086 }, // "Craftsanity Item: Wicked Leather Headband (#15086)"
    { 11750500, 15087 }, // "Craftsanity Item: Wicked Leather Pants (#15087)"
    { 11750501, 15088 }, // "Craftsanity Item: Wicked Leather Belt (#15088)"
    { 11750502, 15090 }, // "Craftsanity Item: Runic Leather Armor (#15090)"
    { 11750503, 15091 }, // "Craftsanity Item: Runic Leather Gauntlets (#15091)"
    { 11750504, 15092 }, // "Craftsanity Item: Runic Leather Bracers (#15092)"
    { 11750505, 15093 }, // "Craftsanity Item: Runic Leather Belt (#15093)"
    { 11750506, 15094 }, // "Craftsanity Item: Runic Leather Headband (#15094)"
    { 11750507, 15095 }, // "Craftsanity Item: Runic Leather Pants (#15095)"
    { 11750508, 15096 }, // "Craftsanity Item: Runic Leather Shoulders (#15096)"
    { 11750509, 15141 }, // "Craftsanity Item: Onyxia Scale Breastplate (#15141)"
    { 11750510, 15993 }, // "Craftsanity Item: Thorium Grenade (#15993)"
    { 11750511, 15994 }, // "Craftsanity Item: Thorium Widget (#15994)"
    { 11750512, 15995 }, // "Craftsanity Item: Thorium Rifle (#15995)"
    { 11750513, 15996 }, // "Craftsanity Item: Lifelike Mechanical Toad (#15996)"
    { 11750514, 15997 }, // "Craftsanity Item: Thorium Shells (#15997)"
    { 11750515, 15999 }, // "Craftsanity Item: Spellpower Goggles Xtreme Plus (#15999)"
    { 11750516, 16000 }, // "Craftsanity Item: Thorium Tube (#16000)"
    { 11750517, 16004 }, // "Craftsanity Item: Dark Iron Rifle (#16004)"
    { 11750518, 16005 }, // "Craftsanity Item: Dark Iron Bomb (#16005)"
    { 11750519, 16006 }, // "Craftsanity Item: Delicate Arcanite Converter (#16006)"
    { 11750520, 16007 }, // "Craftsanity Item: Flawless Arcanite Rifle (#16007)"
    { 11750521, 16008 }, // "Craftsanity Item: Master Engineer's Goggles (#16008)"
    { 11750522, 16009 }, // "Craftsanity Item: Voice Amplification Modulator (#16009)"
    { 11750523, 16022 }, // "Craftsanity Item: Arcanite Dragonling (#16022)"
    { 11750524, 16023 }, // "Craftsanity Item: Masterwork Target Dummy (#16023)"
    { 11750525, 16040 }, // "Craftsanity Item: Arcane Bomb (#16040)"
    { 11750526, 16207 }, // "Craftsanity Item: Runed Arcanite Rod (#16207)"
    { 11750527, 16766 }, // "Craftsanity Item: Undermine Clam Chowder (#16766)"
    { 11750528, 16892 }, // "Craftsanity Item: Lesser Soulstone (#16892)"
    { 11750529, 16893 }, // "Craftsanity Item: Soulstone (#16893)"
    { 11750530, 16895 }, // "Craftsanity Item: Greater Soulstone (#16895)"
    { 11750531, 16896 }, // "Craftsanity Item: Major Soulstone (#16896)"
    { 11750532, 16979 }, // "Craftsanity Item: Flarecore Gloves (#16979)"
    { 11750533, 16980 }, // "Craftsanity Item: Flarecore Mantle (#16980)"
    { 11750534, 16982 }, // "Craftsanity Item: Corehound Boots (#16982)"
    { 11750535, 16983 }, // "Craftsanity Item: Molten Helm (#16983)"
    { 11750536, 16984 }, // "Craftsanity Item: Black Dragonscale Boots (#16984)"
    { 11750537, 16988 }, // "Craftsanity Item: Fiery Chain Shoulders (#16988)"
    { 11750538, 16989 }, // "Craftsanity Item: Fiery Chain Girdle (#16989)"
    { 11750539, 17013 }, // "Craftsanity Item: Dark Iron Leggings (#17013)"
    { 11750540, 17014 }, // "Craftsanity Item: Dark Iron Bracers (#17014)"
    { 11750541, 17015 }, // "Craftsanity Item: Dark Iron Reaver (#17015)"
    { 11750542, 17016 }, // "Craftsanity Item: Dark Iron Destroyer (#17016)"
    { 11750543, 17193 }, // "Craftsanity Item: Sulfuron Hammer (#17193)"
    { 11750544, 17197 }, // "Craftsanity Item: Gingerbread Cookie (#17197)"
    { 11750545, 17198 }, // "Craftsanity Item: Egg Nog (#17198)"
    { 11750546, 17704 }, // "Craftsanity Item: Edge of Winter (#17704)"
    { 11750547, 17708 }, // "Craftsanity Item: Elixir of Frost Power (#17708)"
    { 11750548, 17716 }, // "Craftsanity Item: Snowmaster 9000 (#17716)"
    { 11750549, 17721 }, // "Craftsanity Item: Gloves of the Greatfather (#17721)"
    { 11750550, 17723 }, // "Craftsanity Item: Green Holiday Shirt (#17723)"
    { 11750551, 17771 }, // "Craftsanity Item: Elementium Bar (#17771)"
    { 11750552, 18045 }, // "Craftsanity Item: Tender Wolf Steak (#18045)"
    { 11750553, 18168 }, // "Craftsanity Item: Force Reactive Disk (#18168)"
    { 11750554, 18238 }, // "Craftsanity Item: Shadowskin Gloves (#18238)"
    { 11750555, 18251 }, // "Craftsanity Item: Core Armor Kit (#18251)"
    { 11750556, 18253 }, // "Craftsanity Item: Major Rejuvenation Potion (#18253)"
    { 11750557, 18254 }, // "Craftsanity Item: Runn Tum Tuber Surprise (#18254)"
    { 11750558, 18262 }, // "Craftsanity Item: Elemental Sharpening Stone (#18262)"
    { 11750559, 18263 }, // "Craftsanity Item: Flarecore Wraps (#18263)"
    { 11750560, 18282 }, // "Craftsanity Item: Core Marksman Rifle (#18282)"
    { 11750561, 18283 }, // "Craftsanity Item: Biznicks 247x128 Accurascope (#18283)"
    { 11750562, 18405 }, // "Craftsanity Item: Belt of the Archmage (#18405)"
    { 11750563, 18407 }, // "Craftsanity Item: Felcloth Gloves (#18407)"
    { 11750564, 18408 }, // "Craftsanity Item: Inferno Gloves (#18408)"
    { 11750565, 18409 }, // "Craftsanity Item: Mooncloth Gloves (#18409)"
    { 11750566, 18413 }, // "Craftsanity Item: Cloak of Warding (#18413)"
    { 11750567, 18486 }, // "Craftsanity Item: Mooncloth Robe (#18486)"
    { 11750568, 18504 }, // "Craftsanity Item: Girdle of Insight (#18504)"
    { 11750569, 18506 }, // "Craftsanity Item: Mongoose Boots (#18506)"
    { 11750570, 18508 }, // "Craftsanity Item: Swift Flight Bracers (#18508)"
    { 11750571, 18509 }, // "Craftsanity Item: Chromatic Cloak (#18509)"
    { 11750572, 18510 }, // "Craftsanity Item: Hide of the Wild (#18510)"
    { 11750573, 18511 }, // "Craftsanity Item: Shifting Cloak (#18511)"
    { 11750574, 18587 }, // "Craftsanity Item: Goblin Jumper Cables XL (#18587)"
    { 11750575, 18588 }, // "Craftsanity Item: Ez-Thro Dynamite II (#18588)"
    { 11750576, 18594 }, // "Craftsanity Item: Powerful Seaforium Charge (#18594)"
    { 11750577, 18631 }, // "Craftsanity Item: Truesilver Transformer (#18631)"
    { 11750578, 18634 }, // "Craftsanity Item: Gyrofreeze Ice Reflector (#18634)"
    { 11750579, 18637 }, // "Craftsanity Item: Major Recombobulator (#18637)"
    { 11750580, 18638 }, // "Craftsanity Item: Hyper-Radiant Flame Reflector (#18638)"
    { 11750581, 18639 }, // "Craftsanity Item: Ultra-Flash Shadow Reflector (#18639)"
    { 11750582, 18645 }, // "Craftsanity Item: Gnomish Alarm-o-Bot (#18645)"
    { 11750583, 18660 }, // "Craftsanity Item: World Enlarger (#18660)"
    { 11750584, 18662 }, // "Craftsanity Item: Heavy Leather Ball (#18662)"
    { 11750585, 18948 }, // "Craftsanity Item: Barbaric Bracers (#18948)"
    { 11750586, 19026 }, // "Craftsanity Item: Snake Burst Firework (#19026)"
    { 11750587, 19043 }, // "Craftsanity Item: Heavy Timbermaw Belt (#19043)"
    { 11750588, 19044 }, // "Craftsanity Item: Might of the Timbermaw (#19044)"
    { 11750589, 19047 }, // "Craftsanity Item: Wisdom of the Timbermaw (#19047)"
    { 11750590, 19048 }, // "Craftsanity Item: Heavy Timbermaw Boots (#19048)"
    { 11750591, 19049 }, // "Craftsanity Item: Timbermaw Brawlers (#19049)"
    { 11750592, 19050 }, // "Craftsanity Item: Mantle of the Timbermaw (#19050)"
    { 11750593, 19051 }, // "Craftsanity Item: Girdle of the Dawn (#19051)"
    { 11750594, 19052 }, // "Craftsanity Item: Dawn Treaders (#19052)"
    { 11750595, 19056 }, // "Craftsanity Item: Argent Boots (#19056)"
    { 11750596, 19057 }, // "Craftsanity Item: Gloves of the Dawn (#19057)"
    { 11750597, 19058 }, // "Craftsanity Item: Golden Mantle of the Dawn (#19058)"
    { 11750598, 19059 }, // "Craftsanity Item: Argent Shoulders (#19059)"
    { 11750599, 19148 }, // "Craftsanity Item: Dark Iron Helm (#19148)"
    { 11750600, 19149 }, // "Craftsanity Item: Lava Belt (#19149)"
    { 11750601, 19156 }, // "Craftsanity Item: Flarecore Robe (#19156)"
    { 11750602, 19157 }, // "Craftsanity Item: Chromatic Gauntlets (#19157)"
    { 11750603, 19162 }, // "Craftsanity Item: Corehound Belt (#19162)"
    { 11750604, 19163 }, // "Craftsanity Item: Molten Belt (#19163)"
    { 11750605, 19164 }, // "Craftsanity Item: Dark Iron Gauntlets (#19164)"
    { 11750606, 19165 }, // "Craftsanity Item: Flarecore Leggings (#19165)"
    { 11750607, 19166 }, // "Craftsanity Item: Black Amnesty (#19166)"
    { 11750608, 19167 }, // "Craftsanity Item: Blackfury (#19167)"
    { 11750609, 19168 }, // "Craftsanity Item: Blackguard (#19168)"
    { 11750610, 19169 }, // "Craftsanity Item: Nightfall (#19169)"
    { 11750611, 19170 }, // "Craftsanity Item: Ebon Hand (#19170)"
    { 11750612, 19440 }, // "Craftsanity Item: Powerful Anti-Venom (#19440)"
    { 11750613, 19682 }, // "Craftsanity Item: Bloodvine Vest (#19682)"
    { 11750614, 19683 }, // "Craftsanity Item: Bloodvine Leggings (#19683)"
    { 11750615, 19684 }, // "Craftsanity Item: Bloodvine Boots (#19684)"
    { 11750616, 19685 }, // "Craftsanity Item: Primal Batskin Jerkin (#19685)"
    { 11750617, 19686 }, // "Craftsanity Item: Primal Batskin Gloves (#19686)"
    { 11750618, 19687 }, // "Craftsanity Item: Primal Batskin Bracers (#19687)"
    { 11750619, 19688 }, // "Craftsanity Item: Blood Tiger Breastplate (#19688)"
    { 11750620, 19689 }, // "Craftsanity Item: Blood Tiger Shoulders (#19689)"
    { 11750621, 19690 }, // "Craftsanity Item: Bloodsoul Breastplate (#19690)"
    { 11750622, 19691 }, // "Craftsanity Item: Bloodsoul Shoulders (#19691)"
    { 11750623, 19692 }, // "Craftsanity Item: Bloodsoul Gauntlets (#19692)"
    { 11750624, 19693 }, // "Craftsanity Item: Darksoul Breastplate (#19693)"
    { 11750625, 19694 }, // "Craftsanity Item: Darksoul Leggings (#19694)"
    { 11750626, 19695 }, // "Craftsanity Item: Darksoul Shoulders (#19695)"
    { 11750627, 19998 }, // "Craftsanity Item: Bloodvine Lens (#19998)"
    { 11750628, 19999 }, // "Craftsanity Item: Bloodvine Goggles (#19999)"
    { 11750629, 20002 }, // "Craftsanity Item: Greater Dreamless Sleep Potion (#20002)"
    { 11750630, 20004 }, // "Craftsanity Item: Mighty Troll's Blood Elixir (#20004)"
    { 11750631, 20007 }, // "Craftsanity Item: Mageblood Elixir (#20007)"
    { 11750632, 20008 }, // "Craftsanity Item: Living Action Potion (#20008)"
    { 11750633, 20039 }, // "Craftsanity Item: Dark Iron Boots (#20039)"
    { 11750634, 20074 }, // "Craftsanity Item: Heavy Crocolisk Stew (#20074)"
    { 11750635, 20380 }, // "Craftsanity Item: Dreamscale Breastplate (#20380)"
    { 11750636, 20475 }, // "Craftsanity Item: Adamantite Arrow Maker (#20475)"
    { 11750637, 20476 }, // "Craftsanity Item: Sandstalker Bracers (#20476)"
    { 11750638, 20477 }, // "Craftsanity Item: Sandstalker Gauntlets (#20477)"
    { 11750639, 20478 }, // "Craftsanity Item: Sandstalker Breastplate (#20478)"
    { 11750640, 20479 }, // "Craftsanity Item: Spitfire Breastplate (#20479)"
    { 11750641, 20480 }, // "Craftsanity Item: Spitfire Gauntlets (#20480)"
    { 11750642, 20481 }, // "Craftsanity Item: Spitfire Bracers (#20481)"
    { 11750643, 20537 }, // "Craftsanity Item: Runed Stygian Boots (#20537)"
    { 11750644, 20538 }, // "Craftsanity Item: Runed Stygian Leggings (#20538)"
    { 11750645, 20539 }, // "Craftsanity Item: Runed Stygian Belt (#20539)"
    { 11750646, 20549 }, // "Craftsanity Item: Darkrune Gauntlets (#20549)"
    { 11750647, 20550 }, // "Craftsanity Item: Darkrune Breastplate (#20550)"
    { 11750648, 20551 }, // "Craftsanity Item: Darkrune Helm (#20551)"
    { 11750649, 20575 }, // "Craftsanity Item: Black Whelp Tunic (#20575)"
    { 11750650, 20744 }, // "Craftsanity Item: Minor Wizard Oil (#20744)"
    { 11750651, 20745 }, // "Craftsanity Item: Minor Mana Oil (#20745)"
    { 11750652, 20746 }, // "Craftsanity Item: Lesser Wizard Oil (#20746)"
    { 11750653, 20747 }, // "Craftsanity Item: Lesser Mana Oil (#20747)"
    { 11750654, 20748 }, // "Craftsanity Item: Brilliant Mana Oil (#20748)"
    { 11750655, 20749 }, // "Craftsanity Item: Brilliant Wizard Oil (#20749)"
    { 11750656, 20750 }, // "Craftsanity Item: Wizard Oil (#20750)"
    { 11750657, 20830 }, // "Craftsanity Item: Amulet of the Moon (#20830)"
    { 11750658, 20831 }, // "Craftsanity Item: Heavy Golden Necklace of Battle (#20831)"
    { 11750659, 20833 }, // "Craftsanity Item: Wicked Moonstone Ring (#20833)"
    { 11750660, 20950 }, // "Craftsanity Item: Pendant of the Agate Shield (#20950)"
    { 11750661, 20954 }, // "Craftsanity Item: Heavy Iron Knuckles (#20954)"
    { 11750662, 20958 }, // "Craftsanity Item: Blazing Citrine Ring (#20958)"
    { 11750663, 20959 }, // "Craftsanity Item: The Jade Eye (#20959)"
    { 11750664, 20966 }, // "Craftsanity Item: Jade Pendant of Blasting (#20966)"
    { 11750665, 20967 }, // "Craftsanity Item: Citrine Pendant of Golden Healing (#20967)"
    { 11750666, 20969 }, // "Craftsanity Item: Ruby Crown of Restoration (#20969)"
    { 11750667, 21023 }, // "Craftsanity Item: Dirge's Kickin' Chimaerok Chops (#21023)"
    { 11750668, 21072 }, // "Craftsanity Item: Smoked Sagefish (#21072)"
    { 11750669, 21154 }, // "Craftsanity Item: Festival Dress (#21154)"
    { 11750670, 21217 }, // "Craftsanity Item: Sagefish Delight (#21217)"
    { 11750671, 21278 }, // "Craftsanity Item: Stormshroud Gloves (#21278)"
    { 11750672, 21340 }, // "Craftsanity Item: Soul Pouch (#21340)"
    { 11750673, 21342 }, // "Craftsanity Item: Core Felcloth Bag (#21342)"
    { 11750674, 21542 }, // "Craftsanity Item: Festival Suit (#21542)"
    { 11750675, 21546 }, // "Craftsanity Item: Elixir of Greater Firepower (#21546)"
    { 11750676, 21557 }, // "Craftsanity Item: Small Red Rocket (#21557)"
    { 11750677, 21558 }, // "Craftsanity Item: Small Blue Rocket (#21558)"
    { 11750678, 21559 }, // "Craftsanity Item: Small Green Rocket (#21559)"
    { 11750679, 21569 }, // "Craftsanity Item: Firework Launcher (#21569)"
    { 11750680, 21570 }, // "Craftsanity Item: Cluster Launcher (#21570)"
    { 11750681, 21571 }, // "Craftsanity Item: Blue Rocket Cluster (#21571)"
    { 11750682, 21574 }, // "Craftsanity Item: Green Rocket Cluster (#21574)"
    { 11750683, 21576 }, // "Craftsanity Item: Red Rocket Cluster (#21576)"
    { 11750684, 21589 }, // "Craftsanity Item: Large Blue Rocket (#21589)"
    { 11750685, 21590 }, // "Craftsanity Item: Large Green Rocket (#21590)"
    { 11750686, 21592 }, // "Craftsanity Item: Large Red Rocket (#21592)"
    { 11750687, 21714 }, // "Craftsanity Item: Large Blue Rocket Cluster (#21714)"
    { 11750688, 21716 }, // "Craftsanity Item: Large Green Rocket Cluster (#21716)"
    { 11750689, 21718 }, // "Craftsanity Item: Large Red Rocket Cluster (#21718)"
    { 11750690, 21753 }, // "Craftsanity Item: Gem Studded Band (#21753)"
    { 11750691, 21754 }, // "Craftsanity Item: The Aquamarine Ward (#21754)"
    { 11750692, 21756 }, // "Craftsanity Item: Figurine - Golden Hare (#21756)"
    { 11750693, 21758 }, // "Craftsanity Item: Figurine - Black Pearl Panther (#21758)"
    { 11750694, 21760 }, // "Craftsanity Item: Figurine - Truesilver Crab (#21760)"
    { 11750695, 21763 }, // "Craftsanity Item: Figurine - Truesilver Boar (#21763)"
    { 11750696, 21766 }, // "Craftsanity Item: Opal Necklace of Impact (#21766)"
    { 11750697, 21769 }, // "Craftsanity Item: Figurine - Ruby Serpent (#21769)"
    { 11750698, 21774 }, // "Craftsanity Item: Emerald Crown of Destruction (#21774)"
    { 11750699, 21777 }, // "Craftsanity Item: Figurine - Emerald Owl (#21777)"
    { 11750700, 21778 }, // "Craftsanity Item: Ring of Bitter Shadows (#21778)"
    { 11750701, 21784 }, // "Craftsanity Item: Figurine - Black Diamond Crab (#21784)"
    { 11750702, 21789 }, // "Craftsanity Item: Figurine - Dark Iron Scorpid (#21789)"
    { 11750703, 21792 }, // "Craftsanity Item: Necklace of the Diamond Tower (#21792)"
    { 11750704, 21842 }, // "Craftsanity Item: Bolt of Imbued Netherweave (#21842)"
    { 11750705, 21843 }, // "Craftsanity Item: Imbued Netherweave Bag (#21843)"
    { 11750706, 21844 }, // "Craftsanity Item: Bolt of Soulcloth (#21844)"
    { 11750707, 21845 }, // "Craftsanity Item: Primal Mooncloth (#21845)"
    { 11750708, 21846 }, // "Craftsanity Item: Spellfire Belt (#21846)"
    { 11750709, 21847 }, // "Craftsanity Item: Spellfire Gloves (#21847)"
    { 11750710, 21848 }, // "Craftsanity Item: Spellfire Robe (#21848)"
    { 11750711, 21854 }, // "Craftsanity Item: Netherweave Robe (#21854)"
    { 11750712, 21855 }, // "Craftsanity Item: Netherweave Tunic (#21855)"
    { 11750713, 21858 }, // "Craftsanity Item: Spellfire Bag (#21858)"
    { 11750714, 21859 }, // "Craftsanity Item: Imbued Netherweave Pants (#21859)"
    { 11750715, 21860 }, // "Craftsanity Item: Imbued Netherweave Boots (#21860)"
    { 11750716, 21861 }, // "Craftsanity Item: Imbued Netherweave Robe (#21861)"
    { 11750717, 21862 }, // "Craftsanity Item: Imbued Netherweave Tunic (#21862)"
    { 11750718, 21863 }, // "Craftsanity Item: Soulcloth Gloves (#21863)"
    { 11750719, 21864 }, // "Craftsanity Item: Soulcloth Shoulders (#21864)"
    { 11750720, 21865 }, // "Craftsanity Item: Soulcloth Vest (#21865)"
    { 11750721, 21866 }, // "Craftsanity Item: Arcanoweave Bracers (#21866)"
    { 11750722, 21867 }, // "Craftsanity Item: Arcanoweave Boots (#21867)"
    { 11750723, 21868 }, // "Craftsanity Item: Arcanoweave Robe (#21868)"
    { 11750724, 21869 }, // "Craftsanity Item: Frozen Shadoweave Shoulders (#21869)"
    { 11750725, 21870 }, // "Craftsanity Item: Frozen Shadoweave Boots (#21870)"
    { 11750726, 21871 }, // "Craftsanity Item: Frozen Shadoweave Robe (#21871)"
    { 11750727, 21872 }, // "Craftsanity Item: Ebon Shadowbag (#21872)"
    { 11750728, 21873 }, // "Craftsanity Item: Primal Mooncloth Belt (#21873)"
    { 11750729, 21874 }, // "Craftsanity Item: Primal Mooncloth Shoulders (#21874)"
    { 11750730, 21875 }, // "Craftsanity Item: Primal Mooncloth Robe (#21875)"
    { 11750731, 21876 }, // "Craftsanity Item: Primal Mooncloth Bag (#21876)"
    { 11750732, 21884 }, // "Craftsanity Item: Primal Fire (#21884)"
    { 11750733, 21885 }, // "Craftsanity Item: Primal Water (#21885)"
    { 11750734, 21990 }, // "Craftsanity Item: Netherweave Bandage (#21990)"
    { 11750735, 21991 }, // "Craftsanity Item: Heavy Netherweave Bandage (#21991)"
    { 11750736, 22018 }, // "Craftsanity Item: Conjured Glacier Water (#22018)"
    { 11750737, 22019 }, // "Craftsanity Item: Conjured Croissant (#22019)"
    { 11750738, 22044 }, // "Craftsanity Item: Mana Emerald (#22044)"
    { 11750739, 22116 }, // "Craftsanity Item: Master Soulstone (#22116)"
    { 11750740, 22191 }, // "Craftsanity Item: Obsidian Mail Tunic (#22191)"
    { 11750741, 22194 }, // "Craftsanity Item: Black Grasp of the Destroyer (#22194)"
    { 11750742, 22195 }, // "Craftsanity Item: Light Obsidian Belt (#22195)"
    { 11750743, 22196 }, // "Craftsanity Item: Thick Obsidian Breastplate (#22196)"
    { 11750744, 22197 }, // "Craftsanity Item: Heavy Obsidian Belt (#22197)"
    { 11750745, 22198 }, // "Craftsanity Item: Jagged Obsidian Shield (#22198)"
    { 11750746, 22246 }, // "Craftsanity Item: Enchanted Mageweave Pouch (#22246)"
    { 11750747, 22248 }, // "Craftsanity Item: Enchanted Runecloth Bag (#22248)"
    { 11750748, 22249 }, // "Craftsanity Item: Big Bag of Enchantment (#22249)"
    { 11750749, 22251 }, // "Craftsanity Item: Cenarion Herb Bag (#22251)"
    { 11750750, 22252 }, // "Craftsanity Item: Satchel of Cenarius (#22252)"
    { 11750751, 22383 }, // "Craftsanity Item: Sageblade (#22383)"
    { 11750752, 22384 }, // "Craftsanity Item: Persuader (#22384)"
    { 11750753, 22385 }, // "Craftsanity Item: Titanic Leggings (#22385)"
    { 11750754, 22449 }, // "Craftsanity Item: Large Prismatic Shard (#22449)"
    { 11750755, 22451 }, // "Craftsanity Item: Primal Air (#22451)"
    { 11750756, 22452 }, // "Craftsanity Item: Primal Earth (#22452)"
    { 11750757, 22462 }, // "Craftsanity Item: Runed Adamantite Rod (#22462)"
    { 11750758, 22463 }, // "Craftsanity Item: Runed Eternium Rod (#22463)"
    { 11750759, 22521 }, // "Craftsanity Item: Superior Mana Oil (#22521)"
    { 11750760, 22522 }, // "Craftsanity Item: Superior Wizard Oil (#22522)"
    { 11750761, 22645 }, // "Craftsanity Item: Crunchy Spider Surprise (#22645)"
    { 11750762, 22660 }, // "Craftsanity Item: Gaea's Embrace (#22660)"
    { 11750763, 22728 }, // "Craftsanity Item: Steam Tonk Controller (#22728)"
    { 11750764, 22756 }, // "Craftsanity Item: Sylvan Vest (#22756)"
    { 11750765, 22757 }, // "Craftsanity Item: Sylvan Crown (#22757)"
    { 11750766, 22758 }, // "Craftsanity Item: Sylvan Shoulders (#22758)"
    { 11750767, 22759 }, // "Craftsanity Item: Bramblewood Helm (#22759)"
    { 11750768, 22760 }, // "Craftsanity Item: Bramblewood Boots (#22760)"
    { 11750769, 22761 }, // "Craftsanity Item: Bramblewood Belt (#22761)"
    { 11750770, 22762 }, // "Craftsanity Item: Ironvine Breastplate (#22762)"
    { 11750771, 22763 }, // "Craftsanity Item: Ironvine Gloves (#22763)"
    { 11750772, 22764 }, // "Craftsanity Item: Ironvine Belt (#22764)"
    { 11750773, 22823 }, // "Craftsanity Item: Elixir of Camouflage (#22823)"
    { 11750774, 22826 }, // "Craftsanity Item: Sneaking Potion (#22826)"
    { 11750775, 22827 }, // "Craftsanity Item: Elixir of Major Frost Power (#22827)"
    { 11750776, 22828 }, // "Craftsanity Item: Insane Strength Potion (#22828)"
    { 11750777, 22830 }, // "Craftsanity Item: Elixir of the Searching Eye (#22830)"
    { 11750778, 22831 }, // "Craftsanity Item: Elixir of Major Agility (#22831)"
    { 11750779, 22832 }, // "Craftsanity Item: Super Mana Potion (#22832)"
    { 11750780, 22833 }, // "Craftsanity Item: Elixir of Major Firepower (#22833)"
    { 11750781, 22834 }, // "Craftsanity Item: Elixir of Major Defense (#22834)"
    { 11750782, 22835 }, // "Craftsanity Item: Elixir of Major Shadow Power (#22835)"
    { 11750783, 22836 }, // "Craftsanity Item: Major Dreamless Sleep Potion (#22836)"
    { 11750784, 22837 }, // "Craftsanity Item: Heroic Potion (#22837)"
    { 11750785, 22838 }, // "Craftsanity Item: Haste Potion (#22838)"
    { 11750786, 22839 }, // "Craftsanity Item: Destruction Potion (#22839)"
    { 11750787, 22840 }, // "Craftsanity Item: Elixir of Major Mageblood (#22840)"
    { 11750788, 22841 }, // "Craftsanity Item: Major Fire Protection Potion (#22841)"
    { 11750789, 22842 }, // "Craftsanity Item: Major Frost Protection Potion (#22842)"
    { 11750790, 22844 }, // "Craftsanity Item: Major Nature Protection Potion (#22844)"
    { 11750791, 22845 }, // "Craftsanity Item: Major Arcane Protection Potion (#22845)"
    { 11750792, 22846 }, // "Craftsanity Item: Major Shadow Protection Potion (#22846)"
    { 11750793, 22847 }, // "Craftsanity Item: Major Holy Protection Potion (#22847)"
    { 11750794, 22848 }, // "Craftsanity Item: Elixir of Empowerment (#22848)"
    { 11750795, 22849 }, // "Craftsanity Item: Ironshield Potion (#22849)"
    { 11750796, 22871 }, // "Craftsanity Item: Shrouding Potion (#22871)"
    { 11750797, 22895 }, // "Craftsanity Item: Conjured Cinnamon Roll (#22895)"
    { 11750798, 23094 }, // "Craftsanity Item: Teardrop Blood Garnet (#23094)"
    { 11750799, 23095 }, // "Craftsanity Item: Bold Blood Garnet (#23095)"
    { 11750800, 23096 }, // "Craftsanity Item: Runed Blood Garnet (#23096)"
    { 11750801, 23097 }, // "Craftsanity Item: Delicate Blood Garnet (#23097)"
    { 11750802, 23098 }, // "Craftsanity Item: Inscribed Flame Spessarite (#23098)"
    { 11750803, 23099 }, // "Craftsanity Item: Luminous Flame Spessarite (#23099)"
    { 11750804, 23100 }, // "Craftsanity Item: Glinting Flame Spessarite (#23100)"
    { 11750805, 23101 }, // "Craftsanity Item: Potent Flame Spessarite (#23101)"
    { 11750806, 23103 }, // "Craftsanity Item: Radiant Deep Peridot (#23103)"
    { 11750807, 23104 }, // "Craftsanity Item: Jagged Deep Peridot (#23104)"
    { 11750808, 23105 }, // "Craftsanity Item: Enduring Deep Peridot (#23105)"
    { 11750809, 23106 }, // "Craftsanity Item: Dazzling Deep Peridot (#23106)"
    { 11750810, 23108 }, // "Craftsanity Item: Glowing Shadow Draenite (#23108)"
    { 11750811, 23109 }, // "Craftsanity Item: Royal Shadow Draenite (#23109)"
    { 11750812, 23110 }, // "Craftsanity Item: Shifting Shadow Draenite (#23110)"
    { 11750813, 23111 }, // "Craftsanity Item: Sovereign Shadow Draenite (#23111)"
    { 11750814, 23113 }, // "Craftsanity Item: Brilliant Golden Draenite (#23113)"
    { 11750815, 23114 }, // "Craftsanity Item: Gleaming Golden Draenite (#23114)"
    { 11750816, 23115 }, // "Craftsanity Item: Thick Golden Draenite (#23115)"
    { 11750817, 23116 }, // "Craftsanity Item: Rigid Golden Draenite (#23116)"
    { 11750818, 23118 }, // "Craftsanity Item: Solid Azure Moonstone (#23118)"
    { 11750819, 23119 }, // "Craftsanity Item: Sparkling Azure Moonstone (#23119)"
    { 11750820, 23120 }, // "Craftsanity Item: Stormy Azure Moonstone (#23120)"
    { 11750821, 23121 }, // "Craftsanity Item: Lustrous Azure Moonstone (#23121)"
    { 11750822, 23502 }, // "Craftsanity Item: Adamantite Maul (#23502)"
    { 11750823, 23503 }, // "Craftsanity Item: Adamantite Cleaver (#23503)"
    { 11750824, 23504 }, // "Craftsanity Item: Adamantite Dagger (#23504)"
    { 11750825, 23505 }, // "Craftsanity Item: Adamantite Rapier (#23505)"
    { 11750826, 23506 }, // "Craftsanity Item: Adamantite Plate Bracers (#23506)"
    { 11750827, 23507 }, // "Craftsanity Item: Adamantite Breastplate (#23507)"
    { 11750828, 23508 }, // "Craftsanity Item: Adamantite Plate Gloves (#23508)"
    { 11750829, 23509 }, // "Craftsanity Item: Enchanted Adamantite Breastplate (#23509)"
    { 11750830, 23510 }, // "Craftsanity Item: Enchanted Adamantite Belt (#23510)"
    { 11750831, 23511 }, // "Craftsanity Item: Enchanted Adamantite Boots (#23511)"
    { 11750832, 23512 }, // "Craftsanity Item: Enchanted Adamantite Leggings (#23512)"
    { 11750833, 23513 }, // "Craftsanity Item: Flamebane Breastplate (#23513)"
    { 11750834, 23514 }, // "Craftsanity Item: Flamebane Gloves (#23514)"
    { 11750835, 23515 }, // "Craftsanity Item: Flamebane Bracers (#23515)"
    { 11750836, 23516 }, // "Craftsanity Item: Flamebane Helm (#23516)"
    { 11750837, 23517 }, // "Craftsanity Item: Felsteel Gloves (#23517)"
    { 11750838, 23518 }, // "Craftsanity Item: Felsteel Leggings (#23518)"
    { 11750839, 23519 }, // "Craftsanity Item: Felsteel Helm (#23519)"
    { 11750840, 23520 }, // "Craftsanity Item: Ragesteel Gloves (#23520)"
    { 11750841, 23521 }, // "Craftsanity Item: Ragesteel Helm (#23521)"
    { 11750842, 23522 }, // "Craftsanity Item: Ragesteel Breastplate (#23522)"
    { 11750843, 23523 }, // "Craftsanity Item: Khorium Pants (#23523)"
    { 11750844, 23524 }, // "Craftsanity Item: Khorium Belt (#23524)"
    { 11750845, 23525 }, // "Craftsanity Item: Khorium Boots (#23525)"
    { 11750846, 23526 }, // "Craftsanity Item: Swiftsteel Gloves (#23526)"
    { 11750847, 23527 }, // "Craftsanity Item: Earthpeace Breastplate (#23527)"
    { 11750848, 23529 }, // "Craftsanity Item: Adamantite Sharpening Stone (#23529)"
    { 11750849, 23530 }, // "Craftsanity Item: Felsteel Shield Spike (#23530)"
    { 11750850, 23531 }, // "Craftsanity Item: Felfury Gauntlets (#23531)"
    { 11750851, 23532 }, // "Craftsanity Item: Gauntlets of the Iron Tower (#23532)"
    { 11750852, 23533 }, // "Craftsanity Item: Steelgrip Gauntlets (#23533)"
    { 11750853, 23534 }, // "Craftsanity Item: Storm Helm (#23534)"
    { 11750854, 23535 }, // "Craftsanity Item: Helm of the Stalwart Defender (#23535)"
    { 11750855, 23536 }, // "Craftsanity Item: Oathkeeper's Helm (#23536)"
    { 11750856, 23537 }, // "Craftsanity Item: Black Felsteel Bracers (#23537)"
    { 11750857, 23538 }, // "Craftsanity Item: Bracers of the Green Fortress (#23538)"
    { 11750858, 23539 }, // "Craftsanity Item: Blessed Bracers (#23539)"
    { 11750859, 23540 }, // "Craftsanity Item: Felsteel Longblade (#23540)"
    { 11750860, 23541 }, // "Craftsanity Item: Khorium Champion (#23541)"
    { 11750861, 23542 }, // "Craftsanity Item: Fel Edged Battleaxe (#23542)"
    { 11750862, 23543 }, // "Craftsanity Item: Felsteel Reaper (#23543)"
    { 11750863, 23544 }, // "Craftsanity Item: Runic Hammer (#23544)"
    { 11750864, 23546 }, // "Craftsanity Item: Fel Hardened Maul (#23546)"
    { 11750865, 23554 }, // "Craftsanity Item: Eternium Runed Blade (#23554)"
    { 11750866, 23555 }, // "Craftsanity Item: Dirge (#23555)"
    { 11750867, 23556 }, // "Craftsanity Item: Hand of Eternity (#23556)"
    { 11750868, 23571 }, // "Craftsanity Item: Primal Might (#23571)"
    { 11750869, 23575 }, // "Craftsanity Item: Lesser Ward of Shielding (#23575)"
    { 11750870, 23576 }, // "Craftsanity Item: Greater Ward of Shielding (#23576)"
    { 11750871, 23746 }, // "Craftsanity Item: Adamantite Rifle (#23746)"
    { 11750872, 23747 }, // "Craftsanity Item: Felsteel Boomstick (#23747)"
    { 11750873, 23748 }, // "Craftsanity Item: Ornate Khorium Rifle (#23748)"
    { 11750874, 23758 }, // "Craftsanity Item: Cogspinner Goggles (#23758)"
    { 11750875, 23761 }, // "Craftsanity Item: Power Amplification Goggles (#23761)"
    { 11750876, 23762 }, // "Craftsanity Item: Ultra-Spectropic Detection Goggles (#23762)"
    { 11750877, 23763 }, // "Craftsanity Item: Hyper-Vision Goggles (#23763)"
    { 11750878, 23764 }, // "Craftsanity Item: Adamantite Scope (#23764)"
    { 11750879, 23765 }, // "Craftsanity Item: Khorium Scope (#23765)"
    { 11750880, 23766 }, // "Craftsanity Item: Stabilized Eternium Scope (#23766)"
    { 11750881, 23767 }, // "Craftsanity Item: Crashin' Thrashin' Robot (#23767)"
    { 11750882, 23768 }, // "Craftsanity Item: White Smoke Flare (#23768)"
    { 11750883, 23771 }, // "Craftsanity Item: Green Smoke Flare (#23771)"
    { 11750884, 23774 }, // "Craftsanity Item: Fel Iron Toolbox (#23774)"
    { 11750885, 23775 }, // "Craftsanity Item: Titanium Toolbox (#23775)"
    { 11750886, 23793 }, // "Craftsanity Item: Heavy Knothide Leather (#23793)"
    { 11750887, 23819 }, // "Craftsanity Item: Elemental Seaforium Charge (#23819)"
    { 11750888, 23820 }, // "Craftsanity Item: Critter Enlarger (#23820)"
    { 11750889, 23821 }, // "Craftsanity Item: Zapthrottle Mote Extractor (#23821)"
    { 11750890, 23824 }, // "Craftsanity Item: Rocket Boots Xtreme (#23824)"
    { 11750891, 23840 }, // "Craftsanity Item: Remote Mail Terminal (#23840)"
    { 11750892, 24027 }, // "Craftsanity Item: Bold Living Ruby (#24027)"
    { 11750893, 24028 }, // "Craftsanity Item: Delicate Living Ruby (#24028)"
    { 11750894, 24029 }, // "Craftsanity Item: Teardrop Living Ruby (#24029)"
    { 11750895, 24030 }, // "Craftsanity Item: Runed Living Ruby (#24030)"
    { 11750896, 24031 }, // "Craftsanity Item: Bright Living Ruby (#24031)"
    { 11750897, 24032 }, // "Craftsanity Item: Subtle Living Ruby (#24032)"
    { 11750898, 24033 }, // "Craftsanity Item: Solid Star of Elune (#24033)"
    { 11750899, 24035 }, // "Craftsanity Item: Sparkling Star of Elune (#24035)"
    { 11750900, 24036 }, // "Craftsanity Item: Flashing Living Ruby (#24036)"
    { 11750901, 24037 }, // "Craftsanity Item: Lustrous Star of Elune (#24037)"
    { 11750902, 24039 }, // "Craftsanity Item: Stormy Star of Elune (#24039)"
    { 11750903, 24047 }, // "Craftsanity Item: Brilliant Dawnstone (#24047)"
    { 11750904, 24048 }, // "Craftsanity Item: Smooth Dawnstone (#24048)"
    { 11750905, 24050 }, // "Craftsanity Item: Gleaming Dawnstone (#24050)"
    { 11750906, 24051 }, // "Craftsanity Item: Rigid Dawnstone (#24051)"
    { 11750907, 24052 }, // "Craftsanity Item: Thick Dawnstone (#24052)"
    { 11750908, 24053 }, // "Craftsanity Item: Mystic Dawnstone (#24053)"
    { 11750909, 24054 }, // "Craftsanity Item: Sovereign Nightseye (#24054)"
    { 11750910, 24055 }, // "Craftsanity Item: Shifting Nightseye (#24055)"
    { 11750911, 24056 }, // "Craftsanity Item: Glowing Nightseye (#24056)"
    { 11750912, 24057 }, // "Craftsanity Item: Royal Nightseye (#24057)"
    { 11750913, 24058 }, // "Craftsanity Item: Inscribed Noble Topaz (#24058)"
    { 11750914, 24059 }, // "Craftsanity Item: Potent Noble Topaz (#24059)"
    { 11750915, 24060 }, // "Craftsanity Item: Luminous Noble Topaz (#24060)"
    { 11750916, 24061 }, // "Craftsanity Item: Glinting Noble Topaz (#24061)"
    { 11750917, 24062 }, // "Craftsanity Item: Enduring Talasite (#24062)"
    { 11750918, 24065 }, // "Craftsanity Item: Dazzling Talasite (#24065)"
    { 11750919, 24066 }, // "Craftsanity Item: Radiant Talasite (#24066)"
    { 11750920, 24067 }, // "Craftsanity Item: Jagged Talasite (#24067)"
    { 11750921, 24079 }, // "Craftsanity Item: Khorium Band of Shadows (#24079)"
    { 11750922, 24080 }, // "Craftsanity Item: Khorium Band of Frost (#24080)"
    { 11750923, 24082 }, // "Craftsanity Item: Khorium Inferno Band (#24082)"
    { 11750924, 24085 }, // "Craftsanity Item: Khorium Band of Leaves (#24085)"
    { 11750925, 24086 }, // "Craftsanity Item: Arcane Khorium Band (#24086)"
    { 11750926, 24087 }, // "Craftsanity Item: Heavy Felsteel Ring (#24087)"
    { 11750927, 24088 }, // "Craftsanity Item: Delicate Eternium Ring (#24088)"
    { 11750928, 24089 }, // "Craftsanity Item: Blazing Eternium Band (#24089)"
    { 11750929, 24092 }, // "Craftsanity Item: Pendant of Frozen Flame (#24092)"
    { 11750930, 24093 }, // "Craftsanity Item: Pendant of Thawing (#24093)"
    { 11750931, 24095 }, // "Craftsanity Item: Pendant of Withering (#24095)"
    { 11750932, 24097 }, // "Craftsanity Item: Pendant of Shadow's End (#24097)"
    { 11750933, 24098 }, // "Craftsanity Item: Pendant of the Null Rune (#24098)"
    { 11750934, 24105 }, // "Craftsanity Item: Roasted Moongraze Tenderloin (#24105)"
    { 11750935, 24106 }, // "Craftsanity Item: Thick Felsteel Necklace (#24106)"
    { 11750936, 24110 }, // "Craftsanity Item: Living Ruby Pendant (#24110)"
    { 11750937, 24114 }, // "Craftsanity Item: Braided Eternium Chain (#24114)"
    { 11750938, 24116 }, // "Craftsanity Item: Eye of the Night (#24116)"
    { 11750939, 24117 }, // "Craftsanity Item: Embrace of the Dawn (#24117)"
    { 11750940, 24121 }, // "Craftsanity Item: Chain of the Twilight Owl (#24121)"
    { 11750941, 24122 }, // "Craftsanity Item: Coronet of Verdant Flame (#24122)"
    { 11750942, 24123 }, // "Craftsanity Item: Circlet of Arcane Might (#24123)"
    { 11750943, 24124 }, // "Craftsanity Item: Figurine - Felsteel Boar (#24124)"
    { 11750944, 24125 }, // "Craftsanity Item: Figurine - Dawnstone Crab (#24125)"
    { 11750945, 24126 }, // "Craftsanity Item: Figurine - Living Ruby Serpent (#24126)"
    { 11750946, 24127 }, // "Craftsanity Item: Figurine - Talasite Owl (#24127)"
    { 11750947, 24128 }, // "Craftsanity Item: Figurine - Nightseye Panther (#24128)"
    { 11750948, 24249 }, // "Craftsanity Item: Unyielding Bracers (#24249)"
    { 11750949, 24250 }, // "Craftsanity Item: Bracers of Havok (#24250)"
    { 11750950, 24251 }, // "Craftsanity Item: Blackstrike Bracers (#24251)"
    { 11750951, 24252 }, // "Craftsanity Item: Cloak of the Black Void (#24252)"
    { 11750952, 24253 }, // "Craftsanity Item: Cloak of Eternity (#24253)"
    { 11750953, 24254 }, // "Craftsanity Item: White Remedy Cape (#24254)"
    { 11750954, 24255 }, // "Craftsanity Item: Unyielding Girdle (#24255)"
    { 11750955, 24256 }, // "Craftsanity Item: Girdle of Ruination (#24256)"
    { 11750956, 24257 }, // "Craftsanity Item: Black Belt of Knowledge (#24257)"
    { 11750957, 24258 }, // "Craftsanity Item: Resolute Cape (#24258)"
    { 11750958, 24259 }, // "Craftsanity Item: Vengeance Wrap (#24259)"
    { 11750959, 24260 }, // "Craftsanity Item: Manaweave Cloak (#24260)"
    { 11750960, 24261 }, // "Craftsanity Item: Whitemend Pants (#24261)"
    { 11750961, 24262 }, // "Craftsanity Item: Spellstrike Pants (#24262)"
    { 11750962, 24263 }, // "Craftsanity Item: Battlecast Pants (#24263)"
    { 11750963, 24264 }, // "Craftsanity Item: Whitemend Hood (#24264)"
    { 11750964, 24266 }, // "Craftsanity Item: Spellstrike Hood (#24266)"
    { 11750965, 24267 }, // "Craftsanity Item: Battlecast Hood (#24267)"
    { 11750966, 24269 }, // "Craftsanity Item: Heavy Netherweave Net (#24269)"
    { 11750967, 24270 }, // "Craftsanity Item: Bag of Jewels (#24270)"
    { 11750968, 24271 }, // "Craftsanity Item: Spellcloth (#24271)"
    { 11750969, 24272 }, // "Craftsanity Item: Shadowcloth (#24272)"
    { 11750970, 24273 }, // "Craftsanity Item: Mystic Spellthread (#24273)"
    { 11750971, 24274 }, // "Craftsanity Item: Runic Spellthread (#24274)"
    { 11750972, 24275 }, // "Craftsanity Item: Silver Spellthread (#24275)"
    { 11750973, 24276 }, // "Craftsanity Item: Golden Spellthread (#24276)"
    { 11750974, 25521 }, // "Craftsanity Item: Greater Rune of Warding (#25521)"
    { 11750975, 25651 }, // "Craftsanity Item: Vindicator's Armor Kit (#25651)"
    { 11750976, 25652 }, // "Craftsanity Item: Magister's Armor Kit (#25652)"
    { 11750977, 25653 }, // "Craftsanity Item: Riding Crop (#25653)"
    { 11750978, 25679 }, // "Craftsanity Item: Comfortable Insoles (#25679)"
    { 11750979, 25680 }, // "Craftsanity Item: Stylin' Purple Hat (#25680)"
    { 11750980, 25681 }, // "Craftsanity Item: Stylin' Adventure Hat (#25681)"
    { 11750981, 25682 }, // "Craftsanity Item: Stylin' Jungle Hat (#25682)"
    { 11750982, 25683 }, // "Craftsanity Item: Stylin' Crimson Hat (#25683)"
    { 11750983, 25685 }, // "Craftsanity Item: Fel Leather Gloves (#25685)"
    { 11750984, 25686 }, // "Craftsanity Item: Fel Leather Boots (#25686)"
    { 11750985, 25687 }, // "Craftsanity Item: Fel Leather Leggings (#25687)"
    { 11750986, 25689 }, // "Craftsanity Item: Heavy Clefthoof Vest (#25689)"
    { 11750987, 25690 }, // "Craftsanity Item: Heavy Clefthoof Leggings (#25690)"
    { 11750988, 25691 }, // "Craftsanity Item: Heavy Clefthoof Boots (#25691)"
    { 11750989, 25692 }, // "Craftsanity Item: Netherfury Leggings (#25692)"
    { 11750990, 25693 }, // "Craftsanity Item: Netherfury Boots (#25693)"
    { 11750991, 25694 }, // "Craftsanity Item: Netherfury Belt (#25694)"
    { 11750992, 25695 }, // "Craftsanity Item: Felstalker Belt (#25695)"
    { 11750993, 25696 }, // "Craftsanity Item: Felstalker Breastplate (#25696)"
    { 11750994, 25697 }, // "Craftsanity Item: Felstalker Bracers (#25697)"
    { 11750995, 25844 }, // "Craftsanity Item: Adamantite Rod (#25844)"
    { 11750996, 25845 }, // "Craftsanity Item: Eternium Rod (#25845)"
    { 11750997, 25867 }, // "Craftsanity Item: Earthstorm Diamond (#25867)"
    { 11750998, 25868 }, // "Craftsanity Item: Skyfire Diamond (#25868)"
    { 11750999, 25886 }, // "Craftsanity Item: Purple Smoke Flare (#25886)"
    { 11751000, 25890 }, // "Craftsanity Item: Destructive Skyfire Diamond (#25890)"
    { 11751001, 25893 }, // "Craftsanity Item: Mystical Skyfire Diamond (#25893)"
    { 11751002, 25894 }, // "Craftsanity Item: Swift Skyfire Diamond (#25894)"
    { 11751003, 25895 }, // "Craftsanity Item: Enigmatic Skyfire Diamond (#25895)"
    { 11751004, 25896 }, // "Craftsanity Item: Powerful Earthstorm Diamond (#25896)"
    { 11751005, 25897 }, // "Craftsanity Item: Bracing Earthstorm Diamond (#25897)"
    { 11751006, 25898 }, // "Craftsanity Item: Tenacious Earthstorm Diamond (#25898)"
    { 11751007, 25899 }, // "Craftsanity Item: Brutal Earthstorm Diamond (#25899)"
    { 11751008, 25901 }, // "Craftsanity Item: Insightful Earthstorm Diamond (#25901)"
    { 11751009, 27635 }, // "Craftsanity Item: Lynx Steak (#27635)"
    { 11751010, 27636 }, // "Craftsanity Item: Bat Bites (#27636)"
    { 11751011, 27651 }, // "Craftsanity Item: Buzzard Bites (#27651)"
    { 11751012, 27655 }, // "Craftsanity Item: Ravager Dog (#27655)"
    { 11751013, 27656 }, // "Craftsanity Item: Sporeling Snack (#27656)"
    { 11751014, 27657 }, // "Craftsanity Item: Blackened Basilisk (#27657)"
    { 11751015, 27658 }, // "Craftsanity Item: Roasted Clefthoof (#27658)"
    { 11751016, 27659 }, // "Craftsanity Item: Warp Burger (#27659)"
    { 11751017, 27660 }, // "Craftsanity Item: Talbuk Steak (#27660)"
    { 11751018, 27661 }, // "Craftsanity Item: Blackened Trout (#27661)"
    { 11751019, 27662 }, // "Craftsanity Item: Feltail Delight (#27662)"
    { 11751020, 27663 }, // "Craftsanity Item: Blackened Sporefish (#27663)"
    { 11751021, 27664 }, // "Craftsanity Item: Grilled Mudfish (#27664)"
    { 11751022, 27665 }, // "Craftsanity Item: Poached Bluefish (#27665)"
    { 11751023, 27666 }, // "Craftsanity Item: Golden Fish Sticks (#27666)"
    { 11751024, 27667 }, // "Craftsanity Item: Spicy Crawdad (#27667)"
    { 11751025, 28290 }, // "Craftsanity Item: Smooth Golden Draenite (#28290)"
    { 11751026, 28421 }, // "Craftsanity Item: Adamantite Weightstone (#28421)"
    { 11751027, 28595 }, // "Craftsanity Item: Bright Blood Garnet (#28595)"
    { 11751028, 29483 }, // "Craftsanity Item: Shadow Armor Kit (#29483)"
    { 11751029, 29485 }, // "Craftsanity Item: Flame Armor Kit (#29485)"
    { 11751030, 29486 }, // "Craftsanity Item: Frost Armor Kit (#29486)"
    { 11751031, 29487 }, // "Craftsanity Item: Nature Armor Kit (#29487)"
    { 11751032, 29488 }, // "Craftsanity Item: Arcane Armor Kit (#29488)"
    { 11751033, 29489 }, // "Craftsanity Item: Enchanted Felscale Leggings (#29489)"
    { 11751034, 29490 }, // "Craftsanity Item: Enchanted Felscale Gloves (#29490)"
    { 11751035, 29491 }, // "Craftsanity Item: Enchanted Felscale Boots (#29491)"
    { 11751036, 29492 }, // "Craftsanity Item: Flamescale Leggings (#29492)"
    { 11751037, 29493 }, // "Craftsanity Item: Flamescale Boots (#29493)"
    { 11751038, 29494 }, // "Craftsanity Item: Flamescale Belt (#29494)"
    { 11751039, 29495 }, // "Craftsanity Item: Enchanted Clefthoof Leggings (#29495)"
    { 11751040, 29496 }, // "Craftsanity Item: Enchanted Clefthoof Gloves (#29496)"
    { 11751041, 29497 }, // "Craftsanity Item: Enchanted Clefthoof Boots (#29497)"
    { 11751042, 29498 }, // "Craftsanity Item: Blastguard Pants (#29498)"
    { 11751043, 29499 }, // "Craftsanity Item: Blastguard Boots (#29499)"
    { 11751044, 29500 }, // "Craftsanity Item: Blastguard Belt (#29500)"
    { 11751045, 29502 }, // "Craftsanity Item: Cobrascale Hood (#29502)"
    { 11751046, 29503 }, // "Craftsanity Item: Cobrascale Gloves (#29503)"
    { 11751047, 29504 }, // "Craftsanity Item: Windscale Hood (#29504)"
    { 11751048, 29505 }, // "Craftsanity Item: Hood of Primal Life (#29505)"
    { 11751049, 29506 }, // "Craftsanity Item: Gloves of the Living Touch (#29506)"
    { 11751050, 29507 }, // "Craftsanity Item: Windslayer Wraps (#29507)"
    { 11751051, 29508 }, // "Craftsanity Item: Living Dragonscale Helm (#29508)"
    { 11751052, 29509 }, // "Craftsanity Item: Windstrike Gloves (#29509)"
    { 11751053, 29510 }, // "Craftsanity Item: Netherdrake Helm (#29510)"
    { 11751054, 29511 }, // "Craftsanity Item: Netherdrake Gloves (#29511)"
    { 11751055, 29512 }, // "Craftsanity Item: Earthen Netherscale Boots (#29512)"
    { 11751056, 29514 }, // "Craftsanity Item: Thick Netherscale Breastplate (#29514)"
    { 11751057, 29529 }, // "Craftsanity Item: Drums of Battle (#29529)"
    { 11751058, 29530 }, // "Craftsanity Item: Drums of Speed (#29530)"
    { 11751059, 29531 }, // "Craftsanity Item: Drums of Restoration (#29531)"
    { 11751060, 29532 }, // "Craftsanity Item: Drums of Panic (#29532)"
    { 11751061, 29533 }, // "Craftsanity Item: Cobrahide Leg Armor (#29533)"
    { 11751062, 29534 }, // "Craftsanity Item: Clefthide Leg Armor (#29534)"
    { 11751063, 29535 }, // "Craftsanity Item: Nethercobra Leg Armor (#29535)"
    { 11751064, 29536 }, // "Craftsanity Item: Nethercleft Leg Armor (#29536)"
    { 11751065, 29540 }, // "Craftsanity Item: Reinforced Mining Bag (#29540)"
    { 11751066, 30031 }, // "Craftsanity Item: Red Havoc Boots (#30031)"
    { 11751067, 30032 }, // "Craftsanity Item: Red Belt of Battle (#30032)"
    { 11751068, 30033 }, // "Craftsanity Item: Boots of the Protector (#30033)"
    { 11751069, 30034 }, // "Craftsanity Item: Belt of the Guardian (#30034)"
    { 11751070, 30035 }, // "Craftsanity Item: Boots of the Long Road (#30035)"
    { 11751071, 30036 }, // "Craftsanity Item: Belt of the Long Road (#30036)"
    { 11751072, 30037 }, // "Craftsanity Item: Boots of Blasting (#30037)"
    { 11751073, 30038 }, // "Craftsanity Item: Belt of Blasting (#30038)"
    { 11751074, 30039 }, // "Craftsanity Item: Boots of Utter Darkness (#30039)"
    { 11751075, 30040 }, // "Craftsanity Item: Belt of Deep Shadow (#30040)"
    { 11751076, 30041 }, // "Craftsanity Item: Boots of Natural Grace (#30041)"
    { 11751077, 30042 }, // "Craftsanity Item: Belt of Natural Power (#30042)"
    { 11751078, 30043 }, // "Craftsanity Item: Hurricane Boots (#30043)"
    { 11751079, 30044 }, // "Craftsanity Item: Monsoon Belt (#30044)"
    { 11751080, 30045 }, // "Craftsanity Item: Boots of the Crimson Hawk (#30045)"
    { 11751081, 30046 }, // "Craftsanity Item: Belt of the Black Eagle (#30046)"
    { 11751082, 30155 }, // "Craftsanity Item: Clam Bar (#30155)"
    { 11751083, 30703 }, // "Craftsanity Item: Conjured Mountain Spring Water (#30703)"
    { 11751084, 30825 }, // "Craftsanity Item: Ring of Arcane Shielding (#30825)"
    { 11751085, 30831 }, // "Craftsanity Item: Cloak of Arcane Evasion (#30831)"
    { 11751086, 30837 }, // "Craftsanity Item: Flameheart Bracers (#30837)"
    { 11751087, 30838 }, // "Craftsanity Item: Flameheart Gloves (#30838)"
    { 11751088, 30839 }, // "Craftsanity Item: Flameheart Vest (#30839)"
    { 11751089, 31364 }, // "Craftsanity Item: Wildguard Breastplate (#31364)"
    { 11751090, 31367 }, // "Craftsanity Item: Wildguard Leggings (#31367)"
    { 11751091, 31368 }, // "Craftsanity Item: Wildguard Helm (#31368)"
    { 11751092, 31369 }, // "Craftsanity Item: Iceguard Breastplate (#31369)"
    { 11751093, 31370 }, // "Craftsanity Item: Iceguard Leggings (#31370)"
    { 11751094, 31371 }, // "Craftsanity Item: Iceguard Helm (#31371)"
    { 11751095, 31398 }, // "Craftsanity Item: The Frozen Eye (#31398)"
    { 11751096, 31399 }, // "Craftsanity Item: The Natural Ward (#31399)"
    { 11751097, 31672 }, // "Craftsanity Item: Mok'Nathal Shortribs (#31672)"
    { 11751098, 31673 }, // "Craftsanity Item: Crunchy Serpent (#31673)"
    { 11751099, 31676 }, // "Craftsanity Item: Fel Regeneration Potion (#31676)"
    { 11751100, 31677 }, // "Craftsanity Item: Fel Mana Potion (#31677)"
    { 11751101, 31679 }, // "Craftsanity Item: Fel Strength Elixir (#31679)"
    { 11751102, 31860 }, // "Craftsanity Item: Great Golden Draenite (#31860)"
    { 11751103, 31861 }, // "Craftsanity Item: Great Dawnstone (#31861)"
    { 11751104, 31862 }, // "Craftsanity Item: Balanced Shadow Draenite (#31862)"
    { 11751105, 31863 }, // "Craftsanity Item: Balanced Nightseye (#31863)"
    { 11751106, 31864 }, // "Craftsanity Item: Infused Shadow Draenite (#31864)"
    { 11751107, 31865 }, // "Craftsanity Item: Infused Nightseye (#31865)"
    { 11751108, 31866 }, // "Craftsanity Item: Veiled Flame Spessarite (#31866)"
    { 11751109, 31867 }, // "Craftsanity Item: Veiled Noble Topaz (#31867)"
    { 11751110, 31868 }, // "Craftsanity Item: Wicked Noble Topaz (#31868)"
    { 11751111, 31869 }, // "Craftsanity Item: Wicked Flame Spessarite (#31869)"
    { 11751112, 32063 }, // "Craftsanity Item: Earthen Elixir (#32063)"
    { 11751113, 32068 }, // "Craftsanity Item: Elixir of Ironskin (#32068)"
    { 11751114, 32193 }, // "Craftsanity Item: Bold Crimson Spinel (#32193)"
    { 11751115, 32194 }, // "Craftsanity Item: Delicate Crimson Spinel (#32194)"
    { 11751116, 32195 }, // "Craftsanity Item: Teardrop Crimson Spinel (#32195)"
    { 11751117, 32196 }, // "Craftsanity Item: Runed Crimson Spinel (#32196)"
    { 11751118, 32197 }, // "Craftsanity Item: Bright Crimson Spinel (#32197)"
    { 11751119, 32198 }, // "Craftsanity Item: Subtle Crimson Spinel (#32198)"
    { 11751120, 32199 }, // "Craftsanity Item: Flashing Crimson Spinel (#32199)"
    { 11751121, 32200 }, // "Craftsanity Item: Solid Empyrean Sapphire (#32200)"
    { 11751122, 32201 }, // "Craftsanity Item: Sparkling Empyrean Sapphire (#32201)"
    { 11751123, 32202 }, // "Craftsanity Item: Lustrous Empyrean Sapphire (#32202)"
    { 11751124, 32203 }, // "Craftsanity Item: Stormy Empyrean Sapphire (#32203)"
    { 11751125, 32204 }, // "Craftsanity Item: Brilliant Lionseye (#32204)"
    { 11751126, 32205 }, // "Craftsanity Item: Smooth Lionseye (#32205)"
    { 11751127, 32206 }, // "Craftsanity Item: Rigid Lionseye (#32206)"
    { 11751128, 32207 }, // "Craftsanity Item: Gleaming Lionseye (#32207)"
    { 11751129, 32208 }, // "Craftsanity Item: Thick Lionseye (#32208)"
    { 11751130, 32209 }, // "Craftsanity Item: Mystic Lionseye (#32209)"
    { 11751131, 32210 }, // "Craftsanity Item: Great Lionseye (#32210)"
    { 11751132, 32211 }, // "Craftsanity Item: Sovereign Shadowsong Amethyst (#32211)"
    { 11751133, 32212 }, // "Craftsanity Item: Shifting Shadowsong Amethyst (#32212)"
    { 11751134, 32213 }, // "Craftsanity Item: Balanced Shadowsong Amethyst (#32213)"
    { 11751135, 32214 }, // "Craftsanity Item: Infused Shadowsong Amethyst (#32214)"
    { 11751136, 32215 }, // "Craftsanity Item: Glowing Shadowsong Amethyst (#32215)"
    { 11751137, 32216 }, // "Craftsanity Item: Royal Shadowsong Amethyst (#32216)"
    { 11751138, 32217 }, // "Craftsanity Item: Inscribed Pyrestone (#32217)"
    { 11751139, 32218 }, // "Craftsanity Item: Potent Pyrestone (#32218)"
    { 11751140, 32219 }, // "Craftsanity Item: Luminous Pyrestone (#32219)"
    { 11751141, 32220 }, // "Craftsanity Item: Glinting Pyrestone (#32220)"
    { 11751142, 32221 }, // "Craftsanity Item: Veiled Pyrestone (#32221)"
    { 11751143, 32222 }, // "Craftsanity Item: Wicked Pyrestone (#32222)"
    { 11751144, 32223 }, // "Craftsanity Item: Enduring Seaspray Emerald (#32223)"
    { 11751145, 32224 }, // "Craftsanity Item: Radiant Seaspray Emerald (#32224)"
    { 11751146, 32225 }, // "Craftsanity Item: Dazzling Seaspray Emerald (#32225)"
    { 11751147, 32226 }, // "Craftsanity Item: Jagged Seaspray Emerald (#32226)"
    { 11751148, 32389 }, // "Craftsanity Item: Soulguard Leggings (#32389)"
    { 11751149, 32390 }, // "Craftsanity Item: Soulguard Girdle (#32390)"
    { 11751150, 32391 }, // "Craftsanity Item: Soulguard Slippers (#32391)"
    { 11751151, 32392 }, // "Craftsanity Item: Soulguard Bracers (#32392)"
    { 11751152, 32393 }, // "Craftsanity Item: Redeemed Soul Cinch (#32393)"
    { 11751153, 32394 }, // "Craftsanity Item: Redeemed Soul Moccasins (#32394)"
    { 11751154, 32395 }, // "Craftsanity Item: Redeemed Soul Wristguards (#32395)"
    { 11751155, 32396 }, // "Craftsanity Item: Redeemed Soul Legguards (#32396)"
    { 11751156, 32397 }, // "Craftsanity Item: Waistguard of Shackled Souls (#32397)"
    { 11751157, 32398 }, // "Craftsanity Item: Boots of Shackled Souls (#32398)"
    { 11751158, 32399 }, // "Craftsanity Item: Bracers of Shackled Souls (#32399)"
    { 11751159, 32400 }, // "Craftsanity Item: Greaves of Shackled Souls (#32400)"
    { 11751160, 32401 }, // "Craftsanity Item: Shadesteel Girdle (#32401)"
    { 11751161, 32402 }, // "Craftsanity Item: Shadesteel Sabots (#32402)"
    { 11751162, 32403 }, // "Craftsanity Item: Shadesteel Bracers (#32403)"
    { 11751163, 32404 }, // "Craftsanity Item: Shadesteel Greaves (#32404)"
    { 11751164, 32409 }, // "Craftsanity Item: Relentless Earthstorm Diamond (#32409)"
    { 11751165, 32410 }, // "Craftsanity Item: Thundering Skyfire Diamond (#32410)"
    { 11751166, 32420 }, // "Craftsanity Item: Night's End (#32420)"
    { 11751167, 32568 }, // "Craftsanity Item: Swiftsteel Bracers (#32568)"
    { 11751168, 32570 }, // "Craftsanity Item: Swiftsteel Shoulders (#32570)"
    { 11751169, 32571 }, // "Craftsanity Item: Dawnsteel Bracers (#32571)"
    { 11751170, 32573 }, // "Craftsanity Item: Dawnsteel Shoulders (#32573)"
    { 11751171, 32574 }, // "Craftsanity Item: Bindings of Lightning Reflexes (#32574)"
    { 11751172, 32575 }, // "Craftsanity Item: Shoulders of Lightning Reflexes (#32575)"
    { 11751173, 32577 }, // "Craftsanity Item: Living Earth Bindings (#32577)"
    { 11751174, 32579 }, // "Craftsanity Item: Living Earth Shoulders (#32579)"
    { 11751175, 32580 }, // "Craftsanity Item: Swiftstrike Bracers (#32580)"
    { 11751176, 32581 }, // "Craftsanity Item: Swiftstrike Shoulders (#32581)"
    { 11751177, 32582 }, // "Craftsanity Item: Bracers of Renewed Life (#32582)"
    { 11751178, 32583 }, // "Craftsanity Item: Shoulderpads of Renewed Life (#32583)"
    { 11751179, 32584 }, // "Craftsanity Item: Swiftheal Wraps (#32584)"
    { 11751180, 32585 }, // "Craftsanity Item: Swiftheal Mantle (#32585)"
    { 11751181, 32586 }, // "Craftsanity Item: Bracers of Nimble Thought (#32586)"
    { 11751182, 32587 }, // "Craftsanity Item: Mantle of Nimble Thought (#32587)"
    { 11751183, 32854 }, // "Craftsanity Item: Hammer of Righteous Might (#32854)"
    { 11751184, 33092 }, // "Craftsanity Item: Healing Potion Injector (#33092)"
    { 11751185, 33093 }, // "Craftsanity Item: Mana Potion Injector (#33093)"
    { 11751186, 33122 }, // "Craftsanity Item: Cloak of Darkness (#33122)"
    { 11751187, 33131 }, // "Craftsanity Item: Crimson Sun (#33131)"
    { 11751188, 33133 }, // "Craftsanity Item: Don Julio's Heart (#33133)"
    { 11751189, 33134 }, // "Craftsanity Item: Kailee's Rose (#33134)"
    { 11751190, 33135 }, // "Craftsanity Item: Falling Star (#33135)"
    { 11751191, 33140 }, // "Craftsanity Item: Blood of Amber (#33140)"
    { 11751192, 33143 }, // "Craftsanity Item: Stone of Blades (#33143)"
    { 11751193, 33144 }, // "Craftsanity Item: Facet of Eternity (#33144)"
    { 11751194, 33173 }, // "Craftsanity Item: Ragesteel Shoulders (#33173)"
    { 11751195, 33185 }, // "Craftsanity Item: Adamantite Weapon Chain (#33185)"
    { 11751196, 33204 }, // "Craftsanity Item: Shadowprowler's Chestguard (#33204)"
    { 11751197, 33208 }, // "Craftsanity Item: Flask of Chromatic Wonder (#33208)"
    { 11751198, 33312 }, // "Craftsanity Item: Mana Sapphire (#33312)"
    { 11751199, 33782 }, // "Craftsanity Item: Steady Talasite (#33782)"
    { 11751200, 33791 }, // "Craftsanity Item: Heavy Copper Longsword (#33791)"
    { 11751201, 33825 }, // "Craftsanity Item: Skullfish Soup (#33825)"
    { 11751202, 33866 }, // "Craftsanity Item: Stormchops (#33866)"
    { 11751203, 33867 }, // "Craftsanity Item: Broiled Bloodfin (#33867)"
    { 11751204, 33872 }, // "Craftsanity Item: Spicy Hot Talbuk (#33872)"
    { 11751205, 33874 }, // "Craftsanity Item: Kibler's Bits (#33874)"
    { 11751206, 33924 }, // "Craftsanity Item: Delicious Chocolate Cake (#33924)"
    { 11751207, 34085 }, // "Craftsanity Item: Red Winter Clothes (#34085)"
    { 11751208, 34086 }, // "Craftsanity Item: Winter Boots (#34086)"
    { 11751209, 34087 }, // "Craftsanity Item: Green Winter Clothes (#34087)"
    { 11751210, 34105 }, // "Craftsanity Item: Quiver of a Thousand Feathers (#34105)"
    { 11751211, 34106 }, // "Craftsanity Item: Netherscale Ammo Pouch (#34106)"
    { 11751212, 34113 }, // "Craftsanity Item: Field Repair Bot 110G (#34113)"
    { 11751213, 34220 }, // "Craftsanity Item: Chaotic Skyfire Diamond (#34220)"
    { 11751214, 34353 }, // "Craftsanity Item: Quad Deathblow X44 Goggles (#34353)"
    { 11751215, 34354 }, // "Craftsanity Item: Mayhem Projection Goggles (#34354)"
    { 11751216, 34355 }, // "Craftsanity Item: Lightning Etched Specs (#34355)"
    { 11751217, 34356 }, // "Craftsanity Item: Surestrike Goggles v3.0 (#34356)"
    { 11751218, 34357 }, // "Craftsanity Item: Hard Khorium Goggles (#34357)"
    { 11751219, 34358 }, // "Craftsanity Item: Hard Khorium Choker (#34358)"
    { 11751220, 34359 }, // "Craftsanity Item: Pendant of Sunfire (#34359)"
    { 11751221, 34360 }, // "Craftsanity Item: Amulet of Flowing Life (#34360)"
    { 11751222, 34361 }, // "Craftsanity Item: Hard Khorium Band (#34361)"
    { 11751223, 34362 }, // "Craftsanity Item: Loop of Forged Power (#34362)"
    { 11751224, 34363 }, // "Craftsanity Item: Ring of Flowing Life (#34363)"
    { 11751225, 34364 }, // "Craftsanity Item: Sunfire Robe (#34364)"
    { 11751226, 34365 }, // "Craftsanity Item: Robe of Eternal Light (#34365)"
    { 11751227, 34366 }, // "Craftsanity Item: Sunfire Handwraps (#34366)"
    { 11751228, 34367 }, // "Craftsanity Item: Hands of Eternal Light (#34367)"
    { 11751229, 34369 }, // "Craftsanity Item: Carapace of Sun and Shadow (#34369)"
    { 11751230, 34370 }, // "Craftsanity Item: Gloves of Immortal Dusk (#34370)"
    { 11751231, 34371 }, // "Craftsanity Item: Leather Chestguard of the Sun (#34371)"
    { 11751232, 34372 }, // "Craftsanity Item: Leather Gauntlets of the Sun (#34372)"
    { 11751233, 34373 }, // "Craftsanity Item: Embrace of the Phoenix (#34373)"
    { 11751234, 34374 }, // "Craftsanity Item: Fletcher's Gloves of the Phoenix (#34374)"
    { 11751235, 34375 }, // "Craftsanity Item: Sun-Drenched Scale Chestguard (#34375)"
    { 11751236, 34376 }, // "Craftsanity Item: Sun-Drenched Scale Gloves (#34376)"
    { 11751237, 34377 }, // "Craftsanity Item: Hard Khorium Battleplate (#34377)"
    { 11751238, 34378 }, // "Craftsanity Item: Hard Khorium Battlefists (#34378)"
    { 11751239, 34379 }, // "Craftsanity Item: Sunblessed Breastplate (#34379)"
    { 11751240, 34380 }, // "Craftsanity Item: Sunblessed Gauntlets (#34380)"
    { 11751241, 34411 }, // "Craftsanity Item: Hot Apple Cider (#34411)"
    { 11751242, 34490 }, // "Craftsanity Item: Bag of Many Hides (#34490)"
    { 11751243, 34504 }, // "Craftsanity Item: Adamantite Shell Machine (#34504)"
    { 11751244, 34722 }, // "Craftsanity Item: Heavy Frostweave Bandage (#34722)"
    { 11751245, 34754 }, // "Craftsanity Item: Mega Mammoth Meal (#34754)"
    { 11751246, 34755 }, // "Craftsanity Item: Tender Shoveltusk Steak (#34755)"
    { 11751247, 34756 }, // "Craftsanity Item: Spiced Worm Burger (#34756)"
    { 11751248, 34757 }, // "Craftsanity Item: Very Burnt Worg (#34757)"
    { 11751249, 34758 }, // "Craftsanity Item: Mighty Rhino Dogs (#34758)"
    { 11751250, 34766 }, // "Craftsanity Item: Poached Northern Sculpin (#34766)"
    { 11751251, 34767 }, // "Craftsanity Item: Firecracker Salmon (#34767)"
    { 11751252, 34768 }, // "Craftsanity Item: Spicy Blue Nettlefish (#34768)"
    { 11751253, 34769 }, // "Craftsanity Item: Imperial Manta Steak (#34769)"
    { 11751254, 34832 }, // "Craftsanity Item: Captain Rumsey's Lager (#34832)"
    { 11751255, 34847 }, // "Craftsanity Item: Annihilator Holo-Gogs (#34847)"
    { 11751256, 35128 }, // "Craftsanity Item: Hardened Khorium (#35128)"
    { 11751257, 35181 }, // "Craftsanity Item: Powerheal 9000 Lens (#35181)"
    { 11751258, 35182 }, // "Craftsanity Item: Hyper-Magnified Moon Specs (#35182)"
    { 11751259, 35183 }, // "Craftsanity Item: Wonderheal XT68 Shades (#35183)"
    { 11751260, 35184 }, // "Craftsanity Item: Primal-Attuned Goggles (#35184)"
    { 11751261, 35185 }, // "Craftsanity Item: Justicebringer 3000 Specs (#35185)"
    { 11751262, 35315 }, // "Craftsanity Item: Quick Dawnstone (#35315)"
    { 11751263, 35316 }, // "Craftsanity Item: Reckless Noble Topaz (#35316)"
    { 11751264, 35318 }, // "Craftsanity Item: Forceful Talasite (#35318)"
    { 11751265, 35501 }, // "Craftsanity Item: Eternal Earthstorm Diamond (#35501)"
    { 11751266, 35503 }, // "Craftsanity Item: Ember Skyfire Diamond (#35503)"
    { 11751267, 35563 }, // "Craftsanity Item: Charred Bear Kabobs (#35563)"
    { 11751268, 35565 }, // "Craftsanity Item: Juicy Bear Burger (#35565)"
    { 11751269, 35581 }, // "Craftsanity Item: Rocket Boots Xtreme Lite (#35581)"
    { 11751270, 35693 }, // "Craftsanity Item: Figurine - Empyrean Tortoise (#35693)"
    { 11751271, 35694 }, // "Craftsanity Item: Figurine - Khorium Boar (#35694)"
    { 11751272, 35700 }, // "Craftsanity Item: Figurine - Crimson Serpent (#35700)"
    { 11751273, 35702 }, // "Craftsanity Item: Figurine - Shadowsong Panther (#35702)"
    { 11751274, 35703 }, // "Craftsanity Item: Figurine - Seaspray Albatross (#35703)"
    { 11751275, 35707 }, // "Craftsanity Item: Regal Nightseye (#35707)"
    { 11751276, 35748 }, // "Craftsanity Item: Guardian's Alchemist Stone (#35748)"
    { 11751277, 35749 }, // "Craftsanity Item: Sorcerer's Alchemist Stone (#35749)"
    { 11751278, 35750 }, // "Craftsanity Item: Redeemer's Alchemist Stone (#35750)"
    { 11751279, 35751 }, // "Craftsanity Item: Assassin's Alchemist Stone (#35751)"
    { 11751280, 35758 }, // "Craftsanity Item: Steady Seaspray Emerald (#35758)"
    { 11751281, 35759 }, // "Craftsanity Item: Forceful Seaspray Emerald (#35759)"
    { 11751282, 35760 }, // "Craftsanity Item: Reckless Pyrestone (#35760)"
    { 11751283, 35761 }, // "Craftsanity Item: Quick Lionseye (#35761)"
    { 11751284, 36766 }, // "Craftsanity Item: Bright Dragon's Eye (#36766)"
    { 11751285, 36767 }, // "Craftsanity Item: Solid Dragon's Eye (#36767)"
    { 11751286, 36895 }, // "Craftsanity Item: Demonic Soulstone (#36895)"
    { 11751287, 37503 }, // "Craftsanity Item: Purified Shadowsong Amethyst (#37503)"
    { 11751288, 38225 }, // "Craftsanity Item: Mycah's Botanical Bag (#38225)"
    { 11751289, 38277 }, // "Craftsanity Item: Haliscan Jacket (#38277)"
    { 11751290, 38278 }, // "Craftsanity Item: Haliscan Pantaloons (#38278)"
    { 11751291, 38347 }, // "Craftsanity Item: Mammoth Mining Bag (#38347)"
    { 11751292, 38399 }, // "Craftsanity Item: Trapper's Traveling Pack (#38399)"
    { 11751293, 38590 }, // "Craftsanity Item: Black Chitinguard Boots (#38590)"
    { 11751294, 39520 }, // "Craftsanity Item: Kungaloosh (#39520)"
    { 11751295, 39996 }, // "Craftsanity Item: Bold Scarlet Ruby (#39996)"
    { 11751296, 39997 }, // "Craftsanity Item: Delicate Scarlet Ruby (#39997)"
    { 11751297, 39998 }, // "Craftsanity Item: Runed Scarlet Ruby (#39998)"
    { 11751298, 40000 }, // "Craftsanity Item: Subtle Scarlet Ruby (#40000)"
    { 11751299, 40001 }, // "Craftsanity Item: Flashing Scarlet Ruby (#40001)"
    { 11751300, 40002 }, // "Craftsanity Item: Fractured Scarlet Ruby (#40002)"
    { 11751301, 40003 }, // "Craftsanity Item: Precise Scarlet Ruby (#40003)"
    { 11751302, 40008 }, // "Craftsanity Item: Solid Sky Sapphire (#40008)"
    { 11751303, 40010 }, // "Craftsanity Item: Lustrous Sky Sapphire (#40010)"
    { 11751304, 40011 }, // "Craftsanity Item: Stormy Sky Sapphire (#40011)"
    { 11751305, 40013 }, // "Craftsanity Item: Smooth Autumn's Glow (#40013)"
    { 11751306, 40014 }, // "Craftsanity Item: Rigid Autumn's Glow (#40014)"
    { 11751307, 40015 }, // "Craftsanity Item: Thick Autumn's Glow (#40015)"
    { 11751308, 40016 }, // "Craftsanity Item: Mystic Autumn's Glow (#40016)"
    { 11751309, 40017 }, // "Craftsanity Item: Quick Autumn's Glow (#40017)"
    { 11751310, 40022 }, // "Craftsanity Item: Sovereign Twilight Opal (#40022)"
    { 11751311, 40023 }, // "Craftsanity Item: Shifting Twilight Opal (#40023)"
    { 11751312, 40024 }, // "Craftsanity Item: Tenuous Twilight Opal (#40024)"
    { 11751313, 40025 }, // "Craftsanity Item: Glowing Twilight Opal (#40025)"
    { 11751314, 40026 }, // "Craftsanity Item: Purified Twilight Opal (#40026)"
    { 11751315, 40027 }, // "Craftsanity Item: Royal Twilight Opal (#40027)"
    { 11751316, 40028 }, // "Craftsanity Item: Mysterious Twilight Opal (#40028)"
    { 11751317, 40030 }, // "Craftsanity Item: Infused Twilight Opal (#40030)"
    { 11751318, 40031 }, // "Craftsanity Item: Regal Twilight Opal (#40031)"
    { 11751319, 40032 }, // "Craftsanity Item: Defender's Twilight Opal (#40032)"
    { 11751320, 40033 }, // "Craftsanity Item: Puissant Twilight Opal (#40033)"
    { 11751321, 40034 }, // "Craftsanity Item: Guardian's Twilight Opal (#40034)"
    { 11751322, 40037 }, // "Craftsanity Item: Inscribed Monarch Topaz (#40037)"
    { 11751323, 40038 }, // "Craftsanity Item: Etched Monarch Topaz (#40038)"
    { 11751324, 40039 }, // "Craftsanity Item: Champion's Monarch Topaz (#40039)"
    { 11751325, 40040 }, // "Craftsanity Item: Resplendent Monarch Topaz (#40040)"
    { 11751326, 40041 }, // "Craftsanity Item: Fierce Monarch Topaz (#40041)"
    { 11751327, 40043 }, // "Craftsanity Item: Deadly Monarch Topaz (#40043)"
    { 11751328, 40044 }, // "Craftsanity Item: Glinting Monarch Topaz (#40044)"
    { 11751329, 40045 }, // "Craftsanity Item: Lucent Monarch Topaz (#40045)"
    { 11751330, 40046 }, // "Craftsanity Item: Deft Monarch Topaz (#40046)"
    { 11751331, 40047 }, // "Craftsanity Item: Luminous Monarch Topaz (#40047)"
    { 11751332, 40048 }, // "Craftsanity Item: Potent Monarch Topaz (#40048)"
    { 11751333, 40049 }, // "Craftsanity Item: Veiled Monarch Topaz (#40049)"
    { 11751334, 40050 }, // "Craftsanity Item: Durable Monarch Topaz (#40050)"
    { 11751335, 40051 }, // "Craftsanity Item: Reckless Monarch Topaz (#40051)"
    { 11751336, 40052 }, // "Craftsanity Item: Wicked Monarch Topaz (#40052)"
    { 11751337, 40054 }, // "Craftsanity Item: Empowered Monarch Topaz (#40054)"
    { 11751338, 40055 }, // "Craftsanity Item: Stark Monarch Topaz (#40055)"
    { 11751339, 40056 }, // "Craftsanity Item: Stalwart Monarch Topaz (#40056)"
    { 11751340, 40057 }, // "Craftsanity Item: Glimmering Monarch Topaz (#40057)"
    { 11751341, 40058 }, // "Craftsanity Item: Accurate Monarch Topaz (#40058)"
    { 11751342, 40059 }, // "Craftsanity Item: Resolute Monarch Topaz (#40059)"
    { 11751343, 40085 }, // "Craftsanity Item: Timeless Forest Emerald (#40085)"
    { 11751344, 40086 }, // "Craftsanity Item: Jagged Forest Emerald (#40086)"
    { 11751345, 40088 }, // "Craftsanity Item: Vivid Forest Emerald (#40088)"
    { 11751346, 40089 }, // "Craftsanity Item: Enduring Forest Emerald (#40089)"
    { 11751347, 40090 }, // "Craftsanity Item: Steady Forest Emerald (#40090)"
    { 11751348, 40091 }, // "Craftsanity Item: Forceful Forest Emerald (#40091)"
    { 11751349, 40092 }, // "Craftsanity Item: Seer's Forest Emerald (#40092)"
    { 11751350, 40095 }, // "Craftsanity Item: Misty Forest Emerald (#40095)"
    { 11751351, 40096 }, // "Craftsanity Item: Sundered Forest Emerald (#40096)"
    { 11751352, 40098 }, // "Craftsanity Item: Radiant Forest Emerald (#40098)"
    { 11751353, 40099 }, // "Craftsanity Item: Shining Forest Emerald (#40099)"
    { 11751354, 40100 }, // "Craftsanity Item: Lambent Forest Emerald (#40100)"
    { 11751355, 40101 }, // "Craftsanity Item: Tense Forest Emerald (#40101)"
    { 11751356, 40102 }, // "Craftsanity Item: Turbid Forest Emerald (#40102)"
    { 11751357, 40103 }, // "Craftsanity Item: Opaque Forest Emerald (#40103)"
    { 11751358, 40104 }, // "Craftsanity Item: Intricate Forest Emerald (#40104)"
    { 11751359, 40105 }, // "Craftsanity Item: Energized Forest Emerald (#40105)"
    { 11751360, 40106 }, // "Craftsanity Item: Shattered Forest Emerald (#40106)"
    { 11751361, 40111 }, // "Craftsanity Item: Bold Cardinal Ruby (#40111)"
    { 11751362, 40112 }, // "Craftsanity Item: Delicate Cardinal Ruby (#40112)"
    { 11751363, 40113 }, // "Craftsanity Item: Runed Cardinal Ruby (#40113)"
    { 11751364, 40114 }, // "Craftsanity Item: Bright Cardinal Ruby (#40114)"
    { 11751365, 40115 }, // "Craftsanity Item: Subtle Cardinal Ruby (#40115)"
    { 11751366, 40116 }, // "Craftsanity Item: Flashing Cardinal Ruby (#40116)"
    { 11751367, 40117 }, // "Craftsanity Item: Fractured Cardinal Ruby (#40117)"
    { 11751368, 40118 }, // "Craftsanity Item: Precise Cardinal Ruby (#40118)"
    { 11751369, 40119 }, // "Craftsanity Item: Solid Majestic Zircon (#40119)"
    { 11751370, 40120 }, // "Craftsanity Item: Sparkling Majestic Zircon (#40120)"
    { 11751371, 40121 }, // "Craftsanity Item: Lustrous Majestic Zircon (#40121)"
    { 11751372, 40122 }, // "Craftsanity Item: Stormy Majestic Zircon (#40122)"
    { 11751373, 40123 }, // "Craftsanity Item: Brilliant King's Amber (#40123)"
    { 11751374, 40124 }, // "Craftsanity Item: Smooth King's Amber (#40124)"
    { 11751375, 40125 }, // "Craftsanity Item: Rigid King's Amber (#40125)"
    { 11751376, 40126 }, // "Craftsanity Item: Thick King's Amber (#40126)"
    { 11751377, 40127 }, // "Craftsanity Item: Mystic King's Amber (#40127)"
    { 11751378, 40128 }, // "Craftsanity Item: Quick King's Amber (#40128)"
    { 11751379, 40129 }, // "Craftsanity Item: Sovereign Dreadstone (#40129)"
    { 11751380, 40130 }, // "Craftsanity Item: Shifting Dreadstone (#40130)"
    { 11751381, 40131 }, // "Craftsanity Item: Tenuous Dreadstone (#40131)"
    { 11751382, 40132 }, // "Craftsanity Item: Glowing Dreadstone (#40132)"
    { 11751383, 40133 }, // "Craftsanity Item: Purified Dreadstone (#40133)"
    { 11751384, 40134 }, // "Craftsanity Item: Royal Dreadstone (#40134)"
    { 11751385, 40135 }, // "Craftsanity Item: Mysterious Dreadstone (#40135)"
    { 11751386, 40136 }, // "Craftsanity Item: Balanced Dreadstone (#40136)"
    { 11751387, 40137 }, // "Craftsanity Item: Infused Dreadstone (#40137)"
    { 11751388, 40138 }, // "Craftsanity Item: Regal Dreadstone (#40138)"
    { 11751389, 40139 }, // "Craftsanity Item: Defender's Dreadstone (#40139)"
    { 11751390, 40140 }, // "Craftsanity Item: Puissant Dreadstone (#40140)"
    { 11751391, 40141 }, // "Craftsanity Item: Guardian's Dreadstone (#40141)"
    { 11751392, 40142 }, // "Craftsanity Item: Inscribed Ametrine (#40142)"
    { 11751393, 40143 }, // "Craftsanity Item: Etched Ametrine (#40143)"
    { 11751394, 40144 }, // "Craftsanity Item: Champion's Ametrine (#40144)"
    { 11751395, 40145 }, // "Craftsanity Item: Resplendent Ametrine (#40145)"
    { 11751396, 40146 }, // "Craftsanity Item: Fierce Ametrine (#40146)"
    { 11751397, 40147 }, // "Craftsanity Item: Deadly Ametrine (#40147)"
    { 11751398, 40148 }, // "Craftsanity Item: Glinting Ametrine (#40148)"
    { 11751399, 40149 }, // "Craftsanity Item: Lucent Ametrine (#40149)"
    { 11751400, 40150 }, // "Craftsanity Item: Deft Ametrine (#40150)"
    { 11751401, 40151 }, // "Craftsanity Item: Luminous Ametrine (#40151)"
    { 11751402, 40152 }, // "Craftsanity Item: Potent Ametrine (#40152)"
    { 11751403, 40153 }, // "Craftsanity Item: Veiled Ametrine (#40153)"
    { 11751404, 40154 }, // "Craftsanity Item: Durable Ametrine (#40154)"
    { 11751405, 40155 }, // "Craftsanity Item: Reckless Ametrine (#40155)"
    { 11751406, 40156 }, // "Craftsanity Item: Wicked Ametrine (#40156)"
    { 11751407, 40157 }, // "Craftsanity Item: Pristine Ametrine (#40157)"
    { 11751408, 40158 }, // "Craftsanity Item: Empowered Ametrine (#40158)"
    { 11751409, 40159 }, // "Craftsanity Item: Stark Ametrine (#40159)"
    { 11751410, 40160 }, // "Craftsanity Item: Stalwart Ametrine (#40160)"
    { 11751411, 40161 }, // "Craftsanity Item: Glimmering Ametrine (#40161)"
    { 11751412, 40162 }, // "Craftsanity Item: Accurate Ametrine (#40162)"
    { 11751413, 40163 }, // "Craftsanity Item: Resolute Ametrine (#40163)"
    { 11751414, 40164 }, // "Craftsanity Item: Timeless Eye of Zul (#40164)"
    { 11751415, 40165 }, // "Craftsanity Item: Jagged Eye of Zul (#40165)"
    { 11751416, 40166 }, // "Craftsanity Item: Vivid Eye of Zul (#40166)"
    { 11751417, 40167 }, // "Craftsanity Item: Enduring Eye of Zul (#40167)"
    { 11751418, 40168 }, // "Craftsanity Item: Steady Eye of Zul (#40168)"
    { 11751419, 40169 }, // "Craftsanity Item: Forceful Eye of Zul (#40169)"
    { 11751420, 40170 }, // "Craftsanity Item: Seer's Eye of Zul (#40170)"
    { 11751421, 40171 }, // "Craftsanity Item: Misty Eye of Zul (#40171)"
    { 11751422, 40172 }, // "Craftsanity Item: Shining Eye of Zul (#40172)"
    { 11751423, 40173 }, // "Craftsanity Item: Turbid Eye of Zul (#40173)"
    { 11751424, 40174 }, // "Craftsanity Item: Intricate Eye of Zul (#40174)"
    { 11751425, 40175 }, // "Craftsanity Item: Dazzling Eye of Zul (#40175)"
    { 11751426, 40176 }, // "Craftsanity Item: Sundered Eye of Zul (#40176)"
    { 11751427, 40177 }, // "Craftsanity Item: Lambent Eye of Zul (#40177)"
    { 11751428, 40178 }, // "Craftsanity Item: Opaque Eye of Zul (#40178)"
    { 11751429, 40179 }, // "Craftsanity Item: Energized Eye of Zul (#40179)"
    { 11751430, 40180 }, // "Craftsanity Item: Radiant Eye of Zul (#40180)"
    { 11751431, 40181 }, // "Craftsanity Item: Tense Eye of Zul (#40181)"
    { 11751432, 40182 }, // "Craftsanity Item: Shattered Eye of Zul (#40182)"
    { 11751433, 40213 }, // "Craftsanity Item: Mighty Arcane Protection Potion (#40213)"
    { 11751434, 40214 }, // "Craftsanity Item: Mighty Fire Protection Potion (#40214)"
    { 11751435, 40215 }, // "Craftsanity Item: Mighty Frost Protection Potion (#40215)"
    { 11751436, 40216 }, // "Craftsanity Item: Mighty Nature Protection Potion (#40216)"
    { 11751437, 40217 }, // "Craftsanity Item: Mighty Shadow Protection Potion (#40217)"
    { 11751438, 40773 }, // "Craftsanity Item: Master Firestone (#40773)"
    { 11751439, 40956 }, // "Craftsanity Item: Reinforced Cobalt Shoulders (#40956)"
    { 11751440, 40957 }, // "Craftsanity Item: Reinforced Cobalt Helm (#40957)"
    { 11751441, 40958 }, // "Craftsanity Item: Reinforced Cobalt Legplates (#40958)"
    { 11751442, 40959 }, // "Craftsanity Item: Reinforced Cobalt Chestpiece (#40959)"
    { 11751443, 41169 }, // "Craftsanity Item: Firestone (#41169)"
    { 11751444, 41170 }, // "Craftsanity Item: Lesser Firestone (#41170)"
    { 11751445, 41171 }, // "Craftsanity Item: Greater Firestone (#41171)"
    { 11751446, 41172 }, // "Craftsanity Item: Major Firestone (#41172)"
    { 11751447, 41173 }, // "Craftsanity Item: Fel Firestone (#41173)"
    { 11751448, 41174 }, // "Craftsanity Item: Grand Firestone (#41174)"
    { 11751449, 41191 }, // "Craftsanity Item: Spellstone (#41191)"
    { 11751450, 41192 }, // "Craftsanity Item: Greater Spellstone (#41192)"
    { 11751451, 41193 }, // "Craftsanity Item: Major Spellstone (#41193)"
    { 11751452, 41194 }, // "Craftsanity Item: Master Spellstone (#41194)"
    { 11751453, 41195 }, // "Craftsanity Item: Demonic Spellstone (#41195)"
    { 11751454, 41196 }, // "Craftsanity Item: Grand Spellstone (#41196)"
    { 11751455, 41248 }, // "Craftsanity Item: Red Lumberjack Shirt (#41248)"
    { 11751456, 41249 }, // "Craftsanity Item: Blue Lumberjack Shirt (#41249)"
    { 11751457, 41250 }, // "Craftsanity Item: Green Lumberjack Shirt (#41250)"
    { 11751458, 41251 }, // "Craftsanity Item: Yellow Lumberjack Shirt (#41251)"
    { 11751459, 41252 }, // "Craftsanity Item: Red Workman's Shirt (#41252)"
    { 11751460, 41253 }, // "Craftsanity Item: Blue Workman's Shirt (#41253)"
    { 11751461, 41254 }, // "Craftsanity Item: Rustic Workman's Shirt (#41254)"
    { 11751462, 41255 }, // "Craftsanity Item: Green Workman's Shirt (#41255)"
    { 11751463, 41285 }, // "Craftsanity Item: Chaotic Skyflare Diamond (#41285)"
    { 11751464, 41307 }, // "Craftsanity Item: Destructive Skyflare Diamond (#41307)"
    { 11751465, 41333 }, // "Craftsanity Item: Ember Skyflare Diamond (#41333)"
    { 11751466, 41335 }, // "Craftsanity Item: Enigmatic Skyflare Diamond (#41335)"
    { 11751467, 41339 }, // "Craftsanity Item: Swift Skyflare Diamond (#41339)"
    { 11751468, 41375 }, // "Craftsanity Item: Tireless Skyflare Diamond (#41375)"
    { 11751469, 41376 }, // "Craftsanity Item: Revitalizing Skyflare Diamond (#41376)"
    { 11751470, 41377 }, // "Craftsanity Item: Effulgent Skyflare Diamond (#41377)"
    { 11751471, 41378 }, // "Craftsanity Item: Forlorn Skyflare Diamond (#41378)"
    { 11751472, 41379 }, // "Craftsanity Item: Impassive Skyflare Diamond (#41379)"
    { 11751473, 41380 }, // "Craftsanity Item: Austere Earthsiege Diamond (#41380)"
    { 11751474, 41381 }, // "Craftsanity Item: Persistent Earthsiege Diamond (#41381)"
    { 11751475, 41382 }, // "Craftsanity Item: Trenchant Earthsiege Diamond (#41382)"
    { 11751476, 41385 }, // "Craftsanity Item: Invigorating Earthsiege Diamond (#41385)"
    { 11751477, 41389 }, // "Craftsanity Item: Beaming Earthsiege Diamond (#41389)"
    { 11751478, 41395 }, // "Craftsanity Item: Bracing Earthsiege Diamond (#41395)"
    { 11751479, 41396 }, // "Craftsanity Item: Eternal Earthsiege Diamond (#41396)"
    { 11751480, 41397 }, // "Craftsanity Item: Powerful Earthsiege Diamond (#41397)"
    { 11751481, 41398 }, // "Craftsanity Item: Relentless Earthsiege Diamond (#41398)"
    { 11751482, 41400 }, // "Craftsanity Item: Thundering Skyflare Diamond (#41400)"
    { 11751483, 41401 }, // "Craftsanity Item: Insightful Earthsiege Diamond (#41401)"
    { 11751484, 41508 }, // "Craftsanity Item: Mechano-hog (#41508)"
    { 11751485, 41593 }, // "Craftsanity Item: Ebonweave (#41593)"
    { 11751486, 41594 }, // "Craftsanity Item: Moonshroud (#41594)"
    { 11751487, 41595 }, // "Craftsanity Item: Spellweave (#41595)"
    { 11751488, 41597 }, // "Craftsanity Item: Abyssal Bag (#41597)"
    { 11751489, 41598 }, // "Craftsanity Item: Mysterious Bag (#41598)"
    { 11751490, 41599 }, // "Craftsanity Item: Frostweave Bag (#41599)"
    { 11751491, 41600 }, // "Craftsanity Item: Glacial Bag (#41600)"
    { 11751492, 41602 }, // "Craftsanity Item: Brilliant Spellthread (#41602)"
    { 11751493, 41604 }, // "Craftsanity Item: Sapphire Spellthread (#41604)"
    { 11751494, 41609 }, // "Craftsanity Item: Wispcloak (#41609)"
    { 11751495, 41610 }, // "Craftsanity Item: Deathchill Cloak (#41610)"
    { 11751496, 41984 }, // "Craftsanity Item: Hat of Wintry Doom (#41984)"
    { 11751497, 41985 }, // "Craftsanity Item: Silky Iceshard Boots (#41985)"
    { 11751498, 41986 }, // "Craftsanity Item: Deep Frozen Cord (#41986)"
    { 11751499, 42093 }, // "Craftsanity Item: Frostmoon Pants (#42093)"
    { 11751500, 42095 }, // "Craftsanity Item: Light Blessed Mittens (#42095)"
    { 11751501, 42096 }, // "Craftsanity Item: Aurora Slippers (#42096)"
    { 11751502, 42100 }, // "Craftsanity Item: Moonshroud Robe (#42100)"
    { 11751503, 42101 }, // "Craftsanity Item: Ebonweave Robe (#42101)"
    { 11751504, 42102 }, // "Craftsanity Item: Spellweave Robe (#42102)"
    { 11751505, 42103 }, // "Craftsanity Item: Moonshroud Gloves (#42103)"
    { 11751506, 42111 }, // "Craftsanity Item: Ebonweave Gloves (#42111)"
    { 11751507, 42113 }, // "Craftsanity Item: Spellweave Gloves (#42113)"
    { 11751508, 42142 }, // "Craftsanity Item: Bold Dragon's Eye (#42142)"
    { 11751509, 42143 }, // "Craftsanity Item: Delicate Dragon's Eye (#42143)"
    { 11751510, 42144 }, // "Craftsanity Item: Runed Dragon's Eye (#42144)"
    { 11751511, 42145 }, // "Craftsanity Item: Sparkling Dragon's Eye (#42145)"
    { 11751512, 42146 }, // "Craftsanity Item: Lustrous Dragon's Eye (#42146)"
    { 11751513, 42148 }, // "Craftsanity Item: Brilliant Dragon's Eye (#42148)"
    { 11751514, 42149 }, // "Craftsanity Item: Smooth Dragon's Eye (#42149)"
    { 11751515, 42150 }, // "Craftsanity Item: Quick Dragon's Eye (#42150)"
    { 11751516, 42151 }, // "Craftsanity Item: Subtle Dragon's Eye (#42151)"
    { 11751517, 42152 }, // "Craftsanity Item: Flashing Dragon's Eye (#42152)"
    { 11751518, 42153 }, // "Craftsanity Item: Fractured Dragon's Eye (#42153)"
    { 11751519, 42154 }, // "Craftsanity Item: Precise Dragon's Eye (#42154)"
    { 11751520, 42155 }, // "Craftsanity Item: Stormy Dragon's Eye (#42155)"
    { 11751521, 42156 }, // "Craftsanity Item: Rigid Dragon's Eye (#42156)"
    { 11751522, 42157 }, // "Craftsanity Item: Thick Dragon's Eye (#42157)"
    { 11751523, 42158 }, // "Craftsanity Item: Mystic Dragon's Eye (#42158)"
    { 11751524, 42642 }, // "Craftsanity Item: Titanium Impact Band (#42642)"
    { 11751525, 42643 }, // "Craftsanity Item: Titanium Earthguard Ring (#42643)"
    { 11751526, 42644 }, // "Craftsanity Item: Titanium Spellshock Ring (#42644)"
    { 11751527, 42645 }, // "Craftsanity Item: Titanium Impact Choker (#42645)"
    { 11751528, 42646 }, // "Craftsanity Item: Titanium Earthguard Chain (#42646)"
    { 11751529, 42647 }, // "Craftsanity Item: Titanium Spellshock Necklace (#42647)"
    { 11751530, 42993 }, // "Craftsanity Item: Spicy Fried Herring (#42993)"
    { 11751531, 42994 }, // "Craftsanity Item: Rhinolicious Wormsteak (#42994)"
    { 11751532, 42995 }, // "Craftsanity Item: Hearty Rhino (#42995)"
    { 11751533, 42996 }, // "Craftsanity Item: Snapper Extreme (#42996)"
    { 11751534, 42997 }, // "Craftsanity Item: Blackened Worg Steak (#42997)"
    { 11751535, 42998 }, // "Craftsanity Item: Cuttlesteak (#42998)"
    { 11751536, 42999 }, // "Craftsanity Item: Blackened Dragonfin (#42999)"
    { 11751537, 43000 }, // "Craftsanity Item: Dragonfin Filet (#43000)"
    { 11751538, 43001 }, // "Craftsanity Item: Tracker Snacks (#43001)"
    { 11751539, 43004 }, // "Craftsanity Item: Critter Bites (#43004)"
    { 11751540, 43005 }, // "Craftsanity Item: Spiced Mammoth Treats (#43005)"
    { 11751541, 43015 }, // "Craftsanity Item: Fish Feast (#43015)"
    { 11751542, 43250 }, // "Craftsanity Item: Ring of Earthen Might (#43250)"
    { 11751543, 43251 }, // "Craftsanity Item: Ring of Scarlet Shadows (#43251)"
    { 11751544, 43252 }, // "Craftsanity Item: Windfire Band (#43252)"
    { 11751545, 43253 }, // "Craftsanity Item: Ring of Northern Tears (#43253)"
    { 11751546, 43260 }, // "Craftsanity Item: Eviscerator's Facemask (#43260)"
    { 11751547, 43261 }, // "Craftsanity Item: Overcast Headguard (#43261)"
    { 11751548, 43262 }, // "Craftsanity Item: Overcast Spaulders (#43262)"
    { 11751549, 43263 }, // "Craftsanity Item: Overcast Chestguard (#43263)"
    { 11751550, 43264 }, // "Craftsanity Item: Overcast Bracers (#43264)"
    { 11751551, 43265 }, // "Craftsanity Item: Overcast Handwraps (#43265)"
    { 11751552, 43266 }, // "Craftsanity Item: Overcast Belt (#43266)"
    { 11751553, 43271 }, // "Craftsanity Item: Overcast Leggings (#43271)"
    { 11751554, 43273 }, // "Craftsanity Item: Overcast Boots (#43273)"
    { 11751555, 43433 }, // "Craftsanity Item: Eviscerator's Shoulderpads (#43433)"
    { 11751556, 43434 }, // "Craftsanity Item: Eviscerator's Chestguard (#43434)"
    { 11751557, 43435 }, // "Craftsanity Item: Eviscerator's Bindings (#43435)"
    { 11751558, 43436 }, // "Craftsanity Item: Eviscerator's Gauntlets (#43436)"
    { 11751559, 43437 }, // "Craftsanity Item: Eviscerator's Waistguard (#43437)"
    { 11751560, 43438 }, // "Craftsanity Item: Eviscerator's Legguards (#43438)"
    { 11751561, 43439 }, // "Craftsanity Item: Eviscerator's Treads (#43439)"
    { 11751562, 43442 }, // "Craftsanity Item: Swiftarrow Belt (#43442)"
    { 11751563, 43443 }, // "Craftsanity Item: Swiftarrow Boots (#43443)"
    { 11751564, 43444 }, // "Craftsanity Item: Swiftarrow Bracers (#43444)"
    { 11751565, 43445 }, // "Craftsanity Item: Swiftarrow Hauberk (#43445)"
    { 11751566, 43446 }, // "Craftsanity Item: Swiftarrow Gauntlets (#43446)"
    { 11751567, 43447 }, // "Craftsanity Item: Swiftarrow Helm (#43447)"
    { 11751568, 43448 }, // "Craftsanity Item: Swiftarrow Leggings (#43448)"
    { 11751569, 43449 }, // "Craftsanity Item: Swiftarrow Shoulderguards (#43449)"
    { 11751570, 43450 }, // "Craftsanity Item: Stormhide Belt (#43450)"
    { 11751571, 43451 }, // "Craftsanity Item: Stormhide Stompers (#43451)"
    { 11751572, 43452 }, // "Craftsanity Item: Stormhide Wristguards (#43452)"
    { 11751573, 43453 }, // "Craftsanity Item: Stormhide Hauberk (#43453)"
    { 11751574, 43454 }, // "Craftsanity Item: Stormhide Grips (#43454)"
    { 11751575, 43455 }, // "Craftsanity Item: Stormhide Crown (#43455)"
    { 11751576, 43456 }, // "Craftsanity Item: Stormhide Legguards (#43456)"
    { 11751577, 43457 }, // "Craftsanity Item: Stormhide Shoulders (#43457)"
    { 11751578, 43458 }, // "Craftsanity Item: Giantmaim Legguards (#43458)"
    { 11751579, 43459 }, // "Craftsanity Item: Giantmaim Bracers (#43459)"
    { 11751580, 43461 }, // "Craftsanity Item: Revenant's Breastplate (#43461)"
    { 11751581, 43469 }, // "Craftsanity Item: Revenant's Treads (#43469)"
    { 11751582, 43478 }, // "Craftsanity Item: Gigantic Feast (#43478)"
    { 11751583, 43480 }, // "Craftsanity Item: Small Feast (#43480)"
    { 11751584, 43481 }, // "Craftsanity Item: Trollwoven Spaulders (#43481)"
    { 11751585, 43482 }, // "Craftsanity Item: Savage Titanium Ring (#43482)"
    { 11751586, 43484 }, // "Craftsanity Item: Trollwoven Girdle (#43484)"
    { 11751587, 43488 }, // "Craftsanity Item: Last Weeks Mammoth (#43488)"
    { 11751588, 43490 }, // "Craftsanity Item: Tasty Cupcake (#43490)"
    { 11751589, 43491 }, // "Craftsanity Item: Bad Clams (#43491)"
    { 11751590, 43492 }, // "Craftsanity Item: Haunted Herring (#43492)"
    { 11751591, 43495 }, // "Craftsanity Item: Earthgiving Legguards (#43495)"
    { 11751592, 43498 }, // "Craftsanity Item: Savage Titanium Band (#43498)"
    { 11751593, 43502 }, // "Craftsanity Item: Earthgiving Boots (#43502)"
    { 11751594, 43518 }, // "Craftsanity Item: Conjured Mana Pie (#43518)"
    { 11751595, 43523 }, // "Craftsanity Item: Conjured Mana Strudel (#43523)"
    { 11751596, 43582 }, // "Craftsanity Item: Titanium Frostguard Ring (#43582)"
    { 11751597, 43590 }, // "Craftsanity Item: Polar Vest (#43590)"
    { 11751598, 43591 }, // "Craftsanity Item: Polar Cord (#43591)"
    { 11751599, 43592 }, // "Craftsanity Item: Polar Boots (#43592)"
    { 11751600, 43593 }, // "Craftsanity Item: Icy Scale Chestguard (#43593)"
    { 11751601, 43594 }, // "Craftsanity Item: Icy Scale Belt (#43594)"
    { 11751602, 43595 }, // "Craftsanity Item: Icy Scale Boots (#43595)"
    { 11751603, 44413 }, // "Craftsanity Item: Mekgineer's Chopper (#44413)"
    { 11751604, 44447 }, // "Craftsanity Item: Dragonscale Ammo Pouch (#44447)"
    { 11751605, 44448 }, // "Craftsanity Item: Nerubian Reinforced Quiver (#44448)"
    { 11751606, 44836 }, // "Craftsanity Item: Pumpkin Pie (#44836)"
    { 11751607, 44837 }, // "Craftsanity Item: Spice Bread Stuffing (#44837)"
    { 11751608, 44838 }, // "Craftsanity Item: Slow-Roasted Turkey (#44838)"
    { 11751609, 44839 }, // "Craftsanity Item: Candied Sweet Potato (#44839)"
    { 11751610, 44840 }, // "Craftsanity Item: Cranberry Chutney (#44840)"
    { 11751611, 44930 }, // "Craftsanity Item: Windripper Boots (#44930)"
    { 11751612, 44931 }, // "Craftsanity Item: Windripper Leggings (#44931)"
    { 11751613, 44936 }, // "Craftsanity Item: Titanium Plating (#44936)"
    { 11751614, 44953 }, // "Craftsanity Item: Worg Tartare (#44953)"
    { 11751615, 45550 }, // "Craftsanity Item: Belt of the Titans (#45550)"
    { 11751616, 45551 }, // "Craftsanity Item: Indestructible Plate Girdle (#45551)"
    { 11751617, 45552 }, // "Craftsanity Item: Plate Girdle of Righteousness (#45552)"
    { 11751618, 45553 }, // "Craftsanity Item: Belt of Dragons (#45553)"
    { 11751619, 45554 }, // "Craftsanity Item: Blue Belt of Chaos (#45554)"
    { 11751620, 45555 }, // "Craftsanity Item: Death-warmed Belt (#45555)"
    { 11751621, 45556 }, // "Craftsanity Item: Belt of Arctic Life (#45556)"
    { 11751622, 45557 }, // "Craftsanity Item: Sash of Ancient Power (#45557)"
    { 11751623, 45558 }, // "Craftsanity Item: Cord of the White Dawn (#45558)"
    { 11751624, 45559 }, // "Craftsanity Item: Battlelord's Plate Boots (#45559)"
    { 11751625, 45560 }, // "Craftsanity Item: Spiked Deathdealers (#45560)"
    { 11751626, 45561 }, // "Craftsanity Item: Treads of Destiny (#45561)"
    { 11751627, 45562 }, // "Craftsanity Item: Boots of Living Scale (#45562)"
    { 11751628, 45563 }, // "Craftsanity Item: Lightning Grounded Boots (#45563)"
    { 11751629, 45564 }, // "Craftsanity Item: Footpads of Silence (#45564)"
    { 11751630, 45565 }, // "Craftsanity Item: Boots of Wintry Endurance (#45565)"
    { 11751631, 45566 }, // "Craftsanity Item: Spellslinger's Slippers (#45566)"
    { 11751632, 45567 }, // "Craftsanity Item: Savior's Slippers (#45567)"
    { 11751633, 45773 }, // "Craftsanity Item: Emerald Bag (#45773)"
    { 11751634, 46691 }, // "Craftsanity Item: Bread of the Dead (#46691)"
    { 11751635, 47499 }, // "Craftsanity Item: Flask of the North (#47499)"
    { 11751636, 47570 }, // "Craftsanity Item: Saronite Swordbreakers (#47570)"
    { 11751637, 47571 }, // "Craftsanity Item: Saronite Swordbreakers (#47571)"
    { 11751638, 47572 }, // "Craftsanity Item: Titanium Spikeguards (#47572)"
    { 11751639, 47573 }, // "Craftsanity Item: Titanium Spikeguards (#47573)"
    { 11751640, 47574 }, // "Craftsanity Item: Sunforged Bracers (#47574)"
    { 11751641, 47575 }, // "Craftsanity Item: Sunforged Bracers (#47575)"
    { 11751642, 47576 }, // "Craftsanity Item: Crusader's Dragonscale Bracers (#47576)"
    { 11751643, 47577 }, // "Craftsanity Item: Crusader's Dragonscale Bracers (#47577)"
    { 11751644, 47579 }, // "Craftsanity Item: Black Chitin Bracers (#47579)"
    { 11751645, 47580 }, // "Craftsanity Item: Black Chitin Bracers (#47580)"
    { 11751646, 47581 }, // "Craftsanity Item: Bracers of Swift Death (#47581)"
    { 11751647, 47582 }, // "Craftsanity Item: Bracers of Swift Death (#47582)"
    { 11751648, 47583 }, // "Craftsanity Item: Moonshadow Armguards (#47583)"
    { 11751649, 47584 }, // "Craftsanity Item: Moonshadow Armguards (#47584)"
    { 11751650, 47585 }, // "Craftsanity Item: Bejeweled Wizard's Bracers (#47585)"
    { 11751651, 47586 }, // "Craftsanity Item: Bejeweled Wizard's Bracers (#47586)"
    { 11751652, 47587 }, // "Craftsanity Item: Royal Moonshroud Bracers (#47587)"
    { 11751653, 47588 }, // "Craftsanity Item: Royal Moonshroud Bracers (#47588)"
    { 11751654, 47589 }, // "Craftsanity Item: Titanium Razorplate (#47589)"
    { 11751655, 47590 }, // "Craftsanity Item: Titanium Razorplate (#47590)"
    { 11751656, 47591 }, // "Craftsanity Item: Breastplate of the White Knight (#47591)"
    { 11751657, 47592 }, // "Craftsanity Item: Breastplate of the White Knight (#47592)"
    { 11751658, 47593 }, // "Craftsanity Item: Sunforged Breastplate (#47593)"
    { 11751659, 47594 }, // "Craftsanity Item: Sunforged Breastplate (#47594)"
    { 11751660, 47595 }, // "Craftsanity Item: Crusader's Dragonscale Breastplate (#47595)"
    { 11751661, 47596 }, // "Craftsanity Item: Crusader's Dragonscale Breastplate (#47596)"
    { 11751662, 47597 }, // "Craftsanity Item: Ensorcelled Nerubian Breastplate (#47597)"
    { 11751663, 47598 }, // "Craftsanity Item: Ensorcelled Nerubian Breastplate (#47598)"
    { 11751664, 47599 }, // "Craftsanity Item: Knightbane Carapace (#47599)"
    { 11751665, 47600 }, // "Craftsanity Item: Knightbane Carapace (#47600)"
    { 11751666, 47601 }, // "Craftsanity Item: Lunar Eclipse Robes (#47601)"
    { 11751667, 47602 }, // "Craftsanity Item: Lunar Eclipse Robes (#47602)"
    { 11751668, 47603 }, // "Craftsanity Item: Merlin's Robe (#47603)"
    { 11751669, 47604 }, // "Craftsanity Item: Merlin's Robe (#47604)"
    { 11751670, 47605 }, // "Craftsanity Item: Royal Moonshroud Robe (#47605)"
    { 11751671, 47606 }, // "Craftsanity Item: Royal Moonshroud Robe (#47606)"
    { 11751672, 49040 }, // "Craftsanity Item: Jeeves (#49040)"
    { 11751673, 49110 }, // "Craftsanity Item: Nightmare Tear (#49110)"
    { 11751674, 49890 }, // "Craftsanity Item: Deathfrost Boots (#49890)"
    { 11751675, 49891 }, // "Craftsanity Item: Leggings of Woven Death (#49891)"
    { 11751676, 49892 }, // "Craftsanity Item: Lightweave Leggings (#49892)"
    { 11751677, 49893 }, // "Craftsanity Item: Sandals of Consecration (#49893)"
    { 11751678, 49894 }, // "Craftsanity Item: Blessed Cenarion Boots (#49894)"
    { 11751679, 49895 }, // "Craftsanity Item: Footpads of Impending Death (#49895)"
    { 11751680, 49896 }, // "Craftsanity Item: Earthsoul Boots (#49896)"
    { 11751681, 49897 }, // "Craftsanity Item: Rock-Steady Treads (#49897)"
    { 11751682, 49898 }, // "Craftsanity Item: Legwraps of Unleashed Nature (#49898)"
    { 11751683, 49899 }, // "Craftsanity Item: Bladeborn Leggings (#49899)"
    { 11751684, 49900 }, // "Craftsanity Item: Lightning-Infused Leggings (#49900)"
    { 11751685, 49901 }, // "Craftsanity Item: Draconic Bonesplinter Legguards (#49901)"
    { 11751686, 49902 }, // "Craftsanity Item: Puresteel Legplates (#49902)"
    { 11751687, 49903 }, // "Craftsanity Item: Legplates of Painful Death (#49903)"
    { 11751688, 49904 }, // "Craftsanity Item: Pillars of Might (#49904)"
    { 11751689, 49905 }, // "Craftsanity Item: Protectors of Life (#49905)"
    { 11751690, 49906 }, // "Craftsanity Item: Hellfrozen Bonegrinders (#49906)"
    { 11751691, 49907 }, // "Craftsanity Item: Boots of Kingly Upheaval (#49907)"
    { 11751692, 50045 }, // "Craftsanity Item: Glyph of Eternal Water (#50045)"
    { 11751693, 50077 }, // "Craftsanity Item: Glyph of Quick Decay (#50077)"
    { 11751694, 50125 }, // "Craftsanity Item: Glyph of Rapid Rejuvenation (#50125)"
    { 11751695, 52020 }, // "Craftsanity Item: Shatter Rounds (#52020)"
    { 11751696, 52021 }, // "Craftsanity Item: Iceblade Arrow (#52021)"
    { 11751697, 54797 }, // "Craftsanity Item: Frosty Flying Carpet (#54797)"
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
