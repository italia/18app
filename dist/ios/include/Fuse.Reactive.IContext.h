// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive/1.3.1/IExpression.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract interface IContext :13
// {
uInterfaceType* IContext_typeof();

struct IContext
{
    void(*fp_get_Node)(uObject*, ::g::Fuse::Node**);
    void(*fp_Subscribe)(uObject*, uObject*, uString*, uObject*, uObject**);
    void(*fp_SubscribeResource)(uObject*, uObject*, uString*, uObject*, uObject**);
    static ::g::Fuse::Node* Node(const uInterface& __this) { ::g::Fuse::Node* __retval; return __this.VTable<IContext>()->fp_get_Node(__this, &__retval), __retval; }
    static uObject* Subscribe(const uInterface& __this, uObject* source, uString* key, uObject* listener) { uObject* __retval; return __this.VTable<IContext>()->fp_Subscribe(__this, source, key, listener, &__retval), __retval; }
    static uObject* SubscribeResource(const uInterface& __this, uObject* source, uString* key, uObject* listener) { uObject* __retval; return __this.VTable<IContext>()->fp_SubscribeResource(__this, source, key, listener, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Reactive
