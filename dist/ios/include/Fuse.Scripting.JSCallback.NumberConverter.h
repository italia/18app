// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/JSCallback.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Scripting{struct JSCallback__NumberConverter;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public static class JSCallback.NumberConverter :163
// {
uClassType* JSCallback__NumberConverter_typeof();
void JSCallback__NumberConverter__Convert_fn(double* value, uType* targetType, uObject** __retval);
void JSCallback__NumberConverter__Convert1_fn(float* value, uType* targetType, uObject** __retval);
void JSCallback__NumberConverter__Convert2_fn(int* value, uType* targetType, uObject** __retval);
void JSCallback__NumberConverter__Convert3_fn(int64_t* value, uType* targetType, uObject** __retval);
void JSCallback__NumberConverter__Convert4_fn(int16_t* value, uType* targetType, uObject** __retval);
void JSCallback__NumberConverter__Convert5_fn(uType* targetType, uObject* value, uObject** __retval);
void JSCallback__NumberConverter__Convert6_fn(uType* __type, uObject* value, uTRef __retval);
void JSCallback__NumberConverter__TryConvert_fn(uType* __type, uObject* value, uTRef convertedValue, bool* __retval);

struct JSCallback__NumberConverter : uObject
{
    static uObject* Convert(double value, uType* targetType);
    static uObject* Convert1(float value, uType* targetType);
    static uObject* Convert2(int value, uType* targetType);
    static uObject* Convert3(int64_t value, uType* targetType);
    static uObject* Convert4(int16_t value, uType* targetType);
    static uObject* Convert5(uType* targetType, uObject* value);
    template<class TValue>
    static TValue Convert6(uType* __type, uObject* value) { TValue __retval; return JSCallback__NumberConverter__Convert6_fn(__type, value, &__retval), __retval; }
    template<class TValue>
    static bool TryConvert(uType* __type, uObject* value, TValue* convertedValue) { bool __retval; return JSCallback__NumberConverter__TryConvert_fn(__type, value, uConstrain(__type->U(0), convertedValue), &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Scripting
