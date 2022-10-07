#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPrewarmable__Array {
        namespace {
            app::IPrewarmable__Array__Class* type_info_ref = nullptr;
        }
        app::IPrewarmable__Array__Class** type_info = &type_info_ref;
        inline app::IPrewarmable__Array__Class* get_class() {
            return il2cpp::get_class<app::IPrewarmable__Array__Class>(type_info, "", "IPrewarmable[]");
        }
        inline app::IPrewarmable__Array* create() {
            return il2cpp::create_object<app::IPrewarmable__Array>(get_class());
        }
    } // namespace IPrewarmable__Array
} // namespace app::classes::types