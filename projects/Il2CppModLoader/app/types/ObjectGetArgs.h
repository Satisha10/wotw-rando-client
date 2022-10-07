#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ObjectGetArgs {
        namespace {
            app::ObjectGetArgs__Class* type_info_ref = nullptr;
        }
        app::ObjectGetArgs__Class** type_info = &type_info_ref;
        inline app::ObjectGetArgs__Class* get_class() {
            return il2cpp::get_class<app::ObjectGetArgs__Class>(type_info, "", "ObjectGetArgs");
        }
        inline app::ObjectGetArgs* create() {
            return il2cpp::create_object<app::ObjectGetArgs>(get_class());
        }
    } // namespace ObjectGetArgs
} // namespace app::classes::types