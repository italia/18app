// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/VarArgFunction.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Reactive.InnerListener.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Reactive{struct VarArgFunction;}}}
namespace g{namespace Fuse{namespace Reactive{struct VarArgFunction__Argument;}}}
namespace g{namespace Fuse{namespace Reactive{struct VarArgFunction__Subscription;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// protected abstract class VarArgFunction.Subscription :57
// {
struct VarArgFunction__Subscription_type : ::g::Fuse::Reactive::InnerListener_type
{
    void(*fp_OnNewArguments)(::g::Fuse::Reactive::VarArgFunction__Subscription*, uArray*);
    void(*fp_OnNewPartialArguments)(::g::Fuse::Reactive::VarArgFunction__Subscription*, uArray*);
};

VarArgFunction__Subscription_type* VarArgFunction__Subscription_typeof();
void VarArgFunction__Subscription__ctor_1_fn(VarArgFunction__Subscription* __this, ::g::Fuse::Reactive::VarArgFunction* func, uObject* context);
void VarArgFunction__Subscription__Dispose_fn(VarArgFunction__Subscription* __this);
void VarArgFunction__Subscription__Init_fn(VarArgFunction__Subscription* __this);
void VarArgFunction__Subscription__OnNewArguments_fn(VarArgFunction__Subscription* __this, uArray* args);
void VarArgFunction__Subscription__OnNewData_fn(VarArgFunction__Subscription* __this, uObject* source, uObject* value);
void VarArgFunction__Subscription__OnNewPartialArguments_fn(VarArgFunction__Subscription* __this, uArray* args);
void VarArgFunction__Subscription__PushData_fn(VarArgFunction__Subscription* __this);

struct VarArgFunction__Subscription : ::g::Fuse::Reactive::InnerListener
{
    uStrong<uArray*> _arguments;
    uStrong<uObject*> _context;
    uStrong< ::g::Fuse::Reactive::VarArgFunction*> _func;

    void ctor_1(::g::Fuse::Reactive::VarArgFunction* func, uObject* context);
    void Init();
    void OnNewArguments(uArray* args) { (((VarArgFunction__Subscription_type*)__type)->fp_OnNewArguments)(this, args); }
    void OnNewPartialArguments(uArray* args) { (((VarArgFunction__Subscription_type*)__type)->fp_OnNewPartialArguments)(this, args); }
    void PushData();
    static void OnNewArguments(VarArgFunction__Subscription* __this, uArray* args) { VarArgFunction__Subscription__OnNewArguments_fn(__this, args); }
    static void OnNewPartialArguments(VarArgFunction__Subscription* __this, uArray* args) { VarArgFunction__Subscription__OnNewPartialArguments_fn(__this, args); }
};
// }

}}} // ::g::Fuse::Reactive
