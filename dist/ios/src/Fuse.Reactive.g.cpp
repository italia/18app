// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Binding.h>
#include <Fuse.DeferredManager.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.IArray.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.Internal.ObjectList-1.Equality.h>
#include <Fuse.Internal.ObjectList-1.h>
#include <Fuse.IObject.h>
#include <Fuse.IProperties.h>
#include <Fuse.IRaw.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.LayoutPriority.h>
#include <Fuse.Marshal.h>
#include <Fuse.MarshalException.h>
#include <Fuse.NameRegistry.h>
#include <Fuse.Node.h>
#include <Fuse.Platform.ApplicationState.h>
#include <Fuse.Platform.Lifecycle.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Reactive.Add.h>
#include <Fuse.Reactive.ArrayMirror.h>
#include <Fuse.Reactive.BinaryOperator.h>
#include <Fuse.Reactive.BinaryOperator.Subscription.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Clamp.h>
#include <Fuse.Reactive.ClassInstance.h>
#include <Fuse.Reactive.Conditional.h>
#include <Fuse.Reactive.Console.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.ConstantExpression.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.DataSubscription.h>
#include <Fuse.Reactive.DateTimeConverterHelpers.h>
#include <Fuse.Reactive.DebugLog.h>
#include <Fuse.Reactive.DiagnosticSubject.h>
#include <Fuse.Reactive.Divide.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.Equal.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.EventRecord.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.ExpressionBinding.h>
#include <Fuse.Reactive.FunctionMirror.CallClosure.h>
#include <Fuse.Reactive.FunctionMirror.h>
#include <Fuse.Reactive.FuseJS.Builtins.h>
#include <Fuse.Reactive.GreaterOrEqual.h>
#include <Fuse.Reactive.GreaterThan.h>
#include <Fuse.Reactive.IContext.h>
#include <Fuse.Reactive.IEventHandler.h>
#include <Fuse.Reactive.IEventRecord.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Reactive.InfixOperator.h>
#include <Fuse.Reactive.InnerListener.h>
#include <Fuse.Reactive.InnerListener.ObservableSubscription.h>
#include <Fuse.Reactive.InstanceDefer.h>
#include <Fuse.Reactive.InstanceIdentity.h>
#include <Fuse.Reactive.InstanceReuse.h>
#include <Fuse.Reactive.Instantiator.CountItem.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.Instantiator.ObservableLink.h>
#include <Fuse.Reactive.Instantiator.TemplateMatch.h>
#include <Fuse.Reactive.Instantiator.WindowItem.h>
#include <Fuse.Reactive.InstantiatorFunction.h>
#include <Fuse.Reactive.InstantiatorFunction.InstantiatorSubscription.h>
#include <Fuse.Reactive.Internal.PatchAlgorithm.h>
#include <Fuse.Reactive.Internal.PatchItem.h>
#include <Fuse.Reactive.Internal.PatchList.h>
#include <Fuse.Reactive.Internal.PatchOp.h>
#include <Fuse.Reactive.IObservable.h>
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Reactive.ISubscription.h>
#include <Fuse.Reactive.IWriteable.h>
#include <Fuse.Reactive.JavaScript.Dependency.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.LazyObservableProperty.h>
#include <Fuse.Reactive.Lerp.h>
#include <Fuse.Reactive.LessOrEqual.h>
#include <Fuse.Reactive.LessThan.h>
#include <Fuse.Reactive.ListMirror.h>
#include <Fuse.Reactive.LogicalAnd.h>
#include <Fuse.Reactive.LogicalOr.h>
#include <Fuse.Reactive.LookUp.h>
#include <Fuse.Reactive.LookUp.LookUpSubscription.h>
#include <Fuse.Reactive.Member.h>
#include <Fuse.Reactive.Member.MemberSubscription.h>
#include <Fuse.Reactive.ModuleInstance.h>
#include <Fuse.Reactive.Multiply.h>
#include <Fuse.Reactive.NodeExpressionBinding.h>
#include <Fuse.Reactive.NotEqual.h>
#include <Fuse.Reactive.NullCoalesce.h>
#include <Fuse.Reactive.ObjectMirror.h>
#include <Fuse.Reactive.Observable.Add.h>
#include <Fuse.Reactive.Observable.Clear.h>
#include <Fuse.Reactive.Observable.Failed.h>
#include <Fuse.Reactive.Observable.h>
#include <Fuse.Reactive.Observable.InsertAll.h>
#include <Fuse.Reactive.Observable.InsertAt.h>
#include <Fuse.Reactive.Observable.NewAll.h>
#include <Fuse.Reactive.Observable.NewAt.h>
#include <Fuse.Reactive.Observable.Operation.h>
#include <Fuse.Reactive.Observable.RemoveAt.h>
#include <Fuse.Reactive.Observable.RemoveRange.h>
#include <Fuse.Reactive.Observable.Set.h>
#include <Fuse.Reactive.Observable.Subscription.h>
#include <Fuse.Reactive.ObservableProperty.h>
#include <Fuse.Reactive.ObservableProperty.PushCapture.h>
#include <Fuse.Reactive.ObserverMap-1.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Reactive.Property.Subscription.h>
#include <Fuse.Reactive.QuaternaryOperator.h>
#include <Fuse.Reactive.QuaternaryOperator.Subscription.h>
#include <Fuse.Reactive.Resource.h>
#include <Fuse.Reactive.ResourceSubscription.h>
#include <Fuse.Reactive.RootableScriptModule.h>
#include <Fuse.Reactive.SimpleVarArgFunction.h>
#include <Fuse.Reactive.SimpleVarArgFunction.SimpleSubscription.h>
#include <Fuse.Reactive.Snapshot.h>
#include <Fuse.Reactive.Snapshot.Subscription.h>
#include <Fuse.Reactive.Subtract.h>
#include <Fuse.Reactive.TernaryOperator.h>
#include <Fuse.Reactive.TernaryOperator.Subscription.h>
#include <Fuse.Reactive.ThreadWorker.h>
#include <Fuse.Reactive.ThreadWorker.MethodClosure.h>
#include <Fuse.Reactive.ThreadWorker.PropertyClosure.h>
#include <Fuse.Reactive.ThreadWorker.ReadonlyPropertyClosure.h>
#include <Fuse.Reactive.UnaryOperator.h>
#include <Fuse.Reactive.UnaryOperator.Subscription.h>
#include <Fuse.Reactive.UnmappedView-1.h>
#include <Fuse.Reactive.ValueForwarder.h>
#include <Fuse.Reactive.ValueForwarder.IValueListener.h>
#include <Fuse.Reactive.ValueMirror.h>
#include <Fuse.Reactive.ValueObserver.h>
#include <Fuse.Reactive.VarArgFunction.Argument.h>
#include <Fuse.Reactive.VarArgFunction.h>
#include <Fuse.Reactive.VarArgFunction.Subscription.h>
#include <Fuse.Reactive.WhileCount.h>
#include <Fuse.Reactive.WhileCount.Range.h>
#include <Fuse.Reactive.WhileNotEmpty.h>
#include <Fuse.Resources.ResourceRegistry.h>
#include <Fuse.Scripting.AppInitialized.h>
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.External.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.IScriptEvent.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Scripting.JavaScriptCore.Context.h>
#include <Fuse.Scripting.Module.h>
#include <Fuse.Scripting.ModuleResult.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.ScriptClass.h>
#include <Fuse.Scripting.ScriptException.h>
#include <Fuse.Scripting.ScriptMember.h>
#include <Fuse.Scripting.ScriptMethod.h>
#include <Fuse.Scripting.ScriptMethodInline.h>
#include <Fuse.Scripting.ScriptModule.h>
#include <Fuse.Scripting.ScriptProperty.h>
#include <Fuse.Scripting.ScriptReadonlyProperty.h>
#include <Fuse.Triggers.BusyTask.h>
#include <Fuse.Triggers.BusyTaskActivity.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Fuse.WrapException.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Application.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.Dictionary-2.KeyCollection.h>
#include <Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h>
#include <Uno.Collections.Dictionary-2.ValueCollection.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.RootableList-1.h>
#include <Uno.DateTime.h>
#include <Uno.DateTimeKind.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Int3.h>
#include <Uno.Int4.h>
#include <Uno.Long.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Threading.ConcurrentQueue-1.h>
#include <Uno.Threading.EventWaitHandle.h>
#include <Uno.Threading.ManualResetEvent.h>
#include <Uno.Threading.Monitor.h>
#include <Uno.Threading.Thread.h>
#include <Uno.Threading.ThreadStart.h>
#include <Uno.Type.h>
#include <Uno.UInt.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Template.h>
static uString* STRINGS[109];
static uType* TYPES[61];

namespace g{
namespace Fuse{
namespace Reactive{

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Operators.uno
// ---------------------------------------------------------------------------

// public sealed class Add :19
// {
static void Add_build(uType* type)
{
    ::STRINGS[0] = uString::Const("+");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InfixOperator_type, interface0));
    type->SetFields(2);
}

::g::Fuse::Reactive::InfixOperator_type* Add_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InfixOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Add);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InfixOperator_type);
    type = (::g::Fuse::Reactive::InfixOperator_type*)uClassType::New("Fuse.Reactive.Add", options);
    type->fp_build_ = Add_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))Add__Compute_fn;
    type->fp_get_Symbol = (void(*)(::g::Fuse::Reactive::InfixOperator*, uString**))Add__get_Symbol_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public Add(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :22
void Add__ctor_3_fn(Add* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_3(left, right);
}

// protected override sealed object Compute(object left, object right) :23
void Add__Compute_fn(Add* __this, uObject* left, uObject* right, uObject** __retval)
{
    return *__retval = ::g::Fuse::Marshal::Add(left, right), void();
}

// public Add New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :22
void Add__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, Add** __retval)
{
    *__retval = Add::New1(left, right);
}

// public override sealed string get_Symbol() :28
void Add__get_Symbol_fn(Add* __this, uString** __retval)
{
    return *__retval = ::STRINGS[0/*"+"*/], void();
}

// public Add(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :22
void Add::ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_2(left, right);
}

// public Add New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [static] :22
Add* Add::New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    Add* obj1 = (Add*)uNew(Add_typeof());
    obj1->ctor_3(left, right);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/Observable.uno
// ---------------------------------------------------------------------------

// private sealed class Observable.Add :442
// {
static void Observable__Add_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        uObject_typeof(), offsetof(Observable__Add, _value), 0);
}

::g::Fuse::Reactive::Observable__Operation_type* Observable__Add_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Observable__Operation_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Observable__Add);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Observable__Operation_type);
    type = (::g::Fuse::Reactive::Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.Add", options);
    type->fp_build_ = Observable__Add_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Reactive::Observable__Operation*, uObject*))Observable__Add__OnPerform_fn;
    return type;
}

// public Add(Fuse.Reactive.Observable obs, object value) :446
void Observable__Add__ctor_1_fn(Observable__Add* __this, ::g::Fuse::Reactive::Observable* obs, uObject* value)
{
    __this->ctor_1(obs, value);
}

// public Add New(Fuse.Reactive.Observable obs, object value) :446
void Observable__Add__New1_fn(::g::Fuse::Reactive::Observable* obs, uObject* value, Observable__Add** __retval)
{
    *__retval = Observable__Add::New1(obs, value);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription> sub) :451
void Observable__Add__OnPerform_fn(Observable__Add* __this, uObject* sub)
{
    ::g::Fuse::Reactive::Observable__Subscription* ret2;
    ::g::Fuse::Reactive::Observable__Subscription* ret3;
    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(__this->Observable())->_values), __this->_value);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Reactive.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret2), ret2))->ShouldSend(-1))
            ::g::Fuse::Reactive::IObserver::OnAdd(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret3), ret3))->Observer()), ::TYPES[2/*Fuse.Reactive.IObserver*/]), __this->_value);
}

// public Add(Fuse.Reactive.Observable obs, object value) [instance] :446
void Observable__Add::ctor_1(::g::Fuse::Reactive::Observable* obs, uObject* value)
{
    ctor_(obs);
    _value = value;
}

// public Add New(Fuse.Reactive.Observable obs, object value) [static] :446
Observable__Add* Observable__Add::New1(::g::Fuse::Reactive::Observable* obs, uObject* value)
{
    Observable__Add* obj1 = (Observable__Add*)uNew(Observable__Add_typeof());
    obj1->ctor_1(obs, value);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/VarArgFunction.uno
// --------------------------------------------------------------------------------

// public sealed class VarArgFunction.Argument :15
// {
static void VarArgFunction__Argument_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::IDisposable_typeof();
    type->SetFields(0,
        ::TYPES[3/*Uno.IDisposable*/], offsetof(VarArgFunction__Argument, Subscription), 0,
        ::g::Uno::Bool_typeof(), offsetof(VarArgFunction__Argument, _HasValue), 0,
        uObject_typeof(), offsetof(VarArgFunction__Argument, _Value), 0);
}

uType* VarArgFunction__Argument_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(VarArgFunction__Argument);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.VarArgFunction.Argument", options);
    type->fp_build_ = VarArgFunction__Argument_build;
    type->fp_ctor_ = (void*)VarArgFunction__Argument__New1_fn;
    return type;
}

// public generated Argument() :15
void VarArgFunction__Argument__ctor__fn(VarArgFunction__Argument* __this)
{
    __this->ctor_();
}

// internal void Dispose() :27
void VarArgFunction__Argument__Dispose_fn(VarArgFunction__Argument* __this)
{
    __this->Dispose();
}

// public generated bool get_HasValue() :25
void VarArgFunction__Argument__get_HasValue_fn(VarArgFunction__Argument* __this, bool* __retval)
{
    *__retval = __this->HasValue();
}

// internal generated void set_HasValue(bool value) :25
void VarArgFunction__Argument__set_HasValue_fn(VarArgFunction__Argument* __this, bool* value)
{
    __this->HasValue(*value);
}

// public generated Argument New() :15
void VarArgFunction__Argument__New1_fn(VarArgFunction__Argument** __retval)
{
    *__retval = VarArgFunction__Argument::New1();
}

// public generated object get_Value() :20
void VarArgFunction__Argument__get_Value_fn(VarArgFunction__Argument* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// internal generated void set_Value(object value) :20
void VarArgFunction__Argument__set_Value_fn(VarArgFunction__Argument* __this, uObject* value)
{
    __this->Value(value);
}

// public generated Argument() [instance] :15
void VarArgFunction__Argument::ctor_()
{
}

// internal void Dispose() [instance] :27
void VarArgFunction__Argument::Dispose()
{
    if (Subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(Subscription), ::TYPES[3/*Uno.IDisposable*/]));
        Subscription = NULL;
    }

    Value(NULL);
    HasValue(false);
}

// public generated bool get_HasValue() [instance] :25
bool VarArgFunction__Argument::HasValue()
{
    return _HasValue;
}

// internal generated void set_HasValue(bool value) [instance] :25
void VarArgFunction__Argument::HasValue(bool value)
{
    _HasValue = value;
}

// public generated object get_Value() [instance] :20
uObject* VarArgFunction__Argument::Value()
{
    return _Value;
}

// internal generated void set_Value(object value) [instance] :20
void VarArgFunction__Argument::Value(uObject* value)
{
    _Value = value;
}

// public generated Argument New() [static] :15
VarArgFunction__Argument* VarArgFunction__Argument::New1()
{
    VarArgFunction__Argument* obj1 = (VarArgFunction__Argument*)uNew(VarArgFunction__Argument_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/ArrayMirror.uno
// ----------------------------------------------------------------------------

// internal sealed class ArrayMirror :6
// {
static void ArrayMirror_build(uType* type)
{
    ::TYPES[4] = uObject_typeof()->Array();
    ::TYPES[5] = ::g::Fuse::Reactive::ValueMirror_typeof();
    type->SetInterfaces(
        ::g::Fuse::IRaw_typeof(), offsetof(::g::Fuse::Reactive::ListMirror_type, interface0),
        ::g::Fuse::IArray_typeof(), offsetof(::g::Fuse::Reactive::ListMirror_type, interface1));
    type->SetFields(1,
        ::TYPES[4/*object[]*/], offsetof(ArrayMirror, _items), 0);
}

::g::Fuse::Reactive::ListMirror_type* ArrayMirror_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ListMirror_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ListMirror_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ArrayMirror);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ListMirror_type);
    type = (::g::Fuse::Reactive::ListMirror_type*)uClassType::New("Fuse.Reactive.ArrayMirror", options);
    type->fp_build_ = ArrayMirror_build;
    type->fp_get_Item = (void(*)(::g::Fuse::Reactive::ListMirror*, int*, uObject**))ArrayMirror__get_Item_fn;
    type->fp_get_Length = (void(*)(::g::Fuse::Reactive::ListMirror*, int*))ArrayMirror__get_Length_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Reactive::ValueMirror*))ArrayMirror__Unsubscribe_fn;
    type->interface1.fp_get_Length = (void(*)(uObject*, int*))ArrayMirror__get_Length_fn;
    type->interface1.fp_get_Item = (void(*)(uObject*, int*, uObject**))ArrayMirror__get_Item_fn;
    type->interface0.fp_get_Raw = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::ValueMirror__get_Raw_fn;
    return type;
}

// internal ArrayMirror(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Array arr) :10
void ArrayMirror__ctor_2_fn(ArrayMirror* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* arr)
{
    __this->ctor_2(worker, arr);
}

// public override sealed object get_Item(int index) :30
void ArrayMirror__get_Item_fn(ArrayMirror* __this, int* index, uObject** __retval)
{
    int index_ = *index;
    return *__retval = uPtr(__this->_items)->Strong<uObject*>(index_), void();
}

// internal object[] get_ItemsReadonly() :17
void ArrayMirror__get_ItemsReadonly_fn(ArrayMirror* __this, uArray** __retval)
{
    *__retval = __this->ItemsReadonly();
}

// public override sealed int get_Length() :35
void ArrayMirror__get_Length_fn(ArrayMirror* __this, int* __retval)
{
    return *__retval = uPtr(__this->_items)->Length(), void();
}

// internal ArrayMirror New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Array arr) :10
void ArrayMirror__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* arr, ArrayMirror** __retval)
{
    *__retval = ArrayMirror::New1(worker, arr);
}

// public override sealed void Unsubscribe() :19
void ArrayMirror__Unsubscribe_fn(ArrayMirror* __this)
{
    for (int i = 0; i < uPtr(__this->_items)->Length(); i++)
    {
        ::g::Fuse::Reactive::ValueMirror* d = uAs< ::g::Fuse::Reactive::ValueMirror*>(uPtr(__this->_items)->Strong<uObject*>(i), ::TYPES[5/*Fuse.Reactive.ValueMirror*/]);

        if (d != NULL)
            uPtr(d)->Unsubscribe();
    }
}

// internal ArrayMirror(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Array arr) [instance] :10
void ArrayMirror::ctor_2(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* arr)
{
    ctor_1(arr);
    _items = uArray::New(::TYPES[4/*object[]*/], uPtr(arr)->Length());

    for (int i = 0; i < uPtr(_items)->Length(); i++)
        uPtr(_items)->Strong<uObject*>(i) = uPtr(worker)->Reflect(uPtr(arr)->Item(i));
}

// internal object[] get_ItemsReadonly() [instance] :17
uArray* ArrayMirror::ItemsReadonly()
{
    return _items;
}

// internal ArrayMirror New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Array arr) [static] :10
ArrayMirror* ArrayMirror::New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* arr)
{
    ArrayMirror* obj1 = (ArrayMirror*)uNew(ArrayMirror_typeof());
    obj1->ctor_2(worker, arr);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/BinaryOperator.uno
// --------------------------------------------------------------------------------

// public abstract class BinaryOperator :12
// {
static void BinaryOperator_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(BinaryOperator_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(BinaryOperator, _Left), 0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(BinaryOperator, _Right), 0);
}

BinaryOperator_type* BinaryOperator_typeof()
{
    static uSStrong<BinaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(BinaryOperator);
    options.TypeSize = sizeof(BinaryOperator_type);
    type = (BinaryOperator_type*)uClassType::New("Fuse.Reactive.BinaryOperator", options);
    type->fp_build_ = BinaryOperator_build;
    type->fp_Compute = BinaryOperator__Compute_fn;
    type->fp_get_IsLeftOptional = BinaryOperator__get_IsLeftOptional_fn;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))BinaryOperator__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))BinaryOperator__Subscribe_fn;
    return type;
}

// protected BinaryOperator(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :16
void BinaryOperator__ctor_1_fn(BinaryOperator* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_1(left, right);
}

// protected virtual object Compute(object left, object right) :30
void BinaryOperator__Compute_fn(BinaryOperator* __this, uObject* left, uObject* right, uObject** __retval)
{
    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::Type::FullName(uPtr(::g::Uno::Object::GetType(__this))), uString::Const(" does not implement the required methods"))));
}

// protected virtual bool get_IsLeftOptional() :27
void BinaryOperator__get_IsLeftOptional_fn(BinaryOperator* __this, bool* __retval)
{
    return *__retval = false, void();
}

// protected bool get_IsRightOptional() :28
void BinaryOperator__get_IsRightOptional_fn(BinaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsRightOptional();
}

// public generated Fuse.Reactive.Expression get_Left() :14
void BinaryOperator__get_Left_fn(BinaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Left();
}

// private generated void set_Left(Fuse.Reactive.Expression value) :14
void BinaryOperator__set_Left_fn(BinaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Left(value);
}

// protected void OnNewOperands(Fuse.Reactive.IListener listener, object left, object right) :35
void BinaryOperator__OnNewOperands_fn(BinaryOperator* __this, uObject* listener, uObject* left, uObject* right)
{
    __this->OnNewOperands(listener, left, right);
}

// public generated Fuse.Reactive.Expression get_Right() :15
void BinaryOperator__get_Right_fn(BinaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Right();
}

// private generated void set_Right(Fuse.Reactive.Expression value) :15
void BinaryOperator__set_Right_fn(BinaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Right(value);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :22
void BinaryOperator__Subscribe_fn(BinaryOperator* __this, uObject* context, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)BinaryOperator__Subscription::Create(__this, context, listener), void();
}

// protected BinaryOperator(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :16
void BinaryOperator::ctor_1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_();
    Left(left);
    Right(right);
}

// protected bool get_IsRightOptional() [instance] :28
bool BinaryOperator::IsRightOptional()
{
    return false;
}

// public generated Fuse.Reactive.Expression get_Left() [instance] :14
::g::Fuse::Reactive::Expression* BinaryOperator::Left()
{
    return _Left;
}

// private generated void set_Left(Fuse.Reactive.Expression value) [instance] :14
void BinaryOperator::Left(::g::Fuse::Reactive::Expression* value)
{
    _Left = value;
}

// protected void OnNewOperands(Fuse.Reactive.IListener listener, object left, object right) [instance] :35
void BinaryOperator::OnNewOperands(uObject* listener, uObject* left, uObject* right)
{
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(listener), ::TYPES[28/*Fuse.Reactive.IListener*/]), (uObject*)this, Compute(left, right));
}

// public generated Fuse.Reactive.Expression get_Right() [instance] :15
::g::Fuse::Reactive::Expression* BinaryOperator::Right()
{
    return _Right;
}

// private generated void set_Right(Fuse.Reactive.Expression value) [instance] :15
void BinaryOperator::Right(::g::Fuse::Reactive::Expression* value)
{
    _Right = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/DataBinding.uno
// --------------------------------------------------------------------------

// public enum BindingMode :8
uEnumType* BindingMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Reactive.BindingMode", ::g::Uno::Int_typeof(), 8);
    type->SetLiterals(
        "Read", 1LL,
        "Write", 2LL,
        "Clear", 4LL,
        "ReadClear", 5LL,
        "WriteClear", 6LL,
        "ReadWriteClear", 7LL,
        "ReadWrite", 3LL,
        "Default", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/FunctionMirror.uno
// -------------------------------------------------------------------------------

// private sealed class FunctionMirror.CallClosure :20
// {
static void FunctionMirror__CallClosure_build(uType* type)
{
    ::STRINGS[1] = uString::Const("node");
    ::STRINGS[2] = uString::Const("data");
    ::STRINGS[3] = uString::Const("sender");
    ::STRINGS[4] = uString::Const("JavaScript call error");
    ::STRINGS[5] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/FunctionMirror.uno");
    ::STRINGS[6] = uString::Const("Call");
    ::TYPES[6] = ::g::Fuse::Reactive::IEventRecord_typeof();
    ::TYPES[7] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL), NULL);
    ::TYPES[8] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[9] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL), NULL);
    ::TYPES[10] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::IDisposable_typeof();
    ::TYPES[11] = ::g::Fuse::Scripting::ScriptException_typeof();
    ::TYPES[4] = uObject_typeof()->Array();
    type->SetDependencies(
        ::g::Fuse::Reactive::JavaScript_typeof(),
        ::g::Uno::UX::Selector_typeof());
    type->SetFields(0,
        ::TYPES[6/*Fuse.Reactive.IEventRecord*/], offsetof(FunctionMirror__CallClosure, _e), 0,
        ::g::Fuse::Reactive::FunctionMirror_typeof(), offsetof(FunctionMirror__CallClosure, _f), 0);
}

uType* FunctionMirror__CallClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(FunctionMirror__CallClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.FunctionMirror.CallClosure", options);
    type->fp_build_ = FunctionMirror__CallClosure_build;
    return type;
}

// public CallClosure(Fuse.Reactive.FunctionMirror f, Fuse.Reactive.IEventRecord e) :25
void FunctionMirror__CallClosure__ctor__fn(FunctionMirror__CallClosure* __this, ::g::Fuse::Reactive::FunctionMirror* f, uObject* e)
{
    __this->ctor_(f, e);
}

// public void Call() :31
void FunctionMirror__CallClosure__Call_fn(FunctionMirror__CallClosure* __this)
{
    __this->Call();
}

// public CallClosure New(Fuse.Reactive.FunctionMirror f, Fuse.Reactive.IEventRecord e) :25
void FunctionMirror__CallClosure__New1_fn(::g::Fuse::Reactive::FunctionMirror* f, uObject* e, FunctionMirror__CallClosure** __retval)
{
    *__retval = FunctionMirror__CallClosure::New1(f, e);
}

// public CallClosure(Fuse.Reactive.FunctionMirror f, Fuse.Reactive.IEventRecord e) [instance] :25
void FunctionMirror__CallClosure::ctor_(::g::Fuse::Reactive::FunctionMirror* f, uObject* e)
{
    _f = f;
    _e = e;
}

// public void Call() [instance] :31
void FunctionMirror__CallClosure::Call()
{
    ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong<uObject*> > ret3;
    uPtr(_f)->ClearDiagnostic();
    ::g::Fuse::Scripting::Object* obj = uPtr(uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Context())->NewObject();

    if (::g::Fuse::Reactive::IEventRecord::Node(uInterface(uPtr(_e), ::TYPES[6/*Fuse.Reactive.IEventRecord*/])) != NULL)
        uPtr(obj)->Item(::STRINGS[1/*"node"*/], uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Unwrap(::g::Fuse::Reactive::IEventRecord::Node(uInterface(uPtr(_e), ::TYPES[6/*Fuse.Reactive.IEventRecord*/]))));

    if (::g::Fuse::Reactive::IEventRecord::Data(uInterface(uPtr(_e), ::TYPES[6/*Fuse.Reactive.IEventRecord*/])) != NULL)
        uPtr(obj)->Item(::STRINGS[2/*"data"*/], uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Unwrap(::g::Fuse::Reactive::IEventRecord::Data(uInterface(uPtr(_e), ::TYPES[6/*Fuse.Reactive.IEventRecord*/]))));

    if (::g::Uno::String::op_Inequality(::g::Uno::UX::Selector__op_Implicit1(::g::Fuse::Reactive::IEventRecord::Sender(uInterface(uPtr(_e), ::TYPES[6/*Fuse.Reactive.IEventRecord*/]))), NULL))
        uPtr(obj)->Item(::STRINGS[3/*"sender"*/], uBox(::TYPES[33/*Uno.UX.Selector*/], ::g::Fuse::Reactive::IEventRecord::Sender(uInterface(uPtr(_e), ::TYPES[6/*Fuse.Reactive.IEventRecord*/]))));

    if (::g::Fuse::Reactive::IEventRecord::Args(uInterface(uPtr(_e), ::TYPES[6/*Fuse.Reactive.IEventRecord*/])) != NULL)
    {
        uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(::g::Fuse::Reactive::IEventRecord::Args(uInterface(uPtr(_e), ::TYPES[6/*Fuse.Reactive.IEventRecord*/]))), ::TYPES[7/*Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string, object>>*/]));

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[3/*Uno.IDisposable*/]));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);

            while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[8/*Uno.Collections.IEnumerator*/])))
            {
                ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong<uObject*> > arg = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[9/*Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<string, object>>*/]), &ret3), ret3);
                uPtr(obj)->Item(arg.Key(::TYPES[10/*Uno.Collections.KeyValuePair<string, object>*/]), uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Unwrap(arg.Value(::TYPES[10/*Uno.Collections.KeyValuePair<string, object>*/])));
            }
        }
    }

    try
    {
        uPtr(uPtr(_f)->_func)->Call(uArray::Init<uObject*>(::TYPES[4/*object[]*/], 1, obj));
    }
    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[11/*Fuse.Scripting.ScriptException*/]))
        {
            ::g::Fuse::Scripting::ScriptException* ex = (::g::Fuse::Scripting::ScriptException*)__t.Exception;
            ::g::Fuse::Reactive::JavaScript::UserScriptError(::STRINGS[4/*"JavaScript ...*/], ex, this, ::STRINGS[5/*"/usr/local/...*/], 52, ::STRINGS[6/*"Call"*/]);
        }
        else throw __t;
    }
}

// public CallClosure New(Fuse.Reactive.FunctionMirror f, Fuse.Reactive.IEventRecord e) [static] :25
FunctionMirror__CallClosure* FunctionMirror__CallClosure::New1(::g::Fuse::Reactive::FunctionMirror* f, uObject* e)
{
    FunctionMirror__CallClosure* obj2 = (FunctionMirror__CallClosure*)uNew(FunctionMirror__CallClosure_typeof());
    obj2->ctor_(f, e);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/MathFunctions.uno
// -------------------------------------------------------------------------------

// public sealed class Clamp :467
// {
static void Clamp_build(uType* type)
{
    ::STRINGS[7] = uString::Const("clamp(");
    ::STRINGS[8] = uString::Const(",");
    ::STRINGS[9] = uString::Const(")");
    ::TYPES[12] = ::g::Fuse::Marshal_typeof()->MakeMethod(1/*TryToType<float>*/, ::g::Uno::Float_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator_type, interface0));
    type->SetFields(3);
}

::g::Fuse::Reactive::TernaryOperator_type* Clamp_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::TernaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::TernaryOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Clamp);
    options.TypeSize = sizeof(::g::Fuse::Reactive::TernaryOperator_type);
    type = (::g::Fuse::Reactive::TernaryOperator_type*)uClassType::New("Fuse.Reactive.Clamp", options);
    type->fp_build_ = Clamp_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::TernaryOperator*, uObject*, uObject*, uObject*, uObject**))Clamp__Compute_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Clamp__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::TernaryOperator__Subscribe_fn;
    return type;
}

// protected override sealed object Compute(object a, object mn, object mx) :475
void Clamp__Compute_fn(Clamp* __this, uObject* a, uObject* mn, uObject* mx, uObject** __retval)
{
    bool ret2;
    bool ret3;
    ::g::Uno::Float4 av = ::g::Uno::Float4__New1(0.0f);
    float mxv = 0.0f, mnv = 0.0f;
    int size = 0;

    if ((!::g::Fuse::Marshal::TryToZeroFloat4(a, &av, &size) || !(::g::Fuse::Marshal__TryToType_fn(::TYPES[12/*Fuse.Marshal.TryToType<float>*/], mn, &mnv, &ret2), ret2)) || !(::g::Fuse::Marshal__TryToType_fn(::TYPES[12/*Fuse.Marshal.TryToType<float>*/], mx, &mxv, &ret3), ret3))
        return *__retval = NULL, void();

    if (size == 1)
        return *__retval = uBox(::TYPES[21/*float*/], ::g::Uno::Math::Clamp1(av.X, mnv, mxv)), void();

    if (size == 2)
        return *__retval = uBox(::g::Uno::Float2_typeof(), ::g::Uno::Math::Clamp2(::g::Uno::Float2__New2(av.X, av.Y), mnv, mxv)), void();

    if (size == 3)
        return *__retval = uBox(::g::Uno::Float3_typeof(), ::g::Uno::Math::Clamp4(::g::Uno::Float3__New2(av.X, av.Y, av.Z), mnv, mxv)), void();

    if (size == 4)
        return *__retval = uBox(::g::Uno::Float4_typeof(), ::g::Uno::Math::Clamp6(av, mnv, mxv)), void();

    return *__retval = NULL, void();
}

// public override sealed string ToString() :496
void Clamp__ToString_fn(Clamp* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[7/*"clamp("*/], __this->First()), ::STRINGS[8/*","*/]), __this->Second()), ::STRINGS[8/*","*/]), __this->Third()), ::STRINGS[9/*")"*/]), void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/ClassInstance.uno
// ------------------------------------------------------------------------------

// internal sealed class ClassInstance :10
// {
static void ClassInstance_build(uType* type)
{
    ::STRINGS[10] = uString::Const("_tempMethod");
    ::TYPES[13] = ::g::Fuse::INotifyUnrooted_typeof();
    ::TYPES[14] = ::g::Uno::Action_typeof();
    ::TYPES[15] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::UX::Property_typeof(), ::g::Fuse::Reactive::ObservableProperty_typeof(), NULL);
    ::TYPES[16] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[17] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL);
    ::TYPES[18] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL);
    ::TYPES[19] = ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator_typeof()->MakeType(::g::Uno::UX::Property_typeof(), ::g::Fuse::Reactive::ObservableProperty_typeof(), NULL);
    type->SetFields(0,
        uObject_typeof(), offsetof(ClassInstance, _obj), 0,
        ::TYPES[15/*Uno.Collections.Dictionary<Uno.UX.Property, Fuse.Reactive.ObservableProperty>*/], offsetof(ClassInstance, _properties), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(ClassInstance, _rootTable), 0,
        ::TYPES[16/*Fuse.Scripting.Object*/], offsetof(ClassInstance, _self), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(ClassInstance, _worker), 0);
}

uType* ClassInstance_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ClassInstance);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.ClassInstance", options);
    type->fp_build_ = ClassInstance_build;
    return type;
}

// internal ClassInstance(Fuse.Reactive.ThreadWorker context, object obj, Uno.UX.NameTable rootTable) :29
void ClassInstance__ctor__fn(ClassInstance* __this, ::g::Fuse::Reactive::ThreadWorker* context, uObject* obj, ::g::Uno::UX::NameTable* rootTable)
{
    __this->ctor_(context, obj, rootTable);
}

// public void CallMethod(Fuse.Scripting.Function method, object[] args) :37
void ClassInstance__CallMethod_fn(ClassInstance* __this, ::g::Fuse::Scripting::Function* method, uArray* args)
{
    __this->CallMethod(method, args);
}

// private void DispatchUnroot() :74
void ClassInstance__DispatchUnroot_fn(ClassInstance* __this)
{
    __this->DispatchUnroot();
}

// private void EnsureHasProperties() :69
void ClassInstance__EnsureHasProperties_fn(ClassInstance* __this)
{
    __this->EnsureHasProperties();
}

// public void EnsureRooted() :45
void ClassInstance__EnsureRooted_fn(ClassInstance* __this)
{
    __this->EnsureRooted();
}

// internal Fuse.Scripting.Object GetPropertyObservable(Uno.UX.Property p) :81
void ClassInstance__GetPropertyObservable_fn(ClassInstance* __this, ::g::Uno::UX::Property* p, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->GetPropertyObservable(p);
}

// internal ClassInstance New(Fuse.Reactive.ThreadWorker context, object obj, Uno.UX.NameTable rootTable) :29
void ClassInstance__New1_fn(::g::Fuse::Reactive::ThreadWorker* context, uObject* obj, ::g::Uno::UX::NameTable* rootTable, ClassInstance** __retval)
{
    *__retval = ClassInstance::New1(context, obj, rootTable);
}

// private void Unroot() :94
void ClassInstance__Unroot_fn(ClassInstance* __this)
{
    __this->Unroot();
}

// internal ClassInstance(Fuse.Reactive.ThreadWorker context, object obj, Uno.UX.NameTable rootTable) [instance] :29
void ClassInstance::ctor_(::g::Fuse::Reactive::ThreadWorker* context, uObject* obj, ::g::Uno::UX::NameTable* rootTable)
{
    _worker = context;
    _rootTable = rootTable;
    _obj = obj;
}

// public void CallMethod(Fuse.Scripting.Function method, object[] args) [instance] :37
void ClassInstance::CallMethod(::g::Fuse::Scripting::Function* method, uArray* args)
{
    uPtr(_self)->Item(::STRINGS[10/*"_tempMethod"*/], method);
    uPtr(_self)->CallMethod(::STRINGS[10/*"_tempMethod"*/], args);
}

// private void DispatchUnroot() [instance] :74
void ClassInstance::DispatchUnroot()
{
    uObject* n = (uObject*)uPtr(_rootTable)->This();
    ::g::Fuse::INotifyUnrooted::remove_Unrooted(uInterface(uPtr(n), ::TYPES[13/*Fuse.INotifyUnrooted*/]), uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)ClassInstance__DispatchUnroot_fn, this));
    uPtr(_worker)->Invoke(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)ClassInstance__Unroot_fn, this));
}

// private void EnsureHasProperties() [instance] :69
void ClassInstance::EnsureHasProperties()
{
    if (_properties == NULL)
        _properties = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[15/*Uno.Collections.Dictionary<Uno.UX.Property, Fuse.Reactive.ObservableProperty>*/]));
}

// public void EnsureRooted() [instance] :45
void ClassInstance::EnsureRooted()
{
    ::g::Uno::UX::Property* ret4;
    bool ret5;

    if (_self != NULL)
        return;

    uObject* n = uAs<uObject*>(_obj, ::TYPES[13/*Fuse.INotifyUnrooted*/]);

    if (n != NULL)
        ::g::Fuse::INotifyUnrooted::add_Unrooted(uInterface(uPtr(n), ::TYPES[13/*Fuse.INotifyUnrooted*/]), uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)ClassInstance__DispatchUnroot_fn, this));

    _self = uAs< ::g::Fuse::Scripting::Object*>(uPtr(_worker)->Unwrap(_obj), ::TYPES[16/*Fuse.Scripting.Object*/]);

    if (_properties == NULL)
    {
        if (_rootTable != NULL)
        {
            EnsureHasProperties();

            for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(_rootTable)->Properties()), ::TYPES[17/*Uno.Collections.ICollection<Uno.UX.Property>*/])); i++)
            {
                ::g::Uno::UX::Property* p = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(_rootTable)->Properties()), ::TYPES[18/*Uno.Collections.IList<Uno.UX.Property>*/]), uCRef<int>(i), &ret4), ret4);

                if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(_properties), p, &ret5), ret5))
                    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_properties), p, ::g::Fuse::Reactive::LazyObservableProperty::New2(_worker, _self, p));
            }
        }
    }
}

// internal Fuse.Scripting.Object GetPropertyObservable(Uno.UX.Property p) [instance] :81
::g::Fuse::Scripting::Object* ClassInstance::GetPropertyObservable(::g::Uno::UX::Property* p)
{
    bool ret7;
    EnsureHasProperties();
    ::g::Fuse::Reactive::ObservableProperty* op;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_properties), p, (void**)(&op), &ret7), ret7))
    {
        op = ::g::Fuse::Reactive::ObservableProperty::New1(_worker, _self, p);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_properties), p, op);
    }

    return uPtr(uPtr(op)->GetObservable())->Object();
}

// private void Unroot() [instance] :94
void ClassInstance::Unroot()
{
    ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong< ::g::Fuse::Reactive::ObservableProperty*> > ret8;

    if (_self == NULL)
        return;

    if (_properties != NULL)
    {
        ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong< ::g::Fuse::Reactive::ObservableProperty*> > enum2 = (::g::Uno::Collections::Dictionary__ValueCollection__GetEnumerator_fn(uPtr((::g::Uno::Collections::Dictionary__ValueCollection*)uPtr(_properties)->Values()), &ret8), ret8);

        {
            const auto __finally_fun = [&]()
            {
                enum2.Dispose(::TYPES[19/*Uno.Collections.Dictionary<Uno.UX.Property, Fuse.Reactive.ObservableProperty>.ValueCollection.Enumerator*/]);
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);

            while (enum2.MoveNext(::TYPES[19/*Uno.Collections.Dictionary<Uno.UX.Property, Fuse.Reactive.ObservableProperty>.ValueCollection.Enumerator*/]))
            {
                ::g::Fuse::Reactive::ObservableProperty* p = enum2.Current(::TYPES[19/*Uno.Collections.Dictionary<Uno.UX.Property, Fuse.Reactive.ObservableProperty>.ValueCollection.Enumerator*/]);
                uPtr(p)->Reset();
            }
        }
    }

    _self = NULL;
}

// internal ClassInstance New(Fuse.Reactive.ThreadWorker context, object obj, Uno.UX.NameTable rootTable) [static] :29
ClassInstance* ClassInstance::New1(::g::Fuse::Reactive::ThreadWorker* context, uObject* obj, ::g::Uno::UX::NameTable* rootTable)
{
    ClassInstance* obj3 = (ClassInstance*)uNew(ClassInstance_typeof());
    obj3->ctor_(context, obj, rootTable);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/Observable.uno
// ---------------------------------------------------------------------------

// private sealed class Observable.Clear :337
// {
static void Observable__Clear_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(Observable__Clear, _origin), 0);
}

::g::Fuse::Reactive::Observable__Operation_type* Observable__Clear_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Observable__Operation_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Observable__Clear);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Observable__Operation_type);
    type = (::g::Fuse::Reactive::Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.Clear", options);
    type->fp_build_ = Observable__Clear_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Reactive::Observable__Operation*, uObject*))Observable__Clear__OnPerform_fn;
    return type;
}

// public Clear(Fuse.Reactive.Observable obs, int origin) :341
void Observable__Clear__ctor_1_fn(Observable__Clear* __this, ::g::Fuse::Reactive::Observable* obs, int* origin)
{
    __this->ctor_1(obs, *origin);
}

// public Clear New(Fuse.Reactive.Observable obs, int origin) :341
void Observable__Clear__New1_fn(::g::Fuse::Reactive::Observable* obs, int* origin, Observable__Clear** __retval)
{
    *__retval = Observable__Clear::New1(obs, *origin);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription> sub) :346
void Observable__Clear__OnPerform_fn(Observable__Clear* __this, uObject* sub)
{
    ::g::Fuse::Reactive::Observable__Subscription* ret2;
    ::g::Fuse::Reactive::Observable__Subscription* ret3;
    uPtr(__this->Observable())->UnsubscribeValues();
    uPtr(uPtr(__this->Observable())->_values)->Clear();

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Reactive.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret2), ret2))->ShouldSend(__this->_origin))
            ::g::Fuse::Reactive::IObserver::OnClear(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret3), ret3))->Observer()), ::TYPES[2/*Fuse.Reactive.IObserver*/]));
}

// public Clear(Fuse.Reactive.Observable obs, int origin) [instance] :341
void Observable__Clear::ctor_1(::g::Fuse::Reactive::Observable* obs, int origin)
{
    ctor_(obs);
    _origin = origin;
}

// public Clear New(Fuse.Reactive.Observable obs, int origin) [static] :341
Observable__Clear* Observable__Clear::New1(::g::Fuse::Reactive::Observable* obs, int origin)
{
    Observable__Clear* obj1 = (Observable__Clear*)uNew(Observable__Clear_typeof());
    obj1->ctor_1(obs, origin);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Operators.uno
// ---------------------------------------------------------------------------

// public sealed class Conditional :83
// {
static void Conditional_build(uType* type)
{
    ::STRINGS[11] = uString::Const("(");
    ::STRINGS[12] = uString::Const(" ? ");
    ::STRINGS[13] = uString::Const(" : ");
    ::STRINGS[9] = uString::Const(")");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator_type, interface0));
    type->SetFields(3);
}

::g::Fuse::Reactive::TernaryOperator_type* Conditional_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::TernaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::TernaryOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Conditional);
    options.TypeSize = sizeof(::g::Fuse::Reactive::TernaryOperator_type);
    type = (::g::Fuse::Reactive::TernaryOperator_type*)uClassType::New("Fuse.Reactive.Conditional", options);
    type->fp_build_ = Conditional_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::TernaryOperator*, uObject*, uObject*, uObject*, uObject**))Conditional__Compute_fn;
    type->fp_get_IsThirdOptional = (void(*)(::g::Fuse::Reactive::TernaryOperator*, bool*))Conditional__get_IsThirdOptional_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Conditional__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::TernaryOperator__Subscribe_fn;
    return type;
}

// protected override sealed object Compute(object cond, object trueVal, object falseVal) :89
void Conditional__Compute_fn(Conditional* __this, uObject* cond, uObject* trueVal, uObject* falseVal, uObject** __retval)
{
    if (cond == NULL)
        return *__retval = NULL, void();

    if (::g::Fuse::Marshal::ToBool(cond))
        return *__retval = trueVal, void();

    return *__retval = falseVal, void();
}

// protected override sealed bool get_IsThirdOptional() :96
void Conditional__get_IsThirdOptional_fn(Conditional* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public override sealed string ToString() :98
void Conditional__ToString_fn(Conditional* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[11/*"("*/], __this->First()), ::STRINGS[12/*" ? "*/]), __this->Second()), ::STRINGS[13/*" : "*/]), __this->Third()), ::STRINGS[9/*")"*/]), void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/FuseJS/DebugLog.uno
// --------------------------------------------------------------------------------

// internal static class Console :24
// {
static void Console_build(uType* type)
{
    ::STRINGS[14] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/FuseJS/DebugLog.uno");
    ::STRINGS[15] = uString::Const("null");
    ::STRINGS[16] = uString::Const("\"");
    ::STRINGS[17] = uString::Const("function");
    ::STRINGS[18] = uString::Const("Object");
    ::STRINGS[19] = uString::Const("");
    ::STRINGS[20] = uString::Const(": ");
    ::STRINGS[21] = uString::Const("Array[");
    ::STRINGS[22] = uString::Const("]");
    ::STRINGS[23] = uString::Const("  ");
    ::STRINGS[24] = uString::Const("log");
    ::STRINGS[25] = uString::Const("dir");
    ::STRINGS[26] = uString::Const("console");
    ::TYPES[20] = ::g::Uno::Int_typeof();
    ::TYPES[21] = ::g::Uno::Float_typeof();
    ::TYPES[22] = ::g::Uno::Double_typeof();
    ::TYPES[23] = ::g::Uno::Bool_typeof();
    ::TYPES[24] = ::g::Uno::String_typeof();
    ::TYPES[25] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[16] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[26] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[27] = ::g::Fuse::Scripting::Callback_typeof();
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof());
}

uClassType* Console_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.Console", options);
    type->fp_build_ = Console_build;
    return type;
}

// private static object Dir(object[] args) :45
void Console__Dir_fn(uArray* args, uObject** __retval)
{
    *__retval = Console::Dir(args);
}

// private static void Dir(Uno.Text.StringBuilder builder, object obj, [int maxDepth], [int indent]) :57
void Console__Dir1_fn(::g::Uno::Text::StringBuilder* builder, uObject* obj, int* maxDepth, int* indent)
{
    Console::Dir1(builder, obj, *maxDepth, *indent);
}

// private static void Indent(Uno.Text.StringBuilder builder, int indent) :126
void Console__Indent_fn(::g::Uno::Text::StringBuilder* builder, int* indent)
{
    Console::Indent(builder, *indent);
}

// public static void Init(Fuse.Scripting.Context c) :26
void Console__Init_fn(::g::Fuse::Scripting::Context* c)
{
    Console::Init(c);
}

// private static object Log(object[] args) :35
void Console__Log_fn(uArray* args, uObject** __retval)
{
    *__retval = Console::Log(args);
}

// private static object Dir(object[] args) [static] :45
uObject* Console::Dir(uArray* args)
{
    int maxDepth = 1;
    ::g::Uno::Text::StringBuilder* builder = ::g::Uno::Text::StringBuilder::New1();

    for (int i = 0; i < uPtr(args)->Length(); i++)
        Console::Dir1(builder, uPtr(args)->Strong<uObject*>(i), 1, 0);

    ::g::Uno::Diagnostics::Debug::Log5(builder->ToString(), 0, ::STRINGS[14/*"/usr/local/...*/], 53);
    return NULL;
}

// private static void Dir(Uno.Text.StringBuilder builder, object obj, [int maxDepth], [int indent]) [static] :57
void Console::Dir1(::g::Uno::Text::StringBuilder* builder, uObject* obj, int maxDepth, int indent)
{
    uArray* array1;
    int index2;
    int length3;
    indent++;

    if (obj == NULL)
    {
        uPtr(builder)->AppendLine(::STRINGS[15/*"null"*/]);
        return;
    }

    if ((uIs(obj, ::TYPES[20/*int*/]) || uIs(obj, ::TYPES[21/*float*/])) || uIs(obj, ::TYPES[22/*double*/]))
    {
        uPtr(builder)->AppendLine(::g::Uno::Object::ToString(uPtr(obj)));
        return;
    }

    if (uIs(obj, ::TYPES[23/*bool*/]))
    {
        uPtr(builder)->AppendLine(::g::Uno::String::ToLower(uPtr(::g::Uno::Object::ToString(uPtr(obj)))));
        return;
    }

    if (uIs(obj, ::TYPES[24/*string*/]))
    {
        uPtr(builder)->AppendLine(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[16/*"\""*/], ::g::Uno::Object::ToString(uPtr(obj))), ::STRINGS[16/*"\""*/]));
        return;
    }

    if (uIs(obj, ::TYPES[25/*Fuse.Scripting.Function*/]))
    {
        uPtr(builder)->AppendLine(::STRINGS[17/*"function"*/]);
        return;
    }

    if (uIs(obj, ::TYPES[16/*Fuse.Scripting.Object*/]))
    {
        ::g::Fuse::Scripting::Object* o = uCast< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[16/*Fuse.Scripting.Object*/]);
        uPtr(builder)->AppendLine(::STRINGS[18/*"Object"*/]);

        if (indent <= maxDepth)

            for (array1 = uPtr(o)->Keys(), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
            {
                uString* k = uPtr(array1)->Strong<uString*>(index2);
                Console::Indent(builder, indent);
                uPtr(builder)->Append2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[19/*""*/], k), ::STRINGS[20/*": "*/]));
                Console::Dir1(builder, uPtr(o)->Item(k), maxDepth, indent);
            }

        return;
    }

    if (uIs(obj, ::TYPES[26/*Fuse.Scripting.Array*/]))
    {
        ::g::Fuse::Scripting::Array* a = uCast< ::g::Fuse::Scripting::Array*>(obj, ::TYPES[26/*Fuse.Scripting.Array*/]);
        uPtr(builder)->AppendLine(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[21/*"Array["*/], uBox<int>(::TYPES[20/*int*/], uPtr(a)->Length())), ::STRINGS[22/*"]"*/]));

        if (indent <= maxDepth)

            for (int i = 0; i < uPtr(a)->Length(); i++)
            {
                Console::Indent(builder, indent);
                uPtr(builder)->Append2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[19/*""*/], uBox<int>(::TYPES[20/*int*/], i)), ::STRINGS[20/*": "*/]));
                Console::Dir1(builder, uPtr(a)->Item(i), maxDepth, indent);
            }

        return;
    }

    uPtr(builder)->AppendLine(::g::Uno::Object::ToString(uPtr(obj)));
}

// private static void Indent(Uno.Text.StringBuilder builder, int indent) [static] :126
void Console::Indent(::g::Uno::Text::StringBuilder* builder, int indent)
{
    for (int i = 0; i < indent; i++)
        uPtr(builder)->Append2(::STRINGS[23/*"  "*/]);
}

// public static void Init(Fuse.Scripting.Context c) [static] :26
void Console::Init(::g::Fuse::Scripting::Context* c)
{
    ::g::Fuse::Scripting::Object* console = uPtr(c)->NewObject();
    uPtr(console)->Item(::STRINGS[24/*"log"*/], uDelegate::New(::TYPES[27/*Fuse.Scripting.Callback*/], (void*)Console__Log_fn));
    console->Item(::STRINGS[25/*"dir"*/], uDelegate::New(::TYPES[27/*Fuse.Scripting.Callback*/], (void*)Console__Dir_fn));
    uPtr(c->GlobalObject())->Item(::STRINGS[26/*"console"*/], console);
}

// private static object Log(object[] args) [static] :35
uObject* Console::Log(uArray* args)
{
    for (int i = 0; i < uPtr(args)->Length(); i++)
        ::g::Uno::Diagnostics::Debug::Log5((uPtr(args)->Strong<uObject*>(i) != NULL) ? (uString*)::g::Uno::Object::ToString(uPtr(uPtr(args)->Strong<uObject*>(i))) : ::STRINGS[15/*"null"*/], 0, ::STRINGS[14/*"/usr/local/...*/], 39);

    return NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Expression.uno
// ----------------------------------------------------------------------------

// public sealed class Constant :24
// {
static void Constant_build(uType* type)
{
    ::STRINGS[27] = uString::Const("'");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::ConstantExpression_type, interface0));
    type->SetFields(0,
        uObject_typeof(), offsetof(Constant, _Value), 0);
}

::g::Fuse::Reactive::ConstantExpression_type* Constant_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ConstantExpression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ConstantExpression_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Constant);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ConstantExpression_type);
    type = (::g::Fuse::Reactive::ConstantExpression_type*)uClassType::New("Fuse.Reactive.Constant", options);
    type->fp_build_ = Constant_build;
    type->fp_GetValue = (void(*)(::g::Fuse::Reactive::ConstantExpression*, uObject*, uObject**))Constant__GetValue_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Constant__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::ConstantExpression__Subscribe_fn;
    return type;
}

// public Constant(object value) :28
void Constant__ctor_2_fn(Constant* __this, uObject* value)
{
    __this->ctor_2(value);
}

// public override sealed object GetValue(Fuse.Reactive.IContext context) :29
void Constant__GetValue_fn(Constant* __this, uObject* context, uObject** __retval)
{
    return *__retval = __this->Value(), void();
}

// public Constant New(object value) :28
void Constant__New1_fn(uObject* value, Constant** __retval)
{
    *__retval = Constant::New1(value);
}

// public override sealed string ToString() :31
void Constant__ToString_fn(Constant* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[27/*"'"*/], ::g::Uno::Object::ToString(uPtr(__this->Value()))), ::STRINGS[27/*"'"*/]), void();
}

// public generated object get_Value() :26
void Constant__get_Value_fn(Constant* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// private generated void set_Value(object value) :26
void Constant__set_Value_fn(Constant* __this, uObject* value)
{
    __this->Value(value);
}

// public Constant(object value) [instance] :28
void Constant::ctor_2(uObject* value)
{
    ctor_1();
    Value(value);
}

// public generated object get_Value() [instance] :26
uObject* Constant::Value()
{
    return _Value;
}

// private generated void set_Value(object value) [instance] :26
void Constant::Value(uObject* value)
{
    _Value = value;
}

// public Constant New(object value) [static] :28
Constant* Constant::New1(uObject* value)
{
    Constant* obj1 = (Constant*)uNew(Constant_typeof());
    obj1->ctor_2(value);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Expression.uno
// ----------------------------------------------------------------------------

// public abstract class ConstantExpression :13
// {
static void ConstantExpression_build(uType* type)
{
    ::TYPES[28] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(ConstantExpression_type, interface0));
}

ConstantExpression_type* ConstantExpression_typeof()
{
    static uSStrong<ConstantExpression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ConstantExpression);
    options.TypeSize = sizeof(ConstantExpression_type);
    type = (ConstantExpression_type*)uClassType::New("Fuse.Reactive.ConstantExpression", options);
    type->fp_build_ = ConstantExpression_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))ConstantExpression__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))ConstantExpression__Subscribe_fn;
    return type;
}

// protected generated ConstantExpression() :13
void ConstantExpression__ctor_1_fn(ConstantExpression* __this)
{
    __this->ctor_1();
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :17
void ConstantExpression__Subscribe_fn(ConstantExpression* __this, uObject* context, uObject* listener, uObject** __retval)
{
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(listener), ::TYPES[28/*Fuse.Reactive.IListener*/]), (uObject*)__this, __this->GetValue(context));
    return *__retval = NULL, void();
}

// protected generated ConstantExpression() [instance] :13
void ConstantExpression::ctor_1()
{
    ctor_();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/Instance.API.uno
// ---------------------------------------------------------------------------

// private sealed class Instantiator.CountItem :301
// {
static void Instantiator__CountItem_build(uType* type)
{
}

uType* Instantiator__CountItem_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Instantiator__CountItem);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.Instantiator.CountItem", options);
    type->fp_build_ = Instantiator__CountItem_build;
    type->fp_ctor_ = (void*)Instantiator__CountItem__New1_fn;
    return type;
}

// public generated CountItem() :301
void Instantiator__CountItem__ctor__fn(Instantiator__CountItem* __this)
{
    __this->ctor_();
}

// public generated CountItem New() :301
void Instantiator__CountItem__New1_fn(Instantiator__CountItem** __retval)
{
    *__retval = Instantiator__CountItem::New1();
}

// public generated CountItem() [instance] :301
void Instantiator__CountItem::ctor_()
{
}

// public generated CountItem New() [static] :301
Instantiator__CountItem* Instantiator__CountItem::New1()
{
    Instantiator__CountItem* obj1 = (Instantiator__CountItem*)uNew(Instantiator__CountItem_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Expression.uno
// ----------------------------------------------------------------------------

// public sealed class Data :37
// {
static void Data_build(uType* type)
{
    ::STRINGS[28] = uString::Const("{");
    ::STRINGS[29] = uString::Const("}");
    ::TYPES[29] = ::g::Fuse::Reactive::IContext_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(Data, _Key), 0);
}

::g::Fuse::Reactive::Expression_type* Data_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Data);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.Data", options);
    type->fp_build_ = Data_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))Data__Subscribe_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Data__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))Data__Subscribe_fn;
    return type;
}

// public Data(string key) :41
void Data__ctor_1_fn(Data* __this, uString* key)
{
    __this->ctor_1(key);
}

// public generated string get_Key() :39
void Data__get_Key_fn(Data* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(string value) :39
void Data__set_Key_fn(Data* __this, uString* value)
{
    __this->Key(value);
}

// public Data New(string key) :41
void Data__New1_fn(uString* key, Data** __retval)
{
    *__retval = Data::New1(key);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :43
void Data__Subscribe_fn(Data* __this, uObject* context, uObject* listener, uObject** __retval)
{
    return *__retval = ::g::Fuse::Reactive::IContext::Subscribe(uInterface(uPtr(context), ::TYPES[29/*Fuse.Reactive.IContext*/]), (uObject*)__this, __this->Key(), listener), void();
}

// public override sealed string ToString() :48
void Data__ToString_fn(Data* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[28/*"{"*/], __this->Key()), ::STRINGS[29/*"}"*/]), void();
}

// public Data(string key) [instance] :41
void Data::ctor_1(uString* key)
{
    ctor_();
    Key(key);
}

// public generated string get_Key() [instance] :39
uString* Data::Key()
{
    return _Key;
}

// private generated void set_Key(string value) [instance] :39
void Data::Key(uString* value)
{
    _Key = value;
}

// public Data New(string key) [static] :41
Data* Data::New1(uString* key)
{
    Data* obj1 = (Data*)uNew(Data_typeof());
    obj1->ctor_1(key);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/DataBinding.uno
// --------------------------------------------------------------------------

// public sealed class DataBinding :45
// {
static void DataBinding_build(uType* type)
{
    ::STRINGS[19] = uString::Const("");
    ::STRINGS[30] = uString::Const("Cannot bind '");
    ::STRINGS[31] = uString::Const("' to property '");
    ::STRINGS[32] = uString::Const("'. The observable must contain exactly one ");
    ::STRINGS[33] = uString::Const(".");
    ::STRINGS[34] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/DataBinding.uno");
    ::STRINGS[35] = uString::Const("InvalidListOperation");
    ::STRINGS[36] = uString::Const("TryPushAsMarshalledValue");
    ::STRINGS[37] = uString::Const("number");
    ::STRINGS[38] = uString::Const("string");
    ::STRINGS[39] = uString::Const("value that can be converted to type ");
    ::TYPES[30] = ::g::Fuse::IArray_typeof();
    ::TYPES[3] = ::g::Uno::IDisposable_typeof();
    ::TYPES[31] = ::g::Uno::Type_typeof();
    ::TYPES[32] = ::g::Fuse::Reactive::IObservable_typeof();
    ::TYPES[33] = ::g::Uno::UX::Selector_typeof();
    ::TYPES[24] = ::g::Uno::String_typeof();
    ::TYPES[34] = ::g::Uno::Exception_typeof();
    ::TYPES[35] = ::g::Uno::Predicate_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[36] = ::g::Fuse::Reactive::ISubscription_typeof();
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Fuse::NameRegistry_typeof(),
        ::g::Uno::UX::Selector_typeof(),
        ::g::Uno::Type_typeof());
    type->SetInterfaces(
        ::g::Fuse::Reactive::IContext_typeof(), offsetof(DataBinding_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(DataBinding_type, interface1),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(DataBinding_type, interface2),
        ::g::Fuse::INameListener_typeof(), offsetof(DataBinding_type, interface3),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(DataBinding_type, interface4));
    type->SetFields(3,
        ::g::Fuse::Triggers::BusyTask_typeof(), offsetof(DataBinding, _busyTask), 0,
        uObject_typeof(), offsetof(DataBinding, _currentValue), 0,
        ::g::Fuse::Reactive::BindingMode_typeof(), offsetof(DataBinding, _mode), 0,
        ::TYPES[24/*string*/], offsetof(DataBinding, _registryName), 0,
        ::TYPES[36/*Fuse.Reactive.ISubscription*/], offsetof(DataBinding, _subscription), 0,
        ::g::Uno::UX::Property_typeof(), offsetof(DataBinding, _Target), 0);
}

DataBinding_type* DataBinding_typeof()
{
    static uSStrong<DataBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ExpressionBinding_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 5;
    options.DependencyCount = 4;
    options.ObjectSize = sizeof(DataBinding);
    options.TypeSize = sizeof(DataBinding_type);
    type = (DataBinding_type*)uClassType::New("Fuse.Reactive.DataBinding", options);
    type->fp_build_ = DataBinding_build;
    type->fp_NewValue = (void(*)(::g::Fuse::Reactive::ExpressionBinding*, uObject*))DataBinding__NewValue_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Binding*))DataBinding__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Binding*))DataBinding__OnUnrooted_fn;
    type->fp_SubscribeResource = (void(*)(::g::Fuse::Reactive::ExpressionBinding*, uObject*, uString*, uObject*, uObject**))DataBinding__SubscribeResource_fn;
    type->interface2.fp_OnClear = (void(*)(uObject*))DataBinding__FuseReactiveIObserverOnClear_fn;
    type->interface2.fp_OnSet = (void(*)(uObject*, uObject*))DataBinding__FuseReactiveIObserverOnSet_fn;
    type->interface2.fp_OnAdd = (void(*)(uObject*, uObject*))DataBinding__FuseReactiveIObserverOnAdd_fn;
    type->interface2.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))DataBinding__FuseReactiveIObserverOnNewAt_fn;
    type->interface2.fp_OnFailed = (void(*)(uObject*, uString*))DataBinding__FuseReactiveIObserverOnFailed_fn;
    type->interface2.fp_OnNewAll = (void(*)(uObject*, uObject*))DataBinding__FuseReactiveIObserverOnNewAll_fn;
    type->interface2.fp_OnRemoveAt = (void(*)(uObject*, int*))DataBinding__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface2.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))DataBinding__FuseReactiveIObserverOnInsertAt_fn;
    type->interface3.fp_OnNameChanged = (void(*)(uObject*, ::g::Fuse::Node*, ::g::Uno::UX::Selector*))DataBinding__FuseINameListenerOnNameChanged_fn;
    type->interface4.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIContextSubscribe_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_get_Node = (void(*)(uObject*, ::g::Fuse::Node**))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIContextget_Node_fn;
    type->interface0.fp_SubscribeResource = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))DataBinding__SubscribeResource_fn;
    return type;
}

// public DataBinding(Uno.UX.Property target, Fuse.Reactive.IExpression key, Fuse.Reactive.BindingMode mode) :53
void DataBinding__ctor_2_fn(DataBinding* __this, ::g::Uno::UX::Property* target, uObject* key, int* mode)
{
    __this->ctor_2(target, key, *mode);
}

// private bool Acceptor(object obj) :293
void DataBinding__Acceptor_fn(DataBinding* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->Acceptor(obj);
}

// private bool get_Clear() :69
void DataBinding__get_Clear_fn(DataBinding* __this, bool* __retval)
{
    *__retval = __this->Clear();
}

// private void ClearFailed() :138
void DataBinding__ClearFailed_fn(DataBinding* __this)
{
    __this->ClearFailed();
}

// private void ClearValue() :167
void DataBinding__ClearValue_fn(DataBinding* __this)
{
    __this->ClearValue();
}

// private void Fuse.INameListener.OnNameChanged(Fuse.Node obj, Uno.UX.Selector name) :172
void DataBinding__FuseINameListenerOnNameChanged_fn(DataBinding* __this, ::g::Fuse::Node* obj, ::g::Uno::UX::Selector* name)
{
    __this->PushValue(__this->_currentValue);
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :93
void DataBinding__FuseReactiveIObserverOnAdd_fn(DataBinding* __this, uObject* addedValue)
{
    __this->InvalidListOperation();
}

// private void Fuse.Reactive.IObserver.OnClear() :71
void DataBinding__FuseReactiveIObserverOnClear_fn(DataBinding* __this)
{
    __this->ClearValue();
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :103
void DataBinding__FuseReactiveIObserverOnFailed_fn(DataBinding* __this, uString* message)
{
    __this->ClearValue();
    __this->MarkFailed(message);
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :120
void DataBinding__FuseReactiveIObserverOnInsertAt_fn(DataBinding* __this, int* index, uObject* value)
{
    __this->InvalidListOperation();
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray values) :109
void DataBinding__FuseReactiveIObserverOnNewAll_fn(DataBinding* __this, uObject* values)
{
    if (::g::Fuse::IArray::Length(uInterface(uPtr(values), ::TYPES[30/*Fuse.IArray*/])) > 0)
        __this->InvalidListOperation();
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :98
void DataBinding__FuseReactiveIObserverOnNewAt_fn(DataBinding* __this, int* index, uObject* value)
{
    __this->InvalidListOperation();
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :115
void DataBinding__FuseReactiveIObserverOnRemoveAt_fn(DataBinding* __this, int* index)
{
    __this->InvalidListOperation();
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :76
void DataBinding__FuseReactiveIObserverOnSet_fn(DataBinding* __this, uObject* newValue)
{
    __this->PushValue(newValue);
}

// private void InvalidListOperation() :88
void DataBinding__InvalidListOperation_fn(DataBinding* __this)
{
    __this->InvalidListOperation();
}

// private void MarkFailed(string message) :133
void DataBinding__MarkFailed_fn(DataBinding* __this, uString* message)
{
    __this->MarkFailed(message);
}

// public DataBinding New(Uno.UX.Property target, Fuse.Reactive.IExpression key, Fuse.Reactive.BindingMode mode) :53
void DataBinding__New1_fn(::g::Uno::UX::Property* target, uObject* key, int* mode, DataBinding** __retval)
{
    *__retval = DataBinding::New1(target, key, *mode);
}

// internal override sealed void NewValue(object value) :194
void DataBinding__NewValue_fn(DataBinding* __this, uObject* value)
{
    if (__this->_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_subscription), ::TYPES[3/*Uno.IDisposable*/]));
        __this->_subscription = NULL;
    }

    if (::g::Fuse::Marshal::Is(value, uPtr(__this->Target())->PropertyType()))
        __this->PushValue(value);
    else if (::g::Fuse::Marshal::Is(value, ::TYPES[32/*Fuse.Reactive.IObservable*/]))
    {
        uObject* obs = (uObject*)value;
        __this->_subscription = ::g::Fuse::Reactive::IObservable::Subscribe(uInterface(uPtr(obs), ::TYPES[32/*Fuse.Reactive.IObservable*/]), (uObject*)__this);
    }
    else
        __this->PushValue(value);
}

// protected override sealed void OnRooted() :125
void DataBinding__OnRooted_fn(DataBinding* __this)
{
    ::g::Fuse::Reactive::ExpressionBinding__OnRooted_fn(__this);

    if (__this->Write() && uPtr(__this->Target())->SupportsOriginSetter())
        uPtr(__this->Target())->AddListener((uObject*)__this);
}

// protected override sealed void OnUnrooted() :144
void DataBinding__OnUnrooted_fn(DataBinding* __this)
{
    __this->ClearFailed();
    __this->UnlistenNameRegistry();

    if (__this->Write() && uPtr(__this->Target())->SupportsOriginSetter())
        uPtr(__this->Target())->RemoveListener((uObject*)__this);

    if (__this->_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_subscription), ::TYPES[3/*Uno.IDisposable*/]));
        __this->_subscription = NULL;
    }

    __this->ClearValue();
    ::g::Fuse::Reactive::ExpressionBinding__OnUnrooted_fn(__this);
}

// protected void PushValue(object newValue) :223
void DataBinding__PushValue_fn(DataBinding* __this, uObject* newValue)
{
    __this->PushValue(newValue);
}

// private bool get_Read() :67
void DataBinding__get_Read_fn(DataBinding* __this, bool* __retval)
{
    *__retval = __this->Read();
}

// internal void SetTarget(object value) :161
void DataBinding__SetTarget_fn(DataBinding* __this, uObject* value)
{
    __this->SetTarget(value);
}

// public override sealed Uno.IDisposable SubscribeResource(Fuse.Reactive.IExpression source, string key, Fuse.Reactive.IListener listener) :62
void DataBinding__SubscribeResource_fn(DataBinding* __this, uObject* source, uString* key, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)::g::Fuse::Reactive::ResourceSubscription::New1(source, __this->Parent(), key, listener, uPtr(__this->Target())->PropertyType()), void();
}

// public generated Uno.UX.Property get_Target() :48
void DataBinding__get_Target_fn(DataBinding* __this, ::g::Uno::UX::Property** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property value) :48
void DataBinding__set_Target_fn(DataBinding* __this, ::g::Uno::UX::Property* value)
{
    __this->Target(value);
}

// private static Uno.UX.Selector ToSelector(object newValue) :286
void DataBinding__ToSelector_fn(uObject* newValue, ::g::Uno::UX::Selector* __retval)
{
    *__retval = DataBinding::ToSelector(newValue);
}

// private void TryPushAsMarshalledValue(object newValue) :298
void DataBinding__TryPushAsMarshalledValue_fn(DataBinding* __this, uObject* newValue)
{
    __this->TryPushAsMarshalledValue(newValue);
}

// private bool TryPushAsName(object newValue) :257
void DataBinding__TryPushAsName_fn(DataBinding* __this, uObject* newValue, bool* __retval)
{
    *__retval = __this->TryPushAsName(newValue);
}

// private bool TryPushAsValue(object newValue) :235
void DataBinding__TryPushAsValue_fn(DataBinding* __this, uObject* newValue, bool* __retval)
{
    *__retval = __this->TryPushAsValue(newValue);
}

// private static string TypeToJSName(Uno.Type t) :81
void DataBinding__TypeToJSName_fn(uType* t, uString** __retval)
{
    *__retval = DataBinding::TypeToJSName(t);
}

// private void UnlistenNameRegistry() :248
void DataBinding__UnlistenNameRegistry_fn(DataBinding* __this)
{
    __this->UnlistenNameRegistry();
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :177
void DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn(DataBinding* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    ::g::Uno::UX::Selector prop_ = *prop;

    if (::g::Uno::UX::Selector__op_Equality(prop_, uPtr(__this->Target())->Name()))
    {
        if (__this->_subscription != NULL)
        {
            if (__this->Write())
                ::g::Fuse::Reactive::ISubscription::SetExclusive(uInterface(uPtr(__this->_subscription), ::TYPES[36/*Fuse.Reactive.ISubscription*/]), uPtr(__this->Target())->GetAsObject1());
        }
        else if (__this->CanWriteBack())
            __this->WriteBack(uPtr(__this->Target())->GetAsObject1());
    }
}

// private bool get_Write() :68
void DataBinding__get_Write_fn(DataBinding* __this, bool* __retval)
{
    *__retval = __this->Write();
}

// public DataBinding(Uno.UX.Property target, Fuse.Reactive.IExpression key, Fuse.Reactive.BindingMode mode) [instance] :53
void DataBinding::ctor_2(::g::Uno::UX::Property* target, uObject* key, int mode)
{
    ctor_1(key);
    _mode = mode;
    Target(target);
}

// private bool Acceptor(object obj) [instance] :293
bool DataBinding::Acceptor(uObject* obj)
{
    return ::g::Fuse::Marshal::Is(obj, uPtr(Target())->PropertyType());
}

// private bool get_Clear() [instance] :69
bool DataBinding::Clear()
{
    return (_mode & 4) == 4;
}

// private void ClearFailed() [instance] :138
void DataBinding::ClearFailed()
{
    if (Parent() != NULL)
        ::g::Fuse::Triggers::BusyTask::SetBusy(Parent(), &_busyTask, 0, ::STRINGS[19/*""*/]);
}

// private void ClearValue() [instance] :167
void DataBinding::ClearValue()
{
    if (Clear())
        SetTarget(NULL);
}

// private void InvalidListOperation() [instance] :88
void DataBinding::InvalidListOperation()
{
    ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[30/*"Cannot bind '"*/], Key()), ::STRINGS[31/*"' to proper...*/]), ::g::Uno::UX::Selector__op_Implicit1(uPtr(Target())->Name())), ::STRINGS[32/*"'. The obse...*/]), DataBinding::TypeToJSName(uPtr(Target())->PropertyType())), ::STRINGS[33/*"."*/]), this, ::STRINGS[34/*"/usr/local/...*/], 90, ::STRINGS[35/*"InvalidList...*/], NULL);
}

// private void MarkFailed(string message) [instance] :133
void DataBinding::MarkFailed(uString* message)
{
    ::g::Fuse::Triggers::BusyTask::SetBusy(Parent(), &_busyTask, 16, message);
}

// protected void PushValue(object newValue) [instance] :223
void DataBinding::PushValue(uObject* newValue)
{
    if (!Read())
        return;

    if (Parent() == NULL)
        return;

    _currentValue = newValue;

    if (TryPushAsValue(newValue))
        return;
    else if (TryPushAsName(newValue))
        return;
    else
        TryPushAsMarshalledValue(newValue);
}

// private bool get_Read() [instance] :67
bool DataBinding::Read()
{
    return (_mode & 1) == 1;
}

// internal void SetTarget(object value) [instance] :161
void DataBinding::SetTarget(uObject* value)
{
    ClearFailed();
    uPtr(Target())->SetAsObject1(value, (uObject*)this);
}

// public generated Uno.UX.Property get_Target() [instance] :48
::g::Uno::UX::Property* DataBinding::Target()
{
    return _Target;
}

// private generated void set_Target(Uno.UX.Property value) [instance] :48
void DataBinding::Target(::g::Uno::UX::Property* value)
{
    _Target = value;
}

// private void TryPushAsMarshalledValue(object newValue) [instance] :298
void DataBinding::TryPushAsMarshalledValue(uObject* newValue)
{
    uObject* res;

    if (::g::Fuse::Marshal::TryConvertTo(uPtr(Target())->PropertyType(), newValue, &res, this))
    {
        try
        {
            SetTarget(res);
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e = __t.Exception;
            MarkFailed(uPtr(e)->ToString());
            ::g::Fuse::Diagnostics::UserError(e->ToString(), Target(), ::STRINGS[34/*"/usr/local/...*/], 311, ::STRINGS[36/*"TryPushAsMa...*/], NULL);
        }
    }
}

// private bool TryPushAsName(object newValue) [instance] :257
bool DataBinding::TryPushAsName(uObject* newValue)
{
    ::g::Uno::UX::Selector name = DataBinding::ToSelector(newValue);

    if (!name.IsNull())
    {
        UnlistenNameRegistry();
        _registryName = ::g::Uno::UX::Selector__op_Implicit1(name);
        ::g::Fuse::NameRegistry::AddListener(::g::Uno::UX::Selector__op_Implicit(_registryName), (uObject*)this);
        ::g::Fuse::Node* k = uPtr(Parent())->FindNodeByName(name, uDelegate::New(::TYPES[35/*Uno.Predicate<Fuse.Node>*/], (void*)DataBinding__Acceptor_fn, this));

        if (k != NULL)
        {
            SetTarget(k);
            return true;
        }

        if (::g::Uno::Type::IsClass(uPtr(uPtr(Target())->PropertyType())) && !::g::Fuse::Marshal::CanConvertClass(uPtr(Target())->PropertyType()))
            return true;
    }

    return false;
}

// private bool TryPushAsValue(object newValue) [instance] :235
bool DataBinding::TryPushAsValue(uObject* newValue)
{
    if (::g::Fuse::Marshal::Is(newValue, uPtr(Target())->PropertyType()))
    {
        UnlistenNameRegistry();
        SetTarget(newValue);
        return true;
    }

    return false;
}

// private void UnlistenNameRegistry() [instance] :248
void DataBinding::UnlistenNameRegistry()
{
    if (::g::Uno::String::op_Inequality(_registryName, NULL))
    {
        ::g::Fuse::NameRegistry::RemoveListener1(::g::Uno::UX::Selector__op_Implicit(_registryName), (uObject*)this);
        _registryName = NULL;
    }
}

// private bool get_Write() [instance] :68
bool DataBinding::Write()
{
    return (_mode & 2) == 2;
}

// public DataBinding New(Uno.UX.Property target, Fuse.Reactive.IExpression key, Fuse.Reactive.BindingMode mode) [static] :53
DataBinding* DataBinding::New1(::g::Uno::UX::Property* target, uObject* key, int mode)
{
    DataBinding* obj1 = (DataBinding*)uNew(DataBinding_typeof());
    obj1->ctor_2(target, key, mode);
    return obj1;
}

// private static Uno.UX.Selector ToSelector(object newValue) [static] :286
::g::Uno::UX::Selector DataBinding::ToSelector(uObject* newValue)
{
    return uIs(newValue, ::TYPES[33/*Uno.UX.Selector*/]) ? uUnbox< ::g::Uno::UX::Selector>(::TYPES[33/*Uno.UX.Selector*/], newValue) : uIs(newValue, ::TYPES[24/*string*/]) ? ::g::Uno::UX::Selector__New1(uCast<uString*>(newValue, ::TYPES[24/*string*/])) : uDefault< ::g::Uno::UX::Selector>();
}

// private static string TypeToJSName(Uno.Type t) [static] :81
uString* DataBinding::TypeToJSName(uType* t)
{
    if ((::g::Uno::Type::op_Equality(t, ::TYPES[20/*int*/]) || ::g::Uno::Type::op_Equality(t, ::TYPES[21/*float*/])) || ::g::Uno::Type::op_Equality(t, ::TYPES[22/*double*/]))
        return ::STRINGS[37/*"number"*/];

    if (::g::Uno::Type::op_Equality(t, ::TYPES[24/*string*/]))
        return ::STRINGS[38/*"string"*/];

    return ::g::Uno::String::op_Addition2(::STRINGS[39/*"value that ...*/], ::g::Uno::Type::FullName(uPtr(t)));
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/Subscription/DataSubscription.uno
// --------------------------------------------------------------------------------------------

// internal sealed class DataSubscription :6
// {
static void DataSubscription_build(uType* type)
{
    ::STRINGS[28] = uString::Const("{");
    ::STRINGS[40] = uString::Const("} not found in data context");
    ::TYPES[3] = ::g::Uno::IDisposable_typeof();
    ::TYPES[28] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetInterfaces(
        ::g::Fuse::Node__IDataEnumerator_typeof(), offsetof(DataSubscription_type, interface0),
        ::TYPES[3/*Uno.IDisposable*/], offsetof(DataSubscription_type, interface1),
        ::g::Fuse::Node__IDataListener_typeof(), offsetof(DataSubscription_type, interface2));
    type->SetFields(1,
        uObject_typeof(), offsetof(DataSubscription, _currentData), 0,
        ::TYPES[3/*Uno.IDisposable*/], offsetof(DataSubscription, _diag), 0,
        ::g::Uno::Bool_typeof(), offsetof(DataSubscription, _isResolved), 0,
        ::TYPES[28/*Fuse.Reactive.IListener*/], offsetof(DataSubscription, _listener), 0,
        ::g::Fuse::Node_typeof(), offsetof(DataSubscription, _origin), 0,
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(DataSubscription, _source), 0);
}

DataSubscription_type* DataSubscription_typeof()
{
    static uSStrong<DataSubscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Node__DataFinder_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 3;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(DataSubscription);
    options.TypeSize = sizeof(DataSubscription_type);
    type = (DataSubscription_type*)uClassType::New("Fuse.Reactive.DataSubscription", options);
    type->fp_build_ = DataSubscription_build;
    type->fp_Resolve = (void(*)(::g::Fuse::Node__DataFinder*, uObject*))DataSubscription__Resolve_fn;
    type->interface2.fp_OnDataChanged = (void(*)(uObject*))DataSubscription__FuseNodeIDataListenerOnDataChanged_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))DataSubscription__Dispose_fn;
    type->interface0.fp_NextData = (void(*)(uObject*, uObject*, bool*))::g::Fuse::Node__DataFinder__NextData_fn;
    return type;
}

// public DataSubscription(Fuse.Reactive.IExpression source, Fuse.Node origin, string key, Fuse.Reactive.IListener listener) :13
void DataSubscription__ctor_1_fn(DataSubscription* __this, uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener)
{
    __this->ctor_1(source, origin, key, listener);
}

// private void ClearDiagnostic() :64
void DataSubscription__ClearDiagnostic_fn(DataSubscription* __this)
{
    __this->ClearDiagnostic();
}

// public void Dispose() :50
void DataSubscription__Dispose_fn(DataSubscription* __this)
{
    __this->Dispose();
}

// private void FindData() :26
void DataSubscription__FindData_fn(DataSubscription* __this)
{
    __this->FindData();
}

// private void Fuse.Node.IDataListener.OnDataChanged() :59
void DataSubscription__FuseNodeIDataListenerOnDataChanged_fn(DataSubscription* __this)
{
    __this->FindData();
}

// public DataSubscription New(Fuse.Reactive.IExpression source, Fuse.Node origin, string key, Fuse.Reactive.IListener listener) :13
void DataSubscription__New1_fn(uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener, DataSubscription** __retval)
{
    *__retval = DataSubscription::New1(source, origin, key, listener);
}

// protected override sealed void Resolve(object data) :40
void DataSubscription__Resolve_fn(DataSubscription* __this, uObject* data)
{
    __this->_isResolved = true;

    if (data != __this->_currentData)
    {
        __this->_currentData = data;
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(__this->_listener), ::TYPES[28/*Fuse.Reactive.IListener*/]), __this->_source, data);
    }
}

// public DataSubscription(Fuse.Reactive.IExpression source, Fuse.Node origin, string key, Fuse.Reactive.IListener listener) [instance] :13
void DataSubscription::ctor_1(uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener)
{
    ctor_(key);
    _source = source;
    _origin = origin;
    _listener = listener;
    uPtr(_origin)->AddDataListener(key, (uObject*)this);
    FindData();
}

// private void ClearDiagnostic() [instance] :64
void DataSubscription::ClearDiagnostic()
{
    if (_diag != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_diag), ::TYPES[3/*Uno.IDisposable*/]));
        _diag = NULL;
    }
}

// public void Dispose() [instance] :50
void DataSubscription::Dispose()
{
    ClearDiagnostic();
    uPtr(_origin)->RemoveDataListener(Key(), (uObject*)this);
    _origin = NULL;
    _source = NULL;
    _listener = NULL;
}

// private void FindData() [instance] :26
void DataSubscription::FindData()
{
    if (_origin == NULL)
        return;

    ClearDiagnostic();
    _isResolved = false;
    uPtr(_origin)->EnumerateData((uObject*)this);

    if (!_isResolved)
        _diag = ::g::Fuse::Diagnostics::ReportTemporalUserWarning(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[28/*"{"*/], Key()), ::STRINGS[40/*"} not found...*/]), _origin);
}

// public DataSubscription New(Fuse.Reactive.IExpression source, Fuse.Node origin, string key, Fuse.Reactive.IListener listener) [static] :13
DataSubscription* DataSubscription::New1(uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener)
{
    DataSubscription* obj1 = (DataSubscription*)uNew(DataSubscription_typeof());
    obj1->ctor_1(source, origin, key, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/ThreadWorker.Wrapping.uno
// --------------------------------------------------------------------------------------

// internal static class DateTimeConverterHelpers :11
// {
static void DateTimeConverterHelpers_build(uType* type)
{
    ::STRINGS[41] = uString::Const("getTime");
    ::TYPES[4] = uObject_typeof()->Array();
}

uClassType* DateTimeConverterHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.DateTimeConverterHelpers", options);
    type->fp_build_ = DateTimeConverterHelpers_build;
    return type;
}

// public static object ConvertDateTimeToJSDate(Uno.DateTime dt, Fuse.Scripting.Function dateCtor) :25
void DateTimeConverterHelpers__ConvertDateTimeToJSDate_fn(::g::Uno::DateTime* dt, ::g::Fuse::Scripting::Function* dateCtor, uObject** __retval)
{
    *__retval = DateTimeConverterHelpers::ConvertDateTimeToJSDate(*dt, dateCtor);
}

// public static Uno.DateTime ConvertDateToDateTime(Fuse.Scripting.Object date) :16
void DateTimeConverterHelpers__ConvertDateToDateTime_fn(::g::Fuse::Scripting::Object* date, ::g::Uno::DateTime* __retval)
{
    *__retval = DateTimeConverterHelpers::ConvertDateToDateTime(date);
}

// public static object ConvertDateTimeToJSDate(Uno.DateTime dt, Fuse.Scripting.Function dateCtor) [static] :25
uObject* DateTimeConverterHelpers::ConvertDateTimeToJSDate(::g::Uno::DateTime dt, ::g::Fuse::Scripting::Function* dateCtor)
{
    int64_t dotNetTicks = dt.Ticks();
    int64_t dotNetTicksRelativeToUnixEpoch = dotNetTicks - 621355968000000000LL;
    int64_t jsTicks = dotNetTicksRelativeToUnixEpoch / 10000LL;
    return uPtr(dateCtor)->Call(uArray::Init<uObject*>(::TYPES[4/*object[]*/], 1, uBox(::TYPES[22/*double*/], (double)jsTicks)));
}

// public static Uno.DateTime ConvertDateToDateTime(Fuse.Scripting.Object date) [static] :16
::g::Uno::DateTime DateTimeConverterHelpers::ConvertDateToDateTime(::g::Fuse::Scripting::Object* date)
{
    int64_t jsTicks = (int64_t)uUnbox<double>(::TYPES[22/*double*/], ::g::Fuse::Reactive::ThreadWorker::Wrap(uPtr(date)->CallMethod(::STRINGS[41/*"getTime"*/], uArray::New(::TYPES[4/*object[]*/], 0))));
    int64_t dotNetTicksRelativeToUnixEpoch = jsTicks * 10000LL;
    int64_t dotNetTicks = dotNetTicksRelativeToUnixEpoch + 621355968000000000LL;
    return ::g::Uno::DateTime__New1(dotNetTicks, 1);
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/FuseJS/DebugLog.uno
// --------------------------------------------------------------------------------

// internal static class DebugLog :6
// {
static void DebugLog_build(uType* type)
{
    ::STRINGS[42] = uString::Const("debug_log");
    ::STRINGS[15] = uString::Const("null");
    ::STRINGS[14] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/FuseJS/DebugLog.uno");
    ::TYPES[27] = ::g::Fuse::Scripting::Callback_typeof();
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof());
}

uClassType* DebugLog_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.DebugLog", options);
    type->fp_build_ = DebugLog_build;
    return type;
}

// public static void Init(Fuse.Scripting.Context c) :8
void DebugLog__Init_fn(::g::Fuse::Scripting::Context* c)
{
    DebugLog::Init(c);
}

// private static object Log(object[] args) :13
void DebugLog__Log_fn(uArray* args, uObject** __retval)
{
    *__retval = DebugLog::Log(args);
}

// public static void Init(Fuse.Scripting.Context c) [static] :8
void DebugLog::Init(::g::Fuse::Scripting::Context* c)
{
    uPtr(uPtr(c)->GlobalObject())->Item(::STRINGS[42/*"debug_log"*/], uDelegate::New(::TYPES[27/*Fuse.Scripting.Callback*/], (void*)DebugLog__Log_fn));
}

// private static object Log(object[] args) [static] :13
uObject* DebugLog::Log(uArray* args)
{
    for (int i = 0; i < uPtr(args)->Length(); i++)
        ::g::Uno::Diagnostics::Debug::Log5((uPtr(args)->Strong<uObject*>(i) != NULL) ? (uString*)::g::Uno::Object::ToString(uPtr(uPtr(args)->Strong<uObject*>(i))) : ::STRINGS[15/*"null"*/], 0, ::STRINGS[14/*"/usr/local/...*/], 17);

    return NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/JavaScript.Dependencies.uno
// ----------------------------------------------------------------------------------------

// public sealed class JavaScript.Dependency :13
// {
static void JavaScript__Dependency_build(uType* type)
{
    ::TYPES[37] = ::g::Fuse::Reactive::IExpression_typeof();
    ::TYPES[3] = ::g::Uno::IDisposable_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(JavaScript__Dependency_type, interface0));
    type->SetFields(0,
        ::TYPES[3/*Uno.IDisposable*/], offsetof(JavaScript__Dependency, _expSubscription), 0,
        ::g::Fuse::Reactive::JavaScript_typeof(), offsetof(JavaScript__Dependency, _script), 0,
        ::g::Uno::Bool_typeof(), offsetof(JavaScript__Dependency, HasValue), 0,
        uObject_typeof(), offsetof(JavaScript__Dependency, Value), 0,
        ::TYPES[37/*Fuse.Reactive.IExpression*/], offsetof(JavaScript__Dependency, _Expression), 0,
        ::g::Uno::String_typeof(), offsetof(JavaScript__Dependency, _Name), 0);
}

JavaScript__Dependency_type* JavaScript__Dependency_typeof()
{
    static uSStrong<JavaScript__Dependency_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(JavaScript__Dependency);
    options.TypeSize = sizeof(JavaScript__Dependency_type);
    type = (JavaScript__Dependency_type*)uClassType::New("Fuse.Reactive.JavaScript.Dependency", options);
    type->fp_build_ = JavaScript__Dependency_build;
    type->interface0.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))JavaScript__Dependency__FuseReactiveIListenerOnNewData_fn;
    return type;
}

// internal generated Fuse.Reactive.IExpression get_Expression() :16
void JavaScript__Dependency__get_Expression_fn(JavaScript__Dependency* __this, uObject** __retval)
{
    *__retval = __this->Expression();
}

// private generated void set_Expression(Fuse.Reactive.IExpression value) :16
void JavaScript__Dependency__set_Expression_fn(JavaScript__Dependency* __this, uObject* value)
{
    __this->Expression(value);
}

// private void Fuse.Reactive.IListener.OnNewData(Fuse.Reactive.IExpression source, object data) :50
void JavaScript__Dependency__FuseReactiveIListenerOnNewData_fn(JavaScript__Dependency* __this, uObject* source, uObject* data)
{
    if (__this->_script == NULL)
        return;

    __this->Value = data;
    __this->HasValue = true;
    uPtr(__this->_script)->DispatchEvaluateIfDependenciesReady();
}

// internal generated string get_Name() :15
void JavaScript__Dependency__get_Name_fn(JavaScript__Dependency* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(string value) :15
void JavaScript__Dependency__set_Name_fn(JavaScript__Dependency* __this, uString* value)
{
    __this->Name(value);
}

// internal void Subscribe(Fuse.Reactive.JavaScript script) :28
void JavaScript__Dependency__Subscribe_fn(JavaScript__Dependency* __this, ::g::Fuse::Reactive::JavaScript* script)
{
    __this->Subscribe(script);
}

// internal void Unsubscribe() :35
void JavaScript__Dependency__Unsubscribe_fn(JavaScript__Dependency* __this)
{
    __this->Unsubscribe();
}

// internal generated Fuse.Reactive.IExpression get_Expression() [instance] :16
uObject* JavaScript__Dependency::Expression()
{
    return _Expression;
}

// private generated void set_Expression(Fuse.Reactive.IExpression value) [instance] :16
void JavaScript__Dependency::Expression(uObject* value)
{
    _Expression = value;
}

// internal generated string get_Name() [instance] :15
uString* JavaScript__Dependency::Name()
{
    return _Name;
}

// private generated void set_Name(string value) [instance] :15
void JavaScript__Dependency::Name(uString* value)
{
    _Name = value;
}

// internal void Subscribe(Fuse.Reactive.JavaScript script) [instance] :28
void JavaScript__Dependency::Subscribe(::g::Fuse::Reactive::JavaScript* script)
{
    Unsubscribe();
    _script = script;
    _expSubscription = ::g::Fuse::Reactive::IExpression::Subscribe(uInterface(uPtr(Expression()), ::TYPES[37/*Fuse.Reactive.IExpression*/]), (uObject*)script, (uObject*)this);
}

// internal void Unsubscribe() [instance] :35
void JavaScript__Dependency::Unsubscribe()
{
    if (_expSubscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_expSubscription), ::TYPES[3/*Uno.IDisposable*/]));
        _expSubscription = NULL;
    }

    Value = NULL;
    HasValue = false;
    _script = NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/DiagnosticSubject.uno
// ----------------------------------------------------------------------------------

// internal class DiagnosticSubject :6
// {
static void DiagnosticSubject_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::IDisposable_typeof();
    type->SetFields(0,
        ::TYPES[3/*Uno.IDisposable*/], offsetof(DiagnosticSubject, _diagnostic), 0);
}

uType* DiagnosticSubject_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(DiagnosticSubject);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.DiagnosticSubject", options);
    type->fp_build_ = DiagnosticSubject_build;
    type->fp_ctor_ = (void*)DiagnosticSubject__New1_fn;
    return type;
}

// public generated DiagnosticSubject() :6
void DiagnosticSubject__ctor__fn(DiagnosticSubject* __this)
{
    __this->ctor_();
}

// public void ClearDiagnostic() :9
void DiagnosticSubject__ClearDiagnostic_fn(DiagnosticSubject* __this)
{
    __this->ClearDiagnostic();
}

// public generated DiagnosticSubject New() :6
void DiagnosticSubject__New1_fn(DiagnosticSubject** __retval)
{
    *__retval = DiagnosticSubject::New1();
}

// public generated DiagnosticSubject() [instance] :6
void DiagnosticSubject::ctor_()
{
}

// public void ClearDiagnostic() [instance] :9
void DiagnosticSubject::ClearDiagnostic()
{
    if (_diagnostic != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_diagnostic), ::TYPES[3/*Uno.IDisposable*/]));
        _diagnostic = NULL;
    }
}

// public generated DiagnosticSubject New() [static] :6
DiagnosticSubject* DiagnosticSubject::New1()
{
    DiagnosticSubject* obj1 = (DiagnosticSubject*)uNew(DiagnosticSubject_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Operators.uno
// ---------------------------------------------------------------------------

// public sealed class Divide :55
// {
static void Divide_build(uType* type)
{
    ::STRINGS[43] = uString::Const("/");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InfixOperator_type, interface0));
    type->SetFields(2);
}

::g::Fuse::Reactive::InfixOperator_type* Divide_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InfixOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Divide);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InfixOperator_type);
    type = (::g::Fuse::Reactive::InfixOperator_type*)uClassType::New("Fuse.Reactive.Divide", options);
    type->fp_build_ = Divide_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))Divide__Compute_fn;
    type->fp_get_Symbol = (void(*)(::g::Fuse::Reactive::InfixOperator*, uString**))Divide__get_Symbol_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// protected override sealed object Compute(object left, object right) :59
void Divide__Compute_fn(Divide* __this, uObject* left, uObject* right, uObject** __retval)
{
    return *__retval = ::g::Fuse::Marshal::Divide(left, right), void();
}

// public override sealed string get_Symbol() :64
void Divide__get_Symbol_fn(Divide* __this, uString** __retval)
{
    return *__retval = ::STRINGS[43/*"/"*/], void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/Each.uno
// -------------------------------------------------------------------

// public sealed class Each :94
// {
// static generated Each() :94
static void Each__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Properties_typeof()->Init();
    Each::_eachHandle_ = ::g::Fuse::Properties::CreateHandle();
}

static void Each_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::Instantiator_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::Instantiator_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::Instantiator_type, interface5),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface6),
        ::g::Fuse::Node__ISubtreeDataProvider_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface7),
        ::g::Fuse::IDeferred_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface8));
    type->SetFields(43,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&Each::_eachHandle_, uFieldFlagsStatic);
}

::g::Fuse::Reactive::Instantiator_type* Each_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Instantiator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Instantiator_typeof();
    options.FieldCount = 44;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(Each);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Instantiator_type);
    type = (::g::Fuse::Reactive::Instantiator_type*)uClassType::New("Fuse.Reactive.Each", options);
    type->fp_build_ = Each_build;
    type->fp_ctor_ = (void*)Each__New4_fn;
    type->fp_cctor_ = Each__cctor_1_fn;
    type->interface7.fp_GetData = (void(*)(uObject*, ::g::Fuse::Node*, uObject**))::g::Fuse::Reactive::Instantiator__FuseNodeISubtreeDataProviderGetData_fn;
    type->interface6.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnSet_fn;
    type->interface6.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnFailed_fn;
    type->interface6.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnAdd_fn;
    type->interface6.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface6.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnInsertAt_fn;
    type->interface6.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnNewAt_fn;
    type->interface6.fp_OnNewAll = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnNewAll_fn;
    type->interface6.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnClear_fn;
    type->interface8.fp_Perform = (void(*)(uObject*, bool*))::g::Fuse::Reactive::Instantiator__FuseIDeferredPerform_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Each() :145
void Each__ctor_5_fn(Each* __this)
{
    __this->ctor_5();
}

// public new int get_Count() :169
void Each__get_Count1_fn(Each* __this, int* __retval)
{
    *__retval = __this->Count1();
}

// public new void set_Count(int value) :170
void Each__set_Count1_fn(Each* __this, int* value)
{
    __this->Count1(*value);
}

// public object get_Items() :155
void Each__get_Items_fn(Each* __this, uObject** __retval)
{
    *__retval = __this->Items();
}

// public void set_Items(object value) :156
void Each__set_Items_fn(Each* __this, uObject* value)
{
    __this->Items(value);
}

// public new int get_Limit() :195
void Each__get_Limit1_fn(Each* __this, int* __retval)
{
    *__retval = __this->Limit1();
}

// public new void set_Limit(int value) :196
void Each__set_Limit1_fn(Each* __this, int* value)
{
    __this->Limit1(*value);
}

// public Each New() :145
void Each__New4_fn(Each** __retval)
{
    *__retval = Each::New4();
}

// public new int get_Offset() :182
void Each__get_Offset1_fn(Each* __this, int* __retval)
{
    *__retval = __this->Offset1();
}

// public new void set_Offset(int value) :183
void Each__set_Offset1_fn(Each* __this, int* value)
{
    __this->Offset1(*value);
}

uSStrong< ::g::Fuse::PropertyHandle*> Each::_eachHandle_;

// public Each() [instance] :145
void Each::ctor_5()
{
    ctor_3();
}

// public new int get_Count() [instance] :169
int Each::Count1()
{
    return Count();
}

// public new void set_Count(int value) [instance] :170
void Each::Count1(int value)
{
    Count(value);
}

// public object get_Items() [instance] :155
uObject* Each::Items()
{
    return _items;
}

// public void set_Items(object value) [instance] :156
void Each::Items(uObject* value)
{
    if (_items != value)
    {
        _items = value;
        OnItemsChanged();
    }
}

// public new int get_Limit() [instance] :195
int Each::Limit1()
{
    return Limit();
}

// public new void set_Limit(int value) [instance] :196
void Each::Limit1(int value)
{
    Limit(value);
}

// public new int get_Offset() [instance] :182
int Each::Offset1()
{
    return Offset();
}

// public new void set_Offset(int value) [instance] :183
void Each::Offset1(int value)
{
    Offset(value);
}

// public Each New() [static] :145
Each* Each::New4()
{
    Each* obj2 = (Each*)uNew(Each_typeof());
    obj2->ctor_5();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Operators.uno
// ---------------------------------------------------------------------------

// public sealed class Equal :154
// {
static void Equal_build(uType* type)
{
    ::STRINGS[44] = uString::Const("==");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InfixOperator_type, interface0));
    type->SetFields(2);
}

::g::Fuse::Reactive::InfixOperator_type* Equal_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InfixOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Equal);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InfixOperator_type);
    type = (::g::Fuse::Reactive::InfixOperator_type*)uClassType::New("Fuse.Reactive.Equal", options);
    type->fp_build_ = Equal_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))Equal__Compute_fn;
    type->fp_get_Symbol = (void(*)(::g::Fuse::Reactive::InfixOperator*, uString**))Equal__get_Symbol_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// protected override sealed object Compute(object left, object right) :158
void Equal__Compute_fn(Equal* __this, uObject* left, uObject* right, uObject** __retval)
{
    return *__retval = ::g::Fuse::Marshal::EqualTo(left, right), void();
}

// public override sealed string get_Symbol() :163
void Equal__get_Symbol_fn(Equal* __this, uString** __retval)
{
    return *__retval = ::STRINGS[44/*"=="*/], void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/EventBinding.uno
// ---------------------------------------------------------------------------

// public sealed class EventBinding :26
// {
static void EventBinding_build(uType* type)
{
    ::TYPES[38] = ::g::Fuse::Reactive::IEventHandler_typeof();
    ::TYPES[39] = ::g::Fuse::Scripting::IScriptEvent_typeof();
    ::TYPES[40] = ::g::Fuse::Node_typeof();
    ::TYPES[41] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Reactive::EventRecord_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Reactive::IContext_typeof(), offsetof(::g::Fuse::Reactive::ExpressionBinding_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::ExpressionBinding_type, interface1));
    type->SetFields(3,
        ::TYPES[38/*Fuse.Reactive.IEventHandler*/], offsetof(EventBinding, _eventHandler), 0,
        ::TYPES[41/*Uno.Collections.List<Fuse.Reactive.EventRecord>*/], offsetof(EventBinding, _queuedEvents), 0);
}

::g::Fuse::Reactive::ExpressionBinding_type* EventBinding_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ExpressionBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ExpressionBinding_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(EventBinding);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ExpressionBinding_type);
    type = (::g::Fuse::Reactive::ExpressionBinding_type*)uClassType::New("Fuse.Reactive.EventBinding", options);
    type->fp_build_ = EventBinding_build;
    type->fp_NewValue = (void(*)(::g::Fuse::Reactive::ExpressionBinding*, uObject*))EventBinding__NewValue_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Binding*))EventBinding__OnUnrooted_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIContextSubscribe_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_get_Node = (void(*)(uObject*, ::g::Fuse::Node**))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIContextget_Node_fn;
    type->interface0.fp_SubscribeResource = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))::g::Fuse::Reactive::ExpressionBinding__SubscribeResource_fn;
    return type;
}

// public EventBinding(Fuse.Reactive.IExpression key) :29
void EventBinding__ctor_2_fn(EventBinding* __this, uObject* key)
{
    __this->ctor_2(key);
}

// public EventBinding New(Fuse.Reactive.IExpression key) :29
void EventBinding__New1_fn(uObject* key, EventBinding** __retval)
{
    *__retval = EventBinding::New1(key);
}

// internal override sealed void NewValue(object obj) :49
void EventBinding__NewValue_fn(EventBinding* __this, uObject* obj)
{
    __this->_eventHandler = uAs<uObject*>(obj, ::TYPES[38/*Fuse.Reactive.IEventHandler*/]);
    __this->ProcessQueuedEvents();
}

// public void OnEvent(object sender, Uno.EventArgs args) :62
void EventBinding__OnEvent_fn(EventBinding* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnEvent(sender, args);
}

// protected override sealed void OnUnrooted() :55
void EventBinding__OnUnrooted_fn(EventBinding* __this)
{
    ::g::Fuse::Reactive::ExpressionBinding__OnUnrooted_fn(__this);
    __this->_eventHandler = NULL;
    __this->_queuedEvents = NULL;
}

// private void ProcessQueuedEvents() :37
void EventBinding__ProcessQueuedEvents_fn(EventBinding* __this)
{
    __this->ProcessQueuedEvents();
}

// public EventBinding(Fuse.Reactive.IExpression key) [instance] :29
void EventBinding::ctor_2(uObject* key)
{
    ctor_1(key);
}

// public void OnEvent(object sender, Uno.EventArgs args) [instance] :62
void EventBinding::OnEvent(uObject* sender, ::g::Uno::EventArgs* args)
{
    if (Parent() == NULL)
        return;

    ::g::Fuse::Reactive::EventRecord* e = ::g::Fuse::Reactive::EventRecord::New1(uAs<uObject*>(args, ::TYPES[39/*Fuse.Scripting.IScriptEvent*/]), uAs< ::g::Fuse::Node*>(sender, ::TYPES[40/*Fuse.Node*/]));

    if (_eventHandler != NULL)
        ::g::Fuse::Reactive::IEventHandler::Dispatch(uInterface(uPtr(_eventHandler), ::TYPES[38/*Fuse.Reactive.IEventHandler*/]), (uObject*)e);
    else
    {
        if (_queuedEvents == NULL)
            _queuedEvents = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[41/*Uno.Collections.List<Fuse.Reactive.EventRecord>*/]));

        ::g::Uno::Collections::List__Add_fn(uPtr(_queuedEvents), e);
    }
}

// private void ProcessQueuedEvents() [instance] :37
void EventBinding::ProcessQueuedEvents()
{
    ::g::Fuse::Reactive::EventRecord* ret2;

    if ((_eventHandler != NULL) && (_queuedEvents != NULL))
    {
        ::g::Uno::Collections::List* events = _queuedEvents;
        _queuedEvents = NULL;

        for (int i = 0; i < uPtr(events)->Count(); i++)
            ::g::Fuse::Reactive::IEventHandler::Dispatch(uInterface(uPtr(_eventHandler), ::TYPES[38/*Fuse.Reactive.IEventHandler*/]), (uObject*)(::g::Uno::Collections::List__get_Item_fn(uPtr(events), uCRef<int>(i), &ret2), ret2));
    }
}

// public EventBinding New(Fuse.Reactive.IExpression key) [static] :29
EventBinding* EventBinding::New1(uObject* key)
{
    EventBinding* obj1 = (EventBinding*)uNew(EventBinding_typeof());
    obj1->ctor_2(key);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/EventRecord.uno
// --------------------------------------------------------------------------

// internal sealed class EventRecord :9
// {
static void EventRecord_build(uType* type)
{
    ::TYPES[40] = ::g::Fuse::Node_typeof();
    ::TYPES[39] = ::g::Fuse::Scripting::IScriptEvent_typeof();
    ::TYPES[42] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::UX::Selector_typeof());
    type->SetInterfaces(
        ::g::Fuse::Reactive::IEventRecord_typeof(), offsetof(EventRecord_type, interface0),
        ::g::Fuse::Scripting::IEventSerializer_typeof(), offsetof(EventRecord_type, interface1));
    type->SetFields(0,
        ::TYPES[42/*Uno.Collections.Dictionary<string, object>*/], offsetof(EventRecord, _args), 0,
        uObject_typeof(), offsetof(EventRecord, _data), 0,
        ::TYPES[40/*Fuse.Node*/], offsetof(EventRecord, _node), 0,
        ::g::Uno::UX::Selector_typeof(), offsetof(EventRecord, _sender), 0);
}

EventRecord_type* EventRecord_typeof()
{
    static uSStrong<EventRecord_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(EventRecord);
    options.TypeSize = sizeof(EventRecord_type);
    type = (EventRecord_type*)uClassType::New("Fuse.Reactive.EventRecord", options);
    type->fp_build_ = EventRecord_build;
    type->interface1.fp_AddObject = (void(*)(uObject*, uString*, uObject*))EventRecord__FuseScriptingIEventSerializerAddObject_fn;
    type->interface1.fp_AddString = (void(*)(uObject*, uString*, uString*))EventRecord__FuseScriptingIEventSerializerAddString_fn;
    type->interface1.fp_AddInt = (void(*)(uObject*, uString*, int*))EventRecord__FuseScriptingIEventSerializerAddInt_fn;
    type->interface1.fp_AddDouble = (void(*)(uObject*, uString*, double*))EventRecord__FuseScriptingIEventSerializerAddDouble_fn;
    type->interface1.fp_AddBool = (void(*)(uObject*, uString*, bool*))EventRecord__FuseScriptingIEventSerializerAddBool_fn;
    type->interface0.fp_get_Node = (void(*)(uObject*, ::g::Fuse::Node**))EventRecord__get_Node_fn;
    type->interface0.fp_get_Data = (void(*)(uObject*, uObject**))EventRecord__get_Data_fn;
    type->interface0.fp_get_Sender = (void(*)(uObject*, ::g::Uno::UX::Selector*))EventRecord__get_Sender_fn;
    type->interface0.fp_get_Args = (void(*)(uObject*, uObject**))EventRecord__get_Args_fn;
    return type;
}

// internal EventRecord(Fuse.Scripting.IScriptEvent args, object sender) :16
void EventRecord__ctor__fn(EventRecord* __this, uObject* args, uObject* sender)
{
    __this->ctor_(args, sender);
}

// private void AddObject(string key, object value) :36
void EventRecord__AddObject_fn(EventRecord* __this, uString* key, uObject* value)
{
    __this->AddObject(key, value);
}

// public Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string, object>> get_Args() :34
void EventRecord__get_Args_fn(EventRecord* __this, uObject** __retval)
{
    *__retval = __this->Args();
}

// public object get_Data() :32
void EventRecord__get_Data_fn(EventRecord* __this, uObject** __retval)
{
    *__retval = __this->Data();
}

// private void Fuse.Scripting.IEventSerializer.AddBool(string key, bool value) :62
void EventRecord__FuseScriptingIEventSerializerAddBool_fn(EventRecord* __this, uString* key, bool* value)
{
    bool value_ = *value;
    __this->AddObject(key, uBox(::TYPES[23/*bool*/], value_));
}

// private void Fuse.Scripting.IEventSerializer.AddDouble(string key, double value) :57
void EventRecord__FuseScriptingIEventSerializerAddDouble_fn(EventRecord* __this, uString* key, double* value)
{
    double value_ = *value;
    __this->AddObject(key, uBox(::TYPES[22/*double*/], value_));
}

// private void Fuse.Scripting.IEventSerializer.AddInt(string key, int value) :52
void EventRecord__FuseScriptingIEventSerializerAddInt_fn(EventRecord* __this, uString* key, int* value)
{
    int value_ = *value;
    __this->AddObject(key, uBox(::TYPES[22/*double*/], (double)value_));
}

// private void Fuse.Scripting.IEventSerializer.AddObject(string key, object value) :42
void EventRecord__FuseScriptingIEventSerializerAddObject_fn(EventRecord* __this, uString* key, uObject* value)
{
    __this->AddObject(key, value);
}

// private void Fuse.Scripting.IEventSerializer.AddString(string key, string value) :47
void EventRecord__FuseScriptingIEventSerializerAddString_fn(EventRecord* __this, uString* key, uString* value)
{
    __this->AddObject(key, value);
}

// internal EventRecord New(Fuse.Scripting.IScriptEvent args, object sender) :16
void EventRecord__New1_fn(uObject* args, uObject* sender, EventRecord** __retval)
{
    *__retval = EventRecord::New1(args, sender);
}

// public Fuse.Node get_Node() :31
void EventRecord__get_Node_fn(EventRecord* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Node();
}

// public Uno.UX.Selector get_Sender() :33
void EventRecord__get_Sender_fn(EventRecord* __this, ::g::Uno::UX::Selector* __retval)
{
    *__retval = __this->Sender();
}

// internal EventRecord(Fuse.Scripting.IScriptEvent args, object sender) [instance] :16
void EventRecord::ctor_(uObject* args, uObject* sender)
{
    _node = uAs< ::g::Fuse::Node*>(sender, ::TYPES[40/*Fuse.Node*/]);

    if (_node != NULL)
    {
        _data = uPtr(_node)->GetFirstData();

        if (::g::Uno::String::op_Inequality(::g::Uno::UX::Selector__op_Implicit1(uPtr(_node)->Name()), NULL))
            _sender = uPtr(_node)->Name();
    }

    if (args != NULL)
        ::g::Fuse::Scripting::IScriptEvent::Serialize(uInterface(uPtr(args), ::TYPES[39/*Fuse.Scripting.IScriptEvent*/]), (uObject*)this);
}

// private void AddObject(string key, object value) [instance] :36
void EventRecord::AddObject(uString* key, uObject* value)
{
    if (_args == NULL)
        _args = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[42/*Uno.Collections.Dictionary<string, object>*/]));

    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_args), key, value);
}

// public Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string, object>> get_Args() [instance] :34
uObject* EventRecord::Args()
{
    return (uObject*)_args;
}

// public object get_Data() [instance] :32
uObject* EventRecord::Data()
{
    return _data;
}

// public Fuse.Node get_Node() [instance] :31
::g::Fuse::Node* EventRecord::Node()
{
    return _node;
}

// public Uno.UX.Selector get_Sender() [instance] :33
::g::Uno::UX::Selector EventRecord::Sender()
{
    return _sender;
}

// internal EventRecord New(Fuse.Scripting.IScriptEvent args, object sender) [static] :16
EventRecord* EventRecord::New1(uObject* args, uObject* sender)
{
    EventRecord* obj1 = (EventRecord*)uNew(EventRecord_typeof());
    obj1->ctor_(args, sender);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Expression.uno
// ----------------------------------------------------------------------------

// public abstract class Expression :7
// {
static void Expression_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(Expression_type, interface0));
}

Expression_type* Expression_typeof()
{
    static uSStrong<Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Expression);
    options.TypeSize = sizeof(Expression_type);
    type = (Expression_type*)uClassType::New("Fuse.Reactive.Expression", options);
    type->fp_build_ = Expression_build;
    return type;
}

// protected generated Expression() :7
void Expression__ctor__fn(Expression* __this)
{
    __this->ctor_();
}

// protected generated Expression() [instance] :7
void Expression::ctor_()
{
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/ExpressionBinding.uno
// --------------------------------------------------------------------------------

// public abstract class ExpressionBinding :6
// {
static void ExpressionBinding_build(uType* type)
{
    ::STRINGS[45] = uString::Const("The binding type does not support resource subscriptions");
    ::TYPES[37] = ::g::Fuse::Reactive::IExpression_typeof();
    ::TYPES[3] = ::g::Uno::IDisposable_typeof();
    ::TYPES[43] = ::g::Fuse::Reactive::IWriteable_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IContext_typeof(), offsetof(ExpressionBinding_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(ExpressionBinding_type, interface1));
    type->SetFields(1,
        ::TYPES[3/*Uno.IDisposable*/], offsetof(ExpressionBinding, _expressionSub), 0,
        ::TYPES[37/*Fuse.Reactive.IExpression*/], offsetof(ExpressionBinding, _Key), 0);
}

ExpressionBinding_type* ExpressionBinding_typeof()
{
    static uSStrong<ExpressionBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Binding_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ExpressionBinding);
    options.TypeSize = sizeof(ExpressionBinding_type);
    type = (ExpressionBinding_type*)uClassType::New("Fuse.Reactive.ExpressionBinding", options);
    type->fp_build_ = ExpressionBinding_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Binding*))ExpressionBinding__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Binding*))ExpressionBinding__OnUnrooted_fn;
    type->fp_SubscribeResource = ExpressionBinding__SubscribeResource_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))ExpressionBinding__FuseReactiveIContextSubscribe_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))ExpressionBinding__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_get_Node = (void(*)(uObject*, ::g::Fuse::Node**))ExpressionBinding__FuseReactiveIContextget_Node_fn;
    type->interface0.fp_SubscribeResource = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))ExpressionBinding__SubscribeResource_fn;
    return type;
}

// protected ExpressionBinding(Fuse.Reactive.IExpression key) :10
void ExpressionBinding__ctor_1_fn(ExpressionBinding* __this, uObject* key)
{
    __this->ctor_1(key);
}

// protected internal bool get_CanWriteBack() :17
void ExpressionBinding__get_CanWriteBack_fn(ExpressionBinding* __this, bool* __retval)
{
    *__retval = __this->CanWriteBack();
}

// private Fuse.Node Fuse.Reactive.IContext.get_Node() :31
void ExpressionBinding__FuseReactiveIContextget_Node_fn(ExpressionBinding* __this, ::g::Fuse::Node** __retval)
{
    return *__retval = __this->Parent(), void();
}

// private Uno.IDisposable Fuse.Reactive.IContext.Subscribe(Fuse.Reactive.IExpression source, string key, Fuse.Reactive.IListener listener) :26
void ExpressionBinding__FuseReactiveIContextSubscribe_fn(ExpressionBinding* __this, uObject* source, uString* key, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)::g::Fuse::Reactive::DataSubscription::New1(source, __this->Parent(), key, listener), void();
}

// private void Fuse.Reactive.IListener.OnNewData(Fuse.Reactive.IExpression source, object obj) :48
void ExpressionBinding__FuseReactiveIListenerOnNewData_fn(ExpressionBinding* __this, uObject* source, uObject* obj)
{
    __this->NewValue(obj);
}

// public generated Fuse.Reactive.IExpression get_Key() :8
void ExpressionBinding__get_Key_fn(ExpressionBinding* __this, uObject** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(Fuse.Reactive.IExpression value) :8
void ExpressionBinding__set_Key_fn(ExpressionBinding* __this, uObject* value)
{
    __this->Key(value);
}

// protected override void OnRooted() :20
void ExpressionBinding__OnRooted_fn(ExpressionBinding* __this)
{
    ::g::Fuse::Binding__OnRooted_fn(__this);
    __this->_expressionSub = ::g::Fuse::Reactive::IExpression::Subscribe(uInterface(uPtr(__this->Key()), ::TYPES[37/*Fuse.Reactive.IExpression*/]), (uObject*)__this, (uObject*)__this);
}

// protected override void OnUnrooted() :38
void ExpressionBinding__OnUnrooted_fn(ExpressionBinding* __this)
{
    if (__this->_expressionSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_expressionSub), ::TYPES[3/*Uno.IDisposable*/]));
        __this->_expressionSub = NULL;
    }

    ::g::Fuse::Binding__OnUnrooted_fn(__this);
}

// public virtual Uno.IDisposable SubscribeResource(Fuse.Reactive.IExpression source, string key, Fuse.Reactive.IListener listener) :33
void ExpressionBinding__SubscribeResource_fn(ExpressionBinding* __this, uObject* source, uString* key, uObject* listener, uObject** __retval)
{
    U_THROW(::g::Uno::Exception::New2(::STRINGS[45/*"The binding...*/]));
}

// protected internal void WriteBack(object value) :18
void ExpressionBinding__WriteBack_fn(ExpressionBinding* __this, uObject* value)
{
    __this->WriteBack(value);
}

// protected ExpressionBinding(Fuse.Reactive.IExpression key) [instance] :10
void ExpressionBinding::ctor_1(uObject* key)
{
    ctor_();
    Key(key);
}

// protected internal bool get_CanWriteBack() [instance] :17
bool ExpressionBinding::CanWriteBack()
{
    return uIs((uObject*)_expressionSub, ::TYPES[43/*Fuse.Reactive.IWriteable*/]);
}

// public generated Fuse.Reactive.IExpression get_Key() [instance] :8
uObject* ExpressionBinding::Key()
{
    return _Key;
}

// private generated void set_Key(Fuse.Reactive.IExpression value) [instance] :8
void ExpressionBinding::Key(uObject* value)
{
    _Key = value;
}

// protected internal void WriteBack(object value) [instance] :18
void ExpressionBinding::WriteBack(uObject* value)
{
    ::g::Fuse::Reactive::IWriteable::SetExclusive(uInterface(uPtr(_expressionSub), ::TYPES[43/*Fuse.Reactive.IWriteable*/]), value);
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/Observable.uno
// ---------------------------------------------------------------------------

// private sealed class Observable.Failed :359
// {
static void Observable__Failed_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::String_typeof(), offsetof(Observable__Failed, _message), 0);
}

::g::Fuse::Reactive::Observable__Operation_type* Observable__Failed_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Observable__Operation_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Observable__Failed);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Observable__Operation_type);
    type = (::g::Fuse::Reactive::Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.Failed", options);
    type->fp_build_ = Observable__Failed_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Reactive::Observable__Operation*, uObject*))Observable__Failed__OnPerform_fn;
    return type;
}

// public Failed(Fuse.Reactive.Observable obs, string message) :363
void Observable__Failed__ctor_1_fn(Observable__Failed* __this, ::g::Fuse::Reactive::Observable* obs, uString* message)
{
    __this->ctor_1(obs, message);
}

// public Failed New(Fuse.Reactive.Observable obs, string message) :363
void Observable__Failed__New1_fn(::g::Fuse::Reactive::Observable* obs, uString* message, Observable__Failed** __retval)
{
    *__retval = Observable__Failed::New1(obs, message);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription> sub) :368
void Observable__Failed__OnPerform_fn(Observable__Failed* __this, uObject* sub)
{
    ::g::Fuse::Reactive::Observable__Subscription* ret2;
    ::g::Fuse::Reactive::Observable__Subscription* ret3;
    uPtr(__this->Observable())->UnsubscribeValues();
    uPtr(uPtr(__this->Observable())->_values)->Clear();

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Reactive.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret2), ret2))->ShouldSend(-1))
            ::g::Fuse::Reactive::IObserver::OnFailed(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret3), ret3))->Observer()), ::TYPES[2/*Fuse.Reactive.IObserver*/]), __this->_message);
}

// public Failed(Fuse.Reactive.Observable obs, string message) [instance] :363
void Observable__Failed::ctor_1(::g::Fuse::Reactive::Observable* obs, uString* message)
{
    ctor_(obs);
    _message = message;
}

// public Failed New(Fuse.Reactive.Observable obs, string message) [static] :363
Observable__Failed* Observable__Failed::New1(::g::Fuse::Reactive::Observable* obs, uString* message)
{
    Observable__Failed* obj1 = (Observable__Failed*)uNew(Observable__Failed_typeof());
    obj1->ctor_1(obs, message);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/FunctionMirror.uno
// -------------------------------------------------------------------------------

// internal sealed class FunctionMirror :9
// {
static void FunctionMirror_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Reactive::JavaScript_typeof());
    type->SetInterfaces(
        ::g::Fuse::Reactive::IEventHandler_typeof(), offsetof(FunctionMirror_type, interface0),
        ::g::Fuse::IRaw_typeof(), offsetof(FunctionMirror_type, interface1));
    type->SetFields(1,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(FunctionMirror, _func), 0);
}

FunctionMirror_type* FunctionMirror_typeof()
{
    static uSStrong<FunctionMirror_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::DiagnosticSubject_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(FunctionMirror);
    options.TypeSize = sizeof(FunctionMirror_type);
    type = (FunctionMirror_type*)uClassType::New("Fuse.Reactive.FunctionMirror", options);
    type->fp_build_ = FunctionMirror_build;
    type->interface0.fp_Dispatch = (void(*)(uObject*, uObject*))FunctionMirror__Dispatch_fn;
    type->interface1.fp_get_Raw = (void(*)(uObject*, uObject**))FunctionMirror__get_Raw_fn;
    return type;
}

// public FunctionMirror(Fuse.Scripting.Function func) :15
void FunctionMirror__ctor_1_fn(FunctionMirror* __this, ::g::Fuse::Scripting::Function* func)
{
    __this->ctor_1(func);
}

// public void Dispatch(Fuse.Reactive.IEventRecord e) :57
void FunctionMirror__Dispatch_fn(FunctionMirror* __this, uObject* e)
{
    __this->Dispatch(e);
}

// public FunctionMirror New(Fuse.Scripting.Function func) :15
void FunctionMirror__New2_fn(::g::Fuse::Scripting::Function* func, FunctionMirror** __retval)
{
    *__retval = FunctionMirror::New2(func);
}

// public object get_Raw() :13
void FunctionMirror__get_Raw_fn(FunctionMirror* __this, uObject** __retval)
{
    *__retval = __this->Raw();
}

// public FunctionMirror(Fuse.Scripting.Function func) [instance] :15
void FunctionMirror::ctor_1(::g::Fuse::Scripting::Function* func)
{
    ctor_();
    _func = func;
}

// public void Dispatch(Fuse.Reactive.IEventRecord e) [instance] :57
void FunctionMirror::Dispatch(uObject* e)
{
    uPtr(::g::Fuse::Reactive::JavaScript::Worker())->Invoke(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)FunctionMirror__CallClosure__Call_fn, FunctionMirror__CallClosure::New1(this, e)));
}

// public object get_Raw() [instance] :13
uObject* FunctionMirror::Raw()
{
    return _func;
}

// public FunctionMirror New(Fuse.Scripting.Function func) [static] :15
FunctionMirror* FunctionMirror::New2(::g::Fuse::Scripting::Function* func)
{
    FunctionMirror* obj1 = (FunctionMirror*)uNew(FunctionMirror_typeof());
    obj1->ctor_1(func);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Operators.uno
// ---------------------------------------------------------------------------

// public sealed class GreaterOrEqual :128
// {
static void GreaterOrEqual_build(uType* type)
{
    ::STRINGS[46] = uString::Const(">=");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InfixOperator_type, interface0));
    type->SetFields(2);
}

::g::Fuse::Reactive::InfixOperator_type* GreaterOrEqual_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InfixOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GreaterOrEqual);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InfixOperator_type);
    type = (::g::Fuse::Reactive::InfixOperator_type*)uClassType::New("Fuse.Reactive.GreaterOrEqual", options);
    type->fp_build_ = GreaterOrEqual_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))GreaterOrEqual__Compute_fn;
    type->fp_get_Symbol = (void(*)(::g::Fuse::Reactive::InfixOperator*, uString**))GreaterOrEqual__get_Symbol_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// protected override sealed object Compute(object left, object right) :132
void GreaterOrEqual__Compute_fn(GreaterOrEqual* __this, uObject* left, uObject* right, uObject** __retval)
{
    if ((left == NULL) || (right == NULL))
        return *__retval = NULL, void();

    return *__retval = uBox(::TYPES[23/*bool*/], uUnbox<bool>(::TYPES[23/*bool*/], ::g::Fuse::Marshal::GreaterThan(left, right)) || uUnbox<bool>(::TYPES[23/*bool*/], ::g::Fuse::Marshal::EqualTo(left, right))), void();
}

// public override sealed string get_Symbol() :138
void GreaterOrEqual__get_Symbol_fn(GreaterOrEqual* __this, uString** __retval)
{
    return *__retval = ::STRINGS[46/*">="*/], void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Operators.uno
// ---------------------------------------------------------------------------

// public sealed class GreaterThan :116
// {
static void GreaterThan_build(uType* type)
{
    ::STRINGS[47] = uString::Const(">");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InfixOperator_type, interface0));
    type->SetFields(2);
}

::g::Fuse::Reactive::InfixOperator_type* GreaterThan_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InfixOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GreaterThan);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InfixOperator_type);
    type = (::g::Fuse::Reactive::InfixOperator_type*)uClassType::New("Fuse.Reactive.GreaterThan", options);
    type->fp_build_ = GreaterThan_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))GreaterThan__Compute_fn;
    type->fp_get_Symbol = (void(*)(::g::Fuse::Reactive::InfixOperator*, uString**))GreaterThan__get_Symbol_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// protected override sealed object Compute(object left, object right) :120
void GreaterThan__Compute_fn(GreaterThan* __this, uObject* left, uObject* right, uObject** __retval)
{
    return *__retval = ::g::Fuse::Marshal::GreaterThan(left, right), void();
}

// public override sealed string get_Symbol() :125
void GreaterThan__get_Symbol_fn(GreaterThan* __this, uString** __retval)
{
    return *__retval = ::STRINGS[47/*">"*/], void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.3.1/IExpression.uno
// -----------------------------------------------------------------

// public abstract interface IContext :13
// {
uInterfaceType* IContext_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IContext", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.3.1/IEventHandler.uno
// -------------------------------------------------------------------

// public abstract interface IEventHandler :16
// {
uInterfaceType* IEventHandler_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IEventHandler", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.3.1/IEventHandler.uno
// -------------------------------------------------------------------

// public abstract interface IEventRecord :8
// {
uInterfaceType* IEventRecord_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IEventRecord", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.3.1/IExpression.uno
// -----------------------------------------------------------------

// public abstract interface IExpression :35
// {
uInterfaceType* IExpression_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IExpression", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.3.1/IExpression.uno
// -----------------------------------------------------------------

// public abstract interface IListener :8
// {
uInterfaceType* IListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IListener", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Operators.uno
// ---------------------------------------------------------------------------

// public abstract class InfixOperator :7
// {
static void InfixOperator_build(uType* type)
{
    ::STRINGS[11] = uString::Const("(");
    ::STRINGS[48] = uString::Const(" ");
    ::STRINGS[9] = uString::Const(")");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(InfixOperator_type, interface0));
    type->SetFields(2);
}

InfixOperator_type* InfixOperator_typeof()
{
    static uSStrong<InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::BinaryOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(InfixOperator);
    options.TypeSize = sizeof(InfixOperator_type);
    type = (InfixOperator_type*)uClassType::New("Fuse.Reactive.InfixOperator", options);
    type->fp_build_ = InfixOperator_build;
    type->fp_ToString = (void(*)(uObject*, uString**))InfixOperator__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// protected InfixOperator(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :9
void InfixOperator__ctor_2_fn(InfixOperator* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_2(left, right);
}

// public override sealed string ToString() :13
void InfixOperator__ToString_fn(InfixOperator* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[11/*"("*/], __this->Left()), ::STRINGS[48/*" "*/]), __this->Symbol()), ::STRINGS[48/*" "*/]), __this->Right()), ::STRINGS[9/*")"*/]), void();
}

// protected InfixOperator(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :9
void InfixOperator::ctor_2(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_1(left, right);
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Subscription.uno
// ------------------------------------------------------------------------------

// public abstract class InnerListener :14
// {
static void InnerListener_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(InnerListener_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(InnerListener_type, interface1));
    type->SetFields(0,
        ::g::Uno::IDisposable_typeof(), offsetof(InnerListener, _diag), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Reactive::IExpression_typeof(), InnerListener__ObservableSubscription_typeof(), NULL), offsetof(InnerListener, _obsSubs), 0);
}

InnerListener_type* InnerListener_typeof()
{
    static uSStrong<InnerListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(InnerListener);
    options.TypeSize = sizeof(InnerListener_type);
    type = (InnerListener_type*)uClassType::New("Fuse.Reactive.InnerListener", options);
    type->fp_build_ = InnerListener_build;
    type->fp_Dispose = InnerListener__Dispose_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))InnerListener__Dispose_fn;
    return type;
}

// protected generated InnerListener() :14
void InnerListener__ctor__fn(InnerListener* __this)
{
    __this->ctor_();
}

// public void ClearDiagnostic() :26
void InnerListener__ClearDiagnostic_fn(InnerListener* __this)
{
    __this->ClearDiagnostic();
}

// public virtual void Dispose() :35
void InnerListener__Dispose_fn(InnerListener* __this)
{
    ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong<InnerListener__ObservableSubscription*> > ret2;
    __this->ClearDiagnostic();

    if (__this->_obsSubs != NULL)
    {
        ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong<InnerListener__ObservableSubscription*> > enum1 = (::g::Uno::Collections::Dictionary__ValueCollection__GetEnumerator_fn(uPtr((::g::Uno::Collections::Dictionary__ValueCollection*)uPtr(__this->_obsSubs)->Values()), &ret2), ret2);

        {
            const auto __finally_fun = [&]()
            {
                enum1.Dispose(::g::Uno::Collections::Dictionary__ValueCollection__Enumerator_typeof()->MakeType(::TYPES[37/*Fuse.Reactive.IExpression*/], InnerListener__ObservableSubscription_typeof(), NULL));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);

            while (enum1.MoveNext(::g::Uno::Collections::Dictionary__ValueCollection__Enumerator_typeof()->MakeType(::TYPES[37/*Fuse.Reactive.IExpression*/], InnerListener__ObservableSubscription_typeof(), NULL)))
            {
                InnerListener__ObservableSubscription* k = enum1.Current(::g::Uno::Collections::Dictionary__ValueCollection__Enumerator_typeof()->MakeType(::TYPES[37/*Fuse.Reactive.IExpression*/], InnerListener__ObservableSubscription_typeof(), NULL));
                uPtr(k)->Dispose();
            }
        }

        uPtr(__this->_obsSubs)->Clear();
        __this->_obsSubs = NULL;
    }
}

// private void Fuse.Reactive.IListener.OnNewData(Fuse.Reactive.IExpression source, object value) :49
void InnerListener__FuseReactiveIListenerOnNewData_fn(InnerListener* __this, uObject* source, uObject* value)
{
    bool ret3;
    bool ret4;
    InnerListener__ObservableSubscription* obsSub = NULL;

    if ((__this->_obsSubs != NULL) && (::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(__this->_obsSubs), source, (void**)(&obsSub), &ret3), ret3))
    {
        uPtr(obsSub)->Dispose();
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(__this->_obsSubs), source, &ret4);
    }

    uObject* obs = uAs<uObject*>(value, ::TYPES[32/*Fuse.Reactive.IObservable*/]);

    if (obs != NULL)
    {
        if (__this->_obsSubs == NULL)
            __this->_obsSubs = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::g::Uno::Collections::Dictionary_typeof()->MakeType(::TYPES[37/*Fuse.Reactive.IExpression*/], InnerListener__ObservableSubscription_typeof(), NULL)));

        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(__this->_obsSubs), source, InnerListener__ObservableSubscription::New1(source, obs, __this));
    }
    else
        __this->OnNewData(source, value);
}

// public void SetDiagnostic(string message, Fuse.Reactive.IExpression source) :20
void InnerListener__SetDiagnostic_fn(InnerListener* __this, uString* message, uObject* source)
{
    __this->SetDiagnostic(message, source);
}

// protected generated InnerListener() [instance] :14
void InnerListener::ctor_()
{
}

// public void ClearDiagnostic() [instance] :26
void InnerListener::ClearDiagnostic()
{
    if (_diag != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_diag), ::TYPES[3/*Uno.IDisposable*/]));
        _diag = NULL;
    }
}

// public void SetDiagnostic(string message, Fuse.Reactive.IExpression source) [instance] :20
void InnerListener::SetDiagnostic(uString* message, uObject* source)
{
    ClearDiagnostic();
    _diag = ::g::Fuse::Diagnostics::ReportTemporalUserWarning(message, source);
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/Observable.uno
// ---------------------------------------------------------------------------

// private sealed class Observable.InsertAll :541
// {
static void Observable__InsertAll_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(Observable__InsertAll, _index), 0,
        ::g::Fuse::Reactive::ArrayMirror_typeof(), offsetof(Observable__InsertAll, _items), 0);
}

::g::Fuse::Reactive::Observable__Operation_type* Observable__InsertAll_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Observable__Operation_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__InsertAll);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Observable__Operation_type);
    type = (::g::Fuse::Reactive::Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.InsertAll", options);
    type->fp_build_ = Observable__InsertAll_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Reactive::Observable__Operation*, uObject*))Observable__InsertAll__OnPerform_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Reactive::Observable__Operation*))Observable__InsertAll__Unsubscribe_fn;
    return type;
}

// public InsertAll(Fuse.Reactive.Observable obs, int index, Fuse.Reactive.ArrayMirror items) :546
void Observable__InsertAll__ctor_1_fn(Observable__InsertAll* __this, ::g::Fuse::Reactive::Observable* obs, int* index, ::g::Fuse::Reactive::ArrayMirror* items)
{
    __this->ctor_1(obs, *index, items);
}

// public InsertAll New(Fuse.Reactive.Observable obs, int index, Fuse.Reactive.ArrayMirror items) :546
void Observable__InsertAll__New1_fn(::g::Fuse::Reactive::Observable* obs, int* index, ::g::Fuse::Reactive::ArrayMirror* items, Observable__InsertAll** __retval)
{
    *__retval = Observable__InsertAll::New1(obs, *index, items);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription> sub) :557
void Observable__InsertAll__OnPerform_fn(Observable__InsertAll* __this, uObject* sub)
{
    ::g::Fuse::Reactive::Observable__Subscription* ret2;
    ::g::Fuse::Reactive::Observable__Subscription* ret3;

    for (int i = 0; i < uPtr(__this->_items)->Length(); i++)
    {
        ::g::Uno::Collections::List__Insert_fn(uPtr(uPtr(__this->Observable())->_values), uCRef<int>(__this->_index + i), uPtr(__this->_items)->Item(i));

        for (int j = 0; j < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Reactive.Observable.Subscription>*/])); ++j)
            if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(j), &ret2), ret2))->ShouldSend(-1))
                ::g::Fuse::Reactive::IObserver::OnInsertAt(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(j), &ret3), ret3))->Observer()), ::TYPES[2/*Fuse.Reactive.IObserver*/]), __this->_index + i, uPtr(__this->_items)->Item(i));
    }
}

// protected override sealed void Unsubscribe() :552
void Observable__InsertAll__Unsubscribe_fn(Observable__InsertAll* __this)
{
    ::g::Fuse::Reactive::ValueMirror::Unsubscribe1(__this->_items);
}

// public InsertAll(Fuse.Reactive.Observable obs, int index, Fuse.Reactive.ArrayMirror items) [instance] :546
void Observable__InsertAll::ctor_1(::g::Fuse::Reactive::Observable* obs, int index, ::g::Fuse::Reactive::ArrayMirror* items)
{
    ctor_(obs);
    _index = index;
    _items = items;
}

// public InsertAll New(Fuse.Reactive.Observable obs, int index, Fuse.Reactive.ArrayMirror items) [static] :546
Observable__InsertAll* Observable__InsertAll::New1(::g::Fuse::Reactive::Observable* obs, int index, ::g::Fuse::Reactive::ArrayMirror* items)
{
    Observable__InsertAll* obj1 = (Observable__InsertAll*)uNew(Observable__InsertAll_typeof());
    obj1->ctor_1(obs, index, items);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/Observable.uno
// ---------------------------------------------------------------------------

// private sealed class Observable.InsertAt :513
// {
static void Observable__InsertAt_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(Observable__InsertAt, _index), 0,
        uObject_typeof(), offsetof(Observable__InsertAt, _value), 0);
}

::g::Fuse::Reactive::Observable__Operation_type* Observable__InsertAt_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Observable__Operation_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__InsertAt);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Observable__Operation_type);
    type = (::g::Fuse::Reactive::Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.InsertAt", options);
    type->fp_build_ = Observable__InsertAt_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Reactive::Observable__Operation*, uObject*))Observable__InsertAt__OnPerform_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Reactive::Observable__Operation*))Observable__InsertAt__Unsubscribe_fn;
    return type;
}

// public InsertAt(Fuse.Reactive.Observable obs, int index, object value) :518
void Observable__InsertAt__ctor_1_fn(Observable__InsertAt* __this, ::g::Fuse::Reactive::Observable* obs, int* index, uObject* value)
{
    __this->ctor_1(obs, *index, value);
}

// public InsertAt New(Fuse.Reactive.Observable obs, int index, object value) :518
void Observable__InsertAt__New1_fn(::g::Fuse::Reactive::Observable* obs, int* index, uObject* value, Observable__InsertAt** __retval)
{
    *__retval = Observable__InsertAt::New1(obs, *index, value);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription> sub) :529
void Observable__InsertAt__OnPerform_fn(Observable__InsertAt* __this, uObject* sub)
{
    ::g::Fuse::Reactive::Observable__Subscription* ret2;
    ::g::Fuse::Reactive::Observable__Subscription* ret3;
    ::g::Uno::Collections::List__Insert_fn(uPtr(uPtr(__this->Observable())->_values), uCRef<int>(__this->_index), __this->_value);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Reactive.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret2), ret2))->ShouldSend(-1))
            ::g::Fuse::Reactive::IObserver::OnInsertAt(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret3), ret3))->Observer()), ::TYPES[2/*Fuse.Reactive.IObserver*/]), __this->_index, __this->_value);
}

// protected override sealed void Unsubscribe() :524
void Observable__InsertAt__Unsubscribe_fn(Observable__InsertAt* __this)
{
    ::g::Fuse::Reactive::ValueMirror::Unsubscribe1(__this->_value);
}

// public InsertAt(Fuse.Reactive.Observable obs, int index, object value) [instance] :518
void Observable__InsertAt::ctor_1(::g::Fuse::Reactive::Observable* obs, int index, uObject* value)
{
    ctor_(obs);
    _index = index;
    _value = value;
}

// public InsertAt New(Fuse.Reactive.Observable obs, int index, object value) [static] :518
Observable__InsertAt* Observable__InsertAt::New1(::g::Fuse::Reactive::Observable* obs, int index, uObject* value)
{
    Observable__InsertAt* obj1 = (Observable__InsertAt*)uNew(Observable__InsertAt_typeof());
    obj1->ctor_1(obs, index, value);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/Instance.API.uno
// ---------------------------------------------------------------------------

// public enum InstanceDefer :14
uEnumType* InstanceDefer_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Reactive.InstanceDefer", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Immediate", 0LL,
        "Frame", 1LL,
        "Deferred", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/Instance.API.uno
// ---------------------------------------------------------------------------

// public enum InstanceIdentity :42
uEnumType* InstanceIdentity_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Reactive.InstanceIdentity", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "Key", 1LL,
        "Object", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/Instance.API.uno
// ---------------------------------------------------------------------------

// public enum InstanceReuse :29
uEnumType* InstanceReuse_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Reactive.InstanceReuse", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "None", 0LL,
        "Frame", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/Instance.API.uno
// ---------------------------------------------------------------------------

// public partial class Instantiator :53
// {
static void Instantiator_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::DeferredManager_typeof(),
        ::g::Fuse::Diagnostics_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Instantiator_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Instantiator_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(Instantiator_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(Instantiator_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Instantiator_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Instantiator_type, interface5),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(Instantiator_type, interface6),
        ::g::Fuse::Node__ISubtreeDataProvider_typeof(), offsetof(Instantiator_type, interface7),
        ::g::Fuse::IDeferred_typeof(), offsetof(Instantiator_type, interface8));
    type->SetFields(15,
        ::g::Fuse::Internal::ObjectList_typeof()->MakeType(Instantiator__WindowItem_typeof(), NULL), offsetof(Instantiator, _availableItems), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(uObject_typeof(), Instantiator__WindowItem_typeof(), NULL), offsetof(Instantiator, _availableItemsById), 0,
        ::g::Fuse::Triggers::BusyTask_typeof(), offsetof(Instantiator, _busyTask), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(Instantiator, _completedRemove), 0,
        ::g::Uno::Int_typeof(), offsetof(Instantiator, _count), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Node_typeof(), Instantiator__WindowItem_typeof(), NULL), offsetof(Instantiator, _dataMap), 0,
        ::g::Fuse::Reactive::InstanceDefer_typeof(), offsetof(Instantiator, _defer), 0,
        ::g::Uno::Float_typeof(), offsetof(Instantiator, _deferredPriority), 0,
        ::g::Uno::Bool_typeof(), offsetof(Instantiator, _hasLimit), 0,
        ::g::Fuse::Reactive::InstanceIdentity_typeof(), offsetof(Instantiator, _identity), 0,
        ::g::Uno::String_typeof(), offsetof(Instantiator, _identityKey), 0,
        ::g::Uno::Bool_typeof(), offsetof(Instantiator, _isListeningItems), 0,
        uObject_typeof(), offsetof(Instantiator, _items), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(Instantiator, _itemsSubscription), 0,
        ::g::Uno::Int_typeof(), offsetof(Instantiator, _limit), 0,
        ::g::Uno::String_typeof(), offsetof(Instantiator, _matchKey), 0,
        ::g::Uno::Int_typeof(), offsetof(Instantiator, _offset), 0,
        ::g::Uno::Bool_typeof(), offsetof(Instantiator, _pendingAvailableItems), 0,
        ::g::Uno::Bool_typeof(), offsetof(Instantiator, _pendingNew), 0,
        ::g::Uno::Bool_typeof(), offsetof(Instantiator, _pendingUpdateWindowItems), 0,
        ::g::Fuse::Reactive::InstanceReuse_typeof(), offsetof(Instantiator, _reuse), 0,
        ::g::Uno::Collections::RootableList_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL), offsetof(Instantiator, _rootTemplates), 0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL), offsetof(Instantiator, _templates), 0,
        ::g::Fuse::ITemplateSource_typeof(), offsetof(Instantiator, _templateSource), 0,
        ::g::Fuse::ITemplateSource_typeof(), offsetof(Instantiator, _weakTemplateSource), uFieldFlagsWeak,
        ::g::Fuse::Internal::ObjectList_typeof()->MakeType(Instantiator__WindowItem_typeof(), NULL), offsetof(Instantiator, _windowItems), 0,
        ::g::Uno::String_typeof(), offsetof(Instantiator, _TemplateKey), 0,
        ::g::Uno::Action_typeof(), offsetof(Instantiator, UpdatedWindowItems1), 0);
}

Instantiator_type* Instantiator_typeof()
{
    static uSStrong<Instantiator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 43;
    options.InterfaceCount = 9;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(Instantiator);
    options.TypeSize = sizeof(Instantiator_type);
    type = (Instantiator_type*)uClassType::New("Fuse.Reactive.Instantiator", options);
    type->fp_build_ = Instantiator_build;
    type->fp_GetLastNodeInGroup = (void(*)(::g::Fuse::Node*, ::g::Fuse::Node**))Instantiator__GetLastNodeInGroup_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Instantiator__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Instantiator__OnUnrooted_fn;
    type->interface7.fp_GetData = (void(*)(uObject*, ::g::Fuse::Node*, uObject**))Instantiator__FuseNodeISubtreeDataProviderGetData_fn;
    type->interface6.fp_OnSet = (void(*)(uObject*, uObject*))Instantiator__FuseReactiveIObserverOnSet_fn;
    type->interface6.fp_OnFailed = (void(*)(uObject*, uString*))Instantiator__FuseReactiveIObserverOnFailed_fn;
    type->interface6.fp_OnAdd = (void(*)(uObject*, uObject*))Instantiator__FuseReactiveIObserverOnAdd_fn;
    type->interface6.fp_OnRemoveAt = (void(*)(uObject*, int*))Instantiator__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface6.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))Instantiator__FuseReactiveIObserverOnInsertAt_fn;
    type->interface6.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))Instantiator__FuseReactiveIObserverOnNewAt_fn;
    type->interface6.fp_OnNewAll = (void(*)(uObject*, uObject*))Instantiator__FuseReactiveIObserverOnNewAll_fn;
    type->interface6.fp_OnClear = (void(*)(uObject*))Instantiator__FuseReactiveIObserverOnClear_fn;
    type->interface8.fp_Perform = (void(*)(uObject*, bool*))Instantiator__FuseIDeferredPerform_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// protected internal Instantiator() :72
void Instantiator__ctor_3_fn(Instantiator* __this)
{
    __this->ctor_3();
}

// private bool AddMatchingTemplates(Fuse.Reactive.Instantiator.WindowItem item, Fuse.Reactive.Instantiator.TemplateMatch f) :218
void Instantiator__AddMatchingTemplates_fn(Instantiator* __this, Instantiator__WindowItem* item, Instantiator__TemplateMatch* f, bool* __retval)
{
    *__retval = __this->AddMatchingTemplates(item, *f);
}

// private void AddTemplate(Fuse.Reactive.Instantiator.WindowItem item, Uno.UX.Template f) :252
void Instantiator__AddTemplate_fn(Instantiator* __this, Instantiator__WindowItem* item, ::g::Uno::UX::Template* f)
{
    __this->AddTemplate(item, f);
}

// private void Append() :420
void Instantiator__Append_fn(Instantiator* __this)
{
    __this->Append();
}

// private int CalcOffsetLimitCountOf(int length) :124
void Instantiator__CalcOffsetLimitCountOf_fn(Instantiator* __this, int* length, int* __retval)
{
    *__retval = __this->CalcOffsetLimitCountOf(*length);
}

// private void CompleteActionGood() :10
void Instantiator__CompleteActionGood_fn(Instantiator* __this)
{
    __this->CompleteActionGood();
}

// private void CompletedRemove(Fuse.Node n) :152
void Instantiator__CompletedRemove_fn(Instantiator* __this, ::g::Fuse::Node* n)
{
    __this->CompletedRemove(n);
}

// private void CompleteNodeAction() :315
void Instantiator__CompleteNodeAction_fn(Instantiator* __this)
{
    __this->CompleteNodeAction();
}

// private void CompleteWindowItem(Fuse.Reactive.Instantiator.WindowItem wi, int windowIndex) :160
void Instantiator__CompleteWindowItem_fn(Instantiator* __this, Instantiator__WindowItem* wi, int* windowIndex)
{
    __this->CompleteWindowItem(wi, *windowIndex);
}

// private bool CompleteWindowItems(bool one) :81
void Instantiator__CompleteWindowItems_fn(Instantiator* __this, bool* one, bool* __retval)
{
    *__retval = __this->CompleteWindowItems(*one);
}

// private void CompleteWindowItemsAction() :75
void Instantiator__CompleteWindowItemsAction_fn(Instantiator* __this)
{
    __this->CompleteWindowItemsAction();
}

// protected internal int get_Count() :306
void Instantiator__get_Count_fn(Instantiator* __this, int* __retval)
{
    *__retval = __this->Count();
}

// protected internal void set_Count(int value) :307
void Instantiator__set_Count_fn(Instantiator* __this, int* value)
{
    __this->Count(*value);
}

// internal int get_DataCount() :54
void Instantiator__get_DataCount_fn(Instantiator* __this, int* __retval)
{
    *__retval = __this->DataCount();
}

// internal int DataIndexOfChild(Fuse.Node child) :14
void Instantiator__DataIndexOfChild_fn(Instantiator* __this, ::g::Fuse::Node* child, int* __retval)
{
    *__retval = __this->DataIndexOfChild(child);
}

// private int DataToWindowIndex(int dataIndex) :397
void Instantiator__DataToWindowIndex_fn(Instantiator* __this, int* dataIndex, int* __retval)
{
    *__retval = __this->DataToWindowIndex(*dataIndex);
}

// public Fuse.Reactive.InstanceDefer get_Defer() :85
void Instantiator__get_Defer_fn(Instantiator* __this, int* __retval)
{
    *__retval = __this->Defer();
}

// public void set_Defer(Fuse.Reactive.InstanceDefer value) :86
void Instantiator__set_Defer_fn(Instantiator* __this, int* value)
{
    __this->Defer(*value);
}

// public float get_DeferredPriority() :156
void Instantiator__get_DeferredPriority_fn(Instantiator* __this, float* __retval)
{
    *__retval = __this->DeferredPriority();
}

// public void set_DeferredPriority(float value) :157
void Instantiator__set_DeferredPriority_fn(Instantiator* __this, float* value)
{
    __this->DeferredPriority(*value);
}

// private void DisposeItemsSubscription() :93
void Instantiator__DisposeItemsSubscription_fn(Instantiator* __this)
{
    __this->DisposeItemsSubscription();
}

// private bool Fuse.IDeferred.Perform() :69
void Instantiator__FuseIDeferredPerform_fn(Instantiator* __this, bool* __retval)
{
    __this->_pendingNew = __this->CompleteWindowItems(true);
    return *__retval = !__this->_pendingNew, void();
}

// private object Fuse.Node.ISubtreeDataProvider.GetData(Fuse.Node n) :56
void Instantiator__FuseNodeISubtreeDataProviderGetData_fn(Instantiator* __this, ::g::Fuse::Node* n, uObject** __retval)
{
    bool ret12;
    Instantiator__WindowItem* v;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(__this->_dataMap), n, (void**)(&v), &ret12), ret12))
    {
        if (uIs((uObject*)uPtr(v)->Data, Instantiator__CountItem_typeof()))
            return *__retval = NULL, void();

        return *__retval = uPtr(v)->CurrentData(), void();
    }

    return *__retval = NULL, void();
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :35
void Instantiator__FuseReactiveIObserverOnAdd_fn(Instantiator* __this, uObject* addedValue)
{
    if (!__this->IsListeningItems())
        return;

    __this->CompleteActionGood();
}

// private void Fuse.Reactive.IObserver.OnClear() :117
void Instantiator__FuseReactiveIObserverOnClear_fn(Instantiator* __this)
{
    if (!__this->IsListeningItems())
        return;

    __this->RemoveAll();
    __this->CompleteActionGood();
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :25
void Instantiator__FuseReactiveIObserverOnFailed_fn(Instantiator* __this, uString* message)
{
    if (!__this->IsListeningItems())
        return;

    __this->RemoveAll();
    __this->SetFailed(message);
    __this->CompleteNodeAction();
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :50
void Instantiator__FuseReactiveIObserverOnInsertAt_fn(Instantiator* __this, int* index, uObject* value)
{
    int index_ = *index;

    if (!__this->IsListeningItems())
        return;

    __this->InsertNew(index_);
    __this->CompleteActionGood();
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray values) :106
void Instantiator__FuseReactiveIObserverOnNewAll_fn(Instantiator* __this, uObject* values)
{
    if (!__this->IsListeningItems())
        return;

    if (__this->Identity() != 0)
        __this->PatchTo(values);
    else
        __this->RemoveAll();

    __this->CompleteActionGood();
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :58
void Instantiator__FuseReactiveIObserverOnNewAt_fn(Instantiator* __this, int* index, uObject* value)
{
    int index_ = *index;

    if (!__this->IsListeningItems())
        return;

    if (!__this->TryUpdateAt(index_, value))
    {
        __this->RemoveAt(index_);
        __this->InsertNew(index_);
    }

    __this->CompleteActionGood();
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :42
void Instantiator__FuseReactiveIObserverOnRemoveAt_fn(Instantiator* __this, int* index)
{
    int index_ = *index;

    if (!__this->IsListeningItems())
        return;

    __this->RemoveAt(index_);
    __this->CompleteActionGood();
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :17
void Instantiator__FuseReactiveIObserverOnSet_fn(Instantiator* __this, uObject* newValue)
{
    if (!__this->IsListeningItems())
        return;

    __this->RemoveAll();
    __this->CompleteActionGood();
}

// private Fuse.Reactive.Instantiator.WindowItem GetAvailableNodes(Fuse.Reactive.Instantiator.TemplateMatch f, object id) :277
void Instantiator__GetAvailableNodes_fn(Instantiator* __this, Instantiator__TemplateMatch* f, uObject* id, Instantiator__WindowItem** __retval)
{
    *__retval = __this->GetAvailableNodes(*f, id);
}

// private object GetData(int dataIndex) :32
void Instantiator__GetData_fn(Instantiator* __this, int* dataIndex, uObject** __retval)
{
    *__retval = __this->GetData(*dataIndex);
}

// private int GetDataCount() :43
void Instantiator__GetDataCount_fn(Instantiator* __this, int* __retval)
{
    *__retval = __this->GetDataCount();
}

// private object GetDataId(object data) :113
void Instantiator__GetDataId_fn(Instantiator* __this, uObject* data, uObject** __retval)
{
    *__retval = __this->GetDataId(data);
}

// private object GetDataKey(object data, string key) :96
void Instantiator__GetDataKey_fn(Instantiator* __this, uObject* data, uString* key, uObject** __retval)
{
    *__retval = __this->GetDataKey(data, key);
}

// private Fuse.Reactive.Instantiator.TemplateMatch GetDataTemplate(object data) :121
void Instantiator__GetDataTemplate_fn(Instantiator* __this, uObject* data, Instantiator__TemplateMatch* __retval)
{
    *__retval = __this->GetDataTemplate(data);
}

// private Fuse.Node GetLastNodeFromIndex(int windowIndex) :13
void Instantiator__GetLastNodeFromIndex_fn(Instantiator* __this, int* windowIndex, ::g::Fuse::Node** __retval)
{
    *__retval = __this->GetLastNodeFromIndex(*windowIndex);
}

// internal override sealed Fuse.Node GetLastNodeInGroup() :158
void Instantiator__GetLastNodeInGroup_fn(Instantiator* __this, ::g::Fuse::Node** __retval)
{
    return *__retval = __this->GetLastNodeFromIndex(uPtr(__this->_windowItems)->Count() - 1), void();
}

// internal bool get_HasLimit() :297
void Instantiator__get_HasLimit_fn(Instantiator* __this, bool* __retval)
{
    *__retval = __this->HasLimit();
}

// public Fuse.Reactive.InstanceIdentity get_Identity() :121
void Instantiator__get_Identity_fn(Instantiator* __this, int* __retval)
{
    *__retval = __this->Identity();
}

// public void set_Identity(Fuse.Reactive.InstanceIdentity value) :122
void Instantiator__set_Identity_fn(Instantiator* __this, int* value)
{
    __this->Identity(*value);
}

// public string get_IdentityKey() :140
void Instantiator__get_IdentityKey_fn(Instantiator* __this, uString** __retval)
{
    *__retval = __this->IdentityKey();
}

// public void set_IdentityKey(string value) :141
void Instantiator__set_IdentityKey_fn(Instantiator* __this, uString* value)
{
    __this->IdentityKey(value);
}

// private void InsertNew(int dataIndex) :33
void Instantiator__InsertNew_fn(Instantiator* __this, int* dataIndex)
{
    __this->InsertNew(*dataIndex);
}

// private void InsertNewWindowItem(int windowIndex, object data) :48
void Instantiator__InsertNewWindowItem_fn(Instantiator* __this, int* windowIndex, uObject* data)
{
    __this->InsertNewWindowItem(*windowIndex, data);
}

// private bool get_IsListeningItems() :103
void Instantiator__get_IsListeningItems_fn(Instantiator* __this, bool* __retval)
{
    *__retval = __this->IsListeningItems();
}

// internal int get_Limit() :278
void Instantiator__get_Limit_fn(Instantiator* __this, int* __retval)
{
    *__retval = __this->Limit();
}

// internal void set_Limit(int value) :279
void Instantiator__set_Limit_fn(Instantiator* __this, int* value)
{
    __this->Limit(*value);
}

// public string get_MatchKey() :371
void Instantiator__get_MatchKey_fn(Instantiator* __this, uString** __retval)
{
    *__retval = __this->MatchKey();
}

// public void set_MatchKey(string value) :372
void Instantiator__set_MatchKey_fn(Instantiator* __this, uString* value)
{
    __this->MatchKey(value);
}

// internal int get_Offset() :230
void Instantiator__get_Offset_fn(Instantiator* __this, int* __retval)
{
    *__retval = __this->Offset();
}

// internal void set_Offset(int value) :231
void Instantiator__set_Offset_fn(Instantiator* __this, int* value)
{
    __this->Offset(*value);
}

// protected internal void OnItemsChanged() :323
void Instantiator__OnItemsChanged_fn(Instantiator* __this)
{
    __this->OnItemsChanged();
}

// protected override sealed void OnRooted() :82
void Instantiator__OnRooted_fn(Instantiator* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->OnItemsChanged();

    if (__this->_rootTemplates != NULL)
        uPtr(__this->_rootTemplates)->Subscribe(uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL), (void*)Instantiator__OnTemplatesChanged_fn, __this), uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL), (void*)Instantiator__OnTemplatesChanged_fn, __this));

    __this->_templateSource = __this->_weakTemplateSource;
}

// private void OnTemplatesChanged(Uno.UX.Template factory) :76
void Instantiator__OnTemplatesChanged_fn(Instantiator* __this, ::g::Uno::UX::Template* factory)
{
    __this->OnTemplatesChanged(factory);
}

// protected override sealed void OnUnrooted() :109
void Instantiator__OnUnrooted_fn(Instantiator* __this)
{
    __this->DisposeItemsSubscription();
    __this->RemoveAll();
    __this->RemovePendingAvailableItems();

    if (__this->_rootTemplates != NULL)
        uPtr(__this->_rootTemplates)->Unsubscribe();

    __this->_templateSource = NULL;
    __this->_completedRemove = NULL;
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void OnUpdatedWindowItems() :509
void Instantiator__OnUpdatedWindowItems_fn(Instantiator* __this)
{
    __this->OnUpdatedWindowItems();
}

// private void PatchTo(Fuse.IArray values) :71
void Instantiator__PatchTo_fn(Instantiator* __this, uObject* values)
{
    __this->PatchTo(values);
}

// private void PostUpdatedWindowItems() :519
void Instantiator__PostUpdatedWindowItems_fn(Instantiator* __this)
{
    __this->PostUpdatedWindowItems();
}

// private void RemoveAll() :426
void Instantiator__RemoveAll_fn(Instantiator* __this)
{
    __this->RemoveAll();
}

// private void RemoveAt(int dataIndex) :402
void Instantiator__RemoveAt_fn(Instantiator* __this, int* dataIndex)
{
    __this->RemoveAt(*dataIndex);
}

// private void RemoveFromParent(Fuse.Node n) :145
void Instantiator__RemoveFromParent_fn(Instantiator* __this, ::g::Fuse::Node* n)
{
    __this->RemoveFromParent(n);
}

// private void RemoveLastActive() :415
void Instantiator__RemoveLastActive_fn(Instantiator* __this)
{
    __this->RemoveLastActive();
}

// private void RemovePendingAvailableItems() :340
void Instantiator__RemovePendingAvailableItems_fn(Instantiator* __this)
{
    __this->RemovePendingAvailableItems();
}

// private void RemovePendingAvailableItemsAction() :332
void Instantiator__RemovePendingAvailableItemsAction_fn(Instantiator* __this)
{
    __this->RemovePendingAvailableItemsAction();
}

// private void RemoveWindowItem(Fuse.Reactive.Instantiator.WindowItem wi) :372
void Instantiator__RemoveWindowItem_fn(Instantiator* __this, Instantiator__WindowItem* wi)
{
    __this->RemoveWindowItem(wi);
}

// private void Repopulate() :439
void Instantiator__Repopulate_fn(Instantiator* __this)
{
    __this->Repopulate();
}

// public Fuse.Reactive.InstanceReuse get_Reuse() :105
void Instantiator__get_Reuse_fn(Instantiator* __this, int* __retval)
{
    *__retval = __this->Reuse();
}

// public void set_Reuse(Fuse.Reactive.InstanceReuse value) :106
void Instantiator__set_Reuse_fn(Instantiator* __this, int* value)
{
    __this->Reuse(*value);
}

// private void SetFailed(string message) :137
void Instantiator__SetFailed_fn(Instantiator* __this, uString* message)
{
    __this->SetFailed(message);
}

// private void SetValid() :131
void Instantiator__SetValid_fn(Instantiator* __this)
{
    __this->SetValid();
}

// private void StartListeningItems() :104
void Instantiator__StartListeningItems_fn(Instantiator* __this)
{
    __this->StartListeningItems();
}

// public generated string get_TemplateKey() :224
void Instantiator__get_TemplateKey_fn(Instantiator* __this, uString** __retval)
{
    *__retval = __this->TemplateKey();
}

// public generated void set_TemplateKey(string value) :224
void Instantiator__set_TemplateKey_fn(Instantiator* __this, uString* value)
{
    __this->TemplateKey(value);
}

// public Uno.Collections.IList<Uno.UX.Template> get_Templates() :65
void Instantiator__get_Templates_fn(Instantiator* __this, uObject** __retval)
{
    *__retval = __this->Templates();
}

// public Fuse.ITemplateSource get_TemplateSource() :199
void Instantiator__get_TemplateSource_fn(Instantiator* __this, uObject** __retval)
{
    *__retval = __this->TemplateSource();
}

// public void set_TemplateSource(Fuse.ITemplateSource value) :200
void Instantiator__set_TemplateSource_fn(Instantiator* __this, uObject* value)
{
    __this->TemplateSource(value);
}

// private void TrimAndPad() :532
void Instantiator__TrimAndPad_fn(Instantiator* __this)
{
    __this->TrimAndPad();
}

// private bool TryUpdateAt(int dataIndex, object newData) :189
void Instantiator__TryUpdateAt_fn(Instantiator* __this, int* dataIndex, uObject* newData, bool* __retval)
{
    *__retval = __this->TryUpdateAt(*dataIndex, newData);
}

// private void UpdateData(Fuse.Reactive.Instantiator.WindowItem item, object oldData) :72
void Instantiator__UpdateData_fn(Instantiator* __this, Instantiator__WindowItem* item, uObject* oldData)
{
    __this->UpdateData(item, oldData);
}

// internal generated void add_UpdatedWindowItems(Uno.Action value) :507
void Instantiator__add_UpdatedWindowItems_fn(Instantiator* __this, uDelegate* value)
{
    __this->add_UpdatedWindowItems(value);
}

// internal generated void remove_UpdatedWindowItems(Uno.Action value) :507
void Instantiator__remove_UpdatedWindowItems_fn(Instantiator* __this, uDelegate* value)
{
    __this->remove_UpdatedWindowItems(value);
}

// protected internal Instantiator() [instance] :72
void Instantiator::ctor_3()
{
    _defer = 1;
    _deferredPriority = 0.0f;
    _dataMap = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::g::Uno::Collections::Dictionary_typeof()->MakeType(::TYPES[40/*Fuse.Node*/], Instantiator__WindowItem_typeof(), NULL)));
    _availableItemsById = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::g::Uno::Collections::Dictionary_typeof()->MakeType(uObject_typeof(), Instantiator__WindowItem_typeof(), NULL)));
    _availableItems = ((::g::Fuse::Internal::ObjectList*)::g::Fuse::Internal::ObjectList::New1(::g::Fuse::Internal::ObjectList_typeof()->MakeType(Instantiator__WindowItem_typeof(), NULL), 0));
    _windowItems = ((::g::Fuse::Internal::ObjectList*)::g::Fuse::Internal::ObjectList::New1(::g::Fuse::Internal::ObjectList_typeof()->MakeType(Instantiator__WindowItem_typeof(), NULL), 0));
    ctor_2();
}

// private bool AddMatchingTemplates(Fuse.Reactive.Instantiator.WindowItem item, Fuse.Reactive.Instantiator.TemplateMatch f) [instance] :218
bool Instantiator::AddMatchingTemplates(Instantiator__WindowItem* item, Instantiator__TemplateMatch f)
{
    ::g::Uno::UX::Template* ret7;
    bool reuse = false;
    uObject* oldData = NULL;
    Instantiator__WindowItem* av = GetAvailableNodes(f, uPtr(item)->Id);

    if (av != NULL)
    {
        uPtr(item)->Nodes = uPtr(av)->Nodes;
        oldData = av->CurrentData();
        av->Nodes = NULL;
        reuse = true;
    }
    else if (f.All)
    {
        uPtr(item)->Nodes = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[54/*Uno.Collections.List`1*/]->MakeType(::TYPES[40/*Fuse.Node*/], NULL)));

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL))); ++i)
            AddTemplate(item, (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), uCRef<int>(i), &ret7), ret7));
    }
    else if (f.Template == NULL)
        uPtr(item)->Nodes = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[54/*Uno.Collections.List`1*/]->MakeType(::TYPES[40/*Fuse.Node*/], NULL)));
    else
    {
        uPtr(item)->Nodes = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[54/*Uno.Collections.List`1*/]->MakeType(::TYPES[40/*Fuse.Node*/], NULL)));
        AddTemplate(item, f.Template);
    }

    UpdateData(item, oldData);
    item->Template = f;
    return reuse;
}

// private void AddTemplate(Fuse.Reactive.Instantiator.WindowItem item, Uno.UX.Template f) [instance] :252
void Instantiator::AddTemplate(Instantiator__WindowItem* item, ::g::Uno::UX::Template* f)
{
    ::g::Fuse::Node* elm = uAs< ::g::Fuse::Node*>(uPtr(f)->New1(), ::TYPES[40/*Fuse.Node*/]);

    if (elm == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("Template contains a non-Node"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/Instance.WindowItems.uno"), 257, uString::Const("AddTemplate"));
        return;
    }

    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(item)->Nodes), elm);
}

// private void Append() [instance] :420
void Instantiator::Append()
{
    InsertNew(Offset() + uPtr(_windowItems)->Count());
}

// private int CalcOffsetLimitCountOf(int length) [instance] :124
int Instantiator::CalcOffsetLimitCountOf(int length)
{
    int q = ::g::Uno::Math::Max8(0, length - Offset());
    return HasLimit() ? ::g::Uno::Math::Min8(Limit(), q) : q;
}

// private void CompleteActionGood() [instance] :10
void Instantiator::CompleteActionGood()
{
    TrimAndPad();
    SetValid();
    CompleteNodeAction();
}

// private void CompletedRemove(Fuse.Node n) [instance] :152
void Instantiator::CompletedRemove(::g::Fuse::Node* n)
{
    bool ret8;
    uPtr(n)->OverrideContextParent = NULL;
    ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(_dataMap), n, &ret8);
}

// private void CompleteNodeAction() [instance] :315
void Instantiator::CompleteNodeAction()
{
    if (Reuse() == 1)
    {
        if (!_pendingAvailableItems)
        {
            ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)Instantiator__RemovePendingAvailableItemsAction_fn, this), -1, 2);
            _pendingAvailableItems = true;
        }
    }
    else if (!_pendingNew)
        RemovePendingAvailableItems();
}

// private void CompleteWindowItem(Fuse.Reactive.Instantiator.WindowItem wi, int windowIndex) [instance] :160
void Instantiator::CompleteWindowItem(Instantiator__WindowItem* wi, int windowIndex)
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret9;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret10;
    uPtr(wi)->Id = GetDataId(uPtr(wi)->Data);
    Instantiator__TemplateMatch match = GetDataTemplate(wi->Data);
    bool reuse = AddMatchingTemplates(wi, match);

    if ((wi->Template.All && (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL))) != uPtr(wi->Nodes)->Count())) || ((wi->Template.Template != NULL) && (uPtr(wi->Nodes)->Count() != 1)))
        ::g::Fuse::Diagnostics::InternalError(uString::Const("inconsistent instance state"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/Instance.WindowItems.uno"), 170, uString::Const("CompleteWindowItem"));

    ::g::Fuse::Node* lastNode = GetLastNodeFromIndex(windowIndex - 1);

    if (reuse)
        uPtr(Parent())->InsertOrMoveNodesAfter(lastNode, uBox(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::TYPES[40/*Fuse.Node*/], NULL), (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(uPtr(wi)->Nodes), &ret9), ret9)));
    else
        uPtr(Parent())->InsertNodesAfter(lastNode, uBox(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::TYPES[40/*Fuse.Node*/], NULL), (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(uPtr(wi)->Nodes), &ret10), ret10)));
}

// private bool CompleteWindowItems(bool one) [instance] :81
bool Instantiator::CompleteWindowItems(bool one)
{
    if (!IsRootingStarted())
        return false;

    bool first = true;

    for (int i = 0; i < uPtr(_windowItems)->Count(); ++i)
    {
        Instantiator__WindowItem* wi = (Instantiator__WindowItem*)uPtr(_windowItems)->Item(i);

        if (uPtr(wi)->Nodes == NULL)
        {
            if (!first && one)
                return true;

            CompleteWindowItem(wi, i);
            first = false;
        }
    }

    RemovePendingAvailableItems();
    return false;
}

// private void CompleteWindowItemsAction() [instance] :75
void Instantiator::CompleteWindowItemsAction()
{
    CompleteWindowItems(false);
    _pendingNew = false;
}

// protected internal int get_Count() [instance] :306
int Instantiator::Count()
{
    return _count;
}

// protected internal void set_Count(int value) [instance] :307
void Instantiator::Count(int value)
{
    if (_count == value)
        return;

    _count = value;
    uArray* items = uArray::New(::TYPES[4/*object[]*/], _count);

    for (int i = 0; i < _count; ++i)
        uPtr(items)->Strong<uObject*>(i) = Instantiator__CountItem::New1();

    _items = items;
    OnItemsChanged();
}

// internal int get_DataCount() [instance] :54
int Instantiator::DataCount()
{
    return GetDataCount();
}

// internal int DataIndexOfChild(Fuse.Node child) [instance] :14
int Instantiator::DataIndexOfChild(::g::Fuse::Node* child)
{
    ::g::Fuse::Node* ret11;

    for (int i = 0; i < uPtr(_windowItems)->Count(); i++)
    {
        Instantiator__WindowItem* wi = (Instantiator__WindowItem*)uPtr(_windowItems)->Item(i);
        ::g::Uno::Collections::List* list = uPtr(wi)->Nodes;

        if (list == NULL)
            continue;

        for (int n = 0; n < uPtr(list)->Count(); n++)
            if ((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(n), &ret11), ret11) == child)
                return i + Offset();
    }

    return -1;
}

// private int DataToWindowIndex(int dataIndex) [instance] :397
int Instantiator::DataToWindowIndex(int dataIndex)
{
    return dataIndex - Offset();
}

// public Fuse.Reactive.InstanceDefer get_Defer() [instance] :85
int Instantiator::Defer()
{
    return _defer;
}

// public void set_Defer(Fuse.Reactive.InstanceDefer value) [instance] :86
void Instantiator::Defer(int value)
{
    _defer = value;
}

// public float get_DeferredPriority() [instance] :156
float Instantiator::DeferredPriority()
{
    return _deferredPriority;
}

// public void set_DeferredPriority(float value) [instance] :157
void Instantiator::DeferredPriority(float value)
{
    _deferredPriority = value;
}

// private void DisposeItemsSubscription() [instance] :93
void Instantiator::DisposeItemsSubscription()
{
    _isListeningItems = false;

    if (_itemsSubscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_itemsSubscription), ::TYPES[3/*Uno.IDisposable*/]));
        _itemsSubscription = NULL;
    }
}

// private Fuse.Reactive.Instantiator.WindowItem GetAvailableNodes(Fuse.Reactive.Instantiator.TemplateMatch f, object id) [instance] :277
Instantiator__WindowItem* Instantiator::GetAvailableNodes(Instantiator__TemplateMatch f, uObject* id)
{
    bool ret13;
    bool ret14;

    if ((id != NULL) && (_availableItemsById != NULL))
    {
        Instantiator__WindowItem* item;

        if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_availableItemsById), id, (void**)(&item), &ret13), ret13) && f.Matches(uPtr(item)->Template))
        {
            ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(_availableItemsById), id, &ret14);
            return item;
        }
    }

    if ((Reuse() != 0) && (_availableItems != NULL))

        for (int i = 0; i < uPtr(_availableItems)->Count(); ++i)
        {
            Instantiator__WindowItem* av = (Instantiator__WindowItem*)uPtr(_availableItems)->Item(i);

            if (f.Matches(uPtr(av)->Template))
            {
                uPtr(_availableItems)->RemoveAt(i);
                return av;
            }
        }

    return NULL;
}

// private object GetData(int dataIndex) [instance] :32
uObject* Instantiator::GetData(int dataIndex)
{
    uArray* e = uAs<uArray*>(_items, ::TYPES[4/*object[]*/]);

    if (e != NULL)
        return uPtr(e)->Strong<uObject*>(dataIndex);

    uObject* a = uAs<uObject*>(_items, ::TYPES[30/*Fuse.IArray*/]);

    if (a != NULL)
        return ::g::Fuse::IArray::Item(uInterface(uPtr(a), ::TYPES[30/*Fuse.IArray*/]), dataIndex);

    return NULL;
}

// private int GetDataCount() [instance] :43
int Instantiator::GetDataCount()
{
    uArray* e = uAs<uArray*>(_items, ::TYPES[4/*object[]*/]);

    if (e != NULL)
        return uPtr(e)->Length();

    uObject* a = uAs<uObject*>(_items, ::TYPES[30/*Fuse.IArray*/]);

    if (a != NULL)
        return ::g::Fuse::IArray::Length(uInterface(uPtr(a), ::TYPES[30/*Fuse.IArray*/]));

    return 0;
}

// private object GetDataId(object data) [instance] :113
uObject* Instantiator::GetDataId(uObject* data)
{
    switch (Identity())
    {
        case 0:
            return NULL;
        case 1:
            return GetDataKey(data, IdentityKey());
        case 2:
            return data;
    }

    return NULL;
}

// private object GetDataKey(object data, string key) [instance] :96
uObject* Instantiator::GetDataKey(uObject* data, uString* key)
{
    uObject* so = uAs<uObject*>(data, ::TYPES[46/*Fuse.IObject*/]);

    if ((so != NULL) && ::g::Uno::String::op_Inequality(key, NULL))
    {
        if (::g::Fuse::IObject::ContainsKey(uInterface(uPtr(so), ::TYPES[46/*Fuse.IObject*/]), key))
            return ::g::Fuse::IObject::Item(uInterface(uPtr(so), ::TYPES[46/*Fuse.IObject*/]), key);
    }

    return NULL;
}

// private Fuse.Reactive.Instantiator.TemplateMatch GetDataTemplate(object data) [instance] :121
Instantiator__TemplateMatch Instantiator::GetDataTemplate(uObject* data)
{
    Instantiator__TemplateMatch collection2;
    Instantiator__TemplateMatch collection3;
    ::g::Uno::UX::Template* ret15;
    ::g::Uno::UX::Template* useTemplate = NULL;
    ::g::Uno::UX::Template* defaultTemplate = NULL;

    if ((_templateSource != NULL) && ::g::Uno::String::op_Inequality(TemplateKey(), NULL))
    {
        ::g::Uno::UX::Template* t = ::g::Fuse::ITemplateSource::FindTemplate(uInterface(uPtr(_templateSource), ::g::Fuse::ITemplateSource_typeof()), TemplateKey());

        if (t != NULL)
            useTemplate = t;
    }

    if (useTemplate == NULL)
    {
        uString* key = uAs<uString*>(GetDataKey(data, MatchKey()), ::TYPES[24/*string*/]);

        for (int i = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL))) - 1; i >= 0; --i)
        {
            ::g::Uno::UX::Template* f = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), uCRef<int>(i), &ret15), ret15);

            if (uPtr(f)->IsDefault())
                defaultTemplate = f;

            if (::g::Uno::String::op_Inequality(key, NULL) && ::g::Uno::String::op_Equality(uPtr(f)->Key(), key))
                useTemplate = f;
        }
    }

    if (useTemplate == NULL)
    {
        if (::g::Uno::String::op_Inequality(MatchKey(), NULL) || (defaultTemplate != NULL))
            useTemplate = defaultTemplate;
        else
            return (collection2 = uDefault<Instantiator__TemplateMatch>(), collection2.All = true, collection2.Template = NULL, collection2);
    }

    collection3 = uDefault<Instantiator__TemplateMatch>();
    collection3.All = false;
    collection3.Template = useTemplate;
    return collection3;
}

// private Fuse.Node GetLastNodeFromIndex(int windowIndex) [instance] :13
::g::Fuse::Node* Instantiator::GetLastNodeFromIndex(int windowIndex)
{
    ::g::Fuse::Node* ret16;

    if (windowIndex >= uPtr(_windowItems)->Count())
        windowIndex = uPtr(_windowItems)->Count() - 1;

    while (windowIndex >= 0)
    {
        ::g::Uno::Collections::List* lastList = uPtr((Instantiator__WindowItem*)uPtr(_windowItems)->Item(windowIndex))->Nodes;

        if ((lastList != NULL) && (uPtr(lastList)->Count() != 0))
            return uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(lastList), uCRef<int>(uPtr(lastList)->Count() - 1), &ret16), ret16))->GetLastNodeInGroup();

        windowIndex--;
    }

    return this;
}

// internal bool get_HasLimit() [instance] :297
bool Instantiator::HasLimit()
{
    return _hasLimit;
}

// public Fuse.Reactive.InstanceIdentity get_Identity() [instance] :121
int Instantiator::Identity()
{
    return _identity;
}

// public void set_Identity(Fuse.Reactive.InstanceIdentity value) [instance] :122
void Instantiator::Identity(int value)
{
    _identity = value;
}

// public string get_IdentityKey() [instance] :140
uString* Instantiator::IdentityKey()
{
    return _identityKey;
}

// public void set_IdentityKey(string value) [instance] :141
void Instantiator::IdentityKey(uString* value)
{
    _identityKey = value;
    Identity(1);
}

// private void InsertNew(int dataIndex) [instance] :33
void Instantiator::InsertNew(int dataIndex)
{
    if ((dataIndex < Offset()) || (HasLimit() && ((dataIndex - Offset()) >= Limit())))
        return;

    int windowIndex = DataToWindowIndex(dataIndex);

    if ((windowIndex > uPtr(_windowItems)->Count()) || (windowIndex < 0))
        return;

    uObject* data = GetData(dataIndex);
    InsertNewWindowItem(windowIndex, data);
}

// private void InsertNewWindowItem(int windowIndex, object data) [instance] :48
void Instantiator::InsertNewWindowItem(int windowIndex, uObject* data)
{
    Instantiator__WindowItem* collection1;
    collection1 = Instantiator__WindowItem::New1();
    uPtr(collection1)->Data = data;
    Instantiator__WindowItem* wi = collection1;
    uPtr(_windowItems)->Insert(windowIndex, wi);

    if (Defer() == 0)
        CompleteWindowItem(wi, windowIndex);
    else if (!_pendingNew)
    {
        if (Defer() == 2)
            ::g::Fuse::DeferredManager::AddPending((uObject*)this, ::g::Uno::Float2__New2(DeferredPriority(), (float)NodeDepth()));
        else
            ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)Instantiator__CompleteWindowItemsAction_fn, this), -1, 2);

        _pendingNew = true;
    }

    OnUpdatedWindowItems();
}

// private bool get_IsListeningItems() [instance] :103
bool Instantiator::IsListeningItems()
{
    return _isListeningItems;
}

// internal int get_Limit() [instance] :278
int Instantiator::Limit()
{
    return _limit;
}

// internal void set_Limit(int value) [instance] :279
void Instantiator::Limit(int value)
{
    if (_hasLimit && (_limit == value))
        return;

    if (value < 0)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("Limit cannot be less than 0"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/Instance.API.uno"), 286, uString::Const("set_Limit"), NULL);
        value = 0;
    }

    _hasLimit = true;
    _limit = value;

    if (IsRootingCompleted())
        TrimAndPad();
}

// public string get_MatchKey() [instance] :371
uString* Instantiator::MatchKey()
{
    return _matchKey;
}

// public void set_MatchKey(string value) [instance] :372
void Instantiator::MatchKey(uString* value)
{
    if (::g::Uno::String::op_Inequality(_matchKey, value))
    {
        _matchKey = value;
        OnItemsChanged();
    }
}

// internal int get_Offset() [instance] :230
int Instantiator::Offset()
{
    return _offset;
}

// internal void set_Offset(int value) [instance] :231
void Instantiator::Offset(int value)
{
    if (_offset == value)
        return;

    if (value < 0)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("Offset cannot be less than 0"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/Instance.API.uno"), 238, uString::Const("set_Offset"), NULL);
        value = 0;
    }

    if (!IsRootingCompleted())
    {
        _offset = value;
        return;
    }

    int dataCount = GetDataCount();

    while (_offset < value)
    {
        if (_offset < dataCount)
            RemoveAt(_offset);

        _offset++;
        int end = (_offset + Limit()) - 1;

        if (HasLimit() && (end < dataCount))
            InsertNew(end);
    }

    while (_offset > value)
    {
        int end1 = (_offset + Limit()) - 1;

        if (HasLimit() && (end1 < dataCount))
            RemoveAt((_offset + Limit()) - 1);

        _offset--;

        if (_offset < dataCount)
            InsertNew(_offset);
    }
}

// protected internal void OnItemsChanged() [instance] :323
void Instantiator::OnItemsChanged()
{
    if (!IsRootingStarted())
        return;

    DisposeItemsSubscription();
    RemoveAll();
    uObject* obs = uAs<uObject*>(_items, ::TYPES[32/*Fuse.Reactive.IObservable*/]);

    if (obs != NULL)
    {
        StartListeningItems();
        _itemsSubscription = ::g::Fuse::Reactive::IObservable::Subscribe(uInterface(uPtr(obs), ::TYPES[32/*Fuse.Reactive.IObservable*/]), (uObject*)this);
    }
    else
        Repopulate();
}

// private void OnTemplatesChanged(Uno.UX.Template factory) [instance] :76
void Instantiator::OnTemplatesChanged(::g::Uno::UX::Template* factory)
{
    if (!IsRootingCompleted())
        return;

    Repopulate();
}

// private void OnUpdatedWindowItems() [instance] :509
void Instantiator::OnUpdatedWindowItems()
{
    if (::g::Uno::Delegate::op_Equality(UpdatedWindowItems1, NULL) || _pendingUpdateWindowItems)
        return;

    _pendingUpdateWindowItems = true;
    ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)Instantiator__PostUpdatedWindowItems_fn, this), -1, 2);
}

// private void PatchTo(Fuse.IArray values) [instance] :71
void Instantiator::PatchTo(uObject* values)
{
    ::g::Uno::Collections::List* ret17;
    ::g::Fuse::Reactive::Internal::PatchItem ret18;
    ::g::Uno::Collections::List* newIds = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[54/*Uno.Collections.List`1*/]->MakeType(uObject_typeof(), NULL));
    int limit = CalcOffsetLimitCountOf(::g::Fuse::IArray::Length(uInterface(uPtr(values), ::TYPES[30/*Fuse.IArray*/])));

    for (int i = 0; i < limit; ++i)
        ::g::Uno::Collections::List__Add_fn(uPtr(newIds), GetDataId(::g::Fuse::IArray::Item(uInterface(uPtr(values), ::TYPES[30/*Fuse.IArray*/]), i + Offset())));

    ::g::Uno::Collections::List* curIds = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[54/*Uno.Collections.List`1*/]->MakeType(uObject_typeof(), NULL));

    for (int i1 = 0; i1 < uPtr(_windowItems)->Count(); ++i1)
        ::g::Uno::Collections::List__Add_fn(uPtr(curIds), uPtr((Instantiator__WindowItem*)uPtr(_windowItems)->Item(i1))->Id);

    ::g::Uno::Collections::List* ops = (::g::Fuse::Reactive::Internal::PatchList__Patch_fn(::g::Fuse::Reactive::Internal::PatchList_typeof()->MakeMethod(0/*Patch<object>*/, uObject_typeof(), NULL), (uObject*)curIds, (uObject*)newIds, uCRef<int>(1), NULL, &ret17), ret17);

    for (int i2 = 0; i2 < uPtr(ops)->Count(); ++i2)
    {
        ::g::Fuse::Reactive::Internal::PatchItem op = (::g::Uno::Collections::List__get_Item_fn(uPtr(ops), uCRef<int>(i2), &ret18), ret18);

        switch (op.Op)
        {
            case 0:
            {
                RemoveAt(op.A + Offset());
                break;
            }
            case 1:
            {
                InsertNewWindowItem(DataToWindowIndex(op.A + Offset()), ::g::Fuse::IArray::Item(uInterface(uPtr(values), ::TYPES[30/*Fuse.IArray*/]), op.Data));
                break;
            }
            case 2:
            {
                if (!TryUpdateAt(op.A + Offset(), ::g::Fuse::IArray::Item(uInterface(uPtr(values), ::TYPES[30/*Fuse.IArray*/]), op.Data)))
                {
                    RemoveAt(op.A + Offset());
                    InsertNewWindowItem(DataToWindowIndex(op.A + Offset()), ::g::Fuse::IArray::Item(uInterface(uPtr(values), ::TYPES[30/*Fuse.IArray*/]), op.Data));
                }

                break;
            }
        }
    }
}

// private void PostUpdatedWindowItems() [instance] :519
void Instantiator::PostUpdatedWindowItems()
{
    if (::g::Uno::Delegate::op_Inequality(UpdatedWindowItems1, NULL))
        uPtr(UpdatedWindowItems1)->InvokeVoid();

    _pendingUpdateWindowItems = false;
}

// private void RemoveAll() [instance] :426
void Instantiator::RemoveAll()
{
    if (uPtr(_windowItems)->Count() == 0)
        return;

    for (int i = 0; i < uPtr(_windowItems)->Count(); ++i)
    {
        Instantiator__WindowItem* wi = (Instantiator__WindowItem*)uPtr(_windowItems)->Item(i);
        RemoveWindowItem(wi);
    }

    uPtr(_windowItems)->Clear();
    OnUpdatedWindowItems();
}

// private void RemoveAt(int dataIndex) [instance] :402
void Instantiator::RemoveAt(int dataIndex)
{
    int windowIndex = DataToWindowIndex(dataIndex);

    if ((windowIndex < 0) || (windowIndex >= uPtr(_windowItems)->Count()))
        return;

    RemoveWindowItem((Instantiator__WindowItem*)uPtr(_windowItems)->Item(windowIndex));
    uPtr(_windowItems)->RemoveAt(windowIndex);
    SetValid();
    OnUpdatedWindowItems();
}

// private void RemoveFromParent(Fuse.Node n) [instance] :145
void Instantiator::RemoveFromParent(::g::Fuse::Node* n)
{
    if (::g::Uno::Delegate::op_Equality(_completedRemove, NULL))
        _completedRemove = uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::TYPES[40/*Fuse.Node*/], NULL), (void*)Instantiator__CompletedRemove_fn, this);

    uPtr(Parent())->BeginRemoveChild(n, _completedRemove);
}

// private void RemoveLastActive() [instance] :415
void Instantiator::RemoveLastActive()
{
    RemoveAt((Offset() + uPtr(_windowItems)->Count()) - 1);
}

// private void RemovePendingAvailableItems() [instance] :340
void Instantiator::RemovePendingAvailableItems()
{
    ::g::Fuse::Node* ret19;
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uObject*>, uStrong<Instantiator__WindowItem*> > ret20;
    ::g::Fuse::Node* ret21;

    if (_availableItems != NULL)
    {
        for (int i = 0; i < uPtr(_availableItems)->Count(); ++i)
        {
            Instantiator__WindowItem* av = (Instantiator__WindowItem*)uPtr(_availableItems)->Item(i);

            if (uPtr(av)->Nodes == NULL)
                continue;

            for (int n = 0; n < uPtr(uPtr(av)->Nodes)->Count(); ++n)
                RemoveFromParent((::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(av)->Nodes), uCRef<int>(n), &ret19), ret19));

            uPtr(av)->Unlink();
        }

        uPtr(_availableItems)->Clear();
    }

    if (_availableItemsById != NULL)
    {
        ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uObject*>, uStrong<Instantiator__WindowItem*> > enum4 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_availableItemsById), &ret20), ret20);

        {
            const auto __finally_fun = [&]()
            {
                enum4.Dispose(::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(uObject_typeof(), Instantiator__WindowItem_typeof(), NULL));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);

            while (enum4.MoveNext(::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(uObject_typeof(), Instantiator__WindowItem_typeof(), NULL)))
            {
                ::g::Uno::Collections::KeyValuePair<uStrong<uObject*>, uStrong<Instantiator__WindowItem*> > kvp = enum4.Current(::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(uObject_typeof(), Instantiator__WindowItem_typeof(), NULL));

                if (uPtr(kvp.Value(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(uObject_typeof(), Instantiator__WindowItem_typeof(), NULL)))->Nodes == NULL)
                    continue;

                for (int n1 = 0; n1 < uPtr(uPtr(kvp.Value(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(uObject_typeof(), Instantiator__WindowItem_typeof(), NULL)))->Nodes)->Count(); ++n1)
                    RemoveFromParent((::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(kvp.Value(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(uObject_typeof(), Instantiator__WindowItem_typeof(), NULL)))->Nodes), uCRef<int>(n1), &ret21), ret21));

                uPtr(kvp.Value(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(uObject_typeof(), Instantiator__WindowItem_typeof(), NULL)))->Unlink();
            }
        }

        uPtr(_availableItemsById)->Clear();
    }

    _pendingNew = false;
}

// private void RemovePendingAvailableItemsAction() [instance] :332
void Instantiator::RemovePendingAvailableItemsAction()
{
    if (!_pendingNew)
        RemovePendingAvailableItems();

    _pendingAvailableItems = false;
}

// private void RemoveWindowItem(Fuse.Reactive.Instantiator.WindowItem wi) [instance] :372
void Instantiator::RemoveWindowItem(Instantiator__WindowItem* wi)
{
    bool ret22;

    if ((uPtr(wi)->Nodes == NULL) || (uPtr(uPtr(wi)->Nodes)->Count() == 0))
        return;

    if (uPtr(wi)->Id != NULL)
    {
        if (_availableItemsById == NULL)
            _availableItemsById = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::g::Uno::Collections::Dictionary_typeof()->MakeType(uObject_typeof(), Instantiator__WindowItem_typeof(), NULL)));

        if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(_availableItemsById), uPtr(wi)->Id, &ret22), ret22))
            uPtr(wi)->Id = NULL;
        else
            ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(_availableItemsById), uPtr(wi)->Id, wi);
    }

    if (uPtr(wi)->Id == NULL)
    {
        if (_availableItems == NULL)
            _availableItems = ((::g::Fuse::Internal::ObjectList*)::g::Fuse::Internal::ObjectList::New1(::g::Fuse::Internal::ObjectList_typeof()->MakeType(Instantiator__WindowItem_typeof(), NULL), 0));

        uPtr(_availableItems)->Add(wi);
    }
}

// private void Repopulate() [instance] :439
void Instantiator::Repopulate()
{
    RemoveAll();
    uArray* e = uAs<uArray*>(_items, ::TYPES[4/*object[]*/]);

    if (e != NULL)

        for (int i = 0; i < uPtr(e)->Length(); i++)
            InsertNew(i);
    else
    {
        uObject* a = uAs<uObject*>(_items, ::TYPES[30/*Fuse.IArray*/]);

        if (a != NULL)

            for (int i1 = 0; i1 < ::g::Fuse::IArray::Length(uInterface(uPtr(a), ::TYPES[30/*Fuse.IArray*/])); i1++)
                InsertNew(i1);
    }

    CompleteActionGood();
}

// public Fuse.Reactive.InstanceReuse get_Reuse() [instance] :105
int Instantiator::Reuse()
{
    return _reuse;
}

// public void set_Reuse(Fuse.Reactive.InstanceReuse value) [instance] :106
void Instantiator::Reuse(int value)
{
    _reuse = value;
}

// private void SetFailed(string message) [instance] :137
void Instantiator::SetFailed(uString* message)
{
    if (Parent() != NULL)
        ::g::Fuse::Triggers::BusyTask::SetBusy(Parent(), &_busyTask, 16, message);
}

// private void SetValid() [instance] :131
void Instantiator::SetValid()
{
    if (Parent() != NULL)
        ::g::Fuse::Triggers::BusyTask::SetBusy(Parent(), &_busyTask, 0, ::STRINGS[19/*""*/]);
}

// private void StartListeningItems() [instance] :104
void Instantiator::StartListeningItems()
{
    _isListeningItems = true;
}

// public generated string get_TemplateKey() [instance] :224
uString* Instantiator::TemplateKey()
{
    return _TemplateKey;
}

// public generated void set_TemplateKey(string value) [instance] :224
void Instantiator::TemplateKey(uString* value)
{
    _TemplateKey = value;
}

// public Uno.Collections.IList<Uno.UX.Template> get_Templates() [instance] :65
uObject* Instantiator::Templates()
{
    if (_templates != NULL)
        return _templates;

    _rootTemplates = ((::g::Uno::Collections::RootableList*)::g::Uno::Collections::RootableList::New1(::g::Uno::Collections::RootableList_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)));

    if (IsRootingCompleted())
        uPtr(_rootTemplates)->Subscribe(uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL), (void*)Instantiator__OnTemplatesChanged_fn, this), uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL), (void*)Instantiator__OnTemplatesChanged_fn, this));

    _templates = (uObject*)_rootTemplates;
    return _templates;
}

// public Fuse.ITemplateSource get_TemplateSource() [instance] :199
uObject* Instantiator::TemplateSource()
{
    return _weakTemplateSource;
}

// public void set_TemplateSource(Fuse.ITemplateSource value) [instance] :200
void Instantiator::TemplateSource(uObject* value)
{
    _weakTemplateSource = value;

    if (IsRootingCompleted())
    {
        _templateSource = _weakTemplateSource;
        Repopulate();
    }
}

// private void TrimAndPad() [instance] :532
void Instantiator::TrimAndPad()
{
    if (HasLimit())

        for (int i = uPtr(_windowItems)->Count() - _limit; i > 0; --i)
            RemoveLastActive();

    int dataCount = GetDataCount();
    int add = HasLimit() ? ::g::Uno::Math::Min8(_limit - uPtr(_windowItems)->Count(), dataCount - (Offset() + uPtr(_windowItems)->Count())) : dataCount - (Offset() + uPtr(_windowItems)->Count());

    for (int i1 = 0; i1 < add; ++i1)
        Append();
}

// private bool TryUpdateAt(int dataIndex, object newData) [instance] :189
bool Instantiator::TryUpdateAt(int dataIndex, uObject* newData)
{
    if (Identity() == 0)
        return false;

    int windowIndex = DataToWindowIndex(dataIndex);

    if ((windowIndex < 0) || (windowIndex >= uPtr(_windowItems)->Count()))
        return false;

    Instantiator__WindowItem* wi = (Instantiator__WindowItem*)uPtr(_windowItems)->Item(windowIndex);
    uObject* newId = GetDataId(newData);

    if ((uPtr(wi)->Id == NULL) || !::g::Uno::Object::Equals1(uPtr(wi)->Id, newId))
        return false;

    Instantiator__TemplateMatch tpl = GetDataTemplate(newData);

    if (!uPtr(wi)->Template.Matches(tpl))
        return false;

    uObject* oldData = uPtr(wi)->CurrentData();
    wi->Data = newData;
    UpdateData(wi, oldData);
    return true;
}

// private void UpdateData(Fuse.Reactive.Instantiator.WindowItem item, object oldData) [instance] :72
void Instantiator::UpdateData(Instantiator__WindowItem* item, uObject* oldData)
{
    ::g::Fuse::Node* ret23;

    if (uPtr(item)->DataLink != NULL)
    {
        uPtr(uPtr(item)->DataLink)->Dispose();
        item->DataLink = NULL;
    }

    uObject* obs = uAs<uObject*>(uPtr(item)->Data, ::TYPES[32/*Fuse.Reactive.IObservable*/]);

    if (obs != NULL)
        uPtr(item)->DataLink = Instantiator__ObservableLink::New1(obs, item);

    uObject* nextData = item->CurrentData();

    for (int i = 0; i < uPtr(item->Nodes)->Count(); ++i)
    {
        ::g::Fuse::Node* n = (::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(item)->Nodes), uCRef<int>(i), &ret23), ret23);
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(_dataMap), n, item);
        uPtr(n)->OverrideContextParent = this;

        if (oldData != NULL)
            uPtr(n)->BroadcastDataChange(oldData, nextData);
    }
}

// internal generated void add_UpdatedWindowItems(Uno.Action value) [instance] :507
void Instantiator::add_UpdatedWindowItems(uDelegate* value)
{
    UpdatedWindowItems1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(UpdatedWindowItems1, value), ::TYPES[14/*Uno.Action*/]);
}

// internal generated void remove_UpdatedWindowItems(Uno.Action value) [instance] :507
void Instantiator::remove_UpdatedWindowItems(uDelegate* value)
{
    UpdatedWindowItems1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(UpdatedWindowItems1, value), ::TYPES[14/*Uno.Action*/]);
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/InstantiatorFunction.uno
// -----------------------------------------------------------------------------------

// public abstract class InstantiatorFunction :12
// {
// static generated InstantiatorFunction() :12
static void InstantiatorFunction__cctor__fn(uType* __type)
{
    ::TYPES[33/*Uno.UX.Selector*/]->Init();
    InstantiatorFunction::DataIndexName_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("index"));
    InstantiatorFunction::OffsetIndexName_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("offsetIndex"));
}

static void InstantiatorFunction_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Uno::UX::Selector_typeof());
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(1,
        ::g::Uno::UX::Selector_typeof(), offsetof(InstantiatorFunction, _item), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&InstantiatorFunction::DataIndexName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&InstantiatorFunction::OffsetIndexName_, uFieldFlagsStatic);
}

::g::Fuse::Reactive::Expression_type* InstantiatorFunction_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::VarArgFunction_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(InstantiatorFunction);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.InstantiatorFunction", options);
    type->fp_build_ = InstantiatorFunction_build;
    type->fp_cctor_ = InstantiatorFunction__cctor__fn;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))InstantiatorFunction__Subscribe_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))InstantiatorFunction__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))InstantiatorFunction__Subscribe_fn;
    return type;
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :30
void InstantiatorFunction__Subscribe_fn(InstantiatorFunction* __this, uObject* context, uObject* listener, uObject** __retval)
{
    ::g::Fuse::Reactive::Expression* ret1;

    if (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Arguments()), ::TYPES[59/*Uno.Collections.ICollection<Fuse.Reactive.Expression>*/])) > 1)
    {
        ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(uString::Const("too many parameters for "), ::g::Uno::UX::Selector__op_Implicit1(__this->_item)), __this, ::STRINGS[50/*"/usr/local/...*/], 34, uString::Const("Subscribe"), NULL);
        return *__retval = NULL, void();
    }

    ::g::Fuse::Reactive::Expression* node = (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Arguments()), ::TYPES[59/*Uno.Collections.ICollection<Fuse.Reactive.Expression>*/])) > 0) ? (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(__this->Arguments()), ::TYPES[60/*Uno.Collections.IList<Fuse.Reactive.Expression>*/]), uCRef<int>(0), &ret1), ret1) : NULL;
    return *__retval = (uObject*)InstantiatorFunction__InstantiatorSubscription::New1(__this, __this->_item, listener, context, (uObject*)node), void();
}

// public override sealed string ToString() :25
void InstantiatorFunction__ToString_fn(InstantiatorFunction* __this, uString** __retval)
{
    return *__retval = __this->FormatString(::g::Uno::UX::Selector__op_Implicit1(__this->_item)), void();
}

::g::Uno::UX::Selector InstantiatorFunction::DataIndexName_;
::g::Uno::UX::Selector InstantiatorFunction::OffsetIndexName_;
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/InstantiatorFunction.uno
// -----------------------------------------------------------------------------------

// private sealed class InstantiatorFunction.InstantiatorSubscription :42
// {
static void InstantiatorFunction__InstantiatorSubscription_build(uType* type)
{
    ::STRINGS[49] = uString::Const("invalid search node for InstantiatorFunction");
    ::STRINGS[50] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/InstantiatorFunction.uno");
    ::STRINGS[51] = uString::Const("OnNewNode");
    ::STRINGS[52] = uString::Const("Could not find an Instantiator");
    ::STRINGS[53] = uString::Const("Unable to resolve Instantiator node");
    ::TYPES[37] = ::g::Fuse::Reactive::IExpression_typeof();
    ::TYPES[14] = ::g::Uno::Action_typeof();
    ::TYPES[3] = ::g::Uno::IDisposable_typeof();
    ::TYPES[40] = ::g::Fuse::Node_typeof();
    ::TYPES[29] = ::g::Fuse::Reactive::IContext_typeof();
    ::TYPES[44] = ::TYPES[40/*Fuse.Node*/]->MakeMethod(0/*FindBehavior<Fuse.Reactive.Instantiator>*/, ::g::Fuse::Reactive::Instantiator_typeof(), NULL);
    ::TYPES[28] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Fuse::Reactive::InstantiatorFunction_typeof(),
        ::g::Uno::UX::Selector_typeof());
    type->SetInterfaces(
        ::TYPES[3/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface0),
        ::TYPES[28/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface1));
    type->SetFields(2,
        ::TYPES[29/*Fuse.Reactive.IContext*/], offsetof(InstantiatorFunction__InstantiatorSubscription, _context), 0,
        ::g::Fuse::Reactive::InstantiatorFunction_typeof(), offsetof(InstantiatorFunction__InstantiatorSubscription, _expr), 0,
        ::TYPES[40/*Fuse.Node*/], offsetof(InstantiatorFunction__InstantiatorSubscription, _instance), 0,
        ::g::Fuse::Reactive::Instantiator_typeof(), offsetof(InstantiatorFunction__InstantiatorSubscription, _instantiator), 0,
        ::g::Uno::UX::Selector_typeof(), offsetof(InstantiatorFunction__InstantiatorSubscription, _item), 0,
        ::TYPES[28/*Fuse.Reactive.IListener*/], offsetof(InstantiatorFunction__InstantiatorSubscription, _listener), 0,
        ::TYPES[37/*Fuse.Reactive.IExpression*/], offsetof(InstantiatorFunction__InstantiatorSubscription, _node), 0,
        ::TYPES[3/*Uno.IDisposable*/], offsetof(InstantiatorFunction__InstantiatorSubscription, _nodeSub), 0);
}

::g::Fuse::Reactive::InnerListener_type* InstantiatorFunction__InstantiatorSubscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InnerListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InnerListener_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 2;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(InstantiatorFunction__InstantiatorSubscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InnerListener_type);
    type = (::g::Fuse::Reactive::InnerListener_type*)uClassType::New("Fuse.Reactive.InstantiatorFunction.InstantiatorSubscription", options);
    type->fp_build_ = InstantiatorFunction__InstantiatorSubscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))InstantiatorFunction__InstantiatorSubscription__Dispose_fn;
    type->fp_OnNewData = (void(*)(::g::Fuse::Reactive::InnerListener*, uObject*, uObject*))InstantiatorFunction__InstantiatorSubscription__OnNewData_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))InstantiatorFunction__InstantiatorSubscription__Dispose_fn;
    return type;
}

// public InstantiatorSubscription(Fuse.Reactive.InstantiatorFunction expr, Uno.UX.Selector item, Fuse.Reactive.IListener listener, Fuse.Reactive.IContext context, Fuse.Reactive.IExpression node) :57
void InstantiatorFunction__InstantiatorSubscription__ctor_1_fn(InstantiatorFunction__InstantiatorSubscription* __this, ::g::Fuse::Reactive::InstantiatorFunction* expr, ::g::Uno::UX::Selector* item, uObject* listener, uObject* context, uObject* node)
{
    __this->ctor_1(expr, *item, listener, context, node);
}

// public override sealed void Dispose() :122
void InstantiatorFunction__InstantiatorSubscription__Dispose_fn(InstantiatorFunction__InstantiatorSubscription* __this)
{
    ::g::Fuse::Reactive::InnerListener__Dispose_fn(__this);
    __this->_expr = NULL;
    __this->_listener = NULL;

    if (__this->_instantiator != NULL)
        uPtr(__this->_instantiator)->remove_UpdatedWindowItems(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)InstantiatorFunction__InstantiatorSubscription__OnUpdatedWindowItems_fn, __this));

    __this->_instantiator = NULL;

    if (__this->_nodeSub != NULL)
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_nodeSub), ::TYPES[3/*Uno.IDisposable*/]));

    __this->_nodeSub = NULL;
    __this->_node = NULL;
}

// public InstantiatorSubscription New(Fuse.Reactive.InstantiatorFunction expr, Uno.UX.Selector item, Fuse.Reactive.IListener listener, Fuse.Reactive.IContext context, Fuse.Reactive.IExpression node) :57
void InstantiatorFunction__InstantiatorSubscription__New1_fn(::g::Fuse::Reactive::InstantiatorFunction* expr, ::g::Uno::UX::Selector* item, uObject* listener, uObject* context, uObject* node, InstantiatorFunction__InstantiatorSubscription** __retval)
{
    *__retval = InstantiatorFunction__InstantiatorSubscription::New1(expr, *item, listener, context, node);
}

// protected override sealed void OnNewData(Fuse.Reactive.IExpression source, object value) :74
void InstantiatorFunction__InstantiatorSubscription__OnNewData_fn(InstantiatorFunction__InstantiatorSubscription* __this, uObject* source, uObject* value)
{
    if (source == __this->_node)
        __this->OnNewNode(value);
}

// private void OnNewNode(object obj) :80
void InstantiatorFunction__InstantiatorSubscription__OnNewNode_fn(InstantiatorFunction__InstantiatorSubscription* __this, uObject* obj)
{
    __this->OnNewNode(obj);
}

// private void OnUpdatedWindowItems() :148
void InstantiatorFunction__InstantiatorSubscription__OnUpdatedWindowItems_fn(InstantiatorFunction__InstantiatorSubscription* __this)
{
    __this->OnUpdatedWindowItems();
}

// private void PushValue() :136
void InstantiatorFunction__InstantiatorSubscription__PushValue_fn(InstantiatorFunction__InstantiatorSubscription* __this)
{
    __this->PushValue();
}

// public InstantiatorSubscription(Fuse.Reactive.InstantiatorFunction expr, Uno.UX.Selector item, Fuse.Reactive.IListener listener, Fuse.Reactive.IContext context, Fuse.Reactive.IExpression node) [instance] :57
void InstantiatorFunction__InstantiatorSubscription::ctor_1(::g::Fuse::Reactive::InstantiatorFunction* expr, ::g::Uno::UX::Selector item, uObject* listener, uObject* context, uObject* node)
{
    ctor_();
    _node = node;
    _expr = expr;
    _item = item;
    _listener = listener;
    _context = context;

    if (_node == NULL)
        OnNewNode(NULL);
    else
        _nodeSub = ::g::Fuse::Reactive::IExpression::Subscribe(uInterface(uPtr(_node), ::TYPES[37/*Fuse.Reactive.IExpression*/]), context, (uObject*)this);
}

// private void OnNewNode(object obj) [instance] :80
void InstantiatorFunction__InstantiatorSubscription::OnNewNode(uObject* obj)
{
    ::g::Fuse::Node* ind1;

    if (_instantiator != NULL)
    {
        uPtr(_instantiator)->remove_UpdatedWindowItems(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)InstantiatorFunction__InstantiatorSubscription__OnUpdatedWindowItems_fn, this));
        _instantiator = NULL;
        _instance = NULL;
    }

    ind1 = uAs< ::g::Fuse::Node*>(obj, ::TYPES[40/*Fuse.Node*/]);
    ::g::Fuse::Node* searchNode = (ind1 != NULL) ? ind1 : (::g::Fuse::Node*)::g::Fuse::Reactive::IContext::Node(uInterface(uPtr(_context), ::TYPES[29/*Fuse.Reactive.IContext*/]));

    if (searchNode == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[49/*"invalid sea...*/], this, ::STRINGS[50/*"/usr/local/...*/], 92, ::STRINGS[51/*"OnNewNode"*/], NULL);
        return;
    }

    _instantiator = ((::g::Fuse::Reactive::Instantiator*)uPtr(searchNode)->FindBehavior(::TYPES[44/*Fuse.Node.FindBehavior<Fuse.Reactive.Instantiator>*/]));

    if (_instantiator == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[52/*"Could not f...*/], this, ::STRINGS[50/*"/usr/local/...*/], 99, ::STRINGS[51/*"OnNewNode"*/], NULL);
        return;
    }

    ::g::Fuse::Node* p = ::g::Fuse::Reactive::IContext::Node(uInterface(uPtr(_context), ::TYPES[29/*Fuse.Reactive.IContext*/]));

    while ((p != NULL) && (uPtr(p)->ContextParent() != _instantiator))
        p = uPtr(p)->ContextParent();

    if (p == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[53/*"Unable to r...*/], this, ::STRINGS[50/*"/usr/local/...*/], 110, ::STRINGS[51/*"OnNewNode"*/]);
        return;
    }

    if (_instantiator != NULL)
    {
        _instance = p;
        uPtr(_instantiator)->add_UpdatedWindowItems(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)InstantiatorFunction__InstantiatorSubscription__OnUpdatedWindowItems_fn, this));
        PushValue();
    }
}

// private void OnUpdatedWindowItems() [instance] :148
void InstantiatorFunction__InstantiatorSubscription::OnUpdatedWindowItems()
{
    PushValue();
}

// private void PushValue() [instance] :136
void InstantiatorFunction__InstantiatorSubscription::PushValue()
{
    int q = -1;

    if (::g::Uno::UX::Selector__op_Equality(_item, ::g::Fuse::Reactive::InstantiatorFunction::DataIndexName_))
        q = uPtr(_instantiator)->DataIndexOfChild(_instance);
    else if (::g::Uno::UX::Selector__op_Equality(_item, ::g::Fuse::Reactive::InstantiatorFunction::OffsetIndexName_))
        q = uPtr(_instantiator)->DataIndexOfChild(_instance) - uPtr(_instantiator)->Offset();

    if (q != -1)
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[28/*Fuse.Reactive.IListener*/]), (uObject*)_expr, uBox<int>(::TYPES[20/*int*/], q));
}

// public InstantiatorSubscription New(Fuse.Reactive.InstantiatorFunction expr, Uno.UX.Selector item, Fuse.Reactive.IListener listener, Fuse.Reactive.IContext context, Fuse.Reactive.IExpression node) [static] :57
InstantiatorFunction__InstantiatorSubscription* InstantiatorFunction__InstantiatorSubscription::New1(::g::Fuse::Reactive::InstantiatorFunction* expr, ::g::Uno::UX::Selector item, uObject* listener, uObject* context, uObject* node)
{
    InstantiatorFunction__InstantiatorSubscription* obj2 = (InstantiatorFunction__InstantiatorSubscription*)uNew(InstantiatorFunction__InstantiatorSubscription_typeof());
    obj2->ctor_1(expr, item, listener, context, node);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.3.1/IObservable.uno
// -----------------------------------------------------------------

// internal abstract interface IObservable :8
// {
uInterfaceType* IObservable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IObservable", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.3.1/IObservable.uno
// -----------------------------------------------------------------

// internal abstract interface IObserver :20
// {
uInterfaceType* IObserver_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IObserver", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.3.1/IObservable.uno
// -----------------------------------------------------------------

// internal abstract interface ISubscription :13
// {
uInterfaceType* ISubscription_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.ISubscription", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.3.1/ValueObserver.uno
// -------------------------------------------------------------------

// public abstract interface ValueForwarder.IValueListener :79
// {
uInterfaceType* ValueForwarder__IValueListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.ValueForwarder.IValueListener", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.3.1/IExpression.uno
// -----------------------------------------------------------------

// public abstract interface IWriteable :30
// {
uInterfaceType* IWriteable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IWriteable", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/JavaScript.Dependencies.uno
// ----------------------------------------------------------------------------------------

// public partial sealed class JavaScript :11
// {
static void JavaScript_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(JavaScript_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(JavaScript_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(JavaScript_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(JavaScript_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(JavaScript_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(JavaScript_type, interface5),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(JavaScript_type, interface6),
        ::g::Fuse::Reactive::ValueForwarder__IValueListener_typeof(), offsetof(JavaScript_type, interface7),
        ::g::Fuse::Node__ISiblingDataProvider_typeof(), offsetof(JavaScript_type, interface8),
        ::g::Fuse::Reactive::IContext_typeof(), offsetof(JavaScript_type, interface9));
    type->SetFields(15,
        uObject_typeof(), offsetof(JavaScript, _currentDc), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(JavaScript__Dependency_typeof(), NULL), offsetof(JavaScript, _dependencies), 0,
        ::g::Fuse::Reactive::ModuleInstance_typeof(), offsetof(JavaScript, _moduleInstance), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(JavaScript, _nameTable), 0,
        ::g::Fuse::Reactive::RootableScriptModule_typeof(), offsetof(JavaScript, _scriptModule), 0,
        uObject_typeof(), offsetof(JavaScript, _siblingData), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(JavaScript, _sub), 0,
        ::g::Uno::Int_typeof(), (uintptr_t)&JavaScript::_javaScriptCounter_, uFieldFlagsStatic,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), (uintptr_t)&JavaScript::_worker_, uFieldFlagsStatic);
}

JavaScript_type* JavaScript_typeof()
{
    static uSStrong<JavaScript_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 24;
    options.InterfaceCount = 10;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(JavaScript);
    options.TypeSize = sizeof(JavaScript_type);
    type = (JavaScript_type*)uClassType::New("Fuse.Reactive.JavaScript", options);
    type->fp_build_ = JavaScript_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))JavaScript__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))JavaScript__OnUnrooted_fn;
    type->interface9.fp_Subscribe = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))JavaScript__FuseReactiveIContextSubscribe_fn;
    type->interface9.fp_SubscribeResource = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))JavaScript__FuseReactiveIContextSubscribeResource_fn;
    type->interface6.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))JavaScript__FuseScriptingIModuleProviderGetModule_fn;
    type->interface7.fp_NewValue = (void(*)(uObject*, uObject*))JavaScript__FuseReactiveValueForwarderIValueListenerNewValue_fn;
    type->interface9.fp_get_Node = (void(*)(uObject*, ::g::Fuse::Node**))JavaScript__FuseReactiveIContextget_Node_fn;
    type->interface8.fp_get_Data = (void(*)(uObject*, uObject**))JavaScript__FuseNodeISiblingDataProviderget_Data_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public JavaScript(Uno.UX.NameTable nameTable) :32
void JavaScript__ctor_3_fn(JavaScript* __this, ::g::Uno::UX::NameTable* nameTable)
{
    __this->ctor_3(nameTable);
}

// public Uno.Collections.IList<Fuse.Reactive.JavaScript.Dependency> get_Dependencies() :84
void JavaScript__get_Dependencies_fn(JavaScript* __this, uObject** __retval)
{
    *__retval = __this->Dependencies();
}

// internal void DispatchEvaluate() :125
void JavaScript__DispatchEvaluate_fn(JavaScript* __this)
{
    __this->DispatchEvaluate();
}

// private void DispatchEvaluateIfDependenciesReady() :109
void JavaScript__DispatchEvaluateIfDependenciesReady_fn(JavaScript* __this)
{
    __this->DispatchEvaluateIfDependenciesReady();
}

// private void DisposeDependencySubscriptions() :102
void JavaScript__DisposeDependencySubscriptions_fn(JavaScript* __this)
{
    __this->DisposeDependencySubscriptions();
}

// private void DisposeModuleInstance() :132
void JavaScript__DisposeModuleInstance_fn(JavaScript* __this)
{
    __this->DisposeModuleInstance();
}

// private void DisposeSubscription() :124
void JavaScript__DisposeSubscription_fn(JavaScript* __this)
{
    __this->DisposeSubscription();
}

// public Uno.UX.FileSource get_File() :158
void JavaScript__get_File_fn(JavaScript* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :159
void JavaScript__set_File_fn(JavaScript* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public string get_FileName() :166
void JavaScript__get_FileName_fn(JavaScript* __this, uString** __retval)
{
    *__retval = __this->FileName();
}

// public void set_FileName(string value) :167
void JavaScript__set_FileName_fn(JavaScript* __this, uString* value)
{
    __this->FileName(value);
}

// private object Fuse.Node.ISiblingDataProvider.get_Data() :121
void JavaScript__FuseNodeISiblingDataProviderget_Data_fn(JavaScript* __this, uObject** __retval)
{
    return *__retval = __this->_siblingData, void();
}

// private Fuse.Node Fuse.Reactive.IContext.get_Node() :146
void JavaScript__FuseReactiveIContextget_Node_fn(JavaScript* __this, ::g::Fuse::Node** __retval)
{
    return *__retval = __this, void();
}

// private Uno.IDisposable Fuse.Reactive.IContext.Subscribe(Fuse.Reactive.IExpression source, string key, Fuse.Reactive.IListener listener) :141
void JavaScript__FuseReactiveIContextSubscribe_fn(JavaScript* __this, uObject* source, uString* key, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)::g::Fuse::Reactive::DataSubscription::New1(source, __this, key, listener), void();
}

// private Uno.IDisposable Fuse.Reactive.IContext.SubscribeResource(Fuse.Reactive.IExpression source, string key, Fuse.Reactive.IListener listener) :148
void JavaScript__FuseReactiveIContextSubscribeResource_fn(JavaScript* __this, uObject* source, uString* key, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)::g::Fuse::Reactive::ResourceSubscription::New1(source, __this, key, listener, uObject_typeof()), void();
}

// private void Fuse.Reactive.ValueForwarder.IValueListener.NewValue(object data) :106
void JavaScript__FuseReactiveValueForwarderIValueListenerNewValue_fn(JavaScript* __this, uObject* data)
{
    __this->SetSiblingData(data);
}

// private Fuse.Scripting.Module Fuse.Scripting.IModuleProvider.GetModule() :76
void JavaScript__FuseScriptingIModuleProviderGetModule_fn(JavaScript* __this, ::g::Fuse::Scripting::Module** __retval)
{
    if (__this->IsRootingCompleted())
        U_THROW(::g::Uno::Exception::New2(uString::Const("Cannot require() a rooted module")));

    return *__retval = __this->_scriptModule, void();
}

// public int get_LineNumber() :151
void JavaScript__get_LineNumber_fn(JavaScript* __this, int* __retval)
{
    *__retval = __this->LineNumber();
}

// public void set_LineNumber(int value) :152
void JavaScript__set_LineNumber_fn(JavaScript* __this, int* value)
{
    __this->LineNumber(*value);
}

// public JavaScript New(Uno.UX.NameTable nameTable) :32
void JavaScript__New2_fn(::g::Uno::UX::NameTable* nameTable, JavaScript** __retval)
{
    *__retval = JavaScript::New2(nameTable);
}

// protected override sealed void OnRooted() :41
void JavaScript__OnRooted_fn(JavaScript* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    JavaScript::_javaScriptCounter_++;
    __this->SubscribeToDependenciesAndDispatchEvaluate();
}

// protected override sealed void OnUnrooted() :48
void JavaScript__OnUnrooted_fn(JavaScript* __this)
{
    ::g::Fuse::Scripting::NativeModule* ret5;
    __this->DisposeDependencySubscriptions();
    __this->SetDataContext(NULL);
    __this->DisposeModuleInstance();

    if ((--JavaScript::_javaScriptCounter_) <= 0)
    {
        ::g::Fuse::Scripting::AppInitialized::Reset();
        uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr((uObject*)::g::Uno::UX::Resource::GetGlobalsOfType(::g::Uno::UX::Resource_typeof()->MakeMethod(0/*GetGlobalsOfType<Fuse.Scripting.NativeModule>*/, ::g::Fuse::Scripting::NativeModule_typeof(), NULL))), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Scripting::NativeModule_typeof(), NULL)));

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[3/*Uno.IDisposable*/]));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);

            while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[8/*Uno.Collections.IEnumerator*/])))
            {
                ::g::Fuse::Scripting::NativeModule* nm = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Scripting::NativeModule_typeof(), NULL)), &ret5), ret5);
                uPtr(nm)->InternalReset();
            }
        }
    }

    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// internal Fuse.Reactive.RootableScriptModule get_ScriptModule() :29
void JavaScript__get_ScriptModule_fn(JavaScript* __this, ::g::Fuse::Reactive::RootableScriptModule** __retval)
{
    *__retval = __this->ScriptModule();
}

// internal void SetDataContext(object newDc) :85
void JavaScript__SetDataContext_fn(JavaScript* __this, uObject* newDc)
{
    __this->SetDataContext(newDc);
}

// private void SetSiblingData(object data) :112
void JavaScript__SetSiblingData_fn(JavaScript* __this, uObject* data)
{
    __this->SetSiblingData(data);
}

// private void SubscribeToDependenciesAndDispatchEvaluate() :93
void JavaScript__SubscribeToDependenciesAndDispatchEvaluate_fn(JavaScript* __this)
{
    __this->SubscribeToDependenciesAndDispatchEvaluate();
}

// internal static extern void UserScriptError(string msg, Fuse.Scripting.ScriptException ex, object obj, [string filePath], [int lineNumber], [string memberName]) :68
void JavaScript__UserScriptError_fn(uString* msg, ::g::Fuse::Scripting::ScriptException* ex, uObject* obj, uString* filePath, int* lineNumber, uString* memberName)
{
    JavaScript::UserScriptError(msg, ex, obj, filePath, *lineNumber, memberName);
}

// internal static Fuse.Reactive.ThreadWorker get_Worker() :25
void JavaScript__get_Worker_fn(::g::Fuse::Reactive::ThreadWorker** __retval)
{
    *__retval = JavaScript::Worker();
}

int JavaScript::_javaScriptCounter_;
uSStrong< ::g::Fuse::Reactive::ThreadWorker*> JavaScript::_worker_;

// public JavaScript(Uno.UX.NameTable nameTable) [instance] :32
void JavaScript::ctor_3(::g::Uno::UX::NameTable* nameTable)
{
    ctor_2();

    if (JavaScript::_worker_ == NULL)
        JavaScript::_worker_ = ::g::Fuse::Reactive::ThreadWorker::New1();

    _nameTable = nameTable;
    _scriptModule = ::g::Fuse::Reactive::RootableScriptModule::New2(JavaScript::_worker_, nameTable);
}

// public Uno.Collections.IList<Fuse.Reactive.JavaScript.Dependency> get_Dependencies() [instance] :84
uObject* JavaScript::Dependencies()
{
    if (_dependencies == NULL)
        _dependencies = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[54/*Uno.Collections.List`1*/]->MakeType(JavaScript__Dependency_typeof(), NULL)));

    return (uObject*)_dependencies;
}

// internal void DispatchEvaluate() [instance] :125
void JavaScript::DispatchEvaluate()
{
    if (!IsRootingStarted())
        return;

    DisposeModuleInstance();
    _moduleInstance = ::g::Fuse::Reactive::ModuleInstance::New2(JavaScript::Worker(), this);
}

// private void DispatchEvaluateIfDependenciesReady() [instance] :109
void JavaScript::DispatchEvaluateIfDependenciesReady()
{
    JavaScript__Dependency* ret3;

    if (_dependencies != NULL)

        for (int i = 0; i < uPtr(_dependencies)->Count(); i++)
            if (!uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_dependencies), uCRef<int>(i), &ret3), ret3))->HasValue)
                return;

    DispatchEvaluate();
}

// private void DisposeDependencySubscriptions() [instance] :102
void JavaScript::DisposeDependencySubscriptions()
{
    JavaScript__Dependency* ret4;

    if (_dependencies != NULL)

        for (int i = 0; i < uPtr(_dependencies)->Count(); i++)
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_dependencies), uCRef<int>(i), &ret4), ret4))->Unsubscribe();
}

// private void DisposeModuleInstance() [instance] :132
void JavaScript::DisposeModuleInstance()
{
    if (_moduleInstance != NULL)
    {
        uPtr(_moduleInstance)->Dispose();
        _moduleInstance = NULL;
    }
}

// private void DisposeSubscription() [instance] :124
void JavaScript::DisposeSubscription()
{
    if (_sub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_sub), ::TYPES[3/*Uno.IDisposable*/]));
        _sub = NULL;
    }
}

// public Uno.UX.FileSource get_File() [instance] :158
::g::Uno::UX::FileSource* JavaScript::File()
{
    return uPtr(_scriptModule)->File();
}

// public void set_File(Uno.UX.FileSource value) [instance] :159
void JavaScript::File(::g::Uno::UX::FileSource* value)
{
    uPtr(_scriptModule)->File(value);
}

// public string get_FileName() [instance] :166
uString* JavaScript::FileName()
{
    return uPtr(_scriptModule)->FileName();
}

// public void set_FileName(string value) [instance] :167
void JavaScript::FileName(uString* value)
{
    uPtr(_scriptModule)->FileName(value);
}

// public int get_LineNumber() [instance] :151
int JavaScript::LineNumber()
{
    return uPtr(_scriptModule)->LineNumberOffset();
}

// public void set_LineNumber(int value) [instance] :152
void JavaScript::LineNumber(int value)
{
    uPtr(_scriptModule)->LineNumberOffset(value);
}

// internal Fuse.Reactive.RootableScriptModule get_ScriptModule() [instance] :29
::g::Fuse::Reactive::RootableScriptModule* JavaScript::ScriptModule()
{
    return _scriptModule;
}

// internal void SetDataContext(object newDc) [instance] :85
void JavaScript::SetDataContext(uObject* newDc)
{
    DisposeSubscription();
    uObject* oldDc = _currentDc;
    _currentDc = newDc;
    uObject* obs = uAs<uObject*>(newDc, ::TYPES[32/*Fuse.Reactive.IObservable*/]);

    if (obs != NULL)
    {
        SetSiblingData(NULL);
        _sub = (uObject*)::g::Fuse::Reactive::ValueForwarder::New1(obs, (uObject*)this);
    }
    else
        SetSiblingData(newDc);

    if (oldDc != NULL)
        ::g::Fuse::Reactive::ValueMirror::Unsubscribe1(oldDc);
}

// private void SetSiblingData(object data) [instance] :112
void JavaScript::SetSiblingData(uObject* data)
{
    uObject* oldSiblingData = _siblingData;
    _siblingData = data;

    if (Parent() != NULL)
        uPtr(Parent())->BroadcastDataChange(oldSiblingData, data);
}

// private void SubscribeToDependenciesAndDispatchEvaluate() [instance] :93
void JavaScript::SubscribeToDependenciesAndDispatchEvaluate()
{
    JavaScript__Dependency* ret6;

    if (_dependencies != NULL)

        for (int i = 0; i < uPtr(_dependencies)->Count(); i++)
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_dependencies), uCRef<int>(i), &ret6), ret6))->Subscribe(this);

    DispatchEvaluateIfDependenciesReady();
}

// public JavaScript New(Uno.UX.NameTable nameTable) [static] :32
JavaScript* JavaScript::New2(::g::Uno::UX::NameTable* nameTable)
{
    JavaScript* obj2 = (JavaScript*)uNew(JavaScript_typeof());
    obj2->ctor_3(nameTable);
    return obj2;
}

// internal static extern void UserScriptError(string msg, Fuse.Scripting.ScriptException ex, object obj, [string filePath], [int lineNumber], [string memberName]) [static] :68
void JavaScript::UserScriptError(uString* msg, ::g::Fuse::Scripting::ScriptException* ex, uObject* obj, uString* filePath, int lineNumber, uString* memberName)
{
    msg = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(msg, uString::Const(" in ")), uPtr(ex)->FileName()), uString::Const(" line ")), uBox<int>(::TYPES[20/*int*/], uPtr(ex)->LineNumber()));
    ::g::Fuse::Diagnostics::UserError(msg, obj, filePath, lineNumber, memberName, ex);
}

// internal static Fuse.Reactive.ThreadWorker get_Worker() [static] :25
::g::Fuse::Reactive::ThreadWorker* JavaScript::Worker()
{
    return JavaScript::_worker_;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/ObservableProperty.uno
// -----------------------------------------------------------------------------------

// internal sealed class LazyObservableProperty :7
// {
static void LazyObservableProperty_build(uType* type)
{
    ::TYPES[33] = ::g::Uno::UX::Selector_typeof();
    ::TYPES[27] = ::g::Fuse::Scripting::Callback_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::ObservableProperty_type, interface0),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Reactive::ObservableProperty_type, interface1));
    type->SetFields(5);
}

::g::Fuse::Reactive::ObservableProperty_type* LazyObservableProperty_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ObservableProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ObservableProperty_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(LazyObservableProperty);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ObservableProperty_type);
    type = (::g::Fuse::Reactive::ObservableProperty_type*)uClassType::New("Fuse.Reactive.LazyObservableProperty", options);
    type->fp_build_ = LazyObservableProperty_build;
    type->interface0.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::ObservableProperty__FuseReactiveIObserverOnClear_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ObservableProperty__FuseReactiveIObserverOnNewAll_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::ObservableProperty__FuseReactiveIObserverOnNewAt_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ObservableProperty__FuseReactiveIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ObservableProperty__FuseReactiveIObserverOnAdd_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::ObservableProperty__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::ObservableProperty__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::ObservableProperty__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Reactive::ObservableProperty__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public LazyObservableProperty(Fuse.Reactive.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) :9
void LazyObservableProperty__ctor_1_fn(LazyObservableProperty* __this, ::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p)
{
    __this->ctor_1(w, obj, p);
}

// private object Get(object[] args) :14
void LazyObservableProperty__Get_fn(LazyObservableProperty* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Get(args);
}

// public LazyObservableProperty New(Fuse.Reactive.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) :9
void LazyObservableProperty__New2_fn(::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p, LazyObservableProperty** __retval)
{
    *__retval = LazyObservableProperty::New2(w, obj, p);
}

// public LazyObservableProperty(Fuse.Reactive.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) [instance] :9
void LazyObservableProperty::ctor_1(::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p)
{
    ctor_(w, obj, p);
    uPtr(uPtr(w)->Context())->ObjectDefineProperty(obj, uPtr(p)->Name().ToString(::TYPES[33/*Uno.UX.Selector*/]), uDelegate::New(::TYPES[27/*Fuse.Scripting.Callback*/], (void*)LazyObservableProperty__Get_fn, this), NULL, false, false);
}

// private object Get(object[] args) [instance] :14
uObject* LazyObservableProperty::Get(uArray* args)
{
    return uPtr(_worker)->Unwrap(GetObservable());
}

// public LazyObservableProperty New(Fuse.Reactive.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) [static] :9
LazyObservableProperty* LazyObservableProperty::New2(::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p)
{
    LazyObservableProperty* obj1 = (LazyObservableProperty*)uNew(LazyObservableProperty_typeof());
    obj1->ctor_1(w, obj, p);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/MathFunctions.uno
// -------------------------------------------------------------------------------

// public sealed class Lerp :415
// {
static void Lerp_build(uType* type)
{
    ::STRINGS[54] = uString::Const("lerp(");
    ::STRINGS[8] = uString::Const(",");
    ::STRINGS[9] = uString::Const(")");
    ::TYPES[12] = ::g::Fuse::Marshal_typeof()->MakeMethod(1/*TryToType<float>*/, ::g::Uno::Float_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator_type, interface0));
    type->SetFields(3);
}

::g::Fuse::Reactive::TernaryOperator_type* Lerp_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::TernaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::TernaryOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Lerp);
    options.TypeSize = sizeof(::g::Fuse::Reactive::TernaryOperator_type);
    type = (::g::Fuse::Reactive::TernaryOperator_type*)uClassType::New("Fuse.Reactive.Lerp", options);
    type->fp_build_ = Lerp_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::TernaryOperator*, uObject*, uObject*, uObject*, uObject**))Lerp__Compute_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Lerp__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::TernaryOperator__Subscribe_fn;
    return type;
}

// protected override sealed object Compute(object a, object b, object t) :423
void Lerp__Compute_fn(Lerp* __this, uObject* a, uObject* b, uObject* t, uObject** __retval)
{
    bool ret2;
    ::g::Uno::Float4 av = ::g::Uno::Float4__New1(0.0f), bv = ::g::Uno::Float4__New1(0.0f);
    int asize = 0, bsize = 0;
    float tv = 0.0f;

    if ((!::g::Fuse::Marshal::TryToZeroFloat4(a, &av, &asize) || !::g::Fuse::Marshal::TryToZeroFloat4(b, &bv, &bsize)) || !(::g::Fuse::Marshal__TryToType_fn(::TYPES[12/*Fuse.Marshal.TryToType<float>*/], t, &tv, &ret2), ret2))
        return *__retval = NULL, void();

    int size = ::g::Uno::Math::Max8(asize, bsize);

    switch (size)
    {
        case 1:
            return *__retval = uBox(::TYPES[21/*float*/], ::g::Uno::Math::Lerp1(av.X, bv.X, tv)), void();
        case 2:
            return *__retval = uBox(::g::Uno::Float2_typeof(), ::g::Uno::Math::Lerp2(::g::Uno::Float2__New2(av.X, av.Y), ::g::Uno::Float2__New2(bv.X, bv.Y), tv)), void();
        case 3:
            return *__retval = uBox(::g::Uno::Float3_typeof(), ::g::Uno::Math::Lerp4(::g::Uno::Float3__New2(av.X, av.Y, av.Z), ::g::Uno::Float3__New2(bv.X, bv.Y, bv.Z), tv)), void();
        case 4:
            return *__retval = uBox(::g::Uno::Float4_typeof(), ::g::Uno::Math::Lerp6(av, bv, tv)), void();
    }

    return *__retval = NULL, void();
}

// public override sealed string ToString() :448
void Lerp__ToString_fn(Lerp* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[54/*"lerp("*/], __this->First()), ::STRINGS[8/*","*/]), __this->Second()), ::STRINGS[8/*","*/]), __this->Third()), ::STRINGS[9/*")"*/]), void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Operators.uno
// ---------------------------------------------------------------------------

// public sealed class LessOrEqual :141
// {
static void LessOrEqual_build(uType* type)
{
    ::STRINGS[55] = uString::Const("<=");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InfixOperator_type, interface0));
    type->SetFields(2);
}

::g::Fuse::Reactive::InfixOperator_type* LessOrEqual_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InfixOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LessOrEqual);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InfixOperator_type);
    type = (::g::Fuse::Reactive::InfixOperator_type*)uClassType::New("Fuse.Reactive.LessOrEqual", options);
    type->fp_build_ = LessOrEqual_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))LessOrEqual__Compute_fn;
    type->fp_get_Symbol = (void(*)(::g::Fuse::Reactive::InfixOperator*, uString**))LessOrEqual__get_Symbol_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// protected override sealed object Compute(object left, object right) :145
void LessOrEqual__Compute_fn(LessOrEqual* __this, uObject* left, uObject* right, uObject** __retval)
{
    if ((left == NULL) || (right == NULL))
        return *__retval = NULL, void();

    return *__retval = uBox(::TYPES[23/*bool*/], uUnbox<bool>(::TYPES[23/*bool*/], ::g::Fuse::Marshal::LessThan(left, right)) || uUnbox<bool>(::TYPES[23/*bool*/], ::g::Fuse::Marshal::EqualTo(left, right))), void();
}

// public override sealed string get_Symbol() :151
void LessOrEqual__get_Symbol_fn(LessOrEqual* __this, uString** __retval)
{
    return *__retval = ::STRINGS[55/*"<="*/], void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Operators.uno
// ---------------------------------------------------------------------------

// public sealed class LessThan :104
// {
static void LessThan_build(uType* type)
{
    ::STRINGS[56] = uString::Const("<");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InfixOperator_type, interface0));
    type->SetFields(2);
}

::g::Fuse::Reactive::InfixOperator_type* LessThan_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InfixOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LessThan);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InfixOperator_type);
    type = (::g::Fuse::Reactive::InfixOperator_type*)uClassType::New("Fuse.Reactive.LessThan", options);
    type->fp_build_ = LessThan_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))LessThan__Compute_fn;
    type->fp_get_Symbol = (void(*)(::g::Fuse::Reactive::InfixOperator*, uString**))LessThan__get_Symbol_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// protected override sealed object Compute(object left, object right) :108
void LessThan__Compute_fn(LessThan* __this, uObject* left, uObject* right, uObject** __retval)
{
    return *__retval = ::g::Fuse::Marshal::LessThan(left, right), void();
}

// public override sealed string get_Symbol() :113
void LessThan__get_Symbol_fn(LessThan* __this, uString** __retval)
{
    return *__retval = ::STRINGS[56/*"<"*/], void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/ValueMirror.uno
// ----------------------------------------------------------------------------

// public abstract class ListMirror :26
// {
static void ListMirror_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::IRaw_typeof(), offsetof(ListMirror_type, interface0),
        ::g::Fuse::IArray_typeof(), offsetof(ListMirror_type, interface1));
    type->SetFields(1);
}

ListMirror_type* ListMirror_typeof()
{
    static uSStrong<ListMirror_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ValueMirror_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ListMirror);
    options.TypeSize = sizeof(ListMirror_type);
    type = (ListMirror_type*)uClassType::New("Fuse.Reactive.ListMirror", options);
    type->fp_build_ = ListMirror_build;
    type->interface0.fp_get_Raw = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::ValueMirror__get_Raw_fn;
    return type;
}

// protected ListMirror(object raw) :31
void ListMirror__ctor_1_fn(ListMirror* __this, uObject* raw)
{
    __this->ctor_1(raw);
}

// protected ListMirror(object raw) [instance] :31
void ListMirror::ctor_1(uObject* raw)
{
    ctor_(raw);
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Operators.uno
// ---------------------------------------------------------------------------

// public sealed class LogicalAnd :179
// {
static void LogicalAnd_build(uType* type)
{
    ::STRINGS[57] = uString::Const("&&");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InfixOperator_type, interface0));
    type->SetFields(2);
}

::g::Fuse::Reactive::InfixOperator_type* LogicalAnd_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InfixOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LogicalAnd);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InfixOperator_type);
    type = (::g::Fuse::Reactive::InfixOperator_type*)uClassType::New("Fuse.Reactive.LogicalAnd", options);
    type->fp_build_ = LogicalAnd_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))LogicalAnd__Compute_fn;
    type->fp_get_Symbol = (void(*)(::g::Fuse::Reactive::InfixOperator*, uString**))LogicalAnd__get_Symbol_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// protected override sealed object Compute(object left, object right) :183
void LogicalAnd__Compute_fn(LogicalAnd* __this, uObject* left, uObject* right, uObject** __retval)
{
    if ((left == NULL) || (right == NULL))
        return *__retval = NULL, void();

    return *__retval = uBox(::TYPES[23/*bool*/], ::g::Fuse::Marshal::ToBool(left) && ::g::Fuse::Marshal::ToBool(right)), void();
}

// public override sealed string get_Symbol() :189
void LogicalAnd__get_Symbol_fn(LogicalAnd* __this, uString** __retval)
{
    return *__retval = ::STRINGS[57/*"&&"*/], void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Operators.uno
// ---------------------------------------------------------------------------

// public sealed class LogicalOr :192
// {
static void LogicalOr_build(uType* type)
{
    ::STRINGS[58] = uString::Const("||");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InfixOperator_type, interface0));
    type->SetFields(2);
}

::g::Fuse::Reactive::InfixOperator_type* LogicalOr_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InfixOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LogicalOr);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InfixOperator_type);
    type = (::g::Fuse::Reactive::InfixOperator_type*)uClassType::New("Fuse.Reactive.LogicalOr", options);
    type->fp_build_ = LogicalOr_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))LogicalOr__Compute_fn;
    type->fp_get_Symbol = (void(*)(::g::Fuse::Reactive::InfixOperator*, uString**))LogicalOr__get_Symbol_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// protected override sealed object Compute(object left, object right) :196
void LogicalOr__Compute_fn(LogicalOr* __this, uObject* left, uObject* right, uObject** __retval)
{
    if ((left == NULL) || (right == NULL))
        return *__retval = NULL, void();

    return *__retval = uBox(::TYPES[23/*bool*/], ::g::Fuse::Marshal::ToBool(left) || ::g::Fuse::Marshal::ToBool(right)), void();
}

// public override sealed string get_Symbol() :202
void LogicalOr__get_Symbol_fn(LogicalOr* __this, uString** __retval)
{
    return *__retval = ::STRINGS[58/*"||"*/], void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/LookUp.uno
// ------------------------------------------------------------------------

// public sealed class LookUp :17
// {
static void LookUp_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(LookUp, _Collection), 0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(LookUp, _Index), 0);
}

::g::Fuse::Reactive::Expression_type* LookUp_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LookUp);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.LookUp", options);
    type->fp_build_ = LookUp_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))LookUp__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))LookUp__Subscribe_fn;
    return type;
}

// public generated Fuse.Reactive.Expression get_Collection() :19
void LookUp__get_Collection_fn(LookUp* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Collection();
}

// private generated void set_Collection(Fuse.Reactive.Expression value) :19
void LookUp__set_Collection_fn(LookUp* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Collection(value);
}

// public generated Fuse.Reactive.Expression get_Index() :20
void LookUp__get_Index_fn(LookUp* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Index();
}

// private generated void set_Index(Fuse.Reactive.Expression value) :20
void LookUp__set_Index_fn(LookUp* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Index(value);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :29
void LookUp__Subscribe_fn(LookUp* __this, uObject* context, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)LookUp__LookUpSubscription::New1(__this, context, listener), void();
}

// public generated Fuse.Reactive.Expression get_Collection() [instance] :19
::g::Fuse::Reactive::Expression* LookUp::Collection()
{
    return _Collection;
}

// private generated void set_Collection(Fuse.Reactive.Expression value) [instance] :19
void LookUp::Collection(::g::Fuse::Reactive::Expression* value)
{
    _Collection = value;
}

// public generated Fuse.Reactive.Expression get_Index() [instance] :20
::g::Fuse::Reactive::Expression* LookUp::Index()
{
    return _Index;
}

// private generated void set_Index(Fuse.Reactive.Expression value) [instance] :20
void LookUp::Index(::g::Fuse::Reactive::Expression* value)
{
    _Index = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/LookUp.uno
// ------------------------------------------------------------------------

// private sealed class LookUp.LookUpSubscription :34
// {
static void LookUp__LookUpSubscription_build(uType* type)
{
    ::STRINGS[59] = uString::Const("Index must be a number: ");
    ::STRINGS[60] = uString::Const("Index was outside the bounds of the array");
    ::STRINGS[61] = uString::Const("Object does not contain the given key '");
    ::STRINGS[27] = uString::Const("'");
    ::STRINGS[62] = uString::Const("Look-up operator not supported on collection type: ");
    ::TYPES[3] = ::g::Uno::IDisposable_typeof();
    ::TYPES[32] = ::g::Fuse::Reactive::IObservable_typeof();
    ::TYPES[28] = ::g::Fuse::Reactive::IListener_typeof();
    ::TYPES[30] = ::g::Fuse::IArray_typeof();
    ::TYPES[45] = ::g::Fuse::MarshalException_typeof();
    ::TYPES[46] = ::g::Fuse::IObject_typeof();
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetInterfaces(
        ::TYPES[3/*Uno.IDisposable*/], offsetof(LookUp__LookUpSubscription_type, interface0),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(LookUp__LookUpSubscription_type, interface1),
        ::TYPES[28/*Fuse.Reactive.IListener*/], offsetof(LookUp__LookUpSubscription_type, interface2),
        ::g::Fuse::Reactive::ValueForwarder__IValueListener_typeof(), offsetof(LookUp__LookUpSubscription_type, interface3));
    type->SetFields(0,
        uObject_typeof(), offsetof(LookUp__LookUpSubscription, _collection), 0,
        ::TYPES[3/*Uno.IDisposable*/], offsetof(LookUp__LookUpSubscription, _colObservableSub), 0,
        ::TYPES[3/*Uno.IDisposable*/], offsetof(LookUp__LookUpSubscription, _colSub), 0,
        ::TYPES[3/*Uno.IDisposable*/], offsetof(LookUp__LookUpSubscription, _diag), 0,
        ::g::Uno::Bool_typeof(), offsetof(LookUp__LookUpSubscription, _hasCollection), 0,
        ::g::Uno::Bool_typeof(), offsetof(LookUp__LookUpSubscription, _hasIndex), 0,
        uObject_typeof(), offsetof(LookUp__LookUpSubscription, _index), 0,
        ::TYPES[3/*Uno.IDisposable*/], offsetof(LookUp__LookUpSubscription, _indexForwarder), 0,
        ::TYPES[3/*Uno.IDisposable*/], offsetof(LookUp__LookUpSubscription, _indexSub), 0,
        ::TYPES[28/*Fuse.Reactive.IListener*/], offsetof(LookUp__LookUpSubscription, _listener), 0,
        ::g::Fuse::Reactive::LookUp_typeof(), offsetof(LookUp__LookUpSubscription, _lu), 0);
}

LookUp__LookUpSubscription_type* LookUp__LookUpSubscription_typeof()
{
    static uSStrong<LookUp__LookUpSubscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.InterfaceCount = 4;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(LookUp__LookUpSubscription);
    options.TypeSize = sizeof(LookUp__LookUpSubscription_type);
    type = (LookUp__LookUpSubscription_type*)uClassType::New("Fuse.Reactive.LookUp.LookUpSubscription", options);
    type->fp_build_ = LookUp__LookUpSubscription_build;
    type->interface3.fp_NewValue = (void(*)(uObject*, uObject*))LookUp__LookUpSubscription__FuseReactiveValueForwarderIValueListenerNewValue_fn;
    type->interface1.fp_OnClear = (void(*)(uObject*))LookUp__LookUpSubscription__FuseReactiveIObserverOnClear_fn;
    type->interface1.fp_OnSet = (void(*)(uObject*, uObject*))LookUp__LookUpSubscription__FuseReactiveIObserverOnSet_fn;
    type->interface1.fp_OnAdd = (void(*)(uObject*, uObject*))LookUp__LookUpSubscription__FuseReactiveIObserverOnAdd_fn;
    type->interface1.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))LookUp__LookUpSubscription__FuseReactiveIObserverOnNewAt_fn;
    type->interface1.fp_OnFailed = (void(*)(uObject*, uString*))LookUp__LookUpSubscription__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnNewAll = (void(*)(uObject*, uObject*))LookUp__LookUpSubscription__FuseReactiveIObserverOnNewAll_fn;
    type->interface1.fp_OnRemoveAt = (void(*)(uObject*, int*))LookUp__LookUpSubscription__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface1.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))LookUp__LookUpSubscription__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))LookUp__LookUpSubscription__Dispose_fn;
    type->interface2.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))LookUp__LookUpSubscription__OnNewData_fn;
    return type;
}

// public LookUpSubscription(Fuse.Reactive.LookUp lu, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :42
void LookUp__LookUpSubscription__ctor__fn(LookUp__LookUpSubscription* __this, ::g::Fuse::Reactive::LookUp* lu, uObject* context, uObject* listener)
{
    __this->ctor_(lu, context, listener);
}

// public void ClearDiagnostic() :88
void LookUp__LookUpSubscription__ClearDiagnostic_fn(LookUp__LookUpSubscription* __this)
{
    __this->ClearDiagnostic();
}

// public void Dispose() :194
void LookUp__LookUpSubscription__Dispose_fn(LookUp__LookUpSubscription* __this)
{
    __this->Dispose();
}

// private void DisposeCollectionObservableSub() :128
void LookUp__LookUpSubscription__DisposeCollectionObservableSub_fn(LookUp__LookUpSubscription* __this)
{
    __this->DisposeCollectionObservableSub();
}

// private void DisposeIndexSub() :104
void LookUp__LookUpSubscription__DisposeIndexSub_fn(LookUp__LookUpSubscription* __this)
{
    __this->DisposeIndexSub();
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :216
void LookUp__LookUpSubscription__FuseReactiveIObserverOnAdd_fn(LookUp__LookUpSubscription* __this, uObject* addedValue)
{
    __this->ResultChanged();
}

// private void Fuse.Reactive.IObserver.OnClear() :214
void LookUp__LookUpSubscription__FuseReactiveIObserverOnClear_fn(LookUp__LookUpSubscription* __this)
{
    __this->ResultChanged();
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :218
void LookUp__LookUpSubscription__FuseReactiveIObserverOnFailed_fn(LookUp__LookUpSubscription* __this, uString* message)
{
    __this->ResultChanged();
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :221
void LookUp__LookUpSubscription__FuseReactiveIObserverOnInsertAt_fn(LookUp__LookUpSubscription* __this, int* index, uObject* value)
{
    __this->ResultChanged();
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray values) :219
void LookUp__LookUpSubscription__FuseReactiveIObserverOnNewAll_fn(LookUp__LookUpSubscription* __this, uObject* values)
{
    __this->ResultChanged();
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :217
void LookUp__LookUpSubscription__FuseReactiveIObserverOnNewAt_fn(LookUp__LookUpSubscription* __this, int* index, uObject* value)
{
    __this->ResultChanged();
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :220
void LookUp__LookUpSubscription__FuseReactiveIObserverOnRemoveAt_fn(LookUp__LookUpSubscription* __this, int* index)
{
    __this->ResultChanged();
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :215
void LookUp__LookUpSubscription__FuseReactiveIObserverOnSet_fn(LookUp__LookUpSubscription* __this, uObject* newValue)
{
    __this->ResultChanged();
}

// private void Fuse.Reactive.ValueForwarder.IValueListener.NewValue(object value) :97
void LookUp__LookUpSubscription__FuseReactiveValueForwarderIValueListenerNewValue_fn(LookUp__LookUpSubscription* __this, uObject* value)
{
    __this->_index = value;
    __this->_hasIndex = true;
    __this->ResultChanged();
}

// public LookUpSubscription New(Fuse.Reactive.LookUp lu, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :42
void LookUp__LookUpSubscription__New1_fn(::g::Fuse::Reactive::LookUp* lu, uObject* context, uObject* listener, LookUp__LookUpSubscription** __retval)
{
    *__retval = LookUp__LookUpSubscription::New1(lu, context, listener);
}

// private void NewCollection(object col) :114
void LookUp__LookUpSubscription__NewCollection_fn(LookUp__LookUpSubscription* __this, uObject* col)
{
    __this->NewCollection(col);
}

// private void NewIndex(object ind) :63
void LookUp__LookUpSubscription__NewIndex_fn(LookUp__LookUpSubscription* __this, uObject* ind)
{
    __this->NewIndex(ind);
}

// public void OnNewData(Fuse.Reactive.IExpression source, object value) :55
void LookUp__LookUpSubscription__OnNewData_fn(LookUp__LookUpSubscription* __this, uObject* source, uObject* value)
{
    __this->OnNewData(source, value);
}

// private void PushNewData(object value) :189
void LookUp__LookUpSubscription__PushNewData_fn(LookUp__LookUpSubscription* __this, uObject* value)
{
    __this->PushNewData(value);
}

// private void ResultChanged() :137
void LookUp__LookUpSubscription__ResultChanged_fn(LookUp__LookUpSubscription* __this)
{
    __this->ResultChanged();
}

// public void SetDiagnostic(string message, Fuse.Reactive.IExpression source) :82
void LookUp__LookUpSubscription__SetDiagnostic_fn(LookUp__LookUpSubscription* __this, uString* message, uObject* source)
{
    __this->SetDiagnostic(message, source);
}

// public LookUpSubscription(Fuse.Reactive.LookUp lu, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [instance] :42
void LookUp__LookUpSubscription::ctor_(::g::Fuse::Reactive::LookUp* lu, uObject* context, uObject* listener)
{
    _listener = listener;
    _lu = lu;
    _colSub = uPtr(uPtr(_lu)->Collection())->Subscribe(context, (uObject*)this);
    _indexSub = uPtr(uPtr(_lu)->Index())->Subscribe(context, (uObject*)this);
}

// public void ClearDiagnostic() [instance] :88
void LookUp__LookUpSubscription::ClearDiagnostic()
{
    if (_diag != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_diag), ::TYPES[3/*Uno.IDisposable*/]));
        _diag = NULL;
    }
}

// public void Dispose() [instance] :194
void LookUp__LookUpSubscription::Dispose()
{
    ClearDiagnostic();
    DisposeCollectionObservableSub();
    DisposeIndexSub();

    if (_colSub != NULL)
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_colSub), ::TYPES[3/*Uno.IDisposable*/]));

    if (_indexSub != NULL)
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_indexSub), ::TYPES[3/*Uno.IDisposable*/]));

    _colSub = NULL;
    _indexSub = NULL;
    _collection = NULL;
    _listener = NULL;
    _index = NULL;
    _lu = NULL;
}

// private void DisposeCollectionObservableSub() [instance] :128
void LookUp__LookUpSubscription::DisposeCollectionObservableSub()
{
    if (_colObservableSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_colObservableSub), ::TYPES[3/*Uno.IDisposable*/]));
        _colObservableSub = NULL;
    }
}

// private void DisposeIndexSub() [instance] :104
void LookUp__LookUpSubscription::DisposeIndexSub()
{
    if (_indexForwarder != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_indexForwarder), ::TYPES[3/*Uno.IDisposable*/]));
        _indexForwarder = NULL;
    }
}

// private void NewCollection(object col) [instance] :114
void LookUp__LookUpSubscription::NewCollection(uObject* col)
{
    _collection = col;
    _hasCollection = true;
    DisposeCollectionObservableSub();
    uObject* obs = uAs<uObject*>(col, ::TYPES[32/*Fuse.Reactive.IObservable*/]);

    if (obs != NULL)
        _colObservableSub = ::g::Fuse::Reactive::IObservable::Subscribe(uInterface(uPtr(obs), ::TYPES[32/*Fuse.Reactive.IObservable*/]), (uObject*)this);

    ResultChanged();
}

// private void NewIndex(object ind) [instance] :63
void LookUp__LookUpSubscription::NewIndex(uObject* ind)
{
    DisposeIndexSub();
    uObject* obs = uAs<uObject*>(ind, ::TYPES[32/*Fuse.Reactive.IObservable*/]);

    if (obs != NULL)
        _indexForwarder = (uObject*)::g::Fuse::Reactive::ValueForwarder::New1(obs, (uObject*)this);
    else
    {
        _index = ind;
        _hasIndex = true;
        ResultChanged();
    }
}

// public void OnNewData(Fuse.Reactive.IExpression source, object value) [instance] :55
void LookUp__LookUpSubscription::OnNewData(uObject* source, uObject* value)
{
    if (_lu == NULL)
        return;

    if (source == uPtr(_lu)->Index())
        NewIndex(value);

    if (source == uPtr(_lu)->Collection())
        NewCollection(value);
}

// private void PushNewData(object value) [instance] :189
void LookUp__LookUpSubscription::PushNewData(uObject* value)
{
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[28/*Fuse.Reactive.IListener*/]), (uObject*)_lu, value);
}

// private void ResultChanged() [instance] :137
void LookUp__LookUpSubscription::ResultChanged()
{
    if (_listener == NULL)
        return;

    ClearDiagnostic();

    if (!_hasIndex)
        return;

    if (!_hasCollection)
        return;

    if ((_index == NULL) || (_collection == NULL))
        PushNewData(NULL);

    uObject* arr = uAs<uObject*>(_collection, ::TYPES[30/*Fuse.IArray*/]);

    if (arr != NULL)
    {
        int index = 0;

        try
        {
            index = ::g::Fuse::Marshal::ToInt(_index);
        }
        catch (const uThrowable& __t)
        {
            if (uIs(__t.Exception, ::TYPES[45/*Fuse.MarshalException*/]))
            {
                ::g::Fuse::MarshalException* me = (::g::Fuse::MarshalException*)__t.Exception;
                SetDiagnostic(::g::Uno::String::op_Addition2(::STRINGS[59/*"Index must ...*/], uPtr(me)->Message()), (uObject*)uPtr(_lu)->Index());
                return;
            }
            else throw __t;
        }

        if ((index >= 0) && (index < ::g::Fuse::IArray::Length(uInterface(uPtr(arr), ::TYPES[30/*Fuse.IArray*/]))))
            PushNewData(::g::Fuse::IArray::Item(uInterface(uPtr(arr), ::TYPES[30/*Fuse.IArray*/]), index));
        else
            SetDiagnostic(::STRINGS[60/*"Index was o...*/], (uObject*)uPtr(_lu)->Index());

        return;
    }

    uObject* obj = uAs<uObject*>(_collection, ::TYPES[46/*Fuse.IObject*/]);

    if (obj != NULL)
    {
        uString* key = ::g::Uno::Object::ToString(uPtr(_index));

        if (::g::Fuse::IObject::ContainsKey(uInterface(uPtr(obj), ::TYPES[46/*Fuse.IObject*/]), key))
            PushNewData(::g::Fuse::IObject::Item(uInterface(uPtr(obj), ::TYPES[46/*Fuse.IObject*/]), key));
        else
            SetDiagnostic(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[61/*"Object does...*/], key), ::STRINGS[27/*"'"*/]), (uObject*)uPtr(_lu)->Index());

        return;
    }

    SetDiagnostic(::g::Uno::String::op_Addition1(::STRINGS[62/*"Look-up ope...*/], _collection), (uObject*)uPtr(_lu)->Collection());
}

// public void SetDiagnostic(string message, Fuse.Reactive.IExpression source) [instance] :82
void LookUp__LookUpSubscription::SetDiagnostic(uString* message, uObject* source)
{
    ClearDiagnostic();
    _diag = ::g::Fuse::Diagnostics::ReportTemporalUserWarning(message, source);
}

// public LookUpSubscription New(Fuse.Reactive.LookUp lu, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :42
LookUp__LookUpSubscription* LookUp__LookUpSubscription::New1(::g::Fuse::Reactive::LookUp* lu, uObject* context, uObject* listener)
{
    LookUp__LookUpSubscription* obj1 = (LookUp__LookUpSubscription*)uNew(LookUp__LookUpSubscription_typeof());
    obj1->ctor_(lu, context, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Member.uno
// ------------------------------------------------------------------------

// public sealed class Member :8
// {
static void Member_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(1,
        ::g::Uno::String_typeof(), offsetof(Member, _Name), 0);
}

::g::Fuse::Reactive::Expression_type* Member_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Member);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.Member", options);
    type->fp_build_ = Member_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))Member__Subscribe_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Member__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))Member__Subscribe_fn;
    return type;
}

// public Member(Fuse.Reactive.Expression obj, string name) :12
void Member__ctor_2_fn(Member* __this, ::g::Fuse::Reactive::Expression* obj, uString* name)
{
    __this->ctor_2(obj, name);
}

// public generated string get_Name() :10
void Member__get_Name_fn(Member* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(string value) :10
void Member__set_Name_fn(Member* __this, uString* value)
{
    __this->Name(value);
}

// public Member New(Fuse.Reactive.Expression obj, string name) :12
void Member__New1_fn(::g::Fuse::Reactive::Expression* obj, uString* name, Member** __retval)
{
    *__retval = Member::New1(obj, name);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :22
void Member__Subscribe_fn(Member* __this, uObject* context, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)Member__MemberSubscription::New2(__this, context, listener), void();
}

// public override sealed string ToString() :17
void Member__ToString_fn(Member* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Object::ToString(uPtr(__this->Operand())), ::STRINGS[33/*"."*/]), __this->Name()), void();
}

// public Member(Fuse.Reactive.Expression obj, string name) [instance] :12
void Member::ctor_2(::g::Fuse::Reactive::Expression* obj, uString* name)
{
    ctor_1(obj);
    Name(name);
}

// public generated string get_Name() [instance] :10
uString* Member::Name()
{
    return _Name;
}

// private generated void set_Name(string value) [instance] :10
void Member::Name(uString* value)
{
    _Name = value;
}

// public Member New(Fuse.Reactive.Expression obj, string name) [static] :12
Member* Member::New1(::g::Fuse::Reactive::Expression* obj, uString* name)
{
    Member* obj1 = (Member*)uNew(Member_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Member.uno
// ------------------------------------------------------------------------

// private sealed class Member.MemberSubscription :27
// {
static void Member__MemberSubscription_build(uType* type)
{
    ::STRINGS[27] = uString::Const("'");
    ::STRINGS[63] = uString::Const("' does not contain property '");
    ::TYPES[46] = ::g::Fuse::IObject_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator__Subscription_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator__Subscription_type, interface1));
    type->SetFields(5,
        ::g::Fuse::Reactive::Member_typeof(), offsetof(Member__MemberSubscription, _member), 0);
}

::g::Fuse::Reactive::UnaryOperator__Subscription_type* Member__MemberSubscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryOperator__Subscription_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Member__MemberSubscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator__Subscription_type);
    type = (::g::Fuse::Reactive::UnaryOperator__Subscription_type*)uClassType::New("Fuse.Reactive.Member.MemberSubscription", options);
    type->fp_build_ = Member__MemberSubscription_build;
    type->fp_OnNewOperand = (void(*)(::g::Fuse::Reactive::UnaryOperator__Subscription*, uObject*))Member__MemberSubscription__OnNewOperand_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Reactive::UnaryOperator__Subscription__Dispose_fn;
    return type;
}

// public MemberSubscription(Fuse.Reactive.Member member, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :30
void Member__MemberSubscription__ctor_2_fn(Member__MemberSubscription* __this, ::g::Fuse::Reactive::Member* member, uObject* context, uObject* listener)
{
    __this->ctor_2(member, context, listener);
}

// public MemberSubscription New(Fuse.Reactive.Member member, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :30
void Member__MemberSubscription__New2_fn(::g::Fuse::Reactive::Member* member, uObject* context, uObject* listener, Member__MemberSubscription** __retval)
{
    *__retval = Member__MemberSubscription::New2(member, context, listener);
}

// protected override sealed void OnNewOperand(object obj) :36
void Member__MemberSubscription__OnNewOperand_fn(Member__MemberSubscription* __this, uObject* obj)
{
    __this->ClearDiagnostic();
    uObject* io = uAs<uObject*>(obj, ::TYPES[46/*Fuse.IObject*/]);

    if ((io != NULL) && ::g::Fuse::IObject::ContainsKey(uInterface(uPtr(io), ::TYPES[46/*Fuse.IObject*/]), uPtr(__this->_member)->Name()))
        __this->PushNewData(::g::Fuse::IObject::Item(uInterface(uPtr(io), ::TYPES[46/*Fuse.IObject*/]), uPtr(__this->_member)->Name()));
    else
        __this->SetDiagnostic(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[27/*"'"*/], ::g::Uno::Object::ToString(uPtr(uPtr(__this->_member)->Operand()))), ::STRINGS[63/*"' does not ...*/]), uPtr(__this->_member)->Name()), ::STRINGS[27/*"'"*/]), (uObject*)__this->_member);
}

// public MemberSubscription(Fuse.Reactive.Member member, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [instance] :30
void Member__MemberSubscription::ctor_2(::g::Fuse::Reactive::Member* member, uObject* context, uObject* listener)
{
    ctor_1(member, listener);
    _member = member;
    Init(context);
}

// public MemberSubscription New(Fuse.Reactive.Member member, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :30
Member__MemberSubscription* Member__MemberSubscription::New2(::g::Fuse::Reactive::Member* member, uObject* context, uObject* listener)
{
    Member__MemberSubscription* obj1 = (Member__MemberSubscription*)uNew(Member__MemberSubscription_typeof());
    obj1->ctor_2(member, context, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/ThreadWorker.ScriptClass.uno
// -----------------------------------------------------------------------------------------

// private sealed class ThreadWorker.MethodClosure :159
// {
// static generated MethodClosure() :159
static void ThreadWorker__MethodClosure__cctor__fn(uType* __type)
{
    ThreadWorker__MethodClosure::_emptyArgs_ = uArray::New(::TYPES[4/*object[]*/], 0);
}

static void ThreadWorker__MethodClosure_build(uType* type)
{
    ::STRINGS[64] = uString::Const(" (ScriptMethod)");
    ::STRINGS[65] = uString::Const("(function (cl, callback) { cl.prototype.");
    ::STRINGS[66] = uString::Const(" = function() { return callback(this.external_object, Array.prototype.slice.call(arguments)); }})");
    ::TYPES[4] = uObject_typeof()->Array();
    ::TYPES[25] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[27] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[47] = ::g::Fuse::Scripting::External_typeof();
    ::TYPES[26] = ::g::Fuse::Scripting::Array_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::ScriptMethod_typeof(), offsetof(ThreadWorker__MethodClosure, _m), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(ThreadWorker__MethodClosure, _worker), 0,
        ::TYPES[4/*object[]*/], (uintptr_t)&ThreadWorker__MethodClosure::_emptyArgs_, uFieldFlagsStatic);
}

uType* ThreadWorker__MethodClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(ThreadWorker__MethodClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.ThreadWorker.MethodClosure", options);
    type->fp_build_ = ThreadWorker__MethodClosure_build;
    type->fp_cctor_ = ThreadWorker__MethodClosure__cctor__fn;
    return type;
}

// public MethodClosure(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptMethod m, Fuse.Reactive.ThreadWorker worker) :163
void ThreadWorker__MethodClosure__ctor__fn(ThreadWorker__MethodClosure* __this, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Reactive::ThreadWorker* worker)
{
    __this->ctor_(cl, m, worker);
}

// private object Callback(object[] args) :176
void ThreadWorker__MethodClosure__Callback_fn(ThreadWorker__MethodClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->Callback(args);
}

// private static object[] CopyArgs(Fuse.Scripting.Array args) :184
void ThreadWorker__MethodClosure__CopyArgs_fn(::g::Fuse::Scripting::Array* args, uArray** __retval)
{
    *__retval = ThreadWorker__MethodClosure::CopyArgs(args);
}

// public MethodClosure New(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptMethod m, Fuse.Reactive.ThreadWorker worker) :163
void ThreadWorker__MethodClosure__New1_fn(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Reactive::ThreadWorker* worker, ThreadWorker__MethodClosure** __retval)
{
    *__retval = ThreadWorker__MethodClosure::New1(cl, m, worker);
}

uSStrong<uArray*> ThreadWorker__MethodClosure::_emptyArgs_;

// public MethodClosure(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptMethod m, Fuse.Reactive.ThreadWorker worker) [instance] :163
void ThreadWorker__MethodClosure::ctor_(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Reactive::ThreadWorker* worker)
{
    _m = m;
    _worker = worker;
    ::g::Fuse::Scripting::Function* factory = uCast< ::g::Fuse::Scripting::Function*>(uPtr(uPtr(_worker)->Context())->Evaluate(::g::Uno::String::op_Addition2(uPtr(m)->Name, ::STRINGS[64/*" (ScriptMet...*/]), ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[65/*"(function (...*/], uPtr(m)->Name), ::STRINGS[66/*" = function...*/])), ::TYPES[25/*Fuse.Scripting.Function*/]);
    uPtr(factory)->Call(uArray::Init<uObject*>(::TYPES[4/*object[]*/], 2, cl, uDelegate::New(::TYPES[27/*Fuse.Scripting.Callback*/], (void*)ThreadWorker__MethodClosure__Callback_fn, this)));
}

// private object Callback(object[] args) [instance] :176
uObject* ThreadWorker__MethodClosure::Callback(uArray* args)
{
    uObject* self = uPtr(uCast< ::g::Fuse::Scripting::External*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[47/*Fuse.Scripting.External*/]))->Object;
    uArray* realArgs = ThreadWorker__MethodClosure::CopyArgs(uCast< ::g::Fuse::Scripting::Array*>(args->Strong<uObject*>(1), ::TYPES[26/*Fuse.Scripting.Array*/]));
    uObject* res = uPtr(_worker)->Unwrap(uPtr(_m)->Call(uPtr(_worker)->Context(), self, realArgs));
    return res;
}

// private static object[] CopyArgs(Fuse.Scripting.Array args) [static] :184
uArray* ThreadWorker__MethodClosure::CopyArgs(::g::Fuse::Scripting::Array* args)
{
    uArray* res = uArray::New(::TYPES[4/*object[]*/], uPtr(args)->Length());

    for (int i = 0; i < res->Length(); i++)
        uPtr(res)->Strong<uObject*>(i) = ::g::Fuse::Reactive::ThreadWorker::Wrap(uPtr(args)->Item(i));

    return res;
}

// public MethodClosure New(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptMethod m, Fuse.Reactive.ThreadWorker worker) [static] :163
ThreadWorker__MethodClosure* ThreadWorker__MethodClosure::New1(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptMethod* m, ::g::Fuse::Reactive::ThreadWorker* worker)
{
    ThreadWorker__MethodClosure* obj1 = (ThreadWorker__MethodClosure*)uNew(ThreadWorker__MethodClosure_typeof());
    obj1->ctor_(cl, m, worker);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/ModuleInstance.uno
// -------------------------------------------------------------------------------

// internal sealed class ModuleInstance :7
// {
// static generated ModuleInstance() :7
static void ModuleInstance__cctor__fn(uType* __type)
{
    ModuleInstance::_resetHookMutex_ = ::g::Uno::Object::New();
}

static void ModuleInstance_build(uType* type)
{
    ::STRINGS[67] = uString::Const("exports");
    ::STRINGS[68] = uString::Const("JavaScript error in ");
    ::STRINGS[69] = uString::Const(" fixed!");
    ::STRINGS[70] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/ModuleInstance.uno");
    ::STRINGS[71] = uString::Const("EvaluateModule");
    ::STRINGS[72] = uString::Const("JavaScript error");
    ::TYPES[42] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[48] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::JavaScript__Dependency_typeof(), NULL);
    ::TYPES[49] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::JavaScript__Dependency_typeof(), NULL);
    ::TYPES[14] = ::g::Uno::Action_typeof();
    ::TYPES[50] = ::g::Uno::Collections::IList_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Fuse::Reactive::JavaScript_typeof(),
        ::g::Uno::UX::Resource_typeof(),
        ::g::Fuse::Scripting::ScriptModule_typeof());
    type->SetFields(1,
        uObject_typeof(), offsetof(ModuleInstance, _dc), 0,
        ::TYPES[42/*Uno.Collections.Dictionary<string, object>*/], offsetof(ModuleInstance, _deps), 0,
        ::g::Fuse::Reactive::DiagnosticSubject_typeof(), offsetof(ModuleInstance, _diagnostic1), 0,
        ::g::Fuse::Reactive::JavaScript_typeof(), offsetof(ModuleInstance, _js), 0,
        ::g::Fuse::Scripting::ModuleResult_typeof(), offsetof(ModuleInstance, _moduleResult), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(ModuleInstance, _worker), 0,
        uObject_typeof(), (uintptr_t)&ModuleInstance::_resetHookMutex_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&ModuleInstance::previousErrorFile_, uFieldFlagsStatic);
}

uType* ModuleInstance_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::DiagnosticSubject_typeof();
    options.FieldCount = 9;
    options.DependencyCount = 4;
    options.ObjectSize = sizeof(ModuleInstance);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.ModuleInstance", options);
    type->fp_build_ = ModuleInstance_build;
    type->fp_cctor_ = ModuleInstance__cctor__fn;
    return type;
}

// public ModuleInstance(Fuse.Reactive.ThreadWorker worker, Fuse.Reactive.JavaScript js) :14
void ModuleInstance__ctor_1_fn(ModuleInstance* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js)
{
    __this->ctor_1(worker, js);
}

// public void Dispose() :51
void ModuleInstance__Dispose_fn(ModuleInstance* __this)
{
    __this->Dispose();
}

// private void Evaluate() :25
void ModuleInstance__Evaluate_fn(ModuleInstance* __this)
{
    __this->Evaluate();
}

// private object EvaluateExports() :62
void ModuleInstance__EvaluateExports_fn(ModuleInstance* __this, uObject** __retval)
{
    *__retval = __this->EvaluateExports();
}

// private void EvaluateModule() :77
void ModuleInstance__EvaluateModule_fn(ModuleInstance* __this)
{
    __this->EvaluateModule();
}

// public ModuleInstance New(Fuse.Reactive.ThreadWorker worker, Fuse.Reactive.JavaScript js) :14
void ModuleInstance__New2_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js, ModuleInstance** __retval)
{
    *__retval = ModuleInstance::New2(worker, js);
}

// private void SetDataContext() :43
void ModuleInstance__SetDataContext_fn(ModuleInstance* __this)
{
    __this->SetDataContext();
}

uSStrong<uObject*> ModuleInstance::_resetHookMutex_;
uSStrong<uString*> ModuleInstance::previousErrorFile_;

// public ModuleInstance(Fuse.Reactive.ThreadWorker worker, Fuse.Reactive.JavaScript js) [instance] :14
void ModuleInstance::ctor_1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js)
{
    ::g::Fuse::Reactive::JavaScript__Dependency* ret2;
    ::g::Fuse::Reactive::JavaScript__Dependency* ret3;
    _deps = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[42/*Uno.Collections.Dictionary<string, object>*/]));
    _diagnostic1 = ::g::Fuse::Reactive::DiagnosticSubject::New1();
    ctor_();

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(js)->Dependencies()), ::TYPES[48/*Uno.Collections.ICollection<Fuse.Reactive.JavaScript.Dependency>*/])); i++)
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_deps), uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(js)->Dependencies()), ::TYPES[49/*Uno.Collections.IList<Fuse.Reactive.JavaScript.Dependency>*/]), uCRef<int>(i), &ret2), ret2))->Name(), uPtr(worker)->Unwrap(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(js)->Dependencies()), ::TYPES[49/*Uno.Collections.IList<Fuse.Reactive.JavaScript.Dependency>*/]), uCRef<int>(i), &ret3), ret3))->Value));

    _js = js;
    _worker = worker;
    uPtr(_worker)->Invoke(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)ModuleInstance__Evaluate_fn, this));
}

// public void Dispose() [instance] :51
void ModuleInstance::Dispose()
{
    ClearDiagnostic();

    if (_moduleResult != NULL)
    {
        uPtr(_moduleResult)->Dispose();
        _moduleResult = NULL;
    }
}

// private void Evaluate() [instance] :25
void ModuleInstance::Evaluate()
{
    uObject* ret4;
    ::g::Uno::UX::NameTable* nt = uPtr(_js)->_nameTable;

    while (nt != NULL)
    {
        for (int i = 0; i < uPtr(uPtr(nt)->Entries)->Length(); ++i)
            ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_deps), uPtr(uPtr(nt)->Entries)->Strong<uString*>(i), uPtr(_worker)->Unwrap((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(nt)->Objects()), ::TYPES[50/*Uno.Collections.IList<object>*/]), uCRef<int>(i), &ret4), ret4)));

        nt = uPtr(nt)->ParentTable;
    }

    uPtr(uPtr(_js)->ScriptModule())->Dependencies = _deps;
    _dc = uPtr(_worker)->Reflect(EvaluateExports());
    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)ModuleInstance__SetDataContext_fn, this));
}

// private object EvaluateExports() [instance] :62
uObject* ModuleInstance::EvaluateExports()
{
    EvaluateModule();

    if (_moduleResult != NULL)
        return uPtr(uPtr(_moduleResult)->Object)->Item(::STRINGS[67/*"exports"*/]);

    return NULL;
}

// private void EvaluateModule() [instance] :77
void ModuleInstance::EvaluateModule()
{
    uPtr(_diagnostic1)->ClearDiagnostic();
    uString* globalId = ::g::Uno::UX::Resource::GetGlobalKey(this);
    ::g::Uno::Threading::Monitor::Enter(ModuleInstance::_resetHookMutex_);

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::Threading::Monitor::Exit(ModuleInstance::_resetHookMutex_);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        ::g::Fuse::Scripting::ModuleResult* newModuleResult = uPtr(uPtr(_js)->ScriptModule())->Evaluate1(uPtr(_worker)->Context(), globalId);
        uPtr(newModuleResult)->AddDependency(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)::g::Fuse::Reactive::JavaScript__DispatchEvaluate_fn, uPtr(_js)));

        if (newModuleResult->Error() == NULL)
        {
            _moduleResult = newModuleResult;

            if (::g::Uno::String::op_Equality(ModuleInstance::previousErrorFile_, ::g::Uno::String::op_Addition1(uPtr(_js)->FileName(), uBox<int>(::TYPES[20/*int*/], uPtr(_js)->LineNumber()))))
            {
                ::g::Fuse::Diagnostics::UserSuccess(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[68/*"JavaScript ...*/], uPtr(_js)->FileName()), ::STRINGS[69/*" fixed!"*/]), this, ::STRINGS[70/*"/usr/local/...*/], 95, ::STRINGS[71/*"EvaluateMod...*/]);
                ModuleInstance::previousErrorFile_ = NULL;
            }
        }
        else
        {
            ::g::Fuse::Scripting::ScriptException* se = uPtr(newModuleResult)->Error();

            if (!::g::Uno::String::Contains(uPtr(uPtr(se)->Message()), ::g::Fuse::Scripting::ScriptModule::ModuleContainsAnErrorMessage_))
            {
                ::g::Fuse::Reactive::JavaScript::UserScriptError(::STRINGS[72/*"JavaScript ...*/], se, this, ::STRINGS[70/*"/usr/local/...*/], 111, ::STRINGS[71/*"EvaluateMod...*/]);
                ModuleInstance::previousErrorFile_ = ::g::Uno::String::op_Addition1(uPtr(_js)->FileName(), uBox<int>(::TYPES[20/*int*/], uPtr(_js)->LineNumber()));
            }
        }
    }
}

// private void SetDataContext() [instance] :43
void ModuleInstance::SetDataContext()
{
    if (_moduleResult != NULL)
        uPtr(_js)->SetDataContext(_dc);
}

// public ModuleInstance New(Fuse.Reactive.ThreadWorker worker, Fuse.Reactive.JavaScript js) [static] :14
ModuleInstance* ModuleInstance::New2(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js)
{
    ModuleInstance* obj1 = (ModuleInstance*)uNew(ModuleInstance_typeof());
    obj1->ctor_1(worker, js);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Operators.uno
// ---------------------------------------------------------------------------

// public sealed class Multiply :43
// {
static void Multiply_build(uType* type)
{
    ::STRINGS[73] = uString::Const("*");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InfixOperator_type, interface0));
    type->SetFields(2);
}

::g::Fuse::Reactive::InfixOperator_type* Multiply_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InfixOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Multiply);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InfixOperator_type);
    type = (::g::Fuse::Reactive::InfixOperator_type*)uClassType::New("Fuse.Reactive.Multiply", options);
    type->fp_build_ = Multiply_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))Multiply__Compute_fn;
    type->fp_get_Symbol = (void(*)(::g::Fuse::Reactive::InfixOperator*, uString**))Multiply__get_Symbol_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// protected override sealed object Compute(object left, object right) :47
void Multiply__Compute_fn(Multiply* __this, uObject* left, uObject* right, uObject** __retval)
{
    return *__retval = ::g::Fuse::Marshal::Multiply(left, right), void();
}

// public override sealed string get_Symbol() :52
void Multiply__get_Symbol_fn(Multiply* __this, uString** __retval)
{
    return *__retval = ::STRINGS[73/*"*"*/], void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/Observable.uno
// ---------------------------------------------------------------------------

// private sealed class Observable.NewAll :411
// {
static void Observable__NewAll_build(uType* type)
{
    ::TYPES[51] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Fuse::Reactive::ArrayMirror_typeof(), offsetof(Observable__NewAll, _newValues), 0,
        ::g::Uno::Int_typeof(), offsetof(Observable__NewAll, _origin), 0);
}

::g::Fuse::Reactive::Observable__Operation_type* Observable__NewAll_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Observable__Operation_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__NewAll);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Observable__Operation_type);
    type = (::g::Fuse::Reactive::Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.NewAll", options);
    type->fp_build_ = Observable__NewAll_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Reactive::Observable__Operation*, uObject*))Observable__NewAll__OnPerform_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Reactive::Observable__Operation*))Observable__NewAll__Unsubscribe_fn;
    return type;
}

// public NewAll(Fuse.Reactive.Observable obs, Fuse.Reactive.ArrayMirror newValues, int origin) :416
void Observable__NewAll__ctor_1_fn(Observable__NewAll* __this, ::g::Fuse::Reactive::Observable* obs, ::g::Fuse::Reactive::ArrayMirror* newValues, int* origin)
{
    __this->ctor_1(obs, newValues, *origin);
}

// public NewAll New(Fuse.Reactive.Observable obs, Fuse.Reactive.ArrayMirror newValues, int origin) :416
void Observable__NewAll__New1_fn(::g::Fuse::Reactive::Observable* obs, ::g::Fuse::Reactive::ArrayMirror* newValues, int* origin, Observable__NewAll** __retval)
{
    *__retval = Observable__NewAll::New1(obs, newValues, *origin);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription> sub) :427
void Observable__NewAll__OnPerform_fn(Observable__NewAll* __this, uObject* sub)
{
    ::g::Fuse::Reactive::Observable__Subscription* ret2;
    ::g::Fuse::Reactive::Observable__Subscription* ret3;
    uPtr(__this->Observable())->UnsubscribeValues();
    uPtr(uPtr(__this->Observable())->_values)->Clear();
    uPtr(uPtr(__this->Observable())->_values)->AddRange((uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[51/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<object>*/], uPtr(__this->_newValues)->ItemsReadonly())));

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Reactive.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret2), ret2))->ShouldSend(__this->_origin))
            ::g::Fuse::Reactive::IObserver::OnNewAll(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret3), ret3))->Observer()), ::TYPES[2/*Fuse.Reactive.IObserver*/]), (uObject*)__this->_newValues);
}

// protected override sealed void Unsubscribe() :422
void Observable__NewAll__Unsubscribe_fn(Observable__NewAll* __this)
{
    ::g::Fuse::Reactive::ValueMirror::Unsubscribe1(__this->_newValues);
}

// public NewAll(Fuse.Reactive.Observable obs, Fuse.Reactive.ArrayMirror newValues, int origin) [instance] :416
void Observable__NewAll::ctor_1(::g::Fuse::Reactive::Observable* obs, ::g::Fuse::Reactive::ArrayMirror* newValues, int origin)
{
    ctor_(obs);
    _newValues = newValues;
    _origin = origin;
}

// public NewAll New(Fuse.Reactive.Observable obs, Fuse.Reactive.ArrayMirror newValues, int origin) [static] :416
Observable__NewAll* Observable__NewAll::New1(::g::Fuse::Reactive::Observable* obs, ::g::Fuse::Reactive::ArrayMirror* newValues, int origin)
{
    Observable__NewAll* obj1 = (Observable__NewAll*)uNew(Observable__NewAll_typeof());
    obj1->ctor_1(obs, newValues, origin);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/Observable.uno
// ---------------------------------------------------------------------------

// private sealed class Observable.NewAt :381
// {
static void Observable__NewAt_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(Observable__NewAt, _index), 0,
        uObject_typeof(), offsetof(Observable__NewAt, _value), 0);
}

::g::Fuse::Reactive::Observable__Operation_type* Observable__NewAt_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Observable__Operation_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__NewAt);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Observable__Operation_type);
    type = (::g::Fuse::Reactive::Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.NewAt", options);
    type->fp_build_ = Observable__NewAt_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Reactive::Observable__Operation*, uObject*))Observable__NewAt__OnPerform_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Reactive::Observable__Operation*))Observable__NewAt__Unsubscribe_fn;
    return type;
}

// public NewAt(Fuse.Reactive.Observable obs, int index, object newValue) :386
void Observable__NewAt__ctor_1_fn(Observable__NewAt* __this, ::g::Fuse::Reactive::Observable* obs, int* index, uObject* newValue)
{
    __this->ctor_1(obs, *index, newValue);
}

// public NewAt New(Fuse.Reactive.Observable obs, int index, object newValue) :386
void Observable__NewAt__New1_fn(::g::Fuse::Reactive::Observable* obs, int* index, uObject* newValue, Observable__NewAt** __retval)
{
    *__retval = Observable__NewAt::New1(obs, *index, newValue);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription> sub) :398
void Observable__NewAt__OnPerform_fn(Observable__NewAt* __this, uObject* sub)
{
    ::g::Fuse::Reactive::Observable__Subscription* ret2;
    ::g::Fuse::Reactive::Observable__Subscription* ret3;
    ::g::Fuse::Reactive::ValueMirror::Unsubscribe1(uPtr(__this->Observable())->Item(__this->_index));
    uPtr(__this->Observable())->SetValue(__this->_index, __this->_value);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Reactive.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret2), ret2))->ShouldSend(-1))
            ::g::Fuse::Reactive::IObserver::OnNewAt(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret3), ret3))->Observer()), ::TYPES[2/*Fuse.Reactive.IObserver*/]), __this->_index, __this->_value);
}

// protected override sealed void Unsubscribe() :392
void Observable__NewAt__Unsubscribe_fn(Observable__NewAt* __this)
{
    ::g::Fuse::Reactive::ValueMirror::Unsubscribe1(__this->_value);
}

// public NewAt(Fuse.Reactive.Observable obs, int index, object newValue) [instance] :386
void Observable__NewAt::ctor_1(::g::Fuse::Reactive::Observable* obs, int index, uObject* newValue)
{
    ctor_(obs);
    _index = index;
    _value = newValue;
}

// public NewAt New(Fuse.Reactive.Observable obs, int index, object newValue) [static] :386
Observable__NewAt* Observable__NewAt::New1(::g::Fuse::Reactive::Observable* obs, int index, uObject* newValue)
{
    Observable__NewAt* obj1 = (Observable__NewAt*)uNew(Observable__NewAt_typeof());
    obj1->ctor_1(obs, index, newValue);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/NodeExpressionBinding.uno
// ------------------------------------------------------------------------------------

// internal sealed class NodeExpressionBinding :9
// {
static void NodeExpressionBinding_build(uType* type)
{
    ::STRINGS[74] = uString::Const("Invalid params");
    ::STRINGS[45] = uString::Const("The binding type does not support resource subscriptions");
    ::TYPES[14] = ::g::Uno::Action_typeof();
    ::TYPES[37] = ::g::Fuse::Reactive::IExpression_typeof();
    ::TYPES[3] = ::g::Uno::IDisposable_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IContext_typeof(), offsetof(NodeExpressionBinding_type, interface0),
        ::TYPES[3/*Uno.IDisposable*/], offsetof(NodeExpressionBinding_type, interface1));
    type->SetFields(0,
        ::TYPES[37/*Fuse.Reactive.IExpression*/], offsetof(NodeExpressionBinding, _expr), 0,
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(NodeExpressionBinding, _listener), 0,
        ::g::Fuse::Node_typeof(), offsetof(NodeExpressionBinding, _node), 0,
        ::TYPES[3/*Uno.IDisposable*/], offsetof(NodeExpressionBinding, _sub), 0);
}

NodeExpressionBinding_type* NodeExpressionBinding_typeof()
{
    static uSStrong<NodeExpressionBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(NodeExpressionBinding);
    options.TypeSize = sizeof(NodeExpressionBinding_type);
    type = (NodeExpressionBinding_type*)uClassType::New("Fuse.Reactive.NodeExpressionBinding", options);
    type->fp_build_ = NodeExpressionBinding_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))NodeExpressionBinding__FuseReactiveIContextSubscribe_fn;
    type->interface0.fp_get_Node = (void(*)(uObject*, ::g::Fuse::Node**))NodeExpressionBinding__FuseReactiveIContextget_Node_fn;
    type->interface0.fp_SubscribeResource = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))NodeExpressionBinding__SubscribeResource_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))NodeExpressionBinding__Dispose_fn;
    return type;
}

// public NodeExpressionBinding(Fuse.Reactive.IExpression expr, Fuse.Node node, Fuse.Reactive.IListener listener) :16
void NodeExpressionBinding__ctor__fn(NodeExpressionBinding* __this, uObject* expr, ::g::Fuse::Node* node, uObject* listener)
{
    __this->ctor_(expr, node, listener);
}

// private void CompleteInit() :28
void NodeExpressionBinding__CompleteInit_fn(NodeExpressionBinding* __this)
{
    __this->CompleteInit();
}

// public void Dispose() :48
void NodeExpressionBinding__Dispose_fn(NodeExpressionBinding* __this)
{
    __this->Dispose();
}

// private Fuse.Node Fuse.Reactive.IContext.get_Node() :41
void NodeExpressionBinding__FuseReactiveIContextget_Node_fn(NodeExpressionBinding* __this, ::g::Fuse::Node** __retval)
{
    return *__retval = __this->_node, void();
}

// private Uno.IDisposable Fuse.Reactive.IContext.Subscribe(Fuse.Reactive.IExpression source, string key, Fuse.Reactive.IListener listener) :36
void NodeExpressionBinding__FuseReactiveIContextSubscribe_fn(NodeExpressionBinding* __this, uObject* source, uString* key, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)::g::Fuse::Reactive::DataSubscription::New1(source, __this->_node, key, listener), void();
}

// public NodeExpressionBinding New(Fuse.Reactive.IExpression expr, Fuse.Node node, Fuse.Reactive.IListener listener) :16
void NodeExpressionBinding__New1_fn(uObject* expr, ::g::Fuse::Node* node, uObject* listener, NodeExpressionBinding** __retval)
{
    *__retval = NodeExpressionBinding::New1(expr, node, listener);
}

// public Uno.IDisposable SubscribeResource(Fuse.Reactive.IExpression source, string key, Fuse.Reactive.IListener listener) :43
void NodeExpressionBinding__SubscribeResource_fn(NodeExpressionBinding* __this, uObject* source, uString* key, uObject* listener, uObject** __retval)
{
    *__retval = __this->SubscribeResource(source, key, listener);
}

// public NodeExpressionBinding(Fuse.Reactive.IExpression expr, Fuse.Node node, Fuse.Reactive.IListener listener) [instance] :16
void NodeExpressionBinding::ctor_(uObject* expr, ::g::Fuse::Node* node, uObject* listener)
{
    if (((expr == NULL) || (node == NULL)) || (listener == NULL))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[74/*"Invalid par...*/]));

    _expr = expr;
    _listener = listener;
    _node = node;
    ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)NodeExpressionBinding__CompleteInit_fn, this), -1, 2);
}

// private void CompleteInit() [instance] :28
void NodeExpressionBinding::CompleteInit()
{
    if (_expr == NULL)
        return;

    _sub = ::g::Fuse::Reactive::IExpression::Subscribe(uInterface(uPtr(_expr), ::TYPES[37/*Fuse.Reactive.IExpression*/]), (uObject*)this, _listener);
}

// public void Dispose() [instance] :48
void NodeExpressionBinding::Dispose()
{
    if (_sub != NULL)
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_sub), ::TYPES[3/*Uno.IDisposable*/]));

    _expr = NULL;
    _listener = NULL;
    _node = NULL;
}

// public Uno.IDisposable SubscribeResource(Fuse.Reactive.IExpression source, string key, Fuse.Reactive.IListener listener) [instance] :43
uObject* NodeExpressionBinding::SubscribeResource(uObject* source, uString* key, uObject* listener)
{
    U_THROW(::g::Uno::Exception::New2(::STRINGS[45/*"The binding...*/]));
}

// public NodeExpressionBinding New(Fuse.Reactive.IExpression expr, Fuse.Node node, Fuse.Reactive.IListener listener) [static] :16
NodeExpressionBinding* NodeExpressionBinding::New1(uObject* expr, ::g::Fuse::Node* node, uObject* listener)
{
    NodeExpressionBinding* obj1 = (NodeExpressionBinding*)uNew(NodeExpressionBinding_typeof());
    obj1->ctor_(expr, node, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Operators.uno
// ---------------------------------------------------------------------------

// public sealed class NotEqual :166
// {
static void NotEqual_build(uType* type)
{
    ::STRINGS[75] = uString::Const("!=");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InfixOperator_type, interface0));
    type->SetFields(2);
}

::g::Fuse::Reactive::InfixOperator_type* NotEqual_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InfixOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NotEqual);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InfixOperator_type);
    type = (::g::Fuse::Reactive::InfixOperator_type*)uClassType::New("Fuse.Reactive.NotEqual", options);
    type->fp_build_ = NotEqual_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))NotEqual__Compute_fn;
    type->fp_get_Symbol = (void(*)(::g::Fuse::Reactive::InfixOperator*, uString**))NotEqual__get_Symbol_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// protected override sealed object Compute(object left, object right) :170
void NotEqual__Compute_fn(NotEqual* __this, uObject* left, uObject* right, uObject** __retval)
{
    if ((left == NULL) || (right == NULL))
        return *__retval = NULL, void();

    return *__retval = uBox(::TYPES[23/*bool*/], !uUnbox<bool>(::TYPES[23/*bool*/], ::g::Fuse::Marshal::EqualTo(left, right))), void();
}

// public override sealed string get_Symbol() :176
void NotEqual__get_Symbol_fn(NotEqual* __this, uString** __retval)
{
    return *__retval = ::STRINGS[75/*"!="*/], void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Operators.uno
// ---------------------------------------------------------------------------

// public sealed class NullCoalesce :67
// {
static void NullCoalesce_build(uType* type)
{
    ::STRINGS[76] = uString::Const("??");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InfixOperator_type, interface0));
    type->SetFields(2);
}

::g::Fuse::Reactive::InfixOperator_type* NullCoalesce_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InfixOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NullCoalesce);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InfixOperator_type);
    type = (::g::Fuse::Reactive::InfixOperator_type*)uClassType::New("Fuse.Reactive.NullCoalesce", options);
    type->fp_build_ = NullCoalesce_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))NullCoalesce__Compute_fn;
    type->fp_get_IsLeftOptional = (void(*)(::g::Fuse::Reactive::BinaryOperator*, bool*))NullCoalesce__get_IsLeftOptional_fn;
    type->fp_get_Symbol = (void(*)(::g::Fuse::Reactive::InfixOperator*, uString**))NullCoalesce__get_Symbol_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// protected override sealed object Compute(object left, object right) :74
void NullCoalesce__Compute_fn(NullCoalesce* __this, uObject* left, uObject* right, uObject** __retval)
{
    if (left != NULL)
        return *__retval = left, void();
    else
        return *__retval = right, void();
}

// protected override sealed bool get_IsLeftOptional() :72
void NullCoalesce__get_IsLeftOptional_fn(NullCoalesce* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public override sealed string get_Symbol() :80
void NullCoalesce__get_Symbol_fn(NullCoalesce* __this, uString** __retval)
{
    return *__retval = ::STRINGS[76/*"??"*/], void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/ObjectMirror.uno
// -----------------------------------------------------------------------------

// internal sealed class ObjectMirror :6
// {
static void ObjectMirror_build(uType* type)
{
    ::TYPES[42] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[52] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Reactive::ValueMirror_typeof();
    ::TYPES[10] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[53] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(7/*ToArray<string>*/, ::g::Uno::String_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::IRaw_typeof(), offsetof(ObjectMirror_type, interface0),
        ::g::Fuse::IObject_typeof(), offsetof(ObjectMirror_type, interface1));
    type->SetFields(1,
        ::TYPES[42/*Uno.Collections.Dictionary<string, object>*/], offsetof(ObjectMirror, _props), 0);
}

ObjectMirror_type* ObjectMirror_typeof()
{
    static uSStrong<ObjectMirror_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ValueMirror_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ObjectMirror);
    options.TypeSize = sizeof(ObjectMirror_type);
    type = (ObjectMirror_type*)uClassType::New("Fuse.Reactive.ObjectMirror", options);
    type->fp_build_ = ObjectMirror_build;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Reactive::ValueMirror*))ObjectMirror__Unsubscribe_fn;
    type->interface1.fp_ContainsKey = (void(*)(uObject*, uString*, bool*))ObjectMirror__ContainsKey_fn;
    type->interface1.fp_get_Item = (void(*)(uObject*, uString*, uObject**))ObjectMirror__get_Item_fn;
    type->interface1.fp_get_Keys = (void(*)(uObject*, uArray**))ObjectMirror__get_Keys_fn;
    type->interface0.fp_get_Raw = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::ValueMirror__get_Raw_fn;
    return type;
}

// internal ObjectMirror(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj) :10
void ObjectMirror__ctor_1_fn(ObjectMirror* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj)
{
    __this->ctor_1(worker, obj);
}

// public bool ContainsKey(string key) :29
void ObjectMirror__ContainsKey_fn(ObjectMirror* __this, uString* key, bool* __retval)
{
    *__retval = __this->ContainsKey(key);
}

// public object get_Item(string key) :36
void ObjectMirror__get_Item_fn(ObjectMirror* __this, uString* key, uObject** __retval)
{
    *__retval = __this->Item(key);
}

// public string[] get_Keys() :41
void ObjectMirror__get_Keys_fn(ObjectMirror* __this, uArray** __retval)
{
    *__retval = __this->Keys();
}

// internal ObjectMirror New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj) :10
void ObjectMirror__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, ObjectMirror** __retval)
{
    *__retval = ObjectMirror::New1(worker, obj);
}

// public override sealed void Unsubscribe() :20
void ObjectMirror__Unsubscribe_fn(ObjectMirror* __this)
{
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > ret4;
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(__this->_props), &ret4), ret4);

    {
        const auto __finally_fun = [&]()
        {
            enum1.Dispose(::TYPES[52/*Uno.Collections.Dictionary<string, object>.Enumerator*/]);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        while (enum1.MoveNext(::TYPES[52/*Uno.Collections.Dictionary<string, object>.Enumerator*/]))
        {
            ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong<uObject*> > p = enum1.Current(::TYPES[52/*Uno.Collections.Dictionary<string, object>.Enumerator*/]);
            ::g::Fuse::Reactive::ValueMirror* d = uAs< ::g::Fuse::Reactive::ValueMirror*>(p.Value(::TYPES[10/*Uno.Collections.KeyValuePair<string, object>*/]), ::TYPES[5/*Fuse.Reactive.ValueMirror*/]);

            if (d != NULL)
                uPtr(d)->Unsubscribe();
        }
    }
}

// internal ObjectMirror(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj) [instance] :10
void ObjectMirror::ctor_1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj)
{
    _props = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[42/*Uno.Collections.Dictionary<string, object>*/]));
    ctor_(obj);
    uArray* k = uPtr(obj)->Keys();

    for (int i = 0; i < uPtr(k)->Length(); i++)
    {
        uString* s = uPtr(k)->Strong<uString*>(i);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_props), s, uPtr(worker)->Reflect(uPtr(obj)->Item(s)));
    }
}

// public bool ContainsKey(string key) [instance] :29
bool ObjectMirror::ContainsKey(uString* key)
{
    bool ret3;
    return (::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(_props), key, &ret3), ret3);
}

// public object get_Item(string key) [instance] :36
uObject* ObjectMirror::Item(uString* key)
{
    uObject* ret5;
    return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(_props), key, &ret5), ret5);
}

// public string[] get_Keys() [instance] :41
uArray* ObjectMirror::Keys()
{
    return (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[53/*Uno.Collections.EnumerableExtensions.ToArray<string>*/], (uObject*)((::g::Uno::Collections::Dictionary__KeyCollection*)uPtr(_props)->Keys()));
}

// internal ObjectMirror New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj) [static] :10
ObjectMirror* ObjectMirror::New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj)
{
    ObjectMirror* obj2 = (ObjectMirror*)uNew(ObjectMirror_typeof());
    obj2->ctor_1(worker, obj);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/Observable.uno
// ---------------------------------------------------------------------------

// internal sealed class Observable :6
// {
static void Observable_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::IRaw_typeof(), offsetof(Observable_type, interface0),
        ::g::Fuse::IArray_typeof(), offsetof(Observable_type, interface1),
        ::g::Fuse::Reactive::IObservable_typeof(), offsetof(Observable_type, interface2));
    type->SetFields(1,
        ::g::Uno::Bool_typeof(), offsetof(Observable, _isUnsubscribed), 0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(Observable, _observable), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(Observable, _observeChange), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(Observable__Subscription_typeof(), NULL), offsetof(Observable, _observers), 0,
        ::g::Uno::Bool_typeof(), offsetof(Observable, _usingObservers), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof(), NULL), offsetof(Observable, _values), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(Observable, _worker), 0);
}

Observable_type* Observable_typeof()
{
    static uSStrong<Observable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ListMirror_typeof();
    options.FieldCount = 8;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Observable);
    options.TypeSize = sizeof(Observable_type);
    type = (Observable_type*)uClassType::New("Fuse.Reactive.Observable", options);
    type->fp_build_ = Observable_build;
    type->fp_get_Item = (void(*)(::g::Fuse::Reactive::ListMirror*, int*, uObject**))Observable__get_Item_fn;
    type->fp_get_Length = (void(*)(::g::Fuse::Reactive::ListMirror*, int*))Observable__get_Length_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Reactive::ValueMirror*))Observable__Unsubscribe_fn;
    type->interface2.fp_Subscribe = (void(*)(uObject*, uObject*, uObject**))Observable__Subscribe_fn;
    type->interface1.fp_get_Length = (void(*)(uObject*, int*))Observable__get_Length_fn;
    type->interface1.fp_get_Item = (void(*)(uObject*, int*, uObject**))Observable__get_Item_fn;
    type->interface0.fp_get_Raw = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::ValueMirror__get_Raw_fn;
    return type;
}

// internal Observable(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, bool suppressCallback) :153
void Observable__ctor_2_fn(Observable* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, bool* suppressCallback)
{
    __this->ctor_2(worker, obj, *suppressCallback);
}

// internal static Fuse.Reactive.Observable Create(Fuse.Reactive.ThreadWorker worker) :161
void Observable__Create_fn(::g::Fuse::Reactive::ThreadWorker* worker, Observable** __retval)
{
    *__retval = Observable::Create(worker);
}

// public bool get_IsUnsubscribed() :229
void Observable__get_IsUnsubscribed_fn(Observable* __this, bool* __retval)
{
    *__retval = __this->IsUnsubscribed();
}

// public override sealed object get_Item(int index) :13
void Observable__get_Item_fn(Observable* __this, int* index, uObject** __retval)
{
    uObject* ret4;
    int index_ = *index;
    return *__retval = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_values), uCRef<int>(index_), &ret4), ret4), void();
}

// public override sealed int get_Length() :9
void Observable__get_Length_fn(Observable* __this, int* __retval)
{
    return *__retval = uPtr(__this->_values)->Count(), void();
}

// internal Observable New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, bool suppressCallback) :153
void Observable__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, bool* suppressCallback, Observable** __retval)
{
    *__retval = Observable::New1(worker, obj, *suppressCallback);
}

// internal Fuse.Scripting.Object get_Object() :149
void Observable__get_Object_fn(Observable* __this, ::g::Fuse::Scripting::Object** __retval)
{
    *__retval = __this->Object();
}

// private object ObserveChange(object[] args) :175
void Observable__ObserveChange_fn(Observable* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->ObserveChange(args);
}

// private void ObserversCleanup() :25
void Observable__ObserversCleanup_fn(Observable* __this)
{
    __this->ObserversCleanup();
}

// private void RemoveSubscriber() :252
void Observable__RemoveSubscriber_fn(Observable* __this)
{
    __this->RemoveSubscriber();
}

// public void SetValue(int index, object value) :17
void Observable__SetValue_fn(Observable* __this, int* index, uObject* value)
{
    __this->SetValue(*index, value);
}

// public Fuse.Reactive.ISubscription Subscribe(Fuse.Reactive.IObserver observer) :141
void Observable__Subscribe_fn(Observable* __this, uObject* observer, uObject** __retval)
{
    *__retval = __this->Subscribe(observer);
}

// private int ToInt(object obj) :166
void Observable__ToInt_fn(Observable* __this, uObject* obj, int* __retval)
{
    *__retval = __this->ToInt(obj);
}

// public override sealed void Unsubscribe() :232
void Observable__Unsubscribe_fn(Observable* __this)
{
    __this->UnsubscribeValues();

    if (!__this->_isUnsubscribed)
    {
        __this->_isUnsubscribed = true;
        uPtr(__this->_worker)->Invoke(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)Observable__RemoveSubscriber_fn, __this));
    }
}

// private void UnsubscribeValues() :243
void Observable__UnsubscribeValues_fn(Observable* __this)
{
    __this->UnsubscribeValues();
}

// internal Observable(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, bool suppressCallback) [instance] :153
void Observable::ctor_2(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, bool suppressCallback)
{
    _values = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[54/*Uno.Collections.List`1*/]->MakeType(uObject_typeof(), NULL)));
    _observers = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[54/*Uno.Collections.List`1*/]->MakeType(Observable__Subscription_typeof(), NULL)));
    ctor_1(obj);
    _worker = worker;
    _observable = obj;
    _observeChange = uPtr(uPtr(worker)->Context())->CallbackToFunction(uDelegate::New(::TYPES[27/*Fuse.Scripting.Callback*/], (void*)Observable__ObserveChange_fn, this));
    uPtr(obj)->CallMethod(uString::Const("addSubscriber"), uArray::Init<uObject*>(::TYPES[4/*object[]*/], 2, (::g::Fuse::Scripting::Function*)_observeChange, uBox(::TYPES[23/*bool*/], suppressCallback)));
}

// public bool get_IsUnsubscribed() [instance] :229
bool Observable::IsUnsubscribed()
{
    return _isUnsubscribed;
}

// internal Fuse.Scripting.Object get_Object() [instance] :149
::g::Fuse::Scripting::Object* Observable::Object()
{
    return _observable;
}

// private object ObserveChange(object[] args) [instance] :175
uObject* Observable::ObserveChange(uArray* args)
{
    uString* op = uAs<uString*>(uPtr(args)->Strong<uObject*>(1), ::TYPES[24/*string*/]);
    int origin = ToInt(args->Strong<uObject*>(2));

    if (::g::Uno::String::op_Equality(op, uString::Const("set")))
        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)Observable__Operation__Perform_fn, Observable__Set::New1(this, uPtr(_worker)->Reflect(uPtr(args)->Strong<uObject*>(3)), origin)));
    else if (::g::Uno::String::op_Equality(op, ::STRINGS[101/*"clear"*/]))
        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)Observable__Operation__Perform_fn, Observable__Clear::New1(this, origin)));
    else if (::g::Uno::String::op_Equality(op, uString::Const("newAt")))
        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)Observable__Operation__Perform_fn, Observable__NewAt::New1(this, ToInt(uPtr(args)->Strong<uObject*>(3)), uPtr(_worker)->Reflect(uPtr(args)->Strong<uObject*>(4)))));
    else if (::g::Uno::String::op_Equality(op, uString::Const("newAll")))
        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)Observable__Operation__Perform_fn, Observable__NewAll::New1(this, uCast< ::g::Fuse::Reactive::ArrayMirror*>(uPtr(_worker)->Reflect(uPtr(args)->Strong<uObject*>(3)), ::g::Fuse::Reactive::ArrayMirror_typeof()), origin)));
    else if (::g::Uno::String::op_Equality(op, uString::Const("add")))
        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)Observable__Operation__Perform_fn, Observable__Add::New1(this, uPtr(_worker)->Reflect(uPtr(args)->Strong<uObject*>(3)))));
    else if (::g::Uno::String::op_Equality(op, uString::Const("removeAt")))
        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)Observable__Operation__Perform_fn, Observable__RemoveAt::New1(this, ToInt(uPtr(args)->Strong<uObject*>(3)))));
    else if (::g::Uno::String::op_Equality(op, uString::Const("insertAt")))
        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)Observable__Operation__Perform_fn, Observable__InsertAt::New1(this, ToInt(uPtr(args)->Strong<uObject*>(3)), uPtr(_worker)->Reflect(uPtr(args)->Strong<uObject*>(4)))));
    else if (::g::Uno::String::op_Equality(op, uString::Const("removeRange")))
        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)Observable__Operation__Perform_fn, Observable__RemoveRange::New1(this, ToInt(uPtr(args)->Strong<uObject*>(3)), ToInt(uPtr(args)->Strong<uObject*>(4)))));
    else if (::g::Uno::String::op_Equality(op, uString::Const("insertAll")))
        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)Observable__Operation__Perform_fn, Observable__InsertAll::New1(this, ToInt(uPtr(args)->Strong<uObject*>(3)), uCast< ::g::Fuse::Reactive::ArrayMirror*>(uPtr(_worker)->Reflect(uPtr(args)->Strong<uObject*>(4)), ::g::Fuse::Reactive::ArrayMirror_typeof()))));
    else if (::g::Uno::String::op_Equality(op, uString::Const("failed")))
        ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)Observable__Operation__Perform_fn, Observable__Failed::New1(this, uAs<uString*>(uPtr(args)->Strong<uObject*>(3), ::TYPES[24/*string*/]))));
    else
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(uString::Const("Unhandled observable operation: "), op)));

    return NULL;
}

// private void ObserversCleanup() [instance] :25
void Observable::ObserversCleanup()
{
    Observable__Subscription* ret2;

    if (_usingObservers)
        return;

    for (int i = uPtr(_observers)->Count() - 1; i >= 0; --i)
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_observers), uCRef<int>(i), &ret2), ret2))->Removed())
            uPtr(_observers)->RemoveAt(i);
}

// private void RemoveSubscriber() [instance] :252
void Observable::RemoveSubscriber()
{
    uPtr(_observable)->CallMethod(uString::Const("removeSubscriber"), uArray::Init<uObject*>(::TYPES[4/*object[]*/], 1, (::g::Fuse::Scripting::Function*)_observeChange));
    _observeChange = NULL;
    _observable = NULL;
}

// public void SetValue(int index, object value) [instance] :17
void Observable::SetValue(int index, uObject* value)
{
    ::g::Uno::Collections::List__set_Item_fn(uPtr(_values), uCRef<int>(index), value);
}

// public Fuse.Reactive.ISubscription Subscribe(Fuse.Reactive.IObserver observer) [instance] :141
uObject* Observable::Subscribe(uObject* observer)
{
    return (uObject*)Observable__Subscription::New2(this, observer);
}

// private int ToInt(object obj) [instance] :166
int Observable::ToInt(uObject* obj)
{
    if (uIs(obj, ::TYPES[20/*int*/]))
        return uUnbox<int>(::TYPES[20/*int*/], obj);

    if (uIs(obj, ::TYPES[22/*double*/]))
        return (int)uUnbox<double>(::TYPES[22/*double*/], obj);

    return -1;
}

// private void UnsubscribeValues() [instance] :243
void Observable::UnsubscribeValues()
{
    uObject* ret3;

    for (int i = 0; i < uPtr(_values)->Count(); i++)
    {
        ::g::Fuse::Reactive::ValueMirror* vm = uAs< ::g::Fuse::Reactive::ValueMirror*>((::g::Uno::Collections::List__get_Item_fn(uPtr(_values), uCRef<int>(i), &ret3), ret3), ::TYPES[5/*Fuse.Reactive.ValueMirror*/]);

        if (vm != NULL)
            uPtr(vm)->Unsubscribe();
    }
}

// internal static Fuse.Reactive.Observable Create(Fuse.Reactive.ThreadWorker worker) [static] :161
Observable* Observable::Create(::g::Fuse::Reactive::ThreadWorker* worker)
{
    return Observable::New1(worker, uCast< ::g::Fuse::Scripting::Object*>(uPtr(uPtr(uPtr(worker)->Context())->Observable())->Call(uArray::New(::TYPES[4/*object[]*/], 0)), ::TYPES[16/*Fuse.Scripting.Object*/]), true);
}

// internal Observable New(Fuse.Reactive.ThreadWorker worker, Fuse.Scripting.Object obj, bool suppressCallback) [static] :153
Observable* Observable::New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, bool suppressCallback)
{
    Observable* obj1 = (Observable*)uNew(Observable_typeof());
    obj1->ctor_2(worker, obj, suppressCallback);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/Instance.Data.uno
// ----------------------------------------------------------------------------

// private sealed class Instantiator.ObservableLink :134
// {
static void Instantiator__ObservableLink_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::ValueObserver_type, interface0),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::ValueObserver_type, interface1));
    type->SetFields(2,
        uObject_typeof(), offsetof(Instantiator__ObservableLink, _currentData), 0,
        ::g::Fuse::Reactive::Instantiator__WindowItem_typeof(), offsetof(Instantiator__ObservableLink, _target), 0);
}

::g::Fuse::Reactive::ValueObserver_type* Instantiator__ObservableLink_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ValueObserver_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ValueObserver_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Instantiator__ObservableLink);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ValueObserver_type);
    type = (::g::Fuse::Reactive::ValueObserver_type*)uClassType::New("Fuse.Reactive.Instantiator.ObservableLink", options);
    type->fp_build_ = Instantiator__ObservableLink_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::ValueObserver*))Instantiator__ObservableLink__Dispose_fn;
    type->fp_PushData = (void(*)(::g::Fuse::Reactive::ValueObserver*, uObject*))Instantiator__ObservableLink__PushData_fn;
    type->interface1.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnClear_fn;
    type->interface1.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnSet_fn;
    type->interface1.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnAdd_fn;
    type->interface1.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnNewAt_fn;
    type->interface1.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnNewAll = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnNewAll_fn;
    type->interface1.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface1.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Instantiator__ObservableLink__Dispose_fn;
    return type;
}

// public ObservableLink(Fuse.Reactive.IObservable obs, Fuse.Reactive.Instantiator.WindowItem target) :138
void Instantiator__ObservableLink__ctor_1_fn(Instantiator__ObservableLink* __this, uObject* obs, ::g::Fuse::Reactive::Instantiator__WindowItem* target)
{
    __this->ctor_1(obs, target);
}

// public object get_Data() :152
void Instantiator__ObservableLink__get_Data_fn(Instantiator__ObservableLink* __this, uObject** __retval)
{
    *__retval = __this->Data();
}

// public override sealed void Dispose() :144
void Instantiator__ObservableLink__Dispose_fn(Instantiator__ObservableLink* __this)
{
    ::g::Fuse::Reactive::ValueObserver__Dispose_fn(__this);
    __this->_target = NULL;
    __this->_currentData = NULL;
}

// public ObservableLink New(Fuse.Reactive.IObservable obs, Fuse.Reactive.Instantiator.WindowItem target) :138
void Instantiator__ObservableLink__New1_fn(uObject* obs, ::g::Fuse::Reactive::Instantiator__WindowItem* target, Instantiator__ObservableLink** __retval)
{
    *__retval = Instantiator__ObservableLink::New1(obs, target);
}

// protected override sealed void PushData(object newData) :154
void Instantiator__ObservableLink__PushData_fn(Instantiator__ObservableLink* __this, uObject* newData)
{
    ::g::Fuse::Node* ret2;

    if (__this->_target == NULL)
        return;

    uObject* oldData = __this->_currentData;
    __this->_currentData = newData;

    for (int i = 0; i < uPtr(uPtr(__this->_target)->Nodes)->Count(); ++i)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(__this->_target)->Nodes), uCRef<int>(i), &ret2), ret2))->BroadcastDataChange(oldData, newData);
}

// public ObservableLink(Fuse.Reactive.IObservable obs, Fuse.Reactive.Instantiator.WindowItem target) [instance] :138
void Instantiator__ObservableLink::ctor_1(uObject* obs, ::g::Fuse::Reactive::Instantiator__WindowItem* target)
{
    ctor_();
    _target = target;
    Subscribe(obs);
}

// public object get_Data() [instance] :152
uObject* Instantiator__ObservableLink::Data()
{
    return _currentData;
}

// public ObservableLink New(Fuse.Reactive.IObservable obs, Fuse.Reactive.Instantiator.WindowItem target) [static] :138
Instantiator__ObservableLink* Instantiator__ObservableLink::New1(uObject* obs, ::g::Fuse::Reactive::Instantiator__WindowItem* target)
{
    Instantiator__ObservableLink* obj1 = (Instantiator__ObservableLink*)uNew(Instantiator__ObservableLink_typeof());
    obj1->ctor_1(obs, target);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/ObservableProperty.uno
// -----------------------------------------------------------------------------------

// internal class ObservableProperty :26
// {
static void ObservableProperty_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::UX::Selector_typeof());
    type->SetInterfaces(
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(ObservableProperty_type, interface0),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(ObservableProperty_type, interface1));
    type->SetFields(0,
        ::g::Fuse::Scripting::Object_typeof(), offsetof(ObservableProperty, _obj), 0,
        ::g::Fuse::Reactive::Observable_typeof(), offsetof(ObservableProperty, _observable), 0,
        ::g::Uno::UX::Property_typeof(), offsetof(ObservableProperty, _property), 0,
        ::g::Fuse::Reactive::ISubscription_typeof(), offsetof(ObservableProperty, _subscription), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(ObservableProperty, _worker), 0);
}

ObservableProperty_type* ObservableProperty_typeof()
{
    static uSStrong<ObservableProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ObservableProperty);
    options.TypeSize = sizeof(ObservableProperty_type);
    type = (ObservableProperty_type*)uClassType::New("Fuse.Reactive.ObservableProperty", options);
    type->fp_build_ = ObservableProperty_build;
    type->interface0.fp_OnClear = (void(*)(uObject*))ObservableProperty__FuseReactiveIObserverOnClear_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, uObject*))ObservableProperty__FuseReactiveIObserverOnNewAll_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))ObservableProperty__FuseReactiveIObserverOnNewAt_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))ObservableProperty__FuseReactiveIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))ObservableProperty__FuseReactiveIObserverOnAdd_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int*))ObservableProperty__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))ObservableProperty__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))ObservableProperty__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))ObservableProperty__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public ObservableProperty(Fuse.Reactive.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) :32
void ObservableProperty__ctor__fn(ObservableProperty* __this, ::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p)
{
    __this->ctor_(w, obj, p);
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :95
void ObservableProperty__FuseReactiveIObserverOnAdd_fn(ObservableProperty* __this, uObject* addedValue)
{
}

// private void Fuse.Reactive.IObserver.OnClear() :77
void ObservableProperty__FuseReactiveIObserverOnClear_fn(ObservableProperty* __this)
{
    if (::g::Uno::Type::IsClass(uPtr(uPtr(__this->_property)->PropertyType())))
        uPtr(__this->_property)->SetAsObject1(NULL, (uObject*)__this);
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :107
void ObservableProperty__FuseReactiveIObserverOnFailed_fn(ObservableProperty* __this, uString* message)
{
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :103
void ObservableProperty__FuseReactiveIObserverOnInsertAt_fn(ObservableProperty* __this, int* index, uObject* value)
{
    int index_ = *index;

    if (index_ == 0)
        __this->Set(value);
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray values) :83
void ObservableProperty__FuseReactiveIObserverOnNewAll_fn(ObservableProperty* __this, uObject* values)
{
    if (::g::Fuse::IArray::Length(uInterface(uPtr(values), ::TYPES[30/*Fuse.IArray*/])) == 1)
        __this->Set(::g::Fuse::IArray::Item(uInterface(uPtr(values), ::TYPES[30/*Fuse.IArray*/]), 0));
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object newValue) :87
void ObservableProperty__FuseReactiveIObserverOnNewAt_fn(ObservableProperty* __this, int* index, uObject* newValue)
{
    int index_ = *index;

    if (index_ == 0)
        __this->Set(newValue);
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :99
void ObservableProperty__FuseReactiveIObserverOnRemoveAt_fn(ObservableProperty* __this, int* index)
{
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :91
void ObservableProperty__FuseReactiveIObserverOnSet_fn(ObservableProperty* __this, uObject* newValue)
{
    __this->Set(newValue);
}

// internal Fuse.Reactive.Observable GetObservable() :43
void ObservableProperty__GetObservable_fn(ObservableProperty* __this, ::g::Fuse::Reactive::Observable** __retval)
{
    *__retval = __this->GetObservable();
}

// public ObservableProperty New(Fuse.Reactive.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) :32
void ObservableProperty__New1_fn(::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p, ObservableProperty** __retval)
{
    *__retval = ObservableProperty::New1(w, obj, p);
}

// private void PushValue(object val) :145
void ObservableProperty__PushValue_fn(ObservableProperty* __this, uObject* val)
{
    __this->PushValue(val);
}

// public void Reset() :61
void ObservableProperty__Reset_fn(ObservableProperty* __this)
{
    __this->Reset();
}

// private void Set(object value) :112
void ObservableProperty__Set_fn(ObservableProperty* __this, uObject* value)
{
    __this->Set(value);
}

// private void Subscribe() :54
void ObservableProperty__Subscribe_fn(ObservableProperty* __this)
{
    __this->Subscribe();
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :119
void ObservableProperty__UnoUXIPropertyListenerOnPropertyChanged_fn(ObservableProperty* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    ::g::Uno::UX::Selector prop_ = *prop;

    if (::g::Uno::UX::Selector__op_Inequality(prop_, uPtr(__this->_property)->Name()))
        return;

    if (obj != uPtr(__this->_property)->Object())
        return;

    if (__this->_subscription == NULL)
        return;

    uPtr(__this->_worker)->Invoke(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)ObservableProperty__PushCapture__Run_fn, ObservableProperty__PushCapture::New1(uDelegate::New(::g::Uno::Action1_typeof()->MakeType(uObject_typeof(), NULL), (void*)ObservableProperty__PushValue_fn, __this), uPtr(__this->_property)->GetAsObject1())));
}

// public ObservableProperty(Fuse.Reactive.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) [instance] :32
void ObservableProperty::ctor_(::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p)
{
    _obj = obj;
    _worker = w;
    _property = p;
}

// internal Fuse.Reactive.Observable GetObservable() [instance] :43
::g::Fuse::Reactive::Observable* ObservableProperty::GetObservable()
{
    if (_observable == NULL)
    {
        _observable = ::g::Fuse::Reactive::Observable::Create(_worker);
        Subscribe();
    }

    return _observable;
}

// private void PushValue(object val) [instance] :145
void ObservableProperty::PushValue(uObject* val)
{
    if (val != NULL)
        ::g::Fuse::Reactive::ISubscription::SetExclusive(uInterface(uPtr(_subscription), ::TYPES[36/*Fuse.Reactive.ISubscription*/]), val);
    else
        ::g::Fuse::Reactive::ISubscription::ClearExclusive(uInterface(uPtr(_subscription), ::TYPES[36/*Fuse.Reactive.ISubscription*/]));
}

// public void Reset() [instance] :61
void ObservableProperty::Reset()
{
    if (_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[3/*Uno.IDisposable*/]));
        _subscription = NULL;
        uPtr(_property)->RemoveListener((uObject*)this);
    }

    if (_observable != NULL)
    {
        uPtr(_observable)->Unsubscribe();
        _observable = NULL;
    }
}

// private void Set(object value) [instance] :112
void ObservableProperty::Set(uObject* value)
{
    uObject* res;

    if (::g::Fuse::Marshal::TryConvertTo(uPtr(_property)->PropertyType(), value, &res, this))
        uPtr(_property)->SetAsObject1(res, (uObject*)this);
}

// private void Subscribe() [instance] :54
void ObservableProperty::Subscribe()
{
    _subscription = uPtr(_observable)->Subscribe((uObject*)this);
    PushValue(uPtr(_property)->GetAsObject1());
    uPtr(_property)->AddListener((uObject*)this);
}

// public ObservableProperty New(Fuse.Reactive.ThreadWorker w, Fuse.Scripting.Object obj, Uno.UX.Property p) [static] :32
ObservableProperty* ObservableProperty::New1(::g::Fuse::Reactive::ThreadWorker* w, ::g::Fuse::Scripting::Object* obj, ::g::Uno::UX::Property* p)
{
    ObservableProperty* obj1 = (ObservableProperty*)uNew(ObservableProperty_typeof());
    obj1->ctor_(w, obj, p);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Subscription.uno
// ------------------------------------------------------------------------------

// private sealed class InnerListener.ObservableSubscription :70
// {
static void InnerListener__ObservableSubscription_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::ValueObserver_type, interface0),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::ValueObserver_type, interface1));
    type->SetFields(2,
        ::g::Fuse::Reactive::InnerListener_typeof(), offsetof(InnerListener__ObservableSubscription, _listener), 0,
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(InnerListener__ObservableSubscription, _source), 0);
}

::g::Fuse::Reactive::ValueObserver_type* InnerListener__ObservableSubscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ValueObserver_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ValueObserver_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(InnerListener__ObservableSubscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ValueObserver_type);
    type = (::g::Fuse::Reactive::ValueObserver_type*)uClassType::New("Fuse.Reactive.InnerListener.ObservableSubscription", options);
    type->fp_build_ = InnerListener__ObservableSubscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::ValueObserver*))InnerListener__ObservableSubscription__Dispose_fn;
    type->fp_PushData = (void(*)(::g::Fuse::Reactive::ValueObserver*, uObject*))InnerListener__ObservableSubscription__PushData_fn;
    type->interface1.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnClear_fn;
    type->interface1.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnSet_fn;
    type->interface1.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnAdd_fn;
    type->interface1.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnNewAt_fn;
    type->interface1.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnNewAll = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnNewAll_fn;
    type->interface1.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface1.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))InnerListener__ObservableSubscription__Dispose_fn;
    return type;
}

// public ObservableSubscription(Fuse.Reactive.IExpression source, Fuse.Reactive.IObservable obs, Fuse.Reactive.InnerListener listener) :75
void InnerListener__ObservableSubscription__ctor_1_fn(InnerListener__ObservableSubscription* __this, uObject* source, uObject* obs, ::g::Fuse::Reactive::InnerListener* listener)
{
    __this->ctor_1(source, obs, listener);
}

// public override sealed void Dispose() :82
void InnerListener__ObservableSubscription__Dispose_fn(InnerListener__ObservableSubscription* __this)
{
    ::g::Fuse::Reactive::ValueObserver__Dispose_fn(__this);
    __this->_source = NULL;
    __this->_listener = NULL;
}

// public ObservableSubscription New(Fuse.Reactive.IExpression source, Fuse.Reactive.IObservable obs, Fuse.Reactive.InnerListener listener) :75
void InnerListener__ObservableSubscription__New1_fn(uObject* source, uObject* obs, ::g::Fuse::Reactive::InnerListener* listener, InnerListener__ObservableSubscription** __retval)
{
    *__retval = InnerListener__ObservableSubscription::New1(source, obs, listener);
}

// protected override sealed void PushData(object newValue) :89
void InnerListener__ObservableSubscription__PushData_fn(InnerListener__ObservableSubscription* __this, uObject* newValue)
{
    uPtr(__this->_listener)->OnNewData(__this->_source, newValue);
}

// public ObservableSubscription(Fuse.Reactive.IExpression source, Fuse.Reactive.IObservable obs, Fuse.Reactive.InnerListener listener) [instance] :75
void InnerListener__ObservableSubscription::ctor_1(uObject* source, uObject* obs, ::g::Fuse::Reactive::InnerListener* listener)
{
    ctor_();
    _listener = listener;
    _source = source;
    Subscribe(obs);
}

// public ObservableSubscription New(Fuse.Reactive.IExpression source, Fuse.Reactive.IObservable obs, Fuse.Reactive.InnerListener listener) [static] :75
InnerListener__ObservableSubscription* InnerListener__ObservableSubscription::New1(uObject* source, uObject* obs, ::g::Fuse::Reactive::InnerListener* listener)
{
    InnerListener__ObservableSubscription* obj1 = (InnerListener__ObservableSubscription*)uNew(InnerListener__ObservableSubscription_typeof());
    obj1->ctor_1(source, obs, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.3.1/ObserverMap.uno
// -----------------------------------------------------------------

// internal abstract class ObserverMap<T> :23
// {
static void ObserverMap_build(uType* type)
{
    ::TYPES[54] = ::g::Uno::Collections::List_typeof();
    ::TYPES[32] = ::g::Fuse::Reactive::IObservable_typeof();
    ::TYPES[2] = ::g::Fuse::Reactive::IObserver_typeof();
    ::TYPES[3] = ::g::Uno::IDisposable_typeof();
    ::TYPES[30] = ::g::Fuse::IArray_typeof();
    ::TYPES[55] = ::g::Fuse::Reactive::UnmappedView_typeof();
    ::TYPES[36] = ::g::Fuse::Reactive::ISubscription_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::List_typeof()->MakeType(type->T(0), NULL),
        ::g::Fuse::Reactive::UnmappedView_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::TYPES[2/*Fuse.Reactive.IObserver*/], offsetof(ObserverMap_type, interface0));
    type->SetFields(0,
        ::TYPES[54/*Uno.Collections.List`1*/]->MakeType(type->T(0), NULL), offsetof(ObserverMap, _list), 0,
        ::TYPES[32/*Fuse.Reactive.IObservable*/], offsetof(ObserverMap, _observable), 0,
        ::TYPES[2/*Fuse.Reactive.IObserver*/], offsetof(ObserverMap, _slave), 0,
        ::TYPES[30/*Fuse.IArray*/], offsetof(ObserverMap, _source), 0,
        ::TYPES[36/*Fuse.Reactive.ISubscription*/], offsetof(ObserverMap, _subscription), 0);
}

ObserverMap_type* ObserverMap_typeof()
{
    static uSStrong<ObserverMap_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(ObserverMap);
    options.TypeSize = sizeof(ObserverMap_type);
    type = (ObserverMap_type*)uClassType::New("Fuse.Reactive.ObserverMap`1", options);
    type->fp_build_ = ObserverMap_build;
    type->fp_OnUpdated = ObserverMap__OnUpdated_fn;
    type->interface0.fp_OnClear = (void(*)(uObject*))ObserverMap__FuseReactiveIObserverOnClear_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, uObject*))ObserverMap__FuseReactiveIObserverOnNewAll_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))ObserverMap__FuseReactiveIObserverOnNewAt_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))ObserverMap__FuseReactiveIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))ObserverMap__FuseReactiveIObserverOnAdd_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int*))ObserverMap__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))ObserverMap__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))ObserverMap__FuseReactiveIObserverOnFailed_fn;
    return type;
}

// protected generated ObserverMap() :23
void ObserverMap__ctor__fn(ObserverMap* __this)
{
    __this->ctor_();
}

// public void Add(T value) :84
void ObserverMap__Add_fn(ObserverMap* __this, uObject* value)
{
    __this->Add(value);
}

// public void Attach(Fuse.IArray src, [Fuse.Reactive.IObserver slave]) :53
void ObserverMap__Attach_fn(ObserverMap* __this, uObject* src, uObject* slave)
{
    __this->Attach(src, slave);
}

// public void Clear() :102
void ObserverMap__Clear_fn(ObserverMap* __this)
{
    __this->Clear();
}

// public int get_Count() :33
void ObserverMap__get_Count_fn(ObserverMap* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public void Detach() :72
void ObserverMap__Detach_fn(ObserverMap* __this)
{
    __this->Detach();
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :164
void ObserverMap__FuseReactiveIObserverOnAdd_fn(ObserverMap* __this, uObject* addedValue)
{
    if (__this->_subscription == NULL)
        return;

    ::g::Uno::Collections::List__Add_fn(uPtr(__this->_list), __this->Map(addedValue));
    __this->OnUpdated();

    if (__this->_slave != NULL)
        ::g::Fuse::Reactive::IObserver::OnAdd(uInterface(uPtr(__this->_slave), ::TYPES[2/*Fuse.Reactive.IObserver*/]), addedValue);
}

// private void Fuse.Reactive.IObserver.OnClear() :117
void ObserverMap__FuseReactiveIObserverOnClear_fn(ObserverMap* __this)
{
    if (__this->_subscription == NULL)
        return;

    uPtr(__this->_list)->Clear();
    __this->OnUpdated();

    if (__this->_slave != NULL)
        ::g::Fuse::Reactive::IObserver::OnClear(uInterface(uPtr(__this->_slave), ::TYPES[2/*Fuse.Reactive.IObserver*/]));
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :197
void ObserverMap__FuseReactiveIObserverOnFailed_fn(ObserverMap* __this, uString* message)
{
    if (__this->_subscription == NULL)
        return;

    uPtr(__this->_list)->Clear();
    __this->OnUpdated();

    if (__this->_slave != NULL)
        ::g::Fuse::Reactive::IObserver::OnFailed(uInterface(uPtr(__this->_slave), ::TYPES[2/*Fuse.Reactive.IObserver*/]), message);
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :186
void ObserverMap__FuseReactiveIObserverOnInsertAt_fn(ObserverMap* __this, int* index, uObject* value)
{
    int index_ = *index;

    if (__this->_subscription == NULL)
        return;

    ::g::Uno::Collections::List__Insert_fn(uPtr(__this->_list), uCRef<int>(index_), __this->Map(value));
    __this->OnUpdated();

    if (__this->_slave != NULL)
        ::g::Fuse::Reactive::IObserver::OnInsertAt(uInterface(uPtr(__this->_slave), ::TYPES[2/*Fuse.Reactive.IObserver*/]), index_, value);
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray values) :128
void ObserverMap__FuseReactiveIObserverOnNewAll_fn(ObserverMap* __this, uObject* values)
{
    if (__this->_subscription == NULL)
        return;

    uPtr(__this->_list)->Clear();

    for (int i = 0; i < ::g::Fuse::IArray::Length(uInterface(uPtr(values), ::TYPES[30/*Fuse.IArray*/])); ++i)
        ::g::Uno::Collections::List__Add_fn(uPtr(__this->_list), __this->Map(::g::Fuse::IArray::Item(uInterface(uPtr(values), ::TYPES[30/*Fuse.IArray*/]), i)));

    __this->OnUpdated();

    if (__this->_slave != NULL)
        ::g::Fuse::Reactive::IObserver::OnNewAll(uInterface(uPtr(__this->_slave), ::TYPES[2/*Fuse.Reactive.IObserver*/]), values);
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object newValue) :141
void ObserverMap__FuseReactiveIObserverOnNewAt_fn(ObserverMap* __this, int* index, uObject* newValue)
{
    int index_ = *index;

    if (__this->_subscription == NULL)
        return;

    ::g::Uno::Collections::List__set_Item_fn(uPtr(__this->_list), uCRef<int>(index_), __this->Map(newValue));
    __this->OnUpdated();

    if (__this->_slave != NULL)
        ::g::Fuse::Reactive::IObserver::OnNewAt(uInterface(uPtr(__this->_slave), ::TYPES[2/*Fuse.Reactive.IObserver*/]), index_, newValue);
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :175
void ObserverMap__FuseReactiveIObserverOnRemoveAt_fn(ObserverMap* __this, int* index)
{
    int index_ = *index;

    if (__this->_subscription == NULL)
        return;

    uPtr(__this->_list)->RemoveAt(index_);
    __this->OnUpdated();

    if (__this->_slave != NULL)
        ::g::Fuse::Reactive::IObserver::OnRemoveAt(uInterface(uPtr(__this->_slave), ::TYPES[2/*Fuse.Reactive.IObserver*/]), index_);
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :152
void ObserverMap__FuseReactiveIObserverOnSet_fn(ObserverMap* __this, uObject* newValue)
{
    if (__this->_subscription == NULL)
        return;

    uPtr(__this->_list)->Clear();
    ::g::Uno::Collections::List__Add_fn(uPtr(__this->_list), __this->Map(newValue));
    __this->OnUpdated();

    if (__this->_slave != NULL)
        ::g::Fuse::Reactive::IObserver::OnSet(uInterface(uPtr(__this->_slave), ::TYPES[2/*Fuse.Reactive.IObserver*/]), newValue);
}

// public T get_Item(int index) :36
void ObserverMap__get_Item_fn(ObserverMap* __this, int* index, uObject** __retval)
{
    *__retval = __this->Item(*index);
}

// public void set_Item(int index, T value) :37
void ObserverMap__set_Item_fn(ObserverMap* __this, int* index, uObject* value)
{
    __this->Item(*index, value);
}

// protected virtual void OnUpdated() :29
void ObserverMap__OnUpdated_fn(ObserverMap* __this)
{
}

// public void RemoveAt(int index) :90
void ObserverMap__RemoveAt_fn(ObserverMap* __this, int* index)
{
    __this->RemoveAt(*index);
}

// private void UpdateBacking() :108
void ObserverMap__UpdateBacking_fn(ObserverMap* __this)
{
    __this->UpdateBacking();
}

// internal object UVUnmap(T mv) :31
void ObserverMap__UVUnmap_fn(ObserverMap* __this, uObject* mv, uObject** __retval)
{
    *__retval = __this->UVUnmap(mv);
}

// protected generated ObserverMap() [instance] :23
void ObserverMap::ctor_()
{
    uType* __types[] = {
        __type->GetBase(ObserverMap_typeof())->Precalced(0/*Uno.Collections.List<T>*/),
    };
    _list = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[0]));
}

// public void Add(T value) [instance] :84
void ObserverMap::Add(uObject* value)
{
    ::g::Uno::Collections::List__Add_fn(uPtr(_list), value);
    UpdateBacking();
}

// public void Attach(Fuse.IArray src, [Fuse.Reactive.IObserver slave]) [instance] :53
void ObserverMap::Attach(uObject* src, uObject* slave)
{
    Detach();
    _source = src;
    _observable = uAs<uObject*>(src, ::TYPES[32/*Fuse.Reactive.IObservable*/]);

    if (_observable != NULL)
        _subscription = ::g::Fuse::Reactive::IObservable::Subscribe(uInterface(uPtr(_observable), ::TYPES[32/*Fuse.Reactive.IObservable*/]), (uObject*)this);

    ::g::Fuse::Reactive::IObserver::OnNewAll(uInterface((uObject*)this, ::TYPES[2/*Fuse.Reactive.IObserver*/]), src);
    _slave = slave;
}

// public void Clear() [instance] :102
void ObserverMap::Clear()
{
    uPtr(_list)->Clear();
    UpdateBacking();
}

// public int get_Count() [instance] :33
int ObserverMap::Count()
{
    return uPtr(_list)->Count();
}

// public void Detach() [instance] :72
void ObserverMap::Detach()
{
    if (_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[3/*Uno.IDisposable*/]));
        _subscription = NULL;
    }

    _observable = NULL;
    _source = NULL;
    _slave = NULL;
}

// public T get_Item(int index) [instance] :36
uObject* ObserverMap::Item(int index)
{
    uObject* ret1;
    return (::g::Uno::Collections::List__get_Item_fn(uPtr(_list), uCRef<int>(index), &ret1), ret1);
}

// public void set_Item(int index, T value) [instance] :37
void ObserverMap::Item(int index, uObject* value)
{
    ::g::Uno::Collections::List__set_Item_fn(uPtr(_list), uCRef<int>(index), value);
}

// public void RemoveAt(int index) [instance] :90
void ObserverMap::RemoveAt(int index)
{
    uPtr(_list)->RemoveAt(index);
    UpdateBacking();
}

// private void UpdateBacking() [instance] :108
void ObserverMap::UpdateBacking()
{
    uType* __types[] = {
        __type->GetBase(ObserverMap_typeof())->Precalced(1/*Fuse.Reactive.UnmappedView<T>*/),
    };

    if (_subscription == NULL)
        return;

    uObject* uv = (uObject*)((::g::Fuse::Reactive::UnmappedView*)::g::Fuse::Reactive::UnmappedView::New1(__types[0], this));
    ::g::Fuse::Reactive::ISubscription::ReplaceAllExclusive(uInterface(uPtr(_subscription), ::TYPES[36/*Fuse.Reactive.ISubscription*/]), uv);
}

// internal object UVUnmap(T mv) [instance] :31
uObject* ObserverMap::UVUnmap(uObject* mv)
{
    return Unmap(mv);
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/Observable.uno
// ---------------------------------------------------------------------------

// public abstract class Observable.Operation :259
// {
static void Observable__Operation_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(Observable__Operation, _isPerformed), 0,
        ::g::Fuse::Reactive::Observable_typeof(), offsetof(Observable__Operation, _observable), 0);
}

Observable__Operation_type* Observable__Operation_typeof()
{
    static uSStrong<Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Observable__Operation);
    options.TypeSize = sizeof(Observable__Operation_type);
    type = (Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.Operation", options);
    type->fp_build_ = Observable__Operation_build;
    type->fp_Unsubscribe = Observable__Operation__Unsubscribe_fn;
    return type;
}

// protected Operation(Fuse.Reactive.Observable observable) :265
void Observable__Operation__ctor__fn(Observable__Operation* __this, ::g::Fuse::Reactive::Observable* observable)
{
    __this->ctor_(observable);
}

// protected Fuse.Reactive.Observable get_Observable() :270
void Observable__Operation__get_Observable_fn(Observable__Operation* __this, ::g::Fuse::Reactive::Observable** __retval)
{
    *__retval = __this->Observable();
}

// public void Perform() :272
void Observable__Operation__Perform_fn(Observable__Operation* __this)
{
    __this->Perform();
}

// protected virtual void Unsubscribe() :294
void Observable__Operation__Unsubscribe_fn(Observable__Operation* __this)
{
}

// protected Operation(Fuse.Reactive.Observable observable) [instance] :265
void Observable__Operation::ctor_(::g::Fuse::Reactive::Observable* observable)
{
    _observable = observable;
}

// protected Fuse.Reactive.Observable get_Observable() [instance] :270
::g::Fuse::Reactive::Observable* Observable__Operation::Observable()
{
    return _observable;
}

// public void Perform() [instance] :272
void Observable__Operation::Perform()
{
    if (uPtr(_observable)->IsUnsubscribed())
    {
        Unsubscribe();
        return;
    }

    {
        const auto __finally_fun = [&]()
        {
            uPtr(_observable)->_usingObservers = false;
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        uPtr(_observable)->_usingObservers = true;
        OnPerform((uObject*)uPtr(Observable())->_observers);
        uPtr(_observable)->ObserversCleanup();
    }

    _isPerformed = true;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Property.uno
// --------------------------------------------------------------------------

// public sealed class Property :8
// {
static void Property_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), offsetof(Property, _Accessor), 0,
        ::g::Fuse::Reactive::ConstantExpression_typeof(), offsetof(Property, _Object), 0);
}

::g::Fuse::Reactive::Expression_type* Property_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Property);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.Property", options);
    type->fp_build_ = Property_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))Property__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))Property__Subscribe_fn;
    return type;
}

// public Property(Fuse.Reactive.ConstantExpression obj, Uno.UX.PropertyAccessor accessor) :14
void Property__ctor_1_fn(Property* __this, ::g::Fuse::Reactive::ConstantExpression* obj, ::g::Uno::UX::PropertyAccessor* accessor)
{
    __this->ctor_1(obj, accessor);
}

// public generated Uno.UX.PropertyAccessor get_Accessor() :11
void Property__get_Accessor_fn(Property* __this, ::g::Uno::UX::PropertyAccessor** __retval)
{
    *__retval = __this->Accessor();
}

// private generated void set_Accessor(Uno.UX.PropertyAccessor value) :11
void Property__set_Accessor_fn(Property* __this, ::g::Uno::UX::PropertyAccessor* value)
{
    __this->Accessor(value);
}

// public Property New(Fuse.Reactive.ConstantExpression obj, Uno.UX.PropertyAccessor accessor) :14
void Property__New1_fn(::g::Fuse::Reactive::ConstantExpression* obj, ::g::Uno::UX::PropertyAccessor* accessor, Property** __retval)
{
    *__retval = Property::New1(obj, accessor);
}

// public generated Fuse.Reactive.ConstantExpression get_Object() :10
void Property__get_Object_fn(Property* __this, ::g::Fuse::Reactive::ConstantExpression** __retval)
{
    *__retval = __this->Object();
}

// private generated void set_Object(Fuse.Reactive.ConstantExpression value) :10
void Property__set_Object_fn(Property* __this, ::g::Fuse::Reactive::ConstantExpression* value)
{
    __this->Object(value);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :19
void Property__Subscribe_fn(Property* __this, uObject* context, uObject* listener, uObject** __retval)
{
    ::g::Uno::UX::PropertyObject* obj = uCast< ::g::Uno::UX::PropertyObject*>(uPtr(__this->Object())->GetValue(context), ::TYPES[56/*Uno.UX.PropertyObject*/]);
    return *__retval = (uObject*)Property__Subscription::New1(__this, obj, __this->Accessor(), listener), void();
}

// public Property(Fuse.Reactive.ConstantExpression obj, Uno.UX.PropertyAccessor accessor) [instance] :14
void Property::ctor_1(::g::Fuse::Reactive::ConstantExpression* obj, ::g::Uno::UX::PropertyAccessor* accessor)
{
    ctor_();
    Object(obj);
    Accessor(accessor);
}

// public generated Uno.UX.PropertyAccessor get_Accessor() [instance] :11
::g::Uno::UX::PropertyAccessor* Property::Accessor()
{
    return _Accessor;
}

// private generated void set_Accessor(Uno.UX.PropertyAccessor value) [instance] :11
void Property::Accessor(::g::Uno::UX::PropertyAccessor* value)
{
    _Accessor = value;
}

// public generated Fuse.Reactive.ConstantExpression get_Object() [instance] :10
::g::Fuse::Reactive::ConstantExpression* Property::Object()
{
    return _Object;
}

// private generated void set_Object(Fuse.Reactive.ConstantExpression value) [instance] :10
void Property::Object(::g::Fuse::Reactive::ConstantExpression* value)
{
    _Object = value;
}

// public Property New(Fuse.Reactive.ConstantExpression obj, Uno.UX.PropertyAccessor accessor) [static] :14
Property* Property::New1(::g::Fuse::Reactive::ConstantExpression* obj, ::g::Uno::UX::PropertyAccessor* accessor)
{
    Property* obj1 = (Property*)uNew(Property_typeof());
    obj1->ctor_1(obj, accessor);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/ThreadWorker.ScriptClass.uno
// -----------------------------------------------------------------------------------------

// private sealed class ThreadWorker.PropertyClosure :118
// {
static void ThreadWorker__PropertyClosure_build(uType* type)
{
    ::STRINGS[77] = uString::Const("this._raw_");
    ::STRINGS[78] = uString::Const("this._");
    ::STRINGS[79] = uString::Const(" (ScriptProperty)");
    ::STRINGS[80] = uString::Const("(function(cl, getObservable) { Object.defineProperty(cl.prototype, '");
    ::STRINGS[81] = uString::Const("', ");
    ::STRINGS[28] = uString::Const("{");
    ::STRINGS[82] = uString::Const("get: function() { ");
    ::STRINGS[83] = uString::Const("var obs = getObservable(this); ");
    ::STRINGS[84] = uString::Const("if (");
    ::STRINGS[85] = uString::Const(" != obs) {");
    ::STRINGS[86] = uString::Const(" = obs;");
    ::STRINGS[87] = uString::Const(" = obs");
    ::STRINGS[88] = uString::Const(";");
    ::STRINGS[29] = uString::Const("}");
    ::STRINGS[89] = uString::Const("return ");
    ::STRINGS[90] = uString::Const("})");
    ::TYPES[25] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[4] = uObject_typeof()->Array();
    ::TYPES[27] = ::g::Fuse::Scripting::Callback_typeof();
    ::TYPES[56] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(0,
        ::g::Fuse::Scripting::ScriptProperty_typeof(), offsetof(ThreadWorker__PropertyClosure, _p), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(ThreadWorker__PropertyClosure, _worker), 0);
}

uType* ThreadWorker__PropertyClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ThreadWorker__PropertyClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.ThreadWorker.PropertyClosure", options);
    type->fp_build_ = ThreadWorker__PropertyClosure_build;
    return type;
}

// public PropertyClosure(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptProperty p, Fuse.Reactive.ThreadWorker worker) :123
void ThreadWorker__PropertyClosure__ctor__fn(ThreadWorker__PropertyClosure* __this, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p, ::g::Fuse::Reactive::ThreadWorker* worker)
{
    __this->ctor_(cl, p, worker);
}

// private object GetObservable(object[] args) :151
void ThreadWorker__PropertyClosure__GetObservable_fn(ThreadWorker__PropertyClosure* __this, uArray* args, uObject** __retval)
{
    *__retval = __this->GetObservable(args);
}

// public PropertyClosure New(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptProperty p, Fuse.Reactive.ThreadWorker worker) :123
void ThreadWorker__PropertyClosure__New1_fn(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p, ::g::Fuse::Reactive::ThreadWorker* worker, ThreadWorker__PropertyClosure** __retval)
{
    *__retval = ThreadWorker__PropertyClosure::New1(cl, p, worker);
}

// public PropertyClosure(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptProperty p, Fuse.Reactive.ThreadWorker worker) [instance] :123
void ThreadWorker__PropertyClosure::ctor_(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p, ::g::Fuse::Reactive::ThreadWorker* worker)
{
    _worker = worker;
    _p = p;
    uString* rawField = ::g::Uno::String::op_Addition2(::STRINGS[77/*"this._raw_"*/], uPtr(p)->Name);
    uString* propField = ::g::Uno::String::op_Addition2(::STRINGS[78/*"this._"*/], p->Name);
    ::g::Fuse::Scripting::Function* definer = uCast< ::g::Fuse::Scripting::Function*>(uPtr(uPtr(worker)->Context())->Evaluate(::g::Uno::String::op_Addition2(p->Name, ::STRINGS[79/*" (ScriptPro...*/]), ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[80/*"(function(c...*/], p->Name), ::STRINGS[81/*"', "*/]), ::STRINGS[28/*"{"*/]), ::STRINGS[82/*"get: functi...*/]), ::STRINGS[83/*"var obs = g...*/]), ::STRINGS[84/*"if ("*/]), rawField), ::STRINGS[85/*" != obs) {"*/]), rawField), ::STRINGS[86/*" = obs;"*/]), propField), ::STRINGS[87/*" = obs"*/]), p->Modifier), ::STRINGS[88/*";"*/]), ::STRINGS[29/*"}"*/]), ::STRINGS[89/*"return "*/]), propField), ::STRINGS[29/*"}"*/]), ::STRINGS[90/*"})"*/]), ::STRINGS[90/*"})"*/])), ::TYPES[25/*Fuse.Scripting.Function*/]);
    uPtr(definer)->Call(uArray::Init<uObject*>(::TYPES[4/*object[]*/], 2, cl, uDelegate::New(::TYPES[27/*Fuse.Scripting.Callback*/], (void*)ThreadWorker__PropertyClosure__GetObservable_fn, this)));
}

// private object GetObservable(object[] args) [instance] :151
uObject* ThreadWorker__PropertyClosure::GetObservable(uArray* args)
{
    ::g::Uno::UX::PropertyObject* obj = uAs< ::g::Uno::UX::PropertyObject*>(::g::Fuse::Reactive::ThreadWorker::Wrap(uPtr(args)->Strong<uObject*>(0)), ::TYPES[56/*Uno.UX.PropertyObject*/]);
    ::g::Fuse::Reactive::ClassInstance* ci = uPtr(_worker)->GetClassInstance(obj, NULL);
    return uPtr(ci)->GetPropertyObservable(uPtr(_p)->GetProperty(obj));
}

// public PropertyClosure New(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptProperty p, Fuse.Reactive.ThreadWorker worker) [static] :123
ThreadWorker__PropertyClosure* ThreadWorker__PropertyClosure::New1(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptProperty* p, ::g::Fuse::Reactive::ThreadWorker* worker)
{
    ThreadWorker__PropertyClosure* obj1 = (ThreadWorker__PropertyClosure*)uNew(ThreadWorker__PropertyClosure_typeof());
    obj1->ctor_(cl, p, worker);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/ObservableProperty.uno
// -----------------------------------------------------------------------------------

// private sealed class ObservableProperty.PushCapture :128
// {
static void ObservableProperty__PushCapture_build(uType* type)
{
    type->SetFields(0,
        uObject_typeof(), offsetof(ObservableProperty__PushCapture, _arg), 0,
        ::g::Uno::Action1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(ObservableProperty__PushCapture, _push), 0);
}

uType* ObservableProperty__PushCapture_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ObservableProperty__PushCapture);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.ObservableProperty.PushCapture", options);
    type->fp_build_ = ObservableProperty__PushCapture_build;
    return type;
}

// public PushCapture(Uno.Action<object> push, object arg) :133
void ObservableProperty__PushCapture__ctor__fn(ObservableProperty__PushCapture* __this, uDelegate* push, uObject* arg)
{
    __this->ctor_(push, arg);
}

// public PushCapture New(Uno.Action<object> push, object arg) :133
void ObservableProperty__PushCapture__New1_fn(uDelegate* push, uObject* arg, ObservableProperty__PushCapture** __retval)
{
    *__retval = ObservableProperty__PushCapture::New1(push, arg);
}

// public void Run() :139
void ObservableProperty__PushCapture__Run_fn(ObservableProperty__PushCapture* __this)
{
    __this->Run();
}

// public PushCapture(Uno.Action<object> push, object arg) [instance] :133
void ObservableProperty__PushCapture::ctor_(uDelegate* push, uObject* arg)
{
    _push = push;
    _arg = arg;
}

// public void Run() [instance] :139
void ObservableProperty__PushCapture::Run()
{
    uPtr(_push)->InvokeVoid(_arg);
}

// public PushCapture New(Uno.Action<object> push, object arg) [static] :133
ObservableProperty__PushCapture* ObservableProperty__PushCapture::New1(uDelegate* push, uObject* arg)
{
    ObservableProperty__PushCapture* obj1 = (ObservableProperty__PushCapture*)uNew(ObservableProperty__PushCapture_typeof());
    obj1->ctor_(push, arg);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/QuaternaryOperator.uno
// ------------------------------------------------------------------------------------

// public abstract class QuaternaryOperator :8
// {
static void QuaternaryOperator_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(QuaternaryOperator_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(QuaternaryOperator, _First), 0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(QuaternaryOperator, _Fourth), 0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(QuaternaryOperator, _Second), 0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(QuaternaryOperator, _Third), 0);
}

QuaternaryOperator_type* QuaternaryOperator_typeof()
{
    static uSStrong<QuaternaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(QuaternaryOperator);
    options.TypeSize = sizeof(QuaternaryOperator_type);
    type = (QuaternaryOperator_type*)uClassType::New("Fuse.Reactive.QuaternaryOperator", options);
    type->fp_build_ = QuaternaryOperator_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))QuaternaryOperator__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))QuaternaryOperator__Subscribe_fn;
    return type;
}

// public generated Fuse.Reactive.Expression get_First() :10
void QuaternaryOperator__get_First_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->First();
}

// private generated void set_First(Fuse.Reactive.Expression value) :10
void QuaternaryOperator__set_First_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->First(value);
}

// public generated Fuse.Reactive.Expression get_Fourth() :13
void QuaternaryOperator__get_Fourth_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Fourth();
}

// private generated void set_Fourth(Fuse.Reactive.Expression value) :13
void QuaternaryOperator__set_Fourth_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Fourth(value);
}

// protected bool get_IsFirstOptional() :28
void QuaternaryOperator__get_IsFirstOptional_fn(QuaternaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsFirstOptional();
}

// protected bool get_IsFourthOptional() :31
void QuaternaryOperator__get_IsFourthOptional_fn(QuaternaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsFourthOptional();
}

// protected bool get_IsSecondOptional() :29
void QuaternaryOperator__get_IsSecondOptional_fn(QuaternaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsSecondOptional();
}

// protected bool get_IsThirdOptional() :30
void QuaternaryOperator__get_IsThirdOptional_fn(QuaternaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsThirdOptional();
}

// public generated Fuse.Reactive.Expression get_Second() :11
void QuaternaryOperator__get_Second_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Second();
}

// private generated void set_Second(Fuse.Reactive.Expression value) :11
void QuaternaryOperator__set_Second_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Second(value);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :23
void QuaternaryOperator__Subscribe_fn(QuaternaryOperator* __this, uObject* context, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)QuaternaryOperator__Subscription::Create(__this, context, listener), void();
}

// public generated Fuse.Reactive.Expression get_Third() :12
void QuaternaryOperator__get_Third_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Third();
}

// private generated void set_Third(Fuse.Reactive.Expression value) :12
void QuaternaryOperator__set_Third_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Third(value);
}

// public generated Fuse.Reactive.Expression get_First() [instance] :10
::g::Fuse::Reactive::Expression* QuaternaryOperator::First()
{
    return _First;
}

// private generated void set_First(Fuse.Reactive.Expression value) [instance] :10
void QuaternaryOperator::First(::g::Fuse::Reactive::Expression* value)
{
    _First = value;
}

// public generated Fuse.Reactive.Expression get_Fourth() [instance] :13
::g::Fuse::Reactive::Expression* QuaternaryOperator::Fourth()
{
    return _Fourth;
}

// private generated void set_Fourth(Fuse.Reactive.Expression value) [instance] :13
void QuaternaryOperator::Fourth(::g::Fuse::Reactive::Expression* value)
{
    _Fourth = value;
}

// protected bool get_IsFirstOptional() [instance] :28
bool QuaternaryOperator::IsFirstOptional()
{
    return false;
}

// protected bool get_IsFourthOptional() [instance] :31
bool QuaternaryOperator::IsFourthOptional()
{
    return false;
}

// protected bool get_IsSecondOptional() [instance] :29
bool QuaternaryOperator::IsSecondOptional()
{
    return false;
}

// protected bool get_IsThirdOptional() [instance] :30
bool QuaternaryOperator::IsThirdOptional()
{
    return false;
}

// public generated Fuse.Reactive.Expression get_Second() [instance] :11
::g::Fuse::Reactive::Expression* QuaternaryOperator::Second()
{
    return _Second;
}

// private generated void set_Second(Fuse.Reactive.Expression value) [instance] :11
void QuaternaryOperator::Second(::g::Fuse::Reactive::Expression* value)
{
    _Second = value;
}

// public generated Fuse.Reactive.Expression get_Third() [instance] :12
::g::Fuse::Reactive::Expression* QuaternaryOperator::Third()
{
    return _Third;
}

// private generated void set_Third(Fuse.Reactive.Expression value) [instance] :12
void QuaternaryOperator::Third(::g::Fuse::Reactive::Expression* value)
{
    _Third = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/WhileCount.uno
// -------------------------------------------------------------------------

// private enum WhileCount.Range :145
uEnumType* WhileCount__Range_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Reactive.WhileCount.Range", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Open", 0LL,
        "Exclusive", 1LL,
        "Inclusive", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/ThreadWorker.ScriptClass.uno
// -----------------------------------------------------------------------------------------

// private sealed class ThreadWorker.ReadonlyPropertyClosure :96
// {
static void ThreadWorker__ReadonlyPropertyClosure_build(uType* type)
{
    ::STRINGS[91] = uString::Const(" (ScriptReadonlyProperty)");
    ::STRINGS[92] = uString::Const("(function(cl,propValue){Object.defineProperty(cl.prototype,'");
    ::STRINGS[93] = uString::Const("',");
    ::STRINGS[28] = uString::Const("{");
    ::STRINGS[94] = uString::Const("value: propValue,");
    ::STRINGS[95] = uString::Const("writable: false,");
    ::STRINGS[96] = uString::Const("enumerable: true,");
    ::STRINGS[97] = uString::Const("configurable: false");
    ::STRINGS[29] = uString::Const("}");
    ::STRINGS[98] = uString::Const(");");
    ::STRINGS[90] = uString::Const("})");
    ::TYPES[25] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[4] = uObject_typeof()->Array();
}

uType* ThreadWorker__ReadonlyPropertyClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(ThreadWorker__ReadonlyPropertyClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.ThreadWorker.ReadonlyPropertyClosure", options);
    type->fp_build_ = ThreadWorker__ReadonlyPropertyClosure_build;
    return type;
}

// public ReadonlyPropertyClosure(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptReadonlyProperty constant, Fuse.Reactive.ThreadWorker worker) :98
void ThreadWorker__ReadonlyPropertyClosure__ctor__fn(ThreadWorker__ReadonlyPropertyClosure* __this, ::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptReadonlyProperty* constant, ::g::Fuse::Reactive::ThreadWorker* worker)
{
    __this->ctor_(cl, constant, worker);
}

// public ReadonlyPropertyClosure New(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptReadonlyProperty constant, Fuse.Reactive.ThreadWorker worker) :98
void ThreadWorker__ReadonlyPropertyClosure__New1_fn(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptReadonlyProperty* constant, ::g::Fuse::Reactive::ThreadWorker* worker, ThreadWorker__ReadonlyPropertyClosure** __retval)
{
    *__retval = ThreadWorker__ReadonlyPropertyClosure::New1(cl, constant, worker);
}

// public ReadonlyPropertyClosure(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptReadonlyProperty constant, Fuse.Reactive.ThreadWorker worker) [instance] :98
void ThreadWorker__ReadonlyPropertyClosure::ctor_(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptReadonlyProperty* constant, ::g::Fuse::Reactive::ThreadWorker* worker)
{
    ::g::Fuse::Scripting::Function* definer = uCast< ::g::Fuse::Scripting::Function*>(uPtr(uPtr(worker)->Context())->Evaluate(::g::Uno::String::op_Addition2(uPtr(constant)->Name, ::STRINGS[91/*" (ScriptRea...*/]), ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[92/*"(function(c...*/], uPtr(constant)->Name), ::STRINGS[93/*"',"*/]), ::STRINGS[28/*"{"*/]), ::STRINGS[94/*"value: prop...*/]), ::STRINGS[95/*"writable: f...*/]), ::STRINGS[96/*"enumerable:...*/]), ::STRINGS[97/*"configurabl...*/]), ::STRINGS[29/*"}"*/]), ::STRINGS[98/*");"*/]), ::STRINGS[90/*"})"*/])), ::TYPES[25/*Fuse.Scripting.Function*/]);
    uPtr(definer)->Call(uArray::Init<uObject*>(::TYPES[4/*object[]*/], 2, cl, (uObject*)worker->Unwrap(constant->Value)));
}

// public ReadonlyPropertyClosure New(Fuse.Scripting.Function cl, Fuse.Scripting.ScriptReadonlyProperty constant, Fuse.Reactive.ThreadWorker worker) [static] :98
ThreadWorker__ReadonlyPropertyClosure* ThreadWorker__ReadonlyPropertyClosure::New1(::g::Fuse::Scripting::Function* cl, ::g::Fuse::Scripting::ScriptReadonlyProperty* constant, ::g::Fuse::Reactive::ThreadWorker* worker)
{
    ThreadWorker__ReadonlyPropertyClosure* obj1 = (ThreadWorker__ReadonlyPropertyClosure*)uNew(ThreadWorker__ReadonlyPropertyClosure_typeof());
    obj1->ctor_(cl, constant, worker);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/Observable.uno
// ---------------------------------------------------------------------------

// private sealed class Observable.RemoveAt :463
// {
static void Observable__RemoveAt_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(Observable__RemoveAt, _index), 0);
}

::g::Fuse::Reactive::Observable__Operation_type* Observable__RemoveAt_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Observable__Operation_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Observable__RemoveAt);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Observable__Operation_type);
    type = (::g::Fuse::Reactive::Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.RemoveAt", options);
    type->fp_build_ = Observable__RemoveAt_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Reactive::Observable__Operation*, uObject*))Observable__RemoveAt__OnPerform_fn;
    return type;
}

// public RemoveAt(Fuse.Reactive.Observable obs, int index) :467
void Observable__RemoveAt__ctor_1_fn(Observable__RemoveAt* __this, ::g::Fuse::Reactive::Observable* obs, int* index)
{
    __this->ctor_1(obs, *index);
}

// public RemoveAt New(Fuse.Reactive.Observable obs, int index) :467
void Observable__RemoveAt__New1_fn(::g::Fuse::Reactive::Observable* obs, int* index, Observable__RemoveAt** __retval)
{
    *__retval = Observable__RemoveAt::New1(obs, *index);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription> sub) :472
void Observable__RemoveAt__OnPerform_fn(Observable__RemoveAt* __this, uObject* sub)
{
    ::g::Fuse::Reactive::Observable__Subscription* ret2;
    ::g::Fuse::Reactive::Observable__Subscription* ret3;
    ::g::Fuse::Reactive::ValueMirror::Unsubscribe1(uPtr(__this->Observable())->Item(__this->_index));
    uPtr(uPtr(__this->Observable())->_values)->RemoveAt(__this->_index);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Reactive.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret2), ret2))->ShouldSend(-1))
            ::g::Fuse::Reactive::IObserver::OnRemoveAt(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret3), ret3))->Observer()), ::TYPES[2/*Fuse.Reactive.IObserver*/]), __this->_index);
}

// public RemoveAt(Fuse.Reactive.Observable obs, int index) [instance] :467
void Observable__RemoveAt::ctor_1(::g::Fuse::Reactive::Observable* obs, int index)
{
    ctor_(obs);
    _index = index;
}

// public RemoveAt New(Fuse.Reactive.Observable obs, int index) [static] :467
Observable__RemoveAt* Observable__RemoveAt::New1(::g::Fuse::Reactive::Observable* obs, int index)
{
    Observable__RemoveAt* obj1 = (Observable__RemoveAt*)uNew(Observable__RemoveAt_typeof());
    obj1->ctor_1(obs, index);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/Observable.uno
// ---------------------------------------------------------------------------

// private sealed class Observable.RemoveRange :485
// {
static void Observable__RemoveRange_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(Observable__RemoveRange, _count), 0,
        ::g::Uno::Int_typeof(), offsetof(Observable__RemoveRange, _index), 0);
}

::g::Fuse::Reactive::Observable__Operation_type* Observable__RemoveRange_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Observable__Operation_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__RemoveRange);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Observable__Operation_type);
    type = (::g::Fuse::Reactive::Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.RemoveRange", options);
    type->fp_build_ = Observable__RemoveRange_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Reactive::Observable__Operation*, uObject*))Observable__RemoveRange__OnPerform_fn;
    return type;
}

// public RemoveRange(Fuse.Reactive.Observable obs, int index, int count) :490
void Observable__RemoveRange__ctor_1_fn(Observable__RemoveRange* __this, ::g::Fuse::Reactive::Observable* obs, int* index, int* count)
{
    __this->ctor_1(obs, *index, *count);
}

// public RemoveRange New(Fuse.Reactive.Observable obs, int index, int count) :490
void Observable__RemoveRange__New1_fn(::g::Fuse::Reactive::Observable* obs, int* index, int* count, Observable__RemoveRange** __retval)
{
    *__retval = Observable__RemoveRange::New1(obs, *index, *count);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription> sub) :496
void Observable__RemoveRange__OnPerform_fn(Observable__RemoveRange* __this, uObject* sub)
{
    ::g::Fuse::Reactive::Observable__Subscription* ret2;
    ::g::Fuse::Reactive::Observable__Subscription* ret3;

    for (int i = 0; i < __this->_count; i++)
    {
        ::g::Fuse::Reactive::ValueMirror::Unsubscribe1(uPtr(__this->Observable())->Item(__this->_index));
        uPtr(uPtr(__this->Observable())->_values)->RemoveAt(__this->_index);

        for (int j = 0; j < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Reactive.Observable.Subscription>*/])); ++j)
            if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(j), &ret2), ret2))->ShouldSend(-1))
                ::g::Fuse::Reactive::IObserver::OnRemoveAt(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(j), &ret3), ret3))->Observer()), ::TYPES[2/*Fuse.Reactive.IObserver*/]), __this->_index);
    }
}

// public RemoveRange(Fuse.Reactive.Observable obs, int index, int count) [instance] :490
void Observable__RemoveRange::ctor_1(::g::Fuse::Reactive::Observable* obs, int index, int count)
{
    ctor_(obs);
    _index = index;
    _count = count;
}

// public RemoveRange New(Fuse.Reactive.Observable obs, int index, int count) [static] :490
Observable__RemoveRange* Observable__RemoveRange::New1(::g::Fuse::Reactive::Observable* obs, int index, int count)
{
    Observable__RemoveRange* obj1 = (Observable__RemoveRange*)uNew(Observable__RemoveRange_typeof());
    obj1->ctor_1(obs, index, count);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Resource.uno
// --------------------------------------------------------------------------

// public sealed class Resource :8
// {
static void Resource_build(uType* type)
{
    ::TYPES[29] = ::g::Fuse::Reactive::IContext_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(Resource, _Key), 0);
}

::g::Fuse::Reactive::Expression_type* Resource_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Resource);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.Resource", options);
    type->fp_build_ = Resource_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))Resource__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))Resource__Subscribe_fn;
    return type;
}

// public generated string get_Key() :10
void Resource__get_Key_fn(Resource* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(string value) :10
void Resource__set_Key_fn(Resource* __this, uString* value)
{
    __this->Key(value);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :16
void Resource__Subscribe_fn(Resource* __this, uObject* context, uObject* listener, uObject** __retval)
{
    return *__retval = ::g::Fuse::Reactive::IContext::SubscribeResource(uInterface(uPtr(context), ::TYPES[29/*Fuse.Reactive.IContext*/]), (uObject*)__this, __this->Key(), listener), void();
}

// public generated string get_Key() [instance] :10
uString* Resource::Key()
{
    return _Key;
}

// private generated void set_Key(string value) [instance] :10
void Resource::Key(uString* value)
{
    _Key = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/Subscription/ResourceSubscription.uno
// ------------------------------------------------------------------------------------------------

// internal sealed class ResourceSubscription :7
// {
static void ResourceSubscription_build(uType* type)
{
    ::STRINGS[99] = uString::Const("{Resource ");
    ::STRINGS[40] = uString::Const("} not found in data context");
    ::TYPES[14] = ::g::Uno::Action_typeof();
    ::TYPES[3] = ::g::Uno::IDisposable_typeof();
    ::TYPES[57] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[28] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Fuse::Resources::ResourceRegistry_typeof());
    type->SetInterfaces(
        ::TYPES[3/*Uno.IDisposable*/], offsetof(ResourceSubscription_type, interface0));
    type->SetFields(0,
        ::TYPES[3/*Uno.IDisposable*/], offsetof(ResourceSubscription, _diag), 0,
        ::g::Uno::String_typeof(), offsetof(ResourceSubscription, _key), 0,
        ::TYPES[28/*Fuse.Reactive.IListener*/], offsetof(ResourceSubscription, _listener), 0,
        ::g::Fuse::Node_typeof(), offsetof(ResourceSubscription, _origin), 0,
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(ResourceSubscription, _source), 0,
        ::g::Uno::Type_typeof(), offsetof(ResourceSubscription, _type), 0);
}

ResourceSubscription_type* ResourceSubscription_typeof()
{
    static uSStrong<ResourceSubscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(ResourceSubscription);
    options.TypeSize = sizeof(ResourceSubscription_type);
    type = (ResourceSubscription_type*)uClassType::New("Fuse.Reactive.ResourceSubscription", options);
    type->fp_build_ = ResourceSubscription_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))ResourceSubscription__Dispose_fn;
    return type;
}

// public ResourceSubscription(Fuse.Reactive.IExpression source, Fuse.Node origin, string key, Fuse.Reactive.IListener listener, Uno.Type type) :16
void ResourceSubscription__ctor__fn(ResourceSubscription* __this, uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener, uType* type)
{
    __this->ctor_(source, origin, key, listener, type);
}

// private bool Accept(object o) :60
void ResourceSubscription__Accept_fn(ResourceSubscription* __this, uObject* o, bool* __retval)
{
    *__retval = __this->Accept(o);
}

// private void ClearDiagnostic() :36
void ResourceSubscription__ClearDiagnostic_fn(ResourceSubscription* __this)
{
    __this->ClearDiagnostic();
}

// public void Dispose() :28
void ResourceSubscription__Dispose_fn(ResourceSubscription* __this)
{
    __this->Dispose();
}

// public ResourceSubscription New(Fuse.Reactive.IExpression source, Fuse.Node origin, string key, Fuse.Reactive.IListener listener, Uno.Type type) :16
void ResourceSubscription__New1_fn(uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener, uType* type, ResourceSubscription** __retval)
{
    *__retval = ResourceSubscription::New1(source, origin, key, listener, type);
}

// private void OnChanged() :45
void ResourceSubscription__OnChanged_fn(ResourceSubscription* __this)
{
    __this->OnChanged();
}

// public ResourceSubscription(Fuse.Reactive.IExpression source, Fuse.Node origin, string key, Fuse.Reactive.IListener listener, Uno.Type type) [instance] :16
void ResourceSubscription::ctor_(uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener, uType* type)
{
    _source = source;
    _origin = origin;
    _key = key;
    _type = type;
    _listener = listener;
    ::g::Fuse::Resources::ResourceRegistry::AddResourceChangedHandler(_key, uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)ResourceSubscription__OnChanged_fn, this));
    OnChanged();
}

// private bool Accept(object o) [instance] :60
bool ResourceSubscription::Accept(uObject* o)
{
    return ::g::Fuse::Marshal::Is(o, _type);
}

// private void ClearDiagnostic() [instance] :36
void ResourceSubscription::ClearDiagnostic()
{
    if (_diag != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_diag), ::TYPES[3/*Uno.IDisposable*/]));
        _diag = NULL;
    }
}

// public void Dispose() [instance] :28
void ResourceSubscription::Dispose()
{
    ClearDiagnostic();
    ::g::Fuse::Resources::ResourceRegistry::RemoveResourceChangedHandler(_key, uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)ResourceSubscription__OnChanged_fn, this));
    _listener = NULL;
    _origin = NULL;
}

// private void OnChanged() [instance] :45
void ResourceSubscription::OnChanged()
{
    ClearDiagnostic();
    uObject* resource;

    if (uPtr(_origin)->TryGetResource(_key, uDelegate::New(::TYPES[57/*Uno.Predicate<object>*/], (void*)ResourceSubscription__Accept_fn, this), &resource))
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[28/*Fuse.Reactive.IListener*/]), _source, resource);
    else
        _diag = ::g::Fuse::Diagnostics::ReportTemporalUserWarning(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[99/*"{Resource "*/], _key), ::STRINGS[40/*"} not found...*/]), _origin);
}

// public ResourceSubscription New(Fuse.Reactive.IExpression source, Fuse.Node origin, string key, Fuse.Reactive.IListener listener, Uno.Type type) [static] :16
ResourceSubscription* ResourceSubscription::New1(uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener, uType* type)
{
    ResourceSubscription* obj1 = (ResourceSubscription*)uNew(ResourceSubscription_typeof());
    obj1->ctor_(source, origin, key, listener, type);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/RootableScriptModule.uno
// -------------------------------------------------------------------------------------

// internal sealed class RootableScriptModule :10
// {
static void RootableScriptModule_build(uType* type)
{
    ::STRINGS[100] = uString::Const(", ");
    ::TYPES[52] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[10] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::ScriptModule_type, interface0));
    type->SetFields(9,
        ::g::Fuse::Reactive::ClassInstance_typeof(), offsetof(RootableScriptModule, _classInstance), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(RootableScriptModule, _names), 0,
        ::g::Fuse::Reactive::ThreadWorker_typeof(), offsetof(RootableScriptModule, _worker), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL), offsetof(RootableScriptModule, Dependencies), 0);
}

::g::Fuse::Scripting::ScriptModule_type* RootableScriptModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::ScriptModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::ScriptModule_typeof();
    options.FieldCount = 13;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(RootableScriptModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::ScriptModule_type);
    type = (::g::Fuse::Scripting::ScriptModule_type*)uClassType::New("Fuse.Reactive.RootableScriptModule", options);
    type->fp_build_ = RootableScriptModule_build;
    type->fp_CallModuleFunc = (void(*)(::g::Fuse::Scripting::ScriptModule*, ::g::Fuse::Scripting::Function*, uArray*))RootableScriptModule__CallModuleFunc_fn;
    type->fp_Evaluate = (void(*)(::g::Fuse::Scripting::Module*, ::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::ModuleResult*))RootableScriptModule__Evaluate_fn;
    type->fp_GenerateArgs = (void(*)(::g::Fuse::Scripting::ScriptModule*, ::g::Fuse::Scripting::Context*, ::g::Fuse::Scripting::ModuleResult*, ::g::Uno::Collections::List*, uString**))RootableScriptModule__GenerateArgs_fn;
    type->fp_GenerateRequireTable = (void(*)(::g::Fuse::Scripting::ScriptModule*, ::g::Fuse::Scripting::Context*, ::g::Uno::Collections::Dictionary**))RootableScriptModule__GenerateRequireTable_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public RootableScriptModule(Fuse.Reactive.ThreadWorker worker, Uno.UX.NameTable names) :16
void RootableScriptModule__ctor_2_fn(RootableScriptModule* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Uno::UX::NameTable* names)
{
    __this->ctor_2(worker, names);
}

// protected override sealed void CallModuleFunc(Fuse.Scripting.Function moduleFunc, object[] args) :54
void RootableScriptModule__CallModuleFunc_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Function* moduleFunc, uArray* args)
{
    uPtr(__this->_classInstance)->CallMethod(moduleFunc, args);
}

// private void EnsureClassInstanceRooted() :28
void RootableScriptModule__EnsureClassInstanceRooted_fn(RootableScriptModule* __this)
{
    __this->EnsureClassInstanceRooted();
}

// public override sealed void Evaluate(Fuse.Scripting.Context c, Fuse.Scripting.ModuleResult result) :22
void RootableScriptModule__Evaluate_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result)
{
    __this->EnsureClassInstanceRooted();
    ::g::Fuse::Scripting::ScriptModule__Evaluate_fn(__this, c, result);
}

// protected override sealed string GenerateArgs(Fuse.Scripting.Context c, Fuse.Scripting.ModuleResult result, Uno.Collections.List<object> args) :41
void RootableScriptModule__GenerateArgs_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::ModuleResult* result, ::g::Uno::Collections::List* args, uString** __retval)
{
    uString* ret3;
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > ret4;
    uString* argsString = (::g::Fuse::Scripting::ScriptModule__GenerateArgs_fn(__this, c, result, args, &ret3), ret3);
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uObject*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(__this->Dependencies), &ret4), ret4);

    {
        const auto __finally_fun = [&]()
        {
            enum1.Dispose(::TYPES[52/*Uno.Collections.Dictionary<string, object>.Enumerator*/]);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        while (enum1.MoveNext(::TYPES[52/*Uno.Collections.Dictionary<string, object>.Enumerator*/]))
        {
            ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong<uObject*> > dep = enum1.Current(::TYPES[52/*Uno.Collections.Dictionary<string, object>.Enumerator*/]);
            argsString = ::g::Uno::String::op_Addition2(argsString, ::g::Uno::String::op_Addition2(::STRINGS[100/*", "*/], dep.Key(::TYPES[10/*Uno.Collections.KeyValuePair<string, object>*/])));
            ::g::Uno::Collections::List__Add_fn(uPtr(args), dep.Value(::TYPES[10/*Uno.Collections.KeyValuePair<string, object>*/]));
        }
    }

    return *__retval = argsString, void();
}

// protected override sealed Uno.Collections.Dictionary<string, object> GenerateRequireTable(Fuse.Scripting.Context c) :36
void RootableScriptModule__GenerateRequireTable_fn(RootableScriptModule* __this, ::g::Fuse::Scripting::Context* c, ::g::Uno::Collections::Dictionary** __retval)
{
    return *__retval = __this->Dependencies, void();
}

// public RootableScriptModule New(Fuse.Reactive.ThreadWorker worker, Uno.UX.NameTable names) :16
void RootableScriptModule__New2_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Uno::UX::NameTable* names, RootableScriptModule** __retval)
{
    *__retval = RootableScriptModule::New2(worker, names);
}

// public RootableScriptModule(Fuse.Reactive.ThreadWorker worker, Uno.UX.NameTable names) [instance] :16
void RootableScriptModule::ctor_2(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Uno::UX::NameTable* names)
{
    ctor_1();
    _worker = worker;
    _names = names;
}

// private void EnsureClassInstanceRooted() [instance] :28
void RootableScriptModule::EnsureClassInstanceRooted()
{
    if (_classInstance == NULL)
        _classInstance = uPtr(_worker)->GetClassInstance1(_names);

    uPtr(_classInstance)->EnsureRooted();
}

// public RootableScriptModule New(Fuse.Reactive.ThreadWorker worker, Uno.UX.NameTable names) [static] :16
RootableScriptModule* RootableScriptModule::New2(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Uno::UX::NameTable* names)
{
    RootableScriptModule* obj2 = (RootableScriptModule*)uNew(RootableScriptModule_typeof());
    obj2->ctor_2(worker, names);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/Observable.uno
// ---------------------------------------------------------------------------

// private sealed class Observable.Set :306
// {
static void Observable__Set_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Observable__Subscription_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Reactive::IObserver_typeof();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(Observable__Set, _origin), 0,
        uObject_typeof(), offsetof(Observable__Set, _value), 0);
}

::g::Fuse::Reactive::Observable__Operation_type* Observable__Set_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Observable__Operation_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Observable__Operation_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Observable__Set);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Observable__Operation_type);
    type = (::g::Fuse::Reactive::Observable__Operation_type*)uClassType::New("Fuse.Reactive.Observable.Set", options);
    type->fp_build_ = Observable__Set_build;
    type->fp_OnPerform = (void(*)(::g::Fuse::Reactive::Observable__Operation*, uObject*))Observable__Set__OnPerform_fn;
    type->fp_Unsubscribe = (void(*)(::g::Fuse::Reactive::Observable__Operation*))Observable__Set__Unsubscribe_fn;
    return type;
}

// public Set(Fuse.Reactive.Observable obs, object value, int origin) :311
void Observable__Set__ctor_1_fn(Observable__Set* __this, ::g::Fuse::Reactive::Observable* obs, uObject* value, int* origin)
{
    __this->ctor_1(obs, value, *origin);
}

// public Set New(Fuse.Reactive.Observable obs, object value, int origin) :311
void Observable__Set__New1_fn(::g::Fuse::Reactive::Observable* obs, uObject* value, int* origin, Observable__Set** __retval)
{
    *__retval = Observable__Set::New1(obs, value, *origin);
}

// protected override sealed void OnPerform(Uno.Collections.IList<Fuse.Reactive.Observable.Subscription> sub) :322
void Observable__Set__OnPerform_fn(Observable__Set* __this, uObject* sub)
{
    ::g::Fuse::Reactive::Observable__Subscription* ret2;
    ::g::Fuse::Reactive::Observable__Subscription* ret3;
    uPtr(__this->Observable())->UnsubscribeValues();
    uPtr(uPtr(__this->Observable())->_values)->Clear();
    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(__this->Observable())->_values), __this->_value);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(sub), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Reactive.Observable.Subscription>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret2), ret2))->ShouldSend(__this->_origin))
            ::g::Fuse::Reactive::IObserver::OnSet(uInterface(uPtr(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(sub), ::TYPES[1/*Uno.Collections.IList<Fuse.Reactive.Observable.Subscription>*/]), uCRef<int>(i), &ret3), ret3))->Observer()), ::TYPES[2/*Fuse.Reactive.IObserver*/]), __this->_value);
}

// protected override sealed void Unsubscribe() :317
void Observable__Set__Unsubscribe_fn(Observable__Set* __this)
{
    ::g::Fuse::Reactive::ValueMirror::Unsubscribe1(__this->_value);
}

// public Set(Fuse.Reactive.Observable obs, object value, int origin) [instance] :311
void Observable__Set::ctor_1(::g::Fuse::Reactive::Observable* obs, uObject* value, int origin)
{
    ctor_(obs);
    _value = value;
    _origin = origin;
}

// public Set New(Fuse.Reactive.Observable obs, object value, int origin) [static] :311
Observable__Set* Observable__Set::New1(::g::Fuse::Reactive::Observable* obs, uObject* value, int origin)
{
    Observable__Set* obj1 = (Observable__Set*)uNew(Observable__Set_typeof());
    obj1->ctor_1(obs, value, origin);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/VarArgFunction.uno
// --------------------------------------------------------------------------------

// private sealed class SimpleVarArgFunction.SimpleSubscription :174
// {
static void SimpleVarArgFunction__SimpleSubscription_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::VarArgFunction__Subscription_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::VarArgFunction__Subscription_type, interface1));
    type->SetFields(5,
        ::g::Fuse::Reactive::SimpleVarArgFunction_typeof(), offsetof(SimpleVarArgFunction__SimpleSubscription, _func1), 0,
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(SimpleVarArgFunction__SimpleSubscription, _listener), 0);
}

::g::Fuse::Reactive::VarArgFunction__Subscription_type* SimpleVarArgFunction__SimpleSubscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::VarArgFunction__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::VarArgFunction__Subscription_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(SimpleVarArgFunction__SimpleSubscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::VarArgFunction__Subscription_type);
    type = (::g::Fuse::Reactive::VarArgFunction__Subscription_type*)uClassType::New("Fuse.Reactive.SimpleVarArgFunction.SimpleSubscription", options);
    type->fp_build_ = SimpleVarArgFunction__SimpleSubscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))SimpleVarArgFunction__SimpleSubscription__Dispose_fn;
    type->fp_OnNewArguments = (void(*)(::g::Fuse::Reactive::VarArgFunction__Subscription*, uArray*))SimpleVarArgFunction__SimpleSubscription__OnNewArguments_fn;
    type->fp_OnNewPartialArguments = (void(*)(::g::Fuse::Reactive::VarArgFunction__Subscription*, uArray*))SimpleVarArgFunction__SimpleSubscription__OnNewPartialArguments_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))SimpleVarArgFunction__SimpleSubscription__Dispose_fn;
    return type;
}

// public SimpleSubscription(Fuse.Reactive.SimpleVarArgFunction func, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :179
void SimpleVarArgFunction__SimpleSubscription__ctor_2_fn(SimpleVarArgFunction__SimpleSubscription* __this, ::g::Fuse::Reactive::SimpleVarArgFunction* func, uObject* context, uObject* listener)
{
    __this->ctor_2(func, context, listener);
}

// public override sealed void Dispose() :197
void SimpleVarArgFunction__SimpleSubscription__Dispose_fn(SimpleVarArgFunction__SimpleSubscription* __this)
{
    __this->_listener = NULL;
    __this->_func1 = NULL;
    ::g::Fuse::Reactive::VarArgFunction__Subscription__Dispose_fn(__this);
}

// public SimpleSubscription New(Fuse.Reactive.SimpleVarArgFunction func, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :179
void SimpleVarArgFunction__SimpleSubscription__New1_fn(::g::Fuse::Reactive::SimpleVarArgFunction* func, uObject* context, uObject* listener, SimpleVarArgFunction__SimpleSubscription** __retval)
{
    *__retval = SimpleVarArgFunction__SimpleSubscription::New1(func, context, listener);
}

// protected override sealed void OnNewArguments(Fuse.Reactive.VarArgFunction.Argument[] args) :192
void SimpleVarArgFunction__SimpleSubscription__OnNewArguments_fn(SimpleVarArgFunction__SimpleSubscription* __this, uArray* args)
{
    uPtr(__this->_func1)->OnNewArguments(args, __this->_listener);
}

// protected override sealed void OnNewPartialArguments(Fuse.Reactive.VarArgFunction.Argument[] args) :187
void SimpleVarArgFunction__SimpleSubscription__OnNewPartialArguments_fn(SimpleVarArgFunction__SimpleSubscription* __this, uArray* args)
{
    uPtr(__this->_func1)->OnNewPartialArguments(args, __this->_listener);
}

// public SimpleSubscription(Fuse.Reactive.SimpleVarArgFunction func, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [instance] :179
void SimpleVarArgFunction__SimpleSubscription::ctor_2(::g::Fuse::Reactive::SimpleVarArgFunction* func, uObject* context, uObject* listener)
{
    ctor_1(func, context);
    _func1 = func;
    _listener = listener;
    Init();
}

// public SimpleSubscription New(Fuse.Reactive.SimpleVarArgFunction func, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :179
SimpleVarArgFunction__SimpleSubscription* SimpleVarArgFunction__SimpleSubscription::New1(::g::Fuse::Reactive::SimpleVarArgFunction* func, uObject* context, uObject* listener)
{
    SimpleVarArgFunction__SimpleSubscription* obj1 = (SimpleVarArgFunction__SimpleSubscription*)uNew(SimpleVarArgFunction__SimpleSubscription_typeof());
    obj1->ctor_2(func, context, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/VarArgFunction.uno
// --------------------------------------------------------------------------------

// public abstract class SimpleVarArgFunction :137
// {
static void SimpleVarArgFunction_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(1);
}

::g::Fuse::Reactive::Expression_type* SimpleVarArgFunction_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::VarArgFunction_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(SimpleVarArgFunction);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.SimpleVarArgFunction", options);
    type->fp_build_ = SimpleVarArgFunction_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))SimpleVarArgFunction__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))SimpleVarArgFunction__Subscribe_fn;
    return type;
}

// protected void OnNewArguments(Fuse.Reactive.VarArgFunction.Argument[] args, Fuse.Reactive.IListener listener) :169
void SimpleVarArgFunction__OnNewArguments_fn(SimpleVarArgFunction* __this, uArray* args, uObject* listener)
{
    __this->OnNewArguments(args, listener);
}

// protected void OnNewPartialArguments(Fuse.Reactive.VarArgFunction.Argument[] args, Fuse.Reactive.IListener listener) :154
void SimpleVarArgFunction__OnNewPartialArguments_fn(SimpleVarArgFunction* __this, uArray* args, uObject* listener)
{
    __this->OnNewPartialArguments(args, listener);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :139
void SimpleVarArgFunction__Subscribe_fn(SimpleVarArgFunction* __this, uObject* context, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)SimpleVarArgFunction__SimpleSubscription::New1(__this, context, listener), void();
}

// protected void OnNewArguments(Fuse.Reactive.VarArgFunction.Argument[] args, Fuse.Reactive.IListener listener) [instance] :169
void SimpleVarArgFunction::OnNewArguments(uArray* args, uObject* listener)
{
}

// protected void OnNewPartialArguments(Fuse.Reactive.VarArgFunction.Argument[] args, Fuse.Reactive.IListener listener) [instance] :154
void SimpleVarArgFunction::OnNewPartialArguments(uArray* args, uObject* listener)
{
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Snapshot.uno
// --------------------------------------------------------------------------

// public sealed class Snapshot :8
// {
static void Snapshot_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(Snapshot, _Source), 0);
}

::g::Fuse::Reactive::Expression_type* Snapshot_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Snapshot);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.Snapshot", options);
    type->fp_build_ = Snapshot_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))Snapshot__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))Snapshot__Subscribe_fn;
    return type;
}

// public generated Fuse.Reactive.Expression get_Source() :10
void Snapshot__get_Source_fn(Snapshot* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Fuse.Reactive.Expression value) :10
void Snapshot__set_Source_fn(Snapshot* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Source(value);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :18
void Snapshot__Subscribe_fn(Snapshot* __this, uObject* context, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)Snapshot__Subscription::New1(__this, context, listener), void();
}

// public generated Fuse.Reactive.Expression get_Source() [instance] :10
::g::Fuse::Reactive::Expression* Snapshot::Source()
{
    return _Source;
}

// private generated void set_Source(Fuse.Reactive.Expression value) [instance] :10
void Snapshot::Source(::g::Fuse::Reactive::Expression* value)
{
    _Source = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/VarArgFunction.uno
// --------------------------------------------------------------------------------

// protected abstract class VarArgFunction.Subscription :57
// {
static void VarArgFunction__Subscription_build(uType* type)
{
    ::TYPES[58] = ::g::Fuse::Reactive::VarArgFunction__Argument_typeof()->Array();
    ::TYPES[59] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Expression_typeof(), NULL);
    ::TYPES[60] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Expression_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(VarArgFunction__Subscription_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(VarArgFunction__Subscription_type, interface1));
    type->SetFields(2,
        ::TYPES[58/*Fuse.Reactive.VarArgFunction.Argument[]*/], offsetof(VarArgFunction__Subscription, _arguments), 0,
        ::g::Fuse::Reactive::IContext_typeof(), offsetof(VarArgFunction__Subscription, _context), 0,
        ::g::Fuse::Reactive::VarArgFunction_typeof(), offsetof(VarArgFunction__Subscription, _func), 0);
}

VarArgFunction__Subscription_type* VarArgFunction__Subscription_typeof()
{
    static uSStrong<VarArgFunction__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InnerListener_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(VarArgFunction__Subscription);
    options.TypeSize = sizeof(VarArgFunction__Subscription_type);
    type = (VarArgFunction__Subscription_type*)uClassType::New("Fuse.Reactive.VarArgFunction.Subscription", options);
    type->fp_build_ = VarArgFunction__Subscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))VarArgFunction__Subscription__Dispose_fn;
    type->fp_OnNewArguments = VarArgFunction__Subscription__OnNewArguments_fn;
    type->fp_OnNewData = (void(*)(::g::Fuse::Reactive::InnerListener*, uObject*, uObject*))VarArgFunction__Subscription__OnNewData_fn;
    type->fp_OnNewPartialArguments = VarArgFunction__Subscription__OnNewPartialArguments_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))VarArgFunction__Subscription__Dispose_fn;
    return type;
}

// protected Subscription(Fuse.Reactive.VarArgFunction func, Fuse.Reactive.IContext context) :64
void VarArgFunction__Subscription__ctor_1_fn(VarArgFunction__Subscription* __this, ::g::Fuse::Reactive::VarArgFunction* func, uObject* context)
{
    __this->ctor_1(func, context);
}

// public override void Dispose() :117
void VarArgFunction__Subscription__Dispose_fn(VarArgFunction__Subscription* __this)
{
    ::g::Fuse::Reactive::InnerListener__Dispose_fn(__this);

    for (int i = 0; i < uPtr(__this->_arguments)->Length(); i++)
        uPtr(uPtr(__this->_arguments)->Strong< ::g::Fuse::Reactive::VarArgFunction__Argument*>(i))->Dispose();

    __this->_func = NULL;
    __this->_arguments = NULL;
}

// protected void Init() :74
void VarArgFunction__Subscription__Init_fn(VarArgFunction__Subscription* __this)
{
    __this->Init();
}

// protected virtual void OnNewArguments(Fuse.Reactive.VarArgFunction.Argument[] args) :129
void VarArgFunction__Subscription__OnNewArguments_fn(VarArgFunction__Subscription* __this, uArray* args)
{
}

// protected override sealed void OnNewData(Fuse.Reactive.IExpression source, object value) :86
void VarArgFunction__Subscription__OnNewData_fn(VarArgFunction__Subscription* __this, uObject* source, uObject* value)
{
    ::g::Fuse::Reactive::Expression* ret2;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(__this->_func)->Arguments()), ::TYPES[59/*Uno.Collections.ICollection<Fuse.Reactive.Expression>*/])); i++)
        if ((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(__this->_func)->Arguments()), ::TYPES[60/*Uno.Collections.IList<Fuse.Reactive.Expression>*/]), uCRef<int>(i), &ret2), ret2) == source)
        {
            uPtr(uPtr(__this->_arguments)->Strong< ::g::Fuse::Reactive::VarArgFunction__Argument*>(i))->Value(value);
            uPtr(uPtr(__this->_arguments)->Strong< ::g::Fuse::Reactive::VarArgFunction__Argument*>(i))->HasValue(true);
        }

    __this->PushData();
}

// protected virtual void OnNewPartialArguments(Fuse.Reactive.VarArgFunction.Argument[] args) :128
void VarArgFunction__Subscription__OnNewPartialArguments_fn(VarArgFunction__Subscription* __this, uArray* args)
{
}

// private void PushData() :100
void VarArgFunction__Subscription__PushData_fn(VarArgFunction__Subscription* __this)
{
    __this->PushData();
}

// protected Subscription(Fuse.Reactive.VarArgFunction func, Fuse.Reactive.IContext context) [instance] :64
void VarArgFunction__Subscription::ctor_1(::g::Fuse::Reactive::VarArgFunction* func, uObject* context)
{
    ctor_();
    _func = func;
    _arguments = uArray::New(::TYPES[58/*Fuse.Reactive.VarArgFunction.Argument[]*/], ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(func)->Arguments()), ::TYPES[59/*Uno.Collections.ICollection<Fuse.Reactive.Expression>*/])));
    _context = context;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(func->Arguments()), ::TYPES[59/*Uno.Collections.ICollection<Fuse.Reactive.Expression>*/])); i++)
        uPtr(_arguments)->Strong< ::g::Fuse::Reactive::VarArgFunction__Argument*>(i) = ::g::Fuse::Reactive::VarArgFunction__Argument::New1();
}

// protected void Init() [instance] :74
void VarArgFunction__Subscription::Init()
{
    ::g::Fuse::Reactive::Expression* ret1;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(_func)->Arguments()), ::TYPES[59/*Uno.Collections.ICollection<Fuse.Reactive.Expression>*/])); i++)
        uPtr(uPtr(_arguments)->Strong< ::g::Fuse::Reactive::VarArgFunction__Argument*>(i))->Subscription = uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(_func)->Arguments()), ::TYPES[60/*Uno.Collections.IList<Fuse.Reactive.Expression>*/]), uCRef<int>(i), &ret1), ret1))->Subscribe(_context, (uObject*)this);

    PushData();
}

// private void PushData() [instance] :100
void VarArgFunction__Subscription::PushData()
{
    bool all = true;

    for (int i = 0; i < uPtr(_arguments)->Length(); i++)
        if (!uPtr(uPtr(_arguments)->Strong< ::g::Fuse::Reactive::VarArgFunction__Argument*>(i))->HasValue())
        {
            all = false;
            break;
        }

    OnNewPartialArguments(_arguments);

    if (all)
        OnNewArguments(_arguments);
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/UnaryOperator.uno
// -------------------------------------------------------------------------------

// protected class UnaryOperator.Subscription :31
// {
static void UnaryOperator__Subscription_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::IDisposable_typeof();
    ::TYPES[45] = ::g::Fuse::MarshalException_typeof();
    ::TYPES[28] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::TYPES[3/*Uno.IDisposable*/], offsetof(UnaryOperator__Subscription_type, interface0),
        ::TYPES[28/*Fuse.Reactive.IListener*/], offsetof(UnaryOperator__Subscription_type, interface1));
    type->SetFields(2,
        ::TYPES[28/*Fuse.Reactive.IListener*/], offsetof(UnaryOperator__Subscription, _listener), 0,
        ::TYPES[3/*Uno.IDisposable*/], offsetof(UnaryOperator__Subscription, _operandSub), 0,
        ::g::Fuse::Reactive::UnaryOperator_typeof(), offsetof(UnaryOperator__Subscription, _uo), 0);
}

UnaryOperator__Subscription_type* UnaryOperator__Subscription_typeof()
{
    static uSStrong<UnaryOperator__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InnerListener_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(UnaryOperator__Subscription);
    options.TypeSize = sizeof(UnaryOperator__Subscription_type);
    type = (UnaryOperator__Subscription_type*)uClassType::New("Fuse.Reactive.UnaryOperator.Subscription", options);
    type->fp_build_ = UnaryOperator__Subscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))UnaryOperator__Subscription__Dispose_fn;
    type->fp_OnNewData = (void(*)(::g::Fuse::Reactive::InnerListener*, uObject*, uObject*))UnaryOperator__Subscription__OnNewData_fn;
    type->fp_OnNewOperand = UnaryOperator__Subscription__OnNewOperand_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))UnaryOperator__Subscription__Dispose_fn;
    return type;
}

// protected Subscription(Fuse.Reactive.UnaryOperator uo, Fuse.Reactive.IListener listener) :37
void UnaryOperator__Subscription__ctor_1_fn(UnaryOperator__Subscription* __this, ::g::Fuse::Reactive::UnaryOperator* uo, uObject* listener)
{
    __this->ctor_1(uo, listener);
}

// public static Fuse.Reactive.UnaryOperator.Subscription Create(Fuse.Reactive.UnaryOperator uo, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :43
void UnaryOperator__Subscription__Create_fn(::g::Fuse::Reactive::UnaryOperator* uo, uObject* context, uObject* listener, UnaryOperator__Subscription** __retval)
{
    *__retval = UnaryOperator__Subscription::Create(uo, context, listener);
}

// public override sealed void Dispose() :57
void UnaryOperator__Subscription__Dispose_fn(UnaryOperator__Subscription* __this)
{
    ::g::Fuse::Reactive::InnerListener__Dispose_fn(__this);

    if (__this->_operandSub != NULL)
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_operandSub), ::TYPES[3/*Uno.IDisposable*/]));

    __this->_operandSub = NULL;
}

// protected void Init(Fuse.Reactive.IContext context) :52
void UnaryOperator__Subscription__Init_fn(UnaryOperator__Subscription* __this, uObject* context)
{
    __this->Init(context);
}

// protected Subscription New(Fuse.Reactive.UnaryOperator uo, Fuse.Reactive.IListener listener) :37
void UnaryOperator__Subscription__New1_fn(::g::Fuse::Reactive::UnaryOperator* uo, uObject* listener, UnaryOperator__Subscription** __retval)
{
    *__retval = UnaryOperator__Subscription::New1(uo, listener);
}

// protected override sealed void OnNewData(Fuse.Reactive.IExpression source, object value) :64
void UnaryOperator__Subscription__OnNewData_fn(UnaryOperator__Subscription* __this, uObject* source, uObject* value)
{
    __this->OnNewOperand(value);
}

// protected virtual void OnNewOperand(object value) :69
void UnaryOperator__Subscription__OnNewOperand_fn(UnaryOperator__Subscription* __this, uObject* value)
{
    __this->ClearDiagnostic();

    try
    {
        uPtr(__this->_uo)->OnNewOperand(__this->_listener, value);
    }
    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[45/*Fuse.MarshalException*/]))
        {
            ::g::Fuse::MarshalException* me = (::g::Fuse::MarshalException*)__t.Exception;
            __this->SetDiagnostic(uPtr(me)->Message(), (uObject*)__this->_uo);
        }
        else throw __t;
    }
}

// protected void PushNewData(object value) :83
void UnaryOperator__Subscription__PushNewData_fn(UnaryOperator__Subscription* __this, uObject* value)
{
    __this->PushNewData(value);
}

// protected Subscription(Fuse.Reactive.UnaryOperator uo, Fuse.Reactive.IListener listener) [instance] :37
void UnaryOperator__Subscription::ctor_1(::g::Fuse::Reactive::UnaryOperator* uo, uObject* listener)
{
    ctor_();
    _uo = uo;
    _listener = listener;
}

// protected void Init(Fuse.Reactive.IContext context) [instance] :52
void UnaryOperator__Subscription::Init(uObject* context)
{
    _operandSub = uPtr(uPtr(_uo)->Operand())->Subscribe(context, (uObject*)this);
}

// protected void PushNewData(object value) [instance] :83
void UnaryOperator__Subscription::PushNewData(uObject* value)
{
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[28/*Fuse.Reactive.IListener*/]), (uObject*)_uo, value);
}

// public static Fuse.Reactive.UnaryOperator.Subscription Create(Fuse.Reactive.UnaryOperator uo, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :43
UnaryOperator__Subscription* UnaryOperator__Subscription::Create(::g::Fuse::Reactive::UnaryOperator* uo, uObject* context, uObject* listener)
{
    UnaryOperator__Subscription* sub = UnaryOperator__Subscription::New1(uo, listener);
    sub->Init(context);
    return sub;
}

// protected Subscription New(Fuse.Reactive.UnaryOperator uo, Fuse.Reactive.IListener listener) [static] :37
UnaryOperator__Subscription* UnaryOperator__Subscription::New1(::g::Fuse::Reactive::UnaryOperator* uo, uObject* listener)
{
    UnaryOperator__Subscription* obj1 = (UnaryOperator__Subscription*)uNew(UnaryOperator__Subscription_typeof());
    obj1->ctor_1(uo, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/BinaryOperator.uno
// --------------------------------------------------------------------------------

// private sealed class BinaryOperator.Subscription :40
// {
static void BinaryOperator__Subscription_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::IDisposable_typeof();
    ::TYPES[45] = ::g::Fuse::MarshalException_typeof();
    type->SetInterfaces(
        ::TYPES[3/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::InnerListener_type, interface1));
    type->SetFields(2,
        ::g::Fuse::Reactive::BinaryOperator_typeof(), offsetof(BinaryOperator__Subscription, _bo), 0,
        ::g::Uno::Bool_typeof(), offsetof(BinaryOperator__Subscription, _hasLeft), 0,
        ::g::Uno::Bool_typeof(), offsetof(BinaryOperator__Subscription, _hasRight), 0,
        uObject_typeof(), offsetof(BinaryOperator__Subscription, _left), 0,
        ::TYPES[3/*Uno.IDisposable*/], offsetof(BinaryOperator__Subscription, _leftSub), 0,
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(BinaryOperator__Subscription, _listener), 0,
        uObject_typeof(), offsetof(BinaryOperator__Subscription, _right), 0,
        ::TYPES[3/*Uno.IDisposable*/], offsetof(BinaryOperator__Subscription, _rightSub), 0);
}

::g::Fuse::Reactive::InnerListener_type* BinaryOperator__Subscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InnerListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InnerListener_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(BinaryOperator__Subscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InnerListener_type);
    type = (::g::Fuse::Reactive::InnerListener_type*)uClassType::New("Fuse.Reactive.BinaryOperator.Subscription", options);
    type->fp_build_ = BinaryOperator__Subscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))BinaryOperator__Subscription__Dispose_fn;
    type->fp_OnNewData = (void(*)(::g::Fuse::Reactive::InnerListener*, uObject*, uObject*))BinaryOperator__Subscription__OnNewData_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))BinaryOperator__Subscription__Dispose_fn;
    return type;
}

// protected Subscription(Fuse.Reactive.BinaryOperator bo, Fuse.Reactive.IListener listener) :52
void BinaryOperator__Subscription__ctor_1_fn(BinaryOperator__Subscription* __this, ::g::Fuse::Reactive::BinaryOperator* bo, uObject* listener)
{
    __this->ctor_1(bo, listener);
}

// public static Fuse.Reactive.BinaryOperator.Subscription Create(Fuse.Reactive.BinaryOperator bo, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :58
void BinaryOperator__Subscription__Create_fn(::g::Fuse::Reactive::BinaryOperator* bo, uObject* context, uObject* listener, BinaryOperator__Subscription** __retval)
{
    *__retval = BinaryOperator__Subscription::Create(bo, context, listener);
}

// public override sealed void Dispose() :96
void BinaryOperator__Subscription__Dispose_fn(BinaryOperator__Subscription* __this)
{
    ::g::Fuse::Reactive::InnerListener__Dispose_fn(__this);

    if (__this->_leftSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_leftSub), ::TYPES[3/*Uno.IDisposable*/]));
        __this->_leftSub = NULL;
    }

    if (__this->_rightSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_rightSub), ::TYPES[3/*Uno.IDisposable*/]));
        __this->_rightSub = NULL;
    }

    __this->_listener = NULL;
}

// protected void Init(Fuse.Reactive.IContext context) :67
void BinaryOperator__Subscription__Init_fn(BinaryOperator__Subscription* __this, uObject* context)
{
    __this->Init(context);
}

// protected Subscription New(Fuse.Reactive.BinaryOperator bo, Fuse.Reactive.IListener listener) :52
void BinaryOperator__Subscription__New1_fn(::g::Fuse::Reactive::BinaryOperator* bo, uObject* listener, BinaryOperator__Subscription** __retval)
{
    *__retval = BinaryOperator__Subscription::New1(bo, listener);
}

// protected override sealed void OnNewData(Fuse.Reactive.IExpression source, object value) :73
void BinaryOperator__Subscription__OnNewData_fn(BinaryOperator__Subscription* __this, uObject* source, uObject* value)
{
    if (source == uPtr(__this->_bo)->Left())
    {
        __this->_hasLeft = true;
        __this->_left = value;
    }

    if (source == uPtr(__this->_bo)->Right())
    {
        __this->_hasRight = true;
        __this->_right = value;
    }

    if ((__this->_hasLeft || uPtr(__this->_bo)->IsLeftOptional()) && (__this->_hasRight || uPtr(__this->_bo)->IsRightOptional()))
        __this->OnNewOperands(__this->_left, __this->_right);
}

// protected void OnNewOperands(object left, object right) :82
void BinaryOperator__Subscription__OnNewOperands_fn(BinaryOperator__Subscription* __this, uObject* left, uObject* right)
{
    __this->OnNewOperands(left, right);
}

// protected Subscription(Fuse.Reactive.BinaryOperator bo, Fuse.Reactive.IListener listener) [instance] :52
void BinaryOperator__Subscription::ctor_1(::g::Fuse::Reactive::BinaryOperator* bo, uObject* listener)
{
    ctor_();
    _bo = bo;
    _listener = listener;
}

// protected void Init(Fuse.Reactive.IContext context) [instance] :67
void BinaryOperator__Subscription::Init(uObject* context)
{
    _leftSub = uPtr(uPtr(_bo)->Left())->Subscribe(context, (uObject*)this);
    _rightSub = uPtr(uPtr(_bo)->Right())->Subscribe(context, (uObject*)this);
}

// protected void OnNewOperands(object left, object right) [instance] :82
void BinaryOperator__Subscription::OnNewOperands(uObject* left, uObject* right)
{
    ClearDiagnostic();

    try
    {
        uPtr(_bo)->OnNewOperands(_listener, left, right);
    }
    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[45/*Fuse.MarshalException*/]))
        {
            ::g::Fuse::MarshalException* me = (::g::Fuse::MarshalException*)__t.Exception;
            SetDiagnostic(uPtr(me)->Message(), (uObject*)_bo);
        }
        else throw __t;
    }
}

// public static Fuse.Reactive.BinaryOperator.Subscription Create(Fuse.Reactive.BinaryOperator bo, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :58
BinaryOperator__Subscription* BinaryOperator__Subscription::Create(::g::Fuse::Reactive::BinaryOperator* bo, uObject* context, uObject* listener)
{
    BinaryOperator__Subscription* res = BinaryOperator__Subscription::New1(bo, listener);
    res->Init(context);
    return res;
}

// protected Subscription New(Fuse.Reactive.BinaryOperator bo, Fuse.Reactive.IListener listener) [static] :52
BinaryOperator__Subscription* BinaryOperator__Subscription::New1(::g::Fuse::Reactive::BinaryOperator* bo, uObject* listener)
{
    BinaryOperator__Subscription* obj1 = (BinaryOperator__Subscription*)uNew(BinaryOperator__Subscription_typeof());
    obj1->ctor_1(bo, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Property.uno
// --------------------------------------------------------------------------

// private sealed class Property.Subscription :25
// {
static void Property__Subscription_build(uType* type)
{
    ::TYPES[28] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetDependencies(
        ::g::Uno::UX::Selector_typeof());
    type->SetInterfaces(
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(Property__Subscription_type, interface0),
        ::g::Fuse::Reactive::IWriteable_typeof(), offsetof(Property__Subscription_type, interface1),
        ::g::Uno::IDisposable_typeof(), offsetof(Property__Subscription_type, interface2));
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), offsetof(Property__Subscription, _accessor), 0,
        ::TYPES[28/*Fuse.Reactive.IListener*/], offsetof(Property__Subscription, _listener), 0,
        ::g::Uno::UX::PropertyObject_typeof(), offsetof(Property__Subscription, _object), 0,
        ::g::Fuse::Reactive::Property_typeof(), offsetof(Property__Subscription, _prop), 0);
}

Property__Subscription_type* Property__Subscription_typeof()
{
    static uSStrong<Property__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 3;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Property__Subscription);
    options.TypeSize = sizeof(Property__Subscription_type);
    type = (Property__Subscription_type*)uClassType::New("Fuse.Reactive.Property.Subscription", options);
    type->fp_build_ = Property__Subscription_build;
    type->interface0.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))Property__Subscription__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface1.fp_SetExclusive = (void(*)(uObject*, uObject*))Property__Subscription__SetExclusive_fn;
    type->interface2.fp_Dispose = (void(*)(uObject*))Property__Subscription__Dispose_fn;
    return type;
}

// public Subscription(Fuse.Reactive.Property prop, Uno.UX.PropertyObject obj, Uno.UX.PropertyAccessor accessor, Fuse.Reactive.IListener listener) :32
void Property__Subscription__ctor__fn(Property__Subscription* __this, ::g::Fuse::Reactive::Property* prop, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::PropertyAccessor* accessor, uObject* listener)
{
    __this->ctor_(prop, obj, accessor, listener);
}

// public void Dispose() :51
void Property__Subscription__Dispose_fn(Property__Subscription* __this)
{
    __this->Dispose();
}

// public Subscription New(Fuse.Reactive.Property prop, Uno.UX.PropertyObject obj, Uno.UX.PropertyAccessor accessor, Fuse.Reactive.IListener listener) :32
void Property__Subscription__New1_fn(::g::Fuse::Reactive::Property* prop, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::PropertyAccessor* accessor, uObject* listener, Property__Subscription** __retval)
{
    *__retval = Property__Subscription::New1(prop, obj, accessor, listener);
}

// private void PushValue() :64
void Property__Subscription__PushValue_fn(Property__Subscription* __this)
{
    __this->PushValue();
}

// public void SetExclusive(object value) :44
void Property__Subscription__SetExclusive_fn(Property__Subscription* __this, uObject* value)
{
    __this->SetExclusive(value);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :59
void Property__Subscription__UnoUXIPropertyListenerOnPropertyChanged_fn(Property__Subscription* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    ::g::Uno::UX::Selector prop_ = *prop;

    if (::g::Uno::UX::Selector__op_Equality(prop_, uPtr(__this->_accessor)->Name()))
        __this->PushValue();
}

// public Subscription(Fuse.Reactive.Property prop, Uno.UX.PropertyObject obj, Uno.UX.PropertyAccessor accessor, Fuse.Reactive.IListener listener) [instance] :32
void Property__Subscription::ctor_(::g::Fuse::Reactive::Property* prop, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::PropertyAccessor* accessor, uObject* listener)
{
    _prop = prop;
    _listener = listener;
    _accessor = accessor;
    _object = obj;
    uPtr(_object)->AddPropertyListener((uObject*)this);
    PushValue();
}

// public void Dispose() [instance] :51
void Property__Subscription::Dispose()
{
    uPtr(_object)->RemovePropertyListener((uObject*)this);
    _accessor = NULL;
    _object = NULL;
    _listener = NULL;
}

// private void PushValue() [instance] :64
void Property__Subscription::PushValue()
{
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[28/*Fuse.Reactive.IListener*/]), (uObject*)_prop, uPtr(_accessor)->GetAsObject(_object));
}

// public void SetExclusive(object value) [instance] :44
void Property__Subscription::SetExclusive(uObject* value)
{
    uObject* res;

    if (::g::Fuse::Marshal::TryConvertTo(uPtr(_accessor)->PropertyType(), value, &res, _object))
        uPtr(_accessor)->SetAsObject(_object, res, (uObject*)this);
}

// public Subscription New(Fuse.Reactive.Property prop, Uno.UX.PropertyObject obj, Uno.UX.PropertyAccessor accessor, Fuse.Reactive.IListener listener) [static] :32
Property__Subscription* Property__Subscription::New1(::g::Fuse::Reactive::Property* prop, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::PropertyAccessor* accessor, uObject* listener)
{
    Property__Subscription* obj1 = (Property__Subscription*)uNew(Property__Subscription_typeof());
    obj1->ctor_(prop, obj, accessor, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/QuaternaryOperator.uno
// ------------------------------------------------------------------------------------

// private sealed class QuaternaryOperator.Subscription :35
// {
static void QuaternaryOperator__Subscription_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::IDisposable_typeof();
    ::TYPES[45] = ::g::Fuse::MarshalException_typeof();
    ::TYPES[28] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::TYPES[3/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface0),
        ::TYPES[28/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface1));
    type->SetFields(2,
        uObject_typeof(), offsetof(QuaternaryOperator__Subscription, _first), 0,
        ::TYPES[3/*Uno.IDisposable*/], offsetof(QuaternaryOperator__Subscription, _firstSub), 0,
        uObject_typeof(), offsetof(QuaternaryOperator__Subscription, _fourth), 0,
        ::TYPES[3/*Uno.IDisposable*/], offsetof(QuaternaryOperator__Subscription, _fourthSub), 0,
        ::g::Uno::Bool_typeof(), offsetof(QuaternaryOperator__Subscription, _hasFirst), 0,
        ::g::Uno::Bool_typeof(), offsetof(QuaternaryOperator__Subscription, _hasFourth), 0,
        ::g::Uno::Bool_typeof(), offsetof(QuaternaryOperator__Subscription, _hasSecond), 0,
        ::g::Uno::Bool_typeof(), offsetof(QuaternaryOperator__Subscription, _hasThird), 0,
        ::TYPES[28/*Fuse.Reactive.IListener*/], offsetof(QuaternaryOperator__Subscription, _listener), 0,
        ::g::Fuse::Reactive::QuaternaryOperator_typeof(), offsetof(QuaternaryOperator__Subscription, _qo), 0,
        uObject_typeof(), offsetof(QuaternaryOperator__Subscription, _second), 0,
        ::TYPES[3/*Uno.IDisposable*/], offsetof(QuaternaryOperator__Subscription, _secondSub), 0,
        uObject_typeof(), offsetof(QuaternaryOperator__Subscription, _third), 0,
        ::TYPES[3/*Uno.IDisposable*/], offsetof(QuaternaryOperator__Subscription, _thirdSub), 0);
}

::g::Fuse::Reactive::InnerListener_type* QuaternaryOperator__Subscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InnerListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InnerListener_typeof();
    options.FieldCount = 16;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(QuaternaryOperator__Subscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InnerListener_type);
    type = (::g::Fuse::Reactive::InnerListener_type*)uClassType::New("Fuse.Reactive.QuaternaryOperator.Subscription", options);
    type->fp_build_ = QuaternaryOperator__Subscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))QuaternaryOperator__Subscription__Dispose_fn;
    type->fp_OnNewData = (void(*)(::g::Fuse::Reactive::InnerListener*, uObject*, uObject*))QuaternaryOperator__Subscription__OnNewData_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))QuaternaryOperator__Subscription__Dispose_fn;
    return type;
}

// protected Subscription(Fuse.Reactive.QuaternaryOperator qo, Fuse.Reactive.IListener listener) :48
void QuaternaryOperator__Subscription__ctor_1_fn(QuaternaryOperator__Subscription* __this, ::g::Fuse::Reactive::QuaternaryOperator* qo, uObject* listener)
{
    __this->ctor_1(qo, listener);
}

// public static Fuse.Reactive.QuaternaryOperator.Subscription Create(Fuse.Reactive.QuaternaryOperator qo, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :54
void QuaternaryOperator__Subscription__Create_fn(::g::Fuse::Reactive::QuaternaryOperator* qo, uObject* context, uObject* listener, QuaternaryOperator__Subscription** __retval)
{
    *__retval = QuaternaryOperator__Subscription::Create(qo, context, listener);
}

// public override sealed void Dispose() :96
void QuaternaryOperator__Subscription__Dispose_fn(QuaternaryOperator__Subscription* __this)
{
    ::g::Fuse::Reactive::InnerListener__Dispose_fn(__this);

    if (__this->_firstSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_firstSub), ::TYPES[3/*Uno.IDisposable*/]));
        __this->_firstSub = NULL;
    }

    if (__this->_secondSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_secondSub), ::TYPES[3/*Uno.IDisposable*/]));
        __this->_secondSub = NULL;
    }

    if (__this->_thirdSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_thirdSub), ::TYPES[3/*Uno.IDisposable*/]));
        __this->_thirdSub = NULL;
    }

    if (__this->_fourthSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_fourthSub), ::TYPES[3/*Uno.IDisposable*/]));
        __this->_fourthSub = NULL;
    }

    __this->_listener = NULL;
}

// protected void Init(Fuse.Reactive.IContext context) :63
void QuaternaryOperator__Subscription__Init_fn(QuaternaryOperator__Subscription* __this, uObject* context)
{
    __this->Init(context);
}

// protected Subscription New(Fuse.Reactive.QuaternaryOperator qo, Fuse.Reactive.IListener listener) :48
void QuaternaryOperator__Subscription__New1_fn(::g::Fuse::Reactive::QuaternaryOperator* qo, uObject* listener, QuaternaryOperator__Subscription** __retval)
{
    *__retval = QuaternaryOperator__Subscription::New1(qo, listener);
}

// protected override sealed void OnNewData(Fuse.Reactive.IExpression source, object value) :71
void QuaternaryOperator__Subscription__OnNewData_fn(QuaternaryOperator__Subscription* __this, uObject* source, uObject* value)
{
    if (source == uPtr(__this->_qo)->First())
    {
        __this->_hasFirst = true;
        __this->_first = value;
    }

    if (source == uPtr(__this->_qo)->Second())
    {
        __this->_hasSecond = true;
        __this->_second = value;
    }

    if (source == uPtr(__this->_qo)->Third())
    {
        __this->_hasThird = true;
        __this->_third = value;
    }

    if (source == uPtr(__this->_qo)->Fourth())
    {
        __this->_hasFourth = true;
        __this->_fourth = value;
    }

    if ((((__this->_hasFirst || uPtr(__this->_qo)->IsFirstOptional()) && (__this->_hasSecond || uPtr(__this->_qo)->IsSecondOptional())) && (__this->_hasThird || uPtr(__this->_qo)->IsThirdOptional())) && (__this->_hasFourth || uPtr(__this->_qo)->IsFourthOptional()))
        __this->OnNewOperands(__this->_first, __this->_second, __this->_third, __this->_fourth);
}

// protected void OnNewOperands(object first, object second, object third, object fourth) :82
void QuaternaryOperator__Subscription__OnNewOperands_fn(QuaternaryOperator__Subscription* __this, uObject* first, uObject* second, uObject* third, uObject* fourth)
{
    __this->OnNewOperands(first, second, third, fourth);
}

// protected Subscription(Fuse.Reactive.QuaternaryOperator qo, Fuse.Reactive.IListener listener) [instance] :48
void QuaternaryOperator__Subscription::ctor_1(::g::Fuse::Reactive::QuaternaryOperator* qo, uObject* listener)
{
    ctor_();
    _qo = qo;
    _listener = listener;
}

// protected void Init(Fuse.Reactive.IContext context) [instance] :63
void QuaternaryOperator__Subscription::Init(uObject* context)
{
    _firstSub = uPtr(uPtr(_qo)->First())->Subscribe(context, (uObject*)this);
    _secondSub = uPtr(uPtr(_qo)->Second())->Subscribe(context, (uObject*)this);
    _thirdSub = uPtr(uPtr(_qo)->Third())->Subscribe(context, (uObject*)this);
    _fourthSub = uPtr(uPtr(_qo)->Fourth())->Subscribe(context, (uObject*)this);
}

// protected void OnNewOperands(object first, object second, object third, object fourth) [instance] :82
void QuaternaryOperator__Subscription::OnNewOperands(uObject* first, uObject* second, uObject* third, uObject* fourth)
{
    ClearDiagnostic();

    try
    {
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[28/*Fuse.Reactive.IListener*/]), (uObject*)_qo, uPtr(_qo)->Compute(first, second, third, fourth));
    }
    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[45/*Fuse.MarshalException*/]))
        {
            ::g::Fuse::MarshalException* me = (::g::Fuse::MarshalException*)__t.Exception;
            SetDiagnostic(uPtr(me)->Message(), (uObject*)_qo);
        }
        else throw __t;
    }
}

// public static Fuse.Reactive.QuaternaryOperator.Subscription Create(Fuse.Reactive.QuaternaryOperator qo, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :54
QuaternaryOperator__Subscription* QuaternaryOperator__Subscription::Create(::g::Fuse::Reactive::QuaternaryOperator* qo, uObject* context, uObject* listener)
{
    QuaternaryOperator__Subscription* res = QuaternaryOperator__Subscription::New1(qo, listener);
    res->Init(context);
    return res;
}

// protected Subscription New(Fuse.Reactive.QuaternaryOperator qo, Fuse.Reactive.IListener listener) [static] :48
QuaternaryOperator__Subscription* QuaternaryOperator__Subscription::New1(::g::Fuse::Reactive::QuaternaryOperator* qo, uObject* listener)
{
    QuaternaryOperator__Subscription* obj1 = (QuaternaryOperator__Subscription*)uNew(QuaternaryOperator__Subscription_typeof());
    obj1->ctor_1(qo, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/Observable.uno
// ---------------------------------------------------------------------------

// public sealed class Observable.Subscription :51
// {
// static generated Subscription() :51
static void Observable__Subscription__cctor__fn(uType* __type)
{
    Observable__Subscription::_counter_ = 1;
}

static void Observable__Subscription_build(uType* type)
{
    ::STRINGS[101] = uString::Const("clear");
    ::STRINGS[102] = uString::Const("replaceAllWithOrigin");
    ::STRINGS[103] = uString::Const("Unexpected null object");
    ::STRINGS[104] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/Observable.uno");
    ::STRINGS[105] = uString::Const("SetExclusive");
    ::STRINGS[106] = uString::Const("setValueWithOrigin");
    ::STRINGS[107] = uString::Const("Failed to set Observable value");
    ::TYPES[2] = ::g::Fuse::Reactive::IObserver_typeof();
    ::TYPES[4] = uObject_typeof()->Array();
    ::TYPES[30] = ::g::Fuse::IArray_typeof();
    ::TYPES[11] = ::g::Fuse::Scripting::ScriptException_typeof();
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Fuse::Reactive::JavaScript_typeof());
    type->SetInterfaces(
        ::g::Fuse::Reactive::ISubscription_typeof(), offsetof(Observable__Subscription_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Observable__Subscription_type, interface1));
    type->SetFields(1,
        ::TYPES[2/*Fuse.Reactive.IObserver*/], offsetof(Observable__Subscription, _obs), 0,
        ::g::Fuse::Reactive::Observable_typeof(), offsetof(Observable__Subscription, _om), 0,
        ::g::Uno::Int_typeof(), offsetof(Observable__Subscription, _origin), 0,
        ::g::Uno::Bool_typeof(), offsetof(Observable__Subscription, _Removed), 0,
        ::g::Uno::Int_typeof(), (uintptr_t)&Observable__Subscription::_counter_, uFieldFlagsStatic);
}

Observable__Subscription_type* Observable__Subscription_typeof()
{
    static uSStrong<Observable__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::DiagnosticSubject_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(Observable__Subscription);
    options.TypeSize = sizeof(Observable__Subscription_type);
    type = (Observable__Subscription_type*)uClassType::New("Fuse.Reactive.Observable.Subscription", options);
    type->fp_build_ = Observable__Subscription_build;
    type->fp_cctor_ = Observable__Subscription__cctor__fn;
    type->interface0.fp_ClearExclusive = (void(*)(uObject*))Observable__Subscription__ClearExclusive_fn;
    type->interface0.fp_SetExclusive = (void(*)(uObject*, uObject*))Observable__Subscription__SetExclusive_fn;
    type->interface0.fp_ReplaceAllExclusive = (void(*)(uObject*, uObject*))Observable__Subscription__ReplaceAllExclusive_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))Observable__Subscription__Dispose_fn;
    return type;
}

// public Subscription(Fuse.Reactive.Observable om, Fuse.Reactive.IObserver obs) :68
void Observable__Subscription__ctor_1_fn(Observable__Subscription* __this, ::g::Fuse::Reactive::Observable* om, uObject* obs)
{
    __this->ctor_1(om, obs);
}

// public void ClearExclusive() :118
void Observable__Subscription__ClearExclusive_fn(Observable__Subscription* __this)
{
    __this->ClearExclusive();
}

// public void Dispose() :126
void Observable__Subscription__Dispose_fn(Observable__Subscription* __this)
{
    __this->Dispose();
}

// public Subscription New(Fuse.Reactive.Observable om, Fuse.Reactive.IObserver obs) :68
void Observable__Subscription__New2_fn(::g::Fuse::Reactive::Observable* om, uObject* obs, Observable__Subscription** __retval)
{
    *__retval = Observable__Subscription::New2(om, obs);
}

// public Fuse.Reactive.IObserver get_Observer() :66
void Observable__Subscription__get_Observer_fn(Observable__Subscription* __this, uObject** __retval)
{
    *__retval = __this->Observer();
}

// public generated bool get_Removed() :57
void Observable__Subscription__get_Removed_fn(Observable__Subscription* __this, bool* __retval)
{
    *__retval = __this->Removed();
}

// private generated void set_Removed(bool value) :57
void Observable__Subscription__set_Removed_fn(Observable__Subscription* __this, bool* value)
{
    __this->Removed(*value);
}

// public void ReplaceAllExclusive(Fuse.IArray newValues) :106
void Observable__Subscription__ReplaceAllExclusive_fn(Observable__Subscription* __this, uObject* newValues)
{
    __this->ReplaceAllExclusive(newValues);
}

// public void SetExclusive(object newValue) :81
void Observable__Subscription__SetExclusive_fn(Observable__Subscription* __this, uObject* newValue)
{
    __this->SetExclusive(newValue);
}

// public bool ShouldSend([int origin]) :59
void Observable__Subscription__ShouldSend_fn(Observable__Subscription* __this, int* origin, bool* __retval)
{
    *__retval = __this->ShouldSend(*origin);
}

int Observable__Subscription::_counter_;

// public Subscription(Fuse.Reactive.Observable om, Fuse.Reactive.IObserver obs) [instance] :68
void Observable__Subscription::ctor_1(::g::Fuse::Reactive::Observable* om, uObject* obs)
{
    ctor_();
    Removed(false);
    _origin = (Observable__Subscription::_counter_++);
    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(om)->_observers), this);
    _om = om;
    _obs = obs;

    if (uPtr(_om)->Length() == 1)
        ::g::Fuse::Reactive::IObserver::OnSet(uInterface(uPtr(obs), ::TYPES[2/*Fuse.Reactive.IObserver*/]), uPtr(_om)->Item(0));
    else
        ::g::Fuse::Reactive::IObserver::OnNewAll(uInterface(uPtr(obs), ::TYPES[2/*Fuse.Reactive.IObserver*/]), (uObject*)_om);
}

// public void ClearExclusive() [instance] :118
void Observable__Subscription::ClearExclusive()
{
    uPtr(uPtr(_om)->Object())->CallMethod(::STRINGS[101/*"clear"*/], uArray::Init<uObject*>(::TYPES[4/*object[]*/], 1, uBox<int>(::TYPES[20/*int*/], _origin)));
}

// public void Dispose() [instance] :126
void Observable__Subscription::Dispose()
{
    Removed(true);
    uPtr(_om)->ObserversCleanup();
}

// public Fuse.Reactive.IObserver get_Observer() [instance] :66
uObject* Observable__Subscription::Observer()
{
    return _obs;
}

// public generated bool get_Removed() [instance] :57
bool Observable__Subscription::Removed()
{
    return _Removed;
}

// private generated void set_Removed(bool value) [instance] :57
void Observable__Subscription::Removed(bool value)
{
    _Removed = value;
}

// public void ReplaceAllExclusive(Fuse.IArray newValues) [instance] :106
void Observable__Subscription::ReplaceAllExclusive(uObject* newValues)
{
    uArray* arr = uArray::New(::TYPES[4/*object[]*/], ::g::Fuse::IArray::Length(uInterface(uPtr(newValues), ::TYPES[30/*Fuse.IArray*/])));

    for (int i = 0; i < arr->Length(); i++)
        uPtr(arr)->Strong<uObject*>(i) = uPtr(uPtr(_om)->_worker)->Unwrap(::g::Fuse::IArray::Item(uInterface(uPtr(newValues), ::TYPES[30/*Fuse.IArray*/]), i));

    ::g::Fuse::Scripting::Array* sa = uPtr(uPtr(uPtr(_om)->_worker)->Context())->NewArray(arr);
    uPtr(uPtr(_om)->Object())->CallMethod(::STRINGS[102/*"replaceAllW...*/], uArray::Init<uObject*>(::TYPES[4/*object[]*/], 2, sa, uBox<int>(::TYPES[20/*int*/], _origin)));
}

// public void SetExclusive(object newValue) [instance] :81
void Observable__Subscription::SetExclusive(uObject* newValue)
{
    ClearDiagnostic();

    if (uPtr(_om)->Object() == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[103/*"Unexpected ...*/], this, ::STRINGS[104/*"/usr/local/...*/], 87, ::STRINGS[105/*"SetExclusive"*/]);
        return;
    }

    try
    {
        uPtr(uPtr(_om)->Object())->CallMethod(::STRINGS[106/*"setValueWit...*/], uArray::Init<uObject*>(::TYPES[4/*object[]*/], 2, (uObject*)uPtr(uPtr(_om)->_worker)->Unwrap(newValue), uBox<int>(::TYPES[20/*int*/], _origin)));
    }
    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[11/*Fuse.Scripting.ScriptException*/]))
        {
            ::g::Fuse::Scripting::ScriptException* ex = (::g::Fuse::Scripting::ScriptException*)__t.Exception;
            ::g::Fuse::Reactive::JavaScript::UserScriptError(::STRINGS[107/*"Failed to s...*/], ex, this, ::STRINGS[104/*"/usr/local/...*/], 102, ::STRINGS[105/*"SetExclusive"*/]);
        }
        else throw __t;
    }
}

// public bool ShouldSend([int origin]) [instance] :59
bool Observable__Subscription::ShouldSend(int origin)
{
    return !Removed() && (origin != _origin);
}

// public Subscription New(Fuse.Reactive.Observable om, Fuse.Reactive.IObserver obs) [static] :68
Observable__Subscription* Observable__Subscription::New2(::g::Fuse::Reactive::Observable* om, uObject* obs)
{
    Observable__Subscription* obj1 = (Observable__Subscription*)uNew(Observable__Subscription_typeof());
    obj1->ctor_1(om, obs);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Snapshot.uno
// --------------------------------------------------------------------------

// private sealed class Snapshot.Subscription :23
// {
static void Snapshot__Subscription_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::IDisposable_typeof();
    ::TYPES[28] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::TYPES[3/*Uno.IDisposable*/], offsetof(Snapshot__Subscription_type, interface0),
        ::TYPES[28/*Fuse.Reactive.IListener*/], offsetof(Snapshot__Subscription_type, interface1));
    type->SetFields(0,
        ::TYPES[28/*Fuse.Reactive.IListener*/], offsetof(Snapshot__Subscription, _listener), 0,
        ::g::Fuse::Reactive::Snapshot_typeof(), offsetof(Snapshot__Subscription, _snap), 0,
        ::TYPES[3/*Uno.IDisposable*/], offsetof(Snapshot__Subscription, _sub), 0);
}

Snapshot__Subscription_type* Snapshot__Subscription_typeof()
{
    static uSStrong<Snapshot__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Snapshot__Subscription);
    options.TypeSize = sizeof(Snapshot__Subscription_type);
    type = (Snapshot__Subscription_type*)uClassType::New("Fuse.Reactive.Snapshot.Subscription", options);
    type->fp_build_ = Snapshot__Subscription_build;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))Snapshot__Subscription__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Snapshot__Subscription__Dispose_fn;
    return type;
}

// public Subscription(Fuse.Reactive.Snapshot snap, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :29
void Snapshot__Subscription__ctor__fn(Snapshot__Subscription* __this, ::g::Fuse::Reactive::Snapshot* snap, uObject* context, uObject* listener)
{
    __this->ctor_(snap, context, listener);
}

// public void Dispose() :36
void Snapshot__Subscription__Dispose_fn(Snapshot__Subscription* __this)
{
    __this->Dispose();
}

// private void Fuse.Reactive.IListener.OnNewData(Fuse.Reactive.IExpression source, object value) :46
void Snapshot__Subscription__FuseReactiveIListenerOnNewData_fn(Snapshot__Subscription* __this, uObject* source, uObject* value)
{
    if (__this->_listener != NULL)
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(__this->_listener), ::TYPES[28/*Fuse.Reactive.IListener*/]), (uObject*)__this->_snap, value);

    __this->Dispose();
}

// public Subscription New(Fuse.Reactive.Snapshot snap, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :29
void Snapshot__Subscription__New1_fn(::g::Fuse::Reactive::Snapshot* snap, uObject* context, uObject* listener, Snapshot__Subscription** __retval)
{
    *__retval = Snapshot__Subscription::New1(snap, context, listener);
}

// public Subscription(Fuse.Reactive.Snapshot snap, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [instance] :29
void Snapshot__Subscription::ctor_(::g::Fuse::Reactive::Snapshot* snap, uObject* context, uObject* listener)
{
    _snap = snap;
    _listener = listener;
    _sub = uPtr(uPtr(_snap)->Source())->Subscribe(context, (uObject*)this);
}

// public void Dispose() [instance] :36
void Snapshot__Subscription::Dispose()
{
    _listener = NULL;

    if (_sub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_sub), ::TYPES[3/*Uno.IDisposable*/]));
        _sub = NULL;
    }
}

// public Subscription New(Fuse.Reactive.Snapshot snap, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :29
Snapshot__Subscription* Snapshot__Subscription::New1(::g::Fuse::Reactive::Snapshot* snap, uObject* context, uObject* listener)
{
    Snapshot__Subscription* obj1 = (Snapshot__Subscription*)uNew(Snapshot__Subscription_typeof());
    obj1->ctor_(snap, context, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/TernaryOperator.uno
// ---------------------------------------------------------------------------------

// private sealed class TernaryOperator.Subscription :32
// {
static void TernaryOperator__Subscription_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::IDisposable_typeof();
    ::TYPES[45] = ::g::Fuse::MarshalException_typeof();
    ::TYPES[28] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::TYPES[3/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface0),
        ::TYPES[28/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface1));
    type->SetFields(2,
        uObject_typeof(), offsetof(TernaryOperator__Subscription, _first), 0,
        ::TYPES[3/*Uno.IDisposable*/], offsetof(TernaryOperator__Subscription, _firstSub), 0,
        ::g::Uno::Bool_typeof(), offsetof(TernaryOperator__Subscription, _hasFirst), 0,
        ::g::Uno::Bool_typeof(), offsetof(TernaryOperator__Subscription, _hasSecond), 0,
        ::g::Uno::Bool_typeof(), offsetof(TernaryOperator__Subscription, _hasThird), 0,
        ::TYPES[28/*Fuse.Reactive.IListener*/], offsetof(TernaryOperator__Subscription, _listener), 0,
        uObject_typeof(), offsetof(TernaryOperator__Subscription, _second), 0,
        ::TYPES[3/*Uno.IDisposable*/], offsetof(TernaryOperator__Subscription, _secondSub), 0,
        uObject_typeof(), offsetof(TernaryOperator__Subscription, _third), 0,
        ::TYPES[3/*Uno.IDisposable*/], offsetof(TernaryOperator__Subscription, _thirdSub), 0,
        ::g::Fuse::Reactive::TernaryOperator_typeof(), offsetof(TernaryOperator__Subscription, _to), 0);
}

::g::Fuse::Reactive::InnerListener_type* TernaryOperator__Subscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InnerListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InnerListener_typeof();
    options.FieldCount = 13;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TernaryOperator__Subscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InnerListener_type);
    type = (::g::Fuse::Reactive::InnerListener_type*)uClassType::New("Fuse.Reactive.TernaryOperator.Subscription", options);
    type->fp_build_ = TernaryOperator__Subscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))TernaryOperator__Subscription__Dispose_fn;
    type->fp_OnNewData = (void(*)(::g::Fuse::Reactive::InnerListener*, uObject*, uObject*))TernaryOperator__Subscription__OnNewData_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))TernaryOperator__Subscription__Dispose_fn;
    return type;
}

// protected Subscription(Fuse.Reactive.TernaryOperator to, Fuse.Reactive.IListener listener) :44
void TernaryOperator__Subscription__ctor_1_fn(TernaryOperator__Subscription* __this, ::g::Fuse::Reactive::TernaryOperator* to, uObject* listener)
{
    __this->ctor_1(to, listener);
}

// public static Fuse.Reactive.TernaryOperator.Subscription Create(Fuse.Reactive.TernaryOperator to, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :50
void TernaryOperator__Subscription__Create_fn(::g::Fuse::Reactive::TernaryOperator* to, uObject* context, uObject* listener, TernaryOperator__Subscription** __retval)
{
    *__retval = TernaryOperator__Subscription::Create(to, context, listener);
}

// public override sealed void Dispose() :90
void TernaryOperator__Subscription__Dispose_fn(TernaryOperator__Subscription* __this)
{
    ::g::Fuse::Reactive::InnerListener__Dispose_fn(__this);

    if (__this->_firstSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_firstSub), ::TYPES[3/*Uno.IDisposable*/]));
        __this->_firstSub = NULL;
    }

    if (__this->_secondSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_secondSub), ::TYPES[3/*Uno.IDisposable*/]));
        __this->_secondSub = NULL;
    }

    if (__this->_thirdSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_thirdSub), ::TYPES[3/*Uno.IDisposable*/]));
        __this->_thirdSub = NULL;
    }

    __this->_listener = NULL;
}

// protected void Init(Fuse.Reactive.IContext context) :59
void TernaryOperator__Subscription__Init_fn(TernaryOperator__Subscription* __this, uObject* context)
{
    __this->Init(context);
}

// protected Subscription New(Fuse.Reactive.TernaryOperator to, Fuse.Reactive.IListener listener) :44
void TernaryOperator__Subscription__New1_fn(::g::Fuse::Reactive::TernaryOperator* to, uObject* listener, TernaryOperator__Subscription** __retval)
{
    *__retval = TernaryOperator__Subscription::New1(to, listener);
}

// protected override sealed void OnNewData(Fuse.Reactive.IExpression source, object value) :66
void TernaryOperator__Subscription__OnNewData_fn(TernaryOperator__Subscription* __this, uObject* source, uObject* value)
{
    if (source == uPtr(__this->_to)->First())
    {
        __this->_hasFirst = true;
        __this->_first = value;
    }

    if (source == uPtr(__this->_to)->Second())
    {
        __this->_hasSecond = true;
        __this->_second = value;
    }

    if (source == uPtr(__this->_to)->Third())
    {
        __this->_hasThird = true;
        __this->_third = value;
    }

    if (((__this->_hasFirst || uPtr(__this->_to)->IsFirstOptional()) && (__this->_hasSecond || uPtr(__this->_to)->IsSecondOptional())) && (__this->_hasThird || uPtr(__this->_to)->IsThirdOptional()))
        __this->OnNewOperands(__this->_first, __this->_second, __this->_third);
}

// protected void OnNewOperands(object first, object second, object third) :76
void TernaryOperator__Subscription__OnNewOperands_fn(TernaryOperator__Subscription* __this, uObject* first, uObject* second, uObject* third)
{
    __this->OnNewOperands(first, second, third);
}

// protected Subscription(Fuse.Reactive.TernaryOperator to, Fuse.Reactive.IListener listener) [instance] :44
void TernaryOperator__Subscription::ctor_1(::g::Fuse::Reactive::TernaryOperator* to, uObject* listener)
{
    ctor_();
    _to = to;
    _listener = listener;
}

// protected void Init(Fuse.Reactive.IContext context) [instance] :59
void TernaryOperator__Subscription::Init(uObject* context)
{
    _firstSub = uPtr(uPtr(_to)->First())->Subscribe(context, (uObject*)this);
    _secondSub = uPtr(uPtr(_to)->Second())->Subscribe(context, (uObject*)this);
    _thirdSub = uPtr(uPtr(_to)->Third())->Subscribe(context, (uObject*)this);
}

// protected void OnNewOperands(object first, object second, object third) [instance] :76
void TernaryOperator__Subscription::OnNewOperands(uObject* first, uObject* second, uObject* third)
{
    ClearDiagnostic();

    try
    {
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[28/*Fuse.Reactive.IListener*/]), (uObject*)_to, uPtr(_to)->Compute(first, second, third));
    }
    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[45/*Fuse.MarshalException*/]))
        {
            ::g::Fuse::MarshalException* me = (::g::Fuse::MarshalException*)__t.Exception;
            SetDiagnostic(uPtr(me)->Message(), (uObject*)_to);
        }
        else throw __t;
    }
}

// public static Fuse.Reactive.TernaryOperator.Subscription Create(Fuse.Reactive.TernaryOperator to, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :50
TernaryOperator__Subscription* TernaryOperator__Subscription::Create(::g::Fuse::Reactive::TernaryOperator* to, uObject* context, uObject* listener)
{
    TernaryOperator__Subscription* sub = TernaryOperator__Subscription::New1(to, listener);
    sub->Init(context);
    return sub;
}

// protected Subscription New(Fuse.Reactive.TernaryOperator to, Fuse.Reactive.IListener listener) [static] :44
TernaryOperator__Subscription* TernaryOperator__Subscription::New1(::g::Fuse::Reactive::TernaryOperator* to, uObject* listener)
{
    TernaryOperator__Subscription* obj1 = (TernaryOperator__Subscription*)uNew(TernaryOperator__Subscription_typeof());
    obj1->ctor_1(to, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/Operators.uno
// ---------------------------------------------------------------------------

// public sealed class Subtract :31
// {
static void Subtract_build(uType* type)
{
    ::STRINGS[108] = uString::Const("-");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InfixOperator_type, interface0));
    type->SetFields(2);
}

::g::Fuse::Reactive::InfixOperator_type* Subtract_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InfixOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Subtract);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InfixOperator_type);
    type = (::g::Fuse::Reactive::InfixOperator_type*)uClassType::New("Fuse.Reactive.Subtract", options);
    type->fp_build_ = Subtract_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))Subtract__Compute_fn;
    type->fp_get_Symbol = (void(*)(::g::Fuse::Reactive::InfixOperator*, uString**))Subtract__get_Symbol_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// protected override sealed object Compute(object left, object right) :35
void Subtract__Compute_fn(Subtract* __this, uObject* left, uObject* right, uObject** __retval)
{
    return *__retval = ::g::Fuse::Marshal::Subtract(left, right), void();
}

// public override sealed string get_Symbol() :40
void Subtract__get_Symbol_fn(Subtract* __this, uString** __retval)
{
    return *__retval = ::STRINGS[108/*"-"*/], void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/Instance.WindowItems.uno
// -----------------------------------------------------------------------------------

// private struct Instantiator.TemplateMatch :106
// {
static void Instantiator__TemplateMatch_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(Instantiator__TemplateMatch, All), 0,
        ::g::Uno::UX::Template_typeof(), offsetof(Instantiator__TemplateMatch, Template), 0);
}

uStructType* Instantiator__TemplateMatch_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.Alignment = alignof(Instantiator__TemplateMatch);
    options.ValueSize = sizeof(Instantiator__TemplateMatch);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Reactive.Instantiator.TemplateMatch", options);
    type->fp_build_ = Instantiator__TemplateMatch_build;
    return type;
}

// public bool Matches(Fuse.Reactive.Instantiator.TemplateMatch b) :113
void Instantiator__TemplateMatch__Matches_fn(Instantiator__TemplateMatch* __this, Instantiator__TemplateMatch* b, bool* __retval)
{
    *__retval = __this->Matches(*b);
}

// public bool Matches(Fuse.Reactive.Instantiator.TemplateMatch b) [instance] :113
bool Instantiator__TemplateMatch::Matches(Instantiator__TemplateMatch b)
{
    if (All != b.All)
        return false;

    return Template == b.Template;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/TernaryOperator.uno
// ---------------------------------------------------------------------------------

// public abstract class TernaryOperator :8
// {
static void TernaryOperator_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(TernaryOperator_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(TernaryOperator, _First), 0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(TernaryOperator, _Second), 0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(TernaryOperator, _Third), 0);
}

TernaryOperator_type* TernaryOperator_typeof()
{
    static uSStrong<TernaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TernaryOperator);
    options.TypeSize = sizeof(TernaryOperator_type);
    type = (TernaryOperator_type*)uClassType::New("Fuse.Reactive.TernaryOperator", options);
    type->fp_build_ = TernaryOperator_build;
    type->fp_get_IsThirdOptional = TernaryOperator__get_IsThirdOptional_fn;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))TernaryOperator__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))TernaryOperator__Subscribe_fn;
    return type;
}

// public generated Fuse.Reactive.Expression get_First() :10
void TernaryOperator__get_First_fn(TernaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->First();
}

// private generated void set_First(Fuse.Reactive.Expression value) :10
void TernaryOperator__set_First_fn(TernaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->First(value);
}

// protected bool get_IsFirstOptional() :26
void TernaryOperator__get_IsFirstOptional_fn(TernaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsFirstOptional();
}

// protected bool get_IsSecondOptional() :27
void TernaryOperator__get_IsSecondOptional_fn(TernaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsSecondOptional();
}

// protected virtual bool get_IsThirdOptional() :28
void TernaryOperator__get_IsThirdOptional_fn(TernaryOperator* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public generated Fuse.Reactive.Expression get_Second() :11
void TernaryOperator__get_Second_fn(TernaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Second();
}

// private generated void set_Second(Fuse.Reactive.Expression value) :11
void TernaryOperator__set_Second_fn(TernaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Second(value);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :21
void TernaryOperator__Subscribe_fn(TernaryOperator* __this, uObject* context, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)TernaryOperator__Subscription::Create(__this, context, listener), void();
}

// public generated Fuse.Reactive.Expression get_Third() :12
void TernaryOperator__get_Third_fn(TernaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Third();
}

// private generated void set_Third(Fuse.Reactive.Expression value) :12
void TernaryOperator__set_Third_fn(TernaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Third(value);
}

// public generated Fuse.Reactive.Expression get_First() [instance] :10
::g::Fuse::Reactive::Expression* TernaryOperator::First()
{
    return _First;
}

// private generated void set_First(Fuse.Reactive.Expression value) [instance] :10
void TernaryOperator::First(::g::Fuse::Reactive::Expression* value)
{
    _First = value;
}

// protected bool get_IsFirstOptional() [instance] :26
bool TernaryOperator::IsFirstOptional()
{
    return false;
}

// protected bool get_IsSecondOptional() [instance] :27
bool TernaryOperator::IsSecondOptional()
{
    return false;
}

// public generated Fuse.Reactive.Expression get_Second() [instance] :11
::g::Fuse::Reactive::Expression* TernaryOperator::Second()
{
    return _Second;
}

// private generated void set_Second(Fuse.Reactive.Expression value) [instance] :11
void TernaryOperator::Second(::g::Fuse::Reactive::Expression* value)
{
    _Second = value;
}

// public generated Fuse.Reactive.Expression get_Third() [instance] :12
::g::Fuse::Reactive::Expression* TernaryOperator::Third()
{
    return _Third;
}

// private generated void set_Third(Fuse.Reactive.Expression value) [instance] :12
void TernaryOperator::Third(::g::Fuse::Reactive::Expression* value)
{
    _Third = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/ThreadWorker.Mirror.uno
// ------------------------------------------------------------------------------------

// internal partial sealed class ThreadWorker :8
// {
// static ThreadWorker() :10
static void ThreadWorker__cctor__fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass_typeof()->Init();
    ::g::Fuse::Scripting::ScriptClass::Register(uObject_typeof(), uArray::New(::g::Fuse::Scripting::ScriptMember_typeof()->Array(), 0));
}

static void ThreadWorker_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Application_typeof(),
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Fuse::Properties_typeof(),
        ::g::Fuse::Scripting::ScriptClass_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ThreadWorker_type, interface0),
        ::g::Uno::Threading::IDispatcher_typeof(), offsetof(ThreadWorker_type, interface1),
        ::g::Fuse::Scripting::IThreadWorker_typeof(), offsetof(ThreadWorker_type, interface2));
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), offsetof(ThreadWorker, _classInstanceProperty), 0,
        ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL), offsetof(ThreadWorker, _exceptionQueue), 0,
        ::g::Uno::Threading::ManualResetEvent_typeof(), offsetof(ThreadWorker, _idle), 0,
        ::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::g::Uno::Action_typeof(), NULL), offsetof(ThreadWorker, _queue), 0,
        ::g::Uno::Threading::ManualResetEvent_typeof(), offsetof(ThreadWorker, _ready), 0,
        ::g::Uno::Int_typeof(), offsetof(ThreadWorker, _reflectionDepth), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Scripting::ScriptClass_typeof(), ::g::Fuse::Scripting::Function_typeof(), NULL), offsetof(ThreadWorker, _registeredClasses), 0,
        ::g::Fuse::Scripting::Function_typeof(), offsetof(ThreadWorker, _setSuperclass), 0,
        ::g::Uno::Bool_typeof(), offsetof(ThreadWorker, _subscribedForClosing), 0,
        ::g::Uno::Threading::ManualResetEvent_typeof(), offsetof(ThreadWorker, _terminate), 0,
        ::g::Uno::Threading::Thread_typeof(), offsetof(ThreadWorker, _thread), 0,
        ::g::Fuse::Scripting::Context_typeof(), (uintptr_t)&ThreadWorker::_context_, uFieldFlagsStatic,
        ::g::Fuse::Reactive::FuseJS::Builtins_typeof(), (uintptr_t)&ThreadWorker::_fuseJS_, uFieldFlagsStatic);
}

ThreadWorker_type* ThreadWorker_typeof()
{
    static uSStrong<ThreadWorker_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.InterfaceCount = 3;
    options.DependencyCount = 4;
    options.ObjectSize = sizeof(ThreadWorker);
    options.TypeSize = sizeof(ThreadWorker_type);
    type = (ThreadWorker_type*)uClassType::New("Fuse.Reactive.ThreadWorker", options);
    type->fp_build_ = ThreadWorker_build;
    type->fp_ctor_ = (void*)ThreadWorker__New1_fn;
    type->fp_cctor_ = ThreadWorker__cctor__fn;
    type->interface2.fp_Wrap = (void(*)(uObject*, uObject*, uObject**))ThreadWorker__FuseScriptingIThreadWorkerWrap_fn;
    type->interface2.fp_get_Dispatcher = (void(*)(uObject*, uObject**))ThreadWorker__FuseScriptingIThreadWorkerget_Dispatcher_fn;
    type->interface2.fp_get_Observable = (void(*)(uObject*, ::g::Fuse::Scripting::Function**))ThreadWorker__FuseScriptingIThreadWorkerget_Observable_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ThreadWorker__Dispose_fn;
    type->interface1.fp_Invoke = (void(*)(uObject*, uDelegate*))ThreadWorker__Invoke_fn;
    type->interface2.fp_Unwrap = (void(*)(uObject*, uObject*, uObject**))ThreadWorker__Unwrap_fn;
    return type;
}

// public ThreadWorker() :37
void ThreadWorker__ctor__fn(ThreadWorker* __this)
{
    __this->ctor_();
}

// public void CheckAndThrow() :174
void ThreadWorker__CheckAndThrow_fn(ThreadWorker* __this)
{
    __this->CheckAndThrow();
}

// public Fuse.Scripting.Context get_Context() :24
void ThreadWorker__get_Context_fn(ThreadWorker* __this, ::g::Fuse::Scripting::Context** __retval)
{
    *__retval = __this->Context();
}

// internal static Fuse.Scripting.Context CreateContext(Fuse.Scripting.IThreadWorker worker) :15
void ThreadWorker__CreateContext_fn(uObject* worker, ::g::Fuse::Scripting::Context** __retval)
{
    *__retval = ThreadWorker::CreateContext(worker);
}

// private object CreateMirror(object obj) :37
void ThreadWorker__CreateMirror_fn(ThreadWorker* __this, uObject* obj, uObject** __retval)
{
    *__retval = __this->CreateMirror(obj);
}

// public void Dispose() :59
void ThreadWorker__Dispose_fn(ThreadWorker* __this)
{
    __this->Dispose();
}

// private static Uno.UX.NameTable FindRootTable(Uno.UX.NameTable names) :225
void ThreadWorker__FindRootTable_fn(::g::Uno::UX::NameTable* names, ::g::Uno::UX::NameTable** __retval)
{
    *__retval = ThreadWorker::FindRootTable(names);
}

// private Uno.Threading.IDispatcher Fuse.Scripting.IThreadWorker.get_Dispatcher() :12
void ThreadWorker__FuseScriptingIThreadWorkerget_Dispatcher_fn(ThreadWorker* __this, uObject** __retval)
{
    return *__retval = (uObject*)__this, void();
}

// private Fuse.Scripting.Function Fuse.Scripting.IThreadWorker.get_Observable() :13
void ThreadWorker__FuseScriptingIThreadWorkerget_Observable_fn(ThreadWorker* __this, ::g::Fuse::Scripting::Function** __retval)
{
    return *__retval = uPtr(ThreadWorker::FuseJS())->Observable, void();
}

// private object Fuse.Scripting.IThreadWorker.Wrap(object obj) :65
void ThreadWorker__FuseScriptingIThreadWorkerWrap_fn(ThreadWorker* __this, uObject* obj, uObject** __retval)
{
    return *__retval = ThreadWorker::Wrap(obj), void();
}

// public static Fuse.Reactive.FuseJS.Builtins get_FuseJS() :27
void ThreadWorker__get_FuseJS_fn(::g::Fuse::Reactive::FuseJS::Builtins** __retval)
{
    *__retval = ThreadWorker::FuseJS();
}

// private Fuse.Scripting.Function GetClass(Fuse.Scripting.ScriptClass sc) :37
void ThreadWorker__GetClass_fn(ThreadWorker* __this, ::g::Fuse::Scripting::ScriptClass* sc, ::g::Fuse::Scripting::Function** __retval)
{
    *__retval = __this->GetClass(sc);
}

// internal Fuse.Reactive.ClassInstance GetClassInstance(object obj, Uno.UX.NameTable rootTable) :203
void ThreadWorker__GetClassInstance_fn(ThreadWorker* __this, uObject* obj, ::g::Uno::UX::NameTable* rootTable, ::g::Fuse::Reactive::ClassInstance** __retval)
{
    *__retval = __this->GetClassInstance(obj, rootTable);
}

// internal Fuse.Reactive.ClassInstance GetClassInstance(Uno.UX.NameTable scope) :195
void ThreadWorker__GetClassInstance1_fn(ThreadWorker* __this, ::g::Uno::UX::NameTable* scope, ::g::Fuse::Reactive::ClassInstance** __retval)
{
    *__retval = __this->GetClassInstance1(scope);
}

// public void Invoke(Uno.Action action) :188
void ThreadWorker__Invoke_fn(ThreadWorker* __this, uDelegate* action)
{
    __this->Invoke(action);
}

// public ThreadWorker New() :37
void ThreadWorker__New1_fn(ThreadWorker** __retval)
{
    *__retval = ThreadWorker::New1();
}

// private void OnTerminating(Fuse.Platform.ApplicationState newState) :54
void ThreadWorker__OnTerminating_fn(ThreadWorker* __this, int* newState)
{
    __this->OnTerminating(*newState);
}

// public object Reflect(object obj) :13
void ThreadWorker__Reflect_fn(ThreadWorker* __this, uObject* obj, uObject** __retval)
{
    *__retval = __this->Reflect(obj);
}

// private Fuse.Scripting.Function RegisterClass(Fuse.Scripting.ScriptClass sc) :48
void ThreadWorker__RegisterClass_fn(ThreadWorker* __this, ::g::Fuse::Scripting::ScriptClass* sc, ::g::Fuse::Scripting::Function** __retval)
{
    *__retval = __this->RegisterClass(sc);
}

// private void Run() :70
void ThreadWorker__Run_fn(ThreadWorker* __this)
{
    __this->Run();
}

// private void RunInner() :86
void ThreadWorker__RunInner_fn(ThreadWorker* __this)
{
    __this->RunInner();
}

// private Fuse.Scripting.Array ToArray(float2 v) :92
void ThreadWorker__ToArray_fn(ThreadWorker* __this, ::g::Uno::Float2* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->ToArray(*v);
}

// private Fuse.Scripting.Array ToArray(float3 v) :97
void ThreadWorker__ToArray1_fn(ThreadWorker* __this, ::g::Uno::Float3* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->ToArray1(*v);
}

// private Fuse.Scripting.Array ToArray(float4 v) :102
void ThreadWorker__ToArray2_fn(ThreadWorker* __this, ::g::Uno::Float4* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->ToArray2(*v);
}

// private Fuse.Scripting.Array ToArray(int2 v) :107
void ThreadWorker__ToArray3_fn(ThreadWorker* __this, ::g::Uno::Int2* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->ToArray3(*v);
}

// private Fuse.Scripting.Array ToArray(int3 v) :112
void ThreadWorker__ToArray4_fn(ThreadWorker* __this, ::g::Uno::Int3* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->ToArray4(*v);
}

// private Fuse.Scripting.Array ToArray(int4 v) :117
void ThreadWorker__ToArray5_fn(ThreadWorker* __this, ::g::Uno::Int4* v, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = __this->ToArray5(*v);
}

// public object Unwrap(object dc) :72
void ThreadWorker__Unwrap_fn(ThreadWorker* __this, uObject* dc, uObject** __retval)
{
    *__retval = __this->Unwrap(dc);
}

// public static object Wrap(object obj) :42
void ThreadWorker__Wrap_fn(uObject* obj, uObject** __retval)
{
    *__retval = ThreadWorker::Wrap(obj);
}

// private object WrapScriptClass(object obj) :16
void ThreadWorker__WrapScriptClass_fn(ThreadWorker* __this, uObject* obj, uObject** __retval)
{
    *__retval = __this->WrapScriptClass(obj);
}

uSStrong< ::g::Fuse::Scripting::Context*> ThreadWorker::_context_;
uSStrong< ::g::Fuse::Reactive::FuseJS::Builtins*> ThreadWorker::_fuseJS_;

// public ThreadWorker() [instance] :37
void ThreadWorker::ctor_()
{
    _registeredClasses = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Scripting::ScriptClass_typeof(), ::TYPES[25/*Fuse.Scripting.Function*/], NULL)));
    _classInstanceProperty = ::g::Fuse::Properties::CreateHandle();
    _ready = ::g::Uno::Threading::ManualResetEvent::New2(false);
    _idle = ::g::Uno::Threading::ManualResetEvent::New2(true);
    _terminate = ::g::Uno::Threading::ManualResetEvent::New2(false);
    _queue = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::TYPES[14/*Uno.Action*/], NULL)));
    _exceptionQueue = ((::g::Uno::Threading::ConcurrentQueue*)::g::Uno::Threading::ConcurrentQueue::New1(::g::Uno::Threading::ConcurrentQueue_typeof()->MakeType(::TYPES[34/*Uno.Exception*/], NULL)));
    _thread = ::g::Uno::Threading::Thread::New2(uDelegate::New(::g::Uno::Threading::ThreadStart_typeof(), (void*)ThreadWorker__Run_fn, this));
    uPtr(_thread)->Start();
    uPtr(_ready)->WaitOne();
    uPtr(_ready)->Dispose();
}

// public void CheckAndThrow() [instance] :174
void ThreadWorker::CheckAndThrow()
{
    bool ret2;
    ::g::Uno::Exception* next = NULL, *prev = NULL;

    while ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(_exceptionQueue), (void**)(&next), &ret2), ret2))
    {
        if (prev != NULL)
            ::g::Fuse::Diagnostics::UnknownException(uString::Const("Skipped Exception"), prev, this, uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/ThreadWorker.uno"), 180, uString::Const("CheckAndThrow"));

        prev = next;
    }

    if (prev != NULL)
        U_THROW(::g::Fuse::WrapException::New4(prev));
}

// public Fuse.Scripting.Context get_Context() [instance] :24
::g::Fuse::Scripting::Context* ThreadWorker::Context()
{
    return ThreadWorker::_context_;
}

// private object CreateMirror(object obj) [instance] :37
uObject* ThreadWorker::CreateMirror(uObject* obj)
{
    if (_reflectionDepth > 50)
    {
        ::g::Fuse::Diagnostics::UserWarning(uString::Const("JavaScript data model contains circular references or is too deep. Some data may not display correctly."), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/ThreadWorker.Mirror.uno"), 41, uString::Const("CreateMirror"));
        return NULL;
    }

    ::g::Fuse::Scripting::Array* a = uAs< ::g::Fuse::Scripting::Array*>(obj, ::TYPES[26/*Fuse.Scripting.Array*/]);

    if (a != NULL)
        return ::g::Fuse::Reactive::ArrayMirror::New1(this, a);

    ::g::Fuse::Scripting::Function* f = uAs< ::g::Fuse::Scripting::Function*>(obj, ::TYPES[25/*Fuse.Scripting.Function*/]);

    if (f != NULL)
        return ::g::Fuse::Reactive::FunctionMirror::New2(f);

    ::g::Fuse::Scripting::Object* o = uAs< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[16/*Fuse.Scripting.Object*/]);

    if (o != NULL)
    {
        if (uPtr(o)->InstanceOf(uPtr(Context())->Observable()))
            return ::g::Fuse::Reactive::Observable::New1(this, o, false);
        else if (uPtr(o)->InstanceOf(uPtr(ThreadWorker::FuseJS())->Date))
            return uBox(::g::Uno::DateTime_typeof(), ::g::Fuse::Reactive::DateTimeConverterHelpers::ConvertDateToDateTime(o));
        else
            return ::g::Fuse::Reactive::ObjectMirror::New1(this, o);
    }

    return NULL;
}

// public void Dispose() [instance] :59
void ThreadWorker::Dispose()
{
    ::g::Fuse::Platform::Lifecycle::remove_Terminating(uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof(), NULL), (void*)ThreadWorker__OnTerminating_fn, this));
    uPtr(_terminate)->Set();
    uPtr(_thread)->Join();
    uPtr(_terminate)->Dispose();
}

// private Fuse.Scripting.Function GetClass(Fuse.Scripting.ScriptClass sc) [instance] :37
::g::Fuse::Scripting::Function* ThreadWorker::GetClass(::g::Fuse::Scripting::ScriptClass* sc)
{
    bool ret3;
    ::g::Fuse::Scripting::Function* cl;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_registeredClasses), sc, (void**)(&cl), &ret3), ret3))
    {
        cl = RegisterClass(sc);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_registeredClasses), sc, cl);
    }

    return cl;
}

// internal Fuse.Reactive.ClassInstance GetClassInstance(object obj, Uno.UX.NameTable rootTable) [instance] :203
::g::Fuse::Reactive::ClassInstance* ThreadWorker::GetClassInstance(uObject* obj, ::g::Uno::UX::NameTable* rootTable)
{
    uObject* n = uAs<uObject*>(obj, ::g::Fuse::IProperties_typeof());

    if (n != NULL)
    {
        ::g::Fuse::Reactive::ClassInstance* ni = uAs< ::g::Fuse::Reactive::ClassInstance*>(uPtr(::g::Fuse::IProperties::Properties(uInterface(uPtr(n), ::g::Fuse::IProperties_typeof())))->Get(_classInstanceProperty), ::g::Fuse::Reactive::ClassInstance_typeof());

        if (ni == NULL)
        {
            ni = ::g::Fuse::Reactive::ClassInstance::New1(this, obj, rootTable);
            uPtr(::g::Fuse::IProperties::Properties(uInterface(uPtr(n), ::g::Fuse::IProperties_typeof())))->Set(_classInstanceProperty, ni);
        }

        return ni;
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uString::Const("Cannot use object of type '"), ::g::Uno::Type::FullName(uPtr(::g::Uno::Object::GetType(uPtr(uPtr(rootTable)->This()))))), uString::Const("' as 'this' in JavaScript module; must be 'IProperties' or 'App'"))));
}

// internal Fuse.Reactive.ClassInstance GetClassInstance(Uno.UX.NameTable scope) [instance] :195
::g::Fuse::Reactive::ClassInstance* ThreadWorker::GetClassInstance1(::g::Uno::UX::NameTable* scope)
{
    ::g::Uno::UX::NameTable* rootTable = ThreadWorker::FindRootTable(scope);
    return GetClassInstance(uPtr(rootTable)->This(), rootTable);
}

// public void Invoke(Uno.Action action) [instance] :188
void ThreadWorker::Invoke(uDelegate* action)
{
    uPtr(_idle)->Reset();
    ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_queue), action);
}

// private void OnTerminating(Fuse.Platform.ApplicationState newState) [instance] :54
void ThreadWorker::OnTerminating(int newState)
{
    Dispose();
}

// public object Reflect(object obj) [instance] :13
uObject* ThreadWorker::Reflect(uObject* obj)
{
    ::g::Fuse::Scripting::External* e = uAs< ::g::Fuse::Scripting::External*>(obj, ::TYPES[47/*Fuse.Scripting.External*/]);

    if (e != NULL)
        return uPtr(e)->Object;

    ::g::Fuse::Scripting::Object* sobj = uAs< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[16/*Fuse.Scripting.Object*/]);

    if (sobj != NULL)
    {
        if (uPtr(sobj)->ContainsKey(uString::Const("external_object")))
        {
            ::g::Fuse::Scripting::External* ext = uAs< ::g::Fuse::Scripting::External*>(uPtr(sobj)->Item(uString::Const("external_object")), ::TYPES[47/*Fuse.Scripting.External*/]);

            if (ext != NULL)
                return uPtr(ext)->Object;
        }
    }

    _reflectionDepth++;
    uObject* res = CreateMirror(obj);
    _reflectionDepth--;

    if (res != NULL)
        return res;

    return obj;
}

// private Fuse.Scripting.Function RegisterClass(Fuse.Scripting.ScriptClass sc) [instance] :48
::g::Fuse::Scripting::Function* ThreadWorker::RegisterClass(::g::Fuse::Scripting::ScriptClass* sc)
{
    ::g::Fuse::Scripting::Function* cl = uCast< ::g::Fuse::Scripting::Function*>(uPtr(Context())->Evaluate(::g::Uno::String::op_Addition2(::g::Uno::Type::FullName(uPtr(uPtr(sc)->Type())), uString::Const(" (ScriptClass)")), uString::Const("(function(external_object) { this.external_object = external_object; })")), ::TYPES[25/*Fuse.Scripting.Function*/]);

    if (sc->SuperType() != NULL)
    {
        ::g::Fuse::Scripting::Function* super = GetClass(uPtr(sc)->SuperType());

        if (_setSuperclass == NULL)
            _setSuperclass = uCast< ::g::Fuse::Scripting::Function*>(uPtr(Context())->Evaluate(uString::Const("(set-superclass)"), uString::Const("(function(cl, superclass) { cl.prototype = new superclass(); cl.prototype.constructor = cl; })")), ::TYPES[25/*Fuse.Scripting.Function*/]);

        uPtr(_setSuperclass)->Call(uArray::Init<uObject*>(::TYPES[4/*object[]*/], 2, cl, super));
    }

    for (int i = 0; i < uPtr(sc->Members())->Length(); i++)
    {
        ::g::Fuse::Scripting::ScriptMethodInline* inlineMethod = uAs< ::g::Fuse::Scripting::ScriptMethodInline*>(uPtr(uPtr(sc)->Members())->Strong< ::g::Fuse::Scripting::ScriptMember*>(i), ::g::Fuse::Scripting::ScriptMethodInline_typeof());

        if (inlineMethod != NULL)
        {
            ::g::Fuse::Scripting::Function* m = uCast< ::g::Fuse::Scripting::Function*>(uPtr(Context())->Evaluate(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Type::FullName(uPtr(uPtr(sc)->Type())), ::STRINGS[33/*"."*/]), uPtr(inlineMethod)->Name), ::STRINGS[64/*" (ScriptMet...*/]), ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uString::Const("(function(cl, Observable) { cl.prototype."), uPtr(inlineMethod)->Name), uString::Const(" = ")), uPtr(inlineMethod)->Code), uString::Const("; })"))), ::TYPES[25/*Fuse.Scripting.Function*/]);
            uPtr(m)->Call(uArray::Init<uObject*>(::TYPES[4/*object[]*/], 2, cl, (::g::Fuse::Scripting::Function*)uPtr(Context())->Observable()));
            continue;
        }

        ::g::Fuse::Scripting::ScriptMethod* method = uAs< ::g::Fuse::Scripting::ScriptMethod*>(uPtr(sc->Members())->Strong< ::g::Fuse::Scripting::ScriptMember*>(i), ::g::Fuse::Scripting::ScriptMethod_typeof());

        if (method != NULL)
        {
            ThreadWorker__MethodClosure::New1(cl, method, this);
            continue;
        }

        ::g::Fuse::Scripting::ScriptProperty* property = uAs< ::g::Fuse::Scripting::ScriptProperty*>(uPtr(sc->Members())->Strong< ::g::Fuse::Scripting::ScriptMember*>(i), ::g::Fuse::Scripting::ScriptProperty_typeof());

        if (property != NULL)
        {
            ThreadWorker__PropertyClosure::New1(cl, property, this);
            continue;
        }

        ::g::Fuse::Scripting::ScriptReadonlyProperty* readonlyProperty = uAs< ::g::Fuse::Scripting::ScriptReadonlyProperty*>(uPtr(sc->Members())->Strong< ::g::Fuse::Scripting::ScriptMember*>(i), ::g::Fuse::Scripting::ScriptReadonlyProperty_typeof());

        if (readonlyProperty != NULL)
        {
            ThreadWorker__ReadonlyPropertyClosure::New1(cl, readonlyProperty, this);
            continue;
        }
    }

    return cl;
}

// private void Run() [instance] :70
void ThreadWorker::Run()
{
    try
    {
        RunInner();
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::Diagnostics::UnknownException(uString::Const("ThreadWorked failed"), e, this, uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/ThreadWorker.uno"), 78, uString::Const("Run"));
        ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_exceptionQueue), e);
    }

    if (ThreadWorker::_context_ != NULL)
        uPtr(ThreadWorker::_context_)->Dispose();
}

// private void RunInner() [instance] :86
void ThreadWorker::RunInner()
{
    bool ret4;

    {
        const auto __finally_fun = [&]()
        {
            uPtr(_ready)->Set();
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);

        if (ThreadWorker::_context_ == NULL)
        {
            ThreadWorker::_context_ = ThreadWorker::CreateContext((uObject*)this);

            if (ThreadWorker::_context_ == NULL)
                U_THROW(::g::Uno::Exception::New2(uString::Const("Could not create script context")));

            ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[14/*Uno.Action*/], (void*)ThreadWorker__CheckAndThrow_fn, this), 0);
            ThreadWorker::_fuseJS_ = ::g::Fuse::Reactive::FuseJS::Builtins::New1(ThreadWorker::_context_);
        }
    }

    double t = ::g::Uno::Diagnostics::Clock::GetSeconds();

    while (true)
    {
        if (uPtr(_terminate)->WaitOne1(0))
            break;

        uAutoReleasePool ____pool;

        if (!_subscribedForClosing)
        {
            if (::g::Uno::Application::Current1() != NULL)
            {
                ::g::Fuse::Platform::Lifecycle::add_Terminating(uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof(), NULL), (void*)ThreadWorker__OnTerminating_fn, this));
                _subscribedForClosing = true;
            }
        }

        bool didAnything = false;
        uDelegate* action;

        if ((::g::Uno::Threading::ConcurrentQueue__TryDequeue_fn(uPtr(_queue), (void**)(&action), &ret4), ret4))
        {
            try
            {
                didAnything = true;
                uPtr(action)->InvokeVoid();
            }
            catch (const uThrowable& __t)
            {
                ::g::Uno::Exception* e = __t.Exception;
                ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_exceptionQueue), e);
            }
        }
        else
            uPtr(_idle)->Set();

        try
        {
            uPtr(ThreadWorker::_fuseJS_)->UpdateModules(ThreadWorker::_context_);
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e1 = __t.Exception;
            ::g::Uno::Threading::ConcurrentQueue__Enqueue_fn(uPtr(_exceptionQueue), e1);
        }

        double t2 = ::g::Uno::Diagnostics::Clock::GetSeconds();

        if (!didAnything || ((t2 - t) > 5.0))
        {
            ::g::Uno::Threading::Thread::Sleep(1);
            t = t2;
        }
    }
}

// private Fuse.Scripting.Array ToArray(float2 v) [instance] :92
::g::Fuse::Scripting::Array* ThreadWorker::ToArray(::g::Uno::Float2 v)
{
    return uPtr(Context())->NewArray(uArray::Init<uObject*>(::TYPES[4/*object[]*/], 2, uBox(::TYPES[22/*double*/], (double)v.X), uBox(::TYPES[22/*double*/], (double)v.Y)));
}

// private Fuse.Scripting.Array ToArray(float3 v) [instance] :97
::g::Fuse::Scripting::Array* ThreadWorker::ToArray1(::g::Uno::Float3 v)
{
    return uPtr(Context())->NewArray(uArray::Init<uObject*>(::TYPES[4/*object[]*/], 3, uBox(::TYPES[22/*double*/], (double)v.X), uBox(::TYPES[22/*double*/], (double)v.Y), uBox(::TYPES[22/*double*/], (double)v.Z)));
}

// private Fuse.Scripting.Array ToArray(float4 v) [instance] :102
::g::Fuse::Scripting::Array* ThreadWorker::ToArray2(::g::Uno::Float4 v)
{
    return uPtr(Context())->NewArray(uArray::Init<uObject*>(::TYPES[4/*object[]*/], 4, uBox(::TYPES[22/*double*/], (double)v.X), uBox(::TYPES[22/*double*/], (double)v.Y), uBox(::TYPES[22/*double*/], (double)v.Z), uBox(::TYPES[22/*double*/], (double)v.W)));
}

// private Fuse.Scripting.Array ToArray(int2 v) [instance] :107
::g::Fuse::Scripting::Array* ThreadWorker::ToArray3(::g::Uno::Int2 v)
{
    return uPtr(Context())->NewArray(uArray::Init<uObject*>(::TYPES[4/*object[]*/], 2, uBox(::TYPES[22/*double*/], (double)v.X), uBox(::TYPES[22/*double*/], (double)v.Y)));
}

// private Fuse.Scripting.Array ToArray(int3 v) [instance] :112
::g::Fuse::Scripting::Array* ThreadWorker::ToArray4(::g::Uno::Int3 v)
{
    return uPtr(Context())->NewArray(uArray::Init<uObject*>(::TYPES[4/*object[]*/], 3, uBox(::TYPES[22/*double*/], (double)v.X), uBox(::TYPES[22/*double*/], (double)v.Y), uBox(::TYPES[22/*double*/], (double)v.Z)));
}

// private Fuse.Scripting.Array ToArray(int4 v) [instance] :117
::g::Fuse::Scripting::Array* ThreadWorker::ToArray5(::g::Uno::Int4 v)
{
    return uPtr(Context())->NewArray(uArray::Init<uObject*>(::TYPES[4/*object[]*/], 4, uBox(::TYPES[22/*double*/], (double)v.X), uBox(::TYPES[22/*double*/], (double)v.Y), uBox(::TYPES[22/*double*/], (double)v.Z), uBox(::TYPES[22/*double*/], (double)v.W)));
}

// public object Unwrap(object dc) [instance] :72
uObject* ThreadWorker::Unwrap(uObject* dc)
{
    if (dc == NULL)
        return NULL;
    else if (uIs(dc, ::TYPES[24/*string*/]))
        return dc;
    else if (uIs(dc, ::g::Fuse::IRaw_typeof()))
        return ::g::Fuse::IRaw::Raw(uInterface(uPtr((uObject*)dc), ::g::Fuse::IRaw_typeof()));
    else if (uIs(dc, ::TYPES[25/*Fuse.Scripting.Function*/]))
        return dc;
    else if (uIs(dc, ::TYPES[16/*Fuse.Scripting.Object*/]))
        return dc;
    else if (uIs(dc, ::TYPES[26/*Fuse.Scripting.Array*/]))
        return dc;
    else if (uIs(dc, ::g::Uno::Float2_typeof()))
        return ToArray(uUnbox< ::g::Uno::Float2>(::g::Uno::Float2_typeof(), dc));
    else if (uIs(dc, ::g::Uno::Float3_typeof()))
        return ToArray1(uUnbox< ::g::Uno::Float3>(::g::Uno::Float3_typeof(), dc));
    else if (uIs(dc, ::g::Uno::Float4_typeof()))
        return ToArray2(uUnbox< ::g::Uno::Float4>(::g::Uno::Float4_typeof(), dc));
    else if (uIs(dc, ::g::Uno::Int2_typeof()))
        return ToArray3(uUnbox< ::g::Uno::Int2>(::g::Uno::Int2_typeof(), dc));
    else if (uIs(dc, ::g::Uno::Int3_typeof()))
        return ToArray4(uUnbox< ::g::Uno::Int3>(::g::Uno::Int3_typeof(), dc));
    else if (uIs(dc, ::g::Uno::Int4_typeof()))
        return ToArray5(uUnbox< ::g::Uno::Int4>(::g::Uno::Int4_typeof(), dc));
    else if (uIs(dc, ::g::Uno::DateTime_typeof()))
        return ::g::Fuse::Reactive::DateTimeConverterHelpers::ConvertDateTimeToJSDate(uUnbox< ::g::Uno::DateTime>(::g::Uno::DateTime_typeof(), dc), uPtr(ThreadWorker::FuseJS())->DateCtor);
    else if (::g::Uno::Type::IsClass(uPtr(::g::Uno::Object::GetType(uPtr(dc)))))
        return WrapScriptClass(dc);
    else if (::g::Uno::Type::IsEnum(uPtr(::g::Uno::Object::GetType(uPtr(dc)))))
        return ::g::Uno::Object::ToString(uPtr(dc));
    else
        return dc;
}

// private object WrapScriptClass(object obj) [instance] :16
uObject* ThreadWorker::WrapScriptClass(uObject* obj)
{
    uObject* so = uAs<uObject*>(obj, ::g::Fuse::Scripting::IScriptObject_typeof());

    if ((so != NULL) && (::g::Fuse::Scripting::IScriptObject::ScriptObject(uInterface(uPtr(so), ::g::Fuse::Scripting::IScriptObject_typeof())) != NULL))
        return ::g::Fuse::Scripting::IScriptObject::ScriptObject(uInterface(uPtr(so), ::g::Fuse::Scripting::IScriptObject_typeof()));

    ::g::Fuse::Scripting::External* ext = ::g::Fuse::Scripting::External::New1(obj);
    ::g::Fuse::Scripting::ScriptClass* sc = ::g::Fuse::Scripting::ScriptClass::Get(::g::Uno::Object::GetType(uPtr(obj)));

    if (sc == NULL)
        return ext;

    ::g::Fuse::Scripting::Function* ctor = GetClass(sc);
    ::g::Fuse::Scripting::Object* res = uPtr(ctor)->Construct(uArray::Init<uObject*>(::TYPES[4/*object[]*/], 1, ext));

    if (so != NULL)
        ::g::Fuse::Scripting::IScriptObject::SetScriptObject(uInterface(uPtr(so), ::g::Fuse::Scripting::IScriptObject_typeof()), res, Context());

    return res;
}

// internal static Fuse.Scripting.Context CreateContext(Fuse.Scripting.IThreadWorker worker) [static] :15
::g::Fuse::Scripting::Context* ThreadWorker::CreateContext(uObject* worker)
{
    ThreadWorker_typeof()->Init();
    return ::g::Fuse::Scripting::JavaScriptCore::Context::New1(worker);
}

// private static Uno.UX.NameTable FindRootTable(Uno.UX.NameTable names) [static] :225
::g::Uno::UX::NameTable* ThreadWorker::FindRootTable(::g::Uno::UX::NameTable* names)
{
    ThreadWorker_typeof()->Init();
    ::g::Uno::UX::NameTable* nt = names;

    while (nt != NULL)
    {
        if (uPtr(nt)->This() != NULL)
            return nt;

        nt = uPtr(nt)->ParentTable;
    }

    U_THROW(::g::Uno::Exception::New1());
}

// public ThreadWorker New() [static] :37
ThreadWorker* ThreadWorker::New1()
{
    ThreadWorker* obj1 = (ThreadWorker*)uNew(ThreadWorker_typeof());
    obj1->ctor_();
    return obj1;
}

// public static object Wrap(object obj) [static] :42
uObject* ThreadWorker::Wrap(uObject* obj)
{
    ThreadWorker_typeof()->Init();

    if (uIs(obj, ::TYPES[47/*Fuse.Scripting.External*/]))
        return uPtr(uCast< ::g::Fuse::Scripting::External*>(obj, ::TYPES[47/*Fuse.Scripting.External*/]))->Object;
    else if (uIs(obj, ::TYPES[16/*Fuse.Scripting.Object*/]))
    {
        ::g::Fuse::Scripting::Object* sobj = uCast< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[16/*Fuse.Scripting.Object*/]);

        if (uPtr(sobj)->InstanceOf(uPtr(ThreadWorker::FuseJS())->Date))
            return uBox(::g::Uno::DateTime_typeof(), ::g::Fuse::Reactive::DateTimeConverterHelpers::ConvertDateToDateTime(sobj));
        else if (uPtr(sobj)->ContainsKey(uString::Const("external_object")))
        {
            ::g::Fuse::Scripting::External* ext = uAs< ::g::Fuse::Scripting::External*>(uPtr(sobj)->Item(uString::Const("external_object")), ::TYPES[47/*Fuse.Scripting.External*/]);

            if (ext != NULL)
                return uPtr(ext)->Object;
        }
    }

    if (uIs(obj, ::TYPES[21/*float*/]))
        return uBox(::TYPES[22/*double*/], (double)uUnbox<float>(::TYPES[21/*float*/], obj));

    if (uIs(obj, ::TYPES[20/*int*/]))
        return uBox(::TYPES[22/*double*/], (double)uUnbox<int>(::TYPES[20/*int*/], obj));

    if (uIs(obj, ::g::Uno::UInt_typeof()))
        return uBox(::TYPES[22/*double*/], (double)uUnbox<uint32_t>(::g::Uno::UInt_typeof(), obj));

    return obj;
}

// public static Fuse.Reactive.FuseJS.Builtins get_FuseJS() [static] :27
::g::Fuse::Reactive::FuseJS::Builtins* ThreadWorker::FuseJS()
{
    ThreadWorker_typeof()->Init();
    return ThreadWorker::_fuseJS_;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/UnaryOperator.uno
// -------------------------------------------------------------------------------

// public abstract class UnaryOperator :8
// {
static void UnaryOperator_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(UnaryOperator, _Operand), 0);
}

::g::Fuse::Reactive::Expression_type* UnaryOperator_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UnaryOperator);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.UnaryOperator", options);
    type->fp_build_ = UnaryOperator_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))UnaryOperator__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))UnaryOperator__Subscribe_fn;
    return type;
}

// protected UnaryOperator(Fuse.Reactive.Expression operand) :11
void UnaryOperator__ctor_1_fn(UnaryOperator* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_1(operand);
}

// protected object Compute(object operand) :21
void UnaryOperator__Compute_fn(UnaryOperator* __this, uObject* operand, uObject** __retval)
{
    *__retval = __this->Compute(operand);
}

// protected void OnNewOperand(Fuse.Reactive.IListener listener, object operand) :26
void UnaryOperator__OnNewOperand_fn(UnaryOperator* __this, uObject* listener, uObject* operand)
{
    __this->OnNewOperand(listener, operand);
}

// public generated Fuse.Reactive.Expression get_Operand() :10
void UnaryOperator__get_Operand_fn(UnaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Operand();
}

// private generated void set_Operand(Fuse.Reactive.Expression value) :10
void UnaryOperator__set_Operand_fn(UnaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Operand(value);
}

// public override Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :16
void UnaryOperator__Subscribe_fn(UnaryOperator* __this, uObject* context, uObject* listener, uObject** __retval)
{
    return *__retval = (uObject*)UnaryOperator__Subscription::Create(__this, context, listener), void();
}

// protected UnaryOperator(Fuse.Reactive.Expression operand) [instance] :11
void UnaryOperator::ctor_1(::g::Fuse::Reactive::Expression* operand)
{
    ctor_();
    Operand(operand);
}

// protected object Compute(object operand) [instance] :21
uObject* UnaryOperator::Compute(uObject* operand)
{
    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::Type::FullName(uPtr(::g::Uno::Object::GetType(this))), uString::Const(" does not implement the required methods"))));
}

// protected void OnNewOperand(Fuse.Reactive.IListener listener, object operand) [instance] :26
void UnaryOperator::OnNewOperand(uObject* listener, uObject* operand)
{
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(listener), ::TYPES[28/*Fuse.Reactive.IListener*/]), (uObject*)this, Compute(operand));
}

// public generated Fuse.Reactive.Expression get_Operand() [instance] :10
::g::Fuse::Reactive::Expression* UnaryOperator::Operand()
{
    return _Operand;
}

// private generated void set_Operand(Fuse.Reactive.Expression value) [instance] :10
void UnaryOperator::Operand(::g::Fuse::Reactive::Expression* value)
{
    _Operand = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.3.1/ObserverMap.uno
// -----------------------------------------------------------------

// internal sealed class UnmappedView<T> :8
// {
static void UnmappedView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::IArray_typeof(), offsetof(UnmappedView_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::ObserverMap_typeof()->MakeType(type->T(0), NULL), offsetof(UnmappedView, _source), 0);
}

UnmappedView_type* UnmappedView_typeof()
{
    static uSStrong<UnmappedView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UnmappedView);
    options.TypeSize = sizeof(UnmappedView_type);
    type = (UnmappedView_type*)uClassType::New("Fuse.Reactive.UnmappedView`1", options);
    type->fp_build_ = UnmappedView_build;
    type->interface0.fp_get_Length = (void(*)(uObject*, int*))UnmappedView__get_Length_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uObject**))UnmappedView__get_Item_fn;
    return type;
}

// public UnmappedView(Fuse.Reactive.ObserverMap<T> source) :11
void UnmappedView__ctor__fn(UnmappedView* __this, ::g::Fuse::Reactive::ObserverMap* source)
{
    __this->ctor_(source);
}

// public object get_Item(int index) :17
void UnmappedView__get_Item_fn(UnmappedView* __this, int* index, uObject** __retval)
{
    *__retval = __this->Item(*index);
}

// public int get_Length() :16
void UnmappedView__get_Length_fn(UnmappedView* __this, int* __retval)
{
    *__retval = __this->Length();
}

// public UnmappedView New(Fuse.Reactive.ObserverMap<T> source) :11
void UnmappedView__New1_fn(uType* __type, ::g::Fuse::Reactive::ObserverMap* source, UnmappedView** __retval)
{
    *__retval = UnmappedView::New1(__type, source);
}

// public UnmappedView(Fuse.Reactive.ObserverMap<T> source) [instance] :11
void UnmappedView::ctor_(::g::Fuse::Reactive::ObserverMap* source)
{
    _source = source;
}

// public object get_Item(int index) [instance] :17
uObject* UnmappedView::Item(int index)
{
    uObject* ret2;
    return uPtr(_source)->UVUnmap((::g::Uno::Collections::List__get_Item_fn(uPtr((::g::Uno::Collections::List*)uPtr(_source)->_list), uCRef<int>(index), &ret2), ret2));
}

// public int get_Length() [instance] :16
int UnmappedView::Length()
{
    return uPtr((::g::Uno::Collections::List*)uPtr(_source)->_list)->Count();
}

// public UnmappedView New(Fuse.Reactive.ObserverMap<T> source) [static] :11
UnmappedView* UnmappedView::New1(uType* __type, ::g::Fuse::Reactive::ObserverMap* source)
{
    UnmappedView* obj1 = (UnmappedView*)uNew(__type);
    obj1->ctor_(source);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.3.1/ValueObserver.uno
// -------------------------------------------------------------------

// internal sealed class ValueForwarder :77
// {
static void ValueForwarder_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::ValueObserver_type, interface0),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::ValueObserver_type, interface1));
    type->SetFields(2,
        ValueForwarder__IValueListener_typeof(), offsetof(ValueForwarder, _listener), 0);
}

::g::Fuse::Reactive::ValueObserver_type* ValueForwarder_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ValueObserver_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ValueObserver_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ValueForwarder);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ValueObserver_type);
    type = (::g::Fuse::Reactive::ValueObserver_type*)uClassType::New("Fuse.Reactive.ValueForwarder", options);
    type->fp_build_ = ValueForwarder_build;
    type->fp_PushData = (void(*)(::g::Fuse::Reactive::ValueObserver*, uObject*))ValueForwarder__PushData_fn;
    type->interface1.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnClear_fn;
    type->interface1.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnSet_fn;
    type->interface1.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnAdd_fn;
    type->interface1.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnNewAt_fn;
    type->interface1.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnNewAll = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnNewAll_fn;
    type->interface1.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface1.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Reactive::ValueObserver__Dispose_fn;
    return type;
}

// public ValueForwarder(Fuse.Reactive.IObservable obs, Fuse.Reactive.ValueForwarder.IValueListener listener) :82
void ValueForwarder__ctor_1_fn(ValueForwarder* __this, uObject* obs, uObject* listener)
{
    __this->ctor_1(obs, listener);
}

// public ValueForwarder New(Fuse.Reactive.IObservable obs, Fuse.Reactive.ValueForwarder.IValueListener listener) :82
void ValueForwarder__New1_fn(uObject* obs, uObject* listener, ValueForwarder** __retval)
{
    *__retval = ValueForwarder::New1(obs, listener);
}

// protected override sealed void PushData(object newValue) :88
void ValueForwarder__PushData_fn(ValueForwarder* __this, uObject* newValue)
{
    ValueForwarder__IValueListener::NewValue(uInterface(uPtr(__this->_listener), ValueForwarder__IValueListener_typeof()), newValue);
}

// public ValueForwarder(Fuse.Reactive.IObservable obs, Fuse.Reactive.ValueForwarder.IValueListener listener) [instance] :82
void ValueForwarder::ctor_1(uObject* obs, uObject* listener)
{
    ctor_();
    _listener = listener;
    Subscribe(obs);
}

// public ValueForwarder New(Fuse.Reactive.IObservable obs, Fuse.Reactive.ValueForwarder.IValueListener listener) [static] :82
ValueForwarder* ValueForwarder::New1(uObject* obs, uObject* listener)
{
    ValueForwarder* obj1 = (ValueForwarder*)uNew(ValueForwarder_typeof());
    obj1->ctor_1(obs, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.JavaScript/1.3.1/ValueMirror.uno
// ----------------------------------------------------------------------------

// public abstract class ValueMirror :7
// {
static void ValueMirror_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::IRaw_typeof(), offsetof(ValueMirror_type, interface0));
    type->SetFields(0,
        uObject_typeof(), offsetof(ValueMirror, _raw), 0);
}

ValueMirror_type* ValueMirror_typeof()
{
    static uSStrong<ValueMirror_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ValueMirror);
    options.TypeSize = sizeof(ValueMirror_type);
    type = (ValueMirror_type*)uClassType::New("Fuse.Reactive.ValueMirror", options);
    type->fp_build_ = ValueMirror_build;
    type->interface0.fp_get_Raw = (void(*)(uObject*, uObject**))ValueMirror__get_Raw_fn;
    return type;
}

// protected ValueMirror(object raw) :14
void ValueMirror__ctor__fn(ValueMirror* __this, uObject* raw)
{
    __this->ctor_(raw);
}

// public object get_Raw() :12
void ValueMirror__get_Raw_fn(ValueMirror* __this, uObject** __retval)
{
    *__retval = __this->Raw();
}

// public static void Unsubscribe(object obj) :19
void ValueMirror__Unsubscribe1_fn(uObject* obj)
{
    ValueMirror::Unsubscribe1(obj);
}

// protected ValueMirror(object raw) [instance] :14
void ValueMirror::ctor_(uObject* raw)
{
    _raw = raw;
}

// public object get_Raw() [instance] :12
uObject* ValueMirror::Raw()
{
    return _raw;
}

// public static void Unsubscribe(object obj) [static] :19
void ValueMirror::Unsubscribe1(uObject* obj)
{
    ValueMirror* vm = uAs<ValueMirror*>(obj, ValueMirror_typeof());

    if (vm != NULL)
        uPtr(vm)->Unsubscribe();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.3.1/ValueObserver.uno
// -------------------------------------------------------------------

// internal abstract class ValueObserver :7
// {
static void ValueObserver_build(uType* type)
{
    ::TYPES[30] = ::g::Fuse::IArray_typeof();
    ::TYPES[32] = ::g::Fuse::Reactive::IObservable_typeof();
    ::TYPES[3] = ::g::Uno::IDisposable_typeof();
    type->SetInterfaces(
        ::TYPES[3/*Uno.IDisposable*/], offsetof(ValueObserver_type, interface0),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(ValueObserver_type, interface1));
    type->SetFields(0,
        ::TYPES[32/*Fuse.Reactive.IObservable*/], offsetof(ValueObserver, _obs), 0,
        ::TYPES[3/*Uno.IDisposable*/], offsetof(ValueObserver, _obsSub), 0);
}

ValueObserver_type* ValueObserver_typeof()
{
    static uSStrong<ValueObserver_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ValueObserver);
    options.TypeSize = sizeof(ValueObserver_type);
    type = (ValueObserver_type*)uClassType::New("Fuse.Reactive.ValueObserver", options);
    type->fp_build_ = ValueObserver_build;
    type->fp_Dispose = ValueObserver__Dispose_fn;
    type->interface1.fp_OnClear = (void(*)(uObject*))ValueObserver__FuseReactiveIObserverOnClear_fn;
    type->interface1.fp_OnSet = (void(*)(uObject*, uObject*))ValueObserver__FuseReactiveIObserverOnSet_fn;
    type->interface1.fp_OnAdd = (void(*)(uObject*, uObject*))ValueObserver__FuseReactiveIObserverOnAdd_fn;
    type->interface1.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))ValueObserver__FuseReactiveIObserverOnNewAt_fn;
    type->interface1.fp_OnFailed = (void(*)(uObject*, uString*))ValueObserver__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnNewAll = (void(*)(uObject*, uObject*))ValueObserver__FuseReactiveIObserverOnNewAll_fn;
    type->interface1.fp_OnRemoveAt = (void(*)(uObject*, int*))ValueObserver__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface1.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))ValueObserver__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ValueObserver__Dispose_fn;
    return type;
}

// protected generated ValueObserver() :7
void ValueObserver__ctor__fn(ValueObserver* __this)
{
    __this->ctor_();
}

// public virtual void Dispose() :27
void ValueObserver__Dispose_fn(ValueObserver* __this)
{
    __this->Unsubscribe();
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :44
void ValueObserver__FuseReactiveIObserverOnAdd_fn(ValueObserver* __this, uObject* addedValue)
{
    __this->PushData(::g::Fuse::IArray::Item(uInterface(uPtr(__this->_obs), ::TYPES[30/*Fuse.IArray*/]), 0));
}

// private void Fuse.Reactive.IObserver.OnClear() :34
void ValueObserver__FuseReactiveIObserverOnClear_fn(ValueObserver* __this)
{
    __this->PushData(NULL);
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :54
void ValueObserver__FuseReactiveIObserverOnFailed_fn(ValueObserver* __this, uString* message)
{
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :71
void ValueObserver__FuseReactiveIObserverOnInsertAt_fn(ValueObserver* __this, int* index, uObject* value)
{
    __this->PushData(::g::Fuse::IArray::Item(uInterface(uPtr(__this->_obs), ::TYPES[30/*Fuse.IArray*/]), 0));
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray values) :59
void ValueObserver__FuseReactiveIObserverOnNewAll_fn(ValueObserver* __this, uObject* values)
{
    if (::g::Fuse::IArray::Length(uInterface(uPtr(values), ::TYPES[30/*Fuse.IArray*/])) > 0)
        __this->PushData(::g::Fuse::IArray::Item(uInterface(uPtr(__this->_obs), ::TYPES[30/*Fuse.IArray*/]), 0));
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :49
void ValueObserver__FuseReactiveIObserverOnNewAt_fn(ValueObserver* __this, int* index, uObject* value)
{
    __this->PushData(::g::Fuse::IArray::Item(uInterface(uPtr(__this->_obs), ::TYPES[30/*Fuse.IArray*/]), 0));
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :65
void ValueObserver__FuseReactiveIObserverOnRemoveAt_fn(ValueObserver* __this, int* index)
{
    if (::g::Fuse::IArray::Length(uInterface(uPtr(__this->_obs), ::TYPES[30/*Fuse.IArray*/])) > 0)
        __this->PushData(::g::Fuse::IArray::Item(uInterface(uPtr(__this->_obs), ::TYPES[30/*Fuse.IArray*/]), 0));
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :39
void ValueObserver__FuseReactiveIObserverOnSet_fn(ValueObserver* __this, uObject* newValue)
{
    __this->PushData(newValue);
}

// protected void Subscribe(Fuse.Reactive.IObservable obs) :14
void ValueObserver__Subscribe_fn(ValueObserver* __this, uObject* obs)
{
    __this->Subscribe(obs);
}

// protected void Unsubscribe() :20
void ValueObserver__Unsubscribe_fn(ValueObserver* __this)
{
    __this->Unsubscribe();
}

// protected generated ValueObserver() [instance] :7
void ValueObserver::ctor_()
{
}

// protected void Subscribe(Fuse.Reactive.IObservable obs) [instance] :14
void ValueObserver::Subscribe(uObject* obs)
{
    _obs = obs;
    _obsSub = ::g::Fuse::Reactive::IObservable::Subscribe(uInterface(uPtr(obs), ::TYPES[32/*Fuse.Reactive.IObservable*/]), (uObject*)this);
}

// protected void Unsubscribe() [instance] :20
void ValueObserver::Unsubscribe()
{
    if (_obsSub != NULL)
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_obsSub), ::TYPES[3/*Uno.IDisposable*/]));

    _obsSub = NULL;
    _obs = NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.3.1/VarArgFunction.uno
// --------------------------------------------------------------------------------

// public abstract class VarArgFunction :10
// {
static void VarArgFunction_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Reactive::Expression_typeof(), NULL), offsetof(VarArgFunction, _args), 0);
}

::g::Fuse::Reactive::Expression_type* VarArgFunction_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(VarArgFunction);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.VarArgFunction", options);
    type->fp_build_ = VarArgFunction_build;
    return type;
}

// public Uno.Collections.IList<Fuse.Reactive.Expression> get_Arguments() :41
void VarArgFunction__get_Arguments_fn(VarArgFunction* __this, uObject** __retval)
{
    *__retval = __this->Arguments();
}

// protected string FormatString(string funcName) :44
void VarArgFunction__FormatString_fn(VarArgFunction* __this, uString* funcName, uString** __retval)
{
    *__retval = __this->FormatString(funcName);
}

// public Uno.Collections.IList<Fuse.Reactive.Expression> get_Arguments() [instance] :41
uObject* VarArgFunction::Arguments()
{
    return (uObject*)_args;
}

// protected string FormatString(string funcName) [instance] :44
uString* VarArgFunction::FormatString(uString* funcName)
{
    ::g::Fuse::Reactive::Expression* ret1;
    uString* q = ::g::Uno::String::op_Addition2(funcName, ::STRINGS[11/*"("*/]);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Arguments()), ::TYPES[59/*Uno.Collections.ICollection<Fuse.Reactive.Expression>*/])); ++i)
    {
        if (i > 0)
            q = ::g::Uno::String::op_Addition2(q, ::STRINGS[8/*","*/]);

        q = ::g::Uno::String::op_Addition2(q, ::g::Uno::Object::ToString(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Arguments()), ::TYPES[60/*Uno.Collections.IList<Fuse.Reactive.Expression>*/]), uCRef<int>(i), &ret1), ret1))));
    }

    q = ::g::Uno::String::op_Addition2(q, ::STRINGS[9/*")"*/]);
    return q;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/WhileCount.uno
// -------------------------------------------------------------------------

// public class WhileCount :44
// {
static void WhileCount_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileCount_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(WhileCount_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(WhileCount_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(WhileCount_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileCount_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileCount_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(WhileCount_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(WhileCount_type, interface7),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(WhileCount_type, interface8));
    type->SetFields(37,
        ::g::Uno::Int2_typeof(), offsetof(WhileCount, _compare), 0,
        WhileCount__Range_typeof(), offsetof(WhileCount, _high), 0,
        uObject_typeof(), offsetof(WhileCount, _items), 0,
        WhileCount__Range_typeof(), offsetof(WhileCount, _low), 0,
        ::g::Uno::Int_typeof(), offsetof(WhileCount, _oldCount), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(WhileCount, _subscription), 0);
}

WhileCount_type* WhileCount_typeof()
{
    static uSStrong<WhileCount_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 43;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(WhileCount);
    options.TypeSize = sizeof(WhileCount_type);
    type = (WhileCount_type*)uClassType::New("Fuse.Reactive.WhileCount", options);
    type->fp_build_ = WhileCount_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileCount__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileCount__OnUnrooted_fn;
    type->interface8.fp_OnSet = (void(*)(uObject*, uObject*))WhileCount__FuseReactiveIObserverOnSet_fn;
    type->interface8.fp_OnFailed = (void(*)(uObject*, uString*))WhileCount__FuseReactiveIObserverOnFailed_fn;
    type->interface8.fp_OnAdd = (void(*)(uObject*, uObject*))WhileCount__FuseReactiveIObserverOnAdd_fn;
    type->interface8.fp_OnRemoveAt = (void(*)(uObject*, int*))WhileCount__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface8.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))WhileCount__FuseReactiveIObserverOnNewAt_fn;
    type->interface8.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))WhileCount__FuseReactiveIObserverOnInsertAt_fn;
    type->interface8.fp_OnClear = (void(*)(uObject*))WhileCount__FuseReactiveIObserverOnClear_fn;
    type->interface8.fp_OnNewAll = (void(*)(uObject*, uObject*))WhileCount__FuseReactiveIObserverOnNewAll_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated WhileCount() :44
void WhileCount__ctor_6_fn(WhileCount* __this)
{
    __this->ctor_6();
}

// private void Assess(int count) :125
void WhileCount__Assess_fn(WhileCount* __this, int* count)
{
    __this->Assess(*count);
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :226
void WhileCount__FuseReactiveIObserverOnAdd_fn(WhileCount* __this, uObject* addedValue)
{
    __this->Assess(__this->_oldCount + 1);
}

// private void Fuse.Reactive.IObserver.OnClear() :244
void WhileCount__FuseReactiveIObserverOnClear_fn(WhileCount* __this)
{
    __this->Assess(0);
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :222
void WhileCount__FuseReactiveIObserverOnFailed_fn(WhileCount* __this, uString* message)
{
    __this->Assess(0);
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :239
void WhileCount__FuseReactiveIObserverOnInsertAt_fn(WhileCount* __this, int* index, uObject* value)
{
    __this->Assess(__this->_oldCount + 1);
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray values) :249
void WhileCount__FuseReactiveIObserverOnNewAll_fn(WhileCount* __this, uObject* values)
{
    __this->Assess(::g::Fuse::IArray::Length(uInterface(uPtr(values), ::TYPES[30/*Fuse.IArray*/])));
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :235
void WhileCount__FuseReactiveIObserverOnNewAt_fn(WhileCount* __this, int* index, uObject* value)
{
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :230
void WhileCount__FuseReactiveIObserverOnRemoveAt_fn(WhileCount* __this, int* index)
{
    __this->Assess(__this->_oldCount - 1);
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :218
void WhileCount__FuseReactiveIObserverOnSet_fn(WhileCount* __this, uObject* newValue)
{
    __this->Assess(1);
}

// public int get_GreaterThan() :182
void WhileCount__get_GreaterThan_fn(WhileCount* __this, int* __retval)
{
    *__retval = __this->GreaterThan();
}

// public void set_GreaterThan(int value) :183
void WhileCount__set_GreaterThan_fn(WhileCount* __this, int* value)
{
    __this->GreaterThan(*value);
}

// private bool IsOn(int count) :131
void WhileCount__IsOn_fn(WhileCount* __this, int* count, bool* __retval)
{
    *__retval = __this->IsOn(*count);
}

// public object get_Items() :69
void WhileCount__get_Items_fn(WhileCount* __this, uObject** __retval)
{
    *__retval = __this->Items();
}

// public void set_Items(object value) :70
void WhileCount__set_Items_fn(WhileCount* __this, uObject* value)
{
    __this->Items(value);
}

// private void OnItemsChanged() :80
void WhileCount__OnItemsChanged_fn(WhileCount* __this)
{
    __this->OnItemsChanged();
}

// protected override sealed void OnRooted() :46
void WhileCount__OnRooted_fn(WhileCount* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->OnItemsChanged();
}

// protected override sealed void OnUnrooted() :52
void WhileCount__OnUnrooted_fn(WhileCount* __this)
{
    if (__this->_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_subscription), ::TYPES[3/*Uno.IDisposable*/]));
        __this->_subscription = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// private void UpdateState() :94
void WhileCount__UpdateState_fn(WhileCount* __this)
{
    __this->UpdateState();
}

// public generated WhileCount() [instance] :44
void WhileCount::ctor_6()
{
    ctor_5();
}

// private void Assess(int count) [instance] :125
void WhileCount::Assess(int count)
{
    _oldCount = count;
    SetActive(IsOn(_oldCount));
}

// public int get_GreaterThan() [instance] :182
int WhileCount::GreaterThan()
{
    return _compare.X;
}

// public void set_GreaterThan(int value) [instance] :183
void WhileCount::GreaterThan(int value)
{
    _compare.X = value;
    _low = 1;
    UpdateState();
}

// private bool IsOn(int count) [instance] :131
bool WhileCount::IsOn(int count)
{
    if ((_low == 1) && (count <= _compare.X))
        return false;

    if ((_low == 2) && (count < _compare.X))
        return false;

    if ((_high == 1) && (count >= _compare.Y))
        return false;

    if ((_high == 2) && (count > _compare.Y))
        return false;

    return true;
}

// public object get_Items() [instance] :69
uObject* WhileCount::Items()
{
    return _items;
}

// public void set_Items(object value) [instance] :70
void WhileCount::Items(uObject* value)
{
    if (_items != value)
    {
        _items = value;
        OnItemsChanged();
    }
}

// private void OnItemsChanged() [instance] :80
void WhileCount::OnItemsChanged()
{
    if (!IsRootingStarted())
        return;

    if (_subscription != NULL)
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[3/*Uno.IDisposable*/]));

    uObject* obs = uAs<uObject*>(_items, ::TYPES[32/*Fuse.Reactive.IObservable*/]);

    if (obs != NULL)
        _subscription = ::g::Fuse::Reactive::IObservable::Subscribe(uInterface(uPtr(obs), ::TYPES[32/*Fuse.Reactive.IObservable*/]), (uObject*)this);

    UpdateState();
}

// private void UpdateState() [instance] :94
void WhileCount::UpdateState()
{
    if (!IsRootingStarted())
        return;

    uArray* e = uAs<uArray*>(_items, ::TYPES[4/*object[]*/]);

    if (e != NULL)
    {
        Assess(uPtr(e)->Length());
        return;
    }

    uObject* obs = uAs<uObject*>(_items, ::TYPES[32/*Fuse.Reactive.IObservable*/]);

    if (obs != NULL)
    {
        Assess(::g::Fuse::IArray::Length(uInterface(uPtr(obs), ::TYPES[30/*Fuse.IArray*/])));
        return;
    }

    uObject* arr = uAs<uObject*>(_items, ::TYPES[30/*Fuse.IArray*/]);

    if (arr != NULL)
    {
        Assess(::g::Fuse::IArray::Length(uInterface(uPtr(arr), ::TYPES[30/*Fuse.IArray*/])));
        return;
    }

    Assess(0);
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/WhileEmpty.uno
// -------------------------------------------------------------------------

// public sealed class WhileNotEmpty :57
// {
static void WhileNotEmpty_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::WhileCount_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::WhileCount_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::WhileCount_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface7),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface8));
    type->SetFields(43);
}

::g::Fuse::Reactive::WhileCount_type* WhileNotEmpty_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::WhileCount_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::WhileCount_typeof();
    options.FieldCount = 43;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(WhileNotEmpty);
    options.TypeSize = sizeof(::g::Fuse::Reactive::WhileCount_type);
    type = (::g::Fuse::Reactive::WhileCount_type*)uClassType::New("Fuse.Reactive.WhileNotEmpty", options);
    type->fp_build_ = WhileNotEmpty_build;
    type->fp_ctor_ = (void*)WhileNotEmpty__New3_fn;
    type->interface8.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnSet_fn;
    type->interface8.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnFailed_fn;
    type->interface8.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnAdd_fn;
    type->interface8.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface8.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnNewAt_fn;
    type->interface8.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnInsertAt_fn;
    type->interface8.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnClear_fn;
    type->interface8.fp_OnNewAll = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnNewAll_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public WhileNotEmpty() :59
void WhileNotEmpty__ctor_7_fn(WhileNotEmpty* __this)
{
    __this->ctor_7();
}

// public WhileNotEmpty New() :59
void WhileNotEmpty__New3_fn(WhileNotEmpty** __retval)
{
    *__retval = WhileNotEmpty::New3();
}

// public WhileNotEmpty() [instance] :59
void WhileNotEmpty::ctor_7()
{
    ctor_6();
    GreaterThan(0);
}

// public WhileNotEmpty New() [static] :59
WhileNotEmpty* WhileNotEmpty::New3()
{
    WhileNotEmpty* obj1 = (WhileNotEmpty*)uNew(WhileNotEmpty_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.3.1/Instance.WindowItems.uno
// -----------------------------------------------------------------------------------

// private sealed class Instantiator.WindowItem :461
// {
static void Instantiator__WindowItem_build(uType* type)
{
    type->SetFields(0,
        uObject_typeof(), offsetof(Instantiator__WindowItem, Data), 0,
        ::g::Fuse::Reactive::Instantiator__ObservableLink_typeof(), offsetof(Instantiator__WindowItem, DataLink), 0,
        uObject_typeof(), offsetof(Instantiator__WindowItem, Id), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(Instantiator__WindowItem, Nodes), 0,
        ::g::Fuse::Reactive::Instantiator__TemplateMatch_typeof(), offsetof(Instantiator__WindowItem, Template), 0);
}

uType* Instantiator__WindowItem_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Instantiator__WindowItem);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.Instantiator.WindowItem", options);
    type->fp_build_ = Instantiator__WindowItem_build;
    type->fp_ctor_ = (void*)Instantiator__WindowItem__New1_fn;
    return type;
}

// public WindowItem() :475
void Instantiator__WindowItem__ctor__fn(Instantiator__WindowItem* __this)
{
    __this->ctor_();
}

// public object get_CurrentData() :481
void Instantiator__WindowItem__get_CurrentData_fn(Instantiator__WindowItem* __this, uObject** __retval)
{
    *__retval = __this->CurrentData();
}

// public WindowItem New() :475
void Instantiator__WindowItem__New1_fn(Instantiator__WindowItem** __retval)
{
    *__retval = Instantiator__WindowItem::New1();
}

// public void Unlink() :488
void Instantiator__WindowItem__Unlink_fn(Instantiator__WindowItem* __this)
{
    __this->Unlink();
}

// public WindowItem() [instance] :475
void Instantiator__WindowItem::ctor_()
{
}

// public object get_CurrentData() [instance] :481
uObject* Instantiator__WindowItem::CurrentData()
{
    return (DataLink != NULL) ? (uObject*)uPtr(DataLink)->Data() : (uObject*)Data;
}

// public void Unlink() [instance] :488
void Instantiator__WindowItem::Unlink()
{
    if (DataLink != NULL)
    {
        Data = uPtr(DataLink)->Data();
        uPtr(DataLink)->Dispose();
        DataLink = NULL;
    }
}

// public WindowItem New() [static] :475
Instantiator__WindowItem* Instantiator__WindowItem::New1()
{
    Instantiator__WindowItem* obj1 = (Instantiator__WindowItem*)uNew(Instantiator__WindowItem_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}}} // ::g::Fuse::Reactive
