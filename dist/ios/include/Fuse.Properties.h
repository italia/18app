// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Properties.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Properties;}}
namespace g{namespace Fuse{struct PropertyHandle;}}

namespace g{
namespace Fuse{

// public sealed class Properties :15
// {
uType* Properties_typeof();
void Properties__ctor__fn(Properties* __this);
void Properties__AddToList_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uObject* val);
void Properties__Clear_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle);
void Properties__Clear1_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uObject* val, bool* all);
void Properties__CreateHandle_fn(::g::Fuse::PropertyHandle** __retval);
void Properties__ForeachInList_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uDelegate* action, uArray* state);
void Properties__ForeachInList1_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uDelegate* action, uObject* state);
void Properties__Get_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uObject** __retval);
void Properties__Has_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, bool* __retval);
void Properties__New1_fn(Properties** __retval);
void Properties__RemoveFromList_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uObject* val);
void Properties__Set_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uObject* val);
void Properties__TryGet_fn(Properties* __this, ::g::Fuse::PropertyHandle* handle, uObject** val, bool* __retval);

struct Properties : uObject
{
    uStrong< ::g::Fuse::PropertyHandle*> _handle;
    uStrong<Properties*> _next;
    uStrong<uObject*> _value;
    static uSStrong<uObject*> NoValue_;
    static uSStrong<uObject*>& NoValue() { return NoValue_; }

    void ctor_();
    void AddToList(::g::Fuse::PropertyHandle* handle, uObject* val);
    void Clear(::g::Fuse::PropertyHandle* handle);
    void Clear1(::g::Fuse::PropertyHandle* handle, uObject* val, bool all);
    void ForeachInList(::g::Fuse::PropertyHandle* handle, uDelegate* action, uArray* state);
    void ForeachInList1(::g::Fuse::PropertyHandle* handle, uDelegate* action, uObject* state);
    uObject* Get(::g::Fuse::PropertyHandle* handle);
    bool Has(::g::Fuse::PropertyHandle* handle);
    void RemoveFromList(::g::Fuse::PropertyHandle* handle, uObject* val);
    void Set(::g::Fuse::PropertyHandle* handle, uObject* val);
    bool TryGet(::g::Fuse::PropertyHandle* handle, uObject** val);
    static ::g::Fuse::PropertyHandle* CreateHandle();
    static Properties* New1();
};
// }

}} // ::g::Fuse
