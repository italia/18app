// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Runtime.Implementation.BufferImpl.h>
#include <Uno.Runtime.Implementation.GraphicsContextHandle.h>
#include <Uno.Runtime.Implementation.PlatformWindowHandle.h>
#include <Uno.UShort.h>
#include <Uno/Support.h>

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Runtime/Implementation/BufferImpl.uno
// --------------------------------------------------------------------------------------------

// public static class BufferImpl :7
// {
static void BufferImpl_build(uType* type)
{
}

uClassType* BufferImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Runtime.Implementation.BufferImpl", options);
    type->fp_build_ = BufferImpl_build;
    return type;
}

// public static int GetInt(byte[] buffer, int offset, bool littleEndian) :81
void BufferImpl__GetInt_fn(uArray* buffer, int* offset, bool* littleEndian, int* __retval)
{
    *__retval = BufferImpl::GetInt(buffer, *offset, *littleEndian);
}

// public static void SetFloat(byte[] buffer, int offset, float value, bool littleEndian) :247
void BufferImpl__SetFloat_fn(uArray* buffer, int* offset, float* value, bool* littleEndian)
{
    BufferImpl::SetFloat(buffer, *offset, *value, *littleEndian);
}

// public static void SetInt(byte[] buffer, int offset, int value, bool littleEndian) :99
void BufferImpl__SetInt_fn(uArray* buffer, int* offset, int* value, bool* littleEndian)
{
    BufferImpl::SetInt(buffer, *offset, *value, *littleEndian);
}

// public static void SetUShort(byte[] buffer, int offset, ushort value, bool littleEndian) :63
void BufferImpl__SetUShort_fn(uArray* buffer, int* offset, uint16_t* value, bool* littleEndian)
{
    BufferImpl::SetUShort(buffer, *offset, *value, *littleEndian);
}

// public static int GetInt(byte[] buffer, int offset, bool littleEndian) [static] :81
int BufferImpl::GetInt(uArray* buffer, int offset, bool littleEndian)
{
    return uLoadBytes<int>((uint8_t*)buffer->_ptr + offset, littleEndian);
}

// public static void SetFloat(byte[] buffer, int offset, float value, bool littleEndian) [static] :247
void BufferImpl::SetFloat(uArray* buffer, int offset, float value, bool littleEndian)
{
    uStoreBytes((uint8_t*)buffer->_ptr + offset, value, littleEndian);
}

// public static void SetInt(byte[] buffer, int offset, int value, bool littleEndian) [static] :99
void BufferImpl::SetInt(uArray* buffer, int offset, int value, bool littleEndian)
{
    uStoreBytes((uint8_t*)buffer->_ptr + offset, value, littleEndian);
}

// public static void SetUShort(byte[] buffer, int offset, ushort value, bool littleEndian) [static] :63
void BufferImpl::SetUShort(uArray* buffer, int offset, uint16_t value, bool littleEndian)
{
    uStoreBytes((uint8_t*)buffer->_ptr + offset, value, littleEndian);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Runtime/Implementation/GraphicsControllerImpl.uno
// --------------------------------------------------------------------------------------------------------

// internal struct GraphicsContextHandle :12
// {
static void GraphicsContextHandle_build(uType* type)
{
}

uStructType* GraphicsContextHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(void*);
    options.ValueSize = sizeof(void*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Runtime.Implementation.GraphicsContextHandle", options);
    type->fp_build_ = GraphicsContextHandle_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Runtime/Implementation/PlatformWindowImpl.uno
// ----------------------------------------------------------------------------------------------------

// public struct PlatformWindowHandle :11
// {
static void PlatformWindowHandle_build(uType* type)
{
}

uStructType* PlatformWindowHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(void*);
    options.ValueSize = sizeof(void*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Runtime.Implementation.PlatformWindowHandle", options);
    type->fp_build_ = PlatformWindowHandle_build;
    return type;
}
// }

}}}} // ::g::Uno::Runtime::Implementation
