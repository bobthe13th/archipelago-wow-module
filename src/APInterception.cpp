// azerothcore-wotlk/modules/archipelago_wow/src/APInterception.cpp
#include "APInterception.h"

namespace Archipelago::Interception
{
    ItemClass ClassifyItem(int32_t flags)
    {
        if (flags & 0b00100)
            return ItemClass::Trap;
        if (flags & 0b00001)
            return ItemClass::Progression;
        if (flags & 0b00010)
            return ItemClass::Useful;
        return ItemClass::Filler;
    }
}
