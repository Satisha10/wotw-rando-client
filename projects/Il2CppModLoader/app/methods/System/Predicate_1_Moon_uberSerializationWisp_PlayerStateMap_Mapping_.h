#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Predicate_1_Moon_uberSerializationWisp_PlayerStateMap_Mapping_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Predicate_1_Moon_uberSerializationWisp_PlayerStateMap_Mapping_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x0288E680, bool, Invoke, (app::Predicate_1_Moon_uberSerializationWisp_PlayerStateMap_Mapping_ * this_ptr, app::PlayerStateMap_Mapping obj))
    IL2CPP_REGISTER_METHOD(0x02A4F3E0, app::IAsyncResult *, BeginInvoke, (app::Predicate_1_Moon_uberSerializationWisp_PlayerStateMap_Mapping_ * this_ptr, app::PlayerStateMap_Mapping obj, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_Moon_uberSerializationWisp_PlayerStateMap_Mapping_ * this_ptr, app::IAsyncResult * result))
}