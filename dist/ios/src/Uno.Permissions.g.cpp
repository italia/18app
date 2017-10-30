// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Permissions.PlatformPermission.h>
#include <Uno.String.h>

namespace g{
namespace Uno{
namespace Permissions{

// /Users/r0xstation/Library/Application Support/Fusetools/Packages/Uno.Permissions/1.3.2/Permissions.uno
// ------------------------------------------------------------------------------------------------------

// public struct PlatformPermission :9
// {
static void PlatformPermission_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(PlatformPermission, Name), 0);
}

uStructType* PlatformPermission_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.Alignment = alignof(PlatformPermission);
    options.ValueSize = sizeof(PlatformPermission);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Permissions.PlatformPermission", options);
    type->fp_build_ = PlatformPermission_build;
    return type;
}
// }

}}} // ::g::Uno::Permissions
