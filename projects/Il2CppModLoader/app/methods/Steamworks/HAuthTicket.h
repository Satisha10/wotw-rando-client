#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Steamworks::HAuthTicket {
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, ctor, (app::HAuthTicket__Boxed * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x0012ECC0, app::String *, ToString, (app::HAuthTicket__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00130EB0, bool, Equals_1, (app::HAuthTicket__Boxed * this_ptr, app::Object * other))
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (app::HAuthTicket__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015F7650, bool, op_Equality, (app::HAuthTicket x, app::HAuthTicket y))
    IL2CPP_REGISTER_METHOD(0x015FB770, bool, op_Inequality, (app::HAuthTicket x, app::HAuthTicket y))
    IL2CPP_REGISTER_METHOD(0x006CE970, app::HAuthTicket, op_Explicit_1, (uint32_t value))
    IL2CPP_REGISTER_METHOD(0x006CE970, uint32_t, op_Explicit_2, (app::HAuthTicket that))
    IL2CPP_REGISTER_METHOD(0x0012EDC0, bool, Equals_2, (app::HAuthTicket__Boxed * this_ptr, app::HAuthTicket other))
    IL2CPP_REGISTER_METHOD(0x0012EDD0, int32_t, CompareTo, (app::HAuthTicket__Boxed * this_ptr, app::HAuthTicket other))
    IL2CPP_REGISTER_METHOD(0x015FB810, void, cctor, ())
    inline bool operator == (app::HAuthTicket x, app::HAuthTicket y) {
        return op_Equality(x, y);
    }
    inline bool operator != (app::HAuthTicket x, app::HAuthTicket y) {
        return op_Inequality(x, y);
    }
}