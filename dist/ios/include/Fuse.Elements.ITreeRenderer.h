// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Element.ITreeRenderer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Elements{

// public abstract interface ITreeRenderer :9
// {
uInterfaceType* ITreeRenderer_typeof();

struct ITreeRenderer
{
    void(*fp_BackgroundChanged)(uObject*, ::g::Fuse::Elements::Element*, ::g::Fuse::Drawing::Brush*);
    void(*fp_ClipToBoundsChanged)(uObject*, ::g::Fuse::Elements::Element*, bool*);
    void(*fp_HitTestModeChanged)(uObject*, ::g::Fuse::Elements::Element*, bool*);
    void(*fp_IsEnabledChanged)(uObject*, ::g::Fuse::Elements::Element*, bool*);
    void(*fp_IsVisibleChanged)(uObject*, ::g::Fuse::Elements::Element*, bool*);
    void(*fp_Measure)(uObject*, ::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*, bool*);
    void(*fp_OpacityChanged)(uObject*, ::g::Fuse::Elements::Element*, float*);
    void(*fp_Placed)(uObject*, ::g::Fuse::Elements::Element*);
    void(*fp_Rooted)(uObject*, ::g::Fuse::Elements::Element*);
    void(*fp_RootingStarted)(uObject*, ::g::Fuse::Elements::Element*);
    void(*fp_TransformChanged)(uObject*, ::g::Fuse::Elements::Element*);
    void(*fp_Unrooted)(uObject*, ::g::Fuse::Elements::Element*);
    void(*fp_ZOrderChanged)(uObject*, ::g::Fuse::Elements::Element*, uArray*);
    static void BackgroundChanged(const uInterface& __this, ::g::Fuse::Elements::Element* e, ::g::Fuse::Drawing::Brush* background) { __this.VTable<ITreeRenderer>()->fp_BackgroundChanged(__this, e, background); }
    static void ClipToBoundsChanged(const uInterface& __this, ::g::Fuse::Elements::Element* e, bool clipToBounds) { __this.VTable<ITreeRenderer>()->fp_ClipToBoundsChanged(__this, e, &clipToBounds); }
    static void HitTestModeChanged(const uInterface& __this, ::g::Fuse::Elements::Element* e, bool enabled) { __this.VTable<ITreeRenderer>()->fp_HitTestModeChanged(__this, e, &enabled); }
    static void IsEnabledChanged(const uInterface& __this, ::g::Fuse::Elements::Element* e, bool isEnabled) { __this.VTable<ITreeRenderer>()->fp_IsEnabledChanged(__this, e, &isEnabled); }
    static void IsVisibleChanged(const uInterface& __this, ::g::Fuse::Elements::Element* e, bool isVisible) { __this.VTable<ITreeRenderer>()->fp_IsVisibleChanged(__this, e, &isVisible); }
    static bool Measure(const uInterface& __this, ::g::Fuse::Elements::Element* e, ::g::Fuse::LayoutParams lp, ::g::Uno::Float2* size);
    static void OpacityChanged(const uInterface& __this, ::g::Fuse::Elements::Element* e, float opacity) { __this.VTable<ITreeRenderer>()->fp_OpacityChanged(__this, e, &opacity); }
    static void Placed(const uInterface& __this, ::g::Fuse::Elements::Element* e) { __this.VTable<ITreeRenderer>()->fp_Placed(__this, e); }
    static void Rooted(const uInterface& __this, ::g::Fuse::Elements::Element* e) { __this.VTable<ITreeRenderer>()->fp_Rooted(__this, e); }
    static void RootingStarted(const uInterface& __this, ::g::Fuse::Elements::Element* e) { __this.VTable<ITreeRenderer>()->fp_RootingStarted(__this, e); }
    static void TransformChanged(const uInterface& __this, ::g::Fuse::Elements::Element* e) { __this.VTable<ITreeRenderer>()->fp_TransformChanged(__this, e); }
    static void Unrooted(const uInterface& __this, ::g::Fuse::Elements::Element* e) { __this.VTable<ITreeRenderer>()->fp_Unrooted(__this, e); }
    static void ZOrderChanged(const uInterface& __this, ::g::Fuse::Elements::Element* e, uArray* zorder) { __this.VTable<ITreeRenderer>()->fp_ZOrderChanged(__this, e, zorder); }
};

}}} // ::g::Fuse::Elements

#include <Fuse.LayoutParams.h>

namespace g{
namespace Fuse{
namespace Elements{

inline bool ITreeRenderer::Measure(const uInterface& __this, ::g::Fuse::Elements::Element* e, ::g::Fuse::LayoutParams lp, ::g::Uno::Float2* size) { bool __retval; return __this.VTable<ITreeRenderer>()->fp_Measure(__this, e, &lp, size, &__retval), __retval; }
// }

}}} // ::g::Fuse::Elements
