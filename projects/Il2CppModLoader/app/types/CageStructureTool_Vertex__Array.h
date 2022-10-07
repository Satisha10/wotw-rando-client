#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CageStructureTool_Vertex__Array {
        namespace {
            app::CageStructureTool_Vertex__Array__Class* type_info_ref = nullptr;
        }
        app::CageStructureTool_Vertex__Array__Class** type_info = &type_info_ref;
        inline app::CageStructureTool_Vertex__Array__Class* get_class() {
            return il2cpp::get_class<app::CageStructureTool_Vertex__Array__Class>(type_info, "", "CageStructureTool+Vertex[]");
        }
        inline app::CageStructureTool_Vertex__Array* create() {
            return il2cpp::create_object<app::CageStructureTool_Vertex__Array>(get_class());
        }
    } // namespace CageStructureTool_Vertex__Array
} // namespace app::classes::types