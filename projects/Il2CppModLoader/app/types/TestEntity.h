#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TestEntity {
        namespace {
            app::TestEntity__Class* type_info_ref = nullptr;
        }
        app::TestEntity__Class** type_info = &type_info_ref;
        inline app::TestEntity__Class* get_class() {
            return il2cpp::get_class<app::TestEntity__Class>(type_info, "", "TestEntity");
        }
        inline app::TestEntity* create() {
            return il2cpp::create_object<app::TestEntity>(get_class());
        }
    } // namespace TestEntity
} // namespace app::classes::types