#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FirewhirlBeam {
        namespace {
            app::FirewhirlBeam__Class* type_info_ref = nullptr;
        }
        app::FirewhirlBeam__Class** type_info = &type_info_ref;
        inline app::FirewhirlBeam__Class* get_class() {
            return il2cpp::get_class<app::FirewhirlBeam__Class>(type_info, "", "FirewhirlBeam");
        }
        inline app::FirewhirlBeam* create() {
            return il2cpp::create_object<app::FirewhirlBeam>(get_class());
        }
        inline app::FirewhirlBeam__Array* create_array(int size) {
            return il2cpp::array_new<app::FirewhirlBeam__Array>(get_class(), size);
        }
        inline app::FirewhirlBeam__Array* create_array(const std::vector<app::FirewhirlBeam*>& items) {
            return il2cpp::array_new<app::FirewhirlBeam__Array>(get_class(), items);
        }
    } // namespace FirewhirlBeam
} // namespace app::classes::types