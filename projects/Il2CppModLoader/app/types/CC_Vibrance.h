#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CC_Vibrance {
        namespace {
            app::CC_Vibrance__Class* type_info_ref = nullptr;
        }
        app::CC_Vibrance__Class** type_info = &type_info_ref;
        inline app::CC_Vibrance__Class* get_class() {
            return il2cpp::get_class<app::CC_Vibrance__Class>(type_info, "", "CC_Vibrance");
        }
        inline app::CC_Vibrance* create() {
            return il2cpp::create_object<app::CC_Vibrance>(get_class());
        }
    } // namespace CC_Vibrance
} // namespace app::classes::types