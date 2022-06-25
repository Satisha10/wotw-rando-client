#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LegacySwarmEnemyManager {
    IL2CPP_REGISTER_METHOD(0x00A3AA30, void, Awake, (app::LegacySwarmEnemyManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A3ABD0, void, OnDestroy, (app::LegacySwarmEnemyManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A3AD60, void, OnGameSerializeLoad, (app::LegacySwarmEnemyManager * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472ACE0, LegacySwarmEnemyManager_OnGameSerializeLoad__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00A3AE40, void, QueueSpawn, (app::LegacySwarmEnemyManager * this_ptr, app::Vector3 pos, app::Vector3 velocity, int32_t loot_amount, app::OrbSpawner * spawner, float damage_on_touch, app::GameObject * child, app::MoonGuid * scene_root, app::LegacySwarmEnemyPlaceholder * owner))
    IL2CPP_REGISTER_METHOD(0x00A3B060, void, Update, (app::LegacySwarmEnemyManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A3B4D0, void, ctor, (app::LegacySwarmEnemyManager * this_ptr))
}