#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ResourceLocator__Array {
        namespace {
            app::ResourceLocator__Array__Class* type_info_ref = nullptr;
        }
        app::ResourceLocator__Array__Class** type_info = &type_info_ref;
        inline app::ResourceLocator__Array__Class* get_class() {
            return il2cpp::get_class<app::ResourceLocator__Array__Class>(type_info, "System.Resources", "ResourceLocator[]");
        }
        inline app::ResourceLocator__Array* create() {
            return il2cpp::create_object<app::ResourceLocator__Array>(get_class());
        }
    } // namespace ResourceLocator__Array
} // namespace app::classes::types