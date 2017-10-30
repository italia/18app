// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Panels/1.3.1/GraphicsView.ux.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ViewHandle;}}}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{

// internal abstract interface IProxyHost :64
// {
uInterfaceType* IProxyHost_typeof();

struct IProxyHost
{
    void(*fp_Insert)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*);
    void(*fp_Remove)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*);
    void(*fp_get_WorldTransformInverse)(uObject*, ::g::Uno::Float4x4*);
    static void Insert(const uInterface& __this, ::g::Fuse::Controls::Native::ViewHandle* viewHandle) { __this.VTable<IProxyHost>()->fp_Insert(__this, viewHandle); }
    static void Remove(const uInterface& __this, ::g::Fuse::Controls::Native::ViewHandle* viewHandle) { __this.VTable<IProxyHost>()->fp_Remove(__this, viewHandle); }
    static ::g::Uno::Float4x4 WorldTransformInverse(const uInterface& __this);
};

}}} // ::g::Fuse::Controls

#include <Uno.Float4x4.h>

namespace g{
namespace Fuse{
namespace Controls{

inline ::g::Uno::Float4x4 IProxyHost::WorldTransformInverse(const uInterface& __this) { ::g::Uno::Float4x4 __retval; return __this.VTable<IProxyHost>()->fp_get_WorldTransformInverse(__this, &__retval), __retval; }
// }

}}} // ::g::Fuse::Controls
