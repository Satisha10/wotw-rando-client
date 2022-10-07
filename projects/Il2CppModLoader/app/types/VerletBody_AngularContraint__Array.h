#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerletBody_AngularContraint__Array {
        namespace {
            app::VerletBody_AngularContraint__Array__Class* type_info_ref = nullptr;
        }
        app::VerletBody_AngularContraint__Array__Class** type_info = &type_info_ref;
        inline app::VerletBody_AngularContraint__Array__Class* get_class() {
            return il2cpp::get_class<app::VerletBody_AngularContraint__Array__Class>(type_info, "Moon", "VerletBody+AngularContraint[]");
        }
        inline app::VerletBody_AngularContraint__Array* create() {
            return il2cpp::create_object<app::VerletBody_AngularContraint__Array>(get_class());
        }
    } // namespace VerletBody_AngularContraint__Array
} // namespace app::classes::types