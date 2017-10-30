// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <OpenGL.GL.h>
#include <OpenGL.GLBlendEquation.h>
#include <OpenGL.GLBlendingFactor.h>
#include <OpenGL.GLBufferHandle.h>
#include <OpenGL.GLBufferTarget.h>
#include <OpenGL.GLBufferUsage.h>
#include <OpenGL.GLClearBufferMask.h>
#include <OpenGL.GLCullFaceMode.h>
#include <OpenGL.GLDataType.h>
#include <OpenGL.GLDepthFunction.h>
#include <OpenGL.GLEnableCap.h>
#include <OpenGL.GLError.h>
#include <OpenGL.GLFramebufferAttachment.h>
#include <OpenGL.GLFramebufferHandle.h>
#include <OpenGL.GLFramebufferStatus.h>
#include <OpenGL.GLFramebufferTarget.h>
#include <OpenGL.GLFrontFaceDirection.h>
#include <OpenGL.GLIndexType.h>
#include <OpenGL.GLInteger4Name.h>
#include <OpenGL.GLIntegerName.h>
#include <OpenGL.GLPixelFormat.h>
#include <OpenGL.GLPixelStoreParameter.h>
#include <OpenGL.GLPixelType.h>
#include <OpenGL.GLPrimitiveType.h>
#include <OpenGL.GLProgramHandle.h>
#include <OpenGL.GLProgramParameter.h>
#include <OpenGL.GLRenderbufferHandle.h>
#include <OpenGL.GLRenderbufferStorage.h>
#include <OpenGL.GLRenderbufferTarget.h>
#include <OpenGL.GLShaderHandle.h>
#include <OpenGL.GLShaderParameter.h>
#include <OpenGL.GLShaderType.h>
#include <OpenGL.GLStringName.h>
#include <OpenGL.GLTextureHandle.h>
#include <OpenGL.GLTextureParameterName.h>
#include <OpenGL.GLTextureParameterValue.h>
#include <OpenGL.GLTextureTarget.h>
#include <OpenGL.GLTextureUnit.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float2x2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Int.h>
#include <Uno.Int4.h>
#include <Uno.IntPtr.h>
#include <Uno.String.h>
#include <Uno/Support.h>
#include <XliPlatform/GL.h>
static uType* TYPES[1];

namespace g{
namespace OpenGL{

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GL.uno
// ----------------------------------------------------------------

// public static extern class GL :10
// {
static void GL_build(uType* type)
{
}

uClassType* GL_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("OpenGL.GL", options);
    type->fp_build_ = GL_build;
    return type;
}

// public static void ActiveTexture(OpenGL.GLTextureUnit texture) :883
void GL__ActiveTexture_fn(int* texture)
{
    GL::ActiveTexture(*texture);
}

// public static void AttachShader(OpenGL.GLProgramHandle program, OpenGL.GLShaderHandle shader) :1041
void GL__AttachShader_fn(uint32_t* program, uint32_t* shader)
{
    GL::AttachShader(*program, *shader);
}

// public static void BindBuffer(OpenGL.GLBufferTarget target, OpenGL.GLBufferHandle buffer) :530
void GL__BindBuffer_fn(int* target, uint32_t* buffer)
{
    GL::BindBuffer(*target, *buffer);
}

// public static void BindFramebuffer(OpenGL.GLFramebufferTarget target, OpenGL.GLFramebufferHandle fb) :647
void GL__BindFramebuffer_fn(int* target, uint32_t* fb)
{
    GL::BindFramebuffer(*target, *fb);
}

// public static void BindRenderbuffer(OpenGL.GLRenderbufferTarget target, OpenGL.GLRenderbufferHandle renderbuffer) :783
void GL__BindRenderbuffer_fn(int* target, uint32_t* renderbuffer)
{
    GL::BindRenderbuffer(*target, *renderbuffer);
}

// public static void BindTexture(OpenGL.GLTextureTarget target, OpenGL.GLTextureHandle texture) :901
void GL__BindTexture_fn(int* target, uint32_t* texture)
{
    GL::BindTexture(*target, *texture);
}

// public static void BlendFuncSeparate(OpenGL.GLBlendingFactor srcRGB, OpenGL.GLBlendingFactor dstRGB, OpenGL.GLBlendingFactor srcAlpha, OpenGL.GLBlendingFactor dstAlpha) :349
void GL__BlendFuncSeparate_fn(int* srcRGB, int* dstRGB, int* srcAlpha, int* dstAlpha)
{
    GL::BlendFuncSeparate(*srcRGB, *dstRGB, *srcAlpha, *dstAlpha);
}

// public static void BufferData(OpenGL.GLBufferTarget target, Uno.Buffer data, OpenGL.GLBufferUsage usage) :567
void GL__BufferData1_fn(int* target, ::g::Uno::Buffer* data, int* usage)
{
    GL::BufferData1(*target, data, *usage);
}

// public static void BufferSubData(OpenGL.GLBufferTarget target, int offset, Uno.Buffer data) :585
void GL__BufferSubData_fn(int* target, int* offset, ::g::Uno::Buffer* data)
{
    GL::BufferSubData(*target, *offset, data);
}

// public static OpenGL.GLFramebufferStatus CheckFramebufferStatus(OpenGL.GLFramebufferTarget target) :665
void GL__CheckFramebufferStatus_fn(int* target, int* __retval)
{
    *__retval = GL::CheckFramebufferStatus(*target);
}

// public static void Clear(OpenGL.GLClearBufferMask mask) :192
void GL__Clear_fn(int* mask)
{
    GL::Clear(*mask);
}

// public static void ClearColor(float red, float green, float blue, float alpha) :210
void GL__ClearColor_fn(float* red, float* green, float* blue, float* alpha)
{
    GL::ClearColor(*red, *green, *blue, *alpha);
}

// public static void ClearDepth(float depth) :228
void GL__ClearDepth_fn(float* depth)
{
    GL::ClearDepth(*depth);
}

// public static void ColorMask(bool red, bool green, bool blue, bool alpha) :251
void GL__ColorMask_fn(bool* red, bool* green, bool* blue, bool* alpha)
{
    GL::ColorMask(*red, *green, *blue, *alpha);
}

// public static void CompileShader(OpenGL.GLShaderHandle shader) :1077
void GL__CompileShader_fn(uint32_t* shader)
{
    GL::CompileShader(*shader);
}

// public static OpenGL.GLBufferHandle CreateBuffer() :603
void GL__CreateBuffer_fn(uint32_t* __retval)
{
    *__retval = GL::CreateBuffer();
}

// public static OpenGL.GLFramebufferHandle CreateFramebuffer() :683
void GL__CreateFramebuffer_fn(uint32_t* __retval)
{
    *__retval = GL::CreateFramebuffer();
}

// public static OpenGL.GLProgramHandle CreateProgram() :1095
void GL__CreateProgram_fn(uint32_t* __retval)
{
    *__retval = GL::CreateProgram();
}

// public static OpenGL.GLRenderbufferHandle CreateRenderbuffer() :801
void GL__CreateRenderbuffer_fn(uint32_t* __retval)
{
    *__retval = GL::CreateRenderbuffer();
}

// public static OpenGL.GLShaderHandle CreateShader(OpenGL.GLShaderType type) :1113
void GL__CreateShader_fn(int* type, uint32_t* __retval)
{
    *__retval = GL::CreateShader(*type);
}

// public static OpenGL.GLTextureHandle CreateTexture() :922
void GL__CreateTexture_fn(uint32_t* __retval)
{
    *__retval = GL::CreateTexture();
}

// public static void CullFace(OpenGL.GLCullFaceMode mode) :394
void GL__CullFace_fn(int* mode)
{
    GL::CullFace(*mode);
}

// public static void DeleteBuffer(OpenGL.GLBufferHandle buffer) :623
void GL__DeleteBuffer_fn(uint32_t* buffer)
{
    GL::DeleteBuffer(*buffer);
}

// public static void DeleteFramebuffer(OpenGL.GLFramebufferHandle fb) :703
void GL__DeleteFramebuffer_fn(uint32_t* fb)
{
    GL::DeleteFramebuffer(*fb);
}

// public static void DeleteProgram(OpenGL.GLProgramHandle program) :1131
void GL__DeleteProgram_fn(uint32_t* program)
{
    GL::DeleteProgram(*program);
}

// public static void DeleteRenderbuffer(OpenGL.GLRenderbufferHandle renderbuffer) :821
void GL__DeleteRenderbuffer_fn(uint32_t* renderbuffer)
{
    GL::DeleteRenderbuffer(*renderbuffer);
}

// public static void DeleteShader(OpenGL.GLShaderHandle shader) :1149
void GL__DeleteShader_fn(uint32_t* shader)
{
    GL::DeleteShader(*shader);
}

// public static void DeleteTexture(OpenGL.GLTextureHandle texture) :942
void GL__DeleteTexture_fn(uint32_t* texture)
{
    GL::DeleteTexture(*texture);
}

// public static void DepthFunc(OpenGL.GLDepthFunction func) :367
void GL__DepthFunc_fn(int* func)
{
    GL::DepthFunc(*func);
}

// public static void DepthMask(bool flag) :269
void GL__DepthMask_fn(bool* flag)
{
    GL::DepthMask(*flag);
}

// public static void DetachShader(OpenGL.GLProgramHandle program, OpenGL.GLShaderHandle shader) :1167
void GL__DetachShader_fn(uint32_t* program, uint32_t* shader)
{
    GL::DetachShader(*program, *shader);
}

// public static void Disable(OpenGL.GLEnableCap cap) :57
void GL__Disable_fn(int* cap)
{
    GL::Disable(*cap);
}

// public static void DisableVertexAttribArray(int index) :1401
void GL__DisableVertexAttribArray_fn(int* index)
{
    GL::DisableVertexAttribArray(*index);
}

// public static void DrawArrays(OpenGL.GLPrimitiveType mode, int first, int count) :1920
void GL__DrawArrays_fn(int* mode, int* first, int* count)
{
    GL::DrawArrays(*mode, *first, *count);
}

// public static void DrawElements(OpenGL.GLPrimitiveType mode, int count, OpenGL.GLIndexType type, int offset) :1938
void GL__DrawElements_fn(int* mode, int* count, int* type, int* offset)
{
    GL::DrawElements(*mode, *count, *type, *offset);
}

// public static void Enable(OpenGL.GLEnableCap cap) :75
void GL__Enable_fn(int* cap)
{
    GL::Enable(*cap);
}

// public static void EnableVertexAttribArray(int index) :1419
void GL__EnableVertexAttribArray_fn(int* index)
{
    GL::EnableVertexAttribArray(*index);
}

// public static void Finish() :93
void GL__Finish_fn()
{
    GL::Finish();
}

// public static void FramebufferRenderbuffer(OpenGL.GLFramebufferTarget target, OpenGL.GLFramebufferAttachment attachment, OpenGL.GLRenderbufferTarget renderbuffertarget, OpenGL.GLRenderbufferHandle renderbuffer) :739
void GL__FramebufferRenderbuffer_fn(int* target, int* attachment, int* renderbuffertarget, uint32_t* renderbuffer)
{
    GL::FramebufferRenderbuffer(*target, *attachment, *renderbuffertarget, *renderbuffer);
}

// public static void FramebufferTexture2D(OpenGL.GLFramebufferTarget target, OpenGL.GLFramebufferAttachment attachment, OpenGL.GLTextureTarget textarget, OpenGL.GLTextureHandle texture, int level) :721
void GL__FramebufferTexture2D_fn(int* target, int* attachment, int* textarget, uint32_t* texture, int* level)
{
    GL::FramebufferTexture2D(*target, *attachment, *textarget, *texture, *level);
}

// public static void FrontFace(OpenGL.GLFrontFaceDirection mode) :412
void GL__FrontFace_fn(int* mode)
{
    GL::FrontFace(*mode);
}

// public static int GetAttribLocation(OpenGL.GLProgramHandle program, string name) :1440
void GL__GetAttribLocation_fn(uint32_t* program, uString* name, int* __retval)
{
    *__retval = GL::GetAttribLocation(*program, name);
}

// public static OpenGL.GLError GetError() :130
void GL__GetError_fn(int* __retval)
{
    *__retval = GL::GetError();
}

// public static OpenGL.GLFramebufferHandle GetFramebufferBinding() :760
void GL__GetFramebufferBinding_fn(uint32_t* __retval)
{
    *__retval = GL::GetFramebufferBinding();
}

// public static int4 GetInteger(OpenGL.GLInteger4Name name) :34
void GL__GetInteger_fn(int* name, ::g::Uno::Int4* __retval)
{
    *__retval = GL::GetInteger(*name);
}

// public static int GetInteger(OpenGL.GLIntegerName name) :14
void GL__GetInteger1_fn(int* name, int* __retval)
{
    *__retval = GL::GetInteger1(*name);
}

// public static string GetProgramInfoLog(OpenGL.GLProgramHandle program) :1207
void GL__GetProgramInfoLog_fn(uint32_t* program, uString** __retval)
{
    *__retval = GL::GetProgramInfoLog(*program);
}

// public static int GetProgramParameter(OpenGL.GLProgramHandle program, OpenGL.GLProgramParameter pname) :1187
void GL__GetProgramParameter_fn(uint32_t* program, int* pname, int* __retval)
{
    *__retval = GL::GetProgramParameter(*program, *pname);
}

// public static OpenGL.GLRenderbufferHandle GetRenderbufferBinding() :860
void GL__GetRenderbufferBinding_fn(uint32_t* __retval)
{
    *__retval = GL::GetRenderbufferBinding();
}

// public static string GetShaderInfoLog(OpenGL.GLShaderHandle shader) :1249
void GL__GetShaderInfoLog_fn(uint32_t* shader, uString** __retval)
{
    *__retval = GL::GetShaderInfoLog(*shader);
}

// public static int GetShaderParameter(OpenGL.GLShaderHandle shader, OpenGL.GLShaderParameter pname) :1229
void GL__GetShaderParameter_fn(uint32_t* shader, int* pname, int* __retval)
{
    *__retval = GL::GetShaderParameter(*shader, *pname);
}

// public static string GetString(OpenGL.GLStringName name) :148
void GL__GetString_fn(int* name, uString** __retval)
{
    *__retval = GL::GetString(*name);
}

// public static int GetUniformLocation(OpenGL.GLProgramHandle program, string name) :1460
void GL__GetUniformLocation_fn(uint32_t* program, uString* name, int* __retval)
{
    *__retval = GL::GetUniformLocation(*program, name);
}

// public static void LineWidth(float width) :430
void GL__LineWidth_fn(float* width)
{
    GL::LineWidth(*width);
}

// public static void LinkProgram(OpenGL.GLProgramHandle program) :1275
void GL__LinkProgram_fn(uint32_t* program)
{
    GL::LinkProgram(*program);
}

// public static void PixelStore(OpenGL.GLPixelStoreParameter pname, int param) :171
void GL__PixelStore_fn(int* pname, int* param)
{
    GL::PixelStore(*pname, *param);
}

// public static void RenderbufferStorage(OpenGL.GLRenderbufferTarget target, OpenGL.GLRenderbufferStorage internalFormat, int width, int height) :842
void GL__RenderbufferStorage_fn(int* target, int* internalFormat, int* width, int* height)
{
    GL::RenderbufferStorage(*target, *internalFormat, *width, *height);
}

// public static void Scissor(int x, int y, int width, int height) :491
void GL__Scissor_fn(int* x, int* y, int* width, int* height)
{
    GL::Scissor(*x, *y, *width, *height);
}

// public static void ShaderSource(OpenGL.GLShaderHandle shader, string source) :1293
void GL__ShaderSource_fn(uint32_t* shader, uString* source)
{
    GL::ShaderSource(*shader, source);
}

// public static void TexImage2D(OpenGL.GLTextureTarget target, int level, OpenGL.GLPixelFormat internalFormat, int width, int height, int border, OpenGL.GLPixelFormat format, OpenGL.GLPixelType type, Uno.Buffer data) :981
void GL__TexImage2D_fn(int* target, int* level, int* internalFormat, int* width, int* height, int* border, int* format, int* type, ::g::Uno::Buffer* data)
{
    GL::TexImage2D(*target, *level, *internalFormat, *width, *height, *border, *format, *type, data);
}

// public static void TexImage2D(OpenGL.GLTextureTarget target, int level, OpenGL.GLPixelFormat internalFormat, int width, int height, int border, OpenGL.GLPixelFormat format, OpenGL.GLPixelType type, Uno.IntPtr data) :999
void GL__TexImage2D1_fn(int* target, int* level, int* internalFormat, int* width, int* height, int* border, int* format, int* type, void** data)
{
    GL::TexImage2D1(*target, *level, *internalFormat, *width, *height, *border, *format, *type, *data);
}

// public static void TexParameter(OpenGL.GLTextureTarget target, OpenGL.GLTextureParameterName pname, OpenGL.GLTextureParameterValue param) :1018
void GL__TexParameter_fn(int* target, int* pname, int* param)
{
    GL::TexParameter(*target, *pname, *param);
}

// public static void Uniform1(int location, float value) :1557
void GL__Uniform1_fn(int* location, float* value)
{
    GL::Uniform1(*location, *value);
}

// public static void Uniform1(int location, float[] value) :1766
void GL__Uniform11_fn(int* location, uArray* value)
{
    GL::Uniform11(*location, value);
}

// public static void Uniform1(int location, int value) :1481
void GL__Uniform12_fn(int* location, int* value)
{
    GL::Uniform12(*location, *value);
}

// public static void Uniform2(int location, float2 value) :1576
void GL__Uniform2_fn(int* location, ::g::Uno::Float2* value)
{
    GL::Uniform2(*location, *value);
}

// public static void Uniform2(int location, float2[] value) :1785
void GL__Uniform21_fn(int* location, uArray* value)
{
    GL::Uniform21(*location, value);
}

// public static void Uniform3(int location, float3 value) :1595
void GL__Uniform3_fn(int* location, ::g::Uno::Float3* value)
{
    GL::Uniform3(*location, *value);
}

// public static void Uniform4(int location, float4 value) :1614
void GL__Uniform4_fn(int* location, ::g::Uno::Float4* value)
{
    GL::Uniform4(*location, *value);
}

// public static void Uniform4(int location, float4[] value) :1823
void GL__Uniform41_fn(int* location, uArray* value)
{
    GL::Uniform41(*location, value);
}

// public static void UniformMatrix2(int location, bool transpose, float2x2 value) :1633
void GL__UniformMatrix2_fn(int* location, bool* transpose, ::g::Uno::Float2x2* value)
{
    GL::UniformMatrix2(*location, *transpose, *value);
}

// public static void UniformMatrix4(int location, bool transpose, float4x4 value) :1671
void GL__UniformMatrix4_fn(int* location, bool* transpose, ::g::Uno::Float4x4* value)
{
    GL::UniformMatrix4(*location, *transpose, *value);
}

// public static void UseProgram(OpenGL.GLProgramHandle program) :1329
void GL__UseProgram_fn(uint32_t* program)
{
    GL::UseProgram(*program);
}

// public static void VertexAttribPointer(int index, int size, OpenGL.GLDataType type, bool normalized, int stride, int offset) :1900
void GL__VertexAttribPointer_fn(int* index, int* size, int* type, bool* normalized, int* stride, int* offset)
{
    GL::VertexAttribPointer(*index, *size, *type, *normalized, *stride, *offset);
}

// public static void Viewport(int x, int y, int width, int height) :509
void GL__Viewport_fn(int* x, int* y, int* width, int* height)
{
    GL::Viewport(*x, *y, *width, *height);
}

// public static void ActiveTexture(OpenGL.GLTextureUnit texture) [static] :883
void GL::ActiveTexture(int texture)
{
    glActiveTexture(texture);
}

// public static void AttachShader(OpenGL.GLProgramHandle program, OpenGL.GLShaderHandle shader) [static] :1041
void GL::AttachShader(uint32_t program, uint32_t shader)
{
    glAttachShader(program, shader);
}

// public static void BindBuffer(OpenGL.GLBufferTarget target, OpenGL.GLBufferHandle buffer) [static] :530
void GL::BindBuffer(int target, uint32_t buffer)
{
    glBindBuffer(target, buffer);
}

// public static void BindFramebuffer(OpenGL.GLFramebufferTarget target, OpenGL.GLFramebufferHandle fb) [static] :647
void GL::BindFramebuffer(int target, uint32_t fb)
{
    glBindFramebuffer(target, fb);
}

// public static void BindRenderbuffer(OpenGL.GLRenderbufferTarget target, OpenGL.GLRenderbufferHandle renderbuffer) [static] :783
void GL::BindRenderbuffer(int target, uint32_t renderbuffer)
{
    glBindRenderbuffer(target, renderbuffer);
}

// public static void BindTexture(OpenGL.GLTextureTarget target, OpenGL.GLTextureHandle texture) [static] :901
void GL::BindTexture(int target, uint32_t texture)
{
    glBindTexture(target, texture);
}

// public static void BlendFuncSeparate(OpenGL.GLBlendingFactor srcRGB, OpenGL.GLBlendingFactor dstRGB, OpenGL.GLBlendingFactor srcAlpha, OpenGL.GLBlendingFactor dstAlpha) [static] :349
void GL::BlendFuncSeparate(int srcRGB, int dstRGB, int srcAlpha, int dstAlpha)
{
    glBlendFuncSeparate(srcRGB, dstRGB, srcAlpha, dstAlpha);
}

// public static void BufferData(OpenGL.GLBufferTarget target, Uno.Buffer data, OpenGL.GLBufferUsage usage) [static] :567
void GL::BufferData1(int target, ::g::Uno::Buffer* data, int usage)
{
    glBufferData(target, U_BUFFER_SIZE(data), U_BUFFER_PTR(data), usage);
}

// public static void BufferSubData(OpenGL.GLBufferTarget target, int offset, Uno.Buffer data) [static] :585
void GL::BufferSubData(int target, int offset, ::g::Uno::Buffer* data)
{
    glBufferSubData(target, offset, U_BUFFER_SIZE(data), U_BUFFER_PTR(data));
}

// public static OpenGL.GLFramebufferStatus CheckFramebufferStatus(OpenGL.GLFramebufferTarget target) [static] :665
int GL::CheckFramebufferStatus(int target)
{
    return glCheckFramebufferStatus(target);
}

// public static void Clear(OpenGL.GLClearBufferMask mask) [static] :192
void GL::Clear(int mask)
{
    glClear(mask);
}

// public static void ClearColor(float red, float green, float blue, float alpha) [static] :210
void GL::ClearColor(float red, float green, float blue, float alpha)
{
    glClearColor(red, green, blue, alpha);
}

// public static void ClearDepth(float depth) [static] :228
void GL::ClearDepth(float depth)
{
    #ifdef U_GL_DESKTOP
                    glClearDepth((double)depth);
    #else
                    glClearDepthf(depth);
    #endif
}

// public static void ColorMask(bool red, bool green, bool blue, bool alpha) [static] :251
void GL::ColorMask(bool red, bool green, bool blue, bool alpha)
{
    glColorMask(red, green, blue, alpha);
}

// public static void CompileShader(OpenGL.GLShaderHandle shader) [static] :1077
void GL::CompileShader(uint32_t shader)
{
    glCompileShader(shader);
}

// public static OpenGL.GLBufferHandle CreateBuffer() [static] :603
uint32_t GL::CreateBuffer()
{
    GLuint handle;
    glGenBuffers(1, &handle);
    return handle;
}

// public static OpenGL.GLFramebufferHandle CreateFramebuffer() [static] :683
uint32_t GL::CreateFramebuffer()
{
    GLuint handle;
    glGenFramebuffers(1, &handle);
    return handle;
}

// public static OpenGL.GLProgramHandle CreateProgram() [static] :1095
uint32_t GL::CreateProgram()
{
    return glCreateProgram();
}

// public static OpenGL.GLRenderbufferHandle CreateRenderbuffer() [static] :801
uint32_t GL::CreateRenderbuffer()
{
    GLuint handle;
    glGenRenderbuffers(1, &handle);
    return handle;
}

// public static OpenGL.GLShaderHandle CreateShader(OpenGL.GLShaderType type) [static] :1113
uint32_t GL::CreateShader(int type)
{
    return glCreateShader(type);
}

// public static OpenGL.GLTextureHandle CreateTexture() [static] :922
uint32_t GL::CreateTexture()
{
    GLuint handle;
    glGenTextures(1, &handle);
    return handle;
}

// public static void CullFace(OpenGL.GLCullFaceMode mode) [static] :394
void GL::CullFace(int mode)
{
    glCullFace(mode);
}

// public static void DeleteBuffer(OpenGL.GLBufferHandle buffer) [static] :623
void GL::DeleteBuffer(uint32_t buffer)
{
    glDeleteBuffers(1, &buffer);
}

// public static void DeleteFramebuffer(OpenGL.GLFramebufferHandle fb) [static] :703
void GL::DeleteFramebuffer(uint32_t fb)
{
    glDeleteFramebuffers(1, &fb);
}

// public static void DeleteProgram(OpenGL.GLProgramHandle program) [static] :1131
void GL::DeleteProgram(uint32_t program)
{
    glDeleteProgram(program);
}

// public static void DeleteRenderbuffer(OpenGL.GLRenderbufferHandle renderbuffer) [static] :821
void GL::DeleteRenderbuffer(uint32_t renderbuffer)
{
    glDeleteRenderbuffers(1, &renderbuffer);
}

// public static void DeleteShader(OpenGL.GLShaderHandle shader) [static] :1149
void GL::DeleteShader(uint32_t shader)
{
    glDeleteShader(shader);
}

// public static void DeleteTexture(OpenGL.GLTextureHandle texture) [static] :942
void GL::DeleteTexture(uint32_t texture)
{
    glDeleteTextures(1, &texture);
}

// public static void DepthFunc(OpenGL.GLDepthFunction func) [static] :367
void GL::DepthFunc(int func)
{
    glDepthFunc(func);
}

// public static void DepthMask(bool flag) [static] :269
void GL::DepthMask(bool flag)
{
    glDepthMask(flag);
}

// public static void DetachShader(OpenGL.GLProgramHandle program, OpenGL.GLShaderHandle shader) [static] :1167
void GL::DetachShader(uint32_t program, uint32_t shader)
{
    glDetachShader(program, shader);
}

// public static void Disable(OpenGL.GLEnableCap cap) [static] :57
void GL::Disable(int cap)
{
    glDisable(cap);
}

// public static void DisableVertexAttribArray(int index) [static] :1401
void GL::DisableVertexAttribArray(int index)
{
    glDisableVertexAttribArray(index);
}

// public static void DrawArrays(OpenGL.GLPrimitiveType mode, int first, int count) [static] :1920
void GL::DrawArrays(int mode, int first, int count)
{
    glDrawArrays(mode, first, count);
}

// public static void DrawElements(OpenGL.GLPrimitiveType mode, int count, OpenGL.GLIndexType type, int offset) [static] :1938
void GL::DrawElements(int mode, int count, int type, int offset)
{
    glDrawElements(mode, count, type, (const GLvoid*)(size_t)offset);
}

// public static void Enable(OpenGL.GLEnableCap cap) [static] :75
void GL::Enable(int cap)
{
    glEnable(cap);
}

// public static void EnableVertexAttribArray(int index) [static] :1419
void GL::EnableVertexAttribArray(int index)
{
    glEnableVertexAttribArray(index);
}

// public static void Finish() [static] :93
void GL::Finish()
{
    glFinish();
}

// public static void FramebufferRenderbuffer(OpenGL.GLFramebufferTarget target, OpenGL.GLFramebufferAttachment attachment, OpenGL.GLRenderbufferTarget renderbuffertarget, OpenGL.GLRenderbufferHandle renderbuffer) [static] :739
void GL::FramebufferRenderbuffer(int target, int attachment, int renderbuffertarget, uint32_t renderbuffer)
{
    glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

// public static void FramebufferTexture2D(OpenGL.GLFramebufferTarget target, OpenGL.GLFramebufferAttachment attachment, OpenGL.GLTextureTarget textarget, OpenGL.GLTextureHandle texture, int level) [static] :721
void GL::FramebufferTexture2D(int target, int attachment, int textarget, uint32_t texture, int level)
{
    glFramebufferTexture2D(target, attachment, textarget, texture, level);
}

// public static void FrontFace(OpenGL.GLFrontFaceDirection mode) [static] :412
void GL::FrontFace(int mode)
{
    glFrontFace(mode);
}

// public static int GetAttribLocation(OpenGL.GLProgramHandle program, string name) [static] :1440
int GL::GetAttribLocation(uint32_t program, uString* name)
{
    return glGetAttribLocation(program, uStringToXliString(name).Ptr());
}

// public static OpenGL.GLError GetError() [static] :130
int GL::GetError()
{
    return glGetError();
}

// public static OpenGL.GLFramebufferHandle GetFramebufferBinding() [static] :760
uint32_t GL::GetFramebufferBinding()
{
    GLuint result;
    glGetIntegerv(GL_FRAMEBUFFER_BINDING, (GLint*)&result);
    return result;
}

// public static int4 GetInteger(OpenGL.GLInteger4Name name) [static] :34
::g::Uno::Int4 GL::GetInteger(int name)
{
    ::g::Uno::Int4 result;
    glGetIntegerv(name, (GLint*)&result);
    return result;
}

// public static int GetInteger(OpenGL.GLIntegerName name) [static] :14
int GL::GetInteger1(int name)
{
    int result;
    glGetIntegerv(name, (GLint*)&result);
    return result;
}

// public static string GetProgramInfoLog(OpenGL.GLProgramHandle program) [static] :1207
uString* GL::GetProgramInfoLog(uint32_t program)
{
    int len = 0;
    const int bufSize = 4096;
    char buf[bufSize];
    glGetProgramInfoLog(program, bufSize, &len, buf);
    return uString::Utf8(buf, len);
}

// public static int GetProgramParameter(OpenGL.GLProgramHandle program, OpenGL.GLProgramParameter pname) [static] :1187
int GL::GetProgramParameter(uint32_t program, int pname)
{
    GLint result;
    glGetProgramiv(program, pname, &result);
    return result;
}

// public static OpenGL.GLRenderbufferHandle GetRenderbufferBinding() [static] :860
uint32_t GL::GetRenderbufferBinding()
{
    GLuint result;
    glGetIntegerv(GL_RENDERBUFFER_BINDING, (GLint*)&result);
    return result;
}

// public static string GetShaderInfoLog(OpenGL.GLShaderHandle shader) [static] :1249
uString* GL::GetShaderInfoLog(uint32_t shader)
{
    int len = 0;
    const int bufSize = 4096;
    char buf[bufSize];
    glGetShaderInfoLog(shader, bufSize, &len, buf);
    return uString::Utf8(buf, len);
}

// public static int GetShaderParameter(OpenGL.GLShaderHandle shader, OpenGL.GLShaderParameter pname) [static] :1229
int GL::GetShaderParameter(uint32_t shader, int pname)
{
    GLint result;
    glGetShaderiv(shader, pname, &result);
    return result;
}

// public static string GetString(OpenGL.GLStringName name) [static] :148
uString* GL::GetString(int name)
{
    const char* str = (const char*)glGetString(name);
    if (!str) str = "";
    return uString::Utf8(str);
}

// public static int GetUniformLocation(OpenGL.GLProgramHandle program, string name) [static] :1460
int GL::GetUniformLocation(uint32_t program, uString* name)
{
    return glGetUniformLocation(program, uStringToXliString(name).Ptr());
}

// public static void LineWidth(float width) [static] :430
void GL::LineWidth(float width)
{
    glLineWidth(width);
}

// public static void LinkProgram(OpenGL.GLProgramHandle program) [static] :1275
void GL::LinkProgram(uint32_t program)
{
    glLinkProgram(program);
}

// public static void PixelStore(OpenGL.GLPixelStoreParameter pname, int param) [static] :171
void GL::PixelStore(int pname, int param)
{
    glPixelStorei(pname, param);
}

// public static void RenderbufferStorage(OpenGL.GLRenderbufferTarget target, OpenGL.GLRenderbufferStorage internalFormat, int width, int height) [static] :842
void GL::RenderbufferStorage(int target, int internalFormat, int width, int height)
{
    glRenderbufferStorage(target, internalFormat, width, height);
}

// public static void Scissor(int x, int y, int width, int height) [static] :491
void GL::Scissor(int x, int y, int width, int height)
{
    glScissor(x, y, width, height);
}

// public static void ShaderSource(OpenGL.GLShaderHandle shader, string source) [static] :1293
void GL::ShaderSource(uint32_t shader, uString* source)
{
    uBase::String utf8 = uStringToXliString(source);
    
    const char* code[] =
    {
    #ifdef U_GL_DESKTOP
        "#version 120\n",
    #else
        "",
    #endif
        utf8.Ptr(),
    };
    
    GLint len[] =
    {
        (GLint)strlen(code[0]),
        (GLint)utf8.Length(),
    };
    
    glShaderSource(shader, 2, code, len);
}

// public static void TexImage2D(OpenGL.GLTextureTarget target, int level, OpenGL.GLPixelFormat internalFormat, int width, int height, int border, OpenGL.GLPixelFormat format, OpenGL.GLPixelType type, Uno.Buffer data) [static] :981
void GL::TexImage2D(int target, int level, int internalFormat, int width, int height, int border, int format, int type, ::g::Uno::Buffer* data)
{
    glTexImage2D(target, level, internalFormat, width, height, border, format, type, data ? U_BUFFER_PTR(data) : NULL);
}

// public static void TexImage2D(OpenGL.GLTextureTarget target, int level, OpenGL.GLPixelFormat internalFormat, int width, int height, int border, OpenGL.GLPixelFormat format, OpenGL.GLPixelType type, Uno.IntPtr data) [static] :999
void GL::TexImage2D1(int target, int level, int internalFormat, int width, int height, int border, int format, int type, void* data)
{
    glTexImage2D(target, level, internalFormat, width, height, border, format, type, data);
}

// public static void TexParameter(OpenGL.GLTextureTarget target, OpenGL.GLTextureParameterName pname, OpenGL.GLTextureParameterValue param) [static] :1018
void GL::TexParameter(int target, int pname, int param)
{
    glTexParameteri(target, pname, param);
}

// public static void Uniform1(int location, float value) [static] :1557
void GL::Uniform1(int location, float value)
{
    glUniform1f(location, value);
}

// public static void Uniform1(int location, float[] value) [static] :1766
void GL::Uniform11(int location, uArray* value)
{
    glUniform1fv(location, value->Length(), (const GLfloat*)value->Ptr());
}

// public static void Uniform1(int location, int value) [static] :1481
void GL::Uniform12(int location, int value)
{
    glUniform1i(location, value);
}

// public static void Uniform2(int location, float2 value) [static] :1576
void GL::Uniform2(int location, ::g::Uno::Float2 value)
{
    glUniform2fv(location, 1, (const GLfloat*)&value);
}

// public static void Uniform2(int location, float2[] value) [static] :1785
void GL::Uniform21(int location, uArray* value)
{
    glUniform2fv(location, value->Length(), (const GLfloat*)value->Ptr());
}

// public static void Uniform3(int location, float3 value) [static] :1595
void GL::Uniform3(int location, ::g::Uno::Float3 value)
{
    glUniform3fv(location, 1, (const GLfloat*)&value);
}

// public static void Uniform4(int location, float4 value) [static] :1614
void GL::Uniform4(int location, ::g::Uno::Float4 value)
{
    glUniform4fv(location, 1, (const GLfloat*)&value);
}

// public static void Uniform4(int location, float4[] value) [static] :1823
void GL::Uniform41(int location, uArray* value)
{
    glUniform4fv(location, value->Length(), (const GLfloat*)value->Ptr());
}

// public static void UniformMatrix2(int location, bool transpose, float2x2 value) [static] :1633
void GL::UniformMatrix2(int location, bool transpose, ::g::Uno::Float2x2 value)
{
    glUniformMatrix2fv(location, 1, transpose, (const GLfloat*)&value);
}

// public static void UniformMatrix4(int location, bool transpose, float4x4 value) [static] :1671
void GL::UniformMatrix4(int location, bool transpose, ::g::Uno::Float4x4 value)
{
    glUniformMatrix4fv(location, 1, transpose, (const GLfloat*)&value);
}

// public static void UseProgram(OpenGL.GLProgramHandle program) [static] :1329
void GL::UseProgram(uint32_t program)
{
    glUseProgram(program);
}

// public static void VertexAttribPointer(int index, int size, OpenGL.GLDataType type, bool normalized, int stride, int offset) [static] :1900
void GL::VertexAttribPointer(int index, int size, int type, bool normalized, int stride, int offset)
{
    glVertexAttribPointer(index, size, type, normalized, stride, (const GLvoid*)(size_t)offset);
}

// public static void Viewport(int x, int y, int width, int height) [static] :509
void GL::Viewport(int x, int y, int width, int height)
{
    glViewport(x, y, width, height);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GLEnums.uno
// ---------------------------------------------------------------------

// public extern enum GLBlendEquation :216
uEnumType* GLBlendEquation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLBlendEquation", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "FuncAdd", 32774LL,
        "FuncSubtract", 32778LL,
        "FuncReverseSubtract", 32779LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GLEnums.uno
// ---------------------------------------------------------------------

// public extern enum GLBlendingFactor :224
uEnumType* GLBlendingFactor_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLBlendingFactor", ::g::Uno::Int_typeof(), 11);
    type->SetLiterals(
        "Zero", 0LL,
        "One", 1LL,
        "SrcColor", 768LL,
        "OneMinusSrcColor", 769LL,
        "SrcAlpha", 770LL,
        "OneMinusSrcAlpha", 771LL,
        "DstAlpha", 772LL,
        "OneMinusDstAlpha", 773LL,
        "DstColor", 774LL,
        "OneMinusDstColor", 775LL,
        "SrcAlphaSaturate", 776LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GLBufferHandle.uno
// ----------------------------------------------------------------------------

// public extern struct GLBufferHandle :11
// {
static void GLBufferHandle_build(uType* type)
{
    ::TYPES[0] = uObject_typeof();
}

uStructType* GLBufferHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(uint32_t);
    options.ValueSize = sizeof(uint32_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("OpenGL.GLBufferHandle", options);
    type->fp_build_ = GLBufferHandle_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))GLBufferHandle__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))GLBufferHandle__GetHashCode_fn;
    return type;
}

// public override sealed bool Equals(object obj) :42
void GLBufferHandle__Equals_fn(uint32_t* __this, uType* __type, uObject* obj, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), obj, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :36
void GLBufferHandle__GetHashCode_fn(uint32_t* __this, uType* __type, int* __retval)
{
    int ret2;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret2), ret2), void();
}

uint32_t GLBufferHandle::Zero_;
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GLEnums.uno
// ---------------------------------------------------------------------

// public extern enum GLBufferTarget :38
uEnumType* GLBufferTarget_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLBufferTarget", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "ArrayBuffer", 34962LL,
        "ElementArrayBuffer", 34963LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GLEnums.uno
// ---------------------------------------------------------------------

// public extern enum GLBufferUsage :45
uEnumType* GLBufferUsage_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLBufferUsage", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "StreamDraw", 35040LL,
        "StaticDraw", 35044LL,
        "DynamicDraw", 35048LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GLEnums.uno
// ---------------------------------------------------------------------

// public extern enum GLClearBufferMask :281
uEnumType* GLClearBufferMask_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLClearBufferMask", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "DepthBufferBit", 256LL,
        "StencilBufferBit", 1024LL,
        "ColorBufferBit", 16384LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GLEnums.uno
// ---------------------------------------------------------------------

// public extern enum GLCullFaceMode :126
uEnumType* GLCullFaceMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLCullFaceMode", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "None", 0LL,
        "Front", 1028LL,
        "Back", 1029LL,
        "FrontAndBack", 1032LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GLEnums.uno
// ---------------------------------------------------------------------

// public extern enum GLDataType :154
uEnumType* GLDataType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLDataType", ::g::Uno::Int_typeof(), 7);
    type->SetLiterals(
        "Byte", 5120LL,
        "UnsignedByte", 5121LL,
        "Short", 5122LL,
        "UnsignedShort", 5123LL,
        "Int", 5124LL,
        "UnsignedInt", 5125LL,
        "Float", 5126LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GLEnums.uno
// ---------------------------------------------------------------------

// public extern enum GLDepthFunction :113
uEnumType* GLDepthFunction_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLDepthFunction", ::g::Uno::Int_typeof(), 8);
    type->SetLiterals(
        "Never", 512LL,
        "Less", 513LL,
        "Equal", 514LL,
        "Lequal", 515LL,
        "Greater", 516LL,
        "Notequal", 517LL,
        "Gequal", 518LL,
        "Always", 519LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GLEnums.uno
// ---------------------------------------------------------------------

// public extern enum GLEnableCap :104
uEnumType* GLEnableCap_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLEnableCap", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Blend", 3042LL,
        "DepthTest", 2929LL,
        "CullFace", 2884LL,
        "ScissorTest", 3089LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GLEnums.uno
// ---------------------------------------------------------------------

// public extern enum GLError :260
uEnumType* GLError_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLError", ::g::Uno::Int_typeof(), 6);
    type->SetLiterals(
        "NoError", 0LL,
        "InvalidEnum", 1280LL,
        "InvalidValue", 1281LL,
        "InvalidOperation", 1282LL,
        "OutOfMemory", 1285LL,
        "InvalidFramebufferOperation", 1286LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GLEnums.uno
// ---------------------------------------------------------------------

// public extern enum GLFramebufferAttachment :240
uEnumType* GLFramebufferAttachment_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLFramebufferAttachment", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "ColorAttachment0", 36064LL,
        "DepthAttachment", 36096LL,
        "StencilAttachment", 36128LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GLFramebufferHandle.uno
// ---------------------------------------------------------------------------------

// public extern struct GLFramebufferHandle :11
// {
static void GLFramebufferHandle_build(uType* type)
{
    ::TYPES[0] = uObject_typeof();
}

uStructType* GLFramebufferHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(uint32_t);
    options.ValueSize = sizeof(uint32_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("OpenGL.GLFramebufferHandle", options);
    type->fp_build_ = GLFramebufferHandle_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))GLFramebufferHandle__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))GLFramebufferHandle__GetHashCode_fn;
    return type;
}

// public override sealed bool Equals(object obj) :42
void GLFramebufferHandle__Equals_fn(uint32_t* __this, uType* __type, uObject* obj, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), obj, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :36
void GLFramebufferHandle__GetHashCode_fn(uint32_t* __this, uType* __type, int* __retval)
{
    int ret2;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret2), ret2), void();
}

// public static operator !=(OpenGL.GLFramebufferHandle left, OpenGL.GLFramebufferHandle right) :20
void GLFramebufferHandle__op_Inequality_fn(uint32_t* left, uint32_t* right, bool* __retval)
{
    *__retval = GLFramebufferHandle::op_Inequality(*left, *right);
}

uint32_t GLFramebufferHandle::Zero_;

// public static operator !=(OpenGL.GLFramebufferHandle left, OpenGL.GLFramebufferHandle right) [static] :20
bool GLFramebufferHandle::op_Inequality(uint32_t left, uint32_t right)
{
    return left != right;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GLEnums.uno
// ---------------------------------------------------------------------

// public extern enum GLFramebufferStatus :271
uEnumType* GLFramebufferStatus_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLFramebufferStatus", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "FramebufferComplete", 36053LL,
        "FramebufferIncompleteAttachment", 36054LL,
        "FramebufferIncompleteMissingAttachment", 36055LL,
        "FramebufferIncompleteDimensions", 36057LL,
        "FramebufferUnsupported", 36061LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GLEnums.uno
// ---------------------------------------------------------------------

// public extern enum GLFramebufferTarget :248
uEnumType* GLFramebufferTarget_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLFramebufferTarget", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "Framebuffer", 36160LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GLEnums.uno
// ---------------------------------------------------------------------

// public extern enum GLFrontFaceDirection :135
uEnumType* GLFrontFaceDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLFrontFaceDirection", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Cw", 2304LL,
        "Ccw", 2305LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GLEnums.uno
// ---------------------------------------------------------------------

// public extern enum GLIndexType :166
uEnumType* GLIndexType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLIndexType", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "UnsignedByte", 5121LL,
        "UnsignedShort", 5123LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GLEnums.uno
// ---------------------------------------------------------------------

// public extern enum GLInteger4Name :13
uEnumType* GLInteger4Name_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLInteger4Name", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "ScissorBox", 3088LL,
        "Viewport", 2978LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GLEnums.uno
// ---------------------------------------------------------------------

// public extern enum GLIntegerName :7
uEnumType* GLIntegerName_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLIntegerName", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "MaxTextureSize", 3379LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GLEnums.uno
// ---------------------------------------------------------------------

// public extern enum GLPixelFormat :173
uEnumType* GLPixelFormat_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLPixelFormat", ::g::Uno::Int_typeof(), 10);
    type->SetLiterals(
        "DepthComponent", 6402LL,
        "Alpha", 6406LL,
        "Bgr", 32992LL,
        "Bgra", 32993LL,
        "Red", 6403LL,
        "Rg", 33319LL,
        "Rgb", 6407LL,
        "Rgba", 6408LL,
        "Luminance", 6409LL,
        "LuminanceAlpha", 6410LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GLEnums.uno
// ---------------------------------------------------------------------

// public extern enum GLPixelStoreParameter :203
uEnumType* GLPixelStoreParameter_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLPixelStoreParameter", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "UnpackAlignment", 3317LL,
        "PackAlignment", 3333LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GLEnums.uno
// ---------------------------------------------------------------------

// public extern enum GLPixelType :188
uEnumType* GLPixelType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLPixelType", ::g::Uno::Int_typeof(), 10);
    type->SetLiterals(
        "Byte", 5120LL,
        "UnsignedByte", 5121LL,
        "Short", 5122LL,
        "UnsignedShort", 5123LL,
        "Int", 5124LL,
        "UnsignedInt", 5125LL,
        "Float", 5126LL,
        "UnsignedShort4444", 32819LL,
        "UnsignedShort5551", 32820LL,
        "UnsignedShort565", 33635LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GLEnums.uno
// ---------------------------------------------------------------------

// public extern enum GLPrimitiveType :142
uEnumType* GLPrimitiveType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLPrimitiveType", ::g::Uno::Int_typeof(), 7);
    type->SetLiterals(
        "Points", 0LL,
        "Lines", 1LL,
        "LineLoop", 2LL,
        "LineStrip", 3LL,
        "Triangles", 4LL,
        "TriangleStrip", 5LL,
        "TriangleFan", 6LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GLProgramHandle.uno
// -----------------------------------------------------------------------------

// public extern struct GLProgramHandle :11
// {
static void GLProgramHandle_build(uType* type)
{
    ::TYPES[0] = uObject_typeof();
}

uStructType* GLProgramHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(uint32_t);
    options.ValueSize = sizeof(uint32_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("OpenGL.GLProgramHandle", options);
    type->fp_build_ = GLProgramHandle_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))GLProgramHandle__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))GLProgramHandle__GetHashCode_fn;
    return type;
}

// public override sealed bool Equals(object obj) :42
void GLProgramHandle__Equals_fn(uint32_t* __this, uType* __type, uObject* obj, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), obj, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :36
void GLProgramHandle__GetHashCode_fn(uint32_t* __this, uType* __type, int* __retval)
{
    int ret2;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret2), ret2), void();
}

uint32_t GLProgramHandle::Zero_;
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GLEnums.uno
// ---------------------------------------------------------------------

// public extern enum GLProgramParameter :297
uEnumType* GLProgramParameter_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLProgramParameter", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "DeleteStatus", 35712LL,
        "LinkStatus", 35714LL,
        "AttachedShaders", 35717LL,
        "ActiveUniforms", 35718LL,
        "ActiveAttributes", 35721LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GLRenderbufferHandle.uno
// ----------------------------------------------------------------------------------

// public extern struct GLRenderbufferHandle :11
// {
static void GLRenderbufferHandle_build(uType* type)
{
    ::TYPES[0] = uObject_typeof();
}

uStructType* GLRenderbufferHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(uint32_t);
    options.ValueSize = sizeof(uint32_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("OpenGL.GLRenderbufferHandle", options);
    type->fp_build_ = GLRenderbufferHandle_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))GLRenderbufferHandle__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))GLRenderbufferHandle__GetHashCode_fn;
    return type;
}

// public override sealed bool Equals(object obj) :42
void GLRenderbufferHandle__Equals_fn(uint32_t* __this, uType* __type, uObject* obj, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), obj, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :36
void GLRenderbufferHandle__GetHashCode_fn(uint32_t* __this, uType* __type, int* __retval)
{
    int ret2;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret2), ret2), void();
}

// public static operator !=(OpenGL.GLRenderbufferHandle left, OpenGL.GLRenderbufferHandle right) :20
void GLRenderbufferHandle__op_Inequality_fn(uint32_t* left, uint32_t* right, bool* __retval)
{
    *__retval = GLRenderbufferHandle::op_Inequality(*left, *right);
}

uint32_t GLRenderbufferHandle::Zero_;

// public static operator !=(OpenGL.GLRenderbufferHandle left, OpenGL.GLRenderbufferHandle right) [static] :20
bool GLRenderbufferHandle::op_Inequality(uint32_t left, uint32_t right)
{
    return left != right;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GLEnums.uno
// ---------------------------------------------------------------------

// public extern enum GLRenderbufferStorage :210
uEnumType* GLRenderbufferStorage_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLRenderbufferStorage", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "DepthComponent16", 33189LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GLEnums.uno
// ---------------------------------------------------------------------

// public extern enum GLRenderbufferTarget :254
uEnumType* GLRenderbufferTarget_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLRenderbufferTarget", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "Renderbuffer", 36161LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GLShaderHandle.uno
// ----------------------------------------------------------------------------

// public extern struct GLShaderHandle :11
// {
static void GLShaderHandle_build(uType* type)
{
    ::TYPES[0] = uObject_typeof();
}

uStructType* GLShaderHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(uint32_t);
    options.ValueSize = sizeof(uint32_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("OpenGL.GLShaderHandle", options);
    type->fp_build_ = GLShaderHandle_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))GLShaderHandle__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))GLShaderHandle__GetHashCode_fn;
    return type;
}

// public override sealed bool Equals(object obj) :42
void GLShaderHandle__Equals_fn(uint32_t* __this, uType* __type, uObject* obj, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), obj, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :36
void GLShaderHandle__GetHashCode_fn(uint32_t* __this, uType* __type, int* __retval)
{
    int ret2;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret2), ret2), void();
}

uint32_t GLShaderHandle::Zero_;
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GLEnums.uno
// ---------------------------------------------------------------------

// public extern enum GLShaderParameter :289
uEnumType* GLShaderParameter_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLShaderParameter", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "ShaderType", 35663LL,
        "DeleteStatus", 35712LL,
        "CompileStatus", 35713LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GLEnums.uno
// ---------------------------------------------------------------------

// public extern enum GLShaderType :20
uEnumType* GLShaderType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLShaderType", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "FragmentShader", 35632LL,
        "VertexShader", 35633LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GLEnums.uno
// ---------------------------------------------------------------------

// public extern enum GLStringName :307
uEnumType* GLStringName_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLStringName", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Vendor", 7936LL,
        "Renderer", 7937LL,
        "Version", 7938LL,
        "Extensions", 7939LL,
        "ShadingLanguageVersion", 35724LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GLTextureHandle.uno
// -----------------------------------------------------------------------------

// public extern struct GLTextureHandle :11
// {
static void GLTextureHandle_build(uType* type)
{
    ::TYPES[0] = uObject_typeof();
}

uStructType* GLTextureHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(uint32_t);
    options.ValueSize = sizeof(uint32_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("OpenGL.GLTextureHandle", options);
    type->fp_build_ = GLTextureHandle_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))GLTextureHandle__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))GLTextureHandle__GetHashCode_fn;
    return type;
}

// public override sealed bool Equals(object obj) :42
void GLTextureHandle__Equals_fn(uint32_t* __this, uType* __type, uObject* obj, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), obj, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :36
void GLTextureHandle__GetHashCode_fn(uint32_t* __this, uType* __type, int* __retval)
{
    int ret2;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret2), ret2), void();
}

// public static extern explicit operator int(OpenGL.GLTextureHandle handle) :25
void GLTextureHandle__op_Explicit2_fn(uint32_t* handle, int* __retval)
{
    *__retval = GLTextureHandle::op_Explicit2(*handle);
}

// public static operator !=(OpenGL.GLTextureHandle left, OpenGL.GLTextureHandle right) :20
void GLTextureHandle__op_Inequality_fn(uint32_t* left, uint32_t* right, bool* __retval)
{
    *__retval = GLTextureHandle::op_Inequality(*left, *right);
}

uint32_t GLTextureHandle::Zero_;

// public static extern explicit operator int(OpenGL.GLTextureHandle handle) [static] :25
int GLTextureHandle::op_Explicit2(uint32_t handle)
{
    return handle;
}

// public static operator !=(OpenGL.GLTextureHandle left, OpenGL.GLTextureHandle right) [static] :20
bool GLTextureHandle::op_Inequality(uint32_t left, uint32_t right)
{
    return left != right;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GLEnums.uno
// ---------------------------------------------------------------------

// public extern enum GLTextureParameterName :80
uEnumType* GLTextureParameterName_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLTextureParameterName", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "WrapS", 10242LL,
        "WrapT", 10243LL,
        "MagFilter", 10240LL,
        "MinFilter", 10241LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GLEnums.uno
// ---------------------------------------------------------------------

// public extern enum GLTextureParameterValue :89
uEnumType* GLTextureParameterValue_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLTextureParameterValue", ::g::Uno::Int_typeof(), 8);
    type->SetLiterals(
        "Repeat", 10497LL,
        "ClampToEdge", 33071LL,
        "Nearest", 9728LL,
        "Linear", 9729LL,
        "NearestMipmapNearest", 9984LL,
        "LinearMipmapNearest", 9985LL,
        "NearestMipmapLinear", 9986LL,
        "LinearMipmapLinear", 9987LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GLEnums.uno
// ---------------------------------------------------------------------

// public extern enum GLTextureTarget :66
uEnumType* GLTextureTarget_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLTextureTarget", ::g::Uno::Int_typeof(), 9);
    type->SetLiterals(
        "Texture2D", 3553LL,
        "TextureCubeMap", 34067LL,
        "TextureCubeMapPositiveX", 34069LL,
        "TextureCubeMapNegativeX", 34070LL,
        "TextureCubeMapPositiveY", 34071LL,
        "TextureCubeMapNegativeY", 34072LL,
        "TextureCubeMapPositiveZ", 34073LL,
        "TextureCubeMapNegativeZ", 34074LL,
        "TextureExternalOES", 36197LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GLEnums.uno
// ---------------------------------------------------------------------

// public extern enum GLTextureUnit :53
uEnumType* GLTextureUnit_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("OpenGL.GLTextureUnit", ::g::Uno::Int_typeof(), 8);
    type->SetLiterals(
        "Texture0", 33984LL,
        "Texture1", 33985LL,
        "Texture2", 33986LL,
        "Texture3", 33987LL,
        "Texture4", 33988LL,
        "Texture5", 33989LL,
        "Texture6", 33990LL,
        "Texture7", 33991LL);
    return type;
}

}} // ::g::OpenGL
