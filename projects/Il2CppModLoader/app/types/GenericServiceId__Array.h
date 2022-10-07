#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GenericServiceId__Array {
        namespace {
            app::GenericServiceId__Array__Class* type_info_ref = nullptr;
        }
        app::GenericServiceId__Array__Class** type_info = &type_info_ref;
        inline app::GenericServiceId__Array__Class* get_class() {
            return il2cpp::get_class<app::GenericServiceId__Array__Class>(type_info, "PlayFab.ClientModels", "GenericServiceId[]");
        }
        inline app::GenericServiceId__Array* create() {
            return il2cpp::create_object<app::GenericServiceId__Array>(get_class());
        }
    } // namespace GenericServiceId__Array
} // namespace app::classes::types