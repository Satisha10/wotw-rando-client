#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SubOvfInstruction_SubOvfUInt64 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SubOvfInstruction_SubOvfUInt64__Class** type_info;
        inline app::SubOvfInstruction_SubOvfUInt64__Class* get_class() {
            return il2cpp::get_nested_class<app::SubOvfInstruction_SubOvfUInt64__Class>(type_info, "System.Linq.Expressions.Interpreter", "SubOvfInstruction", "SubOvfUInt64");
        }
        inline app::SubOvfInstruction_SubOvfUInt64* create() {
            return il2cpp::create_object<app::SubOvfInstruction_SubOvfUInt64>(get_class());
        }
    } // namespace SubOvfInstruction_SubOvfUInt64
} // namespace app::classes::types