#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Comparison_1_UberGhostTrailMeshUpdate_TextureUsage_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_UberGhostTrailMeshUpdate_TextureUsage_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02B840F0, int32_t, Invoke, (app::Comparison_1_UberGhostTrailMeshUpdate_TextureUsage_ * this_ptr, app::UberGhostTrailMeshUpdate_TextureUsage x, app::UberGhostTrailMeshUpdate_TextureUsage y))
    IL2CPP_REGISTER_METHOD(0x02C80810, app::IAsyncResult *, BeginInvoke, (app::Comparison_1_UberGhostTrailMeshUpdate_TextureUsage_ * this_ptr, app::UberGhostTrailMeshUpdate_TextureUsage x, app::UberGhostTrailMeshUpdate_TextureUsage y, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_UberGhostTrailMeshUpdate_TextureUsage_ * this_ptr, app::IAsyncResult * result))
}