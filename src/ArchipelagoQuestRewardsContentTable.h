// GENERATED FILE - do not edit by hand.
// Regenerate with: python modules/archipelago_wow/tools/generate_content.py content/quest_rewards.yaml
#pragma once

#include <cstdint>
#include <map>
#include <string>
#include <unordered_map>
#include <utility>

namespace ArchipelagoQUEST_REWARDSContent {
inline constexpr std::pair<char const*, uint32_t> LOCATIONS_RAW[] = {
    {"Quest: Kanrethad's Quest Reward (#1)", 1000001},
    {"Quest: Bounty on Garrick Padfoot Reward (#6)", 1000006},
    {"Quest: A Rogue's Deal Reward (#8)", 1000008},
    {"Quest: The Killing Fields Reward (#9)", 1000009},
    {"Quest: Riverpaw Gnoll Bounty Reward (#11)", 1000011},
    {"Quest: The People's Militia Reward (#14)", 1000014},
    {"Quest: Give Gerard a Drink Reward (#16)", 1000016},
    {"Quest: Uldaman Reagent Run Reward (#17)", 1000017},
    {"Quest: Brotherhood of Thieves Reward (#18)", 1000018},
    {"Quest: Tharil'zun Reward (#19)", 1000019},
    {"Quest: Skirmish at Echo Ridge Reward (#21)", 1000021},
    {"Quest: Goretusk Liver Pie Reward (#22)", 1000022},
    {"Quest: Aquatic Form Reward (#31)", 1000031},
    {"Quest: Wolves Across the Border Reward (#33)", 1000033},
    {"Quest: An Unwelcome Guest Reward (#34)", 1000034},
    {"Quest: Westfall Stew Reward (#38)", 1000038},
    {"Quest: Bounty on Murlocs Reward (#46)", 1000046},
    {"Quest: Gold Dust Exchange Reward (#47)", 1000047},
    {"Quest: Protect the Frontier Reward (#52)", 1000052},
    {"Quest: Sweet Amber Reward (#53)", 1000053},
    {"Quest: Report to Goldshire Reward (#54)", 1000054},
    {"Quest: Morbent Fel Reward (#55)", 1000055},
    {"Quest: The Night Watch Reward (#58)", 1000058},
    {"Quest: Cloth and Leather Armor Reward (#59)", 1000059},
    {"Quest: Kobold Candles Reward (#60)", 1000060},
    {"Quest: Shipment to Stormwind Reward (#61)", 1000061},
    {"Quest: The Forgotten Heirloom Reward (#64)", 1000064},
    {"Quest: The Legend of Stalvan Reward (#79)", 1000079},
    {"Quest: Red Linen Goods Reward (#83)", 1000083},
    {"Quest: Goldtooth Reward (#87)", 1000087},
    {"Quest: Princess Must Die! Reward (#88)", 1000088},
    {"Quest: The Everstill Bridge Reward (#89)", 1000089},
    {"Quest: Seasoned Wolf Kabobs Reward (#90)", 1000090},
    {"Quest: Redridge Goulash Reward (#92)", 1000092},
    {"Quest: Dusky Crab Cakes Reward (#93)", 1000093},
    {"Quest: Call of Water Reward (#96)", 1000096},
    {"Quest: The Legend of Stalvan Reward (#98)", 1000098},
    {"Quest: Arugal's Folly Reward (#99)", 1000099},
    {"Quest: The Totem of Infliction Reward (#101)", 1000101},
    {"Quest: Patrolling Westfall Reward (#102)", 1000102},
    {"Quest: Keeper of the Flame Reward (#103)", 1000103},
    {"Quest: The Coastal Menace Reward (#104)", 1000104},
    {"Quest: Alas, Andorhal Reward (#105)", 1000105},
    {"Quest: <TXT> Mystery Reward Reward (#108)", 1000108},
    {"Quest: The Escape Reward (#114)", 1000114},
    {"Quest: Dry Times Reward (#116)", 1000116},
    {"Quest: Thunderbrew Lager Reward (#117)", 1000117},
    {"Quest: Underbelly Scales Reward (#122)", 1000122},
    {"Quest: The Lost Tools Reward (#125)", 1000125},
    {"Quest: Howling in the Hills Reward (#126)", 1000126},
    {"Quest: Selling Fish Reward (#127)", 1000127},
    {"Quest: Delivering Daffodils Reward (#131)", 1000131},
    {"Quest: Captain Sanders' Hidden Treasure Reward (#140)", 1000140},
    {"Quest: Manhunt Reward (#147)", 1000147},
    {"Quest: Murloc Poachers Reward (#150)", 1000150},
    {"Quest: Poor Old Blanchy Reward (#151)", 1000151},
    {"Quest: Red Leather Bandanas Reward (#153)", 1000153},
    {"Quest: The Defias Brotherhood Reward (#166)", 1000166},
    {"Quest: Oh Brother. . . Reward (#167)", 1000167},
    {"Quest: Collecting Memories Reward (#168)", 1000168},
    {"Quest: A New Threat Reward (#170)", 1000170},
    {"Quest: A Warden of the Alliance Reward (#171)", 1000171},
    {"Quest: Wanted:  \"Hogger\" Reward (#176)", 1000176},
    {"Quest: Theocritus' Retrieval Reward (#178)", 1000178},
    {"Quest: Dwarven Outfitters Reward (#179)", 1000179},
    {"Quest: Look To The Stars Reward (#181)", 1000181},
    {"Quest: The Troll Cave Reward (#182)", 1000182},
    {"Quest: The Boar Hunter Reward (#183)", 1000183},
    {"Quest: Furlbrow's Deed Reward (#184)", 1000184},
    {"Quest: Tiger Mastery Reward (#188)", 1000188},
    {"Quest: Bloodscalp Ears Reward (#189)", 1000189},
    {"Quest: Panther Mastery Reward (#193)", 1000193},
    {"Quest: Raptor Mastery Reward (#197)", 1000197},
    {"Quest: Colonel Kurzen Reward (#202)", 1000202},
    {"Quest: Bad Medicine Reward (#204)", 1000204},
    {"Quest: Mai'Zoth Reward (#206)", 1000206},
    {"Quest: Big Game Hunter Reward (#208)", 1000208},
    {"Quest: Alas, Andorhal Reward (#211)", 1000211},
    {"Quest: Hostile Takeover Reward (#213)", 1000213},
    {"Quest: Red Silk Bandanas Reward (#214)", 1000214},
    {"Quest: In Defense of the King's Lands Reward (#217)", 1000217},
    {"Quest: The Stolen Journal Reward (#218)", 1000218},
    {"Quest: Missing In Action Reward (#219)", 1000219},
    {"Quest: Call of Water Reward (#220)", 1000220},
    {"Quest: Worgen in the Woods Reward (#223)", 1000223},
    {"Quest: In Defense of the King's Lands Reward (#224)", 1000224},
    {"Quest: Wolves at Our Heels Reward (#226)", 1000226},
    {"Quest: Morgan Ladimore Reward (#227)", 1000227},
    {"Quest: A Daughter's Love Reward (#231)", 1000231},
    {"Quest: Fueling the Demolishers Reward (#236)", 1000236},
    {"Quest: In Defense of the King's Lands Reward (#237)", 1000237},
    {"Quest: Eight-Legged Menaces Reward (#245)", 1000245},
    {"Quest: The Hunt Completed Reward (#247)", 1000247},
    {"Quest: Morganth Reward (#249)", 1000249},
    {"Quest: Translation to Ello Reward (#252)", 1000252},
    {"Quest: Bride of the Embalmer Reward (#253)", 1000253},
    {"Quest: WANTED: Chok'sul Reward (#256)", 1000256},
    {"Quest: A Hunter's Boast Reward (#257)", 1000257},
    {"Quest: A Hunter's Challenge Reward (#258)", 1000258},
    {"Quest: In Defense of the King's Lands Reward (#263)", 1000263},
    {"Quest: Blisters on The Land Reward (#275)", 1000275},
    {"Quest: Fire Taboo Reward (#277)", 1000277},
    {"Quest: Reclaiming Goods Reward (#281)", 1000281},
    {"Quest: A Dark Threat Looms Reward (#283)", 1000283},
    {"Quest: The Search Continues Reward (#284)", 1000284},
    {"Quest: Return the Statuette Reward (#286)", 1000286},
    {"Quest: Frostmane Hold Reward (#287)", 1000287},
    {"Quest: Cleansing the Eye Reward (#293)", 1000293},
    {"Quest: Ormer's Revenge Reward (#296)", 1000296},
    {"Quest: Gathering Idols Reward (#297)", 1000297},
    {"Quest: Uncovering the Past Reward (#299)", 1000299},
    {"Quest: A Grim Task Reward (#304)", 1000304},
    {"Quest: Filthy Paws Reward (#307)", 1000307},
    {"Quest: Protecting the Shipment Reward (#309)", 1000309},
    {"Quest: Tundra MacGrann's Stolen Stash Reward (#312)", 1000312},
    {"Quest: Protecting the Herd Reward (#314)", 1000314},
    {"Quest: The Perfect Stout Reward (#315)", 1000315},
    {"Quest: Return to Bellowfiz Reward (#320)", 1000320},
    {"Quest: Lightforge Iron Reward (#321)", 1000321},
    {"Quest: The Hidden Key Reward (#328)", 1000328},
    {"Quest: Report to Doren Reward (#331)", 1000331},
    {"Quest: Wine Shop Advert Reward (#332)", 1000332},
    {"Quest: The Green Hills of Stranglethorn Reward (#338)", 1000338},
    {"Quest: Chapter I Reward (#339)", 1000339},
    {"Quest: Chapter II Reward (#340)", 1000340},
    {"Quest: Chapter III Reward (#341)", 1000341},
    {"Quest: Chapter IV Reward (#342)", 1000342},
    {"Quest: Return to Kristoff Reward (#346)", 1000346},
    {"Quest: Stranglethorn Fever Reward (#348)", 1000348},
    {"Quest: Graverobbers Reward (#358)", 1000358},
    {"Quest: The Mindless Ones Reward (#364)", 1000364},
    {"Quest: A New Plague Reward (#367)", 1000367},
    {"Quest: A New Plague Reward (#368)", 1000368},
    {"Quest: A New Plague Reward (#369)", 1000369},
    {"Quest: At War With The Scarlet Crusade Reward (#372)", 1000372},
    {"Quest: Proof of Demise Reward (#374)", 1000374},
    {"Quest: The Chill of Death Reward (#375)", 1000375},
    {"Quest: The Damned Reward (#376)", 1000376},
    {"Quest: Crime and Punishment Reward (#377)", 1000377},
    {"Quest: The Fury Runs Deep Reward (#378)", 1000378},
    {"Quest: Slake That Thirst Reward (#379)", 1000379},
    {"Quest: Night Web's Hollow Reward (#380)", 1000380},
    {"Quest: The Scarlet Crusade Reward (#381)", 1000381},
    {"Quest: The Red Messenger Reward (#382)", 1000382},
    {"Quest: Beer Basted Boar Ribs Reward (#384)", 1000384},
    {"Quest: Crocolisk Hunting Reward (#385)", 1000385},
    {"Quest: What Comes Around... Reward (#386)", 1000386},
    {"Quest: An Audience with the King Reward (#396)", 1000396},
    {"Quest: You Have Served Us Well Reward (#397)", 1000397},
    {"Quest: Wanted: Maggot Eye Reward (#398)", 1000398},
    {"Quest: The Family Crypt Reward (#408)", 1000408},
    {"Quest: The Prodigal Lich Returns Reward (#411)", 1000411},
    {"Quest: Operation Recombobulation Reward (#412)", 1000412},
    {"Quest: Rejold's New Brew Reward (#415)", 1000415},
    {"Quest: Rat Catching Reward (#416)", 1000416},
    {"Quest: A Pilot's Revenge Reward (#417)", 1000417},
    {"Quest: Thelsamar Blood Sausages Reward (#418)", 1000418},
    {"Quest: The Lost Pilot Reward (#419)", 1000419},
    {"Quest: Ivar the Foul Reward (#425)", 1000425},
    {"Quest: The Mills Overrun Reward (#426)", 1000426},
    {"Quest: Wild Hearts Reward (#429)", 1000429},
    {"Quest: Candles of Beckoning Reward (#431)", 1000431},
    {"Quest: Escorting Erland Reward (#435)", 1000435},
    {"Quest: The Dead Fields Reward (#437)", 1000437},
    {"Quest: Assault on Fenris Isle Reward (#442)", 1000442},
    {"Quest: Thule Ravenclaw Reward (#446)", 1000446},
    {"Quest: A Recipe For Death Reward (#447)", 1000447},
    {"Quest: Report to Hadrec Reward (#448)", 1000448},
    {"Quest: A Recipe For Death Reward (#451)", 1000451},
    {"Quest: Pyrewood Ambush Reward (#452)", 1000452},
    {"Quest: The Balance of Nature Reward (#456)", 1000456},
    {"Quest: The Balance of Nature Reward (#457)", 1000457},
    {"Quest: The Woodland Protector Reward (#459)", 1000459},
    {"Quest: Search for Incendicite Reward (#466)", 1000466},
    {"Quest: Digging Through the Ooze Reward (#470)", 1000470},
    {"Quest: Apprentice's Duties Reward (#471)", 1000471},
    {"Quest: Defeat Nek'rosh Reward (#474)", 1000474},
    {"Quest: The Weaver Reward (#480)", 1000480},
    {"Quest: The Relics of Wakening Reward (#483)", 1000483},
    {"Quest: Ursal the Mauler Reward (#486)", 1000486},
    {"Quest: Zenn's Bidding Reward (#488)", 1000488},
    {"Quest: Wand to Bethor Reward (#491)", 1000491},
    {"Quest: The Rescue Reward (#498)", 1000498},
    {"Quest: Elixir of Pain Reward (#501)", 1000501},
    {"Quest: Crushridge Warmongers Reward (#504)", 1000504},
    {"Quest: Syndicate Assassins Reward (#505)", 1000505},
    {"Quest: Taretha's Gift Reward (#508)", 1000508},
    {"Quest: Elixir of Agony Reward (#509)", 1000509},
    {"Quest: Elixir of Agony Reward (#515)", 1000515},
    {"Quest: Beren's Peril Reward (#516)", 1000516},
    {"Quest: The Crown of Will Reward (#521)", 1000521},
    {"Quest: A Husband's Revenge Reward (#530)", 1000530},
    {"Quest: Vyrin's Revenge Reward (#531)", 1000531},
    {"Quest: Valik Reward (#535)", 1000535},
    {"Quest: Souvenirs of Death Reward (#546)", 1000546},
    {"Quest: Humbert's Sword Reward (#547)", 1000547},
    {"Quest: Battle of Hillsbrad Reward (#550)", 1000550},
    {"Quest: Soothing Turtle Bisque Reward (#555)", 1000555},
    {"Quest: Stormwind Ho! Reward (#562)", 1000562},
    {"Quest: Costly Menace Reward (#564)", 1000564},
    {"Quest: Bartolo's Yeti Fur Cloak Reward (#565)", 1000565},
    {"Quest: WANTED: Baron Vardus Reward (#566)", 1000566},
    {"Quest: Dangerous! Reward (#567)", 1000567},
    {"Quest: The Defense of Grom'gol Reward (#569)", 1000569},
    {"Quest: Mok'thardin's Enchantment Reward (#573)", 1000573},
    {"Quest: Keep An Eye Out Reward (#576)", 1000576},
    {"Quest: Stormwind Library Reward (#579)", 1000579},
    {"Quest: Whiskey Slim's Lost Grog Reward (#580)", 1000580},
    {"Quest: Headhunting Reward (#582)", 1000582},
    {"Quest: Saving Yenniku Reward (#592)", 1000592},
    {"Quest: Filling the Soul Gem Reward (#593)", 1000593},
    {"Quest: Bloody Bone Necklaces Reward (#596)", 1000596},
    {"Quest: Split Bone Necklace Reward (#598)", 1000598},
    {"Quest: Venture Company Mining Reward (#600)", 1000600},
    {"Quest: The Bloodsail Buccaneers Reward (#608)", 1000608},
    {"Quest: The Curse of the Tides Reward (#611)", 1000611},
    {"Quest: Cracking Maury's Foot Reward (#613)", 1000613},
    {"Quest: The Captain's Chest Reward (#614)", 1000614},
    {"Quest: Akiris by the Bundle Reward (#617)", 1000617},
    {"Quest: Facing Negolash Reward (#618)", 1000618},
    {"Quest: Zanzil's Secret Reward (#621)", 1000621},
    {"Quest: Return to Corporal Kaleb Reward (#622)", 1000622},
    {"Quest: Cortello's Riddle Reward (#626)", 1000626},
    {"Quest: Excelsior Reward (#628)", 1000628},
    {"Quest: Message in a Bottle Reward (#630)", 1000630},
    {"Quest: The Thandol Span Reward (#633)", 1000633},
    {"Quest: Trol'kalar Reward (#646)", 1000646},
    {"Quest: Rescue OOX-17/TN! Reward (#648)", 1000648},
    {"Quest: Summoning the Princess Reward (#656)", 1000656},
    {"Quest: Hints of a New Plague? Reward (#661)", 1000661},
    {"Quest: Deep Sea Salvage Reward (#662)", 1000662},
    {"Quest: Drowned Sorrows Reward (#664)", 1000664},
    {"Quest: Sunken Treasure Reward (#666)", 1000666},
    {"Quest: Death From Below Reward (#667)", 1000667},
    {"Quest: Foul Magics Reward (#673)", 1000673},
    {"Quest: Call to Arms Reward (#679)", 1000679},
    {"Quest: The Real Threat Reward (#680)", 1000680},
    {"Quest: Stromgarde Badges Reward (#682)", 1000682},
    {"Quest: Wanted!  Marez Cowl Reward (#684)", 1000684},
    {"Quest: Wanted!  Otto and Falconcrest Reward (#685)", 1000685},
    {"Quest: Malin's Request Reward (#697)", 1000697},
    {"Quest: A King's Tribute Reward (#700)", 1000700},
    {"Quest: Barbecued Buzzard Wings Reward (#703)", 1000703},
    {"Quest: Agmond's Fate Reward (#704)", 1000704},
    {"Quest: Pearl Diving Reward (#705)", 1000705},
    {"Quest: Fiery Blaze Enchantments Reward (#706)", 1000706},
    {"Quest: Solution to Doom Reward (#709)", 1000709},
    {"Quest: Liquid Stone Reward (#715)", 1000715},
    {"Quest: Stone Is Better than Cloth Reward (#716)", 1000716},
    {"Quest: Tremors of the Earth Reward (#717)", 1000717},
    {"Quest: A Dwarf and His Tools Reward (#719)", 1000719},
    {"Quest: Scrounging Reward (#733)", 1000733},
    {"Quest: Forbidden Knowledge Reward (#737)", 1000737},
    {"Quest: Find Agmond Reward (#738)", 1000738},
    {"Quest: Murdaloc Reward (#739)", 1000739},
    {"Quest: The Absent Minded Prospector Reward (#741)", 1000741},
    {"Quest: Preparation for Ceremony Reward (#744)", 1000744},
    {"Quest: Sharing the Land Reward (#745)", 1000745},
    {"Quest: Dwarven Digging Reward (#746)", 1000746},
    {"Quest: The Hunt Begins Reward (#747)", 1000747},
    {"Quest: The Hunt Continues Reward (#750)", 1000750},
    {"Quest: Rite of Strength Reward (#757)", 1000757},
    {"Quest: Thunderhorn Cleansing Reward (#758)", 1000758},
    {"Quest: Wildmane Cleansing Reward (#760)", 1000760},
    {"Quest: An Ambassador of Evil Reward (#762)", 1000762},
    {"Quest: Supervisor Fizsprocket Reward (#765)", 1000765},
    {"Quest: Mazzranache Reward (#766)", 1000766},
    {"Quest: Gathering Leather Reward (#768)", 1000768},
    {"Quest: Kodo Hide Bag Reward (#769)", 1000769},
    {"Quest: The Demon Scarred Cloak Reward (#770)", 1000770},
    {"Quest: Rite of Vision Reward (#772)", 1000772},
    {"Quest: Rites of the Earthmother Reward (#776)", 1000776},
    {"Quest: This Is Going to Be Hard Reward (#778)", 1000778},
    {"Quest: The Battleboars Reward (#780)", 1000780},
    {"Quest: Attack on Camp Narache Reward (#781)", 1000781},
    {"Quest: Thwarting Kolkar Aggression Reward (#786)", 1000786},
    {"Quest: Cutting Teeth Reward (#788)", 1000788},
    {"Quest: Sting of the Scorpid Reward (#789)", 1000789},
    {"Quest: Carry Your Weight Reward (#791)", 1000791},
    {"Quest: Vile Familiars Reward (#792)", 1000792},
    {"Quest: Broken Alliances Reward (#793)", 1000793},
    {"Quest: Burning Blade Medallion Reward (#794)", 1000794},
    {"Quest: Sarkoth Reward (#804)", 1000804},
    {"Quest: Dark Storms Reward (#806)", 1000806},
    {"Quest: Minshina's Skull Reward (#808)", 1000808},
    {"Quest: Need for a Cure Reward (#812)", 1000812},
    {"Quest: Finding the Antidote Reward (#813)", 1000813},
    {"Quest: Break a Few Eggs Reward (#815)", 1000815},
    {"Quest: Lost But Not Forgotten Reward (#816)", 1000816},
    {"Quest: A Solvent Spirit Reward (#818)", 1000818},
    {"Quest: Chen's Empty Keg Reward (#821)", 1000821},
    {"Quest: Chen's Empty Keg Reward (#822)", 1000822},
    {"Quest: Je'neu of the Earthen Ring Reward (#824)", 1000824},
    {"Quest: From The Wreckage.... Reward (#825)", 1000825},
    {"Quest: Zalazane Reward (#826)", 1000826},
    {"Quest: Skull Rock Reward (#827)", 1000827},
    {"Quest: Securing the Lines Reward (#835)", 1000835},
    {"Quest: Rescue OOX-09/HL! Reward (#836)", 1000836},
    {"Quest: Another Power Source? Reward (#841)", 1000841},
    {"Quest: Guile of the Raptor Reward (#847)", 1000847},
    {"Quest: Revenge of Gann Reward (#849)", 1000849},
    {"Quest: Hezrul Bloodmark Reward (#852)", 1000852},
    {"Quest: Apothecary Zamah Reward (#853)", 1000853},
    {"Quest: Centaur Bracers Reward (#855)", 1000855},
    {"Quest: Dig Rat Stew Reward (#862)", 1000862},
    {"Quest: The Escape Reward (#863)", 1000863},
    {"Quest: Return to Apothecary Zinge Reward (#864)", 1000864},
    {"Quest: Raptor Horns Reward (#865)", 1000865},
    {"Quest: Root Samples Reward (#866)", 1000866},
    {"Quest: Egg Hunt Reward (#868)", 1000868},
    {"Quest: The Disruption Ends Reward (#872)", 1000872},
    {"Quest: Isha Awak Reward (#873)", 1000873},
    {"Quest: Serena Bloodfeather Reward (#876)", 1000876},
    {"Quest: Stolen Booty Reward (#888)", 1000888},
    {"Quest: The Guns of Northwatch Reward (#891)", 1000891},
    {"Quest: Weapons of Choice Reward (#893)", 1000893},
    {"Quest: Miner's Fortune Reward (#896)", 1000896},
    {"Quest: Free From the Hold Reward (#898)", 1000898},
    {"Quest: Consumed by Hatred Reward (#899)", 1000899},
    {"Quest: Samophlange Reward (#902)", 1000902},
    {"Quest: Betrayal from Within Reward (#906)", 1000906},
    {"Quest: Baron Aquanis Reward (#909)", 1000909},
    {"Quest: Stonesplinter Trogg Disguise Reward (#912)", 1000912},
    {"Quest: Cry of the Thunderhawk Reward (#913)", 1000913},
    {"Quest: Leaders of the Fang Reward (#914)", 1000914},
    {"Quest: Webwood Venom Reward (#916)", 1000916},
    {"Quest: Webwood Egg Reward (#917)", 1000917},
    {"Quest: Timberling Seeds Reward (#918)", 1000918},
    {"Quest: Timberling Sprouts Reward (#919)", 1000919},
    {"Quest: Tumors Reward (#923)", 1000923},
    {"Quest: The Demon Seed Reward (#924)", 1000924},
    {"Quest: Flawed Power Stone Reward (#926)", 1000926},
    {"Quest: Twisted Hatred Reward (#932)", 1000932},
    {"Quest: Crown of the Earth Reward (#935)", 1000935},
    {"Quest: The Enchanted Glade Reward (#937)", 1000937},
    {"Quest: Mist Reward (#938)", 1000938},
    {"Quest: Planting the Heart Reward (#941)", 1000941},
    {"Quest: The Absent Minded Prospector Reward (#943)", 1000943},
    {"Quest: Cave Mushrooms Reward (#947)", 1000947},
    {"Quest: Mathystra Relics Reward (#951)", 1000951},
    {"Quest: Bashal'Aran Reward (#957)", 1000957},
    {"Quest: Tools of the Highborne Reward (#958)", 1000958},
    {"Quest: Onu is meditating Reward (#960)", 1000960},
    {"Quest: Onu is meditating Reward (#961)", 1000961},
    {"Quest: Serpentbloom Reward (#962)", 1000962},
    {"Quest: For Love Eternal Reward (#963)", 1000963},
    {"Quest: Knowledge in the Deeps Reward (#971)", 1000971},
    {"Quest: Water Sapta Reward (#972)", 1000972},
    {"Quest: The Tower of Althalaxx Reward (#973)", 1000973},
    {"Quest: Cache of Mau'ari Reward (#975)", 1000975},
    {"Quest: Supplies to Auberdine Reward (#976)", 1000976},
    {"Quest: The Tower of Althalaxx Reward (#981)", 1000981},
    {"Quest: Deep Ocean, Vast Sea Reward (#982)", 1000982},
    {"Quest: Escape Through Force Reward (#994)", 1000994},
    {"Quest: Escape Through Stealth Reward (#995)", 1000995},
    {"Quest: Buzzbox 525 Reward (#1003)", 1001003},
    {"Quest: Ruuzel Reward (#1009)", 1001009},
    {"Quest: Insane Druids Reward (#1012)", 1001012},
    {"Quest: The Book of Ur Reward (#1013)", 1001013},
    {"Quest: Arugal Must Die Reward (#1014)", 1001014},
    {"Quest: Mage Summoner Reward (#1017)", 1001017},
    {"Quest: An Aggressive Defense Reward (#1025)", 1001025},
    {"Quest: Raene's Cleansing Reward (#1028)", 1001028},
    {"Quest: The Branch of Cenarius Reward (#1031)", 1001031},
    {"Quest: Fallen Sky Lake Reward (#1035)", 1001035},
    {"Quest: Answered Questions Reward (#1044)", 1001044},
    {"Quest: Raene's Cleansing Reward (#1046)", 1001046},
    {"Quest: Into The Scarlet Monastery Reward (#1048)", 1001048},
    {"Quest: Compendium of the Fallen Reward (#1049)", 1001049},
    {"Quest: Mythology of the Titans Reward (#1050)", 1001050},
    {"Quest: Vorrel's Revenge Reward (#1051)", 1001051},
    {"Quest: In the Name of the Light Reward (#1053)", 1001053},
    {"Quest: Culling the Threat Reward (#1054)", 1001054},
    {"Quest: Jin'Zil's Forest Magic Reward (#1058)", 1001058},
    {"Quest: Reclaiming the Charred Vale Reward (#1059)", 1001059},
    {"Quest: Retrieval for Mauren Reward (#1078)", 1001078},
    {"Quest: Reception from Tyrande Reward (#1081)", 1001081},
    {"Quest: The Den Reward (#1089)", 1001089},
    {"Quest: Gerenzo's Orders Reward (#1092)", 1001092},
    {"Quest: Gerenzo Wrenchwhistle Reward (#1096)", 1001096},
    {"Quest: Deathstalkers in Shadowfang Reward (#1098)", 1001098},
    {"Quest: Goblins Win! Reward (#1099)", 1001099},
    {"Quest: The Crone of the Kraul Reward (#1101)", 1001101},
    {"Quest: A Vengeful Fate Reward (#1102)", 1001102},
    {"Quest: Fool's Stout Reward (#1127)", 1001127},
    {"Quest: Highperch Venom Reward (#1135)", 1001135},
    {"Quest: Frostmaw Reward (#1136)", 1001136},
    {"Quest: News for Fizzle Reward (#1137)", 1001137},
    {"Quest: Fruit of the Sea Reward (#1138)", 1001138},
    {"Quest: The Lost Tablets of Will Reward (#1139)", 1001139},
    {"Quest: The Family and the Fishing Pole Reward (#1141)", 1001141},
    {"Quest: Mortality Wanes Reward (#1142)", 1001142},
    {"Quest: Willix the Importer Reward (#1144)", 1001144},
    {"Quest: A New Ore Sample Reward (#1153)", 1001153},
    {"Quest: To Steal From Thieves Reward (#1164)", 1001164},
    {"Quest: Overlord Mok'Morokk's Concern Reward (#1166)", 1001166},
    {"Quest: Army of the Black Dragon Reward (#1168)", 1001168},
    {"Quest: Identifying the Brood Reward (#1169)", 1001169},
    {"Quest: The Brood of Onyxia Reward (#1172)", 1001172},
    {"Quest: Challenge Overlord Mok'Morokk Reward (#1173)", 1001173},
    {"Quest: Gnomes Win! Reward (#1174)", 1001174},
    {"Quest: Hungry! Reward (#1177)", 1001177},
    {"Quest: Parts of the Swarm Reward (#1184)", 1001184},
    {"Quest: Safety First Reward (#1189)", 1001189},
    {"Quest: The Sacred Flame Reward (#1197)", 1001197},
    {"Quest: Twilight Falls Reward (#1199)", 1001199},
    {"Quest: Blackfathom Villainy Reward (#1200)", 1001200},
    {"Quest: Jarl Needs a Blade Reward (#1203)", 1001203},
    {"Quest: Marsh Frog Legs Reward (#1218)", 1001218},
    {"Quest: Blueleaf Tubers Reward (#1221)", 1001221},
    {"Quest: Stinky's Escape Reward (#1222)", 1001222},
    {"Quest: ... and Bugs Reward (#1258)", 1001258},
    {"Quest: The Missing Diplomat Reward (#1267)", 1001267},
    {"Quest: Stinky's Escape Reward (#1270)", 1001270},
    {"Quest: Feast at the Blue Recluse Reward (#1271)", 1001271},
    {"Quest: Questioning Reethe Reward (#1273)", 1001273},
    {"Quest: Researching the Corruption Reward (#1275)", 1001275},
    {"Quest: Unfinished Gordok Business Reward (#1318)", 1001318},
    {"Quest: Sample for Helbrim Reward (#1358)", 1001358},
    {"Quest: Mazen's Behest Reward (#1364)", 1001364},
    {"Quest: Centaur Bounty Reward (#1366)", 1001366},
    {"Quest: Stealing Supplies Reward (#1370)", 1001370},
    {"Quest: Khan Hratha Reward (#1380)", 1001380},
    {"Quest: Khan Hratha Reward (#1381)", 1001381},
    {"Quest: Nothing But The Truth Reward (#1383)", 1001383},
    {"Quest: Centaur Bounty Reward (#1387)", 1001387},
    {"Quest: Galen's Escape Reward (#1393)", 1001393},
    {"Quest: Final Passage Reward (#1394)", 1001394},
    {"Quest: The Lost Supplies Reward (#1423)", 1001423},
    {"Quest: Threat From the Sea Reward (#1427)", 1001427},
    {"Quest: Fresh Meat Reward (#1430)", 1001430},
    {"Quest: Alliance Relations Reward (#1436)", 1001436},
    {"Quest: Return to Vahlarriel Reward (#1440)", 1001440},
    {"Quest: Seeking the Kor Gem Reward (#1442)", 1001442},
    {"Quest: The Temple of Atal'Hakkar Reward (#1445)", 1001445},
    {"Quest: Jammal'an the Prophet Reward (#1446)", 1001446},
    {"Quest: The Karnitol Shipwreck Reward (#1457)", 1001457},
    {"Quest: Earth Sapta Reward (#1462)", 1001462},
    {"Quest: Earth Sapta Reward (#1463)", 1001463},
    {"Quest: Fire Sapta Reward (#1464)", 1001464},
    {"Quest: Reagents for Reclaimers Inc. Reward (#1467)", 1001467},
    {"Quest: The Binding Reward (#1474)", 1001474},
    {"Quest: Into The Temple of Atal'Hakkar Reward (#1475)", 1001475},
    {"Quest: Deviate Hides Reward (#1486)", 1001486},
    {"Quest: Deviate Eradication Reward (#1487)", 1001487},
    {"Quest: The Corrupter Reward (#1488)", 1001488},
    {"Quest: Vile Familiars Reward (#1499)", 1001499},
    {"Quest: Forged Steel Reward (#1503)", 1001503},
    {"Quest: The Binding Reward (#1513)", 1001513},
    {"Quest: Call of Earth Reward (#1518)", 1001518},
    {"Quest: Call of Earth Reward (#1521)", 1001521},
    {"Quest: Call of Fire Reward (#1525)", 1001525},
    {"Quest: Call of Fire Reward (#1526)", 1001526},
    {"Quest: Call of Fire Reward (#1527)", 1001527},
    {"Quest: Call of Air Reward (#1531)", 1001531},
    {"Quest: Call of Air Reward (#1532)", 1001532},
    {"Quest: Flash Bomb Recipe Reward (#1559)", 1001559},
    {"Quest: Tooga's Quest Reward (#1560)", 1001560},
    {"Quest: Supplying the Front Reward (#1578)", 1001578},
    {"Quest: Electropellers Reward (#1580)", 1001580},
    {"Quest: Elixirs for the Bladeleafs Reward (#1581)", 1001581},
    {"Quest: Moonglow Vest Reward (#1582)", 1001582},
    {"Quest: Gearing Redridge Reward (#1618)", 1001618},
    {"Quest: The Tome of Divinity Reward (#1641)", 1001641},
    {"Quest: The Tome of Divinity Reward (#1645)", 1001645},
    {"Quest: The Tome of Valor Reward (#1652)", 1001652},
    {"Quest: Bailor's Ore Shipment Reward (#1655)", 1001655},
    {"Quest: A Task Unfinished Reward (#1656)", 1001656},
    {"Quest: Stinking Up Southshore Reward (#1657)", 1001657},
    {"Quest: Crashing the Wickerman Festival Reward (#1658)", 1001658},
    {"Quest: Dead-tooth Jack Reward (#1667)", 1001667},
    {"Quest: Grey Iron Weapons Reward (#1682)", 1001682},
    {"Quest: Weapons of Elunite Reward (#1693)", 1001693},
    {"Quest: The Shieldsmith Reward (#1702)", 1001702},
    {"Quest: Grimand's Armor Reward (#1706)", 1001706},
    {"Quest: Water Pouch Bounty Reward (#1707)", 1001707},
    {"Quest: Klockmort's Creation Reward (#1709)", 1001709},
    {"Quest: Mathiel's Armor Reward (#1711)", 1001711},
    {"Quest: Essence of the Exile Reward (#1714)", 1001714},
    {"Quest: The Binding Reward (#1739)", 1001739},
    {"Quest: The Orb of Soran'ruk Reward (#1740)", 1001740},
    {"Quest: Furen's Armor Reward (#1782)", 1001782},
    {"Quest: The Symbol of Life Reward (#1789)", 1001789},
    {"Quest: The Symbol of Life Reward (#1790)", 1001790},
    {"Quest: Whirlwind Weapon Reward (#1792)", 1001792},
    {"Quest: The Tome of Valor Reward (#1793)", 1001793},
    {"Quest: The Tome of Valor Reward (#1794)", 1001794},
    {"Quest: The Binding Reward (#1795)", 1001795},
    {"Quest: Heirloom Weapon Reward (#1822)", 1001822},
    {"Quest: Trial at the Field of Giants Reward (#1824)", 1001824},
    {"Quest: Brutal Gauntlets Reward (#1843)", 1001843},
    {"Quest: Brutal Helm Reward (#1845)", 1001845},
    {"Quest: Brutal Legguards Reward (#1847)", 1001847},
    {"Quest: Brutal Hauberk Reward (#1848)", 1001848},
    {"Quest: The Shattered Hand Reward (#1858)", 1001858},
    {"Quest: Mirror Lake Reward (#1861)", 1001861},
    {"Quest: Water Pouch Bounty Reward (#1878)", 1001878},
    {"Quest: Mage-tastic Gizmonitor Reward (#1880)", 1001880},
    {"Quest: The Balnir Farmstead Reward (#1882)", 1001882},
    {"Quest: Ju-Ju Heaps Reward (#1884)", 1001884},
    {"Quest: Manaweave Robe Reward (#1941)", 1001941},
    {"Quest: Astral Knot Garment Reward (#1942)", 1001942},
    {"Quest: Nether-lace Garment Reward (#1946)", 1001946},
    {"Quest: Mage's Wand Reward (#1952)", 1001952},
    {"Quest: Celestial Power Reward (#1958)", 1001958},
    {"Quest: Spellfire Robes Reward (#1962)", 1001962},
    {"Quest: The Deathstalkers Reward (#1978)", 1001978},
    {"Quest: Bingles' Missing Supplies Reward (#2038)", 1002038},
    {"Quest: Underground Assault Reward (#2040)", 1002040},
    {"Quest: Gyromast's Revenge Reward (#2078)", 1002078},
    {"Quest: Tharnariun's Hope Reward (#2139)", 1002139},
    {"Quest: Rest and Relaxation Reward (#2158)", 1002158},
    {"Quest: Dolanaar Delivery Reward (#2159)", 1002159},
    {"Quest: Supplies to Tannok Reward (#2160)", 1002160},
    {"Quest: A Peon's Burden Reward (#2161)", 1002161},
    {"Quest: Easy Strider Living Reward (#2178)", 1002178},
    {"Quest: Uldaman Reagent Run Reward (#2202)", 1002202},
    {"Quest: Snatch and Grab Reward (#2206)", 1002206},
    {"Quest: Onin's Report Reward (#2239)", 1002239},
    {"Quest: The Hidden Chamber Reward (#2240)", 1002240},
    {"Quest: Destiny Calls Reward (#2242)", 1002242},
    {"Quest: Alther's Mill Reward (#2282)", 1002282},
    {"Quest: Necklace Recovery, Take 3 Reward (#2341)", 1002341},
    {"Quest: Horns of Nez'ra Reward (#2358)", 1002358},
    {"Quest: Klaven's Tower Reward (#2359)", 1002359},
    {"Quest: Restoring the Necklace Reward (#2361)", 1002361},
    {"Quest: Plundering the Plunderers Reward (#2381)", 1002381},
    {"Quest: The Sprouted Fronds Reward (#2399)", 1002399},
    {"Quest: Power Stones Reward (#2418)", 1002418},
    {"Quest: The Platinum Discs Reward (#2439)", 1002439},
    {"Quest: The Platinum Discs Reward (#2440)", 1002440},
    {"Quest: Deep Cover Reward (#2458)", 1002458},
    {"Quest: Mission: Possible But Not Probable Reward (#2478)", 1002478},
    {"Quest: Hinott's Assistance Reward (#2480)", 1002480},
    {"Quest: Oakenscowl Reward (#2499)", 1002499},
    {"Quest: Sathrah's Sacrifice Reward (#2520)", 1002520},
    {"Quest: To Serve Kum'isha Reward (#2521)", 1002521},
    {"Quest: Kum'isha's Endeavors Reward (#2522)", 1002522},
    {"Quest: Druid of the Claw Reward (#2561)", 1002561},
    {"Quest: Snickerfang Jowls Reward (#2581)", 1002581},
    {"Quest: Rage of Ages Reward (#2582)", 1002582},
    {"Quest: A Boar's Vitality Reward (#2583)", 1002583},
    {"Quest: Spirit of the Boar Reward (#2584)", 1002584},
    {"Quest: The Decisive Striker Reward (#2585)", 1002585},
    {"Quest: Salt of the Scorpok Reward (#2586)", 1002586},
    {"Quest: The Basilisk's Bite Reward (#2601)", 1002601},
    {"Quest: Infallible Mind Reward (#2602)", 1002602},
    {"Quest: Vulture's Vigor Reward (#2603)", 1002603},
    {"Quest: Spiritual Domination Reward (#2604)", 1002604},
    {"Quest: The Touch of Zanzil Reward (#2609)", 1002609},
    {"Quest: Noggenfogger Elixir Reward (#2662)", 1002662},
    {"Quest: Heroes of Old Reward (#2701)", 1002701},
    {"Quest: The Super Egg-O-Matic Reward (#2741)", 1002741},
    {"Quest: An Extraordinary Egg Reward (#2747)", 1002747},
    {"Quest: A Fine Egg Reward (#2748)", 1002748},
    {"Quest: An Ordinary Egg Reward (#2749)", 1002749},
    {"Quest: Barbaric Battlements Reward (#2751)", 1002751},
    {"Quest: On Iron Pauldrons Reward (#2752)", 1002752},
    {"Quest: Trampled Under Foot Reward (#2753)", 1002753},
    {"Quest: Horns of Frenzy Reward (#2754)", 1002754},
    {"Quest: Joys of Omosh Reward (#2755)", 1002755},
    {"Quest: The Origins of Smithing Reward (#2758)", 1002758},
    {"Quest: Smelt On, Smelt Off Reward (#2761)", 1002761},
    {"Quest: The Great Silver Deceiver Reward (#2762)", 1002762},
    {"Quest: The Art of the Imbue Reward (#2763)", 1002763},
    {"Quest: Expert Blacksmith! Reward (#2765)", 1002765},
    {"Quest: Rescue OOX-22/FE! Reward (#2767)", 1002767},
    {"Quest: Divino-matic Rod Reward (#2768)", 1002768},
    {"Quest: Gahz'rilla Reward (#2770)", 1002770},
    {"Quest: The Mark of Quality Reward (#2821)", 1002821},
    {"Quest: The Mark of Quality Reward (#2822)", 1002822},
    {"Quest: Rig Wars Reward (#2841)", 1002841},
    {"Quest: Gnomer-gooooone! Reward (#2843)", 1002843},
    {"Quest: Wandering Shay Reward (#2845)", 1002845},
    {"Quest: Tiara of the Deep Reward (#2846)", 1002846},
    {"Quest: Wild Leather Shoulders Reward (#2848)", 1002848},
    {"Quest: Wild Leather Vest Reward (#2849)", 1002849},
    {"Quest: Wild Leather Helmet Reward (#2850)", 1002850},
    {"Quest: Wild Leather Boots Reward (#2851)", 1002851},
    {"Quest: Wild Leather Leggings Reward (#2852)", 1002852},
    {"Quest: Master of the Wild Leather Reward (#2853)", 1002853},
    {"Quest: Wild Leather Shoulders Reward (#2855)", 1002855},
    {"Quest: Wild Leather Vest Reward (#2856)", 1002856},
    {"Quest: Wild Leather Helmet Reward (#2857)", 1002857},
    {"Quest: Wild Leather Boots Reward (#2858)", 1002858},
    {"Quest: Wild Leather Leggings Reward (#2859)", 1002859},
    {"Quest: Master of the Wild Leather Reward (#2860)", 1002860},
    {"Quest: Delivering the Relic Reward (#2871)", 1002871},
    {"Quest: Deliver to MacKinley Reward (#2874)", 1002874},
    {"Quest: The Stave of Equinex Reward (#2879)", 1002879},
    {"Quest: Cuergo's Gold Reward (#2882)", 1002882},
    {"Quest: The Battle Plans Reward (#2903)", 1002903},
    {"Quest: A Fine Mess Reward (#2904)", 1002904},
    {"Quest: Gyrodrillmatic Excavationators Reward (#2928)", 1002928},
    {"Quest: The Grand Betrayal Reward (#2929)", 1002929},
    {"Quest: Data Rescue Reward (#2930)", 1002930},
    {"Quest: Venom to the Undercity Reward (#2938)", 1002938},
    {"Quest: The Morrow Stone Reward (#2942)", 1002942},
    {"Quest: Gnome Improvement Reward (#2948)", 1002948},
    {"Quest: Nogg's Ring Redo Reward (#2950)", 1002950},
    {"Quest: The Sparklematic 5200! Reward (#2952)", 1002952},
    {"Quest: More Sparklematic Action Reward (#2953)", 1002953},
    {"Quest: A Future Task Reward (#2964)", 1002964},
    {"Quest: A Future Task Reward (#2968)", 1002968},
    {"Quest: Doling Justice Reward (#2972)", 1002972},
    {"Quest: A Grim Discovery Reward (#2976)", 1002976},
    {"Quest: Gordunni Cobalt Reward (#2987)", 1002987},
    {"Quest: Saving Sharpbeak Reward (#2994)", 1002994},
    {"Quest: Dark Heart Reward (#3062)", 1003062},
    {"Quest: Weapons of Spirit Reward (#3129)", 1003129},
    {"Quest: Gahz'ridian Reward (#3161)", 1003161},
    {"Quest: At Last! Reward (#3201)", 1003201},
    {"Quest: Stolen Silver Reward (#3281)", 1003281},
    {"Quest: Mura Runetotem Reward (#3301)", 1003301},
    {"Quest: Did You Lose This? Reward (#3321)", 1003321},
    {"Quest: Bring the End Reward (#3341)", 1003341},
    {"Quest: In Nightmares Reward (#3369)", 1003369},
    {"Quest: In Nightmares Reward (#3370)", 1003370},
    {"Quest: The Essence of Eranikus Reward (#3373)", 1003373},
    {"Quest: Replacement Phial Reward (#3375)", 1003375},
    {"Quest: Break Sharptusk! Reward (#3376)", 1003376},
    {"Quest: Prayer to Elune Reward (#3378)", 1003378},
    {"Quest: Shadoweaver Reward (#3379)", 1003379},
    {"Quest: The Undermarket Reward (#3385)", 1003385},
    {"Quest: The Undermarket Reward (#3402)", 1003402},
    {"Quest: Secret of the Circle Reward (#3447)", 1003447},
    {"Quest: Signal for Pickup Reward (#3451)", 1003451},
    {"Quest: The Torch of Retribution Reward (#3454)", 1003454},
    {"Quest: Return to Tymor Reward (#3461)", 1003461},
    {"Quest: Set Them Ablaze! Reward (#3463)", 1003463},
    {"Quest: Trinkets... Reward (#3481)", 1003481},
    {"Quest: Signal for Pickup Reward (#3483)", 1003483},
    {"Quest: Everything Counts In Large Amounts Reward (#3501)", 1003501},
    {"Quest: One Draenei's Junk... Reward (#3502)", 1003502},
    {"Quest: Betrayed Reward (#3507)", 1003507},
    {"Quest: Horde Presence Reward (#3514)", 1003514},
    {"Quest: Iverron's Antidote Reward (#3522)", 1003522},
    {"Quest: Extinguishing the Idol Reward (#3525)", 1003525},
    {"Quest: The God Hakkar Reward (#3528)", 1003528},
    {"Quest: Rise, Obsidion! Reward (#3566)", 1003566},
    {"Quest: Kim'jael Indeed! Reward (#3601)", 1003601},
    {"Quest: Enchanted Azsharite Fel Weaponry Reward (#3625)", 1003625},
    {"Quest: You Are Rakh'likh, Demon Reward (#3628)", 1003628},
    {"Quest: Bring the Light Reward (#3636)", 1003636},
    {"Quest: The Smoldering Ruins of Thaurissan Reward (#3701)", 1003701},
    {"Quest: An OOX of Your Own Reward (#3721)", 1003721},
    {"Quest: Morrowgrain Research Reward (#3781)", 1003781},
    {"Quest: Morrowgrain Research Reward (#3782)", 1003782},
    {"Quest: Morrowgrain Research Reward (#3785)", 1003785},
    {"Quest: Morrowgrain Research Reward (#3786)", 1003786},
    {"Quest: The Mystery of Morrowgrain Reward (#3791)", 1003791},
    {"Quest: Morrowgrain to Feathermoon Stronghold Reward (#3792)", 1003792},
    {"Quest: Dark Iron Legacy Reward (#3802)", 1003802},
    {"Quest: Morrowgrain to Darnassus Reward (#3803)", 1003803},
    {"Quest: Morrowgrain to Thunder Bluff Reward (#3804)", 1003804},
    {"Quest: Krom'Grul Reward (#3822)", 1003822},
    {"Quest: Ogre Head On A Stick = Party Reward (#3825)", 1003825},
    {"Quest: Roll the Bones Reward (#3882)", 1003882},
    {"Quest: Rattling the Rattlecages Reward (#3901)", 1003901},
    {"Quest: Scavenging Deathknell Reward (#3902)", 1003902},
    {"Quest: Grape Manifest Reward (#3905)", 1003905},
    {"Quest: Disharmony of Fire Reward (#3907)", 1003907},
    {"Quest: The Last Element Reward (#3911)", 1003911},
    {"Quest: Samophlange Manual Reward (#3924)", 1003924},
    {"Quest: It's Dangerous to Go Alone Reward (#3962)", 1003962},
    {"Quest: The Princess Saved? Reward (#4004)", 1004004},
    {"Quest: A Taste of Flame Reward (#4024)", 1004024},
    {"Quest: The Videre Elixir Reward (#4041)", 1004041},
    {"Quest: The Rise of the Machines Reward (#4063)", 1004063},
    {"Quest: Salve via Hunting Reward (#4103)", 1004103},
    {"Quest: Salve via Mining Reward (#4104)", 1004104},
    {"Quest: Salve via Gathering Reward (#4105)", 1004105},
    {"Quest: Salve via Skinning Reward (#4106)", 1004106},
    {"Quest: Salve via Disenchanting Reward (#4107)", 1004107},
    {"Quest: Salve via Hunting Reward (#4108)", 1004108},
    {"Quest: Salve via Mining Reward (#4109)", 1004109},
    {"Quest: Salve via Gathering Reward (#4110)", 1004110},
    {"Quest: Salve via Skinning Reward (#4111)", 1004111},
    {"Quest: Salve via Disenchanting Reward (#4112)", 1004112},
    {"Quest: Hurley Blackbreath Reward (#4126)", 1004126},
    {"Quest: Operation: Death to Angerforge Reward (#4132)", 1004132},
    {"Quest: Lost Thunderbrew Recipe Reward (#4134)", 1004134},
    {"Quest: Ribbly Screwspigot Reward (#4136)", 1004136},
    {"Quest: Bloodpetal Zapper Reward (#4148)", 1004148},
    {"Quest: Recipe of the Kaldorei Reward (#4161)", 1004161},
    {"Quest: The Love Potion Reward (#4201)", 1004201},
    {"Quest: Abandoned Hope Reward (#4242)", 1004242},
    {"Quest: Ancient Spirit Reward (#4261)", 1004261},
    {"Quest: Incendius! Reward (#4263)", 1004263},
    {"Quest: A Hero's Welcome Reward (#4266)", 1004266},
    {"Quest: Rise of the Silithid Reward (#4267)", 1004267},
    {"Quest: The Good Stuff Reward (#4286)", 1004286},
    {"Quest: The Bait for Lar'korwi Reward (#4292)", 1004292},
    {"Quest: Becoming a Parent Reward (#4298)", 1004298},
    {"Quest: Bone-Bladed Weapons Reward (#4300)", 1004300},
    {"Quest: The Mighty U'cha Reward (#4301)", 1004301},
    {"Quest: Making Sense of It Reward (#4321)", 1004321},
    {"Quest: Jail Break! Reward (#4322)", 1004322},
    {"Quest: The Princess's Surprise Reward (#4363)", 1004363},
    {"Quest: Crystal Restore Reward (#4381)", 1004381},
    {"Quest: Crystal Force Reward (#4382)", 1004382},
    {"Quest: Crystal Ward Reward (#4383)", 1004383},
    {"Quest: Crystal Yield Reward (#4384)", 1004384},
    {"Quest: Crystal Charge Reward (#4385)", 1004385},
    {"Quest: Crystal Spire Reward (#4386)", 1004386},
    {"Quest: Galgar's Cactus Apple Surprise Reward (#4402)", 1004402},
    {"Quest: Purified! Reward (#4442)", 1004442},
    {"Quest: Ledger from Tanaris Reward (#4450)", 1004450},
    {"Quest: Libram of Rumination Reward (#4463)", 1004463},
    {"Quest: Libram of Constitution Reward (#4481)", 1004481},
    {"Quest: Libram of Tenacity Reward (#4482)", 1004482},
    {"Quest: Libram of Resilience Reward (#4483)", 1004483},
    {"Quest: Libram of Voracity Reward (#4484)", 1004484},
    {"Quest: A Little Help From My Friends Reward (#4491)", 1004491},
    {"Quest: Beware of Pterrordax Reward (#4501)", 1004501},
    {"Quest: Shizzle's Flyer Reward (#4503)", 1004503},
    {"Quest: Calm Before the Storm Reward (#4510)", 1004510},
    {"Quest: Calm Before the Storm Reward (#4511)", 1004511},
    {"Quest: A Little Slime Goes a Long Way Reward (#4513)", 1004513},
    {"Quest: Testing for Impurities - Un'Goro Crater Reward (#4561)", 1004561},
    {"Quest: More Sparklematic Action Reward (#4603)", 1004603},
    {"Quest: More Sparklematic Action Reward (#4604)", 1004604},
    {"Quest: The Sparklematic 5200! Reward (#4605)", 1004605},
    {"Quest: The Sparklematic 5200! Reward (#4606)", 1004606},
    {"Quest: Avast Ye, Admiral! Reward (#4621)", 1004621},
    {"Quest: Melding of Influences Reward (#4642)", 1004642},
    {"Quest: Testing for Corruption - Felwood Reward (#4661)", 1004661},
    {"Quest: Washed Ashore Reward (#4681)", 1004681},
    {"Quest: Put Her Down Reward (#4701)", 1004701},
    {"Quest: The Pack Mistress Reward (#4724)", 1004724},
    {"Quest: Kibler's Exotic Pets Reward (#4729)", 1004729},
    {"Quest: Egg Freezing Reward (#4734)", 1004734},
    {"Quest: WANTED: Murkdeep! Reward (#4740)", 1004740},
    {"Quest: Seal of Ascension Reward (#4743)", 1004743},
    {"Quest: The Blackwood Corrupted Reward (#4763)", 1004763},
    {"Quest: Delivery to Ridgewell Reward (#4765)", 1004765},
    {"Quest: Wind Rider Reward (#4767)", 1004767},
    {"Quest: The Darkstone Tablet Reward (#4768)", 1004768},
    {"Quest: Dawn's Gambit Reward (#4771)", 1004771},
    {"Quest: Fine Gold Thread Reward (#4785)", 1004785},
    {"Quest: The Completed Robe Reward (#4786)", 1004786},
    {"Quest: Frostsaber E'ko Reward (#4801)", 1004801},
    {"Quest: Winterfall E'ko Reward (#4802)", 1004802},
    {"Quest: Shardtooth E'ko Reward (#4803)", 1004803},
    {"Quest: Chillwind E'ko Reward (#4804)", 1004804},
    {"Quest: Ice Thistle E'ko Reward (#4805)", 1004805},
    {"Quest: Frostmaul E'ko Reward (#4806)", 1004806},
    {"Quest: Wildkin E'ko Reward (#4807)", 1004807},
    {"Quest: Return to Tinkee Reward (#4810)", 1004810},
    {"Quest: The Fragments Within Reward (#4813)", 1004813},
    {"Quest: Strange Sources Reward (#4842)", 1004842},
    {"Quest: En-Ay-Es-Tee-Why Reward (#4862)", 1004862},
    {"Quest: Mother's Milk Reward (#4866)", 1004866},
    {"Quest: Urok Doomhowl Reward (#4867)", 1004867},
    {"Quest: Guarding Secrets Reward (#4883)", 1004883},
    {"Quest: Wildkin of Elune Reward (#4902)", 1004902},
    {"Quest: Warlord's Command Reward (#4903)", 1004903},
    {"Quest: Free at Last Reward (#4904)", 1004904},
    {"Quest: Further Corruption Reward (#4906)", 1004906},
    {"Quest: Cleansing of the Orb of Orahil Reward (#4961)", 1004961},
    {"Quest: The Completed Orb of Dar'Orahil Reward (#4964)", 1004964},
    {"Quest: Protect Kanati Greycloud Reward (#4966)", 1004966},
    {"Quest: A Matter of Time Reward (#4971)", 1004971},
    {"Quest: Counting Out Time Reward (#4972)", 1004972},
    {"Quest: Counting Out Time Reward (#4973)", 1004973},
    {"Quest: For The Horde! Reward (#4974)", 1004974},
    {"Quest: The Completed Orb of Noh'Orahil Reward (#4975)", 1004975},
    {"Quest: Bijou's Reconnaissance Report Reward (#4983)", 1004983},
    {"Quest: Glyphed Oaken Branch Reward (#4986)", 1004986},
    {"Quest: Glyphed Oaken Branch Reward (#4987)", 1004987},
    {"Quest: Two Halves Become One Reward (#5051)", 1005051},
    {"Quest: Shy-Rotam Reward (#5056)", 1005056},
    {"Quest: Past Endeavors Reward (#5057)", 1005057},
    {"Quest: Locked Away Reward (#5060)", 1005060},
    {"Quest: Aquatic Form Reward (#5061)", 1005061},
    {"Quest: Cap of the Scarlet Savant Reward (#5063)", 1005063},
    {"Quest: Grimtotem Spying Reward (#5064)", 1005064},
    {"Quest: Leggings of Arcana Reward (#5067)", 1005067},
    {"Quest: Breastplate of Bloodthirst Reward (#5068)", 1005068},
    {"Quest: Maxwell's Mission Reward (#5081)", 1005081},
    {"Quest: Arikara Reward (#5088)", 1005088},
    {"Quest: General Drakkisath's Demise Reward (#5102)", 1005102},
    {"Quest: High Chief Winterfall Reward (#5121)", 1005121},
    {"Quest: Fiery Plate Gauntlets Reward (#5124)", 1005124},
    {"Quest: Aurius' Reckoning Reward (#5125)", 1005125},
    {"Quest: The Demon Forge Reward (#5127)", 1005127},
    {"Quest: Words of the High Chief Reward (#5128)", 1005128},
    {"Quest: Wanted - Arnak Grimtotem Reward (#5147)", 1005147},
    {"Quest: Dadanga is Hungry! Reward (#5150)", 1005150},
    {"Quest: Hypercapacitor Gizmo Reward (#5151)", 1005151},
    {"Quest: Are We There, Yeti? Reward (#5163)", 1005163},
    {"Quest: Breastplate of the Chromatic Flight Reward (#5166)", 1005166},
    {"Quest: Legplates of the Chromatic Defier Reward (#5167)", 1005167},
    {"Quest: Retribution of the Light Reward (#5204)", 1005204},
    {"Quest: The Active Agent Reward (#5213)", 1005213},
    {"Quest: The Great Fras Siabi Reward (#5214)", 1005214},
    {"Quest: Mission Accomplished! Reward (#5237)", 1005237},
    {"Quest: Mission Accomplished! Reward (#5238)", 1005238},
    {"Quest: A Final Blow Reward (#5242)", 1005242},
    {"Quest: Houses of the Holy Reward (#5243)", 1005243},
    {"Quest: The Crystal of Zin-Malor Reward (#5253)", 1005253},
    {"Quest: The Argent Hold Reward (#5265)", 1005265},
    {"Quest: The Restless Souls Reward (#5282)", 1005282},
    {"Quest: Sweet Serenity Reward (#5305)", 1005305},
    {"Quest: Snakestone of the Shadow Huntress Reward (#5306)", 1005306},
    {"Quest: Corruption Reward (#5307)", 1005307},
    {"Quest: The Sleeper Has Awakened Reward (#5321)", 1005321},
    {"Quest: The Last Barov Reward (#5342)", 1005342},
    {"Quest: The Last Barov Reward (#5344)", 1005344},
    {"Quest: Kirtonos the Herald Reward (#5384)", 1005384},
    {"Quest: The Remains of Trey Lightforge Reward (#5385)", 1005385},
    {"Quest: Catch of the Day Reward (#5386)", 1005386},
    {"Quest: Argent Dawn Commission Reward (#5401)", 1005401},
    {"Quest: Minion's Scourgestones Reward (#5402)", 1005402},
    {"Quest: Invader's Scourgestones Reward (#5403)", 1005403},
    {"Quest: Corruptor's Scourgestones Reward (#5404)", 1005404},
    {"Quest: Argent Dawn Commission Reward (#5405)", 1005405},
    {"Quest: Corruptor's Scourgestones Reward (#5406)", 1005406},
    {"Quest: Invader's Scourgestones Reward (#5407)", 1005407},
    {"Quest: Minion's Scourgestones Reward (#5408)", 1005408},
    {"Quest: Fish in a Bucket Reward (#5421)", 1005421},
    {"Quest: The Lich, Ras Frostwhisper Reward (#5466)", 1005466},
    {"Quest: Bone Collector Reward (#5501)", 1005501},
    {"Quest: A Warden of the Horde Reward (#5502)", 1005502},
    {"Quest: Argent Dawn Commission Reward (#5503)", 1005503},
    {"Quest: The Key to Scholomance Reward (#5505)", 1005505},
    {"Quest: Corruptor's Scourgestones Reward (#5508)", 1005508},
    {"Quest: Invader's Scourgestones Reward (#5509)", 1005509},
    {"Quest: Minion's Scourgestones Reward (#5510)", 1005510},
    {"Quest: The Key to Scholomance Reward (#5511)", 1005511},
    {"Quest: Chromatic Mantle of the Dawn Reward (#5517)", 1005517},
    {"Quest: The Gordok Ogre Suit Reward (#5518)", 1005518},
    {"Quest: The Gordok Ogre Suit Reward (#5519)", 1005519},
    {"Quest: Chromatic Mantle of the Dawn Reward (#5521)", 1005521},
    {"Quest: Chromatic Mantle of the Dawn Reward (#5524)", 1005524},
    {"Quest: Shards of the Felvine Reward (#5526)", 1005526},
    {"Quest: <NYI> <TXT> Necklace of the Dawn Reward (#5530)", 1005530},
    {"Quest: <NYI> <TXT> Ring of the Dawn Reward (#5532)", 1005532},
    {"Quest: Kodo Roundup Reward (#5561)", 1005561},
    {"Quest: Portals of the Legion Reward (#5581)", 1005581},
    {"Quest: Garments of the Moon Reward (#5621)", 1005621},
    {"Quest: Garments of the Light Reward (#5624)", 1005624},
    {"Quest: Garments of the Light Reward (#5625)", 1005625},
    {"Quest: Garments of Spirituality Reward (#5648)", 1005648},
    {"Quest: Garments of Darkness Reward (#5650)", 1005650},
    {"Quest: The Battle of Darrowshire Reward (#5721)", 1005721},
    {"Quest: Returning the Lost Satchel Reward (#5724)", 1005724},
    {"Quest: The Power to Destroy... Reward (#5725)", 1005725},
    {"Quest: Hidden Enemies Reward (#5730)", 1005730},
    {"Quest: Welcome! Reward (#5805)", 1005805},
    {"Quest: Bodyguard for Hire Reward (#5821)", 1005821},
    {"Quest: Welcome! Reward (#5841)", 1005841},
    {"Quest: Welcome! Reward (#5842)", 1005842},
    {"Quest: Welcome! Reward (#5843)", 1005843},
    {"Quest: Welcome! Reward (#5844)", 1005844},
    {"Quest: Welcome! Reward (#5847)", 1005847},
    {"Quest: The Dunemaul Compound Reward (#5863)", 1005863},
    {"Quest: Salve via Hunting Reward (#5882)", 1005882},
    {"Quest: Salve via Mining Reward (#5883)", 1005883},
    {"Quest: Salve via Gathering Reward (#5884)", 1005884},
    {"Quest: Salve via Skinning Reward (#5885)", 1005885},
    {"Quest: Salve via Disenchanting Reward (#5886)", 1005886},
    {"Quest: Salve via Hunting Reward (#5887)", 1005887},
    {"Quest: Salve via Mining Reward (#5888)", 1005888},
    {"Quest: Salve via Gathering Reward (#5889)", 1005889},
    {"Quest: Salve via Skinning Reward (#5890)", 1005890},
    {"Quest: Salve via Disenchanting Reward (#5891)", 1005891},
    {"Quest: Hidden Treasures Reward (#5942)", 1005942},
    {"Quest: Gizelton Caravan Reward (#5943)", 1005943},
    {"Quest: In Dreams Reward (#5944)", 1005944},
    {"Quest: Hameya's Plea Reward (#6024)", 1006024},
    {"Quest: Book of the Ancients Reward (#6027)", 1006027},
    {"Quest: Runecloth Reward (#6031)", 1006031},
    {"Quest: When Smokey Sings, I Get Violent Reward (#6041)", 1006041},
    {"Quest: Curing the Sick Reward (#6124)", 1006124},
    {"Quest: Curing the Sick Reward (#6129)", 1006129},
    {"Quest: Ghost-o-plasm Round Up Reward (#6134)", 1006134},
    {"Quest: Duskwing, Oh How I Hate Thee... Reward (#6135)", 1006135},
    {"Quest: The Corpulent One Reward (#6136)", 1006136},
    {"Quest: Clam Bait Reward (#6142)", 1006142},
    {"Quest: The Scarlet Oracle, Demetria Reward (#6148)", 1006148},
    {"Quest: Claim Rackmore's Treasure! Reward (#6161)", 1006161},
    {"Quest: Ramstein Reward (#6163)", 1006163},
    {"Quest: Order Must Be Restored Reward (#6187)", 1006187},
    {"Quest: Bloodfury Bloodline Reward (#6283)", 1006283},
    {"Quest: Arachnophobia Reward (#6284)", 1006284},
    {"Quest: New Life Reward (#6381)", 1006381},
    {"Quest: Earthen Arise Reward (#6481)", 1006481},
    {"Quest: Drakefire Amulet Reward (#6502)", 1006502},
    {"Quest: The Lost Pages Reward (#6504)", 1006504},
    {"Quest: An Unholy Alliance Reward (#6521)", 1006521},
    {"Quest: Torek's Assault Reward (#6544)", 1006544},
    {"Quest: Warsong Runner Update Reward (#6545)", 1006545},
    {"Quest: Warsong Outrider Update Reward (#6546)", 1006546},
    {"Quest: Warsong Scout Update Reward (#6547)", 1006547},
    {"Quest: Blackfathom Villainy Reward (#6561)", 1006561},
    {"Quest: Allegiance to the Old Gods Reward (#6565)", 1006565},
    {"Quest: Warsong Supplies Reward (#6571)", 1006571},
    {"Quest: Warsong Saw Blades Reward (#6581)", 1006581},
    {"Quest: Blood of the Black Dragon Champion Reward (#6602)", 1006602},
    {"Quest: Nat Pagle, Angler Extreme Reward (#6607)", 1006607},
    {"Quest: King of the Foulweald Reward (#6621)", 1006621},
    {"Quest: Triage Reward (#6622)", 1006622},
    {"Quest: Triage Reward (#6624)", 1006624},
    {"Quest: Vorsha the Lasher Reward (#6641)", 1006641},
    {"Quest: Me Brother, Nipsy Reward (#6662)", 1006662},
    {"Quest: Uncovering Past Secrets Reward (#6845)", 1006845},
    {"Quest: Zinfizzlex's Portable Shredder Unit Reward (#6861)", 1006861},
    {"Quest: Zinfizzlex's Portable Shredder Unit Reward (#6862)", 1006862},
    {"Quest: Baron Aquanis Reward (#6922)", 1006922},
    {"Quest: Treats for Great-father Winter Reward (#6962)", 1006962},
    {"Quest: A Smokywood Pastures' Thank You! Reward (#6984)", 1006984},
    {"Quest: Zapped Giants Reward (#7003)", 1007003},
    {"Quest: Treats for Greatfather Winter Reward (#7025)", 1007025},
    {"Quest: Twisted Evils Reward (#7028)", 1007028},
    {"Quest: Vyletongue Corruption Reward (#7029)", 1007029},
    {"Quest: Vyletongue Corruption Reward (#7041)", 1007041},
    {"Quest: A Smokywood Pastures' Thank You! Reward (#7045)", 1007045},
    {"Quest: The Scepter of Celebras Reward (#7046)", 1007046},
    {"Quest: Corruption of Earth and Seed Reward (#7064)", 1007064},
    {"Quest: Corruption of Earth and Seed Reward (#7065)", 1007065},
    {"Quest: The Pariah's Instructions Reward (#7067)", 1007067},
    {"Quest: Shadowshard Fragments Reward (#7068)", 1007068},
    {"Quest: Shadowshard Fragments Reward (#7070)", 1007070},
    {"Quest: Proving Grounds Reward (#7161)", 1007161},
    {"Quest: Proving Grounds Reward (#7162)", 1007162},
    {"Quest: Rise and Be Recognized Reward (#7163)", 1007163},
    {"Quest: Honored Amongst the Clan Reward (#7164)", 1007164},
    {"Quest: Earned Reverence Reward (#7165)", 1007165},
    {"Quest: Legendary Heroes Reward (#7166)", 1007166},
    {"Quest: The Eye of Command Reward (#7167)", 1007167},
    {"Quest: Rise and Be Recognized Reward (#7168)", 1007168},
    {"Quest: Honored Amongst the Guard Reward (#7169)", 1007169},
    {"Quest: Earned Reverence Reward (#7170)", 1007170},
    {"Quest: Legendary Heroes Reward (#7171)", 1007171},
    {"Quest: The Eye of Command Reward (#7172)", 1007172},
    {"Quest: The Legend of Korrak Reward (#7181)", 1007181},
    {"Quest: The Last Element Reward (#7201)", 1007201},
    {"Quest: Korrak the Bloodrager Reward (#7202)", 1007202},
    {"Quest: Soothing Turtle Bisque Reward (#7321)", 1007321},
    {"Quest: A Fair Trade Reward (#7341)", 1007341},
    {"Quest: Arrows Are For Sissies Reward (#7342)", 1007342},
    {"Quest: The Return of Korrak Reward (#7381)", 1007381},
    {"Quest: Korrak the Everliving Reward (#7382)", 1007382},
    {"Quest: Pusillin and the Elder Azj'Tordin Reward (#7441)", 1007441},
    {"Quest: The Treasure of the Shen'dralar Reward (#7462)", 1007462},
    {"Quest: Libram of Rapidity Reward (#7483)", 1007483},
    {"Quest: Libram of Focus Reward (#7484)", 1007484},
    {"Quest: Libram of Protection Reward (#7485)", 1007485},
    {"Quest: A Hero's Reward Reward (#7486)", 1007486},
    {"Quest: Lethtendris's Web Reward (#7488)", 1007488},
    {"Quest: Lethtendris's Web Reward (#7489)", 1007489},
    {"Quest: For All To See Reward (#7491)", 1007491},
    {"Quest: Celebrating Good Times Reward (#7496)", 1007496},
    {"Quest: Garona: A Study on Stealth and Treachery Reward (#7498)", 1007498},
    {"Quest: Codex of Defense Reward (#7499)", 1007499},
    {"Quest: The Arcanist's Cookbook Reward (#7500)", 1007500},
    {"Quest: The Light and How To Swing It Reward (#7501)", 1007501},
    {"Quest: Harnessing Shadows Reward (#7502)", 1007502},
    {"Quest: The Greatest Race of Hunters Reward (#7503)", 1007503},
    {"Quest: Holy Bologna: What the Light Won't Tell You Reward (#7504)", 1007504},
    {"Quest: Frost Shock and You Reward (#7505)", 1007505},
    {"Quest: The Emerald Dream... Reward (#7506)", 1007506},
    {"Quest: The Forging of Quel'Serrar Reward (#7509)", 1007509},
    {"Quest: Service to the Horde Reward (#7541)", 1007541},
    {"Quest: Rise,Thunderfury! Reward (#7561)", 1007561},
    {"Quest: Suppression Reward (#7583)", 1007583},
    {"Quest: Kroshius' Infernal Core Reward (#7603)", 1007603},
    {"Quest: A Binding Contract Reward (#7604)", 1007604},
    {"Quest: The Balance of Light and Shadow Reward (#7622)", 1007622},
    {"Quest: Ancient Sinew Wrapped Lamina Reward (#7634)", 1007634},
    {"Quest: A Proper String Reward (#7635)", 1007635},
    {"Quest: Stave of the Ancients Reward (#7636)", 1007636},
    {"Quest: Manna-Enriched Horse Feed Reward (#7645)", 1007645},
    {"Quest: Enchanted Thorium Platemail: Volume I Reward (#7649)", 1007649},
    {"Quest: Enchanted Thorium Platemail: Volume II Reward (#7650)", 1007650},
    {"Quest: Enchanted Thorium Platemail: Volume III Reward (#7651)", 1007651},
    {"Quest: Imperial Plate Belt Reward (#7653)", 1007653},
    {"Quest: Imperial Plate Boots Reward (#7654)", 1007654},
    {"Quest: Imperial Plate Bracer Reward (#7655)", 1007655},
    {"Quest: Imperial Plate Chest Reward (#7656)", 1007656},
    {"Quest: Imperial Plate Helm Reward (#7657)", 1007657},
    {"Quest: Imperial Plate Leggings Reward (#7658)", 1007658},
    {"Quest: Imperial Plate Shoulders Reward (#7659)", 1007659},
    {"Quest: Wolf Swapping - Arctic Wolf Reward (#7660)", 1007660},
    {"Quest: Wolf Swapping - Red Wolf Reward (#7661)", 1007661},
    {"Quest: New Kodo - Teal Reward (#7662)", 1007662},
    {"Quest: New Kodo - Green Reward (#7663)", 1007663},
    {"Quest: Ivory Raptor Replacement Reward (#7664)", 1007664},
    {"Quest: Red Raptor Replacement Reward (#7665)", 1007665},
    {"Quest: Again Into the Great Ossuary Reward (#7666)", 1007666},
    {"Quest: The Darkreaver Menace Reward (#7668)", 1007668},
    {"Quest: Again Into the Great Ossuary Reward (#7669)", 1007669},
    {"Quest: Frostsaber Replacement Reward (#7671)", 1007671},
    {"Quest: Nightsaber Replacement Reward (#7672)", 1007672},
    {"Quest: Frost Ram Exchange Reward (#7673)", 1007673},
    {"Quest: Black Ram Exchange Reward (#7674)", 1007674},
    {"Quest: Icy Blue Mechanostrider Replacement Reward (#7675)", 1007675},
    {"Quest: White Mechanostrider Replacement Reward (#7676)", 1007676},
    {"Quest: White Stallion Exchange Reward (#7677)", 1007677},
    {"Quest: Palomino Exchange Reward (#7678)", 1007678},
    {"Quest: WANTED: Overseer Maltorius Reward (#7701)", 1007701},
    {"Quest: Kill 'Em With Sleep Deprivation Reward (#7702)", 1007702},
    {"Quest: Unfinished Gordok Business Reward (#7703)", 1007703},
    {"Quest: Look at the Size of It! Reward (#7704)", 1007704},
    {"Quest: Fuel for the Zapping Reward (#7721)", 1007721},
    {"Quest: Curse These Fat Fingers Reward (#7723)", 1007723},
    {"Quest: Fiery Menace! Reward (#7724)", 1007724},
    {"Quest: Incendosaurs? Whateverosaur is More Like It Reward (#7727)", 1007727},
    {"Quest: STOLEN: Smithing Tuyere and Lookout's Spyglass Reward (#7728)", 1007728},
    {"Quest: Zukk'ash Report Reward (#7732)", 1007732},
    {"Quest: Improved Quality Reward (#7733)", 1007733},
    {"Quest: Improved Quality Reward (#7734)", 1007734},
    {"Quest: Praise from the Emerald Circle <NYI> <TXT> Reward (#7741)", 1007741},
    {"Quest: The Lord of Blackrock Reward (#7782)", 1007782},
    {"Quest: The Lord of Blackrock Reward (#7784)", 1007784},
    {"Quest: Rise, Thunderfury! Reward (#7787)", 1007787},
    {"Quest: Snapjaws, Mon! Reward (#7815)", 1007815},
    {"Quest: Arena Grandmaster Reward (#7838)", 1007838},
    {"Quest: Lard Lost His Lunch Reward (#7840)", 1007840},
    {"Quest: The Final Message to the Wildhammer Reward (#7843)", 1007843},
    {"Quest: Return to Primal Torntusk Reward (#7847)", 1007847},
    {"Quest: Separation Anxiety Reward (#7849)", 1007849},
    {"Quest: Dark Vessels Reward (#7850)", 1007850},
    {"Quest: Wanted: Vile Priestess Hexx and Her Minions Reward (#7861)", 1007861},
    {"Quest: Job Opening: Guard Captain of Revantusk Village Reward (#7862)", 1007862},
    {"Quest: Sentinel Basic Care Package Reward (#7863)", 1007863},
    {"Quest: Sentinel Standard Care Package Reward (#7864)", 1007864},
    {"Quest: Sentinel Advanced Care Package Reward (#7865)", 1007865},
    {"Quest: Outrider Basic Care Package Reward (#7866)", 1007866},
    {"Quest: Outrider Standard Care Package Reward (#7867)", 1007867},
    {"Quest: Outrider Advanced Care Package Reward (#7868)", 1007868},
    {"Quest: The Treasure of the Shen'dralar Reward (#7877)", 1007877},
    {"Quest: Carnival Boots Reward (#7881)", 1007881},
    {"Quest: Carnival Jerkins Reward (#7882)", 1007882},
    {"Quest: The World's Largest Gnome! Reward (#7883)", 1007883},
    {"Quest: Crocolisk Boy and the Bearded Murloc Reward (#7884)", 1007884},
    {"Quest: Armor Kits Reward (#7885)", 1007885},
    {"Quest: Coarse Weightstone Reward (#7889)", 1007889},
    {"Quest: Heavy Grinding Stone Reward (#7890)", 1007890},
    {"Quest: Green Iron Bracers Reward (#7891)", 1007891},
    {"Quest: Big Black Mace Reward (#7892)", 1007892},
    {"Quest: Rituals of Strength Reward (#7893)", 1007893},
    {"Quest: Copper Modulator Reward (#7894)", 1007894},
    {"Quest: Whirring Bronze Gizmo Reward (#7895)", 1007895},
    {"Quest: Green Fireworks Reward (#7896)", 1007896},
    {"Quest: Mechanical Repair Kits Reward (#7897)", 1007897},
    {"Quest: Thorium Widget Reward (#7898)", 1007898},
    {"Quest: Small Furry Paws Reward (#7899)", 1007899},
    {"Quest: Torn Bear Pelts Reward (#7900)", 1007900},
    {"Quest: Soft Bushy Tails Reward (#7901)", 1007901},
    {"Quest: Vibrant Plumes Reward (#7902)", 1007902},
    {"Quest: Evil Bat Eyes Reward (#7903)", 1007903},
    {"Quest: The Darkmoon Faire Reward (#7905)", 1007905},
    {"Quest: Darkmoon Beast Deck Reward (#7907)", 1007907},
    {"Quest: The Darkmoon Faire Reward (#7926)", 1007926},
    {"Quest: Darkmoon Portals Deck Reward (#7927)", 1007927},
    {"Quest: Darkmoon Warlords Deck Reward (#7928)", 1007928},
    {"Quest: Darkmoon Elementals Deck Reward (#7929)", 1007929},
    {"Quest: 5 Tickets - Darkmoon Flower Reward (#7930)", 1007930},
    {"Quest: 5 Tickets - Minor Darkmoon Prize Reward (#7931)", 1007931},
    {"Quest: 12 Tickets - Lesser Darkmoon Prize Reward (#7932)", 1007932},
    {"Quest: 40 Tickets - Greater Darkmoon Prize Reward (#7933)", 1007933},
    {"Quest: 50 Tickets - Darkmoon Storage Box Reward (#7934)", 1007934},
    {"Quest: 10 Tickets - Last Month's Mutton Reward (#7935)", 1007935},
    {"Quest: 50 Tickets - Last Year's Mutton Reward (#7936)", 1007936},
    {"Quest: Your Fortune Awaits You... Reward (#7937)", 1007937},
    {"Quest: Your Fortune Awaits You... Reward (#7938)", 1007938},
    {"Quest: More Dense Grinding Stones Reward (#7939)", 1007939},
    {"Quest: 1200 Tickets - Orb of the Darkmoon Reward (#7940)", 1007940},
    {"Quest: More Armor Kits Reward (#7941)", 1007941},
    {"Quest: More Thorium Widgets Reward (#7942)", 1007942},
    {"Quest: More Bat Eyes Reward (#7943)", 1007943},
    {"Quest: Your Fortune Awaits You... Reward (#7944)", 1007944},
    {"Quest: Your Fortune Awaits You... Reward (#7945)", 1007945},
    {"Quest: Spawn of Jubjub Reward (#7946)", 1007946},
    {"Quest: Wabbit Pelts Reward (#7962)", 1007962},
    {"Quest: 1200 Tickets - Amulet of the Darkmoon Reward (#7981)", 1007981},
    {"Quest: Redeem iCoke Prize Voucher Reward (#8021)", 1008021},
    {"Quest: Redeem iCoke Prize Voucher Reward (#8022)", 1008022},
    {"Quest: Redeem iCoke Prize Voucher Reward (#8023)", 1008023},
    {"Quest: Redeem iCoke Prize Voucher Reward (#8024)", 1008024},
    {"Quest: Redeem iCoke Prize Voucher Reward (#8025)", 1008025},
    {"Quest: Redeem iCoke Prize Voucher Reward (#8026)", 1008026},
    {"Quest: Strength of Mount Mugamba Reward (#8041)", 1008041},
    {"Quest: Strength of Mount Mugamba Reward (#8042)", 1008042},
    {"Quest: Strength of Mount Mugamba Reward (#8043)", 1008043},
    {"Quest: The Rage of Mugamba Reward (#8044)", 1008044},
    {"Quest: The Heathen's Brand Reward (#8045)", 1008045},
    {"Quest: The Heathen's Brand Reward (#8046)", 1008046},
    {"Quest: The Heathen's Brand Reward (#8047)", 1008047},
    {"Quest: The Hero's Brand Reward (#8048)", 1008048},
    {"Quest: The Eye of Zuldazar Reward (#8049)", 1008049},
    {"Quest: The Eye of Zuldazar Reward (#8050)", 1008050},
    {"Quest: The Eye of Zuldazar Reward (#8051)", 1008051},
    {"Quest: The All-Seeing Eye of Zuldazar Reward (#8052)", 1008052},
    {"Quest: Paragons of Power: The Freethinker's Armguards Reward (#8053)", 1008053},
    {"Quest: Paragons of Power: The Freethinker's Belt Reward (#8054)", 1008054},
    {"Quest: Paragons of Power: The Freethinker's Breastplate Reward (#8055)", 1008055},
    {"Quest: Paragons of Power: The Augur's Bracers Reward (#8056)", 1008056},
    {"Quest: Paragons of Power: The Haruspex's Bracers Reward (#8057)", 1008057},
    {"Quest: Paragons of Power: The Vindicator's Armguards Reward (#8058)", 1008058},
    {"Quest: Paragons of Power: The Demoniac's Wraps Reward (#8059)", 1008059},
    {"Quest: Paragons of Power: The Illusionist's Wraps Reward (#8060)", 1008060},
    {"Quest: Paragons of Power: The Confessor's Wraps Reward (#8061)", 1008061},
    {"Quest: Paragons of Power: The Predator's Bracers Reward (#8062)", 1008062},
    {"Quest: Paragons of Power: The Madcap's Bracers Reward (#8063)", 1008063},
    {"Quest: Paragons of Power: The Haruspex's Belt Reward (#8064)", 1008064},
    {"Quest: Paragons of Power: The Haruspex's Tunic Reward (#8065)", 1008065},
    {"Quest: Paragons of Power: The Predator's Belt Reward (#8066)", 1008066},
    {"Quest: Paragons of Power: The Predator's Mantle Reward (#8067)", 1008067},
    {"Quest: Paragons of Power: The Illusionist's Mantle Reward (#8068)", 1008068},
    {"Quest: Paragons of Power: The Illusionist's Robes Reward (#8069)", 1008069},
    {"Quest: Paragons of Power: The Confessor's Bindings Reward (#8070)", 1008070},
    {"Quest: Paragons of Power: The Confessor's Mantle Reward (#8071)", 1008071},
    {"Quest: Paragons of Power: The Madcap's Mantle Reward (#8072)", 1008072},
    {"Quest: Paragons of Power: The Madcap's Tunic Reward (#8073)", 1008073},
    {"Quest: Paragons of Power: The Augur's Belt Reward (#8074)", 1008074},
    {"Quest: Paragons of Power: The Augur's Hauberk Reward (#8075)", 1008075},
    {"Quest: Paragons of Power: The Demoniac's Mantle Reward (#8076)", 1008076},
    {"Quest: Paragons of Power: The Demoniac's Robes Reward (#8077)", 1008077},
    {"Quest: Paragons of Power: The Vindicator's Belt Reward (#8078)", 1008078},
    {"Quest: Paragons of Power: The Vindicator's Breastplate Reward (#8079)", 1008079},
    {"Quest: The Pebble of Kajaro Reward (#8101)", 1008101},
    {"Quest: The Pebble of Kajaro Reward (#8102)", 1008102},
    {"Quest: The Pebble of Kajaro Reward (#8103)", 1008103},
    {"Quest: The Jewel of Kajaro Reward (#8104)", 1008104},
    {"Quest: Kezan's Taint Reward (#8106)", 1008106},
    {"Quest: Kezan's Taint Reward (#8107)", 1008107},
    {"Quest: Kezan's Taint Reward (#8108)", 1008108},
    {"Quest: Kezan's Unstoppable Taint Reward (#8109)", 1008109},
    {"Quest: Enchanted South Seas Kelp Reward (#8110)", 1008110},
    {"Quest: Enchanted South Seas Kelp Reward (#8111)", 1008111},
    {"Quest: Enchanted South Seas Kelp Reward (#8112)", 1008112},
    {"Quest: Pristine Enchanted South Seas Kelp Reward (#8113)", 1008113},
    {"Quest: Control Five Bases Reward (#8115)", 1008115},
    {"Quest: Vision of Voodress Reward (#8116)", 1008116},
    {"Quest: Vision of Voodress Reward (#8117)", 1008117},
    {"Quest: Vision of Voodress Reward (#8118)", 1008118},
    {"Quest: The Unmarred Vision of Voodress Reward (#8119)", 1008119},
    {"Quest: Take Five Bases Reward (#8122)", 1008122},
    {"Quest: Zandalarian Shadow Talisman Reward (#8141)", 1008141},
    {"Quest: Zandalarian Shadow Talisman Reward (#8142)", 1008142},
    {"Quest: Zandalarian Shadow Talisman Reward (#8143)", 1008143},
    {"Quest: Zandalarian Shadow Mastery Talisman Reward (#8144)", 1008144},
    {"Quest: The Maelstrom's Tendril Reward (#8145)", 1008145},
    {"Quest: The Maelstrom's Tendril Reward (#8146)", 1008146},
    {"Quest: The Maelstrom's Tendril Reward (#8147)", 1008147},
    {"Quest: Maelstrom's Wrath Reward (#8148)", 1008148},
    {"Quest: Honoring a Hero Reward (#8149)", 1008149},
    {"Quest: Honoring a Hero Reward (#8150)", 1008150},
    {"Quest: Confront Yeh'kinya Reward (#8181)", 1008181},
    {"Quest: The Heart of Hakkar Reward (#8183)", 1008183},
    {"Quest: Presence of Might Reward (#8184)", 1008184},
    {"Quest: Syncretist's Sigil Reward (#8185)", 1008185},
    {"Quest: Death's Embrace Reward (#8186)", 1008186},
    {"Quest: Falcon's Call Reward (#8187)", 1008187},
    {"Quest: Vodouisant's Vigilant Embrace Reward (#8188)", 1008188},
    {"Quest: Presence of Sight Reward (#8189)", 1008189},
    {"Quest: Hoodoo Hex Reward (#8190)", 1008190},
    {"Quest: Prophetic Aura Reward (#8191)", 1008191},
    {"Quest: Animist's Caress Reward (#8192)", 1008192},
    {"Quest: Master Angler Reward (#8193)", 1008193},
    {"Quest: Zulian, Razzashi, and Hakkari Coins Reward (#8195)", 1008195},
    {"Quest: Essence Mangoes Reward (#8196)", 1008196},
    {"Quest: A Collection of Heads Reward (#8201)", 1008201},
    {"Quest: Rare Fish - Keefer's Angelfish Reward (#8221)", 1008221},
    {"Quest: Glowing Scorpid Blood Reward (#8222)", 1008222},
    {"Quest: More Glowing Scorpid Blood Reward (#8223)", 1008223},
    {"Quest: Rare Fish - Dezian Queenfish Reward (#8224)", 1008224},
    {"Quest: Rare Fish - Brownell's Blue Striped Racer Reward (#8225)", 1008225},
    {"Quest: Rare Fish - Pale Ghoulfish Reward (#8226)", 1008226},
    {"Quest: Could I get a Fishing Flier? Reward (#8228)", 1008228},
    {"Quest: Could I get a Fishing Flier? Reward (#8229)", 1008229},
    {"Quest: The Green Drake Reward (#8232)", 1008232},
    {"Quest: The Azure Key Reward (#8236)", 1008236},
    {"Quest: Gurubashi, Vilebranch, and Witherbark Coins Reward (#8238)", 1008238},
    {"Quest: Sandfury, Skullsplitter, and Bloodscalp Coins Reward (#8239)", 1008239},
    {"Quest: A Bijou for Zanza Reward (#8240)", 1008240},
    {"Quest: Zanza's Potent Potables Reward (#8243)", 1008243},
    {"Quest: Signets of the Zandalar Reward (#8246)", 1008246},
    {"Quest: Junkboxes Needed Reward (#8249)", 1008249},
    {"Quest: Destroy Morphaz Reward (#8253)", 1008253},
    {"Quest: Blood of Morphaz Reward (#8257)", 1008257},
    {"Quest: The Darkreaver Menace Reward (#8258)", 1008258},
    {"Quest: A More Fitting Reward Reward (#8259)", 1008259},
    {"Quest: Arathor Basic Care Package Reward (#8260)", 1008260},
    {"Quest: Arathor Standard Care Package Reward (#8261)", 1008261},
    {"Quest: Arathor Advanced Care Package Reward (#8262)", 1008262},
    {"Quest: Defiler's Basic Care Package Reward (#8263)", 1008263},
    {"Quest: Defiler's Standard Care Package Reward (#8264)", 1008264},
    {"Quest: Defiler's Advanced Care Package Reward (#8265)", 1008265},
    {"Quest: Hero of the Stormpike Reward (#8271)", 1008271},
    {"Quest: Hero of the Frostwolf Reward (#8272)", 1008272},
    {"Quest: Oran's Gratitude Reward (#8273)", 1008273},
    {"Quest: Noggle's Last Hope Reward (#8278)", 1008278},
    {"Quest: Noggle's Lost Satchel Reward (#8282)", 1008282},
    {"Quest: Wanted - Deathclasp, Terror of the Sands Reward (#8283)", 1008283},
    {"Quest: The Path of the Righteous Reward (#8301)", 1008301},
    {"Quest: The Hand of the Righteous Reward (#8302)", 1008302},
    {"Quest: Into The Maw of Madness Reward (#8306)", 1008306},
    {"Quest: Brann Bronzebeard's Lost Letter Reward (#8308)", 1008308},
    {"Quest: Hallow's End Treats for Jesper! Reward (#8311)", 1008311},
    {"Quest: Hallow's End Treats for Spoops! Reward (#8312)", 1008312},
    {"Quest: Armaments of War Reward (#8316)", 1008316},
    {"Quest: Vyral the Vile Reward (#8321)", 1008321},
    {"Quest: Reclaiming Sunstrider Isle Reward (#8325)", 1008325},
    {"Quest: Unfortunate Measures Reward (#8326)", 1008326},
    {"Quest: Solanian's Belongings Reward (#8330)", 1008330},
    {"Quest: Dukes of the Council Reward (#8332)", 1008332},
    {"Quest: Medallion of Station Reward (#8333)", 1008333},
    {"Quest: Aggression Reward (#8334)", 1008334},
    {"Quest: Felendren the Banished Reward (#8335)", 1008335},
    {"Quest: A Fistful of Slivers Reward (#8336)", 1008336},
    {"Quest: Twilight Signet Ring <NYI> <TXT> Reward (#8340)", 1008340},
    {"Quest: Lords of the Council Reward (#8341)", 1008341},
    {"Quest: Twilight Ring of Lordship Reward (#8342)", 1008342},
    {"Quest: Thirst Unending Reward (#8346)", 1008346},
    {"Quest: Signet of the Dukes Reward (#8348)", 1008348},
    {"Quest: Completing the Delivery Reward (#8350)", 1008350},
    {"Quest: Scepter of the Council Reward (#8352)", 1008352},
    {"Quest: Chicken Clucking for a Mint Reward (#8353)", 1008353},
    {"Quest: Chicken Clucking for a Mint Reward (#8354)", 1008354},
    {"Quest: Incoming Gumdrop Reward (#8355)", 1008355},
    {"Quest: Flexing for Nougat Reward (#8356)", 1008356},
    {"Quest: Dancing for Marzipan Reward (#8357)", 1008357},
    {"Quest: Incoming Gumdrop Reward (#8358)", 1008358},
    {"Quest: Flexing for Nougat Reward (#8359)", 1008359},
    {"Quest: Dancing for Marzipan Reward (#8360)", 1008360},
    {"Quest: Abyssal Contacts Reward (#8361)", 1008361},
    {"Quest: Abyssal Crests Reward (#8362)", 1008362},
    {"Quest: Abyssal Signets Reward (#8363)", 1008363},
    {"Quest: Abyssal Scepters Reward (#8364)", 1008364},
    {"Quest: Southsea Shakedown Reward (#8366)", 1008366},
    {"Quest: The Power of Pine Reward (#8373)", 1008373},
    {"Quest: Armaments of War Reward (#8376)", 1008376},
    {"Quest: Armaments of War Reward (#8377)", 1008377},
    {"Quest: Armaments of War Reward (#8378)", 1008378},
    {"Quest: Armaments of War Reward (#8379)", 1008379},
    {"Quest: Armaments of War Reward (#8380)", 1008380},
    {"Quest: Armaments of War Reward (#8381)", 1008381},
    {"Quest: Armaments of War Reward (#8382)", 1008382},
    {"Quest: Ruined Kegs Reward (#8409)", 1008409},
    {"Quest: Da Voodoo Reward (#8413)", 1008413},
    {"Quest: Forging the Mightstone Reward (#8418)", 1008418},
    {"Quest: Trolls of a Feather Reward (#8422)", 1008422},
    {"Quest: Voodoo Feathers Reward (#8425)", 1008425},
    {"Quest: Waking Legends Reward (#8447)", 1008447},
    {"Quest: <TXT> Mystery Reward Reward (#8448)", 1008448},
    {"Quest: <TXT> Mystery Reward Reward (#8449)", 1008449},
    {"Quest: <TXT> Mystery Reward Reward (#8450)", 1008450},
    {"Quest: <TXT> Mystery Reward Reward (#8451)", 1008451},
    {"Quest: <TXT> Mystery Reward Reward (#8452)", 1008452},
    {"Quest: <TXT> Mystery Reward Reward (#8453)", 1008453},
    {"Quest: <TXT> Mystery Reward Reward (#8454)", 1008454},
    {"Quest: Timbermaw Ally Reward (#8460)", 1008460},
    {"Quest: Deadwood of the North Reward (#8461)", 1008461},
    {"Quest: Winterfall Activity Reward (#8464)", 1008464},
    {"Quest: Deadwood Ritual Totem Reward (#8470)", 1008470},
    {"Quest: Winterfall Ritual Totem Reward (#8471)", 1008471},
    {"Quest: Major Malfunction Reward (#8472)", 1008472},
    {"Quest: The Dead Scar Reward (#8475)", 1008475},
    {"Quest: The Spearcrafter's Hammer Reward (#8477)", 1008477},
    {"Quest: Zul'Marosh Reward (#8479)", 1008479},
    {"Quest: Lost Armaments Reward (#8480)", 1008480},
    {"Quest: The Root of All Evil Reward (#8481)", 1008481},
    {"Quest: The Dwarven Spy Reward (#8483)", 1008483},
    {"Quest: Arcane Instability Reward (#8486)", 1008486},
    {"Quest: Pelt Collection Reward (#8491)", 1008491},
    {"Quest: The Alliance Needs Copper Bars! Reward (#8492)", 1008492},
    {"Quest: The Alliance Needs More Copper Bars! Reward (#8493)", 1008493},
    {"Quest: The Alliance Needs Iron Bars! Reward (#8494)", 1008494},
    {"Quest: The Alliance Needs More Iron Bars! Reward (#8495)", 1008495},
    {"Quest: Bandages for the Field Reward (#8496)", 1008496},
    {"Quest: Desert Survival Kits Reward (#8497)", 1008497},
    {"Quest: Twilight Battle Orders Reward (#8498)", 1008498},
    {"Quest: The Alliance Needs Thorium Bars! Reward (#8499)", 1008499},
    {"Quest: The Alliance Needs More Thorium Bars! Reward (#8500)", 1008500},
    {"Quest: Target: Hive'Ashi Stingers Reward (#8501)", 1008501},
    {"Quest: Target: Hive'Ashi Workers Reward (#8502)", 1008502},
    {"Quest: The Alliance Needs Stranglekelp! Reward (#8503)", 1008503},
    {"Quest: The Alliance Needs More Stranglekelp! Reward (#8504)", 1008504},
    {"Quest: The Alliance Needs Purple Lotus! Reward (#8505)", 1008505},
    {"Quest: The Alliance Needs More Purple Lotus! Reward (#8506)", 1008506},
    {"Quest: Field Duty Reward (#8507)", 1008507},
    {"Quest: Field Duty Papers Reward (#8508)", 1008508},
    {"Quest: The Alliance Needs Arthas' Tears! Reward (#8509)", 1008509},
    {"Quest: The Alliance Needs More Arthas' Tears! Reward (#8510)", 1008510},
    {"Quest: The Alliance Needs Light Leather! Reward (#8511)", 1008511},
    {"Quest: The Alliance Needs More Light Leather! Reward (#8512)", 1008512},
    {"Quest: The Alliance Needs Medium Leather! Reward (#8513)", 1008513},
    {"Quest: The Alliance Needs More Medium Leather! Reward (#8514)", 1008514},
    {"Quest: The Alliance Needs Thick Leather! Reward (#8515)", 1008515},
    {"Quest: The Alliance Needs More Thick Leather! Reward (#8516)", 1008516},
    {"Quest: The Alliance Needs Linen Bandages! Reward (#8517)", 1008517},
    {"Quest: The Alliance Needs More Linen Bandages! Reward (#8518)", 1008518},
    {"Quest: The Alliance Needs Silk Bandages! Reward (#8520)", 1008520},
    {"Quest: The Alliance Needs More Silk Bandages! Reward (#8521)", 1008521},
    {"Quest: The Alliance Needs Runecloth Bandages! Reward (#8522)", 1008522},
    {"Quest: The Alliance Needs More Runecloth Bandages! Reward (#8523)", 1008523},
    {"Quest: The Alliance Needs Rainbow Fin Albacore! Reward (#8524)", 1008524},
    {"Quest: The Alliance Needs More Rainbow Fin Albacore! Reward (#8525)", 1008525},
    {"Quest: The Alliance Needs Roast Raptor! Reward (#8526)", 1008526},
    {"Quest: The Alliance Needs More Roast Raptor! Reward (#8527)", 1008527},
    {"Quest: The Alliance Needs Spotted Yellowtail! Reward (#8528)", 1008528},
    {"Quest: The Alliance Needs More Spotted Yellowtail! Reward (#8529)", 1008529},
    {"Quest: The Horde Needs Copper Bars! Reward (#8532)", 1008532},
    {"Quest: The Horde Needs More Copper Bars! Reward (#8533)", 1008533},
    {"Quest: Hive'Zora Scout Report Reward (#8534)", 1008534},
    {"Quest: Hoary Templar Reward (#8535)", 1008535},
    {"Quest: Earthen Templar Reward (#8536)", 1008536},
    {"Quest: Crimson Templar Reward (#8537)", 1008537},
    {"Quest: The Four Dukes Reward (#8538)", 1008538},
    {"Quest: Target: Hive'Zora Hive Sisters Reward (#8539)", 1008539},
    {"Quest: Boots for the Guard Reward (#8540)", 1008540},
    {"Quest: Grinding Stones for the Guard Reward (#8541)", 1008541},
    {"Quest: The Horde Needs Tin Bars! Reward (#8542)", 1008542},
    {"Quest: The Horde Needs More Tin Bars! Reward (#8543)", 1008543},
    {"Quest: Conqueror's Spaulders Reward (#8544)", 1008544},
    {"Quest: The Horde Needs Mithril Bars! Reward (#8545)", 1008545},
    {"Quest: The Horde Needs More Mithril Bars! Reward (#8546)", 1008546},
    {"Quest: Welcome! Reward (#8547)", 1008547},
    {"Quest: Volunteer's Battlegear Reward (#8548)", 1008548},
    {"Quest: The Horde Needs Peacebloom! Reward (#8549)", 1008549},
    {"Quest: The Horde Needs More Peacebloom! Reward (#8550)", 1008550},
    {"Quest: The Captain's Chest Reward (#8551)", 1008551},
    {"Quest: Facing Negolash Reward (#8554)", 1008554},
    {"Quest: Signet of Unyielding Strength Reward (#8556)", 1008556},
    {"Quest: Drape of Unyielding Strength Reward (#8557)", 1008557},
    {"Quest: Sickle of Unyielding Strength Reward (#8558)", 1008558},
    {"Quest: Conqueror's Greaves Reward (#8559)", 1008559},
    {"Quest: Conqueror's Legguards Reward (#8560)", 1008560},
    {"Quest: Conqueror's Crown Reward (#8561)", 1008561},
    {"Quest: Conqueror's Breastplate Reward (#8562)", 1008562},
    {"Quest: Past Victories in Arathi Reward (#8565)", 1008565},
    {"Quest: Past Victories in Arathi Reward (#8566)", 1008566},
    {"Quest: Past Victories in Warsong Gulch Reward (#8567)", 1008567},
    {"Quest: Past Victories in Warsong Gulch Reward (#8568)", 1008568},
    {"Quest: Past Efforts in Warsong Gulch Reward (#8569)", 1008569},
    {"Quest: Past Efforts in Warsong Gulch Reward (#8570)", 1008570},
    {"Quest: Veteran's Battlegear Reward (#8572)", 1008572},
    {"Quest: Champion's Battlegear Reward (#8573)", 1008573},
    {"Quest: Stalwart's Battlegear Reward (#8574)", 1008574},
    {"Quest: Scrying Goggles? No Problem! Reward (#8578)", 1008578},
    {"Quest: The Horde Needs Firebloom! Reward (#8580)", 1008580},
    {"Quest: The Horde Needs More Firebloom! Reward (#8581)", 1008581},
    {"Quest: The Horde Needs Purple Lotus! Reward (#8582)", 1008582},
    {"Quest: The Horde Needs More Purple Lotus! Reward (#8583)", 1008583},
    {"Quest: Dirge's Kickin' Chimaerok Chops Reward (#8586)", 1008586},
    {"Quest: The Horde Needs Heavy Leather! Reward (#8588)", 1008588},
    {"Quest: The Horde Needs More Heavy Leather! Reward (#8589)", 1008589},
    {"Quest: The Horde Needs Thick Leather! Reward (#8590)", 1008590},
    {"Quest: The Horde Needs More Thick Leather! Reward (#8591)", 1008591},
    {"Quest: Tiara of the Oracle Reward (#8592)", 1008592},
    {"Quest: Trousers of the Oracle Reward (#8593)", 1008593},
    {"Quest: Mantle of the Oracle Reward (#8594)", 1008594},
    {"Quest: Footwraps of the Oracle Reward (#8596)", 1008596},
    {"Quest: The Horde Needs Rugged Leather! Reward (#8600)", 1008600},
    {"Quest: The Horde Needs More Rugged Leather! Reward (#8601)", 1008601},
    {"Quest: Stormcaller's Pauldrons Reward (#8602)", 1008602},
    {"Quest: Vestments of the Oracle Reward (#8603)", 1008603},
    {"Quest: The Horde Needs Wool Bandages! Reward (#8604)", 1008604},
    {"Quest: The Horde Needs More Wool Bandages! Reward (#8605)", 1008605},
    {"Quest: The Horde Needs Mageweave Bandages! Reward (#8607)", 1008607},
    {"Quest: The Horde Needs More Mageweave Bandages! Reward (#8608)", 1008608},
    {"Quest: The Horde Needs Runecloth Bandages! Reward (#8609)", 1008609},
    {"Quest: The Horde Needs More Runecloth Bandages! Reward (#8610)", 1008610},
    {"Quest: The Horde Needs Lean Wolf Steaks! Reward (#8611)", 1008611},
    {"Quest: The Horde Needs More Lean Wolf Steaks! Reward (#8612)", 1008612},
    {"Quest: The Horde Needs Spotted Yellowtail! Reward (#8613)", 1008613},
    {"Quest: The Horde Needs More Spotted Yellowtail! Reward (#8614)", 1008614},
    {"Quest: The Horde Needs Baked Salmon! Reward (#8615)", 1008615},
    {"Quest: The Horde Needs More Baked Salmon! Reward (#8616)", 1008616},
    {"Quest: Morndeep the Elder Reward (#8619)", 1008619},
    {"Quest: The Only Prescription Reward (#8620)", 1008620},
    {"Quest: Stormcaller's Footguards Reward (#8621)", 1008621},
    {"Quest: Stormcaller's Hauberk Reward (#8622)", 1008622},
    {"Quest: Stormcaller's Diadem Reward (#8623)", 1008623},
    {"Quest: Stormcaller's Leggings Reward (#8624)", 1008624},
    {"Quest: Enigma Shoulderpads Reward (#8625)", 1008625},
    {"Quest: Striker's Footguards Reward (#8626)", 1008626},
    {"Quest: Avenger's Breastplate Reward (#8627)", 1008627},
    {"Quest: Avenger's Crown Reward (#8628)", 1008628},
    {"Quest: Avenger's Legguards Reward (#8629)", 1008629},
    {"Quest: Avenger's Pauldrons Reward (#8630)", 1008630},
    {"Quest: Enigma Leggings Reward (#8631)", 1008631},
    {"Quest: Enigma Circlet Reward (#8632)", 1008632},
    {"Quest: Enigma Robes Reward (#8633)", 1008633},
    {"Quest: Enigma Boots Reward (#8634)", 1008634},
    {"Quest: Splitrock the Elder Reward (#8635)", 1008635},
    {"Quest: Rumblerock the Elder Reward (#8636)", 1008636},
    {"Quest: Deathdealer's Boots Reward (#8637)", 1008637},
    {"Quest: Deathdealer's Vest Reward (#8638)", 1008638},
    {"Quest: Deathdealer's Helm Reward (#8639)", 1008639},
    {"Quest: Deathdealer's Leggings Reward (#8640)", 1008640},
    {"Quest: Deathdealer's Spaulders Reward (#8641)", 1008641},
    {"Quest: Silvervein the Elder Reward (#8642)", 1008642},
    {"Quest: Highpeak the Elder Reward (#8643)", 1008643},
    {"Quest: Stonefort the Elder Reward (#8644)", 1008644},
    {"Quest: Obsidian the Elder Reward (#8645)", 1008645},
    {"Quest: Hammershout the Elder Reward (#8646)", 1008646},
    {"Quest: Bellowrage the Elder Reward (#8647)", 1008647},
    {"Quest: Darkcore the Elder Reward (#8648)", 1008648},
    {"Quest: Stormbrow the Elder Reward (#8649)", 1008649},
    {"Quest: Snowcrown the Elder Reward (#8650)", 1008650},
    {"Quest: Ironband the Elder Reward (#8651)", 1008651},
    {"Quest: Graveborn the Elder Reward (#8652)", 1008652},
    {"Quest: Goldwell the Elder Reward (#8653)", 1008653},
    {"Quest: Primestone the Elder Reward (#8654)", 1008654},
    {"Quest: Avenger's Greaves Reward (#8655)", 1008655},
    {"Quest: Striker's Hauberk Reward (#8656)", 1008656},
    {"Quest: Striker's Diadem Reward (#8657)", 1008657},
    {"Quest: Striker's Leggings Reward (#8658)", 1008658},
    {"Quest: Striker's Pauldrons Reward (#8659)", 1008659},
    {"Quest: Doomcaller's Footwraps Reward (#8660)", 1008660},
    {"Quest: Doomcaller's Robes Reward (#8661)", 1008661},
    {"Quest: Doomcaller's Circlet Reward (#8662)", 1008662},
    {"Quest: Doomcaller's Trousers Reward (#8663)", 1008663},
    {"Quest: Doomcaller's Mantle Reward (#8664)", 1008664},
    {"Quest: Genesis Boots Reward (#8665)", 1008665},
    {"Quest: Genesis Vest Reward (#8666)", 1008666},
    {"Quest: Genesis Helm Reward (#8667)", 1008667},
    {"Quest: Genesis Trousers Reward (#8668)", 1008668},
    {"Quest: Genesis Shoulderpads Reward (#8669)", 1008669},
    {"Quest: Runetotem the Elder Reward (#8670)", 1008670},
    {"Quest: Ragetotem the Elder Reward (#8671)", 1008671},
    {"Quest: Stonespire the Elder Reward (#8672)", 1008672},
    {"Quest: Bloodhoof the Elder Reward (#8673)", 1008673},
    {"Quest: Winterhoof the Elder Reward (#8674)", 1008674},
    {"Quest: Skychaser the Elder Reward (#8675)", 1008675},
    {"Quest: Wildmane the Elder Reward (#8676)", 1008676},
    {"Quest: Darkhorn the Elder Reward (#8677)", 1008677},
    {"Quest: Wheathoof the Elder Reward (#8678)", 1008678},
    {"Quest: Grimtotem the Elder Reward (#8679)", 1008679},
    {"Quest: Windtotem the Elder Reward (#8680)", 1008680},
    {"Quest: Thunderhorn the Elder Reward (#8681)", 1008681},
    {"Quest: Skyseer the Elder Reward (#8682)", 1008682},
    {"Quest: Dawnstrider the Elder Reward (#8683)", 1008683},
    {"Quest: Dreamseer the Elder Reward (#8684)", 1008684},
    {"Quest: Mistwalker the Elder Reward (#8685)", 1008685},
    {"Quest: High Mountain the Elder Reward (#8686)", 1008686},
    {"Quest: Target: Hive'Zora Tunnelers Reward (#8687)", 1008687},
    {"Quest: Windrun the Elder Reward (#8688)", 1008688},
    {"Quest: Shroud of Infinite Wisdom Reward (#8689)", 1008689},
    {"Quest: Cloak of the Gathering Storm Reward (#8690)", 1008690},
    {"Quest: Drape of Vaulted Secrets Reward (#8691)", 1008691},
    {"Quest: Cloak of Unending Life Reward (#8692)", 1008692},
    {"Quest: Cloak of Veiled Shadows Reward (#8693)", 1008693},
    {"Quest: Shroud of Unspoken Names Reward (#8694)", 1008694},
    {"Quest: Cape of Eternal Justice Reward (#8695)", 1008695},
    {"Quest: Cloak of the Unseen Path Reward (#8696)", 1008696},
    {"Quest: Ring of Infinite Wisdom Reward (#8697)", 1008697},
    {"Quest: Ring of the Gathering Storm Reward (#8698)", 1008698},
    {"Quest: Band of Vaulted Secrets Reward (#8699)", 1008699},
    {"Quest: Band of Unending Life Reward (#8700)", 1008700},
    {"Quest: Band of Veiled Shadows Reward (#8701)", 1008701},
    {"Quest: Ring of Unspoken Names Reward (#8702)", 1008702},
    {"Quest: Ring of Eternal Justice Reward (#8703)", 1008703},
    {"Quest: Signet of the Unseen Path Reward (#8704)", 1008704},
    {"Quest: Gavel of Infinite Wisdom Reward (#8705)", 1008705},
    {"Quest: Hammer of the Gathering Storm Reward (#8706)", 1008706},
    {"Quest: Blade of Vaulted Secrets Reward (#8707)", 1008707},
    {"Quest: Mace of Unending Life Reward (#8708)", 1008708},
    {"Quest: Dagger of Veiled Shadows Reward (#8709)", 1008709},
    {"Quest: Kris of Unspoken Names Reward (#8710)", 1008710},
    {"Quest: Blade of Eternal Justice Reward (#8711)", 1008711},
    {"Quest: Scythe of the Unseen Path Reward (#8712)", 1008712},
    {"Quest: Starsong the Elder Reward (#8713)", 1008713},
    {"Quest: Moonstrike the Elder Reward (#8714)", 1008714},
    {"Quest: Bladeleaf the Elder Reward (#8715)", 1008715},
    {"Quest: Starglade the Elder Reward (#8716)", 1008716},
    {"Quest: Moonwarden the Elder Reward (#8717)", 1008717},
    {"Quest: Bladeswift the Elder Reward (#8718)", 1008718},
    {"Quest: Bladesing the Elder Reward (#8719)", 1008719},
    {"Quest: Skygleam the Elder Reward (#8720)", 1008720},
    {"Quest: Starweave the Elder Reward (#8721)", 1008721},
    {"Quest: Meadowrun the Elder Reward (#8722)", 1008722},
    {"Quest: Nightwind the Elder Reward (#8723)", 1008723},
    {"Quest: Morningdew the Elder Reward (#8724)", 1008724},
    {"Quest: Riversong the Elder Reward (#8725)", 1008725},
    {"Quest: Brightspear the Elder Reward (#8726)", 1008726},
    {"Quest: Farwhisper the Elder Reward (#8727)", 1008727},
    {"Quest: The Wrath of Neptulon Reward (#8729)", 1008729},
    {"Quest: Nefarius's Corruption Reward (#8730)", 1008730},
    {"Quest: Field Duty Reward (#8731)", 1008731},
    {"Quest: Field Duty Papers Reward (#8732)", 1008732},
    {"Quest: The Nightmare Manifests Reward (#8736)", 1008736},
    {"Quest: Azure Templar Reward (#8737)", 1008737},
    {"Quest: Hive'Regal Scout Report Reward (#8738)", 1008738},
    {"Quest: Hive'Ashi Scout Report Reward (#8739)", 1008739},
    {"Quest: Twilight Marauders Reward (#8740)", 1008740},
    {"Quest: Bang a Gong! Reward (#8743)", 1008743},
    {"Quest: A Carefully Wrapped Present Reward (#8744)", 1008744},
    {"Quest: Treasure of the Timeless One Reward (#8745)", 1008745},
    {"Quest: Metzen the Reindeer Reward (#8746)", 1008746},
    {"Quest: The Path of the Protector Reward (#8747)", 1008747},
    {"Quest: The Path of the Protector Reward (#8748)", 1008748},
    {"Quest: The Path of the Protector Reward (#8749)", 1008749},
    {"Quest: The Path of the Protector Reward (#8750)", 1008750},
    {"Quest: The Protector of Kalimdor Reward (#8751)", 1008751},
    {"Quest: The Path of the Conqueror Reward (#8752)", 1008752},
    {"Quest: The Path of the Conqueror Reward (#8753)", 1008753},
    {"Quest: The Path of the Conqueror Reward (#8754)", 1008754},
    {"Quest: The Path of the Conqueror Reward (#8755)", 1008755},
    {"Quest: The Qiraji Conqueror Reward (#8756)", 1008756},
    {"Quest: The Path of the Invoker Reward (#8757)", 1008757},
    {"Quest: The Path of the Invoker Reward (#8758)", 1008758},
    {"Quest: The Path of the Invoker Reward (#8759)", 1008759},
    {"Quest: The Path of the Invoker Reward (#8760)", 1008760},
    {"Quest: The Grand Invoker Reward (#8761)", 1008761},
    {"Quest: Metzen the Reindeer Reward (#8762)", 1008762},
    {"Quest: The Hero of the Day Reward (#8763)", 1008763},
    {"Quest: The Changing of Paths - Protector No More Reward (#8764)", 1008764},
    {"Quest: The Changing of Paths - Invoker No More Reward (#8765)", 1008765},
    {"Quest: The Changing of Paths - Conqueror No More Reward (#8766)", 1008766},
    {"Quest: A Gently Shaken Gift Reward (#8767)", 1008767},
    {"Quest: A Gaily Wrapped Present Reward (#8768)", 1008768},
    {"Quest: A Ticking Present Reward (#8769)", 1008769},
    {"Quest: Target: Hive'Ashi Defenders Reward (#8770)", 1008770},
    {"Quest: Target: Hive'Ashi Sandstalkers Reward (#8771)", 1008771},
    {"Quest: Target: Hive'Zora Waywatchers Reward (#8772)", 1008772},
    {"Quest: Target: Hive'Zora Reavers Reward (#8773)", 1008773},
    {"Quest: Target: Hive'Regal Ambushers Reward (#8774)", 1008774},
    {"Quest: Target: Hive'Regal Spitfires Reward (#8775)", 1008775},
    {"Quest: Target: Hive'Regal Slavemakers Reward (#8776)", 1008776},
    {"Quest: Target: Hive'Regal Burrowers Reward (#8777)", 1008777},
    {"Quest: The Ironforge Brigade Needs Explosives! Reward (#8778)", 1008778},
    {"Quest: Scrying Materials Reward (#8779)", 1008779},
    {"Quest: Armor Kits for the Field Reward (#8780)", 1008780},
    {"Quest: Arms for the Field Reward (#8781)", 1008781},
    {"Quest: Uniform Supplies Reward (#8782)", 1008782},
    {"Quest: Extraordinary Materials Reward (#8783)", 1008783},
    {"Quest: The Orgrimmar Legion Needs Mojo! Reward (#8785)", 1008785},
    {"Quest: Arms for the Field Reward (#8786)", 1008786},
    {"Quest: Armor Kits for the Field Reward (#8787)", 1008787},
    {"Quest: A Gently Shaken Gift Reward (#8788)", 1008788},
    {"Quest: Imperial Qiraji Armaments Reward (#8789)", 1008789},
    {"Quest: Imperial Qiraji Regalia Reward (#8790)", 1008790},
    {"Quest: The Fall of Ossirian Reward (#8791)", 1008791},
    {"Quest: The Hero of the Day Reward (#8799)", 1008799},
    {"Quest: The Savior of Kalimdor Reward (#8802)", 1008802},
    {"Quest: A Festive Gift Reward (#8803)", 1008803},
    {"Quest: Desert Survival Kits Reward (#8804)", 1008804},
    {"Quest: Boots for the Guard Reward (#8805)", 1008805},
    {"Quest: Grinding Stones for the Guard Reward (#8806)", 1008806},
    {"Quest: Scrying Materials Reward (#8807)", 1008807},
    {"Quest: Uniform Supplies Reward (#8808)", 1008808},
    {"Quest: Extraordinary Materials Reward (#8809)", 1008809},
    {"Quest: Bandages for the Field Reward (#8810)", 1008810},
    {"Quest: The Ultimate Deception Reward (#8829)", 1008829},
    {"Quest: Five Signets for War Supplies Reward (#8846)", 1008846},
    {"Quest: Ten Signets for War Supplies Reward (#8847)", 1008847},
    {"Quest: Fifteen Signets for War Supplies Reward (#8848)", 1008848},
    {"Quest: Twenty Signets for War Supplies Reward (#8849)", 1008849},
    {"Quest: Thirty Signets for War Supplies Reward (#8850)", 1008850},
    {"Quest: Five Signets for War Supplies Reward (#8851)", 1008851},
    {"Quest: Ten Signets for War Supplies Reward (#8852)", 1008852},
    {"Quest: Fifteen Signets for War Supplies Reward (#8853)", 1008853},
    {"Quest: Twenty Signets for War Supplies Reward (#8854)", 1008854},
    {"Quest: Thirty Signets for War Supplies Reward (#8855)", 1008855},
    {"Quest: Desert Survival Kits Reward (#8856)", 1008856},
    {"Quest: Secrets of the Colossus - Ashi Reward (#8857)", 1008857},
    {"Quest: Secrets of the Colossus - Regal Reward (#8858)", 1008858},
    {"Quest: Secrets of the Colossus - Zora Reward (#8859)", 1008859},
    {"Quest: Elune's Candle Reward (#8862)", 1008862},
    {"Quest: Festival Dumplings Reward (#8863)", 1008863},
    {"Quest: Festive Lunar Dresses Reward (#8864)", 1008864},
    {"Quest: Festive Lunar Pant Suits Reward (#8865)", 1008865},
    {"Quest: Bronzebeard the Elder Reward (#8866)", 1008866},
    {"Quest: Lunar Fireworks Reward (#8867)", 1008867},
    {"Quest: Elune's Blessing Reward (#8868)", 1008868},
    {"Quest: Sweet Serenity Reward (#8869)", 1008869},
    {"Quest: Small Rockets Reward (#8876)", 1008876},
    {"Quest: Firework Launcher Reward (#8877)", 1008877},
    {"Quest: Festive Recipes Reward (#8878)", 1008878},
    {"Quest: Large Rockets Reward (#8879)", 1008879},
    {"Quest: Cluster Rockets Reward (#8880)", 1008880},
    {"Quest: Large Cluster Rockets Reward (#8881)", 1008881},
    {"Quest: Cluster Launcher Reward (#8882)", 1008882},
    {"Quest: The Ring of Mmmrrrggglll Reward (#8885)", 1008885},
    {"Quest: Word from the Spire Reward (#8890)", 1008890},
    {"Quest: The Super Egg-O-Matic Reward (#8893)", 1008893},
    {"Quest: An Earnest Proposition Reward (#8905)", 1008905},
    {"Quest: An Earnest Proposition Reward (#8906)", 1008906},
    {"Quest: An Earnest Proposition Reward (#8907)", 1008907},
    {"Quest: An Earnest Proposition Reward (#8908)", 1008908},
    {"Quest: An Earnest Proposition Reward (#8909)", 1008909},
    {"Quest: An Earnest Proposition Reward (#8910)", 1008910},
    {"Quest: An Earnest Proposition Reward (#8911)", 1008911},
    {"Quest: An Earnest Proposition Reward (#8912)", 1008912},
    {"Quest: An Earnest Proposition Reward (#8913)", 1008913},
    {"Quest: An Earnest Proposition Reward (#8914)", 1008914},
    {"Quest: An Earnest Proposition Reward (#8915)", 1008915},
    {"Quest: An Earnest Proposition Reward (#8916)", 1008916},
    {"Quest: An Earnest Proposition Reward (#8917)", 1008917},
    {"Quest: An Earnest Proposition Reward (#8918)", 1008918},
    {"Quest: An Earnest Proposition Reward (#8919)", 1008919},
    {"Quest: An Earnest Proposition Reward (#8920)", 1008920},
    {"Quest: The Ectoplasmic Distiller Reward (#8921)", 1008921},
    {"Quest: Just Compensation Reward (#8926)", 1008926},
    {"Quest: Just Compensation Reward (#8927)", 1008927},
    {"Quest: Just Compensation Reward (#8931)", 1008931},
    {"Quest: Just Compensation Reward (#8932)", 1008932},
    {"Quest: Just Compensation Reward (#8933)", 1008933},
    {"Quest: Just Compensation Reward (#8934)", 1008934},
    {"Quest: Just Compensation Reward (#8935)", 1008935},
    {"Quest: Just Compensation Reward (#8936)", 1008936},
    {"Quest: Just Compensation Reward (#8937)", 1008937},
    {"Quest: Just Compensation Reward (#8938)", 1008938},
    {"Quest: Just Compensation Reward (#8939)", 1008939},
    {"Quest: Just Compensation Reward (#8940)", 1008940},
    {"Quest: Just Compensation Reward (#8941)", 1008941},
    {"Quest: Just Compensation Reward (#8942)", 1008942},
    {"Quest: Just Compensation Reward (#8943)", 1008943},
    {"Quest: Just Compensation Reward (#8944)", 1008944},
    {"Quest: Dead Man's Plea Reward (#8945)", 1008945},
    {"Quest: Falrin's Vendetta Reward (#8949)", 1008949},
    {"Quest: Anthion's Parting Words Reward (#8951)", 1008951},
    {"Quest: Anthion's Parting Words Reward (#8952)", 1008952},
    {"Quest: Anthion's Parting Words Reward (#8953)", 1008953},
    {"Quest: Anthion's Parting Words Reward (#8954)", 1008954},
    {"Quest: Anthion's Parting Words Reward (#8955)", 1008955},
    {"Quest: Anthion's Parting Words Reward (#8956)", 1008956},
    {"Quest: Anthion's Parting Words Reward (#8957)", 1008957},
    {"Quest: Anthion's Parting Words Reward (#8958)", 1008958},
    {"Quest: Anthion's Parting Words Reward (#8959)", 1008959},
    {"Quest: REUSE Reward (#8971)", 1008971},
    {"Quest: REUSE Reward (#8972)", 1008972},
    {"Quest: REUSE Reward (#8973)", 1008973},
    {"Quest: REUSE Reward (#8974)", 1008974},
    {"Quest: REUSE Reward (#8975)", 1008975},
    {"Quest: REUSE Reward (#8976)", 1008976},
    {"Quest: Zinge's Assessment Reward (#8980)", 1008980},
    {"Quest: Gift Giving Reward (#8981)", 1008981},
    {"Quest: More Components of Importance Reward (#8985)", 1008985},
    {"Quest: More Components of Importance Reward (#8986)", 1008986},
    {"Quest: More Components of Importance Reward (#8987)", 1008987},
    {"Quest: More Components of Importance Reward (#8988)", 1008988},
    {"Quest: Gift Giving Reward (#8993)", 1008993},
    {"Quest: Return to Bodley Reward (#8996)", 1008996},
    {"Quest: Saving the Best for Last Reward (#8999)", 1008999},
    {"Quest: Saving the Best for Last Reward (#9000)", 1009000},
    {"Quest: Saving the Best for Last Reward (#9001)", 1009001},
    {"Quest: Saving the Best for Last Reward (#9002)", 1009002},
    {"Quest: Saving the Best for Last Reward (#9003)", 1009003},
    {"Quest: Saving the Best for Last Reward (#9004)", 1009004},
    {"Quest: Saving the Best for Last Reward (#9005)", 1009005},
    {"Quest: Saving the Best for Last Reward (#9006)", 1009006},
    {"Quest: Saving the Best for Last Reward (#9007)", 1009007},
    {"Quest: Saving the Best for Last Reward (#9008)", 1009008},
    {"Quest: Saving the Best for Last Reward (#9009)", 1009009},
    {"Quest: Saving the Best for Last Reward (#9010)", 1009010},
    {"Quest: Saving the Best for Last Reward (#9011)", 1009011},
    {"Quest: Saving the Best for Last Reward (#9012)", 1009012},
    {"Quest: Saving the Best for Last Reward (#9013)", 1009013},
    {"Quest: Saving the Best for Last Reward (#9014)", 1009014},
    {"Quest: Anthion's Parting Words Reward (#9016)", 1009016},
    {"Quest: Anthion's Parting Words Reward (#9017)", 1009017},
    {"Quest: Anthion's Parting Words Reward (#9018)", 1009018},
    {"Quest: Anthion's Parting Words Reward (#9019)", 1009019},
    {"Quest: Anthion's Parting Words Reward (#9020)", 1009020},
    {"Quest: Anthion's Parting Words Reward (#9021)", 1009021},
    {"Quest: Anthion's Parting Words Reward (#9022)", 1009022},
    {"Quest: The Perfect Poison Reward (#9023)", 1009023},
    {"Quest: Morgan's Discovery Reward (#9025)", 1009025},
    {"Quest: A Bubbling Cauldron Reward (#9029)", 1009029},
    {"Quest: Dreadnaught Breastplate Reward (#9034)", 1009034},
    {"Quest: Dreadnaught Legplates Reward (#9036)", 1009036},
    {"Quest: Dreadnaught Helmet Reward (#9037)", 1009037},
    {"Quest: Dreadnaught Pauldrons Reward (#9038)", 1009038},
    {"Quest: Dreadnaught Sabatons Reward (#9039)", 1009039},
    {"Quest: Dreadnaught Gauntlets Reward (#9040)", 1009040},
    {"Quest: Dreadnaught Waistguard Reward (#9041)", 1009041},
    {"Quest: Dreadnaught Bracers Reward (#9042)", 1009042},
    {"Quest: Redemption Tunic Reward (#9043)", 1009043},
    {"Quest: Redemption Legguards Reward (#9044)", 1009044},
    {"Quest: Redemption Headpiece Reward (#9045)", 1009045},
    {"Quest: Redemption Spaulders Reward (#9046)", 1009046},
    {"Quest: Redemption Boots Reward (#9047)", 1009047},
    {"Quest: Redemption Handguards Reward (#9048)", 1009048},
    {"Quest: Redemption Girdle Reward (#9049)", 1009049},
    {"Quest: Redemption Wristguards Reward (#9050)", 1009050},
    {"Quest: Bloodpetal Poison Reward (#9052)", 1009052},
    {"Quest: A Better Ingredient Reward (#9053)", 1009053},
    {"Quest: Cryptstalker Tunic Reward (#9054)", 1009054},
    {"Quest: Cryptstalker Legguards Reward (#9055)", 1009055},
    {"Quest: Cryptstalker Headpiece Reward (#9056)", 1009056},
    {"Quest: Cryptstalker Spaulders Reward (#9057)", 1009057},
    {"Quest: Cryptstalker Boots Reward (#9058)", 1009058},
    {"Quest: Cryptstalker Handguards Reward (#9059)", 1009059},
    {"Quest: Cryptstalker Girdle Reward (#9060)", 1009060},
    {"Quest: Cryptstalker Wristguards Reward (#9061)", 1009061},
    {"Quest: The Pattymac Special Reward (#9065)", 1009065},
    {"Quest: Swift Discipline Reward (#9066)", 1009066},
    {"Quest: The Party Never Ends Reward (#9067)", 1009067},
    {"Quest: Earthshatter Tunic Reward (#9068)", 1009068},
    {"Quest: Earthshatter Legguards Reward (#9069)", 1009069},
    {"Quest: Earthshatter Headpiece Reward (#9070)", 1009070},
    {"Quest: Earthshatter Spaulders Reward (#9071)", 1009071},
    {"Quest: Earthshatter Boots Reward (#9072)", 1009072},
    {"Quest: Earthshatter Handguards Reward (#9073)", 1009073},
    {"Quest: Earthshatter Girdle Reward (#9074)", 1009074},
    {"Quest: Earthshatter Wristguards Reward (#9075)", 1009075},
    {"Quest: Wretched Ringleader Reward (#9076)", 1009076},
    {"Quest: Bonescythe Breastplate Reward (#9077)", 1009077},
    {"Quest: Bonescythe Legplates Reward (#9078)", 1009078},
    {"Quest: Bonescythe Helmet Reward (#9079)", 1009079},
    {"Quest: Bonescythe Pauldrons Reward (#9080)", 1009080},
    {"Quest: Bonescythe Sabatons Reward (#9081)", 1009081},
    {"Quest: Bonescythe Gauntlets Reward (#9082)", 1009082},
    {"Quest: Bonescythe Waistguard Reward (#9083)", 1009083},
    {"Quest: Bonescythe Bracers Reward (#9084)", 1009084},
    {"Quest: Shadows of Doom Reward (#9085)", 1009085},
    {"Quest: Dreamwalker Tunic Reward (#9086)", 1009086},
    {"Quest: Dreamwalker Legguards Reward (#9087)", 1009087},
    {"Quest: Dreamwalker Headpiece Reward (#9088)", 1009088},
    {"Quest: Dreamwalker Spaulders Reward (#9089)", 1009089},
    {"Quest: Dreamwalker Boots Reward (#9090)", 1009090},
    {"Quest: Dreamwalker Handguards Reward (#9091)", 1009091},
    {"Quest: Dreamwalker Girdle Reward (#9092)", 1009092},
    {"Quest: Dreamwalker Wristguards Reward (#9093)", 1009093},
    {"Quest: Argent Dawn Gloves Reward (#9094)", 1009094},
    {"Quest: Frostfire Robe Reward (#9095)", 1009095},
    {"Quest: Frostfire Leggings Reward (#9096)", 1009096},
    {"Quest: Frostfire Circlet Reward (#9097)", 1009097},
    {"Quest: Frostfire Shoulderpads Reward (#9098)", 1009098},
    {"Quest: Frostfire Sandals Reward (#9099)", 1009099},
    {"Quest: Frostfire Gloves Reward (#9100)", 1009100},
    {"Quest: Frostfire Belt Reward (#9101)", 1009101},
    {"Quest: Frostfire Bindings Reward (#9102)", 1009102},
    {"Quest: Plagueheart Robe Reward (#9103)", 1009103},
    {"Quest: Plagueheart Leggings Reward (#9104)", 1009104},
    {"Quest: Plagueheart Circlet Reward (#9105)", 1009105},
    {"Quest: Plagueheart Shoulderpads Reward (#9106)", 1009106},
    {"Quest: Plagueheart Sandals Reward (#9107)", 1009107},
    {"Quest: Plagueheart Gloves Reward (#9108)", 1009108},
    {"Quest: Plagueheart Belt Reward (#9109)", 1009109},
    {"Quest: Plagueheart Bindings Reward (#9110)", 1009110},
    {"Quest: Robe of Faith Reward (#9111)", 1009111},
    {"Quest: Leggings of Faith Reward (#9112)", 1009112},
    {"Quest: Circlet of Faith Reward (#9113)", 1009113},
    {"Quest: Shoulderpads of Faith Reward (#9114)", 1009114},
    {"Quest: Sandals of Faith Reward (#9115)", 1009115},
    {"Quest: Gloves of Faith Reward (#9116)", 1009116},
    {"Quest: Belt of Faith Reward (#9117)", 1009117},
    {"Quest: Bindings of Faith Reward (#9118)", 1009118},
    {"Quest: The Fall of Kel'Thuzad Reward (#9120)", 1009120},
    {"Quest: Cryptstalker Armor Doesn't Make Itself... Reward (#9124)", 1009124},
    {"Quest: Crypt Fiend Parts Reward (#9125)", 1009125},
    {"Quest: Bonescythe Digs Reward (#9126)", 1009126},
    {"Quest: Bone Fragments Reward (#9127)", 1009127},
    {"Quest: The Elemental Equation Reward (#9128)", 1009128},
    {"Quest: Core of Elements Reward (#9129)", 1009129},
    {"Quest: Binding the Dreadnaught Reward (#9131)", 1009131},
    {"Quest: Dark Iron Scraps Reward (#9132)", 1009132},
    {"Quest: Savage Flora Reward (#9136)", 1009136},
    {"Quest: Savage Fronds Reward (#9137)", 1009137},
    {"Quest: Goldenmist Village Reward (#9139)", 1009139},
    {"Quest: Windrunner Village Reward (#9140)", 1009140},
    {"Quest: They Call Me \"The Rooster\" Reward (#9141)", 1009141},
    {"Quest: Craftsman's Writ Reward (#9142)", 1009142},
    {"Quest: Report to Captain Helios Reward (#9146)", 1009146},
    {"Quest: Delivery to Tranquillien Reward (#9148)", 1009148},
    {"Quest: The Plagued Coast Reward (#9149)", 1009149},
    {"Quest: Under the Shadow Reward (#9153)", 1009153},
    {"Quest: Wanted: Knucklerot and Luzran Reward (#9156)", 1009156},
    {"Quest: Curbing the Plague Reward (#9159)", 1009159},
    {"Quest: Investigate An'daroth Reward (#9160)", 1009160},
    {"Quest: Writ of Safe Passage Reward (#9165)", 1009165},
    {"Quest: The Traitor's Destruction Reward (#9167)", 1009167},
    {"Quest: Deactivate An'owyn Reward (#9169)", 1009169},
    {"Quest: Dar'Khan's Lieutenants Reward (#9170)", 1009170},
    {"Quest: Culinary Crunch Reward (#9171)", 1009171},
    {"Quest: Report to Magister Kaendris Reward (#9172)", 1009172},
    {"Quest: The Twin Ziggurats Reward (#9176)", 1009176},
    {"Quest: Craftsman's Writ - Dense Weightstone Reward (#9178)", 1009178},
    {"Quest: Craftsman's Writ - Imperial Plate Chest Reward (#9179)", 1009179},
    {"Quest: Craftsman's Writ - Volcanic Hammer Reward (#9181)", 1009181},
    {"Quest: Craftsman's Writ - Huge Thorium Battleaxe Reward (#9182)", 1009182},
    {"Quest: Craftsman's Writ - Radiant Circlet Reward (#9183)", 1009183},
    {"Quest: Craftsman's Writ - Wicked Leather Headband Reward (#9184)", 1009184},
    {"Quest: Craftsman's Writ - Rugged Armor Kit Reward (#9185)", 1009185},
    {"Quest: Craftsman's Writ - Wicked Leather Belt Reward (#9186)", 1009186},
    {"Quest: Craftsman's Writ - Runic Leather Pants Reward (#9187)", 1009187},
    {"Quest: Craftsman's Writ - Brightcloth Pants Reward (#9188)", 1009188},
    {"Quest: Craftsman's Writ - Runecloth Boots Reward (#9190)", 1009190},
    {"Quest: Craftsman's Writ - Runecloth Bag Reward (#9191)", 1009191},
    {"Quest: Craftsman's Writ - Runecloth Robe Reward (#9194)", 1009194},
    {"Quest: Craftsman's Writ - Goblin Sapper Charge Reward (#9195)", 1009195},
    {"Quest: Craftsman's Writ - Thorium Grenade Reward (#9196)", 1009196},
    {"Quest: Craftsman's Writ - Gnomish Battle Chicken Reward (#9197)", 1009197},
    {"Quest: Craftsman's Writ - Thorium Tube Reward (#9198)", 1009198},
    {"Quest: Troll Juju Reward (#9199)", 1009199},
    {"Quest: Craftsman's Writ - Major Mana Potion Reward (#9200)", 1009200},
    {"Quest: Craftsman's Writ - Greater Arcane Protection Potion Reward (#9201)", 1009201},
    {"Quest: Craftsman's Writ - Major Healing Potion Reward (#9202)", 1009202},
    {"Quest: Craftsman's Writ - Potion of Petrification Reward (#9203)", 1009203},
    {"Quest: Craftsman's Writ - Stonescale Eel Reward (#9204)", 1009204},
    {"Quest: Craftsman's Writ - Plated Armorfish Reward (#9205)", 1009205},
    {"Quest: Craftsman's Writ - Lightning Eel Reward (#9206)", 1009206},
    {"Quest: The Savage Guard - Arcanum of Protection Reward (#9208)", 1009208},
    {"Quest: The Savage Guard - Arcanum of Rapidity Reward (#9209)", 1009209},
    {"Quest: The Savage Guard - Arcanum of Focus Reward (#9210)", 1009210},
    {"Quest: The Ice Guard Reward (#9211)", 1009211},
    {"Quest: Escape from the Catacombs Reward (#9212)", 1009212},
    {"Quest: The Shadow Guard Reward (#9213)", 1009213},
    {"Quest: Bring Me Kel'gash's Head! Reward (#9215)", 1009215},
    {"Quest: Rotting Hearts Reward (#9216)", 1009216},
    {"Quest: More Rotting Hearts Reward (#9217)", 1009217},
    {"Quest: Spinal Dust Reward (#9218)", 1009218},
    {"Quest: More Spinal Dust Reward (#9219)", 1009219},
    {"Quest: Superior Armaments of Battle - Friend of the Dawn Reward (#9221)", 1009221},
    {"Quest: Epic Armaments of Battle - Friend of the Dawn Reward (#9222)", 1009222},
    {"Quest: Superior Armaments of Battle - Honored Amongst the Dawn Reward (#9223)", 1009223},
    {"Quest: Epic Armaments of Battle - Honored Amongst the Dawn Reward (#9224)", 1009224},
    {"Quest: Epic Armaments of Battle - Revered Amongst the Dawn Reward (#9225)", 1009225},
    {"Quest: Superior Armaments of Battle - Revered Amongst the Dawn Reward (#9226)", 1009226},
    {"Quest: Superior Armaments of Battle - Exalted Amongst the Dawn Reward (#9227)", 1009227},
    {"Quest: Epic Armaments of Battle - Exalted Amongst the Dawn Reward (#9228)", 1009228},
    {"Quest: Ramaladni's Icy Grasp Reward (#9230)", 1009230},
    {"Quest: reuse Reward (#9231)", 1009231},
    {"Quest: The Only Song I Know... Reward (#9232)", 1009232},
    {"Quest: Icebane Gauntlets Reward (#9234)", 1009234},
    {"Quest: Icebane Bracers Reward (#9235)", 1009235},
    {"Quest: Icebane Breastplate Reward (#9236)", 1009236},
    {"Quest: Glacial Cloak Reward (#9237)", 1009237},
    {"Quest: Glacial Wrists Reward (#9238)", 1009238},
    {"Quest: Glacial Gloves Reward (#9239)", 1009239},
    {"Quest: Glacial Vest Reward (#9240)", 1009240},
    {"Quest: Polar Bracers Reward (#9241)", 1009241},
    {"Quest: Polar Gloves Reward (#9242)", 1009242},
    {"Quest: Polar Tunic Reward (#9243)", 1009243},
    {"Quest: Icy Scale Bracers Reward (#9244)", 1009244},
    {"Quest: Icy Scale Gauntlets Reward (#9245)", 1009245},
    {"Quest: Icy Scale Breastplate Reward (#9246)", 1009246},
    {"Quest: The Keeper's Call Reward (#9247)", 1009247},
    {"Quest: A Humble Offering Reward (#9248)", 1009248},
    {"Quest: 40 Tickets - Schematic: Steam Tonk Controller Reward (#9249)", 1009249},
    {"Quest: Atiesh, Greatstaff of the Guardian Reward (#9257)", 1009257},
    {"Quest: Atiesh, Greatstaff of the Guardian Reward (#9269)", 1009269},
    {"Quest: Atiesh, Greatstaff of the Guardian Reward (#9270)", 1009270},
    {"Quest: Atiesh, Greatstaff of the Guardian Reward (#9271)", 1009271},
    {"Quest: Dressing the Part Reward (#9272)", 1009272},
    {"Quest: Redeem iCoke Prize Voucher Reward (#9273)", 1009273},
    {"Quest: Assault on Zeb'Nowa Reward (#9277)", 1009277},
    {"Quest: Welcome! Reward (#9278)", 1009278},
    {"Quest: Replenishing the Healing Crystals Reward (#9280)", 1009280},
    {"Quest: Rescue the Survivors! Reward (#9283)", 1009283},
    {"Quest: Cracked Necrotic Crystal Reward (#9292)", 1009292},
    {"Quest: Inoculation Reward (#9303)", 1009303},
    {"Quest: Spare Parts Reward (#9305)", 1009305},
    {"Quest: Faint Necrotic Crystal Reward (#9310)", 1009310},
    {"Quest: Blood Elf Spy Reward (#9311)", 1009311},
    {"Quest: Word from Azure Watch Reward (#9314)", 1009314},
    {"Quest: Anok'suten Reward (#9315)", 1009315},
    {"Quest: [TXT] Goblin Savages Reward (#9316)", 1009316},
    {"Quest: Consecrated Sharpening Stones Reward (#9317)", 1009317},
    {"Quest: Blessed Wizard Oil Reward (#9318)", 1009318},
    {"Quest: A Light in Dark Places Reward (#9319)", 1009319},
    {"Quest: Super Mana Potion Reward (#9320)", 1009320},
    {"Quest: Super Healing Potion Reward (#9321)", 1009321},
    {"Quest: Wild Fires in Kalimdor Reward (#9322)", 1009322},
    {"Quest: Wild Fires in the Eastern Kingdoms Reward (#9323)", 1009323},
    {"Quest: Stealing Orgrimmar's Flame Reward (#9324)", 1009324},
    {"Quest: Stealing Thunder Bluff's Flame Reward (#9325)", 1009325},
    {"Quest: Stealing the Undercity's Flame Reward (#9326)", 1009326},
    {"Quest: Stealing Stormwind's Flame Reward (#9330)", 1009330},
    {"Quest: Stealing Ironforge's Flame Reward (#9331)", 1009331},
    {"Quest: Stealing Darnassus's Flame Reward (#9332)", 1009332},
    {"Quest: Argent Dawn Gloves Reward (#9333)", 1009333},
    {"Quest: Blessed Wizard Oil Reward (#9334)", 1009334},
    {"Quest: Consecrated Sharpening Stones Reward (#9335)", 1009335},
    {"Quest: Super Healing Potion Reward (#9336)", 1009336},
    {"Quest: Super Mana Potion Reward (#9337)", 1009337},
    {"Quest: A Thief's Reward Reward (#9339)", 1009339},
    {"Quest: Tabard of the Argent Dawn Reward (#9341)", 1009341},
    {"Quest: Marauding Crust Bursters Reward (#9342)", 1009342},
    {"Quest: Tabard of the Argent Dawn Reward (#9343)", 1009343},
    {"Quest: Preparing the Salve Reward (#9345)", 1009345},
    {"Quest: Ravager Roundup Reward (#9348)", 1009348},
    {"Quest: Ravager Egg Roundup Reward (#9349)", 1009349},
    {"Quest: A Peon's Work is Never Done Reward (#9350)", 1009350},
    {"Quest: Voidwalkers Gone Wild Reward (#9351)", 1009351},
    {"Quest: Redeem iCoke Gift Box Voucher Reward (#9353)", 1009353},
    {"Quest: Searching for New Materials Reward (#9354)", 1009354},
    {"Quest: A Job for an Intelligent Man Reward (#9355)", 1009355},
    {"Quest: Smooth as Butter Reward (#9356)", 1009356},
    {"Quest: Helboar, the Other White Meat Reward (#9361)", 1009361},
    {"Quest: Warning Fairbreeze Village Reward (#9363)", 1009363},
    {"Quest: A Thief's Reward Reward (#9365)", 1009365},
    {"Quest: The Festival of Fire Reward (#9367)", 1009367},
    {"Quest: The Festival of Fire Reward (#9368)", 1009368},
    {"Quest: Replenishing the Healing Crystals Reward (#9369)", 1009369},
    {"Quest: The Cleansing Must Be Stopped Reward (#9370)", 1009370},
    {"Quest: A Pilgrim's Plight Reward (#9376)", 1009376},
    {"Quest: The Fate of the Clefthoof Reward (#9382)", 1009382},
    {"Quest: A Light in Dark Places Reward (#9386)", 1009386},
    {"Quest: Source of the Corruption Reward (#9387)", 1009387},
    {"Quest: Flickering Flames in Kalimdor Reward (#9388)", 1009388},
    {"Quest: Flickering Flames in the Eastern Kingdoms Reward (#9389)", 1009389},
    {"Quest: Marking the Path Reward (#9391)", 1009391},
    {"Quest: Recently Living Reward (#9404)", 1009404},
    {"Quest: Avruu's Orb Reward (#9418)", 1009418},
    {"Quest: Scouring the Desert Reward (#9419)", 1009419},
    {"Quest: The Finest Down Reward (#9420)", 1009420},
    {"Quest: Scouring the Desert Reward (#9422)", 1009422},
    {"Quest: Makuru's Vengeance Reward (#9424)", 1009424},
    {"Quest: Cleansing the Waters Reward (#9427)", 1009427},
    {"Quest: Twilight of the Dawn Runner Reward (#9437)", 1009437},
    {"Quest: Envoy to the Mag'har Reward (#9441)", 1009441},
    {"Quest: Administering the Salve Reward (#9447)", 1009447},
    {"Quest: Call of Earth Reward (#9451)", 1009451},
    {"Quest: Red Snapper - Very Tasty! Reward (#9452)", 1009452},
    {"Quest: The Great Moongraze Hunt Reward (#9454)", 1009454},
    {"Quest: Nightstalker Clean Up, Isle 2... Reward (#9456)", 1009456},
    {"Quest: Combining Forces Reward (#9460)", 1009460},
    {"Quest: Wanted: Blacktalon the Savage Reward (#9466)", 1009466},
    {"Quest: Arelion's Mistress Reward (#9472)", 1009472},
    {"Quest: A Simple Robe Reward (#9488)", 1009488},
    {"Quest: Cleansing the Scar Reward (#9489)", 1009489},
    {"Quest: The Rock Flayer Matriarch Reward (#9490)", 1009490},
    {"Quest: Greed Reward (#9491)", 1009491},
    {"Quest: Turning the Tide Reward (#9492)", 1009492},
    {"Quest: Fel Embers Reward (#9494)", 1009494},
    {"Quest: The Will of the Warchief Reward (#9495)", 1009495},
    {"Quest: Emblem of the Fel Horde Reward (#9497)", 1009497},
    {"Quest: Call of Water Reward (#9509)", 1009509},
    {"Quest: Cookie's Jumbo Gumbo Reward (#9512)", 1009512},
    {"Quest: Warlord Sriss'tiz Reward (#9515)", 1009515},
    {"Quest: Never Again! Reward (#9522)", 1009522},
    {"Quest: A Cry For Help Reward (#9528)", 1009528},
    {"Quest: Never Again! Reward (#9536)", 1009536},
    {"Quest: Show Gnomercy Reward (#9537)", 1009537},
    {"Quest: The Prophecy of Akida Reward (#9544)", 1009544},
    {"Quest: The Seer's Relic Reward (#9545)", 1009545},
    {"Quest: Fulfilling a Promise Reward (#9546)", 1009546},
    {"Quest: Artifacts of the Blacksilt Reward (#9549)", 1009549},
    {"Quest: Call of Air Reward (#9554)", 1009554},
    {"Quest: Call of Fire Reward (#9555)", 1009555},
    {"Quest: Beasts of the Apocalypse! Reward (#9560)", 1009560},
    {"Quest: Nolkai's Words Reward (#9561)", 1009561},
    {"Quest: Gurf's Dignity Reward (#9564)", 1009564},
    {"Quest: Containing the Threat Reward (#9569)", 1009569},
    {"Quest: The Kurken's Hide Reward (#9571)", 1009571},
    {"Quest: Weaken the Ramparts Reward (#9572)", 1009572},
    {"Quest: Chieftain Oomooroo Reward (#9573)", 1009573},
    {"Quest: Weaken the Ramparts Reward (#9575)", 1009575},
    {"Quest: Galaen's Fate Reward (#9579)", 1009579},
    {"Quest: Learning from the Crystals Reward (#9581)", 1009581},
    {"Quest: Help Tavara Reward (#9586)", 1009586},
    {"Quest: The Blood is Life Reward (#9589)", 1009589},
    {"Quest: The Blood is Life Reward (#9590)", 1009590},
    {"Quest: Control Reward (#9595)", 1009595},
    {"Quest: Heart of Rage Reward (#9607)", 1009607},
    {"Quest: Heart of Rage Reward (#9608)", 1009608},
    {"Quest: Bandits! Reward (#9616)", 1009616},
    {"Quest: Return the Reports Reward (#9618)", 1009618},
    {"Quest: A Favorite Treat Reward (#9624)", 1009624},
    {"Quest: Salvaging the Data Reward (#9628)", 1009628},
    {"Quest: Catch and Release Reward (#9629)", 1009629},
    {"Quest: Alien Predators Reward (#9634)", 1009634},
    {"Quest: The Zapthrottle Mote Extractor! Reward (#9635)", 1009635},
    {"Quest: The Zapthrottle Mote Extractor! Reward (#9636)", 1009636},
    {"Quest: Irradiated Crystal Shards Reward (#9641)", 1009641},
    {"Quest: More Irradiated Crystal Shards Reward (#9642)", 1009642},
    {"Quest: Nightbane Reward (#9644)", 1009644},
    {"Quest: WANTED: Deathclaw Reward (#9646)", 1009646},
    {"Quest: Culling the Flutterers Reward (#9647)", 1009647},
    {"Quest: Mac'Aree Mushroom Menagerie Reward (#9648)", 1009648},
    {"Quest: Ysera's Tears Reward (#9649)", 1009649},
    {"Quest: Declaration of Power Reward (#9666)", 1009666},
    {"Quest: Saving Princess Stillpine Reward (#9667)", 1009667},
    {"Quest: They're Alive! Maybe... Reward (#9670)", 1009670},
    {"Quest: Beast Training Reward (#9673)", 1009673},
    {"Quest: Beast Training Reward (#9675)", 1009675},
    {"Quest: Ending the Bloodcurse Reward (#9683)", 1009683},
    {"Quest: Razormaw Reward (#9689)", 1009689},
    {"Quest: Blood Watch Reward (#9694)", 1009694},
    {"Quest: I Shoot Magic Into the Darkness Reward (#9700)", 1009700},
    {"Quest: The Cryo-Core Reward (#9703)", 1009703},
    {"Quest: Stealing Back the Mushrooms Reward (#9709)", 1009709},
    {"Quest: The Blood-Tempered Ranseur Reward (#9710)", 1009710},
    {"Quest: Matis the Cruel Reward (#9711)", 1009711},
    {"Quest: Oh, It's On! Reward (#9717)", 1009717},
    {"Quest: Stalk the Stalker Reward (#9719)", 1009719},
    {"Quest: Now That We're Friends... Reward (#9726)", 1009726},
    {"Quest: A Warm Welcome Reward (#9728)", 1009728},
    {"Quest: Fhwoor Smash! Reward (#9729)", 1009729},
    {"Quest: Leader of the Darkcrest Reward (#9730)", 1009730},
    {"Quest: Drain Schematics Reward (#9731)", 1009731},
    {"Quest: Return to the Marsh Reward (#9732)", 1009732},
    {"Quest: Return to the Marsh Reward (#9734)", 1009734},
    {"Quest: True Masters of the Light Reward (#9737)", 1009737},
    {"Quest: Lost in Action Reward (#9738)", 1009738},
    {"Quest: Escape from Umbrafen Reward (#9752)", 1009752},
    {"Quest: Ending Their World Reward (#9759)", 1009759},
    {"Quest: Clearing the Way Reward (#9761)", 1009761},
    {"Quest: The Unwritten Prophecy Reward (#9762)", 1009762},
    {"Quest: The Warlord's Hideout Reward (#9763)", 1009763},
    {"Quest: Jyoba's Report Reward (#9772)", 1009772},
    {"Quest: An Unnatural Drought Reward (#9783)", 1009783},
    {"Quest: Identify Plant Parts Reward (#9784)", 1009784},
    {"Quest: A Damp, Dark Place Reward (#9788)", 1009788},
    {"Quest: A Rare Bean Reward (#9800)", 1009800},
    {"Quest: Plants of Zangarmarsh Reward (#9802)", 1009802},
    {"Quest: Messenger to the Feralfen Reward (#9803)", 1009803},
    {"Quest: Fertile Spores Reward (#9806)", 1009806},
    {"Quest: More Fertile Spores Reward (#9807)", 1009807},
    {"Quest: The Spirit Polluted Reward (#9810)", 1009810},
    {"Quest: Muck Diving Reward (#9815)", 1009815},
    {"Quest: Have You Ever Seen One of These? Reward (#9816)", 1009816},
    {"Quest: Leader of the Bloodscale Reward (#9817)", 1009817},
    {"Quest: Us or Them Reward (#9823)", 1009823},
    {"Quest: Lines of Communication Reward (#9833)", 1009833},
    {"Quest: Return to Khadgar Reward (#9837)", 1009837},
    {"Quest: Overlord Gorefist Reward (#9839)", 1009839},
    {"Quest: The Sharpest Blades Reward (#9842)", 1009842},
    {"Quest: A Spirit Ally? Reward (#9847)", 1009847},
    {"Quest: Secrets of the Daggerfen Reward (#9848)", 1009848},
    {"Quest: Clefthoof Mastery Reward (#9851)", 1009851},
    {"Quest: The Ultimate Bloodsport Reward (#9852)", 1009852},
    {"Quest: Gurok the Usurper Reward (#9853)", 1009853},
    {"Quest: Windroc Mastery Reward (#9856)", 1009856},
    {"Quest: Talbuk Mastery Reward (#9859)", 1009859},
    {"Quest: The New Directive Reward (#9860)", 1009860},
    {"Quest: Murkblood Corrupters Reward (#9862)", 1009862},
    {"Quest: Vile Idolatry Reward (#9863)", 1009863},
    {"Quest: He Will Walk The Earth... Reward (#9866)", 1009866},
    {"Quest: Murkblood Leaders... Reward (#9867)", 1009867},
    {"Quest: Ortor My Old Friend... Reward (#9873)", 1009873},
    {"Quest: Stopping the Spread Reward (#9874)", 1009874},
    {"Quest: Solving the Problem Reward (#9878)", 1009878},
    {"Quest: Hellfire Penninsula: -pn - A - ToWoW - Hellfire Turnin Cap Reward (#9880)", 1009880},
    {"Quest: Hellfire Penninsula: -pn - H - ToWoW - Hellfire Turnin Cap Reward (#9881)", 1009881},
    {"Quest: Membership Benefits Reward (#9884)", 1009884},
    {"Quest: Membership Benefits Reward (#9885)", 1009885},
    {"Quest: Membership Benefits Reward (#9886)", 1009886},
    {"Quest: Membership Benefits Reward (#9887)", 1009887},
    {"Quest: Blacksting's Bane Reward (#9896)", 1009896},
    {"Quest: Nothin' Says Lovin' Like a Big Stinger Reward (#9898)", 1009898},
    {"Quest: A Job Undone Reward (#9899)", 1009899},
    {"Quest: Gava'xi Reward (#9900)", 1009900},
    {"Quest: Unfinished Business Reward (#9901)", 1009901},
    {"Quest: The Terror of Marshlight Lake Reward (#9902)", 1009902},
    {"Quest: The Biggest of Them All Reward (#9903)", 1009903},
    {"Quest: Pursuing Terrorclaw Reward (#9904)", 1009904},
    {"Quest: Maktu's Revenge Reward (#9905)", 1009905},
    {"Quest: An Audacious Advance Reward (#9907)", 1009907},
    {"Quest: Hellfire Penninsula: -pn - A - ToWoW - Hellfire Turnin Reward (#9908)", 1009908},
    {"Quest: Hellfire Penninsula: -pn - H - ToWoW - Hellfire Turnin Reward (#9909)", 1009909},
    {"Quest: Bleeding Hollow Supply Crates Reward (#9916)", 1009916},
    {"Quest: The Twin Clefts of Nagrand Reward (#9922)", 1009922},
    {"Quest: Corki's Gone Missing Again! Reward (#9924)", 1009924},
    {"Quest: Message to Telaar Reward (#9933)", 1009933},
    {"Quest: Message to Garadar Reward (#9934)", 1009934},
    {"Quest: Wanted: Durn the Hungerer Reward (#9937)", 1009937},
    {"Quest: Wanted: Durn the Hungerer Reward (#9938)", 1009938},
    {"Quest: Return to Thander Reward (#9943)", 1009943},
    {"Quest: Cho'war the Pillager Reward (#9946)", 1009946},
    {"Quest: Return to Rokag Reward (#9947)", 1009947},
    {"Quest: Finding the Survivors Reward (#9948)", 1009948},
    {"Quest: It's Watching You! Reward (#9951)", 1009951},
    {"Quest: Cho'war the Pillager Reward (#9955)", 1009955},
    {"Quest: The Ravaged Caravan Reward (#9956)", 1009956},
    {"Quest: The Final Reagents Reward (#9969)", 1009969},
    {"Quest: The Ring of Blood: Rokdar the Sundered Lord Reward (#9970)", 1009970},
    {"Quest: The Ring of Blood: Skra'gath Reward (#9972)", 1009972},
    {"Quest: The Final Reagents Reward (#9974)", 1009974},
    {"Quest: The Ring of Blood: The Final Challenge Reward (#9977)", 1009977},
    {"Quest: Rescue Deirom! Reward (#9980)", 1009980},
    {"Quest: Rescue Dugar! Reward (#9981)", 1009981},
    {"Quest: Stymying the Arakkoa Reward (#9986)", 1009986},
    {"Quest: Stymying the Arakkoa Reward (#9987)", 1009987},
    {"Quest: A Dandy's Best Friend Reward (#9988)", 1009988},
    {"Quest: Alien Spirits Reward (#9989)", 1009989},
    {"Quest: Letting Earthbinder Tavgren Know Reward (#10005)", 1010005},
    {"Quest: Letting Earthbinder Tavgren Know Reward (#10006)", 1010006},
    {"Quest: Thinning the Ranks Reward (#10007)", 1010007},
    {"Quest: What Happens in Terokkar Stays in Terokkar Reward (#10008)", 1010008},
    {"Quest: Forge Camp: Annihilated Reward (#10011)", 1010011},
    {"Quest: The Elusive Ironjaw Reward (#10022)", 1010022},
    {"Quest: Helping the Lost Find Their Way Reward (#10031)", 1010031},
    {"Quest: Torgos! Reward (#10035)", 1010035},
    {"Quest: Torgos! Reward (#10036)", 1010036},
    {"Quest: Rather Be Fishin' Reward (#10037)", 1010037},
    {"Quest: Kill the Shadow Council! Reward (#10042)", 1010042},
    {"Quest: Kill the Shadow Council! Reward (#10043)", 1010043},
    {"Quest: Escape from Firewing Point! Reward (#10051)", 1010051},
    {"Quest: Escape from Firewing Point! Reward (#10052)", 1010052},
    {"Quest: Waste Not, Want Not Reward (#10055)", 1010055},
    {"Quest: Looking to the Leadership Reward (#10057)", 1010057},
    {"Quest: Looking to the Leadership Reward (#10062)", 1010062},
    {"Quest: Oshu'gun Crystal Powder Reward (#10074)", 1010074},
    {"Quest: Oshu'gun Crystal Powder Reward (#10075)", 1010075},
    {"Quest: Oshu'gun Crystal Powder Reward (#10076)", 1010076},
    {"Quest: Oshu'gun Crystal Powder Reward (#10077)", 1010077},
    {"Quest: Laying Waste to the Unwanted Reward (#10078)", 1010078},
    {"Quest: Assault on Mageddon Reward (#10084)", 1010084},
    {"Quest: I Work... For the Horde! Reward (#10086)", 1010086},
    {"Quest: Burn It Up... For the Horde! Reward (#10087)", 1010087},
    {"Quest: The Soul Devices Reward (#10091)", 1010091},
    {"Quest: Assault on Mageddon Reward (#10092)", 1010092},
    {"Quest: Into the Heart of the Labyrinth Reward (#10095)", 1010095},
    {"Quest: Saving the Sporeloks Reward (#10096)", 1010096},
    {"Quest: Brother Against Brother Reward (#10097)", 1010097},
    {"Quest: Terokk's Legacy Reward (#10098)", 1010098},
    {"Quest: The Mastermind Reward (#10099)", 1010099},
    {"Quest: The Mastermind Reward (#10100)", 1010100},
    {"Quest: Hellfire Fortifications Reward (#10106)", 1010106},
    {"Quest: I Must Have Them! Reward (#10109)", 1010109},
    {"Quest: Hellfire Fortifications Reward (#10110)", 1010110},
    {"Quest: Bring Me The Egg! Reward (#10111)", 1010111},
    {"Quest: A Personal Favor Reward (#10112)", 1010112},
    {"Quest: Felspark Ravine Reward (#10123)", 1010123},
    {"Quest: Mission: Gateways Murketh and Shaadraz Reward (#10129)", 1010129},
    {"Quest: Colossal Menace Reward (#10132)", 1010132},
    {"Quest: Cruel's Intentions Reward (#10136)", 1010136},
    {"Quest: Provoking the Warboss Reward (#10137)", 1010137},
    {"Quest: Dispatching the Commander Reward (#10139)", 1010139},
    {"Quest: The Path of Anguish Reward (#10142)", 1010142},
    {"Quest: Disrupt Their Reinforcements Reward (#10144)", 1010144},
    {"Quest: Mission: The Murketh and Shaadraz Gateways Reward (#10146)", 1010146},
    {"Quest: Mission: End All, Be All Reward (#10149)", 1010149},
    {"Quest: Provoking the Warboss Reward (#10155)", 1010155},
    {"Quest: Dispatching the Commander Reward (#10157)", 1010157},
    {"Quest: In Case of Emergency... Reward (#10161)", 1010161},
    {"Quest: Mission: The Abyssal Shelf Reward (#10162)", 1010162},
    {"Quest: Mission: The Abyssal Shelf Reward (#10163)", 1010163},
    {"Quest: Everything Will Be Alright Reward (#10164)", 1010164},
    {"Quest: Undercutting the Competition Reward (#10165)", 1010165},
    {"Quest: Ar'kelos the Guardian Reward (#10176)", 1010176},
    {"Quest: A Fate Worse Than Death Reward (#10185)", 1010185},
    {"Quest: You're Hired! Reward (#10186)", 1010186},
    {"Quest: The Sigil of Krasus Reward (#10188)", 1010188},
    {"Quest: Mark V is Alive! Reward (#10191)", 1010191},
    {"Quest: Mercenary See, Mercenary Do Reward (#10195)", 1010195},
    {"Quest: More Arakkoa Feathers Reward (#10196)", 1010196},
    {"Quest: Information Gathering Reward (#10198)", 1010198},
    {"Quest: That Little Extra Kick Reward (#10199)", 1010199},
    {"Quest: And Now, the Moment of Truth Reward (#10201)", 1010201},
    {"Quest: Warp-Raider Nesaad Reward (#10205)", 1010205},
    {"Quest: Pick Your Part Reward (#10206)", 1010206},
    {"Quest: Disrupt Their Reinforcements Reward (#10208)", 1010208},
    {"Quest: Hero of the Mag'har Reward (#10212)", 1010212},
    {"Quest: Someone Else's Hard Work Pays Off Reward (#10218)", 1010218},
    {"Quest: Dr. Boom! Reward (#10221)", 1010221},
    {"Quest: Down With Daellis Reward (#10223)", 1010223},
    {"Quest: Elemental Power Extraction Reward (#10226)", 1010226},
    {"Quest: Declawing Doomclaw Reward (#10235)", 1010235},
    {"Quest: Outland Sucks! Reward (#10236)", 1010236},
    {"Quest: How to Serve Goblins Reward (#10238)", 1010238},
    {"Quest: Building a Perimeter Reward (#10240)", 1010240},
    {"Quest: Back to the Chief! Reward (#10249)", 1010249},
    {"Quest: Levixus the Soul Caller Reward (#10253)", 1010253},
    {"Quest: Testing the Antidote Reward (#10255)", 1010255},
    {"Quest: Honor the Fallen Reward (#10258)", 1010258},
    {"Quest: Into the Breach Reward (#10259)", 1010259},
    {"Quest: Wanted: Annihilator Servo! Reward (#10261)", 1010261},
    {"Quest: Rightful Repossession Reward (#10267)", 1010267},
    {"Quest: Securing the Celestial Ridge Reward (#10274)", 1010274},
    {"Quest: Special Delivery to Shattrath City Reward (#10280)", 1010280},
    {"Quest: Return to Andormu Reward (#10285)", 1010285},
    {"Quest: Hitting the Motherlode Reward (#10293)", 1010293},
    {"Quest: From the Abyss Reward (#10295)", 1010295},
    {"Quest: Hero of the Brood Reward (#10298)", 1010298},
    {"Quest: The Blood Elves Reward (#10303)", 1010303},
    {"Quest: It's a Fel Reaver, But with Heart Reward (#10309)", 1010309},
    {"Quest: Sabotage the Warp-Gate! Reward (#10310)", 1010310},
    {"Quest: Measuring Warp Energies Reward (#10313)", 1010313},
    {"Quest: Dealing with the Overmaster Reward (#10318)", 1010318},
    {"Quest: Destroy Naberius! Reward (#10320)", 1010320},
    {"Quest: Shutting Down Manaforge Ara Reward (#10323)", 1010323},
    {"Quest: The Great Moongraze Hunt Reward (#10324)", 1010324},
    {"Quest: Master Smith Rhonsus Reward (#10332)", 1010332},
    {"Quest: Surveying the Ruins Reward (#10335)", 1010335},
    {"Quest: When the Cows Come Home Reward (#10337)", 1010337},
    {"Quest: Kick Them While They're Down Reward (#10341)", 1010341},
    {"Quest: The Flesh Lies... Reward (#10345)", 1010345},
    {"Quest: Behomat Reward (#10350)", 1010350},
    {"Quest: Natural Remedies Reward (#10351)", 1010351},
    {"Quest: Arconus the Insatiable Reward (#10353)", 1010353},
    {"Quest: Shutting Down Manaforge Ara Reward (#10365)", 1010365},
    {"Quest: Aldor No More Reward (#10381)", 1010381},
    {"Quest: Overlord Reward (#10400)", 1010400},
    {"Quest: Mission: End All, Be All Reward (#10401)", 1010401},
    {"Quest: Delivering the Message Reward (#10406)", 1010406},
    {"Quest: Nexus-King Salhadaar Reward (#10408)", 1010408},
    {"Quest: Deathblow to the Legion Reward (#10409)", 1010409},
    {"Quest: The Horrors of Pollution Reward (#10413)", 1010413},
    {"Quest: Synthesis of Power Reward (#10416)", 1010416},
    {"Quest: Arcane Tomes Reward (#10419)", 1010419},
    {"Quest: A Cleansing Light Reward (#10420)", 1010420},
    {"Quest: Fel Armaments Reward (#10421)", 1010421},
    {"Quest: Escape from the Staging Grounds Reward (#10425)", 1010425},
    {"Quest: Retrieving the Goods Reward (#10435)", 1010435},
    {"Quest: Dimensius the All-Devouring Reward (#10439)", 1010439},
    {"Quest: Success! Reward (#10440)", 1010440},
    {"Quest: The Final Code Reward (#10446)", 1010446},
    {"Quest: The Final Code Reward (#10447)", 1010447},
    {"Quest: Bonechewer Blood Reward (#10450)", 1010450},
    {"Quest: Escape from Coilskar Cistern Reward (#10451)", 1010451},
    {"Quest: Protecting Our Own Reward (#10457)", 1010457},
    {"Quest: Defender's Pledge Reward (#10460)", 1010460},
    {"Quest: Restorer's Pledge Reward (#10461)", 1010461},
    {"Quest: Champion's Pledge Reward (#10462)", 1010462},
    {"Quest: Sage's Pledge Reward (#10463)", 1010463},
    {"Quest: Sage's Vow Reward (#10464)", 1010464},
    {"Quest: Restorer's Vow Reward (#10465)", 1010465},
    {"Quest: Champion's Vow Reward (#10466)", 1010466},
    {"Quest: Defender's Vow Reward (#10467)", 1010467},
    {"Quest: Sage's Oath Reward (#10468)", 1010468},
    {"Quest: Restorer's Oath Reward (#10469)", 1010469},
    {"Quest: Champion's Oath Reward (#10470)", 1010470},
    {"Quest: Defender's Oath Reward (#10471)", 1010471},
    {"Quest: Sage's Covenant Reward (#10472)", 1010472},
    {"Quest: Restorer's Covenant Reward (#10473)", 1010473},
    {"Quest: Champion's Covenant Reward (#10474)", 1010474},
    {"Quest: Defender's Covenant Reward (#10475)", 1010475},
    {"Quest: Enraged Spirits of Air Reward (#10481)", 1010481},
    {"Quest: Fel Orc Scavengers Reward (#10482)", 1010482},
    {"Quest: Protecting Our Own Reward (#10488)", 1010488},
    {"Quest: Felling an Ancient Tree Reward (#10489)", 1010489},
    {"Quest: An Earnest Proposition Reward (#10492)", 1010492},
    {"Quest: An Earnest Proposition Reward (#10493)", 1010493},
    {"Quest: Just Compensation Reward (#10494)", 1010494},
    {"Quest: Just Compensation Reward (#10495)", 1010495},
    {"Quest: Anthion's Parting Words Reward (#10496)", 1010496},
    {"Quest: Anthion's Parting Words Reward (#10497)", 1010497},
    {"Quest: Saving the Best for Last Reward (#10498)", 1010498},
    {"Quest: Saving the Best for Last Reward (#10499)", 1010499},
    {"Quest: The Bladespire Ogres Reward (#10504)", 1010504},
    {"Quest: The Bloodmaul Ogres Reward (#10505)", 1010505},
    {"Quest: Turning Point Reward (#10507)", 1010507},
    {"Quest: Into the Draenethyst Mine Reward (#10510)", 1010510},
    {"Quest: I Was A Lot Of Things... Reward (#10514)", 1010514},
    {"Quest: Planting the Banner Reward (#10518)", 1010518},
    {"Quest: The Cipher of Damnation - The First Fragment Recovered Reward (#10523)", 1010523},
    {"Quest: The Thunderspike Reward (#10526)", 1010526},
    {"Quest: The Cipher of Damnation - The Second Fragment Recovered Reward (#10541)", 1010541},
    {"Quest: A Curse Upon Both of Your Clans! Reward (#10544)", 1010544},
    {"Quest: The Sad Truth Reward (#10548)", 1010548},
    {"Quest: REUSE Reward (#10549)", 1010549},
    {"Quest: Blast the Infernals! Reward (#10564)", 1010564},
    {"Quest: The Cipher of Damnation - The Third Fragment Recovered Reward (#10579)", 1010579},
    {"Quest: The Cipher of Damnation Reward (#10588)", 1010588},
    {"Quest: DESTROY THIS QUEST! Reward (#10591)", 1010591},
    {"Quest: Ancient Evil Reward (#10593)", 1010593},
    {"Quest: Gauging the Resonant Frequency Reward (#10594)", 1010594},
    {"Quest: Blast the Infernals! Reward (#10598)", 1010598},
    {"Quest: Whispers of the Raven God Reward (#10607)", 1010607},
    {"Quest: What Came First, the Drake or the Egg? Reward (#10609)", 1010609},
    {"Quest: Ridgespine Menace Reward (#10620)", 1010620},
    {"Quest: Capture the Weapons Reward (#10626)", 1010626},
    {"Quest: Capture the Weapons Reward (#10627)", 1010627},
    {"Quest: Shizz Work Reward (#10629)", 1010629},
    {"Quest: Beneath Thrallmar Reward (#10630)", 1010630},
    {"Quest: Cutting Your Teeth Reward (#10632)", 1010632},
    {"Quest: Teron Gorefiend, I am... Reward (#10639)", 1010639},
    {"Quest: Teron Gorefiend, I am... Reward (#10645)", 1010645},
    {"Quest: Wanted: Uvuros, Scourge of Shadowmoon Reward (#10647)", 1010647},
    {"Quest: Wanted: Uvuros, Scourge of Shadowmoon Reward (#10648)", 1010648},
    {"Quest: Varedis Must Be Stopped Reward (#10651)", 1010651},
    {"Quest: Ride the Lightning Reward (#10657)", 1010657},
    {"Quest: Show Them Gnome Mercy! Reward (#10675)", 1010675},
    {"Quest: Quenching the Blade Reward (#10679)", 1010679},
    {"Quest: The Den Mother Reward (#10690)", 1010690},
    {"Quest: Varedis Must Be Stopped Reward (#10692)", 1010692},
    {"Quest: Breaking Down Netherock Reward (#10701)", 1010701},
    {"Quest: How to Break Into the Arcatraz Reward (#10704)", 1010704},
    {"Quest: Akama's Promise Reward (#10708)", 1010708},
    {"Quest: ...and a Time for Action Reward (#10713)", 1010713},
    {"Quest: Into the Churning Gulch Reward (#10715)", 1010715},
    {"Quest: Gorgrom the Dragon-Eater Reward (#10723)", 1010723},
    {"Quest: Eminence Among the Violet Eye Reward (#10725)", 1010725},
    {"Quest: Eminence Among the Violet Eye Reward (#10726)", 1010726},
    {"Quest: Eminence Among the Violet Eye Reward (#10727)", 1010727},
    {"Quest: Eminence Among the Violet Eye Reward (#10728)", 1010728},
    {"Quest: Path of the Violet Mage Reward (#10729)", 1010729},
    {"Quest: Path of the Violet Restorer Reward (#10730)", 1010730},
    {"Quest: Path of the Violet Assassin Reward (#10731)", 1010731},
    {"Quest: Path of the Violet Protector Reward (#10732)", 1010732},
    {"Quest: Down the Violet Path Reward (#10733)", 1010733},
    {"Quest: Down the Violet Path Reward (#10734)", 1010734},
    {"Quest: Down the Violet Path Reward (#10735)", 1010735},
    {"Quest: Down the Violet Path Reward (#10736)", 1010736},
    {"Quest: Distinguished Service Reward (#10738)", 1010738},
    {"Quest: Distinguished Service Reward (#10739)", 1010739},
    {"Quest: Distinguished Service Reward (#10740)", 1010740},
    {"Quest: Distinguished Service Reward (#10741)", 1010741},
    {"Quest: Showdown Reward (#10742)", 1010742},
    {"Quest: News of Victory Reward (#10744)", 1010744},
    {"Quest: News of Victory Reward (#10745)", 1010745},
    {"Quest: Whelps of the Wyrmcult Reward (#10747)", 1010747},
    {"Quest: Maxnar Must Die! Reward (#10748)", 1010748},
    {"Quest: Hotter than Hell Reward (#10758)", 1010758},
    {"Quest: Hotter than Hell Reward (#10764)", 1010764},
    {"Quest: Dissension Amongst the Ranks... Reward (#10769)", 1010769},
    {"Quest: From the Ashes Reward (#10771)", 1010771},
    {"Quest: Dissension Amongst the Ranks... Reward (#10776)", 1010776},
    {"Quest: Battle of the Crimson Watch Reward (#10781)", 1010781},
    {"Quest: Crush the Bloodmaul Camp Reward (#10784)", 1010784},
    {"Quest: Welcoming the Wolf Spirit Reward (#10791)", 1010791},
    {"Quest: Zeth'Gor Must Burn! Reward (#10792)", 1010792},
    {"Quest: Crush the Bloodmaul Camp! Reward (#10796)", 1010796},
    {"Quest: Into the Churning Gulch Reward (#10799)", 1010799},
    {"Quest: Gorgrom the Dragon-Eater Reward (#10802)", 1010802},
    {"Quest: Showdown Reward (#10806)", 1010806},
    {"Quest: Thwart the Dark Conclave Reward (#10808)", 1010808},
    {"Quest: Reclaiming Holy Grounds Reward (#10816)", 1010816},
    {"Quest: The Great Retribution Reward (#10817)", 1010817},
    {"Quest: You're Fired! Reward (#10821)", 1010821},
    {"Quest: Exorcising the Trees Reward (#10830)", 1010830},
    {"Quest: Grillok \"Darkeye\" Reward (#10834)", 1010834},
    {"Quest: The Demoniac Scryer Reward (#10838)", 1010838},
    {"Quest: Vengeful Souls Reward (#10842)", 1010842},
    {"Quest: Slay the Brood Mother Reward (#10845)", 1010845},
    {"Quest: The Eyes of Skettis Reward (#10847)", 1010847},
    {"Quest: Veil Rhaze: Unliving Evil Reward (#10848)", 1010848},
    {"Quest: Missing Friends Reward (#10852)", 1010852},
    {"Quest: Spirit Calling Reward (#10853)", 1010853},
    {"Quest: Teleport This! Reward (#10857)", 1010857},
    {"Quest: Mok'Nathal Treats Reward (#10860)", 1010860},
    {"Quest: Veil Lithic: Preemptive Strike Reward (#10861)", 1010861},
    {"Quest: There Can Be Only One Response Reward (#10867)", 1010867},
    {"Quest: Ally of the Netherwing Reward (#10870)", 1010870},
    {"Quest: Veil Shalas: Signal Fires Reward (#10874)", 1010874},
    {"Quest: The Foot of the Citadel Reward (#10876)", 1010876},
    {"Quest: The Skettis Offensive Reward (#10879)", 1010879},
    {"Quest: The Shadow Tomb Reward (#10881)", 1010881},
    {"Quest: Harbinger of Doom Reward (#10882)", 1010882},
    {"Quest: Escaping the Tomb Reward (#10887)", 1010887},
    {"Quest: Trial of the Naaru: Magtheridon Reward (#10888)", 1010888},
    {"Quest: Zeth'Gor Must Burn! Reward (#10895)", 1010895},
    {"Quest: Skywing Reward (#10898)", 1010898},
    {"Quest: The Hound-Master Reward (#10912)", 1010912},
    {"Quest: The Fallen Exarch Reward (#10915)", 1010915},
    {"Quest: The Outcast's Plight Reward (#10917)", 1010917},
    {"Quest: More Feathers Reward (#10918)", 1010918},
    {"Quest: Terokkarantula Reward (#10921)", 1010921},
    {"Quest: Evil Draws Near Reward (#10923)", 1010923},
    {"Quest: The Big Bone Worm Reward (#10930)", 1010930},
    {"Quest: Drill the Drillmaster Reward (#10937)", 1010937},
    {"Quest: Darkmoon Blessings Deck Reward (#10938)", 1010938},
    {"Quest: Darkmoon Storms Deck Reward (#10939)", 1010939},
    {"Quest: Darkmoon Furies Deck Reward (#10940)", 1010940},
    {"Quest: Darkmoon Lunacy Deck Reward (#10941)", 1010941},
    {"Quest: The Fall of the Betrayer Reward (#10959)", 1010959},
    {"Quest: Back to the Orphanage Reward (#10966)", 1010966},
    {"Quest: Back to the Orphanage Reward (#10967)", 1010967},
    {"Quest: Stasis Chambers of Bash'ir Reward (#10974)", 1010974},
    {"Quest: Purging the Chambers of Bash'ir Reward (#10975)", 1010975},
    {"Quest: Stasis Chambers of the Mana-Tombs Reward (#10977)", 1010977},
    {"Quest: Nexus-Prince Shaffar's Personal Chamber Reward (#10981)", 1010981},
    {"Quest: The Eye of Haramad Reward (#10982)", 1010982},
    {"Quest: A Distraction for Akama Reward (#10985)", 1010985},
    {"Quest: The Hawk's Essence Reward (#10992)", 1010992},
    {"Quest: Vanquish the Raven God Reward (#11001)", 1011001},
    {"Quest: The Fall of Magtheridon Reward (#11002)", 1011002},
    {"Quest: The Fall of Magtheridon Reward (#11003)", 1011003},
    {"Quest: World of Shadows Reward (#11004)", 1011004},
    {"Quest: More Shadow Dust Reward (#11006)", 1011006},
    {"Quest: Kael'thas and the Verdant Sphere Reward (#11007)", 1011007},
    {"Quest: Eternal Vigilance Reward (#11011)", 1011011},
    {"Quest: Bomb Them Again! Reward (#11023)", 1011023},
    {"Quest: Banish the Demons Reward (#11026)", 1011026},
    {"Quest: Yous Have Da Darkrune? Reward (#11027)", 1011027},
    {"Quest: Archmage No More Reward (#11031)", 1011031},
    {"Quest: Protector No More Reward (#11032)", 1011032},
    {"Quest: Assassin No More Reward (#11033)", 1011033},
    {"Quest: Restorer No More Reward (#11034)", 1011034},
    {"Quest: A Job Unfinished... Reward (#11041)", 1011041},
    {"Quest: Banish More Demons Reward (#11051)", 1011051},
    {"Quest: Akama's Promise Reward (#11052)", 1011052},
    {"Quest: Rise, Overseer! Reward (#11053)", 1011053},
    {"Quest: A Crystalforged Darkrune Reward (#11060)", 1011060},
    {"Quest: Wrangle More Aether Rays! Reward (#11066)", 1011066},
    {"Quest: Dragonmaw Race: Captain Skyshatter Reward (#11071)", 1011071},
    {"Quest: Adversarial Blood Reward (#11072)", 1011072},
    {"Quest: Terokk's Downfall Reward (#11073)", 1011073},
    {"Quest: Tokens of the Descendants Reward (#11074)", 1011074},
    {"Quest: The Relic's Emanation Reward (#11080)", 1011080},
    {"Quest: Stand Tall, Captain! Reward (#11084)", 1011084},
    {"Quest: Subdue the Subduer Reward (#11090)", 1011090},
    {"Quest: A Special Thank You Reward (#11091)", 1011091},
    {"Quest: Hail, Commander! Reward (#11092)", 1011092},
    {"Quest: Hungry Nether Rays Reward (#11093)", 1011093},
    {"Quest: Sage No More Reward (#11103)", 1011103},
    {"Quest: Restorer No More Reward (#11104)", 1011104},
    {"Quest: Champion No More Reward (#11105)", 1011105},
    {"Quest: Defender No More Reward (#11106)", 1011106},
    {"Quest: Jorus the Cobalt Netherwing Drake Reward (#11109)", 1011109},
    {"Quest: Malfas the Purple Netherwing Drake Reward (#11110)", 1011110},
    {"Quest: Onyxien the Onyx Netherwing Drake Reward (#11111)", 1011111},
    {"Quest: Suraku the Azure Netherwing Drake Reward (#11112)", 1011112},
    {"Quest: Voranaku the Violet Netherwing Drake Reward (#11113)", 1011113},
    {"Quest: Zoya the Veridian Netherwing Drake Reward (#11114)", 1011114},
    {"Quest: Trial of the Naaru: (QUEST FLAG) Reward (#11116)", 1011116},
    {"Quest: Catch the Wild Wolpertinger! Reward (#11117)", 1011117},
    {"Quest: Pink Elekks On Parade Reward (#11118)", 1011118},
    {"Quest: Pink Elekks On Parade Reward (#11120)", 1011120},
    {"Quest: There and Back Again Reward (#11122)", 1011122},
    {"Quest: Stop the Fires! Reward (#11131)", 1011131},
    {"Quest: Promises, Promises... Reward (#11132)", 1011132},
    {"Quest: The End of the Deserters Reward (#11134)", 1011134},
    {"Quest: Recover the Cargo! Reward (#11140)", 1011140},
    {"Quest: Survey Alcaz Island Reward (#11142)", 1011142},
    {"Quest: Unleash the Raptors Reward (#11147)", 1011147},
    {"Quest: Arms of the Grimtotems Reward (#11148)", 1011148},
    {"Quest: Peace at Last Reward (#11152)", 1011152},
    {"Quest: Scare the Guano Out of Them! Reward (#11154)", 1011154},
    {"Quest: Shoveltusk Soup Again? Reward (#11155)", 1011155},
    {"Quest: Direhorn Raiders Reward (#11156)", 1011156},
    {"Quest: Challenge to the Black Flight Reward (#11162)", 1011162},
    {"Quest: Undercover Sister Reward (#11163)", 1011163},
    {"Quest: The New Plague Reward (#11167)", 1011167},
    {"Quest: Hex Lord? Hah! Reward (#11171)", 1011171},
    {"Quest: The Reagent Thief Reward (#11173)", 1011173},
    {"Quest: Corrosion Prevention Reward (#11174)", 1011174},
    {"Quest: Root Causes Reward (#11182)", 1011182},
    {"Quest: Cleansing Witch Hill Reward (#11183)", 1011183},
    {"Quest: WANTED: Goreclaw the Ravenous Reward (#11184)", 1011184},
    {"Quest: Two Wrongs... Reward (#11188)", 1011188},
    {"Quest: Playin' With Dolls Reward (#11195)", 1011195},
    {"Quest: Take Down Tethyr! Reward (#11198)", 1011198},
    {"Quest: More than Coincidence Reward (#11200)", 1011200},
    {"Quest: Mission: Eternal Flame Reward (#11202)", 1011202},
    {"Quest: Return to Krog Reward (#11204)", 1011204},
    {"Quest: Justice Dispensed Reward (#11206)", 1011206},
    {"Quest: Nat's Bargain Reward (#11209)", 1011209},
    {"Quest: Catch a Dragon by the Tail Reward (#11217)", 1011217},
    {"Quest: Stop the Fires! Reward (#11219)", 1011219},
    {"Quest: Return to Jaina Reward (#11223)", 1011223},
    {"Quest: Ambushed! Reward (#11230)", 1011230},
    {"Quest: Landing the Killing Blow Reward (#11233)", 1011233},
    {"Quest: Necro Overlord Mezhen Reward (#11236)", 1011236},
    {"Quest: The Frost Wyrm and its Master Reward (#11238)", 1011238},
    {"Quest: In Service to the Light Reward (#11239)", 1011239},
    {"Quest: Leader of the Deranged Reward (#11240)", 1011240},
    {"Quest: Trail of Fire Reward (#11241)", 1011241},
    {"Quest: Free at Last! Reward (#11242)", 1011242},
    {"Quest: Rescuing the Rescuers Reward (#11244)", 1011244},
    {"Quest: Stop the Ascension! Reward (#11249)", 1011249},
    {"Quest: All Hail the Conqueror of Skorn! Reward (#11250)", 1011250},
    {"Quest: Into Utgarde! Reward (#11252)", 1011252},
    {"Quest: Stop the Ascension! Reward (#11260)", 1011260},
    {"Quest: The Conqueror of Skorn! Reward (#11261)", 1011261},
    {"Quest: Ingvar Must Die! Reward (#11262)", 1011262},
    {"Quest: Necro Overlord Mezhen Reward (#11264)", 1011264},
    {"Quest: The Frost Wyrm and its Master Reward (#11267)", 1011267},
    {"Quest: The Walking Dead Reward (#11268)", 1011268},
    {"Quest: Down to the Wire Reward (#11269)", 1011269},
    {"Quest: Hasty Preparations Reward (#11271)", 1011271},
    {"Quest: A Score to Settle Reward (#11272)", 1011272},
    {"Quest: Return to Valgarde Reward (#11278)", 1011278},
    {"Quest: Draconis Gastritis Reward (#11280)", 1011280},
    {"Quest: Mimicking Nature's Call Reward (#11281)", 1011281},
    {"Quest: A Lesson in Fear Reward (#11282)", 1011282},
    {"Quest: Baleheim Bodycount Reward (#11283)", 1011283},
    {"Quest: The Yeti Next Door Reward (#11284)", 1011284},
    {"Quest: The Artifacts of Steel Gate Reward (#11286)", 1011286},
    {"Quest: The Shining Light Reward (#11288)", 1011288},
    {"Quest: Dragonflayer Battle Plans Reward (#11290)", 1011290},
    {"Quest: Preying Upon the Weak Reward (#11292)", 1011292},
    {"Quest: Bark for the Barleybrews! Reward (#11293)", 1011293},
    {"Quest: Bark for the Thunderbrews! Reward (#11294)", 1011294},
    {"Quest: Rivenwood Captives Reward (#11296)", 1011296},
    {"Quest: Brains! Brains! Brains! Reward (#11301)", 1011301},
    {"Quest: A Tailor-Made Formula Reward (#11305)", 1011305},
    {"Quest: Parts for the Job Reward (#11309)", 1011309},
    {"Quest: Warning: Some Assembly Required Reward (#11310)", 1011310},
    {"Quest: Seeds of the Blacksouled Keepers Reward (#11319)", 1011319},
    {"Quest: Did Someone Say \"Souvenir?\" Reward (#11321)", 1011321},
    {"Quest: Alpha Worg Reward (#11324)", 1011324},
    {"Quest: Alpha Worg Reward (#11326)", 1011326},
    {"Quest: Mission: Plague This! Reward (#11332)", 1011332},
    {"Quest: Anguish of Nifflevar Reward (#11344)", 1011344},
    {"Quest: Prizes for Pellets Reward (#11345)", 1011345},
    {"Quest: Wanted: Nazan's Riding Crop Reward (#11354)", 1011354},
    {"Quest: Fire Brigade Practice Reward (#11360)", 1011360},
    {"Quest: Fire Training Reward (#11361)", 1011361},
    {"Quest: Wanted: Keli'dan's Feathered Stave Reward (#11362)", 1011362},
    {"Quest: Wanted: Bladefist's Seal Reward (#11363)", 1011363},
    {"Quest: Wanted: Shattered Hand Centurions Reward (#11364)", 1011364},
    {"Quest: Wanted: The Heart of Quagmirran Reward (#11368)", 1011368},
    {"Quest: Wanted: A Black Stalker Egg Reward (#11369)", 1011369},
    {"Quest: Wanted: The Warlord's Treatise Reward (#11370)", 1011370},
    {"Quest: Wanted: Coilfang Myrmidons Reward (#11371)", 1011371},
    {"Quest: Wanted: The Headfeathers of Ikiss Reward (#11372)", 1011372},
    {"Quest: Wanted: Shaffar's Wondrous Pendant Reward (#11373)", 1011373},
    {"Quest: Wanted: The Exarch's Soul Gem Reward (#11374)", 1011374},
    {"Quest: Wanted: Murmur's Whisper Reward (#11375)", 1011375},
    {"Quest: Wanted: Malicious Instructors Reward (#11376)", 1011376},
    {"Quest: Revenge is Tasty Reward (#11377)", 1011377},
    {"Quest: Wanted: The Epoch Hunter's Head Reward (#11378)", 1011378},
    {"Quest: Super Hot Stew Reward (#11379)", 1011379},
    {"Quest: Manalicious Reward (#11380)", 1011380},
    {"Quest: Soup for the Soul Reward (#11381)", 1011381},
    {"Quest: Wanted: Aeonus's Hourglass Reward (#11382)", 1011382},
    {"Quest: Wanted: Rift Lords Reward (#11383)", 1011383},
    {"Quest: Wanted: A Warp Splinter Clipping Reward (#11384)", 1011384},
    {"Quest: Wanted: Sunseeker Channelers Reward (#11385)", 1011385},
    {"Quest: Wanted: Pathaleon's Projector Reward (#11386)", 1011386},
    {"Quest: Wanted: Tempest-Forge Destroyers Reward (#11387)", 1011387},
    {"Quest: Wanted: The Scroll of Skyriss Reward (#11388)", 1011388},
    {"Quest: Wanted: Arcatraz Sentinels Reward (#11389)", 1011389},
    {"Quest: I've Got a Flying Machine! Reward (#11390)", 1011390},
    {"Quest: Steel Gate Patrol Reward (#11391)", 1011391},
    {"Quest: Bring Down Those Shields Reward (#11396)", 1011396},
    {"Quest: Bring Down Those Shields Reward (#11399)", 1011399},
    {"Quest: Free at Last! Reward (#11403)", 1011403},
    {"Quest: Bark for Drohn's Distillery! Reward (#11407)", 1011407},
    {"Quest: Bark for T'chali's Voodoo Brewery! Reward (#11408)", 1011408},
    {"Quest: There and Back Again Reward (#11412)", 1011412},
    {"Quest: Did Someone Say \"Souvenir?\" Reward (#11413)", 1011413},
    {"Quest: It Goes to 11... Reward (#11421)", 1011421},
    {"Quest: Shield Hill Reward (#11424)", 1011424},
    {"Quest: Catch the Wild Wolpertinger! Reward (#11431)", 1011431},
    {"Quest: Gathered Pumpkins NYI Reward (#11435)", 1011435},
    {"Quest: [PH] Beer Garden A Reward (#11437)", 1011437},
    {"Quest: [PH] Beer Garden B Reward (#11438)", 1011438},
    {"Quest: Fire Brigade Practice Reward (#11439)", 1011439},
    {"Quest: Fire Brigade Practice Reward (#11440)", 1011440},
    {"Quest: Brewfest! Reward (#11441)", 1011441},
    {"Quest: Welcome to Brewfest! Reward (#11442)", 1011442},
    {"Quest: [PH] Beer Garden A Reward (#11444)", 1011444},
    {"Quest: [PH] Beer Garden B Reward (#11445)", 1011445},
    {"Quest: Brewfest! Reward (#11446)", 1011446},
    {"Quest: Welcome to Brewfest! Reward (#11447)", 1011447},
    {"Quest: Fire Training Reward (#11449)", 1011449},
    {"Quest: Fire Training Reward (#11450)", 1011450},
    {"Quest: Seek the Saboteurs Reward (#11454)", 1011454},
    {"Quest: Dead Man's Debt Reward (#11467)", 1011467},
    {"Quest: There Exists No Honor Among Birds Reward (#11470)", 1011470},
    {"Quest: The Jig is Up Reward (#11471)", 1011471},
    {"Quest: The Best of Brews Reward (#11486)", 1011486},
    {"Quest: The Best of Brews Reward (#11487)", 1011487},
    {"Quest: Hard to Kill Reward (#11492)", 1011492},
    {"Quest: Lightning Infused Relics Reward (#11494)", 1011494},
    {"Quest: The Delicate Sound of Thunder Reward (#11495)", 1011495},
    {"Quest: Wanted: The Signet Ring of Prince Kael'thas Reward (#11499)", 1011499},
    {"Quest: Wanted: Sisters of Torment Reward (#11500)", 1011500},
    {"Quest: News From the East Reward (#11501)", 1011501},
    {"Quest: Intercepting the Mana Cells Reward (#11513)", 1011513},
    {"Quest: Maintaining the Sunwell Portal Reward (#11514)", 1011514},
    {"Quest: Blood for Blood Reward (#11515)", 1011515},
    {"Quest: Blast the Gateway Reward (#11516)", 1011516},
    {"Quest: Discovering Your Roots Reward (#11520)", 1011520},
    {"Quest: Rediscovering Your Roots Reward (#11521)", 1011521},
    {"Quest: A Winter Veil Gift Reward (#11528)", 1011528},
    {"Quest: Ata'mal Armaments Reward (#11544)", 1011544},
    {"Quest: Open for Business Reward (#11546)", 1011546},
    {"Quest: Know Your Ley Lines Reward (#11547)", 1011547},
    {"Quest: Agamath, the First Gate Reward (#11551)", 1011551},
    {"Quest: Rohendor, the Second Gate Reward (#11552)", 1011552},
    {"Quest: Archonisus, the Final Gate Reward (#11553)", 1011553},
    {"Quest: A Friend in the Frontlines Reward (#11554)", 1011554},
    {"Quest: Honored by Your Allies Reward (#11555)", 1011555},
    {"Quest: Revered in the Field of Battle Reward (#11556)", 1011556},
    {"Quest: Exalted Among All Combatants Reward (#11557)", 1011557},
    {"Quest: Oh Noes, the Tadpoles! Reward (#11560)", 1011560},
    {"Quest: Succulent Orca Stew Reward (#11564)", 1011564},
    {"Quest: Surrender... Not! Reward (#11566)", 1011566},
    {"Quest: Escape from the Winterfin Caverns Reward (#11570)", 1011570},
    {"Quest: Return to Atuik Reward (#11572)", 1011572},
    {"Quest: The \"Chow\" Quest (123)aa COPY Reward (#11578)", 1011578},
    {"Quest: The \"Chow\" Quest (123)aa COPY Reward (#11579)", 1011579},
    {"Quest: Desecrate this Fire! Reward (#11580)", 1011580},
    {"Quest: Desecrate this Fire! Reward (#11581)", 1011581},
    {"Quest: Honor the Flame Reward (#11583)", 1011583},
    {"Quest: Honor the Flame Reward (#11584)", 1011584},
    {"Quest: We Strike! Reward (#11592)", 1011592},
    {"Quest: The Late William Allerton Reward (#11600)", 1011600},
    {"Quest: Cutting Off the Source Reward (#11602)", 1011602},
    {"Quest: In Wine, Truth Reward (#11603)", 1011603},
    {"Quest: Bury Those Cockroaches! Reward (#11608)", 1011608},
    {"Quest: Leading the Ancestors Home Reward (#11610)", 1011610},
    {"Quest: Taken by the Scourge Reward (#11611)", 1011611},
    {"Quest: Karuk's Oath Reward (#11613)", 1011613},
    {"Quest: Gamel the Cruel Reward (#11619)", 1011619},
    {"Quest: A Visit to the Curator Reward (#11623)", 1011623},
    {"Quest: The Emissary Reward (#11626)", 1011626},
    {"Quest: Vision of Air Reward (#11631)", 1011631},
    {"Quest: What the Cold Wind Brings... Reward (#11632)", 1011632},
    {"Quest: Return My Remains Reward (#11638)", 1011638},
    {"Quest: Revenge Upon Magmoth Reward (#11639)", 1011639},
    {"Quest: Neutralizing the Cauldrons Reward (#11647)", 1011647},
    {"Quest: The Plains of Nasam Reward (#11652)", 1011652},
    {"Quest: Hah... You're Not So Big Now! Reward (#11653)", 1011653},
    {"Quest: Burn in Effigy Reward (#11656)", 1011656},
    {"Quest: Torch Catching Reward (#11657)", 1011657},
    {"Quest: Orabus the Helmsman Reward (#11661)", 1011661},
    {"Quest: Escaping the Mist Reward (#11664)", 1011664},
    {"Quest: Crocolisks in the City Reward (#11665)", 1011665},
    {"Quest: Bait Bandits Reward (#11666)", 1011666},
    {"Quest: The One That Got Away Reward (#11667)", 1011667},
    {"Quest: Shrimpin' Ain't Easy Reward (#11668)", 1011668},
    {"Quest: Felblood Fillet Reward (#11669)", 1011669},
    {"Quest: It Was The Orcs, Honest! Reward (#11670)", 1011670},
    {"Quest: Get Me Outa Here! Reward (#11673)", 1011673},
    {"Quest: Stop the Plague Reward (#11677)", 1011677},
    {"Quest: Rescuing Evanor Reward (#11681)", 1011681},
    {"Quest: Fallen Necropolis Reward (#11683)", 1011683},
    {"Quest: Return with the Bad News Reward (#11689)", 1011689},
    {"Quest: Bring 'Em Back Alive Reward (#11690)", 1011690},
    {"Quest: There's Something Going On In Those Caves Reward (#11694)", 1011694},
    {"Quest: Might As Well Wipe Out the Scourge Reward (#11698)", 1011698},
    {"Quest: Back to the Airstrip Reward (#11701)", 1011701},
    {"Quest: Foolish Endeavors Reward (#11705)", 1011705},
    {"Quest: The Collapse Reward (#11706)", 1011706},
    {"Quest: Re-Cursive Reward (#11712)", 1011712},
    {"Quest: Vermin Extermination Reward (#11714)", 1011714},
    {"Quest: Trophies of Gammoth Reward (#11722)", 1011722},
    {"Quest: Deploy the Shake-n-Quake! Reward (#11723)", 1011723},
    {"Quest: Master and Servant Reward (#11730)", 1011730},
    {"Quest: Torch Tossing Reward (#11731)", 1011731},
    {"Quest: Desecrate this Fire! Reward (#11732)", 1011732},
    {"Quest: Desecrate this Fire! Reward (#11734)", 1011734},
    {"Quest: Desecrate this Fire! Reward (#11735)", 1011735},
    {"Quest: Desecrate this Fire! Reward (#11736)", 1011736},
    {"Quest: Desecrate this Fire! Reward (#11737)", 1011737},
    {"Quest: Desecrate this Fire! Reward (#11738)", 1011738},
    {"Quest: Desecrate this Fire! Reward (#11739)", 1011739},
    {"Quest: Desecrate this Fire! Reward (#11740)", 1011740},
    {"Quest: Desecrate this Fire! Reward (#11741)", 1011741},
    {"Quest: Desecrate this Fire! Reward (#11742)", 1011742},
    {"Quest: Desecrate this Fire! Reward (#11743)", 1011743},
    {"Quest: Desecrate this Fire! Reward (#11744)", 1011744},
    {"Quest: Desecrate this Fire! Reward (#11745)", 1011745},
    {"Quest: Desecrate this Fire! Reward (#11746)", 1011746},
    {"Quest: Desecrate this Fire! Reward (#11747)", 1011747},
    {"Quest: Desecrate this Fire! Reward (#11748)", 1011748},
    {"Quest: Desecrate this Fire! Reward (#11749)", 1011749},
    {"Quest: Desecrate this Fire! Reward (#11750)", 1011750},
    {"Quest: Desecrate this Fire! Reward (#11751)", 1011751},
    {"Quest: Desecrate this Fire! Reward (#11752)", 1011752},
    {"Quest: Desecrate this Fire! Reward (#11753)", 1011753},
    {"Quest: Desecrate this Fire! Reward (#11754)", 1011754},
    {"Quest: Desecrate this Fire! Reward (#11755)", 1011755},
    {"Quest: Desecrate this Fire! Reward (#11756)", 1011756},
    {"Quest: Desecrate this Fire! Reward (#11757)", 1011757},
    {"Quest: Desecrate this Fire! Reward (#11758)", 1011758},
    {"Quest: Desecrate this Fire! Reward (#11759)", 1011759},
    {"Quest: Desecrate this Fire! Reward (#11760)", 1011760},
    {"Quest: Desecrate this Fire! Reward (#11761)", 1011761},
    {"Quest: Desecrate this Fire! Reward (#11762)", 1011762},
    {"Quest: Desecrate this Fire! Reward (#11763)", 1011763},
    {"Quest: Desecrate this Fire! Reward (#11764)", 1011764},
    {"Quest: Desecrate this Fire! Reward (#11765)", 1011765},
    {"Quest: Desecrate this Fire! Reward (#11766)", 1011766},
    {"Quest: Desecrate this Fire! Reward (#11767)", 1011767},
    {"Quest: Desecrate this Fire! Reward (#11768)", 1011768},
    {"Quest: Desecrate this Fire! Reward (#11769)", 1011769},
    {"Quest: Desecrate this Fire! Reward (#11770)", 1011770},
    {"Quest: Desecrate this Fire! Reward (#11771)", 1011771},
    {"Quest: Desecrate this Fire! Reward (#11772)", 1011772},
    {"Quest: Desecrate this Fire! Reward (#11773)", 1011773},
    {"Quest: Desecrate this Fire! Reward (#11774)", 1011774},
    {"Quest: Desecrate this Fire! Reward (#11775)", 1011775},
    {"Quest: Desecrate this Fire! Reward (#11776)", 1011776},
    {"Quest: Desecrate this Fire! Reward (#11777)", 1011777},
    {"Quest: Desecrate this Fire! Reward (#11778)", 1011778},
    {"Quest: Desecrate this Fire! Reward (#11779)", 1011779},
    {"Quest: Desecrate this Fire! Reward (#11780)", 1011780},
    {"Quest: Desecrate this Fire! Reward (#11781)", 1011781},
    {"Quest: Desecrate this Fire! Reward (#11782)", 1011782},
    {"Quest: Desecrate this Fire! Reward (#11783)", 1011783},
    {"Quest: Desecrate this Fire! Reward (#11784)", 1011784},
    {"Quest: Desecrate this Fire! Reward (#11785)", 1011785},
    {"Quest: Desecrate this Fire! Reward (#11786)", 1011786},
    {"Quest: Desecrate this Fire! Reward (#11787)", 1011787},
    {"Quest: A Soldier in Need Reward (#11789)", 1011789},
    {"Quest: Enemies of the Light Reward (#11792)", 1011792},
    {"Quest: The Hunt is On Reward (#11794)", 1011794},
    {"Quest: The Siege Reward (#11797)", 1011797},
    {"Quest: The Gearmaster Reward (#11798)", 1011798},
    {"Quest: Desecrate this Fire! Reward (#11799)", 1011799},
    {"Quest: Desecrate this Fire! Reward (#11800)", 1011800},
    {"Quest: Desecrate this Fire! Reward (#11801)", 1011801},
    {"Quest: Desecrate this Fire! Reward (#11802)", 1011802},
    {"Quest: Desecrate this Fire! Reward (#11803)", 1011803},
    {"Quest: Honor the Flame Reward (#11804)", 1011804},
    {"Quest: Honor the Flame Reward (#11805)", 1011805},
    {"Quest: Honor the Flame Reward (#11806)", 1011806},
    {"Quest: Honor the Flame Reward (#11807)", 1011807},
    {"Quest: Honor the Flame Reward (#11808)", 1011808},
    {"Quest: Honor the Flame Reward (#11809)", 1011809},
    {"Quest: Honor the Flame Reward (#11810)", 1011810},
    {"Quest: Honor the Flame Reward (#11811)", 1011811},
    {"Quest: Honor the Flame Reward (#11812)", 1011812},
    {"Quest: Honor the Flame Reward (#11813)", 1011813},
    {"Quest: Honor the Flame Reward (#11814)", 1011814},
    {"Quest: Honor the Flame Reward (#11815)", 1011815},
    {"Quest: Honor the Flame Reward (#11816)", 1011816},
    {"Quest: Honor the Flame Reward (#11817)", 1011817},
    {"Quest: Honor the Flame Reward (#11818)", 1011818},
    {"Quest: Honor the Flame Reward (#11819)", 1011819},
    {"Quest: Honor the Flame Reward (#11820)", 1011820},
    {"Quest: Honor the Flame Reward (#11821)", 1011821},
    {"Quest: Honor the Flame Reward (#11822)", 1011822},
    {"Quest: Honor the Flame Reward (#11823)", 1011823},
    {"Quest: Honor the Flame Reward (#11824)", 1011824},
    {"Quest: Honor the Flame Reward (#11825)", 1011825},
    {"Quest: Honor the Flame Reward (#11826)", 1011826},
    {"Quest: Honor the Flame Reward (#11827)", 1011827},
    {"Quest: Honor the Flame Reward (#11828)", 1011828},
    {"Quest: Honor the Flame Reward (#11829)", 1011829},
    {"Quest: Honor the Flame Reward (#11830)", 1011830},
    {"Quest: Honor the Flame Reward (#11831)", 1011831},
    {"Quest: Honor the Flame Reward (#11832)", 1011832},
    {"Quest: Honor the Flame Reward (#11833)", 1011833},
    {"Quest: Honor the Flame Reward (#11834)", 1011834},
    {"Quest: Honor the Flame Reward (#11835)", 1011835},
    {"Quest: Honor the Flame Reward (#11836)", 1011836},
    {"Quest: Honor the Flame Reward (#11837)", 1011837},
    {"Quest: Honor the Flame Reward (#11838)", 1011838},
    {"Quest: Honor the Flame Reward (#11839)", 1011839},
    {"Quest: Honor the Flame Reward (#11840)", 1011840},
    {"Quest: Honor the Flame Reward (#11841)", 1011841},
    {"Quest: Honor the Flame Reward (#11842)", 1011842},
    {"Quest: Honor the Flame Reward (#11843)", 1011843},
    {"Quest: Honor the Flame Reward (#11844)", 1011844},
    {"Quest: Honor the Flame Reward (#11845)", 1011845},
    {"Quest: Honor the Flame Reward (#11846)", 1011846},
    {"Quest: Honor the Flame Reward (#11847)", 1011847},
    {"Quest: Honor the Flame Reward (#11848)", 1011848},
    {"Quest: Honor the Flame Reward (#11849)", 1011849},
    {"Quest: Honor the Flame Reward (#11850)", 1011850},
    {"Quest: Honor the Flame Reward (#11851)", 1011851},
    {"Quest: Honor the Flame Reward (#11852)", 1011852},
    {"Quest: Honor the Flame Reward (#11853)", 1011853},
    {"Quest: Honor the Flame Reward (#11854)", 1011854},
    {"Quest: Honor the Flame Reward (#11855)", 1011855},
    {"Quest: Honor the Flame Reward (#11856)", 1011856},
    {"Quest: Honor the Flame Reward (#11857)", 1011857},
    {"Quest: Honor the Flame Reward (#11858)", 1011858},
    {"Quest: Honor the Flame Reward (#11859)", 1011859},
    {"Quest: Honor the Flame Reward (#11860)", 1011860},
    {"Quest: Honor the Flame Reward (#11861)", 1011861},
    {"Quest: Honor the Flame Reward (#11862)", 1011862},
    {"Quest: Honor the Flame Reward (#11863)", 1011863},
    {"Quest: The Culler Cometh Reward (#11868)", 1011868},
    {"Quest: The Nefarious Clam Master... Reward (#11872)", 1011872},
    {"Quest: Give Fizzcrank the News Reward (#11873)", 1011873},
    {"Quest: Gaining the Advantage Reward (#11875)", 1011875},
    {"Quest: Sunfury Attack Plans Reward (#11877)", 1011877},
    {"Quest: Kaw the Mammoth Destroyer Reward (#11879)", 1011879},
    {"Quest: Ned, Lord of Rhinos... Reward (#11884)", 1011884},
    {"Quest: Adversarial Blood Reward (#11885)", 1011885},
    {"Quest: Unusual Activity Reward (#11886)", 1011886},
    {"Quest: An Innocent Disguise Reward (#11891)", 1011891},
    {"Quest: The Assassination of Harold Lane Reward (#11892)", 1011892},
    {"Quest: Patching Up Reward (#11894)", 1011894},
    {"Quest: Plug the Sinkholes Reward (#11897)", 1011897},
    {"Quest: Breaking Through Reward (#11898)", 1011898},
    {"Quest: It's Time for Action Reward (#11903)", 1011903},
    {"Quest: Postponing the Inevitable Reward (#11905)", 1011905},
    {"Quest: Cleaning Up the Pools Reward (#11906)", 1011906},
    {"Quest: The Sub-Chieftains Reward (#11907)", 1011907},
    {"Quest: Defeat the Gearmaster Reward (#11909)", 1011909},
    {"Quest: Quickening Reward (#11911)", 1011911},
    {"Quest: Take No Chances Reward (#11913)", 1011913},
    {"Quest: Keep the Secret Safe Reward (#11914)", 1011914},
    {"Quest: Hellscream's Champion Reward (#11916)", 1011916},
    {"Quest: Striking Back Reward (#11917)", 1011917},
    {"Quest: Drake Hunt Reward (#11919)", 1011919},
    {"Quest: More Torch Tossing Reward (#11921)", 1011921},
    {"Quest: Torch Tossing Reward (#11922)", 1011922},
    {"Quest: Torch Catching Reward (#11923)", 1011923},
    {"Quest: More Torch Catching Reward (#11924)", 1011924},
    {"Quest: More Torch Catching Reward (#11925)", 1011925},
    {"Quest: More Torch Tossing Reward (#11926)", 1011926},
    {"Quest: Stealing the Exodar's Flame Reward (#11933)", 1011933},
    {"Quest: Stealing Silvermoon's Flame Reward (#11935)", 1011935},
    {"Quest: Buying Some Time Reward (#11938)", 1011938},
    {"Quest: The Cell Reward (#11943)", 1011943},
    {"Quest: Surrounded! Reward (#11944)", 1011944},
    {"Quest: Striking Back Reward (#11947)", 1011947},
    {"Quest: Striking Back Reward (#11948)", 1011948},
    {"Quest: Not Without a Fight! Reward (#11949)", 1011949},
    {"Quest: Striking Back Reward (#11952)", 1011952},
    {"Quest: Striking Back Reward (#11953)", 1011953},
    {"Quest: Striking Back Reward (#11954)", 1011954},
    {"Quest: Saragosa's End Reward (#11957)", 1011957},
    {"Quest: Slay Loguhn Reward (#11959)", 1011959},
    {"Quest: Incense for the Summer Scorchlings Reward (#11964)", 1011964},
    {"Quest: Call to Arms! Reward (#11965)", 1011965},
    {"Quest: Incense for the Festival Scorchlings Reward (#11966)", 1011966},
    {"Quest: The Tides Turn Reward (#11968)", 1011968},
    {"Quest: Springing the Trap Reward (#11969)", 1011969},
    {"Quest: The Master of Summer Lore Reward (#11970)", 1011970},
    {"Quest: The Spinner of Summer Tales Reward (#11971)", 1011971},
    {"Quest: Shards of Ahune Reward (#11972)", 1011972},
    {"Quest: Prisoner of War Reward (#11973)", 1011973},
    {"Quest: Ice Shards Reward (#11976)", 1011976},
    {"Quest: Pride of the Horde Reward (#11980)", 1011980},
    {"Quest: Filling the Cages Reward (#11984)", 1011984},
    {"Quest: Into the Breach Reward (#11985)", 1011985},
    {"Quest: zzOLDFortune Card: Silver Reward (#11987)", 1011987},
    {"Quest: Subject to Interpretation Reward (#11991)", 1011991},
    {"Quest: The Runic Prophecies Reward (#11993)", 1011993},
    {"Quest: Prevent the Accord Reward (#12004)", 1012004},
    {"Quest: Prevent the Accord Reward (#12005)", 1012005},
    {"Quest: End Arcanimus Reward (#12013)", 1012013},
    {"Quest: Steady as a Rock? Reward (#12014)", 1012014},
    {"Quest: Meat on the Hook Reward (#12017)", 1012017},
    {"Quest: Last Rites Reward (#12019)", 1012019},
    {"Quest: This One Time, When I Was Drunk... Reward (#12020)", 1012020},
    {"Quest: Chug and Chuck! Reward (#12022)", 1012022},
    {"Quest: Mr. Floppy's Perilous Adventure Reward (#12027)", 1012027},
    {"Quest: Conversing With the Depths Reward (#12032)", 1012032},
    {"Quest: Repurposed Technology Reward (#12035)", 1012035},
    {"Quest: Search and Rescue Reward (#12037)", 1012037},
    {"Quest: The Lost Empire Reward (#12041)", 1012041},
    {"Quest: Heart of the Ancients Reward (#12042)", 1012042},
    {"Quest: Something That Doesn't Melt Reward (#12047)", 1012047},
    {"Quest: Scourge Armaments Reward (#12048)", 1012048},
    {"Quest: Lumber Hack Reward (#12050)", 1012050},
    {"Quest: Harp on This! Reward (#12052)", 1012052},
    {"Quest: The Might of the Horde Reward (#12053)", 1012053},
    {"Quest: The Runic Prophecies Reward (#12058)", 1012058},
    {"Quest: Chains of the Anub'ar Reward (#12064)", 1012064},
    {"Quest: Voices From the Dust Reward (#12068)", 1012068},
    {"Quest: Blightbeasts be Damned! Reward (#12072)", 1012072},
    {"Quest: Apply This Twice A Day Reward (#12077)", 1012077},
    {"Quest: Really Big Worm Reward (#12080)", 1012080},
    {"Quest: Dun-da-Dun-tah! Reward (#12082)", 1012082},
    {"Quest: Atop the Woodlands Reward (#12083)", 1012083},
    {"Quest: Atop the Woodlands Reward (#12084)", 1012084},
    {"Quest: Wanted: Magister Keldonus Reward (#12089)", 1012089},
    {"Quest: Wanted: Gigantaur Reward (#12090)", 1012090},
    {"Quest: Wanted: Dreadtalon Reward (#12091)", 1012091},
    {"Quest: Strengthen the Ancients Reward (#12092)", 1012092},
    {"Quest: Strengthen the Ancients Reward (#12096)", 1012096},
    {"Quest: Sarathstra, Scourge of the North Reward (#12097)", 1012097},
    {"Quest: Free at Last Reward (#12099)", 1012099},
    {"Quest: Descent into Darkness Reward (#12105)", 1012105},
    {"Quest: The End of the Line Reward (#12107)", 1012107},
    {"Quest: The End of the Line Reward (#12110)", 1012110},
    {"Quest: Where the Wild Things Roam Reward (#12111)", 1012111},
    {"Quest: Therapy Reward (#12114)", 1012114},
    {"Quest: Travel to Moa'ki Harbor Reward (#12117)", 1012117},
    {"Quest: Travel to Moa'ki Harbor Reward (#12118)", 1012118},
    {"Quest: Drak'aguul's Mallet Reward (#12120)", 1012120},
    {"Quest: Smash the Pumpkin Reward (#12133)", 1012133},
    {"Quest: Sasha's Hunt Reward (#12134)", 1012134},
    {"Quest: \"Let the Fires Come!\" Reward (#12135)", 1012135},
    {"Quest: The Translated Tome Reward (#12136)", 1012136},
    {"Quest: \"Let the Fires Come!\" Reward (#12139)", 1012139},
    {"Quest: All Hail Roanauk! Reward (#12140)", 1012140},
    {"Quest: Canyon Chase Reward (#12143)", 1012143},
    {"Quest: Canyon Chase Reward (#12145)", 1012145},
    {"Quest: Wanton Warlord Reward (#12151)", 1012151},
    {"Quest: Jin'arrak's End Reward (#12152)", 1012152},
    {"Quest: The Iron Thane and His Anvil Reward (#12153)", 1012153},
    {"Quest: Smash the Pumpkin Reward (#12155)", 1012155},
    {"Quest: Souls at Unrest Reward (#12159)", 1012159},
    {"Quest: Hour of the Worg Reward (#12164)", 1012164},
    {"Quest: The High Cultist Reward (#12169)", 1012169},
    {"Quest: Blackriver Brawl Reward (#12170)", 1012170},
    {"Quest: Gray Worg Hides Reward (#12175)", 1012175},
    {"Quest: A Minor Substitution Reward (#12176)", 1012176},
    {"Quest: Put on Your Best Face for Loken Reward (#12185)", 1012185},
    {"Quest: The Forsaken Blight and You: How Not to Die Reward (#12188)", 1012188},
    {"Quest: Chug and Chuck! Reward (#12191)", 1012191},
    {"Quest: This One Time, When I Was Drunk... Reward (#12192)", 1012192},
    {"Quest: Say, There Wouldn't Happen to be a Souvenir This Year, Would There? Reward (#12193)", 1012193},
    {"Quest: Say, There Wouldn't Happen to be a Souvenir This Year, Would There? Reward (#12194)", 1012194},
    {"Quest: Bringing Down the Iron Thane Reward (#12199)", 1012199},
    {"Quest: Vordrassil's Fall Reward (#12207)", 1012207},
    {"Quest: Let Them Not Rise! Reward (#12211)", 1012211},
    {"Quest: The Failed World Tree Reward (#12219)", 1012219},
    {"Quest: The Forsaken Blight Reward (#12221)", 1012221},
    {"Quest: The Kor'kron Vanguard! Reward (#12224)", 1012224},
    {"Quest: Doing Your Duty Reward (#12227)", 1012227},
    {"Quest: A Possible Link Reward (#12229)", 1012229},
    {"Quest: Bombard the Ballistae Reward (#12232)", 1012232},
    {"Quest: Ursoc, the Bear God Reward (#12236)", 1012236},
    {"Quest: Cleansing Drak'Tharon Reward (#12238)", 1012238},
    {"Quest: Vordrassil's Seeds Reward (#12242)", 1012242},
    {"Quest: Fire Upon the Waters Reward (#12243)", 1012243},
    {"Quest: Shredder Repair Reward (#12244)", 1012244},
    {"Quest: A Possible Link Reward (#12246)", 1012246},
    {"Quest: Ursoc, the Bear God Reward (#12249)", 1012249},
    {"Quest: Vordrassil's Seeds Reward (#12250)", 1012250},
    {"Quest: Return to the High Commander Reward (#12251)", 1012251},
    {"Quest: Torture the Torturer Reward (#12252)", 1012252},
    {"Quest: The Thane of Voldrune Reward (#12255)", 1012255},
    {"Quest: The Fate of the Dead Reward (#12258)", 1012258},
    {"Quest: The Thane of Voldrune Reward (#12259)", 1012259},
    {"Quest: Neltharion's Flame Reward (#12267)", 1012267},
    {"Quest: Shred the Alliance Reward (#12270)", 1012270},
    {"Quest: The Denouncement Reward (#12273)", 1012273},
    {"Quest: Leave Nothing to Chance Reward (#12277)", 1012277},
    {"Quest: Imprints on the Past Reward (#12282)", 1012282},
    {"Quest: Do Unto Others Reward (#12285)", 1012285},
    {"Quest: Candy Bucket Reward (#12286)", 1012286},
    {"Quest: Local Support Reward (#12292)", 1012292},
    {"Quest: Northern Hospitality Reward (#12299)", 1012299},
    {"Quest: Funding the War Effort Reward (#12303)", 1012303},
    {"Quest: Parting Thoughts Reward (#12305)", 1012305},
    {"Quest: Wolfsbane Root Reward (#12307)", 1012307},
    {"Quest: Escape from Silverbrook Reward (#12308)", 1012308},
    {"Quest: The Noble's Crypt Reward (#12311)", 1012311},
    {"Quest: Down With Captain Zorna! Reward (#12314)", 1012314},
    {"Quest: Crush Captain Brightwater! Reward (#12315)", 1012315},
    {"Quest: Keep Them at Bay! Reward (#12316)", 1012316},
    {"Quest: Keep Them at Bay Reward (#12317)", 1012317},
    {"Quest: A Righteous Sermon Reward (#12321)", 1012321},
    {"Quest: Smoke 'Em Out Reward (#12323)", 1012323},
    {"Quest: Smoke 'Em Out Reward (#12324)", 1012324},
    {"Quest: Steamtank Surprise Reward (#12326)", 1012326},
    {"Quest: Ruuna's Request Reward (#12328)", 1012328},
    {"Quest: Anatoly Will Talk Reward (#12330)", 1012330},
    {"Quest: Candy Bucket Reward (#12331)", 1012331},
    {"Quest: Candy Bucket Reward (#12332)", 1012332},
    {"Quest: Candy Bucket Reward (#12333)", 1012333},
    {"Quest: Candy Bucket Reward (#12334)", 1012334},
    {"Quest: Candy Bucket Reward (#12335)", 1012335},
    {"Quest: Candy Bucket Reward (#12336)", 1012336},
    {"Quest: Candy Bucket Reward (#12337)", 1012337},
    {"Quest: Candy Bucket Reward (#12338)", 1012338},
    {"Quest: Candy Bucket Reward (#12339)", 1012339},
    {"Quest: Candy Bucket Reward (#12340)", 1012340},
    {"Quest: Candy Bucket Reward (#12341)", 1012341},
    {"Quest: Candy Bucket Reward (#12342)", 1012342},
    {"Quest: Candy Bucket Reward (#12343)", 1012343},
    {"Quest: Candy Bucket Reward (#12344)", 1012344},
    {"Quest: Candy Bucket Reward (#12345)", 1012345},
    {"Quest: Candy Bucket Reward (#12346)", 1012346},
    {"Quest: Candy Bucket Reward (#12347)", 1012347},
    {"Quest: Candy Bucket Reward (#12348)", 1012348},
    {"Quest: Candy Bucket Reward (#12349)", 1012349},
    {"Quest: Candy Bucket Reward (#12350)", 1012350},
    {"Quest: Candy Bucket Reward (#12351)", 1012351},
    {"Quest: Candy Bucket Reward (#12352)", 1012352},
    {"Quest: Candy Bucket Reward (#12353)", 1012353},
    {"Quest: Candy Bucket Reward (#12354)", 1012354},
    {"Quest: Candy Bucket Reward (#12355)", 1012355},
    {"Quest: Candy Bucket Reward (#12356)", 1012356},
    {"Quest: Candy Bucket Reward (#12357)", 1012357},
    {"Quest: Candy Bucket Reward (#12358)", 1012358},
    {"Quest: Candy Bucket Reward (#12359)", 1012359},
    {"Quest: Candy Bucket Reward (#12360)", 1012360},
    {"Quest: Candy Bucket Reward (#12361)", 1012361},
    {"Quest: Candy Bucket Reward (#12362)", 1012362},
    {"Quest: Candy Bucket Reward (#12363)", 1012363},
    {"Quest: Candy Bucket Reward (#12364)", 1012364},
    {"Quest: Candy Bucket Reward (#12365)", 1012365},
    {"Quest: Candy Bucket Reward (#12366)", 1012366},
    {"Quest: Candy Bucket Reward (#12367)", 1012367},
    {"Quest: Candy Bucket Reward (#12368)", 1012368},
    {"Quest: Candy Bucket Reward (#12369)", 1012369},
    {"Quest: Candy Bucket Reward (#12370)", 1012370},
    {"Quest: Candy Bucket Reward (#12371)", 1012371},
    {"Quest: Candy Bucket Reward (#12373)", 1012373},
    {"Quest: Candy Bucket Reward (#12374)", 1012374},
    {"Quest: Candy Bucket Reward (#12375)", 1012375},
    {"Quest: Candy Bucket Reward (#12376)", 1012376},
    {"Quest: Candy Bucket Reward (#12377)", 1012377},
    {"Quest: Candy Bucket Reward (#12378)", 1012378},
    {"Quest: Candy Bucket Reward (#12379)", 1012379},
    {"Quest: Candy Bucket Reward (#12380)", 1012380},
    {"Quest: Candy Bucket Reward (#12381)", 1012381},
    {"Quest: Candy Bucket Reward (#12382)", 1012382},
    {"Quest: Candy Bucket Reward (#12383)", 1012383},
    {"Quest: Candy Bucket Reward (#12384)", 1012384},
    {"Quest: Candy Bucket Reward (#12385)", 1012385},
    {"Quest: Candy Bucket Reward (#12386)", 1012386},
    {"Quest: Candy Bucket Reward (#12387)", 1012387},
    {"Quest: Candy Bucket Reward (#12388)", 1012388},
    {"Quest: Candy Bucket Reward (#12389)", 1012389},
    {"Quest: Candy Bucket Reward (#12390)", 1012390},
    {"Quest: Candy Bucket Reward (#12391)", 1012391},
    {"Quest: Candy Bucket Reward (#12392)", 1012392},
    {"Quest: Candy Bucket Reward (#12393)", 1012393},
    {"Quest: Candy Bucket Reward (#12394)", 1012394},
    {"Quest: Candy Bucket Reward (#12395)", 1012395},
    {"Quest: Candy Bucket Reward (#12396)", 1012396},
    {"Quest: Candy Bucket Reward (#12397)", 1012397},
    {"Quest: Candy Bucket Reward (#12398)", 1012398},
    {"Quest: Candy Bucket Reward (#12399)", 1012399},
    {"Quest: Candy Bucket Reward (#12400)", 1012400},
    {"Quest: Candy Bucket Reward (#12401)", 1012401},
    {"Quest: Candy Bucket Reward (#12402)", 1012402},
    {"Quest: Candy Bucket Reward (#12403)", 1012403},
    {"Quest: Candy Bucket Reward (#12404)", 1012404},
    {"Quest: Candy Bucket Reward (#12405)", 1012405},
    {"Quest: Candy Bucket Reward (#12406)", 1012406},
    {"Quest: Candy Bucket Reward (#12407)", 1012407},
    {"Quest: Candy Bucket Reward (#12408)", 1012408},
    {"Quest: Candy Bucket Reward (#12409)", 1012409},
    {"Quest: Candy Bucket Reward (#12410)", 1012410},
    {"Quest: My Enemy's Friend Reward (#12412)", 1012412},
    {"Quest: Attack on Silverbrook Reward (#12413)", 1012413},
    {"Quest: Through Fields of Flame Reward (#12418)", 1012418},
    {"Quest: The Conquest Pit: Final Showdown Reward (#12431)", 1012431},
    {"Quest: Riding the Red Rocket Reward (#12432)", 1012432},
    {"Quest: Seeking Solvent Reward (#12433)", 1012433},
    {"Quest: Always Seeking Solvent Reward (#12434)", 1012434},
    {"Quest: Riding the Red Rocket Reward (#12437)", 1012437},
    {"Quest: Wanted: Kreug Oathbreaker Reward (#12438)", 1012438},
    {"Quest: Wanted: High Shaman Bloodpaw Reward (#12441)", 1012441},
    {"Quest: Wanted: Onslaught Commander Iustus Reward (#12442)", 1012442},
    {"Quest: Seeking Solvent Reward (#12443)", 1012443},
    {"Quest: Blackriver Skirmish Reward (#12444)", 1012444},
    {"Quest: Always Seeking Solvent Reward (#12446)", 1012446},
    {"Quest: Through Fields of Flame Reward (#12450)", 1012450},
    {"Quest: Eyes Above Reward (#12453)", 1012453},
    {"Quest: The Plume of Alystros Reward (#12456)", 1012456},
    {"Quest: That Which Creates Can Also Destroy Reward (#12459)", 1012459},
    {"Quest: Breaking Off A Piece Reward (#12462)", 1012462},
    {"Quest: My Old Enemy Reward (#12464)", 1012464},
    {"Quest: Chasing Icestorm: Thel'zan's Phylactery Reward (#12467)", 1012467},
    {"Quest: Mystery of the Infinite Reward (#12470)", 1012470},
    {"Quest: To Fordragon Hold! Reward (#12474)", 1012474},
    {"Quest: The Return of the Crusade? Reward (#12476)", 1012476},
    {"Quest: Frostmourne Cavern Reward (#12478)", 1012478},
    {"Quest: Adding Injury to Insult Reward (#12481)", 1012481},
    {"Quest: Direbrew's Dire Brew Reward (#12491)", 1012491},
    {"Quest: Direbrew's Dire Brew Reward (#12492)", 1012492},
    {"Quest: On Ruby Wings Reward (#12498)", 1012498},
    {"Quest: Argent Crusade, We Are Leaving! Reward (#12504)", 1012504},
    {"Quest: Precious Elemental Fluids Reward (#12510)", 1012510},
    {"Quest: Leave No One Behind Reward (#12512)", 1012512},
    {"Quest: Nice Hat... Reward (#12513)", 1012513},
    {"Quest: Nice Hat... Reward (#12515)", 1012515},
    {"Quest: Too Much of a Good Thing Reward (#12516)", 1012516},
    {"Quest: Rogues Deck Reward (#12517)", 1012517},
    {"Quest: Mages Deck Reward (#12518)", 1012518},
    {"Quest: Wipe That Grin Off His Face Reward (#12525)", 1012525},
    {"Quest: Flown the Coop! Reward (#12532)", 1012532},
    {"Quest: The Sapphire Queen Reward (#12534)", 1012534},
    {"Quest: Lightning Definitely Strikes Twice Reward (#12537)", 1012537},
    {"Quest: The Cleansing Of Jintha'kalar Reward (#12545)", 1012545},
    {"Quest: Reclamation Reward (#12546)", 1012546},
    {"Quest: The Activation Rune Reward (#12547)", 1012547},
    {"Quest: Malas the Corrupter Reward (#12554)", 1012554},
    {"Quest: A Tangled Skein Reward (#12555)", 1012555},
    {"Quest: Rhino Mastery: The Kill Reward (#12556)", 1012556},
    {"Quest: Dreadsaber Mastery: Ready to Pounce Reward (#12558)", 1012558},
    {"Quest: An Issue of Trust Reward (#12561)", 1012561},
    {"Quest: Crocolisk Mastery: The Ambush Reward (#12569)", 1012569},
    {"Quest: Fortunate Misunderstandings Reward (#12570)", 1012570},
    {"Quest: Making Peace Reward (#12573)", 1012573},
    {"Quest: The Lost Mistwhisper Treasure Reward (#12575)", 1012575},
    {"Quest: A Hero's Burden Reward (#12581)", 1012581},
    {"Quest: Pure Evil Reward (#12584)", 1012584},
    {"Quest: The Great Hunter's Challenge Reward (#12592)", 1012592},
    {"Quest: Pa'Troll Reward (#12596)", 1012596},
    {"Quest: Congratulations! Reward (#12604)", 1012604},
    {"Quest: Stocking the Shelves Reward (#12609)", 1012609},
    {"Quest: Clipping Their Wings Reward (#12610)", 1012610},
    {"Quest: Returned Sevenfold Reward (#12611)", 1012611},
    {"Quest: Post-partum Aggression Reward (#12614)", 1012614},
    {"Quest: Chamber of Secrets Reward (#12616)", 1012616},
    {"Quest: Exterminate the Intruders Reward (#12617)", 1012617},
    {"Quest: The Emblazoned Runeblade Reward (#12619)", 1012619},
    {"Quest: The Leaders at Jin'Alai Reward (#12622)", 1012622},
    {"Quest: It Could Be Anywhere! Reward (#12624)", 1012624},
    {"Quest: But First My Offspring Reward (#12632)", 1012632},
    {"Quest: The Frozen Earth Reward (#12639)", 1012639},
    {"Quest: An End to the Suffering Reward (#12647)", 1012647},
    {"Quest: Feedin' Da Goolz Reward (#12652)", 1012652},
    {"Quest: The Might Of The Scourge Reward (#12657)", 1012657},
    {"Quest: Infiltrating Voltarus Reward (#12661)", 1012661},
    {"Quest: Bringing Down Heb'Jin Reward (#12662)", 1012662},
    {"Quest: So Far, So Bad Reward (#12669)", 1012669},
    {"Quest: Hell Hath a Fury Reward (#12674)", 1012674},
    {"Quest: Sabotage Reward (#12676)", 1012676},
    {"Quest: If Chaos Drives, Let Suffering Hold The Reins Reward (#12678)", 1012678},
    {"Quest: Tonight We Dine In Havenshire Reward (#12679)", 1012679},
    {"Quest: Reagent Agent Reward (#12681)", 1012681},
    {"Quest: You Reap What You Sow Reward (#12685)", 1012685},
    {"Quest: Into the Realm of Shadows Reward (#12687)", 1012687},
    {"Quest: A Timeworn Coffer Reward (#12691)", 1012691},
    {"Quest: The Gift That Keeps On Giving Reward (#12698)", 1012698},
    {"Quest: Massacre At Light's Point Reward (#12701)", 1012701},
    {"Quest: Victory At Death's Breach! Reward (#12706)", 1012706},
    {"Quest: Wooly Justice Reward (#12707)", 1012707},
    {"Quest: Hexed Caches Reward (#12709)", 1012709},
    {"Quest: Betrayal Reward (#12713)", 1012713},
    {"Quest: The Plaguebringer's Request Reward (#12716)", 1012716},
    {"Quest: Noth's Special Brew Reward (#12717)", 1012717},
    {"Quest: More Skulls For Brew Reward (#12718)", 1012718},
    {"Quest: How To Win Friends And Influence Enemies Reward (#12720)", 1012720},
    {"Quest: Rampage Reward (#12721)", 1012721},
    {"Quest: Lambs To The Slaughter Reward (#12722)", 1012722},
    {"Quest: The Path Of The Righteous Crusader Reward (#12724)", 1012724},
    {"Quest: Bloody Breakout Reward (#12727)", 1012727},
    {"Quest: Monitoring the Rift: Winterfin Cavern Reward (#12728)", 1012728},
    {"Quest: Convocation at Zol'Heb Reward (#12730)", 1012730},
    {"Quest: Death's Challenge Reward (#12733)", 1012733},
    {"Quest: Parachutes for the Argent Crusade Reward (#12740)", 1012740},
    {"Quest: A Sort Of Homecoming Reward (#12751)", 1012751},
    {"Quest: Scarlet Armies Approach... Reward (#12757)", 1012757},
    {"Quest: An End To All Things... Reward (#12779)", 1012779},
    {"Quest: Welcome! Reward (#12781)", 1012781},
    {"Quest: Swords Deck Reward (#12798)", 1012798},
    {"Quest: The Light of Dawn Reward (#12801)", 1012801},
    {"Quest: You'll Need a Gryphon Reward (#12814)", 1012814},
    {"Quest: A Delicate Touch Reward (#12820)", 1012820},
    {"Quest: Demolitionist Extraordinaire Reward (#12824)", 1012824},
    {"Quest: Ample Inspiration Reward (#12828)", 1012828},
    {"Quest: Bitter Departure Reward (#12832)", 1012832},
    {"Quest: In Strict Confidence Reward (#12840)", 1012840},
    {"Quest: They Took Our Men! Reward (#12843)", 1012843},
    {"Quest: The Admiral Revealed Reward (#12852)", 1012852},
    {"Quest: Wanted: Ragemane's Flipper Reward (#12857)", 1012857},
    {"Quest: This Just In: Fire Still Hot! Reward (#12859)", 1012859},
    {"Quest: Trolls Is Gone Crazy! Reward (#12861)", 1012861},
    {"Quest: Loyal Companions Reward (#12865)", 1012865},
    {"Quest: Sirana Iceshriek Reward (#12868)", 1012868},
    {"Quest: Ancient Relics Reward (#12870)", 1012870},
    {"Quest: Norgannon's Shell Reward (#12872)", 1012872},
    {"Quest: Fervor of the Frostborn Reward (#12874)", 1012874},
    {"Quest: Ancient Relics Reward (#12882)", 1012882},
    {"Quest: The Drakkensryd Reward (#12886)", 1012886},
    {"Quest: Free Your Mind Reward (#12893)", 1012893},
    {"Quest: The Shadow Vault Reward (#12898)", 1012898},
    {"Quest: The Shadow Vault Reward (#12899)", 1012899},
    {"Quest: Making a Harness Reward (#12900)", 1012900},
    {"Quest: That's What Friends Are For... Reward (#12903)", 1012903},
    {"Quest: Discipline Reward (#12906)", 1012906},
    {"Quest: Gem Perfection Reward (#12918)", 1012918},
    {"Quest: The Storm King's Vengeance Reward (#12919)", 1012919},
    {"Quest: Forging an Alliance Reward (#12924)", 1012924},
    {"Quest: Norgannon's Shell Reward (#12928)", 1012928},
    {"Quest: The Amphitheater of Anguish: Tuskarrmageddon! Reward (#12935)", 1012935},
    {"Quest: Candy Bucket Reward (#12940)", 1012940},
    {"Quest: Candy Bucket Reward (#12941)", 1012941},
    {"Quest: Off With Their Black Wings Reward (#12942)", 1012942},
    {"Quest: Shadow Vault Decree Reward (#12943)", 1012943},
    {"Quest: Candy Bucket Reward (#12944)", 1012944},
    {"Quest: Candy Bucket Reward (#12945)", 1012945},
    {"Quest: Candy Bucket Reward (#12946)", 1012946},
    {"Quest: Candy Bucket Reward (#12947)", 1012947},
    {"Quest: The Champion of Anguish Reward (#12948)", 1012948},
    {"Quest: Candy Bucket Reward (#12950)", 1012950},
    {"Quest: Gem Perfection Reward (#12952)", 1012952},
    {"Quest: Valkyrion Must Burn Reward (#12953)", 1012953},
    {"Quest: Eliminate the Competition Reward (#12955)", 1012955},
    {"Quest: Shipment: Blood Jade Amulet  Reward (#12958)", 1012958},
    {"Quest: Shipment: Glowing Ivory Figurine Reward (#12959)", 1012959},
    {"Quest: Shipment: Wicked Sun Brooch Reward (#12960)", 1012960},
    {"Quest: Shipment: Intricate Bone Figurine Reward (#12961)", 1012961},
    {"Quest: Shipment: Bright Armor Relic Reward (#12962)", 1012962},
    {"Quest: Shipment: Shifting Sun Curio  Reward (#12963)", 1012963},
    {"Quest: The Gifts of Loken Reward (#12965)", 1012965},
    {"Quest: Taking on All Challengers Reward (#12971)", 1012971},
    {"Quest: The Brothers Bronzebeard Reward (#12973)", 1012973},
    {"Quest: Ebon Blade Prisoners Reward (#12982)", 1012982},
    {"Quest: Valduran the Stormborn Reward (#12984)", 1012984},
    {"Quest: Fate of the Titans Reward (#12986)", 1012986},
    {"Quest: The Slithering Darkness Reward (#12989)", 1012989},
    {"Quest: Crush Dem Vrykuls! Reward (#12992)", 1012992},
    {"Quest: Emergency Measures Reward (#13000)", 1013000},
    {"Quest: Gem Perfection Reward (#13002)", 1013002},
    {"Quest: Gem Perfection Reward (#13004)", 1013004},
    {"Quest: The Earthen Oath Reward (#13005)", 1013005},
    {"Quest: The Iron Colossus Reward (#13007)", 1013007},
    {"Quest: Krolmir, Hammer of Storms Reward (#13010)", 1013010},
    {"Quest: Sardis the Elder Reward (#13012)", 1013012},
    {"Quest: Beldak the Elder Reward (#13013)", 1013013},
    {"Quest: Morthie the Elder Reward (#13014)", 1013014},
    {"Quest: Fargal the Elder Reward (#13015)", 1013015},
    {"Quest: Northal the Elder Reward (#13016)", 1013016},
    {"Quest: Jarten the Elder Reward (#13017)", 1013017},
    {"Quest: Sandrene the Elder Reward (#13018)", 1013018},
    {"Quest: Thoim the Elder Reward (#13019)", 1013019},
    {"Quest: Stonebeard the Elder Reward (#13020)", 1013020},
    {"Quest: Igasho the Elder Reward (#13021)", 1013021},
    {"Quest: Nurgen the Elder Reward (#13022)", 1013022},
    {"Quest: Kilias the Elder Reward (#13023)", 1013023},
    {"Quest: Wanikaya the Elder Reward (#13024)", 1013024},
    {"Quest: Lunaro the Elder Reward (#13025)", 1013025},
    {"Quest: Bluewolf the Elder Reward (#13026)", 1013026},
    {"Quest: Tauros the Elder Reward (#13027)", 1013027},
    {"Quest: Graymane the Elder Reward (#13028)", 1013028},
    {"Quest: Pamuya the Elder Reward (#13029)", 1013029},
    {"Quest: Whurain the Elder Reward (#13030)", 1013030},
    {"Quest: Skywarden the Elder Reward (#13031)", 1013031},
    {"Quest: Muraco the Elder Reward (#13032)", 1013032},
    {"Quest: Arp the Elder Reward (#13033)", 1013033},
    {"Quest: Defending The Vanguard Reward (#13039)", 1013039},
    {"Quest: Curing The Incurable Reward (#13040)", 1013040},
    {"Quest: Finish the Shipment Reward (#13041)", 1013041},
    {"Quest: The Sum is Greater than the Parts Reward (#13043)", 1013043},
    {"Quest: The Reckoning Reward (#13047)", 1013047},
    {"Quest: Territorial Trespass Reward (#13051)", 1013051},
    {"Quest: There's Always Time for Revenge Reward (#13056)", 1013056},
    {"Quest: Changing the Wind's Course Reward (#13058)", 1013058},
    {"Quest: Revenge for the Vargul Reward (#13059)", 1013059},
    {"Quest: Ohanzee the Elder Reward (#13065)", 1013065},
    {"Quest: Yurauk the Elder Reward (#13066)", 1013066},
    {"Quest: Chogan'gada the Elder Reward (#13067)", 1013067},
    {"Quest: Light Within the Darkness Reward (#13083)", 1013083},
    {"Quest: The Last Line Of Defense Reward (#13086)", 1013086},
    {"Quest: The Art of Being a Water Terror Reward (#13091)", 1013091},
    {"Quest: Reading the Bones Reward (#13092)", 1013092},
    {"Quest: Reading the Bones Reward (#13093)", 1013093},
    {"Quest: Have They No Shame? Reward (#13094)", 1013094},
    {"Quest: Have They No Shame? Reward (#13095)", 1013095},
    {"Quest: Gal'darah Must Pay Reward (#13096)", 1013096},
    {"Quest: For Posterity Reward (#13098)", 1013098},
    {"Quest: Infused Mushroom Meatloaf Reward (#13100)", 1013100},
    {"Quest: Convention at the Legerdemain Reward (#13101)", 1013101},
    {"Quest: Sewer Stew Reward (#13102)", 1013102},
    {"Quest: Cheese for Glowergold Reward (#13103)", 1013103},
    {"Quest: Mustard Dogs! Reward (#13107)", 1013107},
    {"Quest: Whatever it Takes! Reward (#13108)", 1013108},
    {"Quest: Diametrically Opposed Reward (#13109)", 1013109},
    {"Quest: The Restless Dead Reward (#13110)", 1013110},
    {"Quest: One of a Kind Reward (#13111)", 1013111},
    {"Quest: Infused Mushroom Meatloaf Reward (#13112)", 1013112},
    {"Quest: Convention at the Legerdemain Reward (#13113)", 1013113},
    {"Quest: Sewer Stew Reward (#13114)", 1013114},
    {"Quest: Cheese for Glowergold Reward (#13115)", 1013115},
    {"Quest: Mustard Dogs! Reward (#13116)", 1013116},
    {"Quest: The Struggle Persists Reward (#13124)", 1013124},
    {"Quest: The Air Stands Still Reward (#13125)", 1013125},
    {"Quest: A Wing and a Prayer Reward (#13128)", 1013128},
    {"Quest: Head Games Reward (#13129)", 1013129},
    {"Quest: The Stone That Started A Revolution Reward (#13130)", 1013130},
    {"Quest: Junk in My Trunk Reward (#13131)", 1013131},
    {"Quest: Vengeance Be Mine! Reward (#13132)", 1013132},
    {"Quest: Not-So-Honorable Combat Reward (#13137)", 1013137},
    {"Quest: Banshee's Revenge Reward (#13142)", 1013142},
    {"Quest: Killing Two Scourge With One Skeleton Reward (#13144)", 1013144},
    {"Quest: The Vile Hold Reward (#13145)", 1013145},
    {"Quest: Necklace Repair Reward (#13148)", 1013148},
    {"Quest: A Royal Escort Reward (#13151)", 1013151},
    {"Quest: Warding the Warriors Reward (#13153)", 1013153},
    {"Quest: Bones and Arrows Reward (#13154)", 1013154},
    {"Quest: A Rare Herb Reward (#13156)", 1013156},
    {"Quest: The Crusaders' Pinnacle Reward (#13157)", 1013157},
    {"Quest: Containment Reward (#13159)", 1013159},
    {"Quest: The Rider of the Unholy Reward (#13161)", 1013161},
    {"Quest: The Rider of Frost Reward (#13162)", 1013162},
    {"Quest: The Rider of Blood Reward (#13163)", 1013163},
    {"Quest: The Fate of Bloodbane Reward (#13164)", 1013164},
    {"Quest: Death to the Traitor King Reward (#13167)", 1013167},
    {"Quest: Seeds of Chaos Reward (#13172)", 1013172},
    {"Quest: No Mercy for the Merciless Reward (#13177)", 1013177},
    {"Quest: Slay them all! Reward (#13178)", 1013178},
    {"Quest: No Mercy for the Merciless Reward (#13179)", 1013179},
    {"Quest: Slay them all! Reward (#13180)", 1013180},
    {"Quest: Victory in Wintergrasp Reward (#13181)", 1013181},
    {"Quest: Don't Forget the Eggs! Reward (#13182)", 1013182},
    {"Quest: Victory in Wintergrasp Reward (#13183)", 1013183},
    {"Quest: Stop the Siege Reward (#13185)", 1013185},
    {"Quest: Stop the Siege Reward (#13186)", 1013186},
    {"Quest: The Faceless Ones Reward (#13187)", 1013187},
    {"Quest: Fueling the Demolishers Reward (#13191)", 1013191},
    {"Quest: Warding the Walls Reward (#13192)", 1013192},
    {"Quest: Bones and Arrows Reward (#13193)", 1013193},
    {"Quest: Healing with Roses Reward (#13194)", 1013194},
    {"Quest: A Rare Herb Reward (#13195)", 1013195},
    {"Quest: Bones and Arrows Reward (#13196)", 1013196},
    {"Quest: Fueling the Demolishers Reward (#13197)", 1013197},
    {"Quest: Warding the Warriors Reward (#13198)", 1013198},
    {"Quest: Bones and Arrows Reward (#13199)", 1013199},
    {"Quest: Fueling the Demolishers Reward (#13200)", 1013200},
    {"Quest: Healing with Roses Reward (#13201)", 1013201},
    {"Quest: Jinxing the Walls Reward (#13202)", 1013202},
    {"Quest: A Winter Veil Gift Reward (#13203)", 1013203},
    {"Quest: Disarmament Reward (#13205)", 1013205},
    {"Quest: Disarmament Reward (#13206)", 1013206},
    {"Quest: Halls of Stone Reward (#13207)", 1013207},
    {"Quest: By Fire Be Purged Reward (#13211)", 1013211},
    {"Quest: Battle at Valhalas: The Return of Sigrid Iceborn Reward (#13216)", 1013216},
    {"Quest: Battle at Valhalas: Final Challenge Reward (#13219)", 1013219},
    {"Quest: Defend the Siege Reward (#13222)", 1013222},
    {"Quest: Defend the Siege Reward (#13223)", 1013223},
    {"Quest: The Flesh Giant Champion Reward (#13235)", 1013235},
    {"Quest: Poke and Prod Reward (#13237)", 1013237},
    {"Quest: Volatility Reward (#13239)", 1013239},
    {"Quest: Timear Foresees Centrifuge Constructs in your Future! Reward (#13240)", 1013240},
    {"Quest: Timear Foresees Ymirjar Berserkers in your Future! Reward (#13241)", 1013241},
    {"Quest: Timear Foresees Infinite Agents in your Future! Reward (#13243)", 1013243},
    {"Quest: Timear Foresees Titanium Vanguards in your Future! Reward (#13244)", 1013244},
    {"Quest: Proof of Demise: Ingvar the Plunderer Reward (#13245)", 1013245},
    {"Quest: Proof of Demise: Keristrasza Reward (#13246)", 1013246},
    {"Quest: Proof of Demise: Ley-Guardian Eregos Reward (#13247)", 1013247},
    {"Quest: Proof of Demise: King Ymiron Reward (#13248)", 1013248},
    {"Quest: Proof of Demise: The Prophet Tharon'ja Reward (#13249)", 1013249},
    {"Quest: Proof of Demise: Gal'darah Reward (#13250)", 1013250},
    {"Quest: Proof of Demise: Mal'Ganis Reward (#13251)", 1013251},
    {"Quest: Proof of Demise: Sjonnir The Ironshaper Reward (#13252)", 1013252},
    {"Quest: Proof of Demise: Loken Reward (#13253)", 1013253},
    {"Quest: Proof of Demise: Anub'arak Reward (#13254)", 1013254},
    {"Quest: Proof of Demise: Herald Volazj Reward (#13255)", 1013255},
    {"Quest: Proof of Demise: Cyanigosa Reward (#13256)", 1013256},
    {"Quest: Establishing Superiority Reward (#13259)", 1013259},
    {"Quest: That's Abominable! Reward (#13264)", 1013264},
    {"Quest: The Battle For The Undercity Reward (#13267)", 1013267},
    {"Quest: Time to Hide Reward (#13275)", 1013275},
    {"Quest: Basic Chemistry Reward (#13279)", 1013279},
    {"Quest: Forging the Keystone Reward (#13285)", 1013285},
    {"Quest: Poke and Prod Reward (#13287)", 1013287},
    {"Quest: That's Abominable! Reward (#13288)", 1013288},
    {"Quest: Borrowed Technology Reward (#13291)", 1013291},
    {"Quest: Basic Chemistry Reward (#13295)", 1013295},
    {"Quest: Do Your Worst Reward (#13305)", 1013305},
    {"Quest: Mind Tricks Reward (#13308)", 1013308},
    {"Quest: Demons Deck Reward (#13311)", 1013311},
    {"Quest: Chain of Command Reward (#13319)", 1013319},
    {"Quest: Retest Now Reward (#13321)", 1013321},
    {"Quest: Darkmoon Prisms Deck Reward (#13324)", 1013324},
    {"Quest: Darkmoon Chaos Deck Reward (#13325)", 1013325},
    {"Quest: Darkmoon Nobles Deck Reward (#13326)", 1013326},
    {"Quest: Darkmoon Undeath Deck Reward (#13327)", 1013327},
    {"Quest: Not a Bug Reward (#13342)", 1013342},
    {"Quest: Mystery of the Infinite, Redux Reward (#13343)", 1013343},
    {"Quest: No Rest For The Wicked Reward (#13346)", 1013346},
    {"Quest: Cradle of the Frostbrood Reward (#13349)", 1013349},
    {"Quest: Chain of Command Reward (#13354)", 1013354},
    {"Quest: Retest Now Reward (#13356)", 1013356},
    {"Quest: Not a Bug Reward (#13358)", 1013358},
    {"Quest: The Hunter and the Prince Reward (#13361)", 1013361},
    {"Quest: Tirion's Gambit Reward (#13364)", 1013364},
    {"Quest: No Rest For The Wicked Reward (#13367)", 1013367},
    {"Quest: The Key to the Focusing Iris Reward (#13372)", 1013372},
    {"Quest: The Heroic Key to the Focusing Iris Reward (#13375)", 1013375},
    {"Quest: The Battle For The Undercity Reward (#13377)", 1013377},
    {"Quest: Judgment at the Eye of Eternity Reward (#13384)", 1013384},
    {"Quest: Heroic Judgment at the Eye of Eternity Reward (#13385)", 1013385},
    {"Quest: Securing the Perimeter Reward (#13387)", 1013387},
    {"Quest: Time to Hide Reward (#13391)", 1013391},
    {"Quest: Do Your Worst Reward (#13394)", 1013394},
    {"Quest: Sindragosa's Fall Reward (#13397)", 1013397},
    {"Quest: The Hunter and the Prince Reward (#13400)", 1013400},
    {"Quest: Tirion's Gambit Reward (#13403)", 1013403},
    {"Quest: Hellfire Fortifications Reward (#13408)", 1013408},
    {"Quest: Hellfire Fortifications Reward (#13409)", 1013409},
    {"Quest: Hellfire Fortifications Reward (#13410)", 1013410},
    {"Quest: Hellfire Fortifications Reward (#13411)", 1013411},
    {"Quest: Aces High! Reward (#13413)", 1013413},
    {"Quest: The Brothers Bronzebeard Reward (#13417)", 1013417},
    {"Quest: Maintaining Discipline Reward (#13422)", 1013422},
    {"Quest: Defending Your Title Reward (#13423)", 1013423},
    {"Quest: Back to the Pit Reward (#13424)", 1013424},
    {"Quest: The Aberrations Must Die Reward (#13425)", 1013425},
    {"Quest: A Distraction for Akama Reward (#13429)", 1013429},
    {"Quest: Trial of the Naaru: Magtheridon Reward (#13430)", 1013430},
    {"Quest: Candy Bucket Reward (#13433)", 1013433},
    {"Quest: Candy Bucket Reward (#13434)", 1013434},
    {"Quest: Candy Bucket Reward (#13435)", 1013435},
    {"Quest: Candy Bucket Reward (#13436)", 1013436},
    {"Quest: Candy Bucket Reward (#13437)", 1013437},
    {"Quest: Candy Bucket Reward (#13438)", 1013438},
    {"Quest: Candy Bucket Reward (#13439)", 1013439},
    {"Quest: Desecrate this Fire! Reward (#13440)", 1013440},
    {"Quest: Desecrate this Fire! Reward (#13441)", 1013441},
    {"Quest: Desecrate this Fire! Reward (#13442)", 1013442},
    {"Quest: Desecrate this Fire! Reward (#13443)", 1013443},
    {"Quest: Desecrate this Fire! Reward (#13444)", 1013444},
    {"Quest: Desecrate this Fire! Reward (#13445)", 1013445},
    {"Quest: Desecrate this Fire! Reward (#13446)", 1013446},
    {"Quest: Desecrate this Fire! Reward (#13447)", 1013447},
    {"Quest: Candy Bucket Reward (#13448)", 1013448},
    {"Quest: Desecrate this Fire! Reward (#13449)", 1013449},
    {"Quest: Desecrate this Fire! Reward (#13450)", 1013450},
    {"Quest: Desecrate this Fire! Reward (#13451)", 1013451},
    {"Quest: Candy Bucket Reward (#13452)", 1013452},
    {"Quest: Desecrate this Fire! Reward (#13453)", 1013453},
    {"Quest: Desecrate this Fire! Reward (#13454)", 1013454},
    {"Quest: Desecrate this Fire! Reward (#13455)", 1013455},
    {"Quest: Candy Bucket Reward (#13456)", 1013456},
    {"Quest: Desecrate this Fire! Reward (#13457)", 1013457},
    {"Quest: Desecrate this Fire! Reward (#13458)", 1013458},
    {"Quest: Candy Bucket Reward (#13459)", 1013459},
    {"Quest: Candy Bucket Reward (#13460)", 1013460},
    {"Quest: Candy Bucket Reward (#13461)", 1013461},
    {"Quest: Candy Bucket Reward (#13462)", 1013462},
    {"Quest: Candy Bucket Reward (#13463)", 1013463},
    {"Quest: Candy Bucket Reward (#13464)", 1013464},
    {"Quest: Candy Bucket Reward (#13465)", 1013465},
    {"Quest: Candy Bucket Reward (#13466)", 1013466},
    {"Quest: Candy Bucket Reward (#13467)", 1013467},
    {"Quest: Candy Bucket Reward (#13468)", 1013468},
    {"Quest: Candy Bucket Reward (#13469)", 1013469},
    {"Quest: Candy Bucket Reward (#13470)", 1013470},
    {"Quest: Candy Bucket Reward (#13471)", 1013471},
    {"Quest: Candy Bucket Reward (#13472)", 1013472},
    {"Quest: Candy Bucket Reward (#13473)", 1013473},
    {"Quest: Candy Bucket Reward (#13474)", 1013474},
    {"Quest: The Great Egg Hunt Reward (#13479)", 1013479},
    {"Quest: The Great Egg Hunt Reward (#13480)", 1013480},
    {"Quest: Honor the Flame Reward (#13485)", 1013485},
    {"Quest: Honor the Flame Reward (#13486)", 1013486},
    {"Quest: Honor the Flame Reward (#13487)", 1013487},
    {"Quest: Honor the Flame Reward (#13488)", 1013488},
    {"Quest: Honor the Flame Reward (#13489)", 1013489},
    {"Quest: Honor the Flame Reward (#13490)", 1013490},
    {"Quest: Honor the Flame Reward (#13491)", 1013491},
    {"Quest: Honor the Flame Reward (#13492)", 1013492},
    {"Quest: Honor the Flame Reward (#13493)", 1013493},
    {"Quest: Honor the Flame Reward (#13494)", 1013494},
    {"Quest: Honor the Flame Reward (#13495)", 1013495},
    {"Quest: Honor the Flame Reward (#13496)", 1013496},
    {"Quest: Honor the Flame Reward (#13497)", 1013497},
    {"Quest: Honor the Flame Reward (#13498)", 1013498},
    {"Quest: Honor the Flame Reward (#13499)", 1013499},
    {"Quest: Honor the Flame Reward (#13500)", 1013500},
    {"Quest: Candy Bucket Reward (#13501)", 1013501},
    {"Quest: A Tisket, a Tasket, a Noblegarden Basket Reward (#13502)", 1013502},
    {"Quest: A Tisket, a Tasket, a Noblegarden Basket Reward (#13503)", 1013503},
    {"Quest: Escape from Silverbrook Reward (#13524)", 1013524},
    {"Quest: Southern Sabotage Reward (#13538)", 1013538},
    {"Quest: Toppling the Towers Reward (#13539)", 1013539},
    {"Quest: Candy Bucket Reward (#13548)", 1013548},
    {"Quest: A Valiant's Field Training Reward (#13592)", 1013592},
    {"Quest: A Worthy Weapon Reward (#13600)", 1013600},
    {"Quest: A Blade Fit For A Champion Reward (#13603)", 1013603},
    {"Quest: Algalon Reward (#13614)", 1013614},
    {"Quest: The Edge Of Winter Reward (#13616)", 1013616},
    {"Quest: Learning The Reins Reward (#13625)", 1013625},
    {"Quest: Val'anyr, Hammer of Ancient Kings Reward (#13629)", 1013629},
    {"Quest: All Is Well That Ends Well Reward (#13631)", 1013631},
    {"Quest: The Grand Melee Reward (#13665)", 1013665},
    {"Quest: A Blade Fit For A Champion Reward (#13666)", 1013666},
    {"Quest: A Worthy Weapon Reward (#13669)", 1013669},
    {"Quest: The Edge Of Winter Reward (#13670)", 1013670},
    {"Quest: Training In The Field Reward (#13671)", 1013671},
    {"Quest: A Blade Fit For A Champion Reward (#13673)", 1013673},
    {"Quest: A Worthy Weapon Reward (#13674)", 1013674},
    {"Quest: The Edge Of Winter Reward (#13675)", 1013675},
    {"Quest: Training In The Field Reward (#13676)", 1013676},
    {"Quest: Learning The Reins Reward (#13677)", 1013677},
    {"Quest: Threat From Above Reward (#13682)", 1013682},
    {"Quest: The Sword and the Sea Reward (#13692)", 1013692},
    {"Quest: A Champion Rises Reward (#13702)", 1013702},
    {"Quest: A Champion Rises Reward (#13732)", 1013732},
    {"Quest: A Champion Rises Reward (#13733)", 1013733},
    {"Quest: A Champion Rises Reward (#13734)", 1013734},
    {"Quest: A Champion Rises Reward (#13735)", 1013735},
    {"Quest: A Champion Rises Reward (#13736)", 1013736},
    {"Quest: A Champion Rises Reward (#13737)", 1013737},
    {"Quest: A Champion Rises Reward (#13738)", 1013738},
    {"Quest: A Champion Rises Reward (#13739)", 1013739},
    {"Quest: A Champion Rises Reward (#13740)", 1013740},
    {"Quest: A Blade Fit For A Champion Reward (#13741)", 1013741},
    {"Quest: A Worthy Weapon Reward (#13742)", 1013742},
    {"Quest: The Edge Of Winter Reward (#13743)", 1013743},
    {"Quest: A Valiant's Field Training Reward (#13744)", 1013744},
    {"Quest: The Grand Melee Reward (#13745)", 1013745},
    {"Quest: A Blade Fit For A Champion Reward (#13746)", 1013746},
    {"Quest: A Worthy Weapon Reward (#13747)", 1013747},
    {"Quest: The Edge Of Winter Reward (#13748)", 1013748},
    {"Quest: A Valiant's Field Training Reward (#13749)", 1013749},
    {"Quest: The Grand Melee Reward (#13750)", 1013750},
    {"Quest: A Blade Fit For A Champion Reward (#13752)", 1013752},
    {"Quest: A Worthy Weapon Reward (#13753)", 1013753},
    {"Quest: The Edge Of Winter Reward (#13754)", 1013754},
    {"Quest: A Valiant's Field Training Reward (#13755)", 1013755},
    {"Quest: The Grand Melee Reward (#13756)", 1013756},
    {"Quest: A Blade Fit For A Champion Reward (#13757)", 1013757},
    {"Quest: A Worthy Weapon Reward (#13758)", 1013758},
    {"Quest: The Edge Of Winter Reward (#13759)", 1013759},
    {"Quest: A Valiant's Field Training Reward (#13760)", 1013760},
    {"Quest: The Grand Melee Reward (#13761)", 1013761},
    {"Quest: A Blade Fit For A Champion Reward (#13762)", 1013762},
    {"Quest: A Worthy Weapon Reward (#13763)", 1013763},
    {"Quest: The Edge Of Winter Reward (#13764)", 1013764},
    {"Quest: A Valiant's Field Training Reward (#13765)", 1013765},
    {"Quest: The Grand Melee Reward (#13767)", 1013767},
    {"Quest: A Blade Fit For A Champion Reward (#13768)", 1013768},
    {"Quest: A Worthy Weapon Reward (#13769)", 1013769},
    {"Quest: The Edge Of Winter Reward (#13770)", 1013770},
    {"Quest: A Valiant's Field Training Reward (#13771)", 1013771},
    {"Quest: The Grand Melee Reward (#13772)", 1013772},
    {"Quest: A Blade Fit For A Champion Reward (#13773)", 1013773},
    {"Quest: A Worthy Weapon Reward (#13774)", 1013774},
    {"Quest: The Edge Of Winter Reward (#13775)", 1013775},
    {"Quest: A Valiant's Field Training Reward (#13776)", 1013776},
    {"Quest: The Grand Melee Reward (#13777)", 1013777},
    {"Quest: A Blade Fit For A Champion Reward (#13778)", 1013778},
    {"Quest: A Worthy Weapon Reward (#13779)", 1013779},
    {"Quest: The Edge Of Winter Reward (#13780)", 1013780},
    {"Quest: A Valiant's Field Training Reward (#13781)", 1013781},
    {"Quest: The Grand Melee Reward (#13782)", 1013782},
    {"Quest: A Blade Fit For A Champion Reward (#13783)", 1013783},
    {"Quest: A Worthy Weapon Reward (#13784)", 1013784},
    {"Quest: The Edge Of Winter Reward (#13785)", 1013785},
    {"Quest: A Valiant's Field Training Reward (#13786)", 1013786},
    {"Quest: The Grand Melee Reward (#13787)", 1013787},
    {"Quest: Threat From Above Reward (#13788)", 1013788},
    {"Quest: Taking Battle To The Enemy Reward (#13789)", 1013789},
    {"Quest: Among the Champions Reward (#13790)", 1013790},
    {"Quest: Taking Battle To The Enemy Reward (#13791)", 1013791},
    {"Quest: Among the Champions Reward (#13793)", 1013793},
    {"Quest: Threat From Above Reward (#13809)", 1013809},
    {"Quest: Taking Battle To The Enemy Reward (#13810)", 1013810},
    {"Quest: Among the Champions Reward (#13811)", 1013811},
    {"Quest: Threat From Above Reward (#13812)", 1013812},
    {"Quest: Taking Battle To The Enemy Reward (#13813)", 1013813},
    {"Quest: Among the Champions Reward (#13814)", 1013814},
    {"Quest: Heroic: Algalon Reward (#13818)", 1013818},
    {"Quest: Heroic: All Is Well That Ends Well Reward (#13819)", 1013819},
    {"Quest: Nat Pagle, Angler Extreme Reward (#13826)", 1013826},
    {"Quest: Treasure! Reward (#13827)", 1013827},
    {"Quest: The Ghostfish Reward (#13830)", 1013830},
    {"Quest: Jewel Of The Sewers Reward (#13832)", 1013832},
    {"Quest: Blood Is Thicker Reward (#13833)", 1013833},
    {"Quest: Dangerously Delicious Reward (#13834)", 1013834},
    {"Quest: Disarmed! Reward (#13836)", 1013836},
    {"Quest: At The Enemy's Gates Reward (#13847)", 1013847},
    {"Quest: At The Enemy's Gates Reward (#13851)", 1013851},
    {"Quest: At The Enemy's Gates Reward (#13852)", 1013852},
    {"Quest: At The Enemy's Gates Reward (#13854)", 1013854},
    {"Quest: At The Enemy's Gates Reward (#13855)", 1013855},
    {"Quest: At The Enemy's Gates Reward (#13856)", 1013856},
    {"Quest: At The Enemy's Gates Reward (#13857)", 1013857},
    {"Quest: At The Enemy's Gates Reward (#13858)", 1013858},
    {"Quest: At The Enemy's Gates Reward (#13859)", 1013859},
    {"Quest: At The Enemy's Gates Reward (#13860)", 1013860},
    {"Quest: Battle Before The Citadel Reward (#13861)", 1013861},
    {"Quest: Battle Before The Citadel Reward (#13862)", 1013862},
    {"Quest: Battle Before The Citadel Reward (#13863)", 1013863},
    {"Quest: Battle Before The Citadel Reward (#13864)", 1013864},
    {"Quest: Hungry, Hungry Hatchling Reward (#13889)", 1013889},
    {"Quest: Gorishi Grub Reward (#13903)", 1013903},
    {"Quest: Poached, Scrambled, Or Raw? Reward (#13904)", 1013904},
    {"Quest: Searing Roc Feathers Reward (#13905)", 1013905},
    {"Quest: They Grow Up So Fast Reward (#13906)", 1013906},
    {"Quest: Gearing Up To Ride Reward (#13908)", 1013908},
    {"Quest: Searing Roc Feathers Reward (#13914)", 1013914},
    {"Quest: Hungry, Hungry Hatchling Reward (#13915)", 1013915},
    {"Quest: Poached, Scrambled, Or Raw? Reward (#13916)", 1013916},
    {"Quest: Gorishi Grub Reward (#13917)", 1013917},
    {"Quest: Another Year, Another Souvenir. Reward (#13931)", 1013931},
    {"Quest: Another Year, Another Souvenir. Reward (#13932)", 1013932},
    {"Quest: The Grateful Dead Reward (#13952)", 1013952},
    {"Quest: A Winter Veil Gift Reward (#13966)", 1013966},
    {"Quest: The Black Knight's Fate Reward (#14017)", 1014017},
    {"Quest: Slow-roasted Turkey Reward (#14035)", 1014035},
    {"Quest: Slow-roasted Turkey Reward (#14047)", 1014047},
    {"Quest: Can't Get Enough Turkey Reward (#14048)", 1014048},
    {"Quest: Don't Forget The Stuffing! Reward (#14051)", 1014051},
    {"Quest: We're Out of Cranberry Chutney Again? Reward (#14053)", 1014053},
    {"Quest: Easy As Pie Reward (#14054)", 1014054},
    {"Quest: She Says Potato Reward (#14055)", 1014055},
    {"Quest: She Says Potato Reward (#14058)", 1014058},
    {"Quest: We're Out of Cranberry Chutney Again? Reward (#14059)", 1014059},
    {"Quest: Easy As Pie Reward (#14060)", 1014060},
    {"Quest: Can't Get Enough Turkey Reward (#14061)", 1014061},
    {"Quest: Don't Forget The Stuffing! Reward (#14062)", 1014062},
    {"Quest: A Leg Up Reward (#14074)", 1014074},
    {"Quest: Breakfast Of Champions Reward (#14076)", 1014076},
    {"Quest: The Light's Mercy Reward (#14077)", 1014077},
    {"Quest: Stop The Aggressors Reward (#14080)", 1014080},
    {"Quest: Gormok Wants His Snobolds Reward (#14090)", 1014090},
    {"Quest: Breakfast Of Champions Reward (#14092)", 1014092},
    {"Quest: You've Really Done It This Time, Kul Reward (#14096)", 1014096},
    {"Quest: Drottinn Hrothgar Reward (#14101)", 1014101},
    {"Quest: Mistcaller Yngvar Reward (#14102)", 1014102},
    {"Quest: Titanium Powder Reward (#14103)", 1014103},
    {"Quest: Ornolf The Scarred Reward (#14104)", 1014104},
    {"Quest: Deathspeaker Kharos Reward (#14105)", 1014105},
    {"Quest: The Fate Of The Fallen Reward (#14107)", 1014107},
    {"Quest: Get Kraken! Reward (#14108)", 1014108},
    {"Quest: What Do You Feed a Yeti, Anyway? Reward (#14112)", 1014112},
    {"Quest: Rescue at Sea Reward (#14136)", 1014136},
    {"Quest: Stop The Aggressors Reward (#14140)", 1014140},
    {"Quest: Gormok Wants His Snobolds Reward (#14141)", 1014141},
    {"Quest: You've Really Done It This Time, Kul Reward (#14142)", 1014142},
    {"Quest: A Leg Up Reward (#14143)", 1014143},
    {"Quest: The Light's Mercy Reward (#14144)", 1014144},
    {"Quest: What Do You Feed a Yeti, Anyway? Reward (#14145)", 1014145},
    {"Quest: Rescue at Sea Reward (#14152)", 1014152},
    {"Quest: Writ of Merit Reward (#14160)", 1014160},
    {"Quest: The Grateful Dead Reward (#14166)", 1014166},
    {"Quest: The Grateful Dead Reward (#14167)", 1014167},
    {"Quest: The Grateful Dead Reward (#14168)", 1014168},
    {"Quest: The Grateful Dead Reward (#14169)", 1014169},
    {"Quest: The Grateful Dead Reward (#14170)", 1014170},
    {"Quest: The Grateful Dead Reward (#14171)", 1014171},
    {"Quest: The Grateful Dead Reward (#14172)", 1014172},
    {"Quest: The Grateful Dead Reward (#14173)", 1014173},
    {"Quest: The Grateful Dead Reward (#14174)", 1014174},
    {"Quest: The Grateful Dead Reward (#14175)", 1014175},
    {"Quest: The Grateful Dead Reward (#14176)", 1014176},
    {"Quest: The Grateful Dead Reward (#14177)", 1014177},
    {"Quest: Proof of Demise: The Black Knight Reward (#14199)", 1014199},
    {"Quest: Waterlogged Recipe Reward (#14203)", 1014203},
    {"Quest: Battle of Hillsbrad Reward (#14351)", 1014351},
    {"Quest: An Unholy Alliance Reward (#14353)", 1014353},
    {"Quest: Into The Scarlet Monastery Reward (#14355)", 1014355},
    {"Quest: The Power to Destroy... Reward (#14356)", 1014356},
    {"Quest: The Deathstalkers Reward (#14418)", 1014418},
    {"Quest: Dwarven Digging Reward (#14436)", 1014436},
    {"Quest: Sharing the Land Reward (#14438)", 1014438},
    {"Quest: Rites of the Earthmother Reward (#14440)", 1014440},
    {"Quest: A Most Puzzling Circumstance Reward (#24428)", 1024428},
    {"Quest: A Most Puzzling Circumstance Reward (#24429)", 1024429},
    {"Quest: Waterlogged Recipe Reward (#24431)", 1024431},
    {"Quest: Echoes of Tortured Souls Reward (#24499)", 1024499},
    {"Quest: Wrath of the Lich King Reward (#24500)", 1024500},
    {"Quest: Echoes of Tortured Souls Reward (#24511)", 1024511},
    {"Quest: Shadowmourne... Reward (#24549)", 1024549},
    {"Quest: Sartharion Must Die! Reward (#24579)", 1024579},
    {"Quest: Anub'Rekhan Must Die! Reward (#24580)", 1024580},
    {"Quest: Noth the Plaguebringer Must Die! Reward (#24581)", 1024581},
    {"Quest: Instructor Razuvious Must Die! Reward (#24582)", 1024582},
    {"Quest: Patchwerk Must Die! Reward (#24583)", 1024583},
    {"Quest: Malygos Must Die! Reward (#24584)", 1024584},
    {"Quest: Flame Leviathan Must Die! Reward (#24585)", 1024585},
    {"Quest: Razorscale Must Die! Reward (#24586)", 1024586},
    {"Quest: Ignis the Furnace Master Must Die! Reward (#24587)", 1024587},
    {"Quest: XT-002 Deconstructor Must Die! Reward (#24588)", 1024588},
    {"Quest: Lord Jaraxxus Must Die! Reward (#24589)", 1024589},
    {"Quest: Lord Marrowgar Must Die! Reward (#24590)", 1024590},
    {"Quest: A Gift for the King of Stormwind Reward (#24597)", 1024597},
    {"Quest: A Gift for the Lord of Ironforge Reward (#24609)", 1024609},
    {"Quest: A Gift for the High Priestess of Elune Reward (#24610)", 1024610},
    {"Quest: A Gift for the Prophet Reward (#24611)", 1024611},
    {"Quest: A Gift for the Warchief Reward (#24612)", 1024612},
    {"Quest: A Gift for the Banshee Queen Reward (#24613)", 1024613},
    {"Quest: A Gift for the High Chieftain Reward (#24614)", 1024614},
    {"Quest: A Gift for the Regent Lord of Quel'Thalas Reward (#24615)", 1024615},
    {"Quest: A Perfect Puff of Perfume Reward (#24629)", 1024629},
    {"Quest: A Cloudlet of Classy Cologne Reward (#24635)", 1024635},
    {"Quest: Bonbon Blitz Reward (#24636)", 1024636},
    {"Quest: Crushing the Crown Reward (#24638)", 1024638},
    {"Quest: Crushing the Crown Reward (#24645)", 1024645},
    {"Quest: Crushing the Crown Reward (#24647)", 1024647},
    {"Quest: Crushing the Crown Reward (#24648)", 1024648},
    {"Quest: Crushing the Crown Reward (#24649)", 1024649},
    {"Quest: Crushing the Crown Reward (#24650)", 1024650},
    {"Quest: Crushing the Crown Reward (#24651)", 1024651},
    {"Quest: Crushing the Crown Reward (#24652)", 1024652},
    {"Quest: Crushing the Crown Reward (#24658)", 1024658},
    {"Quest: Crushing the Crown Reward (#24659)", 1024659},
    {"Quest: Crushing the Crown Reward (#24660)", 1024660},
    {"Quest: Crushing the Crown Reward (#24662)", 1024662},
    {"Quest: Crushing the Crown Reward (#24663)", 1024663},
    {"Quest: Crushing the Crown Reward (#24664)", 1024664},
    {"Quest: Crushing the Crown Reward (#24665)", 1024665},
    {"Quest: Crushing the Crown Reward (#24666)", 1024666},
    {"Quest: Deliverance from the Pit Reward (#24710)", 1024710},
    {"Quest: Deliverance from the Pit Reward (#24712)", 1024712},
    {"Quest: Shadow's Edge Reward (#24743)", 1024743},
    {"Quest: Daily Heroic Random (1st) Reward (#24788)", 1024788},
    {"Quest: Daily Heroic Random (Nth) Reward (#24789)", 1024789},
    {"Quest: Daily Normal Random (1st) Reward (#24790)", 1024790},
    {"Quest: A Victory For The Silver Covenant Reward (#24795)", 1024795},
    {"Quest: A Victory For The Silver Covenant Reward (#24796)", 1024796},
    {"Quest: A Victory For The Sunreavers Reward (#24798)", 1024798},
    {"Quest: A Victory For The Sunreavers Reward (#24799)", 1024799},
    {"Quest: A Victory For The Sunreavers Reward (#24800)", 1024800},
    {"Quest: A Victory For The Sunreavers Reward (#24801)", 1024801},
    {"Quest: Wrath of the Lich King Reward (#24802)", 1024802},
    {"Quest: Kalu'ak Fishing Derby Reward (#24803)", 1024803},
    {"Quest: Better Luck Next Time Reward (#24806)", 1024806},
    {"Quest: Choose Your Path Reward (#24815)", 1024815},
    {"Quest: A Change of Heart Reward (#24819)", 1024819},
    {"Quest: A Change of Heart Reward (#24820)", 1024820},
    {"Quest: A Change of Heart Reward (#24821)", 1024821},
    {"Quest: A Change of Heart Reward (#24822)", 1024822},
    {"Quest: Path of Destruction Reward (#24823)", 1024823},
    {"Quest: Path of Wisdom Reward (#24825)", 1024825},
    {"Quest: Path of Vengeance Reward (#24826)", 1024826},
    {"Quest: Path of Courage Reward (#24827)", 1024827},
    {"Quest: Path of Destruction Reward (#24828)", 1024828},
    {"Quest: Path of Destruction Reward (#24829)", 1024829},
    {"Quest: Path of Wisdom Reward (#24830)", 1024830},
    {"Quest: Path of Wisdom Reward (#24831)", 1024831},
    {"Quest: Path of Vengeance Reward (#24832)", 1024832},
    {"Quest: Path of Vengeance Reward (#24833)", 1024833},
    {"Quest: Path of Courage Reward (#24834)", 1024834},
    {"Quest: Path of Courage Reward (#24835)", 1024835},
    {"Quest: A Change of Heart Reward (#24836)", 1024836},
    {"Quest: A Change of Heart Reward (#24837)", 1024837},
    {"Quest: A Change of Heart Reward (#24838)", 1024838},
    {"Quest: A Change of Heart Reward (#24839)", 1024839},
    {"Quest: A Change of Heart Reward (#24840)", 1024840},
    {"Quest: A Change of Heart Reward (#24841)", 1024841},
    {"Quest: A Change of Heart Reward (#24842)", 1024842},
    {"Quest: A Change of Heart Reward (#24843)", 1024843},
    {"Quest: A Change of Heart Reward (#24844)", 1024844},
    {"Quest: A Change of Heart Reward (#24845)", 1024845},
    {"Quest: A Change of Heart Reward (#24846)", 1024846},
    {"Quest: A Change of Heart Reward (#24847)", 1024847},
    {"Quest: Attack on Camp Narache Reward (#24857)", 1024857},
    {"Quest: Deprogramming Reward (#24869)", 1024869},
    {"Quest: Securing the Ramparts Reward (#24870)", 1024870},
    {"Quest: Securing the Ramparts Reward (#24871)", 1024871},
    {"Quest: Respite for a Tormented Soul Reward (#24872)", 1024872},
    {"Quest: Residue Rendezvous Reward (#24873)", 1024873},
    {"Quest: Blood Quickening Reward (#24874)", 1024874},
    {"Quest: Deprogramming Reward (#24875)", 1024875},
    {"Quest: Securing the Ramparts Reward (#24876)", 1024876},
    {"Quest: Securing the Ramparts Reward (#24877)", 1024877},
    {"Quest: Residue Rendezvous Reward (#24878)", 1024878},
    {"Quest: Blood Quickening Reward (#24879)", 1024879},
    {"Quest: Respite for a Tormented Soul Reward (#24880)", 1024880},
    {"Quest: Classic Random 5-15 (1st) Reward (#24881)", 1024881},
    {"Quest: Classic Random 15-25 (1st) Reward (#24882)", 1024882},
    {"Quest: Classic Random 24-34 (1st) Reward (#24883)", 1024883},
    {"Quest: Classic Random 35-45 (1st) Reward (#24884)", 1024884},
    {"Quest: Classic Random 46-55 (1st) Reward (#24885)", 1024885},
    {"Quest: Classic Random 56-60 (1st) Reward (#24886)", 1024886},
    {"Quest: Classic Random 60-64 (1st) Reward (#24887)", 1024887},
    {"Quest: Classic Random 65-70 (1st) Reward (#24888)", 1024888},
    {"Quest: Classic Random 5-15 (Nth) Reward (#24889)", 1024889},
    {"Quest: Classic Random 15-25 (Nth) Reward (#24890)", 1024890},
    {"Quest: Classic Random 24-34 (Nth) Reward (#24891)", 1024891},
    {"Quest: Classic Random 35-45 (Nth) Reward (#24892)", 1024892},
    {"Quest: Classic Random 46-55 (Nth) Reward (#24893)", 1024893},
    {"Quest: Classic Random 56-60 (Nth) Reward (#24894)", 1024894},
    {"Quest: Classic Random 60-64 (Nth) Reward (#24895)", 1024895},
    {"Quest: Classic Random 65-70 (Nth) Reward (#24896)", 1024896},
    {"Quest: Personal Property Reward (#24914)", 1024914},
    {"Quest: Mograine's Reunion Reward (#24915)", 1024915},
    {"Quest: Jaina's Locket Reward (#24916)", 1024916},
    {"Quest: Muradin's Lament Reward (#24917)", 1024917},
    {"Quest: Sylvanas' Vengeance Reward (#24918)", 1024918},
    {"Quest: The Lightbringer's Redemption Reward (#24919)", 1024919},
    {"Quest: Path of Might Reward (#25239)", 1025239},
    {"Quest: Path of Might Reward (#25240)", 1025240},
    {"Quest: Path of Might Reward (#25242)", 1025242},
    {"Quest: A Change of Heart Reward (#25246)", 1025246},
    {"Quest: A Change of Heart Reward (#25247)", 1025247},
    {"Quest: A Change of Heart Reward (#25248)", 1025248},
    {"Quest: A Change of Heart Reward (#25249)", 1025249},
    {"Quest: Words for Delivery Reward (#25286)", 1025286},
    {"Quest: Operation: Gnomeregan Reward (#25393)", 1025393},
    {"Quest: Zalazane's Fall Reward (#25445)", 1025445},
    {"Quest: Dance Of De Spirits Reward (#25480)", 1025480},
    {"Quest: World Event Dungeon - Headless Horseman Reward (#25482)", 1025482},
    {"Quest: World Event Dungeon - Coren Direbrew Reward (#25483)", 1025483},
    {"Quest: World Event Dungeon - Ahune Reward (#25484)", 1025484},
    {"Quest: World Event Dungeon - Hummel Reward (#25485)", 1025485},
    {"Quest: Words for Delivery Reward (#25500)", 1025500},
    {"Quest: The Twilight Destroyer Reward (#26034)", 1026034},
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
    {"Quest Reward: Kanrethad's Quest (#1)", 1750001},
    {"Quest Reward: Bounty on Garrick Padfoot (#6)", 1750006},
    {"Quest Reward: A Rogue's Deal (#8)", 1750008},
    {"Quest Reward: The Killing Fields (#9)", 1750009},
    {"Quest Reward: Riverpaw Gnoll Bounty (#11)", 1750011},
    {"Quest Reward: The People's Militia (#14)", 1750014},
    {"Quest Reward: Give Gerard a Drink (#16)", 1750016},
    {"Quest Reward: Uldaman Reagent Run (#17)", 1750017},
    {"Quest Reward: Brotherhood of Thieves (#18)", 1750018},
    {"Quest Reward: Tharil'zun (#19)", 1750019},
    {"Quest Reward: Skirmish at Echo Ridge (#21)", 1750021},
    {"Quest Reward: Goretusk Liver Pie (#22)", 1750022},
    {"Quest Reward: Aquatic Form (#31)", 1750031},
    {"Quest Reward: Wolves Across the Border (#33)", 1750033},
    {"Quest Reward: An Unwelcome Guest (#34)", 1750034},
    {"Quest Reward: Westfall Stew (#38)", 1750038},
    {"Quest Reward: Bounty on Murlocs (#46)", 1750046},
    {"Quest Reward: Gold Dust Exchange (#47)", 1750047},
    {"Quest Reward: Protect the Frontier (#52)", 1750052},
    {"Quest Reward: Sweet Amber (#53)", 1750053},
    {"Quest Reward: Report to Goldshire (#54)", 1750054},
    {"Quest Reward: Morbent Fel (#55)", 1750055},
    {"Quest Reward: The Night Watch (#58)", 1750058},
    {"Quest Reward: Cloth and Leather Armor (#59)", 1750059},
    {"Quest Reward: Kobold Candles (#60)", 1750060},
    {"Quest Reward: Shipment to Stormwind (#61)", 1750061},
    {"Quest Reward: The Forgotten Heirloom (#64)", 1750064},
    {"Quest Reward: The Legend of Stalvan (#79)", 1750079},
    {"Quest Reward: Red Linen Goods (#83)", 1750083},
    {"Quest Reward: Goldtooth (#87)", 1750087},
    {"Quest Reward: Princess Must Die! (#88)", 1750088},
    {"Quest Reward: The Everstill Bridge (#89)", 1750089},
    {"Quest Reward: Seasoned Wolf Kabobs (#90)", 1750090},
    {"Quest Reward: Redridge Goulash (#92)", 1750092},
    {"Quest Reward: Dusky Crab Cakes (#93)", 1750093},
    {"Quest Reward: Call of Water (#96)", 1750096},
    {"Quest Reward: The Legend of Stalvan (#98)", 1750098},
    {"Quest Reward: Arugal's Folly (#99)", 1750099},
    {"Quest Reward: The Totem of Infliction (#101)", 1750101},
    {"Quest Reward: Patrolling Westfall (#102)", 1750102},
    {"Quest Reward: Keeper of the Flame (#103)", 1750103},
    {"Quest Reward: The Coastal Menace (#104)", 1750104},
    {"Quest Reward: Alas, Andorhal (#105)", 1750105},
    {"Quest Reward: <TXT> Mystery Reward (#108)", 1750108},
    {"Quest Reward: The Escape (#114)", 1750114},
    {"Quest Reward: Dry Times (#116)", 1750116},
    {"Quest Reward: Thunderbrew Lager (#117)", 1750117},
    {"Quest Reward: Underbelly Scales (#122)", 1750122},
    {"Quest Reward: The Lost Tools (#125)", 1750125},
    {"Quest Reward: Howling in the Hills (#126)", 1750126},
    {"Quest Reward: Selling Fish (#127)", 1750127},
    {"Quest Reward: Delivering Daffodils (#131)", 1750131},
    {"Quest Reward: Captain Sanders' Hidden Treasure (#140)", 1750140},
    {"Quest Reward: Manhunt (#147)", 1750147},
    {"Quest Reward: Murloc Poachers (#150)", 1750150},
    {"Quest Reward: Poor Old Blanchy (#151)", 1750151},
    {"Quest Reward: Red Leather Bandanas (#153)", 1750153},
    {"Quest Reward: The Defias Brotherhood (#166)", 1750166},
    {"Quest Reward: Oh Brother. . . (#167)", 1750167},
    {"Quest Reward: Collecting Memories (#168)", 1750168},
    {"Quest Reward: A New Threat (#170)", 1750170},
    {"Quest Reward: A Warden of the Alliance (#171)", 1750171},
    {"Quest Reward: Wanted:  \"Hogger\" (#176)", 1750176},
    {"Quest Reward: Theocritus' Retrieval (#178)", 1750178},
    {"Quest Reward: Dwarven Outfitters (#179)", 1750179},
    {"Quest Reward: Look To The Stars (#181)", 1750181},
    {"Quest Reward: The Troll Cave (#182)", 1750182},
    {"Quest Reward: The Boar Hunter (#183)", 1750183},
    {"Quest Reward: Furlbrow's Deed (#184)", 1750184},
    {"Quest Reward: Tiger Mastery (#188)", 1750188},
    {"Quest Reward: Bloodscalp Ears (#189)", 1750189},
    {"Quest Reward: Panther Mastery (#193)", 1750193},
    {"Quest Reward: Raptor Mastery (#197)", 1750197},
    {"Quest Reward: Colonel Kurzen (#202)", 1750202},
    {"Quest Reward: Bad Medicine (#204)", 1750204},
    {"Quest Reward: Mai'Zoth (#206)", 1750206},
    {"Quest Reward: Big Game Hunter (#208)", 1750208},
    {"Quest Reward: Alas, Andorhal (#211)", 1750211},
    {"Quest Reward: Hostile Takeover (#213)", 1750213},
    {"Quest Reward: Red Silk Bandanas (#214)", 1750214},
    {"Quest Reward: In Defense of the King's Lands (#217)", 1750217},
    {"Quest Reward: The Stolen Journal (#218)", 1750218},
    {"Quest Reward: Missing In Action (#219)", 1750219},
    {"Quest Reward: Call of Water (#220)", 1750220},
    {"Quest Reward: Worgen in the Woods (#223)", 1750223},
    {"Quest Reward: In Defense of the King's Lands (#224)", 1750224},
    {"Quest Reward: Wolves at Our Heels (#226)", 1750226},
    {"Quest Reward: Morgan Ladimore (#227)", 1750227},
    {"Quest Reward: A Daughter's Love (#231)", 1750231},
    {"Quest Reward: Fueling the Demolishers (#236)", 1750236},
    {"Quest Reward: In Defense of the King's Lands (#237)", 1750237},
    {"Quest Reward: Eight-Legged Menaces (#245)", 1750245},
    {"Quest Reward: The Hunt Completed (#247)", 1750247},
    {"Quest Reward: Morganth (#249)", 1750249},
    {"Quest Reward: Translation to Ello (#252)", 1750252},
    {"Quest Reward: Bride of the Embalmer (#253)", 1750253},
    {"Quest Reward: WANTED: Chok'sul (#256)", 1750256},
    {"Quest Reward: A Hunter's Boast (#257)", 1750257},
    {"Quest Reward: A Hunter's Challenge (#258)", 1750258},
    {"Quest Reward: In Defense of the King's Lands (#263)", 1750263},
    {"Quest Reward: Blisters on The Land (#275)", 1750275},
    {"Quest Reward: Fire Taboo (#277)", 1750277},
    {"Quest Reward: Reclaiming Goods (#281)", 1750281},
    {"Quest Reward: A Dark Threat Looms (#283)", 1750283},
    {"Quest Reward: The Search Continues (#284)", 1750284},
    {"Quest Reward: Return the Statuette (#286)", 1750286},
    {"Quest Reward: Frostmane Hold (#287)", 1750287},
    {"Quest Reward: Cleansing the Eye (#293)", 1750293},
    {"Quest Reward: Ormer's Revenge (#296)", 1750296},
    {"Quest Reward: Gathering Idols (#297)", 1750297},
    {"Quest Reward: Uncovering the Past (#299)", 1750299},
    {"Quest Reward: A Grim Task (#304)", 1750304},
    {"Quest Reward: Filthy Paws (#307)", 1750307},
    {"Quest Reward: Protecting the Shipment (#309)", 1750309},
    {"Quest Reward: Tundra MacGrann's Stolen Stash (#312)", 1750312},
    {"Quest Reward: Protecting the Herd (#314)", 1750314},
    {"Quest Reward: The Perfect Stout (#315)", 1750315},
    {"Quest Reward: Return to Bellowfiz (#320)", 1750320},
    {"Quest Reward: Lightforge Iron (#321)", 1750321},
    {"Quest Reward: The Hidden Key (#328)", 1750328},
    {"Quest Reward: Report to Doren (#331)", 1750331},
    {"Quest Reward: Wine Shop Advert (#332)", 1750332},
    {"Quest Reward: The Green Hills of Stranglethorn (#338)", 1750338},
    {"Quest Reward: Chapter I (#339)", 1750339},
    {"Quest Reward: Chapter II (#340)", 1750340},
    {"Quest Reward: Chapter III (#341)", 1750341},
    {"Quest Reward: Chapter IV (#342)", 1750342},
    {"Quest Reward: Return to Kristoff (#346)", 1750346},
    {"Quest Reward: Stranglethorn Fever (#348)", 1750348},
    {"Quest Reward: Graverobbers (#358)", 1750358},
    {"Quest Reward: The Mindless Ones (#364)", 1750364},
    {"Quest Reward: A New Plague (#367)", 1750367},
    {"Quest Reward: A New Plague (#368)", 1750368},
    {"Quest Reward: A New Plague (#369)", 1750369},
    {"Quest Reward: At War With The Scarlet Crusade (#372)", 1750372},
    {"Quest Reward: Proof of Demise (#374)", 1750374},
    {"Quest Reward: The Chill of Death (#375)", 1750375},
    {"Quest Reward: The Damned (#376)", 1750376},
    {"Quest Reward: Crime and Punishment (#377)", 1750377},
    {"Quest Reward: The Fury Runs Deep (#378)", 1750378},
    {"Quest Reward: Slake That Thirst (#379)", 1750379},
    {"Quest Reward: Night Web's Hollow (#380)", 1750380},
    {"Quest Reward: The Scarlet Crusade (#381)", 1750381},
    {"Quest Reward: The Red Messenger (#382)", 1750382},
    {"Quest Reward: Beer Basted Boar Ribs (#384)", 1750384},
    {"Quest Reward: Crocolisk Hunting (#385)", 1750385},
    {"Quest Reward: What Comes Around... (#386)", 1750386},
    {"Quest Reward: An Audience with the King (#396)", 1750396},
    {"Quest Reward: You Have Served Us Well (#397)", 1750397},
    {"Quest Reward: Wanted: Maggot Eye (#398)", 1750398},
    {"Quest Reward: The Family Crypt (#408)", 1750408},
    {"Quest Reward: The Prodigal Lich Returns (#411)", 1750411},
    {"Quest Reward: Operation Recombobulation (#412)", 1750412},
    {"Quest Reward: Rejold's New Brew (#415)", 1750415},
    {"Quest Reward: Rat Catching (#416)", 1750416},
    {"Quest Reward: A Pilot's Revenge (#417)", 1750417},
    {"Quest Reward: Thelsamar Blood Sausages (#418)", 1750418},
    {"Quest Reward: The Lost Pilot (#419)", 1750419},
    {"Quest Reward: Ivar the Foul (#425)", 1750425},
    {"Quest Reward: The Mills Overrun (#426)", 1750426},
    {"Quest Reward: Wild Hearts (#429)", 1750429},
    {"Quest Reward: Candles of Beckoning (#431)", 1750431},
    {"Quest Reward: Escorting Erland (#435)", 1750435},
    {"Quest Reward: The Dead Fields (#437)", 1750437},
    {"Quest Reward: Assault on Fenris Isle (#442)", 1750442},
    {"Quest Reward: Thule Ravenclaw (#446)", 1750446},
    {"Quest Reward: A Recipe For Death (#447)", 1750447},
    {"Quest Reward: Report to Hadrec (#448)", 1750448},
    {"Quest Reward: A Recipe For Death (#451)", 1750451},
    {"Quest Reward: Pyrewood Ambush (#452)", 1750452},
    {"Quest Reward: The Balance of Nature (#456)", 1750456},
    {"Quest Reward: The Balance of Nature (#457)", 1750457},
    {"Quest Reward: The Woodland Protector (#459)", 1750459},
    {"Quest Reward: Search for Incendicite (#466)", 1750466},
    {"Quest Reward: Digging Through the Ooze (#470)", 1750470},
    {"Quest Reward: Apprentice's Duties (#471)", 1750471},
    {"Quest Reward: Defeat Nek'rosh (#474)", 1750474},
    {"Quest Reward: The Weaver (#480)", 1750480},
    {"Quest Reward: The Relics of Wakening (#483)", 1750483},
    {"Quest Reward: Ursal the Mauler (#486)", 1750486},
    {"Quest Reward: Zenn's Bidding (#488)", 1750488},
    {"Quest Reward: Wand to Bethor (#491)", 1750491},
    {"Quest Reward: The Rescue (#498)", 1750498},
    {"Quest Reward: Elixir of Pain (#501)", 1750501},
    {"Quest Reward: Crushridge Warmongers (#504)", 1750504},
    {"Quest Reward: Syndicate Assassins (#505)", 1750505},
    {"Quest Reward: Taretha's Gift (#508)", 1750508},
    {"Quest Reward: Elixir of Agony (#509)", 1750509},
    {"Quest Reward: Elixir of Agony (#515)", 1750515},
    {"Quest Reward: Beren's Peril (#516)", 1750516},
    {"Quest Reward: The Crown of Will (#521)", 1750521},
    {"Quest Reward: A Husband's Revenge (#530)", 1750530},
    {"Quest Reward: Vyrin's Revenge (#531)", 1750531},
    {"Quest Reward: Valik (#535)", 1750535},
    {"Quest Reward: Souvenirs of Death (#546)", 1750546},
    {"Quest Reward: Humbert's Sword (#547)", 1750547},
    {"Quest Reward: Battle of Hillsbrad (#550)", 1750550},
    {"Quest Reward: Soothing Turtle Bisque (#555)", 1750555},
    {"Quest Reward: Stormwind Ho! (#562)", 1750562},
    {"Quest Reward: Costly Menace (#564)", 1750564},
    {"Quest Reward: Bartolo's Yeti Fur Cloak (#565)", 1750565},
    {"Quest Reward: WANTED: Baron Vardus (#566)", 1750566},
    {"Quest Reward: Dangerous! (#567)", 1750567},
    {"Quest Reward: The Defense of Grom'gol (#569)", 1750569},
    {"Quest Reward: Mok'thardin's Enchantment (#573)", 1750573},
    {"Quest Reward: Keep An Eye Out (#576)", 1750576},
    {"Quest Reward: Stormwind Library (#579)", 1750579},
    {"Quest Reward: Whiskey Slim's Lost Grog (#580)", 1750580},
    {"Quest Reward: Headhunting (#582)", 1750582},
    {"Quest Reward: Saving Yenniku (#592)", 1750592},
    {"Quest Reward: Filling the Soul Gem (#593)", 1750593},
    {"Quest Reward: Bloody Bone Necklaces (#596)", 1750596},
    {"Quest Reward: Split Bone Necklace (#598)", 1750598},
    {"Quest Reward: Venture Company Mining (#600)", 1750600},
    {"Quest Reward: The Bloodsail Buccaneers (#608)", 1750608},
    {"Quest Reward: The Curse of the Tides (#611)", 1750611},
    {"Quest Reward: Cracking Maury's Foot (#613)", 1750613},
    {"Quest Reward: The Captain's Chest (#614)", 1750614},
    {"Quest Reward: Akiris by the Bundle (#617)", 1750617},
    {"Quest Reward: Facing Negolash (#618)", 1750618},
    {"Quest Reward: Zanzil's Secret (#621)", 1750621},
    {"Quest Reward: Return to Corporal Kaleb (#622)", 1750622},
    {"Quest Reward: Cortello's Riddle (#626)", 1750626},
    {"Quest Reward: Excelsior (#628)", 1750628},
    {"Quest Reward: Message in a Bottle (#630)", 1750630},
    {"Quest Reward: The Thandol Span (#633)", 1750633},
    {"Quest Reward: Trol'kalar (#646)", 1750646},
    {"Quest Reward: Rescue OOX-17/TN! (#648)", 1750648},
    {"Quest Reward: Summoning the Princess (#656)", 1750656},
    {"Quest Reward: Hints of a New Plague? (#661)", 1750661},
    {"Quest Reward: Deep Sea Salvage (#662)", 1750662},
    {"Quest Reward: Drowned Sorrows (#664)", 1750664},
    {"Quest Reward: Sunken Treasure (#666)", 1750666},
    {"Quest Reward: Death From Below (#667)", 1750667},
    {"Quest Reward: Foul Magics (#673)", 1750673},
    {"Quest Reward: Call to Arms (#679)", 1750679},
    {"Quest Reward: The Real Threat (#680)", 1750680},
    {"Quest Reward: Stromgarde Badges (#682)", 1750682},
    {"Quest Reward: Wanted!  Marez Cowl (#684)", 1750684},
    {"Quest Reward: Wanted!  Otto and Falconcrest (#685)", 1750685},
    {"Quest Reward: Malin's Request (#697)", 1750697},
    {"Quest Reward: A King's Tribute (#700)", 1750700},
    {"Quest Reward: Barbecued Buzzard Wings (#703)", 1750703},
    {"Quest Reward: Agmond's Fate (#704)", 1750704},
    {"Quest Reward: Pearl Diving (#705)", 1750705},
    {"Quest Reward: Fiery Blaze Enchantments (#706)", 1750706},
    {"Quest Reward: Solution to Doom (#709)", 1750709},
    {"Quest Reward: Liquid Stone (#715)", 1750715},
    {"Quest Reward: Stone Is Better than Cloth (#716)", 1750716},
    {"Quest Reward: Tremors of the Earth (#717)", 1750717},
    {"Quest Reward: A Dwarf and His Tools (#719)", 1750719},
    {"Quest Reward: Scrounging (#733)", 1750733},
    {"Quest Reward: Forbidden Knowledge (#737)", 1750737},
    {"Quest Reward: Find Agmond (#738)", 1750738},
    {"Quest Reward: Murdaloc (#739)", 1750739},
    {"Quest Reward: The Absent Minded Prospector (#741)", 1750741},
    {"Quest Reward: Preparation for Ceremony (#744)", 1750744},
    {"Quest Reward: Sharing the Land (#745)", 1750745},
    {"Quest Reward: Dwarven Digging (#746)", 1750746},
    {"Quest Reward: The Hunt Begins (#747)", 1750747},
    {"Quest Reward: The Hunt Continues (#750)", 1750750},
    {"Quest Reward: Rite of Strength (#757)", 1750757},
    {"Quest Reward: Thunderhorn Cleansing (#758)", 1750758},
    {"Quest Reward: Wildmane Cleansing (#760)", 1750760},
    {"Quest Reward: An Ambassador of Evil (#762)", 1750762},
    {"Quest Reward: Supervisor Fizsprocket (#765)", 1750765},
    {"Quest Reward: Mazzranache (#766)", 1750766},
    {"Quest Reward: Gathering Leather (#768)", 1750768},
    {"Quest Reward: Kodo Hide Bag (#769)", 1750769},
    {"Quest Reward: The Demon Scarred Cloak (#770)", 1750770},
    {"Quest Reward: Rite of Vision (#772)", 1750772},
    {"Quest Reward: Rites of the Earthmother (#776)", 1750776},
    {"Quest Reward: This Is Going to Be Hard (#778)", 1750778},
    {"Quest Reward: The Battleboars (#780)", 1750780},
    {"Quest Reward: Attack on Camp Narache (#781)", 1750781},
    {"Quest Reward: Thwarting Kolkar Aggression (#786)", 1750786},
    {"Quest Reward: Cutting Teeth (#788)", 1750788},
    {"Quest Reward: Sting of the Scorpid (#789)", 1750789},
    {"Quest Reward: Carry Your Weight (#791)", 1750791},
    {"Quest Reward: Vile Familiars (#792)", 1750792},
    {"Quest Reward: Broken Alliances (#793)", 1750793},
    {"Quest Reward: Burning Blade Medallion (#794)", 1750794},
    {"Quest Reward: Sarkoth (#804)", 1750804},
    {"Quest Reward: Dark Storms (#806)", 1750806},
    {"Quest Reward: Minshina's Skull (#808)", 1750808},
    {"Quest Reward: Need for a Cure (#812)", 1750812},
    {"Quest Reward: Finding the Antidote (#813)", 1750813},
    {"Quest Reward: Break a Few Eggs (#815)", 1750815},
    {"Quest Reward: Lost But Not Forgotten (#816)", 1750816},
    {"Quest Reward: A Solvent Spirit (#818)", 1750818},
    {"Quest Reward: Chen's Empty Keg (#821)", 1750821},
    {"Quest Reward: Chen's Empty Keg (#822)", 1750822},
    {"Quest Reward: Je'neu of the Earthen Ring (#824)", 1750824},
    {"Quest Reward: From The Wreckage.... (#825)", 1750825},
    {"Quest Reward: Zalazane (#826)", 1750826},
    {"Quest Reward: Skull Rock (#827)", 1750827},
    {"Quest Reward: Securing the Lines (#835)", 1750835},
    {"Quest Reward: Rescue OOX-09/HL! (#836)", 1750836},
    {"Quest Reward: Another Power Source? (#841)", 1750841},
    {"Quest Reward: Guile of the Raptor (#847)", 1750847},
    {"Quest Reward: Revenge of Gann (#849)", 1750849},
    {"Quest Reward: Hezrul Bloodmark (#852)", 1750852},
    {"Quest Reward: Apothecary Zamah (#853)", 1750853},
    {"Quest Reward: Centaur Bracers (#855)", 1750855},
    {"Quest Reward: Dig Rat Stew (#862)", 1750862},
    {"Quest Reward: The Escape (#863)", 1750863},
    {"Quest Reward: Return to Apothecary Zinge (#864)", 1750864},
    {"Quest Reward: Raptor Horns (#865)", 1750865},
    {"Quest Reward: Root Samples (#866)", 1750866},
    {"Quest Reward: Egg Hunt (#868)", 1750868},
    {"Quest Reward: The Disruption Ends (#872)", 1750872},
    {"Quest Reward: Isha Awak (#873)", 1750873},
    {"Quest Reward: Serena Bloodfeather (#876)", 1750876},
    {"Quest Reward: Stolen Booty (#888)", 1750888},
    {"Quest Reward: The Guns of Northwatch (#891)", 1750891},
    {"Quest Reward: Weapons of Choice (#893)", 1750893},
    {"Quest Reward: Miner's Fortune (#896)", 1750896},
    {"Quest Reward: Free From the Hold (#898)", 1750898},
    {"Quest Reward: Consumed by Hatred (#899)", 1750899},
    {"Quest Reward: Samophlange (#902)", 1750902},
    {"Quest Reward: Betrayal from Within (#906)", 1750906},
    {"Quest Reward: Baron Aquanis (#909)", 1750909},
    {"Quest Reward: Stonesplinter Trogg Disguise (#912)", 1750912},
    {"Quest Reward: Cry of the Thunderhawk (#913)", 1750913},
    {"Quest Reward: Leaders of the Fang (#914)", 1750914},
    {"Quest Reward: Webwood Venom (#916)", 1750916},
    {"Quest Reward: Webwood Egg (#917)", 1750917},
    {"Quest Reward: Timberling Seeds (#918)", 1750918},
    {"Quest Reward: Timberling Sprouts (#919)", 1750919},
    {"Quest Reward: Tumors (#923)", 1750923},
    {"Quest Reward: The Demon Seed (#924)", 1750924},
    {"Quest Reward: Flawed Power Stone (#926)", 1750926},
    {"Quest Reward: Twisted Hatred (#932)", 1750932},
    {"Quest Reward: Crown of the Earth (#935)", 1750935},
    {"Quest Reward: The Enchanted Glade (#937)", 1750937},
    {"Quest Reward: Mist (#938)", 1750938},
    {"Quest Reward: Planting the Heart (#941)", 1750941},
    {"Quest Reward: The Absent Minded Prospector (#943)", 1750943},
    {"Quest Reward: Cave Mushrooms (#947)", 1750947},
    {"Quest Reward: Mathystra Relics (#951)", 1750951},
    {"Quest Reward: Bashal'Aran (#957)", 1750957},
    {"Quest Reward: Tools of the Highborne (#958)", 1750958},
    {"Quest Reward: Onu is meditating (#960)", 1750960},
    {"Quest Reward: Onu is meditating (#961)", 1750961},
    {"Quest Reward: Serpentbloom (#962)", 1750962},
    {"Quest Reward: For Love Eternal (#963)", 1750963},
    {"Quest Reward: Knowledge in the Deeps (#971)", 1750971},
    {"Quest Reward: Water Sapta (#972)", 1750972},
    {"Quest Reward: The Tower of Althalaxx (#973)", 1750973},
    {"Quest Reward: Cache of Mau'ari (#975)", 1750975},
    {"Quest Reward: Supplies to Auberdine (#976)", 1750976},
    {"Quest Reward: The Tower of Althalaxx (#981)", 1750981},
    {"Quest Reward: Deep Ocean, Vast Sea (#982)", 1750982},
    {"Quest Reward: Escape Through Force (#994)", 1750994},
    {"Quest Reward: Escape Through Stealth (#995)", 1750995},
    {"Quest Reward: Buzzbox 525 (#1003)", 1751003},
    {"Quest Reward: Ruuzel (#1009)", 1751009},
    {"Quest Reward: Insane Druids (#1012)", 1751012},
    {"Quest Reward: The Book of Ur (#1013)", 1751013},
    {"Quest Reward: Arugal Must Die (#1014)", 1751014},
    {"Quest Reward: Mage Summoner (#1017)", 1751017},
    {"Quest Reward: An Aggressive Defense (#1025)", 1751025},
    {"Quest Reward: Raene's Cleansing (#1028)", 1751028},
    {"Quest Reward: The Branch of Cenarius (#1031)", 1751031},
    {"Quest Reward: Fallen Sky Lake (#1035)", 1751035},
    {"Quest Reward: Answered Questions (#1044)", 1751044},
    {"Quest Reward: Raene's Cleansing (#1046)", 1751046},
    {"Quest Reward: Into The Scarlet Monastery (#1048)", 1751048},
    {"Quest Reward: Compendium of the Fallen (#1049)", 1751049},
    {"Quest Reward: Mythology of the Titans (#1050)", 1751050},
    {"Quest Reward: Vorrel's Revenge (#1051)", 1751051},
    {"Quest Reward: In the Name of the Light (#1053)", 1751053},
    {"Quest Reward: Culling the Threat (#1054)", 1751054},
    {"Quest Reward: Jin'Zil's Forest Magic (#1058)", 1751058},
    {"Quest Reward: Reclaiming the Charred Vale (#1059)", 1751059},
    {"Quest Reward: Retrieval for Mauren (#1078)", 1751078},
    {"Quest Reward: Reception from Tyrande (#1081)", 1751081},
    {"Quest Reward: The Den (#1089)", 1751089},
    {"Quest Reward: Gerenzo's Orders (#1092)", 1751092},
    {"Quest Reward: Gerenzo Wrenchwhistle (#1096)", 1751096},
    {"Quest Reward: Deathstalkers in Shadowfang (#1098)", 1751098},
    {"Quest Reward: Goblins Win! (#1099)", 1751099},
    {"Quest Reward: The Crone of the Kraul (#1101)", 1751101},
    {"Quest Reward: A Vengeful Fate (#1102)", 1751102},
    {"Quest Reward: Fool's Stout (#1127)", 1751127},
    {"Quest Reward: Highperch Venom (#1135)", 1751135},
    {"Quest Reward: Frostmaw (#1136)", 1751136},
    {"Quest Reward: News for Fizzle (#1137)", 1751137},
    {"Quest Reward: Fruit of the Sea (#1138)", 1751138},
    {"Quest Reward: The Lost Tablets of Will (#1139)", 1751139},
    {"Quest Reward: The Family and the Fishing Pole (#1141)", 1751141},
    {"Quest Reward: Mortality Wanes (#1142)", 1751142},
    {"Quest Reward: Willix the Importer (#1144)", 1751144},
    {"Quest Reward: A New Ore Sample (#1153)", 1751153},
    {"Quest Reward: To Steal From Thieves (#1164)", 1751164},
    {"Quest Reward: Overlord Mok'Morokk's Concern (#1166)", 1751166},
    {"Quest Reward: Army of the Black Dragon (#1168)", 1751168},
    {"Quest Reward: Identifying the Brood (#1169)", 1751169},
    {"Quest Reward: The Brood of Onyxia (#1172)", 1751172},
    {"Quest Reward: Challenge Overlord Mok'Morokk (#1173)", 1751173},
    {"Quest Reward: Gnomes Win! (#1174)", 1751174},
    {"Quest Reward: Hungry! (#1177)", 1751177},
    {"Quest Reward: Parts of the Swarm (#1184)", 1751184},
    {"Quest Reward: Safety First (#1189)", 1751189},
    {"Quest Reward: The Sacred Flame (#1197)", 1751197},
    {"Quest Reward: Twilight Falls (#1199)", 1751199},
    {"Quest Reward: Blackfathom Villainy (#1200)", 1751200},
    {"Quest Reward: Jarl Needs a Blade (#1203)", 1751203},
    {"Quest Reward: Marsh Frog Legs (#1218)", 1751218},
    {"Quest Reward: Blueleaf Tubers (#1221)", 1751221},
    {"Quest Reward: Stinky's Escape (#1222)", 1751222},
    {"Quest Reward: ... and Bugs (#1258)", 1751258},
    {"Quest Reward: The Missing Diplomat (#1267)", 1751267},
    {"Quest Reward: Stinky's Escape (#1270)", 1751270},
    {"Quest Reward: Feast at the Blue Recluse (#1271)", 1751271},
    {"Quest Reward: Questioning Reethe (#1273)", 1751273},
    {"Quest Reward: Researching the Corruption (#1275)", 1751275},
    {"Quest Reward: Unfinished Gordok Business (#1318)", 1751318},
    {"Quest Reward: Sample for Helbrim (#1358)", 1751358},
    {"Quest Reward: Mazen's Behest (#1364)", 1751364},
    {"Quest Reward: Centaur Bounty (#1366)", 1751366},
    {"Quest Reward: Stealing Supplies (#1370)", 1751370},
    {"Quest Reward: Khan Hratha (#1380)", 1751380},
    {"Quest Reward: Khan Hratha (#1381)", 1751381},
    {"Quest Reward: Nothing But The Truth (#1383)", 1751383},
    {"Quest Reward: Centaur Bounty (#1387)", 1751387},
    {"Quest Reward: Galen's Escape (#1393)", 1751393},
    {"Quest Reward: Final Passage (#1394)", 1751394},
    {"Quest Reward: The Lost Supplies (#1423)", 1751423},
    {"Quest Reward: Threat From the Sea (#1427)", 1751427},
    {"Quest Reward: Fresh Meat (#1430)", 1751430},
    {"Quest Reward: Alliance Relations (#1436)", 1751436},
    {"Quest Reward: Return to Vahlarriel (#1440)", 1751440},
    {"Quest Reward: Seeking the Kor Gem (#1442)", 1751442},
    {"Quest Reward: The Temple of Atal'Hakkar (#1445)", 1751445},
    {"Quest Reward: Jammal'an the Prophet (#1446)", 1751446},
    {"Quest Reward: The Karnitol Shipwreck (#1457)", 1751457},
    {"Quest Reward: Earth Sapta (#1462)", 1751462},
    {"Quest Reward: Earth Sapta (#1463)", 1751463},
    {"Quest Reward: Fire Sapta (#1464)", 1751464},
    {"Quest Reward: Reagents for Reclaimers Inc. (#1467)", 1751467},
    {"Quest Reward: The Binding (#1474)", 1751474},
    {"Quest Reward: Into The Temple of Atal'Hakkar (#1475)", 1751475},
    {"Quest Reward: Deviate Hides (#1486)", 1751486},
    {"Quest Reward: Deviate Eradication (#1487)", 1751487},
    {"Quest Reward: The Corrupter (#1488)", 1751488},
    {"Quest Reward: Vile Familiars (#1499)", 1751499},
    {"Quest Reward: Forged Steel (#1503)", 1751503},
    {"Quest Reward: The Binding (#1513)", 1751513},
    {"Quest Reward: Call of Earth (#1518)", 1751518},
    {"Quest Reward: Call of Earth (#1521)", 1751521},
    {"Quest Reward: Call of Fire (#1525)", 1751525},
    {"Quest Reward: Call of Fire (#1526)", 1751526},
    {"Quest Reward: Call of Fire (#1527)", 1751527},
    {"Quest Reward: Call of Air (#1531)", 1751531},
    {"Quest Reward: Call of Air (#1532)", 1751532},
    {"Quest Reward: Flash Bomb Recipe (#1559)", 1751559},
    {"Quest Reward: Tooga's Quest (#1560)", 1751560},
    {"Quest Reward: Supplying the Front (#1578)", 1751578},
    {"Quest Reward: Electropellers (#1580)", 1751580},
    {"Quest Reward: Elixirs for the Bladeleafs (#1581)", 1751581},
    {"Quest Reward: Moonglow Vest (#1582)", 1751582},
    {"Quest Reward: Gearing Redridge (#1618)", 1751618},
    {"Quest Reward: The Tome of Divinity (#1641)", 1751641},
    {"Quest Reward: The Tome of Divinity (#1645)", 1751645},
    {"Quest Reward: The Tome of Valor (#1652)", 1751652},
    {"Quest Reward: Bailor's Ore Shipment (#1655)", 1751655},
    {"Quest Reward: A Task Unfinished (#1656)", 1751656},
    {"Quest Reward: Stinking Up Southshore (#1657)", 1751657},
    {"Quest Reward: Crashing the Wickerman Festival (#1658)", 1751658},
    {"Quest Reward: Dead-tooth Jack (#1667)", 1751667},
    {"Quest Reward: Grey Iron Weapons (#1682)", 1751682},
    {"Quest Reward: Weapons of Elunite (#1693)", 1751693},
    {"Quest Reward: The Shieldsmith (#1702)", 1751702},
    {"Quest Reward: Grimand's Armor (#1706)", 1751706},
    {"Quest Reward: Water Pouch Bounty (#1707)", 1751707},
    {"Quest Reward: Klockmort's Creation (#1709)", 1751709},
    {"Quest Reward: Mathiel's Armor (#1711)", 1751711},
    {"Quest Reward: Essence of the Exile (#1714)", 1751714},
    {"Quest Reward: The Binding (#1739)", 1751739},
    {"Quest Reward: The Orb of Soran'ruk (#1740)", 1751740},
    {"Quest Reward: Furen's Armor (#1782)", 1751782},
    {"Quest Reward: The Symbol of Life (#1789)", 1751789},
    {"Quest Reward: The Symbol of Life (#1790)", 1751790},
    {"Quest Reward: Whirlwind Weapon (#1792)", 1751792},
    {"Quest Reward: The Tome of Valor (#1793)", 1751793},
    {"Quest Reward: The Tome of Valor (#1794)", 1751794},
    {"Quest Reward: The Binding (#1795)", 1751795},
    {"Quest Reward: Heirloom Weapon (#1822)", 1751822},
    {"Quest Reward: Trial at the Field of Giants (#1824)", 1751824},
    {"Quest Reward: Brutal Gauntlets (#1843)", 1751843},
    {"Quest Reward: Brutal Helm (#1845)", 1751845},
    {"Quest Reward: Brutal Legguards (#1847)", 1751847},
    {"Quest Reward: Brutal Hauberk (#1848)", 1751848},
    {"Quest Reward: The Shattered Hand (#1858)", 1751858},
    {"Quest Reward: Mirror Lake (#1861)", 1751861},
    {"Quest Reward: Water Pouch Bounty (#1878)", 1751878},
    {"Quest Reward: Mage-tastic Gizmonitor (#1880)", 1751880},
    {"Quest Reward: The Balnir Farmstead (#1882)", 1751882},
    {"Quest Reward: Ju-Ju Heaps (#1884)", 1751884},
    {"Quest Reward: Manaweave Robe (#1941)", 1751941},
    {"Quest Reward: Astral Knot Garment (#1942)", 1751942},
    {"Quest Reward: Nether-lace Garment (#1946)", 1751946},
    {"Quest Reward: Mage's Wand (#1952)", 1751952},
    {"Quest Reward: Celestial Power (#1958)", 1751958},
    {"Quest Reward: Spellfire Robes (#1962)", 1751962},
    {"Quest Reward: The Deathstalkers (#1978)", 1751978},
    {"Quest Reward: Bingles' Missing Supplies (#2038)", 1752038},
    {"Quest Reward: Underground Assault (#2040)", 1752040},
    {"Quest Reward: Gyromast's Revenge (#2078)", 1752078},
    {"Quest Reward: Tharnariun's Hope (#2139)", 1752139},
    {"Quest Reward: Rest and Relaxation (#2158)", 1752158},
    {"Quest Reward: Dolanaar Delivery (#2159)", 1752159},
    {"Quest Reward: Supplies to Tannok (#2160)", 1752160},
    {"Quest Reward: A Peon's Burden (#2161)", 1752161},
    {"Quest Reward: Easy Strider Living (#2178)", 1752178},
    {"Quest Reward: Uldaman Reagent Run (#2202)", 1752202},
    {"Quest Reward: Snatch and Grab (#2206)", 1752206},
    {"Quest Reward: Onin's Report (#2239)", 1752239},
    {"Quest Reward: The Hidden Chamber (#2240)", 1752240},
    {"Quest Reward: Destiny Calls (#2242)", 1752242},
    {"Quest Reward: Alther's Mill (#2282)", 1752282},
    {"Quest Reward: Necklace Recovery, Take 3 (#2341)", 1752341},
    {"Quest Reward: Horns of Nez'ra (#2358)", 1752358},
    {"Quest Reward: Klaven's Tower (#2359)", 1752359},
    {"Quest Reward: Restoring the Necklace (#2361)", 1752361},
    {"Quest Reward: Plundering the Plunderers (#2381)", 1752381},
    {"Quest Reward: The Sprouted Fronds (#2399)", 1752399},
    {"Quest Reward: Power Stones (#2418)", 1752418},
    {"Quest Reward: The Platinum Discs (#2439)", 1752439},
    {"Quest Reward: The Platinum Discs (#2440)", 1752440},
    {"Quest Reward: Deep Cover (#2458)", 1752458},
    {"Quest Reward: Mission: Possible But Not Probable (#2478)", 1752478},
    {"Quest Reward: Hinott's Assistance (#2480)", 1752480},
    {"Quest Reward: Oakenscowl (#2499)", 1752499},
    {"Quest Reward: Sathrah's Sacrifice (#2520)", 1752520},
    {"Quest Reward: To Serve Kum'isha (#2521)", 1752521},
    {"Quest Reward: Kum'isha's Endeavors (#2522)", 1752522},
    {"Quest Reward: Druid of the Claw (#2561)", 1752561},
    {"Quest Reward: Snickerfang Jowls (#2581)", 1752581},
    {"Quest Reward: Rage of Ages (#2582)", 1752582},
    {"Quest Reward: A Boar's Vitality (#2583)", 1752583},
    {"Quest Reward: Spirit of the Boar (#2584)", 1752584},
    {"Quest Reward: The Decisive Striker (#2585)", 1752585},
    {"Quest Reward: Salt of the Scorpok (#2586)", 1752586},
    {"Quest Reward: The Basilisk's Bite (#2601)", 1752601},
    {"Quest Reward: Infallible Mind (#2602)", 1752602},
    {"Quest Reward: Vulture's Vigor (#2603)", 1752603},
    {"Quest Reward: Spiritual Domination (#2604)", 1752604},
    {"Quest Reward: The Touch of Zanzil (#2609)", 1752609},
    {"Quest Reward: Noggenfogger Elixir (#2662)", 1752662},
    {"Quest Reward: Heroes of Old (#2701)", 1752701},
    {"Quest Reward: The Super Egg-O-Matic (#2741)", 1752741},
    {"Quest Reward: An Extraordinary Egg (#2747)", 1752747},
    {"Quest Reward: A Fine Egg (#2748)", 1752748},
    {"Quest Reward: An Ordinary Egg (#2749)", 1752749},
    {"Quest Reward: Barbaric Battlements (#2751)", 1752751},
    {"Quest Reward: On Iron Pauldrons (#2752)", 1752752},
    {"Quest Reward: Trampled Under Foot (#2753)", 1752753},
    {"Quest Reward: Horns of Frenzy (#2754)", 1752754},
    {"Quest Reward: Joys of Omosh (#2755)", 1752755},
    {"Quest Reward: The Origins of Smithing (#2758)", 1752758},
    {"Quest Reward: Smelt On, Smelt Off (#2761)", 1752761},
    {"Quest Reward: The Great Silver Deceiver (#2762)", 1752762},
    {"Quest Reward: The Art of the Imbue (#2763)", 1752763},
    {"Quest Reward: Expert Blacksmith! (#2765)", 1752765},
    {"Quest Reward: Rescue OOX-22/FE! (#2767)", 1752767},
    {"Quest Reward: Divino-matic Rod (#2768)", 1752768},
    {"Quest Reward: Gahz'rilla (#2770)", 1752770},
    {"Quest Reward: The Mark of Quality (#2821)", 1752821},
    {"Quest Reward: The Mark of Quality (#2822)", 1752822},
    {"Quest Reward: Rig Wars (#2841)", 1752841},
    {"Quest Reward: Gnomer-gooooone! (#2843)", 1752843},
    {"Quest Reward: Wandering Shay (#2845)", 1752845},
    {"Quest Reward: Tiara of the Deep (#2846)", 1752846},
    {"Quest Reward: Wild Leather Shoulders (#2848)", 1752848},
    {"Quest Reward: Wild Leather Vest (#2849)", 1752849},
    {"Quest Reward: Wild Leather Helmet (#2850)", 1752850},
    {"Quest Reward: Wild Leather Boots (#2851)", 1752851},
    {"Quest Reward: Wild Leather Leggings (#2852)", 1752852},
    {"Quest Reward: Master of the Wild Leather (#2853)", 1752853},
    {"Quest Reward: Wild Leather Shoulders (#2855)", 1752855},
    {"Quest Reward: Wild Leather Vest (#2856)", 1752856},
    {"Quest Reward: Wild Leather Helmet (#2857)", 1752857},
    {"Quest Reward: Wild Leather Boots (#2858)", 1752858},
    {"Quest Reward: Wild Leather Leggings (#2859)", 1752859},
    {"Quest Reward: Master of the Wild Leather (#2860)", 1752860},
    {"Quest Reward: Delivering the Relic (#2871)", 1752871},
    {"Quest Reward: Deliver to MacKinley (#2874)", 1752874},
    {"Quest Reward: The Stave of Equinex (#2879)", 1752879},
    {"Quest Reward: Cuergo's Gold (#2882)", 1752882},
    {"Quest Reward: The Battle Plans (#2903)", 1752903},
    {"Quest Reward: A Fine Mess (#2904)", 1752904},
    {"Quest Reward: Gyrodrillmatic Excavationators (#2928)", 1752928},
    {"Quest Reward: The Grand Betrayal (#2929)", 1752929},
    {"Quest Reward: Data Rescue (#2930)", 1752930},
    {"Quest Reward: Venom to the Undercity (#2938)", 1752938},
    {"Quest Reward: The Morrow Stone (#2942)", 1752942},
    {"Quest Reward: Gnome Improvement (#2948)", 1752948},
    {"Quest Reward: Nogg's Ring Redo (#2950)", 1752950},
    {"Quest Reward: The Sparklematic 5200! (#2952)", 1752952},
    {"Quest Reward: More Sparklematic Action (#2953)", 1752953},
    {"Quest Reward: A Future Task (#2964)", 1752964},
    {"Quest Reward: A Future Task (#2968)", 1752968},
    {"Quest Reward: Doling Justice (#2972)", 1752972},
    {"Quest Reward: A Grim Discovery (#2976)", 1752976},
    {"Quest Reward: Gordunni Cobalt (#2987)", 1752987},
    {"Quest Reward: Saving Sharpbeak (#2994)", 1752994},
    {"Quest Reward: Dark Heart (#3062)", 1753062},
    {"Quest Reward: Weapons of Spirit (#3129)", 1753129},
    {"Quest Reward: Gahz'ridian (#3161)", 1753161},
    {"Quest Reward: At Last! (#3201)", 1753201},
    {"Quest Reward: Stolen Silver (#3281)", 1753281},
    {"Quest Reward: Mura Runetotem (#3301)", 1753301},
    {"Quest Reward: Did You Lose This? (#3321)", 1753321},
    {"Quest Reward: Bring the End (#3341)", 1753341},
    {"Quest Reward: In Nightmares (#3369)", 1753369},
    {"Quest Reward: In Nightmares (#3370)", 1753370},
    {"Quest Reward: The Essence of Eranikus (#3373)", 1753373},
    {"Quest Reward: Replacement Phial (#3375)", 1753375},
    {"Quest Reward: Break Sharptusk! (#3376)", 1753376},
    {"Quest Reward: Prayer to Elune (#3378)", 1753378},
    {"Quest Reward: Shadoweaver (#3379)", 1753379},
    {"Quest Reward: The Undermarket (#3385)", 1753385},
    {"Quest Reward: The Undermarket (#3402)", 1753402},
    {"Quest Reward: Secret of the Circle (#3447)", 1753447},
    {"Quest Reward: Signal for Pickup (#3451)", 1753451},
    {"Quest Reward: The Torch of Retribution (#3454)", 1753454},
    {"Quest Reward: Return to Tymor (#3461)", 1753461},
    {"Quest Reward: Set Them Ablaze! (#3463)", 1753463},
    {"Quest Reward: Trinkets... (#3481)", 1753481},
    {"Quest Reward: Signal for Pickup (#3483)", 1753483},
    {"Quest Reward: Everything Counts In Large Amounts (#3501)", 1753501},
    {"Quest Reward: One Draenei's Junk... (#3502)", 1753502},
    {"Quest Reward: Betrayed (#3507)", 1753507},
    {"Quest Reward: Horde Presence (#3514)", 1753514},
    {"Quest Reward: Iverron's Antidote (#3522)", 1753522},
    {"Quest Reward: Extinguishing the Idol (#3525)", 1753525},
    {"Quest Reward: The God Hakkar (#3528)", 1753528},
    {"Quest Reward: Rise, Obsidion! (#3566)", 1753566},
    {"Quest Reward: Kim'jael Indeed! (#3601)", 1753601},
    {"Quest Reward: Enchanted Azsharite Fel Weaponry (#3625)", 1753625},
    {"Quest Reward: You Are Rakh'likh, Demon (#3628)", 1753628},
    {"Quest Reward: Bring the Light (#3636)", 1753636},
    {"Quest Reward: The Smoldering Ruins of Thaurissan (#3701)", 1753701},
    {"Quest Reward: An OOX of Your Own (#3721)", 1753721},
    {"Quest Reward: Morrowgrain Research (#3781)", 1753781},
    {"Quest Reward: Morrowgrain Research (#3782)", 1753782},
    {"Quest Reward: Morrowgrain Research (#3785)", 1753785},
    {"Quest Reward: Morrowgrain Research (#3786)", 1753786},
    {"Quest Reward: The Mystery of Morrowgrain (#3791)", 1753791},
    {"Quest Reward: Morrowgrain to Feathermoon Stronghold (#3792)", 1753792},
    {"Quest Reward: Dark Iron Legacy (#3802)", 1753802},
    {"Quest Reward: Morrowgrain to Darnassus (#3803)", 1753803},
    {"Quest Reward: Morrowgrain to Thunder Bluff (#3804)", 1753804},
    {"Quest Reward: Krom'Grul (#3822)", 1753822},
    {"Quest Reward: Ogre Head On A Stick = Party (#3825)", 1753825},
    {"Quest Reward: Roll the Bones (#3882)", 1753882},
    {"Quest Reward: Rattling the Rattlecages (#3901)", 1753901},
    {"Quest Reward: Scavenging Deathknell (#3902)", 1753902},
    {"Quest Reward: Grape Manifest (#3905)", 1753905},
    {"Quest Reward: Disharmony of Fire (#3907)", 1753907},
    {"Quest Reward: The Last Element (#3911)", 1753911},
    {"Quest Reward: Samophlange Manual (#3924)", 1753924},
    {"Quest Reward: It's Dangerous to Go Alone (#3962)", 1753962},
    {"Quest Reward: The Princess Saved? (#4004)", 1754004},
    {"Quest Reward: A Taste of Flame (#4024)", 1754024},
    {"Quest Reward: The Videre Elixir (#4041)", 1754041},
    {"Quest Reward: The Rise of the Machines (#4063)", 1754063},
    {"Quest Reward: Salve via Hunting (#4103)", 1754103},
    {"Quest Reward: Salve via Mining (#4104)", 1754104},
    {"Quest Reward: Salve via Gathering (#4105)", 1754105},
    {"Quest Reward: Salve via Skinning (#4106)", 1754106},
    {"Quest Reward: Salve via Disenchanting (#4107)", 1754107},
    {"Quest Reward: Salve via Hunting (#4108)", 1754108},
    {"Quest Reward: Salve via Mining (#4109)", 1754109},
    {"Quest Reward: Salve via Gathering (#4110)", 1754110},
    {"Quest Reward: Salve via Skinning (#4111)", 1754111},
    {"Quest Reward: Salve via Disenchanting (#4112)", 1754112},
    {"Quest Reward: Hurley Blackbreath (#4126)", 1754126},
    {"Quest Reward: Operation: Death to Angerforge (#4132)", 1754132},
    {"Quest Reward: Lost Thunderbrew Recipe (#4134)", 1754134},
    {"Quest Reward: Ribbly Screwspigot (#4136)", 1754136},
    {"Quest Reward: Bloodpetal Zapper (#4148)", 1754148},
    {"Quest Reward: Recipe of the Kaldorei (#4161)", 1754161},
    {"Quest Reward: The Love Potion (#4201)", 1754201},
    {"Quest Reward: Abandoned Hope (#4242)", 1754242},
    {"Quest Reward: Ancient Spirit (#4261)", 1754261},
    {"Quest Reward: Incendius! (#4263)", 1754263},
    {"Quest Reward: A Hero's Welcome (#4266)", 1754266},
    {"Quest Reward: Rise of the Silithid (#4267)", 1754267},
    {"Quest Reward: The Good Stuff (#4286)", 1754286},
    {"Quest Reward: The Bait for Lar'korwi (#4292)", 1754292},
    {"Quest Reward: Becoming a Parent (#4298)", 1754298},
    {"Quest Reward: Bone-Bladed Weapons (#4300)", 1754300},
    {"Quest Reward: The Mighty U'cha (#4301)", 1754301},
    {"Quest Reward: Making Sense of It (#4321)", 1754321},
    {"Quest Reward: Jail Break! (#4322)", 1754322},
    {"Quest Reward: The Princess's Surprise (#4363)", 1754363},
    {"Quest Reward: Crystal Restore (#4381)", 1754381},
    {"Quest Reward: Crystal Force (#4382)", 1754382},
    {"Quest Reward: Crystal Ward (#4383)", 1754383},
    {"Quest Reward: Crystal Yield (#4384)", 1754384},
    {"Quest Reward: Crystal Charge (#4385)", 1754385},
    {"Quest Reward: Crystal Spire (#4386)", 1754386},
    {"Quest Reward: Galgar's Cactus Apple Surprise (#4402)", 1754402},
    {"Quest Reward: Purified! (#4442)", 1754442},
    {"Quest Reward: Ledger from Tanaris (#4450)", 1754450},
    {"Quest Reward: Libram of Rumination (#4463)", 1754463},
    {"Quest Reward: Libram of Constitution (#4481)", 1754481},
    {"Quest Reward: Libram of Tenacity (#4482)", 1754482},
    {"Quest Reward: Libram of Resilience (#4483)", 1754483},
    {"Quest Reward: Libram of Voracity (#4484)", 1754484},
    {"Quest Reward: A Little Help From My Friends (#4491)", 1754491},
    {"Quest Reward: Beware of Pterrordax (#4501)", 1754501},
    {"Quest Reward: Shizzle's Flyer (#4503)", 1754503},
    {"Quest Reward: Calm Before the Storm (#4510)", 1754510},
    {"Quest Reward: Calm Before the Storm (#4511)", 1754511},
    {"Quest Reward: A Little Slime Goes a Long Way (#4513)", 1754513},
    {"Quest Reward: Testing for Impurities - Un'Goro Crater (#4561)", 1754561},
    {"Quest Reward: More Sparklematic Action (#4603)", 1754603},
    {"Quest Reward: More Sparklematic Action (#4604)", 1754604},
    {"Quest Reward: The Sparklematic 5200! (#4605)", 1754605},
    {"Quest Reward: The Sparklematic 5200! (#4606)", 1754606},
    {"Quest Reward: Avast Ye, Admiral! (#4621)", 1754621},
    {"Quest Reward: Melding of Influences (#4642)", 1754642},
    {"Quest Reward: Testing for Corruption - Felwood (#4661)", 1754661},
    {"Quest Reward: Washed Ashore (#4681)", 1754681},
    {"Quest Reward: Put Her Down (#4701)", 1754701},
    {"Quest Reward: The Pack Mistress (#4724)", 1754724},
    {"Quest Reward: Kibler's Exotic Pets (#4729)", 1754729},
    {"Quest Reward: Egg Freezing (#4734)", 1754734},
    {"Quest Reward: WANTED: Murkdeep! (#4740)", 1754740},
    {"Quest Reward: Seal of Ascension (#4743)", 1754743},
    {"Quest Reward: The Blackwood Corrupted (#4763)", 1754763},
    {"Quest Reward: Delivery to Ridgewell (#4765)", 1754765},
    {"Quest Reward: Wind Rider (#4767)", 1754767},
    {"Quest Reward: The Darkstone Tablet (#4768)", 1754768},
    {"Quest Reward: Dawn's Gambit (#4771)", 1754771},
    {"Quest Reward: Fine Gold Thread (#4785)", 1754785},
    {"Quest Reward: The Completed Robe (#4786)", 1754786},
    {"Quest Reward: Frostsaber E'ko (#4801)", 1754801},
    {"Quest Reward: Winterfall E'ko (#4802)", 1754802},
    {"Quest Reward: Shardtooth E'ko (#4803)", 1754803},
    {"Quest Reward: Chillwind E'ko (#4804)", 1754804},
    {"Quest Reward: Ice Thistle E'ko (#4805)", 1754805},
    {"Quest Reward: Frostmaul E'ko (#4806)", 1754806},
    {"Quest Reward: Wildkin E'ko (#4807)", 1754807},
    {"Quest Reward: Return to Tinkee (#4810)", 1754810},
    {"Quest Reward: The Fragments Within (#4813)", 1754813},
    {"Quest Reward: Strange Sources (#4842)", 1754842},
    {"Quest Reward: En-Ay-Es-Tee-Why (#4862)", 1754862},
    {"Quest Reward: Mother's Milk (#4866)", 1754866},
    {"Quest Reward: Urok Doomhowl (#4867)", 1754867},
    {"Quest Reward: Guarding Secrets (#4883)", 1754883},
    {"Quest Reward: Wildkin of Elune (#4902)", 1754902},
    {"Quest Reward: Warlord's Command (#4903)", 1754903},
    {"Quest Reward: Free at Last (#4904)", 1754904},
    {"Quest Reward: Further Corruption (#4906)", 1754906},
    {"Quest Reward: Cleansing of the Orb of Orahil (#4961)", 1754961},
    {"Quest Reward: The Completed Orb of Dar'Orahil (#4964)", 1754964},
    {"Quest Reward: Protect Kanati Greycloud (#4966)", 1754966},
    {"Quest Reward: A Matter of Time (#4971)", 1754971},
    {"Quest Reward: Counting Out Time (#4972)", 1754972},
    {"Quest Reward: Counting Out Time (#4973)", 1754973},
    {"Quest Reward: For The Horde! (#4974)", 1754974},
    {"Quest Reward: The Completed Orb of Noh'Orahil (#4975)", 1754975},
    {"Quest Reward: Bijou's Reconnaissance Report (#4983)", 1754983},
    {"Quest Reward: Glyphed Oaken Branch (#4986)", 1754986},
    {"Quest Reward: Glyphed Oaken Branch (#4987)", 1754987},
    {"Quest Reward: Two Halves Become One (#5051)", 1755051},
    {"Quest Reward: Shy-Rotam (#5056)", 1755056},
    {"Quest Reward: Past Endeavors (#5057)", 1755057},
    {"Quest Reward: Locked Away (#5060)", 1755060},
    {"Quest Reward: Aquatic Form (#5061)", 1755061},
    {"Quest Reward: Cap of the Scarlet Savant (#5063)", 1755063},
    {"Quest Reward: Grimtotem Spying (#5064)", 1755064},
    {"Quest Reward: Leggings of Arcana (#5067)", 1755067},
    {"Quest Reward: Breastplate of Bloodthirst (#5068)", 1755068},
    {"Quest Reward: Maxwell's Mission (#5081)", 1755081},
    {"Quest Reward: Arikara (#5088)", 1755088},
    {"Quest Reward: General Drakkisath's Demise (#5102)", 1755102},
    {"Quest Reward: High Chief Winterfall (#5121)", 1755121},
    {"Quest Reward: Fiery Plate Gauntlets (#5124)", 1755124},
    {"Quest Reward: Aurius' Reckoning (#5125)", 1755125},
    {"Quest Reward: The Demon Forge (#5127)", 1755127},
    {"Quest Reward: Words of the High Chief (#5128)", 1755128},
    {"Quest Reward: Wanted - Arnak Grimtotem (#5147)", 1755147},
    {"Quest Reward: Dadanga is Hungry! (#5150)", 1755150},
    {"Quest Reward: Hypercapacitor Gizmo (#5151)", 1755151},
    {"Quest Reward: Are We There, Yeti? (#5163)", 1755163},
    {"Quest Reward: Breastplate of the Chromatic Flight (#5166)", 1755166},
    {"Quest Reward: Legplates of the Chromatic Defier (#5167)", 1755167},
    {"Quest Reward: Retribution of the Light (#5204)", 1755204},
    {"Quest Reward: The Active Agent (#5213)", 1755213},
    {"Quest Reward: The Great Fras Siabi (#5214)", 1755214},
    {"Quest Reward: Mission Accomplished! (#5237)", 1755237},
    {"Quest Reward: Mission Accomplished! (#5238)", 1755238},
    {"Quest Reward: A Final Blow (#5242)", 1755242},
    {"Quest Reward: Houses of the Holy (#5243)", 1755243},
    {"Quest Reward: The Crystal of Zin-Malor (#5253)", 1755253},
    {"Quest Reward: The Argent Hold (#5265)", 1755265},
    {"Quest Reward: The Restless Souls (#5282)", 1755282},
    {"Quest Reward: Sweet Serenity (#5305)", 1755305},
    {"Quest Reward: Snakestone of the Shadow Huntress (#5306)", 1755306},
    {"Quest Reward: Corruption (#5307)", 1755307},
    {"Quest Reward: The Sleeper Has Awakened (#5321)", 1755321},
    {"Quest Reward: The Last Barov (#5342)", 1755342},
    {"Quest Reward: The Last Barov (#5344)", 1755344},
    {"Quest Reward: Kirtonos the Herald (#5384)", 1755384},
    {"Quest Reward: The Remains of Trey Lightforge (#5385)", 1755385},
    {"Quest Reward: Catch of the Day (#5386)", 1755386},
    {"Quest Reward: Argent Dawn Commission (#5401)", 1755401},
    {"Quest Reward: Minion's Scourgestones (#5402)", 1755402},
    {"Quest Reward: Invader's Scourgestones (#5403)", 1755403},
    {"Quest Reward: Corruptor's Scourgestones (#5404)", 1755404},
    {"Quest Reward: Argent Dawn Commission (#5405)", 1755405},
    {"Quest Reward: Corruptor's Scourgestones (#5406)", 1755406},
    {"Quest Reward: Invader's Scourgestones (#5407)", 1755407},
    {"Quest Reward: Minion's Scourgestones (#5408)", 1755408},
    {"Quest Reward: Fish in a Bucket (#5421)", 1755421},
    {"Quest Reward: The Lich, Ras Frostwhisper (#5466)", 1755466},
    {"Quest Reward: Bone Collector (#5501)", 1755501},
    {"Quest Reward: A Warden of the Horde (#5502)", 1755502},
    {"Quest Reward: Argent Dawn Commission (#5503)", 1755503},
    {"Quest Reward: The Key to Scholomance (#5505)", 1755505},
    {"Quest Reward: Corruptor's Scourgestones (#5508)", 1755508},
    {"Quest Reward: Invader's Scourgestones (#5509)", 1755509},
    {"Quest Reward: Minion's Scourgestones (#5510)", 1755510},
    {"Quest Reward: The Key to Scholomance (#5511)", 1755511},
    {"Quest Reward: Chromatic Mantle of the Dawn (#5517)", 1755517},
    {"Quest Reward: The Gordok Ogre Suit (#5518)", 1755518},
    {"Quest Reward: The Gordok Ogre Suit (#5519)", 1755519},
    {"Quest Reward: Chromatic Mantle of the Dawn (#5521)", 1755521},
    {"Quest Reward: Chromatic Mantle of the Dawn (#5524)", 1755524},
    {"Quest Reward: Shards of the Felvine (#5526)", 1755526},
    {"Quest Reward: <NYI> <TXT> Necklace of the Dawn (#5530)", 1755530},
    {"Quest Reward: <NYI> <TXT> Ring of the Dawn (#5532)", 1755532},
    {"Quest Reward: Kodo Roundup (#5561)", 1755561},
    {"Quest Reward: Portals of the Legion (#5581)", 1755581},
    {"Quest Reward: Garments of the Moon (#5621)", 1755621},
    {"Quest Reward: Garments of the Light (#5624)", 1755624},
    {"Quest Reward: Garments of the Light (#5625)", 1755625},
    {"Quest Reward: Garments of Spirituality (#5648)", 1755648},
    {"Quest Reward: Garments of Darkness (#5650)", 1755650},
    {"Quest Reward: The Battle of Darrowshire (#5721)", 1755721},
    {"Quest Reward: Returning the Lost Satchel (#5724)", 1755724},
    {"Quest Reward: The Power to Destroy... (#5725)", 1755725},
    {"Quest Reward: Hidden Enemies (#5730)", 1755730},
    {"Quest Reward: Welcome! (#5805)", 1755805},
    {"Quest Reward: Bodyguard for Hire (#5821)", 1755821},
    {"Quest Reward: Welcome! (#5841)", 1755841},
    {"Quest Reward: Welcome! (#5842)", 1755842},
    {"Quest Reward: Welcome! (#5843)", 1755843},
    {"Quest Reward: Welcome! (#5844)", 1755844},
    {"Quest Reward: Welcome! (#5847)", 1755847},
    {"Quest Reward: The Dunemaul Compound (#5863)", 1755863},
    {"Quest Reward: Salve via Hunting (#5882)", 1755882},
    {"Quest Reward: Salve via Mining (#5883)", 1755883},
    {"Quest Reward: Salve via Gathering (#5884)", 1755884},
    {"Quest Reward: Salve via Skinning (#5885)", 1755885},
    {"Quest Reward: Salve via Disenchanting (#5886)", 1755886},
    {"Quest Reward: Salve via Hunting (#5887)", 1755887},
    {"Quest Reward: Salve via Mining (#5888)", 1755888},
    {"Quest Reward: Salve via Gathering (#5889)", 1755889},
    {"Quest Reward: Salve via Skinning (#5890)", 1755890},
    {"Quest Reward: Salve via Disenchanting (#5891)", 1755891},
    {"Quest Reward: Hidden Treasures (#5942)", 1755942},
    {"Quest Reward: Gizelton Caravan (#5943)", 1755943},
    {"Quest Reward: In Dreams (#5944)", 1755944},
    {"Quest Reward: Hameya's Plea (#6024)", 1756024},
    {"Quest Reward: Book of the Ancients (#6027)", 1756027},
    {"Quest Reward: Runecloth (#6031)", 1756031},
    {"Quest Reward: When Smokey Sings, I Get Violent (#6041)", 1756041},
    {"Quest Reward: Curing the Sick (#6124)", 1756124},
    {"Quest Reward: Curing the Sick (#6129)", 1756129},
    {"Quest Reward: Ghost-o-plasm Round Up (#6134)", 1756134},
    {"Quest Reward: Duskwing, Oh How I Hate Thee... (#6135)", 1756135},
    {"Quest Reward: The Corpulent One (#6136)", 1756136},
    {"Quest Reward: Clam Bait (#6142)", 1756142},
    {"Quest Reward: The Scarlet Oracle, Demetria (#6148)", 1756148},
    {"Quest Reward: Claim Rackmore's Treasure! (#6161)", 1756161},
    {"Quest Reward: Ramstein (#6163)", 1756163},
    {"Quest Reward: Order Must Be Restored (#6187)", 1756187},
    {"Quest Reward: Bloodfury Bloodline (#6283)", 1756283},
    {"Quest Reward: Arachnophobia (#6284)", 1756284},
    {"Quest Reward: New Life (#6381)", 1756381},
    {"Quest Reward: Earthen Arise (#6481)", 1756481},
    {"Quest Reward: Drakefire Amulet (#6502)", 1756502},
    {"Quest Reward: The Lost Pages (#6504)", 1756504},
    {"Quest Reward: An Unholy Alliance (#6521)", 1756521},
    {"Quest Reward: Torek's Assault (#6544)", 1756544},
    {"Quest Reward: Warsong Runner Update (#6545)", 1756545},
    {"Quest Reward: Warsong Outrider Update (#6546)", 1756546},
    {"Quest Reward: Warsong Scout Update (#6547)", 1756547},
    {"Quest Reward: Blackfathom Villainy (#6561)", 1756561},
    {"Quest Reward: Allegiance to the Old Gods (#6565)", 1756565},
    {"Quest Reward: Warsong Supplies (#6571)", 1756571},
    {"Quest Reward: Warsong Saw Blades (#6581)", 1756581},
    {"Quest Reward: Blood of the Black Dragon Champion (#6602)", 1756602},
    {"Quest Reward: Nat Pagle, Angler Extreme (#6607)", 1756607},
    {"Quest Reward: King of the Foulweald (#6621)", 1756621},
    {"Quest Reward: Triage (#6622)", 1756622},
    {"Quest Reward: Triage (#6624)", 1756624},
    {"Quest Reward: Vorsha the Lasher (#6641)", 1756641},
    {"Quest Reward: Me Brother, Nipsy (#6662)", 1756662},
    {"Quest Reward: Uncovering Past Secrets (#6845)", 1756845},
    {"Quest Reward: Zinfizzlex's Portable Shredder Unit (#6861)", 1756861},
    {"Quest Reward: Zinfizzlex's Portable Shredder Unit (#6862)", 1756862},
    {"Quest Reward: Baron Aquanis (#6922)", 1756922},
    {"Quest Reward: Treats for Great-father Winter (#6962)", 1756962},
    {"Quest Reward: A Smokywood Pastures' Thank You! (#6984)", 1756984},
    {"Quest Reward: Zapped Giants (#7003)", 1757003},
    {"Quest Reward: Treats for Greatfather Winter (#7025)", 1757025},
    {"Quest Reward: Twisted Evils (#7028)", 1757028},
    {"Quest Reward: Vyletongue Corruption (#7029)", 1757029},
    {"Quest Reward: Vyletongue Corruption (#7041)", 1757041},
    {"Quest Reward: A Smokywood Pastures' Thank You! (#7045)", 1757045},
    {"Quest Reward: The Scepter of Celebras (#7046)", 1757046},
    {"Quest Reward: Corruption of Earth and Seed (#7064)", 1757064},
    {"Quest Reward: Corruption of Earth and Seed (#7065)", 1757065},
    {"Quest Reward: The Pariah's Instructions (#7067)", 1757067},
    {"Quest Reward: Shadowshard Fragments (#7068)", 1757068},
    {"Quest Reward: Shadowshard Fragments (#7070)", 1757070},
    {"Quest Reward: Proving Grounds (#7161)", 1757161},
    {"Quest Reward: Proving Grounds (#7162)", 1757162},
    {"Quest Reward: Rise and Be Recognized (#7163)", 1757163},
    {"Quest Reward: Honored Amongst the Clan (#7164)", 1757164},
    {"Quest Reward: Earned Reverence (#7165)", 1757165},
    {"Quest Reward: Legendary Heroes (#7166)", 1757166},
    {"Quest Reward: The Eye of Command (#7167)", 1757167},
    {"Quest Reward: Rise and Be Recognized (#7168)", 1757168},
    {"Quest Reward: Honored Amongst the Guard (#7169)", 1757169},
    {"Quest Reward: Earned Reverence (#7170)", 1757170},
    {"Quest Reward: Legendary Heroes (#7171)", 1757171},
    {"Quest Reward: The Eye of Command (#7172)", 1757172},
    {"Quest Reward: The Legend of Korrak (#7181)", 1757181},
    {"Quest Reward: The Last Element (#7201)", 1757201},
    {"Quest Reward: Korrak the Bloodrager (#7202)", 1757202},
    {"Quest Reward: Soothing Turtle Bisque (#7321)", 1757321},
    {"Quest Reward: A Fair Trade (#7341)", 1757341},
    {"Quest Reward: Arrows Are For Sissies (#7342)", 1757342},
    {"Quest Reward: The Return of Korrak (#7381)", 1757381},
    {"Quest Reward: Korrak the Everliving (#7382)", 1757382},
    {"Quest Reward: Pusillin and the Elder Azj'Tordin (#7441)", 1757441},
    {"Quest Reward: The Treasure of the Shen'dralar (#7462)", 1757462},
    {"Quest Reward: Libram of Rapidity (#7483)", 1757483},
    {"Quest Reward: Libram of Focus (#7484)", 1757484},
    {"Quest Reward: Libram of Protection (#7485)", 1757485},
    {"Quest Reward: A Hero's Reward (#7486)", 1757486},
    {"Quest Reward: Lethtendris's Web (#7488)", 1757488},
    {"Quest Reward: Lethtendris's Web (#7489)", 1757489},
    {"Quest Reward: For All To See (#7491)", 1757491},
    {"Quest Reward: Celebrating Good Times (#7496)", 1757496},
    {"Quest Reward: Garona: A Study on Stealth and Treachery (#7498)", 1757498},
    {"Quest Reward: Codex of Defense (#7499)", 1757499},
    {"Quest Reward: The Arcanist's Cookbook (#7500)", 1757500},
    {"Quest Reward: The Light and How To Swing It (#7501)", 1757501},
    {"Quest Reward: Harnessing Shadows (#7502)", 1757502},
    {"Quest Reward: The Greatest Race of Hunters (#7503)", 1757503},
    {"Quest Reward: Holy Bologna: What the Light Won't Tell You (#7504)", 1757504},
    {"Quest Reward: Frost Shock and You (#7505)", 1757505},
    {"Quest Reward: The Emerald Dream... (#7506)", 1757506},
    {"Quest Reward: The Forging of Quel'Serrar (#7509)", 1757509},
    {"Quest Reward: Service to the Horde (#7541)", 1757541},
    {"Quest Reward: Rise,Thunderfury! (#7561)", 1757561},
    {"Quest Reward: Suppression (#7583)", 1757583},
    {"Quest Reward: Kroshius' Infernal Core (#7603)", 1757603},
    {"Quest Reward: A Binding Contract (#7604)", 1757604},
    {"Quest Reward: The Balance of Light and Shadow (#7622)", 1757622},
    {"Quest Reward: Ancient Sinew Wrapped Lamina (#7634)", 1757634},
    {"Quest Reward: A Proper String (#7635)", 1757635},
    {"Quest Reward: Stave of the Ancients (#7636)", 1757636},
    {"Quest Reward: Manna-Enriched Horse Feed (#7645)", 1757645},
    {"Quest Reward: Enchanted Thorium Platemail: Volume I (#7649)", 1757649},
    {"Quest Reward: Enchanted Thorium Platemail: Volume II (#7650)", 1757650},
    {"Quest Reward: Enchanted Thorium Platemail: Volume III (#7651)", 1757651},
    {"Quest Reward: Imperial Plate Belt (#7653)", 1757653},
    {"Quest Reward: Imperial Plate Boots (#7654)", 1757654},
    {"Quest Reward: Imperial Plate Bracer (#7655)", 1757655},
    {"Quest Reward: Imperial Plate Chest (#7656)", 1757656},
    {"Quest Reward: Imperial Plate Helm (#7657)", 1757657},
    {"Quest Reward: Imperial Plate Leggings (#7658)", 1757658},
    {"Quest Reward: Imperial Plate Shoulders (#7659)", 1757659},
    {"Quest Reward: Wolf Swapping - Arctic Wolf (#7660)", 1757660},
    {"Quest Reward: Wolf Swapping - Red Wolf (#7661)", 1757661},
    {"Quest Reward: New Kodo - Teal (#7662)", 1757662},
    {"Quest Reward: New Kodo - Green (#7663)", 1757663},
    {"Quest Reward: Ivory Raptor Replacement (#7664)", 1757664},
    {"Quest Reward: Red Raptor Replacement (#7665)", 1757665},
    {"Quest Reward: Again Into the Great Ossuary (#7666)", 1757666},
    {"Quest Reward: The Darkreaver Menace (#7668)", 1757668},
    {"Quest Reward: Again Into the Great Ossuary (#7669)", 1757669},
    {"Quest Reward: Frostsaber Replacement (#7671)", 1757671},
    {"Quest Reward: Nightsaber Replacement (#7672)", 1757672},
    {"Quest Reward: Frost Ram Exchange (#7673)", 1757673},
    {"Quest Reward: Black Ram Exchange (#7674)", 1757674},
    {"Quest Reward: Icy Blue Mechanostrider Replacement (#7675)", 1757675},
    {"Quest Reward: White Mechanostrider Replacement (#7676)", 1757676},
    {"Quest Reward: White Stallion Exchange (#7677)", 1757677},
    {"Quest Reward: Palomino Exchange (#7678)", 1757678},
    {"Quest Reward: WANTED: Overseer Maltorius (#7701)", 1757701},
    {"Quest Reward: Kill 'Em With Sleep Deprivation (#7702)", 1757702},
    {"Quest Reward: Unfinished Gordok Business (#7703)", 1757703},
    {"Quest Reward: Look at the Size of It! (#7704)", 1757704},
    {"Quest Reward: Fuel for the Zapping (#7721)", 1757721},
    {"Quest Reward: Curse These Fat Fingers (#7723)", 1757723},
    {"Quest Reward: Fiery Menace! (#7724)", 1757724},
    {"Quest Reward: Incendosaurs? Whateverosaur is More Like It (#7727)", 1757727},
    {"Quest Reward: STOLEN: Smithing Tuyere and Lookout's Spyglass (#7728)", 1757728},
    {"Quest Reward: Zukk'ash Report (#7732)", 1757732},
    {"Quest Reward: Improved Quality (#7733)", 1757733},
    {"Quest Reward: Improved Quality (#7734)", 1757734},
    {"Quest Reward: Praise from the Emerald Circle <NYI> <TXT> (#7741)", 1757741},
    {"Quest Reward: The Lord of Blackrock (#7782)", 1757782},
    {"Quest Reward: The Lord of Blackrock (#7784)", 1757784},
    {"Quest Reward: Rise, Thunderfury! (#7787)", 1757787},
    {"Quest Reward: Snapjaws, Mon! (#7815)", 1757815},
    {"Quest Reward: Arena Grandmaster (#7838)", 1757838},
    {"Quest Reward: Lard Lost His Lunch (#7840)", 1757840},
    {"Quest Reward: The Final Message to the Wildhammer (#7843)", 1757843},
    {"Quest Reward: Return to Primal Torntusk (#7847)", 1757847},
    {"Quest Reward: Separation Anxiety (#7849)", 1757849},
    {"Quest Reward: Dark Vessels (#7850)", 1757850},
    {"Quest Reward: Wanted: Vile Priestess Hexx and Her Minions (#7861)", 1757861},
    {"Quest Reward: Job Opening: Guard Captain of Revantusk Village (#7862)", 1757862},
    {"Quest Reward: Sentinel Basic Care Package (#7863)", 1757863},
    {"Quest Reward: Sentinel Standard Care Package (#7864)", 1757864},
    {"Quest Reward: Sentinel Advanced Care Package (#7865)", 1757865},
    {"Quest Reward: Outrider Basic Care Package (#7866)", 1757866},
    {"Quest Reward: Outrider Standard Care Package (#7867)", 1757867},
    {"Quest Reward: Outrider Advanced Care Package (#7868)", 1757868},
    {"Quest Reward: The Treasure of the Shen'dralar (#7877)", 1757877},
    {"Quest Reward: Carnival Boots (#7881)", 1757881},
    {"Quest Reward: Carnival Jerkins (#7882)", 1757882},
    {"Quest Reward: The World's Largest Gnome! (#7883)", 1757883},
    {"Quest Reward: Crocolisk Boy and the Bearded Murloc (#7884)", 1757884},
    {"Quest Reward: Armor Kits (#7885)", 1757885},
    {"Quest Reward: Coarse Weightstone (#7889)", 1757889},
    {"Quest Reward: Heavy Grinding Stone (#7890)", 1757890},
    {"Quest Reward: Green Iron Bracers (#7891)", 1757891},
    {"Quest Reward: Big Black Mace (#7892)", 1757892},
    {"Quest Reward: Rituals of Strength (#7893)", 1757893},
    {"Quest Reward: Copper Modulator (#7894)", 1757894},
    {"Quest Reward: Whirring Bronze Gizmo (#7895)", 1757895},
    {"Quest Reward: Green Fireworks (#7896)", 1757896},
    {"Quest Reward: Mechanical Repair Kits (#7897)", 1757897},
    {"Quest Reward: Thorium Widget (#7898)", 1757898},
    {"Quest Reward: Small Furry Paws (#7899)", 1757899},
    {"Quest Reward: Torn Bear Pelts (#7900)", 1757900},
    {"Quest Reward: Soft Bushy Tails (#7901)", 1757901},
    {"Quest Reward: Vibrant Plumes (#7902)", 1757902},
    {"Quest Reward: Evil Bat Eyes (#7903)", 1757903},
    {"Quest Reward: The Darkmoon Faire (#7905)", 1757905},
    {"Quest Reward: Darkmoon Beast Deck (#7907)", 1757907},
    {"Quest Reward: The Darkmoon Faire (#7926)", 1757926},
    {"Quest Reward: Darkmoon Portals Deck (#7927)", 1757927},
    {"Quest Reward: Darkmoon Warlords Deck (#7928)", 1757928},
    {"Quest Reward: Darkmoon Elementals Deck (#7929)", 1757929},
    {"Quest Reward: 5 Tickets - Darkmoon Flower (#7930)", 1757930},
    {"Quest Reward: 5 Tickets - Minor Darkmoon Prize (#7931)", 1757931},
    {"Quest Reward: 12 Tickets - Lesser Darkmoon Prize (#7932)", 1757932},
    {"Quest Reward: 40 Tickets - Greater Darkmoon Prize (#7933)", 1757933},
    {"Quest Reward: 50 Tickets - Darkmoon Storage Box (#7934)", 1757934},
    {"Quest Reward: 10 Tickets - Last Month's Mutton (#7935)", 1757935},
    {"Quest Reward: 50 Tickets - Last Year's Mutton (#7936)", 1757936},
    {"Quest Reward: Your Fortune Awaits You... (#7937)", 1757937},
    {"Quest Reward: Your Fortune Awaits You... (#7938)", 1757938},
    {"Quest Reward: More Dense Grinding Stones (#7939)", 1757939},
    {"Quest Reward: 1200 Tickets - Orb of the Darkmoon (#7940)", 1757940},
    {"Quest Reward: More Armor Kits (#7941)", 1757941},
    {"Quest Reward: More Thorium Widgets (#7942)", 1757942},
    {"Quest Reward: More Bat Eyes (#7943)", 1757943},
    {"Quest Reward: Your Fortune Awaits You... (#7944)", 1757944},
    {"Quest Reward: Your Fortune Awaits You... (#7945)", 1757945},
    {"Quest Reward: Spawn of Jubjub (#7946)", 1757946},
    {"Quest Reward: Wabbit Pelts (#7962)", 1757962},
    {"Quest Reward: 1200 Tickets - Amulet of the Darkmoon (#7981)", 1757981},
    {"Quest Reward: Redeem iCoke Prize Voucher (#8021)", 1758021},
    {"Quest Reward: Redeem iCoke Prize Voucher (#8022)", 1758022},
    {"Quest Reward: Redeem iCoke Prize Voucher (#8023)", 1758023},
    {"Quest Reward: Redeem iCoke Prize Voucher (#8024)", 1758024},
    {"Quest Reward: Redeem iCoke Prize Voucher (#8025)", 1758025},
    {"Quest Reward: Redeem iCoke Prize Voucher (#8026)", 1758026},
    {"Quest Reward: Strength of Mount Mugamba (#8041)", 1758041},
    {"Quest Reward: Strength of Mount Mugamba (#8042)", 1758042},
    {"Quest Reward: Strength of Mount Mugamba (#8043)", 1758043},
    {"Quest Reward: The Rage of Mugamba (#8044)", 1758044},
    {"Quest Reward: The Heathen's Brand (#8045)", 1758045},
    {"Quest Reward: The Heathen's Brand (#8046)", 1758046},
    {"Quest Reward: The Heathen's Brand (#8047)", 1758047},
    {"Quest Reward: The Hero's Brand (#8048)", 1758048},
    {"Quest Reward: The Eye of Zuldazar (#8049)", 1758049},
    {"Quest Reward: The Eye of Zuldazar (#8050)", 1758050},
    {"Quest Reward: The Eye of Zuldazar (#8051)", 1758051},
    {"Quest Reward: The All-Seeing Eye of Zuldazar (#8052)", 1758052},
    {"Quest Reward: Paragons of Power: The Freethinker's Armguards (#8053)", 1758053},
    {"Quest Reward: Paragons of Power: The Freethinker's Belt (#8054)", 1758054},
    {"Quest Reward: Paragons of Power: The Freethinker's Breastplate (#8055)", 1758055},
    {"Quest Reward: Paragons of Power: The Augur's Bracers (#8056)", 1758056},
    {"Quest Reward: Paragons of Power: The Haruspex's Bracers (#8057)", 1758057},
    {"Quest Reward: Paragons of Power: The Vindicator's Armguards (#8058)", 1758058},
    {"Quest Reward: Paragons of Power: The Demoniac's Wraps (#8059)", 1758059},
    {"Quest Reward: Paragons of Power: The Illusionist's Wraps (#8060)", 1758060},
    {"Quest Reward: Paragons of Power: The Confessor's Wraps (#8061)", 1758061},
    {"Quest Reward: Paragons of Power: The Predator's Bracers (#8062)", 1758062},
    {"Quest Reward: Paragons of Power: The Madcap's Bracers (#8063)", 1758063},
    {"Quest Reward: Paragons of Power: The Haruspex's Belt (#8064)", 1758064},
    {"Quest Reward: Paragons of Power: The Haruspex's Tunic (#8065)", 1758065},
    {"Quest Reward: Paragons of Power: The Predator's Belt (#8066)", 1758066},
    {"Quest Reward: Paragons of Power: The Predator's Mantle (#8067)", 1758067},
    {"Quest Reward: Paragons of Power: The Illusionist's Mantle (#8068)", 1758068},
    {"Quest Reward: Paragons of Power: The Illusionist's Robes (#8069)", 1758069},
    {"Quest Reward: Paragons of Power: The Confessor's Bindings (#8070)", 1758070},
    {"Quest Reward: Paragons of Power: The Confessor's Mantle (#8071)", 1758071},
    {"Quest Reward: Paragons of Power: The Madcap's Mantle (#8072)", 1758072},
    {"Quest Reward: Paragons of Power: The Madcap's Tunic (#8073)", 1758073},
    {"Quest Reward: Paragons of Power: The Augur's Belt (#8074)", 1758074},
    {"Quest Reward: Paragons of Power: The Augur's Hauberk (#8075)", 1758075},
    {"Quest Reward: Paragons of Power: The Demoniac's Mantle (#8076)", 1758076},
    {"Quest Reward: Paragons of Power: The Demoniac's Robes (#8077)", 1758077},
    {"Quest Reward: Paragons of Power: The Vindicator's Belt (#8078)", 1758078},
    {"Quest Reward: Paragons of Power: The Vindicator's Breastplate (#8079)", 1758079},
    {"Quest Reward: The Pebble of Kajaro (#8101)", 1758101},
    {"Quest Reward: The Pebble of Kajaro (#8102)", 1758102},
    {"Quest Reward: The Pebble of Kajaro (#8103)", 1758103},
    {"Quest Reward: The Jewel of Kajaro (#8104)", 1758104},
    {"Quest Reward: Kezan's Taint (#8106)", 1758106},
    {"Quest Reward: Kezan's Taint (#8107)", 1758107},
    {"Quest Reward: Kezan's Taint (#8108)", 1758108},
    {"Quest Reward: Kezan's Unstoppable Taint (#8109)", 1758109},
    {"Quest Reward: Enchanted South Seas Kelp (#8110)", 1758110},
    {"Quest Reward: Enchanted South Seas Kelp (#8111)", 1758111},
    {"Quest Reward: Enchanted South Seas Kelp (#8112)", 1758112},
    {"Quest Reward: Pristine Enchanted South Seas Kelp (#8113)", 1758113},
    {"Quest Reward: Control Five Bases (#8115)", 1758115},
    {"Quest Reward: Vision of Voodress (#8116)", 1758116},
    {"Quest Reward: Vision of Voodress (#8117)", 1758117},
    {"Quest Reward: Vision of Voodress (#8118)", 1758118},
    {"Quest Reward: The Unmarred Vision of Voodress (#8119)", 1758119},
    {"Quest Reward: Take Five Bases (#8122)", 1758122},
    {"Quest Reward: Zandalarian Shadow Talisman (#8141)", 1758141},
    {"Quest Reward: Zandalarian Shadow Talisman (#8142)", 1758142},
    {"Quest Reward: Zandalarian Shadow Talisman (#8143)", 1758143},
    {"Quest Reward: Zandalarian Shadow Mastery Talisman (#8144)", 1758144},
    {"Quest Reward: The Maelstrom's Tendril (#8145)", 1758145},
    {"Quest Reward: The Maelstrom's Tendril (#8146)", 1758146},
    {"Quest Reward: The Maelstrom's Tendril (#8147)", 1758147},
    {"Quest Reward: Maelstrom's Wrath (#8148)", 1758148},
    {"Quest Reward: Honoring a Hero (#8149)", 1758149},
    {"Quest Reward: Honoring a Hero (#8150)", 1758150},
    {"Quest Reward: Confront Yeh'kinya (#8181)", 1758181},
    {"Quest Reward: The Heart of Hakkar (#8183)", 1758183},
    {"Quest Reward: Presence of Might (#8184)", 1758184},
    {"Quest Reward: Syncretist's Sigil (#8185)", 1758185},
    {"Quest Reward: Death's Embrace (#8186)", 1758186},
    {"Quest Reward: Falcon's Call (#8187)", 1758187},
    {"Quest Reward: Vodouisant's Vigilant Embrace (#8188)", 1758188},
    {"Quest Reward: Presence of Sight (#8189)", 1758189},
    {"Quest Reward: Hoodoo Hex (#8190)", 1758190},
    {"Quest Reward: Prophetic Aura (#8191)", 1758191},
    {"Quest Reward: Animist's Caress (#8192)", 1758192},
    {"Quest Reward: Master Angler (#8193)", 1758193},
    {"Quest Reward: Zulian, Razzashi, and Hakkari Coins (#8195)", 1758195},
    {"Quest Reward: Essence Mangoes (#8196)", 1758196},
    {"Quest Reward: A Collection of Heads (#8201)", 1758201},
    {"Quest Reward: Rare Fish - Keefer's Angelfish (#8221)", 1758221},
    {"Quest Reward: Glowing Scorpid Blood (#8222)", 1758222},
    {"Quest Reward: More Glowing Scorpid Blood (#8223)", 1758223},
    {"Quest Reward: Rare Fish - Dezian Queenfish (#8224)", 1758224},
    {"Quest Reward: Rare Fish - Brownell's Blue Striped Racer (#8225)", 1758225},
    {"Quest Reward: Rare Fish - Pale Ghoulfish (#8226)", 1758226},
    {"Quest Reward: Could I get a Fishing Flier? (#8228)", 1758228},
    {"Quest Reward: Could I get a Fishing Flier? (#8229)", 1758229},
    {"Quest Reward: The Green Drake (#8232)", 1758232},
    {"Quest Reward: The Azure Key (#8236)", 1758236},
    {"Quest Reward: Gurubashi, Vilebranch, and Witherbark Coins (#8238)", 1758238},
    {"Quest Reward: Sandfury, Skullsplitter, and Bloodscalp Coins (#8239)", 1758239},
    {"Quest Reward: A Bijou for Zanza (#8240)", 1758240},
    {"Quest Reward: Zanza's Potent Potables (#8243)", 1758243},
    {"Quest Reward: Signets of the Zandalar (#8246)", 1758246},
    {"Quest Reward: Junkboxes Needed (#8249)", 1758249},
    {"Quest Reward: Destroy Morphaz (#8253)", 1758253},
    {"Quest Reward: Blood of Morphaz (#8257)", 1758257},
    {"Quest Reward: The Darkreaver Menace (#8258)", 1758258},
    {"Quest Reward: A More Fitting Reward (#8259)", 1758259},
    {"Quest Reward: Arathor Basic Care Package (#8260)", 1758260},
    {"Quest Reward: Arathor Standard Care Package (#8261)", 1758261},
    {"Quest Reward: Arathor Advanced Care Package (#8262)", 1758262},
    {"Quest Reward: Defiler's Basic Care Package (#8263)", 1758263},
    {"Quest Reward: Defiler's Standard Care Package (#8264)", 1758264},
    {"Quest Reward: Defiler's Advanced Care Package (#8265)", 1758265},
    {"Quest Reward: Hero of the Stormpike (#8271)", 1758271},
    {"Quest Reward: Hero of the Frostwolf (#8272)", 1758272},
    {"Quest Reward: Oran's Gratitude (#8273)", 1758273},
    {"Quest Reward: Noggle's Last Hope (#8278)", 1758278},
    {"Quest Reward: Noggle's Lost Satchel (#8282)", 1758282},
    {"Quest Reward: Wanted - Deathclasp, Terror of the Sands (#8283)", 1758283},
    {"Quest Reward: The Path of the Righteous (#8301)", 1758301},
    {"Quest Reward: The Hand of the Righteous (#8302)", 1758302},
    {"Quest Reward: Into The Maw of Madness (#8306)", 1758306},
    {"Quest Reward: Brann Bronzebeard's Lost Letter (#8308)", 1758308},
    {"Quest Reward: Hallow's End Treats for Jesper! (#8311)", 1758311},
    {"Quest Reward: Hallow's End Treats for Spoops! (#8312)", 1758312},
    {"Quest Reward: Armaments of War (#8316)", 1758316},
    {"Quest Reward: Vyral the Vile (#8321)", 1758321},
    {"Quest Reward: Reclaiming Sunstrider Isle (#8325)", 1758325},
    {"Quest Reward: Unfortunate Measures (#8326)", 1758326},
    {"Quest Reward: Solanian's Belongings (#8330)", 1758330},
    {"Quest Reward: Dukes of the Council (#8332)", 1758332},
    {"Quest Reward: Medallion of Station (#8333)", 1758333},
    {"Quest Reward: Aggression (#8334)", 1758334},
    {"Quest Reward: Felendren the Banished (#8335)", 1758335},
    {"Quest Reward: A Fistful of Slivers (#8336)", 1758336},
    {"Quest Reward: Twilight Signet Ring <NYI> <TXT> (#8340)", 1758340},
    {"Quest Reward: Lords of the Council (#8341)", 1758341},
    {"Quest Reward: Twilight Ring of Lordship (#8342)", 1758342},
    {"Quest Reward: Thirst Unending (#8346)", 1758346},
    {"Quest Reward: Signet of the Dukes (#8348)", 1758348},
    {"Quest Reward: Completing the Delivery (#8350)", 1758350},
    {"Quest Reward: Scepter of the Council (#8352)", 1758352},
    {"Quest Reward: Chicken Clucking for a Mint (#8353)", 1758353},
    {"Quest Reward: Chicken Clucking for a Mint (#8354)", 1758354},
    {"Quest Reward: Incoming Gumdrop (#8355)", 1758355},
    {"Quest Reward: Flexing for Nougat (#8356)", 1758356},
    {"Quest Reward: Dancing for Marzipan (#8357)", 1758357},
    {"Quest Reward: Incoming Gumdrop (#8358)", 1758358},
    {"Quest Reward: Flexing for Nougat (#8359)", 1758359},
    {"Quest Reward: Dancing for Marzipan (#8360)", 1758360},
    {"Quest Reward: Abyssal Contacts (#8361)", 1758361},
    {"Quest Reward: Abyssal Crests (#8362)", 1758362},
    {"Quest Reward: Abyssal Signets (#8363)", 1758363},
    {"Quest Reward: Abyssal Scepters (#8364)", 1758364},
    {"Quest Reward: Southsea Shakedown (#8366)", 1758366},
    {"Quest Reward: The Power of Pine (#8373)", 1758373},
    {"Quest Reward: Armaments of War (#8376)", 1758376},
    {"Quest Reward: Armaments of War (#8377)", 1758377},
    {"Quest Reward: Armaments of War (#8378)", 1758378},
    {"Quest Reward: Armaments of War (#8379)", 1758379},
    {"Quest Reward: Armaments of War (#8380)", 1758380},
    {"Quest Reward: Armaments of War (#8381)", 1758381},
    {"Quest Reward: Armaments of War (#8382)", 1758382},
    {"Quest Reward: Ruined Kegs (#8409)", 1758409},
    {"Quest Reward: Da Voodoo (#8413)", 1758413},
    {"Quest Reward: Forging the Mightstone (#8418)", 1758418},
    {"Quest Reward: Trolls of a Feather (#8422)", 1758422},
    {"Quest Reward: Voodoo Feathers (#8425)", 1758425},
    {"Quest Reward: Waking Legends (#8447)", 1758447},
    {"Quest Reward: <TXT> Mystery Reward (#8448)", 1758448},
    {"Quest Reward: <TXT> Mystery Reward (#8449)", 1758449},
    {"Quest Reward: <TXT> Mystery Reward (#8450)", 1758450},
    {"Quest Reward: <TXT> Mystery Reward (#8451)", 1758451},
    {"Quest Reward: <TXT> Mystery Reward (#8452)", 1758452},
    {"Quest Reward: <TXT> Mystery Reward (#8453)", 1758453},
    {"Quest Reward: <TXT> Mystery Reward (#8454)", 1758454},
    {"Quest Reward: Timbermaw Ally (#8460)", 1758460},
    {"Quest Reward: Deadwood of the North (#8461)", 1758461},
    {"Quest Reward: Winterfall Activity (#8464)", 1758464},
    {"Quest Reward: Deadwood Ritual Totem (#8470)", 1758470},
    {"Quest Reward: Winterfall Ritual Totem (#8471)", 1758471},
    {"Quest Reward: Major Malfunction (#8472)", 1758472},
    {"Quest Reward: The Dead Scar (#8475)", 1758475},
    {"Quest Reward: The Spearcrafter's Hammer (#8477)", 1758477},
    {"Quest Reward: Zul'Marosh (#8479)", 1758479},
    {"Quest Reward: Lost Armaments (#8480)", 1758480},
    {"Quest Reward: The Root of All Evil (#8481)", 1758481},
    {"Quest Reward: The Dwarven Spy (#8483)", 1758483},
    {"Quest Reward: Arcane Instability (#8486)", 1758486},
    {"Quest Reward: Pelt Collection (#8491)", 1758491},
    {"Quest Reward: The Alliance Needs Copper Bars! (#8492)", 1758492},
    {"Quest Reward: The Alliance Needs More Copper Bars! (#8493)", 1758493},
    {"Quest Reward: The Alliance Needs Iron Bars! (#8494)", 1758494},
    {"Quest Reward: The Alliance Needs More Iron Bars! (#8495)", 1758495},
    {"Quest Reward: Bandages for the Field (#8496)", 1758496},
    {"Quest Reward: Desert Survival Kits (#8497)", 1758497},
    {"Quest Reward: Twilight Battle Orders (#8498)", 1758498},
    {"Quest Reward: The Alliance Needs Thorium Bars! (#8499)", 1758499},
    {"Quest Reward: The Alliance Needs More Thorium Bars! (#8500)", 1758500},
    {"Quest Reward: Target: Hive'Ashi Stingers (#8501)", 1758501},
    {"Quest Reward: Target: Hive'Ashi Workers (#8502)", 1758502},
    {"Quest Reward: The Alliance Needs Stranglekelp! (#8503)", 1758503},
    {"Quest Reward: The Alliance Needs More Stranglekelp! (#8504)", 1758504},
    {"Quest Reward: The Alliance Needs Purple Lotus! (#8505)", 1758505},
    {"Quest Reward: The Alliance Needs More Purple Lotus! (#8506)", 1758506},
    {"Quest Reward: Field Duty (#8507)", 1758507},
    {"Quest Reward: Field Duty Papers (#8508)", 1758508},
    {"Quest Reward: The Alliance Needs Arthas' Tears! (#8509)", 1758509},
    {"Quest Reward: The Alliance Needs More Arthas' Tears! (#8510)", 1758510},
    {"Quest Reward: The Alliance Needs Light Leather! (#8511)", 1758511},
    {"Quest Reward: The Alliance Needs More Light Leather! (#8512)", 1758512},
    {"Quest Reward: The Alliance Needs Medium Leather! (#8513)", 1758513},
    {"Quest Reward: The Alliance Needs More Medium Leather! (#8514)", 1758514},
    {"Quest Reward: The Alliance Needs Thick Leather! (#8515)", 1758515},
    {"Quest Reward: The Alliance Needs More Thick Leather! (#8516)", 1758516},
    {"Quest Reward: The Alliance Needs Linen Bandages! (#8517)", 1758517},
    {"Quest Reward: The Alliance Needs More Linen Bandages! (#8518)", 1758518},
    {"Quest Reward: The Alliance Needs Silk Bandages! (#8520)", 1758520},
    {"Quest Reward: The Alliance Needs More Silk Bandages! (#8521)", 1758521},
    {"Quest Reward: The Alliance Needs Runecloth Bandages! (#8522)", 1758522},
    {"Quest Reward: The Alliance Needs More Runecloth Bandages! (#8523)", 1758523},
    {"Quest Reward: The Alliance Needs Rainbow Fin Albacore! (#8524)", 1758524},
    {"Quest Reward: The Alliance Needs More Rainbow Fin Albacore! (#8525)", 1758525},
    {"Quest Reward: The Alliance Needs Roast Raptor! (#8526)", 1758526},
    {"Quest Reward: The Alliance Needs More Roast Raptor! (#8527)", 1758527},
    {"Quest Reward: The Alliance Needs Spotted Yellowtail! (#8528)", 1758528},
    {"Quest Reward: The Alliance Needs More Spotted Yellowtail! (#8529)", 1758529},
    {"Quest Reward: The Horde Needs Copper Bars! (#8532)", 1758532},
    {"Quest Reward: The Horde Needs More Copper Bars! (#8533)", 1758533},
    {"Quest Reward: Hive'Zora Scout Report (#8534)", 1758534},
    {"Quest Reward: Hoary Templar (#8535)", 1758535},
    {"Quest Reward: Earthen Templar (#8536)", 1758536},
    {"Quest Reward: Crimson Templar (#8537)", 1758537},
    {"Quest Reward: The Four Dukes (#8538)", 1758538},
    {"Quest Reward: Target: Hive'Zora Hive Sisters (#8539)", 1758539},
    {"Quest Reward: Boots for the Guard (#8540)", 1758540},
    {"Quest Reward: Grinding Stones for the Guard (#8541)", 1758541},
    {"Quest Reward: The Horde Needs Tin Bars! (#8542)", 1758542},
    {"Quest Reward: The Horde Needs More Tin Bars! (#8543)", 1758543},
    {"Quest Reward: Conqueror's Spaulders (#8544)", 1758544},
    {"Quest Reward: The Horde Needs Mithril Bars! (#8545)", 1758545},
    {"Quest Reward: The Horde Needs More Mithril Bars! (#8546)", 1758546},
    {"Quest Reward: Welcome! (#8547)", 1758547},
    {"Quest Reward: Volunteer's Battlegear (#8548)", 1758548},
    {"Quest Reward: The Horde Needs Peacebloom! (#8549)", 1758549},
    {"Quest Reward: The Horde Needs More Peacebloom! (#8550)", 1758550},
    {"Quest Reward: The Captain's Chest (#8551)", 1758551},
    {"Quest Reward: Facing Negolash (#8554)", 1758554},
    {"Quest Reward: Signet of Unyielding Strength (#8556)", 1758556},
    {"Quest Reward: Drape of Unyielding Strength (#8557)", 1758557},
    {"Quest Reward: Sickle of Unyielding Strength (#8558)", 1758558},
    {"Quest Reward: Conqueror's Greaves (#8559)", 1758559},
    {"Quest Reward: Conqueror's Legguards (#8560)", 1758560},
    {"Quest Reward: Conqueror's Crown (#8561)", 1758561},
    {"Quest Reward: Conqueror's Breastplate (#8562)", 1758562},
    {"Quest Reward: Past Victories in Arathi (#8565)", 1758565},
    {"Quest Reward: Past Victories in Arathi (#8566)", 1758566},
    {"Quest Reward: Past Victories in Warsong Gulch (#8567)", 1758567},
    {"Quest Reward: Past Victories in Warsong Gulch (#8568)", 1758568},
    {"Quest Reward: Past Efforts in Warsong Gulch (#8569)", 1758569},
    {"Quest Reward: Past Efforts in Warsong Gulch (#8570)", 1758570},
    {"Quest Reward: Veteran's Battlegear (#8572)", 1758572},
    {"Quest Reward: Champion's Battlegear (#8573)", 1758573},
    {"Quest Reward: Stalwart's Battlegear (#8574)", 1758574},
    {"Quest Reward: Scrying Goggles? No Problem! (#8578)", 1758578},
    {"Quest Reward: The Horde Needs Firebloom! (#8580)", 1758580},
    {"Quest Reward: The Horde Needs More Firebloom! (#8581)", 1758581},
    {"Quest Reward: The Horde Needs Purple Lotus! (#8582)", 1758582},
    {"Quest Reward: The Horde Needs More Purple Lotus! (#8583)", 1758583},
    {"Quest Reward: Dirge's Kickin' Chimaerok Chops (#8586)", 1758586},
    {"Quest Reward: The Horde Needs Heavy Leather! (#8588)", 1758588},
    {"Quest Reward: The Horde Needs More Heavy Leather! (#8589)", 1758589},
    {"Quest Reward: The Horde Needs Thick Leather! (#8590)", 1758590},
    {"Quest Reward: The Horde Needs More Thick Leather! (#8591)", 1758591},
    {"Quest Reward: Tiara of the Oracle (#8592)", 1758592},
    {"Quest Reward: Trousers of the Oracle (#8593)", 1758593},
    {"Quest Reward: Mantle of the Oracle (#8594)", 1758594},
    {"Quest Reward: Footwraps of the Oracle (#8596)", 1758596},
    {"Quest Reward: The Horde Needs Rugged Leather! (#8600)", 1758600},
    {"Quest Reward: The Horde Needs More Rugged Leather! (#8601)", 1758601},
    {"Quest Reward: Stormcaller's Pauldrons (#8602)", 1758602},
    {"Quest Reward: Vestments of the Oracle (#8603)", 1758603},
    {"Quest Reward: The Horde Needs Wool Bandages! (#8604)", 1758604},
    {"Quest Reward: The Horde Needs More Wool Bandages! (#8605)", 1758605},
    {"Quest Reward: The Horde Needs Mageweave Bandages! (#8607)", 1758607},
    {"Quest Reward: The Horde Needs More Mageweave Bandages! (#8608)", 1758608},
    {"Quest Reward: The Horde Needs Runecloth Bandages! (#8609)", 1758609},
    {"Quest Reward: The Horde Needs More Runecloth Bandages! (#8610)", 1758610},
    {"Quest Reward: The Horde Needs Lean Wolf Steaks! (#8611)", 1758611},
    {"Quest Reward: The Horde Needs More Lean Wolf Steaks! (#8612)", 1758612},
    {"Quest Reward: The Horde Needs Spotted Yellowtail! (#8613)", 1758613},
    {"Quest Reward: The Horde Needs More Spotted Yellowtail! (#8614)", 1758614},
    {"Quest Reward: The Horde Needs Baked Salmon! (#8615)", 1758615},
    {"Quest Reward: The Horde Needs More Baked Salmon! (#8616)", 1758616},
    {"Quest Reward: Morndeep the Elder (#8619)", 1758619},
    {"Quest Reward: The Only Prescription (#8620)", 1758620},
    {"Quest Reward: Stormcaller's Footguards (#8621)", 1758621},
    {"Quest Reward: Stormcaller's Hauberk (#8622)", 1758622},
    {"Quest Reward: Stormcaller's Diadem (#8623)", 1758623},
    {"Quest Reward: Stormcaller's Leggings (#8624)", 1758624},
    {"Quest Reward: Enigma Shoulderpads (#8625)", 1758625},
    {"Quest Reward: Striker's Footguards (#8626)", 1758626},
    {"Quest Reward: Avenger's Breastplate (#8627)", 1758627},
    {"Quest Reward: Avenger's Crown (#8628)", 1758628},
    {"Quest Reward: Avenger's Legguards (#8629)", 1758629},
    {"Quest Reward: Avenger's Pauldrons (#8630)", 1758630},
    {"Quest Reward: Enigma Leggings (#8631)", 1758631},
    {"Quest Reward: Enigma Circlet (#8632)", 1758632},
    {"Quest Reward: Enigma Robes (#8633)", 1758633},
    {"Quest Reward: Enigma Boots (#8634)", 1758634},
    {"Quest Reward: Splitrock the Elder (#8635)", 1758635},
    {"Quest Reward: Rumblerock the Elder (#8636)", 1758636},
    {"Quest Reward: Deathdealer's Boots (#8637)", 1758637},
    {"Quest Reward: Deathdealer's Vest (#8638)", 1758638},
    {"Quest Reward: Deathdealer's Helm (#8639)", 1758639},
    {"Quest Reward: Deathdealer's Leggings (#8640)", 1758640},
    {"Quest Reward: Deathdealer's Spaulders (#8641)", 1758641},
    {"Quest Reward: Silvervein the Elder (#8642)", 1758642},
    {"Quest Reward: Highpeak the Elder (#8643)", 1758643},
    {"Quest Reward: Stonefort the Elder (#8644)", 1758644},
    {"Quest Reward: Obsidian the Elder (#8645)", 1758645},
    {"Quest Reward: Hammershout the Elder (#8646)", 1758646},
    {"Quest Reward: Bellowrage the Elder (#8647)", 1758647},
    {"Quest Reward: Darkcore the Elder (#8648)", 1758648},
    {"Quest Reward: Stormbrow the Elder (#8649)", 1758649},
    {"Quest Reward: Snowcrown the Elder (#8650)", 1758650},
    {"Quest Reward: Ironband the Elder (#8651)", 1758651},
    {"Quest Reward: Graveborn the Elder (#8652)", 1758652},
    {"Quest Reward: Goldwell the Elder (#8653)", 1758653},
    {"Quest Reward: Primestone the Elder (#8654)", 1758654},
    {"Quest Reward: Avenger's Greaves (#8655)", 1758655},
    {"Quest Reward: Striker's Hauberk (#8656)", 1758656},
    {"Quest Reward: Striker's Diadem (#8657)", 1758657},
    {"Quest Reward: Striker's Leggings (#8658)", 1758658},
    {"Quest Reward: Striker's Pauldrons (#8659)", 1758659},
    {"Quest Reward: Doomcaller's Footwraps (#8660)", 1758660},
    {"Quest Reward: Doomcaller's Robes (#8661)", 1758661},
    {"Quest Reward: Doomcaller's Circlet (#8662)", 1758662},
    {"Quest Reward: Doomcaller's Trousers (#8663)", 1758663},
    {"Quest Reward: Doomcaller's Mantle (#8664)", 1758664},
    {"Quest Reward: Genesis Boots (#8665)", 1758665},
    {"Quest Reward: Genesis Vest (#8666)", 1758666},
    {"Quest Reward: Genesis Helm (#8667)", 1758667},
    {"Quest Reward: Genesis Trousers (#8668)", 1758668},
    {"Quest Reward: Genesis Shoulderpads (#8669)", 1758669},
    {"Quest Reward: Runetotem the Elder (#8670)", 1758670},
    {"Quest Reward: Ragetotem the Elder (#8671)", 1758671},
    {"Quest Reward: Stonespire the Elder (#8672)", 1758672},
    {"Quest Reward: Bloodhoof the Elder (#8673)", 1758673},
    {"Quest Reward: Winterhoof the Elder (#8674)", 1758674},
    {"Quest Reward: Skychaser the Elder (#8675)", 1758675},
    {"Quest Reward: Wildmane the Elder (#8676)", 1758676},
    {"Quest Reward: Darkhorn the Elder (#8677)", 1758677},
    {"Quest Reward: Wheathoof the Elder (#8678)", 1758678},
    {"Quest Reward: Grimtotem the Elder (#8679)", 1758679},
    {"Quest Reward: Windtotem the Elder (#8680)", 1758680},
    {"Quest Reward: Thunderhorn the Elder (#8681)", 1758681},
    {"Quest Reward: Skyseer the Elder (#8682)", 1758682},
    {"Quest Reward: Dawnstrider the Elder (#8683)", 1758683},
    {"Quest Reward: Dreamseer the Elder (#8684)", 1758684},
    {"Quest Reward: Mistwalker the Elder (#8685)", 1758685},
    {"Quest Reward: High Mountain the Elder (#8686)", 1758686},
    {"Quest Reward: Target: Hive'Zora Tunnelers (#8687)", 1758687},
    {"Quest Reward: Windrun the Elder (#8688)", 1758688},
    {"Quest Reward: Shroud of Infinite Wisdom (#8689)", 1758689},
    {"Quest Reward: Cloak of the Gathering Storm (#8690)", 1758690},
    {"Quest Reward: Drape of Vaulted Secrets (#8691)", 1758691},
    {"Quest Reward: Cloak of Unending Life (#8692)", 1758692},
    {"Quest Reward: Cloak of Veiled Shadows (#8693)", 1758693},
    {"Quest Reward: Shroud of Unspoken Names (#8694)", 1758694},
    {"Quest Reward: Cape of Eternal Justice (#8695)", 1758695},
    {"Quest Reward: Cloak of the Unseen Path (#8696)", 1758696},
    {"Quest Reward: Ring of Infinite Wisdom (#8697)", 1758697},
    {"Quest Reward: Ring of the Gathering Storm (#8698)", 1758698},
    {"Quest Reward: Band of Vaulted Secrets (#8699)", 1758699},
    {"Quest Reward: Band of Unending Life (#8700)", 1758700},
    {"Quest Reward: Band of Veiled Shadows (#8701)", 1758701},
    {"Quest Reward: Ring of Unspoken Names (#8702)", 1758702},
    {"Quest Reward: Ring of Eternal Justice (#8703)", 1758703},
    {"Quest Reward: Signet of the Unseen Path (#8704)", 1758704},
    {"Quest Reward: Gavel of Infinite Wisdom (#8705)", 1758705},
    {"Quest Reward: Hammer of the Gathering Storm (#8706)", 1758706},
    {"Quest Reward: Blade of Vaulted Secrets (#8707)", 1758707},
    {"Quest Reward: Mace of Unending Life (#8708)", 1758708},
    {"Quest Reward: Dagger of Veiled Shadows (#8709)", 1758709},
    {"Quest Reward: Kris of Unspoken Names (#8710)", 1758710},
    {"Quest Reward: Blade of Eternal Justice (#8711)", 1758711},
    {"Quest Reward: Scythe of the Unseen Path (#8712)", 1758712},
    {"Quest Reward: Starsong the Elder (#8713)", 1758713},
    {"Quest Reward: Moonstrike the Elder (#8714)", 1758714},
    {"Quest Reward: Bladeleaf the Elder (#8715)", 1758715},
    {"Quest Reward: Starglade the Elder (#8716)", 1758716},
    {"Quest Reward: Moonwarden the Elder (#8717)", 1758717},
    {"Quest Reward: Bladeswift the Elder (#8718)", 1758718},
    {"Quest Reward: Bladesing the Elder (#8719)", 1758719},
    {"Quest Reward: Skygleam the Elder (#8720)", 1758720},
    {"Quest Reward: Starweave the Elder (#8721)", 1758721},
    {"Quest Reward: Meadowrun the Elder (#8722)", 1758722},
    {"Quest Reward: Nightwind the Elder (#8723)", 1758723},
    {"Quest Reward: Morningdew the Elder (#8724)", 1758724},
    {"Quest Reward: Riversong the Elder (#8725)", 1758725},
    {"Quest Reward: Brightspear the Elder (#8726)", 1758726},
    {"Quest Reward: Farwhisper the Elder (#8727)", 1758727},
    {"Quest Reward: The Wrath of Neptulon (#8729)", 1758729},
    {"Quest Reward: Nefarius's Corruption (#8730)", 1758730},
    {"Quest Reward: Field Duty (#8731)", 1758731},
    {"Quest Reward: Field Duty Papers (#8732)", 1758732},
    {"Quest Reward: The Nightmare Manifests (#8736)", 1758736},
    {"Quest Reward: Azure Templar (#8737)", 1758737},
    {"Quest Reward: Hive'Regal Scout Report (#8738)", 1758738},
    {"Quest Reward: Hive'Ashi Scout Report (#8739)", 1758739},
    {"Quest Reward: Twilight Marauders (#8740)", 1758740},
    {"Quest Reward: Bang a Gong! (#8743)", 1758743},
    {"Quest Reward: A Carefully Wrapped Present (#8744)", 1758744},
    {"Quest Reward: Treasure of the Timeless One (#8745)", 1758745},
    {"Quest Reward: Metzen the Reindeer (#8746)", 1758746},
    {"Quest Reward: The Path of the Protector (#8747)", 1758747},
    {"Quest Reward: The Path of the Protector (#8748)", 1758748},
    {"Quest Reward: The Path of the Protector (#8749)", 1758749},
    {"Quest Reward: The Path of the Protector (#8750)", 1758750},
    {"Quest Reward: The Protector of Kalimdor (#8751)", 1758751},
    {"Quest Reward: The Path of the Conqueror (#8752)", 1758752},
    {"Quest Reward: The Path of the Conqueror (#8753)", 1758753},
    {"Quest Reward: The Path of the Conqueror (#8754)", 1758754},
    {"Quest Reward: The Path of the Conqueror (#8755)", 1758755},
    {"Quest Reward: The Qiraji Conqueror (#8756)", 1758756},
    {"Quest Reward: The Path of the Invoker (#8757)", 1758757},
    {"Quest Reward: The Path of the Invoker (#8758)", 1758758},
    {"Quest Reward: The Path of the Invoker (#8759)", 1758759},
    {"Quest Reward: The Path of the Invoker (#8760)", 1758760},
    {"Quest Reward: The Grand Invoker (#8761)", 1758761},
    {"Quest Reward: Metzen the Reindeer (#8762)", 1758762},
    {"Quest Reward: The Hero of the Day (#8763)", 1758763},
    {"Quest Reward: The Changing of Paths - Protector No More (#8764)", 1758764},
    {"Quest Reward: The Changing of Paths - Invoker No More (#8765)", 1758765},
    {"Quest Reward: The Changing of Paths - Conqueror No More (#8766)", 1758766},
    {"Quest Reward: A Gently Shaken Gift (#8767)", 1758767},
    {"Quest Reward: A Gaily Wrapped Present (#8768)", 1758768},
    {"Quest Reward: A Ticking Present (#8769)", 1758769},
    {"Quest Reward: Target: Hive'Ashi Defenders (#8770)", 1758770},
    {"Quest Reward: Target: Hive'Ashi Sandstalkers (#8771)", 1758771},
    {"Quest Reward: Target: Hive'Zora Waywatchers (#8772)", 1758772},
    {"Quest Reward: Target: Hive'Zora Reavers (#8773)", 1758773},
    {"Quest Reward: Target: Hive'Regal Ambushers (#8774)", 1758774},
    {"Quest Reward: Target: Hive'Regal Spitfires (#8775)", 1758775},
    {"Quest Reward: Target: Hive'Regal Slavemakers (#8776)", 1758776},
    {"Quest Reward: Target: Hive'Regal Burrowers (#8777)", 1758777},
    {"Quest Reward: The Ironforge Brigade Needs Explosives! (#8778)", 1758778},
    {"Quest Reward: Scrying Materials (#8779)", 1758779},
    {"Quest Reward: Armor Kits for the Field (#8780)", 1758780},
    {"Quest Reward: Arms for the Field (#8781)", 1758781},
    {"Quest Reward: Uniform Supplies (#8782)", 1758782},
    {"Quest Reward: Extraordinary Materials (#8783)", 1758783},
    {"Quest Reward: The Orgrimmar Legion Needs Mojo! (#8785)", 1758785},
    {"Quest Reward: Arms for the Field (#8786)", 1758786},
    {"Quest Reward: Armor Kits for the Field (#8787)", 1758787},
    {"Quest Reward: A Gently Shaken Gift (#8788)", 1758788},
    {"Quest Reward: Imperial Qiraji Armaments (#8789)", 1758789},
    {"Quest Reward: Imperial Qiraji Regalia (#8790)", 1758790},
    {"Quest Reward: The Fall of Ossirian (#8791)", 1758791},
    {"Quest Reward: The Hero of the Day (#8799)", 1758799},
    {"Quest Reward: The Savior of Kalimdor (#8802)", 1758802},
    {"Quest Reward: A Festive Gift (#8803)", 1758803},
    {"Quest Reward: Desert Survival Kits (#8804)", 1758804},
    {"Quest Reward: Boots for the Guard (#8805)", 1758805},
    {"Quest Reward: Grinding Stones for the Guard (#8806)", 1758806},
    {"Quest Reward: Scrying Materials (#8807)", 1758807},
    {"Quest Reward: Uniform Supplies (#8808)", 1758808},
    {"Quest Reward: Extraordinary Materials (#8809)", 1758809},
    {"Quest Reward: Bandages for the Field (#8810)", 1758810},
    {"Quest Reward: The Ultimate Deception (#8829)", 1758829},
    {"Quest Reward: Five Signets for War Supplies (#8846)", 1758846},
    {"Quest Reward: Ten Signets for War Supplies (#8847)", 1758847},
    {"Quest Reward: Fifteen Signets for War Supplies (#8848)", 1758848},
    {"Quest Reward: Twenty Signets for War Supplies (#8849)", 1758849},
    {"Quest Reward: Thirty Signets for War Supplies (#8850)", 1758850},
    {"Quest Reward: Five Signets for War Supplies (#8851)", 1758851},
    {"Quest Reward: Ten Signets for War Supplies (#8852)", 1758852},
    {"Quest Reward: Fifteen Signets for War Supplies (#8853)", 1758853},
    {"Quest Reward: Twenty Signets for War Supplies (#8854)", 1758854},
    {"Quest Reward: Thirty Signets for War Supplies (#8855)", 1758855},
    {"Quest Reward: Desert Survival Kits (#8856)", 1758856},
    {"Quest Reward: Secrets of the Colossus - Ashi (#8857)", 1758857},
    {"Quest Reward: Secrets of the Colossus - Regal (#8858)", 1758858},
    {"Quest Reward: Secrets of the Colossus - Zora (#8859)", 1758859},
    {"Quest Reward: Elune's Candle (#8862)", 1758862},
    {"Quest Reward: Festival Dumplings (#8863)", 1758863},
    {"Quest Reward: Festive Lunar Dresses (#8864)", 1758864},
    {"Quest Reward: Festive Lunar Pant Suits (#8865)", 1758865},
    {"Quest Reward: Bronzebeard the Elder (#8866)", 1758866},
    {"Quest Reward: Lunar Fireworks (#8867)", 1758867},
    {"Quest Reward: Elune's Blessing (#8868)", 1758868},
    {"Quest Reward: Sweet Serenity (#8869)", 1758869},
    {"Quest Reward: Small Rockets (#8876)", 1758876},
    {"Quest Reward: Firework Launcher (#8877)", 1758877},
    {"Quest Reward: Festive Recipes (#8878)", 1758878},
    {"Quest Reward: Large Rockets (#8879)", 1758879},
    {"Quest Reward: Cluster Rockets (#8880)", 1758880},
    {"Quest Reward: Large Cluster Rockets (#8881)", 1758881},
    {"Quest Reward: Cluster Launcher (#8882)", 1758882},
    {"Quest Reward: The Ring of Mmmrrrggglll (#8885)", 1758885},
    {"Quest Reward: Word from the Spire (#8890)", 1758890},
    {"Quest Reward: The Super Egg-O-Matic (#8893)", 1758893},
    {"Quest Reward: An Earnest Proposition (#8905)", 1758905},
    {"Quest Reward: An Earnest Proposition (#8906)", 1758906},
    {"Quest Reward: An Earnest Proposition (#8907)", 1758907},
    {"Quest Reward: An Earnest Proposition (#8908)", 1758908},
    {"Quest Reward: An Earnest Proposition (#8909)", 1758909},
    {"Quest Reward: An Earnest Proposition (#8910)", 1758910},
    {"Quest Reward: An Earnest Proposition (#8911)", 1758911},
    {"Quest Reward: An Earnest Proposition (#8912)", 1758912},
    {"Quest Reward: An Earnest Proposition (#8913)", 1758913},
    {"Quest Reward: An Earnest Proposition (#8914)", 1758914},
    {"Quest Reward: An Earnest Proposition (#8915)", 1758915},
    {"Quest Reward: An Earnest Proposition (#8916)", 1758916},
    {"Quest Reward: An Earnest Proposition (#8917)", 1758917},
    {"Quest Reward: An Earnest Proposition (#8918)", 1758918},
    {"Quest Reward: An Earnest Proposition (#8919)", 1758919},
    {"Quest Reward: An Earnest Proposition (#8920)", 1758920},
    {"Quest Reward: The Ectoplasmic Distiller (#8921)", 1758921},
    {"Quest Reward: Just Compensation (#8926)", 1758926},
    {"Quest Reward: Just Compensation (#8927)", 1758927},
    {"Quest Reward: Just Compensation (#8931)", 1758931},
    {"Quest Reward: Just Compensation (#8932)", 1758932},
    {"Quest Reward: Just Compensation (#8933)", 1758933},
    {"Quest Reward: Just Compensation (#8934)", 1758934},
    {"Quest Reward: Just Compensation (#8935)", 1758935},
    {"Quest Reward: Just Compensation (#8936)", 1758936},
    {"Quest Reward: Just Compensation (#8937)", 1758937},
    {"Quest Reward: Just Compensation (#8938)", 1758938},
    {"Quest Reward: Just Compensation (#8939)", 1758939},
    {"Quest Reward: Just Compensation (#8940)", 1758940},
    {"Quest Reward: Just Compensation (#8941)", 1758941},
    {"Quest Reward: Just Compensation (#8942)", 1758942},
    {"Quest Reward: Just Compensation (#8943)", 1758943},
    {"Quest Reward: Just Compensation (#8944)", 1758944},
    {"Quest Reward: Dead Man's Plea (#8945)", 1758945},
    {"Quest Reward: Falrin's Vendetta (#8949)", 1758949},
    {"Quest Reward: Anthion's Parting Words (#8951)", 1758951},
    {"Quest Reward: Anthion's Parting Words (#8952)", 1758952},
    {"Quest Reward: Anthion's Parting Words (#8953)", 1758953},
    {"Quest Reward: Anthion's Parting Words (#8954)", 1758954},
    {"Quest Reward: Anthion's Parting Words (#8955)", 1758955},
    {"Quest Reward: Anthion's Parting Words (#8956)", 1758956},
    {"Quest Reward: Anthion's Parting Words (#8957)", 1758957},
    {"Quest Reward: Anthion's Parting Words (#8958)", 1758958},
    {"Quest Reward: Anthion's Parting Words (#8959)", 1758959},
    {"Quest Reward: REUSE (#8971)", 1758971},
    {"Quest Reward: REUSE (#8972)", 1758972},
    {"Quest Reward: REUSE (#8973)", 1758973},
    {"Quest Reward: REUSE (#8974)", 1758974},
    {"Quest Reward: REUSE (#8975)", 1758975},
    {"Quest Reward: REUSE (#8976)", 1758976},
    {"Quest Reward: Zinge's Assessment (#8980)", 1758980},
    {"Quest Reward: Gift Giving (#8981)", 1758981},
    {"Quest Reward: More Components of Importance (#8985)", 1758985},
    {"Quest Reward: More Components of Importance (#8986)", 1758986},
    {"Quest Reward: More Components of Importance (#8987)", 1758987},
    {"Quest Reward: More Components of Importance (#8988)", 1758988},
    {"Quest Reward: Gift Giving (#8993)", 1758993},
    {"Quest Reward: Return to Bodley (#8996)", 1758996},
    {"Quest Reward: Saving the Best for Last (#8999)", 1758999},
    {"Quest Reward: Saving the Best for Last (#9000)", 1759000},
    {"Quest Reward: Saving the Best for Last (#9001)", 1759001},
    {"Quest Reward: Saving the Best for Last (#9002)", 1759002},
    {"Quest Reward: Saving the Best for Last (#9003)", 1759003},
    {"Quest Reward: Saving the Best for Last (#9004)", 1759004},
    {"Quest Reward: Saving the Best for Last (#9005)", 1759005},
    {"Quest Reward: Saving the Best for Last (#9006)", 1759006},
    {"Quest Reward: Saving the Best for Last (#9007)", 1759007},
    {"Quest Reward: Saving the Best for Last (#9008)", 1759008},
    {"Quest Reward: Saving the Best for Last (#9009)", 1759009},
    {"Quest Reward: Saving the Best for Last (#9010)", 1759010},
    {"Quest Reward: Saving the Best for Last (#9011)", 1759011},
    {"Quest Reward: Saving the Best for Last (#9012)", 1759012},
    {"Quest Reward: Saving the Best for Last (#9013)", 1759013},
    {"Quest Reward: Saving the Best for Last (#9014)", 1759014},
    {"Quest Reward: Anthion's Parting Words (#9016)", 1759016},
    {"Quest Reward: Anthion's Parting Words (#9017)", 1759017},
    {"Quest Reward: Anthion's Parting Words (#9018)", 1759018},
    {"Quest Reward: Anthion's Parting Words (#9019)", 1759019},
    {"Quest Reward: Anthion's Parting Words (#9020)", 1759020},
    {"Quest Reward: Anthion's Parting Words (#9021)", 1759021},
    {"Quest Reward: Anthion's Parting Words (#9022)", 1759022},
    {"Quest Reward: The Perfect Poison (#9023)", 1759023},
    {"Quest Reward: Morgan's Discovery (#9025)", 1759025},
    {"Quest Reward: A Bubbling Cauldron (#9029)", 1759029},
    {"Quest Reward: Dreadnaught Breastplate (#9034)", 1759034},
    {"Quest Reward: Dreadnaught Legplates (#9036)", 1759036},
    {"Quest Reward: Dreadnaught Helmet (#9037)", 1759037},
    {"Quest Reward: Dreadnaught Pauldrons (#9038)", 1759038},
    {"Quest Reward: Dreadnaught Sabatons (#9039)", 1759039},
    {"Quest Reward: Dreadnaught Gauntlets (#9040)", 1759040},
    {"Quest Reward: Dreadnaught Waistguard (#9041)", 1759041},
    {"Quest Reward: Dreadnaught Bracers (#9042)", 1759042},
    {"Quest Reward: Redemption Tunic (#9043)", 1759043},
    {"Quest Reward: Redemption Legguards (#9044)", 1759044},
    {"Quest Reward: Redemption Headpiece (#9045)", 1759045},
    {"Quest Reward: Redemption Spaulders (#9046)", 1759046},
    {"Quest Reward: Redemption Boots (#9047)", 1759047},
    {"Quest Reward: Redemption Handguards (#9048)", 1759048},
    {"Quest Reward: Redemption Girdle (#9049)", 1759049},
    {"Quest Reward: Redemption Wristguards (#9050)", 1759050},
    {"Quest Reward: Bloodpetal Poison (#9052)", 1759052},
    {"Quest Reward: A Better Ingredient (#9053)", 1759053},
    {"Quest Reward: Cryptstalker Tunic (#9054)", 1759054},
    {"Quest Reward: Cryptstalker Legguards (#9055)", 1759055},
    {"Quest Reward: Cryptstalker Headpiece (#9056)", 1759056},
    {"Quest Reward: Cryptstalker Spaulders (#9057)", 1759057},
    {"Quest Reward: Cryptstalker Boots (#9058)", 1759058},
    {"Quest Reward: Cryptstalker Handguards (#9059)", 1759059},
    {"Quest Reward: Cryptstalker Girdle (#9060)", 1759060},
    {"Quest Reward: Cryptstalker Wristguards (#9061)", 1759061},
    {"Quest Reward: The Pattymac Special (#9065)", 1759065},
    {"Quest Reward: Swift Discipline (#9066)", 1759066},
    {"Quest Reward: The Party Never Ends (#9067)", 1759067},
    {"Quest Reward: Earthshatter Tunic (#9068)", 1759068},
    {"Quest Reward: Earthshatter Legguards (#9069)", 1759069},
    {"Quest Reward: Earthshatter Headpiece (#9070)", 1759070},
    {"Quest Reward: Earthshatter Spaulders (#9071)", 1759071},
    {"Quest Reward: Earthshatter Boots (#9072)", 1759072},
    {"Quest Reward: Earthshatter Handguards (#9073)", 1759073},
    {"Quest Reward: Earthshatter Girdle (#9074)", 1759074},
    {"Quest Reward: Earthshatter Wristguards (#9075)", 1759075},
    {"Quest Reward: Wretched Ringleader (#9076)", 1759076},
    {"Quest Reward: Bonescythe Breastplate (#9077)", 1759077},
    {"Quest Reward: Bonescythe Legplates (#9078)", 1759078},
    {"Quest Reward: Bonescythe Helmet (#9079)", 1759079},
    {"Quest Reward: Bonescythe Pauldrons (#9080)", 1759080},
    {"Quest Reward: Bonescythe Sabatons (#9081)", 1759081},
    {"Quest Reward: Bonescythe Gauntlets (#9082)", 1759082},
    {"Quest Reward: Bonescythe Waistguard (#9083)", 1759083},
    {"Quest Reward: Bonescythe Bracers (#9084)", 1759084},
    {"Quest Reward: Shadows of Doom (#9085)", 1759085},
    {"Quest Reward: Dreamwalker Tunic (#9086)", 1759086},
    {"Quest Reward: Dreamwalker Legguards (#9087)", 1759087},
    {"Quest Reward: Dreamwalker Headpiece (#9088)", 1759088},
    {"Quest Reward: Dreamwalker Spaulders (#9089)", 1759089},
    {"Quest Reward: Dreamwalker Boots (#9090)", 1759090},
    {"Quest Reward: Dreamwalker Handguards (#9091)", 1759091},
    {"Quest Reward: Dreamwalker Girdle (#9092)", 1759092},
    {"Quest Reward: Dreamwalker Wristguards (#9093)", 1759093},
    {"Quest Reward: Argent Dawn Gloves (#9094)", 1759094},
    {"Quest Reward: Frostfire Robe (#9095)", 1759095},
    {"Quest Reward: Frostfire Leggings (#9096)", 1759096},
    {"Quest Reward: Frostfire Circlet (#9097)", 1759097},
    {"Quest Reward: Frostfire Shoulderpads (#9098)", 1759098},
    {"Quest Reward: Frostfire Sandals (#9099)", 1759099},
    {"Quest Reward: Frostfire Gloves (#9100)", 1759100},
    {"Quest Reward: Frostfire Belt (#9101)", 1759101},
    {"Quest Reward: Frostfire Bindings (#9102)", 1759102},
    {"Quest Reward: Plagueheart Robe (#9103)", 1759103},
    {"Quest Reward: Plagueheart Leggings (#9104)", 1759104},
    {"Quest Reward: Plagueheart Circlet (#9105)", 1759105},
    {"Quest Reward: Plagueheart Shoulderpads (#9106)", 1759106},
    {"Quest Reward: Plagueheart Sandals (#9107)", 1759107},
    {"Quest Reward: Plagueheart Gloves (#9108)", 1759108},
    {"Quest Reward: Plagueheart Belt (#9109)", 1759109},
    {"Quest Reward: Plagueheart Bindings (#9110)", 1759110},
    {"Quest Reward: Robe of Faith (#9111)", 1759111},
    {"Quest Reward: Leggings of Faith (#9112)", 1759112},
    {"Quest Reward: Circlet of Faith (#9113)", 1759113},
    {"Quest Reward: Shoulderpads of Faith (#9114)", 1759114},
    {"Quest Reward: Sandals of Faith (#9115)", 1759115},
    {"Quest Reward: Gloves of Faith (#9116)", 1759116},
    {"Quest Reward: Belt of Faith (#9117)", 1759117},
    {"Quest Reward: Bindings of Faith (#9118)", 1759118},
    {"Quest Reward: The Fall of Kel'Thuzad (#9120)", 1759120},
    {"Quest Reward: Cryptstalker Armor Doesn't Make Itself... (#9124)", 1759124},
    {"Quest Reward: Crypt Fiend Parts (#9125)", 1759125},
    {"Quest Reward: Bonescythe Digs (#9126)", 1759126},
    {"Quest Reward: Bone Fragments (#9127)", 1759127},
    {"Quest Reward: The Elemental Equation (#9128)", 1759128},
    {"Quest Reward: Core of Elements (#9129)", 1759129},
    {"Quest Reward: Binding the Dreadnaught (#9131)", 1759131},
    {"Quest Reward: Dark Iron Scraps (#9132)", 1759132},
    {"Quest Reward: Savage Flora (#9136)", 1759136},
    {"Quest Reward: Savage Fronds (#9137)", 1759137},
    {"Quest Reward: Goldenmist Village (#9139)", 1759139},
    {"Quest Reward: Windrunner Village (#9140)", 1759140},
    {"Quest Reward: They Call Me \"The Rooster\" (#9141)", 1759141},
    {"Quest Reward: Craftsman's Writ (#9142)", 1759142},
    {"Quest Reward: Report to Captain Helios (#9146)", 1759146},
    {"Quest Reward: Delivery to Tranquillien (#9148)", 1759148},
    {"Quest Reward: The Plagued Coast (#9149)", 1759149},
    {"Quest Reward: Under the Shadow (#9153)", 1759153},
    {"Quest Reward: Wanted: Knucklerot and Luzran (#9156)", 1759156},
    {"Quest Reward: Curbing the Plague (#9159)", 1759159},
    {"Quest Reward: Investigate An'daroth (#9160)", 1759160},
    {"Quest Reward: Writ of Safe Passage (#9165)", 1759165},
    {"Quest Reward: The Traitor's Destruction (#9167)", 1759167},
    {"Quest Reward: Deactivate An'owyn (#9169)", 1759169},
    {"Quest Reward: Dar'Khan's Lieutenants (#9170)", 1759170},
    {"Quest Reward: Culinary Crunch (#9171)", 1759171},
    {"Quest Reward: Report to Magister Kaendris (#9172)", 1759172},
    {"Quest Reward: The Twin Ziggurats (#9176)", 1759176},
    {"Quest Reward: Craftsman's Writ - Dense Weightstone (#9178)", 1759178},
    {"Quest Reward: Craftsman's Writ - Imperial Plate Chest (#9179)", 1759179},
    {"Quest Reward: Craftsman's Writ - Volcanic Hammer (#9181)", 1759181},
    {"Quest Reward: Craftsman's Writ - Huge Thorium Battleaxe (#9182)", 1759182},
    {"Quest Reward: Craftsman's Writ - Radiant Circlet (#9183)", 1759183},
    {"Quest Reward: Craftsman's Writ - Wicked Leather Headband (#9184)", 1759184},
    {"Quest Reward: Craftsman's Writ - Rugged Armor Kit (#9185)", 1759185},
    {"Quest Reward: Craftsman's Writ - Wicked Leather Belt (#9186)", 1759186},
    {"Quest Reward: Craftsman's Writ - Runic Leather Pants (#9187)", 1759187},
    {"Quest Reward: Craftsman's Writ - Brightcloth Pants (#9188)", 1759188},
    {"Quest Reward: Craftsman's Writ - Runecloth Boots (#9190)", 1759190},
    {"Quest Reward: Craftsman's Writ - Runecloth Bag (#9191)", 1759191},
    {"Quest Reward: Craftsman's Writ - Runecloth Robe (#9194)", 1759194},
    {"Quest Reward: Craftsman's Writ - Goblin Sapper Charge (#9195)", 1759195},
    {"Quest Reward: Craftsman's Writ - Thorium Grenade (#9196)", 1759196},
    {"Quest Reward: Craftsman's Writ - Gnomish Battle Chicken (#9197)", 1759197},
    {"Quest Reward: Craftsman's Writ - Thorium Tube (#9198)", 1759198},
    {"Quest Reward: Troll Juju (#9199)", 1759199},
    {"Quest Reward: Craftsman's Writ - Major Mana Potion (#9200)", 1759200},
    {"Quest Reward: Craftsman's Writ - Greater Arcane Protection Potion (#9201)", 1759201},
    {"Quest Reward: Craftsman's Writ - Major Healing Potion (#9202)", 1759202},
    {"Quest Reward: Craftsman's Writ - Potion of Petrification (#9203)", 1759203},
    {"Quest Reward: Craftsman's Writ - Stonescale Eel (#9204)", 1759204},
    {"Quest Reward: Craftsman's Writ - Plated Armorfish (#9205)", 1759205},
    {"Quest Reward: Craftsman's Writ - Lightning Eel (#9206)", 1759206},
    {"Quest Reward: The Savage Guard - Arcanum of Protection (#9208)", 1759208},
    {"Quest Reward: The Savage Guard - Arcanum of Rapidity (#9209)", 1759209},
    {"Quest Reward: The Savage Guard - Arcanum of Focus (#9210)", 1759210},
    {"Quest Reward: The Ice Guard (#9211)", 1759211},
    {"Quest Reward: Escape from the Catacombs (#9212)", 1759212},
    {"Quest Reward: The Shadow Guard (#9213)", 1759213},
    {"Quest Reward: Bring Me Kel'gash's Head! (#9215)", 1759215},
    {"Quest Reward: Rotting Hearts (#9216)", 1759216},
    {"Quest Reward: More Rotting Hearts (#9217)", 1759217},
    {"Quest Reward: Spinal Dust (#9218)", 1759218},
    {"Quest Reward: More Spinal Dust (#9219)", 1759219},
    {"Quest Reward: Superior Armaments of Battle - Friend of the Dawn (#9221)", 1759221},
    {"Quest Reward: Epic Armaments of Battle - Friend of the Dawn (#9222)", 1759222},
    {"Quest Reward: Superior Armaments of Battle - Honored Amongst the Dawn (#9223)", 1759223},
    {"Quest Reward: Epic Armaments of Battle - Honored Amongst the Dawn (#9224)", 1759224},
    {"Quest Reward: Epic Armaments of Battle - Revered Amongst the Dawn (#9225)", 1759225},
    {"Quest Reward: Superior Armaments of Battle - Revered Amongst the Dawn (#9226)", 1759226},
    {"Quest Reward: Superior Armaments of Battle - Exalted Amongst the Dawn (#9227)", 1759227},
    {"Quest Reward: Epic Armaments of Battle - Exalted Amongst the Dawn (#9228)", 1759228},
    {"Quest Reward: Ramaladni's Icy Grasp (#9230)", 1759230},
    {"Quest Reward: reuse (#9231)", 1759231},
    {"Quest Reward: The Only Song I Know... (#9232)", 1759232},
    {"Quest Reward: Icebane Gauntlets (#9234)", 1759234},
    {"Quest Reward: Icebane Bracers (#9235)", 1759235},
    {"Quest Reward: Icebane Breastplate (#9236)", 1759236},
    {"Quest Reward: Glacial Cloak (#9237)", 1759237},
    {"Quest Reward: Glacial Wrists (#9238)", 1759238},
    {"Quest Reward: Glacial Gloves (#9239)", 1759239},
    {"Quest Reward: Glacial Vest (#9240)", 1759240},
    {"Quest Reward: Polar Bracers (#9241)", 1759241},
    {"Quest Reward: Polar Gloves (#9242)", 1759242},
    {"Quest Reward: Polar Tunic (#9243)", 1759243},
    {"Quest Reward: Icy Scale Bracers (#9244)", 1759244},
    {"Quest Reward: Icy Scale Gauntlets (#9245)", 1759245},
    {"Quest Reward: Icy Scale Breastplate (#9246)", 1759246},
    {"Quest Reward: The Keeper's Call (#9247)", 1759247},
    {"Quest Reward: A Humble Offering (#9248)", 1759248},
    {"Quest Reward: 40 Tickets - Schematic: Steam Tonk Controller (#9249)", 1759249},
    {"Quest Reward: Atiesh, Greatstaff of the Guardian (#9257)", 1759257},
    {"Quest Reward: Atiesh, Greatstaff of the Guardian (#9269)", 1759269},
    {"Quest Reward: Atiesh, Greatstaff of the Guardian (#9270)", 1759270},
    {"Quest Reward: Atiesh, Greatstaff of the Guardian (#9271)", 1759271},
    {"Quest Reward: Dressing the Part (#9272)", 1759272},
    {"Quest Reward: Redeem iCoke Prize Voucher (#9273)", 1759273},
    {"Quest Reward: Assault on Zeb'Nowa (#9277)", 1759277},
    {"Quest Reward: Welcome! (#9278)", 1759278},
    {"Quest Reward: Replenishing the Healing Crystals (#9280)", 1759280},
    {"Quest Reward: Rescue the Survivors! (#9283)", 1759283},
    {"Quest Reward: Cracked Necrotic Crystal (#9292)", 1759292},
    {"Quest Reward: Inoculation (#9303)", 1759303},
    {"Quest Reward: Spare Parts (#9305)", 1759305},
    {"Quest Reward: Faint Necrotic Crystal (#9310)", 1759310},
    {"Quest Reward: Blood Elf Spy (#9311)", 1759311},
    {"Quest Reward: Word from Azure Watch (#9314)", 1759314},
    {"Quest Reward: Anok'suten (#9315)", 1759315},
    {"Quest Reward: [TXT] Goblin Savages (#9316)", 1759316},
    {"Quest Reward: Consecrated Sharpening Stones (#9317)", 1759317},
    {"Quest Reward: Blessed Wizard Oil (#9318)", 1759318},
    {"Quest Reward: A Light in Dark Places (#9319)", 1759319},
    {"Quest Reward: Super Mana Potion (#9320)", 1759320},
    {"Quest Reward: Super Healing Potion (#9321)", 1759321},
    {"Quest Reward: Wild Fires in Kalimdor (#9322)", 1759322},
    {"Quest Reward: Wild Fires in the Eastern Kingdoms (#9323)", 1759323},
    {"Quest Reward: Stealing Orgrimmar's Flame (#9324)", 1759324},
    {"Quest Reward: Stealing Thunder Bluff's Flame (#9325)", 1759325},
    {"Quest Reward: Stealing the Undercity's Flame (#9326)", 1759326},
    {"Quest Reward: Stealing Stormwind's Flame (#9330)", 1759330},
    {"Quest Reward: Stealing Ironforge's Flame (#9331)", 1759331},
    {"Quest Reward: Stealing Darnassus's Flame (#9332)", 1759332},
    {"Quest Reward: Argent Dawn Gloves (#9333)", 1759333},
    {"Quest Reward: Blessed Wizard Oil (#9334)", 1759334},
    {"Quest Reward: Consecrated Sharpening Stones (#9335)", 1759335},
    {"Quest Reward: Super Healing Potion (#9336)", 1759336},
    {"Quest Reward: Super Mana Potion (#9337)", 1759337},
    {"Quest Reward: A Thief's Reward (#9339)", 1759339},
    {"Quest Reward: Tabard of the Argent Dawn (#9341)", 1759341},
    {"Quest Reward: Marauding Crust Bursters (#9342)", 1759342},
    {"Quest Reward: Tabard of the Argent Dawn (#9343)", 1759343},
    {"Quest Reward: Preparing the Salve (#9345)", 1759345},
    {"Quest Reward: Ravager Roundup (#9348)", 1759348},
    {"Quest Reward: Ravager Egg Roundup (#9349)", 1759349},
    {"Quest Reward: A Peon's Work is Never Done (#9350)", 1759350},
    {"Quest Reward: Voidwalkers Gone Wild (#9351)", 1759351},
    {"Quest Reward: Redeem iCoke Gift Box Voucher (#9353)", 1759353},
    {"Quest Reward: Searching for New Materials (#9354)", 1759354},
    {"Quest Reward: A Job for an Intelligent Man (#9355)", 1759355},
    {"Quest Reward: Smooth as Butter (#9356)", 1759356},
    {"Quest Reward: Helboar, the Other White Meat (#9361)", 1759361},
    {"Quest Reward: Warning Fairbreeze Village (#9363)", 1759363},
    {"Quest Reward: A Thief's Reward (#9365)", 1759365},
    {"Quest Reward: The Festival of Fire (#9367)", 1759367},
    {"Quest Reward: The Festival of Fire (#9368)", 1759368},
    {"Quest Reward: Replenishing the Healing Crystals (#9369)", 1759369},
    {"Quest Reward: The Cleansing Must Be Stopped (#9370)", 1759370},
    {"Quest Reward: A Pilgrim's Plight (#9376)", 1759376},
    {"Quest Reward: The Fate of the Clefthoof (#9382)", 1759382},
    {"Quest Reward: A Light in Dark Places (#9386)", 1759386},
    {"Quest Reward: Source of the Corruption (#9387)", 1759387},
    {"Quest Reward: Flickering Flames in Kalimdor (#9388)", 1759388},
    {"Quest Reward: Flickering Flames in the Eastern Kingdoms (#9389)", 1759389},
    {"Quest Reward: Marking the Path (#9391)", 1759391},
    {"Quest Reward: Recently Living (#9404)", 1759404},
    {"Quest Reward: Avruu's Orb (#9418)", 1759418},
    {"Quest Reward: Scouring the Desert (#9419)", 1759419},
    {"Quest Reward: The Finest Down (#9420)", 1759420},
    {"Quest Reward: Scouring the Desert (#9422)", 1759422},
    {"Quest Reward: Makuru's Vengeance (#9424)", 1759424},
    {"Quest Reward: Cleansing the Waters (#9427)", 1759427},
    {"Quest Reward: Twilight of the Dawn Runner (#9437)", 1759437},
    {"Quest Reward: Envoy to the Mag'har (#9441)", 1759441},
    {"Quest Reward: Administering the Salve (#9447)", 1759447},
    {"Quest Reward: Call of Earth (#9451)", 1759451},
    {"Quest Reward: Red Snapper - Very Tasty! (#9452)", 1759452},
    {"Quest Reward: The Great Moongraze Hunt (#9454)", 1759454},
    {"Quest Reward: Nightstalker Clean Up, Isle 2... (#9456)", 1759456},
    {"Quest Reward: Combining Forces (#9460)", 1759460},
    {"Quest Reward: Wanted: Blacktalon the Savage (#9466)", 1759466},
    {"Quest Reward: Arelion's Mistress (#9472)", 1759472},
    {"Quest Reward: A Simple Robe (#9488)", 1759488},
    {"Quest Reward: Cleansing the Scar (#9489)", 1759489},
    {"Quest Reward: The Rock Flayer Matriarch (#9490)", 1759490},
    {"Quest Reward: Greed (#9491)", 1759491},
    {"Quest Reward: Turning the Tide (#9492)", 1759492},
    {"Quest Reward: Fel Embers (#9494)", 1759494},
    {"Quest Reward: The Will of the Warchief (#9495)", 1759495},
    {"Quest Reward: Emblem of the Fel Horde (#9497)", 1759497},
    {"Quest Reward: Call of Water (#9509)", 1759509},
    {"Quest Reward: Cookie's Jumbo Gumbo (#9512)", 1759512},
    {"Quest Reward: Warlord Sriss'tiz (#9515)", 1759515},
    {"Quest Reward: Never Again! (#9522)", 1759522},
    {"Quest Reward: A Cry For Help (#9528)", 1759528},
    {"Quest Reward: Never Again! (#9536)", 1759536},
    {"Quest Reward: Show Gnomercy (#9537)", 1759537},
    {"Quest Reward: The Prophecy of Akida (#9544)", 1759544},
    {"Quest Reward: The Seer's Relic (#9545)", 1759545},
    {"Quest Reward: Fulfilling a Promise (#9546)", 1759546},
    {"Quest Reward: Artifacts of the Blacksilt (#9549)", 1759549},
    {"Quest Reward: Call of Air (#9554)", 1759554},
    {"Quest Reward: Call of Fire (#9555)", 1759555},
    {"Quest Reward: Beasts of the Apocalypse! (#9560)", 1759560},
    {"Quest Reward: Nolkai's Words (#9561)", 1759561},
    {"Quest Reward: Gurf's Dignity (#9564)", 1759564},
    {"Quest Reward: Containing the Threat (#9569)", 1759569},
    {"Quest Reward: The Kurken's Hide (#9571)", 1759571},
    {"Quest Reward: Weaken the Ramparts (#9572)", 1759572},
    {"Quest Reward: Chieftain Oomooroo (#9573)", 1759573},
    {"Quest Reward: Weaken the Ramparts (#9575)", 1759575},
    {"Quest Reward: Galaen's Fate (#9579)", 1759579},
    {"Quest Reward: Learning from the Crystals (#9581)", 1759581},
    {"Quest Reward: Help Tavara (#9586)", 1759586},
    {"Quest Reward: The Blood is Life (#9589)", 1759589},
    {"Quest Reward: The Blood is Life (#9590)", 1759590},
    {"Quest Reward: Control (#9595)", 1759595},
    {"Quest Reward: Heart of Rage (#9607)", 1759607},
    {"Quest Reward: Heart of Rage (#9608)", 1759608},
    {"Quest Reward: Bandits! (#9616)", 1759616},
    {"Quest Reward: Return the Reports (#9618)", 1759618},
    {"Quest Reward: A Favorite Treat (#9624)", 1759624},
    {"Quest Reward: Salvaging the Data (#9628)", 1759628},
    {"Quest Reward: Catch and Release (#9629)", 1759629},
    {"Quest Reward: Alien Predators (#9634)", 1759634},
    {"Quest Reward: The Zapthrottle Mote Extractor! (#9635)", 1759635},
    {"Quest Reward: The Zapthrottle Mote Extractor! (#9636)", 1759636},
    {"Quest Reward: Irradiated Crystal Shards (#9641)", 1759641},
    {"Quest Reward: More Irradiated Crystal Shards (#9642)", 1759642},
    {"Quest Reward: Nightbane (#9644)", 1759644},
    {"Quest Reward: WANTED: Deathclaw (#9646)", 1759646},
    {"Quest Reward: Culling the Flutterers (#9647)", 1759647},
    {"Quest Reward: Mac'Aree Mushroom Menagerie (#9648)", 1759648},
    {"Quest Reward: Ysera's Tears (#9649)", 1759649},
    {"Quest Reward: Declaration of Power (#9666)", 1759666},
    {"Quest Reward: Saving Princess Stillpine (#9667)", 1759667},
    {"Quest Reward: They're Alive! Maybe... (#9670)", 1759670},
    {"Quest Reward: Beast Training (#9673)", 1759673},
    {"Quest Reward: Beast Training (#9675)", 1759675},
    {"Quest Reward: Ending the Bloodcurse (#9683)", 1759683},
    {"Quest Reward: Razormaw (#9689)", 1759689},
    {"Quest Reward: Blood Watch (#9694)", 1759694},
    {"Quest Reward: I Shoot Magic Into the Darkness (#9700)", 1759700},
    {"Quest Reward: The Cryo-Core (#9703)", 1759703},
    {"Quest Reward: Stealing Back the Mushrooms (#9709)", 1759709},
    {"Quest Reward: The Blood-Tempered Ranseur (#9710)", 1759710},
    {"Quest Reward: Matis the Cruel (#9711)", 1759711},
    {"Quest Reward: Oh, It's On! (#9717)", 1759717},
    {"Quest Reward: Stalk the Stalker (#9719)", 1759719},
    {"Quest Reward: Now That We're Friends... (#9726)", 1759726},
    {"Quest Reward: A Warm Welcome (#9728)", 1759728},
    {"Quest Reward: Fhwoor Smash! (#9729)", 1759729},
    {"Quest Reward: Leader of the Darkcrest (#9730)", 1759730},
    {"Quest Reward: Drain Schematics (#9731)", 1759731},
    {"Quest Reward: Return to the Marsh (#9732)", 1759732},
    {"Quest Reward: Return to the Marsh (#9734)", 1759734},
    {"Quest Reward: True Masters of the Light (#9737)", 1759737},
    {"Quest Reward: Lost in Action (#9738)", 1759738},
    {"Quest Reward: Escape from Umbrafen (#9752)", 1759752},
    {"Quest Reward: Ending Their World (#9759)", 1759759},
    {"Quest Reward: Clearing the Way (#9761)", 1759761},
    {"Quest Reward: The Unwritten Prophecy (#9762)", 1759762},
    {"Quest Reward: The Warlord's Hideout (#9763)", 1759763},
    {"Quest Reward: Jyoba's Report (#9772)", 1759772},
    {"Quest Reward: An Unnatural Drought (#9783)", 1759783},
    {"Quest Reward: Identify Plant Parts (#9784)", 1759784},
    {"Quest Reward: A Damp, Dark Place (#9788)", 1759788},
    {"Quest Reward: A Rare Bean (#9800)", 1759800},
    {"Quest Reward: Plants of Zangarmarsh (#9802)", 1759802},
    {"Quest Reward: Messenger to the Feralfen (#9803)", 1759803},
    {"Quest Reward: Fertile Spores (#9806)", 1759806},
    {"Quest Reward: More Fertile Spores (#9807)", 1759807},
    {"Quest Reward: The Spirit Polluted (#9810)", 1759810},
    {"Quest Reward: Muck Diving (#9815)", 1759815},
    {"Quest Reward: Have You Ever Seen One of These? (#9816)", 1759816},
    {"Quest Reward: Leader of the Bloodscale (#9817)", 1759817},
    {"Quest Reward: Us or Them (#9823)", 1759823},
    {"Quest Reward: Lines of Communication (#9833)", 1759833},
    {"Quest Reward: Return to Khadgar (#9837)", 1759837},
    {"Quest Reward: Overlord Gorefist (#9839)", 1759839},
    {"Quest Reward: The Sharpest Blades (#9842)", 1759842},
    {"Quest Reward: A Spirit Ally? (#9847)", 1759847},
    {"Quest Reward: Secrets of the Daggerfen (#9848)", 1759848},
    {"Quest Reward: Clefthoof Mastery (#9851)", 1759851},
    {"Quest Reward: The Ultimate Bloodsport (#9852)", 1759852},
    {"Quest Reward: Gurok the Usurper (#9853)", 1759853},
    {"Quest Reward: Windroc Mastery (#9856)", 1759856},
    {"Quest Reward: Talbuk Mastery (#9859)", 1759859},
    {"Quest Reward: The New Directive (#9860)", 1759860},
    {"Quest Reward: Murkblood Corrupters (#9862)", 1759862},
    {"Quest Reward: Vile Idolatry (#9863)", 1759863},
    {"Quest Reward: He Will Walk The Earth... (#9866)", 1759866},
    {"Quest Reward: Murkblood Leaders... (#9867)", 1759867},
    {"Quest Reward: Ortor My Old Friend... (#9873)", 1759873},
    {"Quest Reward: Stopping the Spread (#9874)", 1759874},
    {"Quest Reward: Solving the Problem (#9878)", 1759878},
    {"Quest Reward: Hellfire Penninsula: -pn - A - ToWoW - Hellfire Turnin Cap (#9880)", 1759880},
    {"Quest Reward: Hellfire Penninsula: -pn - H - ToWoW - Hellfire Turnin Cap (#9881)", 1759881},
    {"Quest Reward: Membership Benefits (#9884)", 1759884},
    {"Quest Reward: Membership Benefits (#9885)", 1759885},
    {"Quest Reward: Membership Benefits (#9886)", 1759886},
    {"Quest Reward: Membership Benefits (#9887)", 1759887},
    {"Quest Reward: Blacksting's Bane (#9896)", 1759896},
    {"Quest Reward: Nothin' Says Lovin' Like a Big Stinger (#9898)", 1759898},
    {"Quest Reward: A Job Undone (#9899)", 1759899},
    {"Quest Reward: Gava'xi (#9900)", 1759900},
    {"Quest Reward: Unfinished Business (#9901)", 1759901},
    {"Quest Reward: The Terror of Marshlight Lake (#9902)", 1759902},
    {"Quest Reward: The Biggest of Them All (#9903)", 1759903},
    {"Quest Reward: Pursuing Terrorclaw (#9904)", 1759904},
    {"Quest Reward: Maktu's Revenge (#9905)", 1759905},
    {"Quest Reward: An Audacious Advance (#9907)", 1759907},
    {"Quest Reward: Hellfire Penninsula: -pn - A - ToWoW - Hellfire Turnin (#9908)", 1759908},
    {"Quest Reward: Hellfire Penninsula: -pn - H - ToWoW - Hellfire Turnin (#9909)", 1759909},
    {"Quest Reward: Bleeding Hollow Supply Crates (#9916)", 1759916},
    {"Quest Reward: The Twin Clefts of Nagrand (#9922)", 1759922},
    {"Quest Reward: Corki's Gone Missing Again! (#9924)", 1759924},
    {"Quest Reward: Message to Telaar (#9933)", 1759933},
    {"Quest Reward: Message to Garadar (#9934)", 1759934},
    {"Quest Reward: Wanted: Durn the Hungerer (#9937)", 1759937},
    {"Quest Reward: Wanted: Durn the Hungerer (#9938)", 1759938},
    {"Quest Reward: Return to Thander (#9943)", 1759943},
    {"Quest Reward: Cho'war the Pillager (#9946)", 1759946},
    {"Quest Reward: Return to Rokag (#9947)", 1759947},
    {"Quest Reward: Finding the Survivors (#9948)", 1759948},
    {"Quest Reward: It's Watching You! (#9951)", 1759951},
    {"Quest Reward: Cho'war the Pillager (#9955)", 1759955},
    {"Quest Reward: The Ravaged Caravan (#9956)", 1759956},
    {"Quest Reward: The Final Reagents (#9969)", 1759969},
    {"Quest Reward: The Ring of Blood: Rokdar the Sundered Lord (#9970)", 1759970},
    {"Quest Reward: The Ring of Blood: Skra'gath (#9972)", 1759972},
    {"Quest Reward: The Final Reagents (#9974)", 1759974},
    {"Quest Reward: The Ring of Blood: The Final Challenge (#9977)", 1759977},
    {"Quest Reward: Rescue Deirom! (#9980)", 1759980},
    {"Quest Reward: Rescue Dugar! (#9981)", 1759981},
    {"Quest Reward: Stymying the Arakkoa (#9986)", 1759986},
    {"Quest Reward: Stymying the Arakkoa (#9987)", 1759987},
    {"Quest Reward: A Dandy's Best Friend (#9988)", 1759988},
    {"Quest Reward: Alien Spirits (#9989)", 1759989},
    {"Quest Reward: Letting Earthbinder Tavgren Know (#10005)", 1760005},
    {"Quest Reward: Letting Earthbinder Tavgren Know (#10006)", 1760006},
    {"Quest Reward: Thinning the Ranks (#10007)", 1760007},
    {"Quest Reward: What Happens in Terokkar Stays in Terokkar (#10008)", 1760008},
    {"Quest Reward: Forge Camp: Annihilated (#10011)", 1760011},
    {"Quest Reward: The Elusive Ironjaw (#10022)", 1760022},
    {"Quest Reward: Helping the Lost Find Their Way (#10031)", 1760031},
    {"Quest Reward: Torgos! (#10035)", 1760035},
    {"Quest Reward: Torgos! (#10036)", 1760036},
    {"Quest Reward: Rather Be Fishin' (#10037)", 1760037},
    {"Quest Reward: Kill the Shadow Council! (#10042)", 1760042},
    {"Quest Reward: Kill the Shadow Council! (#10043)", 1760043},
    {"Quest Reward: Escape from Firewing Point! (#10051)", 1760051},
    {"Quest Reward: Escape from Firewing Point! (#10052)", 1760052},
    {"Quest Reward: Waste Not, Want Not (#10055)", 1760055},
    {"Quest Reward: Looking to the Leadership (#10057)", 1760057},
    {"Quest Reward: Looking to the Leadership (#10062)", 1760062},
    {"Quest Reward: Oshu'gun Crystal Powder (#10074)", 1760074},
    {"Quest Reward: Oshu'gun Crystal Powder (#10075)", 1760075},
    {"Quest Reward: Oshu'gun Crystal Powder (#10076)", 1760076},
    {"Quest Reward: Oshu'gun Crystal Powder (#10077)", 1760077},
    {"Quest Reward: Laying Waste to the Unwanted (#10078)", 1760078},
    {"Quest Reward: Assault on Mageddon (#10084)", 1760084},
    {"Quest Reward: I Work... For the Horde! (#10086)", 1760086},
    {"Quest Reward: Burn It Up... For the Horde! (#10087)", 1760087},
    {"Quest Reward: The Soul Devices (#10091)", 1760091},
    {"Quest Reward: Assault on Mageddon (#10092)", 1760092},
    {"Quest Reward: Into the Heart of the Labyrinth (#10095)", 1760095},
    {"Quest Reward: Saving the Sporeloks (#10096)", 1760096},
    {"Quest Reward: Brother Against Brother (#10097)", 1760097},
    {"Quest Reward: Terokk's Legacy (#10098)", 1760098},
    {"Quest Reward: The Mastermind (#10099)", 1760099},
    {"Quest Reward: The Mastermind (#10100)", 1760100},
    {"Quest Reward: Hellfire Fortifications (#10106)", 1760106},
    {"Quest Reward: I Must Have Them! (#10109)", 1760109},
    {"Quest Reward: Hellfire Fortifications (#10110)", 1760110},
    {"Quest Reward: Bring Me The Egg! (#10111)", 1760111},
    {"Quest Reward: A Personal Favor (#10112)", 1760112},
    {"Quest Reward: Felspark Ravine (#10123)", 1760123},
    {"Quest Reward: Mission: Gateways Murketh and Shaadraz (#10129)", 1760129},
    {"Quest Reward: Colossal Menace (#10132)", 1760132},
    {"Quest Reward: Cruel's Intentions (#10136)", 1760136},
    {"Quest Reward: Provoking the Warboss (#10137)", 1760137},
    {"Quest Reward: Dispatching the Commander (#10139)", 1760139},
    {"Quest Reward: The Path of Anguish (#10142)", 1760142},
    {"Quest Reward: Disrupt Their Reinforcements (#10144)", 1760144},
    {"Quest Reward: Mission: The Murketh and Shaadraz Gateways (#10146)", 1760146},
    {"Quest Reward: Mission: End All, Be All (#10149)", 1760149},
    {"Quest Reward: Provoking the Warboss (#10155)", 1760155},
    {"Quest Reward: Dispatching the Commander (#10157)", 1760157},
    {"Quest Reward: In Case of Emergency... (#10161)", 1760161},
    {"Quest Reward: Mission: The Abyssal Shelf (#10162)", 1760162},
    {"Quest Reward: Mission: The Abyssal Shelf (#10163)", 1760163},
    {"Quest Reward: Everything Will Be Alright (#10164)", 1760164},
    {"Quest Reward: Undercutting the Competition (#10165)", 1760165},
    {"Quest Reward: Ar'kelos the Guardian (#10176)", 1760176},
    {"Quest Reward: A Fate Worse Than Death (#10185)", 1760185},
    {"Quest Reward: You're Hired! (#10186)", 1760186},
    {"Quest Reward: The Sigil of Krasus (#10188)", 1760188},
    {"Quest Reward: Mark V is Alive! (#10191)", 1760191},
    {"Quest Reward: Mercenary See, Mercenary Do (#10195)", 1760195},
    {"Quest Reward: More Arakkoa Feathers (#10196)", 1760196},
    {"Quest Reward: Information Gathering (#10198)", 1760198},
    {"Quest Reward: That Little Extra Kick (#10199)", 1760199},
    {"Quest Reward: And Now, the Moment of Truth (#10201)", 1760201},
    {"Quest Reward: Warp-Raider Nesaad (#10205)", 1760205},
    {"Quest Reward: Pick Your Part (#10206)", 1760206},
    {"Quest Reward: Disrupt Their Reinforcements (#10208)", 1760208},
    {"Quest Reward: Hero of the Mag'har (#10212)", 1760212},
    {"Quest Reward: Someone Else's Hard Work Pays Off (#10218)", 1760218},
    {"Quest Reward: Dr. Boom! (#10221)", 1760221},
    {"Quest Reward: Down With Daellis (#10223)", 1760223},
    {"Quest Reward: Elemental Power Extraction (#10226)", 1760226},
    {"Quest Reward: Declawing Doomclaw (#10235)", 1760235},
    {"Quest Reward: Outland Sucks! (#10236)", 1760236},
    {"Quest Reward: How to Serve Goblins (#10238)", 1760238},
    {"Quest Reward: Building a Perimeter (#10240)", 1760240},
    {"Quest Reward: Back to the Chief! (#10249)", 1760249},
    {"Quest Reward: Levixus the Soul Caller (#10253)", 1760253},
    {"Quest Reward: Testing the Antidote (#10255)", 1760255},
    {"Quest Reward: Honor the Fallen (#10258)", 1760258},
    {"Quest Reward: Into the Breach (#10259)", 1760259},
    {"Quest Reward: Wanted: Annihilator Servo! (#10261)", 1760261},
    {"Quest Reward: Rightful Repossession (#10267)", 1760267},
    {"Quest Reward: Securing the Celestial Ridge (#10274)", 1760274},
    {"Quest Reward: Special Delivery to Shattrath City (#10280)", 1760280},
    {"Quest Reward: Return to Andormu (#10285)", 1760285},
    {"Quest Reward: Hitting the Motherlode (#10293)", 1760293},
    {"Quest Reward: From the Abyss (#10295)", 1760295},
    {"Quest Reward: Hero of the Brood (#10298)", 1760298},
    {"Quest Reward: The Blood Elves (#10303)", 1760303},
    {"Quest Reward: It's a Fel Reaver, But with Heart (#10309)", 1760309},
    {"Quest Reward: Sabotage the Warp-Gate! (#10310)", 1760310},
    {"Quest Reward: Measuring Warp Energies (#10313)", 1760313},
    {"Quest Reward: Dealing with the Overmaster (#10318)", 1760318},
    {"Quest Reward: Destroy Naberius! (#10320)", 1760320},
    {"Quest Reward: Shutting Down Manaforge Ara (#10323)", 1760323},
    {"Quest Reward: The Great Moongraze Hunt (#10324)", 1760324},
    {"Quest Reward: Master Smith Rhonsus (#10332)", 1760332},
    {"Quest Reward: Surveying the Ruins (#10335)", 1760335},
    {"Quest Reward: When the Cows Come Home (#10337)", 1760337},
    {"Quest Reward: Kick Them While They're Down (#10341)", 1760341},
    {"Quest Reward: The Flesh Lies... (#10345)", 1760345},
    {"Quest Reward: Behomat (#10350)", 1760350},
    {"Quest Reward: Natural Remedies (#10351)", 1760351},
    {"Quest Reward: Arconus the Insatiable (#10353)", 1760353},
    {"Quest Reward: Shutting Down Manaforge Ara (#10365)", 1760365},
    {"Quest Reward: Aldor No More (#10381)", 1760381},
    {"Quest Reward: Overlord (#10400)", 1760400},
    {"Quest Reward: Mission: End All, Be All (#10401)", 1760401},
    {"Quest Reward: Delivering the Message (#10406)", 1760406},
    {"Quest Reward: Nexus-King Salhadaar (#10408)", 1760408},
    {"Quest Reward: Deathblow to the Legion (#10409)", 1760409},
    {"Quest Reward: The Horrors of Pollution (#10413)", 1760413},
    {"Quest Reward: Synthesis of Power (#10416)", 1760416},
    {"Quest Reward: Arcane Tomes (#10419)", 1760419},
    {"Quest Reward: A Cleansing Light (#10420)", 1760420},
    {"Quest Reward: Fel Armaments (#10421)", 1760421},
    {"Quest Reward: Escape from the Staging Grounds (#10425)", 1760425},
    {"Quest Reward: Retrieving the Goods (#10435)", 1760435},
    {"Quest Reward: Dimensius the All-Devouring (#10439)", 1760439},
    {"Quest Reward: Success! (#10440)", 1760440},
    {"Quest Reward: The Final Code (#10446)", 1760446},
    {"Quest Reward: The Final Code (#10447)", 1760447},
    {"Quest Reward: Bonechewer Blood (#10450)", 1760450},
    {"Quest Reward: Escape from Coilskar Cistern (#10451)", 1760451},
    {"Quest Reward: Protecting Our Own (#10457)", 1760457},
    {"Quest Reward: Defender's Pledge (#10460)", 1760460},
    {"Quest Reward: Restorer's Pledge (#10461)", 1760461},
    {"Quest Reward: Champion's Pledge (#10462)", 1760462},
    {"Quest Reward: Sage's Pledge (#10463)", 1760463},
    {"Quest Reward: Sage's Vow (#10464)", 1760464},
    {"Quest Reward: Restorer's Vow (#10465)", 1760465},
    {"Quest Reward: Champion's Vow (#10466)", 1760466},
    {"Quest Reward: Defender's Vow (#10467)", 1760467},
    {"Quest Reward: Sage's Oath (#10468)", 1760468},
    {"Quest Reward: Restorer's Oath (#10469)", 1760469},
    {"Quest Reward: Champion's Oath (#10470)", 1760470},
    {"Quest Reward: Defender's Oath (#10471)", 1760471},
    {"Quest Reward: Sage's Covenant (#10472)", 1760472},
    {"Quest Reward: Restorer's Covenant (#10473)", 1760473},
    {"Quest Reward: Champion's Covenant (#10474)", 1760474},
    {"Quest Reward: Defender's Covenant (#10475)", 1760475},
    {"Quest Reward: Enraged Spirits of Air (#10481)", 1760481},
    {"Quest Reward: Fel Orc Scavengers (#10482)", 1760482},
    {"Quest Reward: Protecting Our Own (#10488)", 1760488},
    {"Quest Reward: Felling an Ancient Tree (#10489)", 1760489},
    {"Quest Reward: An Earnest Proposition (#10492)", 1760492},
    {"Quest Reward: An Earnest Proposition (#10493)", 1760493},
    {"Quest Reward: Just Compensation (#10494)", 1760494},
    {"Quest Reward: Just Compensation (#10495)", 1760495},
    {"Quest Reward: Anthion's Parting Words (#10496)", 1760496},
    {"Quest Reward: Anthion's Parting Words (#10497)", 1760497},
    {"Quest Reward: Saving the Best for Last (#10498)", 1760498},
    {"Quest Reward: Saving the Best for Last (#10499)", 1760499},
    {"Quest Reward: The Bladespire Ogres (#10504)", 1760504},
    {"Quest Reward: The Bloodmaul Ogres (#10505)", 1760505},
    {"Quest Reward: Turning Point (#10507)", 1760507},
    {"Quest Reward: Into the Draenethyst Mine (#10510)", 1760510},
    {"Quest Reward: I Was A Lot Of Things... (#10514)", 1760514},
    {"Quest Reward: Planting the Banner (#10518)", 1760518},
    {"Quest Reward: The Cipher of Damnation - The First Fragment Recovered (#10523)", 1760523},
    {"Quest Reward: The Thunderspike (#10526)", 1760526},
    {"Quest Reward: The Cipher of Damnation - The Second Fragment Recovered (#10541)", 1760541},
    {"Quest Reward: A Curse Upon Both of Your Clans! (#10544)", 1760544},
    {"Quest Reward: The Sad Truth (#10548)", 1760548},
    {"Quest Reward: REUSE (#10549)", 1760549},
    {"Quest Reward: Blast the Infernals! (#10564)", 1760564},
    {"Quest Reward: The Cipher of Damnation - The Third Fragment Recovered (#10579)", 1760579},
    {"Quest Reward: The Cipher of Damnation (#10588)", 1760588},
    {"Quest Reward: DESTROY THIS QUEST! (#10591)", 1760591},
    {"Quest Reward: Ancient Evil (#10593)", 1760593},
    {"Quest Reward: Gauging the Resonant Frequency (#10594)", 1760594},
    {"Quest Reward: Blast the Infernals! (#10598)", 1760598},
    {"Quest Reward: Whispers of the Raven God (#10607)", 1760607},
    {"Quest Reward: What Came First, the Drake or the Egg? (#10609)", 1760609},
    {"Quest Reward: Ridgespine Menace (#10620)", 1760620},
    {"Quest Reward: Capture the Weapons (#10626)", 1760626},
    {"Quest Reward: Capture the Weapons (#10627)", 1760627},
    {"Quest Reward: Shizz Work (#10629)", 1760629},
    {"Quest Reward: Beneath Thrallmar (#10630)", 1760630},
    {"Quest Reward: Cutting Your Teeth (#10632)", 1760632},
    {"Quest Reward: Teron Gorefiend, I am... (#10639)", 1760639},
    {"Quest Reward: Teron Gorefiend, I am... (#10645)", 1760645},
    {"Quest Reward: Wanted: Uvuros, Scourge of Shadowmoon (#10647)", 1760647},
    {"Quest Reward: Wanted: Uvuros, Scourge of Shadowmoon (#10648)", 1760648},
    {"Quest Reward: Varedis Must Be Stopped (#10651)", 1760651},
    {"Quest Reward: Ride the Lightning (#10657)", 1760657},
    {"Quest Reward: Show Them Gnome Mercy! (#10675)", 1760675},
    {"Quest Reward: Quenching the Blade (#10679)", 1760679},
    {"Quest Reward: The Den Mother (#10690)", 1760690},
    {"Quest Reward: Varedis Must Be Stopped (#10692)", 1760692},
    {"Quest Reward: Breaking Down Netherock (#10701)", 1760701},
    {"Quest Reward: How to Break Into the Arcatraz (#10704)", 1760704},
    {"Quest Reward: Akama's Promise (#10708)", 1760708},
    {"Quest Reward: ...and a Time for Action (#10713)", 1760713},
    {"Quest Reward: Into the Churning Gulch (#10715)", 1760715},
    {"Quest Reward: Gorgrom the Dragon-Eater (#10723)", 1760723},
    {"Quest Reward: Eminence Among the Violet Eye (#10725)", 1760725},
    {"Quest Reward: Eminence Among the Violet Eye (#10726)", 1760726},
    {"Quest Reward: Eminence Among the Violet Eye (#10727)", 1760727},
    {"Quest Reward: Eminence Among the Violet Eye (#10728)", 1760728},
    {"Quest Reward: Path of the Violet Mage (#10729)", 1760729},
    {"Quest Reward: Path of the Violet Restorer (#10730)", 1760730},
    {"Quest Reward: Path of the Violet Assassin (#10731)", 1760731},
    {"Quest Reward: Path of the Violet Protector (#10732)", 1760732},
    {"Quest Reward: Down the Violet Path (#10733)", 1760733},
    {"Quest Reward: Down the Violet Path (#10734)", 1760734},
    {"Quest Reward: Down the Violet Path (#10735)", 1760735},
    {"Quest Reward: Down the Violet Path (#10736)", 1760736},
    {"Quest Reward: Distinguished Service (#10738)", 1760738},
    {"Quest Reward: Distinguished Service (#10739)", 1760739},
    {"Quest Reward: Distinguished Service (#10740)", 1760740},
    {"Quest Reward: Distinguished Service (#10741)", 1760741},
    {"Quest Reward: Showdown (#10742)", 1760742},
    {"Quest Reward: News of Victory (#10744)", 1760744},
    {"Quest Reward: News of Victory (#10745)", 1760745},
    {"Quest Reward: Whelps of the Wyrmcult (#10747)", 1760747},
    {"Quest Reward: Maxnar Must Die! (#10748)", 1760748},
    {"Quest Reward: Hotter than Hell (#10758)", 1760758},
    {"Quest Reward: Hotter than Hell (#10764)", 1760764},
    {"Quest Reward: Dissension Amongst the Ranks... (#10769)", 1760769},
    {"Quest Reward: From the Ashes (#10771)", 1760771},
    {"Quest Reward: Dissension Amongst the Ranks... (#10776)", 1760776},
    {"Quest Reward: Battle of the Crimson Watch (#10781)", 1760781},
    {"Quest Reward: Crush the Bloodmaul Camp (#10784)", 1760784},
    {"Quest Reward: Welcoming the Wolf Spirit (#10791)", 1760791},
    {"Quest Reward: Zeth'Gor Must Burn! (#10792)", 1760792},
    {"Quest Reward: Crush the Bloodmaul Camp! (#10796)", 1760796},
    {"Quest Reward: Into the Churning Gulch (#10799)", 1760799},
    {"Quest Reward: Gorgrom the Dragon-Eater (#10802)", 1760802},
    {"Quest Reward: Showdown (#10806)", 1760806},
    {"Quest Reward: Thwart the Dark Conclave (#10808)", 1760808},
    {"Quest Reward: Reclaiming Holy Grounds (#10816)", 1760816},
    {"Quest Reward: The Great Retribution (#10817)", 1760817},
    {"Quest Reward: You're Fired! (#10821)", 1760821},
    {"Quest Reward: Exorcising the Trees (#10830)", 1760830},
    {"Quest Reward: Grillok \"Darkeye\" (#10834)", 1760834},
    {"Quest Reward: The Demoniac Scryer (#10838)", 1760838},
    {"Quest Reward: Vengeful Souls (#10842)", 1760842},
    {"Quest Reward: Slay the Brood Mother (#10845)", 1760845},
    {"Quest Reward: The Eyes of Skettis (#10847)", 1760847},
    {"Quest Reward: Veil Rhaze: Unliving Evil (#10848)", 1760848},
    {"Quest Reward: Missing Friends (#10852)", 1760852},
    {"Quest Reward: Spirit Calling (#10853)", 1760853},
    {"Quest Reward: Teleport This! (#10857)", 1760857},
    {"Quest Reward: Mok'Nathal Treats (#10860)", 1760860},
    {"Quest Reward: Veil Lithic: Preemptive Strike (#10861)", 1760861},
    {"Quest Reward: There Can Be Only One Response (#10867)", 1760867},
    {"Quest Reward: Ally of the Netherwing (#10870)", 1760870},
    {"Quest Reward: Veil Shalas: Signal Fires (#10874)", 1760874},
    {"Quest Reward: The Foot of the Citadel (#10876)", 1760876},
    {"Quest Reward: The Skettis Offensive (#10879)", 1760879},
    {"Quest Reward: The Shadow Tomb (#10881)", 1760881},
    {"Quest Reward: Harbinger of Doom (#10882)", 1760882},
    {"Quest Reward: Escaping the Tomb (#10887)", 1760887},
    {"Quest Reward: Trial of the Naaru: Magtheridon (#10888)", 1760888},
    {"Quest Reward: Zeth'Gor Must Burn! (#10895)", 1760895},
    {"Quest Reward: Skywing (#10898)", 1760898},
    {"Quest Reward: The Hound-Master (#10912)", 1760912},
    {"Quest Reward: The Fallen Exarch (#10915)", 1760915},
    {"Quest Reward: The Outcast's Plight (#10917)", 1760917},
    {"Quest Reward: More Feathers (#10918)", 1760918},
    {"Quest Reward: Terokkarantula (#10921)", 1760921},
    {"Quest Reward: Evil Draws Near (#10923)", 1760923},
    {"Quest Reward: The Big Bone Worm (#10930)", 1760930},
    {"Quest Reward: Drill the Drillmaster (#10937)", 1760937},
    {"Quest Reward: Darkmoon Blessings Deck (#10938)", 1760938},
    {"Quest Reward: Darkmoon Storms Deck (#10939)", 1760939},
    {"Quest Reward: Darkmoon Furies Deck (#10940)", 1760940},
    {"Quest Reward: Darkmoon Lunacy Deck (#10941)", 1760941},
    {"Quest Reward: The Fall of the Betrayer (#10959)", 1760959},
    {"Quest Reward: Back to the Orphanage (#10966)", 1760966},
    {"Quest Reward: Back to the Orphanage (#10967)", 1760967},
    {"Quest Reward: Stasis Chambers of Bash'ir (#10974)", 1760974},
    {"Quest Reward: Purging the Chambers of Bash'ir (#10975)", 1760975},
    {"Quest Reward: Stasis Chambers of the Mana-Tombs (#10977)", 1760977},
    {"Quest Reward: Nexus-Prince Shaffar's Personal Chamber (#10981)", 1760981},
    {"Quest Reward: The Eye of Haramad (#10982)", 1760982},
    {"Quest Reward: A Distraction for Akama (#10985)", 1760985},
    {"Quest Reward: The Hawk's Essence (#10992)", 1760992},
    {"Quest Reward: Vanquish the Raven God (#11001)", 1761001},
    {"Quest Reward: The Fall of Magtheridon (#11002)", 1761002},
    {"Quest Reward: The Fall of Magtheridon (#11003)", 1761003},
    {"Quest Reward: World of Shadows (#11004)", 1761004},
    {"Quest Reward: More Shadow Dust (#11006)", 1761006},
    {"Quest Reward: Kael'thas and the Verdant Sphere (#11007)", 1761007},
    {"Quest Reward: Eternal Vigilance (#11011)", 1761011},
    {"Quest Reward: Bomb Them Again! (#11023)", 1761023},
    {"Quest Reward: Banish the Demons (#11026)", 1761026},
    {"Quest Reward: Yous Have Da Darkrune? (#11027)", 1761027},
    {"Quest Reward: Archmage No More (#11031)", 1761031},
    {"Quest Reward: Protector No More (#11032)", 1761032},
    {"Quest Reward: Assassin No More (#11033)", 1761033},
    {"Quest Reward: Restorer No More (#11034)", 1761034},
    {"Quest Reward: A Job Unfinished... (#11041)", 1761041},
    {"Quest Reward: Banish More Demons (#11051)", 1761051},
    {"Quest Reward: Akama's Promise (#11052)", 1761052},
    {"Quest Reward: Rise, Overseer! (#11053)", 1761053},
    {"Quest Reward: A Crystalforged Darkrune (#11060)", 1761060},
    {"Quest Reward: Wrangle More Aether Rays! (#11066)", 1761066},
    {"Quest Reward: Dragonmaw Race: Captain Skyshatter (#11071)", 1761071},
    {"Quest Reward: Adversarial Blood (#11072)", 1761072},
    {"Quest Reward: Terokk's Downfall (#11073)", 1761073},
    {"Quest Reward: Tokens of the Descendants (#11074)", 1761074},
    {"Quest Reward: The Relic's Emanation (#11080)", 1761080},
    {"Quest Reward: Stand Tall, Captain! (#11084)", 1761084},
    {"Quest Reward: Subdue the Subduer (#11090)", 1761090},
    {"Quest Reward: A Special Thank You (#11091)", 1761091},
    {"Quest Reward: Hail, Commander! (#11092)", 1761092},
    {"Quest Reward: Hungry Nether Rays (#11093)", 1761093},
    {"Quest Reward: Sage No More (#11103)", 1761103},
    {"Quest Reward: Restorer No More (#11104)", 1761104},
    {"Quest Reward: Champion No More (#11105)", 1761105},
    {"Quest Reward: Defender No More (#11106)", 1761106},
    {"Quest Reward: Jorus the Cobalt Netherwing Drake (#11109)", 1761109},
    {"Quest Reward: Malfas the Purple Netherwing Drake (#11110)", 1761110},
    {"Quest Reward: Onyxien the Onyx Netherwing Drake (#11111)", 1761111},
    {"Quest Reward: Suraku the Azure Netherwing Drake (#11112)", 1761112},
    {"Quest Reward: Voranaku the Violet Netherwing Drake (#11113)", 1761113},
    {"Quest Reward: Zoya the Veridian Netherwing Drake (#11114)", 1761114},
    {"Quest Reward: Trial of the Naaru: (QUEST FLAG) (#11116)", 1761116},
    {"Quest Reward: Catch the Wild Wolpertinger! (#11117)", 1761117},
    {"Quest Reward: Pink Elekks On Parade (#11118)", 1761118},
    {"Quest Reward: Pink Elekks On Parade (#11120)", 1761120},
    {"Quest Reward: There and Back Again (#11122)", 1761122},
    {"Quest Reward: Stop the Fires! (#11131)", 1761131},
    {"Quest Reward: Promises, Promises... (#11132)", 1761132},
    {"Quest Reward: The End of the Deserters (#11134)", 1761134},
    {"Quest Reward: Recover the Cargo! (#11140)", 1761140},
    {"Quest Reward: Survey Alcaz Island (#11142)", 1761142},
    {"Quest Reward: Unleash the Raptors (#11147)", 1761147},
    {"Quest Reward: Arms of the Grimtotems (#11148)", 1761148},
    {"Quest Reward: Peace at Last (#11152)", 1761152},
    {"Quest Reward: Scare the Guano Out of Them! (#11154)", 1761154},
    {"Quest Reward: Shoveltusk Soup Again? (#11155)", 1761155},
    {"Quest Reward: Direhorn Raiders (#11156)", 1761156},
    {"Quest Reward: Challenge to the Black Flight (#11162)", 1761162},
    {"Quest Reward: Undercover Sister (#11163)", 1761163},
    {"Quest Reward: The New Plague (#11167)", 1761167},
    {"Quest Reward: Hex Lord? Hah! (#11171)", 1761171},
    {"Quest Reward: The Reagent Thief (#11173)", 1761173},
    {"Quest Reward: Corrosion Prevention (#11174)", 1761174},
    {"Quest Reward: Root Causes (#11182)", 1761182},
    {"Quest Reward: Cleansing Witch Hill (#11183)", 1761183},
    {"Quest Reward: WANTED: Goreclaw the Ravenous (#11184)", 1761184},
    {"Quest Reward: Two Wrongs... (#11188)", 1761188},
    {"Quest Reward: Playin' With Dolls (#11195)", 1761195},
    {"Quest Reward: Take Down Tethyr! (#11198)", 1761198},
    {"Quest Reward: More than Coincidence (#11200)", 1761200},
    {"Quest Reward: Mission: Eternal Flame (#11202)", 1761202},
    {"Quest Reward: Return to Krog (#11204)", 1761204},
    {"Quest Reward: Justice Dispensed (#11206)", 1761206},
    {"Quest Reward: Nat's Bargain (#11209)", 1761209},
    {"Quest Reward: Catch a Dragon by the Tail (#11217)", 1761217},
    {"Quest Reward: Stop the Fires! (#11219)", 1761219},
    {"Quest Reward: Return to Jaina (#11223)", 1761223},
    {"Quest Reward: Ambushed! (#11230)", 1761230},
    {"Quest Reward: Landing the Killing Blow (#11233)", 1761233},
    {"Quest Reward: Necro Overlord Mezhen (#11236)", 1761236},
    {"Quest Reward: The Frost Wyrm and its Master (#11238)", 1761238},
    {"Quest Reward: In Service to the Light (#11239)", 1761239},
    {"Quest Reward: Leader of the Deranged (#11240)", 1761240},
    {"Quest Reward: Trail of Fire (#11241)", 1761241},
    {"Quest Reward: Free at Last! (#11242)", 1761242},
    {"Quest Reward: Rescuing the Rescuers (#11244)", 1761244},
    {"Quest Reward: Stop the Ascension! (#11249)", 1761249},
    {"Quest Reward: All Hail the Conqueror of Skorn! (#11250)", 1761250},
    {"Quest Reward: Into Utgarde! (#11252)", 1761252},
    {"Quest Reward: Stop the Ascension! (#11260)", 1761260},
    {"Quest Reward: The Conqueror of Skorn! (#11261)", 1761261},
    {"Quest Reward: Ingvar Must Die! (#11262)", 1761262},
    {"Quest Reward: Necro Overlord Mezhen (#11264)", 1761264},
    {"Quest Reward: The Frost Wyrm and its Master (#11267)", 1761267},
    {"Quest Reward: The Walking Dead (#11268)", 1761268},
    {"Quest Reward: Down to the Wire (#11269)", 1761269},
    {"Quest Reward: Hasty Preparations (#11271)", 1761271},
    {"Quest Reward: A Score to Settle (#11272)", 1761272},
    {"Quest Reward: Return to Valgarde (#11278)", 1761278},
    {"Quest Reward: Draconis Gastritis (#11280)", 1761280},
    {"Quest Reward: Mimicking Nature's Call (#11281)", 1761281},
    {"Quest Reward: A Lesson in Fear (#11282)", 1761282},
    {"Quest Reward: Baleheim Bodycount (#11283)", 1761283},
    {"Quest Reward: The Yeti Next Door (#11284)", 1761284},
    {"Quest Reward: The Artifacts of Steel Gate (#11286)", 1761286},
    {"Quest Reward: The Shining Light (#11288)", 1761288},
    {"Quest Reward: Dragonflayer Battle Plans (#11290)", 1761290},
    {"Quest Reward: Preying Upon the Weak (#11292)", 1761292},
    {"Quest Reward: Bark for the Barleybrews! (#11293)", 1761293},
    {"Quest Reward: Bark for the Thunderbrews! (#11294)", 1761294},
    {"Quest Reward: Rivenwood Captives (#11296)", 1761296},
    {"Quest Reward: Brains! Brains! Brains! (#11301)", 1761301},
    {"Quest Reward: A Tailor-Made Formula (#11305)", 1761305},
    {"Quest Reward: Parts for the Job (#11309)", 1761309},
    {"Quest Reward: Warning: Some Assembly Required (#11310)", 1761310},
    {"Quest Reward: Seeds of the Blacksouled Keepers (#11319)", 1761319},
    {"Quest Reward: Did Someone Say \"Souvenir?\" (#11321)", 1761321},
    {"Quest Reward: Alpha Worg (#11324)", 1761324},
    {"Quest Reward: Alpha Worg (#11326)", 1761326},
    {"Quest Reward: Mission: Plague This! (#11332)", 1761332},
    {"Quest Reward: Anguish of Nifflevar (#11344)", 1761344},
    {"Quest Reward: Prizes for Pellets (#11345)", 1761345},
    {"Quest Reward: Wanted: Nazan's Riding Crop (#11354)", 1761354},
    {"Quest Reward: Fire Brigade Practice (#11360)", 1761360},
    {"Quest Reward: Fire Training (#11361)", 1761361},
    {"Quest Reward: Wanted: Keli'dan's Feathered Stave (#11362)", 1761362},
    {"Quest Reward: Wanted: Bladefist's Seal (#11363)", 1761363},
    {"Quest Reward: Wanted: Shattered Hand Centurions (#11364)", 1761364},
    {"Quest Reward: Wanted: The Heart of Quagmirran (#11368)", 1761368},
    {"Quest Reward: Wanted: A Black Stalker Egg (#11369)", 1761369},
    {"Quest Reward: Wanted: The Warlord's Treatise (#11370)", 1761370},
    {"Quest Reward: Wanted: Coilfang Myrmidons (#11371)", 1761371},
    {"Quest Reward: Wanted: The Headfeathers of Ikiss (#11372)", 1761372},
    {"Quest Reward: Wanted: Shaffar's Wondrous Pendant (#11373)", 1761373},
    {"Quest Reward: Wanted: The Exarch's Soul Gem (#11374)", 1761374},
    {"Quest Reward: Wanted: Murmur's Whisper (#11375)", 1761375},
    {"Quest Reward: Wanted: Malicious Instructors (#11376)", 1761376},
    {"Quest Reward: Revenge is Tasty (#11377)", 1761377},
    {"Quest Reward: Wanted: The Epoch Hunter's Head (#11378)", 1761378},
    {"Quest Reward: Super Hot Stew (#11379)", 1761379},
    {"Quest Reward: Manalicious (#11380)", 1761380},
    {"Quest Reward: Soup for the Soul (#11381)", 1761381},
    {"Quest Reward: Wanted: Aeonus's Hourglass (#11382)", 1761382},
    {"Quest Reward: Wanted: Rift Lords (#11383)", 1761383},
    {"Quest Reward: Wanted: A Warp Splinter Clipping (#11384)", 1761384},
    {"Quest Reward: Wanted: Sunseeker Channelers (#11385)", 1761385},
    {"Quest Reward: Wanted: Pathaleon's Projector (#11386)", 1761386},
    {"Quest Reward: Wanted: Tempest-Forge Destroyers (#11387)", 1761387},
    {"Quest Reward: Wanted: The Scroll of Skyriss (#11388)", 1761388},
    {"Quest Reward: Wanted: Arcatraz Sentinels (#11389)", 1761389},
    {"Quest Reward: I've Got a Flying Machine! (#11390)", 1761390},
    {"Quest Reward: Steel Gate Patrol (#11391)", 1761391},
    {"Quest Reward: Bring Down Those Shields (#11396)", 1761396},
    {"Quest Reward: Bring Down Those Shields (#11399)", 1761399},
    {"Quest Reward: Free at Last! (#11403)", 1761403},
    {"Quest Reward: Bark for Drohn's Distillery! (#11407)", 1761407},
    {"Quest Reward: Bark for T'chali's Voodoo Brewery! (#11408)", 1761408},
    {"Quest Reward: There and Back Again (#11412)", 1761412},
    {"Quest Reward: Did Someone Say \"Souvenir?\" (#11413)", 1761413},
    {"Quest Reward: It Goes to 11... (#11421)", 1761421},
    {"Quest Reward: Shield Hill (#11424)", 1761424},
    {"Quest Reward: Catch the Wild Wolpertinger! (#11431)", 1761431},
    {"Quest Reward: Gathered Pumpkins NYI (#11435)", 1761435},
    {"Quest Reward: [PH] Beer Garden A (#11437)", 1761437},
    {"Quest Reward: [PH] Beer Garden B (#11438)", 1761438},
    {"Quest Reward: Fire Brigade Practice (#11439)", 1761439},
    {"Quest Reward: Fire Brigade Practice (#11440)", 1761440},
    {"Quest Reward: Brewfest! (#11441)", 1761441},
    {"Quest Reward: Welcome to Brewfest! (#11442)", 1761442},
    {"Quest Reward: [PH] Beer Garden A (#11444)", 1761444},
    {"Quest Reward: [PH] Beer Garden B (#11445)", 1761445},
    {"Quest Reward: Brewfest! (#11446)", 1761446},
    {"Quest Reward: Welcome to Brewfest! (#11447)", 1761447},
    {"Quest Reward: Fire Training (#11449)", 1761449},
    {"Quest Reward: Fire Training (#11450)", 1761450},
    {"Quest Reward: Seek the Saboteurs (#11454)", 1761454},
    {"Quest Reward: Dead Man's Debt (#11467)", 1761467},
    {"Quest Reward: There Exists No Honor Among Birds (#11470)", 1761470},
    {"Quest Reward: The Jig is Up (#11471)", 1761471},
    {"Quest Reward: The Best of Brews (#11486)", 1761486},
    {"Quest Reward: The Best of Brews (#11487)", 1761487},
    {"Quest Reward: Hard to Kill (#11492)", 1761492},
    {"Quest Reward: Lightning Infused Relics (#11494)", 1761494},
    {"Quest Reward: The Delicate Sound of Thunder (#11495)", 1761495},
    {"Quest Reward: Wanted: The Signet Ring of Prince Kael'thas (#11499)", 1761499},
    {"Quest Reward: Wanted: Sisters of Torment (#11500)", 1761500},
    {"Quest Reward: News From the East (#11501)", 1761501},
    {"Quest Reward: Intercepting the Mana Cells (#11513)", 1761513},
    {"Quest Reward: Maintaining the Sunwell Portal (#11514)", 1761514},
    {"Quest Reward: Blood for Blood (#11515)", 1761515},
    {"Quest Reward: Blast the Gateway (#11516)", 1761516},
    {"Quest Reward: Discovering Your Roots (#11520)", 1761520},
    {"Quest Reward: Rediscovering Your Roots (#11521)", 1761521},
    {"Quest Reward: A Winter Veil Gift (#11528)", 1761528},
    {"Quest Reward: Ata'mal Armaments (#11544)", 1761544},
    {"Quest Reward: Open for Business (#11546)", 1761546},
    {"Quest Reward: Know Your Ley Lines (#11547)", 1761547},
    {"Quest Reward: Agamath, the First Gate (#11551)", 1761551},
    {"Quest Reward: Rohendor, the Second Gate (#11552)", 1761552},
    {"Quest Reward: Archonisus, the Final Gate (#11553)", 1761553},
    {"Quest Reward: A Friend in the Frontlines (#11554)", 1761554},
    {"Quest Reward: Honored by Your Allies (#11555)", 1761555},
    {"Quest Reward: Revered in the Field of Battle (#11556)", 1761556},
    {"Quest Reward: Exalted Among All Combatants (#11557)", 1761557},
    {"Quest Reward: Oh Noes, the Tadpoles! (#11560)", 1761560},
    {"Quest Reward: Succulent Orca Stew (#11564)", 1761564},
    {"Quest Reward: Surrender... Not! (#11566)", 1761566},
    {"Quest Reward: Escape from the Winterfin Caverns (#11570)", 1761570},
    {"Quest Reward: Return to Atuik (#11572)", 1761572},
    {"Quest Reward: The \"Chow\" Quest (123)aa COPY (#11578)", 1761578},
    {"Quest Reward: The \"Chow\" Quest (123)aa COPY (#11579)", 1761579},
    {"Quest Reward: Desecrate this Fire! (#11580)", 1761580},
    {"Quest Reward: Desecrate this Fire! (#11581)", 1761581},
    {"Quest Reward: Honor the Flame (#11583)", 1761583},
    {"Quest Reward: Honor the Flame (#11584)", 1761584},
    {"Quest Reward: We Strike! (#11592)", 1761592},
    {"Quest Reward: The Late William Allerton (#11600)", 1761600},
    {"Quest Reward: Cutting Off the Source (#11602)", 1761602},
    {"Quest Reward: In Wine, Truth (#11603)", 1761603},
    {"Quest Reward: Bury Those Cockroaches! (#11608)", 1761608},
    {"Quest Reward: Leading the Ancestors Home (#11610)", 1761610},
    {"Quest Reward: Taken by the Scourge (#11611)", 1761611},
    {"Quest Reward: Karuk's Oath (#11613)", 1761613},
    {"Quest Reward: Gamel the Cruel (#11619)", 1761619},
    {"Quest Reward: A Visit to the Curator (#11623)", 1761623},
    {"Quest Reward: The Emissary (#11626)", 1761626},
    {"Quest Reward: Vision of Air (#11631)", 1761631},
    {"Quest Reward: What the Cold Wind Brings... (#11632)", 1761632},
    {"Quest Reward: Return My Remains (#11638)", 1761638},
    {"Quest Reward: Revenge Upon Magmoth (#11639)", 1761639},
    {"Quest Reward: Neutralizing the Cauldrons (#11647)", 1761647},
    {"Quest Reward: The Plains of Nasam (#11652)", 1761652},
    {"Quest Reward: Hah... You're Not So Big Now! (#11653)", 1761653},
    {"Quest Reward: Burn in Effigy (#11656)", 1761656},
    {"Quest Reward: Torch Catching (#11657)", 1761657},
    {"Quest Reward: Orabus the Helmsman (#11661)", 1761661},
    {"Quest Reward: Escaping the Mist (#11664)", 1761664},
    {"Quest Reward: Crocolisks in the City (#11665)", 1761665},
    {"Quest Reward: Bait Bandits (#11666)", 1761666},
    {"Quest Reward: The One That Got Away (#11667)", 1761667},
    {"Quest Reward: Shrimpin' Ain't Easy (#11668)", 1761668},
    {"Quest Reward: Felblood Fillet (#11669)", 1761669},
    {"Quest Reward: It Was The Orcs, Honest! (#11670)", 1761670},
    {"Quest Reward: Get Me Outa Here! (#11673)", 1761673},
    {"Quest Reward: Stop the Plague (#11677)", 1761677},
    {"Quest Reward: Rescuing Evanor (#11681)", 1761681},
    {"Quest Reward: Fallen Necropolis (#11683)", 1761683},
    {"Quest Reward: Return with the Bad News (#11689)", 1761689},
    {"Quest Reward: Bring 'Em Back Alive (#11690)", 1761690},
    {"Quest Reward: There's Something Going On In Those Caves (#11694)", 1761694},
    {"Quest Reward: Might As Well Wipe Out the Scourge (#11698)", 1761698},
    {"Quest Reward: Back to the Airstrip (#11701)", 1761701},
    {"Quest Reward: Foolish Endeavors (#11705)", 1761705},
    {"Quest Reward: The Collapse (#11706)", 1761706},
    {"Quest Reward: Re-Cursive (#11712)", 1761712},
    {"Quest Reward: Vermin Extermination (#11714)", 1761714},
    {"Quest Reward: Trophies of Gammoth (#11722)", 1761722},
    {"Quest Reward: Deploy the Shake-n-Quake! (#11723)", 1761723},
    {"Quest Reward: Master and Servant (#11730)", 1761730},
    {"Quest Reward: Torch Tossing (#11731)", 1761731},
    {"Quest Reward: Desecrate this Fire! (#11732)", 1761732},
    {"Quest Reward: Desecrate this Fire! (#11734)", 1761734},
    {"Quest Reward: Desecrate this Fire! (#11735)", 1761735},
    {"Quest Reward: Desecrate this Fire! (#11736)", 1761736},
    {"Quest Reward: Desecrate this Fire! (#11737)", 1761737},
    {"Quest Reward: Desecrate this Fire! (#11738)", 1761738},
    {"Quest Reward: Desecrate this Fire! (#11739)", 1761739},
    {"Quest Reward: Desecrate this Fire! (#11740)", 1761740},
    {"Quest Reward: Desecrate this Fire! (#11741)", 1761741},
    {"Quest Reward: Desecrate this Fire! (#11742)", 1761742},
    {"Quest Reward: Desecrate this Fire! (#11743)", 1761743},
    {"Quest Reward: Desecrate this Fire! (#11744)", 1761744},
    {"Quest Reward: Desecrate this Fire! (#11745)", 1761745},
    {"Quest Reward: Desecrate this Fire! (#11746)", 1761746},
    {"Quest Reward: Desecrate this Fire! (#11747)", 1761747},
    {"Quest Reward: Desecrate this Fire! (#11748)", 1761748},
    {"Quest Reward: Desecrate this Fire! (#11749)", 1761749},
    {"Quest Reward: Desecrate this Fire! (#11750)", 1761750},
    {"Quest Reward: Desecrate this Fire! (#11751)", 1761751},
    {"Quest Reward: Desecrate this Fire! (#11752)", 1761752},
    {"Quest Reward: Desecrate this Fire! (#11753)", 1761753},
    {"Quest Reward: Desecrate this Fire! (#11754)", 1761754},
    {"Quest Reward: Desecrate this Fire! (#11755)", 1761755},
    {"Quest Reward: Desecrate this Fire! (#11756)", 1761756},
    {"Quest Reward: Desecrate this Fire! (#11757)", 1761757},
    {"Quest Reward: Desecrate this Fire! (#11758)", 1761758},
    {"Quest Reward: Desecrate this Fire! (#11759)", 1761759},
    {"Quest Reward: Desecrate this Fire! (#11760)", 1761760},
    {"Quest Reward: Desecrate this Fire! (#11761)", 1761761},
    {"Quest Reward: Desecrate this Fire! (#11762)", 1761762},
    {"Quest Reward: Desecrate this Fire! (#11763)", 1761763},
    {"Quest Reward: Desecrate this Fire! (#11764)", 1761764},
    {"Quest Reward: Desecrate this Fire! (#11765)", 1761765},
    {"Quest Reward: Desecrate this Fire! (#11766)", 1761766},
    {"Quest Reward: Desecrate this Fire! (#11767)", 1761767},
    {"Quest Reward: Desecrate this Fire! (#11768)", 1761768},
    {"Quest Reward: Desecrate this Fire! (#11769)", 1761769},
    {"Quest Reward: Desecrate this Fire! (#11770)", 1761770},
    {"Quest Reward: Desecrate this Fire! (#11771)", 1761771},
    {"Quest Reward: Desecrate this Fire! (#11772)", 1761772},
    {"Quest Reward: Desecrate this Fire! (#11773)", 1761773},
    {"Quest Reward: Desecrate this Fire! (#11774)", 1761774},
    {"Quest Reward: Desecrate this Fire! (#11775)", 1761775},
    {"Quest Reward: Desecrate this Fire! (#11776)", 1761776},
    {"Quest Reward: Desecrate this Fire! (#11777)", 1761777},
    {"Quest Reward: Desecrate this Fire! (#11778)", 1761778},
    {"Quest Reward: Desecrate this Fire! (#11779)", 1761779},
    {"Quest Reward: Desecrate this Fire! (#11780)", 1761780},
    {"Quest Reward: Desecrate this Fire! (#11781)", 1761781},
    {"Quest Reward: Desecrate this Fire! (#11782)", 1761782},
    {"Quest Reward: Desecrate this Fire! (#11783)", 1761783},
    {"Quest Reward: Desecrate this Fire! (#11784)", 1761784},
    {"Quest Reward: Desecrate this Fire! (#11785)", 1761785},
    {"Quest Reward: Desecrate this Fire! (#11786)", 1761786},
    {"Quest Reward: Desecrate this Fire! (#11787)", 1761787},
    {"Quest Reward: A Soldier in Need (#11789)", 1761789},
    {"Quest Reward: Enemies of the Light (#11792)", 1761792},
    {"Quest Reward: The Hunt is On (#11794)", 1761794},
    {"Quest Reward: The Siege (#11797)", 1761797},
    {"Quest Reward: The Gearmaster (#11798)", 1761798},
    {"Quest Reward: Desecrate this Fire! (#11799)", 1761799},
    {"Quest Reward: Desecrate this Fire! (#11800)", 1761800},
    {"Quest Reward: Desecrate this Fire! (#11801)", 1761801},
    {"Quest Reward: Desecrate this Fire! (#11802)", 1761802},
    {"Quest Reward: Desecrate this Fire! (#11803)", 1761803},
    {"Quest Reward: Honor the Flame (#11804)", 1761804},
    {"Quest Reward: Honor the Flame (#11805)", 1761805},
    {"Quest Reward: Honor the Flame (#11806)", 1761806},
    {"Quest Reward: Honor the Flame (#11807)", 1761807},
    {"Quest Reward: Honor the Flame (#11808)", 1761808},
    {"Quest Reward: Honor the Flame (#11809)", 1761809},
    {"Quest Reward: Honor the Flame (#11810)", 1761810},
    {"Quest Reward: Honor the Flame (#11811)", 1761811},
    {"Quest Reward: Honor the Flame (#11812)", 1761812},
    {"Quest Reward: Honor the Flame (#11813)", 1761813},
    {"Quest Reward: Honor the Flame (#11814)", 1761814},
    {"Quest Reward: Honor the Flame (#11815)", 1761815},
    {"Quest Reward: Honor the Flame (#11816)", 1761816},
    {"Quest Reward: Honor the Flame (#11817)", 1761817},
    {"Quest Reward: Honor the Flame (#11818)", 1761818},
    {"Quest Reward: Honor the Flame (#11819)", 1761819},
    {"Quest Reward: Honor the Flame (#11820)", 1761820},
    {"Quest Reward: Honor the Flame (#11821)", 1761821},
    {"Quest Reward: Honor the Flame (#11822)", 1761822},
    {"Quest Reward: Honor the Flame (#11823)", 1761823},
    {"Quest Reward: Honor the Flame (#11824)", 1761824},
    {"Quest Reward: Honor the Flame (#11825)", 1761825},
    {"Quest Reward: Honor the Flame (#11826)", 1761826},
    {"Quest Reward: Honor the Flame (#11827)", 1761827},
    {"Quest Reward: Honor the Flame (#11828)", 1761828},
    {"Quest Reward: Honor the Flame (#11829)", 1761829},
    {"Quest Reward: Honor the Flame (#11830)", 1761830},
    {"Quest Reward: Honor the Flame (#11831)", 1761831},
    {"Quest Reward: Honor the Flame (#11832)", 1761832},
    {"Quest Reward: Honor the Flame (#11833)", 1761833},
    {"Quest Reward: Honor the Flame (#11834)", 1761834},
    {"Quest Reward: Honor the Flame (#11835)", 1761835},
    {"Quest Reward: Honor the Flame (#11836)", 1761836},
    {"Quest Reward: Honor the Flame (#11837)", 1761837},
    {"Quest Reward: Honor the Flame (#11838)", 1761838},
    {"Quest Reward: Honor the Flame (#11839)", 1761839},
    {"Quest Reward: Honor the Flame (#11840)", 1761840},
    {"Quest Reward: Honor the Flame (#11841)", 1761841},
    {"Quest Reward: Honor the Flame (#11842)", 1761842},
    {"Quest Reward: Honor the Flame (#11843)", 1761843},
    {"Quest Reward: Honor the Flame (#11844)", 1761844},
    {"Quest Reward: Honor the Flame (#11845)", 1761845},
    {"Quest Reward: Honor the Flame (#11846)", 1761846},
    {"Quest Reward: Honor the Flame (#11847)", 1761847},
    {"Quest Reward: Honor the Flame (#11848)", 1761848},
    {"Quest Reward: Honor the Flame (#11849)", 1761849},
    {"Quest Reward: Honor the Flame (#11850)", 1761850},
    {"Quest Reward: Honor the Flame (#11851)", 1761851},
    {"Quest Reward: Honor the Flame (#11852)", 1761852},
    {"Quest Reward: Honor the Flame (#11853)", 1761853},
    {"Quest Reward: Honor the Flame (#11854)", 1761854},
    {"Quest Reward: Honor the Flame (#11855)", 1761855},
    {"Quest Reward: Honor the Flame (#11856)", 1761856},
    {"Quest Reward: Honor the Flame (#11857)", 1761857},
    {"Quest Reward: Honor the Flame (#11858)", 1761858},
    {"Quest Reward: Honor the Flame (#11859)", 1761859},
    {"Quest Reward: Honor the Flame (#11860)", 1761860},
    {"Quest Reward: Honor the Flame (#11861)", 1761861},
    {"Quest Reward: Honor the Flame (#11862)", 1761862},
    {"Quest Reward: Honor the Flame (#11863)", 1761863},
    {"Quest Reward: The Culler Cometh (#11868)", 1761868},
    {"Quest Reward: The Nefarious Clam Master... (#11872)", 1761872},
    {"Quest Reward: Give Fizzcrank the News (#11873)", 1761873},
    {"Quest Reward: Gaining the Advantage (#11875)", 1761875},
    {"Quest Reward: Sunfury Attack Plans (#11877)", 1761877},
    {"Quest Reward: Kaw the Mammoth Destroyer (#11879)", 1761879},
    {"Quest Reward: Ned, Lord of Rhinos... (#11884)", 1761884},
    {"Quest Reward: Adversarial Blood (#11885)", 1761885},
    {"Quest Reward: Unusual Activity (#11886)", 1761886},
    {"Quest Reward: An Innocent Disguise (#11891)", 1761891},
    {"Quest Reward: The Assassination of Harold Lane (#11892)", 1761892},
    {"Quest Reward: Patching Up (#11894)", 1761894},
    {"Quest Reward: Plug the Sinkholes (#11897)", 1761897},
    {"Quest Reward: Breaking Through (#11898)", 1761898},
    {"Quest Reward: It's Time for Action (#11903)", 1761903},
    {"Quest Reward: Postponing the Inevitable (#11905)", 1761905},
    {"Quest Reward: Cleaning Up the Pools (#11906)", 1761906},
    {"Quest Reward: The Sub-Chieftains (#11907)", 1761907},
    {"Quest Reward: Defeat the Gearmaster (#11909)", 1761909},
    {"Quest Reward: Quickening (#11911)", 1761911},
    {"Quest Reward: Take No Chances (#11913)", 1761913},
    {"Quest Reward: Keep the Secret Safe (#11914)", 1761914},
    {"Quest Reward: Hellscream's Champion (#11916)", 1761916},
    {"Quest Reward: Striking Back (#11917)", 1761917},
    {"Quest Reward: Drake Hunt (#11919)", 1761919},
    {"Quest Reward: More Torch Tossing (#11921)", 1761921},
    {"Quest Reward: Torch Tossing (#11922)", 1761922},
    {"Quest Reward: Torch Catching (#11923)", 1761923},
    {"Quest Reward: More Torch Catching (#11924)", 1761924},
    {"Quest Reward: More Torch Catching (#11925)", 1761925},
    {"Quest Reward: More Torch Tossing (#11926)", 1761926},
    {"Quest Reward: Stealing the Exodar's Flame (#11933)", 1761933},
    {"Quest Reward: Stealing Silvermoon's Flame (#11935)", 1761935},
    {"Quest Reward: Buying Some Time (#11938)", 1761938},
    {"Quest Reward: The Cell (#11943)", 1761943},
    {"Quest Reward: Surrounded! (#11944)", 1761944},
    {"Quest Reward: Striking Back (#11947)", 1761947},
    {"Quest Reward: Striking Back (#11948)", 1761948},
    {"Quest Reward: Not Without a Fight! (#11949)", 1761949},
    {"Quest Reward: Striking Back (#11952)", 1761952},
    {"Quest Reward: Striking Back (#11953)", 1761953},
    {"Quest Reward: Striking Back (#11954)", 1761954},
    {"Quest Reward: Saragosa's End (#11957)", 1761957},
    {"Quest Reward: Slay Loguhn (#11959)", 1761959},
    {"Quest Reward: Incense for the Summer Scorchlings (#11964)", 1761964},
    {"Quest Reward: Call to Arms! (#11965)", 1761965},
    {"Quest Reward: Incense for the Festival Scorchlings (#11966)", 1761966},
    {"Quest Reward: The Tides Turn (#11968)", 1761968},
    {"Quest Reward: Springing the Trap (#11969)", 1761969},
    {"Quest Reward: The Master of Summer Lore (#11970)", 1761970},
    {"Quest Reward: The Spinner of Summer Tales (#11971)", 1761971},
    {"Quest Reward: Shards of Ahune (#11972)", 1761972},
    {"Quest Reward: Prisoner of War (#11973)", 1761973},
    {"Quest Reward: Ice Shards (#11976)", 1761976},
    {"Quest Reward: Pride of the Horde (#11980)", 1761980},
    {"Quest Reward: Filling the Cages (#11984)", 1761984},
    {"Quest Reward: Into the Breach (#11985)", 1761985},
    {"Quest Reward: zzOLDFortune Card: Silver (#11987)", 1761987},
    {"Quest Reward: Subject to Interpretation (#11991)", 1761991},
    {"Quest Reward: The Runic Prophecies (#11993)", 1761993},
    {"Quest Reward: Prevent the Accord (#12004)", 1762004},
    {"Quest Reward: Prevent the Accord (#12005)", 1762005},
    {"Quest Reward: End Arcanimus (#12013)", 1762013},
    {"Quest Reward: Steady as a Rock? (#12014)", 1762014},
    {"Quest Reward: Meat on the Hook (#12017)", 1762017},
    {"Quest Reward: Last Rites (#12019)", 1762019},
    {"Quest Reward: This One Time, When I Was Drunk... (#12020)", 1762020},
    {"Quest Reward: Chug and Chuck! (#12022)", 1762022},
    {"Quest Reward: Mr. Floppy's Perilous Adventure (#12027)", 1762027},
    {"Quest Reward: Conversing With the Depths (#12032)", 1762032},
    {"Quest Reward: Repurposed Technology (#12035)", 1762035},
    {"Quest Reward: Search and Rescue (#12037)", 1762037},
    {"Quest Reward: The Lost Empire (#12041)", 1762041},
    {"Quest Reward: Heart of the Ancients (#12042)", 1762042},
    {"Quest Reward: Something That Doesn't Melt (#12047)", 1762047},
    {"Quest Reward: Scourge Armaments (#12048)", 1762048},
    {"Quest Reward: Lumber Hack (#12050)", 1762050},
    {"Quest Reward: Harp on This! (#12052)", 1762052},
    {"Quest Reward: The Might of the Horde (#12053)", 1762053},
    {"Quest Reward: The Runic Prophecies (#12058)", 1762058},
    {"Quest Reward: Chains of the Anub'ar (#12064)", 1762064},
    {"Quest Reward: Voices From the Dust (#12068)", 1762068},
    {"Quest Reward: Blightbeasts be Damned! (#12072)", 1762072},
    {"Quest Reward: Apply This Twice A Day (#12077)", 1762077},
    {"Quest Reward: Really Big Worm (#12080)", 1762080},
    {"Quest Reward: Dun-da-Dun-tah! (#12082)", 1762082},
    {"Quest Reward: Atop the Woodlands (#12083)", 1762083},
    {"Quest Reward: Atop the Woodlands (#12084)", 1762084},
    {"Quest Reward: Wanted: Magister Keldonus (#12089)", 1762089},
    {"Quest Reward: Wanted: Gigantaur (#12090)", 1762090},
    {"Quest Reward: Wanted: Dreadtalon (#12091)", 1762091},
    {"Quest Reward: Strengthen the Ancients (#12092)", 1762092},
    {"Quest Reward: Strengthen the Ancients (#12096)", 1762096},
    {"Quest Reward: Sarathstra, Scourge of the North (#12097)", 1762097},
    {"Quest Reward: Free at Last (#12099)", 1762099},
    {"Quest Reward: Descent into Darkness (#12105)", 1762105},
    {"Quest Reward: The End of the Line (#12107)", 1762107},
    {"Quest Reward: The End of the Line (#12110)", 1762110},
    {"Quest Reward: Where the Wild Things Roam (#12111)", 1762111},
    {"Quest Reward: Therapy (#12114)", 1762114},
    {"Quest Reward: Travel to Moa'ki Harbor (#12117)", 1762117},
    {"Quest Reward: Travel to Moa'ki Harbor (#12118)", 1762118},
    {"Quest Reward: Drak'aguul's Mallet (#12120)", 1762120},
    {"Quest Reward: Smash the Pumpkin (#12133)", 1762133},
    {"Quest Reward: Sasha's Hunt (#12134)", 1762134},
    {"Quest Reward: \"Let the Fires Come!\" (#12135)", 1762135},
    {"Quest Reward: The Translated Tome (#12136)", 1762136},
    {"Quest Reward: \"Let the Fires Come!\" (#12139)", 1762139},
    {"Quest Reward: All Hail Roanauk! (#12140)", 1762140},
    {"Quest Reward: Canyon Chase (#12143)", 1762143},
    {"Quest Reward: Canyon Chase (#12145)", 1762145},
    {"Quest Reward: Wanton Warlord (#12151)", 1762151},
    {"Quest Reward: Jin'arrak's End (#12152)", 1762152},
    {"Quest Reward: The Iron Thane and His Anvil (#12153)", 1762153},
    {"Quest Reward: Smash the Pumpkin (#12155)", 1762155},
    {"Quest Reward: Souls at Unrest (#12159)", 1762159},
    {"Quest Reward: Hour of the Worg (#12164)", 1762164},
    {"Quest Reward: The High Cultist (#12169)", 1762169},
    {"Quest Reward: Blackriver Brawl (#12170)", 1762170},
    {"Quest Reward: Gray Worg Hides (#12175)", 1762175},
    {"Quest Reward: A Minor Substitution (#12176)", 1762176},
    {"Quest Reward: Put on Your Best Face for Loken (#12185)", 1762185},
    {"Quest Reward: The Forsaken Blight and You: How Not to Die (#12188)", 1762188},
    {"Quest Reward: Chug and Chuck! (#12191)", 1762191},
    {"Quest Reward: This One Time, When I Was Drunk... (#12192)", 1762192},
    {"Quest Reward: Say, There Wouldn't Happen to be a Souvenir This Year, Would There? (#12193)", 1762193},
    {"Quest Reward: Say, There Wouldn't Happen to be a Souvenir This Year, Would There? (#12194)", 1762194},
    {"Quest Reward: Bringing Down the Iron Thane (#12199)", 1762199},
    {"Quest Reward: Vordrassil's Fall (#12207)", 1762207},
    {"Quest Reward: Let Them Not Rise! (#12211)", 1762211},
    {"Quest Reward: The Failed World Tree (#12219)", 1762219},
    {"Quest Reward: The Forsaken Blight (#12221)", 1762221},
    {"Quest Reward: The Kor'kron Vanguard! (#12224)", 1762224},
    {"Quest Reward: Doing Your Duty (#12227)", 1762227},
    {"Quest Reward: A Possible Link (#12229)", 1762229},
    {"Quest Reward: Bombard the Ballistae (#12232)", 1762232},
    {"Quest Reward: Ursoc, the Bear God (#12236)", 1762236},
    {"Quest Reward: Cleansing Drak'Tharon (#12238)", 1762238},
    {"Quest Reward: Vordrassil's Seeds (#12242)", 1762242},
    {"Quest Reward: Fire Upon the Waters (#12243)", 1762243},
    {"Quest Reward: Shredder Repair (#12244)", 1762244},
    {"Quest Reward: A Possible Link (#12246)", 1762246},
    {"Quest Reward: Ursoc, the Bear God (#12249)", 1762249},
    {"Quest Reward: Vordrassil's Seeds (#12250)", 1762250},
    {"Quest Reward: Return to the High Commander (#12251)", 1762251},
    {"Quest Reward: Torture the Torturer (#12252)", 1762252},
    {"Quest Reward: The Thane of Voldrune (#12255)", 1762255},
    {"Quest Reward: The Fate of the Dead (#12258)", 1762258},
    {"Quest Reward: The Thane of Voldrune (#12259)", 1762259},
    {"Quest Reward: Neltharion's Flame (#12267)", 1762267},
    {"Quest Reward: Shred the Alliance (#12270)", 1762270},
    {"Quest Reward: The Denouncement (#12273)", 1762273},
    {"Quest Reward: Leave Nothing to Chance (#12277)", 1762277},
    {"Quest Reward: Imprints on the Past (#12282)", 1762282},
    {"Quest Reward: Do Unto Others (#12285)", 1762285},
    {"Quest Reward: Candy Bucket (#12286)", 1762286},
    {"Quest Reward: Local Support (#12292)", 1762292},
    {"Quest Reward: Northern Hospitality (#12299)", 1762299},
    {"Quest Reward: Funding the War Effort (#12303)", 1762303},
    {"Quest Reward: Parting Thoughts (#12305)", 1762305},
    {"Quest Reward: Wolfsbane Root (#12307)", 1762307},
    {"Quest Reward: Escape from Silverbrook (#12308)", 1762308},
    {"Quest Reward: The Noble's Crypt (#12311)", 1762311},
    {"Quest Reward: Down With Captain Zorna! (#12314)", 1762314},
    {"Quest Reward: Crush Captain Brightwater! (#12315)", 1762315},
    {"Quest Reward: Keep Them at Bay! (#12316)", 1762316},
    {"Quest Reward: Keep Them at Bay (#12317)", 1762317},
    {"Quest Reward: A Righteous Sermon (#12321)", 1762321},
    {"Quest Reward: Smoke 'Em Out (#12323)", 1762323},
    {"Quest Reward: Smoke 'Em Out (#12324)", 1762324},
    {"Quest Reward: Steamtank Surprise (#12326)", 1762326},
    {"Quest Reward: Ruuna's Request (#12328)", 1762328},
    {"Quest Reward: Anatoly Will Talk (#12330)", 1762330},
    {"Quest Reward: Candy Bucket (#12331)", 1762331},
    {"Quest Reward: Candy Bucket (#12332)", 1762332},
    {"Quest Reward: Candy Bucket (#12333)", 1762333},
    {"Quest Reward: Candy Bucket (#12334)", 1762334},
    {"Quest Reward: Candy Bucket (#12335)", 1762335},
    {"Quest Reward: Candy Bucket (#12336)", 1762336},
    {"Quest Reward: Candy Bucket (#12337)", 1762337},
    {"Quest Reward: Candy Bucket (#12338)", 1762338},
    {"Quest Reward: Candy Bucket (#12339)", 1762339},
    {"Quest Reward: Candy Bucket (#12340)", 1762340},
    {"Quest Reward: Candy Bucket (#12341)", 1762341},
    {"Quest Reward: Candy Bucket (#12342)", 1762342},
    {"Quest Reward: Candy Bucket (#12343)", 1762343},
    {"Quest Reward: Candy Bucket (#12344)", 1762344},
    {"Quest Reward: Candy Bucket (#12345)", 1762345},
    {"Quest Reward: Candy Bucket (#12346)", 1762346},
    {"Quest Reward: Candy Bucket (#12347)", 1762347},
    {"Quest Reward: Candy Bucket (#12348)", 1762348},
    {"Quest Reward: Candy Bucket (#12349)", 1762349},
    {"Quest Reward: Candy Bucket (#12350)", 1762350},
    {"Quest Reward: Candy Bucket (#12351)", 1762351},
    {"Quest Reward: Candy Bucket (#12352)", 1762352},
    {"Quest Reward: Candy Bucket (#12353)", 1762353},
    {"Quest Reward: Candy Bucket (#12354)", 1762354},
    {"Quest Reward: Candy Bucket (#12355)", 1762355},
    {"Quest Reward: Candy Bucket (#12356)", 1762356},
    {"Quest Reward: Candy Bucket (#12357)", 1762357},
    {"Quest Reward: Candy Bucket (#12358)", 1762358},
    {"Quest Reward: Candy Bucket (#12359)", 1762359},
    {"Quest Reward: Candy Bucket (#12360)", 1762360},
    {"Quest Reward: Candy Bucket (#12361)", 1762361},
    {"Quest Reward: Candy Bucket (#12362)", 1762362},
    {"Quest Reward: Candy Bucket (#12363)", 1762363},
    {"Quest Reward: Candy Bucket (#12364)", 1762364},
    {"Quest Reward: Candy Bucket (#12365)", 1762365},
    {"Quest Reward: Candy Bucket (#12366)", 1762366},
    {"Quest Reward: Candy Bucket (#12367)", 1762367},
    {"Quest Reward: Candy Bucket (#12368)", 1762368},
    {"Quest Reward: Candy Bucket (#12369)", 1762369},
    {"Quest Reward: Candy Bucket (#12370)", 1762370},
    {"Quest Reward: Candy Bucket (#12371)", 1762371},
    {"Quest Reward: Candy Bucket (#12373)", 1762373},
    {"Quest Reward: Candy Bucket (#12374)", 1762374},
    {"Quest Reward: Candy Bucket (#12375)", 1762375},
    {"Quest Reward: Candy Bucket (#12376)", 1762376},
    {"Quest Reward: Candy Bucket (#12377)", 1762377},
    {"Quest Reward: Candy Bucket (#12378)", 1762378},
    {"Quest Reward: Candy Bucket (#12379)", 1762379},
    {"Quest Reward: Candy Bucket (#12380)", 1762380},
    {"Quest Reward: Candy Bucket (#12381)", 1762381},
    {"Quest Reward: Candy Bucket (#12382)", 1762382},
    {"Quest Reward: Candy Bucket (#12383)", 1762383},
    {"Quest Reward: Candy Bucket (#12384)", 1762384},
    {"Quest Reward: Candy Bucket (#12385)", 1762385},
    {"Quest Reward: Candy Bucket (#12386)", 1762386},
    {"Quest Reward: Candy Bucket (#12387)", 1762387},
    {"Quest Reward: Candy Bucket (#12388)", 1762388},
    {"Quest Reward: Candy Bucket (#12389)", 1762389},
    {"Quest Reward: Candy Bucket (#12390)", 1762390},
    {"Quest Reward: Candy Bucket (#12391)", 1762391},
    {"Quest Reward: Candy Bucket (#12392)", 1762392},
    {"Quest Reward: Candy Bucket (#12393)", 1762393},
    {"Quest Reward: Candy Bucket (#12394)", 1762394},
    {"Quest Reward: Candy Bucket (#12395)", 1762395},
    {"Quest Reward: Candy Bucket (#12396)", 1762396},
    {"Quest Reward: Candy Bucket (#12397)", 1762397},
    {"Quest Reward: Candy Bucket (#12398)", 1762398},
    {"Quest Reward: Candy Bucket (#12399)", 1762399},
    {"Quest Reward: Candy Bucket (#12400)", 1762400},
    {"Quest Reward: Candy Bucket (#12401)", 1762401},
    {"Quest Reward: Candy Bucket (#12402)", 1762402},
    {"Quest Reward: Candy Bucket (#12403)", 1762403},
    {"Quest Reward: Candy Bucket (#12404)", 1762404},
    {"Quest Reward: Candy Bucket (#12405)", 1762405},
    {"Quest Reward: Candy Bucket (#12406)", 1762406},
    {"Quest Reward: Candy Bucket (#12407)", 1762407},
    {"Quest Reward: Candy Bucket (#12408)", 1762408},
    {"Quest Reward: Candy Bucket (#12409)", 1762409},
    {"Quest Reward: Candy Bucket (#12410)", 1762410},
    {"Quest Reward: My Enemy's Friend (#12412)", 1762412},
    {"Quest Reward: Attack on Silverbrook (#12413)", 1762413},
    {"Quest Reward: Through Fields of Flame (#12418)", 1762418},
    {"Quest Reward: The Conquest Pit: Final Showdown (#12431)", 1762431},
    {"Quest Reward: Riding the Red Rocket (#12432)", 1762432},
    {"Quest Reward: Seeking Solvent (#12433)", 1762433},
    {"Quest Reward: Always Seeking Solvent (#12434)", 1762434},
    {"Quest Reward: Riding the Red Rocket (#12437)", 1762437},
    {"Quest Reward: Wanted: Kreug Oathbreaker (#12438)", 1762438},
    {"Quest Reward: Wanted: High Shaman Bloodpaw (#12441)", 1762441},
    {"Quest Reward: Wanted: Onslaught Commander Iustus (#12442)", 1762442},
    {"Quest Reward: Seeking Solvent (#12443)", 1762443},
    {"Quest Reward: Blackriver Skirmish (#12444)", 1762444},
    {"Quest Reward: Always Seeking Solvent (#12446)", 1762446},
    {"Quest Reward: Through Fields of Flame (#12450)", 1762450},
    {"Quest Reward: Eyes Above (#12453)", 1762453},
    {"Quest Reward: The Plume of Alystros (#12456)", 1762456},
    {"Quest Reward: That Which Creates Can Also Destroy (#12459)", 1762459},
    {"Quest Reward: Breaking Off A Piece (#12462)", 1762462},
    {"Quest Reward: My Old Enemy (#12464)", 1762464},
    {"Quest Reward: Chasing Icestorm: Thel'zan's Phylactery (#12467)", 1762467},
    {"Quest Reward: Mystery of the Infinite (#12470)", 1762470},
    {"Quest Reward: To Fordragon Hold! (#12474)", 1762474},
    {"Quest Reward: The Return of the Crusade? (#12476)", 1762476},
    {"Quest Reward: Frostmourne Cavern (#12478)", 1762478},
    {"Quest Reward: Adding Injury to Insult (#12481)", 1762481},
    {"Quest Reward: Direbrew's Dire Brew (#12491)", 1762491},
    {"Quest Reward: Direbrew's Dire Brew (#12492)", 1762492},
    {"Quest Reward: On Ruby Wings (#12498)", 1762498},
    {"Quest Reward: Argent Crusade, We Are Leaving! (#12504)", 1762504},
    {"Quest Reward: Precious Elemental Fluids (#12510)", 1762510},
    {"Quest Reward: Leave No One Behind (#12512)", 1762512},
    {"Quest Reward: Nice Hat... (#12513)", 1762513},
    {"Quest Reward: Nice Hat... (#12515)", 1762515},
    {"Quest Reward: Too Much of a Good Thing (#12516)", 1762516},
    {"Quest Reward: Rogues Deck (#12517)", 1762517},
    {"Quest Reward: Mages Deck (#12518)", 1762518},
    {"Quest Reward: Wipe That Grin Off His Face (#12525)", 1762525},
    {"Quest Reward: Flown the Coop! (#12532)", 1762532},
    {"Quest Reward: The Sapphire Queen (#12534)", 1762534},
    {"Quest Reward: Lightning Definitely Strikes Twice (#12537)", 1762537},
    {"Quest Reward: The Cleansing Of Jintha'kalar (#12545)", 1762545},
    {"Quest Reward: Reclamation (#12546)", 1762546},
    {"Quest Reward: The Activation Rune (#12547)", 1762547},
    {"Quest Reward: Malas the Corrupter (#12554)", 1762554},
    {"Quest Reward: A Tangled Skein (#12555)", 1762555},
    {"Quest Reward: Rhino Mastery: The Kill (#12556)", 1762556},
    {"Quest Reward: Dreadsaber Mastery: Ready to Pounce (#12558)", 1762558},
    {"Quest Reward: An Issue of Trust (#12561)", 1762561},
    {"Quest Reward: Crocolisk Mastery: The Ambush (#12569)", 1762569},
    {"Quest Reward: Fortunate Misunderstandings (#12570)", 1762570},
    {"Quest Reward: Making Peace (#12573)", 1762573},
    {"Quest Reward: The Lost Mistwhisper Treasure (#12575)", 1762575},
    {"Quest Reward: A Hero's Burden (#12581)", 1762581},
    {"Quest Reward: Pure Evil (#12584)", 1762584},
    {"Quest Reward: The Great Hunter's Challenge (#12592)", 1762592},
    {"Quest Reward: Pa'Troll (#12596)", 1762596},
    {"Quest Reward: Congratulations! (#12604)", 1762604},
    {"Quest Reward: Stocking the Shelves (#12609)", 1762609},
    {"Quest Reward: Clipping Their Wings (#12610)", 1762610},
    {"Quest Reward: Returned Sevenfold (#12611)", 1762611},
    {"Quest Reward: Post-partum Aggression (#12614)", 1762614},
    {"Quest Reward: Chamber of Secrets (#12616)", 1762616},
    {"Quest Reward: Exterminate the Intruders (#12617)", 1762617},
    {"Quest Reward: The Emblazoned Runeblade (#12619)", 1762619},
    {"Quest Reward: The Leaders at Jin'Alai (#12622)", 1762622},
    {"Quest Reward: It Could Be Anywhere! (#12624)", 1762624},
    {"Quest Reward: But First My Offspring (#12632)", 1762632},
    {"Quest Reward: The Frozen Earth (#12639)", 1762639},
    {"Quest Reward: An End to the Suffering (#12647)", 1762647},
    {"Quest Reward: Feedin' Da Goolz (#12652)", 1762652},
    {"Quest Reward: The Might Of The Scourge (#12657)", 1762657},
    {"Quest Reward: Infiltrating Voltarus (#12661)", 1762661},
    {"Quest Reward: Bringing Down Heb'Jin (#12662)", 1762662},
    {"Quest Reward: So Far, So Bad (#12669)", 1762669},
    {"Quest Reward: Hell Hath a Fury (#12674)", 1762674},
    {"Quest Reward: Sabotage (#12676)", 1762676},
    {"Quest Reward: If Chaos Drives, Let Suffering Hold The Reins (#12678)", 1762678},
    {"Quest Reward: Tonight We Dine In Havenshire (#12679)", 1762679},
    {"Quest Reward: Reagent Agent (#12681)", 1762681},
    {"Quest Reward: You Reap What You Sow (#12685)", 1762685},
    {"Quest Reward: Into the Realm of Shadows (#12687)", 1762687},
    {"Quest Reward: A Timeworn Coffer (#12691)", 1762691},
    {"Quest Reward: The Gift That Keeps On Giving (#12698)", 1762698},
    {"Quest Reward: Massacre At Light's Point (#12701)", 1762701},
    {"Quest Reward: Victory At Death's Breach! (#12706)", 1762706},
    {"Quest Reward: Wooly Justice (#12707)", 1762707},
    {"Quest Reward: Hexed Caches (#12709)", 1762709},
    {"Quest Reward: Betrayal (#12713)", 1762713},
    {"Quest Reward: The Plaguebringer's Request (#12716)", 1762716},
    {"Quest Reward: Noth's Special Brew (#12717)", 1762717},
    {"Quest Reward: More Skulls For Brew (#12718)", 1762718},
    {"Quest Reward: How To Win Friends And Influence Enemies (#12720)", 1762720},
    {"Quest Reward: Rampage (#12721)", 1762721},
    {"Quest Reward: Lambs To The Slaughter (#12722)", 1762722},
    {"Quest Reward: The Path Of The Righteous Crusader (#12724)", 1762724},
    {"Quest Reward: Bloody Breakout (#12727)", 1762727},
    {"Quest Reward: Monitoring the Rift: Winterfin Cavern (#12728)", 1762728},
    {"Quest Reward: Convocation at Zol'Heb (#12730)", 1762730},
    {"Quest Reward: Death's Challenge (#12733)", 1762733},
    {"Quest Reward: Parachutes for the Argent Crusade (#12740)", 1762740},
    {"Quest Reward: A Sort Of Homecoming (#12751)", 1762751},
    {"Quest Reward: Scarlet Armies Approach... (#12757)", 1762757},
    {"Quest Reward: An End To All Things... (#12779)", 1762779},
    {"Quest Reward: Welcome! (#12781)", 1762781},
    {"Quest Reward: Swords Deck (#12798)", 1762798},
    {"Quest Reward: The Light of Dawn (#12801)", 1762801},
    {"Quest Reward: You'll Need a Gryphon (#12814)", 1762814},
    {"Quest Reward: A Delicate Touch (#12820)", 1762820},
    {"Quest Reward: Demolitionist Extraordinaire (#12824)", 1762824},
    {"Quest Reward: Ample Inspiration (#12828)", 1762828},
    {"Quest Reward: Bitter Departure (#12832)", 1762832},
    {"Quest Reward: In Strict Confidence (#12840)", 1762840},
    {"Quest Reward: They Took Our Men! (#12843)", 1762843},
    {"Quest Reward: The Admiral Revealed (#12852)", 1762852},
    {"Quest Reward: Wanted: Ragemane's Flipper (#12857)", 1762857},
    {"Quest Reward: This Just In: Fire Still Hot! (#12859)", 1762859},
    {"Quest Reward: Trolls Is Gone Crazy! (#12861)", 1762861},
    {"Quest Reward: Loyal Companions (#12865)", 1762865},
    {"Quest Reward: Sirana Iceshriek (#12868)", 1762868},
    {"Quest Reward: Ancient Relics (#12870)", 1762870},
    {"Quest Reward: Norgannon's Shell (#12872)", 1762872},
    {"Quest Reward: Fervor of the Frostborn (#12874)", 1762874},
    {"Quest Reward: Ancient Relics (#12882)", 1762882},
    {"Quest Reward: The Drakkensryd (#12886)", 1762886},
    {"Quest Reward: Free Your Mind (#12893)", 1762893},
    {"Quest Reward: The Shadow Vault (#12898)", 1762898},
    {"Quest Reward: The Shadow Vault (#12899)", 1762899},
    {"Quest Reward: Making a Harness (#12900)", 1762900},
    {"Quest Reward: That's What Friends Are For... (#12903)", 1762903},
    {"Quest Reward: Discipline (#12906)", 1762906},
    {"Quest Reward: Gem Perfection (#12918)", 1762918},
    {"Quest Reward: The Storm King's Vengeance (#12919)", 1762919},
    {"Quest Reward: Forging an Alliance (#12924)", 1762924},
    {"Quest Reward: Norgannon's Shell (#12928)", 1762928},
    {"Quest Reward: The Amphitheater of Anguish: Tuskarrmageddon! (#12935)", 1762935},
    {"Quest Reward: Candy Bucket (#12940)", 1762940},
    {"Quest Reward: Candy Bucket (#12941)", 1762941},
    {"Quest Reward: Off With Their Black Wings (#12942)", 1762942},
    {"Quest Reward: Shadow Vault Decree (#12943)", 1762943},
    {"Quest Reward: Candy Bucket (#12944)", 1762944},
    {"Quest Reward: Candy Bucket (#12945)", 1762945},
    {"Quest Reward: Candy Bucket (#12946)", 1762946},
    {"Quest Reward: Candy Bucket (#12947)", 1762947},
    {"Quest Reward: The Champion of Anguish (#12948)", 1762948},
    {"Quest Reward: Candy Bucket (#12950)", 1762950},
    {"Quest Reward: Gem Perfection (#12952)", 1762952},
    {"Quest Reward: Valkyrion Must Burn (#12953)", 1762953},
    {"Quest Reward: Eliminate the Competition (#12955)", 1762955},
    {"Quest Reward: Shipment: Blood Jade Amulet  (#12958)", 1762958},
    {"Quest Reward: Shipment: Glowing Ivory Figurine (#12959)", 1762959},
    {"Quest Reward: Shipment: Wicked Sun Brooch (#12960)", 1762960},
    {"Quest Reward: Shipment: Intricate Bone Figurine (#12961)", 1762961},
    {"Quest Reward: Shipment: Bright Armor Relic (#12962)", 1762962},
    {"Quest Reward: Shipment: Shifting Sun Curio  (#12963)", 1762963},
    {"Quest Reward: The Gifts of Loken (#12965)", 1762965},
    {"Quest Reward: Taking on All Challengers (#12971)", 1762971},
    {"Quest Reward: The Brothers Bronzebeard (#12973)", 1762973},
    {"Quest Reward: Ebon Blade Prisoners (#12982)", 1762982},
    {"Quest Reward: Valduran the Stormborn (#12984)", 1762984},
    {"Quest Reward: Fate of the Titans (#12986)", 1762986},
    {"Quest Reward: The Slithering Darkness (#12989)", 1762989},
    {"Quest Reward: Crush Dem Vrykuls! (#12992)", 1762992},
    {"Quest Reward: Emergency Measures (#13000)", 1763000},
    {"Quest Reward: Gem Perfection (#13002)", 1763002},
    {"Quest Reward: Gem Perfection (#13004)", 1763004},
    {"Quest Reward: The Earthen Oath (#13005)", 1763005},
    {"Quest Reward: The Iron Colossus (#13007)", 1763007},
    {"Quest Reward: Krolmir, Hammer of Storms (#13010)", 1763010},
    {"Quest Reward: Sardis the Elder (#13012)", 1763012},
    {"Quest Reward: Beldak the Elder (#13013)", 1763013},
    {"Quest Reward: Morthie the Elder (#13014)", 1763014},
    {"Quest Reward: Fargal the Elder (#13015)", 1763015},
    {"Quest Reward: Northal the Elder (#13016)", 1763016},
    {"Quest Reward: Jarten the Elder (#13017)", 1763017},
    {"Quest Reward: Sandrene the Elder (#13018)", 1763018},
    {"Quest Reward: Thoim the Elder (#13019)", 1763019},
    {"Quest Reward: Stonebeard the Elder (#13020)", 1763020},
    {"Quest Reward: Igasho the Elder (#13021)", 1763021},
    {"Quest Reward: Nurgen the Elder (#13022)", 1763022},
    {"Quest Reward: Kilias the Elder (#13023)", 1763023},
    {"Quest Reward: Wanikaya the Elder (#13024)", 1763024},
    {"Quest Reward: Lunaro the Elder (#13025)", 1763025},
    {"Quest Reward: Bluewolf the Elder (#13026)", 1763026},
    {"Quest Reward: Tauros the Elder (#13027)", 1763027},
    {"Quest Reward: Graymane the Elder (#13028)", 1763028},
    {"Quest Reward: Pamuya the Elder (#13029)", 1763029},
    {"Quest Reward: Whurain the Elder (#13030)", 1763030},
    {"Quest Reward: Skywarden the Elder (#13031)", 1763031},
    {"Quest Reward: Muraco the Elder (#13032)", 1763032},
    {"Quest Reward: Arp the Elder (#13033)", 1763033},
    {"Quest Reward: Defending The Vanguard (#13039)", 1763039},
    {"Quest Reward: Curing The Incurable (#13040)", 1763040},
    {"Quest Reward: Finish the Shipment (#13041)", 1763041},
    {"Quest Reward: The Sum is Greater than the Parts (#13043)", 1763043},
    {"Quest Reward: The Reckoning (#13047)", 1763047},
    {"Quest Reward: Territorial Trespass (#13051)", 1763051},
    {"Quest Reward: There's Always Time for Revenge (#13056)", 1763056},
    {"Quest Reward: Changing the Wind's Course (#13058)", 1763058},
    {"Quest Reward: Revenge for the Vargul (#13059)", 1763059},
    {"Quest Reward: Ohanzee the Elder (#13065)", 1763065},
    {"Quest Reward: Yurauk the Elder (#13066)", 1763066},
    {"Quest Reward: Chogan'gada the Elder (#13067)", 1763067},
    {"Quest Reward: Light Within the Darkness (#13083)", 1763083},
    {"Quest Reward: The Last Line Of Defense (#13086)", 1763086},
    {"Quest Reward: The Art of Being a Water Terror (#13091)", 1763091},
    {"Quest Reward: Reading the Bones (#13092)", 1763092},
    {"Quest Reward: Reading the Bones (#13093)", 1763093},
    {"Quest Reward: Have They No Shame? (#13094)", 1763094},
    {"Quest Reward: Have They No Shame? (#13095)", 1763095},
    {"Quest Reward: Gal'darah Must Pay (#13096)", 1763096},
    {"Quest Reward: For Posterity (#13098)", 1763098},
    {"Quest Reward: Infused Mushroom Meatloaf (#13100)", 1763100},
    {"Quest Reward: Convention at the Legerdemain (#13101)", 1763101},
    {"Quest Reward: Sewer Stew (#13102)", 1763102},
    {"Quest Reward: Cheese for Glowergold (#13103)", 1763103},
    {"Quest Reward: Mustard Dogs! (#13107)", 1763107},
    {"Quest Reward: Whatever it Takes! (#13108)", 1763108},
    {"Quest Reward: Diametrically Opposed (#13109)", 1763109},
    {"Quest Reward: The Restless Dead (#13110)", 1763110},
    {"Quest Reward: One of a Kind (#13111)", 1763111},
    {"Quest Reward: Infused Mushroom Meatloaf (#13112)", 1763112},
    {"Quest Reward: Convention at the Legerdemain (#13113)", 1763113},
    {"Quest Reward: Sewer Stew (#13114)", 1763114},
    {"Quest Reward: Cheese for Glowergold (#13115)", 1763115},
    {"Quest Reward: Mustard Dogs! (#13116)", 1763116},
    {"Quest Reward: The Struggle Persists (#13124)", 1763124},
    {"Quest Reward: The Air Stands Still (#13125)", 1763125},
    {"Quest Reward: A Wing and a Prayer (#13128)", 1763128},
    {"Quest Reward: Head Games (#13129)", 1763129},
    {"Quest Reward: The Stone That Started A Revolution (#13130)", 1763130},
    {"Quest Reward: Junk in My Trunk (#13131)", 1763131},
    {"Quest Reward: Vengeance Be Mine! (#13132)", 1763132},
    {"Quest Reward: Not-So-Honorable Combat (#13137)", 1763137},
    {"Quest Reward: Banshee's Revenge (#13142)", 1763142},
    {"Quest Reward: Killing Two Scourge With One Skeleton (#13144)", 1763144},
    {"Quest Reward: The Vile Hold (#13145)", 1763145},
    {"Quest Reward: Necklace Repair (#13148)", 1763148},
    {"Quest Reward: A Royal Escort (#13151)", 1763151},
    {"Quest Reward: Warding the Warriors (#13153)", 1763153},
    {"Quest Reward: Bones and Arrows (#13154)", 1763154},
    {"Quest Reward: A Rare Herb (#13156)", 1763156},
    {"Quest Reward: The Crusaders' Pinnacle (#13157)", 1763157},
    {"Quest Reward: Containment (#13159)", 1763159},
    {"Quest Reward: The Rider of the Unholy (#13161)", 1763161},
    {"Quest Reward: The Rider of Frost (#13162)", 1763162},
    {"Quest Reward: The Rider of Blood (#13163)", 1763163},
    {"Quest Reward: The Fate of Bloodbane (#13164)", 1763164},
    {"Quest Reward: Death to the Traitor King (#13167)", 1763167},
    {"Quest Reward: Seeds of Chaos (#13172)", 1763172},
    {"Quest Reward: No Mercy for the Merciless (#13177)", 1763177},
    {"Quest Reward: Slay them all! (#13178)", 1763178},
    {"Quest Reward: No Mercy for the Merciless (#13179)", 1763179},
    {"Quest Reward: Slay them all! (#13180)", 1763180},
    {"Quest Reward: Victory in Wintergrasp (#13181)", 1763181},
    {"Quest Reward: Don't Forget the Eggs! (#13182)", 1763182},
    {"Quest Reward: Victory in Wintergrasp (#13183)", 1763183},
    {"Quest Reward: Stop the Siege (#13185)", 1763185},
    {"Quest Reward: Stop the Siege (#13186)", 1763186},
    {"Quest Reward: The Faceless Ones (#13187)", 1763187},
    {"Quest Reward: Fueling the Demolishers (#13191)", 1763191},
    {"Quest Reward: Warding the Walls (#13192)", 1763192},
    {"Quest Reward: Bones and Arrows (#13193)", 1763193},
    {"Quest Reward: Healing with Roses (#13194)", 1763194},
    {"Quest Reward: A Rare Herb (#13195)", 1763195},
    {"Quest Reward: Bones and Arrows (#13196)", 1763196},
    {"Quest Reward: Fueling the Demolishers (#13197)", 1763197},
    {"Quest Reward: Warding the Warriors (#13198)", 1763198},
    {"Quest Reward: Bones and Arrows (#13199)", 1763199},
    {"Quest Reward: Fueling the Demolishers (#13200)", 1763200},
    {"Quest Reward: Healing with Roses (#13201)", 1763201},
    {"Quest Reward: Jinxing the Walls (#13202)", 1763202},
    {"Quest Reward: A Winter Veil Gift (#13203)", 1763203},
    {"Quest Reward: Disarmament (#13205)", 1763205},
    {"Quest Reward: Disarmament (#13206)", 1763206},
    {"Quest Reward: Halls of Stone (#13207)", 1763207},
    {"Quest Reward: By Fire Be Purged (#13211)", 1763211},
    {"Quest Reward: Battle at Valhalas: The Return of Sigrid Iceborn (#13216)", 1763216},
    {"Quest Reward: Battle at Valhalas: Final Challenge (#13219)", 1763219},
    {"Quest Reward: Defend the Siege (#13222)", 1763222},
    {"Quest Reward: Defend the Siege (#13223)", 1763223},
    {"Quest Reward: The Flesh Giant Champion (#13235)", 1763235},
    {"Quest Reward: Poke and Prod (#13237)", 1763237},
    {"Quest Reward: Volatility (#13239)", 1763239},
    {"Quest Reward: Timear Foresees Centrifuge Constructs in your Future! (#13240)", 1763240},
    {"Quest Reward: Timear Foresees Ymirjar Berserkers in your Future! (#13241)", 1763241},
    {"Quest Reward: Timear Foresees Infinite Agents in your Future! (#13243)", 1763243},
    {"Quest Reward: Timear Foresees Titanium Vanguards in your Future! (#13244)", 1763244},
    {"Quest Reward: Proof of Demise: Ingvar the Plunderer (#13245)", 1763245},
    {"Quest Reward: Proof of Demise: Keristrasza (#13246)", 1763246},
    {"Quest Reward: Proof of Demise: Ley-Guardian Eregos (#13247)", 1763247},
    {"Quest Reward: Proof of Demise: King Ymiron (#13248)", 1763248},
    {"Quest Reward: Proof of Demise: The Prophet Tharon'ja (#13249)", 1763249},
    {"Quest Reward: Proof of Demise: Gal'darah (#13250)", 1763250},
    {"Quest Reward: Proof of Demise: Mal'Ganis (#13251)", 1763251},
    {"Quest Reward: Proof of Demise: Sjonnir The Ironshaper (#13252)", 1763252},
    {"Quest Reward: Proof of Demise: Loken (#13253)", 1763253},
    {"Quest Reward: Proof of Demise: Anub'arak (#13254)", 1763254},
    {"Quest Reward: Proof of Demise: Herald Volazj (#13255)", 1763255},
    {"Quest Reward: Proof of Demise: Cyanigosa (#13256)", 1763256},
    {"Quest Reward: Establishing Superiority (#13259)", 1763259},
    {"Quest Reward: That's Abominable! (#13264)", 1763264},
    {"Quest Reward: The Battle For The Undercity (#13267)", 1763267},
    {"Quest Reward: Time to Hide (#13275)", 1763275},
    {"Quest Reward: Basic Chemistry (#13279)", 1763279},
    {"Quest Reward: Forging the Keystone (#13285)", 1763285},
    {"Quest Reward: Poke and Prod (#13287)", 1763287},
    {"Quest Reward: That's Abominable! (#13288)", 1763288},
    {"Quest Reward: Borrowed Technology (#13291)", 1763291},
    {"Quest Reward: Basic Chemistry (#13295)", 1763295},
    {"Quest Reward: Do Your Worst (#13305)", 1763305},
    {"Quest Reward: Mind Tricks (#13308)", 1763308},
    {"Quest Reward: Demons Deck (#13311)", 1763311},
    {"Quest Reward: Chain of Command (#13319)", 1763319},
    {"Quest Reward: Retest Now (#13321)", 1763321},
    {"Quest Reward: Darkmoon Prisms Deck (#13324)", 1763324},
    {"Quest Reward: Darkmoon Chaos Deck (#13325)", 1763325},
    {"Quest Reward: Darkmoon Nobles Deck (#13326)", 1763326},
    {"Quest Reward: Darkmoon Undeath Deck (#13327)", 1763327},
    {"Quest Reward: Not a Bug (#13342)", 1763342},
    {"Quest Reward: Mystery of the Infinite, Redux (#13343)", 1763343},
    {"Quest Reward: No Rest For The Wicked (#13346)", 1763346},
    {"Quest Reward: Cradle of the Frostbrood (#13349)", 1763349},
    {"Quest Reward: Chain of Command (#13354)", 1763354},
    {"Quest Reward: Retest Now (#13356)", 1763356},
    {"Quest Reward: Not a Bug (#13358)", 1763358},
    {"Quest Reward: The Hunter and the Prince (#13361)", 1763361},
    {"Quest Reward: Tirion's Gambit (#13364)", 1763364},
    {"Quest Reward: No Rest For The Wicked (#13367)", 1763367},
    {"Quest Reward: The Key to the Focusing Iris (#13372)", 1763372},
    {"Quest Reward: The Heroic Key to the Focusing Iris (#13375)", 1763375},
    {"Quest Reward: The Battle For The Undercity (#13377)", 1763377},
    {"Quest Reward: Judgment at the Eye of Eternity (#13384)", 1763384},
    {"Quest Reward: Heroic Judgment at the Eye of Eternity (#13385)", 1763385},
    {"Quest Reward: Securing the Perimeter (#13387)", 1763387},
    {"Quest Reward: Time to Hide (#13391)", 1763391},
    {"Quest Reward: Do Your Worst (#13394)", 1763394},
    {"Quest Reward: Sindragosa's Fall (#13397)", 1763397},
    {"Quest Reward: The Hunter and the Prince (#13400)", 1763400},
    {"Quest Reward: Tirion's Gambit (#13403)", 1763403},
    {"Quest Reward: Hellfire Fortifications (#13408)", 1763408},
    {"Quest Reward: Hellfire Fortifications (#13409)", 1763409},
    {"Quest Reward: Hellfire Fortifications (#13410)", 1763410},
    {"Quest Reward: Hellfire Fortifications (#13411)", 1763411},
    {"Quest Reward: Aces High! (#13413)", 1763413},
    {"Quest Reward: The Brothers Bronzebeard (#13417)", 1763417},
    {"Quest Reward: Maintaining Discipline (#13422)", 1763422},
    {"Quest Reward: Defending Your Title (#13423)", 1763423},
    {"Quest Reward: Back to the Pit (#13424)", 1763424},
    {"Quest Reward: The Aberrations Must Die (#13425)", 1763425},
    {"Quest Reward: A Distraction for Akama (#13429)", 1763429},
    {"Quest Reward: Trial of the Naaru: Magtheridon (#13430)", 1763430},
    {"Quest Reward: Candy Bucket (#13433)", 1763433},
    {"Quest Reward: Candy Bucket (#13434)", 1763434},
    {"Quest Reward: Candy Bucket (#13435)", 1763435},
    {"Quest Reward: Candy Bucket (#13436)", 1763436},
    {"Quest Reward: Candy Bucket (#13437)", 1763437},
    {"Quest Reward: Candy Bucket (#13438)", 1763438},
    {"Quest Reward: Candy Bucket (#13439)", 1763439},
    {"Quest Reward: Desecrate this Fire! (#13440)", 1763440},
    {"Quest Reward: Desecrate this Fire! (#13441)", 1763441},
    {"Quest Reward: Desecrate this Fire! (#13442)", 1763442},
    {"Quest Reward: Desecrate this Fire! (#13443)", 1763443},
    {"Quest Reward: Desecrate this Fire! (#13444)", 1763444},
    {"Quest Reward: Desecrate this Fire! (#13445)", 1763445},
    {"Quest Reward: Desecrate this Fire! (#13446)", 1763446},
    {"Quest Reward: Desecrate this Fire! (#13447)", 1763447},
    {"Quest Reward: Candy Bucket (#13448)", 1763448},
    {"Quest Reward: Desecrate this Fire! (#13449)", 1763449},
    {"Quest Reward: Desecrate this Fire! (#13450)", 1763450},
    {"Quest Reward: Desecrate this Fire! (#13451)", 1763451},
    {"Quest Reward: Candy Bucket (#13452)", 1763452},
    {"Quest Reward: Desecrate this Fire! (#13453)", 1763453},
    {"Quest Reward: Desecrate this Fire! (#13454)", 1763454},
    {"Quest Reward: Desecrate this Fire! (#13455)", 1763455},
    {"Quest Reward: Candy Bucket (#13456)", 1763456},
    {"Quest Reward: Desecrate this Fire! (#13457)", 1763457},
    {"Quest Reward: Desecrate this Fire! (#13458)", 1763458},
    {"Quest Reward: Candy Bucket (#13459)", 1763459},
    {"Quest Reward: Candy Bucket (#13460)", 1763460},
    {"Quest Reward: Candy Bucket (#13461)", 1763461},
    {"Quest Reward: Candy Bucket (#13462)", 1763462},
    {"Quest Reward: Candy Bucket (#13463)", 1763463},
    {"Quest Reward: Candy Bucket (#13464)", 1763464},
    {"Quest Reward: Candy Bucket (#13465)", 1763465},
    {"Quest Reward: Candy Bucket (#13466)", 1763466},
    {"Quest Reward: Candy Bucket (#13467)", 1763467},
    {"Quest Reward: Candy Bucket (#13468)", 1763468},
    {"Quest Reward: Candy Bucket (#13469)", 1763469},
    {"Quest Reward: Candy Bucket (#13470)", 1763470},
    {"Quest Reward: Candy Bucket (#13471)", 1763471},
    {"Quest Reward: Candy Bucket (#13472)", 1763472},
    {"Quest Reward: Candy Bucket (#13473)", 1763473},
    {"Quest Reward: Candy Bucket (#13474)", 1763474},
    {"Quest Reward: The Great Egg Hunt (#13479)", 1763479},
    {"Quest Reward: The Great Egg Hunt (#13480)", 1763480},
    {"Quest Reward: Honor the Flame (#13485)", 1763485},
    {"Quest Reward: Honor the Flame (#13486)", 1763486},
    {"Quest Reward: Honor the Flame (#13487)", 1763487},
    {"Quest Reward: Honor the Flame (#13488)", 1763488},
    {"Quest Reward: Honor the Flame (#13489)", 1763489},
    {"Quest Reward: Honor the Flame (#13490)", 1763490},
    {"Quest Reward: Honor the Flame (#13491)", 1763491},
    {"Quest Reward: Honor the Flame (#13492)", 1763492},
    {"Quest Reward: Honor the Flame (#13493)", 1763493},
    {"Quest Reward: Honor the Flame (#13494)", 1763494},
    {"Quest Reward: Honor the Flame (#13495)", 1763495},
    {"Quest Reward: Honor the Flame (#13496)", 1763496},
    {"Quest Reward: Honor the Flame (#13497)", 1763497},
    {"Quest Reward: Honor the Flame (#13498)", 1763498},
    {"Quest Reward: Honor the Flame (#13499)", 1763499},
    {"Quest Reward: Honor the Flame (#13500)", 1763500},
    {"Quest Reward: Candy Bucket (#13501)", 1763501},
    {"Quest Reward: A Tisket, a Tasket, a Noblegarden Basket (#13502)", 1763502},
    {"Quest Reward: A Tisket, a Tasket, a Noblegarden Basket (#13503)", 1763503},
    {"Quest Reward: Escape from Silverbrook (#13524)", 1763524},
    {"Quest Reward: Southern Sabotage (#13538)", 1763538},
    {"Quest Reward: Toppling the Towers (#13539)", 1763539},
    {"Quest Reward: Candy Bucket (#13548)", 1763548},
    {"Quest Reward: A Valiant's Field Training (#13592)", 1763592},
    {"Quest Reward: A Worthy Weapon (#13600)", 1763600},
    {"Quest Reward: A Blade Fit For A Champion (#13603)", 1763603},
    {"Quest Reward: Algalon (#13614)", 1763614},
    {"Quest Reward: The Edge Of Winter (#13616)", 1763616},
    {"Quest Reward: Learning The Reins (#13625)", 1763625},
    {"Quest Reward: Val'anyr, Hammer of Ancient Kings (#13629)", 1763629},
    {"Quest Reward: All Is Well That Ends Well (#13631)", 1763631},
    {"Quest Reward: The Grand Melee (#13665)", 1763665},
    {"Quest Reward: A Blade Fit For A Champion (#13666)", 1763666},
    {"Quest Reward: A Worthy Weapon (#13669)", 1763669},
    {"Quest Reward: The Edge Of Winter (#13670)", 1763670},
    {"Quest Reward: Training In The Field (#13671)", 1763671},
    {"Quest Reward: A Blade Fit For A Champion (#13673)", 1763673},
    {"Quest Reward: A Worthy Weapon (#13674)", 1763674},
    {"Quest Reward: The Edge Of Winter (#13675)", 1763675},
    {"Quest Reward: Training In The Field (#13676)", 1763676},
    {"Quest Reward: Learning The Reins (#13677)", 1763677},
    {"Quest Reward: Threat From Above (#13682)", 1763682},
    {"Quest Reward: The Sword and the Sea (#13692)", 1763692},
    {"Quest Reward: A Champion Rises (#13702)", 1763702},
    {"Quest Reward: A Champion Rises (#13732)", 1763732},
    {"Quest Reward: A Champion Rises (#13733)", 1763733},
    {"Quest Reward: A Champion Rises (#13734)", 1763734},
    {"Quest Reward: A Champion Rises (#13735)", 1763735},
    {"Quest Reward: A Champion Rises (#13736)", 1763736},
    {"Quest Reward: A Champion Rises (#13737)", 1763737},
    {"Quest Reward: A Champion Rises (#13738)", 1763738},
    {"Quest Reward: A Champion Rises (#13739)", 1763739},
    {"Quest Reward: A Champion Rises (#13740)", 1763740},
    {"Quest Reward: A Blade Fit For A Champion (#13741)", 1763741},
    {"Quest Reward: A Worthy Weapon (#13742)", 1763742},
    {"Quest Reward: The Edge Of Winter (#13743)", 1763743},
    {"Quest Reward: A Valiant's Field Training (#13744)", 1763744},
    {"Quest Reward: The Grand Melee (#13745)", 1763745},
    {"Quest Reward: A Blade Fit For A Champion (#13746)", 1763746},
    {"Quest Reward: A Worthy Weapon (#13747)", 1763747},
    {"Quest Reward: The Edge Of Winter (#13748)", 1763748},
    {"Quest Reward: A Valiant's Field Training (#13749)", 1763749},
    {"Quest Reward: The Grand Melee (#13750)", 1763750},
    {"Quest Reward: A Blade Fit For A Champion (#13752)", 1763752},
    {"Quest Reward: A Worthy Weapon (#13753)", 1763753},
    {"Quest Reward: The Edge Of Winter (#13754)", 1763754},
    {"Quest Reward: A Valiant's Field Training (#13755)", 1763755},
    {"Quest Reward: The Grand Melee (#13756)", 1763756},
    {"Quest Reward: A Blade Fit For A Champion (#13757)", 1763757},
    {"Quest Reward: A Worthy Weapon (#13758)", 1763758},
    {"Quest Reward: The Edge Of Winter (#13759)", 1763759},
    {"Quest Reward: A Valiant's Field Training (#13760)", 1763760},
    {"Quest Reward: The Grand Melee (#13761)", 1763761},
    {"Quest Reward: A Blade Fit For A Champion (#13762)", 1763762},
    {"Quest Reward: A Worthy Weapon (#13763)", 1763763},
    {"Quest Reward: The Edge Of Winter (#13764)", 1763764},
    {"Quest Reward: A Valiant's Field Training (#13765)", 1763765},
    {"Quest Reward: The Grand Melee (#13767)", 1763767},
    {"Quest Reward: A Blade Fit For A Champion (#13768)", 1763768},
    {"Quest Reward: A Worthy Weapon (#13769)", 1763769},
    {"Quest Reward: The Edge Of Winter (#13770)", 1763770},
    {"Quest Reward: A Valiant's Field Training (#13771)", 1763771},
    {"Quest Reward: The Grand Melee (#13772)", 1763772},
    {"Quest Reward: A Blade Fit For A Champion (#13773)", 1763773},
    {"Quest Reward: A Worthy Weapon (#13774)", 1763774},
    {"Quest Reward: The Edge Of Winter (#13775)", 1763775},
    {"Quest Reward: A Valiant's Field Training (#13776)", 1763776},
    {"Quest Reward: The Grand Melee (#13777)", 1763777},
    {"Quest Reward: A Blade Fit For A Champion (#13778)", 1763778},
    {"Quest Reward: A Worthy Weapon (#13779)", 1763779},
    {"Quest Reward: The Edge Of Winter (#13780)", 1763780},
    {"Quest Reward: A Valiant's Field Training (#13781)", 1763781},
    {"Quest Reward: The Grand Melee (#13782)", 1763782},
    {"Quest Reward: A Blade Fit For A Champion (#13783)", 1763783},
    {"Quest Reward: A Worthy Weapon (#13784)", 1763784},
    {"Quest Reward: The Edge Of Winter (#13785)", 1763785},
    {"Quest Reward: A Valiant's Field Training (#13786)", 1763786},
    {"Quest Reward: The Grand Melee (#13787)", 1763787},
    {"Quest Reward: Threat From Above (#13788)", 1763788},
    {"Quest Reward: Taking Battle To The Enemy (#13789)", 1763789},
    {"Quest Reward: Among the Champions (#13790)", 1763790},
    {"Quest Reward: Taking Battle To The Enemy (#13791)", 1763791},
    {"Quest Reward: Among the Champions (#13793)", 1763793},
    {"Quest Reward: Threat From Above (#13809)", 1763809},
    {"Quest Reward: Taking Battle To The Enemy (#13810)", 1763810},
    {"Quest Reward: Among the Champions (#13811)", 1763811},
    {"Quest Reward: Threat From Above (#13812)", 1763812},
    {"Quest Reward: Taking Battle To The Enemy (#13813)", 1763813},
    {"Quest Reward: Among the Champions (#13814)", 1763814},
    {"Quest Reward: Heroic: Algalon (#13818)", 1763818},
    {"Quest Reward: Heroic: All Is Well That Ends Well (#13819)", 1763819},
    {"Quest Reward: Nat Pagle, Angler Extreme (#13826)", 1763826},
    {"Quest Reward: Treasure! (#13827)", 1763827},
    {"Quest Reward: The Ghostfish (#13830)", 1763830},
    {"Quest Reward: Jewel Of The Sewers (#13832)", 1763832},
    {"Quest Reward: Blood Is Thicker (#13833)", 1763833},
    {"Quest Reward: Dangerously Delicious (#13834)", 1763834},
    {"Quest Reward: Disarmed! (#13836)", 1763836},
    {"Quest Reward: At The Enemy's Gates (#13847)", 1763847},
    {"Quest Reward: At The Enemy's Gates (#13851)", 1763851},
    {"Quest Reward: At The Enemy's Gates (#13852)", 1763852},
    {"Quest Reward: At The Enemy's Gates (#13854)", 1763854},
    {"Quest Reward: At The Enemy's Gates (#13855)", 1763855},
    {"Quest Reward: At The Enemy's Gates (#13856)", 1763856},
    {"Quest Reward: At The Enemy's Gates (#13857)", 1763857},
    {"Quest Reward: At The Enemy's Gates (#13858)", 1763858},
    {"Quest Reward: At The Enemy's Gates (#13859)", 1763859},
    {"Quest Reward: At The Enemy's Gates (#13860)", 1763860},
    {"Quest Reward: Battle Before The Citadel (#13861)", 1763861},
    {"Quest Reward: Battle Before The Citadel (#13862)", 1763862},
    {"Quest Reward: Battle Before The Citadel (#13863)", 1763863},
    {"Quest Reward: Battle Before The Citadel (#13864)", 1763864},
    {"Quest Reward: Hungry, Hungry Hatchling (#13889)", 1763889},
    {"Quest Reward: Gorishi Grub (#13903)", 1763903},
    {"Quest Reward: Poached, Scrambled, Or Raw? (#13904)", 1763904},
    {"Quest Reward: Searing Roc Feathers (#13905)", 1763905},
    {"Quest Reward: They Grow Up So Fast (#13906)", 1763906},
    {"Quest Reward: Gearing Up To Ride (#13908)", 1763908},
    {"Quest Reward: Searing Roc Feathers (#13914)", 1763914},
    {"Quest Reward: Hungry, Hungry Hatchling (#13915)", 1763915},
    {"Quest Reward: Poached, Scrambled, Or Raw? (#13916)", 1763916},
    {"Quest Reward: Gorishi Grub (#13917)", 1763917},
    {"Quest Reward: Another Year, Another Souvenir. (#13931)", 1763931},
    {"Quest Reward: Another Year, Another Souvenir. (#13932)", 1763932},
    {"Quest Reward: The Grateful Dead (#13952)", 1763952},
    {"Quest Reward: A Winter Veil Gift (#13966)", 1763966},
    {"Quest Reward: The Black Knight's Fate (#14017)", 1764017},
    {"Quest Reward: Slow-roasted Turkey (#14035)", 1764035},
    {"Quest Reward: Slow-roasted Turkey (#14047)", 1764047},
    {"Quest Reward: Can't Get Enough Turkey (#14048)", 1764048},
    {"Quest Reward: Don't Forget The Stuffing! (#14051)", 1764051},
    {"Quest Reward: We're Out of Cranberry Chutney Again? (#14053)", 1764053},
    {"Quest Reward: Easy As Pie (#14054)", 1764054},
    {"Quest Reward: She Says Potato (#14055)", 1764055},
    {"Quest Reward: She Says Potato (#14058)", 1764058},
    {"Quest Reward: We're Out of Cranberry Chutney Again? (#14059)", 1764059},
    {"Quest Reward: Easy As Pie (#14060)", 1764060},
    {"Quest Reward: Can't Get Enough Turkey (#14061)", 1764061},
    {"Quest Reward: Don't Forget The Stuffing! (#14062)", 1764062},
    {"Quest Reward: A Leg Up (#14074)", 1764074},
    {"Quest Reward: Breakfast Of Champions (#14076)", 1764076},
    {"Quest Reward: The Light's Mercy (#14077)", 1764077},
    {"Quest Reward: Stop The Aggressors (#14080)", 1764080},
    {"Quest Reward: Gormok Wants His Snobolds (#14090)", 1764090},
    {"Quest Reward: Breakfast Of Champions (#14092)", 1764092},
    {"Quest Reward: You've Really Done It This Time, Kul (#14096)", 1764096},
    {"Quest Reward: Drottinn Hrothgar (#14101)", 1764101},
    {"Quest Reward: Mistcaller Yngvar (#14102)", 1764102},
    {"Quest Reward: Titanium Powder (#14103)", 1764103},
    {"Quest Reward: Ornolf The Scarred (#14104)", 1764104},
    {"Quest Reward: Deathspeaker Kharos (#14105)", 1764105},
    {"Quest Reward: The Fate Of The Fallen (#14107)", 1764107},
    {"Quest Reward: Get Kraken! (#14108)", 1764108},
    {"Quest Reward: What Do You Feed a Yeti, Anyway? (#14112)", 1764112},
    {"Quest Reward: Rescue at Sea (#14136)", 1764136},
    {"Quest Reward: Stop The Aggressors (#14140)", 1764140},
    {"Quest Reward: Gormok Wants His Snobolds (#14141)", 1764141},
    {"Quest Reward: You've Really Done It This Time, Kul (#14142)", 1764142},
    {"Quest Reward: A Leg Up (#14143)", 1764143},
    {"Quest Reward: The Light's Mercy (#14144)", 1764144},
    {"Quest Reward: What Do You Feed a Yeti, Anyway? (#14145)", 1764145},
    {"Quest Reward: Rescue at Sea (#14152)", 1764152},
    {"Quest Reward: Writ of Merit (#14160)", 1764160},
    {"Quest Reward: The Grateful Dead (#14166)", 1764166},
    {"Quest Reward: The Grateful Dead (#14167)", 1764167},
    {"Quest Reward: The Grateful Dead (#14168)", 1764168},
    {"Quest Reward: The Grateful Dead (#14169)", 1764169},
    {"Quest Reward: The Grateful Dead (#14170)", 1764170},
    {"Quest Reward: The Grateful Dead (#14171)", 1764171},
    {"Quest Reward: The Grateful Dead (#14172)", 1764172},
    {"Quest Reward: The Grateful Dead (#14173)", 1764173},
    {"Quest Reward: The Grateful Dead (#14174)", 1764174},
    {"Quest Reward: The Grateful Dead (#14175)", 1764175},
    {"Quest Reward: The Grateful Dead (#14176)", 1764176},
    {"Quest Reward: The Grateful Dead (#14177)", 1764177},
    {"Quest Reward: Proof of Demise: The Black Knight (#14199)", 1764199},
    {"Quest Reward: Waterlogged Recipe (#14203)", 1764203},
    {"Quest Reward: Battle of Hillsbrad (#14351)", 1764351},
    {"Quest Reward: An Unholy Alliance (#14353)", 1764353},
    {"Quest Reward: Into The Scarlet Monastery (#14355)", 1764355},
    {"Quest Reward: The Power to Destroy... (#14356)", 1764356},
    {"Quest Reward: The Deathstalkers (#14418)", 1764418},
    {"Quest Reward: Dwarven Digging (#14436)", 1764436},
    {"Quest Reward: Sharing the Land (#14438)", 1764438},
    {"Quest Reward: Rites of the Earthmother (#14440)", 1764440},
    {"Quest Reward: A Most Puzzling Circumstance (#24428)", 1774428},
    {"Quest Reward: A Most Puzzling Circumstance (#24429)", 1774429},
    {"Quest Reward: Waterlogged Recipe (#24431)", 1774431},
    {"Quest Reward: Echoes of Tortured Souls (#24499)", 1774499},
    {"Quest Reward: Wrath of the Lich King (#24500)", 1774500},
    {"Quest Reward: Echoes of Tortured Souls (#24511)", 1774511},
    {"Quest Reward: Shadowmourne... (#24549)", 1774549},
    {"Quest Reward: Sartharion Must Die! (#24579)", 1774579},
    {"Quest Reward: Anub'Rekhan Must Die! (#24580)", 1774580},
    {"Quest Reward: Noth the Plaguebringer Must Die! (#24581)", 1774581},
    {"Quest Reward: Instructor Razuvious Must Die! (#24582)", 1774582},
    {"Quest Reward: Patchwerk Must Die! (#24583)", 1774583},
    {"Quest Reward: Malygos Must Die! (#24584)", 1774584},
    {"Quest Reward: Flame Leviathan Must Die! (#24585)", 1774585},
    {"Quest Reward: Razorscale Must Die! (#24586)", 1774586},
    {"Quest Reward: Ignis the Furnace Master Must Die! (#24587)", 1774587},
    {"Quest Reward: XT-002 Deconstructor Must Die! (#24588)", 1774588},
    {"Quest Reward: Lord Jaraxxus Must Die! (#24589)", 1774589},
    {"Quest Reward: Lord Marrowgar Must Die! (#24590)", 1774590},
    {"Quest Reward: A Gift for the King of Stormwind (#24597)", 1774597},
    {"Quest Reward: A Gift for the Lord of Ironforge (#24609)", 1774609},
    {"Quest Reward: A Gift for the High Priestess of Elune (#24610)", 1774610},
    {"Quest Reward: A Gift for the Prophet (#24611)", 1774611},
    {"Quest Reward: A Gift for the Warchief (#24612)", 1774612},
    {"Quest Reward: A Gift for the Banshee Queen (#24613)", 1774613},
    {"Quest Reward: A Gift for the High Chieftain (#24614)", 1774614},
    {"Quest Reward: A Gift for the Regent Lord of Quel'Thalas (#24615)", 1774615},
    {"Quest Reward: A Perfect Puff of Perfume (#24629)", 1774629},
    {"Quest Reward: A Cloudlet of Classy Cologne (#24635)", 1774635},
    {"Quest Reward: Bonbon Blitz (#24636)", 1774636},
    {"Quest Reward: Crushing the Crown (#24638)", 1774638},
    {"Quest Reward: Crushing the Crown (#24645)", 1774645},
    {"Quest Reward: Crushing the Crown (#24647)", 1774647},
    {"Quest Reward: Crushing the Crown (#24648)", 1774648},
    {"Quest Reward: Crushing the Crown (#24649)", 1774649},
    {"Quest Reward: Crushing the Crown (#24650)", 1774650},
    {"Quest Reward: Crushing the Crown (#24651)", 1774651},
    {"Quest Reward: Crushing the Crown (#24652)", 1774652},
    {"Quest Reward: Crushing the Crown (#24658)", 1774658},
    {"Quest Reward: Crushing the Crown (#24659)", 1774659},
    {"Quest Reward: Crushing the Crown (#24660)", 1774660},
    {"Quest Reward: Crushing the Crown (#24662)", 1774662},
    {"Quest Reward: Crushing the Crown (#24663)", 1774663},
    {"Quest Reward: Crushing the Crown (#24664)", 1774664},
    {"Quest Reward: Crushing the Crown (#24665)", 1774665},
    {"Quest Reward: Crushing the Crown (#24666)", 1774666},
    {"Quest Reward: Deliverance from the Pit (#24710)", 1774710},
    {"Quest Reward: Deliverance from the Pit (#24712)", 1774712},
    {"Quest Reward: Shadow's Edge (#24743)", 1774743},
    {"Quest Reward: Daily Heroic Random (1st) (#24788)", 1774788},
    {"Quest Reward: Daily Heroic Random (Nth) (#24789)", 1774789},
    {"Quest Reward: Daily Normal Random (1st) (#24790)", 1774790},
    {"Quest Reward: A Victory For The Silver Covenant (#24795)", 1774795},
    {"Quest Reward: A Victory For The Silver Covenant (#24796)", 1774796},
    {"Quest Reward: A Victory For The Sunreavers (#24798)", 1774798},
    {"Quest Reward: A Victory For The Sunreavers (#24799)", 1774799},
    {"Quest Reward: A Victory For The Sunreavers (#24800)", 1774800},
    {"Quest Reward: A Victory For The Sunreavers (#24801)", 1774801},
    {"Quest Reward: Wrath of the Lich King (#24802)", 1774802},
    {"Quest Reward: Kalu'ak Fishing Derby (#24803)", 1774803},
    {"Quest Reward: Better Luck Next Time (#24806)", 1774806},
    {"Quest Reward: Choose Your Path (#24815)", 1774815},
    {"Quest Reward: A Change of Heart (#24819)", 1774819},
    {"Quest Reward: A Change of Heart (#24820)", 1774820},
    {"Quest Reward: A Change of Heart (#24821)", 1774821},
    {"Quest Reward: A Change of Heart (#24822)", 1774822},
    {"Quest Reward: Path of Destruction (#24823)", 1774823},
    {"Quest Reward: Path of Wisdom (#24825)", 1774825},
    {"Quest Reward: Path of Vengeance (#24826)", 1774826},
    {"Quest Reward: Path of Courage (#24827)", 1774827},
    {"Quest Reward: Path of Destruction (#24828)", 1774828},
    {"Quest Reward: Path of Destruction (#24829)", 1774829},
    {"Quest Reward: Path of Wisdom (#24830)", 1774830},
    {"Quest Reward: Path of Wisdom (#24831)", 1774831},
    {"Quest Reward: Path of Vengeance (#24832)", 1774832},
    {"Quest Reward: Path of Vengeance (#24833)", 1774833},
    {"Quest Reward: Path of Courage (#24834)", 1774834},
    {"Quest Reward: Path of Courage (#24835)", 1774835},
    {"Quest Reward: A Change of Heart (#24836)", 1774836},
    {"Quest Reward: A Change of Heart (#24837)", 1774837},
    {"Quest Reward: A Change of Heart (#24838)", 1774838},
    {"Quest Reward: A Change of Heart (#24839)", 1774839},
    {"Quest Reward: A Change of Heart (#24840)", 1774840},
    {"Quest Reward: A Change of Heart (#24841)", 1774841},
    {"Quest Reward: A Change of Heart (#24842)", 1774842},
    {"Quest Reward: A Change of Heart (#24843)", 1774843},
    {"Quest Reward: A Change of Heart (#24844)", 1774844},
    {"Quest Reward: A Change of Heart (#24845)", 1774845},
    {"Quest Reward: A Change of Heart (#24846)", 1774846},
    {"Quest Reward: A Change of Heart (#24847)", 1774847},
    {"Quest Reward: Attack on Camp Narache (#24857)", 1774857},
    {"Quest Reward: Deprogramming (#24869)", 1774869},
    {"Quest Reward: Securing the Ramparts (#24870)", 1774870},
    {"Quest Reward: Securing the Ramparts (#24871)", 1774871},
    {"Quest Reward: Respite for a Tormented Soul (#24872)", 1774872},
    {"Quest Reward: Residue Rendezvous (#24873)", 1774873},
    {"Quest Reward: Blood Quickening (#24874)", 1774874},
    {"Quest Reward: Deprogramming (#24875)", 1774875},
    {"Quest Reward: Securing the Ramparts (#24876)", 1774876},
    {"Quest Reward: Securing the Ramparts (#24877)", 1774877},
    {"Quest Reward: Residue Rendezvous (#24878)", 1774878},
    {"Quest Reward: Blood Quickening (#24879)", 1774879},
    {"Quest Reward: Respite for a Tormented Soul (#24880)", 1774880},
    {"Quest Reward: Classic Random 5-15 (1st) (#24881)", 1774881},
    {"Quest Reward: Classic Random 15-25 (1st) (#24882)", 1774882},
    {"Quest Reward: Classic Random 24-34 (1st) (#24883)", 1774883},
    {"Quest Reward: Classic Random 35-45 (1st) (#24884)", 1774884},
    {"Quest Reward: Classic Random 46-55 (1st) (#24885)", 1774885},
    {"Quest Reward: Classic Random 56-60 (1st) (#24886)", 1774886},
    {"Quest Reward: Classic Random 60-64 (1st) (#24887)", 1774887},
    {"Quest Reward: Classic Random 65-70 (1st) (#24888)", 1774888},
    {"Quest Reward: Classic Random 5-15 (Nth) (#24889)", 1774889},
    {"Quest Reward: Classic Random 15-25 (Nth) (#24890)", 1774890},
    {"Quest Reward: Classic Random 24-34 (Nth) (#24891)", 1774891},
    {"Quest Reward: Classic Random 35-45 (Nth) (#24892)", 1774892},
    {"Quest Reward: Classic Random 46-55 (Nth) (#24893)", 1774893},
    {"Quest Reward: Classic Random 56-60 (Nth) (#24894)", 1774894},
    {"Quest Reward: Classic Random 60-64 (Nth) (#24895)", 1774895},
    {"Quest Reward: Classic Random 65-70 (Nth) (#24896)", 1774896},
    {"Quest Reward: Personal Property (#24914)", 1774914},
    {"Quest Reward: Mograine's Reunion (#24915)", 1774915},
    {"Quest Reward: Jaina's Locket (#24916)", 1774916},
    {"Quest Reward: Muradin's Lament (#24917)", 1774917},
    {"Quest Reward: Sylvanas' Vengeance (#24918)", 1774918},
    {"Quest Reward: The Lightbringer's Redemption (#24919)", 1774919},
    {"Quest Reward: Path of Might (#25239)", 1775239},
    {"Quest Reward: Path of Might (#25240)", 1775240},
    {"Quest Reward: Path of Might (#25242)", 1775242},
    {"Quest Reward: A Change of Heart (#25246)", 1775246},
    {"Quest Reward: A Change of Heart (#25247)", 1775247},
    {"Quest Reward: A Change of Heart (#25248)", 1775248},
    {"Quest Reward: A Change of Heart (#25249)", 1775249},
    {"Quest Reward: Words for Delivery (#25286)", 1775286},
    {"Quest Reward: Operation: Gnomeregan (#25393)", 1775393},
    {"Quest Reward: Zalazane's Fall (#25445)", 1775445},
    {"Quest Reward: Dance Of De Spirits (#25480)", 1775480},
    {"Quest Reward: World Event Dungeon - Headless Horseman (#25482)", 1775482},
    {"Quest Reward: World Event Dungeon - Coren Direbrew (#25483)", 1775483},
    {"Quest Reward: World Event Dungeon - Ahune (#25484)", 1775484},
    {"Quest Reward: World Event Dungeon - Hummel (#25485)", 1775485},
    {"Quest Reward: Words for Delivery (#25500)", 1775500},
    {"Quest Reward: The Twilight Destroyer (#26034)", 1776034},
};
inline std::map<std::string, uint32_t> BuildITEMS()
{
    std::map<std::string, uint32_t> result;
    for (auto const& row : ITEMS_RAW)
        result.emplace(row.first, row.second);
    return result;
}
inline const std::map<std::string, uint32_t> ITEMS = BuildITEMS();
inline const std::unordered_map<uint32_t, int64_t> QUEST_ID_TO_LOCATION_ID = {
    { 1, 1000001 }, // "Quest: Kanrethad's Quest Reward (#1)"
    { 6, 1000006 }, // "Quest: Bounty on Garrick Padfoot Reward (#6)"
    { 8, 1000008 }, // "Quest: A Rogue's Deal Reward (#8)"
    { 9, 1000009 }, // "Quest: The Killing Fields Reward (#9)"
    { 11, 1000011 }, // "Quest: Riverpaw Gnoll Bounty Reward (#11)"
    { 14, 1000014 }, // "Quest: The People's Militia Reward (#14)"
    { 16, 1000016 }, // "Quest: Give Gerard a Drink Reward (#16)"
    { 17, 1000017 }, // "Quest: Uldaman Reagent Run Reward (#17)"
    { 18, 1000018 }, // "Quest: Brotherhood of Thieves Reward (#18)"
    { 19, 1000019 }, // "Quest: Tharil'zun Reward (#19)"
    { 21, 1000021 }, // "Quest: Skirmish at Echo Ridge Reward (#21)"
    { 22, 1000022 }, // "Quest: Goretusk Liver Pie Reward (#22)"
    { 31, 1000031 }, // "Quest: Aquatic Form Reward (#31)"
    { 33, 1000033 }, // "Quest: Wolves Across the Border Reward (#33)"
    { 34, 1000034 }, // "Quest: An Unwelcome Guest Reward (#34)"
    { 38, 1000038 }, // "Quest: Westfall Stew Reward (#38)"
    { 46, 1000046 }, // "Quest: Bounty on Murlocs Reward (#46)"
    { 47, 1000047 }, // "Quest: Gold Dust Exchange Reward (#47)"
    { 52, 1000052 }, // "Quest: Protect the Frontier Reward (#52)"
    { 53, 1000053 }, // "Quest: Sweet Amber Reward (#53)"
    { 54, 1000054 }, // "Quest: Report to Goldshire Reward (#54)"
    { 55, 1000055 }, // "Quest: Morbent Fel Reward (#55)"
    { 58, 1000058 }, // "Quest: The Night Watch Reward (#58)"
    { 59, 1000059 }, // "Quest: Cloth and Leather Armor Reward (#59)"
    { 60, 1000060 }, // "Quest: Kobold Candles Reward (#60)"
    { 61, 1000061 }, // "Quest: Shipment to Stormwind Reward (#61)"
    { 64, 1000064 }, // "Quest: The Forgotten Heirloom Reward (#64)"
    { 79, 1000079 }, // "Quest: The Legend of Stalvan Reward (#79)"
    { 83, 1000083 }, // "Quest: Red Linen Goods Reward (#83)"
    { 87, 1000087 }, // "Quest: Goldtooth Reward (#87)"
    { 88, 1000088 }, // "Quest: Princess Must Die! Reward (#88)"
    { 89, 1000089 }, // "Quest: The Everstill Bridge Reward (#89)"
    { 90, 1000090 }, // "Quest: Seasoned Wolf Kabobs Reward (#90)"
    { 92, 1000092 }, // "Quest: Redridge Goulash Reward (#92)"
    { 93, 1000093 }, // "Quest: Dusky Crab Cakes Reward (#93)"
    { 96, 1000096 }, // "Quest: Call of Water Reward (#96)"
    { 98, 1000098 }, // "Quest: The Legend of Stalvan Reward (#98)"
    { 99, 1000099 }, // "Quest: Arugal's Folly Reward (#99)"
    { 101, 1000101 }, // "Quest: The Totem of Infliction Reward (#101)"
    { 102, 1000102 }, // "Quest: Patrolling Westfall Reward (#102)"
    { 103, 1000103 }, // "Quest: Keeper of the Flame Reward (#103)"
    { 104, 1000104 }, // "Quest: The Coastal Menace Reward (#104)"
    { 105, 1000105 }, // "Quest: Alas, Andorhal Reward (#105)"
    { 108, 1000108 }, // "Quest: <TXT> Mystery Reward Reward (#108)"
    { 114, 1000114 }, // "Quest: The Escape Reward (#114)"
    { 116, 1000116 }, // "Quest: Dry Times Reward (#116)"
    { 117, 1000117 }, // "Quest: Thunderbrew Lager Reward (#117)"
    { 122, 1000122 }, // "Quest: Underbelly Scales Reward (#122)"
    { 125, 1000125 }, // "Quest: The Lost Tools Reward (#125)"
    { 126, 1000126 }, // "Quest: Howling in the Hills Reward (#126)"
    { 127, 1000127 }, // "Quest: Selling Fish Reward (#127)"
    { 131, 1000131 }, // "Quest: Delivering Daffodils Reward (#131)"
    { 140, 1000140 }, // "Quest: Captain Sanders' Hidden Treasure Reward (#140)"
    { 147, 1000147 }, // "Quest: Manhunt Reward (#147)"
    { 150, 1000150 }, // "Quest: Murloc Poachers Reward (#150)"
    { 151, 1000151 }, // "Quest: Poor Old Blanchy Reward (#151)"
    { 153, 1000153 }, // "Quest: Red Leather Bandanas Reward (#153)"
    { 166, 1000166 }, // "Quest: The Defias Brotherhood Reward (#166)"
    { 167, 1000167 }, // "Quest: Oh Brother. . . Reward (#167)"
    { 168, 1000168 }, // "Quest: Collecting Memories Reward (#168)"
    { 170, 1000170 }, // "Quest: A New Threat Reward (#170)"
    { 171, 1000171 }, // "Quest: A Warden of the Alliance Reward (#171)"
    { 176, 1000176 }, // "Quest: Wanted:  \"Hogger\" Reward (#176)"
    { 178, 1000178 }, // "Quest: Theocritus' Retrieval Reward (#178)"
    { 179, 1000179 }, // "Quest: Dwarven Outfitters Reward (#179)"
    { 181, 1000181 }, // "Quest: Look To The Stars Reward (#181)"
    { 182, 1000182 }, // "Quest: The Troll Cave Reward (#182)"
    { 183, 1000183 }, // "Quest: The Boar Hunter Reward (#183)"
    { 184, 1000184 }, // "Quest: Furlbrow's Deed Reward (#184)"
    { 188, 1000188 }, // "Quest: Tiger Mastery Reward (#188)"
    { 189, 1000189 }, // "Quest: Bloodscalp Ears Reward (#189)"
    { 193, 1000193 }, // "Quest: Panther Mastery Reward (#193)"
    { 197, 1000197 }, // "Quest: Raptor Mastery Reward (#197)"
    { 202, 1000202 }, // "Quest: Colonel Kurzen Reward (#202)"
    { 204, 1000204 }, // "Quest: Bad Medicine Reward (#204)"
    { 206, 1000206 }, // "Quest: Mai'Zoth Reward (#206)"
    { 208, 1000208 }, // "Quest: Big Game Hunter Reward (#208)"
    { 211, 1000211 }, // "Quest: Alas, Andorhal Reward (#211)"
    { 213, 1000213 }, // "Quest: Hostile Takeover Reward (#213)"
    { 214, 1000214 }, // "Quest: Red Silk Bandanas Reward (#214)"
    { 217, 1000217 }, // "Quest: In Defense of the King's Lands Reward (#217)"
    { 218, 1000218 }, // "Quest: The Stolen Journal Reward (#218)"
    { 219, 1000219 }, // "Quest: Missing In Action Reward (#219)"
    { 220, 1000220 }, // "Quest: Call of Water Reward (#220)"
    { 223, 1000223 }, // "Quest: Worgen in the Woods Reward (#223)"
    { 224, 1000224 }, // "Quest: In Defense of the King's Lands Reward (#224)"
    { 226, 1000226 }, // "Quest: Wolves at Our Heels Reward (#226)"
    { 227, 1000227 }, // "Quest: Morgan Ladimore Reward (#227)"
    { 231, 1000231 }, // "Quest: A Daughter's Love Reward (#231)"
    { 236, 1000236 }, // "Quest: Fueling the Demolishers Reward (#236)"
    { 237, 1000237 }, // "Quest: In Defense of the King's Lands Reward (#237)"
    { 245, 1000245 }, // "Quest: Eight-Legged Menaces Reward (#245)"
    { 247, 1000247 }, // "Quest: The Hunt Completed Reward (#247)"
    { 249, 1000249 }, // "Quest: Morganth Reward (#249)"
    { 252, 1000252 }, // "Quest: Translation to Ello Reward (#252)"
    { 253, 1000253 }, // "Quest: Bride of the Embalmer Reward (#253)"
    { 256, 1000256 }, // "Quest: WANTED: Chok'sul Reward (#256)"
    { 257, 1000257 }, // "Quest: A Hunter's Boast Reward (#257)"
    { 258, 1000258 }, // "Quest: A Hunter's Challenge Reward (#258)"
    { 263, 1000263 }, // "Quest: In Defense of the King's Lands Reward (#263)"
    { 275, 1000275 }, // "Quest: Blisters on The Land Reward (#275)"
    { 277, 1000277 }, // "Quest: Fire Taboo Reward (#277)"
    { 281, 1000281 }, // "Quest: Reclaiming Goods Reward (#281)"
    { 283, 1000283 }, // "Quest: A Dark Threat Looms Reward (#283)"
    { 284, 1000284 }, // "Quest: The Search Continues Reward (#284)"
    { 286, 1000286 }, // "Quest: Return the Statuette Reward (#286)"
    { 287, 1000287 }, // "Quest: Frostmane Hold Reward (#287)"
    { 293, 1000293 }, // "Quest: Cleansing the Eye Reward (#293)"
    { 296, 1000296 }, // "Quest: Ormer's Revenge Reward (#296)"
    { 297, 1000297 }, // "Quest: Gathering Idols Reward (#297)"
    { 299, 1000299 }, // "Quest: Uncovering the Past Reward (#299)"
    { 304, 1000304 }, // "Quest: A Grim Task Reward (#304)"
    { 307, 1000307 }, // "Quest: Filthy Paws Reward (#307)"
    { 309, 1000309 }, // "Quest: Protecting the Shipment Reward (#309)"
    { 312, 1000312 }, // "Quest: Tundra MacGrann's Stolen Stash Reward (#312)"
    { 314, 1000314 }, // "Quest: Protecting the Herd Reward (#314)"
    { 315, 1000315 }, // "Quest: The Perfect Stout Reward (#315)"
    { 320, 1000320 }, // "Quest: Return to Bellowfiz Reward (#320)"
    { 321, 1000321 }, // "Quest: Lightforge Iron Reward (#321)"
    { 328, 1000328 }, // "Quest: The Hidden Key Reward (#328)"
    { 331, 1000331 }, // "Quest: Report to Doren Reward (#331)"
    { 332, 1000332 }, // "Quest: Wine Shop Advert Reward (#332)"
    { 338, 1000338 }, // "Quest: The Green Hills of Stranglethorn Reward (#338)"
    { 339, 1000339 }, // "Quest: Chapter I Reward (#339)"
    { 340, 1000340 }, // "Quest: Chapter II Reward (#340)"
    { 341, 1000341 }, // "Quest: Chapter III Reward (#341)"
    { 342, 1000342 }, // "Quest: Chapter IV Reward (#342)"
    { 346, 1000346 }, // "Quest: Return to Kristoff Reward (#346)"
    { 348, 1000348 }, // "Quest: Stranglethorn Fever Reward (#348)"
    { 358, 1000358 }, // "Quest: Graverobbers Reward (#358)"
    { 364, 1000364 }, // "Quest: The Mindless Ones Reward (#364)"
    { 367, 1000367 }, // "Quest: A New Plague Reward (#367)"
    { 368, 1000368 }, // "Quest: A New Plague Reward (#368)"
    { 369, 1000369 }, // "Quest: A New Plague Reward (#369)"
    { 372, 1000372 }, // "Quest: At War With The Scarlet Crusade Reward (#372)"
    { 374, 1000374 }, // "Quest: Proof of Demise Reward (#374)"
    { 375, 1000375 }, // "Quest: The Chill of Death Reward (#375)"
    { 376, 1000376 }, // "Quest: The Damned Reward (#376)"
    { 377, 1000377 }, // "Quest: Crime and Punishment Reward (#377)"
    { 378, 1000378 }, // "Quest: The Fury Runs Deep Reward (#378)"
    { 379, 1000379 }, // "Quest: Slake That Thirst Reward (#379)"
    { 380, 1000380 }, // "Quest: Night Web's Hollow Reward (#380)"
    { 381, 1000381 }, // "Quest: The Scarlet Crusade Reward (#381)"
    { 382, 1000382 }, // "Quest: The Red Messenger Reward (#382)"
    { 384, 1000384 }, // "Quest: Beer Basted Boar Ribs Reward (#384)"
    { 385, 1000385 }, // "Quest: Crocolisk Hunting Reward (#385)"
    { 386, 1000386 }, // "Quest: What Comes Around... Reward (#386)"
    { 396, 1000396 }, // "Quest: An Audience with the King Reward (#396)"
    { 397, 1000397 }, // "Quest: You Have Served Us Well Reward (#397)"
    { 398, 1000398 }, // "Quest: Wanted: Maggot Eye Reward (#398)"
    { 408, 1000408 }, // "Quest: The Family Crypt Reward (#408)"
    { 411, 1000411 }, // "Quest: The Prodigal Lich Returns Reward (#411)"
    { 412, 1000412 }, // "Quest: Operation Recombobulation Reward (#412)"
    { 415, 1000415 }, // "Quest: Rejold's New Brew Reward (#415)"
    { 416, 1000416 }, // "Quest: Rat Catching Reward (#416)"
    { 417, 1000417 }, // "Quest: A Pilot's Revenge Reward (#417)"
    { 418, 1000418 }, // "Quest: Thelsamar Blood Sausages Reward (#418)"
    { 419, 1000419 }, // "Quest: The Lost Pilot Reward (#419)"
    { 425, 1000425 }, // "Quest: Ivar the Foul Reward (#425)"
    { 426, 1000426 }, // "Quest: The Mills Overrun Reward (#426)"
    { 429, 1000429 }, // "Quest: Wild Hearts Reward (#429)"
    { 431, 1000431 }, // "Quest: Candles of Beckoning Reward (#431)"
    { 435, 1000435 }, // "Quest: Escorting Erland Reward (#435)"
    { 437, 1000437 }, // "Quest: The Dead Fields Reward (#437)"
    { 442, 1000442 }, // "Quest: Assault on Fenris Isle Reward (#442)"
    { 446, 1000446 }, // "Quest: Thule Ravenclaw Reward (#446)"
    { 447, 1000447 }, // "Quest: A Recipe For Death Reward (#447)"
    { 448, 1000448 }, // "Quest: Report to Hadrec Reward (#448)"
    { 451, 1000451 }, // "Quest: A Recipe For Death Reward (#451)"
    { 452, 1000452 }, // "Quest: Pyrewood Ambush Reward (#452)"
    { 456, 1000456 }, // "Quest: The Balance of Nature Reward (#456)"
    { 457, 1000457 }, // "Quest: The Balance of Nature Reward (#457)"
    { 459, 1000459 }, // "Quest: The Woodland Protector Reward (#459)"
    { 466, 1000466 }, // "Quest: Search for Incendicite Reward (#466)"
    { 470, 1000470 }, // "Quest: Digging Through the Ooze Reward (#470)"
    { 471, 1000471 }, // "Quest: Apprentice's Duties Reward (#471)"
    { 474, 1000474 }, // "Quest: Defeat Nek'rosh Reward (#474)"
    { 480, 1000480 }, // "Quest: The Weaver Reward (#480)"
    { 483, 1000483 }, // "Quest: The Relics of Wakening Reward (#483)"
    { 486, 1000486 }, // "Quest: Ursal the Mauler Reward (#486)"
    { 488, 1000488 }, // "Quest: Zenn's Bidding Reward (#488)"
    { 491, 1000491 }, // "Quest: Wand to Bethor Reward (#491)"
    { 498, 1000498 }, // "Quest: The Rescue Reward (#498)"
    { 501, 1000501 }, // "Quest: Elixir of Pain Reward (#501)"
    { 504, 1000504 }, // "Quest: Crushridge Warmongers Reward (#504)"
    { 505, 1000505 }, // "Quest: Syndicate Assassins Reward (#505)"
    { 508, 1000508 }, // "Quest: Taretha's Gift Reward (#508)"
    { 509, 1000509 }, // "Quest: Elixir of Agony Reward (#509)"
    { 515, 1000515 }, // "Quest: Elixir of Agony Reward (#515)"
    { 516, 1000516 }, // "Quest: Beren's Peril Reward (#516)"
    { 521, 1000521 }, // "Quest: The Crown of Will Reward (#521)"
    { 530, 1000530 }, // "Quest: A Husband's Revenge Reward (#530)"
    { 531, 1000531 }, // "Quest: Vyrin's Revenge Reward (#531)"
    { 535, 1000535 }, // "Quest: Valik Reward (#535)"
    { 546, 1000546 }, // "Quest: Souvenirs of Death Reward (#546)"
    { 547, 1000547 }, // "Quest: Humbert's Sword Reward (#547)"
    { 550, 1000550 }, // "Quest: Battle of Hillsbrad Reward (#550)"
    { 555, 1000555 }, // "Quest: Soothing Turtle Bisque Reward (#555)"
    { 562, 1000562 }, // "Quest: Stormwind Ho! Reward (#562)"
    { 564, 1000564 }, // "Quest: Costly Menace Reward (#564)"
    { 565, 1000565 }, // "Quest: Bartolo's Yeti Fur Cloak Reward (#565)"
    { 566, 1000566 }, // "Quest: WANTED: Baron Vardus Reward (#566)"
    { 567, 1000567 }, // "Quest: Dangerous! Reward (#567)"
    { 569, 1000569 }, // "Quest: The Defense of Grom'gol Reward (#569)"
    { 573, 1000573 }, // "Quest: Mok'thardin's Enchantment Reward (#573)"
    { 576, 1000576 }, // "Quest: Keep An Eye Out Reward (#576)"
    { 579, 1000579 }, // "Quest: Stormwind Library Reward (#579)"
    { 580, 1000580 }, // "Quest: Whiskey Slim's Lost Grog Reward (#580)"
    { 582, 1000582 }, // "Quest: Headhunting Reward (#582)"
    { 592, 1000592 }, // "Quest: Saving Yenniku Reward (#592)"
    { 593, 1000593 }, // "Quest: Filling the Soul Gem Reward (#593)"
    { 596, 1000596 }, // "Quest: Bloody Bone Necklaces Reward (#596)"
    { 598, 1000598 }, // "Quest: Split Bone Necklace Reward (#598)"
    { 600, 1000600 }, // "Quest: Venture Company Mining Reward (#600)"
    { 608, 1000608 }, // "Quest: The Bloodsail Buccaneers Reward (#608)"
    { 611, 1000611 }, // "Quest: The Curse of the Tides Reward (#611)"
    { 613, 1000613 }, // "Quest: Cracking Maury's Foot Reward (#613)"
    { 614, 1000614 }, // "Quest: The Captain's Chest Reward (#614)"
    { 617, 1000617 }, // "Quest: Akiris by the Bundle Reward (#617)"
    { 618, 1000618 }, // "Quest: Facing Negolash Reward (#618)"
    { 621, 1000621 }, // "Quest: Zanzil's Secret Reward (#621)"
    { 622, 1000622 }, // "Quest: Return to Corporal Kaleb Reward (#622)"
    { 626, 1000626 }, // "Quest: Cortello's Riddle Reward (#626)"
    { 628, 1000628 }, // "Quest: Excelsior Reward (#628)"
    { 630, 1000630 }, // "Quest: Message in a Bottle Reward (#630)"
    { 633, 1000633 }, // "Quest: The Thandol Span Reward (#633)"
    { 646, 1000646 }, // "Quest: Trol'kalar Reward (#646)"
    { 648, 1000648 }, // "Quest: Rescue OOX-17/TN! Reward (#648)"
    { 656, 1000656 }, // "Quest: Summoning the Princess Reward (#656)"
    { 661, 1000661 }, // "Quest: Hints of a New Plague? Reward (#661)"
    { 662, 1000662 }, // "Quest: Deep Sea Salvage Reward (#662)"
    { 664, 1000664 }, // "Quest: Drowned Sorrows Reward (#664)"
    { 666, 1000666 }, // "Quest: Sunken Treasure Reward (#666)"
    { 667, 1000667 }, // "Quest: Death From Below Reward (#667)"
    { 673, 1000673 }, // "Quest: Foul Magics Reward (#673)"
    { 679, 1000679 }, // "Quest: Call to Arms Reward (#679)"
    { 680, 1000680 }, // "Quest: The Real Threat Reward (#680)"
    { 682, 1000682 }, // "Quest: Stromgarde Badges Reward (#682)"
    { 684, 1000684 }, // "Quest: Wanted!  Marez Cowl Reward (#684)"
    { 685, 1000685 }, // "Quest: Wanted!  Otto and Falconcrest Reward (#685)"
    { 697, 1000697 }, // "Quest: Malin's Request Reward (#697)"
    { 700, 1000700 }, // "Quest: A King's Tribute Reward (#700)"
    { 703, 1000703 }, // "Quest: Barbecued Buzzard Wings Reward (#703)"
    { 704, 1000704 }, // "Quest: Agmond's Fate Reward (#704)"
    { 705, 1000705 }, // "Quest: Pearl Diving Reward (#705)"
    { 706, 1000706 }, // "Quest: Fiery Blaze Enchantments Reward (#706)"
    { 709, 1000709 }, // "Quest: Solution to Doom Reward (#709)"
    { 715, 1000715 }, // "Quest: Liquid Stone Reward (#715)"
    { 716, 1000716 }, // "Quest: Stone Is Better than Cloth Reward (#716)"
    { 717, 1000717 }, // "Quest: Tremors of the Earth Reward (#717)"
    { 719, 1000719 }, // "Quest: A Dwarf and His Tools Reward (#719)"
    { 733, 1000733 }, // "Quest: Scrounging Reward (#733)"
    { 737, 1000737 }, // "Quest: Forbidden Knowledge Reward (#737)"
    { 738, 1000738 }, // "Quest: Find Agmond Reward (#738)"
    { 739, 1000739 }, // "Quest: Murdaloc Reward (#739)"
    { 741, 1000741 }, // "Quest: The Absent Minded Prospector Reward (#741)"
    { 744, 1000744 }, // "Quest: Preparation for Ceremony Reward (#744)"
    { 745, 1000745 }, // "Quest: Sharing the Land Reward (#745)"
    { 746, 1000746 }, // "Quest: Dwarven Digging Reward (#746)"
    { 747, 1000747 }, // "Quest: The Hunt Begins Reward (#747)"
    { 750, 1000750 }, // "Quest: The Hunt Continues Reward (#750)"
    { 757, 1000757 }, // "Quest: Rite of Strength Reward (#757)"
    { 758, 1000758 }, // "Quest: Thunderhorn Cleansing Reward (#758)"
    { 760, 1000760 }, // "Quest: Wildmane Cleansing Reward (#760)"
    { 762, 1000762 }, // "Quest: An Ambassador of Evil Reward (#762)"
    { 765, 1000765 }, // "Quest: Supervisor Fizsprocket Reward (#765)"
    { 766, 1000766 }, // "Quest: Mazzranache Reward (#766)"
    { 768, 1000768 }, // "Quest: Gathering Leather Reward (#768)"
    { 769, 1000769 }, // "Quest: Kodo Hide Bag Reward (#769)"
    { 770, 1000770 }, // "Quest: The Demon Scarred Cloak Reward (#770)"
    { 772, 1000772 }, // "Quest: Rite of Vision Reward (#772)"
    { 776, 1000776 }, // "Quest: Rites of the Earthmother Reward (#776)"
    { 778, 1000778 }, // "Quest: This Is Going to Be Hard Reward (#778)"
    { 780, 1000780 }, // "Quest: The Battleboars Reward (#780)"
    { 781, 1000781 }, // "Quest: Attack on Camp Narache Reward (#781)"
    { 786, 1000786 }, // "Quest: Thwarting Kolkar Aggression Reward (#786)"
    { 788, 1000788 }, // "Quest: Cutting Teeth Reward (#788)"
    { 789, 1000789 }, // "Quest: Sting of the Scorpid Reward (#789)"
    { 791, 1000791 }, // "Quest: Carry Your Weight Reward (#791)"
    { 792, 1000792 }, // "Quest: Vile Familiars Reward (#792)"
    { 793, 1000793 }, // "Quest: Broken Alliances Reward (#793)"
    { 794, 1000794 }, // "Quest: Burning Blade Medallion Reward (#794)"
    { 804, 1000804 }, // "Quest: Sarkoth Reward (#804)"
    { 806, 1000806 }, // "Quest: Dark Storms Reward (#806)"
    { 808, 1000808 }, // "Quest: Minshina's Skull Reward (#808)"
    { 812, 1000812 }, // "Quest: Need for a Cure Reward (#812)"
    { 813, 1000813 }, // "Quest: Finding the Antidote Reward (#813)"
    { 815, 1000815 }, // "Quest: Break a Few Eggs Reward (#815)"
    { 816, 1000816 }, // "Quest: Lost But Not Forgotten Reward (#816)"
    { 818, 1000818 }, // "Quest: A Solvent Spirit Reward (#818)"
    { 821, 1000821 }, // "Quest: Chen's Empty Keg Reward (#821)"
    { 822, 1000822 }, // "Quest: Chen's Empty Keg Reward (#822)"
    { 824, 1000824 }, // "Quest: Je'neu of the Earthen Ring Reward (#824)"
    { 825, 1000825 }, // "Quest: From The Wreckage.... Reward (#825)"
    { 826, 1000826 }, // "Quest: Zalazane Reward (#826)"
    { 827, 1000827 }, // "Quest: Skull Rock Reward (#827)"
    { 835, 1000835 }, // "Quest: Securing the Lines Reward (#835)"
    { 836, 1000836 }, // "Quest: Rescue OOX-09/HL! Reward (#836)"
    { 841, 1000841 }, // "Quest: Another Power Source? Reward (#841)"
    { 847, 1000847 }, // "Quest: Guile of the Raptor Reward (#847)"
    { 849, 1000849 }, // "Quest: Revenge of Gann Reward (#849)"
    { 852, 1000852 }, // "Quest: Hezrul Bloodmark Reward (#852)"
    { 853, 1000853 }, // "Quest: Apothecary Zamah Reward (#853)"
    { 855, 1000855 }, // "Quest: Centaur Bracers Reward (#855)"
    { 862, 1000862 }, // "Quest: Dig Rat Stew Reward (#862)"
    { 863, 1000863 }, // "Quest: The Escape Reward (#863)"
    { 864, 1000864 }, // "Quest: Return to Apothecary Zinge Reward (#864)"
    { 865, 1000865 }, // "Quest: Raptor Horns Reward (#865)"
    { 866, 1000866 }, // "Quest: Root Samples Reward (#866)"
    { 868, 1000868 }, // "Quest: Egg Hunt Reward (#868)"
    { 872, 1000872 }, // "Quest: The Disruption Ends Reward (#872)"
    { 873, 1000873 }, // "Quest: Isha Awak Reward (#873)"
    { 876, 1000876 }, // "Quest: Serena Bloodfeather Reward (#876)"
    { 888, 1000888 }, // "Quest: Stolen Booty Reward (#888)"
    { 891, 1000891 }, // "Quest: The Guns of Northwatch Reward (#891)"
    { 893, 1000893 }, // "Quest: Weapons of Choice Reward (#893)"
    { 896, 1000896 }, // "Quest: Miner's Fortune Reward (#896)"
    { 898, 1000898 }, // "Quest: Free From the Hold Reward (#898)"
    { 899, 1000899 }, // "Quest: Consumed by Hatred Reward (#899)"
    { 902, 1000902 }, // "Quest: Samophlange Reward (#902)"
    { 906, 1000906 }, // "Quest: Betrayal from Within Reward (#906)"
    { 909, 1000909 }, // "Quest: Baron Aquanis Reward (#909)"
    { 912, 1000912 }, // "Quest: Stonesplinter Trogg Disguise Reward (#912)"
    { 913, 1000913 }, // "Quest: Cry of the Thunderhawk Reward (#913)"
    { 914, 1000914 }, // "Quest: Leaders of the Fang Reward (#914)"
    { 916, 1000916 }, // "Quest: Webwood Venom Reward (#916)"
    { 917, 1000917 }, // "Quest: Webwood Egg Reward (#917)"
    { 918, 1000918 }, // "Quest: Timberling Seeds Reward (#918)"
    { 919, 1000919 }, // "Quest: Timberling Sprouts Reward (#919)"
    { 923, 1000923 }, // "Quest: Tumors Reward (#923)"
    { 924, 1000924 }, // "Quest: The Demon Seed Reward (#924)"
    { 926, 1000926 }, // "Quest: Flawed Power Stone Reward (#926)"
    { 932, 1000932 }, // "Quest: Twisted Hatred Reward (#932)"
    { 935, 1000935 }, // "Quest: Crown of the Earth Reward (#935)"
    { 937, 1000937 }, // "Quest: The Enchanted Glade Reward (#937)"
    { 938, 1000938 }, // "Quest: Mist Reward (#938)"
    { 941, 1000941 }, // "Quest: Planting the Heart Reward (#941)"
    { 943, 1000943 }, // "Quest: The Absent Minded Prospector Reward (#943)"
    { 947, 1000947 }, // "Quest: Cave Mushrooms Reward (#947)"
    { 951, 1000951 }, // "Quest: Mathystra Relics Reward (#951)"
    { 957, 1000957 }, // "Quest: Bashal'Aran Reward (#957)"
    { 958, 1000958 }, // "Quest: Tools of the Highborne Reward (#958)"
    { 960, 1000960 }, // "Quest: Onu is meditating Reward (#960)"
    { 961, 1000961 }, // "Quest: Onu is meditating Reward (#961)"
    { 962, 1000962 }, // "Quest: Serpentbloom Reward (#962)"
    { 963, 1000963 }, // "Quest: For Love Eternal Reward (#963)"
    { 971, 1000971 }, // "Quest: Knowledge in the Deeps Reward (#971)"
    { 972, 1000972 }, // "Quest: Water Sapta Reward (#972)"
    { 973, 1000973 }, // "Quest: The Tower of Althalaxx Reward (#973)"
    { 975, 1000975 }, // "Quest: Cache of Mau'ari Reward (#975)"
    { 976, 1000976 }, // "Quest: Supplies to Auberdine Reward (#976)"
    { 981, 1000981 }, // "Quest: The Tower of Althalaxx Reward (#981)"
    { 982, 1000982 }, // "Quest: Deep Ocean, Vast Sea Reward (#982)"
    { 994, 1000994 }, // "Quest: Escape Through Force Reward (#994)"
    { 995, 1000995 }, // "Quest: Escape Through Stealth Reward (#995)"
    { 1003, 1001003 }, // "Quest: Buzzbox 525 Reward (#1003)"
    { 1009, 1001009 }, // "Quest: Ruuzel Reward (#1009)"
    { 1012, 1001012 }, // "Quest: Insane Druids Reward (#1012)"
    { 1013, 1001013 }, // "Quest: The Book of Ur Reward (#1013)"
    { 1014, 1001014 }, // "Quest: Arugal Must Die Reward (#1014)"
    { 1017, 1001017 }, // "Quest: Mage Summoner Reward (#1017)"
    { 1025, 1001025 }, // "Quest: An Aggressive Defense Reward (#1025)"
    { 1028, 1001028 }, // "Quest: Raene's Cleansing Reward (#1028)"
    { 1031, 1001031 }, // "Quest: The Branch of Cenarius Reward (#1031)"
    { 1035, 1001035 }, // "Quest: Fallen Sky Lake Reward (#1035)"
    { 1044, 1001044 }, // "Quest: Answered Questions Reward (#1044)"
    { 1046, 1001046 }, // "Quest: Raene's Cleansing Reward (#1046)"
    { 1048, 1001048 }, // "Quest: Into The Scarlet Monastery Reward (#1048)"
    { 1049, 1001049 }, // "Quest: Compendium of the Fallen Reward (#1049)"
    { 1050, 1001050 }, // "Quest: Mythology of the Titans Reward (#1050)"
    { 1051, 1001051 }, // "Quest: Vorrel's Revenge Reward (#1051)"
    { 1053, 1001053 }, // "Quest: In the Name of the Light Reward (#1053)"
    { 1054, 1001054 }, // "Quest: Culling the Threat Reward (#1054)"
    { 1058, 1001058 }, // "Quest: Jin'Zil's Forest Magic Reward (#1058)"
    { 1059, 1001059 }, // "Quest: Reclaiming the Charred Vale Reward (#1059)"
    { 1078, 1001078 }, // "Quest: Retrieval for Mauren Reward (#1078)"
    { 1081, 1001081 }, // "Quest: Reception from Tyrande Reward (#1081)"
    { 1089, 1001089 }, // "Quest: The Den Reward (#1089)"
    { 1092, 1001092 }, // "Quest: Gerenzo's Orders Reward (#1092)"
    { 1096, 1001096 }, // "Quest: Gerenzo Wrenchwhistle Reward (#1096)"
    { 1098, 1001098 }, // "Quest: Deathstalkers in Shadowfang Reward (#1098)"
    { 1099, 1001099 }, // "Quest: Goblins Win! Reward (#1099)"
    { 1101, 1001101 }, // "Quest: The Crone of the Kraul Reward (#1101)"
    { 1102, 1001102 }, // "Quest: A Vengeful Fate Reward (#1102)"
    { 1127, 1001127 }, // "Quest: Fool's Stout Reward (#1127)"
    { 1135, 1001135 }, // "Quest: Highperch Venom Reward (#1135)"
    { 1136, 1001136 }, // "Quest: Frostmaw Reward (#1136)"
    { 1137, 1001137 }, // "Quest: News for Fizzle Reward (#1137)"
    { 1138, 1001138 }, // "Quest: Fruit of the Sea Reward (#1138)"
    { 1139, 1001139 }, // "Quest: The Lost Tablets of Will Reward (#1139)"
    { 1141, 1001141 }, // "Quest: The Family and the Fishing Pole Reward (#1141)"
    { 1142, 1001142 }, // "Quest: Mortality Wanes Reward (#1142)"
    { 1144, 1001144 }, // "Quest: Willix the Importer Reward (#1144)"
    { 1153, 1001153 }, // "Quest: A New Ore Sample Reward (#1153)"
    { 1164, 1001164 }, // "Quest: To Steal From Thieves Reward (#1164)"
    { 1166, 1001166 }, // "Quest: Overlord Mok'Morokk's Concern Reward (#1166)"
    { 1168, 1001168 }, // "Quest: Army of the Black Dragon Reward (#1168)"
    { 1169, 1001169 }, // "Quest: Identifying the Brood Reward (#1169)"
    { 1172, 1001172 }, // "Quest: The Brood of Onyxia Reward (#1172)"
    { 1173, 1001173 }, // "Quest: Challenge Overlord Mok'Morokk Reward (#1173)"
    { 1174, 1001174 }, // "Quest: Gnomes Win! Reward (#1174)"
    { 1177, 1001177 }, // "Quest: Hungry! Reward (#1177)"
    { 1184, 1001184 }, // "Quest: Parts of the Swarm Reward (#1184)"
    { 1189, 1001189 }, // "Quest: Safety First Reward (#1189)"
    { 1197, 1001197 }, // "Quest: The Sacred Flame Reward (#1197)"
    { 1199, 1001199 }, // "Quest: Twilight Falls Reward (#1199)"
    { 1200, 1001200 }, // "Quest: Blackfathom Villainy Reward (#1200)"
    { 1203, 1001203 }, // "Quest: Jarl Needs a Blade Reward (#1203)"
    { 1218, 1001218 }, // "Quest: Marsh Frog Legs Reward (#1218)"
    { 1221, 1001221 }, // "Quest: Blueleaf Tubers Reward (#1221)"
    { 1222, 1001222 }, // "Quest: Stinky's Escape Reward (#1222)"
    { 1258, 1001258 }, // "Quest: ... and Bugs Reward (#1258)"
    { 1267, 1001267 }, // "Quest: The Missing Diplomat Reward (#1267)"
    { 1270, 1001270 }, // "Quest: Stinky's Escape Reward (#1270)"
    { 1271, 1001271 }, // "Quest: Feast at the Blue Recluse Reward (#1271)"
    { 1273, 1001273 }, // "Quest: Questioning Reethe Reward (#1273)"
    { 1275, 1001275 }, // "Quest: Researching the Corruption Reward (#1275)"
    { 1318, 1001318 }, // "Quest: Unfinished Gordok Business Reward (#1318)"
    { 1358, 1001358 }, // "Quest: Sample for Helbrim Reward (#1358)"
    { 1364, 1001364 }, // "Quest: Mazen's Behest Reward (#1364)"
    { 1366, 1001366 }, // "Quest: Centaur Bounty Reward (#1366)"
    { 1370, 1001370 }, // "Quest: Stealing Supplies Reward (#1370)"
    { 1380, 1001380 }, // "Quest: Khan Hratha Reward (#1380)"
    { 1381, 1001381 }, // "Quest: Khan Hratha Reward (#1381)"
    { 1383, 1001383 }, // "Quest: Nothing But The Truth Reward (#1383)"
    { 1387, 1001387 }, // "Quest: Centaur Bounty Reward (#1387)"
    { 1393, 1001393 }, // "Quest: Galen's Escape Reward (#1393)"
    { 1394, 1001394 }, // "Quest: Final Passage Reward (#1394)"
    { 1423, 1001423 }, // "Quest: The Lost Supplies Reward (#1423)"
    { 1427, 1001427 }, // "Quest: Threat From the Sea Reward (#1427)"
    { 1430, 1001430 }, // "Quest: Fresh Meat Reward (#1430)"
    { 1436, 1001436 }, // "Quest: Alliance Relations Reward (#1436)"
    { 1440, 1001440 }, // "Quest: Return to Vahlarriel Reward (#1440)"
    { 1442, 1001442 }, // "Quest: Seeking the Kor Gem Reward (#1442)"
    { 1445, 1001445 }, // "Quest: The Temple of Atal'Hakkar Reward (#1445)"
    { 1446, 1001446 }, // "Quest: Jammal'an the Prophet Reward (#1446)"
    { 1457, 1001457 }, // "Quest: The Karnitol Shipwreck Reward (#1457)"
    { 1462, 1001462 }, // "Quest: Earth Sapta Reward (#1462)"
    { 1463, 1001463 }, // "Quest: Earth Sapta Reward (#1463)"
    { 1464, 1001464 }, // "Quest: Fire Sapta Reward (#1464)"
    { 1467, 1001467 }, // "Quest: Reagents for Reclaimers Inc. Reward (#1467)"
    { 1474, 1001474 }, // "Quest: The Binding Reward (#1474)"
    { 1475, 1001475 }, // "Quest: Into The Temple of Atal'Hakkar Reward (#1475)"
    { 1486, 1001486 }, // "Quest: Deviate Hides Reward (#1486)"
    { 1487, 1001487 }, // "Quest: Deviate Eradication Reward (#1487)"
    { 1488, 1001488 }, // "Quest: The Corrupter Reward (#1488)"
    { 1499, 1001499 }, // "Quest: Vile Familiars Reward (#1499)"
    { 1503, 1001503 }, // "Quest: Forged Steel Reward (#1503)"
    { 1513, 1001513 }, // "Quest: The Binding Reward (#1513)"
    { 1518, 1001518 }, // "Quest: Call of Earth Reward (#1518)"
    { 1521, 1001521 }, // "Quest: Call of Earth Reward (#1521)"
    { 1525, 1001525 }, // "Quest: Call of Fire Reward (#1525)"
    { 1526, 1001526 }, // "Quest: Call of Fire Reward (#1526)"
    { 1527, 1001527 }, // "Quest: Call of Fire Reward (#1527)"
    { 1531, 1001531 }, // "Quest: Call of Air Reward (#1531)"
    { 1532, 1001532 }, // "Quest: Call of Air Reward (#1532)"
    { 1559, 1001559 }, // "Quest: Flash Bomb Recipe Reward (#1559)"
    { 1560, 1001560 }, // "Quest: Tooga's Quest Reward (#1560)"
    { 1578, 1001578 }, // "Quest: Supplying the Front Reward (#1578)"
    { 1580, 1001580 }, // "Quest: Electropellers Reward (#1580)"
    { 1581, 1001581 }, // "Quest: Elixirs for the Bladeleafs Reward (#1581)"
    { 1582, 1001582 }, // "Quest: Moonglow Vest Reward (#1582)"
    { 1618, 1001618 }, // "Quest: Gearing Redridge Reward (#1618)"
    { 1641, 1001641 }, // "Quest: The Tome of Divinity Reward (#1641)"
    { 1645, 1001645 }, // "Quest: The Tome of Divinity Reward (#1645)"
    { 1652, 1001652 }, // "Quest: The Tome of Valor Reward (#1652)"
    { 1655, 1001655 }, // "Quest: Bailor's Ore Shipment Reward (#1655)"
    { 1656, 1001656 }, // "Quest: A Task Unfinished Reward (#1656)"
    { 1657, 1001657 }, // "Quest: Stinking Up Southshore Reward (#1657)"
    { 1658, 1001658 }, // "Quest: Crashing the Wickerman Festival Reward (#1658)"
    { 1667, 1001667 }, // "Quest: Dead-tooth Jack Reward (#1667)"
    { 1682, 1001682 }, // "Quest: Grey Iron Weapons Reward (#1682)"
    { 1693, 1001693 }, // "Quest: Weapons of Elunite Reward (#1693)"
    { 1702, 1001702 }, // "Quest: The Shieldsmith Reward (#1702)"
    { 1706, 1001706 }, // "Quest: Grimand's Armor Reward (#1706)"
    { 1707, 1001707 }, // "Quest: Water Pouch Bounty Reward (#1707)"
    { 1709, 1001709 }, // "Quest: Klockmort's Creation Reward (#1709)"
    { 1711, 1001711 }, // "Quest: Mathiel's Armor Reward (#1711)"
    { 1714, 1001714 }, // "Quest: Essence of the Exile Reward (#1714)"
    { 1739, 1001739 }, // "Quest: The Binding Reward (#1739)"
    { 1740, 1001740 }, // "Quest: The Orb of Soran'ruk Reward (#1740)"
    { 1782, 1001782 }, // "Quest: Furen's Armor Reward (#1782)"
    { 1789, 1001789 }, // "Quest: The Symbol of Life Reward (#1789)"
    { 1790, 1001790 }, // "Quest: The Symbol of Life Reward (#1790)"
    { 1792, 1001792 }, // "Quest: Whirlwind Weapon Reward (#1792)"
    { 1793, 1001793 }, // "Quest: The Tome of Valor Reward (#1793)"
    { 1794, 1001794 }, // "Quest: The Tome of Valor Reward (#1794)"
    { 1795, 1001795 }, // "Quest: The Binding Reward (#1795)"
    { 1822, 1001822 }, // "Quest: Heirloom Weapon Reward (#1822)"
    { 1824, 1001824 }, // "Quest: Trial at the Field of Giants Reward (#1824)"
    { 1843, 1001843 }, // "Quest: Brutal Gauntlets Reward (#1843)"
    { 1845, 1001845 }, // "Quest: Brutal Helm Reward (#1845)"
    { 1847, 1001847 }, // "Quest: Brutal Legguards Reward (#1847)"
    { 1848, 1001848 }, // "Quest: Brutal Hauberk Reward (#1848)"
    { 1858, 1001858 }, // "Quest: The Shattered Hand Reward (#1858)"
    { 1861, 1001861 }, // "Quest: Mirror Lake Reward (#1861)"
    { 1878, 1001878 }, // "Quest: Water Pouch Bounty Reward (#1878)"
    { 1880, 1001880 }, // "Quest: Mage-tastic Gizmonitor Reward (#1880)"
    { 1882, 1001882 }, // "Quest: The Balnir Farmstead Reward (#1882)"
    { 1884, 1001884 }, // "Quest: Ju-Ju Heaps Reward (#1884)"
    { 1941, 1001941 }, // "Quest: Manaweave Robe Reward (#1941)"
    { 1942, 1001942 }, // "Quest: Astral Knot Garment Reward (#1942)"
    { 1946, 1001946 }, // "Quest: Nether-lace Garment Reward (#1946)"
    { 1952, 1001952 }, // "Quest: Mage's Wand Reward (#1952)"
    { 1958, 1001958 }, // "Quest: Celestial Power Reward (#1958)"
    { 1962, 1001962 }, // "Quest: Spellfire Robes Reward (#1962)"
    { 1978, 1001978 }, // "Quest: The Deathstalkers Reward (#1978)"
    { 2038, 1002038 }, // "Quest: Bingles' Missing Supplies Reward (#2038)"
    { 2040, 1002040 }, // "Quest: Underground Assault Reward (#2040)"
    { 2078, 1002078 }, // "Quest: Gyromast's Revenge Reward (#2078)"
    { 2139, 1002139 }, // "Quest: Tharnariun's Hope Reward (#2139)"
    { 2158, 1002158 }, // "Quest: Rest and Relaxation Reward (#2158)"
    { 2159, 1002159 }, // "Quest: Dolanaar Delivery Reward (#2159)"
    { 2160, 1002160 }, // "Quest: Supplies to Tannok Reward (#2160)"
    { 2161, 1002161 }, // "Quest: A Peon's Burden Reward (#2161)"
    { 2178, 1002178 }, // "Quest: Easy Strider Living Reward (#2178)"
    { 2202, 1002202 }, // "Quest: Uldaman Reagent Run Reward (#2202)"
    { 2206, 1002206 }, // "Quest: Snatch and Grab Reward (#2206)"
    { 2239, 1002239 }, // "Quest: Onin's Report Reward (#2239)"
    { 2240, 1002240 }, // "Quest: The Hidden Chamber Reward (#2240)"
    { 2242, 1002242 }, // "Quest: Destiny Calls Reward (#2242)"
    { 2282, 1002282 }, // "Quest: Alther's Mill Reward (#2282)"
    { 2341, 1002341 }, // "Quest: Necklace Recovery, Take 3 Reward (#2341)"
    { 2358, 1002358 }, // "Quest: Horns of Nez'ra Reward (#2358)"
    { 2359, 1002359 }, // "Quest: Klaven's Tower Reward (#2359)"
    { 2361, 1002361 }, // "Quest: Restoring the Necklace Reward (#2361)"
    { 2381, 1002381 }, // "Quest: Plundering the Plunderers Reward (#2381)"
    { 2399, 1002399 }, // "Quest: The Sprouted Fronds Reward (#2399)"
    { 2418, 1002418 }, // "Quest: Power Stones Reward (#2418)"
    { 2439, 1002439 }, // "Quest: The Platinum Discs Reward (#2439)"
    { 2440, 1002440 }, // "Quest: The Platinum Discs Reward (#2440)"
    { 2458, 1002458 }, // "Quest: Deep Cover Reward (#2458)"
    { 2478, 1002478 }, // "Quest: Mission: Possible But Not Probable Reward (#2478)"
    { 2480, 1002480 }, // "Quest: Hinott's Assistance Reward (#2480)"
    { 2499, 1002499 }, // "Quest: Oakenscowl Reward (#2499)"
    { 2520, 1002520 }, // "Quest: Sathrah's Sacrifice Reward (#2520)"
    { 2521, 1002521 }, // "Quest: To Serve Kum'isha Reward (#2521)"
    { 2522, 1002522 }, // "Quest: Kum'isha's Endeavors Reward (#2522)"
    { 2561, 1002561 }, // "Quest: Druid of the Claw Reward (#2561)"
    { 2581, 1002581 }, // "Quest: Snickerfang Jowls Reward (#2581)"
    { 2582, 1002582 }, // "Quest: Rage of Ages Reward (#2582)"
    { 2583, 1002583 }, // "Quest: A Boar's Vitality Reward (#2583)"
    { 2584, 1002584 }, // "Quest: Spirit of the Boar Reward (#2584)"
    { 2585, 1002585 }, // "Quest: The Decisive Striker Reward (#2585)"
    { 2586, 1002586 }, // "Quest: Salt of the Scorpok Reward (#2586)"
    { 2601, 1002601 }, // "Quest: The Basilisk's Bite Reward (#2601)"
    { 2602, 1002602 }, // "Quest: Infallible Mind Reward (#2602)"
    { 2603, 1002603 }, // "Quest: Vulture's Vigor Reward (#2603)"
    { 2604, 1002604 }, // "Quest: Spiritual Domination Reward (#2604)"
    { 2609, 1002609 }, // "Quest: The Touch of Zanzil Reward (#2609)"
    { 2662, 1002662 }, // "Quest: Noggenfogger Elixir Reward (#2662)"
    { 2701, 1002701 }, // "Quest: Heroes of Old Reward (#2701)"
    { 2741, 1002741 }, // "Quest: The Super Egg-O-Matic Reward (#2741)"
    { 2747, 1002747 }, // "Quest: An Extraordinary Egg Reward (#2747)"
    { 2748, 1002748 }, // "Quest: A Fine Egg Reward (#2748)"
    { 2749, 1002749 }, // "Quest: An Ordinary Egg Reward (#2749)"
    { 2751, 1002751 }, // "Quest: Barbaric Battlements Reward (#2751)"
    { 2752, 1002752 }, // "Quest: On Iron Pauldrons Reward (#2752)"
    { 2753, 1002753 }, // "Quest: Trampled Under Foot Reward (#2753)"
    { 2754, 1002754 }, // "Quest: Horns of Frenzy Reward (#2754)"
    { 2755, 1002755 }, // "Quest: Joys of Omosh Reward (#2755)"
    { 2758, 1002758 }, // "Quest: The Origins of Smithing Reward (#2758)"
    { 2761, 1002761 }, // "Quest: Smelt On, Smelt Off Reward (#2761)"
    { 2762, 1002762 }, // "Quest: The Great Silver Deceiver Reward (#2762)"
    { 2763, 1002763 }, // "Quest: The Art of the Imbue Reward (#2763)"
    { 2765, 1002765 }, // "Quest: Expert Blacksmith! Reward (#2765)"
    { 2767, 1002767 }, // "Quest: Rescue OOX-22/FE! Reward (#2767)"
    { 2768, 1002768 }, // "Quest: Divino-matic Rod Reward (#2768)"
    { 2770, 1002770 }, // "Quest: Gahz'rilla Reward (#2770)"
    { 2821, 1002821 }, // "Quest: The Mark of Quality Reward (#2821)"
    { 2822, 1002822 }, // "Quest: The Mark of Quality Reward (#2822)"
    { 2841, 1002841 }, // "Quest: Rig Wars Reward (#2841)"
    { 2843, 1002843 }, // "Quest: Gnomer-gooooone! Reward (#2843)"
    { 2845, 1002845 }, // "Quest: Wandering Shay Reward (#2845)"
    { 2846, 1002846 }, // "Quest: Tiara of the Deep Reward (#2846)"
    { 2848, 1002848 }, // "Quest: Wild Leather Shoulders Reward (#2848)"
    { 2849, 1002849 }, // "Quest: Wild Leather Vest Reward (#2849)"
    { 2850, 1002850 }, // "Quest: Wild Leather Helmet Reward (#2850)"
    { 2851, 1002851 }, // "Quest: Wild Leather Boots Reward (#2851)"
    { 2852, 1002852 }, // "Quest: Wild Leather Leggings Reward (#2852)"
    { 2853, 1002853 }, // "Quest: Master of the Wild Leather Reward (#2853)"
    { 2855, 1002855 }, // "Quest: Wild Leather Shoulders Reward (#2855)"
    { 2856, 1002856 }, // "Quest: Wild Leather Vest Reward (#2856)"
    { 2857, 1002857 }, // "Quest: Wild Leather Helmet Reward (#2857)"
    { 2858, 1002858 }, // "Quest: Wild Leather Boots Reward (#2858)"
    { 2859, 1002859 }, // "Quest: Wild Leather Leggings Reward (#2859)"
    { 2860, 1002860 }, // "Quest: Master of the Wild Leather Reward (#2860)"
    { 2871, 1002871 }, // "Quest: Delivering the Relic Reward (#2871)"
    { 2874, 1002874 }, // "Quest: Deliver to MacKinley Reward (#2874)"
    { 2879, 1002879 }, // "Quest: The Stave of Equinex Reward (#2879)"
    { 2882, 1002882 }, // "Quest: Cuergo's Gold Reward (#2882)"
    { 2903, 1002903 }, // "Quest: The Battle Plans Reward (#2903)"
    { 2904, 1002904 }, // "Quest: A Fine Mess Reward (#2904)"
    { 2928, 1002928 }, // "Quest: Gyrodrillmatic Excavationators Reward (#2928)"
    { 2929, 1002929 }, // "Quest: The Grand Betrayal Reward (#2929)"
    { 2930, 1002930 }, // "Quest: Data Rescue Reward (#2930)"
    { 2938, 1002938 }, // "Quest: Venom to the Undercity Reward (#2938)"
    { 2942, 1002942 }, // "Quest: The Morrow Stone Reward (#2942)"
    { 2948, 1002948 }, // "Quest: Gnome Improvement Reward (#2948)"
    { 2950, 1002950 }, // "Quest: Nogg's Ring Redo Reward (#2950)"
    { 2952, 1002952 }, // "Quest: The Sparklematic 5200! Reward (#2952)"
    { 2953, 1002953 }, // "Quest: More Sparklematic Action Reward (#2953)"
    { 2964, 1002964 }, // "Quest: A Future Task Reward (#2964)"
    { 2968, 1002968 }, // "Quest: A Future Task Reward (#2968)"
    { 2972, 1002972 }, // "Quest: Doling Justice Reward (#2972)"
    { 2976, 1002976 }, // "Quest: A Grim Discovery Reward (#2976)"
    { 2987, 1002987 }, // "Quest: Gordunni Cobalt Reward (#2987)"
    { 2994, 1002994 }, // "Quest: Saving Sharpbeak Reward (#2994)"
    { 3062, 1003062 }, // "Quest: Dark Heart Reward (#3062)"
    { 3129, 1003129 }, // "Quest: Weapons of Spirit Reward (#3129)"
    { 3161, 1003161 }, // "Quest: Gahz'ridian Reward (#3161)"
    { 3201, 1003201 }, // "Quest: At Last! Reward (#3201)"
    { 3281, 1003281 }, // "Quest: Stolen Silver Reward (#3281)"
    { 3301, 1003301 }, // "Quest: Mura Runetotem Reward (#3301)"
    { 3321, 1003321 }, // "Quest: Did You Lose This? Reward (#3321)"
    { 3341, 1003341 }, // "Quest: Bring the End Reward (#3341)"
    { 3369, 1003369 }, // "Quest: In Nightmares Reward (#3369)"
    { 3370, 1003370 }, // "Quest: In Nightmares Reward (#3370)"
    { 3373, 1003373 }, // "Quest: The Essence of Eranikus Reward (#3373)"
    { 3375, 1003375 }, // "Quest: Replacement Phial Reward (#3375)"
    { 3376, 1003376 }, // "Quest: Break Sharptusk! Reward (#3376)"
    { 3378, 1003378 }, // "Quest: Prayer to Elune Reward (#3378)"
    { 3379, 1003379 }, // "Quest: Shadoweaver Reward (#3379)"
    { 3385, 1003385 }, // "Quest: The Undermarket Reward (#3385)"
    { 3402, 1003402 }, // "Quest: The Undermarket Reward (#3402)"
    { 3447, 1003447 }, // "Quest: Secret of the Circle Reward (#3447)"
    { 3451, 1003451 }, // "Quest: Signal for Pickup Reward (#3451)"
    { 3454, 1003454 }, // "Quest: The Torch of Retribution Reward (#3454)"
    { 3461, 1003461 }, // "Quest: Return to Tymor Reward (#3461)"
    { 3463, 1003463 }, // "Quest: Set Them Ablaze! Reward (#3463)"
    { 3481, 1003481 }, // "Quest: Trinkets... Reward (#3481)"
    { 3483, 1003483 }, // "Quest: Signal for Pickup Reward (#3483)"
    { 3501, 1003501 }, // "Quest: Everything Counts In Large Amounts Reward (#3501)"
    { 3502, 1003502 }, // "Quest: One Draenei's Junk... Reward (#3502)"
    { 3507, 1003507 }, // "Quest: Betrayed Reward (#3507)"
    { 3514, 1003514 }, // "Quest: Horde Presence Reward (#3514)"
    { 3522, 1003522 }, // "Quest: Iverron's Antidote Reward (#3522)"
    { 3525, 1003525 }, // "Quest: Extinguishing the Idol Reward (#3525)"
    { 3528, 1003528 }, // "Quest: The God Hakkar Reward (#3528)"
    { 3566, 1003566 }, // "Quest: Rise, Obsidion! Reward (#3566)"
    { 3601, 1003601 }, // "Quest: Kim'jael Indeed! Reward (#3601)"
    { 3625, 1003625 }, // "Quest: Enchanted Azsharite Fel Weaponry Reward (#3625)"
    { 3628, 1003628 }, // "Quest: You Are Rakh'likh, Demon Reward (#3628)"
    { 3636, 1003636 }, // "Quest: Bring the Light Reward (#3636)"
    { 3701, 1003701 }, // "Quest: The Smoldering Ruins of Thaurissan Reward (#3701)"
    { 3721, 1003721 }, // "Quest: An OOX of Your Own Reward (#3721)"
    { 3781, 1003781 }, // "Quest: Morrowgrain Research Reward (#3781)"
    { 3782, 1003782 }, // "Quest: Morrowgrain Research Reward (#3782)"
    { 3785, 1003785 }, // "Quest: Morrowgrain Research Reward (#3785)"
    { 3786, 1003786 }, // "Quest: Morrowgrain Research Reward (#3786)"
    { 3791, 1003791 }, // "Quest: The Mystery of Morrowgrain Reward (#3791)"
    { 3792, 1003792 }, // "Quest: Morrowgrain to Feathermoon Stronghold Reward (#3792)"
    { 3802, 1003802 }, // "Quest: Dark Iron Legacy Reward (#3802)"
    { 3803, 1003803 }, // "Quest: Morrowgrain to Darnassus Reward (#3803)"
    { 3804, 1003804 }, // "Quest: Morrowgrain to Thunder Bluff Reward (#3804)"
    { 3822, 1003822 }, // "Quest: Krom'Grul Reward (#3822)"
    { 3825, 1003825 }, // "Quest: Ogre Head On A Stick = Party Reward (#3825)"
    { 3882, 1003882 }, // "Quest: Roll the Bones Reward (#3882)"
    { 3901, 1003901 }, // "Quest: Rattling the Rattlecages Reward (#3901)"
    { 3902, 1003902 }, // "Quest: Scavenging Deathknell Reward (#3902)"
    { 3905, 1003905 }, // "Quest: Grape Manifest Reward (#3905)"
    { 3907, 1003907 }, // "Quest: Disharmony of Fire Reward (#3907)"
    { 3911, 1003911 }, // "Quest: The Last Element Reward (#3911)"
    { 3924, 1003924 }, // "Quest: Samophlange Manual Reward (#3924)"
    { 3962, 1003962 }, // "Quest: It's Dangerous to Go Alone Reward (#3962)"
    { 4004, 1004004 }, // "Quest: The Princess Saved? Reward (#4004)"
    { 4024, 1004024 }, // "Quest: A Taste of Flame Reward (#4024)"
    { 4041, 1004041 }, // "Quest: The Videre Elixir Reward (#4041)"
    { 4063, 1004063 }, // "Quest: The Rise of the Machines Reward (#4063)"
    { 4103, 1004103 }, // "Quest: Salve via Hunting Reward (#4103)"
    { 4104, 1004104 }, // "Quest: Salve via Mining Reward (#4104)"
    { 4105, 1004105 }, // "Quest: Salve via Gathering Reward (#4105)"
    { 4106, 1004106 }, // "Quest: Salve via Skinning Reward (#4106)"
    { 4107, 1004107 }, // "Quest: Salve via Disenchanting Reward (#4107)"
    { 4108, 1004108 }, // "Quest: Salve via Hunting Reward (#4108)"
    { 4109, 1004109 }, // "Quest: Salve via Mining Reward (#4109)"
    { 4110, 1004110 }, // "Quest: Salve via Gathering Reward (#4110)"
    { 4111, 1004111 }, // "Quest: Salve via Skinning Reward (#4111)"
    { 4112, 1004112 }, // "Quest: Salve via Disenchanting Reward (#4112)"
    { 4126, 1004126 }, // "Quest: Hurley Blackbreath Reward (#4126)"
    { 4132, 1004132 }, // "Quest: Operation: Death to Angerforge Reward (#4132)"
    { 4134, 1004134 }, // "Quest: Lost Thunderbrew Recipe Reward (#4134)"
    { 4136, 1004136 }, // "Quest: Ribbly Screwspigot Reward (#4136)"
    { 4148, 1004148 }, // "Quest: Bloodpetal Zapper Reward (#4148)"
    { 4161, 1004161 }, // "Quest: Recipe of the Kaldorei Reward (#4161)"
    { 4201, 1004201 }, // "Quest: The Love Potion Reward (#4201)"
    { 4242, 1004242 }, // "Quest: Abandoned Hope Reward (#4242)"
    { 4261, 1004261 }, // "Quest: Ancient Spirit Reward (#4261)"
    { 4263, 1004263 }, // "Quest: Incendius! Reward (#4263)"
    { 4266, 1004266 }, // "Quest: A Hero's Welcome Reward (#4266)"
    { 4267, 1004267 }, // "Quest: Rise of the Silithid Reward (#4267)"
    { 4286, 1004286 }, // "Quest: The Good Stuff Reward (#4286)"
    { 4292, 1004292 }, // "Quest: The Bait for Lar'korwi Reward (#4292)"
    { 4298, 1004298 }, // "Quest: Becoming a Parent Reward (#4298)"
    { 4300, 1004300 }, // "Quest: Bone-Bladed Weapons Reward (#4300)"
    { 4301, 1004301 }, // "Quest: The Mighty U'cha Reward (#4301)"
    { 4321, 1004321 }, // "Quest: Making Sense of It Reward (#4321)"
    { 4322, 1004322 }, // "Quest: Jail Break! Reward (#4322)"
    { 4363, 1004363 }, // "Quest: The Princess's Surprise Reward (#4363)"
    { 4381, 1004381 }, // "Quest: Crystal Restore Reward (#4381)"
    { 4382, 1004382 }, // "Quest: Crystal Force Reward (#4382)"
    { 4383, 1004383 }, // "Quest: Crystal Ward Reward (#4383)"
    { 4384, 1004384 }, // "Quest: Crystal Yield Reward (#4384)"
    { 4385, 1004385 }, // "Quest: Crystal Charge Reward (#4385)"
    { 4386, 1004386 }, // "Quest: Crystal Spire Reward (#4386)"
    { 4402, 1004402 }, // "Quest: Galgar's Cactus Apple Surprise Reward (#4402)"
    { 4442, 1004442 }, // "Quest: Purified! Reward (#4442)"
    { 4450, 1004450 }, // "Quest: Ledger from Tanaris Reward (#4450)"
    { 4463, 1004463 }, // "Quest: Libram of Rumination Reward (#4463)"
    { 4481, 1004481 }, // "Quest: Libram of Constitution Reward (#4481)"
    { 4482, 1004482 }, // "Quest: Libram of Tenacity Reward (#4482)"
    { 4483, 1004483 }, // "Quest: Libram of Resilience Reward (#4483)"
    { 4484, 1004484 }, // "Quest: Libram of Voracity Reward (#4484)"
    { 4491, 1004491 }, // "Quest: A Little Help From My Friends Reward (#4491)"
    { 4501, 1004501 }, // "Quest: Beware of Pterrordax Reward (#4501)"
    { 4503, 1004503 }, // "Quest: Shizzle's Flyer Reward (#4503)"
    { 4510, 1004510 }, // "Quest: Calm Before the Storm Reward (#4510)"
    { 4511, 1004511 }, // "Quest: Calm Before the Storm Reward (#4511)"
    { 4513, 1004513 }, // "Quest: A Little Slime Goes a Long Way Reward (#4513)"
    { 4561, 1004561 }, // "Quest: Testing for Impurities - Un'Goro Crater Reward (#4561)"
    { 4603, 1004603 }, // "Quest: More Sparklematic Action Reward (#4603)"
    { 4604, 1004604 }, // "Quest: More Sparklematic Action Reward (#4604)"
    { 4605, 1004605 }, // "Quest: The Sparklematic 5200! Reward (#4605)"
    { 4606, 1004606 }, // "Quest: The Sparklematic 5200! Reward (#4606)"
    { 4621, 1004621 }, // "Quest: Avast Ye, Admiral! Reward (#4621)"
    { 4642, 1004642 }, // "Quest: Melding of Influences Reward (#4642)"
    { 4661, 1004661 }, // "Quest: Testing for Corruption - Felwood Reward (#4661)"
    { 4681, 1004681 }, // "Quest: Washed Ashore Reward (#4681)"
    { 4701, 1004701 }, // "Quest: Put Her Down Reward (#4701)"
    { 4724, 1004724 }, // "Quest: The Pack Mistress Reward (#4724)"
    { 4729, 1004729 }, // "Quest: Kibler's Exotic Pets Reward (#4729)"
    { 4734, 1004734 }, // "Quest: Egg Freezing Reward (#4734)"
    { 4740, 1004740 }, // "Quest: WANTED: Murkdeep! Reward (#4740)"
    { 4743, 1004743 }, // "Quest: Seal of Ascension Reward (#4743)"
    { 4763, 1004763 }, // "Quest: The Blackwood Corrupted Reward (#4763)"
    { 4765, 1004765 }, // "Quest: Delivery to Ridgewell Reward (#4765)"
    { 4767, 1004767 }, // "Quest: Wind Rider Reward (#4767)"
    { 4768, 1004768 }, // "Quest: The Darkstone Tablet Reward (#4768)"
    { 4771, 1004771 }, // "Quest: Dawn's Gambit Reward (#4771)"
    { 4785, 1004785 }, // "Quest: Fine Gold Thread Reward (#4785)"
    { 4786, 1004786 }, // "Quest: The Completed Robe Reward (#4786)"
    { 4801, 1004801 }, // "Quest: Frostsaber E'ko Reward (#4801)"
    { 4802, 1004802 }, // "Quest: Winterfall E'ko Reward (#4802)"
    { 4803, 1004803 }, // "Quest: Shardtooth E'ko Reward (#4803)"
    { 4804, 1004804 }, // "Quest: Chillwind E'ko Reward (#4804)"
    { 4805, 1004805 }, // "Quest: Ice Thistle E'ko Reward (#4805)"
    { 4806, 1004806 }, // "Quest: Frostmaul E'ko Reward (#4806)"
    { 4807, 1004807 }, // "Quest: Wildkin E'ko Reward (#4807)"
    { 4810, 1004810 }, // "Quest: Return to Tinkee Reward (#4810)"
    { 4813, 1004813 }, // "Quest: The Fragments Within Reward (#4813)"
    { 4842, 1004842 }, // "Quest: Strange Sources Reward (#4842)"
    { 4862, 1004862 }, // "Quest: En-Ay-Es-Tee-Why Reward (#4862)"
    { 4866, 1004866 }, // "Quest: Mother's Milk Reward (#4866)"
    { 4867, 1004867 }, // "Quest: Urok Doomhowl Reward (#4867)"
    { 4883, 1004883 }, // "Quest: Guarding Secrets Reward (#4883)"
    { 4902, 1004902 }, // "Quest: Wildkin of Elune Reward (#4902)"
    { 4903, 1004903 }, // "Quest: Warlord's Command Reward (#4903)"
    { 4904, 1004904 }, // "Quest: Free at Last Reward (#4904)"
    { 4906, 1004906 }, // "Quest: Further Corruption Reward (#4906)"
    { 4961, 1004961 }, // "Quest: Cleansing of the Orb of Orahil Reward (#4961)"
    { 4964, 1004964 }, // "Quest: The Completed Orb of Dar'Orahil Reward (#4964)"
    { 4966, 1004966 }, // "Quest: Protect Kanati Greycloud Reward (#4966)"
    { 4971, 1004971 }, // "Quest: A Matter of Time Reward (#4971)"
    { 4972, 1004972 }, // "Quest: Counting Out Time Reward (#4972)"
    { 4973, 1004973 }, // "Quest: Counting Out Time Reward (#4973)"
    { 4974, 1004974 }, // "Quest: For The Horde! Reward (#4974)"
    { 4975, 1004975 }, // "Quest: The Completed Orb of Noh'Orahil Reward (#4975)"
    { 4983, 1004983 }, // "Quest: Bijou's Reconnaissance Report Reward (#4983)"
    { 4986, 1004986 }, // "Quest: Glyphed Oaken Branch Reward (#4986)"
    { 4987, 1004987 }, // "Quest: Glyphed Oaken Branch Reward (#4987)"
    { 5051, 1005051 }, // "Quest: Two Halves Become One Reward (#5051)"
    { 5056, 1005056 }, // "Quest: Shy-Rotam Reward (#5056)"
    { 5057, 1005057 }, // "Quest: Past Endeavors Reward (#5057)"
    { 5060, 1005060 }, // "Quest: Locked Away Reward (#5060)"
    { 5061, 1005061 }, // "Quest: Aquatic Form Reward (#5061)"
    { 5063, 1005063 }, // "Quest: Cap of the Scarlet Savant Reward (#5063)"
    { 5064, 1005064 }, // "Quest: Grimtotem Spying Reward (#5064)"
    { 5067, 1005067 }, // "Quest: Leggings of Arcana Reward (#5067)"
    { 5068, 1005068 }, // "Quest: Breastplate of Bloodthirst Reward (#5068)"
    { 5081, 1005081 }, // "Quest: Maxwell's Mission Reward (#5081)"
    { 5088, 1005088 }, // "Quest: Arikara Reward (#5088)"
    { 5102, 1005102 }, // "Quest: General Drakkisath's Demise Reward (#5102)"
    { 5121, 1005121 }, // "Quest: High Chief Winterfall Reward (#5121)"
    { 5124, 1005124 }, // "Quest: Fiery Plate Gauntlets Reward (#5124)"
    { 5125, 1005125 }, // "Quest: Aurius' Reckoning Reward (#5125)"
    { 5127, 1005127 }, // "Quest: The Demon Forge Reward (#5127)"
    { 5128, 1005128 }, // "Quest: Words of the High Chief Reward (#5128)"
    { 5147, 1005147 }, // "Quest: Wanted - Arnak Grimtotem Reward (#5147)"
    { 5150, 1005150 }, // "Quest: Dadanga is Hungry! Reward (#5150)"
    { 5151, 1005151 }, // "Quest: Hypercapacitor Gizmo Reward (#5151)"
    { 5163, 1005163 }, // "Quest: Are We There, Yeti? Reward (#5163)"
    { 5166, 1005166 }, // "Quest: Breastplate of the Chromatic Flight Reward (#5166)"
    { 5167, 1005167 }, // "Quest: Legplates of the Chromatic Defier Reward (#5167)"
    { 5204, 1005204 }, // "Quest: Retribution of the Light Reward (#5204)"
    { 5213, 1005213 }, // "Quest: The Active Agent Reward (#5213)"
    { 5214, 1005214 }, // "Quest: The Great Fras Siabi Reward (#5214)"
    { 5237, 1005237 }, // "Quest: Mission Accomplished! Reward (#5237)"
    { 5238, 1005238 }, // "Quest: Mission Accomplished! Reward (#5238)"
    { 5242, 1005242 }, // "Quest: A Final Blow Reward (#5242)"
    { 5243, 1005243 }, // "Quest: Houses of the Holy Reward (#5243)"
    { 5253, 1005253 }, // "Quest: The Crystal of Zin-Malor Reward (#5253)"
    { 5265, 1005265 }, // "Quest: The Argent Hold Reward (#5265)"
    { 5282, 1005282 }, // "Quest: The Restless Souls Reward (#5282)"
    { 5305, 1005305 }, // "Quest: Sweet Serenity Reward (#5305)"
    { 5306, 1005306 }, // "Quest: Snakestone of the Shadow Huntress Reward (#5306)"
    { 5307, 1005307 }, // "Quest: Corruption Reward (#5307)"
    { 5321, 1005321 }, // "Quest: The Sleeper Has Awakened Reward (#5321)"
    { 5342, 1005342 }, // "Quest: The Last Barov Reward (#5342)"
    { 5344, 1005344 }, // "Quest: The Last Barov Reward (#5344)"
    { 5384, 1005384 }, // "Quest: Kirtonos the Herald Reward (#5384)"
    { 5385, 1005385 }, // "Quest: The Remains of Trey Lightforge Reward (#5385)"
    { 5386, 1005386 }, // "Quest: Catch of the Day Reward (#5386)"
    { 5401, 1005401 }, // "Quest: Argent Dawn Commission Reward (#5401)"
    { 5402, 1005402 }, // "Quest: Minion's Scourgestones Reward (#5402)"
    { 5403, 1005403 }, // "Quest: Invader's Scourgestones Reward (#5403)"
    { 5404, 1005404 }, // "Quest: Corruptor's Scourgestones Reward (#5404)"
    { 5405, 1005405 }, // "Quest: Argent Dawn Commission Reward (#5405)"
    { 5406, 1005406 }, // "Quest: Corruptor's Scourgestones Reward (#5406)"
    { 5407, 1005407 }, // "Quest: Invader's Scourgestones Reward (#5407)"
    { 5408, 1005408 }, // "Quest: Minion's Scourgestones Reward (#5408)"
    { 5421, 1005421 }, // "Quest: Fish in a Bucket Reward (#5421)"
    { 5466, 1005466 }, // "Quest: The Lich, Ras Frostwhisper Reward (#5466)"
    { 5501, 1005501 }, // "Quest: Bone Collector Reward (#5501)"
    { 5502, 1005502 }, // "Quest: A Warden of the Horde Reward (#5502)"
    { 5503, 1005503 }, // "Quest: Argent Dawn Commission Reward (#5503)"
    { 5505, 1005505 }, // "Quest: The Key to Scholomance Reward (#5505)"
    { 5508, 1005508 }, // "Quest: Corruptor's Scourgestones Reward (#5508)"
    { 5509, 1005509 }, // "Quest: Invader's Scourgestones Reward (#5509)"
    { 5510, 1005510 }, // "Quest: Minion's Scourgestones Reward (#5510)"
    { 5511, 1005511 }, // "Quest: The Key to Scholomance Reward (#5511)"
    { 5517, 1005517 }, // "Quest: Chromatic Mantle of the Dawn Reward (#5517)"
    { 5518, 1005518 }, // "Quest: The Gordok Ogre Suit Reward (#5518)"
    { 5519, 1005519 }, // "Quest: The Gordok Ogre Suit Reward (#5519)"
    { 5521, 1005521 }, // "Quest: Chromatic Mantle of the Dawn Reward (#5521)"
    { 5524, 1005524 }, // "Quest: Chromatic Mantle of the Dawn Reward (#5524)"
    { 5526, 1005526 }, // "Quest: Shards of the Felvine Reward (#5526)"
    { 5530, 1005530 }, // "Quest: <NYI> <TXT> Necklace of the Dawn Reward (#5530)"
    { 5532, 1005532 }, // "Quest: <NYI> <TXT> Ring of the Dawn Reward (#5532)"
    { 5561, 1005561 }, // "Quest: Kodo Roundup Reward (#5561)"
    { 5581, 1005581 }, // "Quest: Portals of the Legion Reward (#5581)"
    { 5621, 1005621 }, // "Quest: Garments of the Moon Reward (#5621)"
    { 5624, 1005624 }, // "Quest: Garments of the Light Reward (#5624)"
    { 5625, 1005625 }, // "Quest: Garments of the Light Reward (#5625)"
    { 5648, 1005648 }, // "Quest: Garments of Spirituality Reward (#5648)"
    { 5650, 1005650 }, // "Quest: Garments of Darkness Reward (#5650)"
    { 5721, 1005721 }, // "Quest: The Battle of Darrowshire Reward (#5721)"
    { 5724, 1005724 }, // "Quest: Returning the Lost Satchel Reward (#5724)"
    { 5725, 1005725 }, // "Quest: The Power to Destroy... Reward (#5725)"
    { 5730, 1005730 }, // "Quest: Hidden Enemies Reward (#5730)"
    { 5805, 1005805 }, // "Quest: Welcome! Reward (#5805)"
    { 5821, 1005821 }, // "Quest: Bodyguard for Hire Reward (#5821)"
    { 5841, 1005841 }, // "Quest: Welcome! Reward (#5841)"
    { 5842, 1005842 }, // "Quest: Welcome! Reward (#5842)"
    { 5843, 1005843 }, // "Quest: Welcome! Reward (#5843)"
    { 5844, 1005844 }, // "Quest: Welcome! Reward (#5844)"
    { 5847, 1005847 }, // "Quest: Welcome! Reward (#5847)"
    { 5863, 1005863 }, // "Quest: The Dunemaul Compound Reward (#5863)"
    { 5882, 1005882 }, // "Quest: Salve via Hunting Reward (#5882)"
    { 5883, 1005883 }, // "Quest: Salve via Mining Reward (#5883)"
    { 5884, 1005884 }, // "Quest: Salve via Gathering Reward (#5884)"
    { 5885, 1005885 }, // "Quest: Salve via Skinning Reward (#5885)"
    { 5886, 1005886 }, // "Quest: Salve via Disenchanting Reward (#5886)"
    { 5887, 1005887 }, // "Quest: Salve via Hunting Reward (#5887)"
    { 5888, 1005888 }, // "Quest: Salve via Mining Reward (#5888)"
    { 5889, 1005889 }, // "Quest: Salve via Gathering Reward (#5889)"
    { 5890, 1005890 }, // "Quest: Salve via Skinning Reward (#5890)"
    { 5891, 1005891 }, // "Quest: Salve via Disenchanting Reward (#5891)"
    { 5942, 1005942 }, // "Quest: Hidden Treasures Reward (#5942)"
    { 5943, 1005943 }, // "Quest: Gizelton Caravan Reward (#5943)"
    { 5944, 1005944 }, // "Quest: In Dreams Reward (#5944)"
    { 6024, 1006024 }, // "Quest: Hameya's Plea Reward (#6024)"
    { 6027, 1006027 }, // "Quest: Book of the Ancients Reward (#6027)"
    { 6031, 1006031 }, // "Quest: Runecloth Reward (#6031)"
    { 6041, 1006041 }, // "Quest: When Smokey Sings, I Get Violent Reward (#6041)"
    { 6124, 1006124 }, // "Quest: Curing the Sick Reward (#6124)"
    { 6129, 1006129 }, // "Quest: Curing the Sick Reward (#6129)"
    { 6134, 1006134 }, // "Quest: Ghost-o-plasm Round Up Reward (#6134)"
    { 6135, 1006135 }, // "Quest: Duskwing, Oh How I Hate Thee... Reward (#6135)"
    { 6136, 1006136 }, // "Quest: The Corpulent One Reward (#6136)"
    { 6142, 1006142 }, // "Quest: Clam Bait Reward (#6142)"
    { 6148, 1006148 }, // "Quest: The Scarlet Oracle, Demetria Reward (#6148)"
    { 6161, 1006161 }, // "Quest: Claim Rackmore's Treasure! Reward (#6161)"
    { 6163, 1006163 }, // "Quest: Ramstein Reward (#6163)"
    { 6187, 1006187 }, // "Quest: Order Must Be Restored Reward (#6187)"
    { 6283, 1006283 }, // "Quest: Bloodfury Bloodline Reward (#6283)"
    { 6284, 1006284 }, // "Quest: Arachnophobia Reward (#6284)"
    { 6381, 1006381 }, // "Quest: New Life Reward (#6381)"
    { 6481, 1006481 }, // "Quest: Earthen Arise Reward (#6481)"
    { 6502, 1006502 }, // "Quest: Drakefire Amulet Reward (#6502)"
    { 6504, 1006504 }, // "Quest: The Lost Pages Reward (#6504)"
    { 6521, 1006521 }, // "Quest: An Unholy Alliance Reward (#6521)"
    { 6544, 1006544 }, // "Quest: Torek's Assault Reward (#6544)"
    { 6545, 1006545 }, // "Quest: Warsong Runner Update Reward (#6545)"
    { 6546, 1006546 }, // "Quest: Warsong Outrider Update Reward (#6546)"
    { 6547, 1006547 }, // "Quest: Warsong Scout Update Reward (#6547)"
    { 6561, 1006561 }, // "Quest: Blackfathom Villainy Reward (#6561)"
    { 6565, 1006565 }, // "Quest: Allegiance to the Old Gods Reward (#6565)"
    { 6571, 1006571 }, // "Quest: Warsong Supplies Reward (#6571)"
    { 6581, 1006581 }, // "Quest: Warsong Saw Blades Reward (#6581)"
    { 6602, 1006602 }, // "Quest: Blood of the Black Dragon Champion Reward (#6602)"
    { 6607, 1006607 }, // "Quest: Nat Pagle, Angler Extreme Reward (#6607)"
    { 6621, 1006621 }, // "Quest: King of the Foulweald Reward (#6621)"
    { 6622, 1006622 }, // "Quest: Triage Reward (#6622)"
    { 6624, 1006624 }, // "Quest: Triage Reward (#6624)"
    { 6641, 1006641 }, // "Quest: Vorsha the Lasher Reward (#6641)"
    { 6662, 1006662 }, // "Quest: Me Brother, Nipsy Reward (#6662)"
    { 6845, 1006845 }, // "Quest: Uncovering Past Secrets Reward (#6845)"
    { 6861, 1006861 }, // "Quest: Zinfizzlex's Portable Shredder Unit Reward (#6861)"
    { 6862, 1006862 }, // "Quest: Zinfizzlex's Portable Shredder Unit Reward (#6862)"
    { 6922, 1006922 }, // "Quest: Baron Aquanis Reward (#6922)"
    { 6962, 1006962 }, // "Quest: Treats for Great-father Winter Reward (#6962)"
    { 6984, 1006984 }, // "Quest: A Smokywood Pastures' Thank You! Reward (#6984)"
    { 7003, 1007003 }, // "Quest: Zapped Giants Reward (#7003)"
    { 7025, 1007025 }, // "Quest: Treats for Greatfather Winter Reward (#7025)"
    { 7028, 1007028 }, // "Quest: Twisted Evils Reward (#7028)"
    { 7029, 1007029 }, // "Quest: Vyletongue Corruption Reward (#7029)"
    { 7041, 1007041 }, // "Quest: Vyletongue Corruption Reward (#7041)"
    { 7045, 1007045 }, // "Quest: A Smokywood Pastures' Thank You! Reward (#7045)"
    { 7046, 1007046 }, // "Quest: The Scepter of Celebras Reward (#7046)"
    { 7064, 1007064 }, // "Quest: Corruption of Earth and Seed Reward (#7064)"
    { 7065, 1007065 }, // "Quest: Corruption of Earth and Seed Reward (#7065)"
    { 7067, 1007067 }, // "Quest: The Pariah's Instructions Reward (#7067)"
    { 7068, 1007068 }, // "Quest: Shadowshard Fragments Reward (#7068)"
    { 7070, 1007070 }, // "Quest: Shadowshard Fragments Reward (#7070)"
    { 7161, 1007161 }, // "Quest: Proving Grounds Reward (#7161)"
    { 7162, 1007162 }, // "Quest: Proving Grounds Reward (#7162)"
    { 7163, 1007163 }, // "Quest: Rise and Be Recognized Reward (#7163)"
    { 7164, 1007164 }, // "Quest: Honored Amongst the Clan Reward (#7164)"
    { 7165, 1007165 }, // "Quest: Earned Reverence Reward (#7165)"
    { 7166, 1007166 }, // "Quest: Legendary Heroes Reward (#7166)"
    { 7167, 1007167 }, // "Quest: The Eye of Command Reward (#7167)"
    { 7168, 1007168 }, // "Quest: Rise and Be Recognized Reward (#7168)"
    { 7169, 1007169 }, // "Quest: Honored Amongst the Guard Reward (#7169)"
    { 7170, 1007170 }, // "Quest: Earned Reverence Reward (#7170)"
    { 7171, 1007171 }, // "Quest: Legendary Heroes Reward (#7171)"
    { 7172, 1007172 }, // "Quest: The Eye of Command Reward (#7172)"
    { 7181, 1007181 }, // "Quest: The Legend of Korrak Reward (#7181)"
    { 7201, 1007201 }, // "Quest: The Last Element Reward (#7201)"
    { 7202, 1007202 }, // "Quest: Korrak the Bloodrager Reward (#7202)"
    { 7321, 1007321 }, // "Quest: Soothing Turtle Bisque Reward (#7321)"
    { 7341, 1007341 }, // "Quest: A Fair Trade Reward (#7341)"
    { 7342, 1007342 }, // "Quest: Arrows Are For Sissies Reward (#7342)"
    { 7381, 1007381 }, // "Quest: The Return of Korrak Reward (#7381)"
    { 7382, 1007382 }, // "Quest: Korrak the Everliving Reward (#7382)"
    { 7441, 1007441 }, // "Quest: Pusillin and the Elder Azj'Tordin Reward (#7441)"
    { 7462, 1007462 }, // "Quest: The Treasure of the Shen'dralar Reward (#7462)"
    { 7483, 1007483 }, // "Quest: Libram of Rapidity Reward (#7483)"
    { 7484, 1007484 }, // "Quest: Libram of Focus Reward (#7484)"
    { 7485, 1007485 }, // "Quest: Libram of Protection Reward (#7485)"
    { 7486, 1007486 }, // "Quest: A Hero's Reward Reward (#7486)"
    { 7488, 1007488 }, // "Quest: Lethtendris's Web Reward (#7488)"
    { 7489, 1007489 }, // "Quest: Lethtendris's Web Reward (#7489)"
    { 7491, 1007491 }, // "Quest: For All To See Reward (#7491)"
    { 7496, 1007496 }, // "Quest: Celebrating Good Times Reward (#7496)"
    { 7498, 1007498 }, // "Quest: Garona: A Study on Stealth and Treachery Reward (#7498)"
    { 7499, 1007499 }, // "Quest: Codex of Defense Reward (#7499)"
    { 7500, 1007500 }, // "Quest: The Arcanist's Cookbook Reward (#7500)"
    { 7501, 1007501 }, // "Quest: The Light and How To Swing It Reward (#7501)"
    { 7502, 1007502 }, // "Quest: Harnessing Shadows Reward (#7502)"
    { 7503, 1007503 }, // "Quest: The Greatest Race of Hunters Reward (#7503)"
    { 7504, 1007504 }, // "Quest: Holy Bologna: What the Light Won't Tell You Reward (#7504)"
    { 7505, 1007505 }, // "Quest: Frost Shock and You Reward (#7505)"
    { 7506, 1007506 }, // "Quest: The Emerald Dream... Reward (#7506)"
    { 7509, 1007509 }, // "Quest: The Forging of Quel'Serrar Reward (#7509)"
    { 7541, 1007541 }, // "Quest: Service to the Horde Reward (#7541)"
    { 7561, 1007561 }, // "Quest: Rise,Thunderfury! Reward (#7561)"
    { 7583, 1007583 }, // "Quest: Suppression Reward (#7583)"
    { 7603, 1007603 }, // "Quest: Kroshius' Infernal Core Reward (#7603)"
    { 7604, 1007604 }, // "Quest: A Binding Contract Reward (#7604)"
    { 7622, 1007622 }, // "Quest: The Balance of Light and Shadow Reward (#7622)"
    { 7634, 1007634 }, // "Quest: Ancient Sinew Wrapped Lamina Reward (#7634)"
    { 7635, 1007635 }, // "Quest: A Proper String Reward (#7635)"
    { 7636, 1007636 }, // "Quest: Stave of the Ancients Reward (#7636)"
    { 7645, 1007645 }, // "Quest: Manna-Enriched Horse Feed Reward (#7645)"
    { 7649, 1007649 }, // "Quest: Enchanted Thorium Platemail: Volume I Reward (#7649)"
    { 7650, 1007650 }, // "Quest: Enchanted Thorium Platemail: Volume II Reward (#7650)"
    { 7651, 1007651 }, // "Quest: Enchanted Thorium Platemail: Volume III Reward (#7651)"
    { 7653, 1007653 }, // "Quest: Imperial Plate Belt Reward (#7653)"
    { 7654, 1007654 }, // "Quest: Imperial Plate Boots Reward (#7654)"
    { 7655, 1007655 }, // "Quest: Imperial Plate Bracer Reward (#7655)"
    { 7656, 1007656 }, // "Quest: Imperial Plate Chest Reward (#7656)"
    { 7657, 1007657 }, // "Quest: Imperial Plate Helm Reward (#7657)"
    { 7658, 1007658 }, // "Quest: Imperial Plate Leggings Reward (#7658)"
    { 7659, 1007659 }, // "Quest: Imperial Plate Shoulders Reward (#7659)"
    { 7660, 1007660 }, // "Quest: Wolf Swapping - Arctic Wolf Reward (#7660)"
    { 7661, 1007661 }, // "Quest: Wolf Swapping - Red Wolf Reward (#7661)"
    { 7662, 1007662 }, // "Quest: New Kodo - Teal Reward (#7662)"
    { 7663, 1007663 }, // "Quest: New Kodo - Green Reward (#7663)"
    { 7664, 1007664 }, // "Quest: Ivory Raptor Replacement Reward (#7664)"
    { 7665, 1007665 }, // "Quest: Red Raptor Replacement Reward (#7665)"
    { 7666, 1007666 }, // "Quest: Again Into the Great Ossuary Reward (#7666)"
    { 7668, 1007668 }, // "Quest: The Darkreaver Menace Reward (#7668)"
    { 7669, 1007669 }, // "Quest: Again Into the Great Ossuary Reward (#7669)"
    { 7671, 1007671 }, // "Quest: Frostsaber Replacement Reward (#7671)"
    { 7672, 1007672 }, // "Quest: Nightsaber Replacement Reward (#7672)"
    { 7673, 1007673 }, // "Quest: Frost Ram Exchange Reward (#7673)"
    { 7674, 1007674 }, // "Quest: Black Ram Exchange Reward (#7674)"
    { 7675, 1007675 }, // "Quest: Icy Blue Mechanostrider Replacement Reward (#7675)"
    { 7676, 1007676 }, // "Quest: White Mechanostrider Replacement Reward (#7676)"
    { 7677, 1007677 }, // "Quest: White Stallion Exchange Reward (#7677)"
    { 7678, 1007678 }, // "Quest: Palomino Exchange Reward (#7678)"
    { 7701, 1007701 }, // "Quest: WANTED: Overseer Maltorius Reward (#7701)"
    { 7702, 1007702 }, // "Quest: Kill 'Em With Sleep Deprivation Reward (#7702)"
    { 7703, 1007703 }, // "Quest: Unfinished Gordok Business Reward (#7703)"
    { 7704, 1007704 }, // "Quest: Look at the Size of It! Reward (#7704)"
    { 7721, 1007721 }, // "Quest: Fuel for the Zapping Reward (#7721)"
    { 7723, 1007723 }, // "Quest: Curse These Fat Fingers Reward (#7723)"
    { 7724, 1007724 }, // "Quest: Fiery Menace! Reward (#7724)"
    { 7727, 1007727 }, // "Quest: Incendosaurs? Whateverosaur is More Like It Reward (#7727)"
    { 7728, 1007728 }, // "Quest: STOLEN: Smithing Tuyere and Lookout's Spyglass Reward (#7728)"
    { 7732, 1007732 }, // "Quest: Zukk'ash Report Reward (#7732)"
    { 7733, 1007733 }, // "Quest: Improved Quality Reward (#7733)"
    { 7734, 1007734 }, // "Quest: Improved Quality Reward (#7734)"
    { 7741, 1007741 }, // "Quest: Praise from the Emerald Circle <NYI> <TXT> Reward (#7741)"
    { 7782, 1007782 }, // "Quest: The Lord of Blackrock Reward (#7782)"
    { 7784, 1007784 }, // "Quest: The Lord of Blackrock Reward (#7784)"
    { 7787, 1007787 }, // "Quest: Rise, Thunderfury! Reward (#7787)"
    { 7815, 1007815 }, // "Quest: Snapjaws, Mon! Reward (#7815)"
    { 7838, 1007838 }, // "Quest: Arena Grandmaster Reward (#7838)"
    { 7840, 1007840 }, // "Quest: Lard Lost His Lunch Reward (#7840)"
    { 7843, 1007843 }, // "Quest: The Final Message to the Wildhammer Reward (#7843)"
    { 7847, 1007847 }, // "Quest: Return to Primal Torntusk Reward (#7847)"
    { 7849, 1007849 }, // "Quest: Separation Anxiety Reward (#7849)"
    { 7850, 1007850 }, // "Quest: Dark Vessels Reward (#7850)"
    { 7861, 1007861 }, // "Quest: Wanted: Vile Priestess Hexx and Her Minions Reward (#7861)"
    { 7862, 1007862 }, // "Quest: Job Opening: Guard Captain of Revantusk Village Reward (#7862)"
    { 7863, 1007863 }, // "Quest: Sentinel Basic Care Package Reward (#7863)"
    { 7864, 1007864 }, // "Quest: Sentinel Standard Care Package Reward (#7864)"
    { 7865, 1007865 }, // "Quest: Sentinel Advanced Care Package Reward (#7865)"
    { 7866, 1007866 }, // "Quest: Outrider Basic Care Package Reward (#7866)"
    { 7867, 1007867 }, // "Quest: Outrider Standard Care Package Reward (#7867)"
    { 7868, 1007868 }, // "Quest: Outrider Advanced Care Package Reward (#7868)"
    { 7877, 1007877 }, // "Quest: The Treasure of the Shen'dralar Reward (#7877)"
    { 7881, 1007881 }, // "Quest: Carnival Boots Reward (#7881)"
    { 7882, 1007882 }, // "Quest: Carnival Jerkins Reward (#7882)"
    { 7883, 1007883 }, // "Quest: The World's Largest Gnome! Reward (#7883)"
    { 7884, 1007884 }, // "Quest: Crocolisk Boy and the Bearded Murloc Reward (#7884)"
    { 7885, 1007885 }, // "Quest: Armor Kits Reward (#7885)"
    { 7889, 1007889 }, // "Quest: Coarse Weightstone Reward (#7889)"
    { 7890, 1007890 }, // "Quest: Heavy Grinding Stone Reward (#7890)"
    { 7891, 1007891 }, // "Quest: Green Iron Bracers Reward (#7891)"
    { 7892, 1007892 }, // "Quest: Big Black Mace Reward (#7892)"
    { 7893, 1007893 }, // "Quest: Rituals of Strength Reward (#7893)"
    { 7894, 1007894 }, // "Quest: Copper Modulator Reward (#7894)"
    { 7895, 1007895 }, // "Quest: Whirring Bronze Gizmo Reward (#7895)"
    { 7896, 1007896 }, // "Quest: Green Fireworks Reward (#7896)"
    { 7897, 1007897 }, // "Quest: Mechanical Repair Kits Reward (#7897)"
    { 7898, 1007898 }, // "Quest: Thorium Widget Reward (#7898)"
    { 7899, 1007899 }, // "Quest: Small Furry Paws Reward (#7899)"
    { 7900, 1007900 }, // "Quest: Torn Bear Pelts Reward (#7900)"
    { 7901, 1007901 }, // "Quest: Soft Bushy Tails Reward (#7901)"
    { 7902, 1007902 }, // "Quest: Vibrant Plumes Reward (#7902)"
    { 7903, 1007903 }, // "Quest: Evil Bat Eyes Reward (#7903)"
    { 7905, 1007905 }, // "Quest: The Darkmoon Faire Reward (#7905)"
    { 7907, 1007907 }, // "Quest: Darkmoon Beast Deck Reward (#7907)"
    { 7926, 1007926 }, // "Quest: The Darkmoon Faire Reward (#7926)"
    { 7927, 1007927 }, // "Quest: Darkmoon Portals Deck Reward (#7927)"
    { 7928, 1007928 }, // "Quest: Darkmoon Warlords Deck Reward (#7928)"
    { 7929, 1007929 }, // "Quest: Darkmoon Elementals Deck Reward (#7929)"
    { 7930, 1007930 }, // "Quest: 5 Tickets - Darkmoon Flower Reward (#7930)"
    { 7931, 1007931 }, // "Quest: 5 Tickets - Minor Darkmoon Prize Reward (#7931)"
    { 7932, 1007932 }, // "Quest: 12 Tickets - Lesser Darkmoon Prize Reward (#7932)"
    { 7933, 1007933 }, // "Quest: 40 Tickets - Greater Darkmoon Prize Reward (#7933)"
    { 7934, 1007934 }, // "Quest: 50 Tickets - Darkmoon Storage Box Reward (#7934)"
    { 7935, 1007935 }, // "Quest: 10 Tickets - Last Month's Mutton Reward (#7935)"
    { 7936, 1007936 }, // "Quest: 50 Tickets - Last Year's Mutton Reward (#7936)"
    { 7937, 1007937 }, // "Quest: Your Fortune Awaits You... Reward (#7937)"
    { 7938, 1007938 }, // "Quest: Your Fortune Awaits You... Reward (#7938)"
    { 7939, 1007939 }, // "Quest: More Dense Grinding Stones Reward (#7939)"
    { 7940, 1007940 }, // "Quest: 1200 Tickets - Orb of the Darkmoon Reward (#7940)"
    { 7941, 1007941 }, // "Quest: More Armor Kits Reward (#7941)"
    { 7942, 1007942 }, // "Quest: More Thorium Widgets Reward (#7942)"
    { 7943, 1007943 }, // "Quest: More Bat Eyes Reward (#7943)"
    { 7944, 1007944 }, // "Quest: Your Fortune Awaits You... Reward (#7944)"
    { 7945, 1007945 }, // "Quest: Your Fortune Awaits You... Reward (#7945)"
    { 7946, 1007946 }, // "Quest: Spawn of Jubjub Reward (#7946)"
    { 7962, 1007962 }, // "Quest: Wabbit Pelts Reward (#7962)"
    { 7981, 1007981 }, // "Quest: 1200 Tickets - Amulet of the Darkmoon Reward (#7981)"
    { 8021, 1008021 }, // "Quest: Redeem iCoke Prize Voucher Reward (#8021)"
    { 8022, 1008022 }, // "Quest: Redeem iCoke Prize Voucher Reward (#8022)"
    { 8023, 1008023 }, // "Quest: Redeem iCoke Prize Voucher Reward (#8023)"
    { 8024, 1008024 }, // "Quest: Redeem iCoke Prize Voucher Reward (#8024)"
    { 8025, 1008025 }, // "Quest: Redeem iCoke Prize Voucher Reward (#8025)"
    { 8026, 1008026 }, // "Quest: Redeem iCoke Prize Voucher Reward (#8026)"
    { 8041, 1008041 }, // "Quest: Strength of Mount Mugamba Reward (#8041)"
    { 8042, 1008042 }, // "Quest: Strength of Mount Mugamba Reward (#8042)"
    { 8043, 1008043 }, // "Quest: Strength of Mount Mugamba Reward (#8043)"
    { 8044, 1008044 }, // "Quest: The Rage of Mugamba Reward (#8044)"
    { 8045, 1008045 }, // "Quest: The Heathen's Brand Reward (#8045)"
    { 8046, 1008046 }, // "Quest: The Heathen's Brand Reward (#8046)"
    { 8047, 1008047 }, // "Quest: The Heathen's Brand Reward (#8047)"
    { 8048, 1008048 }, // "Quest: The Hero's Brand Reward (#8048)"
    { 8049, 1008049 }, // "Quest: The Eye of Zuldazar Reward (#8049)"
    { 8050, 1008050 }, // "Quest: The Eye of Zuldazar Reward (#8050)"
    { 8051, 1008051 }, // "Quest: The Eye of Zuldazar Reward (#8051)"
    { 8052, 1008052 }, // "Quest: The All-Seeing Eye of Zuldazar Reward (#8052)"
    { 8053, 1008053 }, // "Quest: Paragons of Power: The Freethinker's Armguards Reward (#8053)"
    { 8054, 1008054 }, // "Quest: Paragons of Power: The Freethinker's Belt Reward (#8054)"
    { 8055, 1008055 }, // "Quest: Paragons of Power: The Freethinker's Breastplate Reward (#8055)"
    { 8056, 1008056 }, // "Quest: Paragons of Power: The Augur's Bracers Reward (#8056)"
    { 8057, 1008057 }, // "Quest: Paragons of Power: The Haruspex's Bracers Reward (#8057)"
    { 8058, 1008058 }, // "Quest: Paragons of Power: The Vindicator's Armguards Reward (#8058)"
    { 8059, 1008059 }, // "Quest: Paragons of Power: The Demoniac's Wraps Reward (#8059)"
    { 8060, 1008060 }, // "Quest: Paragons of Power: The Illusionist's Wraps Reward (#8060)"
    { 8061, 1008061 }, // "Quest: Paragons of Power: The Confessor's Wraps Reward (#8061)"
    { 8062, 1008062 }, // "Quest: Paragons of Power: The Predator's Bracers Reward (#8062)"
    { 8063, 1008063 }, // "Quest: Paragons of Power: The Madcap's Bracers Reward (#8063)"
    { 8064, 1008064 }, // "Quest: Paragons of Power: The Haruspex's Belt Reward (#8064)"
    { 8065, 1008065 }, // "Quest: Paragons of Power: The Haruspex's Tunic Reward (#8065)"
    { 8066, 1008066 }, // "Quest: Paragons of Power: The Predator's Belt Reward (#8066)"
    { 8067, 1008067 }, // "Quest: Paragons of Power: The Predator's Mantle Reward (#8067)"
    { 8068, 1008068 }, // "Quest: Paragons of Power: The Illusionist's Mantle Reward (#8068)"
    { 8069, 1008069 }, // "Quest: Paragons of Power: The Illusionist's Robes Reward (#8069)"
    { 8070, 1008070 }, // "Quest: Paragons of Power: The Confessor's Bindings Reward (#8070)"
    { 8071, 1008071 }, // "Quest: Paragons of Power: The Confessor's Mantle Reward (#8071)"
    { 8072, 1008072 }, // "Quest: Paragons of Power: The Madcap's Mantle Reward (#8072)"
    { 8073, 1008073 }, // "Quest: Paragons of Power: The Madcap's Tunic Reward (#8073)"
    { 8074, 1008074 }, // "Quest: Paragons of Power: The Augur's Belt Reward (#8074)"
    { 8075, 1008075 }, // "Quest: Paragons of Power: The Augur's Hauberk Reward (#8075)"
    { 8076, 1008076 }, // "Quest: Paragons of Power: The Demoniac's Mantle Reward (#8076)"
    { 8077, 1008077 }, // "Quest: Paragons of Power: The Demoniac's Robes Reward (#8077)"
    { 8078, 1008078 }, // "Quest: Paragons of Power: The Vindicator's Belt Reward (#8078)"
    { 8079, 1008079 }, // "Quest: Paragons of Power: The Vindicator's Breastplate Reward (#8079)"
    { 8101, 1008101 }, // "Quest: The Pebble of Kajaro Reward (#8101)"
    { 8102, 1008102 }, // "Quest: The Pebble of Kajaro Reward (#8102)"
    { 8103, 1008103 }, // "Quest: The Pebble of Kajaro Reward (#8103)"
    { 8104, 1008104 }, // "Quest: The Jewel of Kajaro Reward (#8104)"
    { 8106, 1008106 }, // "Quest: Kezan's Taint Reward (#8106)"
    { 8107, 1008107 }, // "Quest: Kezan's Taint Reward (#8107)"
    { 8108, 1008108 }, // "Quest: Kezan's Taint Reward (#8108)"
    { 8109, 1008109 }, // "Quest: Kezan's Unstoppable Taint Reward (#8109)"
    { 8110, 1008110 }, // "Quest: Enchanted South Seas Kelp Reward (#8110)"
    { 8111, 1008111 }, // "Quest: Enchanted South Seas Kelp Reward (#8111)"
    { 8112, 1008112 }, // "Quest: Enchanted South Seas Kelp Reward (#8112)"
    { 8113, 1008113 }, // "Quest: Pristine Enchanted South Seas Kelp Reward (#8113)"
    { 8115, 1008115 }, // "Quest: Control Five Bases Reward (#8115)"
    { 8116, 1008116 }, // "Quest: Vision of Voodress Reward (#8116)"
    { 8117, 1008117 }, // "Quest: Vision of Voodress Reward (#8117)"
    { 8118, 1008118 }, // "Quest: Vision of Voodress Reward (#8118)"
    { 8119, 1008119 }, // "Quest: The Unmarred Vision of Voodress Reward (#8119)"
    { 8122, 1008122 }, // "Quest: Take Five Bases Reward (#8122)"
    { 8141, 1008141 }, // "Quest: Zandalarian Shadow Talisman Reward (#8141)"
    { 8142, 1008142 }, // "Quest: Zandalarian Shadow Talisman Reward (#8142)"
    { 8143, 1008143 }, // "Quest: Zandalarian Shadow Talisman Reward (#8143)"
    { 8144, 1008144 }, // "Quest: Zandalarian Shadow Mastery Talisman Reward (#8144)"
    { 8145, 1008145 }, // "Quest: The Maelstrom's Tendril Reward (#8145)"
    { 8146, 1008146 }, // "Quest: The Maelstrom's Tendril Reward (#8146)"
    { 8147, 1008147 }, // "Quest: The Maelstrom's Tendril Reward (#8147)"
    { 8148, 1008148 }, // "Quest: Maelstrom's Wrath Reward (#8148)"
    { 8149, 1008149 }, // "Quest: Honoring a Hero Reward (#8149)"
    { 8150, 1008150 }, // "Quest: Honoring a Hero Reward (#8150)"
    { 8181, 1008181 }, // "Quest: Confront Yeh'kinya Reward (#8181)"
    { 8183, 1008183 }, // "Quest: The Heart of Hakkar Reward (#8183)"
    { 8184, 1008184 }, // "Quest: Presence of Might Reward (#8184)"
    { 8185, 1008185 }, // "Quest: Syncretist's Sigil Reward (#8185)"
    { 8186, 1008186 }, // "Quest: Death's Embrace Reward (#8186)"
    { 8187, 1008187 }, // "Quest: Falcon's Call Reward (#8187)"
    { 8188, 1008188 }, // "Quest: Vodouisant's Vigilant Embrace Reward (#8188)"
    { 8189, 1008189 }, // "Quest: Presence of Sight Reward (#8189)"
    { 8190, 1008190 }, // "Quest: Hoodoo Hex Reward (#8190)"
    { 8191, 1008191 }, // "Quest: Prophetic Aura Reward (#8191)"
    { 8192, 1008192 }, // "Quest: Animist's Caress Reward (#8192)"
    { 8193, 1008193 }, // "Quest: Master Angler Reward (#8193)"
    { 8195, 1008195 }, // "Quest: Zulian, Razzashi, and Hakkari Coins Reward (#8195)"
    { 8196, 1008196 }, // "Quest: Essence Mangoes Reward (#8196)"
    { 8201, 1008201 }, // "Quest: A Collection of Heads Reward (#8201)"
    { 8221, 1008221 }, // "Quest: Rare Fish - Keefer's Angelfish Reward (#8221)"
    { 8222, 1008222 }, // "Quest: Glowing Scorpid Blood Reward (#8222)"
    { 8223, 1008223 }, // "Quest: More Glowing Scorpid Blood Reward (#8223)"
    { 8224, 1008224 }, // "Quest: Rare Fish - Dezian Queenfish Reward (#8224)"
    { 8225, 1008225 }, // "Quest: Rare Fish - Brownell's Blue Striped Racer Reward (#8225)"
    { 8226, 1008226 }, // "Quest: Rare Fish - Pale Ghoulfish Reward (#8226)"
    { 8228, 1008228 }, // "Quest: Could I get a Fishing Flier? Reward (#8228)"
    { 8229, 1008229 }, // "Quest: Could I get a Fishing Flier? Reward (#8229)"
    { 8232, 1008232 }, // "Quest: The Green Drake Reward (#8232)"
    { 8236, 1008236 }, // "Quest: The Azure Key Reward (#8236)"
    { 8238, 1008238 }, // "Quest: Gurubashi, Vilebranch, and Witherbark Coins Reward (#8238)"
    { 8239, 1008239 }, // "Quest: Sandfury, Skullsplitter, and Bloodscalp Coins Reward (#8239)"
    { 8240, 1008240 }, // "Quest: A Bijou for Zanza Reward (#8240)"
    { 8243, 1008243 }, // "Quest: Zanza's Potent Potables Reward (#8243)"
    { 8246, 1008246 }, // "Quest: Signets of the Zandalar Reward (#8246)"
    { 8249, 1008249 }, // "Quest: Junkboxes Needed Reward (#8249)"
    { 8253, 1008253 }, // "Quest: Destroy Morphaz Reward (#8253)"
    { 8257, 1008257 }, // "Quest: Blood of Morphaz Reward (#8257)"
    { 8258, 1008258 }, // "Quest: The Darkreaver Menace Reward (#8258)"
    { 8259, 1008259 }, // "Quest: A More Fitting Reward Reward (#8259)"
    { 8260, 1008260 }, // "Quest: Arathor Basic Care Package Reward (#8260)"
    { 8261, 1008261 }, // "Quest: Arathor Standard Care Package Reward (#8261)"
    { 8262, 1008262 }, // "Quest: Arathor Advanced Care Package Reward (#8262)"
    { 8263, 1008263 }, // "Quest: Defiler's Basic Care Package Reward (#8263)"
    { 8264, 1008264 }, // "Quest: Defiler's Standard Care Package Reward (#8264)"
    { 8265, 1008265 }, // "Quest: Defiler's Advanced Care Package Reward (#8265)"
    { 8271, 1008271 }, // "Quest: Hero of the Stormpike Reward (#8271)"
    { 8272, 1008272 }, // "Quest: Hero of the Frostwolf Reward (#8272)"
    { 8273, 1008273 }, // "Quest: Oran's Gratitude Reward (#8273)"
    { 8278, 1008278 }, // "Quest: Noggle's Last Hope Reward (#8278)"
    { 8282, 1008282 }, // "Quest: Noggle's Lost Satchel Reward (#8282)"
    { 8283, 1008283 }, // "Quest: Wanted - Deathclasp, Terror of the Sands Reward (#8283)"
    { 8301, 1008301 }, // "Quest: The Path of the Righteous Reward (#8301)"
    { 8302, 1008302 }, // "Quest: The Hand of the Righteous Reward (#8302)"
    { 8306, 1008306 }, // "Quest: Into The Maw of Madness Reward (#8306)"
    { 8308, 1008308 }, // "Quest: Brann Bronzebeard's Lost Letter Reward (#8308)"
    { 8311, 1008311 }, // "Quest: Hallow's End Treats for Jesper! Reward (#8311)"
    { 8312, 1008312 }, // "Quest: Hallow's End Treats for Spoops! Reward (#8312)"
    { 8316, 1008316 }, // "Quest: Armaments of War Reward (#8316)"
    { 8321, 1008321 }, // "Quest: Vyral the Vile Reward (#8321)"
    { 8325, 1008325 }, // "Quest: Reclaiming Sunstrider Isle Reward (#8325)"
    { 8326, 1008326 }, // "Quest: Unfortunate Measures Reward (#8326)"
    { 8330, 1008330 }, // "Quest: Solanian's Belongings Reward (#8330)"
    { 8332, 1008332 }, // "Quest: Dukes of the Council Reward (#8332)"
    { 8333, 1008333 }, // "Quest: Medallion of Station Reward (#8333)"
    { 8334, 1008334 }, // "Quest: Aggression Reward (#8334)"
    { 8335, 1008335 }, // "Quest: Felendren the Banished Reward (#8335)"
    { 8336, 1008336 }, // "Quest: A Fistful of Slivers Reward (#8336)"
    { 8340, 1008340 }, // "Quest: Twilight Signet Ring <NYI> <TXT> Reward (#8340)"
    { 8341, 1008341 }, // "Quest: Lords of the Council Reward (#8341)"
    { 8342, 1008342 }, // "Quest: Twilight Ring of Lordship Reward (#8342)"
    { 8346, 1008346 }, // "Quest: Thirst Unending Reward (#8346)"
    { 8348, 1008348 }, // "Quest: Signet of the Dukes Reward (#8348)"
    { 8350, 1008350 }, // "Quest: Completing the Delivery Reward (#8350)"
    { 8352, 1008352 }, // "Quest: Scepter of the Council Reward (#8352)"
    { 8353, 1008353 }, // "Quest: Chicken Clucking for a Mint Reward (#8353)"
    { 8354, 1008354 }, // "Quest: Chicken Clucking for a Mint Reward (#8354)"
    { 8355, 1008355 }, // "Quest: Incoming Gumdrop Reward (#8355)"
    { 8356, 1008356 }, // "Quest: Flexing for Nougat Reward (#8356)"
    { 8357, 1008357 }, // "Quest: Dancing for Marzipan Reward (#8357)"
    { 8358, 1008358 }, // "Quest: Incoming Gumdrop Reward (#8358)"
    { 8359, 1008359 }, // "Quest: Flexing for Nougat Reward (#8359)"
    { 8360, 1008360 }, // "Quest: Dancing for Marzipan Reward (#8360)"
    { 8361, 1008361 }, // "Quest: Abyssal Contacts Reward (#8361)"
    { 8362, 1008362 }, // "Quest: Abyssal Crests Reward (#8362)"
    { 8363, 1008363 }, // "Quest: Abyssal Signets Reward (#8363)"
    { 8364, 1008364 }, // "Quest: Abyssal Scepters Reward (#8364)"
    { 8366, 1008366 }, // "Quest: Southsea Shakedown Reward (#8366)"
    { 8373, 1008373 }, // "Quest: The Power of Pine Reward (#8373)"
    { 8376, 1008376 }, // "Quest: Armaments of War Reward (#8376)"
    { 8377, 1008377 }, // "Quest: Armaments of War Reward (#8377)"
    { 8378, 1008378 }, // "Quest: Armaments of War Reward (#8378)"
    { 8379, 1008379 }, // "Quest: Armaments of War Reward (#8379)"
    { 8380, 1008380 }, // "Quest: Armaments of War Reward (#8380)"
    { 8381, 1008381 }, // "Quest: Armaments of War Reward (#8381)"
    { 8382, 1008382 }, // "Quest: Armaments of War Reward (#8382)"
    { 8409, 1008409 }, // "Quest: Ruined Kegs Reward (#8409)"
    { 8413, 1008413 }, // "Quest: Da Voodoo Reward (#8413)"
    { 8418, 1008418 }, // "Quest: Forging the Mightstone Reward (#8418)"
    { 8422, 1008422 }, // "Quest: Trolls of a Feather Reward (#8422)"
    { 8425, 1008425 }, // "Quest: Voodoo Feathers Reward (#8425)"
    { 8447, 1008447 }, // "Quest: Waking Legends Reward (#8447)"
    { 8448, 1008448 }, // "Quest: <TXT> Mystery Reward Reward (#8448)"
    { 8449, 1008449 }, // "Quest: <TXT> Mystery Reward Reward (#8449)"
    { 8450, 1008450 }, // "Quest: <TXT> Mystery Reward Reward (#8450)"
    { 8451, 1008451 }, // "Quest: <TXT> Mystery Reward Reward (#8451)"
    { 8452, 1008452 }, // "Quest: <TXT> Mystery Reward Reward (#8452)"
    { 8453, 1008453 }, // "Quest: <TXT> Mystery Reward Reward (#8453)"
    { 8454, 1008454 }, // "Quest: <TXT> Mystery Reward Reward (#8454)"
    { 8460, 1008460 }, // "Quest: Timbermaw Ally Reward (#8460)"
    { 8461, 1008461 }, // "Quest: Deadwood of the North Reward (#8461)"
    { 8464, 1008464 }, // "Quest: Winterfall Activity Reward (#8464)"
    { 8470, 1008470 }, // "Quest: Deadwood Ritual Totem Reward (#8470)"
    { 8471, 1008471 }, // "Quest: Winterfall Ritual Totem Reward (#8471)"
    { 8472, 1008472 }, // "Quest: Major Malfunction Reward (#8472)"
    { 8475, 1008475 }, // "Quest: The Dead Scar Reward (#8475)"
    { 8477, 1008477 }, // "Quest: The Spearcrafter's Hammer Reward (#8477)"
    { 8479, 1008479 }, // "Quest: Zul'Marosh Reward (#8479)"
    { 8480, 1008480 }, // "Quest: Lost Armaments Reward (#8480)"
    { 8481, 1008481 }, // "Quest: The Root of All Evil Reward (#8481)"
    { 8483, 1008483 }, // "Quest: The Dwarven Spy Reward (#8483)"
    { 8486, 1008486 }, // "Quest: Arcane Instability Reward (#8486)"
    { 8491, 1008491 }, // "Quest: Pelt Collection Reward (#8491)"
    { 8492, 1008492 }, // "Quest: The Alliance Needs Copper Bars! Reward (#8492)"
    { 8493, 1008493 }, // "Quest: The Alliance Needs More Copper Bars! Reward (#8493)"
    { 8494, 1008494 }, // "Quest: The Alliance Needs Iron Bars! Reward (#8494)"
    { 8495, 1008495 }, // "Quest: The Alliance Needs More Iron Bars! Reward (#8495)"
    { 8496, 1008496 }, // "Quest: Bandages for the Field Reward (#8496)"
    { 8497, 1008497 }, // "Quest: Desert Survival Kits Reward (#8497)"
    { 8498, 1008498 }, // "Quest: Twilight Battle Orders Reward (#8498)"
    { 8499, 1008499 }, // "Quest: The Alliance Needs Thorium Bars! Reward (#8499)"
    { 8500, 1008500 }, // "Quest: The Alliance Needs More Thorium Bars! Reward (#8500)"
    { 8501, 1008501 }, // "Quest: Target: Hive'Ashi Stingers Reward (#8501)"
    { 8502, 1008502 }, // "Quest: Target: Hive'Ashi Workers Reward (#8502)"
    { 8503, 1008503 }, // "Quest: The Alliance Needs Stranglekelp! Reward (#8503)"
    { 8504, 1008504 }, // "Quest: The Alliance Needs More Stranglekelp! Reward (#8504)"
    { 8505, 1008505 }, // "Quest: The Alliance Needs Purple Lotus! Reward (#8505)"
    { 8506, 1008506 }, // "Quest: The Alliance Needs More Purple Lotus! Reward (#8506)"
    { 8507, 1008507 }, // "Quest: Field Duty Reward (#8507)"
    { 8508, 1008508 }, // "Quest: Field Duty Papers Reward (#8508)"
    { 8509, 1008509 }, // "Quest: The Alliance Needs Arthas' Tears! Reward (#8509)"
    { 8510, 1008510 }, // "Quest: The Alliance Needs More Arthas' Tears! Reward (#8510)"
    { 8511, 1008511 }, // "Quest: The Alliance Needs Light Leather! Reward (#8511)"
    { 8512, 1008512 }, // "Quest: The Alliance Needs More Light Leather! Reward (#8512)"
    { 8513, 1008513 }, // "Quest: The Alliance Needs Medium Leather! Reward (#8513)"
    { 8514, 1008514 }, // "Quest: The Alliance Needs More Medium Leather! Reward (#8514)"
    { 8515, 1008515 }, // "Quest: The Alliance Needs Thick Leather! Reward (#8515)"
    { 8516, 1008516 }, // "Quest: The Alliance Needs More Thick Leather! Reward (#8516)"
    { 8517, 1008517 }, // "Quest: The Alliance Needs Linen Bandages! Reward (#8517)"
    { 8518, 1008518 }, // "Quest: The Alliance Needs More Linen Bandages! Reward (#8518)"
    { 8520, 1008520 }, // "Quest: The Alliance Needs Silk Bandages! Reward (#8520)"
    { 8521, 1008521 }, // "Quest: The Alliance Needs More Silk Bandages! Reward (#8521)"
    { 8522, 1008522 }, // "Quest: The Alliance Needs Runecloth Bandages! Reward (#8522)"
    { 8523, 1008523 }, // "Quest: The Alliance Needs More Runecloth Bandages! Reward (#8523)"
    { 8524, 1008524 }, // "Quest: The Alliance Needs Rainbow Fin Albacore! Reward (#8524)"
    { 8525, 1008525 }, // "Quest: The Alliance Needs More Rainbow Fin Albacore! Reward (#8525)"
    { 8526, 1008526 }, // "Quest: The Alliance Needs Roast Raptor! Reward (#8526)"
    { 8527, 1008527 }, // "Quest: The Alliance Needs More Roast Raptor! Reward (#8527)"
    { 8528, 1008528 }, // "Quest: The Alliance Needs Spotted Yellowtail! Reward (#8528)"
    { 8529, 1008529 }, // "Quest: The Alliance Needs More Spotted Yellowtail! Reward (#8529)"
    { 8532, 1008532 }, // "Quest: The Horde Needs Copper Bars! Reward (#8532)"
    { 8533, 1008533 }, // "Quest: The Horde Needs More Copper Bars! Reward (#8533)"
    { 8534, 1008534 }, // "Quest: Hive'Zora Scout Report Reward (#8534)"
    { 8535, 1008535 }, // "Quest: Hoary Templar Reward (#8535)"
    { 8536, 1008536 }, // "Quest: Earthen Templar Reward (#8536)"
    { 8537, 1008537 }, // "Quest: Crimson Templar Reward (#8537)"
    { 8538, 1008538 }, // "Quest: The Four Dukes Reward (#8538)"
    { 8539, 1008539 }, // "Quest: Target: Hive'Zora Hive Sisters Reward (#8539)"
    { 8540, 1008540 }, // "Quest: Boots for the Guard Reward (#8540)"
    { 8541, 1008541 }, // "Quest: Grinding Stones for the Guard Reward (#8541)"
    { 8542, 1008542 }, // "Quest: The Horde Needs Tin Bars! Reward (#8542)"
    { 8543, 1008543 }, // "Quest: The Horde Needs More Tin Bars! Reward (#8543)"
    { 8544, 1008544 }, // "Quest: Conqueror's Spaulders Reward (#8544)"
    { 8545, 1008545 }, // "Quest: The Horde Needs Mithril Bars! Reward (#8545)"
    { 8546, 1008546 }, // "Quest: The Horde Needs More Mithril Bars! Reward (#8546)"
    { 8547, 1008547 }, // "Quest: Welcome! Reward (#8547)"
    { 8548, 1008548 }, // "Quest: Volunteer's Battlegear Reward (#8548)"
    { 8549, 1008549 }, // "Quest: The Horde Needs Peacebloom! Reward (#8549)"
    { 8550, 1008550 }, // "Quest: The Horde Needs More Peacebloom! Reward (#8550)"
    { 8551, 1008551 }, // "Quest: The Captain's Chest Reward (#8551)"
    { 8554, 1008554 }, // "Quest: Facing Negolash Reward (#8554)"
    { 8556, 1008556 }, // "Quest: Signet of Unyielding Strength Reward (#8556)"
    { 8557, 1008557 }, // "Quest: Drape of Unyielding Strength Reward (#8557)"
    { 8558, 1008558 }, // "Quest: Sickle of Unyielding Strength Reward (#8558)"
    { 8559, 1008559 }, // "Quest: Conqueror's Greaves Reward (#8559)"
    { 8560, 1008560 }, // "Quest: Conqueror's Legguards Reward (#8560)"
    { 8561, 1008561 }, // "Quest: Conqueror's Crown Reward (#8561)"
    { 8562, 1008562 }, // "Quest: Conqueror's Breastplate Reward (#8562)"
    { 8565, 1008565 }, // "Quest: Past Victories in Arathi Reward (#8565)"
    { 8566, 1008566 }, // "Quest: Past Victories in Arathi Reward (#8566)"
    { 8567, 1008567 }, // "Quest: Past Victories in Warsong Gulch Reward (#8567)"
    { 8568, 1008568 }, // "Quest: Past Victories in Warsong Gulch Reward (#8568)"
    { 8569, 1008569 }, // "Quest: Past Efforts in Warsong Gulch Reward (#8569)"
    { 8570, 1008570 }, // "Quest: Past Efforts in Warsong Gulch Reward (#8570)"
    { 8572, 1008572 }, // "Quest: Veteran's Battlegear Reward (#8572)"
    { 8573, 1008573 }, // "Quest: Champion's Battlegear Reward (#8573)"
    { 8574, 1008574 }, // "Quest: Stalwart's Battlegear Reward (#8574)"
    { 8578, 1008578 }, // "Quest: Scrying Goggles? No Problem! Reward (#8578)"
    { 8580, 1008580 }, // "Quest: The Horde Needs Firebloom! Reward (#8580)"
    { 8581, 1008581 }, // "Quest: The Horde Needs More Firebloom! Reward (#8581)"
    { 8582, 1008582 }, // "Quest: The Horde Needs Purple Lotus! Reward (#8582)"
    { 8583, 1008583 }, // "Quest: The Horde Needs More Purple Lotus! Reward (#8583)"
    { 8586, 1008586 }, // "Quest: Dirge's Kickin' Chimaerok Chops Reward (#8586)"
    { 8588, 1008588 }, // "Quest: The Horde Needs Heavy Leather! Reward (#8588)"
    { 8589, 1008589 }, // "Quest: The Horde Needs More Heavy Leather! Reward (#8589)"
    { 8590, 1008590 }, // "Quest: The Horde Needs Thick Leather! Reward (#8590)"
    { 8591, 1008591 }, // "Quest: The Horde Needs More Thick Leather! Reward (#8591)"
    { 8592, 1008592 }, // "Quest: Tiara of the Oracle Reward (#8592)"
    { 8593, 1008593 }, // "Quest: Trousers of the Oracle Reward (#8593)"
    { 8594, 1008594 }, // "Quest: Mantle of the Oracle Reward (#8594)"
    { 8596, 1008596 }, // "Quest: Footwraps of the Oracle Reward (#8596)"
    { 8600, 1008600 }, // "Quest: The Horde Needs Rugged Leather! Reward (#8600)"
    { 8601, 1008601 }, // "Quest: The Horde Needs More Rugged Leather! Reward (#8601)"
    { 8602, 1008602 }, // "Quest: Stormcaller's Pauldrons Reward (#8602)"
    { 8603, 1008603 }, // "Quest: Vestments of the Oracle Reward (#8603)"
    { 8604, 1008604 }, // "Quest: The Horde Needs Wool Bandages! Reward (#8604)"
    { 8605, 1008605 }, // "Quest: The Horde Needs More Wool Bandages! Reward (#8605)"
    { 8607, 1008607 }, // "Quest: The Horde Needs Mageweave Bandages! Reward (#8607)"
    { 8608, 1008608 }, // "Quest: The Horde Needs More Mageweave Bandages! Reward (#8608)"
    { 8609, 1008609 }, // "Quest: The Horde Needs Runecloth Bandages! Reward (#8609)"
    { 8610, 1008610 }, // "Quest: The Horde Needs More Runecloth Bandages! Reward (#8610)"
    { 8611, 1008611 }, // "Quest: The Horde Needs Lean Wolf Steaks! Reward (#8611)"
    { 8612, 1008612 }, // "Quest: The Horde Needs More Lean Wolf Steaks! Reward (#8612)"
    { 8613, 1008613 }, // "Quest: The Horde Needs Spotted Yellowtail! Reward (#8613)"
    { 8614, 1008614 }, // "Quest: The Horde Needs More Spotted Yellowtail! Reward (#8614)"
    { 8615, 1008615 }, // "Quest: The Horde Needs Baked Salmon! Reward (#8615)"
    { 8616, 1008616 }, // "Quest: The Horde Needs More Baked Salmon! Reward (#8616)"
    { 8619, 1008619 }, // "Quest: Morndeep the Elder Reward (#8619)"
    { 8620, 1008620 }, // "Quest: The Only Prescription Reward (#8620)"
    { 8621, 1008621 }, // "Quest: Stormcaller's Footguards Reward (#8621)"
    { 8622, 1008622 }, // "Quest: Stormcaller's Hauberk Reward (#8622)"
    { 8623, 1008623 }, // "Quest: Stormcaller's Diadem Reward (#8623)"
    { 8624, 1008624 }, // "Quest: Stormcaller's Leggings Reward (#8624)"
    { 8625, 1008625 }, // "Quest: Enigma Shoulderpads Reward (#8625)"
    { 8626, 1008626 }, // "Quest: Striker's Footguards Reward (#8626)"
    { 8627, 1008627 }, // "Quest: Avenger's Breastplate Reward (#8627)"
    { 8628, 1008628 }, // "Quest: Avenger's Crown Reward (#8628)"
    { 8629, 1008629 }, // "Quest: Avenger's Legguards Reward (#8629)"
    { 8630, 1008630 }, // "Quest: Avenger's Pauldrons Reward (#8630)"
    { 8631, 1008631 }, // "Quest: Enigma Leggings Reward (#8631)"
    { 8632, 1008632 }, // "Quest: Enigma Circlet Reward (#8632)"
    { 8633, 1008633 }, // "Quest: Enigma Robes Reward (#8633)"
    { 8634, 1008634 }, // "Quest: Enigma Boots Reward (#8634)"
    { 8635, 1008635 }, // "Quest: Splitrock the Elder Reward (#8635)"
    { 8636, 1008636 }, // "Quest: Rumblerock the Elder Reward (#8636)"
    { 8637, 1008637 }, // "Quest: Deathdealer's Boots Reward (#8637)"
    { 8638, 1008638 }, // "Quest: Deathdealer's Vest Reward (#8638)"
    { 8639, 1008639 }, // "Quest: Deathdealer's Helm Reward (#8639)"
    { 8640, 1008640 }, // "Quest: Deathdealer's Leggings Reward (#8640)"
    { 8641, 1008641 }, // "Quest: Deathdealer's Spaulders Reward (#8641)"
    { 8642, 1008642 }, // "Quest: Silvervein the Elder Reward (#8642)"
    { 8643, 1008643 }, // "Quest: Highpeak the Elder Reward (#8643)"
    { 8644, 1008644 }, // "Quest: Stonefort the Elder Reward (#8644)"
    { 8645, 1008645 }, // "Quest: Obsidian the Elder Reward (#8645)"
    { 8646, 1008646 }, // "Quest: Hammershout the Elder Reward (#8646)"
    { 8647, 1008647 }, // "Quest: Bellowrage the Elder Reward (#8647)"
    { 8648, 1008648 }, // "Quest: Darkcore the Elder Reward (#8648)"
    { 8649, 1008649 }, // "Quest: Stormbrow the Elder Reward (#8649)"
    { 8650, 1008650 }, // "Quest: Snowcrown the Elder Reward (#8650)"
    { 8651, 1008651 }, // "Quest: Ironband the Elder Reward (#8651)"
    { 8652, 1008652 }, // "Quest: Graveborn the Elder Reward (#8652)"
    { 8653, 1008653 }, // "Quest: Goldwell the Elder Reward (#8653)"
    { 8654, 1008654 }, // "Quest: Primestone the Elder Reward (#8654)"
    { 8655, 1008655 }, // "Quest: Avenger's Greaves Reward (#8655)"
    { 8656, 1008656 }, // "Quest: Striker's Hauberk Reward (#8656)"
    { 8657, 1008657 }, // "Quest: Striker's Diadem Reward (#8657)"
    { 8658, 1008658 }, // "Quest: Striker's Leggings Reward (#8658)"
    { 8659, 1008659 }, // "Quest: Striker's Pauldrons Reward (#8659)"
    { 8660, 1008660 }, // "Quest: Doomcaller's Footwraps Reward (#8660)"
    { 8661, 1008661 }, // "Quest: Doomcaller's Robes Reward (#8661)"
    { 8662, 1008662 }, // "Quest: Doomcaller's Circlet Reward (#8662)"
    { 8663, 1008663 }, // "Quest: Doomcaller's Trousers Reward (#8663)"
    { 8664, 1008664 }, // "Quest: Doomcaller's Mantle Reward (#8664)"
    { 8665, 1008665 }, // "Quest: Genesis Boots Reward (#8665)"
    { 8666, 1008666 }, // "Quest: Genesis Vest Reward (#8666)"
    { 8667, 1008667 }, // "Quest: Genesis Helm Reward (#8667)"
    { 8668, 1008668 }, // "Quest: Genesis Trousers Reward (#8668)"
    { 8669, 1008669 }, // "Quest: Genesis Shoulderpads Reward (#8669)"
    { 8670, 1008670 }, // "Quest: Runetotem the Elder Reward (#8670)"
    { 8671, 1008671 }, // "Quest: Ragetotem the Elder Reward (#8671)"
    { 8672, 1008672 }, // "Quest: Stonespire the Elder Reward (#8672)"
    { 8673, 1008673 }, // "Quest: Bloodhoof the Elder Reward (#8673)"
    { 8674, 1008674 }, // "Quest: Winterhoof the Elder Reward (#8674)"
    { 8675, 1008675 }, // "Quest: Skychaser the Elder Reward (#8675)"
    { 8676, 1008676 }, // "Quest: Wildmane the Elder Reward (#8676)"
    { 8677, 1008677 }, // "Quest: Darkhorn the Elder Reward (#8677)"
    { 8678, 1008678 }, // "Quest: Wheathoof the Elder Reward (#8678)"
    { 8679, 1008679 }, // "Quest: Grimtotem the Elder Reward (#8679)"
    { 8680, 1008680 }, // "Quest: Windtotem the Elder Reward (#8680)"
    { 8681, 1008681 }, // "Quest: Thunderhorn the Elder Reward (#8681)"
    { 8682, 1008682 }, // "Quest: Skyseer the Elder Reward (#8682)"
    { 8683, 1008683 }, // "Quest: Dawnstrider the Elder Reward (#8683)"
    { 8684, 1008684 }, // "Quest: Dreamseer the Elder Reward (#8684)"
    { 8685, 1008685 }, // "Quest: Mistwalker the Elder Reward (#8685)"
    { 8686, 1008686 }, // "Quest: High Mountain the Elder Reward (#8686)"
    { 8687, 1008687 }, // "Quest: Target: Hive'Zora Tunnelers Reward (#8687)"
    { 8688, 1008688 }, // "Quest: Windrun the Elder Reward (#8688)"
    { 8689, 1008689 }, // "Quest: Shroud of Infinite Wisdom Reward (#8689)"
    { 8690, 1008690 }, // "Quest: Cloak of the Gathering Storm Reward (#8690)"
    { 8691, 1008691 }, // "Quest: Drape of Vaulted Secrets Reward (#8691)"
    { 8692, 1008692 }, // "Quest: Cloak of Unending Life Reward (#8692)"
    { 8693, 1008693 }, // "Quest: Cloak of Veiled Shadows Reward (#8693)"
    { 8694, 1008694 }, // "Quest: Shroud of Unspoken Names Reward (#8694)"
    { 8695, 1008695 }, // "Quest: Cape of Eternal Justice Reward (#8695)"
    { 8696, 1008696 }, // "Quest: Cloak of the Unseen Path Reward (#8696)"
    { 8697, 1008697 }, // "Quest: Ring of Infinite Wisdom Reward (#8697)"
    { 8698, 1008698 }, // "Quest: Ring of the Gathering Storm Reward (#8698)"
    { 8699, 1008699 }, // "Quest: Band of Vaulted Secrets Reward (#8699)"
    { 8700, 1008700 }, // "Quest: Band of Unending Life Reward (#8700)"
    { 8701, 1008701 }, // "Quest: Band of Veiled Shadows Reward (#8701)"
    { 8702, 1008702 }, // "Quest: Ring of Unspoken Names Reward (#8702)"
    { 8703, 1008703 }, // "Quest: Ring of Eternal Justice Reward (#8703)"
    { 8704, 1008704 }, // "Quest: Signet of the Unseen Path Reward (#8704)"
    { 8705, 1008705 }, // "Quest: Gavel of Infinite Wisdom Reward (#8705)"
    { 8706, 1008706 }, // "Quest: Hammer of the Gathering Storm Reward (#8706)"
    { 8707, 1008707 }, // "Quest: Blade of Vaulted Secrets Reward (#8707)"
    { 8708, 1008708 }, // "Quest: Mace of Unending Life Reward (#8708)"
    { 8709, 1008709 }, // "Quest: Dagger of Veiled Shadows Reward (#8709)"
    { 8710, 1008710 }, // "Quest: Kris of Unspoken Names Reward (#8710)"
    { 8711, 1008711 }, // "Quest: Blade of Eternal Justice Reward (#8711)"
    { 8712, 1008712 }, // "Quest: Scythe of the Unseen Path Reward (#8712)"
    { 8713, 1008713 }, // "Quest: Starsong the Elder Reward (#8713)"
    { 8714, 1008714 }, // "Quest: Moonstrike the Elder Reward (#8714)"
    { 8715, 1008715 }, // "Quest: Bladeleaf the Elder Reward (#8715)"
    { 8716, 1008716 }, // "Quest: Starglade the Elder Reward (#8716)"
    { 8717, 1008717 }, // "Quest: Moonwarden the Elder Reward (#8717)"
    { 8718, 1008718 }, // "Quest: Bladeswift the Elder Reward (#8718)"
    { 8719, 1008719 }, // "Quest: Bladesing the Elder Reward (#8719)"
    { 8720, 1008720 }, // "Quest: Skygleam the Elder Reward (#8720)"
    { 8721, 1008721 }, // "Quest: Starweave the Elder Reward (#8721)"
    { 8722, 1008722 }, // "Quest: Meadowrun the Elder Reward (#8722)"
    { 8723, 1008723 }, // "Quest: Nightwind the Elder Reward (#8723)"
    { 8724, 1008724 }, // "Quest: Morningdew the Elder Reward (#8724)"
    { 8725, 1008725 }, // "Quest: Riversong the Elder Reward (#8725)"
    { 8726, 1008726 }, // "Quest: Brightspear the Elder Reward (#8726)"
    { 8727, 1008727 }, // "Quest: Farwhisper the Elder Reward (#8727)"
    { 8729, 1008729 }, // "Quest: The Wrath of Neptulon Reward (#8729)"
    { 8730, 1008730 }, // "Quest: Nefarius's Corruption Reward (#8730)"
    { 8731, 1008731 }, // "Quest: Field Duty Reward (#8731)"
    { 8732, 1008732 }, // "Quest: Field Duty Papers Reward (#8732)"
    { 8736, 1008736 }, // "Quest: The Nightmare Manifests Reward (#8736)"
    { 8737, 1008737 }, // "Quest: Azure Templar Reward (#8737)"
    { 8738, 1008738 }, // "Quest: Hive'Regal Scout Report Reward (#8738)"
    { 8739, 1008739 }, // "Quest: Hive'Ashi Scout Report Reward (#8739)"
    { 8740, 1008740 }, // "Quest: Twilight Marauders Reward (#8740)"
    { 8743, 1008743 }, // "Quest: Bang a Gong! Reward (#8743)"
    { 8744, 1008744 }, // "Quest: A Carefully Wrapped Present Reward (#8744)"
    { 8745, 1008745 }, // "Quest: Treasure of the Timeless One Reward (#8745)"
    { 8746, 1008746 }, // "Quest: Metzen the Reindeer Reward (#8746)"
    { 8747, 1008747 }, // "Quest: The Path of the Protector Reward (#8747)"
    { 8748, 1008748 }, // "Quest: The Path of the Protector Reward (#8748)"
    { 8749, 1008749 }, // "Quest: The Path of the Protector Reward (#8749)"
    { 8750, 1008750 }, // "Quest: The Path of the Protector Reward (#8750)"
    { 8751, 1008751 }, // "Quest: The Protector of Kalimdor Reward (#8751)"
    { 8752, 1008752 }, // "Quest: The Path of the Conqueror Reward (#8752)"
    { 8753, 1008753 }, // "Quest: The Path of the Conqueror Reward (#8753)"
    { 8754, 1008754 }, // "Quest: The Path of the Conqueror Reward (#8754)"
    { 8755, 1008755 }, // "Quest: The Path of the Conqueror Reward (#8755)"
    { 8756, 1008756 }, // "Quest: The Qiraji Conqueror Reward (#8756)"
    { 8757, 1008757 }, // "Quest: The Path of the Invoker Reward (#8757)"
    { 8758, 1008758 }, // "Quest: The Path of the Invoker Reward (#8758)"
    { 8759, 1008759 }, // "Quest: The Path of the Invoker Reward (#8759)"
    { 8760, 1008760 }, // "Quest: The Path of the Invoker Reward (#8760)"
    { 8761, 1008761 }, // "Quest: The Grand Invoker Reward (#8761)"
    { 8762, 1008762 }, // "Quest: Metzen the Reindeer Reward (#8762)"
    { 8763, 1008763 }, // "Quest: The Hero of the Day Reward (#8763)"
    { 8764, 1008764 }, // "Quest: The Changing of Paths - Protector No More Reward (#8764)"
    { 8765, 1008765 }, // "Quest: The Changing of Paths - Invoker No More Reward (#8765)"
    { 8766, 1008766 }, // "Quest: The Changing of Paths - Conqueror No More Reward (#8766)"
    { 8767, 1008767 }, // "Quest: A Gently Shaken Gift Reward (#8767)"
    { 8768, 1008768 }, // "Quest: A Gaily Wrapped Present Reward (#8768)"
    { 8769, 1008769 }, // "Quest: A Ticking Present Reward (#8769)"
    { 8770, 1008770 }, // "Quest: Target: Hive'Ashi Defenders Reward (#8770)"
    { 8771, 1008771 }, // "Quest: Target: Hive'Ashi Sandstalkers Reward (#8771)"
    { 8772, 1008772 }, // "Quest: Target: Hive'Zora Waywatchers Reward (#8772)"
    { 8773, 1008773 }, // "Quest: Target: Hive'Zora Reavers Reward (#8773)"
    { 8774, 1008774 }, // "Quest: Target: Hive'Regal Ambushers Reward (#8774)"
    { 8775, 1008775 }, // "Quest: Target: Hive'Regal Spitfires Reward (#8775)"
    { 8776, 1008776 }, // "Quest: Target: Hive'Regal Slavemakers Reward (#8776)"
    { 8777, 1008777 }, // "Quest: Target: Hive'Regal Burrowers Reward (#8777)"
    { 8778, 1008778 }, // "Quest: The Ironforge Brigade Needs Explosives! Reward (#8778)"
    { 8779, 1008779 }, // "Quest: Scrying Materials Reward (#8779)"
    { 8780, 1008780 }, // "Quest: Armor Kits for the Field Reward (#8780)"
    { 8781, 1008781 }, // "Quest: Arms for the Field Reward (#8781)"
    { 8782, 1008782 }, // "Quest: Uniform Supplies Reward (#8782)"
    { 8783, 1008783 }, // "Quest: Extraordinary Materials Reward (#8783)"
    { 8785, 1008785 }, // "Quest: The Orgrimmar Legion Needs Mojo! Reward (#8785)"
    { 8786, 1008786 }, // "Quest: Arms for the Field Reward (#8786)"
    { 8787, 1008787 }, // "Quest: Armor Kits for the Field Reward (#8787)"
    { 8788, 1008788 }, // "Quest: A Gently Shaken Gift Reward (#8788)"
    { 8789, 1008789 }, // "Quest: Imperial Qiraji Armaments Reward (#8789)"
    { 8790, 1008790 }, // "Quest: Imperial Qiraji Regalia Reward (#8790)"
    { 8791, 1008791 }, // "Quest: The Fall of Ossirian Reward (#8791)"
    { 8799, 1008799 }, // "Quest: The Hero of the Day Reward (#8799)"
    { 8802, 1008802 }, // "Quest: The Savior of Kalimdor Reward (#8802)"
    { 8803, 1008803 }, // "Quest: A Festive Gift Reward (#8803)"
    { 8804, 1008804 }, // "Quest: Desert Survival Kits Reward (#8804)"
    { 8805, 1008805 }, // "Quest: Boots for the Guard Reward (#8805)"
    { 8806, 1008806 }, // "Quest: Grinding Stones for the Guard Reward (#8806)"
    { 8807, 1008807 }, // "Quest: Scrying Materials Reward (#8807)"
    { 8808, 1008808 }, // "Quest: Uniform Supplies Reward (#8808)"
    { 8809, 1008809 }, // "Quest: Extraordinary Materials Reward (#8809)"
    { 8810, 1008810 }, // "Quest: Bandages for the Field Reward (#8810)"
    { 8829, 1008829 }, // "Quest: The Ultimate Deception Reward (#8829)"
    { 8846, 1008846 }, // "Quest: Five Signets for War Supplies Reward (#8846)"
    { 8847, 1008847 }, // "Quest: Ten Signets for War Supplies Reward (#8847)"
    { 8848, 1008848 }, // "Quest: Fifteen Signets for War Supplies Reward (#8848)"
    { 8849, 1008849 }, // "Quest: Twenty Signets for War Supplies Reward (#8849)"
    { 8850, 1008850 }, // "Quest: Thirty Signets for War Supplies Reward (#8850)"
    { 8851, 1008851 }, // "Quest: Five Signets for War Supplies Reward (#8851)"
    { 8852, 1008852 }, // "Quest: Ten Signets for War Supplies Reward (#8852)"
    { 8853, 1008853 }, // "Quest: Fifteen Signets for War Supplies Reward (#8853)"
    { 8854, 1008854 }, // "Quest: Twenty Signets for War Supplies Reward (#8854)"
    { 8855, 1008855 }, // "Quest: Thirty Signets for War Supplies Reward (#8855)"
    { 8856, 1008856 }, // "Quest: Desert Survival Kits Reward (#8856)"
    { 8857, 1008857 }, // "Quest: Secrets of the Colossus - Ashi Reward (#8857)"
    { 8858, 1008858 }, // "Quest: Secrets of the Colossus - Regal Reward (#8858)"
    { 8859, 1008859 }, // "Quest: Secrets of the Colossus - Zora Reward (#8859)"
    { 8862, 1008862 }, // "Quest: Elune's Candle Reward (#8862)"
    { 8863, 1008863 }, // "Quest: Festival Dumplings Reward (#8863)"
    { 8864, 1008864 }, // "Quest: Festive Lunar Dresses Reward (#8864)"
    { 8865, 1008865 }, // "Quest: Festive Lunar Pant Suits Reward (#8865)"
    { 8866, 1008866 }, // "Quest: Bronzebeard the Elder Reward (#8866)"
    { 8867, 1008867 }, // "Quest: Lunar Fireworks Reward (#8867)"
    { 8868, 1008868 }, // "Quest: Elune's Blessing Reward (#8868)"
    { 8869, 1008869 }, // "Quest: Sweet Serenity Reward (#8869)"
    { 8876, 1008876 }, // "Quest: Small Rockets Reward (#8876)"
    { 8877, 1008877 }, // "Quest: Firework Launcher Reward (#8877)"
    { 8878, 1008878 }, // "Quest: Festive Recipes Reward (#8878)"
    { 8879, 1008879 }, // "Quest: Large Rockets Reward (#8879)"
    { 8880, 1008880 }, // "Quest: Cluster Rockets Reward (#8880)"
    { 8881, 1008881 }, // "Quest: Large Cluster Rockets Reward (#8881)"
    { 8882, 1008882 }, // "Quest: Cluster Launcher Reward (#8882)"
    { 8885, 1008885 }, // "Quest: The Ring of Mmmrrrggglll Reward (#8885)"
    { 8890, 1008890 }, // "Quest: Word from the Spire Reward (#8890)"
    { 8893, 1008893 }, // "Quest: The Super Egg-O-Matic Reward (#8893)"
    { 8905, 1008905 }, // "Quest: An Earnest Proposition Reward (#8905)"
    { 8906, 1008906 }, // "Quest: An Earnest Proposition Reward (#8906)"
    { 8907, 1008907 }, // "Quest: An Earnest Proposition Reward (#8907)"
    { 8908, 1008908 }, // "Quest: An Earnest Proposition Reward (#8908)"
    { 8909, 1008909 }, // "Quest: An Earnest Proposition Reward (#8909)"
    { 8910, 1008910 }, // "Quest: An Earnest Proposition Reward (#8910)"
    { 8911, 1008911 }, // "Quest: An Earnest Proposition Reward (#8911)"
    { 8912, 1008912 }, // "Quest: An Earnest Proposition Reward (#8912)"
    { 8913, 1008913 }, // "Quest: An Earnest Proposition Reward (#8913)"
    { 8914, 1008914 }, // "Quest: An Earnest Proposition Reward (#8914)"
    { 8915, 1008915 }, // "Quest: An Earnest Proposition Reward (#8915)"
    { 8916, 1008916 }, // "Quest: An Earnest Proposition Reward (#8916)"
    { 8917, 1008917 }, // "Quest: An Earnest Proposition Reward (#8917)"
    { 8918, 1008918 }, // "Quest: An Earnest Proposition Reward (#8918)"
    { 8919, 1008919 }, // "Quest: An Earnest Proposition Reward (#8919)"
    { 8920, 1008920 }, // "Quest: An Earnest Proposition Reward (#8920)"
    { 8921, 1008921 }, // "Quest: The Ectoplasmic Distiller Reward (#8921)"
    { 8926, 1008926 }, // "Quest: Just Compensation Reward (#8926)"
    { 8927, 1008927 }, // "Quest: Just Compensation Reward (#8927)"
    { 8931, 1008931 }, // "Quest: Just Compensation Reward (#8931)"
    { 8932, 1008932 }, // "Quest: Just Compensation Reward (#8932)"
    { 8933, 1008933 }, // "Quest: Just Compensation Reward (#8933)"
    { 8934, 1008934 }, // "Quest: Just Compensation Reward (#8934)"
    { 8935, 1008935 }, // "Quest: Just Compensation Reward (#8935)"
    { 8936, 1008936 }, // "Quest: Just Compensation Reward (#8936)"
    { 8937, 1008937 }, // "Quest: Just Compensation Reward (#8937)"
    { 8938, 1008938 }, // "Quest: Just Compensation Reward (#8938)"
    { 8939, 1008939 }, // "Quest: Just Compensation Reward (#8939)"
    { 8940, 1008940 }, // "Quest: Just Compensation Reward (#8940)"
    { 8941, 1008941 }, // "Quest: Just Compensation Reward (#8941)"
    { 8942, 1008942 }, // "Quest: Just Compensation Reward (#8942)"
    { 8943, 1008943 }, // "Quest: Just Compensation Reward (#8943)"
    { 8944, 1008944 }, // "Quest: Just Compensation Reward (#8944)"
    { 8945, 1008945 }, // "Quest: Dead Man's Plea Reward (#8945)"
    { 8949, 1008949 }, // "Quest: Falrin's Vendetta Reward (#8949)"
    { 8951, 1008951 }, // "Quest: Anthion's Parting Words Reward (#8951)"
    { 8952, 1008952 }, // "Quest: Anthion's Parting Words Reward (#8952)"
    { 8953, 1008953 }, // "Quest: Anthion's Parting Words Reward (#8953)"
    { 8954, 1008954 }, // "Quest: Anthion's Parting Words Reward (#8954)"
    { 8955, 1008955 }, // "Quest: Anthion's Parting Words Reward (#8955)"
    { 8956, 1008956 }, // "Quest: Anthion's Parting Words Reward (#8956)"
    { 8957, 1008957 }, // "Quest: Anthion's Parting Words Reward (#8957)"
    { 8958, 1008958 }, // "Quest: Anthion's Parting Words Reward (#8958)"
    { 8959, 1008959 }, // "Quest: Anthion's Parting Words Reward (#8959)"
    { 8971, 1008971 }, // "Quest: REUSE Reward (#8971)"
    { 8972, 1008972 }, // "Quest: REUSE Reward (#8972)"
    { 8973, 1008973 }, // "Quest: REUSE Reward (#8973)"
    { 8974, 1008974 }, // "Quest: REUSE Reward (#8974)"
    { 8975, 1008975 }, // "Quest: REUSE Reward (#8975)"
    { 8976, 1008976 }, // "Quest: REUSE Reward (#8976)"
    { 8980, 1008980 }, // "Quest: Zinge's Assessment Reward (#8980)"
    { 8981, 1008981 }, // "Quest: Gift Giving Reward (#8981)"
    { 8985, 1008985 }, // "Quest: More Components of Importance Reward (#8985)"
    { 8986, 1008986 }, // "Quest: More Components of Importance Reward (#8986)"
    { 8987, 1008987 }, // "Quest: More Components of Importance Reward (#8987)"
    { 8988, 1008988 }, // "Quest: More Components of Importance Reward (#8988)"
    { 8993, 1008993 }, // "Quest: Gift Giving Reward (#8993)"
    { 8996, 1008996 }, // "Quest: Return to Bodley Reward (#8996)"
    { 8999, 1008999 }, // "Quest: Saving the Best for Last Reward (#8999)"
    { 9000, 1009000 }, // "Quest: Saving the Best for Last Reward (#9000)"
    { 9001, 1009001 }, // "Quest: Saving the Best for Last Reward (#9001)"
    { 9002, 1009002 }, // "Quest: Saving the Best for Last Reward (#9002)"
    { 9003, 1009003 }, // "Quest: Saving the Best for Last Reward (#9003)"
    { 9004, 1009004 }, // "Quest: Saving the Best for Last Reward (#9004)"
    { 9005, 1009005 }, // "Quest: Saving the Best for Last Reward (#9005)"
    { 9006, 1009006 }, // "Quest: Saving the Best for Last Reward (#9006)"
    { 9007, 1009007 }, // "Quest: Saving the Best for Last Reward (#9007)"
    { 9008, 1009008 }, // "Quest: Saving the Best for Last Reward (#9008)"
    { 9009, 1009009 }, // "Quest: Saving the Best for Last Reward (#9009)"
    { 9010, 1009010 }, // "Quest: Saving the Best for Last Reward (#9010)"
    { 9011, 1009011 }, // "Quest: Saving the Best for Last Reward (#9011)"
    { 9012, 1009012 }, // "Quest: Saving the Best for Last Reward (#9012)"
    { 9013, 1009013 }, // "Quest: Saving the Best for Last Reward (#9013)"
    { 9014, 1009014 }, // "Quest: Saving the Best for Last Reward (#9014)"
    { 9016, 1009016 }, // "Quest: Anthion's Parting Words Reward (#9016)"
    { 9017, 1009017 }, // "Quest: Anthion's Parting Words Reward (#9017)"
    { 9018, 1009018 }, // "Quest: Anthion's Parting Words Reward (#9018)"
    { 9019, 1009019 }, // "Quest: Anthion's Parting Words Reward (#9019)"
    { 9020, 1009020 }, // "Quest: Anthion's Parting Words Reward (#9020)"
    { 9021, 1009021 }, // "Quest: Anthion's Parting Words Reward (#9021)"
    { 9022, 1009022 }, // "Quest: Anthion's Parting Words Reward (#9022)"
    { 9023, 1009023 }, // "Quest: The Perfect Poison Reward (#9023)"
    { 9025, 1009025 }, // "Quest: Morgan's Discovery Reward (#9025)"
    { 9029, 1009029 }, // "Quest: A Bubbling Cauldron Reward (#9029)"
    { 9034, 1009034 }, // "Quest: Dreadnaught Breastplate Reward (#9034)"
    { 9036, 1009036 }, // "Quest: Dreadnaught Legplates Reward (#9036)"
    { 9037, 1009037 }, // "Quest: Dreadnaught Helmet Reward (#9037)"
    { 9038, 1009038 }, // "Quest: Dreadnaught Pauldrons Reward (#9038)"
    { 9039, 1009039 }, // "Quest: Dreadnaught Sabatons Reward (#9039)"
    { 9040, 1009040 }, // "Quest: Dreadnaught Gauntlets Reward (#9040)"
    { 9041, 1009041 }, // "Quest: Dreadnaught Waistguard Reward (#9041)"
    { 9042, 1009042 }, // "Quest: Dreadnaught Bracers Reward (#9042)"
    { 9043, 1009043 }, // "Quest: Redemption Tunic Reward (#9043)"
    { 9044, 1009044 }, // "Quest: Redemption Legguards Reward (#9044)"
    { 9045, 1009045 }, // "Quest: Redemption Headpiece Reward (#9045)"
    { 9046, 1009046 }, // "Quest: Redemption Spaulders Reward (#9046)"
    { 9047, 1009047 }, // "Quest: Redemption Boots Reward (#9047)"
    { 9048, 1009048 }, // "Quest: Redemption Handguards Reward (#9048)"
    { 9049, 1009049 }, // "Quest: Redemption Girdle Reward (#9049)"
    { 9050, 1009050 }, // "Quest: Redemption Wristguards Reward (#9050)"
    { 9052, 1009052 }, // "Quest: Bloodpetal Poison Reward (#9052)"
    { 9053, 1009053 }, // "Quest: A Better Ingredient Reward (#9053)"
    { 9054, 1009054 }, // "Quest: Cryptstalker Tunic Reward (#9054)"
    { 9055, 1009055 }, // "Quest: Cryptstalker Legguards Reward (#9055)"
    { 9056, 1009056 }, // "Quest: Cryptstalker Headpiece Reward (#9056)"
    { 9057, 1009057 }, // "Quest: Cryptstalker Spaulders Reward (#9057)"
    { 9058, 1009058 }, // "Quest: Cryptstalker Boots Reward (#9058)"
    { 9059, 1009059 }, // "Quest: Cryptstalker Handguards Reward (#9059)"
    { 9060, 1009060 }, // "Quest: Cryptstalker Girdle Reward (#9060)"
    { 9061, 1009061 }, // "Quest: Cryptstalker Wristguards Reward (#9061)"
    { 9065, 1009065 }, // "Quest: The Pattymac Special Reward (#9065)"
    { 9066, 1009066 }, // "Quest: Swift Discipline Reward (#9066)"
    { 9067, 1009067 }, // "Quest: The Party Never Ends Reward (#9067)"
    { 9068, 1009068 }, // "Quest: Earthshatter Tunic Reward (#9068)"
    { 9069, 1009069 }, // "Quest: Earthshatter Legguards Reward (#9069)"
    { 9070, 1009070 }, // "Quest: Earthshatter Headpiece Reward (#9070)"
    { 9071, 1009071 }, // "Quest: Earthshatter Spaulders Reward (#9071)"
    { 9072, 1009072 }, // "Quest: Earthshatter Boots Reward (#9072)"
    { 9073, 1009073 }, // "Quest: Earthshatter Handguards Reward (#9073)"
    { 9074, 1009074 }, // "Quest: Earthshatter Girdle Reward (#9074)"
    { 9075, 1009075 }, // "Quest: Earthshatter Wristguards Reward (#9075)"
    { 9076, 1009076 }, // "Quest: Wretched Ringleader Reward (#9076)"
    { 9077, 1009077 }, // "Quest: Bonescythe Breastplate Reward (#9077)"
    { 9078, 1009078 }, // "Quest: Bonescythe Legplates Reward (#9078)"
    { 9079, 1009079 }, // "Quest: Bonescythe Helmet Reward (#9079)"
    { 9080, 1009080 }, // "Quest: Bonescythe Pauldrons Reward (#9080)"
    { 9081, 1009081 }, // "Quest: Bonescythe Sabatons Reward (#9081)"
    { 9082, 1009082 }, // "Quest: Bonescythe Gauntlets Reward (#9082)"
    { 9083, 1009083 }, // "Quest: Bonescythe Waistguard Reward (#9083)"
    { 9084, 1009084 }, // "Quest: Bonescythe Bracers Reward (#9084)"
    { 9085, 1009085 }, // "Quest: Shadows of Doom Reward (#9085)"
    { 9086, 1009086 }, // "Quest: Dreamwalker Tunic Reward (#9086)"
    { 9087, 1009087 }, // "Quest: Dreamwalker Legguards Reward (#9087)"
    { 9088, 1009088 }, // "Quest: Dreamwalker Headpiece Reward (#9088)"
    { 9089, 1009089 }, // "Quest: Dreamwalker Spaulders Reward (#9089)"
    { 9090, 1009090 }, // "Quest: Dreamwalker Boots Reward (#9090)"
    { 9091, 1009091 }, // "Quest: Dreamwalker Handguards Reward (#9091)"
    { 9092, 1009092 }, // "Quest: Dreamwalker Girdle Reward (#9092)"
    { 9093, 1009093 }, // "Quest: Dreamwalker Wristguards Reward (#9093)"
    { 9094, 1009094 }, // "Quest: Argent Dawn Gloves Reward (#9094)"
    { 9095, 1009095 }, // "Quest: Frostfire Robe Reward (#9095)"
    { 9096, 1009096 }, // "Quest: Frostfire Leggings Reward (#9096)"
    { 9097, 1009097 }, // "Quest: Frostfire Circlet Reward (#9097)"
    { 9098, 1009098 }, // "Quest: Frostfire Shoulderpads Reward (#9098)"
    { 9099, 1009099 }, // "Quest: Frostfire Sandals Reward (#9099)"
    { 9100, 1009100 }, // "Quest: Frostfire Gloves Reward (#9100)"
    { 9101, 1009101 }, // "Quest: Frostfire Belt Reward (#9101)"
    { 9102, 1009102 }, // "Quest: Frostfire Bindings Reward (#9102)"
    { 9103, 1009103 }, // "Quest: Plagueheart Robe Reward (#9103)"
    { 9104, 1009104 }, // "Quest: Plagueheart Leggings Reward (#9104)"
    { 9105, 1009105 }, // "Quest: Plagueheart Circlet Reward (#9105)"
    { 9106, 1009106 }, // "Quest: Plagueheart Shoulderpads Reward (#9106)"
    { 9107, 1009107 }, // "Quest: Plagueheart Sandals Reward (#9107)"
    { 9108, 1009108 }, // "Quest: Plagueheart Gloves Reward (#9108)"
    { 9109, 1009109 }, // "Quest: Plagueheart Belt Reward (#9109)"
    { 9110, 1009110 }, // "Quest: Plagueheart Bindings Reward (#9110)"
    { 9111, 1009111 }, // "Quest: Robe of Faith Reward (#9111)"
    { 9112, 1009112 }, // "Quest: Leggings of Faith Reward (#9112)"
    { 9113, 1009113 }, // "Quest: Circlet of Faith Reward (#9113)"
    { 9114, 1009114 }, // "Quest: Shoulderpads of Faith Reward (#9114)"
    { 9115, 1009115 }, // "Quest: Sandals of Faith Reward (#9115)"
    { 9116, 1009116 }, // "Quest: Gloves of Faith Reward (#9116)"
    { 9117, 1009117 }, // "Quest: Belt of Faith Reward (#9117)"
    { 9118, 1009118 }, // "Quest: Bindings of Faith Reward (#9118)"
    { 9120, 1009120 }, // "Quest: The Fall of Kel'Thuzad Reward (#9120)"
    { 9124, 1009124 }, // "Quest: Cryptstalker Armor Doesn't Make Itself... Reward (#9124)"
    { 9125, 1009125 }, // "Quest: Crypt Fiend Parts Reward (#9125)"
    { 9126, 1009126 }, // "Quest: Bonescythe Digs Reward (#9126)"
    { 9127, 1009127 }, // "Quest: Bone Fragments Reward (#9127)"
    { 9128, 1009128 }, // "Quest: The Elemental Equation Reward (#9128)"
    { 9129, 1009129 }, // "Quest: Core of Elements Reward (#9129)"
    { 9131, 1009131 }, // "Quest: Binding the Dreadnaught Reward (#9131)"
    { 9132, 1009132 }, // "Quest: Dark Iron Scraps Reward (#9132)"
    { 9136, 1009136 }, // "Quest: Savage Flora Reward (#9136)"
    { 9137, 1009137 }, // "Quest: Savage Fronds Reward (#9137)"
    { 9139, 1009139 }, // "Quest: Goldenmist Village Reward (#9139)"
    { 9140, 1009140 }, // "Quest: Windrunner Village Reward (#9140)"
    { 9141, 1009141 }, // "Quest: They Call Me \"The Rooster\" Reward (#9141)"
    { 9142, 1009142 }, // "Quest: Craftsman's Writ Reward (#9142)"
    { 9146, 1009146 }, // "Quest: Report to Captain Helios Reward (#9146)"
    { 9148, 1009148 }, // "Quest: Delivery to Tranquillien Reward (#9148)"
    { 9149, 1009149 }, // "Quest: The Plagued Coast Reward (#9149)"
    { 9153, 1009153 }, // "Quest: Under the Shadow Reward (#9153)"
    { 9156, 1009156 }, // "Quest: Wanted: Knucklerot and Luzran Reward (#9156)"
    { 9159, 1009159 }, // "Quest: Curbing the Plague Reward (#9159)"
    { 9160, 1009160 }, // "Quest: Investigate An'daroth Reward (#9160)"
    { 9165, 1009165 }, // "Quest: Writ of Safe Passage Reward (#9165)"
    { 9167, 1009167 }, // "Quest: The Traitor's Destruction Reward (#9167)"
    { 9169, 1009169 }, // "Quest: Deactivate An'owyn Reward (#9169)"
    { 9170, 1009170 }, // "Quest: Dar'Khan's Lieutenants Reward (#9170)"
    { 9171, 1009171 }, // "Quest: Culinary Crunch Reward (#9171)"
    { 9172, 1009172 }, // "Quest: Report to Magister Kaendris Reward (#9172)"
    { 9176, 1009176 }, // "Quest: The Twin Ziggurats Reward (#9176)"
    { 9178, 1009178 }, // "Quest: Craftsman's Writ - Dense Weightstone Reward (#9178)"
    { 9179, 1009179 }, // "Quest: Craftsman's Writ - Imperial Plate Chest Reward (#9179)"
    { 9181, 1009181 }, // "Quest: Craftsman's Writ - Volcanic Hammer Reward (#9181)"
    { 9182, 1009182 }, // "Quest: Craftsman's Writ - Huge Thorium Battleaxe Reward (#9182)"
    { 9183, 1009183 }, // "Quest: Craftsman's Writ - Radiant Circlet Reward (#9183)"
    { 9184, 1009184 }, // "Quest: Craftsman's Writ - Wicked Leather Headband Reward (#9184)"
    { 9185, 1009185 }, // "Quest: Craftsman's Writ - Rugged Armor Kit Reward (#9185)"
    { 9186, 1009186 }, // "Quest: Craftsman's Writ - Wicked Leather Belt Reward (#9186)"
    { 9187, 1009187 }, // "Quest: Craftsman's Writ - Runic Leather Pants Reward (#9187)"
    { 9188, 1009188 }, // "Quest: Craftsman's Writ - Brightcloth Pants Reward (#9188)"
    { 9190, 1009190 }, // "Quest: Craftsman's Writ - Runecloth Boots Reward (#9190)"
    { 9191, 1009191 }, // "Quest: Craftsman's Writ - Runecloth Bag Reward (#9191)"
    { 9194, 1009194 }, // "Quest: Craftsman's Writ - Runecloth Robe Reward (#9194)"
    { 9195, 1009195 }, // "Quest: Craftsman's Writ - Goblin Sapper Charge Reward (#9195)"
    { 9196, 1009196 }, // "Quest: Craftsman's Writ - Thorium Grenade Reward (#9196)"
    { 9197, 1009197 }, // "Quest: Craftsman's Writ - Gnomish Battle Chicken Reward (#9197)"
    { 9198, 1009198 }, // "Quest: Craftsman's Writ - Thorium Tube Reward (#9198)"
    { 9199, 1009199 }, // "Quest: Troll Juju Reward (#9199)"
    { 9200, 1009200 }, // "Quest: Craftsman's Writ - Major Mana Potion Reward (#9200)"
    { 9201, 1009201 }, // "Quest: Craftsman's Writ - Greater Arcane Protection Potion Reward (#9201)"
    { 9202, 1009202 }, // "Quest: Craftsman's Writ - Major Healing Potion Reward (#9202)"
    { 9203, 1009203 }, // "Quest: Craftsman's Writ - Potion of Petrification Reward (#9203)"
    { 9204, 1009204 }, // "Quest: Craftsman's Writ - Stonescale Eel Reward (#9204)"
    { 9205, 1009205 }, // "Quest: Craftsman's Writ - Plated Armorfish Reward (#9205)"
    { 9206, 1009206 }, // "Quest: Craftsman's Writ - Lightning Eel Reward (#9206)"
    { 9208, 1009208 }, // "Quest: The Savage Guard - Arcanum of Protection Reward (#9208)"
    { 9209, 1009209 }, // "Quest: The Savage Guard - Arcanum of Rapidity Reward (#9209)"
    { 9210, 1009210 }, // "Quest: The Savage Guard - Arcanum of Focus Reward (#9210)"
    { 9211, 1009211 }, // "Quest: The Ice Guard Reward (#9211)"
    { 9212, 1009212 }, // "Quest: Escape from the Catacombs Reward (#9212)"
    { 9213, 1009213 }, // "Quest: The Shadow Guard Reward (#9213)"
    { 9215, 1009215 }, // "Quest: Bring Me Kel'gash's Head! Reward (#9215)"
    { 9216, 1009216 }, // "Quest: Rotting Hearts Reward (#9216)"
    { 9217, 1009217 }, // "Quest: More Rotting Hearts Reward (#9217)"
    { 9218, 1009218 }, // "Quest: Spinal Dust Reward (#9218)"
    { 9219, 1009219 }, // "Quest: More Spinal Dust Reward (#9219)"
    { 9221, 1009221 }, // "Quest: Superior Armaments of Battle - Friend of the Dawn Reward (#9221)"
    { 9222, 1009222 }, // "Quest: Epic Armaments of Battle - Friend of the Dawn Reward (#9222)"
    { 9223, 1009223 }, // "Quest: Superior Armaments of Battle - Honored Amongst the Dawn Reward (#9223)"
    { 9224, 1009224 }, // "Quest: Epic Armaments of Battle - Honored Amongst the Dawn Reward (#9224)"
    { 9225, 1009225 }, // "Quest: Epic Armaments of Battle - Revered Amongst the Dawn Reward (#9225)"
    { 9226, 1009226 }, // "Quest: Superior Armaments of Battle - Revered Amongst the Dawn Reward (#9226)"
    { 9227, 1009227 }, // "Quest: Superior Armaments of Battle - Exalted Amongst the Dawn Reward (#9227)"
    { 9228, 1009228 }, // "Quest: Epic Armaments of Battle - Exalted Amongst the Dawn Reward (#9228)"
    { 9230, 1009230 }, // "Quest: Ramaladni's Icy Grasp Reward (#9230)"
    { 9231, 1009231 }, // "Quest: reuse Reward (#9231)"
    { 9232, 1009232 }, // "Quest: The Only Song I Know... Reward (#9232)"
    { 9234, 1009234 }, // "Quest: Icebane Gauntlets Reward (#9234)"
    { 9235, 1009235 }, // "Quest: Icebane Bracers Reward (#9235)"
    { 9236, 1009236 }, // "Quest: Icebane Breastplate Reward (#9236)"
    { 9237, 1009237 }, // "Quest: Glacial Cloak Reward (#9237)"
    { 9238, 1009238 }, // "Quest: Glacial Wrists Reward (#9238)"
    { 9239, 1009239 }, // "Quest: Glacial Gloves Reward (#9239)"
    { 9240, 1009240 }, // "Quest: Glacial Vest Reward (#9240)"
    { 9241, 1009241 }, // "Quest: Polar Bracers Reward (#9241)"
    { 9242, 1009242 }, // "Quest: Polar Gloves Reward (#9242)"
    { 9243, 1009243 }, // "Quest: Polar Tunic Reward (#9243)"
    { 9244, 1009244 }, // "Quest: Icy Scale Bracers Reward (#9244)"
    { 9245, 1009245 }, // "Quest: Icy Scale Gauntlets Reward (#9245)"
    { 9246, 1009246 }, // "Quest: Icy Scale Breastplate Reward (#9246)"
    { 9247, 1009247 }, // "Quest: The Keeper's Call Reward (#9247)"
    { 9248, 1009248 }, // "Quest: A Humble Offering Reward (#9248)"
    { 9249, 1009249 }, // "Quest: 40 Tickets - Schematic: Steam Tonk Controller Reward (#9249)"
    { 9257, 1009257 }, // "Quest: Atiesh, Greatstaff of the Guardian Reward (#9257)"
    { 9269, 1009269 }, // "Quest: Atiesh, Greatstaff of the Guardian Reward (#9269)"
    { 9270, 1009270 }, // "Quest: Atiesh, Greatstaff of the Guardian Reward (#9270)"
    { 9271, 1009271 }, // "Quest: Atiesh, Greatstaff of the Guardian Reward (#9271)"
    { 9272, 1009272 }, // "Quest: Dressing the Part Reward (#9272)"
    { 9273, 1009273 }, // "Quest: Redeem iCoke Prize Voucher Reward (#9273)"
    { 9277, 1009277 }, // "Quest: Assault on Zeb'Nowa Reward (#9277)"
    { 9278, 1009278 }, // "Quest: Welcome! Reward (#9278)"
    { 9280, 1009280 }, // "Quest: Replenishing the Healing Crystals Reward (#9280)"
    { 9283, 1009283 }, // "Quest: Rescue the Survivors! Reward (#9283)"
    { 9292, 1009292 }, // "Quest: Cracked Necrotic Crystal Reward (#9292)"
    { 9303, 1009303 }, // "Quest: Inoculation Reward (#9303)"
    { 9305, 1009305 }, // "Quest: Spare Parts Reward (#9305)"
    { 9310, 1009310 }, // "Quest: Faint Necrotic Crystal Reward (#9310)"
    { 9311, 1009311 }, // "Quest: Blood Elf Spy Reward (#9311)"
    { 9314, 1009314 }, // "Quest: Word from Azure Watch Reward (#9314)"
    { 9315, 1009315 }, // "Quest: Anok'suten Reward (#9315)"
    { 9316, 1009316 }, // "Quest: [TXT] Goblin Savages Reward (#9316)"
    { 9317, 1009317 }, // "Quest: Consecrated Sharpening Stones Reward (#9317)"
    { 9318, 1009318 }, // "Quest: Blessed Wizard Oil Reward (#9318)"
    { 9319, 1009319 }, // "Quest: A Light in Dark Places Reward (#9319)"
    { 9320, 1009320 }, // "Quest: Super Mana Potion Reward (#9320)"
    { 9321, 1009321 }, // "Quest: Super Healing Potion Reward (#9321)"
    { 9322, 1009322 }, // "Quest: Wild Fires in Kalimdor Reward (#9322)"
    { 9323, 1009323 }, // "Quest: Wild Fires in the Eastern Kingdoms Reward (#9323)"
    { 9324, 1009324 }, // "Quest: Stealing Orgrimmar's Flame Reward (#9324)"
    { 9325, 1009325 }, // "Quest: Stealing Thunder Bluff's Flame Reward (#9325)"
    { 9326, 1009326 }, // "Quest: Stealing the Undercity's Flame Reward (#9326)"
    { 9330, 1009330 }, // "Quest: Stealing Stormwind's Flame Reward (#9330)"
    { 9331, 1009331 }, // "Quest: Stealing Ironforge's Flame Reward (#9331)"
    { 9332, 1009332 }, // "Quest: Stealing Darnassus's Flame Reward (#9332)"
    { 9333, 1009333 }, // "Quest: Argent Dawn Gloves Reward (#9333)"
    { 9334, 1009334 }, // "Quest: Blessed Wizard Oil Reward (#9334)"
    { 9335, 1009335 }, // "Quest: Consecrated Sharpening Stones Reward (#9335)"
    { 9336, 1009336 }, // "Quest: Super Healing Potion Reward (#9336)"
    { 9337, 1009337 }, // "Quest: Super Mana Potion Reward (#9337)"
    { 9339, 1009339 }, // "Quest: A Thief's Reward Reward (#9339)"
    { 9341, 1009341 }, // "Quest: Tabard of the Argent Dawn Reward (#9341)"
    { 9342, 1009342 }, // "Quest: Marauding Crust Bursters Reward (#9342)"
    { 9343, 1009343 }, // "Quest: Tabard of the Argent Dawn Reward (#9343)"
    { 9345, 1009345 }, // "Quest: Preparing the Salve Reward (#9345)"
    { 9348, 1009348 }, // "Quest: Ravager Roundup Reward (#9348)"
    { 9349, 1009349 }, // "Quest: Ravager Egg Roundup Reward (#9349)"
    { 9350, 1009350 }, // "Quest: A Peon's Work is Never Done Reward (#9350)"
    { 9351, 1009351 }, // "Quest: Voidwalkers Gone Wild Reward (#9351)"
    { 9353, 1009353 }, // "Quest: Redeem iCoke Gift Box Voucher Reward (#9353)"
    { 9354, 1009354 }, // "Quest: Searching for New Materials Reward (#9354)"
    { 9355, 1009355 }, // "Quest: A Job for an Intelligent Man Reward (#9355)"
    { 9356, 1009356 }, // "Quest: Smooth as Butter Reward (#9356)"
    { 9361, 1009361 }, // "Quest: Helboar, the Other White Meat Reward (#9361)"
    { 9363, 1009363 }, // "Quest: Warning Fairbreeze Village Reward (#9363)"
    { 9365, 1009365 }, // "Quest: A Thief's Reward Reward (#9365)"
    { 9367, 1009367 }, // "Quest: The Festival of Fire Reward (#9367)"
    { 9368, 1009368 }, // "Quest: The Festival of Fire Reward (#9368)"
    { 9369, 1009369 }, // "Quest: Replenishing the Healing Crystals Reward (#9369)"
    { 9370, 1009370 }, // "Quest: The Cleansing Must Be Stopped Reward (#9370)"
    { 9376, 1009376 }, // "Quest: A Pilgrim's Plight Reward (#9376)"
    { 9382, 1009382 }, // "Quest: The Fate of the Clefthoof Reward (#9382)"
    { 9386, 1009386 }, // "Quest: A Light in Dark Places Reward (#9386)"
    { 9387, 1009387 }, // "Quest: Source of the Corruption Reward (#9387)"
    { 9388, 1009388 }, // "Quest: Flickering Flames in Kalimdor Reward (#9388)"
    { 9389, 1009389 }, // "Quest: Flickering Flames in the Eastern Kingdoms Reward (#9389)"
    { 9391, 1009391 }, // "Quest: Marking the Path Reward (#9391)"
    { 9404, 1009404 }, // "Quest: Recently Living Reward (#9404)"
    { 9418, 1009418 }, // "Quest: Avruu's Orb Reward (#9418)"
    { 9419, 1009419 }, // "Quest: Scouring the Desert Reward (#9419)"
    { 9420, 1009420 }, // "Quest: The Finest Down Reward (#9420)"
    { 9422, 1009422 }, // "Quest: Scouring the Desert Reward (#9422)"
    { 9424, 1009424 }, // "Quest: Makuru's Vengeance Reward (#9424)"
    { 9427, 1009427 }, // "Quest: Cleansing the Waters Reward (#9427)"
    { 9437, 1009437 }, // "Quest: Twilight of the Dawn Runner Reward (#9437)"
    { 9441, 1009441 }, // "Quest: Envoy to the Mag'har Reward (#9441)"
    { 9447, 1009447 }, // "Quest: Administering the Salve Reward (#9447)"
    { 9451, 1009451 }, // "Quest: Call of Earth Reward (#9451)"
    { 9452, 1009452 }, // "Quest: Red Snapper - Very Tasty! Reward (#9452)"
    { 9454, 1009454 }, // "Quest: The Great Moongraze Hunt Reward (#9454)"
    { 9456, 1009456 }, // "Quest: Nightstalker Clean Up, Isle 2... Reward (#9456)"
    { 9460, 1009460 }, // "Quest: Combining Forces Reward (#9460)"
    { 9466, 1009466 }, // "Quest: Wanted: Blacktalon the Savage Reward (#9466)"
    { 9472, 1009472 }, // "Quest: Arelion's Mistress Reward (#9472)"
    { 9488, 1009488 }, // "Quest: A Simple Robe Reward (#9488)"
    { 9489, 1009489 }, // "Quest: Cleansing the Scar Reward (#9489)"
    { 9490, 1009490 }, // "Quest: The Rock Flayer Matriarch Reward (#9490)"
    { 9491, 1009491 }, // "Quest: Greed Reward (#9491)"
    { 9492, 1009492 }, // "Quest: Turning the Tide Reward (#9492)"
    { 9494, 1009494 }, // "Quest: Fel Embers Reward (#9494)"
    { 9495, 1009495 }, // "Quest: The Will of the Warchief Reward (#9495)"
    { 9497, 1009497 }, // "Quest: Emblem of the Fel Horde Reward (#9497)"
    { 9509, 1009509 }, // "Quest: Call of Water Reward (#9509)"
    { 9512, 1009512 }, // "Quest: Cookie's Jumbo Gumbo Reward (#9512)"
    { 9515, 1009515 }, // "Quest: Warlord Sriss'tiz Reward (#9515)"
    { 9522, 1009522 }, // "Quest: Never Again! Reward (#9522)"
    { 9528, 1009528 }, // "Quest: A Cry For Help Reward (#9528)"
    { 9536, 1009536 }, // "Quest: Never Again! Reward (#9536)"
    { 9537, 1009537 }, // "Quest: Show Gnomercy Reward (#9537)"
    { 9544, 1009544 }, // "Quest: The Prophecy of Akida Reward (#9544)"
    { 9545, 1009545 }, // "Quest: The Seer's Relic Reward (#9545)"
    { 9546, 1009546 }, // "Quest: Fulfilling a Promise Reward (#9546)"
    { 9549, 1009549 }, // "Quest: Artifacts of the Blacksilt Reward (#9549)"
    { 9554, 1009554 }, // "Quest: Call of Air Reward (#9554)"
    { 9555, 1009555 }, // "Quest: Call of Fire Reward (#9555)"
    { 9560, 1009560 }, // "Quest: Beasts of the Apocalypse! Reward (#9560)"
    { 9561, 1009561 }, // "Quest: Nolkai's Words Reward (#9561)"
    { 9564, 1009564 }, // "Quest: Gurf's Dignity Reward (#9564)"
    { 9569, 1009569 }, // "Quest: Containing the Threat Reward (#9569)"
    { 9571, 1009571 }, // "Quest: The Kurken's Hide Reward (#9571)"
    { 9572, 1009572 }, // "Quest: Weaken the Ramparts Reward (#9572)"
    { 9573, 1009573 }, // "Quest: Chieftain Oomooroo Reward (#9573)"
    { 9575, 1009575 }, // "Quest: Weaken the Ramparts Reward (#9575)"
    { 9579, 1009579 }, // "Quest: Galaen's Fate Reward (#9579)"
    { 9581, 1009581 }, // "Quest: Learning from the Crystals Reward (#9581)"
    { 9586, 1009586 }, // "Quest: Help Tavara Reward (#9586)"
    { 9589, 1009589 }, // "Quest: The Blood is Life Reward (#9589)"
    { 9590, 1009590 }, // "Quest: The Blood is Life Reward (#9590)"
    { 9595, 1009595 }, // "Quest: Control Reward (#9595)"
    { 9607, 1009607 }, // "Quest: Heart of Rage Reward (#9607)"
    { 9608, 1009608 }, // "Quest: Heart of Rage Reward (#9608)"
    { 9616, 1009616 }, // "Quest: Bandits! Reward (#9616)"
    { 9618, 1009618 }, // "Quest: Return the Reports Reward (#9618)"
    { 9624, 1009624 }, // "Quest: A Favorite Treat Reward (#9624)"
    { 9628, 1009628 }, // "Quest: Salvaging the Data Reward (#9628)"
    { 9629, 1009629 }, // "Quest: Catch and Release Reward (#9629)"
    { 9634, 1009634 }, // "Quest: Alien Predators Reward (#9634)"
    { 9635, 1009635 }, // "Quest: The Zapthrottle Mote Extractor! Reward (#9635)"
    { 9636, 1009636 }, // "Quest: The Zapthrottle Mote Extractor! Reward (#9636)"
    { 9641, 1009641 }, // "Quest: Irradiated Crystal Shards Reward (#9641)"
    { 9642, 1009642 }, // "Quest: More Irradiated Crystal Shards Reward (#9642)"
    { 9644, 1009644 }, // "Quest: Nightbane Reward (#9644)"
    { 9646, 1009646 }, // "Quest: WANTED: Deathclaw Reward (#9646)"
    { 9647, 1009647 }, // "Quest: Culling the Flutterers Reward (#9647)"
    { 9648, 1009648 }, // "Quest: Mac'Aree Mushroom Menagerie Reward (#9648)"
    { 9649, 1009649 }, // "Quest: Ysera's Tears Reward (#9649)"
    { 9666, 1009666 }, // "Quest: Declaration of Power Reward (#9666)"
    { 9667, 1009667 }, // "Quest: Saving Princess Stillpine Reward (#9667)"
    { 9670, 1009670 }, // "Quest: They're Alive! Maybe... Reward (#9670)"
    { 9673, 1009673 }, // "Quest: Beast Training Reward (#9673)"
    { 9675, 1009675 }, // "Quest: Beast Training Reward (#9675)"
    { 9683, 1009683 }, // "Quest: Ending the Bloodcurse Reward (#9683)"
    { 9689, 1009689 }, // "Quest: Razormaw Reward (#9689)"
    { 9694, 1009694 }, // "Quest: Blood Watch Reward (#9694)"
    { 9700, 1009700 }, // "Quest: I Shoot Magic Into the Darkness Reward (#9700)"
    { 9703, 1009703 }, // "Quest: The Cryo-Core Reward (#9703)"
    { 9709, 1009709 }, // "Quest: Stealing Back the Mushrooms Reward (#9709)"
    { 9710, 1009710 }, // "Quest: The Blood-Tempered Ranseur Reward (#9710)"
    { 9711, 1009711 }, // "Quest: Matis the Cruel Reward (#9711)"
    { 9717, 1009717 }, // "Quest: Oh, It's On! Reward (#9717)"
    { 9719, 1009719 }, // "Quest: Stalk the Stalker Reward (#9719)"
    { 9726, 1009726 }, // "Quest: Now That We're Friends... Reward (#9726)"
    { 9728, 1009728 }, // "Quest: A Warm Welcome Reward (#9728)"
    { 9729, 1009729 }, // "Quest: Fhwoor Smash! Reward (#9729)"
    { 9730, 1009730 }, // "Quest: Leader of the Darkcrest Reward (#9730)"
    { 9731, 1009731 }, // "Quest: Drain Schematics Reward (#9731)"
    { 9732, 1009732 }, // "Quest: Return to the Marsh Reward (#9732)"
    { 9734, 1009734 }, // "Quest: Return to the Marsh Reward (#9734)"
    { 9737, 1009737 }, // "Quest: True Masters of the Light Reward (#9737)"
    { 9738, 1009738 }, // "Quest: Lost in Action Reward (#9738)"
    { 9752, 1009752 }, // "Quest: Escape from Umbrafen Reward (#9752)"
    { 9759, 1009759 }, // "Quest: Ending Their World Reward (#9759)"
    { 9761, 1009761 }, // "Quest: Clearing the Way Reward (#9761)"
    { 9762, 1009762 }, // "Quest: The Unwritten Prophecy Reward (#9762)"
    { 9763, 1009763 }, // "Quest: The Warlord's Hideout Reward (#9763)"
    { 9772, 1009772 }, // "Quest: Jyoba's Report Reward (#9772)"
    { 9783, 1009783 }, // "Quest: An Unnatural Drought Reward (#9783)"
    { 9784, 1009784 }, // "Quest: Identify Plant Parts Reward (#9784)"
    { 9788, 1009788 }, // "Quest: A Damp, Dark Place Reward (#9788)"
    { 9800, 1009800 }, // "Quest: A Rare Bean Reward (#9800)"
    { 9802, 1009802 }, // "Quest: Plants of Zangarmarsh Reward (#9802)"
    { 9803, 1009803 }, // "Quest: Messenger to the Feralfen Reward (#9803)"
    { 9806, 1009806 }, // "Quest: Fertile Spores Reward (#9806)"
    { 9807, 1009807 }, // "Quest: More Fertile Spores Reward (#9807)"
    { 9810, 1009810 }, // "Quest: The Spirit Polluted Reward (#9810)"
    { 9815, 1009815 }, // "Quest: Muck Diving Reward (#9815)"
    { 9816, 1009816 }, // "Quest: Have You Ever Seen One of These? Reward (#9816)"
    { 9817, 1009817 }, // "Quest: Leader of the Bloodscale Reward (#9817)"
    { 9823, 1009823 }, // "Quest: Us or Them Reward (#9823)"
    { 9833, 1009833 }, // "Quest: Lines of Communication Reward (#9833)"
    { 9837, 1009837 }, // "Quest: Return to Khadgar Reward (#9837)"
    { 9839, 1009839 }, // "Quest: Overlord Gorefist Reward (#9839)"
    { 9842, 1009842 }, // "Quest: The Sharpest Blades Reward (#9842)"
    { 9847, 1009847 }, // "Quest: A Spirit Ally? Reward (#9847)"
    { 9848, 1009848 }, // "Quest: Secrets of the Daggerfen Reward (#9848)"
    { 9851, 1009851 }, // "Quest: Clefthoof Mastery Reward (#9851)"
    { 9852, 1009852 }, // "Quest: The Ultimate Bloodsport Reward (#9852)"
    { 9853, 1009853 }, // "Quest: Gurok the Usurper Reward (#9853)"
    { 9856, 1009856 }, // "Quest: Windroc Mastery Reward (#9856)"
    { 9859, 1009859 }, // "Quest: Talbuk Mastery Reward (#9859)"
    { 9860, 1009860 }, // "Quest: The New Directive Reward (#9860)"
    { 9862, 1009862 }, // "Quest: Murkblood Corrupters Reward (#9862)"
    { 9863, 1009863 }, // "Quest: Vile Idolatry Reward (#9863)"
    { 9866, 1009866 }, // "Quest: He Will Walk The Earth... Reward (#9866)"
    { 9867, 1009867 }, // "Quest: Murkblood Leaders... Reward (#9867)"
    { 9873, 1009873 }, // "Quest: Ortor My Old Friend... Reward (#9873)"
    { 9874, 1009874 }, // "Quest: Stopping the Spread Reward (#9874)"
    { 9878, 1009878 }, // "Quest: Solving the Problem Reward (#9878)"
    { 9880, 1009880 }, // "Quest: Hellfire Penninsula: -pn - A - ToWoW - Hellfire Turnin Cap Reward (#9880)"
    { 9881, 1009881 }, // "Quest: Hellfire Penninsula: -pn - H - ToWoW - Hellfire Turnin Cap Reward (#9881)"
    { 9884, 1009884 }, // "Quest: Membership Benefits Reward (#9884)"
    { 9885, 1009885 }, // "Quest: Membership Benefits Reward (#9885)"
    { 9886, 1009886 }, // "Quest: Membership Benefits Reward (#9886)"
    { 9887, 1009887 }, // "Quest: Membership Benefits Reward (#9887)"
    { 9896, 1009896 }, // "Quest: Blacksting's Bane Reward (#9896)"
    { 9898, 1009898 }, // "Quest: Nothin' Says Lovin' Like a Big Stinger Reward (#9898)"
    { 9899, 1009899 }, // "Quest: A Job Undone Reward (#9899)"
    { 9900, 1009900 }, // "Quest: Gava'xi Reward (#9900)"
    { 9901, 1009901 }, // "Quest: Unfinished Business Reward (#9901)"
    { 9902, 1009902 }, // "Quest: The Terror of Marshlight Lake Reward (#9902)"
    { 9903, 1009903 }, // "Quest: The Biggest of Them All Reward (#9903)"
    { 9904, 1009904 }, // "Quest: Pursuing Terrorclaw Reward (#9904)"
    { 9905, 1009905 }, // "Quest: Maktu's Revenge Reward (#9905)"
    { 9907, 1009907 }, // "Quest: An Audacious Advance Reward (#9907)"
    { 9908, 1009908 }, // "Quest: Hellfire Penninsula: -pn - A - ToWoW - Hellfire Turnin Reward (#9908)"
    { 9909, 1009909 }, // "Quest: Hellfire Penninsula: -pn - H - ToWoW - Hellfire Turnin Reward (#9909)"
    { 9916, 1009916 }, // "Quest: Bleeding Hollow Supply Crates Reward (#9916)"
    { 9922, 1009922 }, // "Quest: The Twin Clefts of Nagrand Reward (#9922)"
    { 9924, 1009924 }, // "Quest: Corki's Gone Missing Again! Reward (#9924)"
    { 9933, 1009933 }, // "Quest: Message to Telaar Reward (#9933)"
    { 9934, 1009934 }, // "Quest: Message to Garadar Reward (#9934)"
    { 9937, 1009937 }, // "Quest: Wanted: Durn the Hungerer Reward (#9937)"
    { 9938, 1009938 }, // "Quest: Wanted: Durn the Hungerer Reward (#9938)"
    { 9943, 1009943 }, // "Quest: Return to Thander Reward (#9943)"
    { 9946, 1009946 }, // "Quest: Cho'war the Pillager Reward (#9946)"
    { 9947, 1009947 }, // "Quest: Return to Rokag Reward (#9947)"
    { 9948, 1009948 }, // "Quest: Finding the Survivors Reward (#9948)"
    { 9951, 1009951 }, // "Quest: It's Watching You! Reward (#9951)"
    { 9955, 1009955 }, // "Quest: Cho'war the Pillager Reward (#9955)"
    { 9956, 1009956 }, // "Quest: The Ravaged Caravan Reward (#9956)"
    { 9969, 1009969 }, // "Quest: The Final Reagents Reward (#9969)"
    { 9970, 1009970 }, // "Quest: The Ring of Blood: Rokdar the Sundered Lord Reward (#9970)"
    { 9972, 1009972 }, // "Quest: The Ring of Blood: Skra'gath Reward (#9972)"
    { 9974, 1009974 }, // "Quest: The Final Reagents Reward (#9974)"
    { 9977, 1009977 }, // "Quest: The Ring of Blood: The Final Challenge Reward (#9977)"
    { 9980, 1009980 }, // "Quest: Rescue Deirom! Reward (#9980)"
    { 9981, 1009981 }, // "Quest: Rescue Dugar! Reward (#9981)"
    { 9986, 1009986 }, // "Quest: Stymying the Arakkoa Reward (#9986)"
    { 9987, 1009987 }, // "Quest: Stymying the Arakkoa Reward (#9987)"
    { 9988, 1009988 }, // "Quest: A Dandy's Best Friend Reward (#9988)"
    { 9989, 1009989 }, // "Quest: Alien Spirits Reward (#9989)"
    { 10005, 1010005 }, // "Quest: Letting Earthbinder Tavgren Know Reward (#10005)"
    { 10006, 1010006 }, // "Quest: Letting Earthbinder Tavgren Know Reward (#10006)"
    { 10007, 1010007 }, // "Quest: Thinning the Ranks Reward (#10007)"
    { 10008, 1010008 }, // "Quest: What Happens in Terokkar Stays in Terokkar Reward (#10008)"
    { 10011, 1010011 }, // "Quest: Forge Camp: Annihilated Reward (#10011)"
    { 10022, 1010022 }, // "Quest: The Elusive Ironjaw Reward (#10022)"
    { 10031, 1010031 }, // "Quest: Helping the Lost Find Their Way Reward (#10031)"
    { 10035, 1010035 }, // "Quest: Torgos! Reward (#10035)"
    { 10036, 1010036 }, // "Quest: Torgos! Reward (#10036)"
    { 10037, 1010037 }, // "Quest: Rather Be Fishin' Reward (#10037)"
    { 10042, 1010042 }, // "Quest: Kill the Shadow Council! Reward (#10042)"
    { 10043, 1010043 }, // "Quest: Kill the Shadow Council! Reward (#10043)"
    { 10051, 1010051 }, // "Quest: Escape from Firewing Point! Reward (#10051)"
    { 10052, 1010052 }, // "Quest: Escape from Firewing Point! Reward (#10052)"
    { 10055, 1010055 }, // "Quest: Waste Not, Want Not Reward (#10055)"
    { 10057, 1010057 }, // "Quest: Looking to the Leadership Reward (#10057)"
    { 10062, 1010062 }, // "Quest: Looking to the Leadership Reward (#10062)"
    { 10074, 1010074 }, // "Quest: Oshu'gun Crystal Powder Reward (#10074)"
    { 10075, 1010075 }, // "Quest: Oshu'gun Crystal Powder Reward (#10075)"
    { 10076, 1010076 }, // "Quest: Oshu'gun Crystal Powder Reward (#10076)"
    { 10077, 1010077 }, // "Quest: Oshu'gun Crystal Powder Reward (#10077)"
    { 10078, 1010078 }, // "Quest: Laying Waste to the Unwanted Reward (#10078)"
    { 10084, 1010084 }, // "Quest: Assault on Mageddon Reward (#10084)"
    { 10086, 1010086 }, // "Quest: I Work... For the Horde! Reward (#10086)"
    { 10087, 1010087 }, // "Quest: Burn It Up... For the Horde! Reward (#10087)"
    { 10091, 1010091 }, // "Quest: The Soul Devices Reward (#10091)"
    { 10092, 1010092 }, // "Quest: Assault on Mageddon Reward (#10092)"
    { 10095, 1010095 }, // "Quest: Into the Heart of the Labyrinth Reward (#10095)"
    { 10096, 1010096 }, // "Quest: Saving the Sporeloks Reward (#10096)"
    { 10097, 1010097 }, // "Quest: Brother Against Brother Reward (#10097)"
    { 10098, 1010098 }, // "Quest: Terokk's Legacy Reward (#10098)"
    { 10099, 1010099 }, // "Quest: The Mastermind Reward (#10099)"
    { 10100, 1010100 }, // "Quest: The Mastermind Reward (#10100)"
    { 10106, 1010106 }, // "Quest: Hellfire Fortifications Reward (#10106)"
    { 10109, 1010109 }, // "Quest: I Must Have Them! Reward (#10109)"
    { 10110, 1010110 }, // "Quest: Hellfire Fortifications Reward (#10110)"
    { 10111, 1010111 }, // "Quest: Bring Me The Egg! Reward (#10111)"
    { 10112, 1010112 }, // "Quest: A Personal Favor Reward (#10112)"
    { 10123, 1010123 }, // "Quest: Felspark Ravine Reward (#10123)"
    { 10129, 1010129 }, // "Quest: Mission: Gateways Murketh and Shaadraz Reward (#10129)"
    { 10132, 1010132 }, // "Quest: Colossal Menace Reward (#10132)"
    { 10136, 1010136 }, // "Quest: Cruel's Intentions Reward (#10136)"
    { 10137, 1010137 }, // "Quest: Provoking the Warboss Reward (#10137)"
    { 10139, 1010139 }, // "Quest: Dispatching the Commander Reward (#10139)"
    { 10142, 1010142 }, // "Quest: The Path of Anguish Reward (#10142)"
    { 10144, 1010144 }, // "Quest: Disrupt Their Reinforcements Reward (#10144)"
    { 10146, 1010146 }, // "Quest: Mission: The Murketh and Shaadraz Gateways Reward (#10146)"
    { 10149, 1010149 }, // "Quest: Mission: End All, Be All Reward (#10149)"
    { 10155, 1010155 }, // "Quest: Provoking the Warboss Reward (#10155)"
    { 10157, 1010157 }, // "Quest: Dispatching the Commander Reward (#10157)"
    { 10161, 1010161 }, // "Quest: In Case of Emergency... Reward (#10161)"
    { 10162, 1010162 }, // "Quest: Mission: The Abyssal Shelf Reward (#10162)"
    { 10163, 1010163 }, // "Quest: Mission: The Abyssal Shelf Reward (#10163)"
    { 10164, 1010164 }, // "Quest: Everything Will Be Alright Reward (#10164)"
    { 10165, 1010165 }, // "Quest: Undercutting the Competition Reward (#10165)"
    { 10176, 1010176 }, // "Quest: Ar'kelos the Guardian Reward (#10176)"
    { 10185, 1010185 }, // "Quest: A Fate Worse Than Death Reward (#10185)"
    { 10186, 1010186 }, // "Quest: You're Hired! Reward (#10186)"
    { 10188, 1010188 }, // "Quest: The Sigil of Krasus Reward (#10188)"
    { 10191, 1010191 }, // "Quest: Mark V is Alive! Reward (#10191)"
    { 10195, 1010195 }, // "Quest: Mercenary See, Mercenary Do Reward (#10195)"
    { 10196, 1010196 }, // "Quest: More Arakkoa Feathers Reward (#10196)"
    { 10198, 1010198 }, // "Quest: Information Gathering Reward (#10198)"
    { 10199, 1010199 }, // "Quest: That Little Extra Kick Reward (#10199)"
    { 10201, 1010201 }, // "Quest: And Now, the Moment of Truth Reward (#10201)"
    { 10205, 1010205 }, // "Quest: Warp-Raider Nesaad Reward (#10205)"
    { 10206, 1010206 }, // "Quest: Pick Your Part Reward (#10206)"
    { 10208, 1010208 }, // "Quest: Disrupt Their Reinforcements Reward (#10208)"
    { 10212, 1010212 }, // "Quest: Hero of the Mag'har Reward (#10212)"
    { 10218, 1010218 }, // "Quest: Someone Else's Hard Work Pays Off Reward (#10218)"
    { 10221, 1010221 }, // "Quest: Dr. Boom! Reward (#10221)"
    { 10223, 1010223 }, // "Quest: Down With Daellis Reward (#10223)"
    { 10226, 1010226 }, // "Quest: Elemental Power Extraction Reward (#10226)"
    { 10235, 1010235 }, // "Quest: Declawing Doomclaw Reward (#10235)"
    { 10236, 1010236 }, // "Quest: Outland Sucks! Reward (#10236)"
    { 10238, 1010238 }, // "Quest: How to Serve Goblins Reward (#10238)"
    { 10240, 1010240 }, // "Quest: Building a Perimeter Reward (#10240)"
    { 10249, 1010249 }, // "Quest: Back to the Chief! Reward (#10249)"
    { 10253, 1010253 }, // "Quest: Levixus the Soul Caller Reward (#10253)"
    { 10255, 1010255 }, // "Quest: Testing the Antidote Reward (#10255)"
    { 10258, 1010258 }, // "Quest: Honor the Fallen Reward (#10258)"
    { 10259, 1010259 }, // "Quest: Into the Breach Reward (#10259)"
    { 10261, 1010261 }, // "Quest: Wanted: Annihilator Servo! Reward (#10261)"
    { 10267, 1010267 }, // "Quest: Rightful Repossession Reward (#10267)"
    { 10274, 1010274 }, // "Quest: Securing the Celestial Ridge Reward (#10274)"
    { 10280, 1010280 }, // "Quest: Special Delivery to Shattrath City Reward (#10280)"
    { 10285, 1010285 }, // "Quest: Return to Andormu Reward (#10285)"
    { 10293, 1010293 }, // "Quest: Hitting the Motherlode Reward (#10293)"
    { 10295, 1010295 }, // "Quest: From the Abyss Reward (#10295)"
    { 10298, 1010298 }, // "Quest: Hero of the Brood Reward (#10298)"
    { 10303, 1010303 }, // "Quest: The Blood Elves Reward (#10303)"
    { 10309, 1010309 }, // "Quest: It's a Fel Reaver, But with Heart Reward (#10309)"
    { 10310, 1010310 }, // "Quest: Sabotage the Warp-Gate! Reward (#10310)"
    { 10313, 1010313 }, // "Quest: Measuring Warp Energies Reward (#10313)"
    { 10318, 1010318 }, // "Quest: Dealing with the Overmaster Reward (#10318)"
    { 10320, 1010320 }, // "Quest: Destroy Naberius! Reward (#10320)"
    { 10323, 1010323 }, // "Quest: Shutting Down Manaforge Ara Reward (#10323)"
    { 10324, 1010324 }, // "Quest: The Great Moongraze Hunt Reward (#10324)"
    { 10332, 1010332 }, // "Quest: Master Smith Rhonsus Reward (#10332)"
    { 10335, 1010335 }, // "Quest: Surveying the Ruins Reward (#10335)"
    { 10337, 1010337 }, // "Quest: When the Cows Come Home Reward (#10337)"
    { 10341, 1010341 }, // "Quest: Kick Them While They're Down Reward (#10341)"
    { 10345, 1010345 }, // "Quest: The Flesh Lies... Reward (#10345)"
    { 10350, 1010350 }, // "Quest: Behomat Reward (#10350)"
    { 10351, 1010351 }, // "Quest: Natural Remedies Reward (#10351)"
    { 10353, 1010353 }, // "Quest: Arconus the Insatiable Reward (#10353)"
    { 10365, 1010365 }, // "Quest: Shutting Down Manaforge Ara Reward (#10365)"
    { 10381, 1010381 }, // "Quest: Aldor No More Reward (#10381)"
    { 10400, 1010400 }, // "Quest: Overlord Reward (#10400)"
    { 10401, 1010401 }, // "Quest: Mission: End All, Be All Reward (#10401)"
    { 10406, 1010406 }, // "Quest: Delivering the Message Reward (#10406)"
    { 10408, 1010408 }, // "Quest: Nexus-King Salhadaar Reward (#10408)"
    { 10409, 1010409 }, // "Quest: Deathblow to the Legion Reward (#10409)"
    { 10413, 1010413 }, // "Quest: The Horrors of Pollution Reward (#10413)"
    { 10416, 1010416 }, // "Quest: Synthesis of Power Reward (#10416)"
    { 10419, 1010419 }, // "Quest: Arcane Tomes Reward (#10419)"
    { 10420, 1010420 }, // "Quest: A Cleansing Light Reward (#10420)"
    { 10421, 1010421 }, // "Quest: Fel Armaments Reward (#10421)"
    { 10425, 1010425 }, // "Quest: Escape from the Staging Grounds Reward (#10425)"
    { 10435, 1010435 }, // "Quest: Retrieving the Goods Reward (#10435)"
    { 10439, 1010439 }, // "Quest: Dimensius the All-Devouring Reward (#10439)"
    { 10440, 1010440 }, // "Quest: Success! Reward (#10440)"
    { 10446, 1010446 }, // "Quest: The Final Code Reward (#10446)"
    { 10447, 1010447 }, // "Quest: The Final Code Reward (#10447)"
    { 10450, 1010450 }, // "Quest: Bonechewer Blood Reward (#10450)"
    { 10451, 1010451 }, // "Quest: Escape from Coilskar Cistern Reward (#10451)"
    { 10457, 1010457 }, // "Quest: Protecting Our Own Reward (#10457)"
    { 10460, 1010460 }, // "Quest: Defender's Pledge Reward (#10460)"
    { 10461, 1010461 }, // "Quest: Restorer's Pledge Reward (#10461)"
    { 10462, 1010462 }, // "Quest: Champion's Pledge Reward (#10462)"
    { 10463, 1010463 }, // "Quest: Sage's Pledge Reward (#10463)"
    { 10464, 1010464 }, // "Quest: Sage's Vow Reward (#10464)"
    { 10465, 1010465 }, // "Quest: Restorer's Vow Reward (#10465)"
    { 10466, 1010466 }, // "Quest: Champion's Vow Reward (#10466)"
    { 10467, 1010467 }, // "Quest: Defender's Vow Reward (#10467)"
    { 10468, 1010468 }, // "Quest: Sage's Oath Reward (#10468)"
    { 10469, 1010469 }, // "Quest: Restorer's Oath Reward (#10469)"
    { 10470, 1010470 }, // "Quest: Champion's Oath Reward (#10470)"
    { 10471, 1010471 }, // "Quest: Defender's Oath Reward (#10471)"
    { 10472, 1010472 }, // "Quest: Sage's Covenant Reward (#10472)"
    { 10473, 1010473 }, // "Quest: Restorer's Covenant Reward (#10473)"
    { 10474, 1010474 }, // "Quest: Champion's Covenant Reward (#10474)"
    { 10475, 1010475 }, // "Quest: Defender's Covenant Reward (#10475)"
    { 10481, 1010481 }, // "Quest: Enraged Spirits of Air Reward (#10481)"
    { 10482, 1010482 }, // "Quest: Fel Orc Scavengers Reward (#10482)"
    { 10488, 1010488 }, // "Quest: Protecting Our Own Reward (#10488)"
    { 10489, 1010489 }, // "Quest: Felling an Ancient Tree Reward (#10489)"
    { 10492, 1010492 }, // "Quest: An Earnest Proposition Reward (#10492)"
    { 10493, 1010493 }, // "Quest: An Earnest Proposition Reward (#10493)"
    { 10494, 1010494 }, // "Quest: Just Compensation Reward (#10494)"
    { 10495, 1010495 }, // "Quest: Just Compensation Reward (#10495)"
    { 10496, 1010496 }, // "Quest: Anthion's Parting Words Reward (#10496)"
    { 10497, 1010497 }, // "Quest: Anthion's Parting Words Reward (#10497)"
    { 10498, 1010498 }, // "Quest: Saving the Best for Last Reward (#10498)"
    { 10499, 1010499 }, // "Quest: Saving the Best for Last Reward (#10499)"
    { 10504, 1010504 }, // "Quest: The Bladespire Ogres Reward (#10504)"
    { 10505, 1010505 }, // "Quest: The Bloodmaul Ogres Reward (#10505)"
    { 10507, 1010507 }, // "Quest: Turning Point Reward (#10507)"
    { 10510, 1010510 }, // "Quest: Into the Draenethyst Mine Reward (#10510)"
    { 10514, 1010514 }, // "Quest: I Was A Lot Of Things... Reward (#10514)"
    { 10518, 1010518 }, // "Quest: Planting the Banner Reward (#10518)"
    { 10523, 1010523 }, // "Quest: The Cipher of Damnation - The First Fragment Recovered Reward (#10523)"
    { 10526, 1010526 }, // "Quest: The Thunderspike Reward (#10526)"
    { 10541, 1010541 }, // "Quest: The Cipher of Damnation - The Second Fragment Recovered Reward (#10541)"
    { 10544, 1010544 }, // "Quest: A Curse Upon Both of Your Clans! Reward (#10544)"
    { 10548, 1010548 }, // "Quest: The Sad Truth Reward (#10548)"
    { 10549, 1010549 }, // "Quest: REUSE Reward (#10549)"
    { 10564, 1010564 }, // "Quest: Blast the Infernals! Reward (#10564)"
    { 10579, 1010579 }, // "Quest: The Cipher of Damnation - The Third Fragment Recovered Reward (#10579)"
    { 10588, 1010588 }, // "Quest: The Cipher of Damnation Reward (#10588)"
    { 10591, 1010591 }, // "Quest: DESTROY THIS QUEST! Reward (#10591)"
    { 10593, 1010593 }, // "Quest: Ancient Evil Reward (#10593)"
    { 10594, 1010594 }, // "Quest: Gauging the Resonant Frequency Reward (#10594)"
    { 10598, 1010598 }, // "Quest: Blast the Infernals! Reward (#10598)"
    { 10607, 1010607 }, // "Quest: Whispers of the Raven God Reward (#10607)"
    { 10609, 1010609 }, // "Quest: What Came First, the Drake or the Egg? Reward (#10609)"
    { 10620, 1010620 }, // "Quest: Ridgespine Menace Reward (#10620)"
    { 10626, 1010626 }, // "Quest: Capture the Weapons Reward (#10626)"
    { 10627, 1010627 }, // "Quest: Capture the Weapons Reward (#10627)"
    { 10629, 1010629 }, // "Quest: Shizz Work Reward (#10629)"
    { 10630, 1010630 }, // "Quest: Beneath Thrallmar Reward (#10630)"
    { 10632, 1010632 }, // "Quest: Cutting Your Teeth Reward (#10632)"
    { 10639, 1010639 }, // "Quest: Teron Gorefiend, I am... Reward (#10639)"
    { 10645, 1010645 }, // "Quest: Teron Gorefiend, I am... Reward (#10645)"
    { 10647, 1010647 }, // "Quest: Wanted: Uvuros, Scourge of Shadowmoon Reward (#10647)"
    { 10648, 1010648 }, // "Quest: Wanted: Uvuros, Scourge of Shadowmoon Reward (#10648)"
    { 10651, 1010651 }, // "Quest: Varedis Must Be Stopped Reward (#10651)"
    { 10657, 1010657 }, // "Quest: Ride the Lightning Reward (#10657)"
    { 10675, 1010675 }, // "Quest: Show Them Gnome Mercy! Reward (#10675)"
    { 10679, 1010679 }, // "Quest: Quenching the Blade Reward (#10679)"
    { 10690, 1010690 }, // "Quest: The Den Mother Reward (#10690)"
    { 10692, 1010692 }, // "Quest: Varedis Must Be Stopped Reward (#10692)"
    { 10701, 1010701 }, // "Quest: Breaking Down Netherock Reward (#10701)"
    { 10704, 1010704 }, // "Quest: How to Break Into the Arcatraz Reward (#10704)"
    { 10708, 1010708 }, // "Quest: Akama's Promise Reward (#10708)"
    { 10713, 1010713 }, // "Quest: ...and a Time for Action Reward (#10713)"
    { 10715, 1010715 }, // "Quest: Into the Churning Gulch Reward (#10715)"
    { 10723, 1010723 }, // "Quest: Gorgrom the Dragon-Eater Reward (#10723)"
    { 10725, 1010725 }, // "Quest: Eminence Among the Violet Eye Reward (#10725)"
    { 10726, 1010726 }, // "Quest: Eminence Among the Violet Eye Reward (#10726)"
    { 10727, 1010727 }, // "Quest: Eminence Among the Violet Eye Reward (#10727)"
    { 10728, 1010728 }, // "Quest: Eminence Among the Violet Eye Reward (#10728)"
    { 10729, 1010729 }, // "Quest: Path of the Violet Mage Reward (#10729)"
    { 10730, 1010730 }, // "Quest: Path of the Violet Restorer Reward (#10730)"
    { 10731, 1010731 }, // "Quest: Path of the Violet Assassin Reward (#10731)"
    { 10732, 1010732 }, // "Quest: Path of the Violet Protector Reward (#10732)"
    { 10733, 1010733 }, // "Quest: Down the Violet Path Reward (#10733)"
    { 10734, 1010734 }, // "Quest: Down the Violet Path Reward (#10734)"
    { 10735, 1010735 }, // "Quest: Down the Violet Path Reward (#10735)"
    { 10736, 1010736 }, // "Quest: Down the Violet Path Reward (#10736)"
    { 10738, 1010738 }, // "Quest: Distinguished Service Reward (#10738)"
    { 10739, 1010739 }, // "Quest: Distinguished Service Reward (#10739)"
    { 10740, 1010740 }, // "Quest: Distinguished Service Reward (#10740)"
    { 10741, 1010741 }, // "Quest: Distinguished Service Reward (#10741)"
    { 10742, 1010742 }, // "Quest: Showdown Reward (#10742)"
    { 10744, 1010744 }, // "Quest: News of Victory Reward (#10744)"
    { 10745, 1010745 }, // "Quest: News of Victory Reward (#10745)"
    { 10747, 1010747 }, // "Quest: Whelps of the Wyrmcult Reward (#10747)"
    { 10748, 1010748 }, // "Quest: Maxnar Must Die! Reward (#10748)"
    { 10758, 1010758 }, // "Quest: Hotter than Hell Reward (#10758)"
    { 10764, 1010764 }, // "Quest: Hotter than Hell Reward (#10764)"
    { 10769, 1010769 }, // "Quest: Dissension Amongst the Ranks... Reward (#10769)"
    { 10771, 1010771 }, // "Quest: From the Ashes Reward (#10771)"
    { 10776, 1010776 }, // "Quest: Dissension Amongst the Ranks... Reward (#10776)"
    { 10781, 1010781 }, // "Quest: Battle of the Crimson Watch Reward (#10781)"
    { 10784, 1010784 }, // "Quest: Crush the Bloodmaul Camp Reward (#10784)"
    { 10791, 1010791 }, // "Quest: Welcoming the Wolf Spirit Reward (#10791)"
    { 10792, 1010792 }, // "Quest: Zeth'Gor Must Burn! Reward (#10792)"
    { 10796, 1010796 }, // "Quest: Crush the Bloodmaul Camp! Reward (#10796)"
    { 10799, 1010799 }, // "Quest: Into the Churning Gulch Reward (#10799)"
    { 10802, 1010802 }, // "Quest: Gorgrom the Dragon-Eater Reward (#10802)"
    { 10806, 1010806 }, // "Quest: Showdown Reward (#10806)"
    { 10808, 1010808 }, // "Quest: Thwart the Dark Conclave Reward (#10808)"
    { 10816, 1010816 }, // "Quest: Reclaiming Holy Grounds Reward (#10816)"
    { 10817, 1010817 }, // "Quest: The Great Retribution Reward (#10817)"
    { 10821, 1010821 }, // "Quest: You're Fired! Reward (#10821)"
    { 10830, 1010830 }, // "Quest: Exorcising the Trees Reward (#10830)"
    { 10834, 1010834 }, // "Quest: Grillok \"Darkeye\" Reward (#10834)"
    { 10838, 1010838 }, // "Quest: The Demoniac Scryer Reward (#10838)"
    { 10842, 1010842 }, // "Quest: Vengeful Souls Reward (#10842)"
    { 10845, 1010845 }, // "Quest: Slay the Brood Mother Reward (#10845)"
    { 10847, 1010847 }, // "Quest: The Eyes of Skettis Reward (#10847)"
    { 10848, 1010848 }, // "Quest: Veil Rhaze: Unliving Evil Reward (#10848)"
    { 10852, 1010852 }, // "Quest: Missing Friends Reward (#10852)"
    { 10853, 1010853 }, // "Quest: Spirit Calling Reward (#10853)"
    { 10857, 1010857 }, // "Quest: Teleport This! Reward (#10857)"
    { 10860, 1010860 }, // "Quest: Mok'Nathal Treats Reward (#10860)"
    { 10861, 1010861 }, // "Quest: Veil Lithic: Preemptive Strike Reward (#10861)"
    { 10867, 1010867 }, // "Quest: There Can Be Only One Response Reward (#10867)"
    { 10870, 1010870 }, // "Quest: Ally of the Netherwing Reward (#10870)"
    { 10874, 1010874 }, // "Quest: Veil Shalas: Signal Fires Reward (#10874)"
    { 10876, 1010876 }, // "Quest: The Foot of the Citadel Reward (#10876)"
    { 10879, 1010879 }, // "Quest: The Skettis Offensive Reward (#10879)"
    { 10881, 1010881 }, // "Quest: The Shadow Tomb Reward (#10881)"
    { 10882, 1010882 }, // "Quest: Harbinger of Doom Reward (#10882)"
    { 10887, 1010887 }, // "Quest: Escaping the Tomb Reward (#10887)"
    { 10888, 1010888 }, // "Quest: Trial of the Naaru: Magtheridon Reward (#10888)"
    { 10895, 1010895 }, // "Quest: Zeth'Gor Must Burn! Reward (#10895)"
    { 10898, 1010898 }, // "Quest: Skywing Reward (#10898)"
    { 10912, 1010912 }, // "Quest: The Hound-Master Reward (#10912)"
    { 10915, 1010915 }, // "Quest: The Fallen Exarch Reward (#10915)"
    { 10917, 1010917 }, // "Quest: The Outcast's Plight Reward (#10917)"
    { 10918, 1010918 }, // "Quest: More Feathers Reward (#10918)"
    { 10921, 1010921 }, // "Quest: Terokkarantula Reward (#10921)"
    { 10923, 1010923 }, // "Quest: Evil Draws Near Reward (#10923)"
    { 10930, 1010930 }, // "Quest: The Big Bone Worm Reward (#10930)"
    { 10937, 1010937 }, // "Quest: Drill the Drillmaster Reward (#10937)"
    { 10938, 1010938 }, // "Quest: Darkmoon Blessings Deck Reward (#10938)"
    { 10939, 1010939 }, // "Quest: Darkmoon Storms Deck Reward (#10939)"
    { 10940, 1010940 }, // "Quest: Darkmoon Furies Deck Reward (#10940)"
    { 10941, 1010941 }, // "Quest: Darkmoon Lunacy Deck Reward (#10941)"
    { 10959, 1010959 }, // "Quest: The Fall of the Betrayer Reward (#10959)"
    { 10966, 1010966 }, // "Quest: Back to the Orphanage Reward (#10966)"
    { 10967, 1010967 }, // "Quest: Back to the Orphanage Reward (#10967)"
    { 10974, 1010974 }, // "Quest: Stasis Chambers of Bash'ir Reward (#10974)"
    { 10975, 1010975 }, // "Quest: Purging the Chambers of Bash'ir Reward (#10975)"
    { 10977, 1010977 }, // "Quest: Stasis Chambers of the Mana-Tombs Reward (#10977)"
    { 10981, 1010981 }, // "Quest: Nexus-Prince Shaffar's Personal Chamber Reward (#10981)"
    { 10982, 1010982 }, // "Quest: The Eye of Haramad Reward (#10982)"
    { 10985, 1010985 }, // "Quest: A Distraction for Akama Reward (#10985)"
    { 10992, 1010992 }, // "Quest: The Hawk's Essence Reward (#10992)"
    { 11001, 1011001 }, // "Quest: Vanquish the Raven God Reward (#11001)"
    { 11002, 1011002 }, // "Quest: The Fall of Magtheridon Reward (#11002)"
    { 11003, 1011003 }, // "Quest: The Fall of Magtheridon Reward (#11003)"
    { 11004, 1011004 }, // "Quest: World of Shadows Reward (#11004)"
    { 11006, 1011006 }, // "Quest: More Shadow Dust Reward (#11006)"
    { 11007, 1011007 }, // "Quest: Kael'thas and the Verdant Sphere Reward (#11007)"
    { 11011, 1011011 }, // "Quest: Eternal Vigilance Reward (#11011)"
    { 11023, 1011023 }, // "Quest: Bomb Them Again! Reward (#11023)"
    { 11026, 1011026 }, // "Quest: Banish the Demons Reward (#11026)"
    { 11027, 1011027 }, // "Quest: Yous Have Da Darkrune? Reward (#11027)"
    { 11031, 1011031 }, // "Quest: Archmage No More Reward (#11031)"
    { 11032, 1011032 }, // "Quest: Protector No More Reward (#11032)"
    { 11033, 1011033 }, // "Quest: Assassin No More Reward (#11033)"
    { 11034, 1011034 }, // "Quest: Restorer No More Reward (#11034)"
    { 11041, 1011041 }, // "Quest: A Job Unfinished... Reward (#11041)"
    { 11051, 1011051 }, // "Quest: Banish More Demons Reward (#11051)"
    { 11052, 1011052 }, // "Quest: Akama's Promise Reward (#11052)"
    { 11053, 1011053 }, // "Quest: Rise, Overseer! Reward (#11053)"
    { 11060, 1011060 }, // "Quest: A Crystalforged Darkrune Reward (#11060)"
    { 11066, 1011066 }, // "Quest: Wrangle More Aether Rays! Reward (#11066)"
    { 11071, 1011071 }, // "Quest: Dragonmaw Race: Captain Skyshatter Reward (#11071)"
    { 11072, 1011072 }, // "Quest: Adversarial Blood Reward (#11072)"
    { 11073, 1011073 }, // "Quest: Terokk's Downfall Reward (#11073)"
    { 11074, 1011074 }, // "Quest: Tokens of the Descendants Reward (#11074)"
    { 11080, 1011080 }, // "Quest: The Relic's Emanation Reward (#11080)"
    { 11084, 1011084 }, // "Quest: Stand Tall, Captain! Reward (#11084)"
    { 11090, 1011090 }, // "Quest: Subdue the Subduer Reward (#11090)"
    { 11091, 1011091 }, // "Quest: A Special Thank You Reward (#11091)"
    { 11092, 1011092 }, // "Quest: Hail, Commander! Reward (#11092)"
    { 11093, 1011093 }, // "Quest: Hungry Nether Rays Reward (#11093)"
    { 11103, 1011103 }, // "Quest: Sage No More Reward (#11103)"
    { 11104, 1011104 }, // "Quest: Restorer No More Reward (#11104)"
    { 11105, 1011105 }, // "Quest: Champion No More Reward (#11105)"
    { 11106, 1011106 }, // "Quest: Defender No More Reward (#11106)"
    { 11109, 1011109 }, // "Quest: Jorus the Cobalt Netherwing Drake Reward (#11109)"
    { 11110, 1011110 }, // "Quest: Malfas the Purple Netherwing Drake Reward (#11110)"
    { 11111, 1011111 }, // "Quest: Onyxien the Onyx Netherwing Drake Reward (#11111)"
    { 11112, 1011112 }, // "Quest: Suraku the Azure Netherwing Drake Reward (#11112)"
    { 11113, 1011113 }, // "Quest: Voranaku the Violet Netherwing Drake Reward (#11113)"
    { 11114, 1011114 }, // "Quest: Zoya the Veridian Netherwing Drake Reward (#11114)"
    { 11116, 1011116 }, // "Quest: Trial of the Naaru: (QUEST FLAG) Reward (#11116)"
    { 11117, 1011117 }, // "Quest: Catch the Wild Wolpertinger! Reward (#11117)"
    { 11118, 1011118 }, // "Quest: Pink Elekks On Parade Reward (#11118)"
    { 11120, 1011120 }, // "Quest: Pink Elekks On Parade Reward (#11120)"
    { 11122, 1011122 }, // "Quest: There and Back Again Reward (#11122)"
    { 11131, 1011131 }, // "Quest: Stop the Fires! Reward (#11131)"
    { 11132, 1011132 }, // "Quest: Promises, Promises... Reward (#11132)"
    { 11134, 1011134 }, // "Quest: The End of the Deserters Reward (#11134)"
    { 11140, 1011140 }, // "Quest: Recover the Cargo! Reward (#11140)"
    { 11142, 1011142 }, // "Quest: Survey Alcaz Island Reward (#11142)"
    { 11147, 1011147 }, // "Quest: Unleash the Raptors Reward (#11147)"
    { 11148, 1011148 }, // "Quest: Arms of the Grimtotems Reward (#11148)"
    { 11152, 1011152 }, // "Quest: Peace at Last Reward (#11152)"
    { 11154, 1011154 }, // "Quest: Scare the Guano Out of Them! Reward (#11154)"
    { 11155, 1011155 }, // "Quest: Shoveltusk Soup Again? Reward (#11155)"
    { 11156, 1011156 }, // "Quest: Direhorn Raiders Reward (#11156)"
    { 11162, 1011162 }, // "Quest: Challenge to the Black Flight Reward (#11162)"
    { 11163, 1011163 }, // "Quest: Undercover Sister Reward (#11163)"
    { 11167, 1011167 }, // "Quest: The New Plague Reward (#11167)"
    { 11171, 1011171 }, // "Quest: Hex Lord? Hah! Reward (#11171)"
    { 11173, 1011173 }, // "Quest: The Reagent Thief Reward (#11173)"
    { 11174, 1011174 }, // "Quest: Corrosion Prevention Reward (#11174)"
    { 11182, 1011182 }, // "Quest: Root Causes Reward (#11182)"
    { 11183, 1011183 }, // "Quest: Cleansing Witch Hill Reward (#11183)"
    { 11184, 1011184 }, // "Quest: WANTED: Goreclaw the Ravenous Reward (#11184)"
    { 11188, 1011188 }, // "Quest: Two Wrongs... Reward (#11188)"
    { 11195, 1011195 }, // "Quest: Playin' With Dolls Reward (#11195)"
    { 11198, 1011198 }, // "Quest: Take Down Tethyr! Reward (#11198)"
    { 11200, 1011200 }, // "Quest: More than Coincidence Reward (#11200)"
    { 11202, 1011202 }, // "Quest: Mission: Eternal Flame Reward (#11202)"
    { 11204, 1011204 }, // "Quest: Return to Krog Reward (#11204)"
    { 11206, 1011206 }, // "Quest: Justice Dispensed Reward (#11206)"
    { 11209, 1011209 }, // "Quest: Nat's Bargain Reward (#11209)"
    { 11217, 1011217 }, // "Quest: Catch a Dragon by the Tail Reward (#11217)"
    { 11219, 1011219 }, // "Quest: Stop the Fires! Reward (#11219)"
    { 11223, 1011223 }, // "Quest: Return to Jaina Reward (#11223)"
    { 11230, 1011230 }, // "Quest: Ambushed! Reward (#11230)"
    { 11233, 1011233 }, // "Quest: Landing the Killing Blow Reward (#11233)"
    { 11236, 1011236 }, // "Quest: Necro Overlord Mezhen Reward (#11236)"
    { 11238, 1011238 }, // "Quest: The Frost Wyrm and its Master Reward (#11238)"
    { 11239, 1011239 }, // "Quest: In Service to the Light Reward (#11239)"
    { 11240, 1011240 }, // "Quest: Leader of the Deranged Reward (#11240)"
    { 11241, 1011241 }, // "Quest: Trail of Fire Reward (#11241)"
    { 11242, 1011242 }, // "Quest: Free at Last! Reward (#11242)"
    { 11244, 1011244 }, // "Quest: Rescuing the Rescuers Reward (#11244)"
    { 11249, 1011249 }, // "Quest: Stop the Ascension! Reward (#11249)"
    { 11250, 1011250 }, // "Quest: All Hail the Conqueror of Skorn! Reward (#11250)"
    { 11252, 1011252 }, // "Quest: Into Utgarde! Reward (#11252)"
    { 11260, 1011260 }, // "Quest: Stop the Ascension! Reward (#11260)"
    { 11261, 1011261 }, // "Quest: The Conqueror of Skorn! Reward (#11261)"
    { 11262, 1011262 }, // "Quest: Ingvar Must Die! Reward (#11262)"
    { 11264, 1011264 }, // "Quest: Necro Overlord Mezhen Reward (#11264)"
    { 11267, 1011267 }, // "Quest: The Frost Wyrm and its Master Reward (#11267)"
    { 11268, 1011268 }, // "Quest: The Walking Dead Reward (#11268)"
    { 11269, 1011269 }, // "Quest: Down to the Wire Reward (#11269)"
    { 11271, 1011271 }, // "Quest: Hasty Preparations Reward (#11271)"
    { 11272, 1011272 }, // "Quest: A Score to Settle Reward (#11272)"
    { 11278, 1011278 }, // "Quest: Return to Valgarde Reward (#11278)"
    { 11280, 1011280 }, // "Quest: Draconis Gastritis Reward (#11280)"
    { 11281, 1011281 }, // "Quest: Mimicking Nature's Call Reward (#11281)"
    { 11282, 1011282 }, // "Quest: A Lesson in Fear Reward (#11282)"
    { 11283, 1011283 }, // "Quest: Baleheim Bodycount Reward (#11283)"
    { 11284, 1011284 }, // "Quest: The Yeti Next Door Reward (#11284)"
    { 11286, 1011286 }, // "Quest: The Artifacts of Steel Gate Reward (#11286)"
    { 11288, 1011288 }, // "Quest: The Shining Light Reward (#11288)"
    { 11290, 1011290 }, // "Quest: Dragonflayer Battle Plans Reward (#11290)"
    { 11292, 1011292 }, // "Quest: Preying Upon the Weak Reward (#11292)"
    { 11293, 1011293 }, // "Quest: Bark for the Barleybrews! Reward (#11293)"
    { 11294, 1011294 }, // "Quest: Bark for the Thunderbrews! Reward (#11294)"
    { 11296, 1011296 }, // "Quest: Rivenwood Captives Reward (#11296)"
    { 11301, 1011301 }, // "Quest: Brains! Brains! Brains! Reward (#11301)"
    { 11305, 1011305 }, // "Quest: A Tailor-Made Formula Reward (#11305)"
    { 11309, 1011309 }, // "Quest: Parts for the Job Reward (#11309)"
    { 11310, 1011310 }, // "Quest: Warning: Some Assembly Required Reward (#11310)"
    { 11319, 1011319 }, // "Quest: Seeds of the Blacksouled Keepers Reward (#11319)"
    { 11321, 1011321 }, // "Quest: Did Someone Say \"Souvenir?\" Reward (#11321)"
    { 11324, 1011324 }, // "Quest: Alpha Worg Reward (#11324)"
    { 11326, 1011326 }, // "Quest: Alpha Worg Reward (#11326)"
    { 11332, 1011332 }, // "Quest: Mission: Plague This! Reward (#11332)"
    { 11344, 1011344 }, // "Quest: Anguish of Nifflevar Reward (#11344)"
    { 11345, 1011345 }, // "Quest: Prizes for Pellets Reward (#11345)"
    { 11354, 1011354 }, // "Quest: Wanted: Nazan's Riding Crop Reward (#11354)"
    { 11360, 1011360 }, // "Quest: Fire Brigade Practice Reward (#11360)"
    { 11361, 1011361 }, // "Quest: Fire Training Reward (#11361)"
    { 11362, 1011362 }, // "Quest: Wanted: Keli'dan's Feathered Stave Reward (#11362)"
    { 11363, 1011363 }, // "Quest: Wanted: Bladefist's Seal Reward (#11363)"
    { 11364, 1011364 }, // "Quest: Wanted: Shattered Hand Centurions Reward (#11364)"
    { 11368, 1011368 }, // "Quest: Wanted: The Heart of Quagmirran Reward (#11368)"
    { 11369, 1011369 }, // "Quest: Wanted: A Black Stalker Egg Reward (#11369)"
    { 11370, 1011370 }, // "Quest: Wanted: The Warlord's Treatise Reward (#11370)"
    { 11371, 1011371 }, // "Quest: Wanted: Coilfang Myrmidons Reward (#11371)"
    { 11372, 1011372 }, // "Quest: Wanted: The Headfeathers of Ikiss Reward (#11372)"
    { 11373, 1011373 }, // "Quest: Wanted: Shaffar's Wondrous Pendant Reward (#11373)"
    { 11374, 1011374 }, // "Quest: Wanted: The Exarch's Soul Gem Reward (#11374)"
    { 11375, 1011375 }, // "Quest: Wanted: Murmur's Whisper Reward (#11375)"
    { 11376, 1011376 }, // "Quest: Wanted: Malicious Instructors Reward (#11376)"
    { 11377, 1011377 }, // "Quest: Revenge is Tasty Reward (#11377)"
    { 11378, 1011378 }, // "Quest: Wanted: The Epoch Hunter's Head Reward (#11378)"
    { 11379, 1011379 }, // "Quest: Super Hot Stew Reward (#11379)"
    { 11380, 1011380 }, // "Quest: Manalicious Reward (#11380)"
    { 11381, 1011381 }, // "Quest: Soup for the Soul Reward (#11381)"
    { 11382, 1011382 }, // "Quest: Wanted: Aeonus's Hourglass Reward (#11382)"
    { 11383, 1011383 }, // "Quest: Wanted: Rift Lords Reward (#11383)"
    { 11384, 1011384 }, // "Quest: Wanted: A Warp Splinter Clipping Reward (#11384)"
    { 11385, 1011385 }, // "Quest: Wanted: Sunseeker Channelers Reward (#11385)"
    { 11386, 1011386 }, // "Quest: Wanted: Pathaleon's Projector Reward (#11386)"
    { 11387, 1011387 }, // "Quest: Wanted: Tempest-Forge Destroyers Reward (#11387)"
    { 11388, 1011388 }, // "Quest: Wanted: The Scroll of Skyriss Reward (#11388)"
    { 11389, 1011389 }, // "Quest: Wanted: Arcatraz Sentinels Reward (#11389)"
    { 11390, 1011390 }, // "Quest: I've Got a Flying Machine! Reward (#11390)"
    { 11391, 1011391 }, // "Quest: Steel Gate Patrol Reward (#11391)"
    { 11396, 1011396 }, // "Quest: Bring Down Those Shields Reward (#11396)"
    { 11399, 1011399 }, // "Quest: Bring Down Those Shields Reward (#11399)"
    { 11403, 1011403 }, // "Quest: Free at Last! Reward (#11403)"
    { 11407, 1011407 }, // "Quest: Bark for Drohn's Distillery! Reward (#11407)"
    { 11408, 1011408 }, // "Quest: Bark for T'chali's Voodoo Brewery! Reward (#11408)"
    { 11412, 1011412 }, // "Quest: There and Back Again Reward (#11412)"
    { 11413, 1011413 }, // "Quest: Did Someone Say \"Souvenir?\" Reward (#11413)"
    { 11421, 1011421 }, // "Quest: It Goes to 11... Reward (#11421)"
    { 11424, 1011424 }, // "Quest: Shield Hill Reward (#11424)"
    { 11431, 1011431 }, // "Quest: Catch the Wild Wolpertinger! Reward (#11431)"
    { 11435, 1011435 }, // "Quest: Gathered Pumpkins NYI Reward (#11435)"
    { 11437, 1011437 }, // "Quest: [PH] Beer Garden A Reward (#11437)"
    { 11438, 1011438 }, // "Quest: [PH] Beer Garden B Reward (#11438)"
    { 11439, 1011439 }, // "Quest: Fire Brigade Practice Reward (#11439)"
    { 11440, 1011440 }, // "Quest: Fire Brigade Practice Reward (#11440)"
    { 11441, 1011441 }, // "Quest: Brewfest! Reward (#11441)"
    { 11442, 1011442 }, // "Quest: Welcome to Brewfest! Reward (#11442)"
    { 11444, 1011444 }, // "Quest: [PH] Beer Garden A Reward (#11444)"
    { 11445, 1011445 }, // "Quest: [PH] Beer Garden B Reward (#11445)"
    { 11446, 1011446 }, // "Quest: Brewfest! Reward (#11446)"
    { 11447, 1011447 }, // "Quest: Welcome to Brewfest! Reward (#11447)"
    { 11449, 1011449 }, // "Quest: Fire Training Reward (#11449)"
    { 11450, 1011450 }, // "Quest: Fire Training Reward (#11450)"
    { 11454, 1011454 }, // "Quest: Seek the Saboteurs Reward (#11454)"
    { 11467, 1011467 }, // "Quest: Dead Man's Debt Reward (#11467)"
    { 11470, 1011470 }, // "Quest: There Exists No Honor Among Birds Reward (#11470)"
    { 11471, 1011471 }, // "Quest: The Jig is Up Reward (#11471)"
    { 11486, 1011486 }, // "Quest: The Best of Brews Reward (#11486)"
    { 11487, 1011487 }, // "Quest: The Best of Brews Reward (#11487)"
    { 11492, 1011492 }, // "Quest: Hard to Kill Reward (#11492)"
    { 11494, 1011494 }, // "Quest: Lightning Infused Relics Reward (#11494)"
    { 11495, 1011495 }, // "Quest: The Delicate Sound of Thunder Reward (#11495)"
    { 11499, 1011499 }, // "Quest: Wanted: The Signet Ring of Prince Kael'thas Reward (#11499)"
    { 11500, 1011500 }, // "Quest: Wanted: Sisters of Torment Reward (#11500)"
    { 11501, 1011501 }, // "Quest: News From the East Reward (#11501)"
    { 11513, 1011513 }, // "Quest: Intercepting the Mana Cells Reward (#11513)"
    { 11514, 1011514 }, // "Quest: Maintaining the Sunwell Portal Reward (#11514)"
    { 11515, 1011515 }, // "Quest: Blood for Blood Reward (#11515)"
    { 11516, 1011516 }, // "Quest: Blast the Gateway Reward (#11516)"
    { 11520, 1011520 }, // "Quest: Discovering Your Roots Reward (#11520)"
    { 11521, 1011521 }, // "Quest: Rediscovering Your Roots Reward (#11521)"
    { 11528, 1011528 }, // "Quest: A Winter Veil Gift Reward (#11528)"
    { 11544, 1011544 }, // "Quest: Ata'mal Armaments Reward (#11544)"
    { 11546, 1011546 }, // "Quest: Open for Business Reward (#11546)"
    { 11547, 1011547 }, // "Quest: Know Your Ley Lines Reward (#11547)"
    { 11551, 1011551 }, // "Quest: Agamath, the First Gate Reward (#11551)"
    { 11552, 1011552 }, // "Quest: Rohendor, the Second Gate Reward (#11552)"
    { 11553, 1011553 }, // "Quest: Archonisus, the Final Gate Reward (#11553)"
    { 11554, 1011554 }, // "Quest: A Friend in the Frontlines Reward (#11554)"
    { 11555, 1011555 }, // "Quest: Honored by Your Allies Reward (#11555)"
    { 11556, 1011556 }, // "Quest: Revered in the Field of Battle Reward (#11556)"
    { 11557, 1011557 }, // "Quest: Exalted Among All Combatants Reward (#11557)"
    { 11560, 1011560 }, // "Quest: Oh Noes, the Tadpoles! Reward (#11560)"
    { 11564, 1011564 }, // "Quest: Succulent Orca Stew Reward (#11564)"
    { 11566, 1011566 }, // "Quest: Surrender... Not! Reward (#11566)"
    { 11570, 1011570 }, // "Quest: Escape from the Winterfin Caverns Reward (#11570)"
    { 11572, 1011572 }, // "Quest: Return to Atuik Reward (#11572)"
    { 11578, 1011578 }, // "Quest: The \"Chow\" Quest (123)aa COPY Reward (#11578)"
    { 11579, 1011579 }, // "Quest: The \"Chow\" Quest (123)aa COPY Reward (#11579)"
    { 11580, 1011580 }, // "Quest: Desecrate this Fire! Reward (#11580)"
    { 11581, 1011581 }, // "Quest: Desecrate this Fire! Reward (#11581)"
    { 11583, 1011583 }, // "Quest: Honor the Flame Reward (#11583)"
    { 11584, 1011584 }, // "Quest: Honor the Flame Reward (#11584)"
    { 11592, 1011592 }, // "Quest: We Strike! Reward (#11592)"
    { 11600, 1011600 }, // "Quest: The Late William Allerton Reward (#11600)"
    { 11602, 1011602 }, // "Quest: Cutting Off the Source Reward (#11602)"
    { 11603, 1011603 }, // "Quest: In Wine, Truth Reward (#11603)"
    { 11608, 1011608 }, // "Quest: Bury Those Cockroaches! Reward (#11608)"
    { 11610, 1011610 }, // "Quest: Leading the Ancestors Home Reward (#11610)"
    { 11611, 1011611 }, // "Quest: Taken by the Scourge Reward (#11611)"
    { 11613, 1011613 }, // "Quest: Karuk's Oath Reward (#11613)"
    { 11619, 1011619 }, // "Quest: Gamel the Cruel Reward (#11619)"
    { 11623, 1011623 }, // "Quest: A Visit to the Curator Reward (#11623)"
    { 11626, 1011626 }, // "Quest: The Emissary Reward (#11626)"
    { 11631, 1011631 }, // "Quest: Vision of Air Reward (#11631)"
    { 11632, 1011632 }, // "Quest: What the Cold Wind Brings... Reward (#11632)"
    { 11638, 1011638 }, // "Quest: Return My Remains Reward (#11638)"
    { 11639, 1011639 }, // "Quest: Revenge Upon Magmoth Reward (#11639)"
    { 11647, 1011647 }, // "Quest: Neutralizing the Cauldrons Reward (#11647)"
    { 11652, 1011652 }, // "Quest: The Plains of Nasam Reward (#11652)"
    { 11653, 1011653 }, // "Quest: Hah... You're Not So Big Now! Reward (#11653)"
    { 11656, 1011656 }, // "Quest: Burn in Effigy Reward (#11656)"
    { 11657, 1011657 }, // "Quest: Torch Catching Reward (#11657)"
    { 11661, 1011661 }, // "Quest: Orabus the Helmsman Reward (#11661)"
    { 11664, 1011664 }, // "Quest: Escaping the Mist Reward (#11664)"
    { 11665, 1011665 }, // "Quest: Crocolisks in the City Reward (#11665)"
    { 11666, 1011666 }, // "Quest: Bait Bandits Reward (#11666)"
    { 11667, 1011667 }, // "Quest: The One That Got Away Reward (#11667)"
    { 11668, 1011668 }, // "Quest: Shrimpin' Ain't Easy Reward (#11668)"
    { 11669, 1011669 }, // "Quest: Felblood Fillet Reward (#11669)"
    { 11670, 1011670 }, // "Quest: It Was The Orcs, Honest! Reward (#11670)"
    { 11673, 1011673 }, // "Quest: Get Me Outa Here! Reward (#11673)"
    { 11677, 1011677 }, // "Quest: Stop the Plague Reward (#11677)"
    { 11681, 1011681 }, // "Quest: Rescuing Evanor Reward (#11681)"
    { 11683, 1011683 }, // "Quest: Fallen Necropolis Reward (#11683)"
    { 11689, 1011689 }, // "Quest: Return with the Bad News Reward (#11689)"
    { 11690, 1011690 }, // "Quest: Bring 'Em Back Alive Reward (#11690)"
    { 11694, 1011694 }, // "Quest: There's Something Going On In Those Caves Reward (#11694)"
    { 11698, 1011698 }, // "Quest: Might As Well Wipe Out the Scourge Reward (#11698)"
    { 11701, 1011701 }, // "Quest: Back to the Airstrip Reward (#11701)"
    { 11705, 1011705 }, // "Quest: Foolish Endeavors Reward (#11705)"
    { 11706, 1011706 }, // "Quest: The Collapse Reward (#11706)"
    { 11712, 1011712 }, // "Quest: Re-Cursive Reward (#11712)"
    { 11714, 1011714 }, // "Quest: Vermin Extermination Reward (#11714)"
    { 11722, 1011722 }, // "Quest: Trophies of Gammoth Reward (#11722)"
    { 11723, 1011723 }, // "Quest: Deploy the Shake-n-Quake! Reward (#11723)"
    { 11730, 1011730 }, // "Quest: Master and Servant Reward (#11730)"
    { 11731, 1011731 }, // "Quest: Torch Tossing Reward (#11731)"
    { 11732, 1011732 }, // "Quest: Desecrate this Fire! Reward (#11732)"
    { 11734, 1011734 }, // "Quest: Desecrate this Fire! Reward (#11734)"
    { 11735, 1011735 }, // "Quest: Desecrate this Fire! Reward (#11735)"
    { 11736, 1011736 }, // "Quest: Desecrate this Fire! Reward (#11736)"
    { 11737, 1011737 }, // "Quest: Desecrate this Fire! Reward (#11737)"
    { 11738, 1011738 }, // "Quest: Desecrate this Fire! Reward (#11738)"
    { 11739, 1011739 }, // "Quest: Desecrate this Fire! Reward (#11739)"
    { 11740, 1011740 }, // "Quest: Desecrate this Fire! Reward (#11740)"
    { 11741, 1011741 }, // "Quest: Desecrate this Fire! Reward (#11741)"
    { 11742, 1011742 }, // "Quest: Desecrate this Fire! Reward (#11742)"
    { 11743, 1011743 }, // "Quest: Desecrate this Fire! Reward (#11743)"
    { 11744, 1011744 }, // "Quest: Desecrate this Fire! Reward (#11744)"
    { 11745, 1011745 }, // "Quest: Desecrate this Fire! Reward (#11745)"
    { 11746, 1011746 }, // "Quest: Desecrate this Fire! Reward (#11746)"
    { 11747, 1011747 }, // "Quest: Desecrate this Fire! Reward (#11747)"
    { 11748, 1011748 }, // "Quest: Desecrate this Fire! Reward (#11748)"
    { 11749, 1011749 }, // "Quest: Desecrate this Fire! Reward (#11749)"
    { 11750, 1011750 }, // "Quest: Desecrate this Fire! Reward (#11750)"
    { 11751, 1011751 }, // "Quest: Desecrate this Fire! Reward (#11751)"
    { 11752, 1011752 }, // "Quest: Desecrate this Fire! Reward (#11752)"
    { 11753, 1011753 }, // "Quest: Desecrate this Fire! Reward (#11753)"
    { 11754, 1011754 }, // "Quest: Desecrate this Fire! Reward (#11754)"
    { 11755, 1011755 }, // "Quest: Desecrate this Fire! Reward (#11755)"
    { 11756, 1011756 }, // "Quest: Desecrate this Fire! Reward (#11756)"
    { 11757, 1011757 }, // "Quest: Desecrate this Fire! Reward (#11757)"
    { 11758, 1011758 }, // "Quest: Desecrate this Fire! Reward (#11758)"
    { 11759, 1011759 }, // "Quest: Desecrate this Fire! Reward (#11759)"
    { 11760, 1011760 }, // "Quest: Desecrate this Fire! Reward (#11760)"
    { 11761, 1011761 }, // "Quest: Desecrate this Fire! Reward (#11761)"
    { 11762, 1011762 }, // "Quest: Desecrate this Fire! Reward (#11762)"
    { 11763, 1011763 }, // "Quest: Desecrate this Fire! Reward (#11763)"
    { 11764, 1011764 }, // "Quest: Desecrate this Fire! Reward (#11764)"
    { 11765, 1011765 }, // "Quest: Desecrate this Fire! Reward (#11765)"
    { 11766, 1011766 }, // "Quest: Desecrate this Fire! Reward (#11766)"
    { 11767, 1011767 }, // "Quest: Desecrate this Fire! Reward (#11767)"
    { 11768, 1011768 }, // "Quest: Desecrate this Fire! Reward (#11768)"
    { 11769, 1011769 }, // "Quest: Desecrate this Fire! Reward (#11769)"
    { 11770, 1011770 }, // "Quest: Desecrate this Fire! Reward (#11770)"
    { 11771, 1011771 }, // "Quest: Desecrate this Fire! Reward (#11771)"
    { 11772, 1011772 }, // "Quest: Desecrate this Fire! Reward (#11772)"
    { 11773, 1011773 }, // "Quest: Desecrate this Fire! Reward (#11773)"
    { 11774, 1011774 }, // "Quest: Desecrate this Fire! Reward (#11774)"
    { 11775, 1011775 }, // "Quest: Desecrate this Fire! Reward (#11775)"
    { 11776, 1011776 }, // "Quest: Desecrate this Fire! Reward (#11776)"
    { 11777, 1011777 }, // "Quest: Desecrate this Fire! Reward (#11777)"
    { 11778, 1011778 }, // "Quest: Desecrate this Fire! Reward (#11778)"
    { 11779, 1011779 }, // "Quest: Desecrate this Fire! Reward (#11779)"
    { 11780, 1011780 }, // "Quest: Desecrate this Fire! Reward (#11780)"
    { 11781, 1011781 }, // "Quest: Desecrate this Fire! Reward (#11781)"
    { 11782, 1011782 }, // "Quest: Desecrate this Fire! Reward (#11782)"
    { 11783, 1011783 }, // "Quest: Desecrate this Fire! Reward (#11783)"
    { 11784, 1011784 }, // "Quest: Desecrate this Fire! Reward (#11784)"
    { 11785, 1011785 }, // "Quest: Desecrate this Fire! Reward (#11785)"
    { 11786, 1011786 }, // "Quest: Desecrate this Fire! Reward (#11786)"
    { 11787, 1011787 }, // "Quest: Desecrate this Fire! Reward (#11787)"
    { 11789, 1011789 }, // "Quest: A Soldier in Need Reward (#11789)"
    { 11792, 1011792 }, // "Quest: Enemies of the Light Reward (#11792)"
    { 11794, 1011794 }, // "Quest: The Hunt is On Reward (#11794)"
    { 11797, 1011797 }, // "Quest: The Siege Reward (#11797)"
    { 11798, 1011798 }, // "Quest: The Gearmaster Reward (#11798)"
    { 11799, 1011799 }, // "Quest: Desecrate this Fire! Reward (#11799)"
    { 11800, 1011800 }, // "Quest: Desecrate this Fire! Reward (#11800)"
    { 11801, 1011801 }, // "Quest: Desecrate this Fire! Reward (#11801)"
    { 11802, 1011802 }, // "Quest: Desecrate this Fire! Reward (#11802)"
    { 11803, 1011803 }, // "Quest: Desecrate this Fire! Reward (#11803)"
    { 11804, 1011804 }, // "Quest: Honor the Flame Reward (#11804)"
    { 11805, 1011805 }, // "Quest: Honor the Flame Reward (#11805)"
    { 11806, 1011806 }, // "Quest: Honor the Flame Reward (#11806)"
    { 11807, 1011807 }, // "Quest: Honor the Flame Reward (#11807)"
    { 11808, 1011808 }, // "Quest: Honor the Flame Reward (#11808)"
    { 11809, 1011809 }, // "Quest: Honor the Flame Reward (#11809)"
    { 11810, 1011810 }, // "Quest: Honor the Flame Reward (#11810)"
    { 11811, 1011811 }, // "Quest: Honor the Flame Reward (#11811)"
    { 11812, 1011812 }, // "Quest: Honor the Flame Reward (#11812)"
    { 11813, 1011813 }, // "Quest: Honor the Flame Reward (#11813)"
    { 11814, 1011814 }, // "Quest: Honor the Flame Reward (#11814)"
    { 11815, 1011815 }, // "Quest: Honor the Flame Reward (#11815)"
    { 11816, 1011816 }, // "Quest: Honor the Flame Reward (#11816)"
    { 11817, 1011817 }, // "Quest: Honor the Flame Reward (#11817)"
    { 11818, 1011818 }, // "Quest: Honor the Flame Reward (#11818)"
    { 11819, 1011819 }, // "Quest: Honor the Flame Reward (#11819)"
    { 11820, 1011820 }, // "Quest: Honor the Flame Reward (#11820)"
    { 11821, 1011821 }, // "Quest: Honor the Flame Reward (#11821)"
    { 11822, 1011822 }, // "Quest: Honor the Flame Reward (#11822)"
    { 11823, 1011823 }, // "Quest: Honor the Flame Reward (#11823)"
    { 11824, 1011824 }, // "Quest: Honor the Flame Reward (#11824)"
    { 11825, 1011825 }, // "Quest: Honor the Flame Reward (#11825)"
    { 11826, 1011826 }, // "Quest: Honor the Flame Reward (#11826)"
    { 11827, 1011827 }, // "Quest: Honor the Flame Reward (#11827)"
    { 11828, 1011828 }, // "Quest: Honor the Flame Reward (#11828)"
    { 11829, 1011829 }, // "Quest: Honor the Flame Reward (#11829)"
    { 11830, 1011830 }, // "Quest: Honor the Flame Reward (#11830)"
    { 11831, 1011831 }, // "Quest: Honor the Flame Reward (#11831)"
    { 11832, 1011832 }, // "Quest: Honor the Flame Reward (#11832)"
    { 11833, 1011833 }, // "Quest: Honor the Flame Reward (#11833)"
    { 11834, 1011834 }, // "Quest: Honor the Flame Reward (#11834)"
    { 11835, 1011835 }, // "Quest: Honor the Flame Reward (#11835)"
    { 11836, 1011836 }, // "Quest: Honor the Flame Reward (#11836)"
    { 11837, 1011837 }, // "Quest: Honor the Flame Reward (#11837)"
    { 11838, 1011838 }, // "Quest: Honor the Flame Reward (#11838)"
    { 11839, 1011839 }, // "Quest: Honor the Flame Reward (#11839)"
    { 11840, 1011840 }, // "Quest: Honor the Flame Reward (#11840)"
    { 11841, 1011841 }, // "Quest: Honor the Flame Reward (#11841)"
    { 11842, 1011842 }, // "Quest: Honor the Flame Reward (#11842)"
    { 11843, 1011843 }, // "Quest: Honor the Flame Reward (#11843)"
    { 11844, 1011844 }, // "Quest: Honor the Flame Reward (#11844)"
    { 11845, 1011845 }, // "Quest: Honor the Flame Reward (#11845)"
    { 11846, 1011846 }, // "Quest: Honor the Flame Reward (#11846)"
    { 11847, 1011847 }, // "Quest: Honor the Flame Reward (#11847)"
    { 11848, 1011848 }, // "Quest: Honor the Flame Reward (#11848)"
    { 11849, 1011849 }, // "Quest: Honor the Flame Reward (#11849)"
    { 11850, 1011850 }, // "Quest: Honor the Flame Reward (#11850)"
    { 11851, 1011851 }, // "Quest: Honor the Flame Reward (#11851)"
    { 11852, 1011852 }, // "Quest: Honor the Flame Reward (#11852)"
    { 11853, 1011853 }, // "Quest: Honor the Flame Reward (#11853)"
    { 11854, 1011854 }, // "Quest: Honor the Flame Reward (#11854)"
    { 11855, 1011855 }, // "Quest: Honor the Flame Reward (#11855)"
    { 11856, 1011856 }, // "Quest: Honor the Flame Reward (#11856)"
    { 11857, 1011857 }, // "Quest: Honor the Flame Reward (#11857)"
    { 11858, 1011858 }, // "Quest: Honor the Flame Reward (#11858)"
    { 11859, 1011859 }, // "Quest: Honor the Flame Reward (#11859)"
    { 11860, 1011860 }, // "Quest: Honor the Flame Reward (#11860)"
    { 11861, 1011861 }, // "Quest: Honor the Flame Reward (#11861)"
    { 11862, 1011862 }, // "Quest: Honor the Flame Reward (#11862)"
    { 11863, 1011863 }, // "Quest: Honor the Flame Reward (#11863)"
    { 11868, 1011868 }, // "Quest: The Culler Cometh Reward (#11868)"
    { 11872, 1011872 }, // "Quest: The Nefarious Clam Master... Reward (#11872)"
    { 11873, 1011873 }, // "Quest: Give Fizzcrank the News Reward (#11873)"
    { 11875, 1011875 }, // "Quest: Gaining the Advantage Reward (#11875)"
    { 11877, 1011877 }, // "Quest: Sunfury Attack Plans Reward (#11877)"
    { 11879, 1011879 }, // "Quest: Kaw the Mammoth Destroyer Reward (#11879)"
    { 11884, 1011884 }, // "Quest: Ned, Lord of Rhinos... Reward (#11884)"
    { 11885, 1011885 }, // "Quest: Adversarial Blood Reward (#11885)"
    { 11886, 1011886 }, // "Quest: Unusual Activity Reward (#11886)"
    { 11891, 1011891 }, // "Quest: An Innocent Disguise Reward (#11891)"
    { 11892, 1011892 }, // "Quest: The Assassination of Harold Lane Reward (#11892)"
    { 11894, 1011894 }, // "Quest: Patching Up Reward (#11894)"
    { 11897, 1011897 }, // "Quest: Plug the Sinkholes Reward (#11897)"
    { 11898, 1011898 }, // "Quest: Breaking Through Reward (#11898)"
    { 11903, 1011903 }, // "Quest: It's Time for Action Reward (#11903)"
    { 11905, 1011905 }, // "Quest: Postponing the Inevitable Reward (#11905)"
    { 11906, 1011906 }, // "Quest: Cleaning Up the Pools Reward (#11906)"
    { 11907, 1011907 }, // "Quest: The Sub-Chieftains Reward (#11907)"
    { 11909, 1011909 }, // "Quest: Defeat the Gearmaster Reward (#11909)"
    { 11911, 1011911 }, // "Quest: Quickening Reward (#11911)"
    { 11913, 1011913 }, // "Quest: Take No Chances Reward (#11913)"
    { 11914, 1011914 }, // "Quest: Keep the Secret Safe Reward (#11914)"
    { 11916, 1011916 }, // "Quest: Hellscream's Champion Reward (#11916)"
    { 11917, 1011917 }, // "Quest: Striking Back Reward (#11917)"
    { 11919, 1011919 }, // "Quest: Drake Hunt Reward (#11919)"
    { 11921, 1011921 }, // "Quest: More Torch Tossing Reward (#11921)"
    { 11922, 1011922 }, // "Quest: Torch Tossing Reward (#11922)"
    { 11923, 1011923 }, // "Quest: Torch Catching Reward (#11923)"
    { 11924, 1011924 }, // "Quest: More Torch Catching Reward (#11924)"
    { 11925, 1011925 }, // "Quest: More Torch Catching Reward (#11925)"
    { 11926, 1011926 }, // "Quest: More Torch Tossing Reward (#11926)"
    { 11933, 1011933 }, // "Quest: Stealing the Exodar's Flame Reward (#11933)"
    { 11935, 1011935 }, // "Quest: Stealing Silvermoon's Flame Reward (#11935)"
    { 11938, 1011938 }, // "Quest: Buying Some Time Reward (#11938)"
    { 11943, 1011943 }, // "Quest: The Cell Reward (#11943)"
    { 11944, 1011944 }, // "Quest: Surrounded! Reward (#11944)"
    { 11947, 1011947 }, // "Quest: Striking Back Reward (#11947)"
    { 11948, 1011948 }, // "Quest: Striking Back Reward (#11948)"
    { 11949, 1011949 }, // "Quest: Not Without a Fight! Reward (#11949)"
    { 11952, 1011952 }, // "Quest: Striking Back Reward (#11952)"
    { 11953, 1011953 }, // "Quest: Striking Back Reward (#11953)"
    { 11954, 1011954 }, // "Quest: Striking Back Reward (#11954)"
    { 11957, 1011957 }, // "Quest: Saragosa's End Reward (#11957)"
    { 11959, 1011959 }, // "Quest: Slay Loguhn Reward (#11959)"
    { 11964, 1011964 }, // "Quest: Incense for the Summer Scorchlings Reward (#11964)"
    { 11965, 1011965 }, // "Quest: Call to Arms! Reward (#11965)"
    { 11966, 1011966 }, // "Quest: Incense for the Festival Scorchlings Reward (#11966)"
    { 11968, 1011968 }, // "Quest: The Tides Turn Reward (#11968)"
    { 11969, 1011969 }, // "Quest: Springing the Trap Reward (#11969)"
    { 11970, 1011970 }, // "Quest: The Master of Summer Lore Reward (#11970)"
    { 11971, 1011971 }, // "Quest: The Spinner of Summer Tales Reward (#11971)"
    { 11972, 1011972 }, // "Quest: Shards of Ahune Reward (#11972)"
    { 11973, 1011973 }, // "Quest: Prisoner of War Reward (#11973)"
    { 11976, 1011976 }, // "Quest: Ice Shards Reward (#11976)"
    { 11980, 1011980 }, // "Quest: Pride of the Horde Reward (#11980)"
    { 11984, 1011984 }, // "Quest: Filling the Cages Reward (#11984)"
    { 11985, 1011985 }, // "Quest: Into the Breach Reward (#11985)"
    { 11987, 1011987 }, // "Quest: zzOLDFortune Card: Silver Reward (#11987)"
    { 11991, 1011991 }, // "Quest: Subject to Interpretation Reward (#11991)"
    { 11993, 1011993 }, // "Quest: The Runic Prophecies Reward (#11993)"
    { 12004, 1012004 }, // "Quest: Prevent the Accord Reward (#12004)"
    { 12005, 1012005 }, // "Quest: Prevent the Accord Reward (#12005)"
    { 12013, 1012013 }, // "Quest: End Arcanimus Reward (#12013)"
    { 12014, 1012014 }, // "Quest: Steady as a Rock? Reward (#12014)"
    { 12017, 1012017 }, // "Quest: Meat on the Hook Reward (#12017)"
    { 12019, 1012019 }, // "Quest: Last Rites Reward (#12019)"
    { 12020, 1012020 }, // "Quest: This One Time, When I Was Drunk... Reward (#12020)"
    { 12022, 1012022 }, // "Quest: Chug and Chuck! Reward (#12022)"
    { 12027, 1012027 }, // "Quest: Mr. Floppy's Perilous Adventure Reward (#12027)"
    { 12032, 1012032 }, // "Quest: Conversing With the Depths Reward (#12032)"
    { 12035, 1012035 }, // "Quest: Repurposed Technology Reward (#12035)"
    { 12037, 1012037 }, // "Quest: Search and Rescue Reward (#12037)"
    { 12041, 1012041 }, // "Quest: The Lost Empire Reward (#12041)"
    { 12042, 1012042 }, // "Quest: Heart of the Ancients Reward (#12042)"
    { 12047, 1012047 }, // "Quest: Something That Doesn't Melt Reward (#12047)"
    { 12048, 1012048 }, // "Quest: Scourge Armaments Reward (#12048)"
    { 12050, 1012050 }, // "Quest: Lumber Hack Reward (#12050)"
    { 12052, 1012052 }, // "Quest: Harp on This! Reward (#12052)"
    { 12053, 1012053 }, // "Quest: The Might of the Horde Reward (#12053)"
    { 12058, 1012058 }, // "Quest: The Runic Prophecies Reward (#12058)"
    { 12064, 1012064 }, // "Quest: Chains of the Anub'ar Reward (#12064)"
    { 12068, 1012068 }, // "Quest: Voices From the Dust Reward (#12068)"
    { 12072, 1012072 }, // "Quest: Blightbeasts be Damned! Reward (#12072)"
    { 12077, 1012077 }, // "Quest: Apply This Twice A Day Reward (#12077)"
    { 12080, 1012080 }, // "Quest: Really Big Worm Reward (#12080)"
    { 12082, 1012082 }, // "Quest: Dun-da-Dun-tah! Reward (#12082)"
    { 12083, 1012083 }, // "Quest: Atop the Woodlands Reward (#12083)"
    { 12084, 1012084 }, // "Quest: Atop the Woodlands Reward (#12084)"
    { 12089, 1012089 }, // "Quest: Wanted: Magister Keldonus Reward (#12089)"
    { 12090, 1012090 }, // "Quest: Wanted: Gigantaur Reward (#12090)"
    { 12091, 1012091 }, // "Quest: Wanted: Dreadtalon Reward (#12091)"
    { 12092, 1012092 }, // "Quest: Strengthen the Ancients Reward (#12092)"
    { 12096, 1012096 }, // "Quest: Strengthen the Ancients Reward (#12096)"
    { 12097, 1012097 }, // "Quest: Sarathstra, Scourge of the North Reward (#12097)"
    { 12099, 1012099 }, // "Quest: Free at Last Reward (#12099)"
    { 12105, 1012105 }, // "Quest: Descent into Darkness Reward (#12105)"
    { 12107, 1012107 }, // "Quest: The End of the Line Reward (#12107)"
    { 12110, 1012110 }, // "Quest: The End of the Line Reward (#12110)"
    { 12111, 1012111 }, // "Quest: Where the Wild Things Roam Reward (#12111)"
    { 12114, 1012114 }, // "Quest: Therapy Reward (#12114)"
    { 12117, 1012117 }, // "Quest: Travel to Moa'ki Harbor Reward (#12117)"
    { 12118, 1012118 }, // "Quest: Travel to Moa'ki Harbor Reward (#12118)"
    { 12120, 1012120 }, // "Quest: Drak'aguul's Mallet Reward (#12120)"
    { 12133, 1012133 }, // "Quest: Smash the Pumpkin Reward (#12133)"
    { 12134, 1012134 }, // "Quest: Sasha's Hunt Reward (#12134)"
    { 12135, 1012135 }, // "Quest: \"Let the Fires Come!\" Reward (#12135)"
    { 12136, 1012136 }, // "Quest: The Translated Tome Reward (#12136)"
    { 12139, 1012139 }, // "Quest: \"Let the Fires Come!\" Reward (#12139)"
    { 12140, 1012140 }, // "Quest: All Hail Roanauk! Reward (#12140)"
    { 12143, 1012143 }, // "Quest: Canyon Chase Reward (#12143)"
    { 12145, 1012145 }, // "Quest: Canyon Chase Reward (#12145)"
    { 12151, 1012151 }, // "Quest: Wanton Warlord Reward (#12151)"
    { 12152, 1012152 }, // "Quest: Jin'arrak's End Reward (#12152)"
    { 12153, 1012153 }, // "Quest: The Iron Thane and His Anvil Reward (#12153)"
    { 12155, 1012155 }, // "Quest: Smash the Pumpkin Reward (#12155)"
    { 12159, 1012159 }, // "Quest: Souls at Unrest Reward (#12159)"
    { 12164, 1012164 }, // "Quest: Hour of the Worg Reward (#12164)"
    { 12169, 1012169 }, // "Quest: The High Cultist Reward (#12169)"
    { 12170, 1012170 }, // "Quest: Blackriver Brawl Reward (#12170)"
    { 12175, 1012175 }, // "Quest: Gray Worg Hides Reward (#12175)"
    { 12176, 1012176 }, // "Quest: A Minor Substitution Reward (#12176)"
    { 12185, 1012185 }, // "Quest: Put on Your Best Face for Loken Reward (#12185)"
    { 12188, 1012188 }, // "Quest: The Forsaken Blight and You: How Not to Die Reward (#12188)"
    { 12191, 1012191 }, // "Quest: Chug and Chuck! Reward (#12191)"
    { 12192, 1012192 }, // "Quest: This One Time, When I Was Drunk... Reward (#12192)"
    { 12193, 1012193 }, // "Quest: Say, There Wouldn't Happen to be a Souvenir This Year, Would There? Reward (#12193)"
    { 12194, 1012194 }, // "Quest: Say, There Wouldn't Happen to be a Souvenir This Year, Would There? Reward (#12194)"
    { 12199, 1012199 }, // "Quest: Bringing Down the Iron Thane Reward (#12199)"
    { 12207, 1012207 }, // "Quest: Vordrassil's Fall Reward (#12207)"
    { 12211, 1012211 }, // "Quest: Let Them Not Rise! Reward (#12211)"
    { 12219, 1012219 }, // "Quest: The Failed World Tree Reward (#12219)"
    { 12221, 1012221 }, // "Quest: The Forsaken Blight Reward (#12221)"
    { 12224, 1012224 }, // "Quest: The Kor'kron Vanguard! Reward (#12224)"
    { 12227, 1012227 }, // "Quest: Doing Your Duty Reward (#12227)"
    { 12229, 1012229 }, // "Quest: A Possible Link Reward (#12229)"
    { 12232, 1012232 }, // "Quest: Bombard the Ballistae Reward (#12232)"
    { 12236, 1012236 }, // "Quest: Ursoc, the Bear God Reward (#12236)"
    { 12238, 1012238 }, // "Quest: Cleansing Drak'Tharon Reward (#12238)"
    { 12242, 1012242 }, // "Quest: Vordrassil's Seeds Reward (#12242)"
    { 12243, 1012243 }, // "Quest: Fire Upon the Waters Reward (#12243)"
    { 12244, 1012244 }, // "Quest: Shredder Repair Reward (#12244)"
    { 12246, 1012246 }, // "Quest: A Possible Link Reward (#12246)"
    { 12249, 1012249 }, // "Quest: Ursoc, the Bear God Reward (#12249)"
    { 12250, 1012250 }, // "Quest: Vordrassil's Seeds Reward (#12250)"
    { 12251, 1012251 }, // "Quest: Return to the High Commander Reward (#12251)"
    { 12252, 1012252 }, // "Quest: Torture the Torturer Reward (#12252)"
    { 12255, 1012255 }, // "Quest: The Thane of Voldrune Reward (#12255)"
    { 12258, 1012258 }, // "Quest: The Fate of the Dead Reward (#12258)"
    { 12259, 1012259 }, // "Quest: The Thane of Voldrune Reward (#12259)"
    { 12267, 1012267 }, // "Quest: Neltharion's Flame Reward (#12267)"
    { 12270, 1012270 }, // "Quest: Shred the Alliance Reward (#12270)"
    { 12273, 1012273 }, // "Quest: The Denouncement Reward (#12273)"
    { 12277, 1012277 }, // "Quest: Leave Nothing to Chance Reward (#12277)"
    { 12282, 1012282 }, // "Quest: Imprints on the Past Reward (#12282)"
    { 12285, 1012285 }, // "Quest: Do Unto Others Reward (#12285)"
    { 12286, 1012286 }, // "Quest: Candy Bucket Reward (#12286)"
    { 12292, 1012292 }, // "Quest: Local Support Reward (#12292)"
    { 12299, 1012299 }, // "Quest: Northern Hospitality Reward (#12299)"
    { 12303, 1012303 }, // "Quest: Funding the War Effort Reward (#12303)"
    { 12305, 1012305 }, // "Quest: Parting Thoughts Reward (#12305)"
    { 12307, 1012307 }, // "Quest: Wolfsbane Root Reward (#12307)"
    { 12308, 1012308 }, // "Quest: Escape from Silverbrook Reward (#12308)"
    { 12311, 1012311 }, // "Quest: The Noble's Crypt Reward (#12311)"
    { 12314, 1012314 }, // "Quest: Down With Captain Zorna! Reward (#12314)"
    { 12315, 1012315 }, // "Quest: Crush Captain Brightwater! Reward (#12315)"
    { 12316, 1012316 }, // "Quest: Keep Them at Bay! Reward (#12316)"
    { 12317, 1012317 }, // "Quest: Keep Them at Bay Reward (#12317)"
    { 12321, 1012321 }, // "Quest: A Righteous Sermon Reward (#12321)"
    { 12323, 1012323 }, // "Quest: Smoke 'Em Out Reward (#12323)"
    { 12324, 1012324 }, // "Quest: Smoke 'Em Out Reward (#12324)"
    { 12326, 1012326 }, // "Quest: Steamtank Surprise Reward (#12326)"
    { 12328, 1012328 }, // "Quest: Ruuna's Request Reward (#12328)"
    { 12330, 1012330 }, // "Quest: Anatoly Will Talk Reward (#12330)"
    { 12331, 1012331 }, // "Quest: Candy Bucket Reward (#12331)"
    { 12332, 1012332 }, // "Quest: Candy Bucket Reward (#12332)"
    { 12333, 1012333 }, // "Quest: Candy Bucket Reward (#12333)"
    { 12334, 1012334 }, // "Quest: Candy Bucket Reward (#12334)"
    { 12335, 1012335 }, // "Quest: Candy Bucket Reward (#12335)"
    { 12336, 1012336 }, // "Quest: Candy Bucket Reward (#12336)"
    { 12337, 1012337 }, // "Quest: Candy Bucket Reward (#12337)"
    { 12338, 1012338 }, // "Quest: Candy Bucket Reward (#12338)"
    { 12339, 1012339 }, // "Quest: Candy Bucket Reward (#12339)"
    { 12340, 1012340 }, // "Quest: Candy Bucket Reward (#12340)"
    { 12341, 1012341 }, // "Quest: Candy Bucket Reward (#12341)"
    { 12342, 1012342 }, // "Quest: Candy Bucket Reward (#12342)"
    { 12343, 1012343 }, // "Quest: Candy Bucket Reward (#12343)"
    { 12344, 1012344 }, // "Quest: Candy Bucket Reward (#12344)"
    { 12345, 1012345 }, // "Quest: Candy Bucket Reward (#12345)"
    { 12346, 1012346 }, // "Quest: Candy Bucket Reward (#12346)"
    { 12347, 1012347 }, // "Quest: Candy Bucket Reward (#12347)"
    { 12348, 1012348 }, // "Quest: Candy Bucket Reward (#12348)"
    { 12349, 1012349 }, // "Quest: Candy Bucket Reward (#12349)"
    { 12350, 1012350 }, // "Quest: Candy Bucket Reward (#12350)"
    { 12351, 1012351 }, // "Quest: Candy Bucket Reward (#12351)"
    { 12352, 1012352 }, // "Quest: Candy Bucket Reward (#12352)"
    { 12353, 1012353 }, // "Quest: Candy Bucket Reward (#12353)"
    { 12354, 1012354 }, // "Quest: Candy Bucket Reward (#12354)"
    { 12355, 1012355 }, // "Quest: Candy Bucket Reward (#12355)"
    { 12356, 1012356 }, // "Quest: Candy Bucket Reward (#12356)"
    { 12357, 1012357 }, // "Quest: Candy Bucket Reward (#12357)"
    { 12358, 1012358 }, // "Quest: Candy Bucket Reward (#12358)"
    { 12359, 1012359 }, // "Quest: Candy Bucket Reward (#12359)"
    { 12360, 1012360 }, // "Quest: Candy Bucket Reward (#12360)"
    { 12361, 1012361 }, // "Quest: Candy Bucket Reward (#12361)"
    { 12362, 1012362 }, // "Quest: Candy Bucket Reward (#12362)"
    { 12363, 1012363 }, // "Quest: Candy Bucket Reward (#12363)"
    { 12364, 1012364 }, // "Quest: Candy Bucket Reward (#12364)"
    { 12365, 1012365 }, // "Quest: Candy Bucket Reward (#12365)"
    { 12366, 1012366 }, // "Quest: Candy Bucket Reward (#12366)"
    { 12367, 1012367 }, // "Quest: Candy Bucket Reward (#12367)"
    { 12368, 1012368 }, // "Quest: Candy Bucket Reward (#12368)"
    { 12369, 1012369 }, // "Quest: Candy Bucket Reward (#12369)"
    { 12370, 1012370 }, // "Quest: Candy Bucket Reward (#12370)"
    { 12371, 1012371 }, // "Quest: Candy Bucket Reward (#12371)"
    { 12373, 1012373 }, // "Quest: Candy Bucket Reward (#12373)"
    { 12374, 1012374 }, // "Quest: Candy Bucket Reward (#12374)"
    { 12375, 1012375 }, // "Quest: Candy Bucket Reward (#12375)"
    { 12376, 1012376 }, // "Quest: Candy Bucket Reward (#12376)"
    { 12377, 1012377 }, // "Quest: Candy Bucket Reward (#12377)"
    { 12378, 1012378 }, // "Quest: Candy Bucket Reward (#12378)"
    { 12379, 1012379 }, // "Quest: Candy Bucket Reward (#12379)"
    { 12380, 1012380 }, // "Quest: Candy Bucket Reward (#12380)"
    { 12381, 1012381 }, // "Quest: Candy Bucket Reward (#12381)"
    { 12382, 1012382 }, // "Quest: Candy Bucket Reward (#12382)"
    { 12383, 1012383 }, // "Quest: Candy Bucket Reward (#12383)"
    { 12384, 1012384 }, // "Quest: Candy Bucket Reward (#12384)"
    { 12385, 1012385 }, // "Quest: Candy Bucket Reward (#12385)"
    { 12386, 1012386 }, // "Quest: Candy Bucket Reward (#12386)"
    { 12387, 1012387 }, // "Quest: Candy Bucket Reward (#12387)"
    { 12388, 1012388 }, // "Quest: Candy Bucket Reward (#12388)"
    { 12389, 1012389 }, // "Quest: Candy Bucket Reward (#12389)"
    { 12390, 1012390 }, // "Quest: Candy Bucket Reward (#12390)"
    { 12391, 1012391 }, // "Quest: Candy Bucket Reward (#12391)"
    { 12392, 1012392 }, // "Quest: Candy Bucket Reward (#12392)"
    { 12393, 1012393 }, // "Quest: Candy Bucket Reward (#12393)"
    { 12394, 1012394 }, // "Quest: Candy Bucket Reward (#12394)"
    { 12395, 1012395 }, // "Quest: Candy Bucket Reward (#12395)"
    { 12396, 1012396 }, // "Quest: Candy Bucket Reward (#12396)"
    { 12397, 1012397 }, // "Quest: Candy Bucket Reward (#12397)"
    { 12398, 1012398 }, // "Quest: Candy Bucket Reward (#12398)"
    { 12399, 1012399 }, // "Quest: Candy Bucket Reward (#12399)"
    { 12400, 1012400 }, // "Quest: Candy Bucket Reward (#12400)"
    { 12401, 1012401 }, // "Quest: Candy Bucket Reward (#12401)"
    { 12402, 1012402 }, // "Quest: Candy Bucket Reward (#12402)"
    { 12403, 1012403 }, // "Quest: Candy Bucket Reward (#12403)"
    { 12404, 1012404 }, // "Quest: Candy Bucket Reward (#12404)"
    { 12405, 1012405 }, // "Quest: Candy Bucket Reward (#12405)"
    { 12406, 1012406 }, // "Quest: Candy Bucket Reward (#12406)"
    { 12407, 1012407 }, // "Quest: Candy Bucket Reward (#12407)"
    { 12408, 1012408 }, // "Quest: Candy Bucket Reward (#12408)"
    { 12409, 1012409 }, // "Quest: Candy Bucket Reward (#12409)"
    { 12410, 1012410 }, // "Quest: Candy Bucket Reward (#12410)"
    { 12412, 1012412 }, // "Quest: My Enemy's Friend Reward (#12412)"
    { 12413, 1012413 }, // "Quest: Attack on Silverbrook Reward (#12413)"
    { 12418, 1012418 }, // "Quest: Through Fields of Flame Reward (#12418)"
    { 12431, 1012431 }, // "Quest: The Conquest Pit: Final Showdown Reward (#12431)"
    { 12432, 1012432 }, // "Quest: Riding the Red Rocket Reward (#12432)"
    { 12433, 1012433 }, // "Quest: Seeking Solvent Reward (#12433)"
    { 12434, 1012434 }, // "Quest: Always Seeking Solvent Reward (#12434)"
    { 12437, 1012437 }, // "Quest: Riding the Red Rocket Reward (#12437)"
    { 12438, 1012438 }, // "Quest: Wanted: Kreug Oathbreaker Reward (#12438)"
    { 12441, 1012441 }, // "Quest: Wanted: High Shaman Bloodpaw Reward (#12441)"
    { 12442, 1012442 }, // "Quest: Wanted: Onslaught Commander Iustus Reward (#12442)"
    { 12443, 1012443 }, // "Quest: Seeking Solvent Reward (#12443)"
    { 12444, 1012444 }, // "Quest: Blackriver Skirmish Reward (#12444)"
    { 12446, 1012446 }, // "Quest: Always Seeking Solvent Reward (#12446)"
    { 12450, 1012450 }, // "Quest: Through Fields of Flame Reward (#12450)"
    { 12453, 1012453 }, // "Quest: Eyes Above Reward (#12453)"
    { 12456, 1012456 }, // "Quest: The Plume of Alystros Reward (#12456)"
    { 12459, 1012459 }, // "Quest: That Which Creates Can Also Destroy Reward (#12459)"
    { 12462, 1012462 }, // "Quest: Breaking Off A Piece Reward (#12462)"
    { 12464, 1012464 }, // "Quest: My Old Enemy Reward (#12464)"
    { 12467, 1012467 }, // "Quest: Chasing Icestorm: Thel'zan's Phylactery Reward (#12467)"
    { 12470, 1012470 }, // "Quest: Mystery of the Infinite Reward (#12470)"
    { 12474, 1012474 }, // "Quest: To Fordragon Hold! Reward (#12474)"
    { 12476, 1012476 }, // "Quest: The Return of the Crusade? Reward (#12476)"
    { 12478, 1012478 }, // "Quest: Frostmourne Cavern Reward (#12478)"
    { 12481, 1012481 }, // "Quest: Adding Injury to Insult Reward (#12481)"
    { 12491, 1012491 }, // "Quest: Direbrew's Dire Brew Reward (#12491)"
    { 12492, 1012492 }, // "Quest: Direbrew's Dire Brew Reward (#12492)"
    { 12498, 1012498 }, // "Quest: On Ruby Wings Reward (#12498)"
    { 12504, 1012504 }, // "Quest: Argent Crusade, We Are Leaving! Reward (#12504)"
    { 12510, 1012510 }, // "Quest: Precious Elemental Fluids Reward (#12510)"
    { 12512, 1012512 }, // "Quest: Leave No One Behind Reward (#12512)"
    { 12513, 1012513 }, // "Quest: Nice Hat... Reward (#12513)"
    { 12515, 1012515 }, // "Quest: Nice Hat... Reward (#12515)"
    { 12516, 1012516 }, // "Quest: Too Much of a Good Thing Reward (#12516)"
    { 12517, 1012517 }, // "Quest: Rogues Deck Reward (#12517)"
    { 12518, 1012518 }, // "Quest: Mages Deck Reward (#12518)"
    { 12525, 1012525 }, // "Quest: Wipe That Grin Off His Face Reward (#12525)"
    { 12532, 1012532 }, // "Quest: Flown the Coop! Reward (#12532)"
    { 12534, 1012534 }, // "Quest: The Sapphire Queen Reward (#12534)"
    { 12537, 1012537 }, // "Quest: Lightning Definitely Strikes Twice Reward (#12537)"
    { 12545, 1012545 }, // "Quest: The Cleansing Of Jintha'kalar Reward (#12545)"
    { 12546, 1012546 }, // "Quest: Reclamation Reward (#12546)"
    { 12547, 1012547 }, // "Quest: The Activation Rune Reward (#12547)"
    { 12554, 1012554 }, // "Quest: Malas the Corrupter Reward (#12554)"
    { 12555, 1012555 }, // "Quest: A Tangled Skein Reward (#12555)"
    { 12556, 1012556 }, // "Quest: Rhino Mastery: The Kill Reward (#12556)"
    { 12558, 1012558 }, // "Quest: Dreadsaber Mastery: Ready to Pounce Reward (#12558)"
    { 12561, 1012561 }, // "Quest: An Issue of Trust Reward (#12561)"
    { 12569, 1012569 }, // "Quest: Crocolisk Mastery: The Ambush Reward (#12569)"
    { 12570, 1012570 }, // "Quest: Fortunate Misunderstandings Reward (#12570)"
    { 12573, 1012573 }, // "Quest: Making Peace Reward (#12573)"
    { 12575, 1012575 }, // "Quest: The Lost Mistwhisper Treasure Reward (#12575)"
    { 12581, 1012581 }, // "Quest: A Hero's Burden Reward (#12581)"
    { 12584, 1012584 }, // "Quest: Pure Evil Reward (#12584)"
    { 12592, 1012592 }, // "Quest: The Great Hunter's Challenge Reward (#12592)"
    { 12596, 1012596 }, // "Quest: Pa'Troll Reward (#12596)"
    { 12604, 1012604 }, // "Quest: Congratulations! Reward (#12604)"
    { 12609, 1012609 }, // "Quest: Stocking the Shelves Reward (#12609)"
    { 12610, 1012610 }, // "Quest: Clipping Their Wings Reward (#12610)"
    { 12611, 1012611 }, // "Quest: Returned Sevenfold Reward (#12611)"
    { 12614, 1012614 }, // "Quest: Post-partum Aggression Reward (#12614)"
    { 12616, 1012616 }, // "Quest: Chamber of Secrets Reward (#12616)"
    { 12617, 1012617 }, // "Quest: Exterminate the Intruders Reward (#12617)"
    { 12619, 1012619 }, // "Quest: The Emblazoned Runeblade Reward (#12619)"
    { 12622, 1012622 }, // "Quest: The Leaders at Jin'Alai Reward (#12622)"
    { 12624, 1012624 }, // "Quest: It Could Be Anywhere! Reward (#12624)"
    { 12632, 1012632 }, // "Quest: But First My Offspring Reward (#12632)"
    { 12639, 1012639 }, // "Quest: The Frozen Earth Reward (#12639)"
    { 12647, 1012647 }, // "Quest: An End to the Suffering Reward (#12647)"
    { 12652, 1012652 }, // "Quest: Feedin' Da Goolz Reward (#12652)"
    { 12657, 1012657 }, // "Quest: The Might Of The Scourge Reward (#12657)"
    { 12661, 1012661 }, // "Quest: Infiltrating Voltarus Reward (#12661)"
    { 12662, 1012662 }, // "Quest: Bringing Down Heb'Jin Reward (#12662)"
    { 12669, 1012669 }, // "Quest: So Far, So Bad Reward (#12669)"
    { 12674, 1012674 }, // "Quest: Hell Hath a Fury Reward (#12674)"
    { 12676, 1012676 }, // "Quest: Sabotage Reward (#12676)"
    { 12678, 1012678 }, // "Quest: If Chaos Drives, Let Suffering Hold The Reins Reward (#12678)"
    { 12679, 1012679 }, // "Quest: Tonight We Dine In Havenshire Reward (#12679)"
    { 12681, 1012681 }, // "Quest: Reagent Agent Reward (#12681)"
    { 12685, 1012685 }, // "Quest: You Reap What You Sow Reward (#12685)"
    { 12687, 1012687 }, // "Quest: Into the Realm of Shadows Reward (#12687)"
    { 12691, 1012691 }, // "Quest: A Timeworn Coffer Reward (#12691)"
    { 12698, 1012698 }, // "Quest: The Gift That Keeps On Giving Reward (#12698)"
    { 12701, 1012701 }, // "Quest: Massacre At Light's Point Reward (#12701)"
    { 12706, 1012706 }, // "Quest: Victory At Death's Breach! Reward (#12706)"
    { 12707, 1012707 }, // "Quest: Wooly Justice Reward (#12707)"
    { 12709, 1012709 }, // "Quest: Hexed Caches Reward (#12709)"
    { 12713, 1012713 }, // "Quest: Betrayal Reward (#12713)"
    { 12716, 1012716 }, // "Quest: The Plaguebringer's Request Reward (#12716)"
    { 12717, 1012717 }, // "Quest: Noth's Special Brew Reward (#12717)"
    { 12718, 1012718 }, // "Quest: More Skulls For Brew Reward (#12718)"
    { 12720, 1012720 }, // "Quest: How To Win Friends And Influence Enemies Reward (#12720)"
    { 12721, 1012721 }, // "Quest: Rampage Reward (#12721)"
    { 12722, 1012722 }, // "Quest: Lambs To The Slaughter Reward (#12722)"
    { 12724, 1012724 }, // "Quest: The Path Of The Righteous Crusader Reward (#12724)"
    { 12727, 1012727 }, // "Quest: Bloody Breakout Reward (#12727)"
    { 12728, 1012728 }, // "Quest: Monitoring the Rift: Winterfin Cavern Reward (#12728)"
    { 12730, 1012730 }, // "Quest: Convocation at Zol'Heb Reward (#12730)"
    { 12733, 1012733 }, // "Quest: Death's Challenge Reward (#12733)"
    { 12740, 1012740 }, // "Quest: Parachutes for the Argent Crusade Reward (#12740)"
    { 12751, 1012751 }, // "Quest: A Sort Of Homecoming Reward (#12751)"
    { 12757, 1012757 }, // "Quest: Scarlet Armies Approach... Reward (#12757)"
    { 12779, 1012779 }, // "Quest: An End To All Things... Reward (#12779)"
    { 12781, 1012781 }, // "Quest: Welcome! Reward (#12781)"
    { 12798, 1012798 }, // "Quest: Swords Deck Reward (#12798)"
    { 12801, 1012801 }, // "Quest: The Light of Dawn Reward (#12801)"
    { 12814, 1012814 }, // "Quest: You'll Need a Gryphon Reward (#12814)"
    { 12820, 1012820 }, // "Quest: A Delicate Touch Reward (#12820)"
    { 12824, 1012824 }, // "Quest: Demolitionist Extraordinaire Reward (#12824)"
    { 12828, 1012828 }, // "Quest: Ample Inspiration Reward (#12828)"
    { 12832, 1012832 }, // "Quest: Bitter Departure Reward (#12832)"
    { 12840, 1012840 }, // "Quest: In Strict Confidence Reward (#12840)"
    { 12843, 1012843 }, // "Quest: They Took Our Men! Reward (#12843)"
    { 12852, 1012852 }, // "Quest: The Admiral Revealed Reward (#12852)"
    { 12857, 1012857 }, // "Quest: Wanted: Ragemane's Flipper Reward (#12857)"
    { 12859, 1012859 }, // "Quest: This Just In: Fire Still Hot! Reward (#12859)"
    { 12861, 1012861 }, // "Quest: Trolls Is Gone Crazy! Reward (#12861)"
    { 12865, 1012865 }, // "Quest: Loyal Companions Reward (#12865)"
    { 12868, 1012868 }, // "Quest: Sirana Iceshriek Reward (#12868)"
    { 12870, 1012870 }, // "Quest: Ancient Relics Reward (#12870)"
    { 12872, 1012872 }, // "Quest: Norgannon's Shell Reward (#12872)"
    { 12874, 1012874 }, // "Quest: Fervor of the Frostborn Reward (#12874)"
    { 12882, 1012882 }, // "Quest: Ancient Relics Reward (#12882)"
    { 12886, 1012886 }, // "Quest: The Drakkensryd Reward (#12886)"
    { 12893, 1012893 }, // "Quest: Free Your Mind Reward (#12893)"
    { 12898, 1012898 }, // "Quest: The Shadow Vault Reward (#12898)"
    { 12899, 1012899 }, // "Quest: The Shadow Vault Reward (#12899)"
    { 12900, 1012900 }, // "Quest: Making a Harness Reward (#12900)"
    { 12903, 1012903 }, // "Quest: That's What Friends Are For... Reward (#12903)"
    { 12906, 1012906 }, // "Quest: Discipline Reward (#12906)"
    { 12918, 1012918 }, // "Quest: Gem Perfection Reward (#12918)"
    { 12919, 1012919 }, // "Quest: The Storm King's Vengeance Reward (#12919)"
    { 12924, 1012924 }, // "Quest: Forging an Alliance Reward (#12924)"
    { 12928, 1012928 }, // "Quest: Norgannon's Shell Reward (#12928)"
    { 12935, 1012935 }, // "Quest: The Amphitheater of Anguish: Tuskarrmageddon! Reward (#12935)"
    { 12940, 1012940 }, // "Quest: Candy Bucket Reward (#12940)"
    { 12941, 1012941 }, // "Quest: Candy Bucket Reward (#12941)"
    { 12942, 1012942 }, // "Quest: Off With Their Black Wings Reward (#12942)"
    { 12943, 1012943 }, // "Quest: Shadow Vault Decree Reward (#12943)"
    { 12944, 1012944 }, // "Quest: Candy Bucket Reward (#12944)"
    { 12945, 1012945 }, // "Quest: Candy Bucket Reward (#12945)"
    { 12946, 1012946 }, // "Quest: Candy Bucket Reward (#12946)"
    { 12947, 1012947 }, // "Quest: Candy Bucket Reward (#12947)"
    { 12948, 1012948 }, // "Quest: The Champion of Anguish Reward (#12948)"
    { 12950, 1012950 }, // "Quest: Candy Bucket Reward (#12950)"
    { 12952, 1012952 }, // "Quest: Gem Perfection Reward (#12952)"
    { 12953, 1012953 }, // "Quest: Valkyrion Must Burn Reward (#12953)"
    { 12955, 1012955 }, // "Quest: Eliminate the Competition Reward (#12955)"
    { 12958, 1012958 }, // "Quest: Shipment: Blood Jade Amulet  Reward (#12958)"
    { 12959, 1012959 }, // "Quest: Shipment: Glowing Ivory Figurine Reward (#12959)"
    { 12960, 1012960 }, // "Quest: Shipment: Wicked Sun Brooch Reward (#12960)"
    { 12961, 1012961 }, // "Quest: Shipment: Intricate Bone Figurine Reward (#12961)"
    { 12962, 1012962 }, // "Quest: Shipment: Bright Armor Relic Reward (#12962)"
    { 12963, 1012963 }, // "Quest: Shipment: Shifting Sun Curio  Reward (#12963)"
    { 12965, 1012965 }, // "Quest: The Gifts of Loken Reward (#12965)"
    { 12971, 1012971 }, // "Quest: Taking on All Challengers Reward (#12971)"
    { 12973, 1012973 }, // "Quest: The Brothers Bronzebeard Reward (#12973)"
    { 12982, 1012982 }, // "Quest: Ebon Blade Prisoners Reward (#12982)"
    { 12984, 1012984 }, // "Quest: Valduran the Stormborn Reward (#12984)"
    { 12986, 1012986 }, // "Quest: Fate of the Titans Reward (#12986)"
    { 12989, 1012989 }, // "Quest: The Slithering Darkness Reward (#12989)"
    { 12992, 1012992 }, // "Quest: Crush Dem Vrykuls! Reward (#12992)"
    { 13000, 1013000 }, // "Quest: Emergency Measures Reward (#13000)"
    { 13002, 1013002 }, // "Quest: Gem Perfection Reward (#13002)"
    { 13004, 1013004 }, // "Quest: Gem Perfection Reward (#13004)"
    { 13005, 1013005 }, // "Quest: The Earthen Oath Reward (#13005)"
    { 13007, 1013007 }, // "Quest: The Iron Colossus Reward (#13007)"
    { 13010, 1013010 }, // "Quest: Krolmir, Hammer of Storms Reward (#13010)"
    { 13012, 1013012 }, // "Quest: Sardis the Elder Reward (#13012)"
    { 13013, 1013013 }, // "Quest: Beldak the Elder Reward (#13013)"
    { 13014, 1013014 }, // "Quest: Morthie the Elder Reward (#13014)"
    { 13015, 1013015 }, // "Quest: Fargal the Elder Reward (#13015)"
    { 13016, 1013016 }, // "Quest: Northal the Elder Reward (#13016)"
    { 13017, 1013017 }, // "Quest: Jarten the Elder Reward (#13017)"
    { 13018, 1013018 }, // "Quest: Sandrene the Elder Reward (#13018)"
    { 13019, 1013019 }, // "Quest: Thoim the Elder Reward (#13019)"
    { 13020, 1013020 }, // "Quest: Stonebeard the Elder Reward (#13020)"
    { 13021, 1013021 }, // "Quest: Igasho the Elder Reward (#13021)"
    { 13022, 1013022 }, // "Quest: Nurgen the Elder Reward (#13022)"
    { 13023, 1013023 }, // "Quest: Kilias the Elder Reward (#13023)"
    { 13024, 1013024 }, // "Quest: Wanikaya the Elder Reward (#13024)"
    { 13025, 1013025 }, // "Quest: Lunaro the Elder Reward (#13025)"
    { 13026, 1013026 }, // "Quest: Bluewolf the Elder Reward (#13026)"
    { 13027, 1013027 }, // "Quest: Tauros the Elder Reward (#13027)"
    { 13028, 1013028 }, // "Quest: Graymane the Elder Reward (#13028)"
    { 13029, 1013029 }, // "Quest: Pamuya the Elder Reward (#13029)"
    { 13030, 1013030 }, // "Quest: Whurain the Elder Reward (#13030)"
    { 13031, 1013031 }, // "Quest: Skywarden the Elder Reward (#13031)"
    { 13032, 1013032 }, // "Quest: Muraco the Elder Reward (#13032)"
    { 13033, 1013033 }, // "Quest: Arp the Elder Reward (#13033)"
    { 13039, 1013039 }, // "Quest: Defending The Vanguard Reward (#13039)"
    { 13040, 1013040 }, // "Quest: Curing The Incurable Reward (#13040)"
    { 13041, 1013041 }, // "Quest: Finish the Shipment Reward (#13041)"
    { 13043, 1013043 }, // "Quest: The Sum is Greater than the Parts Reward (#13043)"
    { 13047, 1013047 }, // "Quest: The Reckoning Reward (#13047)"
    { 13051, 1013051 }, // "Quest: Territorial Trespass Reward (#13051)"
    { 13056, 1013056 }, // "Quest: There's Always Time for Revenge Reward (#13056)"
    { 13058, 1013058 }, // "Quest: Changing the Wind's Course Reward (#13058)"
    { 13059, 1013059 }, // "Quest: Revenge for the Vargul Reward (#13059)"
    { 13065, 1013065 }, // "Quest: Ohanzee the Elder Reward (#13065)"
    { 13066, 1013066 }, // "Quest: Yurauk the Elder Reward (#13066)"
    { 13067, 1013067 }, // "Quest: Chogan'gada the Elder Reward (#13067)"
    { 13083, 1013083 }, // "Quest: Light Within the Darkness Reward (#13083)"
    { 13086, 1013086 }, // "Quest: The Last Line Of Defense Reward (#13086)"
    { 13091, 1013091 }, // "Quest: The Art of Being a Water Terror Reward (#13091)"
    { 13092, 1013092 }, // "Quest: Reading the Bones Reward (#13092)"
    { 13093, 1013093 }, // "Quest: Reading the Bones Reward (#13093)"
    { 13094, 1013094 }, // "Quest: Have They No Shame? Reward (#13094)"
    { 13095, 1013095 }, // "Quest: Have They No Shame? Reward (#13095)"
    { 13096, 1013096 }, // "Quest: Gal'darah Must Pay Reward (#13096)"
    { 13098, 1013098 }, // "Quest: For Posterity Reward (#13098)"
    { 13100, 1013100 }, // "Quest: Infused Mushroom Meatloaf Reward (#13100)"
    { 13101, 1013101 }, // "Quest: Convention at the Legerdemain Reward (#13101)"
    { 13102, 1013102 }, // "Quest: Sewer Stew Reward (#13102)"
    { 13103, 1013103 }, // "Quest: Cheese for Glowergold Reward (#13103)"
    { 13107, 1013107 }, // "Quest: Mustard Dogs! Reward (#13107)"
    { 13108, 1013108 }, // "Quest: Whatever it Takes! Reward (#13108)"
    { 13109, 1013109 }, // "Quest: Diametrically Opposed Reward (#13109)"
    { 13110, 1013110 }, // "Quest: The Restless Dead Reward (#13110)"
    { 13111, 1013111 }, // "Quest: One of a Kind Reward (#13111)"
    { 13112, 1013112 }, // "Quest: Infused Mushroom Meatloaf Reward (#13112)"
    { 13113, 1013113 }, // "Quest: Convention at the Legerdemain Reward (#13113)"
    { 13114, 1013114 }, // "Quest: Sewer Stew Reward (#13114)"
    { 13115, 1013115 }, // "Quest: Cheese for Glowergold Reward (#13115)"
    { 13116, 1013116 }, // "Quest: Mustard Dogs! Reward (#13116)"
    { 13124, 1013124 }, // "Quest: The Struggle Persists Reward (#13124)"
    { 13125, 1013125 }, // "Quest: The Air Stands Still Reward (#13125)"
    { 13128, 1013128 }, // "Quest: A Wing and a Prayer Reward (#13128)"
    { 13129, 1013129 }, // "Quest: Head Games Reward (#13129)"
    { 13130, 1013130 }, // "Quest: The Stone That Started A Revolution Reward (#13130)"
    { 13131, 1013131 }, // "Quest: Junk in My Trunk Reward (#13131)"
    { 13132, 1013132 }, // "Quest: Vengeance Be Mine! Reward (#13132)"
    { 13137, 1013137 }, // "Quest: Not-So-Honorable Combat Reward (#13137)"
    { 13142, 1013142 }, // "Quest: Banshee's Revenge Reward (#13142)"
    { 13144, 1013144 }, // "Quest: Killing Two Scourge With One Skeleton Reward (#13144)"
    { 13145, 1013145 }, // "Quest: The Vile Hold Reward (#13145)"
    { 13148, 1013148 }, // "Quest: Necklace Repair Reward (#13148)"
    { 13151, 1013151 }, // "Quest: A Royal Escort Reward (#13151)"
    { 13153, 1013153 }, // "Quest: Warding the Warriors Reward (#13153)"
    { 13154, 1013154 }, // "Quest: Bones and Arrows Reward (#13154)"
    { 13156, 1013156 }, // "Quest: A Rare Herb Reward (#13156)"
    { 13157, 1013157 }, // "Quest: The Crusaders' Pinnacle Reward (#13157)"
    { 13159, 1013159 }, // "Quest: Containment Reward (#13159)"
    { 13161, 1013161 }, // "Quest: The Rider of the Unholy Reward (#13161)"
    { 13162, 1013162 }, // "Quest: The Rider of Frost Reward (#13162)"
    { 13163, 1013163 }, // "Quest: The Rider of Blood Reward (#13163)"
    { 13164, 1013164 }, // "Quest: The Fate of Bloodbane Reward (#13164)"
    { 13167, 1013167 }, // "Quest: Death to the Traitor King Reward (#13167)"
    { 13172, 1013172 }, // "Quest: Seeds of Chaos Reward (#13172)"
    { 13177, 1013177 }, // "Quest: No Mercy for the Merciless Reward (#13177)"
    { 13178, 1013178 }, // "Quest: Slay them all! Reward (#13178)"
    { 13179, 1013179 }, // "Quest: No Mercy for the Merciless Reward (#13179)"
    { 13180, 1013180 }, // "Quest: Slay them all! Reward (#13180)"
    { 13181, 1013181 }, // "Quest: Victory in Wintergrasp Reward (#13181)"
    { 13182, 1013182 }, // "Quest: Don't Forget the Eggs! Reward (#13182)"
    { 13183, 1013183 }, // "Quest: Victory in Wintergrasp Reward (#13183)"
    { 13185, 1013185 }, // "Quest: Stop the Siege Reward (#13185)"
    { 13186, 1013186 }, // "Quest: Stop the Siege Reward (#13186)"
    { 13187, 1013187 }, // "Quest: The Faceless Ones Reward (#13187)"
    { 13191, 1013191 }, // "Quest: Fueling the Demolishers Reward (#13191)"
    { 13192, 1013192 }, // "Quest: Warding the Walls Reward (#13192)"
    { 13193, 1013193 }, // "Quest: Bones and Arrows Reward (#13193)"
    { 13194, 1013194 }, // "Quest: Healing with Roses Reward (#13194)"
    { 13195, 1013195 }, // "Quest: A Rare Herb Reward (#13195)"
    { 13196, 1013196 }, // "Quest: Bones and Arrows Reward (#13196)"
    { 13197, 1013197 }, // "Quest: Fueling the Demolishers Reward (#13197)"
    { 13198, 1013198 }, // "Quest: Warding the Warriors Reward (#13198)"
    { 13199, 1013199 }, // "Quest: Bones and Arrows Reward (#13199)"
    { 13200, 1013200 }, // "Quest: Fueling the Demolishers Reward (#13200)"
    { 13201, 1013201 }, // "Quest: Healing with Roses Reward (#13201)"
    { 13202, 1013202 }, // "Quest: Jinxing the Walls Reward (#13202)"
    { 13203, 1013203 }, // "Quest: A Winter Veil Gift Reward (#13203)"
    { 13205, 1013205 }, // "Quest: Disarmament Reward (#13205)"
    { 13206, 1013206 }, // "Quest: Disarmament Reward (#13206)"
    { 13207, 1013207 }, // "Quest: Halls of Stone Reward (#13207)"
    { 13211, 1013211 }, // "Quest: By Fire Be Purged Reward (#13211)"
    { 13216, 1013216 }, // "Quest: Battle at Valhalas: The Return of Sigrid Iceborn Reward (#13216)"
    { 13219, 1013219 }, // "Quest: Battle at Valhalas: Final Challenge Reward (#13219)"
    { 13222, 1013222 }, // "Quest: Defend the Siege Reward (#13222)"
    { 13223, 1013223 }, // "Quest: Defend the Siege Reward (#13223)"
    { 13235, 1013235 }, // "Quest: The Flesh Giant Champion Reward (#13235)"
    { 13237, 1013237 }, // "Quest: Poke and Prod Reward (#13237)"
    { 13239, 1013239 }, // "Quest: Volatility Reward (#13239)"
    { 13240, 1013240 }, // "Quest: Timear Foresees Centrifuge Constructs in your Future! Reward (#13240)"
    { 13241, 1013241 }, // "Quest: Timear Foresees Ymirjar Berserkers in your Future! Reward (#13241)"
    { 13243, 1013243 }, // "Quest: Timear Foresees Infinite Agents in your Future! Reward (#13243)"
    { 13244, 1013244 }, // "Quest: Timear Foresees Titanium Vanguards in your Future! Reward (#13244)"
    { 13245, 1013245 }, // "Quest: Proof of Demise: Ingvar the Plunderer Reward (#13245)"
    { 13246, 1013246 }, // "Quest: Proof of Demise: Keristrasza Reward (#13246)"
    { 13247, 1013247 }, // "Quest: Proof of Demise: Ley-Guardian Eregos Reward (#13247)"
    { 13248, 1013248 }, // "Quest: Proof of Demise: King Ymiron Reward (#13248)"
    { 13249, 1013249 }, // "Quest: Proof of Demise: The Prophet Tharon'ja Reward (#13249)"
    { 13250, 1013250 }, // "Quest: Proof of Demise: Gal'darah Reward (#13250)"
    { 13251, 1013251 }, // "Quest: Proof of Demise: Mal'Ganis Reward (#13251)"
    { 13252, 1013252 }, // "Quest: Proof of Demise: Sjonnir The Ironshaper Reward (#13252)"
    { 13253, 1013253 }, // "Quest: Proof of Demise: Loken Reward (#13253)"
    { 13254, 1013254 }, // "Quest: Proof of Demise: Anub'arak Reward (#13254)"
    { 13255, 1013255 }, // "Quest: Proof of Demise: Herald Volazj Reward (#13255)"
    { 13256, 1013256 }, // "Quest: Proof of Demise: Cyanigosa Reward (#13256)"
    { 13259, 1013259 }, // "Quest: Establishing Superiority Reward (#13259)"
    { 13264, 1013264 }, // "Quest: That's Abominable! Reward (#13264)"
    { 13267, 1013267 }, // "Quest: The Battle For The Undercity Reward (#13267)"
    { 13275, 1013275 }, // "Quest: Time to Hide Reward (#13275)"
    { 13279, 1013279 }, // "Quest: Basic Chemistry Reward (#13279)"
    { 13285, 1013285 }, // "Quest: Forging the Keystone Reward (#13285)"
    { 13287, 1013287 }, // "Quest: Poke and Prod Reward (#13287)"
    { 13288, 1013288 }, // "Quest: That's Abominable! Reward (#13288)"
    { 13291, 1013291 }, // "Quest: Borrowed Technology Reward (#13291)"
    { 13295, 1013295 }, // "Quest: Basic Chemistry Reward (#13295)"
    { 13305, 1013305 }, // "Quest: Do Your Worst Reward (#13305)"
    { 13308, 1013308 }, // "Quest: Mind Tricks Reward (#13308)"
    { 13311, 1013311 }, // "Quest: Demons Deck Reward (#13311)"
    { 13319, 1013319 }, // "Quest: Chain of Command Reward (#13319)"
    { 13321, 1013321 }, // "Quest: Retest Now Reward (#13321)"
    { 13324, 1013324 }, // "Quest: Darkmoon Prisms Deck Reward (#13324)"
    { 13325, 1013325 }, // "Quest: Darkmoon Chaos Deck Reward (#13325)"
    { 13326, 1013326 }, // "Quest: Darkmoon Nobles Deck Reward (#13326)"
    { 13327, 1013327 }, // "Quest: Darkmoon Undeath Deck Reward (#13327)"
    { 13342, 1013342 }, // "Quest: Not a Bug Reward (#13342)"
    { 13343, 1013343 }, // "Quest: Mystery of the Infinite, Redux Reward (#13343)"
    { 13346, 1013346 }, // "Quest: No Rest For The Wicked Reward (#13346)"
    { 13349, 1013349 }, // "Quest: Cradle of the Frostbrood Reward (#13349)"
    { 13354, 1013354 }, // "Quest: Chain of Command Reward (#13354)"
    { 13356, 1013356 }, // "Quest: Retest Now Reward (#13356)"
    { 13358, 1013358 }, // "Quest: Not a Bug Reward (#13358)"
    { 13361, 1013361 }, // "Quest: The Hunter and the Prince Reward (#13361)"
    { 13364, 1013364 }, // "Quest: Tirion's Gambit Reward (#13364)"
    { 13367, 1013367 }, // "Quest: No Rest For The Wicked Reward (#13367)"
    { 13372, 1013372 }, // "Quest: The Key to the Focusing Iris Reward (#13372)"
    { 13375, 1013375 }, // "Quest: The Heroic Key to the Focusing Iris Reward (#13375)"
    { 13377, 1013377 }, // "Quest: The Battle For The Undercity Reward (#13377)"
    { 13384, 1013384 }, // "Quest: Judgment at the Eye of Eternity Reward (#13384)"
    { 13385, 1013385 }, // "Quest: Heroic Judgment at the Eye of Eternity Reward (#13385)"
    { 13387, 1013387 }, // "Quest: Securing the Perimeter Reward (#13387)"
    { 13391, 1013391 }, // "Quest: Time to Hide Reward (#13391)"
    { 13394, 1013394 }, // "Quest: Do Your Worst Reward (#13394)"
    { 13397, 1013397 }, // "Quest: Sindragosa's Fall Reward (#13397)"
    { 13400, 1013400 }, // "Quest: The Hunter and the Prince Reward (#13400)"
    { 13403, 1013403 }, // "Quest: Tirion's Gambit Reward (#13403)"
    { 13408, 1013408 }, // "Quest: Hellfire Fortifications Reward (#13408)"
    { 13409, 1013409 }, // "Quest: Hellfire Fortifications Reward (#13409)"
    { 13410, 1013410 }, // "Quest: Hellfire Fortifications Reward (#13410)"
    { 13411, 1013411 }, // "Quest: Hellfire Fortifications Reward (#13411)"
    { 13413, 1013413 }, // "Quest: Aces High! Reward (#13413)"
    { 13417, 1013417 }, // "Quest: The Brothers Bronzebeard Reward (#13417)"
    { 13422, 1013422 }, // "Quest: Maintaining Discipline Reward (#13422)"
    { 13423, 1013423 }, // "Quest: Defending Your Title Reward (#13423)"
    { 13424, 1013424 }, // "Quest: Back to the Pit Reward (#13424)"
    { 13425, 1013425 }, // "Quest: The Aberrations Must Die Reward (#13425)"
    { 13429, 1013429 }, // "Quest: A Distraction for Akama Reward (#13429)"
    { 13430, 1013430 }, // "Quest: Trial of the Naaru: Magtheridon Reward (#13430)"
    { 13433, 1013433 }, // "Quest: Candy Bucket Reward (#13433)"
    { 13434, 1013434 }, // "Quest: Candy Bucket Reward (#13434)"
    { 13435, 1013435 }, // "Quest: Candy Bucket Reward (#13435)"
    { 13436, 1013436 }, // "Quest: Candy Bucket Reward (#13436)"
    { 13437, 1013437 }, // "Quest: Candy Bucket Reward (#13437)"
    { 13438, 1013438 }, // "Quest: Candy Bucket Reward (#13438)"
    { 13439, 1013439 }, // "Quest: Candy Bucket Reward (#13439)"
    { 13440, 1013440 }, // "Quest: Desecrate this Fire! Reward (#13440)"
    { 13441, 1013441 }, // "Quest: Desecrate this Fire! Reward (#13441)"
    { 13442, 1013442 }, // "Quest: Desecrate this Fire! Reward (#13442)"
    { 13443, 1013443 }, // "Quest: Desecrate this Fire! Reward (#13443)"
    { 13444, 1013444 }, // "Quest: Desecrate this Fire! Reward (#13444)"
    { 13445, 1013445 }, // "Quest: Desecrate this Fire! Reward (#13445)"
    { 13446, 1013446 }, // "Quest: Desecrate this Fire! Reward (#13446)"
    { 13447, 1013447 }, // "Quest: Desecrate this Fire! Reward (#13447)"
    { 13448, 1013448 }, // "Quest: Candy Bucket Reward (#13448)"
    { 13449, 1013449 }, // "Quest: Desecrate this Fire! Reward (#13449)"
    { 13450, 1013450 }, // "Quest: Desecrate this Fire! Reward (#13450)"
    { 13451, 1013451 }, // "Quest: Desecrate this Fire! Reward (#13451)"
    { 13452, 1013452 }, // "Quest: Candy Bucket Reward (#13452)"
    { 13453, 1013453 }, // "Quest: Desecrate this Fire! Reward (#13453)"
    { 13454, 1013454 }, // "Quest: Desecrate this Fire! Reward (#13454)"
    { 13455, 1013455 }, // "Quest: Desecrate this Fire! Reward (#13455)"
    { 13456, 1013456 }, // "Quest: Candy Bucket Reward (#13456)"
    { 13457, 1013457 }, // "Quest: Desecrate this Fire! Reward (#13457)"
    { 13458, 1013458 }, // "Quest: Desecrate this Fire! Reward (#13458)"
    { 13459, 1013459 }, // "Quest: Candy Bucket Reward (#13459)"
    { 13460, 1013460 }, // "Quest: Candy Bucket Reward (#13460)"
    { 13461, 1013461 }, // "Quest: Candy Bucket Reward (#13461)"
    { 13462, 1013462 }, // "Quest: Candy Bucket Reward (#13462)"
    { 13463, 1013463 }, // "Quest: Candy Bucket Reward (#13463)"
    { 13464, 1013464 }, // "Quest: Candy Bucket Reward (#13464)"
    { 13465, 1013465 }, // "Quest: Candy Bucket Reward (#13465)"
    { 13466, 1013466 }, // "Quest: Candy Bucket Reward (#13466)"
    { 13467, 1013467 }, // "Quest: Candy Bucket Reward (#13467)"
    { 13468, 1013468 }, // "Quest: Candy Bucket Reward (#13468)"
    { 13469, 1013469 }, // "Quest: Candy Bucket Reward (#13469)"
    { 13470, 1013470 }, // "Quest: Candy Bucket Reward (#13470)"
    { 13471, 1013471 }, // "Quest: Candy Bucket Reward (#13471)"
    { 13472, 1013472 }, // "Quest: Candy Bucket Reward (#13472)"
    { 13473, 1013473 }, // "Quest: Candy Bucket Reward (#13473)"
    { 13474, 1013474 }, // "Quest: Candy Bucket Reward (#13474)"
    { 13479, 1013479 }, // "Quest: The Great Egg Hunt Reward (#13479)"
    { 13480, 1013480 }, // "Quest: The Great Egg Hunt Reward (#13480)"
    { 13485, 1013485 }, // "Quest: Honor the Flame Reward (#13485)"
    { 13486, 1013486 }, // "Quest: Honor the Flame Reward (#13486)"
    { 13487, 1013487 }, // "Quest: Honor the Flame Reward (#13487)"
    { 13488, 1013488 }, // "Quest: Honor the Flame Reward (#13488)"
    { 13489, 1013489 }, // "Quest: Honor the Flame Reward (#13489)"
    { 13490, 1013490 }, // "Quest: Honor the Flame Reward (#13490)"
    { 13491, 1013491 }, // "Quest: Honor the Flame Reward (#13491)"
    { 13492, 1013492 }, // "Quest: Honor the Flame Reward (#13492)"
    { 13493, 1013493 }, // "Quest: Honor the Flame Reward (#13493)"
    { 13494, 1013494 }, // "Quest: Honor the Flame Reward (#13494)"
    { 13495, 1013495 }, // "Quest: Honor the Flame Reward (#13495)"
    { 13496, 1013496 }, // "Quest: Honor the Flame Reward (#13496)"
    { 13497, 1013497 }, // "Quest: Honor the Flame Reward (#13497)"
    { 13498, 1013498 }, // "Quest: Honor the Flame Reward (#13498)"
    { 13499, 1013499 }, // "Quest: Honor the Flame Reward (#13499)"
    { 13500, 1013500 }, // "Quest: Honor the Flame Reward (#13500)"
    { 13501, 1013501 }, // "Quest: Candy Bucket Reward (#13501)"
    { 13502, 1013502 }, // "Quest: A Tisket, a Tasket, a Noblegarden Basket Reward (#13502)"
    { 13503, 1013503 }, // "Quest: A Tisket, a Tasket, a Noblegarden Basket Reward (#13503)"
    { 13524, 1013524 }, // "Quest: Escape from Silverbrook Reward (#13524)"
    { 13538, 1013538 }, // "Quest: Southern Sabotage Reward (#13538)"
    { 13539, 1013539 }, // "Quest: Toppling the Towers Reward (#13539)"
    { 13548, 1013548 }, // "Quest: Candy Bucket Reward (#13548)"
    { 13592, 1013592 }, // "Quest: A Valiant's Field Training Reward (#13592)"
    { 13600, 1013600 }, // "Quest: A Worthy Weapon Reward (#13600)"
    { 13603, 1013603 }, // "Quest: A Blade Fit For A Champion Reward (#13603)"
    { 13614, 1013614 }, // "Quest: Algalon Reward (#13614)"
    { 13616, 1013616 }, // "Quest: The Edge Of Winter Reward (#13616)"
    { 13625, 1013625 }, // "Quest: Learning The Reins Reward (#13625)"
    { 13629, 1013629 }, // "Quest: Val'anyr, Hammer of Ancient Kings Reward (#13629)"
    { 13631, 1013631 }, // "Quest: All Is Well That Ends Well Reward (#13631)"
    { 13665, 1013665 }, // "Quest: The Grand Melee Reward (#13665)"
    { 13666, 1013666 }, // "Quest: A Blade Fit For A Champion Reward (#13666)"
    { 13669, 1013669 }, // "Quest: A Worthy Weapon Reward (#13669)"
    { 13670, 1013670 }, // "Quest: The Edge Of Winter Reward (#13670)"
    { 13671, 1013671 }, // "Quest: Training In The Field Reward (#13671)"
    { 13673, 1013673 }, // "Quest: A Blade Fit For A Champion Reward (#13673)"
    { 13674, 1013674 }, // "Quest: A Worthy Weapon Reward (#13674)"
    { 13675, 1013675 }, // "Quest: The Edge Of Winter Reward (#13675)"
    { 13676, 1013676 }, // "Quest: Training In The Field Reward (#13676)"
    { 13677, 1013677 }, // "Quest: Learning The Reins Reward (#13677)"
    { 13682, 1013682 }, // "Quest: Threat From Above Reward (#13682)"
    { 13692, 1013692 }, // "Quest: The Sword and the Sea Reward (#13692)"
    { 13702, 1013702 }, // "Quest: A Champion Rises Reward (#13702)"
    { 13732, 1013732 }, // "Quest: A Champion Rises Reward (#13732)"
    { 13733, 1013733 }, // "Quest: A Champion Rises Reward (#13733)"
    { 13734, 1013734 }, // "Quest: A Champion Rises Reward (#13734)"
    { 13735, 1013735 }, // "Quest: A Champion Rises Reward (#13735)"
    { 13736, 1013736 }, // "Quest: A Champion Rises Reward (#13736)"
    { 13737, 1013737 }, // "Quest: A Champion Rises Reward (#13737)"
    { 13738, 1013738 }, // "Quest: A Champion Rises Reward (#13738)"
    { 13739, 1013739 }, // "Quest: A Champion Rises Reward (#13739)"
    { 13740, 1013740 }, // "Quest: A Champion Rises Reward (#13740)"
    { 13741, 1013741 }, // "Quest: A Blade Fit For A Champion Reward (#13741)"
    { 13742, 1013742 }, // "Quest: A Worthy Weapon Reward (#13742)"
    { 13743, 1013743 }, // "Quest: The Edge Of Winter Reward (#13743)"
    { 13744, 1013744 }, // "Quest: A Valiant's Field Training Reward (#13744)"
    { 13745, 1013745 }, // "Quest: The Grand Melee Reward (#13745)"
    { 13746, 1013746 }, // "Quest: A Blade Fit For A Champion Reward (#13746)"
    { 13747, 1013747 }, // "Quest: A Worthy Weapon Reward (#13747)"
    { 13748, 1013748 }, // "Quest: The Edge Of Winter Reward (#13748)"
    { 13749, 1013749 }, // "Quest: A Valiant's Field Training Reward (#13749)"
    { 13750, 1013750 }, // "Quest: The Grand Melee Reward (#13750)"
    { 13752, 1013752 }, // "Quest: A Blade Fit For A Champion Reward (#13752)"
    { 13753, 1013753 }, // "Quest: A Worthy Weapon Reward (#13753)"
    { 13754, 1013754 }, // "Quest: The Edge Of Winter Reward (#13754)"
    { 13755, 1013755 }, // "Quest: A Valiant's Field Training Reward (#13755)"
    { 13756, 1013756 }, // "Quest: The Grand Melee Reward (#13756)"
    { 13757, 1013757 }, // "Quest: A Blade Fit For A Champion Reward (#13757)"
    { 13758, 1013758 }, // "Quest: A Worthy Weapon Reward (#13758)"
    { 13759, 1013759 }, // "Quest: The Edge Of Winter Reward (#13759)"
    { 13760, 1013760 }, // "Quest: A Valiant's Field Training Reward (#13760)"
    { 13761, 1013761 }, // "Quest: The Grand Melee Reward (#13761)"
    { 13762, 1013762 }, // "Quest: A Blade Fit For A Champion Reward (#13762)"
    { 13763, 1013763 }, // "Quest: A Worthy Weapon Reward (#13763)"
    { 13764, 1013764 }, // "Quest: The Edge Of Winter Reward (#13764)"
    { 13765, 1013765 }, // "Quest: A Valiant's Field Training Reward (#13765)"
    { 13767, 1013767 }, // "Quest: The Grand Melee Reward (#13767)"
    { 13768, 1013768 }, // "Quest: A Blade Fit For A Champion Reward (#13768)"
    { 13769, 1013769 }, // "Quest: A Worthy Weapon Reward (#13769)"
    { 13770, 1013770 }, // "Quest: The Edge Of Winter Reward (#13770)"
    { 13771, 1013771 }, // "Quest: A Valiant's Field Training Reward (#13771)"
    { 13772, 1013772 }, // "Quest: The Grand Melee Reward (#13772)"
    { 13773, 1013773 }, // "Quest: A Blade Fit For A Champion Reward (#13773)"
    { 13774, 1013774 }, // "Quest: A Worthy Weapon Reward (#13774)"
    { 13775, 1013775 }, // "Quest: The Edge Of Winter Reward (#13775)"
    { 13776, 1013776 }, // "Quest: A Valiant's Field Training Reward (#13776)"
    { 13777, 1013777 }, // "Quest: The Grand Melee Reward (#13777)"
    { 13778, 1013778 }, // "Quest: A Blade Fit For A Champion Reward (#13778)"
    { 13779, 1013779 }, // "Quest: A Worthy Weapon Reward (#13779)"
    { 13780, 1013780 }, // "Quest: The Edge Of Winter Reward (#13780)"
    { 13781, 1013781 }, // "Quest: A Valiant's Field Training Reward (#13781)"
    { 13782, 1013782 }, // "Quest: The Grand Melee Reward (#13782)"
    { 13783, 1013783 }, // "Quest: A Blade Fit For A Champion Reward (#13783)"
    { 13784, 1013784 }, // "Quest: A Worthy Weapon Reward (#13784)"
    { 13785, 1013785 }, // "Quest: The Edge Of Winter Reward (#13785)"
    { 13786, 1013786 }, // "Quest: A Valiant's Field Training Reward (#13786)"
    { 13787, 1013787 }, // "Quest: The Grand Melee Reward (#13787)"
    { 13788, 1013788 }, // "Quest: Threat From Above Reward (#13788)"
    { 13789, 1013789 }, // "Quest: Taking Battle To The Enemy Reward (#13789)"
    { 13790, 1013790 }, // "Quest: Among the Champions Reward (#13790)"
    { 13791, 1013791 }, // "Quest: Taking Battle To The Enemy Reward (#13791)"
    { 13793, 1013793 }, // "Quest: Among the Champions Reward (#13793)"
    { 13809, 1013809 }, // "Quest: Threat From Above Reward (#13809)"
    { 13810, 1013810 }, // "Quest: Taking Battle To The Enemy Reward (#13810)"
    { 13811, 1013811 }, // "Quest: Among the Champions Reward (#13811)"
    { 13812, 1013812 }, // "Quest: Threat From Above Reward (#13812)"
    { 13813, 1013813 }, // "Quest: Taking Battle To The Enemy Reward (#13813)"
    { 13814, 1013814 }, // "Quest: Among the Champions Reward (#13814)"
    { 13818, 1013818 }, // "Quest: Heroic: Algalon Reward (#13818)"
    { 13819, 1013819 }, // "Quest: Heroic: All Is Well That Ends Well Reward (#13819)"
    { 13826, 1013826 }, // "Quest: Nat Pagle, Angler Extreme Reward (#13826)"
    { 13827, 1013827 }, // "Quest: Treasure! Reward (#13827)"
    { 13830, 1013830 }, // "Quest: The Ghostfish Reward (#13830)"
    { 13832, 1013832 }, // "Quest: Jewel Of The Sewers Reward (#13832)"
    { 13833, 1013833 }, // "Quest: Blood Is Thicker Reward (#13833)"
    { 13834, 1013834 }, // "Quest: Dangerously Delicious Reward (#13834)"
    { 13836, 1013836 }, // "Quest: Disarmed! Reward (#13836)"
    { 13847, 1013847 }, // "Quest: At The Enemy's Gates Reward (#13847)"
    { 13851, 1013851 }, // "Quest: At The Enemy's Gates Reward (#13851)"
    { 13852, 1013852 }, // "Quest: At The Enemy's Gates Reward (#13852)"
    { 13854, 1013854 }, // "Quest: At The Enemy's Gates Reward (#13854)"
    { 13855, 1013855 }, // "Quest: At The Enemy's Gates Reward (#13855)"
    { 13856, 1013856 }, // "Quest: At The Enemy's Gates Reward (#13856)"
    { 13857, 1013857 }, // "Quest: At The Enemy's Gates Reward (#13857)"
    { 13858, 1013858 }, // "Quest: At The Enemy's Gates Reward (#13858)"
    { 13859, 1013859 }, // "Quest: At The Enemy's Gates Reward (#13859)"
    { 13860, 1013860 }, // "Quest: At The Enemy's Gates Reward (#13860)"
    { 13861, 1013861 }, // "Quest: Battle Before The Citadel Reward (#13861)"
    { 13862, 1013862 }, // "Quest: Battle Before The Citadel Reward (#13862)"
    { 13863, 1013863 }, // "Quest: Battle Before The Citadel Reward (#13863)"
    { 13864, 1013864 }, // "Quest: Battle Before The Citadel Reward (#13864)"
    { 13889, 1013889 }, // "Quest: Hungry, Hungry Hatchling Reward (#13889)"
    { 13903, 1013903 }, // "Quest: Gorishi Grub Reward (#13903)"
    { 13904, 1013904 }, // "Quest: Poached, Scrambled, Or Raw? Reward (#13904)"
    { 13905, 1013905 }, // "Quest: Searing Roc Feathers Reward (#13905)"
    { 13906, 1013906 }, // "Quest: They Grow Up So Fast Reward (#13906)"
    { 13908, 1013908 }, // "Quest: Gearing Up To Ride Reward (#13908)"
    { 13914, 1013914 }, // "Quest: Searing Roc Feathers Reward (#13914)"
    { 13915, 1013915 }, // "Quest: Hungry, Hungry Hatchling Reward (#13915)"
    { 13916, 1013916 }, // "Quest: Poached, Scrambled, Or Raw? Reward (#13916)"
    { 13917, 1013917 }, // "Quest: Gorishi Grub Reward (#13917)"
    { 13931, 1013931 }, // "Quest: Another Year, Another Souvenir. Reward (#13931)"
    { 13932, 1013932 }, // "Quest: Another Year, Another Souvenir. Reward (#13932)"
    { 13952, 1013952 }, // "Quest: The Grateful Dead Reward (#13952)"
    { 13966, 1013966 }, // "Quest: A Winter Veil Gift Reward (#13966)"
    { 14017, 1014017 }, // "Quest: The Black Knight's Fate Reward (#14017)"
    { 14035, 1014035 }, // "Quest: Slow-roasted Turkey Reward (#14035)"
    { 14047, 1014047 }, // "Quest: Slow-roasted Turkey Reward (#14047)"
    { 14048, 1014048 }, // "Quest: Can't Get Enough Turkey Reward (#14048)"
    { 14051, 1014051 }, // "Quest: Don't Forget The Stuffing! Reward (#14051)"
    { 14053, 1014053 }, // "Quest: We're Out of Cranberry Chutney Again? Reward (#14053)"
    { 14054, 1014054 }, // "Quest: Easy As Pie Reward (#14054)"
    { 14055, 1014055 }, // "Quest: She Says Potato Reward (#14055)"
    { 14058, 1014058 }, // "Quest: She Says Potato Reward (#14058)"
    { 14059, 1014059 }, // "Quest: We're Out of Cranberry Chutney Again? Reward (#14059)"
    { 14060, 1014060 }, // "Quest: Easy As Pie Reward (#14060)"
    { 14061, 1014061 }, // "Quest: Can't Get Enough Turkey Reward (#14061)"
    { 14062, 1014062 }, // "Quest: Don't Forget The Stuffing! Reward (#14062)"
    { 14074, 1014074 }, // "Quest: A Leg Up Reward (#14074)"
    { 14076, 1014076 }, // "Quest: Breakfast Of Champions Reward (#14076)"
    { 14077, 1014077 }, // "Quest: The Light's Mercy Reward (#14077)"
    { 14080, 1014080 }, // "Quest: Stop The Aggressors Reward (#14080)"
    { 14090, 1014090 }, // "Quest: Gormok Wants His Snobolds Reward (#14090)"
    { 14092, 1014092 }, // "Quest: Breakfast Of Champions Reward (#14092)"
    { 14096, 1014096 }, // "Quest: You've Really Done It This Time, Kul Reward (#14096)"
    { 14101, 1014101 }, // "Quest: Drottinn Hrothgar Reward (#14101)"
    { 14102, 1014102 }, // "Quest: Mistcaller Yngvar Reward (#14102)"
    { 14103, 1014103 }, // "Quest: Titanium Powder Reward (#14103)"
    { 14104, 1014104 }, // "Quest: Ornolf The Scarred Reward (#14104)"
    { 14105, 1014105 }, // "Quest: Deathspeaker Kharos Reward (#14105)"
    { 14107, 1014107 }, // "Quest: The Fate Of The Fallen Reward (#14107)"
    { 14108, 1014108 }, // "Quest: Get Kraken! Reward (#14108)"
    { 14112, 1014112 }, // "Quest: What Do You Feed a Yeti, Anyway? Reward (#14112)"
    { 14136, 1014136 }, // "Quest: Rescue at Sea Reward (#14136)"
    { 14140, 1014140 }, // "Quest: Stop The Aggressors Reward (#14140)"
    { 14141, 1014141 }, // "Quest: Gormok Wants His Snobolds Reward (#14141)"
    { 14142, 1014142 }, // "Quest: You've Really Done It This Time, Kul Reward (#14142)"
    { 14143, 1014143 }, // "Quest: A Leg Up Reward (#14143)"
    { 14144, 1014144 }, // "Quest: The Light's Mercy Reward (#14144)"
    { 14145, 1014145 }, // "Quest: What Do You Feed a Yeti, Anyway? Reward (#14145)"
    { 14152, 1014152 }, // "Quest: Rescue at Sea Reward (#14152)"
    { 14160, 1014160 }, // "Quest: Writ of Merit Reward (#14160)"
    { 14166, 1014166 }, // "Quest: The Grateful Dead Reward (#14166)"
    { 14167, 1014167 }, // "Quest: The Grateful Dead Reward (#14167)"
    { 14168, 1014168 }, // "Quest: The Grateful Dead Reward (#14168)"
    { 14169, 1014169 }, // "Quest: The Grateful Dead Reward (#14169)"
    { 14170, 1014170 }, // "Quest: The Grateful Dead Reward (#14170)"
    { 14171, 1014171 }, // "Quest: The Grateful Dead Reward (#14171)"
    { 14172, 1014172 }, // "Quest: The Grateful Dead Reward (#14172)"
    { 14173, 1014173 }, // "Quest: The Grateful Dead Reward (#14173)"
    { 14174, 1014174 }, // "Quest: The Grateful Dead Reward (#14174)"
    { 14175, 1014175 }, // "Quest: The Grateful Dead Reward (#14175)"
    { 14176, 1014176 }, // "Quest: The Grateful Dead Reward (#14176)"
    { 14177, 1014177 }, // "Quest: The Grateful Dead Reward (#14177)"
    { 14199, 1014199 }, // "Quest: Proof of Demise: The Black Knight Reward (#14199)"
    { 14203, 1014203 }, // "Quest: Waterlogged Recipe Reward (#14203)"
    { 14351, 1014351 }, // "Quest: Battle of Hillsbrad Reward (#14351)"
    { 14353, 1014353 }, // "Quest: An Unholy Alliance Reward (#14353)"
    { 14355, 1014355 }, // "Quest: Into The Scarlet Monastery Reward (#14355)"
    { 14356, 1014356 }, // "Quest: The Power to Destroy... Reward (#14356)"
    { 14418, 1014418 }, // "Quest: The Deathstalkers Reward (#14418)"
    { 14436, 1014436 }, // "Quest: Dwarven Digging Reward (#14436)"
    { 14438, 1014438 }, // "Quest: Sharing the Land Reward (#14438)"
    { 14440, 1014440 }, // "Quest: Rites of the Earthmother Reward (#14440)"
    { 24428, 1024428 }, // "Quest: A Most Puzzling Circumstance Reward (#24428)"
    { 24429, 1024429 }, // "Quest: A Most Puzzling Circumstance Reward (#24429)"
    { 24431, 1024431 }, // "Quest: Waterlogged Recipe Reward (#24431)"
    { 24499, 1024499 }, // "Quest: Echoes of Tortured Souls Reward (#24499)"
    { 24500, 1024500 }, // "Quest: Wrath of the Lich King Reward (#24500)"
    { 24511, 1024511 }, // "Quest: Echoes of Tortured Souls Reward (#24511)"
    { 24549, 1024549 }, // "Quest: Shadowmourne... Reward (#24549)"
    { 24579, 1024579 }, // "Quest: Sartharion Must Die! Reward (#24579)"
    { 24580, 1024580 }, // "Quest: Anub'Rekhan Must Die! Reward (#24580)"
    { 24581, 1024581 }, // "Quest: Noth the Plaguebringer Must Die! Reward (#24581)"
    { 24582, 1024582 }, // "Quest: Instructor Razuvious Must Die! Reward (#24582)"
    { 24583, 1024583 }, // "Quest: Patchwerk Must Die! Reward (#24583)"
    { 24584, 1024584 }, // "Quest: Malygos Must Die! Reward (#24584)"
    { 24585, 1024585 }, // "Quest: Flame Leviathan Must Die! Reward (#24585)"
    { 24586, 1024586 }, // "Quest: Razorscale Must Die! Reward (#24586)"
    { 24587, 1024587 }, // "Quest: Ignis the Furnace Master Must Die! Reward (#24587)"
    { 24588, 1024588 }, // "Quest: XT-002 Deconstructor Must Die! Reward (#24588)"
    { 24589, 1024589 }, // "Quest: Lord Jaraxxus Must Die! Reward (#24589)"
    { 24590, 1024590 }, // "Quest: Lord Marrowgar Must Die! Reward (#24590)"
    { 24597, 1024597 }, // "Quest: A Gift for the King of Stormwind Reward (#24597)"
    { 24609, 1024609 }, // "Quest: A Gift for the Lord of Ironforge Reward (#24609)"
    { 24610, 1024610 }, // "Quest: A Gift for the High Priestess of Elune Reward (#24610)"
    { 24611, 1024611 }, // "Quest: A Gift for the Prophet Reward (#24611)"
    { 24612, 1024612 }, // "Quest: A Gift for the Warchief Reward (#24612)"
    { 24613, 1024613 }, // "Quest: A Gift for the Banshee Queen Reward (#24613)"
    { 24614, 1024614 }, // "Quest: A Gift for the High Chieftain Reward (#24614)"
    { 24615, 1024615 }, // "Quest: A Gift for the Regent Lord of Quel'Thalas Reward (#24615)"
    { 24629, 1024629 }, // "Quest: A Perfect Puff of Perfume Reward (#24629)"
    { 24635, 1024635 }, // "Quest: A Cloudlet of Classy Cologne Reward (#24635)"
    { 24636, 1024636 }, // "Quest: Bonbon Blitz Reward (#24636)"
    { 24638, 1024638 }, // "Quest: Crushing the Crown Reward (#24638)"
    { 24645, 1024645 }, // "Quest: Crushing the Crown Reward (#24645)"
    { 24647, 1024647 }, // "Quest: Crushing the Crown Reward (#24647)"
    { 24648, 1024648 }, // "Quest: Crushing the Crown Reward (#24648)"
    { 24649, 1024649 }, // "Quest: Crushing the Crown Reward (#24649)"
    { 24650, 1024650 }, // "Quest: Crushing the Crown Reward (#24650)"
    { 24651, 1024651 }, // "Quest: Crushing the Crown Reward (#24651)"
    { 24652, 1024652 }, // "Quest: Crushing the Crown Reward (#24652)"
    { 24658, 1024658 }, // "Quest: Crushing the Crown Reward (#24658)"
    { 24659, 1024659 }, // "Quest: Crushing the Crown Reward (#24659)"
    { 24660, 1024660 }, // "Quest: Crushing the Crown Reward (#24660)"
    { 24662, 1024662 }, // "Quest: Crushing the Crown Reward (#24662)"
    { 24663, 1024663 }, // "Quest: Crushing the Crown Reward (#24663)"
    { 24664, 1024664 }, // "Quest: Crushing the Crown Reward (#24664)"
    { 24665, 1024665 }, // "Quest: Crushing the Crown Reward (#24665)"
    { 24666, 1024666 }, // "Quest: Crushing the Crown Reward (#24666)"
    { 24710, 1024710 }, // "Quest: Deliverance from the Pit Reward (#24710)"
    { 24712, 1024712 }, // "Quest: Deliverance from the Pit Reward (#24712)"
    { 24743, 1024743 }, // "Quest: Shadow's Edge Reward (#24743)"
    { 24788, 1024788 }, // "Quest: Daily Heroic Random (1st) Reward (#24788)"
    { 24789, 1024789 }, // "Quest: Daily Heroic Random (Nth) Reward (#24789)"
    { 24790, 1024790 }, // "Quest: Daily Normal Random (1st) Reward (#24790)"
    { 24795, 1024795 }, // "Quest: A Victory For The Silver Covenant Reward (#24795)"
    { 24796, 1024796 }, // "Quest: A Victory For The Silver Covenant Reward (#24796)"
    { 24798, 1024798 }, // "Quest: A Victory For The Sunreavers Reward (#24798)"
    { 24799, 1024799 }, // "Quest: A Victory For The Sunreavers Reward (#24799)"
    { 24800, 1024800 }, // "Quest: A Victory For The Sunreavers Reward (#24800)"
    { 24801, 1024801 }, // "Quest: A Victory For The Sunreavers Reward (#24801)"
    { 24802, 1024802 }, // "Quest: Wrath of the Lich King Reward (#24802)"
    { 24803, 1024803 }, // "Quest: Kalu'ak Fishing Derby Reward (#24803)"
    { 24806, 1024806 }, // "Quest: Better Luck Next Time Reward (#24806)"
    { 24815, 1024815 }, // "Quest: Choose Your Path Reward (#24815)"
    { 24819, 1024819 }, // "Quest: A Change of Heart Reward (#24819)"
    { 24820, 1024820 }, // "Quest: A Change of Heart Reward (#24820)"
    { 24821, 1024821 }, // "Quest: A Change of Heart Reward (#24821)"
    { 24822, 1024822 }, // "Quest: A Change of Heart Reward (#24822)"
    { 24823, 1024823 }, // "Quest: Path of Destruction Reward (#24823)"
    { 24825, 1024825 }, // "Quest: Path of Wisdom Reward (#24825)"
    { 24826, 1024826 }, // "Quest: Path of Vengeance Reward (#24826)"
    { 24827, 1024827 }, // "Quest: Path of Courage Reward (#24827)"
    { 24828, 1024828 }, // "Quest: Path of Destruction Reward (#24828)"
    { 24829, 1024829 }, // "Quest: Path of Destruction Reward (#24829)"
    { 24830, 1024830 }, // "Quest: Path of Wisdom Reward (#24830)"
    { 24831, 1024831 }, // "Quest: Path of Wisdom Reward (#24831)"
    { 24832, 1024832 }, // "Quest: Path of Vengeance Reward (#24832)"
    { 24833, 1024833 }, // "Quest: Path of Vengeance Reward (#24833)"
    { 24834, 1024834 }, // "Quest: Path of Courage Reward (#24834)"
    { 24835, 1024835 }, // "Quest: Path of Courage Reward (#24835)"
    { 24836, 1024836 }, // "Quest: A Change of Heart Reward (#24836)"
    { 24837, 1024837 }, // "Quest: A Change of Heart Reward (#24837)"
    { 24838, 1024838 }, // "Quest: A Change of Heart Reward (#24838)"
    { 24839, 1024839 }, // "Quest: A Change of Heart Reward (#24839)"
    { 24840, 1024840 }, // "Quest: A Change of Heart Reward (#24840)"
    { 24841, 1024841 }, // "Quest: A Change of Heart Reward (#24841)"
    { 24842, 1024842 }, // "Quest: A Change of Heart Reward (#24842)"
    { 24843, 1024843 }, // "Quest: A Change of Heart Reward (#24843)"
    { 24844, 1024844 }, // "Quest: A Change of Heart Reward (#24844)"
    { 24845, 1024845 }, // "Quest: A Change of Heart Reward (#24845)"
    { 24846, 1024846 }, // "Quest: A Change of Heart Reward (#24846)"
    { 24847, 1024847 }, // "Quest: A Change of Heart Reward (#24847)"
    { 24857, 1024857 }, // "Quest: Attack on Camp Narache Reward (#24857)"
    { 24869, 1024869 }, // "Quest: Deprogramming Reward (#24869)"
    { 24870, 1024870 }, // "Quest: Securing the Ramparts Reward (#24870)"
    { 24871, 1024871 }, // "Quest: Securing the Ramparts Reward (#24871)"
    { 24872, 1024872 }, // "Quest: Respite for a Tormented Soul Reward (#24872)"
    { 24873, 1024873 }, // "Quest: Residue Rendezvous Reward (#24873)"
    { 24874, 1024874 }, // "Quest: Blood Quickening Reward (#24874)"
    { 24875, 1024875 }, // "Quest: Deprogramming Reward (#24875)"
    { 24876, 1024876 }, // "Quest: Securing the Ramparts Reward (#24876)"
    { 24877, 1024877 }, // "Quest: Securing the Ramparts Reward (#24877)"
    { 24878, 1024878 }, // "Quest: Residue Rendezvous Reward (#24878)"
    { 24879, 1024879 }, // "Quest: Blood Quickening Reward (#24879)"
    { 24880, 1024880 }, // "Quest: Respite for a Tormented Soul Reward (#24880)"
    { 24881, 1024881 }, // "Quest: Classic Random 5-15 (1st) Reward (#24881)"
    { 24882, 1024882 }, // "Quest: Classic Random 15-25 (1st) Reward (#24882)"
    { 24883, 1024883 }, // "Quest: Classic Random 24-34 (1st) Reward (#24883)"
    { 24884, 1024884 }, // "Quest: Classic Random 35-45 (1st) Reward (#24884)"
    { 24885, 1024885 }, // "Quest: Classic Random 46-55 (1st) Reward (#24885)"
    { 24886, 1024886 }, // "Quest: Classic Random 56-60 (1st) Reward (#24886)"
    { 24887, 1024887 }, // "Quest: Classic Random 60-64 (1st) Reward (#24887)"
    { 24888, 1024888 }, // "Quest: Classic Random 65-70 (1st) Reward (#24888)"
    { 24889, 1024889 }, // "Quest: Classic Random 5-15 (Nth) Reward (#24889)"
    { 24890, 1024890 }, // "Quest: Classic Random 15-25 (Nth) Reward (#24890)"
    { 24891, 1024891 }, // "Quest: Classic Random 24-34 (Nth) Reward (#24891)"
    { 24892, 1024892 }, // "Quest: Classic Random 35-45 (Nth) Reward (#24892)"
    { 24893, 1024893 }, // "Quest: Classic Random 46-55 (Nth) Reward (#24893)"
    { 24894, 1024894 }, // "Quest: Classic Random 56-60 (Nth) Reward (#24894)"
    { 24895, 1024895 }, // "Quest: Classic Random 60-64 (Nth) Reward (#24895)"
    { 24896, 1024896 }, // "Quest: Classic Random 65-70 (Nth) Reward (#24896)"
    { 24914, 1024914 }, // "Quest: Personal Property Reward (#24914)"
    { 24915, 1024915 }, // "Quest: Mograine's Reunion Reward (#24915)"
    { 24916, 1024916 }, // "Quest: Jaina's Locket Reward (#24916)"
    { 24917, 1024917 }, // "Quest: Muradin's Lament Reward (#24917)"
    { 24918, 1024918 }, // "Quest: Sylvanas' Vengeance Reward (#24918)"
    { 24919, 1024919 }, // "Quest: The Lightbringer's Redemption Reward (#24919)"
    { 25239, 1025239 }, // "Quest: Path of Might Reward (#25239)"
    { 25240, 1025240 }, // "Quest: Path of Might Reward (#25240)"
    { 25242, 1025242 }, // "Quest: Path of Might Reward (#25242)"
    { 25246, 1025246 }, // "Quest: A Change of Heart Reward (#25246)"
    { 25247, 1025247 }, // "Quest: A Change of Heart Reward (#25247)"
    { 25248, 1025248 }, // "Quest: A Change of Heart Reward (#25248)"
    { 25249, 1025249 }, // "Quest: A Change of Heart Reward (#25249)"
    { 25286, 1025286 }, // "Quest: Words for Delivery Reward (#25286)"
    { 25393, 1025393 }, // "Quest: Operation: Gnomeregan Reward (#25393)"
    { 25445, 1025445 }, // "Quest: Zalazane's Fall Reward (#25445)"
    { 25480, 1025480 }, // "Quest: Dance Of De Spirits Reward (#25480)"
    { 25482, 1025482 }, // "Quest: World Event Dungeon - Headless Horseman Reward (#25482)"
    { 25483, 1025483 }, // "Quest: World Event Dungeon - Coren Direbrew Reward (#25483)"
    { 25484, 1025484 }, // "Quest: World Event Dungeon - Ahune Reward (#25484)"
    { 25485, 1025485 }, // "Quest: World Event Dungeon - Hummel Reward (#25485)"
    { 25500, 1025500 }, // "Quest: Words for Delivery Reward (#25500)"
    { 26034, 1026034 }, // "Quest: The Twilight Destroyer Reward (#26034)"
};
}
