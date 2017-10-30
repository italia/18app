// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing/1.3.1/Brush.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Marshal.IConverter.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct BrushConverter;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// public sealed class BrushConverter :9
// {
struct BrushConverter_type : uType
{
    ::g::Fuse::Marshal__IConverter interface0;
};

BrushConverter_type* BrushConverter_typeof();
void BrushConverter__ctor__fn(BrushConverter* __this);
void BrushConverter__CanConvert_fn(BrushConverter* __this, uType* t, bool* __retval);
void BrushConverter__New1_fn(BrushConverter** __retval);
void BrushConverter__TryConvert_fn(BrushConverter* __this, uType* t, uObject* o, uObject** __retval);

struct BrushConverter : uObject
{
    void ctor_();
    bool CanConvert(uType* t);
    uObject* TryConvert(uType* t, uObject* o);
    static BrushConverter* New1();
};
// }

}}} // ::g::Fuse::Drawing
