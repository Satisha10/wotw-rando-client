#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Endianness__Enum {
        namespace {
            app::Endianness__Enum__Class* type_info_ref = nullptr;
        }
        app::Endianness__Enum__Class** type_info = &type_info_ref;
        inline app::Endianness__Enum__Class* get_class() {
            return il2cpp::get_class<app::Endianness__Enum__Class>(type_info, "System.Net", "Endianness");
        }
        inline app::Endianness__Enum* create() {
            return il2cpp::create_object<app::Endianness__Enum>(get_class());
        }
    } // namespace Endianness__Enum
} // namespace app::classes::types