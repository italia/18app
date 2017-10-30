// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.3.1/Shapes/Shape.Resources.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.LayoutControl.h>
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
namespace g{namespace Fuse{namespace Controls{struct Shape;}}}
namespace g{namespace Fuse{namespace Controls{struct Shape__ResourceWatcher;}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct DrawObjectWatcher;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Fuse{namespace Drawing{struct Surface;}}}
namespace g{namespace Fuse{namespace Drawing{struct SurfacePath;}}}
namespace g{namespace Fuse{namespace Triggers{struct BusyTask;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct VisualBounds;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct RootableList;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Controls{

// public interfacemodifiers class Shape :17
// {
struct Shape_type : ::g::Fuse::Controls::Control_type
{
    ::g::Fuse::Drawing::ISurfaceDrawable interface17;
    ::g::Fuse::Drawing::IDrawObjectWatcherFeedback interface18;
    void(*fp_CalcShapeExtents)(::g::Fuse::Controls::Shape*, ::g::Uno::Rect*);
    void(*fp_CreateSurfacePath)(::g::Fuse::Controls::Shape*, ::g::Fuse::Drawing::Surface*, ::g::Fuse::Drawing::SurfacePath**);
    void(*fp_DrawFill)(::g::Fuse::Controls::Shape*, ::g::Fuse::DrawContext*, ::g::Fuse::Drawing::Brush*);
    void(*fp_DrawStroke)(::g::Fuse::Controls::Shape*, ::g::Fuse::DrawContext*, ::g::Fuse::Drawing::Stroke*);
    void(*fp_InvalidateSurfacePath)(::g::Fuse::Controls::Shape*);
    void(*fp_get_NeedSurface)(::g::Fuse::Controls::Shape*, bool*);
};

Shape_type* Shape_typeof();
void Shape__ctor_6_fn(Shape* __this);
void Shape__AddLoadingResource_fn(Shape* __this, ::g::Uno::UX::PropertyObject* res);
void Shape__ArrangePaddingBox_fn(Shape* __this, ::g::Fuse::LayoutParams* lp);
void Shape__CalcRenderBounds_fn(Shape* __this, ::g::Fuse::VisualBounds** __retval);
void Shape__CalcShapeExtents_fn(Shape* __this, ::g::Uno::Rect* __retval);
void Shape__CheckStatus_fn(Shape* __this);
void Shape__get_Color_fn(Shape* __this, ::g::Uno::Float4* __retval);
void Shape__set_Color_fn(Shape* __this, ::g::Uno::Float4* value);
void Shape__DrawFill_fn(Shape* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Brush* fill);
void Shape__DrawStroke_fn(Shape* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Stroke* stroke);
void Shape__DrawVisual_fn(Shape* __this, ::g::Fuse::DrawContext* dc);
void Shape__FastTrackDrawWithOpacity_fn(Shape* __this, ::g::Fuse::DrawContext* dc, bool* __retval);
void Shape__get_Fill_fn(Shape* __this, ::g::Fuse::Drawing::Brush** __retval);
void Shape__set_Fill_fn(Shape* __this, ::g::Fuse::Drawing::Brush* value);
void Shape__get_Fills_fn(Shape* __this, uObject** __retval);
void Shape__FuseDrawingIDrawObjectWatcherFeedbackChanged_fn(Shape* __this, uObject* obj);
void Shape__FuseDrawingIDrawObjectWatcherFeedbackPrepare_fn(Shape* __this, uObject* obj);
void Shape__FuseDrawingIDrawObjectWatcherFeedbackUnprepare_fn(Shape* __this, uObject* obj);
void Shape__FuseDrawingISurfaceDrawableDraw_fn(Shape* __this, ::g::Fuse::Drawing::Surface* surface);
void Shape__FuseDrawingISurfaceDrawableget_ElementSize_fn(Shape* __this, ::g::Uno::Float2* __retval);
void Shape__FuseDrawingISurfaceDrawableget_IsPrimary_fn(Shape* __this, bool* __retval);
void Shape__GetSurfacePath_fn(Shape* __this, ::g::Fuse::Drawing::Surface* surface, ::g::Fuse::Drawing::SurfacePath** __retval);
void Shape__get_HasFills_fn(Shape* __this, bool* __retval);
void Shape__get_HasLoadingResources_fn(Shape* __this, bool* __retval);
void Shape__get_HasStrokes_fn(Shape* __this, bool* __retval);
void Shape__get_HitTestLocalVisualBounds_fn(Shape* __this, ::g::Fuse::VisualBounds** __retval);
void Shape__InvalidateSurfacePath_fn(Shape* __this);
void Shape__get_LoadingResources_fn(Shape* __this, ::g::Uno::Collections::Dictionary** __retval);
void Shape__get_NativeShape_fn(Shape* __this, uObject** __retval);
void Shape__get_NeedSurface_fn(Shape* __this, bool* __retval);
void Shape__OnColorChanged_fn(Shape* __this, ::g::Uno::Float4* value, uObject* origin);
void Shape__OnFillAdded_fn(Shape* __this, ::g::Fuse::Drawing::Brush* f);
void Shape__OnFillRemoved_fn(Shape* __this, ::g::Fuse::Drawing::Brush* f);
void Shape__OnLoadingResourcePropertyChanged_fn(Shape* __this, ::g::Uno::UX::PropertyObject* sender, ::g::Uno::UX::Selector* property);
void Shape__OnLoadingResourceRooted_fn(Shape* __this);
void Shape__OnLoadingResourceUnrooted_fn(Shape* __this);
void Shape__OnPropertyChanged2_fn(Shape* __this, ::g::Uno::UX::PropertyObject* sender, ::g::Uno::UX::Selector* property);
void Shape__OnRooted_fn(Shape* __this);
void Shape__OnStrokeAdded_fn(Shape* __this, ::g::Fuse::Drawing::Stroke* s);
void Shape__OnStrokeRemoved_fn(Shape* __this, ::g::Fuse::Drawing::Stroke* s);
void Shape__OnSurfaceRooted_fn(Shape* __this);
void Shape__OnSurfaceUnrooted_fn(Shape* __this);
void Shape__OnUnrooted_fn(Shape* __this);
void Shape__PrepareDraw_fn(Shape* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize);
void Shape__PushPropertiesToNativeView_fn(Shape* __this);
void Shape__RemoveLoadingResource_fn(Shape* __this, ::g::Uno::UX::PropertyObject* res);
void Shape__SetColor_fn(Shape* __this, ::g::Uno::Float4* value, uObject* origin);
void Shape__get_Smoothness_fn(Shape* __this, float* __retval);
void Shape__set_Smoothness_fn(Shape* __this, float* value);
void Shape__get_Stroke_fn(Shape* __this, ::g::Fuse::Drawing::Stroke** __retval);
void Shape__set_Stroke_fn(Shape* __this, ::g::Fuse::Drawing::Stroke* value);
void Shape__get_Strokes_fn(Shape* __this, uObject** __retval);
void Shape__get_Surface_fn(Shape* __this, ::g::Fuse::Drawing::Surface** __retval);
void Shape__UpdateNativeShape_fn(Shape* __this);
void Shape__get_Watcher_fn(Shape* __this, ::g::Fuse::Drawing::DrawObjectWatcher** __retval);

struct Shape : ::g::Fuse::Controls::LayoutControl
{
    uStrong< ::g::Uno::Collections::RootableList*> _fills;
    static uSStrong< ::g::Fuse::PropertyHandle*> _loadingResourcesHandle_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _loadingResourcesHandle() { return _loadingResourcesHandle_; }
    uStrong< ::g::Fuse::Triggers::BusyTask*> _loadingResourceTask;
    static ::g::Uno::UX::Selector _offsetName_;
    static ::g::Uno::UX::Selector& _offsetName() { return _offsetName_; }
    float _smoothness;
    uStrong< ::g::Uno::Collections::RootableList*> _strokes;
    uStrong< ::g::Fuse::Drawing::Surface*> _surface1;
    uStrong< ::g::Fuse::Drawing::SurfacePath*> _surfacePath;
    bool _surfacePathDirty;
    uStrong< ::g::Fuse::Drawing::DrawObjectWatcher*> _watcher;
    static ::g::Uno::UX::Selector _widthName_;
    static ::g::Uno::UX::Selector& _widthName() { return _widthName_; }
    static ::g::Uno::UX::Selector ColorPropertyName_;
    static ::g::Uno::UX::Selector& ColorPropertyName() { return ColorPropertyName_; }

    void ctor_6();
    void AddLoadingResource(::g::Uno::UX::PropertyObject* res);
    ::g::Uno::Rect CalcShapeExtents();
    void CheckStatus();
    ::g::Uno::Float4 Color();
    void Color(::g::Uno::Float4 value);
    ::g::Fuse::Drawing::SurfacePath* CreateSurfacePath(::g::Fuse::Drawing::Surface* surface) { ::g::Fuse::Drawing::SurfacePath* __retval; return (((Shape_type*)__type)->fp_CreateSurfacePath)(this, surface, &__retval), __retval; }
    void DrawFill(::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Brush* fill) { (((Shape_type*)__type)->fp_DrawFill)(this, dc, fill); }
    void DrawStroke(::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Stroke* stroke) { (((Shape_type*)__type)->fp_DrawStroke)(this, dc, stroke); }
    ::g::Fuse::Drawing::Brush* Fill();
    void Fill(::g::Fuse::Drawing::Brush* value);
    uObject* Fills();
    ::g::Fuse::Drawing::SurfacePath* GetSurfacePath(::g::Fuse::Drawing::Surface* surface);
    bool HasFills();
    bool HasLoadingResources();
    bool HasStrokes();
    void InvalidateSurfacePath() { (((Shape_type*)__type)->fp_InvalidateSurfacePath)(this); }
    ::g::Uno::Collections::Dictionary* LoadingResources();
    uObject* NativeShape();
    bool NeedSurface() { bool __retval; return (((Shape_type*)__type)->fp_get_NeedSurface)(this, &__retval), __retval; }
    void OnColorChanged(::g::Uno::Float4 value, uObject* origin);
    void OnFillAdded(::g::Fuse::Drawing::Brush* f);
    void OnFillRemoved(::g::Fuse::Drawing::Brush* f);
    void OnLoadingResourcePropertyChanged(::g::Uno::UX::PropertyObject* sender, ::g::Uno::UX::Selector property);
    void OnLoadingResourceRooted();
    void OnLoadingResourceUnrooted();
    void OnStrokeAdded(::g::Fuse::Drawing::Stroke* s);
    void OnStrokeRemoved(::g::Fuse::Drawing::Stroke* s);
    void OnSurfaceRooted();
    void OnSurfaceUnrooted();
    void PrepareDraw(::g::Fuse::DrawContext* dc, ::g::Uno::Float2 canvasSize);
    void RemoveLoadingResource(::g::Uno::UX::PropertyObject* res);
    void SetColor(::g::Uno::Float4 value, uObject* origin);
    float Smoothness();
    void Smoothness(float value);
    ::g::Fuse::Drawing::Stroke* Stroke();
    void Stroke(::g::Fuse::Drawing::Stroke* value);
    uObject* Strokes();
    ::g::Fuse::Drawing::Surface* Surface();
    void UpdateNativeShape();
    ::g::Fuse::Drawing::DrawObjectWatcher* Watcher();
    static ::g::Uno::Rect CalcShapeExtents(Shape* __this);
    static void DrawFill(Shape* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Brush* fill) { Shape__DrawFill_fn(__this, dc, fill); }
    static void DrawStroke(Shape* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Stroke* stroke) { Shape__DrawStroke_fn(__this, dc, stroke); }
    static void InvalidateSurfacePath(Shape* __this) { Shape__InvalidateSurfacePath_fn(__this); }
    static bool NeedSurface(Shape* __this) { bool __retval; return Shape__get_NeedSurface_fn(__this, &__retval), __retval; }
};

}}} // ::g::Fuse::Controls

#include <Fuse.LayoutParams.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Rect.h>
#include <Uno.UX.Selector.h>

namespace g{
namespace Fuse{
namespace Controls{

inline ::g::Uno::Rect Shape::CalcShapeExtents() { ::g::Uno::Rect __retval; return (((Shape_type*)__type)->fp_CalcShapeExtents)(this, &__retval), __retval; }
inline ::g::Uno::Rect Shape::CalcShapeExtents(Shape* __this) { ::g::Uno::Rect __retval; return Shape__CalcShapeExtents_fn(__this, &__retval), __retval; }
// }

}}} // ::g::Fuse::Controls
