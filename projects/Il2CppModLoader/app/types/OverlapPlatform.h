#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OverlapPlatform {
        namespace {
            app::OverlapPlatform__Class* type_info_ref = nullptr;
        }
        app::OverlapPlatform__Class** type_info = &type_info_ref;
        inline app::OverlapPlatform__Class* get_class() {
            return il2cpp::get_class<app::OverlapPlatform__Class>(type_info, "", "OverlapPlatform");
        }
        inline app::OverlapPlatform* create() {
            return il2cpp::create_object<app::OverlapPlatform>(get_class());
        }
    } // namespace OverlapPlatform
} // namespace app::classes::types