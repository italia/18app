// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls/1.3.1/Control.Background.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Elements.Element.h>
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
namespace g{namespace Fuse{namespace Controls{struct Control;}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct HitTestContext;}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct VisualBounds;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{

// public interfacemodifiers class Control :9
// {
struct Control_type : ::g::Fuse::Elements::Element_type
{
    void(*fp_CompensateForScrollView)(::g::Fuse::Controls::Control*, ::g::Uno::Float4x4*);
    void(*fp_CreateNativeView)(::g::Fuse::Controls::Control*, uObject**);
    void(*fp_DrawVisual)(::g::Fuse::Controls::Control*, ::g::Fuse::DrawContext*);
    void(*fp_PushPropertiesToNativeView)(::g::Fuse::Controls::Control*);
};

Control_type* Control_typeof();
void Control__ctor_4_fn(Control* __this);
void Control__get_Background_fn(Control* __this, ::g::Fuse::Drawing::Brush** __retval);
void Control__set_Background_fn(Control* __this, ::g::Fuse::Drawing::Brush* value);
void Control__CalcRenderBounds_fn(Control* __this, ::g::Fuse::VisualBounds** __retval);
void Control__CompensateForScrollView_fn(Control* __this, ::g::Uno::Float4x4* t);
void Control__CreateNativeView_fn(Control* __this, uObject** __retval);
void Control__DrawBackground_fn(Control* __this, ::g::Fuse::DrawContext* dc, float* opacity);
void Control__DrawVisual_fn(Control* __this, ::g::Fuse::DrawContext* dc);
void Control__GetContentSize_fn(Control* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void Control__get_GraphicsVisual_fn(Control* __this, ::g::Fuse::Visual** __retval);
void Control__set_GraphicsVisual_fn(Control* __this, ::g::Fuse::Visual* value);
void Control__get_HitTestLocalVisualBounds_fn(Control* __this, ::g::Fuse::VisualBounds** __retval);
void Control__InstantiateNativeView_fn(Control* __this, uObject** __retval);
void Control__get_NativeView_fn(Control* __this, uObject** __retval);
void Control__set_NativeView_fn(Control* __this, uObject* value);
void Control__OnBackgroundChanged_fn(Control* __this);
void Control__OnDraw_fn(Control* __this, ::g::Fuse::DrawContext* dc);
void Control__OnHitTestLocalVisual_fn(Control* __this, ::g::Fuse::HitTestContext* htc);
void Control__OnInvalidateVisual_fn(Control* __this);
void Control__OnPropertyChanged2_fn(Control* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop);
void Control__OnRooted_fn(Control* __this);
void Control__OnUnrooted_fn(Control* __this);
void Control__PushPropertiesToNativeView_fn(Control* __this);
void Control__RootBackground_fn(Control* __this);
void Control__SetBackground_fn(Control* __this, ::g::Fuse::Drawing::Brush* value);
void Control__UnrootBackground_fn(Control* __this);

struct Control : ::g::Fuse::Elements::Element
{
    uStrong< ::g::Fuse::Drawing::Brush*> _background;
    bool _backgroundRooted;
    uStrong<uObject*> _nativeView;
    uStrong< ::g::Fuse::Visual*> _GraphicsVisual;

    void ctor_4();
    ::g::Fuse::Drawing::Brush* Background();
    void Background(::g::Fuse::Drawing::Brush* value);
    void CompensateForScrollView(::g::Uno::Float4x4* t) { (((Control_type*)__type)->fp_CompensateForScrollView)(this, t); }
    uObject* CreateNativeView() { uObject* __retval; return (((Control_type*)__type)->fp_CreateNativeView)(this, &__retval), __retval; }
    void DrawBackground(::g::Fuse::DrawContext* dc, float opacity);
    void DrawVisual(::g::Fuse::DrawContext* dc) { (((Control_type*)__type)->fp_DrawVisual)(this, dc); }
    ::g::Fuse::Visual* GraphicsVisual();
    void GraphicsVisual(::g::Fuse::Visual* value);
    uObject* InstantiateNativeView();
    uObject* NativeView();
    void NativeView(uObject* value);
    void OnBackgroundChanged();
    void PushPropertiesToNativeView() { (((Control_type*)__type)->fp_PushPropertiesToNativeView)(this); }
    void RootBackground();
    void SetBackground(::g::Fuse::Drawing::Brush* value);
    void UnrootBackground();
    static void CompensateForScrollView(Control* __this, ::g::Uno::Float4x4* t) { Control__CompensateForScrollView_fn(__this, t); }
    static uObject* CreateNativeView(Control* __this) { uObject* __retval; return Control__CreateNativeView_fn(__this, &__retval), __retval; }
    static void DrawVisual(Control* __this, ::g::Fuse::DrawContext* dc) { Control__DrawVisual_fn(__this, dc); }
    static void PushPropertiesToNativeView(Control* __this) { Control__PushPropertiesToNativeView_fn(__this); }
};
// }

}}} // ::g::Fuse::Controls
