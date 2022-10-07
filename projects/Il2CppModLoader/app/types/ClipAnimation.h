#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ClipAnimation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ClipAnimation__Class** type_info;
        inline app::ClipAnimation__Class* get_class() {
            return il2cpp::get_class<app::ClipAnimation__Class>(type_info, "Moon", "ClipAnimation");
        }
        inline app::ClipAnimation* create() {
            return il2cpp::create_object<app::ClipAnimation>(get_class());
        }
        inline app::ClipAnimation__Array* create_array(int size) {
            return il2cpp::array_new<app::ClipAnimation__Array>(get_class(), size);
        }
        inline app::ClipAnimation__Array* create_array(const std::vector<app::ClipAnimation*>& items) {
            return il2cpp::array_new<app::ClipAnimation__Array>(get_class(), items);
        }
    } // namespace ClipAnimation
} // namespace app::classes::types