// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.3.1/Image.ScriptClass.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.LayoutControl.h>
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
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Image;}}}
namespace g{namespace Fuse{namespace Internal{struct ImageContainer;}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSource;}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSourceErrorArgs;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Triggers{struct BusyTask;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct HitTestContext;}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct VisualBounds;}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial class Image :8
// {
::g::Fuse::Controls::Control_type* Image_typeof();
void Image__ctor_6_fn(Image* __this);
void Image__ArrangePaddingBox_fn(Image* __this, ::g::Fuse::LayoutParams* lp);
void Image__CalcRenderBounds_fn(Image* __this, ::g::Fuse::VisualBounds** __retval);
void Image__get_Color_fn(Image* __this, ::g::Uno::Float4* __retval);
void Image__set_Color_fn(Image* __this, ::g::Uno::Float4* value);
void Image__get_Container_fn(Image* __this, ::g::Fuse::Internal::ImageContainer** __retval);
void Image__CreateNativeView_fn(Image* __this, uObject** __retval);
void Image__DrawVisual_fn(Image* __this, ::g::Fuse::DrawContext* dc);
void Image__DrawVisualColor_fn(Image* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float4* color);
void Image__FastTrackDrawWithOpacity_fn(Image* __this, ::g::Fuse::DrawContext* dc, bool* __retval);
void Image__get_File_fn(Image* __this, ::g::Uno::UX::FileSource** __retval);
void Image__set_File_fn(Image* __this, ::g::Uno::UX::FileSource* value);
void Image__GetContentSize_fn(Image* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void Image__GetSize_fn(Image* __this, ::g::Uno::Float2* __retval);
void Image__get_HitTestLocalVisualBounds_fn(Image* __this, ::g::Fuse::VisualBounds** __retval);
void Image__get_ImageView_fn(Image* __this, uObject** __retval);
void Image__New3_fn(Image** __retval);
void Image__OnContainerParamChanged_fn(Image* __this, uObject* s, uObject* a);
void Image__OnContainerSourceChanged_fn(Image* __this, uObject* s, uObject* a);
void Image__OnContainerSourceError_fn(Image* __this, uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* args);
void Image__OnHitTestLocalVisual_fn(Image* __this, ::g::Fuse::HitTestContext* htc);
void Image__OnIsVisibleChanged1_fn(Image* __this, uObject* s, uObject* a);
void Image__OnParamChanged_fn(Image* __this);
void Image__OnRooted_fn(Image* __this);
void Image__OnSourceChanged_fn(Image* __this);
void Image__OnUnrooted_fn(Image* __this);
void Image__add_ParamChanged_fn(Image* __this, uDelegate* value);
void Image__remove_ParamChanged_fn(Image* __this, uDelegate* value);
void Image__PushPropertiesToNativeView_fn(Image* __this);
void Image__reload_fn(::g::Fuse::Scripting::Context* c, Image* img, uArray* args);
void Image__retry_fn(::g::Fuse::Scripting::Context* c, Image* img, uArray* args);
void Image__get_Scale9Margin_fn(Image* __this, ::g::Uno::Float4* __retval);
void Image__set_Scale9Margin_fn(Image* __this, ::g::Uno::Float4* value);
void Image__SetContentBox_fn(Image* __this, ::g::Uno::Float4* contentBox);
void Image__get_Source_fn(Image* __this, ::g::Fuse::Resources::ImageSource** __retval);
void Image__set_Source_fn(Image* __this, ::g::Fuse::Resources::ImageSource* value);
void Image__add_SourceChanged_fn(Image* __this, uDelegate* value);
void Image__remove_SourceChanged_fn(Image* __this, uDelegate* value);
void Image__get_StretchMode_fn(Image* __this, int* __retval);
void Image__set_StretchMode_fn(Image* __this, int* value);
void Image__UpdateNativeImageSource_fn(Image* __this);
void Image__UpdateNativeImageTransform_fn(Image* __this);

struct Image : ::g::Fuse::Controls::LayoutControl
{
    ::g::Uno::Float4 _color;
    uStrong< ::g::Fuse::Internal::ImageContainer*> _container;
    ::g::Uno::Float4 _contentBox;
    ::g::Uno::Float2 _drawOrigin;
    ::g::Uno::Float2 _drawSize;
    bool _hasContentBox;
    bool _hasScale9Margin;
    uStrong< ::g::Fuse::Resources::ImageSourceErrorArgs*> _lastError;
    uStrong< ::g::Fuse::Triggers::BusyTask*> _loadingTask;
    bool _markedFailed;
    ::g::Uno::Float2 _origin;
    ::g::Uno::Float2 _scale;
    ::g::Uno::Float4 _scale9Margin;
    ::g::Uno::Float4 _uvClip;
    uStrong<uDelegate*> ParamChanged1;
    uStrong<uDelegate*> SourceChanged1;

    void ctor_6();
    ::g::Uno::Float4 Color();
    void Color(::g::Uno::Float4 value);
    ::g::Fuse::Internal::ImageContainer* Container();
    void DrawVisualColor(::g::Fuse::DrawContext* dc, ::g::Uno::Float4 color);
    ::g::Uno::UX::FileSource* File();
    void File(::g::Uno::UX::FileSource* value);
    ::g::Uno::Float2 GetSize();
    uObject* ImageView();
    void OnContainerParamChanged(uObject* s, uObject* a);
    void OnContainerSourceChanged(uObject* s, uObject* a);
    void OnContainerSourceError(uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* args);
    void OnIsVisibleChanged1(uObject* s, uObject* a);
    void OnParamChanged();
    void OnSourceChanged();
    void add_ParamChanged(uDelegate* value);
    void remove_ParamChanged(uDelegate* value);
    ::g::Uno::Float4 Scale9Margin();
    void Scale9Margin(::g::Uno::Float4 value);
    void SetContentBox(::g::Uno::Float4 contentBox);
    ::g::Fuse::Resources::ImageSource* Source();
    void Source(::g::Fuse::Resources::ImageSource* value);
    void add_SourceChanged(uDelegate* value);
    void remove_SourceChanged(uDelegate* value);
    int StretchMode();
    void StretchMode(int value);
    void UpdateNativeImageSource();
    void UpdateNativeImageTransform();
    static Image* New3();
    static void reload(::g::Fuse::Scripting::Context* c, Image* img, uArray* args);
    static void retry(::g::Fuse::Scripting::Context* c, Image* img, uArray* args);
};
// }

}}} // ::g::Fuse::Controls
