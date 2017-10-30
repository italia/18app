// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Navigation/1.3.1/Navigator.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct Navigator__PrepareResult;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouterPage;}}}

namespace g{
namespace Fuse{
namespace Controls{

// private struct Navigator.PrepareResult :171
// {
uStructType* Navigator__PrepareResult_typeof();

struct Navigator__PrepareResult
{
    int Routing;
    bool UsedPrepared;
    uStrong< ::g::Fuse::Navigation::RouterPage*> Page;
};
// }

}}} // ::g::Fuse::Controls
