// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.3.1/Surface.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct Surface;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Drawing{

// public abstract interface ISurfaceDrawable :168
// {
uInterfaceType* ISurfaceDrawable_typeof();

struct ISurfaceDrawable
{
    void(*fp_Draw)(uObject*, ::g::Fuse::Drawing::Surface*);
    void(*fp_get_ElementSize)(uObject*, ::g::Uno::Float2*);
    void(*fp_get_IsPrimary)(uObject*, bool*);
    static void Draw(const uInterface& __this, ::g::Fuse::Drawing::Surface* surface) { __this.VTable<ISurfaceDrawable>()->fp_Draw(__this, surface); }
    static ::g::Uno::Float2 ElementSize(const uInterface& __this);
    static bool IsPrimary(const uInterface& __this) { bool __retval; return __this.VTable<ISurfaceDrawable>()->fp_get_IsPrimary(__this, &__retval), __retval; }
};

}}} // ::g::Fuse::Drawing

#include <Uno.Float2.h>

namespace g{
namespace Fuse{
namespace Drawing{

inline ::g::Uno::Float2 ISurfaceDrawable::ElementSize(const uInterface& __this) { ::g::Uno::Float2 __retval; return __this.VTable<ISurfaceDrawable>()->fp_get_ElementSize(__this, &__retval), __retval; }
// }

}}} // ::g::Fuse::Drawing
