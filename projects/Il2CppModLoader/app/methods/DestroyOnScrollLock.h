#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::DestroyOnScrollLock {
    IL2CPP_REGISTER_METHOD(0x00B8CF40, void, Awake, (app::DestroyOnScrollLock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B8D0E0, void, OnDestroy, (app::DestroyOnScrollLock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B8D280, void, OnScrollLockPassed, (app::DestroyOnScrollLock * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471A6B8, DestroyOnScrollLock_OnScrollLockPassed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DestroyOnScrollLock * this_ptr))
}