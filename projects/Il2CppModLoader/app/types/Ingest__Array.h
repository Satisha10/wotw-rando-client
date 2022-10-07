#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Ingest__Array {
        namespace {
            app::Ingest__Array__Class* type_info_ref = nullptr;
        }
        app::Ingest__Array__Class** type_info = &type_info_ref;
        inline app::Ingest__Array__Class* get_class() {
            return il2cpp::get_class<app::Ingest__Array__Class>(type_info, "Microsoft.Applications.Events.DataModels", "Ingest[]");
        }
        inline app::Ingest__Array* create() {
            return il2cpp::create_object<app::Ingest__Array>(get_class());
        }
    } // namespace Ingest__Array
} // namespace app::classes::types