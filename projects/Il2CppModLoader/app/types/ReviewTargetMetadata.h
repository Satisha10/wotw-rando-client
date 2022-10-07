#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReviewTargetMetadata {
        namespace {
            app::ReviewTargetMetadata__Class* type_info_ref = nullptr;
        }
        app::ReviewTargetMetadata__Class** type_info = &type_info_ref;
        inline app::ReviewTargetMetadata__Class* get_class() {
            return il2cpp::get_class<app::ReviewTargetMetadata__Class>(type_info, "Moon.ReviewFramework", "ReviewTargetMetadata");
        }
        inline app::ReviewTargetMetadata* create() {
            return il2cpp::create_object<app::ReviewTargetMetadata>(get_class());
        }
        inline app::ReviewTargetMetadata__Array* create_array(int size) {
            return il2cpp::array_new<app::ReviewTargetMetadata__Array>(get_class(), size);
        }
        inline app::ReviewTargetMetadata__Array* create_array(const std::vector<app::ReviewTargetMetadata*>& items) {
            return il2cpp::array_new<app::ReviewTargetMetadata__Array>(get_class(), items);
        }
    } // namespace ReviewTargetMetadata
} // namespace app::classes::types