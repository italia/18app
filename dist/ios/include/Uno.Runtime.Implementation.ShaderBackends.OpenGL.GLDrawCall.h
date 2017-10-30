// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Runtime/Implementation/ShaderBackends/OpenGL/GLDrawCall.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Graphics{struct IndexBuffer;}}}
namespace g{namespace Uno{namespace Graphics{struct SamplerState;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{namespace Graphics{struct VideoTexture;}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{struct GLCompiledProgram;}}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{struct GLDrawCall;}}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{struct GLProgram;}}}}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float2x2;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{
namespace ShaderBackends{
namespace OpenGL{

// public extern struct GLDrawCall :8
// {
uStructType* GLDrawCall_typeof();
void GLDrawCall__ctor__fn(GLDrawCall* __this, ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram* program);
void GLDrawCall__Attrib_fn(GLDrawCall* __this, int* index, int* componentCount, int* componentType, bool* normalized, ::g::Uno::Graphics::VertexBuffer* buf, int* stride, int* offset);
void GLDrawCall__Attrib1_fn(GLDrawCall* __this, int* index, int* type, ::g::Uno::Graphics::VertexBuffer* buf, int* stride, int* offset);
void GLDrawCall__get_BaseVertex_fn(GLDrawCall* __this, int* __retval);
void GLDrawCall__set_BaseVertex_fn(GLDrawCall* __this, int* value);
void GLDrawCall__Begin_fn(GLDrawCall* __this);
void GLDrawCall__get_BlendDstAlpha_fn(GLDrawCall* __this, int* __retval);
void GLDrawCall__set_BlendDstAlpha_fn(GLDrawCall* __this, int* value);
void GLDrawCall__get_BlendDstRgb_fn(GLDrawCall* __this, int* __retval);
void GLDrawCall__set_BlendDstRgb_fn(GLDrawCall* __this, int* value);
void GLDrawCall__get_BlendEnabled_fn(GLDrawCall* __this, bool* __retval);
void GLDrawCall__set_BlendEnabled_fn(GLDrawCall* __this, bool* value);
void GLDrawCall__get_BlendEquationAlpha_fn(GLDrawCall* __this, int* __retval);
void GLDrawCall__set_BlendEquationAlpha_fn(GLDrawCall* __this, int* value);
void GLDrawCall__get_BlendEquationRgb_fn(GLDrawCall* __this, int* __retval);
void GLDrawCall__set_BlendEquationRgb_fn(GLDrawCall* __this, int* value);
void GLDrawCall__get_BlendSrcAlpha_fn(GLDrawCall* __this, int* __retval);
void GLDrawCall__set_BlendSrcAlpha_fn(GLDrawCall* __this, int* value);
void GLDrawCall__get_BlendSrcRgb_fn(GLDrawCall* __this, int* __retval);
void GLDrawCall__set_BlendSrcRgb_fn(GLDrawCall* __this, int* value);
void GLDrawCall__Const_fn(GLDrawCall* __this, int* index, bool* value);
void GLDrawCall__Const1_fn(GLDrawCall* __this, int* index, int* value);
void GLDrawCall__ConstInternal_fn(GLDrawCall* __this, int* index, uString* value);
void GLDrawCall__get_CullFace_fn(GLDrawCall* __this, int* __retval);
void GLDrawCall__set_CullFace_fn(GLDrawCall* __this, int* value);
void GLDrawCall__get_DepthFunc_fn(GLDrawCall* __this, int* __retval);
void GLDrawCall__set_DepthFunc_fn(GLDrawCall* __this, int* value);
void GLDrawCall__get_DepthTestEnabled_fn(GLDrawCall* __this, bool* __retval);
void GLDrawCall__set_DepthTestEnabled_fn(GLDrawCall* __this, bool* value);
void GLDrawCall__DisableSampler_fn(GLDrawCall* __this, int* index, int* target);
void GLDrawCall__Draw_fn(GLDrawCall* __this, int* count, int* type, ::g::Uno::Graphics::IndexBuffer* buf);
void GLDrawCall__DrawArrays_fn(GLDrawCall* __this, int* count);
void GLDrawCall__DrawElements_fn(GLDrawCall* __this, int* count, int* type, ::g::Uno::Graphics::IndexBuffer* buf);
void GLDrawCall__End_fn(GLDrawCall* __this);
void GLDrawCall__get_LineWidth_fn(GLDrawCall* __this, float* __retval);
void GLDrawCall__set_LineWidth_fn(GLDrawCall* __this, float* value);
void GLDrawCall__New1_fn(::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram* program, GLDrawCall* __retval);
void GLDrawCall__get_PolygonWinding_fn(GLDrawCall* __this, int* __retval);
void GLDrawCall__set_PolygonWinding_fn(GLDrawCall* __this, int* value);
void GLDrawCall__get_PrimitiveType_fn(GLDrawCall* __this, int* __retval);
void GLDrawCall__set_PrimitiveType_fn(GLDrawCall* __this, int* value);
void GLDrawCall__get_Program_fn(GLDrawCall* __this, ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram** __retval);
void GLDrawCall__set_Program_fn(GLDrawCall* __this, ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram* value);
void GLDrawCall__Sampler_fn(GLDrawCall* __this, int* index, int* target, uint32_t* handle, bool* isMipmap, bool* isPow2);
void GLDrawCall__Sampler1_fn(GLDrawCall* __this, int* index, int* target, uint32_t* handle, ::g::Uno::Graphics::SamplerState* state, bool* isMipmap, bool* isPow2);
void GLDrawCall__Sampler2_fn(GLDrawCall* __this, int* index, ::g::Uno::Graphics::Texture2D* value);
void GLDrawCall__Sampler3_fn(GLDrawCall* __this, int* index, ::g::Uno::Graphics::Texture2D* value, ::g::Uno::Graphics::SamplerState* state);
void GLDrawCall__Sampler7_fn(GLDrawCall* __this, int* index, ::g::Uno::Graphics::VideoTexture* value, ::g::Uno::Graphics::SamplerState* state);
void GLDrawCall__Uniform_fn(GLDrawCall* __this, int* index, float* value);
void GLDrawCall__Uniform1_fn(GLDrawCall* __this, int* index, uArray* value);
void GLDrawCall__Uniform2_fn(GLDrawCall* __this, int* index, ::g::Uno::Float2* value);
void GLDrawCall__Uniform3_fn(GLDrawCall* __this, int* index, uArray* value);
void GLDrawCall__Uniform4_fn(GLDrawCall* __this, int* index, ::g::Uno::Float2x2* value);
void GLDrawCall__Uniform6_fn(GLDrawCall* __this, int* index, ::g::Uno::Float3* value);
void GLDrawCall__Uniform10_fn(GLDrawCall* __this, int* index, ::g::Uno::Float4* value);
void GLDrawCall__Uniform11_fn(GLDrawCall* __this, int* index, uArray* value);
void GLDrawCall__Uniform12_fn(GLDrawCall* __this, int* index, ::g::Uno::Float4x4* value);
void GLDrawCall__Use_fn(GLDrawCall* __this);
void GLDrawCall__get_WriteAlpha_fn(GLDrawCall* __this, bool* __retval);
void GLDrawCall__set_WriteAlpha_fn(GLDrawCall* __this, bool* value);
void GLDrawCall__get_WriteBlue_fn(GLDrawCall* __this, bool* __retval);
void GLDrawCall__set_WriteBlue_fn(GLDrawCall* __this, bool* value);
void GLDrawCall__get_WriteDepth_fn(GLDrawCall* __this, bool* __retval);
void GLDrawCall__set_WriteDepth_fn(GLDrawCall* __this, bool* value);
void GLDrawCall__get_WriteGreen_fn(GLDrawCall* __this, bool* __retval);
void GLDrawCall__set_WriteGreen_fn(GLDrawCall* __this, bool* value);
void GLDrawCall__get_WriteRed_fn(GLDrawCall* __this, bool* __retval);
void GLDrawCall__set_WriteRed_fn(GLDrawCall* __this, bool* value);

struct GLDrawCall
{
    static uSStrong< ::g::Uno::Collections::List*> _boundAttributes_;
    static uSStrong< ::g::Uno::Collections::List*>& _boundAttributes() { return _boundAttributes_; }
    static int _currentTextureUnit_;
    static int& _currentTextureUnit() { return _currentTextureUnit_; }
    uStrong<uArray*> _constValues;
    bool _compiledProgramDirty;
    uStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram*> _compiledProgram;
    int _blendEqRgb;
    int _blendEqAlpha;
    int _blendSrcRgb;
    int _blendSrcAlpha;
    int _blendDstRgb;
    int _blendDstAlpha;
    int _depthFunc;
    int _primitiveType;
    int _cullFace;
    int _frontFace;
    int _BaseVertex;
    bool _BlendEnabled;
    bool _DepthTestEnabled;
    float _LineWidth;
    uStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> _Program;
    bool _WriteAlpha;
    bool _WriteBlue;
    bool _WriteDepth;
    bool _WriteGreen;
    bool _WriteRed;

    void ctor_(::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram* program);
    void Attrib(int index, int componentCount, int componentType, bool normalized, ::g::Uno::Graphics::VertexBuffer* buf, int stride, int offset);
    void Attrib1(int index, int type, ::g::Uno::Graphics::VertexBuffer* buf, int stride, int offset);
    int BaseVertex();
    void BaseVertex(int value);
    void Begin();
    int BlendDstAlpha();
    void BlendDstAlpha(int value);
    int BlendDstRgb();
    void BlendDstRgb(int value);
    bool BlendEnabled();
    void BlendEnabled(bool value);
    int BlendEquationAlpha();
    void BlendEquationAlpha(int value);
    int BlendEquationRgb();
    void BlendEquationRgb(int value);
    int BlendSrcAlpha();
    void BlendSrcAlpha(int value);
    int BlendSrcRgb();
    void BlendSrcRgb(int value);
    void Const(int index, bool value);
    void Const1(int index, int value);
    void ConstInternal(int index, uString* value);
    int CullFace();
    void CullFace(int value);
    int DepthFunc();
    void DepthFunc(int value);
    bool DepthTestEnabled();
    void DepthTestEnabled(bool value);
    void DisableSampler(int index, int target);
    void Draw(int count, int type, ::g::Uno::Graphics::IndexBuffer* buf);
    void DrawArrays(int count);
    void DrawElements(int count, int type, ::g::Uno::Graphics::IndexBuffer* buf);
    void End();
    float LineWidth();
    void LineWidth(float value);
    int PolygonWinding();
    void PolygonWinding(int value);
    int PrimitiveType();
    void PrimitiveType(int value);
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram* Program();
    void Program(::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram* value);
    void Sampler(int index, int target, uint32_t handle, bool isMipmap, bool isPow2);
    void Sampler1(int index, int target, uint32_t handle, ::g::Uno::Graphics::SamplerState state, bool isMipmap, bool isPow2);
    void Sampler2(int index, ::g::Uno::Graphics::Texture2D* value);
    void Sampler3(int index, ::g::Uno::Graphics::Texture2D* value, ::g::Uno::Graphics::SamplerState state);
    void Sampler7(int index, ::g::Uno::Graphics::VideoTexture* value, ::g::Uno::Graphics::SamplerState state);
    void Uniform(int index, float value);
    void Uniform1(int index, uArray* value);
    void Uniform2(int index, ::g::Uno::Float2 value);
    void Uniform3(int index, uArray* value);
    void Uniform4(int index, ::g::Uno::Float2x2 value);
    void Uniform6(int index, ::g::Uno::Float3 value);
    void Uniform10(int index, ::g::Uno::Float4 value);
    void Uniform11(int index, uArray* value);
    void Uniform12(int index, ::g::Uno::Float4x4 value);
    void Use();
    bool WriteAlpha();
    void WriteAlpha(bool value);
    bool WriteBlue();
    void WriteBlue(bool value);
    bool WriteDepth();
    void WriteDepth(bool value);
    bool WriteGreen();
    void WriteGreen(bool value);
    bool WriteRed();
    void WriteRed(bool value);
};

GLDrawCall GLDrawCall__New1(::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram* program);
// }

}}}}}} // ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL
