#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReflectionUtils_ConstructorDelegate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReflectionUtils_ConstructorDelegate__Class** type_info;
        inline app::ReflectionUtils_ConstructorDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::ReflectionUtils_ConstructorDelegate__Class>(type_info, "PlayFab.Json", "ReflectionUtils", "ConstructorDelegate");
        }
        inline app::ReflectionUtils_ConstructorDelegate* create() {
            return il2cpp::create_object<app::ReflectionUtils_ConstructorDelegate>(get_class());
        }
        inline app::ReflectionUtils_ConstructorDelegate__Array* create_array(int size) {
            return il2cpp::array_new<app::ReflectionUtils_ConstructorDelegate__Array>(get_class(), size);
        }
        inline app::ReflectionUtils_ConstructorDelegate__Array* create_array(const std::vector<app::ReflectionUtils_ConstructorDelegate*>& items) {
            return il2cpp::array_new<app::ReflectionUtils_ConstructorDelegate__Array>(get_class(), items);
        }
    } // namespace ReflectionUtils_ConstructorDelegate
} // namespace app::classes::types