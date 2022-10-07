#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParseFailureKind__Enum {
        namespace {
            app::ParseFailureKind__Enum__Class* type_info_ref = nullptr;
        }
        app::ParseFailureKind__Enum__Class** type_info = &type_info_ref;
        inline app::ParseFailureKind__Enum__Class* get_class() {
            return il2cpp::get_class<app::ParseFailureKind__Enum__Class>(type_info, "System", "ParseFailureKind");
        }
        inline app::ParseFailureKind__Enum* create() {
            return il2cpp::create_object<app::ParseFailureKind__Enum>(get_class());
        }
    } // namespace ParseFailureKind__Enum
} // namespace app::classes::types