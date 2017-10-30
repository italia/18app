// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/AspectBoxSizing.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Elements.Element.GMSCacheItem.h>
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
#include <Uno.UX.Size.h>
namespace g{namespace Fuse{namespace Effects{struct Effect;}}}
namespace g{namespace Fuse{namespace Elements{struct BoxSizing;}}}
namespace g{namespace Fuse{namespace Elements{struct Cache;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct ElementBatchEntry;}}}
namespace g{namespace Fuse{namespace Elements{struct ElementBatcher;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct FastMatrix;}}
namespace g{namespace Fuse{struct HitTestContext;}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct VisualBounds;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Graphics{struct Framebuffer;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{namespace Uno{namespace UX{struct Size2;}}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Rect;}}
namespace g{namespace Uno{struct Recti;}}

namespace g{
namespace Fuse{
namespace Elements{

// public interfacemodifiers class Element :102
// {
struct Element_type : ::g::Fuse::Visual_type
{
    ::g::Fuse::Triggers::Actions::IShow interface12;
    ::g::Fuse::Triggers::Actions::IHide interface13;
    ::g::Fuse::Triggers::Actions::ICollapse interface14;
    ::g::Fuse::IActualPlacement interface15;
    ::g::Fuse::Animations::IResize interface16;
    void(*fp_ArrangePaddingBox)(::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*);
    void(*fp_CalcRenderBounds)(::g::Fuse::Elements::Element*, ::g::Fuse::VisualBounds**);
    void(*fp_DrawWithChildren)(::g::Fuse::Elements::Element*, ::g::Fuse::DrawContext*);
    void(*fp_FastTrackDrawWithOpacity)(::g::Fuse::Elements::Element*, ::g::Fuse::DrawContext*, bool*);
    void(*fp_GetContentSize)(::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*);
    void(*fp_get_HitTestLocalVisualBounds)(::g::Fuse::Elements::Element*, ::g::Fuse::VisualBounds**);
    void(*fp_OnDraw)(::g::Fuse::Elements::Element*, ::g::Fuse::DrawContext*);
    void(*fp_OnHitTestLocalVisual)(::g::Fuse::Elements::Element*, ::g::Fuse::HitTestContext*);
    void(*fp_get_TreeRenderer)(::g::Fuse::Elements::Element*, uObject**);
};

Element_type* Element_typeof();
void Element__ctor_3_fn(Element* __this);
void Element__get_AbsoluteViewportOrigin_fn(Element* __this, ::g::Uno::Float2* __retval);
void Element__get_ActualAnchor_fn(Element* __this, ::g::Uno::Float2* __retval);
void Element__set_ActualAnchor_fn(Element* __this, ::g::Uno::Float2* value);
void Element__get_ActualPosition_fn(Element* __this, ::g::Uno::Float2* __retval);
void Element__get_ActualSize_fn(Element* __this, ::g::Uno::Float2* __retval);
void Element__get_Alignment_fn(Element* __this, int* __retval);
void Element__set_Alignment_fn(Element* __this, int* value);
void Element__get_AncestorElement_fn(Element* __this, Element** __retval);
void Element__get_Anchor_fn(Element* __this, ::g::Uno::UX::Size2* __retval);
void Element__set_Anchor_fn(Element* __this, ::g::Uno::UX::Size2* value);
void Element__ArrangePaddingBox_fn(Element* __this, ::g::Fuse::LayoutParams* lp);
void Element__get_Aspect_fn(Element* __this, float* __retval);
void Element__set_Aspect_fn(Element* __this, float* value);
void Element__get_AspectConstraint_fn(Element* __this, int* __retval);
void Element__set_AspectConstraint_fn(Element* __this, int* value);
void Element__get_BoxSizing_fn(Element* __this, int* __retval);
void Element__set_BoxSizing_fn(Element* __this, int* value);
void Element__get_BoxSizingObject_fn(Element* __this, ::g::Fuse::Elements::BoxSizing** __retval);
void Element__get_Cache_fn(Element* __this, ::g::Fuse::Elements::Cache** __retval);
void Element__get_CachingMode_fn(Element* __this, int* __retval);
void Element__set_CachingMode_fn(Element* __this, int* value);
void Element__CalcRenderBounds_fn(Element* __this, ::g::Fuse::VisualBounds** __retval);
void Element__CalcRenderBoundsWithEffects_fn(Element* __this, ::g::Fuse::VisualBounds** __retval);
void Element__get_CanAdjustMarginBox_fn(Element* __this, bool* __retval);
void Element__CaptureRegion_fn(Element* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* region, ::g::Uno::Float2* padding, ::g::Uno::Graphics::Framebuffer** __retval);
void Element__CleanupBatching_fn(Element* __this);
void Element__get_ClipToBounds_fn(Element* __this, bool* __retval);
void Element__set_ClipToBounds_fn(Element* __this, bool* value);
void Element__Composit_fn(Element* __this, ::g::Fuse::DrawContext* dc);
void Element__CompositEffects_fn(Element* __this, ::g::Fuse::DrawContext* dc);
void Element__DispatchPlacement_fn(Element* __this);
void Element__Draw_fn(Element* __this, ::g::Fuse::DrawContext* dc);
void Element__DrawNonUnderlayChildren_fn(Element* __this, ::g::Fuse::DrawContext* dc);
void Element__DrawSelection_fn(Element* __this, ::g::Fuse::DrawContext* dc);
void Element__DrawUnderlayChildren_fn(Element* __this, ::g::Fuse::DrawContext* dc);
void Element__DrawWithChildren_fn(Element* __this, ::g::Fuse::DrawContext* dc);
void Element__get_Effects_fn(Element* __this, uObject** __retval);
void Element__get_ElementBatchEntry_fn(Element* __this, ::g::Fuse::Elements::ElementBatchEntry** __retval);
void Element__set_ElementBatchEntry_fn(Element* __this, ::g::Fuse::Elements::ElementBatchEntry* value);
void Element__FastTrackDrawWithOpacity_fn(Element* __this, ::g::Fuse::DrawContext* dc, bool* __retval);
void Element__FuseAnimationsIResizeSetSize_fn(Element* __this, ::g::Uno::Float2* size);
void Element__FuseIActualPlacementget_ActualSize_fn(Element* __this, ::g::Uno::Float3* __retval);
void Element__FuseTriggersActionsICollapseCollapse_fn(Element* __this);
void Element__FuseTriggersActionsIHideHide_fn(Element* __this);
void Element__FuseTriggersActionsIShowShow_fn(Element* __this);
void Element__GetArrangePaddingSize_fn(Element* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void Element__GetContentSize_fn(Element* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void Element__GetMarginSize_fn(Element* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void Element__GetViewportInvertPixelRect_fn(Element* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* localRegion, ::g::Uno::Recti* __retval);
void Element__GetVisibleViewportInvertPixelRect_fn(Element* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::VisualBounds* localRegion, ::g::Uno::Recti* __retval);
void Element__GMSReset_fn(Element* __this);
void Element__get_HasActiveEffects_fn(Element* __this, bool* __retval);
void Element__get_HasCompositionEffect_fn(Element* __this, bool* __retval);
void Element__get_HasEffects_fn(Element* __this, bool* __retval);
void Element__get_Height_fn(Element* __this, ::g::Uno::UX::Size* __retval);
void Element__set_Height_fn(Element* __this, ::g::Uno::UX::Size* value);
void Element__get_HitTestChildrenBounds_fn(Element* __this, ::g::Fuse::VisualBounds** __retval);
void Element__get_HitTestLocalBounds_fn(Element* __this, ::g::Fuse::VisualBounds** __retval);
void Element__get_HitTestLocalVisualBounds_fn(Element* __this, ::g::Fuse::VisualBounds** __retval);
void Element__get_HitTestMode_fn(Element* __this, int* __retval);
void Element__set_HitTestMode_fn(Element* __this, int* value);
void Element__get_IntendedPosition_fn(Element* __this, ::g::Uno::Float2* __retval);
void Element__get_IntendedSize_fn(Element* __this, ::g::Uno::Float2* __retval);
void Element__InternArrangePaddingBox_fn(Element* __this, ::g::Fuse::LayoutParams* lp);
void Element__InternGetContentSize_fn(Element* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void Element__InvalidateLocalTransform_fn(Element* __this);
void Element__InvalidateRenderBoundsWithEffects_fn(Element* __this);
void Element__get_IsLocalVisible_fn(Element* __this, bool* __retval);
void Element__IsMarginBoxDependent_fn(Element* __this, ::g::Fuse::Visual* child, int* __retval);
void Element__IsPointInside_fn(Element* __this, ::g::Uno::Float2* localPoint, bool* __retval);
void Element__get_LimitHeight_fn(Element* __this, ::g::Uno::UX::Size* __retval);
void Element__set_LimitHeight_fn(Element* __this, ::g::Uno::UX::Size* value);
void Element__get_LimitWidth_fn(Element* __this, ::g::Uno::UX::Size* __retval);
void Element__set_LimitWidth_fn(Element* __this, ::g::Uno::UX::Size* value);
void Element__get_LocalRenderBounds_fn(Element* __this, ::g::Fuse::VisualBounds** __retval);
void Element__get_Margin_fn(Element* __this, ::g::Uno::Float4* __retval);
void Element__set_Margin_fn(Element* __this, ::g::Uno::Float4* value);
void Element__get_MaxHeight_fn(Element* __this, ::g::Uno::UX::Size* __retval);
void Element__set_MaxHeight_fn(Element* __this, ::g::Uno::UX::Size* value);
void Element__get_MaxWidth_fn(Element* __this, ::g::Uno::UX::Size* __retval);
void Element__set_MaxWidth_fn(Element* __this, ::g::Uno::UX::Size* value);
void Element__get_MinHeight_fn(Element* __this, ::g::Uno::UX::Size* __retval);
void Element__set_MinHeight_fn(Element* __this, ::g::Uno::UX::Size* value);
void Element__get_MinWidth_fn(Element* __this, ::g::Uno::UX::Size* __retval);
void Element__set_MinWidth_fn(Element* __this, ::g::Uno::UX::Size* value);
void Element__get_NeedsClipping_fn(Element* __this, bool* __retval);
void Element__NotifyTreeRedererOpacityChanged_fn(Element* __this);
void Element__NotifyTreeRendererHitTestModeChanged_fn(Element* __this);
void Element__NotifyTreeRendererPlaced_fn(Element* __this);
void Element__NotifyTreeRendererRooted_fn(Element* __this);
void Element__NotifyTreeRendererRootingStarted_fn(Element* __this);
void Element__NotifyTreeRendererTransformChanged_fn(Element* __this);
void Element__NotifyTreeRendererUnrooted_fn(Element* __this);
void Element__NotifyTreeRendererZOrderChanged_fn(Element* __this);
void Element__get_Offset_fn(Element* __this, ::g::Uno::UX::Size2* __retval);
void Element__set_Offset_fn(Element* __this, ::g::Uno::UX::Size2* value);
void Element__OnAdjustMarginBoxPosition_fn(Element* __this, ::g::Uno::Float2* position);
void Element__OnArrangeMarginBox_fn(Element* __this, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void Element__OnChildAdded_fn(Element* __this, ::g::Fuse::Node* node);
void Element__OnChildRemoved_fn(Element* __this, ::g::Fuse::Node* node);
void Element__OnDraw_fn(Element* __this, ::g::Fuse::DrawContext* dc);
void Element__OnEffectAdded_fn(Element* __this, ::g::Fuse::Effects::Effect* e);
void Element__OnEffectRemoved_fn(Element* __this, ::g::Fuse::Effects::Effect* e);
void Element__OnEffectRenderBoundsChanged_fn(Element* __this, ::g::Fuse::Effects::Effect* e);
void Element__OnEffectRenderingChanged_fn(Element* __this, ::g::Fuse::Effects::Effect* e);
void Element__OnHitTest_fn(Element* __this, ::g::Fuse::HitTestContext* htc);
void Element__OnHitTestChildren_fn(Element* __this, ::g::Fuse::HitTestContext* htc);
void Element__OnHitTestLocalVisual_fn(Element* __this, ::g::Fuse::HitTestContext* htc);
void Element__OnInvalidateLayout_fn(Element* __this);
void Element__OnInvalidateRenderBounds_fn(Element* __this, bool* __retval);
void Element__OnInvalidateRenderBoundsWithEffects_fn(Element* __this);
void Element__OnInvalidateVisual_fn(Element* __this);
void Element__OnInvalidateVisualComposition_fn(Element* __this);
void Element__OnIsContextEnabledChanged_fn(Element* __this);
void Element__OnIsVisibleChanged_fn(Element* __this);
void Element__OnOpacityChanged_fn(Element* __this, uObject* origin);
void Element__OnPreplacement_fn(Element* __this);
void Element__OnRooted_fn(Element* __this);
void Element__OnRootedPreChildren_fn(Element* __this);
void Element__OnUnrooted_fn(Element* __this);
void Element__OnVisibilityChanged_fn(Element* __this, int* oldVisibility, uObject* origin);
void Element__OnZOrderChanged_fn(Element* __this);
void Element__OnZOrderInvalidated_fn(Element* __this);
void Element__get_Opacity_fn(Element* __this, float* __retval);
void Element__set_Opacity_fn(Element* __this, float* value);
void Element__get_Padding_fn(Element* __this, ::g::Uno::Float4* __retval);
void Element__set_Padding_fn(Element* __this, ::g::Uno::Float4* value);
void Element__PerformPlacement_fn(Element* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* size, bool* temp);
void Element__add_Placed_fn(Element* __this, uDelegate* value);
void Element__remove_Placed_fn(Element* __this, uDelegate* value);
void Element__PrependImplicitTransform_fn(Element* __this, ::g::Fuse::FastMatrix* m);
void Element__PrependInverseTransformOrigin_fn(Element* __this, ::g::Fuse::FastMatrix* m);
void Element__PrependTransformOrigin_fn(Element* __this, ::g::Fuse::FastMatrix* m);
void Element__add_Preplacement_fn(Element* __this, uDelegate* value);
void Element__remove_Preplacement_fn(Element* __this, uDelegate* value);
void Element__RemoveChildElementFromBatching_fn(Element* __this, Element* elm);
void Element__get_RenderBoundsWithEffects_fn(Element* __this, ::g::Fuse::VisualBounds** __retval);
void Element__get_RenderBoundsWithoutEffects_fn(Element* __this, ::g::Fuse::VisualBounds** __retval);
void Element__RequestLayout_fn(Element* __this);
void Element__SetHitTestMode_fn(Element* __this, int* value, uObject* origin);
void Element__SetNewTransform_fn(Element* __this);
void Element__SetOpacity_fn(Element* __this, float* value, uObject* origin);
void Element__SetVisibility_fn(Element* __this, int* value, uObject* origin);
void Element__ShouldBatch_fn(Element* __this, bool* __retval);
void Element__get_TransformOrigin_fn(Element* __this, uObject** __retval);
void Element__set_TransformOrigin_fn(Element* __this, uObject* value);
void Element__get_TreeRenderer_fn(Element* __this, uObject** __retval);
void Element__get_Visibility_fn(Element* __this, int* __retval);
void Element__set_Visibility_fn(Element* __this, int* value);
void Element__get_Width_fn(Element* __this, ::g::Uno::UX::Size* __retval);
void Element__set_Width_fn(Element* __this, ::g::Uno::UX::Size* value);
void Element__get_X_fn(Element* __this, ::g::Uno::UX::Size* __retval);
void Element__set_X_fn(Element* __this, ::g::Uno::UX::Size* value);
void Element__get_Y_fn(Element* __this, ::g::Uno::UX::Size* __retval);
void Element__set_Y_fn(Element* __this, ::g::Uno::UX::Size* value);

struct Element : ::g::Fuse::Visual
{
    ::g::Uno::Float2 _actualAnchor;
    ::g::Uno::Float2 _actualPosition;
    ::g::Uno::Float2 _actualPositionCache;
    ::g::Uno::Float2 _actualSize;
    int _alignment;
    uStrong< ::g::Fuse::Elements::BoxSizing*> _boxSizing;
    int _boxSizingMode;
    uStrong< ::g::Fuse::Elements::Cache*> _cache;
    static ::g::Uno::UX::Selector _clipToBoundsName_;
    static ::g::Uno::UX::Selector& _clipToBoundsName() { return Element_typeof()->Init(), _clipToBoundsName_; }
    int _compositionEffects;
    bool _dispatchedZOrderChanged;
    uStrong< ::g::Uno::Collections::List*> _effects;
    uStrong< ::g::Fuse::Elements::ElementBatcher*> _elementBatcher;
    bool _elementBatchValid;
    int _gmsAt;
    uStrong<uArray*> _gmsCache;
    int _gmsCount;
    bool _haveActualPositionCache;
    ::g::Uno::UX::Size _height;
    static ::g::Uno::UX::Selector _hitTestModeName_;
    static ::g::Uno::UX::Selector& _hitTestModeName() { return Element_typeof()->Init(), _hitTestModeName_; }
    ::g::Uno::Float2 _intendedSize;
    static bool _invalidValuesWarn_;
    static bool& _invalidValuesWarn() { return Element_typeof()->Init(), _invalidValuesWarn_; }
    static ::g::Uno::UX::Selector _opacityName_;
    static ::g::Uno::UX::Selector& _opacityName() { return Element_typeof()->Init(), _opacityName_; }
    bool _pendingDispatchPlacement;
    uWeak< ::g::Fuse::Node*> _placedBefore;
    ::g::Uno::Float2 _ppPrevPosition;
    ::g::Uno::Float2 _ppPrevSize;
    uStrong< ::g::Fuse::VisualBounds*> _renderBoundsWithEffects;
    uStrong< ::g::Fuse::VisualBounds*> _renderBoundsWithoutEffects;
    bool _transformChanged;
    int _visibility;
    static ::g::Uno::UX::Selector _visibilityName_;
    static ::g::Uno::UX::Selector& _visibilityName() { return Element_typeof()->Init(), _visibilityName_; }
    bool _warnNoCacheDraw;
    bool _warnOpacityFlat;
    ::g::Uno::UX::Size _width;
    static uSStrong<uObject*> DefaultTransformOrigin_;
    static uSStrong<uObject*>& DefaultTransformOrigin() { return Element_typeof()->Init(), DefaultTransformOrigin_; }
    static ::g::Uno::UX::Selector ExplicitTransformOriginName_;
    static ::g::Uno::UX::Selector& ExplicitTransformOriginName() { return Element_typeof()->Init(), ExplicitTransformOriginName_; }
    bool ignoreTempArrange;
    uStrong< ::g::Fuse::Elements::ElementBatchEntry*> _ElementBatchEntry;
    uStrong<uDelegate*> Placed1;
    uStrong<uDelegate*> Preplacement1;

    void ctor_3();
    ::g::Uno::Float2 ActualAnchor();
    void ActualAnchor(::g::Uno::Float2 value);
    ::g::Uno::Float2 ActualPosition();
    ::g::Uno::Float2 ActualSize();
    int Alignment();
    void Alignment(int value);
    Element* AncestorElement();
    ::g::Uno::UX::Size2 Anchor();
    void Anchor(::g::Uno::UX::Size2 value);
    void ArrangePaddingBox(::g::Fuse::LayoutParams lp);
    float Aspect();
    void Aspect(float value);
    int AspectConstraint();
    void AspectConstraint(int value);
    int BoxSizing();
    void BoxSizing(int value);
    ::g::Fuse::Elements::BoxSizing* BoxSizingObject();
    ::g::Fuse::Elements::Cache* Cache();
    int CachingMode();
    void CachingMode(int value);
    ::g::Fuse::VisualBounds* CalcRenderBounds() { ::g::Fuse::VisualBounds* __retval; return (((Element_type*)__type)->fp_CalcRenderBounds)(this, &__retval), __retval; }
    ::g::Fuse::VisualBounds* CalcRenderBoundsWithEffects();
    ::g::Uno::Graphics::Framebuffer* CaptureRegion(::g::Fuse::DrawContext* dc, ::g::Uno::Rect region, ::g::Uno::Float2 padding);
    void CleanupBatching();
    bool ClipToBounds();
    void ClipToBounds(bool value);
    void Composit(::g::Fuse::DrawContext* dc);
    void CompositEffects(::g::Fuse::DrawContext* dc);
    void DispatchPlacement();
    void DrawNonUnderlayChildren(::g::Fuse::DrawContext* dc);
    void DrawUnderlayChildren(::g::Fuse::DrawContext* dc);
    void DrawWithChildren(::g::Fuse::DrawContext* dc) { (((Element_type*)__type)->fp_DrawWithChildren)(this, dc); }
    uObject* Effects();
    ::g::Fuse::Elements::ElementBatchEntry* ElementBatchEntry();
    void ElementBatchEntry(::g::Fuse::Elements::ElementBatchEntry* value);
    bool FastTrackDrawWithOpacity(::g::Fuse::DrawContext* dc) { bool __retval; return (((Element_type*)__type)->fp_FastTrackDrawWithOpacity)(this, dc, &__retval), __retval; }
    ::g::Uno::Float2 GetArrangePaddingSize(::g::Fuse::LayoutParams lp);
    ::g::Uno::Float2 GetContentSize(::g::Fuse::LayoutParams lp);
    ::g::Uno::Recti GetViewportInvertPixelRect(::g::Fuse::DrawContext* dc, ::g::Uno::Rect localRegion);
    ::g::Uno::Recti GetVisibleViewportInvertPixelRect(::g::Fuse::DrawContext* dc, ::g::Fuse::VisualBounds* localRegion);
    void GMSReset();
    bool HasActiveEffects();
    bool HasCompositionEffect();
    bool HasEffects();
    ::g::Uno::UX::Size Height();
    void Height(::g::Uno::UX::Size value);
    ::g::Fuse::VisualBounds* HitTestLocalVisualBounds() { ::g::Fuse::VisualBounds* __retval; return (((Element_type*)__type)->fp_get_HitTestLocalVisualBounds)(this, &__retval), __retval; }
    int HitTestMode();
    void HitTestMode(int value);
    ::g::Uno::Float2 IntendedPosition();
    ::g::Uno::Float2 IntendedSize();
    void InternArrangePaddingBox(::g::Fuse::LayoutParams lp);
    ::g::Uno::Float2 InternGetContentSize(::g::Fuse::LayoutParams lp);
    void InvalidateRenderBoundsWithEffects();
    bool IsPointInside(::g::Uno::Float2 localPoint);
    ::g::Uno::UX::Size LimitHeight();
    void LimitHeight(::g::Uno::UX::Size value);
    ::g::Uno::UX::Size LimitWidth();
    void LimitWidth(::g::Uno::UX::Size value);
    ::g::Uno::Float4 Margin();
    void Margin(::g::Uno::Float4 value);
    ::g::Uno::UX::Size MaxHeight();
    void MaxHeight(::g::Uno::UX::Size value);
    ::g::Uno::UX::Size MaxWidth();
    void MaxWidth(::g::Uno::UX::Size value);
    ::g::Uno::UX::Size MinHeight();
    void MinHeight(::g::Uno::UX::Size value);
    ::g::Uno::UX::Size MinWidth();
    void MinWidth(::g::Uno::UX::Size value);
    bool NeedsClipping();
    void NotifyTreeRedererOpacityChanged();
    void NotifyTreeRendererHitTestModeChanged();
    void NotifyTreeRendererPlaced();
    void NotifyTreeRendererRooted();
    void NotifyTreeRendererRootingStarted();
    void NotifyTreeRendererTransformChanged();
    void NotifyTreeRendererUnrooted();
    void NotifyTreeRendererZOrderChanged();
    ::g::Uno::UX::Size2 Offset();
    void Offset(::g::Uno::UX::Size2 value);
    void OnDraw(::g::Fuse::DrawContext* dc) { (((Element_type*)__type)->fp_OnDraw)(this, dc); }
    void OnEffectAdded(::g::Fuse::Effects::Effect* e);
    void OnEffectRemoved(::g::Fuse::Effects::Effect* e);
    void OnEffectRenderBoundsChanged(::g::Fuse::Effects::Effect* e);
    void OnEffectRenderingChanged(::g::Fuse::Effects::Effect* e);
    void OnHitTestChildren(::g::Fuse::HitTestContext* htc);
    void OnHitTestLocalVisual(::g::Fuse::HitTestContext* htc) { (((Element_type*)__type)->fp_OnHitTestLocalVisual)(this, htc); }
    void OnInvalidateRenderBoundsWithEffects();
    void OnOpacityChanged(uObject* origin);
    void OnPreplacement();
    void OnVisibilityChanged(int oldVisibility, uObject* origin);
    void OnZOrderChanged();
    float Opacity();
    void Opacity(float value);
    ::g::Uno::Float4 Padding();
    void Padding(::g::Uno::Float4 value);
    void PerformPlacement(::g::Uno::Float2 position, ::g::Uno::Float2 size, bool temp);
    void add_Placed(uDelegate* value);
    void remove_Placed(uDelegate* value);
    void add_Preplacement(uDelegate* value);
    void remove_Preplacement(uDelegate* value);
    void RemoveChildElementFromBatching(Element* elm);
    ::g::Fuse::VisualBounds* RenderBoundsWithEffects();
    ::g::Fuse::VisualBounds* RenderBoundsWithoutEffects();
    void RequestLayout();
    void SetHitTestMode(int value, uObject* origin);
    void SetNewTransform();
    void SetOpacity(float value, uObject* origin);
    void SetVisibility(int value, uObject* origin);
    bool ShouldBatch();
    uObject* TransformOrigin();
    void TransformOrigin(uObject* value);
    uObject* TreeRenderer() { uObject* __retval; return (((Element_type*)__type)->fp_get_TreeRenderer)(this, &__retval), __retval; }
    int Visibility();
    void Visibility(int value);
    ::g::Uno::UX::Size Width();
    void Width(::g::Uno::UX::Size value);
    ::g::Uno::UX::Size X();
    void X(::g::Uno::UX::Size value);
    ::g::Uno::UX::Size Y();
    void Y(::g::Uno::UX::Size value);
    static void ArrangePaddingBox(Element* __this, ::g::Fuse::LayoutParams lp);
    static ::g::Fuse::VisualBounds* CalcRenderBounds(Element* __this) { ::g::Fuse::VisualBounds* __retval; return Element__CalcRenderBounds_fn(__this, &__retval), __retval; }
    static void DrawWithChildren(Element* __this, ::g::Fuse::DrawContext* dc) { Element__DrawWithChildren_fn(__this, dc); }
    static bool FastTrackDrawWithOpacity(Element* __this, ::g::Fuse::DrawContext* dc) { bool __retval; return Element__FastTrackDrawWithOpacity_fn(__this, dc, &__retval), __retval; }
    static ::g::Uno::Float2 GetContentSize(Element* __this, ::g::Fuse::LayoutParams lp);
    static void OnDraw(Element* __this, ::g::Fuse::DrawContext* dc) { Element__OnDraw_fn(__this, dc); }
    static void OnHitTestLocalVisual(Element* __this, ::g::Fuse::HitTestContext* htc) { Element__OnHitTestLocalVisual_fn(__this, htc); }
    static ::g::Fuse::VisualBounds* HitTestLocalVisualBounds(Element* __this) { ::g::Fuse::VisualBounds* __retval; return Element__get_HitTestLocalVisualBounds_fn(__this, &__retval), __retval; }
    static uObject* TreeRenderer(Element* __this) { uObject* __retval; return Element__get_TreeRenderer_fn(__this, &__retval), __retval; }
};

}}} // ::g::Fuse::Elements

#include <Fuse.LayoutParams.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Rect.h>
#include <Uno.Recti.h>
#include <Uno.UX.Size2.h>

namespace g{
namespace Fuse{
namespace Elements{

inline void Element::ArrangePaddingBox(::g::Fuse::LayoutParams lp) { (((Element_type*)__type)->fp_ArrangePaddingBox)(this, &lp); }
inline ::g::Uno::Float2 Element::GetContentSize(::g::Fuse::LayoutParams lp) { ::g::Uno::Float2 __retval; return (((Element_type*)__type)->fp_GetContentSize)(this, &lp, &__retval), __retval; }
inline void Element::ArrangePaddingBox(Element* __this, ::g::Fuse::LayoutParams lp) { Element__ArrangePaddingBox_fn(__this, &lp); }
inline ::g::Uno::Float2 Element::GetContentSize(Element* __this, ::g::Fuse::LayoutParams lp) { ::g::Uno::Float2 __retval; return Element__GetContentSize_fn(__this, &lp, &__retval), __retval; }
// }

}}} // ::g::Fuse::Elements
