#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RecorderAsset {
        namespace {
            app::RecorderAsset__Class* type_info_ref = nullptr;
        }
        app::RecorderAsset__Class** type_info = &type_info_ref;
        inline app::RecorderAsset__Class* get_class() {
            return il2cpp::get_class<app::RecorderAsset__Class>(type_info, "", "RecorderAsset");
        }
        inline app::RecorderAsset* create() {
            return il2cpp::create_object<app::RecorderAsset>(get_class());
        }
    } // namespace RecorderAsset
} // namespace app::classes::types