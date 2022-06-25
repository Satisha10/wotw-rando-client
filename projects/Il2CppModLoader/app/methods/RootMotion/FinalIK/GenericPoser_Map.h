#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RootMotion::FinalIK::GenericPoser_Map {
    IL2CPP_REGISTER_METHOD(0x02064DD0, void, ctor, (app::GenericPoser_Map * this_ptr, app::Transform * bone, app::Transform * target))
    IL2CPP_REGISTER_METHOD(0x02064DE0, void, StoreDefaultState, (app::GenericPoser_Map * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02064EE0, void, FixTransform, (app::GenericPoser_Map * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02064FD0, void, Update, (app::GenericPoser_Map * this_ptr, float local_rotation_weight, float local_position_weight))
}