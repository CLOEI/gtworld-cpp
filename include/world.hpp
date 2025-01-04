#pragma once
#include <array>
#include <cstdint>
#include <string>
#include <variant>
#include <vector>

struct Door {
    std::string text;
    uint8_t unknown_1;
};

struct Sign {
    std::string text;
};

struct Lock {
    uint8_t settings;
    uint32_t owner_uid;
    uint32_t access_count;
    std::vector<uint32_t> access_uids;
    uint8_t minimum_level;
};

// -----------------------------------------------------------
struct Seed {
    uint32_t time_passed;
    uint8_t item_on_tree;
};

// Mailbox
struct Mailbox {
    std::string unknown_1;
    std::string unknown_2;
    std::string unknown_3;
    uint8_t unknown_4;
};

// Bulletin
struct Bulletin {
    std::string unknown_1;
    std::string unknown_2;
    std::string unknown_3;
    uint8_t unknown_4;
};

// Dice
struct Dice {
    uint8_t symbol;
};

// ChemicalSource
struct ChemicalSource {
    uint32_t time_passed;
};

// AchievementBlock
struct AchievementBlock {
    uint32_t unknown_1;
    uint8_t tile_type;
};

// HearthMonitor
struct HearthMonitor {
    uint32_t unknown_1;
    std::string player_name;
};

// DonationBox
struct DonationBox {
    std::string unknown_1;
    std::string unknown_2;
    std::string unknown_3;
    uint8_t unknown_4;
};

// Mannequin
struct Mannequin {
    std::string text;
    uint8_t unknown_1;
    uint32_t clothing_1;
    uint16_t clothing_2;
    uint16_t clothing_3;
    uint16_t clothing_4;
    uint16_t clothing_5;
    uint16_t clothing_6;
    uint16_t clothing_7;
    uint16_t clothing_8;
    uint16_t clothing_9;
    uint16_t clothing_10;
};

// BunnyEgg
struct BunnyEgg {
    uint32_t egg_placed;
};

// GamePack
struct GamePack {
    uint8_t team;
};

// GameGenerator
struct GameGenerator {};

// XenoniteCrystal
struct XenoniteCrystal {
    uint8_t unknown_1;
    uint32_t unknown_2;
};

// PhoneBooth
struct PhoneBooth {
    uint16_t clothing_1;
    uint16_t clothing_2;
    uint16_t clothing_3;
    uint16_t clothing_4;
    uint16_t clothing_5;
    uint16_t clothing_6;
    uint16_t clothing_7;
    uint16_t clothing_8;
    uint16_t clothing_9;
};

// Crystal
struct Crystal {
    std::string unknown_1;
};

// CrimeInProgress
struct CrimeInProgress {
    std::string unknown_1;
    uint32_t unknown_2;
    uint8_t unknown_3;
};

// DisplayBlock
struct DisplayBlock {
    uint32_t item_id;
};

// VendingMachine
struct VendingMachine {
    uint32_t item_id;
    int32_t price;
};

// GivingTree
struct GivingTree {
    uint16_t unknown_1;
    uint32_t unknown_2;
};

// CountryFlag
struct CountryFlag {
    std::string country;
};

// WeatherMachine
struct WeatherMachine {
    uint32_t item_id;
};

// DataBedrock
struct DataBedrock {
    std::array<uint8_t, 21> unknown_1;
};

// Spotlight
struct Spotlight {};

struct FishTankPort {
    uint8_t flags;
    struct info {
        uint32_t fish_item_id;
        uint32_t lbs;
    };
    std::vector<info> Fishes;
};

// SolarCollector
struct SolarCollector {
    uint8_t unknown_1[5];
};

// Forge
struct Forge {
    uint32_t temperature;
};

// SteamOrgan
struct SteamOrgan {
    uint8_t instrument_type;
    uint32_t note;
};

// SilkWorm
struct SilkWorm {
    uint8_t type;
    std::string name;
    uint32_t age;
    uint32_t unknown_1;
    uint32_t unknown_2;
    uint8_t can_be_fed;
    struct {
        uint8_t A;
        uint8_t R;
        uint8_t G;
        uint8_t B;
    } color;
    uint32_t sick_duration;
};

// SewingMachine
struct SewingMachine {
    std::vector<uint32_t> bolt_id_list;
};

// LobsterTrap
struct LobsterTrap {};

// PaintingEasel
struct PaintingEasel {
    int32_t item_id;
    std::string label;
};

// PetBattleCage
struct PetBattleCage {
    std::string label;
    uint32_t base_pet;
    uint32_t combined_pet_11;
    uint32_t combined_pet_2;
};

// PetTrainer
struct PetTrainer {
    std::string name;
    uint32_t pet_total_count;
    uint32_t unknown_1;
    std::vector<uint32_t> pets_id;
};

// SteamEngine
struct SteamEngine {
    uint32_t temperature;
};

// LockBot
struct LockBot {
    uint32_t time_passed;
};

// SpiritStorageUnit
struct SpiritStorageUnit {
    uint32_t ghost_jar_count;
};

// Shelf
struct Shelf {
    uint32_t top_left_item_id;
    uint32_t top_right_item_id;
    uint32_t bottom_left_item_id;
    uint32_t bottom_right_item_id;
};

// VipEntrance
struct VipEntrance {
    uint8_t unknown_1;
    uint32_t owner_uid;
    std::vector<uint32_t> access_uids;
};

// ChallangeTimer
struct ChallangeTimer {};

// FishWallMount
struct FishWallMount {
    std::string label;
    uint32_t item_id;
    uint8_t lb;
};

// Portrait
struct Portrait {
    std::string label;
    uint32_t unknown_1, unknown_2, unknown_3, unknown_4;
    uint32_t face, hat, hair;
    uint16_t unknown_5, unknown_6;
};

// GuildWeatherMachine
struct GuildWeatherMachine {
    uint32_t unknown_1;
    uint32_t gravity;
    uint8_t flags;
};

// FossilPrepStation
struct FossilPrepStation {
    uint32_t unknown_1;
};

// DnaExtractor
struct DnaExtractor {};

// Howler
struct Howler {};

// ChemsynthTank
struct ChemsynthTank {
    uint32_t current_chem;
    uint32_t target_chem;
};

// StorageBlock
struct StorageBlock {
    struct ItemInfo {
        uint32_t item_id;
        uint32_t amount;
    };
    std::vector<ItemInfo> items;
};

// CookingOven
struct CookingOven {
    struct IngredientInfo {
        uint32_t item_id;
        uint32_t time_added;
    };
    uint32_t temperature_level;
    std::vector<IngredientInfo> ingredients;
    uint32_t unknown_1, unknown_2, unknown_3;
};

// AudioRack
struct AudioRack {
    std::string note;
    uint32_t volume;
};

// GeigerCharger
struct GeigerCharger {
    uint32_t unknown_1;
};

// AdventureBegins
struct AdventureBegins {};

// TombRobber
struct TombRobber {};

// BalloonOMatic
struct BalloonOMatic {
    uint32_t total_rarity;
    uint8_t team_type;
};

// TrainingPort
struct TrainingPort {
    uint32_t fish_lb;
    uint16_t fish_status;
    uint32_t fish_id;
    uint32_t fish_total_exp;
    uint8_t unknown_1[8];
    uint32_t fish_level;
    uint32_t unknown_2;
    uint8_t unknown_3[5];
};

// ItemSucker
struct ItemSucker {
    uint32_t item_id_to_suck;
    uint32_t item_amount;
    uint16_t flags;
    uint32_t limit;
};

// CyBot
struct CyBot {
    struct CommandData {
        uint32_t command_id;
        uint32_t is_command_used;
        uint8_t unknown_1[7];
    };
    uint32_t sync_timer;
    uint32_t activated;
    std::vector<CommandData> command_datas;
};

// GuildItem
struct GuildItem {
    uint8_t unknown_1[17];
};

// Growscan
struct Growscan {
    uint8_t unknown_1;
};

// ContainmentFieldPowerNode
struct ContainmentFieldPowerNode {
    uint32_t ghost_jar_count;
    std::vector<uint32_t> unknown_1;
};

// SpiritBoard
struct SpiritBoard {
    uint32_t unknown_1;
    uint32_t unknown_2;
    uint32_t unknown_3;
};

// StormyCloud
struct StormyCloud {
    uint32_t sting_duration;
    uint32_t is_solid;
    uint32_t non_solid_duration;
};

// TemporaryPlatform
struct TemporaryPlatform {
    uint32_t unknown_1;
};

// SafeVault
struct SafeVault {};

// AngelicCountingCloud
struct AngelicCountingCloud {
    uint32_t is_raffling;
    uint16_t unknown_1;
    uint8_t ascii_code;
};

// InfinityWeatherMachine
struct InfinityWeatherMachine {
    uint32_t interval_minutes;
    std::vector<uint32_t> weather_machine_list;
};

// PineappleGuzzler
struct PineappleGuzzler {};

// KrakenGalaticBlock
struct KrakenGalaticBlock {
    uint8_t pattern_index;
    uint32_t unknown_1;
    uint8_t r, g, b;
};

// FriendsEntrance
struct FriendsEntrance {
    uint32_t owner_user_id;
    uint16_t unknown_1;
    std::vector<uint32_t> allowed_user_list;
};

enum class TileType {
    Basic,
    Door,
    Sign,
    Lock,
    Seed,
    Mailbox,
    Bulletin,
    Dice,
    ChemicalSource,
    AchievementBlock,
    HearthMonitor,
    DonationBox,
    Mannequin,
    BunnyEgg,
    GamePack,
    GameGenerator,
    XenoniteCrystal,
    PhoneBooth,
    Crystal,
    CrimeInProgress,
    DisplayBlock,
    VendingMachine,
    GivingTree,
    CountryFlag,
    WeatherMachine,
    DataBedrock,
    Spotlight,
    FishTankPort,
    SolarCollector,
    Forge,
    SteamOrgan,
    SilkWorm,
    SewingMachine,
    LobsterTrap,
    PaintingEasel,
    PetBattleCage,
    PetTrainer,
    SteamEngine,
    LockBot,
    SpiritStorageUnit,
    Shelf,
    VipEntrance,
    ChallangeTimer,
    FishWallMount,
    Portrait,
    GuildWeatherMachine,
    FossilPrepStation,
    DnaExtractor,
    Howler,
    ChemsynthTank,
    StorageBlock,
    CookingOven,
    AudioRack,
    GeigerCharger,
    AdventureBegins,
    TombRobber,
    BalloonOMatic,
    TrainingPort,
    ItemSucker,
    CyBot,
    GuildItem,
    Growscan,
    ContainmentFieldPowerNode,
    SpiritBoard,
    StormyCloud,
    TemporaryPlatform,
    SafeVault,
    AngelicCountingCloud,
    InfinityWeatherMachine,
    PineappleGuzzler,
    KrakenGalaticBlock,
    FriendsEntrance
};

struct DroppedItem {
    uint16_t id;
    float x;
    float y;
    uint8_t count;
    uint8_t flags;
    uint32_t uid;
};

struct Dropped {
    uint32_t items_count;
    uint32_t last_dropped_item_uid;
    std::vector<DroppedItem> items;
};

using TileData = std::variant<
    std::monostate, Door, Sign, Lock, Seed, Mailbox, Bulletin, Dice,
    ChemicalSource, AchievementBlock, HearthMonitor, DonationBox, Mannequin,
    BunnyEgg, GamePack, GameGenerator, XenoniteCrystal, PhoneBooth, Crystal,
    CrimeInProgress, DisplayBlock, VendingMachine, GivingTree, CountryFlag,
    WeatherMachine, DataBedrock, Spotlight, FishTankPort, SolarCollector, Forge,
    SteamOrgan, SilkWorm, SewingMachine, LobsterTrap, PaintingEasel,
    PetBattleCage, PetTrainer, SteamEngine, LockBot, SpiritStorageUnit, Shelf,
    VipEntrance, ChallangeTimer, FishWallMount, Portrait, GuildWeatherMachine,
    FossilPrepStation, DnaExtractor, Howler, ChemsynthTank, StorageBlock,
    CookingOven, AudioRack, GeigerCharger, AdventureBegins, TombRobber,
    BalloonOMatic, TrainingPort, ItemSucker, CyBot, GuildItem, Growscan,
    ContainmentFieldPowerNode, SpiritBoard, StormyCloud, TemporaryPlatform,
    SafeVault, AngelicCountingCloud, InfinityWeatherMachine, PineappleGuzzler,
    KrakenGalaticBlock, FriendsEntrance>;

// -----------------------------------------------------------
struct Tile {
    uint16_t foreground_item_id;
    uint16_t background_item_id;
    uint16_t parent_block_index;
    uint16_t flags;
    TileType type;
    TileData data;
};

// -----------------------------------------------------------
class World {
public:
    std::string name = "EXIT";
    uint32_t width;
    uint32_t height;
    uint32_t tile_count;
    std::vector<Tile> tiles;
    Dropped dropped;
    uint16_t base_weather;
    uint16_t current_weather;

    void parse(uint8_t* data);

private:
    void get_extra_tile_data(Tile& tile, uint8_t* data, size_t& position, uint8_t extra_tile_type);
};
