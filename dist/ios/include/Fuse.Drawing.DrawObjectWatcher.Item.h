// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.3.1/DrawObjectWatcher.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct DrawObjectWatcher__Item;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// private sealed class DrawObjectWatcher.Item :23
// {
uType* DrawObjectWatcher__Item_typeof();
void DrawObjectWatcher__Item__ctor__fn(DrawObjectWatcher__Item* __this);
void DrawObjectWatcher__Item__New1_fn(DrawObjectWatcher__Item** __retval);

struct DrawObjectWatcher__Item : uObject
{
    bool Dirty;
    uStrong< ::g::Uno::UX::PropertyObject*> DrawObject;
    bool Listening;
    bool Prepared;
    bool Used;

    void ctor_();
    static DrawObjectWatcher__Item* New1();
};
// }

}}} // ::g::Fuse::Drawing
