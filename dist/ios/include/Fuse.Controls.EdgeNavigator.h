// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Navigation/1.3.1/EdgeNavigator.ScriptClass.uno.
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
namespace g{namespace Fuse{namespace Controls{struct EdgeNavigator;}}}
namespace g{namespace Fuse{namespace Controls{struct EdgeNavigator__ControlPageData;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Gestures{struct TappedArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct EdgeNavigation;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class EdgeNavigator :8
// {
::g::Fuse::Controls::Panel_type* EdgeNavigator_typeof();
void EdgeNavigator__ctor_7_fn(EdgeNavigator* __this);
void EdgeNavigator__CleanupChild_fn(EdgeNavigator* __this, EdgeNavigator__ControlPageData* pd, ::g::Fuse::Visual* elm);
void EdgeNavigator__CleanupChild1_fn(EdgeNavigator* __this, ::g::Fuse::Node* o);
void EdgeNavigator__dismiss_fn(::g::Fuse::Scripting::Context* c, EdgeNavigator* e, uArray* args);
void EdgeNavigator__Dismiss_fn(EdgeNavigator* __this);
void EdgeNavigator__GetControlPageData_fn(::g::Fuse::Elements::Element* elm, bool* create, EdgeNavigator__ControlPageData** __retval);
void EdgeNavigator__GotoEdge_fn(EdgeNavigator* __this, int* edge);
void EdgeNavigator__New4_fn(EdgeNavigator** __retval);
void EdgeNavigator__OnChildAdded_fn(EdgeNavigator* __this, ::g::Fuse::Node* o);
void EdgeNavigator__OnChildRemoved_fn(EdgeNavigator* __this, ::g::Fuse::Node* o);
void EdgeNavigator__OnRooted_fn(EdgeNavigator* __this);
void EdgeNavigator__OnTapped_fn(EdgeNavigator* __this, uObject* s, ::g::Fuse::Gestures::TappedArgs* args);
void EdgeNavigator__OnUnrooted_fn(EdgeNavigator* __this);
void EdgeNavigator__open_fn(::g::Fuse::Scripting::Context* c, EdgeNavigator* e, uArray* args);
void EdgeNavigator__SetupEdge_fn(EdgeNavigator* __this, EdgeNavigator__ControlPageData* pd, ::g::Fuse::Elements::Element* elm, ::g::Uno::Float2* rel, int* align);
void EdgeNavigator__UpdateChild_fn(EdgeNavigator* __this, ::g::Fuse::Node* o);

struct EdgeNavigator : ::g::Fuse::Controls::Panel
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _controlPageDataProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _controlPageDataProperty() { return EdgeNavigator_typeof()->Init(), _controlPageDataProperty_; }
    uStrong< ::g::Fuse::Navigation::EdgeNavigation*> _navigation;

    void ctor_7();
    void CleanupChild(EdgeNavigator__ControlPageData* pd, ::g::Fuse::Visual* elm);
    void CleanupChild1(::g::Fuse::Node* o);
    void Dismiss();
    void GotoEdge(int edge);
    void OnTapped(uObject* s, ::g::Fuse::Gestures::TappedArgs* args);
    void SetupEdge(EdgeNavigator__ControlPageData* pd, ::g::Fuse::Elements::Element* elm, ::g::Uno::Float2 rel, int align);
    void UpdateChild(::g::Fuse::Node* o);
    static void dismiss(::g::Fuse::Scripting::Context* c, EdgeNavigator* e, uArray* args);
    static EdgeNavigator__ControlPageData* GetControlPageData(::g::Fuse::Elements::Element* elm, bool create);
    static EdgeNavigator* New4();
    static void open(::g::Fuse::Scripting::Context* c, EdgeNavigator* e, uArray* args);
};
// }

}}} // ::g::Fuse::Controls
