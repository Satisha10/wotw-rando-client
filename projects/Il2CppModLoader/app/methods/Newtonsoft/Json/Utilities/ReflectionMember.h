#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Newtonsoft::Json::Utilities::ReflectionMember {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Type *, get_MemberType, (app::ReflectionMember * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_MemberType, (app::ReflectionMember * this_ptr, app::Type * value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Func_2_Object_Object_ *, get_Getter, (app::ReflectionMember * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Getter, (app::ReflectionMember * this_ptr, app::Func_2_Object_Object_ * value))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Action_2_Object_Object_ *, get_Setter, (app::ReflectionMember * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Setter, (app::ReflectionMember * this_ptr, app::Action_2_Object_Object_ * value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ReflectionMember * this_ptr))
}