#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XUserAddOptions__Enum {
        namespace {
            app::XUserAddOptions__Enum__Class* type_info_ref = nullptr;
        }
        app::XUserAddOptions__Enum__Class** type_info = &type_info_ref;
        inline app::XUserAddOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::XUserAddOptions__Enum__Class>(type_info, "XGamingRuntime", "XUserAddOptions");
        }
        inline app::XUserAddOptions__Enum* create() {
            return il2cpp::create_object<app::XUserAddOptions__Enum>(get_class());
        }
    } // namespace XUserAddOptions__Enum
} // namespace app::classes::types