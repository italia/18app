// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/ClassInstance.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct ClassInstance;}}}
namespace g{namespace Fuse{namespace Reactive{struct ObservableProperty;}}}
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class ClassInstance :10
// {
uType* ClassInstance_typeof();
void ClassInstance__ctor__fn(ClassInstance* __this, ::g::Fuse::Reactive::ThreadWorker* context, uObject* obj, ::g::Uno::UX::NameTable* rootTable);
void ClassInstance__CallMethod_fn(ClassInstance* __this, ::g::Fuse::Scripting::Function* method, uArray* args);
void ClassInstance__DispatchUnroot_fn(ClassInstance* __this);
void ClassInstance__EnsureHasProperties_fn(ClassInstance* __this);
void ClassInstance__EnsureRooted_fn(ClassInstance* __this);
void ClassInstance__GetPropertyObservable_fn(ClassInstance* __this, ::g::Uno::UX::Property* p, ::g::Fuse::Scripting::Object** __retval);
void ClassInstance__New1_fn(::g::Fuse::Reactive::ThreadWorker* context, uObject* obj, ::g::Uno::UX::NameTable* rootTable, ClassInstance** __retval);
void ClassInstance__Unroot_fn(ClassInstance* __this);

struct ClassInstance : uObject
{
    uStrong<uObject*> _obj;
    uStrong< ::g::Uno::Collections::Dictionary*> _properties;
    uStrong< ::g::Uno::UX::NameTable*> _rootTable;
    uStrong< ::g::Fuse::Scripting::Object*> _self;
    uStrong< ::g::Fuse::Reactive::ThreadWorker*> _worker;

    void ctor_(::g::Fuse::Reactive::ThreadWorker* context, uObject* obj, ::g::Uno::UX::NameTable* rootTable);
    void CallMethod(::g::Fuse::Scripting::Function* method, uArray* args);
    void DispatchUnroot();
    void EnsureHasProperties();
    void EnsureRooted();
    ::g::Fuse::Scripting::Object* GetPropertyObservable(::g::Uno::UX::Property* p);
    void Unroot();
    static ClassInstance* New1(::g::Fuse::Reactive::ThreadWorker* context, uObject* obj, ::g::Uno::UX::NameTable* rootTable);
};
// }

}}} // ::g::Fuse::Reactive
