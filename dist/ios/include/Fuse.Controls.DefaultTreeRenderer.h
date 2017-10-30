// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.3.1/GraphicsView.ux.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.ITreeRenderer.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct DefaultTreeRenderer;}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{

// internal sealed class DefaultTreeRenderer :11
// {
struct DefaultTreeRenderer_type : uType
{
    ::g::Fuse::Elements::ITreeRenderer interface0;
};

DefaultTreeRenderer_type* DefaultTreeRenderer_typeof();
void DefaultTreeRenderer__ctor__fn(DefaultTreeRenderer* __this);
void DefaultTreeRenderer__BackgroundChanged_fn(DefaultTreeRenderer* __this, ::g::Fuse::Elements::Element* e, ::g::Fuse::Drawing::Brush* background);
void DefaultTreeRenderer__ClipToBoundsChanged_fn(DefaultTreeRenderer* __this, ::g::Fuse::Elements::Element* e, bool* clipToBounds);
void DefaultTreeRenderer__HitTestModeChanged_fn(DefaultTreeRenderer* __this, ::g::Fuse::Elements::Element* e, bool* enabled);
void DefaultTreeRenderer__InstantiateGraphicsAppearance_fn(DefaultTreeRenderer* __this, ::g::Fuse::Elements::Element* e, ::g::Fuse::Visual** __retval);
void DefaultTreeRenderer__IsEnabledChanged_fn(DefaultTreeRenderer* __this, ::g::Fuse::Elements::Element* e, bool* isEnabled);
void DefaultTreeRenderer__IsVisibleChanged_fn(DefaultTreeRenderer* __this, ::g::Fuse::Elements::Element* e, bool* isVisible);
void DefaultTreeRenderer__Measure_fn(DefaultTreeRenderer* __this, ::g::Fuse::Elements::Element* e, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* size, bool* __retval);
void DefaultTreeRenderer__New1_fn(DefaultTreeRenderer** __retval);
void DefaultTreeRenderer__OpacityChanged_fn(DefaultTreeRenderer* __this, ::g::Fuse::Elements::Element* e, float* opacity);
void DefaultTreeRenderer__Placed_fn(DefaultTreeRenderer* __this, ::g::Fuse::Elements::Element* e);
void DefaultTreeRenderer__Rooted_fn(DefaultTreeRenderer* __this, ::g::Fuse::Elements::Element* e);
void DefaultTreeRenderer__RootingStarted_fn(DefaultTreeRenderer* __this, ::g::Fuse::Elements::Element* e);
void DefaultTreeRenderer__TransformChanged_fn(DefaultTreeRenderer* __this, ::g::Fuse::Elements::Element* e);
void DefaultTreeRenderer__Unrooted_fn(DefaultTreeRenderer* __this, ::g::Fuse::Elements::Element* e);
void DefaultTreeRenderer__ZOrderChanged_fn(DefaultTreeRenderer* __this, ::g::Fuse::Elements::Element* e, uArray* zorder);

struct DefaultTreeRenderer : uObject
{
    static uSStrong<DefaultTreeRenderer*> Instance_;
    static uSStrong<DefaultTreeRenderer*>& Instance() { return Instance_; }

    void ctor_();
    void BackgroundChanged(::g::Fuse::Elements::Element* e, ::g::Fuse::Drawing::Brush* background);
    void ClipToBoundsChanged(::g::Fuse::Elements::Element* e, bool clipToBounds);
    void HitTestModeChanged(::g::Fuse::Elements::Element* e, bool enabled);
    ::g::Fuse::Visual* InstantiateGraphicsAppearance(::g::Fuse::Elements::Element* e);
    void IsEnabledChanged(::g::Fuse::Elements::Element* e, bool isEnabled);
    void IsVisibleChanged(::g::Fuse::Elements::Element* e, bool isVisible);
    bool Measure(::g::Fuse::Elements::Element* e, ::g::Fuse::LayoutParams lp, ::g::Uno::Float2* size);
    void OpacityChanged(::g::Fuse::Elements::Element* e, float opacity);
    void Placed(::g::Fuse::Elements::Element* e);
    void Rooted(::g::Fuse::Elements::Element* e);
    void RootingStarted(::g::Fuse::Elements::Element* e);
    void TransformChanged(::g::Fuse::Elements::Element* e);
    void Unrooted(::g::Fuse::Elements::Element* e);
    void ZOrderChanged(::g::Fuse::Elements::Element* e, uArray* zorder);
    static DefaultTreeRenderer* New1();
};
// }

}}} // ::g::Fuse::Controls
