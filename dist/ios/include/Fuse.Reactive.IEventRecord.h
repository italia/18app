// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive/1.3.1/IEventHandler.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace Collections{template<class TKey, class TValue>struct KeyValuePair;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract interface IEventRecord :8
// {
uInterfaceType* IEventRecord_typeof();

struct IEventRecord
{
    void(*fp_get_Args)(uObject*, uObject**);
    void(*fp_get_Data)(uObject*, uObject**);
    void(*fp_get_Node)(uObject*, ::g::Fuse::Node**);
    void(*fp_get_Sender)(uObject*, ::g::Uno::UX::Selector*);
    static uObject* Args(const uInterface& __this) { uObject* __retval; return __this.VTable<IEventRecord>()->fp_get_Args(__this, &__retval), __retval; }
    static uObject* Data(const uInterface& __this) { uObject* __retval; return __this.VTable<IEventRecord>()->fp_get_Data(__this, &__retval), __retval; }
    static ::g::Fuse::Node* Node(const uInterface& __this) { ::g::Fuse::Node* __retval; return __this.VTable<IEventRecord>()->fp_get_Node(__this, &__retval), __retval; }
    static ::g::Uno::UX::Selector Sender(const uInterface& __this);
};

}}} // ::g::Fuse::Reactive

#include <Uno.UX.Selector.h>

namespace g{
namespace Fuse{
namespace Reactive{

inline ::g::Uno::UX::Selector IEventRecord::Sender(const uInterface& __this) { ::g::Uno::UX::Selector __retval; return __this.VTable<IEventRecord>()->fp_get_Sender(__this, &__retval), __retval; }
// }

}}} // ::g::Fuse::Reactive
