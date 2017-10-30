// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/SystemFont.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Font.h>
namespace g{namespace Fuse{struct SystemFont;}}

namespace g{
namespace Fuse{

// public sealed class SystemFont :36
// {
uType* SystemFont_typeof();
void SystemFont__ctor_2_fn(SystemFont* __this, uString* family, int* style, int* weight);
void SystemFont__New3_fn(uString* family, int* style, int* weight, SystemFont** __retval);

struct SystemFont : ::g::Fuse::Font
{
    void ctor_2(uString* family, int style, int weight);
    static SystemFont* New3(uString* family, int style, int weight);
};
// }

}} // ::g::Fuse
