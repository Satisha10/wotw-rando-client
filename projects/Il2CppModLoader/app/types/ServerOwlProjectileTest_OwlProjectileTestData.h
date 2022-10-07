#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerOwlProjectileTest_OwlProjectileTestData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ServerOwlProjectileTest_OwlProjectileTestData__Class** type_info;
        inline app::ServerOwlProjectileTest_OwlProjectileTestData__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerOwlProjectileTest_OwlProjectileTestData__Class>(type_info, "", "ServerOwlProjectileTest", "OwlProjectileTestData");
        }
        inline app::ServerOwlProjectileTest_OwlProjectileTestData* create() {
            return il2cpp::create_object<app::ServerOwlProjectileTest_OwlProjectileTestData>(get_class());
        }
        inline app::ServerOwlProjectileTest_OwlProjectileTestData__Boxed* box(app::ServerOwlProjectileTest_OwlProjectileTestData value) {
            return il2cpp::box_value<app::ServerOwlProjectileTest_OwlProjectileTestData__Boxed>(get_class(), value);
        }
    } // namespace ServerOwlProjectileTest_OwlProjectileTestData
} // namespace app::classes::types