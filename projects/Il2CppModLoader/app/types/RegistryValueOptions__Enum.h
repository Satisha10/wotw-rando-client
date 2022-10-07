#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegistryValueOptions__Enum {
        namespace {
            app::RegistryValueOptions__Enum__Class* type_info_ref = nullptr;
        }
        app::RegistryValueOptions__Enum__Class** type_info = &type_info_ref;
        inline app::RegistryValueOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::RegistryValueOptions__Enum__Class>(type_info, "Microsoft.Win32", "RegistryValueOptions");
        }
        inline app::RegistryValueOptions__Enum* create() {
            return il2cpp::create_object<app::RegistryValueOptions__Enum>(get_class());
        }
    } // namespace RegistryValueOptions__Enum
} // namespace app::classes::types