// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Property.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct ConstantExpression;}}}
namespace g{namespace Fuse{namespace Reactive{struct Property;}}}
namespace g{namespace Uno{namespace UX{struct PropertyAccessor;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Property :8
// {
::g::Fuse::Reactive::Expression_type* Property_typeof();
void Property__ctor_1_fn(Property* __this, ::g::Fuse::Reactive::ConstantExpression* obj, ::g::Uno::UX::PropertyAccessor* accessor);
void Property__get_Accessor_fn(Property* __this, ::g::Uno::UX::PropertyAccessor** __retval);
void Property__set_Accessor_fn(Property* __this, ::g::Uno::UX::PropertyAccessor* value);
void Property__New1_fn(::g::Fuse::Reactive::ConstantExpression* obj, ::g::Uno::UX::PropertyAccessor* accessor, Property** __retval);
void Property__get_Object_fn(Property* __this, ::g::Fuse::Reactive::ConstantExpression** __retval);
void Property__set_Object_fn(Property* __this, ::g::Fuse::Reactive::ConstantExpression* value);
void Property__Subscribe_fn(Property* __this, uObject* context, uObject* listener, uObject** __retval);

struct Property : ::g::Fuse::Reactive::Expression
{
    uStrong< ::g::Uno::UX::PropertyAccessor*> _Accessor;
    uStrong< ::g::Fuse::Reactive::ConstantExpression*> _Object;

    void ctor_1(::g::Fuse::Reactive::ConstantExpression* obj, ::g::Uno::UX::PropertyAccessor* accessor);
    ::g::Uno::UX::PropertyAccessor* Accessor();
    void Accessor(::g::Uno::UX::PropertyAccessor* value);
    ::g::Fuse::Reactive::ConstantExpression* Object();
    void Object(::g::Fuse::Reactive::ConstantExpression* value);
    static Property* New1(::g::Fuse::Reactive::ConstantExpression* obj, ::g::Uno::UX::PropertyAccessor* accessor);
};
// }

}}} // ::g::Fuse::Reactive
