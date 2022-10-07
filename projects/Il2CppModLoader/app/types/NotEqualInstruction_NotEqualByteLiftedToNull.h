#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NotEqualInstruction_NotEqualByteLiftedToNull {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NotEqualInstruction_NotEqualByteLiftedToNull__Class** type_info;
        inline app::NotEqualInstruction_NotEqualByteLiftedToNull__Class* get_class() {
            return il2cpp::get_nested_class<app::NotEqualInstruction_NotEqualByteLiftedToNull__Class>(type_info, "System.Linq.Expressions.Interpreter", "NotEqualInstruction", "NotEqualByteLiftedToNull");
        }
        inline app::NotEqualInstruction_NotEqualByteLiftedToNull* create() {
            return il2cpp::create_object<app::NotEqualInstruction_NotEqualByteLiftedToNull>(get_class());
        }
    } // namespace NotEqualInstruction_NotEqualByteLiftedToNull
} // namespace app::classes::types