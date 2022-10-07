#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GenericTypeParameterBuilder {
        namespace {
            app::GenericTypeParameterBuilder__Class* type_info_ref = nullptr;
        }
        app::GenericTypeParameterBuilder__Class** type_info = &type_info_ref;
        inline app::GenericTypeParameterBuilder__Class* get_class() {
            return il2cpp::get_class<app::GenericTypeParameterBuilder__Class>(type_info, "System.Reflection.Emit", "GenericTypeParameterBuilder");
        }
        inline app::GenericTypeParameterBuilder* create() {
            return il2cpp::create_object<app::GenericTypeParameterBuilder>(get_class());
        }
    } // namespace GenericTypeParameterBuilder
} // namespace app::classes::types