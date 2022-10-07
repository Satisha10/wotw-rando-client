#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RecordableObject__Array {
        namespace {
            app::RecordableObject__Array__Class* type_info_ref = nullptr;
        }
        app::RecordableObject__Array__Class** type_info = &type_info_ref;
        inline app::RecordableObject__Array__Class* get_class() {
            return il2cpp::get_class<app::RecordableObject__Array__Class>(type_info, "", "RecordableObject[]");
        }
        inline app::RecordableObject__Array* create() {
            return il2cpp::create_object<app::RecordableObject__Array>(get_class());
        }
    } // namespace RecordableObject__Array
} // namespace app::classes::types