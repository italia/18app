// This file was generated based on /usr/local/share/uno/Packages/Fuse.Elements/1.3.1/InteractiveTransform.uno.
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
namespace g{namespace Fuse{namespace Elements{struct InteractiveTransform;}}}
namespace g{namespace Fuse{struct FastMatrix;}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Elements{

// public sealed class InteractiveTransform :6
// {
::g::Fuse::Transform_type* InteractiveTransform_typeof();
void InteractiveTransform__AppendTo_fn(InteractiveTransform* __this, ::g::Fuse::FastMatrix* matrix, float* weight);
void InteractiveTransform__get_IsFlat_fn(InteractiveTransform* __this, bool* __retval);
void InteractiveTransform__PrependTo_fn(InteractiveTransform* __this, ::g::Fuse::FastMatrix* matrix);
void InteractiveTransform__get_Rotation_fn(InteractiveTransform* __this, float* __retval);
void InteractiveTransform__set_Rotation_fn(InteractiveTransform* __this, float* value);
void InteractiveTransform__SetRotation_fn(InteractiveTransform* __this, float* value, uObject* origin);
void InteractiveTransform__SetTranslation_fn(InteractiveTransform* __this, ::g::Uno::Float2* value, uObject* origin);
void InteractiveTransform__SetZoomFactor_fn(InteractiveTransform* __this, float* value, uObject* origin);
void InteractiveTransform__get_Translation_fn(InteractiveTransform* __this, ::g::Uno::Float2* __retval);
void InteractiveTransform__set_Translation_fn(InteractiveTransform* __this, ::g::Uno::Float2* value);
void InteractiveTransform__get_ZoomFactor_fn(InteractiveTransform* __this, float* __retval);
void InteractiveTransform__set_ZoomFactor_fn(InteractiveTransform* __this, float* value);

struct InteractiveTransform : ::g::Fuse::Transform
{
    float _rotation;
    static ::g::Uno::UX::Selector _rotationName_;
    static ::g::Uno::UX::Selector& _rotationName() { return _rotationName_; }
    ::g::Uno::Float2 _translation;
    static ::g::Uno::UX::Selector _translationName_;
    static ::g::Uno::UX::Selector& _translationName() { return _translationName_; }
    float _zoomFactor;
    static ::g::Uno::UX::Selector _zoomFactorName_;
    static ::g::Uno::UX::Selector& _zoomFactorName() { return _zoomFactorName_; }

    float Rotation();
    void Rotation(float value);
    void SetRotation(float value, uObject* origin);
    void SetTranslation(::g::Uno::Float2 value, uObject* origin);
    void SetZoomFactor(float value, uObject* origin);
    ::g::Uno::Float2 Translation();
    void Translation(::g::Uno::Float2 value);
    float ZoomFactor();
    void ZoomFactor(float value);
};
// }

}}} // ::g::Fuse::Elements
