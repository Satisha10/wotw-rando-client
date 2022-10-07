#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HoldingHands {
        namespace {
            app::HoldingHands__Class* type_info_ref = nullptr;
        }
        app::HoldingHands__Class** type_info = &type_info_ref;
        inline app::HoldingHands__Class* get_class() {
            return il2cpp::get_class<app::HoldingHands__Class>(type_info, "RootMotion.Demos", "HoldingHands");
        }
        inline app::HoldingHands* create() {
            return il2cpp::create_object<app::HoldingHands>(get_class());
        }
    } // namespace HoldingHands
} // namespace app::classes::types