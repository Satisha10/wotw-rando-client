#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UriSyntaxFlags__Enum {
        namespace {
            app::UriSyntaxFlags__Enum__Class* type_info_ref = nullptr;
        }
        app::UriSyntaxFlags__Enum__Class** type_info = &type_info_ref;
        inline app::UriSyntaxFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::UriSyntaxFlags__Enum__Class>(type_info, "System", "UriSyntaxFlags");
        }
        inline app::UriSyntaxFlags__Enum* create() {
            return il2cpp::create_object<app::UriSyntaxFlags__Enum>(get_class());
        }
    } // namespace UriSyntaxFlags__Enum
} // namespace app::classes::types