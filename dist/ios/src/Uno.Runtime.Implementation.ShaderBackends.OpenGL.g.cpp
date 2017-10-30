// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <OpenGL.GL.h>
#include <OpenGL.GLBlendEquation.h>
#include <OpenGL.GLBlendingFactor.h>
#include <OpenGL.GLBufferHandle.h>
#include <OpenGL.GLBufferTarget.h>
#include <OpenGL.GLBufferUsage.h>
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
#include <OpenGL.GLPixelFormat.h>
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
#include <OpenGL.GLTextureHandle.h>
#include <OpenGL.GLTextureParameterName.h>
#include <OpenGL.GLTextureParameterValue.h>
#include <OpenGL.GLTextureTarget.h>
#include <OpenGL.GLTextureUnit.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float2x2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendEquation.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.CompareFunc.h>
#include <Uno.Graphics.DeviceBuffer.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.IndexBuffer.h>
#include <Uno.Graphics.IndexType.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.PolygonWinding.h>
#include <Uno.Graphics.PrimitiveType.h>
#include <Uno.Graphics.RenderTarget.h>
#include <Uno.Graphics.SamplerState.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.TextureAddressMode.h>
#include <Uno.Graphics.TextureFilter.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Graphics.VideoTexture.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.InvalidOperationException.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLCompiledProgram.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLException.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLHelpers.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLInterop.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
static uString* STRINGS[28];
static uType* TYPES[5];

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{
namespace ShaderBackends{
namespace OpenGL{

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Runtime/Implementation/ShaderBackends/OpenGL/GLCompiledProgram.uno
// -------------------------------------------------------------------------------------------------------------------------

// public sealed extern class GLCompiledProgram :6
// {
static void GLCompiledProgram_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Int_typeof()->Array();
    type->SetDependencies(
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLHelpers_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(GLCompiledProgram_type, interface0));
    type->SetFields(0,
        ::g::OpenGL::GLShaderHandle_typeof(), offsetof(GLCompiledProgram, _fsHandle), 0,
        ::TYPES[0/*int[]*/], offsetof(GLCompiledProgram, _locations), 0,
        ::g::OpenGL::GLShaderHandle_typeof(), offsetof(GLCompiledProgram, _vsHandle), 0,
        ::g::OpenGL::GLProgramHandle_typeof(), offsetof(GLCompiledProgram, _GLProgramHandle), 0);
}

GLCompiledProgram_type* GLCompiledProgram_typeof()
{
    static uSStrong<GLCompiledProgram_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(GLCompiledProgram);
    options.TypeSize = sizeof(GLCompiledProgram_type);
    type = (GLCompiledProgram_type*)uClassType::New("Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLCompiledProgram", options);
    type->fp_build_ = GLCompiledProgram_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))GLCompiledProgram__Dispose_fn;
    return type;
}

// internal GLCompiledProgram(string vsSource, string fsSource, int constCount, int attribCount, string[] constAttribAndUniformNames) :28
void GLCompiledProgram__ctor__fn(GLCompiledProgram* __this, uString* vsSource, uString* fsSource, int* constCount, int* attribCount, uArray* constAttribAndUniformNames)
{
    __this->ctor_(vsSource, fsSource, *constCount, *attribCount, constAttribAndUniformNames);
}

// public void Dispose() :47
void GLCompiledProgram__Dispose_fn(GLCompiledProgram* __this)
{
    __this->Dispose();
}

// public int GetLocation(int index) :23
void GLCompiledProgram__GetLocation_fn(GLCompiledProgram* __this, int* index, int* __retval)
{
    *__retval = __this->GetLocation(*index);
}

// public generated OpenGL.GLProgramHandle get_GLProgramHandle() :14
void GLCompiledProgram__get_GLProgramHandle_fn(GLCompiledProgram* __this, uint32_t* __retval)
{
    *__retval = __this->GLProgramHandle();
}

// private generated void set_GLProgramHandle(OpenGL.GLProgramHandle value) :15
void GLCompiledProgram__set_GLProgramHandle_fn(GLCompiledProgram* __this, uint32_t* value)
{
    __this->GLProgramHandle(*value);
}

// internal GLCompiledProgram New(string vsSource, string fsSource, int constCount, int attribCount, string[] constAttribAndUniformNames) :28
void GLCompiledProgram__New1_fn(uString* vsSource, uString* fsSource, int* constCount, int* attribCount, uArray* constAttribAndUniformNames, GLCompiledProgram** __retval)
{
    *__retval = GLCompiledProgram::New1(vsSource, fsSource, *constCount, *attribCount, constAttribAndUniformNames);
}

// internal GLCompiledProgram(string vsSource, string fsSource, int constCount, int attribCount, string[] constAttribAndUniformNames) [instance] :28
void GLCompiledProgram::ctor_(uString* vsSource, uString* fsSource, int constCount, int attribCount, uArray* constAttribAndUniformNames)
{
    _vsHandle = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLHelpers::CompileShader(35633, vsSource);
    _fsHandle = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLHelpers::CompileShader(35632, fsSource);
    GLProgramHandle(::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLHelpers::LinkProgram(_vsHandle, _fsHandle));
    _locations = uArray::New(::TYPES[0/*int[]*/], uPtr(constAttribAndUniformNames)->Length());

    for (int i = 0; i < constCount; i++)
        uPtr(_locations)->Item<int>(i) = -1;

    for (int i1 = constCount; i1 < (constCount + attribCount); i1++)
        uPtr(_locations)->Item<int>(i1) = ::g::OpenGL::GL::GetAttribLocation(GLProgramHandle(), uPtr(constAttribAndUniformNames)->Strong<uString*>(i1));

    for (int i2 = constCount + attribCount; i2 < constAttribAndUniformNames->Length(); i2++)
        uPtr(_locations)->Item<int>(i2) = ::g::OpenGL::GL::GetUniformLocation(GLProgramHandle(), uPtr(constAttribAndUniformNames)->Strong<uString*>(i2));
}

// public void Dispose() [instance] :47
void GLCompiledProgram::Dispose()
{
    ::g::OpenGL::GL::UseProgram(::g::OpenGL::GLProgramHandle::Zero_);
    ::g::OpenGL::GL::DetachShader(GLProgramHandle(), _vsHandle);
    ::g::OpenGL::GL::DetachShader(GLProgramHandle(), _fsHandle);
    ::g::OpenGL::GL::DeleteProgram(GLProgramHandle());
    ::g::OpenGL::GL::DeleteShader(_vsHandle);
    ::g::OpenGL::GL::DeleteShader(_fsHandle);
}

// public int GetLocation(int index) [instance] :23
int GLCompiledProgram::GetLocation(int index)
{
    return uPtr(_locations)->Item<int>(index);
}

// public generated OpenGL.GLProgramHandle get_GLProgramHandle() [instance] :14
uint32_t GLCompiledProgram::GLProgramHandle()
{
    return _GLProgramHandle;
}

// private generated void set_GLProgramHandle(OpenGL.GLProgramHandle value) [instance] :15
void GLCompiledProgram::GLProgramHandle(uint32_t value)
{
    _GLProgramHandle = value;
}

// internal GLCompiledProgram New(string vsSource, string fsSource, int constCount, int attribCount, string[] constAttribAndUniformNames) [static] :28
GLCompiledProgram* GLCompiledProgram::New1(uString* vsSource, uString* fsSource, int constCount, int attribCount, uArray* constAttribAndUniformNames)
{
    GLCompiledProgram* obj1 = (GLCompiledProgram*)uNew(GLCompiledProgram_typeof());
    obj1->ctor_(vsSource, fsSource, constCount, attribCount, constAttribAndUniformNames);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Runtime/Implementation/ShaderBackends/OpenGL/GLDrawCall.uno
// ------------------------------------------------------------------------------------------------------------------

// public extern struct GLDrawCall :8
// {
static void GLDrawCall_build(uType* type)
{
    ::STRINGS[0] = uString::Const("true");
    ::STRINGS[1] = uString::Const("false");
    ::STRINGS[2] = uString::Const("Draw statements may not be used from the constructor of the containing class.");
    ::TYPES[1] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Int_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::String_typeof()->Array();
    ::TYPES[3] = ::g::Uno::Int_typeof();
    type->SetDependencies(
        ::g::Uno::Graphics::Texture2D_typeof());
    type->SetFields(0,
        ::TYPES[2/*string[]*/], offsetof(GLDrawCall, _constValues), 0,
        ::g::Uno::Bool_typeof(), offsetof(GLDrawCall, _compiledProgramDirty), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram_typeof(), offsetof(GLDrawCall, _compiledProgram), 0,
        ::g::OpenGL::GLBlendEquation_typeof(), offsetof(GLDrawCall, _blendEqRgb), 0,
        ::g::OpenGL::GLBlendEquation_typeof(), offsetof(GLDrawCall, _blendEqAlpha), 0,
        ::g::OpenGL::GLBlendingFactor_typeof(), offsetof(GLDrawCall, _blendSrcRgb), 0,
        ::g::OpenGL::GLBlendingFactor_typeof(), offsetof(GLDrawCall, _blendSrcAlpha), 0,
        ::g::OpenGL::GLBlendingFactor_typeof(), offsetof(GLDrawCall, _blendDstRgb), 0,
        ::g::OpenGL::GLBlendingFactor_typeof(), offsetof(GLDrawCall, _blendDstAlpha), 0,
        ::g::OpenGL::GLDepthFunction_typeof(), offsetof(GLDrawCall, _depthFunc), 0,
        ::g::OpenGL::GLPrimitiveType_typeof(), offsetof(GLDrawCall, _primitiveType), 0,
        ::g::OpenGL::GLCullFaceMode_typeof(), offsetof(GLDrawCall, _cullFace), 0,
        ::g::OpenGL::GLFrontFaceDirection_typeof(), offsetof(GLDrawCall, _frontFace), 0,
        ::TYPES[3/*int*/], offsetof(GLDrawCall, _BaseVertex), 0,
        ::g::Uno::Bool_typeof(), offsetof(GLDrawCall, _BlendEnabled), 0,
        ::g::Uno::Bool_typeof(), offsetof(GLDrawCall, _DepthTestEnabled), 0,
        ::g::Uno::Float_typeof(), offsetof(GLDrawCall, _LineWidth), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), offsetof(GLDrawCall, _Program), 0,
        ::g::Uno::Bool_typeof(), offsetof(GLDrawCall, _WriteAlpha), 0,
        ::g::Uno::Bool_typeof(), offsetof(GLDrawCall, _WriteBlue), 0,
        ::g::Uno::Bool_typeof(), offsetof(GLDrawCall, _WriteDepth), 0,
        ::g::Uno::Bool_typeof(), offsetof(GLDrawCall, _WriteGreen), 0,
        ::g::Uno::Bool_typeof(), offsetof(GLDrawCall, _WriteRed), 0,
        ::TYPES[1/*Uno.Collections.List<int>*/], (uintptr_t)&GLDrawCall::_boundAttributes_, uFieldFlagsStatic,
        ::TYPES[3/*int*/], (uintptr_t)&GLDrawCall::_currentTextureUnit_, uFieldFlagsStatic);
}

uStructType* GLDrawCall_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 25;
    options.DependencyCount = 1;
    options.Alignment = alignof(GLDrawCall);
    options.ValueSize = sizeof(GLDrawCall);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall", options);
    type->fp_build_ = GLDrawCall_build;
    return type;
}

// public GLDrawCall(Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram program) :153
void GLDrawCall__ctor__fn(GLDrawCall* __this, ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram* program)
{
    __this->ctor_(program);
}

// public void Attrib(int index, int componentCount, OpenGL.GLDataType componentType, bool normalized, Uno.Graphics.VertexBuffer buf, int stride, int offset) :208
void GLDrawCall__Attrib_fn(GLDrawCall* __this, int* index, int* componentCount, int* componentType, bool* normalized, ::g::Uno::Graphics::VertexBuffer* buf, int* stride, int* offset)
{
    __this->Attrib(*index, *componentCount, *componentType, *normalized, buf, *stride, *offset);
}

// public void Attrib(int index, Uno.Graphics.VertexAttributeType type, Uno.Graphics.VertexBuffer buf, int stride, int offset) :229
void GLDrawCall__Attrib1_fn(GLDrawCall* __this, int* index, int* type, ::g::Uno::Graphics::VertexBuffer* buf, int* stride, int* offset)
{
    __this->Attrib1(*index, *type, buf, *stride, *offset);
}

// public generated int get_BaseVertex() :143
void GLDrawCall__get_BaseVertex_fn(GLDrawCall* __this, int* __retval)
{
    *__retval = __this->BaseVertex();
}

// public generated void set_BaseVertex(int value) :144
void GLDrawCall__set_BaseVertex_fn(GLDrawCall* __this, int* value)
{
    __this->BaseVertex(*value);
}

// private void Begin() :457
void GLDrawCall__Begin_fn(GLDrawCall* __this)
{
    __this->Begin();
}

// public Uno.Graphics.BlendOperand get_BlendDstAlpha() :77
void GLDrawCall__get_BlendDstAlpha_fn(GLDrawCall* __this, int* __retval)
{
    *__retval = __this->BlendDstAlpha();
}

// public void set_BlendDstAlpha(Uno.Graphics.BlendOperand value) :78
void GLDrawCall__set_BlendDstAlpha_fn(GLDrawCall* __this, int* value)
{
    __this->BlendDstAlpha(*value);
}

// public Uno.Graphics.BlendOperand get_BlendDstRgb() :71
void GLDrawCall__get_BlendDstRgb_fn(GLDrawCall* __this, int* __retval)
{
    *__retval = __this->BlendDstRgb();
}

// public void set_BlendDstRgb(Uno.Graphics.BlendOperand value) :72
void GLDrawCall__set_BlendDstRgb_fn(GLDrawCall* __this, int* value)
{
    __this->BlendDstRgb(*value);
}

// public generated bool get_BlendEnabled() :41
void GLDrawCall__get_BlendEnabled_fn(GLDrawCall* __this, bool* __retval)
{
    *__retval = __this->BlendEnabled();
}

// public generated void set_BlendEnabled(bool value) :42
void GLDrawCall__set_BlendEnabled_fn(GLDrawCall* __this, bool* value)
{
    __this->BlendEnabled(*value);
}

// public Uno.Graphics.BlendEquation get_BlendEquationAlpha() :53
void GLDrawCall__get_BlendEquationAlpha_fn(GLDrawCall* __this, int* __retval)
{
    *__retval = __this->BlendEquationAlpha();
}

// public void set_BlendEquationAlpha(Uno.Graphics.BlendEquation value) :54
void GLDrawCall__set_BlendEquationAlpha_fn(GLDrawCall* __this, int* value)
{
    __this->BlendEquationAlpha(*value);
}

// public Uno.Graphics.BlendEquation get_BlendEquationRgb() :47
void GLDrawCall__get_BlendEquationRgb_fn(GLDrawCall* __this, int* __retval)
{
    *__retval = __this->BlendEquationRgb();
}

// public void set_BlendEquationRgb(Uno.Graphics.BlendEquation value) :48
void GLDrawCall__set_BlendEquationRgb_fn(GLDrawCall* __this, int* value)
{
    __this->BlendEquationRgb(*value);
}

// public Uno.Graphics.BlendOperand get_BlendSrcAlpha() :65
void GLDrawCall__get_BlendSrcAlpha_fn(GLDrawCall* __this, int* __retval)
{
    *__retval = __this->BlendSrcAlpha();
}

// public void set_BlendSrcAlpha(Uno.Graphics.BlendOperand value) :66
void GLDrawCall__set_BlendSrcAlpha_fn(GLDrawCall* __this, int* value)
{
    __this->BlendSrcAlpha(*value);
}

// public Uno.Graphics.BlendOperand get_BlendSrcRgb() :59
void GLDrawCall__get_BlendSrcRgb_fn(GLDrawCall* __this, int* __retval)
{
    *__retval = __this->BlendSrcRgb();
}

// public void set_BlendSrcRgb(Uno.Graphics.BlendOperand value) :60
void GLDrawCall__set_BlendSrcRgb_fn(GLDrawCall* __this, int* value)
{
    __this->BlendSrcRgb(*value);
}

// public void Const(int index, bool value) :184
void GLDrawCall__Const_fn(GLDrawCall* __this, int* index, bool* value)
{
    __this->Const(*index, *value);
}

// public void Const(int index, int value) :189
void GLDrawCall__Const1_fn(GLDrawCall* __this, int* index, int* value)
{
    __this->Const1(*index, *value);
}

// private void ConstInternal(int index, string value) :175
void GLDrawCall__ConstInternal_fn(GLDrawCall* __this, int* index, uString* value)
{
    __this->ConstInternal(*index, value);
}

// public Uno.Graphics.PolygonFace get_CullFace() :95
void GLDrawCall__get_CullFace_fn(GLDrawCall* __this, int* __retval)
{
    *__retval = __this->CullFace();
}

// public void set_CullFace(Uno.Graphics.PolygonFace value) :96
void GLDrawCall__set_CullFace_fn(GLDrawCall* __this, int* value)
{
    __this->CullFace(*value);
}

// public Uno.Graphics.CompareFunc get_DepthFunc() :89
void GLDrawCall__get_DepthFunc_fn(GLDrawCall* __this, int* __retval)
{
    *__retval = __this->DepthFunc();
}

// public void set_DepthFunc(Uno.Graphics.CompareFunc value) :90
void GLDrawCall__set_DepthFunc_fn(GLDrawCall* __this, int* value)
{
    __this->DepthFunc(*value);
}

// public generated bool get_DepthTestEnabled() :83
void GLDrawCall__get_DepthTestEnabled_fn(GLDrawCall* __this, bool* __retval)
{
    *__retval = __this->DepthTestEnabled();
}

// public generated void set_DepthTestEnabled(bool value) :84
void GLDrawCall__set_DepthTestEnabled_fn(GLDrawCall* __this, bool* value)
{
    __this->DepthTestEnabled(*value);
}

// public void DisableSampler(int index, OpenGL.GLTextureTarget target) :292
void GLDrawCall__DisableSampler_fn(GLDrawCall* __this, int* index, int* target)
{
    __this->DisableSampler(*index, *target);
}

// public void Draw(int count, [Uno.Graphics.IndexType type], [Uno.Graphics.IndexBuffer buf]) :540
void GLDrawCall__Draw_fn(GLDrawCall* __this, int* count, int* type, ::g::Uno::Graphics::IndexBuffer* buf)
{
    __this->Draw(*count, *type, buf);
}

// public void DrawArrays(int count) :524
void GLDrawCall__DrawArrays_fn(GLDrawCall* __this, int* count)
{
    __this->DrawArrays(*count);
}

// public void DrawElements(int count, OpenGL.GLIndexType type, Uno.Graphics.IndexBuffer buf) :531
void GLDrawCall__DrawElements_fn(GLDrawCall* __this, int* count, int* type, ::g::Uno::Graphics::IndexBuffer* buf)
{
    __this->DrawElements(*count, *type, buf);
}

// private void End() :499
void GLDrawCall__End_fn(GLDrawCall* __this)
{
    __this->End();
}

// public generated float get_LineWidth() :149
void GLDrawCall__get_LineWidth_fn(GLDrawCall* __this, float* __retval)
{
    *__retval = __this->LineWidth();
}

// public generated void set_LineWidth(float value) :150
void GLDrawCall__set_LineWidth_fn(GLDrawCall* __this, float* value)
{
    __this->LineWidth(*value);
}

// public GLDrawCall New(Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram program) :153
void GLDrawCall__New1_fn(::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram* program, GLDrawCall* __retval)
{
    *__retval = GLDrawCall__New1(program);
}

// public Uno.Graphics.PolygonWinding get_PolygonWinding() :101
void GLDrawCall__get_PolygonWinding_fn(GLDrawCall* __this, int* __retval)
{
    *__retval = __this->PolygonWinding();
}

// public void set_PolygonWinding(Uno.Graphics.PolygonWinding value) :102
void GLDrawCall__set_PolygonWinding_fn(GLDrawCall* __this, int* value)
{
    __this->PolygonWinding(*value);
}

// public Uno.Graphics.PrimitiveType get_PrimitiveType() :107
void GLDrawCall__get_PrimitiveType_fn(GLDrawCall* __this, int* __retval)
{
    *__retval = __this->PrimitiveType();
}

// public void set_PrimitiveType(Uno.Graphics.PrimitiveType value) :108
void GLDrawCall__set_PrimitiveType_fn(GLDrawCall* __this, int* value)
{
    __this->PrimitiveType(*value);
}

// public generated Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram get_Program() :35
void GLDrawCall__get_Program_fn(GLDrawCall* __this, ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram** __retval)
{
    *__retval = __this->Program();
}

// private generated void set_Program(Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram value) :36
void GLDrawCall__set_Program_fn(GLDrawCall* __this, ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram* value)
{
    __this->Program(value);
}

// public void Sampler(int index, OpenGL.GLTextureTarget target, OpenGL.GLTextureHandle handle, bool isMipmap, bool isPow2) :238
void GLDrawCall__Sampler_fn(GLDrawCall* __this, int* index, int* target, uint32_t* handle, bool* isMipmap, bool* isPow2)
{
    __this->Sampler(*index, *target, *handle, *isMipmap, *isPow2);
}

// public void Sampler(int index, OpenGL.GLTextureTarget target, OpenGL.GLTextureHandle handle, Uno.Graphics.SamplerState state, bool isMipmap, bool isPow2) :265
void GLDrawCall__Sampler1_fn(GLDrawCall* __this, int* index, int* target, uint32_t* handle, ::g::Uno::Graphics::SamplerState* state, bool* isMipmap, bool* isPow2)
{
    __this->Sampler1(*index, *target, *handle, *state, *isMipmap, *isPow2);
}

// public void Sampler(int index, texture2D value) :299
void GLDrawCall__Sampler2_fn(GLDrawCall* __this, int* index, ::g::Uno::Graphics::Texture2D* value)
{
    __this->Sampler2(*index, value);
}

// public void Sampler(int index, texture2D value, Uno.Graphics.SamplerState state) :307
void GLDrawCall__Sampler3_fn(GLDrawCall* __this, int* index, ::g::Uno::Graphics::Texture2D* value, ::g::Uno::Graphics::SamplerState* state)
{
    __this->Sampler3(*index, value, *state);
}

// public void Sampler(int index, Uno.Graphics.VideoTexture value, Uno.Graphics.SamplerState state) :339
void GLDrawCall__Sampler7_fn(GLDrawCall* __this, int* index, ::g::Uno::Graphics::VideoTexture* value, ::g::Uno::Graphics::SamplerState* state)
{
    __this->Sampler7(*index, value, *state);
}

// public void Uniform(int index, float value) :387
void GLDrawCall__Uniform_fn(GLDrawCall* __this, int* index, float* value)
{
    __this->Uniform(*index, *value);
}

// public void Uniform(int index, float[] value) :422
void GLDrawCall__Uniform1_fn(GLDrawCall* __this, int* index, uArray* value)
{
    __this->Uniform1(*index, value);
}

// public void Uniform(int index, float2 value) :392
void GLDrawCall__Uniform2_fn(GLDrawCall* __this, int* index, ::g::Uno::Float2* value)
{
    __this->Uniform2(*index, *value);
}

// public void Uniform(int index, float2[] value) :427
void GLDrawCall__Uniform3_fn(GLDrawCall* __this, int* index, uArray* value)
{
    __this->Uniform3(*index, value);
}

// public void Uniform(int index, float2x2 value) :407
void GLDrawCall__Uniform4_fn(GLDrawCall* __this, int* index, ::g::Uno::Float2x2* value)
{
    __this->Uniform4(*index, *value);
}

// public void Uniform(int index, float3 value) :397
void GLDrawCall__Uniform6_fn(GLDrawCall* __this, int* index, ::g::Uno::Float3* value)
{
    __this->Uniform6(*index, *value);
}

// public void Uniform(int index, float4 value) :402
void GLDrawCall__Uniform10_fn(GLDrawCall* __this, int* index, ::g::Uno::Float4* value)
{
    __this->Uniform10(*index, *value);
}

// public void Uniform(int index, float4[] value) :437
void GLDrawCall__Uniform11_fn(GLDrawCall* __this, int* index, uArray* value)
{
    __this->Uniform11(*index, value);
}

// public void Uniform(int index, float4x4 value) :417
void GLDrawCall__Uniform12_fn(GLDrawCall* __this, int* index, ::g::Uno::Float4x4* value)
{
    __this->Uniform12(*index, *value);
}

// public void Use() :194
void GLDrawCall__Use_fn(GLDrawCall* __this)
{
    __this->Use();
}

// public generated bool get_WriteAlpha() :131
void GLDrawCall__get_WriteAlpha_fn(GLDrawCall* __this, bool* __retval)
{
    *__retval = __this->WriteAlpha();
}

// public generated void set_WriteAlpha(bool value) :132
void GLDrawCall__set_WriteAlpha_fn(GLDrawCall* __this, bool* value)
{
    __this->WriteAlpha(*value);
}

// public generated bool get_WriteBlue() :125
void GLDrawCall__get_WriteBlue_fn(GLDrawCall* __this, bool* __retval)
{
    *__retval = __this->WriteBlue();
}

// public generated void set_WriteBlue(bool value) :126
void GLDrawCall__set_WriteBlue_fn(GLDrawCall* __this, bool* value)
{
    __this->WriteBlue(*value);
}

// public generated bool get_WriteDepth() :137
void GLDrawCall__get_WriteDepth_fn(GLDrawCall* __this, bool* __retval)
{
    *__retval = __this->WriteDepth();
}

// public generated void set_WriteDepth(bool value) :138
void GLDrawCall__set_WriteDepth_fn(GLDrawCall* __this, bool* value)
{
    __this->WriteDepth(*value);
}

// public generated bool get_WriteGreen() :119
void GLDrawCall__get_WriteGreen_fn(GLDrawCall* __this, bool* __retval)
{
    *__retval = __this->WriteGreen();
}

// public generated void set_WriteGreen(bool value) :120
void GLDrawCall__set_WriteGreen_fn(GLDrawCall* __this, bool* value)
{
    __this->WriteGreen(*value);
}

// public generated bool get_WriteRed() :113
void GLDrawCall__get_WriteRed_fn(GLDrawCall* __this, bool* __retval)
{
    *__retval = __this->WriteRed();
}

// public generated void set_WriteRed(bool value) :114
void GLDrawCall__set_WriteRed_fn(GLDrawCall* __this, bool* value)
{
    __this->WriteRed(*value);
}

uSStrong< ::g::Uno::Collections::List*> GLDrawCall::_boundAttributes_;
int GLDrawCall::_currentTextureUnit_;

// public GLDrawCall(Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram program) [instance] :153
void GLDrawCall::ctor_(::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram* program)
{
    int ind1;
    int ind2;
    bool ind3;
    bool ind4;
    bool ind5;
    bool ind6;
    *this = uDefault<GLDrawCall>();

    if (GLDrawCall::_boundAttributes_ == NULL)
        GLDrawCall::_boundAttributes_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[1/*Uno.Collections.List<int>*/]));

    _constValues = uArray::New(::TYPES[2/*string[]*/], uPtr(program)->ConstantCount());
    Program(program);
    BlendEnabled(false);
    BlendEquationRgb((BlendEquationAlpha(0), 0));
    BlendSrcRgb((ind1 = (ind2 = (BlendDstAlpha(1), 1), BlendDstRgb(ind2), ind2), BlendSrcAlpha(ind1), ind1));
    WriteRed((ind3 = (ind4 = (ind5 = (ind6 = (DepthTestEnabled(true), true), WriteDepth(ind6), ind6), WriteAlpha(ind5), ind5), WriteBlue(ind4), ind4), WriteGreen(ind3), ind3));
    LineWidth(1.0f);
    DepthFunc(2);
    CullFace(2);
    PolygonWinding(1);
    PrimitiveType(1);
    BaseVertex(0);
}

// public void Attrib(int index, int componentCount, OpenGL.GLDataType componentType, bool normalized, Uno.Graphics.VertexBuffer buf, int stride, int offset) [instance] :208
void GLDrawCall::Attrib(int index, int componentCount, int componentType, bool normalized, ::g::Uno::Graphics::VertexBuffer* buf, int stride, int offset)
{
    if (buf == NULL)
        return;

    int location = uPtr(_compiledProgram)->GetLocation(index);

    if (location < 0)
        return;

    ::g::OpenGL::GL::EnableVertexAttribArray(location);
    ::g::OpenGL::GL::BindBuffer(34962, uPtr(buf)->GLBufferHandle());
    ::g::OpenGL::GL::VertexAttribPointer(location, componentCount, componentType, normalized, stride, offset);
    ::g::OpenGL::GL::BindBuffer(34962, ::g::OpenGL::GLBufferHandle::Zero_);
    ::g::Uno::Collections::List__Add_fn(uPtr(GLDrawCall::_boundAttributes_), uCRef<int>(location));
}

// public void Attrib(int index, Uno.Graphics.VertexAttributeType type, Uno.Graphics.VertexBuffer buf, int stride, int offset) [instance] :229
void GLDrawCall::Attrib1(int index, int type, ::g::Uno::Graphics::VertexBuffer* buf, int stride, int offset)
{
    int componentCount;
    int componentType;
    bool normalized;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop::ToGLVertexAttributeType(type, &componentCount, &componentType, &normalized);
    Attrib(index, componentCount, componentType, normalized, buf, stride, offset);
}

// public generated int get_BaseVertex() [instance] :143
int GLDrawCall::BaseVertex()
{
    return _BaseVertex;
}

// public generated void set_BaseVertex(int value) [instance] :144
void GLDrawCall::BaseVertex(int value)
{
    _BaseVertex = value;
}

// private void Begin() [instance] :457
void GLDrawCall::Begin()
{
    if (BlendEnabled())
    {
        ::g::OpenGL::GL::Enable(3042);
        ::g::OpenGL::GL::BlendFuncSeparate(_blendSrcRgb, _blendDstRgb, _blendSrcAlpha, _blendDstAlpha);
    }
    else
        ::g::OpenGL::GL::Disable(3042);

    if (LineWidth() != 1.0f)
        ::g::OpenGL::GL::LineWidth(LineWidth());

    if (DepthTestEnabled())
    {
        ::g::OpenGL::GL::Enable(2929);
        ::g::OpenGL::GL::DepthFunc(_depthFunc);
    }
    else
        ::g::OpenGL::GL::Disable(2929);

    if (_cullFace != 0)
    {
        ::g::OpenGL::GL::Enable(2884);
        ::g::OpenGL::GL::CullFace(_cullFace);
        ::g::OpenGL::GL::FrontFace(_frontFace);
    }
    else
        ::g::OpenGL::GL::Disable(2884);

    ::g::OpenGL::GL::DepthMask(WriteDepth());
    ::g::OpenGL::GL::ColorMask(WriteRed(), WriteGreen(), WriteBlue(), WriteAlpha());
}

// public Uno.Graphics.BlendOperand get_BlendDstAlpha() [instance] :77
int GLDrawCall::BlendDstAlpha()
{
    return ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop::ToUnoGraphicsBlendOperand(_blendDstAlpha);
}

// public void set_BlendDstAlpha(Uno.Graphics.BlendOperand value) [instance] :78
void GLDrawCall::BlendDstAlpha(int value)
{
    _blendDstAlpha = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop::ToGLBlendingFactor(value);
}

// public Uno.Graphics.BlendOperand get_BlendDstRgb() [instance] :71
int GLDrawCall::BlendDstRgb()
{
    return ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop::ToUnoGraphicsBlendOperand(_blendDstRgb);
}

// public void set_BlendDstRgb(Uno.Graphics.BlendOperand value) [instance] :72
void GLDrawCall::BlendDstRgb(int value)
{
    _blendDstRgb = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop::ToGLBlendingFactor(value);
}

// public generated bool get_BlendEnabled() [instance] :41
bool GLDrawCall::BlendEnabled()
{
    return _BlendEnabled;
}

// public generated void set_BlendEnabled(bool value) [instance] :42
void GLDrawCall::BlendEnabled(bool value)
{
    _BlendEnabled = value;
}

// public Uno.Graphics.BlendEquation get_BlendEquationAlpha() [instance] :53
int GLDrawCall::BlendEquationAlpha()
{
    return ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop::ToUnoGraphicsBlendEquation(_blendEqAlpha);
}

// public void set_BlendEquationAlpha(Uno.Graphics.BlendEquation value) [instance] :54
void GLDrawCall::BlendEquationAlpha(int value)
{
    _blendEqAlpha = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop::ToGLBlendEquation(value);
}

// public Uno.Graphics.BlendEquation get_BlendEquationRgb() [instance] :47
int GLDrawCall::BlendEquationRgb()
{
    return ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop::ToUnoGraphicsBlendEquation(_blendEqRgb);
}

// public void set_BlendEquationRgb(Uno.Graphics.BlendEquation value) [instance] :48
void GLDrawCall::BlendEquationRgb(int value)
{
    _blendEqRgb = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop::ToGLBlendEquation(value);
}

// public Uno.Graphics.BlendOperand get_BlendSrcAlpha() [instance] :65
int GLDrawCall::BlendSrcAlpha()
{
    return ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop::ToUnoGraphicsBlendOperand(_blendSrcAlpha);
}

// public void set_BlendSrcAlpha(Uno.Graphics.BlendOperand value) [instance] :66
void GLDrawCall::BlendSrcAlpha(int value)
{
    _blendSrcAlpha = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop::ToGLBlendingFactor(value);
}

// public Uno.Graphics.BlendOperand get_BlendSrcRgb() [instance] :59
int GLDrawCall::BlendSrcRgb()
{
    return ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop::ToUnoGraphicsBlendOperand(_blendSrcRgb);
}

// public void set_BlendSrcRgb(Uno.Graphics.BlendOperand value) [instance] :60
void GLDrawCall::BlendSrcRgb(int value)
{
    _blendSrcRgb = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop::ToGLBlendingFactor(value);
}

// public void Const(int index, bool value) [instance] :184
void GLDrawCall::Const(int index, bool value)
{
    ConstInternal(index, value ? ::STRINGS[0/*"true"*/] : ::STRINGS[1/*"false"*/]);
}

// public void Const(int index, int value) [instance] :189
void GLDrawCall::Const1(int index, int value)
{
    ConstInternal(index, ::g::Uno::Int::ToString(value, ::TYPES[3/*int*/]));
}

// private void ConstInternal(int index, string value) [instance] :175
void GLDrawCall::ConstInternal(int index, uString* value)
{
    if ((_constValues != NULL) && ::g::Uno::String::op_Inequality(uPtr(_constValues)->Strong<uString*>(index), value))
    {
        uPtr(_constValues)->Strong<uString*>(index) = value;
        _compiledProgramDirty = true;
    }
}

// public Uno.Graphics.PolygonFace get_CullFace() [instance] :95
int GLDrawCall::CullFace()
{
    return ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop::ToUnoGraphicsPolygonFace(_cullFace);
}

// public void set_CullFace(Uno.Graphics.PolygonFace value) [instance] :96
void GLDrawCall::CullFace(int value)
{
    _cullFace = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop::ToGLCullFaceMode(value);
}

// public Uno.Graphics.CompareFunc get_DepthFunc() [instance] :89
int GLDrawCall::DepthFunc()
{
    return ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop::ToUnoGraphicsCompareFunc(_depthFunc);
}

// public void set_DepthFunc(Uno.Graphics.CompareFunc value) [instance] :90
void GLDrawCall::DepthFunc(int value)
{
    _depthFunc = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop::ToGLDepthFunction(value);
}

// public generated bool get_DepthTestEnabled() [instance] :83
bool GLDrawCall::DepthTestEnabled()
{
    return _DepthTestEnabled;
}

// public generated void set_DepthTestEnabled(bool value) [instance] :84
void GLDrawCall::DepthTestEnabled(bool value)
{
    _DepthTestEnabled = value;
}

// public void DisableSampler(int index, OpenGL.GLTextureTarget target) [instance] :292
void GLDrawCall::DisableSampler(int index, int target)
{
    ::g::OpenGL::GL::ActiveTexture(33984 + GLDrawCall::_currentTextureUnit_);
    ::g::OpenGL::GL::BindTexture(target, ::g::OpenGL::GLTextureHandle::Zero_);
    GLDrawCall::_currentTextureUnit_++;
}

// public void Draw(int count, [Uno.Graphics.IndexType type], [Uno.Graphics.IndexBuffer buf]) [instance] :540
void GLDrawCall::Draw(int count, int type, ::g::Uno::Graphics::IndexBuffer* buf)
{
    if (type == 0)
        DrawArrays(count);
    else
        DrawElements(count, ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop::ToGLIndexType(type), buf);
}

// public void DrawArrays(int count) [instance] :524
void GLDrawCall::DrawArrays(int count)
{
    Begin();
    ::g::OpenGL::GL::DrawArrays(_primitiveType, BaseVertex(), count);
    End();
}

// public void DrawElements(int count, OpenGL.GLIndexType type, Uno.Graphics.IndexBuffer buf) [instance] :531
void GLDrawCall::DrawElements(int count, int type, ::g::Uno::Graphics::IndexBuffer* buf)
{
    Begin();
    ::g::OpenGL::GL::BindBuffer(34963, uPtr(buf)->GLBufferHandle());
    ::g::OpenGL::GL::DrawElements(_primitiveType, count, type, BaseVertex());
    ::g::OpenGL::GL::BindBuffer(34963, ::g::OpenGL::GLBufferHandle::Zero_);
    End();
}

// private void End() [instance] :499
void GLDrawCall::End()
{
    int ret8;

    for (int i = 0; i < uPtr(GLDrawCall::_boundAttributes_)->Count(); i++)
        ::g::OpenGL::GL::DisableVertexAttribArray((::g::Uno::Collections::List__get_Item_fn(uPtr(GLDrawCall::_boundAttributes_), uCRef<int>(i), &ret8), ret8));

    for (int i1 = 0; i1 < GLDrawCall::_currentTextureUnit_; i1++)
    {
        ::g::OpenGL::GL::ActiveTexture(33984 + i1);
        ::g::OpenGL::GL::BindTexture(3553, ::g::OpenGL::GLTextureHandle::Zero_);
    }

    if (LineWidth() != 1.0f)
        ::g::OpenGL::GL::LineWidth(1.0f);

    ::g::OpenGL::GL::DepthMask(true);
    ::g::OpenGL::GL::ColorMask(true, true, true, true);
    uPtr(GLDrawCall::_boundAttributes_)->Clear();
    GLDrawCall::_currentTextureUnit_ = 0;
}

// public generated float get_LineWidth() [instance] :149
float GLDrawCall::LineWidth()
{
    return _LineWidth;
}

// public generated void set_LineWidth(float value) [instance] :150
void GLDrawCall::LineWidth(float value)
{
    _LineWidth = value;
}

// public Uno.Graphics.PolygonWinding get_PolygonWinding() [instance] :101
int GLDrawCall::PolygonWinding()
{
    return ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop::ToUnoGraphicsPolygonWinding(_frontFace);
}

// public void set_PolygonWinding(Uno.Graphics.PolygonWinding value) [instance] :102
void GLDrawCall::PolygonWinding(int value)
{
    _frontFace = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop::ToGLFrontFaceDirection(value);
}

// public Uno.Graphics.PrimitiveType get_PrimitiveType() [instance] :107
int GLDrawCall::PrimitiveType()
{
    return ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop::ToUnoGraphicsPrimitiveType(_primitiveType);
}

// public void set_PrimitiveType(Uno.Graphics.PrimitiveType value) [instance] :108
void GLDrawCall::PrimitiveType(int value)
{
    _primitiveType = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop::ToGLPrimitiveType(value);
}

// public generated Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram get_Program() [instance] :35
::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram* GLDrawCall::Program()
{
    return _Program;
}

// private generated void set_Program(Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram value) [instance] :36
void GLDrawCall::Program(::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram* value)
{
    _Program = value;
}

// public void Sampler(int index, OpenGL.GLTextureTarget target, OpenGL.GLTextureHandle handle, bool isMipmap, bool isPow2) [instance] :238
void GLDrawCall::Sampler(int index, int target, uint32_t handle, bool isMipmap, bool isPow2)
{
    int location = uPtr(_compiledProgram)->GetLocation(index);
    ::g::OpenGL::GL::ActiveTexture(33984 + GLDrawCall::_currentTextureUnit_);
    ::g::OpenGL::GL::BindTexture(target, handle);
    ::g::OpenGL::GL::TexParameter(target, 10240, 9729);

    if (isMipmap)
        ::g::OpenGL::GL::TexParameter(target, 10241, 9987);
    else
        ::g::OpenGL::GL::TexParameter(target, 10241, 9729);

    if ((target != 36197) && (isPow2 || ::g::Uno::Graphics::Texture2D::HaveNonPow2Support()))
    {
        ::g::OpenGL::GL::TexParameter(target, 10242, 10497);
        ::g::OpenGL::GL::TexParameter(target, 10243, 10497);
    }
    else
    {
        ::g::OpenGL::GL::TexParameter(target, 10242, 33071);
        ::g::OpenGL::GL::TexParameter(target, 10243, 33071);
    }

    ::g::OpenGL::GL::Uniform12(location, GLDrawCall::_currentTextureUnit_++);
}

// public void Sampler(int index, OpenGL.GLTextureTarget target, OpenGL.GLTextureHandle handle, Uno.Graphics.SamplerState state, bool isMipmap, bool isPow2) [instance] :265
void GLDrawCall::Sampler1(int index, int target, uint32_t handle, ::g::Uno::Graphics::SamplerState state, bool isMipmap, bool isPow2)
{
    int location = uPtr(_compiledProgram)->GetLocation(index);
    ::g::OpenGL::GL::ActiveTexture(33984 + GLDrawCall::_currentTextureUnit_);
    ::g::OpenGL::GL::BindTexture(target, handle);
    ::g::OpenGL::GL::TexParameter(target, 10240, state.MagFilter);

    if (isMipmap)
        ::g::OpenGL::GL::TexParameter(target, 10241, state.MinFilter);
    else
        ::g::OpenGL::GL::TexParameter(target, 10241, state.MinFilterNoMipmap());

    if ((target != 36197) && (isPow2 || ::g::Uno::Graphics::Texture2D::HaveNonPow2Support()))
    {
        ::g::OpenGL::GL::TexParameter(target, 10242, state.AddressU);
        ::g::OpenGL::GL::TexParameter(target, 10243, state.AddressV);
    }
    else
    {
        ::g::OpenGL::GL::TexParameter(target, 10242, 33071);
        ::g::OpenGL::GL::TexParameter(target, 10243, 33071);
    }

    ::g::OpenGL::GL::Uniform12(location, GLDrawCall::_currentTextureUnit_++);
}

// public void Sampler(int index, texture2D value) [instance] :299
void GLDrawCall::Sampler2(int index, ::g::Uno::Graphics::Texture2D* value)
{
    if (value != NULL)
        Sampler(index, 3553, uPtr(value)->GLTextureHandle(), uPtr(value)->IsMipmap(), uPtr(value)->IsPow2());
    else
        DisableSampler(index, 3553);
}

// public void Sampler(int index, texture2D value, Uno.Graphics.SamplerState state) [instance] :307
void GLDrawCall::Sampler3(int index, ::g::Uno::Graphics::Texture2D* value, ::g::Uno::Graphics::SamplerState state)
{
    if (value != NULL)
        Sampler1(index, 3553, uPtr(value)->GLTextureHandle(), state, uPtr(value)->IsMipmap(), uPtr(value)->IsPow2());
    else
        DisableSampler(index, 3553);
}

// public void Sampler(int index, Uno.Graphics.VideoTexture value, Uno.Graphics.SamplerState state) [instance] :339
void GLDrawCall::Sampler7(int index, ::g::Uno::Graphics::VideoTexture* value, ::g::Uno::Graphics::SamplerState state)
{
    if (value != NULL)
        Sampler1(index, 3553, uPtr(value)->GLTextureHandle(), state, uPtr(value)->IsMipmap, uPtr(value)->IsPow2);
    else
        DisableSampler(index, 3553);
}

// public void Uniform(int index, float value) [instance] :387
void GLDrawCall::Uniform(int index, float value)
{
    ::g::OpenGL::GL::Uniform1(uPtr(_compiledProgram)->GetLocation(index), value);
}

// public void Uniform(int index, float[] value) [instance] :422
void GLDrawCall::Uniform1(int index, uArray* value)
{
    ::g::OpenGL::GL::Uniform11(uPtr(_compiledProgram)->GetLocation(index), value);
}

// public void Uniform(int index, float2 value) [instance] :392
void GLDrawCall::Uniform2(int index, ::g::Uno::Float2 value)
{
    ::g::OpenGL::GL::Uniform2(uPtr(_compiledProgram)->GetLocation(index), value);
}

// public void Uniform(int index, float2[] value) [instance] :427
void GLDrawCall::Uniform3(int index, uArray* value)
{
    ::g::OpenGL::GL::Uniform21(uPtr(_compiledProgram)->GetLocation(index), value);
}

// public void Uniform(int index, float2x2 value) [instance] :407
void GLDrawCall::Uniform4(int index, ::g::Uno::Float2x2 value)
{
    ::g::OpenGL::GL::UniformMatrix2(uPtr(_compiledProgram)->GetLocation(index), false, value);
}

// public void Uniform(int index, float3 value) [instance] :397
void GLDrawCall::Uniform6(int index, ::g::Uno::Float3 value)
{
    ::g::OpenGL::GL::Uniform3(uPtr(_compiledProgram)->GetLocation(index), value);
}

// public void Uniform(int index, float4 value) [instance] :402
void GLDrawCall::Uniform10(int index, ::g::Uno::Float4 value)
{
    ::g::OpenGL::GL::Uniform4(uPtr(_compiledProgram)->GetLocation(index), value);
}

// public void Uniform(int index, float4[] value) [instance] :437
void GLDrawCall::Uniform11(int index, uArray* value)
{
    ::g::OpenGL::GL::Uniform41(uPtr(_compiledProgram)->GetLocation(index), value);
}

// public void Uniform(int index, float4x4 value) [instance] :417
void GLDrawCall::Uniform12(int index, ::g::Uno::Float4x4 value)
{
    ::g::OpenGL::GL::UniformMatrix4(uPtr(_compiledProgram)->GetLocation(index), false, value);
}

// public void Use() [instance] :194
void GLDrawCall::Use()
{
    if (Program() == NULL)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[2/*"Draw statem...*/]));

    if (_compiledProgramDirty || (_compiledProgram == NULL))
    {
        _compiledProgram = uPtr(Program())->GetCompiledProgram(_constValues);
        _compiledProgramDirty = false;
    }

    ::g::OpenGL::GL::UseProgram(uPtr(_compiledProgram)->GLProgramHandle());
}

// public generated bool get_WriteAlpha() [instance] :131
bool GLDrawCall::WriteAlpha()
{
    return _WriteAlpha;
}

// public generated void set_WriteAlpha(bool value) [instance] :132
void GLDrawCall::WriteAlpha(bool value)
{
    _WriteAlpha = value;
}

// public generated bool get_WriteBlue() [instance] :125
bool GLDrawCall::WriteBlue()
{
    return _WriteBlue;
}

// public generated void set_WriteBlue(bool value) [instance] :126
void GLDrawCall::WriteBlue(bool value)
{
    _WriteBlue = value;
}

// public generated bool get_WriteDepth() [instance] :137
bool GLDrawCall::WriteDepth()
{
    return _WriteDepth;
}

// public generated void set_WriteDepth(bool value) [instance] :138
void GLDrawCall::WriteDepth(bool value)
{
    _WriteDepth = value;
}

// public generated bool get_WriteGreen() [instance] :119
bool GLDrawCall::WriteGreen()
{
    return _WriteGreen;
}

// public generated void set_WriteGreen(bool value) [instance] :120
void GLDrawCall::WriteGreen(bool value)
{
    _WriteGreen = value;
}

// public generated bool get_WriteRed() [instance] :113
bool GLDrawCall::WriteRed()
{
    return _WriteRed;
}

// public generated void set_WriteRed(bool value) [instance] :114
void GLDrawCall::WriteRed(bool value)
{
    _WriteRed = value;
}

// public GLDrawCall New(Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram program) [static] :153
GLDrawCall GLDrawCall__New1(::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram* program)
{
    GLDrawCall obj7;
    obj7.ctor_(program);
    return obj7;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Runtime/Implementation/ShaderBackends/OpenGL/GLException.uno
// -------------------------------------------------------------------------------------------------------------------

// public sealed extern class GLException :6
// {
static void GLException_build(uType* type)
{
    type->SetFields(4);
}

::g::Uno::Exception_type* GLException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(GLException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLException", options);
    type->fp_build_ = GLException_build;
    return type;
}

// public GLException(string message) :8
void GLException__ctor_3_fn(GLException* __this, uString* message)
{
    __this->ctor_3(message);
}

// public GLException New(string message) :8
void GLException__New4_fn(uString* message, GLException** __retval)
{
    *__retval = GLException::New4(message);
}

// public GLException(string message) [instance] :8
void GLException::ctor_3(uString* message)
{
    ctor_1(message);
}

// public GLException New(string message) [static] :8
GLException* GLException::New4(uString* message)
{
    GLException* obj1 = (GLException*)uNew(GLException_typeof());
    obj1->ctor_3(message);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Runtime/Implementation/ShaderBackends/OpenGL/GLHelpers.uno
// -----------------------------------------------------------------------------------------------------------------

// public static extern class GLHelpers :9
// {
static void GLHelpers_build(uType* type)
{
    ::STRINGS[3] = uString::Const("GL error (");
    ::STRINGS[4] = uString::Const(")");
    ::STRINGS[5] = uString::Const("Incomplete GL framebuffer (");
    ::STRINGS[6] = uString::Const("Error compiling shader (");
    ::STRINGS[7] = uString::Const("):\n"
        "\n"
        "");
    ::STRINGS[8] = uString::Const("\n"
        "\n"
        "Source:\n"
        "\n"
        "");
    ::STRINGS[9] = uString::Const("Error linking shader program:\n"
        "\n"
        "");
    ::STRINGS[10] = uString::Const("Unsupported texture format");
    ::TYPES[3] = ::g::Uno::Int_typeof();
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof());
}

uClassType* GLHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLHelpers", options);
    type->fp_build_ = GLHelpers_build;
    return type;
}

// public static void CheckError() :11
void GLHelpers__CheckError_fn()
{
    GLHelpers::CheckError();
}

// public static void CheckFramebufferStatus() :19
void GLHelpers__CheckFramebufferStatus_fn()
{
    GLHelpers::CheckFramebufferStatus();
}

// public static OpenGL.GLShaderHandle CompileShader(OpenGL.GLShaderType type, string source) :142
void GLHelpers__CompileShader_fn(int* type, uString* source, uint32_t* __retval)
{
    *__retval = GLHelpers::CompileShader(*type, source);
}

// public static OpenGL.GLRenderbufferHandle CreateDepthBuffer(int2 size) :128
void GLHelpers__CreateDepthBuffer_fn(::g::Uno::Int2* size, uint32_t* __retval)
{
    *__retval = GLHelpers::CreateDepthBuffer(*size);
}

// public static Uno.Graphics.RenderTarget CreateRenderTarget(OpenGL.GLTextureTarget colorTarget, OpenGL.GLTextureHandle colorBuffer, int mip, int2 size, bool depth) :93
void GLHelpers__CreateRenderTarget_fn(int* colorTarget, uint32_t* colorBuffer, int* mip, ::g::Uno::Int2* size, bool* depth, ::g::Uno::Graphics::RenderTarget** __retval)
{
    *__retval = GLHelpers::CreateRenderTarget(*colorTarget, *colorBuffer, *mip, *size, *depth);
}

// public static Uno.Graphics.RenderTarget CreateRenderTarget(OpenGL.GLTextureTarget colorTarget, OpenGL.GLTextureHandle colorBuffer, int mip, int2 size, OpenGL.GLRenderbufferHandle depthBuffer, bool ownsDepthBuffer) :98
void GLHelpers__CreateRenderTarget1_fn(int* colorTarget, uint32_t* colorBuffer, int* mip, ::g::Uno::Int2* size, uint32_t* depthBuffer, bool* ownsDepthBuffer, ::g::Uno::Graphics::RenderTarget** __retval)
{
    *__retval = GLHelpers::CreateRenderTarget1(*colorTarget, *colorBuffer, *mip, *size, *depthBuffer, *ownsDepthBuffer);
}

// public static OpenGL.GLProgramHandle LinkProgram(OpenGL.GLShaderHandle vertexShader, OpenGL.GLShaderHandle fragmentShader) :160
void GLHelpers__LinkProgram_fn(uint32_t* vertexShader, uint32_t* fragmentShader, uint32_t* __retval)
{
    *__retval = GLHelpers::LinkProgram(*vertexShader, *fragmentShader);
}

// public static void TexImage2DFromBuffer(OpenGL.GLTextureTarget target, int w, int h, int mip, Uno.Graphics.Format format, Uno.Buffer data) :27
void GLHelpers__TexImage2DFromBuffer_fn(int* target, int* w, int* h, int* mip, int* format, ::g::Uno::Buffer* data)
{
    GLHelpers::TexImage2DFromBuffer(*target, *w, *h, *mip, *format, data);
}

// public static void CheckError() [static] :11
void GLHelpers::CheckError()
{
    int err = ::g::OpenGL::GL::GetError();

    if (err != 0)
        ::g::Uno::Diagnostics::Debug::Log4(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[3/*"GL error ("*/], ::g::Uno::Int::ToString(err, ::TYPES[3/*int*/])), ::STRINGS[4/*")"*/]), 3);
}

// public static void CheckFramebufferStatus() [static] :19
void GLHelpers::CheckFramebufferStatus()
{
    int status = ::g::OpenGL::GL::CheckFramebufferStatus(36160);

    if (status != 36053)
        ::g::Uno::Diagnostics::Debug::Log4(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[5/*"Incomplete ...*/], uBox<int>(::g::OpenGL::GLFramebufferStatus_typeof(), status)), ::STRINGS[4/*")"*/]), 3);
}

// public static OpenGL.GLShaderHandle CompileShader(OpenGL.GLShaderType type, string source) [static] :142
uint32_t GLHelpers::CompileShader(int type, uString* source)
{
    uint32_t handle = ::g::OpenGL::GL::CreateShader(type);
    GLHelpers::CheckError();
    ::g::OpenGL::GL::ShaderSource(handle, source);
    ::g::OpenGL::GL::CompileShader(handle);

    if (::g::OpenGL::GL::GetShaderParameter(handle, 35713) != 1)
    {
        uString* log = ::g::OpenGL::GL::GetShaderInfoLog(handle);
        U_THROW(::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException::New4(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[6/*"Error compi...*/], uBox<int>(::g::OpenGL::GLShaderType_typeof(), type)), ::STRINGS[7/*"):\n\n"*/]), log), ::STRINGS[8/*"\n\nSource:...*/]), source)));
    }

    GLHelpers::CheckError();
    return handle;
}

// public static OpenGL.GLRenderbufferHandle CreateDepthBuffer(int2 size) [static] :128
uint32_t GLHelpers::CreateDepthBuffer(::g::Uno::Int2 size)
{
    uint32_t prevHandle = ::g::OpenGL::GL::GetRenderbufferBinding();
    uint32_t handle = ::g::OpenGL::GL::CreateRenderbuffer();
    ::g::OpenGL::GL::BindRenderbuffer(36161, handle);
    ::g::OpenGL::GL::RenderbufferStorage(36161, 33189, size.X, size.Y);
    ::g::OpenGL::GL::BindRenderbuffer(36161, prevHandle);
    return handle;
}

// public static Uno.Graphics.RenderTarget CreateRenderTarget(OpenGL.GLTextureTarget colorTarget, OpenGL.GLTextureHandle colorBuffer, int mip, int2 size, bool depth) [static] :93
::g::Uno::Graphics::RenderTarget* GLHelpers::CreateRenderTarget(int colorTarget, uint32_t colorBuffer, int mip, ::g::Uno::Int2 size, bool depth)
{
    return GLHelpers::CreateRenderTarget1(colorTarget, colorBuffer, mip, size, depth ? GLHelpers::CreateDepthBuffer(size) : ::g::OpenGL::GLRenderbufferHandle::Zero_, true);
}

// public static Uno.Graphics.RenderTarget CreateRenderTarget(OpenGL.GLTextureTarget colorTarget, OpenGL.GLTextureHandle colorBuffer, int mip, int2 size, OpenGL.GLRenderbufferHandle depthBuffer, bool ownsDepthBuffer) [static] :98
::g::Uno::Graphics::RenderTarget* GLHelpers::CreateRenderTarget1(int colorTarget, uint32_t colorBuffer, int mip, ::g::Uno::Int2 size, uint32_t depthBuffer, bool ownsDepthBuffer)
{
    ::g::Uno::Graphics::RenderTarget* result = ::g::Uno::Graphics::RenderTarget::New1();
    uint32_t prevHandle = ::g::OpenGL::GL::GetFramebufferBinding();
    uint32_t handle = ::g::OpenGL::GL::CreateFramebuffer();
    result->GLFramebufferHandle(handle);
    result->OwnsGLFramebufferHandle(true);
    result->Size(size);
    ::g::OpenGL::GL::BindFramebuffer(36160, handle);
    ::g::OpenGL::GL::FramebufferTexture2D(36160, 36064, colorTarget, colorBuffer, mip);

    if (::g::OpenGL::GLRenderbufferHandle::op_Inequality(depthBuffer, ::g::OpenGL::GLRenderbufferHandle::Zero_))
    {
        ::g::OpenGL::GL::FramebufferRenderbuffer(36160, 36096, 36161, depthBuffer);
        uPtr(result)->GLDepthBufferHandle(depthBuffer);
        result->OwnsGLDepthBufferHandle(ownsDepthBuffer);
        result->HasDepth(true);
    }

    GLHelpers::CheckFramebufferStatus();
    GLHelpers::CheckError();
    ::g::OpenGL::GL::BindFramebuffer(36160, prevHandle);
    return result;
}

// public static OpenGL.GLProgramHandle LinkProgram(OpenGL.GLShaderHandle vertexShader, OpenGL.GLShaderHandle fragmentShader) [static] :160
uint32_t GLHelpers::LinkProgram(uint32_t vertexShader, uint32_t fragmentShader)
{
    uint32_t handle = ::g::OpenGL::GL::CreateProgram();
    ::g::OpenGL::GL::AttachShader(handle, vertexShader);
    ::g::OpenGL::GL::AttachShader(handle, fragmentShader);
    ::g::OpenGL::GL::LinkProgram(handle);

    if (::g::OpenGL::GL::GetProgramParameter(handle, 35714) != 1)
    {
        uString* log = ::g::OpenGL::GL::GetProgramInfoLog(handle);
        U_THROW(::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException::New4(::g::Uno::String::op_Addition2(::STRINGS[9/*"Error linki...*/], log)));
    }

    ::g::OpenGL::GL::UseProgram(handle);
    GLHelpers::CheckError();
    return handle;
}

// public static void TexImage2DFromBuffer(OpenGL.GLTextureTarget target, int w, int h, int mip, Uno.Graphics.Format format, Uno.Buffer data) [static] :27
void GLHelpers::TexImage2DFromBuffer(int target, int w, int h, int mip, int format, ::g::Uno::Buffer* data)
{
    switch (format)
    {
        case 1:
        {
            ::g::OpenGL::GL::TexImage2D(target, mip, 6409, w, h, 0, 6409, 5121, data);
            break;
        }
        case 2:
        {
            ::g::OpenGL::GL::TexImage2D(target, mip, 6410, w, h, 0, 6410, 5121, data);
            break;
        }
        case 3:
        {
            ::g::OpenGL::GL::TexImage2D(target, mip, 6408, w, h, 0, 6408, 5121, data);
            break;
        }
        case 4:
        {
            ::g::OpenGL::GL::TexImage2D(target, mip, 6408, w, h, 0, 6408, 32819, data);
            break;
        }
        case 5:
        {
            ::g::OpenGL::GL::TexImage2D(target, mip, 6408, w, h, 0, 6408, 32820, data);
            break;
        }
        case 6:
        {
            ::g::OpenGL::GL::TexImage2D(target, mip, 6407, w, h, 0, 6407, 33635, data);
            break;
        }
        default:
            U_THROW(::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException::New4(::STRINGS[10/*"Unsupported...*/]));
    }
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Runtime/Implementation/ShaderBackends/OpenGL/GLInterop.uno
// -----------------------------------------------------------------------------------------------------------------

// public static extern class GLInterop :7
// {
static void GLInterop_build(uType* type)
{
    ::STRINGS[11] = uString::Const("Unsupported blend equation");
    ::STRINGS[12] = uString::Const("Unsupported blend operand");
    ::STRINGS[13] = uString::Const("Unsupported buffer usage");
    ::STRINGS[14] = uString::Const("Unsupported polygon face");
    ::STRINGS[15] = uString::Const("Unsupported compare func");
    ::STRINGS[16] = uString::Const("Unsupported polygon winding");
    ::STRINGS[17] = uString::Const("Unsupported index type");
    ::STRINGS[18] = uString::Const("Unsupported primitive type");
    ::STRINGS[19] = uString::Const("Unsupported vertex attribute type");
}

uClassType* GLInterop_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLInterop", options);
    type->fp_build_ = GLInterop_build;
    return type;
}

// public static OpenGL.GLBlendEquation ToGLBlendEquation(Uno.Graphics.BlendEquation x) :273
void GLInterop__ToGLBlendEquation_fn(int* x, int* __retval)
{
    *__retval = GLInterop::ToGLBlendEquation(*x);
}

// public static OpenGL.GLBlendingFactor ToGLBlendingFactor(Uno.Graphics.BlendOperand x) :195
void GLInterop__ToGLBlendingFactor_fn(int* x, int* __retval)
{
    *__retval = GLInterop::ToGLBlendingFactor(*x);
}

// public static OpenGL.GLBufferUsage ToGLBufferUsage(Uno.Graphics.BufferUsage x) :309
void GLInterop__ToGLBufferUsage_fn(int* x, int* __retval)
{
    *__retval = GLInterop::ToGLBufferUsage(*x);
}

// public static OpenGL.GLCullFaceMode ToGLCullFaceMode(Uno.Graphics.PolygonFace x) :39
void GLInterop__ToGLCullFaceMode_fn(int* x, int* __retval)
{
    *__retval = GLInterop::ToGLCullFaceMode(*x);
}

// public static OpenGL.GLDepthFunction ToGLDepthFunction(Uno.Graphics.CompareFunc x) :81
void GLInterop__ToGLDepthFunction_fn(int* x, int* __retval)
{
    *__retval = GLInterop::ToGLDepthFunction(*x);
}

// public static OpenGL.GLFrontFaceDirection ToGLFrontFaceDirection(Uno.Graphics.PolygonWinding x) :9
void GLInterop__ToGLFrontFaceDirection_fn(int* x, int* __retval)
{
    *__retval = GLInterop::ToGLFrontFaceDirection(*x);
}

// public static OpenGL.GLIndexType ToGLIndexType(Uno.Graphics.IndexType x) :327
void GLInterop__ToGLIndexType_fn(int* x, int* __retval)
{
    *__retval = GLInterop::ToGLIndexType(*x);
}

// public static OpenGL.GLPrimitiveType ToGLPrimitiveType(Uno.Graphics.PrimitiveType x) :147
void GLInterop__ToGLPrimitiveType_fn(int* x, int* __retval)
{
    *__retval = GLInterop::ToGLPrimitiveType(*x);
}

// public static void ToGLVertexAttributeType(Uno.Graphics.VertexAttributeType x, int& componentCount, OpenGL.GLDataType& componentType, bool& normalized) :342
void GLInterop__ToGLVertexAttributeType_fn(int* x, int* componentCount, int* componentType, bool* normalized)
{
    GLInterop::ToGLVertexAttributeType(*x, componentCount, componentType, normalized);
}

// public static Uno.Graphics.BlendEquation ToUnoGraphicsBlendEquation(OpenGL.GLBlendEquation x) :291
void GLInterop__ToUnoGraphicsBlendEquation_fn(int* x, int* __retval)
{
    *__retval = GLInterop::ToUnoGraphicsBlendEquation(*x);
}

// public static Uno.Graphics.BlendOperand ToUnoGraphicsBlendOperand(OpenGL.GLBlendingFactor x) :234
void GLInterop__ToUnoGraphicsBlendOperand_fn(int* x, int* __retval)
{
    *__retval = GLInterop::ToUnoGraphicsBlendOperand(*x);
}

// public static Uno.Graphics.CompareFunc ToUnoGraphicsCompareFunc(OpenGL.GLDepthFunction x) :114
void GLInterop__ToUnoGraphicsCompareFunc_fn(int* x, int* __retval)
{
    *__retval = GLInterop::ToUnoGraphicsCompareFunc(*x);
}

// public static Uno.Graphics.PolygonFace ToUnoGraphicsPolygonFace(OpenGL.GLCullFaceMode x) :60
void GLInterop__ToUnoGraphicsPolygonFace_fn(int* x, int* __retval)
{
    *__retval = GLInterop::ToUnoGraphicsPolygonFace(*x);
}

// public static Uno.Graphics.PolygonWinding ToUnoGraphicsPolygonWinding(OpenGL.GLFrontFaceDirection x) :24
void GLInterop__ToUnoGraphicsPolygonWinding_fn(int* x, int* __retval)
{
    *__retval = GLInterop::ToUnoGraphicsPolygonWinding(*x);
}

// public static Uno.Graphics.PrimitiveType ToUnoGraphicsPrimitiveType(OpenGL.GLPrimitiveType x) :171
void GLInterop__ToUnoGraphicsPrimitiveType_fn(int* x, int* __retval)
{
    *__retval = GLInterop::ToUnoGraphicsPrimitiveType(*x);
}

// public static OpenGL.GLBlendEquation ToGLBlendEquation(Uno.Graphics.BlendEquation x) [static] :273
int GLInterop::ToGLBlendEquation(int x)
{
    switch (x)
    {
        case 0:
            return 32774;
        case 1:
            return 32778;
        case 2:
            return 32779;
        default:
            U_THROW(::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException::New4(::STRINGS[11/*"Unsupported...*/]));
    }
}

// public static OpenGL.GLBlendingFactor ToGLBlendingFactor(Uno.Graphics.BlendOperand x) [static] :195
int GLInterop::ToGLBlendingFactor(int x)
{
    switch (x)
    {
        case 0:
            return 0;
        case 1:
            return 1;
        case 2:
            return 770;
        case 3:
            return 771;
        case 4:
            return 768;
        case 5:
            return 769;
        case 6:
            return 772;
        case 7:
            return 773;
        case 8:
            return 774;
        case 9:
            return 775;
        default:
            U_THROW(::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException::New4(::STRINGS[12/*"Unsupported...*/]));
    }
}

// public static OpenGL.GLBufferUsage ToGLBufferUsage(Uno.Graphics.BufferUsage x) [static] :309
int GLInterop::ToGLBufferUsage(int x)
{
    switch (x)
    {
        case 0:
            return 35044;
        case 1:
            return 35048;
        case 2:
            return 35040;
        default:
            U_THROW(::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException::New4(::STRINGS[13/*"Unsupported...*/]));
    }
}

// public static OpenGL.GLCullFaceMode ToGLCullFaceMode(Uno.Graphics.PolygonFace x) [static] :39
int GLInterop::ToGLCullFaceMode(int x)
{
    switch (x)
    {
        case 0:
            return 0;
        case 1:
            return 1028;
        case 2:
            return 1029;
        case 3:
            return 1032;
        default:
            U_THROW(::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException::New4(::STRINGS[14/*"Unsupported...*/]));
    }
}

// public static OpenGL.GLDepthFunction ToGLDepthFunction(Uno.Graphics.CompareFunc x) [static] :81
int GLInterop::ToGLDepthFunction(int x)
{
    switch (x)
    {
        case 0:
            return 519;
        case 1:
            return 513;
        case 2:
            return 515;
        case 3:
            return 514;
        case 4:
            return 517;
        case 5:
            return 518;
        case 6:
            return 516;
        case 7:
            return 512;
        default:
            U_THROW(::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException::New4(::STRINGS[15/*"Unsupported...*/]));
    }
}

// public static OpenGL.GLFrontFaceDirection ToGLFrontFaceDirection(Uno.Graphics.PolygonWinding x) [static] :9
int GLInterop::ToGLFrontFaceDirection(int x)
{
    switch (x)
    {
        case 0:
            return 2304;
        case 1:
            return 2305;
        default:
            U_THROW(::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException::New4(::STRINGS[16/*"Unsupported...*/]));
    }
}

// public static OpenGL.GLIndexType ToGLIndexType(Uno.Graphics.IndexType x) [static] :327
int GLInterop::ToGLIndexType(int x)
{
    switch (x)
    {
        case 1:
            return 5121;
        case 2:
            return 5123;
        default:
            U_THROW(::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException::New4(::STRINGS[17/*"Unsupported...*/]));
    }
}

// public static OpenGL.GLPrimitiveType ToGLPrimitiveType(Uno.Graphics.PrimitiveType x) [static] :147
int GLInterop::ToGLPrimitiveType(int x)
{
    switch (x)
    {
        case 1:
            return 4;
        case 2:
            return 1;
        case 3:
            return 0;
        case 4:
            return 5;
        case 5:
            return 3;
        default:
            U_THROW(::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException::New4(::STRINGS[18/*"Unsupported...*/]));
    }
}

// public static void ToGLVertexAttributeType(Uno.Graphics.VertexAttributeType x, int& componentCount, OpenGL.GLDataType& componentType, bool& normalized) [static] :342
void GLInterop::ToGLVertexAttributeType(int x, int* componentCount, int* componentType, bool* normalized)
{
    switch (x)
    {
        case 1:
        {
            *componentType = 5126;
            *componentCount = 1;
            *normalized = false;
            break;
        }
        case 2:
        {
            *componentType = 5126;
            *componentCount = 2;
            *normalized = false;
            break;
        }
        case 3:
        {
            *componentType = 5126;
            *componentCount = 3;
            *normalized = false;
            break;
        }
        case 4:
        {
            *componentType = 5126;
            *componentCount = 4;
            *normalized = false;
            break;
        }
        case 5:
        {
            *componentType = 5122;
            *componentCount = 1;
            *normalized = false;
            break;
        }
        case 6:
        {
            *componentType = 5122;
            *componentCount = 1;
            *normalized = true;
            break;
        }
        case 7:
        {
            *componentType = 5122;
            *componentCount = 2;
            *normalized = false;
            break;
        }
        case 8:
        {
            *componentType = 5122;
            *componentCount = 2;
            *normalized = true;
            break;
        }
        case 9:
        {
            *componentType = 5122;
            *componentCount = 4;
            *normalized = false;
            break;
        }
        case 10:
        {
            *componentType = 5122;
            *componentCount = 4;
            *normalized = true;
            break;
        }
        case 11:
        {
            *componentType = 5123;
            *componentCount = 1;
            *normalized = false;
            break;
        }
        case 12:
        {
            *componentType = 5123;
            *componentCount = 1;
            *normalized = true;
            break;
        }
        case 13:
        {
            *componentType = 5123;
            *componentCount = 2;
            *normalized = false;
            break;
        }
        case 14:
        {
            *componentType = 5123;
            *componentCount = 2;
            *normalized = true;
            break;
        }
        case 15:
        {
            *componentType = 5123;
            *componentCount = 4;
            *normalized = false;
            break;
        }
        case 16:
        {
            *componentType = 5123;
            *componentCount = 4;
            *normalized = true;
            break;
        }
        case 17:
        {
            *componentType = 5120;
            *componentCount = 4;
            *normalized = false;
            break;
        }
        case 18:
        {
            *componentType = 5120;
            *componentCount = 4;
            *normalized = true;
            break;
        }
        case 19:
        {
            *componentType = 5121;
            *componentCount = 4;
            *normalized = false;
            break;
        }
        case 20:
        {
            *componentType = 5121;
            *componentCount = 4;
            *normalized = true;
            break;
        }
        default:
            U_THROW(::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException::New4(::STRINGS[19/*"Unsupported...*/]));
    }
}

// public static Uno.Graphics.BlendEquation ToUnoGraphicsBlendEquation(OpenGL.GLBlendEquation x) [static] :291
int GLInterop::ToUnoGraphicsBlendEquation(int x)
{
    switch (x)
    {
        case 32774:
            return 0;
        case 32778:
            return 1;
        case 32779:
            return 2;
        default:
            U_THROW(::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException::New4(::STRINGS[11/*"Unsupported...*/]));
    }
}

// public static Uno.Graphics.BlendOperand ToUnoGraphicsBlendOperand(OpenGL.GLBlendingFactor x) [static] :234
int GLInterop::ToUnoGraphicsBlendOperand(int x)
{
    switch (x)
    {
        case 0:
            return 0;
        case 1:
            return 1;
        case 770:
            return 2;
        case 771:
            return 3;
        case 768:
            return 4;
        case 769:
            return 5;
        case 772:
            return 6;
        case 773:
            return 7;
        case 774:
            return 8;
        case 775:
            return 9;
        default:
            U_THROW(::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException::New4(::STRINGS[12/*"Unsupported...*/]));
    }
}

// public static Uno.Graphics.CompareFunc ToUnoGraphicsCompareFunc(OpenGL.GLDepthFunction x) [static] :114
int GLInterop::ToUnoGraphicsCompareFunc(int x)
{
    switch (x)
    {
        case 519:
            return 0;
        case 513:
            return 1;
        case 515:
            return 2;
        case 514:
            return 3;
        case 517:
            return 4;
        case 518:
            return 5;
        case 516:
            return 6;
        case 512:
            return 7;
        default:
            U_THROW(::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException::New4(::STRINGS[15/*"Unsupported...*/]));
    }
}

// public static Uno.Graphics.PolygonFace ToUnoGraphicsPolygonFace(OpenGL.GLCullFaceMode x) [static] :60
int GLInterop::ToUnoGraphicsPolygonFace(int x)
{
    switch (x)
    {
        case 0:
            return 0;
        case 1028:
            return 1;
        case 1029:
            return 2;
        case 1032:
            return 3;
        default:
            U_THROW(::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException::New4(::STRINGS[14/*"Unsupported...*/]));
    }
}

// public static Uno.Graphics.PolygonWinding ToUnoGraphicsPolygonWinding(OpenGL.GLFrontFaceDirection x) [static] :24
int GLInterop::ToUnoGraphicsPolygonWinding(int x)
{
    switch (x)
    {
        case 2304:
            return 0;
        case 2305:
            return 1;
        default:
            U_THROW(::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException::New4(::STRINGS[16/*"Unsupported...*/]));
    }
}

// public static Uno.Graphics.PrimitiveType ToUnoGraphicsPrimitiveType(OpenGL.GLPrimitiveType x) [static] :171
int GLInterop::ToUnoGraphicsPrimitiveType(int x)
{
    switch (x)
    {
        case 4:
            return 1;
        case 1:
            return 2;
        case 0:
            return 3;
        case 5:
            return 4;
        case 3:
            return 5;
        default:
            U_THROW(::g::Uno::Exception::New2(::STRINGS[18/*"Unsupported...*/]));
    }
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Runtime/Implementation/ShaderBackends/OpenGL/GLProgram.uno
// -----------------------------------------------------------------------------------------------------------------

// public sealed extern class GLProgram :7
// {
static void GLProgram_build(uType* type)
{
    ::STRINGS[20] = uString::Const(":");
    ::STRINGS[21] = uString::Const("#ifdef GL_ES\n"
        "precision highp float;\n"
        "#endif\n"
        "");
    ::STRINGS[22] = uString::Const("#ifdef GL_ES\n"
        "#extension GL_OES_standard_derivatives : enable\n"
        "");
    ::STRINGS[23] = uString::Const("# ifdef GL_FRAGMENT_PRECISION_HIGH\n"
        "precision highp float;\n"
        "# else\n"
        "precision mediump float;\n"
        "# endif\n"
        "#endif\n"
        "");
    ::STRINGS[24] = uString::Const("");
    ::STRINGS[25] = uString::Const("#define ");
    ::STRINGS[26] = uString::Const(" ");
    ::STRINGS[27] = uString::Const("\n"
        "");
    ::TYPES[4] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(GLProgram, _attribCount), 0,
        ::TYPES[4/*Uno.Collections.Dictionary<string, Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLCompiledProgram>*/], offsetof(GLProgram, _cachedPrograms), 0,
        ::g::Uno::String_typeof()->Array(), offsetof(GLProgram, _constAttribAndUniformNames), 0,
        ::g::Uno::Int_typeof(), offsetof(GLProgram, _constCount), 0,
        ::g::Uno::String_typeof(), offsetof(GLProgram, _fsSource), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram_typeof(), offsetof(GLProgram, _singleProgram), 0,
        ::g::Uno::String_typeof(), offsetof(GLProgram, _vsSource), 0);
}

uType* GLProgram_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(GLProgram);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram", options);
    type->fp_build_ = GLProgram_build;
    return type;
}

// internal GLProgram(string vsSource, string fsSource, int constCount, int attribCount, string[] constAttribAndUniformNames) :24
void GLProgram__ctor__fn(GLProgram* __this, uString* vsSource, uString* fsSource, int* constCount, int* attribCount, uArray* constAttribAndUniformNames)
{
    __this->ctor_(vsSource, fsSource, *constCount, *attribCount, constAttribAndUniformNames);
}

// public int get_ConstantCount() :21
void GLProgram__get_ConstantCount_fn(GLProgram* __this, int* __retval)
{
    *__retval = __this->ConstantCount();
}

// public static Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram Create(string vsSource, string fsSource, int constCount, int attribCount, string[] constAttribAndUniformNames) :33
void GLProgram__Create_fn(uString* vsSource, uString* fsSource, int* constCount, int* attribCount, uArray* constAttribAndUniformNames, GLProgram** __retval)
{
    *__retval = GLProgram::Create(vsSource, fsSource, *constCount, *attribCount, constAttribAndUniformNames);
}

// public Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLCompiledProgram GetCompiledProgram(string[] constStrings) :61
void GLProgram__GetCompiledProgram_fn(GLProgram* __this, uArray* constStrings, ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram** __retval)
{
    *__retval = __this->GetCompiledProgram(constStrings);
}

// private Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLCompiledProgram GetCompiledProgramInternal(string[] constStrings) :38
void GLProgram__GetCompiledProgramInternal_fn(GLProgram* __this, uArray* constStrings, ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram** __retval)
{
    *__retval = __this->GetCompiledProgramInternal(constStrings);
}

// internal GLProgram New(string vsSource, string fsSource, int constCount, int attribCount, string[] constAttribAndUniformNames) :24
void GLProgram__New1_fn(uString* vsSource, uString* fsSource, int* constCount, int* attribCount, uArray* constAttribAndUniformNames, GLProgram** __retval)
{
    *__retval = GLProgram::New1(vsSource, fsSource, *constCount, *attribCount, constAttribAndUniformNames);
}

// internal GLProgram(string vsSource, string fsSource, int constCount, int attribCount, string[] constAttribAndUniformNames) [instance] :24
void GLProgram::ctor_(uString* vsSource, uString* fsSource, int constCount, int attribCount, uArray* constAttribAndUniformNames)
{
    _vsSource = vsSource;
    _fsSource = fsSource;
    _constCount = constCount;
    _attribCount = attribCount;
    _constAttribAndUniformNames = constAttribAndUniformNames;
}

// public int get_ConstantCount() [instance] :21
int GLProgram::ConstantCount()
{
    return _constCount;
}

// public Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLCompiledProgram GetCompiledProgram(string[] constStrings) [instance] :61
::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram* GLProgram::GetCompiledProgram(uArray* constStrings)
{
    bool ret2;

    if (uPtr(constStrings)->Length() == 0)
    {
        if (_singleProgram == NULL)
            _singleProgram = GetCompiledProgramInternal(constStrings);

        return _singleProgram;
    }

    uString* key = ::g::Uno::String::Join(::STRINGS[20/*":"*/], constStrings);

    if (_cachedPrograms == NULL)
        _cachedPrograms = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[4/*Uno.Collections.Dictionary<string, Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLCompiledProgram>*/]));

    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram* result;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_cachedPrograms), key, (void**)(&result), &ret2), ret2))
    {
        result = GetCompiledProgramInternal(constStrings);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_cachedPrograms), key, result);
    }

    return result;
}

// private Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLCompiledProgram GetCompiledProgramInternal(string[] constStrings) [instance] :38
::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram* GLProgram::GetCompiledProgramInternal(uArray* constStrings)
{
    uString* vsPrefix = ::STRINGS[21/*"#ifdef GL_E...*/];
    uString* fsPrefix = ::STRINGS[22/*"#ifdef GL_E...*/];
    fsPrefix = ::g::Uno::String::op_Addition2(fsPrefix, ::STRINGS[23/*"# ifdef GL_...*/]);
    uString* defines = ::STRINGS[24/*""*/];

    for (int i = 0; i < uPtr(constStrings)->Length(); i++)
        defines = ::g::Uno::String::op_Addition2(defines, ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[25/*"#define "*/], uPtr(_constAttribAndUniformNames)->Strong<uString*>(i)), ::STRINGS[26/*" "*/]), uPtr(constStrings)->Strong<uString*>(i)), ::STRINGS[27/*"\n"*/]));

    return ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram::New1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(vsPrefix, defines), _vsSource), ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(fsPrefix, defines), _fsSource), _constCount, _attribCount, _constAttribAndUniformNames);
}

// public static Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram Create(string vsSource, string fsSource, int constCount, int attribCount, string[] constAttribAndUniformNames) [static] :33
GLProgram* GLProgram::Create(uString* vsSource, uString* fsSource, int constCount, int attribCount, uArray* constAttribAndUniformNames)
{
    return GLProgram::New1(vsSource, fsSource, constCount, attribCount, constAttribAndUniformNames);
}

// internal GLProgram New(string vsSource, string fsSource, int constCount, int attribCount, string[] constAttribAndUniformNames) [static] :24
GLProgram* GLProgram::New1(uString* vsSource, uString* fsSource, int constCount, int attribCount, uArray* constAttribAndUniformNames)
{
    GLProgram* obj1 = (GLProgram*)uNew(GLProgram_typeof());
    obj1->ctor_(vsSource, fsSource, constCount, attribCount, constAttribAndUniformNames);
    return obj1;
}
// }

}}}}}} // ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL
