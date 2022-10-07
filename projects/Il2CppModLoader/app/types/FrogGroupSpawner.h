#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FrogGroupSpawner {
        namespace {
            app::FrogGroupSpawner__Class* type_info_ref = nullptr;
        }
        app::FrogGroupSpawner__Class** type_info = &type_info_ref;
        inline app::FrogGroupSpawner__Class* get_class() {
            return il2cpp::get_class<app::FrogGroupSpawner__Class>(type_info, "", "FrogGroupSpawner");
        }
        inline app::FrogGroupSpawner* create() {
            return il2cpp::create_object<app::FrogGroupSpawner>(get_class());
        }
    } // namespace FrogGroupSpawner
} // namespace app::classes::types