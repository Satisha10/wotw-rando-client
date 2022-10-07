#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReflectionMethodsCache_Raycast2DCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReflectionMethodsCache_Raycast2DCallback__Class** type_info;
        inline app::ReflectionMethodsCache_Raycast2DCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::ReflectionMethodsCache_Raycast2DCallback__Class>(type_info, "UnityEngine.UI", "ReflectionMethodsCache", "Raycast2DCallback");
        }
        inline app::ReflectionMethodsCache_Raycast2DCallback* create() {
            return il2cpp::create_object<app::ReflectionMethodsCache_Raycast2DCallback>(get_class());
        }
    } // namespace ReflectionMethodsCache_Raycast2DCallback
} // namespace app::classes::types