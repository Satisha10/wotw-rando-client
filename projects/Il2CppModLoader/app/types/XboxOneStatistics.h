#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxOneStatistics {
        namespace {
            app::XboxOneStatistics__Class* type_info_ref = nullptr;
        }
        app::XboxOneStatistics__Class** type_info = &type_info_ref;
        inline app::XboxOneStatistics__Class* get_class() {
            return il2cpp::get_class<app::XboxOneStatistics__Class>(type_info, "", "XboxOneStatistics");
        }
        inline app::XboxOneStatistics* create() {
            return il2cpp::create_object<app::XboxOneStatistics>(get_class());
        }
    } // namespace XboxOneStatistics
} // namespace app::classes::types