// This file was generated based on /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Ray.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float3.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Ray;}}

namespace g{
namespace Fuse{

// public struct Ray :5
// {
uStructType* Ray_typeof();
void Ray__ctor__fn(Ray* __this, ::g::Uno::Float3* pos, ::g::Uno::Float3* dir);
void Ray__New1_fn(::g::Uno::Float3* pos, ::g::Uno::Float3* dir, Ray* __retval);

struct Ray
{
    ::g::Uno::Float3 Position;
    ::g::Uno::Float3 Direction;

    void ctor_(::g::Uno::Float3 pos, ::g::Uno::Float3 dir);
};

Ray Ray__New1(::g::Uno::Float3 pos, ::g::Uno::Float3 dir);
// }

}} // ::g::Fuse
