// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Experimental.Cache.CacheLoaded.h>
#include <Experimental.Cache.ICache.h>
#include <Experimental.Cache.ICacheReader.h>
#include <Experimental.Cache.ICacheWriter.h>
#include <Experimental.Cache.ProxyStream.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Int.h>
#include <Uno.IO.Stream.h>
#include <Uno.Long.h>
#include <Uno.NotSupportedException.h>
#include <Uno.String.h>

namespace g{
namespace Experimental{
namespace Cache{

// /usr/local/share/uno/Packages/Experimental.Http/1.3.1/ICache.uno
// ----------------------------------------------------------------

// public delegate void CacheLoaded(Experimental.Cache.ICacheReader record) :24
uDelegateType* CacheLoaded_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Experimental.Cache.CacheLoaded", 1, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Experimental::Cache::ICacheReader_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Experimental.Http/1.3.1/ICache.uno
// ----------------------------------------------------------------

// public abstract interface ICache :26
// {
uInterfaceType* ICache_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Experimental.Cache.ICache", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Experimental.Http/1.3.1/ICache.uno
// ----------------------------------------------------------------

// public abstract interface ICacheReader :15
// {
uInterfaceType* ICacheReader_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Experimental.Cache.ICacheReader", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Experimental.Http/1.3.1/ICache.uno
// ----------------------------------------------------------------

// public abstract interface ICacheWriter :6
// {
uInterfaceType* ICacheWriter_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Experimental.Cache.ICacheWriter", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Experimental.Http/1.3.1/DiskCache.uno
// -------------------------------------------------------------------

// internal sealed class ProxyStream :66
// {
static void ProxyStream_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::Stream_type, interface0));
    type->SetFields(0,
        ::g::Uno::IO::Stream_typeof(), offsetof(ProxyStream, Backing), 0);
}

::g::Uno::IO::Stream_type* ProxyStream_typeof()
{
    static uSStrong< ::g::Uno::IO::Stream_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::IO::Stream_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ProxyStream);
    options.TypeSize = sizeof(::g::Uno::IO::Stream_type);
    type = (::g::Uno::IO::Stream_type*)uClassType::New("Experimental.Cache.ProxyStream", options);
    type->fp_build_ = ProxyStream_build;
    type->fp_Close = (void(*)(::g::Uno::IO::Stream*))ProxyStream__Close_fn;
    type->fp_Dispose1 = (void(*)(::g::Uno::IO::Stream*, bool*))ProxyStream__Dispose1_fn;
    type->fp_Flush = (void(*)(::g::Uno::IO::Stream*))ProxyStream__Flush_fn;
    type->fp_get_Length = (void(*)(::g::Uno::IO::Stream*, int64_t*))ProxyStream__get_Length_fn;
    type->fp_get_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))ProxyStream__get_Position_fn;
    type->fp_set_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))ProxyStream__set_Position_fn;
    type->fp_Read = (void(*)(::g::Uno::IO::Stream*, uArray*, int*, int*, int*))ProxyStream__Read_fn;
    type->fp_Write = (void(*)(::g::Uno::IO::Stream*, uArray*, int*, int*))ProxyStream__Write_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::IO::Stream__Dispose_fn;
    return type;
}

// public override sealed void Close() :107
void ProxyStream__Close_fn(ProxyStream* __this)
{
    uPtr(__this->Backing)->Close();
}

// public override sealed void Dispose(bool disposing) :106
void ProxyStream__Dispose1_fn(ProxyStream* __this, bool* disposing)
{
    bool disposing_ = *disposing;
    uPtr(__this->Backing)->Dispose1(disposing_);
}

// public override sealed void Flush() :103
void ProxyStream__Flush_fn(ProxyStream* __this)
{
    uPtr(__this->Backing)->Flush();
}

// public override sealed long get_Length() :88
void ProxyStream__get_Length_fn(ProxyStream* __this, int64_t* __retval)
{
    return *__retval = uPtr(__this->Backing)->Length(), void();
}

// public override sealed long get_Position() :91
void ProxyStream__get_Position_fn(ProxyStream* __this, int64_t* __retval)
{
    return *__retval = uPtr(__this->Backing)->Position(), void();
}

// public override sealed void set_Position(long value) :92
void ProxyStream__set_Position_fn(ProxyStream* __this, int64_t* value)
{
    U_THROW(::g::Uno::NotSupportedException::New4());
}

// public override sealed int Read(byte[] dst, int byteOffset, int byteCount) :97
void ProxyStream__Read_fn(ProxyStream* __this, uArray* dst, int* byteOffset, int* byteCount, int* __retval)
{
    int byteOffset_ = *byteOffset;
    int byteCount_ = *byteCount;
    return *__retval = uPtr(__this->Backing)->Read(dst, byteOffset_, byteCount_), void();
}

// public override sealed void Write(byte[] src, int byteOffset, int byteCount) :99
void ProxyStream__Write_fn(ProxyStream* __this, uArray* src, int* byteOffset, int* byteCount)
{
    int byteOffset_ = *byteOffset;
    int byteCount_ = *byteCount;
    uPtr(__this->Backing)->Write(src, byteOffset_, byteCount_);
}
// }

}}} // ::g::Experimental::Cache
