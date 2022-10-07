#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CausalityRelation__Enum {
        namespace {
            app::CausalityRelation__Enum__Class* type_info_ref = nullptr;
        }
        app::CausalityRelation__Enum__Class** type_info = &type_info_ref;
        inline app::CausalityRelation__Enum__Class* get_class() {
            return il2cpp::get_class<app::CausalityRelation__Enum__Class>(type_info, "System.Threading.Tasks", "CausalityRelation");
        }
        inline app::CausalityRelation__Enum* create() {
            return il2cpp::create_object<app::CausalityRelation__Enum>(get_class());
        }
    } // namespace CausalityRelation__Enum
} // namespace app::classes::types