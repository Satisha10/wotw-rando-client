#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CacheData__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CacheData__Array__Class** type_info;
        inline app::CacheData__Array__Class* get_class() {
            return il2cpp::get_class<app::CacheData__Array__Class>(type_info, "SystemIntegration", "CacheData[]");
        }
        inline app::CacheData__Array* create() {
            return il2cpp::create_object<app::CacheData__Array>(get_class());
        }
    } // namespace CacheData__Array
} // namespace app::classes::types