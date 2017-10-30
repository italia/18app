// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.3.1/GraphicsView.ux.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.IProxyHost.h>
#include <Fuse.Controls.LayoutControl.h>
#include <Fuse.Elements.ITreeRenderer.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.ICommonViewport.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.IRenderViewport.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.IViewport.h>
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
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ViewHandle;}}}}
namespace g{namespace Fuse{namespace Controls{struct GraphicsView;}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct FrustumViewport;}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct OrthographicFrustum;}}
namespace g{namespace Fuse{struct Ray;}}
namespace g{namespace Fuse{struct VisualBounds;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class GraphicsView :106
// {
struct GraphicsView_type : ::g::Fuse::Controls::Control_type
{
    ::g::Fuse::IViewport interface17;
    ::g::Fuse::IRenderViewport interface18;
    ::g::Fuse::Elements::ITreeRenderer interface19;
    ::g::Fuse::Controls::IProxyHost interface20;
    ::g::Fuse::ICommonViewport interface21;
};

GraphicsView_type* GraphicsView_typeof();
void GraphicsView__ctor_6_fn(GraphicsView* __this);
void GraphicsView__get_BaseTreeRenderer_fn(GraphicsView* __this, uObject** __retval);
void GraphicsView__CalcRenderBounds_fn(GraphicsView* __this, ::g::Fuse::VisualBounds** __retval);
void GraphicsView__get_Color_fn(GraphicsView* __this, ::g::Uno::Float4* __retval);
void GraphicsView__set_Color_fn(GraphicsView* __this, ::g::Uno::Float4* value);
void GraphicsView__DrawFrame_fn(GraphicsView* __this);
void GraphicsView__DrawWithChildren_fn(GraphicsView* __this, ::g::Fuse::DrawContext* dc);
void GraphicsView__FuseControlsIProxyHostInsert_fn(GraphicsView* __this, ::g::Fuse::Controls::Native::ViewHandle* viewHandle);
void GraphicsView__FuseControlsIProxyHostRemove_fn(GraphicsView* __this, ::g::Fuse::Controls::Native::ViewHandle* viewHandle);
void GraphicsView__FuseControlsIProxyHostget_WorldTransformInverse_fn(GraphicsView* __this, ::g::Uno::Float4x4* __retval);
void GraphicsView__FuseElementsITreeRendererBackgroundChanged_fn(GraphicsView* __this, ::g::Fuse::Elements::Element* e, ::g::Fuse::Drawing::Brush* background);
void GraphicsView__FuseElementsITreeRendererClipToBoundsChanged_fn(GraphicsView* __this, ::g::Fuse::Elements::Element* e, bool* clipToBounds);
void GraphicsView__FuseElementsITreeRendererHitTestModeChanged_fn(GraphicsView* __this, ::g::Fuse::Elements::Element* e, bool* enabled);
void GraphicsView__FuseElementsITreeRendererIsEnabledChanged_fn(GraphicsView* __this, ::g::Fuse::Elements::Element* e, bool* isEnabled);
void GraphicsView__FuseElementsITreeRendererIsVisibleChanged_fn(GraphicsView* __this, ::g::Fuse::Elements::Element* e, bool* isVisible);
void GraphicsView__FuseElementsITreeRendererMeasure_fn(GraphicsView* __this, ::g::Fuse::Elements::Element* e, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* size, bool* __retval);
void GraphicsView__FuseElementsITreeRendererOpacityChanged_fn(GraphicsView* __this, ::g::Fuse::Elements::Element* e, float* opacity);
void GraphicsView__FuseElementsITreeRendererPlaced_fn(GraphicsView* __this, ::g::Fuse::Elements::Element* e);
void GraphicsView__FuseElementsITreeRendererRooted_fn(GraphicsView* __this, ::g::Fuse::Elements::Element* e);
void GraphicsView__FuseElementsITreeRendererRootingStarted_fn(GraphicsView* __this, ::g::Fuse::Elements::Element* e);
void GraphicsView__FuseElementsITreeRendererTransformChanged_fn(GraphicsView* __this, ::g::Fuse::Elements::Element* e);
void GraphicsView__FuseElementsITreeRendererUnrooted_fn(GraphicsView* __this, ::g::Fuse::Elements::Element* e);
void GraphicsView__FuseElementsITreeRendererZOrderChanged_fn(GraphicsView* __this, ::g::Fuse::Elements::Element* e, uArray* zorder);
void GraphicsView__GetTreeRenderer_fn(GraphicsView* __this, ::g::Fuse::Elements::Element* e, uObject** __retval);
void GraphicsView__InitializeUX_fn(GraphicsView* __this);
void GraphicsView__New3_fn(GraphicsView** __retval);
void GraphicsView__OnEnteringBackground_fn(GraphicsView* __this, int* s);
void GraphicsView__OnEnteringForeground_fn(GraphicsView* __this, int* s);
void GraphicsView__OnInvalidateVisual_fn(GraphicsView* __this);
void GraphicsView__OnRooted_fn(GraphicsView* __this);
void GraphicsView__OnUnrooted_fn(GraphicsView* __this);
void GraphicsView__get_PixelsPerPoint_fn(GraphicsView* __this, float* __retval);
void GraphicsView__PointToWorldRay_fn(GraphicsView* __this, ::g::Uno::Float2* pixelPos, ::g::Fuse::Ray* __retval);
void GraphicsView__ScheduleFrame_fn(GraphicsView* __this);
void GraphicsView__get_Size_fn(GraphicsView* __this, ::g::Uno::Float2* __retval);
void GraphicsView__get_TreeRenderer_fn(GraphicsView* __this, uObject** __retval);
void GraphicsView__get_ViewProjectionTransform_fn(GraphicsView* __this, ::g::Uno::Float4x4* __retval);
void GraphicsView__get_VisualContext_fn(GraphicsView* __this, int* __retval);
void GraphicsView__WorldToLocalRay_fn(GraphicsView* __this, uObject* world, ::g::Fuse::Ray* worldRay, ::g::Fuse::Visual* where, ::g::Fuse::Ray* __retval);

struct GraphicsView : ::g::Fuse::Controls::LayoutControl
{
    ::g::Uno::Float4 _color;
    uStrong< ::g::Fuse::DrawContext*> _dc;
    bool _frameScheduled;
    uStrong< ::g::Fuse::OrthographicFrustum*> _frustum;
    uStrong< ::g::Fuse::FrustumViewport*> _frustumViewport;
    bool _inBackground;
    int rotationHackRedrawCount;

    void ctor_6();
    uObject* BaseTreeRenderer();
    ::g::Uno::Float4 Color();
    void Color(::g::Uno::Float4 value);
    void DrawFrame();
    uObject* GetTreeRenderer(::g::Fuse::Elements::Element* e);
    void InitializeUX();
    void OnEnteringBackground(int s);
    void OnEnteringForeground(int s);
    float PixelsPerPoint();
    ::g::Fuse::Ray PointToWorldRay(::g::Uno::Float2 pixelPos);
    void ScheduleFrame();
    ::g::Uno::Float2 Size();
    ::g::Uno::Float4x4 ViewProjectionTransform();
    ::g::Fuse::Ray WorldToLocalRay(uObject* world, ::g::Fuse::Ray worldRay, ::g::Fuse::Visual* where);
    static GraphicsView* New3();
};
// }

}}} // ::g::Fuse::Controls
