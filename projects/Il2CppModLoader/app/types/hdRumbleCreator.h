#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace hdRumbleCreator {
        namespace {
            app::hdRumbleCreator__Class* type_info_ref = nullptr;
        }
        app::hdRumbleCreator__Class** type_info = &type_info_ref;
        inline app::hdRumbleCreator__Class* get_class() {
            return il2cpp::get_class<app::hdRumbleCreator__Class>(type_info, "", "hdRumbleCreator");
        }
        inline app::hdRumbleCreator* create() {
            return il2cpp::create_object<app::hdRumbleCreator>(get_class());
        }
    } // namespace hdRumbleCreator
} // namespace app::classes::types