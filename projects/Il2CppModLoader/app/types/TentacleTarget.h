#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TentacleTarget {
        namespace {
            app::TentacleTarget__Class* type_info_ref = nullptr;
        }
        app::TentacleTarget__Class** type_info = &type_info_ref;
        inline app::TentacleTarget__Class* get_class() {
            return il2cpp::get_class<app::TentacleTarget__Class>(type_info, "", "TentacleTarget");
        }
        inline app::TentacleTarget* create() {
            return il2cpp::create_object<app::TentacleTarget>(get_class());
        }
    } // namespace TentacleTarget
} // namespace app::classes::types