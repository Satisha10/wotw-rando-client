#pragma once

#include <json/json.hpp>
#include <randomizer/render/animation.h>
#include <randomizer/render/sprite.h>

namespace app {
    void to_json(nlohmann::json& j, const Vector2& s);
    void from_json(const nlohmann::json& j, Vector2& s);

    void to_json(nlohmann::json& j, const Vector3& s);
    void from_json(const nlohmann::json& j, Vector3& s);

    void to_json(nlohmann::json& j, const Vector4& s);
    void from_json(const nlohmann::json& j, Vector4& s);

    void to_json(nlohmann::json& j, const Color& s);
    void from_json(const nlohmann::json& j, Color& s);

    NLOHMANN_JSON_SERIALIZE_ENUM(BlendMode__Enum, {
        { BlendMode__Enum_Zero, "Zero" },
        { BlendMode__Enum_One, "One" },
        { BlendMode__Enum_DstColor, "DstColor" },
        { BlendMode__Enum_SrcColor, "SrcColor" },
        { BlendMode__Enum_OneMinusDstColor, "OneMinusDstColor" },
        { BlendMode__Enum_SrcAlpha, "SrcAlpha" },
        { BlendMode__Enum_OneMinusSrcColor, "OneMinusSrcColor" },
        { BlendMode__Enum_DstAlpha, "DstAlpha" },
        { BlendMode__Enum_OneMinusDstAlpha, "OneMinusDstAlpha" },
        { BlendMode__Enum_SrcAlphaSaturate, "SrcAlphaSaturate" },
        { BlendMode__Enum_OneMinusSrcAlpha, "OneMinusSrcAlpha" },
    });

    NLOHMANN_JSON_SERIALIZE_ENUM(AlignmentMode__Enum, {
        { AlignmentMode__Enum_Left, "Left" },
        { AlignmentMode__Enum_Center, "Center" },
        { AlignmentMode__Enum_Right, "Right" },
        { AlignmentMode__Enum_Justify, "Justify" },
    });

    NLOHMANN_JSON_SERIALIZE_ENUM(HorizontalAnchorMode__Enum, {
        { HorizontalAnchorMode__Enum_Left, "Left" },
        { HorizontalAnchorMode__Enum_Center, "Center" },
        { HorizontalAnchorMode__Enum_Right, "Right" },
    });

    NLOHMANN_JSON_SERIALIZE_ENUM(VerticalAnchorMode__Enum, {
        { VerticalAnchorMode__Enum_Top, "Top" },
        { VerticalAnchorMode__Enum_Middle, "Middle" },
        { VerticalAnchorMode__Enum_Bottom, "Bottom" },
    });

    NLOHMANN_JSON_SERIALIZE_ENUM(SetupControllerStateHolder_StateControllerMode__Enum, {
        { SetupControllerStateHolder_StateControllerMode__Enum_Active, "Active" },
        { SetupControllerStateHolder_StateControllerMode__Enum_Passive, "Passive" },
    });

    NLOHMANN_JSON_SERIALIZE_ENUM(AbilityType__Enum, {
        { app::AbilityType__Enum_None, "None" },
        { app::AbilityType__Enum_Bash, "Bash" },
        { app::AbilityType__Enum_ChargeFlame, "ChargeFlame" },
        { app::AbilityType__Enum_WallJump, "WallJump" },
        { app::AbilityType__Enum_Stomp, "Stomp" },
        { app::AbilityType__Enum_DoubleJump, "DoubleJump" },
        { app::AbilityType__Enum_ChargeJump, "ChargeJump" },
        { app::AbilityType__Enum_Magnet, "Magnet" },
        { app::AbilityType__Enum_UltraMagnet, "UltraMagnet" },
        { app::AbilityType__Enum_Climb, "Climb" },
        { app::AbilityType__Enum_Glide, "Glide" },
        { app::AbilityType__Enum_SpiritFlame, "SpiritFlame" },
        { app::AbilityType__Enum_RapidFlame, "RapidFlame" },
        { app::AbilityType__Enum_SplitFlameUpgrade, "SplitFlameUpgrade" },
        { app::AbilityType__Enum_SoulEfficiency, "SoulEfficiency" },
        { app::AbilityType__Enum_WaterBreath, "WaterBreath" },
        { app::AbilityType__Enum_ChargeFlameBlast, "ChargeFlameBlast" },
        { app::AbilityType__Enum_ChargeFlameBurn, "ChargeFlameBurn" },
        { app::AbilityType__Enum_DoubleJumpUpgrade, "DoubleJumpUpgrade" },
        { app::AbilityType__Enum_BashBuff, "BashBuff" },
        { app::AbilityType__Enum_UltraDefense, "UltraDefense" },
        { app::AbilityType__Enum_HealthEfficiency, "HealthEfficiency" },
        { app::AbilityType__Enum_Sense, "Sense" },
        { app::AbilityType__Enum_UltraStomp, "UltraStomp" },
        { app::AbilityType__Enum_SparkFlame, "SparkFlame" },
        { app::AbilityType__Enum_QuickFlame, "QuickFlame" },
        { app::AbilityType__Enum_MapMarkers, "MapMarkers" },
        { app::AbilityType__Enum_EnergyEfficiency, "EnergyEfficiency" },
        { app::AbilityType__Enum_HealthMarkers, "HealthMarkers" },
        { app::AbilityType__Enum_EnergyMarkers, "EnergyMarkers" },
        { app::AbilityType__Enum_AbilityMarkers, "AbilityMarkers" },
        { app::AbilityType__Enum_Rekindle, "Rekindle" },
        { app::AbilityType__Enum_Regroup, "Regroup" },
        { app::AbilityType__Enum_ChargeFlameEfficiency, "ChargeFlameEfficiency" },
        { app::AbilityType__Enum_UltraSoulFlame, "UltraSoulFlame" },
        { app::AbilityType__Enum_SoulFlameEfficiency, "SoulFlameEfficiency" },
        { app::AbilityType__Enum_CinderFlame, "CinderFlame" },
        { app::AbilityType__Enum_UltraSplitFlame, "UltraSplitFlame" },
        { app::AbilityType__Enum_Dash, "Dash" },
        { app::AbilityType__Enum_Grenade, "Grenade" },
        { app::AbilityType__Enum_GrenadeUpgrade, "GrenadeUpgrade" },
        { app::AbilityType__Enum_ChargeDash, "ChargeDash" },
        { app::AbilityType__Enum_AirDash, "AirDash" },
        { app::AbilityType__Enum_GrenadeEfficiency, "GrenadeEfficiency" },
        { app::AbilityType__Enum_Bounce, "Bounce" },
        { app::AbilityType__Enum_SpiritLeash, "SpiritLeash" },
        { app::AbilityType__Enum_SpiritSlash, "SpiritSlash" },
        { app::AbilityType__Enum_HeavySpiritSlash, "HeavySpiritSlash" },
        { app::AbilityType__Enum_FireburstSpell, "FireburstSpell" },
        { app::AbilityType__Enum_FirewhirlSpell, "FirewhirlSpell" },
        { app::AbilityType__Enum_GlowSpell, "GlowSpell" },
        { app::AbilityType__Enum_LockOnSpell, "LockOnSpell" },
        { app::AbilityType__Enum_TimeWarpSpell, "TimeWarpSpell" },
        { app::AbilityType__Enum_ShieldSpell, "ShieldSpell" },
        { app::AbilityType__Enum_EnergyWallSpell, "EnergyWallSpell" },
        { app::AbilityType__Enum_InvisibilitySpell, "InvisibilitySpell" },
        { app::AbilityType__Enum_TrapSpell, "TrapSpell" },
        { app::AbilityType__Enum_WarpSpell, "WarpSpell" },
        { app::AbilityType__Enum_LightSpell, "LightSpell" },
        { app::AbilityType__Enum_MindControlSpell, "MindControlSpell" },
        { app::AbilityType__Enum_MirageSpell, "MirageSpell" },
        { app::AbilityType__Enum_StickyMineSpell, "StickyMineSpell" },
        { app::AbilityType__Enum_SpiritSpearSpell, "SpiritSpearSpell" },
        { app::AbilityType__Enum_LightSpearSpell, "LightSpearSpell" },
        { app::AbilityType__Enum_LifeAbsorbSpell, "LifeAbsorbSpell" },
        { app::AbilityType__Enum_MeditateSpell, "MeditateSpell" },
        { app::AbilityType__Enum_ChargeShotSpell, "ChargeShotSpell" },
        { app::AbilityType__Enum_SpiritShardsSpell, "SpiritShardsSpell" },
        { app::AbilityType__Enum_SpiritSentrySpell, "SpiritSentrySpell" },
        { app::AbilityType__Enum_PowerslideSpell, "PowerslideSpell" },
        { app::AbilityType__Enum_CounterstrikeSpell, "CounterstrikeSpell" },
        { app::AbilityType__Enum_EarthShatterSpell, "EarthShatterSpell" },
        { app::AbilityType__Enum_JumpShotSpell, "JumpShotSpell" },
        { app::AbilityType__Enum_RoundupLeashSpell, "RoundupLeashSpell" },
        { app::AbilityType__Enum_BurrowSpell, "BurrowSpell" },
        { app::AbilityType__Enum_PowerOfFriendshipSpell, "PowerOfFriendshipSpell" },
        { app::AbilityType__Enum_LightningSpell, "LightningSpell" },
        { app::AbilityType__Enum_SpiritFlareSpell, "SpiritFlareSpell" },
        { app::AbilityType__Enum_EntanglingRootsSpell, "EntanglingRootsSpell" },
        { app::AbilityType__Enum_MarkOfTheWildsSpell, "MarkOfTheWildsSpell" },
        { app::AbilityType__Enum_HomingMissileSpell, "HomingMissileSpell" },
        { app::AbilityType__Enum_SpiritCrescentSpell, "SpiritCrescentSpell" },
        { app::AbilityType__Enum_MineSpell, "MineSpell" },
        { app::AbilityType__Enum_Pinned, "Pinned" },
        { app::AbilityType__Enum_Leached, "Leached" },
        { app::AbilityType__Enum_Bow, "Bow" },
        { app::AbilityType__Enum_Hammer, "Hammer" },
        { app::AbilityType__Enum_Torch, "Torch" },
        { app::AbilityType__Enum_Sword, "Sword" },
        { app::AbilityType__Enum_Digging, "Digging" },
        { app::AbilityType__Enum_DashNew, "DashNew" },
        { app::AbilityType__Enum_Launch, "Launch" },
        { app::AbilityType__Enum_WaterDash, "WaterDash" },
        { app::AbilityType__Enum_TeleportSpell, "TeleportSpell" },
        { app::AbilityType__Enum_ChakramSpell, "ChakramSpell" },
        { app::AbilityType__Enum_Drill, "Drill" },
        { app::AbilityType__Enum_GoldenSein, "GoldenSein" },
        { app::AbilityType__Enum_BowCharge, "BowCharge" },
        { app::AbilityType__Enum_Swordstaff, "Swordstaff" },
        { app::AbilityType__Enum_Chainsword, "Chainsword" },
        { app::AbilityType__Enum_SpiritMagnet, "SpiritMagnet" },
        { app::AbilityType__Enum_SwordCharge, "SwordCharge" },
        { app::AbilityType__Enum_HammerCharge, "HammerCharge" },
        { app::AbilityType__Enum_Blaze, "Blaze" },
        { app::AbilityType__Enum_TurretSpell, "TurretSpell" },
        { app::AbilityType__Enum_Regenerate, "Regenerate" },
        { app::AbilityType__Enum_FeatherFlap, "FeatherFlap" },
        { app::AbilityType__Enum_WeaponCharge, "WeaponCharge" },
        { app::AbilityType__Enum_DamageUpgradeA, "DamageUpgradeA" },
        { app::AbilityType__Enum_DamageUpgradeB, "DamageUpgradeB" },
    });

    NLOHMANN_JSON_SERIALIZE_ENUM(QuestNodeSetup_RewardType__Enum, {
        { app::QuestNodeSetup_RewardType__Enum_None, "None" },
        { app::QuestNodeSetup_RewardType__Enum_CompletedReward, "CompletedReward" },
        { app::QuestNodeSetup_RewardType__Enum_WelcomeReward, "WelcomeReward" },
    });

    NLOHMANN_JSON_SERIALIZE_ENUM(UberStateConditionType__Enum, {
        { app::UberStateConditionType__Enum_Undefined, "Undefined" },
        { app::UberStateConditionType__Enum_BooleanCondition, "BooleanCondition" },
        { app::UberStateConditionType__Enum_FloatCondition, "FloatCondition" },
        { app::UberStateConditionType__Enum_AbilityCondition, "AbilityCondition" },
        { app::UberStateConditionType__Enum_IntCondition, "IntCondition" },
        { app::UberStateConditionType__Enum_HoldingTorchCondition, "HoldingTorchCondition" },
        { app::UberStateConditionType__Enum_ByteCondition, "ByteCondition" },
        { app::UberStateConditionType__Enum_SceneCondition, "SceneCondition" },
        { app::UberStateConditionType__Enum_GenericCondition, "GenericCondition" },
    });

    NLOHMANN_JSON_SERIALIZE_ENUM(ConditionUberState_ConditionsCheckMode__Enum, {
        { app::ConditionUberState_ConditionsCheckMode__Enum_AllTrueRequired, "AllTrueRequired" },
        { app::ConditionUberState_ConditionsCheckMode__Enum_AnyTrueSuffice, "AnyTrueSuffice" },
    });
    
    NLOHMANN_JSON_SERIALIZE_ENUM(WorldMapIconType__Enum, {
        { app::WorldMapIconType__Enum_Keystone, "Keystone" },
        { app::WorldMapIconType__Enum_Mapstone, "Mapstone" },
        { app::WorldMapIconType__Enum_BreakableWall, "BreakableWall" },
        { app::WorldMapIconType__Enum_BreakableWallBroken, "BreakableWallBroken" },
        { app::WorldMapIconType__Enum_StompableFloor, "StompableFloor" },
        { app::WorldMapIconType__Enum_StompableFloorBroken, "StompableFloorBroken" },
        { app::WorldMapIconType__Enum_EnergyGateTwo, "EnergyGateTwo" },
        { app::WorldMapIconType__Enum_EnergyGateOpen, "EnergyGateOpen" },
        { app::WorldMapIconType__Enum_KeystoneDoorFour, "KeystoneDoorFour" },
        { app::WorldMapIconType__Enum_KeystoneDoorOpen, "KeystoneDoorOpen" },
        { app::WorldMapIconType__Enum_AbilityPedestal, "AbilityPedestal" },
        { app::WorldMapIconType__Enum_HealthUpgrade, "HealthUpgrade" },
        { app::WorldMapIconType__Enum_EnergyUpgrade, "EnergyUpgrade" },
        { app::WorldMapIconType__Enum_SavePedestal, "SavePedestal" },
        { app::WorldMapIconType__Enum_AbilityPoint, "AbilityPoint" },
        { app::WorldMapIconType__Enum_KeystoneDoorTwo, "KeystoneDoorTwo" },
        { app::WorldMapIconType__Enum_Invisible, "Invisible" },
        { app::WorldMapIconType__Enum_Experience, "Experience" },
        { app::WorldMapIconType__Enum_MapstonePickup, "MapstonePickup" },
        { app::WorldMapIconType__Enum_EnergyGateTwelve, "EnergyGateTwelve" },
        { app::WorldMapIconType__Enum_EnergyGateTen, "EnergyGateTen" },
        { app::WorldMapIconType__Enum_EnergyGateEight, "EnergyGateEight" },
        { app::WorldMapIconType__Enum_EnergyGateSix, "EnergyGateSix" },
        { app::WorldMapIconType__Enum_EnergyGateFour, "EnergyGateFour" },
        { app::WorldMapIconType__Enum_SpiritShard, "SpiritShard" },
        { app::WorldMapIconType__Enum_NPC, "NPC" },
        { app::WorldMapIconType__Enum_QuestItem, "QuestItem" },
        { app::WorldMapIconType__Enum_ShardSlotUpgrade, "ShardSlotUpgrade" },
        { app::WorldMapIconType__Enum_Teleporter, "Teleporter" },
        { app::WorldMapIconType__Enum_Ore, "Ore" },
        { app::WorldMapIconType__Enum_HealthFragment, "HealthFragment" },
        { app::WorldMapIconType__Enum_EnergyFragment, "EnergyFragment" },
        { app::WorldMapIconType__Enum_Seed, "Seed" },
        { app::WorldMapIconType__Enum_QuestStart, "QuestStart" },
        { app::WorldMapIconType__Enum_QuestEnd, "QuestEnd" },
        { app::WorldMapIconType__Enum_RaceStart, "RaceStart" },
        { app::WorldMapIconType__Enum_RaceEnd, "RaceEnd" },
        { app::WorldMapIconType__Enum_Eyestone, "Eyestone" },
        { app::WorldMapIconType__Enum_WatermillDoor, "WatermillDoor" },
        { app::WorldMapIconType__Enum_TempleDoor, "TempleDoor" },
        { app::WorldMapIconType__Enum_SmallDoor, "SmallDoor" },
        { app::WorldMapIconType__Enum_Shrine, "Shrine" },
        { app::WorldMapIconType__Enum_Loremaster, "Loremaster" },
        { app::WorldMapIconType__Enum_Weaponmaster, "Weaponmaster" },
        { app::WorldMapIconType__Enum_Gardener, "Gardener" },
        { app::WorldMapIconType__Enum_Mapmaker, "Mapmaker" },
        { app::WorldMapIconType__Enum_Shardtrader, "Shardtrader" },
        { app::WorldMapIconType__Enum_Wanderer, "Wanderer" },
        { app::WorldMapIconType__Enum_Treekeeper, "Treekeeper" },
        { app::WorldMapIconType__Enum_Builder, "Builder" },
        { app::WorldMapIconType__Enum_Kwolok, "Kwolok" },
        { app::WorldMapIconType__Enum_Statistician, "Statistician" },
        { app::WorldMapIconType__Enum_CreepHeart, "CreepHeart" },
        { app::WorldMapIconType__Enum_Miner, "Miner" },
        { app::WorldMapIconType__Enum_Spiderling, "Spiderling" },
        { app::WorldMapIconType__Enum_Moki, "Moki" },
        { app::WorldMapIconType__Enum_MokiBrave, "MokiBrave" },
        { app::WorldMapIconType__Enum_MokiAdventurer, "MokiAdventurer" },
        { app::WorldMapIconType__Enum_MokiArtist, "MokiArtist" },
        { app::WorldMapIconType__Enum_MokiDarkness, "MokiDarkness" },
        { app::WorldMapIconType__Enum_MokiFashionable, "MokiFashionable" },
        { app::WorldMapIconType__Enum_MokiFisherman, "MokiFisherman" },
        { app::WorldMapIconType__Enum_MokiFrozen, "MokiFrozen" },
        { app::WorldMapIconType__Enum_MokiKwolokAmulet, "MokiKwolokAmulet" },
        { app::WorldMapIconType__Enum_MokiSpyglass, "MokiSpyglass" },
        { app::WorldMapIconType__Enum_Ku, "Ku" },
        { app::WorldMapIconType__Enum_IceFisher, "IceFisher" },
        { app::WorldMapIconType__Enum_Siira, "Siira" },
    });
}

namespace randomizer
{
    NLOHMANN_JSON_SERIALIZE_ENUM(AnimationEndHandling, {
        { AnimationEndHandling::Freeze, "Freeze" },
        { AnimationEndHandling::Loop, "Loop" },
        { AnimationEndHandling::DestroyOnEnd, "DestroyOnEnd" },
        { AnimationEndHandling::DeactivateOnEnd, "DeactivateOnEnd" },
    });

    NLOHMANN_JSON_SERIALIZE_ENUM(SpriteEndHandling, {
        { SpriteEndHandling::Freeze, "Freeze" },
        { SpriteEndHandling::Hide, "Hide" },
    });
}
