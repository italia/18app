// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Backends/CPlusPlus/Uno/Support.cpp.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno/Support.h>
#include <uBase/Buffer.h>
#include <uBase/Thread.h>
#include <uBase/Path.h>
#include <uBase/Unicode.h>
#include <uImage/Bitmap.h>
#include <uImage/Jpeg.h>
#include <uImage/Png.h>
#include <uImage/Texture.h>
#include <XliPlatform/GL.h>
#include <XliPlatform/MessageBox.h>
#include <Uno.Byte.h>
#include <Uno.Buffer.h>

#if ANDROID
#include <android/log.h>
#elif IOS
void uLogApple(const char* prefix, const char* format, va_list args);
#else
#include <cstdio>
#endif

static uBase::Mutex* _Critical;

void uInitSupport()
{
    _Critical = uBase::CreateMutex();
}

void uFreeSupport()
{
    uBase::DeleteMutex(_Critical);
}

// Synchronized logging
void uLogv(int level, const char* format, va_list args)
{
    U_ASSERT(uLogLevelDebug == 0 &&
             uLogLevelInformation == 1 &&
             uLogLevelWarning == 2 &&
             uLogLevelError == 3 &&
             uLogLevelFatal == 4);

    if (!format)
        format = "";

    if (level < 0)
        level = 0;
    else if (level > uLogLevelFatal)
        level = uLogLevelFatal;

#if ANDROID
    int logs[] = {
        ANDROID_LOG_DEBUG,  // uLogLevelDebug
        ANDROID_LOG_INFO,   // uLogLevelInformation
        ANDROID_LOG_WARN,   // uLogLevelWarning
        ANDROID_LOG_ERROR,  // uLogLevelError
        ANDROID_LOG_FATAL   // uLogLevelFatal
    };
    __android_log_vprint(logs[level], "app18", format, args);
#else
    static const char* strings[] = {
        "",             // uLogLevelDebug
        "Info: ",       // uLogLevelInformation
        "Warning: ",    // uLogLevelWarning
        "Error: ",      // uLogLevelError
        "Fatal: "       // uLogLevelFatal
    };
#if IOS
    // Defined in ObjC file to call NSLog()
    uLogApple(strings[level], format, args);
#else
    FILE* fp = level >= uLogLevelWarning
            ? stderr
            : stdout;
    uBase::LockMutex(_Critical);
    fputs(strings[level], fp);
    vfprintf(fp, format, args);
    fputc('\n', fp);
    fflush(fp);
    uBase::UnlockMutex(_Critical);
#endif
#endif
}

void uLog(int level, const char* format, ...)
{
    va_list args;
    va_start(args, format);
    uLogv(level, format, args);
    va_end(args);
}

void uFatal(const char* src, const char* msg)
{
    uLog(uLogLevelFatal, "Runtime Error: %s: %s", src ? src : "(unknown)", msg ? msg : "(no message)");
    Xli::MessageBox::Show(NULL, "The application has crashed.", "Fatal Error", Xli::DialogButtonsOK, Xli::DialogHintsError);
    abort();
}

bool uEnterCriticalIfNull(void* addr)
{
    if (*(void**)addr)
        return false;

    uBase::LockMutex(_Critical);

    if (!*(void**)addr)
        return true;

    uBase::UnlockMutex(_Critical);
    return false;
}

void uEnterCritical()
{
    uBase::LockMutex(_Critical);
}

void uExitCritical()
{
    uBase::UnlockMutex(_Critical);
}

uBase::String uStringToXliString(uString* ustr)
{
    return ustr ? uBase::Unicode::Utf16To8(ustr->Ptr(), ustr->Length()) : "";
}

uString* uStringFromXliString(const uBase::String& str)
{
    return uString::Utf8(str.Ptr(), str.Length());
}

::g::Uno::Int2 uInt2FromXliVector2i(const uBase::Vector2i& vec)
{
    return *(::g::Uno::Int2*)&vec;
}

uBase::Vector2i uInt2ToXliVector2i(const ::g::Uno::Int2& vec)
{
    return *(uBase::Vector2i*)&vec;
}

::g::Uno::Float2 uFloat2FromXliVector2(const uBase::Vector2& vec)
{
    return *(::g::Uno::Float2*)&vec;
}

uBase::Vector2 uFloat2ToXliVector2(const ::g::Uno::Float2& vec)
{
    return *(uBase::Vector2*)&vec;
}

::g::Uno::Buffer* uBufferFromXliDataAccessor(const uBase::DataAccessor* data)
{
    if (!data)
    {
        uThrowable::ThrowNullReference(U_FUNCTION, __LINE__);
        return NULL;
    }

    uArray* arr = uArray::New(::g::Uno::Byte_typeof()->Array(), data->GetSizeInBytes(), data->GetPtr());
    return ::g::Uno::Buffer::New3(arr, 0, arr->Length(), true);
}

uImage::Texture* uLoadXliTexture(const uBase::String& filename, uBase::Stream* stream)
{
    uBase::String fnUpper = filename.ToUpper();
    uBase::Auto<uImage::ImageReader> ir;

    if (fnUpper.EndsWith(".PNG"))
        ir = uImage::Png::CreateReader(stream);
    else if (fnUpper.EndsWith(".JPG") || fnUpper.EndsWith(".JPEG"))
        ir = uImage::Jpeg::CreateReader(stream);
    else
        throw uBase::Exception("Unsupported texture extension '" + uBase::Path::GetExtension(filename) + "'");

    uBase::Auto<uImage::Bitmap> bmp = ir->ReadBitmap();
    return uImage::Texture::Create(bmp);
}

static bool TryGetGLFormat(uImage::Format format, GLenum& glFormat, GLenum& glType)
{
    switch (format)
    {
    case uImage::FormatRGBA_8_8_8_8_UInt_Normalize:
        glFormat = GL_RGBA;
        glType = GL_UNSIGNED_BYTE;
        return true;

    case uImage::FormatRGB_8_8_8_UInt_Normalize:
        glFormat = GL_RGB;
        glType = GL_UNSIGNED_BYTE;
        return true;

    case uImage::FormatR_8_UInt_Normalize:
    case uImage::FormatL_8_UInt_Normalize:
        glFormat = GL_LUMINANCE;
        glType = GL_UNSIGNED_BYTE;
        return true;

    case uImage::FormatRG_8_8_UInt_Normalize:
    case uImage::FormatLA_8_8_UInt_Normalize:
        glFormat = GL_LUMINANCE_ALPHA;
        glType = GL_UNSIGNED_BYTE;
        return true;

    default:
        return false;
    }
}

unsigned int uCreateGLTexture(uImage::Texture* texData, bool generateMips, uGLTextureInfo* outInfo)
{
    GLuint texHandle;
    glGenTextures(1, &texHandle);

    int width = texData->Faces[0].MipLevels[0]->GetWidth();
    int height = texData->Faces[0].MipLevels[0]->GetHeight();
    int mipCount = texData->Faces[0].MipLevels.Length();
    int depth = 1;

    GLenum texTarget =
        texData->Type == uImage::TextureTypeCube ?
            GL_TEXTURE_CUBE_MAP :
            GL_TEXTURE_2D;

    glBindTexture(texTarget, texHandle);
    glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
    glPixelStorei(GL_PACK_ALIGNMENT, 1);

    bool compressed = false;

    for (int i = 0; i < texData->Faces.Length(); i++)
    {
        GLenum texFace =
            texTarget == GL_TEXTURE_CUBE_MAP ?
                GL_TEXTURE_CUBE_MAP_POSITIVE_X + i :
                GL_TEXTURE_2D;

        for (int j = 0; j < texData->Faces[i].MipLevels.Length(); j++)
        {
            uImage::Image* mip = texData->Faces[i].MipLevels[j];

            switch (mip->GetFormat())
            {
#ifdef GL_ETC1_RGB8_OES

            case uImage::FormatCompressedRGB_ETC1:
                glCompressedTexImage2D(texFace, j, GL_ETC1_RGB8_OES, mip->GetWidth(), mip->GetHeight(), 0, mip->GetSizeInBytes(), mip->GetPtr());
                compressed = true;
                break;

#endif
#ifdef GL_COMPRESSED_RGB_PVRTC_4BPPV1_IMG

            case uImage::FormatCompressedRGB_PVRTC_4BPP:
                glCompressedTexImage2D(texFace, j, GL_COMPRESSED_RGB_PVRTC_4BPPV1_IMG, mip->GetWidth(), mip->GetHeight(), 0, mip->GetSizeInBytes(), mip->GetPtr());
                compressed = true;
                break;

#endif
#ifdef GL_COMPRESSED_RGB_PVRTC_2BPPV1_IMG

            case uImage::FormatCompressedRGB_PVRTC_2BPP:
                glCompressedTexImage2D(texFace, j, GL_COMPRESSED_RGB_PVRTC_2BPPV1_IMG, mip->GetWidth(), mip->GetHeight(), 0, mip->GetSizeInBytes(), mip->GetPtr());
                compressed = true;
                break;

#endif
#ifdef GL_COMPRESSED_RGBA_PVRTC_4BPPV1_IMG

            case uImage::FormatCompressedRGBA_PVRTC_4BPP:
                glCompressedTexImage2D(texFace, j, GL_COMPRESSED_RGBA_PVRTC_4BPPV1_IMG, mip->GetWidth(), mip->GetHeight(), 0, mip->GetSizeInBytes(), mip->GetPtr());
                compressed = true;
                break;

#endif
#ifdef GL_COMPRESSED_RGBA_PVRTC_2BPPV1_IMG

            case uImage::FormatCompressedRGBA_PVRTC_2BPP:
                glCompressedTexImage2D(texFace, j, GL_COMPRESSED_RGBA_PVRTC_2BPPV1_IMG, mip->GetWidth(), mip->GetHeight(), 0, mip->GetSizeInBytes(), mip->GetPtr());
                compressed = true;
                break;

#endif

            default:
                {
                    uBase::Auto<uImage::Bitmap> bmp = mip->ToBitmap();

                    GLenum glFormat, glType;
                    if (!TryGetGLFormat(bmp->GetFormat(), glFormat, glType))
                        throw uBase::Exception("Unsupported texture format: " + uImage::FormatInfo::ToString(bmp->GetFormat()));

                    glTexImage2D(texFace, j, glFormat, bmp->GetWidth(), bmp->GetHeight(), 0, glFormat, glType, bmp->GetPtr());
                }

                break;

            // Silence 'switch has default but no cases' warning
            case uImage::FormatUnspecified:
                break;
            }
        }
    }

    if (generateMips && !compressed)
    {
        glGenerateMipmap(texTarget);
        GLenum err = glGetError();

        if (err == GL_NO_ERROR)
        {
            int w = width, h = height;

            while (w > 1 || h > 1)
            {
                w /= 2;
                h /= 2;
                mipCount++;
            }
        }
    }

    if (outInfo)
    {
        outInfo->GLTarget = texTarget;
        outInfo->Width = width;
        outInfo->Height = height;
        outInfo->Depth = depth;
        outInfo->MipCount = mipCount;
    }

    //U_GL_CHECK_ERROR;
    return texHandle;
}

void uReverseBytes(uint8_t* ptr, size_t size)
{
    uint8_t tmp;

    switch (size)
    {
    case 2:
        tmp = ptr[0];
        ptr[0] = ptr[1];
        ptr[1] = tmp;
        break;
    case 4:
        tmp = ptr[0];
        ptr[0] = ptr[3];
        ptr[3] = tmp;
        tmp = ptr[1];
        ptr[1] = ptr[2];
        ptr[2] = tmp;
        break;
    case 8:
        tmp = ptr[0];
        ptr[0] = ptr[7];
        ptr[7] = tmp;
        tmp = ptr[1];
        ptr[1] = ptr[6];
        ptr[6] = tmp;
        tmp = ptr[2];
        ptr[2] = ptr[5];
        ptr[5] = tmp;
        tmp = ptr[3];
        ptr[3] = ptr[4];
        ptr[4] = tmp;
        break;
    default:
        U_FATAL();
    }
}
