#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MapmakerItem__Array {
        namespace {
            app::MapmakerItem__Array__Class* type_info_ref = nullptr;
        }
        app::MapmakerItem__Array__Class** type_info = &type_info_ref;
        inline app::MapmakerItem__Array__Class* get_class() {
            return il2cpp::get_class<app::MapmakerItem__Array__Class>(type_info, "", "MapmakerItem[]");
        }
        inline app::MapmakerItem__Array* create() {
            return il2cpp::create_object<app::MapmakerItem__Array>(get_class());
        }
    } // namespace MapmakerItem__Array
} // namespace app::classes::types