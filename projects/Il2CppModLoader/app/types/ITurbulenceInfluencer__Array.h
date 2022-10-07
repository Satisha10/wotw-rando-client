#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITurbulenceInfluencer__Array {
        namespace {
            app::ITurbulenceInfluencer__Array__Class* type_info_ref = nullptr;
        }
        app::ITurbulenceInfluencer__Array__Class** type_info = &type_info_ref;
        inline app::ITurbulenceInfluencer__Array__Class* get_class() {
            return il2cpp::get_class<app::ITurbulenceInfluencer__Array__Class>(type_info, "", "ITurbulenceInfluencer[]");
        }
        inline app::ITurbulenceInfluencer__Array* create() {
            return il2cpp::create_object<app::ITurbulenceInfluencer__Array>(get_class());
        }
    } // namespace ITurbulenceInfluencer__Array
} // namespace app::classes::types