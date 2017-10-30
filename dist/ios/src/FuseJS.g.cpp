// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Diagnostics.h>
#include <Fuse.iOSDevice.h>
#include <Fuse.Node.h>
#include <Fuse.OSVersion.h>
#include <Fuse.Platform.ApplicationState.h>
#include <Fuse.Platform.Lifecycle.h>
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Error.h>
#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.JSObjectUtils.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeEvent.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.NativeProperty-2.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ResultConverter-2.h>
#include <Fuse.Scripting.ResultFactory-1.h>
#include <Fuse.Scripting.ValueConverter-2.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UserEventDispatch.h>
#include <FuseJS.Base64.h>
#include <FuseJS.Bundle.ExtractClosure.h>
#include <FuseJS.Bundle.h>
#include <FuseJS.Bundle.ReadBufferClosure.h>
#include <FuseJS.Bundle.ReadClosure.h>
#include <FuseJS.Environment.h>
#include <FuseJS.FileReaderImpl.FileReadCommand.h>
#include <FuseJS.FileReaderImpl.h>
#include <FuseJS.Globals.h>
#include <FuseJS.Latin1Helpers.h>
#include <FuseJS.Lifecycle.h>
#include <FuseJS.RaiseEvent.h>
#include <FuseJS.UserEvents.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Exception.h>
#include <Uno.Func-1.h>
#include <Uno.Int.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.Path.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h>
#include <Uno.String.h>
#include <Uno.Text.Ascii.h>
#include <Uno.Text.Base64.h>
#include <Uno.Text.Utf8.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[55];
static uType* TYPES[21];

namespace g{
namespace FuseJS{

// /usr/local/share/uno/Packages/FuseJS/1.3.1/Base64.uno
// -----------------------------------------------------

// public sealed class Base64 :25
// {
static void Base64_build(uType* type)
{
    ::STRINGS[0] = uString::Const("FuseJS/Base64");
    ::STRINGS[1] = uString::Const("encodeAscii");
    ::STRINGS[2] = uString::Const("decodeAscii");
    ::STRINGS[3] = uString::Const("encodeUtf8");
    ::STRINGS[4] = uString::Const("decodeUtf8");
    ::STRINGS[5] = uString::Const("encodeLatin1");
    ::STRINGS[6] = uString::Const("decodeLatin1");
    ::STRINGS[7] = uString::Const("encodeBuffer");
    ::STRINGS[8] = uString::Const("decodeBuffer");
    ::STRINGS[9] = uString::Const("Requires a base-64 encoded string as first argument");
    ::STRINGS[10] = uString::Const("Requires a base-64 encoded Latin-1 string as argument");
    ::STRINGS[11] = uString::Const("Requires an ArrayBuffer as the first argument.");
    ::STRINGS[12] = uString::Const("Requires 1 argument");
    ::STRINGS[13] = uString::Const("null");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1/*FirstOrDefault<object>*/, uObject_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Byte_typeof()->Array();
    type->SetDependencies(
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&Base64::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* Base64_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Base64);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("FuseJS.Base64", options);
    type->fp_build_ = Base64_build;
    type->fp_ctor_ = (void*)Base64__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public Base64() :29
void Base64__ctor_2_fn(Base64* __this)
{
    __this->ctor_2();
}

// private object DecodeAscii(Fuse.Scripting.Context context, object[] args) :161
void Base64__DecodeAscii_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->DecodeAscii(context, args);
}

// private object DecodeBuffer(Fuse.Scripting.Context context, object[] args) :57
void Base64__DecodeBuffer_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->DecodeBuffer(context, args);
}

// private object DecodeLatin1(Fuse.Scripting.Context context, object[] args) :99
void Base64__DecodeLatin1_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->DecodeLatin1(context, args);
}

// private object DecodeUtf8(Fuse.Scripting.Context context, object[] args) :203
void Base64__DecodeUtf8_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->DecodeUtf8(context, args);
}

// private object EncodeAscii(Fuse.Scripting.Context context, object[] args) :140
void Base64__EncodeAscii_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->EncodeAscii(context, args);
}

// private object EncodeBuffer(Fuse.Scripting.Context context, object[] args) :80
void Base64__EncodeBuffer_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->EncodeBuffer(context, args);
}

// private object EncodeLatin1(Fuse.Scripting.Context context, object[] args) :118
void Base64__EncodeLatin1_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->EncodeLatin1(context, args);
}

// private object EncodeUtf8(Fuse.Scripting.Context context, object[] args) :182
void Base64__EncodeUtf8_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->EncodeUtf8(context, args);
}

// public Base64 New() :29
void Base64__New2_fn(Base64** __retval)
{
    *__retval = Base64::New2();
}

uSStrong<Base64*> Base64::_instance_;

// public Base64() [instance] :29
void Base64::ctor_2()
{
    ctor_1();

    if (Base64::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(Base64::_instance_ = this, ::STRINGS[0/*"FuseJS/Base64"*/]);
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[1/*"encodeAscii"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)Base64__EncodeAscii_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[2/*"decodeAscii"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)Base64__DecodeAscii_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[3/*"encodeUtf8"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)Base64__EncodeUtf8_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[4/*"decodeUtf8"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)Base64__DecodeUtf8_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[5/*"encodeLatin1"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)Base64__EncodeLatin1_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[6/*"decodeLatin1"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)Base64__DecodeLatin1_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[7/*"encodeBuffer"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)Base64__EncodeBuffer_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[8/*"decodeBuffer"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)Base64__DecodeBuffer_fn, this)));
}

// private object DecodeAscii(Fuse.Scripting.Context context, object[] args) [instance] :161
uObject* Base64::DecodeAscii(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* str = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);

        if (::g::Uno::String::op_Inequality(str, NULL))
            return ::g::Uno::Text::Ascii::GetString(::g::Uno::Text::Base64::GetBytes(str));
    }

    return NULL;
}

// private object DecodeBuffer(Fuse.Scripting.Context context, object[] args) [instance] :57
uObject* Base64::DecodeBuffer(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uObject* ret2;
    uString* base64Str = uAs<uString*>((::g::Uno::Collections::EnumerableExtensions__FirstOrDefault_fn(::TYPES[2/*Uno.Collections.EnumerableExtensions.FirstOrDefault<object>*/], (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[3/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<object>*/], args)), &ret2), ret2), ::TYPES[1/*string*/]);

    if (::g::Uno::String::op_Equality(base64Str, NULL))
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[9/*"Requires a ...*/]));

    return ::g::Uno::Text::Base64::GetBytes(base64Str);
}

// private object DecodeLatin1(Fuse.Scripting.Context context, object[] args) [instance] :99
uObject* Base64::DecodeLatin1(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uObject* ret3;
    uString* base64Str = uAs<uString*>((::g::Uno::Collections::EnumerableExtensions__FirstOrDefault_fn(::TYPES[2/*Uno.Collections.EnumerableExtensions.FirstOrDefault<object>*/], (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[3/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<object>*/], args)), &ret3), ret3), ::TYPES[1/*string*/]);

    if (::g::Uno::String::op_Equality(base64Str, NULL))
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[10/*"Requires a ...*/]));

    return ::g::FuseJS::Latin1Helpers::DecodeLatin1(base64Str);
}

// private object DecodeUtf8(Fuse.Scripting.Context context, object[] args) [instance] :203
uObject* Base64::DecodeUtf8(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* str = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);

        if (::g::Uno::String::op_Inequality(str, NULL))
            return ::g::Uno::Text::Utf8::GetString(::g::Uno::Text::Base64::GetBytes(str));
    }

    return NULL;
}

// private object EncodeAscii(Fuse.Scripting.Context context, object[] args) [instance] :140
uObject* Base64::EncodeAscii(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* str = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);

        if (::g::Uno::String::op_Inequality(str, NULL))
            return ::g::Uno::Text::Base64::GetString(::g::Uno::Text::Ascii::GetBytes(str));
    }

    return NULL;
}

// private object EncodeBuffer(Fuse.Scripting.Context context, object[] args) [instance] :80
uObject* Base64::EncodeBuffer(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uObject* ret4;
    uArray* buffer = uAs<uArray*>((::g::Uno::Collections::EnumerableExtensions__FirstOrDefault_fn(::TYPES[2/*Uno.Collections.EnumerableExtensions.FirstOrDefault<object>*/], (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[3/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<object>*/], args)), &ret4), ret4), ::TYPES[4/*byte[]*/]);

    if (buffer == NULL)
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[11/*"Requires an...*/]));

    return ::g::Uno::Text::Base64::GetString(buffer);
}

// private object EncodeLatin1(Fuse.Scripting.Context context, object[] args) [instance] :118
uObject* Base64::EncodeLatin1(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (uPtr(args)->Length() < 1)
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[12/*"Requires 1 ...*/]));

    uString* str = (uPtr(args)->Strong<uObject*>(0) == NULL) ? ::STRINGS[13/*"null"*/] : (uString*)::g::Uno::Object::ToString(uPtr(uPtr(args)->Strong<uObject*>(0)));
    return ::g::FuseJS::Latin1Helpers::EncodeLatin1(str);
}

// private object EncodeUtf8(Fuse.Scripting.Context context, object[] args) [instance] :182
uObject* Base64::EncodeUtf8(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* str = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);

        if (::g::Uno::String::op_Inequality(str, NULL))
            return ::g::Uno::Text::Base64::GetString(::g::Uno::Text::Utf8::GetBytes(str));
    }

    return NULL;
}

// public Base64 New() [static] :29
Base64* Base64::New2()
{
    Base64* obj1 = (Base64*)uNew(Base64_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseJS/1.3.1/Bundle.uno
// -----------------------------------------------------

// public sealed class Bundle :22
// {
static void Bundle_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::UX::Resource_typeof());
    type->MethodTypes[0]->SetPrecalc(
        ::g::Uno::Threading::Promise_typeof()->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&Bundle::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* Bundle_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.MethodTypeCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Bundle);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("FuseJS.Bundle", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1,0);
    type->fp_build_ = Bundle_build;
    type->fp_ctor_ = (void*)Bundle__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public Bundle() :26
void Bundle__ctor_2_fn(Bundle* __this)
{
    __this->ctor_2();
}

// public static Uno.Threading.Future<string> Extract(object[] args) :141
void Bundle__Extract_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Bundle::Extract(args);
}

// public static Uno.Threading.Future<Uno.Collections.IEnumerable<Uno.IO.BundleFile>> GetList([object[] args]) :91
void Bundle__GetList_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Bundle::GetList(args);
}

// private static Fuse.Scripting.Array ListConverter(Fuse.Scripting.Context context, Uno.Collections.IEnumerable<Uno.IO.BundleFile> list) :65
void Bundle__ListConverter_fn(::g::Fuse::Scripting::Context* context, uObject* list, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = Bundle::ListConverter(context, list);
}

// public Bundle New() :26
void Bundle__New2_fn(Bundle** __retval)
{
    *__retval = Bundle::New2();
}

// public static Uno.Threading.Future<string> ReadAsync(object[] args) :173
void Bundle__ReadAsync_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Bundle::ReadAsync(args);
}

// private static Uno.Threading.Future<string> ReadAsync(string filename) :226
void Bundle__ReadAsync1_fn(uString* filename, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Bundle::ReadAsync1(filename);
}

// public static Uno.Threading.Future<byte[]> ReadBuffer(object[] args) :56
void Bundle__ReadBuffer_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Bundle::ReadBuffer(args);
}

// private static object ReadSync(Fuse.Scripting.Context c, object[] args) :199
void Bundle__ReadSync_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = Bundle::ReadSync(c, args);
}

// public static string ReadSync(string filename) :209
void Bundle__ReadSync1_fn(uString* filename, uString** __retval)
{
    *__retval = Bundle::ReadSync1(filename);
}

// private static Uno.Threading.Future<T> Reject<T>(string reason) :112
void Bundle__Reject_fn(uType* __type, uString* reason, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Bundle::Reject(__type, reason);
}

// private static bool TryGetBundleFile(string sourcePath, Uno.IO.BundleFile& bundleFile) :99
void Bundle__TryGetBundleFile_fn(uString* sourcePath, ::g::Uno::IO::BundleFile** bundleFile, bool* __retval)
{
    *__retval = Bundle::TryGetBundleFile(sourcePath, bundleFile);
}

uSStrong<Bundle*> Bundle::_instance_;

// public Bundle() [instance] :26
void Bundle::ctor_2()
{
    ctor_1();

    if (Bundle::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(Bundle::_instance_ = this, uString::Const("FuseJS/Bundle"));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(uString::Const("readSync"), uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)Bundle__ReadSync_fn)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[8/*Fuse.Scripting.NativePromise<string, string>*/], uString::Const("read"), uDelegate::New(::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::TYPES[1/*string*/], NULL), (void*)Bundle__ReadAsync_fn), NULL));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::TYPES[1/*string*/], ::TYPES[18/*Fuse.Scripting.Object*/], NULL), uString::Const("extract"), uDelegate::New(::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::TYPES[1/*string*/], NULL), (void*)Bundle__Extract_fn), NULL));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL), ::g::Fuse::Scripting::Array_typeof(), NULL), uString::Const("list"), uDelegate::New(::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL), NULL), (void*)Bundle__GetList_fn), uDelegate::New(::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL), ::g::Fuse::Scripting::Array_typeof(), NULL), (void*)Bundle__ListConverter_fn)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::TYPES[4/*byte[]*/], ::TYPES[1/*string*/], NULL), uString::Const("readBuffer"), uDelegate::New(::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::TYPES[4/*byte[]*/], NULL), (void*)Bundle__ReadBuffer_fn), NULL));
}

// public static Uno.Threading.Future<string> Extract(object[] args) [static] :141
::g::Uno::Threading::Future1* Bundle::Extract(uArray* args)
{
    uString* ret4;
    uString* ret5;
    bool ret6;
    uString* searchPath = (::g::Fuse::Scripting::JSObjectUtils__ValueOrDefault1_fn(::g::Fuse::Scripting::JSObjectUtils_typeof()->MakeMethod(0/*ValueOrDefault<string>*/, ::TYPES[1/*string*/], NULL), args, uCRef<int>(0), ::STRINGS[22/*""*/], &ret4), ret4);
    uString* destinationPath = (::g::Fuse::Scripting::JSObjectUtils__ValueOrDefault1_fn(::g::Fuse::Scripting::JSObjectUtils_typeof()->MakeMethod(0/*ValueOrDefault<string>*/, ::TYPES[1/*string*/], NULL), args, uCRef<int>(1), ::STRINGS[22/*""*/], &ret5), ret5);
    bool overwrite = (::g::Fuse::Scripting::JSObjectUtils__ValueOrDefault1_fn(::g::Fuse::Scripting::JSObjectUtils_typeof()->MakeMethod(0/*ValueOrDefault<bool>*/, ::g::Uno::Bool_typeof(), NULL), args, uCRef<int>(2), uCRef(false), &ret6), ret6);

    if (::g::Uno::String::op_Equality(searchPath, ::STRINGS[22/*""*/]))
        return (::g::Uno::Threading::Future1*)Bundle::Reject(Bundle_typeof()->MakeMethod(0/*Reject<string>*/, ::TYPES[1/*string*/], NULL), uString::Const("Argument 0 (bundle path) can not be undefined"));

    if (::g::Uno::String::op_Equality(destinationPath, ::STRINGS[22/*""*/]))
        return (::g::Uno::Threading::Future1*)Bundle::Reject(Bundle_typeof()->MakeMethod(0/*Reject<string>*/, ::TYPES[1/*string*/], NULL), uString::Const("Argument 1 (destination path) can not be undefined"));

    return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run(::g::Uno::Threading::Promise_typeof()->MakeType(::TYPES[1/*string*/], NULL), uDelegate::New(::TYPES[7/*Uno.Func<string>*/], (void*)Bundle__ExtractClosure__Invoke_fn, Bundle__ExtractClosure::New1(searchPath, destinationPath, overwrite)));
}

// public static Uno.Threading.Future<Uno.Collections.IEnumerable<Uno.IO.BundleFile>> GetList([object[] args]) [static] :91
::g::Uno::Threading::Future1* Bundle::GetList(uArray* args)
{
    ::g::Uno::Threading::Promise* p = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL), NULL));
    uObject* files = ::g::Uno::IO::Bundle::AllFiles();
    ::g::Uno::Threading::Promise__Resolve_fn(p, files);
    return p;
}

// private static Fuse.Scripting.Array ListConverter(Fuse.Scripting.Context context, Uno.Collections.IEnumerable<Uno.IO.BundleFile> list) [static] :65
::g::Fuse::Scripting::Array* Bundle::ListConverter(::g::Fuse::Scripting::Context* context, uObject* list)
{
    ::g::Uno::IO::BundleFile* ret7;
    ::g::Fuse::Scripting::Array* output = uPtr(context)->NewArray(uArray::New(::TYPES[13/*object[]*/], 0));
    int i = 0;
    uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(list), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL)));

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::g::Uno::IDisposable_typeof()));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())))
        {
            ::g::Uno::IO::BundleFile* b = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL)), &ret7), ret7);
            uPtr(output)->Item(i++, uPtr(b)->SourcePath());
        }
    }

    return output;
}

// public Bundle New() [static] :26
Bundle* Bundle::New2()
{
    Bundle* obj3 = (Bundle*)uNew(Bundle_typeof());
    obj3->ctor_2();
    return obj3;
}

// public static Uno.Threading.Future<string> ReadAsync(object[] args) [static] :173
::g::Uno::Threading::Future1* Bundle::ReadAsync(uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);
        return Bundle::ReadAsync1((filename != NULL) ? filename : ::STRINGS[22/*""*/]);
    }

    return Bundle::ReadAsync1(::STRINGS[22/*""*/]);
}

// private static Uno.Threading.Future<string> ReadAsync(string filename) [static] :226
::g::Uno::Threading::Future1* Bundle::ReadAsync1(uString* filename)
{
    return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run(::g::Uno::Threading::Promise_typeof()->MakeType(::TYPES[1/*string*/], NULL), uDelegate::New(::TYPES[7/*Uno.Func<string>*/], (void*)Bundle__ReadClosure__Invoke_fn, Bundle__ReadClosure::New1(filename)));
}

// public static Uno.Threading.Future<byte[]> ReadBuffer(object[] args) [static] :56
::g::Uno::Threading::Future1* Bundle::ReadBuffer(uArray* args)
{
    uString* ret8;
    uString* searchPath = (::g::Fuse::Scripting::JSObjectUtils__ValueOrDefault1_fn(::g::Fuse::Scripting::JSObjectUtils_typeof()->MakeMethod(0/*ValueOrDefault<string>*/, ::TYPES[1/*string*/], NULL), args, uCRef<int>(0), ::STRINGS[22/*""*/], &ret8), ret8);

    if (::g::Uno::String::op_Equality(searchPath, ::STRINGS[22/*""*/]))
        return (::g::Uno::Threading::Future1*)Bundle::Reject(Bundle_typeof()->MakeMethod(0/*Reject<byte[]>*/, ::TYPES[4/*byte[]*/], NULL), uString::Const("Argument 0 (bundle path) can not be undefined"));

    return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run(::g::Uno::Threading::Promise_typeof()->MakeType(::TYPES[4/*byte[]*/], NULL), uDelegate::New(::g::Uno::Func_typeof()->MakeType(::TYPES[4/*byte[]*/], NULL), (void*)Bundle__ReadBufferClosure__Invoke_fn, Bundle__ReadBufferClosure::New1(searchPath)));
}

// private static object ReadSync(Fuse.Scripting.Context c, object[] args) [static] :199
uObject* Bundle::ReadSync(::g::Fuse::Scripting::Context* c, uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);
        return Bundle::ReadSync1(filename);
    }

    return ::STRINGS[22/*""*/];
}

// public static string ReadSync(string filename) [static] :209
uString* Bundle::ReadSync1(uString* filename)
{
    try
    {
        ::g::Uno::IO::BundleFile* bundleFile;

        if (Bundle::TryGetBundleFile(filename, &bundleFile))
            return uPtr(bundleFile)->ReadAllText();

        return ::STRINGS[22/*""*/];
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        return ::STRINGS[22/*""*/];
    }
}

// private static Uno.Threading.Future<T> Reject<T>(string reason) [static] :112
::g::Uno::Threading::Future1* Bundle::Reject(uType* __type, uString* reason)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Threading.Promise<T>*/),
    };
    ::g::Uno::Threading::Promise* p = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(__types[0]);
    p->Reject(::g::Uno::Exception::New2(reason));
    return p;
}

// private static bool TryGetBundleFile(string sourcePath, Uno.IO.BundleFile& bundleFile) [static] :99
bool Bundle::TryGetBundleFile(uString* sourcePath, ::g::Uno::IO::BundleFile** bundleFile)
{
    ::g::Uno::IO::BundleFile* ret9;
    *bundleFile = NULL;
    uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(::g::Uno::IO::Bundle::AllFiles()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL)));

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum2), ::g::Uno::IDisposable_typeof()));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::g::Uno::Collections::IEnumerator_typeof())))
        {
            ::g::Uno::IO::BundleFile* bf = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL)), &ret9), ret9);

            if (::g::Uno::String::op_Equality(uPtr(bf)->SourcePath(), sourcePath))
            {
                *bundleFile = bf;
                return true;
            }
        }
    }

    return false;
}
// }

// /usr/local/share/uno/Packages/FuseJS/1.3.1/Environment.uno
// ----------------------------------------------------------

// public sealed class Environment :51
// {
static void Environment_build(uType* type)
{
    ::STRINGS[14] = uString::Const("FuseJS/Environment");
    ::STRINGS[15] = uString::Const("android");
    ::STRINGS[16] = uString::Const("ios");
    ::STRINGS[17] = uString::Const("mobile");
    ::STRINGS[18] = uString::Const("desktop");
    ::STRINGS[19] = uString::Const("preview");
    ::STRINGS[20] = uString::Const("dotnet");
    ::STRINGS[21] = uString::Const("mobileOSVersion");
    ::STRINGS[22] = uString::Const("");
    ::TYPES[5] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), NULL);
    ::TYPES[6] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&Environment::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* Environment_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Environment);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("FuseJS.Environment", options);
    type->fp_build_ = Environment_build;
    type->fp_ctor_ = (void*)Environment__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public Environment() :55
void Environment__ctor_2_fn(Environment* __this)
{
    __this->ctor_2();
}

// private static string GetMobileOSVersion() :68
void Environment__GetMobileOSVersion_fn(uString** __retval)
{
    *__retval = Environment::GetMobileOSVersion();
}

// public Environment New() :55
void Environment__New2_fn(Environment** __retval)
{
    *__retval = Environment::New2();
}

uSStrong<Environment*> Environment::_instance_;

// public Environment() [instance] :55
void Environment::ctor_2()
{
    ::g::Fuse::Scripting::NativeProperty* ret2;
    ::g::Fuse::Scripting::NativeProperty* ret3;
    ::g::Fuse::Scripting::NativeProperty* ret4;
    ::g::Fuse::Scripting::NativeProperty* ret5;
    ::g::Fuse::Scripting::NativeProperty* ret6;
    ::g::Fuse::Scripting::NativeProperty* ret7;
    ctor_1();

    if (Environment::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(Environment::_instance_ = this, ::STRINGS[14/*"FuseJS/Envi...*/]);
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[5/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[15/*"android"*/], uCRef(false), &ret2), ret2));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[5/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[16/*"ios"*/], uCRef(true), &ret3), ret3));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[5/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[17/*"mobile"*/], uCRef(true), &ret4), ret4));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[5/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[18/*"desktop"*/], uCRef(false), &ret5), ret5));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[5/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[19/*"preview"*/], uCRef(false), &ret6), ret6));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[5/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[20/*"dotnet"*/], uCRef(false), &ret7), ret7));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[6/*Fuse.Scripting.NativeProperty<string, string>*/], ::STRINGS[21/*"mobileOSVer...*/], uDelegate::New(::TYPES[7/*Uno.Func<string>*/], (void*)Environment__GetMobileOSVersion_fn), NULL, NULL));
}

// private static string GetMobileOSVersion() [static] :68
uString* Environment::GetMobileOSVersion()
{
    return uPtr(::g::Fuse::iOSDevice::OperatingSystemVersion())->ToString();
    return ::STRINGS[22/*""*/];
}

// public Environment New() [static] :55
Environment* Environment::New2()
{
    Environment* obj1 = (Environment*)uNew(Environment_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseJS/1.3.1/Bundle.uno
// -----------------------------------------------------

// private sealed class Bundle.ExtractClosure :231
// {
static void Bundle__ExtractClosure_build(uType* type)
{
    type->SetDependencies(
        ::g::FuseJS::Bundle_typeof(),
        ::g::Uno::IO::Path_typeof());
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(Bundle__ExtractClosure, _destPath), 0,
        ::g::Uno::Bool_typeof(), offsetof(Bundle__ExtractClosure, _overwrite), 0,
        ::g::Uno::String_typeof(), offsetof(Bundle__ExtractClosure, _searchPath), 0);
}

uType* Bundle__ExtractClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(Bundle__ExtractClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("FuseJS.Bundle.ExtractClosure", options);
    type->fp_build_ = Bundle__ExtractClosure_build;
    return type;
}

// public ExtractClosure(string searchPath, string destinationPath, bool overwriteIfExists) :236
void Bundle__ExtractClosure__ctor__fn(Bundle__ExtractClosure* __this, uString* searchPath, uString* destinationPath, bool* overwriteIfExists)
{
    __this->ctor_(searchPath, destinationPath, *overwriteIfExists);
}

// public string Invoke() :242
void Bundle__ExtractClosure__Invoke_fn(Bundle__ExtractClosure* __this, uString** __retval)
{
    *__retval = __this->Invoke();
}

// public ExtractClosure New(string searchPath, string destinationPath, bool overwriteIfExists) :236
void Bundle__ExtractClosure__New1_fn(uString* searchPath, uString* destinationPath, bool* overwriteIfExists, Bundle__ExtractClosure** __retval)
{
    *__retval = Bundle__ExtractClosure::New1(searchPath, destinationPath, *overwriteIfExists);
}

// public ExtractClosure(string searchPath, string destinationPath, bool overwriteIfExists) [instance] :236
void Bundle__ExtractClosure::ctor_(uString* searchPath, uString* destinationPath, bool overwriteIfExists)
{
    _searchPath = searchPath;
    _destPath = destinationPath;
    _overwrite = overwriteIfExists;
}

// public string Invoke() [instance] :242
uString* Bundle__ExtractClosure::Invoke()
{
    ::g::Uno::IO::BundleFile* bfile;

    if (::g::FuseJS::Bundle::TryGetBundleFile(_searchPath, &bfile))
    {
        if (_overwrite || !::g::Uno::IO::File::Exists(_destPath))
        {
            ::g::Uno::IO::Directory::CreateDirectory(::g::Uno::IO::Path::GetDirectoryName(_destPath));
            ::g::Uno::IO::File::WriteAllBytes(_destPath, uPtr(bfile)->ReadAllBytes());
        }
    }

    return _destPath;
}

// public ExtractClosure New(string searchPath, string destinationPath, bool overwriteIfExists) [static] :236
Bundle__ExtractClosure* Bundle__ExtractClosure::New1(uString* searchPath, uString* destinationPath, bool overwriteIfExists)
{
    Bundle__ExtractClosure* obj1 = (Bundle__ExtractClosure*)uNew(Bundle__ExtractClosure_typeof());
    obj1->ctor_(searchPath, destinationPath, overwriteIfExists);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseJS/1.3.1/FileReader.uno
// ---------------------------------------------------------

// private sealed class FileReaderImpl.FileReadCommand :14
// {
static void FileReaderImpl__FileReadCommand_build(uType* type)
{
    ::STRINGS[23] = uString::Const("PNG");
    ::STRINGS[24] = uString::Const("png");
    ::STRINGS[25] = uString::Const("jpeg");
    ::STRINGS[26] = uString::Const("data:image/");
    ::STRINGS[27] = uString::Const(";base64,");
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(FileReaderImpl__FileReadCommand, _path), 0);
}

uType* FileReaderImpl__FileReadCommand_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(FileReaderImpl__FileReadCommand);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("FuseJS.FileReaderImpl.FileReadCommand", options);
    type->fp_build_ = FileReaderImpl__FileReadCommand_build;
    return type;
}

// public FileReadCommand(string path) :17
void FileReaderImpl__FileReadCommand__ctor__fn(FileReaderImpl__FileReadCommand* __this, uString* path)
{
    __this->ctor_(path);
}

// public FileReadCommand New(string path) :17
void FileReaderImpl__FileReadCommand__New1_fn(uString* path, FileReaderImpl__FileReadCommand** __retval)
{
    *__retval = FileReaderImpl__FileReadCommand::New1(path);
}

// public string ReadAsDataURL() :25
void FileReaderImpl__FileReadCommand__ReadAsDataURL_fn(FileReaderImpl__FileReadCommand* __this, uString** __retval)
{
    *__retval = __this->ReadAsDataURL();
}

// public string ReadAsText() :21
void FileReaderImpl__FileReadCommand__ReadAsText_fn(FileReaderImpl__FileReadCommand* __this, uString** __retval)
{
    *__retval = __this->ReadAsText();
}

// public FileReadCommand(string path) [instance] :17
void FileReaderImpl__FileReadCommand::ctor_(uString* path)
{
    _path = path;
}

// public string ReadAsDataURL() [instance] :25
uString* FileReaderImpl__FileReadCommand::ReadAsDataURL()
{
    uArray* file = ::g::Uno::IO::File::ReadAllBytes(_path);
    uString* type = ::g::Uno::String::EndsWith(uPtr(::g::Uno::String::ToUpper(uPtr(_path))), ::STRINGS[23/*"PNG"*/]) ? ::STRINGS[24/*"png"*/] : ::STRINGS[25/*"jpeg"*/];
    uString* base64 = ::g::Uno::Text::Base64::GetString(file);
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[26/*"data:image/"*/], type), ::STRINGS[27/*";base64,"*/]), base64);
}

// public string ReadAsText() [instance] :21
uString* FileReaderImpl__FileReadCommand::ReadAsText()
{
    return ::g::Uno::IO::File::ReadAllText(_path);
}

// public FileReadCommand New(string path) [static] :17
FileReaderImpl__FileReadCommand* FileReaderImpl__FileReadCommand::New1(uString* path)
{
    FileReaderImpl__FileReadCommand* obj1 = (FileReaderImpl__FileReadCommand*)uNew(FileReaderImpl__FileReadCommand_typeof());
    obj1->ctor_(path);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseJS/1.3.1/FileReader.uno
// ---------------------------------------------------------

// public sealed class FileReaderImpl :12
// {
static void FileReaderImpl_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&FileReaderImpl::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* FileReaderImpl_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(FileReaderImpl);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("FuseJS.FileReaderImpl", options);
    type->fp_build_ = FileReaderImpl_build;
    type->fp_ctor_ = (void*)FileReaderImpl__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public FileReaderImpl() :35
void FileReaderImpl__ctor_2_fn(FileReaderImpl* __this)
{
    __this->ctor_2();
}

// public FileReaderImpl New() :35
void FileReaderImpl__New2_fn(FileReaderImpl** __retval)
{
    *__retval = FileReaderImpl::New2();
}

// private static Uno.Threading.Future<string> readAsDataURL(object[] args) :43
void FileReaderImpl__readAsDataURL_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = FileReaderImpl::readAsDataURL(args);
}

// private static Uno.Threading.Future<string> readAsText(object[] args) :49
void FileReaderImpl__readAsText_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = FileReaderImpl::readAsText(args);
}

uSStrong<FileReaderImpl*> FileReaderImpl::_instance_;

// public FileReaderImpl() [instance] :35
void FileReaderImpl::ctor_2()
{
    ctor_1();

    if (FileReaderImpl::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(FileReaderImpl::_instance_ = this, uString::Const("FuseJS/FileReaderImpl"));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[8/*Fuse.Scripting.NativePromise<string, string>*/], uString::Const("readAsDataURL"), uDelegate::New(::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::TYPES[1/*string*/], NULL), (void*)FileReaderImpl__readAsDataURL_fn), NULL));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[8/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[29/*"readAsText"*/], uDelegate::New(::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::TYPES[1/*string*/], NULL), (void*)FileReaderImpl__readAsText_fn), NULL));
}

// public FileReaderImpl New() [static] :35
FileReaderImpl* FileReaderImpl::New2()
{
    FileReaderImpl* obj1 = (FileReaderImpl*)uNew(FileReaderImpl_typeof());
    obj1->ctor_2();
    return obj1;
}

// private static Uno.Threading.Future<string> readAsDataURL(object[] args) [static] :43
::g::Uno::Threading::Future1* FileReaderImpl::readAsDataURL(uArray* args)
{
    uString* path = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);
    return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run(::g::Uno::Threading::Promise_typeof()->MakeType(::TYPES[1/*string*/], NULL), uDelegate::New(::TYPES[7/*Uno.Func<string>*/], (void*)FileReaderImpl__FileReadCommand__ReadAsDataURL_fn, FileReaderImpl__FileReadCommand::New1(path)));
}

// private static Uno.Threading.Future<string> readAsText(object[] args) [static] :49
::g::Uno::Threading::Future1* FileReaderImpl::readAsText(uArray* args)
{
    uString* path = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);
    return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run(::g::Uno::Threading::Promise_typeof()->MakeType(::TYPES[1/*string*/], NULL), uDelegate::New(::TYPES[7/*Uno.Func<string>*/], (void*)FileReaderImpl__FileReadCommand__ReadAsText_fn, FileReaderImpl__FileReadCommand::New1(path)));
}
// }

// /usr/local/share/uno/Packages/FuseJS/1.3.1/Globals.uno
// ------------------------------------------------------

// public sealed class Globals :8
// {
static void Globals_build(uType* type)
{
    ::STRINGS[28] = uString::Const("FuseJS/Globals");
    ::STRINGS[29] = uString::Const("readAsText");
    ::STRINGS[30] = uString::Const("Globals.readAsText(): Exactly one argument expected");
    ::STRINGS[31] = uString::Const("Globals.readAsText(): Argument must be string");
    ::STRINGS[32] = uString::Const("Globals.readAsText(): Global resource file '");
    ::STRINGS[33] = uString::Const("' not found");
    ::TYPES[8] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[9] = ::g::Fuse::Scripting::ResultFactory_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[10] = ::g::Uno::UX::BundleFileSource_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[11] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&Globals::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* Globals_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Globals);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("FuseJS.Globals", options);
    type->fp_build_ = Globals_build;
    type->fp_ctor_ = (void*)Globals__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public Globals() :11
void Globals__ctor_2_fn(Globals* __this)
{
    __this->ctor_2();
}

// private static bool FileSourceAcceptor(object obj) :35
void Globals__FileSourceAcceptor_fn(uObject* obj, bool* __retval)
{
    *__retval = Globals::FileSourceAcceptor(obj);
}

// public Globals New() :11
void Globals__New2_fn(Globals** __retval)
{
    *__retval = Globals::New2();
}

// private static string readAsText(object[] args) :18
void Globals__readAsText_fn(uArray* args, uString** __retval)
{
    *__retval = Globals::readAsText(args);
}

uSStrong<Globals*> Globals::_instance_;

// public Globals() [instance] :11
void Globals::ctor_2()
{
    ctor_1();

    if (Globals::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(Globals::_instance_ = this, ::STRINGS[28/*"FuseJS/Glob...*/]);
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New2(::TYPES[8/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[29/*"readAsText"*/], uDelegate::New(::TYPES[9/*Fuse.Scripting.ResultFactory<string>*/], (void*)Globals__readAsText_fn), NULL));
}

// private static bool FileSourceAcceptor(object obj) [static] :35
bool Globals::FileSourceAcceptor(uObject* obj)
{
    return uIs(obj, ::TYPES[10/*Uno.UX.BundleFileSource*/]);
}

// public Globals New() [static] :11
Globals* Globals::New2()
{
    Globals* obj1 = (Globals*)uNew(Globals_typeof());
    obj1->ctor_2();
    return obj1;
}

// private static string readAsText(object[] args) [static] :18
uString* Globals::readAsText(uArray* args)
{
    if (uPtr(args)->Length() != 1)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[30/*"Globals.rea...*/]));

    uString* key = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);

    if (args->Length() != 1)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[31/*"Globals.rea...*/]));

    uObject* res;

    if (::g::Uno::UX::Resource::TryFindGlobal(key, uDelegate::New(::TYPES[11/*Uno.Predicate<object>*/], (void*)Globals__FileSourceAcceptor_fn), &res))
    {
        ::g::Uno::UX::BundleFileSource* fs = uCast< ::g::Uno::UX::BundleFileSource*>(res, ::TYPES[10/*Uno.UX.BundleFileSource*/]);
        return uPtr(fs)->ReadAllText();
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[32/*"Globals.rea...*/], key), ::STRINGS[33/*"' not found"*/])));
}
// }

// /usr/local/share/uno/Packages/FuseJS/1.3.1/Latin1Helpers.uno
// ------------------------------------------------------------

// internal static class Latin1Helpers :7
// {
static void Latin1Helpers_build(uType* type)
{
    ::STRINGS[34] = uString::Const("The string to be encoded contains characters outside of the Latin1 range.");
    ::TYPES[12] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[4] = ::g::Uno::Byte_typeof()->Array();
}

uClassType* Latin1Helpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseJS.Latin1Helpers", options);
    type->fp_build_ = Latin1Helpers_build;
    return type;
}

// public static string DecodeLatin1(string base64Str) :9
void Latin1Helpers__DecodeLatin1_fn(uString* base64Str, uString** __retval)
{
    *__retval = Latin1Helpers::DecodeLatin1(base64Str);
}

// public static string EncodeLatin1(string str) :22
void Latin1Helpers__EncodeLatin1_fn(uString* str, uString** __retval)
{
    *__retval = Latin1Helpers::EncodeLatin1(str);
}

// public static string DecodeLatin1(string base64Str) [static] :9
uString* Latin1Helpers::DecodeLatin1(uString* base64Str)
{
    uArray* bytes = ::g::Uno::Text::Base64::GetBytes(base64Str);
    int len = uPtr(bytes)->Length();
    uArray* chars = uArray::New(::TYPES[12/*char[]*/], len);

    for (int i = 0; i < len; i++)
        uPtr(chars)->Item<uChar>(i) = (uChar)uPtr(bytes)->Item<uint8_t>(i);

    return uString::CharArray(chars);
}

// public static string EncodeLatin1(string str) [static] :22
uString* Latin1Helpers::EncodeLatin1(uString* str)
{
    uArray* bytes = uArray::New(::TYPES[4/*byte[]*/], uPtr(str)->Length());
    int len = str->Length();

    for (int i = 0; i < len; i++)
    {
        int c = (int)uPtr(str)->Item(i);

        if (c > 255)
            U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[34/*"The string ...*/]));

        uPtr(bytes)->Item<uint8_t>(i) = (uint8_t)c;
    }

    return ::g::Uno::Text::Base64::GetString(bytes);
}
// }

// /usr/local/share/uno/Packages/FuseJS/1.3.1/Lifecycle.uno
// --------------------------------------------------------

// public sealed class Lifecycle :97
// {
static void Lifecycle_build(uType* type)
{
    ::STRINGS[35] = uString::Const("enteringInteractive");
    ::STRINGS[36] = uString::Const("exitedInteractive");
    ::STRINGS[37] = uString::Const("enteringForeground");
    ::STRINGS[38] = uString::Const("enteringBackground");
    ::STRINGS[39] = uString::Const("stateChanged");
    ::STRINGS[40] = uString::Const("FuseJS/Lifecycle");
    ::STRINGS[41] = uString::Const("onEnteringInteractive");
    ::STRINGS[42] = uString::Const("onEnteringForeground");
    ::STRINGS[43] = uString::Const("onEnteringBackground");
    ::STRINGS[44] = uString::Const("onExitedInteractive");
    ::STRINGS[45] = uString::Const("state");
    ::STRINGS[46] = uString::Const("BACKGROUND");
    ::STRINGS[47] = uString::Const("FOREGROUND");
    ::STRINGS[48] = uString::Const("INTERACTIVE");
    ::TYPES[13] = uObject_typeof()->Array();
    ::TYPES[14] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), NULL);
    ::TYPES[15] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::Int_typeof(), NULL);
    ::TYPES[16] = ::g::Fuse::Scripting::ValueConverter_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), NULL);
    ::TYPES[17] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(12,
        ::TYPES[14/*Fuse.Scripting.NativeProperty<int, int>*/], offsetof(Lifecycle, _background), 0,
        ::TYPES[14/*Fuse.Scripting.NativeProperty<int, int>*/], offsetof(Lifecycle, _foreground), 0,
        ::TYPES[14/*Fuse.Scripting.NativeProperty<int, int>*/], offsetof(Lifecycle, _interactive), 0,
        ::TYPES[14/*Fuse.Scripting.NativeProperty<int, int>*/], offsetof(Lifecycle, _state), 0,
        type, (uintptr_t)&Lifecycle::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* Lifecycle_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeEventEmitterModule_typeof();
    options.FieldCount = 17;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Lifecycle);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("FuseJS.Lifecycle", options);
    type->fp_build_ = Lifecycle_build;
    type->fp_ctor_ = (void*)Lifecycle__New3_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public Lifecycle() :106
void Lifecycle__ctor_3_fn(Lifecycle* __this)
{
    __this->ctor_3();
}

// private static int Converter(Fuse.Scripting.Context context, int state) :275
void Lifecycle__Converter_fn(::g::Fuse::Scripting::Context* context, int* state, int* __retval)
{
    *__retval = Lifecycle::Converter(context, *state);
}

// private static int GetApplicationStateBackground() :156
void Lifecycle__GetApplicationStateBackground_fn(int* __retval)
{
    *__retval = Lifecycle::GetApplicationStateBackground();
}

// private static int GetApplicationStateForeground() :164
void Lifecycle__GetApplicationStateForeground_fn(int* __retval)
{
    *__retval = Lifecycle::GetApplicationStateForeground();
}

// private static int GetApplicationStateInteractive() :172
void Lifecycle__GetApplicationStateInteractive_fn(int* __retval)
{
    *__retval = Lifecycle::GetApplicationStateInteractive();
}

// private static int GetCurrentState() :188
void Lifecycle__GetCurrentState_fn(int* __retval)
{
    *__retval = Lifecycle::GetCurrentState();
}

// public Lifecycle New() :106
void Lifecycle__New3_fn(Lifecycle** __retval)
{
    *__retval = Lifecycle::New3();
}

// private void OnEnteringBackground(Fuse.Platform.ApplicationState newState) :253
void Lifecycle__OnEnteringBackground_fn(Lifecycle* __this, int* newState)
{
    __this->OnEnteringBackground(*newState);
}

// private void OnEnteringForeground(Fuse.Platform.ApplicationState newState) :205
void Lifecycle__OnEnteringForeground_fn(Lifecycle* __this, int* newState)
{
    __this->OnEnteringForeground(*newState);
}

// private void OnEnteringInteractive(Fuse.Platform.ApplicationState newState) :221
void Lifecycle__OnEnteringInteractive_fn(Lifecycle* __this, int* newState)
{
    __this->OnEnteringInteractive(*newState);
}

// private void OnExitedInteractive(Fuse.Platform.ApplicationState newState) :237
void Lifecycle__OnExitedInteractive_fn(Lifecycle* __this, int* newState)
{
    __this->OnExitedInteractive(*newState);
}

// private void OnStateChanged(Fuse.Platform.ApplicationState newState) :270
void Lifecycle__OnStateChanged_fn(Lifecycle* __this, int* newState)
{
    __this->OnStateChanged(*newState);
}

uSStrong<Lifecycle*> Lifecycle::_instance_;

// public Lifecycle() [instance] :106
void Lifecycle::ctor_3()
{
    ctor_2(true, uArray::Init<uObject*>(::TYPES[13/*object[]*/], 5, ::STRINGS[35/*"enteringInt...*/], ::STRINGS[36/*"exitedInter...*/], ::STRINGS[37/*"enteringFor...*/], ::STRINGS[38/*"enteringBac...*/], ::STRINGS[39/*"stateChanged"*/]));

    if (Lifecycle::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(Lifecycle::_instance_ = this, ::STRINGS[40/*"FuseJS/Life...*/]);
    ::g::Fuse::Scripting::NativeEvent* onEnteringInteractive = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[41/*"onEnteringI...*/], true);
    ::g::Fuse::Scripting::NativeEvent* onEnteringForeground = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[42/*"onEnteringF...*/], true);
    ::g::Fuse::Scripting::NativeEvent* onEnteringBackground = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[43/*"onEnteringB...*/], true);
    ::g::Fuse::Scripting::NativeEvent* onExitedInteractive = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[44/*"onExitedInt...*/], true);
    On1(::STRINGS[35/*"enteringInt...*/], onEnteringInteractive);
    On1(::STRINGS[37/*"enteringFor...*/], onEnteringForeground);
    On1(::STRINGS[38/*"enteringBac...*/], onEnteringBackground);
    On1(::STRINGS[36/*"exitedInter...*/], onExitedInteractive);
    _state = ((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[14/*Fuse.Scripting.NativeProperty<int, int>*/], ::STRINGS[45/*"state"*/], uDelegate::New(::TYPES[15/*Uno.Func<int>*/], (void*)Lifecycle__GetCurrentState_fn), NULL, uDelegate::New(::TYPES[16/*Fuse.Scripting.ValueConverter<int, int>*/], (void*)Lifecycle__Converter_fn)));
    _background = ((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[14/*Fuse.Scripting.NativeProperty<int, int>*/], ::STRINGS[46/*"BACKGROUND"*/], uDelegate::New(::TYPES[15/*Uno.Func<int>*/], (void*)Lifecycle__GetApplicationStateBackground_fn), NULL, NULL));
    _foreground = ((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[14/*Fuse.Scripting.NativeProperty<int, int>*/], ::STRINGS[47/*"FOREGROUND"*/], uDelegate::New(::TYPES[15/*Uno.Func<int>*/], (void*)Lifecycle__GetApplicationStateForeground_fn), NULL, NULL));
    _interactive = ((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[14/*Fuse.Scripting.NativeProperty<int, int>*/], ::STRINGS[48/*"INTERACTIVE"*/], uDelegate::New(::TYPES[15/*Uno.Func<int>*/], (void*)Lifecycle__GetApplicationStateInteractive_fn), NULL, NULL));
    AddMember(_state);
    AddMember(onEnteringInteractive);
    AddMember(onEnteringForeground);
    AddMember(onEnteringBackground);
    AddMember(onExitedInteractive);
    AddMember(_background);
    AddMember(_foreground);
    AddMember(_interactive);
    ::g::Fuse::Platform::Lifecycle::add_EnteringForeground(uDelegate::New(::TYPES[17/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)Lifecycle__OnEnteringForeground_fn, this));
    ::g::Fuse::Platform::Lifecycle::add_EnteringInteractive(uDelegate::New(::TYPES[17/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)Lifecycle__OnEnteringInteractive_fn, this));
    ::g::Fuse::Platform::Lifecycle::add_ExitedInteractive(uDelegate::New(::TYPES[17/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)Lifecycle__OnExitedInteractive_fn, this));
    ::g::Fuse::Platform::Lifecycle::add_EnteringBackground(uDelegate::New(::TYPES[17/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)Lifecycle__OnEnteringBackground_fn, this));
    ::g::Fuse::Platform::Lifecycle::add_EnteringForeground(uDelegate::New(::TYPES[17/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)Lifecycle__OnStateChanged_fn, this));
    ::g::Fuse::Platform::Lifecycle::add_EnteringInteractive(uDelegate::New(::TYPES[17/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)Lifecycle__OnStateChanged_fn, this));
    ::g::Fuse::Platform::Lifecycle::add_ExitedInteractive(uDelegate::New(::TYPES[17/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)Lifecycle__OnStateChanged_fn, this));
    ::g::Fuse::Platform::Lifecycle::add_EnteringBackground(uDelegate::New(::TYPES[17/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)Lifecycle__OnStateChanged_fn, this));
}

// private void OnEnteringBackground(Fuse.Platform.ApplicationState newState) [instance] :253
void Lifecycle::OnEnteringBackground(int newState)
{
    Emit(uArray::Init<uObject*>(::TYPES[13/*object[]*/], 1, ::STRINGS[38/*"enteringBac...*/]));
}

// private void OnEnteringForeground(Fuse.Platform.ApplicationState newState) [instance] :205
void Lifecycle::OnEnteringForeground(int newState)
{
    Emit(uArray::Init<uObject*>(::TYPES[13/*object[]*/], 1, ::STRINGS[37/*"enteringFor...*/]));
}

// private void OnEnteringInteractive(Fuse.Platform.ApplicationState newState) [instance] :221
void Lifecycle::OnEnteringInteractive(int newState)
{
    Emit(uArray::Init<uObject*>(::TYPES[13/*object[]*/], 1, ::STRINGS[35/*"enteringInt...*/]));
}

// private void OnExitedInteractive(Fuse.Platform.ApplicationState newState) [instance] :237
void Lifecycle::OnExitedInteractive(int newState)
{
    Emit(uArray::Init<uObject*>(::TYPES[13/*object[]*/], 1, ::STRINGS[36/*"exitedInter...*/]));
}

// private void OnStateChanged(Fuse.Platform.ApplicationState newState) [instance] :270
void Lifecycle::OnStateChanged(int newState)
{
    Emit(uArray::Init<uObject*>(::TYPES[13/*object[]*/], 2, ::STRINGS[39/*"stateChanged"*/], uBox<int>(::g::Uno::Int_typeof(), newState)));
}

// private static int Converter(Fuse.Scripting.Context context, int state) [static] :275
int Lifecycle::Converter(::g::Fuse::Scripting::Context* context, int state)
{
    return state;
}

// private static int GetApplicationStateBackground() [static] :156
int Lifecycle::GetApplicationStateBackground()
{
    return 1;
}

// private static int GetApplicationStateForeground() [static] :164
int Lifecycle::GetApplicationStateForeground()
{
    return 2;
}

// private static int GetApplicationStateInteractive() [static] :172
int Lifecycle::GetApplicationStateInteractive()
{
    return 3;
}

// private static int GetCurrentState() [static] :188
int Lifecycle::GetCurrentState()
{
    return ::g::Fuse::Platform::Lifecycle::State();
}

// public Lifecycle New() [static] :106
Lifecycle* Lifecycle::New3()
{
    Lifecycle* obj1 = (Lifecycle*)uNew(Lifecycle_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseJS/1.3.1/UserEvents.uno
// ---------------------------------------------------------

// internal sealed class RaiseEvent :8
// {
static void RaiseEvent_build(uType* type)
{
    ::STRINGS[49] = uString::Const("Cannot find message with name: ");
    ::STRINGS[50] = uString::Const("/usr/local/share/uno/Packages/FuseJS/1.3.1/UserEvents.uno");
    ::STRINGS[51] = uString::Const("Raise");
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Uno::UX::Selector_typeof(),
        ::g::Fuse::UserEventDispatch_typeof());
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL), offsetof(RaiseEvent, Args), 0,
        ::g::Uno::String_typeof(), offsetof(RaiseEvent, Name), 0,
        ::g::Fuse::Node_typeof(), offsetof(RaiseEvent, Source), 0);
}

uType* RaiseEvent_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(RaiseEvent);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("FuseJS.RaiseEvent", options);
    type->fp_build_ = RaiseEvent_build;
    type->fp_ctor_ = (void*)RaiseEvent__New1_fn;
    return type;
}

// public generated RaiseEvent() :8
void RaiseEvent__ctor__fn(RaiseEvent* __this)
{
    __this->ctor_();
}

// public generated RaiseEvent New() :8
void RaiseEvent__New1_fn(RaiseEvent** __retval)
{
    *__retval = RaiseEvent::New1();
}

// public void Raise() :15
void RaiseEvent__Raise_fn(RaiseEvent* __this)
{
    __this->Raise();
}

// public generated RaiseEvent() [instance] :8
void RaiseEvent::ctor_()
{
}

// public void Raise() [instance] :15
void RaiseEvent::Raise()
{
    ::g::Fuse::UserEventDispatch* dispatch = ::g::Fuse::UserEventDispatch::GetByName(::g::Uno::UX::Selector__op_Implicit(Name));

    if (dispatch == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(::STRINGS[49/*"Cannot find...*/], Name), this, ::STRINGS[50/*"/usr/local/...*/], 20, ::STRINGS[51/*"Raise"*/], NULL);
        return;
    }

    uPtr(dispatch)->DirectRaise(Source, Args);
}

// public generated RaiseEvent New() [static] :8
RaiseEvent* RaiseEvent::New1()
{
    RaiseEvent* obj1 = (RaiseEvent*)uNew(RaiseEvent_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseJS/1.3.1/Bundle.uno
// -----------------------------------------------------

// private sealed class Bundle.ReadBufferClosure :272
// {
static void Bundle__ReadBufferClosure_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::Byte_typeof()->Array();
    type->SetDependencies(
        ::g::FuseJS::Bundle_typeof());
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(Bundle__ReadBufferClosure, _filename), 0);
}

uType* Bundle__ReadBufferClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Bundle__ReadBufferClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("FuseJS.Bundle.ReadBufferClosure", options);
    type->fp_build_ = Bundle__ReadBufferClosure_build;
    return type;
}

// public ReadBufferClosure(string filename) :276
void Bundle__ReadBufferClosure__ctor__fn(Bundle__ReadBufferClosure* __this, uString* filename)
{
    __this->ctor_(filename);
}

// public byte[] Invoke() :280
void Bundle__ReadBufferClosure__Invoke_fn(Bundle__ReadBufferClosure* __this, uArray** __retval)
{
    *__retval = __this->Invoke();
}

// public ReadBufferClosure New(string filename) :276
void Bundle__ReadBufferClosure__New1_fn(uString* filename, Bundle__ReadBufferClosure** __retval)
{
    *__retval = Bundle__ReadBufferClosure::New1(filename);
}

// public ReadBufferClosure(string filename) [instance] :276
void Bundle__ReadBufferClosure::ctor_(uString* filename)
{
    _filename = filename;
}

// public byte[] Invoke() [instance] :280
uArray* Bundle__ReadBufferClosure::Invoke()
{
    ::g::Uno::IO::BundleFile* bfile;

    if (::g::FuseJS::Bundle::TryGetBundleFile(_filename, &bfile))
        return uPtr(bfile)->ReadAllBytes();

    return uArray::Init<int>(::TYPES[4/*byte[]*/], 0);
}

// public ReadBufferClosure New(string filename) [static] :276
Bundle__ReadBufferClosure* Bundle__ReadBufferClosure::New1(uString* filename)
{
    Bundle__ReadBufferClosure* obj1 = (Bundle__ReadBufferClosure*)uNew(Bundle__ReadBufferClosure_typeof());
    obj1->ctor_(filename);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseJS/1.3.1/Bundle.uno
// -----------------------------------------------------

// private sealed class Bundle.ReadClosure :257
// {
static void Bundle__ReadClosure_build(uType* type)
{
    type->SetDependencies(
        ::g::FuseJS::Bundle_typeof());
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(Bundle__ReadClosure, _filename), 0);
}

uType* Bundle__ReadClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Bundle__ReadClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("FuseJS.Bundle.ReadClosure", options);
    type->fp_build_ = Bundle__ReadClosure_build;
    return type;
}

// public ReadClosure(string filename) :261
void Bundle__ReadClosure__ctor__fn(Bundle__ReadClosure* __this, uString* filename)
{
    __this->ctor_(filename);
}

// public string Invoke() :266
void Bundle__ReadClosure__Invoke_fn(Bundle__ReadClosure* __this, uString** __retval)
{
    *__retval = __this->Invoke();
}

// public ReadClosure New(string filename) :261
void Bundle__ReadClosure__New1_fn(uString* filename, Bundle__ReadClosure** __retval)
{
    *__retval = Bundle__ReadClosure::New1(filename);
}

// public ReadClosure(string filename) [instance] :261
void Bundle__ReadClosure::ctor_(uString* filename)
{
    _filename = filename;
}

// public string Invoke() [instance] :266
uString* Bundle__ReadClosure::Invoke()
{
    return ::g::FuseJS::Bundle::ReadSync1(_filename);
}

// public ReadClosure New(string filename) [static] :261
Bundle__ReadClosure* Bundle__ReadClosure::New1(uString* filename)
{
    Bundle__ReadClosure* obj1 = (Bundle__ReadClosure*)uNew(Bundle__ReadClosure_typeof());
    obj1->ctor_(filename);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/FuseJS/1.3.1/UserEvents.uno
// ---------------------------------------------------------

// public sealed class UserEvents :30
// {
static void UserEvents_build(uType* type)
{
    ::STRINGS[52] = uString::Const("FuseJS/UserEvents");
    ::STRINGS[53] = uString::Const("raise");
    ::STRINGS[54] = uString::Const("The FuseJS/UserEvents `Raise` function is deprecated. Use the `object.raise` on a named event instead.");
    ::STRINGS[50] = uString::Const("/usr/local/share/uno/Packages/FuseJS/1.3.1/UserEvents.uno");
    ::STRINGS[51] = uString::Const("Raise");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[18] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[19] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::TYPES[1/*string*/], uObject_typeof(), NULL);
    ::TYPES[20] = ::g::Uno::Action_typeof();
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&UserEvents::_instance_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&UserEvents::_warn_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* UserEvents_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(UserEvents);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("FuseJS.UserEvents", options);
    type->fp_build_ = UserEvents_build;
    type->fp_ctor_ = (void*)UserEvents__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public UserEvents() :33
void UserEvents__ctor_2_fn(UserEvents* __this)
{
    __this->ctor_2();
}

// public UserEvents New() :33
void UserEvents__New2_fn(UserEvents** __retval)
{
    *__retval = UserEvents::New2();
}

// public static object Raise(Fuse.Scripting.Context context, object[] args) :46
void UserEvents__Raise_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = UserEvents::Raise(context, args);
}

uSStrong<UserEvents*> UserEvents::_instance_;
bool UserEvents::_warn_;

// public UserEvents() [instance] :33
void UserEvents::ctor_2()
{
    ctor_1();

    if (UserEvents::_instance_ != NULL)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(UserEvents::_instance_ = this, ::STRINGS[52/*"FuseJS/User...*/]);
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[53/*"raise"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)UserEvents__Raise_fn)));
}

// public UserEvents New() [static] :33
UserEvents* UserEvents::New2()
{
    UserEvents* obj4 = (UserEvents*)uNew(UserEvents_typeof());
    obj4->ctor_2();
    return obj4;
}

// public static object Raise(Fuse.Scripting.Context context, object[] args) [static] :46
uObject* UserEvents::Raise(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (!UserEvents::_warn_)
    {
        ::g::Fuse::Diagnostics::Deprecated(::STRINGS[54/*"The FuseJS/...*/], context, ::STRINGS[50/*"/usr/local/...*/], 51, ::STRINGS[51/*"Raise"*/]);
        UserEvents::_warn_ = true;
    }

    uString* eventName = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);
    ::g::Uno::Collections::Dictionary* postArgs = NULL;
    ::g::Fuse::Scripting::Object* p = (args->Length() > 1) ? uAs< ::g::Fuse::Scripting::Object*>(args->Strong<uObject*>(1), ::TYPES[18/*Fuse.Scripting.Object*/]) : NULL;

    if (p != NULL)
    {
        uArray* keys = uPtr(p)->Keys();
        postArgs = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[19/*Uno.Collections.Dictionary<string, object>*/]);

        for (int index2 = 0, length3 = uPtr(keys)->Length(); index2 < length3; ++index2)
        {
            uString* key = uPtr(keys)->Strong<uString*>(index2);
            ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(postArgs), key, uPtr(p)->Item(key));
        }
    }

    ::g::FuseJS::RaiseEvent* re = ::g::FuseJS::RaiseEvent::New1();
    re->Source = NULL;
    re->Name = eventName;
    re->Args = postArgs;
    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[20/*Uno.Action*/], (void*)::g::FuseJS::RaiseEvent__Raise_fn, re));
    return NULL;
}
// }

}} // ::g::FuseJS
