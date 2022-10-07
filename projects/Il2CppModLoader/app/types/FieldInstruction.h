#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FieldInstruction {
        namespace {
            app::FieldInstruction__Class* type_info_ref = nullptr;
        }
        app::FieldInstruction__Class** type_info = &type_info_ref;
        inline app::FieldInstruction__Class* get_class() {
            return il2cpp::get_class<app::FieldInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "FieldInstruction");
        }
        inline app::FieldInstruction* create() {
            return il2cpp::create_object<app::FieldInstruction>(get_class());
        }
    } // namespace FieldInstruction
} // namespace app::classes::types