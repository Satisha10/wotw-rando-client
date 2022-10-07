#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextureMergeMode__Enum {
        namespace {
            app::TextureMergeMode__Enum__Class* type_info_ref = nullptr;
        }
        app::TextureMergeMode__Enum__Class** type_info = &type_info_ref;
        inline app::TextureMergeMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::TextureMergeMode__Enum__Class>(type_info, "", "TextureMergeMode");
        }
        inline app::TextureMergeMode__Enum* create() {
            return il2cpp::create_object<app::TextureMergeMode__Enum>(get_class());
        }
    } // namespace TextureMergeMode__Enum
} // namespace app::classes::types