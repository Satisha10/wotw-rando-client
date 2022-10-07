#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RotatingMaceRoomCarryable {
        namespace {
            app::RotatingMaceRoomCarryable__Class* type_info_ref = nullptr;
        }
        app::RotatingMaceRoomCarryable__Class** type_info = &type_info_ref;
        inline app::RotatingMaceRoomCarryable__Class* get_class() {
            return il2cpp::get_class<app::RotatingMaceRoomCarryable__Class>(type_info, "", "RotatingMaceRoomCarryable");
        }
        inline app::RotatingMaceRoomCarryable* create() {
            return il2cpp::create_object<app::RotatingMaceRoomCarryable>(get_class());
        }
    } // namespace RotatingMaceRoomCarryable
} // namespace app::classes::types