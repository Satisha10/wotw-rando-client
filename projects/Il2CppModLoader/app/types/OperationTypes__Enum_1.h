#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OperationTypes__Enum_1 {
        namespace {
            app::OperationTypes__Enum_1__Class* type_info_ref = nullptr;
        }
        app::OperationTypes__Enum_1__Class** type_info = &type_info_ref;
        inline app::OperationTypes__Enum_1__Class* get_class() {
            return il2cpp::get_class<app::OperationTypes__Enum_1__Class>(type_info, "PlayFab.GroupsModels", "OperationTypes");
        }
        inline app::OperationTypes__Enum_1* create() {
            return il2cpp::create_object<app::OperationTypes__Enum_1>(get_class());
        }
    } // namespace OperationTypes__Enum_1
} // namespace app::classes::types