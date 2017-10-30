// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Runtime/Implementation/ShaderBackends/OpenGL/GLHelpers.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Graphics{struct RenderTarget;}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{struct GLHelpers;}}}}}}
namespace g{namespace Uno{struct Buffer;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{
namespace ShaderBackends{
namespace OpenGL{

// public static extern class GLHelpers :9
// {
uClassType* GLHelpers_typeof();
void GLHelpers__CheckError_fn();
void GLHelpers__CheckFramebufferStatus_fn();
void GLHelpers__CompileShader_fn(int* type, uString* source, uint32_t* __retval);
void GLHelpers__CreateDepthBuffer_fn(::g::Uno::Int2* size, uint32_t* __retval);
void GLHelpers__CreateRenderTarget_fn(int* colorTarget, uint32_t* colorBuffer, int* mip, ::g::Uno::Int2* size, bool* depth, ::g::Uno::Graphics::RenderTarget** __retval);
void GLHelpers__CreateRenderTarget1_fn(int* colorTarget, uint32_t* colorBuffer, int* mip, ::g::Uno::Int2* size, uint32_t* depthBuffer, bool* ownsDepthBuffer, ::g::Uno::Graphics::RenderTarget** __retval);
void GLHelpers__LinkProgram_fn(uint32_t* vertexShader, uint32_t* fragmentShader, uint32_t* __retval);
void GLHelpers__TexImage2DFromBuffer_fn(int* target, int* w, int* h, int* mip, int* format, ::g::Uno::Buffer* data);

struct GLHelpers : uObject
{
    static void CheckError();
    static void CheckFramebufferStatus();
    static uint32_t CompileShader(int type, uString* source);
    static uint32_t CreateDepthBuffer(::g::Uno::Int2 size);
    static ::g::Uno::Graphics::RenderTarget* CreateRenderTarget(int colorTarget, uint32_t colorBuffer, int mip, ::g::Uno::Int2 size, bool depth);
    static ::g::Uno::Graphics::RenderTarget* CreateRenderTarget1(int colorTarget, uint32_t colorBuffer, int mip, ::g::Uno::Int2 size, uint32_t depthBuffer, bool ownsDepthBuffer);
    static uint32_t LinkProgram(uint32_t vertexShader, uint32_t fragmentShader);
    static void TexImage2DFromBuffer(int target, int w, int h, int mip, int format, ::g::Uno::Buffer* data);
};
// }

}}}}}} // ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL
