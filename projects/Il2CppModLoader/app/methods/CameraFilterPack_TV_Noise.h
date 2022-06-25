#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFilterPack_TV_Noise {
    IL2CPP_REGISTER_METHOD(0x020EA2B0, app::Material *, get_material, (app::CameraFilterPack_TV_Noise * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020EA490, void, Start, (app::CameraFilterPack_TV_Noise * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020EA610, void, OnRenderImage, (app::CameraFilterPack_TV_Noise * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x020EA9E0, void, OnValidate, (app::CameraFilterPack_TV_Noise * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020EAA80, void, Update, (app::CameraFilterPack_TV_Noise * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020EAB20, void, OnDisable, (app::CameraFilterPack_TV_Noise * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020EAC00, void, ctor, (app::CameraFilterPack_TV_Noise * this_ptr))
}