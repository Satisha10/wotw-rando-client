#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MistyWoodsKuroController {
        namespace {
            app::MistyWoodsKuroController__Class* type_info_ref = nullptr;
        }
        app::MistyWoodsKuroController__Class** type_info = &type_info_ref;
        inline app::MistyWoodsKuroController__Class* get_class() {
            return il2cpp::get_class<app::MistyWoodsKuroController__Class>(type_info, "", "MistyWoodsKuroController");
        }
        inline app::MistyWoodsKuroController* create() {
            return il2cpp::create_object<app::MistyWoodsKuroController>(get_class());
        }
    } // namespace MistyWoodsKuroController
} // namespace app::classes::types