// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Runtime/Implementation/ShaderBackends/OpenGL/GLCompiledProgram.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{struct GLCompiledProgram;}}}}}}

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{
namespace ShaderBackends{
namespace OpenGL{

// public sealed extern class GLCompiledProgram :6
// {
struct GLCompiledProgram_type : uType
{
    ::g::Uno::IDisposable interface0;
};

GLCompiledProgram_type* GLCompiledProgram_typeof();
void GLCompiledProgram__ctor__fn(GLCompiledProgram* __this, uString* vsSource, uString* fsSource, int* constCount, int* attribCount, uArray* constAttribAndUniformNames);
void GLCompiledProgram__Dispose_fn(GLCompiledProgram* __this);
void GLCompiledProgram__GetLocation_fn(GLCompiledProgram* __this, int* index, int* __retval);
void GLCompiledProgram__get_GLProgramHandle_fn(GLCompiledProgram* __this, uint32_t* __retval);
void GLCompiledProgram__set_GLProgramHandle_fn(GLCompiledProgram* __this, uint32_t* value);
void GLCompiledProgram__New1_fn(uString* vsSource, uString* fsSource, int* constCount, int* attribCount, uArray* constAttribAndUniformNames, GLCompiledProgram** __retval);

struct GLCompiledProgram : uObject
{
    uint32_t _fsHandle;
    uStrong<uArray*> _locations;
    uint32_t _vsHandle;
    uint32_t _GLProgramHandle;

    void ctor_(uString* vsSource, uString* fsSource, int constCount, int attribCount, uArray* constAttribAndUniformNames);
    void Dispose();
    int GetLocation(int index);
    uint32_t GLProgramHandle();
    void GLProgramHandle(uint32_t value);
    static GLCompiledProgram* New1(uString* vsSource, uString* fsSource, int constCount, int attribCount, uArray* constAttribAndUniformNames);
};
// }

}}}}}} // ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL
