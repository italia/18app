// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Resources/ResourceRegistry.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Resources{struct ResourceRegistry;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Resources{

// public static class ResourceRegistry :8
// {
uClassType* ResourceRegistry_typeof();
void ResourceRegistry__AddResourceChangedHandler_fn(uString* key, uDelegate* handler);
void ResourceRegistry__NotifyResourceChanged_fn(uString* key);
void ResourceRegistry__RemoveResourceChangedHandler_fn(uString* key, uDelegate* handler);

struct ResourceRegistry : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _handlers_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _handlers() { return _handlers_; }

    static void AddResourceChangedHandler(uString* key, uDelegate* handler);
    static void NotifyResourceChanged(uString* key);
    static void RemoveResourceChangedHandler(uString* key, uDelegate* handler);
};
// }

}}} // ::g::Fuse::Resources
