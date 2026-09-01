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
    {"Recipe: Codex of Holy Word: Shield III (#3122)", 6003122},
    {"Recipe: Grimoire of Immolate III (#4200)", 6004200},
    {"Recipe: Grimoire of Inferno (#9214)", 6009214},
    {"Recipe: Pattern: Fine Leather Boots (#2406)", 6002406},
    {"Recipe: Pattern: White Leather Jerkin (#2407)", 6002407},
    {"Recipe: Pattern: Fine Leather Gloves (#2408)", 6002408},
    {"Recipe: Pattern: Dark Leather Tunic (#2409)", 6002409},
    {"Recipe: Elixir of Lesser Agility (#3396)", 6003396},
    {"Recipe: Swiftness Potion (#2555)", 6002555},
    {"Recipe: Pattern: Red Linen Robe (#2598)", 6002598},
    {"Recipe: Pattern: Gray Woolen Robe (#2601)", 6002601},
    {"Recipe: Goretusk Liver Pie (#2697)", 6002697},
    {"Recipe: Westfall Stew (#728)", 6000728},
    {"Recipe: Cooked Crab Claw (#2698)", 6002698},
    {"Recipe: Redridge Goulash (#2699)", 6002699},
    {"Recipe: Succulent Pork Ribs (#2700)", 6002700},
    {"Recipe: Seasoned Wolf Kabob (#2701)", 6002701},
    {"Recipe: Plans: Runed Copper Breastplate (#2881)", 6002881},
    {"Recipe: Plans: Silvered Bronze Breastplate (#5578)", 6005578},
    {"Recipe: Beer Basted Boar Ribs (#2889)", 6002889},
    {"Recipe: Minor Magic Resistance Potion (#3393)", 6003393},
    {"Recipe: Potion of Curing (#3394)", 6003394},
    {"Recipe: Limited Invulnerability Potion (#3395)", 6003395},
    {"Recipe: Elixir of Ogre's Strength (#6211)", 6006211},
    {"Recipe: Elixir of Minor Agility (#2553)", 6002553},
    {"Recipe: Plans: Deadly Bronze Poniard (#2883)", 6002883},
    {"Recipe: Plans: Mighty Iron Hammer (#3608)", 6003608},
    {"Recipe: Plans: Copper Chain Vest (#3609)", 6003609},
    {"Recipe: Plans: Gemmed Copper Gauntlets (#3610)", 6003610},
    {"Recipe: Plans: Silvered Bronze Shoulders (#2882)", 6002882},
    {"Recipe: Plans: Green Iron Boots (#3611)", 6003611},
    {"Recipe: Plans: Green Iron Gauntlets (#3612)", 6003612},
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
    {"Recipe: Plans: Hardened Iron Shortsword (#12162)", 6012162},
    {"Recipe: Plans: Jade Serpentblade (#3866)", 6003866},
    {"Recipe: Plans: Solid Iron Maul (#10858)", 6010858},
    {"Recipe: Plans: Golden Iron Destroyer (#3867)", 6003867},
    {"Recipe: Plans: Moonsteel Broadsword (#12163)", 6012163},
    {"Recipe: Plans: Frost Tiger Blade (#3868)", 6003868},
    {"Recipe: Plans: Massive Iron Axe (#12164)", 6012164},
    {"Recipe: Plans: Shadow Crescent Axe (#3869)", 6003869},
    {"Recipe: Plans: Golden Scale Coif (#6047)", 6006047},
    {"Recipe: Plans: Green Iron Shoulders (#3870)", 6003870},
    {"Recipe: Plans: Golden Scale Shoulders (#3871)", 6003871},
    {"Recipe: Plans: Golden Scale Leggings (#3872)", 6003872},
    {"Recipe: Plans: Golden Scale Cuirass (#3873)", 6003873},
    {"Recipe: Plans: Polished Steel Boots (#3874)", 6003874},
    {"Recipe: Plans: Golden Scale Boots (#3875)", 6003875},
    {"Recipe: Pattern: Green Woolen Bag (#4292)", 6004292},
    {"Recipe: Pattern: Hillman's Leather Vest (#4293)", 6004293},
    {"Recipe: Pattern: Dark Leather Gloves (#7360)", 6007360},
    {"Recipe: Pattern: Hillman's Belt (#4294)", 6004294},
    {"Recipe: Pattern: Dark Leather Shoulders (#4296)", 6004296},
    {"Recipe: Pattern: Barbaric Gloves (#4297)", 6004297},
    {"Recipe: Pattern: Green Leather Armor (#7613)", 6007613},
    {"Recipe: Pattern: Guardian Armor (#4299)", 6004299},
    {"Recipe: Pattern: Guardian Belt (#4298)", 6004298},
    {"Recipe: Pattern: Guardian Leather Bracers (#4300)", 6004300},
    {"Recipe: Pattern: Gem-studded Leather Belt (#14635)", 6014635},
    {"Recipe: Pattern: Barbaric Belt (#4301)", 6004301},
    {"Recipe: Pattern: Heavy Woolen Cloak (#4346)", 6004346},
    {"Recipe: Pattern: Red Woolen Boots (#4345)", 6004345},
    {"Recipe: Pattern: Reinforced Woolen Shoulders (#4347)", 6004347},
    {"Recipe: Pattern: Phoenix Pants (#4349)", 6004349},
    {"Recipe: Pattern: Azure Silk Gloves (#7114)", 6007114},
    {"Recipe: Pattern: Spider Silk Slippers (#4350)", 6004350},
    {"Recipe: Pattern: Enchanter's Cowl (#14630)", 6014630},
    {"Recipe: Pattern: Shadow Hood (#4351)", 6004351},
    {"Recipe: Pattern: Boots of the Enchanter (#4352)", 6004352},
    {"Recipe: Pattern: Icy Cloak (#4355)", 6004355},
    {"Recipe: Pattern: Spider Belt (#4353)", 6004353},
    {"Recipe: Pattern: Star Belt (#4356)", 6004356},
    {"Recipe: Pattern: Phoenix Gloves (#4348)", 6004348},
    {"Recipe: Pattern: Bright Yellow Shirt (#14627)", 6014627},
    {"Recipe: Pattern: Dark Silk Shirt (#6401)", 6006401},
    {"Recipe: Pattern: Rich Purple Silk Shirt (#4354)", 6004354},
    {"Recipe: Pattern: Black Swashbuckler's Shirt (#10728)", 6010728},
    {"Recipe: Schematic: Mechanical Squirrel Box (#4408)", 6004408},
    {"Recipe: Schematic: Small Seaforium Charge (#4409)", 6004409},
    {"Recipe: Schematic: Lovingly Crafted Boomstick (#13309)", 6013309},
    {"Recipe: Schematic: Shadow Goggles (#4410)", 6004410},
    {"Recipe: Schematic: Flame Deflector (#4411)", 6004411},
    {"Recipe: Schematic: Minor Recombobulator (#14639)", 6014639},
    {"Recipe: Schematic: Moonsight Rifle (#4412)", 6004412},
    {"Recipe: Schematic: Ice Deflector (#13308)", 6013308},
    {"Recipe: Schematic: Discombobulator Ray (#4413)", 6004413},
    {"Recipe: Schematic: Portable Bronze Mortar (#4414)", 6004414},
    {"Recipe: Schematic: Craftsman's Monocle (#4415)", 6004415},
    {"Recipe: Schematic: Goblin Land Mine (#4416)", 6004416},
    {"Recipe: Schematic: Mechanical Dragonling (#13311)", 6013311},
    {"Recipe: Schematic: Gnomish Cloaking Device (#7742)", 6007742},
    {"Recipe: Schematic: Large Seaforium Charge (#4417)", 6004417},
    {"Recipe: Schematic: Accurate Scope (#13310)", 6013310},
    {"Recipe: Barbecued Buzzard Wing (#4609)", 6004609},
    {"Recipe: Pattern: Raptor Hide Harness (#13287)", 6013287},
    {"Recipe: Pattern: Raptor Hide Belt (#13288)", 6013288},
    {"Recipe: Discolored Healing Potion (#4597)", 6004597},
    {"Recipe: Lesser Stoneshield Potion (#4624)", 6004624},
    {"Recipe: Pattern: Kodo Hide Bag (#5083)", 6005083},
    {"Recipe: Codex of Shadow Protection II (#8993)", 6008993},
    {"Recipe: Kaldorei Spider Kabob (#5482)", 6005482},
    {"Recipe: Scorpid Surprise (#5483)", 6005483},
    {"Recipe: Roasted Kodo Meat (#5484)", 6005484},
    {"Recipe: Fillet of Frenzy (#5485)", 6005485},
    {"Recipe: Strider Stew (#5486)", 6005486},
    {"Recipe: Dig Rat Stew (#5487)", 6005487},
    {"Recipe: Crispy Lizard Tail (#5488)", 6005488},
    {"Recipe: Lean Venison (#5489)", 6005489},
    {"Recipe: Clam Chowder (#5528)", 6005528},
    {"Recipe: Plans: Iridescent Hammer (#5543)", 6005543},
    {"Recipe: Rage Potion (#5640)", 6005640},
    {"Recipe: Great Rage Potion (#5643)", 6005643},
    {"Recipe: Free Action Potion (#5642)", 6005642},
    {"Recipe: Pattern: Red Linen Bag (#5771)", 6005771},
    {"Recipe: Pattern: Red Woolen Bag (#5772)", 6005772},
    {"Recipe: Pattern: Robes of Arcana (#5773)", 6005773},
    {"Recipe: Pattern: Green Silk Pack (#5774)", 6005774},
    {"Recipe: Pattern: Black Silk Pack (#5775)", 6005775},
    {"Recipe: Pattern: Murloc Scale Belt (#5786)", 6005786},
    {"Recipe: Pattern: Murloc Scale Breastplate (#5787)", 6005787},
    {"Recipe: Pattern: Thick Murloc Armor (#5788)", 6005788},
    {"Recipe: Pattern: Murloc Scale Bracers (#5789)", 6005789},
    {"Recipe: Pattern: Fine Leather Pants (#5972)", 6005972},
    {"Recipe: Pattern: Barbaric Leggings (#5973)", 6005973},
    {"Recipe: Pattern: Guardian Cloak (#5974)", 6005974},
    {"Recipe: Giant Clam Scorcho (#6039)", 6006039},
    {"Recipe: Plans: Iron Shield Spike (#6044)", 6006044},
    {"Recipe: Plans: Iron Counterweight (#6045)", 6006045},
    {"Recipe: Plans: Steel Weapon Chain (#6046)", 6006046},
    {"Recipe: Holy Protection Potion (#6053)", 6006053},
    {"Recipe: Shadow Protection Potion (#6054)", 6006054},
    {"Recipe: Fire Protection Potion (#6055)", 6006055},
    {"Recipe: Frost Protection Potion (#6056)", 6006056},
    {"Recipe: Nature Protection Potion (#6057)", 6006057},
    {"Recipe: Formula: Enchant Chest - Minor Mana (#6342)", 6006342},
    {"Recipe: Pattern: Red Linen Vest (#6271)", 6006271},
    {"Recipe: Pattern: Blue Linen Vest (#6270)", 6006270},
    {"Recipe: Pattern: Blue Linen Robe (#6272)", 6006272},
    {"Recipe: Pattern: Blue Overalls (#6274)", 6006274},
    {"Recipe: Pattern: Greater Adept's Robe (#6275)", 6006275},
    {"Recipe: Brilliant Smallfish (#6325)", 6006325},
    {"Recipe: Slitherskin Mackerel (#6326)", 6006326},
    {"Recipe: Longjaw Mud Snapper (#6328)", 6006328},
    {"Recipe: Loch Frenzy Delight (#6329)", 6006329},
    {"Recipe: Bristle Whisker Catfish (#6330)", 6006330},
    {"Recipe: Formula: Enchant Bracer - Minor Spirit (#6344)", 6006344},
    {"Recipe: Formula: Enchant Chest - Lesser Mana (#6346)", 6006346},
    {"Recipe: Formula: Enchant Bracer - Minor Strength (#6347)", 6006347},
    {"Recipe: Formula: Enchant Weapon - Minor Beastslayer (#6348)", 6006348},
    {"Recipe: Formula: Enchant 2H Weapon - Lesser Intellect (#6349)", 6006349},
    {"Recipe: Rainbow Fin Albacore (#6368)", 6006368},
    {"Recipe: Rockscale Cod (#6369)", 6006369},
    {"Recipe: Formula: Enchant Bracer - Lesser Spirit (#6375)", 6006375},
    {"Recipe: Formula: Enchant Boots - Minor Agility (#6377)", 6006377},
    {"Recipe: Pattern: Stylish Blue Shirt (#6390)", 6006390},
    {"Recipe: Pattern: Stylish Green Shirt (#6391)", 6006391},
    {"Recipe: Manual: Heavy Silk Bandage (#16112)", 6016112},
    {"Recipe: Manual: Strong Anti-Venom (#6454)", 6006454},
    {"Recipe: Pattern: Deviate Scale Cloak (#6474)", 6006474},
    {"Recipe: Pattern: Deviate Scale Gloves (#6475)", 6006475},
    {"Recipe: Pattern: Deviate Scale Belt (#6476)", 6006476},
    {"Recipe: Savory Deviate Delight (#6661)", 6006661},
    {"Recipe: Elixir of Giant Growth (#6663)", 6006663},
    {"Recipe: Schematic: Flash Bomb (#6672)", 6006672},
    {"Recipe: Pattern: Moonglow Vest (#6710)", 6006710},
    {"Recipe: Schematic: EZ-Thro Dynamite (#6716)", 6006716},
    {"Recipe: Plans: Ironforge Breastplate (#6735)", 6006735},
    {"Recipe: Smoked Bear Meat (#6892)", 6006892},
    {"Recipe: Pattern: Hands of Darkness (#7092)", 6007092},
    {"Recipe: Pattern: Truefaith Gloves (#7091)", 6007091},
    {"Recipe: Pattern: Green Silk Armor (#7090)", 6007090},
    {"Recipe: Pattern: Azure Silk Cloak (#7089)", 6007089},
    {"Recipe: Pattern: Crimson Silk Cloak (#7087)", 6007087},
    {"Recipe: Pattern: Crimson Silk Shoulders (#7084)", 6007084},
    {"Recipe: Pattern: Azure Shoulders (#7085)", 6007085},
    {"Recipe: Pattern: Earthen Silk Belt (#7086)", 6007086},
    {"Recipe: Pattern: Crimson Silk Robe (#7088)", 6007088},
    {"Recipe: Pattern: Rugged Leather Pants (#7288)", 6007288},
    {"Recipe: Pattern: Black Whelp Cloak (#7289)", 6007289},
    {"Recipe: Pattern: Red Whelp Gloves (#7290)", 6007290},
    {"Recipe: Pattern: Herbalist's Gloves (#7361)", 6007361},
    {"Recipe: Pattern: Earthen Leather Shoulders (#7362)", 6007362},
    {"Recipe: Pattern: Pilferer's Gloves (#7363)", 6007363},
    {"Recipe: Pattern: Heavy Earthen Gloves (#7364)", 6007364},
    {"Recipe: Pattern: Dusky Leather Leggings (#7449)", 6007449},
    {"Recipe: Pattern: Green Whelp Armor (#7450)", 6007450},
    {"Recipe: Pattern: Green Whelp Bracers (#7451)", 6007451},
    {"Recipe: Pattern: Dusky Boots (#7452)", 6007452},
    {"Recipe: Pattern: Swift Boots (#7453)", 6007453},
    {"Recipe: Schematic: Gnomish Universal Remote (#7560)", 6007560},
    {"Recipe: Schematic: Goblin Jumper Cables (#7561)", 6007561},
    {"Recipe: Thistle Tea (#7678)", 6007678},
    {"Recipe: Plans: Barbaric Iron Shoulders (#7978)", 6007978},
    {"Recipe: Plans: Barbaric Iron Breastplate (#7979)", 6007979},
    {"Recipe: Plans: Barbaric Iron Helm (#7980)", 6007980},
    {"Recipe: Plans: Barbaric Iron Boots (#7981)", 6007981},
    {"Recipe: Plans: Barbaric Iron Gloves (#7982)", 6007982},
    {"Recipe: Plans: Heavy Mithril Pants (#7975)", 6007975},
    {"Recipe: Plans: Mithril Scale Bracers (#7995)", 6007995},
    {"Recipe: Plans: Mithril Shield Spike (#7976)", 6007976},
    {"Recipe: Plans: Ornate Mithril Pants (#7983)", 6007983},
    {"Recipe: Plans: Ornate Mithril Gloves (#7984)", 6007984},
    {"Recipe: Plans: Ornate Mithril Shoulder (#7985)", 6007985},
    {"Recipe: Plans: Mithril Spurs (#7989)", 6007989},
    {"Recipe: Plans: Mithril Scale Shoulders (#7991)", 6007991},
    {"Recipe: Plans: Heavy Mithril Helm (#7990)", 6007990},
    {"Recipe: Plans: Blue Glittering Axe (#7992)", 6007992},
    {"Recipe: Plans: Wicked Mithril Blade (#8029)", 6008029},
    {"Recipe: Plans: Dazzling Mithril Rapier (#7993)", 6007993},
    {"Recipe: Plans: Runed Mithril Hammer (#8028)", 6008028},
    {"Recipe: Plans: Ebon Shiv (#8030)", 6008030},
    {"Recipe: Pattern: Comfortable Leather Hat (#8384)", 6008384},
    {"Recipe: Pattern: Turtle Scale Gloves (#8385)", 6008385},
    {"Recipe: Pattern: Nightscape Shoulders (#8409)", 6008409},
    {"Recipe: Pattern: Big Voodoo Robe (#8386)", 6008386},
    {"Recipe: Pattern: Tough Scorpid Breastplate (#8395)", 6008395},
    {"Recipe: Pattern: Wild Leather Shoulders (#8403)", 6008403},
    {"Recipe: Pattern: Big Voodoo Mask (#8387)", 6008387},
    {"Recipe: Pattern: Tough Scorpid Bracers (#8397)", 6008397},
    {"Recipe: Pattern: Tough Scorpid Gloves (#8398)", 6008398},
    {"Recipe: Pattern: Wild Leather Vest (#8404)", 6008404},
    {"Recipe: Pattern: Wild Leather Helmet (#8405)", 6008405},
    {"Recipe: Pattern: Tough Scorpid Boots (#8399)", 6008399},
    {"Recipe: Pattern: Big Voodoo Pants (#8389)", 6008389},
    {"Recipe: Pattern: Big Voodoo Cloak (#8390)", 6008390},
    {"Recipe: Pattern: Tough Scorpid Shoulders (#8400)", 6008400},
    {"Recipe: Pattern: Wild Leather Boots (#8406)", 6008406},
    {"Recipe: Pattern: Tough Scorpid Leggings (#8401)", 6008401},
    {"Recipe: Pattern: Tough Scorpid Helm (#8402)", 6008402},
    {"Recipe: Pattern: Wild Leather Leggings (#8407)", 6008407},
    {"Recipe: Pattern: Wild Leather Cloak (#8408)", 6008408},
    {"Recipe: Manual: Mageweave Bandage (#16113)", 6016113},
    {"Recipe: Artisan First Aid - Heal Thyself (#16085)", 6016085},
    {"Recipe: Magic Resistance Potion (#9293)", 6009293},
    {"Recipe: Plans: Inlaid Mithril Cylinder (#10713)", 6010713},
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
    {"Recipe: Plans: Golden Scale Gauntlets (#9367)", 6009367},
    {"Recipe: Pattern: Colorful Kilt (#10316)", 6010316},
    {"Recipe: Pattern: Red Mageweave Vest (#10300)", 6010300},
    {"Recipe: Pattern: White Bandit Mask (#10301)", 6010301},
    {"Recipe: Pattern: Red Mageweave Pants (#10302)", 6010302},
    {"Recipe: Pattern: Orange Martial Shirt (#10311)", 6010311},
    {"Recipe: Pattern: Red Mageweave Gloves (#10312)", 6010312},
    {"Recipe: Pattern: Lavender Mageweave Shirt (#10314)", 6010314},
    {"Recipe: Pattern: Red Mageweave Shoulders (#10315)", 6010315},
    {"Recipe: Pattern: Pink Mageweave Shirt (#10317)", 6010317},
    {"Recipe: Pattern: Admiral's Hat (#10318)", 6010318},
    {"Recipe: Pattern: Red Mageweave Headband (#10320)", 6010320},
    {"Recipe: Pattern: Tuxedo Shirt (#10321)", 6010321},
    {"Recipe: Pattern: Shadoweave Mask (#10463)", 6010463},
    {"Recipe: Pattern: Tuxedo Pants (#10323)", 6010323},
    {"Recipe: Pattern: White Wedding Dress (#10325)", 6010325},
    {"Recipe: Pattern: Tuxedo Jacket (#10326)", 6010326},
    {"Recipe: Plans: Silvered Bronze Leggings (#10424)", 6010424},
    {"Recipe: Schematic: Bright-Eye Goggles (#10601)", 6010601},
    {"Recipe: Schematic: Deadly Scope (#10602)", 6010602},
    {"Recipe: Schematic: Catseye Ultra Goggles (#10603)", 6010603},
    {"Recipe: Schematic: Mithril Heavy-bore Rifle (#10604)", 6010604},
    {"Recipe: Schematic: Spellpower Goggles Xtreme (#10605)", 6010605},
    {"Recipe: Schematic: Parachute Cloak (#10606)", 6010606},
    {"Recipe: Schematic: Deepdive Helmet (#10607)", 6010607},
    {"Recipe: Schematic: Sniper Scope (#10608)", 6010608},
    {"Recipe: Schematic: Mithril Mechanical Dragonling (#10609)", 6010609},
    {"Recipe: Formula: Enchant 2H Weapon - Lesser Spirit (#11038)", 6011038},
    {"Recipe: Formula: Enchant Cloak - Minor Agility (#11039)", 6011039},
    {"Recipe: Formula: Enchant Shield - Lesser Protection (#11081)", 6011081},
    {"Recipe: Formula: Enchant Cloak - Lesser Shadow Resistance (#11098)", 6011098},
    {"Recipe: Formula: Enchant Bracer - Lesser Strength (#11101)", 6011101},
    {"Recipe: Formula: Enchant Gloves - Mining (#11150)", 6011150},
    {"Recipe: Formula: Enchant Gloves - Herbalism (#11151)", 6011151},
    {"Recipe: Formula: Enchant Gloves - Fishing (#11152)", 6011152},
    {"Recipe: Formula: Enchant Bracer - Lesser Deflection (#11163)", 6011163},
    {"Recipe: Formula: Enchant Weapon - Lesser Beastslayer (#11164)", 6011164},
    {"Recipe: Formula: Enchant Weapon - Lesser Elemental Slayer (#11165)", 6011165},
    {"Recipe: Formula: Enchant Boots - Lesser Spirit (#11167)", 6011167},
    {"Recipe: Formula: Enchant Shield - Lesser Block (#11168)", 6011168},
    {"Recipe: Formula: Enchant Gloves - Skinning (#11166)", 6011166},
    {"Recipe: Formula: Enchant Shield - Stamina (#11202)", 6011202},
    {"Recipe: Formula: Enchant Gloves - Advanced Mining (#11203)", 6011203},
    {"Recipe: Formula: Enchant Bracer - Greater Spirit (#11204)", 6011204},
    {"Recipe: Formula: Enchant Gloves - Advanced Herbalism (#11205)", 6011205},
    {"Recipe: Formula: Enchant Cloak - Lesser Agility (#11206)", 6011206},
    {"Recipe: Formula: Enchant Weapon - Fiery Weapon (#11207)", 6011207},
    {"Recipe: Formula: Enchant Weapon - Demonslaying (#11208)", 6011208},
    {"Recipe: Formula: Enchant Bracer - Deflection (#11223)", 6011223},
    {"Recipe: Formula: Enchant Shield - Frost Resistance (#11224)", 6011224},
    {"Recipe: Formula: Enchant Bracer - Greater Stamina (#11225)", 6011225},
    {"Recipe: Formula: Enchant Gloves - Riding Skill (#11226)", 6011226},
    {"Recipe: Plans: Dark Iron Pulverizer (#11610)", 6011610},
    {"Recipe: Plans: Dark Iron Mail (#11614)", 6011614},
    {"Recipe: Plans: Dark Iron Sunderer (#11611)", 6011611},
    {"Recipe: Plans: Dark Iron Shoulders (#11615)", 6011615},
    {"Recipe: Plans: Dark Iron Plate (#11612)", 6011612},
    {"Recipe: Formula: Smoking Heart of the Mountain (#11813)", 6011813},
    {"Recipe: Schematic: Pet Bombling (#11828)", 6011828},
    {"Recipe: Schematic: Lil' Smoky (#11827)", 6011827},
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
    {"Recipe: Plans: Searing Golden Blade (#12261)", 6012261},
    {"Recipe: Plans: Thorium Armor (#12682)", 6012682},
    {"Recipe: Plans: Thorium Belt (#12683)", 6012683},
    {"Recipe: Plans: Thorium Bracers (#12684)", 6012684},
    {"Recipe: Plans: Radiant Belt (#12685)", 6012685},
    {"Recipe: Plans: Imperial Plate Shoulders (#12687)", 6012687},
    {"Recipe: Plans: Imperial Plate Belt (#12688)", 6012688},
    {"Recipe: Plans: Radiant Breastplate (#12689)", 6012689},
    {"Recipe: Plans: Imperial Plate Bracers (#12690)", 6012690},
    {"Recipe: Plans: Wildthorn Mail (#12691)", 6012691},
    {"Recipe: Plans: Thorium Shield Spike (#12692)", 6012692},
    {"Recipe: Plans: Thorium Boots (#12693)", 6012693},
    {"Recipe: Plans: Thorium Helm (#12694)", 6012694},
    {"Recipe: Plans: Radiant Gloves (#12695)", 6012695},
    {"Recipe: Plans: Fiery Plate Gauntlets (#12699)", 6012699},
    {"Recipe: Plans: Radiant Boots (#12697)", 6012697},
    {"Recipe: Plans: Imperial Plate Boots (#12700)", 6012700},
    {"Recipe: Plans: Imperial Plate Helm (#12701)", 6012701},
    {"Recipe: Plans: Radiant Circlet (#12702)", 6012702},
    {"Recipe: Plans: Dawnbringer Shoulders (#12698)", 6012698},
    {"Recipe: Plans: Storm Gauntlets (#12703)", 6012703},
    {"Recipe: Plans: Thorium Leggings (#12704)", 6012704},
    {"Recipe: Plans: Imperial Plate Chest (#12705)", 6012705},
    {"Recipe: Plans: Runic Plate Shoulders (#12706)", 6012706},
    {"Recipe: Plans: Runic Plate Boots (#12707)", 6012707},
    {"Recipe: Plans: Demon Forged Breastplate (#12696)", 6012696},
    {"Recipe: Plans: Whitesoul Helm (#12711)", 6012711},
    {"Recipe: Plans: Radiant Leggings (#12713)", 6012713},
    {"Recipe: Plans: Runic Plate Helm (#12714)", 6012714},
    {"Recipe: Plans: Helm of the Great Chief (#12716)", 6012716},
    {"Recipe: Plans: Lionheart Helm (#12717)", 6012717},
    {"Recipe: Plans: Imperial Plate Leggings (#12715)", 6012715},
    {"Recipe: Plans: Runic Breastplate (#12718)", 6012718},
    {"Recipe: Plans: Runic Plate Leggings (#12719)", 6012719},
    {"Recipe: Plans: Stronghold Gauntlets (#12720)", 6012720},
    {"Recipe: Plans: Enchanted Thorium Helm (#12725)", 6012725},
    {"Recipe: Plans: Enchanted Thorium Leggings (#12726)", 6012726},
    {"Recipe: Plans: Enchanted Thorium Breastplate (#12727)", 6012727},
    {"Recipe: Plans: Invulnerable Mail (#12728)", 6012728},
    {"Recipe: Plans: Ornate Thorium Handaxe (#12819)", 6012819},
    {"Recipe: Plans: Dawn's Edge (#12821)", 6012821},
    {"Recipe: Plans: Huge Thorium Battleaxe (#12823)", 6012823},
    {"Recipe: Plans: Enchanted Battlehammer (#12824)", 6012824},
    {"Recipe: Plans: Blazing Rapier (#12825)", 6012825},
    {"Recipe: Plans: Serenity (#12827)", 6012827},
    {"Recipe: Plans: Volcanic Hammer (#12828)", 6012828},
    {"Recipe: Plans: Corruption (#12830)", 6012830},
    {"Recipe: Plans: Hammer of the Titans (#12833)", 6012833},
    {"Recipe: Plans: Arcanite Champion (#12834)", 6012834},
    {"Recipe: Plans: Annihilator (#12835)", 6012835},
    {"Recipe: Plans: Frostguard (#12836)", 6012836},
    {"Recipe: Plans: Masterwork Stormhammer (#12837)", 6012837},
    {"Recipe: Plans: Arcanite Reaper (#12838)", 6012838},
    {"Recipe: Plans: Heartseeker (#12839)", 6012839},
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
    {"Recipe: Pattern: Frostweave Tunic (#14466)", 6014466},
    {"Recipe: Pattern: Frostweave Robe (#14467)", 6014467},
    {"Recipe: Pattern: Runecloth Bag (#14468)", 6014468},
    {"Recipe: Pattern: Runecloth Robe (#14469)", 6014469},
    {"Recipe: Pattern: Runecloth Tunic (#14470)", 6014470},
    {"Recipe: Pattern: Cindercloth Vest (#14471)", 6014471},
    {"Recipe: Pattern: Runecloth Cloak (#14472)", 6014472},
    {"Recipe: Pattern: Ghostweave Belt (#14473)", 6014473},
    {"Recipe: Pattern: Frostweave Gloves (#14474)", 6014474},
    {"Recipe: Pattern: Cindercloth Gloves (#14476)", 6014476},
    {"Recipe: Pattern: Ghostweave Gloves (#14477)", 6014477},
    {"Recipe: Pattern: Brightcloth Robe (#14478)", 6014478},
    {"Recipe: Pattern: Brightcloth Gloves (#14479)", 6014479},
    {"Recipe: Pattern: Ghostweave Vest (#14480)", 6014480},
    {"Recipe: Pattern: Runecloth Gloves (#14481)", 6014481},
    {"Recipe: Pattern: Cindercloth Cloak (#14482)", 6014482},
    {"Recipe: Pattern: Felcloth Pants (#14483)", 6014483},
    {"Recipe: Pattern: Brightcloth Cloak (#14484)", 6014484},
    {"Recipe: Pattern: Wizardweave Leggings (#14485)", 6014485},
    {"Recipe: Pattern: Cloak of Fire (#14486)", 6014486},
    {"Recipe: Pattern: Runecloth Boots (#14488)", 6014488},
    {"Recipe: Pattern: Frostweave Pants (#14489)", 6014489},
    {"Recipe: Pattern: Cindercloth Pants (#14490)", 6014490},
    {"Recipe: Pattern: Robe of Winter Night (#14493)", 6014493},
    {"Recipe: Pattern: Felcloth Boots (#14492)", 6014492},
    {"Recipe: Pattern: Runecloth Pants (#14491)", 6014491},
    {"Recipe: Pattern: Brightcloth Pants (#14494)", 6014494},
    {"Recipe: Pattern: Mooncloth Leggings (#14497)", 6014497},
    {"Recipe: Pattern: Ghostweave Pants (#14495)", 6014495},
    {"Recipe: Pattern: Felcloth Hood (#14496)", 6014496},
    {"Recipe: Pattern: Runecloth Headband (#14498)", 6014498},
    {"Recipe: Pattern: Mooncloth Bag (#14499)", 6014499},
    {"Recipe: Pattern: Wizardweave Robe (#14500)", 6014500},
    {"Recipe: Pattern: Mooncloth Vest (#14501)", 6014501},
    {"Recipe: Pattern: Mooncloth Shoulders (#14507)", 6014507},
    {"Recipe: Pattern: Runecloth Shoulders (#14504)", 6014504},
    {"Recipe: Pattern: Wizardweave Turban (#14505)", 6014505},
    {"Recipe: Pattern: Felcloth Robe (#14506)", 6014506},
    {"Recipe: Pattern: Mooncloth Circlet (#14509)", 6014509},
    {"Recipe: Pattern: Felcloth Shoulders (#14508)", 6014508},
    {"Recipe: Pattern: Gloves of Spell Mastery (#14511)", 6014511},
    {"Recipe: Pattern: Bottomless Bag (#14510)", 6014510},
    {"Recipe: Pattern: Truefaith Vestments (#14512)", 6014512},
    {"Recipe: Pattern: Robe of the Archmage (#14513)", 6014513},
    {"Recipe: Pattern: Robe of the Void (#14514)", 6014514},
    {"Recipe: Grimoire of Doom (#4213)", 6004213},
    {"Recipe: Pattern: Mooncloth (#14526)", 6014526},
    {"Recipe: Pattern: Heavy Scorpid Bracers (#15724)", 6015724},
    {"Recipe: Pattern: Wicked Leather Gauntlets (#15725)", 6015725},
    {"Recipe: Pattern: Green Dragonscale Breastplate (#15726)", 6015726},
    {"Recipe: Pattern: Heavy Scorpid Vest (#15727)", 6015727},
    {"Recipe: Pattern: Wicked Leather Bracers (#15728)", 6015728},
    {"Recipe: Pattern: Chimeric Gloves (#15729)", 6015729},
    {"Recipe: Pattern: Red Dragonscale Breastplate (#15730)", 6015730},
    {"Recipe: Pattern: Runic Leather Gauntlets (#15731)", 6015731},
    {"Recipe: Pattern: Volcanic Leggings (#15732)", 6015732},
    {"Recipe: Pattern: Green Dragonscale Leggings (#15733)", 6015733},
    {"Recipe: Pattern: Living Shoulders (#15734)", 6015734},
    {"Recipe: Pattern: Ironfeather Shoulders (#15735)", 6015735},
    {"Recipe: Pattern: Chimeric Boots (#15737)", 6015737},
    {"Recipe: Pattern: Heavy Scorpid Gauntlets (#15738)", 6015738},
    {"Recipe: Pattern: Runic Leather Bracers (#15739)", 6015739},
    {"Recipe: Pattern: Frostsaber Boots (#15740)", 6015740},
    {"Recipe: Pattern: Stormshroud Pants (#15741)", 6015741},
    {"Recipe: Pattern: Warbear Harness (#15742)", 6015742},
    {"Recipe: Pattern: Heavy Scorpid Belt (#15743)", 6015743},
    {"Recipe: Pattern: Wicked Leather Headband (#15744)", 6015744},
    {"Recipe: Pattern: Runic Leather Belt (#15745)", 6015745},
    {"Recipe: Pattern: Chimeric Leggings (#15746)", 6015746},
    {"Recipe: Pattern: Frostsaber Leggings (#15747)", 6015747},
    {"Recipe: Pattern: Heavy Scorpid Leggings (#15748)", 6015748},
    {"Recipe: Pattern: Volcanic Breastplate (#15749)", 6015749},
    {"Recipe: Pattern: Blue Dragonscale Breastplate (#15751)", 6015751},
    {"Recipe: Pattern: Living Leggings (#15752)", 6015752},
    {"Recipe: Pattern: Stormshroud Armor (#15753)", 6015753},
    {"Recipe: Pattern: Warbear Woolies (#15754)", 6015754},
    {"Recipe: Pattern: Chimeric Vest (#15755)", 6015755},
    {"Recipe: Pattern: Runic Leather Headband (#15756)", 6015756},
    {"Recipe: Pattern: Wicked Leather Pants (#15757)", 6015757},
    {"Recipe: Pattern: Devilsaur Gauntlets (#15758)", 6015758},
    {"Recipe: Pattern: Black Dragonscale Breastplate (#15759)", 6015759},
    {"Recipe: Pattern: Ironfeather Breastplate (#15760)", 6015760},
    {"Recipe: Pattern: Frostsaber Gloves (#15761)", 6015761},
    {"Recipe: Pattern: Heavy Scorpid Helm (#15762)", 6015762},
    {"Recipe: Pattern: Blue Dragonscale Shoulders (#15763)", 6015763},
    {"Recipe: Pattern: Stormshroud Shoulders (#15764)", 6015764},
    {"Recipe: Pattern: Runic Leather Pants (#15765)", 6015765},
    {"Recipe: Pattern: Wicked Leather Belt (#15768)", 6015768},
    {"Recipe: Pattern: Black Dragonscale Shoulders (#15770)", 6015770},
    {"Recipe: Pattern: Living Breastplate (#15771)", 6015771},
    {"Recipe: Pattern: Devilsaur Leggings (#15772)", 6015772},
    {"Recipe: Pattern: Wicked Leather Armor (#15773)", 6015773},
    {"Recipe: Pattern: Heavy Scorpid Shoulders (#15774)", 6015774},
    {"Recipe: Pattern: Volcanic Shoulders (#15775)", 6015775},
    {"Recipe: Pattern: Runic Leather Armor (#15776)", 6015776},
    {"Recipe: Pattern: Runic Leather Shoulders (#15777)", 6015777},
    {"Recipe: Pattern: Frostsaber Tunic (#15779)", 6015779},
    {"Recipe: Pattern: Onyxia Scale Breastplate (#15780)", 6015780},
    {"Recipe: Pattern: Black Dragonscale Leggings (#15781)", 6015781},
    {"Recipe: Schematic: Thorium Grenade (#16041)", 6016041},
    {"Recipe: Schematic: Thorium Widget (#16042)", 6016042},
    {"Recipe: Schematic: Thorium Rifle (#16043)", 6016043},
    {"Recipe: Schematic: Lifelike Mechanical Toad (#16044)", 6016044},
    {"Recipe: Schematic: Spellpower Goggles Xtreme Plus (#16045)", 6016045},
    {"Recipe: Schematic: Thorium Tube (#16047)", 6016047},
    {"Recipe: Schematic: Dark Iron Rifle (#16048)", 6016048},
    {"Recipe: Schematic: Dark Iron Bomb (#16049)", 6016049},
    {"Recipe: Schematic: Thorium Shells (#16051)", 6016051},
    {"Recipe: Tome of Tranquilizing Shot (#16665)", 6016665},
    {"Recipe: Schematic: Masterwork Target Dummy (#16046)", 6016046},
    {"Recipe: Schematic: Delicate Arcanite Converter (#16050)", 6016050},
    {"Recipe: Schematic: Voice Amplification Modulator (#16052)", 6016052},
    {"Recipe: Schematic: Master Engineer's Goggles (#16053)", 6016053},
    {"Recipe: Schematic: Arcanite Dragonling (#16054)", 6016054},
    {"Recipe: Schematic: Arcane Bomb (#16055)", 6016055},
    {"Recipe: Schematic: Flawless Arcanite Rifle (#16056)", 6016056},
    {"Recipe: Formula: Enchant Bracer - Greater Intellect (#16214)", 6016214},
    {"Recipe: Formula: Enchant Bracer - Superior Spirit (#16218)", 6016218},
    {"Recipe: Formula: Enchant Bracer - Superior Strength (#16246)", 6016246},
    {"Recipe: Formula: Enchant Bracer - Superior Stamina (#16251)", 6016251},
    {"Recipe: Formula: Enchant Gloves - Greater Agility (#16219)", 6016219},
    {"Recipe: Formula: Enchant Gloves - Greater Strength (#16244)", 6016244},
    {"Recipe: Formula: Enchant Cloak - Greater Resistance (#16216)", 6016216},
    {"Recipe: Formula: Enchant Cloak - Superior Defense (#16224)", 6016224},
    {"Recipe: Formula: Enchant Shield - Superior Spirit (#16222)", 6016222},
    {"Recipe: Formula: Enchant Shield - Greater Stamina (#16217)", 6016217},
    {"Recipe: Formula: Enchant Boots - Greater Stamina (#16215)", 6016215},
    {"Recipe: Formula: Enchant Boots - Greater Agility (#16245)", 6016245},
    {"Recipe: Formula: Enchant Boots - Spirit (#16220)", 6016220},
    {"Recipe: Formula: Enchant Chest - Greater Stats (#16253)", 6016253},
    {"Recipe: Formula: Enchant Chest - Major Health (#16221)", 6016221},
    {"Recipe: Formula: Enchant Chest - Major Mana (#16242)", 6016242},
    {"Recipe: Formula: Enchant Weapon - Icy Chill (#16223)", 6016223},
    {"Recipe: Formula: Enchant 2H Weapon - Superior Impact (#16247)", 6016247},
    {"Recipe: Formula: Enchant Weapon - Superior Striking (#16250)", 6016250},
    {"Recipe: Formula: Enchant Weapon - Lifestealing (#16254)", 6016254},
    {"Recipe: Formula: Enchant Weapon - Unholy (#16248)", 6016248},
    {"Recipe: Formula: Enchant Weapon - Crusader (#16252)", 6016252},
    {"Recipe: Formula: Enchant 2H Weapon - Major Spirit (#16255)", 6016255},
    {"Recipe: Formula: Enchant 2H Weapon - Major Intellect (#16249)", 6016249},
    {"Recipe: Formula: Runed Arcanite Rod (#16243)", 6016243},
    {"Recipe: Undermine Clam Chowder (#16767)", 6016767},
    {"Recipe: Pattern: Flarecore Mantle (#17017)", 6017017},
    {"Recipe: Pattern: Flarecore Gloves (#17018)", 6017018},
    {"Recipe: Pattern: Corehound Boots (#17022)", 6017022},
    {"Recipe: Pattern: Molten Helm (#17023)", 6017023},
    {"Recipe: Pattern: Black Dragonscale Boots (#17025)", 6017025},
    {"Recipe: Plans: Fiery Chain Girdle (#17049)", 6017049},
    {"Recipe: Plans: Fiery Chain Shoulders (#17053)", 6017053},
    {"Recipe: Plans: Dark Iron Bracers (#17051)", 6017051},
    {"Recipe: Plans: Dark Iron Leggings (#17052)", 6017052},
    {"Recipe: Plans: Dark Iron Reaver (#17059)", 6017059},
    {"Recipe: Plans: Dark Iron Destroyer (#17060)", 6017060},
    {"Recipe: Mithril Head Trout (#17062)", 6017062},
    {"Recipe: Gingerbread Cookie (#17200)", 6017200},
    {"Recipe: Egg Nog (#17201)", 6017201},
    {"Recipe: Plans: Sulfuron Hammer (#18592)", 6018592},
    {"Recipe: Codex: Prayer of Fortitude (#17413)", 6017413},
    {"Recipe: Codex: Prayer of Fortitude II (#17414)", 6017414},
    {"Recipe: Book: Gift of the Wild (#17682)", 6017682},
    {"Recipe: Book: Gift of the Wild II (#17683)", 6017683},
    {"Recipe: Plans: Edge of Winter (#17706)", 6017706},
    {"Recipe: Elixir of Frost Power (#17709)", 6017709},
    {"Recipe: Formula: Enchant Weapon - Winter's Might (#17725)", 6017725},
    {"Recipe: Schematic: Snowmaster 9000 (#17720)", 6017720},
    {"Recipe: Pattern: Gloves of the Greatfather (#17722)", 6017722},
    {"Recipe: Pattern: Green Holiday Shirt (#17724)", 6017724},
    {"Recipe: Tender Wolf Steak (#18046)", 6018046},
    {"Recipe: Pattern: Shadowskin Gloves (#18239)", 6018239},
    {"Recipe: Pattern: Core Armor Kit (#18252)", 6018252},
    {"Recipe: Major Rejuvenation Potion (#18257)", 6018257},
    {"Recipe: Formula: Enchant Weapon - Spellpower (#18259)", 6018259},
    {"Recipe: Formula: Enchant Weapon - Healing Power (#18260)", 6018260},
    {"Recipe: Plans: Elemental Sharpening Stone (#18264)", 6018264},
    {"Recipe: Pattern: Flarecore Wraps (#18265)", 6018265},
    {"Recipe: Runn Tum Tuber Surprise (#18267)", 6018267},
    {"Recipe: Schematic: Biznicks 247x128 Accurascope (#18290)", 6018290},
    {"Recipe: Schematic: Core Marksman Rifle (#18292)", 6018292},
    {"Recipe: Schematic: Force Reactive Disk (#18291)", 6018291},
    {"Recipe: Pattern: Belt of the Archmage (#18414)", 6018414},
    {"Recipe: Pattern: Felcloth Gloves (#18415)", 6018415},
    {"Recipe: Pattern: Inferno Gloves (#18416)", 6018416},
    {"Recipe: Pattern: Mooncloth Gloves (#18417)", 6018417},
    {"Recipe: Pattern: Cloak of Warding (#18418)", 6018418},
    {"Recipe: Pattern: Mooncloth Robe (#18487)", 6018487},
    {"Recipe: Pattern: Girdle of Insight (#18514)", 6018514},
    {"Recipe: Pattern: Mongoose Boots (#18515)", 6018515},
    {"Recipe: Pattern: Swift Flight Bracers (#18516)", 6018516},
    {"Recipe: Pattern: Chromatic Cloak (#18517)", 6018517},
    {"Recipe: Pattern: Hide of the Wild (#18518)", 6018518},
    {"Recipe: Pattern: Shifting Cloak (#18519)", 6018519},
    {"Recipe: Goblin's Guide to Elementium (#44956)", 6044956},
    {"Recipe: Tome of Arcane Brilliance (#18600)", 6018600},
    {"Recipe: Schematic: Red Firework (#18647)", 6018647},
    {"Recipe: Schematic: Blue Firework (#18649)", 6018649},
    {"Recipe: Schematic: Green Firework (#18648)", 6018648},
    {"Recipe: Schematic: EZ-Thro Dynamite II (#18650)", 6018650},
    {"Recipe: Schematic: Truesilver Transformer (#18651)", 6018651},
    {"Recipe: Schematic: Gyrofreeze Ice Reflector (#18652)", 6018652},
    {"Recipe: Schematic: Goblin Jumper Cables XL (#18653)", 6018653},
    {"Recipe: Schematic: Major Recombobulator (#18655)", 6018655},
    {"Recipe: Schematic: Powerful Seaforium Charge (#18656)", 6018656},
    {"Recipe: Schematic: Hyper-Radiant Flame Reflector (#18657)", 6018657},
    {"Recipe: Schematic: Ultra-Flash Shadow Reflector (#18658)", 6018658},
    {"Recipe: Schematic: Gnomish Alarm-o-Bot (#18654)", 6018654},
    {"Recipe: Schematic: World Enlarger (#18661)", 6018661},
    {"Recipe: Pattern: Heavy Leather Ball (#18731)", 6018731},
    {"Recipe: Pattern: Barbaric Bracers (#18949)", 6018949},
    {"Recipe: Schematic: Snake Burst Firework (#19027)", 6019027},
    {"Recipe: Plans: Heavy Timbermaw Belt (#19202)", 6019202},
    {"Recipe: Plans: Heavy Timbermaw Boots (#19204)", 6019204},
    {"Recipe: Plans: Girdle of the Dawn (#19203)", 6019203},
    {"Recipe: Plans: Gloves of the Dawn (#19205)", 6019205},
    {"Recipe: Plans: Dark Iron Helm (#19206)", 6019206},
    {"Recipe: Plans: Dark Iron Gauntlets (#19207)", 6019207},
    {"Recipe: Plans: Black Amnesty (#19208)", 6019208},
    {"Recipe: Plans: Blackfury (#19209)", 6019209},
    {"Recipe: Plans: Ebon Hand (#19210)", 6019210},
    {"Recipe: Plans: Blackguard (#19211)", 6019211},
    {"Recipe: Plans: Nightfall (#19212)", 6019212},
    {"Recipe: Pattern: Wisdom of the Timbermaw (#19215)", 6019215},
    {"Recipe: Pattern: Mantle of the Timbermaw (#19218)", 6019218},
    {"Recipe: Pattern: Argent Boots (#19216)", 6019216},
    {"Recipe: Pattern: Argent Shoulders (#19217)", 6019217},
    {"Recipe: Pattern: Flarecore Robe (#19219)", 6019219},
    {"Recipe: Pattern: Flarecore Leggings (#19220)", 6019220},
    {"Recipe: Pattern: Might of the Timbermaw (#19326)", 6019326},
    {"Recipe: Pattern: Timbermaw Brawlers (#19327)", 6019327},
    {"Recipe: Pattern: Dawn Treaders (#19328)", 6019328},
    {"Recipe: Pattern: Golden Mantle of the Dawn (#19329)", 6019329},
    {"Recipe: Pattern: Lava Belt (#19330)", 6019330},
    {"Recipe: Pattern: Chromatic Gauntlets (#19331)", 6019331},
    {"Recipe: Pattern: Corehound Belt (#19332)", 6019332},
    {"Recipe: Pattern: Molten Belt (#19333)", 6019333},
    {"Recipe: Formula: Powerful Anti-Venom (#19442)", 6019442},
    {"Recipe: Formula: Enchant Weapon - Strength (#19444)", 6019444},
    {"Recipe: Formula: Enchant Weapon - Agility (#19445)", 6019445},
    {"Recipe: Formula: Enchant Bracer - Mana Regeneration (#19446)", 6019446},
    {"Recipe: Formula: Enchant Bracer - Healing Power (#19447)", 6019447},
    {"Recipe: Formula: Enchant Weapon - Mighty Spirit (#19448)", 6019448},
    {"Recipe: Formula: Enchant Weapon - Mighty Intellect (#19449)", 6019449},
    {"Recipe: Pattern: Bloodvine Vest (#19764)", 6019764},
    {"Recipe: Pattern: Bloodvine Leggings (#19765)", 6019765},
    {"Recipe: Pattern: Bloodvine Boots (#19766)", 6019766},
    {"Recipe: Pattern: Primal Batskin Jerkin (#19769)", 6019769},
    {"Recipe: Pattern: Primal Batskin Gloves (#19770)", 6019770},
    {"Recipe: Pattern: Primal Batskin Bracers (#19771)", 6019771},
    {"Recipe: Pattern: Blood Tiger Breastplate (#19772)", 6019772},
    {"Recipe: Pattern: Blood Tiger Shoulders (#19773)", 6019773},
    {"Recipe: Plans: Bloodsoul Breastplate (#19776)", 6019776},
    {"Recipe: Plans: Bloodsoul Shoulders (#19777)", 6019777},
    {"Recipe: Plans: Bloodsoul Gauntlets (#19778)", 6019778},
    {"Recipe: Plans: Darksoul Breastplate (#19779)", 6019779},
    {"Recipe: Plans: Darksoul Leggings (#19780)", 6019780},
    {"Recipe: Plans: Darksoul Shoulders (#19781)", 6019781},
    {"Recipe: Schematic: Bloodvine Goggles (#20000)", 6020000},
    {"Recipe: Schematic: Bloodvine Lens (#20001)", 6020001},
    {"Recipe: Mageblood Elixir (#20011)", 6020011},
    {"Recipe: Greater Dreamless Sleep Potion (#20012)", 6020012},
    {"Recipe: Living Action Potion (#20013)", 6020013},
    {"Recipe: Mighty Troll's Blood Elixir (#20014)", 6020014},
    {"Recipe: Plans: Dark Iron Boots (#20040)", 6020040},
    {"Recipe: Heavy Crocolisk Stew (#20075)", 6020075},
    {"Recipe: Pattern: Dreamscale Breastplate (#20382)", 6020382},
    {"Recipe: Pattern: Spitfire Bracers (#20506)", 6020506},
    {"Recipe: Pattern: Spitfire Gauntlets (#20507)", 6020507},
    {"Recipe: Pattern: Spitfire Breastplate (#20508)", 6020508},
    {"Recipe: Pattern: Sandstalker Bracers (#20509)", 6020509},
    {"Recipe: Pattern: Sandstalker Gauntlets (#20510)", 6020510},
    {"Recipe: Pattern: Sandstalker Breastplate (#20511)", 6020511},
    {"Recipe: Pattern: Runed Stygian Leggings (#20546)", 6020546},
    {"Recipe: Pattern: Runed Stygian Belt (#20548)", 6020548},
    {"Recipe: Pattern: Runed Stygian Boots (#20547)", 6020547},
    {"Recipe: Plans: Darkrune Gauntlets (#20553)", 6020553},
    {"Recipe: Plans: Darkrune Helm (#20555)", 6020555},
    {"Recipe: Plans: Darkrune Breastplate (#20554)", 6020554},
    {"Recipe: Pattern: Black Whelp Tunic (#20576)", 6020576},
    {"Recipe: Formula: Enchant Gloves - Threat (#20726)", 6020726},
    {"Recipe: Formula: Enchant Gloves - Shadow Power (#20727)", 6020727},
    {"Recipe: Formula: Enchant Gloves - Frost Power (#20728)", 6020728},
    {"Recipe: Formula: Enchant Gloves - Fire Power (#20729)", 6020729},
    {"Recipe: Formula: Enchant Gloves - Healing Power (#20730)", 6020730},
    {"Recipe: Formula: Enchant Gloves - Superior Agility (#20731)", 6020731},
    {"Recipe: Formula: Enchant Cloak - Greater Fire Resistance (#20732)", 6020732},
    {"Recipe: Formula: Enchant Cloak - Greater Nature Resistance (#20733)", 6020733},
    {"Recipe: Formula: Enchant Cloak - Stealth (#20734)", 6020734},
    {"Recipe: Formula: Enchant Cloak - Subtlety (#20735)", 6020735},
    {"Recipe: Formula: Enchant Cloak - Dodge (#20736)", 6020736},
    {"Recipe: Formula: Minor Wizard Oil (#20758)", 6020758},
    {"Recipe: Formula: Minor Mana Oil (#20752)", 6020752},
    {"Recipe: Formula: Lesser Wizard Oil (#20753)", 6020753},
    {"Recipe: Formula: Lesser Mana Oil (#20754)", 6020754},
    {"Recipe: Formula: Wizard Oil (#20755)", 6020755},
    {"Recipe: Formula: Brilliant Wizard Oil (#20756)", 6020756},
    {"Recipe: Formula: Brilliant Mana Oil (#20757)", 6020757},
    {"Recipe: Transmute Elemental Fire (#20761)", 6020761},
    {"Recipe: Manual of Heroic Strike IX (#21297)", 6021297},
    {"Recipe: Manual of Revenge VI (#21299)", 6021299},
    {"Recipe: Manual of Battle Shout VII (#21298)", 6021298},
    {"Recipe: Libram: Blessing of Wisdom VI (#21288)", 6021288},
    {"Recipe: Libram: Blessing of Might VII (#21289)", 6021289},
    {"Recipe: Libram: Holy Light IX (#21290)", 6021290},
    {"Recipe: Guide: Multi-Shot V (#21304)", 6021304},
    {"Recipe: Guide: Serpent Sting IX (#21306)", 6021306},
    {"Recipe: Guide: Aspect of the Hawk VII (#21307)", 6021307},
    {"Recipe: Book of Healing Touch XI (#21294)", 6021294},
    {"Recipe: Book of Starfire VII (#21295)", 6021295},
    {"Recipe: Book of Rejuvenation XI (#21296)", 6021296},
    {"Recipe: Handbook of Backstab IX (#21300)", 6021300},
    {"Recipe: Handbook of Feint V (#21303)", 6021303},
    {"Recipe: Tome of Frostbolt XI (#21214)", 6021214},
    {"Recipe: Tome of Fireball XII (#21279)", 6021279},
    {"Recipe: Grimoire of Shadow Bolt X (#21281)", 6021281},
    {"Recipe: Grimoire of Immolate VIII (#21282)", 6021282},
    {"Recipe: Grimoire of Corruption VII (#21283)", 6021283},
    {"Recipe: Codex of Greater Heal V (#21284)", 6021284},
    {"Recipe: Codex of Renew X (#21285)", 6021285},
    {"Recipe: Codex of Prayer of Healing V (#21287)", 6021287},
    {"Recipe: Design: Heavy Golden Necklace of Battle (#20856)", 6020856},
    {"Recipe: Design: Wicked Moonstone Ring (#20855)", 6020855},
    {"Recipe: Design: Amulet of the Moon (#20854)", 6020854},
    {"Recipe: Tome of Arcane Missiles VIII (#21280)", 6021280},
    {"Recipe: Handbook of Deadly Poison V (#21302)", 6021302},
    {"Recipe: Tablet of Healing Wave X (#21291)", 6021291},
    {"Recipe: Tablet of Grace of Air Totem III (#21293)", 6021293},
    {"Recipe: Tablet of Strength of Earth Totem V (#21292)", 6021292},
    {"Recipe: Codex: Prayer of Fortitude III (#29549)", 6029549},
    {"Recipe: Design: Pendant of the Agate Shield (#20970)", 6020970},
    {"Recipe: Design: Heavy Iron Knuckles (#20971)", 6020971},
    {"Recipe: Design: Blazing Citrine Ring (#20973)", 6020973},
    {"Recipe: Design: Jade Pendant of Blasting (#20974)", 6020974},
    {"Recipe: Design: The Jade Eye (#20975)", 6020975},
    {"Recipe: Design: Citrine Pendant of Golden Healing (#20976)", 6020976},
    {"Recipe: Dirge's Kickin' Chimaerok Chops (#21025)", 6021025},
    {"Recipe: Smoked Sagefish (#21099)", 6021099},
    {"Recipe: Sagefish Delight (#21219)", 6021219},
    {"Recipe: Pattern: Soul Pouch (#21358)", 6021358},
    {"Recipe: Pattern: Core Felcloth Bag (#21371)", 6021371},
    {"Recipe: Elixir of Greater Firepower (#21547)", 6021547},
    {"Recipe: Pattern: Stormshroud Gloves (#21548)", 6021548},
    {"Recipe: Pattern: Festival Dress (#21722)", 6021722},
    {"Recipe: Pattern: Festival Suit (#21723)", 6021723},
    {"Recipe: Schematic: Small Blue Rocket (#21724)", 6021724},
    {"Recipe: Schematic: Small Green Rocket (#21725)", 6021725},
    {"Recipe: Schematic: Small Red Rocket (#21726)", 6021726},
    {"Recipe: Schematic: Large Blue Rocket (#21727)", 6021727},
    {"Recipe: Schematic: Large Green Rocket (#21728)", 6021728},
    {"Recipe: Schematic: Large Red Rocket (#21729)", 6021729},
    {"Recipe: Schematic: Blue Rocket Cluster (#21730)", 6021730},
    {"Recipe: Schematic: Green Rocket Cluster (#21731)", 6021731},
    {"Recipe: Schematic: Red Rocket Cluster (#21732)", 6021732},
    {"Recipe: Schematic: Large Blue Rocket Cluster (#21733)", 6021733},
    {"Recipe: Schematic: Large Green Rocket Cluster (#21734)", 6021734},
    {"Recipe: Schematic: Large Red Rocket Cluster (#21735)", 6021735},
    {"Recipe: Schematic: Firework Launcher (#21738)", 6021738},
    {"Recipe: Schematic: Cluster Launcher (#21737)", 6021737},
    {"Recipe: Pattern: Bolt of Imbued Netherweave (#21892)", 6021892},
    {"Recipe: Pattern: Imbued Netherweave Bag (#21893)", 6021893},
    {"Recipe: Pattern: Bolt of Soulcloth (#21894)", 6021894},
    {"Recipe: Pattern: Primal Mooncloth (#21895)", 6021895},
    {"Recipe: Pattern: Spellfire Belt (#21908)", 6021908},
    {"Recipe: Pattern: Spellfire Gloves (#21909)", 6021909},
    {"Recipe: Pattern: Spellfire Robe (#21910)", 6021910},
    {"Recipe: Pattern: Spellfire Bag (#21911)", 6021911},
    {"Recipe: Pattern: Frozen Shadoweave Shoulders (#21912)", 6021912},
    {"Recipe: Pattern: Frozen Shadoweave Boots (#21914)", 6021914},
    {"Recipe: Pattern: Frozen Shadoweave Robe (#21913)", 6021913},
    {"Recipe: Pattern: Ebon Shadowbag (#21915)", 6021915},
    {"Recipe: Pattern: Primal Mooncloth Belt (#21916)", 6021916},
    {"Recipe: Pattern: Primal Mooncloth Shoulders (#21918)", 6021918},
    {"Recipe: Pattern: Primal Mooncloth Robe (#21917)", 6021917},
    {"Recipe: Pattern: Primal Mooncloth Bag (#21919)", 6021919},
    {"Recipe: Pattern: Netherweave Robe (#21896)", 6021896},
    {"Recipe: Pattern: Netherweave Tunic (#21897)", 6021897},
    {"Recipe: Pattern: Imbued Netherweave Pants (#21898)", 6021898},
    {"Recipe: Pattern: Imbued Netherweave Boots (#21899)", 6021899},
    {"Recipe: Pattern: Imbued Netherweave Robe (#21900)", 6021900},
    {"Recipe: Pattern: Imbued Netherweave Tunic (#21901)", 6021901},
    {"Recipe: Pattern: Soulcloth Gloves (#21902)", 6021902},
    {"Recipe: Pattern: Soulcloth Shoulders (#21903)", 6021903},
    {"Recipe: Pattern: Soulcloth Vest (#21904)", 6021904},
    {"Recipe: Pattern: Arcanoweave Bracers (#21905)", 6021905},
    {"Recipe: Pattern: Arcanoweave Boots (#21906)", 6021906},
    {"Recipe: Pattern: Arcanoweave Robe (#21907)", 6021907},
    {"Recipe: Design: Golden Hare (#21940)", 6021940},
    {"Recipe: Design: Black Pearl Panther (#21941)", 6021941},
    {"Recipe: Design: Ruby Crown of Restoration (#21942)", 6021942},
    {"Recipe: Design: Truesilver Crab (#21943)", 6021943},
    {"Recipe: Design: Truesilver Boar (#21944)", 6021944},
    {"Recipe: Design: The Aquamarine Ward (#21945)", 6021945},
    {"Recipe: Design: Gem Studded Band (#21947)", 6021947},
    {"Recipe: Design: Opal Necklace of Impact (#21948)", 6021948},
    {"Recipe: Design: Ruby Serpent (#21949)", 6021949},
    {"Recipe: Design: Emerald Crown of Destruction (#21952)", 6021952},
    {"Recipe: Design: Emerald Owl (#21953)", 6021953},
    {"Recipe: Design: Ring of Bitter Shadows (#21954)", 6021954},
    {"Recipe: Design: Black Diamond Crab (#21955)", 6021955},
    {"Recipe: Design: Dark Iron Scorpid (#21956)", 6021956},
    {"Recipe: Design: Necklace of the Diamond Tower (#21957)", 6021957},
    {"Recipe: Book: Gift of the Wild III (#22146)", 6022146},
    {"Recipe: Manual: Netherweave Bandage (#21992)", 6021992},
    {"Recipe: Manual: Heavy Netherweave Bandage (#21993)", 6021993},
    {"Recipe: Tome of Conjure Water IX (#29550)", 6029550},
    {"Recipe: Tome of Arcane Brilliance 2 (#22153)", 6022153},
    {"Recipe: Plans: Heavy Obsidian Belt (#22209)", 6022209},
    {"Recipe: Plans: Jagged Obsidian Shield (#22219)", 6022219},
    {"Recipe: Plans: Thick Obsidian Breastplate (#22222)", 6022222},
    {"Recipe: Plans: Light Obsidian Belt (#22214)", 6022214},
    {"Recipe: Plans: Black Grasp of the Destroyer (#22220)", 6022220},
    {"Recipe: Plans: Obsidian Mail Tunic (#22221)", 6022221},
    {"Recipe: Pattern: Enchanted Mageweave Pouch (#22307)", 6022307},
    {"Recipe: Pattern: Enchanted Runecloth Bag (#22308)", 6022308},
    {"Recipe: Pattern: Big Bag of Enchantment (#22309)", 6022309},
    {"Recipe: Codex: Prayer of Shadow Protection (#22393)", 6022393},
    {"Recipe: Pattern: Cenarion Herb Bag (#22310)", 6022310},
    {"Recipe: Pattern: Satchel of Cenarius (#22312)", 6022312},
    {"Recipe: Plans: Titanic Leggings (#22388)", 6022388},
    {"Recipe: Plans: Persuader (#22390)", 6022390},
    {"Recipe: Plans: Sageblade (#22389)", 6022389},
    {"Recipe: Formula: Enchant 2H Weapon - Agility (#22392)", 6022392},
    {"Recipe: Formula: Enchant Bracer - Major Defense (#22530)", 6022530},
    {"Recipe: Formula: Enchant Bracer - Superior Healing (#22531)", 6022531},
    {"Recipe: Formula: Enchant Bracer - Restore Mana Prime (#22532)", 6022532},
    {"Recipe: Formula: Enchant Bracer - Fortitude (#22533)", 6022533},
    {"Recipe: Formula: Enchant Bracer - Spellpower (#22534)", 6022534},
    {"Recipe: Formula: Enchant Ring - Striking (#22535)", 6022535},
    {"Recipe: Formula: Enchant Ring - Spellpower (#22536)", 6022536},
    {"Recipe: Formula: Enchant Ring - Healing Power (#22537)", 6022537},
    {"Recipe: Formula: Enchant Ring - Stats (#22538)", 6022538},
    {"Recipe: Formula: Enchant Shield - Intellect (#22539)", 6022539},
    {"Recipe: Formula: Enchant Shield - Shield Block (#22540)", 6022540},
    {"Recipe: Formula: Enchant Shield - Resistance (#22541)", 6022541},
    {"Recipe: Formula: Enchant Boots - Vitality (#22542)", 6022542},
    {"Recipe: Formula: Enchant Boots - Fortitude (#22543)", 6022543},
    {"Recipe: Formula: Enchant Boots - Dexterity (#22544)", 6022544},
    {"Recipe: Formula: Enchant Boots - Surefooted (#22545)", 6022545},
    {"Recipe: Formula: Enchant Chest - Exceptional Stats (#22547)", 6022547},
    {"Recipe: Formula: Enchant Cloak - Major Resistance (#22548)", 6022548},
    {"Recipe: Formula: Enchant Weapon - Major Striking (#22552)", 6022552},
    {"Recipe: Formula: Enchant Weapon - Major Intellect (#22551)", 6022551},
    {"Recipe: Formula: Enchant 2H Weapon - Savagery (#22554)", 6022554},
    {"Recipe: Formula: Enchant Weapon - Potency (#22553)", 6022553},
    {"Recipe: Formula: Enchant Weapon - Major Spellpower (#22555)", 6022555},
    {"Recipe: Formula: Enchant 2H Weapon - Major Agility (#22556)", 6022556},
    {"Recipe: Formula: Enchant Weapon - Sunfire (#22560)", 6022560},
    {"Recipe: Formula: Enchant Weapon - Soulfrost (#22561)", 6022561},
    {"Recipe: Formula: Enchant Weapon - Mongoose (#22559)", 6022559},
    {"Recipe: Formula: Enchant Weapon - Spellsurge (#22558)", 6022558},
    {"Recipe: Formula: Enchant Weapon - Battlemaster (#22557)", 6022557},
    {"Recipe: Formula: Superior Mana Oil (#22562)", 6022562},
    {"Recipe: Formula: Superior Wizard Oil (#22563)", 6022563},
    {"Recipe: Formula: Large Prismatic Shard (#22565)", 6022565},
    {"Recipe: Pattern: Gaea's Embrace (#22683)", 6022683},
    {"Recipe: Crunchy Spider Surprise (#22647)", 6022647},
    {"Recipe: Tome of Polymorph: Turtle (#22739)", 6022739},
    {"Recipe: Schematic: Steam Tonk Controller (#22729)", 6022729},
    {"Recipe: Plans: Ironvine Breastplate (#22766)", 6022766},
    {"Recipe: Plans: Ironvine Gloves (#22767)", 6022767},
    {"Recipe: Plans: Ironvine Belt (#22768)", 6022768},
    {"Recipe: Pattern: Bramblewood Helm (#22771)", 6022771},
    {"Recipe: Pattern: Bramblewood Boots (#22770)", 6022770},
    {"Recipe: Pattern: Bramblewood Belt (#22769)", 6022769},
    {"Recipe: Pattern: Sylvan Vest (#22774)", 6022774},
    {"Recipe: Pattern: Sylvan Crown (#22773)", 6022773},
    {"Recipe: Pattern: Sylvan Shoulders (#22772)", 6022772},
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
    {"Recipe: Tome of Frost Ward V (#22890)", 6022890},
    {"Recipe: Grimoire of Shadow Ward IV (#22891)", 6022891},
    {"Recipe: Tome of Conjure Food VII (#22897)", 6022897},
    {"Recipe: Design: Teardrop Blood Garnet (#23130)", 6023130},
    {"Recipe: Design: Bold Blood Garnet (#23131)", 6023131},
    {"Recipe: Design: Runed Blood Garnet (#23133)", 6023133},
    {"Recipe: Design: Delicate Blood Garnet (#23134)", 6023134},
    {"Recipe: Design: Inscribed Flame Spessarite (#23135)", 6023135},
    {"Recipe: Design: Luminous Flame Spessarite (#23136)", 6023136},
    {"Recipe: Design: Glinting Flame Spessarite (#23137)", 6023137},
    {"Recipe: Design: Potent Flame Spessarite (#23138)", 6023138},
    {"Recipe: Design: Radiant Deep Peridot (#23140)", 6023140},
    {"Recipe: Design: Jagged Deep Peridot (#23141)", 6023141},
    {"Recipe: Design: Enduring Deep Peridot (#23142)", 6023142},
    {"Recipe: Design: Dazzling Deep Peridot (#23143)", 6023143},
    {"Recipe: Design: Glowing Shadow Draenite (#23144)", 6023144},
    {"Recipe: Design: Royal Shadow Draenite (#23145)", 6023145},
    {"Recipe: Design: Shifting Shadow Draenite (#23146)", 6023146},
    {"Recipe: Design: Sovereign Shadow Draenite (#23147)", 6023147},
    {"Recipe: Design: Brilliant Golden Draenite (#23148)", 6023148},
    {"Recipe: Design: Gleaming Golden Draenite (#23149)", 6023149},
    {"Recipe: Design: Thick Golden Draenite (#23150)", 6023150},
    {"Recipe: Design: Rigid Golden Draenite (#23151)", 6023151},
    {"Recipe: Design: Solid Azure Moonstone (#23152)", 6023152},
    {"Recipe: Design: Sparkling Azure Moonstone (#23153)", 6023153},
    {"Recipe: Design: Stormy Azure Moonstone (#23154)", 6023154},
    {"Recipe: Design: Lustrous Azure Moonstone (#23155)", 6023155},
    {"Recipe: Tablet of Flame Shock VI (#23320)", 6023320},
    {"Recipe: Plans: Adamantite Maul (#23590)", 6023590},
    {"Recipe: Plans: Adamantite Cleaver (#23591)", 6023591},
    {"Recipe: Plans: Adamantite Dagger (#23592)", 6023592},
    {"Recipe: Plans: Adamantite Rapier (#23593)", 6023593},
    {"Recipe: Plans: Adamantite Plate Bracers (#23594)", 6023594},
    {"Recipe: Plans: Adamantite Plate Gloves (#23595)", 6023595},
    {"Recipe: Plans: Adamantite Breastplate (#23596)", 6023596},
    {"Recipe: Plans: Enchanted Adamantite Belt (#23597)", 6023597},
    {"Recipe: Plans: Enchanted Adamantite Breastplate (#23599)", 6023599},
    {"Recipe: Plans: Enchanted Adamantite Boots (#23598)", 6023598},
    {"Recipe: Plans: Enchanted Adamantite Leggings (#23600)", 6023600},
    {"Recipe: Plans: Flamebane Bracers (#23601)", 6023601},
    {"Recipe: Plans: Flamebane Helm (#23602)", 6023602},
    {"Recipe: Plans: Flamebane Gloves (#23603)", 6023603},
    {"Recipe: Plans: Flamebane Breastplate (#23604)", 6023604},
    {"Recipe: Plans: Felsteel Gloves (#23605)", 6023605},
    {"Recipe: Plans: Felsteel Leggings (#23606)", 6023606},
    {"Recipe: Plans: Felsteel Helm (#23607)", 6023607},
    {"Recipe: Plans: Gauntlets of the Iron Tower (#23621)", 6023621},
    {"Recipe: Plans: Khorium Belt (#23608)", 6023608},
    {"Recipe: Plans: Khorium Pants (#23609)", 6023609},
    {"Recipe: Plans: Khorium Boots (#23610)", 6023610},
    {"Recipe: Plans: Ragesteel Gloves (#23611)", 6023611},
    {"Recipe: Plans: Ragesteel Helm (#23612)", 6023612},
    {"Recipe: Plans: Ragesteel Breastplate (#23613)", 6023613},
    {"Recipe: Plans: Swiftsteel Gloves (#23615)", 6023615},
    {"Recipe: Plans: Earthpeace Breastplate (#23617)", 6023617},
    {"Recipe: Plans: Adamantite Sharpening Stone (#23618)", 6023618},
    {"Recipe: Plans: Felsteel Shield Spike (#23619)", 6023619},
    {"Recipe: Plans: Felfury Gauntlets (#23620)", 6023620},
    {"Recipe: Plans: Steelgrip Gauntlets (#23622)", 6023622},
    {"Recipe: Plans: Storm Helm (#23623)", 6023623},
    {"Recipe: Plans: Helm of the Stalwart Defender (#23624)", 6023624},
    {"Recipe: Plans: Oathkeeper's Helm (#23625)", 6023625},
    {"Recipe: Plans: Black Felsteel Bracers (#23626)", 6023626},
    {"Recipe: Plans: Bracers of the Green Fortress (#23627)", 6023627},
    {"Recipe: Plans: Blessed Bracers (#23628)", 6023628},
    {"Recipe: Transmute Primal Might (#23574)", 6023574},
    {"Recipe: Plans: Felsteel Longblade (#23629)", 6023629},
    {"Recipe: Plans: Khorium Champion (#23630)", 6023630},
    {"Recipe: Plans: Fel Edged Battleaxe (#23631)", 6023631},
    {"Recipe: Plans: Felsteel Reaper (#23632)", 6023632},
    {"Recipe: Plans: Runic Hammer (#23633)", 6023633},
    {"Recipe: Plans: Fel Hardened Maul (#23634)", 6023634},
    {"Recipe: Plans: Eternium Runed Blade (#23635)", 6023635},
    {"Recipe: Plans: Dirge (#23636)", 6023636},
    {"Recipe: Plans: Hand of Eternity (#23637)", 6023637},
    {"Recipe: Plans: Lesser Ward of Shielding (#23638)", 6023638},
    {"Recipe: Plans: Greater Ward of Shielding (#23639)", 6023639},
    {"Recipe: Schematic: Adamantite Rifle (#23799)", 6023799},
    {"Recipe: Schematic: Felsteel Boomstick (#23800)", 6023800},
    {"Recipe: Schematic: Ornate Khorium Rifle (#23802)", 6023802},
    {"Recipe: Schematic: Cogspinner Goggles (#23803)", 6023803},
    {"Recipe: Schematic: Power Amplification Goggles (#23804)", 6023804},
    {"Recipe: Schematic: Ultra-Spectropic Detection Goggles (#23805)", 6023805},
    {"Recipe: Schematic: Hyper-Vision Goggles (#23806)", 6023806},
    {"Recipe: Schematic: Adamantite Scope (#23807)", 6023807},
    {"Recipe: Schematic: Khorium Scope (#23808)", 6023808},
    {"Recipe: Schematic: Stabilized Eternium Scope (#23809)", 6023809},
    {"Recipe: Schematic: Crashin' Thrashin' Robot (#23810)", 6023810},
    {"Recipe: Schematic: White Smoke Flare (#23811)", 6023811},
    {"Recipe: Schematic: Green Smoke Flare (#23814)", 6023814},
    {"Recipe: Schematic: Adamantite Shell Machine (#23815)", 6023815},
    {"Recipe: Schematic: Fel Iron Toolbox (#23816)", 6023816},
    {"Recipe: Schematic: Titanium Toolbox (#23817)", 6023817},
    {"Recipe: Schematic: Elemental Seaforium Charge (#23874)", 6023874},
    {"Recipe: Schematic: Zapthrottle Mote Extractor (#23888)", 6023888},
    {"Recipe: Schematic: Critter Enlarger (#23882)", 6023882},
    {"Recipe: Schematic: Healing Potion Injector (#23883)", 6023883},
    {"Recipe: Schematic: Mana Potion Injector (#23884)", 6023884},
    {"Recipe: Schematic: Remote Mail Terminal (#23885)", 6023885},
    {"Recipe: Schematic: Rocket Boots Xtreme (#23887)", 6023887},
    {"Recipe: Manual of Eviscerate IX (#24102)", 6024102},
    {"Recipe: Book of Ferocious Bite V (#24101)", 6024101},
    {"Recipe: Design: Khorium Band of Shadows (#24158)", 6024158},
    {"Recipe: Design: Khorium Band of Frost (#24159)", 6024159},
    {"Recipe: Design: Khorium Inferno Band (#24160)", 6024160},
    {"Recipe: Design: Khorium Band of Leaves (#24161)", 6024161},
    {"Recipe: Design: Arcane Khorium Band (#24162)", 6024162},
    {"Recipe: Design: Heavy Felsteel Ring (#24163)", 6024163},
    {"Recipe: Design: Delicate Eternium Ring (#24164)", 6024164},
    {"Recipe: Design: Blazing Eternium Band (#24165)", 6024165},
    {"Recipe: Design: Pendant of Frozen Flame (#24174)", 6024174},
    {"Recipe: Design: Pendant of Thawing (#24175)", 6024175},
    {"Recipe: Design: Pendant of Withering (#24176)", 6024176},
    {"Recipe: Design: Pendant of Shadow's End (#24177)", 6024177},
    {"Recipe: Design: Pendant of the Null Rune (#24178)", 6024178},
    {"Recipe: Design: Thick Felsteel Necklace (#24166)", 6024166},
    {"Recipe: Design: Living Ruby Pendant (#24167)", 6024167},
    {"Recipe: Design: Braided Eternium Chain (#24168)", 6024168},
    {"Recipe: Design: Eye of the Night (#24169)", 6024169},
    {"Recipe: Design: Embrace of the Dawn (#24170)", 6024170},
    {"Recipe: Design: Chain of the Twilight Owl (#24171)", 6024171},
    {"Recipe: Design: Coronet of Verdant Flame (#24172)", 6024172},
    {"Recipe: Design: Circlet of Arcane Might (#24173)", 6024173},
    {"Recipe: Design: Felsteel Boar (#24179)", 6024179},
    {"Recipe: Design: Dawnstone Crab (#24180)", 6024180},
    {"Recipe: Design: Living Ruby Serpent (#24181)", 6024181},
    {"Recipe: Design: Talasite Owl (#24182)", 6024182},
    {"Recipe: Design: Nightseye Panther (#24183)", 6024183},
    {"Recipe: Design: Bold Living Ruby (#24193)", 6024193},
    {"Recipe: Design: Delicate Living Ruby (#24194)", 6024194},
    {"Recipe: Design: Teardrop Living Ruby (#24195)", 6024195},
    {"Recipe: Design: Runed Living Ruby (#24196)", 6024196},
    {"Recipe: Design: Bright Living Ruby (#24192)", 6024192},
    {"Recipe: Design: Subtle Living Ruby (#24197)", 6024197},
    {"Recipe: Design: Flashing Living Ruby (#24198)", 6024198},
    {"Recipe: Design: Solid Star of Elune (#24199)", 6024199},
    {"Recipe: Design: Lustrous Star of Elune (#24201)", 6024201},
    {"Recipe: Design: Stormy Star of Elune (#24202)", 6024202},
    {"Recipe: Design: Brilliant Dawnstone (#24203)", 6024203},
    {"Recipe: Design: Smooth Dawnstone (#24204)", 6024204},
    {"Recipe: Design: Rigid Dawnstone (#24205)", 6024205},
    {"Recipe: Design: Gleaming Dawnstone (#24206)", 6024206},
    {"Recipe: Design: Thick Dawnstone (#24207)", 6024207},
    {"Recipe: Design: Mystic Dawnstone (#24208)", 6024208},
    {"Recipe: Design: Sovereign Nightseye (#24209)", 6024209},
    {"Recipe: Design: Shifting Nightseye (#24210)", 6024210},
    {"Recipe: Design: Glowing Nightseye (#24211)", 6024211},
    {"Recipe: Design: Royal Nightseye (#24212)", 6024212},
    {"Recipe: Design: Inscribed Noble Topaz (#24213)", 6024213},
    {"Recipe: Design: Potent Noble Topaz (#24214)", 6024214},
    {"Recipe: Design: Luminous Noble Topaz (#24215)", 6024215},
    {"Recipe: Design: Glinting Noble Topaz (#24216)", 6024216},
    {"Recipe: Design: Enduring Talasite (#24217)", 6024217},
    {"Recipe: Design: Radiant Talasite (#24218)", 6024218},
    {"Recipe: Design: Dazzling Talasite (#24219)", 6024219},
    {"Recipe: Design: Jagged Talasite (#24220)", 6024220},
    {"Recipe: Design: Sparkling Star of Elune (#24200)", 6024200},
    {"Recipe: Pattern: Spellcloth (#24316)", 6024316},
    {"Recipe: Pattern: Mystic Spellthread (#24292)", 6024292},
    {"Recipe: Pattern: Silver Spellthread (#24293)", 6024293},
    {"Recipe: Pattern: Runic Spellthread (#24294)", 6024294},
    {"Recipe: Pattern: Golden Spellthread (#24295)", 6024295},
    {"Recipe: Pattern: Unyielding Bracers (#24296)", 6024296},
    {"Recipe: Pattern: Bracers of Havok (#24297)", 6024297},
    {"Recipe: Pattern: Blackstrike Bracers (#24298)", 6024298},
    {"Recipe: Pattern: Cloak of the Black Void (#24299)", 6024299},
    {"Recipe: Pattern: Cloak of Eternity (#24300)", 6024300},
    {"Recipe: Pattern: White Remedy Cape (#24301)", 6024301},
    {"Recipe: Pattern: Unyielding Girdle (#24302)", 6024302},
    {"Recipe: Pattern: Girdle of Ruination (#24303)", 6024303},
    {"Recipe: Pattern: Black Belt of Knowledge (#24304)", 6024304},
    {"Recipe: Pattern: Resolute Cape (#24305)", 6024305},
    {"Recipe: Pattern: Vengeance Wrap (#24306)", 6024306},
    {"Recipe: Pattern: Manaweave Cloak (#24307)", 6024307},
    {"Recipe: Pattern: Whitemend Pants (#24308)", 6024308},
    {"Recipe: Pattern: Spellstrike Pants (#24309)", 6024309},
    {"Recipe: Pattern: Battlecast Pants (#24310)", 6024310},
    {"Recipe: Pattern: Whitemend Hood (#24311)", 6024311},
    {"Recipe: Pattern: Spellstrike Hood (#24312)", 6024312},
    {"Recipe: Pattern: Battlecast Hood (#24313)", 6024313},
    {"Recipe: Pattern: Bag of Jewels (#24314)", 6024314},
    {"Recipe: Pattern: Heavy Netherweave Net (#24315)", 6024315},
    {"Recipe: Book of Cower IV (#24345)", 6024345},
    {"Recipe: Plans: Greater Rune of Warding (#25526)", 6025526},
    {"Recipe: Pattern: Heavy Knothide Leather (#25720)", 6025720},
    {"Recipe: Pattern: Vindicator's Armor Kit (#25721)", 6025721},
    {"Recipe: Pattern: Magister's Armor Kit (#25722)", 6025722},
    {"Recipe: Pattern: Riding Crop (#25725)", 6025725},
    {"Recipe: Pattern: Comfortable Insoles (#25726)", 6025726},
    {"Recipe: Pattern: Stylin' Purple Hat (#25728)", 6025728},
    {"Recipe: Pattern: Stylin' Adventure Hat (#25729)", 6025729},
    {"Recipe: Pattern: Stylin' Crimson Hat (#25731)", 6025731},
    {"Recipe: Pattern: Stylin' Jungle Hat (#25730)", 6025730},
    {"Recipe: Pattern: Fel Leather Gloves (#25732)", 6025732},
    {"Recipe: Pattern: Fel Leather Boots (#25733)", 6025733},
    {"Recipe: Pattern: Fel Leather Leggings (#25734)", 6025734},
    {"Recipe: Pattern: Heavy Clefthoof Vest (#25735)", 6025735},
    {"Recipe: Pattern: Heavy Clefthoof Leggings (#25736)", 6025736},
    {"Recipe: Pattern: Heavy Clefthoof Boots (#25737)", 6025737},
    {"Recipe: Pattern: Felstalker Belt (#25738)", 6025738},
    {"Recipe: Pattern: Felstalker Bracers (#25739)", 6025739},
    {"Recipe: Pattern: Felstalker Breastplate (#25740)", 6025740},
    {"Recipe: Pattern: Netherfury Belt (#25741)", 6025741},
    {"Recipe: Pattern: Netherfury Leggings (#25742)", 6025742},
    {"Recipe: Pattern: Netherfury Boots (#25743)", 6025743},
    {"Recipe: Plans: Adamantite Rod (#25846)", 6025846},
    {"Recipe: Plans: Eternium Rod (#25847)", 6025847},
    {"Recipe: Formula: Runed Adamantite Rod (#25848)", 6025848},
    {"Recipe: Formula: Runed Eternium Rod (#25849)", 6025849},
    {"Recipe: Transmute Earthstorm Diamond (#25869)", 6025869},
    {"Recipe: Transmute Skyfire Diamond (#25870)", 6025870},
    {"Recipe: Schematic: Purple Smoke Flare (#25887)", 6025887},
    {"Recipe: Design: Powerful Earthstorm Diamond (#25902)", 6025902},
    {"Recipe: Design: Bracing Earthstorm Diamond (#25903)", 6025903},
    {"Recipe: Design: Tenacious Earthstorm Diamond (#25905)", 6025905},
    {"Recipe: Design: Brutal Earthstorm Diamond (#25906)", 6025906},
    {"Recipe: Design: Insightful Earthstorm Diamond (#25904)", 6025904},
    {"Recipe: Design: Destructive Skyfire Diamond (#25907)", 6025907},
    {"Recipe: Design: Mystical Skyfire Diamond (#25909)", 6025909},
    {"Recipe: Design: Swift Skyfire Diamond (#25908)", 6025908},
    {"Recipe: Design: Enigmatic Skyfire Diamond (#25910)", 6025910},
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
    {"Recipe: Tome of Conjure Food VIII (#31501)", 6031501},
    {"Recipe: Formula: Enchant Chest - Major Resilience (#28270)", 6028270},
    {"Recipe: Formula: Enchant Gloves - Precise Strikes (#28271)", 6028271},
    {"Recipe: Formula: Enchant Gloves - Major Spellpower (#28272)", 6028272},
    {"Recipe: Formula: Enchant Gloves - Major Healing (#28273)", 6028273},
    {"Recipe: Formula: Enchant Cloak - Spell Penetration (#28274)", 6028274},
    {"Recipe: Formula: Enchant Cloak - Greater Arcane Resistance (#28276)", 6028276},
    {"Recipe: Formula: Enchant Cloak - Greater Shadow Resistance (#28277)", 6028277},
    {"Recipe: Formula: Enchant Boots - Cat's Swiftness (#28279)", 6028279},
    {"Recipe: Formula: Enchant Boots - Boar's Speed (#28280)", 6028280},
    {"Recipe: Formula: Enchant Shield - Major Stamina (#28282)", 6028282},
    {"Recipe: Formula: Enchant Weapon - Major Healing (#28281)", 6028281},
    {"Recipe: Design: Smooth Golden Draenite (#28291)", 6028291},
    {"Recipe: Design: Bright Blood Garnet (#28596)", 6028596},
    {"Recipe: Plans: Adamantite Weightstone (#28632)", 6028632},
    {"Recipe: Pattern: Shadow Armor Kit (#29669)", 6029669},
    {"Recipe: Pattern: Flame Armor Kit (#29672)", 6029672},
    {"Recipe: Pattern: Frost Armor Kit (#29673)", 6029673},
    {"Recipe: Pattern: Nature Armor Kit (#29674)", 6029674},
    {"Recipe: Pattern: Arcane Armor Kit (#29675)", 6029675},
    {"Recipe: Pattern: Enchanted Felscale Leggings (#29677)", 6029677},
    {"Recipe: Pattern: Enchanted Felscale Gloves (#29682)", 6029682},
    {"Recipe: Pattern: Enchanted Felscale Boots (#29684)", 6029684},
    {"Recipe: Pattern: Flamescale Boots (#29691)", 6029691},
    {"Recipe: Pattern: Flamescale Leggings (#29689)", 6029689},
    {"Recipe: Pattern: Reinforced Mining Bag (#29664)", 6029664},
    {"Recipe: Pattern: Flamescale Belt (#29693)", 6029693},
    {"Recipe: Pattern: Enchanted Clefthoof Leggings (#29698)", 6029698},
    {"Recipe: Pattern: Enchanted Clefthoof Gloves (#29700)", 6029700},
    {"Recipe: Pattern: Enchanted Clefthoof Boots (#29701)", 6029701},
    {"Recipe: Pattern: Blastguard Pants (#29702)", 6029702},
    {"Recipe: Pattern: Blastguard Boots (#29703)", 6029703},
    {"Recipe: Pattern: Blastguard Belt (#29704)", 6029704},
    {"Recipe: Pattern: Drums of Panic (#29713)", 6029713},
    {"Recipe: Pattern: Drums of Restoration (#29714)", 6029714},
    {"Recipe: Pattern: Drums of Battle (#29717)", 6029717},
    {"Recipe: Pattern: Drums of Speed (#29718)", 6029718},
    {"Recipe: Pattern: Cobrahide Leg Armor (#29719)", 6029719},
    {"Recipe: Pattern: Nethercobra Leg Armor (#29722)", 6029722},
    {"Recipe: Pattern: Clefthide Leg Armor (#29720)", 6029720},
    {"Recipe: Pattern: Nethercleft Leg Armor (#29721)", 6029721},
    {"Recipe: Pattern: Cobrascale Hood (#29723)", 6029723},
    {"Recipe: Pattern: Cobrascale Gloves (#29724)", 6029724},
    {"Recipe: Pattern: Windscale Hood (#29725)", 6029725},
    {"Recipe: Pattern: Hood of Primal Life (#29726)", 6029726},
    {"Recipe: Pattern: Gloves of the Living Touch (#29727)", 6029727},
    {"Recipe: Pattern: Windslayer Wraps (#29728)", 6029728},
    {"Recipe: Pattern: Living Dragonscale Helm (#29729)", 6029729},
    {"Recipe: Pattern: Earthen Netherscale Boots (#29730)", 6029730},
    {"Recipe: Pattern: Windstrike Gloves (#29731)", 6029731},
    {"Recipe: Pattern: Netherdrake Helm (#29732)", 6029732},
    {"Recipe: Pattern: Netherdrake Gloves (#29733)", 6029733},
    {"Recipe: Pattern: Thick Netherscale Breastplate (#29734)", 6029734},
    {"Recipe: Clam Bar (#30156)", 6030156},
    {"Recipe: Pattern: Belt of Blasting (#30280)", 6030280},
    {"Recipe: Pattern: Belt of the Long Road (#30281)", 6030281},
    {"Recipe: Pattern: Boots of Blasting (#30282)", 6030282},
    {"Recipe: Pattern: Boots of the Long Road (#30283)", 6030283},
    {"Recipe: Pattern: Belt of Natural Power (#30301)", 6030301},
    {"Recipe: Pattern: Belt of Deep Shadow (#30302)", 6030302},
    {"Recipe: Pattern: Belt of the Black Eagle (#30303)", 6030303},
    {"Recipe: Pattern: Monsoon Belt (#30304)", 6030304},
    {"Recipe: Pattern: Boots of Natural Grace (#30305)", 6030305},
    {"Recipe: Pattern: Boots of Utter Darkness (#30306)", 6030306},
    {"Recipe: Pattern: Boots of the Crimson Hawk (#30307)", 6030307},
    {"Recipe: Pattern: Hurricane Boots (#30308)", 6030308},
    {"Recipe: Plans: Belt of the Guardian (#30321)", 6030321},
    {"Recipe: Plans: Red Belt of Battle (#30322)", 6030322},
    {"Recipe: Plans: Boots of the Protector (#30323)", 6030323},
    {"Recipe: Plans: Red Havoc Boots (#30324)", 6030324},
    {"Recipe: Pattern: Shadowcloth (#30483)", 6030483},
    {"Recipe: Design: Ring of Arcane Shielding (#30826)", 6030826},
    {"Recipe: Pattern: Cloak of Arcane Evasion (#30833)", 6030833},
    {"Recipe: Pattern: Flameheart Bracers (#30842)", 6030842},
    {"Recipe: Pattern: Flameheart Gloves (#30843)", 6030843},
    {"Recipe: Pattern: Flameheart Vest (#30844)", 6030844},
    {"Recipe: Plans: Wildguard Breastplate (#31390)", 6031390},
    {"Recipe: Plans: Wildguard Leggings (#31391)", 6031391},
    {"Recipe: Plans: Wildguard Helm (#31392)", 6031392},
    {"Recipe: Plans: Iceguard Breastplate (#31393)", 6031393},
    {"Recipe: Plans: Iceguard Leggings (#31394)", 6031394},
    {"Recipe: Plans: Iceguard Helm (#31395)", 6031395},
    {"Recipe: Design: The Frozen Eye (#31401)", 6031401},
    {"Recipe: Design: The Natural Ward (#31402)", 6031402},
    {"Recipe: Mok'Nathal Shortribs (#31675)", 6031675},
    {"Recipe: Crunchy Serpent (#31674)", 6031674},
    {"Recipe: Fel Strength Elixir (#31680)", 6031680},
    {"Recipe: Fel Mana Potion (#31682)", 6031682},
    {"Recipe: Fel Regeneration Potion (#31681)", 6031681},
    {"Recipe: Codex: Prayer of Shadow Protection II (#31837)", 6031837},
    {"Recipe: Design: Great Golden Draenite (#31870)", 6031870},
    {"Recipe: Design: Great Dawnstone (#31875)", 6031875},
    {"Recipe: Design: Balanced Shadow Draenite (#31871)", 6031871},
    {"Recipe: Design: Infused Shadow Draenite (#31872)", 6031872},
    {"Recipe: Design: Infused Nightseye (#31877)", 6031877},
    {"Recipe: Design: Balanced Nightseye (#31876)", 6031876},
    {"Recipe: Design: Veiled Flame Spessarite (#31873)", 6031873},
    {"Recipe: Design: Wicked Flame Spessarite (#31874)", 6031874},
    {"Recipe: Design: Veiled Noble Topaz (#31878)", 6031878},
    {"Recipe: Design: Wicked Noble Topaz (#31879)", 6031879},
    {"Recipe: Earthen Elixir (#32070)", 6032070},
    {"Recipe: Elixir of Ironskin (#32071)", 6032071},
    {"Recipe: Design: Bold Crimson Spinel (#32274)", 6032274},
    {"Recipe: Design: Delicate Crimson Spinel (#32277)", 6032277},
    {"Recipe: Design: Teardrop Crimson Spinel (#32281)", 6032281},
    {"Recipe: Design: Runed Crimson Spinel (#32282)", 6032282},
    {"Recipe: Design: Bright Crimson Spinel (#32283)", 6032283},
    {"Recipe: Design: Subtle Crimson Spinel (#32284)", 6032284},
    {"Recipe: Design: Flashing Crimson Spinel (#32285)", 6032285},
    {"Recipe: Design: Solid Empyrean Sapphire (#32286)", 6032286},
    {"Recipe: Design: Sparkling Empyrean Sapphire (#32287)", 6032287},
    {"Recipe: Design: Lustrous Empyrean Sapphire (#32288)", 6032288},
    {"Recipe: Design: Stormy Empyrean Sapphire (#32289)", 6032289},
    {"Recipe: Design: Brilliant Lionseye (#32290)", 6032290},
    {"Recipe: Design: Smooth Lionseye (#32291)", 6032291},
    {"Recipe: Design: Rigid Lionseye (#32292)", 6032292},
    {"Recipe: Design: Gleaming Lionseye (#32293)", 6032293},
    {"Recipe: Design: Thick Lionseye (#32294)", 6032294},
    {"Recipe: Design: Mystic Lionseye (#32295)", 6032295},
    {"Recipe: Design: Great Lionseye (#32296)", 6032296},
    {"Recipe: Design: Sovereign Shadowsong Amethyst (#32297)", 6032297},
    {"Recipe: Design: Shifting Shadowsong Amethyst (#32298)", 6032298},
    {"Recipe: Design: Balanced Shadowsong Amethyst (#32299)", 6032299},
    {"Recipe: Design: Infused Shadowsong Amethyst (#32300)", 6032300},
    {"Recipe: Design: Glowing Shadowsong Amethyst (#32301)", 6032301},
    {"Recipe: Design: Royal Shadowsong Amethyst (#32302)", 6032302},
    {"Recipe: Design: Inscribed Pyrestone (#32303)", 6032303},
    {"Recipe: Design: Potent Pyrestone (#32304)", 6032304},
    {"Recipe: Design: Luminous Pyrestone (#32305)", 6032305},
    {"Recipe: Design: Glinting Pyrestone (#32306)", 6032306},
    {"Recipe: Design: Veiled Pyrestone (#32307)", 6032307},
    {"Recipe: Design: Wicked Pyrestone (#32308)", 6032308},
    {"Recipe: Design: Enduring Seaspray Emerald (#32309)", 6032309},
    {"Recipe: Design: Radiant Seaspray Emerald (#32310)", 6032310},
    {"Recipe: Design: Dazzling Seaspray Emerald (#32311)", 6032311},
    {"Recipe: Design: Jagged Seaspray Emerald (#32312)", 6032312},
    {"Recipe: Schematic: Fused Wiring (#32381)", 6032381},
    {"Recipe: Design: Relentless Earthstorm Diamond (#32412)", 6032412},
    {"Recipe: Design: Thundering Skyfire Diamond (#32411)", 6032411},
    {"Recipe: Pattern: Boots of Shackled Souls (#32429)", 6032429},
    {"Recipe: Pattern: Greaves of Shackled Souls (#32431)", 6032431},
    {"Recipe: Pattern: Waistguard of Shackled Souls (#32432)", 6032432},
    {"Recipe: Pattern: Redeemed Soul Moccasins (#32433)", 6032433},
    {"Recipe: Pattern: Redeemed Soul Wristguards (#32434)", 6032434},
    {"Recipe: Pattern: Redeemed Soul Legguards (#32435)", 6032435},
    {"Recipe: Pattern: Redeemed Soul Cinch (#32436)", 6032436},
    {"Recipe: Pattern: Soulguard Slippers (#32437)", 6032437},
    {"Recipe: Pattern: Soulguard Bracers (#32438)", 6032438},
    {"Recipe: Pattern: Soulguard Leggings (#32439)", 6032439},
    {"Recipe: Pattern: Soulguard Girdle (#32440)", 6032440},
    {"Recipe: Plans: Shadesteel Sabots (#32441)", 6032441},
    {"Recipe: Plans: Shadesteel Bracers (#32442)", 6032442},
    {"Recipe: Plans: Shadesteel Greaves (#32443)", 6032443},
    {"Recipe: Plans: Shadesteel Girdle (#32444)", 6032444},
    {"Recipe: Pattern: Night's End (#32447)", 6032447},
    {"Recipe: Plans: Swiftsteel Bracers (#32736)", 6032736},
    {"Recipe: Plans: Swiftsteel Shoulders (#32737)", 6032737},
    {"Recipe: Plans: Dawnsteel Bracers (#32738)", 6032738},
    {"Recipe: Plans: Dawnsteel Shoulders (#32739)", 6032739},
    {"Recipe: Pattern: Bracers of Renewed Life (#32744)", 6032744},
    {"Recipe: Pattern: Shoulderpads of Renewed Life (#32745)", 6032745},
    {"Recipe: Pattern: Swiftstrike Bracers (#32746)", 6032746},
    {"Recipe: Pattern: Swiftstrike Shoulders (#32747)", 6032747},
    {"Recipe: Pattern: Bindings of Lightning Reflexes (#32748)", 6032748},
    {"Recipe: Pattern: Shoulders of Lightning Reflexes (#32749)", 6032749},
    {"Recipe: Pattern: Living Earth Bindings (#32750)", 6032750},
    {"Recipe: Pattern: Living Earth Shoulders (#32751)", 6032751},
    {"Recipe: Pattern: Bracers of Nimble Thought (#32754)", 6032754},
    {"Recipe: Pattern: Mantle of Nimble Thought (#32755)", 6032755},
    {"Recipe: Pattern: Swiftheal Wraps (#32752)", 6032752},
    {"Recipe: Pattern: Swiftheal Mantle (#32753)", 6032753},
    {"Recipe: Pattern: Cloak of Darkness (#33124)", 6033124},
    {"Recipe: Design: Don Julio's Heart (#33305)", 6033305},
    {"Recipe: Design: Kailee's Rose (#33155)", 6033155},
    {"Recipe: Design: Crimson Sun (#33156)", 6033156},
    {"Recipe: Design: Falling Star (#33157)", 6033157},
    {"Recipe: Design: Stone of Blades (#33158)", 6033158},
    {"Recipe: Design: Blood of Amber (#33159)", 6033159},
    {"Recipe: Design: Facet of Eternity (#33160)", 6033160},
    {"Recipe: Formula: Enchant Weapon - Greater Agility (#33165)", 6033165},
    {"Recipe: Plans: Ragesteel Shoulders (#33174)", 6033174},
    {"Recipe: Plans: Adamantite Weapon Chain (#33186)", 6033186},
    {"Recipe: Pattern: Shadowprowler's Chestguard (#33205)", 6033205},
    {"Recipe: Flask of Chromatic Wonder (#33209)", 6033209},
    {"Recipe: Formula: Enchant Weapon - Executioner (#33307)", 6033307},
    {"Recipe: Weather-Beaten Journal (#34109)", 6034109},
    {"Recipe: Design: Steady Talasite (#33783)", 6033783},
    {"Recipe: Plans: Heavy Copper Longsword (#33792)", 6033792},
    {"Recipe: Schematic: Adamantite Arrow Maker (#33804)", 6033804},
    {"Recipe: Skullfish Soup (#33870)", 6033870},
    {"Recipe: Stormchops (#33871)", 6033871},
    {"Recipe: Broiled Bloodfin (#33869)", 6033869},
    {"Recipe: Spicy Hot Talbuk (#33873)", 6033873},
    {"Recipe: Kibler's Bits (#33875)", 6033875},
    {"Recipe: Delicious Chocolate Cake (#33925)", 6033925},
    {"Recipe: Plans: Hammer of Righteous Might (#33954)", 6033954},
    {"Recipe: Pattern: Quiver of a Thousand Feathers (#34200)", 6034200},
    {"Recipe: Schematic: Field Repair Bot 110G (#34114)", 6034114},
    {"Recipe: Formula: Enchant Cloak - Superior Frost Resistance (#37332)", 6037332},
    {"Recipe: Formula: Enchant Cloak - Superior Nature Resistance (#37333)", 6037333},
    {"Recipe: Formula: Enchant Cloak - Superior Agility (#37335)", 6037335},
    {"Recipe: Formula: Enchant Weapon - Exceptional Spirit (#37329)", 6037329},
    {"Recipe: Formula: Enchant Gloves - Greater Assault (#37345)", 6037345},
    {"Recipe: Formula: Enchant Weapon - Icebreaker (#37344)", 6037344},
    {"Recipe: Formula: Enchant Cloak - Superior Fire Resistance (#37331)", 6037331},
    {"Recipe: Formula: Enchant Bracers - Greater Assault (#44484)", 6044484},
    {"Recipe: Formula: Enchant Weapon - Lifeward (#44494)", 6044494},
    {"Recipe: Formula: Enchant Chest - Exceptional Resilience (#37340)", 6037340},
    {"Recipe: Formula: Enchant Cloak - Superior Shadow Resistance (#37334)", 6037334},
    {"Recipe: Formula: Enchant Cloak - Titanweave (#37347)", 6037347},
    {"Recipe: Formula: Enchant Bracer - Major Spirit (#37326)", 6037326},
    {"Recipe: Formula: Enchant Weapon - Scourgebane (#44473)", 6044473},
    {"Recipe: Formula: Enchant Cloak - Superior Arcane Resistance (#37330)", 6037330},
    {"Recipe: Formula: Enchant Bracer - Expertise (#37346)", 6037346},
    {"Recipe: Formula: Enchant Bracer - Greater Stats (#37337)", 6037337},
    {"Recipe: Formula: Enchant Weapon - Giant Slayer (#37339)", 6037339},
    {"Recipe: Formula: Enchant Gloves - Armsman (#44485)", 6044485},
    {"Recipe: Formula: Enchant Weapon - Greater Savagery (#37338)", 6037338},
    {"Recipe: Formula: Enchant Cloak - Shadow Armor (#37349)", 6037349},
    {"Recipe: Formula: Enchant Weapon - Exceptional Agility (#37343)", 6037343},
    {"Recipe: Pattern: Netherscale Ammo Pouch (#34201)", 6034201},
    {"Recipe: Design: Chaotic Skyfire Diamond (#34221)", 6034221},
    {"Recipe: Pattern: Green Winter Clothes (#34261)", 6034261},
    {"Recipe: Pattern: Winter Boots (#34262)", 6034262},
    {"Recipe: Pattern: Red Winter Clothes (#34319)", 6034319},
    {"Recipe: Hot Apple Cider (#34413)", 6034413},
    {"Recipe: Pattern: Bag of Many Hides (#34491)", 6034491},
    {"Recipe: Manual: Heavy Frostweave Bandage (#39152)", 6039152},
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
    {"Recipe: Formula: Void Shatter (#34872)", 6034872},
    {"Recipe: Schematic: Wonderheal XT68 Shades (#35191)", 6035191},
    {"Recipe: Schematic: Justicebringer 3000 Specs (#35187)", 6035187},
    {"Recipe: Schematic: Powerheal 9000 Lens (#35189)", 6035189},
    {"Recipe: Schematic: Hyper-Magnified Moon Specs (#35190)", 6035190},
    {"Recipe: Schematic: Primal-Attuned Goggles (#35192)", 6035192},
    {"Recipe: Schematic: Annihilator Holo-Gogs (#35186)", 6035186},
    {"Recipe: Schematic: Lightning Etched Specs (#35193)", 6035193},
    {"Recipe: Schematic: Surestrike Goggles v3.0 (#35194)", 6035194},
    {"Recipe: Schematic: Mayhem Projection Goggles (#35195)", 6035195},
    {"Recipe: Schematic: Hard Khorium Goggles (#35196)", 6035196},
    {"Recipe: Schematic: Quad Deathblow X44 Goggles (#35197)", 6035197},
    {"Recipe: Design: Loop of Forged Power (#35198)", 6035198},
    {"Recipe: Design: Ring of Flowing Life (#35199)", 6035199},
    {"Recipe: Design: Hard Khorium Band (#35200)", 6035200},
    {"Recipe: Design: Pendant of Sunfire (#35201)", 6035201},
    {"Recipe: Design: Amulet of Flowing Life (#35202)", 6035202},
    {"Recipe: Design: Hard Khorium Choker (#35203)", 6035203},
    {"Recipe: Pattern: Sunfire Handwraps (#35204)", 6035204},
    {"Recipe: Pattern: Hands of Eternal Light (#35205)", 6035205},
    {"Recipe: Pattern: Sunfire Robe (#35206)", 6035206},
    {"Recipe: Pattern: Robe of Eternal Light (#35207)", 6035207},
    {"Recipe: Pattern: Leather Gauntlets of the Sun (#35212)", 6035212},
    {"Recipe: Pattern: Fletcher's Gloves of the Phoenix (#35213)", 6035213},
    {"Recipe: Pattern: Gloves of Immortal Dusk (#35214)", 6035214},
    {"Recipe: Pattern: Sun-Drenched Scale Gloves (#35215)", 6035215},
    {"Recipe: Pattern: Leather Chestguard of the Sun (#35216)", 6035216},
    {"Recipe: Pattern: Embrace of the Phoenix (#35217)", 6035217},
    {"Recipe: Pattern: Carapace of Sun and Shadow (#35218)", 6035218},
    {"Recipe: Pattern: Sun-Drenched Scale Chestguard (#35219)", 6035219},
    {"Recipe: Plans: Sunblessed Gauntlets (#35208)", 6035208},
    {"Recipe: Plans: Hard Khorium Battlefists (#35209)", 6035209},
    {"Recipe: Plans: Sunblessed Breastplate (#35210)", 6035210},
    {"Recipe: Plans: Hard Khorium Battleplate (#35211)", 6035211},
    {"Recipe: Study of Advanced Smelting (#35273)", 6035273},
    {"Recipe: Design: Quick Dawnstone (#35322)", 6035322},
    {"Recipe: Design: Reckless Noble Topaz (#35323)", 6035323},
    {"Recipe: Design: Forceful Talasite (#35325)", 6035325},
    {"Recipe: Formula: Enchant Weapon - Deathfrost (#35498)", 6035498},
    {"Recipe: Formula: Enchant Chest - Defense (#35500)", 6035500},
    {"Recipe: Design: Eternal Earthstorm Diamond (#35502)", 6035502},
    {"Recipe: Design: Ember Skyfire Diamond (#35505)", 6035505},
    {"Recipe: Charred Bear Kabobs (#35564)", 6035564},
    {"Recipe: Juicy Bear Burger (#35566)", 6035566},
    {"Recipe: Schematic: Rocket Boots Xtreme Lite (#35582)", 6035582},
    {"Recipe: Design: Figurine - Empyrean Tortoise (#35695)", 6035695},
    {"Recipe: Design: Figurine - Khorium Boar (#35696)", 6035696},
    {"Recipe: Design: Figurine - Crimson Serpent (#35697)", 6035697},
    {"Recipe: Design: Figurine - Shadowsong Panther (#35698)", 6035698},
    {"Recipe: Design: Figurine - Seaspray Albatross (#35699)", 6035699},
    {"Recipe: Design: Regal Nightseye (#35708)", 6035708},
    {"Recipe: Guardian's Alchemist Stone (#35752)", 6035752},
    {"Recipe: Sorcerer's Alchemist Stone (#35753)", 6035753},
    {"Recipe: Redeemer's Alchemist Stone (#35754)", 6035754},
    {"Recipe: Assassin's Alchemist Stone (#35755)", 6035755},
    {"Recipe: Formula: Enchant Cloak - Steelweave (#35756)", 6035756},
    {"Recipe: Design: Forceful Seaspray Emerald (#35765)", 6035765},
    {"Recipe: Design: Steady Seaspray Emerald (#35764)", 6035764},
    {"Recipe: Design: Reckless Pyrestone (#35762)", 6035762},
    {"Recipe: Design: Quick Lionseye (#35763)", 6035763},
    {"Recipe: Formula: Enchant Cloak - Mighty Armor (#44471)", 6044471},
    {"Recipe: Formula: Enchant Chest - Greater Dodge (#37336)", 6037336},
    {"Recipe: Formula: Enchant Cloak - Haste (#37348)", 6037348},
    {"Recipe: Formula: Enchant Cloak - Wisdom (#44488)", 6044488},
    {"Recipe: Formula: Enchant Boots - Tuskarr's Vitality (#44491)", 6044491},
    {"Recipe: Design: Purified Shadowsong Amethyst (#37504)", 6037504},
    {"Recipe: Pattern: Dress Shoes (#37915)", 6037915},
    {"Recipe: Pattern: Mycah's Botanical Bag (#38229)", 6038229},
    {"Recipe: Pattern: Haliscan Jacket (#38327)", 6038327},
    {"Recipe: Pattern: Haliscan Pantaloons (#38328)", 6038328},
    {"Recipe: Pattern: Trapper's Traveling Pack (#44509)", 6044509},
    {"Recipe: Pattern: Mammoth Mining Bag (#44510)", 6044510},
    {"Recipe: Pattern: Dark Arctic Boots (#38597)", 6038597},
    {"Recipe: Manual: Dense Frostweave Bandage (#39153)", 6039153},
    {"Recipe: Pattern: Bracers of Shackled Souls (#32430)", 6032430},
    {"Recipe: Kungaloosh (#39644)", 6039644},
    {"Recipe: Design: Bold Scarlet Ruby (#41576)", 6041576},
    {"Recipe: Design: Mystic Sun Crystal (#41559)", 6041559},
    {"Recipe: Design: Mysterious Shadow Crystal (#41575)", 6041575},
    {"Recipe: Design: Defender's Shadow Crystal (#41574)", 6041574},
    {"Recipe: Design: Resplendent Huge Citrine (#41566)", 6041566},
    {"Recipe: Design: Deadly Huge Citrine (#41562)", 6041562},
    {"Recipe: Design: Lucent Huge Citrine (#41565)", 6041565},
    {"Recipe: Design: Durable Huge Citrine (#41563)", 6041563},
    {"Recipe: Design: Reckless Huge Citrine (#41561)", 6041561},
    {"Recipe: Design: Empowered Huge Citrine (#41564)", 6041564},
    {"Recipe: Design: Vivid Dark Jade (#41567)", 6041567},
    {"Recipe: Design: Steady Dark Jade (#41572)", 6041572},
    {"Recipe: Design: Seer's Dark Jade (#41568)", 6041568},
    {"Recipe: Design: Turbid Dark Jade (#41571)", 6041571},
    {"Recipe: Design: Opaque Dark Jade (#41573)", 6041573},
    {"Recipe: Design: Tense Dark Jade (#41570)", 6041570},
    {"Recipe: Design: Shattered Dark Jade (#41569)", 6041569},
    {"Recipe: Mighty Arcane Protection Potion (#44564)", 6044564},
    {"Recipe: Mighty Frost Protection Potion (#44566)", 6044566},
    {"Recipe: Mighty Shadow Protection Potion (#44568)", 6044568},
    {"Recipe: Mighty Fire Protection Potion (#44565)", 6044565},
    {"Recipe: Mighty Nature Protection Potion (#44567)", 6044567},
    {"Recipe: Design: Stormy Chalcedony (#41560)", 6041560},
    {"Recipe: Design: Delicate Scarlet Ruby (#41577)", 6041577},
    {"Recipe: Design: Runed Scarlet Ruby (#41718)", 6041718},
    {"Recipe: Design: Subtle Scarlet Ruby (#41719)", 6041719},
    {"Recipe: Design: Flashing Scarlet Ruby (#41578)", 6041578},
    {"Recipe: Design: Fractured Scarlet Ruby (#41817)", 6041817},
    {"Recipe: Design: Precise Scarlet Ruby (#41790)", 6041790},
    {"Recipe: Design: Solid Sky Sapphire (#42138)", 6042138},
    {"Recipe: Design: Lustrous Sky Sapphire (#41581)", 6041581},
    {"Recipe: Design: Stormy Sky Sapphire (#41728)", 6041728},
    {"Recipe: Design: Smooth Autumn's Glow (#41720)", 6041720},
    {"Recipe: Design: Rigid Autumn's Glow (#41580)", 6041580},
    {"Recipe: Design: Thick Autumn's Glow (#41791)", 6041791},
    {"Recipe: Design: Mystic Autumn's Glow (#41727)", 6041727},
    {"Recipe: Design: Quick Autumn's Glow (#41579)", 6041579},
    {"Recipe: Design: Sovereign Twilight Opal (#41784)", 6041784},
    {"Recipe: Design: Shifting Twilight Opal (#41747)", 6041747},
    {"Recipe: Design: Tenuous Twilight Opal (#41785)", 6041785},
    {"Recipe: Design: Glowing Twilight Opal (#41725)", 6041725},
    {"Recipe: Design: Purified Twilight Opal (#41783)", 6041783},
    {"Recipe: Design: Royal Twilight Opal (#41701)", 6041701},
    {"Recipe: Design: Mysterious Twilight Opal (#41740)", 6041740},
    {"Recipe: Design: Infused Twilight Opal (#41796)", 6041796},
    {"Recipe: Design: Regal Twilight Opal (#41703)", 6041703},
    {"Recipe: Design: Defender's Twilight Opal (#41820)", 6041820},
    {"Recipe: Design: Puissant Twilight Opal (#41702)", 6041702},
    {"Recipe: Design: Guardian's Twilight Opal (#41726)", 6041726},
    {"Recipe: Design: Inscribed Monarch Topaz (#41789)", 6041789},
    {"Recipe: Design: Etched Monarch Topaz (#41777)", 6041777},
    {"Recipe: Design: Champion's Monarch Topaz (#41780)", 6041780},
    {"Recipe: Design: Resplendent Monarch Topaz (#41734)", 6041734},
    {"Recipe: Design: Deadly Monarch Topaz (#41794)", 6041794},
    {"Recipe: Design: Glinting Monarch Topaz (#41582)", 6041582},
    {"Recipe: Design: Lucent Monarch Topaz (#41733)", 6041733},
    {"Recipe: Design: Deft Monarch Topaz (#41792)", 6041792},
    {"Recipe: Design: Luminous Monarch Topaz (#41689)", 6041689},
    {"Recipe: Design: Potent Monarch Topaz (#41686)", 6041686},
    {"Recipe: Design: Veiled Monarch Topaz (#41688)", 6041688},
    {"Recipe: Design: Durable Monarch Topaz (#41730)", 6041730},
    {"Recipe: Design: Reckless Monarch Topaz (#41690)", 6041690},
    {"Recipe: Design: Wicked Monarch Topaz (#41721)", 6041721},
    {"Recipe: Design: Empowered Monarch Topaz (#41732)", 6041732},
    {"Recipe: Design: Stark Monarch Topaz (#41687)", 6041687},
    {"Recipe: Design: Stalwart Monarch Topaz (#41779)", 6041779},
    {"Recipe: Design: Glimmering Monarch Topaz (#41722)", 6041722},
    {"Recipe: Design: Accurate Monarch Topaz (#41818)", 6041818},
    {"Recipe: Design: Timeless Forest Emerald (#41795)", 6041795},
    {"Recipe: Design: Jagged Forest Emerald (#41723)", 6041723},
    {"Recipe: Design: Vivid Forest Emerald (#41698)", 6041698},
    {"Recipe: Design: Enduring Forest Emerald (#41697)", 6041697},
    {"Recipe: Design: Steady Forest Emerald (#41738)", 6041738},
    {"Recipe: Design: Forceful Forest Emerald (#41693)", 6041693},
    {"Recipe: Design: Seer's Forest Emerald (#41699)", 6041699},
    {"Recipe: Design: Misty Forest Emerald (#41781)", 6041781},
    {"Recipe: Design: Shining Forest Emerald (#41782)", 6041782},
    {"Recipe: Design: Turbid Forest Emerald (#41737)", 6041737},
    {"Recipe: Design: Intricate Forest Emerald (#41694)", 6041694},
    {"Recipe: Design: Sundered Forest Emerald (#41724)", 6041724},
    {"Recipe: Design: Lambent Forest Emerald (#41696)", 6041696},
    {"Recipe: Design: Opaque Forest Emerald (#41739)", 6041739},
    {"Recipe: Design: Energized Forest Emerald (#41692)", 6041692},
    {"Recipe: Design: Radiant Forest Emerald (#41819)", 6041819},
    {"Recipe: Design: Tense Forest Emerald (#41736)", 6041736},
    {"Recipe: Design: Shattered Forest Emerald (#41735)", 6041735},
    {"Recipe: Design: Fierce Monarch Topaz (#41793)", 6041793},
    {"Recipe: Design: Resolute Monarch Topaz (#41778)", 6041778},
    {"Recipe: Tome of Cold Weather Flight (#49177)", 6049177},
    {"Recipe: Plans: Reinforced Cobalt Shoulders (#41124)", 6041124},
    {"Recipe: Plans: Reinforced Cobalt Helm (#41123)", 6041123},
    {"Recipe: Plans: Reinforced Cobalt Legplates (#41120)", 6041120},
    {"Recipe: Plans: Reinforced Cobalt Chestpiece (#41122)", 6041122},
    {"Recipe: Pattern: Red Lumberjack Shirt (#42172)", 6042172},
    {"Recipe: Pattern: Blue Lumberjack Shirt (#42173)", 6042173},
    {"Recipe: Pattern: Yellow Lumberjack Shirt (#42174)", 6042174},
    {"Recipe: Pattern: Green Lumberjack Shirt (#42175)", 6042175},
    {"Recipe: Pattern: Red Workman's Shirt (#42177)", 6042177},
    {"Recipe: Pattern: Blue Workman's Shirt (#42176)", 6042176},
    {"Recipe: Pattern: Rustic Workman's Shirt (#42178)", 6042178},
    {"Recipe: Pattern: Green Workman's Shirt (#42179)", 6042179},
    {"Recipe: Pattern: Moonshroud (#42181)", 6042181},
    {"Recipe: Pattern: Ebonweave (#42180)", 6042180},
    {"Recipe: Pattern: Spellweave (#42182)", 6042182},
    {"Recipe: Pattern: Abyssal Bag (#42183)", 6042183},
    {"Recipe: Pattern: Glacial Bag (#42184)", 6042184},
    {"Recipe: Pattern: Mysterious Bag (#42185)", 6042185},
    {"Recipe: Pattern: Frostweave Bag (#42186)", 6042186},
    {"Recipe: Pattern: Brilliant Spellthread (#42187)", 6042187},
    {"Recipe: Pattern: Sapphire Spellthread (#42188)", 6042188},
    {"Recipe: Pattern: Wispcloak (#42189)", 6042189},
    {"Recipe: Pattern: Deathchill Cloak (#42190)", 6042190},
    {"Recipe: Pattern: Hat of Wintry Doom (#42191)", 6042191},
    {"Recipe: Pattern: Silky Iceshard Boots (#42192)", 6042192},
    {"Recipe: Pattern: Glacial Cord (#42193)", 6042193},
    {"Recipe: Pattern: Frostmoon Pants (#42194)", 6042194},
    {"Recipe: Pattern: Light Blessed Mittens (#42195)", 6042195},
    {"Recipe: Pattern: Aurora Slippers (#42196)", 6042196},
    {"Recipe: Pattern: Moonshroud Robe (#42197)", 6042197},
    {"Recipe: Pattern: Moonshroud Gloves (#42198)", 6042198},
    {"Recipe: Pattern: Ebonweave Robe (#42199)", 6042199},
    {"Recipe: Pattern: Ebonweave Gloves (#42200)", 6042200},
    {"Recipe: Pattern: Spellweave Robe (#42201)", 6042201},
    {"Recipe: Pattern: Spellweave Gloves (#42202)", 6042202},
    {"Recipe: Design: Bold Dragon's Eye (#42298)", 6042298},
    {"Recipe: Design: Delicate Dragon's Eye (#42301)", 6042301},
    {"Recipe: Design: Runed Dragon's Eye (#42309)", 6042309},
    {"Recipe: Design: Bright Dragon's Eye (#42299)", 6042299},
    {"Recipe: Design: Subtle Dragon's Eye (#42314)", 6042314},
    {"Recipe: Design: Flashing Dragon's Eye (#42302)", 6042302},
    {"Recipe: Design: Brilliant Dragon's Eye (#42300)", 6042300},
    {"Recipe: Design: Fractured Dragon's Eye (#42303)", 6042303},
    {"Recipe: Design: Lustrous Dragon's Eye (#42304)", 6042304},
    {"Recipe: Design: Mystic Dragon's Eye (#42305)", 6042305},
    {"Recipe: Design: Precise Dragon's Eye (#42306)", 6042306},
    {"Recipe: Design: Quick Dragon's Eye (#42307)", 6042307},
    {"Recipe: Design: Rigid Dragon's Eye (#42308)", 6042308},
    {"Recipe: Design: Smooth Dragon's Eye (#42310)", 6042310},
    {"Recipe: Design: Solid Dragon's Eye (#42311)", 6042311},
    {"Recipe: Design: Sparkling Dragon's Eye (#42312)", 6042312},
    {"Recipe: Design: Stormy Dragon's Eye (#42313)", 6042313},
    {"Recipe: Design: Thick Dragon's Eye (#42315)", 6042315},
    {"Recipe: Design: Titanium Impact Band (#42648)", 6042648},
    {"Recipe: Design: Titanium Earthguard Ring (#42649)", 6042649},
    {"Recipe: Design: Titanium Spellshock Ring (#42650)", 6042650},
    {"Recipe: Design: Titanium Impact Choker (#42651)", 6042651},
    {"Recipe: Design: Titanium Earthguard Chain (#42652)", 6042652},
    {"Recipe: Design: Titanium Spellshock Necklace (#42653)", 6042653},
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
    {"Recipe: Pattern: Fur Lining - Fire Resist (#44559)", 6044559},
    {"Recipe: Pattern: Fur Lining - Frost Resist (#44560)", 6044560},
    {"Recipe: Pattern: Fur Lining - Shadow Resist (#44561)", 6044561},
    {"Recipe: Pattern: Fur Lining - Nature Resist  (#44562)", 6044562},
    {"Recipe: Pattern: Fur Lining - Arcane Resist (#44563)", 6044563},
    {"Recipe: Design: Ring of Earthen Might (#43317)", 6043317},
    {"Recipe: Design: Ring of Scarlet Shadows (#43318)", 6043318},
    {"Recipe: Design: Windfire Band (#43319)", 6043319},
    {"Recipe: Design: Ring of Northern Tears (#43320)", 6043320},
    {"Recipe: Design: Savage Titanium Ring (#43485)", 6043485},
    {"Recipe: Design: Savage Titanium Band (#43497)", 6043497},
    {"Recipe: Tasty Cupcake (#43507)", 6043507},
    {"Recipe: Last Week's Mammoth (#43508)", 6043508},
    {"Recipe: Bad Clams (#43509)", 6043509},
    {"Recipe: Haunted Herring (#43510)", 6043510},
    {"Recipe: Gigantic Feast (#43505)", 6043505},
    {"Recipe: Small Feast (#43506)", 6043506},
    {"Recipe: Design: Titanium Frostguard Ring (#43597)", 6043597},
    {"Recipe: A Guide to Northern Cloth Scavenging (#43876)", 6043876},
    {"Recipe: Formula: Enchant Weapon - Accuracy (#44496)", 6044496},
    {"Recipe: Formula: Enchant Weapon - Berserking (#44492)", 6044492},
    {"Recipe: Formula: Enchant Weapon - Black Magic (#44495)", 6044495},
    {"Recipe: Pattern: Dragonscale Ammo Pouch (#44511)", 6044511},
    {"Recipe: Pattern: Nerubian Reinforced Quiver (#44512)", 6044512},
    {"Recipe: Formula: Enchant 2H Weapon - Massacre (#44483)", 6044483},
    {"Recipe: Formula: Enchant Chest - Powerful Stats (#44489)", 6044489},
    {"Recipe: Pattern: Eviscerator's Facemask (#44513)", 6044513},
    {"Recipe: Pattern: Eviscerator's Shoulderpads (#44514)", 6044514},
    {"Recipe: Pattern: Eviscerator's Chestguard (#44515)", 6044515},
    {"Recipe: Pattern: Eviscerator's Bindings (#44516)", 6044516},
    {"Recipe: Pattern: Eviscerator's Gauntlets (#44517)", 6044517},
    {"Recipe: Pattern: Eviscerator's Waistguard (#44518)", 6044518},
    {"Recipe: Formula: Enchant Weapon - Superior Potency (#44486)", 6044486},
    {"Recipe: Pattern: Eviscerator's Legguards (#44519)", 6044519},
    {"Recipe: Pattern: Eviscerator's Treads (#44520)", 6044520},
    {"Recipe: Formula: Enchant Weapon - Mighty Spellpower (#44487)", 6044487},
    {"Recipe: Pattern: Overcast Headguard (#44521)", 6044521},
    {"Recipe: Pattern: Overcast Spaulders (#44522)", 6044522},
    {"Recipe: Pattern: Overcast Chestguard (#44523)", 6044523},
    {"Recipe: Pattern: Overcast Bracers (#44524)", 6044524},
    {"Recipe: Pattern: Overcast Handwraps (#44525)", 6044525},
    {"Recipe: Pattern: Overcast Belt (#44526)", 6044526},
    {"Recipe: Pattern: Overcast Leggings (#44527)", 6044527},
    {"Recipe: Pattern: Overcast Boots (#44528)", 6044528},
    {"Recipe: Pattern: Swiftarrow Helm (#44530)", 6044530},
    {"Recipe: Pattern: Swiftarrow Shoulderguards (#44531)", 6044531},
    {"Recipe: Pattern: Swiftarrow Hauberk (#44532)", 6044532},
    {"Recipe: Pattern: Swiftarrow Bracers (#44533)", 6044533},
    {"Recipe: Pattern: Swiftarrow Gauntlets (#44534)", 6044534},
    {"Recipe: Pattern: Swiftarrow Belt (#44535)", 6044535},
    {"Recipe: Pattern: Swiftarrow Leggings (#44536)", 6044536},
    {"Recipe: Pattern: Swiftarrow Boots (#44537)", 6044537},
    {"Recipe: Pattern: Stormhide Crown (#44538)", 6044538},
    {"Recipe: Pattern: Stormhide Shoulders (#44539)", 6044539},
    {"Recipe: Pattern: Stormhide Hauberk (#44540)", 6044540},
    {"Recipe: Pattern: Stormhide Wristguards (#44541)", 6044541},
    {"Recipe: Pattern: Stormhide Grips (#44542)", 6044542},
    {"Recipe: Pattern: Stormhide Belt (#44543)", 6044543},
    {"Recipe: Pattern: Stormhide Legguards (#44544)", 6044544},
    {"Recipe: Pattern: Stormhide Stompers (#44545)", 6044545},
    {"Recipe: Pattern: Giantmaim Legguards (#44546)", 6044546},
    {"Recipe: Pattern: Giantmaim Bracers (#44547)", 6044547},
    {"Recipe: Pattern: Revenant's Breastplate (#44548)", 6044548},
    {"Recipe: Pattern: Revenant's Treads (#44549)", 6044549},
    {"Recipe: Pattern: Trollwoven Spaulders (#44550)", 6044550},
    {"Recipe: Pattern: Trollwoven Girdle (#44551)", 6044551},
    {"Recipe: Pattern: Earthgiving Legguards (#44552)", 6044552},
    {"Recipe: Pattern: Earthgiving Boots (#44553)", 6044553},
    {"Recipe: Formula: Enchant Boots - Greater Assault (#44490)", 6044490},
    {"Recipe: Formula: Enchant Bracer - Superior Spellpower (#44498)", 6044498},
    {"Recipe: Schematic: Mechano-hog (#44502)", 6044502},
    {"Recipe: Schematic: Mekgineer's Chopper (#44503)", 6044503},
    {"Recipe: Pattern: Polar Vest (#44584)", 6044584},
    {"Recipe: Pattern: Polar Cord (#44585)", 6044585},
    {"Recipe: Pattern: Polar Boots (#44586)", 6044586},
    {"Recipe: Pattern: Icy Scale Chestguard (#44587)", 6044587},
    {"Recipe: Pattern: Icy Scale Belt (#44588)", 6044588},
    {"Recipe: Pattern: Icy Scale Boots (#44589)", 6044589},
    {"Recipe: Tome of Dalaran Intellect (#44602)", 6044602},
    {"Recipe: Tome of Polymorph: Black Cat (#44709)", 6044709},
    {"Recipe: Tome of Dalaran Brilliance (#44714)", 6044714},
    {"Recipe: Tome of Polymorph: Rabbit (#44793)", 6044793},
    {"Recipe: Tome of Polymorph: Turkey (#44811)", 6044811},
    {"Recipe: Pumpkin Pie (#44862)", 6044862},
    {"Recipe: Slow-Roasted Turkey (#44861)", 6044861},
    {"Recipe: Cranberry Chutney (#44858)", 6044858},
    {"Recipe: Spice Bread Stuffing (#44860)", 6044860},
    {"Recipe: Candied Sweet Potato (#44859)", 6044859},
    {"Recipe: Pattern: Windripper Boots (#44932)", 6044932},
    {"Recipe: Pattern: Windripper Leggings (#44933)", 6044933},
    {"Recipe: Plans: Titanium Plating (#44937)", 6044937},
    {"Recipe: Formula: Enchant Bracer - Major Stamina (#44944)", 6044944},
    {"Recipe: Formula: Enchant Weapon - Titanguard (#44945)", 6044945},
    {"Recipe: Worg Tartare (#44954)", 6044954},
    {"Recipe: Formula: Enchant Staff - Greater Spellpower (#45059)", 6045059},
    {"Recipe: Plans: Belt of the Titans (#45088)", 6045088},
    {"Recipe: Plans: Battlelord's Plate Boots (#45089)", 6045089},
    {"Recipe: Plans: Plate Girdle of Righteousness (#45090)", 6045090},
    {"Recipe: Plans: Treads of Destiny (#45091)", 6045091},
    {"Recipe: Plans: Indestructible Plate Girdle (#45092)", 6045092},
    {"Recipe: Plans: Spiked Deathdealers (#45093)", 6045093},
    {"Recipe: Pattern: Belt of Dragons (#45094)", 6045094},
    {"Recipe: Pattern: Boots of Living Scale (#45095)", 6045095},
    {"Recipe: Pattern: Blue Belt of Chaos (#45096)", 6045096},
    {"Recipe: Pattern: Lightning Grounded Boots (#45097)", 6045097},
    {"Recipe: Pattern: Death-warmed Belt (#45098)", 6045098},
    {"Recipe: Pattern: Footpads of Silence (#45099)", 6045099},
    {"Recipe: Pattern: Belt of Arctic Life (#45100)", 6045100},
    {"Recipe: Pattern: Boots of Wintry Endurance (#45101)", 6045101},
    {"Recipe: Pattern: Sash of Ancient Power (#45102)", 6045102},
    {"Recipe: Pattern: Spellslinger's Slippers (#45103)", 6045103},
    {"Recipe: Pattern: Cord of the White Dawn (#45104)", 6045104},
    {"Recipe: Pattern: Savior's Slippers (#45105)", 6045105},
    {"Recipe: Pattern: Emerald Bag (#45774)", 6045774},
    {"Recipe: Technique: Rituals of the New Moon (#46108)", 6046108},
    {"Recipe: Formula: Enchant Weapon - Blade Ward (#46027)", 6046027},
    {"Recipe: Formula: Enchant Weapon - Blood Draining (#46348)", 6046348},
    {"Recipe: Bread of the Dead (#46710)", 6046710},
    {"Recipe: Candied Sweet Potato (#46806)", 6046806},
    {"Recipe: Cranberry Chutney (#46805)", 6046805},
    {"Recipe: Pumpkin Pie (#46804)", 6046804},
    {"Recipe: Slow-Roasted Turkey (#46807)", 6046807},
    {"Recipe: Spice Bread Stuffing (#46803)", 6046803},
    {"Recipe: Design: Enduring Eye of Zul (#46897)", 6046897},
    {"Recipe: Design: Steady Eye of Zul (#46898)", 6046898},
    {"Recipe: Design: Vivid Eye of Zul (#46899)", 6046899},
    {"Recipe: Design: Dazzling Eye of Zul (#46900)", 6046900},
    {"Recipe: Design: Jagged Eye of Zul (#46901)", 6046901},
    {"Recipe: Design: Timeless Eye of Zul (#46902)", 6046902},
    {"Recipe: Design: Seer's Eye of Zul (#46903)", 6046903},
    {"Recipe: Design: Forceful Eye of Zul (#46904)", 6046904},
    {"Recipe: Design: Misty Eye of Zul (#46905)", 6046905},
    {"Recipe: Design: Sundered Eye of Zul (#46906)", 6046906},
    {"Recipe: Design: Shining Eye of Zul (#46907)", 6046907},
    {"Recipe: Design: Tense Eye of Zul (#46908)", 6046908},
    {"Recipe: Design: Lambent Eye of Zul (#46909)", 6046909},
    {"Recipe: Design: Intricate Eye of Zul (#46910)", 6046910},
    {"Recipe: Design: Radiant Eye of Zul (#46911)", 6046911},
    {"Recipe: Design: Energized Eye of Zul (#46912)", 6046912},
    {"Recipe: Design: Shattered Eye of Zul (#46913)", 6046913},
    {"Recipe: Design: Opaque Eye of Zul (#46914)", 6046914},
    {"Recipe: Design: Turbid Eye of Zul (#46915)", 6046915},
    {"Recipe: Design: Runed Cardinal Ruby (#46916)", 6046916},
    {"Recipe: Design: Bold Cardinal Ruby (#46917)", 6046917},
    {"Recipe: Design: Delicate Cardinal Ruby (#46918)", 6046918},
    {"Recipe: Design: Bright Cardinal Ruby (#46919)", 6046919},
    {"Recipe: Design: Precise Cardinal Ruby (#46920)", 6046920},
    {"Recipe: Design: Fractured Cardinal Ruby (#46921)", 6046921},
    {"Recipe: Design: Subtle Cardinal Ruby (#46922)", 6046922},
    {"Recipe: Design: Flashing Cardinal Ruby (#46923)", 6046923},
    {"Recipe: Design: Solid Majestic Zircon (#46924)", 6046924},
    {"Recipe: Design: Sparkling Majestic Zircon (#46925)", 6046925},
    {"Recipe: Design: Stormy Majestic Zircon (#46926)", 6046926},
    {"Recipe: Design: Lustrous Majestic Zircon (#46927)", 6046927},
    {"Recipe: Design: Rigid King's Amber (#46928)", 6046928},
    {"Recipe: Design: Smooth King's Amber (#46929)", 6046929},
    {"Recipe: Design: Brilliant King's Amber (#46930)", 6046930},
    {"Recipe: Design: Thick King's Amber (#46931)", 6046931},
    {"Recipe: Design: Mystic King's Amber (#46932)", 6046932},
    {"Recipe: Design: Quick King's Amber (#46933)", 6046933},
    {"Recipe: Design: Balanced Dreadstone (#46934)", 6046934},
    {"Recipe: Design: Sovereign Dreadstone (#46935)", 6046935},
    {"Recipe: Design: Glowing Dreadstone (#46936)", 6046936},
    {"Recipe: Design: Purified Dreadstone (#46937)", 6046937},
    {"Recipe: Design: Shifting Dreadstone (#46938)", 6046938},
    {"Recipe: Design: Royal Dreadstone (#46939)", 6046939},
    {"Recipe: Design: Regal Dreadstone (#46940)", 6046940},
    {"Recipe: Design: Defender's Dreadstone (#46941)", 6046941},
    {"Recipe: Design: Guardian's Dreadstone (#46942)", 6046942},
    {"Recipe: Design: Mysterious Dreadstone (#46943)", 6046943},
    {"Recipe: Design: Puissant Dreadstone (#46944)", 6046944},
    {"Recipe: Design: Infused Dreadstone (#46945)", 6046945},
    {"Recipe: Design: Tenuous Dreadstone (#46946)", 6046946},
    {"Recipe: Design: Luminous Ametrine (#46947)", 6046947},
    {"Recipe: Design: Inscribed Ametrine (#46948)", 6046948},
    {"Recipe: Design: Deadly Ametrine (#46949)", 6046949},
    {"Recipe: Design: Potent Ametrine (#46950)", 6046950},
    {"Recipe: Design: Veiled Ametrine (#46951)", 6046951},
    {"Recipe: Design: Durable Ametrine (#46952)", 6046952},
    {"Recipe: Design: Etched Ametrine (#46953)", 6046953},
    {"Recipe: Design: Pristine Ametrine (#46956)", 6046956},
    {"Recipe: Design: Reckless Ametrine (#47007)", 6047007},
    {"Recipe: Design: Glinting Ametrine (#47008)", 6047008},
    {"Recipe: Design: Accurate Ametrine (#47010)", 6047010},
    {"Recipe: Design: Wicked Ametrine (#47011)", 6047011},
    {"Recipe: Design: Glimmering Ametrine (#47012)", 6047012},
    {"Recipe: Design: Champion's Ametrine (#47015)", 6047015},
    {"Recipe: Design: Empowered Ametrine (#47016)", 6047016},
    {"Recipe: Design: Stalwart Ametrine (#47017)", 6047017},
    {"Recipe: Design: Resplendent Ametrine (#47018)", 6047018},
    {"Recipe: Design: Fierce Ametrine (#47019)", 6047019},
    {"Recipe: Design: Deft Ametrine (#47020)", 6047020},
    {"Recipe: Design: Lucent Ametrine (#47021)", 6047021},
    {"Recipe: Design: Resolute Ametrine (#47022)", 6047022},
    {"Recipe: Design: Stark Ametrine (#47023)", 6047023},
    {"Recipe: Flask of the North (#47507)", 6047507},
    {"Recipe: Pattern: Royal Moonshroud Robe (#47657)", 6047657},
    {"Recipe: Pattern: Royal Moonshroud Bracers (#47656)", 6047656},
    {"Recipe: Pattern: Merlin's Robe (#47655)", 6047655},
    {"Recipe: Pattern: Bejeweled Wizard's Bracers (#47654)", 6047654},
    {"Recipe: Pattern: Ensorcelled Nerubian Breastplate (#47628)", 6047628},
    {"Recipe: Pattern: Black Chitin Bracers (#47629)", 6047629},
    {"Recipe: Pattern: Crusader's Dragonscale Breastplate (#47630)", 6047630},
    {"Recipe: Pattern: Crusader's Dragonscale Bracers (#47631)", 6047631},
    {"Recipe: Pattern: Lunar Eclipse Robes (#47632)", 6047632},
    {"Recipe: Pattern: Moonshadow Armguards (#47633)", 6047633},
    {"Recipe: Pattern: Knightbane Carapace (#47634)", 6047634},
    {"Recipe: Pattern: Bracers of Swift Death (#47635)", 6047635},
    {"Recipe: Plans: Breastplate of the White Knight (#47622)", 6047622},
    {"Recipe: Plans: Saronite Swordbreakers (#47623)", 6047623},
    {"Recipe: Plans: Titanium Razorplate (#47624)", 6047624},
    {"Recipe: Plans: Titanium Spikeguards (#47625)", 6047625},
    {"Recipe: Plans: Sunforged Breastplate (#47626)", 6047626},
    {"Recipe: Plans: Sunforged Bracers (#47627)", 6047627},
    {"Recipe: Plans: Breastplate of the White Knight (#47640)", 6047640},
    {"Recipe: Plans: Saronite Swordbreakers (#47641)", 6047641},
    {"Recipe: Plans: Titanium Razorplate (#47644)", 6047644},
    {"Recipe: Plans: Titanium Spikeguards (#47645)", 6047645},
    {"Recipe: Plans: Sunforged Breastplate (#47643)", 6047643},
    {"Recipe: Plans: Sunforged Bracers (#47642)", 6047642},
    {"Recipe: Pattern: Ensorcelled Nerubian Breastplate (#47650)", 6047650},
    {"Recipe: Pattern: Black Chitin Bracers (#47646)", 6047646},
    {"Recipe: Pattern: Crusader's Dragonscale Breastplate (#47649)", 6047649},
    {"Recipe: Pattern: Bracers of Swift Death (#47647)", 6047647},
    {"Recipe: Pattern: Lunar Eclipse Robes (#47652)", 6047652},
    {"Recipe: Pattern: Moonshadow Armguards (#47653)", 6047653},
    {"Recipe: Pattern: Knightbane Carapace (#47651)", 6047651},
    {"Recipe: Pattern: Crusader's Dragonscale Bracers (#47648)", 6047648},
    {"Recipe: Pattern: Royal Moonshroud Robe (#47636)", 6047636},
    {"Recipe: Pattern: Bejeweled Wizard's Bracers (#47639)", 6047639},
    {"Recipe: Pattern: Merlin's Robe (#47638)", 6047638},
    {"Recipe: Pattern: Royal Moonshroud Bracers (#47637)", 6047637},
    {"Recipe: Schematic: Jeeves (#49050)", 6049050},
    {"Recipe: Design: Nightmare Tear (#49112)", 6049112},
    {"Recipe: Pattern: Leggings of Woven Death (#49953)", 6049953},
    {"Recipe: Pattern: Deathfrost Boots (#49954)", 6049954},
    {"Recipe: Pattern: Lightweave Leggings (#49955)", 6049955},
    {"Recipe: Pattern: Sandals of Consecration (#49956)", 6049956},
    {"Recipe: Pattern: Legwraps of Unleashed Nature (#49957)", 6049957},
    {"Recipe: Pattern: Blessed Cenarion Boots (#49958)", 6049958},
    {"Recipe: Pattern: Bladeborn Leggings (#49959)", 6049959},
    {"Recipe: Pattern: Footpads of Impending Death (#49961)", 6049961},
    {"Recipe: Pattern: Lightning-Infused Leggings (#49962)", 6049962},
    {"Recipe: Pattern: Earthsoul Boots (#49963)", 6049963},
    {"Recipe: Pattern: Draconic Bonesplinter Legguards (#49965)", 6049965},
    {"Recipe: Pattern: Rock-Steady Treads (#49966)", 6049966},
    {"Recipe: Plans: Puresteel Legplates (#49969)", 6049969},
    {"Recipe: Plans: Protectors of Life (#49970)", 6049970},
    {"Recipe: Plans: Legplates of Painful Death (#49971)", 6049971},
    {"Recipe: Plans: Hellfrozen Bonegrinders (#49972)", 6049972},
    {"Recipe: Plans: Pillars of Might (#49973)", 6049973},
    {"Recipe: Plans: Boots of Kingly Upheaval (#49974)", 6049974},
    {"Recipe: Technique: Glyph of Rapid Rejuvenation (#50167)", 6050167},
    {"Recipe: Technique: Glyph of Eternal Water (#50166)", 6050166},
    {"Recipe: Technique: Glyph of Quick Decay (#50168)", 6050168},
    {"Recipe: Formula: Enchant Gloves - Angler (#50406)", 6050406},
    {"Recipe: Plans: Shatter Rounds (#52022)", 6052022},
    {"Recipe: Plans: Iceblade Arrow (#52023)", 6052023},
    {"Recipe: Pattern: Frosty Flying Carpet (#54798)", 6054798},
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
    {"Recipe Item: Codex of Holy Word: Shield III (#3122)", 6503122},
    {"Recipe Item: Grimoire of Immolate III (#4200)", 6504200},
    {"Recipe Item: Grimoire of Inferno (#9214)", 6509214},
    {"Recipe Item: Pattern: Fine Leather Boots (#2406)", 6502406},
    {"Recipe Item: Pattern: White Leather Jerkin (#2407)", 6502407},
    {"Recipe Item: Pattern: Fine Leather Gloves (#2408)", 6502408},
    {"Recipe Item: Pattern: Dark Leather Tunic (#2409)", 6502409},
    {"Recipe Item: Recipe: Elixir of Lesser Agility (#3396)", 6503396},
    {"Recipe Item: Recipe: Swiftness Potion (#2555)", 6502555},
    {"Recipe Item: Pattern: Red Linen Robe (#2598)", 6502598},
    {"Recipe Item: Pattern: Gray Woolen Robe (#2601)", 6502601},
    {"Recipe Item: Recipe: Goretusk Liver Pie (#2697)", 6502697},
    {"Recipe Item: Recipe: Westfall Stew (#728)", 6500728},
    {"Recipe Item: Recipe: Cooked Crab Claw (#2698)", 6502698},
    {"Recipe Item: Recipe: Redridge Goulash (#2699)", 6502699},
    {"Recipe Item: Recipe: Succulent Pork Ribs (#2700)", 6502700},
    {"Recipe Item: Recipe: Seasoned Wolf Kabob (#2701)", 6502701},
    {"Recipe Item: Plans: Runed Copper Breastplate (#2881)", 6502881},
    {"Recipe Item: Plans: Silvered Bronze Breastplate (#5578)", 6505578},
    {"Recipe Item: Recipe: Beer Basted Boar Ribs (#2889)", 6502889},
    {"Recipe Item: Recipe: Minor Magic Resistance Potion (#3393)", 6503393},
    {"Recipe Item: Recipe: Potion of Curing (#3394)", 6503394},
    {"Recipe Item: Recipe: Limited Invulnerability Potion (#3395)", 6503395},
    {"Recipe Item: Recipe: Elixir of Ogre's Strength (#6211)", 6506211},
    {"Recipe Item: Recipe: Elixir of Minor Agility (#2553)", 6502553},
    {"Recipe Item: Plans: Deadly Bronze Poniard (#2883)", 6502883},
    {"Recipe Item: Plans: Mighty Iron Hammer (#3608)", 6503608},
    {"Recipe Item: Plans: Copper Chain Vest (#3609)", 6503609},
    {"Recipe Item: Plans: Gemmed Copper Gauntlets (#3610)", 6503610},
    {"Recipe Item: Plans: Silvered Bronze Shoulders (#2882)", 6502882},
    {"Recipe Item: Plans: Green Iron Boots (#3611)", 6503611},
    {"Recipe Item: Plans: Green Iron Gauntlets (#3612)", 6503612},
    {"Recipe Item: Recipe: Crocolisk Steak (#3678)", 6503678},
    {"Recipe Item: Recipe: Blood Sausage (#3679)", 6503679},
    {"Recipe Item: Recipe: Murloc Fin Soup (#3680)", 6503680},
    {"Recipe Item: Recipe: Crocolisk Gumbo (#3681)", 6503681},
    {"Recipe Item: Recipe: Curiously Tasty Omelet (#3682)", 6503682},
    {"Recipe Item: Recipe: Gooey Spider Cake (#3683)", 6503683},
    {"Recipe Item: Recipe: Big Bear Steak (#3734)", 6503734},
    {"Recipe Item: Recipe: Hot Lion Chops (#3735)", 6503735},
    {"Recipe Item: Recipe: Tasty Lion Steak (#3736)", 6503736},
    {"Recipe Item: Recipe: Soothing Turtle Bisque (#3737)", 6503737},
    {"Recipe Item: Recipe: Shadow Oil (#6068)", 6506068},
    {"Recipe Item: Recipe: Elixir of Fortitude (#3830)", 6503830},
    {"Recipe Item: Recipe: Major Troll's Blood Elixir (#3831)", 6503831},
    {"Recipe Item: Recipe: Elixir of Detect Lesser Invisibility (#3832)", 6503832},
    {"Recipe Item: Recipe: Frost Oil (#14634)", 6514634},
    {"Recipe Item: Plans: Hardened Iron Shortsword (#12162)", 6512162},
    {"Recipe Item: Plans: Jade Serpentblade (#3866)", 6503866},
    {"Recipe Item: Plans: Solid Iron Maul (#10858)", 6510858},
    {"Recipe Item: Plans: Golden Iron Destroyer (#3867)", 6503867},
    {"Recipe Item: Plans: Moonsteel Broadsword (#12163)", 6512163},
    {"Recipe Item: Plans: Frost Tiger Blade (#3868)", 6503868},
    {"Recipe Item: Plans: Massive Iron Axe (#12164)", 6512164},
    {"Recipe Item: Plans: Shadow Crescent Axe (#3869)", 6503869},
    {"Recipe Item: Plans: Golden Scale Coif (#6047)", 6506047},
    {"Recipe Item: Plans: Green Iron Shoulders (#3870)", 6503870},
    {"Recipe Item: Plans: Golden Scale Shoulders (#3871)", 6503871},
    {"Recipe Item: Plans: Golden Scale Leggings (#3872)", 6503872},
    {"Recipe Item: Plans: Golden Scale Cuirass (#3873)", 6503873},
    {"Recipe Item: Plans: Polished Steel Boots (#3874)", 6503874},
    {"Recipe Item: Plans: Golden Scale Boots (#3875)", 6503875},
    {"Recipe Item: Pattern: Green Woolen Bag (#4292)", 6504292},
    {"Recipe Item: Pattern: Hillman's Leather Vest (#4293)", 6504293},
    {"Recipe Item: Pattern: Dark Leather Gloves (#7360)", 6507360},
    {"Recipe Item: Pattern: Hillman's Belt (#4294)", 6504294},
    {"Recipe Item: Pattern: Dark Leather Shoulders (#4296)", 6504296},
    {"Recipe Item: Pattern: Barbaric Gloves (#4297)", 6504297},
    {"Recipe Item: Pattern: Green Leather Armor (#7613)", 6507613},
    {"Recipe Item: Pattern: Guardian Armor (#4299)", 6504299},
    {"Recipe Item: Pattern: Guardian Belt (#4298)", 6504298},
    {"Recipe Item: Pattern: Guardian Leather Bracers (#4300)", 6504300},
    {"Recipe Item: Pattern: Gem-studded Leather Belt (#14635)", 6514635},
    {"Recipe Item: Pattern: Barbaric Belt (#4301)", 6504301},
    {"Recipe Item: Pattern: Heavy Woolen Cloak (#4346)", 6504346},
    {"Recipe Item: Pattern: Red Woolen Boots (#4345)", 6504345},
    {"Recipe Item: Pattern: Reinforced Woolen Shoulders (#4347)", 6504347},
    {"Recipe Item: Pattern: Phoenix Pants (#4349)", 6504349},
    {"Recipe Item: Pattern: Azure Silk Gloves (#7114)", 6507114},
    {"Recipe Item: Pattern: Spider Silk Slippers (#4350)", 6504350},
    {"Recipe Item: Pattern: Enchanter's Cowl (#14630)", 6514630},
    {"Recipe Item: Pattern: Shadow Hood (#4351)", 6504351},
    {"Recipe Item: Pattern: Boots of the Enchanter (#4352)", 6504352},
    {"Recipe Item: Pattern: Icy Cloak (#4355)", 6504355},
    {"Recipe Item: Pattern: Spider Belt (#4353)", 6504353},
    {"Recipe Item: Pattern: Star Belt (#4356)", 6504356},
    {"Recipe Item: Pattern: Phoenix Gloves (#4348)", 6504348},
    {"Recipe Item: Pattern: Bright Yellow Shirt (#14627)", 6514627},
    {"Recipe Item: Pattern: Dark Silk Shirt (#6401)", 6506401},
    {"Recipe Item: Pattern: Rich Purple Silk Shirt (#4354)", 6504354},
    {"Recipe Item: Pattern: Black Swashbuckler's Shirt (#10728)", 6510728},
    {"Recipe Item: Schematic: Mechanical Squirrel Box (#4408)", 6504408},
    {"Recipe Item: Schematic: Small Seaforium Charge (#4409)", 6504409},
    {"Recipe Item: Schematic: Lovingly Crafted Boomstick (#13309)", 6513309},
    {"Recipe Item: Schematic: Shadow Goggles (#4410)", 6504410},
    {"Recipe Item: Schematic: Flame Deflector (#4411)", 6504411},
    {"Recipe Item: Schematic: Minor Recombobulator (#14639)", 6514639},
    {"Recipe Item: Schematic: Moonsight Rifle (#4412)", 6504412},
    {"Recipe Item: Schematic: Ice Deflector (#13308)", 6513308},
    {"Recipe Item: Schematic: Discombobulator Ray (#4413)", 6504413},
    {"Recipe Item: Schematic: Portable Bronze Mortar (#4414)", 6504414},
    {"Recipe Item: Schematic: Craftsman's Monocle (#4415)", 6504415},
    {"Recipe Item: Schematic: Goblin Land Mine (#4416)", 6504416},
    {"Recipe Item: Schematic: Mechanical Dragonling (#13311)", 6513311},
    {"Recipe Item: Schematic: Gnomish Cloaking Device (#7742)", 6507742},
    {"Recipe Item: Schematic: Large Seaforium Charge (#4417)", 6504417},
    {"Recipe Item: Schematic: Accurate Scope (#13310)", 6513310},
    {"Recipe Item: Recipe: Barbecued Buzzard Wing (#4609)", 6504609},
    {"Recipe Item: Pattern: Raptor Hide Harness (#13287)", 6513287},
    {"Recipe Item: Pattern: Raptor Hide Belt (#13288)", 6513288},
    {"Recipe Item: Recipe: Discolored Healing Potion (#4597)", 6504597},
    {"Recipe Item: Recipe: Lesser Stoneshield Potion (#4624)", 6504624},
    {"Recipe Item: Pattern: Kodo Hide Bag (#5083)", 6505083},
    {"Recipe Item: Codex of Shadow Protection II (#8993)", 6508993},
    {"Recipe Item: Recipe: Kaldorei Spider Kabob (#5482)", 6505482},
    {"Recipe Item: Recipe: Scorpid Surprise (#5483)", 6505483},
    {"Recipe Item: Recipe: Roasted Kodo Meat (#5484)", 6505484},
    {"Recipe Item: Recipe: Fillet of Frenzy (#5485)", 6505485},
    {"Recipe Item: Recipe: Strider Stew (#5486)", 6505486},
    {"Recipe Item: Recipe: Dig Rat Stew (#5487)", 6505487},
    {"Recipe Item: Recipe: Crispy Lizard Tail (#5488)", 6505488},
    {"Recipe Item: Recipe: Lean Venison (#5489)", 6505489},
    {"Recipe Item: Recipe: Clam Chowder (#5528)", 6505528},
    {"Recipe Item: Plans: Iridescent Hammer (#5543)", 6505543},
    {"Recipe Item: Recipe: Rage Potion (#5640)", 6505640},
    {"Recipe Item: Recipe: Great Rage Potion (#5643)", 6505643},
    {"Recipe Item: Recipe: Free Action Potion (#5642)", 6505642},
    {"Recipe Item: Pattern: Red Linen Bag (#5771)", 6505771},
    {"Recipe Item: Pattern: Red Woolen Bag (#5772)", 6505772},
    {"Recipe Item: Pattern: Robes of Arcana (#5773)", 6505773},
    {"Recipe Item: Pattern: Green Silk Pack (#5774)", 6505774},
    {"Recipe Item: Pattern: Black Silk Pack (#5775)", 6505775},
    {"Recipe Item: Pattern: Murloc Scale Belt (#5786)", 6505786},
    {"Recipe Item: Pattern: Murloc Scale Breastplate (#5787)", 6505787},
    {"Recipe Item: Pattern: Thick Murloc Armor (#5788)", 6505788},
    {"Recipe Item: Pattern: Murloc Scale Bracers (#5789)", 6505789},
    {"Recipe Item: Pattern: Fine Leather Pants (#5972)", 6505972},
    {"Recipe Item: Pattern: Barbaric Leggings (#5973)", 6505973},
    {"Recipe Item: Pattern: Guardian Cloak (#5974)", 6505974},
    {"Recipe Item: Recipe: Giant Clam Scorcho (#6039)", 6506039},
    {"Recipe Item: Plans: Iron Shield Spike (#6044)", 6506044},
    {"Recipe Item: Plans: Iron Counterweight (#6045)", 6506045},
    {"Recipe Item: Plans: Steel Weapon Chain (#6046)", 6506046},
    {"Recipe Item: Recipe: Holy Protection Potion (#6053)", 6506053},
    {"Recipe Item: Recipe: Shadow Protection Potion (#6054)", 6506054},
    {"Recipe Item: Recipe: Fire Protection Potion (#6055)", 6506055},
    {"Recipe Item: Recipe: Frost Protection Potion (#6056)", 6506056},
    {"Recipe Item: Recipe: Nature Protection Potion (#6057)", 6506057},
    {"Recipe Item: Formula: Enchant Chest - Minor Mana (#6342)", 6506342},
    {"Recipe Item: Pattern: Red Linen Vest (#6271)", 6506271},
    {"Recipe Item: Pattern: Blue Linen Vest (#6270)", 6506270},
    {"Recipe Item: Pattern: Blue Linen Robe (#6272)", 6506272},
    {"Recipe Item: Pattern: Blue Overalls (#6274)", 6506274},
    {"Recipe Item: Pattern: Greater Adept's Robe (#6275)", 6506275},
    {"Recipe Item: Recipe: Brilliant Smallfish (#6325)", 6506325},
    {"Recipe Item: Recipe: Slitherskin Mackerel (#6326)", 6506326},
    {"Recipe Item: Recipe: Longjaw Mud Snapper (#6328)", 6506328},
    {"Recipe Item: Recipe: Loch Frenzy Delight (#6329)", 6506329},
    {"Recipe Item: Recipe: Bristle Whisker Catfish (#6330)", 6506330},
    {"Recipe Item: Formula: Enchant Bracer - Minor Spirit (#6344)", 6506344},
    {"Recipe Item: Formula: Enchant Chest - Lesser Mana (#6346)", 6506346},
    {"Recipe Item: Formula: Enchant Bracer - Minor Strength (#6347)", 6506347},
    {"Recipe Item: Formula: Enchant Weapon - Minor Beastslayer (#6348)", 6506348},
    {"Recipe Item: Formula: Enchant 2H Weapon - Lesser Intellect (#6349)", 6506349},
    {"Recipe Item: Recipe: Rainbow Fin Albacore (#6368)", 6506368},
    {"Recipe Item: Recipe: Rockscale Cod (#6369)", 6506369},
    {"Recipe Item: Formula: Enchant Bracer - Lesser Spirit (#6375)", 6506375},
    {"Recipe Item: Formula: Enchant Boots - Minor Agility (#6377)", 6506377},
    {"Recipe Item: Pattern: Stylish Blue Shirt (#6390)", 6506390},
    {"Recipe Item: Pattern: Stylish Green Shirt (#6391)", 6506391},
    {"Recipe Item: Manual: Heavy Silk Bandage (#16112)", 6516112},
    {"Recipe Item: Manual: Strong Anti-Venom (#6454)", 6506454},
    {"Recipe Item: Pattern: Deviate Scale Cloak (#6474)", 6506474},
    {"Recipe Item: Pattern: Deviate Scale Gloves (#6475)", 6506475},
    {"Recipe Item: Pattern: Deviate Scale Belt (#6476)", 6506476},
    {"Recipe Item: Recipe: Savory Deviate Delight (#6661)", 6506661},
    {"Recipe Item: Recipe: Elixir of Giant Growth (#6663)", 6506663},
    {"Recipe Item: Schematic: Flash Bomb (#6672)", 6506672},
    {"Recipe Item: Pattern: Moonglow Vest (#6710)", 6506710},
    {"Recipe Item: Schematic: EZ-Thro Dynamite (#6716)", 6506716},
    {"Recipe Item: Plans: Ironforge Breastplate (#6735)", 6506735},
    {"Recipe Item: Recipe: Smoked Bear Meat (#6892)", 6506892},
    {"Recipe Item: Pattern: Hands of Darkness (#7092)", 6507092},
    {"Recipe Item: Pattern: Truefaith Gloves (#7091)", 6507091},
    {"Recipe Item: Pattern: Green Silk Armor (#7090)", 6507090},
    {"Recipe Item: Pattern: Azure Silk Cloak (#7089)", 6507089},
    {"Recipe Item: Pattern: Crimson Silk Cloak (#7087)", 6507087},
    {"Recipe Item: Pattern: Crimson Silk Shoulders (#7084)", 6507084},
    {"Recipe Item: Pattern: Azure Shoulders (#7085)", 6507085},
    {"Recipe Item: Pattern: Earthen Silk Belt (#7086)", 6507086},
    {"Recipe Item: Pattern: Crimson Silk Robe (#7088)", 6507088},
    {"Recipe Item: Pattern: Rugged Leather Pants (#7288)", 6507288},
    {"Recipe Item: Pattern: Black Whelp Cloak (#7289)", 6507289},
    {"Recipe Item: Pattern: Red Whelp Gloves (#7290)", 6507290},
    {"Recipe Item: Pattern: Herbalist's Gloves (#7361)", 6507361},
    {"Recipe Item: Pattern: Earthen Leather Shoulders (#7362)", 6507362},
    {"Recipe Item: Pattern: Pilferer's Gloves (#7363)", 6507363},
    {"Recipe Item: Pattern: Heavy Earthen Gloves (#7364)", 6507364},
    {"Recipe Item: Pattern: Dusky Leather Leggings (#7449)", 6507449},
    {"Recipe Item: Pattern: Green Whelp Armor (#7450)", 6507450},
    {"Recipe Item: Pattern: Green Whelp Bracers (#7451)", 6507451},
    {"Recipe Item: Pattern: Dusky Boots (#7452)", 6507452},
    {"Recipe Item: Pattern: Swift Boots (#7453)", 6507453},
    {"Recipe Item: Schematic: Gnomish Universal Remote (#7560)", 6507560},
    {"Recipe Item: Schematic: Goblin Jumper Cables (#7561)", 6507561},
    {"Recipe Item: Recipe: Thistle Tea (#7678)", 6507678},
    {"Recipe Item: Plans: Barbaric Iron Shoulders (#7978)", 6507978},
    {"Recipe Item: Plans: Barbaric Iron Breastplate (#7979)", 6507979},
    {"Recipe Item: Plans: Barbaric Iron Helm (#7980)", 6507980},
    {"Recipe Item: Plans: Barbaric Iron Boots (#7981)", 6507981},
    {"Recipe Item: Plans: Barbaric Iron Gloves (#7982)", 6507982},
    {"Recipe Item: Plans: Heavy Mithril Pants (#7975)", 6507975},
    {"Recipe Item: Plans: Mithril Scale Bracers (#7995)", 6507995},
    {"Recipe Item: Plans: Mithril Shield Spike (#7976)", 6507976},
    {"Recipe Item: Plans: Ornate Mithril Pants (#7983)", 6507983},
    {"Recipe Item: Plans: Ornate Mithril Gloves (#7984)", 6507984},
    {"Recipe Item: Plans: Ornate Mithril Shoulder (#7985)", 6507985},
    {"Recipe Item: Plans: Mithril Spurs (#7989)", 6507989},
    {"Recipe Item: Plans: Mithril Scale Shoulders (#7991)", 6507991},
    {"Recipe Item: Plans: Heavy Mithril Helm (#7990)", 6507990},
    {"Recipe Item: Plans: Blue Glittering Axe (#7992)", 6507992},
    {"Recipe Item: Plans: Wicked Mithril Blade (#8029)", 6508029},
    {"Recipe Item: Plans: Dazzling Mithril Rapier (#7993)", 6507993},
    {"Recipe Item: Plans: Runed Mithril Hammer (#8028)", 6508028},
    {"Recipe Item: Plans: Ebon Shiv (#8030)", 6508030},
    {"Recipe Item: Pattern: Comfortable Leather Hat (#8384)", 6508384},
    {"Recipe Item: Pattern: Turtle Scale Gloves (#8385)", 6508385},
    {"Recipe Item: Pattern: Nightscape Shoulders (#8409)", 6508409},
    {"Recipe Item: Pattern: Big Voodoo Robe (#8386)", 6508386},
    {"Recipe Item: Pattern: Tough Scorpid Breastplate (#8395)", 6508395},
    {"Recipe Item: Pattern: Wild Leather Shoulders (#8403)", 6508403},
    {"Recipe Item: Pattern: Big Voodoo Mask (#8387)", 6508387},
    {"Recipe Item: Pattern: Tough Scorpid Bracers (#8397)", 6508397},
    {"Recipe Item: Pattern: Tough Scorpid Gloves (#8398)", 6508398},
    {"Recipe Item: Pattern: Wild Leather Vest (#8404)", 6508404},
    {"Recipe Item: Pattern: Wild Leather Helmet (#8405)", 6508405},
    {"Recipe Item: Pattern: Tough Scorpid Boots (#8399)", 6508399},
    {"Recipe Item: Pattern: Big Voodoo Pants (#8389)", 6508389},
    {"Recipe Item: Pattern: Big Voodoo Cloak (#8390)", 6508390},
    {"Recipe Item: Pattern: Tough Scorpid Shoulders (#8400)", 6508400},
    {"Recipe Item: Pattern: Wild Leather Boots (#8406)", 6508406},
    {"Recipe Item: Pattern: Tough Scorpid Leggings (#8401)", 6508401},
    {"Recipe Item: Pattern: Tough Scorpid Helm (#8402)", 6508402},
    {"Recipe Item: Pattern: Wild Leather Leggings (#8407)", 6508407},
    {"Recipe Item: Pattern: Wild Leather Cloak (#8408)", 6508408},
    {"Recipe Item: Manual: Mageweave Bandage (#16113)", 6516113},
    {"Recipe Item: Artisan First Aid - Heal Thyself (#16085)", 6516085},
    {"Recipe Item: Recipe: Magic Resistance Potion (#9293)", 6509293},
    {"Recipe Item: Plans: Inlaid Mithril Cylinder (#10713)", 6510713},
    {"Recipe Item: Recipe: Goblin Rocket Fuel (#10644)", 6510644},
    {"Recipe Item: Recipe: Wildvine Potion (#9294)", 6509294},
    {"Recipe Item: Recipe: Philosopher's Stone (#9303)", 6509303},
    {"Recipe Item: Recipe: Invisibility Potion (#9295)", 6509295},
    {"Recipe Item: Recipe: Gift of Arthas (#9296)", 6509296},
    {"Recipe Item: Recipe: Elixir of Dream Vision (#9297)", 6509297},
    {"Recipe Item: Recipe: Elixir of Giants (#9298)", 6509298},
    {"Recipe Item: Recipe: Ghost Dye (#9302)", 6509302},
    {"Recipe Item: Recipe: Elixir of Shadow Power (#9301)", 6509301},
    {"Recipe Item: Recipe: Elixir of Demonslaying (#9300)", 6509300},
    {"Recipe Item: Recipe: Transmute Iron to Gold (#9304)", 6509304},
    {"Recipe Item: Recipe: Transmute Mithril to Truesilver (#9305)", 6509305},
    {"Recipe Item: Plans: Golden Scale Gauntlets (#9367)", 6509367},
    {"Recipe Item: Pattern: Colorful Kilt (#10316)", 6510316},
    {"Recipe Item: Pattern: Red Mageweave Vest (#10300)", 6510300},
    {"Recipe Item: Pattern: White Bandit Mask (#10301)", 6510301},
    {"Recipe Item: Pattern: Red Mageweave Pants (#10302)", 6510302},
    {"Recipe Item: Pattern: Orange Martial Shirt (#10311)", 6510311},
    {"Recipe Item: Pattern: Red Mageweave Gloves (#10312)", 6510312},
    {"Recipe Item: Pattern: Lavender Mageweave Shirt (#10314)", 6510314},
    {"Recipe Item: Pattern: Red Mageweave Shoulders (#10315)", 6510315},
    {"Recipe Item: Pattern: Pink Mageweave Shirt (#10317)", 6510317},
    {"Recipe Item: Pattern: Admiral's Hat (#10318)", 6510318},
    {"Recipe Item: Pattern: Red Mageweave Headband (#10320)", 6510320},
    {"Recipe Item: Pattern: Tuxedo Shirt (#10321)", 6510321},
    {"Recipe Item: Pattern: Shadoweave Mask (#10463)", 6510463},
    {"Recipe Item: Pattern: Tuxedo Pants (#10323)", 6510323},
    {"Recipe Item: Pattern: White Wedding Dress (#10325)", 6510325},
    {"Recipe Item: Pattern: Tuxedo Jacket (#10326)", 6510326},
    {"Recipe Item: Plans: Silvered Bronze Leggings (#10424)", 6510424},
    {"Recipe Item: Schematic: Bright-Eye Goggles (#10601)", 6510601},
    {"Recipe Item: Schematic: Deadly Scope (#10602)", 6510602},
    {"Recipe Item: Schematic: Catseye Ultra Goggles (#10603)", 6510603},
    {"Recipe Item: Schematic: Mithril Heavy-bore Rifle (#10604)", 6510604},
    {"Recipe Item: Schematic: Spellpower Goggles Xtreme (#10605)", 6510605},
    {"Recipe Item: Schematic: Parachute Cloak (#10606)", 6510606},
    {"Recipe Item: Schematic: Deepdive Helmet (#10607)", 6510607},
    {"Recipe Item: Schematic: Sniper Scope (#10608)", 6510608},
    {"Recipe Item: Schematic: Mithril Mechanical Dragonling (#10609)", 6510609},
    {"Recipe Item: Formula: Enchant 2H Weapon - Lesser Spirit (#11038)", 6511038},
    {"Recipe Item: Formula: Enchant Cloak - Minor Agility (#11039)", 6511039},
    {"Recipe Item: Formula: Enchant Shield - Lesser Protection (#11081)", 6511081},
    {"Recipe Item: Formula: Enchant Cloak - Lesser Shadow Resistance (#11098)", 6511098},
    {"Recipe Item: Formula: Enchant Bracer - Lesser Strength (#11101)", 6511101},
    {"Recipe Item: Formula: Enchant Gloves - Mining (#11150)", 6511150},
    {"Recipe Item: Formula: Enchant Gloves - Herbalism (#11151)", 6511151},
    {"Recipe Item: Formula: Enchant Gloves - Fishing (#11152)", 6511152},
    {"Recipe Item: Formula: Enchant Bracer - Lesser Deflection (#11163)", 6511163},
    {"Recipe Item: Formula: Enchant Weapon - Lesser Beastslayer (#11164)", 6511164},
    {"Recipe Item: Formula: Enchant Weapon - Lesser Elemental Slayer (#11165)", 6511165},
    {"Recipe Item: Formula: Enchant Boots - Lesser Spirit (#11167)", 6511167},
    {"Recipe Item: Formula: Enchant Shield - Lesser Block (#11168)", 6511168},
    {"Recipe Item: Formula: Enchant Gloves - Skinning (#11166)", 6511166},
    {"Recipe Item: Formula: Enchant Shield - Stamina (#11202)", 6511202},
    {"Recipe Item: Formula: Enchant Gloves - Advanced Mining (#11203)", 6511203},
    {"Recipe Item: Formula: Enchant Bracer - Greater Spirit (#11204)", 6511204},
    {"Recipe Item: Formula: Enchant Gloves - Advanced Herbalism (#11205)", 6511205},
    {"Recipe Item: Formula: Enchant Cloak - Lesser Agility (#11206)", 6511206},
    {"Recipe Item: Formula: Enchant Weapon - Fiery Weapon (#11207)", 6511207},
    {"Recipe Item: Formula: Enchant Weapon - Demonslaying (#11208)", 6511208},
    {"Recipe Item: Formula: Enchant Bracer - Deflection (#11223)", 6511223},
    {"Recipe Item: Formula: Enchant Shield - Frost Resistance (#11224)", 6511224},
    {"Recipe Item: Formula: Enchant Bracer - Greater Stamina (#11225)", 6511225},
    {"Recipe Item: Formula: Enchant Gloves - Riding Skill (#11226)", 6511226},
    {"Recipe Item: Plans: Dark Iron Pulverizer (#11610)", 6511610},
    {"Recipe Item: Plans: Dark Iron Mail (#11614)", 6511614},
    {"Recipe Item: Plans: Dark Iron Sunderer (#11611)", 6511611},
    {"Recipe Item: Plans: Dark Iron Shoulders (#11615)", 6511615},
    {"Recipe Item: Plans: Dark Iron Plate (#11612)", 6511612},
    {"Recipe Item: Formula: Smoking Heart of the Mountain (#11813)", 6511813},
    {"Recipe Item: Schematic: Pet Bombling (#11828)", 6511828},
    {"Recipe Item: Schematic: Lil' Smoky (#11827)", 6511827},
    {"Recipe Item: Recipe: Lean Wolf Steak (#12227)", 6512227},
    {"Recipe Item: Recipe: Roast Raptor (#12228)", 6512228},
    {"Recipe Item: Recipe: Hot Wolf Ribs (#12229)", 6512229},
    {"Recipe Item: Recipe: Jungle Stew (#12231)", 6512231},
    {"Recipe Item: Recipe: Carrion Surprise (#12232)", 6512232},
    {"Recipe Item: Recipe: Mystery Stew (#12233)", 6512233},
    {"Recipe Item: Recipe: Dragonbreath Chili (#12239)", 6512239},
    {"Recipe Item: Recipe: Heavy Kodo Stew (#12240)", 6512240},
    {"Recipe Item: Recipe: Spiced Chili Crab (#16111)", 6516111},
    {"Recipe Item: Recipe: Monster Omelet (#16110)", 6516110},
    {"Recipe Item: Recipe: Crispy Bat Wing (#12226)", 6512226},
    {"Recipe Item: Plans: Searing Golden Blade (#12261)", 6512261},
    {"Recipe Item: Plans: Thorium Armor (#12682)", 6512682},
    {"Recipe Item: Plans: Thorium Belt (#12683)", 6512683},
    {"Recipe Item: Plans: Thorium Bracers (#12684)", 6512684},
    {"Recipe Item: Plans: Radiant Belt (#12685)", 6512685},
    {"Recipe Item: Plans: Imperial Plate Shoulders (#12687)", 6512687},
    {"Recipe Item: Plans: Imperial Plate Belt (#12688)", 6512688},
    {"Recipe Item: Plans: Radiant Breastplate (#12689)", 6512689},
    {"Recipe Item: Plans: Imperial Plate Bracers (#12690)", 6512690},
    {"Recipe Item: Plans: Wildthorn Mail (#12691)", 6512691},
    {"Recipe Item: Plans: Thorium Shield Spike (#12692)", 6512692},
    {"Recipe Item: Plans: Thorium Boots (#12693)", 6512693},
    {"Recipe Item: Plans: Thorium Helm (#12694)", 6512694},
    {"Recipe Item: Plans: Radiant Gloves (#12695)", 6512695},
    {"Recipe Item: Plans: Fiery Plate Gauntlets (#12699)", 6512699},
    {"Recipe Item: Plans: Radiant Boots (#12697)", 6512697},
    {"Recipe Item: Plans: Imperial Plate Boots (#12700)", 6512700},
    {"Recipe Item: Plans: Imperial Plate Helm (#12701)", 6512701},
    {"Recipe Item: Plans: Radiant Circlet (#12702)", 6512702},
    {"Recipe Item: Plans: Dawnbringer Shoulders (#12698)", 6512698},
    {"Recipe Item: Plans: Storm Gauntlets (#12703)", 6512703},
    {"Recipe Item: Plans: Thorium Leggings (#12704)", 6512704},
    {"Recipe Item: Plans: Imperial Plate Chest (#12705)", 6512705},
    {"Recipe Item: Plans: Runic Plate Shoulders (#12706)", 6512706},
    {"Recipe Item: Plans: Runic Plate Boots (#12707)", 6512707},
    {"Recipe Item: Plans: Demon Forged Breastplate (#12696)", 6512696},
    {"Recipe Item: Plans: Whitesoul Helm (#12711)", 6512711},
    {"Recipe Item: Plans: Radiant Leggings (#12713)", 6512713},
    {"Recipe Item: Plans: Runic Plate Helm (#12714)", 6512714},
    {"Recipe Item: Plans: Helm of the Great Chief (#12716)", 6512716},
    {"Recipe Item: Plans: Lionheart Helm (#12717)", 6512717},
    {"Recipe Item: Plans: Imperial Plate Leggings (#12715)", 6512715},
    {"Recipe Item: Plans: Runic Breastplate (#12718)", 6512718},
    {"Recipe Item: Plans: Runic Plate Leggings (#12719)", 6512719},
    {"Recipe Item: Plans: Stronghold Gauntlets (#12720)", 6512720},
    {"Recipe Item: Plans: Enchanted Thorium Helm (#12725)", 6512725},
    {"Recipe Item: Plans: Enchanted Thorium Leggings (#12726)", 6512726},
    {"Recipe Item: Plans: Enchanted Thorium Breastplate (#12727)", 6512727},
    {"Recipe Item: Plans: Invulnerable Mail (#12728)", 6512728},
    {"Recipe Item: Plans: Ornate Thorium Handaxe (#12819)", 6512819},
    {"Recipe Item: Plans: Dawn's Edge (#12821)", 6512821},
    {"Recipe Item: Plans: Huge Thorium Battleaxe (#12823)", 6512823},
    {"Recipe Item: Plans: Enchanted Battlehammer (#12824)", 6512824},
    {"Recipe Item: Plans: Blazing Rapier (#12825)", 6512825},
    {"Recipe Item: Plans: Serenity (#12827)", 6512827},
    {"Recipe Item: Plans: Volcanic Hammer (#12828)", 6512828},
    {"Recipe Item: Plans: Corruption (#12830)", 6512830},
    {"Recipe Item: Plans: Hammer of the Titans (#12833)", 6512833},
    {"Recipe Item: Plans: Arcanite Champion (#12834)", 6512834},
    {"Recipe Item: Plans: Annihilator (#12835)", 6512835},
    {"Recipe Item: Plans: Frostguard (#12836)", 6512836},
    {"Recipe Item: Plans: Masterwork Stormhammer (#12837)", 6512837},
    {"Recipe Item: Plans: Arcanite Reaper (#12838)", 6512838},
    {"Recipe Item: Plans: Heartseeker (#12839)", 6512839},
    {"Recipe Item: Recipe: Transmute Arcanite (#12958)", 6512958},
    {"Recipe Item: Recipe: Mighty Rage Potion (#13476)", 6513476},
    {"Recipe Item: Recipe: Superior Mana Potion (#13477)", 6513477},
    {"Recipe Item: Recipe: Elixir of Superior Defense (#13478)", 6513478},
    {"Recipe Item: Recipe: Elixir of the Sages (#13479)", 6513479},
    {"Recipe Item: Recipe: Major Healing Potion (#13480)", 6513480},
    {"Recipe Item: Recipe: Elixir of Brute Force (#13481)", 6513481},
    {"Recipe Item: Recipe: Transmute Air to Fire (#13482)", 6513482},
    {"Recipe Item: Recipe: Transmute Fire to Earth (#13483)", 6513483},
    {"Recipe Item: Recipe: Transmute Earth to Water (#13484)", 6513484},
    {"Recipe Item: Recipe: Transmute Water to Air (#13485)", 6513485},
    {"Recipe Item: Recipe: Transmute Undeath to Water (#13486)", 6513486},
    {"Recipe Item: Recipe: Transmute Water to Undeath (#13487)", 6513487},
    {"Recipe Item: Recipe: Transmute Life to Earth (#13488)", 6513488},
    {"Recipe Item: Recipe: Transmute Earth to Life (#13489)", 6513489},
    {"Recipe Item: Recipe: Greater Stoneshield Potion (#13490)", 6513490},
    {"Recipe Item: Recipe: Elixir of the Mongoose (#13491)", 6513491},
    {"Recipe Item: Recipe: Purification Potion (#13492)", 6513492},
    {"Recipe Item: Recipe: Greater Arcane Elixir (#13493)", 6513493},
    {"Recipe Item: Recipe: Greater Fire Protection Potion (#13494)", 6513494},
    {"Recipe Item: Recipe: Greater Frost Protection Potion (#13495)", 6513495},
    {"Recipe Item: Recipe: Greater Nature Protection Potion (#13496)", 6513496},
    {"Recipe Item: Recipe: Greater Arcane Protection Potion (#13497)", 6513497},
    {"Recipe Item: Recipe: Greater Shadow Protection Potion (#13499)", 6513499},
    {"Recipe Item: Recipe: Major Mana Potion (#13501)", 6513501},
    {"Recipe Item: Recipe: Alchemist's Stone (#13517)", 6513517},
    {"Recipe Item: Recipe: Potion of Petrification (#13518)", 6513518},
    {"Recipe Item: Recipe: Flask of the Titans (#13519)", 6513519},
    {"Recipe Item: Recipe: Flask of Distilled Wisdom (#13520)", 6513520},
    {"Recipe Item: Recipe: Flask of Supreme Power (#13521)", 6513521},
    {"Recipe Item: Recipe: Flask of Chromatic Resistance (#13522)", 6513522},
    {"Recipe Item: Recipe: Spotted Yellowtail (#13939)", 6513939},
    {"Recipe Item: Recipe: Cooked Glossy Mightfish (#13940)", 6513940},
    {"Recipe Item: Recipe: Grilled Squid (#13942)", 6513942},
    {"Recipe Item: Recipe: Filet of Redgill (#13941)", 6513941},
    {"Recipe Item: Recipe: Hot Smoked Bass (#13943)", 6513943},
    {"Recipe Item: Recipe: Nightfin Soup (#13945)", 6513945},
    {"Recipe Item: Recipe: Poached Sunscale Salmon (#13946)", 6513946},
    {"Recipe Item: Recipe: Lobster Stew (#13947)", 6513947},
    {"Recipe Item: Recipe: Mightfish Steak (#13948)", 6513948},
    {"Recipe Item: Recipe: Baked Salmon (#13949)", 6513949},
    {"Recipe Item: Pattern: Frostweave Tunic (#14466)", 6514466},
    {"Recipe Item: Pattern: Frostweave Robe (#14467)", 6514467},
    {"Recipe Item: Pattern: Runecloth Bag (#14468)", 6514468},
    {"Recipe Item: Pattern: Runecloth Robe (#14469)", 6514469},
    {"Recipe Item: Pattern: Runecloth Tunic (#14470)", 6514470},
    {"Recipe Item: Pattern: Cindercloth Vest (#14471)", 6514471},
    {"Recipe Item: Pattern: Runecloth Cloak (#14472)", 6514472},
    {"Recipe Item: Pattern: Ghostweave Belt (#14473)", 6514473},
    {"Recipe Item: Pattern: Frostweave Gloves (#14474)", 6514474},
    {"Recipe Item: Pattern: Cindercloth Gloves (#14476)", 6514476},
    {"Recipe Item: Pattern: Ghostweave Gloves (#14477)", 6514477},
    {"Recipe Item: Pattern: Brightcloth Robe (#14478)", 6514478},
    {"Recipe Item: Pattern: Brightcloth Gloves (#14479)", 6514479},
    {"Recipe Item: Pattern: Ghostweave Vest (#14480)", 6514480},
    {"Recipe Item: Pattern: Runecloth Gloves (#14481)", 6514481},
    {"Recipe Item: Pattern: Cindercloth Cloak (#14482)", 6514482},
    {"Recipe Item: Pattern: Felcloth Pants (#14483)", 6514483},
    {"Recipe Item: Pattern: Brightcloth Cloak (#14484)", 6514484},
    {"Recipe Item: Pattern: Wizardweave Leggings (#14485)", 6514485},
    {"Recipe Item: Pattern: Cloak of Fire (#14486)", 6514486},
    {"Recipe Item: Pattern: Runecloth Boots (#14488)", 6514488},
    {"Recipe Item: Pattern: Frostweave Pants (#14489)", 6514489},
    {"Recipe Item: Pattern: Cindercloth Pants (#14490)", 6514490},
    {"Recipe Item: Pattern: Robe of Winter Night (#14493)", 6514493},
    {"Recipe Item: Pattern: Felcloth Boots (#14492)", 6514492},
    {"Recipe Item: Pattern: Runecloth Pants (#14491)", 6514491},
    {"Recipe Item: Pattern: Brightcloth Pants (#14494)", 6514494},
    {"Recipe Item: Pattern: Mooncloth Leggings (#14497)", 6514497},
    {"Recipe Item: Pattern: Ghostweave Pants (#14495)", 6514495},
    {"Recipe Item: Pattern: Felcloth Hood (#14496)", 6514496},
    {"Recipe Item: Pattern: Runecloth Headband (#14498)", 6514498},
    {"Recipe Item: Pattern: Mooncloth Bag (#14499)", 6514499},
    {"Recipe Item: Pattern: Wizardweave Robe (#14500)", 6514500},
    {"Recipe Item: Pattern: Mooncloth Vest (#14501)", 6514501},
    {"Recipe Item: Pattern: Mooncloth Shoulders (#14507)", 6514507},
    {"Recipe Item: Pattern: Runecloth Shoulders (#14504)", 6514504},
    {"Recipe Item: Pattern: Wizardweave Turban (#14505)", 6514505},
    {"Recipe Item: Pattern: Felcloth Robe (#14506)", 6514506},
    {"Recipe Item: Pattern: Mooncloth Circlet (#14509)", 6514509},
    {"Recipe Item: Pattern: Felcloth Shoulders (#14508)", 6514508},
    {"Recipe Item: Pattern: Gloves of Spell Mastery (#14511)", 6514511},
    {"Recipe Item: Pattern: Bottomless Bag (#14510)", 6514510},
    {"Recipe Item: Pattern: Truefaith Vestments (#14512)", 6514512},
    {"Recipe Item: Pattern: Robe of the Archmage (#14513)", 6514513},
    {"Recipe Item: Pattern: Robe of the Void (#14514)", 6514514},
    {"Recipe Item: Grimoire of Doom (#4213)", 6504213},
    {"Recipe Item: Pattern: Mooncloth (#14526)", 6514526},
    {"Recipe Item: Pattern: Heavy Scorpid Bracers (#15724)", 6515724},
    {"Recipe Item: Pattern: Wicked Leather Gauntlets (#15725)", 6515725},
    {"Recipe Item: Pattern: Green Dragonscale Breastplate (#15726)", 6515726},
    {"Recipe Item: Pattern: Heavy Scorpid Vest (#15727)", 6515727},
    {"Recipe Item: Pattern: Wicked Leather Bracers (#15728)", 6515728},
    {"Recipe Item: Pattern: Chimeric Gloves (#15729)", 6515729},
    {"Recipe Item: Pattern: Red Dragonscale Breastplate (#15730)", 6515730},
    {"Recipe Item: Pattern: Runic Leather Gauntlets (#15731)", 6515731},
    {"Recipe Item: Pattern: Volcanic Leggings (#15732)", 6515732},
    {"Recipe Item: Pattern: Green Dragonscale Leggings (#15733)", 6515733},
    {"Recipe Item: Pattern: Living Shoulders (#15734)", 6515734},
    {"Recipe Item: Pattern: Ironfeather Shoulders (#15735)", 6515735},
    {"Recipe Item: Pattern: Chimeric Boots (#15737)", 6515737},
    {"Recipe Item: Pattern: Heavy Scorpid Gauntlets (#15738)", 6515738},
    {"Recipe Item: Pattern: Runic Leather Bracers (#15739)", 6515739},
    {"Recipe Item: Pattern: Frostsaber Boots (#15740)", 6515740},
    {"Recipe Item: Pattern: Stormshroud Pants (#15741)", 6515741},
    {"Recipe Item: Pattern: Warbear Harness (#15742)", 6515742},
    {"Recipe Item: Pattern: Heavy Scorpid Belt (#15743)", 6515743},
    {"Recipe Item: Pattern: Wicked Leather Headband (#15744)", 6515744},
    {"Recipe Item: Pattern: Runic Leather Belt (#15745)", 6515745},
    {"Recipe Item: Pattern: Chimeric Leggings (#15746)", 6515746},
    {"Recipe Item: Pattern: Frostsaber Leggings (#15747)", 6515747},
    {"Recipe Item: Pattern: Heavy Scorpid Leggings (#15748)", 6515748},
    {"Recipe Item: Pattern: Volcanic Breastplate (#15749)", 6515749},
    {"Recipe Item: Pattern: Blue Dragonscale Breastplate (#15751)", 6515751},
    {"Recipe Item: Pattern: Living Leggings (#15752)", 6515752},
    {"Recipe Item: Pattern: Stormshroud Armor (#15753)", 6515753},
    {"Recipe Item: Pattern: Warbear Woolies (#15754)", 6515754},
    {"Recipe Item: Pattern: Chimeric Vest (#15755)", 6515755},
    {"Recipe Item: Pattern: Runic Leather Headband (#15756)", 6515756},
    {"Recipe Item: Pattern: Wicked Leather Pants (#15757)", 6515757},
    {"Recipe Item: Pattern: Devilsaur Gauntlets (#15758)", 6515758},
    {"Recipe Item: Pattern: Black Dragonscale Breastplate (#15759)", 6515759},
    {"Recipe Item: Pattern: Ironfeather Breastplate (#15760)", 6515760},
    {"Recipe Item: Pattern: Frostsaber Gloves (#15761)", 6515761},
    {"Recipe Item: Pattern: Heavy Scorpid Helm (#15762)", 6515762},
    {"Recipe Item: Pattern: Blue Dragonscale Shoulders (#15763)", 6515763},
    {"Recipe Item: Pattern: Stormshroud Shoulders (#15764)", 6515764},
    {"Recipe Item: Pattern: Runic Leather Pants (#15765)", 6515765},
    {"Recipe Item: Pattern: Wicked Leather Belt (#15768)", 6515768},
    {"Recipe Item: Pattern: Black Dragonscale Shoulders (#15770)", 6515770},
    {"Recipe Item: Pattern: Living Breastplate (#15771)", 6515771},
    {"Recipe Item: Pattern: Devilsaur Leggings (#15772)", 6515772},
    {"Recipe Item: Pattern: Wicked Leather Armor (#15773)", 6515773},
    {"Recipe Item: Pattern: Heavy Scorpid Shoulders (#15774)", 6515774},
    {"Recipe Item: Pattern: Volcanic Shoulders (#15775)", 6515775},
    {"Recipe Item: Pattern: Runic Leather Armor (#15776)", 6515776},
    {"Recipe Item: Pattern: Runic Leather Shoulders (#15777)", 6515777},
    {"Recipe Item: Pattern: Frostsaber Tunic (#15779)", 6515779},
    {"Recipe Item: Pattern: Onyxia Scale Breastplate (#15780)", 6515780},
    {"Recipe Item: Pattern: Black Dragonscale Leggings (#15781)", 6515781},
    {"Recipe Item: Schematic: Thorium Grenade (#16041)", 6516041},
    {"Recipe Item: Schematic: Thorium Widget (#16042)", 6516042},
    {"Recipe Item: Schematic: Thorium Rifle (#16043)", 6516043},
    {"Recipe Item: Schematic: Lifelike Mechanical Toad (#16044)", 6516044},
    {"Recipe Item: Schematic: Spellpower Goggles Xtreme Plus (#16045)", 6516045},
    {"Recipe Item: Schematic: Thorium Tube (#16047)", 6516047},
    {"Recipe Item: Schematic: Dark Iron Rifle (#16048)", 6516048},
    {"Recipe Item: Schematic: Dark Iron Bomb (#16049)", 6516049},
    {"Recipe Item: Schematic: Thorium Shells (#16051)", 6516051},
    {"Recipe Item: Tome of Tranquilizing Shot (#16665)", 6516665},
    {"Recipe Item: Schematic: Masterwork Target Dummy (#16046)", 6516046},
    {"Recipe Item: Schematic: Delicate Arcanite Converter (#16050)", 6516050},
    {"Recipe Item: Schematic: Voice Amplification Modulator (#16052)", 6516052},
    {"Recipe Item: Schematic: Master Engineer's Goggles (#16053)", 6516053},
    {"Recipe Item: Schematic: Arcanite Dragonling (#16054)", 6516054},
    {"Recipe Item: Schematic: Arcane Bomb (#16055)", 6516055},
    {"Recipe Item: Schematic: Flawless Arcanite Rifle (#16056)", 6516056},
    {"Recipe Item: Formula: Enchant Bracer - Greater Intellect (#16214)", 6516214},
    {"Recipe Item: Formula: Enchant Bracer - Superior Spirit (#16218)", 6516218},
    {"Recipe Item: Formula: Enchant Bracer - Superior Strength (#16246)", 6516246},
    {"Recipe Item: Formula: Enchant Bracer - Superior Stamina (#16251)", 6516251},
    {"Recipe Item: Formula: Enchant Gloves - Greater Agility (#16219)", 6516219},
    {"Recipe Item: Formula: Enchant Gloves - Greater Strength (#16244)", 6516244},
    {"Recipe Item: Formula: Enchant Cloak - Greater Resistance (#16216)", 6516216},
    {"Recipe Item: Formula: Enchant Cloak - Superior Defense (#16224)", 6516224},
    {"Recipe Item: Formula: Enchant Shield - Superior Spirit (#16222)", 6516222},
    {"Recipe Item: Formula: Enchant Shield - Greater Stamina (#16217)", 6516217},
    {"Recipe Item: Formula: Enchant Boots - Greater Stamina (#16215)", 6516215},
    {"Recipe Item: Formula: Enchant Boots - Greater Agility (#16245)", 6516245},
    {"Recipe Item: Formula: Enchant Boots - Spirit (#16220)", 6516220},
    {"Recipe Item: Formula: Enchant Chest - Greater Stats (#16253)", 6516253},
    {"Recipe Item: Formula: Enchant Chest - Major Health (#16221)", 6516221},
    {"Recipe Item: Formula: Enchant Chest - Major Mana (#16242)", 6516242},
    {"Recipe Item: Formula: Enchant Weapon - Icy Chill (#16223)", 6516223},
    {"Recipe Item: Formula: Enchant 2H Weapon - Superior Impact (#16247)", 6516247},
    {"Recipe Item: Formula: Enchant Weapon - Superior Striking (#16250)", 6516250},
    {"Recipe Item: Formula: Enchant Weapon - Lifestealing (#16254)", 6516254},
    {"Recipe Item: Formula: Enchant Weapon - Unholy (#16248)", 6516248},
    {"Recipe Item: Formula: Enchant Weapon - Crusader (#16252)", 6516252},
    {"Recipe Item: Formula: Enchant 2H Weapon - Major Spirit (#16255)", 6516255},
    {"Recipe Item: Formula: Enchant 2H Weapon - Major Intellect (#16249)", 6516249},
    {"Recipe Item: Formula: Runed Arcanite Rod (#16243)", 6516243},
    {"Recipe Item: Recipe: Undermine Clam Chowder (#16767)", 6516767},
    {"Recipe Item: Pattern: Flarecore Mantle (#17017)", 6517017},
    {"Recipe Item: Pattern: Flarecore Gloves (#17018)", 6517018},
    {"Recipe Item: Pattern: Corehound Boots (#17022)", 6517022},
    {"Recipe Item: Pattern: Molten Helm (#17023)", 6517023},
    {"Recipe Item: Pattern: Black Dragonscale Boots (#17025)", 6517025},
    {"Recipe Item: Plans: Fiery Chain Girdle (#17049)", 6517049},
    {"Recipe Item: Plans: Fiery Chain Shoulders (#17053)", 6517053},
    {"Recipe Item: Plans: Dark Iron Bracers (#17051)", 6517051},
    {"Recipe Item: Plans: Dark Iron Leggings (#17052)", 6517052},
    {"Recipe Item: Plans: Dark Iron Reaver (#17059)", 6517059},
    {"Recipe Item: Plans: Dark Iron Destroyer (#17060)", 6517060},
    {"Recipe Item: Recipe: Mithril Head Trout (#17062)", 6517062},
    {"Recipe Item: Recipe: Gingerbread Cookie (#17200)", 6517200},
    {"Recipe Item: Recipe: Egg Nog (#17201)", 6517201},
    {"Recipe Item: Plans: Sulfuron Hammer (#18592)", 6518592},
    {"Recipe Item: Codex: Prayer of Fortitude (#17413)", 6517413},
    {"Recipe Item: Codex: Prayer of Fortitude II (#17414)", 6517414},
    {"Recipe Item: Book: Gift of the Wild (#17682)", 6517682},
    {"Recipe Item: Book: Gift of the Wild II (#17683)", 6517683},
    {"Recipe Item: Plans: Edge of Winter (#17706)", 6517706},
    {"Recipe Item: Recipe: Elixir of Frost Power (#17709)", 6517709},
    {"Recipe Item: Formula: Enchant Weapon - Winter's Might (#17725)", 6517725},
    {"Recipe Item: Schematic: Snowmaster 9000 (#17720)", 6517720},
    {"Recipe Item: Pattern: Gloves of the Greatfather (#17722)", 6517722},
    {"Recipe Item: Pattern: Green Holiday Shirt (#17724)", 6517724},
    {"Recipe Item: Recipe: Tender Wolf Steak (#18046)", 6518046},
    {"Recipe Item: Pattern: Shadowskin Gloves (#18239)", 6518239},
    {"Recipe Item: Pattern: Core Armor Kit (#18252)", 6518252},
    {"Recipe Item: Recipe: Major Rejuvenation Potion (#18257)", 6518257},
    {"Recipe Item: Formula: Enchant Weapon - Spellpower (#18259)", 6518259},
    {"Recipe Item: Formula: Enchant Weapon - Healing Power (#18260)", 6518260},
    {"Recipe Item: Plans: Elemental Sharpening Stone (#18264)", 6518264},
    {"Recipe Item: Pattern: Flarecore Wraps (#18265)", 6518265},
    {"Recipe Item: Recipe: Runn Tum Tuber Surprise (#18267)", 6518267},
    {"Recipe Item: Schematic: Biznicks 247x128 Accurascope (#18290)", 6518290},
    {"Recipe Item: Schematic: Core Marksman Rifle (#18292)", 6518292},
    {"Recipe Item: Schematic: Force Reactive Disk (#18291)", 6518291},
    {"Recipe Item: Pattern: Belt of the Archmage (#18414)", 6518414},
    {"Recipe Item: Pattern: Felcloth Gloves (#18415)", 6518415},
    {"Recipe Item: Pattern: Inferno Gloves (#18416)", 6518416},
    {"Recipe Item: Pattern: Mooncloth Gloves (#18417)", 6518417},
    {"Recipe Item: Pattern: Cloak of Warding (#18418)", 6518418},
    {"Recipe Item: Pattern: Mooncloth Robe (#18487)", 6518487},
    {"Recipe Item: Pattern: Girdle of Insight (#18514)", 6518514},
    {"Recipe Item: Pattern: Mongoose Boots (#18515)", 6518515},
    {"Recipe Item: Pattern: Swift Flight Bracers (#18516)", 6518516},
    {"Recipe Item: Pattern: Chromatic Cloak (#18517)", 6518517},
    {"Recipe Item: Pattern: Hide of the Wild (#18518)", 6518518},
    {"Recipe Item: Pattern: Shifting Cloak (#18519)", 6518519},
    {"Recipe Item: Goblin's Guide to Elementium (#44956)", 6544956},
    {"Recipe Item: Tome of Arcane Brilliance (#18600)", 6518600},
    {"Recipe Item: Schematic: Red Firework (#18647)", 6518647},
    {"Recipe Item: Schematic: Blue Firework (#18649)", 6518649},
    {"Recipe Item: Schematic: Green Firework (#18648)", 6518648},
    {"Recipe Item: Schematic: EZ-Thro Dynamite II (#18650)", 6518650},
    {"Recipe Item: Schematic: Truesilver Transformer (#18651)", 6518651},
    {"Recipe Item: Schematic: Gyrofreeze Ice Reflector (#18652)", 6518652},
    {"Recipe Item: Schematic: Goblin Jumper Cables XL (#18653)", 6518653},
    {"Recipe Item: Schematic: Major Recombobulator (#18655)", 6518655},
    {"Recipe Item: Schematic: Powerful Seaforium Charge (#18656)", 6518656},
    {"Recipe Item: Schematic: Hyper-Radiant Flame Reflector (#18657)", 6518657},
    {"Recipe Item: Schematic: Ultra-Flash Shadow Reflector (#18658)", 6518658},
    {"Recipe Item: Schematic: Gnomish Alarm-o-Bot (#18654)", 6518654},
    {"Recipe Item: Schematic: World Enlarger (#18661)", 6518661},
    {"Recipe Item: Pattern: Heavy Leather Ball (#18731)", 6518731},
    {"Recipe Item: Pattern: Barbaric Bracers (#18949)", 6518949},
    {"Recipe Item: Schematic: Snake Burst Firework (#19027)", 6519027},
    {"Recipe Item: Plans: Heavy Timbermaw Belt (#19202)", 6519202},
    {"Recipe Item: Plans: Heavy Timbermaw Boots (#19204)", 6519204},
    {"Recipe Item: Plans: Girdle of the Dawn (#19203)", 6519203},
    {"Recipe Item: Plans: Gloves of the Dawn (#19205)", 6519205},
    {"Recipe Item: Plans: Dark Iron Helm (#19206)", 6519206},
    {"Recipe Item: Plans: Dark Iron Gauntlets (#19207)", 6519207},
    {"Recipe Item: Plans: Black Amnesty (#19208)", 6519208},
    {"Recipe Item: Plans: Blackfury (#19209)", 6519209},
    {"Recipe Item: Plans: Ebon Hand (#19210)", 6519210},
    {"Recipe Item: Plans: Blackguard (#19211)", 6519211},
    {"Recipe Item: Plans: Nightfall (#19212)", 6519212},
    {"Recipe Item: Pattern: Wisdom of the Timbermaw (#19215)", 6519215},
    {"Recipe Item: Pattern: Mantle of the Timbermaw (#19218)", 6519218},
    {"Recipe Item: Pattern: Argent Boots (#19216)", 6519216},
    {"Recipe Item: Pattern: Argent Shoulders (#19217)", 6519217},
    {"Recipe Item: Pattern: Flarecore Robe (#19219)", 6519219},
    {"Recipe Item: Pattern: Flarecore Leggings (#19220)", 6519220},
    {"Recipe Item: Pattern: Might of the Timbermaw (#19326)", 6519326},
    {"Recipe Item: Pattern: Timbermaw Brawlers (#19327)", 6519327},
    {"Recipe Item: Pattern: Dawn Treaders (#19328)", 6519328},
    {"Recipe Item: Pattern: Golden Mantle of the Dawn (#19329)", 6519329},
    {"Recipe Item: Pattern: Lava Belt (#19330)", 6519330},
    {"Recipe Item: Pattern: Chromatic Gauntlets (#19331)", 6519331},
    {"Recipe Item: Pattern: Corehound Belt (#19332)", 6519332},
    {"Recipe Item: Pattern: Molten Belt (#19333)", 6519333},
    {"Recipe Item: Formula: Powerful Anti-Venom (#19442)", 6519442},
    {"Recipe Item: Formula: Enchant Weapon - Strength (#19444)", 6519444},
    {"Recipe Item: Formula: Enchant Weapon - Agility (#19445)", 6519445},
    {"Recipe Item: Formula: Enchant Bracer - Mana Regeneration (#19446)", 6519446},
    {"Recipe Item: Formula: Enchant Bracer - Healing Power (#19447)", 6519447},
    {"Recipe Item: Formula: Enchant Weapon - Mighty Spirit (#19448)", 6519448},
    {"Recipe Item: Formula: Enchant Weapon - Mighty Intellect (#19449)", 6519449},
    {"Recipe Item: Pattern: Bloodvine Vest (#19764)", 6519764},
    {"Recipe Item: Pattern: Bloodvine Leggings (#19765)", 6519765},
    {"Recipe Item: Pattern: Bloodvine Boots (#19766)", 6519766},
    {"Recipe Item: Pattern: Primal Batskin Jerkin (#19769)", 6519769},
    {"Recipe Item: Pattern: Primal Batskin Gloves (#19770)", 6519770},
    {"Recipe Item: Pattern: Primal Batskin Bracers (#19771)", 6519771},
    {"Recipe Item: Pattern: Blood Tiger Breastplate (#19772)", 6519772},
    {"Recipe Item: Pattern: Blood Tiger Shoulders (#19773)", 6519773},
    {"Recipe Item: Plans: Bloodsoul Breastplate (#19776)", 6519776},
    {"Recipe Item: Plans: Bloodsoul Shoulders (#19777)", 6519777},
    {"Recipe Item: Plans: Bloodsoul Gauntlets (#19778)", 6519778},
    {"Recipe Item: Plans: Darksoul Breastplate (#19779)", 6519779},
    {"Recipe Item: Plans: Darksoul Leggings (#19780)", 6519780},
    {"Recipe Item: Plans: Darksoul Shoulders (#19781)", 6519781},
    {"Recipe Item: Schematic: Bloodvine Goggles (#20000)", 6520000},
    {"Recipe Item: Schematic: Bloodvine Lens (#20001)", 6520001},
    {"Recipe Item: Recipe: Mageblood Elixir (#20011)", 6520011},
    {"Recipe Item: Recipe: Greater Dreamless Sleep Potion (#20012)", 6520012},
    {"Recipe Item: Recipe: Living Action Potion (#20013)", 6520013},
    {"Recipe Item: Recipe: Mighty Troll's Blood Elixir (#20014)", 6520014},
    {"Recipe Item: Plans: Dark Iron Boots (#20040)", 6520040},
    {"Recipe Item: Recipe: Heavy Crocolisk Stew (#20075)", 6520075},
    {"Recipe Item: Pattern: Dreamscale Breastplate (#20382)", 6520382},
    {"Recipe Item: Pattern: Spitfire Bracers (#20506)", 6520506},
    {"Recipe Item: Pattern: Spitfire Gauntlets (#20507)", 6520507},
    {"Recipe Item: Pattern: Spitfire Breastplate (#20508)", 6520508},
    {"Recipe Item: Pattern: Sandstalker Bracers (#20509)", 6520509},
    {"Recipe Item: Pattern: Sandstalker Gauntlets (#20510)", 6520510},
    {"Recipe Item: Pattern: Sandstalker Breastplate (#20511)", 6520511},
    {"Recipe Item: Pattern: Runed Stygian Leggings (#20546)", 6520546},
    {"Recipe Item: Pattern: Runed Stygian Belt (#20548)", 6520548},
    {"Recipe Item: Pattern: Runed Stygian Boots (#20547)", 6520547},
    {"Recipe Item: Plans: Darkrune Gauntlets (#20553)", 6520553},
    {"Recipe Item: Plans: Darkrune Helm (#20555)", 6520555},
    {"Recipe Item: Plans: Darkrune Breastplate (#20554)", 6520554},
    {"Recipe Item: Pattern: Black Whelp Tunic (#20576)", 6520576},
    {"Recipe Item: Formula: Enchant Gloves - Threat (#20726)", 6520726},
    {"Recipe Item: Formula: Enchant Gloves - Shadow Power (#20727)", 6520727},
    {"Recipe Item: Formula: Enchant Gloves - Frost Power (#20728)", 6520728},
    {"Recipe Item: Formula: Enchant Gloves - Fire Power (#20729)", 6520729},
    {"Recipe Item: Formula: Enchant Gloves - Healing Power (#20730)", 6520730},
    {"Recipe Item: Formula: Enchant Gloves - Superior Agility (#20731)", 6520731},
    {"Recipe Item: Formula: Enchant Cloak - Greater Fire Resistance (#20732)", 6520732},
    {"Recipe Item: Formula: Enchant Cloak - Greater Nature Resistance (#20733)", 6520733},
    {"Recipe Item: Formula: Enchant Cloak - Stealth (#20734)", 6520734},
    {"Recipe Item: Formula: Enchant Cloak - Subtlety (#20735)", 6520735},
    {"Recipe Item: Formula: Enchant Cloak - Dodge (#20736)", 6520736},
    {"Recipe Item: Formula: Minor Wizard Oil (#20758)", 6520758},
    {"Recipe Item: Formula: Minor Mana Oil (#20752)", 6520752},
    {"Recipe Item: Formula: Lesser Wizard Oil (#20753)", 6520753},
    {"Recipe Item: Formula: Lesser Mana Oil (#20754)", 6520754},
    {"Recipe Item: Formula: Wizard Oil (#20755)", 6520755},
    {"Recipe Item: Formula: Brilliant Wizard Oil (#20756)", 6520756},
    {"Recipe Item: Formula: Brilliant Mana Oil (#20757)", 6520757},
    {"Recipe Item: Recipe: Transmute Elemental Fire (#20761)", 6520761},
    {"Recipe Item: Manual of Heroic Strike IX (#21297)", 6521297},
    {"Recipe Item: Manual of Revenge VI (#21299)", 6521299},
    {"Recipe Item: Manual of Battle Shout VII (#21298)", 6521298},
    {"Recipe Item: Libram: Blessing of Wisdom VI (#21288)", 6521288},
    {"Recipe Item: Libram: Blessing of Might VII (#21289)", 6521289},
    {"Recipe Item: Libram: Holy Light IX (#21290)", 6521290},
    {"Recipe Item: Guide: Multi-Shot V (#21304)", 6521304},
    {"Recipe Item: Guide: Serpent Sting IX (#21306)", 6521306},
    {"Recipe Item: Guide: Aspect of the Hawk VII (#21307)", 6521307},
    {"Recipe Item: Book of Healing Touch XI (#21294)", 6521294},
    {"Recipe Item: Book of Starfire VII (#21295)", 6521295},
    {"Recipe Item: Book of Rejuvenation XI (#21296)", 6521296},
    {"Recipe Item: Handbook of Backstab IX (#21300)", 6521300},
    {"Recipe Item: Handbook of Feint V (#21303)", 6521303},
    {"Recipe Item: Tome of Frostbolt XI (#21214)", 6521214},
    {"Recipe Item: Tome of Fireball XII (#21279)", 6521279},
    {"Recipe Item: Grimoire of Shadow Bolt X (#21281)", 6521281},
    {"Recipe Item: Grimoire of Immolate VIII (#21282)", 6521282},
    {"Recipe Item: Grimoire of Corruption VII (#21283)", 6521283},
    {"Recipe Item: Codex of Greater Heal V (#21284)", 6521284},
    {"Recipe Item: Codex of Renew X (#21285)", 6521285},
    {"Recipe Item: Codex of Prayer of Healing V (#21287)", 6521287},
    {"Recipe Item: Design: Heavy Golden Necklace of Battle (#20856)", 6520856},
    {"Recipe Item: Design: Wicked Moonstone Ring (#20855)", 6520855},
    {"Recipe Item: Design: Amulet of the Moon (#20854)", 6520854},
    {"Recipe Item: Tome of Arcane Missiles VIII (#21280)", 6521280},
    {"Recipe Item: Handbook of Deadly Poison V (#21302)", 6521302},
    {"Recipe Item: Tablet of Healing Wave X (#21291)", 6521291},
    {"Recipe Item: Tablet of Grace of Air Totem III (#21293)", 6521293},
    {"Recipe Item: Tablet of Strength of Earth Totem V (#21292)", 6521292},
    {"Recipe Item: Codex: Prayer of Fortitude III (#29549)", 6529549},
    {"Recipe Item: Design: Pendant of the Agate Shield (#20970)", 6520970},
    {"Recipe Item: Design: Heavy Iron Knuckles (#20971)", 6520971},
    {"Recipe Item: Design: Blazing Citrine Ring (#20973)", 6520973},
    {"Recipe Item: Design: Jade Pendant of Blasting (#20974)", 6520974},
    {"Recipe Item: Design: The Jade Eye (#20975)", 6520975},
    {"Recipe Item: Design: Citrine Pendant of Golden Healing (#20976)", 6520976},
    {"Recipe Item: Recipe: Dirge's Kickin' Chimaerok Chops (#21025)", 6521025},
    {"Recipe Item: Recipe: Smoked Sagefish (#21099)", 6521099},
    {"Recipe Item: Recipe: Sagefish Delight (#21219)", 6521219},
    {"Recipe Item: Pattern: Soul Pouch (#21358)", 6521358},
    {"Recipe Item: Pattern: Core Felcloth Bag (#21371)", 6521371},
    {"Recipe Item: Recipe: Elixir of Greater Firepower (#21547)", 6521547},
    {"Recipe Item: Pattern: Stormshroud Gloves (#21548)", 6521548},
    {"Recipe Item: Pattern: Festival Dress (#21722)", 6521722},
    {"Recipe Item: Pattern: Festival Suit (#21723)", 6521723},
    {"Recipe Item: Schematic: Small Blue Rocket (#21724)", 6521724},
    {"Recipe Item: Schematic: Small Green Rocket (#21725)", 6521725},
    {"Recipe Item: Schematic: Small Red Rocket (#21726)", 6521726},
    {"Recipe Item: Schematic: Large Blue Rocket (#21727)", 6521727},
    {"Recipe Item: Schematic: Large Green Rocket (#21728)", 6521728},
    {"Recipe Item: Schematic: Large Red Rocket (#21729)", 6521729},
    {"Recipe Item: Schematic: Blue Rocket Cluster (#21730)", 6521730},
    {"Recipe Item: Schematic: Green Rocket Cluster (#21731)", 6521731},
    {"Recipe Item: Schematic: Red Rocket Cluster (#21732)", 6521732},
    {"Recipe Item: Schematic: Large Blue Rocket Cluster (#21733)", 6521733},
    {"Recipe Item: Schematic: Large Green Rocket Cluster (#21734)", 6521734},
    {"Recipe Item: Schematic: Large Red Rocket Cluster (#21735)", 6521735},
    {"Recipe Item: Schematic: Firework Launcher (#21738)", 6521738},
    {"Recipe Item: Schematic: Cluster Launcher (#21737)", 6521737},
    {"Recipe Item: Pattern: Bolt of Imbued Netherweave (#21892)", 6521892},
    {"Recipe Item: Pattern: Imbued Netherweave Bag (#21893)", 6521893},
    {"Recipe Item: Pattern: Bolt of Soulcloth (#21894)", 6521894},
    {"Recipe Item: Pattern: Primal Mooncloth (#21895)", 6521895},
    {"Recipe Item: Pattern: Spellfire Belt (#21908)", 6521908},
    {"Recipe Item: Pattern: Spellfire Gloves (#21909)", 6521909},
    {"Recipe Item: Pattern: Spellfire Robe (#21910)", 6521910},
    {"Recipe Item: Pattern: Spellfire Bag (#21911)", 6521911},
    {"Recipe Item: Pattern: Frozen Shadoweave Shoulders (#21912)", 6521912},
    {"Recipe Item: Pattern: Frozen Shadoweave Boots (#21914)", 6521914},
    {"Recipe Item: Pattern: Frozen Shadoweave Robe (#21913)", 6521913},
    {"Recipe Item: Pattern: Ebon Shadowbag (#21915)", 6521915},
    {"Recipe Item: Pattern: Primal Mooncloth Belt (#21916)", 6521916},
    {"Recipe Item: Pattern: Primal Mooncloth Shoulders (#21918)", 6521918},
    {"Recipe Item: Pattern: Primal Mooncloth Robe (#21917)", 6521917},
    {"Recipe Item: Pattern: Primal Mooncloth Bag (#21919)", 6521919},
    {"Recipe Item: Pattern: Netherweave Robe (#21896)", 6521896},
    {"Recipe Item: Pattern: Netherweave Tunic (#21897)", 6521897},
    {"Recipe Item: Pattern: Imbued Netherweave Pants (#21898)", 6521898},
    {"Recipe Item: Pattern: Imbued Netherweave Boots (#21899)", 6521899},
    {"Recipe Item: Pattern: Imbued Netherweave Robe (#21900)", 6521900},
    {"Recipe Item: Pattern: Imbued Netherweave Tunic (#21901)", 6521901},
    {"Recipe Item: Pattern: Soulcloth Gloves (#21902)", 6521902},
    {"Recipe Item: Pattern: Soulcloth Shoulders (#21903)", 6521903},
    {"Recipe Item: Pattern: Soulcloth Vest (#21904)", 6521904},
    {"Recipe Item: Pattern: Arcanoweave Bracers (#21905)", 6521905},
    {"Recipe Item: Pattern: Arcanoweave Boots (#21906)", 6521906},
    {"Recipe Item: Pattern: Arcanoweave Robe (#21907)", 6521907},
    {"Recipe Item: Design: Golden Hare (#21940)", 6521940},
    {"Recipe Item: Design: Black Pearl Panther (#21941)", 6521941},
    {"Recipe Item: Design: Ruby Crown of Restoration (#21942)", 6521942},
    {"Recipe Item: Design: Truesilver Crab (#21943)", 6521943},
    {"Recipe Item: Design: Truesilver Boar (#21944)", 6521944},
    {"Recipe Item: Design: The Aquamarine Ward (#21945)", 6521945},
    {"Recipe Item: Design: Gem Studded Band (#21947)", 6521947},
    {"Recipe Item: Design: Opal Necklace of Impact (#21948)", 6521948},
    {"Recipe Item: Design: Ruby Serpent (#21949)", 6521949},
    {"Recipe Item: Design: Emerald Crown of Destruction (#21952)", 6521952},
    {"Recipe Item: Design: Emerald Owl (#21953)", 6521953},
    {"Recipe Item: Design: Ring of Bitter Shadows (#21954)", 6521954},
    {"Recipe Item: Design: Black Diamond Crab (#21955)", 6521955},
    {"Recipe Item: Design: Dark Iron Scorpid (#21956)", 6521956},
    {"Recipe Item: Design: Necklace of the Diamond Tower (#21957)", 6521957},
    {"Recipe Item: Book: Gift of the Wild III (#22146)", 6522146},
    {"Recipe Item: Manual: Netherweave Bandage (#21992)", 6521992},
    {"Recipe Item: Manual: Heavy Netherweave Bandage (#21993)", 6521993},
    {"Recipe Item: Tome of Conjure Water IX (#29550)", 6529550},
    {"Recipe Item: Tome of Arcane Brilliance 2 (#22153)", 6522153},
    {"Recipe Item: Plans: Heavy Obsidian Belt (#22209)", 6522209},
    {"Recipe Item: Plans: Jagged Obsidian Shield (#22219)", 6522219},
    {"Recipe Item: Plans: Thick Obsidian Breastplate (#22222)", 6522222},
    {"Recipe Item: Plans: Light Obsidian Belt (#22214)", 6522214},
    {"Recipe Item: Plans: Black Grasp of the Destroyer (#22220)", 6522220},
    {"Recipe Item: Plans: Obsidian Mail Tunic (#22221)", 6522221},
    {"Recipe Item: Pattern: Enchanted Mageweave Pouch (#22307)", 6522307},
    {"Recipe Item: Pattern: Enchanted Runecloth Bag (#22308)", 6522308},
    {"Recipe Item: Pattern: Big Bag of Enchantment (#22309)", 6522309},
    {"Recipe Item: Codex: Prayer of Shadow Protection (#22393)", 6522393},
    {"Recipe Item: Pattern: Cenarion Herb Bag (#22310)", 6522310},
    {"Recipe Item: Pattern: Satchel of Cenarius (#22312)", 6522312},
    {"Recipe Item: Plans: Titanic Leggings (#22388)", 6522388},
    {"Recipe Item: Plans: Persuader (#22390)", 6522390},
    {"Recipe Item: Plans: Sageblade (#22389)", 6522389},
    {"Recipe Item: Formula: Enchant 2H Weapon - Agility (#22392)", 6522392},
    {"Recipe Item: Formula: Enchant Bracer - Major Defense (#22530)", 6522530},
    {"Recipe Item: Formula: Enchant Bracer - Superior Healing (#22531)", 6522531},
    {"Recipe Item: Formula: Enchant Bracer - Restore Mana Prime (#22532)", 6522532},
    {"Recipe Item: Formula: Enchant Bracer - Fortitude (#22533)", 6522533},
    {"Recipe Item: Formula: Enchant Bracer - Spellpower (#22534)", 6522534},
    {"Recipe Item: Formula: Enchant Ring - Striking (#22535)", 6522535},
    {"Recipe Item: Formula: Enchant Ring - Spellpower (#22536)", 6522536},
    {"Recipe Item: Formula: Enchant Ring - Healing Power (#22537)", 6522537},
    {"Recipe Item: Formula: Enchant Ring - Stats (#22538)", 6522538},
    {"Recipe Item: Formula: Enchant Shield - Intellect (#22539)", 6522539},
    {"Recipe Item: Formula: Enchant Shield - Shield Block (#22540)", 6522540},
    {"Recipe Item: Formula: Enchant Shield - Resistance (#22541)", 6522541},
    {"Recipe Item: Formula: Enchant Boots - Vitality (#22542)", 6522542},
    {"Recipe Item: Formula: Enchant Boots - Fortitude (#22543)", 6522543},
    {"Recipe Item: Formula: Enchant Boots - Dexterity (#22544)", 6522544},
    {"Recipe Item: Formula: Enchant Boots - Surefooted (#22545)", 6522545},
    {"Recipe Item: Formula: Enchant Chest - Exceptional Stats (#22547)", 6522547},
    {"Recipe Item: Formula: Enchant Cloak - Major Resistance (#22548)", 6522548},
    {"Recipe Item: Formula: Enchant Weapon - Major Striking (#22552)", 6522552},
    {"Recipe Item: Formula: Enchant Weapon - Major Intellect (#22551)", 6522551},
    {"Recipe Item: Formula: Enchant 2H Weapon - Savagery (#22554)", 6522554},
    {"Recipe Item: Formula: Enchant Weapon - Potency (#22553)", 6522553},
    {"Recipe Item: Formula: Enchant Weapon - Major Spellpower (#22555)", 6522555},
    {"Recipe Item: Formula: Enchant 2H Weapon - Major Agility (#22556)", 6522556},
    {"Recipe Item: Formula: Enchant Weapon - Sunfire (#22560)", 6522560},
    {"Recipe Item: Formula: Enchant Weapon - Soulfrost (#22561)", 6522561},
    {"Recipe Item: Formula: Enchant Weapon - Mongoose (#22559)", 6522559},
    {"Recipe Item: Formula: Enchant Weapon - Spellsurge (#22558)", 6522558},
    {"Recipe Item: Formula: Enchant Weapon - Battlemaster (#22557)", 6522557},
    {"Recipe Item: Formula: Superior Mana Oil (#22562)", 6522562},
    {"Recipe Item: Formula: Superior Wizard Oil (#22563)", 6522563},
    {"Recipe Item: Formula: Large Prismatic Shard (#22565)", 6522565},
    {"Recipe Item: Pattern: Gaea's Embrace (#22683)", 6522683},
    {"Recipe Item: Recipe: Crunchy Spider Surprise (#22647)", 6522647},
    {"Recipe Item: Tome of Polymorph: Turtle (#22739)", 6522739},
    {"Recipe Item: Schematic: Steam Tonk Controller (#22729)", 6522729},
    {"Recipe Item: Plans: Ironvine Breastplate (#22766)", 6522766},
    {"Recipe Item: Plans: Ironvine Gloves (#22767)", 6522767},
    {"Recipe Item: Plans: Ironvine Belt (#22768)", 6522768},
    {"Recipe Item: Pattern: Bramblewood Helm (#22771)", 6522771},
    {"Recipe Item: Pattern: Bramblewood Boots (#22770)", 6522770},
    {"Recipe Item: Pattern: Bramblewood Belt (#22769)", 6522769},
    {"Recipe Item: Pattern: Sylvan Vest (#22774)", 6522774},
    {"Recipe Item: Pattern: Sylvan Crown (#22773)", 6522773},
    {"Recipe Item: Pattern: Sylvan Shoulders (#22772)", 6522772},
    {"Recipe Item: Recipe: Elixir of Camouflage (#22900)", 6522900},
    {"Recipe Item: Recipe: Sneaking Potion (#22901)", 6522901},
    {"Recipe Item: Recipe: Elixir of Major Frost Power (#22902)", 6522902},
    {"Recipe Item: Recipe: Insane Strength Potion (#22903)", 6522903},
    {"Recipe Item: Recipe: Elixir of the Searching Eye (#22904)", 6522904},
    {"Recipe Item: Recipe: Elixir of Major Agility (#22905)", 6522905},
    {"Recipe Item: Recipe: Shrouding Potion (#22906)", 6522906},
    {"Recipe Item: Recipe: Super Mana Potion (#22907)", 6522907},
    {"Recipe Item: Recipe: Elixir of Major Firepower (#22908)", 6522908},
    {"Recipe Item: Recipe: Elixir of Major Defense (#22909)", 6522909},
    {"Recipe Item: Recipe: Elixir of Major Shadow Power (#22910)", 6522910},
    {"Recipe Item: Recipe: Major Dreamless Sleep Potion (#22911)", 6522911},
    {"Recipe Item: Recipe: Heroic Potion (#22912)", 6522912},
    {"Recipe Item: Recipe: Haste Potion (#22913)", 6522913},
    {"Recipe Item: Recipe: Destruction Potion (#22914)", 6522914},
    {"Recipe Item: Recipe: Transmute Primal Air to Fire (#22915)", 6522915},
    {"Recipe Item: Recipe: Transmute Primal Earth to Water (#22916)", 6522916},
    {"Recipe Item: Recipe: Transmute Primal Fire to Earth (#22917)", 6522917},
    {"Recipe Item: Recipe: Transmute Primal Water to Air (#22918)", 6522918},
    {"Recipe Item: Recipe: Elixir of Major Mageblood (#22919)", 6522919},
    {"Recipe Item: Recipe: Major Fire Protection Potion (#22920)", 6522920},
    {"Recipe Item: Recipe: Major Frost Protection Potion (#22921)", 6522921},
    {"Recipe Item: Recipe: Major Nature Protection Potion (#22922)", 6522922},
    {"Recipe Item: Recipe: Major Arcane Protection Potion (#22923)", 6522923},
    {"Recipe Item: Recipe: Major Shadow Protection Potion (#22924)", 6522924},
    {"Recipe Item: Recipe: Major Holy Protection Potion (#22925)", 6522925},
    {"Recipe Item: Recipe: Elixir of Empowerment (#22926)", 6522926},
    {"Recipe Item: Recipe: Ironshield Potion (#22927)", 6522927},
    {"Recipe Item: Tome of Frost Ward V (#22890)", 6522890},
    {"Recipe Item: Grimoire of Shadow Ward IV (#22891)", 6522891},
    {"Recipe Item: Tome of Conjure Food VII (#22897)", 6522897},
    {"Recipe Item: Design: Teardrop Blood Garnet (#23130)", 6523130},
    {"Recipe Item: Design: Bold Blood Garnet (#23131)", 6523131},
    {"Recipe Item: Design: Runed Blood Garnet (#23133)", 6523133},
    {"Recipe Item: Design: Delicate Blood Garnet (#23134)", 6523134},
    {"Recipe Item: Design: Inscribed Flame Spessarite (#23135)", 6523135},
    {"Recipe Item: Design: Luminous Flame Spessarite (#23136)", 6523136},
    {"Recipe Item: Design: Glinting Flame Spessarite (#23137)", 6523137},
    {"Recipe Item: Design: Potent Flame Spessarite (#23138)", 6523138},
    {"Recipe Item: Design: Radiant Deep Peridot (#23140)", 6523140},
    {"Recipe Item: Design: Jagged Deep Peridot (#23141)", 6523141},
    {"Recipe Item: Design: Enduring Deep Peridot (#23142)", 6523142},
    {"Recipe Item: Design: Dazzling Deep Peridot (#23143)", 6523143},
    {"Recipe Item: Design: Glowing Shadow Draenite (#23144)", 6523144},
    {"Recipe Item: Design: Royal Shadow Draenite (#23145)", 6523145},
    {"Recipe Item: Design: Shifting Shadow Draenite (#23146)", 6523146},
    {"Recipe Item: Design: Sovereign Shadow Draenite (#23147)", 6523147},
    {"Recipe Item: Design: Brilliant Golden Draenite (#23148)", 6523148},
    {"Recipe Item: Design: Gleaming Golden Draenite (#23149)", 6523149},
    {"Recipe Item: Design: Thick Golden Draenite (#23150)", 6523150},
    {"Recipe Item: Design: Rigid Golden Draenite (#23151)", 6523151},
    {"Recipe Item: Design: Solid Azure Moonstone (#23152)", 6523152},
    {"Recipe Item: Design: Sparkling Azure Moonstone (#23153)", 6523153},
    {"Recipe Item: Design: Stormy Azure Moonstone (#23154)", 6523154},
    {"Recipe Item: Design: Lustrous Azure Moonstone (#23155)", 6523155},
    {"Recipe Item: Tablet of Flame Shock VI (#23320)", 6523320},
    {"Recipe Item: Plans: Adamantite Maul (#23590)", 6523590},
    {"Recipe Item: Plans: Adamantite Cleaver (#23591)", 6523591},
    {"Recipe Item: Plans: Adamantite Dagger (#23592)", 6523592},
    {"Recipe Item: Plans: Adamantite Rapier (#23593)", 6523593},
    {"Recipe Item: Plans: Adamantite Plate Bracers (#23594)", 6523594},
    {"Recipe Item: Plans: Adamantite Plate Gloves (#23595)", 6523595},
    {"Recipe Item: Plans: Adamantite Breastplate (#23596)", 6523596},
    {"Recipe Item: Plans: Enchanted Adamantite Belt (#23597)", 6523597},
    {"Recipe Item: Plans: Enchanted Adamantite Breastplate (#23599)", 6523599},
    {"Recipe Item: Plans: Enchanted Adamantite Boots (#23598)", 6523598},
    {"Recipe Item: Plans: Enchanted Adamantite Leggings (#23600)", 6523600},
    {"Recipe Item: Plans: Flamebane Bracers (#23601)", 6523601},
    {"Recipe Item: Plans: Flamebane Helm (#23602)", 6523602},
    {"Recipe Item: Plans: Flamebane Gloves (#23603)", 6523603},
    {"Recipe Item: Plans: Flamebane Breastplate (#23604)", 6523604},
    {"Recipe Item: Plans: Felsteel Gloves (#23605)", 6523605},
    {"Recipe Item: Plans: Felsteel Leggings (#23606)", 6523606},
    {"Recipe Item: Plans: Felsteel Helm (#23607)", 6523607},
    {"Recipe Item: Plans: Gauntlets of the Iron Tower (#23621)", 6523621},
    {"Recipe Item: Plans: Khorium Belt (#23608)", 6523608},
    {"Recipe Item: Plans: Khorium Pants (#23609)", 6523609},
    {"Recipe Item: Plans: Khorium Boots (#23610)", 6523610},
    {"Recipe Item: Plans: Ragesteel Gloves (#23611)", 6523611},
    {"Recipe Item: Plans: Ragesteel Helm (#23612)", 6523612},
    {"Recipe Item: Plans: Ragesteel Breastplate (#23613)", 6523613},
    {"Recipe Item: Plans: Swiftsteel Gloves (#23615)", 6523615},
    {"Recipe Item: Plans: Earthpeace Breastplate (#23617)", 6523617},
    {"Recipe Item: Plans: Adamantite Sharpening Stone (#23618)", 6523618},
    {"Recipe Item: Plans: Felsteel Shield Spike (#23619)", 6523619},
    {"Recipe Item: Plans: Felfury Gauntlets (#23620)", 6523620},
    {"Recipe Item: Plans: Steelgrip Gauntlets (#23622)", 6523622},
    {"Recipe Item: Plans: Storm Helm (#23623)", 6523623},
    {"Recipe Item: Plans: Helm of the Stalwart Defender (#23624)", 6523624},
    {"Recipe Item: Plans: Oathkeeper's Helm (#23625)", 6523625},
    {"Recipe Item: Plans: Black Felsteel Bracers (#23626)", 6523626},
    {"Recipe Item: Plans: Bracers of the Green Fortress (#23627)", 6523627},
    {"Recipe Item: Plans: Blessed Bracers (#23628)", 6523628},
    {"Recipe Item: Recipe: Transmute Primal Might (#23574)", 6523574},
    {"Recipe Item: Plans: Felsteel Longblade (#23629)", 6523629},
    {"Recipe Item: Plans: Khorium Champion (#23630)", 6523630},
    {"Recipe Item: Plans: Fel Edged Battleaxe (#23631)", 6523631},
    {"Recipe Item: Plans: Felsteel Reaper (#23632)", 6523632},
    {"Recipe Item: Plans: Runic Hammer (#23633)", 6523633},
    {"Recipe Item: Plans: Fel Hardened Maul (#23634)", 6523634},
    {"Recipe Item: Plans: Eternium Runed Blade (#23635)", 6523635},
    {"Recipe Item: Plans: Dirge (#23636)", 6523636},
    {"Recipe Item: Plans: Hand of Eternity (#23637)", 6523637},
    {"Recipe Item: Plans: Lesser Ward of Shielding (#23638)", 6523638},
    {"Recipe Item: Plans: Greater Ward of Shielding (#23639)", 6523639},
    {"Recipe Item: Schematic: Adamantite Rifle (#23799)", 6523799},
    {"Recipe Item: Schematic: Felsteel Boomstick (#23800)", 6523800},
    {"Recipe Item: Schematic: Ornate Khorium Rifle (#23802)", 6523802},
    {"Recipe Item: Schematic: Cogspinner Goggles (#23803)", 6523803},
    {"Recipe Item: Schematic: Power Amplification Goggles (#23804)", 6523804},
    {"Recipe Item: Schematic: Ultra-Spectropic Detection Goggles (#23805)", 6523805},
    {"Recipe Item: Schematic: Hyper-Vision Goggles (#23806)", 6523806},
    {"Recipe Item: Schematic: Adamantite Scope (#23807)", 6523807},
    {"Recipe Item: Schematic: Khorium Scope (#23808)", 6523808},
    {"Recipe Item: Schematic: Stabilized Eternium Scope (#23809)", 6523809},
    {"Recipe Item: Schematic: Crashin' Thrashin' Robot (#23810)", 6523810},
    {"Recipe Item: Schematic: White Smoke Flare (#23811)", 6523811},
    {"Recipe Item: Schematic: Green Smoke Flare (#23814)", 6523814},
    {"Recipe Item: Schematic: Adamantite Shell Machine (#23815)", 6523815},
    {"Recipe Item: Schematic: Fel Iron Toolbox (#23816)", 6523816},
    {"Recipe Item: Schematic: Titanium Toolbox (#23817)", 6523817},
    {"Recipe Item: Schematic: Elemental Seaforium Charge (#23874)", 6523874},
    {"Recipe Item: Schematic: Zapthrottle Mote Extractor (#23888)", 6523888},
    {"Recipe Item: Schematic: Critter Enlarger (#23882)", 6523882},
    {"Recipe Item: Schematic: Healing Potion Injector (#23883)", 6523883},
    {"Recipe Item: Schematic: Mana Potion Injector (#23884)", 6523884},
    {"Recipe Item: Schematic: Remote Mail Terminal (#23885)", 6523885},
    {"Recipe Item: Schematic: Rocket Boots Xtreme (#23887)", 6523887},
    {"Recipe Item: Manual of Eviscerate IX (#24102)", 6524102},
    {"Recipe Item: Book of Ferocious Bite V (#24101)", 6524101},
    {"Recipe Item: Design: Khorium Band of Shadows (#24158)", 6524158},
    {"Recipe Item: Design: Khorium Band of Frost (#24159)", 6524159},
    {"Recipe Item: Design: Khorium Inferno Band (#24160)", 6524160},
    {"Recipe Item: Design: Khorium Band of Leaves (#24161)", 6524161},
    {"Recipe Item: Design: Arcane Khorium Band (#24162)", 6524162},
    {"Recipe Item: Design: Heavy Felsteel Ring (#24163)", 6524163},
    {"Recipe Item: Design: Delicate Eternium Ring (#24164)", 6524164},
    {"Recipe Item: Design: Blazing Eternium Band (#24165)", 6524165},
    {"Recipe Item: Design: Pendant of Frozen Flame (#24174)", 6524174},
    {"Recipe Item: Design: Pendant of Thawing (#24175)", 6524175},
    {"Recipe Item: Design: Pendant of Withering (#24176)", 6524176},
    {"Recipe Item: Design: Pendant of Shadow's End (#24177)", 6524177},
    {"Recipe Item: Design: Pendant of the Null Rune (#24178)", 6524178},
    {"Recipe Item: Design: Thick Felsteel Necklace (#24166)", 6524166},
    {"Recipe Item: Design: Living Ruby Pendant (#24167)", 6524167},
    {"Recipe Item: Design: Braided Eternium Chain (#24168)", 6524168},
    {"Recipe Item: Design: Eye of the Night (#24169)", 6524169},
    {"Recipe Item: Design: Embrace of the Dawn (#24170)", 6524170},
    {"Recipe Item: Design: Chain of the Twilight Owl (#24171)", 6524171},
    {"Recipe Item: Design: Coronet of Verdant Flame (#24172)", 6524172},
    {"Recipe Item: Design: Circlet of Arcane Might (#24173)", 6524173},
    {"Recipe Item: Design: Felsteel Boar (#24179)", 6524179},
    {"Recipe Item: Design: Dawnstone Crab (#24180)", 6524180},
    {"Recipe Item: Design: Living Ruby Serpent (#24181)", 6524181},
    {"Recipe Item: Design: Talasite Owl (#24182)", 6524182},
    {"Recipe Item: Design: Nightseye Panther (#24183)", 6524183},
    {"Recipe Item: Design: Bold Living Ruby (#24193)", 6524193},
    {"Recipe Item: Design: Delicate Living Ruby (#24194)", 6524194},
    {"Recipe Item: Design: Teardrop Living Ruby (#24195)", 6524195},
    {"Recipe Item: Design: Runed Living Ruby (#24196)", 6524196},
    {"Recipe Item: Design: Bright Living Ruby (#24192)", 6524192},
    {"Recipe Item: Design: Subtle Living Ruby (#24197)", 6524197},
    {"Recipe Item: Design: Flashing Living Ruby (#24198)", 6524198},
    {"Recipe Item: Design: Solid Star of Elune (#24199)", 6524199},
    {"Recipe Item: Design: Lustrous Star of Elune (#24201)", 6524201},
    {"Recipe Item: Design: Stormy Star of Elune (#24202)", 6524202},
    {"Recipe Item: Design: Brilliant Dawnstone (#24203)", 6524203},
    {"Recipe Item: Design: Smooth Dawnstone (#24204)", 6524204},
    {"Recipe Item: Design: Rigid Dawnstone (#24205)", 6524205},
    {"Recipe Item: Design: Gleaming Dawnstone (#24206)", 6524206},
    {"Recipe Item: Design: Thick Dawnstone (#24207)", 6524207},
    {"Recipe Item: Design: Mystic Dawnstone (#24208)", 6524208},
    {"Recipe Item: Design: Sovereign Nightseye (#24209)", 6524209},
    {"Recipe Item: Design: Shifting Nightseye (#24210)", 6524210},
    {"Recipe Item: Design: Glowing Nightseye (#24211)", 6524211},
    {"Recipe Item: Design: Royal Nightseye (#24212)", 6524212},
    {"Recipe Item: Design: Inscribed Noble Topaz (#24213)", 6524213},
    {"Recipe Item: Design: Potent Noble Topaz (#24214)", 6524214},
    {"Recipe Item: Design: Luminous Noble Topaz (#24215)", 6524215},
    {"Recipe Item: Design: Glinting Noble Topaz (#24216)", 6524216},
    {"Recipe Item: Design: Enduring Talasite (#24217)", 6524217},
    {"Recipe Item: Design: Radiant Talasite (#24218)", 6524218},
    {"Recipe Item: Design: Dazzling Talasite (#24219)", 6524219},
    {"Recipe Item: Design: Jagged Talasite (#24220)", 6524220},
    {"Recipe Item: Design: Sparkling Star of Elune (#24200)", 6524200},
    {"Recipe Item: Pattern: Spellcloth (#24316)", 6524316},
    {"Recipe Item: Pattern: Mystic Spellthread (#24292)", 6524292},
    {"Recipe Item: Pattern: Silver Spellthread (#24293)", 6524293},
    {"Recipe Item: Pattern: Runic Spellthread (#24294)", 6524294},
    {"Recipe Item: Pattern: Golden Spellthread (#24295)", 6524295},
    {"Recipe Item: Pattern: Unyielding Bracers (#24296)", 6524296},
    {"Recipe Item: Pattern: Bracers of Havok (#24297)", 6524297},
    {"Recipe Item: Pattern: Blackstrike Bracers (#24298)", 6524298},
    {"Recipe Item: Pattern: Cloak of the Black Void (#24299)", 6524299},
    {"Recipe Item: Pattern: Cloak of Eternity (#24300)", 6524300},
    {"Recipe Item: Pattern: White Remedy Cape (#24301)", 6524301},
    {"Recipe Item: Pattern: Unyielding Girdle (#24302)", 6524302},
    {"Recipe Item: Pattern: Girdle of Ruination (#24303)", 6524303},
    {"Recipe Item: Pattern: Black Belt of Knowledge (#24304)", 6524304},
    {"Recipe Item: Pattern: Resolute Cape (#24305)", 6524305},
    {"Recipe Item: Pattern: Vengeance Wrap (#24306)", 6524306},
    {"Recipe Item: Pattern: Manaweave Cloak (#24307)", 6524307},
    {"Recipe Item: Pattern: Whitemend Pants (#24308)", 6524308},
    {"Recipe Item: Pattern: Spellstrike Pants (#24309)", 6524309},
    {"Recipe Item: Pattern: Battlecast Pants (#24310)", 6524310},
    {"Recipe Item: Pattern: Whitemend Hood (#24311)", 6524311},
    {"Recipe Item: Pattern: Spellstrike Hood (#24312)", 6524312},
    {"Recipe Item: Pattern: Battlecast Hood (#24313)", 6524313},
    {"Recipe Item: Pattern: Bag of Jewels (#24314)", 6524314},
    {"Recipe Item: Pattern: Heavy Netherweave Net (#24315)", 6524315},
    {"Recipe Item: Book of Cower IV (#24345)", 6524345},
    {"Recipe Item: Plans: Greater Rune of Warding (#25526)", 6525526},
    {"Recipe Item: Pattern: Heavy Knothide Leather (#25720)", 6525720},
    {"Recipe Item: Pattern: Vindicator's Armor Kit (#25721)", 6525721},
    {"Recipe Item: Pattern: Magister's Armor Kit (#25722)", 6525722},
    {"Recipe Item: Pattern: Riding Crop (#25725)", 6525725},
    {"Recipe Item: Pattern: Comfortable Insoles (#25726)", 6525726},
    {"Recipe Item: Pattern: Stylin' Purple Hat (#25728)", 6525728},
    {"Recipe Item: Pattern: Stylin' Adventure Hat (#25729)", 6525729},
    {"Recipe Item: Pattern: Stylin' Crimson Hat (#25731)", 6525731},
    {"Recipe Item: Pattern: Stylin' Jungle Hat (#25730)", 6525730},
    {"Recipe Item: Pattern: Fel Leather Gloves (#25732)", 6525732},
    {"Recipe Item: Pattern: Fel Leather Boots (#25733)", 6525733},
    {"Recipe Item: Pattern: Fel Leather Leggings (#25734)", 6525734},
    {"Recipe Item: Pattern: Heavy Clefthoof Vest (#25735)", 6525735},
    {"Recipe Item: Pattern: Heavy Clefthoof Leggings (#25736)", 6525736},
    {"Recipe Item: Pattern: Heavy Clefthoof Boots (#25737)", 6525737},
    {"Recipe Item: Pattern: Felstalker Belt (#25738)", 6525738},
    {"Recipe Item: Pattern: Felstalker Bracers (#25739)", 6525739},
    {"Recipe Item: Pattern: Felstalker Breastplate (#25740)", 6525740},
    {"Recipe Item: Pattern: Netherfury Belt (#25741)", 6525741},
    {"Recipe Item: Pattern: Netherfury Leggings (#25742)", 6525742},
    {"Recipe Item: Pattern: Netherfury Boots (#25743)", 6525743},
    {"Recipe Item: Plans: Adamantite Rod (#25846)", 6525846},
    {"Recipe Item: Plans: Eternium Rod (#25847)", 6525847},
    {"Recipe Item: Formula: Runed Adamantite Rod (#25848)", 6525848},
    {"Recipe Item: Formula: Runed Eternium Rod (#25849)", 6525849},
    {"Recipe Item: Recipe: Transmute Earthstorm Diamond (#25869)", 6525869},
    {"Recipe Item: Recipe: Transmute Skyfire Diamond (#25870)", 6525870},
    {"Recipe Item: Schematic: Purple Smoke Flare (#25887)", 6525887},
    {"Recipe Item: Design: Powerful Earthstorm Diamond (#25902)", 6525902},
    {"Recipe Item: Design: Bracing Earthstorm Diamond (#25903)", 6525903},
    {"Recipe Item: Design: Tenacious Earthstorm Diamond (#25905)", 6525905},
    {"Recipe Item: Design: Brutal Earthstorm Diamond (#25906)", 6525906},
    {"Recipe Item: Design: Insightful Earthstorm Diamond (#25904)", 6525904},
    {"Recipe Item: Design: Destructive Skyfire Diamond (#25907)", 6525907},
    {"Recipe Item: Design: Mystical Skyfire Diamond (#25909)", 6525909},
    {"Recipe Item: Design: Swift Skyfire Diamond (#25908)", 6525908},
    {"Recipe Item: Design: Enigmatic Skyfire Diamond (#25910)", 6525910},
    {"Recipe Item: Recipe: Lynx Steak (#27685)", 6527685},
    {"Recipe Item: Recipe: Roasted Moongraze Tenderloin (#27686)", 6527686},
    {"Recipe Item: Recipe: Bat Bites (#27687)", 6527687},
    {"Recipe Item: Recipe: Buzzard Bites (#27684)", 6527684},
    {"Recipe Item: Recipe: Ravager Dog (#27688)", 6527688},
    {"Recipe Item: Recipe: Sporeling Snack (#27689)", 6527689},
    {"Recipe Item: Recipe: Blackened Basilisk (#27690)", 6527690},
    {"Recipe Item: Recipe: Roasted Clefthoof (#27691)", 6527691},
    {"Recipe Item: Recipe: Warp Burger (#27692)", 6527692},
    {"Recipe Item: Recipe: Talbuk Steak (#27693)", 6527693},
    {"Recipe Item: Recipe: Blackened Trout (#27694)", 6527694},
    {"Recipe Item: Recipe: Feltail Delight (#27695)", 6527695},
    {"Recipe Item: Recipe: Blackened Sporefish (#27696)", 6527696},
    {"Recipe Item: Recipe: Grilled Mudfish (#27697)", 6527697},
    {"Recipe Item: Recipe: Poached Bluefish (#27698)", 6527698},
    {"Recipe Item: Recipe: Golden Fish Sticks (#27699)", 6527699},
    {"Recipe Item: Recipe: Spicy Crawdad (#27700)", 6527700},
    {"Recipe Item: Tome of Conjure Food VIII (#31501)", 6531501},
    {"Recipe Item: Formula: Enchant Chest - Major Resilience (#28270)", 6528270},
    {"Recipe Item: Formula: Enchant Gloves - Precise Strikes (#28271)", 6528271},
    {"Recipe Item: Formula: Enchant Gloves - Major Spellpower (#28272)", 6528272},
    {"Recipe Item: Formula: Enchant Gloves - Major Healing (#28273)", 6528273},
    {"Recipe Item: Formula: Enchant Cloak - Spell Penetration (#28274)", 6528274},
    {"Recipe Item: Formula: Enchant Cloak - Greater Arcane Resistance (#28276)", 6528276},
    {"Recipe Item: Formula: Enchant Cloak - Greater Shadow Resistance (#28277)", 6528277},
    {"Recipe Item: Formula: Enchant Boots - Cat's Swiftness (#28279)", 6528279},
    {"Recipe Item: Formula: Enchant Boots - Boar's Speed (#28280)", 6528280},
    {"Recipe Item: Formula: Enchant Shield - Major Stamina (#28282)", 6528282},
    {"Recipe Item: Formula: Enchant Weapon - Major Healing (#28281)", 6528281},
    {"Recipe Item: Design: Smooth Golden Draenite (#28291)", 6528291},
    {"Recipe Item: Design: Bright Blood Garnet (#28596)", 6528596},
    {"Recipe Item: Plans: Adamantite Weightstone (#28632)", 6528632},
    {"Recipe Item: Pattern: Shadow Armor Kit (#29669)", 6529669},
    {"Recipe Item: Pattern: Flame Armor Kit (#29672)", 6529672},
    {"Recipe Item: Pattern: Frost Armor Kit (#29673)", 6529673},
    {"Recipe Item: Pattern: Nature Armor Kit (#29674)", 6529674},
    {"Recipe Item: Pattern: Arcane Armor Kit (#29675)", 6529675},
    {"Recipe Item: Pattern: Enchanted Felscale Leggings (#29677)", 6529677},
    {"Recipe Item: Pattern: Enchanted Felscale Gloves (#29682)", 6529682},
    {"Recipe Item: Pattern: Enchanted Felscale Boots (#29684)", 6529684},
    {"Recipe Item: Pattern: Flamescale Boots (#29691)", 6529691},
    {"Recipe Item: Pattern: Flamescale Leggings (#29689)", 6529689},
    {"Recipe Item: Pattern: Reinforced Mining Bag (#29664)", 6529664},
    {"Recipe Item: Pattern: Flamescale Belt (#29693)", 6529693},
    {"Recipe Item: Pattern: Enchanted Clefthoof Leggings (#29698)", 6529698},
    {"Recipe Item: Pattern: Enchanted Clefthoof Gloves (#29700)", 6529700},
    {"Recipe Item: Pattern: Enchanted Clefthoof Boots (#29701)", 6529701},
    {"Recipe Item: Pattern: Blastguard Pants (#29702)", 6529702},
    {"Recipe Item: Pattern: Blastguard Boots (#29703)", 6529703},
    {"Recipe Item: Pattern: Blastguard Belt (#29704)", 6529704},
    {"Recipe Item: Pattern: Drums of Panic (#29713)", 6529713},
    {"Recipe Item: Pattern: Drums of Restoration (#29714)", 6529714},
    {"Recipe Item: Pattern: Drums of Battle (#29717)", 6529717},
    {"Recipe Item: Pattern: Drums of Speed (#29718)", 6529718},
    {"Recipe Item: Pattern: Cobrahide Leg Armor (#29719)", 6529719},
    {"Recipe Item: Pattern: Nethercobra Leg Armor (#29722)", 6529722},
    {"Recipe Item: Pattern: Clefthide Leg Armor (#29720)", 6529720},
    {"Recipe Item: Pattern: Nethercleft Leg Armor (#29721)", 6529721},
    {"Recipe Item: Pattern: Cobrascale Hood (#29723)", 6529723},
    {"Recipe Item: Pattern: Cobrascale Gloves (#29724)", 6529724},
    {"Recipe Item: Pattern: Windscale Hood (#29725)", 6529725},
    {"Recipe Item: Pattern: Hood of Primal Life (#29726)", 6529726},
    {"Recipe Item: Pattern: Gloves of the Living Touch (#29727)", 6529727},
    {"Recipe Item: Pattern: Windslayer Wraps (#29728)", 6529728},
    {"Recipe Item: Pattern: Living Dragonscale Helm (#29729)", 6529729},
    {"Recipe Item: Pattern: Earthen Netherscale Boots (#29730)", 6529730},
    {"Recipe Item: Pattern: Windstrike Gloves (#29731)", 6529731},
    {"Recipe Item: Pattern: Netherdrake Helm (#29732)", 6529732},
    {"Recipe Item: Pattern: Netherdrake Gloves (#29733)", 6529733},
    {"Recipe Item: Pattern: Thick Netherscale Breastplate (#29734)", 6529734},
    {"Recipe Item: Recipe: Clam Bar (#30156)", 6530156},
    {"Recipe Item: Pattern: Belt of Blasting (#30280)", 6530280},
    {"Recipe Item: Pattern: Belt of the Long Road (#30281)", 6530281},
    {"Recipe Item: Pattern: Boots of Blasting (#30282)", 6530282},
    {"Recipe Item: Pattern: Boots of the Long Road (#30283)", 6530283},
    {"Recipe Item: Pattern: Belt of Natural Power (#30301)", 6530301},
    {"Recipe Item: Pattern: Belt of Deep Shadow (#30302)", 6530302},
    {"Recipe Item: Pattern: Belt of the Black Eagle (#30303)", 6530303},
    {"Recipe Item: Pattern: Monsoon Belt (#30304)", 6530304},
    {"Recipe Item: Pattern: Boots of Natural Grace (#30305)", 6530305},
    {"Recipe Item: Pattern: Boots of Utter Darkness (#30306)", 6530306},
    {"Recipe Item: Pattern: Boots of the Crimson Hawk (#30307)", 6530307},
    {"Recipe Item: Pattern: Hurricane Boots (#30308)", 6530308},
    {"Recipe Item: Plans: Belt of the Guardian (#30321)", 6530321},
    {"Recipe Item: Plans: Red Belt of Battle (#30322)", 6530322},
    {"Recipe Item: Plans: Boots of the Protector (#30323)", 6530323},
    {"Recipe Item: Plans: Red Havoc Boots (#30324)", 6530324},
    {"Recipe Item: Pattern: Shadowcloth (#30483)", 6530483},
    {"Recipe Item: Design: Ring of Arcane Shielding (#30826)", 6530826},
    {"Recipe Item: Pattern: Cloak of Arcane Evasion (#30833)", 6530833},
    {"Recipe Item: Pattern: Flameheart Bracers (#30842)", 6530842},
    {"Recipe Item: Pattern: Flameheart Gloves (#30843)", 6530843},
    {"Recipe Item: Pattern: Flameheart Vest (#30844)", 6530844},
    {"Recipe Item: Plans: Wildguard Breastplate (#31390)", 6531390},
    {"Recipe Item: Plans: Wildguard Leggings (#31391)", 6531391},
    {"Recipe Item: Plans: Wildguard Helm (#31392)", 6531392},
    {"Recipe Item: Plans: Iceguard Breastplate (#31393)", 6531393},
    {"Recipe Item: Plans: Iceguard Leggings (#31394)", 6531394},
    {"Recipe Item: Plans: Iceguard Helm (#31395)", 6531395},
    {"Recipe Item: Design: The Frozen Eye (#31401)", 6531401},
    {"Recipe Item: Design: The Natural Ward (#31402)", 6531402},
    {"Recipe Item: Recipe: Mok'Nathal Shortribs (#31675)", 6531675},
    {"Recipe Item: Recipe: Crunchy Serpent (#31674)", 6531674},
    {"Recipe Item: Recipe: Fel Strength Elixir (#31680)", 6531680},
    {"Recipe Item: Recipe: Fel Mana Potion (#31682)", 6531682},
    {"Recipe Item: Recipe: Fel Regeneration Potion (#31681)", 6531681},
    {"Recipe Item: Codex: Prayer of Shadow Protection II (#31837)", 6531837},
    {"Recipe Item: Design: Great Golden Draenite (#31870)", 6531870},
    {"Recipe Item: Design: Great Dawnstone (#31875)", 6531875},
    {"Recipe Item: Design: Balanced Shadow Draenite (#31871)", 6531871},
    {"Recipe Item: Design: Infused Shadow Draenite (#31872)", 6531872},
    {"Recipe Item: Design: Infused Nightseye (#31877)", 6531877},
    {"Recipe Item: Design: Balanced Nightseye (#31876)", 6531876},
    {"Recipe Item: Design: Veiled Flame Spessarite (#31873)", 6531873},
    {"Recipe Item: Design: Wicked Flame Spessarite (#31874)", 6531874},
    {"Recipe Item: Design: Veiled Noble Topaz (#31878)", 6531878},
    {"Recipe Item: Design: Wicked Noble Topaz (#31879)", 6531879},
    {"Recipe Item: Recipe: Earthen Elixir (#32070)", 6532070},
    {"Recipe Item: Recipe: Elixir of Ironskin (#32071)", 6532071},
    {"Recipe Item: Design: Bold Crimson Spinel (#32274)", 6532274},
    {"Recipe Item: Design: Delicate Crimson Spinel (#32277)", 6532277},
    {"Recipe Item: Design: Teardrop Crimson Spinel (#32281)", 6532281},
    {"Recipe Item: Design: Runed Crimson Spinel (#32282)", 6532282},
    {"Recipe Item: Design: Bright Crimson Spinel (#32283)", 6532283},
    {"Recipe Item: Design: Subtle Crimson Spinel (#32284)", 6532284},
    {"Recipe Item: Design: Flashing Crimson Spinel (#32285)", 6532285},
    {"Recipe Item: Design: Solid Empyrean Sapphire (#32286)", 6532286},
    {"Recipe Item: Design: Sparkling Empyrean Sapphire (#32287)", 6532287},
    {"Recipe Item: Design: Lustrous Empyrean Sapphire (#32288)", 6532288},
    {"Recipe Item: Design: Stormy Empyrean Sapphire (#32289)", 6532289},
    {"Recipe Item: Design: Brilliant Lionseye (#32290)", 6532290},
    {"Recipe Item: Design: Smooth Lionseye (#32291)", 6532291},
    {"Recipe Item: Design: Rigid Lionseye (#32292)", 6532292},
    {"Recipe Item: Design: Gleaming Lionseye (#32293)", 6532293},
    {"Recipe Item: Design: Thick Lionseye (#32294)", 6532294},
    {"Recipe Item: Design: Mystic Lionseye (#32295)", 6532295},
    {"Recipe Item: Design: Great Lionseye (#32296)", 6532296},
    {"Recipe Item: Design: Sovereign Shadowsong Amethyst (#32297)", 6532297},
    {"Recipe Item: Design: Shifting Shadowsong Amethyst (#32298)", 6532298},
    {"Recipe Item: Design: Balanced Shadowsong Amethyst (#32299)", 6532299},
    {"Recipe Item: Design: Infused Shadowsong Amethyst (#32300)", 6532300},
    {"Recipe Item: Design: Glowing Shadowsong Amethyst (#32301)", 6532301},
    {"Recipe Item: Design: Royal Shadowsong Amethyst (#32302)", 6532302},
    {"Recipe Item: Design: Inscribed Pyrestone (#32303)", 6532303},
    {"Recipe Item: Design: Potent Pyrestone (#32304)", 6532304},
    {"Recipe Item: Design: Luminous Pyrestone (#32305)", 6532305},
    {"Recipe Item: Design: Glinting Pyrestone (#32306)", 6532306},
    {"Recipe Item: Design: Veiled Pyrestone (#32307)", 6532307},
    {"Recipe Item: Design: Wicked Pyrestone (#32308)", 6532308},
    {"Recipe Item: Design: Enduring Seaspray Emerald (#32309)", 6532309},
    {"Recipe Item: Design: Radiant Seaspray Emerald (#32310)", 6532310},
    {"Recipe Item: Design: Dazzling Seaspray Emerald (#32311)", 6532311},
    {"Recipe Item: Design: Jagged Seaspray Emerald (#32312)", 6532312},
    {"Recipe Item: Schematic: Fused Wiring (#32381)", 6532381},
    {"Recipe Item: Design: Relentless Earthstorm Diamond (#32412)", 6532412},
    {"Recipe Item: Design: Thundering Skyfire Diamond (#32411)", 6532411},
    {"Recipe Item: Pattern: Boots of Shackled Souls (#32429)", 6532429},
    {"Recipe Item: Pattern: Greaves of Shackled Souls (#32431)", 6532431},
    {"Recipe Item: Pattern: Waistguard of Shackled Souls (#32432)", 6532432},
    {"Recipe Item: Pattern: Redeemed Soul Moccasins (#32433)", 6532433},
    {"Recipe Item: Pattern: Redeemed Soul Wristguards (#32434)", 6532434},
    {"Recipe Item: Pattern: Redeemed Soul Legguards (#32435)", 6532435},
    {"Recipe Item: Pattern: Redeemed Soul Cinch (#32436)", 6532436},
    {"Recipe Item: Pattern: Soulguard Slippers (#32437)", 6532437},
    {"Recipe Item: Pattern: Soulguard Bracers (#32438)", 6532438},
    {"Recipe Item: Pattern: Soulguard Leggings (#32439)", 6532439},
    {"Recipe Item: Pattern: Soulguard Girdle (#32440)", 6532440},
    {"Recipe Item: Plans: Shadesteel Sabots (#32441)", 6532441},
    {"Recipe Item: Plans: Shadesteel Bracers (#32442)", 6532442},
    {"Recipe Item: Plans: Shadesteel Greaves (#32443)", 6532443},
    {"Recipe Item: Plans: Shadesteel Girdle (#32444)", 6532444},
    {"Recipe Item: Pattern: Night's End (#32447)", 6532447},
    {"Recipe Item: Plans: Swiftsteel Bracers (#32736)", 6532736},
    {"Recipe Item: Plans: Swiftsteel Shoulders (#32737)", 6532737},
    {"Recipe Item: Plans: Dawnsteel Bracers (#32738)", 6532738},
    {"Recipe Item: Plans: Dawnsteel Shoulders (#32739)", 6532739},
    {"Recipe Item: Pattern: Bracers of Renewed Life (#32744)", 6532744},
    {"Recipe Item: Pattern: Shoulderpads of Renewed Life (#32745)", 6532745},
    {"Recipe Item: Pattern: Swiftstrike Bracers (#32746)", 6532746},
    {"Recipe Item: Pattern: Swiftstrike Shoulders (#32747)", 6532747},
    {"Recipe Item: Pattern: Bindings of Lightning Reflexes (#32748)", 6532748},
    {"Recipe Item: Pattern: Shoulders of Lightning Reflexes (#32749)", 6532749},
    {"Recipe Item: Pattern: Living Earth Bindings (#32750)", 6532750},
    {"Recipe Item: Pattern: Living Earth Shoulders (#32751)", 6532751},
    {"Recipe Item: Pattern: Bracers of Nimble Thought (#32754)", 6532754},
    {"Recipe Item: Pattern: Mantle of Nimble Thought (#32755)", 6532755},
    {"Recipe Item: Pattern: Swiftheal Wraps (#32752)", 6532752},
    {"Recipe Item: Pattern: Swiftheal Mantle (#32753)", 6532753},
    {"Recipe Item: Pattern: Cloak of Darkness (#33124)", 6533124},
    {"Recipe Item: Design: Don Julio's Heart (#33305)", 6533305},
    {"Recipe Item: Design: Kailee's Rose (#33155)", 6533155},
    {"Recipe Item: Design: Crimson Sun (#33156)", 6533156},
    {"Recipe Item: Design: Falling Star (#33157)", 6533157},
    {"Recipe Item: Design: Stone of Blades (#33158)", 6533158},
    {"Recipe Item: Design: Blood of Amber (#33159)", 6533159},
    {"Recipe Item: Design: Facet of Eternity (#33160)", 6533160},
    {"Recipe Item: Formula: Enchant Weapon - Greater Agility (#33165)", 6533165},
    {"Recipe Item: Plans: Ragesteel Shoulders (#33174)", 6533174},
    {"Recipe Item: Plans: Adamantite Weapon Chain (#33186)", 6533186},
    {"Recipe Item: Pattern: Shadowprowler's Chestguard (#33205)", 6533205},
    {"Recipe Item: Recipe: Flask of Chromatic Wonder (#33209)", 6533209},
    {"Recipe Item: Formula: Enchant Weapon - Executioner (#33307)", 6533307},
    {"Recipe Item: Weather-Beaten Journal (#34109)", 6534109},
    {"Recipe Item: Design: Steady Talasite (#33783)", 6533783},
    {"Recipe Item: Plans: Heavy Copper Longsword (#33792)", 6533792},
    {"Recipe Item: Schematic: Adamantite Arrow Maker (#33804)", 6533804},
    {"Recipe Item: Recipe: Skullfish Soup (#33870)", 6533870},
    {"Recipe Item: Recipe: Stormchops (#33871)", 6533871},
    {"Recipe Item: Recipe: Broiled Bloodfin (#33869)", 6533869},
    {"Recipe Item: Recipe: Spicy Hot Talbuk (#33873)", 6533873},
    {"Recipe Item: Recipe: Kibler's Bits (#33875)", 6533875},
    {"Recipe Item: Recipe: Delicious Chocolate Cake (#33925)", 6533925},
    {"Recipe Item: Plans: Hammer of Righteous Might (#33954)", 6533954},
    {"Recipe Item: Pattern: Quiver of a Thousand Feathers (#34200)", 6534200},
    {"Recipe Item: Schematic: Field Repair Bot 110G (#34114)", 6534114},
    {"Recipe Item: Formula: Enchant Cloak - Superior Frost Resistance (#37332)", 6537332},
    {"Recipe Item: Formula: Enchant Cloak - Superior Nature Resistance (#37333)", 6537333},
    {"Recipe Item: Formula: Enchant Cloak - Superior Agility (#37335)", 6537335},
    {"Recipe Item: Formula: Enchant Weapon - Exceptional Spirit (#37329)", 6537329},
    {"Recipe Item: Formula: Enchant Gloves - Greater Assault (#37345)", 6537345},
    {"Recipe Item: Formula: Enchant Weapon - Icebreaker (#37344)", 6537344},
    {"Recipe Item: Formula: Enchant Cloak - Superior Fire Resistance (#37331)", 6537331},
    {"Recipe Item: Formula: Enchant Bracers - Greater Assault (#44484)", 6544484},
    {"Recipe Item: Formula: Enchant Weapon - Lifeward (#44494)", 6544494},
    {"Recipe Item: Formula: Enchant Chest - Exceptional Resilience (#37340)", 6537340},
    {"Recipe Item: Formula: Enchant Cloak - Superior Shadow Resistance (#37334)", 6537334},
    {"Recipe Item: Formula: Enchant Cloak - Titanweave (#37347)", 6537347},
    {"Recipe Item: Formula: Enchant Bracer - Major Spirit (#37326)", 6537326},
    {"Recipe Item: Formula: Enchant Weapon - Scourgebane (#44473)", 6544473},
    {"Recipe Item: Formula: Enchant Cloak - Superior Arcane Resistance (#37330)", 6537330},
    {"Recipe Item: Formula: Enchant Bracer - Expertise (#37346)", 6537346},
    {"Recipe Item: Formula: Enchant Bracer - Greater Stats (#37337)", 6537337},
    {"Recipe Item: Formula: Enchant Weapon - Giant Slayer (#37339)", 6537339},
    {"Recipe Item: Formula: Enchant Gloves - Armsman (#44485)", 6544485},
    {"Recipe Item: Formula: Enchant Weapon - Greater Savagery (#37338)", 6537338},
    {"Recipe Item: Formula: Enchant Cloak - Shadow Armor (#37349)", 6537349},
    {"Recipe Item: Formula: Enchant Weapon - Exceptional Agility (#37343)", 6537343},
    {"Recipe Item: Pattern: Netherscale Ammo Pouch (#34201)", 6534201},
    {"Recipe Item: Design: Chaotic Skyfire Diamond (#34221)", 6534221},
    {"Recipe Item: Pattern: Green Winter Clothes (#34261)", 6534261},
    {"Recipe Item: Pattern: Winter Boots (#34262)", 6534262},
    {"Recipe Item: Pattern: Red Winter Clothes (#34319)", 6534319},
    {"Recipe Item: Recipe: Hot Apple Cider (#34413)", 6534413},
    {"Recipe Item: Pattern: Bag of Many Hides (#34491)", 6534491},
    {"Recipe Item: Manual: Heavy Frostweave Bandage (#39152)", 6539152},
    {"Recipe Item: Recipe: Mega Mammoth Meal (#43018)", 6543018},
    {"Recipe Item: Recipe: Tender Shoveltusk Steak (#43019)", 6543019},
    {"Recipe Item: Recipe: Spiced Worm Burger (#43020)", 6543020},
    {"Recipe Item: Recipe: Very Burnt Worg (#43021)", 6543021},
    {"Recipe Item: Recipe: Mighty Rhino Dogs (#43022)", 6543022},
    {"Recipe Item: Recipe: Poached Northern Sculpin (#43023)", 6543023},
    {"Recipe Item: Recipe: Firecracker Salmon (#43024)", 6543024},
    {"Recipe Item: Recipe: Imperial Manta Steak (#43026)", 6543026},
    {"Recipe Item: Recipe: Spicy Blue Nettlefish (#43025)", 6543025},
    {"Recipe Item: Recipe: Captain Rumsey's Lager (#34834)", 6534834},
    {"Recipe Item: Formula: Void Shatter (#34872)", 6534872},
    {"Recipe Item: Schematic: Wonderheal XT68 Shades (#35191)", 6535191},
    {"Recipe Item: Schematic: Justicebringer 3000 Specs (#35187)", 6535187},
    {"Recipe Item: Schematic: Powerheal 9000 Lens (#35189)", 6535189},
    {"Recipe Item: Schematic: Hyper-Magnified Moon Specs (#35190)", 6535190},
    {"Recipe Item: Schematic: Primal-Attuned Goggles (#35192)", 6535192},
    {"Recipe Item: Schematic: Annihilator Holo-Gogs (#35186)", 6535186},
    {"Recipe Item: Schematic: Lightning Etched Specs (#35193)", 6535193},
    {"Recipe Item: Schematic: Surestrike Goggles v3.0 (#35194)", 6535194},
    {"Recipe Item: Schematic: Mayhem Projection Goggles (#35195)", 6535195},
    {"Recipe Item: Schematic: Hard Khorium Goggles (#35196)", 6535196},
    {"Recipe Item: Schematic: Quad Deathblow X44 Goggles (#35197)", 6535197},
    {"Recipe Item: Design: Loop of Forged Power (#35198)", 6535198},
    {"Recipe Item: Design: Ring of Flowing Life (#35199)", 6535199},
    {"Recipe Item: Design: Hard Khorium Band (#35200)", 6535200},
    {"Recipe Item: Design: Pendant of Sunfire (#35201)", 6535201},
    {"Recipe Item: Design: Amulet of Flowing Life (#35202)", 6535202},
    {"Recipe Item: Design: Hard Khorium Choker (#35203)", 6535203},
    {"Recipe Item: Pattern: Sunfire Handwraps (#35204)", 6535204},
    {"Recipe Item: Pattern: Hands of Eternal Light (#35205)", 6535205},
    {"Recipe Item: Pattern: Sunfire Robe (#35206)", 6535206},
    {"Recipe Item: Pattern: Robe of Eternal Light (#35207)", 6535207},
    {"Recipe Item: Pattern: Leather Gauntlets of the Sun (#35212)", 6535212},
    {"Recipe Item: Pattern: Fletcher's Gloves of the Phoenix (#35213)", 6535213},
    {"Recipe Item: Pattern: Gloves of Immortal Dusk (#35214)", 6535214},
    {"Recipe Item: Pattern: Sun-Drenched Scale Gloves (#35215)", 6535215},
    {"Recipe Item: Pattern: Leather Chestguard of the Sun (#35216)", 6535216},
    {"Recipe Item: Pattern: Embrace of the Phoenix (#35217)", 6535217},
    {"Recipe Item: Pattern: Carapace of Sun and Shadow (#35218)", 6535218},
    {"Recipe Item: Pattern: Sun-Drenched Scale Chestguard (#35219)", 6535219},
    {"Recipe Item: Plans: Sunblessed Gauntlets (#35208)", 6535208},
    {"Recipe Item: Plans: Hard Khorium Battlefists (#35209)", 6535209},
    {"Recipe Item: Plans: Sunblessed Breastplate (#35210)", 6535210},
    {"Recipe Item: Plans: Hard Khorium Battleplate (#35211)", 6535211},
    {"Recipe Item: Study of Advanced Smelting (#35273)", 6535273},
    {"Recipe Item: Design: Quick Dawnstone (#35322)", 6535322},
    {"Recipe Item: Design: Reckless Noble Topaz (#35323)", 6535323},
    {"Recipe Item: Design: Forceful Talasite (#35325)", 6535325},
    {"Recipe Item: Formula: Enchant Weapon - Deathfrost (#35498)", 6535498},
    {"Recipe Item: Formula: Enchant Chest - Defense (#35500)", 6535500},
    {"Recipe Item: Design: Eternal Earthstorm Diamond (#35502)", 6535502},
    {"Recipe Item: Design: Ember Skyfire Diamond (#35505)", 6535505},
    {"Recipe Item: Recipe: Charred Bear Kabobs (#35564)", 6535564},
    {"Recipe Item: Recipe: Juicy Bear Burger (#35566)", 6535566},
    {"Recipe Item: Schematic: Rocket Boots Xtreme Lite (#35582)", 6535582},
    {"Recipe Item: Design: Figurine - Empyrean Tortoise (#35695)", 6535695},
    {"Recipe Item: Design: Figurine - Khorium Boar (#35696)", 6535696},
    {"Recipe Item: Design: Figurine - Crimson Serpent (#35697)", 6535697},
    {"Recipe Item: Design: Figurine - Shadowsong Panther (#35698)", 6535698},
    {"Recipe Item: Design: Figurine - Seaspray Albatross (#35699)", 6535699},
    {"Recipe Item: Design: Regal Nightseye (#35708)", 6535708},
    {"Recipe Item: Recipe: Guardian's Alchemist Stone (#35752)", 6535752},
    {"Recipe Item: Recipe: Sorcerer's Alchemist Stone (#35753)", 6535753},
    {"Recipe Item: Recipe: Redeemer's Alchemist Stone (#35754)", 6535754},
    {"Recipe Item: Recipe: Assassin's Alchemist Stone (#35755)", 6535755},
    {"Recipe Item: Formula: Enchant Cloak - Steelweave (#35756)", 6535756},
    {"Recipe Item: Design: Forceful Seaspray Emerald (#35765)", 6535765},
    {"Recipe Item: Design: Steady Seaspray Emerald (#35764)", 6535764},
    {"Recipe Item: Design: Reckless Pyrestone (#35762)", 6535762},
    {"Recipe Item: Design: Quick Lionseye (#35763)", 6535763},
    {"Recipe Item: Formula: Enchant Cloak - Mighty Armor (#44471)", 6544471},
    {"Recipe Item: Formula: Enchant Chest - Greater Dodge (#37336)", 6537336},
    {"Recipe Item: Formula: Enchant Cloak - Haste (#37348)", 6537348},
    {"Recipe Item: Formula: Enchant Cloak - Wisdom (#44488)", 6544488},
    {"Recipe Item: Formula: Enchant Boots - Tuskarr's Vitality (#44491)", 6544491},
    {"Recipe Item: Design: Purified Shadowsong Amethyst (#37504)", 6537504},
    {"Recipe Item: Pattern: Dress Shoes (#37915)", 6537915},
    {"Recipe Item: Pattern: Mycah's Botanical Bag (#38229)", 6538229},
    {"Recipe Item: Pattern: Haliscan Jacket (#38327)", 6538327},
    {"Recipe Item: Pattern: Haliscan Pantaloons (#38328)", 6538328},
    {"Recipe Item: Pattern: Trapper's Traveling Pack (#44509)", 6544509},
    {"Recipe Item: Pattern: Mammoth Mining Bag (#44510)", 6544510},
    {"Recipe Item: Pattern: Dark Arctic Boots (#38597)", 6538597},
    {"Recipe Item: Manual: Dense Frostweave Bandage (#39153)", 6539153},
    {"Recipe Item: Pattern: Bracers of Shackled Souls (#32430)", 6532430},
    {"Recipe Item: Recipe: Kungaloosh (#39644)", 6539644},
    {"Recipe Item: Design: Bold Scarlet Ruby (#41576)", 6541576},
    {"Recipe Item: Design: Mystic Sun Crystal (#41559)", 6541559},
    {"Recipe Item: Design: Mysterious Shadow Crystal (#41575)", 6541575},
    {"Recipe Item: Design: Defender's Shadow Crystal (#41574)", 6541574},
    {"Recipe Item: Design: Resplendent Huge Citrine (#41566)", 6541566},
    {"Recipe Item: Design: Deadly Huge Citrine (#41562)", 6541562},
    {"Recipe Item: Design: Lucent Huge Citrine (#41565)", 6541565},
    {"Recipe Item: Design: Durable Huge Citrine (#41563)", 6541563},
    {"Recipe Item: Design: Reckless Huge Citrine (#41561)", 6541561},
    {"Recipe Item: Design: Empowered Huge Citrine (#41564)", 6541564},
    {"Recipe Item: Design: Vivid Dark Jade (#41567)", 6541567},
    {"Recipe Item: Design: Steady Dark Jade (#41572)", 6541572},
    {"Recipe Item: Design: Seer's Dark Jade (#41568)", 6541568},
    {"Recipe Item: Design: Turbid Dark Jade (#41571)", 6541571},
    {"Recipe Item: Design: Opaque Dark Jade (#41573)", 6541573},
    {"Recipe Item: Design: Tense Dark Jade (#41570)", 6541570},
    {"Recipe Item: Design: Shattered Dark Jade (#41569)", 6541569},
    {"Recipe Item: Recipe: Mighty Arcane Protection Potion (#44564)", 6544564},
    {"Recipe Item: Recipe: Mighty Frost Protection Potion (#44566)", 6544566},
    {"Recipe Item: Recipe: Mighty Shadow Protection Potion (#44568)", 6544568},
    {"Recipe Item: Recipe: Mighty Fire Protection Potion (#44565)", 6544565},
    {"Recipe Item: Recipe: Mighty Nature Protection Potion (#44567)", 6544567},
    {"Recipe Item: Design: Stormy Chalcedony (#41560)", 6541560},
    {"Recipe Item: Design: Delicate Scarlet Ruby (#41577)", 6541577},
    {"Recipe Item: Design: Runed Scarlet Ruby (#41718)", 6541718},
    {"Recipe Item: Design: Subtle Scarlet Ruby (#41719)", 6541719},
    {"Recipe Item: Design: Flashing Scarlet Ruby (#41578)", 6541578},
    {"Recipe Item: Design: Fractured Scarlet Ruby (#41817)", 6541817},
    {"Recipe Item: Design: Precise Scarlet Ruby (#41790)", 6541790},
    {"Recipe Item: Design: Solid Sky Sapphire (#42138)", 6542138},
    {"Recipe Item: Design: Lustrous Sky Sapphire (#41581)", 6541581},
    {"Recipe Item: Design: Stormy Sky Sapphire (#41728)", 6541728},
    {"Recipe Item: Design: Smooth Autumn's Glow (#41720)", 6541720},
    {"Recipe Item: Design: Rigid Autumn's Glow (#41580)", 6541580},
    {"Recipe Item: Design: Thick Autumn's Glow (#41791)", 6541791},
    {"Recipe Item: Design: Mystic Autumn's Glow (#41727)", 6541727},
    {"Recipe Item: Design: Quick Autumn's Glow (#41579)", 6541579},
    {"Recipe Item: Design: Sovereign Twilight Opal (#41784)", 6541784},
    {"Recipe Item: Design: Shifting Twilight Opal (#41747)", 6541747},
    {"Recipe Item: Design: Tenuous Twilight Opal (#41785)", 6541785},
    {"Recipe Item: Design: Glowing Twilight Opal (#41725)", 6541725},
    {"Recipe Item: Design: Purified Twilight Opal (#41783)", 6541783},
    {"Recipe Item: Design: Royal Twilight Opal (#41701)", 6541701},
    {"Recipe Item: Design: Mysterious Twilight Opal (#41740)", 6541740},
    {"Recipe Item: Design: Infused Twilight Opal (#41796)", 6541796},
    {"Recipe Item: Design: Regal Twilight Opal (#41703)", 6541703},
    {"Recipe Item: Design: Defender's Twilight Opal (#41820)", 6541820},
    {"Recipe Item: Design: Puissant Twilight Opal (#41702)", 6541702},
    {"Recipe Item: Design: Guardian's Twilight Opal (#41726)", 6541726},
    {"Recipe Item: Design: Inscribed Monarch Topaz (#41789)", 6541789},
    {"Recipe Item: Design: Etched Monarch Topaz (#41777)", 6541777},
    {"Recipe Item: Design: Champion's Monarch Topaz (#41780)", 6541780},
    {"Recipe Item: Design: Resplendent Monarch Topaz (#41734)", 6541734},
    {"Recipe Item: Design: Deadly Monarch Topaz (#41794)", 6541794},
    {"Recipe Item: Design: Glinting Monarch Topaz (#41582)", 6541582},
    {"Recipe Item: Design: Lucent Monarch Topaz (#41733)", 6541733},
    {"Recipe Item: Design: Deft Monarch Topaz (#41792)", 6541792},
    {"Recipe Item: Design: Luminous Monarch Topaz (#41689)", 6541689},
    {"Recipe Item: Design: Potent Monarch Topaz (#41686)", 6541686},
    {"Recipe Item: Design: Veiled Monarch Topaz (#41688)", 6541688},
    {"Recipe Item: Design: Durable Monarch Topaz (#41730)", 6541730},
    {"Recipe Item: Design: Reckless Monarch Topaz (#41690)", 6541690},
    {"Recipe Item: Design: Wicked Monarch Topaz (#41721)", 6541721},
    {"Recipe Item: Design: Empowered Monarch Topaz (#41732)", 6541732},
    {"Recipe Item: Design: Stark Monarch Topaz (#41687)", 6541687},
    {"Recipe Item: Design: Stalwart Monarch Topaz (#41779)", 6541779},
    {"Recipe Item: Design: Glimmering Monarch Topaz (#41722)", 6541722},
    {"Recipe Item: Design: Accurate Monarch Topaz (#41818)", 6541818},
    {"Recipe Item: Design: Timeless Forest Emerald (#41795)", 6541795},
    {"Recipe Item: Design: Jagged Forest Emerald (#41723)", 6541723},
    {"Recipe Item: Design: Vivid Forest Emerald (#41698)", 6541698},
    {"Recipe Item: Design: Enduring Forest Emerald (#41697)", 6541697},
    {"Recipe Item: Design: Steady Forest Emerald (#41738)", 6541738},
    {"Recipe Item: Design: Forceful Forest Emerald (#41693)", 6541693},
    {"Recipe Item: Design: Seer's Forest Emerald (#41699)", 6541699},
    {"Recipe Item: Design: Misty Forest Emerald (#41781)", 6541781},
    {"Recipe Item: Design: Shining Forest Emerald (#41782)", 6541782},
    {"Recipe Item: Design: Turbid Forest Emerald (#41737)", 6541737},
    {"Recipe Item: Design: Intricate Forest Emerald (#41694)", 6541694},
    {"Recipe Item: Design: Sundered Forest Emerald (#41724)", 6541724},
    {"Recipe Item: Design: Lambent Forest Emerald (#41696)", 6541696},
    {"Recipe Item: Design: Opaque Forest Emerald (#41739)", 6541739},
    {"Recipe Item: Design: Energized Forest Emerald (#41692)", 6541692},
    {"Recipe Item: Design: Radiant Forest Emerald (#41819)", 6541819},
    {"Recipe Item: Design: Tense Forest Emerald (#41736)", 6541736},
    {"Recipe Item: Design: Shattered Forest Emerald (#41735)", 6541735},
    {"Recipe Item: Design: Fierce Monarch Topaz (#41793)", 6541793},
    {"Recipe Item: Design: Resolute Monarch Topaz (#41778)", 6541778},
    {"Recipe Item: Tome of Cold Weather Flight (#49177)", 6549177},
    {"Recipe Item: Plans: Reinforced Cobalt Shoulders (#41124)", 6541124},
    {"Recipe Item: Plans: Reinforced Cobalt Helm (#41123)", 6541123},
    {"Recipe Item: Plans: Reinforced Cobalt Legplates (#41120)", 6541120},
    {"Recipe Item: Plans: Reinforced Cobalt Chestpiece (#41122)", 6541122},
    {"Recipe Item: Pattern: Red Lumberjack Shirt (#42172)", 6542172},
    {"Recipe Item: Pattern: Blue Lumberjack Shirt (#42173)", 6542173},
    {"Recipe Item: Pattern: Yellow Lumberjack Shirt (#42174)", 6542174},
    {"Recipe Item: Pattern: Green Lumberjack Shirt (#42175)", 6542175},
    {"Recipe Item: Pattern: Red Workman's Shirt (#42177)", 6542177},
    {"Recipe Item: Pattern: Blue Workman's Shirt (#42176)", 6542176},
    {"Recipe Item: Pattern: Rustic Workman's Shirt (#42178)", 6542178},
    {"Recipe Item: Pattern: Green Workman's Shirt (#42179)", 6542179},
    {"Recipe Item: Pattern: Moonshroud (#42181)", 6542181},
    {"Recipe Item: Pattern: Ebonweave (#42180)", 6542180},
    {"Recipe Item: Pattern: Spellweave (#42182)", 6542182},
    {"Recipe Item: Pattern: Abyssal Bag (#42183)", 6542183},
    {"Recipe Item: Pattern: Glacial Bag (#42184)", 6542184},
    {"Recipe Item: Pattern: Mysterious Bag (#42185)", 6542185},
    {"Recipe Item: Pattern: Frostweave Bag (#42186)", 6542186},
    {"Recipe Item: Pattern: Brilliant Spellthread (#42187)", 6542187},
    {"Recipe Item: Pattern: Sapphire Spellthread (#42188)", 6542188},
    {"Recipe Item: Pattern: Wispcloak (#42189)", 6542189},
    {"Recipe Item: Pattern: Deathchill Cloak (#42190)", 6542190},
    {"Recipe Item: Pattern: Hat of Wintry Doom (#42191)", 6542191},
    {"Recipe Item: Pattern: Silky Iceshard Boots (#42192)", 6542192},
    {"Recipe Item: Pattern: Glacial Cord (#42193)", 6542193},
    {"Recipe Item: Pattern: Frostmoon Pants (#42194)", 6542194},
    {"Recipe Item: Pattern: Light Blessed Mittens (#42195)", 6542195},
    {"Recipe Item: Pattern: Aurora Slippers (#42196)", 6542196},
    {"Recipe Item: Pattern: Moonshroud Robe (#42197)", 6542197},
    {"Recipe Item: Pattern: Moonshroud Gloves (#42198)", 6542198},
    {"Recipe Item: Pattern: Ebonweave Robe (#42199)", 6542199},
    {"Recipe Item: Pattern: Ebonweave Gloves (#42200)", 6542200},
    {"Recipe Item: Pattern: Spellweave Robe (#42201)", 6542201},
    {"Recipe Item: Pattern: Spellweave Gloves (#42202)", 6542202},
    {"Recipe Item: Design: Bold Dragon's Eye (#42298)", 6542298},
    {"Recipe Item: Design: Delicate Dragon's Eye (#42301)", 6542301},
    {"Recipe Item: Design: Runed Dragon's Eye (#42309)", 6542309},
    {"Recipe Item: Design: Bright Dragon's Eye (#42299)", 6542299},
    {"Recipe Item: Design: Subtle Dragon's Eye (#42314)", 6542314},
    {"Recipe Item: Design: Flashing Dragon's Eye (#42302)", 6542302},
    {"Recipe Item: Design: Brilliant Dragon's Eye (#42300)", 6542300},
    {"Recipe Item: Design: Fractured Dragon's Eye (#42303)", 6542303},
    {"Recipe Item: Design: Lustrous Dragon's Eye (#42304)", 6542304},
    {"Recipe Item: Design: Mystic Dragon's Eye (#42305)", 6542305},
    {"Recipe Item: Design: Precise Dragon's Eye (#42306)", 6542306},
    {"Recipe Item: Design: Quick Dragon's Eye (#42307)", 6542307},
    {"Recipe Item: Design: Rigid Dragon's Eye (#42308)", 6542308},
    {"Recipe Item: Design: Smooth Dragon's Eye (#42310)", 6542310},
    {"Recipe Item: Design: Solid Dragon's Eye (#42311)", 6542311},
    {"Recipe Item: Design: Sparkling Dragon's Eye (#42312)", 6542312},
    {"Recipe Item: Design: Stormy Dragon's Eye (#42313)", 6542313},
    {"Recipe Item: Design: Thick Dragon's Eye (#42315)", 6542315},
    {"Recipe Item: Design: Titanium Impact Band (#42648)", 6542648},
    {"Recipe Item: Design: Titanium Earthguard Ring (#42649)", 6542649},
    {"Recipe Item: Design: Titanium Spellshock Ring (#42650)", 6542650},
    {"Recipe Item: Design: Titanium Impact Choker (#42651)", 6542651},
    {"Recipe Item: Design: Titanium Earthguard Chain (#42652)", 6542652},
    {"Recipe Item: Design: Titanium Spellshock Necklace (#42653)", 6542653},
    {"Recipe Item: Recipe: Fish Feast (#43017)", 6543017},
    {"Recipe Item: Recipe: Spicy Fried Herring (#43027)", 6543027},
    {"Recipe Item: Recipe: Rhinolicious Wormsteak (#43028)", 6543028},
    {"Recipe Item: Recipe: Critter Bites (#43029)", 6543029},
    {"Recipe Item: Recipe: Hearty Rhino (#43030)", 6543030},
    {"Recipe Item: Recipe: Snapper Extreme (#43031)", 6543031},
    {"Recipe Item: Recipe: Blackened Worg Steak (#43032)", 6543032},
    {"Recipe Item: Recipe: Cuttlesteak (#43033)", 6543033},
    {"Recipe Item: Recipe: Spiced Mammoth Treats (#43034)", 6543034},
    {"Recipe Item: Recipe: Blackened Dragonfin (#43035)", 6543035},
    {"Recipe Item: Recipe: Dragonfin Filet (#43036)", 6543036},
    {"Recipe Item: Recipe: Tracker Snacks (#43037)", 6543037},
    {"Recipe Item: Pattern: Fur Lining - Fire Resist (#44559)", 6544559},
    {"Recipe Item: Pattern: Fur Lining - Frost Resist (#44560)", 6544560},
    {"Recipe Item: Pattern: Fur Lining - Shadow Resist (#44561)", 6544561},
    {"Recipe Item: Pattern: Fur Lining - Nature Resist  (#44562)", 6544562},
    {"Recipe Item: Pattern: Fur Lining - Arcane Resist (#44563)", 6544563},
    {"Recipe Item: Design: Ring of Earthen Might (#43317)", 6543317},
    {"Recipe Item: Design: Ring of Scarlet Shadows (#43318)", 6543318},
    {"Recipe Item: Design: Windfire Band (#43319)", 6543319},
    {"Recipe Item: Design: Ring of Northern Tears (#43320)", 6543320},
    {"Recipe Item: Design: Savage Titanium Ring (#43485)", 6543485},
    {"Recipe Item: Design: Savage Titanium Band (#43497)", 6543497},
    {"Recipe Item: Recipe: Tasty Cupcake (#43507)", 6543507},
    {"Recipe Item: Recipe: Last Week's Mammoth (#43508)", 6543508},
    {"Recipe Item: Recipe: Bad Clams (#43509)", 6543509},
    {"Recipe Item: Recipe: Haunted Herring (#43510)", 6543510},
    {"Recipe Item: Recipe: Gigantic Feast (#43505)", 6543505},
    {"Recipe Item: Recipe: Small Feast (#43506)", 6543506},
    {"Recipe Item: Design: Titanium Frostguard Ring (#43597)", 6543597},
    {"Recipe Item: A Guide to Northern Cloth Scavenging (#43876)", 6543876},
    {"Recipe Item: Formula: Enchant Weapon - Accuracy (#44496)", 6544496},
    {"Recipe Item: Formula: Enchant Weapon - Berserking (#44492)", 6544492},
    {"Recipe Item: Formula: Enchant Weapon - Black Magic (#44495)", 6544495},
    {"Recipe Item: Pattern: Dragonscale Ammo Pouch (#44511)", 6544511},
    {"Recipe Item: Pattern: Nerubian Reinforced Quiver (#44512)", 6544512},
    {"Recipe Item: Formula: Enchant 2H Weapon - Massacre (#44483)", 6544483},
    {"Recipe Item: Formula: Enchant Chest - Powerful Stats (#44489)", 6544489},
    {"Recipe Item: Pattern: Eviscerator's Facemask (#44513)", 6544513},
    {"Recipe Item: Pattern: Eviscerator's Shoulderpads (#44514)", 6544514},
    {"Recipe Item: Pattern: Eviscerator's Chestguard (#44515)", 6544515},
    {"Recipe Item: Pattern: Eviscerator's Bindings (#44516)", 6544516},
    {"Recipe Item: Pattern: Eviscerator's Gauntlets (#44517)", 6544517},
    {"Recipe Item: Pattern: Eviscerator's Waistguard (#44518)", 6544518},
    {"Recipe Item: Formula: Enchant Weapon - Superior Potency (#44486)", 6544486},
    {"Recipe Item: Pattern: Eviscerator's Legguards (#44519)", 6544519},
    {"Recipe Item: Pattern: Eviscerator's Treads (#44520)", 6544520},
    {"Recipe Item: Formula: Enchant Weapon - Mighty Spellpower (#44487)", 6544487},
    {"Recipe Item: Pattern: Overcast Headguard (#44521)", 6544521},
    {"Recipe Item: Pattern: Overcast Spaulders (#44522)", 6544522},
    {"Recipe Item: Pattern: Overcast Chestguard (#44523)", 6544523},
    {"Recipe Item: Pattern: Overcast Bracers (#44524)", 6544524},
    {"Recipe Item: Pattern: Overcast Handwraps (#44525)", 6544525},
    {"Recipe Item: Pattern: Overcast Belt (#44526)", 6544526},
    {"Recipe Item: Pattern: Overcast Leggings (#44527)", 6544527},
    {"Recipe Item: Pattern: Overcast Boots (#44528)", 6544528},
    {"Recipe Item: Pattern: Swiftarrow Helm (#44530)", 6544530},
    {"Recipe Item: Pattern: Swiftarrow Shoulderguards (#44531)", 6544531},
    {"Recipe Item: Pattern: Swiftarrow Hauberk (#44532)", 6544532},
    {"Recipe Item: Pattern: Swiftarrow Bracers (#44533)", 6544533},
    {"Recipe Item: Pattern: Swiftarrow Gauntlets (#44534)", 6544534},
    {"Recipe Item: Pattern: Swiftarrow Belt (#44535)", 6544535},
    {"Recipe Item: Pattern: Swiftarrow Leggings (#44536)", 6544536},
    {"Recipe Item: Pattern: Swiftarrow Boots (#44537)", 6544537},
    {"Recipe Item: Pattern: Stormhide Crown (#44538)", 6544538},
    {"Recipe Item: Pattern: Stormhide Shoulders (#44539)", 6544539},
    {"Recipe Item: Pattern: Stormhide Hauberk (#44540)", 6544540},
    {"Recipe Item: Pattern: Stormhide Wristguards (#44541)", 6544541},
    {"Recipe Item: Pattern: Stormhide Grips (#44542)", 6544542},
    {"Recipe Item: Pattern: Stormhide Belt (#44543)", 6544543},
    {"Recipe Item: Pattern: Stormhide Legguards (#44544)", 6544544},
    {"Recipe Item: Pattern: Stormhide Stompers (#44545)", 6544545},
    {"Recipe Item: Pattern: Giantmaim Legguards (#44546)", 6544546},
    {"Recipe Item: Pattern: Giantmaim Bracers (#44547)", 6544547},
    {"Recipe Item: Pattern: Revenant's Breastplate (#44548)", 6544548},
    {"Recipe Item: Pattern: Revenant's Treads (#44549)", 6544549},
    {"Recipe Item: Pattern: Trollwoven Spaulders (#44550)", 6544550},
    {"Recipe Item: Pattern: Trollwoven Girdle (#44551)", 6544551},
    {"Recipe Item: Pattern: Earthgiving Legguards (#44552)", 6544552},
    {"Recipe Item: Pattern: Earthgiving Boots (#44553)", 6544553},
    {"Recipe Item: Formula: Enchant Boots - Greater Assault (#44490)", 6544490},
    {"Recipe Item: Formula: Enchant Bracer - Superior Spellpower (#44498)", 6544498},
    {"Recipe Item: Schematic: Mechano-hog (#44502)", 6544502},
    {"Recipe Item: Schematic: Mekgineer's Chopper (#44503)", 6544503},
    {"Recipe Item: Pattern: Polar Vest (#44584)", 6544584},
    {"Recipe Item: Pattern: Polar Cord (#44585)", 6544585},
    {"Recipe Item: Pattern: Polar Boots (#44586)", 6544586},
    {"Recipe Item: Pattern: Icy Scale Chestguard (#44587)", 6544587},
    {"Recipe Item: Pattern: Icy Scale Belt (#44588)", 6544588},
    {"Recipe Item: Pattern: Icy Scale Boots (#44589)", 6544589},
    {"Recipe Item: Tome of Dalaran Intellect (#44602)", 6544602},
    {"Recipe Item: Tome of Polymorph: Black Cat (#44709)", 6544709},
    {"Recipe Item: Tome of Dalaran Brilliance (#44714)", 6544714},
    {"Recipe Item: Tome of Polymorph: Rabbit (#44793)", 6544793},
    {"Recipe Item: Tome of Polymorph: Turkey (#44811)", 6544811},
    {"Recipe Item: Recipe: Pumpkin Pie (#44862)", 6544862},
    {"Recipe Item: Recipe: Slow-Roasted Turkey (#44861)", 6544861},
    {"Recipe Item: Recipe: Cranberry Chutney (#44858)", 6544858},
    {"Recipe Item: Recipe: Spice Bread Stuffing (#44860)", 6544860},
    {"Recipe Item: Recipe: Candied Sweet Potato (#44859)", 6544859},
    {"Recipe Item: Pattern: Windripper Boots (#44932)", 6544932},
    {"Recipe Item: Pattern: Windripper Leggings (#44933)", 6544933},
    {"Recipe Item: Plans: Titanium Plating (#44937)", 6544937},
    {"Recipe Item: Formula: Enchant Bracer - Major Stamina (#44944)", 6544944},
    {"Recipe Item: Formula: Enchant Weapon - Titanguard (#44945)", 6544945},
    {"Recipe Item: Recipe: Worg Tartare (#44954)", 6544954},
    {"Recipe Item: Formula: Enchant Staff - Greater Spellpower (#45059)", 6545059},
    {"Recipe Item: Plans: Belt of the Titans (#45088)", 6545088},
    {"Recipe Item: Plans: Battlelord's Plate Boots (#45089)", 6545089},
    {"Recipe Item: Plans: Plate Girdle of Righteousness (#45090)", 6545090},
    {"Recipe Item: Plans: Treads of Destiny (#45091)", 6545091},
    {"Recipe Item: Plans: Indestructible Plate Girdle (#45092)", 6545092},
    {"Recipe Item: Plans: Spiked Deathdealers (#45093)", 6545093},
    {"Recipe Item: Pattern: Belt of Dragons (#45094)", 6545094},
    {"Recipe Item: Pattern: Boots of Living Scale (#45095)", 6545095},
    {"Recipe Item: Pattern: Blue Belt of Chaos (#45096)", 6545096},
    {"Recipe Item: Pattern: Lightning Grounded Boots (#45097)", 6545097},
    {"Recipe Item: Pattern: Death-warmed Belt (#45098)", 6545098},
    {"Recipe Item: Pattern: Footpads of Silence (#45099)", 6545099},
    {"Recipe Item: Pattern: Belt of Arctic Life (#45100)", 6545100},
    {"Recipe Item: Pattern: Boots of Wintry Endurance (#45101)", 6545101},
    {"Recipe Item: Pattern: Sash of Ancient Power (#45102)", 6545102},
    {"Recipe Item: Pattern: Spellslinger's Slippers (#45103)", 6545103},
    {"Recipe Item: Pattern: Cord of the White Dawn (#45104)", 6545104},
    {"Recipe Item: Pattern: Savior's Slippers (#45105)", 6545105},
    {"Recipe Item: Pattern: Emerald Bag (#45774)", 6545774},
    {"Recipe Item: Technique: Rituals of the New Moon (#46108)", 6546108},
    {"Recipe Item: Formula: Enchant Weapon - Blade Ward (#46027)", 6546027},
    {"Recipe Item: Formula: Enchant Weapon - Blood Draining (#46348)", 6546348},
    {"Recipe Item: Recipe: Bread of the Dead (#46710)", 6546710},
    {"Recipe Item: Recipe: Candied Sweet Potato (#46806)", 6546806},
    {"Recipe Item: Recipe: Cranberry Chutney (#46805)", 6546805},
    {"Recipe Item: Recipe: Pumpkin Pie (#46804)", 6546804},
    {"Recipe Item: Recipe: Slow-Roasted Turkey (#46807)", 6546807},
    {"Recipe Item: Recipe: Spice Bread Stuffing (#46803)", 6546803},
    {"Recipe Item: Design: Enduring Eye of Zul (#46897)", 6546897},
    {"Recipe Item: Design: Steady Eye of Zul (#46898)", 6546898},
    {"Recipe Item: Design: Vivid Eye of Zul (#46899)", 6546899},
    {"Recipe Item: Design: Dazzling Eye of Zul (#46900)", 6546900},
    {"Recipe Item: Design: Jagged Eye of Zul (#46901)", 6546901},
    {"Recipe Item: Design: Timeless Eye of Zul (#46902)", 6546902},
    {"Recipe Item: Design: Seer's Eye of Zul (#46903)", 6546903},
    {"Recipe Item: Design: Forceful Eye of Zul (#46904)", 6546904},
    {"Recipe Item: Design: Misty Eye of Zul (#46905)", 6546905},
    {"Recipe Item: Design: Sundered Eye of Zul (#46906)", 6546906},
    {"Recipe Item: Design: Shining Eye of Zul (#46907)", 6546907},
    {"Recipe Item: Design: Tense Eye of Zul (#46908)", 6546908},
    {"Recipe Item: Design: Lambent Eye of Zul (#46909)", 6546909},
    {"Recipe Item: Design: Intricate Eye of Zul (#46910)", 6546910},
    {"Recipe Item: Design: Radiant Eye of Zul (#46911)", 6546911},
    {"Recipe Item: Design: Energized Eye of Zul (#46912)", 6546912},
    {"Recipe Item: Design: Shattered Eye of Zul (#46913)", 6546913},
    {"Recipe Item: Design: Opaque Eye of Zul (#46914)", 6546914},
    {"Recipe Item: Design: Turbid Eye of Zul (#46915)", 6546915},
    {"Recipe Item: Design: Runed Cardinal Ruby (#46916)", 6546916},
    {"Recipe Item: Design: Bold Cardinal Ruby (#46917)", 6546917},
    {"Recipe Item: Design: Delicate Cardinal Ruby (#46918)", 6546918},
    {"Recipe Item: Design: Bright Cardinal Ruby (#46919)", 6546919},
    {"Recipe Item: Design: Precise Cardinal Ruby (#46920)", 6546920},
    {"Recipe Item: Design: Fractured Cardinal Ruby (#46921)", 6546921},
    {"Recipe Item: Design: Subtle Cardinal Ruby (#46922)", 6546922},
    {"Recipe Item: Design: Flashing Cardinal Ruby (#46923)", 6546923},
    {"Recipe Item: Design: Solid Majestic Zircon (#46924)", 6546924},
    {"Recipe Item: Design: Sparkling Majestic Zircon (#46925)", 6546925},
    {"Recipe Item: Design: Stormy Majestic Zircon (#46926)", 6546926},
    {"Recipe Item: Design: Lustrous Majestic Zircon (#46927)", 6546927},
    {"Recipe Item: Design: Rigid King's Amber (#46928)", 6546928},
    {"Recipe Item: Design: Smooth King's Amber (#46929)", 6546929},
    {"Recipe Item: Design: Brilliant King's Amber (#46930)", 6546930},
    {"Recipe Item: Design: Thick King's Amber (#46931)", 6546931},
    {"Recipe Item: Design: Mystic King's Amber (#46932)", 6546932},
    {"Recipe Item: Design: Quick King's Amber (#46933)", 6546933},
    {"Recipe Item: Design: Balanced Dreadstone (#46934)", 6546934},
    {"Recipe Item: Design: Sovereign Dreadstone (#46935)", 6546935},
    {"Recipe Item: Design: Glowing Dreadstone (#46936)", 6546936},
    {"Recipe Item: Design: Purified Dreadstone (#46937)", 6546937},
    {"Recipe Item: Design: Shifting Dreadstone (#46938)", 6546938},
    {"Recipe Item: Design: Royal Dreadstone (#46939)", 6546939},
    {"Recipe Item: Design: Regal Dreadstone (#46940)", 6546940},
    {"Recipe Item: Design: Defender's Dreadstone (#46941)", 6546941},
    {"Recipe Item: Design: Guardian's Dreadstone (#46942)", 6546942},
    {"Recipe Item: Design: Mysterious Dreadstone (#46943)", 6546943},
    {"Recipe Item: Design: Puissant Dreadstone (#46944)", 6546944},
    {"Recipe Item: Design: Infused Dreadstone (#46945)", 6546945},
    {"Recipe Item: Design: Tenuous Dreadstone (#46946)", 6546946},
    {"Recipe Item: Design: Luminous Ametrine (#46947)", 6546947},
    {"Recipe Item: Design: Inscribed Ametrine (#46948)", 6546948},
    {"Recipe Item: Design: Deadly Ametrine (#46949)", 6546949},
    {"Recipe Item: Design: Potent Ametrine (#46950)", 6546950},
    {"Recipe Item: Design: Veiled Ametrine (#46951)", 6546951},
    {"Recipe Item: Design: Durable Ametrine (#46952)", 6546952},
    {"Recipe Item: Design: Etched Ametrine (#46953)", 6546953},
    {"Recipe Item: Design: Pristine Ametrine (#46956)", 6546956},
    {"Recipe Item: Design: Reckless Ametrine (#47007)", 6547007},
    {"Recipe Item: Design: Glinting Ametrine (#47008)", 6547008},
    {"Recipe Item: Design: Accurate Ametrine (#47010)", 6547010},
    {"Recipe Item: Design: Wicked Ametrine (#47011)", 6547011},
    {"Recipe Item: Design: Glimmering Ametrine (#47012)", 6547012},
    {"Recipe Item: Design: Champion's Ametrine (#47015)", 6547015},
    {"Recipe Item: Design: Empowered Ametrine (#47016)", 6547016},
    {"Recipe Item: Design: Stalwart Ametrine (#47017)", 6547017},
    {"Recipe Item: Design: Resplendent Ametrine (#47018)", 6547018},
    {"Recipe Item: Design: Fierce Ametrine (#47019)", 6547019},
    {"Recipe Item: Design: Deft Ametrine (#47020)", 6547020},
    {"Recipe Item: Design: Lucent Ametrine (#47021)", 6547021},
    {"Recipe Item: Design: Resolute Ametrine (#47022)", 6547022},
    {"Recipe Item: Design: Stark Ametrine (#47023)", 6547023},
    {"Recipe Item: Recipe: Flask of the North (#47507)", 6547507},
    {"Recipe Item: Pattern: Royal Moonshroud Robe (#47657)", 6547657},
    {"Recipe Item: Pattern: Royal Moonshroud Bracers (#47656)", 6547656},
    {"Recipe Item: Pattern: Merlin's Robe (#47655)", 6547655},
    {"Recipe Item: Pattern: Bejeweled Wizard's Bracers (#47654)", 6547654},
    {"Recipe Item: Pattern: Ensorcelled Nerubian Breastplate (#47628)", 6547628},
    {"Recipe Item: Pattern: Black Chitin Bracers (#47629)", 6547629},
    {"Recipe Item: Pattern: Crusader's Dragonscale Breastplate (#47630)", 6547630},
    {"Recipe Item: Pattern: Crusader's Dragonscale Bracers (#47631)", 6547631},
    {"Recipe Item: Pattern: Lunar Eclipse Robes (#47632)", 6547632},
    {"Recipe Item: Pattern: Moonshadow Armguards (#47633)", 6547633},
    {"Recipe Item: Pattern: Knightbane Carapace (#47634)", 6547634},
    {"Recipe Item: Pattern: Bracers of Swift Death (#47635)", 6547635},
    {"Recipe Item: Plans: Breastplate of the White Knight (#47622)", 6547622},
    {"Recipe Item: Plans: Saronite Swordbreakers (#47623)", 6547623},
    {"Recipe Item: Plans: Titanium Razorplate (#47624)", 6547624},
    {"Recipe Item: Plans: Titanium Spikeguards (#47625)", 6547625},
    {"Recipe Item: Plans: Sunforged Breastplate (#47626)", 6547626},
    {"Recipe Item: Plans: Sunforged Bracers (#47627)", 6547627},
    {"Recipe Item: Plans: Breastplate of the White Knight (#47640)", 6547640},
    {"Recipe Item: Plans: Saronite Swordbreakers (#47641)", 6547641},
    {"Recipe Item: Plans: Titanium Razorplate (#47644)", 6547644},
    {"Recipe Item: Plans: Titanium Spikeguards (#47645)", 6547645},
    {"Recipe Item: Plans: Sunforged Breastplate (#47643)", 6547643},
    {"Recipe Item: Plans: Sunforged Bracers (#47642)", 6547642},
    {"Recipe Item: Pattern: Ensorcelled Nerubian Breastplate (#47650)", 6547650},
    {"Recipe Item: Pattern: Black Chitin Bracers (#47646)", 6547646},
    {"Recipe Item: Pattern: Crusader's Dragonscale Breastplate (#47649)", 6547649},
    {"Recipe Item: Pattern: Bracers of Swift Death (#47647)", 6547647},
    {"Recipe Item: Pattern: Lunar Eclipse Robes (#47652)", 6547652},
    {"Recipe Item: Pattern: Moonshadow Armguards (#47653)", 6547653},
    {"Recipe Item: Pattern: Knightbane Carapace (#47651)", 6547651},
    {"Recipe Item: Pattern: Crusader's Dragonscale Bracers (#47648)", 6547648},
    {"Recipe Item: Pattern: Royal Moonshroud Robe (#47636)", 6547636},
    {"Recipe Item: Pattern: Bejeweled Wizard's Bracers (#47639)", 6547639},
    {"Recipe Item: Pattern: Merlin's Robe (#47638)", 6547638},
    {"Recipe Item: Pattern: Royal Moonshroud Bracers (#47637)", 6547637},
    {"Recipe Item: Schematic: Jeeves (#49050)", 6549050},
    {"Recipe Item: Design: Nightmare Tear (#49112)", 6549112},
    {"Recipe Item: Pattern: Leggings of Woven Death (#49953)", 6549953},
    {"Recipe Item: Pattern: Deathfrost Boots (#49954)", 6549954},
    {"Recipe Item: Pattern: Lightweave Leggings (#49955)", 6549955},
    {"Recipe Item: Pattern: Sandals of Consecration (#49956)", 6549956},
    {"Recipe Item: Pattern: Legwraps of Unleashed Nature (#49957)", 6549957},
    {"Recipe Item: Pattern: Blessed Cenarion Boots (#49958)", 6549958},
    {"Recipe Item: Pattern: Bladeborn Leggings (#49959)", 6549959},
    {"Recipe Item: Pattern: Footpads of Impending Death (#49961)", 6549961},
    {"Recipe Item: Pattern: Lightning-Infused Leggings (#49962)", 6549962},
    {"Recipe Item: Pattern: Earthsoul Boots (#49963)", 6549963},
    {"Recipe Item: Pattern: Draconic Bonesplinter Legguards (#49965)", 6549965},
    {"Recipe Item: Pattern: Rock-Steady Treads (#49966)", 6549966},
    {"Recipe Item: Plans: Puresteel Legplates (#49969)", 6549969},
    {"Recipe Item: Plans: Protectors of Life (#49970)", 6549970},
    {"Recipe Item: Plans: Legplates of Painful Death (#49971)", 6549971},
    {"Recipe Item: Plans: Hellfrozen Bonegrinders (#49972)", 6549972},
    {"Recipe Item: Plans: Pillars of Might (#49973)", 6549973},
    {"Recipe Item: Plans: Boots of Kingly Upheaval (#49974)", 6549974},
    {"Recipe Item: Technique: Glyph of Rapid Rejuvenation (#50167)", 6550167},
    {"Recipe Item: Technique: Glyph of Eternal Water (#50166)", 6550166},
    {"Recipe Item: Technique: Glyph of Quick Decay (#50168)", 6550168},
    {"Recipe Item: Formula: Enchant Gloves - Angler (#50406)", 6550406},
    {"Recipe Item: Plans: Shatter Rounds (#52022)", 6552022},
    {"Recipe Item: Plans: Iceblade Arrow (#52023)", 6552023},
    {"Recipe Item: Pattern: Frosty Flying Carpet (#54798)", 6554798},
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
    { 600, 6003122 }, // "Recipe: Codex of Holy Word: Shield III (#3122)"
    { 1094, 6004200 }, // "Recipe: Grimoire of Immolate III (#4200)"
    { 1122, 6009214 }, // "Recipe: Grimoire of Inferno (#9214)"
    { 2158, 6002406 }, // "Recipe: Pattern: Fine Leather Boots (#2406)"
    { 2163, 6002407 }, // "Recipe: Pattern: White Leather Jerkin (#2407)"
    { 2164, 6002408 }, // "Recipe: Pattern: Fine Leather Gloves (#2408)"
    { 2169, 6002409 }, // "Recipe: Pattern: Dark Leather Tunic (#2409)"
    { 2333, 6003396 }, // "Recipe: Elixir of Lesser Agility (#3396)"
    { 2335, 6002555 }, // "Recipe: Swiftness Potion (#2555)"
    { 2389, 6002598 }, // "Recipe: Pattern: Red Linen Robe (#2598)"
    { 2403, 6002601 }, // "Recipe: Pattern: Gray Woolen Robe (#2601)"
    { 2542, 6002697 }, // "Recipe: Goretusk Liver Pie (#2697)"
    { 2543, 6000728 }, // "Recipe: Westfall Stew (#728)"
    { 2545, 6002698 }, // "Recipe: Cooked Crab Claw (#2698)"
    { 2547, 6002699 }, // "Recipe: Redridge Goulash (#2699)"
    { 2548, 6002700 }, // "Recipe: Succulent Pork Ribs (#2700)"
    { 2549, 6002701 }, // "Recipe: Seasoned Wolf Kabob (#2701)"
    { 2667, 6002881 }, // "Recipe: Plans: Runed Copper Breastplate (#2881)"
    { 2673, 6005578 }, // "Recipe: Plans: Silvered Bronze Breastplate (#5578)"
    { 2795, 6002889 }, // "Recipe: Beer Basted Boar Ribs (#2889)"
    { 3172, 6003393 }, // "Recipe: Minor Magic Resistance Potion (#3393)"
    { 3174, 6003394 }, // "Recipe: Potion of Curing (#3394)"
    { 3175, 6003395 }, // "Recipe: Limited Invulnerability Potion (#3395)"
    { 3188, 6006211 }, // "Recipe: Elixir of Ogre's Strength (#6211)"
    { 3230, 6002553 }, // "Recipe: Elixir of Minor Agility (#2553)"
    { 3295, 6002883 }, // "Recipe: Plans: Deadly Bronze Poniard (#2883)"
    { 3297, 6003608 }, // "Recipe: Plans: Mighty Iron Hammer (#3608)"
    { 3321, 6003609 }, // "Recipe: Plans: Copper Chain Vest (#3609)"
    { 3325, 6003610 }, // "Recipe: Plans: Gemmed Copper Gauntlets (#3610)"
    { 3330, 6002882 }, // "Recipe: Plans: Silvered Bronze Shoulders (#2882)"
    { 3334, 6003611 }, // "Recipe: Plans: Green Iron Boots (#3611)"
    { 3336, 6003612 }, // "Recipe: Plans: Green Iron Gauntlets (#3612)"
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
    { 3492, 6012162 }, // "Recipe: Plans: Hardened Iron Shortsword (#12162)"
    { 3493, 6003866 }, // "Recipe: Plans: Jade Serpentblade (#3866)"
    { 3494, 6010858 }, // "Recipe: Plans: Solid Iron Maul (#10858)"
    { 3495, 6003867 }, // "Recipe: Plans: Golden Iron Destroyer (#3867)"
    { 3496, 6012163 }, // "Recipe: Plans: Moonsteel Broadsword (#12163)"
    { 3497, 6003868 }, // "Recipe: Plans: Frost Tiger Blade (#3868)"
    { 3498, 6012164 }, // "Recipe: Plans: Massive Iron Axe (#12164)"
    { 3500, 6003869 }, // "Recipe: Plans: Shadow Crescent Axe (#3869)"
    { 3503, 6006047 }, // "Recipe: Plans: Golden Scale Coif (#6047)"
    { 3504, 6003870 }, // "Recipe: Plans: Green Iron Shoulders (#3870)"
    { 3505, 6003871 }, // "Recipe: Plans: Golden Scale Shoulders (#3871)"
    { 3507, 6003872 }, // "Recipe: Plans: Golden Scale Leggings (#3872)"
    { 3511, 6003873 }, // "Recipe: Plans: Golden Scale Cuirass (#3873)"
    { 3513, 6003874 }, // "Recipe: Plans: Polished Steel Boots (#3874)"
    { 3515, 6003875 }, // "Recipe: Plans: Golden Scale Boots (#3875)"
    { 3758, 6004292 }, // "Recipe: Pattern: Green Woolen Bag (#4292)"
    { 3762, 6004293 }, // "Recipe: Pattern: Hillman's Leather Vest (#4293)"
    { 3765, 6007360 }, // "Recipe: Pattern: Dark Leather Gloves (#7360)"
    { 3767, 6004294 }, // "Recipe: Pattern: Hillman's Belt (#4294)"
    { 3769, 6004296 }, // "Recipe: Pattern: Dark Leather Shoulders (#4296)"
    { 3771, 6004297 }, // "Recipe: Pattern: Barbaric Gloves (#4297)"
    { 3772, 6007613 }, // "Recipe: Pattern: Green Leather Armor (#7613)"
    { 3773, 6004299 }, // "Recipe: Pattern: Guardian Armor (#4299)"
    { 3775, 6004298 }, // "Recipe: Pattern: Guardian Belt (#4298)"
    { 3777, 6004300 }, // "Recipe: Pattern: Guardian Leather Bracers (#4300)"
    { 3778, 6014635 }, // "Recipe: Pattern: Gem-studded Leather Belt (#14635)"
    { 3779, 6004301 }, // "Recipe: Pattern: Barbaric Belt (#4301)"
    { 3844, 6004346 }, // "Recipe: Pattern: Heavy Woolen Cloak (#4346)"
    { 3847, 6004345 }, // "Recipe: Pattern: Red Woolen Boots (#4345)"
    { 3849, 6004347 }, // "Recipe: Pattern: Reinforced Woolen Shoulders (#4347)"
    { 3851, 6004349 }, // "Recipe: Pattern: Phoenix Pants (#4349)"
    { 3854, 6007114 }, // "Recipe: Pattern: Azure Silk Gloves (#7114)"
    { 3856, 6004350 }, // "Recipe: Pattern: Spider Silk Slippers (#4350)"
    { 3857, 6014630 }, // "Recipe: Pattern: Enchanter's Cowl (#14630)"
    { 3858, 6004351 }, // "Recipe: Pattern: Shadow Hood (#4351)"
    { 3860, 6004352 }, // "Recipe: Pattern: Boots of the Enchanter (#4352)"
    { 3862, 6004355 }, // "Recipe: Pattern: Icy Cloak (#4355)"
    { 3863, 6004353 }, // "Recipe: Pattern: Spider Belt (#4353)"
    { 3864, 6004356 }, // "Recipe: Pattern: Star Belt (#4356)"
    { 3868, 6004348 }, // "Recipe: Pattern: Phoenix Gloves (#4348)"
    { 3869, 6014627 }, // "Recipe: Pattern: Bright Yellow Shirt (#14627)"
    { 3870, 6006401 }, // "Recipe: Pattern: Dark Silk Shirt (#6401)"
    { 3872, 6004354 }, // "Recipe: Pattern: Rich Purple Silk Shirt (#4354)"
    { 3873, 6010728 }, // "Recipe: Pattern: Black Swashbuckler's Shirt (#10728)"
    { 3928, 6004408 }, // "Recipe: Schematic: Mechanical Squirrel Box (#4408)"
    { 3933, 6004409 }, // "Recipe: Schematic: Small Seaforium Charge (#4409)"
    { 3939, 6013309 }, // "Recipe: Schematic: Lovingly Crafted Boomstick (#13309)"
    { 3940, 6004410 }, // "Recipe: Schematic: Shadow Goggles (#4410)"
    { 3944, 6004411 }, // "Recipe: Schematic: Flame Deflector (#4411)"
    { 3952, 6014639 }, // "Recipe: Schematic: Minor Recombobulator (#14639)"
    { 3954, 6004412 }, // "Recipe: Schematic: Moonsight Rifle (#4412)"
    { 3957, 6013308 }, // "Recipe: Schematic: Ice Deflector (#13308)"
    { 3959, 6004413 }, // "Recipe: Schematic: Discombobulator Ray (#4413)"
    { 3960, 6004414 }, // "Recipe: Schematic: Portable Bronze Mortar (#4414)"
    { 3966, 6004415 }, // "Recipe: Schematic: Craftsman's Monocle (#4415)"
    { 3968, 6004416 }, // "Recipe: Schematic: Goblin Land Mine (#4416)"
    { 3969, 6013311 }, // "Recipe: Schematic: Mechanical Dragonling (#13311)"
    { 3971, 6007742 }, // "Recipe: Schematic: Gnomish Cloaking Device (#7742)"
    { 3972, 6004417 }, // "Recipe: Schematic: Large Seaforium Charge (#4417)"
    { 3979, 6013310 }, // "Recipe: Schematic: Accurate Scope (#13310)"
    { 4094, 6004609 }, // "Recipe: Barbecued Buzzard Wing (#4609)"
    { 4096, 6013287 }, // "Recipe: Pattern: Raptor Hide Harness (#13287)"
    { 4097, 6013288 }, // "Recipe: Pattern: Raptor Hide Belt (#13288)"
    { 4508, 6004597 }, // "Recipe: Discolored Healing Potion (#4597)"
    { 4942, 6004624 }, // "Recipe: Lesser Stoneshield Potion (#4624)"
    { 5244, 6005083 }, // "Recipe: Pattern: Kodo Hide Bag (#5083)"
    { 6063, 6008993 }, // "Recipe: Codex of Shadow Protection II (#8993)"
    { 6412, 6005482 }, // "Recipe: Kaldorei Spider Kabob (#5482)"
    { 6413, 6005483 }, // "Recipe: Scorpid Surprise (#5483)"
    { 6414, 6005484 }, // "Recipe: Roasted Kodo Meat (#5484)"
    { 6415, 6005485 }, // "Recipe: Fillet of Frenzy (#5485)"
    { 6416, 6005486 }, // "Recipe: Strider Stew (#5486)"
    { 6417, 6005487 }, // "Recipe: Dig Rat Stew (#5487)"
    { 6418, 6005488 }, // "Recipe: Crispy Lizard Tail (#5488)"
    { 6419, 6005489 }, // "Recipe: Lean Venison (#5489)"
    { 6501, 6005528 }, // "Recipe: Clam Chowder (#5528)"
    { 6518, 6005543 }, // "Recipe: Plans: Iridescent Hammer (#5543)"
    { 6617, 6005640 }, // "Recipe: Rage Potion (#5640)"
    { 6618, 6005643 }, // "Recipe: Great Rage Potion (#5643)"
    { 6624, 6005642 }, // "Recipe: Free Action Potion (#5642)"
    { 6686, 6005771 }, // "Recipe: Pattern: Red Linen Bag (#5771)"
    { 6688, 6005772 }, // "Recipe: Pattern: Red Woolen Bag (#5772)"
    { 6692, 6005773 }, // "Recipe: Pattern: Robes of Arcana (#5773)"
    { 6693, 6005774 }, // "Recipe: Pattern: Green Silk Pack (#5774)"
    { 6695, 6005775 }, // "Recipe: Pattern: Black Silk Pack (#5775)"
    { 6702, 6005786 }, // "Recipe: Pattern: Murloc Scale Belt (#5786)"
    { 6703, 6005787 }, // "Recipe: Pattern: Murloc Scale Breastplate (#5787)"
    { 6704, 6005788 }, // "Recipe: Pattern: Thick Murloc Armor (#5788)"
    { 6705, 6005789 }, // "Recipe: Pattern: Murloc Scale Bracers (#5789)"
    { 7133, 6005972 }, // "Recipe: Pattern: Fine Leather Pants (#5972)"
    { 7149, 6005973 }, // "Recipe: Pattern: Barbaric Leggings (#5973)"
    { 7153, 6005974 }, // "Recipe: Pattern: Guardian Cloak (#5974)"
    { 7213, 6006039 }, // "Recipe: Giant Clam Scorcho (#6039)"
    { 7221, 6006044 }, // "Recipe: Plans: Iron Shield Spike (#6044)"
    { 7222, 6006045 }, // "Recipe: Plans: Iron Counterweight (#6045)"
    { 7224, 6006046 }, // "Recipe: Plans: Steel Weapon Chain (#6046)"
    { 7255, 6006053 }, // "Recipe: Holy Protection Potion (#6053)"
    { 7256, 6006054 }, // "Recipe: Shadow Protection Potion (#6054)"
    { 7257, 6006055 }, // "Recipe: Fire Protection Potion (#6055)"
    { 7258, 6006056 }, // "Recipe: Frost Protection Potion (#6056)"
    { 7259, 6006057 }, // "Recipe: Nature Protection Potion (#6057)"
    { 7443, 6006342 }, // "Recipe: Formula: Enchant Chest - Minor Mana (#6342)"
    { 7629, 6006271 }, // "Recipe: Pattern: Red Linen Vest (#6271)"
    { 7630, 6006270 }, // "Recipe: Pattern: Blue Linen Vest (#6270)"
    { 7633, 6006272 }, // "Recipe: Pattern: Blue Linen Robe (#6272)"
    { 7639, 6006274 }, // "Recipe: Pattern: Blue Overalls (#6274)"
    { 7643, 6006275 }, // "Recipe: Pattern: Greater Adept's Robe (#6275)"
    { 7751, 6006325 }, // "Recipe: Brilliant Smallfish (#6325)"
    { 7752, 6006326 }, // "Recipe: Slitherskin Mackerel (#6326)"
    { 7753, 6006328 }, // "Recipe: Longjaw Mud Snapper (#6328)"
    { 7754, 6006329 }, // "Recipe: Loch Frenzy Delight (#6329)"
    { 7755, 6006330 }, // "Recipe: Bristle Whisker Catfish (#6330)"
    { 7766, 6006344 }, // "Recipe: Formula: Enchant Bracer - Minor Spirit (#6344)"
    { 7776, 6006346 }, // "Recipe: Formula: Enchant Chest - Lesser Mana (#6346)"
    { 7782, 6006347 }, // "Recipe: Formula: Enchant Bracer - Minor Strength (#6347)"
    { 7786, 6006348 }, // "Recipe: Formula: Enchant Weapon - Minor Beastslayer (#6348)"
    { 7793, 6006349 }, // "Recipe: Formula: Enchant 2H Weapon - Lesser Intellect (#6349)"
    { 7827, 6006368 }, // "Recipe: Rainbow Fin Albacore (#6368)"
    { 7828, 6006369 }, // "Recipe: Rockscale Cod (#6369)"
    { 7859, 6006375 }, // "Recipe: Formula: Enchant Bracer - Lesser Spirit (#6375)"
    { 7867, 6006377 }, // "Recipe: Formula: Enchant Boots - Minor Agility (#6377)"
    { 7892, 6006390 }, // "Recipe: Pattern: Stylish Blue Shirt (#6390)"
    { 7893, 6006391 }, // "Recipe: Pattern: Stylish Green Shirt (#6391)"
    { 7929, 6016112 }, // "Recipe: Manual: Heavy Silk Bandage (#16112)"
    { 7935, 6006454 }, // "Recipe: Manual: Strong Anti-Venom (#6454)"
    { 7953, 6006474 }, // "Recipe: Pattern: Deviate Scale Cloak (#6474)"
    { 7954, 6006475 }, // "Recipe: Pattern: Deviate Scale Gloves (#6475)"
    { 7955, 6006476 }, // "Recipe: Pattern: Deviate Scale Belt (#6476)"
    { 8238, 6006661 }, // "Recipe: Savory Deviate Delight (#6661)"
    { 8240, 6006663 }, // "Recipe: Elixir of Giant Growth (#6663)"
    { 8243, 6006672 }, // "Recipe: Schematic: Flash Bomb (#6672)"
    { 8322, 6006710 }, // "Recipe: Pattern: Moonglow Vest (#6710)"
    { 8339, 6006716 }, // "Recipe: Schematic: EZ-Thro Dynamite (#6716)"
    { 8367, 6006735 }, // "Recipe: Plans: Ironforge Breastplate (#6735)"
    { 8607, 6006892 }, // "Recipe: Smoked Bear Meat (#6892)"
    { 8780, 6007092 }, // "Recipe: Pattern: Hands of Darkness (#7092)"
    { 8782, 6007091 }, // "Recipe: Pattern: Truefaith Gloves (#7091)"
    { 8784, 6007090 }, // "Recipe: Pattern: Green Silk Armor (#7090)"
    { 8786, 6007089 }, // "Recipe: Pattern: Azure Silk Cloak (#7089)"
    { 8789, 6007087 }, // "Recipe: Pattern: Crimson Silk Cloak (#7087)"
    { 8793, 6007084 }, // "Recipe: Pattern: Crimson Silk Shoulders (#7084)"
    { 8795, 6007085 }, // "Recipe: Pattern: Azure Shoulders (#7085)"
    { 8797, 6007086 }, // "Recipe: Pattern: Earthen Silk Belt (#7086)"
    { 8802, 6007088 }, // "Recipe: Pattern: Crimson Silk Robe (#7088)"
    { 9064, 6007288 }, // "Recipe: Pattern: Rugged Leather Pants (#7288)"
    { 9070, 6007289 }, // "Recipe: Pattern: Black Whelp Cloak (#7289)"
    { 9072, 6007290 }, // "Recipe: Pattern: Red Whelp Gloves (#7290)"
    { 9146, 6007361 }, // "Recipe: Pattern: Herbalist's Gloves (#7361)"
    { 9147, 6007362 }, // "Recipe: Pattern: Earthen Leather Shoulders (#7362)"
    { 9148, 6007363 }, // "Recipe: Pattern: Pilferer's Gloves (#7363)"
    { 9149, 6007364 }, // "Recipe: Pattern: Heavy Earthen Gloves (#7364)"
    { 9195, 6007449 }, // "Recipe: Pattern: Dusky Leather Leggings (#7449)"
    { 9197, 6007450 }, // "Recipe: Pattern: Green Whelp Armor (#7450)"
    { 9202, 6007451 }, // "Recipe: Pattern: Green Whelp Bracers (#7451)"
    { 9207, 6007452 }, // "Recipe: Pattern: Dusky Boots (#7452)"
    { 9208, 6007453 }, // "Recipe: Pattern: Swift Boots (#7453)"
    { 9269, 6007560 }, // "Recipe: Schematic: Gnomish Universal Remote (#7560)"
    { 9273, 6007561 }, // "Recipe: Schematic: Goblin Jumper Cables (#7561)"
    { 9513, 6007678 }, // "Recipe: Thistle Tea (#7678)"
    { 9811, 6007978 }, // "Recipe: Plans: Barbaric Iron Shoulders (#7978)"
    { 9813, 6007979 }, // "Recipe: Plans: Barbaric Iron Breastplate (#7979)"
    { 9814, 6007980 }, // "Recipe: Plans: Barbaric Iron Helm (#7980)"
    { 9818, 6007981 }, // "Recipe: Plans: Barbaric Iron Boots (#7981)"
    { 9820, 6007982 }, // "Recipe: Plans: Barbaric Iron Gloves (#7982)"
    { 9933, 6007975 }, // "Recipe: Plans: Heavy Mithril Pants (#7975)"
    { 9937, 6007995 }, // "Recipe: Plans: Mithril Scale Bracers (#7995)"
    { 9939, 6007976 }, // "Recipe: Plans: Mithril Shield Spike (#7976)"
    { 9945, 6007983 }, // "Recipe: Plans: Ornate Mithril Pants (#7983)"
    { 9950, 6007984 }, // "Recipe: Plans: Ornate Mithril Gloves (#7984)"
    { 9952, 6007985 }, // "Recipe: Plans: Ornate Mithril Shoulder (#7985)"
    { 9964, 6007989 }, // "Recipe: Plans: Mithril Spurs (#7989)"
    { 9966, 6007991 }, // "Recipe: Plans: Mithril Scale Shoulders (#7991)"
    { 9970, 6007990 }, // "Recipe: Plans: Heavy Mithril Helm (#7990)"
    { 9995, 6007992 }, // "Recipe: Plans: Blue Glittering Axe (#7992)"
    { 9997, 6008029 }, // "Recipe: Plans: Wicked Mithril Blade (#8029)"
    { 10005, 6007993 }, // "Recipe: Plans: Dazzling Mithril Rapier (#7993)"
    { 10009, 6008028 }, // "Recipe: Plans: Runed Mithril Hammer (#8028)"
    { 10013, 6008030 }, // "Recipe: Plans: Ebon Shiv (#8030)"
    { 10490, 6008384 }, // "Recipe: Pattern: Comfortable Leather Hat (#8384)"
    { 10509, 6008385 }, // "Recipe: Pattern: Turtle Scale Gloves (#8385)"
    { 10516, 6008409 }, // "Recipe: Pattern: Nightscape Shoulders (#8409)"
    { 10520, 6008386 }, // "Recipe: Pattern: Big Voodoo Robe (#8386)"
    { 10525, 6008395 }, // "Recipe: Pattern: Tough Scorpid Breastplate (#8395)"
    { 10529, 6008403 }, // "Recipe: Pattern: Wild Leather Shoulders (#8403)"
    { 10531, 6008387 }, // "Recipe: Pattern: Big Voodoo Mask (#8387)"
    { 10533, 6008397 }, // "Recipe: Pattern: Tough Scorpid Bracers (#8397)"
    { 10542, 6008398 }, // "Recipe: Pattern: Tough Scorpid Gloves (#8398)"
    { 10544, 6008404 }, // "Recipe: Pattern: Wild Leather Vest (#8404)"
    { 10546, 6008405 }, // "Recipe: Pattern: Wild Leather Helmet (#8405)"
    { 10554, 6008399 }, // "Recipe: Pattern: Tough Scorpid Boots (#8399)"
    { 10560, 6008389 }, // "Recipe: Pattern: Big Voodoo Pants (#8389)"
    { 10562, 6008390 }, // "Recipe: Pattern: Big Voodoo Cloak (#8390)"
    { 10564, 6008400 }, // "Recipe: Pattern: Tough Scorpid Shoulders (#8400)"
    { 10566, 6008406 }, // "Recipe: Pattern: Wild Leather Boots (#8406)"
    { 10568, 6008401 }, // "Recipe: Pattern: Tough Scorpid Leggings (#8401)"
    { 10570, 6008402 }, // "Recipe: Pattern: Tough Scorpid Helm (#8402)"
    { 10572, 6008407 }, // "Recipe: Pattern: Wild Leather Leggings (#8407)"
    { 10574, 6008408 }, // "Recipe: Pattern: Wild Leather Cloak (#8408)"
    { 10840, 6016113 }, // "Recipe: Manual: Mageweave Bandage (#16113)"
    { 10846, 6016085 }, // "Recipe: Artisan First Aid - Heal Thyself (#16085)"
    { 11453, 6009293 }, // "Recipe: Magic Resistance Potion (#9293)"
    { 11454, 6010713 }, // "Recipe: Plans: Inlaid Mithril Cylinder (#10713)"
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
    { 11643, 6009367 }, // "Recipe: Plans: Golden Scale Gauntlets (#9367)"
    { 12047, 6010316 }, // "Recipe: Pattern: Colorful Kilt (#10316)"
    { 12056, 6010300 }, // "Recipe: Pattern: Red Mageweave Vest (#10300)"
    { 12059, 6010301 }, // "Recipe: Pattern: White Bandit Mask (#10301)"
    { 12060, 6010302 }, // "Recipe: Pattern: Red Mageweave Pants (#10302)"
    { 12064, 6010311 }, // "Recipe: Pattern: Orange Martial Shirt (#10311)"
    { 12066, 6010312 }, // "Recipe: Pattern: Red Mageweave Gloves (#10312)"
    { 12075, 6010314 }, // "Recipe: Pattern: Lavender Mageweave Shirt (#10314)"
    { 12078, 6010315 }, // "Recipe: Pattern: Red Mageweave Shoulders (#10315)"
    { 12080, 6010317 }, // "Recipe: Pattern: Pink Mageweave Shirt (#10317)"
    { 12081, 6010318 }, // "Recipe: Pattern: Admiral's Hat (#10318)"
    { 12084, 6010320 }, // "Recipe: Pattern: Red Mageweave Headband (#10320)"
    { 12085, 6010321 }, // "Recipe: Pattern: Tuxedo Shirt (#10321)"
    { 12086, 6010463 }, // "Recipe: Pattern: Shadoweave Mask (#10463)"
    { 12089, 6010323 }, // "Recipe: Pattern: Tuxedo Pants (#10323)"
    { 12091, 6010325 }, // "Recipe: Pattern: White Wedding Dress (#10325)"
    { 12093, 6010326 }, // "Recipe: Pattern: Tuxedo Jacket (#10326)"
    { 12259, 6010424 }, // "Recipe: Plans: Silvered Bronze Leggings (#10424)"
    { 12587, 6010601 }, // "Recipe: Schematic: Bright-Eye Goggles (#10601)"
    { 12597, 6010602 }, // "Recipe: Schematic: Deadly Scope (#10602)"
    { 12607, 6010603 }, // "Recipe: Schematic: Catseye Ultra Goggles (#10603)"
    { 12614, 6010604 }, // "Recipe: Schematic: Mithril Heavy-bore Rifle (#10604)"
    { 12615, 6010605 }, // "Recipe: Schematic: Spellpower Goggles Xtreme (#10605)"
    { 12616, 6010606 }, // "Recipe: Schematic: Parachute Cloak (#10606)"
    { 12617, 6010607 }, // "Recipe: Schematic: Deepdive Helmet (#10607)"
    { 12620, 6010608 }, // "Recipe: Schematic: Sniper Scope (#10608)"
    { 12624, 6010609 }, // "Recipe: Schematic: Mithril Mechanical Dragonling (#10609)"
    { 13380, 6011038 }, // "Recipe: Formula: Enchant 2H Weapon - Lesser Spirit (#11038)"
    { 13419, 6011039 }, // "Recipe: Formula: Enchant Cloak - Minor Agility (#11039)"
    { 13464, 6011081 }, // "Recipe: Formula: Enchant Shield - Lesser Protection (#11081)"
    { 13522, 6011098 }, // "Recipe: Formula: Enchant Cloak - Lesser Shadow Resistance (#11098)"
    { 13536, 6011101 }, // "Recipe: Formula: Enchant Bracer - Lesser Strength (#11101)"
    { 13612, 6011150 }, // "Recipe: Formula: Enchant Gloves - Mining (#11150)"
    { 13617, 6011151 }, // "Recipe: Formula: Enchant Gloves - Herbalism (#11151)"
    { 13620, 6011152 }, // "Recipe: Formula: Enchant Gloves - Fishing (#11152)"
    { 13646, 6011163 }, // "Recipe: Formula: Enchant Bracer - Lesser Deflection (#11163)"
    { 13653, 6011164 }, // "Recipe: Formula: Enchant Weapon - Lesser Beastslayer (#11164)"
    { 13655, 6011165 }, // "Recipe: Formula: Enchant Weapon - Lesser Elemental Slayer (#11165)"
    { 13687, 6011167 }, // "Recipe: Formula: Enchant Boots - Lesser Spirit (#11167)"
    { 13689, 6011168 }, // "Recipe: Formula: Enchant Shield - Lesser Block (#11168)"
    { 13698, 6011166 }, // "Recipe: Formula: Enchant Gloves - Skinning (#11166)"
    { 13817, 6011202 }, // "Recipe: Formula: Enchant Shield - Stamina (#11202)"
    { 13841, 6011203 }, // "Recipe: Formula: Enchant Gloves - Advanced Mining (#11203)"
    { 13846, 6011204 }, // "Recipe: Formula: Enchant Bracer - Greater Spirit (#11204)"
    { 13868, 6011205 }, // "Recipe: Formula: Enchant Gloves - Advanced Herbalism (#11205)"
    { 13882, 6011206 }, // "Recipe: Formula: Enchant Cloak - Lesser Agility (#11206)"
    { 13898, 6011207 }, // "Recipe: Formula: Enchant Weapon - Fiery Weapon (#11207)"
    { 13915, 6011208 }, // "Recipe: Formula: Enchant Weapon - Demonslaying (#11208)"
    { 13931, 6011223 }, // "Recipe: Formula: Enchant Bracer - Deflection (#11223)"
    { 13933, 6011224 }, // "Recipe: Formula: Enchant Shield - Frost Resistance (#11224)"
    { 13945, 6011225 }, // "Recipe: Formula: Enchant Bracer - Greater Stamina (#11225)"
    { 13947, 6011226 }, // "Recipe: Formula: Enchant Gloves - Riding Skill (#11226)"
    { 15292, 6011610 }, // "Recipe: Plans: Dark Iron Pulverizer (#11610)"
    { 15293, 6011614 }, // "Recipe: Plans: Dark Iron Mail (#11614)"
    { 15294, 6011611 }, // "Recipe: Plans: Dark Iron Sunderer (#11611)"
    { 15295, 6011615 }, // "Recipe: Plans: Dark Iron Shoulders (#11615)"
    { 15296, 6011612 }, // "Recipe: Plans: Dark Iron Plate (#11612)"
    { 15596, 6011813 }, // "Recipe: Formula: Smoking Heart of the Mountain (#11813)"
    { 15628, 6011828 }, // "Recipe: Schematic: Pet Bombling (#11828)"
    { 15633, 6011827 }, // "Recipe: Schematic: Lil' Smoky (#11827)"
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
    { 15973, 6012261 }, // "Recipe: Plans: Searing Golden Blade (#12261)"
    { 16642, 6012682 }, // "Recipe: Plans: Thorium Armor (#12682)"
    { 16643, 6012683 }, // "Recipe: Plans: Thorium Belt (#12683)"
    { 16644, 6012684 }, // "Recipe: Plans: Thorium Bracers (#12684)"
    { 16645, 6012685 }, // "Recipe: Plans: Radiant Belt (#12685)"
    { 16646, 6012687 }, // "Recipe: Plans: Imperial Plate Shoulders (#12687)"
    { 16647, 6012688 }, // "Recipe: Plans: Imperial Plate Belt (#12688)"
    { 16648, 6012689 }, // "Recipe: Plans: Radiant Breastplate (#12689)"
    { 16649, 6012690 }, // "Recipe: Plans: Imperial Plate Bracers (#12690)"
    { 16650, 6012691 }, // "Recipe: Plans: Wildthorn Mail (#12691)"
    { 16651, 6012692 }, // "Recipe: Plans: Thorium Shield Spike (#12692)"
    { 16652, 6012693 }, // "Recipe: Plans: Thorium Boots (#12693)"
    { 16653, 6012694 }, // "Recipe: Plans: Thorium Helm (#12694)"
    { 16654, 6012695 }, // "Recipe: Plans: Radiant Gloves (#12695)"
    { 16655, 6012699 }, // "Recipe: Plans: Fiery Plate Gauntlets (#12699)"
    { 16656, 6012697 }, // "Recipe: Plans: Radiant Boots (#12697)"
    { 16657, 6012700 }, // "Recipe: Plans: Imperial Plate Boots (#12700)"
    { 16658, 6012701 }, // "Recipe: Plans: Imperial Plate Helm (#12701)"
    { 16659, 6012702 }, // "Recipe: Plans: Radiant Circlet (#12702)"
    { 16660, 6012698 }, // "Recipe: Plans: Dawnbringer Shoulders (#12698)"
    { 16661, 6012703 }, // "Recipe: Plans: Storm Gauntlets (#12703)"
    { 16662, 6012704 }, // "Recipe: Plans: Thorium Leggings (#12704)"
    { 16663, 6012705 }, // "Recipe: Plans: Imperial Plate Chest (#12705)"
    { 16664, 6012706 }, // "Recipe: Plans: Runic Plate Shoulders (#12706)"
    { 16665, 6012707 }, // "Recipe: Plans: Runic Plate Boots (#12707)"
    { 16667, 6012696 }, // "Recipe: Plans: Demon Forged Breastplate (#12696)"
    { 16724, 6012711 }, // "Recipe: Plans: Whitesoul Helm (#12711)"
    { 16725, 6012713 }, // "Recipe: Plans: Radiant Leggings (#12713)"
    { 16726, 6012714 }, // "Recipe: Plans: Runic Plate Helm (#12714)"
    { 16728, 6012716 }, // "Recipe: Plans: Helm of the Great Chief (#12716)"
    { 16729, 6012717 }, // "Recipe: Plans: Lionheart Helm (#12717)"
    { 16730, 6012715 }, // "Recipe: Plans: Imperial Plate Leggings (#12715)"
    { 16731, 6012718 }, // "Recipe: Plans: Runic Breastplate (#12718)"
    { 16732, 6012719 }, // "Recipe: Plans: Runic Plate Leggings (#12719)"
    { 16741, 6012720 }, // "Recipe: Plans: Stronghold Gauntlets (#12720)"
    { 16742, 6012725 }, // "Recipe: Plans: Enchanted Thorium Helm (#12725)"
    { 16744, 6012726 }, // "Recipe: Plans: Enchanted Thorium Leggings (#12726)"
    { 16745, 6012727 }, // "Recipe: Plans: Enchanted Thorium Breastplate (#12727)"
    { 16746, 6012728 }, // "Recipe: Plans: Invulnerable Mail (#12728)"
    { 16969, 6012819 }, // "Recipe: Plans: Ornate Thorium Handaxe (#12819)"
    { 16970, 6012821 }, // "Recipe: Plans: Dawn's Edge (#12821)"
    { 16971, 6012823 }, // "Recipe: Plans: Huge Thorium Battleaxe (#12823)"
    { 16973, 6012824 }, // "Recipe: Plans: Enchanted Battlehammer (#12824)"
    { 16978, 6012825 }, // "Recipe: Plans: Blazing Rapier (#12825)"
    { 16983, 6012827 }, // "Recipe: Plans: Serenity (#12827)"
    { 16984, 6012828 }, // "Recipe: Plans: Volcanic Hammer (#12828)"
    { 16985, 6012830 }, // "Recipe: Plans: Corruption (#12830)"
    { 16988, 6012833 }, // "Recipe: Plans: Hammer of the Titans (#12833)"
    { 16990, 6012834 }, // "Recipe: Plans: Arcanite Champion (#12834)"
    { 16991, 6012835 }, // "Recipe: Plans: Annihilator (#12835)"
    { 16992, 6012836 }, // "Recipe: Plans: Frostguard (#12836)"
    { 16993, 6012837 }, // "Recipe: Plans: Masterwork Stormhammer (#12837)"
    { 16994, 6012838 }, // "Recipe: Plans: Arcanite Reaper (#12838)"
    { 16995, 6012839 }, // "Recipe: Plans: Heartseeker (#12839)"
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
    { 18403, 6014466 }, // "Recipe: Pattern: Frostweave Tunic (#14466)"
    { 18404, 6014467 }, // "Recipe: Pattern: Frostweave Robe (#14467)"
    { 18405, 6014468 }, // "Recipe: Pattern: Runecloth Bag (#14468)"
    { 18406, 6014469 }, // "Recipe: Pattern: Runecloth Robe (#14469)"
    { 18407, 6014470 }, // "Recipe: Pattern: Runecloth Tunic (#14470)"
    { 18408, 6014471 }, // "Recipe: Pattern: Cindercloth Vest (#14471)"
    { 18409, 6014472 }, // "Recipe: Pattern: Runecloth Cloak (#14472)"
    { 18410, 6014473 }, // "Recipe: Pattern: Ghostweave Belt (#14473)"
    { 18411, 6014474 }, // "Recipe: Pattern: Frostweave Gloves (#14474)"
    { 18412, 6014476 }, // "Recipe: Pattern: Cindercloth Gloves (#14476)"
    { 18413, 6014477 }, // "Recipe: Pattern: Ghostweave Gloves (#14477)"
    { 18414, 6014478 }, // "Recipe: Pattern: Brightcloth Robe (#14478)"
    { 18415, 6014479 }, // "Recipe: Pattern: Brightcloth Gloves (#14479)"
    { 18416, 6014480 }, // "Recipe: Pattern: Ghostweave Vest (#14480)"
    { 18417, 6014481 }, // "Recipe: Pattern: Runecloth Gloves (#14481)"
    { 18418, 6014482 }, // "Recipe: Pattern: Cindercloth Cloak (#14482)"
    { 18419, 6014483 }, // "Recipe: Pattern: Felcloth Pants (#14483)"
    { 18420, 6014484 }, // "Recipe: Pattern: Brightcloth Cloak (#14484)"
    { 18421, 6014485 }, // "Recipe: Pattern: Wizardweave Leggings (#14485)"
    { 18422, 6014486 }, // "Recipe: Pattern: Cloak of Fire (#14486)"
    { 18423, 6014488 }, // "Recipe: Pattern: Runecloth Boots (#14488)"
    { 18424, 6014489 }, // "Recipe: Pattern: Frostweave Pants (#14489)"
    { 18434, 6014490 }, // "Recipe: Pattern: Cindercloth Pants (#14490)"
    { 18436, 6014493 }, // "Recipe: Pattern: Robe of Winter Night (#14493)"
    { 18437, 6014492 }, // "Recipe: Pattern: Felcloth Boots (#14492)"
    { 18438, 6014491 }, // "Recipe: Pattern: Runecloth Pants (#14491)"
    { 18439, 6014494 }, // "Recipe: Pattern: Brightcloth Pants (#14494)"
    { 18440, 6014497 }, // "Recipe: Pattern: Mooncloth Leggings (#14497)"
    { 18441, 6014495 }, // "Recipe: Pattern: Ghostweave Pants (#14495)"
    { 18442, 6014496 }, // "Recipe: Pattern: Felcloth Hood (#14496)"
    { 18444, 6014498 }, // "Recipe: Pattern: Runecloth Headband (#14498)"
    { 18445, 6014499 }, // "Recipe: Pattern: Mooncloth Bag (#14499)"
    { 18446, 6014500 }, // "Recipe: Pattern: Wizardweave Robe (#14500)"
    { 18447, 6014501 }, // "Recipe: Pattern: Mooncloth Vest (#14501)"
    { 18448, 6014507 }, // "Recipe: Pattern: Mooncloth Shoulders (#14507)"
    { 18449, 6014504 }, // "Recipe: Pattern: Runecloth Shoulders (#14504)"
    { 18450, 6014505 }, // "Recipe: Pattern: Wizardweave Turban (#14505)"
    { 18451, 6014506 }, // "Recipe: Pattern: Felcloth Robe (#14506)"
    { 18452, 6014509 }, // "Recipe: Pattern: Mooncloth Circlet (#14509)"
    { 18453, 6014508 }, // "Recipe: Pattern: Felcloth Shoulders (#14508)"
    { 18454, 6014511 }, // "Recipe: Pattern: Gloves of Spell Mastery (#14511)"
    { 18455, 6014510 }, // "Recipe: Pattern: Bottomless Bag (#14510)"
    { 18456, 6014512 }, // "Recipe: Pattern: Truefaith Vestments (#14512)"
    { 18457, 6014513 }, // "Recipe: Pattern: Robe of the Archmage (#14513)"
    { 18458, 6014514 }, // "Recipe: Pattern: Robe of the Void (#14514)"
    { 18540, 6004213 }, // "Recipe: Grimoire of Doom (#4213)"
    { 18560, 6014526 }, // "Recipe: Pattern: Mooncloth (#14526)"
    { 19048, 6015724 }, // "Recipe: Pattern: Heavy Scorpid Bracers (#15724)"
    { 19049, 6015725 }, // "Recipe: Pattern: Wicked Leather Gauntlets (#15725)"
    { 19050, 6015726 }, // "Recipe: Pattern: Green Dragonscale Breastplate (#15726)"
    { 19051, 6015727 }, // "Recipe: Pattern: Heavy Scorpid Vest (#15727)"
    { 19052, 6015728 }, // "Recipe: Pattern: Wicked Leather Bracers (#15728)"
    { 19053, 6015729 }, // "Recipe: Pattern: Chimeric Gloves (#15729)"
    { 19054, 6015730 }, // "Recipe: Pattern: Red Dragonscale Breastplate (#15730)"
    { 19055, 6015731 }, // "Recipe: Pattern: Runic Leather Gauntlets (#15731)"
    { 19059, 6015732 }, // "Recipe: Pattern: Volcanic Leggings (#15732)"
    { 19060, 6015733 }, // "Recipe: Pattern: Green Dragonscale Leggings (#15733)"
    { 19061, 6015734 }, // "Recipe: Pattern: Living Shoulders (#15734)"
    { 19062, 6015735 }, // "Recipe: Pattern: Ironfeather Shoulders (#15735)"
    { 19063, 6015737 }, // "Recipe: Pattern: Chimeric Boots (#15737)"
    { 19064, 6015738 }, // "Recipe: Pattern: Heavy Scorpid Gauntlets (#15738)"
    { 19065, 6015739 }, // "Recipe: Pattern: Runic Leather Bracers (#15739)"
    { 19066, 6015740 }, // "Recipe: Pattern: Frostsaber Boots (#15740)"
    { 19067, 6015741 }, // "Recipe: Pattern: Stormshroud Pants (#15741)"
    { 19068, 6015742 }, // "Recipe: Pattern: Warbear Harness (#15742)"
    { 19070, 6015743 }, // "Recipe: Pattern: Heavy Scorpid Belt (#15743)"
    { 19071, 6015744 }, // "Recipe: Pattern: Wicked Leather Headband (#15744)"
    { 19072, 6015745 }, // "Recipe: Pattern: Runic Leather Belt (#15745)"
    { 19073, 6015746 }, // "Recipe: Pattern: Chimeric Leggings (#15746)"
    { 19074, 6015747 }, // "Recipe: Pattern: Frostsaber Leggings (#15747)"
    { 19075, 6015748 }, // "Recipe: Pattern: Heavy Scorpid Leggings (#15748)"
    { 19076, 6015749 }, // "Recipe: Pattern: Volcanic Breastplate (#15749)"
    { 19077, 6015751 }, // "Recipe: Pattern: Blue Dragonscale Breastplate (#15751)"
    { 19078, 6015752 }, // "Recipe: Pattern: Living Leggings (#15752)"
    { 19079, 6015753 }, // "Recipe: Pattern: Stormshroud Armor (#15753)"
    { 19080, 6015754 }, // "Recipe: Pattern: Warbear Woolies (#15754)"
    { 19081, 6015755 }, // "Recipe: Pattern: Chimeric Vest (#15755)"
    { 19082, 6015756 }, // "Recipe: Pattern: Runic Leather Headband (#15756)"
    { 19083, 6015757 }, // "Recipe: Pattern: Wicked Leather Pants (#15757)"
    { 19084, 6015758 }, // "Recipe: Pattern: Devilsaur Gauntlets (#15758)"
    { 19085, 6015759 }, // "Recipe: Pattern: Black Dragonscale Breastplate (#15759)"
    { 19086, 6015760 }, // "Recipe: Pattern: Ironfeather Breastplate (#15760)"
    { 19087, 6015761 }, // "Recipe: Pattern: Frostsaber Gloves (#15761)"
    { 19088, 6015762 }, // "Recipe: Pattern: Heavy Scorpid Helm (#15762)"
    { 19089, 6015763 }, // "Recipe: Pattern: Blue Dragonscale Shoulders (#15763)"
    { 19090, 6015764 }, // "Recipe: Pattern: Stormshroud Shoulders (#15764)"
    { 19091, 6015765 }, // "Recipe: Pattern: Runic Leather Pants (#15765)"
    { 19092, 6015768 }, // "Recipe: Pattern: Wicked Leather Belt (#15768)"
    { 19094, 6015770 }, // "Recipe: Pattern: Black Dragonscale Shoulders (#15770)"
    { 19095, 6015771 }, // "Recipe: Pattern: Living Breastplate (#15771)"
    { 19097, 6015772 }, // "Recipe: Pattern: Devilsaur Leggings (#15772)"
    { 19098, 6015773 }, // "Recipe: Pattern: Wicked Leather Armor (#15773)"
    { 19100, 6015774 }, // "Recipe: Pattern: Heavy Scorpid Shoulders (#15774)"
    { 19101, 6015775 }, // "Recipe: Pattern: Volcanic Shoulders (#15775)"
    { 19102, 6015776 }, // "Recipe: Pattern: Runic Leather Armor (#15776)"
    { 19103, 6015777 }, // "Recipe: Pattern: Runic Leather Shoulders (#15777)"
    { 19104, 6015779 }, // "Recipe: Pattern: Frostsaber Tunic (#15779)"
    { 19106, 6015780 }, // "Recipe: Pattern: Onyxia Scale Breastplate (#15780)"
    { 19107, 6015781 }, // "Recipe: Pattern: Black Dragonscale Leggings (#15781)"
    { 19790, 6016041 }, // "Recipe: Schematic: Thorium Grenade (#16041)"
    { 19791, 6016042 }, // "Recipe: Schematic: Thorium Widget (#16042)"
    { 19792, 6016043 }, // "Recipe: Schematic: Thorium Rifle (#16043)"
    { 19793, 6016044 }, // "Recipe: Schematic: Lifelike Mechanical Toad (#16044)"
    { 19794, 6016045 }, // "Recipe: Schematic: Spellpower Goggles Xtreme Plus (#16045)"
    { 19795, 6016047 }, // "Recipe: Schematic: Thorium Tube (#16047)"
    { 19796, 6016048 }, // "Recipe: Schematic: Dark Iron Rifle (#16048)"
    { 19799, 6016049 }, // "Recipe: Schematic: Dark Iron Bomb (#16049)"
    { 19800, 6016051 }, // "Recipe: Schematic: Thorium Shells (#16051)"
    { 19801, 6016665 }, // "Recipe: Tome of Tranquilizing Shot (#16665)"
    { 19814, 6016046 }, // "Recipe: Schematic: Masterwork Target Dummy (#16046)"
    { 19815, 6016050 }, // "Recipe: Schematic: Delicate Arcanite Converter (#16050)"
    { 19819, 6016052 }, // "Recipe: Schematic: Voice Amplification Modulator (#16052)"
    { 19825, 6016053 }, // "Recipe: Schematic: Master Engineer's Goggles (#16053)"
    { 19830, 6016054 }, // "Recipe: Schematic: Arcanite Dragonling (#16054)"
    { 19831, 6016055 }, // "Recipe: Schematic: Arcane Bomb (#16055)"
    { 19833, 6016056 }, // "Recipe: Schematic: Flawless Arcanite Rifle (#16056)"
    { 20008, 6016214 }, // "Recipe: Formula: Enchant Bracer - Greater Intellect (#16214)"
    { 20009, 6016218 }, // "Recipe: Formula: Enchant Bracer - Superior Spirit (#16218)"
    { 20010, 6016246 }, // "Recipe: Formula: Enchant Bracer - Superior Strength (#16246)"
    { 20011, 6016251 }, // "Recipe: Formula: Enchant Bracer - Superior Stamina (#16251)"
    { 20012, 6016219 }, // "Recipe: Formula: Enchant Gloves - Greater Agility (#16219)"
    { 20013, 6016244 }, // "Recipe: Formula: Enchant Gloves - Greater Strength (#16244)"
    { 20014, 6016216 }, // "Recipe: Formula: Enchant Cloak - Greater Resistance (#16216)"
    { 20015, 6016224 }, // "Recipe: Formula: Enchant Cloak - Superior Defense (#16224)"
    { 20016, 6016222 }, // "Recipe: Formula: Enchant Shield - Superior Spirit (#16222)"
    { 20017, 6016217 }, // "Recipe: Formula: Enchant Shield - Greater Stamina (#16217)"
    { 20020, 6016215 }, // "Recipe: Formula: Enchant Boots - Greater Stamina (#16215)"
    { 20023, 6016245 }, // "Recipe: Formula: Enchant Boots - Greater Agility (#16245)"
    { 20024, 6016220 }, // "Recipe: Formula: Enchant Boots - Spirit (#16220)"
    { 20025, 6016253 }, // "Recipe: Formula: Enchant Chest - Greater Stats (#16253)"
    { 20026, 6016221 }, // "Recipe: Formula: Enchant Chest - Major Health (#16221)"
    { 20028, 6016242 }, // "Recipe: Formula: Enchant Chest - Major Mana (#16242)"
    { 20029, 6016223 }, // "Recipe: Formula: Enchant Weapon - Icy Chill (#16223)"
    { 20030, 6016247 }, // "Recipe: Formula: Enchant 2H Weapon - Superior Impact (#16247)"
    { 20031, 6016250 }, // "Recipe: Formula: Enchant Weapon - Superior Striking (#16250)"
    { 20032, 6016254 }, // "Recipe: Formula: Enchant Weapon - Lifestealing (#16254)"
    { 20033, 6016248 }, // "Recipe: Formula: Enchant Weapon - Unholy (#16248)"
    { 20034, 6016252 }, // "Recipe: Formula: Enchant Weapon - Crusader (#16252)"
    { 20035, 6016255 }, // "Recipe: Formula: Enchant 2H Weapon - Major Spirit (#16255)"
    { 20036, 6016249 }, // "Recipe: Formula: Enchant 2H Weapon - Major Intellect (#16249)"
    { 20051, 6016243 }, // "Recipe: Formula: Runed Arcanite Rod (#16243)"
    { 20626, 6016767 }, // "Recipe: Undermine Clam Chowder (#16767)"
    { 20848, 6017017 }, // "Recipe: Pattern: Flarecore Mantle (#17017)"
    { 20849, 6017018 }, // "Recipe: Pattern: Flarecore Gloves (#17018)"
    { 20853, 6017022 }, // "Recipe: Pattern: Corehound Boots (#17022)"
    { 20854, 6017023 }, // "Recipe: Pattern: Molten Helm (#17023)"
    { 20855, 6017025 }, // "Recipe: Pattern: Black Dragonscale Boots (#17025)"
    { 20872, 6017049 }, // "Recipe: Plans: Fiery Chain Girdle (#17049)"
    { 20873, 6017053 }, // "Recipe: Plans: Fiery Chain Shoulders (#17053)"
    { 20874, 6017051 }, // "Recipe: Plans: Dark Iron Bracers (#17051)"
    { 20876, 6017052 }, // "Recipe: Plans: Dark Iron Leggings (#17052)"
    { 20890, 6017059 }, // "Recipe: Plans: Dark Iron Reaver (#17059)"
    { 20897, 6017060 }, // "Recipe: Plans: Dark Iron Destroyer (#17060)"
    { 20916, 6017062 }, // "Recipe: Mithril Head Trout (#17062)"
    { 21143, 6017200 }, // "Recipe: Gingerbread Cookie (#17200)"
    { 21144, 6017201 }, // "Recipe: Egg Nog (#17201)"
    { 21161, 6018592 }, // "Recipe: Plans: Sulfuron Hammer (#18592)"
    { 21562, 6017413 }, // "Recipe: Codex: Prayer of Fortitude (#17413)"
    { 21564, 6017414 }, // "Recipe: Codex: Prayer of Fortitude II (#17414)"
    { 21849, 6017682 }, // "Recipe: Book: Gift of the Wild (#17682)"
    { 21850, 6017683 }, // "Recipe: Book: Gift of the Wild II (#17683)"
    { 21913, 6017706 }, // "Recipe: Plans: Edge of Winter (#17706)"
    { 21923, 6017709 }, // "Recipe: Elixir of Frost Power (#17709)"
    { 21931, 6017725 }, // "Recipe: Formula: Enchant Weapon - Winter's Might (#17725)"
    { 21940, 6017720 }, // "Recipe: Schematic: Snowmaster 9000 (#17720)"
    { 21943, 6017722 }, // "Recipe: Pattern: Gloves of the Greatfather (#17722)"
    { 21945, 6017724 }, // "Recipe: Pattern: Green Holiday Shirt (#17724)"
    { 22480, 6018046 }, // "Recipe: Tender Wolf Steak (#18046)"
    { 22711, 6018239 }, // "Recipe: Pattern: Shadowskin Gloves (#18239)"
    { 22727, 6018252 }, // "Recipe: Pattern: Core Armor Kit (#18252)"
    { 22732, 6018257 }, // "Recipe: Major Rejuvenation Potion (#18257)"
    { 22749, 6018259 }, // "Recipe: Formula: Enchant Weapon - Spellpower (#18259)"
    { 22750, 6018260 }, // "Recipe: Formula: Enchant Weapon - Healing Power (#18260)"
    { 22757, 6018264 }, // "Recipe: Plans: Elemental Sharpening Stone (#18264)"
    { 22759, 6018265 }, // "Recipe: Pattern: Flarecore Wraps (#18265)"
    { 22761, 6018267 }, // "Recipe: Runn Tum Tuber Surprise (#18267)"
    { 22793, 6018290 }, // "Recipe: Schematic: Biznicks 247x128 Accurascope (#18290)"
    { 22795, 6018292 }, // "Recipe: Schematic: Core Marksman Rifle (#18292)"
    { 22797, 6018291 }, // "Recipe: Schematic: Force Reactive Disk (#18291)"
    { 22866, 6018414 }, // "Recipe: Pattern: Belt of the Archmage (#18414)"
    { 22867, 6018415 }, // "Recipe: Pattern: Felcloth Gloves (#18415)"
    { 22868, 6018416 }, // "Recipe: Pattern: Inferno Gloves (#18416)"
    { 22869, 6018417 }, // "Recipe: Pattern: Mooncloth Gloves (#18417)"
    { 22870, 6018418 }, // "Recipe: Pattern: Cloak of Warding (#18418)"
    { 22902, 6018487 }, // "Recipe: Pattern: Mooncloth Robe (#18487)"
    { 22921, 6018514 }, // "Recipe: Pattern: Girdle of Insight (#18514)"
    { 22922, 6018515 }, // "Recipe: Pattern: Mongoose Boots (#18515)"
    { 22923, 6018516 }, // "Recipe: Pattern: Swift Flight Bracers (#18516)"
    { 22926, 6018517 }, // "Recipe: Pattern: Chromatic Cloak (#18517)"
    { 22927, 6018518 }, // "Recipe: Pattern: Hide of the Wild (#18518)"
    { 22928, 6018519 }, // "Recipe: Pattern: Shifting Cloak (#18519)"
    { 22967, 6044956 }, // "Recipe: Goblin's Guide to Elementium (#44956)"
    { 23028, 6018600 }, // "Recipe: Tome of Arcane Brilliance (#18600)"
    { 23066, 6018647 }, // "Recipe: Schematic: Red Firework (#18647)"
    { 23067, 6018649 }, // "Recipe: Schematic: Blue Firework (#18649)"
    { 23068, 6018648 }, // "Recipe: Schematic: Green Firework (#18648)"
    { 23069, 6018650 }, // "Recipe: Schematic: EZ-Thro Dynamite II (#18650)"
    { 23071, 6018651 }, // "Recipe: Schematic: Truesilver Transformer (#18651)"
    { 23077, 6018652 }, // "Recipe: Schematic: Gyrofreeze Ice Reflector (#18652)"
    { 23078, 6018653 }, // "Recipe: Schematic: Goblin Jumper Cables XL (#18653)"
    { 23079, 6018655 }, // "Recipe: Schematic: Major Recombobulator (#18655)"
    { 23080, 6018656 }, // "Recipe: Schematic: Powerful Seaforium Charge (#18656)"
    { 23081, 6018657 }, // "Recipe: Schematic: Hyper-Radiant Flame Reflector (#18657)"
    { 23082, 6018658 }, // "Recipe: Schematic: Ultra-Flash Shadow Reflector (#18658)"
    { 23096, 6018654 }, // "Recipe: Schematic: Gnomish Alarm-o-Bot (#18654)"
    { 23129, 6018661 }, // "Recipe: Schematic: World Enlarger (#18661)"
    { 23190, 6018731 }, // "Recipe: Pattern: Heavy Leather Ball (#18731)"
    { 23399, 6018949 }, // "Recipe: Pattern: Barbaric Bracers (#18949)"
    { 23507, 6019027 }, // "Recipe: Schematic: Snake Burst Firework (#19027)"
    { 23628, 6019202 }, // "Recipe: Plans: Heavy Timbermaw Belt (#19202)"
    { 23629, 6019204 }, // "Recipe: Plans: Heavy Timbermaw Boots (#19204)"
    { 23632, 6019203 }, // "Recipe: Plans: Girdle of the Dawn (#19203)"
    { 23633, 6019205 }, // "Recipe: Plans: Gloves of the Dawn (#19205)"
    { 23636, 6019206 }, // "Recipe: Plans: Dark Iron Helm (#19206)"
    { 23637, 6019207 }, // "Recipe: Plans: Dark Iron Gauntlets (#19207)"
    { 23638, 6019208 }, // "Recipe: Plans: Black Amnesty (#19208)"
    { 23639, 6019209 }, // "Recipe: Plans: Blackfury (#19209)"
    { 23650, 6019210 }, // "Recipe: Plans: Ebon Hand (#19210)"
    { 23652, 6019211 }, // "Recipe: Plans: Blackguard (#19211)"
    { 23653, 6019212 }, // "Recipe: Plans: Nightfall (#19212)"
    { 23662, 6019215 }, // "Recipe: Pattern: Wisdom of the Timbermaw (#19215)"
    { 23663, 6019218 }, // "Recipe: Pattern: Mantle of the Timbermaw (#19218)"
    { 23664, 6019216 }, // "Recipe: Pattern: Argent Boots (#19216)"
    { 23665, 6019217 }, // "Recipe: Pattern: Argent Shoulders (#19217)"
    { 23666, 6019219 }, // "Recipe: Pattern: Flarecore Robe (#19219)"
    { 23667, 6019220 }, // "Recipe: Pattern: Flarecore Leggings (#19220)"
    { 23703, 6019326 }, // "Recipe: Pattern: Might of the Timbermaw (#19326)"
    { 23704, 6019327 }, // "Recipe: Pattern: Timbermaw Brawlers (#19327)"
    { 23705, 6019328 }, // "Recipe: Pattern: Dawn Treaders (#19328)"
    { 23706, 6019329 }, // "Recipe: Pattern: Golden Mantle of the Dawn (#19329)"
    { 23707, 6019330 }, // "Recipe: Pattern: Lava Belt (#19330)"
    { 23708, 6019331 }, // "Recipe: Pattern: Chromatic Gauntlets (#19331)"
    { 23709, 6019332 }, // "Recipe: Pattern: Corehound Belt (#19332)"
    { 23710, 6019333 }, // "Recipe: Pattern: Molten Belt (#19333)"
    { 23787, 6019442 }, // "Recipe: Formula: Powerful Anti-Venom (#19442)"
    { 23799, 6019444 }, // "Recipe: Formula: Enchant Weapon - Strength (#19444)"
    { 23800, 6019445 }, // "Recipe: Formula: Enchant Weapon - Agility (#19445)"
    { 23801, 6019446 }, // "Recipe: Formula: Enchant Bracer - Mana Regeneration (#19446)"
    { 23802, 6019447 }, // "Recipe: Formula: Enchant Bracer - Healing Power (#19447)"
    { 23803, 6019448 }, // "Recipe: Formula: Enchant Weapon - Mighty Spirit (#19448)"
    { 23804, 6019449 }, // "Recipe: Formula: Enchant Weapon - Mighty Intellect (#19449)"
    { 24091, 6019764 }, // "Recipe: Pattern: Bloodvine Vest (#19764)"
    { 24092, 6019765 }, // "Recipe: Pattern: Bloodvine Leggings (#19765)"
    { 24093, 6019766 }, // "Recipe: Pattern: Bloodvine Boots (#19766)"
    { 24121, 6019769 }, // "Recipe: Pattern: Primal Batskin Jerkin (#19769)"
    { 24122, 6019770 }, // "Recipe: Pattern: Primal Batskin Gloves (#19770)"
    { 24123, 6019771 }, // "Recipe: Pattern: Primal Batskin Bracers (#19771)"
    { 24124, 6019772 }, // "Recipe: Pattern: Blood Tiger Breastplate (#19772)"
    { 24125, 6019773 }, // "Recipe: Pattern: Blood Tiger Shoulders (#19773)"
    { 24136, 6019776 }, // "Recipe: Plans: Bloodsoul Breastplate (#19776)"
    { 24137, 6019777 }, // "Recipe: Plans: Bloodsoul Shoulders (#19777)"
    { 24138, 6019778 }, // "Recipe: Plans: Bloodsoul Gauntlets (#19778)"
    { 24139, 6019779 }, // "Recipe: Plans: Darksoul Breastplate (#19779)"
    { 24140, 6019780 }, // "Recipe: Plans: Darksoul Leggings (#19780)"
    { 24141, 6019781 }, // "Recipe: Plans: Darksoul Shoulders (#19781)"
    { 24356, 6020000 }, // "Recipe: Schematic: Bloodvine Goggles (#20000)"
    { 24357, 6020001 }, // "Recipe: Schematic: Bloodvine Lens (#20001)"
    { 24365, 6020011 }, // "Recipe: Mageblood Elixir (#20011)"
    { 24366, 6020012 }, // "Recipe: Greater Dreamless Sleep Potion (#20012)"
    { 24367, 6020013 }, // "Recipe: Living Action Potion (#20013)"
    { 24368, 6020014 }, // "Recipe: Mighty Troll's Blood Elixir (#20014)"
    { 24399, 6020040 }, // "Recipe: Plans: Dark Iron Boots (#20040)"
    { 24418, 6020075 }, // "Recipe: Heavy Crocolisk Stew (#20075)"
    { 24703, 6020382 }, // "Recipe: Pattern: Dreamscale Breastplate (#20382)"
    { 24846, 6020506 }, // "Recipe: Pattern: Spitfire Bracers (#20506)"
    { 24847, 6020507 }, // "Recipe: Pattern: Spitfire Gauntlets (#20507)"
    { 24848, 6020508 }, // "Recipe: Pattern: Spitfire Breastplate (#20508)"
    { 24849, 6020509 }, // "Recipe: Pattern: Sandstalker Bracers (#20509)"
    { 24850, 6020510 }, // "Recipe: Pattern: Sandstalker Gauntlets (#20510)"
    { 24851, 6020511 }, // "Recipe: Pattern: Sandstalker Breastplate (#20511)"
    { 24901, 6020546 }, // "Recipe: Pattern: Runed Stygian Leggings (#20546)"
    { 24902, 6020548 }, // "Recipe: Pattern: Runed Stygian Belt (#20548)"
    { 24903, 6020547 }, // "Recipe: Pattern: Runed Stygian Boots (#20547)"
    { 24912, 6020553 }, // "Recipe: Plans: Darkrune Gauntlets (#20553)"
    { 24913, 6020555 }, // "Recipe: Plans: Darkrune Helm (#20555)"
    { 24914, 6020554 }, // "Recipe: Plans: Darkrune Breastplate (#20554)"
    { 24940, 6020576 }, // "Recipe: Pattern: Black Whelp Tunic (#20576)"
    { 25072, 6020726 }, // "Recipe: Formula: Enchant Gloves - Threat (#20726)"
    { 25073, 6020727 }, // "Recipe: Formula: Enchant Gloves - Shadow Power (#20727)"
    { 25074, 6020728 }, // "Recipe: Formula: Enchant Gloves - Frost Power (#20728)"
    { 25078, 6020729 }, // "Recipe: Formula: Enchant Gloves - Fire Power (#20729)"
    { 25079, 6020730 }, // "Recipe: Formula: Enchant Gloves - Healing Power (#20730)"
    { 25080, 6020731 }, // "Recipe: Formula: Enchant Gloves - Superior Agility (#20731)"
    { 25081, 6020732 }, // "Recipe: Formula: Enchant Cloak - Greater Fire Resistance (#20732)"
    { 25082, 6020733 }, // "Recipe: Formula: Enchant Cloak - Greater Nature Resistance (#20733)"
    { 25083, 6020734 }, // "Recipe: Formula: Enchant Cloak - Stealth (#20734)"
    { 25084, 6020735 }, // "Recipe: Formula: Enchant Cloak - Subtlety (#20735)"
    { 25086, 6020736 }, // "Recipe: Formula: Enchant Cloak - Dodge (#20736)"
    { 25124, 6020758 }, // "Recipe: Formula: Minor Wizard Oil (#20758)"
    { 25125, 6020752 }, // "Recipe: Formula: Minor Mana Oil (#20752)"
    { 25126, 6020753 }, // "Recipe: Formula: Lesser Wizard Oil (#20753)"
    { 25127, 6020754 }, // "Recipe: Formula: Lesser Mana Oil (#20754)"
    { 25128, 6020755 }, // "Recipe: Formula: Wizard Oil (#20755)"
    { 25129, 6020756 }, // "Recipe: Formula: Brilliant Wizard Oil (#20756)"
    { 25130, 6020757 }, // "Recipe: Formula: Brilliant Mana Oil (#20757)"
    { 25146, 6020761 }, // "Recipe: Transmute Elemental Fire (#20761)"
    { 25286, 6021297 }, // "Recipe: Manual of Heroic Strike IX (#21297)"
    { 25288, 6021299 }, // "Recipe: Manual of Revenge VI (#21299)"
    { 25289, 6021298 }, // "Recipe: Manual of Battle Shout VII (#21298)"
    { 25290, 6021288 }, // "Recipe: Libram: Blessing of Wisdom VI (#21288)"
    { 25291, 6021289 }, // "Recipe: Libram: Blessing of Might VII (#21289)"
    { 25292, 6021290 }, // "Recipe: Libram: Holy Light IX (#21290)"
    { 25294, 6021304 }, // "Recipe: Guide: Multi-Shot V (#21304)"
    { 25295, 6021306 }, // "Recipe: Guide: Serpent Sting IX (#21306)"
    { 25296, 6021307 }, // "Recipe: Guide: Aspect of the Hawk VII (#21307)"
    { 25297, 6021294 }, // "Recipe: Book of Healing Touch XI (#21294)"
    { 25298, 6021295 }, // "Recipe: Book of Starfire VII (#21295)"
    { 25299, 6021296 }, // "Recipe: Book of Rejuvenation XI (#21296)"
    { 25300, 6021300 }, // "Recipe: Handbook of Backstab IX (#21300)"
    { 25302, 6021303 }, // "Recipe: Handbook of Feint V (#21303)"
    { 25304, 6021214 }, // "Recipe: Tome of Frostbolt XI (#21214)"
    { 25306, 6021279 }, // "Recipe: Tome of Fireball XII (#21279)"
    { 25307, 6021281 }, // "Recipe: Grimoire of Shadow Bolt X (#21281)"
    { 25309, 6021282 }, // "Recipe: Grimoire of Immolate VIII (#21282)"
    { 25311, 6021283 }, // "Recipe: Grimoire of Corruption VII (#21283)"
    { 25314, 6021284 }, // "Recipe: Codex of Greater Heal V (#21284)"
    { 25315, 6021285 }, // "Recipe: Codex of Renew X (#21285)"
    { 25316, 6021287 }, // "Recipe: Codex of Prayer of Healing V (#21287)"
    { 25320, 6020856 }, // "Recipe: Design: Heavy Golden Necklace of Battle (#20856)"
    { 25323, 6020855 }, // "Recipe: Design: Wicked Moonstone Ring (#20855)"
    { 25339, 6020854 }, // "Recipe: Design: Amulet of the Moon (#20854)"
    { 25345, 6021280 }, // "Recipe: Tome of Arcane Missiles VIII (#21280)"
    { 25347, 6021302 }, // "Recipe: Handbook of Deadly Poison V (#21302)"
    { 25357, 6021291 }, // "Recipe: Tablet of Healing Wave X (#21291)"
    { 25359, 6021293 }, // "Recipe: Tablet of Grace of Air Totem III (#21293)"
    { 25361, 6021292 }, // "Recipe: Tablet of Strength of Earth Totem V (#21292)"
    { 25392, 6029549 }, // "Recipe: Codex: Prayer of Fortitude III (#29549)"
    { 25610, 6020970 }, // "Recipe: Design: Pendant of the Agate Shield (#20970)"
    { 25612, 6020971 }, // "Recipe: Design: Heavy Iron Knuckles (#20971)"
    { 25617, 6020973 }, // "Recipe: Design: Blazing Citrine Ring (#20973)"
    { 25618, 6020974 }, // "Recipe: Design: Jade Pendant of Blasting (#20974)"
    { 25619, 6020975 }, // "Recipe: Design: The Jade Eye (#20975)"
    { 25622, 6020976 }, // "Recipe: Design: Citrine Pendant of Golden Healing (#20976)"
    { 25659, 6021025 }, // "Recipe: Dirge's Kickin' Chimaerok Chops (#21025)"
    { 25704, 6021099 }, // "Recipe: Smoked Sagefish (#21099)"
    { 25954, 6021219 }, // "Recipe: Sagefish Delight (#21219)"
    { 26085, 6021358 }, // "Recipe: Pattern: Soul Pouch (#21358)"
    { 26087, 6021371 }, // "Recipe: Pattern: Core Felcloth Bag (#21371)"
    { 26277, 6021547 }, // "Recipe: Elixir of Greater Firepower (#21547)"
    { 26279, 6021548 }, // "Recipe: Pattern: Stormshroud Gloves (#21548)"
    { 26403, 6021722 }, // "Recipe: Pattern: Festival Dress (#21722)"
    { 26407, 6021723 }, // "Recipe: Pattern: Festival Suit (#21723)"
    { 26416, 6021724 }, // "Recipe: Schematic: Small Blue Rocket (#21724)"
    { 26417, 6021725 }, // "Recipe: Schematic: Small Green Rocket (#21725)"
    { 26418, 6021726 }, // "Recipe: Schematic: Small Red Rocket (#21726)"
    { 26420, 6021727 }, // "Recipe: Schematic: Large Blue Rocket (#21727)"
    { 26421, 6021728 }, // "Recipe: Schematic: Large Green Rocket (#21728)"
    { 26422, 6021729 }, // "Recipe: Schematic: Large Red Rocket (#21729)"
    { 26423, 6021730 }, // "Recipe: Schematic: Blue Rocket Cluster (#21730)"
    { 26424, 6021731 }, // "Recipe: Schematic: Green Rocket Cluster (#21731)"
    { 26425, 6021732 }, // "Recipe: Schematic: Red Rocket Cluster (#21732)"
    { 26426, 6021733 }, // "Recipe: Schematic: Large Blue Rocket Cluster (#21733)"
    { 26427, 6021734 }, // "Recipe: Schematic: Large Green Rocket Cluster (#21734)"
    { 26428, 6021735 }, // "Recipe: Schematic: Large Red Rocket Cluster (#21735)"
    { 26442, 6021738 }, // "Recipe: Schematic: Firework Launcher (#21738)"
    { 26443, 6021737 }, // "Recipe: Schematic: Cluster Launcher (#21737)"
    { 26747, 6021892 }, // "Recipe: Pattern: Bolt of Imbued Netherweave (#21892)"
    { 26749, 6021893 }, // "Recipe: Pattern: Imbued Netherweave Bag (#21893)"
    { 26750, 6021894 }, // "Recipe: Pattern: Bolt of Soulcloth (#21894)"
    { 26751, 6021895 }, // "Recipe: Pattern: Primal Mooncloth (#21895)"
    { 26752, 6021908 }, // "Recipe: Pattern: Spellfire Belt (#21908)"
    { 26753, 6021909 }, // "Recipe: Pattern: Spellfire Gloves (#21909)"
    { 26754, 6021910 }, // "Recipe: Pattern: Spellfire Robe (#21910)"
    { 26755, 6021911 }, // "Recipe: Pattern: Spellfire Bag (#21911)"
    { 26756, 6021912 }, // "Recipe: Pattern: Frozen Shadoweave Shoulders (#21912)"
    { 26757, 6021914 }, // "Recipe: Pattern: Frozen Shadoweave Boots (#21914)"
    { 26758, 6021913 }, // "Recipe: Pattern: Frozen Shadoweave Robe (#21913)"
    { 26759, 6021915 }, // "Recipe: Pattern: Ebon Shadowbag (#21915)"
    { 26760, 6021916 }, // "Recipe: Pattern: Primal Mooncloth Belt (#21916)"
    { 26761, 6021918 }, // "Recipe: Pattern: Primal Mooncloth Shoulders (#21918)"
    { 26762, 6021917 }, // "Recipe: Pattern: Primal Mooncloth Robe (#21917)"
    { 26763, 6021919 }, // "Recipe: Pattern: Primal Mooncloth Bag (#21919)"
    { 26773, 6021896 }, // "Recipe: Pattern: Netherweave Robe (#21896)"
    { 26774, 6021897 }, // "Recipe: Pattern: Netherweave Tunic (#21897)"
    { 26775, 6021898 }, // "Recipe: Pattern: Imbued Netherweave Pants (#21898)"
    { 26776, 6021899 }, // "Recipe: Pattern: Imbued Netherweave Boots (#21899)"
    { 26777, 6021900 }, // "Recipe: Pattern: Imbued Netherweave Robe (#21900)"
    { 26778, 6021901 }, // "Recipe: Pattern: Imbued Netherweave Tunic (#21901)"
    { 26779, 6021902 }, // "Recipe: Pattern: Soulcloth Gloves (#21902)"
    { 26780, 6021903 }, // "Recipe: Pattern: Soulcloth Shoulders (#21903)"
    { 26781, 6021904 }, // "Recipe: Pattern: Soulcloth Vest (#21904)"
    { 26782, 6021905 }, // "Recipe: Pattern: Arcanoweave Bracers (#21905)"
    { 26783, 6021906 }, // "Recipe: Pattern: Arcanoweave Boots (#21906)"
    { 26784, 6021907 }, // "Recipe: Pattern: Arcanoweave Robe (#21907)"
    { 26873, 6021940 }, // "Recipe: Design: Golden Hare (#21940)"
    { 26875, 6021941 }, // "Recipe: Design: Black Pearl Panther (#21941)"
    { 26878, 6021942 }, // "Recipe: Design: Ruby Crown of Restoration (#21942)"
    { 26881, 6021943 }, // "Recipe: Design: Truesilver Crab (#21943)"
    { 26882, 6021944 }, // "Recipe: Design: Truesilver Boar (#21944)"
    { 26887, 6021945 }, // "Recipe: Design: The Aquamarine Ward (#21945)"
    { 26896, 6021947 }, // "Recipe: Design: Gem Studded Band (#21947)"
    { 26897, 6021948 }, // "Recipe: Design: Opal Necklace of Impact (#21948)"
    { 26900, 6021949 }, // "Recipe: Design: Ruby Serpent (#21949)"
    { 26906, 6021952 }, // "Recipe: Design: Emerald Crown of Destruction (#21952)"
    { 26909, 6021953 }, // "Recipe: Design: Emerald Owl (#21953)"
    { 26910, 6021954 }, // "Recipe: Design: Ring of Bitter Shadows (#21954)"
    { 26912, 6021955 }, // "Recipe: Design: Black Diamond Crab (#21955)"
    { 26914, 6021956 }, // "Recipe: Design: Dark Iron Scorpid (#21956)"
    { 26915, 6021957 }, // "Recipe: Design: Necklace of the Diamond Tower (#21957)"
    { 26991, 6022146 }, // "Recipe: Book: Gift of the Wild III (#22146)"
    { 27032, 6021992 }, // "Recipe: Manual: Netherweave Bandage (#21992)"
    { 27033, 6021993 }, // "Recipe: Manual: Heavy Netherweave Bandage (#21993)"
    { 27090, 6029550 }, // "Recipe: Tome of Conjure Water IX (#29550)"
    { 27127, 6022153 }, // "Recipe: Tome of Arcane Brilliance 2 (#22153)"
    { 27585, 6022209 }, // "Recipe: Plans: Heavy Obsidian Belt (#22209)"
    { 27586, 6022219 }, // "Recipe: Plans: Jagged Obsidian Shield (#22219)"
    { 27587, 6022222 }, // "Recipe: Plans: Thick Obsidian Breastplate (#22222)"
    { 27588, 6022214 }, // "Recipe: Plans: Light Obsidian Belt (#22214)"
    { 27589, 6022220 }, // "Recipe: Plans: Black Grasp of the Destroyer (#22220)"
    { 27590, 6022221 }, // "Recipe: Plans: Obsidian Mail Tunic (#22221)"
    { 27658, 6022307 }, // "Recipe: Pattern: Enchanted Mageweave Pouch (#22307)"
    { 27659, 6022308 }, // "Recipe: Pattern: Enchanted Runecloth Bag (#22308)"
    { 27660, 6022309 }, // "Recipe: Pattern: Big Bag of Enchantment (#22309)"
    { 27683, 6022393 }, // "Recipe: Codex: Prayer of Shadow Protection (#22393)"
    { 27724, 6022310 }, // "Recipe: Pattern: Cenarion Herb Bag (#22310)"
    { 27725, 6022312 }, // "Recipe: Pattern: Satchel of Cenarius (#22312)"
    { 27829, 6022388 }, // "Recipe: Plans: Titanic Leggings (#22388)"
    { 27830, 6022390 }, // "Recipe: Plans: Persuader (#22390)"
    { 27832, 6022389 }, // "Recipe: Plans: Sageblade (#22389)"
    { 27837, 6022392 }, // "Recipe: Formula: Enchant 2H Weapon - Agility (#22392)"
    { 27906, 6022530 }, // "Recipe: Formula: Enchant Bracer - Major Defense (#22530)"
    { 27911, 6022531 }, // "Recipe: Formula: Enchant Bracer - Superior Healing (#22531)"
    { 27913, 6022532 }, // "Recipe: Formula: Enchant Bracer - Restore Mana Prime (#22532)"
    { 27914, 6022533 }, // "Recipe: Formula: Enchant Bracer - Fortitude (#22533)"
    { 27917, 6022534 }, // "Recipe: Formula: Enchant Bracer - Spellpower (#22534)"
    { 27920, 6022535 }, // "Recipe: Formula: Enchant Ring - Striking (#22535)"
    { 27924, 6022536 }, // "Recipe: Formula: Enchant Ring - Spellpower (#22536)"
    { 27926, 6022537 }, // "Recipe: Formula: Enchant Ring - Healing Power (#22537)"
    { 27927, 6022538 }, // "Recipe: Formula: Enchant Ring - Stats (#22538)"
    { 27945, 6022539 }, // "Recipe: Formula: Enchant Shield - Intellect (#22539)"
    { 27946, 6022540 }, // "Recipe: Formula: Enchant Shield - Shield Block (#22540)"
    { 27947, 6022541 }, // "Recipe: Formula: Enchant Shield - Resistance (#22541)"
    { 27948, 6022542 }, // "Recipe: Formula: Enchant Boots - Vitality (#22542)"
    { 27950, 6022543 }, // "Recipe: Formula: Enchant Boots - Fortitude (#22543)"
    { 27951, 6022544 }, // "Recipe: Formula: Enchant Boots - Dexterity (#22544)"
    { 27954, 6022545 }, // "Recipe: Formula: Enchant Boots - Surefooted (#22545)"
    { 27960, 6022547 }, // "Recipe: Formula: Enchant Chest - Exceptional Stats (#22547)"
    { 27962, 6022548 }, // "Recipe: Formula: Enchant Cloak - Major Resistance (#22548)"
    { 27967, 6022552 }, // "Recipe: Formula: Enchant Weapon - Major Striking (#22552)"
    { 27968, 6022551 }, // "Recipe: Formula: Enchant Weapon - Major Intellect (#22551)"
    { 27971, 6022554 }, // "Recipe: Formula: Enchant 2H Weapon - Savagery (#22554)"
    { 27972, 6022553 }, // "Recipe: Formula: Enchant Weapon - Potency (#22553)"
    { 27975, 6022555 }, // "Recipe: Formula: Enchant Weapon - Major Spellpower (#22555)"
    { 27977, 6022556 }, // "Recipe: Formula: Enchant 2H Weapon - Major Agility (#22556)"
    { 27981, 6022560 }, // "Recipe: Formula: Enchant Weapon - Sunfire (#22560)"
    { 27982, 6022561 }, // "Recipe: Formula: Enchant Weapon - Soulfrost (#22561)"
    { 27984, 6022559 }, // "Recipe: Formula: Enchant Weapon - Mongoose (#22559)"
    { 28003, 6022558 }, // "Recipe: Formula: Enchant Weapon - Spellsurge (#22558)"
    { 28004, 6022557 }, // "Recipe: Formula: Enchant Weapon - Battlemaster (#22557)"
    { 28016, 6022562 }, // "Recipe: Formula: Superior Mana Oil (#22562)"
    { 28019, 6022563 }, // "Recipe: Formula: Superior Wizard Oil (#22563)"
    { 28022, 6022565 }, // "Recipe: Formula: Large Prismatic Shard (#22565)"
    { 28210, 6022683 }, // "Recipe: Pattern: Gaea's Embrace (#22683)"
    { 28267, 6022647 }, // "Recipe: Crunchy Spider Surprise (#22647)"
    { 28271, 6022739 }, // "Recipe: Tome of Polymorph: Turtle (#22739)"
    { 28327, 6022729 }, // "Recipe: Schematic: Steam Tonk Controller (#22729)"
    { 28461, 6022766 }, // "Recipe: Plans: Ironvine Breastplate (#22766)"
    { 28462, 6022767 }, // "Recipe: Plans: Ironvine Gloves (#22767)"
    { 28463, 6022768 }, // "Recipe: Plans: Ironvine Belt (#22768)"
    { 28472, 6022771 }, // "Recipe: Pattern: Bramblewood Helm (#22771)"
    { 28473, 6022770 }, // "Recipe: Pattern: Bramblewood Boots (#22770)"
    { 28474, 6022769 }, // "Recipe: Pattern: Bramblewood Belt (#22769)"
    { 28480, 6022774 }, // "Recipe: Pattern: Sylvan Vest (#22774)"
    { 28481, 6022773 }, // "Recipe: Pattern: Sylvan Crown (#22773)"
    { 28482, 6022772 }, // "Recipe: Pattern: Sylvan Shoulders (#22772)"
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
    { 28609, 6022890 }, // "Recipe: Tome of Frost Ward V (#22890)"
    { 28610, 6022891 }, // "Recipe: Grimoire of Shadow Ward IV (#22891)"
    { 28612, 6022897 }, // "Recipe: Tome of Conjure Food VII (#22897)"
    { 28903, 6023130 }, // "Recipe: Design: Teardrop Blood Garnet (#23130)"
    { 28905, 6023131 }, // "Recipe: Design: Bold Blood Garnet (#23131)"
    { 28906, 6023133 }, // "Recipe: Design: Runed Blood Garnet (#23133)"
    { 28907, 6023134 }, // "Recipe: Design: Delicate Blood Garnet (#23134)"
    { 28910, 6023135 }, // "Recipe: Design: Inscribed Flame Spessarite (#23135)"
    { 28912, 6023136 }, // "Recipe: Design: Luminous Flame Spessarite (#23136)"
    { 28914, 6023137 }, // "Recipe: Design: Glinting Flame Spessarite (#23137)"
    { 28915, 6023138 }, // "Recipe: Design: Potent Flame Spessarite (#23138)"
    { 28916, 6023140 }, // "Recipe: Design: Radiant Deep Peridot (#23140)"
    { 28917, 6023141 }, // "Recipe: Design: Jagged Deep Peridot (#23141)"
    { 28918, 6023142 }, // "Recipe: Design: Enduring Deep Peridot (#23142)"
    { 28924, 6023143 }, // "Recipe: Design: Dazzling Deep Peridot (#23143)"
    { 28925, 6023144 }, // "Recipe: Design: Glowing Shadow Draenite (#23144)"
    { 28927, 6023145 }, // "Recipe: Design: Royal Shadow Draenite (#23145)"
    { 28933, 6023146 }, // "Recipe: Design: Shifting Shadow Draenite (#23146)"
    { 28936, 6023147 }, // "Recipe: Design: Sovereign Shadow Draenite (#23147)"
    { 28938, 6023148 }, // "Recipe: Design: Brilliant Golden Draenite (#23148)"
    { 28944, 6023149 }, // "Recipe: Design: Gleaming Golden Draenite (#23149)"
    { 28947, 6023150 }, // "Recipe: Design: Thick Golden Draenite (#23150)"
    { 28948, 6023151 }, // "Recipe: Design: Rigid Golden Draenite (#23151)"
    { 28950, 6023152 }, // "Recipe: Design: Solid Azure Moonstone (#23152)"
    { 28953, 6023153 }, // "Recipe: Design: Sparkling Azure Moonstone (#23153)"
    { 28955, 6023154 }, // "Recipe: Design: Stormy Azure Moonstone (#23154)"
    { 28957, 6023155 }, // "Recipe: Design: Lustrous Azure Moonstone (#23155)"
    { 29228, 6023320 }, // "Recipe: Tablet of Flame Shock VI (#23320)"
    { 29566, 6023590 }, // "Recipe: Plans: Adamantite Maul (#23590)"
    { 29568, 6023591 }, // "Recipe: Plans: Adamantite Cleaver (#23591)"
    { 29569, 6023592 }, // "Recipe: Plans: Adamantite Dagger (#23592)"
    { 29571, 6023593 }, // "Recipe: Plans: Adamantite Rapier (#23593)"
    { 29603, 6023594 }, // "Recipe: Plans: Adamantite Plate Bracers (#23594)"
    { 29605, 6023595 }, // "Recipe: Plans: Adamantite Plate Gloves (#23595)"
    { 29606, 6023596 }, // "Recipe: Plans: Adamantite Breastplate (#23596)"
    { 29608, 6023597 }, // "Recipe: Plans: Enchanted Adamantite Belt (#23597)"
    { 29610, 6023599 }, // "Recipe: Plans: Enchanted Adamantite Breastplate (#23599)"
    { 29611, 6023598 }, // "Recipe: Plans: Enchanted Adamantite Boots (#23598)"
    { 29613, 6023600 }, // "Recipe: Plans: Enchanted Adamantite Leggings (#23600)"
    { 29614, 6023601 }, // "Recipe: Plans: Flamebane Bracers (#23601)"
    { 29615, 6023602 }, // "Recipe: Plans: Flamebane Helm (#23602)"
    { 29616, 6023603 }, // "Recipe: Plans: Flamebane Gloves (#23603)"
    { 29617, 6023604 }, // "Recipe: Plans: Flamebane Breastplate (#23604)"
    { 29619, 6023605 }, // "Recipe: Plans: Felsteel Gloves (#23605)"
    { 29620, 6023606 }, // "Recipe: Plans: Felsteel Leggings (#23606)"
    { 29621, 6023607 }, // "Recipe: Plans: Felsteel Helm (#23607)"
    { 29622, 6023621 }, // "Recipe: Plans: Gauntlets of the Iron Tower (#23621)"
    { 29628, 6023608 }, // "Recipe: Plans: Khorium Belt (#23608)"
    { 29629, 6023609 }, // "Recipe: Plans: Khorium Pants (#23609)"
    { 29630, 6023610 }, // "Recipe: Plans: Khorium Boots (#23610)"
    { 29642, 6023611 }, // "Recipe: Plans: Ragesteel Gloves (#23611)"
    { 29643, 6023612 }, // "Recipe: Plans: Ragesteel Helm (#23612)"
    { 29645, 6023613 }, // "Recipe: Plans: Ragesteel Breastplate (#23613)"
    { 29648, 6023615 }, // "Recipe: Plans: Swiftsteel Gloves (#23615)"
    { 29649, 6023617 }, // "Recipe: Plans: Earthpeace Breastplate (#23617)"
    { 29656, 6023618 }, // "Recipe: Plans: Adamantite Sharpening Stone (#23618)"
    { 29657, 6023619 }, // "Recipe: Plans: Felsteel Shield Spike (#23619)"
    { 29658, 6023620 }, // "Recipe: Plans: Felfury Gauntlets (#23620)"
    { 29662, 6023622 }, // "Recipe: Plans: Steelgrip Gauntlets (#23622)"
    { 29663, 6023623 }, // "Recipe: Plans: Storm Helm (#23623)"
    { 29664, 6023624 }, // "Recipe: Plans: Helm of the Stalwart Defender (#23624)"
    { 29668, 6023625 }, // "Recipe: Plans: Oathkeeper's Helm (#23625)"
    { 29669, 6023626 }, // "Recipe: Plans: Black Felsteel Bracers (#23626)"
    { 29671, 6023627 }, // "Recipe: Plans: Bracers of the Green Fortress (#23627)"
    { 29672, 6023628 }, // "Recipe: Plans: Blessed Bracers (#23628)"
    { 29688, 6023574 }, // "Recipe: Transmute Primal Might (#23574)"
    { 29692, 6023629 }, // "Recipe: Plans: Felsteel Longblade (#23629)"
    { 29693, 6023630 }, // "Recipe: Plans: Khorium Champion (#23630)"
    { 29694, 6023631 }, // "Recipe: Plans: Fel Edged Battleaxe (#23631)"
    { 29695, 6023632 }, // "Recipe: Plans: Felsteel Reaper (#23632)"
    { 29696, 6023633 }, // "Recipe: Plans: Runic Hammer (#23633)"
    { 29697, 6023634 }, // "Recipe: Plans: Fel Hardened Maul (#23634)"
    { 29698, 6023635 }, // "Recipe: Plans: Eternium Runed Blade (#23635)"
    { 29699, 6023636 }, // "Recipe: Plans: Dirge (#23636)"
    { 29700, 6023637 }, // "Recipe: Plans: Hand of Eternity (#23637)"
    { 29728, 6023638 }, // "Recipe: Plans: Lesser Ward of Shielding (#23638)"
    { 29729, 6023639 }, // "Recipe: Plans: Greater Ward of Shielding (#23639)"
    { 30313, 6023799 }, // "Recipe: Schematic: Adamantite Rifle (#23799)"
    { 30314, 6023800 }, // "Recipe: Schematic: Felsteel Boomstick (#23800)"
    { 30315, 6023802 }, // "Recipe: Schematic: Ornate Khorium Rifle (#23802)"
    { 30316, 6023803 }, // "Recipe: Schematic: Cogspinner Goggles (#23803)"
    { 30317, 6023804 }, // "Recipe: Schematic: Power Amplification Goggles (#23804)"
    { 30318, 6023805 }, // "Recipe: Schematic: Ultra-Spectropic Detection Goggles (#23805)"
    { 30325, 6023806 }, // "Recipe: Schematic: Hyper-Vision Goggles (#23806)"
    { 30329, 6023807 }, // "Recipe: Schematic: Adamantite Scope (#23807)"
    { 30332, 6023808 }, // "Recipe: Schematic: Khorium Scope (#23808)"
    { 30334, 6023809 }, // "Recipe: Schematic: Stabilized Eternium Scope (#23809)"
    { 30337, 6023810 }, // "Recipe: Schematic: Crashin' Thrashin' Robot (#23810)"
    { 30341, 6023811 }, // "Recipe: Schematic: White Smoke Flare (#23811)"
    { 30344, 6023814 }, // "Recipe: Schematic: Green Smoke Flare (#23814)"
    { 30347, 6023815 }, // "Recipe: Schematic: Adamantite Shell Machine (#23815)"
    { 30348, 6023816 }, // "Recipe: Schematic: Fel Iron Toolbox (#23816)"
    { 30349, 6023817 }, // "Recipe: Schematic: Titanium Toolbox (#23817)"
    { 30547, 6023874 }, // "Recipe: Schematic: Elemental Seaforium Charge (#23874)"
    { 30548, 6023888 }, // "Recipe: Schematic: Zapthrottle Mote Extractor (#23888)"
    { 30549, 6023882 }, // "Recipe: Schematic: Critter Enlarger (#23882)"
    { 30551, 6023883 }, // "Recipe: Schematic: Healing Potion Injector (#23883)"
    { 30552, 6023884 }, // "Recipe: Schematic: Mana Potion Injector (#23884)"
    { 30555, 6023885 }, // "Recipe: Schematic: Remote Mail Terminal (#23885)"
    { 30556, 6023887 }, // "Recipe: Schematic: Rocket Boots Xtreme (#23887)"
    { 31016, 6024102 }, // "Recipe: Manual of Eviscerate IX (#24102)"
    { 31018, 6024101 }, // "Recipe: Book of Ferocious Bite V (#24101)"
    { 31053, 6024158 }, // "Recipe: Design: Khorium Band of Shadows (#24158)"
    { 31054, 6024159 }, // "Recipe: Design: Khorium Band of Frost (#24159)"
    { 31055, 6024160 }, // "Recipe: Design: Khorium Inferno Band (#24160)"
    { 31056, 6024161 }, // "Recipe: Design: Khorium Band of Leaves (#24161)"
    { 31057, 6024162 }, // "Recipe: Design: Arcane Khorium Band (#24162)"
    { 31058, 6024163 }, // "Recipe: Design: Heavy Felsteel Ring (#24163)"
    { 31060, 6024164 }, // "Recipe: Design: Delicate Eternium Ring (#24164)"
    { 31061, 6024165 }, // "Recipe: Design: Blazing Eternium Band (#24165)"
    { 31062, 6024174 }, // "Recipe: Design: Pendant of Frozen Flame (#24174)"
    { 31063, 6024175 }, // "Recipe: Design: Pendant of Thawing (#24175)"
    { 31064, 6024176 }, // "Recipe: Design: Pendant of Withering (#24176)"
    { 31065, 6024177 }, // "Recipe: Design: Pendant of Shadow's End (#24177)"
    { 31066, 6024178 }, // "Recipe: Design: Pendant of the Null Rune (#24178)"
    { 31067, 6024166 }, // "Recipe: Design: Thick Felsteel Necklace (#24166)"
    { 31068, 6024167 }, // "Recipe: Design: Living Ruby Pendant (#24167)"
    { 31070, 6024168 }, // "Recipe: Design: Braided Eternium Chain (#24168)"
    { 31071, 6024169 }, // "Recipe: Design: Eye of the Night (#24169)"
    { 31072, 6024170 }, // "Recipe: Design: Embrace of the Dawn (#24170)"
    { 31076, 6024171 }, // "Recipe: Design: Chain of the Twilight Owl (#24171)"
    { 31077, 6024172 }, // "Recipe: Design: Coronet of Verdant Flame (#24172)"
    { 31078, 6024173 }, // "Recipe: Design: Circlet of Arcane Might (#24173)"
    { 31079, 6024179 }, // "Recipe: Design: Felsteel Boar (#24179)"
    { 31080, 6024180 }, // "Recipe: Design: Dawnstone Crab (#24180)"
    { 31081, 6024181 }, // "Recipe: Design: Living Ruby Serpent (#24181)"
    { 31082, 6024182 }, // "Recipe: Design: Talasite Owl (#24182)"
    { 31083, 6024183 }, // "Recipe: Design: Nightseye Panther (#24183)"
    { 31084, 6024193 }, // "Recipe: Design: Bold Living Ruby (#24193)"
    { 31085, 6024194 }, // "Recipe: Design: Delicate Living Ruby (#24194)"
    { 31087, 6024195 }, // "Recipe: Design: Teardrop Living Ruby (#24195)"
    { 31088, 6024196 }, // "Recipe: Design: Runed Living Ruby (#24196)"
    { 31089, 6024192 }, // "Recipe: Design: Bright Living Ruby (#24192)"
    { 31090, 6024197 }, // "Recipe: Design: Subtle Living Ruby (#24197)"
    { 31091, 6024198 }, // "Recipe: Design: Flashing Living Ruby (#24198)"
    { 31092, 6024199 }, // "Recipe: Design: Solid Star of Elune (#24199)"
    { 31094, 6024201 }, // "Recipe: Design: Lustrous Star of Elune (#24201)"
    { 31095, 6024202 }, // "Recipe: Design: Stormy Star of Elune (#24202)"
    { 31096, 6024203 }, // "Recipe: Design: Brilliant Dawnstone (#24203)"
    { 31097, 6024204 }, // "Recipe: Design: Smooth Dawnstone (#24204)"
    { 31098, 6024205 }, // "Recipe: Design: Rigid Dawnstone (#24205)"
    { 31099, 6024206 }, // "Recipe: Design: Gleaming Dawnstone (#24206)"
    { 31100, 6024207 }, // "Recipe: Design: Thick Dawnstone (#24207)"
    { 31101, 6024208 }, // "Recipe: Design: Mystic Dawnstone (#24208)"
    { 31102, 6024209 }, // "Recipe: Design: Sovereign Nightseye (#24209)"
    { 31103, 6024210 }, // "Recipe: Design: Shifting Nightseye (#24210)"
    { 31104, 6024211 }, // "Recipe: Design: Glowing Nightseye (#24211)"
    { 31105, 6024212 }, // "Recipe: Design: Royal Nightseye (#24212)"
    { 31106, 6024213 }, // "Recipe: Design: Inscribed Noble Topaz (#24213)"
    { 31107, 6024214 }, // "Recipe: Design: Potent Noble Topaz (#24214)"
    { 31108, 6024215 }, // "Recipe: Design: Luminous Noble Topaz (#24215)"
    { 31109, 6024216 }, // "Recipe: Design: Glinting Noble Topaz (#24216)"
    { 31110, 6024217 }, // "Recipe: Design: Enduring Talasite (#24217)"
    { 31111, 6024218 }, // "Recipe: Design: Radiant Talasite (#24218)"
    { 31112, 6024219 }, // "Recipe: Design: Dazzling Talasite (#24219)"
    { 31113, 6024220 }, // "Recipe: Design: Jagged Talasite (#24220)"
    { 31149, 6024200 }, // "Recipe: Design: Sparkling Star of Elune (#24200)"
    { 31373, 6024316 }, // "Recipe: Pattern: Spellcloth (#24316)"
    { 31430, 6024292 }, // "Recipe: Pattern: Mystic Spellthread (#24292)"
    { 31431, 6024293 }, // "Recipe: Pattern: Silver Spellthread (#24293)"
    { 31432, 6024294 }, // "Recipe: Pattern: Runic Spellthread (#24294)"
    { 31433, 6024295 }, // "Recipe: Pattern: Golden Spellthread (#24295)"
    { 31434, 6024296 }, // "Recipe: Pattern: Unyielding Bracers (#24296)"
    { 31435, 6024297 }, // "Recipe: Pattern: Bracers of Havok (#24297)"
    { 31437, 6024298 }, // "Recipe: Pattern: Blackstrike Bracers (#24298)"
    { 31438, 6024299 }, // "Recipe: Pattern: Cloak of the Black Void (#24299)"
    { 31440, 6024300 }, // "Recipe: Pattern: Cloak of Eternity (#24300)"
    { 31441, 6024301 }, // "Recipe: Pattern: White Remedy Cape (#24301)"
    { 31442, 6024302 }, // "Recipe: Pattern: Unyielding Girdle (#24302)"
    { 31443, 6024303 }, // "Recipe: Pattern: Girdle of Ruination (#24303)"
    { 31444, 6024304 }, // "Recipe: Pattern: Black Belt of Knowledge (#24304)"
    { 31448, 6024305 }, // "Recipe: Pattern: Resolute Cape (#24305)"
    { 31449, 6024306 }, // "Recipe: Pattern: Vengeance Wrap (#24306)"
    { 31450, 6024307 }, // "Recipe: Pattern: Manaweave Cloak (#24307)"
    { 31451, 6024308 }, // "Recipe: Pattern: Whitemend Pants (#24308)"
    { 31452, 6024309 }, // "Recipe: Pattern: Spellstrike Pants (#24309)"
    { 31453, 6024310 }, // "Recipe: Pattern: Battlecast Pants (#24310)"
    { 31454, 6024311 }, // "Recipe: Pattern: Whitemend Hood (#24311)"
    { 31455, 6024312 }, // "Recipe: Pattern: Spellstrike Hood (#24312)"
    { 31456, 6024313 }, // "Recipe: Pattern: Battlecast Hood (#24313)"
    { 31459, 6024314 }, // "Recipe: Pattern: Bag of Jewels (#24314)"
    { 31461, 6024315 }, // "Recipe: Pattern: Heavy Netherweave Net (#24315)"
    { 31709, 6024345 }, // "Recipe: Book of Cower IV (#24345)"
    { 32285, 6025526 }, // "Recipe: Plans: Greater Rune of Warding (#25526)"
    { 32455, 6025720 }, // "Recipe: Pattern: Heavy Knothide Leather (#25720)"
    { 32457, 6025721 }, // "Recipe: Pattern: Vindicator's Armor Kit (#25721)"
    { 32458, 6025722 }, // "Recipe: Pattern: Magister's Armor Kit (#25722)"
    { 32461, 6025725 }, // "Recipe: Pattern: Riding Crop (#25725)"
    { 32482, 6025726 }, // "Recipe: Pattern: Comfortable Insoles (#25726)"
    { 32485, 6025728 }, // "Recipe: Pattern: Stylin' Purple Hat (#25728)"
    { 32487, 6025729 }, // "Recipe: Pattern: Stylin' Adventure Hat (#25729)"
    { 32488, 6025731 }, // "Recipe: Pattern: Stylin' Crimson Hat (#25731)"
    { 32489, 6025730 }, // "Recipe: Pattern: Stylin' Jungle Hat (#25730)"
    { 32490, 6025732 }, // "Recipe: Pattern: Fel Leather Gloves (#25732)"
    { 32493, 6025733 }, // "Recipe: Pattern: Fel Leather Boots (#25733)"
    { 32494, 6025734 }, // "Recipe: Pattern: Fel Leather Leggings (#25734)"
    { 32495, 6025735 }, // "Recipe: Pattern: Heavy Clefthoof Vest (#25735)"
    { 32496, 6025736 }, // "Recipe: Pattern: Heavy Clefthoof Leggings (#25736)"
    { 32497, 6025737 }, // "Recipe: Pattern: Heavy Clefthoof Boots (#25737)"
    { 32498, 6025738 }, // "Recipe: Pattern: Felstalker Belt (#25738)"
    { 32499, 6025739 }, // "Recipe: Pattern: Felstalker Bracers (#25739)"
    { 32500, 6025740 }, // "Recipe: Pattern: Felstalker Breastplate (#25740)"
    { 32501, 6025741 }, // "Recipe: Pattern: Netherfury Belt (#25741)"
    { 32502, 6025742 }, // "Recipe: Pattern: Netherfury Leggings (#25742)"
    { 32503, 6025743 }, // "Recipe: Pattern: Netherfury Boots (#25743)"
    { 32656, 6025846 }, // "Recipe: Plans: Adamantite Rod (#25846)"
    { 32657, 6025847 }, // "Recipe: Plans: Eternium Rod (#25847)"
    { 32665, 6025848 }, // "Recipe: Formula: Runed Adamantite Rod (#25848)"
    { 32667, 6025849 }, // "Recipe: Formula: Runed Eternium Rod (#25849)"
    { 32765, 6025869 }, // "Recipe: Transmute Earthstorm Diamond (#25869)"
    { 32766, 6025870 }, // "Recipe: Transmute Skyfire Diamond (#25870)"
    { 32814, 6025887 }, // "Recipe: Schematic: Purple Smoke Flare (#25887)"
    { 32866, 6025902 }, // "Recipe: Design: Powerful Earthstorm Diamond (#25902)"
    { 32867, 6025903 }, // "Recipe: Design: Bracing Earthstorm Diamond (#25903)"
    { 32868, 6025905 }, // "Recipe: Design: Tenacious Earthstorm Diamond (#25905)"
    { 32869, 6025906 }, // "Recipe: Design: Brutal Earthstorm Diamond (#25906)"
    { 32870, 6025904 }, // "Recipe: Design: Insightful Earthstorm Diamond (#25904)"
    { 32871, 6025907 }, // "Recipe: Design: Destructive Skyfire Diamond (#25907)"
    { 32872, 6025909 }, // "Recipe: Design: Mystical Skyfire Diamond (#25909)"
    { 32873, 6025908 }, // "Recipe: Design: Swift Skyfire Diamond (#25908)"
    { 32874, 6025910 }, // "Recipe: Design: Enigmatic Skyfire Diamond (#25910)"
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
    { 33717, 6031501 }, // "Recipe: Tome of Conjure Food VIII (#31501)"
    { 33992, 6028270 }, // "Recipe: Formula: Enchant Chest - Major Resilience (#28270)"
    { 33994, 6028271 }, // "Recipe: Formula: Enchant Gloves - Precise Strikes (#28271)"
    { 33997, 6028272 }, // "Recipe: Formula: Enchant Gloves - Major Spellpower (#28272)"
    { 33999, 6028273 }, // "Recipe: Formula: Enchant Gloves - Major Healing (#28273)"
    { 34003, 6028274 }, // "Recipe: Formula: Enchant Cloak - Spell Penetration (#28274)"
    { 34005, 6028276 }, // "Recipe: Formula: Enchant Cloak - Greater Arcane Resistance (#28276)"
    { 34006, 6028277 }, // "Recipe: Formula: Enchant Cloak - Greater Shadow Resistance (#28277)"
    { 34007, 6028279 }, // "Recipe: Formula: Enchant Boots - Cat's Swiftness (#28279)"
    { 34008, 6028280 }, // "Recipe: Formula: Enchant Boots - Boar's Speed (#28280)"
    { 34009, 6028282 }, // "Recipe: Formula: Enchant Shield - Major Stamina (#28282)"
    { 34010, 6028281 }, // "Recipe: Formula: Enchant Weapon - Major Healing (#28281)"
    { 34069, 6028291 }, // "Recipe: Design: Smooth Golden Draenite (#28291)"
    { 34590, 6028596 }, // "Recipe: Design: Bright Blood Garnet (#28596)"
    { 34608, 6028632 }, // "Recipe: Plans: Adamantite Weightstone (#28632)"
    { 35520, 6029669 }, // "Recipe: Pattern: Shadow Armor Kit (#29669)"
    { 35521, 6029672 }, // "Recipe: Pattern: Flame Armor Kit (#29672)"
    { 35522, 6029673 }, // "Recipe: Pattern: Frost Armor Kit (#29673)"
    { 35523, 6029674 }, // "Recipe: Pattern: Nature Armor Kit (#29674)"
    { 35524, 6029675 }, // "Recipe: Pattern: Arcane Armor Kit (#29675)"
    { 35525, 6029677 }, // "Recipe: Pattern: Enchanted Felscale Leggings (#29677)"
    { 35526, 6029682 }, // "Recipe: Pattern: Enchanted Felscale Gloves (#29682)"
    { 35527, 6029684 }, // "Recipe: Pattern: Enchanted Felscale Boots (#29684)"
    { 35528, 6029691 }, // "Recipe: Pattern: Flamescale Boots (#29691)"
    { 35529, 6029689 }, // "Recipe: Pattern: Flamescale Leggings (#29689)"
    { 35530, 6029664 }, // "Recipe: Pattern: Reinforced Mining Bag (#29664)"
    { 35531, 6029693 }, // "Recipe: Pattern: Flamescale Belt (#29693)"
    { 35532, 6029698 }, // "Recipe: Pattern: Enchanted Clefthoof Leggings (#29698)"
    { 35533, 6029700 }, // "Recipe: Pattern: Enchanted Clefthoof Gloves (#29700)"
    { 35534, 6029701 }, // "Recipe: Pattern: Enchanted Clefthoof Boots (#29701)"
    { 35535, 6029702 }, // "Recipe: Pattern: Blastguard Pants (#29702)"
    { 35536, 6029703 }, // "Recipe: Pattern: Blastguard Boots (#29703)"
    { 35537, 6029704 }, // "Recipe: Pattern: Blastguard Belt (#29704)"
    { 35538, 6029713 }, // "Recipe: Pattern: Drums of Panic (#29713)"
    { 35539, 6029714 }, // "Recipe: Pattern: Drums of Restoration (#29714)"
    { 35543, 6029717 }, // "Recipe: Pattern: Drums of Battle (#29717)"
    { 35544, 6029718 }, // "Recipe: Pattern: Drums of Speed (#29718)"
    { 35549, 6029719 }, // "Recipe: Pattern: Cobrahide Leg Armor (#29719)"
    { 35554, 6029722 }, // "Recipe: Pattern: Nethercobra Leg Armor (#29722)"
    { 35555, 6029720 }, // "Recipe: Pattern: Clefthide Leg Armor (#29720)"
    { 35557, 6029721 }, // "Recipe: Pattern: Nethercleft Leg Armor (#29721)"
    { 35558, 6029723 }, // "Recipe: Pattern: Cobrascale Hood (#29723)"
    { 35559, 6029724 }, // "Recipe: Pattern: Cobrascale Gloves (#29724)"
    { 35560, 6029725 }, // "Recipe: Pattern: Windscale Hood (#29725)"
    { 35561, 6029726 }, // "Recipe: Pattern: Hood of Primal Life (#29726)"
    { 35562, 6029727 }, // "Recipe: Pattern: Gloves of the Living Touch (#29727)"
    { 35563, 6029728 }, // "Recipe: Pattern: Windslayer Wraps (#29728)"
    { 35564, 6029729 }, // "Recipe: Pattern: Living Dragonscale Helm (#29729)"
    { 35567, 6029730 }, // "Recipe: Pattern: Earthen Netherscale Boots (#29730)"
    { 35568, 6029731 }, // "Recipe: Pattern: Windstrike Gloves (#29731)"
    { 35572, 6029732 }, // "Recipe: Pattern: Netherdrake Helm (#29732)"
    { 35573, 6029733 }, // "Recipe: Pattern: Netherdrake Gloves (#29733)"
    { 35574, 6029734 }, // "Recipe: Pattern: Thick Netherscale Breastplate (#29734)"
    { 36210, 6030156 }, // "Recipe: Clam Bar (#30156)"
    { 36315, 6030280 }, // "Recipe: Pattern: Belt of Blasting (#30280)"
    { 36316, 6030281 }, // "Recipe: Pattern: Belt of the Long Road (#30281)"
    { 36317, 6030282 }, // "Recipe: Pattern: Boots of Blasting (#30282)"
    { 36318, 6030283 }, // "Recipe: Pattern: Boots of the Long Road (#30283)"
    { 36349, 6030301 }, // "Recipe: Pattern: Belt of Natural Power (#30301)"
    { 36351, 6030302 }, // "Recipe: Pattern: Belt of Deep Shadow (#30302)"
    { 36352, 6030303 }, // "Recipe: Pattern: Belt of the Black Eagle (#30303)"
    { 36353, 6030304 }, // "Recipe: Pattern: Monsoon Belt (#30304)"
    { 36355, 6030305 }, // "Recipe: Pattern: Boots of Natural Grace (#30305)"
    { 36357, 6030306 }, // "Recipe: Pattern: Boots of Utter Darkness (#30306)"
    { 36358, 6030307 }, // "Recipe: Pattern: Boots of the Crimson Hawk (#30307)"
    { 36359, 6030308 }, // "Recipe: Pattern: Hurricane Boots (#30308)"
    { 36389, 6030321 }, // "Recipe: Plans: Belt of the Guardian (#30321)"
    { 36390, 6030322 }, // "Recipe: Plans: Red Belt of Battle (#30322)"
    { 36391, 6030323 }, // "Recipe: Plans: Boots of the Protector (#30323)"
    { 36392, 6030324 }, // "Recipe: Plans: Red Havoc Boots (#30324)"
    { 36686, 6030483 }, // "Recipe: Pattern: Shadowcloth (#30483)"
    { 37855, 6030826 }, // "Recipe: Design: Ring of Arcane Shielding (#30826)"
    { 37873, 6030833 }, // "Recipe: Pattern: Cloak of Arcane Evasion (#30833)"
    { 37882, 6030842 }, // "Recipe: Pattern: Flameheart Bracers (#30842)"
    { 37883, 6030843 }, // "Recipe: Pattern: Flameheart Gloves (#30843)"
    { 37884, 6030844 }, // "Recipe: Pattern: Flameheart Vest (#30844)"
    { 38473, 6031390 }, // "Recipe: Plans: Wildguard Breastplate (#31390)"
    { 38475, 6031391 }, // "Recipe: Plans: Wildguard Leggings (#31391)"
    { 38476, 6031392 }, // "Recipe: Plans: Wildguard Helm (#31392)"
    { 38477, 6031393 }, // "Recipe: Plans: Iceguard Breastplate (#31393)"
    { 38478, 6031394 }, // "Recipe: Plans: Iceguard Leggings (#31394)"
    { 38479, 6031395 }, // "Recipe: Plans: Iceguard Helm (#31395)"
    { 38503, 6031401 }, // "Recipe: Design: The Frozen Eye (#31401)"
    { 38504, 6031402 }, // "Recipe: Design: The Natural Ward (#31402)"
    { 38867, 6031675 }, // "Recipe: Mok'Nathal Shortribs (#31675)"
    { 38868, 6031674 }, // "Recipe: Crunchy Serpent (#31674)"
    { 38960, 6031680 }, // "Recipe: Fel Strength Elixir (#31680)"
    { 38961, 6031682 }, // "Recipe: Fel Mana Potion (#31682)"
    { 38962, 6031681 }, // "Recipe: Fel Regeneration Potion (#31681)"
    { 39374, 6031837 }, // "Recipe: Codex: Prayer of Shadow Protection II (#31837)"
    { 39451, 6031870 }, // "Recipe: Design: Great Golden Draenite (#31870)"
    { 39452, 6031875 }, // "Recipe: Design: Great Dawnstone (#31875)"
    { 39455, 6031871 }, // "Recipe: Design: Balanced Shadow Draenite (#31871)"
    { 39458, 6031872 }, // "Recipe: Design: Infused Shadow Draenite (#31872)"
    { 39462, 6031877 }, // "Recipe: Design: Infused Nightseye (#31877)"
    { 39463, 6031876 }, // "Recipe: Design: Balanced Nightseye (#31876)"
    { 39466, 6031873 }, // "Recipe: Design: Veiled Flame Spessarite (#31873)"
    { 39467, 6031874 }, // "Recipe: Design: Wicked Flame Spessarite (#31874)"
    { 39470, 6031878 }, // "Recipe: Design: Veiled Noble Topaz (#31878)"
    { 39471, 6031879 }, // "Recipe: Design: Wicked Noble Topaz (#31879)"
    { 39637, 6032070 }, // "Recipe: Earthen Elixir (#32070)"
    { 39639, 6032071 }, // "Recipe: Elixir of Ironskin (#32071)"
    { 39705, 6032274 }, // "Recipe: Design: Bold Crimson Spinel (#32274)"
    { 39706, 6032277 }, // "Recipe: Design: Delicate Crimson Spinel (#32277)"
    { 39710, 6032281 }, // "Recipe: Design: Teardrop Crimson Spinel (#32281)"
    { 39711, 6032282 }, // "Recipe: Design: Runed Crimson Spinel (#32282)"
    { 39712, 6032283 }, // "Recipe: Design: Bright Crimson Spinel (#32283)"
    { 39713, 6032284 }, // "Recipe: Design: Subtle Crimson Spinel (#32284)"
    { 39714, 6032285 }, // "Recipe: Design: Flashing Crimson Spinel (#32285)"
    { 39715, 6032286 }, // "Recipe: Design: Solid Empyrean Sapphire (#32286)"
    { 39716, 6032287 }, // "Recipe: Design: Sparkling Empyrean Sapphire (#32287)"
    { 39717, 6032288 }, // "Recipe: Design: Lustrous Empyrean Sapphire (#32288)"
    { 39718, 6032289 }, // "Recipe: Design: Stormy Empyrean Sapphire (#32289)"
    { 39719, 6032290 }, // "Recipe: Design: Brilliant Lionseye (#32290)"
    { 39720, 6032291 }, // "Recipe: Design: Smooth Lionseye (#32291)"
    { 39721, 6032292 }, // "Recipe: Design: Rigid Lionseye (#32292)"
    { 39722, 6032293 }, // "Recipe: Design: Gleaming Lionseye (#32293)"
    { 39723, 6032294 }, // "Recipe: Design: Thick Lionseye (#32294)"
    { 39724, 6032295 }, // "Recipe: Design: Mystic Lionseye (#32295)"
    { 39725, 6032296 }, // "Recipe: Design: Great Lionseye (#32296)"
    { 39727, 6032297 }, // "Recipe: Design: Sovereign Shadowsong Amethyst (#32297)"
    { 39728, 6032298 }, // "Recipe: Design: Shifting Shadowsong Amethyst (#32298)"
    { 39729, 6032299 }, // "Recipe: Design: Balanced Shadowsong Amethyst (#32299)"
    { 39730, 6032300 }, // "Recipe: Design: Infused Shadowsong Amethyst (#32300)"
    { 39731, 6032301 }, // "Recipe: Design: Glowing Shadowsong Amethyst (#32301)"
    { 39732, 6032302 }, // "Recipe: Design: Royal Shadowsong Amethyst (#32302)"
    { 39733, 6032303 }, // "Recipe: Design: Inscribed Pyrestone (#32303)"
    { 39734, 6032304 }, // "Recipe: Design: Potent Pyrestone (#32304)"
    { 39735, 6032305 }, // "Recipe: Design: Luminous Pyrestone (#32305)"
    { 39736, 6032306 }, // "Recipe: Design: Glinting Pyrestone (#32306)"
    { 39737, 6032307 }, // "Recipe: Design: Veiled Pyrestone (#32307)"
    { 39738, 6032308 }, // "Recipe: Design: Wicked Pyrestone (#32308)"
    { 39739, 6032309 }, // "Recipe: Design: Enduring Seaspray Emerald (#32309)"
    { 39740, 6032310 }, // "Recipe: Design: Radiant Seaspray Emerald (#32310)"
    { 39741, 6032311 }, // "Recipe: Design: Dazzling Seaspray Emerald (#32311)"
    { 39742, 6032312 }, // "Recipe: Design: Jagged Seaspray Emerald (#32312)"
    { 39895, 6032381 }, // "Recipe: Schematic: Fused Wiring (#32381)"
    { 39961, 6032412 }, // "Recipe: Design: Relentless Earthstorm Diamond (#32412)"
    { 39963, 6032411 }, // "Recipe: Design: Thundering Skyfire Diamond (#32411)"
    { 39997, 6032429 }, // "Recipe: Pattern: Boots of Shackled Souls (#32429)"
    { 40001, 6032431 }, // "Recipe: Pattern: Greaves of Shackled Souls (#32431)"
    { 40002, 6032432 }, // "Recipe: Pattern: Waistguard of Shackled Souls (#32432)"
    { 40003, 6032433 }, // "Recipe: Pattern: Redeemed Soul Moccasins (#32433)"
    { 40004, 6032434 }, // "Recipe: Pattern: Redeemed Soul Wristguards (#32434)"
    { 40005, 6032435 }, // "Recipe: Pattern: Redeemed Soul Legguards (#32435)"
    { 40006, 6032436 }, // "Recipe: Pattern: Redeemed Soul Cinch (#32436)"
    { 40020, 6032437 }, // "Recipe: Pattern: Soulguard Slippers (#32437)"
    { 40021, 6032438 }, // "Recipe: Pattern: Soulguard Bracers (#32438)"
    { 40023, 6032439 }, // "Recipe: Pattern: Soulguard Leggings (#32439)"
    { 40024, 6032440 }, // "Recipe: Pattern: Soulguard Girdle (#32440)"
    { 40033, 6032441 }, // "Recipe: Plans: Shadesteel Sabots (#32441)"
    { 40034, 6032442 }, // "Recipe: Plans: Shadesteel Bracers (#32442)"
    { 40035, 6032443 }, // "Recipe: Plans: Shadesteel Greaves (#32443)"
    { 40036, 6032444 }, // "Recipe: Plans: Shadesteel Girdle (#32444)"
    { 40060, 6032447 }, // "Recipe: Pattern: Night's End (#32447)"
    { 41132, 6032736 }, // "Recipe: Plans: Swiftsteel Bracers (#32736)"
    { 41133, 6032737 }, // "Recipe: Plans: Swiftsteel Shoulders (#32737)"
    { 41134, 6032738 }, // "Recipe: Plans: Dawnsteel Bracers (#32738)"
    { 41135, 6032739 }, // "Recipe: Plans: Dawnsteel Shoulders (#32739)"
    { 41156, 6032744 }, // "Recipe: Pattern: Bracers of Renewed Life (#32744)"
    { 41157, 6032745 }, // "Recipe: Pattern: Shoulderpads of Renewed Life (#32745)"
    { 41158, 6032746 }, // "Recipe: Pattern: Swiftstrike Bracers (#32746)"
    { 41160, 6032747 }, // "Recipe: Pattern: Swiftstrike Shoulders (#32747)"
    { 41161, 6032748 }, // "Recipe: Pattern: Bindings of Lightning Reflexes (#32748)"
    { 41162, 6032749 }, // "Recipe: Pattern: Shoulders of Lightning Reflexes (#32749)"
    { 41163, 6032750 }, // "Recipe: Pattern: Living Earth Bindings (#32750)"
    { 41164, 6032751 }, // "Recipe: Pattern: Living Earth Shoulders (#32751)"
    { 41205, 6032754 }, // "Recipe: Pattern: Bracers of Nimble Thought (#32754)"
    { 41206, 6032755 }, // "Recipe: Pattern: Mantle of Nimble Thought (#32755)"
    { 41207, 6032752 }, // "Recipe: Pattern: Swiftheal Wraps (#32752)"
    { 41208, 6032753 }, // "Recipe: Pattern: Swiftheal Mantle (#32753)"
    { 42546, 6033124 }, // "Recipe: Pattern: Cloak of Darkness (#33124)"
    { 42558, 6033305 }, // "Recipe: Design: Don Julio's Heart (#33305)"
    { 42588, 6033155 }, // "Recipe: Design: Kailee's Rose (#33155)"
    { 42589, 6033156 }, // "Recipe: Design: Crimson Sun (#33156)"
    { 42590, 6033157 }, // "Recipe: Design: Falling Star (#33157)"
    { 42591, 6033158 }, // "Recipe: Design: Stone of Blades (#33158)"
    { 42592, 6033159 }, // "Recipe: Design: Blood of Amber (#33159)"
    { 42593, 6033160 }, // "Recipe: Design: Facet of Eternity (#33160)"
    { 42620, 6033165 }, // "Recipe: Formula: Enchant Weapon - Greater Agility (#33165)"
    { 42662, 6033174 }, // "Recipe: Plans: Ragesteel Shoulders (#33174)"
    { 42688, 6033186 }, // "Recipe: Plans: Adamantite Weapon Chain (#33186)"
    { 42731, 6033205 }, // "Recipe: Pattern: Shadowprowler's Chestguard (#33205)"
    { 42736, 6033209 }, // "Recipe: Flask of Chromatic Wonder (#33209)"
    { 42974, 6033307 }, // "Recipe: Formula: Enchant Weapon - Executioner (#33307)"
    { 43308, 6034109 }, // "Recipe: Weather-Beaten Journal (#34109)"
    { 43493, 6033783 }, // "Recipe: Design: Steady Talasite (#33783)"
    { 43549, 6033792 }, // "Recipe: Plans: Heavy Copper Longsword (#33792)"
    { 43676, 6033804 }, // "Recipe: Schematic: Adamantite Arrow Maker (#33804)"
    { 43707, 6033870 }, // "Recipe: Skullfish Soup (#33870)"
    { 43758, 6033871 }, // "Recipe: Stormchops (#33871)"
    { 43761, 6033869 }, // "Recipe: Broiled Bloodfin (#33869)"
    { 43765, 6033873 }, // "Recipe: Spicy Hot Talbuk (#33873)"
    { 43772, 6033875 }, // "Recipe: Kibler's Bits (#33875)"
    { 43779, 6033925 }, // "Recipe: Delicious Chocolate Cake (#33925)"
    { 43846, 6033954 }, // "Recipe: Plans: Hammer of Righteous Might (#33954)"
    { 44359, 6034200 }, // "Recipe: Pattern: Quiver of a Thousand Feathers (#34200)"
    { 44391, 6034114 }, // "Recipe: Schematic: Field Repair Bot 110G (#34114)"
    { 44483, 6037332 }, // "Recipe: Formula: Enchant Cloak - Superior Frost Resistance (#37332)"
    { 44494, 6037333 }, // "Recipe: Formula: Enchant Cloak - Superior Nature Resistance (#37333)"
    { 44500, 6037335 }, // "Recipe: Formula: Enchant Cloak - Superior Agility (#37335)"
    { 44510, 6037329 }, // "Recipe: Formula: Enchant Weapon - Exceptional Spirit (#37329)"
    { 44513, 6037345 }, // "Recipe: Formula: Enchant Gloves - Greater Assault (#37345)"
    { 44524, 6037344 }, // "Recipe: Formula: Enchant Weapon - Icebreaker (#37344)"
    { 44556, 6037331 }, // "Recipe: Formula: Enchant Cloak - Superior Fire Resistance (#37331)"
    { 44575, 6044484 }, // "Recipe: Formula: Enchant Bracers - Greater Assault (#44484)"
    { 44576, 6044494 }, // "Recipe: Formula: Enchant Weapon - Lifeward (#44494)"
    { 44588, 6037340 }, // "Recipe: Formula: Enchant Chest - Exceptional Resilience (#37340)"
    { 44590, 6037334 }, // "Recipe: Formula: Enchant Cloak - Superior Shadow Resistance (#37334)"
    { 44591, 6037347 }, // "Recipe: Formula: Enchant Cloak - Titanweave (#37347)"
    { 44593, 6037326 }, // "Recipe: Formula: Enchant Bracer - Major Spirit (#37326)"
    { 44595, 6044473 }, // "Recipe: Formula: Enchant Weapon - Scourgebane (#44473)"
    { 44596, 6037330 }, // "Recipe: Formula: Enchant Cloak - Superior Arcane Resistance (#37330)"
    { 44598, 6037346 }, // "Recipe: Formula: Enchant Bracer - Expertise (#37346)"
    { 44616, 6037337 }, // "Recipe: Formula: Enchant Bracer - Greater Stats (#37337)"
    { 44621, 6037339 }, // "Recipe: Formula: Enchant Weapon - Giant Slayer (#37339)"
    { 44625, 6044485 }, // "Recipe: Formula: Enchant Gloves - Armsman (#44485)"
    { 44630, 6037338 }, // "Recipe: Formula: Enchant Weapon - Greater Savagery (#37338)"
    { 44631, 6037349 }, // "Recipe: Formula: Enchant Cloak - Shadow Armor (#37349)"
    { 44633, 6037343 }, // "Recipe: Formula: Enchant Weapon - Exceptional Agility (#37343)"
    { 44768, 6034201 }, // "Recipe: Pattern: Netherscale Ammo Pouch (#34201)"
    { 44794, 6034221 }, // "Recipe: Design: Chaotic Skyfire Diamond (#34221)"
    { 44950, 6034261 }, // "Recipe: Pattern: Green Winter Clothes (#34261)"
    { 44953, 6034262 }, // "Recipe: Pattern: Winter Boots (#34262)"
    { 44958, 6034319 }, // "Recipe: Pattern: Red Winter Clothes (#34319)"
    { 45022, 6034413 }, // "Recipe: Hot Apple Cider (#34413)"
    { 45117, 6034491 }, // "Recipe: Pattern: Bag of Many Hides (#34491)"
    { 45546, 6039152 }, // "Recipe: Manual: Heavy Frostweave Bandage (#39152)"
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
    { 45765, 6034872 }, // "Recipe: Formula: Void Shatter (#34872)"
    { 46106, 6035191 }, // "Recipe: Schematic: Wonderheal XT68 Shades (#35191)"
    { 46107, 6035187 }, // "Recipe: Schematic: Justicebringer 3000 Specs (#35187)"
    { 46108, 6035189 }, // "Recipe: Schematic: Powerheal 9000 Lens (#35189)"
    { 46109, 6035190 }, // "Recipe: Schematic: Hyper-Magnified Moon Specs (#35190)"
    { 46110, 6035192 }, // "Recipe: Schematic: Primal-Attuned Goggles (#35192)"
    { 46111, 6035186 }, // "Recipe: Schematic: Annihilator Holo-Gogs (#35186)"
    { 46112, 6035193 }, // "Recipe: Schematic: Lightning Etched Specs (#35193)"
    { 46113, 6035194 }, // "Recipe: Schematic: Surestrike Goggles v3.0 (#35194)"
    { 46114, 6035195 }, // "Recipe: Schematic: Mayhem Projection Goggles (#35195)"
    { 46115, 6035196 }, // "Recipe: Schematic: Hard Khorium Goggles (#35196)"
    { 46116, 6035197 }, // "Recipe: Schematic: Quad Deathblow X44 Goggles (#35197)"
    { 46122, 6035198 }, // "Recipe: Design: Loop of Forged Power (#35198)"
    { 46123, 6035199 }, // "Recipe: Design: Ring of Flowing Life (#35199)"
    { 46124, 6035200 }, // "Recipe: Design: Hard Khorium Band (#35200)"
    { 46125, 6035201 }, // "Recipe: Design: Pendant of Sunfire (#35201)"
    { 46126, 6035202 }, // "Recipe: Design: Amulet of Flowing Life (#35202)"
    { 46127, 6035203 }, // "Recipe: Design: Hard Khorium Choker (#35203)"
    { 46128, 6035204 }, // "Recipe: Pattern: Sunfire Handwraps (#35204)"
    { 46129, 6035205 }, // "Recipe: Pattern: Hands of Eternal Light (#35205)"
    { 46130, 6035206 }, // "Recipe: Pattern: Sunfire Robe (#35206)"
    { 46131, 6035207 }, // "Recipe: Pattern: Robe of Eternal Light (#35207)"
    { 46132, 6035212 }, // "Recipe: Pattern: Leather Gauntlets of the Sun (#35212)"
    { 46133, 6035213 }, // "Recipe: Pattern: Fletcher's Gloves of the Phoenix (#35213)"
    { 46134, 6035214 }, // "Recipe: Pattern: Gloves of Immortal Dusk (#35214)"
    { 46135, 6035215 }, // "Recipe: Pattern: Sun-Drenched Scale Gloves (#35215)"
    { 46136, 6035216 }, // "Recipe: Pattern: Leather Chestguard of the Sun (#35216)"
    { 46137, 6035217 }, // "Recipe: Pattern: Embrace of the Phoenix (#35217)"
    { 46138, 6035218 }, // "Recipe: Pattern: Carapace of Sun and Shadow (#35218)"
    { 46139, 6035219 }, // "Recipe: Pattern: Sun-Drenched Scale Chestguard (#35219)"
    { 46140, 6035208 }, // "Recipe: Plans: Sunblessed Gauntlets (#35208)"
    { 46141, 6035209 }, // "Recipe: Plans: Hard Khorium Battlefists (#35209)"
    { 46142, 6035210 }, // "Recipe: Plans: Sunblessed Breastplate (#35210)"
    { 46144, 6035211 }, // "Recipe: Plans: Hard Khorium Battleplate (#35211)"
    { 46353, 6035273 }, // "Recipe: Study of Advanced Smelting (#35273)"
    { 46403, 6035322 }, // "Recipe: Design: Quick Dawnstone (#35322)"
    { 46404, 6035323 }, // "Recipe: Design: Reckless Noble Topaz (#35323)"
    { 46405, 6035325 }, // "Recipe: Design: Forceful Talasite (#35325)"
    { 46578, 6035498 }, // "Recipe: Formula: Enchant Weapon - Deathfrost (#35498)"
    { 46594, 6035500 }, // "Recipe: Formula: Enchant Chest - Defense (#35500)"
    { 46597, 6035502 }, // "Recipe: Design: Eternal Earthstorm Diamond (#35502)"
    { 46601, 6035505 }, // "Recipe: Design: Ember Skyfire Diamond (#35505)"
    { 46684, 6035564 }, // "Recipe: Charred Bear Kabobs (#35564)"
    { 46688, 6035566 }, // "Recipe: Juicy Bear Burger (#35566)"
    { 46697, 6035582 }, // "Recipe: Schematic: Rocket Boots Xtreme Lite (#35582)"
    { 46775, 6035695 }, // "Recipe: Design: Figurine - Empyrean Tortoise (#35695)"
    { 46776, 6035696 }, // "Recipe: Design: Figurine - Khorium Boar (#35696)"
    { 46777, 6035697 }, // "Recipe: Design: Figurine - Crimson Serpent (#35697)"
    { 46778, 6035698 }, // "Recipe: Design: Figurine - Shadowsong Panther (#35698)"
    { 46779, 6035699 }, // "Recipe: Design: Figurine - Seaspray Albatross (#35699)"
    { 46803, 6035708 }, // "Recipe: Design: Regal Nightseye (#35708)"
    { 47046, 6035752 }, // "Recipe: Guardian's Alchemist Stone (#35752)"
    { 47048, 6035753 }, // "Recipe: Sorcerer's Alchemist Stone (#35753)"
    { 47049, 6035754 }, // "Recipe: Redeemer's Alchemist Stone (#35754)"
    { 47050, 6035755 }, // "Recipe: Assassin's Alchemist Stone (#35755)"
    { 47051, 6035756 }, // "Recipe: Formula: Enchant Cloak - Steelweave (#35756)"
    { 47053, 6035765 }, // "Recipe: Design: Forceful Seaspray Emerald (#35765)"
    { 47054, 6035764 }, // "Recipe: Design: Steady Seaspray Emerald (#35764)"
    { 47055, 6035762 }, // "Recipe: Design: Reckless Pyrestone (#35762)"
    { 47056, 6035763 }, // "Recipe: Design: Quick Lionseye (#35763)"
    { 47672, 6044471 }, // "Recipe: Formula: Enchant Cloak - Mighty Armor (#44471)"
    { 47766, 6037336 }, // "Recipe: Formula: Enchant Chest - Greater Dodge (#37336)"
    { 47898, 6037348 }, // "Recipe: Formula: Enchant Cloak - Haste (#37348)"
    { 47899, 6044488 }, // "Recipe: Formula: Enchant Cloak - Wisdom (#44488)"
    { 47901, 6044491 }, // "Recipe: Formula: Enchant Boots - Tuskarr's Vitality (#44491)"
    { 48789, 6037504 }, // "Recipe: Design: Purified Shadowsong Amethyst (#37504)"
    { 49677, 6037915 }, // "Recipe: Pattern: Dress Shoes (#37915)"
    { 50194, 6038229 }, // "Recipe: Pattern: Mycah's Botanical Bag (#38229)"
    { 50644, 6038327 }, // "Recipe: Pattern: Haliscan Jacket (#38327)"
    { 50647, 6038328 }, // "Recipe: Pattern: Haliscan Pantaloons (#38328)"
    { 50970, 6044509 }, // "Recipe: Pattern: Trapper's Traveling Pack (#44509)"
    { 50971, 6044510 }, // "Recipe: Pattern: Mammoth Mining Bag (#44510)"
    { 51568, 6038597 }, // "Recipe: Pattern: Dark Arctic Boots (#38597)"
    { 51803, 6039153 }, // "Recipe: Manual: Dense Frostweave Bandage (#39153)"
    { 52733, 6032430 }, // "Recipe: Pattern: Bracers of Shackled Souls (#32430)"
    { 53056, 6039644 }, // "Recipe: Kungaloosh (#39644)"
    { 53830, 6041576 }, // "Recipe: Design: Bold Scarlet Ruby (#41576)"
    { 53857, 6041559 }, // "Recipe: Design: Mystic Sun Crystal (#41559)"
    { 53865, 6041575 }, // "Recipe: Design: Mysterious Shadow Crystal (#41575)"
    { 53869, 6041574 }, // "Recipe: Design: Defender's Shadow Crystal (#41574)"
    { 53875, 6041566 }, // "Recipe: Design: Resplendent Huge Citrine (#41566)"
    { 53877, 6041562 }, // "Recipe: Design: Deadly Huge Citrine (#41562)"
    { 53879, 6041565 }, // "Recipe: Design: Lucent Huge Citrine (#41565)"
    { 53884, 6041563 }, // "Recipe: Design: Durable Huge Citrine (#41563)"
    { 53885, 6041561 }, // "Recipe: Design: Reckless Huge Citrine (#41561)"
    { 53888, 6041564 }, // "Recipe: Design: Empowered Huge Citrine (#41564)"
    { 53917, 6041567 }, // "Recipe: Design: Vivid Dark Jade (#41567)"
    { 53919, 6041572 }, // "Recipe: Design: Steady Dark Jade (#41572)"
    { 53921, 6041568 }, // "Recipe: Design: Seer's Dark Jade (#41568)"
    { 53924, 6041571 }, // "Recipe: Design: Turbid Dark Jade (#41571)"
    { 53929, 6041573 }, // "Recipe: Design: Opaque Dark Jade (#41573)"
    { 53932, 6041570 }, // "Recipe: Design: Tense Dark Jade (#41570)"
    { 53933, 6041569 }, // "Recipe: Design: Shattered Dark Jade (#41569)"
    { 53936, 6044564 }, // "Recipe: Mighty Arcane Protection Potion (#44564)"
    { 53937, 6044566 }, // "Recipe: Mighty Frost Protection Potion (#44566)"
    { 53938, 6044568 }, // "Recipe: Mighty Shadow Protection Potion (#44568)"
    { 53939, 6044565 }, // "Recipe: Mighty Fire Protection Potion (#44565)"
    { 53942, 6044567 }, // "Recipe: Mighty Nature Protection Potion (#44567)"
    { 53943, 6041560 }, // "Recipe: Design: Stormy Chalcedony (#41560)"
    { 53945, 6041577 }, // "Recipe: Design: Delicate Scarlet Ruby (#41577)"
    { 53946, 6041718 }, // "Recipe: Design: Runed Scarlet Ruby (#41718)"
    { 53948, 6041719 }, // "Recipe: Design: Subtle Scarlet Ruby (#41719)"
    { 53949, 6041578 }, // "Recipe: Design: Flashing Scarlet Ruby (#41578)"
    { 53950, 6041817 }, // "Recipe: Design: Fractured Scarlet Ruby (#41817)"
    { 53951, 6041790 }, // "Recipe: Design: Precise Scarlet Ruby (#41790)"
    { 53952, 6042138 }, // "Recipe: Design: Solid Sky Sapphire (#42138)"
    { 53954, 6041581 }, // "Recipe: Design: Lustrous Sky Sapphire (#41581)"
    { 53955, 6041728 }, // "Recipe: Design: Stormy Sky Sapphire (#41728)"
    { 53957, 6041720 }, // "Recipe: Design: Smooth Autumn's Glow (#41720)"
    { 53958, 6041580 }, // "Recipe: Design: Rigid Autumn's Glow (#41580)"
    { 53959, 6041791 }, // "Recipe: Design: Thick Autumn's Glow (#41791)"
    { 53960, 6041727 }, // "Recipe: Design: Mystic Autumn's Glow (#41727)"
    { 53961, 6041579 }, // "Recipe: Design: Quick Autumn's Glow (#41579)"
    { 53962, 6041784 }, // "Recipe: Design: Sovereign Twilight Opal (#41784)"
    { 53963, 6041747 }, // "Recipe: Design: Shifting Twilight Opal (#41747)"
    { 53964, 6041785 }, // "Recipe: Design: Tenuous Twilight Opal (#41785)"
    { 53965, 6041725 }, // "Recipe: Design: Glowing Twilight Opal (#41725)"
    { 53966, 6041783 }, // "Recipe: Design: Purified Twilight Opal (#41783)"
    { 53967, 6041701 }, // "Recipe: Design: Royal Twilight Opal (#41701)"
    { 53968, 6041740 }, // "Recipe: Design: Mysterious Twilight Opal (#41740)"
    { 53970, 6041796 }, // "Recipe: Design: Infused Twilight Opal (#41796)"
    { 53971, 6041703 }, // "Recipe: Design: Regal Twilight Opal (#41703)"
    { 53972, 6041820 }, // "Recipe: Design: Defender's Twilight Opal (#41820)"
    { 53973, 6041702 }, // "Recipe: Design: Puissant Twilight Opal (#41702)"
    { 53974, 6041726 }, // "Recipe: Design: Guardian's Twilight Opal (#41726)"
    { 53975, 6041789 }, // "Recipe: Design: Inscribed Monarch Topaz (#41789)"
    { 53976, 6041777 }, // "Recipe: Design: Etched Monarch Topaz (#41777)"
    { 53977, 6041780 }, // "Recipe: Design: Champion's Monarch Topaz (#41780)"
    { 53978, 6041734 }, // "Recipe: Design: Resplendent Monarch Topaz (#41734)"
    { 53979, 6041794 }, // "Recipe: Design: Deadly Monarch Topaz (#41794)"
    { 53980, 6041582 }, // "Recipe: Design: Glinting Monarch Topaz (#41582)"
    { 53981, 6041733 }, // "Recipe: Design: Lucent Monarch Topaz (#41733)"
    { 53982, 6041792 }, // "Recipe: Design: Deft Monarch Topaz (#41792)"
    { 53983, 6041689 }, // "Recipe: Design: Luminous Monarch Topaz (#41689)"
    { 53984, 6041686 }, // "Recipe: Design: Potent Monarch Topaz (#41686)"
    { 53985, 6041688 }, // "Recipe: Design: Veiled Monarch Topaz (#41688)"
    { 53986, 6041730 }, // "Recipe: Design: Durable Monarch Topaz (#41730)"
    { 53987, 6041690 }, // "Recipe: Design: Reckless Monarch Topaz (#41690)"
    { 53988, 6041721 }, // "Recipe: Design: Wicked Monarch Topaz (#41721)"
    { 53990, 6041732 }, // "Recipe: Design: Empowered Monarch Topaz (#41732)"
    { 53991, 6041687 }, // "Recipe: Design: Stark Monarch Topaz (#41687)"
    { 53992, 6041779 }, // "Recipe: Design: Stalwart Monarch Topaz (#41779)"
    { 53993, 6041722 }, // "Recipe: Design: Glimmering Monarch Topaz (#41722)"
    { 53994, 6041818 }, // "Recipe: Design: Accurate Monarch Topaz (#41818)"
    { 53995, 6041795 }, // "Recipe: Design: Timeless Forest Emerald (#41795)"
    { 53996, 6041723 }, // "Recipe: Design: Jagged Forest Emerald (#41723)"
    { 53997, 6041698 }, // "Recipe: Design: Vivid Forest Emerald (#41698)"
    { 53998, 6041697 }, // "Recipe: Design: Enduring Forest Emerald (#41697)"
    { 54000, 6041738 }, // "Recipe: Design: Steady Forest Emerald (#41738)"
    { 54001, 6041693 }, // "Recipe: Design: Forceful Forest Emerald (#41693)"
    { 54002, 6041699 }, // "Recipe: Design: Seer's Forest Emerald (#41699)"
    { 54003, 6041781 }, // "Recipe: Design: Misty Forest Emerald (#41781)"
    { 54004, 6041782 }, // "Recipe: Design: Shining Forest Emerald (#41782)"
    { 54005, 6041737 }, // "Recipe: Design: Turbid Forest Emerald (#41737)"
    { 54006, 6041694 }, // "Recipe: Design: Intricate Forest Emerald (#41694)"
    { 54008, 6041724 }, // "Recipe: Design: Sundered Forest Emerald (#41724)"
    { 54009, 6041696 }, // "Recipe: Design: Lambent Forest Emerald (#41696)"
    { 54010, 6041739 }, // "Recipe: Design: Opaque Forest Emerald (#41739)"
    { 54011, 6041692 }, // "Recipe: Design: Energized Forest Emerald (#41692)"
    { 54012, 6041819 }, // "Recipe: Design: Radiant Forest Emerald (#41819)"
    { 54013, 6041736 }, // "Recipe: Design: Tense Forest Emerald (#41736)"
    { 54014, 6041735 }, // "Recipe: Design: Shattered Forest Emerald (#41735)"
    { 54019, 6041793 }, // "Recipe: Design: Fierce Monarch Topaz (#41793)"
    { 54023, 6041778 }, // "Recipe: Design: Resolute Monarch Topaz (#41778)"
    { 54197, 6049177 }, // "Recipe: Tome of Cold Weather Flight (#49177)"
    { 54978, 6041124 }, // "Recipe: Plans: Reinforced Cobalt Shoulders (#41124)"
    { 54979, 6041123 }, // "Recipe: Plans: Reinforced Cobalt Helm (#41123)"
    { 54980, 6041120 }, // "Recipe: Plans: Reinforced Cobalt Legplates (#41120)"
    { 54981, 6041122 }, // "Recipe: Plans: Reinforced Cobalt Chestpiece (#41122)"
    { 55993, 6042172 }, // "Recipe: Pattern: Red Lumberjack Shirt (#42172)"
    { 55994, 6042173 }, // "Recipe: Pattern: Blue Lumberjack Shirt (#42173)"
    { 55995, 6042174 }, // "Recipe: Pattern: Yellow Lumberjack Shirt (#42174)"
    { 55996, 6042175 }, // "Recipe: Pattern: Green Lumberjack Shirt (#42175)"
    { 55997, 6042177 }, // "Recipe: Pattern: Red Workman's Shirt (#42177)"
    { 55998, 6042176 }, // "Recipe: Pattern: Blue Workman's Shirt (#42176)"
    { 55999, 6042178 }, // "Recipe: Pattern: Rustic Workman's Shirt (#42178)"
    { 56000, 6042179 }, // "Recipe: Pattern: Green Workman's Shirt (#42179)"
    { 56001, 6042181 }, // "Recipe: Pattern: Moonshroud (#42181)"
    { 56002, 6042180 }, // "Recipe: Pattern: Ebonweave (#42180)"
    { 56003, 6042182 }, // "Recipe: Pattern: Spellweave (#42182)"
    { 56004, 6042183 }, // "Recipe: Pattern: Abyssal Bag (#42183)"
    { 56005, 6042184 }, // "Recipe: Pattern: Glacial Bag (#42184)"
    { 56006, 6042185 }, // "Recipe: Pattern: Mysterious Bag (#42185)"
    { 56007, 6042186 }, // "Recipe: Pattern: Frostweave Bag (#42186)"
    { 56009, 6042187 }, // "Recipe: Pattern: Brilliant Spellthread (#42187)"
    { 56011, 6042188 }, // "Recipe: Pattern: Sapphire Spellthread (#42188)"
    { 56016, 6042189 }, // "Recipe: Pattern: Wispcloak (#42189)"
    { 56017, 6042190 }, // "Recipe: Pattern: Deathchill Cloak (#42190)"
    { 56018, 6042191 }, // "Recipe: Pattern: Hat of Wintry Doom (#42191)"
    { 56019, 6042192 }, // "Recipe: Pattern: Silky Iceshard Boots (#42192)"
    { 56020, 6042193 }, // "Recipe: Pattern: Glacial Cord (#42193)"
    { 56021, 6042194 }, // "Recipe: Pattern: Frostmoon Pants (#42194)"
    { 56022, 6042195 }, // "Recipe: Pattern: Light Blessed Mittens (#42195)"
    { 56023, 6042196 }, // "Recipe: Pattern: Aurora Slippers (#42196)"
    { 56024, 6042197 }, // "Recipe: Pattern: Moonshroud Robe (#42197)"
    { 56025, 6042198 }, // "Recipe: Pattern: Moonshroud Gloves (#42198)"
    { 56026, 6042199 }, // "Recipe: Pattern: Ebonweave Robe (#42199)"
    { 56027, 6042200 }, // "Recipe: Pattern: Ebonweave Gloves (#42200)"
    { 56028, 6042201 }, // "Recipe: Pattern: Spellweave Robe (#42201)"
    { 56029, 6042202 }, // "Recipe: Pattern: Spellweave Gloves (#42202)"
    { 56049, 6042298 }, // "Recipe: Design: Bold Dragon's Eye (#42298)"
    { 56052, 6042301 }, // "Recipe: Design: Delicate Dragon's Eye (#42301)"
    { 56053, 6042309 }, // "Recipe: Design: Runed Dragon's Eye (#42309)"
    { 56054, 6042299 }, // "Recipe: Design: Bright Dragon's Eye (#42299)"
    { 56055, 6042314 }, // "Recipe: Design: Subtle Dragon's Eye (#42314)"
    { 56056, 6042302 }, // "Recipe: Design: Flashing Dragon's Eye (#42302)"
    { 56074, 6042300 }, // "Recipe: Design: Brilliant Dragon's Eye (#42300)"
    { 56076, 6042303 }, // "Recipe: Design: Fractured Dragon's Eye (#42303)"
    { 56077, 6042304 }, // "Recipe: Design: Lustrous Dragon's Eye (#42304)"
    { 56079, 6042305 }, // "Recipe: Design: Mystic Dragon's Eye (#42305)"
    { 56081, 6042306 }, // "Recipe: Design: Precise Dragon's Eye (#42306)"
    { 56083, 6042307 }, // "Recipe: Design: Quick Dragon's Eye (#42307)"
    { 56084, 6042308 }, // "Recipe: Design: Rigid Dragon's Eye (#42308)"
    { 56085, 6042310 }, // "Recipe: Design: Smooth Dragon's Eye (#42310)"
    { 56086, 6042311 }, // "Recipe: Design: Solid Dragon's Eye (#42311)"
    { 56087, 6042312 }, // "Recipe: Design: Sparkling Dragon's Eye (#42312)"
    { 56088, 6042313 }, // "Recipe: Design: Stormy Dragon's Eye (#42313)"
    { 56089, 6042315 }, // "Recipe: Design: Thick Dragon's Eye (#42315)"
    { 56496, 6042648 }, // "Recipe: Design: Titanium Impact Band (#42648)"
    { 56497, 6042649 }, // "Recipe: Design: Titanium Earthguard Ring (#42649)"
    { 56498, 6042650 }, // "Recipe: Design: Titanium Spellshock Ring (#42650)"
    { 56499, 6042651 }, // "Recipe: Design: Titanium Impact Choker (#42651)"
    { 56500, 6042652 }, // "Recipe: Design: Titanium Earthguard Chain (#42652)"
    { 56501, 6042653 }, // "Recipe: Design: Titanium Spellshock Necklace (#42653)"
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
    { 57692, 6044559 }, // "Recipe: Pattern: Fur Lining - Fire Resist (#44559)"
    { 57694, 6044560 }, // "Recipe: Pattern: Fur Lining - Frost Resist (#44560)"
    { 57696, 6044561 }, // "Recipe: Pattern: Fur Lining - Shadow Resist (#44561)"
    { 57699, 6044562 }, // "Recipe: Pattern: Fur Lining - Nature Resist  (#44562)"
    { 57701, 6044563 }, // "Recipe: Pattern: Fur Lining - Arcane Resist (#44563)"
    { 58147, 6043317 }, // "Recipe: Design: Ring of Earthen Might (#43317)"
    { 58148, 6043318 }, // "Recipe: Design: Ring of Scarlet Shadows (#43318)"
    { 58149, 6043319 }, // "Recipe: Design: Windfire Band (#43319)"
    { 58150, 6043320 }, // "Recipe: Design: Ring of Northern Tears (#43320)"
    { 58492, 6043485 }, // "Recipe: Design: Savage Titanium Ring (#43485)"
    { 58507, 6043497 }, // "Recipe: Design: Savage Titanium Band (#43497)"
    { 58512, 6043507 }, // "Recipe: Tasty Cupcake (#43507)"
    { 58521, 6043508 }, // "Recipe: Last Week's Mammoth (#43508)"
    { 58523, 6043509 }, // "Recipe: Bad Clams (#43509)"
    { 58525, 6043510 }, // "Recipe: Haunted Herring (#43510)"
    { 58527, 6043505 }, // "Recipe: Gigantic Feast (#43505)"
    { 58528, 6043506 }, // "Recipe: Small Feast (#43506)"
    { 58954, 6043597 }, // "Recipe: Design: Titanium Frostguard Ring (#43597)"
    { 59390, 6043876 }, // "Recipe: A Guide to Northern Cloth Scavenging (#43876)"
    { 59619, 6044496 }, // "Recipe: Formula: Enchant Weapon - Accuracy (#44496)"
    { 59621, 6044492 }, // "Recipe: Formula: Enchant Weapon - Berserking (#44492)"
    { 59625, 6044495 }, // "Recipe: Formula: Enchant Weapon - Black Magic (#44495)"
    { 60645, 6044511 }, // "Recipe: Pattern: Dragonscale Ammo Pouch (#44511)"
    { 60647, 6044512 }, // "Recipe: Pattern: Nerubian Reinforced Quiver (#44512)"
    { 60691, 6044483 }, // "Recipe: Formula: Enchant 2H Weapon - Massacre (#44483)"
    { 60692, 6044489 }, // "Recipe: Formula: Enchant Chest - Powerful Stats (#44489)"
    { 60697, 6044513 }, // "Recipe: Pattern: Eviscerator's Facemask (#44513)"
    { 60702, 6044514 }, // "Recipe: Pattern: Eviscerator's Shoulderpads (#44514)"
    { 60703, 6044515 }, // "Recipe: Pattern: Eviscerator's Chestguard (#44515)"
    { 60704, 6044516 }, // "Recipe: Pattern: Eviscerator's Bindings (#44516)"
    { 60705, 6044517 }, // "Recipe: Pattern: Eviscerator's Gauntlets (#44517)"
    { 60706, 6044518 }, // "Recipe: Pattern: Eviscerator's Waistguard (#44518)"
    { 60707, 6044486 }, // "Recipe: Formula: Enchant Weapon - Superior Potency (#44486)"
    { 60711, 6044519 }, // "Recipe: Pattern: Eviscerator's Legguards (#44519)"
    { 60712, 6044520 }, // "Recipe: Pattern: Eviscerator's Treads (#44520)"
    { 60714, 6044487 }, // "Recipe: Formula: Enchant Weapon - Mighty Spellpower (#44487)"
    { 60715, 6044521 }, // "Recipe: Pattern: Overcast Headguard (#44521)"
    { 60716, 6044522 }, // "Recipe: Pattern: Overcast Spaulders (#44522)"
    { 60718, 6044523 }, // "Recipe: Pattern: Overcast Chestguard (#44523)"
    { 60720, 6044524 }, // "Recipe: Pattern: Overcast Bracers (#44524)"
    { 60721, 6044525 }, // "Recipe: Pattern: Overcast Handwraps (#44525)"
    { 60723, 6044526 }, // "Recipe: Pattern: Overcast Belt (#44526)"
    { 60725, 6044527 }, // "Recipe: Pattern: Overcast Leggings (#44527)"
    { 60727, 6044528 }, // "Recipe: Pattern: Overcast Boots (#44528)"
    { 60728, 6044530 }, // "Recipe: Pattern: Swiftarrow Helm (#44530)"
    { 60729, 6044531 }, // "Recipe: Pattern: Swiftarrow Shoulderguards (#44531)"
    { 60730, 6044532 }, // "Recipe: Pattern: Swiftarrow Hauberk (#44532)"
    { 60731, 6044533 }, // "Recipe: Pattern: Swiftarrow Bracers (#44533)"
    { 60732, 6044534 }, // "Recipe: Pattern: Swiftarrow Gauntlets (#44534)"
    { 60734, 6044535 }, // "Recipe: Pattern: Swiftarrow Belt (#44535)"
    { 60735, 6044536 }, // "Recipe: Pattern: Swiftarrow Leggings (#44536)"
    { 60737, 6044537 }, // "Recipe: Pattern: Swiftarrow Boots (#44537)"
    { 60743, 6044538 }, // "Recipe: Pattern: Stormhide Crown (#44538)"
    { 60746, 6044539 }, // "Recipe: Pattern: Stormhide Shoulders (#44539)"
    { 60747, 6044540 }, // "Recipe: Pattern: Stormhide Hauberk (#44540)"
    { 60748, 6044541 }, // "Recipe: Pattern: Stormhide Wristguards (#44541)"
    { 60749, 6044542 }, // "Recipe: Pattern: Stormhide Grips (#44542)"
    { 60750, 6044543 }, // "Recipe: Pattern: Stormhide Belt (#44543)"
    { 60751, 6044544 }, // "Recipe: Pattern: Stormhide Legguards (#44544)"
    { 60752, 6044545 }, // "Recipe: Pattern: Stormhide Stompers (#44545)"
    { 60754, 6044546 }, // "Recipe: Pattern: Giantmaim Legguards (#44546)"
    { 60755, 6044547 }, // "Recipe: Pattern: Giantmaim Bracers (#44547)"
    { 60756, 6044548 }, // "Recipe: Pattern: Revenant's Breastplate (#44548)"
    { 60757, 6044549 }, // "Recipe: Pattern: Revenant's Treads (#44549)"
    { 60758, 6044550 }, // "Recipe: Pattern: Trollwoven Spaulders (#44550)"
    { 60759, 6044551 }, // "Recipe: Pattern: Trollwoven Girdle (#44551)"
    { 60760, 6044552 }, // "Recipe: Pattern: Earthgiving Legguards (#44552)"
    { 60761, 6044553 }, // "Recipe: Pattern: Earthgiving Boots (#44553)"
    { 60763, 6044490 }, // "Recipe: Formula: Enchant Boots - Greater Assault (#44490)"
    { 60767, 6044498 }, // "Recipe: Formula: Enchant Bracer - Superior Spellpower (#44498)"
    { 60866, 6044502 }, // "Recipe: Schematic: Mechano-hog (#44502)"
    { 60867, 6044503 }, // "Recipe: Schematic: Mekgineer's Chopper (#44503)"
    { 60996, 6044584 }, // "Recipe: Pattern: Polar Vest (#44584)"
    { 60997, 6044585 }, // "Recipe: Pattern: Polar Cord (#44585)"
    { 60998, 6044586 }, // "Recipe: Pattern: Polar Boots (#44586)"
    { 60999, 6044587 }, // "Recipe: Pattern: Icy Scale Chestguard (#44587)"
    { 61000, 6044588 }, // "Recipe: Pattern: Icy Scale Belt (#44588)"
    { 61002, 6044589 }, // "Recipe: Pattern: Icy Scale Boots (#44589)"
    { 61024, 6044602 }, // "Recipe: Tome of Dalaran Intellect (#44602)"
    { 61305, 6044709 }, // "Recipe: Tome of Polymorph: Black Cat (#44709)"
    { 61316, 6044714 }, // "Recipe: Tome of Dalaran Brilliance (#44714)"
    { 61721, 6044793 }, // "Recipe: Tome of Polymorph: Rabbit (#44793)"
    { 61780, 6044811 }, // "Recipe: Tome of Polymorph: Turkey (#44811)"
    { 62044, 6044862 }, // "Recipe: Pumpkin Pie (#44862)"
    { 62045, 6044861 }, // "Recipe: Slow-Roasted Turkey (#44861)"
    { 62049, 6044858 }, // "Recipe: Cranberry Chutney (#44858)"
    { 62050, 6044860 }, // "Recipe: Spice Bread Stuffing (#44860)"
    { 62051, 6044859 }, // "Recipe: Candied Sweet Potato (#44859)"
    { 62176, 6044932 }, // "Recipe: Pattern: Windripper Boots (#44932)"
    { 62177, 6044933 }, // "Recipe: Pattern: Windripper Leggings (#44933)"
    { 62202, 6044937 }, // "Recipe: Plans: Titanium Plating (#44937)"
    { 62256, 6044944 }, // "Recipe: Formula: Enchant Bracer - Major Stamina (#44944)"
    { 62257, 6044945 }, // "Recipe: Formula: Enchant Weapon - Titanguard (#44945)"
    { 62350, 6044954 }, // "Recipe: Worg Tartare (#44954)"
    { 62948, 6045059 }, // "Recipe: Formula: Enchant Staff - Greater Spellpower (#45059)"
    { 63187, 6045088 }, // "Recipe: Plans: Belt of the Titans (#45088)"
    { 63188, 6045089 }, // "Recipe: Plans: Battlelord's Plate Boots (#45089)"
    { 63189, 6045090 }, // "Recipe: Plans: Plate Girdle of Righteousness (#45090)"
    { 63190, 6045091 }, // "Recipe: Plans: Treads of Destiny (#45091)"
    { 63191, 6045092 }, // "Recipe: Plans: Indestructible Plate Girdle (#45092)"
    { 63192, 6045093 }, // "Recipe: Plans: Spiked Deathdealers (#45093)"
    { 63194, 6045094 }, // "Recipe: Pattern: Belt of Dragons (#45094)"
    { 63195, 6045095 }, // "Recipe: Pattern: Boots of Living Scale (#45095)"
    { 63196, 6045096 }, // "Recipe: Pattern: Blue Belt of Chaos (#45096)"
    { 63197, 6045097 }, // "Recipe: Pattern: Lightning Grounded Boots (#45097)"
    { 63198, 6045098 }, // "Recipe: Pattern: Death-warmed Belt (#45098)"
    { 63199, 6045099 }, // "Recipe: Pattern: Footpads of Silence (#45099)"
    { 63200, 6045100 }, // "Recipe: Pattern: Belt of Arctic Life (#45100)"
    { 63201, 6045101 }, // "Recipe: Pattern: Boots of Wintry Endurance (#45101)"
    { 63203, 6045102 }, // "Recipe: Pattern: Sash of Ancient Power (#45102)"
    { 63204, 6045103 }, // "Recipe: Pattern: Spellslinger's Slippers (#45103)"
    { 63205, 6045104 }, // "Recipe: Pattern: Cord of the White Dawn (#45104)"
    { 63206, 6045105 }, // "Recipe: Pattern: Savior's Slippers (#45105)"
    { 63924, 6045774 }, // "Recipe: Pattern: Emerald Bag (#45774)"
    { 64051, 6046108 }, // "Recipe: Technique: Rituals of the New Moon (#46108)"
    { 64441, 6046027 }, // "Recipe: Formula: Enchant Weapon - Blade Ward (#46027)"
    { 64579, 6046348 }, // "Recipe: Formula: Enchant Weapon - Blood Draining (#46348)"
    { 65454, 6046710 }, // "Recipe: Bread of the Dead (#46710)"
    { 66034, 6046806 }, // "Recipe: Candied Sweet Potato (#46806)"
    { 66035, 6046805 }, // "Recipe: Cranberry Chutney (#46805)"
    { 66036, 6046804 }, // "Recipe: Pumpkin Pie (#46804)"
    { 66037, 6046807 }, // "Recipe: Slow-Roasted Turkey (#46807)"
    { 66038, 6046803 }, // "Recipe: Spice Bread Stuffing (#46803)"
    { 66338, 6046897 }, // "Recipe: Design: Enduring Eye of Zul (#46897)"
    { 66428, 6046898 }, // "Recipe: Design: Steady Eye of Zul (#46898)"
    { 66429, 6046899 }, // "Recipe: Design: Vivid Eye of Zul (#46899)"
    { 66430, 6046900 }, // "Recipe: Design: Dazzling Eye of Zul (#46900)"
    { 66431, 6046901 }, // "Recipe: Design: Jagged Eye of Zul (#46901)"
    { 66432, 6046902 }, // "Recipe: Design: Timeless Eye of Zul (#46902)"
    { 66433, 6046903 }, // "Recipe: Design: Seer's Eye of Zul (#46903)"
    { 66434, 6046904 }, // "Recipe: Design: Forceful Eye of Zul (#46904)"
    { 66435, 6046905 }, // "Recipe: Design: Misty Eye of Zul (#46905)"
    { 66436, 6046906 }, // "Recipe: Design: Sundered Eye of Zul (#46906)"
    { 66437, 6046907 }, // "Recipe: Design: Shining Eye of Zul (#46907)"
    { 66438, 6046908 }, // "Recipe: Design: Tense Eye of Zul (#46908)"
    { 66439, 6046909 }, // "Recipe: Design: Lambent Eye of Zul (#46909)"
    { 66440, 6046910 }, // "Recipe: Design: Intricate Eye of Zul (#46910)"
    { 66441, 6046911 }, // "Recipe: Design: Radiant Eye of Zul (#46911)"
    { 66442, 6046912 }, // "Recipe: Design: Energized Eye of Zul (#46912)"
    { 66443, 6046913 }, // "Recipe: Design: Shattered Eye of Zul (#46913)"
    { 66444, 6046914 }, // "Recipe: Design: Opaque Eye of Zul (#46914)"
    { 66445, 6046915 }, // "Recipe: Design: Turbid Eye of Zul (#46915)"
    { 66446, 6046916 }, // "Recipe: Design: Runed Cardinal Ruby (#46916)"
    { 66447, 6046917 }, // "Recipe: Design: Bold Cardinal Ruby (#46917)"
    { 66448, 6046918 }, // "Recipe: Design: Delicate Cardinal Ruby (#46918)"
    { 66449, 6046919 }, // "Recipe: Design: Bright Cardinal Ruby (#46919)"
    { 66450, 6046920 }, // "Recipe: Design: Precise Cardinal Ruby (#46920)"
    { 66451, 6046921 }, // "Recipe: Design: Fractured Cardinal Ruby (#46921)"
    { 66452, 6046922 }, // "Recipe: Design: Subtle Cardinal Ruby (#46922)"
    { 66453, 6046923 }, // "Recipe: Design: Flashing Cardinal Ruby (#46923)"
    { 66497, 6046924 }, // "Recipe: Design: Solid Majestic Zircon (#46924)"
    { 66498, 6046925 }, // "Recipe: Design: Sparkling Majestic Zircon (#46925)"
    { 66499, 6046926 }, // "Recipe: Design: Stormy Majestic Zircon (#46926)"
    { 66500, 6046927 }, // "Recipe: Design: Lustrous Majestic Zircon (#46927)"
    { 66501, 6046928 }, // "Recipe: Design: Rigid King's Amber (#46928)"
    { 66502, 6046929 }, // "Recipe: Design: Smooth King's Amber (#46929)"
    { 66503, 6046930 }, // "Recipe: Design: Brilliant King's Amber (#46930)"
    { 66504, 6046931 }, // "Recipe: Design: Thick King's Amber (#46931)"
    { 66505, 6046932 }, // "Recipe: Design: Mystic King's Amber (#46932)"
    { 66506, 6046933 }, // "Recipe: Design: Quick King's Amber (#46933)"
    { 66553, 6046934 }, // "Recipe: Design: Balanced Dreadstone (#46934)"
    { 66554, 6046935 }, // "Recipe: Design: Sovereign Dreadstone (#46935)"
    { 66555, 6046936 }, // "Recipe: Design: Glowing Dreadstone (#46936)"
    { 66556, 6046937 }, // "Recipe: Design: Purified Dreadstone (#46937)"
    { 66557, 6046938 }, // "Recipe: Design: Shifting Dreadstone (#46938)"
    { 66558, 6046939 }, // "Recipe: Design: Royal Dreadstone (#46939)"
    { 66559, 6046940 }, // "Recipe: Design: Regal Dreadstone (#46940)"
    { 66560, 6046941 }, // "Recipe: Design: Defender's Dreadstone (#46941)"
    { 66561, 6046942 }, // "Recipe: Design: Guardian's Dreadstone (#46942)"
    { 66562, 6046943 }, // "Recipe: Design: Mysterious Dreadstone (#46943)"
    { 66563, 6046944 }, // "Recipe: Design: Puissant Dreadstone (#46944)"
    { 66564, 6046945 }, // "Recipe: Design: Infused Dreadstone (#46945)"
    { 66565, 6046946 }, // "Recipe: Design: Tenuous Dreadstone (#46946)"
    { 66566, 6046947 }, // "Recipe: Design: Luminous Ametrine (#46947)"
    { 66567, 6046948 }, // "Recipe: Design: Inscribed Ametrine (#46948)"
    { 66568, 6046949 }, // "Recipe: Design: Deadly Ametrine (#46949)"
    { 66569, 6046950 }, // "Recipe: Design: Potent Ametrine (#46950)"
    { 66570, 6046951 }, // "Recipe: Design: Veiled Ametrine (#46951)"
    { 66571, 6046952 }, // "Recipe: Design: Durable Ametrine (#46952)"
    { 66572, 6046953 }, // "Recipe: Design: Etched Ametrine (#46953)"
    { 66573, 6046956 }, // "Recipe: Design: Pristine Ametrine (#46956)"
    { 66574, 6047007 }, // "Recipe: Design: Reckless Ametrine (#47007)"
    { 66575, 6047008 }, // "Recipe: Design: Glinting Ametrine (#47008)"
    { 66576, 6047010 }, // "Recipe: Design: Accurate Ametrine (#47010)"
    { 66577, 6047011 }, // "Recipe: Design: Wicked Ametrine (#47011)"
    { 66578, 6047012 }, // "Recipe: Design: Glimmering Ametrine (#47012)"
    { 66579, 6047015 }, // "Recipe: Design: Champion's Ametrine (#47015)"
    { 66580, 6047016 }, // "Recipe: Design: Empowered Ametrine (#47016)"
    { 66581, 6047017 }, // "Recipe: Design: Stalwart Ametrine (#47017)"
    { 66582, 6047018 }, // "Recipe: Design: Resplendent Ametrine (#47018)"
    { 66583, 6047019 }, // "Recipe: Design: Fierce Ametrine (#47019)"
    { 66584, 6047020 }, // "Recipe: Design: Deft Ametrine (#47020)"
    { 66585, 6047021 }, // "Recipe: Design: Lucent Ametrine (#47021)"
    { 66586, 6047022 }, // "Recipe: Design: Resolute Ametrine (#47022)"
    { 66587, 6047023 }, // "Recipe: Design: Stark Ametrine (#47023)"
    { 67025, 6047507 }, // "Recipe: Flask of the North (#47507)"
    { 67064, 6047657 }, // "Recipe: Pattern: Royal Moonshroud Robe (#47657)"
    { 67065, 6047656 }, // "Recipe: Pattern: Royal Moonshroud Bracers (#47656)"
    { 67066, 6047655 }, // "Recipe: Pattern: Merlin's Robe (#47655)"
    { 67079, 6047654 }, // "Recipe: Pattern: Bejeweled Wizard's Bracers (#47654)"
    { 67080, 6047628 }, // "Recipe: Pattern: Ensorcelled Nerubian Breastplate (#47628)"
    { 67081, 6047629 }, // "Recipe: Pattern: Black Chitin Bracers (#47629)"
    { 67082, 6047630 }, // "Recipe: Pattern: Crusader's Dragonscale Breastplate (#47630)"
    { 67083, 6047631 }, // "Recipe: Pattern: Crusader's Dragonscale Bracers (#47631)"
    { 67084, 6047632 }, // "Recipe: Pattern: Lunar Eclipse Robes (#47632)"
    { 67085, 6047633 }, // "Recipe: Pattern: Moonshadow Armguards (#47633)"
    { 67086, 6047634 }, // "Recipe: Pattern: Knightbane Carapace (#47634)"
    { 67087, 6047635 }, // "Recipe: Pattern: Bracers of Swift Death (#47635)"
    { 67091, 6047622 }, // "Recipe: Plans: Breastplate of the White Knight (#47622)"
    { 67092, 6047623 }, // "Recipe: Plans: Saronite Swordbreakers (#47623)"
    { 67093, 6047624 }, // "Recipe: Plans: Titanium Razorplate (#47624)"
    { 67094, 6047625 }, // "Recipe: Plans: Titanium Spikeguards (#47625)"
    { 67095, 6047626 }, // "Recipe: Plans: Sunforged Breastplate (#47626)"
    { 67096, 6047627 }, // "Recipe: Plans: Sunforged Bracers (#47627)"
    { 67130, 6047640 }, // "Recipe: Plans: Breastplate of the White Knight (#47640)"
    { 67131, 6047641 }, // "Recipe: Plans: Saronite Swordbreakers (#47641)"
    { 67132, 6047644 }, // "Recipe: Plans: Titanium Razorplate (#47644)"
    { 67133, 6047645 }, // "Recipe: Plans: Titanium Spikeguards (#47645)"
    { 67134, 6047643 }, // "Recipe: Plans: Sunforged Breastplate (#47643)"
    { 67135, 6047642 }, // "Recipe: Plans: Sunforged Bracers (#47642)"
    { 67136, 6047650 }, // "Recipe: Pattern: Ensorcelled Nerubian Breastplate (#47650)"
    { 67137, 6047646 }, // "Recipe: Pattern: Black Chitin Bracers (#47646)"
    { 67138, 6047649 }, // "Recipe: Pattern: Crusader's Dragonscale Breastplate (#47649)"
    { 67139, 6047647 }, // "Recipe: Pattern: Bracers of Swift Death (#47647)"
    { 67140, 6047652 }, // "Recipe: Pattern: Lunar Eclipse Robes (#47652)"
    { 67141, 6047653 }, // "Recipe: Pattern: Moonshadow Armguards (#47653)"
    { 67142, 6047651 }, // "Recipe: Pattern: Knightbane Carapace (#47651)"
    { 67143, 6047648 }, // "Recipe: Pattern: Crusader's Dragonscale Bracers (#47648)"
    { 67144, 6047636 }, // "Recipe: Pattern: Royal Moonshroud Robe (#47636)"
    { 67145, 6047639 }, // "Recipe: Pattern: Bejeweled Wizard's Bracers (#47639)"
    { 67146, 6047638 }, // "Recipe: Pattern: Merlin's Robe (#47638)"
    { 67147, 6047637 }, // "Recipe: Pattern: Royal Moonshroud Bracers (#47637)"
    { 68067, 6049050 }, // "Recipe: Schematic: Jeeves (#49050)"
    { 68253, 6049112 }, // "Recipe: Design: Nightmare Tear (#49112)"
    { 70550, 6049953 }, // "Recipe: Pattern: Leggings of Woven Death (#49953)"
    { 70551, 6049954 }, // "Recipe: Pattern: Deathfrost Boots (#49954)"
    { 70552, 6049955 }, // "Recipe: Pattern: Lightweave Leggings (#49955)"
    { 70553, 6049956 }, // "Recipe: Pattern: Sandals of Consecration (#49956)"
    { 70554, 6049957 }, // "Recipe: Pattern: Legwraps of Unleashed Nature (#49957)"
    { 70555, 6049958 }, // "Recipe: Pattern: Blessed Cenarion Boots (#49958)"
    { 70556, 6049959 }, // "Recipe: Pattern: Bladeborn Leggings (#49959)"
    { 70557, 6049961 }, // "Recipe: Pattern: Footpads of Impending Death (#49961)"
    { 70558, 6049962 }, // "Recipe: Pattern: Lightning-Infused Leggings (#49962)"
    { 70559, 6049963 }, // "Recipe: Pattern: Earthsoul Boots (#49963)"
    { 70560, 6049965 }, // "Recipe: Pattern: Draconic Bonesplinter Legguards (#49965)"
    { 70561, 6049966 }, // "Recipe: Pattern: Rock-Steady Treads (#49966)"
    { 70562, 6049969 }, // "Recipe: Plans: Puresteel Legplates (#49969)"
    { 70563, 6049970 }, // "Recipe: Plans: Protectors of Life (#49970)"
    { 70565, 6049971 }, // "Recipe: Plans: Legplates of Painful Death (#49971)"
    { 70566, 6049972 }, // "Recipe: Plans: Hellfrozen Bonegrinders (#49972)"
    { 70567, 6049973 }, // "Recipe: Plans: Pillars of Might (#49973)"
    { 70568, 6049974 }, // "Recipe: Plans: Boots of Kingly Upheaval (#49974)"
    { 71015, 6050167 }, // "Recipe: Technique: Glyph of Rapid Rejuvenation (#50167)"
    { 71101, 6050166 }, // "Recipe: Technique: Glyph of Eternal Water (#50166)"
    { 71102, 6050168 }, // "Recipe: Technique: Glyph of Quick Decay (#50168)"
    { 71692, 6050406 }, // "Recipe: Formula: Enchant Gloves - Angler (#50406)"
    { 72952, 6052022 }, // "Recipe: Plans: Shatter Rounds (#52022)"
    { 72953, 6052023 }, // "Recipe: Plans: Iceblade Arrow (#52023)"
    { 75597, 6054798 }, // "Recipe: Pattern: Frosty Flying Carpet (#54798)"
};
inline std::unordered_map<uint32_t, int64_t> BuildSPELL_ID_TO_LOCATION_ID()
{
    std::unordered_map<uint32_t, int64_t> result;
    for (auto const& row : SPELL_ID_TO_LOCATION_ID_RAW)
        result.emplace(row.first, row.second);
    return result;
}
inline const std::unordered_map<uint32_t, int64_t> SPELL_ID_TO_LOCATION_ID = BuildSPELL_ID_TO_LOCATION_ID();
inline constexpr std::pair<int64_t, uint32_t> AP_ITEM_ID_TO_WOW_ITEM_ENTRY_RAW[] = {
    { 6503122, 3122 }, // "Recipe Item: Codex of Holy Word: Shield III (#3122)"
    { 6504200, 4200 }, // "Recipe Item: Grimoire of Immolate III (#4200)"
    { 6509214, 9214 }, // "Recipe Item: Grimoire of Inferno (#9214)"
    { 6502406, 2406 }, // "Recipe Item: Pattern: Fine Leather Boots (#2406)"
    { 6502407, 2407 }, // "Recipe Item: Pattern: White Leather Jerkin (#2407)"
    { 6502408, 2408 }, // "Recipe Item: Pattern: Fine Leather Gloves (#2408)"
    { 6502409, 2409 }, // "Recipe Item: Pattern: Dark Leather Tunic (#2409)"
    { 6503396, 3396 }, // "Recipe Item: Recipe: Elixir of Lesser Agility (#3396)"
    { 6502555, 2555 }, // "Recipe Item: Recipe: Swiftness Potion (#2555)"
    { 6502598, 2598 }, // "Recipe Item: Pattern: Red Linen Robe (#2598)"
    { 6502601, 2601 }, // "Recipe Item: Pattern: Gray Woolen Robe (#2601)"
    { 6502697, 2697 }, // "Recipe Item: Recipe: Goretusk Liver Pie (#2697)"
    { 6500728, 728 }, // "Recipe Item: Recipe: Westfall Stew (#728)"
    { 6502698, 2698 }, // "Recipe Item: Recipe: Cooked Crab Claw (#2698)"
    { 6502699, 2699 }, // "Recipe Item: Recipe: Redridge Goulash (#2699)"
    { 6502700, 2700 }, // "Recipe Item: Recipe: Succulent Pork Ribs (#2700)"
    { 6502701, 2701 }, // "Recipe Item: Recipe: Seasoned Wolf Kabob (#2701)"
    { 6502881, 2881 }, // "Recipe Item: Plans: Runed Copper Breastplate (#2881)"
    { 6505578, 5578 }, // "Recipe Item: Plans: Silvered Bronze Breastplate (#5578)"
    { 6502889, 2889 }, // "Recipe Item: Recipe: Beer Basted Boar Ribs (#2889)"
    { 6503393, 3393 }, // "Recipe Item: Recipe: Minor Magic Resistance Potion (#3393)"
    { 6503394, 3394 }, // "Recipe Item: Recipe: Potion of Curing (#3394)"
    { 6503395, 3395 }, // "Recipe Item: Recipe: Limited Invulnerability Potion (#3395)"
    { 6506211, 6211 }, // "Recipe Item: Recipe: Elixir of Ogre's Strength (#6211)"
    { 6502553, 2553 }, // "Recipe Item: Recipe: Elixir of Minor Agility (#2553)"
    { 6502883, 2883 }, // "Recipe Item: Plans: Deadly Bronze Poniard (#2883)"
    { 6503608, 3608 }, // "Recipe Item: Plans: Mighty Iron Hammer (#3608)"
    { 6503609, 3609 }, // "Recipe Item: Plans: Copper Chain Vest (#3609)"
    { 6503610, 3610 }, // "Recipe Item: Plans: Gemmed Copper Gauntlets (#3610)"
    { 6502882, 2882 }, // "Recipe Item: Plans: Silvered Bronze Shoulders (#2882)"
    { 6503611, 3611 }, // "Recipe Item: Plans: Green Iron Boots (#3611)"
    { 6503612, 3612 }, // "Recipe Item: Plans: Green Iron Gauntlets (#3612)"
    { 6503678, 3678 }, // "Recipe Item: Recipe: Crocolisk Steak (#3678)"
    { 6503679, 3679 }, // "Recipe Item: Recipe: Blood Sausage (#3679)"
    { 6503680, 3680 }, // "Recipe Item: Recipe: Murloc Fin Soup (#3680)"
    { 6503681, 3681 }, // "Recipe Item: Recipe: Crocolisk Gumbo (#3681)"
    { 6503682, 3682 }, // "Recipe Item: Recipe: Curiously Tasty Omelet (#3682)"
    { 6503683, 3683 }, // "Recipe Item: Recipe: Gooey Spider Cake (#3683)"
    { 6503734, 3734 }, // "Recipe Item: Recipe: Big Bear Steak (#3734)"
    { 6503735, 3735 }, // "Recipe Item: Recipe: Hot Lion Chops (#3735)"
    { 6503736, 3736 }, // "Recipe Item: Recipe: Tasty Lion Steak (#3736)"
    { 6503737, 3737 }, // "Recipe Item: Recipe: Soothing Turtle Bisque (#3737)"
    { 6506068, 6068 }, // "Recipe Item: Recipe: Shadow Oil (#6068)"
    { 6503830, 3830 }, // "Recipe Item: Recipe: Elixir of Fortitude (#3830)"
    { 6503831, 3831 }, // "Recipe Item: Recipe: Major Troll's Blood Elixir (#3831)"
    { 6503832, 3832 }, // "Recipe Item: Recipe: Elixir of Detect Lesser Invisibility (#3832)"
    { 6514634, 14634 }, // "Recipe Item: Recipe: Frost Oil (#14634)"
    { 6512162, 12162 }, // "Recipe Item: Plans: Hardened Iron Shortsword (#12162)"
    { 6503866, 3866 }, // "Recipe Item: Plans: Jade Serpentblade (#3866)"
    { 6510858, 10858 }, // "Recipe Item: Plans: Solid Iron Maul (#10858)"
    { 6503867, 3867 }, // "Recipe Item: Plans: Golden Iron Destroyer (#3867)"
    { 6512163, 12163 }, // "Recipe Item: Plans: Moonsteel Broadsword (#12163)"
    { 6503868, 3868 }, // "Recipe Item: Plans: Frost Tiger Blade (#3868)"
    { 6512164, 12164 }, // "Recipe Item: Plans: Massive Iron Axe (#12164)"
    { 6503869, 3869 }, // "Recipe Item: Plans: Shadow Crescent Axe (#3869)"
    { 6506047, 6047 }, // "Recipe Item: Plans: Golden Scale Coif (#6047)"
    { 6503870, 3870 }, // "Recipe Item: Plans: Green Iron Shoulders (#3870)"
    { 6503871, 3871 }, // "Recipe Item: Plans: Golden Scale Shoulders (#3871)"
    { 6503872, 3872 }, // "Recipe Item: Plans: Golden Scale Leggings (#3872)"
    { 6503873, 3873 }, // "Recipe Item: Plans: Golden Scale Cuirass (#3873)"
    { 6503874, 3874 }, // "Recipe Item: Plans: Polished Steel Boots (#3874)"
    { 6503875, 3875 }, // "Recipe Item: Plans: Golden Scale Boots (#3875)"
    { 6504292, 4292 }, // "Recipe Item: Pattern: Green Woolen Bag (#4292)"
    { 6504293, 4293 }, // "Recipe Item: Pattern: Hillman's Leather Vest (#4293)"
    { 6507360, 7360 }, // "Recipe Item: Pattern: Dark Leather Gloves (#7360)"
    { 6504294, 4294 }, // "Recipe Item: Pattern: Hillman's Belt (#4294)"
    { 6504296, 4296 }, // "Recipe Item: Pattern: Dark Leather Shoulders (#4296)"
    { 6504297, 4297 }, // "Recipe Item: Pattern: Barbaric Gloves (#4297)"
    { 6507613, 7613 }, // "Recipe Item: Pattern: Green Leather Armor (#7613)"
    { 6504299, 4299 }, // "Recipe Item: Pattern: Guardian Armor (#4299)"
    { 6504298, 4298 }, // "Recipe Item: Pattern: Guardian Belt (#4298)"
    { 6504300, 4300 }, // "Recipe Item: Pattern: Guardian Leather Bracers (#4300)"
    { 6514635, 14635 }, // "Recipe Item: Pattern: Gem-studded Leather Belt (#14635)"
    { 6504301, 4301 }, // "Recipe Item: Pattern: Barbaric Belt (#4301)"
    { 6504346, 4346 }, // "Recipe Item: Pattern: Heavy Woolen Cloak (#4346)"
    { 6504345, 4345 }, // "Recipe Item: Pattern: Red Woolen Boots (#4345)"
    { 6504347, 4347 }, // "Recipe Item: Pattern: Reinforced Woolen Shoulders (#4347)"
    { 6504349, 4349 }, // "Recipe Item: Pattern: Phoenix Pants (#4349)"
    { 6507114, 7114 }, // "Recipe Item: Pattern: Azure Silk Gloves (#7114)"
    { 6504350, 4350 }, // "Recipe Item: Pattern: Spider Silk Slippers (#4350)"
    { 6514630, 14630 }, // "Recipe Item: Pattern: Enchanter's Cowl (#14630)"
    { 6504351, 4351 }, // "Recipe Item: Pattern: Shadow Hood (#4351)"
    { 6504352, 4352 }, // "Recipe Item: Pattern: Boots of the Enchanter (#4352)"
    { 6504355, 4355 }, // "Recipe Item: Pattern: Icy Cloak (#4355)"
    { 6504353, 4353 }, // "Recipe Item: Pattern: Spider Belt (#4353)"
    { 6504356, 4356 }, // "Recipe Item: Pattern: Star Belt (#4356)"
    { 6504348, 4348 }, // "Recipe Item: Pattern: Phoenix Gloves (#4348)"
    { 6514627, 14627 }, // "Recipe Item: Pattern: Bright Yellow Shirt (#14627)"
    { 6506401, 6401 }, // "Recipe Item: Pattern: Dark Silk Shirt (#6401)"
    { 6504354, 4354 }, // "Recipe Item: Pattern: Rich Purple Silk Shirt (#4354)"
    { 6510728, 10728 }, // "Recipe Item: Pattern: Black Swashbuckler's Shirt (#10728)"
    { 6504408, 4408 }, // "Recipe Item: Schematic: Mechanical Squirrel Box (#4408)"
    { 6504409, 4409 }, // "Recipe Item: Schematic: Small Seaforium Charge (#4409)"
    { 6513309, 13309 }, // "Recipe Item: Schematic: Lovingly Crafted Boomstick (#13309)"
    { 6504410, 4410 }, // "Recipe Item: Schematic: Shadow Goggles (#4410)"
    { 6504411, 4411 }, // "Recipe Item: Schematic: Flame Deflector (#4411)"
    { 6514639, 14639 }, // "Recipe Item: Schematic: Minor Recombobulator (#14639)"
    { 6504412, 4412 }, // "Recipe Item: Schematic: Moonsight Rifle (#4412)"
    { 6513308, 13308 }, // "Recipe Item: Schematic: Ice Deflector (#13308)"
    { 6504413, 4413 }, // "Recipe Item: Schematic: Discombobulator Ray (#4413)"
    { 6504414, 4414 }, // "Recipe Item: Schematic: Portable Bronze Mortar (#4414)"
    { 6504415, 4415 }, // "Recipe Item: Schematic: Craftsman's Monocle (#4415)"
    { 6504416, 4416 }, // "Recipe Item: Schematic: Goblin Land Mine (#4416)"
    { 6513311, 13311 }, // "Recipe Item: Schematic: Mechanical Dragonling (#13311)"
    { 6507742, 7742 }, // "Recipe Item: Schematic: Gnomish Cloaking Device (#7742)"
    { 6504417, 4417 }, // "Recipe Item: Schematic: Large Seaforium Charge (#4417)"
    { 6513310, 13310 }, // "Recipe Item: Schematic: Accurate Scope (#13310)"
    { 6504609, 4609 }, // "Recipe Item: Recipe: Barbecued Buzzard Wing (#4609)"
    { 6513287, 13287 }, // "Recipe Item: Pattern: Raptor Hide Harness (#13287)"
    { 6513288, 13288 }, // "Recipe Item: Pattern: Raptor Hide Belt (#13288)"
    { 6504597, 4597 }, // "Recipe Item: Recipe: Discolored Healing Potion (#4597)"
    { 6504624, 4624 }, // "Recipe Item: Recipe: Lesser Stoneshield Potion (#4624)"
    { 6505083, 5083 }, // "Recipe Item: Pattern: Kodo Hide Bag (#5083)"
    { 6508993, 8993 }, // "Recipe Item: Codex of Shadow Protection II (#8993)"
    { 6505482, 5482 }, // "Recipe Item: Recipe: Kaldorei Spider Kabob (#5482)"
    { 6505483, 5483 }, // "Recipe Item: Recipe: Scorpid Surprise (#5483)"
    { 6505484, 5484 }, // "Recipe Item: Recipe: Roasted Kodo Meat (#5484)"
    { 6505485, 5485 }, // "Recipe Item: Recipe: Fillet of Frenzy (#5485)"
    { 6505486, 5486 }, // "Recipe Item: Recipe: Strider Stew (#5486)"
    { 6505487, 5487 }, // "Recipe Item: Recipe: Dig Rat Stew (#5487)"
    { 6505488, 5488 }, // "Recipe Item: Recipe: Crispy Lizard Tail (#5488)"
    { 6505489, 5489 }, // "Recipe Item: Recipe: Lean Venison (#5489)"
    { 6505528, 5528 }, // "Recipe Item: Recipe: Clam Chowder (#5528)"
    { 6505543, 5543 }, // "Recipe Item: Plans: Iridescent Hammer (#5543)"
    { 6505640, 5640 }, // "Recipe Item: Recipe: Rage Potion (#5640)"
    { 6505643, 5643 }, // "Recipe Item: Recipe: Great Rage Potion (#5643)"
    { 6505642, 5642 }, // "Recipe Item: Recipe: Free Action Potion (#5642)"
    { 6505771, 5771 }, // "Recipe Item: Pattern: Red Linen Bag (#5771)"
    { 6505772, 5772 }, // "Recipe Item: Pattern: Red Woolen Bag (#5772)"
    { 6505773, 5773 }, // "Recipe Item: Pattern: Robes of Arcana (#5773)"
    { 6505774, 5774 }, // "Recipe Item: Pattern: Green Silk Pack (#5774)"
    { 6505775, 5775 }, // "Recipe Item: Pattern: Black Silk Pack (#5775)"
    { 6505786, 5786 }, // "Recipe Item: Pattern: Murloc Scale Belt (#5786)"
    { 6505787, 5787 }, // "Recipe Item: Pattern: Murloc Scale Breastplate (#5787)"
    { 6505788, 5788 }, // "Recipe Item: Pattern: Thick Murloc Armor (#5788)"
    { 6505789, 5789 }, // "Recipe Item: Pattern: Murloc Scale Bracers (#5789)"
    { 6505972, 5972 }, // "Recipe Item: Pattern: Fine Leather Pants (#5972)"
    { 6505973, 5973 }, // "Recipe Item: Pattern: Barbaric Leggings (#5973)"
    { 6505974, 5974 }, // "Recipe Item: Pattern: Guardian Cloak (#5974)"
    { 6506039, 6039 }, // "Recipe Item: Recipe: Giant Clam Scorcho (#6039)"
    { 6506044, 6044 }, // "Recipe Item: Plans: Iron Shield Spike (#6044)"
    { 6506045, 6045 }, // "Recipe Item: Plans: Iron Counterweight (#6045)"
    { 6506046, 6046 }, // "Recipe Item: Plans: Steel Weapon Chain (#6046)"
    { 6506053, 6053 }, // "Recipe Item: Recipe: Holy Protection Potion (#6053)"
    { 6506054, 6054 }, // "Recipe Item: Recipe: Shadow Protection Potion (#6054)"
    { 6506055, 6055 }, // "Recipe Item: Recipe: Fire Protection Potion (#6055)"
    { 6506056, 6056 }, // "Recipe Item: Recipe: Frost Protection Potion (#6056)"
    { 6506057, 6057 }, // "Recipe Item: Recipe: Nature Protection Potion (#6057)"
    { 6506342, 6342 }, // "Recipe Item: Formula: Enchant Chest - Minor Mana (#6342)"
    { 6506271, 6271 }, // "Recipe Item: Pattern: Red Linen Vest (#6271)"
    { 6506270, 6270 }, // "Recipe Item: Pattern: Blue Linen Vest (#6270)"
    { 6506272, 6272 }, // "Recipe Item: Pattern: Blue Linen Robe (#6272)"
    { 6506274, 6274 }, // "Recipe Item: Pattern: Blue Overalls (#6274)"
    { 6506275, 6275 }, // "Recipe Item: Pattern: Greater Adept's Robe (#6275)"
    { 6506325, 6325 }, // "Recipe Item: Recipe: Brilliant Smallfish (#6325)"
    { 6506326, 6326 }, // "Recipe Item: Recipe: Slitherskin Mackerel (#6326)"
    { 6506328, 6328 }, // "Recipe Item: Recipe: Longjaw Mud Snapper (#6328)"
    { 6506329, 6329 }, // "Recipe Item: Recipe: Loch Frenzy Delight (#6329)"
    { 6506330, 6330 }, // "Recipe Item: Recipe: Bristle Whisker Catfish (#6330)"
    { 6506344, 6344 }, // "Recipe Item: Formula: Enchant Bracer - Minor Spirit (#6344)"
    { 6506346, 6346 }, // "Recipe Item: Formula: Enchant Chest - Lesser Mana (#6346)"
    { 6506347, 6347 }, // "Recipe Item: Formula: Enchant Bracer - Minor Strength (#6347)"
    { 6506348, 6348 }, // "Recipe Item: Formula: Enchant Weapon - Minor Beastslayer (#6348)"
    { 6506349, 6349 }, // "Recipe Item: Formula: Enchant 2H Weapon - Lesser Intellect (#6349)"
    { 6506368, 6368 }, // "Recipe Item: Recipe: Rainbow Fin Albacore (#6368)"
    { 6506369, 6369 }, // "Recipe Item: Recipe: Rockscale Cod (#6369)"
    { 6506375, 6375 }, // "Recipe Item: Formula: Enchant Bracer - Lesser Spirit (#6375)"
    { 6506377, 6377 }, // "Recipe Item: Formula: Enchant Boots - Minor Agility (#6377)"
    { 6506390, 6390 }, // "Recipe Item: Pattern: Stylish Blue Shirt (#6390)"
    { 6506391, 6391 }, // "Recipe Item: Pattern: Stylish Green Shirt (#6391)"
    { 6516112, 16112 }, // "Recipe Item: Manual: Heavy Silk Bandage (#16112)"
    { 6506454, 6454 }, // "Recipe Item: Manual: Strong Anti-Venom (#6454)"
    { 6506474, 6474 }, // "Recipe Item: Pattern: Deviate Scale Cloak (#6474)"
    { 6506475, 6475 }, // "Recipe Item: Pattern: Deviate Scale Gloves (#6475)"
    { 6506476, 6476 }, // "Recipe Item: Pattern: Deviate Scale Belt (#6476)"
    { 6506661, 6661 }, // "Recipe Item: Recipe: Savory Deviate Delight (#6661)"
    { 6506663, 6663 }, // "Recipe Item: Recipe: Elixir of Giant Growth (#6663)"
    { 6506672, 6672 }, // "Recipe Item: Schematic: Flash Bomb (#6672)"
    { 6506710, 6710 }, // "Recipe Item: Pattern: Moonglow Vest (#6710)"
    { 6506716, 6716 }, // "Recipe Item: Schematic: EZ-Thro Dynamite (#6716)"
    { 6506735, 6735 }, // "Recipe Item: Plans: Ironforge Breastplate (#6735)"
    { 6506892, 6892 }, // "Recipe Item: Recipe: Smoked Bear Meat (#6892)"
    { 6507092, 7092 }, // "Recipe Item: Pattern: Hands of Darkness (#7092)"
    { 6507091, 7091 }, // "Recipe Item: Pattern: Truefaith Gloves (#7091)"
    { 6507090, 7090 }, // "Recipe Item: Pattern: Green Silk Armor (#7090)"
    { 6507089, 7089 }, // "Recipe Item: Pattern: Azure Silk Cloak (#7089)"
    { 6507087, 7087 }, // "Recipe Item: Pattern: Crimson Silk Cloak (#7087)"
    { 6507084, 7084 }, // "Recipe Item: Pattern: Crimson Silk Shoulders (#7084)"
    { 6507085, 7085 }, // "Recipe Item: Pattern: Azure Shoulders (#7085)"
    { 6507086, 7086 }, // "Recipe Item: Pattern: Earthen Silk Belt (#7086)"
    { 6507088, 7088 }, // "Recipe Item: Pattern: Crimson Silk Robe (#7088)"
    { 6507288, 7288 }, // "Recipe Item: Pattern: Rugged Leather Pants (#7288)"
    { 6507289, 7289 }, // "Recipe Item: Pattern: Black Whelp Cloak (#7289)"
    { 6507290, 7290 }, // "Recipe Item: Pattern: Red Whelp Gloves (#7290)"
    { 6507361, 7361 }, // "Recipe Item: Pattern: Herbalist's Gloves (#7361)"
    { 6507362, 7362 }, // "Recipe Item: Pattern: Earthen Leather Shoulders (#7362)"
    { 6507363, 7363 }, // "Recipe Item: Pattern: Pilferer's Gloves (#7363)"
    { 6507364, 7364 }, // "Recipe Item: Pattern: Heavy Earthen Gloves (#7364)"
    { 6507449, 7449 }, // "Recipe Item: Pattern: Dusky Leather Leggings (#7449)"
    { 6507450, 7450 }, // "Recipe Item: Pattern: Green Whelp Armor (#7450)"
    { 6507451, 7451 }, // "Recipe Item: Pattern: Green Whelp Bracers (#7451)"
    { 6507452, 7452 }, // "Recipe Item: Pattern: Dusky Boots (#7452)"
    { 6507453, 7453 }, // "Recipe Item: Pattern: Swift Boots (#7453)"
    { 6507560, 7560 }, // "Recipe Item: Schematic: Gnomish Universal Remote (#7560)"
    { 6507561, 7561 }, // "Recipe Item: Schematic: Goblin Jumper Cables (#7561)"
    { 6507678, 7678 }, // "Recipe Item: Recipe: Thistle Tea (#7678)"
    { 6507978, 7978 }, // "Recipe Item: Plans: Barbaric Iron Shoulders (#7978)"
    { 6507979, 7979 }, // "Recipe Item: Plans: Barbaric Iron Breastplate (#7979)"
    { 6507980, 7980 }, // "Recipe Item: Plans: Barbaric Iron Helm (#7980)"
    { 6507981, 7981 }, // "Recipe Item: Plans: Barbaric Iron Boots (#7981)"
    { 6507982, 7982 }, // "Recipe Item: Plans: Barbaric Iron Gloves (#7982)"
    { 6507975, 7975 }, // "Recipe Item: Plans: Heavy Mithril Pants (#7975)"
    { 6507995, 7995 }, // "Recipe Item: Plans: Mithril Scale Bracers (#7995)"
    { 6507976, 7976 }, // "Recipe Item: Plans: Mithril Shield Spike (#7976)"
    { 6507983, 7983 }, // "Recipe Item: Plans: Ornate Mithril Pants (#7983)"
    { 6507984, 7984 }, // "Recipe Item: Plans: Ornate Mithril Gloves (#7984)"
    { 6507985, 7985 }, // "Recipe Item: Plans: Ornate Mithril Shoulder (#7985)"
    { 6507989, 7989 }, // "Recipe Item: Plans: Mithril Spurs (#7989)"
    { 6507991, 7991 }, // "Recipe Item: Plans: Mithril Scale Shoulders (#7991)"
    { 6507990, 7990 }, // "Recipe Item: Plans: Heavy Mithril Helm (#7990)"
    { 6507992, 7992 }, // "Recipe Item: Plans: Blue Glittering Axe (#7992)"
    { 6508029, 8029 }, // "Recipe Item: Plans: Wicked Mithril Blade (#8029)"
    { 6507993, 7993 }, // "Recipe Item: Plans: Dazzling Mithril Rapier (#7993)"
    { 6508028, 8028 }, // "Recipe Item: Plans: Runed Mithril Hammer (#8028)"
    { 6508030, 8030 }, // "Recipe Item: Plans: Ebon Shiv (#8030)"
    { 6508384, 8384 }, // "Recipe Item: Pattern: Comfortable Leather Hat (#8384)"
    { 6508385, 8385 }, // "Recipe Item: Pattern: Turtle Scale Gloves (#8385)"
    { 6508409, 8409 }, // "Recipe Item: Pattern: Nightscape Shoulders (#8409)"
    { 6508386, 8386 }, // "Recipe Item: Pattern: Big Voodoo Robe (#8386)"
    { 6508395, 8395 }, // "Recipe Item: Pattern: Tough Scorpid Breastplate (#8395)"
    { 6508403, 8403 }, // "Recipe Item: Pattern: Wild Leather Shoulders (#8403)"
    { 6508387, 8387 }, // "Recipe Item: Pattern: Big Voodoo Mask (#8387)"
    { 6508397, 8397 }, // "Recipe Item: Pattern: Tough Scorpid Bracers (#8397)"
    { 6508398, 8398 }, // "Recipe Item: Pattern: Tough Scorpid Gloves (#8398)"
    { 6508404, 8404 }, // "Recipe Item: Pattern: Wild Leather Vest (#8404)"
    { 6508405, 8405 }, // "Recipe Item: Pattern: Wild Leather Helmet (#8405)"
    { 6508399, 8399 }, // "Recipe Item: Pattern: Tough Scorpid Boots (#8399)"
    { 6508389, 8389 }, // "Recipe Item: Pattern: Big Voodoo Pants (#8389)"
    { 6508390, 8390 }, // "Recipe Item: Pattern: Big Voodoo Cloak (#8390)"
    { 6508400, 8400 }, // "Recipe Item: Pattern: Tough Scorpid Shoulders (#8400)"
    { 6508406, 8406 }, // "Recipe Item: Pattern: Wild Leather Boots (#8406)"
    { 6508401, 8401 }, // "Recipe Item: Pattern: Tough Scorpid Leggings (#8401)"
    { 6508402, 8402 }, // "Recipe Item: Pattern: Tough Scorpid Helm (#8402)"
    { 6508407, 8407 }, // "Recipe Item: Pattern: Wild Leather Leggings (#8407)"
    { 6508408, 8408 }, // "Recipe Item: Pattern: Wild Leather Cloak (#8408)"
    { 6516113, 16113 }, // "Recipe Item: Manual: Mageweave Bandage (#16113)"
    { 6516085, 16085 }, // "Recipe Item: Artisan First Aid - Heal Thyself (#16085)"
    { 6509293, 9293 }, // "Recipe Item: Recipe: Magic Resistance Potion (#9293)"
    { 6510713, 10713 }, // "Recipe Item: Plans: Inlaid Mithril Cylinder (#10713)"
    { 6510644, 10644 }, // "Recipe Item: Recipe: Goblin Rocket Fuel (#10644)"
    { 6509294, 9294 }, // "Recipe Item: Recipe: Wildvine Potion (#9294)"
    { 6509303, 9303 }, // "Recipe Item: Recipe: Philosopher's Stone (#9303)"
    { 6509295, 9295 }, // "Recipe Item: Recipe: Invisibility Potion (#9295)"
    { 6509296, 9296 }, // "Recipe Item: Recipe: Gift of Arthas (#9296)"
    { 6509297, 9297 }, // "Recipe Item: Recipe: Elixir of Dream Vision (#9297)"
    { 6509298, 9298 }, // "Recipe Item: Recipe: Elixir of Giants (#9298)"
    { 6509302, 9302 }, // "Recipe Item: Recipe: Ghost Dye (#9302)"
    { 6509301, 9301 }, // "Recipe Item: Recipe: Elixir of Shadow Power (#9301)"
    { 6509300, 9300 }, // "Recipe Item: Recipe: Elixir of Demonslaying (#9300)"
    { 6509304, 9304 }, // "Recipe Item: Recipe: Transmute Iron to Gold (#9304)"
    { 6509305, 9305 }, // "Recipe Item: Recipe: Transmute Mithril to Truesilver (#9305)"
    { 6509367, 9367 }, // "Recipe Item: Plans: Golden Scale Gauntlets (#9367)"
    { 6510316, 10316 }, // "Recipe Item: Pattern: Colorful Kilt (#10316)"
    { 6510300, 10300 }, // "Recipe Item: Pattern: Red Mageweave Vest (#10300)"
    { 6510301, 10301 }, // "Recipe Item: Pattern: White Bandit Mask (#10301)"
    { 6510302, 10302 }, // "Recipe Item: Pattern: Red Mageweave Pants (#10302)"
    { 6510311, 10311 }, // "Recipe Item: Pattern: Orange Martial Shirt (#10311)"
    { 6510312, 10312 }, // "Recipe Item: Pattern: Red Mageweave Gloves (#10312)"
    { 6510314, 10314 }, // "Recipe Item: Pattern: Lavender Mageweave Shirt (#10314)"
    { 6510315, 10315 }, // "Recipe Item: Pattern: Red Mageweave Shoulders (#10315)"
    { 6510317, 10317 }, // "Recipe Item: Pattern: Pink Mageweave Shirt (#10317)"
    { 6510318, 10318 }, // "Recipe Item: Pattern: Admiral's Hat (#10318)"
    { 6510320, 10320 }, // "Recipe Item: Pattern: Red Mageweave Headband (#10320)"
    { 6510321, 10321 }, // "Recipe Item: Pattern: Tuxedo Shirt (#10321)"
    { 6510463, 10463 }, // "Recipe Item: Pattern: Shadoweave Mask (#10463)"
    { 6510323, 10323 }, // "Recipe Item: Pattern: Tuxedo Pants (#10323)"
    { 6510325, 10325 }, // "Recipe Item: Pattern: White Wedding Dress (#10325)"
    { 6510326, 10326 }, // "Recipe Item: Pattern: Tuxedo Jacket (#10326)"
    { 6510424, 10424 }, // "Recipe Item: Plans: Silvered Bronze Leggings (#10424)"
    { 6510601, 10601 }, // "Recipe Item: Schematic: Bright-Eye Goggles (#10601)"
    { 6510602, 10602 }, // "Recipe Item: Schematic: Deadly Scope (#10602)"
    { 6510603, 10603 }, // "Recipe Item: Schematic: Catseye Ultra Goggles (#10603)"
    { 6510604, 10604 }, // "Recipe Item: Schematic: Mithril Heavy-bore Rifle (#10604)"
    { 6510605, 10605 }, // "Recipe Item: Schematic: Spellpower Goggles Xtreme (#10605)"
    { 6510606, 10606 }, // "Recipe Item: Schematic: Parachute Cloak (#10606)"
    { 6510607, 10607 }, // "Recipe Item: Schematic: Deepdive Helmet (#10607)"
    { 6510608, 10608 }, // "Recipe Item: Schematic: Sniper Scope (#10608)"
    { 6510609, 10609 }, // "Recipe Item: Schematic: Mithril Mechanical Dragonling (#10609)"
    { 6511038, 11038 }, // "Recipe Item: Formula: Enchant 2H Weapon - Lesser Spirit (#11038)"
    { 6511039, 11039 }, // "Recipe Item: Formula: Enchant Cloak - Minor Agility (#11039)"
    { 6511081, 11081 }, // "Recipe Item: Formula: Enchant Shield - Lesser Protection (#11081)"
    { 6511098, 11098 }, // "Recipe Item: Formula: Enchant Cloak - Lesser Shadow Resistance (#11098)"
    { 6511101, 11101 }, // "Recipe Item: Formula: Enchant Bracer - Lesser Strength (#11101)"
    { 6511150, 11150 }, // "Recipe Item: Formula: Enchant Gloves - Mining (#11150)"
    { 6511151, 11151 }, // "Recipe Item: Formula: Enchant Gloves - Herbalism (#11151)"
    { 6511152, 11152 }, // "Recipe Item: Formula: Enchant Gloves - Fishing (#11152)"
    { 6511163, 11163 }, // "Recipe Item: Formula: Enchant Bracer - Lesser Deflection (#11163)"
    { 6511164, 11164 }, // "Recipe Item: Formula: Enchant Weapon - Lesser Beastslayer (#11164)"
    { 6511165, 11165 }, // "Recipe Item: Formula: Enchant Weapon - Lesser Elemental Slayer (#11165)"
    { 6511167, 11167 }, // "Recipe Item: Formula: Enchant Boots - Lesser Spirit (#11167)"
    { 6511168, 11168 }, // "Recipe Item: Formula: Enchant Shield - Lesser Block (#11168)"
    { 6511166, 11166 }, // "Recipe Item: Formula: Enchant Gloves - Skinning (#11166)"
    { 6511202, 11202 }, // "Recipe Item: Formula: Enchant Shield - Stamina (#11202)"
    { 6511203, 11203 }, // "Recipe Item: Formula: Enchant Gloves - Advanced Mining (#11203)"
    { 6511204, 11204 }, // "Recipe Item: Formula: Enchant Bracer - Greater Spirit (#11204)"
    { 6511205, 11205 }, // "Recipe Item: Formula: Enchant Gloves - Advanced Herbalism (#11205)"
    { 6511206, 11206 }, // "Recipe Item: Formula: Enchant Cloak - Lesser Agility (#11206)"
    { 6511207, 11207 }, // "Recipe Item: Formula: Enchant Weapon - Fiery Weapon (#11207)"
    { 6511208, 11208 }, // "Recipe Item: Formula: Enchant Weapon - Demonslaying (#11208)"
    { 6511223, 11223 }, // "Recipe Item: Formula: Enchant Bracer - Deflection (#11223)"
    { 6511224, 11224 }, // "Recipe Item: Formula: Enchant Shield - Frost Resistance (#11224)"
    { 6511225, 11225 }, // "Recipe Item: Formula: Enchant Bracer - Greater Stamina (#11225)"
    { 6511226, 11226 }, // "Recipe Item: Formula: Enchant Gloves - Riding Skill (#11226)"
    { 6511610, 11610 }, // "Recipe Item: Plans: Dark Iron Pulverizer (#11610)"
    { 6511614, 11614 }, // "Recipe Item: Plans: Dark Iron Mail (#11614)"
    { 6511611, 11611 }, // "Recipe Item: Plans: Dark Iron Sunderer (#11611)"
    { 6511615, 11615 }, // "Recipe Item: Plans: Dark Iron Shoulders (#11615)"
    { 6511612, 11612 }, // "Recipe Item: Plans: Dark Iron Plate (#11612)"
    { 6511813, 11813 }, // "Recipe Item: Formula: Smoking Heart of the Mountain (#11813)"
    { 6511828, 11828 }, // "Recipe Item: Schematic: Pet Bombling (#11828)"
    { 6511827, 11827 }, // "Recipe Item: Schematic: Lil' Smoky (#11827)"
    { 6512227, 12227 }, // "Recipe Item: Recipe: Lean Wolf Steak (#12227)"
    { 6512228, 12228 }, // "Recipe Item: Recipe: Roast Raptor (#12228)"
    { 6512229, 12229 }, // "Recipe Item: Recipe: Hot Wolf Ribs (#12229)"
    { 6512231, 12231 }, // "Recipe Item: Recipe: Jungle Stew (#12231)"
    { 6512232, 12232 }, // "Recipe Item: Recipe: Carrion Surprise (#12232)"
    { 6512233, 12233 }, // "Recipe Item: Recipe: Mystery Stew (#12233)"
    { 6512239, 12239 }, // "Recipe Item: Recipe: Dragonbreath Chili (#12239)"
    { 6512240, 12240 }, // "Recipe Item: Recipe: Heavy Kodo Stew (#12240)"
    { 6516111, 16111 }, // "Recipe Item: Recipe: Spiced Chili Crab (#16111)"
    { 6516110, 16110 }, // "Recipe Item: Recipe: Monster Omelet (#16110)"
    { 6512226, 12226 }, // "Recipe Item: Recipe: Crispy Bat Wing (#12226)"
    { 6512261, 12261 }, // "Recipe Item: Plans: Searing Golden Blade (#12261)"
    { 6512682, 12682 }, // "Recipe Item: Plans: Thorium Armor (#12682)"
    { 6512683, 12683 }, // "Recipe Item: Plans: Thorium Belt (#12683)"
    { 6512684, 12684 }, // "Recipe Item: Plans: Thorium Bracers (#12684)"
    { 6512685, 12685 }, // "Recipe Item: Plans: Radiant Belt (#12685)"
    { 6512687, 12687 }, // "Recipe Item: Plans: Imperial Plate Shoulders (#12687)"
    { 6512688, 12688 }, // "Recipe Item: Plans: Imperial Plate Belt (#12688)"
    { 6512689, 12689 }, // "Recipe Item: Plans: Radiant Breastplate (#12689)"
    { 6512690, 12690 }, // "Recipe Item: Plans: Imperial Plate Bracers (#12690)"
    { 6512691, 12691 }, // "Recipe Item: Plans: Wildthorn Mail (#12691)"
    { 6512692, 12692 }, // "Recipe Item: Plans: Thorium Shield Spike (#12692)"
    { 6512693, 12693 }, // "Recipe Item: Plans: Thorium Boots (#12693)"
    { 6512694, 12694 }, // "Recipe Item: Plans: Thorium Helm (#12694)"
    { 6512695, 12695 }, // "Recipe Item: Plans: Radiant Gloves (#12695)"
    { 6512699, 12699 }, // "Recipe Item: Plans: Fiery Plate Gauntlets (#12699)"
    { 6512697, 12697 }, // "Recipe Item: Plans: Radiant Boots (#12697)"
    { 6512700, 12700 }, // "Recipe Item: Plans: Imperial Plate Boots (#12700)"
    { 6512701, 12701 }, // "Recipe Item: Plans: Imperial Plate Helm (#12701)"
    { 6512702, 12702 }, // "Recipe Item: Plans: Radiant Circlet (#12702)"
    { 6512698, 12698 }, // "Recipe Item: Plans: Dawnbringer Shoulders (#12698)"
    { 6512703, 12703 }, // "Recipe Item: Plans: Storm Gauntlets (#12703)"
    { 6512704, 12704 }, // "Recipe Item: Plans: Thorium Leggings (#12704)"
    { 6512705, 12705 }, // "Recipe Item: Plans: Imperial Plate Chest (#12705)"
    { 6512706, 12706 }, // "Recipe Item: Plans: Runic Plate Shoulders (#12706)"
    { 6512707, 12707 }, // "Recipe Item: Plans: Runic Plate Boots (#12707)"
    { 6512696, 12696 }, // "Recipe Item: Plans: Demon Forged Breastplate (#12696)"
    { 6512711, 12711 }, // "Recipe Item: Plans: Whitesoul Helm (#12711)"
    { 6512713, 12713 }, // "Recipe Item: Plans: Radiant Leggings (#12713)"
    { 6512714, 12714 }, // "Recipe Item: Plans: Runic Plate Helm (#12714)"
    { 6512716, 12716 }, // "Recipe Item: Plans: Helm of the Great Chief (#12716)"
    { 6512717, 12717 }, // "Recipe Item: Plans: Lionheart Helm (#12717)"
    { 6512715, 12715 }, // "Recipe Item: Plans: Imperial Plate Leggings (#12715)"
    { 6512718, 12718 }, // "Recipe Item: Plans: Runic Breastplate (#12718)"
    { 6512719, 12719 }, // "Recipe Item: Plans: Runic Plate Leggings (#12719)"
    { 6512720, 12720 }, // "Recipe Item: Plans: Stronghold Gauntlets (#12720)"
    { 6512725, 12725 }, // "Recipe Item: Plans: Enchanted Thorium Helm (#12725)"
    { 6512726, 12726 }, // "Recipe Item: Plans: Enchanted Thorium Leggings (#12726)"
    { 6512727, 12727 }, // "Recipe Item: Plans: Enchanted Thorium Breastplate (#12727)"
    { 6512728, 12728 }, // "Recipe Item: Plans: Invulnerable Mail (#12728)"
    { 6512819, 12819 }, // "Recipe Item: Plans: Ornate Thorium Handaxe (#12819)"
    { 6512821, 12821 }, // "Recipe Item: Plans: Dawn's Edge (#12821)"
    { 6512823, 12823 }, // "Recipe Item: Plans: Huge Thorium Battleaxe (#12823)"
    { 6512824, 12824 }, // "Recipe Item: Plans: Enchanted Battlehammer (#12824)"
    { 6512825, 12825 }, // "Recipe Item: Plans: Blazing Rapier (#12825)"
    { 6512827, 12827 }, // "Recipe Item: Plans: Serenity (#12827)"
    { 6512828, 12828 }, // "Recipe Item: Plans: Volcanic Hammer (#12828)"
    { 6512830, 12830 }, // "Recipe Item: Plans: Corruption (#12830)"
    { 6512833, 12833 }, // "Recipe Item: Plans: Hammer of the Titans (#12833)"
    { 6512834, 12834 }, // "Recipe Item: Plans: Arcanite Champion (#12834)"
    { 6512835, 12835 }, // "Recipe Item: Plans: Annihilator (#12835)"
    { 6512836, 12836 }, // "Recipe Item: Plans: Frostguard (#12836)"
    { 6512837, 12837 }, // "Recipe Item: Plans: Masterwork Stormhammer (#12837)"
    { 6512838, 12838 }, // "Recipe Item: Plans: Arcanite Reaper (#12838)"
    { 6512839, 12839 }, // "Recipe Item: Plans: Heartseeker (#12839)"
    { 6512958, 12958 }, // "Recipe Item: Recipe: Transmute Arcanite (#12958)"
    { 6513476, 13476 }, // "Recipe Item: Recipe: Mighty Rage Potion (#13476)"
    { 6513477, 13477 }, // "Recipe Item: Recipe: Superior Mana Potion (#13477)"
    { 6513478, 13478 }, // "Recipe Item: Recipe: Elixir of Superior Defense (#13478)"
    { 6513479, 13479 }, // "Recipe Item: Recipe: Elixir of the Sages (#13479)"
    { 6513480, 13480 }, // "Recipe Item: Recipe: Major Healing Potion (#13480)"
    { 6513481, 13481 }, // "Recipe Item: Recipe: Elixir of Brute Force (#13481)"
    { 6513482, 13482 }, // "Recipe Item: Recipe: Transmute Air to Fire (#13482)"
    { 6513483, 13483 }, // "Recipe Item: Recipe: Transmute Fire to Earth (#13483)"
    { 6513484, 13484 }, // "Recipe Item: Recipe: Transmute Earth to Water (#13484)"
    { 6513485, 13485 }, // "Recipe Item: Recipe: Transmute Water to Air (#13485)"
    { 6513486, 13486 }, // "Recipe Item: Recipe: Transmute Undeath to Water (#13486)"
    { 6513487, 13487 }, // "Recipe Item: Recipe: Transmute Water to Undeath (#13487)"
    { 6513488, 13488 }, // "Recipe Item: Recipe: Transmute Life to Earth (#13488)"
    { 6513489, 13489 }, // "Recipe Item: Recipe: Transmute Earth to Life (#13489)"
    { 6513490, 13490 }, // "Recipe Item: Recipe: Greater Stoneshield Potion (#13490)"
    { 6513491, 13491 }, // "Recipe Item: Recipe: Elixir of the Mongoose (#13491)"
    { 6513492, 13492 }, // "Recipe Item: Recipe: Purification Potion (#13492)"
    { 6513493, 13493 }, // "Recipe Item: Recipe: Greater Arcane Elixir (#13493)"
    { 6513494, 13494 }, // "Recipe Item: Recipe: Greater Fire Protection Potion (#13494)"
    { 6513495, 13495 }, // "Recipe Item: Recipe: Greater Frost Protection Potion (#13495)"
    { 6513496, 13496 }, // "Recipe Item: Recipe: Greater Nature Protection Potion (#13496)"
    { 6513497, 13497 }, // "Recipe Item: Recipe: Greater Arcane Protection Potion (#13497)"
    { 6513499, 13499 }, // "Recipe Item: Recipe: Greater Shadow Protection Potion (#13499)"
    { 6513501, 13501 }, // "Recipe Item: Recipe: Major Mana Potion (#13501)"
    { 6513517, 13517 }, // "Recipe Item: Recipe: Alchemist's Stone (#13517)"
    { 6513518, 13518 }, // "Recipe Item: Recipe: Potion of Petrification (#13518)"
    { 6513519, 13519 }, // "Recipe Item: Recipe: Flask of the Titans (#13519)"
    { 6513520, 13520 }, // "Recipe Item: Recipe: Flask of Distilled Wisdom (#13520)"
    { 6513521, 13521 }, // "Recipe Item: Recipe: Flask of Supreme Power (#13521)"
    { 6513522, 13522 }, // "Recipe Item: Recipe: Flask of Chromatic Resistance (#13522)"
    { 6513939, 13939 }, // "Recipe Item: Recipe: Spotted Yellowtail (#13939)"
    { 6513940, 13940 }, // "Recipe Item: Recipe: Cooked Glossy Mightfish (#13940)"
    { 6513942, 13942 }, // "Recipe Item: Recipe: Grilled Squid (#13942)"
    { 6513941, 13941 }, // "Recipe Item: Recipe: Filet of Redgill (#13941)"
    { 6513943, 13943 }, // "Recipe Item: Recipe: Hot Smoked Bass (#13943)"
    { 6513945, 13945 }, // "Recipe Item: Recipe: Nightfin Soup (#13945)"
    { 6513946, 13946 }, // "Recipe Item: Recipe: Poached Sunscale Salmon (#13946)"
    { 6513947, 13947 }, // "Recipe Item: Recipe: Lobster Stew (#13947)"
    { 6513948, 13948 }, // "Recipe Item: Recipe: Mightfish Steak (#13948)"
    { 6513949, 13949 }, // "Recipe Item: Recipe: Baked Salmon (#13949)"
    { 6514466, 14466 }, // "Recipe Item: Pattern: Frostweave Tunic (#14466)"
    { 6514467, 14467 }, // "Recipe Item: Pattern: Frostweave Robe (#14467)"
    { 6514468, 14468 }, // "Recipe Item: Pattern: Runecloth Bag (#14468)"
    { 6514469, 14469 }, // "Recipe Item: Pattern: Runecloth Robe (#14469)"
    { 6514470, 14470 }, // "Recipe Item: Pattern: Runecloth Tunic (#14470)"
    { 6514471, 14471 }, // "Recipe Item: Pattern: Cindercloth Vest (#14471)"
    { 6514472, 14472 }, // "Recipe Item: Pattern: Runecloth Cloak (#14472)"
    { 6514473, 14473 }, // "Recipe Item: Pattern: Ghostweave Belt (#14473)"
    { 6514474, 14474 }, // "Recipe Item: Pattern: Frostweave Gloves (#14474)"
    { 6514476, 14476 }, // "Recipe Item: Pattern: Cindercloth Gloves (#14476)"
    { 6514477, 14477 }, // "Recipe Item: Pattern: Ghostweave Gloves (#14477)"
    { 6514478, 14478 }, // "Recipe Item: Pattern: Brightcloth Robe (#14478)"
    { 6514479, 14479 }, // "Recipe Item: Pattern: Brightcloth Gloves (#14479)"
    { 6514480, 14480 }, // "Recipe Item: Pattern: Ghostweave Vest (#14480)"
    { 6514481, 14481 }, // "Recipe Item: Pattern: Runecloth Gloves (#14481)"
    { 6514482, 14482 }, // "Recipe Item: Pattern: Cindercloth Cloak (#14482)"
    { 6514483, 14483 }, // "Recipe Item: Pattern: Felcloth Pants (#14483)"
    { 6514484, 14484 }, // "Recipe Item: Pattern: Brightcloth Cloak (#14484)"
    { 6514485, 14485 }, // "Recipe Item: Pattern: Wizardweave Leggings (#14485)"
    { 6514486, 14486 }, // "Recipe Item: Pattern: Cloak of Fire (#14486)"
    { 6514488, 14488 }, // "Recipe Item: Pattern: Runecloth Boots (#14488)"
    { 6514489, 14489 }, // "Recipe Item: Pattern: Frostweave Pants (#14489)"
    { 6514490, 14490 }, // "Recipe Item: Pattern: Cindercloth Pants (#14490)"
    { 6514493, 14493 }, // "Recipe Item: Pattern: Robe of Winter Night (#14493)"
    { 6514492, 14492 }, // "Recipe Item: Pattern: Felcloth Boots (#14492)"
    { 6514491, 14491 }, // "Recipe Item: Pattern: Runecloth Pants (#14491)"
    { 6514494, 14494 }, // "Recipe Item: Pattern: Brightcloth Pants (#14494)"
    { 6514497, 14497 }, // "Recipe Item: Pattern: Mooncloth Leggings (#14497)"
    { 6514495, 14495 }, // "Recipe Item: Pattern: Ghostweave Pants (#14495)"
    { 6514496, 14496 }, // "Recipe Item: Pattern: Felcloth Hood (#14496)"
    { 6514498, 14498 }, // "Recipe Item: Pattern: Runecloth Headband (#14498)"
    { 6514499, 14499 }, // "Recipe Item: Pattern: Mooncloth Bag (#14499)"
    { 6514500, 14500 }, // "Recipe Item: Pattern: Wizardweave Robe (#14500)"
    { 6514501, 14501 }, // "Recipe Item: Pattern: Mooncloth Vest (#14501)"
    { 6514507, 14507 }, // "Recipe Item: Pattern: Mooncloth Shoulders (#14507)"
    { 6514504, 14504 }, // "Recipe Item: Pattern: Runecloth Shoulders (#14504)"
    { 6514505, 14505 }, // "Recipe Item: Pattern: Wizardweave Turban (#14505)"
    { 6514506, 14506 }, // "Recipe Item: Pattern: Felcloth Robe (#14506)"
    { 6514509, 14509 }, // "Recipe Item: Pattern: Mooncloth Circlet (#14509)"
    { 6514508, 14508 }, // "Recipe Item: Pattern: Felcloth Shoulders (#14508)"
    { 6514511, 14511 }, // "Recipe Item: Pattern: Gloves of Spell Mastery (#14511)"
    { 6514510, 14510 }, // "Recipe Item: Pattern: Bottomless Bag (#14510)"
    { 6514512, 14512 }, // "Recipe Item: Pattern: Truefaith Vestments (#14512)"
    { 6514513, 14513 }, // "Recipe Item: Pattern: Robe of the Archmage (#14513)"
    { 6514514, 14514 }, // "Recipe Item: Pattern: Robe of the Void (#14514)"
    { 6504213, 4213 }, // "Recipe Item: Grimoire of Doom (#4213)"
    { 6514526, 14526 }, // "Recipe Item: Pattern: Mooncloth (#14526)"
    { 6515724, 15724 }, // "Recipe Item: Pattern: Heavy Scorpid Bracers (#15724)"
    { 6515725, 15725 }, // "Recipe Item: Pattern: Wicked Leather Gauntlets (#15725)"
    { 6515726, 15726 }, // "Recipe Item: Pattern: Green Dragonscale Breastplate (#15726)"
    { 6515727, 15727 }, // "Recipe Item: Pattern: Heavy Scorpid Vest (#15727)"
    { 6515728, 15728 }, // "Recipe Item: Pattern: Wicked Leather Bracers (#15728)"
    { 6515729, 15729 }, // "Recipe Item: Pattern: Chimeric Gloves (#15729)"
    { 6515730, 15730 }, // "Recipe Item: Pattern: Red Dragonscale Breastplate (#15730)"
    { 6515731, 15731 }, // "Recipe Item: Pattern: Runic Leather Gauntlets (#15731)"
    { 6515732, 15732 }, // "Recipe Item: Pattern: Volcanic Leggings (#15732)"
    { 6515733, 15733 }, // "Recipe Item: Pattern: Green Dragonscale Leggings (#15733)"
    { 6515734, 15734 }, // "Recipe Item: Pattern: Living Shoulders (#15734)"
    { 6515735, 15735 }, // "Recipe Item: Pattern: Ironfeather Shoulders (#15735)"
    { 6515737, 15737 }, // "Recipe Item: Pattern: Chimeric Boots (#15737)"
    { 6515738, 15738 }, // "Recipe Item: Pattern: Heavy Scorpid Gauntlets (#15738)"
    { 6515739, 15739 }, // "Recipe Item: Pattern: Runic Leather Bracers (#15739)"
    { 6515740, 15740 }, // "Recipe Item: Pattern: Frostsaber Boots (#15740)"
    { 6515741, 15741 }, // "Recipe Item: Pattern: Stormshroud Pants (#15741)"
    { 6515742, 15742 }, // "Recipe Item: Pattern: Warbear Harness (#15742)"
    { 6515743, 15743 }, // "Recipe Item: Pattern: Heavy Scorpid Belt (#15743)"
    { 6515744, 15744 }, // "Recipe Item: Pattern: Wicked Leather Headband (#15744)"
    { 6515745, 15745 }, // "Recipe Item: Pattern: Runic Leather Belt (#15745)"
    { 6515746, 15746 }, // "Recipe Item: Pattern: Chimeric Leggings (#15746)"
    { 6515747, 15747 }, // "Recipe Item: Pattern: Frostsaber Leggings (#15747)"
    { 6515748, 15748 }, // "Recipe Item: Pattern: Heavy Scorpid Leggings (#15748)"
    { 6515749, 15749 }, // "Recipe Item: Pattern: Volcanic Breastplate (#15749)"
    { 6515751, 15751 }, // "Recipe Item: Pattern: Blue Dragonscale Breastplate (#15751)"
    { 6515752, 15752 }, // "Recipe Item: Pattern: Living Leggings (#15752)"
    { 6515753, 15753 }, // "Recipe Item: Pattern: Stormshroud Armor (#15753)"
    { 6515754, 15754 }, // "Recipe Item: Pattern: Warbear Woolies (#15754)"
    { 6515755, 15755 }, // "Recipe Item: Pattern: Chimeric Vest (#15755)"
    { 6515756, 15756 }, // "Recipe Item: Pattern: Runic Leather Headband (#15756)"
    { 6515757, 15757 }, // "Recipe Item: Pattern: Wicked Leather Pants (#15757)"
    { 6515758, 15758 }, // "Recipe Item: Pattern: Devilsaur Gauntlets (#15758)"
    { 6515759, 15759 }, // "Recipe Item: Pattern: Black Dragonscale Breastplate (#15759)"
    { 6515760, 15760 }, // "Recipe Item: Pattern: Ironfeather Breastplate (#15760)"
    { 6515761, 15761 }, // "Recipe Item: Pattern: Frostsaber Gloves (#15761)"
    { 6515762, 15762 }, // "Recipe Item: Pattern: Heavy Scorpid Helm (#15762)"
    { 6515763, 15763 }, // "Recipe Item: Pattern: Blue Dragonscale Shoulders (#15763)"
    { 6515764, 15764 }, // "Recipe Item: Pattern: Stormshroud Shoulders (#15764)"
    { 6515765, 15765 }, // "Recipe Item: Pattern: Runic Leather Pants (#15765)"
    { 6515768, 15768 }, // "Recipe Item: Pattern: Wicked Leather Belt (#15768)"
    { 6515770, 15770 }, // "Recipe Item: Pattern: Black Dragonscale Shoulders (#15770)"
    { 6515771, 15771 }, // "Recipe Item: Pattern: Living Breastplate (#15771)"
    { 6515772, 15772 }, // "Recipe Item: Pattern: Devilsaur Leggings (#15772)"
    { 6515773, 15773 }, // "Recipe Item: Pattern: Wicked Leather Armor (#15773)"
    { 6515774, 15774 }, // "Recipe Item: Pattern: Heavy Scorpid Shoulders (#15774)"
    { 6515775, 15775 }, // "Recipe Item: Pattern: Volcanic Shoulders (#15775)"
    { 6515776, 15776 }, // "Recipe Item: Pattern: Runic Leather Armor (#15776)"
    { 6515777, 15777 }, // "Recipe Item: Pattern: Runic Leather Shoulders (#15777)"
    { 6515779, 15779 }, // "Recipe Item: Pattern: Frostsaber Tunic (#15779)"
    { 6515780, 15780 }, // "Recipe Item: Pattern: Onyxia Scale Breastplate (#15780)"
    { 6515781, 15781 }, // "Recipe Item: Pattern: Black Dragonscale Leggings (#15781)"
    { 6516041, 16041 }, // "Recipe Item: Schematic: Thorium Grenade (#16041)"
    { 6516042, 16042 }, // "Recipe Item: Schematic: Thorium Widget (#16042)"
    { 6516043, 16043 }, // "Recipe Item: Schematic: Thorium Rifle (#16043)"
    { 6516044, 16044 }, // "Recipe Item: Schematic: Lifelike Mechanical Toad (#16044)"
    { 6516045, 16045 }, // "Recipe Item: Schematic: Spellpower Goggles Xtreme Plus (#16045)"
    { 6516047, 16047 }, // "Recipe Item: Schematic: Thorium Tube (#16047)"
    { 6516048, 16048 }, // "Recipe Item: Schematic: Dark Iron Rifle (#16048)"
    { 6516049, 16049 }, // "Recipe Item: Schematic: Dark Iron Bomb (#16049)"
    { 6516051, 16051 }, // "Recipe Item: Schematic: Thorium Shells (#16051)"
    { 6516665, 16665 }, // "Recipe Item: Tome of Tranquilizing Shot (#16665)"
    { 6516046, 16046 }, // "Recipe Item: Schematic: Masterwork Target Dummy (#16046)"
    { 6516050, 16050 }, // "Recipe Item: Schematic: Delicate Arcanite Converter (#16050)"
    { 6516052, 16052 }, // "Recipe Item: Schematic: Voice Amplification Modulator (#16052)"
    { 6516053, 16053 }, // "Recipe Item: Schematic: Master Engineer's Goggles (#16053)"
    { 6516054, 16054 }, // "Recipe Item: Schematic: Arcanite Dragonling (#16054)"
    { 6516055, 16055 }, // "Recipe Item: Schematic: Arcane Bomb (#16055)"
    { 6516056, 16056 }, // "Recipe Item: Schematic: Flawless Arcanite Rifle (#16056)"
    { 6516214, 16214 }, // "Recipe Item: Formula: Enchant Bracer - Greater Intellect (#16214)"
    { 6516218, 16218 }, // "Recipe Item: Formula: Enchant Bracer - Superior Spirit (#16218)"
    { 6516246, 16246 }, // "Recipe Item: Formula: Enchant Bracer - Superior Strength (#16246)"
    { 6516251, 16251 }, // "Recipe Item: Formula: Enchant Bracer - Superior Stamina (#16251)"
    { 6516219, 16219 }, // "Recipe Item: Formula: Enchant Gloves - Greater Agility (#16219)"
    { 6516244, 16244 }, // "Recipe Item: Formula: Enchant Gloves - Greater Strength (#16244)"
    { 6516216, 16216 }, // "Recipe Item: Formula: Enchant Cloak - Greater Resistance (#16216)"
    { 6516224, 16224 }, // "Recipe Item: Formula: Enchant Cloak - Superior Defense (#16224)"
    { 6516222, 16222 }, // "Recipe Item: Formula: Enchant Shield - Superior Spirit (#16222)"
    { 6516217, 16217 }, // "Recipe Item: Formula: Enchant Shield - Greater Stamina (#16217)"
    { 6516215, 16215 }, // "Recipe Item: Formula: Enchant Boots - Greater Stamina (#16215)"
    { 6516245, 16245 }, // "Recipe Item: Formula: Enchant Boots - Greater Agility (#16245)"
    { 6516220, 16220 }, // "Recipe Item: Formula: Enchant Boots - Spirit (#16220)"
    { 6516253, 16253 }, // "Recipe Item: Formula: Enchant Chest - Greater Stats (#16253)"
    { 6516221, 16221 }, // "Recipe Item: Formula: Enchant Chest - Major Health (#16221)"
    { 6516242, 16242 }, // "Recipe Item: Formula: Enchant Chest - Major Mana (#16242)"
    { 6516223, 16223 }, // "Recipe Item: Formula: Enchant Weapon - Icy Chill (#16223)"
    { 6516247, 16247 }, // "Recipe Item: Formula: Enchant 2H Weapon - Superior Impact (#16247)"
    { 6516250, 16250 }, // "Recipe Item: Formula: Enchant Weapon - Superior Striking (#16250)"
    { 6516254, 16254 }, // "Recipe Item: Formula: Enchant Weapon - Lifestealing (#16254)"
    { 6516248, 16248 }, // "Recipe Item: Formula: Enchant Weapon - Unholy (#16248)"
    { 6516252, 16252 }, // "Recipe Item: Formula: Enchant Weapon - Crusader (#16252)"
    { 6516255, 16255 }, // "Recipe Item: Formula: Enchant 2H Weapon - Major Spirit (#16255)"
    { 6516249, 16249 }, // "Recipe Item: Formula: Enchant 2H Weapon - Major Intellect (#16249)"
    { 6516243, 16243 }, // "Recipe Item: Formula: Runed Arcanite Rod (#16243)"
    { 6516767, 16767 }, // "Recipe Item: Recipe: Undermine Clam Chowder (#16767)"
    { 6517017, 17017 }, // "Recipe Item: Pattern: Flarecore Mantle (#17017)"
    { 6517018, 17018 }, // "Recipe Item: Pattern: Flarecore Gloves (#17018)"
    { 6517022, 17022 }, // "Recipe Item: Pattern: Corehound Boots (#17022)"
    { 6517023, 17023 }, // "Recipe Item: Pattern: Molten Helm (#17023)"
    { 6517025, 17025 }, // "Recipe Item: Pattern: Black Dragonscale Boots (#17025)"
    { 6517049, 17049 }, // "Recipe Item: Plans: Fiery Chain Girdle (#17049)"
    { 6517053, 17053 }, // "Recipe Item: Plans: Fiery Chain Shoulders (#17053)"
    { 6517051, 17051 }, // "Recipe Item: Plans: Dark Iron Bracers (#17051)"
    { 6517052, 17052 }, // "Recipe Item: Plans: Dark Iron Leggings (#17052)"
    { 6517059, 17059 }, // "Recipe Item: Plans: Dark Iron Reaver (#17059)"
    { 6517060, 17060 }, // "Recipe Item: Plans: Dark Iron Destroyer (#17060)"
    { 6517062, 17062 }, // "Recipe Item: Recipe: Mithril Head Trout (#17062)"
    { 6517200, 17200 }, // "Recipe Item: Recipe: Gingerbread Cookie (#17200)"
    { 6517201, 17201 }, // "Recipe Item: Recipe: Egg Nog (#17201)"
    { 6518592, 18592 }, // "Recipe Item: Plans: Sulfuron Hammer (#18592)"
    { 6517413, 17413 }, // "Recipe Item: Codex: Prayer of Fortitude (#17413)"
    { 6517414, 17414 }, // "Recipe Item: Codex: Prayer of Fortitude II (#17414)"
    { 6517682, 17682 }, // "Recipe Item: Book: Gift of the Wild (#17682)"
    { 6517683, 17683 }, // "Recipe Item: Book: Gift of the Wild II (#17683)"
    { 6517706, 17706 }, // "Recipe Item: Plans: Edge of Winter (#17706)"
    { 6517709, 17709 }, // "Recipe Item: Recipe: Elixir of Frost Power (#17709)"
    { 6517725, 17725 }, // "Recipe Item: Formula: Enchant Weapon - Winter's Might (#17725)"
    { 6517720, 17720 }, // "Recipe Item: Schematic: Snowmaster 9000 (#17720)"
    { 6517722, 17722 }, // "Recipe Item: Pattern: Gloves of the Greatfather (#17722)"
    { 6517724, 17724 }, // "Recipe Item: Pattern: Green Holiday Shirt (#17724)"
    { 6518046, 18046 }, // "Recipe Item: Recipe: Tender Wolf Steak (#18046)"
    { 6518239, 18239 }, // "Recipe Item: Pattern: Shadowskin Gloves (#18239)"
    { 6518252, 18252 }, // "Recipe Item: Pattern: Core Armor Kit (#18252)"
    { 6518257, 18257 }, // "Recipe Item: Recipe: Major Rejuvenation Potion (#18257)"
    { 6518259, 18259 }, // "Recipe Item: Formula: Enchant Weapon - Spellpower (#18259)"
    { 6518260, 18260 }, // "Recipe Item: Formula: Enchant Weapon - Healing Power (#18260)"
    { 6518264, 18264 }, // "Recipe Item: Plans: Elemental Sharpening Stone (#18264)"
    { 6518265, 18265 }, // "Recipe Item: Pattern: Flarecore Wraps (#18265)"
    { 6518267, 18267 }, // "Recipe Item: Recipe: Runn Tum Tuber Surprise (#18267)"
    { 6518290, 18290 }, // "Recipe Item: Schematic: Biznicks 247x128 Accurascope (#18290)"
    { 6518292, 18292 }, // "Recipe Item: Schematic: Core Marksman Rifle (#18292)"
    { 6518291, 18291 }, // "Recipe Item: Schematic: Force Reactive Disk (#18291)"
    { 6518414, 18414 }, // "Recipe Item: Pattern: Belt of the Archmage (#18414)"
    { 6518415, 18415 }, // "Recipe Item: Pattern: Felcloth Gloves (#18415)"
    { 6518416, 18416 }, // "Recipe Item: Pattern: Inferno Gloves (#18416)"
    { 6518417, 18417 }, // "Recipe Item: Pattern: Mooncloth Gloves (#18417)"
    { 6518418, 18418 }, // "Recipe Item: Pattern: Cloak of Warding (#18418)"
    { 6518487, 18487 }, // "Recipe Item: Pattern: Mooncloth Robe (#18487)"
    { 6518514, 18514 }, // "Recipe Item: Pattern: Girdle of Insight (#18514)"
    { 6518515, 18515 }, // "Recipe Item: Pattern: Mongoose Boots (#18515)"
    { 6518516, 18516 }, // "Recipe Item: Pattern: Swift Flight Bracers (#18516)"
    { 6518517, 18517 }, // "Recipe Item: Pattern: Chromatic Cloak (#18517)"
    { 6518518, 18518 }, // "Recipe Item: Pattern: Hide of the Wild (#18518)"
    { 6518519, 18519 }, // "Recipe Item: Pattern: Shifting Cloak (#18519)"
    { 6544956, 44956 }, // "Recipe Item: Goblin's Guide to Elementium (#44956)"
    { 6518600, 18600 }, // "Recipe Item: Tome of Arcane Brilliance (#18600)"
    { 6518647, 18647 }, // "Recipe Item: Schematic: Red Firework (#18647)"
    { 6518649, 18649 }, // "Recipe Item: Schematic: Blue Firework (#18649)"
    { 6518648, 18648 }, // "Recipe Item: Schematic: Green Firework (#18648)"
    { 6518650, 18650 }, // "Recipe Item: Schematic: EZ-Thro Dynamite II (#18650)"
    { 6518651, 18651 }, // "Recipe Item: Schematic: Truesilver Transformer (#18651)"
    { 6518652, 18652 }, // "Recipe Item: Schematic: Gyrofreeze Ice Reflector (#18652)"
    { 6518653, 18653 }, // "Recipe Item: Schematic: Goblin Jumper Cables XL (#18653)"
    { 6518655, 18655 }, // "Recipe Item: Schematic: Major Recombobulator (#18655)"
    { 6518656, 18656 }, // "Recipe Item: Schematic: Powerful Seaforium Charge (#18656)"
    { 6518657, 18657 }, // "Recipe Item: Schematic: Hyper-Radiant Flame Reflector (#18657)"
    { 6518658, 18658 }, // "Recipe Item: Schematic: Ultra-Flash Shadow Reflector (#18658)"
    { 6518654, 18654 }, // "Recipe Item: Schematic: Gnomish Alarm-o-Bot (#18654)"
    { 6518661, 18661 }, // "Recipe Item: Schematic: World Enlarger (#18661)"
    { 6518731, 18731 }, // "Recipe Item: Pattern: Heavy Leather Ball (#18731)"
    { 6518949, 18949 }, // "Recipe Item: Pattern: Barbaric Bracers (#18949)"
    { 6519027, 19027 }, // "Recipe Item: Schematic: Snake Burst Firework (#19027)"
    { 6519202, 19202 }, // "Recipe Item: Plans: Heavy Timbermaw Belt (#19202)"
    { 6519204, 19204 }, // "Recipe Item: Plans: Heavy Timbermaw Boots (#19204)"
    { 6519203, 19203 }, // "Recipe Item: Plans: Girdle of the Dawn (#19203)"
    { 6519205, 19205 }, // "Recipe Item: Plans: Gloves of the Dawn (#19205)"
    { 6519206, 19206 }, // "Recipe Item: Plans: Dark Iron Helm (#19206)"
    { 6519207, 19207 }, // "Recipe Item: Plans: Dark Iron Gauntlets (#19207)"
    { 6519208, 19208 }, // "Recipe Item: Plans: Black Amnesty (#19208)"
    { 6519209, 19209 }, // "Recipe Item: Plans: Blackfury (#19209)"
    { 6519210, 19210 }, // "Recipe Item: Plans: Ebon Hand (#19210)"
    { 6519211, 19211 }, // "Recipe Item: Plans: Blackguard (#19211)"
    { 6519212, 19212 }, // "Recipe Item: Plans: Nightfall (#19212)"
    { 6519215, 19215 }, // "Recipe Item: Pattern: Wisdom of the Timbermaw (#19215)"
    { 6519218, 19218 }, // "Recipe Item: Pattern: Mantle of the Timbermaw (#19218)"
    { 6519216, 19216 }, // "Recipe Item: Pattern: Argent Boots (#19216)"
    { 6519217, 19217 }, // "Recipe Item: Pattern: Argent Shoulders (#19217)"
    { 6519219, 19219 }, // "Recipe Item: Pattern: Flarecore Robe (#19219)"
    { 6519220, 19220 }, // "Recipe Item: Pattern: Flarecore Leggings (#19220)"
    { 6519326, 19326 }, // "Recipe Item: Pattern: Might of the Timbermaw (#19326)"
    { 6519327, 19327 }, // "Recipe Item: Pattern: Timbermaw Brawlers (#19327)"
    { 6519328, 19328 }, // "Recipe Item: Pattern: Dawn Treaders (#19328)"
    { 6519329, 19329 }, // "Recipe Item: Pattern: Golden Mantle of the Dawn (#19329)"
    { 6519330, 19330 }, // "Recipe Item: Pattern: Lava Belt (#19330)"
    { 6519331, 19331 }, // "Recipe Item: Pattern: Chromatic Gauntlets (#19331)"
    { 6519332, 19332 }, // "Recipe Item: Pattern: Corehound Belt (#19332)"
    { 6519333, 19333 }, // "Recipe Item: Pattern: Molten Belt (#19333)"
    { 6519442, 19442 }, // "Recipe Item: Formula: Powerful Anti-Venom (#19442)"
    { 6519444, 19444 }, // "Recipe Item: Formula: Enchant Weapon - Strength (#19444)"
    { 6519445, 19445 }, // "Recipe Item: Formula: Enchant Weapon - Agility (#19445)"
    { 6519446, 19446 }, // "Recipe Item: Formula: Enchant Bracer - Mana Regeneration (#19446)"
    { 6519447, 19447 }, // "Recipe Item: Formula: Enchant Bracer - Healing Power (#19447)"
    { 6519448, 19448 }, // "Recipe Item: Formula: Enchant Weapon - Mighty Spirit (#19448)"
    { 6519449, 19449 }, // "Recipe Item: Formula: Enchant Weapon - Mighty Intellect (#19449)"
    { 6519764, 19764 }, // "Recipe Item: Pattern: Bloodvine Vest (#19764)"
    { 6519765, 19765 }, // "Recipe Item: Pattern: Bloodvine Leggings (#19765)"
    { 6519766, 19766 }, // "Recipe Item: Pattern: Bloodvine Boots (#19766)"
    { 6519769, 19769 }, // "Recipe Item: Pattern: Primal Batskin Jerkin (#19769)"
    { 6519770, 19770 }, // "Recipe Item: Pattern: Primal Batskin Gloves (#19770)"
    { 6519771, 19771 }, // "Recipe Item: Pattern: Primal Batskin Bracers (#19771)"
    { 6519772, 19772 }, // "Recipe Item: Pattern: Blood Tiger Breastplate (#19772)"
    { 6519773, 19773 }, // "Recipe Item: Pattern: Blood Tiger Shoulders (#19773)"
    { 6519776, 19776 }, // "Recipe Item: Plans: Bloodsoul Breastplate (#19776)"
    { 6519777, 19777 }, // "Recipe Item: Plans: Bloodsoul Shoulders (#19777)"
    { 6519778, 19778 }, // "Recipe Item: Plans: Bloodsoul Gauntlets (#19778)"
    { 6519779, 19779 }, // "Recipe Item: Plans: Darksoul Breastplate (#19779)"
    { 6519780, 19780 }, // "Recipe Item: Plans: Darksoul Leggings (#19780)"
    { 6519781, 19781 }, // "Recipe Item: Plans: Darksoul Shoulders (#19781)"
    { 6520000, 20000 }, // "Recipe Item: Schematic: Bloodvine Goggles (#20000)"
    { 6520001, 20001 }, // "Recipe Item: Schematic: Bloodvine Lens (#20001)"
    { 6520011, 20011 }, // "Recipe Item: Recipe: Mageblood Elixir (#20011)"
    { 6520012, 20012 }, // "Recipe Item: Recipe: Greater Dreamless Sleep Potion (#20012)"
    { 6520013, 20013 }, // "Recipe Item: Recipe: Living Action Potion (#20013)"
    { 6520014, 20014 }, // "Recipe Item: Recipe: Mighty Troll's Blood Elixir (#20014)"
    { 6520040, 20040 }, // "Recipe Item: Plans: Dark Iron Boots (#20040)"
    { 6520075, 20075 }, // "Recipe Item: Recipe: Heavy Crocolisk Stew (#20075)"
    { 6520382, 20382 }, // "Recipe Item: Pattern: Dreamscale Breastplate (#20382)"
    { 6520506, 20506 }, // "Recipe Item: Pattern: Spitfire Bracers (#20506)"
    { 6520507, 20507 }, // "Recipe Item: Pattern: Spitfire Gauntlets (#20507)"
    { 6520508, 20508 }, // "Recipe Item: Pattern: Spitfire Breastplate (#20508)"
    { 6520509, 20509 }, // "Recipe Item: Pattern: Sandstalker Bracers (#20509)"
    { 6520510, 20510 }, // "Recipe Item: Pattern: Sandstalker Gauntlets (#20510)"
    { 6520511, 20511 }, // "Recipe Item: Pattern: Sandstalker Breastplate (#20511)"
    { 6520546, 20546 }, // "Recipe Item: Pattern: Runed Stygian Leggings (#20546)"
    { 6520548, 20548 }, // "Recipe Item: Pattern: Runed Stygian Belt (#20548)"
    { 6520547, 20547 }, // "Recipe Item: Pattern: Runed Stygian Boots (#20547)"
    { 6520553, 20553 }, // "Recipe Item: Plans: Darkrune Gauntlets (#20553)"
    { 6520555, 20555 }, // "Recipe Item: Plans: Darkrune Helm (#20555)"
    { 6520554, 20554 }, // "Recipe Item: Plans: Darkrune Breastplate (#20554)"
    { 6520576, 20576 }, // "Recipe Item: Pattern: Black Whelp Tunic (#20576)"
    { 6520726, 20726 }, // "Recipe Item: Formula: Enchant Gloves - Threat (#20726)"
    { 6520727, 20727 }, // "Recipe Item: Formula: Enchant Gloves - Shadow Power (#20727)"
    { 6520728, 20728 }, // "Recipe Item: Formula: Enchant Gloves - Frost Power (#20728)"
    { 6520729, 20729 }, // "Recipe Item: Formula: Enchant Gloves - Fire Power (#20729)"
    { 6520730, 20730 }, // "Recipe Item: Formula: Enchant Gloves - Healing Power (#20730)"
    { 6520731, 20731 }, // "Recipe Item: Formula: Enchant Gloves - Superior Agility (#20731)"
    { 6520732, 20732 }, // "Recipe Item: Formula: Enchant Cloak - Greater Fire Resistance (#20732)"
    { 6520733, 20733 }, // "Recipe Item: Formula: Enchant Cloak - Greater Nature Resistance (#20733)"
    { 6520734, 20734 }, // "Recipe Item: Formula: Enchant Cloak - Stealth (#20734)"
    { 6520735, 20735 }, // "Recipe Item: Formula: Enchant Cloak - Subtlety (#20735)"
    { 6520736, 20736 }, // "Recipe Item: Formula: Enchant Cloak - Dodge (#20736)"
    { 6520758, 20758 }, // "Recipe Item: Formula: Minor Wizard Oil (#20758)"
    { 6520752, 20752 }, // "Recipe Item: Formula: Minor Mana Oil (#20752)"
    { 6520753, 20753 }, // "Recipe Item: Formula: Lesser Wizard Oil (#20753)"
    { 6520754, 20754 }, // "Recipe Item: Formula: Lesser Mana Oil (#20754)"
    { 6520755, 20755 }, // "Recipe Item: Formula: Wizard Oil (#20755)"
    { 6520756, 20756 }, // "Recipe Item: Formula: Brilliant Wizard Oil (#20756)"
    { 6520757, 20757 }, // "Recipe Item: Formula: Brilliant Mana Oil (#20757)"
    { 6520761, 20761 }, // "Recipe Item: Recipe: Transmute Elemental Fire (#20761)"
    { 6521297, 21297 }, // "Recipe Item: Manual of Heroic Strike IX (#21297)"
    { 6521299, 21299 }, // "Recipe Item: Manual of Revenge VI (#21299)"
    { 6521298, 21298 }, // "Recipe Item: Manual of Battle Shout VII (#21298)"
    { 6521288, 21288 }, // "Recipe Item: Libram: Blessing of Wisdom VI (#21288)"
    { 6521289, 21289 }, // "Recipe Item: Libram: Blessing of Might VII (#21289)"
    { 6521290, 21290 }, // "Recipe Item: Libram: Holy Light IX (#21290)"
    { 6521304, 21304 }, // "Recipe Item: Guide: Multi-Shot V (#21304)"
    { 6521306, 21306 }, // "Recipe Item: Guide: Serpent Sting IX (#21306)"
    { 6521307, 21307 }, // "Recipe Item: Guide: Aspect of the Hawk VII (#21307)"
    { 6521294, 21294 }, // "Recipe Item: Book of Healing Touch XI (#21294)"
    { 6521295, 21295 }, // "Recipe Item: Book of Starfire VII (#21295)"
    { 6521296, 21296 }, // "Recipe Item: Book of Rejuvenation XI (#21296)"
    { 6521300, 21300 }, // "Recipe Item: Handbook of Backstab IX (#21300)"
    { 6521303, 21303 }, // "Recipe Item: Handbook of Feint V (#21303)"
    { 6521214, 21214 }, // "Recipe Item: Tome of Frostbolt XI (#21214)"
    { 6521279, 21279 }, // "Recipe Item: Tome of Fireball XII (#21279)"
    { 6521281, 21281 }, // "Recipe Item: Grimoire of Shadow Bolt X (#21281)"
    { 6521282, 21282 }, // "Recipe Item: Grimoire of Immolate VIII (#21282)"
    { 6521283, 21283 }, // "Recipe Item: Grimoire of Corruption VII (#21283)"
    { 6521284, 21284 }, // "Recipe Item: Codex of Greater Heal V (#21284)"
    { 6521285, 21285 }, // "Recipe Item: Codex of Renew X (#21285)"
    { 6521287, 21287 }, // "Recipe Item: Codex of Prayer of Healing V (#21287)"
    { 6520856, 20856 }, // "Recipe Item: Design: Heavy Golden Necklace of Battle (#20856)"
    { 6520855, 20855 }, // "Recipe Item: Design: Wicked Moonstone Ring (#20855)"
    { 6520854, 20854 }, // "Recipe Item: Design: Amulet of the Moon (#20854)"
    { 6521280, 21280 }, // "Recipe Item: Tome of Arcane Missiles VIII (#21280)"
    { 6521302, 21302 }, // "Recipe Item: Handbook of Deadly Poison V (#21302)"
    { 6521291, 21291 }, // "Recipe Item: Tablet of Healing Wave X (#21291)"
    { 6521293, 21293 }, // "Recipe Item: Tablet of Grace of Air Totem III (#21293)"
    { 6521292, 21292 }, // "Recipe Item: Tablet of Strength of Earth Totem V (#21292)"
    { 6529549, 29549 }, // "Recipe Item: Codex: Prayer of Fortitude III (#29549)"
    { 6520970, 20970 }, // "Recipe Item: Design: Pendant of the Agate Shield (#20970)"
    { 6520971, 20971 }, // "Recipe Item: Design: Heavy Iron Knuckles (#20971)"
    { 6520973, 20973 }, // "Recipe Item: Design: Blazing Citrine Ring (#20973)"
    { 6520974, 20974 }, // "Recipe Item: Design: Jade Pendant of Blasting (#20974)"
    { 6520975, 20975 }, // "Recipe Item: Design: The Jade Eye (#20975)"
    { 6520976, 20976 }, // "Recipe Item: Design: Citrine Pendant of Golden Healing (#20976)"
    { 6521025, 21025 }, // "Recipe Item: Recipe: Dirge's Kickin' Chimaerok Chops (#21025)"
    { 6521099, 21099 }, // "Recipe Item: Recipe: Smoked Sagefish (#21099)"
    { 6521219, 21219 }, // "Recipe Item: Recipe: Sagefish Delight (#21219)"
    { 6521358, 21358 }, // "Recipe Item: Pattern: Soul Pouch (#21358)"
    { 6521371, 21371 }, // "Recipe Item: Pattern: Core Felcloth Bag (#21371)"
    { 6521547, 21547 }, // "Recipe Item: Recipe: Elixir of Greater Firepower (#21547)"
    { 6521548, 21548 }, // "Recipe Item: Pattern: Stormshroud Gloves (#21548)"
    { 6521722, 21722 }, // "Recipe Item: Pattern: Festival Dress (#21722)"
    { 6521723, 21723 }, // "Recipe Item: Pattern: Festival Suit (#21723)"
    { 6521724, 21724 }, // "Recipe Item: Schematic: Small Blue Rocket (#21724)"
    { 6521725, 21725 }, // "Recipe Item: Schematic: Small Green Rocket (#21725)"
    { 6521726, 21726 }, // "Recipe Item: Schematic: Small Red Rocket (#21726)"
    { 6521727, 21727 }, // "Recipe Item: Schematic: Large Blue Rocket (#21727)"
    { 6521728, 21728 }, // "Recipe Item: Schematic: Large Green Rocket (#21728)"
    { 6521729, 21729 }, // "Recipe Item: Schematic: Large Red Rocket (#21729)"
    { 6521730, 21730 }, // "Recipe Item: Schematic: Blue Rocket Cluster (#21730)"
    { 6521731, 21731 }, // "Recipe Item: Schematic: Green Rocket Cluster (#21731)"
    { 6521732, 21732 }, // "Recipe Item: Schematic: Red Rocket Cluster (#21732)"
    { 6521733, 21733 }, // "Recipe Item: Schematic: Large Blue Rocket Cluster (#21733)"
    { 6521734, 21734 }, // "Recipe Item: Schematic: Large Green Rocket Cluster (#21734)"
    { 6521735, 21735 }, // "Recipe Item: Schematic: Large Red Rocket Cluster (#21735)"
    { 6521738, 21738 }, // "Recipe Item: Schematic: Firework Launcher (#21738)"
    { 6521737, 21737 }, // "Recipe Item: Schematic: Cluster Launcher (#21737)"
    { 6521892, 21892 }, // "Recipe Item: Pattern: Bolt of Imbued Netherweave (#21892)"
    { 6521893, 21893 }, // "Recipe Item: Pattern: Imbued Netherweave Bag (#21893)"
    { 6521894, 21894 }, // "Recipe Item: Pattern: Bolt of Soulcloth (#21894)"
    { 6521895, 21895 }, // "Recipe Item: Pattern: Primal Mooncloth (#21895)"
    { 6521908, 21908 }, // "Recipe Item: Pattern: Spellfire Belt (#21908)"
    { 6521909, 21909 }, // "Recipe Item: Pattern: Spellfire Gloves (#21909)"
    { 6521910, 21910 }, // "Recipe Item: Pattern: Spellfire Robe (#21910)"
    { 6521911, 21911 }, // "Recipe Item: Pattern: Spellfire Bag (#21911)"
    { 6521912, 21912 }, // "Recipe Item: Pattern: Frozen Shadoweave Shoulders (#21912)"
    { 6521914, 21914 }, // "Recipe Item: Pattern: Frozen Shadoweave Boots (#21914)"
    { 6521913, 21913 }, // "Recipe Item: Pattern: Frozen Shadoweave Robe (#21913)"
    { 6521915, 21915 }, // "Recipe Item: Pattern: Ebon Shadowbag (#21915)"
    { 6521916, 21916 }, // "Recipe Item: Pattern: Primal Mooncloth Belt (#21916)"
    { 6521918, 21918 }, // "Recipe Item: Pattern: Primal Mooncloth Shoulders (#21918)"
    { 6521917, 21917 }, // "Recipe Item: Pattern: Primal Mooncloth Robe (#21917)"
    { 6521919, 21919 }, // "Recipe Item: Pattern: Primal Mooncloth Bag (#21919)"
    { 6521896, 21896 }, // "Recipe Item: Pattern: Netherweave Robe (#21896)"
    { 6521897, 21897 }, // "Recipe Item: Pattern: Netherweave Tunic (#21897)"
    { 6521898, 21898 }, // "Recipe Item: Pattern: Imbued Netherweave Pants (#21898)"
    { 6521899, 21899 }, // "Recipe Item: Pattern: Imbued Netherweave Boots (#21899)"
    { 6521900, 21900 }, // "Recipe Item: Pattern: Imbued Netherweave Robe (#21900)"
    { 6521901, 21901 }, // "Recipe Item: Pattern: Imbued Netherweave Tunic (#21901)"
    { 6521902, 21902 }, // "Recipe Item: Pattern: Soulcloth Gloves (#21902)"
    { 6521903, 21903 }, // "Recipe Item: Pattern: Soulcloth Shoulders (#21903)"
    { 6521904, 21904 }, // "Recipe Item: Pattern: Soulcloth Vest (#21904)"
    { 6521905, 21905 }, // "Recipe Item: Pattern: Arcanoweave Bracers (#21905)"
    { 6521906, 21906 }, // "Recipe Item: Pattern: Arcanoweave Boots (#21906)"
    { 6521907, 21907 }, // "Recipe Item: Pattern: Arcanoweave Robe (#21907)"
    { 6521940, 21940 }, // "Recipe Item: Design: Golden Hare (#21940)"
    { 6521941, 21941 }, // "Recipe Item: Design: Black Pearl Panther (#21941)"
    { 6521942, 21942 }, // "Recipe Item: Design: Ruby Crown of Restoration (#21942)"
    { 6521943, 21943 }, // "Recipe Item: Design: Truesilver Crab (#21943)"
    { 6521944, 21944 }, // "Recipe Item: Design: Truesilver Boar (#21944)"
    { 6521945, 21945 }, // "Recipe Item: Design: The Aquamarine Ward (#21945)"
    { 6521947, 21947 }, // "Recipe Item: Design: Gem Studded Band (#21947)"
    { 6521948, 21948 }, // "Recipe Item: Design: Opal Necklace of Impact (#21948)"
    { 6521949, 21949 }, // "Recipe Item: Design: Ruby Serpent (#21949)"
    { 6521952, 21952 }, // "Recipe Item: Design: Emerald Crown of Destruction (#21952)"
    { 6521953, 21953 }, // "Recipe Item: Design: Emerald Owl (#21953)"
    { 6521954, 21954 }, // "Recipe Item: Design: Ring of Bitter Shadows (#21954)"
    { 6521955, 21955 }, // "Recipe Item: Design: Black Diamond Crab (#21955)"
    { 6521956, 21956 }, // "Recipe Item: Design: Dark Iron Scorpid (#21956)"
    { 6521957, 21957 }, // "Recipe Item: Design: Necklace of the Diamond Tower (#21957)"
    { 6522146, 22146 }, // "Recipe Item: Book: Gift of the Wild III (#22146)"
    { 6521992, 21992 }, // "Recipe Item: Manual: Netherweave Bandage (#21992)"
    { 6521993, 21993 }, // "Recipe Item: Manual: Heavy Netherweave Bandage (#21993)"
    { 6529550, 29550 }, // "Recipe Item: Tome of Conjure Water IX (#29550)"
    { 6522153, 22153 }, // "Recipe Item: Tome of Arcane Brilliance 2 (#22153)"
    { 6522209, 22209 }, // "Recipe Item: Plans: Heavy Obsidian Belt (#22209)"
    { 6522219, 22219 }, // "Recipe Item: Plans: Jagged Obsidian Shield (#22219)"
    { 6522222, 22222 }, // "Recipe Item: Plans: Thick Obsidian Breastplate (#22222)"
    { 6522214, 22214 }, // "Recipe Item: Plans: Light Obsidian Belt (#22214)"
    { 6522220, 22220 }, // "Recipe Item: Plans: Black Grasp of the Destroyer (#22220)"
    { 6522221, 22221 }, // "Recipe Item: Plans: Obsidian Mail Tunic (#22221)"
    { 6522307, 22307 }, // "Recipe Item: Pattern: Enchanted Mageweave Pouch (#22307)"
    { 6522308, 22308 }, // "Recipe Item: Pattern: Enchanted Runecloth Bag (#22308)"
    { 6522309, 22309 }, // "Recipe Item: Pattern: Big Bag of Enchantment (#22309)"
    { 6522393, 22393 }, // "Recipe Item: Codex: Prayer of Shadow Protection (#22393)"
    { 6522310, 22310 }, // "Recipe Item: Pattern: Cenarion Herb Bag (#22310)"
    { 6522312, 22312 }, // "Recipe Item: Pattern: Satchel of Cenarius (#22312)"
    { 6522388, 22388 }, // "Recipe Item: Plans: Titanic Leggings (#22388)"
    { 6522390, 22390 }, // "Recipe Item: Plans: Persuader (#22390)"
    { 6522389, 22389 }, // "Recipe Item: Plans: Sageblade (#22389)"
    { 6522392, 22392 }, // "Recipe Item: Formula: Enchant 2H Weapon - Agility (#22392)"
    { 6522530, 22530 }, // "Recipe Item: Formula: Enchant Bracer - Major Defense (#22530)"
    { 6522531, 22531 }, // "Recipe Item: Formula: Enchant Bracer - Superior Healing (#22531)"
    { 6522532, 22532 }, // "Recipe Item: Formula: Enchant Bracer - Restore Mana Prime (#22532)"
    { 6522533, 22533 }, // "Recipe Item: Formula: Enchant Bracer - Fortitude (#22533)"
    { 6522534, 22534 }, // "Recipe Item: Formula: Enchant Bracer - Spellpower (#22534)"
    { 6522535, 22535 }, // "Recipe Item: Formula: Enchant Ring - Striking (#22535)"
    { 6522536, 22536 }, // "Recipe Item: Formula: Enchant Ring - Spellpower (#22536)"
    { 6522537, 22537 }, // "Recipe Item: Formula: Enchant Ring - Healing Power (#22537)"
    { 6522538, 22538 }, // "Recipe Item: Formula: Enchant Ring - Stats (#22538)"
    { 6522539, 22539 }, // "Recipe Item: Formula: Enchant Shield - Intellect (#22539)"
    { 6522540, 22540 }, // "Recipe Item: Formula: Enchant Shield - Shield Block (#22540)"
    { 6522541, 22541 }, // "Recipe Item: Formula: Enchant Shield - Resistance (#22541)"
    { 6522542, 22542 }, // "Recipe Item: Formula: Enchant Boots - Vitality (#22542)"
    { 6522543, 22543 }, // "Recipe Item: Formula: Enchant Boots - Fortitude (#22543)"
    { 6522544, 22544 }, // "Recipe Item: Formula: Enchant Boots - Dexterity (#22544)"
    { 6522545, 22545 }, // "Recipe Item: Formula: Enchant Boots - Surefooted (#22545)"
    { 6522547, 22547 }, // "Recipe Item: Formula: Enchant Chest - Exceptional Stats (#22547)"
    { 6522548, 22548 }, // "Recipe Item: Formula: Enchant Cloak - Major Resistance (#22548)"
    { 6522552, 22552 }, // "Recipe Item: Formula: Enchant Weapon - Major Striking (#22552)"
    { 6522551, 22551 }, // "Recipe Item: Formula: Enchant Weapon - Major Intellect (#22551)"
    { 6522554, 22554 }, // "Recipe Item: Formula: Enchant 2H Weapon - Savagery (#22554)"
    { 6522553, 22553 }, // "Recipe Item: Formula: Enchant Weapon - Potency (#22553)"
    { 6522555, 22555 }, // "Recipe Item: Formula: Enchant Weapon - Major Spellpower (#22555)"
    { 6522556, 22556 }, // "Recipe Item: Formula: Enchant 2H Weapon - Major Agility (#22556)"
    { 6522560, 22560 }, // "Recipe Item: Formula: Enchant Weapon - Sunfire (#22560)"
    { 6522561, 22561 }, // "Recipe Item: Formula: Enchant Weapon - Soulfrost (#22561)"
    { 6522559, 22559 }, // "Recipe Item: Formula: Enchant Weapon - Mongoose (#22559)"
    { 6522558, 22558 }, // "Recipe Item: Formula: Enchant Weapon - Spellsurge (#22558)"
    { 6522557, 22557 }, // "Recipe Item: Formula: Enchant Weapon - Battlemaster (#22557)"
    { 6522562, 22562 }, // "Recipe Item: Formula: Superior Mana Oil (#22562)"
    { 6522563, 22563 }, // "Recipe Item: Formula: Superior Wizard Oil (#22563)"
    { 6522565, 22565 }, // "Recipe Item: Formula: Large Prismatic Shard (#22565)"
    { 6522683, 22683 }, // "Recipe Item: Pattern: Gaea's Embrace (#22683)"
    { 6522647, 22647 }, // "Recipe Item: Recipe: Crunchy Spider Surprise (#22647)"
    { 6522739, 22739 }, // "Recipe Item: Tome of Polymorph: Turtle (#22739)"
    { 6522729, 22729 }, // "Recipe Item: Schematic: Steam Tonk Controller (#22729)"
    { 6522766, 22766 }, // "Recipe Item: Plans: Ironvine Breastplate (#22766)"
    { 6522767, 22767 }, // "Recipe Item: Plans: Ironvine Gloves (#22767)"
    { 6522768, 22768 }, // "Recipe Item: Plans: Ironvine Belt (#22768)"
    { 6522771, 22771 }, // "Recipe Item: Pattern: Bramblewood Helm (#22771)"
    { 6522770, 22770 }, // "Recipe Item: Pattern: Bramblewood Boots (#22770)"
    { 6522769, 22769 }, // "Recipe Item: Pattern: Bramblewood Belt (#22769)"
    { 6522774, 22774 }, // "Recipe Item: Pattern: Sylvan Vest (#22774)"
    { 6522773, 22773 }, // "Recipe Item: Pattern: Sylvan Crown (#22773)"
    { 6522772, 22772 }, // "Recipe Item: Pattern: Sylvan Shoulders (#22772)"
    { 6522900, 22900 }, // "Recipe Item: Recipe: Elixir of Camouflage (#22900)"
    { 6522901, 22901 }, // "Recipe Item: Recipe: Sneaking Potion (#22901)"
    { 6522902, 22902 }, // "Recipe Item: Recipe: Elixir of Major Frost Power (#22902)"
    { 6522903, 22903 }, // "Recipe Item: Recipe: Insane Strength Potion (#22903)"
    { 6522904, 22904 }, // "Recipe Item: Recipe: Elixir of the Searching Eye (#22904)"
    { 6522905, 22905 }, // "Recipe Item: Recipe: Elixir of Major Agility (#22905)"
    { 6522906, 22906 }, // "Recipe Item: Recipe: Shrouding Potion (#22906)"
    { 6522907, 22907 }, // "Recipe Item: Recipe: Super Mana Potion (#22907)"
    { 6522908, 22908 }, // "Recipe Item: Recipe: Elixir of Major Firepower (#22908)"
    { 6522909, 22909 }, // "Recipe Item: Recipe: Elixir of Major Defense (#22909)"
    { 6522910, 22910 }, // "Recipe Item: Recipe: Elixir of Major Shadow Power (#22910)"
    { 6522911, 22911 }, // "Recipe Item: Recipe: Major Dreamless Sleep Potion (#22911)"
    { 6522912, 22912 }, // "Recipe Item: Recipe: Heroic Potion (#22912)"
    { 6522913, 22913 }, // "Recipe Item: Recipe: Haste Potion (#22913)"
    { 6522914, 22914 }, // "Recipe Item: Recipe: Destruction Potion (#22914)"
    { 6522915, 22915 }, // "Recipe Item: Recipe: Transmute Primal Air to Fire (#22915)"
    { 6522916, 22916 }, // "Recipe Item: Recipe: Transmute Primal Earth to Water (#22916)"
    { 6522917, 22917 }, // "Recipe Item: Recipe: Transmute Primal Fire to Earth (#22917)"
    { 6522918, 22918 }, // "Recipe Item: Recipe: Transmute Primal Water to Air (#22918)"
    { 6522919, 22919 }, // "Recipe Item: Recipe: Elixir of Major Mageblood (#22919)"
    { 6522920, 22920 }, // "Recipe Item: Recipe: Major Fire Protection Potion (#22920)"
    { 6522921, 22921 }, // "Recipe Item: Recipe: Major Frost Protection Potion (#22921)"
    { 6522922, 22922 }, // "Recipe Item: Recipe: Major Nature Protection Potion (#22922)"
    { 6522923, 22923 }, // "Recipe Item: Recipe: Major Arcane Protection Potion (#22923)"
    { 6522924, 22924 }, // "Recipe Item: Recipe: Major Shadow Protection Potion (#22924)"
    { 6522925, 22925 }, // "Recipe Item: Recipe: Major Holy Protection Potion (#22925)"
    { 6522926, 22926 }, // "Recipe Item: Recipe: Elixir of Empowerment (#22926)"
    { 6522927, 22927 }, // "Recipe Item: Recipe: Ironshield Potion (#22927)"
    { 6522890, 22890 }, // "Recipe Item: Tome of Frost Ward V (#22890)"
    { 6522891, 22891 }, // "Recipe Item: Grimoire of Shadow Ward IV (#22891)"
    { 6522897, 22897 }, // "Recipe Item: Tome of Conjure Food VII (#22897)"
    { 6523130, 23130 }, // "Recipe Item: Design: Teardrop Blood Garnet (#23130)"
    { 6523131, 23131 }, // "Recipe Item: Design: Bold Blood Garnet (#23131)"
    { 6523133, 23133 }, // "Recipe Item: Design: Runed Blood Garnet (#23133)"
    { 6523134, 23134 }, // "Recipe Item: Design: Delicate Blood Garnet (#23134)"
    { 6523135, 23135 }, // "Recipe Item: Design: Inscribed Flame Spessarite (#23135)"
    { 6523136, 23136 }, // "Recipe Item: Design: Luminous Flame Spessarite (#23136)"
    { 6523137, 23137 }, // "Recipe Item: Design: Glinting Flame Spessarite (#23137)"
    { 6523138, 23138 }, // "Recipe Item: Design: Potent Flame Spessarite (#23138)"
    { 6523140, 23140 }, // "Recipe Item: Design: Radiant Deep Peridot (#23140)"
    { 6523141, 23141 }, // "Recipe Item: Design: Jagged Deep Peridot (#23141)"
    { 6523142, 23142 }, // "Recipe Item: Design: Enduring Deep Peridot (#23142)"
    { 6523143, 23143 }, // "Recipe Item: Design: Dazzling Deep Peridot (#23143)"
    { 6523144, 23144 }, // "Recipe Item: Design: Glowing Shadow Draenite (#23144)"
    { 6523145, 23145 }, // "Recipe Item: Design: Royal Shadow Draenite (#23145)"
    { 6523146, 23146 }, // "Recipe Item: Design: Shifting Shadow Draenite (#23146)"
    { 6523147, 23147 }, // "Recipe Item: Design: Sovereign Shadow Draenite (#23147)"
    { 6523148, 23148 }, // "Recipe Item: Design: Brilliant Golden Draenite (#23148)"
    { 6523149, 23149 }, // "Recipe Item: Design: Gleaming Golden Draenite (#23149)"
    { 6523150, 23150 }, // "Recipe Item: Design: Thick Golden Draenite (#23150)"
    { 6523151, 23151 }, // "Recipe Item: Design: Rigid Golden Draenite (#23151)"
    { 6523152, 23152 }, // "Recipe Item: Design: Solid Azure Moonstone (#23152)"
    { 6523153, 23153 }, // "Recipe Item: Design: Sparkling Azure Moonstone (#23153)"
    { 6523154, 23154 }, // "Recipe Item: Design: Stormy Azure Moonstone (#23154)"
    { 6523155, 23155 }, // "Recipe Item: Design: Lustrous Azure Moonstone (#23155)"
    { 6523320, 23320 }, // "Recipe Item: Tablet of Flame Shock VI (#23320)"
    { 6523590, 23590 }, // "Recipe Item: Plans: Adamantite Maul (#23590)"
    { 6523591, 23591 }, // "Recipe Item: Plans: Adamantite Cleaver (#23591)"
    { 6523592, 23592 }, // "Recipe Item: Plans: Adamantite Dagger (#23592)"
    { 6523593, 23593 }, // "Recipe Item: Plans: Adamantite Rapier (#23593)"
    { 6523594, 23594 }, // "Recipe Item: Plans: Adamantite Plate Bracers (#23594)"
    { 6523595, 23595 }, // "Recipe Item: Plans: Adamantite Plate Gloves (#23595)"
    { 6523596, 23596 }, // "Recipe Item: Plans: Adamantite Breastplate (#23596)"
    { 6523597, 23597 }, // "Recipe Item: Plans: Enchanted Adamantite Belt (#23597)"
    { 6523599, 23599 }, // "Recipe Item: Plans: Enchanted Adamantite Breastplate (#23599)"
    { 6523598, 23598 }, // "Recipe Item: Plans: Enchanted Adamantite Boots (#23598)"
    { 6523600, 23600 }, // "Recipe Item: Plans: Enchanted Adamantite Leggings (#23600)"
    { 6523601, 23601 }, // "Recipe Item: Plans: Flamebane Bracers (#23601)"
    { 6523602, 23602 }, // "Recipe Item: Plans: Flamebane Helm (#23602)"
    { 6523603, 23603 }, // "Recipe Item: Plans: Flamebane Gloves (#23603)"
    { 6523604, 23604 }, // "Recipe Item: Plans: Flamebane Breastplate (#23604)"
    { 6523605, 23605 }, // "Recipe Item: Plans: Felsteel Gloves (#23605)"
    { 6523606, 23606 }, // "Recipe Item: Plans: Felsteel Leggings (#23606)"
    { 6523607, 23607 }, // "Recipe Item: Plans: Felsteel Helm (#23607)"
    { 6523621, 23621 }, // "Recipe Item: Plans: Gauntlets of the Iron Tower (#23621)"
    { 6523608, 23608 }, // "Recipe Item: Plans: Khorium Belt (#23608)"
    { 6523609, 23609 }, // "Recipe Item: Plans: Khorium Pants (#23609)"
    { 6523610, 23610 }, // "Recipe Item: Plans: Khorium Boots (#23610)"
    { 6523611, 23611 }, // "Recipe Item: Plans: Ragesteel Gloves (#23611)"
    { 6523612, 23612 }, // "Recipe Item: Plans: Ragesteel Helm (#23612)"
    { 6523613, 23613 }, // "Recipe Item: Plans: Ragesteel Breastplate (#23613)"
    { 6523615, 23615 }, // "Recipe Item: Plans: Swiftsteel Gloves (#23615)"
    { 6523617, 23617 }, // "Recipe Item: Plans: Earthpeace Breastplate (#23617)"
    { 6523618, 23618 }, // "Recipe Item: Plans: Adamantite Sharpening Stone (#23618)"
    { 6523619, 23619 }, // "Recipe Item: Plans: Felsteel Shield Spike (#23619)"
    { 6523620, 23620 }, // "Recipe Item: Plans: Felfury Gauntlets (#23620)"
    { 6523622, 23622 }, // "Recipe Item: Plans: Steelgrip Gauntlets (#23622)"
    { 6523623, 23623 }, // "Recipe Item: Plans: Storm Helm (#23623)"
    { 6523624, 23624 }, // "Recipe Item: Plans: Helm of the Stalwart Defender (#23624)"
    { 6523625, 23625 }, // "Recipe Item: Plans: Oathkeeper's Helm (#23625)"
    { 6523626, 23626 }, // "Recipe Item: Plans: Black Felsteel Bracers (#23626)"
    { 6523627, 23627 }, // "Recipe Item: Plans: Bracers of the Green Fortress (#23627)"
    { 6523628, 23628 }, // "Recipe Item: Plans: Blessed Bracers (#23628)"
    { 6523574, 23574 }, // "Recipe Item: Recipe: Transmute Primal Might (#23574)"
    { 6523629, 23629 }, // "Recipe Item: Plans: Felsteel Longblade (#23629)"
    { 6523630, 23630 }, // "Recipe Item: Plans: Khorium Champion (#23630)"
    { 6523631, 23631 }, // "Recipe Item: Plans: Fel Edged Battleaxe (#23631)"
    { 6523632, 23632 }, // "Recipe Item: Plans: Felsteel Reaper (#23632)"
    { 6523633, 23633 }, // "Recipe Item: Plans: Runic Hammer (#23633)"
    { 6523634, 23634 }, // "Recipe Item: Plans: Fel Hardened Maul (#23634)"
    { 6523635, 23635 }, // "Recipe Item: Plans: Eternium Runed Blade (#23635)"
    { 6523636, 23636 }, // "Recipe Item: Plans: Dirge (#23636)"
    { 6523637, 23637 }, // "Recipe Item: Plans: Hand of Eternity (#23637)"
    { 6523638, 23638 }, // "Recipe Item: Plans: Lesser Ward of Shielding (#23638)"
    { 6523639, 23639 }, // "Recipe Item: Plans: Greater Ward of Shielding (#23639)"
    { 6523799, 23799 }, // "Recipe Item: Schematic: Adamantite Rifle (#23799)"
    { 6523800, 23800 }, // "Recipe Item: Schematic: Felsteel Boomstick (#23800)"
    { 6523802, 23802 }, // "Recipe Item: Schematic: Ornate Khorium Rifle (#23802)"
    { 6523803, 23803 }, // "Recipe Item: Schematic: Cogspinner Goggles (#23803)"
    { 6523804, 23804 }, // "Recipe Item: Schematic: Power Amplification Goggles (#23804)"
    { 6523805, 23805 }, // "Recipe Item: Schematic: Ultra-Spectropic Detection Goggles (#23805)"
    { 6523806, 23806 }, // "Recipe Item: Schematic: Hyper-Vision Goggles (#23806)"
    { 6523807, 23807 }, // "Recipe Item: Schematic: Adamantite Scope (#23807)"
    { 6523808, 23808 }, // "Recipe Item: Schematic: Khorium Scope (#23808)"
    { 6523809, 23809 }, // "Recipe Item: Schematic: Stabilized Eternium Scope (#23809)"
    { 6523810, 23810 }, // "Recipe Item: Schematic: Crashin' Thrashin' Robot (#23810)"
    { 6523811, 23811 }, // "Recipe Item: Schematic: White Smoke Flare (#23811)"
    { 6523814, 23814 }, // "Recipe Item: Schematic: Green Smoke Flare (#23814)"
    { 6523815, 23815 }, // "Recipe Item: Schematic: Adamantite Shell Machine (#23815)"
    { 6523816, 23816 }, // "Recipe Item: Schematic: Fel Iron Toolbox (#23816)"
    { 6523817, 23817 }, // "Recipe Item: Schematic: Titanium Toolbox (#23817)"
    { 6523874, 23874 }, // "Recipe Item: Schematic: Elemental Seaforium Charge (#23874)"
    { 6523888, 23888 }, // "Recipe Item: Schematic: Zapthrottle Mote Extractor (#23888)"
    { 6523882, 23882 }, // "Recipe Item: Schematic: Critter Enlarger (#23882)"
    { 6523883, 23883 }, // "Recipe Item: Schematic: Healing Potion Injector (#23883)"
    { 6523884, 23884 }, // "Recipe Item: Schematic: Mana Potion Injector (#23884)"
    { 6523885, 23885 }, // "Recipe Item: Schematic: Remote Mail Terminal (#23885)"
    { 6523887, 23887 }, // "Recipe Item: Schematic: Rocket Boots Xtreme (#23887)"
    { 6524102, 24102 }, // "Recipe Item: Manual of Eviscerate IX (#24102)"
    { 6524101, 24101 }, // "Recipe Item: Book of Ferocious Bite V (#24101)"
    { 6524158, 24158 }, // "Recipe Item: Design: Khorium Band of Shadows (#24158)"
    { 6524159, 24159 }, // "Recipe Item: Design: Khorium Band of Frost (#24159)"
    { 6524160, 24160 }, // "Recipe Item: Design: Khorium Inferno Band (#24160)"
    { 6524161, 24161 }, // "Recipe Item: Design: Khorium Band of Leaves (#24161)"
    { 6524162, 24162 }, // "Recipe Item: Design: Arcane Khorium Band (#24162)"
    { 6524163, 24163 }, // "Recipe Item: Design: Heavy Felsteel Ring (#24163)"
    { 6524164, 24164 }, // "Recipe Item: Design: Delicate Eternium Ring (#24164)"
    { 6524165, 24165 }, // "Recipe Item: Design: Blazing Eternium Band (#24165)"
    { 6524174, 24174 }, // "Recipe Item: Design: Pendant of Frozen Flame (#24174)"
    { 6524175, 24175 }, // "Recipe Item: Design: Pendant of Thawing (#24175)"
    { 6524176, 24176 }, // "Recipe Item: Design: Pendant of Withering (#24176)"
    { 6524177, 24177 }, // "Recipe Item: Design: Pendant of Shadow's End (#24177)"
    { 6524178, 24178 }, // "Recipe Item: Design: Pendant of the Null Rune (#24178)"
    { 6524166, 24166 }, // "Recipe Item: Design: Thick Felsteel Necklace (#24166)"
    { 6524167, 24167 }, // "Recipe Item: Design: Living Ruby Pendant (#24167)"
    { 6524168, 24168 }, // "Recipe Item: Design: Braided Eternium Chain (#24168)"
    { 6524169, 24169 }, // "Recipe Item: Design: Eye of the Night (#24169)"
    { 6524170, 24170 }, // "Recipe Item: Design: Embrace of the Dawn (#24170)"
    { 6524171, 24171 }, // "Recipe Item: Design: Chain of the Twilight Owl (#24171)"
    { 6524172, 24172 }, // "Recipe Item: Design: Coronet of Verdant Flame (#24172)"
    { 6524173, 24173 }, // "Recipe Item: Design: Circlet of Arcane Might (#24173)"
    { 6524179, 24179 }, // "Recipe Item: Design: Felsteel Boar (#24179)"
    { 6524180, 24180 }, // "Recipe Item: Design: Dawnstone Crab (#24180)"
    { 6524181, 24181 }, // "Recipe Item: Design: Living Ruby Serpent (#24181)"
    { 6524182, 24182 }, // "Recipe Item: Design: Talasite Owl (#24182)"
    { 6524183, 24183 }, // "Recipe Item: Design: Nightseye Panther (#24183)"
    { 6524193, 24193 }, // "Recipe Item: Design: Bold Living Ruby (#24193)"
    { 6524194, 24194 }, // "Recipe Item: Design: Delicate Living Ruby (#24194)"
    { 6524195, 24195 }, // "Recipe Item: Design: Teardrop Living Ruby (#24195)"
    { 6524196, 24196 }, // "Recipe Item: Design: Runed Living Ruby (#24196)"
    { 6524192, 24192 }, // "Recipe Item: Design: Bright Living Ruby (#24192)"
    { 6524197, 24197 }, // "Recipe Item: Design: Subtle Living Ruby (#24197)"
    { 6524198, 24198 }, // "Recipe Item: Design: Flashing Living Ruby (#24198)"
    { 6524199, 24199 }, // "Recipe Item: Design: Solid Star of Elune (#24199)"
    { 6524201, 24201 }, // "Recipe Item: Design: Lustrous Star of Elune (#24201)"
    { 6524202, 24202 }, // "Recipe Item: Design: Stormy Star of Elune (#24202)"
    { 6524203, 24203 }, // "Recipe Item: Design: Brilliant Dawnstone (#24203)"
    { 6524204, 24204 }, // "Recipe Item: Design: Smooth Dawnstone (#24204)"
    { 6524205, 24205 }, // "Recipe Item: Design: Rigid Dawnstone (#24205)"
    { 6524206, 24206 }, // "Recipe Item: Design: Gleaming Dawnstone (#24206)"
    { 6524207, 24207 }, // "Recipe Item: Design: Thick Dawnstone (#24207)"
    { 6524208, 24208 }, // "Recipe Item: Design: Mystic Dawnstone (#24208)"
    { 6524209, 24209 }, // "Recipe Item: Design: Sovereign Nightseye (#24209)"
    { 6524210, 24210 }, // "Recipe Item: Design: Shifting Nightseye (#24210)"
    { 6524211, 24211 }, // "Recipe Item: Design: Glowing Nightseye (#24211)"
    { 6524212, 24212 }, // "Recipe Item: Design: Royal Nightseye (#24212)"
    { 6524213, 24213 }, // "Recipe Item: Design: Inscribed Noble Topaz (#24213)"
    { 6524214, 24214 }, // "Recipe Item: Design: Potent Noble Topaz (#24214)"
    { 6524215, 24215 }, // "Recipe Item: Design: Luminous Noble Topaz (#24215)"
    { 6524216, 24216 }, // "Recipe Item: Design: Glinting Noble Topaz (#24216)"
    { 6524217, 24217 }, // "Recipe Item: Design: Enduring Talasite (#24217)"
    { 6524218, 24218 }, // "Recipe Item: Design: Radiant Talasite (#24218)"
    { 6524219, 24219 }, // "Recipe Item: Design: Dazzling Talasite (#24219)"
    { 6524220, 24220 }, // "Recipe Item: Design: Jagged Talasite (#24220)"
    { 6524200, 24200 }, // "Recipe Item: Design: Sparkling Star of Elune (#24200)"
    { 6524316, 24316 }, // "Recipe Item: Pattern: Spellcloth (#24316)"
    { 6524292, 24292 }, // "Recipe Item: Pattern: Mystic Spellthread (#24292)"
    { 6524293, 24293 }, // "Recipe Item: Pattern: Silver Spellthread (#24293)"
    { 6524294, 24294 }, // "Recipe Item: Pattern: Runic Spellthread (#24294)"
    { 6524295, 24295 }, // "Recipe Item: Pattern: Golden Spellthread (#24295)"
    { 6524296, 24296 }, // "Recipe Item: Pattern: Unyielding Bracers (#24296)"
    { 6524297, 24297 }, // "Recipe Item: Pattern: Bracers of Havok (#24297)"
    { 6524298, 24298 }, // "Recipe Item: Pattern: Blackstrike Bracers (#24298)"
    { 6524299, 24299 }, // "Recipe Item: Pattern: Cloak of the Black Void (#24299)"
    { 6524300, 24300 }, // "Recipe Item: Pattern: Cloak of Eternity (#24300)"
    { 6524301, 24301 }, // "Recipe Item: Pattern: White Remedy Cape (#24301)"
    { 6524302, 24302 }, // "Recipe Item: Pattern: Unyielding Girdle (#24302)"
    { 6524303, 24303 }, // "Recipe Item: Pattern: Girdle of Ruination (#24303)"
    { 6524304, 24304 }, // "Recipe Item: Pattern: Black Belt of Knowledge (#24304)"
    { 6524305, 24305 }, // "Recipe Item: Pattern: Resolute Cape (#24305)"
    { 6524306, 24306 }, // "Recipe Item: Pattern: Vengeance Wrap (#24306)"
    { 6524307, 24307 }, // "Recipe Item: Pattern: Manaweave Cloak (#24307)"
    { 6524308, 24308 }, // "Recipe Item: Pattern: Whitemend Pants (#24308)"
    { 6524309, 24309 }, // "Recipe Item: Pattern: Spellstrike Pants (#24309)"
    { 6524310, 24310 }, // "Recipe Item: Pattern: Battlecast Pants (#24310)"
    { 6524311, 24311 }, // "Recipe Item: Pattern: Whitemend Hood (#24311)"
    { 6524312, 24312 }, // "Recipe Item: Pattern: Spellstrike Hood (#24312)"
    { 6524313, 24313 }, // "Recipe Item: Pattern: Battlecast Hood (#24313)"
    { 6524314, 24314 }, // "Recipe Item: Pattern: Bag of Jewels (#24314)"
    { 6524315, 24315 }, // "Recipe Item: Pattern: Heavy Netherweave Net (#24315)"
    { 6524345, 24345 }, // "Recipe Item: Book of Cower IV (#24345)"
    { 6525526, 25526 }, // "Recipe Item: Plans: Greater Rune of Warding (#25526)"
    { 6525720, 25720 }, // "Recipe Item: Pattern: Heavy Knothide Leather (#25720)"
    { 6525721, 25721 }, // "Recipe Item: Pattern: Vindicator's Armor Kit (#25721)"
    { 6525722, 25722 }, // "Recipe Item: Pattern: Magister's Armor Kit (#25722)"
    { 6525725, 25725 }, // "Recipe Item: Pattern: Riding Crop (#25725)"
    { 6525726, 25726 }, // "Recipe Item: Pattern: Comfortable Insoles (#25726)"
    { 6525728, 25728 }, // "Recipe Item: Pattern: Stylin' Purple Hat (#25728)"
    { 6525729, 25729 }, // "Recipe Item: Pattern: Stylin' Adventure Hat (#25729)"
    { 6525731, 25731 }, // "Recipe Item: Pattern: Stylin' Crimson Hat (#25731)"
    { 6525730, 25730 }, // "Recipe Item: Pattern: Stylin' Jungle Hat (#25730)"
    { 6525732, 25732 }, // "Recipe Item: Pattern: Fel Leather Gloves (#25732)"
    { 6525733, 25733 }, // "Recipe Item: Pattern: Fel Leather Boots (#25733)"
    { 6525734, 25734 }, // "Recipe Item: Pattern: Fel Leather Leggings (#25734)"
    { 6525735, 25735 }, // "Recipe Item: Pattern: Heavy Clefthoof Vest (#25735)"
    { 6525736, 25736 }, // "Recipe Item: Pattern: Heavy Clefthoof Leggings (#25736)"
    { 6525737, 25737 }, // "Recipe Item: Pattern: Heavy Clefthoof Boots (#25737)"
    { 6525738, 25738 }, // "Recipe Item: Pattern: Felstalker Belt (#25738)"
    { 6525739, 25739 }, // "Recipe Item: Pattern: Felstalker Bracers (#25739)"
    { 6525740, 25740 }, // "Recipe Item: Pattern: Felstalker Breastplate (#25740)"
    { 6525741, 25741 }, // "Recipe Item: Pattern: Netherfury Belt (#25741)"
    { 6525742, 25742 }, // "Recipe Item: Pattern: Netherfury Leggings (#25742)"
    { 6525743, 25743 }, // "Recipe Item: Pattern: Netherfury Boots (#25743)"
    { 6525846, 25846 }, // "Recipe Item: Plans: Adamantite Rod (#25846)"
    { 6525847, 25847 }, // "Recipe Item: Plans: Eternium Rod (#25847)"
    { 6525848, 25848 }, // "Recipe Item: Formula: Runed Adamantite Rod (#25848)"
    { 6525849, 25849 }, // "Recipe Item: Formula: Runed Eternium Rod (#25849)"
    { 6525869, 25869 }, // "Recipe Item: Recipe: Transmute Earthstorm Diamond (#25869)"
    { 6525870, 25870 }, // "Recipe Item: Recipe: Transmute Skyfire Diamond (#25870)"
    { 6525887, 25887 }, // "Recipe Item: Schematic: Purple Smoke Flare (#25887)"
    { 6525902, 25902 }, // "Recipe Item: Design: Powerful Earthstorm Diamond (#25902)"
    { 6525903, 25903 }, // "Recipe Item: Design: Bracing Earthstorm Diamond (#25903)"
    { 6525905, 25905 }, // "Recipe Item: Design: Tenacious Earthstorm Diamond (#25905)"
    { 6525906, 25906 }, // "Recipe Item: Design: Brutal Earthstorm Diamond (#25906)"
    { 6525904, 25904 }, // "Recipe Item: Design: Insightful Earthstorm Diamond (#25904)"
    { 6525907, 25907 }, // "Recipe Item: Design: Destructive Skyfire Diamond (#25907)"
    { 6525909, 25909 }, // "Recipe Item: Design: Mystical Skyfire Diamond (#25909)"
    { 6525908, 25908 }, // "Recipe Item: Design: Swift Skyfire Diamond (#25908)"
    { 6525910, 25910 }, // "Recipe Item: Design: Enigmatic Skyfire Diamond (#25910)"
    { 6527685, 27685 }, // "Recipe Item: Recipe: Lynx Steak (#27685)"
    { 6527686, 27686 }, // "Recipe Item: Recipe: Roasted Moongraze Tenderloin (#27686)"
    { 6527687, 27687 }, // "Recipe Item: Recipe: Bat Bites (#27687)"
    { 6527684, 27684 }, // "Recipe Item: Recipe: Buzzard Bites (#27684)"
    { 6527688, 27688 }, // "Recipe Item: Recipe: Ravager Dog (#27688)"
    { 6527689, 27689 }, // "Recipe Item: Recipe: Sporeling Snack (#27689)"
    { 6527690, 27690 }, // "Recipe Item: Recipe: Blackened Basilisk (#27690)"
    { 6527691, 27691 }, // "Recipe Item: Recipe: Roasted Clefthoof (#27691)"
    { 6527692, 27692 }, // "Recipe Item: Recipe: Warp Burger (#27692)"
    { 6527693, 27693 }, // "Recipe Item: Recipe: Talbuk Steak (#27693)"
    { 6527694, 27694 }, // "Recipe Item: Recipe: Blackened Trout (#27694)"
    { 6527695, 27695 }, // "Recipe Item: Recipe: Feltail Delight (#27695)"
    { 6527696, 27696 }, // "Recipe Item: Recipe: Blackened Sporefish (#27696)"
    { 6527697, 27697 }, // "Recipe Item: Recipe: Grilled Mudfish (#27697)"
    { 6527698, 27698 }, // "Recipe Item: Recipe: Poached Bluefish (#27698)"
    { 6527699, 27699 }, // "Recipe Item: Recipe: Golden Fish Sticks (#27699)"
    { 6527700, 27700 }, // "Recipe Item: Recipe: Spicy Crawdad (#27700)"
    { 6531501, 31501 }, // "Recipe Item: Tome of Conjure Food VIII (#31501)"
    { 6528270, 28270 }, // "Recipe Item: Formula: Enchant Chest - Major Resilience (#28270)"
    { 6528271, 28271 }, // "Recipe Item: Formula: Enchant Gloves - Precise Strikes (#28271)"
    { 6528272, 28272 }, // "Recipe Item: Formula: Enchant Gloves - Major Spellpower (#28272)"
    { 6528273, 28273 }, // "Recipe Item: Formula: Enchant Gloves - Major Healing (#28273)"
    { 6528274, 28274 }, // "Recipe Item: Formula: Enchant Cloak - Spell Penetration (#28274)"
    { 6528276, 28276 }, // "Recipe Item: Formula: Enchant Cloak - Greater Arcane Resistance (#28276)"
    { 6528277, 28277 }, // "Recipe Item: Formula: Enchant Cloak - Greater Shadow Resistance (#28277)"
    { 6528279, 28279 }, // "Recipe Item: Formula: Enchant Boots - Cat's Swiftness (#28279)"
    { 6528280, 28280 }, // "Recipe Item: Formula: Enchant Boots - Boar's Speed (#28280)"
    { 6528282, 28282 }, // "Recipe Item: Formula: Enchant Shield - Major Stamina (#28282)"
    { 6528281, 28281 }, // "Recipe Item: Formula: Enchant Weapon - Major Healing (#28281)"
    { 6528291, 28291 }, // "Recipe Item: Design: Smooth Golden Draenite (#28291)"
    { 6528596, 28596 }, // "Recipe Item: Design: Bright Blood Garnet (#28596)"
    { 6528632, 28632 }, // "Recipe Item: Plans: Adamantite Weightstone (#28632)"
    { 6529669, 29669 }, // "Recipe Item: Pattern: Shadow Armor Kit (#29669)"
    { 6529672, 29672 }, // "Recipe Item: Pattern: Flame Armor Kit (#29672)"
    { 6529673, 29673 }, // "Recipe Item: Pattern: Frost Armor Kit (#29673)"
    { 6529674, 29674 }, // "Recipe Item: Pattern: Nature Armor Kit (#29674)"
    { 6529675, 29675 }, // "Recipe Item: Pattern: Arcane Armor Kit (#29675)"
    { 6529677, 29677 }, // "Recipe Item: Pattern: Enchanted Felscale Leggings (#29677)"
    { 6529682, 29682 }, // "Recipe Item: Pattern: Enchanted Felscale Gloves (#29682)"
    { 6529684, 29684 }, // "Recipe Item: Pattern: Enchanted Felscale Boots (#29684)"
    { 6529691, 29691 }, // "Recipe Item: Pattern: Flamescale Boots (#29691)"
    { 6529689, 29689 }, // "Recipe Item: Pattern: Flamescale Leggings (#29689)"
    { 6529664, 29664 }, // "Recipe Item: Pattern: Reinforced Mining Bag (#29664)"
    { 6529693, 29693 }, // "Recipe Item: Pattern: Flamescale Belt (#29693)"
    { 6529698, 29698 }, // "Recipe Item: Pattern: Enchanted Clefthoof Leggings (#29698)"
    { 6529700, 29700 }, // "Recipe Item: Pattern: Enchanted Clefthoof Gloves (#29700)"
    { 6529701, 29701 }, // "Recipe Item: Pattern: Enchanted Clefthoof Boots (#29701)"
    { 6529702, 29702 }, // "Recipe Item: Pattern: Blastguard Pants (#29702)"
    { 6529703, 29703 }, // "Recipe Item: Pattern: Blastguard Boots (#29703)"
    { 6529704, 29704 }, // "Recipe Item: Pattern: Blastguard Belt (#29704)"
    { 6529713, 29713 }, // "Recipe Item: Pattern: Drums of Panic (#29713)"
    { 6529714, 29714 }, // "Recipe Item: Pattern: Drums of Restoration (#29714)"
    { 6529717, 29717 }, // "Recipe Item: Pattern: Drums of Battle (#29717)"
    { 6529718, 29718 }, // "Recipe Item: Pattern: Drums of Speed (#29718)"
    { 6529719, 29719 }, // "Recipe Item: Pattern: Cobrahide Leg Armor (#29719)"
    { 6529722, 29722 }, // "Recipe Item: Pattern: Nethercobra Leg Armor (#29722)"
    { 6529720, 29720 }, // "Recipe Item: Pattern: Clefthide Leg Armor (#29720)"
    { 6529721, 29721 }, // "Recipe Item: Pattern: Nethercleft Leg Armor (#29721)"
    { 6529723, 29723 }, // "Recipe Item: Pattern: Cobrascale Hood (#29723)"
    { 6529724, 29724 }, // "Recipe Item: Pattern: Cobrascale Gloves (#29724)"
    { 6529725, 29725 }, // "Recipe Item: Pattern: Windscale Hood (#29725)"
    { 6529726, 29726 }, // "Recipe Item: Pattern: Hood of Primal Life (#29726)"
    { 6529727, 29727 }, // "Recipe Item: Pattern: Gloves of the Living Touch (#29727)"
    { 6529728, 29728 }, // "Recipe Item: Pattern: Windslayer Wraps (#29728)"
    { 6529729, 29729 }, // "Recipe Item: Pattern: Living Dragonscale Helm (#29729)"
    { 6529730, 29730 }, // "Recipe Item: Pattern: Earthen Netherscale Boots (#29730)"
    { 6529731, 29731 }, // "Recipe Item: Pattern: Windstrike Gloves (#29731)"
    { 6529732, 29732 }, // "Recipe Item: Pattern: Netherdrake Helm (#29732)"
    { 6529733, 29733 }, // "Recipe Item: Pattern: Netherdrake Gloves (#29733)"
    { 6529734, 29734 }, // "Recipe Item: Pattern: Thick Netherscale Breastplate (#29734)"
    { 6530156, 30156 }, // "Recipe Item: Recipe: Clam Bar (#30156)"
    { 6530280, 30280 }, // "Recipe Item: Pattern: Belt of Blasting (#30280)"
    { 6530281, 30281 }, // "Recipe Item: Pattern: Belt of the Long Road (#30281)"
    { 6530282, 30282 }, // "Recipe Item: Pattern: Boots of Blasting (#30282)"
    { 6530283, 30283 }, // "Recipe Item: Pattern: Boots of the Long Road (#30283)"
    { 6530301, 30301 }, // "Recipe Item: Pattern: Belt of Natural Power (#30301)"
    { 6530302, 30302 }, // "Recipe Item: Pattern: Belt of Deep Shadow (#30302)"
    { 6530303, 30303 }, // "Recipe Item: Pattern: Belt of the Black Eagle (#30303)"
    { 6530304, 30304 }, // "Recipe Item: Pattern: Monsoon Belt (#30304)"
    { 6530305, 30305 }, // "Recipe Item: Pattern: Boots of Natural Grace (#30305)"
    { 6530306, 30306 }, // "Recipe Item: Pattern: Boots of Utter Darkness (#30306)"
    { 6530307, 30307 }, // "Recipe Item: Pattern: Boots of the Crimson Hawk (#30307)"
    { 6530308, 30308 }, // "Recipe Item: Pattern: Hurricane Boots (#30308)"
    { 6530321, 30321 }, // "Recipe Item: Plans: Belt of the Guardian (#30321)"
    { 6530322, 30322 }, // "Recipe Item: Plans: Red Belt of Battle (#30322)"
    { 6530323, 30323 }, // "Recipe Item: Plans: Boots of the Protector (#30323)"
    { 6530324, 30324 }, // "Recipe Item: Plans: Red Havoc Boots (#30324)"
    { 6530483, 30483 }, // "Recipe Item: Pattern: Shadowcloth (#30483)"
    { 6530826, 30826 }, // "Recipe Item: Design: Ring of Arcane Shielding (#30826)"
    { 6530833, 30833 }, // "Recipe Item: Pattern: Cloak of Arcane Evasion (#30833)"
    { 6530842, 30842 }, // "Recipe Item: Pattern: Flameheart Bracers (#30842)"
    { 6530843, 30843 }, // "Recipe Item: Pattern: Flameheart Gloves (#30843)"
    { 6530844, 30844 }, // "Recipe Item: Pattern: Flameheart Vest (#30844)"
    { 6531390, 31390 }, // "Recipe Item: Plans: Wildguard Breastplate (#31390)"
    { 6531391, 31391 }, // "Recipe Item: Plans: Wildguard Leggings (#31391)"
    { 6531392, 31392 }, // "Recipe Item: Plans: Wildguard Helm (#31392)"
    { 6531393, 31393 }, // "Recipe Item: Plans: Iceguard Breastplate (#31393)"
    { 6531394, 31394 }, // "Recipe Item: Plans: Iceguard Leggings (#31394)"
    { 6531395, 31395 }, // "Recipe Item: Plans: Iceguard Helm (#31395)"
    { 6531401, 31401 }, // "Recipe Item: Design: The Frozen Eye (#31401)"
    { 6531402, 31402 }, // "Recipe Item: Design: The Natural Ward (#31402)"
    { 6531675, 31675 }, // "Recipe Item: Recipe: Mok'Nathal Shortribs (#31675)"
    { 6531674, 31674 }, // "Recipe Item: Recipe: Crunchy Serpent (#31674)"
    { 6531680, 31680 }, // "Recipe Item: Recipe: Fel Strength Elixir (#31680)"
    { 6531682, 31682 }, // "Recipe Item: Recipe: Fel Mana Potion (#31682)"
    { 6531681, 31681 }, // "Recipe Item: Recipe: Fel Regeneration Potion (#31681)"
    { 6531837, 31837 }, // "Recipe Item: Codex: Prayer of Shadow Protection II (#31837)"
    { 6531870, 31870 }, // "Recipe Item: Design: Great Golden Draenite (#31870)"
    { 6531875, 31875 }, // "Recipe Item: Design: Great Dawnstone (#31875)"
    { 6531871, 31871 }, // "Recipe Item: Design: Balanced Shadow Draenite (#31871)"
    { 6531872, 31872 }, // "Recipe Item: Design: Infused Shadow Draenite (#31872)"
    { 6531877, 31877 }, // "Recipe Item: Design: Infused Nightseye (#31877)"
    { 6531876, 31876 }, // "Recipe Item: Design: Balanced Nightseye (#31876)"
    { 6531873, 31873 }, // "Recipe Item: Design: Veiled Flame Spessarite (#31873)"
    { 6531874, 31874 }, // "Recipe Item: Design: Wicked Flame Spessarite (#31874)"
    { 6531878, 31878 }, // "Recipe Item: Design: Veiled Noble Topaz (#31878)"
    { 6531879, 31879 }, // "Recipe Item: Design: Wicked Noble Topaz (#31879)"
    { 6532070, 32070 }, // "Recipe Item: Recipe: Earthen Elixir (#32070)"
    { 6532071, 32071 }, // "Recipe Item: Recipe: Elixir of Ironskin (#32071)"
    { 6532274, 32274 }, // "Recipe Item: Design: Bold Crimson Spinel (#32274)"
    { 6532277, 32277 }, // "Recipe Item: Design: Delicate Crimson Spinel (#32277)"
    { 6532281, 32281 }, // "Recipe Item: Design: Teardrop Crimson Spinel (#32281)"
    { 6532282, 32282 }, // "Recipe Item: Design: Runed Crimson Spinel (#32282)"
    { 6532283, 32283 }, // "Recipe Item: Design: Bright Crimson Spinel (#32283)"
    { 6532284, 32284 }, // "Recipe Item: Design: Subtle Crimson Spinel (#32284)"
    { 6532285, 32285 }, // "Recipe Item: Design: Flashing Crimson Spinel (#32285)"
    { 6532286, 32286 }, // "Recipe Item: Design: Solid Empyrean Sapphire (#32286)"
    { 6532287, 32287 }, // "Recipe Item: Design: Sparkling Empyrean Sapphire (#32287)"
    { 6532288, 32288 }, // "Recipe Item: Design: Lustrous Empyrean Sapphire (#32288)"
    { 6532289, 32289 }, // "Recipe Item: Design: Stormy Empyrean Sapphire (#32289)"
    { 6532290, 32290 }, // "Recipe Item: Design: Brilliant Lionseye (#32290)"
    { 6532291, 32291 }, // "Recipe Item: Design: Smooth Lionseye (#32291)"
    { 6532292, 32292 }, // "Recipe Item: Design: Rigid Lionseye (#32292)"
    { 6532293, 32293 }, // "Recipe Item: Design: Gleaming Lionseye (#32293)"
    { 6532294, 32294 }, // "Recipe Item: Design: Thick Lionseye (#32294)"
    { 6532295, 32295 }, // "Recipe Item: Design: Mystic Lionseye (#32295)"
    { 6532296, 32296 }, // "Recipe Item: Design: Great Lionseye (#32296)"
    { 6532297, 32297 }, // "Recipe Item: Design: Sovereign Shadowsong Amethyst (#32297)"
    { 6532298, 32298 }, // "Recipe Item: Design: Shifting Shadowsong Amethyst (#32298)"
    { 6532299, 32299 }, // "Recipe Item: Design: Balanced Shadowsong Amethyst (#32299)"
    { 6532300, 32300 }, // "Recipe Item: Design: Infused Shadowsong Amethyst (#32300)"
    { 6532301, 32301 }, // "Recipe Item: Design: Glowing Shadowsong Amethyst (#32301)"
    { 6532302, 32302 }, // "Recipe Item: Design: Royal Shadowsong Amethyst (#32302)"
    { 6532303, 32303 }, // "Recipe Item: Design: Inscribed Pyrestone (#32303)"
    { 6532304, 32304 }, // "Recipe Item: Design: Potent Pyrestone (#32304)"
    { 6532305, 32305 }, // "Recipe Item: Design: Luminous Pyrestone (#32305)"
    { 6532306, 32306 }, // "Recipe Item: Design: Glinting Pyrestone (#32306)"
    { 6532307, 32307 }, // "Recipe Item: Design: Veiled Pyrestone (#32307)"
    { 6532308, 32308 }, // "Recipe Item: Design: Wicked Pyrestone (#32308)"
    { 6532309, 32309 }, // "Recipe Item: Design: Enduring Seaspray Emerald (#32309)"
    { 6532310, 32310 }, // "Recipe Item: Design: Radiant Seaspray Emerald (#32310)"
    { 6532311, 32311 }, // "Recipe Item: Design: Dazzling Seaspray Emerald (#32311)"
    { 6532312, 32312 }, // "Recipe Item: Design: Jagged Seaspray Emerald (#32312)"
    { 6532381, 32381 }, // "Recipe Item: Schematic: Fused Wiring (#32381)"
    { 6532412, 32412 }, // "Recipe Item: Design: Relentless Earthstorm Diamond (#32412)"
    { 6532411, 32411 }, // "Recipe Item: Design: Thundering Skyfire Diamond (#32411)"
    { 6532429, 32429 }, // "Recipe Item: Pattern: Boots of Shackled Souls (#32429)"
    { 6532431, 32431 }, // "Recipe Item: Pattern: Greaves of Shackled Souls (#32431)"
    { 6532432, 32432 }, // "Recipe Item: Pattern: Waistguard of Shackled Souls (#32432)"
    { 6532433, 32433 }, // "Recipe Item: Pattern: Redeemed Soul Moccasins (#32433)"
    { 6532434, 32434 }, // "Recipe Item: Pattern: Redeemed Soul Wristguards (#32434)"
    { 6532435, 32435 }, // "Recipe Item: Pattern: Redeemed Soul Legguards (#32435)"
    { 6532436, 32436 }, // "Recipe Item: Pattern: Redeemed Soul Cinch (#32436)"
    { 6532437, 32437 }, // "Recipe Item: Pattern: Soulguard Slippers (#32437)"
    { 6532438, 32438 }, // "Recipe Item: Pattern: Soulguard Bracers (#32438)"
    { 6532439, 32439 }, // "Recipe Item: Pattern: Soulguard Leggings (#32439)"
    { 6532440, 32440 }, // "Recipe Item: Pattern: Soulguard Girdle (#32440)"
    { 6532441, 32441 }, // "Recipe Item: Plans: Shadesteel Sabots (#32441)"
    { 6532442, 32442 }, // "Recipe Item: Plans: Shadesteel Bracers (#32442)"
    { 6532443, 32443 }, // "Recipe Item: Plans: Shadesteel Greaves (#32443)"
    { 6532444, 32444 }, // "Recipe Item: Plans: Shadesteel Girdle (#32444)"
    { 6532447, 32447 }, // "Recipe Item: Pattern: Night's End (#32447)"
    { 6532736, 32736 }, // "Recipe Item: Plans: Swiftsteel Bracers (#32736)"
    { 6532737, 32737 }, // "Recipe Item: Plans: Swiftsteel Shoulders (#32737)"
    { 6532738, 32738 }, // "Recipe Item: Plans: Dawnsteel Bracers (#32738)"
    { 6532739, 32739 }, // "Recipe Item: Plans: Dawnsteel Shoulders (#32739)"
    { 6532744, 32744 }, // "Recipe Item: Pattern: Bracers of Renewed Life (#32744)"
    { 6532745, 32745 }, // "Recipe Item: Pattern: Shoulderpads of Renewed Life (#32745)"
    { 6532746, 32746 }, // "Recipe Item: Pattern: Swiftstrike Bracers (#32746)"
    { 6532747, 32747 }, // "Recipe Item: Pattern: Swiftstrike Shoulders (#32747)"
    { 6532748, 32748 }, // "Recipe Item: Pattern: Bindings of Lightning Reflexes (#32748)"
    { 6532749, 32749 }, // "Recipe Item: Pattern: Shoulders of Lightning Reflexes (#32749)"
    { 6532750, 32750 }, // "Recipe Item: Pattern: Living Earth Bindings (#32750)"
    { 6532751, 32751 }, // "Recipe Item: Pattern: Living Earth Shoulders (#32751)"
    { 6532754, 32754 }, // "Recipe Item: Pattern: Bracers of Nimble Thought (#32754)"
    { 6532755, 32755 }, // "Recipe Item: Pattern: Mantle of Nimble Thought (#32755)"
    { 6532752, 32752 }, // "Recipe Item: Pattern: Swiftheal Wraps (#32752)"
    { 6532753, 32753 }, // "Recipe Item: Pattern: Swiftheal Mantle (#32753)"
    { 6533124, 33124 }, // "Recipe Item: Pattern: Cloak of Darkness (#33124)"
    { 6533305, 33305 }, // "Recipe Item: Design: Don Julio's Heart (#33305)"
    { 6533155, 33155 }, // "Recipe Item: Design: Kailee's Rose (#33155)"
    { 6533156, 33156 }, // "Recipe Item: Design: Crimson Sun (#33156)"
    { 6533157, 33157 }, // "Recipe Item: Design: Falling Star (#33157)"
    { 6533158, 33158 }, // "Recipe Item: Design: Stone of Blades (#33158)"
    { 6533159, 33159 }, // "Recipe Item: Design: Blood of Amber (#33159)"
    { 6533160, 33160 }, // "Recipe Item: Design: Facet of Eternity (#33160)"
    { 6533165, 33165 }, // "Recipe Item: Formula: Enchant Weapon - Greater Agility (#33165)"
    { 6533174, 33174 }, // "Recipe Item: Plans: Ragesteel Shoulders (#33174)"
    { 6533186, 33186 }, // "Recipe Item: Plans: Adamantite Weapon Chain (#33186)"
    { 6533205, 33205 }, // "Recipe Item: Pattern: Shadowprowler's Chestguard (#33205)"
    { 6533209, 33209 }, // "Recipe Item: Recipe: Flask of Chromatic Wonder (#33209)"
    { 6533307, 33307 }, // "Recipe Item: Formula: Enchant Weapon - Executioner (#33307)"
    { 6534109, 34109 }, // "Recipe Item: Weather-Beaten Journal (#34109)"
    { 6533783, 33783 }, // "Recipe Item: Design: Steady Talasite (#33783)"
    { 6533792, 33792 }, // "Recipe Item: Plans: Heavy Copper Longsword (#33792)"
    { 6533804, 33804 }, // "Recipe Item: Schematic: Adamantite Arrow Maker (#33804)"
    { 6533870, 33870 }, // "Recipe Item: Recipe: Skullfish Soup (#33870)"
    { 6533871, 33871 }, // "Recipe Item: Recipe: Stormchops (#33871)"
    { 6533869, 33869 }, // "Recipe Item: Recipe: Broiled Bloodfin (#33869)"
    { 6533873, 33873 }, // "Recipe Item: Recipe: Spicy Hot Talbuk (#33873)"
    { 6533875, 33875 }, // "Recipe Item: Recipe: Kibler's Bits (#33875)"
    { 6533925, 33925 }, // "Recipe Item: Recipe: Delicious Chocolate Cake (#33925)"
    { 6533954, 33954 }, // "Recipe Item: Plans: Hammer of Righteous Might (#33954)"
    { 6534200, 34200 }, // "Recipe Item: Pattern: Quiver of a Thousand Feathers (#34200)"
    { 6534114, 34114 }, // "Recipe Item: Schematic: Field Repair Bot 110G (#34114)"
    { 6537332, 37332 }, // "Recipe Item: Formula: Enchant Cloak - Superior Frost Resistance (#37332)"
    { 6537333, 37333 }, // "Recipe Item: Formula: Enchant Cloak - Superior Nature Resistance (#37333)"
    { 6537335, 37335 }, // "Recipe Item: Formula: Enchant Cloak - Superior Agility (#37335)"
    { 6537329, 37329 }, // "Recipe Item: Formula: Enchant Weapon - Exceptional Spirit (#37329)"
    { 6537345, 37345 }, // "Recipe Item: Formula: Enchant Gloves - Greater Assault (#37345)"
    { 6537344, 37344 }, // "Recipe Item: Formula: Enchant Weapon - Icebreaker (#37344)"
    { 6537331, 37331 }, // "Recipe Item: Formula: Enchant Cloak - Superior Fire Resistance (#37331)"
    { 6544484, 44484 }, // "Recipe Item: Formula: Enchant Bracers - Greater Assault (#44484)"
    { 6544494, 44494 }, // "Recipe Item: Formula: Enchant Weapon - Lifeward (#44494)"
    { 6537340, 37340 }, // "Recipe Item: Formula: Enchant Chest - Exceptional Resilience (#37340)"
    { 6537334, 37334 }, // "Recipe Item: Formula: Enchant Cloak - Superior Shadow Resistance (#37334)"
    { 6537347, 37347 }, // "Recipe Item: Formula: Enchant Cloak - Titanweave (#37347)"
    { 6537326, 37326 }, // "Recipe Item: Formula: Enchant Bracer - Major Spirit (#37326)"
    { 6544473, 44473 }, // "Recipe Item: Formula: Enchant Weapon - Scourgebane (#44473)"
    { 6537330, 37330 }, // "Recipe Item: Formula: Enchant Cloak - Superior Arcane Resistance (#37330)"
    { 6537346, 37346 }, // "Recipe Item: Formula: Enchant Bracer - Expertise (#37346)"
    { 6537337, 37337 }, // "Recipe Item: Formula: Enchant Bracer - Greater Stats (#37337)"
    { 6537339, 37339 }, // "Recipe Item: Formula: Enchant Weapon - Giant Slayer (#37339)"
    { 6544485, 44485 }, // "Recipe Item: Formula: Enchant Gloves - Armsman (#44485)"
    { 6537338, 37338 }, // "Recipe Item: Formula: Enchant Weapon - Greater Savagery (#37338)"
    { 6537349, 37349 }, // "Recipe Item: Formula: Enchant Cloak - Shadow Armor (#37349)"
    { 6537343, 37343 }, // "Recipe Item: Formula: Enchant Weapon - Exceptional Agility (#37343)"
    { 6534201, 34201 }, // "Recipe Item: Pattern: Netherscale Ammo Pouch (#34201)"
    { 6534221, 34221 }, // "Recipe Item: Design: Chaotic Skyfire Diamond (#34221)"
    { 6534261, 34261 }, // "Recipe Item: Pattern: Green Winter Clothes (#34261)"
    { 6534262, 34262 }, // "Recipe Item: Pattern: Winter Boots (#34262)"
    { 6534319, 34319 }, // "Recipe Item: Pattern: Red Winter Clothes (#34319)"
    { 6534413, 34413 }, // "Recipe Item: Recipe: Hot Apple Cider (#34413)"
    { 6534491, 34491 }, // "Recipe Item: Pattern: Bag of Many Hides (#34491)"
    { 6539152, 39152 }, // "Recipe Item: Manual: Heavy Frostweave Bandage (#39152)"
    { 6543018, 43018 }, // "Recipe Item: Recipe: Mega Mammoth Meal (#43018)"
    { 6543019, 43019 }, // "Recipe Item: Recipe: Tender Shoveltusk Steak (#43019)"
    { 6543020, 43020 }, // "Recipe Item: Recipe: Spiced Worm Burger (#43020)"
    { 6543021, 43021 }, // "Recipe Item: Recipe: Very Burnt Worg (#43021)"
    { 6543022, 43022 }, // "Recipe Item: Recipe: Mighty Rhino Dogs (#43022)"
    { 6543023, 43023 }, // "Recipe Item: Recipe: Poached Northern Sculpin (#43023)"
    { 6543024, 43024 }, // "Recipe Item: Recipe: Firecracker Salmon (#43024)"
    { 6543026, 43026 }, // "Recipe Item: Recipe: Imperial Manta Steak (#43026)"
    { 6543025, 43025 }, // "Recipe Item: Recipe: Spicy Blue Nettlefish (#43025)"
    { 6534834, 34834 }, // "Recipe Item: Recipe: Captain Rumsey's Lager (#34834)"
    { 6534872, 34872 }, // "Recipe Item: Formula: Void Shatter (#34872)"
    { 6535191, 35191 }, // "Recipe Item: Schematic: Wonderheal XT68 Shades (#35191)"
    { 6535187, 35187 }, // "Recipe Item: Schematic: Justicebringer 3000 Specs (#35187)"
    { 6535189, 35189 }, // "Recipe Item: Schematic: Powerheal 9000 Lens (#35189)"
    { 6535190, 35190 }, // "Recipe Item: Schematic: Hyper-Magnified Moon Specs (#35190)"
    { 6535192, 35192 }, // "Recipe Item: Schematic: Primal-Attuned Goggles (#35192)"
    { 6535186, 35186 }, // "Recipe Item: Schematic: Annihilator Holo-Gogs (#35186)"
    { 6535193, 35193 }, // "Recipe Item: Schematic: Lightning Etched Specs (#35193)"
    { 6535194, 35194 }, // "Recipe Item: Schematic: Surestrike Goggles v3.0 (#35194)"
    { 6535195, 35195 }, // "Recipe Item: Schematic: Mayhem Projection Goggles (#35195)"
    { 6535196, 35196 }, // "Recipe Item: Schematic: Hard Khorium Goggles (#35196)"
    { 6535197, 35197 }, // "Recipe Item: Schematic: Quad Deathblow X44 Goggles (#35197)"
    { 6535198, 35198 }, // "Recipe Item: Design: Loop of Forged Power (#35198)"
    { 6535199, 35199 }, // "Recipe Item: Design: Ring of Flowing Life (#35199)"
    { 6535200, 35200 }, // "Recipe Item: Design: Hard Khorium Band (#35200)"
    { 6535201, 35201 }, // "Recipe Item: Design: Pendant of Sunfire (#35201)"
    { 6535202, 35202 }, // "Recipe Item: Design: Amulet of Flowing Life (#35202)"
    { 6535203, 35203 }, // "Recipe Item: Design: Hard Khorium Choker (#35203)"
    { 6535204, 35204 }, // "Recipe Item: Pattern: Sunfire Handwraps (#35204)"
    { 6535205, 35205 }, // "Recipe Item: Pattern: Hands of Eternal Light (#35205)"
    { 6535206, 35206 }, // "Recipe Item: Pattern: Sunfire Robe (#35206)"
    { 6535207, 35207 }, // "Recipe Item: Pattern: Robe of Eternal Light (#35207)"
    { 6535212, 35212 }, // "Recipe Item: Pattern: Leather Gauntlets of the Sun (#35212)"
    { 6535213, 35213 }, // "Recipe Item: Pattern: Fletcher's Gloves of the Phoenix (#35213)"
    { 6535214, 35214 }, // "Recipe Item: Pattern: Gloves of Immortal Dusk (#35214)"
    { 6535215, 35215 }, // "Recipe Item: Pattern: Sun-Drenched Scale Gloves (#35215)"
    { 6535216, 35216 }, // "Recipe Item: Pattern: Leather Chestguard of the Sun (#35216)"
    { 6535217, 35217 }, // "Recipe Item: Pattern: Embrace of the Phoenix (#35217)"
    { 6535218, 35218 }, // "Recipe Item: Pattern: Carapace of Sun and Shadow (#35218)"
    { 6535219, 35219 }, // "Recipe Item: Pattern: Sun-Drenched Scale Chestguard (#35219)"
    { 6535208, 35208 }, // "Recipe Item: Plans: Sunblessed Gauntlets (#35208)"
    { 6535209, 35209 }, // "Recipe Item: Plans: Hard Khorium Battlefists (#35209)"
    { 6535210, 35210 }, // "Recipe Item: Plans: Sunblessed Breastplate (#35210)"
    { 6535211, 35211 }, // "Recipe Item: Plans: Hard Khorium Battleplate (#35211)"
    { 6535273, 35273 }, // "Recipe Item: Study of Advanced Smelting (#35273)"
    { 6535322, 35322 }, // "Recipe Item: Design: Quick Dawnstone (#35322)"
    { 6535323, 35323 }, // "Recipe Item: Design: Reckless Noble Topaz (#35323)"
    { 6535325, 35325 }, // "Recipe Item: Design: Forceful Talasite (#35325)"
    { 6535498, 35498 }, // "Recipe Item: Formula: Enchant Weapon - Deathfrost (#35498)"
    { 6535500, 35500 }, // "Recipe Item: Formula: Enchant Chest - Defense (#35500)"
    { 6535502, 35502 }, // "Recipe Item: Design: Eternal Earthstorm Diamond (#35502)"
    { 6535505, 35505 }, // "Recipe Item: Design: Ember Skyfire Diamond (#35505)"
    { 6535564, 35564 }, // "Recipe Item: Recipe: Charred Bear Kabobs (#35564)"
    { 6535566, 35566 }, // "Recipe Item: Recipe: Juicy Bear Burger (#35566)"
    { 6535582, 35582 }, // "Recipe Item: Schematic: Rocket Boots Xtreme Lite (#35582)"
    { 6535695, 35695 }, // "Recipe Item: Design: Figurine - Empyrean Tortoise (#35695)"
    { 6535696, 35696 }, // "Recipe Item: Design: Figurine - Khorium Boar (#35696)"
    { 6535697, 35697 }, // "Recipe Item: Design: Figurine - Crimson Serpent (#35697)"
    { 6535698, 35698 }, // "Recipe Item: Design: Figurine - Shadowsong Panther (#35698)"
    { 6535699, 35699 }, // "Recipe Item: Design: Figurine - Seaspray Albatross (#35699)"
    { 6535708, 35708 }, // "Recipe Item: Design: Regal Nightseye (#35708)"
    { 6535752, 35752 }, // "Recipe Item: Recipe: Guardian's Alchemist Stone (#35752)"
    { 6535753, 35753 }, // "Recipe Item: Recipe: Sorcerer's Alchemist Stone (#35753)"
    { 6535754, 35754 }, // "Recipe Item: Recipe: Redeemer's Alchemist Stone (#35754)"
    { 6535755, 35755 }, // "Recipe Item: Recipe: Assassin's Alchemist Stone (#35755)"
    { 6535756, 35756 }, // "Recipe Item: Formula: Enchant Cloak - Steelweave (#35756)"
    { 6535765, 35765 }, // "Recipe Item: Design: Forceful Seaspray Emerald (#35765)"
    { 6535764, 35764 }, // "Recipe Item: Design: Steady Seaspray Emerald (#35764)"
    { 6535762, 35762 }, // "Recipe Item: Design: Reckless Pyrestone (#35762)"
    { 6535763, 35763 }, // "Recipe Item: Design: Quick Lionseye (#35763)"
    { 6544471, 44471 }, // "Recipe Item: Formula: Enchant Cloak - Mighty Armor (#44471)"
    { 6537336, 37336 }, // "Recipe Item: Formula: Enchant Chest - Greater Dodge (#37336)"
    { 6537348, 37348 }, // "Recipe Item: Formula: Enchant Cloak - Haste (#37348)"
    { 6544488, 44488 }, // "Recipe Item: Formula: Enchant Cloak - Wisdom (#44488)"
    { 6544491, 44491 }, // "Recipe Item: Formula: Enchant Boots - Tuskarr's Vitality (#44491)"
    { 6537504, 37504 }, // "Recipe Item: Design: Purified Shadowsong Amethyst (#37504)"
    { 6537915, 37915 }, // "Recipe Item: Pattern: Dress Shoes (#37915)"
    { 6538229, 38229 }, // "Recipe Item: Pattern: Mycah's Botanical Bag (#38229)"
    { 6538327, 38327 }, // "Recipe Item: Pattern: Haliscan Jacket (#38327)"
    { 6538328, 38328 }, // "Recipe Item: Pattern: Haliscan Pantaloons (#38328)"
    { 6544509, 44509 }, // "Recipe Item: Pattern: Trapper's Traveling Pack (#44509)"
    { 6544510, 44510 }, // "Recipe Item: Pattern: Mammoth Mining Bag (#44510)"
    { 6538597, 38597 }, // "Recipe Item: Pattern: Dark Arctic Boots (#38597)"
    { 6539153, 39153 }, // "Recipe Item: Manual: Dense Frostweave Bandage (#39153)"
    { 6532430, 32430 }, // "Recipe Item: Pattern: Bracers of Shackled Souls (#32430)"
    { 6539644, 39644 }, // "Recipe Item: Recipe: Kungaloosh (#39644)"
    { 6541576, 41576 }, // "Recipe Item: Design: Bold Scarlet Ruby (#41576)"
    { 6541559, 41559 }, // "Recipe Item: Design: Mystic Sun Crystal (#41559)"
    { 6541575, 41575 }, // "Recipe Item: Design: Mysterious Shadow Crystal (#41575)"
    { 6541574, 41574 }, // "Recipe Item: Design: Defender's Shadow Crystal (#41574)"
    { 6541566, 41566 }, // "Recipe Item: Design: Resplendent Huge Citrine (#41566)"
    { 6541562, 41562 }, // "Recipe Item: Design: Deadly Huge Citrine (#41562)"
    { 6541565, 41565 }, // "Recipe Item: Design: Lucent Huge Citrine (#41565)"
    { 6541563, 41563 }, // "Recipe Item: Design: Durable Huge Citrine (#41563)"
    { 6541561, 41561 }, // "Recipe Item: Design: Reckless Huge Citrine (#41561)"
    { 6541564, 41564 }, // "Recipe Item: Design: Empowered Huge Citrine (#41564)"
    { 6541567, 41567 }, // "Recipe Item: Design: Vivid Dark Jade (#41567)"
    { 6541572, 41572 }, // "Recipe Item: Design: Steady Dark Jade (#41572)"
    { 6541568, 41568 }, // "Recipe Item: Design: Seer's Dark Jade (#41568)"
    { 6541571, 41571 }, // "Recipe Item: Design: Turbid Dark Jade (#41571)"
    { 6541573, 41573 }, // "Recipe Item: Design: Opaque Dark Jade (#41573)"
    { 6541570, 41570 }, // "Recipe Item: Design: Tense Dark Jade (#41570)"
    { 6541569, 41569 }, // "Recipe Item: Design: Shattered Dark Jade (#41569)"
    { 6544564, 44564 }, // "Recipe Item: Recipe: Mighty Arcane Protection Potion (#44564)"
    { 6544566, 44566 }, // "Recipe Item: Recipe: Mighty Frost Protection Potion (#44566)"
    { 6544568, 44568 }, // "Recipe Item: Recipe: Mighty Shadow Protection Potion (#44568)"
    { 6544565, 44565 }, // "Recipe Item: Recipe: Mighty Fire Protection Potion (#44565)"
    { 6544567, 44567 }, // "Recipe Item: Recipe: Mighty Nature Protection Potion (#44567)"
    { 6541560, 41560 }, // "Recipe Item: Design: Stormy Chalcedony (#41560)"
    { 6541577, 41577 }, // "Recipe Item: Design: Delicate Scarlet Ruby (#41577)"
    { 6541718, 41718 }, // "Recipe Item: Design: Runed Scarlet Ruby (#41718)"
    { 6541719, 41719 }, // "Recipe Item: Design: Subtle Scarlet Ruby (#41719)"
    { 6541578, 41578 }, // "Recipe Item: Design: Flashing Scarlet Ruby (#41578)"
    { 6541817, 41817 }, // "Recipe Item: Design: Fractured Scarlet Ruby (#41817)"
    { 6541790, 41790 }, // "Recipe Item: Design: Precise Scarlet Ruby (#41790)"
    { 6542138, 42138 }, // "Recipe Item: Design: Solid Sky Sapphire (#42138)"
    { 6541581, 41581 }, // "Recipe Item: Design: Lustrous Sky Sapphire (#41581)"
    { 6541728, 41728 }, // "Recipe Item: Design: Stormy Sky Sapphire (#41728)"
    { 6541720, 41720 }, // "Recipe Item: Design: Smooth Autumn's Glow (#41720)"
    { 6541580, 41580 }, // "Recipe Item: Design: Rigid Autumn's Glow (#41580)"
    { 6541791, 41791 }, // "Recipe Item: Design: Thick Autumn's Glow (#41791)"
    { 6541727, 41727 }, // "Recipe Item: Design: Mystic Autumn's Glow (#41727)"
    { 6541579, 41579 }, // "Recipe Item: Design: Quick Autumn's Glow (#41579)"
    { 6541784, 41784 }, // "Recipe Item: Design: Sovereign Twilight Opal (#41784)"
    { 6541747, 41747 }, // "Recipe Item: Design: Shifting Twilight Opal (#41747)"
    { 6541785, 41785 }, // "Recipe Item: Design: Tenuous Twilight Opal (#41785)"
    { 6541725, 41725 }, // "Recipe Item: Design: Glowing Twilight Opal (#41725)"
    { 6541783, 41783 }, // "Recipe Item: Design: Purified Twilight Opal (#41783)"
    { 6541701, 41701 }, // "Recipe Item: Design: Royal Twilight Opal (#41701)"
    { 6541740, 41740 }, // "Recipe Item: Design: Mysterious Twilight Opal (#41740)"
    { 6541796, 41796 }, // "Recipe Item: Design: Infused Twilight Opal (#41796)"
    { 6541703, 41703 }, // "Recipe Item: Design: Regal Twilight Opal (#41703)"
    { 6541820, 41820 }, // "Recipe Item: Design: Defender's Twilight Opal (#41820)"
    { 6541702, 41702 }, // "Recipe Item: Design: Puissant Twilight Opal (#41702)"
    { 6541726, 41726 }, // "Recipe Item: Design: Guardian's Twilight Opal (#41726)"
    { 6541789, 41789 }, // "Recipe Item: Design: Inscribed Monarch Topaz (#41789)"
    { 6541777, 41777 }, // "Recipe Item: Design: Etched Monarch Topaz (#41777)"
    { 6541780, 41780 }, // "Recipe Item: Design: Champion's Monarch Topaz (#41780)"
    { 6541734, 41734 }, // "Recipe Item: Design: Resplendent Monarch Topaz (#41734)"
    { 6541794, 41794 }, // "Recipe Item: Design: Deadly Monarch Topaz (#41794)"
    { 6541582, 41582 }, // "Recipe Item: Design: Glinting Monarch Topaz (#41582)"
    { 6541733, 41733 }, // "Recipe Item: Design: Lucent Monarch Topaz (#41733)"
    { 6541792, 41792 }, // "Recipe Item: Design: Deft Monarch Topaz (#41792)"
    { 6541689, 41689 }, // "Recipe Item: Design: Luminous Monarch Topaz (#41689)"
    { 6541686, 41686 }, // "Recipe Item: Design: Potent Monarch Topaz (#41686)"
    { 6541688, 41688 }, // "Recipe Item: Design: Veiled Monarch Topaz (#41688)"
    { 6541730, 41730 }, // "Recipe Item: Design: Durable Monarch Topaz (#41730)"
    { 6541690, 41690 }, // "Recipe Item: Design: Reckless Monarch Topaz (#41690)"
    { 6541721, 41721 }, // "Recipe Item: Design: Wicked Monarch Topaz (#41721)"
    { 6541732, 41732 }, // "Recipe Item: Design: Empowered Monarch Topaz (#41732)"
    { 6541687, 41687 }, // "Recipe Item: Design: Stark Monarch Topaz (#41687)"
    { 6541779, 41779 }, // "Recipe Item: Design: Stalwart Monarch Topaz (#41779)"
    { 6541722, 41722 }, // "Recipe Item: Design: Glimmering Monarch Topaz (#41722)"
    { 6541818, 41818 }, // "Recipe Item: Design: Accurate Monarch Topaz (#41818)"
    { 6541795, 41795 }, // "Recipe Item: Design: Timeless Forest Emerald (#41795)"
    { 6541723, 41723 }, // "Recipe Item: Design: Jagged Forest Emerald (#41723)"
    { 6541698, 41698 }, // "Recipe Item: Design: Vivid Forest Emerald (#41698)"
    { 6541697, 41697 }, // "Recipe Item: Design: Enduring Forest Emerald (#41697)"
    { 6541738, 41738 }, // "Recipe Item: Design: Steady Forest Emerald (#41738)"
    { 6541693, 41693 }, // "Recipe Item: Design: Forceful Forest Emerald (#41693)"
    { 6541699, 41699 }, // "Recipe Item: Design: Seer's Forest Emerald (#41699)"
    { 6541781, 41781 }, // "Recipe Item: Design: Misty Forest Emerald (#41781)"
    { 6541782, 41782 }, // "Recipe Item: Design: Shining Forest Emerald (#41782)"
    { 6541737, 41737 }, // "Recipe Item: Design: Turbid Forest Emerald (#41737)"
    { 6541694, 41694 }, // "Recipe Item: Design: Intricate Forest Emerald (#41694)"
    { 6541724, 41724 }, // "Recipe Item: Design: Sundered Forest Emerald (#41724)"
    { 6541696, 41696 }, // "Recipe Item: Design: Lambent Forest Emerald (#41696)"
    { 6541739, 41739 }, // "Recipe Item: Design: Opaque Forest Emerald (#41739)"
    { 6541692, 41692 }, // "Recipe Item: Design: Energized Forest Emerald (#41692)"
    { 6541819, 41819 }, // "Recipe Item: Design: Radiant Forest Emerald (#41819)"
    { 6541736, 41736 }, // "Recipe Item: Design: Tense Forest Emerald (#41736)"
    { 6541735, 41735 }, // "Recipe Item: Design: Shattered Forest Emerald (#41735)"
    { 6541793, 41793 }, // "Recipe Item: Design: Fierce Monarch Topaz (#41793)"
    { 6541778, 41778 }, // "Recipe Item: Design: Resolute Monarch Topaz (#41778)"
    { 6549177, 49177 }, // "Recipe Item: Tome of Cold Weather Flight (#49177)"
    { 6541124, 41124 }, // "Recipe Item: Plans: Reinforced Cobalt Shoulders (#41124)"
    { 6541123, 41123 }, // "Recipe Item: Plans: Reinforced Cobalt Helm (#41123)"
    { 6541120, 41120 }, // "Recipe Item: Plans: Reinforced Cobalt Legplates (#41120)"
    { 6541122, 41122 }, // "Recipe Item: Plans: Reinforced Cobalt Chestpiece (#41122)"
    { 6542172, 42172 }, // "Recipe Item: Pattern: Red Lumberjack Shirt (#42172)"
    { 6542173, 42173 }, // "Recipe Item: Pattern: Blue Lumberjack Shirt (#42173)"
    { 6542174, 42174 }, // "Recipe Item: Pattern: Yellow Lumberjack Shirt (#42174)"
    { 6542175, 42175 }, // "Recipe Item: Pattern: Green Lumberjack Shirt (#42175)"
    { 6542177, 42177 }, // "Recipe Item: Pattern: Red Workman's Shirt (#42177)"
    { 6542176, 42176 }, // "Recipe Item: Pattern: Blue Workman's Shirt (#42176)"
    { 6542178, 42178 }, // "Recipe Item: Pattern: Rustic Workman's Shirt (#42178)"
    { 6542179, 42179 }, // "Recipe Item: Pattern: Green Workman's Shirt (#42179)"
    { 6542181, 42181 }, // "Recipe Item: Pattern: Moonshroud (#42181)"
    { 6542180, 42180 }, // "Recipe Item: Pattern: Ebonweave (#42180)"
    { 6542182, 42182 }, // "Recipe Item: Pattern: Spellweave (#42182)"
    { 6542183, 42183 }, // "Recipe Item: Pattern: Abyssal Bag (#42183)"
    { 6542184, 42184 }, // "Recipe Item: Pattern: Glacial Bag (#42184)"
    { 6542185, 42185 }, // "Recipe Item: Pattern: Mysterious Bag (#42185)"
    { 6542186, 42186 }, // "Recipe Item: Pattern: Frostweave Bag (#42186)"
    { 6542187, 42187 }, // "Recipe Item: Pattern: Brilliant Spellthread (#42187)"
    { 6542188, 42188 }, // "Recipe Item: Pattern: Sapphire Spellthread (#42188)"
    { 6542189, 42189 }, // "Recipe Item: Pattern: Wispcloak (#42189)"
    { 6542190, 42190 }, // "Recipe Item: Pattern: Deathchill Cloak (#42190)"
    { 6542191, 42191 }, // "Recipe Item: Pattern: Hat of Wintry Doom (#42191)"
    { 6542192, 42192 }, // "Recipe Item: Pattern: Silky Iceshard Boots (#42192)"
    { 6542193, 42193 }, // "Recipe Item: Pattern: Glacial Cord (#42193)"
    { 6542194, 42194 }, // "Recipe Item: Pattern: Frostmoon Pants (#42194)"
    { 6542195, 42195 }, // "Recipe Item: Pattern: Light Blessed Mittens (#42195)"
    { 6542196, 42196 }, // "Recipe Item: Pattern: Aurora Slippers (#42196)"
    { 6542197, 42197 }, // "Recipe Item: Pattern: Moonshroud Robe (#42197)"
    { 6542198, 42198 }, // "Recipe Item: Pattern: Moonshroud Gloves (#42198)"
    { 6542199, 42199 }, // "Recipe Item: Pattern: Ebonweave Robe (#42199)"
    { 6542200, 42200 }, // "Recipe Item: Pattern: Ebonweave Gloves (#42200)"
    { 6542201, 42201 }, // "Recipe Item: Pattern: Spellweave Robe (#42201)"
    { 6542202, 42202 }, // "Recipe Item: Pattern: Spellweave Gloves (#42202)"
    { 6542298, 42298 }, // "Recipe Item: Design: Bold Dragon's Eye (#42298)"
    { 6542301, 42301 }, // "Recipe Item: Design: Delicate Dragon's Eye (#42301)"
    { 6542309, 42309 }, // "Recipe Item: Design: Runed Dragon's Eye (#42309)"
    { 6542299, 42299 }, // "Recipe Item: Design: Bright Dragon's Eye (#42299)"
    { 6542314, 42314 }, // "Recipe Item: Design: Subtle Dragon's Eye (#42314)"
    { 6542302, 42302 }, // "Recipe Item: Design: Flashing Dragon's Eye (#42302)"
    { 6542300, 42300 }, // "Recipe Item: Design: Brilliant Dragon's Eye (#42300)"
    { 6542303, 42303 }, // "Recipe Item: Design: Fractured Dragon's Eye (#42303)"
    { 6542304, 42304 }, // "Recipe Item: Design: Lustrous Dragon's Eye (#42304)"
    { 6542305, 42305 }, // "Recipe Item: Design: Mystic Dragon's Eye (#42305)"
    { 6542306, 42306 }, // "Recipe Item: Design: Precise Dragon's Eye (#42306)"
    { 6542307, 42307 }, // "Recipe Item: Design: Quick Dragon's Eye (#42307)"
    { 6542308, 42308 }, // "Recipe Item: Design: Rigid Dragon's Eye (#42308)"
    { 6542310, 42310 }, // "Recipe Item: Design: Smooth Dragon's Eye (#42310)"
    { 6542311, 42311 }, // "Recipe Item: Design: Solid Dragon's Eye (#42311)"
    { 6542312, 42312 }, // "Recipe Item: Design: Sparkling Dragon's Eye (#42312)"
    { 6542313, 42313 }, // "Recipe Item: Design: Stormy Dragon's Eye (#42313)"
    { 6542315, 42315 }, // "Recipe Item: Design: Thick Dragon's Eye (#42315)"
    { 6542648, 42648 }, // "Recipe Item: Design: Titanium Impact Band (#42648)"
    { 6542649, 42649 }, // "Recipe Item: Design: Titanium Earthguard Ring (#42649)"
    { 6542650, 42650 }, // "Recipe Item: Design: Titanium Spellshock Ring (#42650)"
    { 6542651, 42651 }, // "Recipe Item: Design: Titanium Impact Choker (#42651)"
    { 6542652, 42652 }, // "Recipe Item: Design: Titanium Earthguard Chain (#42652)"
    { 6542653, 42653 }, // "Recipe Item: Design: Titanium Spellshock Necklace (#42653)"
    { 6543017, 43017 }, // "Recipe Item: Recipe: Fish Feast (#43017)"
    { 6543027, 43027 }, // "Recipe Item: Recipe: Spicy Fried Herring (#43027)"
    { 6543028, 43028 }, // "Recipe Item: Recipe: Rhinolicious Wormsteak (#43028)"
    { 6543029, 43029 }, // "Recipe Item: Recipe: Critter Bites (#43029)"
    { 6543030, 43030 }, // "Recipe Item: Recipe: Hearty Rhino (#43030)"
    { 6543031, 43031 }, // "Recipe Item: Recipe: Snapper Extreme (#43031)"
    { 6543032, 43032 }, // "Recipe Item: Recipe: Blackened Worg Steak (#43032)"
    { 6543033, 43033 }, // "Recipe Item: Recipe: Cuttlesteak (#43033)"
    { 6543034, 43034 }, // "Recipe Item: Recipe: Spiced Mammoth Treats (#43034)"
    { 6543035, 43035 }, // "Recipe Item: Recipe: Blackened Dragonfin (#43035)"
    { 6543036, 43036 }, // "Recipe Item: Recipe: Dragonfin Filet (#43036)"
    { 6543037, 43037 }, // "Recipe Item: Recipe: Tracker Snacks (#43037)"
    { 6544559, 44559 }, // "Recipe Item: Pattern: Fur Lining - Fire Resist (#44559)"
    { 6544560, 44560 }, // "Recipe Item: Pattern: Fur Lining - Frost Resist (#44560)"
    { 6544561, 44561 }, // "Recipe Item: Pattern: Fur Lining - Shadow Resist (#44561)"
    { 6544562, 44562 }, // "Recipe Item: Pattern: Fur Lining - Nature Resist  (#44562)"
    { 6544563, 44563 }, // "Recipe Item: Pattern: Fur Lining - Arcane Resist (#44563)"
    { 6543317, 43317 }, // "Recipe Item: Design: Ring of Earthen Might (#43317)"
    { 6543318, 43318 }, // "Recipe Item: Design: Ring of Scarlet Shadows (#43318)"
    { 6543319, 43319 }, // "Recipe Item: Design: Windfire Band (#43319)"
    { 6543320, 43320 }, // "Recipe Item: Design: Ring of Northern Tears (#43320)"
    { 6543485, 43485 }, // "Recipe Item: Design: Savage Titanium Ring (#43485)"
    { 6543497, 43497 }, // "Recipe Item: Design: Savage Titanium Band (#43497)"
    { 6543507, 43507 }, // "Recipe Item: Recipe: Tasty Cupcake (#43507)"
    { 6543508, 43508 }, // "Recipe Item: Recipe: Last Week's Mammoth (#43508)"
    { 6543509, 43509 }, // "Recipe Item: Recipe: Bad Clams (#43509)"
    { 6543510, 43510 }, // "Recipe Item: Recipe: Haunted Herring (#43510)"
    { 6543505, 43505 }, // "Recipe Item: Recipe: Gigantic Feast (#43505)"
    { 6543506, 43506 }, // "Recipe Item: Recipe: Small Feast (#43506)"
    { 6543597, 43597 }, // "Recipe Item: Design: Titanium Frostguard Ring (#43597)"
    { 6543876, 43876 }, // "Recipe Item: A Guide to Northern Cloth Scavenging (#43876)"
    { 6544496, 44496 }, // "Recipe Item: Formula: Enchant Weapon - Accuracy (#44496)"
    { 6544492, 44492 }, // "Recipe Item: Formula: Enchant Weapon - Berserking (#44492)"
    { 6544495, 44495 }, // "Recipe Item: Formula: Enchant Weapon - Black Magic (#44495)"
    { 6544511, 44511 }, // "Recipe Item: Pattern: Dragonscale Ammo Pouch (#44511)"
    { 6544512, 44512 }, // "Recipe Item: Pattern: Nerubian Reinforced Quiver (#44512)"
    { 6544483, 44483 }, // "Recipe Item: Formula: Enchant 2H Weapon - Massacre (#44483)"
    { 6544489, 44489 }, // "Recipe Item: Formula: Enchant Chest - Powerful Stats (#44489)"
    { 6544513, 44513 }, // "Recipe Item: Pattern: Eviscerator's Facemask (#44513)"
    { 6544514, 44514 }, // "Recipe Item: Pattern: Eviscerator's Shoulderpads (#44514)"
    { 6544515, 44515 }, // "Recipe Item: Pattern: Eviscerator's Chestguard (#44515)"
    { 6544516, 44516 }, // "Recipe Item: Pattern: Eviscerator's Bindings (#44516)"
    { 6544517, 44517 }, // "Recipe Item: Pattern: Eviscerator's Gauntlets (#44517)"
    { 6544518, 44518 }, // "Recipe Item: Pattern: Eviscerator's Waistguard (#44518)"
    { 6544486, 44486 }, // "Recipe Item: Formula: Enchant Weapon - Superior Potency (#44486)"
    { 6544519, 44519 }, // "Recipe Item: Pattern: Eviscerator's Legguards (#44519)"
    { 6544520, 44520 }, // "Recipe Item: Pattern: Eviscerator's Treads (#44520)"
    { 6544487, 44487 }, // "Recipe Item: Formula: Enchant Weapon - Mighty Spellpower (#44487)"
    { 6544521, 44521 }, // "Recipe Item: Pattern: Overcast Headguard (#44521)"
    { 6544522, 44522 }, // "Recipe Item: Pattern: Overcast Spaulders (#44522)"
    { 6544523, 44523 }, // "Recipe Item: Pattern: Overcast Chestguard (#44523)"
    { 6544524, 44524 }, // "Recipe Item: Pattern: Overcast Bracers (#44524)"
    { 6544525, 44525 }, // "Recipe Item: Pattern: Overcast Handwraps (#44525)"
    { 6544526, 44526 }, // "Recipe Item: Pattern: Overcast Belt (#44526)"
    { 6544527, 44527 }, // "Recipe Item: Pattern: Overcast Leggings (#44527)"
    { 6544528, 44528 }, // "Recipe Item: Pattern: Overcast Boots (#44528)"
    { 6544530, 44530 }, // "Recipe Item: Pattern: Swiftarrow Helm (#44530)"
    { 6544531, 44531 }, // "Recipe Item: Pattern: Swiftarrow Shoulderguards (#44531)"
    { 6544532, 44532 }, // "Recipe Item: Pattern: Swiftarrow Hauberk (#44532)"
    { 6544533, 44533 }, // "Recipe Item: Pattern: Swiftarrow Bracers (#44533)"
    { 6544534, 44534 }, // "Recipe Item: Pattern: Swiftarrow Gauntlets (#44534)"
    { 6544535, 44535 }, // "Recipe Item: Pattern: Swiftarrow Belt (#44535)"
    { 6544536, 44536 }, // "Recipe Item: Pattern: Swiftarrow Leggings (#44536)"
    { 6544537, 44537 }, // "Recipe Item: Pattern: Swiftarrow Boots (#44537)"
    { 6544538, 44538 }, // "Recipe Item: Pattern: Stormhide Crown (#44538)"
    { 6544539, 44539 }, // "Recipe Item: Pattern: Stormhide Shoulders (#44539)"
    { 6544540, 44540 }, // "Recipe Item: Pattern: Stormhide Hauberk (#44540)"
    { 6544541, 44541 }, // "Recipe Item: Pattern: Stormhide Wristguards (#44541)"
    { 6544542, 44542 }, // "Recipe Item: Pattern: Stormhide Grips (#44542)"
    { 6544543, 44543 }, // "Recipe Item: Pattern: Stormhide Belt (#44543)"
    { 6544544, 44544 }, // "Recipe Item: Pattern: Stormhide Legguards (#44544)"
    { 6544545, 44545 }, // "Recipe Item: Pattern: Stormhide Stompers (#44545)"
    { 6544546, 44546 }, // "Recipe Item: Pattern: Giantmaim Legguards (#44546)"
    { 6544547, 44547 }, // "Recipe Item: Pattern: Giantmaim Bracers (#44547)"
    { 6544548, 44548 }, // "Recipe Item: Pattern: Revenant's Breastplate (#44548)"
    { 6544549, 44549 }, // "Recipe Item: Pattern: Revenant's Treads (#44549)"
    { 6544550, 44550 }, // "Recipe Item: Pattern: Trollwoven Spaulders (#44550)"
    { 6544551, 44551 }, // "Recipe Item: Pattern: Trollwoven Girdle (#44551)"
    { 6544552, 44552 }, // "Recipe Item: Pattern: Earthgiving Legguards (#44552)"
    { 6544553, 44553 }, // "Recipe Item: Pattern: Earthgiving Boots (#44553)"
    { 6544490, 44490 }, // "Recipe Item: Formula: Enchant Boots - Greater Assault (#44490)"
    { 6544498, 44498 }, // "Recipe Item: Formula: Enchant Bracer - Superior Spellpower (#44498)"
    { 6544502, 44502 }, // "Recipe Item: Schematic: Mechano-hog (#44502)"
    { 6544503, 44503 }, // "Recipe Item: Schematic: Mekgineer's Chopper (#44503)"
    { 6544584, 44584 }, // "Recipe Item: Pattern: Polar Vest (#44584)"
    { 6544585, 44585 }, // "Recipe Item: Pattern: Polar Cord (#44585)"
    { 6544586, 44586 }, // "Recipe Item: Pattern: Polar Boots (#44586)"
    { 6544587, 44587 }, // "Recipe Item: Pattern: Icy Scale Chestguard (#44587)"
    { 6544588, 44588 }, // "Recipe Item: Pattern: Icy Scale Belt (#44588)"
    { 6544589, 44589 }, // "Recipe Item: Pattern: Icy Scale Boots (#44589)"
    { 6544602, 44602 }, // "Recipe Item: Tome of Dalaran Intellect (#44602)"
    { 6544709, 44709 }, // "Recipe Item: Tome of Polymorph: Black Cat (#44709)"
    { 6544714, 44714 }, // "Recipe Item: Tome of Dalaran Brilliance (#44714)"
    { 6544793, 44793 }, // "Recipe Item: Tome of Polymorph: Rabbit (#44793)"
    { 6544811, 44811 }, // "Recipe Item: Tome of Polymorph: Turkey (#44811)"
    { 6544862, 44862 }, // "Recipe Item: Recipe: Pumpkin Pie (#44862)"
    { 6544861, 44861 }, // "Recipe Item: Recipe: Slow-Roasted Turkey (#44861)"
    { 6544858, 44858 }, // "Recipe Item: Recipe: Cranberry Chutney (#44858)"
    { 6544860, 44860 }, // "Recipe Item: Recipe: Spice Bread Stuffing (#44860)"
    { 6544859, 44859 }, // "Recipe Item: Recipe: Candied Sweet Potato (#44859)"
    { 6544932, 44932 }, // "Recipe Item: Pattern: Windripper Boots (#44932)"
    { 6544933, 44933 }, // "Recipe Item: Pattern: Windripper Leggings (#44933)"
    { 6544937, 44937 }, // "Recipe Item: Plans: Titanium Plating (#44937)"
    { 6544944, 44944 }, // "Recipe Item: Formula: Enchant Bracer - Major Stamina (#44944)"
    { 6544945, 44945 }, // "Recipe Item: Formula: Enchant Weapon - Titanguard (#44945)"
    { 6544954, 44954 }, // "Recipe Item: Recipe: Worg Tartare (#44954)"
    { 6545059, 45059 }, // "Recipe Item: Formula: Enchant Staff - Greater Spellpower (#45059)"
    { 6545088, 45088 }, // "Recipe Item: Plans: Belt of the Titans (#45088)"
    { 6545089, 45089 }, // "Recipe Item: Plans: Battlelord's Plate Boots (#45089)"
    { 6545090, 45090 }, // "Recipe Item: Plans: Plate Girdle of Righteousness (#45090)"
    { 6545091, 45091 }, // "Recipe Item: Plans: Treads of Destiny (#45091)"
    { 6545092, 45092 }, // "Recipe Item: Plans: Indestructible Plate Girdle (#45092)"
    { 6545093, 45093 }, // "Recipe Item: Plans: Spiked Deathdealers (#45093)"
    { 6545094, 45094 }, // "Recipe Item: Pattern: Belt of Dragons (#45094)"
    { 6545095, 45095 }, // "Recipe Item: Pattern: Boots of Living Scale (#45095)"
    { 6545096, 45096 }, // "Recipe Item: Pattern: Blue Belt of Chaos (#45096)"
    { 6545097, 45097 }, // "Recipe Item: Pattern: Lightning Grounded Boots (#45097)"
    { 6545098, 45098 }, // "Recipe Item: Pattern: Death-warmed Belt (#45098)"
    { 6545099, 45099 }, // "Recipe Item: Pattern: Footpads of Silence (#45099)"
    { 6545100, 45100 }, // "Recipe Item: Pattern: Belt of Arctic Life (#45100)"
    { 6545101, 45101 }, // "Recipe Item: Pattern: Boots of Wintry Endurance (#45101)"
    { 6545102, 45102 }, // "Recipe Item: Pattern: Sash of Ancient Power (#45102)"
    { 6545103, 45103 }, // "Recipe Item: Pattern: Spellslinger's Slippers (#45103)"
    { 6545104, 45104 }, // "Recipe Item: Pattern: Cord of the White Dawn (#45104)"
    { 6545105, 45105 }, // "Recipe Item: Pattern: Savior's Slippers (#45105)"
    { 6545774, 45774 }, // "Recipe Item: Pattern: Emerald Bag (#45774)"
    { 6546108, 46108 }, // "Recipe Item: Technique: Rituals of the New Moon (#46108)"
    { 6546027, 46027 }, // "Recipe Item: Formula: Enchant Weapon - Blade Ward (#46027)"
    { 6546348, 46348 }, // "Recipe Item: Formula: Enchant Weapon - Blood Draining (#46348)"
    { 6546710, 46710 }, // "Recipe Item: Recipe: Bread of the Dead (#46710)"
    { 6546806, 46806 }, // "Recipe Item: Recipe: Candied Sweet Potato (#46806)"
    { 6546805, 46805 }, // "Recipe Item: Recipe: Cranberry Chutney (#46805)"
    { 6546804, 46804 }, // "Recipe Item: Recipe: Pumpkin Pie (#46804)"
    { 6546807, 46807 }, // "Recipe Item: Recipe: Slow-Roasted Turkey (#46807)"
    { 6546803, 46803 }, // "Recipe Item: Recipe: Spice Bread Stuffing (#46803)"
    { 6546897, 46897 }, // "Recipe Item: Design: Enduring Eye of Zul (#46897)"
    { 6546898, 46898 }, // "Recipe Item: Design: Steady Eye of Zul (#46898)"
    { 6546899, 46899 }, // "Recipe Item: Design: Vivid Eye of Zul (#46899)"
    { 6546900, 46900 }, // "Recipe Item: Design: Dazzling Eye of Zul (#46900)"
    { 6546901, 46901 }, // "Recipe Item: Design: Jagged Eye of Zul (#46901)"
    { 6546902, 46902 }, // "Recipe Item: Design: Timeless Eye of Zul (#46902)"
    { 6546903, 46903 }, // "Recipe Item: Design: Seer's Eye of Zul (#46903)"
    { 6546904, 46904 }, // "Recipe Item: Design: Forceful Eye of Zul (#46904)"
    { 6546905, 46905 }, // "Recipe Item: Design: Misty Eye of Zul (#46905)"
    { 6546906, 46906 }, // "Recipe Item: Design: Sundered Eye of Zul (#46906)"
    { 6546907, 46907 }, // "Recipe Item: Design: Shining Eye of Zul (#46907)"
    { 6546908, 46908 }, // "Recipe Item: Design: Tense Eye of Zul (#46908)"
    { 6546909, 46909 }, // "Recipe Item: Design: Lambent Eye of Zul (#46909)"
    { 6546910, 46910 }, // "Recipe Item: Design: Intricate Eye of Zul (#46910)"
    { 6546911, 46911 }, // "Recipe Item: Design: Radiant Eye of Zul (#46911)"
    { 6546912, 46912 }, // "Recipe Item: Design: Energized Eye of Zul (#46912)"
    { 6546913, 46913 }, // "Recipe Item: Design: Shattered Eye of Zul (#46913)"
    { 6546914, 46914 }, // "Recipe Item: Design: Opaque Eye of Zul (#46914)"
    { 6546915, 46915 }, // "Recipe Item: Design: Turbid Eye of Zul (#46915)"
    { 6546916, 46916 }, // "Recipe Item: Design: Runed Cardinal Ruby (#46916)"
    { 6546917, 46917 }, // "Recipe Item: Design: Bold Cardinal Ruby (#46917)"
    { 6546918, 46918 }, // "Recipe Item: Design: Delicate Cardinal Ruby (#46918)"
    { 6546919, 46919 }, // "Recipe Item: Design: Bright Cardinal Ruby (#46919)"
    { 6546920, 46920 }, // "Recipe Item: Design: Precise Cardinal Ruby (#46920)"
    { 6546921, 46921 }, // "Recipe Item: Design: Fractured Cardinal Ruby (#46921)"
    { 6546922, 46922 }, // "Recipe Item: Design: Subtle Cardinal Ruby (#46922)"
    { 6546923, 46923 }, // "Recipe Item: Design: Flashing Cardinal Ruby (#46923)"
    { 6546924, 46924 }, // "Recipe Item: Design: Solid Majestic Zircon (#46924)"
    { 6546925, 46925 }, // "Recipe Item: Design: Sparkling Majestic Zircon (#46925)"
    { 6546926, 46926 }, // "Recipe Item: Design: Stormy Majestic Zircon (#46926)"
    { 6546927, 46927 }, // "Recipe Item: Design: Lustrous Majestic Zircon (#46927)"
    { 6546928, 46928 }, // "Recipe Item: Design: Rigid King's Amber (#46928)"
    { 6546929, 46929 }, // "Recipe Item: Design: Smooth King's Amber (#46929)"
    { 6546930, 46930 }, // "Recipe Item: Design: Brilliant King's Amber (#46930)"
    { 6546931, 46931 }, // "Recipe Item: Design: Thick King's Amber (#46931)"
    { 6546932, 46932 }, // "Recipe Item: Design: Mystic King's Amber (#46932)"
    { 6546933, 46933 }, // "Recipe Item: Design: Quick King's Amber (#46933)"
    { 6546934, 46934 }, // "Recipe Item: Design: Balanced Dreadstone (#46934)"
    { 6546935, 46935 }, // "Recipe Item: Design: Sovereign Dreadstone (#46935)"
    { 6546936, 46936 }, // "Recipe Item: Design: Glowing Dreadstone (#46936)"
    { 6546937, 46937 }, // "Recipe Item: Design: Purified Dreadstone (#46937)"
    { 6546938, 46938 }, // "Recipe Item: Design: Shifting Dreadstone (#46938)"
    { 6546939, 46939 }, // "Recipe Item: Design: Royal Dreadstone (#46939)"
    { 6546940, 46940 }, // "Recipe Item: Design: Regal Dreadstone (#46940)"
    { 6546941, 46941 }, // "Recipe Item: Design: Defender's Dreadstone (#46941)"
    { 6546942, 46942 }, // "Recipe Item: Design: Guardian's Dreadstone (#46942)"
    { 6546943, 46943 }, // "Recipe Item: Design: Mysterious Dreadstone (#46943)"
    { 6546944, 46944 }, // "Recipe Item: Design: Puissant Dreadstone (#46944)"
    { 6546945, 46945 }, // "Recipe Item: Design: Infused Dreadstone (#46945)"
    { 6546946, 46946 }, // "Recipe Item: Design: Tenuous Dreadstone (#46946)"
    { 6546947, 46947 }, // "Recipe Item: Design: Luminous Ametrine (#46947)"
    { 6546948, 46948 }, // "Recipe Item: Design: Inscribed Ametrine (#46948)"
    { 6546949, 46949 }, // "Recipe Item: Design: Deadly Ametrine (#46949)"
    { 6546950, 46950 }, // "Recipe Item: Design: Potent Ametrine (#46950)"
    { 6546951, 46951 }, // "Recipe Item: Design: Veiled Ametrine (#46951)"
    { 6546952, 46952 }, // "Recipe Item: Design: Durable Ametrine (#46952)"
    { 6546953, 46953 }, // "Recipe Item: Design: Etched Ametrine (#46953)"
    { 6546956, 46956 }, // "Recipe Item: Design: Pristine Ametrine (#46956)"
    { 6547007, 47007 }, // "Recipe Item: Design: Reckless Ametrine (#47007)"
    { 6547008, 47008 }, // "Recipe Item: Design: Glinting Ametrine (#47008)"
    { 6547010, 47010 }, // "Recipe Item: Design: Accurate Ametrine (#47010)"
    { 6547011, 47011 }, // "Recipe Item: Design: Wicked Ametrine (#47011)"
    { 6547012, 47012 }, // "Recipe Item: Design: Glimmering Ametrine (#47012)"
    { 6547015, 47015 }, // "Recipe Item: Design: Champion's Ametrine (#47015)"
    { 6547016, 47016 }, // "Recipe Item: Design: Empowered Ametrine (#47016)"
    { 6547017, 47017 }, // "Recipe Item: Design: Stalwart Ametrine (#47017)"
    { 6547018, 47018 }, // "Recipe Item: Design: Resplendent Ametrine (#47018)"
    { 6547019, 47019 }, // "Recipe Item: Design: Fierce Ametrine (#47019)"
    { 6547020, 47020 }, // "Recipe Item: Design: Deft Ametrine (#47020)"
    { 6547021, 47021 }, // "Recipe Item: Design: Lucent Ametrine (#47021)"
    { 6547022, 47022 }, // "Recipe Item: Design: Resolute Ametrine (#47022)"
    { 6547023, 47023 }, // "Recipe Item: Design: Stark Ametrine (#47023)"
    { 6547507, 47507 }, // "Recipe Item: Recipe: Flask of the North (#47507)"
    { 6547657, 47657 }, // "Recipe Item: Pattern: Royal Moonshroud Robe (#47657)"
    { 6547656, 47656 }, // "Recipe Item: Pattern: Royal Moonshroud Bracers (#47656)"
    { 6547655, 47655 }, // "Recipe Item: Pattern: Merlin's Robe (#47655)"
    { 6547654, 47654 }, // "Recipe Item: Pattern: Bejeweled Wizard's Bracers (#47654)"
    { 6547628, 47628 }, // "Recipe Item: Pattern: Ensorcelled Nerubian Breastplate (#47628)"
    { 6547629, 47629 }, // "Recipe Item: Pattern: Black Chitin Bracers (#47629)"
    { 6547630, 47630 }, // "Recipe Item: Pattern: Crusader's Dragonscale Breastplate (#47630)"
    { 6547631, 47631 }, // "Recipe Item: Pattern: Crusader's Dragonscale Bracers (#47631)"
    { 6547632, 47632 }, // "Recipe Item: Pattern: Lunar Eclipse Robes (#47632)"
    { 6547633, 47633 }, // "Recipe Item: Pattern: Moonshadow Armguards (#47633)"
    { 6547634, 47634 }, // "Recipe Item: Pattern: Knightbane Carapace (#47634)"
    { 6547635, 47635 }, // "Recipe Item: Pattern: Bracers of Swift Death (#47635)"
    { 6547622, 47622 }, // "Recipe Item: Plans: Breastplate of the White Knight (#47622)"
    { 6547623, 47623 }, // "Recipe Item: Plans: Saronite Swordbreakers (#47623)"
    { 6547624, 47624 }, // "Recipe Item: Plans: Titanium Razorplate (#47624)"
    { 6547625, 47625 }, // "Recipe Item: Plans: Titanium Spikeguards (#47625)"
    { 6547626, 47626 }, // "Recipe Item: Plans: Sunforged Breastplate (#47626)"
    { 6547627, 47627 }, // "Recipe Item: Plans: Sunforged Bracers (#47627)"
    { 6547640, 47640 }, // "Recipe Item: Plans: Breastplate of the White Knight (#47640)"
    { 6547641, 47641 }, // "Recipe Item: Plans: Saronite Swordbreakers (#47641)"
    { 6547644, 47644 }, // "Recipe Item: Plans: Titanium Razorplate (#47644)"
    { 6547645, 47645 }, // "Recipe Item: Plans: Titanium Spikeguards (#47645)"
    { 6547643, 47643 }, // "Recipe Item: Plans: Sunforged Breastplate (#47643)"
    { 6547642, 47642 }, // "Recipe Item: Plans: Sunforged Bracers (#47642)"
    { 6547650, 47650 }, // "Recipe Item: Pattern: Ensorcelled Nerubian Breastplate (#47650)"
    { 6547646, 47646 }, // "Recipe Item: Pattern: Black Chitin Bracers (#47646)"
    { 6547649, 47649 }, // "Recipe Item: Pattern: Crusader's Dragonscale Breastplate (#47649)"
    { 6547647, 47647 }, // "Recipe Item: Pattern: Bracers of Swift Death (#47647)"
    { 6547652, 47652 }, // "Recipe Item: Pattern: Lunar Eclipse Robes (#47652)"
    { 6547653, 47653 }, // "Recipe Item: Pattern: Moonshadow Armguards (#47653)"
    { 6547651, 47651 }, // "Recipe Item: Pattern: Knightbane Carapace (#47651)"
    { 6547648, 47648 }, // "Recipe Item: Pattern: Crusader's Dragonscale Bracers (#47648)"
    { 6547636, 47636 }, // "Recipe Item: Pattern: Royal Moonshroud Robe (#47636)"
    { 6547639, 47639 }, // "Recipe Item: Pattern: Bejeweled Wizard's Bracers (#47639)"
    { 6547638, 47638 }, // "Recipe Item: Pattern: Merlin's Robe (#47638)"
    { 6547637, 47637 }, // "Recipe Item: Pattern: Royal Moonshroud Bracers (#47637)"
    { 6549050, 49050 }, // "Recipe Item: Schematic: Jeeves (#49050)"
    { 6549112, 49112 }, // "Recipe Item: Design: Nightmare Tear (#49112)"
    { 6549953, 49953 }, // "Recipe Item: Pattern: Leggings of Woven Death (#49953)"
    { 6549954, 49954 }, // "Recipe Item: Pattern: Deathfrost Boots (#49954)"
    { 6549955, 49955 }, // "Recipe Item: Pattern: Lightweave Leggings (#49955)"
    { 6549956, 49956 }, // "Recipe Item: Pattern: Sandals of Consecration (#49956)"
    { 6549957, 49957 }, // "Recipe Item: Pattern: Legwraps of Unleashed Nature (#49957)"
    { 6549958, 49958 }, // "Recipe Item: Pattern: Blessed Cenarion Boots (#49958)"
    { 6549959, 49959 }, // "Recipe Item: Pattern: Bladeborn Leggings (#49959)"
    { 6549961, 49961 }, // "Recipe Item: Pattern: Footpads of Impending Death (#49961)"
    { 6549962, 49962 }, // "Recipe Item: Pattern: Lightning-Infused Leggings (#49962)"
    { 6549963, 49963 }, // "Recipe Item: Pattern: Earthsoul Boots (#49963)"
    { 6549965, 49965 }, // "Recipe Item: Pattern: Draconic Bonesplinter Legguards (#49965)"
    { 6549966, 49966 }, // "Recipe Item: Pattern: Rock-Steady Treads (#49966)"
    { 6549969, 49969 }, // "Recipe Item: Plans: Puresteel Legplates (#49969)"
    { 6549970, 49970 }, // "Recipe Item: Plans: Protectors of Life (#49970)"
    { 6549971, 49971 }, // "Recipe Item: Plans: Legplates of Painful Death (#49971)"
    { 6549972, 49972 }, // "Recipe Item: Plans: Hellfrozen Bonegrinders (#49972)"
    { 6549973, 49973 }, // "Recipe Item: Plans: Pillars of Might (#49973)"
    { 6549974, 49974 }, // "Recipe Item: Plans: Boots of Kingly Upheaval (#49974)"
    { 6550167, 50167 }, // "Recipe Item: Technique: Glyph of Rapid Rejuvenation (#50167)"
    { 6550166, 50166 }, // "Recipe Item: Technique: Glyph of Eternal Water (#50166)"
    { 6550168, 50168 }, // "Recipe Item: Technique: Glyph of Quick Decay (#50168)"
    { 6550406, 50406 }, // "Recipe Item: Formula: Enchant Gloves - Angler (#50406)"
    { 6552022, 52022 }, // "Recipe Item: Plans: Shatter Rounds (#52022)"
    { 6552023, 52023 }, // "Recipe Item: Plans: Iceblade Arrow (#52023)"
    { 6554798, 54798 }, // "Recipe Item: Pattern: Frosty Flying Carpet (#54798)"
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
