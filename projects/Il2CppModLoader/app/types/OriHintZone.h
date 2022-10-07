#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OriHintZone {
        namespace {
            app::OriHintZone__Class* type_info_ref = nullptr;
        }
        app::OriHintZone__Class** type_info = &type_info_ref;
        inline app::OriHintZone__Class* get_class() {
            return il2cpp::get_class<app::OriHintZone__Class>(type_info, "", "OriHintZone");
        }
        inline app::OriHintZone* create() {
            return il2cpp::create_object<app::OriHintZone>(get_class());
        }
    } // namespace OriHintZone
} // namespace app::classes::types