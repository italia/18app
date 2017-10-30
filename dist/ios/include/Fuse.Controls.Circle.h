// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.3.1/Shapes/Circle.uno.
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
namespace g{namespace Fuse{namespace Controls{struct Circle;}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Fuse{namespace Drawing{struct Surface;}}}
namespace g{namespace Fuse{namespace Drawing{struct SurfacePath;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct HitTestContext;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class Circle :58
// {
::g::Fuse::Controls::Shape_type* Circle_typeof();
void Circle__ctor_8_fn(Circle* __this);
void Circle__get_CanvasAngles_fn(Circle* __this, ::g::Uno::Float2* __retval);
void Circle__get_Center_fn(Circle* __this, ::g::Uno::Float2* __retval);
void Circle__CreateNativeView_fn(Circle* __this, uObject** __retval);
void Circle__CreateSurfacePath_fn(Circle* __this, ::g::Fuse::Drawing::Surface* surface, ::g::Fuse::Drawing::SurfacePath** __retval);
void Circle__DrawFill_fn(Circle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Brush* fill);
void Circle__DrawStroke_fn(Circle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Stroke* stroke);
void Circle__InvalidateSurfacePath_fn(Circle* __this);
void Circle__get_NativeCircle_fn(Circle* __this, uObject** __retval);
void Circle__get_NeedSurface_fn(Circle* __this, bool* __retval);
void Circle__New3_fn(Circle** __retval);
void Circle__OnHitTestLocalVisual_fn(Circle* __this, ::g::Fuse::HitTestContext* htc);
void Circle__PushPropertiesToNativeView_fn(Circle* __this);
void Circle__get_Radius_fn(Circle* __this, float* __retval);
void Circle__UpdateNativeCircle_fn(Circle* __this);

struct Circle : ::g::Fuse::Controls::EllipticalShape
{
    void ctor_8();
    ::g::Uno::Float2 CanvasAngles();
    ::g::Uno::Float2 Center();
    uObject* NativeCircle();
    float Radius();
    void UpdateNativeCircle();
    static Circle* New3();
};
// }

}}} // ::g::Fuse::Controls
