#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoundHost__Array {
        namespace {
            app::SoundHost__Array__Class* type_info_ref = nullptr;
        }
        app::SoundHost__Array__Class** type_info = &type_info_ref;
        inline app::SoundHost__Array__Class* get_class() {
            return il2cpp::get_class<app::SoundHost__Array__Class>(type_info, "Moon.Wwise", "SoundHost[]");
        }
        inline app::SoundHost__Array* create() {
            return il2cpp::create_object<app::SoundHost__Array>(get_class());
        }
    } // namespace SoundHost__Array
} // namespace app::classes::types