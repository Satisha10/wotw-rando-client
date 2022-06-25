#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LegacyTextureUVAnimator {
    IL2CPP_REGISTER_METHOD(0x00A2DEC0, int32_t, get_TextureID, (app::LegacyTextureUVAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A3BFE0, void, Awake, (app::LegacyTextureUVAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A3C080, void, Start, (app::LegacyTextureUVAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A3C300, void, AnimateIt, (app::LegacyTextureUVAnimator * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00A16F90, void, RestoreToOriginalState, (app::LegacyTextureUVAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A3C490, void, ctor, (app::LegacyTextureUVAnimator * this_ptr))
}