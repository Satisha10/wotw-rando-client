#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Portal {
        namespace {
            app::Portal__Class* type_info_ref = nullptr;
        }
        app::Portal__Class** type_info = &type_info_ref;
        inline app::Portal__Class* get_class() {
            return il2cpp::get_class<app::Portal__Class>(type_info, "", "Portal");
        }
        inline app::Portal* create() {
            return il2cpp::create_object<app::Portal>(get_class());
        }
        inline app::Portal__Array* create_array(int size) {
            return il2cpp::array_new<app::Portal__Array>(get_class(), size);
        }
        inline app::Portal__Array* create_array(const std::vector<app::Portal*>& items) {
            return il2cpp::array_new<app::Portal__Array>(get_class(), items);
        }
    } // namespace Portal
} // namespace app::classes::types