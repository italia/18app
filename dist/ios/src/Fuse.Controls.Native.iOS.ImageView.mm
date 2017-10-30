// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/iOS/ImageView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.ImageHandle.h>
#include <Fuse.Controls.Native.ImageLoader.h>
#include <Fuse.Controls.Native.iOS.ImageView.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Controls.Native.ViewHandle.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Resources.FileImageSource.h>
#include <Fuse.Resources.HttpImageSource.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.Resources.MultiDensityImageSource.h>
#include <ObjC.Object.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float3.h>
#include <Uno.Int.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.UX.FileSource.h>
#include <uObjC.Foreign.h>
#include <Uno.Float2.h>
#include <Uno.Float4x4.h>
static uString* STRINGS[4];
static uType* TYPES[7];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class ImageView :14
// {
static void ImageView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("MultiDensityImageSource in a native context not supported");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/iOS/ImageView.uno");
    ::STRINGS[2] = uString::Const("UpdateImage");
    ::STRINGS[3] = uString::Const(" not supported in native context");
    ::TYPES[0] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Controls::Native::ImageHandle_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::IDisposable_typeof();
    ::TYPES[3] = ::g::ObjC::Object_typeof();
    ::TYPES[4] = ::g::Fuse::Resources::FileImageSource_typeof();
    ::TYPES[5] = ::g::Fuse::Resources::HttpImageSource_typeof();
    ::TYPES[6] = ::g::Fuse::Resources::MultiDensityImageSource_typeof();
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Fuse::Controls::Native::ImageLoader_typeof());
    type->SetInterfaces(
        ::TYPES[2/*Uno.IDisposable*/], offsetof(ImageView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(ImageView_type, interface1),
        ::g::Fuse::Controls::Native::IImageView_typeof(), offsetof(ImageView_type, interface2));
    type->SetFields(10,
        ::TYPES[2/*Uno.IDisposable*/], offsetof(ImageView, _imageHandle), 0,
        ::g::Uno::Float4_typeof(), offsetof(ImageView, _tintColor), 0,
        ::TYPES[3/*ObjC.Object*/], offsetof(ImageView, _uiImageHandle), 0,
        ::TYPES[3/*ObjC.Object*/], offsetof(ImageView, _uiImageView), 0);
}

ImageView_type* ImageView_typeof()
{
    static uSStrong<ImageView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::LeafView_typeof();
    options.FieldCount = 14;
    options.InterfaceCount = 3;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(ImageView);
    options.TypeSize = sizeof(ImageView_type);
    type = (ImageView_type*)uClassType::New("Fuse.Controls.Native.iOS.ImageView", options);
    type->fp_build_ = ImageView_build;
    type->fp_ctor_ = (void*)ImageView__New3_fn;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::ViewHandle*))ImageView__Dispose_fn;
    type->interface2.fp_UpdateImageTransform = (void(*)(uObject*, float*, ::g::Uno::Float2*, ::g::Uno::Float2*, ::g::Uno::Float2*))ImageView__UpdateImageTransform_fn;
    type->interface2.fp_set_ImageSource = (void(*)(uObject*, ::g::Fuse::Resources::ImageSource*))ImageView__set_ImageSource_fn;
    type->interface2.fp_set_TintColor = (void(*)(uObject*, ::g::Uno::Float4*))ImageView__set_TintColor_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ImageView__Dispose_fn;
    return type;
}

// public ImageView() :55
void ImageView__ctor_5_fn(ImageView* __this)
{
    __this->ctor_5();
}

// private static void ClearImage(ObjC.Object imageViewHandle) :218
void ImageView__ClearImage_fn(::g::ObjC::Object* imageViewHandle)
{
    ImageView::ClearImage(imageViewHandle);
}

// private static ObjC.Object Create() :225
void ImageView__Create_fn(::g::ObjC::Object** __retval)
{
    *__retval = ImageView::Create();
}

// private static ObjC.Object CreateImageView(ObjC.Object container) :236
void ImageView__CreateImageView_fn(::g::ObjC::Object* container, ::g::ObjC::Object** __retval)
{
    *__retval = ImageView::CreateImageView(container);
}

// public override sealed void Dispose() :68
void ImageView__Dispose_fn(ImageView* __this)
{
    ::g::Fuse::Controls::Native::ViewHandle__Dispose_fn(__this);
    __this->ImageHandle(NULL);
}

// private static float GetImageHeight(ObjC.Object handle) :181
void ImageView__GetImageHeight_fn(::g::ObjC::Object* handle, float* __retval)
{
    *__retval = ImageView::GetImageHeight(handle);
}

// private float2 GetImageSize() :164
void ImageView__GetImageSize_fn(ImageView* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetImageSize();
}

// private static float GetImageWidth(ObjC.Object handle) :172
void ImageView__GetImageWidth_fn(::g::ObjC::Object* handle, float* __retval)
{
    *__retval = ImageView::GetImageWidth(handle);
}

// private void set_ImageHandle(Fuse.Controls.Native.ImageHandle value) :78
void ImageView__set_ImageHandle_fn(ImageView* __this, ::g::Fuse::Controls::Native::ImageHandle* value)
{
    __this->ImageHandle(value);
}

// public void set_ImageSource(Fuse.Resources.ImageSource value) :18
void ImageView__set_ImageSource_fn(ImageView* __this, ::g::Fuse::Resources::ImageSource* value)
{
    __this->ImageSource(value);
}

// public ImageView New() :55
void ImageView__New3_fn(ImageView** __retval)
{
    *__retval = ImageView::New3();
}

// private void OnImageLoaded(Fuse.Controls.Native.ImageHandle handle) :107
void ImageView__OnImageLoaded_fn(ImageView* __this, ::g::Fuse::Controls::Native::ImageHandle* handle)
{
    __this->OnImageLoaded(handle);
}

// private void OnImageLoadFailed(Uno.Exception e) :112
void ImageView__OnImageLoadFailed_fn(ImageView* __this, ::g::Uno::Exception* e)
{
    __this->OnImageLoadFailed(e);
}

// private static void SetAnchorPoint(ObjC.Object handle) :62
void ImageView__SetAnchorPoint_fn(::g::ObjC::Object* handle)
{
    ImageView::SetAnchorPoint(handle);
}

// private static void SetBounds(ObjC.Object handle, float x, float y, float w, float h) :158
void ImageView__SetBounds_fn(::g::ObjC::Object* handle, float* x, float* y, float* w, float* h)
{
    ImageView::SetBounds(handle, *x, *y, *w, *h);
}

// private static void SetImage(ObjC.Object imageViewHandle, ObjC.Object uiImageHandle) :190
void ImageView__SetImage_fn(::g::ObjC::Object* imageViewHandle, ::g::ObjC::Object* uiImageHandle)
{
    ImageView::SetImage(imageViewHandle, uiImageHandle);
}

// private static void SetTransform(ObjC.Object handle, float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) :141
void ImageView__SetTransform2_fn(::g::ObjC::Object* handle, float* m11, float* m12, float* m13, float* m14, float* m21, float* m22, float* m23, float* m24, float* m31, float* m32, float* m33, float* m34, float* m41, float* m42, float* m43, float* m44)
{
    ImageView::SetTransform2(handle, *m11, *m12, *m13, *m14, *m21, *m22, *m23, *m24, *m31, *m32, *m33, *m34, *m41, *m42, *m43, *m44);
}

// private static void SetTransform(ObjC.Object handle, float4x4 t) :131
void ImageView__SetTransform3_fn(::g::ObjC::Object* handle, ::g::Uno::Float4x4* t)
{
    ImageView::SetTransform3(handle, *t);
}

// public void set_TintColor(float4 value) :38
void ImageView__set_TintColor_fn(ImageView* __this, ::g::Uno::Float4* value)
{
    __this->TintColor(*value);
}

// private static ObjC.Object TintImage(ObjC.Object handle, float r, float g, float b, float a) :198
void ImageView__TintImage_fn(::g::ObjC::Object* handle, float* r, float* g, float* b, float* a, ::g::ObjC::Object** __retval)
{
    *__retval = ImageView::TintImage(handle, *r, *g, *b, *a);
}

// private void UpdateImage() :45
void ImageView__UpdateImage_fn(ImageView* __this)
{
    __this->UpdateImage();
}

// private void UpdateImage(Fuse.Resources.FileImageSource fileImageSource) :97
void ImageView__UpdateImage1_fn(ImageView* __this, ::g::Fuse::Resources::FileImageSource* fileImageSource)
{
    __this->UpdateImage1(fileImageSource);
}

// private void UpdateImage(Fuse.Resources.HttpImageSource http) :102
void ImageView__UpdateImage2_fn(ImageView* __this, ::g::Fuse::Resources::HttpImageSource* http)
{
    __this->UpdateImage2(http);
}

// private void UpdateImage(Fuse.Resources.MultiDensityImageSource multi) :117
void ImageView__UpdateImage3_fn(ImageView* __this, ::g::Fuse::Resources::MultiDensityImageSource* multi)
{
    __this->UpdateImage3(multi);
}

// public void UpdateImageTransform(float density, float2 origin, float2 scale, float2 drawSize) :122
void ImageView__UpdateImageTransform_fn(ImageView* __this, float* density, ::g::Uno::Float2* origin, ::g::Uno::Float2* scale, ::g::Uno::Float2* drawSize)
{
    __this->UpdateImageTransform(*density, *origin, *scale, *drawSize);
}

// public ImageView() [instance] :55
void ImageView::ctor_5()
{
    _tintColor = ::g::Uno::Float4__New1(1.0f);
    ctor_4(ImageView::Create());
    _uiImageView = ImageView::CreateImageView(Handle());
    ImageView::SetAnchorPoint(_uiImageView);
}

// private float2 GetImageSize() [instance] :164
::g::Uno::Float2 ImageView::GetImageSize()
{
    return ::g::Uno::Float2__New2(ImageView::GetImageWidth(_uiImageView), ImageView::GetImageHeight(_uiImageView));
}

// private void set_ImageHandle(Fuse.Controls.Native.ImageHandle value) [instance] :78
void ImageView::ImageHandle(::g::Fuse::Controls::Native::ImageHandle* value)
{
    if (_imageHandle != NULL)
    {
        ImageView::ClearImage(_uiImageView);
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_imageHandle), ::TYPES[2/*Uno.IDisposable*/]));
        _imageHandle = NULL;
    }

    _imageHandle = (uObject*)value;

    if (_imageHandle != NULL)
    {
        _uiImageHandle = uCast< ::g::ObjC::Object*>(uPtr(value)->Handle(), ::TYPES[3/*ObjC.Object*/]);
        UpdateImage();
    }
}

// public void set_ImageSource(Fuse.Resources.ImageSource value) [instance] :18
void ImageView::ImageSource(::g::Fuse::Resources::ImageSource* value)
{
    if (value == NULL)
        ImageHandle(NULL);
    else if (uIs(value, ::TYPES[4/*Fuse.Resources.FileImageSource*/]))
        UpdateImage1(uCast< ::g::Fuse::Resources::FileImageSource*>(value, ::TYPES[4/*Fuse.Resources.FileImageSource*/]));
    else if (uIs(value, ::TYPES[5/*Fuse.Resources.HttpImageSource*/]))
        UpdateImage2(uCast< ::g::Fuse::Resources::HttpImageSource*>(value, ::TYPES[5/*Fuse.Resources.HttpImageSource*/]));
    else if (uIs(value, ::TYPES[6/*Fuse.Resources.MultiDensityImageSource*/]))
        UpdateImage3(uCast< ::g::Fuse::Resources::MultiDensityImageSource*>(value, ::TYPES[6/*Fuse.Resources.MultiDensityImageSource*/]));
    else
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition(value, ::STRINGS[3/*" not suppor...*/])));
}

// private void OnImageLoaded(Fuse.Controls.Native.ImageHandle handle) [instance] :107
void ImageView::OnImageLoaded(::g::Fuse::Controls::Native::ImageHandle* handle)
{
    ImageHandle(handle);
}

// private void OnImageLoadFailed(Uno.Exception e) [instance] :112
void ImageView::OnImageLoadFailed(::g::Uno::Exception* e)
{
    ImageHandle(NULL);
}

// public void set_TintColor(float4 value) [instance] :38
void ImageView::TintColor(::g::Uno::Float4 value)
{
    _tintColor = value;
    UpdateImage();
}

// private void UpdateImage() [instance] :45
void ImageView::UpdateImage()
{
    ::g::Uno::Float4 c = _tintColor;
    ::g::ObjC::Object* imageHandle = (_uiImageHandle != NULL) ? (::g::ObjC::Object*)ImageView::TintImage(_uiImageHandle, c.X, c.Y, c.Z, c.W) : NULL;
    ImageView::SetImage(_uiImageView, imageHandle);
}

// private void UpdateImage(Fuse.Resources.FileImageSource fileImageSource) [instance] :97
void ImageView::UpdateImage1(::g::Fuse::Resources::FileImageSource* fileImageSource)
{
    ImageHandle(::g::Fuse::Controls::Native::ImageLoader::Load3(uPtr(fileImageSource)->File()));
}

// private void UpdateImage(Fuse.Resources.HttpImageSource http) [instance] :102
void ImageView::UpdateImage2(::g::Fuse::Resources::HttpImageSource* http)
{
    uPtr(::g::Fuse::Controls::Native::ImageLoader::Load(http))->Then1(uDelegate::New(::TYPES[0/*Uno.Action<Fuse.Controls.Native.ImageHandle>*/], (void*)ImageView__OnImageLoaded_fn, this), uDelegate::New(::TYPES[1/*Uno.Action<Uno.Exception>*/], (void*)ImageView__OnImageLoadFailed_fn, this));
}

// private void UpdateImage(Fuse.Resources.MultiDensityImageSource multi) [instance] :117
void ImageView::UpdateImage3(::g::Fuse::Resources::MultiDensityImageSource* multi)
{
    ::g::Fuse::Diagnostics::Unsupported(::STRINGS[0/*"MultiDensit...*/], this, ::STRINGS[1/*"/usr/local/...*/], 119, ::STRINGS[2/*"UpdateImage"*/]);
}

// public void UpdateImageTransform(float density, float2 origin, float2 scale, float2 drawSize) [instance] :122
void ImageView::UpdateImageTransform(float density, ::g::Uno::Float2 origin, ::g::Uno::Float2 scale, ::g::Uno::Float2 drawSize)
{
    ImageView::SetTransform3(_uiImageView, ::g::Uno::Float4x4__Identity());
    ::g::Uno::Float2 imageSize = GetImageSize();
    ImageView::SetBounds(_uiImageView, 0.0f, 0.0f, imageSize.X, imageSize.Y);
    ::g::Uno::Float4x4 imageTransform = ::g::Uno::Matrix::Compose(::g::Uno::Float3__New4(scale, 0.0f), ::g::Uno::Float4__Identity(), ::g::Uno::Float3__New4(origin, 0.0f));
    ImageView::SetTransform3(_uiImageView, imageTransform);
}

// private static void ClearImage(ObjC.Object imageViewHandle) [static] :218
void ImageView::ClearImage(::g::ObjC::Object* imageViewHandle)
{
    @autoreleasepool
    {
        [] (::id imageViewHandle) -> void
        {
            UIImageView* imageView = (UIImageView*)imageViewHandle;
            [imageView setImage:nil];
        } (::g::ObjC::Object::GetHandle(imageViewHandle));
        
    }
    
}

// private static ObjC.Object Create() [static] :225
::g::ObjC::Object* ImageView::Create()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            UIControl* uicontrol = [[UIControl alloc] init];
            [uicontrol setMultipleTouchEnabled:true];
            [uicontrol setAutoresizesSubviews:false];
            [uicontrol setTranslatesAutoresizingMaskIntoConstraints:false];
            [uicontrol setClipsToBounds:true];
            return uicontrol;
        } ());
        
    }
    
}

// private static ObjC.Object CreateImageView(ObjC.Object container) [static] :236
::g::ObjC::Object* ImageView::CreateImageView(::g::ObjC::Object* container)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id container) -> ::id
        {
            UIImageView* imageView = [[UIImageView alloc] init];
            [container addSubview:imageView];
            return imageView;
        } (::g::ObjC::Object::GetHandle(container)));
        
    }
    
}

// private static float GetImageHeight(ObjC.Object handle) [static] :181
float ImageView::GetImageHeight(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return [] (::id handle) -> float
        {
            UIImageView* imageView = (UIImageView*)handle;
            return (imageView.image)
            	? (float)imageView.image.size.height
            	: 0.0f;
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// private static float GetImageWidth(ObjC.Object handle) [static] :172
float ImageView::GetImageWidth(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        return [] (::id handle) -> float
        {
            UIImageView* imageView = (UIImageView*)handle;
            return (imageView.image)
            	? (float)imageView.image.size.width
            	: 0.0f;
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// public ImageView New() [static] :55
ImageView* ImageView::New3()
{
    ImageView* obj1 = (ImageView*)uNew(ImageView_typeof());
    obj1->ctor_5();
    return obj1;
}

// private static void SetAnchorPoint(ObjC.Object handle) [static] :62
void ImageView::SetAnchorPoint(::g::ObjC::Object* handle)
{
    @autoreleasepool
    {
        [] (::id handle) -> void
        {
            ::UIView* view = (::UIView*)handle;
            [[view layer] setAnchorPoint: { 0.0f, 0.0f }];
        } (::g::ObjC::Object::GetHandle(handle));
        
    }
    
}

// private static void SetBounds(ObjC.Object handle, float x, float y, float w, float h) [static] :158
void ImageView::SetBounds(::g::ObjC::Object* handle, float x, float y, float w, float h)
{
    @autoreleasepool
    {
        [] (::id handle, float x, float y, float w, float h) -> void
        {
            ::UIView* view = (::UIView*)handle;
            [view setBounds: { { x, y }, { w, h } }];
        } (::g::ObjC::Object::GetHandle(handle), x, y, w, h);
        
    }
    
}

// private static void SetImage(ObjC.Object imageViewHandle, ObjC.Object uiImageHandle) [static] :190
void ImageView::SetImage(::g::ObjC::Object* imageViewHandle, ::g::ObjC::Object* uiImageHandle)
{
    @autoreleasepool
    {
        [] (::id imageViewHandle, ::id uiImageHandle) -> void
        {
            UIImageView* imageView = (UIImageView*)imageViewHandle;
            UIImage* image = (UIImage*)uiImageHandle;
            [imageView setImage:image];
        } (::g::ObjC::Object::GetHandle(imageViewHandle), ::g::ObjC::Object::GetHandle(uiImageHandle));
        
    }
    
}

// private static void SetTransform(ObjC.Object handle, float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) [static] :141
void ImageView::SetTransform2(::g::ObjC::Object* handle, float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44)
{
    @autoreleasepool
    {
        [] (::id handle, float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) -> void
        {
            CATransform3D transform = {
            	m11, m12, m13, m14,
            	m21, m22, m23, m24,
            	m31, m32, m33, m34,
            	m41, m42, m43, m44
            };
            ::UIView* view = (::UIView*)handle;
            [[view layer] setTransform:transform];
        } (::g::ObjC::Object::GetHandle(handle), m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, m41, m42, m43, m44);
        
    }
    
}

// private static void SetTransform(ObjC.Object handle, float4x4 t) [static] :131
void ImageView::SetTransform3(::g::ObjC::Object* handle, ::g::Uno::Float4x4 t)
{
    ImageView::SetTransform2(handle, t.M11, t.M12, t.M13, t.M14, t.M21, t.M22, t.M23, t.M24, t.M31, t.M32, t.M33, t.M34, t.M41, t.M42, t.M43, t.M44);
}

// private static ObjC.Object TintImage(ObjC.Object handle, float r, float g, float b, float a) [static] :198
::g::ObjC::Object* ImageView::TintImage(::g::ObjC::Object* handle, float r, float g, float b, float a)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id handle, float r, float g, float b, float a) -> ::id
        {
            UIImage* image = (UIImage*)handle;
            UIGraphicsBeginImageContextWithOptions(image.size, NO, image.scale);
            CGRect imageRect = CGRectMake(0.0f, 0.0f, image.size.width, image.size.height);
            CGContextRef ctx = UIGraphicsGetCurrentContext();
            [[UIColor colorWithRed:r green:g blue:b alpha:a] setFill];
            CGContextTranslateCTM(ctx, 0, image.size.height);
            CGContextScaleCTM(ctx, 1.0, -1.0);
            CGContextSetBlendMode(ctx, kCGBlendModeMultiply);
            CGContextDrawImage(ctx, imageRect, image.CGImage);
            CGContextClipToMask(ctx, imageRect, image.CGImage);
            CGContextAddRect(ctx, imageRect);
            CGContextDrawPath(ctx, kCGPathFill);
            UIImage* result = UIGraphicsGetImageFromCurrentImageContext();
            UIGraphicsEndImageContext();
            return result;
        } (::g::ObjC::Object::GetHandle(handle), r, g, b, a));
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
