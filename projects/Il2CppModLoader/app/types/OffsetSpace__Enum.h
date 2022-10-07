#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OffsetSpace__Enum {
        namespace {
            app::OffsetSpace__Enum__Class* type_info_ref = nullptr;
        }
        app::OffsetSpace__Enum__Class** type_info = &type_info_ref;
        inline app::OffsetSpace__Enum__Class* get_class() {
            return il2cpp::get_class<app::OffsetSpace__Enum__Class>(type_info, "Moon", "OffsetSpace");
        }
        inline app::OffsetSpace__Enum* create() {
            return il2cpp::create_object<app::OffsetSpace__Enum>(get_class());
        }
    } // namespace OffsetSpace__Enum
} // namespace app::classes::types