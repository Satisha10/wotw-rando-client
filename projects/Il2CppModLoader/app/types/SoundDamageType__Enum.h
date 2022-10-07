#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoundDamageType__Enum {
        namespace {
            app::SoundDamageType__Enum__Class* type_info_ref = nullptr;
        }
        app::SoundDamageType__Enum__Class** type_info = &type_info_ref;
        inline app::SoundDamageType__Enum__Class* get_class() {
            return il2cpp::get_class<app::SoundDamageType__Enum__Class>(type_info, "", "SoundDamageType");
        }
        inline app::SoundDamageType__Enum* create() {
            return il2cpp::create_object<app::SoundDamageType__Enum>(get_class());
        }
    } // namespace SoundDamageType__Enum
} // namespace app::classes::types