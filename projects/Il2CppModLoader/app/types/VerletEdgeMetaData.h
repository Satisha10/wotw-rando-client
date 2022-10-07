#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerletEdgeMetaData {
        namespace {
            app::VerletEdgeMetaData__Class* type_info_ref = nullptr;
        }
        app::VerletEdgeMetaData__Class** type_info = &type_info_ref;
        inline app::VerletEdgeMetaData__Class* get_class() {
            return il2cpp::get_class<app::VerletEdgeMetaData__Class>(type_info, "", "VerletEdgeMetaData");
        }
        inline app::VerletEdgeMetaData* create() {
            return il2cpp::create_object<app::VerletEdgeMetaData>(get_class());
        }
    } // namespace VerletEdgeMetaData
} // namespace app::classes::types