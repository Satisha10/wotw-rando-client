#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MarshalDirectiveException {
        namespace {
            app::MarshalDirectiveException__Class* type_info_ref = nullptr;
        }
        app::MarshalDirectiveException__Class** type_info = &type_info_ref;
        inline app::MarshalDirectiveException__Class* get_class() {
            return il2cpp::get_class<app::MarshalDirectiveException__Class>(type_info, "System.Runtime.InteropServices", "MarshalDirectiveException");
        }
        inline app::MarshalDirectiveException* create() {
            return il2cpp::create_object<app::MarshalDirectiveException>(get_class());
        }
    } // namespace MarshalDirectiveException
} // namespace app::classes::types