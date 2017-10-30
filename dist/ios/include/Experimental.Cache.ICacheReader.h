// This file was generated based on /usr/local/share/uno/Packages/Experimental.Http/1.3.1/ICache.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace IO{struct Stream;}}}

namespace g{
namespace Experimental{
namespace Cache{

// public abstract interface ICacheReader :15
// {
uInterfaceType* ICacheReader_typeof();

struct ICacheReader
{
    void(*fp_Delete)(uObject*);
    void(*fp_GetMeta)(uObject*, uString*, uString**);
    void(*fp_get_Stream)(uObject*, ::g::Uno::IO::Stream**);
    static void Delete(const uInterface& __this) { __this.VTable<ICacheReader>()->fp_Delete(__this); }
    static uString* GetMeta(const uInterface& __this, uString* key) { uString* __retval; return __this.VTable<ICacheReader>()->fp_GetMeta(__this, key, &__retval), __retval; }
    static ::g::Uno::IO::Stream* Stream(const uInterface& __this) { ::g::Uno::IO::Stream* __retval; return __this.VTable<ICacheReader>()->fp_get_Stream(__this, &__retval), __retval; }
};
// }

}}} // ::g::Experimental::Cache
