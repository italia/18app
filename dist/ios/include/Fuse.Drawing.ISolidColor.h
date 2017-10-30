// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing/1.3.1/Brushes/SolidColor.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Drawing{

// public abstract interface ISolidColor :8
// {
uInterfaceType* ISolidColor_typeof();

struct ISolidColor
{
    void(*fp_get_Color)(uObject*, ::g::Uno::Float4*);
    static ::g::Uno::Float4 Color(const uInterface& __this);
};

}}} // ::g::Fuse::Drawing

#include <Uno.Float4.h>

namespace g{
namespace Fuse{
namespace Drawing{

inline ::g::Uno::Float4 ISolidColor::Color(const uInterface& __this) { ::g::Uno::Float4 __retval; return __this.VTable<ISolidColor>()->fp_get_Color(__this, &__retval), __retval; }
// }

}}} // ::g::Fuse::Drawing
