// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/StaticResources.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
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
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Uno{struct Float4;}}
namespace g{struct StaticResources;}

namespace g{

// public partial sealed class StaticResources :2
// {
::g::Fuse::Controls::Panel_type* StaticResources_typeof();

struct StaticResources : ::g::Fuse::Controls::Panel
{
    static uSStrong< ::g::Fuse::Font*> BaseFont_;
    static uSStrong< ::g::Fuse::Font*>& BaseFont() { return StaticResources_typeof()->Init(), BaseFont_; }
    static uSStrong< ::g::Fuse::Font*> BoldFont_;
    static uSStrong< ::g::Fuse::Font*>& BoldFont() { return StaticResources_typeof()->Init(), BoldFont_; }
    static ::g::Uno::Float4 colorBlack_;
    static ::g::Uno::Float4& colorBlack() { return StaticResources_typeof()->Init(), colorBlack_; }
    static ::g::Uno::Float4 colorBlue_;
    static ::g::Uno::Float4& colorBlue() { return StaticResources_typeof()->Init(), colorBlue_; }
    static ::g::Uno::Float4 colorDarkBlue_;
    static ::g::Uno::Float4& colorDarkBlue() { return StaticResources_typeof()->Init(), colorDarkBlue_; }
    static ::g::Uno::Float4 colorGray_;
    static ::g::Uno::Float4& colorGray() { return StaticResources_typeof()->Init(), colorGray_; }
    static ::g::Uno::Float4 colorGrayDark_;
    static ::g::Uno::Float4& colorGrayDark() { return StaticResources_typeof()->Init(), colorGrayDark_; }
    static ::g::Uno::Float4 colorGrayLight_;
    static ::g::Uno::Float4& colorGrayLight() { return StaticResources_typeof()->Init(), colorGrayLight_; }
    static ::g::Uno::Float4 colorGreen_;
    static ::g::Uno::Float4& colorGreen() { return StaticResources_typeof()->Init(), colorGreen_; }
    static ::g::Uno::Float4 colorRed_;
    static ::g::Uno::Float4& colorRed() { return StaticResources_typeof()->Init(), colorRed_; }
    static ::g::Uno::Float4 colorWhite_;
    static ::g::Uno::Float4& colorWhite() { return StaticResources_typeof()->Init(), colorWhite_; }
    static uSStrong< ::g::Fuse::Font*> FontAwesome_;
    static uSStrong< ::g::Fuse::Font*>& FontAwesome() { return StaticResources_typeof()->Init(), FontAwesome_; }
    static uSStrong< ::g::Fuse::Font*> RegularFont_;
    static uSStrong< ::g::Fuse::Font*>& RegularFont() { return StaticResources_typeof()->Init(), RegularFont_; }
    static float sizeL_;
    static float& sizeL() { return StaticResources_typeof()->Init(), sizeL_; }
    static float sizeM_;
    static float& sizeM() { return StaticResources_typeof()->Init(), sizeM_; }
    static float sizeS_;
    static float& sizeS() { return StaticResources_typeof()->Init(), sizeS_; }
    static float sizeXL_;
    static float& sizeXL() { return StaticResources_typeof()->Init(), sizeXL_; }
    static float sizeXS_;
    static float& sizeXS() { return StaticResources_typeof()->Init(), sizeXS_; }
    static float sizeXXS_;
    static float& sizeXXS() { return StaticResources_typeof()->Init(), sizeXXS_; }
};
// }

} // ::g
