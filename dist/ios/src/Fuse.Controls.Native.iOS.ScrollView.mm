// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/iOS/ScrollView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <CoreGraphics/CoreGraphics.h>
#include <Fuse.Controls.Native.iOS.ScrollView.h>
#include <Fuse.Controls.Native.IScrollViewHost.h>
#include <Fuse.Controls.Native.ViewHandle.h>
#include <Fuse.Controls.Native.ViewHandle.InputMode.h>
#include <Fuse.Controls.ScrollDirections.h>
#include <iOS/Helpers.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Action-1.h>
#include <Uno.Float.h>
#include <uObjC.Foreign.h>
#include <Uno.Float2.h>
static uType* TYPES[2];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class ScrollView :16
// {
static void ScrollView_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action1_typeof()->MakeType(::g::ObjC::Object_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Controls::Native::IScrollViewHost_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ScrollView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(ScrollView_type, interface1),
        ::g::Fuse::Controls::Native::IScrollView_typeof(), offsetof(ScrollView_type, interface2));
    type->SetFields(10,
        ::g::ObjC::Object_typeof(), offsetof(ScrollView, _delegateHandle), 0,
        ::TYPES[1/*Fuse.Controls.Native.IScrollViewHost*/], offsetof(ScrollView, _host), 0);
}

ScrollView_type* ScrollView_typeof()
{
    static uSStrong<ScrollView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::View_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ScrollView);
    options.TypeSize = sizeof(ScrollView_type);
    type = (ScrollView_type*)uClassType::New("Fuse.Controls.Native.iOS.ScrollView", options);
    type->fp_build_ = ScrollView_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))ScrollView__Dispose_fn;
    type->fp_OnSizeChanged = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))ScrollView__OnSizeChanged_fn;
    type->interface2.fp_set_ScrollPosition = (void(*)(uObject*, ::g::Uno::Float2*))ScrollView__set_ScrollPosition_fn;
    type->interface2.fp_set_AllowedScrollDirections = (void(*)(uObject*, int*))ScrollView__set_AllowedScrollDirections_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ScrollView__Dispose_fn;
    return type;
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host) :32
void ScrollView__ctor_4_fn(ScrollView* __this, uObject* host)
{
    __this->ctor_4(host);
}

// private static ObjC.Object AddCallback(ObjC.Object handle, Uno.Action<ObjC.Object> callback) :54
void ScrollView__AddCallback_fn(::g::ObjC::Object* handle, uDelegate* callback, ::g::ObjC::Object** __retval)
{
    *__retval = ScrollView::AddCallback(handle, callback);
}

// public void set_AllowedScrollDirections(Fuse.Controls.ScrollDirections value) :23
void ScrollView__set_AllowedScrollDirections_fn(ScrollView* __this, int* value)
{
    __this->AllowedScrollDirections(*value);
}

// private static ObjC.Object Create() :45
void ScrollView__Create_fn(::g::ObjC::Object** __retval)
{
    *__retval = ScrollView::Create();
}

// public override sealed void Dispose() :38
void ScrollView__Dispose_fn(ScrollView* __this)
{
    __this->_host = NULL;
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
}

// private static void GetContentOffset(ObjC.Object handle, float& x, float& y) :87
void ScrollView__GetContentOffset_fn(::g::ObjC::Object* handle, float* x, float* y)
{
    ScrollView::GetContentOffset(handle, x, y);
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host) :32
void ScrollView__New3_fn(uObject* host, ScrollView** __retval)
{
    *__retval = ScrollView::New3(host);
}

// private void OnScrollViewDidScroll(ObjC.Object scrollViewHandle) :63
void ScrollView__OnScrollViewDidScroll_fn(ScrollView* __this, ::g::ObjC::Object* scrollViewHandle)
{
    __this->OnScrollViewDidScroll(scrollViewHandle);
}

// protected internal override sealed void OnSizeChanged() :71
void ScrollView__OnSizeChanged_fn(ScrollView* __this)
{
    ScrollView::SetContentSize(__this->Handle(), __this->Size().X, __this->Size().Y);
}

// public void set_ScrollPosition(float2 value) :28
void ScrollView__set_ScrollPosition_fn(ScrollView* __this, ::g::Uno::Float2* value)
{
    __this->ScrollPosition(*value);
}

// private static void SetContentOffset(ObjC.Object handle, float x, float y) :77
void ScrollView__SetContentOffset_fn(::g::ObjC::Object* handle, float* x, float* y)
{
    ScrollView::SetContentOffset(handle, *x, *y);
}

// private static void SetContentSize(ObjC.Object handle, float w, float h) :96
void ScrollView__SetContentSize_fn(::g::ObjC::Object* handle, float* w, float* h)
{
    ScrollView::SetContentSize(handle, *w, *h);
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host) [instance] :32
void ScrollView::ctor_4(uObject* host)
{
    ctor_2(ScrollView::Create(), 0);
    _host = host;
    _delegateHandle = ScrollView::AddCallback(Handle(), uDelegate::New(::TYPES[0/*Uno.Action<ObjC.Object>*/], (void*)ScrollView__OnScrollViewDidScroll_fn, this));
}

// public void set_AllowedScrollDirections(Fuse.Controls.ScrollDirections value) [instance] :23
void ScrollView::AllowedScrollDirections(int value)
{
}

// private void OnScrollViewDidScroll(ObjC.Object scrollViewHandle) [instance] :63
void ScrollView::OnScrollViewDidScroll(::g::ObjC::Object* scrollViewHandle)
{
    float x = 0.0f;
    float y = 0.0f;
    ScrollView::GetContentOffset(Handle(), &x, &y);
    ::g::Fuse::Controls::Native::IScrollViewHost::OnScrollPositionChanged(uInterface(uPtr(_host), ::TYPES[1/*Fuse.Controls.Native.IScrollViewHost*/]), ::g::Uno::Float2__New2(x, y));
}

// public void set_ScrollPosition(float2 value) [instance] :28
void ScrollView::ScrollPosition(::g::Uno::Float2 value)
{
    ScrollView::SetContentOffset(Handle(), value.X, value.Y);
}

// private static ObjC.Object AddCallback(ObjC.Object handle, Uno.Action<ObjC.Object> callback) [static] :54
::g::ObjC::Object* ScrollView::AddCallback(::g::ObjC::Object* handle, uDelegate* callback)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id handle, ::uObjC::Function<void, ::id> callback) -> ::id
        {
            ScrollViewDelegate* del = [[ScrollViewDelegate alloc] init];
            [del setDidScrollCallback: callback];
            ::UIScrollView* scrollView =  (::UIScrollView*)handle;
            [scrollView setDelegate:del];
            return del;
        } (::g::ObjC::Object::GetHandle(handle), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::id>
        {
            return __delegateRef == nil ? (::uObjC::Function<void, ::id>)nil : (^ void (::id arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::g::ObjC::Object::Create(arg));
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: callback])));
        
    }
    
}

// private static ObjC.Object Create() [static] :45
::g::ObjC::Object* ScrollView::Create()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            ::UIScrollView* scrollView = [[::UIScrollView alloc] init];
            [scrollView setMultipleTouchEnabled:true];
            [scrollView setOpaque:true];
            return  scrollView;
        } ());
        
    }
    
}

// private static void GetContentOffset(ObjC.Object handle, float& x, float& y) [static] :87
void ScrollView::GetContentOffset(::g::ObjC::Object* handle, float* x, float* y)
{
    @autoreleasepool
    {
        [] (::id handle, float* x, float* y) -> void
        {
            ::UIScrollView* scrollView = (::UIScrollView*)handle;
            CGPoint offset = [scrollView contentOffset];
            *x = offset.x;
            *y = offset.y;
        } (::g::ObjC::Object::GetHandle(handle), x, y);
        
    }
    
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host) [static] :32
ScrollView* ScrollView::New3(uObject* host)
{
    ScrollView* obj1 = (ScrollView*)uNew(ScrollView_typeof());
    obj1->ctor_4(host);
    return obj1;
}

// private static void SetContentOffset(ObjC.Object handle, float x, float y) [static] :77
void ScrollView::SetContentOffset(::g::ObjC::Object* handle, float x, float y)
{
    @autoreleasepool
    {
        [] (::id handle, float x, float y) -> void
        {
            ::UIScrollView* scrollView = (::UIScrollView*)handle;
            CGPoint p = { 0 };
            p.x = (CGFloat)x;
            p.y = (CGFloat)y;
            [scrollView setContentOffset:p];
        } (::g::ObjC::Object::GetHandle(handle), x, y);
        
    }
    
}

// private static void SetContentSize(ObjC.Object handle, float w, float h) [static] :96
void ScrollView::SetContentSize(::g::ObjC::Object* handle, float w, float h)
{
    @autoreleasepool
    {
        [] (::id handle, float w, float h) -> void
        {
            ::UIScrollView* scrollView = (::UIScrollView*)handle;
            CGSize size = { 0 };
            size.width = (CGFloat)w;
            size.height = (CGFloat)h;
            [scrollView setContentSize:size];
        } (::g::ObjC::Object::GetHandle(handle), w, h);
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
