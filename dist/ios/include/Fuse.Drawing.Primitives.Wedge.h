// This file was generated based on /usr/local/share/uno/Packages/Fuse.Drawing.Primitives/1.3.1/Wedge.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{struct ConcaveWedgeCoverage;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{struct ConvexWedgeCoverage;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{struct FillCoverage;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{struct StrokeCoverage;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{struct Wedge;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{struct WedgeCoverage;}}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Primitives{

// public sealed class Wedge :51
// {
uType* Wedge_typeof();
void Wedge__ctor__fn(Wedge* __this);
void Wedge__Fill_fn(Wedge* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* node, float* radius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2* center, float* startAngle, float* endAngle, float* smoothness);
void Wedge__New1_fn(Wedge** __retval);
void Wedge__SetupWedgeCoverage_fn(Wedge* __this, float* startAngle, float* endAngle, ::g::Fuse::Drawing::Primitives::WedgeCoverage** __retval);
void Wedge__Stroke_fn(Wedge* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* node, float* radius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2* center, float* startAngle, float* endAngle, float* smoothness);

struct Wedge : uObject
{
    uStrong< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*> _concaveWedgeCoverage;
    uStrong< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*> _convexWedgeCoverage;
    uStrong< ::g::Fuse::Drawing::Primitives::FillCoverage*> _fillCoverage;
    uStrong< ::g::Fuse::Drawing::Primitives::StrokeCoverage*> _strokeCoverage;
    static uSStrong<Wedge*> Singleton_;
    static uSStrong<Wedge*>& Singleton() { return Singleton_; }

    void ctor_();
    void Fill(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* node, float radius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2 center, float startAngle, float endAngle, float smoothness);
    ::g::Fuse::Drawing::Primitives::WedgeCoverage* SetupWedgeCoverage(float startAngle, float endAngle);
    void Stroke(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* node, float radius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2 center, float startAngle, float endAngle, float smoothness);
    static Wedge* New1();
};
// }

}}}} // ::g::Fuse::Drawing::Primitives
