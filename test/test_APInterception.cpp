// azerothcore-wotlk/modules/archipelago_wow/test/test_APInterception.cpp
#include "doctest.h"
#include "APInterception.h"

using Archipelago::Interception::ClassifyItem;
using Archipelago::Interception::ItemClass;

// Bit values mirror BaseClasses.py's ItemClassification IntFlag exactly
// (progression=0b00001, useful=0b00010, trap=0b00100) -- these tests exist
// because no test in this repo previously covered ClassifyItem at all,
// which meant the M4.11.5.0.1 classification fix on the Python side had no
// C++-side test proving the icon it drives (APItemDisplay.cpp:145-146's
// IconEntryFor dispatch) actually follows the flag bits correctly.

TEST_CASE("APInterception::ClassifyItemProgressionBit")
{
    CHECK(ClassifyItem(0b00001) == ItemClass::Progression);
}

TEST_CASE("APInterception::ClassifyItemUsefulBit")
{
    CHECK(ClassifyItem(0b00010) == ItemClass::Useful);
}

TEST_CASE("APInterception::ClassifyItemTrapBitTakesPriorityOverProgressionAndUseful")
{
    // ClassifyItem checks trap first (APInterception.cpp:8-9) -- a flag
    // value with the trap bit AND other bits set must still classify as
    // Trap, matching the real BaseClasses.py IntFlag combinations AP can
    // legitimately produce.
    CHECK(ClassifyItem(0b00101) == ItemClass::Trap);
    CHECK(ClassifyItem(0b00110) == ItemClass::Trap);
}

TEST_CASE("APInterception::ClassifyItemNoRecognizedBitIsFiller")
{
    // This is the exact case M4.11.5.0.1 makes real: an item with none of
    // progression/useful/trap set (flags == 0, AP's "filler" classification)
    // must classify as Filler, not fall through to some other class.
    CHECK(ClassifyItem(0) == ItemClass::Filler);
}
