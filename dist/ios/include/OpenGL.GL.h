// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GL.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace OpenGL{struct GL;}}
namespace g{namespace Uno{struct Buffer;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float2x2;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Float4x4;}}
namespace g{namespace Uno{struct Int4;}}

namespace g{
namespace OpenGL{

// public static extern class GL :10
// {
uClassType* GL_typeof();
void GL__ActiveTexture_fn(int* texture);
void GL__AttachShader_fn(uint32_t* program, uint32_t* shader);
void GL__BindBuffer_fn(int* target, uint32_t* buffer);
void GL__BindFramebuffer_fn(int* target, uint32_t* fb);
void GL__BindRenderbuffer_fn(int* target, uint32_t* renderbuffer);
void GL__BindTexture_fn(int* target, uint32_t* texture);
void GL__BlendFuncSeparate_fn(int* srcRGB, int* dstRGB, int* srcAlpha, int* dstAlpha);
void GL__BufferData1_fn(int* target, ::g::Uno::Buffer* data, int* usage);
void GL__BufferSubData_fn(int* target, int* offset, ::g::Uno::Buffer* data);
void GL__CheckFramebufferStatus_fn(int* target, int* __retval);
void GL__Clear_fn(int* mask);
void GL__ClearColor_fn(float* red, float* green, float* blue, float* alpha);
void GL__ClearDepth_fn(float* depth);
void GL__ColorMask_fn(bool* red, bool* green, bool* blue, bool* alpha);
void GL__CompileShader_fn(uint32_t* shader);
void GL__CreateBuffer_fn(uint32_t* __retval);
void GL__CreateFramebuffer_fn(uint32_t* __retval);
void GL__CreateProgram_fn(uint32_t* __retval);
void GL__CreateRenderbuffer_fn(uint32_t* __retval);
void GL__CreateShader_fn(int* type, uint32_t* __retval);
void GL__CreateTexture_fn(uint32_t* __retval);
void GL__CullFace_fn(int* mode);
void GL__DeleteBuffer_fn(uint32_t* buffer);
void GL__DeleteFramebuffer_fn(uint32_t* fb);
void GL__DeleteProgram_fn(uint32_t* program);
void GL__DeleteRenderbuffer_fn(uint32_t* renderbuffer);
void GL__DeleteShader_fn(uint32_t* shader);
void GL__DeleteTexture_fn(uint32_t* texture);
void GL__DepthFunc_fn(int* func);
void GL__DepthMask_fn(bool* flag);
void GL__DetachShader_fn(uint32_t* program, uint32_t* shader);
void GL__Disable_fn(int* cap);
void GL__DisableVertexAttribArray_fn(int* index);
void GL__DrawArrays_fn(int* mode, int* first, int* count);
void GL__DrawElements_fn(int* mode, int* count, int* type, int* offset);
void GL__Enable_fn(int* cap);
void GL__EnableVertexAttribArray_fn(int* index);
void GL__Finish_fn();
void GL__FramebufferRenderbuffer_fn(int* target, int* attachment, int* renderbuffertarget, uint32_t* renderbuffer);
void GL__FramebufferTexture2D_fn(int* target, int* attachment, int* textarget, uint32_t* texture, int* level);
void GL__FrontFace_fn(int* mode);
void GL__GetAttribLocation_fn(uint32_t* program, uString* name, int* __retval);
void GL__GetError_fn(int* __retval);
void GL__GetFramebufferBinding_fn(uint32_t* __retval);
void GL__GetInteger_fn(int* name, ::g::Uno::Int4* __retval);
void GL__GetInteger1_fn(int* name, int* __retval);
void GL__GetProgramInfoLog_fn(uint32_t* program, uString** __retval);
void GL__GetProgramParameter_fn(uint32_t* program, int* pname, int* __retval);
void GL__GetRenderbufferBinding_fn(uint32_t* __retval);
void GL__GetShaderInfoLog_fn(uint32_t* shader, uString** __retval);
void GL__GetShaderParameter_fn(uint32_t* shader, int* pname, int* __retval);
void GL__GetString_fn(int* name, uString** __retval);
void GL__GetUniformLocation_fn(uint32_t* program, uString* name, int* __retval);
void GL__LineWidth_fn(float* width);
void GL__LinkProgram_fn(uint32_t* program);
void GL__PixelStore_fn(int* pname, int* param);
void GL__RenderbufferStorage_fn(int* target, int* internalFormat, int* width, int* height);
void GL__Scissor_fn(int* x, int* y, int* width, int* height);
void GL__ShaderSource_fn(uint32_t* shader, uString* source);
void GL__TexImage2D_fn(int* target, int* level, int* internalFormat, int* width, int* height, int* border, int* format, int* type, ::g::Uno::Buffer* data);
void GL__TexImage2D1_fn(int* target, int* level, int* internalFormat, int* width, int* height, int* border, int* format, int* type, void** data);
void GL__TexParameter_fn(int* target, int* pname, int* param);
void GL__Uniform1_fn(int* location, float* value);
void GL__Uniform11_fn(int* location, uArray* value);
void GL__Uniform12_fn(int* location, int* value);
void GL__Uniform2_fn(int* location, ::g::Uno::Float2* value);
void GL__Uniform21_fn(int* location, uArray* value);
void GL__Uniform3_fn(int* location, ::g::Uno::Float3* value);
void GL__Uniform4_fn(int* location, ::g::Uno::Float4* value);
void GL__Uniform41_fn(int* location, uArray* value);
void GL__UniformMatrix2_fn(int* location, bool* transpose, ::g::Uno::Float2x2* value);
void GL__UniformMatrix4_fn(int* location, bool* transpose, ::g::Uno::Float4x4* value);
void GL__UseProgram_fn(uint32_t* program);
void GL__VertexAttribPointer_fn(int* index, int* size, int* type, bool* normalized, int* stride, int* offset);
void GL__Viewport_fn(int* x, int* y, int* width, int* height);

struct GL : uObject
{
    static void ActiveTexture(int texture);
    static void AttachShader(uint32_t program, uint32_t shader);
    static void BindBuffer(int target, uint32_t buffer);
    static void BindFramebuffer(int target, uint32_t fb);
    static void BindRenderbuffer(int target, uint32_t renderbuffer);
    static void BindTexture(int target, uint32_t texture);
    static void BlendFuncSeparate(int srcRGB, int dstRGB, int srcAlpha, int dstAlpha);
    static void BufferData1(int target, ::g::Uno::Buffer* data, int usage);
    static void BufferSubData(int target, int offset, ::g::Uno::Buffer* data);
    static int CheckFramebufferStatus(int target);
    static void Clear(int mask);
    static void ClearColor(float red, float green, float blue, float alpha);
    static void ClearDepth(float depth);
    static void ColorMask(bool red, bool green, bool blue, bool alpha);
    static void CompileShader(uint32_t shader);
    static uint32_t CreateBuffer();
    static uint32_t CreateFramebuffer();
    static uint32_t CreateProgram();
    static uint32_t CreateRenderbuffer();
    static uint32_t CreateShader(int type);
    static uint32_t CreateTexture();
    static void CullFace(int mode);
    static void DeleteBuffer(uint32_t buffer);
    static void DeleteFramebuffer(uint32_t fb);
    static void DeleteProgram(uint32_t program);
    static void DeleteRenderbuffer(uint32_t renderbuffer);
    static void DeleteShader(uint32_t shader);
    static void DeleteTexture(uint32_t texture);
    static void DepthFunc(int func);
    static void DepthMask(bool flag);
    static void DetachShader(uint32_t program, uint32_t shader);
    static void Disable(int cap);
    static void DisableVertexAttribArray(int index);
    static void DrawArrays(int mode, int first, int count);
    static void DrawElements(int mode, int count, int type, int offset);
    static void Enable(int cap);
    static void EnableVertexAttribArray(int index);
    static void Finish();
    static void FramebufferRenderbuffer(int target, int attachment, int renderbuffertarget, uint32_t renderbuffer);
    static void FramebufferTexture2D(int target, int attachment, int textarget, uint32_t texture, int level);
    static void FrontFace(int mode);
    static int GetAttribLocation(uint32_t program, uString* name);
    static int GetError();
    static uint32_t GetFramebufferBinding();
    static ::g::Uno::Int4 GetInteger(int name);
    static int GetInteger1(int name);
    static uString* GetProgramInfoLog(uint32_t program);
    static int GetProgramParameter(uint32_t program, int pname);
    static uint32_t GetRenderbufferBinding();
    static uString* GetShaderInfoLog(uint32_t shader);
    static int GetShaderParameter(uint32_t shader, int pname);
    static uString* GetString(int name);
    static int GetUniformLocation(uint32_t program, uString* name);
    static void LineWidth(float width);
    static void LinkProgram(uint32_t program);
    static void PixelStore(int pname, int param);
    static void RenderbufferStorage(int target, int internalFormat, int width, int height);
    static void Scissor(int x, int y, int width, int height);
    static void ShaderSource(uint32_t shader, uString* source);
    static void TexImage2D(int target, int level, int internalFormat, int width, int height, int border, int format, int type, ::g::Uno::Buffer* data);
    static void TexImage2D1(int target, int level, int internalFormat, int width, int height, int border, int format, int type, void* data);
    static void TexParameter(int target, int pname, int param);
    static void Uniform1(int location, float value);
    static void Uniform11(int location, uArray* value);
    static void Uniform12(int location, int value);
    static void Uniform2(int location, ::g::Uno::Float2 value);
    static void Uniform21(int location, uArray* value);
    static void Uniform3(int location, ::g::Uno::Float3 value);
    static void Uniform4(int location, ::g::Uno::Float4 value);
    static void Uniform41(int location, uArray* value);
    static void UniformMatrix2(int location, bool transpose, ::g::Uno::Float2x2 value);
    static void UniformMatrix4(int location, bool transpose, ::g::Uno::Float4x4 value);
    static void UseProgram(uint32_t program);
    static void VertexAttribPointer(int index, int size, int type, bool normalized, int stride, int offset);
    static void Viewport(int x, int y, int width, int height);
};
// }

}} // ::g::OpenGL
