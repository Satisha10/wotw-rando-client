#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeInformation_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypeInformation_1__Class** type_info;
        inline app::TypeInformation_1__Class* get_class() {
            return il2cpp::get_class<app::TypeInformation_1__Class>(type_info, "Newtonsoft.Json.Utilities", "TypeInformation");
        }
        inline app::TypeInformation_1* create() {
            return il2cpp::create_object<app::TypeInformation_1>(get_class());
        }
        inline app::TypeInformation_1__Array* create_array(int size) {
            return il2cpp::array_new<app::TypeInformation_1__Array>(get_class(), size);
        }
        inline app::TypeInformation_1__Array* create_array(const std::vector<app::TypeInformation_1*>& items) {
            return il2cpp::array_new<app::TypeInformation_1__Array>(get_class(), items);
        }
    } // namespace TypeInformation_1
} // namespace app::classes::types