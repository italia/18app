// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/PageBinding.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Navigation.IPageResourceBinding.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigatedArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct PageExpression;}}}
namespace g{namespace Fuse{namespace Navigation{struct PageExpression__Subscription;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Navigation{

// private sealed class PageExpression.Subscription :31
// {
struct PageExpression__Subscription_type : uType
{
    ::g::Uno::IDisposable interface0;
    ::g::Fuse::Navigation::IPageResourceBinding interface1;
};

PageExpression__Subscription_type* PageExpression__Subscription_typeof();
void PageExpression__Subscription__ctor__fn(PageExpression__Subscription* __this, ::g::Fuse::Navigation::PageExpression* pe, ::g::Fuse::Node* node, uObject* listener);
void PageExpression__Subscription__Acceptor_fn(PageExpression__Subscription* __this, uObject* obj, bool* __retval);
void PageExpression__Subscription__Dispose_fn(PageExpression__Subscription* __this);
void PageExpression__Subscription__GotoPage_fn(PageExpression__Subscription* __this, ::g::Fuse::Visual* page);
void PageExpression__Subscription__get_LocalObject_fn(PageExpression__Subscription* __this, uObject** __retval);
void PageExpression__Subscription__New1_fn(::g::Fuse::Navigation::PageExpression* pe, ::g::Fuse::Node* node, uObject* listener, PageExpression__Subscription** __retval);
void PageExpression__Subscription__OnChanged_fn(PageExpression__Subscription* __this);
void PageExpression__Subscription__OnNavigated_fn(PageExpression__Subscription* __this, uObject* s, ::g::Fuse::Navigation::NavigatedArgs* args);
void PageExpression__Subscription__ReleaseCurrent_fn(PageExpression__Subscription* __this);
void PageExpression__Subscription__UpdateSource_fn(PageExpression__Subscription* __this);

struct PageExpression__Subscription : uObject
{
    uStrong< ::g::Fuse::Visual*> _currentPage;
    uStrong<uObject*> _listener;
    uStrong<uObject*> _nav;
    uStrong< ::g::Fuse::Node*> _node;
    uStrong< ::g::Fuse::Navigation::PageExpression*> _pe;

    void ctor_(::g::Fuse::Navigation::PageExpression* pe, ::g::Fuse::Node* node, uObject* listener);
    bool Acceptor(uObject* obj);
    void Dispose();
    void GotoPage(::g::Fuse::Visual* page);
    uObject* LocalObject();
    void OnChanged();
    void OnNavigated(uObject* s, ::g::Fuse::Navigation::NavigatedArgs* args);
    void ReleaseCurrent();
    void UpdateSource();
    static PageExpression__Subscription* New1(::g::Fuse::Navigation::PageExpression* pe, ::g::Fuse::Node* node, uObject* listener);
};
// }

}}} // ::g::Fuse::Navigation
