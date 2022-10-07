#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BigNumber_BigNumberBuffer {
        namespace {
            app::BigNumber_BigNumberBuffer__Class* type_info_ref = nullptr;
        }
        app::BigNumber_BigNumberBuffer__Class** type_info = &type_info_ref;
        inline app::BigNumber_BigNumberBuffer__Class* get_class() {
            return il2cpp::get_nested_class<app::BigNumber_BigNumberBuffer__Class>(type_info, "System.Numerics", "BigNumber", "BigNumberBuffer");
        }
        inline app::BigNumber_BigNumberBuffer* create() {
            return il2cpp::create_object<app::BigNumber_BigNumberBuffer>(get_class());
        }
        inline app::BigNumber_BigNumberBuffer__Boxed* box(app::BigNumber_BigNumberBuffer value) {
            return il2cpp::box_value<app::BigNumber_BigNumberBuffer__Boxed>(get_class(), value);
        }
    } // namespace BigNumber_BigNumberBuffer
} // namespace app::classes::types