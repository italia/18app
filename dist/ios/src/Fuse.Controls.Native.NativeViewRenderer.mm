// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/NativeRenderer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <CoreGraphics/CoreGraphics.h>
#include <Fuse.Controls.Native.Blitter.h>
#include <Fuse.Controls.Native.NativeViewRenderer.h>
#include <Fuse.Controls.Native.ViewHandle.h>
#include <GLKit/GLKit.h>
#include <ObjC.Object.h>
#include <OpenGL.GL.h>
#include <OpenGL.GLTextureHandle.h>
#include <OpenGL.GLTextureTarget.h>
#include <OpenGLES/EAGL.h>
#include <QuartzCore/QuartzCore.h>
#include <UIKit/UIKit.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Int.h>
#include <Uno.IntPtr.h>
#include <uObjC.Foreign.h>
#include <Uno.Float2.h>
#include <Uno.Float4x4.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public sealed extern class NativeViewRenderer :17
// {
static void NativeViewRenderer_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Controls::Native::Blitter_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(NativeViewRenderer_type, interface0),
        ::g::Fuse::Controls::Native::IViewHandleRenderer_typeof(), offsetof(NativeViewRenderer_type, interface1));
    type->SetFields(0,
        uObject_typeof(), offsetof(NativeViewRenderer, _pixelBuffer), 0,
        ::g::Uno::Int2_typeof(), offsetof(NativeViewRenderer, _prevSize), 0,
        ::g::OpenGL::GLTextureHandle_typeof(), offsetof(NativeViewRenderer, _textureHandle), 0,
        ::g::Uno::Bool_typeof(), offsetof(NativeViewRenderer, _valid), 0);
}

NativeViewRenderer_type* NativeViewRenderer_typeof()
{
    static uSStrong<NativeViewRenderer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(NativeViewRenderer);
    options.TypeSize = sizeof(NativeViewRenderer_type);
    type = (NativeViewRenderer_type*)uClassType::New("Fuse.Controls.Native.NativeViewRenderer", options);
    type->fp_build_ = NativeViewRenderer_build;
    type->fp_ctor_ = (void*)NativeViewRenderer__New1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))NativeViewRenderer__Dispose_fn;
    type->interface1.fp_Draw = (void(*)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*, ::g::Uno::Float4x4*, ::g::Uno::Float2*, ::g::Uno::Float2*, float*))NativeViewRenderer__Draw_fn;
    type->interface1.fp_Invalidate = (void(*)(uObject*))NativeViewRenderer__Invalidate_fn;
    return type;
}

// public generated NativeViewRenderer() :17
void NativeViewRenderer__ctor__fn(NativeViewRenderer* __this)
{
    __this->ctor_();
}

// private static extern Uno.IntPtr AllocPixelBuffer(int width, int height) :213
void NativeViewRenderer__AllocPixelBuffer_fn(int* width, int* height, void** __retval)
{
    *__retval = NativeViewRenderer::AllocPixelBuffer(*width, *height);
}

// public void Dispose() :83
void NativeViewRenderer__Dispose_fn(NativeViewRenderer* __this)
{
    __this->Dispose();
}

// public void Draw(Fuse.Controls.Native.ViewHandle viewHandle, float4x4 localToClipTransform, float2 position, float2 size, float density) :25
void NativeViewRenderer__Draw_fn(NativeViewRenderer* __this, ::g::Fuse::Controls::Native::ViewHandle* viewHandle, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Float2* position, ::g::Uno::Float2* size, float* density)
{
    __this->Draw(viewHandle, *localToClipTransform, *position, *size, *density);
}

// private static extern void FreePixelBuffer(Uno.IntPtr buffer) :220
void NativeViewRenderer__FreePixelBuffer_fn(void** buffer)
{
    NativeViewRenderer::FreePixelBuffer(*buffer);
}

// public void Invalidate() :78
void NativeViewRenderer__Invalidate_fn(NativeViewRenderer* __this)
{
    __this->Invalidate();
}

// public generated NativeViewRenderer New() :17
void NativeViewRenderer__New1_fn(NativeViewRenderer** __retval)
{
    *__retval = NativeViewRenderer::New1();
}

// private void ReleaseResources() :88
void NativeViewRenderer__ReleaseResources_fn(NativeViewRenderer* __this)
{
    __this->ReleaseResources();
}

// private static extern void Upload(ObjC.Object viewHandle, int textureName, Uno.IntPtr pixelBufferHandle, int width, int height, float density, bool reuse) :113
void NativeViewRenderer__Upload_fn(::g::ObjC::Object* viewHandle, int* textureName, void** pixelBufferHandle, int* width, int* height, float* density, bool* reuse)
{
    NativeViewRenderer::Upload(viewHandle, *textureName, *pixelBufferHandle, *width, *height, *density, *reuse);
}

// public generated NativeViewRenderer() [instance] :17
void NativeViewRenderer::ctor_()
{
    _prevSize = ::g::Uno::Int2__New1(-1);
}

// public void Dispose() [instance] :83
void NativeViewRenderer::Dispose()
{
    ReleaseResources();
}

// public void Draw(Fuse.Controls.Native.ViewHandle viewHandle, float4x4 localToClipTransform, float2 position, float2 size, float density) [instance] :25
void NativeViewRenderer::Draw(::g::Fuse::Controls::Native::ViewHandle* viewHandle, ::g::Uno::Float4x4 localToClipTransform, ::g::Uno::Float2 position, ::g::Uno::Float2 size, float density)
{
    ::g::Uno::Int2 pixelSize = ::g::Uno::Int2__op_Explicit1(::g::Uno::Float2__op_Multiply1(size, density));
    bool reuse = true;

    if (::g::Uno::Int2__op_Inequality(_prevSize, pixelSize))
    {
        ReleaseResources();
        _textureHandle = ::g::OpenGL::GL::CreateTexture();
        _pixelBuffer = uBox(::g::Uno::IntPtr_typeof(), NativeViewRenderer::AllocPixelBuffer(pixelSize.X, pixelSize.Y));
        _prevSize = pixelSize;
        reuse = false;
        _valid = false;
    }

    if (!_valid)
    {
        ::g::OpenGL::GL::BindTexture(3553, _textureHandle);
        NativeViewRenderer::Upload(uPtr(viewHandle)->NativeHandle, ::g::OpenGL::GLTextureHandle::op_Explicit2(_textureHandle), uUnbox<void*>(::g::Uno::IntPtr_typeof(), _pixelBuffer), pixelSize.X, pixelSize.Y, density, reuse);
        ::g::OpenGL::GL::BindTexture(3553, ::g::OpenGL::GLTextureHandle::Zero_);
        _valid = true;
    }

    uPtr(::g::Fuse::Controls::Native::Blitter::Singleton_)->Blit(::g::Uno::Graphics::Texture2D::New2(_textureHandle, pixelSize, 1, 3), position, size, localToClipTransform);
}

// public void Invalidate() [instance] :78
void NativeViewRenderer::Invalidate()
{
    _valid = false;
}

// private void ReleaseResources() [instance] :88
void NativeViewRenderer::ReleaseResources()
{
    if (::g::OpenGL::GLTextureHandle::op_Inequality(_textureHandle, ::g::OpenGL::GLTextureHandle::Zero_))
    {
        ::g::OpenGL::GL::DeleteTexture(_textureHandle);
        _textureHandle = ::g::OpenGL::GLTextureHandle::Zero_;
    }

    if (_pixelBuffer != NULL)
    {
        NativeViewRenderer::FreePixelBuffer(uUnbox<void*>(::g::Uno::IntPtr_typeof(), _pixelBuffer));
        _pixelBuffer = NULL;
    }
}

// private static extern Uno.IntPtr AllocPixelBuffer(int width, int height) [static] :213
void* NativeViewRenderer::AllocPixelBuffer(int width, int height)
{
    int size = (width * height) * 4;
    return malloc( size );
}

// private static extern void FreePixelBuffer(Uno.IntPtr buffer) [static] :220
void NativeViewRenderer::FreePixelBuffer(void* buffer)
{
    free( buffer );
}

// public generated NativeViewRenderer New() [static] :17
NativeViewRenderer* NativeViewRenderer::New1()
{
    NativeViewRenderer* obj1 = (NativeViewRenderer*)uNew(NativeViewRenderer_typeof());
    obj1->ctor_();
    return obj1;
}

// private static extern void Upload(ObjC.Object viewHandle, int textureName, Uno.IntPtr pixelBufferHandle, int width, int height, float density, bool reuse) [static] :113
void NativeViewRenderer::Upload(::g::ObjC::Object* viewHandle, int textureName, void* pixelBufferHandle, int width, int height, float density, bool reuse)
{
    @autoreleasepool
    {
        [] (::id viewHandle, int textureName, void* pixelBufferHandle, int width, int height, float density, bool reuse) -> void
        {
            ::UIView* view = (::UIView*)viewHandle;
            GLubyte* pixelBuffer = (GLubyte*)pixelBufferHandle;
            
            CGColorSpaceRef colorSpace = CGColorSpaceCreateDeviceRGB();
            CGContextRef context = CGBitmapContextCreate(
            	pixelBuffer,
            	width,
            	height,
            	8,
            	4 * width,
            	colorSpace,
            	kCGImageAlphaPremultipliedLast | kCGBitmapByteOrder32Big);
            
            CGContextClearRect(context, { { 0.0f, 0.0f, }, { (CGFloat)width, (CGFloat)height } });
            CGContextScaleCTM(context, (CGFloat)density, (CGFloat)density);
            
            if ([viewHandle isKindOfClass: [UIScrollView class]])
            {
            	auto scrollview = (UIScrollView*)viewHandle;
            	auto offset = [scrollview contentOffset];
            	CGContextTranslateCTM(context, -offset.x, -offset.y);
            }
            
            CGColorSpaceRelease(colorSpace);
            
            [[view layer] renderInContext:context];
            
            glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
            if (reuse)
            {
            	glTexSubImage2D(
            		GL_TEXTURE_2D,
            		0,
            		0,
            		0,
            		width,
            		height,
            		GL_RGBA,
            		GL_UNSIGNED_BYTE,
            		pixelBuffer);
            
            }
            else
            {
            	glTexImage2D(
            		GL_TEXTURE_2D,
            		0,
            		GL_RGBA,
            		width,
            		height,
            		0,
            		GL_RGBA,
            		GL_UNSIGNED_BYTE,
            		pixelBuffer);
            }
            CGContextRelease(context);
        } (::g::ObjC::Object::GetHandle(viewHandle), textureName, pixelBufferHandle, width, height, density, reuse);
        
    }
    
}
// }

}}}} // ::g::Fuse::Controls::Native
