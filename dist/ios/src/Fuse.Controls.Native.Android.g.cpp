// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.Android.GraphicsViewBase.h>
#include <Fuse.Controls.Native.Android.ScrollView.h>
#include <Fuse.Controls.Native.Android.TextureView.h>
#include <Fuse.Controls.Native.Android.TextView.h>
#include <Fuse.Controls.Native.IScrollViewHost.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/Android/GraphicsView.uno
// ---------------------------------------------------------------------------------

// public abstract extern class GraphicsViewBase :8
// {
static void GraphicsViewBase_build(uType* type)
{
}

uType* GraphicsViewBase_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(GraphicsViewBase);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.GraphicsViewBase", options);
    type->fp_build_ = GraphicsViewBase_build;
    return type;
}

// protected generated GraphicsViewBase() :8
void GraphicsViewBase__ctor__fn(GraphicsViewBase* __this)
{
    __this->ctor_();
}

// protected generated GraphicsViewBase() [instance] :8
void GraphicsViewBase::ctor_()
{
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/Android/ScrollView.uno
// -------------------------------------------------------------------------------

// public sealed extern class ScrollView :7
// {
static void ScrollView_build(uType* type)
{
}

uType* ScrollView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(ScrollView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.ScrollView", options);
    type->fp_build_ = ScrollView_build;
    return type;
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host) :10
void ScrollView__ctor__fn(ScrollView* __this, uObject* host)
{
    __this->ctor_(host);
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host) :10
void ScrollView__New1_fn(uObject* host, ScrollView** __retval)
{
    *__retval = ScrollView::New1(host);
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host) [instance] :10
void ScrollView::ctor_(uObject* host)
{
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host) [static] :10
ScrollView* ScrollView::New1(uObject* host)
{
    ScrollView* obj1 = (ScrollView*)uNew(ScrollView_typeof());
    obj1->ctor_(host);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/Android/TextureView.uno
// --------------------------------------------------------------------------------

// public sealed extern class TextureView :6
// {
static void TextureView_build(uType* type)
{
}

uType* TextureView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::GraphicsViewBase_typeof();
    options.ObjectSize = sizeof(TextureView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.TextureView", options);
    type->fp_build_ = TextureView_build;
    type->fp_ctor_ = (void*)TextureView__New1_fn;
    return type;
}

// public generated TextureView() :6
void TextureView__ctor_1_fn(TextureView* __this)
{
    __this->ctor_1();
}

// public generated TextureView New() :6
void TextureView__New1_fn(TextureView** __retval)
{
    *__retval = TextureView::New1();
}

// public generated TextureView() [instance] :6
void TextureView::ctor_1()
{
    ctor_();
}

// public generated TextureView New() [static] :6
TextureView* TextureView::New1()
{
    TextureView* obj1 = (TextureView*)uNew(TextureView_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/Android/TextView.uno
// -----------------------------------------------------------------------------

// public sealed extern class TextView :7
// {
static void TextView_build(uType* type)
{
}

uType* TextView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(TextView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.Android.TextView", options);
    type->fp_build_ = TextView_build;
    type->fp_ctor_ = (void*)TextView__New1_fn;
    return type;
}

// public generated TextView() :7
void TextView__ctor__fn(TextView* __this)
{
    __this->ctor_();
}

// public generated TextView New() :7
void TextView__New1_fn(TextView** __retval)
{
    *__retval = TextView::New1();
}

// public generated TextView() [instance] :7
void TextView::ctor_()
{
}

// public generated TextView New() [static] :7
TextView* TextView::New1()
{
    TextView* obj1 = (TextView*)uNew(TextView_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}}}}} // ::g::Fuse::Controls::Native::Android
