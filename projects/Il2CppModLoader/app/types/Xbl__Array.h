#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Xbl__Array {
        namespace {
            app::Xbl__Array__Class* type_info_ref = nullptr;
        }
        app::Xbl__Array__Class** type_info = &type_info_ref;
        inline app::Xbl__Array__Class* get_class() {
            return il2cpp::get_class<app::Xbl__Array__Class>(type_info, "Microsoft.Applications.Events.DataModels", "Xbl[]");
        }
        inline app::Xbl__Array* create() {
            return il2cpp::create_object<app::Xbl__Array>(get_class());
        }
    } // namespace Xbl__Array
} // namespace app::classes::types