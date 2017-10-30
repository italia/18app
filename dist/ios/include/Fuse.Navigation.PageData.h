// This file was generated based on /usr/local/share/uno/Packages/Fuse.Navigation/1.3.1/PageData.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct PageData;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouterPage;}}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Navigation{

// internal sealed class PageData :12
// {
uType* PageData_typeof();
void PageData__ctor__fn(PageData* __this, ::g::Fuse::Visual* visual);
void PageData__AttachRouterPage_fn(PageData* __this, ::g::Fuse::Navigation::RouterPage* rp);
void PageData__get_Context_fn(PageData* __this, uObject** __retval);
void PageData__set_Context_fn(PageData* __this, uObject* value);
void PageData__Get_fn(::g::Fuse::Visual* v, PageData** __retval);
void PageData__GetOrCreate_fn(::g::Fuse::Visual* v, bool* allowCreate, PageData** __retval);
void PageData__New1_fn(::g::Fuse::Visual* visual, PageData** __retval);
void PageData__get_RouterPage_fn(PageData* __this, ::g::Fuse::Navigation::RouterPage** __retval);
void PageData__set_RouterPage_fn(PageData* __this, ::g::Fuse::Navigation::RouterPage* value);
void PageData__add_RouterPageChanged_fn(PageData* __this, uDelegate* value);
void PageData__remove_RouterPageChanged_fn(PageData* __this, uDelegate* value);
void PageData__SetContext_fn(PageData* __this, uObject* data);
void PageData__UpdateContextData_fn(PageData* __this, ::g::Fuse::Visual* page, uObject* data);
void PageData__get_Visual_fn(PageData* __this, ::g::Fuse::Visual** __retval);
void PageData__set_Visual_fn(PageData* __this, ::g::Fuse::Visual* value);

struct PageData : uObject
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _propPageData_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _propPageData() { return _propPageData_; }
    uStrong<uObject*> ControlPageData;
    int Index;
    float PreviousProgress;
    float Progress;
    uStrong<uObject*> _Context;
    uStrong< ::g::Fuse::Navigation::RouterPage*> _RouterPage;
    uWeak< ::g::Fuse::Visual*> _Visual;
    uStrong<uDelegate*> RouterPageChanged1;

    void ctor_(::g::Fuse::Visual* visual);
    void AttachRouterPage(::g::Fuse::Navigation::RouterPage* rp);
    uObject* Context();
    void Context(uObject* value);
    ::g::Fuse::Navigation::RouterPage* RouterPage();
    void RouterPage(::g::Fuse::Navigation::RouterPage* value);
    void add_RouterPageChanged(uDelegate* value);
    void remove_RouterPageChanged(uDelegate* value);
    void SetContext(uObject* data);
    void UpdateContextData(::g::Fuse::Visual* page, uObject* data);
    ::g::Fuse::Visual* Visual();
    void Visual(::g::Fuse::Visual* value);
    static PageData* Get(::g::Fuse::Visual* v);
    static PageData* GetOrCreate(::g::Fuse::Visual* v, bool allowCreate);
    static PageData* New1(::g::Fuse::Visual* visual);
};
// }

}}} // ::g::Fuse::Navigation
