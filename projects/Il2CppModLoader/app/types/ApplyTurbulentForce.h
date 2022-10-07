#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ApplyTurbulentForce {
        namespace {
            app::ApplyTurbulentForce__Class* type_info_ref = nullptr;
        }
        app::ApplyTurbulentForce__Class** type_info = &type_info_ref;
        inline app::ApplyTurbulentForce__Class* get_class() {
            return il2cpp::get_class<app::ApplyTurbulentForce__Class>(type_info, "", "ApplyTurbulentForce");
        }
        inline app::ApplyTurbulentForce* create() {
            return il2cpp::create_object<app::ApplyTurbulentForce>(get_class());
        }
        inline app::ApplyTurbulentForce__Array* create_array(int size) {
            return il2cpp::array_new<app::ApplyTurbulentForce__Array>(get_class(), size);
        }
        inline app::ApplyTurbulentForce__Array* create_array(const std::vector<app::ApplyTurbulentForce*>& items) {
            return il2cpp::array_new<app::ApplyTurbulentForce__Array>(get_class(), items);
        }
    } // namespace ApplyTurbulentForce
} // namespace app::classes::types