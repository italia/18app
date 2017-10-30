// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls/1.3.1/ContentControl.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Control.h>
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
namespace g{namespace Fuse{namespace Controls{struct ContentControl;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{

// public class ContentControl :18
// {
struct ContentControl_type : ::g::Fuse::Controls::Control_type
{
    void(*fp_OnContentChanged)(::g::Fuse::Controls::ContentControl*);
};

ContentControl_type* ContentControl_typeof();
void ContentControl__ctor_5_fn(ContentControl* __this);
void ContentControl__ArrangePaddingBox_fn(ContentControl* __this, ::g::Fuse::LayoutParams* lp);
void ContentControl__get_Content_fn(ContentControl* __this, ::g::Fuse::Elements::Element** __retval);
void ContentControl__set_Content_fn(ContentControl* __this, ::g::Fuse::Elements::Element* value);
void ContentControl__GetContentSize_fn(ContentControl* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void ContentControl__OnChildAdded_fn(ContentControl* __this, ::g::Fuse::Node* n);
void ContentControl__OnChildRemoved_fn(ContentControl* __this, ::g::Fuse::Node* n);
void ContentControl__OnContentChanged_fn(ContentControl* __this);

struct ContentControl : ::g::Fuse::Controls::Control
{
    void ctor_5();
    ::g::Fuse::Elements::Element* Content();
    void Content(::g::Fuse::Elements::Element* value);
    void OnContentChanged() { (((ContentControl_type*)__type)->fp_OnContentChanged)(this); }
    static void OnContentChanged(ContentControl* __this) { ContentControl__OnContentChanged_fn(__this); }
};
// }

}}} // ::g::Fuse::Controls
