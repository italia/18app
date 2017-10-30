// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/cover.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Container.h>
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
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct cover;}

namespace g{

// public partial sealed class cover :2
// {
::g::Fuse::Controls::Panel_type* cover_typeof();
void cover__ctor_8_fn(cover* __this);
void cover__get_Image_fn(cover* __this, ::g::Uno::UX::FileSource** __retval);
void cover__set_Image_fn(cover* __this, ::g::Uno::UX::FileSource* value);
void cover__InitializeUX_fn(cover* __this);
void cover__get_LayerImage_fn(cover* __this, int* __retval);
void cover__set_LayerImage_fn(cover* __this, int* value);
void cover__New5_fn(cover** __retval);
void cover__SetImage_fn(cover* __this, ::g::Uno::UX::FileSource* value, uObject* origin);
void cover__SetLayerImage_fn(cover* __this, int* value, uObject* origin);

struct cover : ::g::Fuse::Controls::Container
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return cover_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return cover_typeof()->Init(), __selector1_; }
    uStrong< ::g::Uno::UX::FileSource*> _field_Image;
    int _field_LayerImage;
    uStrong< ::g::Fuse::Controls::Panel*> innerPanel;
    uStrong< ::g::Uno::UX::Property1*> temp_File_inst;

    void ctor_8();
    ::g::Uno::UX::FileSource* Image();
    void Image(::g::Uno::UX::FileSource* value);
    void InitializeUX();
    int LayerImage();
    void LayerImage(int value);
    void SetImage(::g::Uno::UX::FileSource* value, uObject* origin);
    void SetLayerImage(int value, uObject* origin);
    static cover* New5();
};
// }

} // ::g
