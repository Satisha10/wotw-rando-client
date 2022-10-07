#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NamespaceResolver {
        namespace {
            app::NamespaceResolver__Class* type_info_ref = nullptr;
        }
        app::NamespaceResolver__Class** type_info = &type_info_ref;
        inline app::NamespaceResolver__Class* get_class() {
            return il2cpp::get_class<app::NamespaceResolver__Class>(type_info, "System.Xml.Linq", "NamespaceResolver");
        }
        inline app::NamespaceResolver* create() {
            return il2cpp::create_object<app::NamespaceResolver>(get_class());
        }
        inline app::NamespaceResolver__Boxed* box(app::NamespaceResolver value) {
            return il2cpp::box_value<app::NamespaceResolver__Boxed>(get_class(), value);
        }
    } // namespace NamespaceResolver
} // namespace app::classes::types