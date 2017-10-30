// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Transform.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{

// public abstract interface ITransformMode :270
// {
uInterfaceType* ITransformMode_typeof();

struct ITransformMode
{
    void(*fp_Subscribe)(uObject*, uObject*, uObject**);
    void(*fp_Unsubscribe)(uObject*, uObject*, uObject*);
    static uObject* Subscribe(const uInterface& __this, uObject* transform) { uObject* __retval; return __this.VTable<ITransformMode>()->fp_Subscribe(__this, transform, &__retval), __retval; }
    static void Unsubscribe(const uInterface& __this, uObject* transform, uObject* sub) { __this.VTable<ITransformMode>()->fp_Unsubscribe(__this, transform, sub); }
};
// }

}} // ::g::Fuse
