// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/PageBinding.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Navigation.IPageResourceBinding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigatedArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct PageResourceBinding;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class PageResourceBinding<T> :160
// {
struct PageResourceBinding_type : ::g::Fuse::Node_type
{
    ::g::Fuse::Navigation::IPageResourceBinding interface6;
};

PageResourceBinding_type* PageResourceBinding_typeof();
void PageResourceBinding__Acceptor_fn(PageResourceBinding* __this, uObject* obj, bool* __retval);
void PageResourceBinding__GotoPage_fn(PageResourceBinding* __this, ::g::Fuse::Visual* page);
void PageResourceBinding__get_Key_fn(PageResourceBinding* __this, uString** __retval);
void PageResourceBinding__set_Key_fn(PageResourceBinding* __this, uString* value);
void PageResourceBinding__get_LocalObject_fn(PageResourceBinding* __this, uObject** __retval);
void PageResourceBinding__OnChanged_fn(PageResourceBinding* __this);
void PageResourceBinding__OnNavigated_fn(PageResourceBinding* __this, uObject* s, ::g::Fuse::Navigation::NavigatedArgs* args);
void PageResourceBinding__OnRooted_fn(PageResourceBinding* __this);
void PageResourceBinding__OnUnrooted_fn(PageResourceBinding* __this);
void PageResourceBinding__ReleaseCurrent_fn(PageResourceBinding* __this);
void PageResourceBinding__get_Target_fn(PageResourceBinding* __this, ::g::Uno::UX::Property1** __retval);
void PageResourceBinding__set_Target_fn(PageResourceBinding* __this, ::g::Uno::UX::Property1* value);
void PageResourceBinding__UpdateSource_fn(PageResourceBinding* __this);

struct PageResourceBinding : ::g::Fuse::Behavior
{
    uStrong< ::g::Fuse::Visual*> _currentPage;
    uTField _default() { return __type->Field(this, 16); }
    bool _hasDefault;
    uStrong<uObject*> _nav;
    uStrong<uString*> _Key;
    uStrong< ::g::Uno::UX::Property1*> _Target;

    bool Acceptor(uObject* obj);
    void GotoPage(::g::Fuse::Visual* page);
    uString* Key();
    void Key(uString* value);
    uObject* LocalObject();
    void OnChanged();
    void OnNavigated(uObject* s, ::g::Fuse::Navigation::NavigatedArgs* args);
    void ReleaseCurrent();
    ::g::Uno::UX::Property1* Target();
    void Target(::g::Uno::UX::Property1* value);
    void UpdateSource();
};
// }

}}} // ::g::Fuse::Navigation
