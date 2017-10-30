// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Transform.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Transform.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{struct FastMatrix;}}
namespace g{namespace Fuse{struct Shear;}}

namespace g{
namespace Fuse{

// public sealed class Shear :184
// {
::g::Fuse::Transform_type* Shear_typeof();
void Shear__ctor_3_fn(Shear* __this);
void Shear__AppendTo_fn(Shear* __this, ::g::Fuse::FastMatrix* m, float* weight);
void Shear__get_IsFlat_fn(Shear* __this, bool* __retval);
void Shear__New2_fn(Shear** __retval);
void Shear__PrependTo_fn(Shear* __this, ::g::Fuse::FastMatrix* m);
void Shear__get_Vector_fn(Shear* __this, ::g::Uno::Float2* __retval);
void Shear__set_Vector_fn(Shear* __this, ::g::Uno::Float2* value);

struct Shear : ::g::Fuse::Transform
{
    ::g::Uno::Float2 _vector;

    void ctor_3();
    ::g::Uno::Float2 Vector();
    void Vector(::g::Uno::Float2 value);
    static Shear* New2();
};
// }

}} // ::g::Fuse
