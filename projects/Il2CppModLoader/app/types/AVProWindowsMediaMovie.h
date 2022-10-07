#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AVProWindowsMediaMovie {
        namespace {
            app::AVProWindowsMediaMovie__Class* type_info_ref = nullptr;
        }
        app::AVProWindowsMediaMovie__Class** type_info = &type_info_ref;
        inline app::AVProWindowsMediaMovie__Class* get_class() {
            return il2cpp::get_class<app::AVProWindowsMediaMovie__Class>(type_info, "", "AVProWindowsMediaMovie");
        }
        inline app::AVProWindowsMediaMovie* create() {
            return il2cpp::create_object<app::AVProWindowsMediaMovie>(get_class());
        }
        inline app::AVProWindowsMediaMovie__Array* create_array(int size) {
            return il2cpp::array_new<app::AVProWindowsMediaMovie__Array>(get_class(), size);
        }
        inline app::AVProWindowsMediaMovie__Array* create_array(const std::vector<app::AVProWindowsMediaMovie*>& items) {
            return il2cpp::array_new<app::AVProWindowsMediaMovie__Array>(get_class(), items);
        }
    } // namespace AVProWindowsMediaMovie
} // namespace app::classes::types