// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/iOS/ImageView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.IImageView.h>
#include <Fuse.Controls.Native.iOS.LeafView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.Float4.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct ImageView;}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ImageHandle;}}}}
namespace g{namespace Fuse{namespace Resources{struct FileImageSource;}}}
namespace g{namespace Fuse{namespace Resources{struct HttpImageSource;}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSource;}}}
namespace g{namespace Fuse{namespace Resources{struct MultiDensityImageSource;}}}
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{struct Exception;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class ImageView :14
// {
struct ImageView_type : ::g::Fuse::Controls::Native::iOS::View_type
{
    ::g::Fuse::Controls::Native::IImageView interface2;
};

ImageView_type* ImageView_typeof();
void ImageView__ctor_5_fn(ImageView* __this);
void ImageView__ClearImage_fn(::g::ObjC::Object* imageViewHandle);
void ImageView__Create_fn(::g::ObjC::Object** __retval);
void ImageView__CreateImageView_fn(::g::ObjC::Object* container, ::g::ObjC::Object** __retval);
void ImageView__Dispose_fn(ImageView* __this);
void ImageView__GetImageHeight_fn(::g::ObjC::Object* handle, float* __retval);
void ImageView__GetImageSize_fn(ImageView* __this, ::g::Uno::Float2* __retval);
void ImageView__GetImageWidth_fn(::g::ObjC::Object* handle, float* __retval);
void ImageView__set_ImageHandle_fn(ImageView* __this, ::g::Fuse::Controls::Native::ImageHandle* value);
void ImageView__set_ImageSource_fn(ImageView* __this, ::g::Fuse::Resources::ImageSource* value);
void ImageView__New3_fn(ImageView** __retval);
void ImageView__OnImageLoaded_fn(ImageView* __this, ::g::Fuse::Controls::Native::ImageHandle* handle);
void ImageView__OnImageLoadFailed_fn(ImageView* __this, ::g::Uno::Exception* e);
void ImageView__SetAnchorPoint_fn(::g::ObjC::Object* handle);
void ImageView__SetBounds_fn(::g::ObjC::Object* handle, float* x, float* y, float* w, float* h);
void ImageView__SetImage_fn(::g::ObjC::Object* imageViewHandle, ::g::ObjC::Object* uiImageHandle);
void ImageView__SetTransform2_fn(::g::ObjC::Object* handle, float* m11, float* m12, float* m13, float* m14, float* m21, float* m22, float* m23, float* m24, float* m31, float* m32, float* m33, float* m34, float* m41, float* m42, float* m43, float* m44);
void ImageView__SetTransform3_fn(::g::ObjC::Object* handle, ::g::Uno::Float4x4* t);
void ImageView__set_TintColor_fn(ImageView* __this, ::g::Uno::Float4* value);
void ImageView__TintImage_fn(::g::ObjC::Object* handle, float* r, float* g, float* b, float* a, ::g::ObjC::Object** __retval);
void ImageView__UpdateImage_fn(ImageView* __this);
void ImageView__UpdateImage1_fn(ImageView* __this, ::g::Fuse::Resources::FileImageSource* fileImageSource);
void ImageView__UpdateImage2_fn(ImageView* __this, ::g::Fuse::Resources::HttpImageSource* http);
void ImageView__UpdateImage3_fn(ImageView* __this, ::g::Fuse::Resources::MultiDensityImageSource* multi);
void ImageView__UpdateImageTransform_fn(ImageView* __this, float* density, ::g::Uno::Float2* origin, ::g::Uno::Float2* scale, ::g::Uno::Float2* drawSize);

struct ImageView : ::g::Fuse::Controls::Native::iOS::LeafView
{
    uStrong<uObject*> _imageHandle;
    ::g::Uno::Float4 _tintColor;
    uStrong< ::g::ObjC::Object*> _uiImageHandle;
    uStrong< ::g::ObjC::Object*> _uiImageView;

    void ctor_5();
    ::g::Uno::Float2 GetImageSize();
    void ImageHandle(::g::Fuse::Controls::Native::ImageHandle* value);
    void ImageSource(::g::Fuse::Resources::ImageSource* value);
    void OnImageLoaded(::g::Fuse::Controls::Native::ImageHandle* handle);
    void OnImageLoadFailed(::g::Uno::Exception* e);
    void TintColor(::g::Uno::Float4 value);
    void UpdateImage();
    void UpdateImage1(::g::Fuse::Resources::FileImageSource* fileImageSource);
    void UpdateImage2(::g::Fuse::Resources::HttpImageSource* http);
    void UpdateImage3(::g::Fuse::Resources::MultiDensityImageSource* multi);
    void UpdateImageTransform(float density, ::g::Uno::Float2 origin, ::g::Uno::Float2 scale, ::g::Uno::Float2 drawSize);
    static void ClearImage(::g::ObjC::Object* imageViewHandle);
    static ::g::ObjC::Object* Create();
    static ::g::ObjC::Object* CreateImageView(::g::ObjC::Object* container);
    static float GetImageHeight(::g::ObjC::Object* handle);
    static float GetImageWidth(::g::ObjC::Object* handle);
    static ImageView* New3();
    static void SetAnchorPoint(::g::ObjC::Object* handle);
    static void SetBounds(::g::ObjC::Object* handle, float x, float y, float w, float h);
    static void SetImage(::g::ObjC::Object* imageViewHandle, ::g::ObjC::Object* uiImageHandle);
    static void SetTransform2(::g::ObjC::Object* handle, float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44);
    static void SetTransform3(::g::ObjC::Object* handle, ::g::Uno::Float4x4 t);
    static ::g::ObjC::Object* TintImage(::g::ObjC::Object* handle, float r, float g, float b, float a);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
