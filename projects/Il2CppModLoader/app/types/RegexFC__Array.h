#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegexFC__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RegexFC__Array__Class** type_info;
        inline app::RegexFC__Array__Class* get_class() {
            return il2cpp::get_class<app::RegexFC__Array__Class>(type_info, "System.Text.RegularExpressions", "RegexFC[]");
        }
        inline app::RegexFC__Array* create() {
            return il2cpp::create_object<app::RegexFC__Array>(get_class());
        }
    } // namespace RegexFC__Array
} // namespace app::classes::types