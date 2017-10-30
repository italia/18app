// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Caching/ElementBatcher.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.IElementBatchDrawable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Elements{struct SingleVisualDrawable;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float4x4;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Elements{

// internal sealed class SingleVisualDrawable :13
// {
struct SingleVisualDrawable_type : uType
{
    ::g::Fuse::Elements::IElementBatchDrawable interface0;
};

SingleVisualDrawable_type* SingleVisualDrawable_typeof();
void SingleVisualDrawable__ctor__fn(SingleVisualDrawable* __this, ::g::Fuse::Visual* elm);
void SingleVisualDrawable__Draw_fn(SingleVisualDrawable* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Rect* scissorRectInClipSpace);
void SingleVisualDrawable__New1_fn(::g::Fuse::Visual* elm, SingleVisualDrawable** __retval);

struct SingleVisualDrawable : uObject
{
    uStrong< ::g::Fuse::Visual*> _elm;

    void ctor_(::g::Fuse::Visual* elm);
    void Draw(::g::Fuse::DrawContext* dc, ::g::Uno::Float4x4 localToClipTransform, ::g::Uno::Rect scissorRectInClipSpace);
    static SingleVisualDrawable* New1(::g::Fuse::Visual* elm);
};
// }

}}} // ::g::Fuse::Elements
