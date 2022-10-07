#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LookupFilter3D {
        namespace {
            app::LookupFilter3D__Class* type_info_ref = nullptr;
        }
        app::LookupFilter3D__Class** type_info = &type_info_ref;
        inline app::LookupFilter3D__Class* get_class() {
            return il2cpp::get_class<app::LookupFilter3D__Class>(type_info, "Colorful", "LookupFilter3D");
        }
        inline app::LookupFilter3D* create() {
            return il2cpp::create_object<app::LookupFilter3D>(get_class());
        }
    } // namespace LookupFilter3D
} // namespace app::classes::types