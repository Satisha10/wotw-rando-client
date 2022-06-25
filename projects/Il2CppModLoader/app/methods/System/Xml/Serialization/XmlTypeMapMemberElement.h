#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Serialization::XmlTypeMapMemberElement {
    IL2CPP_REGISTER_METHOD(0x0194ED90, void, ctor, (app::XmlTypeMapMemberElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0194F380, app::XmlTypeMapElementInfoList *, get_ElementInfo, (app::XmlTypeMapMemberElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_ElementInfo, (app::XmlTypeMapMemberElement * this_ptr, app::XmlTypeMapElementInfoList * value))
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::String *, get_ChoiceMember, (app::XmlTypeMapMemberElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_ChoiceMember, (app::XmlTypeMapMemberElement * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::TypeData *, get_ChoiceTypeData, (app::XmlTypeMapMemberElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_ChoiceTypeData, (app::XmlTypeMapMemberElement * this_ptr, app::TypeData * value))
    IL2CPP_REGISTER_METHOD(0x0194F4E0, app::XmlTypeMapElementInfo *, FindElement, (app::XmlTypeMapMemberElement * this_ptr, app::Object * ob, app::Object * member_value))
    IL2CPP_REGISTER_METHOD(0x0194FA00, void, SetChoice, (app::XmlTypeMapMemberElement * this_ptr, app::Object * ob, app::Object * choice))
    IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_IsXmlTextCollector, (app::XmlTypeMapMemberElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0051DB50, void, set_IsXmlTextCollector, (app::XmlTypeMapMemberElement * this_ptr, bool value))
}