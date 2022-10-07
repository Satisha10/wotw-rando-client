#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoundComposition_SoundLoop__Array {
        namespace {
            app::SoundComposition_SoundLoop__Array__Class* type_info_ref = nullptr;
        }
        app::SoundComposition_SoundLoop__Array__Class** type_info = &type_info_ref;
        inline app::SoundComposition_SoundLoop__Array__Class* get_class() {
            return il2cpp::get_class<app::SoundComposition_SoundLoop__Array__Class>(type_info, "", "SoundComposition+SoundLoop[]");
        }
        inline app::SoundComposition_SoundLoop__Array* create() {
            return il2cpp::create_object<app::SoundComposition_SoundLoop__Array>(get_class());
        }
    } // namespace SoundComposition_SoundLoop__Array
} // namespace app::classes::types