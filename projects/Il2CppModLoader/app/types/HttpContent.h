#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HttpContent {
        namespace {
            app::HttpContent__Class* type_info_ref = nullptr;
        }
        app::HttpContent__Class** type_info = &type_info_ref;
        inline app::HttpContent__Class* get_class() {
            return il2cpp::get_class<app::HttpContent__Class>(type_info, "System.Net.Http", "HttpContent");
        }
        inline app::HttpContent* create() {
            return il2cpp::create_object<app::HttpContent>(get_class());
        }
    } // namespace HttpContent
} // namespace app::classes::types