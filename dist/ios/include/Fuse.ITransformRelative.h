// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Transform.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{

// public abstract interface ITransformRelative :260
// {
uInterfaceType* ITransformRelative_typeof();

struct ITransformRelative
{
    void(*fp_OnTransformChanged)(uObject*, uObject*, uObject*);
    void(*fp_get_RelativeNode)(uObject*, ::g::Fuse::Visual**);
    void(*fp_get_Target)(uObject*, ::g::Fuse::Visual**);
    static void OnTransformChanged(const uInterface& __this, uObject* ignoredSender, uObject* ignoredArgs) { __this.VTable<ITransformRelative>()->fp_OnTransformChanged(__this, ignoredSender, ignoredArgs); }
    static ::g::Fuse::Visual* RelativeNode(const uInterface& __this) { ::g::Fuse::Visual* __retval; return __this.VTable<ITransformRelative>()->fp_get_RelativeNode(__this, &__retval), __retval; }
    static ::g::Fuse::Visual* Target(const uInterface& __this) { ::g::Fuse::Visual* __retval; return __this.VTable<ITransformRelative>()->fp_get_Target(__this, &__retval), __retval; }
};
// }

}} // ::g::Fuse
