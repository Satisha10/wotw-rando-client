#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDebugMenuItem__Array {
        namespace {
            app::IDebugMenuItem__Array__Class* type_info_ref = nullptr;
        }
        app::IDebugMenuItem__Array__Class** type_info = &type_info_ref;
        inline app::IDebugMenuItem__Array__Class* get_class() {
            return il2cpp::get_class<app::IDebugMenuItem__Array__Class>(type_info, "", "IDebugMenuItem[]");
        }
        inline app::IDebugMenuItem__Array* create() {
            return il2cpp::create_object<app::IDebugMenuItem__Array>(get_class());
        }
    } // namespace IDebugMenuItem__Array
} // namespace app::classes::types