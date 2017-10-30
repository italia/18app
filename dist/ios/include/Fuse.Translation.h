// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Translation.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ITransformRelative.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.RelativeTransform-1.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{struct FastMatrix;}}
namespace g{namespace Fuse{struct Translation;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{

// public sealed class Translation :149
// {
::g::Fuse::RelativeTransform_type* Translation_typeof();
void Translation__ctor_4_fn(Translation* __this);
void Translation__AppendTo_fn(Translation* __this, ::g::Fuse::FastMatrix* m, float* weight);
void Translation__get_IsFlat_fn(Translation* __this, bool* __retval);
void Translation__New2_fn(Translation** __retval);
void Translation__PrependTo_fn(Translation* __this, ::g::Fuse::FastMatrix* m);
void Translation__get_Vector_fn(Translation* __this, ::g::Uno::Float3* __retval);
void Translation__set_Vector_fn(Translation* __this, ::g::Uno::Float3* value);
void Translation__get_X_fn(Translation* __this, float* __retval);
void Translation__set_X_fn(Translation* __this, float* value);
void Translation__get_XY_fn(Translation* __this, ::g::Uno::Float2* __retval);
void Translation__set_XY_fn(Translation* __this, ::g::Uno::Float2* value);
void Translation__get_Y_fn(Translation* __this, float* __retval);
void Translation__set_Y_fn(Translation* __this, float* value);
void Translation__get_Z_fn(Translation* __this, float* __retval);
void Translation__set_Z_fn(Translation* __this, float* value);

struct Translation : ::g::Fuse::RelativeTransform
{
    float _x;
    float _y;
    float _z;

    void ctor_4();
    ::g::Uno::Float3 Vector();
    void Vector(::g::Uno::Float3 value);
    float X();
    void X(float value);
    ::g::Uno::Float2 XY();
    void XY(::g::Uno::Float2 value);
    float Y();
    void Y(float value);
    float Z();
    void Z(float value);
    static Translation* New2();
};
// }

}} // ::g::Fuse
