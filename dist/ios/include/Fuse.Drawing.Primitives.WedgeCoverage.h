// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing.Primitives/1.3.1/Wedge.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.Primitives.LimitCoverage.h>
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{struct WedgeCoverage;}}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Primitives{

// internal abstract class WedgeCoverage :10
// {
uType* WedgeCoverage_typeof();
void WedgeCoverage__ctor_1_fn(WedgeCoverage* __this);

struct WedgeCoverage : ::g::Fuse::Drawing::Primitives::LimitCoverage
{
    float EndAngle;
    float StartAngle;

    void ctor_1();
};
// }

}}}} // ::g::Fuse::Drawing::Primitives
