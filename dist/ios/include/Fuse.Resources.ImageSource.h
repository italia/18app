// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Resources/ImageSource.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyObject.h>
namespace g{namespace Fuse{namespace Resources{struct ImageSource;}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSourceChangedArgs;}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSourceErrorArgs;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{struct EventArgs;}}
namespace g{namespace Uno{struct Exception;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Resources{

// public abstract class ImageSource :86
// {
struct ImageSource_type : uType
{
    void(*fp_GetTexture)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Graphics::Texture2D**);
    void(*fp_OnPinChanged)(::g::Fuse::Resources::ImageSource*);
    void(*fp_get_PixelSize)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Int2*);
    void(*fp_Reload)(::g::Fuse::Resources::ImageSource*);
    void(*fp_get_Size)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Float2*);
    void(*fp_get_SizeDensity)(::g::Fuse::Resources::ImageSource*, float*);
    void(*fp_get_State)(::g::Fuse::Resources::ImageSource*, int*);
};

ImageSource_type* ImageSource_typeof();
void ImageSource__ctor_1_fn(ImageSource* __this);
void ImageSource__add_Changed_fn(ImageSource* __this, uDelegate* value);
void ImageSource__remove_Changed_fn(ImageSource* __this, uDelegate* value);
void ImageSource__add_Error_fn(ImageSource* __this, uDelegate* value);
void ImageSource__remove_Error_fn(ImageSource* __this, uDelegate* value);
void ImageSource__FireChanged_fn(ImageSource* __this, ::g::Fuse::Resources::ImageSourceChangedArgs* args);
void ImageSource__FireError_fn(ImageSource* __this, ::g::Fuse::Resources::ImageSourceErrorArgs* args);
void ImageSource__get_IsPinned_fn(ImageSource* __this, bool* __retval);
void ImageSource__OnChanged_fn(ImageSource* __this);
void ImageSource__OnError_fn(ImageSource* __this, uString* msg, ::g::Uno::Exception* e);
void ImageSource__OnPinChanged_fn(ImageSource* __this);
void ImageSource__Pin_fn(ImageSource* __this);
void ImageSource__ProxyChanged_fn(ImageSource* __this, uObject* s, ::g::Uno::EventArgs* a);
void ImageSource__ProxyError_fn(ImageSource* __this, uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* a);
void ImageSource__Reload_fn(ImageSource* __this);
void ImageSource__Unpin_fn(ImageSource* __this);

struct ImageSource : ::g::Uno::UX::PropertyObject
{
    int _pinCount;
    uStrong<uDelegate*> Changed1;
    uStrong<uDelegate*> Error1;

    void ctor_1();
    void add_Changed(uDelegate* value);
    void remove_Changed(uDelegate* value);
    void add_Error(uDelegate* value);
    void remove_Error(uDelegate* value);
    void FireChanged(::g::Fuse::Resources::ImageSourceChangedArgs* args);
    void FireError(::g::Fuse::Resources::ImageSourceErrorArgs* args);
    ::g::Uno::Graphics::Texture2D* GetTexture() { ::g::Uno::Graphics::Texture2D* __retval; return (((ImageSource_type*)__type)->fp_GetTexture)(this, &__retval), __retval; }
    bool IsPinned();
    void OnChanged();
    void OnError(uString* msg, ::g::Uno::Exception* e);
    void OnPinChanged() { (((ImageSource_type*)__type)->fp_OnPinChanged)(this); }
    void Pin();
    ::g::Uno::Int2 PixelSize();
    void ProxyChanged(uObject* s, ::g::Uno::EventArgs* a);
    void ProxyError(uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* a);
    void Reload() { (((ImageSource_type*)__type)->fp_Reload)(this); }
    ::g::Uno::Float2 Size();
    float SizeDensity() { float __retval; return (((ImageSource_type*)__type)->fp_get_SizeDensity)(this, &__retval), __retval; }
    int State() { int __retval; return (((ImageSource_type*)__type)->fp_get_State)(this, &__retval), __retval; }
    void Unpin();
    static void OnPinChanged(ImageSource* __this) { ImageSource__OnPinChanged_fn(__this); }
    static void Reload(ImageSource* __this) { ImageSource__Reload_fn(__this); }
};

}}} // ::g::Fuse::Resources

#include <Uno.Float2.h>
#include <Uno.Int2.h>

namespace g{
namespace Fuse{
namespace Resources{

inline ::g::Uno::Int2 ImageSource::PixelSize() { ::g::Uno::Int2 __retval; return (((ImageSource_type*)__type)->fp_get_PixelSize)(this, &__retval), __retval; }
inline ::g::Uno::Float2 ImageSource::Size() { ::g::Uno::Float2 __retval; return (((ImageSource_type*)__type)->fp_get_Size)(this, &__retval), __retval; }
// }

}}} // ::g::Fuse::Resources
