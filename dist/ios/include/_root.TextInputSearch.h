// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/TextInputSearch.g.uno.
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
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct TextInputSearch;}

namespace g{

// public partial sealed class TextInputSearch :2
// {
::g::Fuse::Controls::Panel_type* TextInputSearch_typeof();
void TextInputSearch__ctor_7_fn(TextInputSearch* __this);
void TextInputSearch__InitializeUX_fn(TextInputSearch* __this);
void TextInputSearch__New4_fn(TextInputSearch** __retval);
void TextInputSearch__get_PlaceholderText_fn(TextInputSearch* __this, uString** __retval);
void TextInputSearch__set_PlaceholderText_fn(TextInputSearch* __this, uString* value);
void TextInputSearch__SetPlaceholderText_fn(TextInputSearch* __this, uString* value, uObject* origin);

struct TextInputSearch : ::g::Fuse::Controls::Panel
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return TextInputSearch_typeof()->Init(), __selector0_; }
    uStrong<uString*> _field_PlaceholderText;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb8;
    uStrong< ::g::Uno::UX::Property1*> temp_PlaceholderText_inst;

    void ctor_7();
    void InitializeUX();
    uString* PlaceholderText();
    void PlaceholderText(uString* value);
    void SetPlaceholderText(uString* value, uObject* origin);
    static TextInputSearch* New4();
};
// }

} // ::g
