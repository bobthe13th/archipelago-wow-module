// azerothcore-wotlk/modules/archipelago_wow/test/test_APProtocol.cpp
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "APProtocol.h"

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
