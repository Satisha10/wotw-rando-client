#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CDSCollectionETWBCLProvider_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CDSCollectionETWBCLProvider_1__Class** type_info;
        inline app::CDSCollectionETWBCLProvider_1__Class* get_class() {
            return il2cpp::get_class<app::CDSCollectionETWBCLProvider_1__Class>(type_info, "System.Collections.Concurrent", "CDSCollectionETWBCLProvider");
        }
        inline app::CDSCollectionETWBCLProvider_1* create() {
            return il2cpp::create_object<app::CDSCollectionETWBCLProvider_1>(get_class());
        }
    } // namespace CDSCollectionETWBCLProvider_1
} // namespace app::classes::types