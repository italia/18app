// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Runtime/Implementation/Internal/BufferConverters.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{struct BufferConverters;}}}}}
namespace g{namespace Uno{struct Buffer;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{
namespace Internal{

// public static class BufferConverters :3
// {
uClassType* BufferConverters_typeof();
void BufferConverters__ToBuffer3_fn(uArray* data, ::g::Uno::Buffer** __retval);
void BufferConverters__ToBuffer4_fn(uArray* data, ::g::Uno::Buffer** __retval);
void BufferConverters__ToBuffer9_fn(uArray* data, ::g::Uno::Buffer** __retval);

struct BufferConverters : uObject
{
    static ::g::Uno::Buffer* ToBuffer3(uArray* data);
    static ::g::Uno::Buffer* ToBuffer4(uArray* data);
    static ::g::Uno::Buffer* ToBuffer9(uArray* data);
};
// }

}}}}} // ::g::Uno::Runtime::Implementation::Internal
