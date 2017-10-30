// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/iOS/ScrollView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Controls.Native.IScrollView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct ScrollView;}}}}}
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class ScrollView :16
// {
struct ScrollView_type : ::g::Fuse::Controls::Native::iOS::View_type
{
    ::g::Fuse::Controls::Native::IScrollView interface2;
};

ScrollView_type* ScrollView_typeof();
void ScrollView__ctor_4_fn(ScrollView* __this, uObject* host);
void ScrollView__AddCallback_fn(::g::ObjC::Object* handle, uDelegate* callback, ::g::ObjC::Object** __retval);
void ScrollView__set_AllowedScrollDirections_fn(ScrollView* __this, int* value);
void ScrollView__Create_fn(::g::ObjC::Object** __retval);
void ScrollView__Dispose_fn(ScrollView* __this);
void ScrollView__GetContentOffset_fn(::g::ObjC::Object* handle, float* x, float* y);
void ScrollView__New3_fn(uObject* host, ScrollView** __retval);
void ScrollView__OnScrollViewDidScroll_fn(ScrollView* __this, ::g::ObjC::Object* scrollViewHandle);
void ScrollView__OnSizeChanged_fn(ScrollView* __this);
void ScrollView__set_ScrollPosition_fn(ScrollView* __this, ::g::Uno::Float2* value);
void ScrollView__SetContentOffset_fn(::g::ObjC::Object* handle, float* x, float* y);
void ScrollView__SetContentSize_fn(::g::ObjC::Object* handle, float* w, float* h);

struct ScrollView : ::g::Fuse::Controls::Native::iOS::View
{
    uStrong< ::g::ObjC::Object*> _delegateHandle;
    uStrong<uObject*> _host;

    void ctor_4(uObject* host);
    void AllowedScrollDirections(int value);
    void OnScrollViewDidScroll(::g::ObjC::Object* scrollViewHandle);
    void ScrollPosition(::g::Uno::Float2 value);
    static ::g::ObjC::Object* AddCallback(::g::ObjC::Object* handle, uDelegate* callback);
    static ::g::ObjC::Object* Create();
    static void GetContentOffset(::g::ObjC::Object* handle, float* x, float* y);
    static ScrollView* New3(uObject* host);
    static void SetContentOffset(::g::ObjC::Object* handle, float x, float y);
    static void SetContentSize(::g::ObjC::Object* handle, float w, float h);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
