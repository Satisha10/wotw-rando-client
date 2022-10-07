#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebParseErrorCode__Enum {
        namespace {
            app::WebParseErrorCode__Enum__Class* type_info_ref = nullptr;
        }
        app::WebParseErrorCode__Enum__Class** type_info = &type_info_ref;
        inline app::WebParseErrorCode__Enum__Class* get_class() {
            return il2cpp::get_class<app::WebParseErrorCode__Enum__Class>(type_info, "System.Net", "WebParseErrorCode");
        }
        inline app::WebParseErrorCode__Enum* create() {
            return il2cpp::create_object<app::WebParseErrorCode__Enum>(get_class());
        }
    } // namespace WebParseErrorCode__Enum
} // namespace app::classes::types