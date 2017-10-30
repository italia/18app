// This file was generated based on /usr/local/share/uno/Packages/Uno.Net.Http/1.3.2/UriScheme.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct UriScheme;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// public sealed class UriScheme :13
// {
uType* UriScheme_typeof();
void UriScheme__get_DefaultPorts_fn(::g::Uno::Collections::Dictionary** __retval);
void UriScheme__GetSchemeType_fn(uString* scheme, int* __retval);
void UriScheme__IsHttpScheme_fn(uString* scheme, bool* __retval);

struct UriScheme : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _defaultPorts_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _defaultPorts() { return _defaultPorts_; }
    static uSStrong< ::g::Uno::Collections::List*> KnownInternetSchemes_;
    static uSStrong< ::g::Uno::Collections::List*>& KnownInternetSchemes() { return KnownInternetSchemes_; }
    static uSStrong< ::g::Uno::Collections::List*> KnownNonInternetSchemes_;
    static uSStrong< ::g::Uno::Collections::List*>& KnownNonInternetSchemes() { return KnownNonInternetSchemes_; }

    static int GetSchemeType(uString* scheme);
    static bool IsHttpScheme(uString* scheme);
    static ::g::Uno::Collections::Dictionary* DefaultPorts();
};
// }

}}}} // ::g::Uno::Net::Http
