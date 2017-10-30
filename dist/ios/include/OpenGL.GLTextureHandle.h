// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GLTextureHandle.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace OpenGL{

// public extern struct GLTextureHandle :11
// {
uStructType* GLTextureHandle_typeof();
void GLTextureHandle__Equals_fn(uint32_t* __this, uType* __type, uObject* obj, bool* __retval);
void GLTextureHandle__GetHashCode_fn(uint32_t* __this, uType* __type, int* __retval);
void GLTextureHandle__op_Explicit2_fn(uint32_t* handle, int* __retval);
void GLTextureHandle__op_Inequality_fn(uint32_t* left, uint32_t* right, bool* __retval);

struct GLTextureHandle
{
    static uint32_t Zero_;
    static uint32_t& Zero() { return Zero_; }

    static bool Equals(uint32_t __this, uType* __type, uObject* obj) { bool __retval; return GLTextureHandle__Equals_fn(&__this, __type, obj, &__retval), __retval; }
    static int GetHashCode(uint32_t __this, uType* __type) { int __retval; return GLTextureHandle__GetHashCode_fn(&__this, __type, &__retval), __retval; }
    static int op_Explicit2(uint32_t handle);
    static bool op_Inequality(uint32_t left, uint32_t right);
};
// }

}} // ::g::OpenGL
