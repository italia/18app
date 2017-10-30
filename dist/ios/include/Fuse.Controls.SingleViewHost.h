// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.3.1/SingleViewHost.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Elements.ITreeRenderer.h>
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
#include <Uno.IDisposable.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ViewHandle;}}}}
namespace g{namespace Fuse{namespace Controls{struct SingleViewHost;}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct VisualBounds;}}
namespace g{namespace Uno{struct EventArgs;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{

// internal sealed extern class SingleViewHost :10
// {
struct SingleViewHost_type : ::g::Fuse::Controls::Control_type
{
    ::g::Fuse::Elements::ITreeRenderer interface17;
    ::g::Uno::IDisposable interface18;
};

SingleViewHost_type* SingleViewHost_typeof();
void SingleViewHost__ctor_5_fn(SingleViewHost* __this, int* initialState, ::g::Fuse::Controls::Native::ViewHandle* viewHandle, uObject* renderer);
void SingleViewHost__CalcRenderBounds_fn(SingleViewHost* __this, ::g::Fuse::VisualBounds** __retval);
void SingleViewHost__CalcTransform_fn(SingleViewHost* __this, ::g::Uno::Float4x4* __retval);
void SingleViewHost__Dispose_fn(SingleViewHost* __this);
void SingleViewHost__DrawWithChildren_fn(SingleViewHost* __this, ::g::Fuse::DrawContext* dc);
void SingleViewHost__FuseElementsITreeRendererBackgroundChanged_fn(SingleViewHost* __this, ::g::Fuse::Elements::Element* e, ::g::Fuse::Drawing::Brush* background);
void SingleViewHost__FuseElementsITreeRendererClipToBoundsChanged_fn(SingleViewHost* __this, ::g::Fuse::Elements::Element* e, bool* clipToBounds);
void SingleViewHost__FuseElementsITreeRendererHitTestModeChanged_fn(SingleViewHost* __this, ::g::Fuse::Elements::Element* e, bool* enabled);
void SingleViewHost__FuseElementsITreeRendererIsEnabledChanged_fn(SingleViewHost* __this, ::g::Fuse::Elements::Element* e, bool* isEnabled);
void SingleViewHost__FuseElementsITreeRendererIsVisibleChanged_fn(SingleViewHost* __this, ::g::Fuse::Elements::Element* e, bool* isVisible);
void SingleViewHost__FuseElementsITreeRendererMeasure_fn(SingleViewHost* __this, ::g::Fuse::Elements::Element* e, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* size, bool* __retval);
void SingleViewHost__FuseElementsITreeRendererOpacityChanged_fn(SingleViewHost* __this, ::g::Fuse::Elements::Element* e, float* opacity);
void SingleViewHost__FuseElementsITreeRendererPlaced_fn(SingleViewHost* __this, ::g::Fuse::Elements::Element* e);
void SingleViewHost__FuseElementsITreeRendererRooted_fn(SingleViewHost* __this, ::g::Fuse::Elements::Element* e);
void SingleViewHost__FuseElementsITreeRendererRootingStarted_fn(SingleViewHost* __this, ::g::Fuse::Elements::Element* e);
void SingleViewHost__FuseElementsITreeRendererTransformChanged_fn(SingleViewHost* __this, ::g::Fuse::Elements::Element* e);
void SingleViewHost__FuseElementsITreeRendererUnrooted_fn(SingleViewHost* __this, ::g::Fuse::Elements::Element* e);
void SingleViewHost__FuseElementsITreeRendererZOrderChanged_fn(SingleViewHost* __this, ::g::Fuse::Elements::Element* e, uArray* zorder);
void SingleViewHost__GetContentSize_fn(SingleViewHost* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void SingleViewHost__New2_fn(int* initialState, ::g::Fuse::Controls::Native::ViewHandle* viewHandle, uObject* renderer, SingleViewHost** __retval);
void SingleViewHost__OnInvalidateVisual_fn(SingleViewHost* __this);
void SingleViewHost__OnInvalidateWorldTransform_fn(SingleViewHost* __this, uObject* sender, ::g::Uno::EventArgs* args);
void SingleViewHost__OnRooted_fn(SingleViewHost* __this);
void SingleViewHost__OnUnrooted_fn(SingleViewHost* __this);
void SingleViewHost__get_RenderToTexture_fn(SingleViewHost* __this, int* __retval);
void SingleViewHost__set_RenderToTexture_fn(SingleViewHost* __this, int* value);
void SingleViewHost__SetOffscreen_fn(SingleViewHost* __this);
void SingleViewHost__SetOnscreen_fn(SingleViewHost* __this);
void SingleViewHost__get_TreeRenderer_fn(SingleViewHost* __this, uObject** __retval);
void SingleViewHost__UpdateHostViewTransform_fn(SingleViewHost* __this);

struct SingleViewHost : ::g::Fuse::Controls::Control
{
    uStrong<uObject*> _changingState;
    bool _draw;
    bool _isVisible;
    bool _offscreen;
    uStrong<uObject*> _proxyHost;
    uStrong<uObject*> _renderer;
    int _renderState;
    bool _updateTransform;
    uStrong< ::g::Fuse::Controls::Native::ViewHandle*> _viewHandle;

    void ctor_5(int initialState, ::g::Fuse::Controls::Native::ViewHandle* viewHandle, uObject* renderer);
    ::g::Uno::Float4x4 CalcTransform();
    void Dispose();
    void OnInvalidateWorldTransform(uObject* sender, ::g::Uno::EventArgs* args);
    int RenderToTexture();
    void RenderToTexture(int value);
    void SetOffscreen();
    void SetOnscreen();
    void UpdateHostViewTransform();
    static SingleViewHost* New2(int initialState, ::g::Fuse::Controls::Native::ViewHandle* viewHandle, uObject* renderer);
};
// }

}}} // ::g::Fuse::Controls
