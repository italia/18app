// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/ViewHandle.iOS.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ViewFactory;}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ViewHandle;}}}}
namespace g{namespace ObjC{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// internal static extern class ViewFactory :354
// {
uClassType* ViewFactory_typeof();
void ViewFactory__InstantiateViewGroup_fn(::g::Fuse::Controls::Native::ViewHandle** __retval);
void ViewFactory__InstantiateViewGroupImpl_fn(::g::ObjC::Object** __retval);

struct ViewFactory : uObject
{
    static ::g::Fuse::Controls::Native::ViewHandle* InstantiateViewGroup();
    static ::g::ObjC::Object* InstantiateViewGroupImpl();
};
// }

}}}} // ::g::Fuse::Controls::Native
