#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CallInstruction {
        namespace {
            app::CallInstruction__Class* type_info_ref = nullptr;
        }
        app::CallInstruction__Class** type_info = &type_info_ref;
        inline app::CallInstruction__Class* get_class() {
            return il2cpp::get_class<app::CallInstruction__Class>(type_info, "System.Linq.Expressions.Interpreter", "CallInstruction");
        }
        inline app::CallInstruction* create() {
            return il2cpp::create_object<app::CallInstruction>(get_class());
        }
    } // namespace CallInstruction
} // namespace app::classes::types