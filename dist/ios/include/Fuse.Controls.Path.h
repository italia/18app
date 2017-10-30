// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.3.1/Shapes/Path.Surface.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Drawing.IDrawObjectWatcherFeedback.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.Drawing.LineSegment.h>
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
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Path;}}}
namespace g{namespace Fuse{namespace Controls{struct Path__Positioning;}}}
namespace g{namespace Fuse{namespace Drawing{struct Surface;}}}
namespace g{namespace Fuse{namespace Drawing{struct SurfacePath;}}}
namespace g{namespace Fuse{namespace Internal{struct SizingContainer;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class Path :8
// {
::g::Fuse::Controls::Shape_type* Path_typeof();
void Path__CalcNaturalExtents_fn(Path* __this, ::g::Uno::Rect* __retval);
void Path__CalcPositioning_fn(Path* __this, Path__Positioning* __retval);
void Path__CalcShapeExtents_fn(Path* __this, ::g::Uno::Rect* __retval);
void Path__CreateSurfacePath_fn(Path* __this, ::g::Fuse::Drawing::Surface* surface, ::g::Fuse::Drawing::SurfacePath** __retval);
void Path__get_Extents_fn(Path* __this, ::g::Uno::Float4* __retval);
void Path__set_Extents_fn(Path* __this, ::g::Uno::Float4* value);
void Path__get_FillRule_fn(Path* __this, int* __retval);
void Path__set_FillRule_fn(Path* __this, int* value);
void Path__get_FitMode_fn(Path* __this, int* __retval);
void Path__set_FitMode_fn(Path* __this, int* value);
void Path__GetContentSize_fn(Path* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void Path__GetDesiredContentSize_fn(Path* __this, ::g::Uno::Float2* __retval);
void Path__InvalidateSurfacePath_fn(Path* __this);
void Path__OnShapeLayoutChanged_fn(Path* __this);
void Path__get_Sizing_fn(Path* __this, ::g::Fuse::Internal::SizingContainer** __retval);

struct Path : ::g::Fuse::Controls::Shape
{
    ::g::Uno::Float4 _extents;
    int _fillRule;
    int _fitMode;
    uStrong< ::g::Uno::Collections::List*> _segments;
    uStrong< ::g::Fuse::Internal::SizingContainer*> sizing;

    ::g::Uno::Rect CalcNaturalExtents();
    Path__Positioning CalcPositioning();
    ::g::Uno::Float4 Extents();
    void Extents(::g::Uno::Float4 value);
    int FillRule();
    void FillRule(int value);
    int FitMode();
    void FitMode(int value);
    ::g::Uno::Float2 GetDesiredContentSize();
    void OnShapeLayoutChanged();
    ::g::Fuse::Internal::SizingContainer* Sizing();
};
// }

}}} // ::g::Fuse::Controls
