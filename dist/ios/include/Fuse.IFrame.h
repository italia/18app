// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/RootViewport.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{

// public abstract interface IFrame :12
// {
uInterfaceType* IFrame_typeof();

struct IFrame
{
    void(*fp_add_FrameChanged)(uObject*, uDelegate*);
    void(*fp_remove_FrameChanged)(uObject*, uDelegate*);
    void(*fp_get_Size)(uObject*, ::g::Uno::Float2*);
    static void add_FrameChanged(const uInterface& __this, uDelegate* value) { __this.VTable<IFrame>()->fp_add_FrameChanged(__this, value); }
    static void remove_FrameChanged(const uInterface& __this, uDelegate* value) { __this.VTable<IFrame>()->fp_remove_FrameChanged(__this, value); }
    static ::g::Uno::Float2 Size(const uInterface& __this);
};

}} // ::g::Fuse

#include <Uno.Float2.h>

namespace g{
namespace Fuse{

inline ::g::Uno::Float2 IFrame::Size(const uInterface& __this) { ::g::Uno::Float2 __retval; return __this.VTable<IFrame>()->fp_get_Size(__this, &__retval), __retval; }
// }

}} // ::g::Fuse
