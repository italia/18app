// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/iOS/View.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.IView.h>
#include <Fuse.Controls.Native.ViewHandle.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct View;}}}}}
namespace g{namespace ObjC{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public abstract extern class View :9
// {
struct View_type : ::g::Fuse::Controls::Native::ViewHandle_type
{
    ::g::Fuse::Controls::Native::IView interface1;
};

View_type* View_typeof();
void View__ctor_2_fn(View* __this, ::g::ObjC::Object* handle, int* inputmode);
void View__ctor_3_fn(View* __this, ::g::ObjC::Object* handle, bool* isLeafView, int* inputmode);
void View__get_Handle_fn(View* __this, ::g::ObjC::Object** __retval);

struct View : ::g::Fuse::Controls::Native::ViewHandle
{
    uStrong< ::g::ObjC::Object*> _handle;

    void ctor_2(::g::ObjC::Object* handle, int inputmode);
    void ctor_3(::g::ObjC::Object* handle, bool isLeafView, int inputmode);
    ::g::ObjC::Object* Handle();
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
