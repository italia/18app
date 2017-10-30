// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Time/Offset.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Time{struct Offset;}}}

namespace g{
namespace Uno{
namespace Time{

// public struct Offset :5
// {
uStructType* Offset_typeof();
void Offset__ctor__fn(Offset* __this, int* milliseconds);
void Offset__Equals_fn(Offset* __this, uType* __type, uObject* obj, bool* __retval);
void Offset__Equals2_fn(Offset* __this, Offset* other, bool* __retval);
void Offset__FromHours_fn(int* hours, Offset* __retval);
void Offset__FromHoursAndMinutes_fn(int* hours, int* minutes, Offset* __retval);
void Offset__FromMilliseconds_fn(int* milliseconds, Offset* __retval);
void Offset__GetHashCode_fn(Offset* __this, uType* __type, int* __retval);
void Offset__get_Milliseconds_fn(Offset* __this, int* __retval);
void Offset__New1_fn(int* milliseconds, Offset* __retval);
void Offset__op_Equality_fn(Offset* left, Offset* right, bool* __retval);
void Offset__get_Ticks_fn(Offset* __this, int64_t* __retval);
void Offset__ToString_fn(Offset* __this, uType* __type, uString** __retval);

struct Offset
{
    static Offset Zero_;
    static Offset& Zero() { return Offset_typeof()->Init(), Zero_; }
    static Offset MinValue_;
    static Offset& MinValue() { return Offset_typeof()->Init(), MinValue_; }
    static Offset MaxValue_;
    static Offset& MaxValue() { return Offset_typeof()->Init(), MaxValue_; }
    int _milliseconds;

    void ctor_(int milliseconds);
    bool Equals(uType* __type, uObject* obj) { bool __retval; return Offset__Equals_fn(this, __type, obj, &__retval), __retval; }
    bool Equals2(Offset other);
    int GetHashCode(uType* __type) { int __retval; return Offset__GetHashCode_fn(this, __type, &__retval), __retval; }
    int Milliseconds();
    int64_t Ticks();
    uString* ToString(uType* __type) { uString* __retval; return Offset__ToString_fn(this, __type, &__retval), __retval; }
};

Offset Offset__FromHours(int hours);
Offset Offset__FromHoursAndMinutes(int hours, int minutes);
Offset Offset__FromMilliseconds(int milliseconds);
Offset Offset__New1(int milliseconds);
bool Offset__op_Equality(Offset left, Offset right);
// }

}}} // ::g::Uno::Time
