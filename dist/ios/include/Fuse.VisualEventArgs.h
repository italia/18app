// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Event.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IScriptEvent.h>
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Fuse{struct VisualEventArgs;}}

namespace g{
namespace Fuse{

// public class VisualEventArgs :161
// {
struct VisualEventArgs_type : uType
{
    ::g::Fuse::Scripting::IScriptEvent interface0;
    void(*fp_Serialize)(::g::Fuse::VisualEventArgs*, uObject*);
};

VisualEventArgs_type* VisualEventArgs_typeof();
void VisualEventArgs__ctor_1_fn(VisualEventArgs* __this, ::g::Fuse::Visual* visual);
void VisualEventArgs__FuseScriptingIScriptEventSerialize_fn(VisualEventArgs* __this, uObject* s);
void VisualEventArgs__get_IsHandled_fn(VisualEventArgs* __this, bool* __retval);
void VisualEventArgs__set_IsHandled_fn(VisualEventArgs* __this, bool* value);
void VisualEventArgs__New2_fn(::g::Fuse::Visual* visual, VisualEventArgs** __retval);
void VisualEventArgs__Serialize_fn(VisualEventArgs* __this, uObject* s);
void VisualEventArgs__get_Visual_fn(VisualEventArgs* __this, ::g::Fuse::Visual** __retval);
void VisualEventArgs__set_Visual_fn(VisualEventArgs* __this, ::g::Fuse::Visual* value);

struct VisualEventArgs : ::g::Uno::EventArgs
{
    bool _IsHandled;
    uStrong< ::g::Fuse::Visual*> _Visual;

    void ctor_1(::g::Fuse::Visual* visual);
    bool IsHandled();
    void IsHandled(bool value);
    void Serialize(uObject* s) { (((VisualEventArgs_type*)__type)->fp_Serialize)(this, s); }
    ::g::Fuse::Visual* Visual();
    void Visual(::g::Fuse::Visual* value);
    static VisualEventArgs* New2(::g::Fuse::Visual* visual);
    static void Serialize(VisualEventArgs* __this, uObject* s) { VisualEventArgs__Serialize_fn(__this, s); }
};
// }

}} // ::g::Fuse
