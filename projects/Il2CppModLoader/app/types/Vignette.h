#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Vignette {
        namespace {
            app::Vignette__Class* type_info_ref = nullptr;
        }
        app::Vignette__Class** type_info = &type_info_ref;
        inline app::Vignette__Class* get_class() {
            return il2cpp::get_class<app::Vignette__Class>(type_info, "", "Vignette");
        }
        inline app::Vignette* create() {
            return il2cpp::create_object<app::Vignette>(get_class());
        }
    } // namespace Vignette
} // namespace app::classes::types