// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/Interfaces.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public abstract interface IScrollView :116
// {
uInterfaceType* IScrollView_typeof();

struct IScrollView
{
    void(*fp_set_AllowedScrollDirections)(uObject*, int*);
    void(*fp_set_ScrollPosition)(uObject*, ::g::Uno::Float2*);
    static void AllowedScrollDirections(const uInterface& __this, int value) { __this.VTable<IScrollView>()->fp_set_AllowedScrollDirections(__this, &value); }
    static void ScrollPosition(const uInterface& __this, ::g::Uno::Float2 value);
};

}}}} // ::g::Fuse::Controls::Native

#include <Uno.Float2.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

inline void IScrollView::ScrollPosition(const uInterface& __this, ::g::Uno::Float2 value) { __this.VTable<IScrollView>()->fp_set_ScrollPosition(__this, &value); }
// }

}}}} // ::g::Fuse::Controls::Native
