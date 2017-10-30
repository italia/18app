// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.3.1/TreeRenderer.iOS.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.ITreeRenderer.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ViewHandle;}}}}
namespace g{namespace Fuse{namespace Controls{struct TreeRenderer;}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{

// internal sealed extern class TreeRenderer :13
// {
struct TreeRenderer_type : uType
{
    ::g::Fuse::Elements::ITreeRenderer interface0;
};

TreeRenderer_type* TreeRenderer_typeof();
void TreeRenderer__ctor__fn(TreeRenderer* __this, uDelegate* setRoot, uDelegate* clearRoot);
void TreeRenderer__FuseElementsITreeRendererBackgroundChanged_fn(TreeRenderer* __this, ::g::Fuse::Elements::Element* e, ::g::Fuse::Drawing::Brush* background);
void TreeRenderer__FuseElementsITreeRendererClipToBoundsChanged_fn(TreeRenderer* __this, ::g::Fuse::Elements::Element* e, bool* clipToBounds);
void TreeRenderer__FuseElementsITreeRendererHitTestModeChanged_fn(TreeRenderer* __this, ::g::Fuse::Elements::Element* e, bool* enabled);
void TreeRenderer__FuseElementsITreeRendererIsEnabledChanged_fn(TreeRenderer* __this, ::g::Fuse::Elements::Element* e, bool* isEnabled);
void TreeRenderer__FuseElementsITreeRendererIsVisibleChanged_fn(TreeRenderer* __this, ::g::Fuse::Elements::Element* e, bool* isVisible);
void TreeRenderer__FuseElementsITreeRendererMeasure_fn(TreeRenderer* __this, ::g::Fuse::Elements::Element* e, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* size, bool* __retval);
void TreeRenderer__FuseElementsITreeRendererOpacityChanged_fn(TreeRenderer* __this, ::g::Fuse::Elements::Element* e, float* opacity);
void TreeRenderer__FuseElementsITreeRendererPlaced_fn(TreeRenderer* __this, ::g::Fuse::Elements::Element* e);
void TreeRenderer__FuseElementsITreeRendererRooted_fn(TreeRenderer* __this, ::g::Fuse::Elements::Element* e);
void TreeRenderer__FuseElementsITreeRendererRootingStarted_fn(TreeRenderer* __this, ::g::Fuse::Elements::Element* e);
void TreeRenderer__FuseElementsITreeRendererTransformChanged_fn(TreeRenderer* __this, ::g::Fuse::Elements::Element* e);
void TreeRenderer__FuseElementsITreeRendererUnrooted_fn(TreeRenderer* __this, ::g::Fuse::Elements::Element* e);
void TreeRenderer__FuseElementsITreeRendererZOrderChanged_fn(TreeRenderer* __this, ::g::Fuse::Elements::Element* e, uArray* zorder);
void TreeRenderer__InstantiateTemplate_fn(TreeRenderer* __this, ::g::Fuse::Elements::Element* e, uObject** __retval);
void TreeRenderer__InstantiateView_fn(TreeRenderer* __this, ::g::Fuse::Elements::Element* e, ::g::Fuse::Controls::Native::ViewHandle** __retval);
void TreeRenderer__InstantiateViewOld_fn(TreeRenderer* __this, ::g::Fuse::Elements::Element* e, uObject** __retval);
void TreeRenderer__New1_fn(uDelegate* setRoot, uDelegate* clearRoot, TreeRenderer** __retval);

struct TreeRenderer : uObject
{
    uStrong<uDelegate*> _clearRoot;
    uStrong< ::g::Uno::Collections::Dictionary*> _elements;
    uStrong<uDelegate*> _setRoot;

    void ctor_(uDelegate* setRoot, uDelegate* clearRoot);
    uObject* InstantiateTemplate(::g::Fuse::Elements::Element* e);
    ::g::Fuse::Controls::Native::ViewHandle* InstantiateView(::g::Fuse::Elements::Element* e);
    uObject* InstantiateViewOld(::g::Fuse::Elements::Element* e);
    static TreeRenderer* New1(uDelegate* setRoot, uDelegate* clearRoot);
};
// }

}}} // ::g::Fuse::Controls
