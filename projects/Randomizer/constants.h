#pragma once

#include <set>

#include <Modloader/app/structs/AbilityType__Enum.h>

const std::set tree_abilities{
    app::AbilityType__Enum::Bash,
    app::AbilityType__Enum::DoubleJump,
    app::AbilityType__Enum::ChargeJump,
    app::AbilityType__Enum::Grenade,
    app::AbilityType__Enum::SpiritLeash,
    app::AbilityType__Enum::GlowSpell,
    app::AbilityType__Enum::MeditateSpell,
    app::AbilityType__Enum::Bow,
    app::AbilityType__Enum::Sword,
    app::AbilityType__Enum::Digging,
    app::AbilityType__Enum::DashNew,
    app::AbilityType__Enum::Launch,
    app::AbilityType__Enum::WaterDash,
    app::AbilityType__Enum::DamageUpgradeA,
    app::AbilityType__Enum::DamageUpgradeB,
};

constexpr double PI = 3.14159265358979323846;

#pragma region Uberstate constants
constexpr int PREVENT_PICKUP_ID = 8;
constexpr int STOMP_THROUGH_PORTALS_ID = 9;
constexpr int STOMP_INTO_WATER_ID = 10;
constexpr int GOOD_HOLLOW_ID = 11;
constexpr int IN_LOGIC_FILTER_ENABLED_ID = 12;
constexpr int FORCE_AIR_NO_DECELERATION_ID = 301;
constexpr int ICON_TRANSPARENCY_ID = 1000;
#pragma endregion
