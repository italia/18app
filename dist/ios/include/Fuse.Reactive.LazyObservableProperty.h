// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/ObservableProperty.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Reactive.ObservableProperty.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Reactive{struct LazyObservableProperty;}}}
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Uno{namespace UX{struct Property;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class LazyObservableProperty :7
// {
::g::Fuse::Reactive::ObservableProperty_type* LazyObservableProperty_typeof();
void LazyObservableProperty__ctor_1_fn(LazyObservableProperty* __this, ::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p);
void LazyObservableProperty__Get_fn(LazyObservableProperty* __this, uArray* args, uObject** __retval);
void LazyObservableProperty__New2_fn(::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p, LazyObservableProperty** __retval);

struct LazyObservableProperty : ::g::Fuse::Reactive::ObservableProperty
{
    void ctor_1(::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p);
    uObject* Get(uArray* args);
    static LazyObservableProperty* New2(::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p);
};
// }

}}} // ::g::Fuse::Reactive
