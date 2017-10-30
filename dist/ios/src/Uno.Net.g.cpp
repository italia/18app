// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <errno.h>
#include <Uno.Net.NetworkHelpers.h>
#include <Uno.String.h>

namespace g{
namespace Uno{
namespace Net{

// /usr/local/share/uno/Packages/Uno.Net.Sockets/1.3.2/NetworkHelpers.uno
// ----------------------------------------------------------------------

// internal sealed extern class NetworkHelpers :8
// {
static void NetworkHelpers_build(uType* type)
{
}

uType* NetworkHelpers_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(NetworkHelpers);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.NetworkHelpers", options);
    type->fp_build_ = NetworkHelpers_build;
    return type;
}

// public static extern string GetError() :27
void NetworkHelpers__GetError_fn(uString** __retval)
{
    *__retval = NetworkHelpers::GetError();
}

// public static extern string GetError() [static] :27
uString* NetworkHelpers::GetError()
{
    return uString::Utf8(strerror(errno));
}
// }

}}} // ::g::Uno::Net
