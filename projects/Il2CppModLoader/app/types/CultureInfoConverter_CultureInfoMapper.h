#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CultureInfoConverter_CultureInfoMapper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CultureInfoConverter_CultureInfoMapper__Class** type_info;
        inline app::CultureInfoConverter_CultureInfoMapper__Class* get_class() {
            return il2cpp::get_nested_class<app::CultureInfoConverter_CultureInfoMapper__Class>(type_info, "System.ComponentModel", "CultureInfoConverter", "CultureInfoMapper");
        }
        inline app::CultureInfoConverter_CultureInfoMapper* create() {
            return il2cpp::create_object<app::CultureInfoConverter_CultureInfoMapper>(get_class());
        }
    } // namespace CultureInfoConverter_CultureInfoMapper
} // namespace app::classes::types