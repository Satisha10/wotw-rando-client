#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SubInstruction_SubInt32 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SubInstruction_SubInt32__Class** type_info;
        inline app::SubInstruction_SubInt32__Class* get_class() {
            return il2cpp::get_nested_class<app::SubInstruction_SubInt32__Class>(type_info, "System.Linq.Expressions.Interpreter", "SubInstruction", "SubInt32");
        }
        inline app::SubInstruction_SubInt32* create() {
            return il2cpp::create_object<app::SubInstruction_SubInt32>(get_class());
        }
    } // namespace SubInstruction_SubInt32
} // namespace app::classes::types