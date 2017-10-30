// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/iOS/View.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Controls.Native.ViewHandle.InputMode.h>
#include <Fuse.Controls.Native.ViewHandle.Invalidation.h>
#include <ObjC.Object.h>
#include <Uno.Bool.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public abstract extern class View :9
// {
static void View_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(View_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(View_type, interface1));
    type->SetFields(9,
        ::g::ObjC::Object_typeof(), offsetof(View, _handle), 0);
}

View_type* View_typeof()
{
    static uSStrong<View_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::ViewHandle_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(View);
    options.TypeSize = sizeof(View_type);
    type = (View_type*)uClassType::New("Fuse.Controls.Native.iOS.View", options);
    type->fp_build_ = View_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// protected View(ObjC.Object handle, [Fuse.Controls.Native.ViewHandle.InputMode inputmode]) :15
void View__ctor_2_fn(View* __this, ::g::ObjC::Object* handle, int* inputmode)
{
    __this->ctor_2(handle, *inputmode);
}

// protected View(ObjC.Object handle, bool isLeafView, [Fuse.Controls.Native.ViewHandle.InputMode inputmode]) :17
void View__ctor_3_fn(View* __this, ::g::ObjC::Object* handle, bool* isLeafView, int* inputmode)
{
    __this->ctor_3(handle, *isLeafView, *inputmode);
}

// public ObjC.Object get_Handle() :11
void View__get_Handle_fn(View* __this, ::g::ObjC::Object** __retval)
{
    *__retval = __this->Handle();
}

// protected View(ObjC.Object handle, [Fuse.Controls.Native.ViewHandle.InputMode inputmode]) [instance] :15
void View::ctor_2(::g::ObjC::Object* handle, int inputmode)
{
    ctor_3(handle, false, inputmode);
}

// protected View(ObjC.Object handle, bool isLeafView, [Fuse.Controls.Native.ViewHandle.InputMode inputmode]) [instance] :17
void View::ctor_3(::g::ObjC::Object* handle, bool isLeafView, int inputmode)
{
    ctor_1(handle, isLeafView, inputmode, 0);
    _handle = handle;
}

// public ObjC.Object get_Handle() [instance] :11
::g::ObjC::Object* View::Handle()
{
    return _handle;
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
