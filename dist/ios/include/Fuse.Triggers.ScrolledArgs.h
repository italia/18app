// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/1.3.1/Triggers/Scrolled.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{namespace Triggers{struct ScrolledArgs;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class ScrolledArgs :8
// {
uType* ScrolledArgs_typeof();
void ScrolledArgs__ctor_1_fn(ScrolledArgs* __this);
void ScrolledArgs__New2_fn(ScrolledArgs** __retval);

struct ScrolledArgs : ::g::Uno::EventArgs
{
    void ctor_1();
    static ScrolledArgs* New2();
};
// }

}}} // ::g::Fuse::Triggers
