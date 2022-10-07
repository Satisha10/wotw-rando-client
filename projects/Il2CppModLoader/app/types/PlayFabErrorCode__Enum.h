#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabErrorCode__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabErrorCode__Enum__Class** type_info;
        inline app::PlayFabErrorCode__Enum__Class* get_class() {
            return il2cpp::get_class<app::PlayFabErrorCode__Enum__Class>(type_info, "PlayFab", "PlayFabErrorCode");
        }
        inline app::PlayFabErrorCode__Enum* create() {
            return il2cpp::create_object<app::PlayFabErrorCode__Enum>(get_class());
        }
    } // namespace PlayFabErrorCode__Enum
} // namespace app::classes::types