// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/1.3.1/Interfaces.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ViewHandle;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public abstract interface IViewHost :134
// {
uInterfaceType* IViewHost_typeof();

struct IViewHost
{
    void(*fp_Insert)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*);
    void(*fp_Remove)(uObject*, ::g::Fuse::Controls::Native::ViewHandle*);
    static void Insert(const uInterface& __this, ::g::Fuse::Controls::Native::ViewHandle* child) { __this.VTable<IViewHost>()->fp_Insert(__this, child); }
    static void Remove(const uInterface& __this, ::g::Fuse::Controls::Native::ViewHandle* child) { __this.VTable<IViewHost>()->fp_Remove(__this, child); }
};
// }

}}}} // ::g::Fuse::Controls::Native
