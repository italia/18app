// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls/1.3.1/Graphics/Visual.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float2.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct Visual;}}}}
namespace g{namespace Fuse{struct FastMatrix;}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct VisualBounds;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Graphics{

// public abstract class Visual :5
// {
::g::Fuse::Visual_type* Visual_typeof();
void Visual__ctor_3_fn(Visual* __this);
void Visual__get_ActualSize_fn(Visual* __this, ::g::Uno::Float2* __retval);
void Visual__set_ActualSize_fn(Visual* __this, ::g::Uno::Float2* value);
void Visual__get_LocalRenderBounds_fn(Visual* __this, ::g::Fuse::VisualBounds** __retval);
void Visual__OnArrangeMarginBox_fn(Visual* __this, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void Visual__PrependImplicitTransform_fn(Visual* __this, ::g::Fuse::FastMatrix* m);

struct Visual : ::g::Fuse::Visual
{
    ::g::Uno::Float2 _position;
    ::g::Uno::Float2 _ActualSize;

    void ctor_3();
    ::g::Uno::Float2 ActualSize();
    void ActualSize(::g::Uno::Float2 value);
};
// }

}}}} // ::g::Fuse::Controls::Graphics
