// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.3.1/Shapes/Shape.Resources.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct Shape__ResourceWatcher;}}}

namespace g{
namespace Fuse{
namespace Controls{

// private sealed class Shape.ResourceWatcher :23
// {
uType* Shape__ResourceWatcher_typeof();
void Shape__ResourceWatcher__ctor__fn(Shape__ResourceWatcher* __this);
void Shape__ResourceWatcher__New1_fn(Shape__ResourceWatcher** __retval);

struct Shape__ResourceWatcher : uObject
{
    bool IsWatching;

    void ctor_();
    static Shape__ResourceWatcher* New1();
};
// }

}}} // ::g::Fuse::Controls
