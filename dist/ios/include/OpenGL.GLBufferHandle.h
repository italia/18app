// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/OpenGL/GLBufferHandle.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace OpenGL{

// public extern struct GLBufferHandle :11
// {
uStructType* GLBufferHandle_typeof();
void GLBufferHandle__Equals_fn(uint32_t* __this, uType* __type, uObject* obj, bool* __retval);
void GLBufferHandle__GetHashCode_fn(uint32_t* __this, uType* __type, int* __retval);

struct GLBufferHandle
{
    static uint32_t Zero_;
    static uint32_t& Zero() { return Zero_; }

    static bool Equals(uint32_t __this, uType* __type, uObject* obj) { bool __retval; return GLBufferHandle__Equals_fn(&__this, __type, obj, &__retval), __retval; }
    static int GetHashCode(uint32_t __this, uType* __type) { int __retval; return GLBufferHandle__GetHashCode_fn(&__this, __type, &__retval), __retval; }
};
// }

}} // ::g::OpenGL
