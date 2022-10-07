#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SandWormEntity__Array {
        namespace {
            app::SandWormEntity__Array__Class* type_info_ref = nullptr;
        }
        app::SandWormEntity__Array__Class** type_info = &type_info_ref;
        inline app::SandWormEntity__Array__Class* get_class() {
            return il2cpp::get_class<app::SandWormEntity__Array__Class>(type_info, "", "SandWormEntity[]");
        }
        inline app::SandWormEntity__Array* create() {
            return il2cpp::create_object<app::SandWormEntity__Array>(get_class());
        }
    } // namespace SandWormEntity__Array
} // namespace app::classes::types