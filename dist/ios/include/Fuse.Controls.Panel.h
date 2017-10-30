// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.3.1/Panel.Freeze.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.LayoutControl.h>
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
#include <Uno.Float2.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{namespace Drawing{struct Surface;}}}
namespace g{namespace Fuse{namespace Triggers{struct BusyTask;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct VisualBounds;}}
namespace g{namespace Uno{namespace Graphics{struct Framebuffer;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial class Panel :10
// {
struct Panel_type : ::g::Fuse::Controls::Control_type
{
    ::g::Fuse::Drawing::ISurfaceDrawable interface17;
};

Panel_type* Panel_typeof();
void Panel__ctor_6_fn(Panel* __this);
void Panel__ArrangePaddingBox_fn(Panel* __this, ::g::Fuse::LayoutParams* lp);
void Panel__CleanupBuffer_fn(Panel* __this);
void Panel__CleanupListener_fn(Panel* __this, bool* nextFrame);
void Panel__get_Color_fn(Panel* __this, ::g::Uno::Float4* __retval);
void Panel__set_Color_fn(Panel* __this, ::g::Uno::Float4* value);
void Panel__get_DeferFreeze_fn(Panel* __this, int* __retval);
void Panel__set_DeferFreeze_fn(Panel* __this, int* value);
void Panel__Draw_fn(Panel* __this, ::g::Fuse::DrawContext* dc);
void Panel__EndBusy_fn(Panel* __this);
void Panel__FastTrackDrawWithOpacity_fn(Panel* __this, ::g::Fuse::DrawContext* dc, bool* __retval);
void Panel__FreezeRooted_fn(Panel* __this);
void Panel__FreezeUnrooted_fn(Panel* __this);
void Panel__FuseDrawingISurfaceDrawableDraw_fn(Panel* __this, ::g::Fuse::Drawing::Surface* surface);
void Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn(Panel* __this, ::g::Uno::Float2* __retval);
void Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn(Panel* __this, bool* __retval);
void Panel__GetContentSize_fn(Panel* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void Panel__get_HasFreezePrepared_fn(Panel* __this, bool* __retval);
void Panel__get_IsFrozen_fn(Panel* __this, bool* __retval);
void Panel__set_IsFrozen_fn(Panel* __this, bool* value);
void Panel__get_IsLayoutRoot_fn(Panel* __this, bool* __retval);
void Panel__get_LocalRenderBounds_fn(Panel* __this, ::g::Fuse::VisualBounds** __retval);
void Panel__New3_fn(Panel** __retval);
void Panel__OnColorChanged_fn(Panel* __this, ::g::Uno::Float4* value, uObject* origin);
void Panel__OnPrepared_fn(Panel* __this, ::g::Fuse::DrawContext* dc);
void Panel__OnRooted_fn(Panel* __this);
void Panel__OnUnrooted_fn(Panel* __this);
void Panel__get_Scale_fn(Panel* __this, ::g::Uno::Float2* __retval);
void Panel__SetColor_fn(Panel* __this, ::g::Uno::Float4* value, uObject* origin);
void Panel__SetupListener_fn(Panel* __this);

struct Panel : ::g::Fuse::Controls::LayoutControl
{
    int _deferFreeze;
    bool _freezeAwaitPrepared;
    uStrong< ::g::Fuse::Triggers::BusyTask*> _freezeBusyTask;
    ::g::Uno::Float2 _frozenActualSize;
    uStrong< ::g::Uno::Graphics::Framebuffer*> _frozenBuffer;
    uStrong< ::g::Fuse::VisualBounds*> _frozenRenderBounds;
    bool _isFrozen;
    static ::g::Uno::UX::Selector ColorPropertyName_;
    static ::g::Uno::UX::Selector& ColorPropertyName() { return ColorPropertyName_; }

    void ctor_6();
    void CleanupBuffer();
    void CleanupListener(bool nextFrame);
    ::g::Uno::Float4 Color();
    void Color(::g::Uno::Float4 value);
    int DeferFreeze();
    void DeferFreeze(int value);
    void EndBusy();
    void FreezeRooted();
    void FreezeUnrooted();
    bool HasFreezePrepared();
    bool IsFrozen();
    void IsFrozen(bool value);
    void OnColorChanged(::g::Uno::Float4 value, uObject* origin);
    void OnPrepared(::g::Fuse::DrawContext* dc);
    ::g::Uno::Float2 Scale();
    void SetColor(::g::Uno::Float4 value, uObject* origin);
    void SetupListener();
    static Panel* New3();
};
// }

}}} // ::g::Fuse::Controls
