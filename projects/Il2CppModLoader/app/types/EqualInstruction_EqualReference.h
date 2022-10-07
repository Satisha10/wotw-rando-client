#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EqualInstruction_EqualReference {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EqualInstruction_EqualReference__Class** type_info;
        inline app::EqualInstruction_EqualReference__Class* get_class() {
            return il2cpp::get_nested_class<app::EqualInstruction_EqualReference__Class>(type_info, "System.Linq.Expressions.Interpreter", "EqualInstruction", "EqualReference");
        }
        inline app::EqualInstruction_EqualReference* create() {
            return il2cpp::create_object<app::EqualInstruction_EqualReference>(get_class());
        }
    } // namespace EqualInstruction_EqualReference
} // namespace app::classes::types