#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Music_Layer_Track__Array {
        namespace {
            app::Music_Layer_Track__Array__Class* type_info_ref = nullptr;
        }
        app::Music_Layer_Track__Array__Class** type_info = &type_info_ref;
        inline app::Music_Layer_Track__Array__Class* get_class() {
            return il2cpp::get_class<app::Music_Layer_Track__Array__Class>(type_info, "Core", "Music+Layer+Track[]");
        }
        inline app::Music_Layer_Track__Array* create() {
            return il2cpp::create_object<app::Music_Layer_Track__Array>(get_class());
        }
    } // namespace Music_Layer_Track__Array
} // namespace app::classes::types