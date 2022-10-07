#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritShardDescription__Array {
        namespace {
            app::SpiritShardDescription__Array__Class* type_info_ref = nullptr;
        }
        app::SpiritShardDescription__Array__Class** type_info = &type_info_ref;
        inline app::SpiritShardDescription__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardDescription__Array__Class>(type_info, "", "SpiritShardDescription[]");
        }
        inline app::SpiritShardDescription__Array* create() {
            return il2cpp::create_object<app::SpiritShardDescription__Array>(get_class());
        }
    } // namespace SpiritShardDescription__Array
} // namespace app::classes::types