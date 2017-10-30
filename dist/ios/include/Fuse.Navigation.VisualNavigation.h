// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/VisualNavigation.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IParentObserver.h>
#include <Fuse.IProperties.h>
#include <Fuse.Navigation.IBaseNavigation.h>
#include <Fuse.Navigation.INavigation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigationPageState;}}}
namespace g{namespace Fuse{namespace Navigation{struct PageData;}}}
namespace g{namespace Fuse{namespace Navigation{struct VisualNavigation;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public interfacemodifiers class VisualNavigation :11
// {
struct VisualNavigation_type : ::g::Fuse::Node_type
{
    ::g::Fuse::Navigation::INavigation interface6;
    ::g::Fuse::IParentObserver interface7;
    ::g::Fuse::Navigation::IBaseNavigation interface8;
    void(*fp_get_Active)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual**);
    void(*fp_set_Active)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*);
    void(*fp_get_CanGoBack)(::g::Fuse::Navigation::VisualNavigation*, bool*);
    void(*fp_get_CanGoForward)(::g::Fuse::Navigation::VisualNavigation*, bool*);
    void(*fp_GetPageState)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*, ::g::Fuse::Navigation::NavigationPageState*);
    void(*fp_GoBack)(::g::Fuse::Navigation::VisualNavigation*);
    void(*fp_GoForward)(::g::Fuse::Navigation::VisualNavigation*);
    void(*fp_Goto)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*, int*);
    void(*fp_OnChildAddedWhileRooted)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Node*);
    void(*fp_OnChildRemovedWhileRooted)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Node*);
    void(*fp_Toggle)(::g::Fuse::Navigation::VisualNavigation*, ::g::Fuse::Visual*);
};

VisualNavigation_type* VisualNavigation_typeof();
void VisualNavigation__ctor_3_fn(VisualNavigation* __this);
void VisualNavigation__get_ActivePage_fn(VisualNavigation* __this, ::g::Fuse::Visual** __retval);
void VisualNavigation__add_ActivePageChanged_fn(VisualNavigation* __this, uDelegate* value);
void VisualNavigation__remove_ActivePageChanged_fn(VisualNavigation* __this, uDelegate* value);
void VisualNavigation__get_CanGoBack_fn(VisualNavigation* __this, bool* __retval);
void VisualNavigation__get_CanGoForward_fn(VisualNavigation* __this, bool* __retval);
void VisualNavigation__GetPage_fn(VisualNavigation* __this, int* index, ::g::Fuse::Visual** __retval);
void VisualNavigation__GetPageData_fn(VisualNavigation* __this, ::g::Fuse::Visual* page, ::g::Fuse::Navigation::PageData** __retval);
void VisualNavigation__GetPageIndex_fn(VisualNavigation* __this, ::g::Fuse::Visual* child, int* __retval);
void VisualNavigation__GetPageState_fn(VisualNavigation* __this, ::g::Fuse::Visual* page, ::g::Fuse::Navigation::NavigationPageState* __retval);
void VisualNavigation__GoBack_fn(VisualNavigation* __this);
void VisualNavigation__GoForward_fn(VisualNavigation* __this);
void VisualNavigation__gotoNode_fn(::g::Fuse::Scripting::Context* c, VisualNavigation* nav, uArray* args);
void VisualNavigation__get_HasPages_fn(VisualNavigation* __this, bool* __retval);
void VisualNavigation__add_HistoryChanged_fn(VisualNavigation* __this, uDelegate* value);
void VisualNavigation__remove_HistoryChanged_fn(VisualNavigation* __this, uDelegate* value);
void VisualNavigation__add_Navigated_fn(VisualNavigation* __this, uDelegate* value);
void VisualNavigation__remove_Navigated_fn(VisualNavigation* __this, uDelegate* value);
void VisualNavigation__OnActiveChanged_fn(VisualNavigation* __this, ::g::Fuse::Visual* newElement);
void VisualNavigation__OnChildAddedWhileRooted_fn(VisualNavigation* __this, ::g::Fuse::Node* child);
void VisualNavigation__OnChildMovedWhileRooted_fn(VisualNavigation* __this, ::g::Fuse::Node* child);
void VisualNavigation__OnChildRemovedWhileRooted_fn(VisualNavigation* __this, ::g::Fuse::Node* child);
void VisualNavigation__OnHistoryChanged_fn(VisualNavigation* __this);
void VisualNavigation__OnNavigated_fn(VisualNavigation* __this, ::g::Fuse::Visual* newElement);
void VisualNavigation__OnPageCountChanged_fn(VisualNavigation* __this);
void VisualNavigation__OnPageProgressChanged_fn(VisualNavigation* __this, double* current, double* prev, int* mode);
void VisualNavigation__OnPageProgressChanged1_fn(VisualNavigation* __this, int* mode);
void VisualNavigation__OnRooted_fn(VisualNavigation* __this);
void VisualNavigation__OnStateChanged_fn(VisualNavigation* __this, int* newState);
void VisualNavigation__OnUnrooted_fn(VisualNavigation* __this);
void VisualNavigation__get_PageCount_fn(VisualNavigation* __this, int* __retval);
void VisualNavigation__add_PageCountChanged_fn(VisualNavigation* __this, uDelegate* value);
void VisualNavigation__remove_PageCountChanged_fn(VisualNavigation* __this, uDelegate* value);
void VisualNavigation__add_PageProgressChanged_fn(VisualNavigation* __this, uDelegate* value);
void VisualNavigation__remove_PageProgressChanged_fn(VisualNavigation* __this, uDelegate* value);
void VisualNavigation__get_Pages_fn(VisualNavigation* __this, uObject** __retval);
void VisualNavigation__get_State_fn(VisualNavigation* __this, int* __retval);
void VisualNavigation__add_StateChanged_fn(VisualNavigation* __this, uDelegate* value);
void VisualNavigation__remove_StateChanged_fn(VisualNavigation* __this, uDelegate* value);
void VisualNavigation__Toggle_fn(VisualNavigation* __this, ::g::Fuse::Visual* page);
void VisualNavigation__UpdatePages_fn(VisualNavigation* __this);

struct VisualNavigation : ::g::Fuse::Behavior
{
    int _navState;
    uStrong< ::g::Uno::Collections::List*> _pages;
    static ::g::Uno::UX::Selector ActiveIndexName_;
    static ::g::Uno::UX::Selector& ActiveIndexName() { return VisualNavigation_typeof()->Init(), ActiveIndexName_; }
    uStrong<uDelegate*> ActivePageChanged1;
    uStrong<uDelegate*> HistoryChanged1;
    uStrong<uDelegate*> Navigated1;
    uStrong<uDelegate*> PageCountChanged1;
    uStrong<uDelegate*> PageProgressChanged1;
    uStrong<uDelegate*> StateChanged1;

    void ctor_3();
    ::g::Fuse::Visual* Active() { ::g::Fuse::Visual* __retval; return (((VisualNavigation_type*)__type)->fp_get_Active)(this, &__retval), __retval; }
    void Active(::g::Fuse::Visual* value) { (((VisualNavigation_type*)__type)->fp_set_Active)(this, value); }
    ::g::Fuse::Visual* ActivePage();
    void add_ActivePageChanged(uDelegate* value);
    void remove_ActivePageChanged(uDelegate* value);
    bool CanGoBack() { bool __retval; return (((VisualNavigation_type*)__type)->fp_get_CanGoBack)(this, &__retval), __retval; }
    bool CanGoForward() { bool __retval; return (((VisualNavigation_type*)__type)->fp_get_CanGoForward)(this, &__retval), __retval; }
    ::g::Fuse::Visual* GetPage(int index);
    ::g::Fuse::Navigation::PageData* GetPageData(::g::Fuse::Visual* page);
    int GetPageIndex(::g::Fuse::Visual* child);
    ::g::Fuse::Navigation::NavigationPageState GetPageState(::g::Fuse::Visual* page);
    void GoBack() { (((VisualNavigation_type*)__type)->fp_GoBack)(this); }
    void GoForward() { (((VisualNavigation_type*)__type)->fp_GoForward)(this); }
    void Goto(::g::Fuse::Visual* element, int mode) { (((VisualNavigation_type*)__type)->fp_Goto)(this, element, &mode); }
    bool HasPages();
    void add_HistoryChanged(uDelegate* value);
    void remove_HistoryChanged(uDelegate* value);
    void add_Navigated(uDelegate* value);
    void remove_Navigated(uDelegate* value);
    void OnActiveChanged(::g::Fuse::Visual* newElement);
    void OnChildAddedWhileRooted(::g::Fuse::Node* child) { (((VisualNavigation_type*)__type)->fp_OnChildAddedWhileRooted)(this, child); }
    void OnChildMovedWhileRooted(::g::Fuse::Node* child);
    void OnChildRemovedWhileRooted(::g::Fuse::Node* child) { (((VisualNavigation_type*)__type)->fp_OnChildRemovedWhileRooted)(this, child); }
    void OnHistoryChanged();
    void OnNavigated(::g::Fuse::Visual* newElement);
    void OnPageCountChanged();
    void OnPageProgressChanged(double current, double prev, int mode);
    void OnPageProgressChanged1(int mode);
    void OnStateChanged(int newState);
    int PageCount();
    void add_PageCountChanged(uDelegate* value);
    void remove_PageCountChanged(uDelegate* value);
    void add_PageProgressChanged(uDelegate* value);
    void remove_PageProgressChanged(uDelegate* value);
    uObject* Pages();
    int State();
    void add_StateChanged(uDelegate* value);
    void remove_StateChanged(uDelegate* value);
    void Toggle(::g::Fuse::Visual* page) { (((VisualNavigation_type*)__type)->fp_Toggle)(this, page); }
    void UpdatePages();
    static ::g::Fuse::Navigation::NavigationPageState GetPageState(VisualNavigation* __this, ::g::Fuse::Visual* page);
    static void GoBack(VisualNavigation* __this) { VisualNavigation__GoBack_fn(__this); }
    static void GoForward(VisualNavigation* __this) { VisualNavigation__GoForward_fn(__this); }
    static void gotoNode(::g::Fuse::Scripting::Context* c, VisualNavigation* nav, uArray* args);
    static void OnChildAddedWhileRooted(VisualNavigation* __this, ::g::Fuse::Node* child) { VisualNavigation__OnChildAddedWhileRooted_fn(__this, child); }
    static void OnChildRemovedWhileRooted(VisualNavigation* __this, ::g::Fuse::Node* child) { VisualNavigation__OnChildRemovedWhileRooted_fn(__this, child); }
    static void Toggle(VisualNavigation* __this, ::g::Fuse::Visual* page) { VisualNavigation__Toggle_fn(__this, page); }
    static bool CanGoBack(VisualNavigation* __this) { bool __retval; return VisualNavigation__get_CanGoBack_fn(__this, &__retval), __retval; }
    static bool CanGoForward(VisualNavigation* __this) { bool __retval; return VisualNavigation__get_CanGoForward_fn(__this, &__retval), __retval; }
};

}}} // ::g::Fuse::Navigation

#include <Fuse.Navigation.NavigationPageState.h>

namespace g{
namespace Fuse{
namespace Navigation{

inline ::g::Fuse::Navigation::NavigationPageState VisualNavigation::GetPageState(::g::Fuse::Visual* page) { ::g::Fuse::Navigation::NavigationPageState __retval; return (((VisualNavigation_type*)__type)->fp_GetPageState)(this, page, &__retval), __retval; }
inline ::g::Fuse::Navigation::NavigationPageState VisualNavigation::GetPageState(VisualNavigation* __this, ::g::Fuse::Visual* page) { ::g::Fuse::Navigation::NavigationPageState __retval; return VisualNavigation__GetPageState_fn(__this, page, &__retval), __retval; }
// }

}}} // ::g::Fuse::Navigation
