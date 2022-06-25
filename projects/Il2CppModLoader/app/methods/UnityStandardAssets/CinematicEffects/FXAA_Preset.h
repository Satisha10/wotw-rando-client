#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityStandardAssets::CinematicEffects::FXAA_Preset {
    IL2CPP_REGISTER_METHOD(0x02506410, app::FXAA_Preset, get_extremePerformancePreset, ())
    IL2CPP_REGISTER_METHOD(0x025064D0, app::FXAA_Preset, get_performancePreset, ())
    IL2CPP_REGISTER_METHOD(0x02506590, app::FXAA_Preset, get_defaultPreset, ())
    IL2CPP_REGISTER_METHOD(0x02506650, app::FXAA_Preset, get_qualityPreset, ())
    IL2CPP_REGISTER_METHOD(0x02506710, app::FXAA_Preset, get_extremeQualityPreset, ())
    IL2CPP_REGISTER_METHOD(0x025067D0, void, cctor, ())
}