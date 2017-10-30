// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Navigation/1.3.1/NavigationControl.Pages.uno.
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
#include <Fuse.Navigation.IBaseNavigation.h>
#include <Fuse.Navigation.INavigation.h>
#include <Fuse.Node.h>
#include <Fuse.Node.ISubtreeDataProvider.h>
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct NavigationControl;}}}
namespace g{namespace Fuse{namespace Controls{struct NavigationControl__ControlPageData;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationPageState;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouterPage;}}}
namespace g{namespace Fuse{namespace Navigation{struct VisualNavigation;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{struct PropertyHandle;}}

namespace g{
namespace Fuse{
namespace Controls{

// public interfacemodifiers class NavigationControl :6
// {
struct NavigationControl_type : ::g::Fuse::Controls::Panel_type
{
    ::g::Fuse::Navigation::INavigation interface18;
    ::g::Fuse::Reactive::IObserver interface19;
    ::g::Fuse::Node__ISubtreeDataProvider interface20;
    ::g::Fuse::Navigation::IBaseNavigation interface21;
    void(*fp_CreateTriggers)(::g::Fuse::Controls::NavigationControl*, ::g::Fuse::Elements::Element*, ::g::Fuse::Controls::NavigationControl__ControlPageData*);
    void(*fp_UpdateInteraction)(::g::Fuse::Controls::NavigationControl*);
    void(*fp_UpdateProgress)(::g::Fuse::Controls::NavigationControl*, ::g::Fuse::Elements::Element*, ::g::Fuse::Navigation::NavigationPageState*, ::g::Fuse::Controls::NavigationControl__ControlPageData*);
};

NavigationControl_type* NavigationControl_typeof();
void NavigationControl__ctor_7_fn(NavigationControl* __this);
void NavigationControl__get_Active_fn(NavigationControl* __this, ::g::Fuse::Visual** __retval);
void NavigationControl__set_Active_fn(NavigationControl* __this, ::g::Fuse::Visual* value);
void NavigationControl__add_ActivePageChanged_fn(NavigationControl* __this, uDelegate* value);
void NavigationControl__remove_ActivePageChanged_fn(NavigationControl* __this, uDelegate* value);
void NavigationControl__alterPath_fn(::g::Fuse::Scripting::Context* c, NavigationControl* nav, uArray* args, uString* opName, int* gotoMode);
void NavigationControl__get_AncestorPage_fn(NavigationControl* __this, ::g::Fuse::Visual** __retval);
void NavigationControl__set_AncestorPage_fn(NavigationControl* __this, ::g::Fuse::Visual* value);
void NavigationControl__get_AncestorRouterPage_fn(NavigationControl* __this, ::g::Fuse::Navigation::RouterPage** __retval);
void NavigationControl__set_AncestorRouterPage_fn(NavigationControl* __this, ::g::Fuse::Navigation::RouterPage* value);
void NavigationControl__get_CanGoBack_fn(NavigationControl* __this, bool* __retval);
void NavigationControl__get_CanGoForward_fn(NavigationControl* __this, bool* __retval);
void NavigationControl__CleanupTriggers_fn(NavigationControl* __this, ::g::Fuse::Elements::Element* page, NavigationControl__ControlPageData* data);
void NavigationControl__CompatibleParameter_fn(NavigationControl* __this, uString* a, uString* b, bool* __retval);
void NavigationControl__FullUpdatePages_fn(NavigationControl* __this, int* flags);
void NavigationControl__FuseNavigationINavigationget_ActivePage_fn(NavigationControl* __this, ::g::Fuse::Visual** __retval);
void NavigationControl__FuseNavigationINavigationGetPageState_fn(NavigationControl* __this, ::g::Fuse::Visual* page, ::g::Fuse::Navigation::NavigationPageState* __retval);
void NavigationControl__FuseNavigationINavigationget_State_fn(NavigationControl* __this, int* __retval);
void NavigationControl__FuseNodeISubtreeDataProviderGetData_fn(NavigationControl* __this, ::g::Fuse::Node* n, uObject** __retval);
void NavigationControl__FuseReactiveIObserverOnAdd_fn(NavigationControl* __this, uObject* value);
void NavigationControl__FuseReactiveIObserverOnClear_fn(NavigationControl* __this);
void NavigationControl__FuseReactiveIObserverOnFailed_fn(NavigationControl* __this, uString* message);
void NavigationControl__FuseReactiveIObserverOnInsertAt_fn(NavigationControl* __this, int* index, uObject* value);
void NavigationControl__FuseReactiveIObserverOnNewAll_fn(NavigationControl* __this, uObject* values);
void NavigationControl__FuseReactiveIObserverOnNewAt_fn(NavigationControl* __this, int* index, uObject* value);
void NavigationControl__FuseReactiveIObserverOnRemoveAt_fn(NavigationControl* __this, int* index);
void NavigationControl__FuseReactiveIObserverOnSet_fn(NavigationControl* __this, uObject* newValue);
void NavigationControl__GetControlPageData_fn(::g::Fuse::Visual* elm, bool* create, NavigationControl__ControlPageData** __retval);
void NavigationControl__GetObjectPath_fn(NavigationControl* __this, uObject* data, uString** __retval);
void NavigationControl__GetTransition_fn(::g::Fuse::Visual* elm, int* __retval);
void NavigationControl__GoBack_fn(NavigationControl* __this);
void NavigationControl__GoForward_fn(NavigationControl* __this);
void NavigationControl__Goto_fn(NavigationControl* __this, ::g::Fuse::Visual* node, int* mode);
void NavigationControl__gotoPath_fn(::g::Fuse::Scripting::Context* c, NavigationControl* nav, uArray* args);
void NavigationControl__add_HistoryChanged_fn(NavigationControl* __this, uDelegate* value);
void NavigationControl__remove_HistoryChanged_fn(NavigationControl* __this, uDelegate* value);
void NavigationControl__IsEmptyParameter_fn(NavigationControl* __this, uString* a, bool* __retval);
void NavigationControl__get_IsRouterOutlet_fn(NavigationControl* __this, bool* __retval);
void NavigationControl__set_IsRouterOutlet_fn(NavigationControl* __this, bool* value);
void NavigationControl__add_Navigated_fn(NavigationControl* __this, uDelegate* value);
void NavigationControl__remove_Navigated_fn(NavigationControl* __this, uDelegate* value);
void NavigationControl__get_Navigation_fn(NavigationControl* __this, ::g::Fuse::Navigation::VisualNavigation** __retval);
void NavigationControl__OnChildAdded_fn(NavigationControl* __this, ::g::Fuse::Node* n);
void NavigationControl__OnChildRemoved_fn(NavigationControl* __this, ::g::Fuse::Node* n);
void NavigationControl__OnPageHistoryChanged_fn(NavigationControl* __this);
void NavigationControl__OnPageHistoryUnrooted_fn(NavigationControl* __this);
void NavigationControl__OnPageProgressChanged_fn(NavigationControl* __this, uObject* page, ::g::Fuse::Navigation::NavigationArgs* args);
void NavigationControl__OnRooted_fn(NavigationControl* __this);
void NavigationControl__OnRootedPreChildren_fn(NavigationControl* __this);
void NavigationControl__OnRouterPageChanged_fn(NavigationControl* __this, uObject* sender, ::g::Fuse::Navigation::RouterPage* routerPage);
void NavigationControl__OnUnrooted_fn(NavigationControl* __this);
void NavigationControl__add_PageProgressChanged_fn(NavigationControl* __this, uDelegate* value);
void NavigationControl__remove_PageProgressChanged_fn(NavigationControl* __this, uDelegate* value);
void NavigationControl__PageTransition_fn(NavigationControl* __this, ::g::Fuse::Visual* elm, int* __retval);
void NavigationControl__get_RouterOutletType_fn(NavigationControl* __this, int* __retval);
void NavigationControl__seekToPath_fn(::g::Fuse::Scripting::Context* c, NavigationControl* nav, uArray* args);
void NavigationControl__SetNavigation_fn(NavigationControl* __this, ::g::Fuse::Navigation::VisualNavigation* nav);
void NavigationControl__add_StateChanged_fn(NavigationControl* __this, uDelegate* value);
void NavigationControl__remove_StateChanged_fn(NavigationControl* __this, uDelegate* value);
void NavigationControl__Toggle_fn(NavigationControl* __this, ::g::Fuse::Visual* node);
void NavigationControl__get_Transition_fn(NavigationControl* __this, int* __retval);
void NavigationControl__set_Transition_fn(NavigationControl* __this, int* value);
void NavigationControl__UpdateChild_fn(NavigationControl* __this, ::g::Fuse::Elements::Element* c);
void NavigationControl__UpdateInteraction_fn(NavigationControl* __this);
void NavigationControl__UpdateProgress_fn(NavigationControl* __this, ::g::Fuse::Elements::Element* page, ::g::Fuse::Navigation::NavigationPageState* state, NavigationControl__ControlPageData* pd);

struct NavigationControl : ::g::Fuse::Controls::Panel
{
    int _curPageIndex;
    bool _isRouterOutlet;
    uStrong< ::g::Fuse::Navigation::VisualNavigation*> _navigation;
    uStrong<uObject*> _pageHistory;
    static uSStrong< ::g::Fuse::PropertyHandle*> _propTransition_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _propTransition() { return NavigationControl_typeof()->Init(), _propTransition_; }
    int _transition;
    uStrong< ::g::Fuse::Visual*> _AncestorPage;
    uStrong< ::g::Fuse::Navigation::RouterPage*> _AncestorRouterPage;

    void ctor_7();
    ::g::Fuse::Visual* Active();
    void Active(::g::Fuse::Visual* value);
    void add_ActivePageChanged(uDelegate* value);
    void remove_ActivePageChanged(uDelegate* value);
    ::g::Fuse::Visual* AncestorPage();
    void AncestorPage(::g::Fuse::Visual* value);
    ::g::Fuse::Navigation::RouterPage* AncestorRouterPage();
    void AncestorRouterPage(::g::Fuse::Navigation::RouterPage* value);
    bool CanGoBack();
    bool CanGoForward();
    void CleanupTriggers(::g::Fuse::Elements::Element* page, NavigationControl__ControlPageData* data);
    bool CompatibleParameter(uString* a, uString* b);
    void CreateTriggers(::g::Fuse::Elements::Element* c, NavigationControl__ControlPageData* pd) { (((NavigationControl_type*)__type)->fp_CreateTriggers)(this, c, pd); }
    void FullUpdatePages(int flags);
    uString* GetObjectPath(uObject* data);
    void GoBack();
    void GoForward();
    void Goto(::g::Fuse::Visual* node, int mode);
    void add_HistoryChanged(uDelegate* value);
    void remove_HistoryChanged(uDelegate* value);
    bool IsEmptyParameter(uString* a);
    bool IsRouterOutlet();
    void IsRouterOutlet(bool value);
    void add_Navigated(uDelegate* value);
    void remove_Navigated(uDelegate* value);
    ::g::Fuse::Navigation::VisualNavigation* Navigation();
    void OnPageHistoryChanged();
    void OnPageHistoryUnrooted();
    void OnPageProgressChanged(uObject* page, ::g::Fuse::Navigation::NavigationArgs* args);
    void OnRouterPageChanged(uObject* sender, ::g::Fuse::Navigation::RouterPage* routerPage);
    void add_PageProgressChanged(uDelegate* value);
    void remove_PageProgressChanged(uDelegate* value);
    int PageTransition(::g::Fuse::Visual* elm);
    int RouterOutletType();
    void SetNavigation(::g::Fuse::Navigation::VisualNavigation* nav);
    void add_StateChanged(uDelegate* value);
    void remove_StateChanged(uDelegate* value);
    void Toggle(::g::Fuse::Visual* node);
    int Transition();
    void Transition(int value);
    void UpdateChild(::g::Fuse::Elements::Element* c);
    void UpdateInteraction() { (((NavigationControl_type*)__type)->fp_UpdateInteraction)(this); }
    void UpdateProgress(::g::Fuse::Elements::Element* page, ::g::Fuse::Navigation::NavigationPageState state, NavigationControl__ControlPageData* pd);
    static void alterPath(::g::Fuse::Scripting::Context* c, NavigationControl* nav, uArray* args, uString* opName, int gotoMode);
    static NavigationControl__ControlPageData* GetControlPageData(::g::Fuse::Visual* elm, bool create);
    static int GetTransition(::g::Fuse::Visual* elm);
    static void gotoPath(::g::Fuse::Scripting::Context* c, NavigationControl* nav, uArray* args);
    static void seekToPath(::g::Fuse::Scripting::Context* c, NavigationControl* nav, uArray* args);
    static void UpdateInteraction(NavigationControl* __this) { NavigationControl__UpdateInteraction_fn(__this); }
    static void UpdateProgress(NavigationControl* __this, ::g::Fuse::Elements::Element* page, ::g::Fuse::Navigation::NavigationPageState state, NavigationControl__ControlPageData* pd);
};

}}} // ::g::Fuse::Controls

#include <Fuse.Navigation.NavigationPageState.h>

namespace g{
namespace Fuse{
namespace Controls{

inline void NavigationControl::UpdateProgress(::g::Fuse::Elements::Element* page, ::g::Fuse::Navigation::NavigationPageState state, NavigationControl__ControlPageData* pd) { (((NavigationControl_type*)__type)->fp_UpdateProgress)(this, page, &state, pd); }
inline void NavigationControl::UpdateProgress(NavigationControl* __this, ::g::Fuse::Elements::Element* page, ::g::Fuse::Navigation::NavigationPageState state, NavigationControl__ControlPageData* pd) { NavigationControl__UpdateProgress_fn(__this, page, &state, pd); }
// }

}}} // ::g::Fuse::Controls
