// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing/1.3.1/Internal/BufferCollections.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{namespace Internal{struct TypedBuffer;}}}}
namespace g{namespace Uno{namespace Graphics{struct IndexBuffer;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Buffer;}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Internal{

// public class TypedBuffer :20
// {
uType* TypedBuffer_typeof();
void TypedBuffer__ctor_1_fn(TypedBuffer* __this, int* typeSize1, int* initSize);
void TypedBuffer__CheckGrow_fn(TypedBuffer* __this);
void TypedBuffer__Count_fn(TypedBuffer* __this, int* __retval);
void TypedBuffer__GetDeviceIndex_fn(TypedBuffer* __this, ::g::Uno::Graphics::IndexBuffer** __retval);
void TypedBuffer__GetDeviceVertex_fn(TypedBuffer* __this, ::g::Uno::Graphics::VertexBuffer** __retval);
void TypedBuffer__Init_fn(TypedBuffer* __this, int* initSize);
void TypedBuffer__InitDeviceIndex_fn(TypedBuffer* __this, int* bu);
void TypedBuffer__InitDeviceVertex_fn(TypedBuffer* __this, int* bu);

struct TypedBuffer : uObject
{
    uStrong< ::g::Uno::Buffer*> back;
    int capacity;
    uStrong< ::g::Uno::Graphics::IndexBuffer*> deviceIndex;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> deviceVertex;
    int size;
    int typeSize;

    void ctor_1(int typeSize1, int initSize);
    void CheckGrow();
    int Count();
    ::g::Uno::Graphics::IndexBuffer* GetDeviceIndex();
    ::g::Uno::Graphics::VertexBuffer* GetDeviceVertex();
    void Init(int initSize);
    void InitDeviceIndex(int bu);
    void InitDeviceVertex(int bu);
};
// }

}}}} // ::g::Fuse::Drawing::Internal
