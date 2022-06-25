#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Ionic::Zlib::Tree {
    IL2CPP_REGISTER_METHOD(0x03075780, int32_t, DistanceCode, (int32_t dist))
    IL2CPP_REGISTER_METHOD(0x030758B0, void, gen_bitlen, (app::Tree * this_ptr, app::DeflateManager * s))
    IL2CPP_REGISTER_METHOD(0x03075E90, void, build_tree, (app::Tree * this_ptr, app::DeflateManager * s))
    IL2CPP_REGISTER_METHOD(0x03076640, void, gen_codes, (app::Int16__Array * tree, int32_t max_code, app::Int16__Array * bl_count))
    IL2CPP_REGISTER_METHOD(0x030768C0, int32_t, bi_reverse, (int32_t code, int32_t len))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Tree * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030768F0, void, cctor, ())
}