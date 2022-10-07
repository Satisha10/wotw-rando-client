#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinDeadlyDarknessRemainingDurationValueProvider {
        namespace {
            app::SeinDeadlyDarknessRemainingDurationValueProvider__Class* type_info_ref = nullptr;
        }
        app::SeinDeadlyDarknessRemainingDurationValueProvider__Class** type_info = &type_info_ref;
        inline app::SeinDeadlyDarknessRemainingDurationValueProvider__Class* get_class() {
            return il2cpp::get_class<app::SeinDeadlyDarknessRemainingDurationValueProvider__Class>(type_info, "", "SeinDeadlyDarknessRemainingDurationValueProvider");
        }
        inline app::SeinDeadlyDarknessRemainingDurationValueProvider* create() {
            return il2cpp::create_object<app::SeinDeadlyDarknessRemainingDurationValueProvider>(get_class());
        }
    } // namespace SeinDeadlyDarknessRemainingDurationValueProvider
} // namespace app::classes::types