// This file was generated based on /usr/local/share/uno/Packages/Fuse.Nodes/1.3.1/Transform.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ITransformRelative.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Transform.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{struct RelativeTransform;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{

// public abstract class RelativeTransform<TransformMode> :300
// {
struct RelativeTransform_type : ::g::Fuse::Transform_type
{
    ::g::Fuse::ITransformRelative interface6;
};

RelativeTransform_type* RelativeTransform_typeof();
void RelativeTransform__ctor_3_fn(RelativeTransform* __this, uObject* defaultTransform);
void RelativeTransform__CheckSubscription_fn(RelativeTransform* __this, bool* fromRooted);
void RelativeTransform__ClearRootingCompleted_fn(RelativeTransform* __this);
void RelativeTransform__ClearSubscription_fn(RelativeTransform* __this);
void RelativeTransform__FuseITransformRelativeOnTransformChanged_fn(RelativeTransform* __this, uObject* s, uObject* a);
void RelativeTransform__FuseITransformRelativeget_RelativeNode_fn(RelativeTransform* __this, ::g::Fuse::Visual** __retval);
void RelativeTransform__FuseITransformRelativeget_Target_fn(RelativeTransform* __this, ::g::Fuse::Visual** __retval);
void RelativeTransform__OnRooted_fn(RelativeTransform* __this);
void RelativeTransform__OnRootingCompleted_fn(RelativeTransform* __this);
void RelativeTransform__OnUnrooted_fn(RelativeTransform* __this);
void RelativeTransform__get_RelativeNode_fn(RelativeTransform* __this, ::g::Fuse::Visual** __retval);
void RelativeTransform__set_RelativeNode_fn(RelativeTransform* __this, ::g::Fuse::Visual* value);
void RelativeTransform__get_RelativeTo_fn(RelativeTransform* __this, uObject** __retval);
void RelativeTransform__set_RelativeTo_fn(RelativeTransform* __this, uObject* value);

struct RelativeTransform : ::g::Fuse::Transform
{
    uStrong< ::g::Fuse::Visual*> _relativeNode;
    uStrong<uObject*> _relativeTo;
    uStrong<uObject*> _subscription;
    uStrong< ::g::Fuse::Visual*> _waitRootingCompleted;

    void ctor_3(uObject* defaultTransform);
    void CheckSubscription(bool fromRooted);
    void ClearRootingCompleted();
    void ClearSubscription();
    void OnRootingCompleted();
    ::g::Fuse::Visual* RelativeNode();
    void RelativeNode(::g::Fuse::Visual* value);
    uObject* RelativeTo();
    void RelativeTo(uObject* value);
};
// }

}} // ::g::Fuse
