// azerothcore-wotlk/modules/archipelago_wow/test/test_APProtocol.cpp
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "APProtocol.h"
#include "APInterception.h"

using namespace Archipelago;

TEST_CASE("BuildConnectPacket includes game name and slot name")
{
    ConnectPacketOptions options;
    options.game = "World of Warcraft WotLK";
    options.slotName = "TestSlot";
    options.password = "";
    options.uuid = "abc-123";

    std::string packet = BuildConnectPacket(options);

    CHECK(packet.find("\"cmd\":\"Connect\"") != std::string::npos);
    CHECK(packet.find("\"game\":\"World of Warcraft WotLK\"") != std::string::npos);
    CHECK(packet.find("\"name\":\"TestSlot\"") != std::string::npos);
    CHECK(packet.find("\"items_handling\":7") != std::string::npos);
}

TEST_CASE("ParseServerMessageType recognizes RoomInfo")
{
    std::string raw = R"([{"cmd": "RoomInfo", "seed_name": "abc"}])";
    CHECK(ParseServerMessageType(raw) == ServerMessageType::RoomInfo);
}

TEST_CASE("ParseServerMessageType recognizes Connected")
{
    std::string raw = R"([{"cmd": "Connected", "team": 0, "slot": 1}])";
    CHECK(ParseServerMessageType(raw) == ServerMessageType::Connected);
}

TEST_CASE("ParseServerMessageType recognizes ConnectionRefused")
{
    std::string raw = R"([{"cmd": "ConnectionRefused", "errors": ["InvalidSlot"]}])";
    CHECK(ParseServerMessageType(raw) == ServerMessageType::ConnectionRefused);
}

TEST_CASE("ParseServerMessageType returns Unknown for unrecognized messages")
{
    std::string raw = R"([{"cmd": "UnknownCommand", "data": []}])";
    CHECK(ParseServerMessageType(raw) == ServerMessageType::Unknown);
}

TEST_CASE("BuildConnectPacket escapes a quote character in the password")
{
    ConnectPacketOptions options;
    options.game = "World of Warcraft WotLK";
    options.slotName = "TestSlot";
    options.password = "pass\"word";
    options.uuid = "abc-123";

    std::string packet = BuildConnectPacket(options);

    CHECK(packet.find("\"password\":\"pass\\\"word\"") != std::string::npos);
    CHECK(packet.find("\"password\":\"pass\"word\"") == std::string::npos);
}

TEST_CASE("BuildConnectPacket escapes a backslash character in the slot name")
{
    ConnectPacketOptions options;
    options.game = "World of Warcraft WotLK";
    options.slotName = "Test\\Slot";
    options.password = "";
    options.uuid = "abc-123";

    std::string packet = BuildConnectPacket(options);

    CHECK(packet.find("\"name\":\"Test\\\\Slot\"") != std::string::npos);
    CHECK(packet.find("\"name\":\"Test\\Slot\"") == std::string::npos);
}

TEST_CASE("BuildLocationChecksPacket produces a valid LocationChecks command")
{
    std::vector<int64_t> ids{ 12345, 67890 };
    std::string json = BuildLocationChecksPacket(ids);
    CHECK(json.find("\"cmd\":\"LocationChecks\"") != std::string::npos);
    CHECK(json.find("\"locations\":[12345,67890]") != std::string::npos);
}

TEST_CASE("ParseServerMessageType recognizes ReceivedItems")
{
    std::string raw = R"([{"cmd":"ReceivedItems","index":0,"items":[{"item":111,"location":222,"player":1,"flags":0}]}])";
    CHECK(ParseServerMessageType(raw) == ServerMessageType::ReceivedItems);
}

TEST_CASE("ParseReceivedItems extracts item entries with running index")
{
    std::string raw = R"([{"cmd":"ReceivedItems","index":2,"items":[{"item":111,"location":222,"player":1,"flags":0},{"item":333,"location":444,"player":1,"flags":1}]}])";
    auto items = ParseReceivedItems(raw);
    REQUIRE(items.size() == 2);
    CHECK(items[0].item == 111);
    CHECK(items[0].location == 222);
    CHECK(items[0].index == 2);
    CHECK(items[1].item == 333);
    CHECK(items[1].index == 3);
}

TEST_CASE("ParseServerMessageTypes returns every command in a batched frame, in order")
{
    std::string raw = R"([{"cmd":"PrintJSON","data":[]},{"cmd":"ReceivedItems","index":0,"items":[{"item":111,"location":222,"player":1,"flags":0}]}])";
    auto types = ParseServerMessageTypes(raw);
    REQUIRE(types.size() == 2);
    CHECK(types[0] == ServerMessageType::PrintJSON);
    CHECK(types[1] == ServerMessageType::ReceivedItems);
}

TEST_CASE("ParseReceivedItems finds ReceivedItems even when it isn't the first element in a batched frame")
{
    std::string raw = R"([{"cmd":"PrintJSON","data":[]},{"cmd":"ReceivedItems","index":5,"items":[{"item":111,"location":222,"player":1,"flags":0}]}])";
    auto items = ParseReceivedItems(raw);
    REQUIRE(items.size() == 1);
    CHECK(items[0].item == 111);
    CHECK(items[0].index == 5);
}

TEST_CASE("ParseReceivedItems collects items from multiple ReceivedItems commands batched in one frame")
{
    std::string raw = R"([{"cmd":"ReceivedItems","index":0,"items":[{"item":111,"location":222,"player":1,"flags":0}]},{"cmd":"PrintJSON","data":[]},{"cmd":"ReceivedItems","index":10,"items":[{"item":222,"location":333,"player":1,"flags":0}]}])";
    auto items = ParseReceivedItems(raw);
    REQUIRE(items.size() == 2);
    CHECK(items[0].item == 111);
    CHECK(items[0].index == 0);
    CHECK(items[1].item == 222);
    CHECK(items[1].index == 10);
}

TEST_CASE("BuildStatusUpdatePacket produces the real AP goal-complete wire format")
{
    std::string json = Archipelago::BuildStatusUpdatePacket(30);
    CHECK(json.find("\"cmd\":\"StatusUpdate\"") != std::string::npos);
    CHECK(json.find("\"status\":30") != std::string::npos);
}

TEST_CASE("BuildDeathLinkPacket includes cause and source")
{
    std::string packet = BuildDeathLinkPacket("Tester died to Ragefire Chasm", "Tester");
    CHECK(packet.find("\"cmd\":\"Bounce\"") != std::string::npos);
    CHECK(packet.find("\"tags\":[\"DeathLink\"]") != std::string::npos);
    CHECK(packet.find("\"cause\":\"Tester died to Ragefire Chasm\"") != std::string::npos);
    CHECK(packet.find("\"source\":\"Tester\"") != std::string::npos);
}

TEST_CASE("ParseServerMessageType recognizes an incoming Bounce with DeathLink tag")
{
    std::string raw = R"([{"cmd": "Bounce", "tags": ["DeathLink"], "data": {"cause": "x", "source": "y"}}])";
    CHECK(ParseServerMessageType(raw) == ServerMessageType::DeathLinkBounce);
}

TEST_CASE("ParseServerMessageType does not treat a tag-less Bounce as DeathLink")
{
    std::string raw = R"([{"cmd": "Bounce", "tags": ["SomeOtherTag"], "data": {}}])";
    CHECK(ParseServerMessageType(raw) == ServerMessageType::Unknown);
}

TEST_CASE("ParseIncomingDeathLinks extracts cause and source")
{
    std::string raw = R"([{"cmd": "Bounce", "tags": ["DeathLink"], "data": {"cause": "Tester died to Ragefire Chasm", "source": "Tester", "time": 123.0}}])";
    auto bounces = ParseIncomingDeathLinks(raw);
    REQUIRE(bounces.size() == 1);
    CHECK(bounces[0].cause == "Tester died to Ragefire Chasm");
    CHECK(bounces[0].source == "Tester");
}

TEST_CASE("ParseIncomingDeathLinks finds a batched Bounce alongside other commands")
{
    std::string raw = R"([{"cmd":"PrintJSON","data":[]},{"cmd":"Bounce","tags":["DeathLink"],"data":{"cause":"c","source":"s"}}])";
    auto bounces = ParseIncomingDeathLinks(raw);
    REQUIRE(bounces.size() == 1);
    CHECK(bounces[0].cause == "c");
    CHECK(bounces[0].source == "s");
}

TEST_CASE("ParseIncomingDeathLinks ignores a Bounce without the DeathLink tag")
{
    std::string raw = R"([{"cmd": "Bounce", "tags": ["SomeOtherTag"], "data": {"cause": "c", "source": "s"}}])";
    CHECK(ParseIncomingDeathLinks(raw).empty());
}

TEST_CASE("BuildConnectPacket still round-trips through the JSON library (M1 regression)")
{
    Archipelago::ConnectPacketOptions options;
    options.game = "World of Warcraft WotLK";
    options.slotName = "Te\"ster";
    options.password = "p\\ass";
    options.uuid = "archipelago-wow-module";
    std::string json = BuildConnectPacket(options);
    CHECK(json.find("\"cmd\":\"Connect\"") != std::string::npos);
    CHECK(json.find("Te\\\"ster") != std::string::npos);
}

TEST_CASE("ParseApItemDisplayFromSlotData parses ap_item_display from Connected's slot_data")
{
    std::string raw = R"([{
        "cmd": "Connected",
        "slot_data": {
            "ap_item_display": {
                "2000000": {"name": "Alice's Sword of Might", "flags": 1},
                "1000001": {"name": "Tester's Minor Heal Potion", "flags": 0}
            }
        }
    }])";

    auto display = Archipelago::ParseApItemDisplayFromSlotData(raw);

    REQUIRE(display.size() == 2u);
    CHECK(display[2000000].name == "Alice's Sword of Might");
    CHECK(display[2000000].flags == 1);
    CHECK(display[1000001].name == "Tester's Minor Heal Potion");
    CHECK(display[1000001].flags == 0);
}

TEST_CASE("ParseApItemDisplayFromSlotData returns empty when slot_data is absent")
{
    std::string raw = R"([{"cmd": "Connected"}])";
    auto display = Archipelago::ParseApItemDisplayFromSlotData(raw);
    CHECK(display.empty());
}

TEST_CASE("ParseApItemDisplayFromSlotData returns empty on malformed JSON")
{
    auto display = Archipelago::ParseApItemDisplayFromSlotData("not json");
    CHECK(display.empty());
}

TEST_CASE("ParseApItemDisplayFromSlotData skips an entry with wrong-typed name/flags instead of throwing")
{
    std::string raw = R"([{
        "cmd": "Connected",
        "slot_data": {
            "ap_item_display": {
                "2000000": {"name": 12345, "flags": "notanumber"},
                "1000001": {"name": "Tester's Minor Heal Potion", "flags": 0}
            }
        }
    }])";

    std::unordered_map<int64_t, Archipelago::ApItemDisplay> display;
    CHECK_NOTHROW(display = Archipelago::ParseApItemDisplayFromSlotData(raw));

    REQUIRE(display.size() == 1u);
    CHECK(display.count(2000000) == 0);
    CHECK(display[1000001].name == "Tester's Minor Heal Potion");
    CHECK(display[1000001].flags == 0);
}

TEST_CASE("APInterception::ClassifiesEachSingleFlagBit")
{
    using namespace Archipelago::Interception;
    CHECK(ClassifyItem(0b00001) == ItemClass::Progression);
    CHECK(ClassifyItem(0b00010) == ItemClass::Useful);
    CHECK(ClassifyItem(0b00100) == ItemClass::Trap);
    CHECK(ClassifyItem(0b00000) == ItemClass::Filler);
}

TEST_CASE("APInterception::TrapBitWinsOverProgressionIfBothSet")
{
    using namespace Archipelago::Interception;
    CHECK(ClassifyItem(0b00101) == ItemClass::Trap);
}

TEST_CASE("APInterception::SkipBalancingBitIsIgnoredForDisplay")
{
    using namespace Archipelago::Interception;
    CHECK(ClassifyItem(0b01001) == ItemClass::Progression); // progression + skip_balancing
    CHECK(ClassifyItem(0b01000) == ItemClass::Filler);       // skip_balancing alone
}
