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

TEST_CASE("ParseApItemDisplayFromSlotData returns empty when cmd is wrong-typed instead of throwing")
{
    std::string raw = R"([{
        "cmd": 5,
        "slot_data": {
            "ap_item_display": {
                "2000000": {"name": "Alice's Sword of Might", "flags": 1}
            }
        }
    }])";

    std::unordered_map<int64_t, Archipelago::ApItemDisplay> display;
    CHECK_NOTHROW(display = Archipelago::ParseApItemDisplayFromSlotData(raw));
    CHECK(display.empty());
}

TEST_CASE("ParseVendorCheckRepeatBehaviorFromSlotData parses vendor_check_repeat_behavior from Connected's slot_data")
{
    std::string raw = R"([{
        "cmd": "Connected",
        "slot_data": {
            "vendor_check_repeat_behavior": "gold_conversion"
        }
    }])";

    auto behavior = Archipelago::ParseVendorCheckRepeatBehaviorFromSlotData(raw);

    REQUIRE(behavior.has_value());
    CHECK(*behavior == "gold_conversion");
}

TEST_CASE("ParseVendorCheckRepeatBehaviorFromSlotData returns nullopt when slot_data is absent")
{
    std::string raw = R"([{"cmd": "Connected"}])";
    auto behavior = Archipelago::ParseVendorCheckRepeatBehaviorFromSlotData(raw);
    CHECK_FALSE(behavior.has_value());
}

TEST_CASE("ParseVendorCheckRepeatBehaviorFromSlotData returns nullopt on malformed JSON")
{
    auto behavior = Archipelago::ParseVendorCheckRepeatBehaviorFromSlotData("not json");
    CHECK_FALSE(behavior.has_value());
}

TEST_CASE("ParseVendorCheckRepeatBehaviorFromSlotData returns nullopt when the key is wrong-typed instead of throwing")
{
    std::string raw = R"([{
        "cmd": "Connected",
        "slot_data": {
            "vendor_check_repeat_behavior": 12345
        }
    }])";

    std::optional<std::string> behavior;
    CHECK_NOTHROW(behavior = Archipelago::ParseVendorCheckRepeatBehaviorFromSlotData(raw));
    CHECK_FALSE(behavior.has_value());
}

TEST_CASE("ParseVendorCheckRepeatBehaviorFromSlotData returns nullopt when cmd is wrong-typed instead of throwing")
{
    std::string raw = R"([{
        "cmd": 5,
        "slot_data": {
            "vendor_check_repeat_behavior": "gold_conversion"
        }
    }])";

    std::optional<std::string> behavior;
    CHECK_NOTHROW(behavior = Archipelago::ParseVendorCheckRepeatBehaviorFromSlotData(raw));
    CHECK_FALSE(behavior.has_value());
}

TEST_CASE("ParseInstanceClearModeFromSlotData parses instance_clear_mode from Connected's slot_data")
{
    std::string raw = R"([{
        "cmd": "Connected",
        "slot_data": {
            "instance_clear_mode": "final_boss_only"
        }
    }])";

    auto mode = Archipelago::ParseInstanceClearModeFromSlotData(raw);

    REQUIRE(mode.has_value());
    CHECK(*mode == "final_boss_only");
}

TEST_CASE("ParseInstanceClearModeFromSlotData returns nullopt when slot_data is absent")
{
    std::string raw = R"([{"cmd": "Connected"}])";
    auto mode = Archipelago::ParseInstanceClearModeFromSlotData(raw);
    CHECK_FALSE(mode.has_value());
}

TEST_CASE("ParseInstanceClearModeFromSlotData returns nullopt on malformed JSON")
{
    auto mode = Archipelago::ParseInstanceClearModeFromSlotData("not json");
    CHECK_FALSE(mode.has_value());
}

TEST_CASE("ParseInstanceClearModeFromSlotData returns nullopt when the key is wrong-typed instead of throwing")
{
    std::string raw = R"([{
        "cmd": "Connected",
        "slot_data": {
            "instance_clear_mode": 12345
        }
    }])";

    std::optional<std::string> mode;
    CHECK_NOTHROW(mode = Archipelago::ParseInstanceClearModeFromSlotData(raw));
    CHECK_FALSE(mode.has_value());
}

TEST_CASE("ParseInstanceClearModeFromSlotData returns nullopt when cmd is wrong-typed instead of throwing")
{
    std::string raw = R"([{
        "cmd": 5,
        "slot_data": {
            "instance_clear_mode": "all_bosses"
        }
    }])";

    std::optional<std::string> mode;
    CHECK_NOTHROW(mode = Archipelago::ParseInstanceClearModeFromSlotData(raw));
    CHECK_FALSE(mode.has_value());
}

TEST_CASE("ParseLootSlotCheckRepeatBehaviorFromSlotData parses loot_slot_check_repeat_behavior from Connected's slot_data")
{
    std::string raw = R"([{
        "cmd": "Connected",
        "slot_data": {
            "loot_slot_check_repeat_behavior": "gold_conversion"
        }
    }])";

    auto behavior = Archipelago::ParseLootSlotCheckRepeatBehaviorFromSlotData(raw);

    REQUIRE(behavior.has_value());
    CHECK(*behavior == "gold_conversion");
}

TEST_CASE("ParseLootSlotCheckRepeatBehaviorFromSlotData returns nullopt when slot_data is absent")
{
    std::string raw = R"([{"cmd": "Connected"}])";
    auto behavior = Archipelago::ParseLootSlotCheckRepeatBehaviorFromSlotData(raw);
    CHECK_FALSE(behavior.has_value());
}

TEST_CASE("ParseLootSlotCheckRepeatBehaviorFromSlotData returns nullopt on malformed JSON")
{
    auto behavior = Archipelago::ParseLootSlotCheckRepeatBehaviorFromSlotData("not json");
    CHECK_FALSE(behavior.has_value());
}

TEST_CASE("ParseLootSlotCheckRepeatBehaviorFromSlotData returns nullopt when the key is wrong-typed instead of throwing")
{
    std::string raw = R"([{
        "cmd": "Connected",
        "slot_data": {
            "loot_slot_check_repeat_behavior": 12345
        }
    }])";

    std::optional<std::string> behavior;
    CHECK_NOTHROW(behavior = Archipelago::ParseLootSlotCheckRepeatBehaviorFromSlotData(raw));
    CHECK_FALSE(behavior.has_value());
}

TEST_CASE("ParseLootSlotCheckRepeatBehaviorFromSlotData returns nullopt when cmd is wrong-typed instead of throwing")
{
    std::string raw = R"([{
        "cmd": 5,
        "slot_data": {
            "loot_slot_check_repeat_behavior": "gold_conversion"
        }
    }])";

    std::optional<std::string> behavior;
    CHECK_NOTHROW(behavior = Archipelago::ParseLootSlotCheckRepeatBehaviorFromSlotData(raw));
    CHECK_FALSE(behavior.has_value());
}

TEST_CASE("ParseZoneLevelerZoneIdFromSlotData parses zone_leveler_zone_id from Connected's slot_data")
{
    std::string raw = R"([{
        "cmd": "Connected",
        "slot_data": {
            "zone_leveler_zone_id": 17
        }
    }])";

    auto zoneId = Archipelago::ParseZoneLevelerZoneIdFromSlotData(raw);

    REQUIRE(zoneId.has_value());
    CHECK(*zoneId == 17u);
}

TEST_CASE("ParseZoneLevelerZoneIdFromSlotData returns nullopt when slot_data is absent")
{
    std::string raw = R"([{"cmd": "Connected"}])";
    auto zoneId = Archipelago::ParseZoneLevelerZoneIdFromSlotData(raw);
    CHECK_FALSE(zoneId.has_value());
}

TEST_CASE("ParseZoneLevelerZoneIdFromSlotData returns nullopt on malformed JSON")
{
    auto zoneId = Archipelago::ParseZoneLevelerZoneIdFromSlotData("not json");
    CHECK_FALSE(zoneId.has_value());
}

TEST_CASE("ParseZoneLevelerZoneIdFromSlotData returns nullopt when the key is wrong-typed instead of throwing")
{
    std::string raw = R"([{
        "cmd": "Connected",
        "slot_data": {
            "zone_leveler_zone_id": "not a number"
        }
    }])";

    std::optional<uint32_t> zoneId;
    CHECK_NOTHROW(zoneId = Archipelago::ParseZoneLevelerZoneIdFromSlotData(raw));
    CHECK_FALSE(zoneId.has_value());
}

TEST_CASE("ParseZoneLevelerZoneIdFromSlotData returns nullopt for a negative value")
{
    std::string raw = R"([{
        "cmd": "Connected",
        "slot_data": {
            "zone_leveler_zone_id": -1
        }
    }])";
    auto zoneId = Archipelago::ParseZoneLevelerZoneIdFromSlotData(raw);
    CHECK_FALSE(zoneId.has_value());
}

TEST_CASE("ParseZoneLevelerZoneIdFromSlotData returns nullopt when cmd is wrong-typed instead of throwing")
{
    std::string raw = R"([{
        "cmd": 5,
        "slot_data": {
            "zone_leveler_zone_id": 17
        }
    }])";

    std::optional<uint32_t> zoneId;
    CHECK_NOTHROW(zoneId = Archipelago::ParseZoneLevelerZoneIdFromSlotData(raw));
    CHECK_FALSE(zoneId.has_value());
}

TEST_CASE("ParseZoneLevelerAllowedHubZoneIdsFromSlotData parses zone_leveler_allowed_hub_zone_ids from Connected's slot_data")
{
    std::string raw = R"([{
        "cmd": "Connected",
        "slot_data": {
            "zone_leveler_allowed_hub_zone_ids": [1, 14]
        }
    }])";

    auto ids = Archipelago::ParseZoneLevelerAllowedHubZoneIdsFromSlotData(raw);

    REQUIRE(ids.has_value());
    REQUIRE(ids->size() == 2u);
    CHECK((*ids)[0] == 1u);
    CHECK((*ids)[1] == 14u);
}

TEST_CASE("ParseZoneLevelerAllowedHubZoneIdsFromSlotData parses a present-but-empty array as an empty (non-nullopt) vector")
{
    std::string raw = R"([{
        "cmd": "Connected",
        "slot_data": {
            "zone_leveler_allowed_hub_zone_ids": []
        }
    }])";

    auto ids = Archipelago::ParseZoneLevelerAllowedHubZoneIdsFromSlotData(raw);

    REQUIRE(ids.has_value());
    CHECK(ids->empty());
}

TEST_CASE("ParseZoneLevelerAllowedHubZoneIdsFromSlotData returns nullopt when slot_data is absent")
{
    std::string raw = R"([{"cmd": "Connected"}])";
    auto ids = Archipelago::ParseZoneLevelerAllowedHubZoneIdsFromSlotData(raw);
    CHECK_FALSE(ids.has_value());
}

TEST_CASE("ParseZoneLevelerAllowedHubZoneIdsFromSlotData returns nullopt on malformed JSON")
{
    auto ids = Archipelago::ParseZoneLevelerAllowedHubZoneIdsFromSlotData("not json");
    CHECK_FALSE(ids.has_value());
}

TEST_CASE("ParseZoneLevelerAllowedHubZoneIdsFromSlotData returns nullopt when the key is wrong-typed instead of throwing")
{
    std::string raw = R"([{
        "cmd": "Connected",
        "slot_data": {
            "zone_leveler_allowed_hub_zone_ids": "not an array"
        }
    }])";

    std::optional<std::vector<uint32_t>> ids;
    CHECK_NOTHROW(ids = Archipelago::ParseZoneLevelerAllowedHubZoneIdsFromSlotData(raw));
    CHECK_FALSE(ids.has_value());
}

TEST_CASE("ParseZoneLevelerAllowedHubZoneIdsFromSlotData skips a non-numeric element instead of throwing")
{
    std::string raw = R"([{
        "cmd": "Connected",
        "slot_data": {
            "zone_leveler_allowed_hub_zone_ids": [1, "oops", 14]
        }
    }])";

    std::optional<std::vector<uint32_t>> ids;
    CHECK_NOTHROW(ids = Archipelago::ParseZoneLevelerAllowedHubZoneIdsFromSlotData(raw));
    REQUIRE(ids.has_value());
    REQUIRE(ids->size() == 2u);
    CHECK((*ids)[0] == 1u);
    CHECK((*ids)[1] == 14u);
}

TEST_CASE("ParseZoneLevelerAllowHubZoneFromSlotData parses zone_leveler_allow_hub_zone from Connected's slot_data")
{
    std::string raw = R"([{
        "cmd": "Connected",
        "slot_data": {
            "zone_leveler_allow_hub_zone": true
        }
    }])";

    auto allow = Archipelago::ParseZoneLevelerAllowHubZoneFromSlotData(raw);

    REQUIRE(allow.has_value());
    CHECK(*allow == true);
}

TEST_CASE("ParseZoneLevelerAllowHubZoneFromSlotData returns nullopt when slot_data is absent")
{
    std::string raw = R"([{"cmd": "Connected"}])";
    auto allow = Archipelago::ParseZoneLevelerAllowHubZoneFromSlotData(raw);
    CHECK_FALSE(allow.has_value());
}

TEST_CASE("ParseZoneLevelerAllowHubZoneFromSlotData returns nullopt on malformed JSON")
{
    auto allow = Archipelago::ParseZoneLevelerAllowHubZoneFromSlotData("not json");
    CHECK_FALSE(allow.has_value());
}

TEST_CASE("ParseZoneLevelerAllowHubZoneFromSlotData returns nullopt when the key is wrong-typed instead of throwing")
{
    std::string raw = R"([{
        "cmd": "Connected",
        "slot_data": {
            "zone_leveler_allow_hub_zone": "not a bool"
        }
    }])";

    std::optional<bool> allow;
    CHECK_NOTHROW(allow = Archipelago::ParseZoneLevelerAllowHubZoneFromSlotData(raw));
    CHECK_FALSE(allow.has_value());
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

TEST_CASE("BuildSayPacket produces a valid Say command")
{
    std::string packet = BuildSayPacket("!hint Alice's Sword of Might");
    CHECK(packet.find("\"cmd\":\"Say\"") != std::string::npos);
    CHECK(packet.find("\"text\":\"!hint Alice's Sword of Might\"") != std::string::npos);
}

TEST_CASE("ParseMissingLocationsFromConnected extracts location ids")
{
    std::string raw = R"([{"cmd": "Connected", "team": 0, "slot": 1,
        "missing_locations": [100, 200, 300], "checked_locations": [50]}])";
    std::vector<int64_t> missing = ParseMissingLocationsFromConnected(raw);
    REQUIRE(missing.size() == 3);
    CHECK(missing[0] == 100);
    CHECK(missing[1] == 200);
    CHECK(missing[2] == 300);
}

TEST_CASE("ParseMissingLocationsFromConnected returns empty when missing_locations is absent")
{
    std::string raw = R"([{"cmd": "Connected", "team": 0, "slot": 1}])";
    CHECK(ParseMissingLocationsFromConnected(raw).empty());
}

TEST_CASE("ParseMissingLocationsFromConnected returns empty on malformed JSON")
{
    CHECK(ParseMissingLocationsFromConnected("not json").empty());
}

TEST_CASE("ParseMissingLocationsFromConnected ignores a non-array missing_locations field")
{
    std::string raw = R"([{"cmd": "Connected", "missing_locations": "oops"}])";
    CHECK(ParseMissingLocationsFromConnected(raw).empty());
}

TEST_CASE("ParsePrintJSONText concatenates literal text parts")
{
    // Tagged raw-string delimiter (R"json(...)json") rather than the plain
    // R"(...)" form: the JSON payload's "(unspecified)" literal contains a
    // bare )" sequence, which would otherwise prematurely terminate an
    // untagged raw string right there.
    std::string raw = R"json([{"cmd": "PrintJSON", "data": [
        {"text": "[Hint]: "}, {"text": "42", "type": "player_id"}, {"text": "'s item is at "},
        {"text": "1234", "type": "item_id", "player": 1}, {"text": ". "}, {"text": "(unspecified)", "type": "hint_status"}
    ]}])json";
    std::vector<std::string> texts = ParsePrintJSONText(raw);
    REQUIRE(texts.size() == 1);
    CHECK(texts[0] == "[Hint]: 42's item is at 1234. (unspecified)");
}

TEST_CASE("ParsePrintJSONText returns one entry per PrintJSON message in a batched frame")
{
    std::string raw = R"([
        {"cmd": "PrintJSON", "data": [{"text": "first"}]},
        {"cmd": "ReceivedItems", "items": []},
        {"cmd": "PrintJSON", "data": [{"text": "second"}]}
    ])";
    std::vector<std::string> texts = ParsePrintJSONText(raw);
    REQUIRE(texts.size() == 2);
    CHECK(texts[0] == "first");
    CHECK(texts[1] == "second");
}

TEST_CASE("ParsePrintJSONText returns empty on malformed JSON")
{
    CHECK(ParsePrintJSONText("not json").empty());
}

TEST_CASE("ParsePrintJSONText skips a data part with no text field rather than throwing")
{
    std::string raw = R"([{"cmd": "PrintJSON", "data": [{"text": "a"}, {"color": "red"}, {"text": "b"}]}])";
    REQUIRE(ParsePrintJSONText(raw).size() == 1);
    CHECK(ParsePrintJSONText(raw)[0] == "ab");
}
