#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VideoProgressBar {
        namespace {
            app::VideoProgressBar__Class* type_info_ref = nullptr;
        }
        app::VideoProgressBar__Class** type_info = &type_info_ref;
        inline app::VideoProgressBar__Class* get_class() {
            return il2cpp::get_class<app::VideoProgressBar__Class>(type_info, "", "VideoProgressBar");
        }
        inline app::VideoProgressBar* create() {
            return il2cpp::create_object<app::VideoProgressBar>(get_class());
        }
    } // namespace VideoProgressBar
} // namespace app::classes::types