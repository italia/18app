// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Experimental.TextureLoader.Callback.h>
#include <Experimental.TextureLoader.InvalidContentTypeException.h>
#include <Experimental.TextureLoader.TextureLoader.h>
#include <Experimental.TextureLoader.TextureLoaderImpl.h>
#include <uBase/Buffer.h>
#include <uBase/BufferStream.h>
#include <uBase/Memory.h>
#include <uImage/Jpeg.h>
#include <uImage/Png.h>
#include <uImage/Texture.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Exception.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <Uno/Support.h>
#include <XliPlatform/GL.h>
static uString* STRINGS[7];
static uType* TYPES[1];

namespace g{
namespace Experimental{
namespace TextureLoader{

// /usr/local/share/uno/Packages/Experimental.TextureLoader/1.3.1/TextureLoader.uno
// --------------------------------------------------------------------------------

// internal sealed class Callback :9
// {
static void Callback_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Graphics::Texture2D_typeof(), NULL), offsetof(Callback, _action), 0);
}

uType* Callback_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Callback);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Experimental.TextureLoader.Callback", options);
    type->fp_build_ = Callback_build;
    return type;
}

// public Callback(Uno.Action<texture2D> action) :14
void Callback__ctor__fn(Callback* __this, uDelegate* action)
{
    __this->ctor_(action);
}

// public void Execute(texture2D arg) :19
void Callback__Execute_fn(Callback* __this, ::g::Uno::Graphics::Texture2D* arg)
{
    __this->Execute(arg);
}

// public Callback New(Uno.Action<texture2D> action) :14
void Callback__New1_fn(uDelegate* action, Callback** __retval)
{
    *__retval = Callback::New1(action);
}

// public Callback(Uno.Action<texture2D> action) [instance] :14
void Callback::ctor_(uDelegate* action)
{
    _action = action;
}

// public void Execute(texture2D arg) [instance] :19
void Callback::Execute(::g::Uno::Graphics::Texture2D* arg)
{
    uPtr(_action)->InvokeVoid(arg);
}

// public Callback New(Uno.Action<texture2D> action) [static] :14
Callback* Callback::New1(uDelegate* action)
{
    Callback* obj1 = (Callback*)uNew(Callback_typeof());
    obj1->ctor_(action);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Experimental.TextureLoader/1.3.1/TextureLoader.uno
// --------------------------------------------------------------------------------

// public sealed class InvalidContentTypeException :25
// {
static void InvalidContentTypeException_build(uType* type)
{
    type->SetFields(4);
}

::g::Uno::Exception_type* InvalidContentTypeException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(InvalidContentTypeException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Experimental.TextureLoader.InvalidContentTypeException", options);
    type->fp_build_ = InvalidContentTypeException_build;
    return type;
}

// public InvalidContentTypeException(string reason) :27
void InvalidContentTypeException__ctor_3_fn(InvalidContentTypeException* __this, uString* reason)
{
    __this->ctor_3(reason);
}

// public InvalidContentTypeException New(string reason) :27
void InvalidContentTypeException__New4_fn(uString* reason, InvalidContentTypeException** __retval)
{
    *__retval = InvalidContentTypeException::New4(reason);
}

// public InvalidContentTypeException(string reason) [instance] :27
void InvalidContentTypeException::ctor_3(uString* reason)
{
    ctor_1(reason);
}

// public InvalidContentTypeException New(string reason) [static] :27
InvalidContentTypeException* InvalidContentTypeException::New4(uString* reason)
{
    InvalidContentTypeException* obj1 = (InvalidContentTypeException*)uNew(InvalidContentTypeException_typeof());
    obj1->ctor_3(reason);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Experimental.TextureLoader/1.3.1/TextureLoader.uno
// --------------------------------------------------------------------------------

// public static class TextureLoader :30
// {
static void TextureLoader_build(uType* type)
{
    ::STRINGS[0] = uString::Const("image/jpeg");
    ::STRINGS[1] = uString::Const("image/jpg");
    ::STRINGS[2] = uString::Const("image/png");
    ::STRINGS[3] = uString::Const("application/octet-stream");
    ::STRINGS[4] = uString::Const(".png");
    ::STRINGS[5] = uString::Const(".jpg");
    ::STRINGS[6] = uString::Const(".jpeg");
    ::TYPES[0] = ::g::Uno::Exception_typeof();
}

uClassType* TextureLoader_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Experimental.TextureLoader.TextureLoader", options);
    type->fp_build_ = TextureLoader_build;
    return type;
}

// public static void ByteArrayToTexture2DContentType(Uno.Buffer arr, string contentType, Uno.Action<texture2D> callback) :83
void TextureLoader__ByteArrayToTexture2DContentType_fn(::g::Uno::Buffer* arr, uString* contentType, uDelegate* callback)
{
    TextureLoader::ByteArrayToTexture2DContentType(arr, contentType, callback);
}

// public static void ByteArrayToTexture2DFilename(Uno.Buffer arr, string filename, Uno.Action<texture2D> callback) :72
void TextureLoader__ByteArrayToTexture2DFilename_fn(::g::Uno::Buffer* arr, uString* filename, uDelegate* callback)
{
    TextureLoader::ByteArrayToTexture2DFilename(arr, filename, callback);
}

// public static void JpegByteArrayToTexture2D(Uno.Buffer arr, Uno.Action<texture2D> callback) :32
void TextureLoader__JpegByteArrayToTexture2D_fn(::g::Uno::Buffer* arr, uDelegate* callback)
{
    TextureLoader::JpegByteArrayToTexture2D(arr, callback);
}

// public static void PngByteArrayToTexture2D(Uno.Buffer arr, Uno.Action<texture2D> callback) :52
void TextureLoader__PngByteArrayToTexture2D_fn(::g::Uno::Buffer* arr, uDelegate* callback)
{
    TextureLoader::PngByteArrayToTexture2D(arr, callback);
}

// public static void ByteArrayToTexture2DContentType(Uno.Buffer arr, string contentType, Uno.Action<texture2D> callback) [static] :83
void TextureLoader::ByteArrayToTexture2DContentType(::g::Uno::Buffer* arr, uString* contentType, uDelegate* callback)
{
    if ((::g::Uno::String::IndexOf1(uPtr(contentType), ::STRINGS[0/*"image/jpeg"*/], 0) != -1) || (::g::Uno::String::IndexOf1(uPtr(contentType), ::STRINGS[1/*"image/jpg"*/], 0) != -1))
        TextureLoader::JpegByteArrayToTexture2D(arr, callback);
    else if (::g::Uno::String::IndexOf1(uPtr(contentType), ::STRINGS[2/*"image/png"*/], 0) != -1)
        TextureLoader::PngByteArrayToTexture2D(arr, callback);
    else if (::g::Uno::String::IndexOf1(uPtr(contentType), ::STRINGS[3/*"application...*/], 0) != -1)
        TextureLoader::JpegByteArrayToTexture2D(arr, callback);
    else
        U_THROW(::g::Experimental::TextureLoader::InvalidContentTypeException::New4(contentType));
}

// public static void ByteArrayToTexture2DFilename(Uno.Buffer arr, string filename, Uno.Action<texture2D> callback) [static] :72
void TextureLoader::ByteArrayToTexture2DFilename(::g::Uno::Buffer* arr, uString* filename, uDelegate* callback)
{
    filename = ::g::Uno::String::ToLower(uPtr(filename));

    if (::g::Uno::String::EndsWith(filename, ::STRINGS[4/*".png"*/]))
        TextureLoader::PngByteArrayToTexture2D(arr, callback);
    else if (::g::Uno::String::EndsWith(uPtr(filename), ::STRINGS[5/*".jpg"*/]) || ::g::Uno::String::EndsWith(uPtr(filename), ::STRINGS[6/*".jpeg"*/]))
        TextureLoader::JpegByteArrayToTexture2D(arr, callback);
    else
        U_THROW(::g::Experimental::TextureLoader::InvalidContentTypeException::New4(filename));
}

// public static void JpegByteArrayToTexture2D(Uno.Buffer arr, Uno.Action<texture2D> callback) [static] :32
void TextureLoader::JpegByteArrayToTexture2D(::g::Uno::Buffer* arr, uDelegate* callback)
{
    try
    {
        ::g::Experimental::TextureLoader::TextureLoaderImpl::JpegByteArrayToTexture2D(arr, ::g::Experimental::TextureLoader::Callback::New1(callback));
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* jpegException = __t.Exception;

        try
        {
            ::g::Experimental::TextureLoader::TextureLoaderImpl::PngByteArrayToTexture2D(arr, ::g::Experimental::TextureLoader::Callback::New1(callback));
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* pngException = __t.Exception;
            U_THROW(jpegException);
        }
    }
}

// public static void PngByteArrayToTexture2D(Uno.Buffer arr, Uno.Action<texture2D> callback) [static] :52
void TextureLoader::PngByteArrayToTexture2D(::g::Uno::Buffer* arr, uDelegate* callback)
{
    try
    {
        ::g::Experimental::TextureLoader::TextureLoaderImpl::PngByteArrayToTexture2D(arr, ::g::Experimental::TextureLoader::Callback::New1(callback));
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* pngException = __t.Exception;

        try
        {
            ::g::Experimental::TextureLoader::TextureLoaderImpl::JpegByteArrayToTexture2D(arr, ::g::Experimental::TextureLoader::Callback::New1(callback));
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* jpegException = __t.Exception;
            U_THROW(pngException);
        }
    }
}
// }

// /usr/local/share/uno/Packages/Experimental.TextureLoader/1.3.1/TextureLoaderImpl.uno
// ------------------------------------------------------------------------------------

// internal static class TextureLoaderImpl :7
// {
static void TextureLoaderImpl_build(uType* type)
{
}

uClassType* TextureLoaderImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Experimental.TextureLoader.TextureLoaderImpl", options);
    type->fp_build_ = TextureLoaderImpl_build;
    return type;
}

// public static void JpegByteArrayToTexture2D(Uno.Buffer arr, Experimental.TextureLoader.Callback callback) :10
void TextureLoaderImpl__JpegByteArrayToTexture2D_fn(::g::Uno::Buffer* arr_, ::g::Experimental::TextureLoader::Callback* callback_)
{
    TextureLoaderImpl::JpegByteArrayToTexture2D(arr_, callback_);
}

// public static void PngByteArrayToTexture2D(Uno.Buffer arr, Experimental.TextureLoader.Callback callback) :19
void TextureLoaderImpl__PngByteArrayToTexture2D_fn(::g::Uno::Buffer* arr_, ::g::Experimental::TextureLoader::Callback* callback_)
{
    TextureLoaderImpl::PngByteArrayToTexture2D(arr_, callback_);
}

// public static void JpegByteArrayToTexture2D(Uno.Buffer arr, Experimental.TextureLoader.Callback callback) [static] :10
void TextureLoaderImpl::JpegByteArrayToTexture2D(::g::Uno::Buffer* arr_, ::g::Experimental::TextureLoader::Callback* callback_)
{
    try
    {
        uBase::Auto<uBase::BufferPtr> bp = new uBase::BufferPtr(U_BUFFER_PTR(arr_), U_BUFFER_SIZE(arr_), false);
        uBase::Auto<uBase::BufferStream> bs = new uBase::BufferStream(bp, true, false);
        uBase::Auto<uImage::ImageReader> ir = uImage::Jpeg::CreateReader(bs);
        uBase::Auto<uImage ::Bitmap> bmp = ir->ReadBitmap();
        int originalWidth = bmp->GetWidth(), originalHeight = bmp->GetHeight();
    
        int maxTextureSize;
        glGetIntegerv(GL_MAX_TEXTURE_SIZE, &maxTextureSize);
        while (bmp->GetWidth() > maxTextureSize ||
               bmp->GetHeight() > maxTextureSize)
        {
            bmp = bmp->DownSample2x2();
        }
    
        uBase::Auto<uImage::Texture> tex = uImage::Texture::Create(bmp);
        uGLTextureInfo info;
        GLuint handle = uCreateGLTexture(tex, false, &info);
    
        callback_->Execute(::g::Uno::Graphics::Texture2D::New2(handle, ::g::Uno::Int2__New2(originalWidth, originalHeight), info.MipCount, 0));
    }
    catch (const uBase::Exception &e)
    {
        U_THROW(::g::Uno::Exception::New2(uStringFromXliString(e.GetMessage())));
    }
}

// public static void PngByteArrayToTexture2D(Uno.Buffer arr, Experimental.TextureLoader.Callback callback) [static] :19
void TextureLoaderImpl::PngByteArrayToTexture2D(::g::Uno::Buffer* arr_, ::g::Experimental::TextureLoader::Callback* callback_)
{
    try
    {
        uBase::Auto<uBase::BufferPtr> bp = new uBase::BufferPtr(U_BUFFER_PTR(arr_), U_BUFFER_SIZE(arr_), false);
        uBase::Auto<uBase::BufferStream> bs = new uBase::BufferStream(bp, true, false);
        uBase::Auto<uImage::ImageReader> ir = uImage::Png::CreateReader(bs);
        uBase::Auto<uImage::Bitmap> bmp = ir->ReadBitmap();
        int originalWidth = bmp->GetWidth(), originalHeight = bmp->GetHeight();
    
        int maxTextureSize;
        glGetIntegerv(GL_MAX_TEXTURE_SIZE, &maxTextureSize);
        while (bmp->GetWidth() > maxTextureSize ||
               bmp->GetHeight() > maxTextureSize)
        {
            bmp = bmp->DownSample2x2();
        }
    
        uBase::Auto<uImage::Texture> tex = uImage::Texture::Create(bmp);
        uGLTextureInfo info;
        GLuint handle = uCreateGLTexture(tex, false, &info);
    
        callback_->Execute(::g::Uno::Graphics::Texture2D::New2(handle, ::g::Uno::Int2__New2(originalWidth, originalHeight), info.MipCount, 0));
    }
    catch (const uBase::Exception &e)
    {
        U_THROW(::g::Uno::Exception::New2(uStringFromXliString(e.GetMessage())));
    }
}
// }

}}} // ::g::Experimental::TextureLoader
