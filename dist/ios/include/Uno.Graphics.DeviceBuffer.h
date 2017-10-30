// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.3.2/Source/Uno/Graphics/DeviceBuffer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Graphics{struct DeviceBuffer;}}}
namespace g{namespace Uno{struct Buffer;}}

namespace g{
namespace Uno{
namespace Graphics{

// public abstract class DeviceBuffer :7
// {
struct DeviceBuffer_type : uType
{
    ::g::Uno::IDisposable interface0;
};

DeviceBuffer_type* DeviceBuffer_typeof();
void DeviceBuffer__ctor__fn(DeviceBuffer* __this, int* usage);
void DeviceBuffer__Dispose_fn(DeviceBuffer* __this);
void DeviceBuffer__get_GLBufferHandle_fn(DeviceBuffer* __this, uint32_t* __retval);
void DeviceBuffer__set_GLBufferHandle_fn(DeviceBuffer* __this, uint32_t* value);
void DeviceBuffer__get_GLBufferTarget_fn(DeviceBuffer* __this, int* __retval);
void DeviceBuffer__set_GLBufferTarget_fn(DeviceBuffer* __this, int* value);
void DeviceBuffer__GLInit_fn(DeviceBuffer* __this, int* target);
void DeviceBuffer__GLInit2_fn(DeviceBuffer* __this, int* target, ::g::Uno::Buffer* data);
void DeviceBuffer__get_IsDisposed_fn(DeviceBuffer* __this, bool* __retval);
void DeviceBuffer__set_IsDisposed_fn(DeviceBuffer* __this, bool* value);
void DeviceBuffer__get_SizeInBytes_fn(DeviceBuffer* __this, int* __retval);
void DeviceBuffer__set_SizeInBytes_fn(DeviceBuffer* __this, int* value);
void DeviceBuffer__Update_fn(DeviceBuffer* __this, ::g::Uno::Buffer* data);
void DeviceBuffer__get_Usage_fn(DeviceBuffer* __this, int* __retval);
void DeviceBuffer__set_Usage_fn(DeviceBuffer* __this, int* value);

struct DeviceBuffer : uObject
{
    uint32_t _GLBufferHandle;
    int _GLBufferTarget;
    bool _IsDisposed;
    int _SizeInBytes;
    int _Usage;

    void ctor_(int usage);
    void Dispose();
    uint32_t GLBufferHandle();
    void GLBufferHandle(uint32_t value);
    int GLBufferTarget();
    void GLBufferTarget(int value);
    void GLInit(int target);
    void GLInit2(int target, ::g::Uno::Buffer* data);
    bool IsDisposed();
    void IsDisposed(bool value);
    int SizeInBytes();
    void SizeInBytes(int value);
    void Update(::g::Uno::Buffer* data);
    int Usage();
    void Usage(int value);
};
// }

}}} // ::g::Uno::Graphics
