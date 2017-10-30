// This file was generated based on /usr/local/share/uno/Packages/Fuse.Scripting/1.3.1/NativeMember.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeMember;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract class NativeMember :6
// {
struct NativeMember_type : uType
{
    void(*fp_CreateObject)(::g::Fuse::Scripting::NativeMember*, uObject**);
};

NativeMember_type* NativeMember_typeof();
void NativeMember__ctor__fn(NativeMember* __this, uString* name);
void NativeMember__get_Context_fn(NativeMember* __this, ::g::Fuse::Scripting::Context** __retval);
void NativeMember__set_Context_fn(NativeMember* __this, ::g::Fuse::Scripting::Context* value);
void NativeMember__Create_fn(NativeMember* __this, ::g::Fuse::Scripting::Object* obj, ::g::Fuse::Scripting::Context* context);
void NativeMember__get_ModuleObject_fn(NativeMember* __this, ::g::Fuse::Scripting::Object** __retval);
void NativeMember__set_ModuleObject_fn(NativeMember* __this, ::g::Fuse::Scripting::Object* value);
void NativeMember__get_Name_fn(NativeMember* __this, uString** __retval);
void NativeMember__set_Name_fn(NativeMember* __this, uString* value);

struct NativeMember : uObject
{
    uStrong< ::g::Fuse::Scripting::Context*> _Context;
    uStrong< ::g::Fuse::Scripting::Object*> _ModuleObject;
    uStrong<uString*> _Name;

    void ctor_(uString* name);
    ::g::Fuse::Scripting::Context* Context();
    void Context(::g::Fuse::Scripting::Context* value);
    void Create(::g::Fuse::Scripting::Object* obj, ::g::Fuse::Scripting::Context* context);
    uObject* CreateObject() { uObject* __retval; return (((NativeMember_type*)__type)->fp_CreateObject)(this, &__retval), __retval; }
    ::g::Fuse::Scripting::Object* ModuleObject();
    void ModuleObject(::g::Fuse::Scripting::Object* value);
    uString* Name();
    void Name(uString* value);
};
// }

}}} // ::g::Fuse::Scripting
