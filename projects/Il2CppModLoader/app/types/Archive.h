#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Archive {
        namespace {
            app::Archive__Class* type_info_ref = nullptr;
        }
        app::Archive__Class** type_info = &type_info_ref;
        inline app::Archive__Class* get_class() {
            return il2cpp::get_class<app::Archive__Class>(type_info, "", "Archive");
        }
        inline app::Archive* create() {
            return il2cpp::create_object<app::Archive>(get_class());
        }
    } // namespace Archive
} // namespace app::classes::types