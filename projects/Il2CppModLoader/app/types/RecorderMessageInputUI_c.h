#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RecorderMessageInputUI_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RecorderMessageInputUI_c__Class** type_info;
        inline app::RecorderMessageInputUI_c__Class* get_class() {
            return il2cpp::get_nested_class<app::RecorderMessageInputUI_c__Class>(type_info, "", "RecorderMessageInputUI", "<>c");
        }
        inline app::RecorderMessageInputUI_c* create() {
            return il2cpp::create_object<app::RecorderMessageInputUI_c>(get_class());
        }
    } // namespace RecorderMessageInputUI_c
} // namespace app::classes::types