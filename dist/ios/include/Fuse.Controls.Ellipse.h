// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.3.1/Shapes/Ellipse.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.EllipticalShape.h>
#include <Fuse.Drawing.IDrawObjectWatcherFeedback.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Ellipse;}}}
namespace g{namespace Fuse{namespace Drawing{struct Surface;}}}
namespace g{namespace Fuse{namespace Drawing{struct SurfacePath;}}}
namespace g{namespace Fuse{struct HitTestContext;}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class Ellipse :28
// {
::g::Fuse::Controls::Shape_type* Ellipse_typeof();
void Ellipse__CreateNativeView_fn(Ellipse* __this, uObject** __retval);
void Ellipse__CreateSurfacePath_fn(Ellipse* __this, ::g::Fuse::Drawing::Surface* surface, ::g::Fuse::Drawing::SurfacePath** __retval);
void Ellipse__OnHitTestLocalVisual_fn(Ellipse* __this, ::g::Fuse::HitTestContext* htc);

struct Ellipse : ::g::Fuse::Controls::EllipticalShape
{
};
// }

}}} // ::g::Fuse::Controls
