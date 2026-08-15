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
    std::string raw = R"({"cmd": "RoomInfo", "seed_name": "abc"})";
    CHECK(ParseServerMessageType(raw) == ServerMessageType::RoomInfo);
}

TEST_CASE("ParseServerMessageType recognizes Connected")
{
    std::string raw = R"({"cmd": "Connected", "team": 0, "slot": 1})";
    CHECK(ParseServerMessageType(raw) == ServerMessageType::Connected);
}

TEST_CASE("ParseServerMessageType recognizes ConnectionRefused")
{
    std::string raw = R"({"cmd": "ConnectionRefused", "errors": ["InvalidSlot"]})";
    CHECK(ParseServerMessageType(raw) == ServerMessageType::ConnectionRefused);
}

TEST_CASE("ParseServerMessageType returns Unknown for unrecognized messages")
{
    std::string raw = R"({"cmd": "PrintJSON", "data": []})";
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
