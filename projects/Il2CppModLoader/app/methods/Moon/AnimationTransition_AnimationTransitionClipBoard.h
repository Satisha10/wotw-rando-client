#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::AnimationTransition_AnimationTransitionClipBoard {
    IL2CPP_REGISTER_METHOD(0x01B055D0, void, SaveTransition, (app::AnimationTransition * transition))
    IL2CPP_REGISTER_METHOD(0x01B056B0, app::AnimationTransition *, GetTransition, ())
    IL2CPP_REGISTER_METHOD(0x01B057F0, bool, get_ContainsTransition, ())
    IL2CPP_REGISTER_METHOD(0x01B05870, void, Clear, ())
}