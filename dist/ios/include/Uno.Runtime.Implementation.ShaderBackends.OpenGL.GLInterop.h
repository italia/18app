// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Runtime/Implementation/ShaderBackends/OpenGL/GLInterop.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{struct GLInterop;}}}}}}

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{
namespace ShaderBackends{
namespace OpenGL{

// public static extern class GLInterop :7
// {
uClassType* GLInterop_typeof();
void GLInterop__ToGLBlendEquation_fn(int* x, int* __retval);
void GLInterop__ToGLBlendingFactor_fn(int* x, int* __retval);
void GLInterop__ToGLBufferUsage_fn(int* x, int* __retval);
void GLInterop__ToGLCullFaceMode_fn(int* x, int* __retval);
void GLInterop__ToGLDepthFunction_fn(int* x, int* __retval);
void GLInterop__ToGLFrontFaceDirection_fn(int* x, int* __retval);
void GLInterop__ToGLIndexType_fn(int* x, int* __retval);
void GLInterop__ToGLPrimitiveType_fn(int* x, int* __retval);
void GLInterop__ToGLVertexAttributeType_fn(int* x, int* componentCount, int* componentType, bool* normalized);
void GLInterop__ToUnoGraphicsBlendEquation_fn(int* x, int* __retval);
void GLInterop__ToUnoGraphicsBlendOperand_fn(int* x, int* __retval);
void GLInterop__ToUnoGraphicsCompareFunc_fn(int* x, int* __retval);
void GLInterop__ToUnoGraphicsPolygonFace_fn(int* x, int* __retval);
void GLInterop__ToUnoGraphicsPolygonWinding_fn(int* x, int* __retval);
void GLInterop__ToUnoGraphicsPrimitiveType_fn(int* x, int* __retval);

struct GLInterop : uObject
{
    static int ToGLBlendEquation(int x);
    static int ToGLBlendingFactor(int x);
    static int ToGLBufferUsage(int x);
    static int ToGLCullFaceMode(int x);
    static int ToGLDepthFunction(int x);
    static int ToGLFrontFaceDirection(int x);
    static int ToGLIndexType(int x);
    static int ToGLPrimitiveType(int x);
    static void ToGLVertexAttributeType(int x, int* componentCount, int* componentType, bool* normalized);
    static int ToUnoGraphicsBlendEquation(int x);
    static int ToUnoGraphicsBlendOperand(int x);
    static int ToUnoGraphicsCompareFunc(int x);
    static int ToUnoGraphicsPolygonFace(int x);
    static int ToUnoGraphicsPolygonWinding(int x);
    static int ToUnoGraphicsPrimitiveType(int x);
};
// }

}}}}}} // ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL
