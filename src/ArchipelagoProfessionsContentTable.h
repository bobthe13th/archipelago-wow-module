// GENERATED FILE - do not edit by hand.
// Regenerate with: python modules/archipelago_wow/tools/generate_content.py content/professions.yaml

#pragma once

#include <cstdint>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

namespace Archipelago::Professions
{
    // Every (threshold, location_id) pair for a given skill_id, sorted by
    // threshold ascending -- the skill-up hook (ArchipelagoProfessionScript.cpp)
    // scans this per skill_id to find which thresholds a skill-up newly
    // crossed, mirroring ArchipelagoLevelScript.cpp's own oldLevel..newLevel
    // range-scan (a single big skill-up, e.g. a trainer visit, can cross
    // multiple thresholds in one OnPlayerSetSkill call).
    inline std::unordered_map<uint32_t, std::vector<std::pair<uint32_t, int64_t>>> const ThresholdsBySkillId = {
        { 171, { { 75, 770000 }, { 150, 770001 }, { 225, 770002 }, { 300, 770003 }, { 375, 770004 }, { 450, 770005 } } },
        { 164, { { 75, 770006 }, { 150, 770007 }, { 225, 770008 }, { 300, 770009 }, { 375, 770010 }, { 450, 770011 } } },
        { 333, { { 75, 770012 }, { 150, 770013 }, { 225, 770014 }, { 300, 770015 }, { 375, 770016 }, { 450, 770017 } } },
        { 202, { { 75, 770018 }, { 150, 770019 }, { 225, 770020 }, { 300, 770021 }, { 375, 770022 }, { 450, 770023 } } },
        { 182, { { 75, 770024 }, { 150, 770025 }, { 225, 770026 }, { 300, 770027 }, { 375, 770028 }, { 450, 770029 } } },
        { 773, { { 75, 770030 }, { 150, 770031 }, { 225, 770032 }, { 300, 770033 }, { 375, 770034 }, { 450, 770035 } } },
        { 755, { { 75, 770036 }, { 150, 770037 }, { 225, 770038 }, { 300, 770039 }, { 375, 770040 }, { 450, 770041 } } },
        { 165, { { 75, 770042 }, { 150, 770043 }, { 225, 770044 }, { 300, 770045 }, { 375, 770046 }, { 450, 770047 } } },
        { 186, { { 75, 770048 }, { 150, 770049 }, { 225, 770050 }, { 300, 770051 }, { 375, 770052 }, { 450, 770053 } } },
        { 393, { { 75, 770054 }, { 150, 770055 }, { 225, 770056 }, { 300, 770057 }, { 375, 770058 }, { 450, 770059 } } },
        { 197, { { 75, 770060 }, { 150, 770061 }, { 225, 770062 }, { 300, 770063 }, { 375, 770064 }, { 450, 770065 } } },
        { 129, { { 75, 770066 }, { 150, 770067 }, { 225, 770068 }, { 300, 770069 }, { 375, 770070 }, { 450, 770071 } } },
        { 185, { { 75, 770072 }, { 150, 770073 }, { 225, 770074 }, { 300, 770075 }, { 375, 770076 }, { 450, 770077 } } },
        { 356, { { 75, 770078 }, { 150, 770079 }, { 225, 770080 }, { 300, 770081 }, { 375, 770082 }, { 450, 770083 } } },
    };

    // AP item id -> the realm-state flag key to set on receipt (this
    // family's `record_milestone` realm_state effect).
    inline std::unordered_map<int64_t, std::string> const ApItemIdToMilestoneKey = {
        { 870000, "profession_171_75" }, // "Skill Milestone: Alchemy 75"
        { 870001, "profession_171_150" }, // "Skill Milestone: Alchemy 150"
        { 870002, "profession_171_225" }, // "Skill Milestone: Alchemy 225"
        { 870003, "profession_171_300" }, // "Skill Milestone: Alchemy 300"
        { 870004, "profession_171_375" }, // "Skill Milestone: Alchemy 375"
        { 870005, "profession_171_450" }, // "Skill Milestone: Alchemy 450"
        { 870006, "profession_164_75" }, // "Skill Milestone: Blacksmithing 75"
        { 870007, "profession_164_150" }, // "Skill Milestone: Blacksmithing 150"
        { 870008, "profession_164_225" }, // "Skill Milestone: Blacksmithing 225"
        { 870009, "profession_164_300" }, // "Skill Milestone: Blacksmithing 300"
        { 870010, "profession_164_375" }, // "Skill Milestone: Blacksmithing 375"
        { 870011, "profession_164_450" }, // "Skill Milestone: Blacksmithing 450"
        { 870012, "profession_333_75" }, // "Skill Milestone: Enchanting 75"
        { 870013, "profession_333_150" }, // "Skill Milestone: Enchanting 150"
        { 870014, "profession_333_225" }, // "Skill Milestone: Enchanting 225"
        { 870015, "profession_333_300" }, // "Skill Milestone: Enchanting 300"
        { 870016, "profession_333_375" }, // "Skill Milestone: Enchanting 375"
        { 870017, "profession_333_450" }, // "Skill Milestone: Enchanting 450"
        { 870018, "profession_202_75" }, // "Skill Milestone: Engineering 75"
        { 870019, "profession_202_150" }, // "Skill Milestone: Engineering 150"
        { 870020, "profession_202_225" }, // "Skill Milestone: Engineering 225"
        { 870021, "profession_202_300" }, // "Skill Milestone: Engineering 300"
        { 870022, "profession_202_375" }, // "Skill Milestone: Engineering 375"
        { 870023, "profession_202_450" }, // "Skill Milestone: Engineering 450"
        { 870024, "profession_182_75" }, // "Skill Milestone: Herbalism 75"
        { 870025, "profession_182_150" }, // "Skill Milestone: Herbalism 150"
        { 870026, "profession_182_225" }, // "Skill Milestone: Herbalism 225"
        { 870027, "profession_182_300" }, // "Skill Milestone: Herbalism 300"
        { 870028, "profession_182_375" }, // "Skill Milestone: Herbalism 375"
        { 870029, "profession_182_450" }, // "Skill Milestone: Herbalism 450"
        { 870030, "profession_773_75" }, // "Skill Milestone: Inscription 75"
        { 870031, "profession_773_150" }, // "Skill Milestone: Inscription 150"
        { 870032, "profession_773_225" }, // "Skill Milestone: Inscription 225"
        { 870033, "profession_773_300" }, // "Skill Milestone: Inscription 300"
        { 870034, "profession_773_375" }, // "Skill Milestone: Inscription 375"
        { 870035, "profession_773_450" }, // "Skill Milestone: Inscription 450"
        { 870036, "profession_755_75" }, // "Skill Milestone: Jewelcrafting 75"
        { 870037, "profession_755_150" }, // "Skill Milestone: Jewelcrafting 150"
        { 870038, "profession_755_225" }, // "Skill Milestone: Jewelcrafting 225"
        { 870039, "profession_755_300" }, // "Skill Milestone: Jewelcrafting 300"
        { 870040, "profession_755_375" }, // "Skill Milestone: Jewelcrafting 375"
        { 870041, "profession_755_450" }, // "Skill Milestone: Jewelcrafting 450"
        { 870042, "profession_165_75" }, // "Skill Milestone: Leatherworking 75"
        { 870043, "profession_165_150" }, // "Skill Milestone: Leatherworking 150"
        { 870044, "profession_165_225" }, // "Skill Milestone: Leatherworking 225"
        { 870045, "profession_165_300" }, // "Skill Milestone: Leatherworking 300"
        { 870046, "profession_165_375" }, // "Skill Milestone: Leatherworking 375"
        { 870047, "profession_165_450" }, // "Skill Milestone: Leatherworking 450"
        { 870048, "profession_186_75" }, // "Skill Milestone: Mining 75"
        { 870049, "profession_186_150" }, // "Skill Milestone: Mining 150"
        { 870050, "profession_186_225" }, // "Skill Milestone: Mining 225"
        { 870051, "profession_186_300" }, // "Skill Milestone: Mining 300"
        { 870052, "profession_186_375" }, // "Skill Milestone: Mining 375"
        { 870053, "profession_186_450" }, // "Skill Milestone: Mining 450"
        { 870054, "profession_393_75" }, // "Skill Milestone: Skinning 75"
        { 870055, "profession_393_150" }, // "Skill Milestone: Skinning 150"
        { 870056, "profession_393_225" }, // "Skill Milestone: Skinning 225"
        { 870057, "profession_393_300" }, // "Skill Milestone: Skinning 300"
        { 870058, "profession_393_375" }, // "Skill Milestone: Skinning 375"
        { 870059, "profession_393_450" }, // "Skill Milestone: Skinning 450"
        { 870060, "profession_197_75" }, // "Skill Milestone: Tailoring 75"
        { 870061, "profession_197_150" }, // "Skill Milestone: Tailoring 150"
        { 870062, "profession_197_225" }, // "Skill Milestone: Tailoring 225"
        { 870063, "profession_197_300" }, // "Skill Milestone: Tailoring 300"
        { 870064, "profession_197_375" }, // "Skill Milestone: Tailoring 375"
        { 870065, "profession_197_450" }, // "Skill Milestone: Tailoring 450"
        { 870066, "profession_129_75" }, // "Skill Milestone: First Aid 75"
        { 870067, "profession_129_150" }, // "Skill Milestone: First Aid 150"
        { 870068, "profession_129_225" }, // "Skill Milestone: First Aid 225"
        { 870069, "profession_129_300" }, // "Skill Milestone: First Aid 300"
        { 870070, "profession_129_375" }, // "Skill Milestone: First Aid 375"
        { 870071, "profession_129_450" }, // "Skill Milestone: First Aid 450"
        { 870072, "profession_185_75" }, // "Skill Milestone: Cooking 75"
        { 870073, "profession_185_150" }, // "Skill Milestone: Cooking 150"
        { 870074, "profession_185_225" }, // "Skill Milestone: Cooking 225"
        { 870075, "profession_185_300" }, // "Skill Milestone: Cooking 300"
        { 870076, "profession_185_375" }, // "Skill Milestone: Cooking 375"
        { 870077, "profession_185_450" }, // "Skill Milestone: Cooking 450"
        { 870078, "profession_356_75" }, // "Skill Milestone: Fishing 75"
        { 870079, "profession_356_150" }, // "Skill Milestone: Fishing 150"
        { 870080, "profession_356_225" }, // "Skill Milestone: Fishing 225"
        { 870081, "profession_356_300" }, // "Skill Milestone: Fishing 300"
        { 870082, "profession_356_375" }, // "Skill Milestone: Fishing 375"
        { 870083, "profession_356_450" }, // "Skill Milestone: Fishing 450"
    };
}
