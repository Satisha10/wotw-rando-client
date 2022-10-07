#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HttpWebRequest_NtlmAuthState__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HttpWebRequest_NtlmAuthState__Enum__Class** type_info;
        inline app::HttpWebRequest_NtlmAuthState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HttpWebRequest_NtlmAuthState__Enum__Class>(type_info, "System.Net", "HttpWebRequest", "NtlmAuthState");
        }
        inline app::HttpWebRequest_NtlmAuthState__Enum* create() {
            return il2cpp::create_object<app::HttpWebRequest_NtlmAuthState__Enum>(get_class());
        }
    } // namespace HttpWebRequest_NtlmAuthState__Enum
} // namespace app::classes::types