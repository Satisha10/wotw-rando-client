#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderVectorDisplay {
        namespace {
            app::UberShaderVectorDisplay__Class* type_info_ref = nullptr;
        }
        app::UberShaderVectorDisplay__Class** type_info = &type_info_ref;
        inline app::UberShaderVectorDisplay__Class* get_class() {
            return il2cpp::get_class<app::UberShaderVectorDisplay__Class>(type_info, "", "UberShaderVectorDisplay");
        }
        inline app::UberShaderVectorDisplay* create() {
            return il2cpp::create_object<app::UberShaderVectorDisplay>(get_class());
        }
    } // namespace UberShaderVectorDisplay
} // namespace app::classes::types