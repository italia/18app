// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/Interfaces.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Resources{struct ImageSource;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public abstract interface IImageView :91
// {
uInterfaceType* IImageView_typeof();

struct IImageView
{
    void(*fp_set_ImageSource)(uObject*, ::g::Fuse::Resources::ImageSource*);
    void(*fp_set_TintColor)(uObject*, ::g::Uno::Float4*);
    void(*fp_UpdateImageTransform)(uObject*, float*, ::g::Uno::Float2*, ::g::Uno::Float2*, ::g::Uno::Float2*);
    static void ImageSource(const uInterface& __this, ::g::Fuse::Resources::ImageSource* value) { __this.VTable<IImageView>()->fp_set_ImageSource(__this, value); }
    static void TintColor(const uInterface& __this, ::g::Uno::Float4 value);
    static void UpdateImageTransform(const uInterface& __this, float density, ::g::Uno::Float2 origin, ::g::Uno::Float2 scale, ::g::Uno::Float2 drawSize);
};

}}}} // ::g::Fuse::Controls::Native

#include <Uno.Float2.h>
#include <Uno.Float4.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

inline void IImageView::TintColor(const uInterface& __this, ::g::Uno::Float4 value) { __this.VTable<IImageView>()->fp_set_TintColor(__this, &value); }
inline void IImageView::UpdateImageTransform(const uInterface& __this, float density, ::g::Uno::Float2 origin, ::g::Uno::Float2 scale, ::g::Uno::Float2 drawSize) { __this.VTable<IImageView>()->fp_UpdateImageTransform(__this, &density, &origin, &scale, &drawSize); }
// }

}}}} // ::g::Fuse::Controls::Native
