// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Subscription.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IListener.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct InnerListener;}}}
namespace g{namespace Fuse{namespace Reactive{struct InnerListener__ObservableSubscription;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class InnerListener :14
// {
struct InnerListener_type : uType
{
    ::g::Uno::IDisposable interface0;
    ::g::Fuse::Reactive::IListener interface1;
    void(*fp_Dispose)(::g::Fuse::Reactive::InnerListener*);
    void(*fp_OnNewData)(::g::Fuse::Reactive::InnerListener*, uObject*, uObject*);
};

InnerListener_type* InnerListener_typeof();
void InnerListener__ctor__fn(InnerListener* __this);
void InnerListener__ClearDiagnostic_fn(InnerListener* __this);
void InnerListener__Dispose_fn(InnerListener* __this);
void InnerListener__FuseReactiveIListenerOnNewData_fn(InnerListener* __this, uObject* source, uObject* value);
void InnerListener__SetDiagnostic_fn(InnerListener* __this, uString* message, uObject* source);

struct InnerListener : uObject
{
    uStrong<uObject*> _diag;
    uStrong< ::g::Uno::Collections::Dictionary*> _obsSubs;

    void ctor_();
    void ClearDiagnostic();
    void Dispose() { (((InnerListener_type*)__type)->fp_Dispose)(this); }
    void OnNewData(uObject* source, uObject* value) { (((InnerListener_type*)__type)->fp_OnNewData)(this, source, value); }
    void SetDiagnostic(uString* message, uObject* source);
    static void Dispose(InnerListener* __this) { InnerListener__Dispose_fn(__this); }
};
// }

}}} // ::g::Fuse::Reactive
