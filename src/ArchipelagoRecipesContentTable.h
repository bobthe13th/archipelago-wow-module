// GENERATED FILE - do not edit by hand.
// Regenerate with: python modules/archipelago_wow/tools/generate_content.py content/recipes.yaml
#pragma once

#include <cstdint>
#include <map>
#include <string>
#include <unordered_map>
#include <utility>

namespace ArchipelagoRECIPESContent {
inline constexpr std::pair<char const*, uint32_t> LOCATIONS_RAW[] = {
    {"Codex of Holy Word: Shield III (#3122)", 6003122},
    {"Grimoire of Immolate III (#4200)", 6004200},
    {"Grimoire of Inferno (#9214)", 6009214},
    {"Pattern: Fine Leather Boots (#2406)", 6002406},
    {"Pattern: White Leather Jerkin (#2407)", 6002407},
    {"Pattern: Fine Leather Gloves (#2408)", 6002408},
    {"Pattern: Dark Leather Tunic (#2409)", 6002409},
    {"Recipe: Elixir of Lesser Agility (#3396)", 6003396},
    {"Recipe: Swiftness Potion (#2555)", 6002555},
    {"Pattern: Red Linen Robe (#2598)", 6002598},
    {"Pattern: Gray Woolen Robe (#2601)", 6002601},
    {"Recipe: Goretusk Liver Pie (#2697)", 6002697},
    {"Recipe: Westfall Stew (#728)", 6000728},
    {"Recipe: Cooked Crab Claw (#2698)", 6002698},
    {"Recipe: Redridge Goulash (#2699)", 6002699},
    {"Recipe: Succulent Pork Ribs (#2700)", 6002700},
    {"Recipe: Seasoned Wolf Kabob (#2701)", 6002701},
    {"Plans: Runed Copper Breastplate (#2881)", 6002881},
    {"Plans: Silvered Bronze Breastplate (#5578)", 6005578},
    {"Recipe: Beer Basted Boar Ribs (#2889)", 6002889},
    {"Recipe: Minor Magic Resistance Potion (#3393)", 6003393},
    {"Recipe: Potion of Curing (#3394)", 6003394},
    {"Recipe: Limited Invulnerability Potion (#3395)", 6003395},
    {"Recipe: Elixir of Ogre's Strength (#6211)", 6006211},
    {"Recipe: Elixir of Minor Agility (#2553)", 6002553},
    {"Plans: Deadly Bronze Poniard (#2883)", 6002883},
    {"Plans: Mighty Iron Hammer (#3608)", 6003608},
    {"Plans: Copper Chain Vest (#3609)", 6003609},
    {"Plans: Gemmed Copper Gauntlets (#3610)", 6003610},
    {"Plans: Silvered Bronze Shoulders (#2882)", 6002882},
    {"Plans: Green Iron Boots (#3611)", 6003611},
    {"Plans: Green Iron Gauntlets (#3612)", 6003612},
    {"Recipe: Crocolisk Steak (#3678)", 6003678},
    {"Recipe: Blood Sausage (#3679)", 6003679},
    {"Recipe: Murloc Fin Soup (#3680)", 6003680},
    {"Recipe: Crocolisk Gumbo (#3681)", 6003681},
    {"Recipe: Curiously Tasty Omelet (#3682)", 6003682},
    {"Recipe: Gooey Spider Cake (#3683)", 6003683},
    {"Recipe: Big Bear Steak (#3734)", 6003734},
    {"Recipe: Hot Lion Chops (#3735)", 6003735},
    {"Recipe: Tasty Lion Steak (#3736)", 6003736},
    {"Recipe: Soothing Turtle Bisque (#3737)", 6003737},
    {"Recipe: Shadow Oil (#6068)", 6006068},
    {"Recipe: Elixir of Fortitude (#3830)", 6003830},
    {"Recipe: Major Troll's Blood Elixir (#3831)", 6003831},
    {"Recipe: Elixir of Detect Lesser Invisibility (#3832)", 6003832},
    {"Recipe: Frost Oil (#14634)", 6014634},
    {"Plans: Hardened Iron Shortsword (#12162)", 6012162},
    {"Plans: Jade Serpentblade (#3866)", 6003866},
    {"Plans: Solid Iron Maul (#10858)", 6010858},
    {"Plans: Golden Iron Destroyer (#3867)", 6003867},
    {"Plans: Moonsteel Broadsword (#12163)", 6012163},
    {"Plans: Frost Tiger Blade (#3868)", 6003868},
    {"Plans: Massive Iron Axe (#12164)", 6012164},
    {"Plans: Shadow Crescent Axe (#3869)", 6003869},
    {"Plans: Golden Scale Coif (#6047)", 6006047},
    {"Plans: Green Iron Shoulders (#3870)", 6003870},
    {"Plans: Golden Scale Shoulders (#3871)", 6003871},
    {"Plans: Golden Scale Leggings (#3872)", 6003872},
    {"Plans: Golden Scale Cuirass (#3873)", 6003873},
    {"Plans: Polished Steel Boots (#3874)", 6003874},
    {"Plans: Golden Scale Boots (#3875)", 6003875},
    {"Pattern: Green Woolen Bag (#4292)", 6004292},
    {"Pattern: Hillman's Leather Vest (#4293)", 6004293},
    {"Pattern: Dark Leather Gloves (#7360)", 6007360},
    {"Pattern: Hillman's Belt (#4294)", 6004294},
    {"Pattern: Dark Leather Shoulders (#4296)", 6004296},
    {"Pattern: Barbaric Gloves (#4297)", 6004297},
    {"Pattern: Green Leather Armor (#7613)", 6007613},
    {"Pattern: Guardian Armor (#4299)", 6004299},
    {"Pattern: Guardian Belt (#4298)", 6004298},
    {"Pattern: Guardian Leather Bracers (#4300)", 6004300},
    {"Pattern: Gem-studded Leather Belt (#14635)", 6014635},
    {"Pattern: Barbaric Belt (#4301)", 6004301},
    {"Pattern: Heavy Woolen Cloak (#4346)", 6004346},
    {"Pattern: Red Woolen Boots (#4345)", 6004345},
    {"Pattern: Reinforced Woolen Shoulders (#4347)", 6004347},
    {"Pattern: Phoenix Pants (#4349)", 6004349},
    {"Pattern: Azure Silk Gloves (#7114)", 6007114},
    {"Pattern: Spider Silk Slippers (#4350)", 6004350},
    {"Pattern: Enchanter's Cowl (#14630)", 6014630},
    {"Pattern: Shadow Hood (#4351)", 6004351},
    {"Pattern: Boots of the Enchanter (#4352)", 6004352},
    {"Pattern: Icy Cloak (#4355)", 6004355},
    {"Pattern: Spider Belt (#4353)", 6004353},
    {"Pattern: Star Belt (#4356)", 6004356},
    {"Pattern: Phoenix Gloves (#4348)", 6004348},
    {"Pattern: Bright Yellow Shirt (#14627)", 6014627},
    {"Pattern: Dark Silk Shirt (#6401)", 6006401},
    {"Pattern: Rich Purple Silk Shirt (#4354)", 6004354},
    {"Pattern: Black Swashbuckler's Shirt (#10728)", 6010728},
    {"Schematic: Mechanical Squirrel Box (#4408)", 6004408},
    {"Schematic: Small Seaforium Charge (#4409)", 6004409},
    {"Schematic: Lovingly Crafted Boomstick (#13309)", 6013309},
    {"Schematic: Shadow Goggles (#4410)", 6004410},
    {"Schematic: Flame Deflector (#4411)", 6004411},
    {"Schematic: Minor Recombobulator (#14639)", 6014639},
    {"Schematic: Moonsight Rifle (#4412)", 6004412},
    {"Schematic: Ice Deflector (#13308)", 6013308},
    {"Schematic: Discombobulator Ray (#4413)", 6004413},
    {"Schematic: Portable Bronze Mortar (#4414)", 6004414},
    {"Schematic: Craftsman's Monocle (#4415)", 6004415},
    {"Schematic: Goblin Land Mine (#4416)", 6004416},
    {"Schematic: Mechanical Dragonling (#13311)", 6013311},
    {"Schematic: Gnomish Cloaking Device (#7742)", 6007742},
    {"Schematic: Large Seaforium Charge (#4417)", 6004417},
    {"Schematic: Accurate Scope (#13310)", 6013310},
    {"Recipe: Barbecued Buzzard Wing (#4609)", 6004609},
    {"Pattern: Raptor Hide Harness (#13287)", 6013287},
    {"Pattern: Raptor Hide Belt (#13288)", 6013288},
    {"Recipe: Discolored Healing Potion (#4597)", 6004597},
    {"Recipe: Lesser Stoneshield Potion (#4624)", 6004624},
    {"Pattern: Kodo Hide Bag (#5083)", 6005083},
    {"Codex of Shadow Protection II (#8993)", 6008993},
    {"Recipe: Kaldorei Spider Kabob (#5482)", 6005482},
    {"Recipe: Scorpid Surprise (#5483)", 6005483},
    {"Recipe: Roasted Kodo Meat (#5484)", 6005484},
    {"Recipe: Fillet of Frenzy (#5485)", 6005485},
    {"Recipe: Strider Stew (#5486)", 6005486},
    {"Recipe: Dig Rat Stew (#5487)", 6005487},
    {"Recipe: Crispy Lizard Tail (#5488)", 6005488},
    {"Recipe: Lean Venison (#5489)", 6005489},
    {"Recipe: Clam Chowder (#5528)", 6005528},
    {"Plans: Iridescent Hammer (#5543)", 6005543},
    {"Recipe: Rage Potion (#5640)", 6005640},
    {"Recipe: Great Rage Potion (#5643)", 6005643},
    {"Recipe: Free Action Potion (#5642)", 6005642},
    {"Pattern: Red Linen Bag (#5771)", 6005771},
    {"Pattern: Red Woolen Bag (#5772)", 6005772},
    {"Pattern: Robes of Arcana (#5773)", 6005773},
    {"Pattern: Green Silk Pack (#5774)", 6005774},
    {"Pattern: Black Silk Pack (#5775)", 6005775},
    {"Pattern: Murloc Scale Belt (#5786)", 6005786},
    {"Pattern: Murloc Scale Breastplate (#5787)", 6005787},
    {"Pattern: Thick Murloc Armor (#5788)", 6005788},
    {"Pattern: Murloc Scale Bracers (#5789)", 6005789},
    {"Pattern: Fine Leather Pants (#5972)", 6005972},
    {"Pattern: Barbaric Leggings (#5973)", 6005973},
    {"Pattern: Guardian Cloak (#5974)", 6005974},
    {"Recipe: Giant Clam Scorcho (#6039)", 6006039},
    {"Plans: Iron Shield Spike (#6044)", 6006044},
    {"Plans: Iron Counterweight (#6045)", 6006045},
    {"Plans: Steel Weapon Chain (#6046)", 6006046},
    {"Recipe: Holy Protection Potion (#6053)", 6006053},
    {"Recipe: Shadow Protection Potion (#6054)", 6006054},
    {"Recipe: Fire Protection Potion (#6055)", 6006055},
    {"Recipe: Frost Protection Potion (#6056)", 6006056},
    {"Recipe: Nature Protection Potion (#6057)", 6006057},
    {"Formula: Enchant Chest - Minor Mana (#6342)", 6006342},
    {"Pattern: Red Linen Vest (#6271)", 6006271},
    {"Pattern: Blue Linen Vest (#6270)", 6006270},
    {"Pattern: Blue Linen Robe (#6272)", 6006272},
    {"Pattern: Blue Overalls (#6274)", 6006274},
    {"Pattern: Greater Adept's Robe (#6275)", 6006275},
    {"Recipe: Brilliant Smallfish (#6325)", 6006325},
    {"Recipe: Slitherskin Mackerel (#6326)", 6006326},
    {"Recipe: Longjaw Mud Snapper (#6328)", 6006328},
    {"Recipe: Loch Frenzy Delight (#6329)", 6006329},
    {"Recipe: Bristle Whisker Catfish (#6330)", 6006330},
    {"Formula: Enchant Bracer - Minor Spirit (#6344)", 6006344},
    {"Formula: Enchant Chest - Lesser Mana (#6346)", 6006346},
    {"Formula: Enchant Bracer - Minor Strength (#6347)", 6006347},
    {"Formula: Enchant Weapon - Minor Beastslayer (#6348)", 6006348},
    {"Formula: Enchant 2H Weapon - Lesser Intellect (#6349)", 6006349},
    {"Recipe: Rainbow Fin Albacore (#6368)", 6006368},
    {"Recipe: Rockscale Cod (#6369)", 6006369},
    {"Formula: Enchant Bracer - Lesser Spirit (#6375)", 6006375},
    {"Formula: Enchant Boots - Minor Agility (#6377)", 6006377},
    {"Pattern: Stylish Blue Shirt (#6390)", 6006390},
    {"Pattern: Stylish Green Shirt (#6391)", 6006391},
    {"Manual: Heavy Silk Bandage (#16112)", 6016112},
    {"Manual: Strong Anti-Venom (#6454)", 6006454},
    {"Pattern: Deviate Scale Cloak (#6474)", 6006474},
    {"Pattern: Deviate Scale Gloves (#6475)", 6006475},
    {"Pattern: Deviate Scale Belt (#6476)", 6006476},
    {"Recipe: Savory Deviate Delight (#6661)", 6006661},
    {"Recipe: Elixir of Giant Growth (#6663)", 6006663},
    {"Schematic: Flash Bomb (#6672)", 6006672},
    {"Pattern: Moonglow Vest (#6710)", 6006710},
    {"Schematic: EZ-Thro Dynamite (#6716)", 6006716},
    {"Plans: Ironforge Breastplate (#6735)", 6006735},
    {"Recipe: Smoked Bear Meat (#6892)", 6006892},
    {"Pattern: Hands of Darkness (#7092)", 6007092},
    {"Pattern: Truefaith Gloves (#7091)", 6007091},
    {"Pattern: Green Silk Armor (#7090)", 6007090},
    {"Pattern: Azure Silk Cloak (#7089)", 6007089},
    {"Pattern: Crimson Silk Cloak (#7087)", 6007087},
    {"Pattern: Crimson Silk Shoulders (#7084)", 6007084},
    {"Pattern: Azure Shoulders (#7085)", 6007085},
    {"Pattern: Earthen Silk Belt (#7086)", 6007086},
    {"Pattern: Crimson Silk Robe (#7088)", 6007088},
    {"Pattern: Rugged Leather Pants (#7288)", 6007288},
    {"Pattern: Black Whelp Cloak (#7289)", 6007289},
    {"Pattern: Red Whelp Gloves (#7290)", 6007290},
    {"Pattern: Herbalist's Gloves (#7361)", 6007361},
    {"Pattern: Earthen Leather Shoulders (#7362)", 6007362},
    {"Pattern: Pilferer's Gloves (#7363)", 6007363},
    {"Pattern: Heavy Earthen Gloves (#7364)", 6007364},
    {"Pattern: Dusky Leather Leggings (#7449)", 6007449},
    {"Pattern: Green Whelp Armor (#7450)", 6007450},
    {"Pattern: Green Whelp Bracers (#7451)", 6007451},
    {"Pattern: Dusky Boots (#7452)", 6007452},
    {"Pattern: Swift Boots (#7453)", 6007453},
    {"Schematic: Gnomish Universal Remote (#7560)", 6007560},
    {"Schematic: Goblin Jumper Cables (#7561)", 6007561},
    {"Recipe: Thistle Tea (#7678)", 6007678},
    {"Plans: Barbaric Iron Shoulders (#7978)", 6007978},
    {"Plans: Barbaric Iron Breastplate (#7979)", 6007979},
    {"Plans: Barbaric Iron Helm (#7980)", 6007980},
    {"Plans: Barbaric Iron Boots (#7981)", 6007981},
    {"Plans: Barbaric Iron Gloves (#7982)", 6007982},
    {"Plans: Heavy Mithril Pants (#7975)", 6007975},
    {"Plans: Mithril Scale Bracers (#7995)", 6007995},
    {"Plans: Mithril Shield Spike (#7976)", 6007976},
    {"Plans: Ornate Mithril Pants (#7983)", 6007983},
    {"Plans: Ornate Mithril Gloves (#7984)", 6007984},
    {"Plans: Ornate Mithril Shoulder (#7985)", 6007985},
    {"Plans: Mithril Spurs (#7989)", 6007989},
    {"Plans: Mithril Scale Shoulders (#7991)", 6007991},
    {"Plans: Heavy Mithril Helm (#7990)", 6007990},
    {"Plans: Blue Glittering Axe (#7992)", 6007992},
    {"Plans: Wicked Mithril Blade (#8029)", 6008029},
    {"Plans: Dazzling Mithril Rapier (#7993)", 6007993},
    {"Plans: Runed Mithril Hammer (#8028)", 6008028},
    {"Plans: Ebon Shiv (#8030)", 6008030},
    {"Pattern: Comfortable Leather Hat (#8384)", 6008384},
    {"Pattern: Turtle Scale Gloves (#8385)", 6008385},
    {"Pattern: Nightscape Shoulders (#8409)", 6008409},
    {"Pattern: Big Voodoo Robe (#8386)", 6008386},
    {"Pattern: Tough Scorpid Breastplate (#8395)", 6008395},
    {"Pattern: Wild Leather Shoulders (#8403)", 6008403},
    {"Pattern: Big Voodoo Mask (#8387)", 6008387},
    {"Pattern: Tough Scorpid Bracers (#8397)", 6008397},
    {"Pattern: Tough Scorpid Gloves (#8398)", 6008398},
    {"Pattern: Wild Leather Vest (#8404)", 6008404},
    {"Pattern: Wild Leather Helmet (#8405)", 6008405},
    {"Pattern: Tough Scorpid Boots (#8399)", 6008399},
    {"Pattern: Big Voodoo Pants (#8389)", 6008389},
    {"Pattern: Big Voodoo Cloak (#8390)", 6008390},
    {"Pattern: Tough Scorpid Shoulders (#8400)", 6008400},
    {"Pattern: Wild Leather Boots (#8406)", 6008406},
    {"Pattern: Tough Scorpid Leggings (#8401)", 6008401},
    {"Pattern: Tough Scorpid Helm (#8402)", 6008402},
    {"Pattern: Wild Leather Leggings (#8407)", 6008407},
    {"Pattern: Wild Leather Cloak (#8408)", 6008408},
    {"Manual: Mageweave Bandage (#16113)", 6016113},
    {"Artisan First Aid - Heal Thyself (#16085)", 6016085},
    {"Recipe: Magic Resistance Potion (#9293)", 6009293},
    {"Plans: Inlaid Mithril Cylinder (#10713)", 6010713},
    {"Recipe: Goblin Rocket Fuel (#10644)", 6010644},
    {"Recipe: Wildvine Potion (#9294)", 6009294},
    {"Recipe: Philosopher's Stone (#9303)", 6009303},
    {"Recipe: Invisibility Potion (#9295)", 6009295},
    {"Recipe: Gift of Arthas (#9296)", 6009296},
    {"Recipe: Elixir of Dream Vision (#9297)", 6009297},
    {"Recipe: Elixir of Giants (#9298)", 6009298},
    {"Recipe: Ghost Dye (#9302)", 6009302},
    {"Recipe: Elixir of Shadow Power (#9301)", 6009301},
    {"Recipe: Elixir of Demonslaying (#9300)", 6009300},
    {"Recipe: Transmute Iron to Gold (#9304)", 6009304},
    {"Recipe: Transmute Mithril to Truesilver (#9305)", 6009305},
    {"Plans: Golden Scale Gauntlets (#9367)", 6009367},
    {"Pattern: Colorful Kilt (#10316)", 6010316},
    {"Pattern: Red Mageweave Vest (#10300)", 6010300},
    {"Pattern: White Bandit Mask (#10301)", 6010301},
    {"Pattern: Red Mageweave Pants (#10302)", 6010302},
    {"Pattern: Orange Martial Shirt (#10311)", 6010311},
    {"Pattern: Red Mageweave Gloves (#10312)", 6010312},
    {"Pattern: Lavender Mageweave Shirt (#10314)", 6010314},
    {"Pattern: Red Mageweave Shoulders (#10315)", 6010315},
    {"Pattern: Pink Mageweave Shirt (#10317)", 6010317},
    {"Pattern: Admiral's Hat (#10318)", 6010318},
    {"Pattern: Red Mageweave Headband (#10320)", 6010320},
    {"Pattern: Tuxedo Shirt (#10321)", 6010321},
    {"Pattern: Shadoweave Mask (#10463)", 6010463},
    {"Pattern: Tuxedo Pants (#10323)", 6010323},
    {"Pattern: White Wedding Dress (#10325)", 6010325},
    {"Pattern: Tuxedo Jacket (#10326)", 6010326},
    {"Plans: Silvered Bronze Leggings (#10424)", 6010424},
    {"Schematic: Bright-Eye Goggles (#10601)", 6010601},
    {"Schematic: Deadly Scope (#10602)", 6010602},
    {"Schematic: Catseye Ultra Goggles (#10603)", 6010603},
    {"Schematic: Mithril Heavy-bore Rifle (#10604)", 6010604},
    {"Schematic: Spellpower Goggles Xtreme (#10605)", 6010605},
    {"Schematic: Parachute Cloak (#10606)", 6010606},
    {"Schematic: Deepdive Helmet (#10607)", 6010607},
    {"Schematic: Sniper Scope (#10608)", 6010608},
    {"Schematic: Mithril Mechanical Dragonling (#10609)", 6010609},
    {"Formula: Enchant 2H Weapon - Lesser Spirit (#11038)", 6011038},
    {"Formula: Enchant Cloak - Minor Agility (#11039)", 6011039},
    {"Formula: Enchant Shield - Lesser Protection (#11081)", 6011081},
    {"Formula: Enchant Cloak - Lesser Shadow Resistance (#11098)", 6011098},
    {"Formula: Enchant Bracer - Lesser Strength (#11101)", 6011101},
    {"Formula: Enchant Gloves - Mining (#11150)", 6011150},
    {"Formula: Enchant Gloves - Herbalism (#11151)", 6011151},
    {"Formula: Enchant Gloves - Fishing (#11152)", 6011152},
    {"Formula: Enchant Bracer - Lesser Deflection (#11163)", 6011163},
    {"Formula: Enchant Weapon - Lesser Beastslayer (#11164)", 6011164},
    {"Formula: Enchant Weapon - Lesser Elemental Slayer (#11165)", 6011165},
    {"Formula: Enchant Boots - Lesser Spirit (#11167)", 6011167},
    {"Formula: Enchant Shield - Lesser Block (#11168)", 6011168},
    {"Formula: Enchant Gloves - Skinning (#11166)", 6011166},
    {"Formula: Enchant Shield - Stamina (#11202)", 6011202},
    {"Formula: Enchant Gloves - Advanced Mining (#11203)", 6011203},
    {"Formula: Enchant Bracer - Greater Spirit (#11204)", 6011204},
    {"Formula: Enchant Gloves - Advanced Herbalism (#11205)", 6011205},
    {"Formula: Enchant Cloak - Lesser Agility (#11206)", 6011206},
    {"Formula: Enchant Weapon - Fiery Weapon (#11207)", 6011207},
    {"Formula: Enchant Weapon - Demonslaying (#11208)", 6011208},
    {"Formula: Enchant Bracer - Deflection (#11223)", 6011223},
    {"Formula: Enchant Shield - Frost Resistance (#11224)", 6011224},
    {"Formula: Enchant Bracer - Greater Stamina (#11225)", 6011225},
    {"Formula: Enchant Gloves - Riding Skill (#11226)", 6011226},
    {"Plans: Dark Iron Pulverizer (#11610)", 6011610},
    {"Plans: Dark Iron Mail (#11614)", 6011614},
    {"Plans: Dark Iron Sunderer (#11611)", 6011611},
    {"Plans: Dark Iron Shoulders (#11615)", 6011615},
    {"Plans: Dark Iron Plate (#11612)", 6011612},
    {"Formula: Smoking Heart of the Mountain (#11813)", 6011813},
    {"Schematic: Pet Bombling (#11828)", 6011828},
    {"Schematic: Lil' Smoky (#11827)", 6011827},
    {"Recipe: Lean Wolf Steak (#12227)", 6012227},
    {"Recipe: Roast Raptor (#12228)", 6012228},
    {"Recipe: Hot Wolf Ribs (#12229)", 6012229},
    {"Recipe: Jungle Stew (#12231)", 6012231},
    {"Recipe: Carrion Surprise (#12232)", 6012232},
    {"Recipe: Mystery Stew (#12233)", 6012233},
    {"Recipe: Dragonbreath Chili (#12239)", 6012239},
    {"Recipe: Heavy Kodo Stew (#12240)", 6012240},
    {"Recipe: Spiced Chili Crab (#16111)", 6016111},
    {"Recipe: Monster Omelet (#16110)", 6016110},
    {"Recipe: Crispy Bat Wing (#12226)", 6012226},
    {"Plans: Searing Golden Blade (#12261)", 6012261},
    {"Plans: Thorium Armor (#12682)", 6012682},
    {"Plans: Thorium Belt (#12683)", 6012683},
    {"Plans: Thorium Bracers (#12684)", 6012684},
    {"Plans: Radiant Belt (#12685)", 6012685},
    {"Plans: Imperial Plate Shoulders (#12687)", 6012687},
    {"Plans: Imperial Plate Belt (#12688)", 6012688},
    {"Plans: Radiant Breastplate (#12689)", 6012689},
    {"Plans: Imperial Plate Bracers (#12690)", 6012690},
    {"Plans: Wildthorn Mail (#12691)", 6012691},
    {"Plans: Thorium Shield Spike (#12692)", 6012692},
    {"Plans: Thorium Boots (#12693)", 6012693},
    {"Plans: Thorium Helm (#12694)", 6012694},
    {"Plans: Radiant Gloves (#12695)", 6012695},
    {"Plans: Fiery Plate Gauntlets (#12699)", 6012699},
    {"Plans: Radiant Boots (#12697)", 6012697},
    {"Plans: Imperial Plate Boots (#12700)", 6012700},
    {"Plans: Imperial Plate Helm (#12701)", 6012701},
    {"Plans: Radiant Circlet (#12702)", 6012702},
    {"Plans: Dawnbringer Shoulders (#12698)", 6012698},
    {"Plans: Storm Gauntlets (#12703)", 6012703},
    {"Plans: Thorium Leggings (#12704)", 6012704},
    {"Plans: Imperial Plate Chest (#12705)", 6012705},
    {"Plans: Runic Plate Shoulders (#12706)", 6012706},
    {"Plans: Runic Plate Boots (#12707)", 6012707},
    {"Plans: Demon Forged Breastplate (#12696)", 6012696},
    {"Plans: Whitesoul Helm (#12711)", 6012711},
    {"Plans: Radiant Leggings (#12713)", 6012713},
    {"Plans: Runic Plate Helm (#12714)", 6012714},
    {"Plans: Helm of the Great Chief (#12716)", 6012716},
    {"Plans: Lionheart Helm (#12717)", 6012717},
    {"Plans: Imperial Plate Leggings (#12715)", 6012715},
    {"Plans: Runic Breastplate (#12718)", 6012718},
    {"Plans: Runic Plate Leggings (#12719)", 6012719},
    {"Plans: Stronghold Gauntlets (#12720)", 6012720},
    {"Plans: Enchanted Thorium Helm (#12725)", 6012725},
    {"Plans: Enchanted Thorium Leggings (#12726)", 6012726},
    {"Plans: Enchanted Thorium Breastplate (#12727)", 6012727},
    {"Plans: Invulnerable Mail (#12728)", 6012728},
    {"Plans: Ornate Thorium Handaxe (#12819)", 6012819},
    {"Plans: Dawn's Edge (#12821)", 6012821},
    {"Plans: Huge Thorium Battleaxe (#12823)", 6012823},
    {"Plans: Enchanted Battlehammer (#12824)", 6012824},
    {"Plans: Blazing Rapier (#12825)", 6012825},
    {"Plans: Serenity (#12827)", 6012827},
    {"Plans: Volcanic Hammer (#12828)", 6012828},
    {"Plans: Corruption (#12830)", 6012830},
    {"Plans: Hammer of the Titans (#12833)", 6012833},
    {"Plans: Arcanite Champion (#12834)", 6012834},
    {"Plans: Annihilator (#12835)", 6012835},
    {"Plans: Frostguard (#12836)", 6012836},
    {"Plans: Masterwork Stormhammer (#12837)", 6012837},
    {"Plans: Arcanite Reaper (#12838)", 6012838},
    {"Plans: Heartseeker (#12839)", 6012839},
    {"Recipe: Transmute Arcanite (#12958)", 6012958},
    {"Recipe: Mighty Rage Potion (#13476)", 6013476},
    {"Recipe: Superior Mana Potion (#13477)", 6013477},
    {"Recipe: Elixir of Superior Defense (#13478)", 6013478},
    {"Recipe: Elixir of the Sages (#13479)", 6013479},
    {"Recipe: Major Healing Potion (#13480)", 6013480},
    {"Recipe: Elixir of Brute Force (#13481)", 6013481},
    {"Recipe: Transmute Air to Fire (#13482)", 6013482},
    {"Recipe: Transmute Fire to Earth (#13483)", 6013483},
    {"Recipe: Transmute Earth to Water (#13484)", 6013484},
    {"Recipe: Transmute Water to Air (#13485)", 6013485},
    {"Recipe: Transmute Undeath to Water (#13486)", 6013486},
    {"Recipe: Transmute Water to Undeath (#13487)", 6013487},
    {"Recipe: Transmute Life to Earth (#13488)", 6013488},
    {"Recipe: Transmute Earth to Life (#13489)", 6013489},
    {"Recipe: Greater Stoneshield Potion (#13490)", 6013490},
    {"Recipe: Elixir of the Mongoose (#13491)", 6013491},
    {"Recipe: Purification Potion (#13492)", 6013492},
    {"Recipe: Greater Arcane Elixir (#13493)", 6013493},
    {"Recipe: Greater Fire Protection Potion (#13494)", 6013494},
    {"Recipe: Greater Frost Protection Potion (#13495)", 6013495},
    {"Recipe: Greater Nature Protection Potion (#13496)", 6013496},
    {"Recipe: Greater Arcane Protection Potion (#13497)", 6013497},
    {"Recipe: Greater Shadow Protection Potion (#13499)", 6013499},
    {"Recipe: Major Mana Potion (#13501)", 6013501},
    {"Recipe: Alchemist's Stone (#13517)", 6013517},
    {"Recipe: Potion of Petrification (#13518)", 6013518},
    {"Recipe: Flask of the Titans (#13519)", 6013519},
    {"Recipe: Flask of Distilled Wisdom (#13520)", 6013520},
    {"Recipe: Flask of Supreme Power (#13521)", 6013521},
    {"Recipe: Flask of Chromatic Resistance (#13522)", 6013522},
    {"Recipe: Spotted Yellowtail (#13939)", 6013939},
    {"Recipe: Cooked Glossy Mightfish (#13940)", 6013940},
    {"Recipe: Grilled Squid (#13942)", 6013942},
    {"Recipe: Filet of Redgill (#13941)", 6013941},
    {"Recipe: Hot Smoked Bass (#13943)", 6013943},
    {"Recipe: Nightfin Soup (#13945)", 6013945},
    {"Recipe: Poached Sunscale Salmon (#13946)", 6013946},
    {"Recipe: Lobster Stew (#13947)", 6013947},
    {"Recipe: Mightfish Steak (#13948)", 6013948},
    {"Recipe: Baked Salmon (#13949)", 6013949},
    {"Pattern: Frostweave Tunic (#14466)", 6014466},
    {"Pattern: Frostweave Robe (#14467)", 6014467},
    {"Pattern: Runecloth Bag (#14468)", 6014468},
    {"Pattern: Runecloth Robe (#14469)", 6014469},
    {"Pattern: Runecloth Tunic (#14470)", 6014470},
    {"Pattern: Cindercloth Vest (#14471)", 6014471},
    {"Pattern: Runecloth Cloak (#14472)", 6014472},
    {"Pattern: Ghostweave Belt (#14473)", 6014473},
    {"Pattern: Frostweave Gloves (#14474)", 6014474},
    {"Pattern: Cindercloth Gloves (#14476)", 6014476},
    {"Pattern: Ghostweave Gloves (#14477)", 6014477},
    {"Pattern: Brightcloth Robe (#14478)", 6014478},
    {"Pattern: Brightcloth Gloves (#14479)", 6014479},
    {"Pattern: Ghostweave Vest (#14480)", 6014480},
    {"Pattern: Runecloth Gloves (#14481)", 6014481},
    {"Pattern: Cindercloth Cloak (#14482)", 6014482},
    {"Pattern: Felcloth Pants (#14483)", 6014483},
    {"Pattern: Brightcloth Cloak (#14484)", 6014484},
    {"Pattern: Wizardweave Leggings (#14485)", 6014485},
    {"Pattern: Cloak of Fire (#14486)", 6014486},
    {"Pattern: Runecloth Boots (#14488)", 6014488},
    {"Pattern: Frostweave Pants (#14489)", 6014489},
    {"Pattern: Cindercloth Pants (#14490)", 6014490},
    {"Pattern: Robe of Winter Night (#14493)", 6014493},
    {"Pattern: Felcloth Boots (#14492)", 6014492},
    {"Pattern: Runecloth Pants (#14491)", 6014491},
    {"Pattern: Brightcloth Pants (#14494)", 6014494},
    {"Pattern: Mooncloth Leggings (#14497)", 6014497},
    {"Pattern: Ghostweave Pants (#14495)", 6014495},
    {"Pattern: Felcloth Hood (#14496)", 6014496},
    {"Pattern: Runecloth Headband (#14498)", 6014498},
    {"Pattern: Mooncloth Bag (#14499)", 6014499},
    {"Pattern: Wizardweave Robe (#14500)", 6014500},
    {"Pattern: Mooncloth Vest (#14501)", 6014501},
    {"Pattern: Mooncloth Shoulders (#14507)", 6014507},
    {"Pattern: Runecloth Shoulders (#14504)", 6014504},
    {"Pattern: Wizardweave Turban (#14505)", 6014505},
    {"Pattern: Felcloth Robe (#14506)", 6014506},
    {"Pattern: Mooncloth Circlet (#14509)", 6014509},
    {"Pattern: Felcloth Shoulders (#14508)", 6014508},
    {"Pattern: Gloves of Spell Mastery (#14511)", 6014511},
    {"Pattern: Bottomless Bag (#14510)", 6014510},
    {"Pattern: Truefaith Vestments (#14512)", 6014512},
    {"Pattern: Robe of the Archmage (#14513)", 6014513},
    {"Pattern: Robe of the Void (#14514)", 6014514},
    {"Grimoire of Doom (#4213)", 6004213},
    {"Pattern: Mooncloth (#14526)", 6014526},
    {"Pattern: Heavy Scorpid Bracers (#15724)", 6015724},
    {"Pattern: Wicked Leather Gauntlets (#15725)", 6015725},
    {"Pattern: Green Dragonscale Breastplate (#15726)", 6015726},
    {"Pattern: Heavy Scorpid Vest (#15727)", 6015727},
    {"Pattern: Wicked Leather Bracers (#15728)", 6015728},
    {"Pattern: Chimeric Gloves (#15729)", 6015729},
    {"Pattern: Red Dragonscale Breastplate (#15730)", 6015730},
    {"Pattern: Runic Leather Gauntlets (#15731)", 6015731},
    {"Pattern: Volcanic Leggings (#15732)", 6015732},
    {"Pattern: Green Dragonscale Leggings (#15733)", 6015733},
    {"Pattern: Living Shoulders (#15734)", 6015734},
    {"Pattern: Ironfeather Shoulders (#15735)", 6015735},
    {"Pattern: Chimeric Boots (#15737)", 6015737},
    {"Pattern: Heavy Scorpid Gauntlets (#15738)", 6015738},
    {"Pattern: Runic Leather Bracers (#15739)", 6015739},
    {"Pattern: Frostsaber Boots (#15740)", 6015740},
    {"Pattern: Stormshroud Pants (#15741)", 6015741},
    {"Pattern: Warbear Harness (#15742)", 6015742},
    {"Pattern: Heavy Scorpid Belt (#15743)", 6015743},
    {"Pattern: Wicked Leather Headband (#15744)", 6015744},
    {"Pattern: Runic Leather Belt (#15745)", 6015745},
    {"Pattern: Chimeric Leggings (#15746)", 6015746},
    {"Pattern: Frostsaber Leggings (#15747)", 6015747},
    {"Pattern: Heavy Scorpid Leggings (#15748)", 6015748},
    {"Pattern: Volcanic Breastplate (#15749)", 6015749},
    {"Pattern: Blue Dragonscale Breastplate (#15751)", 6015751},
    {"Pattern: Living Leggings (#15752)", 6015752},
    {"Pattern: Stormshroud Armor (#15753)", 6015753},
    {"Pattern: Warbear Woolies (#15754)", 6015754},
    {"Pattern: Chimeric Vest (#15755)", 6015755},
    {"Pattern: Runic Leather Headband (#15756)", 6015756},
    {"Pattern: Wicked Leather Pants (#15757)", 6015757},
    {"Pattern: Devilsaur Gauntlets (#15758)", 6015758},
    {"Pattern: Black Dragonscale Breastplate (#15759)", 6015759},
    {"Pattern: Ironfeather Breastplate (#15760)", 6015760},
    {"Pattern: Frostsaber Gloves (#15761)", 6015761},
    {"Pattern: Heavy Scorpid Helm (#15762)", 6015762},
    {"Pattern: Blue Dragonscale Shoulders (#15763)", 6015763},
    {"Pattern: Stormshroud Shoulders (#15764)", 6015764},
    {"Pattern: Runic Leather Pants (#15765)", 6015765},
    {"Pattern: Wicked Leather Belt (#15768)", 6015768},
    {"Pattern: Black Dragonscale Shoulders (#15770)", 6015770},
    {"Pattern: Living Breastplate (#15771)", 6015771},
    {"Pattern: Devilsaur Leggings (#15772)", 6015772},
    {"Pattern: Wicked Leather Armor (#15773)", 6015773},
    {"Pattern: Heavy Scorpid Shoulders (#15774)", 6015774},
    {"Pattern: Volcanic Shoulders (#15775)", 6015775},
    {"Pattern: Runic Leather Armor (#15776)", 6015776},
    {"Pattern: Runic Leather Shoulders (#15777)", 6015777},
    {"Pattern: Frostsaber Tunic (#15779)", 6015779},
    {"Pattern: Onyxia Scale Breastplate (#15780)", 6015780},
    {"Pattern: Black Dragonscale Leggings (#15781)", 6015781},
    {"Schematic: Thorium Grenade (#16041)", 6016041},
    {"Schematic: Thorium Widget (#16042)", 6016042},
    {"Schematic: Thorium Rifle (#16043)", 6016043},
    {"Schematic: Lifelike Mechanical Toad (#16044)", 6016044},
    {"Schematic: Spellpower Goggles Xtreme Plus (#16045)", 6016045},
    {"Schematic: Thorium Tube (#16047)", 6016047},
    {"Schematic: Dark Iron Rifle (#16048)", 6016048},
    {"Schematic: Dark Iron Bomb (#16049)", 6016049},
    {"Schematic: Thorium Shells (#16051)", 6016051},
    {"Tome of Tranquilizing Shot (#16665)", 6016665},
    {"Schematic: Masterwork Target Dummy (#16046)", 6016046},
    {"Schematic: Delicate Arcanite Converter (#16050)", 6016050},
    {"Schematic: Voice Amplification Modulator (#16052)", 6016052},
    {"Schematic: Master Engineer's Goggles (#16053)", 6016053},
    {"Schematic: Arcanite Dragonling (#16054)", 6016054},
    {"Schematic: Arcane Bomb (#16055)", 6016055},
    {"Schematic: Flawless Arcanite Rifle (#16056)", 6016056},
    {"Formula: Enchant Bracer - Greater Intellect (#16214)", 6016214},
    {"Formula: Enchant Bracer - Superior Spirit (#16218)", 6016218},
    {"Formula: Enchant Bracer - Superior Strength (#16246)", 6016246},
    {"Formula: Enchant Bracer - Superior Stamina (#16251)", 6016251},
    {"Formula: Enchant Gloves - Greater Agility (#16219)", 6016219},
    {"Formula: Enchant Gloves - Greater Strength (#16244)", 6016244},
    {"Formula: Enchant Cloak - Greater Resistance (#16216)", 6016216},
    {"Formula: Enchant Cloak - Superior Defense (#16224)", 6016224},
    {"Formula: Enchant Shield - Superior Spirit (#16222)", 6016222},
    {"Formula: Enchant Shield - Greater Stamina (#16217)", 6016217},
    {"Formula: Enchant Boots - Greater Stamina (#16215)", 6016215},
    {"Formula: Enchant Boots - Greater Agility (#16245)", 6016245},
    {"Formula: Enchant Boots - Spirit (#16220)", 6016220},
    {"Formula: Enchant Chest - Greater Stats (#16253)", 6016253},
    {"Formula: Enchant Chest - Major Health (#16221)", 6016221},
    {"Formula: Enchant Chest - Major Mana (#16242)", 6016242},
    {"Formula: Enchant Weapon - Icy Chill (#16223)", 6016223},
    {"Formula: Enchant 2H Weapon - Superior Impact (#16247)", 6016247},
    {"Formula: Enchant Weapon - Superior Striking (#16250)", 6016250},
    {"Formula: Enchant Weapon - Lifestealing (#16254)", 6016254},
    {"Formula: Enchant Weapon - Unholy (#16248)", 6016248},
    {"Formula: Enchant Weapon - Crusader (#16252)", 6016252},
    {"Formula: Enchant 2H Weapon - Major Spirit (#16255)", 6016255},
    {"Formula: Enchant 2H Weapon - Major Intellect (#16249)", 6016249},
    {"Formula: Runed Arcanite Rod (#16243)", 6016243},
    {"Recipe: Undermine Clam Chowder (#16767)", 6016767},
    {"Pattern: Flarecore Mantle (#17017)", 6017017},
    {"Pattern: Flarecore Gloves (#17018)", 6017018},
    {"Pattern: Corehound Boots (#17022)", 6017022},
    {"Pattern: Molten Helm (#17023)", 6017023},
    {"Pattern: Black Dragonscale Boots (#17025)", 6017025},
    {"Plans: Fiery Chain Girdle (#17049)", 6017049},
    {"Plans: Fiery Chain Shoulders (#17053)", 6017053},
    {"Plans: Dark Iron Bracers (#17051)", 6017051},
    {"Plans: Dark Iron Leggings (#17052)", 6017052},
    {"Plans: Dark Iron Reaver (#17059)", 6017059},
    {"Plans: Dark Iron Destroyer (#17060)", 6017060},
    {"Recipe: Mithril Head Trout (#17062)", 6017062},
    {"Recipe: Gingerbread Cookie (#17200)", 6017200},
    {"Recipe: Egg Nog (#17201)", 6017201},
    {"Plans: Sulfuron Hammer (#18592)", 6018592},
    {"Codex: Prayer of Fortitude (#17413)", 6017413},
    {"Codex: Prayer of Fortitude II (#17414)", 6017414},
    {"Book: Gift of the Wild (#17682)", 6017682},
    {"Book: Gift of the Wild II (#17683)", 6017683},
    {"Plans: Edge of Winter (#17706)", 6017706},
    {"Recipe: Elixir of Frost Power (#17709)", 6017709},
    {"Formula: Enchant Weapon - Winter's Might (#17725)", 6017725},
    {"Schematic: Snowmaster 9000 (#17720)", 6017720},
    {"Pattern: Gloves of the Greatfather (#17722)", 6017722},
    {"Pattern: Green Holiday Shirt (#17724)", 6017724},
    {"Recipe: Tender Wolf Steak (#18046)", 6018046},
    {"Pattern: Shadowskin Gloves (#18239)", 6018239},
    {"Pattern: Core Armor Kit (#18252)", 6018252},
    {"Recipe: Major Rejuvenation Potion (#18257)", 6018257},
    {"Formula: Enchant Weapon - Spellpower (#18259)", 6018259},
    {"Formula: Enchant Weapon - Healing Power (#18260)", 6018260},
    {"Plans: Elemental Sharpening Stone (#18264)", 6018264},
    {"Pattern: Flarecore Wraps (#18265)", 6018265},
    {"Recipe: Runn Tum Tuber Surprise (#18267)", 6018267},
    {"Schematic: Biznicks 247x128 Accurascope (#18290)", 6018290},
    {"Schematic: Core Marksman Rifle (#18292)", 6018292},
    {"Schematic: Force Reactive Disk (#18291)", 6018291},
    {"Pattern: Belt of the Archmage (#18414)", 6018414},
    {"Pattern: Felcloth Gloves (#18415)", 6018415},
    {"Pattern: Inferno Gloves (#18416)", 6018416},
    {"Pattern: Mooncloth Gloves (#18417)", 6018417},
    {"Pattern: Cloak of Warding (#18418)", 6018418},
    {"Pattern: Mooncloth Robe (#18487)", 6018487},
    {"Pattern: Girdle of Insight (#18514)", 6018514},
    {"Pattern: Mongoose Boots (#18515)", 6018515},
    {"Pattern: Swift Flight Bracers (#18516)", 6018516},
    {"Pattern: Chromatic Cloak (#18517)", 6018517},
    {"Pattern: Hide of the Wild (#18518)", 6018518},
    {"Pattern: Shifting Cloak (#18519)", 6018519},
    {"Goblin's Guide to Elementium (#44956)", 6044956},
    {"Tome of Arcane Brilliance (#18600)", 6018600},
    {"Schematic: Red Firework (#18647)", 6018647},
    {"Schematic: Blue Firework (#18649)", 6018649},
    {"Schematic: Green Firework (#18648)", 6018648},
    {"Schematic: EZ-Thro Dynamite II (#18650)", 6018650},
    {"Schematic: Truesilver Transformer (#18651)", 6018651},
    {"Schematic: Gyrofreeze Ice Reflector (#18652)", 6018652},
    {"Schematic: Goblin Jumper Cables XL (#18653)", 6018653},
    {"Schematic: Major Recombobulator (#18655)", 6018655},
    {"Schematic: Powerful Seaforium Charge (#18656)", 6018656},
    {"Schematic: Hyper-Radiant Flame Reflector (#18657)", 6018657},
    {"Schematic: Ultra-Flash Shadow Reflector (#18658)", 6018658},
    {"Schematic: Gnomish Alarm-o-Bot (#18654)", 6018654},
    {"Schematic: World Enlarger (#18661)", 6018661},
    {"Pattern: Heavy Leather Ball (#18731)", 6018731},
    {"Pattern: Barbaric Bracers (#18949)", 6018949},
    {"Schematic: Snake Burst Firework (#19027)", 6019027},
    {"Plans: Heavy Timbermaw Belt (#19202)", 6019202},
    {"Plans: Heavy Timbermaw Boots (#19204)", 6019204},
    {"Plans: Girdle of the Dawn (#19203)", 6019203},
    {"Plans: Gloves of the Dawn (#19205)", 6019205},
    {"Plans: Dark Iron Helm (#19206)", 6019206},
    {"Plans: Dark Iron Gauntlets (#19207)", 6019207},
    {"Plans: Black Amnesty (#19208)", 6019208},
    {"Plans: Blackfury (#19209)", 6019209},
    {"Plans: Ebon Hand (#19210)", 6019210},
    {"Plans: Blackguard (#19211)", 6019211},
    {"Plans: Nightfall (#19212)", 6019212},
    {"Pattern: Wisdom of the Timbermaw (#19215)", 6019215},
    {"Pattern: Mantle of the Timbermaw (#19218)", 6019218},
    {"Pattern: Argent Boots (#19216)", 6019216},
    {"Pattern: Argent Shoulders (#19217)", 6019217},
    {"Pattern: Flarecore Robe (#19219)", 6019219},
    {"Pattern: Flarecore Leggings (#19220)", 6019220},
    {"Pattern: Might of the Timbermaw (#19326)", 6019326},
    {"Pattern: Timbermaw Brawlers (#19327)", 6019327},
    {"Pattern: Dawn Treaders (#19328)", 6019328},
    {"Pattern: Golden Mantle of the Dawn (#19329)", 6019329},
    {"Pattern: Lava Belt (#19330)", 6019330},
    {"Pattern: Chromatic Gauntlets (#19331)", 6019331},
    {"Pattern: Corehound Belt (#19332)", 6019332},
    {"Pattern: Molten Belt (#19333)", 6019333},
    {"Formula: Powerful Anti-Venom (#19442)", 6019442},
    {"Formula: Enchant Weapon - Strength (#19444)", 6019444},
    {"Formula: Enchant Weapon - Agility (#19445)", 6019445},
    {"Formula: Enchant Bracer - Mana Regeneration (#19446)", 6019446},
    {"Formula: Enchant Bracer - Healing Power (#19447)", 6019447},
    {"Formula: Enchant Weapon - Mighty Spirit (#19448)", 6019448},
    {"Formula: Enchant Weapon - Mighty Intellect (#19449)", 6019449},
    {"Pattern: Bloodvine Vest (#19764)", 6019764},
    {"Pattern: Bloodvine Leggings (#19765)", 6019765},
    {"Pattern: Bloodvine Boots (#19766)", 6019766},
    {"Pattern: Primal Batskin Jerkin (#19769)", 6019769},
    {"Pattern: Primal Batskin Gloves (#19770)", 6019770},
    {"Pattern: Primal Batskin Bracers (#19771)", 6019771},
    {"Pattern: Blood Tiger Breastplate (#19772)", 6019772},
    {"Pattern: Blood Tiger Shoulders (#19773)", 6019773},
    {"Plans: Bloodsoul Breastplate (#19776)", 6019776},
    {"Plans: Bloodsoul Shoulders (#19777)", 6019777},
    {"Plans: Bloodsoul Gauntlets (#19778)", 6019778},
    {"Plans: Darksoul Breastplate (#19779)", 6019779},
    {"Plans: Darksoul Leggings (#19780)", 6019780},
    {"Plans: Darksoul Shoulders (#19781)", 6019781},
    {"Schematic: Bloodvine Goggles (#20000)", 6020000},
    {"Schematic: Bloodvine Lens (#20001)", 6020001},
    {"Recipe: Mageblood Elixir (#20011)", 6020011},
    {"Recipe: Greater Dreamless Sleep Potion (#20012)", 6020012},
    {"Recipe: Living Action Potion (#20013)", 6020013},
    {"Recipe: Mighty Troll's Blood Elixir (#20014)", 6020014},
    {"Plans: Dark Iron Boots (#20040)", 6020040},
    {"Recipe: Heavy Crocolisk Stew (#20075)", 6020075},
    {"Pattern: Dreamscale Breastplate (#20382)", 6020382},
    {"Pattern: Spitfire Bracers (#20506)", 6020506},
    {"Pattern: Spitfire Gauntlets (#20507)", 6020507},
    {"Pattern: Spitfire Breastplate (#20508)", 6020508},
    {"Pattern: Sandstalker Bracers (#20509)", 6020509},
    {"Pattern: Sandstalker Gauntlets (#20510)", 6020510},
    {"Pattern: Sandstalker Breastplate (#20511)", 6020511},
    {"Pattern: Runed Stygian Leggings (#20546)", 6020546},
    {"Pattern: Runed Stygian Belt (#20548)", 6020548},
    {"Pattern: Runed Stygian Boots (#20547)", 6020547},
    {"Plans: Darkrune Gauntlets (#20553)", 6020553},
    {"Plans: Darkrune Helm (#20555)", 6020555},
    {"Plans: Darkrune Breastplate (#20554)", 6020554},
    {"Pattern: Black Whelp Tunic (#20576)", 6020576},
    {"Formula: Enchant Gloves - Threat (#20726)", 6020726},
    {"Formula: Enchant Gloves - Shadow Power (#20727)", 6020727},
    {"Formula: Enchant Gloves - Frost Power (#20728)", 6020728},
    {"Formula: Enchant Gloves - Fire Power (#20729)", 6020729},
    {"Formula: Enchant Gloves - Healing Power (#20730)", 6020730},
    {"Formula: Enchant Gloves - Superior Agility (#20731)", 6020731},
    {"Formula: Enchant Cloak - Greater Fire Resistance (#20732)", 6020732},
    {"Formula: Enchant Cloak - Greater Nature Resistance (#20733)", 6020733},
    {"Formula: Enchant Cloak - Stealth (#20734)", 6020734},
    {"Formula: Enchant Cloak - Subtlety (#20735)", 6020735},
    {"Formula: Enchant Cloak - Dodge (#20736)", 6020736},
    {"Formula: Minor Wizard Oil (#20758)", 6020758},
    {"Formula: Minor Mana Oil (#20752)", 6020752},
    {"Formula: Lesser Wizard Oil (#20753)", 6020753},
    {"Formula: Lesser Mana Oil (#20754)", 6020754},
    {"Formula: Wizard Oil (#20755)", 6020755},
    {"Formula: Brilliant Wizard Oil (#20756)", 6020756},
    {"Formula: Brilliant Mana Oil (#20757)", 6020757},
    {"Recipe: Transmute Elemental Fire (#20761)", 6020761},
    {"Manual of Heroic Strike IX (#21297)", 6021297},
    {"Manual of Revenge VI (#21299)", 6021299},
    {"Manual of Battle Shout VII (#21298)", 6021298},
    {"Libram: Blessing of Wisdom VI (#21288)", 6021288},
    {"Libram: Blessing of Might VII (#21289)", 6021289},
    {"Libram: Holy Light IX (#21290)", 6021290},
    {"Guide: Multi-Shot V (#21304)", 6021304},
    {"Guide: Serpent Sting IX (#21306)", 6021306},
    {"Guide: Aspect of the Hawk VII (#21307)", 6021307},
    {"Book of Healing Touch XI (#21294)", 6021294},
    {"Book of Starfire VII (#21295)", 6021295},
    {"Book of Rejuvenation XI (#21296)", 6021296},
    {"Handbook of Backstab IX (#21300)", 6021300},
    {"Handbook of Feint V (#21303)", 6021303},
    {"Tome of Frostbolt XI (#21214)", 6021214},
    {"Tome of Fireball XII (#21279)", 6021279},
    {"Grimoire of Shadow Bolt X (#21281)", 6021281},
    {"Grimoire of Immolate VIII (#21282)", 6021282},
    {"Grimoire of Corruption VII (#21283)", 6021283},
    {"Codex of Greater Heal V (#21284)", 6021284},
    {"Codex of Renew X (#21285)", 6021285},
    {"Codex of Prayer of Healing V (#21287)", 6021287},
    {"Design: Heavy Golden Necklace of Battle (#20856)", 6020856},
    {"Design: Wicked Moonstone Ring (#20855)", 6020855},
    {"Design: Amulet of the Moon (#20854)", 6020854},
    {"Tome of Arcane Missiles VIII (#21280)", 6021280},
    {"Handbook of Deadly Poison V (#21302)", 6021302},
    {"Tablet of Healing Wave X (#21291)", 6021291},
    {"Tablet of Grace of Air Totem III (#21293)", 6021293},
    {"Tablet of Strength of Earth Totem V (#21292)", 6021292},
    {"Codex: Prayer of Fortitude III (#29549)", 6029549},
    {"Design: Pendant of the Agate Shield (#20970)", 6020970},
    {"Design: Heavy Iron Knuckles (#20971)", 6020971},
    {"Design: Blazing Citrine Ring (#20973)", 6020973},
    {"Design: Jade Pendant of Blasting (#20974)", 6020974},
    {"Design: The Jade Eye (#20975)", 6020975},
    {"Design: Citrine Pendant of Golden Healing (#20976)", 6020976},
    {"Recipe: Dirge's Kickin' Chimaerok Chops (#21025)", 6021025},
    {"Recipe: Smoked Sagefish (#21099)", 6021099},
    {"Recipe: Sagefish Delight (#21219)", 6021219},
    {"Pattern: Soul Pouch (#21358)", 6021358},
    {"Pattern: Core Felcloth Bag (#21371)", 6021371},
    {"Recipe: Elixir of Greater Firepower (#21547)", 6021547},
    {"Pattern: Stormshroud Gloves (#21548)", 6021548},
    {"Pattern: Festival Dress (#21722)", 6021722},
    {"Pattern: Festival Suit (#21723)", 6021723},
    {"Schematic: Small Blue Rocket (#21724)", 6021724},
    {"Schematic: Small Green Rocket (#21725)", 6021725},
    {"Schematic: Small Red Rocket (#21726)", 6021726},
    {"Schematic: Large Blue Rocket (#21727)", 6021727},
    {"Schematic: Large Green Rocket (#21728)", 6021728},
    {"Schematic: Large Red Rocket (#21729)", 6021729},
    {"Schematic: Blue Rocket Cluster (#21730)", 6021730},
    {"Schematic: Green Rocket Cluster (#21731)", 6021731},
    {"Schematic: Red Rocket Cluster (#21732)", 6021732},
    {"Schematic: Large Blue Rocket Cluster (#21733)", 6021733},
    {"Schematic: Large Green Rocket Cluster (#21734)", 6021734},
    {"Schematic: Large Red Rocket Cluster (#21735)", 6021735},
    {"Schematic: Firework Launcher (#21738)", 6021738},
    {"Schematic: Cluster Launcher (#21737)", 6021737},
    {"Pattern: Bolt of Imbued Netherweave (#21892)", 6021892},
    {"Pattern: Imbued Netherweave Bag (#21893)", 6021893},
    {"Pattern: Bolt of Soulcloth (#21894)", 6021894},
    {"Pattern: Primal Mooncloth (#21895)", 6021895},
    {"Pattern: Spellfire Belt (#21908)", 6021908},
    {"Pattern: Spellfire Gloves (#21909)", 6021909},
    {"Pattern: Spellfire Robe (#21910)", 6021910},
    {"Pattern: Spellfire Bag (#21911)", 6021911},
    {"Pattern: Frozen Shadoweave Shoulders (#21912)", 6021912},
    {"Pattern: Frozen Shadoweave Boots (#21914)", 6021914},
    {"Pattern: Frozen Shadoweave Robe (#21913)", 6021913},
    {"Pattern: Ebon Shadowbag (#21915)", 6021915},
    {"Pattern: Primal Mooncloth Belt (#21916)", 6021916},
    {"Pattern: Primal Mooncloth Shoulders (#21918)", 6021918},
    {"Pattern: Primal Mooncloth Robe (#21917)", 6021917},
    {"Pattern: Primal Mooncloth Bag (#21919)", 6021919},
    {"Pattern: Netherweave Robe (#21896)", 6021896},
    {"Pattern: Netherweave Tunic (#21897)", 6021897},
    {"Pattern: Imbued Netherweave Pants (#21898)", 6021898},
    {"Pattern: Imbued Netherweave Boots (#21899)", 6021899},
    {"Pattern: Imbued Netherweave Robe (#21900)", 6021900},
    {"Pattern: Imbued Netherweave Tunic (#21901)", 6021901},
    {"Pattern: Soulcloth Gloves (#21902)", 6021902},
    {"Pattern: Soulcloth Shoulders (#21903)", 6021903},
    {"Pattern: Soulcloth Vest (#21904)", 6021904},
    {"Pattern: Arcanoweave Bracers (#21905)", 6021905},
    {"Pattern: Arcanoweave Boots (#21906)", 6021906},
    {"Pattern: Arcanoweave Robe (#21907)", 6021907},
    {"Design: Golden Hare (#21940)", 6021940},
    {"Design: Black Pearl Panther (#21941)", 6021941},
    {"Design: Ruby Crown of Restoration (#21942)", 6021942},
    {"Design: Truesilver Crab (#21943)", 6021943},
    {"Design: Truesilver Boar (#21944)", 6021944},
    {"Design: The Aquamarine Ward (#21945)", 6021945},
    {"Design: Gem Studded Band (#21947)", 6021947},
    {"Design: Opal Necklace of Impact (#21948)", 6021948},
    {"Design: Ruby Serpent (#21949)", 6021949},
    {"Design: Emerald Crown of Destruction (#21952)", 6021952},
    {"Design: Emerald Owl (#21953)", 6021953},
    {"Design: Ring of Bitter Shadows (#21954)", 6021954},
    {"Design: Black Diamond Crab (#21955)", 6021955},
    {"Design: Dark Iron Scorpid (#21956)", 6021956},
    {"Design: Necklace of the Diamond Tower (#21957)", 6021957},
    {"Book: Gift of the Wild III (#22146)", 6022146},
    {"Manual: Netherweave Bandage (#21992)", 6021992},
    {"Manual: Heavy Netherweave Bandage (#21993)", 6021993},
    {"Tome of Conjure Water IX (#29550)", 6029550},
    {"Tome of Arcane Brilliance 2 (#22153)", 6022153},
    {"Plans: Heavy Obsidian Belt (#22209)", 6022209},
    {"Plans: Jagged Obsidian Shield (#22219)", 6022219},
    {"Plans: Thick Obsidian Breastplate (#22222)", 6022222},
    {"Plans: Light Obsidian Belt (#22214)", 6022214},
    {"Plans: Black Grasp of the Destroyer (#22220)", 6022220},
    {"Plans: Obsidian Mail Tunic (#22221)", 6022221},
    {"Pattern: Enchanted Mageweave Pouch (#22307)", 6022307},
    {"Pattern: Enchanted Runecloth Bag (#22308)", 6022308},
    {"Pattern: Big Bag of Enchantment (#22309)", 6022309},
    {"Codex: Prayer of Shadow Protection (#22393)", 6022393},
    {"Pattern: Cenarion Herb Bag (#22310)", 6022310},
    {"Pattern: Satchel of Cenarius (#22312)", 6022312},
    {"Plans: Titanic Leggings (#22388)", 6022388},
    {"Plans: Persuader (#22390)", 6022390},
    {"Plans: Sageblade (#22389)", 6022389},
    {"Formula: Enchant 2H Weapon - Agility (#22392)", 6022392},
    {"Formula: Enchant Bracer - Major Defense (#22530)", 6022530},
    {"Formula: Enchant Bracer - Superior Healing (#22531)", 6022531},
    {"Formula: Enchant Bracer - Restore Mana Prime (#22532)", 6022532},
    {"Formula: Enchant Bracer - Fortitude (#22533)", 6022533},
    {"Formula: Enchant Bracer - Spellpower (#22534)", 6022534},
    {"Formula: Enchant Ring - Striking (#22535)", 6022535},
    {"Formula: Enchant Ring - Spellpower (#22536)", 6022536},
    {"Formula: Enchant Ring - Healing Power (#22537)", 6022537},
    {"Formula: Enchant Ring - Stats (#22538)", 6022538},
    {"Formula: Enchant Shield - Intellect (#22539)", 6022539},
    {"Formula: Enchant Shield - Shield Block (#22540)", 6022540},
    {"Formula: Enchant Shield - Resistance (#22541)", 6022541},
    {"Formula: Enchant Boots - Vitality (#22542)", 6022542},
    {"Formula: Enchant Boots - Fortitude (#22543)", 6022543},
    {"Formula: Enchant Boots - Dexterity (#22544)", 6022544},
    {"Formula: Enchant Boots - Surefooted (#22545)", 6022545},
    {"Formula: Enchant Chest - Exceptional Stats (#22547)", 6022547},
    {"Formula: Enchant Cloak - Major Resistance (#22548)", 6022548},
    {"Formula: Enchant Weapon - Major Striking (#22552)", 6022552},
    {"Formula: Enchant Weapon - Major Intellect (#22551)", 6022551},
    {"Formula: Enchant 2H Weapon - Savagery (#22554)", 6022554},
    {"Formula: Enchant Weapon - Potency (#22553)", 6022553},
    {"Formula: Enchant Weapon - Major Spellpower (#22555)", 6022555},
    {"Formula: Enchant 2H Weapon - Major Agility (#22556)", 6022556},
    {"Formula: Enchant Weapon - Sunfire (#22560)", 6022560},
    {"Formula: Enchant Weapon - Soulfrost (#22561)", 6022561},
    {"Formula: Enchant Weapon - Mongoose (#22559)", 6022559},
    {"Formula: Enchant Weapon - Spellsurge (#22558)", 6022558},
    {"Formula: Enchant Weapon - Battlemaster (#22557)", 6022557},
    {"Formula: Superior Mana Oil (#22562)", 6022562},
    {"Formula: Superior Wizard Oil (#22563)", 6022563},
    {"Formula: Large Prismatic Shard (#22565)", 6022565},
    {"Pattern: Gaea's Embrace (#22683)", 6022683},
    {"Recipe: Crunchy Spider Surprise (#22647)", 6022647},
    {"Tome of Polymorph: Turtle (#22739)", 6022739},
    {"Schematic: Steam Tonk Controller (#22729)", 6022729},
    {"Plans: Ironvine Breastplate (#22766)", 6022766},
    {"Plans: Ironvine Gloves (#22767)", 6022767},
    {"Plans: Ironvine Belt (#22768)", 6022768},
    {"Pattern: Bramblewood Helm (#22771)", 6022771},
    {"Pattern: Bramblewood Boots (#22770)", 6022770},
    {"Pattern: Bramblewood Belt (#22769)", 6022769},
    {"Pattern: Sylvan Vest (#22774)", 6022774},
    {"Pattern: Sylvan Crown (#22773)", 6022773},
    {"Pattern: Sylvan Shoulders (#22772)", 6022772},
    {"Recipe: Elixir of Camouflage (#22900)", 6022900},
    {"Recipe: Sneaking Potion (#22901)", 6022901},
    {"Recipe: Elixir of Major Frost Power (#22902)", 6022902},
    {"Recipe: Insane Strength Potion (#22903)", 6022903},
    {"Recipe: Elixir of the Searching Eye (#22904)", 6022904},
    {"Recipe: Elixir of Major Agility (#22905)", 6022905},
    {"Recipe: Shrouding Potion (#22906)", 6022906},
    {"Recipe: Super Mana Potion (#22907)", 6022907},
    {"Recipe: Elixir of Major Firepower (#22908)", 6022908},
    {"Recipe: Elixir of Major Defense (#22909)", 6022909},
    {"Recipe: Elixir of Major Shadow Power (#22910)", 6022910},
    {"Recipe: Major Dreamless Sleep Potion (#22911)", 6022911},
    {"Recipe: Heroic Potion (#22912)", 6022912},
    {"Recipe: Haste Potion (#22913)", 6022913},
    {"Recipe: Destruction Potion (#22914)", 6022914},
    {"Recipe: Transmute Primal Air to Fire (#22915)", 6022915},
    {"Recipe: Transmute Primal Earth to Water (#22916)", 6022916},
    {"Recipe: Transmute Primal Fire to Earth (#22917)", 6022917},
    {"Recipe: Transmute Primal Water to Air (#22918)", 6022918},
    {"Recipe: Elixir of Major Mageblood (#22919)", 6022919},
    {"Recipe: Major Fire Protection Potion (#22920)", 6022920},
    {"Recipe: Major Frost Protection Potion (#22921)", 6022921},
    {"Recipe: Major Nature Protection Potion (#22922)", 6022922},
    {"Recipe: Major Arcane Protection Potion (#22923)", 6022923},
    {"Recipe: Major Shadow Protection Potion (#22924)", 6022924},
    {"Recipe: Major Holy Protection Potion (#22925)", 6022925},
    {"Recipe: Elixir of Empowerment (#22926)", 6022926},
    {"Recipe: Ironshield Potion (#22927)", 6022927},
    {"Tome of Frost Ward V (#22890)", 6022890},
    {"Grimoire of Shadow Ward IV (#22891)", 6022891},
    {"Tome of Conjure Food VII (#22897)", 6022897},
    {"Design: Teardrop Blood Garnet (#23130)", 6023130},
    {"Design: Bold Blood Garnet (#23131)", 6023131},
    {"Design: Runed Blood Garnet (#23133)", 6023133},
    {"Design: Delicate Blood Garnet (#23134)", 6023134},
    {"Design: Inscribed Flame Spessarite (#23135)", 6023135},
    {"Design: Luminous Flame Spessarite (#23136)", 6023136},
    {"Design: Glinting Flame Spessarite (#23137)", 6023137},
    {"Design: Potent Flame Spessarite (#23138)", 6023138},
    {"Design: Radiant Deep Peridot (#23140)", 6023140},
    {"Design: Jagged Deep Peridot (#23141)", 6023141},
    {"Design: Enduring Deep Peridot (#23142)", 6023142},
    {"Design: Dazzling Deep Peridot (#23143)", 6023143},
    {"Design: Glowing Shadow Draenite (#23144)", 6023144},
    {"Design: Royal Shadow Draenite (#23145)", 6023145},
    {"Design: Shifting Shadow Draenite (#23146)", 6023146},
    {"Design: Sovereign Shadow Draenite (#23147)", 6023147},
    {"Design: Brilliant Golden Draenite (#23148)", 6023148},
    {"Design: Gleaming Golden Draenite (#23149)", 6023149},
    {"Design: Thick Golden Draenite (#23150)", 6023150},
    {"Design: Rigid Golden Draenite (#23151)", 6023151},
    {"Design: Solid Azure Moonstone (#23152)", 6023152},
    {"Design: Sparkling Azure Moonstone (#23153)", 6023153},
    {"Design: Stormy Azure Moonstone (#23154)", 6023154},
    {"Design: Lustrous Azure Moonstone (#23155)", 6023155},
    {"Tablet of Flame Shock VI (#23320)", 6023320},
    {"Plans: Adamantite Maul (#23590)", 6023590},
    {"Plans: Adamantite Cleaver (#23591)", 6023591},
    {"Plans: Adamantite Dagger (#23592)", 6023592},
    {"Plans: Adamantite Rapier (#23593)", 6023593},
    {"Plans: Adamantite Plate Bracers (#23594)", 6023594},
    {"Plans: Adamantite Plate Gloves (#23595)", 6023595},
    {"Plans: Adamantite Breastplate (#23596)", 6023596},
    {"Plans: Enchanted Adamantite Belt (#23597)", 6023597},
    {"Plans: Enchanted Adamantite Breastplate (#23599)", 6023599},
    {"Plans: Enchanted Adamantite Boots (#23598)", 6023598},
    {"Plans: Enchanted Adamantite Leggings (#23600)", 6023600},
    {"Plans: Flamebane Bracers (#23601)", 6023601},
    {"Plans: Flamebane Helm (#23602)", 6023602},
    {"Plans: Flamebane Gloves (#23603)", 6023603},
    {"Plans: Flamebane Breastplate (#23604)", 6023604},
    {"Plans: Felsteel Gloves (#23605)", 6023605},
    {"Plans: Felsteel Leggings (#23606)", 6023606},
    {"Plans: Felsteel Helm (#23607)", 6023607},
    {"Plans: Gauntlets of the Iron Tower (#23621)", 6023621},
    {"Plans: Khorium Belt (#23608)", 6023608},
    {"Plans: Khorium Pants (#23609)", 6023609},
    {"Plans: Khorium Boots (#23610)", 6023610},
    {"Plans: Ragesteel Gloves (#23611)", 6023611},
    {"Plans: Ragesteel Helm (#23612)", 6023612},
    {"Plans: Ragesteel Breastplate (#23613)", 6023613},
    {"Plans: Swiftsteel Gloves (#23615)", 6023615},
    {"Plans: Earthpeace Breastplate (#23617)", 6023617},
    {"Plans: Adamantite Sharpening Stone (#23618)", 6023618},
    {"Plans: Felsteel Shield Spike (#23619)", 6023619},
    {"Plans: Felfury Gauntlets (#23620)", 6023620},
    {"Plans: Steelgrip Gauntlets (#23622)", 6023622},
    {"Plans: Storm Helm (#23623)", 6023623},
    {"Plans: Helm of the Stalwart Defender (#23624)", 6023624},
    {"Plans: Oathkeeper's Helm (#23625)", 6023625},
    {"Plans: Black Felsteel Bracers (#23626)", 6023626},
    {"Plans: Bracers of the Green Fortress (#23627)", 6023627},
    {"Plans: Blessed Bracers (#23628)", 6023628},
    {"Recipe: Transmute Primal Might (#23574)", 6023574},
    {"Plans: Felsteel Longblade (#23629)", 6023629},
    {"Plans: Khorium Champion (#23630)", 6023630},
    {"Plans: Fel Edged Battleaxe (#23631)", 6023631},
    {"Plans: Felsteel Reaper (#23632)", 6023632},
    {"Plans: Runic Hammer (#23633)", 6023633},
    {"Plans: Fel Hardened Maul (#23634)", 6023634},
    {"Plans: Eternium Runed Blade (#23635)", 6023635},
    {"Plans: Dirge (#23636)", 6023636},
    {"Plans: Hand of Eternity (#23637)", 6023637},
    {"Plans: Lesser Ward of Shielding (#23638)", 6023638},
    {"Plans: Greater Ward of Shielding (#23639)", 6023639},
    {"Schematic: Adamantite Rifle (#23799)", 6023799},
    {"Schematic: Felsteel Boomstick (#23800)", 6023800},
    {"Schematic: Ornate Khorium Rifle (#23802)", 6023802},
    {"Schematic: Cogspinner Goggles (#23803)", 6023803},
    {"Schematic: Power Amplification Goggles (#23804)", 6023804},
    {"Schematic: Ultra-Spectropic Detection Goggles (#23805)", 6023805},
    {"Schematic: Hyper-Vision Goggles (#23806)", 6023806},
    {"Schematic: Adamantite Scope (#23807)", 6023807},
    {"Schematic: Khorium Scope (#23808)", 6023808},
    {"Schematic: Stabilized Eternium Scope (#23809)", 6023809},
    {"Schematic: Crashin' Thrashin' Robot (#23810)", 6023810},
    {"Schematic: White Smoke Flare (#23811)", 6023811},
    {"Schematic: Green Smoke Flare (#23814)", 6023814},
    {"Schematic: Adamantite Shell Machine (#23815)", 6023815},
    {"Schematic: Fel Iron Toolbox (#23816)", 6023816},
    {"Schematic: Titanium Toolbox (#23817)", 6023817},
    {"Schematic: Elemental Seaforium Charge (#23874)", 6023874},
    {"Schematic: Zapthrottle Mote Extractor (#23888)", 6023888},
    {"Schematic: Critter Enlarger (#23882)", 6023882},
    {"Schematic: Healing Potion Injector (#23883)", 6023883},
    {"Schematic: Mana Potion Injector (#23884)", 6023884},
    {"Schematic: Remote Mail Terminal (#23885)", 6023885},
    {"Schematic: Rocket Boots Xtreme (#23887)", 6023887},
    {"Manual of Eviscerate IX (#24102)", 6024102},
    {"Book of Ferocious Bite V (#24101)", 6024101},
    {"Design: Khorium Band of Shadows (#24158)", 6024158},
    {"Design: Khorium Band of Frost (#24159)", 6024159},
    {"Design: Khorium Inferno Band (#24160)", 6024160},
    {"Design: Khorium Band of Leaves (#24161)", 6024161},
    {"Design: Arcane Khorium Band (#24162)", 6024162},
    {"Design: Heavy Felsteel Ring (#24163)", 6024163},
    {"Design: Delicate Eternium Ring (#24164)", 6024164},
    {"Design: Blazing Eternium Band (#24165)", 6024165},
    {"Design: Pendant of Frozen Flame (#24174)", 6024174},
    {"Design: Pendant of Thawing (#24175)", 6024175},
    {"Design: Pendant of Withering (#24176)", 6024176},
    {"Design: Pendant of Shadow's End (#24177)", 6024177},
    {"Design: Pendant of the Null Rune (#24178)", 6024178},
    {"Design: Thick Felsteel Necklace (#24166)", 6024166},
    {"Design: Living Ruby Pendant (#24167)", 6024167},
    {"Design: Braided Eternium Chain (#24168)", 6024168},
    {"Design: Eye of the Night (#24169)", 6024169},
    {"Design: Embrace of the Dawn (#24170)", 6024170},
    {"Design: Chain of the Twilight Owl (#24171)", 6024171},
    {"Design: Coronet of Verdant Flame (#24172)", 6024172},
    {"Design: Circlet of Arcane Might (#24173)", 6024173},
    {"Design: Felsteel Boar (#24179)", 6024179},
    {"Design: Dawnstone Crab (#24180)", 6024180},
    {"Design: Living Ruby Serpent (#24181)", 6024181},
    {"Design: Talasite Owl (#24182)", 6024182},
    {"Design: Nightseye Panther (#24183)", 6024183},
    {"Design: Bold Living Ruby (#24193)", 6024193},
    {"Design: Delicate Living Ruby (#24194)", 6024194},
    {"Design: Teardrop Living Ruby (#24195)", 6024195},
    {"Design: Runed Living Ruby (#24196)", 6024196},
    {"Design: Bright Living Ruby (#24192)", 6024192},
    {"Design: Subtle Living Ruby (#24197)", 6024197},
    {"Design: Flashing Living Ruby (#24198)", 6024198},
    {"Design: Solid Star of Elune (#24199)", 6024199},
    {"Design: Lustrous Star of Elune (#24201)", 6024201},
    {"Design: Stormy Star of Elune (#24202)", 6024202},
    {"Design: Brilliant Dawnstone (#24203)", 6024203},
    {"Design: Smooth Dawnstone (#24204)", 6024204},
    {"Design: Rigid Dawnstone (#24205)", 6024205},
    {"Design: Gleaming Dawnstone (#24206)", 6024206},
    {"Design: Thick Dawnstone (#24207)", 6024207},
    {"Design: Mystic Dawnstone (#24208)", 6024208},
    {"Design: Sovereign Nightseye (#24209)", 6024209},
    {"Design: Shifting Nightseye (#24210)", 6024210},
    {"Design: Glowing Nightseye (#24211)", 6024211},
    {"Design: Royal Nightseye (#24212)", 6024212},
    {"Design: Inscribed Noble Topaz (#24213)", 6024213},
    {"Design: Potent Noble Topaz (#24214)", 6024214},
    {"Design: Luminous Noble Topaz (#24215)", 6024215},
    {"Design: Glinting Noble Topaz (#24216)", 6024216},
    {"Design: Enduring Talasite (#24217)", 6024217},
    {"Design: Radiant Talasite (#24218)", 6024218},
    {"Design: Dazzling Talasite (#24219)", 6024219},
    {"Design: Jagged Talasite (#24220)", 6024220},
    {"Design: Sparkling Star of Elune (#24200)", 6024200},
    {"Pattern: Spellcloth (#24316)", 6024316},
    {"Pattern: Mystic Spellthread (#24292)", 6024292},
    {"Pattern: Silver Spellthread (#24293)", 6024293},
    {"Pattern: Runic Spellthread (#24294)", 6024294},
    {"Pattern: Golden Spellthread (#24295)", 6024295},
    {"Pattern: Unyielding Bracers (#24296)", 6024296},
    {"Pattern: Bracers of Havok (#24297)", 6024297},
    {"Pattern: Blackstrike Bracers (#24298)", 6024298},
    {"Pattern: Cloak of the Black Void (#24299)", 6024299},
    {"Pattern: Cloak of Eternity (#24300)", 6024300},
    {"Pattern: White Remedy Cape (#24301)", 6024301},
    {"Pattern: Unyielding Girdle (#24302)", 6024302},
    {"Pattern: Girdle of Ruination (#24303)", 6024303},
    {"Pattern: Black Belt of Knowledge (#24304)", 6024304},
    {"Pattern: Resolute Cape (#24305)", 6024305},
    {"Pattern: Vengeance Wrap (#24306)", 6024306},
    {"Pattern: Manaweave Cloak (#24307)", 6024307},
    {"Pattern: Whitemend Pants (#24308)", 6024308},
    {"Pattern: Spellstrike Pants (#24309)", 6024309},
    {"Pattern: Battlecast Pants (#24310)", 6024310},
    {"Pattern: Whitemend Hood (#24311)", 6024311},
    {"Pattern: Spellstrike Hood (#24312)", 6024312},
    {"Pattern: Battlecast Hood (#24313)", 6024313},
    {"Pattern: Bag of Jewels (#24314)", 6024314},
    {"Pattern: Heavy Netherweave Net (#24315)", 6024315},
    {"Book of Cower IV (#24345)", 6024345},
    {"Plans: Greater Rune of Warding (#25526)", 6025526},
    {"Pattern: Heavy Knothide Leather (#25720)", 6025720},
    {"Pattern: Vindicator's Armor Kit (#25721)", 6025721},
    {"Pattern: Magister's Armor Kit (#25722)", 6025722},
    {"Pattern: Riding Crop (#25725)", 6025725},
    {"Pattern: Comfortable Insoles (#25726)", 6025726},
    {"Pattern: Stylin' Purple Hat (#25728)", 6025728},
    {"Pattern: Stylin' Adventure Hat (#25729)", 6025729},
    {"Pattern: Stylin' Crimson Hat (#25731)", 6025731},
    {"Pattern: Stylin' Jungle Hat (#25730)", 6025730},
    {"Pattern: Fel Leather Gloves (#25732)", 6025732},
    {"Pattern: Fel Leather Boots (#25733)", 6025733},
    {"Pattern: Fel Leather Leggings (#25734)", 6025734},
    {"Pattern: Heavy Clefthoof Vest (#25735)", 6025735},
    {"Pattern: Heavy Clefthoof Leggings (#25736)", 6025736},
    {"Pattern: Heavy Clefthoof Boots (#25737)", 6025737},
    {"Pattern: Felstalker Belt (#25738)", 6025738},
    {"Pattern: Felstalker Bracers (#25739)", 6025739},
    {"Pattern: Felstalker Breastplate (#25740)", 6025740},
    {"Pattern: Netherfury Belt (#25741)", 6025741},
    {"Pattern: Netherfury Leggings (#25742)", 6025742},
    {"Pattern: Netherfury Boots (#25743)", 6025743},
    {"Plans: Adamantite Rod (#25846)", 6025846},
    {"Plans: Eternium Rod (#25847)", 6025847},
    {"Formula: Runed Adamantite Rod (#25848)", 6025848},
    {"Formula: Runed Eternium Rod (#25849)", 6025849},
    {"Recipe: Transmute Earthstorm Diamond (#25869)", 6025869},
    {"Recipe: Transmute Skyfire Diamond (#25870)", 6025870},
    {"Schematic: Purple Smoke Flare (#25887)", 6025887},
    {"Design: Powerful Earthstorm Diamond (#25902)", 6025902},
    {"Design: Bracing Earthstorm Diamond (#25903)", 6025903},
    {"Design: Tenacious Earthstorm Diamond (#25905)", 6025905},
    {"Design: Brutal Earthstorm Diamond (#25906)", 6025906},
    {"Design: Insightful Earthstorm Diamond (#25904)", 6025904},
    {"Design: Destructive Skyfire Diamond (#25907)", 6025907},
    {"Design: Mystical Skyfire Diamond (#25909)", 6025909},
    {"Design: Swift Skyfire Diamond (#25908)", 6025908},
    {"Design: Enigmatic Skyfire Diamond (#25910)", 6025910},
    {"Recipe: Lynx Steak (#27685)", 6027685},
    {"Recipe: Roasted Moongraze Tenderloin (#27686)", 6027686},
    {"Recipe: Bat Bites (#27687)", 6027687},
    {"Recipe: Buzzard Bites (#27684)", 6027684},
    {"Recipe: Ravager Dog (#27688)", 6027688},
    {"Recipe: Sporeling Snack (#27689)", 6027689},
    {"Recipe: Blackened Basilisk (#27690)", 6027690},
    {"Recipe: Roasted Clefthoof (#27691)", 6027691},
    {"Recipe: Warp Burger (#27692)", 6027692},
    {"Recipe: Talbuk Steak (#27693)", 6027693},
    {"Recipe: Blackened Trout (#27694)", 6027694},
    {"Recipe: Feltail Delight (#27695)", 6027695},
    {"Recipe: Blackened Sporefish (#27696)", 6027696},
    {"Recipe: Grilled Mudfish (#27697)", 6027697},
    {"Recipe: Poached Bluefish (#27698)", 6027698},
    {"Recipe: Golden Fish Sticks (#27699)", 6027699},
    {"Recipe: Spicy Crawdad (#27700)", 6027700},
    {"Tome of Conjure Food VIII (#31501)", 6031501},
    {"Formula: Enchant Chest - Major Resilience (#28270)", 6028270},
    {"Formula: Enchant Gloves - Precise Strikes (#28271)", 6028271},
    {"Formula: Enchant Gloves - Major Spellpower (#28272)", 6028272},
    {"Formula: Enchant Gloves - Major Healing (#28273)", 6028273},
    {"Formula: Enchant Cloak - Spell Penetration (#28274)", 6028274},
    {"Formula: Enchant Cloak - Greater Arcane Resistance (#28276)", 6028276},
    {"Formula: Enchant Cloak - Greater Shadow Resistance (#28277)", 6028277},
    {"Formula: Enchant Boots - Cat's Swiftness (#28279)", 6028279},
    {"Formula: Enchant Boots - Boar's Speed (#28280)", 6028280},
    {"Formula: Enchant Shield - Major Stamina (#28282)", 6028282},
    {"Formula: Enchant Weapon - Major Healing (#28281)", 6028281},
    {"Design: Smooth Golden Draenite (#28291)", 6028291},
    {"Design: Bright Blood Garnet (#28596)", 6028596},
    {"Plans: Adamantite Weightstone (#28632)", 6028632},
    {"Pattern: Shadow Armor Kit (#29669)", 6029669},
    {"Pattern: Flame Armor Kit (#29672)", 6029672},
    {"Pattern: Frost Armor Kit (#29673)", 6029673},
    {"Pattern: Nature Armor Kit (#29674)", 6029674},
    {"Pattern: Arcane Armor Kit (#29675)", 6029675},
    {"Pattern: Enchanted Felscale Leggings (#29677)", 6029677},
    {"Pattern: Enchanted Felscale Gloves (#29682)", 6029682},
    {"Pattern: Enchanted Felscale Boots (#29684)", 6029684},
    {"Pattern: Flamescale Boots (#29691)", 6029691},
    {"Pattern: Flamescale Leggings (#29689)", 6029689},
    {"Pattern: Reinforced Mining Bag (#29664)", 6029664},
    {"Pattern: Flamescale Belt (#29693)", 6029693},
    {"Pattern: Enchanted Clefthoof Leggings (#29698)", 6029698},
    {"Pattern: Enchanted Clefthoof Gloves (#29700)", 6029700},
    {"Pattern: Enchanted Clefthoof Boots (#29701)", 6029701},
    {"Pattern: Blastguard Pants (#29702)", 6029702},
    {"Pattern: Blastguard Boots (#29703)", 6029703},
    {"Pattern: Blastguard Belt (#29704)", 6029704},
    {"Pattern: Drums of Panic (#29713)", 6029713},
    {"Pattern: Drums of Restoration (#29714)", 6029714},
    {"Pattern: Drums of Battle (#29717)", 6029717},
    {"Pattern: Drums of Speed (#29718)", 6029718},
    {"Pattern: Cobrahide Leg Armor (#29719)", 6029719},
    {"Pattern: Nethercobra Leg Armor (#29722)", 6029722},
    {"Pattern: Clefthide Leg Armor (#29720)", 6029720},
    {"Pattern: Nethercleft Leg Armor (#29721)", 6029721},
    {"Pattern: Cobrascale Hood (#29723)", 6029723},
    {"Pattern: Cobrascale Gloves (#29724)", 6029724},
    {"Pattern: Windscale Hood (#29725)", 6029725},
    {"Pattern: Hood of Primal Life (#29726)", 6029726},
    {"Pattern: Gloves of the Living Touch (#29727)", 6029727},
    {"Pattern: Windslayer Wraps (#29728)", 6029728},
    {"Pattern: Living Dragonscale Helm (#29729)", 6029729},
    {"Pattern: Earthen Netherscale Boots (#29730)", 6029730},
    {"Pattern: Windstrike Gloves (#29731)", 6029731},
    {"Pattern: Netherdrake Helm (#29732)", 6029732},
    {"Pattern: Netherdrake Gloves (#29733)", 6029733},
    {"Pattern: Thick Netherscale Breastplate (#29734)", 6029734},
    {"Recipe: Clam Bar (#30156)", 6030156},
    {"Pattern: Belt of Blasting (#30280)", 6030280},
    {"Pattern: Belt of the Long Road (#30281)", 6030281},
    {"Pattern: Boots of Blasting (#30282)", 6030282},
    {"Pattern: Boots of the Long Road (#30283)", 6030283},
    {"Pattern: Belt of Natural Power (#30301)", 6030301},
    {"Pattern: Belt of Deep Shadow (#30302)", 6030302},
    {"Pattern: Belt of the Black Eagle (#30303)", 6030303},
    {"Pattern: Monsoon Belt (#30304)", 6030304},
    {"Pattern: Boots of Natural Grace (#30305)", 6030305},
    {"Pattern: Boots of Utter Darkness (#30306)", 6030306},
    {"Pattern: Boots of the Crimson Hawk (#30307)", 6030307},
    {"Pattern: Hurricane Boots (#30308)", 6030308},
    {"Plans: Belt of the Guardian (#30321)", 6030321},
    {"Plans: Red Belt of Battle (#30322)", 6030322},
    {"Plans: Boots of the Protector (#30323)", 6030323},
    {"Plans: Red Havoc Boots (#30324)", 6030324},
    {"Pattern: Shadowcloth (#30483)", 6030483},
    {"Design: Ring of Arcane Shielding (#30826)", 6030826},
    {"Pattern: Cloak of Arcane Evasion (#30833)", 6030833},
    {"Pattern: Flameheart Bracers (#30842)", 6030842},
    {"Pattern: Flameheart Gloves (#30843)", 6030843},
    {"Pattern: Flameheart Vest (#30844)", 6030844},
    {"Plans: Wildguard Breastplate (#31390)", 6031390},
    {"Plans: Wildguard Leggings (#31391)", 6031391},
    {"Plans: Wildguard Helm (#31392)", 6031392},
    {"Plans: Iceguard Breastplate (#31393)", 6031393},
    {"Plans: Iceguard Leggings (#31394)", 6031394},
    {"Plans: Iceguard Helm (#31395)", 6031395},
    {"Design: The Frozen Eye (#31401)", 6031401},
    {"Design: The Natural Ward (#31402)", 6031402},
    {"Recipe: Mok'Nathal Shortribs (#31675)", 6031675},
    {"Recipe: Crunchy Serpent (#31674)", 6031674},
    {"Recipe: Fel Strength Elixir (#31680)", 6031680},
    {"Recipe: Fel Mana Potion (#31682)", 6031682},
    {"Recipe: Fel Regeneration Potion (#31681)", 6031681},
    {"Codex: Prayer of Shadow Protection II (#31837)", 6031837},
    {"Design: Great Golden Draenite (#31870)", 6031870},
    {"Design: Great Dawnstone (#31875)", 6031875},
    {"Design: Balanced Shadow Draenite (#31871)", 6031871},
    {"Design: Infused Shadow Draenite (#31872)", 6031872},
    {"Design: Infused Nightseye (#31877)", 6031877},
    {"Design: Balanced Nightseye (#31876)", 6031876},
    {"Design: Veiled Flame Spessarite (#31873)", 6031873},
    {"Design: Wicked Flame Spessarite (#31874)", 6031874},
    {"Design: Veiled Noble Topaz (#31878)", 6031878},
    {"Design: Wicked Noble Topaz (#31879)", 6031879},
    {"Recipe: Earthen Elixir (#32070)", 6032070},
    {"Recipe: Elixir of Ironskin (#32071)", 6032071},
    {"Design: Bold Crimson Spinel (#32274)", 6032274},
    {"Design: Delicate Crimson Spinel (#32277)", 6032277},
    {"Design: Teardrop Crimson Spinel (#32281)", 6032281},
    {"Design: Runed Crimson Spinel (#32282)", 6032282},
    {"Design: Bright Crimson Spinel (#32283)", 6032283},
    {"Design: Subtle Crimson Spinel (#32284)", 6032284},
    {"Design: Flashing Crimson Spinel (#32285)", 6032285},
    {"Design: Solid Empyrean Sapphire (#32286)", 6032286},
    {"Design: Sparkling Empyrean Sapphire (#32287)", 6032287},
    {"Design: Lustrous Empyrean Sapphire (#32288)", 6032288},
    {"Design: Stormy Empyrean Sapphire (#32289)", 6032289},
    {"Design: Brilliant Lionseye (#32290)", 6032290},
    {"Design: Smooth Lionseye (#32291)", 6032291},
    {"Design: Rigid Lionseye (#32292)", 6032292},
    {"Design: Gleaming Lionseye (#32293)", 6032293},
    {"Design: Thick Lionseye (#32294)", 6032294},
    {"Design: Mystic Lionseye (#32295)", 6032295},
    {"Design: Great Lionseye (#32296)", 6032296},
    {"Design: Sovereign Shadowsong Amethyst (#32297)", 6032297},
    {"Design: Shifting Shadowsong Amethyst (#32298)", 6032298},
    {"Design: Balanced Shadowsong Amethyst (#32299)", 6032299},
    {"Design: Infused Shadowsong Amethyst (#32300)", 6032300},
    {"Design: Glowing Shadowsong Amethyst (#32301)", 6032301},
    {"Design: Royal Shadowsong Amethyst (#32302)", 6032302},
    {"Design: Inscribed Pyrestone (#32303)", 6032303},
    {"Design: Potent Pyrestone (#32304)", 6032304},
    {"Design: Luminous Pyrestone (#32305)", 6032305},
    {"Design: Glinting Pyrestone (#32306)", 6032306},
    {"Design: Veiled Pyrestone (#32307)", 6032307},
    {"Design: Wicked Pyrestone (#32308)", 6032308},
    {"Design: Enduring Seaspray Emerald (#32309)", 6032309},
    {"Design: Radiant Seaspray Emerald (#32310)", 6032310},
    {"Design: Dazzling Seaspray Emerald (#32311)", 6032311},
    {"Design: Jagged Seaspray Emerald (#32312)", 6032312},
    {"Schematic: Fused Wiring (#32381)", 6032381},
    {"Design: Relentless Earthstorm Diamond (#32412)", 6032412},
    {"Design: Thundering Skyfire Diamond (#32411)", 6032411},
    {"Pattern: Boots of Shackled Souls (#32429)", 6032429},
    {"Pattern: Greaves of Shackled Souls (#32431)", 6032431},
    {"Pattern: Waistguard of Shackled Souls (#32432)", 6032432},
    {"Pattern: Redeemed Soul Moccasins (#32433)", 6032433},
    {"Pattern: Redeemed Soul Wristguards (#32434)", 6032434},
    {"Pattern: Redeemed Soul Legguards (#32435)", 6032435},
    {"Pattern: Redeemed Soul Cinch (#32436)", 6032436},
    {"Pattern: Soulguard Slippers (#32437)", 6032437},
    {"Pattern: Soulguard Bracers (#32438)", 6032438},
    {"Pattern: Soulguard Leggings (#32439)", 6032439},
    {"Pattern: Soulguard Girdle (#32440)", 6032440},
    {"Plans: Shadesteel Sabots (#32441)", 6032441},
    {"Plans: Shadesteel Bracers (#32442)", 6032442},
    {"Plans: Shadesteel Greaves (#32443)", 6032443},
    {"Plans: Shadesteel Girdle (#32444)", 6032444},
    {"Pattern: Night's End (#32447)", 6032447},
    {"Plans: Swiftsteel Bracers (#32736)", 6032736},
    {"Plans: Swiftsteel Shoulders (#32737)", 6032737},
    {"Plans: Dawnsteel Bracers (#32738)", 6032738},
    {"Plans: Dawnsteel Shoulders (#32739)", 6032739},
    {"Pattern: Bracers of Renewed Life (#32744)", 6032744},
    {"Pattern: Shoulderpads of Renewed Life (#32745)", 6032745},
    {"Pattern: Swiftstrike Bracers (#32746)", 6032746},
    {"Pattern: Swiftstrike Shoulders (#32747)", 6032747},
    {"Pattern: Bindings of Lightning Reflexes (#32748)", 6032748},
    {"Pattern: Shoulders of Lightning Reflexes (#32749)", 6032749},
    {"Pattern: Living Earth Bindings (#32750)", 6032750},
    {"Pattern: Living Earth Shoulders (#32751)", 6032751},
    {"Pattern: Bracers of Nimble Thought (#32754)", 6032754},
    {"Pattern: Mantle of Nimble Thought (#32755)", 6032755},
    {"Pattern: Swiftheal Wraps (#32752)", 6032752},
    {"Pattern: Swiftheal Mantle (#32753)", 6032753},
    {"Pattern: Cloak of Darkness (#33124)", 6033124},
    {"Design: Don Julio's Heart (#33305)", 6033305},
    {"Design: Kailee's Rose (#33155)", 6033155},
    {"Design: Crimson Sun (#33156)", 6033156},
    {"Design: Falling Star (#33157)", 6033157},
    {"Design: Stone of Blades (#33158)", 6033158},
    {"Design: Blood of Amber (#33159)", 6033159},
    {"Design: Facet of Eternity (#33160)", 6033160},
    {"Formula: Enchant Weapon - Greater Agility (#33165)", 6033165},
    {"Plans: Ragesteel Shoulders (#33174)", 6033174},
    {"Plans: Adamantite Weapon Chain (#33186)", 6033186},
    {"Pattern: Shadowprowler's Chestguard (#33205)", 6033205},
    {"Recipe: Flask of Chromatic Wonder (#33209)", 6033209},
    {"Formula: Enchant Weapon - Executioner (#33307)", 6033307},
    {"Weather-Beaten Journal (#34109)", 6034109},
    {"Design: Steady Talasite (#33783)", 6033783},
    {"Plans: Heavy Copper Longsword (#33792)", 6033792},
    {"Schematic: Adamantite Arrow Maker (#33804)", 6033804},
    {"Recipe: Skullfish Soup (#33870)", 6033870},
    {"Recipe: Stormchops (#33871)", 6033871},
    {"Recipe: Broiled Bloodfin (#33869)", 6033869},
    {"Recipe: Spicy Hot Talbuk (#33873)", 6033873},
    {"Recipe: Kibler's Bits (#33875)", 6033875},
    {"Recipe: Delicious Chocolate Cake (#33925)", 6033925},
    {"Plans: Hammer of Righteous Might (#33954)", 6033954},
    {"Pattern: Quiver of a Thousand Feathers (#34200)", 6034200},
    {"Schematic: Field Repair Bot 110G (#34114)", 6034114},
    {"Formula: Enchant Cloak - Superior Frost Resistance (#37332)", 6037332},
    {"Formula: Enchant Cloak - Superior Nature Resistance (#37333)", 6037333},
    {"Formula: Enchant Cloak - Superior Agility (#37335)", 6037335},
    {"Formula: Enchant Weapon - Exceptional Spirit (#37329)", 6037329},
    {"Formula: Enchant Gloves - Greater Assault (#37345)", 6037345},
    {"Formula: Enchant Weapon - Icebreaker (#37344)", 6037344},
    {"Formula: Enchant Cloak - Superior Fire Resistance (#37331)", 6037331},
    {"Formula: Enchant Bracers - Greater Assault (#44484)", 6044484},
    {"Formula: Enchant Weapon - Lifeward (#44494)", 6044494},
    {"Formula: Enchant Chest - Exceptional Resilience (#37340)", 6037340},
    {"Formula: Enchant Cloak - Superior Shadow Resistance (#37334)", 6037334},
    {"Formula: Enchant Cloak - Titanweave (#37347)", 6037347},
    {"Formula: Enchant Bracer - Major Spirit (#37326)", 6037326},
    {"Formula: Enchant Weapon - Scourgebane (#44473)", 6044473},
    {"Formula: Enchant Cloak - Superior Arcane Resistance (#37330)", 6037330},
    {"Formula: Enchant Bracer - Expertise (#37346)", 6037346},
    {"Formula: Enchant Bracer - Greater Stats (#37337)", 6037337},
    {"Formula: Enchant Weapon - Giant Slayer (#37339)", 6037339},
    {"Formula: Enchant Gloves - Armsman (#44485)", 6044485},
    {"Formula: Enchant Weapon - Greater Savagery (#37338)", 6037338},
    {"Formula: Enchant Cloak - Shadow Armor (#37349)", 6037349},
    {"Formula: Enchant Weapon - Exceptional Agility (#37343)", 6037343},
    {"Pattern: Netherscale Ammo Pouch (#34201)", 6034201},
    {"Design: Chaotic Skyfire Diamond (#34221)", 6034221},
    {"Pattern: Green Winter Clothes (#34261)", 6034261},
    {"Pattern: Winter Boots (#34262)", 6034262},
    {"Pattern: Red Winter Clothes (#34319)", 6034319},
    {"Recipe: Hot Apple Cider (#34413)", 6034413},
    {"Pattern: Bag of Many Hides (#34491)", 6034491},
    {"Manual: Heavy Frostweave Bandage (#39152)", 6039152},
    {"Recipe: Mega Mammoth Meal (#43018)", 6043018},
    {"Recipe: Tender Shoveltusk Steak (#43019)", 6043019},
    {"Recipe: Spiced Worm Burger (#43020)", 6043020},
    {"Recipe: Very Burnt Worg (#43021)", 6043021},
    {"Recipe: Mighty Rhino Dogs (#43022)", 6043022},
    {"Recipe: Poached Northern Sculpin (#43023)", 6043023},
    {"Recipe: Firecracker Salmon (#43024)", 6043024},
    {"Recipe: Imperial Manta Steak (#43026)", 6043026},
    {"Recipe: Spicy Blue Nettlefish (#43025)", 6043025},
    {"Recipe: Captain Rumsey's Lager (#34834)", 6034834},
    {"Formula: Void Shatter (#34872)", 6034872},
    {"Schematic: Wonderheal XT68 Shades (#35191)", 6035191},
    {"Schematic: Justicebringer 3000 Specs (#35187)", 6035187},
    {"Schematic: Powerheal 9000 Lens (#35189)", 6035189},
    {"Schematic: Hyper-Magnified Moon Specs (#35190)", 6035190},
    {"Schematic: Primal-Attuned Goggles (#35192)", 6035192},
    {"Schematic: Annihilator Holo-Gogs (#35186)", 6035186},
    {"Schematic: Lightning Etched Specs (#35193)", 6035193},
    {"Schematic: Surestrike Goggles v3.0 (#35194)", 6035194},
    {"Schematic: Mayhem Projection Goggles (#35195)", 6035195},
    {"Schematic: Hard Khorium Goggles (#35196)", 6035196},
    {"Schematic: Quad Deathblow X44 Goggles (#35197)", 6035197},
    {"Design: Loop of Forged Power (#35198)", 6035198},
    {"Design: Ring of Flowing Life (#35199)", 6035199},
    {"Design: Hard Khorium Band (#35200)", 6035200},
    {"Design: Pendant of Sunfire (#35201)", 6035201},
    {"Design: Amulet of Flowing Life (#35202)", 6035202},
    {"Design: Hard Khorium Choker (#35203)", 6035203},
    {"Pattern: Sunfire Handwraps (#35204)", 6035204},
    {"Pattern: Hands of Eternal Light (#35205)", 6035205},
    {"Pattern: Sunfire Robe (#35206)", 6035206},
    {"Pattern: Robe of Eternal Light (#35207)", 6035207},
    {"Pattern: Leather Gauntlets of the Sun (#35212)", 6035212},
    {"Pattern: Fletcher's Gloves of the Phoenix (#35213)", 6035213},
    {"Pattern: Gloves of Immortal Dusk (#35214)", 6035214},
    {"Pattern: Sun-Drenched Scale Gloves (#35215)", 6035215},
    {"Pattern: Leather Chestguard of the Sun (#35216)", 6035216},
    {"Pattern: Embrace of the Phoenix (#35217)", 6035217},
    {"Pattern: Carapace of Sun and Shadow (#35218)", 6035218},
    {"Pattern: Sun-Drenched Scale Chestguard (#35219)", 6035219},
    {"Plans: Sunblessed Gauntlets (#35208)", 6035208},
    {"Plans: Hard Khorium Battlefists (#35209)", 6035209},
    {"Plans: Sunblessed Breastplate (#35210)", 6035210},
    {"Plans: Hard Khorium Battleplate (#35211)", 6035211},
    {"Study of Advanced Smelting (#35273)", 6035273},
    {"Design: Quick Dawnstone (#35322)", 6035322},
    {"Design: Reckless Noble Topaz (#35323)", 6035323},
    {"Design: Forceful Talasite (#35325)", 6035325},
    {"Formula: Enchant Weapon - Deathfrost (#35498)", 6035498},
    {"Formula: Enchant Chest - Defense (#35500)", 6035500},
    {"Design: Eternal Earthstorm Diamond (#35502)", 6035502},
    {"Design: Ember Skyfire Diamond (#35505)", 6035505},
    {"Recipe: Charred Bear Kabobs (#35564)", 6035564},
    {"Recipe: Juicy Bear Burger (#35566)", 6035566},
    {"Schematic: Rocket Boots Xtreme Lite (#35582)", 6035582},
    {"Design: Figurine - Empyrean Tortoise (#35695)", 6035695},
    {"Design: Figurine - Khorium Boar (#35696)", 6035696},
    {"Design: Figurine - Crimson Serpent (#35697)", 6035697},
    {"Design: Figurine - Shadowsong Panther (#35698)", 6035698},
    {"Design: Figurine - Seaspray Albatross (#35699)", 6035699},
    {"Design: Regal Nightseye (#35708)", 6035708},
    {"Recipe: Guardian's Alchemist Stone (#35752)", 6035752},
    {"Recipe: Sorcerer's Alchemist Stone (#35753)", 6035753},
    {"Recipe: Redeemer's Alchemist Stone (#35754)", 6035754},
    {"Recipe: Assassin's Alchemist Stone (#35755)", 6035755},
    {"Formula: Enchant Cloak - Steelweave (#35756)", 6035756},
    {"Design: Forceful Seaspray Emerald (#35765)", 6035765},
    {"Design: Steady Seaspray Emerald (#35764)", 6035764},
    {"Design: Reckless Pyrestone (#35762)", 6035762},
    {"Design: Quick Lionseye (#35763)", 6035763},
    {"Formula: Enchant Cloak - Mighty Armor (#44471)", 6044471},
    {"Formula: Enchant Chest - Greater Dodge (#37336)", 6037336},
    {"Formula: Enchant Cloak - Haste (#37348)", 6037348},
    {"Formula: Enchant Cloak - Wisdom (#44488)", 6044488},
    {"Formula: Enchant Boots - Tuskarr's Vitality (#44491)", 6044491},
    {"Design: Purified Shadowsong Amethyst (#37504)", 6037504},
    {"Pattern: Dress Shoes (#37915)", 6037915},
    {"Pattern: Mycah's Botanical Bag (#38229)", 6038229},
    {"Pattern: Haliscan Jacket (#38327)", 6038327},
    {"Pattern: Haliscan Pantaloons (#38328)", 6038328},
    {"Pattern: Trapper's Traveling Pack (#44509)", 6044509},
    {"Pattern: Mammoth Mining Bag (#44510)", 6044510},
    {"Pattern: Dark Arctic Boots (#38597)", 6038597},
    {"Manual: Dense Frostweave Bandage (#39153)", 6039153},
    {"Pattern: Bracers of Shackled Souls (#32430)", 6032430},
    {"Recipe: Kungaloosh (#39644)", 6039644},
    {"Design: Bold Scarlet Ruby (#41576)", 6041576},
    {"Design: Mystic Sun Crystal (#41559)", 6041559},
    {"Design: Mysterious Shadow Crystal (#41575)", 6041575},
    {"Design: Defender's Shadow Crystal (#41574)", 6041574},
    {"Design: Resplendent Huge Citrine (#41566)", 6041566},
    {"Design: Deadly Huge Citrine (#41562)", 6041562},
    {"Design: Lucent Huge Citrine (#41565)", 6041565},
    {"Design: Durable Huge Citrine (#41563)", 6041563},
    {"Design: Reckless Huge Citrine (#41561)", 6041561},
    {"Design: Empowered Huge Citrine (#41564)", 6041564},
    {"Design: Vivid Dark Jade (#41567)", 6041567},
    {"Design: Steady Dark Jade (#41572)", 6041572},
    {"Design: Seer's Dark Jade (#41568)", 6041568},
    {"Design: Turbid Dark Jade (#41571)", 6041571},
    {"Design: Opaque Dark Jade (#41573)", 6041573},
    {"Design: Tense Dark Jade (#41570)", 6041570},
    {"Design: Shattered Dark Jade (#41569)", 6041569},
    {"Recipe: Mighty Arcane Protection Potion (#44564)", 6044564},
    {"Recipe: Mighty Frost Protection Potion (#44566)", 6044566},
    {"Recipe: Mighty Shadow Protection Potion (#44568)", 6044568},
    {"Recipe: Mighty Fire Protection Potion (#44565)", 6044565},
    {"Recipe: Mighty Nature Protection Potion (#44567)", 6044567},
    {"Design: Stormy Chalcedony (#41560)", 6041560},
    {"Design: Delicate Scarlet Ruby (#41577)", 6041577},
    {"Design: Runed Scarlet Ruby (#41718)", 6041718},
    {"Design: Subtle Scarlet Ruby (#41719)", 6041719},
    {"Design: Flashing Scarlet Ruby (#41578)", 6041578},
    {"Design: Fractured Scarlet Ruby (#41817)", 6041817},
    {"Design: Precise Scarlet Ruby (#41790)", 6041790},
    {"Design: Solid Sky Sapphire (#42138)", 6042138},
    {"Design: Lustrous Sky Sapphire (#41581)", 6041581},
    {"Design: Stormy Sky Sapphire (#41728)", 6041728},
    {"Design: Smooth Autumn's Glow (#41720)", 6041720},
    {"Design: Rigid Autumn's Glow (#41580)", 6041580},
    {"Design: Thick Autumn's Glow (#41791)", 6041791},
    {"Design: Mystic Autumn's Glow (#41727)", 6041727},
    {"Design: Quick Autumn's Glow (#41579)", 6041579},
    {"Design: Sovereign Twilight Opal (#41784)", 6041784},
    {"Design: Shifting Twilight Opal (#41747)", 6041747},
    {"Design: Tenuous Twilight Opal (#41785)", 6041785},
    {"Design: Glowing Twilight Opal (#41725)", 6041725},
    {"Design: Purified Twilight Opal (#41783)", 6041783},
    {"Design: Royal Twilight Opal (#41701)", 6041701},
    {"Design: Mysterious Twilight Opal (#41740)", 6041740},
    {"Design: Infused Twilight Opal (#41796)", 6041796},
    {"Design: Regal Twilight Opal (#41703)", 6041703},
    {"Design: Defender's Twilight Opal (#41820)", 6041820},
    {"Design: Puissant Twilight Opal (#41702)", 6041702},
    {"Design: Guardian's Twilight Opal (#41726)", 6041726},
    {"Design: Inscribed Monarch Topaz (#41789)", 6041789},
    {"Design: Etched Monarch Topaz (#41777)", 6041777},
    {"Design: Champion's Monarch Topaz (#41780)", 6041780},
    {"Design: Resplendent Monarch Topaz (#41734)", 6041734},
    {"Design: Deadly Monarch Topaz (#41794)", 6041794},
    {"Design: Glinting Monarch Topaz (#41582)", 6041582},
    {"Design: Lucent Monarch Topaz (#41733)", 6041733},
    {"Design: Deft Monarch Topaz (#41792)", 6041792},
    {"Design: Luminous Monarch Topaz (#41689)", 6041689},
    {"Design: Potent Monarch Topaz (#41686)", 6041686},
    {"Design: Veiled Monarch Topaz (#41688)", 6041688},
    {"Design: Durable Monarch Topaz (#41730)", 6041730},
    {"Design: Reckless Monarch Topaz (#41690)", 6041690},
    {"Design: Wicked Monarch Topaz (#41721)", 6041721},
    {"Design: Empowered Monarch Topaz (#41732)", 6041732},
    {"Design: Stark Monarch Topaz (#41687)", 6041687},
    {"Design: Stalwart Monarch Topaz (#41779)", 6041779},
    {"Design: Glimmering Monarch Topaz (#41722)", 6041722},
    {"Design: Accurate Monarch Topaz (#41818)", 6041818},
    {"Design: Timeless Forest Emerald (#41795)", 6041795},
    {"Design: Jagged Forest Emerald (#41723)", 6041723},
    {"Design: Vivid Forest Emerald (#41698)", 6041698},
    {"Design: Enduring Forest Emerald (#41697)", 6041697},
    {"Design: Steady Forest Emerald (#41738)", 6041738},
    {"Design: Forceful Forest Emerald (#41693)", 6041693},
    {"Design: Seer's Forest Emerald (#41699)", 6041699},
    {"Design: Misty Forest Emerald (#41781)", 6041781},
    {"Design: Shining Forest Emerald (#41782)", 6041782},
    {"Design: Turbid Forest Emerald (#41737)", 6041737},
    {"Design: Intricate Forest Emerald (#41694)", 6041694},
    {"Design: Sundered Forest Emerald (#41724)", 6041724},
    {"Design: Lambent Forest Emerald (#41696)", 6041696},
    {"Design: Opaque Forest Emerald (#41739)", 6041739},
    {"Design: Energized Forest Emerald (#41692)", 6041692},
    {"Design: Radiant Forest Emerald (#41819)", 6041819},
    {"Design: Tense Forest Emerald (#41736)", 6041736},
    {"Design: Shattered Forest Emerald (#41735)", 6041735},
    {"Design: Fierce Monarch Topaz (#41793)", 6041793},
    {"Design: Resolute Monarch Topaz (#41778)", 6041778},
    {"Tome of Cold Weather Flight (#49177)", 6049177},
    {"Plans: Reinforced Cobalt Shoulders (#41124)", 6041124},
    {"Plans: Reinforced Cobalt Helm (#41123)", 6041123},
    {"Plans: Reinforced Cobalt Legplates (#41120)", 6041120},
    {"Plans: Reinforced Cobalt Chestpiece (#41122)", 6041122},
    {"ZZOLD Design: Effulgent Skyflare Diamond (#41414)", 6041414},
    {"ZZOLD Design: Tireless Skyflare Diamond (#41415)", 6041415},
    {"ZZOLD Design: Forlorn Skyflare Diamond (#41416)", 6041416},
    {"ZZOLD Design: Impassive Skyflare Diamond (#41417)", 6041417},
    {"ZZOLD Design: Chaotic Skyflare Diamond (#41418)", 6041418},
    {"ZZOLD Design: Destructive Skyflare Diamond (#41419)", 6041419},
    {"ZZOLD Design: Ember Skyflare Diamond (#41420)", 6041420},
    {"ZZOLD Design: Enigmatic Skyflare Diamond (#41421)", 6041421},
    {"ZZOLD Design: Swift Skyflare Diamond (#41422)", 6041422},
    {"ZZOLDDesign: Thundering Skyflare Diamond (#41423)", 6041423},
    {"ZZOLD Design: Insightful Earthsiege Diamond (#41403)", 6041403},
    {"ZZOLD Design: Bracing Earthsiege Diamond (#41404)", 6041404},
    {"ZZOLD Design: Eternal Earthsiege Diamond (#41405)", 6041405},
    {"ZZOLD Design: Powerful Earthsiege Diamond (#41406)", 6041406},
    {"ZZOLD Design: Relentless Earthsiege Diamond (#41407)", 6041407},
    {"ZZOLD Design: Austere Earthsiege Diamond (#41408)", 6041408},
    {"ZZOLD Design: Persistent Earthsiege Diamond (#41409)", 6041409},
    {"ZZOLD Design: Trenchant Earthsiege Diamond (#41410)", 6041410},
    {"ZZOLD Design: Invigorating Earthsiege Diamond (#41411)", 6041411},
    {"ZZOLD Design: Beaming Earthsiege Diamond (#41412)", 6041412},
    {"ZZOLD Design: Revitalizing Skyflare Diamond (#41413)", 6041413},
    {"Pattern: Red Lumberjack Shirt (#42172)", 6042172},
    {"Pattern: Blue Lumberjack Shirt (#42173)", 6042173},
    {"Pattern: Yellow Lumberjack Shirt (#42174)", 6042174},
    {"Pattern: Green Lumberjack Shirt (#42175)", 6042175},
    {"Pattern: Red Workman's Shirt (#42177)", 6042177},
    {"Pattern: Blue Workman's Shirt (#42176)", 6042176},
    {"Pattern: Rustic Workman's Shirt (#42178)", 6042178},
    {"Pattern: Green Workman's Shirt (#42179)", 6042179},
    {"Pattern: Moonshroud (#42181)", 6042181},
    {"Pattern: Ebonweave (#42180)", 6042180},
    {"Pattern: Spellweave (#42182)", 6042182},
    {"Pattern: Abyssal Bag (#42183)", 6042183},
    {"Pattern: Glacial Bag (#42184)", 6042184},
    {"Pattern: Mysterious Bag (#42185)", 6042185},
    {"Pattern: Frostweave Bag (#42186)", 6042186},
    {"Pattern: Brilliant Spellthread (#42187)", 6042187},
    {"Pattern: Sapphire Spellthread (#42188)", 6042188},
    {"Pattern: Wispcloak (#42189)", 6042189},
    {"Pattern: Deathchill Cloak (#42190)", 6042190},
    {"Pattern: Hat of Wintry Doom (#42191)", 6042191},
    {"Pattern: Silky Iceshard Boots (#42192)", 6042192},
    {"Pattern: Glacial Cord (#42193)", 6042193},
    {"Pattern: Frostmoon Pants (#42194)", 6042194},
    {"Pattern: Light Blessed Mittens (#42195)", 6042195},
    {"Pattern: Aurora Slippers (#42196)", 6042196},
    {"Pattern: Moonshroud Robe (#42197)", 6042197},
    {"Pattern: Moonshroud Gloves (#42198)", 6042198},
    {"Pattern: Ebonweave Robe (#42199)", 6042199},
    {"Pattern: Ebonweave Gloves (#42200)", 6042200},
    {"Pattern: Spellweave Robe (#42201)", 6042201},
    {"Pattern: Spellweave Gloves (#42202)", 6042202},
    {"Design: Bold Dragon's Eye (#42298)", 6042298},
    {"Design: Delicate Dragon's Eye (#42301)", 6042301},
    {"Design: Runed Dragon's Eye (#42309)", 6042309},
    {"Design: Bright Dragon's Eye (#42299)", 6042299},
    {"Design: Subtle Dragon's Eye (#42314)", 6042314},
    {"Design: Flashing Dragon's Eye (#42302)", 6042302},
    {"Design: Brilliant Dragon's Eye (#42300)", 6042300},
    {"Design: Fractured Dragon's Eye (#42303)", 6042303},
    {"Design: Lustrous Dragon's Eye (#42304)", 6042304},
    {"Design: Mystic Dragon's Eye (#42305)", 6042305},
    {"Design: Precise Dragon's Eye (#42306)", 6042306},
    {"Design: Quick Dragon's Eye (#42307)", 6042307},
    {"Design: Rigid Dragon's Eye (#42308)", 6042308},
    {"Design: Smooth Dragon's Eye (#42310)", 6042310},
    {"Design: Solid Dragon's Eye (#42311)", 6042311},
    {"Design: Sparkling Dragon's Eye (#42312)", 6042312},
    {"Design: Stormy Dragon's Eye (#42313)", 6042313},
    {"Design: Thick Dragon's Eye (#42315)", 6042315},
    {"Design: Titanium Impact Band (#42648)", 6042648},
    {"Design: Titanium Earthguard Ring (#42649)", 6042649},
    {"Design: Titanium Spellshock Ring (#42650)", 6042650},
    {"Design: Titanium Impact Choker (#42651)", 6042651},
    {"Design: Titanium Earthguard Chain (#42652)", 6042652},
    {"Design: Titanium Spellshock Necklace (#42653)", 6042653},
    {"Recipe: Fish Feast (#43017)", 6043017},
    {"Recipe: Spicy Fried Herring (#43027)", 6043027},
    {"Recipe: Rhinolicious Wormsteak (#43028)", 6043028},
    {"Recipe: Critter Bites (#43029)", 6043029},
    {"Recipe: Hearty Rhino (#43030)", 6043030},
    {"Recipe: Snapper Extreme (#43031)", 6043031},
    {"Recipe: Blackened Worg Steak (#43032)", 6043032},
    {"Recipe: Cuttlesteak (#43033)", 6043033},
    {"Recipe: Spiced Mammoth Treats (#43034)", 6043034},
    {"Recipe: Blackened Dragonfin (#43035)", 6043035},
    {"Recipe: Dragonfin Filet (#43036)", 6043036},
    {"Recipe: Tracker Snacks (#43037)", 6043037},
    {"Pattern: Fur Lining - Fire Resist (#44559)", 6044559},
    {"Pattern: Fur Lining - Frost Resist (#44560)", 6044560},
    {"Pattern: Fur Lining - Shadow Resist (#44561)", 6044561},
    {"Pattern: Fur Lining - Nature Resist  (#44562)", 6044562},
    {"Pattern: Fur Lining - Arcane Resist (#44563)", 6044563},
    {"Design: Ring of Earthen Might (#43317)", 6043317},
    {"Design: Ring of Scarlet Shadows (#43318)", 6043318},
    {"Design: Windfire Band (#43319)", 6043319},
    {"Design: Ring of Northern Tears (#43320)", 6043320},
    {"Design: Savage Titanium Ring (#43485)", 6043485},
    {"Design: Savage Titanium Band (#43497)", 6043497},
    {"Recipe: Tasty Cupcake (#43507)", 6043507},
    {"Recipe: Last Week's Mammoth (#43508)", 6043508},
    {"Recipe: Bad Clams (#43509)", 6043509},
    {"Recipe: Haunted Herring (#43510)", 6043510},
    {"Recipe: Gigantic Feast (#43505)", 6043505},
    {"Recipe: Small Feast (#43506)", 6043506},
    {"Design: Titanium Frostguard Ring (#43597)", 6043597},
    {"A Guide to Northern Cloth Scavenging (#43876)", 6043876},
    {"Formula: Enchant Weapon - Accuracy (#44496)", 6044496},
    {"Formula: Enchant Weapon - Berserking (#44492)", 6044492},
    {"Formula: Enchant Weapon - Black Magic (#44495)", 6044495},
    {"Pattern: Dragonscale Ammo Pouch (#44511)", 6044511},
    {"Pattern: Nerubian Reinforced Quiver (#44512)", 6044512},
    {"Formula: Enchant 2H Weapon - Massacre (#44483)", 6044483},
    {"Formula: Enchant Chest - Powerful Stats (#44489)", 6044489},
    {"Pattern: Eviscerator's Facemask (#44513)", 6044513},
    {"Pattern: Eviscerator's Shoulderpads (#44514)", 6044514},
    {"Pattern: Eviscerator's Chestguard (#44515)", 6044515},
    {"Pattern: Eviscerator's Bindings (#44516)", 6044516},
    {"Pattern: Eviscerator's Gauntlets (#44517)", 6044517},
    {"Pattern: Eviscerator's Waistguard (#44518)", 6044518},
    {"Formula: Enchant Weapon - Superior Potency (#44486)", 6044486},
    {"Pattern: Eviscerator's Legguards (#44519)", 6044519},
    {"Pattern: Eviscerator's Treads (#44520)", 6044520},
    {"Formula: Enchant Weapon - Mighty Spellpower (#44487)", 6044487},
    {"Pattern: Overcast Headguard (#44521)", 6044521},
    {"Pattern: Overcast Spaulders (#44522)", 6044522},
    {"Pattern: Overcast Chestguard (#44523)", 6044523},
    {"Pattern: Overcast Bracers (#44524)", 6044524},
    {"Pattern: Overcast Handwraps (#44525)", 6044525},
    {"Pattern: Overcast Belt (#44526)", 6044526},
    {"Pattern: Overcast Leggings (#44527)", 6044527},
    {"Pattern: Overcast Boots (#44528)", 6044528},
    {"Pattern: Swiftarrow Helm (#44530)", 6044530},
    {"Pattern: Swiftarrow Shoulderguards (#44531)", 6044531},
    {"Pattern: Swiftarrow Hauberk (#44532)", 6044532},
    {"Pattern: Swiftarrow Bracers (#44533)", 6044533},
    {"Pattern: Swiftarrow Gauntlets (#44534)", 6044534},
    {"Pattern: Swiftarrow Belt (#44535)", 6044535},
    {"Pattern: Swiftarrow Leggings (#44536)", 6044536},
    {"Pattern: Swiftarrow Boots (#44537)", 6044537},
    {"Pattern: Stormhide Crown (#44538)", 6044538},
    {"Pattern: Stormhide Shoulders (#44539)", 6044539},
    {"Pattern: Stormhide Hauberk (#44540)", 6044540},
    {"Pattern: Stormhide Wristguards (#44541)", 6044541},
    {"Pattern: Stormhide Grips (#44542)", 6044542},
    {"Pattern: Stormhide Belt (#44543)", 6044543},
    {"Pattern: Stormhide Legguards (#44544)", 6044544},
    {"Pattern: Stormhide Stompers (#44545)", 6044545},
    {"Pattern: Giantmaim Legguards (#44546)", 6044546},
    {"Pattern: Giantmaim Bracers (#44547)", 6044547},
    {"Pattern: Revenant's Breastplate (#44548)", 6044548},
    {"Pattern: Revenant's Treads (#44549)", 6044549},
    {"Pattern: Trollwoven Spaulders (#44550)", 6044550},
    {"Pattern: Trollwoven Girdle (#44551)", 6044551},
    {"Pattern: Earthgiving Legguards (#44552)", 6044552},
    {"Pattern: Earthgiving Boots (#44553)", 6044553},
    {"Formula: Enchant Boots - Greater Assault (#44490)", 6044490},
    {"Formula: Enchant Bracer - Superior Spellpower (#44498)", 6044498},
    {"Schematic: Mechano-hog (#44502)", 6044502},
    {"Schematic: Mekgineer's Chopper (#44503)", 6044503},
    {"Pattern: Polar Vest (#44584)", 6044584},
    {"Pattern: Polar Cord (#44585)", 6044585},
    {"Pattern: Polar Boots (#44586)", 6044586},
    {"Pattern: Icy Scale Chestguard (#44587)", 6044587},
    {"Pattern: Icy Scale Belt (#44588)", 6044588},
    {"Pattern: Icy Scale Boots (#44589)", 6044589},
    {"Tome of Dalaran Intellect (#44602)", 6044602},
    {"Tome of Polymorph: Black Cat (#44709)", 6044709},
    {"Tome of Dalaran Brilliance (#44714)", 6044714},
    {"Tome of Polymorph: Rabbit (#44793)", 6044793},
    {"Tome of Polymorph: Turkey (#44811)", 6044811},
    {"Recipe: Pumpkin Pie (#44862)", 6044862},
    {"Recipe: Slow-Roasted Turkey (#44861)", 6044861},
    {"Recipe: Cranberry Chutney (#44858)", 6044858},
    {"Recipe: Spice Bread Stuffing (#44860)", 6044860},
    {"Recipe: Candied Sweet Potato (#44859)", 6044859},
    {"Pattern: Windripper Boots (#44932)", 6044932},
    {"Pattern: Windripper Leggings (#44933)", 6044933},
    {"Plans: Titanium Plating (#44937)", 6044937},
    {"Formula: Enchant Bracer - Major Stamina (#44944)", 6044944},
    {"Formula: Enchant Weapon - Titanguard (#44945)", 6044945},
    {"Recipe: Worg Tartare (#44954)", 6044954},
    {"Formula: Enchant Staff - Greater Spellpower (#45059)", 6045059},
    {"Plans: Belt of the Titans (#45088)", 6045088},
    {"Plans: Battlelord's Plate Boots (#45089)", 6045089},
    {"Plans: Plate Girdle of Righteousness (#45090)", 6045090},
    {"Plans: Treads of Destiny (#45091)", 6045091},
    {"Plans: Indestructible Plate Girdle (#45092)", 6045092},
    {"Plans: Spiked Deathdealers (#45093)", 6045093},
    {"Pattern: Belt of Dragons (#45094)", 6045094},
    {"Pattern: Boots of Living Scale (#45095)", 6045095},
    {"Pattern: Blue Belt of Chaos (#45096)", 6045096},
    {"Pattern: Lightning Grounded Boots (#45097)", 6045097},
    {"Pattern: Death-warmed Belt (#45098)", 6045098},
    {"Pattern: Footpads of Silence (#45099)", 6045099},
    {"Pattern: Belt of Arctic Life (#45100)", 6045100},
    {"Pattern: Boots of Wintry Endurance (#45101)", 6045101},
    {"Pattern: Sash of Ancient Power (#45102)", 6045102},
    {"Pattern: Spellslinger's Slippers (#45103)", 6045103},
    {"Pattern: Cord of the White Dawn (#45104)", 6045104},
    {"Pattern: Savior's Slippers (#45105)", 6045105},
    {"Pattern: Emerald Bag (#45774)", 6045774},
    {"Technique: Rituals of the New Moon (#46108)", 6046108},
    {"Formula: Enchant Weapon - Blade Ward (#46027)", 6046027},
    {"Formula: Enchant Weapon - Blood Draining (#46348)", 6046348},
    {"Recipe: Bread of the Dead (#46710)", 6046710},
    {"Recipe: Candied Sweet Potato (#46806)", 6046806},
    {"Recipe: Cranberry Chutney (#46805)", 6046805},
    {"Recipe: Pumpkin Pie (#46804)", 6046804},
    {"Recipe: Slow-Roasted Turkey (#46807)", 6046807},
    {"Recipe: Spice Bread Stuffing (#46803)", 6046803},
    {"Design: Enduring Eye of Zul (#46897)", 6046897},
    {"Design: Steady Eye of Zul (#46898)", 6046898},
    {"Design: Vivid Eye of Zul (#46899)", 6046899},
    {"Design: Dazzling Eye of Zul (#46900)", 6046900},
    {"Design: Jagged Eye of Zul (#46901)", 6046901},
    {"Design: Timeless Eye of Zul (#46902)", 6046902},
    {"Design: Seer's Eye of Zul (#46903)", 6046903},
    {"Design: Forceful Eye of Zul (#46904)", 6046904},
    {"Design: Misty Eye of Zul (#46905)", 6046905},
    {"Design: Sundered Eye of Zul (#46906)", 6046906},
    {"Design: Shining Eye of Zul (#46907)", 6046907},
    {"Design: Tense Eye of Zul (#46908)", 6046908},
    {"Design: Lambent Eye of Zul (#46909)", 6046909},
    {"Design: Intricate Eye of Zul (#46910)", 6046910},
    {"Design: Radiant Eye of Zul (#46911)", 6046911},
    {"Design: Energized Eye of Zul (#46912)", 6046912},
    {"Design: Shattered Eye of Zul (#46913)", 6046913},
    {"Design: Opaque Eye of Zul (#46914)", 6046914},
    {"Design: Turbid Eye of Zul (#46915)", 6046915},
    {"Design: Runed Cardinal Ruby (#46916)", 6046916},
    {"Design: Bold Cardinal Ruby (#46917)", 6046917},
    {"Design: Delicate Cardinal Ruby (#46918)", 6046918},
    {"Design: Bright Cardinal Ruby (#46919)", 6046919},
    {"Design: Precise Cardinal Ruby (#46920)", 6046920},
    {"Design: Fractured Cardinal Ruby (#46921)", 6046921},
    {"Design: Subtle Cardinal Ruby (#46922)", 6046922},
    {"Design: Flashing Cardinal Ruby (#46923)", 6046923},
    {"Design: Solid Majestic Zircon (#46924)", 6046924},
    {"Design: Sparkling Majestic Zircon (#46925)", 6046925},
    {"Design: Stormy Majestic Zircon (#46926)", 6046926},
    {"Design: Lustrous Majestic Zircon (#46927)", 6046927},
    {"Design: Rigid King's Amber (#46928)", 6046928},
    {"Design: Smooth King's Amber (#46929)", 6046929},
    {"Design: Brilliant King's Amber (#46930)", 6046930},
    {"Design: Thick King's Amber (#46931)", 6046931},
    {"Design: Mystic King's Amber (#46932)", 6046932},
    {"Design: Quick King's Amber (#46933)", 6046933},
    {"Design: Balanced Dreadstone (#46934)", 6046934},
    {"Design: Sovereign Dreadstone (#46935)", 6046935},
    {"Design: Glowing Dreadstone (#46936)", 6046936},
    {"Design: Purified Dreadstone (#46937)", 6046937},
    {"Design: Shifting Dreadstone (#46938)", 6046938},
    {"Design: Royal Dreadstone (#46939)", 6046939},
    {"Design: Regal Dreadstone (#46940)", 6046940},
    {"Design: Defender's Dreadstone (#46941)", 6046941},
    {"Design: Guardian's Dreadstone (#46942)", 6046942},
    {"Design: Mysterious Dreadstone (#46943)", 6046943},
    {"Design: Puissant Dreadstone (#46944)", 6046944},
    {"Design: Infused Dreadstone (#46945)", 6046945},
    {"Design: Tenuous Dreadstone (#46946)", 6046946},
    {"Design: Luminous Ametrine (#46947)", 6046947},
    {"Design: Inscribed Ametrine (#46948)", 6046948},
    {"Design: Deadly Ametrine (#46949)", 6046949},
    {"Design: Potent Ametrine (#46950)", 6046950},
    {"Design: Veiled Ametrine (#46951)", 6046951},
    {"Design: Durable Ametrine (#46952)", 6046952},
    {"Design: Etched Ametrine (#46953)", 6046953},
    {"Design: Pristine Ametrine (#46956)", 6046956},
    {"Design: Reckless Ametrine (#47007)", 6047007},
    {"Design: Glinting Ametrine (#47008)", 6047008},
    {"Design: Accurate Ametrine (#47010)", 6047010},
    {"Design: Wicked Ametrine (#47011)", 6047011},
    {"Design: Glimmering Ametrine (#47012)", 6047012},
    {"Design: Champion's Ametrine (#47015)", 6047015},
    {"Design: Empowered Ametrine (#47016)", 6047016},
    {"Design: Stalwart Ametrine (#47017)", 6047017},
    {"Design: Resplendent Ametrine (#47018)", 6047018},
    {"Design: Fierce Ametrine (#47019)", 6047019},
    {"Design: Deft Ametrine (#47020)", 6047020},
    {"Design: Lucent Ametrine (#47021)", 6047021},
    {"Design: Resolute Ametrine (#47022)", 6047022},
    {"Design: Stark Ametrine (#47023)", 6047023},
    {"Recipe: Flask of the North (#47507)", 6047507},
    {"Pattern: Royal Moonshroud Robe (#47657)", 6047657},
    {"Pattern: Royal Moonshroud Bracers (#47656)", 6047656},
    {"Pattern: Merlin's Robe (#47655)", 6047655},
    {"Pattern: Bejeweled Wizard's Bracers (#47654)", 6047654},
    {"Pattern: Ensorcelled Nerubian Breastplate (#47628)", 6047628},
    {"Pattern: Black Chitin Bracers (#47629)", 6047629},
    {"Pattern: Crusader's Dragonscale Breastplate (#47630)", 6047630},
    {"Pattern: Crusader's Dragonscale Bracers (#47631)", 6047631},
    {"Pattern: Lunar Eclipse Robes (#47632)", 6047632},
    {"Pattern: Moonshadow Armguards (#47633)", 6047633},
    {"Pattern: Knightbane Carapace (#47634)", 6047634},
    {"Pattern: Bracers of Swift Death (#47635)", 6047635},
    {"Plans: Breastplate of the White Knight (#47622)", 6047622},
    {"Plans: Saronite Swordbreakers (#47623)", 6047623},
    {"Plans: Titanium Razorplate (#47624)", 6047624},
    {"Plans: Titanium Spikeguards (#47625)", 6047625},
    {"Plans: Sunforged Breastplate (#47626)", 6047626},
    {"Plans: Sunforged Bracers (#47627)", 6047627},
    {"Plans: Breastplate of the White Knight (#47640)", 6047640},
    {"Plans: Saronite Swordbreakers (#47641)", 6047641},
    {"Plans: Titanium Razorplate (#47644)", 6047644},
    {"Plans: Titanium Spikeguards (#47645)", 6047645},
    {"Plans: Sunforged Breastplate (#47643)", 6047643},
    {"Plans: Sunforged Bracers (#47642)", 6047642},
    {"Pattern: Ensorcelled Nerubian Breastplate (#47650)", 6047650},
    {"Pattern: Black Chitin Bracers (#47646)", 6047646},
    {"Pattern: Crusader's Dragonscale Breastplate (#47649)", 6047649},
    {"Pattern: Bracers of Swift Death (#47647)", 6047647},
    {"Pattern: Lunar Eclipse Robes (#47652)", 6047652},
    {"Pattern: Moonshadow Armguards (#47653)", 6047653},
    {"Pattern: Knightbane Carapace (#47651)", 6047651},
    {"Pattern: Crusader's Dragonscale Bracers (#47648)", 6047648},
    {"Pattern: Royal Moonshroud Robe (#47636)", 6047636},
    {"Pattern: Bejeweled Wizard's Bracers (#47639)", 6047639},
    {"Pattern: Merlin's Robe (#47638)", 6047638},
    {"Pattern: Royal Moonshroud Bracers (#47637)", 6047637},
    {"Schematic: Jeeves (#49050)", 6049050},
    {"Design: Nightmare Tear (#49112)", 6049112},
    {"Pattern: Leggings of Woven Death (#49953)", 6049953},
    {"Pattern: Deathfrost Boots (#49954)", 6049954},
    {"Pattern: Lightweave Leggings (#49955)", 6049955},
    {"Pattern: Sandals of Consecration (#49956)", 6049956},
    {"Pattern: Legwraps of Unleashed Nature (#49957)", 6049957},
    {"Pattern: Blessed Cenarion Boots (#49958)", 6049958},
    {"Pattern: Bladeborn Leggings (#49959)", 6049959},
    {"Pattern: Footpads of Impending Death (#49961)", 6049961},
    {"Pattern: Lightning-Infused Leggings (#49962)", 6049962},
    {"Pattern: Earthsoul Boots (#49963)", 6049963},
    {"Pattern: Draconic Bonesplinter Legguards (#49965)", 6049965},
    {"Pattern: Rock-Steady Treads (#49966)", 6049966},
    {"Plans: Puresteel Legplates (#49969)", 6049969},
    {"Plans: Protectors of Life (#49970)", 6049970},
    {"Plans: Legplates of Painful Death (#49971)", 6049971},
    {"Plans: Hellfrozen Bonegrinders (#49972)", 6049972},
    {"Plans: Pillars of Might (#49973)", 6049973},
    {"Plans: Boots of Kingly Upheaval (#49974)", 6049974},
    {"Technique: Glyph of Rapid Rejuvenation (#50167)", 6050167},
    {"Technique: Glyph of Eternal Water (#50166)", 6050166},
    {"Technique: Glyph of Quick Decay (#50168)", 6050168},
    {"Formula: Enchant Gloves - Angler (#50406)", 6050406},
    {"Plans: Shatter Rounds (#52022)", 6052022},
    {"Plans: Iceblade Arrow (#52023)", 6052023},
    {"Pattern: Frosty Flying Carpet (#54798)", 6054798},
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
    {"Item: Codex of Holy Word: Shield III (#3122)", 6503122},
    {"Item: Grimoire of Immolate III (#4200)", 6504200},
    {"Item: Grimoire of Inferno (#9214)", 6509214},
    {"Item: Pattern: Fine Leather Boots (#2406)", 6502406},
    {"Item: Pattern: White Leather Jerkin (#2407)", 6502407},
    {"Item: Pattern: Fine Leather Gloves (#2408)", 6502408},
    {"Item: Pattern: Dark Leather Tunic (#2409)", 6502409},
    {"Item: Recipe: Elixir of Lesser Agility (#3396)", 6503396},
    {"Item: Recipe: Swiftness Potion (#2555)", 6502555},
    {"Item: Pattern: Red Linen Robe (#2598)", 6502598},
    {"Item: Pattern: Gray Woolen Robe (#2601)", 6502601},
    {"Item: Recipe: Goretusk Liver Pie (#2697)", 6502697},
    {"Item: Recipe: Westfall Stew (#728)", 6500728},
    {"Item: Recipe: Cooked Crab Claw (#2698)", 6502698},
    {"Item: Recipe: Redridge Goulash (#2699)", 6502699},
    {"Item: Recipe: Succulent Pork Ribs (#2700)", 6502700},
    {"Item: Recipe: Seasoned Wolf Kabob (#2701)", 6502701},
    {"Item: Plans: Runed Copper Breastplate (#2881)", 6502881},
    {"Item: Plans: Silvered Bronze Breastplate (#5578)", 6505578},
    {"Item: Recipe: Beer Basted Boar Ribs (#2889)", 6502889},
    {"Item: Recipe: Minor Magic Resistance Potion (#3393)", 6503393},
    {"Item: Recipe: Potion of Curing (#3394)", 6503394},
    {"Item: Recipe: Limited Invulnerability Potion (#3395)", 6503395},
    {"Item: Recipe: Elixir of Ogre's Strength (#6211)", 6506211},
    {"Item: Recipe: Elixir of Minor Agility (#2553)", 6502553},
    {"Item: Plans: Deadly Bronze Poniard (#2883)", 6502883},
    {"Item: Plans: Mighty Iron Hammer (#3608)", 6503608},
    {"Item: Plans: Copper Chain Vest (#3609)", 6503609},
    {"Item: Plans: Gemmed Copper Gauntlets (#3610)", 6503610},
    {"Item: Plans: Silvered Bronze Shoulders (#2882)", 6502882},
    {"Item: Plans: Green Iron Boots (#3611)", 6503611},
    {"Item: Plans: Green Iron Gauntlets (#3612)", 6503612},
    {"Item: Recipe: Crocolisk Steak (#3678)", 6503678},
    {"Item: Recipe: Blood Sausage (#3679)", 6503679},
    {"Item: Recipe: Murloc Fin Soup (#3680)", 6503680},
    {"Item: Recipe: Crocolisk Gumbo (#3681)", 6503681},
    {"Item: Recipe: Curiously Tasty Omelet (#3682)", 6503682},
    {"Item: Recipe: Gooey Spider Cake (#3683)", 6503683},
    {"Item: Recipe: Big Bear Steak (#3734)", 6503734},
    {"Item: Recipe: Hot Lion Chops (#3735)", 6503735},
    {"Item: Recipe: Tasty Lion Steak (#3736)", 6503736},
    {"Item: Recipe: Soothing Turtle Bisque (#3737)", 6503737},
    {"Item: Recipe: Shadow Oil (#6068)", 6506068},
    {"Item: Recipe: Elixir of Fortitude (#3830)", 6503830},
    {"Item: Recipe: Major Troll's Blood Elixir (#3831)", 6503831},
    {"Item: Recipe: Elixir of Detect Lesser Invisibility (#3832)", 6503832},
    {"Item: Recipe: Frost Oil (#14634)", 6514634},
    {"Item: Plans: Hardened Iron Shortsword (#12162)", 6512162},
    {"Item: Plans: Jade Serpentblade (#3866)", 6503866},
    {"Item: Plans: Solid Iron Maul (#10858)", 6510858},
    {"Item: Plans: Golden Iron Destroyer (#3867)", 6503867},
    {"Item: Plans: Moonsteel Broadsword (#12163)", 6512163},
    {"Item: Plans: Frost Tiger Blade (#3868)", 6503868},
    {"Item: Plans: Massive Iron Axe (#12164)", 6512164},
    {"Item: Plans: Shadow Crescent Axe (#3869)", 6503869},
    {"Item: Plans: Golden Scale Coif (#6047)", 6506047},
    {"Item: Plans: Green Iron Shoulders (#3870)", 6503870},
    {"Item: Plans: Golden Scale Shoulders (#3871)", 6503871},
    {"Item: Plans: Golden Scale Leggings (#3872)", 6503872},
    {"Item: Plans: Golden Scale Cuirass (#3873)", 6503873},
    {"Item: Plans: Polished Steel Boots (#3874)", 6503874},
    {"Item: Plans: Golden Scale Boots (#3875)", 6503875},
    {"Item: Pattern: Green Woolen Bag (#4292)", 6504292},
    {"Item: Pattern: Hillman's Leather Vest (#4293)", 6504293},
    {"Item: Pattern: Dark Leather Gloves (#7360)", 6507360},
    {"Item: Pattern: Hillman's Belt (#4294)", 6504294},
    {"Item: Pattern: Dark Leather Shoulders (#4296)", 6504296},
    {"Item: Pattern: Barbaric Gloves (#4297)", 6504297},
    {"Item: Pattern: Green Leather Armor (#7613)", 6507613},
    {"Item: Pattern: Guardian Armor (#4299)", 6504299},
    {"Item: Pattern: Guardian Belt (#4298)", 6504298},
    {"Item: Pattern: Guardian Leather Bracers (#4300)", 6504300},
    {"Item: Pattern: Gem-studded Leather Belt (#14635)", 6514635},
    {"Item: Pattern: Barbaric Belt (#4301)", 6504301},
    {"Item: Pattern: Heavy Woolen Cloak (#4346)", 6504346},
    {"Item: Pattern: Red Woolen Boots (#4345)", 6504345},
    {"Item: Pattern: Reinforced Woolen Shoulders (#4347)", 6504347},
    {"Item: Pattern: Phoenix Pants (#4349)", 6504349},
    {"Item: Pattern: Azure Silk Gloves (#7114)", 6507114},
    {"Item: Pattern: Spider Silk Slippers (#4350)", 6504350},
    {"Item: Pattern: Enchanter's Cowl (#14630)", 6514630},
    {"Item: Pattern: Shadow Hood (#4351)", 6504351},
    {"Item: Pattern: Boots of the Enchanter (#4352)", 6504352},
    {"Item: Pattern: Icy Cloak (#4355)", 6504355},
    {"Item: Pattern: Spider Belt (#4353)", 6504353},
    {"Item: Pattern: Star Belt (#4356)", 6504356},
    {"Item: Pattern: Phoenix Gloves (#4348)", 6504348},
    {"Item: Pattern: Bright Yellow Shirt (#14627)", 6514627},
    {"Item: Pattern: Dark Silk Shirt (#6401)", 6506401},
    {"Item: Pattern: Rich Purple Silk Shirt (#4354)", 6504354},
    {"Item: Pattern: Black Swashbuckler's Shirt (#10728)", 6510728},
    {"Item: Schematic: Mechanical Squirrel Box (#4408)", 6504408},
    {"Item: Schematic: Small Seaforium Charge (#4409)", 6504409},
    {"Item: Schematic: Lovingly Crafted Boomstick (#13309)", 6513309},
    {"Item: Schematic: Shadow Goggles (#4410)", 6504410},
    {"Item: Schematic: Flame Deflector (#4411)", 6504411},
    {"Item: Schematic: Minor Recombobulator (#14639)", 6514639},
    {"Item: Schematic: Moonsight Rifle (#4412)", 6504412},
    {"Item: Schematic: Ice Deflector (#13308)", 6513308},
    {"Item: Schematic: Discombobulator Ray (#4413)", 6504413},
    {"Item: Schematic: Portable Bronze Mortar (#4414)", 6504414},
    {"Item: Schematic: Craftsman's Monocle (#4415)", 6504415},
    {"Item: Schematic: Goblin Land Mine (#4416)", 6504416},
    {"Item: Schematic: Mechanical Dragonling (#13311)", 6513311},
    {"Item: Schematic: Gnomish Cloaking Device (#7742)", 6507742},
    {"Item: Schematic: Large Seaforium Charge (#4417)", 6504417},
    {"Item: Schematic: Accurate Scope (#13310)", 6513310},
    {"Item: Recipe: Barbecued Buzzard Wing (#4609)", 6504609},
    {"Item: Pattern: Raptor Hide Harness (#13287)", 6513287},
    {"Item: Pattern: Raptor Hide Belt (#13288)", 6513288},
    {"Item: Recipe: Discolored Healing Potion (#4597)", 6504597},
    {"Item: Recipe: Lesser Stoneshield Potion (#4624)", 6504624},
    {"Item: Pattern: Kodo Hide Bag (#5083)", 6505083},
    {"Item: Codex of Shadow Protection II (#8993)", 6508993},
    {"Item: Recipe: Kaldorei Spider Kabob (#5482)", 6505482},
    {"Item: Recipe: Scorpid Surprise (#5483)", 6505483},
    {"Item: Recipe: Roasted Kodo Meat (#5484)", 6505484},
    {"Item: Recipe: Fillet of Frenzy (#5485)", 6505485},
    {"Item: Recipe: Strider Stew (#5486)", 6505486},
    {"Item: Recipe: Dig Rat Stew (#5487)", 6505487},
    {"Item: Recipe: Crispy Lizard Tail (#5488)", 6505488},
    {"Item: Recipe: Lean Venison (#5489)", 6505489},
    {"Item: Recipe: Clam Chowder (#5528)", 6505528},
    {"Item: Plans: Iridescent Hammer (#5543)", 6505543},
    {"Item: Recipe: Rage Potion (#5640)", 6505640},
    {"Item: Recipe: Great Rage Potion (#5643)", 6505643},
    {"Item: Recipe: Free Action Potion (#5642)", 6505642},
    {"Item: Pattern: Red Linen Bag (#5771)", 6505771},
    {"Item: Pattern: Red Woolen Bag (#5772)", 6505772},
    {"Item: Pattern: Robes of Arcana (#5773)", 6505773},
    {"Item: Pattern: Green Silk Pack (#5774)", 6505774},
    {"Item: Pattern: Black Silk Pack (#5775)", 6505775},
    {"Item: Pattern: Murloc Scale Belt (#5786)", 6505786},
    {"Item: Pattern: Murloc Scale Breastplate (#5787)", 6505787},
    {"Item: Pattern: Thick Murloc Armor (#5788)", 6505788},
    {"Item: Pattern: Murloc Scale Bracers (#5789)", 6505789},
    {"Item: Pattern: Fine Leather Pants (#5972)", 6505972},
    {"Item: Pattern: Barbaric Leggings (#5973)", 6505973},
    {"Item: Pattern: Guardian Cloak (#5974)", 6505974},
    {"Item: Recipe: Giant Clam Scorcho (#6039)", 6506039},
    {"Item: Plans: Iron Shield Spike (#6044)", 6506044},
    {"Item: Plans: Iron Counterweight (#6045)", 6506045},
    {"Item: Plans: Steel Weapon Chain (#6046)", 6506046},
    {"Item: Recipe: Holy Protection Potion (#6053)", 6506053},
    {"Item: Recipe: Shadow Protection Potion (#6054)", 6506054},
    {"Item: Recipe: Fire Protection Potion (#6055)", 6506055},
    {"Item: Recipe: Frost Protection Potion (#6056)", 6506056},
    {"Item: Recipe: Nature Protection Potion (#6057)", 6506057},
    {"Item: Formula: Enchant Chest - Minor Mana (#6342)", 6506342},
    {"Item: Pattern: Red Linen Vest (#6271)", 6506271},
    {"Item: Pattern: Blue Linen Vest (#6270)", 6506270},
    {"Item: Pattern: Blue Linen Robe (#6272)", 6506272},
    {"Item: Pattern: Blue Overalls (#6274)", 6506274},
    {"Item: Pattern: Greater Adept's Robe (#6275)", 6506275},
    {"Item: Recipe: Brilliant Smallfish (#6325)", 6506325},
    {"Item: Recipe: Slitherskin Mackerel (#6326)", 6506326},
    {"Item: Recipe: Longjaw Mud Snapper (#6328)", 6506328},
    {"Item: Recipe: Loch Frenzy Delight (#6329)", 6506329},
    {"Item: Recipe: Bristle Whisker Catfish (#6330)", 6506330},
    {"Item: Formula: Enchant Bracer - Minor Spirit (#6344)", 6506344},
    {"Item: Formula: Enchant Chest - Lesser Mana (#6346)", 6506346},
    {"Item: Formula: Enchant Bracer - Minor Strength (#6347)", 6506347},
    {"Item: Formula: Enchant Weapon - Minor Beastslayer (#6348)", 6506348},
    {"Item: Formula: Enchant 2H Weapon - Lesser Intellect (#6349)", 6506349},
    {"Item: Recipe: Rainbow Fin Albacore (#6368)", 6506368},
    {"Item: Recipe: Rockscale Cod (#6369)", 6506369},
    {"Item: Formula: Enchant Bracer - Lesser Spirit (#6375)", 6506375},
    {"Item: Formula: Enchant Boots - Minor Agility (#6377)", 6506377},
    {"Item: Pattern: Stylish Blue Shirt (#6390)", 6506390},
    {"Item: Pattern: Stylish Green Shirt (#6391)", 6506391},
    {"Item: Manual: Heavy Silk Bandage (#16112)", 6516112},
    {"Item: Manual: Strong Anti-Venom (#6454)", 6506454},
    {"Item: Pattern: Deviate Scale Cloak (#6474)", 6506474},
    {"Item: Pattern: Deviate Scale Gloves (#6475)", 6506475},
    {"Item: Pattern: Deviate Scale Belt (#6476)", 6506476},
    {"Item: Recipe: Savory Deviate Delight (#6661)", 6506661},
    {"Item: Recipe: Elixir of Giant Growth (#6663)", 6506663},
    {"Item: Schematic: Flash Bomb (#6672)", 6506672},
    {"Item: Pattern: Moonglow Vest (#6710)", 6506710},
    {"Item: Schematic: EZ-Thro Dynamite (#6716)", 6506716},
    {"Item: Plans: Ironforge Breastplate (#6735)", 6506735},
    {"Item: Recipe: Smoked Bear Meat (#6892)", 6506892},
    {"Item: Pattern: Hands of Darkness (#7092)", 6507092},
    {"Item: Pattern: Truefaith Gloves (#7091)", 6507091},
    {"Item: Pattern: Green Silk Armor (#7090)", 6507090},
    {"Item: Pattern: Azure Silk Cloak (#7089)", 6507089},
    {"Item: Pattern: Crimson Silk Cloak (#7087)", 6507087},
    {"Item: Pattern: Crimson Silk Shoulders (#7084)", 6507084},
    {"Item: Pattern: Azure Shoulders (#7085)", 6507085},
    {"Item: Pattern: Earthen Silk Belt (#7086)", 6507086},
    {"Item: Pattern: Crimson Silk Robe (#7088)", 6507088},
    {"Item: Pattern: Rugged Leather Pants (#7288)", 6507288},
    {"Item: Pattern: Black Whelp Cloak (#7289)", 6507289},
    {"Item: Pattern: Red Whelp Gloves (#7290)", 6507290},
    {"Item: Pattern: Herbalist's Gloves (#7361)", 6507361},
    {"Item: Pattern: Earthen Leather Shoulders (#7362)", 6507362},
    {"Item: Pattern: Pilferer's Gloves (#7363)", 6507363},
    {"Item: Pattern: Heavy Earthen Gloves (#7364)", 6507364},
    {"Item: Pattern: Dusky Leather Leggings (#7449)", 6507449},
    {"Item: Pattern: Green Whelp Armor (#7450)", 6507450},
    {"Item: Pattern: Green Whelp Bracers (#7451)", 6507451},
    {"Item: Pattern: Dusky Boots (#7452)", 6507452},
    {"Item: Pattern: Swift Boots (#7453)", 6507453},
    {"Item: Schematic: Gnomish Universal Remote (#7560)", 6507560},
    {"Item: Schematic: Goblin Jumper Cables (#7561)", 6507561},
    {"Item: Recipe: Thistle Tea (#7678)", 6507678},
    {"Item: Plans: Barbaric Iron Shoulders (#7978)", 6507978},
    {"Item: Plans: Barbaric Iron Breastplate (#7979)", 6507979},
    {"Item: Plans: Barbaric Iron Helm (#7980)", 6507980},
    {"Item: Plans: Barbaric Iron Boots (#7981)", 6507981},
    {"Item: Plans: Barbaric Iron Gloves (#7982)", 6507982},
    {"Item: Plans: Heavy Mithril Pants (#7975)", 6507975},
    {"Item: Plans: Mithril Scale Bracers (#7995)", 6507995},
    {"Item: Plans: Mithril Shield Spike (#7976)", 6507976},
    {"Item: Plans: Ornate Mithril Pants (#7983)", 6507983},
    {"Item: Plans: Ornate Mithril Gloves (#7984)", 6507984},
    {"Item: Plans: Ornate Mithril Shoulder (#7985)", 6507985},
    {"Item: Plans: Mithril Spurs (#7989)", 6507989},
    {"Item: Plans: Mithril Scale Shoulders (#7991)", 6507991},
    {"Item: Plans: Heavy Mithril Helm (#7990)", 6507990},
    {"Item: Plans: Blue Glittering Axe (#7992)", 6507992},
    {"Item: Plans: Wicked Mithril Blade (#8029)", 6508029},
    {"Item: Plans: Dazzling Mithril Rapier (#7993)", 6507993},
    {"Item: Plans: Runed Mithril Hammer (#8028)", 6508028},
    {"Item: Plans: Ebon Shiv (#8030)", 6508030},
    {"Item: Pattern: Comfortable Leather Hat (#8384)", 6508384},
    {"Item: Pattern: Turtle Scale Gloves (#8385)", 6508385},
    {"Item: Pattern: Nightscape Shoulders (#8409)", 6508409},
    {"Item: Pattern: Big Voodoo Robe (#8386)", 6508386},
    {"Item: Pattern: Tough Scorpid Breastplate (#8395)", 6508395},
    {"Item: Pattern: Wild Leather Shoulders (#8403)", 6508403},
    {"Item: Pattern: Big Voodoo Mask (#8387)", 6508387},
    {"Item: Pattern: Tough Scorpid Bracers (#8397)", 6508397},
    {"Item: Pattern: Tough Scorpid Gloves (#8398)", 6508398},
    {"Item: Pattern: Wild Leather Vest (#8404)", 6508404},
    {"Item: Pattern: Wild Leather Helmet (#8405)", 6508405},
    {"Item: Pattern: Tough Scorpid Boots (#8399)", 6508399},
    {"Item: Pattern: Big Voodoo Pants (#8389)", 6508389},
    {"Item: Pattern: Big Voodoo Cloak (#8390)", 6508390},
    {"Item: Pattern: Tough Scorpid Shoulders (#8400)", 6508400},
    {"Item: Pattern: Wild Leather Boots (#8406)", 6508406},
    {"Item: Pattern: Tough Scorpid Leggings (#8401)", 6508401},
    {"Item: Pattern: Tough Scorpid Helm (#8402)", 6508402},
    {"Item: Pattern: Wild Leather Leggings (#8407)", 6508407},
    {"Item: Pattern: Wild Leather Cloak (#8408)", 6508408},
    {"Item: Manual: Mageweave Bandage (#16113)", 6516113},
    {"Item: Artisan First Aid - Heal Thyself (#16085)", 6516085},
    {"Item: Recipe: Magic Resistance Potion (#9293)", 6509293},
    {"Item: Plans: Inlaid Mithril Cylinder (#10713)", 6510713},
    {"Item: Recipe: Goblin Rocket Fuel (#10644)", 6510644},
    {"Item: Recipe: Wildvine Potion (#9294)", 6509294},
    {"Item: Recipe: Philosopher's Stone (#9303)", 6509303},
    {"Item: Recipe: Invisibility Potion (#9295)", 6509295},
    {"Item: Recipe: Gift of Arthas (#9296)", 6509296},
    {"Item: Recipe: Elixir of Dream Vision (#9297)", 6509297},
    {"Item: Recipe: Elixir of Giants (#9298)", 6509298},
    {"Item: Recipe: Ghost Dye (#9302)", 6509302},
    {"Item: Recipe: Elixir of Shadow Power (#9301)", 6509301},
    {"Item: Recipe: Elixir of Demonslaying (#9300)", 6509300},
    {"Item: Recipe: Transmute Iron to Gold (#9304)", 6509304},
    {"Item: Recipe: Transmute Mithril to Truesilver (#9305)", 6509305},
    {"Item: Plans: Golden Scale Gauntlets (#9367)", 6509367},
    {"Item: Pattern: Colorful Kilt (#10316)", 6510316},
    {"Item: Pattern: Red Mageweave Vest (#10300)", 6510300},
    {"Item: Pattern: White Bandit Mask (#10301)", 6510301},
    {"Item: Pattern: Red Mageweave Pants (#10302)", 6510302},
    {"Item: Pattern: Orange Martial Shirt (#10311)", 6510311},
    {"Item: Pattern: Red Mageweave Gloves (#10312)", 6510312},
    {"Item: Pattern: Lavender Mageweave Shirt (#10314)", 6510314},
    {"Item: Pattern: Red Mageweave Shoulders (#10315)", 6510315},
    {"Item: Pattern: Pink Mageweave Shirt (#10317)", 6510317},
    {"Item: Pattern: Admiral's Hat (#10318)", 6510318},
    {"Item: Pattern: Red Mageweave Headband (#10320)", 6510320},
    {"Item: Pattern: Tuxedo Shirt (#10321)", 6510321},
    {"Item: Pattern: Shadoweave Mask (#10463)", 6510463},
    {"Item: Pattern: Tuxedo Pants (#10323)", 6510323},
    {"Item: Pattern: White Wedding Dress (#10325)", 6510325},
    {"Item: Pattern: Tuxedo Jacket (#10326)", 6510326},
    {"Item: Plans: Silvered Bronze Leggings (#10424)", 6510424},
    {"Item: Schematic: Bright-Eye Goggles (#10601)", 6510601},
    {"Item: Schematic: Deadly Scope (#10602)", 6510602},
    {"Item: Schematic: Catseye Ultra Goggles (#10603)", 6510603},
    {"Item: Schematic: Mithril Heavy-bore Rifle (#10604)", 6510604},
    {"Item: Schematic: Spellpower Goggles Xtreme (#10605)", 6510605},
    {"Item: Schematic: Parachute Cloak (#10606)", 6510606},
    {"Item: Schematic: Deepdive Helmet (#10607)", 6510607},
    {"Item: Schematic: Sniper Scope (#10608)", 6510608},
    {"Item: Schematic: Mithril Mechanical Dragonling (#10609)", 6510609},
    {"Item: Formula: Enchant 2H Weapon - Lesser Spirit (#11038)", 6511038},
    {"Item: Formula: Enchant Cloak - Minor Agility (#11039)", 6511039},
    {"Item: Formula: Enchant Shield - Lesser Protection (#11081)", 6511081},
    {"Item: Formula: Enchant Cloak - Lesser Shadow Resistance (#11098)", 6511098},
    {"Item: Formula: Enchant Bracer - Lesser Strength (#11101)", 6511101},
    {"Item: Formula: Enchant Gloves - Mining (#11150)", 6511150},
    {"Item: Formula: Enchant Gloves - Herbalism (#11151)", 6511151},
    {"Item: Formula: Enchant Gloves - Fishing (#11152)", 6511152},
    {"Item: Formula: Enchant Bracer - Lesser Deflection (#11163)", 6511163},
    {"Item: Formula: Enchant Weapon - Lesser Beastslayer (#11164)", 6511164},
    {"Item: Formula: Enchant Weapon - Lesser Elemental Slayer (#11165)", 6511165},
    {"Item: Formula: Enchant Boots - Lesser Spirit (#11167)", 6511167},
    {"Item: Formula: Enchant Shield - Lesser Block (#11168)", 6511168},
    {"Item: Formula: Enchant Gloves - Skinning (#11166)", 6511166},
    {"Item: Formula: Enchant Shield - Stamina (#11202)", 6511202},
    {"Item: Formula: Enchant Gloves - Advanced Mining (#11203)", 6511203},
    {"Item: Formula: Enchant Bracer - Greater Spirit (#11204)", 6511204},
    {"Item: Formula: Enchant Gloves - Advanced Herbalism (#11205)", 6511205},
    {"Item: Formula: Enchant Cloak - Lesser Agility (#11206)", 6511206},
    {"Item: Formula: Enchant Weapon - Fiery Weapon (#11207)", 6511207},
    {"Item: Formula: Enchant Weapon - Demonslaying (#11208)", 6511208},
    {"Item: Formula: Enchant Bracer - Deflection (#11223)", 6511223},
    {"Item: Formula: Enchant Shield - Frost Resistance (#11224)", 6511224},
    {"Item: Formula: Enchant Bracer - Greater Stamina (#11225)", 6511225},
    {"Item: Formula: Enchant Gloves - Riding Skill (#11226)", 6511226},
    {"Item: Plans: Dark Iron Pulverizer (#11610)", 6511610},
    {"Item: Plans: Dark Iron Mail (#11614)", 6511614},
    {"Item: Plans: Dark Iron Sunderer (#11611)", 6511611},
    {"Item: Plans: Dark Iron Shoulders (#11615)", 6511615},
    {"Item: Plans: Dark Iron Plate (#11612)", 6511612},
    {"Item: Formula: Smoking Heart of the Mountain (#11813)", 6511813},
    {"Item: Schematic: Pet Bombling (#11828)", 6511828},
    {"Item: Schematic: Lil' Smoky (#11827)", 6511827},
    {"Item: Recipe: Lean Wolf Steak (#12227)", 6512227},
    {"Item: Recipe: Roast Raptor (#12228)", 6512228},
    {"Item: Recipe: Hot Wolf Ribs (#12229)", 6512229},
    {"Item: Recipe: Jungle Stew (#12231)", 6512231},
    {"Item: Recipe: Carrion Surprise (#12232)", 6512232},
    {"Item: Recipe: Mystery Stew (#12233)", 6512233},
    {"Item: Recipe: Dragonbreath Chili (#12239)", 6512239},
    {"Item: Recipe: Heavy Kodo Stew (#12240)", 6512240},
    {"Item: Recipe: Spiced Chili Crab (#16111)", 6516111},
    {"Item: Recipe: Monster Omelet (#16110)", 6516110},
    {"Item: Recipe: Crispy Bat Wing (#12226)", 6512226},
    {"Item: Plans: Searing Golden Blade (#12261)", 6512261},
    {"Item: Plans: Thorium Armor (#12682)", 6512682},
    {"Item: Plans: Thorium Belt (#12683)", 6512683},
    {"Item: Plans: Thorium Bracers (#12684)", 6512684},
    {"Item: Plans: Radiant Belt (#12685)", 6512685},
    {"Item: Plans: Imperial Plate Shoulders (#12687)", 6512687},
    {"Item: Plans: Imperial Plate Belt (#12688)", 6512688},
    {"Item: Plans: Radiant Breastplate (#12689)", 6512689},
    {"Item: Plans: Imperial Plate Bracers (#12690)", 6512690},
    {"Item: Plans: Wildthorn Mail (#12691)", 6512691},
    {"Item: Plans: Thorium Shield Spike (#12692)", 6512692},
    {"Item: Plans: Thorium Boots (#12693)", 6512693},
    {"Item: Plans: Thorium Helm (#12694)", 6512694},
    {"Item: Plans: Radiant Gloves (#12695)", 6512695},
    {"Item: Plans: Fiery Plate Gauntlets (#12699)", 6512699},
    {"Item: Plans: Radiant Boots (#12697)", 6512697},
    {"Item: Plans: Imperial Plate Boots (#12700)", 6512700},
    {"Item: Plans: Imperial Plate Helm (#12701)", 6512701},
    {"Item: Plans: Radiant Circlet (#12702)", 6512702},
    {"Item: Plans: Dawnbringer Shoulders (#12698)", 6512698},
    {"Item: Plans: Storm Gauntlets (#12703)", 6512703},
    {"Item: Plans: Thorium Leggings (#12704)", 6512704},
    {"Item: Plans: Imperial Plate Chest (#12705)", 6512705},
    {"Item: Plans: Runic Plate Shoulders (#12706)", 6512706},
    {"Item: Plans: Runic Plate Boots (#12707)", 6512707},
    {"Item: Plans: Demon Forged Breastplate (#12696)", 6512696},
    {"Item: Plans: Whitesoul Helm (#12711)", 6512711},
    {"Item: Plans: Radiant Leggings (#12713)", 6512713},
    {"Item: Plans: Runic Plate Helm (#12714)", 6512714},
    {"Item: Plans: Helm of the Great Chief (#12716)", 6512716},
    {"Item: Plans: Lionheart Helm (#12717)", 6512717},
    {"Item: Plans: Imperial Plate Leggings (#12715)", 6512715},
    {"Item: Plans: Runic Breastplate (#12718)", 6512718},
    {"Item: Plans: Runic Plate Leggings (#12719)", 6512719},
    {"Item: Plans: Stronghold Gauntlets (#12720)", 6512720},
    {"Item: Plans: Enchanted Thorium Helm (#12725)", 6512725},
    {"Item: Plans: Enchanted Thorium Leggings (#12726)", 6512726},
    {"Item: Plans: Enchanted Thorium Breastplate (#12727)", 6512727},
    {"Item: Plans: Invulnerable Mail (#12728)", 6512728},
    {"Item: Plans: Ornate Thorium Handaxe (#12819)", 6512819},
    {"Item: Plans: Dawn's Edge (#12821)", 6512821},
    {"Item: Plans: Huge Thorium Battleaxe (#12823)", 6512823},
    {"Item: Plans: Enchanted Battlehammer (#12824)", 6512824},
    {"Item: Plans: Blazing Rapier (#12825)", 6512825},
    {"Item: Plans: Serenity (#12827)", 6512827},
    {"Item: Plans: Volcanic Hammer (#12828)", 6512828},
    {"Item: Plans: Corruption (#12830)", 6512830},
    {"Item: Plans: Hammer of the Titans (#12833)", 6512833},
    {"Item: Plans: Arcanite Champion (#12834)", 6512834},
    {"Item: Plans: Annihilator (#12835)", 6512835},
    {"Item: Plans: Frostguard (#12836)", 6512836},
    {"Item: Plans: Masterwork Stormhammer (#12837)", 6512837},
    {"Item: Plans: Arcanite Reaper (#12838)", 6512838},
    {"Item: Plans: Heartseeker (#12839)", 6512839},
    {"Item: Recipe: Transmute Arcanite (#12958)", 6512958},
    {"Item: Recipe: Mighty Rage Potion (#13476)", 6513476},
    {"Item: Recipe: Superior Mana Potion (#13477)", 6513477},
    {"Item: Recipe: Elixir of Superior Defense (#13478)", 6513478},
    {"Item: Recipe: Elixir of the Sages (#13479)", 6513479},
    {"Item: Recipe: Major Healing Potion (#13480)", 6513480},
    {"Item: Recipe: Elixir of Brute Force (#13481)", 6513481},
    {"Item: Recipe: Transmute Air to Fire (#13482)", 6513482},
    {"Item: Recipe: Transmute Fire to Earth (#13483)", 6513483},
    {"Item: Recipe: Transmute Earth to Water (#13484)", 6513484},
    {"Item: Recipe: Transmute Water to Air (#13485)", 6513485},
    {"Item: Recipe: Transmute Undeath to Water (#13486)", 6513486},
    {"Item: Recipe: Transmute Water to Undeath (#13487)", 6513487},
    {"Item: Recipe: Transmute Life to Earth (#13488)", 6513488},
    {"Item: Recipe: Transmute Earth to Life (#13489)", 6513489},
    {"Item: Recipe: Greater Stoneshield Potion (#13490)", 6513490},
    {"Item: Recipe: Elixir of the Mongoose (#13491)", 6513491},
    {"Item: Recipe: Purification Potion (#13492)", 6513492},
    {"Item: Recipe: Greater Arcane Elixir (#13493)", 6513493},
    {"Item: Recipe: Greater Fire Protection Potion (#13494)", 6513494},
    {"Item: Recipe: Greater Frost Protection Potion (#13495)", 6513495},
    {"Item: Recipe: Greater Nature Protection Potion (#13496)", 6513496},
    {"Item: Recipe: Greater Arcane Protection Potion (#13497)", 6513497},
    {"Item: Recipe: Greater Shadow Protection Potion (#13499)", 6513499},
    {"Item: Recipe: Major Mana Potion (#13501)", 6513501},
    {"Item: Recipe: Alchemist's Stone (#13517)", 6513517},
    {"Item: Recipe: Potion of Petrification (#13518)", 6513518},
    {"Item: Recipe: Flask of the Titans (#13519)", 6513519},
    {"Item: Recipe: Flask of Distilled Wisdom (#13520)", 6513520},
    {"Item: Recipe: Flask of Supreme Power (#13521)", 6513521},
    {"Item: Recipe: Flask of Chromatic Resistance (#13522)", 6513522},
    {"Item: Recipe: Spotted Yellowtail (#13939)", 6513939},
    {"Item: Recipe: Cooked Glossy Mightfish (#13940)", 6513940},
    {"Item: Recipe: Grilled Squid (#13942)", 6513942},
    {"Item: Recipe: Filet of Redgill (#13941)", 6513941},
    {"Item: Recipe: Hot Smoked Bass (#13943)", 6513943},
    {"Item: Recipe: Nightfin Soup (#13945)", 6513945},
    {"Item: Recipe: Poached Sunscale Salmon (#13946)", 6513946},
    {"Item: Recipe: Lobster Stew (#13947)", 6513947},
    {"Item: Recipe: Mightfish Steak (#13948)", 6513948},
    {"Item: Recipe: Baked Salmon (#13949)", 6513949},
    {"Item: Pattern: Frostweave Tunic (#14466)", 6514466},
    {"Item: Pattern: Frostweave Robe (#14467)", 6514467},
    {"Item: Pattern: Runecloth Bag (#14468)", 6514468},
    {"Item: Pattern: Runecloth Robe (#14469)", 6514469},
    {"Item: Pattern: Runecloth Tunic (#14470)", 6514470},
    {"Item: Pattern: Cindercloth Vest (#14471)", 6514471},
    {"Item: Pattern: Runecloth Cloak (#14472)", 6514472},
    {"Item: Pattern: Ghostweave Belt (#14473)", 6514473},
    {"Item: Pattern: Frostweave Gloves (#14474)", 6514474},
    {"Item: Pattern: Cindercloth Gloves (#14476)", 6514476},
    {"Item: Pattern: Ghostweave Gloves (#14477)", 6514477},
    {"Item: Pattern: Brightcloth Robe (#14478)", 6514478},
    {"Item: Pattern: Brightcloth Gloves (#14479)", 6514479},
    {"Item: Pattern: Ghostweave Vest (#14480)", 6514480},
    {"Item: Pattern: Runecloth Gloves (#14481)", 6514481},
    {"Item: Pattern: Cindercloth Cloak (#14482)", 6514482},
    {"Item: Pattern: Felcloth Pants (#14483)", 6514483},
    {"Item: Pattern: Brightcloth Cloak (#14484)", 6514484},
    {"Item: Pattern: Wizardweave Leggings (#14485)", 6514485},
    {"Item: Pattern: Cloak of Fire (#14486)", 6514486},
    {"Item: Pattern: Runecloth Boots (#14488)", 6514488},
    {"Item: Pattern: Frostweave Pants (#14489)", 6514489},
    {"Item: Pattern: Cindercloth Pants (#14490)", 6514490},
    {"Item: Pattern: Robe of Winter Night (#14493)", 6514493},
    {"Item: Pattern: Felcloth Boots (#14492)", 6514492},
    {"Item: Pattern: Runecloth Pants (#14491)", 6514491},
    {"Item: Pattern: Brightcloth Pants (#14494)", 6514494},
    {"Item: Pattern: Mooncloth Leggings (#14497)", 6514497},
    {"Item: Pattern: Ghostweave Pants (#14495)", 6514495},
    {"Item: Pattern: Felcloth Hood (#14496)", 6514496},
    {"Item: Pattern: Runecloth Headband (#14498)", 6514498},
    {"Item: Pattern: Mooncloth Bag (#14499)", 6514499},
    {"Item: Pattern: Wizardweave Robe (#14500)", 6514500},
    {"Item: Pattern: Mooncloth Vest (#14501)", 6514501},
    {"Item: Pattern: Mooncloth Shoulders (#14507)", 6514507},
    {"Item: Pattern: Runecloth Shoulders (#14504)", 6514504},
    {"Item: Pattern: Wizardweave Turban (#14505)", 6514505},
    {"Item: Pattern: Felcloth Robe (#14506)", 6514506},
    {"Item: Pattern: Mooncloth Circlet (#14509)", 6514509},
    {"Item: Pattern: Felcloth Shoulders (#14508)", 6514508},
    {"Item: Pattern: Gloves of Spell Mastery (#14511)", 6514511},
    {"Item: Pattern: Bottomless Bag (#14510)", 6514510},
    {"Item: Pattern: Truefaith Vestments (#14512)", 6514512},
    {"Item: Pattern: Robe of the Archmage (#14513)", 6514513},
    {"Item: Pattern: Robe of the Void (#14514)", 6514514},
    {"Item: Grimoire of Doom (#4213)", 6504213},
    {"Item: Pattern: Mooncloth (#14526)", 6514526},
    {"Item: Pattern: Heavy Scorpid Bracers (#15724)", 6515724},
    {"Item: Pattern: Wicked Leather Gauntlets (#15725)", 6515725},
    {"Item: Pattern: Green Dragonscale Breastplate (#15726)", 6515726},
    {"Item: Pattern: Heavy Scorpid Vest (#15727)", 6515727},
    {"Item: Pattern: Wicked Leather Bracers (#15728)", 6515728},
    {"Item: Pattern: Chimeric Gloves (#15729)", 6515729},
    {"Item: Pattern: Red Dragonscale Breastplate (#15730)", 6515730},
    {"Item: Pattern: Runic Leather Gauntlets (#15731)", 6515731},
    {"Item: Pattern: Volcanic Leggings (#15732)", 6515732},
    {"Item: Pattern: Green Dragonscale Leggings (#15733)", 6515733},
    {"Item: Pattern: Living Shoulders (#15734)", 6515734},
    {"Item: Pattern: Ironfeather Shoulders (#15735)", 6515735},
    {"Item: Pattern: Chimeric Boots (#15737)", 6515737},
    {"Item: Pattern: Heavy Scorpid Gauntlets (#15738)", 6515738},
    {"Item: Pattern: Runic Leather Bracers (#15739)", 6515739},
    {"Item: Pattern: Frostsaber Boots (#15740)", 6515740},
    {"Item: Pattern: Stormshroud Pants (#15741)", 6515741},
    {"Item: Pattern: Warbear Harness (#15742)", 6515742},
    {"Item: Pattern: Heavy Scorpid Belt (#15743)", 6515743},
    {"Item: Pattern: Wicked Leather Headband (#15744)", 6515744},
    {"Item: Pattern: Runic Leather Belt (#15745)", 6515745},
    {"Item: Pattern: Chimeric Leggings (#15746)", 6515746},
    {"Item: Pattern: Frostsaber Leggings (#15747)", 6515747},
    {"Item: Pattern: Heavy Scorpid Leggings (#15748)", 6515748},
    {"Item: Pattern: Volcanic Breastplate (#15749)", 6515749},
    {"Item: Pattern: Blue Dragonscale Breastplate (#15751)", 6515751},
    {"Item: Pattern: Living Leggings (#15752)", 6515752},
    {"Item: Pattern: Stormshroud Armor (#15753)", 6515753},
    {"Item: Pattern: Warbear Woolies (#15754)", 6515754},
    {"Item: Pattern: Chimeric Vest (#15755)", 6515755},
    {"Item: Pattern: Runic Leather Headband (#15756)", 6515756},
    {"Item: Pattern: Wicked Leather Pants (#15757)", 6515757},
    {"Item: Pattern: Devilsaur Gauntlets (#15758)", 6515758},
    {"Item: Pattern: Black Dragonscale Breastplate (#15759)", 6515759},
    {"Item: Pattern: Ironfeather Breastplate (#15760)", 6515760},
    {"Item: Pattern: Frostsaber Gloves (#15761)", 6515761},
    {"Item: Pattern: Heavy Scorpid Helm (#15762)", 6515762},
    {"Item: Pattern: Blue Dragonscale Shoulders (#15763)", 6515763},
    {"Item: Pattern: Stormshroud Shoulders (#15764)", 6515764},
    {"Item: Pattern: Runic Leather Pants (#15765)", 6515765},
    {"Item: Pattern: Wicked Leather Belt (#15768)", 6515768},
    {"Item: Pattern: Black Dragonscale Shoulders (#15770)", 6515770},
    {"Item: Pattern: Living Breastplate (#15771)", 6515771},
    {"Item: Pattern: Devilsaur Leggings (#15772)", 6515772},
    {"Item: Pattern: Wicked Leather Armor (#15773)", 6515773},
    {"Item: Pattern: Heavy Scorpid Shoulders (#15774)", 6515774},
    {"Item: Pattern: Volcanic Shoulders (#15775)", 6515775},
    {"Item: Pattern: Runic Leather Armor (#15776)", 6515776},
    {"Item: Pattern: Runic Leather Shoulders (#15777)", 6515777},
    {"Item: Pattern: Frostsaber Tunic (#15779)", 6515779},
    {"Item: Pattern: Onyxia Scale Breastplate (#15780)", 6515780},
    {"Item: Pattern: Black Dragonscale Leggings (#15781)", 6515781},
    {"Item: Schematic: Thorium Grenade (#16041)", 6516041},
    {"Item: Schematic: Thorium Widget (#16042)", 6516042},
    {"Item: Schematic: Thorium Rifle (#16043)", 6516043},
    {"Item: Schematic: Lifelike Mechanical Toad (#16044)", 6516044},
    {"Item: Schematic: Spellpower Goggles Xtreme Plus (#16045)", 6516045},
    {"Item: Schematic: Thorium Tube (#16047)", 6516047},
    {"Item: Schematic: Dark Iron Rifle (#16048)", 6516048},
    {"Item: Schematic: Dark Iron Bomb (#16049)", 6516049},
    {"Item: Schematic: Thorium Shells (#16051)", 6516051},
    {"Item: Tome of Tranquilizing Shot (#16665)", 6516665},
    {"Item: Schematic: Masterwork Target Dummy (#16046)", 6516046},
    {"Item: Schematic: Delicate Arcanite Converter (#16050)", 6516050},
    {"Item: Schematic: Voice Amplification Modulator (#16052)", 6516052},
    {"Item: Schematic: Master Engineer's Goggles (#16053)", 6516053},
    {"Item: Schematic: Arcanite Dragonling (#16054)", 6516054},
    {"Item: Schematic: Arcane Bomb (#16055)", 6516055},
    {"Item: Schematic: Flawless Arcanite Rifle (#16056)", 6516056},
    {"Item: Formula: Enchant Bracer - Greater Intellect (#16214)", 6516214},
    {"Item: Formula: Enchant Bracer - Superior Spirit (#16218)", 6516218},
    {"Item: Formula: Enchant Bracer - Superior Strength (#16246)", 6516246},
    {"Item: Formula: Enchant Bracer - Superior Stamina (#16251)", 6516251},
    {"Item: Formula: Enchant Gloves - Greater Agility (#16219)", 6516219},
    {"Item: Formula: Enchant Gloves - Greater Strength (#16244)", 6516244},
    {"Item: Formula: Enchant Cloak - Greater Resistance (#16216)", 6516216},
    {"Item: Formula: Enchant Cloak - Superior Defense (#16224)", 6516224},
    {"Item: Formula: Enchant Shield - Superior Spirit (#16222)", 6516222},
    {"Item: Formula: Enchant Shield - Greater Stamina (#16217)", 6516217},
    {"Item: Formula: Enchant Boots - Greater Stamina (#16215)", 6516215},
    {"Item: Formula: Enchant Boots - Greater Agility (#16245)", 6516245},
    {"Item: Formula: Enchant Boots - Spirit (#16220)", 6516220},
    {"Item: Formula: Enchant Chest - Greater Stats (#16253)", 6516253},
    {"Item: Formula: Enchant Chest - Major Health (#16221)", 6516221},
    {"Item: Formula: Enchant Chest - Major Mana (#16242)", 6516242},
    {"Item: Formula: Enchant Weapon - Icy Chill (#16223)", 6516223},
    {"Item: Formula: Enchant 2H Weapon - Superior Impact (#16247)", 6516247},
    {"Item: Formula: Enchant Weapon - Superior Striking (#16250)", 6516250},
    {"Item: Formula: Enchant Weapon - Lifestealing (#16254)", 6516254},
    {"Item: Formula: Enchant Weapon - Unholy (#16248)", 6516248},
    {"Item: Formula: Enchant Weapon - Crusader (#16252)", 6516252},
    {"Item: Formula: Enchant 2H Weapon - Major Spirit (#16255)", 6516255},
    {"Item: Formula: Enchant 2H Weapon - Major Intellect (#16249)", 6516249},
    {"Item: Formula: Runed Arcanite Rod (#16243)", 6516243},
    {"Item: Recipe: Undermine Clam Chowder (#16767)", 6516767},
    {"Item: Pattern: Flarecore Mantle (#17017)", 6517017},
    {"Item: Pattern: Flarecore Gloves (#17018)", 6517018},
    {"Item: Pattern: Corehound Boots (#17022)", 6517022},
    {"Item: Pattern: Molten Helm (#17023)", 6517023},
    {"Item: Pattern: Black Dragonscale Boots (#17025)", 6517025},
    {"Item: Plans: Fiery Chain Girdle (#17049)", 6517049},
    {"Item: Plans: Fiery Chain Shoulders (#17053)", 6517053},
    {"Item: Plans: Dark Iron Bracers (#17051)", 6517051},
    {"Item: Plans: Dark Iron Leggings (#17052)", 6517052},
    {"Item: Plans: Dark Iron Reaver (#17059)", 6517059},
    {"Item: Plans: Dark Iron Destroyer (#17060)", 6517060},
    {"Item: Recipe: Mithril Head Trout (#17062)", 6517062},
    {"Item: Recipe: Gingerbread Cookie (#17200)", 6517200},
    {"Item: Recipe: Egg Nog (#17201)", 6517201},
    {"Item: Plans: Sulfuron Hammer (#18592)", 6518592},
    {"Item: Codex: Prayer of Fortitude (#17413)", 6517413},
    {"Item: Codex: Prayer of Fortitude II (#17414)", 6517414},
    {"Item: Book: Gift of the Wild (#17682)", 6517682},
    {"Item: Book: Gift of the Wild II (#17683)", 6517683},
    {"Item: Plans: Edge of Winter (#17706)", 6517706},
    {"Item: Recipe: Elixir of Frost Power (#17709)", 6517709},
    {"Item: Formula: Enchant Weapon - Winter's Might (#17725)", 6517725},
    {"Item: Schematic: Snowmaster 9000 (#17720)", 6517720},
    {"Item: Pattern: Gloves of the Greatfather (#17722)", 6517722},
    {"Item: Pattern: Green Holiday Shirt (#17724)", 6517724},
    {"Item: Recipe: Tender Wolf Steak (#18046)", 6518046},
    {"Item: Pattern: Shadowskin Gloves (#18239)", 6518239},
    {"Item: Pattern: Core Armor Kit (#18252)", 6518252},
    {"Item: Recipe: Major Rejuvenation Potion (#18257)", 6518257},
    {"Item: Formula: Enchant Weapon - Spellpower (#18259)", 6518259},
    {"Item: Formula: Enchant Weapon - Healing Power (#18260)", 6518260},
    {"Item: Plans: Elemental Sharpening Stone (#18264)", 6518264},
    {"Item: Pattern: Flarecore Wraps (#18265)", 6518265},
    {"Item: Recipe: Runn Tum Tuber Surprise (#18267)", 6518267},
    {"Item: Schematic: Biznicks 247x128 Accurascope (#18290)", 6518290},
    {"Item: Schematic: Core Marksman Rifle (#18292)", 6518292},
    {"Item: Schematic: Force Reactive Disk (#18291)", 6518291},
    {"Item: Pattern: Belt of the Archmage (#18414)", 6518414},
    {"Item: Pattern: Felcloth Gloves (#18415)", 6518415},
    {"Item: Pattern: Inferno Gloves (#18416)", 6518416},
    {"Item: Pattern: Mooncloth Gloves (#18417)", 6518417},
    {"Item: Pattern: Cloak of Warding (#18418)", 6518418},
    {"Item: Pattern: Mooncloth Robe (#18487)", 6518487},
    {"Item: Pattern: Girdle of Insight (#18514)", 6518514},
    {"Item: Pattern: Mongoose Boots (#18515)", 6518515},
    {"Item: Pattern: Swift Flight Bracers (#18516)", 6518516},
    {"Item: Pattern: Chromatic Cloak (#18517)", 6518517},
    {"Item: Pattern: Hide of the Wild (#18518)", 6518518},
    {"Item: Pattern: Shifting Cloak (#18519)", 6518519},
    {"Item: Goblin's Guide to Elementium (#44956)", 6544956},
    {"Item: Tome of Arcane Brilliance (#18600)", 6518600},
    {"Item: Schematic: Red Firework (#18647)", 6518647},
    {"Item: Schematic: Blue Firework (#18649)", 6518649},
    {"Item: Schematic: Green Firework (#18648)", 6518648},
    {"Item: Schematic: EZ-Thro Dynamite II (#18650)", 6518650},
    {"Item: Schematic: Truesilver Transformer (#18651)", 6518651},
    {"Item: Schematic: Gyrofreeze Ice Reflector (#18652)", 6518652},
    {"Item: Schematic: Goblin Jumper Cables XL (#18653)", 6518653},
    {"Item: Schematic: Major Recombobulator (#18655)", 6518655},
    {"Item: Schematic: Powerful Seaforium Charge (#18656)", 6518656},
    {"Item: Schematic: Hyper-Radiant Flame Reflector (#18657)", 6518657},
    {"Item: Schematic: Ultra-Flash Shadow Reflector (#18658)", 6518658},
    {"Item: Schematic: Gnomish Alarm-o-Bot (#18654)", 6518654},
    {"Item: Schematic: World Enlarger (#18661)", 6518661},
    {"Item: Pattern: Heavy Leather Ball (#18731)", 6518731},
    {"Item: Pattern: Barbaric Bracers (#18949)", 6518949},
    {"Item: Schematic: Snake Burst Firework (#19027)", 6519027},
    {"Item: Plans: Heavy Timbermaw Belt (#19202)", 6519202},
    {"Item: Plans: Heavy Timbermaw Boots (#19204)", 6519204},
    {"Item: Plans: Girdle of the Dawn (#19203)", 6519203},
    {"Item: Plans: Gloves of the Dawn (#19205)", 6519205},
    {"Item: Plans: Dark Iron Helm (#19206)", 6519206},
    {"Item: Plans: Dark Iron Gauntlets (#19207)", 6519207},
    {"Item: Plans: Black Amnesty (#19208)", 6519208},
    {"Item: Plans: Blackfury (#19209)", 6519209},
    {"Item: Plans: Ebon Hand (#19210)", 6519210},
    {"Item: Plans: Blackguard (#19211)", 6519211},
    {"Item: Plans: Nightfall (#19212)", 6519212},
    {"Item: Pattern: Wisdom of the Timbermaw (#19215)", 6519215},
    {"Item: Pattern: Mantle of the Timbermaw (#19218)", 6519218},
    {"Item: Pattern: Argent Boots (#19216)", 6519216},
    {"Item: Pattern: Argent Shoulders (#19217)", 6519217},
    {"Item: Pattern: Flarecore Robe (#19219)", 6519219},
    {"Item: Pattern: Flarecore Leggings (#19220)", 6519220},
    {"Item: Pattern: Might of the Timbermaw (#19326)", 6519326},
    {"Item: Pattern: Timbermaw Brawlers (#19327)", 6519327},
    {"Item: Pattern: Dawn Treaders (#19328)", 6519328},
    {"Item: Pattern: Golden Mantle of the Dawn (#19329)", 6519329},
    {"Item: Pattern: Lava Belt (#19330)", 6519330},
    {"Item: Pattern: Chromatic Gauntlets (#19331)", 6519331},
    {"Item: Pattern: Corehound Belt (#19332)", 6519332},
    {"Item: Pattern: Molten Belt (#19333)", 6519333},
    {"Item: Formula: Powerful Anti-Venom (#19442)", 6519442},
    {"Item: Formula: Enchant Weapon - Strength (#19444)", 6519444},
    {"Item: Formula: Enchant Weapon - Agility (#19445)", 6519445},
    {"Item: Formula: Enchant Bracer - Mana Regeneration (#19446)", 6519446},
    {"Item: Formula: Enchant Bracer - Healing Power (#19447)", 6519447},
    {"Item: Formula: Enchant Weapon - Mighty Spirit (#19448)", 6519448},
    {"Item: Formula: Enchant Weapon - Mighty Intellect (#19449)", 6519449},
    {"Item: Pattern: Bloodvine Vest (#19764)", 6519764},
    {"Item: Pattern: Bloodvine Leggings (#19765)", 6519765},
    {"Item: Pattern: Bloodvine Boots (#19766)", 6519766},
    {"Item: Pattern: Primal Batskin Jerkin (#19769)", 6519769},
    {"Item: Pattern: Primal Batskin Gloves (#19770)", 6519770},
    {"Item: Pattern: Primal Batskin Bracers (#19771)", 6519771},
    {"Item: Pattern: Blood Tiger Breastplate (#19772)", 6519772},
    {"Item: Pattern: Blood Tiger Shoulders (#19773)", 6519773},
    {"Item: Plans: Bloodsoul Breastplate (#19776)", 6519776},
    {"Item: Plans: Bloodsoul Shoulders (#19777)", 6519777},
    {"Item: Plans: Bloodsoul Gauntlets (#19778)", 6519778},
    {"Item: Plans: Darksoul Breastplate (#19779)", 6519779},
    {"Item: Plans: Darksoul Leggings (#19780)", 6519780},
    {"Item: Plans: Darksoul Shoulders (#19781)", 6519781},
    {"Item: Schematic: Bloodvine Goggles (#20000)", 6520000},
    {"Item: Schematic: Bloodvine Lens (#20001)", 6520001},
    {"Item: Recipe: Mageblood Elixir (#20011)", 6520011},
    {"Item: Recipe: Greater Dreamless Sleep Potion (#20012)", 6520012},
    {"Item: Recipe: Living Action Potion (#20013)", 6520013},
    {"Item: Recipe: Mighty Troll's Blood Elixir (#20014)", 6520014},
    {"Item: Plans: Dark Iron Boots (#20040)", 6520040},
    {"Item: Recipe: Heavy Crocolisk Stew (#20075)", 6520075},
    {"Item: Pattern: Dreamscale Breastplate (#20382)", 6520382},
    {"Item: Pattern: Spitfire Bracers (#20506)", 6520506},
    {"Item: Pattern: Spitfire Gauntlets (#20507)", 6520507},
    {"Item: Pattern: Spitfire Breastplate (#20508)", 6520508},
    {"Item: Pattern: Sandstalker Bracers (#20509)", 6520509},
    {"Item: Pattern: Sandstalker Gauntlets (#20510)", 6520510},
    {"Item: Pattern: Sandstalker Breastplate (#20511)", 6520511},
    {"Item: Pattern: Runed Stygian Leggings (#20546)", 6520546},
    {"Item: Pattern: Runed Stygian Belt (#20548)", 6520548},
    {"Item: Pattern: Runed Stygian Boots (#20547)", 6520547},
    {"Item: Plans: Darkrune Gauntlets (#20553)", 6520553},
    {"Item: Plans: Darkrune Helm (#20555)", 6520555},
    {"Item: Plans: Darkrune Breastplate (#20554)", 6520554},
    {"Item: Pattern: Black Whelp Tunic (#20576)", 6520576},
    {"Item: Formula: Enchant Gloves - Threat (#20726)", 6520726},
    {"Item: Formula: Enchant Gloves - Shadow Power (#20727)", 6520727},
    {"Item: Formula: Enchant Gloves - Frost Power (#20728)", 6520728},
    {"Item: Formula: Enchant Gloves - Fire Power (#20729)", 6520729},
    {"Item: Formula: Enchant Gloves - Healing Power (#20730)", 6520730},
    {"Item: Formula: Enchant Gloves - Superior Agility (#20731)", 6520731},
    {"Item: Formula: Enchant Cloak - Greater Fire Resistance (#20732)", 6520732},
    {"Item: Formula: Enchant Cloak - Greater Nature Resistance (#20733)", 6520733},
    {"Item: Formula: Enchant Cloak - Stealth (#20734)", 6520734},
    {"Item: Formula: Enchant Cloak - Subtlety (#20735)", 6520735},
    {"Item: Formula: Enchant Cloak - Dodge (#20736)", 6520736},
    {"Item: Formula: Minor Wizard Oil (#20758)", 6520758},
    {"Item: Formula: Minor Mana Oil (#20752)", 6520752},
    {"Item: Formula: Lesser Wizard Oil (#20753)", 6520753},
    {"Item: Formula: Lesser Mana Oil (#20754)", 6520754},
    {"Item: Formula: Wizard Oil (#20755)", 6520755},
    {"Item: Formula: Brilliant Wizard Oil (#20756)", 6520756},
    {"Item: Formula: Brilliant Mana Oil (#20757)", 6520757},
    {"Item: Recipe: Transmute Elemental Fire (#20761)", 6520761},
    {"Item: Manual of Heroic Strike IX (#21297)", 6521297},
    {"Item: Manual of Revenge VI (#21299)", 6521299},
    {"Item: Manual of Battle Shout VII (#21298)", 6521298},
    {"Item: Libram: Blessing of Wisdom VI (#21288)", 6521288},
    {"Item: Libram: Blessing of Might VII (#21289)", 6521289},
    {"Item: Libram: Holy Light IX (#21290)", 6521290},
    {"Item: Guide: Multi-Shot V (#21304)", 6521304},
    {"Item: Guide: Serpent Sting IX (#21306)", 6521306},
    {"Item: Guide: Aspect of the Hawk VII (#21307)", 6521307},
    {"Item: Book of Healing Touch XI (#21294)", 6521294},
    {"Item: Book of Starfire VII (#21295)", 6521295},
    {"Item: Book of Rejuvenation XI (#21296)", 6521296},
    {"Item: Handbook of Backstab IX (#21300)", 6521300},
    {"Item: Handbook of Feint V (#21303)", 6521303},
    {"Item: Tome of Frostbolt XI (#21214)", 6521214},
    {"Item: Tome of Fireball XII (#21279)", 6521279},
    {"Item: Grimoire of Shadow Bolt X (#21281)", 6521281},
    {"Item: Grimoire of Immolate VIII (#21282)", 6521282},
    {"Item: Grimoire of Corruption VII (#21283)", 6521283},
    {"Item: Codex of Greater Heal V (#21284)", 6521284},
    {"Item: Codex of Renew X (#21285)", 6521285},
    {"Item: Codex of Prayer of Healing V (#21287)", 6521287},
    {"Item: Design: Heavy Golden Necklace of Battle (#20856)", 6520856},
    {"Item: Design: Wicked Moonstone Ring (#20855)", 6520855},
    {"Item: Design: Amulet of the Moon (#20854)", 6520854},
    {"Item: Tome of Arcane Missiles VIII (#21280)", 6521280},
    {"Item: Handbook of Deadly Poison V (#21302)", 6521302},
    {"Item: Tablet of Healing Wave X (#21291)", 6521291},
    {"Item: Tablet of Grace of Air Totem III (#21293)", 6521293},
    {"Item: Tablet of Strength of Earth Totem V (#21292)", 6521292},
    {"Item: Codex: Prayer of Fortitude III (#29549)", 6529549},
    {"Item: Design: Pendant of the Agate Shield (#20970)", 6520970},
    {"Item: Design: Heavy Iron Knuckles (#20971)", 6520971},
    {"Item: Design: Blazing Citrine Ring (#20973)", 6520973},
    {"Item: Design: Jade Pendant of Blasting (#20974)", 6520974},
    {"Item: Design: The Jade Eye (#20975)", 6520975},
    {"Item: Design: Citrine Pendant of Golden Healing (#20976)", 6520976},
    {"Item: Recipe: Dirge's Kickin' Chimaerok Chops (#21025)", 6521025},
    {"Item: Recipe: Smoked Sagefish (#21099)", 6521099},
    {"Item: Recipe: Sagefish Delight (#21219)", 6521219},
    {"Item: Pattern: Soul Pouch (#21358)", 6521358},
    {"Item: Pattern: Core Felcloth Bag (#21371)", 6521371},
    {"Item: Recipe: Elixir of Greater Firepower (#21547)", 6521547},
    {"Item: Pattern: Stormshroud Gloves (#21548)", 6521548},
    {"Item: Pattern: Festival Dress (#21722)", 6521722},
    {"Item: Pattern: Festival Suit (#21723)", 6521723},
    {"Item: Schematic: Small Blue Rocket (#21724)", 6521724},
    {"Item: Schematic: Small Green Rocket (#21725)", 6521725},
    {"Item: Schematic: Small Red Rocket (#21726)", 6521726},
    {"Item: Schematic: Large Blue Rocket (#21727)", 6521727},
    {"Item: Schematic: Large Green Rocket (#21728)", 6521728},
    {"Item: Schematic: Large Red Rocket (#21729)", 6521729},
    {"Item: Schematic: Blue Rocket Cluster (#21730)", 6521730},
    {"Item: Schematic: Green Rocket Cluster (#21731)", 6521731},
    {"Item: Schematic: Red Rocket Cluster (#21732)", 6521732},
    {"Item: Schematic: Large Blue Rocket Cluster (#21733)", 6521733},
    {"Item: Schematic: Large Green Rocket Cluster (#21734)", 6521734},
    {"Item: Schematic: Large Red Rocket Cluster (#21735)", 6521735},
    {"Item: Schematic: Firework Launcher (#21738)", 6521738},
    {"Item: Schematic: Cluster Launcher (#21737)", 6521737},
    {"Item: Pattern: Bolt of Imbued Netherweave (#21892)", 6521892},
    {"Item: Pattern: Imbued Netherweave Bag (#21893)", 6521893},
    {"Item: Pattern: Bolt of Soulcloth (#21894)", 6521894},
    {"Item: Pattern: Primal Mooncloth (#21895)", 6521895},
    {"Item: Pattern: Spellfire Belt (#21908)", 6521908},
    {"Item: Pattern: Spellfire Gloves (#21909)", 6521909},
    {"Item: Pattern: Spellfire Robe (#21910)", 6521910},
    {"Item: Pattern: Spellfire Bag (#21911)", 6521911},
    {"Item: Pattern: Frozen Shadoweave Shoulders (#21912)", 6521912},
    {"Item: Pattern: Frozen Shadoweave Boots (#21914)", 6521914},
    {"Item: Pattern: Frozen Shadoweave Robe (#21913)", 6521913},
    {"Item: Pattern: Ebon Shadowbag (#21915)", 6521915},
    {"Item: Pattern: Primal Mooncloth Belt (#21916)", 6521916},
    {"Item: Pattern: Primal Mooncloth Shoulders (#21918)", 6521918},
    {"Item: Pattern: Primal Mooncloth Robe (#21917)", 6521917},
    {"Item: Pattern: Primal Mooncloth Bag (#21919)", 6521919},
    {"Item: Pattern: Netherweave Robe (#21896)", 6521896},
    {"Item: Pattern: Netherweave Tunic (#21897)", 6521897},
    {"Item: Pattern: Imbued Netherweave Pants (#21898)", 6521898},
    {"Item: Pattern: Imbued Netherweave Boots (#21899)", 6521899},
    {"Item: Pattern: Imbued Netherweave Robe (#21900)", 6521900},
    {"Item: Pattern: Imbued Netherweave Tunic (#21901)", 6521901},
    {"Item: Pattern: Soulcloth Gloves (#21902)", 6521902},
    {"Item: Pattern: Soulcloth Shoulders (#21903)", 6521903},
    {"Item: Pattern: Soulcloth Vest (#21904)", 6521904},
    {"Item: Pattern: Arcanoweave Bracers (#21905)", 6521905},
    {"Item: Pattern: Arcanoweave Boots (#21906)", 6521906},
    {"Item: Pattern: Arcanoweave Robe (#21907)", 6521907},
    {"Item: Design: Golden Hare (#21940)", 6521940},
    {"Item: Design: Black Pearl Panther (#21941)", 6521941},
    {"Item: Design: Ruby Crown of Restoration (#21942)", 6521942},
    {"Item: Design: Truesilver Crab (#21943)", 6521943},
    {"Item: Design: Truesilver Boar (#21944)", 6521944},
    {"Item: Design: The Aquamarine Ward (#21945)", 6521945},
    {"Item: Design: Gem Studded Band (#21947)", 6521947},
    {"Item: Design: Opal Necklace of Impact (#21948)", 6521948},
    {"Item: Design: Ruby Serpent (#21949)", 6521949},
    {"Item: Design: Emerald Crown of Destruction (#21952)", 6521952},
    {"Item: Design: Emerald Owl (#21953)", 6521953},
    {"Item: Design: Ring of Bitter Shadows (#21954)", 6521954},
    {"Item: Design: Black Diamond Crab (#21955)", 6521955},
    {"Item: Design: Dark Iron Scorpid (#21956)", 6521956},
    {"Item: Design: Necklace of the Diamond Tower (#21957)", 6521957},
    {"Item: Book: Gift of the Wild III (#22146)", 6522146},
    {"Item: Manual: Netherweave Bandage (#21992)", 6521992},
    {"Item: Manual: Heavy Netherweave Bandage (#21993)", 6521993},
    {"Item: Tome of Conjure Water IX (#29550)", 6529550},
    {"Item: Tome of Arcane Brilliance 2 (#22153)", 6522153},
    {"Item: Plans: Heavy Obsidian Belt (#22209)", 6522209},
    {"Item: Plans: Jagged Obsidian Shield (#22219)", 6522219},
    {"Item: Plans: Thick Obsidian Breastplate (#22222)", 6522222},
    {"Item: Plans: Light Obsidian Belt (#22214)", 6522214},
    {"Item: Plans: Black Grasp of the Destroyer (#22220)", 6522220},
    {"Item: Plans: Obsidian Mail Tunic (#22221)", 6522221},
    {"Item: Pattern: Enchanted Mageweave Pouch (#22307)", 6522307},
    {"Item: Pattern: Enchanted Runecloth Bag (#22308)", 6522308},
    {"Item: Pattern: Big Bag of Enchantment (#22309)", 6522309},
    {"Item: Codex: Prayer of Shadow Protection (#22393)", 6522393},
    {"Item: Pattern: Cenarion Herb Bag (#22310)", 6522310},
    {"Item: Pattern: Satchel of Cenarius (#22312)", 6522312},
    {"Item: Plans: Titanic Leggings (#22388)", 6522388},
    {"Item: Plans: Persuader (#22390)", 6522390},
    {"Item: Plans: Sageblade (#22389)", 6522389},
    {"Item: Formula: Enchant 2H Weapon - Agility (#22392)", 6522392},
    {"Item: Formula: Enchant Bracer - Major Defense (#22530)", 6522530},
    {"Item: Formula: Enchant Bracer - Superior Healing (#22531)", 6522531},
    {"Item: Formula: Enchant Bracer - Restore Mana Prime (#22532)", 6522532},
    {"Item: Formula: Enchant Bracer - Fortitude (#22533)", 6522533},
    {"Item: Formula: Enchant Bracer - Spellpower (#22534)", 6522534},
    {"Item: Formula: Enchant Ring - Striking (#22535)", 6522535},
    {"Item: Formula: Enchant Ring - Spellpower (#22536)", 6522536},
    {"Item: Formula: Enchant Ring - Healing Power (#22537)", 6522537},
    {"Item: Formula: Enchant Ring - Stats (#22538)", 6522538},
    {"Item: Formula: Enchant Shield - Intellect (#22539)", 6522539},
    {"Item: Formula: Enchant Shield - Shield Block (#22540)", 6522540},
    {"Item: Formula: Enchant Shield - Resistance (#22541)", 6522541},
    {"Item: Formula: Enchant Boots - Vitality (#22542)", 6522542},
    {"Item: Formula: Enchant Boots - Fortitude (#22543)", 6522543},
    {"Item: Formula: Enchant Boots - Dexterity (#22544)", 6522544},
    {"Item: Formula: Enchant Boots - Surefooted (#22545)", 6522545},
    {"Item: Formula: Enchant Chest - Exceptional Stats (#22547)", 6522547},
    {"Item: Formula: Enchant Cloak - Major Resistance (#22548)", 6522548},
    {"Item: Formula: Enchant Weapon - Major Striking (#22552)", 6522552},
    {"Item: Formula: Enchant Weapon - Major Intellect (#22551)", 6522551},
    {"Item: Formula: Enchant 2H Weapon - Savagery (#22554)", 6522554},
    {"Item: Formula: Enchant Weapon - Potency (#22553)", 6522553},
    {"Item: Formula: Enchant Weapon - Major Spellpower (#22555)", 6522555},
    {"Item: Formula: Enchant 2H Weapon - Major Agility (#22556)", 6522556},
    {"Item: Formula: Enchant Weapon - Sunfire (#22560)", 6522560},
    {"Item: Formula: Enchant Weapon - Soulfrost (#22561)", 6522561},
    {"Item: Formula: Enchant Weapon - Mongoose (#22559)", 6522559},
    {"Item: Formula: Enchant Weapon - Spellsurge (#22558)", 6522558},
    {"Item: Formula: Enchant Weapon - Battlemaster (#22557)", 6522557},
    {"Item: Formula: Superior Mana Oil (#22562)", 6522562},
    {"Item: Formula: Superior Wizard Oil (#22563)", 6522563},
    {"Item: Formula: Large Prismatic Shard (#22565)", 6522565},
    {"Item: Pattern: Gaea's Embrace (#22683)", 6522683},
    {"Item: Recipe: Crunchy Spider Surprise (#22647)", 6522647},
    {"Item: Tome of Polymorph: Turtle (#22739)", 6522739},
    {"Item: Schematic: Steam Tonk Controller (#22729)", 6522729},
    {"Item: Plans: Ironvine Breastplate (#22766)", 6522766},
    {"Item: Plans: Ironvine Gloves (#22767)", 6522767},
    {"Item: Plans: Ironvine Belt (#22768)", 6522768},
    {"Item: Pattern: Bramblewood Helm (#22771)", 6522771},
    {"Item: Pattern: Bramblewood Boots (#22770)", 6522770},
    {"Item: Pattern: Bramblewood Belt (#22769)", 6522769},
    {"Item: Pattern: Sylvan Vest (#22774)", 6522774},
    {"Item: Pattern: Sylvan Crown (#22773)", 6522773},
    {"Item: Pattern: Sylvan Shoulders (#22772)", 6522772},
    {"Item: Recipe: Elixir of Camouflage (#22900)", 6522900},
    {"Item: Recipe: Sneaking Potion (#22901)", 6522901},
    {"Item: Recipe: Elixir of Major Frost Power (#22902)", 6522902},
    {"Item: Recipe: Insane Strength Potion (#22903)", 6522903},
    {"Item: Recipe: Elixir of the Searching Eye (#22904)", 6522904},
    {"Item: Recipe: Elixir of Major Agility (#22905)", 6522905},
    {"Item: Recipe: Shrouding Potion (#22906)", 6522906},
    {"Item: Recipe: Super Mana Potion (#22907)", 6522907},
    {"Item: Recipe: Elixir of Major Firepower (#22908)", 6522908},
    {"Item: Recipe: Elixir of Major Defense (#22909)", 6522909},
    {"Item: Recipe: Elixir of Major Shadow Power (#22910)", 6522910},
    {"Item: Recipe: Major Dreamless Sleep Potion (#22911)", 6522911},
    {"Item: Recipe: Heroic Potion (#22912)", 6522912},
    {"Item: Recipe: Haste Potion (#22913)", 6522913},
    {"Item: Recipe: Destruction Potion (#22914)", 6522914},
    {"Item: Recipe: Transmute Primal Air to Fire (#22915)", 6522915},
    {"Item: Recipe: Transmute Primal Earth to Water (#22916)", 6522916},
    {"Item: Recipe: Transmute Primal Fire to Earth (#22917)", 6522917},
    {"Item: Recipe: Transmute Primal Water to Air (#22918)", 6522918},
    {"Item: Recipe: Elixir of Major Mageblood (#22919)", 6522919},
    {"Item: Recipe: Major Fire Protection Potion (#22920)", 6522920},
    {"Item: Recipe: Major Frost Protection Potion (#22921)", 6522921},
    {"Item: Recipe: Major Nature Protection Potion (#22922)", 6522922},
    {"Item: Recipe: Major Arcane Protection Potion (#22923)", 6522923},
    {"Item: Recipe: Major Shadow Protection Potion (#22924)", 6522924},
    {"Item: Recipe: Major Holy Protection Potion (#22925)", 6522925},
    {"Item: Recipe: Elixir of Empowerment (#22926)", 6522926},
    {"Item: Recipe: Ironshield Potion (#22927)", 6522927},
    {"Item: Tome of Frost Ward V (#22890)", 6522890},
    {"Item: Grimoire of Shadow Ward IV (#22891)", 6522891},
    {"Item: Tome of Conjure Food VII (#22897)", 6522897},
    {"Item: Design: Teardrop Blood Garnet (#23130)", 6523130},
    {"Item: Design: Bold Blood Garnet (#23131)", 6523131},
    {"Item: Design: Runed Blood Garnet (#23133)", 6523133},
    {"Item: Design: Delicate Blood Garnet (#23134)", 6523134},
    {"Item: Design: Inscribed Flame Spessarite (#23135)", 6523135},
    {"Item: Design: Luminous Flame Spessarite (#23136)", 6523136},
    {"Item: Design: Glinting Flame Spessarite (#23137)", 6523137},
    {"Item: Design: Potent Flame Spessarite (#23138)", 6523138},
    {"Item: Design: Radiant Deep Peridot (#23140)", 6523140},
    {"Item: Design: Jagged Deep Peridot (#23141)", 6523141},
    {"Item: Design: Enduring Deep Peridot (#23142)", 6523142},
    {"Item: Design: Dazzling Deep Peridot (#23143)", 6523143},
    {"Item: Design: Glowing Shadow Draenite (#23144)", 6523144},
    {"Item: Design: Royal Shadow Draenite (#23145)", 6523145},
    {"Item: Design: Shifting Shadow Draenite (#23146)", 6523146},
    {"Item: Design: Sovereign Shadow Draenite (#23147)", 6523147},
    {"Item: Design: Brilliant Golden Draenite (#23148)", 6523148},
    {"Item: Design: Gleaming Golden Draenite (#23149)", 6523149},
    {"Item: Design: Thick Golden Draenite (#23150)", 6523150},
    {"Item: Design: Rigid Golden Draenite (#23151)", 6523151},
    {"Item: Design: Solid Azure Moonstone (#23152)", 6523152},
    {"Item: Design: Sparkling Azure Moonstone (#23153)", 6523153},
    {"Item: Design: Stormy Azure Moonstone (#23154)", 6523154},
    {"Item: Design: Lustrous Azure Moonstone (#23155)", 6523155},
    {"Item: Tablet of Flame Shock VI (#23320)", 6523320},
    {"Item: Plans: Adamantite Maul (#23590)", 6523590},
    {"Item: Plans: Adamantite Cleaver (#23591)", 6523591},
    {"Item: Plans: Adamantite Dagger (#23592)", 6523592},
    {"Item: Plans: Adamantite Rapier (#23593)", 6523593},
    {"Item: Plans: Adamantite Plate Bracers (#23594)", 6523594},
    {"Item: Plans: Adamantite Plate Gloves (#23595)", 6523595},
    {"Item: Plans: Adamantite Breastplate (#23596)", 6523596},
    {"Item: Plans: Enchanted Adamantite Belt (#23597)", 6523597},
    {"Item: Plans: Enchanted Adamantite Breastplate (#23599)", 6523599},
    {"Item: Plans: Enchanted Adamantite Boots (#23598)", 6523598},
    {"Item: Plans: Enchanted Adamantite Leggings (#23600)", 6523600},
    {"Item: Plans: Flamebane Bracers (#23601)", 6523601},
    {"Item: Plans: Flamebane Helm (#23602)", 6523602},
    {"Item: Plans: Flamebane Gloves (#23603)", 6523603},
    {"Item: Plans: Flamebane Breastplate (#23604)", 6523604},
    {"Item: Plans: Felsteel Gloves (#23605)", 6523605},
    {"Item: Plans: Felsteel Leggings (#23606)", 6523606},
    {"Item: Plans: Felsteel Helm (#23607)", 6523607},
    {"Item: Plans: Gauntlets of the Iron Tower (#23621)", 6523621},
    {"Item: Plans: Khorium Belt (#23608)", 6523608},
    {"Item: Plans: Khorium Pants (#23609)", 6523609},
    {"Item: Plans: Khorium Boots (#23610)", 6523610},
    {"Item: Plans: Ragesteel Gloves (#23611)", 6523611},
    {"Item: Plans: Ragesteel Helm (#23612)", 6523612},
    {"Item: Plans: Ragesteel Breastplate (#23613)", 6523613},
    {"Item: Plans: Swiftsteel Gloves (#23615)", 6523615},
    {"Item: Plans: Earthpeace Breastplate (#23617)", 6523617},
    {"Item: Plans: Adamantite Sharpening Stone (#23618)", 6523618},
    {"Item: Plans: Felsteel Shield Spike (#23619)", 6523619},
    {"Item: Plans: Felfury Gauntlets (#23620)", 6523620},
    {"Item: Plans: Steelgrip Gauntlets (#23622)", 6523622},
    {"Item: Plans: Storm Helm (#23623)", 6523623},
    {"Item: Plans: Helm of the Stalwart Defender (#23624)", 6523624},
    {"Item: Plans: Oathkeeper's Helm (#23625)", 6523625},
    {"Item: Plans: Black Felsteel Bracers (#23626)", 6523626},
    {"Item: Plans: Bracers of the Green Fortress (#23627)", 6523627},
    {"Item: Plans: Blessed Bracers (#23628)", 6523628},
    {"Item: Recipe: Transmute Primal Might (#23574)", 6523574},
    {"Item: Plans: Felsteel Longblade (#23629)", 6523629},
    {"Item: Plans: Khorium Champion (#23630)", 6523630},
    {"Item: Plans: Fel Edged Battleaxe (#23631)", 6523631},
    {"Item: Plans: Felsteel Reaper (#23632)", 6523632},
    {"Item: Plans: Runic Hammer (#23633)", 6523633},
    {"Item: Plans: Fel Hardened Maul (#23634)", 6523634},
    {"Item: Plans: Eternium Runed Blade (#23635)", 6523635},
    {"Item: Plans: Dirge (#23636)", 6523636},
    {"Item: Plans: Hand of Eternity (#23637)", 6523637},
    {"Item: Plans: Lesser Ward of Shielding (#23638)", 6523638},
    {"Item: Plans: Greater Ward of Shielding (#23639)", 6523639},
    {"Item: Schematic: Adamantite Rifle (#23799)", 6523799},
    {"Item: Schematic: Felsteel Boomstick (#23800)", 6523800},
    {"Item: Schematic: Ornate Khorium Rifle (#23802)", 6523802},
    {"Item: Schematic: Cogspinner Goggles (#23803)", 6523803},
    {"Item: Schematic: Power Amplification Goggles (#23804)", 6523804},
    {"Item: Schematic: Ultra-Spectropic Detection Goggles (#23805)", 6523805},
    {"Item: Schematic: Hyper-Vision Goggles (#23806)", 6523806},
    {"Item: Schematic: Adamantite Scope (#23807)", 6523807},
    {"Item: Schematic: Khorium Scope (#23808)", 6523808},
    {"Item: Schematic: Stabilized Eternium Scope (#23809)", 6523809},
    {"Item: Schematic: Crashin' Thrashin' Robot (#23810)", 6523810},
    {"Item: Schematic: White Smoke Flare (#23811)", 6523811},
    {"Item: Schematic: Green Smoke Flare (#23814)", 6523814},
    {"Item: Schematic: Adamantite Shell Machine (#23815)", 6523815},
    {"Item: Schematic: Fel Iron Toolbox (#23816)", 6523816},
    {"Item: Schematic: Titanium Toolbox (#23817)", 6523817},
    {"Item: Schematic: Elemental Seaforium Charge (#23874)", 6523874},
    {"Item: Schematic: Zapthrottle Mote Extractor (#23888)", 6523888},
    {"Item: Schematic: Critter Enlarger (#23882)", 6523882},
    {"Item: Schematic: Healing Potion Injector (#23883)", 6523883},
    {"Item: Schematic: Mana Potion Injector (#23884)", 6523884},
    {"Item: Schematic: Remote Mail Terminal (#23885)", 6523885},
    {"Item: Schematic: Rocket Boots Xtreme (#23887)", 6523887},
    {"Item: Manual of Eviscerate IX (#24102)", 6524102},
    {"Item: Book of Ferocious Bite V (#24101)", 6524101},
    {"Item: Design: Khorium Band of Shadows (#24158)", 6524158},
    {"Item: Design: Khorium Band of Frost (#24159)", 6524159},
    {"Item: Design: Khorium Inferno Band (#24160)", 6524160},
    {"Item: Design: Khorium Band of Leaves (#24161)", 6524161},
    {"Item: Design: Arcane Khorium Band (#24162)", 6524162},
    {"Item: Design: Heavy Felsteel Ring (#24163)", 6524163},
    {"Item: Design: Delicate Eternium Ring (#24164)", 6524164},
    {"Item: Design: Blazing Eternium Band (#24165)", 6524165},
    {"Item: Design: Pendant of Frozen Flame (#24174)", 6524174},
    {"Item: Design: Pendant of Thawing (#24175)", 6524175},
    {"Item: Design: Pendant of Withering (#24176)", 6524176},
    {"Item: Design: Pendant of Shadow's End (#24177)", 6524177},
    {"Item: Design: Pendant of the Null Rune (#24178)", 6524178},
    {"Item: Design: Thick Felsteel Necklace (#24166)", 6524166},
    {"Item: Design: Living Ruby Pendant (#24167)", 6524167},
    {"Item: Design: Braided Eternium Chain (#24168)", 6524168},
    {"Item: Design: Eye of the Night (#24169)", 6524169},
    {"Item: Design: Embrace of the Dawn (#24170)", 6524170},
    {"Item: Design: Chain of the Twilight Owl (#24171)", 6524171},
    {"Item: Design: Coronet of Verdant Flame (#24172)", 6524172},
    {"Item: Design: Circlet of Arcane Might (#24173)", 6524173},
    {"Item: Design: Felsteel Boar (#24179)", 6524179},
    {"Item: Design: Dawnstone Crab (#24180)", 6524180},
    {"Item: Design: Living Ruby Serpent (#24181)", 6524181},
    {"Item: Design: Talasite Owl (#24182)", 6524182},
    {"Item: Design: Nightseye Panther (#24183)", 6524183},
    {"Item: Design: Bold Living Ruby (#24193)", 6524193},
    {"Item: Design: Delicate Living Ruby (#24194)", 6524194},
    {"Item: Design: Teardrop Living Ruby (#24195)", 6524195},
    {"Item: Design: Runed Living Ruby (#24196)", 6524196},
    {"Item: Design: Bright Living Ruby (#24192)", 6524192},
    {"Item: Design: Subtle Living Ruby (#24197)", 6524197},
    {"Item: Design: Flashing Living Ruby (#24198)", 6524198},
    {"Item: Design: Solid Star of Elune (#24199)", 6524199},
    {"Item: Design: Lustrous Star of Elune (#24201)", 6524201},
    {"Item: Design: Stormy Star of Elune (#24202)", 6524202},
    {"Item: Design: Brilliant Dawnstone (#24203)", 6524203},
    {"Item: Design: Smooth Dawnstone (#24204)", 6524204},
    {"Item: Design: Rigid Dawnstone (#24205)", 6524205},
    {"Item: Design: Gleaming Dawnstone (#24206)", 6524206},
    {"Item: Design: Thick Dawnstone (#24207)", 6524207},
    {"Item: Design: Mystic Dawnstone (#24208)", 6524208},
    {"Item: Design: Sovereign Nightseye (#24209)", 6524209},
    {"Item: Design: Shifting Nightseye (#24210)", 6524210},
    {"Item: Design: Glowing Nightseye (#24211)", 6524211},
    {"Item: Design: Royal Nightseye (#24212)", 6524212},
    {"Item: Design: Inscribed Noble Topaz (#24213)", 6524213},
    {"Item: Design: Potent Noble Topaz (#24214)", 6524214},
    {"Item: Design: Luminous Noble Topaz (#24215)", 6524215},
    {"Item: Design: Glinting Noble Topaz (#24216)", 6524216},
    {"Item: Design: Enduring Talasite (#24217)", 6524217},
    {"Item: Design: Radiant Talasite (#24218)", 6524218},
    {"Item: Design: Dazzling Talasite (#24219)", 6524219},
    {"Item: Design: Jagged Talasite (#24220)", 6524220},
    {"Item: Design: Sparkling Star of Elune (#24200)", 6524200},
    {"Item: Pattern: Spellcloth (#24316)", 6524316},
    {"Item: Pattern: Mystic Spellthread (#24292)", 6524292},
    {"Item: Pattern: Silver Spellthread (#24293)", 6524293},
    {"Item: Pattern: Runic Spellthread (#24294)", 6524294},
    {"Item: Pattern: Golden Spellthread (#24295)", 6524295},
    {"Item: Pattern: Unyielding Bracers (#24296)", 6524296},
    {"Item: Pattern: Bracers of Havok (#24297)", 6524297},
    {"Item: Pattern: Blackstrike Bracers (#24298)", 6524298},
    {"Item: Pattern: Cloak of the Black Void (#24299)", 6524299},
    {"Item: Pattern: Cloak of Eternity (#24300)", 6524300},
    {"Item: Pattern: White Remedy Cape (#24301)", 6524301},
    {"Item: Pattern: Unyielding Girdle (#24302)", 6524302},
    {"Item: Pattern: Girdle of Ruination (#24303)", 6524303},
    {"Item: Pattern: Black Belt of Knowledge (#24304)", 6524304},
    {"Item: Pattern: Resolute Cape (#24305)", 6524305},
    {"Item: Pattern: Vengeance Wrap (#24306)", 6524306},
    {"Item: Pattern: Manaweave Cloak (#24307)", 6524307},
    {"Item: Pattern: Whitemend Pants (#24308)", 6524308},
    {"Item: Pattern: Spellstrike Pants (#24309)", 6524309},
    {"Item: Pattern: Battlecast Pants (#24310)", 6524310},
    {"Item: Pattern: Whitemend Hood (#24311)", 6524311},
    {"Item: Pattern: Spellstrike Hood (#24312)", 6524312},
    {"Item: Pattern: Battlecast Hood (#24313)", 6524313},
    {"Item: Pattern: Bag of Jewels (#24314)", 6524314},
    {"Item: Pattern: Heavy Netherweave Net (#24315)", 6524315},
    {"Item: Book of Cower IV (#24345)", 6524345},
    {"Item: Plans: Greater Rune of Warding (#25526)", 6525526},
    {"Item: Pattern: Heavy Knothide Leather (#25720)", 6525720},
    {"Item: Pattern: Vindicator's Armor Kit (#25721)", 6525721},
    {"Item: Pattern: Magister's Armor Kit (#25722)", 6525722},
    {"Item: Pattern: Riding Crop (#25725)", 6525725},
    {"Item: Pattern: Comfortable Insoles (#25726)", 6525726},
    {"Item: Pattern: Stylin' Purple Hat (#25728)", 6525728},
    {"Item: Pattern: Stylin' Adventure Hat (#25729)", 6525729},
    {"Item: Pattern: Stylin' Crimson Hat (#25731)", 6525731},
    {"Item: Pattern: Stylin' Jungle Hat (#25730)", 6525730},
    {"Item: Pattern: Fel Leather Gloves (#25732)", 6525732},
    {"Item: Pattern: Fel Leather Boots (#25733)", 6525733},
    {"Item: Pattern: Fel Leather Leggings (#25734)", 6525734},
    {"Item: Pattern: Heavy Clefthoof Vest (#25735)", 6525735},
    {"Item: Pattern: Heavy Clefthoof Leggings (#25736)", 6525736},
    {"Item: Pattern: Heavy Clefthoof Boots (#25737)", 6525737},
    {"Item: Pattern: Felstalker Belt (#25738)", 6525738},
    {"Item: Pattern: Felstalker Bracers (#25739)", 6525739},
    {"Item: Pattern: Felstalker Breastplate (#25740)", 6525740},
    {"Item: Pattern: Netherfury Belt (#25741)", 6525741},
    {"Item: Pattern: Netherfury Leggings (#25742)", 6525742},
    {"Item: Pattern: Netherfury Boots (#25743)", 6525743},
    {"Item: Plans: Adamantite Rod (#25846)", 6525846},
    {"Item: Plans: Eternium Rod (#25847)", 6525847},
    {"Item: Formula: Runed Adamantite Rod (#25848)", 6525848},
    {"Item: Formula: Runed Eternium Rod (#25849)", 6525849},
    {"Item: Recipe: Transmute Earthstorm Diamond (#25869)", 6525869},
    {"Item: Recipe: Transmute Skyfire Diamond (#25870)", 6525870},
    {"Item: Schematic: Purple Smoke Flare (#25887)", 6525887},
    {"Item: Design: Powerful Earthstorm Diamond (#25902)", 6525902},
    {"Item: Design: Bracing Earthstorm Diamond (#25903)", 6525903},
    {"Item: Design: Tenacious Earthstorm Diamond (#25905)", 6525905},
    {"Item: Design: Brutal Earthstorm Diamond (#25906)", 6525906},
    {"Item: Design: Insightful Earthstorm Diamond (#25904)", 6525904},
    {"Item: Design: Destructive Skyfire Diamond (#25907)", 6525907},
    {"Item: Design: Mystical Skyfire Diamond (#25909)", 6525909},
    {"Item: Design: Swift Skyfire Diamond (#25908)", 6525908},
    {"Item: Design: Enigmatic Skyfire Diamond (#25910)", 6525910},
    {"Item: Recipe: Lynx Steak (#27685)", 6527685},
    {"Item: Recipe: Roasted Moongraze Tenderloin (#27686)", 6527686},
    {"Item: Recipe: Bat Bites (#27687)", 6527687},
    {"Item: Recipe: Buzzard Bites (#27684)", 6527684},
    {"Item: Recipe: Ravager Dog (#27688)", 6527688},
    {"Item: Recipe: Sporeling Snack (#27689)", 6527689},
    {"Item: Recipe: Blackened Basilisk (#27690)", 6527690},
    {"Item: Recipe: Roasted Clefthoof (#27691)", 6527691},
    {"Item: Recipe: Warp Burger (#27692)", 6527692},
    {"Item: Recipe: Talbuk Steak (#27693)", 6527693},
    {"Item: Recipe: Blackened Trout (#27694)", 6527694},
    {"Item: Recipe: Feltail Delight (#27695)", 6527695},
    {"Item: Recipe: Blackened Sporefish (#27696)", 6527696},
    {"Item: Recipe: Grilled Mudfish (#27697)", 6527697},
    {"Item: Recipe: Poached Bluefish (#27698)", 6527698},
    {"Item: Recipe: Golden Fish Sticks (#27699)", 6527699},
    {"Item: Recipe: Spicy Crawdad (#27700)", 6527700},
    {"Item: Tome of Conjure Food VIII (#31501)", 6531501},
    {"Item: Formula: Enchant Chest - Major Resilience (#28270)", 6528270},
    {"Item: Formula: Enchant Gloves - Precise Strikes (#28271)", 6528271},
    {"Item: Formula: Enchant Gloves - Major Spellpower (#28272)", 6528272},
    {"Item: Formula: Enchant Gloves - Major Healing (#28273)", 6528273},
    {"Item: Formula: Enchant Cloak - Spell Penetration (#28274)", 6528274},
    {"Item: Formula: Enchant Cloak - Greater Arcane Resistance (#28276)", 6528276},
    {"Item: Formula: Enchant Cloak - Greater Shadow Resistance (#28277)", 6528277},
    {"Item: Formula: Enchant Boots - Cat's Swiftness (#28279)", 6528279},
    {"Item: Formula: Enchant Boots - Boar's Speed (#28280)", 6528280},
    {"Item: Formula: Enchant Shield - Major Stamina (#28282)", 6528282},
    {"Item: Formula: Enchant Weapon - Major Healing (#28281)", 6528281},
    {"Item: Design: Smooth Golden Draenite (#28291)", 6528291},
    {"Item: Design: Bright Blood Garnet (#28596)", 6528596},
    {"Item: Plans: Adamantite Weightstone (#28632)", 6528632},
    {"Item: Pattern: Shadow Armor Kit (#29669)", 6529669},
    {"Item: Pattern: Flame Armor Kit (#29672)", 6529672},
    {"Item: Pattern: Frost Armor Kit (#29673)", 6529673},
    {"Item: Pattern: Nature Armor Kit (#29674)", 6529674},
    {"Item: Pattern: Arcane Armor Kit (#29675)", 6529675},
    {"Item: Pattern: Enchanted Felscale Leggings (#29677)", 6529677},
    {"Item: Pattern: Enchanted Felscale Gloves (#29682)", 6529682},
    {"Item: Pattern: Enchanted Felscale Boots (#29684)", 6529684},
    {"Item: Pattern: Flamescale Boots (#29691)", 6529691},
    {"Item: Pattern: Flamescale Leggings (#29689)", 6529689},
    {"Item: Pattern: Reinforced Mining Bag (#29664)", 6529664},
    {"Item: Pattern: Flamescale Belt (#29693)", 6529693},
    {"Item: Pattern: Enchanted Clefthoof Leggings (#29698)", 6529698},
    {"Item: Pattern: Enchanted Clefthoof Gloves (#29700)", 6529700},
    {"Item: Pattern: Enchanted Clefthoof Boots (#29701)", 6529701},
    {"Item: Pattern: Blastguard Pants (#29702)", 6529702},
    {"Item: Pattern: Blastguard Boots (#29703)", 6529703},
    {"Item: Pattern: Blastguard Belt (#29704)", 6529704},
    {"Item: Pattern: Drums of Panic (#29713)", 6529713},
    {"Item: Pattern: Drums of Restoration (#29714)", 6529714},
    {"Item: Pattern: Drums of Battle (#29717)", 6529717},
    {"Item: Pattern: Drums of Speed (#29718)", 6529718},
    {"Item: Pattern: Cobrahide Leg Armor (#29719)", 6529719},
    {"Item: Pattern: Nethercobra Leg Armor (#29722)", 6529722},
    {"Item: Pattern: Clefthide Leg Armor (#29720)", 6529720},
    {"Item: Pattern: Nethercleft Leg Armor (#29721)", 6529721},
    {"Item: Pattern: Cobrascale Hood (#29723)", 6529723},
    {"Item: Pattern: Cobrascale Gloves (#29724)", 6529724},
    {"Item: Pattern: Windscale Hood (#29725)", 6529725},
    {"Item: Pattern: Hood of Primal Life (#29726)", 6529726},
    {"Item: Pattern: Gloves of the Living Touch (#29727)", 6529727},
    {"Item: Pattern: Windslayer Wraps (#29728)", 6529728},
    {"Item: Pattern: Living Dragonscale Helm (#29729)", 6529729},
    {"Item: Pattern: Earthen Netherscale Boots (#29730)", 6529730},
    {"Item: Pattern: Windstrike Gloves (#29731)", 6529731},
    {"Item: Pattern: Netherdrake Helm (#29732)", 6529732},
    {"Item: Pattern: Netherdrake Gloves (#29733)", 6529733},
    {"Item: Pattern: Thick Netherscale Breastplate (#29734)", 6529734},
    {"Item: Recipe: Clam Bar (#30156)", 6530156},
    {"Item: Pattern: Belt of Blasting (#30280)", 6530280},
    {"Item: Pattern: Belt of the Long Road (#30281)", 6530281},
    {"Item: Pattern: Boots of Blasting (#30282)", 6530282},
    {"Item: Pattern: Boots of the Long Road (#30283)", 6530283},
    {"Item: Pattern: Belt of Natural Power (#30301)", 6530301},
    {"Item: Pattern: Belt of Deep Shadow (#30302)", 6530302},
    {"Item: Pattern: Belt of the Black Eagle (#30303)", 6530303},
    {"Item: Pattern: Monsoon Belt (#30304)", 6530304},
    {"Item: Pattern: Boots of Natural Grace (#30305)", 6530305},
    {"Item: Pattern: Boots of Utter Darkness (#30306)", 6530306},
    {"Item: Pattern: Boots of the Crimson Hawk (#30307)", 6530307},
    {"Item: Pattern: Hurricane Boots (#30308)", 6530308},
    {"Item: Plans: Belt of the Guardian (#30321)", 6530321},
    {"Item: Plans: Red Belt of Battle (#30322)", 6530322},
    {"Item: Plans: Boots of the Protector (#30323)", 6530323},
    {"Item: Plans: Red Havoc Boots (#30324)", 6530324},
    {"Item: Pattern: Shadowcloth (#30483)", 6530483},
    {"Item: Design: Ring of Arcane Shielding (#30826)", 6530826},
    {"Item: Pattern: Cloak of Arcane Evasion (#30833)", 6530833},
    {"Item: Pattern: Flameheart Bracers (#30842)", 6530842},
    {"Item: Pattern: Flameheart Gloves (#30843)", 6530843},
    {"Item: Pattern: Flameheart Vest (#30844)", 6530844},
    {"Item: Plans: Wildguard Breastplate (#31390)", 6531390},
    {"Item: Plans: Wildguard Leggings (#31391)", 6531391},
    {"Item: Plans: Wildguard Helm (#31392)", 6531392},
    {"Item: Plans: Iceguard Breastplate (#31393)", 6531393},
    {"Item: Plans: Iceguard Leggings (#31394)", 6531394},
    {"Item: Plans: Iceguard Helm (#31395)", 6531395},
    {"Item: Design: The Frozen Eye (#31401)", 6531401},
    {"Item: Design: The Natural Ward (#31402)", 6531402},
    {"Item: Recipe: Mok'Nathal Shortribs (#31675)", 6531675},
    {"Item: Recipe: Crunchy Serpent (#31674)", 6531674},
    {"Item: Recipe: Fel Strength Elixir (#31680)", 6531680},
    {"Item: Recipe: Fel Mana Potion (#31682)", 6531682},
    {"Item: Recipe: Fel Regeneration Potion (#31681)", 6531681},
    {"Item: Codex: Prayer of Shadow Protection II (#31837)", 6531837},
    {"Item: Design: Great Golden Draenite (#31870)", 6531870},
    {"Item: Design: Great Dawnstone (#31875)", 6531875},
    {"Item: Design: Balanced Shadow Draenite (#31871)", 6531871},
    {"Item: Design: Infused Shadow Draenite (#31872)", 6531872},
    {"Item: Design: Infused Nightseye (#31877)", 6531877},
    {"Item: Design: Balanced Nightseye (#31876)", 6531876},
    {"Item: Design: Veiled Flame Spessarite (#31873)", 6531873},
    {"Item: Design: Wicked Flame Spessarite (#31874)", 6531874},
    {"Item: Design: Veiled Noble Topaz (#31878)", 6531878},
    {"Item: Design: Wicked Noble Topaz (#31879)", 6531879},
    {"Item: Recipe: Earthen Elixir (#32070)", 6532070},
    {"Item: Recipe: Elixir of Ironskin (#32071)", 6532071},
    {"Item: Design: Bold Crimson Spinel (#32274)", 6532274},
    {"Item: Design: Delicate Crimson Spinel (#32277)", 6532277},
    {"Item: Design: Teardrop Crimson Spinel (#32281)", 6532281},
    {"Item: Design: Runed Crimson Spinel (#32282)", 6532282},
    {"Item: Design: Bright Crimson Spinel (#32283)", 6532283},
    {"Item: Design: Subtle Crimson Spinel (#32284)", 6532284},
    {"Item: Design: Flashing Crimson Spinel (#32285)", 6532285},
    {"Item: Design: Solid Empyrean Sapphire (#32286)", 6532286},
    {"Item: Design: Sparkling Empyrean Sapphire (#32287)", 6532287},
    {"Item: Design: Lustrous Empyrean Sapphire (#32288)", 6532288},
    {"Item: Design: Stormy Empyrean Sapphire (#32289)", 6532289},
    {"Item: Design: Brilliant Lionseye (#32290)", 6532290},
    {"Item: Design: Smooth Lionseye (#32291)", 6532291},
    {"Item: Design: Rigid Lionseye (#32292)", 6532292},
    {"Item: Design: Gleaming Lionseye (#32293)", 6532293},
    {"Item: Design: Thick Lionseye (#32294)", 6532294},
    {"Item: Design: Mystic Lionseye (#32295)", 6532295},
    {"Item: Design: Great Lionseye (#32296)", 6532296},
    {"Item: Design: Sovereign Shadowsong Amethyst (#32297)", 6532297},
    {"Item: Design: Shifting Shadowsong Amethyst (#32298)", 6532298},
    {"Item: Design: Balanced Shadowsong Amethyst (#32299)", 6532299},
    {"Item: Design: Infused Shadowsong Amethyst (#32300)", 6532300},
    {"Item: Design: Glowing Shadowsong Amethyst (#32301)", 6532301},
    {"Item: Design: Royal Shadowsong Amethyst (#32302)", 6532302},
    {"Item: Design: Inscribed Pyrestone (#32303)", 6532303},
    {"Item: Design: Potent Pyrestone (#32304)", 6532304},
    {"Item: Design: Luminous Pyrestone (#32305)", 6532305},
    {"Item: Design: Glinting Pyrestone (#32306)", 6532306},
    {"Item: Design: Veiled Pyrestone (#32307)", 6532307},
    {"Item: Design: Wicked Pyrestone (#32308)", 6532308},
    {"Item: Design: Enduring Seaspray Emerald (#32309)", 6532309},
    {"Item: Design: Radiant Seaspray Emerald (#32310)", 6532310},
    {"Item: Design: Dazzling Seaspray Emerald (#32311)", 6532311},
    {"Item: Design: Jagged Seaspray Emerald (#32312)", 6532312},
    {"Item: Schematic: Fused Wiring (#32381)", 6532381},
    {"Item: Design: Relentless Earthstorm Diamond (#32412)", 6532412},
    {"Item: Design: Thundering Skyfire Diamond (#32411)", 6532411},
    {"Item: Pattern: Boots of Shackled Souls (#32429)", 6532429},
    {"Item: Pattern: Greaves of Shackled Souls (#32431)", 6532431},
    {"Item: Pattern: Waistguard of Shackled Souls (#32432)", 6532432},
    {"Item: Pattern: Redeemed Soul Moccasins (#32433)", 6532433},
    {"Item: Pattern: Redeemed Soul Wristguards (#32434)", 6532434},
    {"Item: Pattern: Redeemed Soul Legguards (#32435)", 6532435},
    {"Item: Pattern: Redeemed Soul Cinch (#32436)", 6532436},
    {"Item: Pattern: Soulguard Slippers (#32437)", 6532437},
    {"Item: Pattern: Soulguard Bracers (#32438)", 6532438},
    {"Item: Pattern: Soulguard Leggings (#32439)", 6532439},
    {"Item: Pattern: Soulguard Girdle (#32440)", 6532440},
    {"Item: Plans: Shadesteel Sabots (#32441)", 6532441},
    {"Item: Plans: Shadesteel Bracers (#32442)", 6532442},
    {"Item: Plans: Shadesteel Greaves (#32443)", 6532443},
    {"Item: Plans: Shadesteel Girdle (#32444)", 6532444},
    {"Item: Pattern: Night's End (#32447)", 6532447},
    {"Item: Plans: Swiftsteel Bracers (#32736)", 6532736},
    {"Item: Plans: Swiftsteel Shoulders (#32737)", 6532737},
    {"Item: Plans: Dawnsteel Bracers (#32738)", 6532738},
    {"Item: Plans: Dawnsteel Shoulders (#32739)", 6532739},
    {"Item: Pattern: Bracers of Renewed Life (#32744)", 6532744},
    {"Item: Pattern: Shoulderpads of Renewed Life (#32745)", 6532745},
    {"Item: Pattern: Swiftstrike Bracers (#32746)", 6532746},
    {"Item: Pattern: Swiftstrike Shoulders (#32747)", 6532747},
    {"Item: Pattern: Bindings of Lightning Reflexes (#32748)", 6532748},
    {"Item: Pattern: Shoulders of Lightning Reflexes (#32749)", 6532749},
    {"Item: Pattern: Living Earth Bindings (#32750)", 6532750},
    {"Item: Pattern: Living Earth Shoulders (#32751)", 6532751},
    {"Item: Pattern: Bracers of Nimble Thought (#32754)", 6532754},
    {"Item: Pattern: Mantle of Nimble Thought (#32755)", 6532755},
    {"Item: Pattern: Swiftheal Wraps (#32752)", 6532752},
    {"Item: Pattern: Swiftheal Mantle (#32753)", 6532753},
    {"Item: Pattern: Cloak of Darkness (#33124)", 6533124},
    {"Item: Design: Don Julio's Heart (#33305)", 6533305},
    {"Item: Design: Kailee's Rose (#33155)", 6533155},
    {"Item: Design: Crimson Sun (#33156)", 6533156},
    {"Item: Design: Falling Star (#33157)", 6533157},
    {"Item: Design: Stone of Blades (#33158)", 6533158},
    {"Item: Design: Blood of Amber (#33159)", 6533159},
    {"Item: Design: Facet of Eternity (#33160)", 6533160},
    {"Item: Formula: Enchant Weapon - Greater Agility (#33165)", 6533165},
    {"Item: Plans: Ragesteel Shoulders (#33174)", 6533174},
    {"Item: Plans: Adamantite Weapon Chain (#33186)", 6533186},
    {"Item: Pattern: Shadowprowler's Chestguard (#33205)", 6533205},
    {"Item: Recipe: Flask of Chromatic Wonder (#33209)", 6533209},
    {"Item: Formula: Enchant Weapon - Executioner (#33307)", 6533307},
    {"Item: Weather-Beaten Journal (#34109)", 6534109},
    {"Item: Design: Steady Talasite (#33783)", 6533783},
    {"Item: Plans: Heavy Copper Longsword (#33792)", 6533792},
    {"Item: Schematic: Adamantite Arrow Maker (#33804)", 6533804},
    {"Item: Recipe: Skullfish Soup (#33870)", 6533870},
    {"Item: Recipe: Stormchops (#33871)", 6533871},
    {"Item: Recipe: Broiled Bloodfin (#33869)", 6533869},
    {"Item: Recipe: Spicy Hot Talbuk (#33873)", 6533873},
    {"Item: Recipe: Kibler's Bits (#33875)", 6533875},
    {"Item: Recipe: Delicious Chocolate Cake (#33925)", 6533925},
    {"Item: Plans: Hammer of Righteous Might (#33954)", 6533954},
    {"Item: Pattern: Quiver of a Thousand Feathers (#34200)", 6534200},
    {"Item: Schematic: Field Repair Bot 110G (#34114)", 6534114},
    {"Item: Formula: Enchant Cloak - Superior Frost Resistance (#37332)", 6537332},
    {"Item: Formula: Enchant Cloak - Superior Nature Resistance (#37333)", 6537333},
    {"Item: Formula: Enchant Cloak - Superior Agility (#37335)", 6537335},
    {"Item: Formula: Enchant Weapon - Exceptional Spirit (#37329)", 6537329},
    {"Item: Formula: Enchant Gloves - Greater Assault (#37345)", 6537345},
    {"Item: Formula: Enchant Weapon - Icebreaker (#37344)", 6537344},
    {"Item: Formula: Enchant Cloak - Superior Fire Resistance (#37331)", 6537331},
    {"Item: Formula: Enchant Bracers - Greater Assault (#44484)", 6544484},
    {"Item: Formula: Enchant Weapon - Lifeward (#44494)", 6544494},
    {"Item: Formula: Enchant Chest - Exceptional Resilience (#37340)", 6537340},
    {"Item: Formula: Enchant Cloak - Superior Shadow Resistance (#37334)", 6537334},
    {"Item: Formula: Enchant Cloak - Titanweave (#37347)", 6537347},
    {"Item: Formula: Enchant Bracer - Major Spirit (#37326)", 6537326},
    {"Item: Formula: Enchant Weapon - Scourgebane (#44473)", 6544473},
    {"Item: Formula: Enchant Cloak - Superior Arcane Resistance (#37330)", 6537330},
    {"Item: Formula: Enchant Bracer - Expertise (#37346)", 6537346},
    {"Item: Formula: Enchant Bracer - Greater Stats (#37337)", 6537337},
    {"Item: Formula: Enchant Weapon - Giant Slayer (#37339)", 6537339},
    {"Item: Formula: Enchant Gloves - Armsman (#44485)", 6544485},
    {"Item: Formula: Enchant Weapon - Greater Savagery (#37338)", 6537338},
    {"Item: Formula: Enchant Cloak - Shadow Armor (#37349)", 6537349},
    {"Item: Formula: Enchant Weapon - Exceptional Agility (#37343)", 6537343},
    {"Item: Pattern: Netherscale Ammo Pouch (#34201)", 6534201},
    {"Item: Design: Chaotic Skyfire Diamond (#34221)", 6534221},
    {"Item: Pattern: Green Winter Clothes (#34261)", 6534261},
    {"Item: Pattern: Winter Boots (#34262)", 6534262},
    {"Item: Pattern: Red Winter Clothes (#34319)", 6534319},
    {"Item: Recipe: Hot Apple Cider (#34413)", 6534413},
    {"Item: Pattern: Bag of Many Hides (#34491)", 6534491},
    {"Item: Manual: Heavy Frostweave Bandage (#39152)", 6539152},
    {"Item: Recipe: Mega Mammoth Meal (#43018)", 6543018},
    {"Item: Recipe: Tender Shoveltusk Steak (#43019)", 6543019},
    {"Item: Recipe: Spiced Worm Burger (#43020)", 6543020},
    {"Item: Recipe: Very Burnt Worg (#43021)", 6543021},
    {"Item: Recipe: Mighty Rhino Dogs (#43022)", 6543022},
    {"Item: Recipe: Poached Northern Sculpin (#43023)", 6543023},
    {"Item: Recipe: Firecracker Salmon (#43024)", 6543024},
    {"Item: Recipe: Imperial Manta Steak (#43026)", 6543026},
    {"Item: Recipe: Spicy Blue Nettlefish (#43025)", 6543025},
    {"Item: Recipe: Captain Rumsey's Lager (#34834)", 6534834},
    {"Item: Formula: Void Shatter (#34872)", 6534872},
    {"Item: Schematic: Wonderheal XT68 Shades (#35191)", 6535191},
    {"Item: Schematic: Justicebringer 3000 Specs (#35187)", 6535187},
    {"Item: Schematic: Powerheal 9000 Lens (#35189)", 6535189},
    {"Item: Schematic: Hyper-Magnified Moon Specs (#35190)", 6535190},
    {"Item: Schematic: Primal-Attuned Goggles (#35192)", 6535192},
    {"Item: Schematic: Annihilator Holo-Gogs (#35186)", 6535186},
    {"Item: Schematic: Lightning Etched Specs (#35193)", 6535193},
    {"Item: Schematic: Surestrike Goggles v3.0 (#35194)", 6535194},
    {"Item: Schematic: Mayhem Projection Goggles (#35195)", 6535195},
    {"Item: Schematic: Hard Khorium Goggles (#35196)", 6535196},
    {"Item: Schematic: Quad Deathblow X44 Goggles (#35197)", 6535197},
    {"Item: Design: Loop of Forged Power (#35198)", 6535198},
    {"Item: Design: Ring of Flowing Life (#35199)", 6535199},
    {"Item: Design: Hard Khorium Band (#35200)", 6535200},
    {"Item: Design: Pendant of Sunfire (#35201)", 6535201},
    {"Item: Design: Amulet of Flowing Life (#35202)", 6535202},
    {"Item: Design: Hard Khorium Choker (#35203)", 6535203},
    {"Item: Pattern: Sunfire Handwraps (#35204)", 6535204},
    {"Item: Pattern: Hands of Eternal Light (#35205)", 6535205},
    {"Item: Pattern: Sunfire Robe (#35206)", 6535206},
    {"Item: Pattern: Robe of Eternal Light (#35207)", 6535207},
    {"Item: Pattern: Leather Gauntlets of the Sun (#35212)", 6535212},
    {"Item: Pattern: Fletcher's Gloves of the Phoenix (#35213)", 6535213},
    {"Item: Pattern: Gloves of Immortal Dusk (#35214)", 6535214},
    {"Item: Pattern: Sun-Drenched Scale Gloves (#35215)", 6535215},
    {"Item: Pattern: Leather Chestguard of the Sun (#35216)", 6535216},
    {"Item: Pattern: Embrace of the Phoenix (#35217)", 6535217},
    {"Item: Pattern: Carapace of Sun and Shadow (#35218)", 6535218},
    {"Item: Pattern: Sun-Drenched Scale Chestguard (#35219)", 6535219},
    {"Item: Plans: Sunblessed Gauntlets (#35208)", 6535208},
    {"Item: Plans: Hard Khorium Battlefists (#35209)", 6535209},
    {"Item: Plans: Sunblessed Breastplate (#35210)", 6535210},
    {"Item: Plans: Hard Khorium Battleplate (#35211)", 6535211},
    {"Item: Study of Advanced Smelting (#35273)", 6535273},
    {"Item: Design: Quick Dawnstone (#35322)", 6535322},
    {"Item: Design: Reckless Noble Topaz (#35323)", 6535323},
    {"Item: Design: Forceful Talasite (#35325)", 6535325},
    {"Item: Formula: Enchant Weapon - Deathfrost (#35498)", 6535498},
    {"Item: Formula: Enchant Chest - Defense (#35500)", 6535500},
    {"Item: Design: Eternal Earthstorm Diamond (#35502)", 6535502},
    {"Item: Design: Ember Skyfire Diamond (#35505)", 6535505},
    {"Item: Recipe: Charred Bear Kabobs (#35564)", 6535564},
    {"Item: Recipe: Juicy Bear Burger (#35566)", 6535566},
    {"Item: Schematic: Rocket Boots Xtreme Lite (#35582)", 6535582},
    {"Item: Design: Figurine - Empyrean Tortoise (#35695)", 6535695},
    {"Item: Design: Figurine - Khorium Boar (#35696)", 6535696},
    {"Item: Design: Figurine - Crimson Serpent (#35697)", 6535697},
    {"Item: Design: Figurine - Shadowsong Panther (#35698)", 6535698},
    {"Item: Design: Figurine - Seaspray Albatross (#35699)", 6535699},
    {"Item: Design: Regal Nightseye (#35708)", 6535708},
    {"Item: Recipe: Guardian's Alchemist Stone (#35752)", 6535752},
    {"Item: Recipe: Sorcerer's Alchemist Stone (#35753)", 6535753},
    {"Item: Recipe: Redeemer's Alchemist Stone (#35754)", 6535754},
    {"Item: Recipe: Assassin's Alchemist Stone (#35755)", 6535755},
    {"Item: Formula: Enchant Cloak - Steelweave (#35756)", 6535756},
    {"Item: Design: Forceful Seaspray Emerald (#35765)", 6535765},
    {"Item: Design: Steady Seaspray Emerald (#35764)", 6535764},
    {"Item: Design: Reckless Pyrestone (#35762)", 6535762},
    {"Item: Design: Quick Lionseye (#35763)", 6535763},
    {"Item: Formula: Enchant Cloak - Mighty Armor (#44471)", 6544471},
    {"Item: Formula: Enchant Chest - Greater Dodge (#37336)", 6537336},
    {"Item: Formula: Enchant Cloak - Haste (#37348)", 6537348},
    {"Item: Formula: Enchant Cloak - Wisdom (#44488)", 6544488},
    {"Item: Formula: Enchant Boots - Tuskarr's Vitality (#44491)", 6544491},
    {"Item: Design: Purified Shadowsong Amethyst (#37504)", 6537504},
    {"Item: Pattern: Dress Shoes (#37915)", 6537915},
    {"Item: Pattern: Mycah's Botanical Bag (#38229)", 6538229},
    {"Item: Pattern: Haliscan Jacket (#38327)", 6538327},
    {"Item: Pattern: Haliscan Pantaloons (#38328)", 6538328},
    {"Item: Pattern: Trapper's Traveling Pack (#44509)", 6544509},
    {"Item: Pattern: Mammoth Mining Bag (#44510)", 6544510},
    {"Item: Pattern: Dark Arctic Boots (#38597)", 6538597},
    {"Item: Manual: Dense Frostweave Bandage (#39153)", 6539153},
    {"Item: Pattern: Bracers of Shackled Souls (#32430)", 6532430},
    {"Item: Recipe: Kungaloosh (#39644)", 6539644},
    {"Item: Design: Bold Scarlet Ruby (#41576)", 6541576},
    {"Item: Design: Mystic Sun Crystal (#41559)", 6541559},
    {"Item: Design: Mysterious Shadow Crystal (#41575)", 6541575},
    {"Item: Design: Defender's Shadow Crystal (#41574)", 6541574},
    {"Item: Design: Resplendent Huge Citrine (#41566)", 6541566},
    {"Item: Design: Deadly Huge Citrine (#41562)", 6541562},
    {"Item: Design: Lucent Huge Citrine (#41565)", 6541565},
    {"Item: Design: Durable Huge Citrine (#41563)", 6541563},
    {"Item: Design: Reckless Huge Citrine (#41561)", 6541561},
    {"Item: Design: Empowered Huge Citrine (#41564)", 6541564},
    {"Item: Design: Vivid Dark Jade (#41567)", 6541567},
    {"Item: Design: Steady Dark Jade (#41572)", 6541572},
    {"Item: Design: Seer's Dark Jade (#41568)", 6541568},
    {"Item: Design: Turbid Dark Jade (#41571)", 6541571},
    {"Item: Design: Opaque Dark Jade (#41573)", 6541573},
    {"Item: Design: Tense Dark Jade (#41570)", 6541570},
    {"Item: Design: Shattered Dark Jade (#41569)", 6541569},
    {"Item: Recipe: Mighty Arcane Protection Potion (#44564)", 6544564},
    {"Item: Recipe: Mighty Frost Protection Potion (#44566)", 6544566},
    {"Item: Recipe: Mighty Shadow Protection Potion (#44568)", 6544568},
    {"Item: Recipe: Mighty Fire Protection Potion (#44565)", 6544565},
    {"Item: Recipe: Mighty Nature Protection Potion (#44567)", 6544567},
    {"Item: Design: Stormy Chalcedony (#41560)", 6541560},
    {"Item: Design: Delicate Scarlet Ruby (#41577)", 6541577},
    {"Item: Design: Runed Scarlet Ruby (#41718)", 6541718},
    {"Item: Design: Subtle Scarlet Ruby (#41719)", 6541719},
    {"Item: Design: Flashing Scarlet Ruby (#41578)", 6541578},
    {"Item: Design: Fractured Scarlet Ruby (#41817)", 6541817},
    {"Item: Design: Precise Scarlet Ruby (#41790)", 6541790},
    {"Item: Design: Solid Sky Sapphire (#42138)", 6542138},
    {"Item: Design: Lustrous Sky Sapphire (#41581)", 6541581},
    {"Item: Design: Stormy Sky Sapphire (#41728)", 6541728},
    {"Item: Design: Smooth Autumn's Glow (#41720)", 6541720},
    {"Item: Design: Rigid Autumn's Glow (#41580)", 6541580},
    {"Item: Design: Thick Autumn's Glow (#41791)", 6541791},
    {"Item: Design: Mystic Autumn's Glow (#41727)", 6541727},
    {"Item: Design: Quick Autumn's Glow (#41579)", 6541579},
    {"Item: Design: Sovereign Twilight Opal (#41784)", 6541784},
    {"Item: Design: Shifting Twilight Opal (#41747)", 6541747},
    {"Item: Design: Tenuous Twilight Opal (#41785)", 6541785},
    {"Item: Design: Glowing Twilight Opal (#41725)", 6541725},
    {"Item: Design: Purified Twilight Opal (#41783)", 6541783},
    {"Item: Design: Royal Twilight Opal (#41701)", 6541701},
    {"Item: Design: Mysterious Twilight Opal (#41740)", 6541740},
    {"Item: Design: Infused Twilight Opal (#41796)", 6541796},
    {"Item: Design: Regal Twilight Opal (#41703)", 6541703},
    {"Item: Design: Defender's Twilight Opal (#41820)", 6541820},
    {"Item: Design: Puissant Twilight Opal (#41702)", 6541702},
    {"Item: Design: Guardian's Twilight Opal (#41726)", 6541726},
    {"Item: Design: Inscribed Monarch Topaz (#41789)", 6541789},
    {"Item: Design: Etched Monarch Topaz (#41777)", 6541777},
    {"Item: Design: Champion's Monarch Topaz (#41780)", 6541780},
    {"Item: Design: Resplendent Monarch Topaz (#41734)", 6541734},
    {"Item: Design: Deadly Monarch Topaz (#41794)", 6541794},
    {"Item: Design: Glinting Monarch Topaz (#41582)", 6541582},
    {"Item: Design: Lucent Monarch Topaz (#41733)", 6541733},
    {"Item: Design: Deft Monarch Topaz (#41792)", 6541792},
    {"Item: Design: Luminous Monarch Topaz (#41689)", 6541689},
    {"Item: Design: Potent Monarch Topaz (#41686)", 6541686},
    {"Item: Design: Veiled Monarch Topaz (#41688)", 6541688},
    {"Item: Design: Durable Monarch Topaz (#41730)", 6541730},
    {"Item: Design: Reckless Monarch Topaz (#41690)", 6541690},
    {"Item: Design: Wicked Monarch Topaz (#41721)", 6541721},
    {"Item: Design: Empowered Monarch Topaz (#41732)", 6541732},
    {"Item: Design: Stark Monarch Topaz (#41687)", 6541687},
    {"Item: Design: Stalwart Monarch Topaz (#41779)", 6541779},
    {"Item: Design: Glimmering Monarch Topaz (#41722)", 6541722},
    {"Item: Design: Accurate Monarch Topaz (#41818)", 6541818},
    {"Item: Design: Timeless Forest Emerald (#41795)", 6541795},
    {"Item: Design: Jagged Forest Emerald (#41723)", 6541723},
    {"Item: Design: Vivid Forest Emerald (#41698)", 6541698},
    {"Item: Design: Enduring Forest Emerald (#41697)", 6541697},
    {"Item: Design: Steady Forest Emerald (#41738)", 6541738},
    {"Item: Design: Forceful Forest Emerald (#41693)", 6541693},
    {"Item: Design: Seer's Forest Emerald (#41699)", 6541699},
    {"Item: Design: Misty Forest Emerald (#41781)", 6541781},
    {"Item: Design: Shining Forest Emerald (#41782)", 6541782},
    {"Item: Design: Turbid Forest Emerald (#41737)", 6541737},
    {"Item: Design: Intricate Forest Emerald (#41694)", 6541694},
    {"Item: Design: Sundered Forest Emerald (#41724)", 6541724},
    {"Item: Design: Lambent Forest Emerald (#41696)", 6541696},
    {"Item: Design: Opaque Forest Emerald (#41739)", 6541739},
    {"Item: Design: Energized Forest Emerald (#41692)", 6541692},
    {"Item: Design: Radiant Forest Emerald (#41819)", 6541819},
    {"Item: Design: Tense Forest Emerald (#41736)", 6541736},
    {"Item: Design: Shattered Forest Emerald (#41735)", 6541735},
    {"Item: Design: Fierce Monarch Topaz (#41793)", 6541793},
    {"Item: Design: Resolute Monarch Topaz (#41778)", 6541778},
    {"Item: Tome of Cold Weather Flight (#49177)", 6549177},
    {"Item: Plans: Reinforced Cobalt Shoulders (#41124)", 6541124},
    {"Item: Plans: Reinforced Cobalt Helm (#41123)", 6541123},
    {"Item: Plans: Reinforced Cobalt Legplates (#41120)", 6541120},
    {"Item: Plans: Reinforced Cobalt Chestpiece (#41122)", 6541122},
    {"Item: ZZOLD Design: Effulgent Skyflare Diamond (#41414)", 6541414},
    {"Item: ZZOLD Design: Tireless Skyflare Diamond (#41415)", 6541415},
    {"Item: ZZOLD Design: Forlorn Skyflare Diamond (#41416)", 6541416},
    {"Item: ZZOLD Design: Impassive Skyflare Diamond (#41417)", 6541417},
    {"Item: ZZOLD Design: Chaotic Skyflare Diamond (#41418)", 6541418},
    {"Item: ZZOLD Design: Destructive Skyflare Diamond (#41419)", 6541419},
    {"Item: ZZOLD Design: Ember Skyflare Diamond (#41420)", 6541420},
    {"Item: ZZOLD Design: Enigmatic Skyflare Diamond (#41421)", 6541421},
    {"Item: ZZOLD Design: Swift Skyflare Diamond (#41422)", 6541422},
    {"Item: ZZOLDDesign: Thundering Skyflare Diamond (#41423)", 6541423},
    {"Item: ZZOLD Design: Insightful Earthsiege Diamond (#41403)", 6541403},
    {"Item: ZZOLD Design: Bracing Earthsiege Diamond (#41404)", 6541404},
    {"Item: ZZOLD Design: Eternal Earthsiege Diamond (#41405)", 6541405},
    {"Item: ZZOLD Design: Powerful Earthsiege Diamond (#41406)", 6541406},
    {"Item: ZZOLD Design: Relentless Earthsiege Diamond (#41407)", 6541407},
    {"Item: ZZOLD Design: Austere Earthsiege Diamond (#41408)", 6541408},
    {"Item: ZZOLD Design: Persistent Earthsiege Diamond (#41409)", 6541409},
    {"Item: ZZOLD Design: Trenchant Earthsiege Diamond (#41410)", 6541410},
    {"Item: ZZOLD Design: Invigorating Earthsiege Diamond (#41411)", 6541411},
    {"Item: ZZOLD Design: Beaming Earthsiege Diamond (#41412)", 6541412},
    {"Item: ZZOLD Design: Revitalizing Skyflare Diamond (#41413)", 6541413},
    {"Item: Pattern: Red Lumberjack Shirt (#42172)", 6542172},
    {"Item: Pattern: Blue Lumberjack Shirt (#42173)", 6542173},
    {"Item: Pattern: Yellow Lumberjack Shirt (#42174)", 6542174},
    {"Item: Pattern: Green Lumberjack Shirt (#42175)", 6542175},
    {"Item: Pattern: Red Workman's Shirt (#42177)", 6542177},
    {"Item: Pattern: Blue Workman's Shirt (#42176)", 6542176},
    {"Item: Pattern: Rustic Workman's Shirt (#42178)", 6542178},
    {"Item: Pattern: Green Workman's Shirt (#42179)", 6542179},
    {"Item: Pattern: Moonshroud (#42181)", 6542181},
    {"Item: Pattern: Ebonweave (#42180)", 6542180},
    {"Item: Pattern: Spellweave (#42182)", 6542182},
    {"Item: Pattern: Abyssal Bag (#42183)", 6542183},
    {"Item: Pattern: Glacial Bag (#42184)", 6542184},
    {"Item: Pattern: Mysterious Bag (#42185)", 6542185},
    {"Item: Pattern: Frostweave Bag (#42186)", 6542186},
    {"Item: Pattern: Brilliant Spellthread (#42187)", 6542187},
    {"Item: Pattern: Sapphire Spellthread (#42188)", 6542188},
    {"Item: Pattern: Wispcloak (#42189)", 6542189},
    {"Item: Pattern: Deathchill Cloak (#42190)", 6542190},
    {"Item: Pattern: Hat of Wintry Doom (#42191)", 6542191},
    {"Item: Pattern: Silky Iceshard Boots (#42192)", 6542192},
    {"Item: Pattern: Glacial Cord (#42193)", 6542193},
    {"Item: Pattern: Frostmoon Pants (#42194)", 6542194},
    {"Item: Pattern: Light Blessed Mittens (#42195)", 6542195},
    {"Item: Pattern: Aurora Slippers (#42196)", 6542196},
    {"Item: Pattern: Moonshroud Robe (#42197)", 6542197},
    {"Item: Pattern: Moonshroud Gloves (#42198)", 6542198},
    {"Item: Pattern: Ebonweave Robe (#42199)", 6542199},
    {"Item: Pattern: Ebonweave Gloves (#42200)", 6542200},
    {"Item: Pattern: Spellweave Robe (#42201)", 6542201},
    {"Item: Pattern: Spellweave Gloves (#42202)", 6542202},
    {"Item: Design: Bold Dragon's Eye (#42298)", 6542298},
    {"Item: Design: Delicate Dragon's Eye (#42301)", 6542301},
    {"Item: Design: Runed Dragon's Eye (#42309)", 6542309},
    {"Item: Design: Bright Dragon's Eye (#42299)", 6542299},
    {"Item: Design: Subtle Dragon's Eye (#42314)", 6542314},
    {"Item: Design: Flashing Dragon's Eye (#42302)", 6542302},
    {"Item: Design: Brilliant Dragon's Eye (#42300)", 6542300},
    {"Item: Design: Fractured Dragon's Eye (#42303)", 6542303},
    {"Item: Design: Lustrous Dragon's Eye (#42304)", 6542304},
    {"Item: Design: Mystic Dragon's Eye (#42305)", 6542305},
    {"Item: Design: Precise Dragon's Eye (#42306)", 6542306},
    {"Item: Design: Quick Dragon's Eye (#42307)", 6542307},
    {"Item: Design: Rigid Dragon's Eye (#42308)", 6542308},
    {"Item: Design: Smooth Dragon's Eye (#42310)", 6542310},
    {"Item: Design: Solid Dragon's Eye (#42311)", 6542311},
    {"Item: Design: Sparkling Dragon's Eye (#42312)", 6542312},
    {"Item: Design: Stormy Dragon's Eye (#42313)", 6542313},
    {"Item: Design: Thick Dragon's Eye (#42315)", 6542315},
    {"Item: Design: Titanium Impact Band (#42648)", 6542648},
    {"Item: Design: Titanium Earthguard Ring (#42649)", 6542649},
    {"Item: Design: Titanium Spellshock Ring (#42650)", 6542650},
    {"Item: Design: Titanium Impact Choker (#42651)", 6542651},
    {"Item: Design: Titanium Earthguard Chain (#42652)", 6542652},
    {"Item: Design: Titanium Spellshock Necklace (#42653)", 6542653},
    {"Item: Recipe: Fish Feast (#43017)", 6543017},
    {"Item: Recipe: Spicy Fried Herring (#43027)", 6543027},
    {"Item: Recipe: Rhinolicious Wormsteak (#43028)", 6543028},
    {"Item: Recipe: Critter Bites (#43029)", 6543029},
    {"Item: Recipe: Hearty Rhino (#43030)", 6543030},
    {"Item: Recipe: Snapper Extreme (#43031)", 6543031},
    {"Item: Recipe: Blackened Worg Steak (#43032)", 6543032},
    {"Item: Recipe: Cuttlesteak (#43033)", 6543033},
    {"Item: Recipe: Spiced Mammoth Treats (#43034)", 6543034},
    {"Item: Recipe: Blackened Dragonfin (#43035)", 6543035},
    {"Item: Recipe: Dragonfin Filet (#43036)", 6543036},
    {"Item: Recipe: Tracker Snacks (#43037)", 6543037},
    {"Item: Pattern: Fur Lining - Fire Resist (#44559)", 6544559},
    {"Item: Pattern: Fur Lining - Frost Resist (#44560)", 6544560},
    {"Item: Pattern: Fur Lining - Shadow Resist (#44561)", 6544561},
    {"Item: Pattern: Fur Lining - Nature Resist  (#44562)", 6544562},
    {"Item: Pattern: Fur Lining - Arcane Resist (#44563)", 6544563},
    {"Item: Design: Ring of Earthen Might (#43317)", 6543317},
    {"Item: Design: Ring of Scarlet Shadows (#43318)", 6543318},
    {"Item: Design: Windfire Band (#43319)", 6543319},
    {"Item: Design: Ring of Northern Tears (#43320)", 6543320},
    {"Item: Design: Savage Titanium Ring (#43485)", 6543485},
    {"Item: Design: Savage Titanium Band (#43497)", 6543497},
    {"Item: Recipe: Tasty Cupcake (#43507)", 6543507},
    {"Item: Recipe: Last Week's Mammoth (#43508)", 6543508},
    {"Item: Recipe: Bad Clams (#43509)", 6543509},
    {"Item: Recipe: Haunted Herring (#43510)", 6543510},
    {"Item: Recipe: Gigantic Feast (#43505)", 6543505},
    {"Item: Recipe: Small Feast (#43506)", 6543506},
    {"Item: Design: Titanium Frostguard Ring (#43597)", 6543597},
    {"Item: A Guide to Northern Cloth Scavenging (#43876)", 6543876},
    {"Item: Formula: Enchant Weapon - Accuracy (#44496)", 6544496},
    {"Item: Formula: Enchant Weapon - Berserking (#44492)", 6544492},
    {"Item: Formula: Enchant Weapon - Black Magic (#44495)", 6544495},
    {"Item: Pattern: Dragonscale Ammo Pouch (#44511)", 6544511},
    {"Item: Pattern: Nerubian Reinforced Quiver (#44512)", 6544512},
    {"Item: Formula: Enchant 2H Weapon - Massacre (#44483)", 6544483},
    {"Item: Formula: Enchant Chest - Powerful Stats (#44489)", 6544489},
    {"Item: Pattern: Eviscerator's Facemask (#44513)", 6544513},
    {"Item: Pattern: Eviscerator's Shoulderpads (#44514)", 6544514},
    {"Item: Pattern: Eviscerator's Chestguard (#44515)", 6544515},
    {"Item: Pattern: Eviscerator's Bindings (#44516)", 6544516},
    {"Item: Pattern: Eviscerator's Gauntlets (#44517)", 6544517},
    {"Item: Pattern: Eviscerator's Waistguard (#44518)", 6544518},
    {"Item: Formula: Enchant Weapon - Superior Potency (#44486)", 6544486},
    {"Item: Pattern: Eviscerator's Legguards (#44519)", 6544519},
    {"Item: Pattern: Eviscerator's Treads (#44520)", 6544520},
    {"Item: Formula: Enchant Weapon - Mighty Spellpower (#44487)", 6544487},
    {"Item: Pattern: Overcast Headguard (#44521)", 6544521},
    {"Item: Pattern: Overcast Spaulders (#44522)", 6544522},
    {"Item: Pattern: Overcast Chestguard (#44523)", 6544523},
    {"Item: Pattern: Overcast Bracers (#44524)", 6544524},
    {"Item: Pattern: Overcast Handwraps (#44525)", 6544525},
    {"Item: Pattern: Overcast Belt (#44526)", 6544526},
    {"Item: Pattern: Overcast Leggings (#44527)", 6544527},
    {"Item: Pattern: Overcast Boots (#44528)", 6544528},
    {"Item: Pattern: Swiftarrow Helm (#44530)", 6544530},
    {"Item: Pattern: Swiftarrow Shoulderguards (#44531)", 6544531},
    {"Item: Pattern: Swiftarrow Hauberk (#44532)", 6544532},
    {"Item: Pattern: Swiftarrow Bracers (#44533)", 6544533},
    {"Item: Pattern: Swiftarrow Gauntlets (#44534)", 6544534},
    {"Item: Pattern: Swiftarrow Belt (#44535)", 6544535},
    {"Item: Pattern: Swiftarrow Leggings (#44536)", 6544536},
    {"Item: Pattern: Swiftarrow Boots (#44537)", 6544537},
    {"Item: Pattern: Stormhide Crown (#44538)", 6544538},
    {"Item: Pattern: Stormhide Shoulders (#44539)", 6544539},
    {"Item: Pattern: Stormhide Hauberk (#44540)", 6544540},
    {"Item: Pattern: Stormhide Wristguards (#44541)", 6544541},
    {"Item: Pattern: Stormhide Grips (#44542)", 6544542},
    {"Item: Pattern: Stormhide Belt (#44543)", 6544543},
    {"Item: Pattern: Stormhide Legguards (#44544)", 6544544},
    {"Item: Pattern: Stormhide Stompers (#44545)", 6544545},
    {"Item: Pattern: Giantmaim Legguards (#44546)", 6544546},
    {"Item: Pattern: Giantmaim Bracers (#44547)", 6544547},
    {"Item: Pattern: Revenant's Breastplate (#44548)", 6544548},
    {"Item: Pattern: Revenant's Treads (#44549)", 6544549},
    {"Item: Pattern: Trollwoven Spaulders (#44550)", 6544550},
    {"Item: Pattern: Trollwoven Girdle (#44551)", 6544551},
    {"Item: Pattern: Earthgiving Legguards (#44552)", 6544552},
    {"Item: Pattern: Earthgiving Boots (#44553)", 6544553},
    {"Item: Formula: Enchant Boots - Greater Assault (#44490)", 6544490},
    {"Item: Formula: Enchant Bracer - Superior Spellpower (#44498)", 6544498},
    {"Item: Schematic: Mechano-hog (#44502)", 6544502},
    {"Item: Schematic: Mekgineer's Chopper (#44503)", 6544503},
    {"Item: Pattern: Polar Vest (#44584)", 6544584},
    {"Item: Pattern: Polar Cord (#44585)", 6544585},
    {"Item: Pattern: Polar Boots (#44586)", 6544586},
    {"Item: Pattern: Icy Scale Chestguard (#44587)", 6544587},
    {"Item: Pattern: Icy Scale Belt (#44588)", 6544588},
    {"Item: Pattern: Icy Scale Boots (#44589)", 6544589},
    {"Item: Tome of Dalaran Intellect (#44602)", 6544602},
    {"Item: Tome of Polymorph: Black Cat (#44709)", 6544709},
    {"Item: Tome of Dalaran Brilliance (#44714)", 6544714},
    {"Item: Tome of Polymorph: Rabbit (#44793)", 6544793},
    {"Item: Tome of Polymorph: Turkey (#44811)", 6544811},
    {"Item: Recipe: Pumpkin Pie (#44862)", 6544862},
    {"Item: Recipe: Slow-Roasted Turkey (#44861)", 6544861},
    {"Item: Recipe: Cranberry Chutney (#44858)", 6544858},
    {"Item: Recipe: Spice Bread Stuffing (#44860)", 6544860},
    {"Item: Recipe: Candied Sweet Potato (#44859)", 6544859},
    {"Item: Pattern: Windripper Boots (#44932)", 6544932},
    {"Item: Pattern: Windripper Leggings (#44933)", 6544933},
    {"Item: Plans: Titanium Plating (#44937)", 6544937},
    {"Item: Formula: Enchant Bracer - Major Stamina (#44944)", 6544944},
    {"Item: Formula: Enchant Weapon - Titanguard (#44945)", 6544945},
    {"Item: Recipe: Worg Tartare (#44954)", 6544954},
    {"Item: Formula: Enchant Staff - Greater Spellpower (#45059)", 6545059},
    {"Item: Plans: Belt of the Titans (#45088)", 6545088},
    {"Item: Plans: Battlelord's Plate Boots (#45089)", 6545089},
    {"Item: Plans: Plate Girdle of Righteousness (#45090)", 6545090},
    {"Item: Plans: Treads of Destiny (#45091)", 6545091},
    {"Item: Plans: Indestructible Plate Girdle (#45092)", 6545092},
    {"Item: Plans: Spiked Deathdealers (#45093)", 6545093},
    {"Item: Pattern: Belt of Dragons (#45094)", 6545094},
    {"Item: Pattern: Boots of Living Scale (#45095)", 6545095},
    {"Item: Pattern: Blue Belt of Chaos (#45096)", 6545096},
    {"Item: Pattern: Lightning Grounded Boots (#45097)", 6545097},
    {"Item: Pattern: Death-warmed Belt (#45098)", 6545098},
    {"Item: Pattern: Footpads of Silence (#45099)", 6545099},
    {"Item: Pattern: Belt of Arctic Life (#45100)", 6545100},
    {"Item: Pattern: Boots of Wintry Endurance (#45101)", 6545101},
    {"Item: Pattern: Sash of Ancient Power (#45102)", 6545102},
    {"Item: Pattern: Spellslinger's Slippers (#45103)", 6545103},
    {"Item: Pattern: Cord of the White Dawn (#45104)", 6545104},
    {"Item: Pattern: Savior's Slippers (#45105)", 6545105},
    {"Item: Pattern: Emerald Bag (#45774)", 6545774},
    {"Item: Technique: Rituals of the New Moon (#46108)", 6546108},
    {"Item: Formula: Enchant Weapon - Blade Ward (#46027)", 6546027},
    {"Item: Formula: Enchant Weapon - Blood Draining (#46348)", 6546348},
    {"Item: Recipe: Bread of the Dead (#46710)", 6546710},
    {"Item: Recipe: Candied Sweet Potato (#46806)", 6546806},
    {"Item: Recipe: Cranberry Chutney (#46805)", 6546805},
    {"Item: Recipe: Pumpkin Pie (#46804)", 6546804},
    {"Item: Recipe: Slow-Roasted Turkey (#46807)", 6546807},
    {"Item: Recipe: Spice Bread Stuffing (#46803)", 6546803},
    {"Item: Design: Enduring Eye of Zul (#46897)", 6546897},
    {"Item: Design: Steady Eye of Zul (#46898)", 6546898},
    {"Item: Design: Vivid Eye of Zul (#46899)", 6546899},
    {"Item: Design: Dazzling Eye of Zul (#46900)", 6546900},
    {"Item: Design: Jagged Eye of Zul (#46901)", 6546901},
    {"Item: Design: Timeless Eye of Zul (#46902)", 6546902},
    {"Item: Design: Seer's Eye of Zul (#46903)", 6546903},
    {"Item: Design: Forceful Eye of Zul (#46904)", 6546904},
    {"Item: Design: Misty Eye of Zul (#46905)", 6546905},
    {"Item: Design: Sundered Eye of Zul (#46906)", 6546906},
    {"Item: Design: Shining Eye of Zul (#46907)", 6546907},
    {"Item: Design: Tense Eye of Zul (#46908)", 6546908},
    {"Item: Design: Lambent Eye of Zul (#46909)", 6546909},
    {"Item: Design: Intricate Eye of Zul (#46910)", 6546910},
    {"Item: Design: Radiant Eye of Zul (#46911)", 6546911},
    {"Item: Design: Energized Eye of Zul (#46912)", 6546912},
    {"Item: Design: Shattered Eye of Zul (#46913)", 6546913},
    {"Item: Design: Opaque Eye of Zul (#46914)", 6546914},
    {"Item: Design: Turbid Eye of Zul (#46915)", 6546915},
    {"Item: Design: Runed Cardinal Ruby (#46916)", 6546916},
    {"Item: Design: Bold Cardinal Ruby (#46917)", 6546917},
    {"Item: Design: Delicate Cardinal Ruby (#46918)", 6546918},
    {"Item: Design: Bright Cardinal Ruby (#46919)", 6546919},
    {"Item: Design: Precise Cardinal Ruby (#46920)", 6546920},
    {"Item: Design: Fractured Cardinal Ruby (#46921)", 6546921},
    {"Item: Design: Subtle Cardinal Ruby (#46922)", 6546922},
    {"Item: Design: Flashing Cardinal Ruby (#46923)", 6546923},
    {"Item: Design: Solid Majestic Zircon (#46924)", 6546924},
    {"Item: Design: Sparkling Majestic Zircon (#46925)", 6546925},
    {"Item: Design: Stormy Majestic Zircon (#46926)", 6546926},
    {"Item: Design: Lustrous Majestic Zircon (#46927)", 6546927},
    {"Item: Design: Rigid King's Amber (#46928)", 6546928},
    {"Item: Design: Smooth King's Amber (#46929)", 6546929},
    {"Item: Design: Brilliant King's Amber (#46930)", 6546930},
    {"Item: Design: Thick King's Amber (#46931)", 6546931},
    {"Item: Design: Mystic King's Amber (#46932)", 6546932},
    {"Item: Design: Quick King's Amber (#46933)", 6546933},
    {"Item: Design: Balanced Dreadstone (#46934)", 6546934},
    {"Item: Design: Sovereign Dreadstone (#46935)", 6546935},
    {"Item: Design: Glowing Dreadstone (#46936)", 6546936},
    {"Item: Design: Purified Dreadstone (#46937)", 6546937},
    {"Item: Design: Shifting Dreadstone (#46938)", 6546938},
    {"Item: Design: Royal Dreadstone (#46939)", 6546939},
    {"Item: Design: Regal Dreadstone (#46940)", 6546940},
    {"Item: Design: Defender's Dreadstone (#46941)", 6546941},
    {"Item: Design: Guardian's Dreadstone (#46942)", 6546942},
    {"Item: Design: Mysterious Dreadstone (#46943)", 6546943},
    {"Item: Design: Puissant Dreadstone (#46944)", 6546944},
    {"Item: Design: Infused Dreadstone (#46945)", 6546945},
    {"Item: Design: Tenuous Dreadstone (#46946)", 6546946},
    {"Item: Design: Luminous Ametrine (#46947)", 6546947},
    {"Item: Design: Inscribed Ametrine (#46948)", 6546948},
    {"Item: Design: Deadly Ametrine (#46949)", 6546949},
    {"Item: Design: Potent Ametrine (#46950)", 6546950},
    {"Item: Design: Veiled Ametrine (#46951)", 6546951},
    {"Item: Design: Durable Ametrine (#46952)", 6546952},
    {"Item: Design: Etched Ametrine (#46953)", 6546953},
    {"Item: Design: Pristine Ametrine (#46956)", 6546956},
    {"Item: Design: Reckless Ametrine (#47007)", 6547007},
    {"Item: Design: Glinting Ametrine (#47008)", 6547008},
    {"Item: Design: Accurate Ametrine (#47010)", 6547010},
    {"Item: Design: Wicked Ametrine (#47011)", 6547011},
    {"Item: Design: Glimmering Ametrine (#47012)", 6547012},
    {"Item: Design: Champion's Ametrine (#47015)", 6547015},
    {"Item: Design: Empowered Ametrine (#47016)", 6547016},
    {"Item: Design: Stalwart Ametrine (#47017)", 6547017},
    {"Item: Design: Resplendent Ametrine (#47018)", 6547018},
    {"Item: Design: Fierce Ametrine (#47019)", 6547019},
    {"Item: Design: Deft Ametrine (#47020)", 6547020},
    {"Item: Design: Lucent Ametrine (#47021)", 6547021},
    {"Item: Design: Resolute Ametrine (#47022)", 6547022},
    {"Item: Design: Stark Ametrine (#47023)", 6547023},
    {"Item: Recipe: Flask of the North (#47507)", 6547507},
    {"Item: Pattern: Royal Moonshroud Robe (#47657)", 6547657},
    {"Item: Pattern: Royal Moonshroud Bracers (#47656)", 6547656},
    {"Item: Pattern: Merlin's Robe (#47655)", 6547655},
    {"Item: Pattern: Bejeweled Wizard's Bracers (#47654)", 6547654},
    {"Item: Pattern: Ensorcelled Nerubian Breastplate (#47628)", 6547628},
    {"Item: Pattern: Black Chitin Bracers (#47629)", 6547629},
    {"Item: Pattern: Crusader's Dragonscale Breastplate (#47630)", 6547630},
    {"Item: Pattern: Crusader's Dragonscale Bracers (#47631)", 6547631},
    {"Item: Pattern: Lunar Eclipse Robes (#47632)", 6547632},
    {"Item: Pattern: Moonshadow Armguards (#47633)", 6547633},
    {"Item: Pattern: Knightbane Carapace (#47634)", 6547634},
    {"Item: Pattern: Bracers of Swift Death (#47635)", 6547635},
    {"Item: Plans: Breastplate of the White Knight (#47622)", 6547622},
    {"Item: Plans: Saronite Swordbreakers (#47623)", 6547623},
    {"Item: Plans: Titanium Razorplate (#47624)", 6547624},
    {"Item: Plans: Titanium Spikeguards (#47625)", 6547625},
    {"Item: Plans: Sunforged Breastplate (#47626)", 6547626},
    {"Item: Plans: Sunforged Bracers (#47627)", 6547627},
    {"Item: Plans: Breastplate of the White Knight (#47640)", 6547640},
    {"Item: Plans: Saronite Swordbreakers (#47641)", 6547641},
    {"Item: Plans: Titanium Razorplate (#47644)", 6547644},
    {"Item: Plans: Titanium Spikeguards (#47645)", 6547645},
    {"Item: Plans: Sunforged Breastplate (#47643)", 6547643},
    {"Item: Plans: Sunforged Bracers (#47642)", 6547642},
    {"Item: Pattern: Ensorcelled Nerubian Breastplate (#47650)", 6547650},
    {"Item: Pattern: Black Chitin Bracers (#47646)", 6547646},
    {"Item: Pattern: Crusader's Dragonscale Breastplate (#47649)", 6547649},
    {"Item: Pattern: Bracers of Swift Death (#47647)", 6547647},
    {"Item: Pattern: Lunar Eclipse Robes (#47652)", 6547652},
    {"Item: Pattern: Moonshadow Armguards (#47653)", 6547653},
    {"Item: Pattern: Knightbane Carapace (#47651)", 6547651},
    {"Item: Pattern: Crusader's Dragonscale Bracers (#47648)", 6547648},
    {"Item: Pattern: Royal Moonshroud Robe (#47636)", 6547636},
    {"Item: Pattern: Bejeweled Wizard's Bracers (#47639)", 6547639},
    {"Item: Pattern: Merlin's Robe (#47638)", 6547638},
    {"Item: Pattern: Royal Moonshroud Bracers (#47637)", 6547637},
    {"Item: Schematic: Jeeves (#49050)", 6549050},
    {"Item: Design: Nightmare Tear (#49112)", 6549112},
    {"Item: Pattern: Leggings of Woven Death (#49953)", 6549953},
    {"Item: Pattern: Deathfrost Boots (#49954)", 6549954},
    {"Item: Pattern: Lightweave Leggings (#49955)", 6549955},
    {"Item: Pattern: Sandals of Consecration (#49956)", 6549956},
    {"Item: Pattern: Legwraps of Unleashed Nature (#49957)", 6549957},
    {"Item: Pattern: Blessed Cenarion Boots (#49958)", 6549958},
    {"Item: Pattern: Bladeborn Leggings (#49959)", 6549959},
    {"Item: Pattern: Footpads of Impending Death (#49961)", 6549961},
    {"Item: Pattern: Lightning-Infused Leggings (#49962)", 6549962},
    {"Item: Pattern: Earthsoul Boots (#49963)", 6549963},
    {"Item: Pattern: Draconic Bonesplinter Legguards (#49965)", 6549965},
    {"Item: Pattern: Rock-Steady Treads (#49966)", 6549966},
    {"Item: Plans: Puresteel Legplates (#49969)", 6549969},
    {"Item: Plans: Protectors of Life (#49970)", 6549970},
    {"Item: Plans: Legplates of Painful Death (#49971)", 6549971},
    {"Item: Plans: Hellfrozen Bonegrinders (#49972)", 6549972},
    {"Item: Plans: Pillars of Might (#49973)", 6549973},
    {"Item: Plans: Boots of Kingly Upheaval (#49974)", 6549974},
    {"Item: Technique: Glyph of Rapid Rejuvenation (#50167)", 6550167},
    {"Item: Technique: Glyph of Eternal Water (#50166)", 6550166},
    {"Item: Technique: Glyph of Quick Decay (#50168)", 6550168},
    {"Item: Formula: Enchant Gloves - Angler (#50406)", 6550406},
    {"Item: Plans: Shatter Rounds (#52022)", 6552022},
    {"Item: Plans: Iceblade Arrow (#52023)", 6552023},
    {"Item: Pattern: Frosty Flying Carpet (#54798)", 6554798},
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
    { 600, 6003122 }, // "Codex of Holy Word: Shield III (#3122)"
    { 1094, 6004200 }, // "Grimoire of Immolate III (#4200)"
    { 1122, 6009214 }, // "Grimoire of Inferno (#9214)"
    { 2158, 6002406 }, // "Pattern: Fine Leather Boots (#2406)"
    { 2163, 6002407 }, // "Pattern: White Leather Jerkin (#2407)"
    { 2164, 6002408 }, // "Pattern: Fine Leather Gloves (#2408)"
    { 2169, 6002409 }, // "Pattern: Dark Leather Tunic (#2409)"
    { 2333, 6003396 }, // "Recipe: Elixir of Lesser Agility (#3396)"
    { 2335, 6002555 }, // "Recipe: Swiftness Potion (#2555)"
    { 2389, 6002598 }, // "Pattern: Red Linen Robe (#2598)"
    { 2403, 6002601 }, // "Pattern: Gray Woolen Robe (#2601)"
    { 2542, 6002697 }, // "Recipe: Goretusk Liver Pie (#2697)"
    { 2543, 6000728 }, // "Recipe: Westfall Stew (#728)"
    { 2545, 6002698 }, // "Recipe: Cooked Crab Claw (#2698)"
    { 2547, 6002699 }, // "Recipe: Redridge Goulash (#2699)"
    { 2548, 6002700 }, // "Recipe: Succulent Pork Ribs (#2700)"
    { 2549, 6002701 }, // "Recipe: Seasoned Wolf Kabob (#2701)"
    { 2667, 6002881 }, // "Plans: Runed Copper Breastplate (#2881)"
    { 2673, 6005578 }, // "Plans: Silvered Bronze Breastplate (#5578)"
    { 2795, 6002889 }, // "Recipe: Beer Basted Boar Ribs (#2889)"
    { 3172, 6003393 }, // "Recipe: Minor Magic Resistance Potion (#3393)"
    { 3174, 6003394 }, // "Recipe: Potion of Curing (#3394)"
    { 3175, 6003395 }, // "Recipe: Limited Invulnerability Potion (#3395)"
    { 3188, 6006211 }, // "Recipe: Elixir of Ogre's Strength (#6211)"
    { 3230, 6002553 }, // "Recipe: Elixir of Minor Agility (#2553)"
    { 3295, 6002883 }, // "Plans: Deadly Bronze Poniard (#2883)"
    { 3297, 6003608 }, // "Plans: Mighty Iron Hammer (#3608)"
    { 3321, 6003609 }, // "Plans: Copper Chain Vest (#3609)"
    { 3325, 6003610 }, // "Plans: Gemmed Copper Gauntlets (#3610)"
    { 3330, 6002882 }, // "Plans: Silvered Bronze Shoulders (#2882)"
    { 3334, 6003611 }, // "Plans: Green Iron Boots (#3611)"
    { 3336, 6003612 }, // "Plans: Green Iron Gauntlets (#3612)"
    { 3370, 6003678 }, // "Recipe: Crocolisk Steak (#3678)"
    { 3371, 6003679 }, // "Recipe: Blood Sausage (#3679)"
    { 3372, 6003680 }, // "Recipe: Murloc Fin Soup (#3680)"
    { 3373, 6003681 }, // "Recipe: Crocolisk Gumbo (#3681)"
    { 3376, 6003682 }, // "Recipe: Curiously Tasty Omelet (#3682)"
    { 3377, 6003683 }, // "Recipe: Gooey Spider Cake (#3683)"
    { 3397, 6003734 }, // "Recipe: Big Bear Steak (#3734)"
    { 3398, 6003735 }, // "Recipe: Hot Lion Chops (#3735)"
    { 3399, 6003736 }, // "Recipe: Tasty Lion Steak (#3736)"
    { 3400, 6003737 }, // "Recipe: Soothing Turtle Bisque (#3737)"
    { 3449, 6006068 }, // "Recipe: Shadow Oil (#6068)"
    { 3450, 6003830 }, // "Recipe: Elixir of Fortitude (#3830)"
    { 3451, 6003831 }, // "Recipe: Major Troll's Blood Elixir (#3831)"
    { 3453, 6003832 }, // "Recipe: Elixir of Detect Lesser Invisibility (#3832)"
    { 3454, 6014634 }, // "Recipe: Frost Oil (#14634)"
    { 3492, 6012162 }, // "Plans: Hardened Iron Shortsword (#12162)"
    { 3493, 6003866 }, // "Plans: Jade Serpentblade (#3866)"
    { 3494, 6010858 }, // "Plans: Solid Iron Maul (#10858)"
    { 3495, 6003867 }, // "Plans: Golden Iron Destroyer (#3867)"
    { 3496, 6012163 }, // "Plans: Moonsteel Broadsword (#12163)"
    { 3497, 6003868 }, // "Plans: Frost Tiger Blade (#3868)"
    { 3498, 6012164 }, // "Plans: Massive Iron Axe (#12164)"
    { 3500, 6003869 }, // "Plans: Shadow Crescent Axe (#3869)"
    { 3503, 6006047 }, // "Plans: Golden Scale Coif (#6047)"
    { 3504, 6003870 }, // "Plans: Green Iron Shoulders (#3870)"
    { 3505, 6003871 }, // "Plans: Golden Scale Shoulders (#3871)"
    { 3507, 6003872 }, // "Plans: Golden Scale Leggings (#3872)"
    { 3511, 6003873 }, // "Plans: Golden Scale Cuirass (#3873)"
    { 3513, 6003874 }, // "Plans: Polished Steel Boots (#3874)"
    { 3515, 6003875 }, // "Plans: Golden Scale Boots (#3875)"
    { 3758, 6004292 }, // "Pattern: Green Woolen Bag (#4292)"
    { 3762, 6004293 }, // "Pattern: Hillman's Leather Vest (#4293)"
    { 3765, 6007360 }, // "Pattern: Dark Leather Gloves (#7360)"
    { 3767, 6004294 }, // "Pattern: Hillman's Belt (#4294)"
    { 3769, 6004296 }, // "Pattern: Dark Leather Shoulders (#4296)"
    { 3771, 6004297 }, // "Pattern: Barbaric Gloves (#4297)"
    { 3772, 6007613 }, // "Pattern: Green Leather Armor (#7613)"
    { 3773, 6004299 }, // "Pattern: Guardian Armor (#4299)"
    { 3775, 6004298 }, // "Pattern: Guardian Belt (#4298)"
    { 3777, 6004300 }, // "Pattern: Guardian Leather Bracers (#4300)"
    { 3778, 6014635 }, // "Pattern: Gem-studded Leather Belt (#14635)"
    { 3779, 6004301 }, // "Pattern: Barbaric Belt (#4301)"
    { 3844, 6004346 }, // "Pattern: Heavy Woolen Cloak (#4346)"
    { 3847, 6004345 }, // "Pattern: Red Woolen Boots (#4345)"
    { 3849, 6004347 }, // "Pattern: Reinforced Woolen Shoulders (#4347)"
    { 3851, 6004349 }, // "Pattern: Phoenix Pants (#4349)"
    { 3854, 6007114 }, // "Pattern: Azure Silk Gloves (#7114)"
    { 3856, 6004350 }, // "Pattern: Spider Silk Slippers (#4350)"
    { 3857, 6014630 }, // "Pattern: Enchanter's Cowl (#14630)"
    { 3858, 6004351 }, // "Pattern: Shadow Hood (#4351)"
    { 3860, 6004352 }, // "Pattern: Boots of the Enchanter (#4352)"
    { 3862, 6004355 }, // "Pattern: Icy Cloak (#4355)"
    { 3863, 6004353 }, // "Pattern: Spider Belt (#4353)"
    { 3864, 6004356 }, // "Pattern: Star Belt (#4356)"
    { 3868, 6004348 }, // "Pattern: Phoenix Gloves (#4348)"
    { 3869, 6014627 }, // "Pattern: Bright Yellow Shirt (#14627)"
    { 3870, 6006401 }, // "Pattern: Dark Silk Shirt (#6401)"
    { 3872, 6004354 }, // "Pattern: Rich Purple Silk Shirt (#4354)"
    { 3873, 6010728 }, // "Pattern: Black Swashbuckler's Shirt (#10728)"
    { 3928, 6004408 }, // "Schematic: Mechanical Squirrel Box (#4408)"
    { 3933, 6004409 }, // "Schematic: Small Seaforium Charge (#4409)"
    { 3939, 6013309 }, // "Schematic: Lovingly Crafted Boomstick (#13309)"
    { 3940, 6004410 }, // "Schematic: Shadow Goggles (#4410)"
    { 3944, 6004411 }, // "Schematic: Flame Deflector (#4411)"
    { 3952, 6014639 }, // "Schematic: Minor Recombobulator (#14639)"
    { 3954, 6004412 }, // "Schematic: Moonsight Rifle (#4412)"
    { 3957, 6013308 }, // "Schematic: Ice Deflector (#13308)"
    { 3959, 6004413 }, // "Schematic: Discombobulator Ray (#4413)"
    { 3960, 6004414 }, // "Schematic: Portable Bronze Mortar (#4414)"
    { 3966, 6004415 }, // "Schematic: Craftsman's Monocle (#4415)"
    { 3968, 6004416 }, // "Schematic: Goblin Land Mine (#4416)"
    { 3969, 6013311 }, // "Schematic: Mechanical Dragonling (#13311)"
    { 3971, 6007742 }, // "Schematic: Gnomish Cloaking Device (#7742)"
    { 3972, 6004417 }, // "Schematic: Large Seaforium Charge (#4417)"
    { 3979, 6013310 }, // "Schematic: Accurate Scope (#13310)"
    { 4094, 6004609 }, // "Recipe: Barbecued Buzzard Wing (#4609)"
    { 4096, 6013287 }, // "Pattern: Raptor Hide Harness (#13287)"
    { 4097, 6013288 }, // "Pattern: Raptor Hide Belt (#13288)"
    { 4508, 6004597 }, // "Recipe: Discolored Healing Potion (#4597)"
    { 4942, 6004624 }, // "Recipe: Lesser Stoneshield Potion (#4624)"
    { 5244, 6005083 }, // "Pattern: Kodo Hide Bag (#5083)"
    { 6063, 6008993 }, // "Codex of Shadow Protection II (#8993)"
    { 6412, 6005482 }, // "Recipe: Kaldorei Spider Kabob (#5482)"
    { 6413, 6005483 }, // "Recipe: Scorpid Surprise (#5483)"
    { 6414, 6005484 }, // "Recipe: Roasted Kodo Meat (#5484)"
    { 6415, 6005485 }, // "Recipe: Fillet of Frenzy (#5485)"
    { 6416, 6005486 }, // "Recipe: Strider Stew (#5486)"
    { 6417, 6005487 }, // "Recipe: Dig Rat Stew (#5487)"
    { 6418, 6005488 }, // "Recipe: Crispy Lizard Tail (#5488)"
    { 6419, 6005489 }, // "Recipe: Lean Venison (#5489)"
    { 6501, 6005528 }, // "Recipe: Clam Chowder (#5528)"
    { 6518, 6005543 }, // "Plans: Iridescent Hammer (#5543)"
    { 6617, 6005640 }, // "Recipe: Rage Potion (#5640)"
    { 6618, 6005643 }, // "Recipe: Great Rage Potion (#5643)"
    { 6624, 6005642 }, // "Recipe: Free Action Potion (#5642)"
    { 6686, 6005771 }, // "Pattern: Red Linen Bag (#5771)"
    { 6688, 6005772 }, // "Pattern: Red Woolen Bag (#5772)"
    { 6692, 6005773 }, // "Pattern: Robes of Arcana (#5773)"
    { 6693, 6005774 }, // "Pattern: Green Silk Pack (#5774)"
    { 6695, 6005775 }, // "Pattern: Black Silk Pack (#5775)"
    { 6702, 6005786 }, // "Pattern: Murloc Scale Belt (#5786)"
    { 6703, 6005787 }, // "Pattern: Murloc Scale Breastplate (#5787)"
    { 6704, 6005788 }, // "Pattern: Thick Murloc Armor (#5788)"
    { 6705, 6005789 }, // "Pattern: Murloc Scale Bracers (#5789)"
    { 7133, 6005972 }, // "Pattern: Fine Leather Pants (#5972)"
    { 7149, 6005973 }, // "Pattern: Barbaric Leggings (#5973)"
    { 7153, 6005974 }, // "Pattern: Guardian Cloak (#5974)"
    { 7213, 6006039 }, // "Recipe: Giant Clam Scorcho (#6039)"
    { 7221, 6006044 }, // "Plans: Iron Shield Spike (#6044)"
    { 7222, 6006045 }, // "Plans: Iron Counterweight (#6045)"
    { 7224, 6006046 }, // "Plans: Steel Weapon Chain (#6046)"
    { 7255, 6006053 }, // "Recipe: Holy Protection Potion (#6053)"
    { 7256, 6006054 }, // "Recipe: Shadow Protection Potion (#6054)"
    { 7257, 6006055 }, // "Recipe: Fire Protection Potion (#6055)"
    { 7258, 6006056 }, // "Recipe: Frost Protection Potion (#6056)"
    { 7259, 6006057 }, // "Recipe: Nature Protection Potion (#6057)"
    { 7443, 6006342 }, // "Formula: Enchant Chest - Minor Mana (#6342)"
    { 7629, 6006271 }, // "Pattern: Red Linen Vest (#6271)"
    { 7630, 6006270 }, // "Pattern: Blue Linen Vest (#6270)"
    { 7633, 6006272 }, // "Pattern: Blue Linen Robe (#6272)"
    { 7639, 6006274 }, // "Pattern: Blue Overalls (#6274)"
    { 7643, 6006275 }, // "Pattern: Greater Adept's Robe (#6275)"
    { 7751, 6006325 }, // "Recipe: Brilliant Smallfish (#6325)"
    { 7752, 6006326 }, // "Recipe: Slitherskin Mackerel (#6326)"
    { 7753, 6006328 }, // "Recipe: Longjaw Mud Snapper (#6328)"
    { 7754, 6006329 }, // "Recipe: Loch Frenzy Delight (#6329)"
    { 7755, 6006330 }, // "Recipe: Bristle Whisker Catfish (#6330)"
    { 7766, 6006344 }, // "Formula: Enchant Bracer - Minor Spirit (#6344)"
    { 7776, 6006346 }, // "Formula: Enchant Chest - Lesser Mana (#6346)"
    { 7782, 6006347 }, // "Formula: Enchant Bracer - Minor Strength (#6347)"
    { 7786, 6006348 }, // "Formula: Enchant Weapon - Minor Beastslayer (#6348)"
    { 7793, 6006349 }, // "Formula: Enchant 2H Weapon - Lesser Intellect (#6349)"
    { 7827, 6006368 }, // "Recipe: Rainbow Fin Albacore (#6368)"
    { 7828, 6006369 }, // "Recipe: Rockscale Cod (#6369)"
    { 7859, 6006375 }, // "Formula: Enchant Bracer - Lesser Spirit (#6375)"
    { 7867, 6006377 }, // "Formula: Enchant Boots - Minor Agility (#6377)"
    { 7892, 6006390 }, // "Pattern: Stylish Blue Shirt (#6390)"
    { 7893, 6006391 }, // "Pattern: Stylish Green Shirt (#6391)"
    { 7929, 6016112 }, // "Manual: Heavy Silk Bandage (#16112)"
    { 7935, 6006454 }, // "Manual: Strong Anti-Venom (#6454)"
    { 7953, 6006474 }, // "Pattern: Deviate Scale Cloak (#6474)"
    { 7954, 6006475 }, // "Pattern: Deviate Scale Gloves (#6475)"
    { 7955, 6006476 }, // "Pattern: Deviate Scale Belt (#6476)"
    { 8238, 6006661 }, // "Recipe: Savory Deviate Delight (#6661)"
    { 8240, 6006663 }, // "Recipe: Elixir of Giant Growth (#6663)"
    { 8243, 6006672 }, // "Schematic: Flash Bomb (#6672)"
    { 8322, 6006710 }, // "Pattern: Moonglow Vest (#6710)"
    { 8339, 6006716 }, // "Schematic: EZ-Thro Dynamite (#6716)"
    { 8367, 6006735 }, // "Plans: Ironforge Breastplate (#6735)"
    { 8607, 6006892 }, // "Recipe: Smoked Bear Meat (#6892)"
    { 8780, 6007092 }, // "Pattern: Hands of Darkness (#7092)"
    { 8782, 6007091 }, // "Pattern: Truefaith Gloves (#7091)"
    { 8784, 6007090 }, // "Pattern: Green Silk Armor (#7090)"
    { 8786, 6007089 }, // "Pattern: Azure Silk Cloak (#7089)"
    { 8789, 6007087 }, // "Pattern: Crimson Silk Cloak (#7087)"
    { 8793, 6007084 }, // "Pattern: Crimson Silk Shoulders (#7084)"
    { 8795, 6007085 }, // "Pattern: Azure Shoulders (#7085)"
    { 8797, 6007086 }, // "Pattern: Earthen Silk Belt (#7086)"
    { 8802, 6007088 }, // "Pattern: Crimson Silk Robe (#7088)"
    { 9064, 6007288 }, // "Pattern: Rugged Leather Pants (#7288)"
    { 9070, 6007289 }, // "Pattern: Black Whelp Cloak (#7289)"
    { 9072, 6007290 }, // "Pattern: Red Whelp Gloves (#7290)"
    { 9146, 6007361 }, // "Pattern: Herbalist's Gloves (#7361)"
    { 9147, 6007362 }, // "Pattern: Earthen Leather Shoulders (#7362)"
    { 9148, 6007363 }, // "Pattern: Pilferer's Gloves (#7363)"
    { 9149, 6007364 }, // "Pattern: Heavy Earthen Gloves (#7364)"
    { 9195, 6007449 }, // "Pattern: Dusky Leather Leggings (#7449)"
    { 9197, 6007450 }, // "Pattern: Green Whelp Armor (#7450)"
    { 9202, 6007451 }, // "Pattern: Green Whelp Bracers (#7451)"
    { 9207, 6007452 }, // "Pattern: Dusky Boots (#7452)"
    { 9208, 6007453 }, // "Pattern: Swift Boots (#7453)"
    { 9269, 6007560 }, // "Schematic: Gnomish Universal Remote (#7560)"
    { 9273, 6007561 }, // "Schematic: Goblin Jumper Cables (#7561)"
    { 9513, 6007678 }, // "Recipe: Thistle Tea (#7678)"
    { 9811, 6007978 }, // "Plans: Barbaric Iron Shoulders (#7978)"
    { 9813, 6007979 }, // "Plans: Barbaric Iron Breastplate (#7979)"
    { 9814, 6007980 }, // "Plans: Barbaric Iron Helm (#7980)"
    { 9818, 6007981 }, // "Plans: Barbaric Iron Boots (#7981)"
    { 9820, 6007982 }, // "Plans: Barbaric Iron Gloves (#7982)"
    { 9933, 6007975 }, // "Plans: Heavy Mithril Pants (#7975)"
    { 9937, 6007995 }, // "Plans: Mithril Scale Bracers (#7995)"
    { 9939, 6007976 }, // "Plans: Mithril Shield Spike (#7976)"
    { 9945, 6007983 }, // "Plans: Ornate Mithril Pants (#7983)"
    { 9950, 6007984 }, // "Plans: Ornate Mithril Gloves (#7984)"
    { 9952, 6007985 }, // "Plans: Ornate Mithril Shoulder (#7985)"
    { 9964, 6007989 }, // "Plans: Mithril Spurs (#7989)"
    { 9966, 6007991 }, // "Plans: Mithril Scale Shoulders (#7991)"
    { 9970, 6007990 }, // "Plans: Heavy Mithril Helm (#7990)"
    { 9995, 6007992 }, // "Plans: Blue Glittering Axe (#7992)"
    { 9997, 6008029 }, // "Plans: Wicked Mithril Blade (#8029)"
    { 10005, 6007993 }, // "Plans: Dazzling Mithril Rapier (#7993)"
    { 10009, 6008028 }, // "Plans: Runed Mithril Hammer (#8028)"
    { 10013, 6008030 }, // "Plans: Ebon Shiv (#8030)"
    { 10490, 6008384 }, // "Pattern: Comfortable Leather Hat (#8384)"
    { 10509, 6008385 }, // "Pattern: Turtle Scale Gloves (#8385)"
    { 10516, 6008409 }, // "Pattern: Nightscape Shoulders (#8409)"
    { 10520, 6008386 }, // "Pattern: Big Voodoo Robe (#8386)"
    { 10525, 6008395 }, // "Pattern: Tough Scorpid Breastplate (#8395)"
    { 10529, 6008403 }, // "Pattern: Wild Leather Shoulders (#8403)"
    { 10531, 6008387 }, // "Pattern: Big Voodoo Mask (#8387)"
    { 10533, 6008397 }, // "Pattern: Tough Scorpid Bracers (#8397)"
    { 10542, 6008398 }, // "Pattern: Tough Scorpid Gloves (#8398)"
    { 10544, 6008404 }, // "Pattern: Wild Leather Vest (#8404)"
    { 10546, 6008405 }, // "Pattern: Wild Leather Helmet (#8405)"
    { 10554, 6008399 }, // "Pattern: Tough Scorpid Boots (#8399)"
    { 10560, 6008389 }, // "Pattern: Big Voodoo Pants (#8389)"
    { 10562, 6008390 }, // "Pattern: Big Voodoo Cloak (#8390)"
    { 10564, 6008400 }, // "Pattern: Tough Scorpid Shoulders (#8400)"
    { 10566, 6008406 }, // "Pattern: Wild Leather Boots (#8406)"
    { 10568, 6008401 }, // "Pattern: Tough Scorpid Leggings (#8401)"
    { 10570, 6008402 }, // "Pattern: Tough Scorpid Helm (#8402)"
    { 10572, 6008407 }, // "Pattern: Wild Leather Leggings (#8407)"
    { 10574, 6008408 }, // "Pattern: Wild Leather Cloak (#8408)"
    { 10840, 6016113 }, // "Manual: Mageweave Bandage (#16113)"
    { 10846, 6016085 }, // "Artisan First Aid - Heal Thyself (#16085)"
    { 11453, 6009293 }, // "Recipe: Magic Resistance Potion (#9293)"
    { 11454, 6010713 }, // "Plans: Inlaid Mithril Cylinder (#10713)"
    { 11456, 6010644 }, // "Recipe: Goblin Rocket Fuel (#10644)"
    { 11458, 6009294 }, // "Recipe: Wildvine Potion (#9294)"
    { 11459, 6009303 }, // "Recipe: Philosopher's Stone (#9303)"
    { 11464, 6009295 }, // "Recipe: Invisibility Potion (#9295)"
    { 11466, 6009296 }, // "Recipe: Gift of Arthas (#9296)"
    { 11468, 6009297 }, // "Recipe: Elixir of Dream Vision (#9297)"
    { 11472, 6009298 }, // "Recipe: Elixir of Giants (#9298)"
    { 11473, 6009302 }, // "Recipe: Ghost Dye (#9302)"
    { 11476, 6009301 }, // "Recipe: Elixir of Shadow Power (#9301)"
    { 11477, 6009300 }, // "Recipe: Elixir of Demonslaying (#9300)"
    { 11479, 6009304 }, // "Recipe: Transmute Iron to Gold (#9304)"
    { 11480, 6009305 }, // "Recipe: Transmute Mithril to Truesilver (#9305)"
    { 11643, 6009367 }, // "Plans: Golden Scale Gauntlets (#9367)"
    { 12047, 6010316 }, // "Pattern: Colorful Kilt (#10316)"
    { 12056, 6010300 }, // "Pattern: Red Mageweave Vest (#10300)"
    { 12059, 6010301 }, // "Pattern: White Bandit Mask (#10301)"
    { 12060, 6010302 }, // "Pattern: Red Mageweave Pants (#10302)"
    { 12064, 6010311 }, // "Pattern: Orange Martial Shirt (#10311)"
    { 12066, 6010312 }, // "Pattern: Red Mageweave Gloves (#10312)"
    { 12075, 6010314 }, // "Pattern: Lavender Mageweave Shirt (#10314)"
    { 12078, 6010315 }, // "Pattern: Red Mageweave Shoulders (#10315)"
    { 12080, 6010317 }, // "Pattern: Pink Mageweave Shirt (#10317)"
    { 12081, 6010318 }, // "Pattern: Admiral's Hat (#10318)"
    { 12084, 6010320 }, // "Pattern: Red Mageweave Headband (#10320)"
    { 12085, 6010321 }, // "Pattern: Tuxedo Shirt (#10321)"
    { 12086, 6010463 }, // "Pattern: Shadoweave Mask (#10463)"
    { 12089, 6010323 }, // "Pattern: Tuxedo Pants (#10323)"
    { 12091, 6010325 }, // "Pattern: White Wedding Dress (#10325)"
    { 12093, 6010326 }, // "Pattern: Tuxedo Jacket (#10326)"
    { 12259, 6010424 }, // "Plans: Silvered Bronze Leggings (#10424)"
    { 12587, 6010601 }, // "Schematic: Bright-Eye Goggles (#10601)"
    { 12597, 6010602 }, // "Schematic: Deadly Scope (#10602)"
    { 12607, 6010603 }, // "Schematic: Catseye Ultra Goggles (#10603)"
    { 12614, 6010604 }, // "Schematic: Mithril Heavy-bore Rifle (#10604)"
    { 12615, 6010605 }, // "Schematic: Spellpower Goggles Xtreme (#10605)"
    { 12616, 6010606 }, // "Schematic: Parachute Cloak (#10606)"
    { 12617, 6010607 }, // "Schematic: Deepdive Helmet (#10607)"
    { 12620, 6010608 }, // "Schematic: Sniper Scope (#10608)"
    { 12624, 6010609 }, // "Schematic: Mithril Mechanical Dragonling (#10609)"
    { 13380, 6011038 }, // "Formula: Enchant 2H Weapon - Lesser Spirit (#11038)"
    { 13419, 6011039 }, // "Formula: Enchant Cloak - Minor Agility (#11039)"
    { 13464, 6011081 }, // "Formula: Enchant Shield - Lesser Protection (#11081)"
    { 13522, 6011098 }, // "Formula: Enchant Cloak - Lesser Shadow Resistance (#11098)"
    { 13536, 6011101 }, // "Formula: Enchant Bracer - Lesser Strength (#11101)"
    { 13612, 6011150 }, // "Formula: Enchant Gloves - Mining (#11150)"
    { 13617, 6011151 }, // "Formula: Enchant Gloves - Herbalism (#11151)"
    { 13620, 6011152 }, // "Formula: Enchant Gloves - Fishing (#11152)"
    { 13646, 6011163 }, // "Formula: Enchant Bracer - Lesser Deflection (#11163)"
    { 13653, 6011164 }, // "Formula: Enchant Weapon - Lesser Beastslayer (#11164)"
    { 13655, 6011165 }, // "Formula: Enchant Weapon - Lesser Elemental Slayer (#11165)"
    { 13687, 6011167 }, // "Formula: Enchant Boots - Lesser Spirit (#11167)"
    { 13689, 6011168 }, // "Formula: Enchant Shield - Lesser Block (#11168)"
    { 13698, 6011166 }, // "Formula: Enchant Gloves - Skinning (#11166)"
    { 13817, 6011202 }, // "Formula: Enchant Shield - Stamina (#11202)"
    { 13841, 6011203 }, // "Formula: Enchant Gloves - Advanced Mining (#11203)"
    { 13846, 6011204 }, // "Formula: Enchant Bracer - Greater Spirit (#11204)"
    { 13868, 6011205 }, // "Formula: Enchant Gloves - Advanced Herbalism (#11205)"
    { 13882, 6011206 }, // "Formula: Enchant Cloak - Lesser Agility (#11206)"
    { 13898, 6011207 }, // "Formula: Enchant Weapon - Fiery Weapon (#11207)"
    { 13915, 6011208 }, // "Formula: Enchant Weapon - Demonslaying (#11208)"
    { 13931, 6011223 }, // "Formula: Enchant Bracer - Deflection (#11223)"
    { 13933, 6011224 }, // "Formula: Enchant Shield - Frost Resistance (#11224)"
    { 13945, 6011225 }, // "Formula: Enchant Bracer - Greater Stamina (#11225)"
    { 13947, 6011226 }, // "Formula: Enchant Gloves - Riding Skill (#11226)"
    { 15292, 6011610 }, // "Plans: Dark Iron Pulverizer (#11610)"
    { 15293, 6011614 }, // "Plans: Dark Iron Mail (#11614)"
    { 15294, 6011611 }, // "Plans: Dark Iron Sunderer (#11611)"
    { 15295, 6011615 }, // "Plans: Dark Iron Shoulders (#11615)"
    { 15296, 6011612 }, // "Plans: Dark Iron Plate (#11612)"
    { 15596, 6011813 }, // "Formula: Smoking Heart of the Mountain (#11813)"
    { 15628, 6011828 }, // "Schematic: Pet Bombling (#11828)"
    { 15633, 6011827 }, // "Schematic: Lil' Smoky (#11827)"
    { 15853, 6012227 }, // "Recipe: Lean Wolf Steak (#12227)"
    { 15855, 6012228 }, // "Recipe: Roast Raptor (#12228)"
    { 15856, 6012229 }, // "Recipe: Hot Wolf Ribs (#12229)"
    { 15861, 6012231 }, // "Recipe: Jungle Stew (#12231)"
    { 15863, 6012232 }, // "Recipe: Carrion Surprise (#12232)"
    { 15865, 6012233 }, // "Recipe: Mystery Stew (#12233)"
    { 15906, 6012239 }, // "Recipe: Dragonbreath Chili (#12239)"
    { 15910, 6012240 }, // "Recipe: Heavy Kodo Stew (#12240)"
    { 15915, 6016111 }, // "Recipe: Spiced Chili Crab (#16111)"
    { 15933, 6016110 }, // "Recipe: Monster Omelet (#16110)"
    { 15935, 6012226 }, // "Recipe: Crispy Bat Wing (#12226)"
    { 15973, 6012261 }, // "Plans: Searing Golden Blade (#12261)"
    { 16642, 6012682 }, // "Plans: Thorium Armor (#12682)"
    { 16643, 6012683 }, // "Plans: Thorium Belt (#12683)"
    { 16644, 6012684 }, // "Plans: Thorium Bracers (#12684)"
    { 16645, 6012685 }, // "Plans: Radiant Belt (#12685)"
    { 16646, 6012687 }, // "Plans: Imperial Plate Shoulders (#12687)"
    { 16647, 6012688 }, // "Plans: Imperial Plate Belt (#12688)"
    { 16648, 6012689 }, // "Plans: Radiant Breastplate (#12689)"
    { 16649, 6012690 }, // "Plans: Imperial Plate Bracers (#12690)"
    { 16650, 6012691 }, // "Plans: Wildthorn Mail (#12691)"
    { 16651, 6012692 }, // "Plans: Thorium Shield Spike (#12692)"
    { 16652, 6012693 }, // "Plans: Thorium Boots (#12693)"
    { 16653, 6012694 }, // "Plans: Thorium Helm (#12694)"
    { 16654, 6012695 }, // "Plans: Radiant Gloves (#12695)"
    { 16655, 6012699 }, // "Plans: Fiery Plate Gauntlets (#12699)"
    { 16656, 6012697 }, // "Plans: Radiant Boots (#12697)"
    { 16657, 6012700 }, // "Plans: Imperial Plate Boots (#12700)"
    { 16658, 6012701 }, // "Plans: Imperial Plate Helm (#12701)"
    { 16659, 6012702 }, // "Plans: Radiant Circlet (#12702)"
    { 16660, 6012698 }, // "Plans: Dawnbringer Shoulders (#12698)"
    { 16661, 6012703 }, // "Plans: Storm Gauntlets (#12703)"
    { 16662, 6012704 }, // "Plans: Thorium Leggings (#12704)"
    { 16663, 6012705 }, // "Plans: Imperial Plate Chest (#12705)"
    { 16664, 6012706 }, // "Plans: Runic Plate Shoulders (#12706)"
    { 16665, 6012707 }, // "Plans: Runic Plate Boots (#12707)"
    { 16667, 6012696 }, // "Plans: Demon Forged Breastplate (#12696)"
    { 16724, 6012711 }, // "Plans: Whitesoul Helm (#12711)"
    { 16725, 6012713 }, // "Plans: Radiant Leggings (#12713)"
    { 16726, 6012714 }, // "Plans: Runic Plate Helm (#12714)"
    { 16728, 6012716 }, // "Plans: Helm of the Great Chief (#12716)"
    { 16729, 6012717 }, // "Plans: Lionheart Helm (#12717)"
    { 16730, 6012715 }, // "Plans: Imperial Plate Leggings (#12715)"
    { 16731, 6012718 }, // "Plans: Runic Breastplate (#12718)"
    { 16732, 6012719 }, // "Plans: Runic Plate Leggings (#12719)"
    { 16741, 6012720 }, // "Plans: Stronghold Gauntlets (#12720)"
    { 16742, 6012725 }, // "Plans: Enchanted Thorium Helm (#12725)"
    { 16744, 6012726 }, // "Plans: Enchanted Thorium Leggings (#12726)"
    { 16745, 6012727 }, // "Plans: Enchanted Thorium Breastplate (#12727)"
    { 16746, 6012728 }, // "Plans: Invulnerable Mail (#12728)"
    { 16969, 6012819 }, // "Plans: Ornate Thorium Handaxe (#12819)"
    { 16970, 6012821 }, // "Plans: Dawn's Edge (#12821)"
    { 16971, 6012823 }, // "Plans: Huge Thorium Battleaxe (#12823)"
    { 16973, 6012824 }, // "Plans: Enchanted Battlehammer (#12824)"
    { 16978, 6012825 }, // "Plans: Blazing Rapier (#12825)"
    { 16983, 6012827 }, // "Plans: Serenity (#12827)"
    { 16984, 6012828 }, // "Plans: Volcanic Hammer (#12828)"
    { 16985, 6012830 }, // "Plans: Corruption (#12830)"
    { 16988, 6012833 }, // "Plans: Hammer of the Titans (#12833)"
    { 16990, 6012834 }, // "Plans: Arcanite Champion (#12834)"
    { 16991, 6012835 }, // "Plans: Annihilator (#12835)"
    { 16992, 6012836 }, // "Plans: Frostguard (#12836)"
    { 16993, 6012837 }, // "Plans: Masterwork Stormhammer (#12837)"
    { 16994, 6012838 }, // "Plans: Arcanite Reaper (#12838)"
    { 16995, 6012839 }, // "Plans: Heartseeker (#12839)"
    { 17187, 6012958 }, // "Recipe: Transmute Arcanite (#12958)"
    { 17552, 6013476 }, // "Recipe: Mighty Rage Potion (#13476)"
    { 17553, 6013477 }, // "Recipe: Superior Mana Potion (#13477)"
    { 17554, 6013478 }, // "Recipe: Elixir of Superior Defense (#13478)"
    { 17555, 6013479 }, // "Recipe: Elixir of the Sages (#13479)"
    { 17556, 6013480 }, // "Recipe: Major Healing Potion (#13480)"
    { 17557, 6013481 }, // "Recipe: Elixir of Brute Force (#13481)"
    { 17559, 6013482 }, // "Recipe: Transmute Air to Fire (#13482)"
    { 17560, 6013483 }, // "Recipe: Transmute Fire to Earth (#13483)"
    { 17561, 6013484 }, // "Recipe: Transmute Earth to Water (#13484)"
    { 17562, 6013485 }, // "Recipe: Transmute Water to Air (#13485)"
    { 17563, 6013486 }, // "Recipe: Transmute Undeath to Water (#13486)"
    { 17564, 6013487 }, // "Recipe: Transmute Water to Undeath (#13487)"
    { 17565, 6013488 }, // "Recipe: Transmute Life to Earth (#13488)"
    { 17566, 6013489 }, // "Recipe: Transmute Earth to Life (#13489)"
    { 17570, 6013490 }, // "Recipe: Greater Stoneshield Potion (#13490)"
    { 17571, 6013491 }, // "Recipe: Elixir of the Mongoose (#13491)"
    { 17572, 6013492 }, // "Recipe: Purification Potion (#13492)"
    { 17573, 6013493 }, // "Recipe: Greater Arcane Elixir (#13493)"
    { 17574, 6013494 }, // "Recipe: Greater Fire Protection Potion (#13494)"
    { 17575, 6013495 }, // "Recipe: Greater Frost Protection Potion (#13495)"
    { 17576, 6013496 }, // "Recipe: Greater Nature Protection Potion (#13496)"
    { 17577, 6013497 }, // "Recipe: Greater Arcane Protection Potion (#13497)"
    { 17578, 6013499 }, // "Recipe: Greater Shadow Protection Potion (#13499)"
    { 17580, 6013501 }, // "Recipe: Major Mana Potion (#13501)"
    { 17632, 6013517 }, // "Recipe: Alchemist's Stone (#13517)"
    { 17634, 6013518 }, // "Recipe: Potion of Petrification (#13518)"
    { 17635, 6013519 }, // "Recipe: Flask of the Titans (#13519)"
    { 17636, 6013520 }, // "Recipe: Flask of Distilled Wisdom (#13520)"
    { 17637, 6013521 }, // "Recipe: Flask of Supreme Power (#13521)"
    { 17638, 6013522 }, // "Recipe: Flask of Chromatic Resistance (#13522)"
    { 18238, 6013939 }, // "Recipe: Spotted Yellowtail (#13939)"
    { 18239, 6013940 }, // "Recipe: Cooked Glossy Mightfish (#13940)"
    { 18240, 6013942 }, // "Recipe: Grilled Squid (#13942)"
    { 18241, 6013941 }, // "Recipe: Filet of Redgill (#13941)"
    { 18242, 6013943 }, // "Recipe: Hot Smoked Bass (#13943)"
    { 18243, 6013945 }, // "Recipe: Nightfin Soup (#13945)"
    { 18244, 6013946 }, // "Recipe: Poached Sunscale Salmon (#13946)"
    { 18245, 6013947 }, // "Recipe: Lobster Stew (#13947)"
    { 18246, 6013948 }, // "Recipe: Mightfish Steak (#13948)"
    { 18247, 6013949 }, // "Recipe: Baked Salmon (#13949)"
    { 18403, 6014466 }, // "Pattern: Frostweave Tunic (#14466)"
    { 18404, 6014467 }, // "Pattern: Frostweave Robe (#14467)"
    { 18405, 6014468 }, // "Pattern: Runecloth Bag (#14468)"
    { 18406, 6014469 }, // "Pattern: Runecloth Robe (#14469)"
    { 18407, 6014470 }, // "Pattern: Runecloth Tunic (#14470)"
    { 18408, 6014471 }, // "Pattern: Cindercloth Vest (#14471)"
    { 18409, 6014472 }, // "Pattern: Runecloth Cloak (#14472)"
    { 18410, 6014473 }, // "Pattern: Ghostweave Belt (#14473)"
    { 18411, 6014474 }, // "Pattern: Frostweave Gloves (#14474)"
    { 18412, 6014476 }, // "Pattern: Cindercloth Gloves (#14476)"
    { 18413, 6014477 }, // "Pattern: Ghostweave Gloves (#14477)"
    { 18414, 6014478 }, // "Pattern: Brightcloth Robe (#14478)"
    { 18415, 6014479 }, // "Pattern: Brightcloth Gloves (#14479)"
    { 18416, 6014480 }, // "Pattern: Ghostweave Vest (#14480)"
    { 18417, 6014481 }, // "Pattern: Runecloth Gloves (#14481)"
    { 18418, 6014482 }, // "Pattern: Cindercloth Cloak (#14482)"
    { 18419, 6014483 }, // "Pattern: Felcloth Pants (#14483)"
    { 18420, 6014484 }, // "Pattern: Brightcloth Cloak (#14484)"
    { 18421, 6014485 }, // "Pattern: Wizardweave Leggings (#14485)"
    { 18422, 6014486 }, // "Pattern: Cloak of Fire (#14486)"
    { 18423, 6014488 }, // "Pattern: Runecloth Boots (#14488)"
    { 18424, 6014489 }, // "Pattern: Frostweave Pants (#14489)"
    { 18434, 6014490 }, // "Pattern: Cindercloth Pants (#14490)"
    { 18436, 6014493 }, // "Pattern: Robe of Winter Night (#14493)"
    { 18437, 6014492 }, // "Pattern: Felcloth Boots (#14492)"
    { 18438, 6014491 }, // "Pattern: Runecloth Pants (#14491)"
    { 18439, 6014494 }, // "Pattern: Brightcloth Pants (#14494)"
    { 18440, 6014497 }, // "Pattern: Mooncloth Leggings (#14497)"
    { 18441, 6014495 }, // "Pattern: Ghostweave Pants (#14495)"
    { 18442, 6014496 }, // "Pattern: Felcloth Hood (#14496)"
    { 18444, 6014498 }, // "Pattern: Runecloth Headband (#14498)"
    { 18445, 6014499 }, // "Pattern: Mooncloth Bag (#14499)"
    { 18446, 6014500 }, // "Pattern: Wizardweave Robe (#14500)"
    { 18447, 6014501 }, // "Pattern: Mooncloth Vest (#14501)"
    { 18448, 6014507 }, // "Pattern: Mooncloth Shoulders (#14507)"
    { 18449, 6014504 }, // "Pattern: Runecloth Shoulders (#14504)"
    { 18450, 6014505 }, // "Pattern: Wizardweave Turban (#14505)"
    { 18451, 6014506 }, // "Pattern: Felcloth Robe (#14506)"
    { 18452, 6014509 }, // "Pattern: Mooncloth Circlet (#14509)"
    { 18453, 6014508 }, // "Pattern: Felcloth Shoulders (#14508)"
    { 18454, 6014511 }, // "Pattern: Gloves of Spell Mastery (#14511)"
    { 18455, 6014510 }, // "Pattern: Bottomless Bag (#14510)"
    { 18456, 6014512 }, // "Pattern: Truefaith Vestments (#14512)"
    { 18457, 6014513 }, // "Pattern: Robe of the Archmage (#14513)"
    { 18458, 6014514 }, // "Pattern: Robe of the Void (#14514)"
    { 18540, 6004213 }, // "Grimoire of Doom (#4213)"
    { 18560, 6014526 }, // "Pattern: Mooncloth (#14526)"
    { 19048, 6015724 }, // "Pattern: Heavy Scorpid Bracers (#15724)"
    { 19049, 6015725 }, // "Pattern: Wicked Leather Gauntlets (#15725)"
    { 19050, 6015726 }, // "Pattern: Green Dragonscale Breastplate (#15726)"
    { 19051, 6015727 }, // "Pattern: Heavy Scorpid Vest (#15727)"
    { 19052, 6015728 }, // "Pattern: Wicked Leather Bracers (#15728)"
    { 19053, 6015729 }, // "Pattern: Chimeric Gloves (#15729)"
    { 19054, 6015730 }, // "Pattern: Red Dragonscale Breastplate (#15730)"
    { 19055, 6015731 }, // "Pattern: Runic Leather Gauntlets (#15731)"
    { 19059, 6015732 }, // "Pattern: Volcanic Leggings (#15732)"
    { 19060, 6015733 }, // "Pattern: Green Dragonscale Leggings (#15733)"
    { 19061, 6015734 }, // "Pattern: Living Shoulders (#15734)"
    { 19062, 6015735 }, // "Pattern: Ironfeather Shoulders (#15735)"
    { 19063, 6015737 }, // "Pattern: Chimeric Boots (#15737)"
    { 19064, 6015738 }, // "Pattern: Heavy Scorpid Gauntlets (#15738)"
    { 19065, 6015739 }, // "Pattern: Runic Leather Bracers (#15739)"
    { 19066, 6015740 }, // "Pattern: Frostsaber Boots (#15740)"
    { 19067, 6015741 }, // "Pattern: Stormshroud Pants (#15741)"
    { 19068, 6015742 }, // "Pattern: Warbear Harness (#15742)"
    { 19070, 6015743 }, // "Pattern: Heavy Scorpid Belt (#15743)"
    { 19071, 6015744 }, // "Pattern: Wicked Leather Headband (#15744)"
    { 19072, 6015745 }, // "Pattern: Runic Leather Belt (#15745)"
    { 19073, 6015746 }, // "Pattern: Chimeric Leggings (#15746)"
    { 19074, 6015747 }, // "Pattern: Frostsaber Leggings (#15747)"
    { 19075, 6015748 }, // "Pattern: Heavy Scorpid Leggings (#15748)"
    { 19076, 6015749 }, // "Pattern: Volcanic Breastplate (#15749)"
    { 19077, 6015751 }, // "Pattern: Blue Dragonscale Breastplate (#15751)"
    { 19078, 6015752 }, // "Pattern: Living Leggings (#15752)"
    { 19079, 6015753 }, // "Pattern: Stormshroud Armor (#15753)"
    { 19080, 6015754 }, // "Pattern: Warbear Woolies (#15754)"
    { 19081, 6015755 }, // "Pattern: Chimeric Vest (#15755)"
    { 19082, 6015756 }, // "Pattern: Runic Leather Headband (#15756)"
    { 19083, 6015757 }, // "Pattern: Wicked Leather Pants (#15757)"
    { 19084, 6015758 }, // "Pattern: Devilsaur Gauntlets (#15758)"
    { 19085, 6015759 }, // "Pattern: Black Dragonscale Breastplate (#15759)"
    { 19086, 6015760 }, // "Pattern: Ironfeather Breastplate (#15760)"
    { 19087, 6015761 }, // "Pattern: Frostsaber Gloves (#15761)"
    { 19088, 6015762 }, // "Pattern: Heavy Scorpid Helm (#15762)"
    { 19089, 6015763 }, // "Pattern: Blue Dragonscale Shoulders (#15763)"
    { 19090, 6015764 }, // "Pattern: Stormshroud Shoulders (#15764)"
    { 19091, 6015765 }, // "Pattern: Runic Leather Pants (#15765)"
    { 19092, 6015768 }, // "Pattern: Wicked Leather Belt (#15768)"
    { 19094, 6015770 }, // "Pattern: Black Dragonscale Shoulders (#15770)"
    { 19095, 6015771 }, // "Pattern: Living Breastplate (#15771)"
    { 19097, 6015772 }, // "Pattern: Devilsaur Leggings (#15772)"
    { 19098, 6015773 }, // "Pattern: Wicked Leather Armor (#15773)"
    { 19100, 6015774 }, // "Pattern: Heavy Scorpid Shoulders (#15774)"
    { 19101, 6015775 }, // "Pattern: Volcanic Shoulders (#15775)"
    { 19102, 6015776 }, // "Pattern: Runic Leather Armor (#15776)"
    { 19103, 6015777 }, // "Pattern: Runic Leather Shoulders (#15777)"
    { 19104, 6015779 }, // "Pattern: Frostsaber Tunic (#15779)"
    { 19106, 6015780 }, // "Pattern: Onyxia Scale Breastplate (#15780)"
    { 19107, 6015781 }, // "Pattern: Black Dragonscale Leggings (#15781)"
    { 19790, 6016041 }, // "Schematic: Thorium Grenade (#16041)"
    { 19791, 6016042 }, // "Schematic: Thorium Widget (#16042)"
    { 19792, 6016043 }, // "Schematic: Thorium Rifle (#16043)"
    { 19793, 6016044 }, // "Schematic: Lifelike Mechanical Toad (#16044)"
    { 19794, 6016045 }, // "Schematic: Spellpower Goggles Xtreme Plus (#16045)"
    { 19795, 6016047 }, // "Schematic: Thorium Tube (#16047)"
    { 19796, 6016048 }, // "Schematic: Dark Iron Rifle (#16048)"
    { 19799, 6016049 }, // "Schematic: Dark Iron Bomb (#16049)"
    { 19800, 6016051 }, // "Schematic: Thorium Shells (#16051)"
    { 19801, 6016665 }, // "Tome of Tranquilizing Shot (#16665)"
    { 19814, 6016046 }, // "Schematic: Masterwork Target Dummy (#16046)"
    { 19815, 6016050 }, // "Schematic: Delicate Arcanite Converter (#16050)"
    { 19819, 6016052 }, // "Schematic: Voice Amplification Modulator (#16052)"
    { 19825, 6016053 }, // "Schematic: Master Engineer's Goggles (#16053)"
    { 19830, 6016054 }, // "Schematic: Arcanite Dragonling (#16054)"
    { 19831, 6016055 }, // "Schematic: Arcane Bomb (#16055)"
    { 19833, 6016056 }, // "Schematic: Flawless Arcanite Rifle (#16056)"
    { 20008, 6016214 }, // "Formula: Enchant Bracer - Greater Intellect (#16214)"
    { 20009, 6016218 }, // "Formula: Enchant Bracer - Superior Spirit (#16218)"
    { 20010, 6016246 }, // "Formula: Enchant Bracer - Superior Strength (#16246)"
    { 20011, 6016251 }, // "Formula: Enchant Bracer - Superior Stamina (#16251)"
    { 20012, 6016219 }, // "Formula: Enchant Gloves - Greater Agility (#16219)"
    { 20013, 6016244 }, // "Formula: Enchant Gloves - Greater Strength (#16244)"
    { 20014, 6016216 }, // "Formula: Enchant Cloak - Greater Resistance (#16216)"
    { 20015, 6016224 }, // "Formula: Enchant Cloak - Superior Defense (#16224)"
    { 20016, 6016222 }, // "Formula: Enchant Shield - Superior Spirit (#16222)"
    { 20017, 6016217 }, // "Formula: Enchant Shield - Greater Stamina (#16217)"
    { 20020, 6016215 }, // "Formula: Enchant Boots - Greater Stamina (#16215)"
    { 20023, 6016245 }, // "Formula: Enchant Boots - Greater Agility (#16245)"
    { 20024, 6016220 }, // "Formula: Enchant Boots - Spirit (#16220)"
    { 20025, 6016253 }, // "Formula: Enchant Chest - Greater Stats (#16253)"
    { 20026, 6016221 }, // "Formula: Enchant Chest - Major Health (#16221)"
    { 20028, 6016242 }, // "Formula: Enchant Chest - Major Mana (#16242)"
    { 20029, 6016223 }, // "Formula: Enchant Weapon - Icy Chill (#16223)"
    { 20030, 6016247 }, // "Formula: Enchant 2H Weapon - Superior Impact (#16247)"
    { 20031, 6016250 }, // "Formula: Enchant Weapon - Superior Striking (#16250)"
    { 20032, 6016254 }, // "Formula: Enchant Weapon - Lifestealing (#16254)"
    { 20033, 6016248 }, // "Formula: Enchant Weapon - Unholy (#16248)"
    { 20034, 6016252 }, // "Formula: Enchant Weapon - Crusader (#16252)"
    { 20035, 6016255 }, // "Formula: Enchant 2H Weapon - Major Spirit (#16255)"
    { 20036, 6016249 }, // "Formula: Enchant 2H Weapon - Major Intellect (#16249)"
    { 20051, 6016243 }, // "Formula: Runed Arcanite Rod (#16243)"
    { 20626, 6016767 }, // "Recipe: Undermine Clam Chowder (#16767)"
    { 20848, 6017017 }, // "Pattern: Flarecore Mantle (#17017)"
    { 20849, 6017018 }, // "Pattern: Flarecore Gloves (#17018)"
    { 20853, 6017022 }, // "Pattern: Corehound Boots (#17022)"
    { 20854, 6017023 }, // "Pattern: Molten Helm (#17023)"
    { 20855, 6017025 }, // "Pattern: Black Dragonscale Boots (#17025)"
    { 20872, 6017049 }, // "Plans: Fiery Chain Girdle (#17049)"
    { 20873, 6017053 }, // "Plans: Fiery Chain Shoulders (#17053)"
    { 20874, 6017051 }, // "Plans: Dark Iron Bracers (#17051)"
    { 20876, 6017052 }, // "Plans: Dark Iron Leggings (#17052)"
    { 20890, 6017059 }, // "Plans: Dark Iron Reaver (#17059)"
    { 20897, 6017060 }, // "Plans: Dark Iron Destroyer (#17060)"
    { 20916, 6017062 }, // "Recipe: Mithril Head Trout (#17062)"
    { 21143, 6017200 }, // "Recipe: Gingerbread Cookie (#17200)"
    { 21144, 6017201 }, // "Recipe: Egg Nog (#17201)"
    { 21161, 6018592 }, // "Plans: Sulfuron Hammer (#18592)"
    { 21562, 6017413 }, // "Codex: Prayer of Fortitude (#17413)"
    { 21564, 6017414 }, // "Codex: Prayer of Fortitude II (#17414)"
    { 21849, 6017682 }, // "Book: Gift of the Wild (#17682)"
    { 21850, 6017683 }, // "Book: Gift of the Wild II (#17683)"
    { 21913, 6017706 }, // "Plans: Edge of Winter (#17706)"
    { 21923, 6017709 }, // "Recipe: Elixir of Frost Power (#17709)"
    { 21931, 6017725 }, // "Formula: Enchant Weapon - Winter's Might (#17725)"
    { 21940, 6017720 }, // "Schematic: Snowmaster 9000 (#17720)"
    { 21943, 6017722 }, // "Pattern: Gloves of the Greatfather (#17722)"
    { 21945, 6017724 }, // "Pattern: Green Holiday Shirt (#17724)"
    { 22480, 6018046 }, // "Recipe: Tender Wolf Steak (#18046)"
    { 22711, 6018239 }, // "Pattern: Shadowskin Gloves (#18239)"
    { 22727, 6018252 }, // "Pattern: Core Armor Kit (#18252)"
    { 22732, 6018257 }, // "Recipe: Major Rejuvenation Potion (#18257)"
    { 22749, 6018259 }, // "Formula: Enchant Weapon - Spellpower (#18259)"
    { 22750, 6018260 }, // "Formula: Enchant Weapon - Healing Power (#18260)"
    { 22757, 6018264 }, // "Plans: Elemental Sharpening Stone (#18264)"
    { 22759, 6018265 }, // "Pattern: Flarecore Wraps (#18265)"
    { 22761, 6018267 }, // "Recipe: Runn Tum Tuber Surprise (#18267)"
    { 22793, 6018290 }, // "Schematic: Biznicks 247x128 Accurascope (#18290)"
    { 22795, 6018292 }, // "Schematic: Core Marksman Rifle (#18292)"
    { 22797, 6018291 }, // "Schematic: Force Reactive Disk (#18291)"
    { 22866, 6018414 }, // "Pattern: Belt of the Archmage (#18414)"
    { 22867, 6018415 }, // "Pattern: Felcloth Gloves (#18415)"
    { 22868, 6018416 }, // "Pattern: Inferno Gloves (#18416)"
    { 22869, 6018417 }, // "Pattern: Mooncloth Gloves (#18417)"
    { 22870, 6018418 }, // "Pattern: Cloak of Warding (#18418)"
    { 22902, 6018487 }, // "Pattern: Mooncloth Robe (#18487)"
    { 22921, 6018514 }, // "Pattern: Girdle of Insight (#18514)"
    { 22922, 6018515 }, // "Pattern: Mongoose Boots (#18515)"
    { 22923, 6018516 }, // "Pattern: Swift Flight Bracers (#18516)"
    { 22926, 6018517 }, // "Pattern: Chromatic Cloak (#18517)"
    { 22927, 6018518 }, // "Pattern: Hide of the Wild (#18518)"
    { 22928, 6018519 }, // "Pattern: Shifting Cloak (#18519)"
    { 22967, 6044956 }, // "Goblin's Guide to Elementium (#44956)"
    { 23028, 6018600 }, // "Tome of Arcane Brilliance (#18600)"
    { 23066, 6018647 }, // "Schematic: Red Firework (#18647)"
    { 23067, 6018649 }, // "Schematic: Blue Firework (#18649)"
    { 23068, 6018648 }, // "Schematic: Green Firework (#18648)"
    { 23069, 6018650 }, // "Schematic: EZ-Thro Dynamite II (#18650)"
    { 23071, 6018651 }, // "Schematic: Truesilver Transformer (#18651)"
    { 23077, 6018652 }, // "Schematic: Gyrofreeze Ice Reflector (#18652)"
    { 23078, 6018653 }, // "Schematic: Goblin Jumper Cables XL (#18653)"
    { 23079, 6018655 }, // "Schematic: Major Recombobulator (#18655)"
    { 23080, 6018656 }, // "Schematic: Powerful Seaforium Charge (#18656)"
    { 23081, 6018657 }, // "Schematic: Hyper-Radiant Flame Reflector (#18657)"
    { 23082, 6018658 }, // "Schematic: Ultra-Flash Shadow Reflector (#18658)"
    { 23096, 6018654 }, // "Schematic: Gnomish Alarm-o-Bot (#18654)"
    { 23129, 6018661 }, // "Schematic: World Enlarger (#18661)"
    { 23190, 6018731 }, // "Pattern: Heavy Leather Ball (#18731)"
    { 23399, 6018949 }, // "Pattern: Barbaric Bracers (#18949)"
    { 23507, 6019027 }, // "Schematic: Snake Burst Firework (#19027)"
    { 23628, 6019202 }, // "Plans: Heavy Timbermaw Belt (#19202)"
    { 23629, 6019204 }, // "Plans: Heavy Timbermaw Boots (#19204)"
    { 23632, 6019203 }, // "Plans: Girdle of the Dawn (#19203)"
    { 23633, 6019205 }, // "Plans: Gloves of the Dawn (#19205)"
    { 23636, 6019206 }, // "Plans: Dark Iron Helm (#19206)"
    { 23637, 6019207 }, // "Plans: Dark Iron Gauntlets (#19207)"
    { 23638, 6019208 }, // "Plans: Black Amnesty (#19208)"
    { 23639, 6019209 }, // "Plans: Blackfury (#19209)"
    { 23650, 6019210 }, // "Plans: Ebon Hand (#19210)"
    { 23652, 6019211 }, // "Plans: Blackguard (#19211)"
    { 23653, 6019212 }, // "Plans: Nightfall (#19212)"
    { 23662, 6019215 }, // "Pattern: Wisdom of the Timbermaw (#19215)"
    { 23663, 6019218 }, // "Pattern: Mantle of the Timbermaw (#19218)"
    { 23664, 6019216 }, // "Pattern: Argent Boots (#19216)"
    { 23665, 6019217 }, // "Pattern: Argent Shoulders (#19217)"
    { 23666, 6019219 }, // "Pattern: Flarecore Robe (#19219)"
    { 23667, 6019220 }, // "Pattern: Flarecore Leggings (#19220)"
    { 23703, 6019326 }, // "Pattern: Might of the Timbermaw (#19326)"
    { 23704, 6019327 }, // "Pattern: Timbermaw Brawlers (#19327)"
    { 23705, 6019328 }, // "Pattern: Dawn Treaders (#19328)"
    { 23706, 6019329 }, // "Pattern: Golden Mantle of the Dawn (#19329)"
    { 23707, 6019330 }, // "Pattern: Lava Belt (#19330)"
    { 23708, 6019331 }, // "Pattern: Chromatic Gauntlets (#19331)"
    { 23709, 6019332 }, // "Pattern: Corehound Belt (#19332)"
    { 23710, 6019333 }, // "Pattern: Molten Belt (#19333)"
    { 23787, 6019442 }, // "Formula: Powerful Anti-Venom (#19442)"
    { 23799, 6019444 }, // "Formula: Enchant Weapon - Strength (#19444)"
    { 23800, 6019445 }, // "Formula: Enchant Weapon - Agility (#19445)"
    { 23801, 6019446 }, // "Formula: Enchant Bracer - Mana Regeneration (#19446)"
    { 23802, 6019447 }, // "Formula: Enchant Bracer - Healing Power (#19447)"
    { 23803, 6019448 }, // "Formula: Enchant Weapon - Mighty Spirit (#19448)"
    { 23804, 6019449 }, // "Formula: Enchant Weapon - Mighty Intellect (#19449)"
    { 24091, 6019764 }, // "Pattern: Bloodvine Vest (#19764)"
    { 24092, 6019765 }, // "Pattern: Bloodvine Leggings (#19765)"
    { 24093, 6019766 }, // "Pattern: Bloodvine Boots (#19766)"
    { 24121, 6019769 }, // "Pattern: Primal Batskin Jerkin (#19769)"
    { 24122, 6019770 }, // "Pattern: Primal Batskin Gloves (#19770)"
    { 24123, 6019771 }, // "Pattern: Primal Batskin Bracers (#19771)"
    { 24124, 6019772 }, // "Pattern: Blood Tiger Breastplate (#19772)"
    { 24125, 6019773 }, // "Pattern: Blood Tiger Shoulders (#19773)"
    { 24136, 6019776 }, // "Plans: Bloodsoul Breastplate (#19776)"
    { 24137, 6019777 }, // "Plans: Bloodsoul Shoulders (#19777)"
    { 24138, 6019778 }, // "Plans: Bloodsoul Gauntlets (#19778)"
    { 24139, 6019779 }, // "Plans: Darksoul Breastplate (#19779)"
    { 24140, 6019780 }, // "Plans: Darksoul Leggings (#19780)"
    { 24141, 6019781 }, // "Plans: Darksoul Shoulders (#19781)"
    { 24356, 6020000 }, // "Schematic: Bloodvine Goggles (#20000)"
    { 24357, 6020001 }, // "Schematic: Bloodvine Lens (#20001)"
    { 24365, 6020011 }, // "Recipe: Mageblood Elixir (#20011)"
    { 24366, 6020012 }, // "Recipe: Greater Dreamless Sleep Potion (#20012)"
    { 24367, 6020013 }, // "Recipe: Living Action Potion (#20013)"
    { 24368, 6020014 }, // "Recipe: Mighty Troll's Blood Elixir (#20014)"
    { 24399, 6020040 }, // "Plans: Dark Iron Boots (#20040)"
    { 24418, 6020075 }, // "Recipe: Heavy Crocolisk Stew (#20075)"
    { 24703, 6020382 }, // "Pattern: Dreamscale Breastplate (#20382)"
    { 24846, 6020506 }, // "Pattern: Spitfire Bracers (#20506)"
    { 24847, 6020507 }, // "Pattern: Spitfire Gauntlets (#20507)"
    { 24848, 6020508 }, // "Pattern: Spitfire Breastplate (#20508)"
    { 24849, 6020509 }, // "Pattern: Sandstalker Bracers (#20509)"
    { 24850, 6020510 }, // "Pattern: Sandstalker Gauntlets (#20510)"
    { 24851, 6020511 }, // "Pattern: Sandstalker Breastplate (#20511)"
    { 24901, 6020546 }, // "Pattern: Runed Stygian Leggings (#20546)"
    { 24902, 6020548 }, // "Pattern: Runed Stygian Belt (#20548)"
    { 24903, 6020547 }, // "Pattern: Runed Stygian Boots (#20547)"
    { 24912, 6020553 }, // "Plans: Darkrune Gauntlets (#20553)"
    { 24913, 6020555 }, // "Plans: Darkrune Helm (#20555)"
    { 24914, 6020554 }, // "Plans: Darkrune Breastplate (#20554)"
    { 24940, 6020576 }, // "Pattern: Black Whelp Tunic (#20576)"
    { 25072, 6020726 }, // "Formula: Enchant Gloves - Threat (#20726)"
    { 25073, 6020727 }, // "Formula: Enchant Gloves - Shadow Power (#20727)"
    { 25074, 6020728 }, // "Formula: Enchant Gloves - Frost Power (#20728)"
    { 25078, 6020729 }, // "Formula: Enchant Gloves - Fire Power (#20729)"
    { 25079, 6020730 }, // "Formula: Enchant Gloves - Healing Power (#20730)"
    { 25080, 6020731 }, // "Formula: Enchant Gloves - Superior Agility (#20731)"
    { 25081, 6020732 }, // "Formula: Enchant Cloak - Greater Fire Resistance (#20732)"
    { 25082, 6020733 }, // "Formula: Enchant Cloak - Greater Nature Resistance (#20733)"
    { 25083, 6020734 }, // "Formula: Enchant Cloak - Stealth (#20734)"
    { 25084, 6020735 }, // "Formula: Enchant Cloak - Subtlety (#20735)"
    { 25086, 6020736 }, // "Formula: Enchant Cloak - Dodge (#20736)"
    { 25124, 6020758 }, // "Formula: Minor Wizard Oil (#20758)"
    { 25125, 6020752 }, // "Formula: Minor Mana Oil (#20752)"
    { 25126, 6020753 }, // "Formula: Lesser Wizard Oil (#20753)"
    { 25127, 6020754 }, // "Formula: Lesser Mana Oil (#20754)"
    { 25128, 6020755 }, // "Formula: Wizard Oil (#20755)"
    { 25129, 6020756 }, // "Formula: Brilliant Wizard Oil (#20756)"
    { 25130, 6020757 }, // "Formula: Brilliant Mana Oil (#20757)"
    { 25146, 6020761 }, // "Recipe: Transmute Elemental Fire (#20761)"
    { 25286, 6021297 }, // "Manual of Heroic Strike IX (#21297)"
    { 25288, 6021299 }, // "Manual of Revenge VI (#21299)"
    { 25289, 6021298 }, // "Manual of Battle Shout VII (#21298)"
    { 25290, 6021288 }, // "Libram: Blessing of Wisdom VI (#21288)"
    { 25291, 6021289 }, // "Libram: Blessing of Might VII (#21289)"
    { 25292, 6021290 }, // "Libram: Holy Light IX (#21290)"
    { 25294, 6021304 }, // "Guide: Multi-Shot V (#21304)"
    { 25295, 6021306 }, // "Guide: Serpent Sting IX (#21306)"
    { 25296, 6021307 }, // "Guide: Aspect of the Hawk VII (#21307)"
    { 25297, 6021294 }, // "Book of Healing Touch XI (#21294)"
    { 25298, 6021295 }, // "Book of Starfire VII (#21295)"
    { 25299, 6021296 }, // "Book of Rejuvenation XI (#21296)"
    { 25300, 6021300 }, // "Handbook of Backstab IX (#21300)"
    { 25302, 6021303 }, // "Handbook of Feint V (#21303)"
    { 25304, 6021214 }, // "Tome of Frostbolt XI (#21214)"
    { 25306, 6021279 }, // "Tome of Fireball XII (#21279)"
    { 25307, 6021281 }, // "Grimoire of Shadow Bolt X (#21281)"
    { 25309, 6021282 }, // "Grimoire of Immolate VIII (#21282)"
    { 25311, 6021283 }, // "Grimoire of Corruption VII (#21283)"
    { 25314, 6021284 }, // "Codex of Greater Heal V (#21284)"
    { 25315, 6021285 }, // "Codex of Renew X (#21285)"
    { 25316, 6021287 }, // "Codex of Prayer of Healing V (#21287)"
    { 25320, 6020856 }, // "Design: Heavy Golden Necklace of Battle (#20856)"
    { 25323, 6020855 }, // "Design: Wicked Moonstone Ring (#20855)"
    { 25339, 6020854 }, // "Design: Amulet of the Moon (#20854)"
    { 25345, 6021280 }, // "Tome of Arcane Missiles VIII (#21280)"
    { 25347, 6021302 }, // "Handbook of Deadly Poison V (#21302)"
    { 25357, 6021291 }, // "Tablet of Healing Wave X (#21291)"
    { 25359, 6021293 }, // "Tablet of Grace of Air Totem III (#21293)"
    { 25361, 6021292 }, // "Tablet of Strength of Earth Totem V (#21292)"
    { 25392, 6029549 }, // "Codex: Prayer of Fortitude III (#29549)"
    { 25610, 6020970 }, // "Design: Pendant of the Agate Shield (#20970)"
    { 25612, 6020971 }, // "Design: Heavy Iron Knuckles (#20971)"
    { 25617, 6020973 }, // "Design: Blazing Citrine Ring (#20973)"
    { 25618, 6020974 }, // "Design: Jade Pendant of Blasting (#20974)"
    { 25619, 6020975 }, // "Design: The Jade Eye (#20975)"
    { 25622, 6020976 }, // "Design: Citrine Pendant of Golden Healing (#20976)"
    { 25659, 6021025 }, // "Recipe: Dirge's Kickin' Chimaerok Chops (#21025)"
    { 25704, 6021099 }, // "Recipe: Smoked Sagefish (#21099)"
    { 25954, 6021219 }, // "Recipe: Sagefish Delight (#21219)"
    { 26085, 6021358 }, // "Pattern: Soul Pouch (#21358)"
    { 26087, 6021371 }, // "Pattern: Core Felcloth Bag (#21371)"
    { 26277, 6021547 }, // "Recipe: Elixir of Greater Firepower (#21547)"
    { 26279, 6021548 }, // "Pattern: Stormshroud Gloves (#21548)"
    { 26403, 6021722 }, // "Pattern: Festival Dress (#21722)"
    { 26407, 6021723 }, // "Pattern: Festival Suit (#21723)"
    { 26416, 6021724 }, // "Schematic: Small Blue Rocket (#21724)"
    { 26417, 6021725 }, // "Schematic: Small Green Rocket (#21725)"
    { 26418, 6021726 }, // "Schematic: Small Red Rocket (#21726)"
    { 26420, 6021727 }, // "Schematic: Large Blue Rocket (#21727)"
    { 26421, 6021728 }, // "Schematic: Large Green Rocket (#21728)"
    { 26422, 6021729 }, // "Schematic: Large Red Rocket (#21729)"
    { 26423, 6021730 }, // "Schematic: Blue Rocket Cluster (#21730)"
    { 26424, 6021731 }, // "Schematic: Green Rocket Cluster (#21731)"
    { 26425, 6021732 }, // "Schematic: Red Rocket Cluster (#21732)"
    { 26426, 6021733 }, // "Schematic: Large Blue Rocket Cluster (#21733)"
    { 26427, 6021734 }, // "Schematic: Large Green Rocket Cluster (#21734)"
    { 26428, 6021735 }, // "Schematic: Large Red Rocket Cluster (#21735)"
    { 26442, 6021738 }, // "Schematic: Firework Launcher (#21738)"
    { 26443, 6021737 }, // "Schematic: Cluster Launcher (#21737)"
    { 26747, 6021892 }, // "Pattern: Bolt of Imbued Netherweave (#21892)"
    { 26749, 6021893 }, // "Pattern: Imbued Netherweave Bag (#21893)"
    { 26750, 6021894 }, // "Pattern: Bolt of Soulcloth (#21894)"
    { 26751, 6021895 }, // "Pattern: Primal Mooncloth (#21895)"
    { 26752, 6021908 }, // "Pattern: Spellfire Belt (#21908)"
    { 26753, 6021909 }, // "Pattern: Spellfire Gloves (#21909)"
    { 26754, 6021910 }, // "Pattern: Spellfire Robe (#21910)"
    { 26755, 6021911 }, // "Pattern: Spellfire Bag (#21911)"
    { 26756, 6021912 }, // "Pattern: Frozen Shadoweave Shoulders (#21912)"
    { 26757, 6021914 }, // "Pattern: Frozen Shadoweave Boots (#21914)"
    { 26758, 6021913 }, // "Pattern: Frozen Shadoweave Robe (#21913)"
    { 26759, 6021915 }, // "Pattern: Ebon Shadowbag (#21915)"
    { 26760, 6021916 }, // "Pattern: Primal Mooncloth Belt (#21916)"
    { 26761, 6021918 }, // "Pattern: Primal Mooncloth Shoulders (#21918)"
    { 26762, 6021917 }, // "Pattern: Primal Mooncloth Robe (#21917)"
    { 26763, 6021919 }, // "Pattern: Primal Mooncloth Bag (#21919)"
    { 26773, 6021896 }, // "Pattern: Netherweave Robe (#21896)"
    { 26774, 6021897 }, // "Pattern: Netherweave Tunic (#21897)"
    { 26775, 6021898 }, // "Pattern: Imbued Netherweave Pants (#21898)"
    { 26776, 6021899 }, // "Pattern: Imbued Netherweave Boots (#21899)"
    { 26777, 6021900 }, // "Pattern: Imbued Netherweave Robe (#21900)"
    { 26778, 6021901 }, // "Pattern: Imbued Netherweave Tunic (#21901)"
    { 26779, 6021902 }, // "Pattern: Soulcloth Gloves (#21902)"
    { 26780, 6021903 }, // "Pattern: Soulcloth Shoulders (#21903)"
    { 26781, 6021904 }, // "Pattern: Soulcloth Vest (#21904)"
    { 26782, 6021905 }, // "Pattern: Arcanoweave Bracers (#21905)"
    { 26783, 6021906 }, // "Pattern: Arcanoweave Boots (#21906)"
    { 26784, 6021907 }, // "Pattern: Arcanoweave Robe (#21907)"
    { 26873, 6021940 }, // "Design: Golden Hare (#21940)"
    { 26875, 6021941 }, // "Design: Black Pearl Panther (#21941)"
    { 26878, 6021942 }, // "Design: Ruby Crown of Restoration (#21942)"
    { 26881, 6021943 }, // "Design: Truesilver Crab (#21943)"
    { 26882, 6021944 }, // "Design: Truesilver Boar (#21944)"
    { 26887, 6021945 }, // "Design: The Aquamarine Ward (#21945)"
    { 26896, 6021947 }, // "Design: Gem Studded Band (#21947)"
    { 26897, 6021948 }, // "Design: Opal Necklace of Impact (#21948)"
    { 26900, 6021949 }, // "Design: Ruby Serpent (#21949)"
    { 26906, 6021952 }, // "Design: Emerald Crown of Destruction (#21952)"
    { 26909, 6021953 }, // "Design: Emerald Owl (#21953)"
    { 26910, 6021954 }, // "Design: Ring of Bitter Shadows (#21954)"
    { 26912, 6021955 }, // "Design: Black Diamond Crab (#21955)"
    { 26914, 6021956 }, // "Design: Dark Iron Scorpid (#21956)"
    { 26915, 6021957 }, // "Design: Necklace of the Diamond Tower (#21957)"
    { 26991, 6022146 }, // "Book: Gift of the Wild III (#22146)"
    { 27032, 6021992 }, // "Manual: Netherweave Bandage (#21992)"
    { 27033, 6021993 }, // "Manual: Heavy Netherweave Bandage (#21993)"
    { 27090, 6029550 }, // "Tome of Conjure Water IX (#29550)"
    { 27127, 6022153 }, // "Tome of Arcane Brilliance 2 (#22153)"
    { 27585, 6022209 }, // "Plans: Heavy Obsidian Belt (#22209)"
    { 27586, 6022219 }, // "Plans: Jagged Obsidian Shield (#22219)"
    { 27587, 6022222 }, // "Plans: Thick Obsidian Breastplate (#22222)"
    { 27588, 6022214 }, // "Plans: Light Obsidian Belt (#22214)"
    { 27589, 6022220 }, // "Plans: Black Grasp of the Destroyer (#22220)"
    { 27590, 6022221 }, // "Plans: Obsidian Mail Tunic (#22221)"
    { 27658, 6022307 }, // "Pattern: Enchanted Mageweave Pouch (#22307)"
    { 27659, 6022308 }, // "Pattern: Enchanted Runecloth Bag (#22308)"
    { 27660, 6022309 }, // "Pattern: Big Bag of Enchantment (#22309)"
    { 27683, 6022393 }, // "Codex: Prayer of Shadow Protection (#22393)"
    { 27724, 6022310 }, // "Pattern: Cenarion Herb Bag (#22310)"
    { 27725, 6022312 }, // "Pattern: Satchel of Cenarius (#22312)"
    { 27829, 6022388 }, // "Plans: Titanic Leggings (#22388)"
    { 27830, 6022390 }, // "Plans: Persuader (#22390)"
    { 27832, 6022389 }, // "Plans: Sageblade (#22389)"
    { 27837, 6022392 }, // "Formula: Enchant 2H Weapon - Agility (#22392)"
    { 27906, 6022530 }, // "Formula: Enchant Bracer - Major Defense (#22530)"
    { 27911, 6022531 }, // "Formula: Enchant Bracer - Superior Healing (#22531)"
    { 27913, 6022532 }, // "Formula: Enchant Bracer - Restore Mana Prime (#22532)"
    { 27914, 6022533 }, // "Formula: Enchant Bracer - Fortitude (#22533)"
    { 27917, 6022534 }, // "Formula: Enchant Bracer - Spellpower (#22534)"
    { 27920, 6022535 }, // "Formula: Enchant Ring - Striking (#22535)"
    { 27924, 6022536 }, // "Formula: Enchant Ring - Spellpower (#22536)"
    { 27926, 6022537 }, // "Formula: Enchant Ring - Healing Power (#22537)"
    { 27927, 6022538 }, // "Formula: Enchant Ring - Stats (#22538)"
    { 27945, 6022539 }, // "Formula: Enchant Shield - Intellect (#22539)"
    { 27946, 6022540 }, // "Formula: Enchant Shield - Shield Block (#22540)"
    { 27947, 6022541 }, // "Formula: Enchant Shield - Resistance (#22541)"
    { 27948, 6022542 }, // "Formula: Enchant Boots - Vitality (#22542)"
    { 27950, 6022543 }, // "Formula: Enchant Boots - Fortitude (#22543)"
    { 27951, 6022544 }, // "Formula: Enchant Boots - Dexterity (#22544)"
    { 27954, 6022545 }, // "Formula: Enchant Boots - Surefooted (#22545)"
    { 27960, 6022547 }, // "Formula: Enchant Chest - Exceptional Stats (#22547)"
    { 27962, 6022548 }, // "Formula: Enchant Cloak - Major Resistance (#22548)"
    { 27967, 6022552 }, // "Formula: Enchant Weapon - Major Striking (#22552)"
    { 27968, 6022551 }, // "Formula: Enchant Weapon - Major Intellect (#22551)"
    { 27971, 6022554 }, // "Formula: Enchant 2H Weapon - Savagery (#22554)"
    { 27972, 6022553 }, // "Formula: Enchant Weapon - Potency (#22553)"
    { 27975, 6022555 }, // "Formula: Enchant Weapon - Major Spellpower (#22555)"
    { 27977, 6022556 }, // "Formula: Enchant 2H Weapon - Major Agility (#22556)"
    { 27981, 6022560 }, // "Formula: Enchant Weapon - Sunfire (#22560)"
    { 27982, 6022561 }, // "Formula: Enchant Weapon - Soulfrost (#22561)"
    { 27984, 6022559 }, // "Formula: Enchant Weapon - Mongoose (#22559)"
    { 28003, 6022558 }, // "Formula: Enchant Weapon - Spellsurge (#22558)"
    { 28004, 6022557 }, // "Formula: Enchant Weapon - Battlemaster (#22557)"
    { 28016, 6022562 }, // "Formula: Superior Mana Oil (#22562)"
    { 28019, 6022563 }, // "Formula: Superior Wizard Oil (#22563)"
    { 28022, 6022565 }, // "Formula: Large Prismatic Shard (#22565)"
    { 28210, 6022683 }, // "Pattern: Gaea's Embrace (#22683)"
    { 28267, 6022647 }, // "Recipe: Crunchy Spider Surprise (#22647)"
    { 28271, 6022739 }, // "Tome of Polymorph: Turtle (#22739)"
    { 28327, 6022729 }, // "Schematic: Steam Tonk Controller (#22729)"
    { 28461, 6022766 }, // "Plans: Ironvine Breastplate (#22766)"
    { 28462, 6022767 }, // "Plans: Ironvine Gloves (#22767)"
    { 28463, 6022768 }, // "Plans: Ironvine Belt (#22768)"
    { 28472, 6022771 }, // "Pattern: Bramblewood Helm (#22771)"
    { 28473, 6022770 }, // "Pattern: Bramblewood Boots (#22770)"
    { 28474, 6022769 }, // "Pattern: Bramblewood Belt (#22769)"
    { 28480, 6022774 }, // "Pattern: Sylvan Vest (#22774)"
    { 28481, 6022773 }, // "Pattern: Sylvan Crown (#22773)"
    { 28482, 6022772 }, // "Pattern: Sylvan Shoulders (#22772)"
    { 28543, 6022900 }, // "Recipe: Elixir of Camouflage (#22900)"
    { 28546, 6022901 }, // "Recipe: Sneaking Potion (#22901)"
    { 28549, 6022902 }, // "Recipe: Elixir of Major Frost Power (#22902)"
    { 28550, 6022903 }, // "Recipe: Insane Strength Potion (#22903)"
    { 28552, 6022904 }, // "Recipe: Elixir of the Searching Eye (#22904)"
    { 28553, 6022905 }, // "Recipe: Elixir of Major Agility (#22905)"
    { 28554, 6022906 }, // "Recipe: Shrouding Potion (#22906)"
    { 28555, 6022907 }, // "Recipe: Super Mana Potion (#22907)"
    { 28556, 6022908 }, // "Recipe: Elixir of Major Firepower (#22908)"
    { 28557, 6022909 }, // "Recipe: Elixir of Major Defense (#22909)"
    { 28558, 6022910 }, // "Recipe: Elixir of Major Shadow Power (#22910)"
    { 28562, 6022911 }, // "Recipe: Major Dreamless Sleep Potion (#22911)"
    { 28563, 6022912 }, // "Recipe: Heroic Potion (#22912)"
    { 28564, 6022913 }, // "Recipe: Haste Potion (#22913)"
    { 28565, 6022914 }, // "Recipe: Destruction Potion (#22914)"
    { 28566, 6022915 }, // "Recipe: Transmute Primal Air to Fire (#22915)"
    { 28567, 6022916 }, // "Recipe: Transmute Primal Earth to Water (#22916)"
    { 28568, 6022917 }, // "Recipe: Transmute Primal Fire to Earth (#22917)"
    { 28569, 6022918 }, // "Recipe: Transmute Primal Water to Air (#22918)"
    { 28570, 6022919 }, // "Recipe: Elixir of Major Mageblood (#22919)"
    { 28571, 6022920 }, // "Recipe: Major Fire Protection Potion (#22920)"
    { 28572, 6022921 }, // "Recipe: Major Frost Protection Potion (#22921)"
    { 28573, 6022922 }, // "Recipe: Major Nature Protection Potion (#22922)"
    { 28575, 6022923 }, // "Recipe: Major Arcane Protection Potion (#22923)"
    { 28576, 6022924 }, // "Recipe: Major Shadow Protection Potion (#22924)"
    { 28577, 6022925 }, // "Recipe: Major Holy Protection Potion (#22925)"
    { 28578, 6022926 }, // "Recipe: Elixir of Empowerment (#22926)"
    { 28579, 6022927 }, // "Recipe: Ironshield Potion (#22927)"
    { 28609, 6022890 }, // "Tome of Frost Ward V (#22890)"
    { 28610, 6022891 }, // "Grimoire of Shadow Ward IV (#22891)"
    { 28612, 6022897 }, // "Tome of Conjure Food VII (#22897)"
    { 28903, 6023130 }, // "Design: Teardrop Blood Garnet (#23130)"
    { 28905, 6023131 }, // "Design: Bold Blood Garnet (#23131)"
    { 28906, 6023133 }, // "Design: Runed Blood Garnet (#23133)"
    { 28907, 6023134 }, // "Design: Delicate Blood Garnet (#23134)"
    { 28910, 6023135 }, // "Design: Inscribed Flame Spessarite (#23135)"
    { 28912, 6023136 }, // "Design: Luminous Flame Spessarite (#23136)"
    { 28914, 6023137 }, // "Design: Glinting Flame Spessarite (#23137)"
    { 28915, 6023138 }, // "Design: Potent Flame Spessarite (#23138)"
    { 28916, 6023140 }, // "Design: Radiant Deep Peridot (#23140)"
    { 28917, 6023141 }, // "Design: Jagged Deep Peridot (#23141)"
    { 28918, 6023142 }, // "Design: Enduring Deep Peridot (#23142)"
    { 28924, 6023143 }, // "Design: Dazzling Deep Peridot (#23143)"
    { 28925, 6023144 }, // "Design: Glowing Shadow Draenite (#23144)"
    { 28927, 6023145 }, // "Design: Royal Shadow Draenite (#23145)"
    { 28933, 6023146 }, // "Design: Shifting Shadow Draenite (#23146)"
    { 28936, 6023147 }, // "Design: Sovereign Shadow Draenite (#23147)"
    { 28938, 6023148 }, // "Design: Brilliant Golden Draenite (#23148)"
    { 28944, 6023149 }, // "Design: Gleaming Golden Draenite (#23149)"
    { 28947, 6023150 }, // "Design: Thick Golden Draenite (#23150)"
    { 28948, 6023151 }, // "Design: Rigid Golden Draenite (#23151)"
    { 28950, 6023152 }, // "Design: Solid Azure Moonstone (#23152)"
    { 28953, 6023153 }, // "Design: Sparkling Azure Moonstone (#23153)"
    { 28955, 6023154 }, // "Design: Stormy Azure Moonstone (#23154)"
    { 28957, 6023155 }, // "Design: Lustrous Azure Moonstone (#23155)"
    { 29228, 6023320 }, // "Tablet of Flame Shock VI (#23320)"
    { 29566, 6023590 }, // "Plans: Adamantite Maul (#23590)"
    { 29568, 6023591 }, // "Plans: Adamantite Cleaver (#23591)"
    { 29569, 6023592 }, // "Plans: Adamantite Dagger (#23592)"
    { 29571, 6023593 }, // "Plans: Adamantite Rapier (#23593)"
    { 29603, 6023594 }, // "Plans: Adamantite Plate Bracers (#23594)"
    { 29605, 6023595 }, // "Plans: Adamantite Plate Gloves (#23595)"
    { 29606, 6023596 }, // "Plans: Adamantite Breastplate (#23596)"
    { 29608, 6023597 }, // "Plans: Enchanted Adamantite Belt (#23597)"
    { 29610, 6023599 }, // "Plans: Enchanted Adamantite Breastplate (#23599)"
    { 29611, 6023598 }, // "Plans: Enchanted Adamantite Boots (#23598)"
    { 29613, 6023600 }, // "Plans: Enchanted Adamantite Leggings (#23600)"
    { 29614, 6023601 }, // "Plans: Flamebane Bracers (#23601)"
    { 29615, 6023602 }, // "Plans: Flamebane Helm (#23602)"
    { 29616, 6023603 }, // "Plans: Flamebane Gloves (#23603)"
    { 29617, 6023604 }, // "Plans: Flamebane Breastplate (#23604)"
    { 29619, 6023605 }, // "Plans: Felsteel Gloves (#23605)"
    { 29620, 6023606 }, // "Plans: Felsteel Leggings (#23606)"
    { 29621, 6023607 }, // "Plans: Felsteel Helm (#23607)"
    { 29622, 6023621 }, // "Plans: Gauntlets of the Iron Tower (#23621)"
    { 29628, 6023608 }, // "Plans: Khorium Belt (#23608)"
    { 29629, 6023609 }, // "Plans: Khorium Pants (#23609)"
    { 29630, 6023610 }, // "Plans: Khorium Boots (#23610)"
    { 29642, 6023611 }, // "Plans: Ragesteel Gloves (#23611)"
    { 29643, 6023612 }, // "Plans: Ragesteel Helm (#23612)"
    { 29645, 6023613 }, // "Plans: Ragesteel Breastplate (#23613)"
    { 29648, 6023615 }, // "Plans: Swiftsteel Gloves (#23615)"
    { 29649, 6023617 }, // "Plans: Earthpeace Breastplate (#23617)"
    { 29656, 6023618 }, // "Plans: Adamantite Sharpening Stone (#23618)"
    { 29657, 6023619 }, // "Plans: Felsteel Shield Spike (#23619)"
    { 29658, 6023620 }, // "Plans: Felfury Gauntlets (#23620)"
    { 29662, 6023622 }, // "Plans: Steelgrip Gauntlets (#23622)"
    { 29663, 6023623 }, // "Plans: Storm Helm (#23623)"
    { 29664, 6023624 }, // "Plans: Helm of the Stalwart Defender (#23624)"
    { 29668, 6023625 }, // "Plans: Oathkeeper's Helm (#23625)"
    { 29669, 6023626 }, // "Plans: Black Felsteel Bracers (#23626)"
    { 29671, 6023627 }, // "Plans: Bracers of the Green Fortress (#23627)"
    { 29672, 6023628 }, // "Plans: Blessed Bracers (#23628)"
    { 29688, 6023574 }, // "Recipe: Transmute Primal Might (#23574)"
    { 29692, 6023629 }, // "Plans: Felsteel Longblade (#23629)"
    { 29693, 6023630 }, // "Plans: Khorium Champion (#23630)"
    { 29694, 6023631 }, // "Plans: Fel Edged Battleaxe (#23631)"
    { 29695, 6023632 }, // "Plans: Felsteel Reaper (#23632)"
    { 29696, 6023633 }, // "Plans: Runic Hammer (#23633)"
    { 29697, 6023634 }, // "Plans: Fel Hardened Maul (#23634)"
    { 29698, 6023635 }, // "Plans: Eternium Runed Blade (#23635)"
    { 29699, 6023636 }, // "Plans: Dirge (#23636)"
    { 29700, 6023637 }, // "Plans: Hand of Eternity (#23637)"
    { 29728, 6023638 }, // "Plans: Lesser Ward of Shielding (#23638)"
    { 29729, 6023639 }, // "Plans: Greater Ward of Shielding (#23639)"
    { 30313, 6023799 }, // "Schematic: Adamantite Rifle (#23799)"
    { 30314, 6023800 }, // "Schematic: Felsteel Boomstick (#23800)"
    { 30315, 6023802 }, // "Schematic: Ornate Khorium Rifle (#23802)"
    { 30316, 6023803 }, // "Schematic: Cogspinner Goggles (#23803)"
    { 30317, 6023804 }, // "Schematic: Power Amplification Goggles (#23804)"
    { 30318, 6023805 }, // "Schematic: Ultra-Spectropic Detection Goggles (#23805)"
    { 30325, 6023806 }, // "Schematic: Hyper-Vision Goggles (#23806)"
    { 30329, 6023807 }, // "Schematic: Adamantite Scope (#23807)"
    { 30332, 6023808 }, // "Schematic: Khorium Scope (#23808)"
    { 30334, 6023809 }, // "Schematic: Stabilized Eternium Scope (#23809)"
    { 30337, 6023810 }, // "Schematic: Crashin' Thrashin' Robot (#23810)"
    { 30341, 6023811 }, // "Schematic: White Smoke Flare (#23811)"
    { 30344, 6023814 }, // "Schematic: Green Smoke Flare (#23814)"
    { 30347, 6023815 }, // "Schematic: Adamantite Shell Machine (#23815)"
    { 30348, 6023816 }, // "Schematic: Fel Iron Toolbox (#23816)"
    { 30349, 6023817 }, // "Schematic: Titanium Toolbox (#23817)"
    { 30547, 6023874 }, // "Schematic: Elemental Seaforium Charge (#23874)"
    { 30548, 6023888 }, // "Schematic: Zapthrottle Mote Extractor (#23888)"
    { 30549, 6023882 }, // "Schematic: Critter Enlarger (#23882)"
    { 30551, 6023883 }, // "Schematic: Healing Potion Injector (#23883)"
    { 30552, 6023884 }, // "Schematic: Mana Potion Injector (#23884)"
    { 30555, 6023885 }, // "Schematic: Remote Mail Terminal (#23885)"
    { 30556, 6023887 }, // "Schematic: Rocket Boots Xtreme (#23887)"
    { 31016, 6024102 }, // "Manual of Eviscerate IX (#24102)"
    { 31018, 6024101 }, // "Book of Ferocious Bite V (#24101)"
    { 31053, 6024158 }, // "Design: Khorium Band of Shadows (#24158)"
    { 31054, 6024159 }, // "Design: Khorium Band of Frost (#24159)"
    { 31055, 6024160 }, // "Design: Khorium Inferno Band (#24160)"
    { 31056, 6024161 }, // "Design: Khorium Band of Leaves (#24161)"
    { 31057, 6024162 }, // "Design: Arcane Khorium Band (#24162)"
    { 31058, 6024163 }, // "Design: Heavy Felsteel Ring (#24163)"
    { 31060, 6024164 }, // "Design: Delicate Eternium Ring (#24164)"
    { 31061, 6024165 }, // "Design: Blazing Eternium Band (#24165)"
    { 31062, 6024174 }, // "Design: Pendant of Frozen Flame (#24174)"
    { 31063, 6024175 }, // "Design: Pendant of Thawing (#24175)"
    { 31064, 6024176 }, // "Design: Pendant of Withering (#24176)"
    { 31065, 6024177 }, // "Design: Pendant of Shadow's End (#24177)"
    { 31066, 6024178 }, // "Design: Pendant of the Null Rune (#24178)"
    { 31067, 6024166 }, // "Design: Thick Felsteel Necklace (#24166)"
    { 31068, 6024167 }, // "Design: Living Ruby Pendant (#24167)"
    { 31070, 6024168 }, // "Design: Braided Eternium Chain (#24168)"
    { 31071, 6024169 }, // "Design: Eye of the Night (#24169)"
    { 31072, 6024170 }, // "Design: Embrace of the Dawn (#24170)"
    { 31076, 6024171 }, // "Design: Chain of the Twilight Owl (#24171)"
    { 31077, 6024172 }, // "Design: Coronet of Verdant Flame (#24172)"
    { 31078, 6024173 }, // "Design: Circlet of Arcane Might (#24173)"
    { 31079, 6024179 }, // "Design: Felsteel Boar (#24179)"
    { 31080, 6024180 }, // "Design: Dawnstone Crab (#24180)"
    { 31081, 6024181 }, // "Design: Living Ruby Serpent (#24181)"
    { 31082, 6024182 }, // "Design: Talasite Owl (#24182)"
    { 31083, 6024183 }, // "Design: Nightseye Panther (#24183)"
    { 31084, 6024193 }, // "Design: Bold Living Ruby (#24193)"
    { 31085, 6024194 }, // "Design: Delicate Living Ruby (#24194)"
    { 31087, 6024195 }, // "Design: Teardrop Living Ruby (#24195)"
    { 31088, 6024196 }, // "Design: Runed Living Ruby (#24196)"
    { 31089, 6024192 }, // "Design: Bright Living Ruby (#24192)"
    { 31090, 6024197 }, // "Design: Subtle Living Ruby (#24197)"
    { 31091, 6024198 }, // "Design: Flashing Living Ruby (#24198)"
    { 31092, 6024199 }, // "Design: Solid Star of Elune (#24199)"
    { 31094, 6024201 }, // "Design: Lustrous Star of Elune (#24201)"
    { 31095, 6024202 }, // "Design: Stormy Star of Elune (#24202)"
    { 31096, 6024203 }, // "Design: Brilliant Dawnstone (#24203)"
    { 31097, 6024204 }, // "Design: Smooth Dawnstone (#24204)"
    { 31098, 6024205 }, // "Design: Rigid Dawnstone (#24205)"
    { 31099, 6024206 }, // "Design: Gleaming Dawnstone (#24206)"
    { 31100, 6024207 }, // "Design: Thick Dawnstone (#24207)"
    { 31101, 6024208 }, // "Design: Mystic Dawnstone (#24208)"
    { 31102, 6024209 }, // "Design: Sovereign Nightseye (#24209)"
    { 31103, 6024210 }, // "Design: Shifting Nightseye (#24210)"
    { 31104, 6024211 }, // "Design: Glowing Nightseye (#24211)"
    { 31105, 6024212 }, // "Design: Royal Nightseye (#24212)"
    { 31106, 6024213 }, // "Design: Inscribed Noble Topaz (#24213)"
    { 31107, 6024214 }, // "Design: Potent Noble Topaz (#24214)"
    { 31108, 6024215 }, // "Design: Luminous Noble Topaz (#24215)"
    { 31109, 6024216 }, // "Design: Glinting Noble Topaz (#24216)"
    { 31110, 6024217 }, // "Design: Enduring Talasite (#24217)"
    { 31111, 6024218 }, // "Design: Radiant Talasite (#24218)"
    { 31112, 6024219 }, // "Design: Dazzling Talasite (#24219)"
    { 31113, 6024220 }, // "Design: Jagged Talasite (#24220)"
    { 31149, 6024200 }, // "Design: Sparkling Star of Elune (#24200)"
    { 31373, 6024316 }, // "Pattern: Spellcloth (#24316)"
    { 31430, 6024292 }, // "Pattern: Mystic Spellthread (#24292)"
    { 31431, 6024293 }, // "Pattern: Silver Spellthread (#24293)"
    { 31432, 6024294 }, // "Pattern: Runic Spellthread (#24294)"
    { 31433, 6024295 }, // "Pattern: Golden Spellthread (#24295)"
    { 31434, 6024296 }, // "Pattern: Unyielding Bracers (#24296)"
    { 31435, 6024297 }, // "Pattern: Bracers of Havok (#24297)"
    { 31437, 6024298 }, // "Pattern: Blackstrike Bracers (#24298)"
    { 31438, 6024299 }, // "Pattern: Cloak of the Black Void (#24299)"
    { 31440, 6024300 }, // "Pattern: Cloak of Eternity (#24300)"
    { 31441, 6024301 }, // "Pattern: White Remedy Cape (#24301)"
    { 31442, 6024302 }, // "Pattern: Unyielding Girdle (#24302)"
    { 31443, 6024303 }, // "Pattern: Girdle of Ruination (#24303)"
    { 31444, 6024304 }, // "Pattern: Black Belt of Knowledge (#24304)"
    { 31448, 6024305 }, // "Pattern: Resolute Cape (#24305)"
    { 31449, 6024306 }, // "Pattern: Vengeance Wrap (#24306)"
    { 31450, 6024307 }, // "Pattern: Manaweave Cloak (#24307)"
    { 31451, 6024308 }, // "Pattern: Whitemend Pants (#24308)"
    { 31452, 6024309 }, // "Pattern: Spellstrike Pants (#24309)"
    { 31453, 6024310 }, // "Pattern: Battlecast Pants (#24310)"
    { 31454, 6024311 }, // "Pattern: Whitemend Hood (#24311)"
    { 31455, 6024312 }, // "Pattern: Spellstrike Hood (#24312)"
    { 31456, 6024313 }, // "Pattern: Battlecast Hood (#24313)"
    { 31459, 6024314 }, // "Pattern: Bag of Jewels (#24314)"
    { 31461, 6024315 }, // "Pattern: Heavy Netherweave Net (#24315)"
    { 31709, 6024345 }, // "Book of Cower IV (#24345)"
    { 32285, 6025526 }, // "Plans: Greater Rune of Warding (#25526)"
    { 32455, 6025720 }, // "Pattern: Heavy Knothide Leather (#25720)"
    { 32457, 6025721 }, // "Pattern: Vindicator's Armor Kit (#25721)"
    { 32458, 6025722 }, // "Pattern: Magister's Armor Kit (#25722)"
    { 32461, 6025725 }, // "Pattern: Riding Crop (#25725)"
    { 32482, 6025726 }, // "Pattern: Comfortable Insoles (#25726)"
    { 32485, 6025728 }, // "Pattern: Stylin' Purple Hat (#25728)"
    { 32487, 6025729 }, // "Pattern: Stylin' Adventure Hat (#25729)"
    { 32488, 6025731 }, // "Pattern: Stylin' Crimson Hat (#25731)"
    { 32489, 6025730 }, // "Pattern: Stylin' Jungle Hat (#25730)"
    { 32490, 6025732 }, // "Pattern: Fel Leather Gloves (#25732)"
    { 32493, 6025733 }, // "Pattern: Fel Leather Boots (#25733)"
    { 32494, 6025734 }, // "Pattern: Fel Leather Leggings (#25734)"
    { 32495, 6025735 }, // "Pattern: Heavy Clefthoof Vest (#25735)"
    { 32496, 6025736 }, // "Pattern: Heavy Clefthoof Leggings (#25736)"
    { 32497, 6025737 }, // "Pattern: Heavy Clefthoof Boots (#25737)"
    { 32498, 6025738 }, // "Pattern: Felstalker Belt (#25738)"
    { 32499, 6025739 }, // "Pattern: Felstalker Bracers (#25739)"
    { 32500, 6025740 }, // "Pattern: Felstalker Breastplate (#25740)"
    { 32501, 6025741 }, // "Pattern: Netherfury Belt (#25741)"
    { 32502, 6025742 }, // "Pattern: Netherfury Leggings (#25742)"
    { 32503, 6025743 }, // "Pattern: Netherfury Boots (#25743)"
    { 32656, 6025846 }, // "Plans: Adamantite Rod (#25846)"
    { 32657, 6025847 }, // "Plans: Eternium Rod (#25847)"
    { 32665, 6025848 }, // "Formula: Runed Adamantite Rod (#25848)"
    { 32667, 6025849 }, // "Formula: Runed Eternium Rod (#25849)"
    { 32765, 6025869 }, // "Recipe: Transmute Earthstorm Diamond (#25869)"
    { 32766, 6025870 }, // "Recipe: Transmute Skyfire Diamond (#25870)"
    { 32814, 6025887 }, // "Schematic: Purple Smoke Flare (#25887)"
    { 32866, 6025902 }, // "Design: Powerful Earthstorm Diamond (#25902)"
    { 32867, 6025903 }, // "Design: Bracing Earthstorm Diamond (#25903)"
    { 32868, 6025905 }, // "Design: Tenacious Earthstorm Diamond (#25905)"
    { 32869, 6025906 }, // "Design: Brutal Earthstorm Diamond (#25906)"
    { 32870, 6025904 }, // "Design: Insightful Earthstorm Diamond (#25904)"
    { 32871, 6025907 }, // "Design: Destructive Skyfire Diamond (#25907)"
    { 32872, 6025909 }, // "Design: Mystical Skyfire Diamond (#25909)"
    { 32873, 6025908 }, // "Design: Swift Skyfire Diamond (#25908)"
    { 32874, 6025910 }, // "Design: Enigmatic Skyfire Diamond (#25910)"
    { 33276, 6027685 }, // "Recipe: Lynx Steak (#27685)"
    { 33277, 6027686 }, // "Recipe: Roasted Moongraze Tenderloin (#27686)"
    { 33278, 6027687 }, // "Recipe: Bat Bites (#27687)"
    { 33279, 6027684 }, // "Recipe: Buzzard Bites (#27684)"
    { 33284, 6027688 }, // "Recipe: Ravager Dog (#27688)"
    { 33285, 6027689 }, // "Recipe: Sporeling Snack (#27689)"
    { 33286, 6027690 }, // "Recipe: Blackened Basilisk (#27690)"
    { 33287, 6027691 }, // "Recipe: Roasted Clefthoof (#27691)"
    { 33288, 6027692 }, // "Recipe: Warp Burger (#27692)"
    { 33289, 6027693 }, // "Recipe: Talbuk Steak (#27693)"
    { 33290, 6027694 }, // "Recipe: Blackened Trout (#27694)"
    { 33291, 6027695 }, // "Recipe: Feltail Delight (#27695)"
    { 33292, 6027696 }, // "Recipe: Blackened Sporefish (#27696)"
    { 33293, 6027697 }, // "Recipe: Grilled Mudfish (#27697)"
    { 33294, 6027698 }, // "Recipe: Poached Bluefish (#27698)"
    { 33295, 6027699 }, // "Recipe: Golden Fish Sticks (#27699)"
    { 33296, 6027700 }, // "Recipe: Spicy Crawdad (#27700)"
    { 33717, 6031501 }, // "Tome of Conjure Food VIII (#31501)"
    { 33992, 6028270 }, // "Formula: Enchant Chest - Major Resilience (#28270)"
    { 33994, 6028271 }, // "Formula: Enchant Gloves - Precise Strikes (#28271)"
    { 33997, 6028272 }, // "Formula: Enchant Gloves - Major Spellpower (#28272)"
    { 33999, 6028273 }, // "Formula: Enchant Gloves - Major Healing (#28273)"
    { 34003, 6028274 }, // "Formula: Enchant Cloak - Spell Penetration (#28274)"
    { 34005, 6028276 }, // "Formula: Enchant Cloak - Greater Arcane Resistance (#28276)"
    { 34006, 6028277 }, // "Formula: Enchant Cloak - Greater Shadow Resistance (#28277)"
    { 34007, 6028279 }, // "Formula: Enchant Boots - Cat's Swiftness (#28279)"
    { 34008, 6028280 }, // "Formula: Enchant Boots - Boar's Speed (#28280)"
    { 34009, 6028282 }, // "Formula: Enchant Shield - Major Stamina (#28282)"
    { 34010, 6028281 }, // "Formula: Enchant Weapon - Major Healing (#28281)"
    { 34069, 6028291 }, // "Design: Smooth Golden Draenite (#28291)"
    { 34590, 6028596 }, // "Design: Bright Blood Garnet (#28596)"
    { 34608, 6028632 }, // "Plans: Adamantite Weightstone (#28632)"
    { 35520, 6029669 }, // "Pattern: Shadow Armor Kit (#29669)"
    { 35521, 6029672 }, // "Pattern: Flame Armor Kit (#29672)"
    { 35522, 6029673 }, // "Pattern: Frost Armor Kit (#29673)"
    { 35523, 6029674 }, // "Pattern: Nature Armor Kit (#29674)"
    { 35524, 6029675 }, // "Pattern: Arcane Armor Kit (#29675)"
    { 35525, 6029677 }, // "Pattern: Enchanted Felscale Leggings (#29677)"
    { 35526, 6029682 }, // "Pattern: Enchanted Felscale Gloves (#29682)"
    { 35527, 6029684 }, // "Pattern: Enchanted Felscale Boots (#29684)"
    { 35528, 6029691 }, // "Pattern: Flamescale Boots (#29691)"
    { 35529, 6029689 }, // "Pattern: Flamescale Leggings (#29689)"
    { 35530, 6029664 }, // "Pattern: Reinforced Mining Bag (#29664)"
    { 35531, 6029693 }, // "Pattern: Flamescale Belt (#29693)"
    { 35532, 6029698 }, // "Pattern: Enchanted Clefthoof Leggings (#29698)"
    { 35533, 6029700 }, // "Pattern: Enchanted Clefthoof Gloves (#29700)"
    { 35534, 6029701 }, // "Pattern: Enchanted Clefthoof Boots (#29701)"
    { 35535, 6029702 }, // "Pattern: Blastguard Pants (#29702)"
    { 35536, 6029703 }, // "Pattern: Blastguard Boots (#29703)"
    { 35537, 6029704 }, // "Pattern: Blastguard Belt (#29704)"
    { 35538, 6029713 }, // "Pattern: Drums of Panic (#29713)"
    { 35539, 6029714 }, // "Pattern: Drums of Restoration (#29714)"
    { 35543, 6029717 }, // "Pattern: Drums of Battle (#29717)"
    { 35544, 6029718 }, // "Pattern: Drums of Speed (#29718)"
    { 35549, 6029719 }, // "Pattern: Cobrahide Leg Armor (#29719)"
    { 35554, 6029722 }, // "Pattern: Nethercobra Leg Armor (#29722)"
    { 35555, 6029720 }, // "Pattern: Clefthide Leg Armor (#29720)"
    { 35557, 6029721 }, // "Pattern: Nethercleft Leg Armor (#29721)"
    { 35558, 6029723 }, // "Pattern: Cobrascale Hood (#29723)"
    { 35559, 6029724 }, // "Pattern: Cobrascale Gloves (#29724)"
    { 35560, 6029725 }, // "Pattern: Windscale Hood (#29725)"
    { 35561, 6029726 }, // "Pattern: Hood of Primal Life (#29726)"
    { 35562, 6029727 }, // "Pattern: Gloves of the Living Touch (#29727)"
    { 35563, 6029728 }, // "Pattern: Windslayer Wraps (#29728)"
    { 35564, 6029729 }, // "Pattern: Living Dragonscale Helm (#29729)"
    { 35567, 6029730 }, // "Pattern: Earthen Netherscale Boots (#29730)"
    { 35568, 6029731 }, // "Pattern: Windstrike Gloves (#29731)"
    { 35572, 6029732 }, // "Pattern: Netherdrake Helm (#29732)"
    { 35573, 6029733 }, // "Pattern: Netherdrake Gloves (#29733)"
    { 35574, 6029734 }, // "Pattern: Thick Netherscale Breastplate (#29734)"
    { 36210, 6030156 }, // "Recipe: Clam Bar (#30156)"
    { 36315, 6030280 }, // "Pattern: Belt of Blasting (#30280)"
    { 36316, 6030281 }, // "Pattern: Belt of the Long Road (#30281)"
    { 36317, 6030282 }, // "Pattern: Boots of Blasting (#30282)"
    { 36318, 6030283 }, // "Pattern: Boots of the Long Road (#30283)"
    { 36349, 6030301 }, // "Pattern: Belt of Natural Power (#30301)"
    { 36351, 6030302 }, // "Pattern: Belt of Deep Shadow (#30302)"
    { 36352, 6030303 }, // "Pattern: Belt of the Black Eagle (#30303)"
    { 36353, 6030304 }, // "Pattern: Monsoon Belt (#30304)"
    { 36355, 6030305 }, // "Pattern: Boots of Natural Grace (#30305)"
    { 36357, 6030306 }, // "Pattern: Boots of Utter Darkness (#30306)"
    { 36358, 6030307 }, // "Pattern: Boots of the Crimson Hawk (#30307)"
    { 36359, 6030308 }, // "Pattern: Hurricane Boots (#30308)"
    { 36389, 6030321 }, // "Plans: Belt of the Guardian (#30321)"
    { 36390, 6030322 }, // "Plans: Red Belt of Battle (#30322)"
    { 36391, 6030323 }, // "Plans: Boots of the Protector (#30323)"
    { 36392, 6030324 }, // "Plans: Red Havoc Boots (#30324)"
    { 36686, 6030483 }, // "Pattern: Shadowcloth (#30483)"
    { 37855, 6030826 }, // "Design: Ring of Arcane Shielding (#30826)"
    { 37873, 6030833 }, // "Pattern: Cloak of Arcane Evasion (#30833)"
    { 37882, 6030842 }, // "Pattern: Flameheart Bracers (#30842)"
    { 37883, 6030843 }, // "Pattern: Flameheart Gloves (#30843)"
    { 37884, 6030844 }, // "Pattern: Flameheart Vest (#30844)"
    { 38473, 6031390 }, // "Plans: Wildguard Breastplate (#31390)"
    { 38475, 6031391 }, // "Plans: Wildguard Leggings (#31391)"
    { 38476, 6031392 }, // "Plans: Wildguard Helm (#31392)"
    { 38477, 6031393 }, // "Plans: Iceguard Breastplate (#31393)"
    { 38478, 6031394 }, // "Plans: Iceguard Leggings (#31394)"
    { 38479, 6031395 }, // "Plans: Iceguard Helm (#31395)"
    { 38503, 6031401 }, // "Design: The Frozen Eye (#31401)"
    { 38504, 6031402 }, // "Design: The Natural Ward (#31402)"
    { 38867, 6031675 }, // "Recipe: Mok'Nathal Shortribs (#31675)"
    { 38868, 6031674 }, // "Recipe: Crunchy Serpent (#31674)"
    { 38960, 6031680 }, // "Recipe: Fel Strength Elixir (#31680)"
    { 38961, 6031682 }, // "Recipe: Fel Mana Potion (#31682)"
    { 38962, 6031681 }, // "Recipe: Fel Regeneration Potion (#31681)"
    { 39374, 6031837 }, // "Codex: Prayer of Shadow Protection II (#31837)"
    { 39451, 6031870 }, // "Design: Great Golden Draenite (#31870)"
    { 39452, 6031875 }, // "Design: Great Dawnstone (#31875)"
    { 39455, 6031871 }, // "Design: Balanced Shadow Draenite (#31871)"
    { 39458, 6031872 }, // "Design: Infused Shadow Draenite (#31872)"
    { 39462, 6031877 }, // "Design: Infused Nightseye (#31877)"
    { 39463, 6031876 }, // "Design: Balanced Nightseye (#31876)"
    { 39466, 6031873 }, // "Design: Veiled Flame Spessarite (#31873)"
    { 39467, 6031874 }, // "Design: Wicked Flame Spessarite (#31874)"
    { 39470, 6031878 }, // "Design: Veiled Noble Topaz (#31878)"
    { 39471, 6031879 }, // "Design: Wicked Noble Topaz (#31879)"
    { 39637, 6032070 }, // "Recipe: Earthen Elixir (#32070)"
    { 39639, 6032071 }, // "Recipe: Elixir of Ironskin (#32071)"
    { 39705, 6032274 }, // "Design: Bold Crimson Spinel (#32274)"
    { 39706, 6032277 }, // "Design: Delicate Crimson Spinel (#32277)"
    { 39710, 6032281 }, // "Design: Teardrop Crimson Spinel (#32281)"
    { 39711, 6032282 }, // "Design: Runed Crimson Spinel (#32282)"
    { 39712, 6032283 }, // "Design: Bright Crimson Spinel (#32283)"
    { 39713, 6032284 }, // "Design: Subtle Crimson Spinel (#32284)"
    { 39714, 6032285 }, // "Design: Flashing Crimson Spinel (#32285)"
    { 39715, 6032286 }, // "Design: Solid Empyrean Sapphire (#32286)"
    { 39716, 6032287 }, // "Design: Sparkling Empyrean Sapphire (#32287)"
    { 39717, 6032288 }, // "Design: Lustrous Empyrean Sapphire (#32288)"
    { 39718, 6032289 }, // "Design: Stormy Empyrean Sapphire (#32289)"
    { 39719, 6032290 }, // "Design: Brilliant Lionseye (#32290)"
    { 39720, 6032291 }, // "Design: Smooth Lionseye (#32291)"
    { 39721, 6032292 }, // "Design: Rigid Lionseye (#32292)"
    { 39722, 6032293 }, // "Design: Gleaming Lionseye (#32293)"
    { 39723, 6032294 }, // "Design: Thick Lionseye (#32294)"
    { 39724, 6032295 }, // "Design: Mystic Lionseye (#32295)"
    { 39725, 6032296 }, // "Design: Great Lionseye (#32296)"
    { 39727, 6032297 }, // "Design: Sovereign Shadowsong Amethyst (#32297)"
    { 39728, 6032298 }, // "Design: Shifting Shadowsong Amethyst (#32298)"
    { 39729, 6032299 }, // "Design: Balanced Shadowsong Amethyst (#32299)"
    { 39730, 6032300 }, // "Design: Infused Shadowsong Amethyst (#32300)"
    { 39731, 6032301 }, // "Design: Glowing Shadowsong Amethyst (#32301)"
    { 39732, 6032302 }, // "Design: Royal Shadowsong Amethyst (#32302)"
    { 39733, 6032303 }, // "Design: Inscribed Pyrestone (#32303)"
    { 39734, 6032304 }, // "Design: Potent Pyrestone (#32304)"
    { 39735, 6032305 }, // "Design: Luminous Pyrestone (#32305)"
    { 39736, 6032306 }, // "Design: Glinting Pyrestone (#32306)"
    { 39737, 6032307 }, // "Design: Veiled Pyrestone (#32307)"
    { 39738, 6032308 }, // "Design: Wicked Pyrestone (#32308)"
    { 39739, 6032309 }, // "Design: Enduring Seaspray Emerald (#32309)"
    { 39740, 6032310 }, // "Design: Radiant Seaspray Emerald (#32310)"
    { 39741, 6032311 }, // "Design: Dazzling Seaspray Emerald (#32311)"
    { 39742, 6032312 }, // "Design: Jagged Seaspray Emerald (#32312)"
    { 39895, 6032381 }, // "Schematic: Fused Wiring (#32381)"
    { 39961, 6032412 }, // "Design: Relentless Earthstorm Diamond (#32412)"
    { 39963, 6032411 }, // "Design: Thundering Skyfire Diamond (#32411)"
    { 39997, 6032429 }, // "Pattern: Boots of Shackled Souls (#32429)"
    { 40001, 6032431 }, // "Pattern: Greaves of Shackled Souls (#32431)"
    { 40002, 6032432 }, // "Pattern: Waistguard of Shackled Souls (#32432)"
    { 40003, 6032433 }, // "Pattern: Redeemed Soul Moccasins (#32433)"
    { 40004, 6032434 }, // "Pattern: Redeemed Soul Wristguards (#32434)"
    { 40005, 6032435 }, // "Pattern: Redeemed Soul Legguards (#32435)"
    { 40006, 6032436 }, // "Pattern: Redeemed Soul Cinch (#32436)"
    { 40020, 6032437 }, // "Pattern: Soulguard Slippers (#32437)"
    { 40021, 6032438 }, // "Pattern: Soulguard Bracers (#32438)"
    { 40023, 6032439 }, // "Pattern: Soulguard Leggings (#32439)"
    { 40024, 6032440 }, // "Pattern: Soulguard Girdle (#32440)"
    { 40033, 6032441 }, // "Plans: Shadesteel Sabots (#32441)"
    { 40034, 6032442 }, // "Plans: Shadesteel Bracers (#32442)"
    { 40035, 6032443 }, // "Plans: Shadesteel Greaves (#32443)"
    { 40036, 6032444 }, // "Plans: Shadesteel Girdle (#32444)"
    { 40060, 6032447 }, // "Pattern: Night's End (#32447)"
    { 41132, 6032736 }, // "Plans: Swiftsteel Bracers (#32736)"
    { 41133, 6032737 }, // "Plans: Swiftsteel Shoulders (#32737)"
    { 41134, 6032738 }, // "Plans: Dawnsteel Bracers (#32738)"
    { 41135, 6032739 }, // "Plans: Dawnsteel Shoulders (#32739)"
    { 41156, 6032744 }, // "Pattern: Bracers of Renewed Life (#32744)"
    { 41157, 6032745 }, // "Pattern: Shoulderpads of Renewed Life (#32745)"
    { 41158, 6032746 }, // "Pattern: Swiftstrike Bracers (#32746)"
    { 41160, 6032747 }, // "Pattern: Swiftstrike Shoulders (#32747)"
    { 41161, 6032748 }, // "Pattern: Bindings of Lightning Reflexes (#32748)"
    { 41162, 6032749 }, // "Pattern: Shoulders of Lightning Reflexes (#32749)"
    { 41163, 6032750 }, // "Pattern: Living Earth Bindings (#32750)"
    { 41164, 6032751 }, // "Pattern: Living Earth Shoulders (#32751)"
    { 41205, 6032754 }, // "Pattern: Bracers of Nimble Thought (#32754)"
    { 41206, 6032755 }, // "Pattern: Mantle of Nimble Thought (#32755)"
    { 41207, 6032752 }, // "Pattern: Swiftheal Wraps (#32752)"
    { 41208, 6032753 }, // "Pattern: Swiftheal Mantle (#32753)"
    { 42546, 6033124 }, // "Pattern: Cloak of Darkness (#33124)"
    { 42558, 6033305 }, // "Design: Don Julio's Heart (#33305)"
    { 42588, 6033155 }, // "Design: Kailee's Rose (#33155)"
    { 42589, 6033156 }, // "Design: Crimson Sun (#33156)"
    { 42590, 6033157 }, // "Design: Falling Star (#33157)"
    { 42591, 6033158 }, // "Design: Stone of Blades (#33158)"
    { 42592, 6033159 }, // "Design: Blood of Amber (#33159)"
    { 42593, 6033160 }, // "Design: Facet of Eternity (#33160)"
    { 42620, 6033165 }, // "Formula: Enchant Weapon - Greater Agility (#33165)"
    { 42662, 6033174 }, // "Plans: Ragesteel Shoulders (#33174)"
    { 42688, 6033186 }, // "Plans: Adamantite Weapon Chain (#33186)"
    { 42731, 6033205 }, // "Pattern: Shadowprowler's Chestguard (#33205)"
    { 42736, 6033209 }, // "Recipe: Flask of Chromatic Wonder (#33209)"
    { 42974, 6033307 }, // "Formula: Enchant Weapon - Executioner (#33307)"
    { 43308, 6034109 }, // "Weather-Beaten Journal (#34109)"
    { 43493, 6033783 }, // "Design: Steady Talasite (#33783)"
    { 43549, 6033792 }, // "Plans: Heavy Copper Longsword (#33792)"
    { 43676, 6033804 }, // "Schematic: Adamantite Arrow Maker (#33804)"
    { 43707, 6033870 }, // "Recipe: Skullfish Soup (#33870)"
    { 43758, 6033871 }, // "Recipe: Stormchops (#33871)"
    { 43761, 6033869 }, // "Recipe: Broiled Bloodfin (#33869)"
    { 43765, 6033873 }, // "Recipe: Spicy Hot Talbuk (#33873)"
    { 43772, 6033875 }, // "Recipe: Kibler's Bits (#33875)"
    { 43779, 6033925 }, // "Recipe: Delicious Chocolate Cake (#33925)"
    { 43846, 6033954 }, // "Plans: Hammer of Righteous Might (#33954)"
    { 44359, 6034200 }, // "Pattern: Quiver of a Thousand Feathers (#34200)"
    { 44391, 6034114 }, // "Schematic: Field Repair Bot 110G (#34114)"
    { 44483, 6037332 }, // "Formula: Enchant Cloak - Superior Frost Resistance (#37332)"
    { 44494, 6037333 }, // "Formula: Enchant Cloak - Superior Nature Resistance (#37333)"
    { 44500, 6037335 }, // "Formula: Enchant Cloak - Superior Agility (#37335)"
    { 44510, 6037329 }, // "Formula: Enchant Weapon - Exceptional Spirit (#37329)"
    { 44513, 6037345 }, // "Formula: Enchant Gloves - Greater Assault (#37345)"
    { 44524, 6037344 }, // "Formula: Enchant Weapon - Icebreaker (#37344)"
    { 44556, 6037331 }, // "Formula: Enchant Cloak - Superior Fire Resistance (#37331)"
    { 44575, 6044484 }, // "Formula: Enchant Bracers - Greater Assault (#44484)"
    { 44576, 6044494 }, // "Formula: Enchant Weapon - Lifeward (#44494)"
    { 44588, 6037340 }, // "Formula: Enchant Chest - Exceptional Resilience (#37340)"
    { 44590, 6037334 }, // "Formula: Enchant Cloak - Superior Shadow Resistance (#37334)"
    { 44591, 6037347 }, // "Formula: Enchant Cloak - Titanweave (#37347)"
    { 44593, 6037326 }, // "Formula: Enchant Bracer - Major Spirit (#37326)"
    { 44595, 6044473 }, // "Formula: Enchant Weapon - Scourgebane (#44473)"
    { 44596, 6037330 }, // "Formula: Enchant Cloak - Superior Arcane Resistance (#37330)"
    { 44598, 6037346 }, // "Formula: Enchant Bracer - Expertise (#37346)"
    { 44616, 6037337 }, // "Formula: Enchant Bracer - Greater Stats (#37337)"
    { 44621, 6037339 }, // "Formula: Enchant Weapon - Giant Slayer (#37339)"
    { 44625, 6044485 }, // "Formula: Enchant Gloves - Armsman (#44485)"
    { 44630, 6037338 }, // "Formula: Enchant Weapon - Greater Savagery (#37338)"
    { 44631, 6037349 }, // "Formula: Enchant Cloak - Shadow Armor (#37349)"
    { 44633, 6037343 }, // "Formula: Enchant Weapon - Exceptional Agility (#37343)"
    { 44768, 6034201 }, // "Pattern: Netherscale Ammo Pouch (#34201)"
    { 44794, 6034221 }, // "Design: Chaotic Skyfire Diamond (#34221)"
    { 44950, 6034261 }, // "Pattern: Green Winter Clothes (#34261)"
    { 44953, 6034262 }, // "Pattern: Winter Boots (#34262)"
    { 44958, 6034319 }, // "Pattern: Red Winter Clothes (#34319)"
    { 45022, 6034413 }, // "Recipe: Hot Apple Cider (#34413)"
    { 45117, 6034491 }, // "Pattern: Bag of Many Hides (#34491)"
    { 45546, 6039152 }, // "Manual: Heavy Frostweave Bandage (#39152)"
    { 45555, 6043018 }, // "Recipe: Mega Mammoth Meal (#43018)"
    { 45556, 6043019 }, // "Recipe: Tender Shoveltusk Steak (#43019)"
    { 45557, 6043020 }, // "Recipe: Spiced Worm Burger (#43020)"
    { 45558, 6043021 }, // "Recipe: Very Burnt Worg (#43021)"
    { 45559, 6043022 }, // "Recipe: Mighty Rhino Dogs (#43022)"
    { 45567, 6043023 }, // "Recipe: Poached Northern Sculpin (#43023)"
    { 45568, 6043024 }, // "Recipe: Firecracker Salmon (#43024)"
    { 45570, 6043026 }, // "Recipe: Imperial Manta Steak (#43026)"
    { 45571, 6043025 }, // "Recipe: Spicy Blue Nettlefish (#43025)"
    { 45695, 6034834 }, // "Recipe: Captain Rumsey's Lager (#34834)"
    { 45765, 6034872 }, // "Formula: Void Shatter (#34872)"
    { 46106, 6035191 }, // "Schematic: Wonderheal XT68 Shades (#35191)"
    { 46107, 6035187 }, // "Schematic: Justicebringer 3000 Specs (#35187)"
    { 46108, 6035189 }, // "Schematic: Powerheal 9000 Lens (#35189)"
    { 46109, 6035190 }, // "Schematic: Hyper-Magnified Moon Specs (#35190)"
    { 46110, 6035192 }, // "Schematic: Primal-Attuned Goggles (#35192)"
    { 46111, 6035186 }, // "Schematic: Annihilator Holo-Gogs (#35186)"
    { 46112, 6035193 }, // "Schematic: Lightning Etched Specs (#35193)"
    { 46113, 6035194 }, // "Schematic: Surestrike Goggles v3.0 (#35194)"
    { 46114, 6035195 }, // "Schematic: Mayhem Projection Goggles (#35195)"
    { 46115, 6035196 }, // "Schematic: Hard Khorium Goggles (#35196)"
    { 46116, 6035197 }, // "Schematic: Quad Deathblow X44 Goggles (#35197)"
    { 46122, 6035198 }, // "Design: Loop of Forged Power (#35198)"
    { 46123, 6035199 }, // "Design: Ring of Flowing Life (#35199)"
    { 46124, 6035200 }, // "Design: Hard Khorium Band (#35200)"
    { 46125, 6035201 }, // "Design: Pendant of Sunfire (#35201)"
    { 46126, 6035202 }, // "Design: Amulet of Flowing Life (#35202)"
    { 46127, 6035203 }, // "Design: Hard Khorium Choker (#35203)"
    { 46128, 6035204 }, // "Pattern: Sunfire Handwraps (#35204)"
    { 46129, 6035205 }, // "Pattern: Hands of Eternal Light (#35205)"
    { 46130, 6035206 }, // "Pattern: Sunfire Robe (#35206)"
    { 46131, 6035207 }, // "Pattern: Robe of Eternal Light (#35207)"
    { 46132, 6035212 }, // "Pattern: Leather Gauntlets of the Sun (#35212)"
    { 46133, 6035213 }, // "Pattern: Fletcher's Gloves of the Phoenix (#35213)"
    { 46134, 6035214 }, // "Pattern: Gloves of Immortal Dusk (#35214)"
    { 46135, 6035215 }, // "Pattern: Sun-Drenched Scale Gloves (#35215)"
    { 46136, 6035216 }, // "Pattern: Leather Chestguard of the Sun (#35216)"
    { 46137, 6035217 }, // "Pattern: Embrace of the Phoenix (#35217)"
    { 46138, 6035218 }, // "Pattern: Carapace of Sun and Shadow (#35218)"
    { 46139, 6035219 }, // "Pattern: Sun-Drenched Scale Chestguard (#35219)"
    { 46140, 6035208 }, // "Plans: Sunblessed Gauntlets (#35208)"
    { 46141, 6035209 }, // "Plans: Hard Khorium Battlefists (#35209)"
    { 46142, 6035210 }, // "Plans: Sunblessed Breastplate (#35210)"
    { 46144, 6035211 }, // "Plans: Hard Khorium Battleplate (#35211)"
    { 46353, 6035273 }, // "Study of Advanced Smelting (#35273)"
    { 46403, 6035322 }, // "Design: Quick Dawnstone (#35322)"
    { 46404, 6035323 }, // "Design: Reckless Noble Topaz (#35323)"
    { 46405, 6035325 }, // "Design: Forceful Talasite (#35325)"
    { 46578, 6035498 }, // "Formula: Enchant Weapon - Deathfrost (#35498)"
    { 46594, 6035500 }, // "Formula: Enchant Chest - Defense (#35500)"
    { 46597, 6035502 }, // "Design: Eternal Earthstorm Diamond (#35502)"
    { 46601, 6035505 }, // "Design: Ember Skyfire Diamond (#35505)"
    { 46684, 6035564 }, // "Recipe: Charred Bear Kabobs (#35564)"
    { 46688, 6035566 }, // "Recipe: Juicy Bear Burger (#35566)"
    { 46697, 6035582 }, // "Schematic: Rocket Boots Xtreme Lite (#35582)"
    { 46775, 6035695 }, // "Design: Figurine - Empyrean Tortoise (#35695)"
    { 46776, 6035696 }, // "Design: Figurine - Khorium Boar (#35696)"
    { 46777, 6035697 }, // "Design: Figurine - Crimson Serpent (#35697)"
    { 46778, 6035698 }, // "Design: Figurine - Shadowsong Panther (#35698)"
    { 46779, 6035699 }, // "Design: Figurine - Seaspray Albatross (#35699)"
    { 46803, 6035708 }, // "Design: Regal Nightseye (#35708)"
    { 47046, 6035752 }, // "Recipe: Guardian's Alchemist Stone (#35752)"
    { 47048, 6035753 }, // "Recipe: Sorcerer's Alchemist Stone (#35753)"
    { 47049, 6035754 }, // "Recipe: Redeemer's Alchemist Stone (#35754)"
    { 47050, 6035755 }, // "Recipe: Assassin's Alchemist Stone (#35755)"
    { 47051, 6035756 }, // "Formula: Enchant Cloak - Steelweave (#35756)"
    { 47053, 6035765 }, // "Design: Forceful Seaspray Emerald (#35765)"
    { 47054, 6035764 }, // "Design: Steady Seaspray Emerald (#35764)"
    { 47055, 6035762 }, // "Design: Reckless Pyrestone (#35762)"
    { 47056, 6035763 }, // "Design: Quick Lionseye (#35763)"
    { 47672, 6044471 }, // "Formula: Enchant Cloak - Mighty Armor (#44471)"
    { 47766, 6037336 }, // "Formula: Enchant Chest - Greater Dodge (#37336)"
    { 47898, 6037348 }, // "Formula: Enchant Cloak - Haste (#37348)"
    { 47899, 6044488 }, // "Formula: Enchant Cloak - Wisdom (#44488)"
    { 47901, 6044491 }, // "Formula: Enchant Boots - Tuskarr's Vitality (#44491)"
    { 48789, 6037504 }, // "Design: Purified Shadowsong Amethyst (#37504)"
    { 49677, 6037915 }, // "Pattern: Dress Shoes (#37915)"
    { 50194, 6038229 }, // "Pattern: Mycah's Botanical Bag (#38229)"
    { 50644, 6038327 }, // "Pattern: Haliscan Jacket (#38327)"
    { 50647, 6038328 }, // "Pattern: Haliscan Pantaloons (#38328)"
    { 50970, 6044509 }, // "Pattern: Trapper's Traveling Pack (#44509)"
    { 50971, 6044510 }, // "Pattern: Mammoth Mining Bag (#44510)"
    { 51568, 6038597 }, // "Pattern: Dark Arctic Boots (#38597)"
    { 51803, 6039153 }, // "Manual: Dense Frostweave Bandage (#39153)"
    { 52733, 6032430 }, // "Pattern: Bracers of Shackled Souls (#32430)"
    { 53056, 6039644 }, // "Recipe: Kungaloosh (#39644)"
    { 53830, 6041576 }, // "Design: Bold Scarlet Ruby (#41576)"
    { 53857, 6041559 }, // "Design: Mystic Sun Crystal (#41559)"
    { 53865, 6041575 }, // "Design: Mysterious Shadow Crystal (#41575)"
    { 53869, 6041574 }, // "Design: Defender's Shadow Crystal (#41574)"
    { 53875, 6041566 }, // "Design: Resplendent Huge Citrine (#41566)"
    { 53877, 6041562 }, // "Design: Deadly Huge Citrine (#41562)"
    { 53879, 6041565 }, // "Design: Lucent Huge Citrine (#41565)"
    { 53884, 6041563 }, // "Design: Durable Huge Citrine (#41563)"
    { 53885, 6041561 }, // "Design: Reckless Huge Citrine (#41561)"
    { 53888, 6041564 }, // "Design: Empowered Huge Citrine (#41564)"
    { 53917, 6041567 }, // "Design: Vivid Dark Jade (#41567)"
    { 53919, 6041572 }, // "Design: Steady Dark Jade (#41572)"
    { 53921, 6041568 }, // "Design: Seer's Dark Jade (#41568)"
    { 53924, 6041571 }, // "Design: Turbid Dark Jade (#41571)"
    { 53929, 6041573 }, // "Design: Opaque Dark Jade (#41573)"
    { 53932, 6041570 }, // "Design: Tense Dark Jade (#41570)"
    { 53933, 6041569 }, // "Design: Shattered Dark Jade (#41569)"
    { 53936, 6044564 }, // "Recipe: Mighty Arcane Protection Potion (#44564)"
    { 53937, 6044566 }, // "Recipe: Mighty Frost Protection Potion (#44566)"
    { 53938, 6044568 }, // "Recipe: Mighty Shadow Protection Potion (#44568)"
    { 53939, 6044565 }, // "Recipe: Mighty Fire Protection Potion (#44565)"
    { 53942, 6044567 }, // "Recipe: Mighty Nature Protection Potion (#44567)"
    { 53943, 6041560 }, // "Design: Stormy Chalcedony (#41560)"
    { 53945, 6041577 }, // "Design: Delicate Scarlet Ruby (#41577)"
    { 53946, 6041718 }, // "Design: Runed Scarlet Ruby (#41718)"
    { 53948, 6041719 }, // "Design: Subtle Scarlet Ruby (#41719)"
    { 53949, 6041578 }, // "Design: Flashing Scarlet Ruby (#41578)"
    { 53950, 6041817 }, // "Design: Fractured Scarlet Ruby (#41817)"
    { 53951, 6041790 }, // "Design: Precise Scarlet Ruby (#41790)"
    { 53952, 6042138 }, // "Design: Solid Sky Sapphire (#42138)"
    { 53954, 6041581 }, // "Design: Lustrous Sky Sapphire (#41581)"
    { 53955, 6041728 }, // "Design: Stormy Sky Sapphire (#41728)"
    { 53957, 6041720 }, // "Design: Smooth Autumn's Glow (#41720)"
    { 53958, 6041580 }, // "Design: Rigid Autumn's Glow (#41580)"
    { 53959, 6041791 }, // "Design: Thick Autumn's Glow (#41791)"
    { 53960, 6041727 }, // "Design: Mystic Autumn's Glow (#41727)"
    { 53961, 6041579 }, // "Design: Quick Autumn's Glow (#41579)"
    { 53962, 6041784 }, // "Design: Sovereign Twilight Opal (#41784)"
    { 53963, 6041747 }, // "Design: Shifting Twilight Opal (#41747)"
    { 53964, 6041785 }, // "Design: Tenuous Twilight Opal (#41785)"
    { 53965, 6041725 }, // "Design: Glowing Twilight Opal (#41725)"
    { 53966, 6041783 }, // "Design: Purified Twilight Opal (#41783)"
    { 53967, 6041701 }, // "Design: Royal Twilight Opal (#41701)"
    { 53968, 6041740 }, // "Design: Mysterious Twilight Opal (#41740)"
    { 53970, 6041796 }, // "Design: Infused Twilight Opal (#41796)"
    { 53971, 6041703 }, // "Design: Regal Twilight Opal (#41703)"
    { 53972, 6041820 }, // "Design: Defender's Twilight Opal (#41820)"
    { 53973, 6041702 }, // "Design: Puissant Twilight Opal (#41702)"
    { 53974, 6041726 }, // "Design: Guardian's Twilight Opal (#41726)"
    { 53975, 6041789 }, // "Design: Inscribed Monarch Topaz (#41789)"
    { 53976, 6041777 }, // "Design: Etched Monarch Topaz (#41777)"
    { 53977, 6041780 }, // "Design: Champion's Monarch Topaz (#41780)"
    { 53978, 6041734 }, // "Design: Resplendent Monarch Topaz (#41734)"
    { 53979, 6041794 }, // "Design: Deadly Monarch Topaz (#41794)"
    { 53980, 6041582 }, // "Design: Glinting Monarch Topaz (#41582)"
    { 53981, 6041733 }, // "Design: Lucent Monarch Topaz (#41733)"
    { 53982, 6041792 }, // "Design: Deft Monarch Topaz (#41792)"
    { 53983, 6041689 }, // "Design: Luminous Monarch Topaz (#41689)"
    { 53984, 6041686 }, // "Design: Potent Monarch Topaz (#41686)"
    { 53985, 6041688 }, // "Design: Veiled Monarch Topaz (#41688)"
    { 53986, 6041730 }, // "Design: Durable Monarch Topaz (#41730)"
    { 53987, 6041690 }, // "Design: Reckless Monarch Topaz (#41690)"
    { 53988, 6041721 }, // "Design: Wicked Monarch Topaz (#41721)"
    { 53990, 6041732 }, // "Design: Empowered Monarch Topaz (#41732)"
    { 53991, 6041687 }, // "Design: Stark Monarch Topaz (#41687)"
    { 53992, 6041779 }, // "Design: Stalwart Monarch Topaz (#41779)"
    { 53993, 6041722 }, // "Design: Glimmering Monarch Topaz (#41722)"
    { 53994, 6041818 }, // "Design: Accurate Monarch Topaz (#41818)"
    { 53995, 6041795 }, // "Design: Timeless Forest Emerald (#41795)"
    { 53996, 6041723 }, // "Design: Jagged Forest Emerald (#41723)"
    { 53997, 6041698 }, // "Design: Vivid Forest Emerald (#41698)"
    { 53998, 6041697 }, // "Design: Enduring Forest Emerald (#41697)"
    { 54000, 6041738 }, // "Design: Steady Forest Emerald (#41738)"
    { 54001, 6041693 }, // "Design: Forceful Forest Emerald (#41693)"
    { 54002, 6041699 }, // "Design: Seer's Forest Emerald (#41699)"
    { 54003, 6041781 }, // "Design: Misty Forest Emerald (#41781)"
    { 54004, 6041782 }, // "Design: Shining Forest Emerald (#41782)"
    { 54005, 6041737 }, // "Design: Turbid Forest Emerald (#41737)"
    { 54006, 6041694 }, // "Design: Intricate Forest Emerald (#41694)"
    { 54008, 6041724 }, // "Design: Sundered Forest Emerald (#41724)"
    { 54009, 6041696 }, // "Design: Lambent Forest Emerald (#41696)"
    { 54010, 6041739 }, // "Design: Opaque Forest Emerald (#41739)"
    { 54011, 6041692 }, // "Design: Energized Forest Emerald (#41692)"
    { 54012, 6041819 }, // "Design: Radiant Forest Emerald (#41819)"
    { 54013, 6041736 }, // "Design: Tense Forest Emerald (#41736)"
    { 54014, 6041735 }, // "Design: Shattered Forest Emerald (#41735)"
    { 54019, 6041793 }, // "Design: Fierce Monarch Topaz (#41793)"
    { 54023, 6041778 }, // "Design: Resolute Monarch Topaz (#41778)"
    { 54197, 6049177 }, // "Tome of Cold Weather Flight (#49177)"
    { 54978, 6041124 }, // "Plans: Reinforced Cobalt Shoulders (#41124)"
    { 54979, 6041123 }, // "Plans: Reinforced Cobalt Helm (#41123)"
    { 54980, 6041120 }, // "Plans: Reinforced Cobalt Legplates (#41120)"
    { 54981, 6041122 }, // "Plans: Reinforced Cobalt Chestpiece (#41122)"
    { 55384, 6041414 }, // "ZZOLD Design: Effulgent Skyflare Diamond (#41414)"
    { 55386, 6041415 }, // "ZZOLD Design: Tireless Skyflare Diamond (#41415)"
    { 55387, 6041416 }, // "ZZOLD Design: Forlorn Skyflare Diamond (#41416)"
    { 55388, 6041417 }, // "ZZOLD Design: Impassive Skyflare Diamond (#41417)"
    { 55389, 6041418 }, // "ZZOLD Design: Chaotic Skyflare Diamond (#41418)"
    { 55390, 6041419 }, // "ZZOLD Design: Destructive Skyflare Diamond (#41419)"
    { 55392, 6041420 }, // "ZZOLD Design: Ember Skyflare Diamond (#41420)"
    { 55393, 6041421 }, // "ZZOLD Design: Enigmatic Skyflare Diamond (#41421)"
    { 55394, 6041422 }, // "ZZOLD Design: Swift Skyflare Diamond (#41422)"
    { 55395, 6041423 }, // "ZZOLDDesign: Thundering Skyflare Diamond (#41423)"
    { 55396, 6041403 }, // "ZZOLD Design: Insightful Earthsiege Diamond (#41403)"
    { 55397, 6041404 }, // "ZZOLD Design: Bracing Earthsiege Diamond (#41404)"
    { 55398, 6041405 }, // "ZZOLD Design: Eternal Earthsiege Diamond (#41405)"
    { 55399, 6041406 }, // "ZZOLD Design: Powerful Earthsiege Diamond (#41406)"
    { 55400, 6041407 }, // "ZZOLD Design: Relentless Earthsiege Diamond (#41407)"
    { 55401, 6041408 }, // "ZZOLD Design: Austere Earthsiege Diamond (#41408)"
    { 55402, 6041409 }, // "ZZOLD Design: Persistent Earthsiege Diamond (#41409)"
    { 55403, 6041410 }, // "ZZOLD Design: Trenchant Earthsiege Diamond (#41410)"
    { 55404, 6041411 }, // "ZZOLD Design: Invigorating Earthsiege Diamond (#41411)"
    { 55405, 6041412 }, // "ZZOLD Design: Beaming Earthsiege Diamond (#41412)"
    { 55407, 6041413 }, // "ZZOLD Design: Revitalizing Skyflare Diamond (#41413)"
    { 55993, 6042172 }, // "Pattern: Red Lumberjack Shirt (#42172)"
    { 55994, 6042173 }, // "Pattern: Blue Lumberjack Shirt (#42173)"
    { 55995, 6042174 }, // "Pattern: Yellow Lumberjack Shirt (#42174)"
    { 55996, 6042175 }, // "Pattern: Green Lumberjack Shirt (#42175)"
    { 55997, 6042177 }, // "Pattern: Red Workman's Shirt (#42177)"
    { 55998, 6042176 }, // "Pattern: Blue Workman's Shirt (#42176)"
    { 55999, 6042178 }, // "Pattern: Rustic Workman's Shirt (#42178)"
    { 56000, 6042179 }, // "Pattern: Green Workman's Shirt (#42179)"
    { 56001, 6042181 }, // "Pattern: Moonshroud (#42181)"
    { 56002, 6042180 }, // "Pattern: Ebonweave (#42180)"
    { 56003, 6042182 }, // "Pattern: Spellweave (#42182)"
    { 56004, 6042183 }, // "Pattern: Abyssal Bag (#42183)"
    { 56005, 6042184 }, // "Pattern: Glacial Bag (#42184)"
    { 56006, 6042185 }, // "Pattern: Mysterious Bag (#42185)"
    { 56007, 6042186 }, // "Pattern: Frostweave Bag (#42186)"
    { 56009, 6042187 }, // "Pattern: Brilliant Spellthread (#42187)"
    { 56011, 6042188 }, // "Pattern: Sapphire Spellthread (#42188)"
    { 56016, 6042189 }, // "Pattern: Wispcloak (#42189)"
    { 56017, 6042190 }, // "Pattern: Deathchill Cloak (#42190)"
    { 56018, 6042191 }, // "Pattern: Hat of Wintry Doom (#42191)"
    { 56019, 6042192 }, // "Pattern: Silky Iceshard Boots (#42192)"
    { 56020, 6042193 }, // "Pattern: Glacial Cord (#42193)"
    { 56021, 6042194 }, // "Pattern: Frostmoon Pants (#42194)"
    { 56022, 6042195 }, // "Pattern: Light Blessed Mittens (#42195)"
    { 56023, 6042196 }, // "Pattern: Aurora Slippers (#42196)"
    { 56024, 6042197 }, // "Pattern: Moonshroud Robe (#42197)"
    { 56025, 6042198 }, // "Pattern: Moonshroud Gloves (#42198)"
    { 56026, 6042199 }, // "Pattern: Ebonweave Robe (#42199)"
    { 56027, 6042200 }, // "Pattern: Ebonweave Gloves (#42200)"
    { 56028, 6042201 }, // "Pattern: Spellweave Robe (#42201)"
    { 56029, 6042202 }, // "Pattern: Spellweave Gloves (#42202)"
    { 56049, 6042298 }, // "Design: Bold Dragon's Eye (#42298)"
    { 56052, 6042301 }, // "Design: Delicate Dragon's Eye (#42301)"
    { 56053, 6042309 }, // "Design: Runed Dragon's Eye (#42309)"
    { 56054, 6042299 }, // "Design: Bright Dragon's Eye (#42299)"
    { 56055, 6042314 }, // "Design: Subtle Dragon's Eye (#42314)"
    { 56056, 6042302 }, // "Design: Flashing Dragon's Eye (#42302)"
    { 56074, 6042300 }, // "Design: Brilliant Dragon's Eye (#42300)"
    { 56076, 6042303 }, // "Design: Fractured Dragon's Eye (#42303)"
    { 56077, 6042304 }, // "Design: Lustrous Dragon's Eye (#42304)"
    { 56079, 6042305 }, // "Design: Mystic Dragon's Eye (#42305)"
    { 56081, 6042306 }, // "Design: Precise Dragon's Eye (#42306)"
    { 56083, 6042307 }, // "Design: Quick Dragon's Eye (#42307)"
    { 56084, 6042308 }, // "Design: Rigid Dragon's Eye (#42308)"
    { 56085, 6042310 }, // "Design: Smooth Dragon's Eye (#42310)"
    { 56086, 6042311 }, // "Design: Solid Dragon's Eye (#42311)"
    { 56087, 6042312 }, // "Design: Sparkling Dragon's Eye (#42312)"
    { 56088, 6042313 }, // "Design: Stormy Dragon's Eye (#42313)"
    { 56089, 6042315 }, // "Design: Thick Dragon's Eye (#42315)"
    { 56496, 6042648 }, // "Design: Titanium Impact Band (#42648)"
    { 56497, 6042649 }, // "Design: Titanium Earthguard Ring (#42649)"
    { 56498, 6042650 }, // "Design: Titanium Spellshock Ring (#42650)"
    { 56499, 6042651 }, // "Design: Titanium Impact Choker (#42651)"
    { 56500, 6042652 }, // "Design: Titanium Earthguard Chain (#42652)"
    { 56501, 6042653 }, // "Design: Titanium Spellshock Necklace (#42653)"
    { 57423, 6043017 }, // "Recipe: Fish Feast (#43017)"
    { 57433, 6043027 }, // "Recipe: Spicy Fried Herring (#43027)"
    { 57434, 6043028 }, // "Recipe: Rhinolicious Wormsteak (#43028)"
    { 57435, 6043029 }, // "Recipe: Critter Bites (#43029)"
    { 57436, 6043030 }, // "Recipe: Hearty Rhino (#43030)"
    { 57437, 6043031 }, // "Recipe: Snapper Extreme (#43031)"
    { 57438, 6043032 }, // "Recipe: Blackened Worg Steak (#43032)"
    { 57439, 6043033 }, // "Recipe: Cuttlesteak (#43033)"
    { 57440, 6043034 }, // "Recipe: Spiced Mammoth Treats (#43034)"
    { 57441, 6043035 }, // "Recipe: Blackened Dragonfin (#43035)"
    { 57442, 6043036 }, // "Recipe: Dragonfin Filet (#43036)"
    { 57443, 6043037 }, // "Recipe: Tracker Snacks (#43037)"
    { 57692, 6044559 }, // "Pattern: Fur Lining - Fire Resist (#44559)"
    { 57694, 6044560 }, // "Pattern: Fur Lining - Frost Resist (#44560)"
    { 57696, 6044561 }, // "Pattern: Fur Lining - Shadow Resist (#44561)"
    { 57699, 6044562 }, // "Pattern: Fur Lining - Nature Resist  (#44562)"
    { 57701, 6044563 }, // "Pattern: Fur Lining - Arcane Resist (#44563)"
    { 58147, 6043317 }, // "Design: Ring of Earthen Might (#43317)"
    { 58148, 6043318 }, // "Design: Ring of Scarlet Shadows (#43318)"
    { 58149, 6043319 }, // "Design: Windfire Band (#43319)"
    { 58150, 6043320 }, // "Design: Ring of Northern Tears (#43320)"
    { 58492, 6043485 }, // "Design: Savage Titanium Ring (#43485)"
    { 58507, 6043497 }, // "Design: Savage Titanium Band (#43497)"
    { 58512, 6043507 }, // "Recipe: Tasty Cupcake (#43507)"
    { 58521, 6043508 }, // "Recipe: Last Week's Mammoth (#43508)"
    { 58523, 6043509 }, // "Recipe: Bad Clams (#43509)"
    { 58525, 6043510 }, // "Recipe: Haunted Herring (#43510)"
    { 58527, 6043505 }, // "Recipe: Gigantic Feast (#43505)"
    { 58528, 6043506 }, // "Recipe: Small Feast (#43506)"
    { 58954, 6043597 }, // "Design: Titanium Frostguard Ring (#43597)"
    { 59390, 6043876 }, // "A Guide to Northern Cloth Scavenging (#43876)"
    { 59619, 6044496 }, // "Formula: Enchant Weapon - Accuracy (#44496)"
    { 59621, 6044492 }, // "Formula: Enchant Weapon - Berserking (#44492)"
    { 59625, 6044495 }, // "Formula: Enchant Weapon - Black Magic (#44495)"
    { 60645, 6044511 }, // "Pattern: Dragonscale Ammo Pouch (#44511)"
    { 60647, 6044512 }, // "Pattern: Nerubian Reinforced Quiver (#44512)"
    { 60691, 6044483 }, // "Formula: Enchant 2H Weapon - Massacre (#44483)"
    { 60692, 6044489 }, // "Formula: Enchant Chest - Powerful Stats (#44489)"
    { 60697, 6044513 }, // "Pattern: Eviscerator's Facemask (#44513)"
    { 60702, 6044514 }, // "Pattern: Eviscerator's Shoulderpads (#44514)"
    { 60703, 6044515 }, // "Pattern: Eviscerator's Chestguard (#44515)"
    { 60704, 6044516 }, // "Pattern: Eviscerator's Bindings (#44516)"
    { 60705, 6044517 }, // "Pattern: Eviscerator's Gauntlets (#44517)"
    { 60706, 6044518 }, // "Pattern: Eviscerator's Waistguard (#44518)"
    { 60707, 6044486 }, // "Formula: Enchant Weapon - Superior Potency (#44486)"
    { 60711, 6044519 }, // "Pattern: Eviscerator's Legguards (#44519)"
    { 60712, 6044520 }, // "Pattern: Eviscerator's Treads (#44520)"
    { 60714, 6044487 }, // "Formula: Enchant Weapon - Mighty Spellpower (#44487)"
    { 60715, 6044521 }, // "Pattern: Overcast Headguard (#44521)"
    { 60716, 6044522 }, // "Pattern: Overcast Spaulders (#44522)"
    { 60718, 6044523 }, // "Pattern: Overcast Chestguard (#44523)"
    { 60720, 6044524 }, // "Pattern: Overcast Bracers (#44524)"
    { 60721, 6044525 }, // "Pattern: Overcast Handwraps (#44525)"
    { 60723, 6044526 }, // "Pattern: Overcast Belt (#44526)"
    { 60725, 6044527 }, // "Pattern: Overcast Leggings (#44527)"
    { 60727, 6044528 }, // "Pattern: Overcast Boots (#44528)"
    { 60728, 6044530 }, // "Pattern: Swiftarrow Helm (#44530)"
    { 60729, 6044531 }, // "Pattern: Swiftarrow Shoulderguards (#44531)"
    { 60730, 6044532 }, // "Pattern: Swiftarrow Hauberk (#44532)"
    { 60731, 6044533 }, // "Pattern: Swiftarrow Bracers (#44533)"
    { 60732, 6044534 }, // "Pattern: Swiftarrow Gauntlets (#44534)"
    { 60734, 6044535 }, // "Pattern: Swiftarrow Belt (#44535)"
    { 60735, 6044536 }, // "Pattern: Swiftarrow Leggings (#44536)"
    { 60737, 6044537 }, // "Pattern: Swiftarrow Boots (#44537)"
    { 60743, 6044538 }, // "Pattern: Stormhide Crown (#44538)"
    { 60746, 6044539 }, // "Pattern: Stormhide Shoulders (#44539)"
    { 60747, 6044540 }, // "Pattern: Stormhide Hauberk (#44540)"
    { 60748, 6044541 }, // "Pattern: Stormhide Wristguards (#44541)"
    { 60749, 6044542 }, // "Pattern: Stormhide Grips (#44542)"
    { 60750, 6044543 }, // "Pattern: Stormhide Belt (#44543)"
    { 60751, 6044544 }, // "Pattern: Stormhide Legguards (#44544)"
    { 60752, 6044545 }, // "Pattern: Stormhide Stompers (#44545)"
    { 60754, 6044546 }, // "Pattern: Giantmaim Legguards (#44546)"
    { 60755, 6044547 }, // "Pattern: Giantmaim Bracers (#44547)"
    { 60756, 6044548 }, // "Pattern: Revenant's Breastplate (#44548)"
    { 60757, 6044549 }, // "Pattern: Revenant's Treads (#44549)"
    { 60758, 6044550 }, // "Pattern: Trollwoven Spaulders (#44550)"
    { 60759, 6044551 }, // "Pattern: Trollwoven Girdle (#44551)"
    { 60760, 6044552 }, // "Pattern: Earthgiving Legguards (#44552)"
    { 60761, 6044553 }, // "Pattern: Earthgiving Boots (#44553)"
    { 60763, 6044490 }, // "Formula: Enchant Boots - Greater Assault (#44490)"
    { 60767, 6044498 }, // "Formula: Enchant Bracer - Superior Spellpower (#44498)"
    { 60866, 6044502 }, // "Schematic: Mechano-hog (#44502)"
    { 60867, 6044503 }, // "Schematic: Mekgineer's Chopper (#44503)"
    { 60996, 6044584 }, // "Pattern: Polar Vest (#44584)"
    { 60997, 6044585 }, // "Pattern: Polar Cord (#44585)"
    { 60998, 6044586 }, // "Pattern: Polar Boots (#44586)"
    { 60999, 6044587 }, // "Pattern: Icy Scale Chestguard (#44587)"
    { 61000, 6044588 }, // "Pattern: Icy Scale Belt (#44588)"
    { 61002, 6044589 }, // "Pattern: Icy Scale Boots (#44589)"
    { 61024, 6044602 }, // "Tome of Dalaran Intellect (#44602)"
    { 61305, 6044709 }, // "Tome of Polymorph: Black Cat (#44709)"
    { 61316, 6044714 }, // "Tome of Dalaran Brilliance (#44714)"
    { 61721, 6044793 }, // "Tome of Polymorph: Rabbit (#44793)"
    { 61780, 6044811 }, // "Tome of Polymorph: Turkey (#44811)"
    { 62044, 6044862 }, // "Recipe: Pumpkin Pie (#44862)"
    { 62045, 6044861 }, // "Recipe: Slow-Roasted Turkey (#44861)"
    { 62049, 6044858 }, // "Recipe: Cranberry Chutney (#44858)"
    { 62050, 6044860 }, // "Recipe: Spice Bread Stuffing (#44860)"
    { 62051, 6044859 }, // "Recipe: Candied Sweet Potato (#44859)"
    { 62176, 6044932 }, // "Pattern: Windripper Boots (#44932)"
    { 62177, 6044933 }, // "Pattern: Windripper Leggings (#44933)"
    { 62202, 6044937 }, // "Plans: Titanium Plating (#44937)"
    { 62256, 6044944 }, // "Formula: Enchant Bracer - Major Stamina (#44944)"
    { 62257, 6044945 }, // "Formula: Enchant Weapon - Titanguard (#44945)"
    { 62350, 6044954 }, // "Recipe: Worg Tartare (#44954)"
    { 62948, 6045059 }, // "Formula: Enchant Staff - Greater Spellpower (#45059)"
    { 63187, 6045088 }, // "Plans: Belt of the Titans (#45088)"
    { 63188, 6045089 }, // "Plans: Battlelord's Plate Boots (#45089)"
    { 63189, 6045090 }, // "Plans: Plate Girdle of Righteousness (#45090)"
    { 63190, 6045091 }, // "Plans: Treads of Destiny (#45091)"
    { 63191, 6045092 }, // "Plans: Indestructible Plate Girdle (#45092)"
    { 63192, 6045093 }, // "Plans: Spiked Deathdealers (#45093)"
    { 63194, 6045094 }, // "Pattern: Belt of Dragons (#45094)"
    { 63195, 6045095 }, // "Pattern: Boots of Living Scale (#45095)"
    { 63196, 6045096 }, // "Pattern: Blue Belt of Chaos (#45096)"
    { 63197, 6045097 }, // "Pattern: Lightning Grounded Boots (#45097)"
    { 63198, 6045098 }, // "Pattern: Death-warmed Belt (#45098)"
    { 63199, 6045099 }, // "Pattern: Footpads of Silence (#45099)"
    { 63200, 6045100 }, // "Pattern: Belt of Arctic Life (#45100)"
    { 63201, 6045101 }, // "Pattern: Boots of Wintry Endurance (#45101)"
    { 63203, 6045102 }, // "Pattern: Sash of Ancient Power (#45102)"
    { 63204, 6045103 }, // "Pattern: Spellslinger's Slippers (#45103)"
    { 63205, 6045104 }, // "Pattern: Cord of the White Dawn (#45104)"
    { 63206, 6045105 }, // "Pattern: Savior's Slippers (#45105)"
    { 63924, 6045774 }, // "Pattern: Emerald Bag (#45774)"
    { 64051, 6046108 }, // "Technique: Rituals of the New Moon (#46108)"
    { 64441, 6046027 }, // "Formula: Enchant Weapon - Blade Ward (#46027)"
    { 64579, 6046348 }, // "Formula: Enchant Weapon - Blood Draining (#46348)"
    { 65454, 6046710 }, // "Recipe: Bread of the Dead (#46710)"
    { 66034, 6046806 }, // "Recipe: Candied Sweet Potato (#46806)"
    { 66035, 6046805 }, // "Recipe: Cranberry Chutney (#46805)"
    { 66036, 6046804 }, // "Recipe: Pumpkin Pie (#46804)"
    { 66037, 6046807 }, // "Recipe: Slow-Roasted Turkey (#46807)"
    { 66038, 6046803 }, // "Recipe: Spice Bread Stuffing (#46803)"
    { 66338, 6046897 }, // "Design: Enduring Eye of Zul (#46897)"
    { 66428, 6046898 }, // "Design: Steady Eye of Zul (#46898)"
    { 66429, 6046899 }, // "Design: Vivid Eye of Zul (#46899)"
    { 66430, 6046900 }, // "Design: Dazzling Eye of Zul (#46900)"
    { 66431, 6046901 }, // "Design: Jagged Eye of Zul (#46901)"
    { 66432, 6046902 }, // "Design: Timeless Eye of Zul (#46902)"
    { 66433, 6046903 }, // "Design: Seer's Eye of Zul (#46903)"
    { 66434, 6046904 }, // "Design: Forceful Eye of Zul (#46904)"
    { 66435, 6046905 }, // "Design: Misty Eye of Zul (#46905)"
    { 66436, 6046906 }, // "Design: Sundered Eye of Zul (#46906)"
    { 66437, 6046907 }, // "Design: Shining Eye of Zul (#46907)"
    { 66438, 6046908 }, // "Design: Tense Eye of Zul (#46908)"
    { 66439, 6046909 }, // "Design: Lambent Eye of Zul (#46909)"
    { 66440, 6046910 }, // "Design: Intricate Eye of Zul (#46910)"
    { 66441, 6046911 }, // "Design: Radiant Eye of Zul (#46911)"
    { 66442, 6046912 }, // "Design: Energized Eye of Zul (#46912)"
    { 66443, 6046913 }, // "Design: Shattered Eye of Zul (#46913)"
    { 66444, 6046914 }, // "Design: Opaque Eye of Zul (#46914)"
    { 66445, 6046915 }, // "Design: Turbid Eye of Zul (#46915)"
    { 66446, 6046916 }, // "Design: Runed Cardinal Ruby (#46916)"
    { 66447, 6046917 }, // "Design: Bold Cardinal Ruby (#46917)"
    { 66448, 6046918 }, // "Design: Delicate Cardinal Ruby (#46918)"
    { 66449, 6046919 }, // "Design: Bright Cardinal Ruby (#46919)"
    { 66450, 6046920 }, // "Design: Precise Cardinal Ruby (#46920)"
    { 66451, 6046921 }, // "Design: Fractured Cardinal Ruby (#46921)"
    { 66452, 6046922 }, // "Design: Subtle Cardinal Ruby (#46922)"
    { 66453, 6046923 }, // "Design: Flashing Cardinal Ruby (#46923)"
    { 66497, 6046924 }, // "Design: Solid Majestic Zircon (#46924)"
    { 66498, 6046925 }, // "Design: Sparkling Majestic Zircon (#46925)"
    { 66499, 6046926 }, // "Design: Stormy Majestic Zircon (#46926)"
    { 66500, 6046927 }, // "Design: Lustrous Majestic Zircon (#46927)"
    { 66501, 6046928 }, // "Design: Rigid King's Amber (#46928)"
    { 66502, 6046929 }, // "Design: Smooth King's Amber (#46929)"
    { 66503, 6046930 }, // "Design: Brilliant King's Amber (#46930)"
    { 66504, 6046931 }, // "Design: Thick King's Amber (#46931)"
    { 66505, 6046932 }, // "Design: Mystic King's Amber (#46932)"
    { 66506, 6046933 }, // "Design: Quick King's Amber (#46933)"
    { 66553, 6046934 }, // "Design: Balanced Dreadstone (#46934)"
    { 66554, 6046935 }, // "Design: Sovereign Dreadstone (#46935)"
    { 66555, 6046936 }, // "Design: Glowing Dreadstone (#46936)"
    { 66556, 6046937 }, // "Design: Purified Dreadstone (#46937)"
    { 66557, 6046938 }, // "Design: Shifting Dreadstone (#46938)"
    { 66558, 6046939 }, // "Design: Royal Dreadstone (#46939)"
    { 66559, 6046940 }, // "Design: Regal Dreadstone (#46940)"
    { 66560, 6046941 }, // "Design: Defender's Dreadstone (#46941)"
    { 66561, 6046942 }, // "Design: Guardian's Dreadstone (#46942)"
    { 66562, 6046943 }, // "Design: Mysterious Dreadstone (#46943)"
    { 66563, 6046944 }, // "Design: Puissant Dreadstone (#46944)"
    { 66564, 6046945 }, // "Design: Infused Dreadstone (#46945)"
    { 66565, 6046946 }, // "Design: Tenuous Dreadstone (#46946)"
    { 66566, 6046947 }, // "Design: Luminous Ametrine (#46947)"
    { 66567, 6046948 }, // "Design: Inscribed Ametrine (#46948)"
    { 66568, 6046949 }, // "Design: Deadly Ametrine (#46949)"
    { 66569, 6046950 }, // "Design: Potent Ametrine (#46950)"
    { 66570, 6046951 }, // "Design: Veiled Ametrine (#46951)"
    { 66571, 6046952 }, // "Design: Durable Ametrine (#46952)"
    { 66572, 6046953 }, // "Design: Etched Ametrine (#46953)"
    { 66573, 6046956 }, // "Design: Pristine Ametrine (#46956)"
    { 66574, 6047007 }, // "Design: Reckless Ametrine (#47007)"
    { 66575, 6047008 }, // "Design: Glinting Ametrine (#47008)"
    { 66576, 6047010 }, // "Design: Accurate Ametrine (#47010)"
    { 66577, 6047011 }, // "Design: Wicked Ametrine (#47011)"
    { 66578, 6047012 }, // "Design: Glimmering Ametrine (#47012)"
    { 66579, 6047015 }, // "Design: Champion's Ametrine (#47015)"
    { 66580, 6047016 }, // "Design: Empowered Ametrine (#47016)"
    { 66581, 6047017 }, // "Design: Stalwart Ametrine (#47017)"
    { 66582, 6047018 }, // "Design: Resplendent Ametrine (#47018)"
    { 66583, 6047019 }, // "Design: Fierce Ametrine (#47019)"
    { 66584, 6047020 }, // "Design: Deft Ametrine (#47020)"
    { 66585, 6047021 }, // "Design: Lucent Ametrine (#47021)"
    { 66586, 6047022 }, // "Design: Resolute Ametrine (#47022)"
    { 66587, 6047023 }, // "Design: Stark Ametrine (#47023)"
    { 67025, 6047507 }, // "Recipe: Flask of the North (#47507)"
    { 67064, 6047657 }, // "Pattern: Royal Moonshroud Robe (#47657)"
    { 67065, 6047656 }, // "Pattern: Royal Moonshroud Bracers (#47656)"
    { 67066, 6047655 }, // "Pattern: Merlin's Robe (#47655)"
    { 67079, 6047654 }, // "Pattern: Bejeweled Wizard's Bracers (#47654)"
    { 67080, 6047628 }, // "Pattern: Ensorcelled Nerubian Breastplate (#47628)"
    { 67081, 6047629 }, // "Pattern: Black Chitin Bracers (#47629)"
    { 67082, 6047630 }, // "Pattern: Crusader's Dragonscale Breastplate (#47630)"
    { 67083, 6047631 }, // "Pattern: Crusader's Dragonscale Bracers (#47631)"
    { 67084, 6047632 }, // "Pattern: Lunar Eclipse Robes (#47632)"
    { 67085, 6047633 }, // "Pattern: Moonshadow Armguards (#47633)"
    { 67086, 6047634 }, // "Pattern: Knightbane Carapace (#47634)"
    { 67087, 6047635 }, // "Pattern: Bracers of Swift Death (#47635)"
    { 67091, 6047622 }, // "Plans: Breastplate of the White Knight (#47622)"
    { 67092, 6047623 }, // "Plans: Saronite Swordbreakers (#47623)"
    { 67093, 6047624 }, // "Plans: Titanium Razorplate (#47624)"
    { 67094, 6047625 }, // "Plans: Titanium Spikeguards (#47625)"
    { 67095, 6047626 }, // "Plans: Sunforged Breastplate (#47626)"
    { 67096, 6047627 }, // "Plans: Sunforged Bracers (#47627)"
    { 67130, 6047640 }, // "Plans: Breastplate of the White Knight (#47640)"
    { 67131, 6047641 }, // "Plans: Saronite Swordbreakers (#47641)"
    { 67132, 6047644 }, // "Plans: Titanium Razorplate (#47644)"
    { 67133, 6047645 }, // "Plans: Titanium Spikeguards (#47645)"
    { 67134, 6047643 }, // "Plans: Sunforged Breastplate (#47643)"
    { 67135, 6047642 }, // "Plans: Sunforged Bracers (#47642)"
    { 67136, 6047650 }, // "Pattern: Ensorcelled Nerubian Breastplate (#47650)"
    { 67137, 6047646 }, // "Pattern: Black Chitin Bracers (#47646)"
    { 67138, 6047649 }, // "Pattern: Crusader's Dragonscale Breastplate (#47649)"
    { 67139, 6047647 }, // "Pattern: Bracers of Swift Death (#47647)"
    { 67140, 6047652 }, // "Pattern: Lunar Eclipse Robes (#47652)"
    { 67141, 6047653 }, // "Pattern: Moonshadow Armguards (#47653)"
    { 67142, 6047651 }, // "Pattern: Knightbane Carapace (#47651)"
    { 67143, 6047648 }, // "Pattern: Crusader's Dragonscale Bracers (#47648)"
    { 67144, 6047636 }, // "Pattern: Royal Moonshroud Robe (#47636)"
    { 67145, 6047639 }, // "Pattern: Bejeweled Wizard's Bracers (#47639)"
    { 67146, 6047638 }, // "Pattern: Merlin's Robe (#47638)"
    { 67147, 6047637 }, // "Pattern: Royal Moonshroud Bracers (#47637)"
    { 68067, 6049050 }, // "Schematic: Jeeves (#49050)"
    { 68253, 6049112 }, // "Design: Nightmare Tear (#49112)"
    { 70550, 6049953 }, // "Pattern: Leggings of Woven Death (#49953)"
    { 70551, 6049954 }, // "Pattern: Deathfrost Boots (#49954)"
    { 70552, 6049955 }, // "Pattern: Lightweave Leggings (#49955)"
    { 70553, 6049956 }, // "Pattern: Sandals of Consecration (#49956)"
    { 70554, 6049957 }, // "Pattern: Legwraps of Unleashed Nature (#49957)"
    { 70555, 6049958 }, // "Pattern: Blessed Cenarion Boots (#49958)"
    { 70556, 6049959 }, // "Pattern: Bladeborn Leggings (#49959)"
    { 70557, 6049961 }, // "Pattern: Footpads of Impending Death (#49961)"
    { 70558, 6049962 }, // "Pattern: Lightning-Infused Leggings (#49962)"
    { 70559, 6049963 }, // "Pattern: Earthsoul Boots (#49963)"
    { 70560, 6049965 }, // "Pattern: Draconic Bonesplinter Legguards (#49965)"
    { 70561, 6049966 }, // "Pattern: Rock-Steady Treads (#49966)"
    { 70562, 6049969 }, // "Plans: Puresteel Legplates (#49969)"
    { 70563, 6049970 }, // "Plans: Protectors of Life (#49970)"
    { 70565, 6049971 }, // "Plans: Legplates of Painful Death (#49971)"
    { 70566, 6049972 }, // "Plans: Hellfrozen Bonegrinders (#49972)"
    { 70567, 6049973 }, // "Plans: Pillars of Might (#49973)"
    { 70568, 6049974 }, // "Plans: Boots of Kingly Upheaval (#49974)"
    { 71015, 6050167 }, // "Technique: Glyph of Rapid Rejuvenation (#50167)"
    { 71101, 6050166 }, // "Technique: Glyph of Eternal Water (#50166)"
    { 71102, 6050168 }, // "Technique: Glyph of Quick Decay (#50168)"
    { 71692, 6050406 }, // "Formula: Enchant Gloves - Angler (#50406)"
    { 72952, 6052022 }, // "Plans: Shatter Rounds (#52022)"
    { 72953, 6052023 }, // "Plans: Iceblade Arrow (#52023)"
    { 75597, 6054798 }, // "Pattern: Frosty Flying Carpet (#54798)"
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
