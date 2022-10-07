#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeathInformation__Array {
        namespace {
            app::DeathInformation__Array__Class* type_info_ref = nullptr;
        }
        app::DeathInformation__Array__Class** type_info = &type_info_ref;
        inline app::DeathInformation__Array__Class* get_class() {
            return il2cpp::get_class<app::DeathInformation__Array__Class>(type_info, "", "DeathInformation[]");
        }
        inline app::DeathInformation__Array* create() {
            return il2cpp::create_object<app::DeathInformation__Array>(get_class());
        }
    } // namespace DeathInformation__Array
} // namespace app::classes::types