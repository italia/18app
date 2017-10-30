// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/Element.Transform.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.ITransformOrigin.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct TransformOrigins__AnchorOrigin;}}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{
namespace Elements{

// private sealed class TransformOrigins.AnchorOrigin :58
// {
struct TransformOrigins__AnchorOrigin_type : uType
{
    ::g::Fuse::Elements::ITransformOrigin interface0;
};

TransformOrigins__AnchorOrigin_type* TransformOrigins__AnchorOrigin_typeof();
void TransformOrigins__AnchorOrigin__ctor__fn(TransformOrigins__AnchorOrigin* __this);
void TransformOrigins__AnchorOrigin__GetOffset_fn(TransformOrigins__AnchorOrigin* __this, ::g::Fuse::Elements::Element* elm, ::g::Uno::Float3* __retval);
void TransformOrigins__AnchorOrigin__New1_fn(TransformOrigins__AnchorOrigin** __retval);

struct TransformOrigins__AnchorOrigin : uObject
{
    void ctor_();
    ::g::Uno::Float3 GetOffset(::g::Fuse::Elements::Element* elm);
    static TransformOrigins__AnchorOrigin* New1();
};
// }

}}} // ::g::Fuse::Elements
