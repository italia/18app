// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing/1.3.1/Internal/BufferCollections.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.Internal.TypedBuffer.h>
namespace g{namespace Fuse{namespace Drawing{namespace Internal{struct Float2Buffer;}}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Internal{

// public sealed class Float2Buffer :149
// {
uType* Float2Buffer_typeof();
void Float2Buffer__ctor_2_fn(Float2Buffer* __this);
void Float2Buffer__Append_fn(Float2Buffer* __this, double* x, double* y);
void Float2Buffer__Append1_fn(Float2Buffer* __this, ::g::Uno::Float2* value);
void Float2Buffer__New3_fn(Float2Buffer** __retval);
void Float2Buffer__Set_fn(Float2Buffer* __this, int* offset, ::g::Uno::Float2* value);

struct Float2Buffer : ::g::Fuse::Drawing::Internal::TypedBuffer
{
    void ctor_2();
    void Append(double x, double y);
    void Append1(::g::Uno::Float2 value);
    void Set(int offset, ::g::Uno::Float2 value);
    static Float2Buffer* New3();
};
// }

}}}} // ::g::Fuse::Drawing::Internal
