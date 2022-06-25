#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::RuntimeDynamicDataLink_1_UnityEngine_Vector2_ {
    IL2CPP_REGISTER_METHOD(0x02916E90, bool, Init, (app::RuntimeDynamicDataLink_1_UnityEngine_Vector2_ * this_ptr, app::DynamicDataLinkSerializedData data, app::MemberInfo_1 * member_info))
    IL2CPP_REGISTER_METHOD(0x02917170, bool, get_IsValid, (app::RuntimeDynamicDataLink_1_UnityEngine_Vector2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object_1 *, get_TargetObject, (app::RuntimeDynamicDataLink_1_UnityEngine_Vector2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::MemberInfo_1 *, get_TargetMemberInfo, (app::RuntimeDynamicDataLink_1_UnityEngine_Vector2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::Type *, get_ReturnedValueType, (app::RuntimeDynamicDataLink_1_UnityEngine_Vector2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029172F0, app::Vector2, GetValue, (app::RuntimeDynamicDataLink_1_UnityEngine_Vector2_ * this_ptr, app::IMoonResolverContext * context))
    IL2CPP_REGISTER_METHODINFO(0x04767A90, RuntimeDynamicDataLink_1_UnityEngine_Vector2__GetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x029175D0, bool, IsLinkForObjectAndMemberInfoCombo, (app::RuntimeDynamicDataLink_1_UnityEngine_Vector2_ * this_ptr, app::Object_1 * target_object, app::MemberInfo_1 * target_member_info))
    IL2CPP_REGISTER_METHOD(0x01CE2FF0, app::DynamicDataLinkSerializedData, GetSerializedData, (app::RuntimeDynamicDataLink_1_UnityEngine_Vector2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02917760, void, CreateReflectionData, (app::RuntimeDynamicDataLink_1_UnityEngine_Vector2_ * this_ptr, app::MemberInfo_1 * member_info))
    IL2CPP_REGISTER_METHODINFO(0x0471CF20, RuntimeDynamicDataLink_1_UnityEngine_Vector2__CreateReflectionData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02917BE0, app::String *, ToString, (app::RuntimeDynamicDataLink_1_UnityEngine_Vector2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::RuntimeDynamicDataLink_1_UnityEngine_Vector2_ * this_ptr))
}