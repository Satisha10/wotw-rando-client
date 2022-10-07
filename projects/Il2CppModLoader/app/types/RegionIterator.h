#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegionIterator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RegionIterator__Class** type_info;
        inline app::RegionIterator__Class* get_class() {
            return il2cpp::get_class<app::RegionIterator__Class>(type_info, "TriangleNet.Meshing.Iterators", "RegionIterator");
        }
        inline app::RegionIterator* create() {
            return il2cpp::create_object<app::RegionIterator>(get_class());
        }
    } // namespace RegionIterator
} // namespace app::classes::types