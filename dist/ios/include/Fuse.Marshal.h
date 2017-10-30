// This file was generated based on /usr/local/share/uno/Packages/Fuse.Marshal/1.3.1/Marshal.Cast.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{struct Computer;}}
namespace g{namespace Fuse{struct Marshal;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct Size;}}}
namespace g{namespace Uno{namespace UX{struct Size2;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{

// public partial static class Marshal :12
// {
uClassType* Marshal_typeof();
void Marshal__Add_fn(uObject* a, uObject* b, uObject** __retval);
void Marshal__AddConverter_fn(uObject* conv);
void Marshal__CanConvertClass_fn(uType* t, bool* __retval);
void Marshal__Divide_fn(uObject* a, uObject* b, uObject** __retval);
void Marshal__DominantType_fn(uType* a, uType* b, uType** __retval);
void Marshal__EqualTo_fn(uObject* a, uObject* b, uObject** __retval);
void Marshal__GreaterThan_fn(uObject* a, uObject* b, uObject** __retval);
void Marshal__Is_fn(uObject* obj, uType* t, bool* __retval);
void Marshal__LessThan_fn(uObject* a, uObject* b, uObject** __retval);
void Marshal__Multiply_fn(uObject* a, uObject* b, uObject** __retval);
void Marshal__StringToSize_fn(uString* o, ::g::Uno::UX::Size* __retval);
void Marshal__StringToSize2_fn(uString* o, ::g::Uno::UX::Size2* __retval);
void Marshal__Subtract_fn(uObject* a, uObject* b, uObject** __retval);
void Marshal__ToBool_fn(uObject* v, bool* __retval);
void Marshal__ToDouble_fn(uObject* v, double* __retval);
void Marshal__ToDouble1_fn(uObject* v, double* res, bool* __retval);
void Marshal__ToDouble2_fn(uString* s, double* res, bool* __retval);
void Marshal__ToFloat_fn(uObject* o, float* __retval);
void Marshal__ToFloat2_fn(uObject* o, ::g::Uno::Float2* __retval);
void Marshal__ToFloat3_fn(uObject* o, ::g::Uno::Float3* __retval);
void Marshal__ToFloat4_fn(uObject* o, ::g::Uno::Float4* __retval);
void Marshal__ToInt_fn(uObject* o, int* __retval);
void Marshal__ToSize_fn(uObject* o, ::g::Uno::UX::Size* __retval);
void Marshal__ToSize2_fn(uObject* o, ::g::Uno::UX::Size2* __retval);
void Marshal__ToType_fn(uType* __type, uObject* o, uTRef __retval);
void Marshal__ToVector_fn(uObject* arr, uObject** __retval);
void Marshal__TryConvertArrayToVector_fn(uObject* arg, uObject** __retval);
void Marshal__TryConvertTo_fn(uType* t, uObject* o, uObject** res, uObject* diagnosticSource, bool* __retval);
void Marshal__TryToType_fn(uType* __type, uObject* o, uTRef res, bool* __retval);
void Marshal__TryToZeroFloat4_fn(uObject* o, ::g::Uno::Float4* value, int* size, bool* __retval);

struct Marshal : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _computers_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _computers() { return Marshal_typeof()->Init(), _computers_; }
    static uSStrong< ::g::Uno::Collections::List*> _converters_;
    static uSStrong< ::g::Uno::Collections::List*>& _converters() { return Marshal_typeof()->Init(), _converters_; }

    static uObject* Add(uObject* a, uObject* b);
    static void AddConverter(uObject* conv);
    static bool CanConvertClass(uType* t);
    static uObject* Divide(uObject* a, uObject* b);
    static uType* DominantType(uType* a, uType* b);
    static uObject* EqualTo(uObject* a, uObject* b);
    static uObject* GreaterThan(uObject* a, uObject* b);
    static bool Is(uObject* obj, uType* t);
    static uObject* LessThan(uObject* a, uObject* b);
    static uObject* Multiply(uObject* a, uObject* b);
    static ::g::Uno::UX::Size StringToSize(uString* o);
    static ::g::Uno::UX::Size2 StringToSize2(uString* o);
    static uObject* Subtract(uObject* a, uObject* b);
    static bool ToBool(uObject* v);
    static double ToDouble(uObject* v);
    static bool ToDouble1(uObject* v, double* res);
    static bool ToDouble2(uString* s, double* res);
    static float ToFloat(uObject* o);
    static ::g::Uno::Float2 ToFloat2(uObject* o);
    static ::g::Uno::Float3 ToFloat3(uObject* o);
    static ::g::Uno::Float4 ToFloat4(uObject* o);
    static int ToInt(uObject* o);
    static ::g::Uno::UX::Size ToSize(uObject* o);
    static ::g::Uno::UX::Size2 ToSize2(uObject* o);
    template<class T>
    static T ToType(uType* __type, uObject* o) { T __retval; return Marshal__ToType_fn(__type, o, &__retval), __retval; }
    static uObject* ToVector(uObject* arr);
    static uObject* TryConvertArrayToVector(uObject* arg);
    static bool TryConvertTo(uType* t, uObject* o, uObject** res, uObject* diagnosticSource);
    template<class T>
    static bool TryToType(uType* __type, uObject* o, T* res) { bool __retval; return Marshal__TryToType_fn(__type, o, uConstrain(__type->U(0), res), &__retval), __retval; }
    static bool TryToZeroFloat4(uObject* o, ::g::Uno::Float4* value, int* size);
};
// }

}} // ::g::Fuse
