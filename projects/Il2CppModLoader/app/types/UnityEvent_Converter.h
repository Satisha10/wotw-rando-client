#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnityEvent_Converter {
        namespace {
            app::UnityEvent_Converter__Class* type_info_ref = nullptr;
        }
        app::UnityEvent_Converter__Class** type_info = &type_info_ref;
        inline app::UnityEvent_Converter__Class* get_class() {
            return il2cpp::get_class<app::UnityEvent_Converter__Class>(type_info, "FullSerializer.Internal.Converters", "UnityEvent_Converter");
        }
        inline app::UnityEvent_Converter* create() {
            return il2cpp::create_object<app::UnityEvent_Converter>(get_class());
        }
    } // namespace UnityEvent_Converter
} // namespace app::classes::types