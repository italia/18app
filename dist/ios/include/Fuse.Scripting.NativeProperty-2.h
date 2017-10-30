// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/NativeProperty.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.NativeMember.h>
namespace g{namespace Fuse{namespace Scripting{struct NativeProperty;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public class NativeProperty<T, TJSValue> :8
// {
struct NativeProperty_type : ::g::Fuse::Scripting::NativeMember_type
{
    void(*fp_GetProperty)(::g::Fuse::Scripting::NativeProperty*, uTRef);
    void(*fp_SetProperty1)(::g::Fuse::Scripting::NativeProperty*, void*);
};

NativeProperty_type* NativeProperty_typeof();
void NativeProperty__ctor_1_fn(NativeProperty* __this, uString* name);
void NativeProperty__ctor_2_fn(NativeProperty* __this, uString* name, uDelegate* getHandler, uDelegate* setHandler, uDelegate* valueConverter);
void NativeProperty__ctor_3_fn(NativeProperty* __this, uString* name, void* value);
void NativeProperty__CreateObject_fn(NativeProperty* __this, uObject** __retval);
void NativeProperty__GetProperty_fn(NativeProperty* __this, uTRef __retval);
void NativeProperty__GetProperty1_fn(NativeProperty* __this, uArray* args, uObject** __retval);
void NativeProperty__New2_fn(uType* __type, uString* name, uDelegate* getHandler, uDelegate* setHandler, uDelegate* valueConverter, NativeProperty** __retval);
void NativeProperty__New3_fn(uType* __type, uString* name, void* value, NativeProperty** __retval);
void NativeProperty__SetProperty_fn(NativeProperty* __this, uArray* args, uObject** __retval);
void NativeProperty__SetProperty1_fn(NativeProperty* __this, void* value);

struct NativeProperty : ::g::Fuse::Scripting::NativeMember
{
    uStrong<uDelegate*> _getHandler;
    bool _isReadonly;
    uTField _readonlyValue() { return __type->Field(this, 5); }
    uStrong<uDelegate*> _setHandler;
    uStrong<uDelegate*> _valueConverter;

    void ctor_1(uString* name);
    void ctor_2(uString* name, uDelegate* getHandler, uDelegate* setHandler, uDelegate* valueConverter);
    template<class TJSValue>
    void ctor_3(uString* name, TJSValue value) { NativeProperty__ctor_3_fn(this, name, uConstrain(__type->GetBase(NativeProperty_typeof())->T(1), value)); }
    template<class T>
    T GetProperty() { T __retval; return (((NativeProperty_type*)__type)->fp_GetProperty)(this, &__retval), __retval; }
    void GetProperty_ex(uTRef __retval) { (((NativeProperty_type*)__type)->fp_GetProperty)(this, __retval); }
    uObject* GetProperty1(uArray* args);
    uObject* SetProperty(uArray* args);
    template<class TJSValue>
    void SetProperty1(TJSValue value) { (((NativeProperty_type*)__type)->fp_SetProperty1)(this, uConstrain(__type->GetBase(NativeProperty_typeof())->T(1), value)); }
    void SetProperty1_ex(void* value) { (((NativeProperty_type*)__type)->fp_SetProperty1)(this, value); }
    template<class T>
    static T GetProperty(NativeProperty* __this) { T __retval; return NativeProperty__GetProperty_fn(__this, &__retval), __retval; }
    static NativeProperty* New2(uType* __type, uString* name, uDelegate* getHandler, uDelegate* setHandler, uDelegate* valueConverter);
    template<class TJSValue>
    static NativeProperty* New3(uType* __type, uString* name, TJSValue value) { NativeProperty* __retval; return NativeProperty__New3_fn(__type, name, uConstrain(__type->T(1), value), &__retval), __retval; }
    template<class TJSValue>
    static void SetProperty1(NativeProperty* __this, TJSValue value) { NativeProperty__SetProperty1_fn(__this, uConstrain(__this->__type->GetBase(NativeProperty_typeof())->T(1), value)); }
};
// }

}}} // ::g::Fuse::Scripting
