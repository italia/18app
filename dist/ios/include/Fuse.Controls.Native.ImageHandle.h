// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/ImageLoader.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ImageHandle;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// internal sealed extern class ImageHandle :15
// {
struct ImageHandle_type : uType
{
    ::g::Uno::IDisposable interface0;
};

ImageHandle_type* ImageHandle_typeof();
void ImageHandle__ctor__fn(ImageHandle* __this, uString* name, uObject* handle);
void ImageHandle__Dispose_fn(ImageHandle* __this);
void ImageHandle__get_Handle_fn(ImageHandle* __this, uObject** __retval);
void ImageHandle__get_Name_fn(ImageHandle* __this, uString** __retval);
void ImageHandle__New1_fn(uString* name, uObject* handle, ImageHandle** __retval);
void ImageHandle__Pin_fn(ImageHandle* __this);

struct ImageHandle : uObject
{
    uStrong<uObject*> _handle;
    bool _isDisposed;
    uStrong<uString*> _name;
    int _pinCount;

    void ctor_(uString* name, uObject* handle);
    void Dispose();
    uObject* Handle();
    uString* Name();
    void Pin();
    static ImageHandle* New1(uString* name, uObject* handle);
};
// }

}}}} // ::g::Fuse::Controls::Native
