#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CatalogItem__Array {
        namespace {
            app::CatalogItem__Array__Class* type_info_ref = nullptr;
        }
        app::CatalogItem__Array__Class** type_info = &type_info_ref;
        inline app::CatalogItem__Array__Class* get_class() {
            return il2cpp::get_class<app::CatalogItem__Array__Class>(type_info, "PlayFab.ClientModels", "CatalogItem[]");
        }
        inline app::CatalogItem__Array* create() {
            return il2cpp::create_object<app::CatalogItem__Array>(get_class());
        }
    } // namespace CatalogItem__Array
} // namespace app::classes::types