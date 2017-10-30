// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Animations.AnimationVariant.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.AnimatorState.h>
#include <Fuse.Animations.AnimatorVariant.h>
#include <Fuse.Animations.Attract.h>
#include <Fuse.Animations.Attract.Subscription.h>
#include <Fuse.Animations.Attractor-1.h>
#include <Fuse.Animations.AttractorConfig.h>
#include <Fuse.Animations.AverageMasterProperty-1.h>
#include <Fuse.Animations.AverageMasterTransform.h>
#include <Fuse.Animations.AverageMixer.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.ContinuousTrackChangeState-1.h>
#include <Fuse.Animations.ContinuousTrackProvider.h>
#include <Fuse.Animations.Converter-1.h>
#include <Fuse.Animations.ConverterDouble.h>
#include <Fuse.Animations.ConverterFloat.h>
#include <Fuse.Animations.ConverterFloat2.h>
#include <Fuse.Animations.ConverterFloat3.h>
#include <Fuse.Animations.ConverterFloat4.h>
#include <Fuse.Animations.ConverterSize.h>
#include <Fuse.Animations.ConverterSize2.h>
#include <Fuse.Animations.CreateStateParams.h>
#include <Fuse.Animations.CubicBezierEasing.h>
#include <Fuse.Animations.Cycle-1.h>
#include <Fuse.Animations.CycleState-1.h>
#include <Fuse.Animations.CycleWaveform.h>
#include <Fuse.Animations.DestinationBehavior-1.h>
#include <Fuse.Animations.DestinationBehavior-1.ValueHandler.h>
#include <Fuse.Animations.DiscreteMasterProperty-1.h>
#include <Fuse.Animations.DiscreteMasterTransform.h>
#include <Fuse.Animations.DiscreteMixer.h>
#include <Fuse.Animations.DiscreteSingleTrack.h>
#include <Fuse.Animations.DiscreteTrackChangeState-1.h>
#include <Fuse.Animations.DiscreteTrackProvider.h>
#include <Fuse.Animations.Easing.BackInImpl.h>
#include <Fuse.Animations.Easing.BackInOutImpl.h>
#include <Fuse.Animations.Easing.BackOutImpl.h>
#include <Fuse.Animations.Easing.BounceInImpl.h>
#include <Fuse.Animations.Easing.BounceInOutImpl.h>
#include <Fuse.Animations.Easing.BounceOutImpl.h>
#include <Fuse.Animations.Easing.CircularInImpl.h>
#include <Fuse.Animations.Easing.CircularInOutImpl.h>
#include <Fuse.Animations.Easing.CircularOutImpl.h>
#include <Fuse.Animations.Easing.CubicInImpl.h>
#include <Fuse.Animations.Easing.CubicInOutImpl.h>
#include <Fuse.Animations.Easing.CubicOutImpl.h>
#include <Fuse.Animations.Easing.ElasticInImpl.h>
#include <Fuse.Animations.Easing.ElasticInOutImpl.h>
#include <Fuse.Animations.Easing.ElasticOutImpl.h>
#include <Fuse.Animations.Easing.ExponentialInImpl.h>
#include <Fuse.Animations.Easing.ExponentialInOutImpl.h>
#include <Fuse.Animations.Easing.ExponentialOutImpl.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Easing.LinearImpl.h>
#include <Fuse.Animations.Easing.QuadraticInImpl.h>
#include <Fuse.Animations.Easing.QuadraticInOutImpl.h>
#include <Fuse.Animations.Easing.QuadraticOutImpl.h>
#include <Fuse.Animations.Easing.QuarticInImpl.h>
#include <Fuse.Animations.Easing.QuarticInOutImpl.h>
#include <Fuse.Animations.Easing.QuarticOutImpl.h>
#include <Fuse.Animations.Easing.QuinticInImpl.h>
#include <Fuse.Animations.Easing.QuinticInOutImpl.h>
#include <Fuse.Animations.Easing.QuinticOutImpl.h>
#include <Fuse.Animations.Easing.SinusoidalInImpl.h>
#include <Fuse.Animations.Easing.SinusoidalInOutImpl.h>
#include <Fuse.Animations.Easing.SinusoidalOutImpl.h>
#include <Fuse.Animations.EasingTrack.h>
#include <Fuse.Animations.FastMatrixTransform.h>
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IMixer.h>
#include <Fuse.Animations.IMixerHandle-1.h>
#include <Fuse.Animations.IMixerMaster.h>
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Animations.IResize.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Animations.MasterBase-1.GFWResult.h>
#include <Fuse.Animations.MasterBase-1.h>
#include <Fuse.Animations.MasterProperty-1.h>
#include <Fuse.Animations.MasterPropertyGet.h>
#include <Fuse.Animations.MasterTransform.h>
#include <Fuse.Animations.Mixer.h>
#include <Fuse.Animations.MixerBase.h>
#include <Fuse.Animations.MixerHandle-1.h>
#include <Fuse.Animations.MixOp.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.Nothing.h>
#include <Fuse.Animations.NothingAnimatorState.h>
#include <Fuse.Animations.OpenAnimator.h>
#include <Fuse.Animations.OpenAnimatorState.h>
#include <Fuse.Animations.Player.h>
#include <Fuse.Animations.PlayerFeedbackFlags.h>
#include <Fuse.Animations.PlayerPart.h>
#include <Fuse.Animations.PlayMode.h>
#include <Fuse.Animations.RangeAdapter-1.h>
#include <Fuse.Animations.RangeAdapterHelpers.h>
#include <Fuse.Animations.Resize.h>
#include <Fuse.Animations.ResizeAnimatorState.h>
#include <Fuse.Animations.Rotate.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.SeekDirection.h>
#include <Fuse.Animations.SeekResult.h>
#include <Fuse.Animations.Skew.h>
#include <Fuse.Animations.Spin.h>
#include <Fuse.Animations.SpinState.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TrackAnimatorState.h>
#include <Fuse.Animations.TrackProvider.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Animations.TransformAnimatorState-1.h>
#include <Fuse.Animations.TriggerAnimation.h>
#include <Fuse.Animations.TriggerAnimationState.h>
#include <Fuse.Animations.TriggerAnimationState.SeekFlags.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.FastMatrix.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Internal.Blender-1.h>
#include <Fuse.Internal.BlenderMap.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.LayoutPriority.h>
#include <Fuse.Marshal.h>
#include <Fuse.Motion.DestinationMotion-1.h>
#include <Fuse.Motion.DestinationMotionConfig.h>
#include <Fuse.Motion.Simulation.DestinationSimulation-1.h>
#include <Fuse.Motion.Simulation.MotionSimulation-1.h>
#include <Fuse.Motion.Simulation.Simulation.h>
#include <Fuse.Node.h>
#include <Fuse.PlacedHandler.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IContext.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.IListener.h>
#include <Fuse.RelativeTransform-1.h>
#include <Fuse.Rotation.h>
#include <Fuse.ScalingModes.h>
#include <Fuse.Time.h>
#include <Fuse.Transform.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Size2.h>
static uString* STRINGS[25];
static uType* TYPES[52];

namespace g{
namespace Fuse{
namespace Animations{

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/TriggerAnimation.uno
// ------------------------------------------------------------------------

// public enum AnimationVariant :8
uEnumType* AnimationVariant_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.AnimationVariant", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Forward", 0LL,
        "Backward", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Animator.uno
// ----------------------------------------------------------------

// public abstract class Animator :68
// {
static void Animator_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Animations::Mixer_typeof());
    type->SetFields(1,
        ::g::Fuse::Animations::MixOp_typeof(), offsetof(Animator, _mixOp), 0,
        ::g::Fuse::Animations::IMixer_typeof(), offsetof(Animator, Mixer), 0,
        ::g::Uno::Double_typeof(), offsetof(Animator, _Delay), 0);
}

Animator_type* Animator_typeof()
{
    static uSStrong<Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 4;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Animator);
    options.TypeSize = sizeof(Animator_type);
    type = (Animator_type*)uClassType::New("Fuse.Animations.Animator", options);
    type->fp_build_ = Animator_build;
    type->fp_get_AnimatorVariant = Animator__get_AnimatorVariant_fn;
    type->fp_GetDurationWithDelay = Animator__GetDurationWithDelay_fn;
    return type;
}

// internal Animator() :98
void Animator__ctor_1_fn(Animator* __this)
{
    __this->ctor_1();
}

// internal virtual Fuse.Animations.AnimatorVariant get_AnimatorVariant() :79
void Animator__get_AnimatorVariant_fn(Animator* __this, int* __retval)
{
    return *__retval = 0, void();
}

// public generated double get_Delay() :77
void Animator__get_Delay_fn(Animator* __this, double* __retval)
{
    *__retval = __this->Delay();
}

// public generated void set_Delay(double value) :77
void Animator__set_Delay_fn(Animator* __this, double* value)
{
    __this->Delay(*value);
}

// internal virtual double GetDurationWithDelay(Fuse.Animations.AnimationVariant dir) :93
void Animator__GetDurationWithDelay_fn(Animator* __this, int* dir, double* __retval)
{
    return *__retval = __this->Delay(), void();
}

// public Fuse.Animations.MixOp get_MixOp() :89
void Animator__get_MixOp_fn(Animator* __this, int* __retval)
{
    *__retval = __this->MixOp();
}

// public void set_MixOp(Fuse.Animations.MixOp value) :90
void Animator__set_MixOp_fn(Animator* __this, int* value)
{
    __this->MixOp(*value);
}

// internal Animator() [instance] :98
void Animator::ctor_1()
{
    Mixer = ::g::Fuse::Animations::Mixer::Default();
    ctor_();
}

// public generated double get_Delay() [instance] :77
double Animator::Delay()
{
    return _Delay;
}

// public generated void set_Delay(double value) [instance] :77
void Animator::Delay(double value)
{
    _Delay = value;
}

// public Fuse.Animations.MixOp get_MixOp() [instance] :89
int Animator::MixOp()
{
    return _mixOp;
}

// public void set_MixOp(Fuse.Animations.MixOp value) [instance] :90
void Animator::MixOp(int value)
{
    _mixOp = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Animator.uno
// ----------------------------------------------------------------

// internal abstract class AnimatorState :122
// {
static void AnimatorState_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(AnimatorState, TotalDuration), 0,
        ::g::Fuse::Animations::AnimationVariant_typeof(), offsetof(AnimatorState, Variant), 0,
        ::g::Fuse::Visual_typeof(), offsetof(AnimatorState, Visual), 0);
}

AnimatorState_type* AnimatorState_typeof()
{
    static uSStrong<AnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(AnimatorState);
    options.TypeSize = sizeof(AnimatorState_type);
    type = (AnimatorState_type*)uClassType::New("Fuse.Animations.AnimatorState", options);
    type->fp_build_ = AnimatorState_build;
    type->fp_Disable = AnimatorState__Disable_fn;
    return type;
}

// protected AnimatorState(Fuse.Animations.CreateStateParams p, [Fuse.Visual useVisual]) :128
void AnimatorState__ctor__fn(AnimatorState* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Visual* useVisual)
{
    __this->ctor_(p, useVisual);
}

// public virtual void Disable() :142
void AnimatorState__Disable_fn(AnimatorState* __this)
{
}

// protected AnimatorState(Fuse.Animations.CreateStateParams p, [Fuse.Visual useVisual]) [instance] :128
void AnimatorState::ctor_(::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Visual* useVisual)
{
    Variant = uPtr(p)->Variant;
    Visual = ((useVisual != NULL) ? useVisual : (::g::Fuse::Visual*)p->Attached);
    TotalDuration = p->TotalDuration;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Animator.uno
// ----------------------------------------------------------------

// internal enum AnimatorVariant :6
uEnumType* AnimatorVariant_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.AnimatorVariant", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Allow", 0LL,
        "Disallow", 1LL,
        "HasBackward", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Attract.uno
// ---------------------------------------------------------------

// public sealed class Attract :41
// {
static void Attract_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Animations::AttractorConfig_typeof(), offsetof(Attract, _config), 0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(Attract, _sourceValue), 0);
}

::g::Fuse::Reactive::Expression_type* Attract_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Attract);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Animations.Attract", options);
    type->fp_build_ = Attract_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))Attract__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))Attract__Subscribe_fn;
    return type;
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :54
void Attract__Subscribe_fn(Attract* __this, uObject* context, uObject* listener, uObject** __retval)
{
    Attract__Subscription* sub = Attract__Subscription::New1(__this, context, listener);
    sub->Init(context);
    return *__retval = (uObject*)sub, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Attractor.uno
// -----------------------------------------------------------------

// public sealed class Attractor<T> :26
// {
static void Attractor_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Motion should not be changed post-rooting");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Attractor.uno");
    ::STRINGS[2] = uString::Const("set_Motion");
    ::TYPES[0] = ::g::Fuse::Motion::Simulation::Simulation_typeof();
    ::TYPES[1] = ::g::Uno::Action_typeof();
    ::TYPES[2] = ::g::Fuse::Motion::Simulation::DestinationSimulation_typeof();
    ::TYPES[3] = ::g::Fuse::Motion::Simulation::MotionSimulation_typeof();
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetPrecalc(
        ::g::Fuse::Motion::Simulation::DestinationSimulation_typeof()->MakeType(type->T(0), NULL),
        ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Attractor_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Attractor_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(Attractor_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(Attractor_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Attractor_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Attractor_type, interface5),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(Attractor_type, interface6));
    type->SetFields(15,
        ::g::Uno::Bool_typeof(), offsetof(Attractor, _isEnabled), 0,
        ::g::Uno::Bool_typeof(), offsetof(Attractor, _isUpdate), 0,
        ::g::Fuse::Motion::DestinationMotion_typeof()->MakeType(type->T(0), NULL), offsetof(Attractor, _motion), 0,
        ::TYPES[2/*Fuse.Motion.Simulation.DestinationSimulation`1*/]->MakeType(type->T(0), NULL), offsetof(Attractor, _sim), 0,
        ::g::Uno::Float_typeof(), offsetof(Attractor, _timeMultiplier), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL), offsetof(Attractor, _Target), 0);
}

Attractor_type* Attractor_typeof()
{
    static uSStrong<Attractor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 21;
    options.GenericCount = 1;
    options.InterfaceCount = 7;
    options.DependencyCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(Attractor);
    options.TypeSize = sizeof(Attractor_type);
    type = (Attractor_type*)uClassType::New("Fuse.Animations.Attractor`1", options);
    type->fp_build_ = Attractor_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Attractor__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Attractor__OnUnrooted_fn;
    type->interface6.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))Attractor__UnoUXIPropertyListenerOnPropertyChanged_fn;
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

// private void CheckNeedUpdate() :153
void Attractor__CheckNeedUpdate_fn(Attractor* __this)
{
    __this->CheckNeedUpdate();
}

// public bool get_IsEnabled() :111
void Attractor__get_IsEnabled_fn(Attractor* __this, bool* __retval)
{
    *__retval = __this->IsEnabled();
}

// public void set_IsEnabled(bool value) :112
void Attractor__set_IsEnabled_fn(Attractor* __this, bool* value)
{
    __this->IsEnabled(*value);
}

// public Fuse.Motion.DestinationMotion<T> get_Motion() :46
void Attractor__get_Motion_fn(Attractor* __this, ::g::Fuse::Motion::DestinationMotion** __retval)
{
    *__retval = __this->Motion();
}

// public void set_Motion(Fuse.Motion.DestinationMotion<T> value) :47
void Attractor__set_Motion_fn(Attractor* __this, ::g::Fuse::Motion::DestinationMotion* value)
{
    __this->Motion(value);
}

// protected override sealed void OnRooted() :166
void Attractor__OnRooted_fn(Attractor* __this)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Fuse.Motion.Simulation.DestinationSimulation<T>*/),
    };
    uT ret3(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->_sim = ((uObject*)uPtr(__this->Motion())->Create1());
    ::g::Fuse::Motion::Simulation::DestinationSimulation::Reset_ex(uInterface(uPtr(__this->_sim), __types[0]), (::g::Uno::UX::Property1__Get_fn(uPtr(__this->Target()), &ret3), ret3));
    uPtr(__this->Target())->AddListener((uObject*)__this);
}

// protected override sealed void OnUnrooted() :174
void Attractor__OnUnrooted_fn(Attractor* __this)
{
    __this->_sim = NULL;
    __this->CheckNeedUpdate();
    uPtr(__this->Target())->RemoveListener((uObject*)__this);
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// public generated Uno.UX.Property<T> get_Target() :33
void Attractor__get_Target_fn(Attractor* __this, ::g::Uno::UX::Property1** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :33
void Attractor__set_Target_fn(Attractor* __this, ::g::Uno::UX::Property1* value)
{
    __this->Target(value);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :192
void Attractor__UnoUXIPropertyListenerOnPropertyChanged_fn(Attractor* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Fuse.Motion.Simulation.DestinationSimulation<T>*/),
        __this->__type->Precalced(1/*Fuse.Motion.Simulation.MotionSimulation<T>*/),
    };
    uT ret4(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    uT val(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));

    if (__this->_sim == NULL)
        return;

    val = (::g::Uno::UX::Property1__Get_fn(uPtr(__this->Target()), &ret4), ret4);

    if (!__this->IsEnabled() || ::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(__this->_sim), ::TYPES[0/*Fuse.Motion.Simulation.Simulation*/])))
        ::g::Fuse::Motion::Simulation::DestinationSimulation::Reset_ex(uInterface(uPtr(__this->_sim), __types[0]), val);
    else
        ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(__this->_sim), __types[1]), val);

    __this->CheckNeedUpdate();
}

// private void Update() :182
void Attractor__Update_fn(Attractor* __this)
{
    __this->Update();
}

// private void CheckNeedUpdate() [instance] :153
void Attractor::CheckNeedUpdate()
{
    bool need = (_sim != NULL) && !::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_sim), ::TYPES[0/*Fuse.Motion.Simulation.Simulation*/]));

    if (need == _isUpdate)
        return;

    if (need)
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)Attractor__Update_fn, this), 0);
    else
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)Attractor__Update_fn, this), 0);

    _isUpdate = need;
}

// public bool get_IsEnabled() [instance] :111
bool Attractor::IsEnabled()
{
    return _isEnabled;
}

// public void set_IsEnabled(bool value) [instance] :112
void Attractor::IsEnabled(bool value)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Motion.Simulation.DestinationSimulation<T>*/),
    };
    uT ret6(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));

    if (_isEnabled == value)
        return;

    _isEnabled = true;

    if (!_isEnabled && (_sim != NULL))
        ::g::Fuse::Motion::Simulation::DestinationSimulation::Reset_ex(uInterface(uPtr(_sim), __types[0]), (::g::Uno::UX::Property1__Get_fn(uPtr(Target()), &ret6), ret6));

    CheckNeedUpdate();
}

// public Fuse.Motion.DestinationMotion<T> get_Motion() [instance] :46
::g::Fuse::Motion::DestinationMotion* Attractor::Motion()
{
    return _motion;
}

// public void set_Motion(Fuse.Motion.DestinationMotion<T> value) [instance] :47
void Attractor::Motion(::g::Fuse::Motion::DestinationMotion* value)
{
    _motion = value;

    if (IsRootingCompleted())
        ::g::Fuse::Diagnostics::UserError(::STRINGS[0/*"Motion shou...*/], this, ::STRINGS[1/*"/usr/local/...*/], 51, ::STRINGS[2/*"set_Motion"*/], NULL);
}

// public generated Uno.UX.Property<T> get_Target() [instance] :33
::g::Uno::UX::Property1* Attractor::Target()
{
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :33
void Attractor::Target(::g::Uno::UX::Property1* value)
{
    _Target = value;
}

// private void Update() [instance] :182
void Attractor::Update()
{
    uType* __types[] = {
        __type->Precalced(1/*Fuse.Motion.Simulation.MotionSimulation<T>*/),
    };
    uT ret5(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));

    if (_sim != NULL)
    {
        ::g::Fuse::Motion::Simulation::Simulation::Update(uInterface(uPtr(_sim), ::TYPES[0/*Fuse.Motion.Simulation.Simulation*/]), ::g::Fuse::Time::FrameInterval() * (double)_timeMultiplier);
        ::g::Uno::UX::Property1__Set_fn(uPtr(Target()), (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_sim), __types[0]), &ret5), ret5), (uObject*)this);
    }

    CheckNeedUpdate();
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Attract.uno
// ---------------------------------------------------------------

// public sealed class AttractorConfig :19
// {
static void AttractorConfig_build(uType* type)
{
    type->SetFields(9);
}

uType* AttractorConfig_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Motion::DestinationMotionConfig_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(AttractorConfig);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Animations.AttractorConfig", options);
    type->fp_build_ = AttractorConfig_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/AverageMixer.uno
// --------------------------------------------------------------------

// internal sealed class AverageMasterProperty<T> :17
// {
static void AverageMasterProperty_build(uType* type)
{
    ::TYPES[4] = ::g::Fuse::Internal::BlenderMap_typeof();
    type->SetBase(::g::Fuse::Animations::MasterProperty_typeof()->MakeType(type->T(0), NULL));
    type->SetDependencies(
        ::g::Fuse::Internal::BlenderMap_typeof()->MakeMethod(0/*Get<T>*/, type->T(0), NULL));
    type->SetPrecalc(
        ::g::Fuse::Internal::BlenderMap_typeof()->MakeMethod(0/*Get<T>*/, type->T(0), NULL));
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(::g::Fuse::Animations::MasterProperty_type, interface0),
        ::g::Fuse::Animations::MasterPropertyGet_typeof(), offsetof(::g::Fuse::Animations::MasterProperty_type, interface1),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Animations::MasterProperty_type, interface2));
    type->SetFields(10,
        ::g::Fuse::Internal::Blender_typeof()->MakeType(type->T(0), NULL), offsetof(AverageMasterProperty, blender), 0);
}

::g::Fuse::Animations::MasterProperty_type* AverageMasterProperty_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MasterProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::MasterProperty_typeof();
    options.FieldCount = 11;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.DependencyCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(AverageMasterProperty);
    options.TypeSize = sizeof(::g::Fuse::Animations::MasterProperty_type);
    type = (::g::Fuse::Animations::MasterProperty_type*)uClassType::New("Fuse.Animations.AverageMasterProperty`1", options);
    type->fp_build_ = AverageMasterProperty_build;
    type->fp_OnActive = (void(*)(::g::Fuse::Animations::MasterBase*))AverageMasterProperty__OnActive_fn;
    type->fp_OnComplete = (void(*)(::g::Fuse::Animations::MasterBase*))AverageMasterProperty__OnComplete_fn;
    type->interface2.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Animations::MasterProperty__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface1.fp_GetPropertyObject = (void(*)(uObject*, uObject**))::g::Fuse::Animations::MasterProperty__GetPropertyObject_fn;
    return type;
}

// public AverageMasterProperty(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :19
void AverageMasterProperty__ctor_2_fn(AverageMasterProperty* __this, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_2(property, mixerBase);
}

// public AverageMasterProperty New(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :19
void AverageMasterProperty__New1_fn(uType* __type, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase, AverageMasterProperty** __retval)
{
    *__retval = AverageMasterProperty::New1(__type, property, mixerBase);
}

// protected override sealed void OnActive() :23
void AverageMasterProperty__OnActive_fn(AverageMasterProperty* __this)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Fuse.Internal.BlenderMap.Get<T>*/),
    };
    ::g::Fuse::Animations::MasterProperty__OnActive_fn(__this);

    if (__this->blender == NULL)
        __this->blender = ((::g::Fuse::Internal::Blender*)::g::Fuse::Internal::BlenderMap::Get(__types[0]));
}

// public override sealed void OnComplete() :30
void AverageMasterProperty__OnComplete_fn(AverageMasterProperty* __this)
{
    uT ret2(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    uT ret3(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    uT ret5(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    uT ret6(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    uT ret7(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    uT ret8(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    uT ret9(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    uT ret10(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    uT nv(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    uT add(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    ::g::Fuse::Animations::MixerHandle* ret4;
    ::g::Fuse::Animations::MasterBase__GFWResult weight = __this->GetFullWeight();
    nv = (uPtr(__this->blender)->Weight_ex((::g::Fuse::Animations::MasterProperty__get_RestValue_fn(__this, &ret3), ret3), uCRef((double)(weight.Rest / weight.Full)), &ret2), ret2);
    int c = uPtr((::g::Uno::Collections::List*)__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::g::Fuse::Animations::MixerHandle* v = (::g::Uno::Collections::List__get_Item_fn(uPtr((::g::Uno::Collections::List*)__this->Handles), uCRef<int>(i), &ret4), ret4);

        if (!uPtr(v)->HasValue())
            continue;

        if (uPtr(v)->MixOp() == 2)
            add = (uPtr(__this->blender)->Weight_ex(uPtr(v)->Value(), uCRef((double)(::g::Uno::Math::Max1(0.0f, uPtr(v)->Strength) / weight.Full)), &ret5), ret5);
        else if (uPtr(v)->MixOp() == 0)
            add = (uPtr(__this->blender)->Weight_ex((uPtr(__this->blender)->Sub_ex(uPtr(v)->Value(), (::g::Fuse::Animations::MasterProperty__get_RestValue_fn(__this, &ret8), ret8), &ret7), ret7), uCRef((double)uPtr(v)->Strength), &ret6), ret6);
        else
            add = (uPtr(__this->blender)->Weight_ex(uPtr(v)->Value(), uCRef((double)uPtr(v)->Strength), &ret9), ret9);

        nv = (uPtr(__this->blender)->Add_ex(nv, add, &ret10), ret10);
    }

    ::g::Fuse::Animations::MasterProperty__Set_fn(__this, nv);
}

// public AverageMasterProperty(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) [instance] :19
void AverageMasterProperty::ctor_2(::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    ctor_1(property, mixerBase);
}

// public AverageMasterProperty New(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) [static] :19
AverageMasterProperty* AverageMasterProperty::New1(uType* __type, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    AverageMasterProperty* obj1 = (AverageMasterProperty*)uNew(__type);
    obj1->ctor_2(property, mixerBase);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/AverageMixer.uno
// --------------------------------------------------------------------

// internal sealed class AverageMasterTransform :57
// {
static void AverageMasterTransform_build(uType* type)
{
    ::TYPES[5] = ::g::Uno::Float4x4_typeof();
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(::g::Fuse::Animations::MasterBase_type, interface0));
    type->SetFields(6);
}

::g::Fuse::Animations::MasterBase_type* AverageMasterTransform_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MasterBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::MasterTransform_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(AverageMasterTransform);
    options.TypeSize = sizeof(::g::Fuse::Animations::MasterBase_type);
    type = (::g::Fuse::Animations::MasterBase_type*)uClassType::New("Fuse.Animations.AverageMasterTransform", options);
    type->fp_build_ = AverageMasterTransform_build;
    type->fp_OnComplete = (void(*)(::g::Fuse::Animations::MasterBase*))AverageMasterTransform__OnComplete_fn;
    return type;
}

// public AverageMasterTransform(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) :59
void AverageMasterTransform__ctor_2_fn(AverageMasterTransform* __this, ::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_2(node, mixerBase);
}

// public AverageMasterTransform New(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) :59
void AverageMasterTransform__New1_fn(::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase, AverageMasterTransform** __retval)
{
    *__retval = AverageMasterTransform::New1(node, mixerBase);
}

// public override sealed void OnComplete() :62
void AverageMasterTransform__OnComplete_fn(AverageMasterTransform* __this)
{
    ::g::Fuse::Animations::MixerHandle* ret2;
    ::g::Fuse::Animations::MasterBase__GFWResult weight = __this->GetFullWeight();
    ::g::Fuse::FastMatrix* nv = ::g::Fuse::FastMatrix::Identity();
    int c = uPtr((::g::Uno::Collections::List*)__this->Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::g::Fuse::Animations::MixerHandle* v = (::g::Uno::Collections::List__get_Item_fn(uPtr((::g::Uno::Collections::List*)__this->Handles), uCRef<int>(i), &ret2), ret2);

        if (!uPtr(v)->HasValue())
            continue;

        if (uPtr(v)->MixOp() == 2)
            uPtr(uPtr(v)->Value().Strong< ::g::Fuse::Transform*>())->AppendTo(nv, uPtr(v)->Strength / weight.Full);
        else
            uPtr(uPtr(v)->Value().Strong< ::g::Fuse::Transform*>())->AppendTo(nv, uPtr(v)->Strength);
    }

    if (!uPtr(nv)->Matrix().Equals(::TYPES[5/*float4x4*/], uBox(::TYPES[5/*float4x4*/], uPtr(uPtr(__this->FMT)->Matrix)->Matrix())))
    {
        uPtr(__this->FMT)->Matrix = nv;
        uPtr(__this->FMT)->Changed();
    }
}

// public AverageMasterTransform(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) [instance] :59
void AverageMasterTransform::ctor_2(::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    ctor_1(node, mixerBase);
}

// public AverageMasterTransform New(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) [static] :59
AverageMasterTransform* AverageMasterTransform::New1(::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    AverageMasterTransform* obj1 = (AverageMasterTransform*)uNew(AverageMasterTransform_typeof());
    obj1->ctor_2(node, mixerBase);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/AverageMixer.uno
// --------------------------------------------------------------------

// internal sealed class AverageMixer :7
// {
static void AverageMixer_build(uType* type)
{
    ::TYPES[6] = ::g::Fuse::Animations::AverageMasterProperty_typeof();
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[6/*Fuse.Animations.AverageMasterProperty`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixer_typeof(), offsetof(::g::Fuse::Animations::MixerBase_type, interface0));
    type->SetFields(2);
}

::g::Fuse::Animations::MixerBase_type* AverageMixer_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MixerBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::MixerBase_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.MethodTypeCount = 1;
    options.ObjectSize = sizeof(AverageMixer);
    options.TypeSize = sizeof(::g::Fuse::Animations::MixerBase_type);
    type = (::g::Fuse::Animations::MixerBase_type*)uClassType::New("Fuse.Animations.AverageMixer", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1,0);
    type->fp_build_ = AverageMixer_build;
    type->fp_ctor_ = (void*)AverageMixer__New1_fn;
    type->fp_CreateMaster = (void(*)(::g::Fuse::Animations::MixerBase*, uType*, ::g::Uno::UX::Property1*, ::g::Fuse::Animations::MixerBase*, ::g::Fuse::Animations::MasterProperty**))AverageMixer__CreateMaster_fn;
    type->fp_CreateMasterTransform = (void(*)(::g::Fuse::Animations::MixerBase*, ::g::Fuse::Visual*, ::g::Fuse::Animations::MixerBase*, ::g::Fuse::Animations::MasterBase**))AverageMixer__CreateMasterTransform_fn;
    type->interface0.fp_Register = (void(*)(uObject*, uType*, ::g::Uno::UX::Property1*, int*, uObject**))::g::Fuse::Animations::MixerBase__Register_fn;
    type->interface0.fp_RegisterTransform = (void(*)(uObject*, ::g::Fuse::Visual*, int*, int*, uObject**))::g::Fuse::Animations::MixerBase__RegisterTransform_fn;
    return type;
}

// public generated AverageMixer() :7
void AverageMixer__ctor_1_fn(AverageMixer* __this)
{
    __this->ctor_1();
}

// protected override sealed Fuse.Animations.MasterProperty<T> CreateMaster<T>(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :9
void AverageMixer__CreateMaster_fn(AverageMixer* __this, uType* __type, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase, ::g::Fuse::Animations::MasterProperty** __retval)
{
    __type = AverageMixer_typeof()->GetVirtual(0, __type);
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Animations.AverageMasterProperty<T>*/),
    };
    return *__retval = (::g::Fuse::Animations::AverageMasterProperty*)::g::Fuse::Animations::AverageMasterProperty::New1(__types[0], property, mixerBase), void();
}

// protected override sealed Fuse.Animations.MasterBase<Fuse.Transform> CreateMasterTransform(Fuse.Visual element, Fuse.Animations.MixerBase mixerBase) :12
void AverageMixer__CreateMasterTransform_fn(AverageMixer* __this, ::g::Fuse::Visual* element, ::g::Fuse::Animations::MixerBase* mixerBase, ::g::Fuse::Animations::MasterBase** __retval)
{
    return *__retval = ::g::Fuse::Animations::AverageMasterTransform::New1(element, mixerBase), void();
}

// public generated AverageMixer New() :7
void AverageMixer__New1_fn(AverageMixer** __retval)
{
    *__retval = AverageMixer::New1();
}

// public generated AverageMixer() [instance] :7
void AverageMixer::ctor_1()
{
    ctor_();
}

// public generated AverageMixer New() [static] :7
AverageMixer* AverageMixer::New1()
{
    AverageMixer* obj1 = (AverageMixer*)uNew(AverageMixer_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Easing.uno
// ----------------------------------------------------------

// internal sealed class Easing.BackInImpl :320
// {
static void Easing__BackInImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__BackInImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__BackInImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.BackInImpl", options);
    type->fp_build_ = Easing__BackInImpl_build;
    type->fp_ctor_ = (void*)Easing__BackInImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__BackInImpl__Map_fn;
    return type;
}

// public generated BackInImpl() :320
void Easing__BackInImpl__ctor_1_fn(Easing__BackInImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :322
void Easing__BackInImpl__Map_fn(Easing__BackInImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    float s = 1.70158f;
    return *__retval = (k_ * k_) * (((double)(s + 1.0f) * k_) - (double)s), void();
}

// public generated BackInImpl New() :320
void Easing__BackInImpl__New1_fn(Easing__BackInImpl** __retval)
{
    *__retval = Easing__BackInImpl::New1();
}

// public generated BackInImpl() [instance] :320
void Easing__BackInImpl::ctor_1()
{
    ctor_();
}

// public generated BackInImpl New() [static] :320
Easing__BackInImpl* Easing__BackInImpl::New1()
{
    Easing__BackInImpl* obj1 = (Easing__BackInImpl*)uNew(Easing__BackInImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Easing.uno
// ----------------------------------------------------------

// internal sealed class Easing.BackInOutImpl :339
// {
static void Easing__BackInOutImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__BackInOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__BackInOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.BackInOutImpl", options);
    type->fp_build_ = Easing__BackInOutImpl_build;
    type->fp_ctor_ = (void*)Easing__BackInOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__BackInOutImpl__Map_fn;
    return type;
}

// public generated BackInOutImpl() :339
void Easing__BackInOutImpl__ctor_1_fn(Easing__BackInOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :341
void Easing__BackInOutImpl__Map_fn(Easing__BackInOutImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    float s = 2.59490943f;
    k_ = k_ * 2.0;

    if (k_ < 1.0)
        return *__retval = 0.5 * ((k_ * k_) * (((double)(s + 1.0f) * k_) - (double)s)), void();

    k_ = k_ - 2.0;
    return *__retval = 0.5 * (((k_ * k_) * (((double)(s + 1.0f) * k_) + (double)s)) + 2.0), void();
}

// public generated BackInOutImpl New() :339
void Easing__BackInOutImpl__New1_fn(Easing__BackInOutImpl** __retval)
{
    *__retval = Easing__BackInOutImpl::New1();
}

// public generated BackInOutImpl() [instance] :339
void Easing__BackInOutImpl::ctor_1()
{
    ctor_();
}

// public generated BackInOutImpl New() [static] :339
Easing__BackInOutImpl* Easing__BackInOutImpl::New1()
{
    Easing__BackInOutImpl* obj1 = (Easing__BackInOutImpl*)uNew(Easing__BackInOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Easing.uno
// ----------------------------------------------------------

// internal sealed class Easing.BackOutImpl :329
// {
static void Easing__BackOutImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__BackOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__BackOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.BackOutImpl", options);
    type->fp_build_ = Easing__BackOutImpl_build;
    type->fp_ctor_ = (void*)Easing__BackOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__BackOutImpl__Map_fn;
    return type;
}

// public generated BackOutImpl() :329
void Easing__BackOutImpl__ctor_1_fn(Easing__BackOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :331
void Easing__BackOutImpl__Map_fn(Easing__BackOutImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    float s = 1.70158f;
    k_ = k_ - 1.0;
    return *__retval = ((k_ * k_) * (((double)(s + 1.0f) * k_) + (double)s)) + 1.0, void();
}

// public generated BackOutImpl New() :329
void Easing__BackOutImpl__New1_fn(Easing__BackOutImpl** __retval)
{
    *__retval = Easing__BackOutImpl::New1();
}

// public generated BackOutImpl() [instance] :329
void Easing__BackOutImpl::ctor_1()
{
    ctor_();
}

// public generated BackOutImpl New() [static] :329
Easing__BackOutImpl* Easing__BackOutImpl::New1()
{
    Easing__BackOutImpl* obj1 = (Easing__BackOutImpl*)uNew(Easing__BackOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Easing.uno
// ----------------------------------------------------------

// internal sealed class Easing.BounceInImpl :354
// {
static void Easing__BounceInImpl_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Animations::Easing_typeof());
}

::g::Fuse::Animations::Easing_type* Easing__BounceInImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Easing__BounceInImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.BounceInImpl", options);
    type->fp_build_ = Easing__BounceInImpl_build;
    type->fp_ctor_ = (void*)Easing__BounceInImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__BounceInImpl__Map_fn;
    return type;
}

// public generated BounceInImpl() :354
void Easing__BounceInImpl__ctor_1_fn(Easing__BounceInImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :356
void Easing__BounceInImpl__Map_fn(Easing__BounceInImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    return *__retval = 1.0 - uPtr(::g::Fuse::Animations::Easing::BounceOut_)->Map(1.0 - k_), void();
}

// public generated BounceInImpl New() :354
void Easing__BounceInImpl__New1_fn(Easing__BounceInImpl** __retval)
{
    *__retval = Easing__BounceInImpl::New1();
}

// public generated BounceInImpl() [instance] :354
void Easing__BounceInImpl::ctor_1()
{
    ctor_();
}

// public generated BounceInImpl New() [static] :354
Easing__BounceInImpl* Easing__BounceInImpl::New1()
{
    Easing__BounceInImpl* obj1 = (Easing__BounceInImpl*)uNew(Easing__BounceInImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Easing.uno
// ----------------------------------------------------------

// internal sealed class Easing.BounceInOutImpl :388
// {
static void Easing__BounceInOutImpl_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Animations::Easing_typeof());
}

::g::Fuse::Animations::Easing_type* Easing__BounceInOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Easing__BounceInOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.BounceInOutImpl", options);
    type->fp_build_ = Easing__BounceInOutImpl_build;
    type->fp_ctor_ = (void*)Easing__BounceInOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__BounceInOutImpl__Map_fn;
    return type;
}

// public generated BounceInOutImpl() :388
void Easing__BounceInOutImpl__ctor_1_fn(Easing__BounceInOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :390
void Easing__BounceInOutImpl__Map_fn(Easing__BounceInOutImpl* __this, double* k, double* __retval)
{
    double k_ = *k;

    if (k_ < 0.5)
        return *__retval = uPtr(::g::Fuse::Animations::Easing::BounceIn_)->Map(k_ * 2.0) * 0.5, void();

    return *__retval = (uPtr(::g::Fuse::Animations::Easing::BounceOut_)->Map((k_ * 2.0) - 1.0) * 0.5) + 0.5, void();
}

// public generated BounceInOutImpl New() :388
void Easing__BounceInOutImpl__New1_fn(Easing__BounceInOutImpl** __retval)
{
    *__retval = Easing__BounceInOutImpl::New1();
}

// public generated BounceInOutImpl() [instance] :388
void Easing__BounceInOutImpl::ctor_1()
{
    ctor_();
}

// public generated BounceInOutImpl New() [static] :388
Easing__BounceInOutImpl* Easing__BounceInOutImpl::New1()
{
    Easing__BounceInOutImpl* obj1 = (Easing__BounceInOutImpl*)uNew(Easing__BounceInOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Easing.uno
// ----------------------------------------------------------

// internal sealed class Easing.BounceOutImpl :362
// {
static void Easing__BounceOutImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__BounceOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__BounceOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.BounceOutImpl", options);
    type->fp_build_ = Easing__BounceOutImpl_build;
    type->fp_ctor_ = (void*)Easing__BounceOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__BounceOutImpl__Map_fn;
    return type;
}

// public generated BounceOutImpl() :362
void Easing__BounceOutImpl__ctor_1_fn(Easing__BounceOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :364
void Easing__BounceOutImpl__Map_fn(Easing__BounceOutImpl* __this, double* k, double* __retval)
{
    double k_ = *k;

    if (k_ < 0.36363637447357178)
        return *__retval = (7.5625 * k_) * k_, void();
    else if (k_ < 0.72727274894714355)
    {
        k_ = k_ - 0.54545456171035767;
        return *__retval = ((7.5625 * k_) * k_) + 0.75, void();
    }
    else if (k_ < 0.90909093618392944)
    {
        k_ = k_ - 0.81818181276321411;
        return *__retval = ((7.5619997978210449 * k_) * k_) + 0.9375, void();
    }
    else
    {
        k_ = k_ - 0.95454543828964233;
        return *__retval = ((7.5625 * k_) * k_) + 0.984375, void();
    }
}

// public generated BounceOutImpl New() :362
void Easing__BounceOutImpl__New1_fn(Easing__BounceOutImpl** __retval)
{
    *__retval = Easing__BounceOutImpl::New1();
}

// public generated BounceOutImpl() [instance] :362
void Easing__BounceOutImpl::ctor_1()
{
    ctor_();
}

// public generated BounceOutImpl New() [static] :362
Easing__BounceOutImpl* Easing__BounceOutImpl::New1()
{
    Easing__BounceOutImpl* obj1 = (Easing__BounceOutImpl*)uNew(Easing__BounceOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Change.uno
// --------------------------------------------------------------

// public sealed class Change<T> :35
// {
static void Change_build(uType* type)
{
    ::STRINGS[3] = uString::Const("target");
    ::STRINGS[4] = uString::Const("Unsupported change type: ");
    ::TYPES[7] = ::g::Uno::Type_typeof();
    ::TYPES[8] = ::g::Fuse::Animations::Converter_typeof();
    ::TYPES[9] = ::g::Fuse::Animations::ContinuousTrackChangeState_typeof();
    ::TYPES[10] = ::g::Fuse::Animations::DiscreteTrackChangeState_typeof();
    type->SetDependencies(
        ::g::Fuse::Animations::ConverterDouble_typeof(),
        ::g::Fuse::Animations::ConverterFloat_typeof(),
        ::g::Fuse::Animations::ConverterFloat2_typeof(),
        ::g::Fuse::Animations::ConverterFloat3_typeof(),
        ::g::Fuse::Animations::ConverterFloat4_typeof(),
        ::g::Fuse::Animations::ConverterSize_typeof(),
        ::g::Fuse::Animations::ConverterSize2_typeof(),
        ::g::Fuse::Animations::Mixer_typeof(),
        ::g::Uno::Type_typeof());
    type->SetPrecalc(
        ::g::Fuse::Animations::ContinuousTrackChangeState_typeof()->MakeType(type->T(0), NULL),
        ::g::Fuse::Animations::Converter_typeof()->MakeType(type->T(0), NULL),
        ::g::Fuse::Animations::DiscreteTrackChangeState_typeof()->MakeType(type->T(0), NULL));
    type->SetFields(18,
        ::TYPES[8/*Fuse.Animations.Converter`1*/]->MakeType(type->T(0), NULL), offsetof(Change, ContinuousConverter), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL), offsetof(Change, _Target), 0);
}

::g::Fuse::Animations::Animator_type* Change_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::TrackAnimator_typeof();
    options.FieldCount = 20;
    options.GenericCount = 1;
    options.DependencyCount = 9;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(Change);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.Change`1", options);
    type->fp_build_ = Change_build;
    type->fp_CreateState = (void(*)(::g::Fuse::Animations::Animator*, ::g::Fuse::Animations::CreateStateParams*, ::g::Fuse::Animations::AnimatorState**))Change__CreateState_fn;
    return type;
}

// public Change(Uno.UX.Property<T> target) :63
void Change__ctor_3_fn(Change* __this, ::g::Uno::UX::Property1* target)
{
    __this->ctor_3(target);
}

// internal override sealed Fuse.Animations.AnimatorState CreateState(Fuse.Animations.CreateStateParams p) :97
void Change__CreateState_fn(Change* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Fuse.Animations.ContinuousTrackChangeState<T>*/),
        __this->__type->Precalced(2/*Fuse.Animations.DiscreteTrackChangeState<T>*/),
    };

    if (__this->IsContinuous())
        return *__retval = (::g::Fuse::Animations::ContinuousTrackChangeState*)::g::Fuse::Animations::ContinuousTrackChangeState::New1(__types[0], __this, p), void();

    return *__retval = (::g::Fuse::Animations::DiscreteTrackChangeState*)::g::Fuse::Animations::DiscreteTrackChangeState::New1(__types[1], __this, p), void();
}

// private bool get_IsContinuous() :106
void Change__get_IsContinuous_fn(Change* __this, bool* __retval)
{
    *__retval = __this->IsContinuous();
}

// public Change New(Uno.UX.Property<T> target) :63
void Change__New2_fn(uType* __type, ::g::Uno::UX::Property1* target, Change** __retval)
{
    *__retval = Change::New2(__type, target);
}

// public generated Uno.UX.Property<T> get_Target() :40
void Change__get_Target_fn(Change* __this, ::g::Uno::UX::Property1** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :40
void Change__set_Target_fn(Change* __this, ::g::Uno::UX::Property1* value)
{
    __this->Target(value);
}

// public T get_Value() :47
void Change__get_Value_fn(Change* __this, uTRef __retval)
{
    uT ret3(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    return __retval.Store(__this->__type->T(0), __this->IsContinuous() ? (uPtr(__this->ContinuousConverter)->Out_ex(uCRef(__this->_vectorValue), &ret3), (void*)ret3) : (void*)uUnboxAny(__this->__type->T(0), __this->_objectValue)), void();
}

// public void set_Value(T value) :51
void Change__set_Value_fn(Change* __this, void* value)
{
    ::g::Uno::Float4 ret4;

    if (__this->IsContinuous())
        __this->_vectorValue = (uPtr(__this->ContinuousConverter)->In_ex(value, &ret4), ret4);
    else
        __this->_objectValue = uBoxPtr(__this->__type->T(0), value);
}

// public Change(Uno.UX.Property<T> target) [instance] :63
void Change::ctor_3(::g::Uno::UX::Property1* target)
{
    uType* __types[] = {
        __type->Precalced(1/*Fuse.Animations.Converter<T>*/),
    };
    ctor_2();

    if (target == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[3/*"target"*/]));

    Target(target);

    if (IsContinuous())
    {
        uObject* v;

        if (::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::Float_typeof()))
            v = ::g::Fuse::Animations::ConverterFloat::Singleton_;
        else if (::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::Float2_typeof()))
            v = ::g::Fuse::Animations::ConverterFloat2::Singleton_;
        else if (::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::Float3_typeof()))
            v = ::g::Fuse::Animations::ConverterFloat3::Singleton_;
        else if (::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::Float4_typeof()))
            v = ::g::Fuse::Animations::ConverterFloat4::Singleton_;
        else if (::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::Double_typeof()))
            v = ::g::Fuse::Animations::ConverterDouble::Singleton_;
        else if (::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::UX::Size_typeof()))
            v = ::g::Fuse::Animations::ConverterSize::Singleton_;
        else if (::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::UX::Size2_typeof()))
            v = ::g::Fuse::Animations::ConverterSize2::Singleton_;
        else
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[4/*"Unsupported...*/], __type->T(0))));

        ContinuousConverter = uCast< ::g::Fuse::Animations::Converter*>(v, __types[0]);
    }
    else
    {
        Mixer = ::g::Fuse::Animations::Mixer::DefaultDiscrete();
        MarkDiscrete();
    }
}

// private bool get_IsContinuous() [instance] :106
bool Change::IsContinuous()
{
    return (((((::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::Float_typeof()) || ::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::Float2_typeof())) || ::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::Float3_typeof())) || ::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::Float4_typeof())) || ::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::Double_typeof())) || ::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::UX::Size_typeof())) || ::g::Uno::Type::op_Equality(__type->T(0), ::g::Uno::UX::Size2_typeof());
}

// public generated Uno.UX.Property<T> get_Target() [instance] :40
::g::Uno::UX::Property1* Change::Target()
{
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :40
void Change::Target(::g::Uno::UX::Property1* value)
{
    _Target = value;
}

// public Change New(Uno.UX.Property<T> target) [static] :63
Change* Change::New2(uType* __type, ::g::Uno::UX::Property1* target)
{
    Change* obj2 = (Change*)uNew(__type);
    obj2->ctor_3(target);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Easing.uno
// ----------------------------------------------------------

// internal sealed class Easing.CircularInImpl :246
// {
static void Easing__CircularInImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__CircularInImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__CircularInImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.CircularInImpl", options);
    type->fp_build_ = Easing__CircularInImpl_build;
    type->fp_ctor_ = (void*)Easing__CircularInImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__CircularInImpl__Map_fn;
    return type;
}

// public generated CircularInImpl() :246
void Easing__CircularInImpl__ctor_1_fn(Easing__CircularInImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :248
void Easing__CircularInImpl__Map_fn(Easing__CircularInImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    return *__retval = 1.0 - ::g::Uno::Math::Sqrt(1.0 - (k_ * k_)), void();
}

// public generated CircularInImpl New() :246
void Easing__CircularInImpl__New1_fn(Easing__CircularInImpl** __retval)
{
    *__retval = Easing__CircularInImpl::New1();
}

// public generated CircularInImpl() [instance] :246
void Easing__CircularInImpl::ctor_1()
{
    ctor_();
}

// public generated CircularInImpl New() [static] :246
Easing__CircularInImpl* Easing__CircularInImpl::New1()
{
    Easing__CircularInImpl* obj1 = (Easing__CircularInImpl*)uNew(Easing__CircularInImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Easing.uno
// ----------------------------------------------------------

// internal sealed class Easing.CircularInOutImpl :263
// {
static void Easing__CircularInOutImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__CircularInOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__CircularInOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.CircularInOutImpl", options);
    type->fp_build_ = Easing__CircularInOutImpl_build;
    type->fp_ctor_ = (void*)Easing__CircularInOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__CircularInOutImpl__Map_fn;
    return type;
}

// public generated CircularInOutImpl() :263
void Easing__CircularInOutImpl__ctor_1_fn(Easing__CircularInOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :265
void Easing__CircularInOutImpl__Map_fn(Easing__CircularInOutImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    k_ = k_ * 2.0;

    if (k_ < 1.0)
        return *__retval = -0.5 * (::g::Uno::Math::Sqrt(1.0 - (k_ * k_)) - 1.0), void();

    k_ = k_ - 2.0;
    return *__retval = 0.5 * (::g::Uno::Math::Sqrt(1.0 - (k_ * k_)) + 1.0), void();
}

// public generated CircularInOutImpl New() :263
void Easing__CircularInOutImpl__New1_fn(Easing__CircularInOutImpl** __retval)
{
    *__retval = Easing__CircularInOutImpl::New1();
}

// public generated CircularInOutImpl() [instance] :263
void Easing__CircularInOutImpl::ctor_1()
{
    ctor_();
}

// public generated CircularInOutImpl New() [static] :263
Easing__CircularInOutImpl* Easing__CircularInOutImpl::New1()
{
    Easing__CircularInOutImpl* obj1 = (Easing__CircularInOutImpl*)uNew(Easing__CircularInOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Easing.uno
// ----------------------------------------------------------

// internal sealed class Easing.CircularOutImpl :254
// {
static void Easing__CircularOutImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__CircularOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__CircularOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.CircularOutImpl", options);
    type->fp_build_ = Easing__CircularOutImpl_build;
    type->fp_ctor_ = (void*)Easing__CircularOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__CircularOutImpl__Map_fn;
    return type;
}

// public generated CircularOutImpl() :254
void Easing__CircularOutImpl__ctor_1_fn(Easing__CircularOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :256
void Easing__CircularOutImpl__Map_fn(Easing__CircularOutImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    k_ = k_ - 1.0;
    return *__retval = ::g::Uno::Math::Sqrt(1.0 - (k_ * k_)), void();
}

// public generated CircularOutImpl New() :254
void Easing__CircularOutImpl__New1_fn(Easing__CircularOutImpl** __retval)
{
    *__retval = Easing__CircularOutImpl::New1();
}

// public generated CircularOutImpl() [instance] :254
void Easing__CircularOutImpl::ctor_1()
{
    ctor_();
}

// public generated CircularOutImpl New() [static] :254
Easing__CircularOutImpl* Easing__CircularOutImpl::New1()
{
    Easing__CircularOutImpl* obj1 = (Easing__CircularOutImpl*)uNew(Easing__CircularOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Change.uno
// --------------------------------------------------------------

// internal sealed class ContinuousTrackChangeState<T> :209
// {
static void ContinuousTrackChangeState_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Invalid Seek");
    ::STRINGS[6] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Change.uno");
    ::TYPES[11] = ::g::Fuse::Animations::IMixer_typeof();
    ::TYPES[12] = ::g::Fuse::Animations::IMixerHandle_typeof();
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof());
    type->SetPrecalc(
        ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(type->T(0), NULL),
        ::g::Fuse::Animations::IMixer_typeof()->MakeMethod(0/*Register<T>*/, type->T(0), NULL));
    type->SetFields(6,
        ::g::Fuse::Animations::Change_typeof()->MakeType(type->T(0), NULL), offsetof(ContinuousTrackChangeState, Animator1), 0,
        ::TYPES[12/*Fuse.Animations.IMixerHandle`1*/]->MakeType(type->T(0), NULL), offsetof(ContinuousTrackChangeState, mixHandle), 0);
}

::g::Fuse::Animations::TrackAnimatorState_type* ContinuousTrackChangeState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TrackAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::TrackAnimatorState_typeof();
    options.FieldCount = 8;
    options.GenericCount = 1;
    options.DependencyCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(ContinuousTrackChangeState);
    options.TypeSize = sizeof(::g::Fuse::Animations::TrackAnimatorState_type);
    type = (::g::Fuse::Animations::TrackAnimatorState_type*)uClassType::New("Fuse.Animations.ContinuousTrackChangeState`1", options);
    type->fp_build_ = ContinuousTrackChangeState_build;
    type->fp_Disable = (void(*)(::g::Fuse::Animations::AnimatorState*))ContinuousTrackChangeState__Disable_fn;
    type->fp_SeekValue = (void(*)(::g::Fuse::Animations::TrackAnimatorState*, ::g::Uno::Float4*, float*))ContinuousTrackChangeState__SeekValue_fn;
    return type;
}

// public ContinuousTrackChangeState(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) :214
void ContinuousTrackChangeState__ctor_2_fn(ContinuousTrackChangeState* __this, ::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(animator, p);
}

// public override sealed void Disable() :221
void ContinuousTrackChangeState__Disable_fn(ContinuousTrackChangeState* __this)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Fuse.Animations.IMixerHandle<T>*/),
    };

    if (__this->mixHandle == NULL)
        return;

    ::g::Fuse::Animations::IMixerHandle::Unregister(uInterface(uPtr(__this->mixHandle), __types[0]));
    __this->mixHandle = NULL;
}

// public ContinuousTrackChangeState New(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) :214
void ContinuousTrackChangeState__New1_fn(uType* __type, ::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p, ContinuousTrackChangeState** __retval)
{
    *__retval = ContinuousTrackChangeState::New1(__type, animator, p);
}

// protected override sealed void SeekValue(float4 value, float strength) :230
void ContinuousTrackChangeState__SeekValue_fn(ContinuousTrackChangeState* __this, ::g::Uno::Float4* value, float* strength)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Fuse.Animations.IMixerHandle<T>*/),
    };
    uT ret2(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    ::g::Uno::Float4 value_ = *value;
    float strength_ = *strength;

    if (__this->mixHandle == NULL)
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[5/*"Invalid Seek"*/], 0, ::STRINGS[6/*"/usr/local/...*/], 234);
        return;
    }

    ::g::Fuse::Animations::IMixerHandle::Set_ex(uInterface(uPtr(__this->mixHandle), __types[0]), (uPtr((::g::Fuse::Animations::Converter*)uPtr(__this->Animator1)->ContinuousConverter)->Out_ex(uCRef(value_), &ret2), ret2), uCRef(strength_));
}

// public ContinuousTrackChangeState(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) [instance] :214
void ContinuousTrackChangeState::ctor_2(::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    uType* __types[] = {
        __type->Precalced(1/*Fuse.Animations.IMixer.Register<T>*/),
    };
    ctor_1(animator, p, NULL);
    Animator1 = animator;
    mixHandle = ((uObject*)::g::Fuse::Animations::IMixer::Register(uInterface(uPtr(uPtr(Animator1)->Mixer), ::TYPES[11/*Fuse.Animations.IMixer*/]), __types[0], (::g::Uno::UX::Property1*)uPtr(Animator1)->Target(), uPtr(Animator1)->MixOp()));
}

// public ContinuousTrackChangeState New(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) [static] :214
ContinuousTrackChangeState* ContinuousTrackChangeState::New1(uType* __type, ::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    ContinuousTrackChangeState* obj1 = (ContinuousTrackChangeState*)uNew(__type);
    obj1->ctor_2(animator, p);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/TrackAnimator.uno
// ---------------------------------------------------------------------

// internal abstract interface ContinuousTrackProvider :16
// {
uInterfaceType* ContinuousTrackProvider_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.ContinuousTrackProvider", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Change.uno
// --------------------------------------------------------------

// internal abstract class Converter<T> :241
// {
static void Converter_build(uType* type)
{
}

Converter_type* Converter_typeof()
{
    static uSStrong<Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(Converter);
    options.TypeSize = sizeof(Converter_type);
    type = (Converter_type*)uClassType::New("Fuse.Animations.Converter`1", options);
    type->fp_build_ = Converter_build;
    return type;
}

// protected generated Converter() :241
void Converter__ctor__fn(Converter* __this)
{
    __this->ctor_();
}

// protected generated Converter() [instance] :241
void Converter::ctor_()
{
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Change.uno
// --------------------------------------------------------------

// internal sealed class ConverterDouble :290
// {
// static generated ConverterDouble() :290
static void ConverterDouble__cctor__fn(uType* __type)
{
    ConverterDouble::Singleton_ = ConverterDouble::New1();
}

static void ConverterDouble_build(uType* type)
{
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::Double_typeof(), NULL));
    type->SetFields(0,
        type, (uintptr_t)&ConverterDouble::Singleton_, uFieldFlagsStatic);
}

::g::Fuse::Animations::Converter_type* ConverterDouble_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Converter_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterDouble);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterDouble", options);
    type->fp_build_ = ConverterDouble_build;
    type->fp_ctor_ = (void*)ConverterDouble__New1_fn;
    type->fp_cctor_ = ConverterDouble__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterDouble__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterDouble__Out_fn;
    return type;
}

// public generated ConverterDouble() :290
void ConverterDouble__ctor_1_fn(ConverterDouble* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(double value) :294
void ConverterDouble__In_fn(ConverterDouble* __this, double* value, ::g::Uno::Float4* __retval)
{
    double value_ = *value;
    return *__retval = ::g::Uno::Float4__New2((float)value_, 0.0f, 0.0f, 0.0f), void();
}

// public generated ConverterDouble New() :290
void ConverterDouble__New1_fn(ConverterDouble** __retval)
{
    *__retval = ConverterDouble::New1();
}

// public override sealed double Out(float4 value) :293
void ConverterDouble__Out_fn(ConverterDouble* __this, ::g::Uno::Float4* value, double* __retval)
{
    ::g::Uno::Float4 value_ = *value;
    return *__retval = (double)value_.X, void();
}

uSStrong<ConverterDouble*> ConverterDouble::Singleton_;

// public generated ConverterDouble() [instance] :290
void ConverterDouble::ctor_1()
{
    ctor_();
}

// public generated ConverterDouble New() [static] :290
ConverterDouble* ConverterDouble::New1()
{
    ConverterDouble* obj1 = (ConverterDouble*)uNew(ConverterDouble_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Change.uno
// --------------------------------------------------------------

// internal sealed class ConverterFloat :247
// {
// static generated ConverterFloat() :247
static void ConverterFloat__cctor__fn(uType* __type)
{
    ConverterFloat::Singleton_ = ConverterFloat::New1();
}

static void ConverterFloat_build(uType* type)
{
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(0,
        type, (uintptr_t)&ConverterFloat::Singleton_, uFieldFlagsStatic);
}

::g::Fuse::Animations::Converter_type* ConverterFloat_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Converter_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterFloat);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterFloat", options);
    type->fp_build_ = ConverterFloat_build;
    type->fp_ctor_ = (void*)ConverterFloat__New1_fn;
    type->fp_cctor_ = ConverterFloat__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterFloat__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterFloat__Out_fn;
    return type;
}

// public generated ConverterFloat() :247
void ConverterFloat__ctor_1_fn(ConverterFloat* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(float value) :251
void ConverterFloat__In_fn(ConverterFloat* __this, float* value, ::g::Uno::Float4* __retval)
{
    float value_ = *value;
    return *__retval = ::g::Uno::Float4__New2(value_, 0.0f, 0.0f, 0.0f), void();
}

// public generated ConverterFloat New() :247
void ConverterFloat__New1_fn(ConverterFloat** __retval)
{
    *__retval = ConverterFloat::New1();
}

// public override sealed float Out(float4 value) :250
void ConverterFloat__Out_fn(ConverterFloat* __this, ::g::Uno::Float4* value, float* __retval)
{
    ::g::Uno::Float4 value_ = *value;
    return *__retval = value_.X, void();
}

uSStrong<ConverterFloat*> ConverterFloat::Singleton_;

// public generated ConverterFloat() [instance] :247
void ConverterFloat::ctor_1()
{
    ctor_();
}

// public generated ConverterFloat New() [static] :247
ConverterFloat* ConverterFloat::New1()
{
    ConverterFloat* obj1 = (ConverterFloat*)uNew(ConverterFloat_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Change.uno
// --------------------------------------------------------------

// internal sealed class ConverterFloat2 :269
// {
// static generated ConverterFloat2() :269
static void ConverterFloat2__cctor__fn(uType* __type)
{
    ConverterFloat2::Singleton_ = ConverterFloat2::New1();
}

static void ConverterFloat2_build(uType* type)
{
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL));
    type->SetFields(0,
        type, (uintptr_t)&ConverterFloat2::Singleton_, uFieldFlagsStatic);
}

::g::Fuse::Animations::Converter_type* ConverterFloat2_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Converter_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterFloat2);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterFloat2", options);
    type->fp_build_ = ConverterFloat2_build;
    type->fp_ctor_ = (void*)ConverterFloat2__New1_fn;
    type->fp_cctor_ = ConverterFloat2__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterFloat2__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterFloat2__Out_fn;
    return type;
}

// public generated ConverterFloat2() :269
void ConverterFloat2__ctor_1_fn(ConverterFloat2* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(float2 value) :273
void ConverterFloat2__In_fn(ConverterFloat2* __this, ::g::Uno::Float2* value, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float2 value_ = *value;
    return *__retval = ::g::Uno::Float4__New6(value_, 0.0f, 0.0f), void();
}

// public generated ConverterFloat2 New() :269
void ConverterFloat2__New1_fn(ConverterFloat2** __retval)
{
    *__retval = ConverterFloat2::New1();
}

// public override sealed float2 Out(float4 value) :272
void ConverterFloat2__Out_fn(ConverterFloat2* __this, ::g::Uno::Float4* value, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float4 value_ = *value;
    return *__retval = ::g::Uno::Float2__New2(value_.X, value_.Y), void();
}

uSStrong<ConverterFloat2*> ConverterFloat2::Singleton_;

// public generated ConverterFloat2() [instance] :269
void ConverterFloat2::ctor_1()
{
    ctor_();
}

// public generated ConverterFloat2 New() [static] :269
ConverterFloat2* ConverterFloat2::New1()
{
    ConverterFloat2* obj1 = (ConverterFloat2*)uNew(ConverterFloat2_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Change.uno
// --------------------------------------------------------------

// internal sealed class ConverterFloat3 :276
// {
// static generated ConverterFloat3() :276
static void ConverterFloat3__cctor__fn(uType* __type)
{
    ConverterFloat3::Singleton_ = ConverterFloat3::New1();
}

static void ConverterFloat3_build(uType* type)
{
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::Float3_typeof(), NULL));
    type->SetFields(0,
        type, (uintptr_t)&ConverterFloat3::Singleton_, uFieldFlagsStatic);
}

::g::Fuse::Animations::Converter_type* ConverterFloat3_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Converter_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterFloat3);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterFloat3", options);
    type->fp_build_ = ConverterFloat3_build;
    type->fp_ctor_ = (void*)ConverterFloat3__New1_fn;
    type->fp_cctor_ = ConverterFloat3__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterFloat3__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterFloat3__Out_fn;
    return type;
}

// public generated ConverterFloat3() :276
void ConverterFloat3__ctor_1_fn(ConverterFloat3* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(float3 value) :280
void ConverterFloat3__In_fn(ConverterFloat3* __this, ::g::Uno::Float3* value, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float3 value_ = *value;
    return *__retval = ::g::Uno::Float4__New8(value_, 0.0f), void();
}

// public generated ConverterFloat3 New() :276
void ConverterFloat3__New1_fn(ConverterFloat3** __retval)
{
    *__retval = ConverterFloat3::New1();
}

// public override sealed float3 Out(float4 value) :279
void ConverterFloat3__Out_fn(ConverterFloat3* __this, ::g::Uno::Float4* value, ::g::Uno::Float3* __retval)
{
    ::g::Uno::Float4 value_ = *value;
    return *__retval = ::g::Uno::Float3__New2(value_.X, value_.Y, value_.Z), void();
}

uSStrong<ConverterFloat3*> ConverterFloat3::Singleton_;

// public generated ConverterFloat3() [instance] :276
void ConverterFloat3::ctor_1()
{
    ctor_();
}

// public generated ConverterFloat3 New() [static] :276
ConverterFloat3* ConverterFloat3::New1()
{
    ConverterFloat3* obj1 = (ConverterFloat3*)uNew(ConverterFloat3_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Change.uno
// --------------------------------------------------------------

// internal sealed class ConverterFloat4 :283
// {
// static generated ConverterFloat4() :283
static void ConverterFloat4__cctor__fn(uType* __type)
{
    ConverterFloat4::Singleton_ = ConverterFloat4::New1();
}

static void ConverterFloat4_build(uType* type)
{
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(0,
        type, (uintptr_t)&ConverterFloat4::Singleton_, uFieldFlagsStatic);
}

::g::Fuse::Animations::Converter_type* ConverterFloat4_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Converter_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterFloat4);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterFloat4", options);
    type->fp_build_ = ConverterFloat4_build;
    type->fp_ctor_ = (void*)ConverterFloat4__New1_fn;
    type->fp_cctor_ = ConverterFloat4__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterFloat4__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterFloat4__Out_fn;
    return type;
}

// public generated ConverterFloat4() :283
void ConverterFloat4__ctor_1_fn(ConverterFloat4* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(float4 value) :287
void ConverterFloat4__In_fn(ConverterFloat4* __this, ::g::Uno::Float4* value, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float4 value_ = *value;
    return *__retval = value_, void();
}

// public generated ConverterFloat4 New() :283
void ConverterFloat4__New1_fn(ConverterFloat4** __retval)
{
    *__retval = ConverterFloat4::New1();
}

// public override sealed float4 Out(float4 value) :286
void ConverterFloat4__Out_fn(ConverterFloat4* __this, ::g::Uno::Float4* value, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float4 value_ = *value;
    return *__retval = value_, void();
}

uSStrong<ConverterFloat4*> ConverterFloat4::Singleton_;

// public generated ConverterFloat4() [instance] :283
void ConverterFloat4::ctor_1()
{
    ctor_();
}

// public generated ConverterFloat4 New() [static] :283
ConverterFloat4* ConverterFloat4::New1()
{
    ConverterFloat4* obj1 = (ConverterFloat4*)uNew(ConverterFloat4_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Change.uno
// --------------------------------------------------------------

// internal sealed class ConverterSize :254
// {
// static generated ConverterSize() :254
static void ConverterSize__cctor__fn(uType* __type)
{
    ConverterSize::Singleton_ = ConverterSize::New1();
}

static void ConverterSize_build(uType* type)
{
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL));
    type->SetFields(0,
        type, (uintptr_t)&ConverterSize::Singleton_, uFieldFlagsStatic);
}

::g::Fuse::Animations::Converter_type* ConverterSize_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Converter_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterSize);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterSize", options);
    type->fp_build_ = ConverterSize_build;
    type->fp_ctor_ = (void*)ConverterSize__New1_fn;
    type->fp_cctor_ = ConverterSize__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterSize__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterSize__Out_fn;
    return type;
}

// public generated ConverterSize() :254
void ConverterSize__ctor_1_fn(ConverterSize* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(Uno.UX.Size value) :258
void ConverterSize__In_fn(ConverterSize* __this, ::g::Uno::UX::Size* value, ::g::Uno::Float4* __retval)
{
    ::g::Uno::UX::Size value_ = *value;
    return *__retval = ::g::Uno::Float4__New2(value_.Value, 0.0f, 0.0f, 0.0f), void();
}

// public generated ConverterSize New() :254
void ConverterSize__New1_fn(ConverterSize** __retval)
{
    *__retval = ConverterSize::New1();
}

// public override sealed Uno.UX.Size Out(float4 value) :257
void ConverterSize__Out_fn(ConverterSize* __this, ::g::Uno::Float4* value, ::g::Uno::UX::Size* __retval)
{
    ::g::Uno::Float4 value_ = *value;
    return *__retval = ::g::Uno::UX::Size__op_Implicit(value_.X), void();
}

uSStrong<ConverterSize*> ConverterSize::Singleton_;

// public generated ConverterSize() [instance] :254
void ConverterSize::ctor_1()
{
    ctor_();
}

// public generated ConverterSize New() [static] :254
ConverterSize* ConverterSize::New1()
{
    ConverterSize* obj1 = (ConverterSize*)uNew(ConverterSize_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Change.uno
// --------------------------------------------------------------

// internal sealed class ConverterSize2 :261
// {
// static generated ConverterSize2() :261
static void ConverterSize2__cctor__fn(uType* __type)
{
    ConverterSize2::Singleton_ = ConverterSize2::New1();
}

static void ConverterSize2_build(uType* type)
{
    type->SetBase(::g::Fuse::Animations::Converter_typeof()->MakeType(::g::Uno::UX::Size2_typeof(), NULL));
    type->SetFields(0,
        type, (uintptr_t)&ConverterSize2::Singleton_, uFieldFlagsStatic);
}

::g::Fuse::Animations::Converter_type* ConverterSize2_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Converter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Converter_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ConverterSize2);
    options.TypeSize = sizeof(::g::Fuse::Animations::Converter_type);
    type = (::g::Fuse::Animations::Converter_type*)uClassType::New("Fuse.Animations.ConverterSize2", options);
    type->fp_build_ = ConverterSize2_build;
    type->fp_ctor_ = (void*)ConverterSize2__New1_fn;
    type->fp_cctor_ = ConverterSize2__cctor__fn;
    type->fp_In = (void(*)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*))ConverterSize2__In_fn;
    type->fp_Out = (void(*)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef))ConverterSize2__Out_fn;
    return type;
}

// public generated ConverterSize2() :261
void ConverterSize2__ctor_1_fn(ConverterSize2* __this)
{
    __this->ctor_1();
}

// public override sealed float4 In(Uno.UX.Size2 value) :265
void ConverterSize2__In_fn(ConverterSize2* __this, ::g::Uno::UX::Size2* value, ::g::Uno::Float4* __retval)
{
    ::g::Uno::UX::Size2 value_ = *value;
    return *__retval = ::g::Uno::Float4__New2(::g::Uno::UX::Size__op_Explicit1(value_.X), ::g::Uno::UX::Size__op_Explicit1(value_.Y), 0.0f, 0.0f), void();
}

// public generated ConverterSize2 New() :261
void ConverterSize2__New1_fn(ConverterSize2** __retval)
{
    *__retval = ConverterSize2::New1();
}

// public override sealed Uno.UX.Size2 Out(float4 value) :264
void ConverterSize2__Out_fn(ConverterSize2* __this, ::g::Uno::Float4* value, ::g::Uno::UX::Size2* __retval)
{
    ::g::Uno::Float4 value_ = *value;
    return *__retval = ::g::Uno::UX::Size2__op_Implicit1(::g::Uno::Float2__New2(value_.X, value_.Y)), void();
}

uSStrong<ConverterSize2*> ConverterSize2::Singleton_;

// public generated ConverterSize2() [instance] :261
void ConverterSize2::ctor_1()
{
    ctor_();
}

// public generated ConverterSize2 New() [static] :261
ConverterSize2* ConverterSize2::New1()
{
    ConverterSize2* obj1 = (ConverterSize2*)uNew(ConverterSize2_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Animator.uno
// ----------------------------------------------------------------

// internal sealed class CreateStateParams :101
// {
static void CreateStateParams_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Visual_typeof(), offsetof(CreateStateParams, Attached), 0,
        ::g::Uno::Double_typeof(), offsetof(CreateStateParams, TotalDuration), 0,
        ::g::Fuse::Animations::AnimationVariant_typeof(), offsetof(CreateStateParams, Variant), 0);
}

uType* CreateStateParams_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(CreateStateParams);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Animations.CreateStateParams", options);
    type->fp_build_ = CreateStateParams_build;
    type->fp_ctor_ = (void*)CreateStateParams__New1_fn;
    return type;
}

// public generated CreateStateParams() :101
void CreateStateParams__ctor__fn(CreateStateParams* __this)
{
    __this->ctor_();
}

// public generated CreateStateParams New() :101
void CreateStateParams__New1_fn(CreateStateParams** __retval)
{
    *__retval = CreateStateParams::New1();
}

// public generated CreateStateParams() [instance] :101
void CreateStateParams::ctor_()
{
}

// public generated CreateStateParams New() [static] :101
CreateStateParams* CreateStateParams::New1()
{
    CreateStateParams* obj1 = (CreateStateParams*)uNew(CreateStateParams_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Easing.uno
// ----------------------------------------------------------

// public sealed class CubicBezierEasing :449
// {
static void CubicBezierEasing_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(CubicBezierEasing, _C1X), 0,
        ::g::Uno::Double_typeof(), offsetof(CubicBezierEasing, _C1Y), 0,
        ::g::Uno::Double_typeof(), offsetof(CubicBezierEasing, _C2X), 0,
        ::g::Uno::Double_typeof(), offsetof(CubicBezierEasing, _C2Y), 0);
}

::g::Fuse::Animations::Easing_type* CubicBezierEasing_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(CubicBezierEasing);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.CubicBezierEasing", options);
    type->fp_build_ = CubicBezierEasing_build;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))CubicBezierEasing__Map_fn;
    return type;
}

// public generated double get_C1X() :456
void CubicBezierEasing__get_C1X_fn(CubicBezierEasing* __this, double* __retval)
{
    *__retval = __this->C1X();
}

// public generated void set_C1X(double value) :456
void CubicBezierEasing__set_C1X_fn(CubicBezierEasing* __this, double* value)
{
    __this->C1X(*value);
}

// public generated double get_C1Y() :457
void CubicBezierEasing__get_C1Y_fn(CubicBezierEasing* __this, double* __retval)
{
    *__retval = __this->C1Y();
}

// public generated void set_C1Y(double value) :457
void CubicBezierEasing__set_C1Y_fn(CubicBezierEasing* __this, double* value)
{
    __this->C1Y(*value);
}

// public generated double get_C2X() :458
void CubicBezierEasing__get_C2X_fn(CubicBezierEasing* __this, double* __retval)
{
    *__retval = __this->C2X();
}

// public generated void set_C2X(double value) :458
void CubicBezierEasing__set_C2X_fn(CubicBezierEasing* __this, double* value)
{
    __this->C2X(*value);
}

// public generated double get_C2Y() :459
void CubicBezierEasing__get_C2Y_fn(CubicBezierEasing* __this, double* __retval)
{
    *__retval = __this->C2Y();
}

// public generated void set_C2Y(double value) :459
void CubicBezierEasing__set_C2Y_fn(CubicBezierEasing* __this, double* value)
{
    __this->C2Y(*value);
}

// public override sealed double Map(double p) :467
void CubicBezierEasing__Map_fn(CubicBezierEasing* __this, double* p, double* __retval)
{
    double p_ = *p;
    double a = ((1.0 - (3.0 * __this->C2X())) + (3.0 * __this->C1X())) - 0.0;
    double b = (3.0 * __this->C2X()) - (6.0 * __this->C1X());
    double c = (3.0 * __this->C1X()) - 0.0;
    double d = 0.0;
    double e = ((1.0 - (3.0 * __this->C2Y())) + (3.0 * __this->C1Y())) - 0.0;
    double f = (3.0 * __this->C2Y()) - (6.0 * __this->C1Y());
    double g = (3.0 * __this->C1Y()) - 0.0;
    double h = 0.0;
    double t = p_;

    for (int i = 0; i < 5; i++)
    {
        double x = (((a * ((t * t) * t)) + (b * (t * t))) + (c * t)) + d;
        double q = ((((3.0 * a) * t) * t) + ((2.0 * b) * t)) + c;

        if (::g::Uno::Math::Abs(q) < 1e-06)
            break;

        double s = 1.0 / q;
        t = t - ((x - p_) * s);
        t = ::g::Uno::Math::Clamp(t, 0.0, 1.0);
    }

    return *__retval = (((e * ((t * t) * t)) + (f * (t * t))) + (g * t)) + h, void();
}

// public generated double get_C1X() [instance] :456
double CubicBezierEasing::C1X()
{
    return _C1X;
}

// public generated void set_C1X(double value) [instance] :456
void CubicBezierEasing::C1X(double value)
{
    _C1X = value;
}

// public generated double get_C1Y() [instance] :457
double CubicBezierEasing::C1Y()
{
    return _C1Y;
}

// public generated void set_C1Y(double value) [instance] :457
void CubicBezierEasing::C1Y(double value)
{
    _C1Y = value;
}

// public generated double get_C2X() [instance] :458
double CubicBezierEasing::C2X()
{
    return _C2X;
}

// public generated void set_C2X(double value) [instance] :458
void CubicBezierEasing::C2X(double value)
{
    _C2X = value;
}

// public generated double get_C2Y() [instance] :459
double CubicBezierEasing::C2Y()
{
    return _C2Y;
}

// public generated void set_C2Y(double value) [instance] :459
void CubicBezierEasing::C2Y(double value)
{
    _C2Y = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Easing.uno
// ----------------------------------------------------------

// internal sealed class Easing.CubicInImpl :99
// {
static void Easing__CubicInImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__CubicInImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__CubicInImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.CubicInImpl", options);
    type->fp_build_ = Easing__CubicInImpl_build;
    type->fp_ctor_ = (void*)Easing__CubicInImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__CubicInImpl__Map_fn;
    return type;
}

// public generated CubicInImpl() :99
void Easing__CubicInImpl__ctor_1_fn(Easing__CubicInImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :101
void Easing__CubicInImpl__Map_fn(Easing__CubicInImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    return *__retval = (k_ * k_) * k_, void();
}

// public generated CubicInImpl New() :99
void Easing__CubicInImpl__New1_fn(Easing__CubicInImpl** __retval)
{
    *__retval = Easing__CubicInImpl::New1();
}

// public generated CubicInImpl() [instance] :99
void Easing__CubicInImpl::ctor_1()
{
    ctor_();
}

// public generated CubicInImpl New() [static] :99
Easing__CubicInImpl* Easing__CubicInImpl::New1()
{
    Easing__CubicInImpl* obj1 = (Easing__CubicInImpl*)uNew(Easing__CubicInImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Easing.uno
// ----------------------------------------------------------

// internal sealed class Easing.CubicInOutImpl :116
// {
static void Easing__CubicInOutImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__CubicInOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__CubicInOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.CubicInOutImpl", options);
    type->fp_build_ = Easing__CubicInOutImpl_build;
    type->fp_ctor_ = (void*)Easing__CubicInOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__CubicInOutImpl__Map_fn;
    return type;
}

// public generated CubicInOutImpl() :116
void Easing__CubicInOutImpl__ctor_1_fn(Easing__CubicInOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :118
void Easing__CubicInOutImpl__Map_fn(Easing__CubicInOutImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    k_ = k_ * 2.0;

    if (k_ < 1.0)
        return *__retval = ((0.5 * k_) * k_) * k_, void();

    k_ = k_ - 2.0;
    return *__retval = 0.5 * (((k_ * k_) * k_) + 2.0), void();
}

// public generated CubicInOutImpl New() :116
void Easing__CubicInOutImpl__New1_fn(Easing__CubicInOutImpl** __retval)
{
    *__retval = Easing__CubicInOutImpl::New1();
}

// public generated CubicInOutImpl() [instance] :116
void Easing__CubicInOutImpl::ctor_1()
{
    ctor_();
}

// public generated CubicInOutImpl New() [static] :116
Easing__CubicInOutImpl* Easing__CubicInOutImpl::New1()
{
    Easing__CubicInOutImpl* obj1 = (Easing__CubicInOutImpl*)uNew(Easing__CubicInOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Easing.uno
// ----------------------------------------------------------

// internal sealed class Easing.CubicOutImpl :107
// {
static void Easing__CubicOutImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__CubicOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__CubicOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.CubicOutImpl", options);
    type->fp_build_ = Easing__CubicOutImpl_build;
    type->fp_ctor_ = (void*)Easing__CubicOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__CubicOutImpl__Map_fn;
    return type;
}

// public generated CubicOutImpl() :107
void Easing__CubicOutImpl__ctor_1_fn(Easing__CubicOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :109
void Easing__CubicOutImpl__Map_fn(Easing__CubicOutImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    k_ = k_ - 1.0;
    return *__retval = ((k_ * k_) * k_) + 1.0, void();
}

// public generated CubicOutImpl New() :107
void Easing__CubicOutImpl__New1_fn(Easing__CubicOutImpl** __retval)
{
    *__retval = Easing__CubicOutImpl::New1();
}

// public generated CubicOutImpl() [instance] :107
void Easing__CubicOutImpl::ctor_1()
{
    ctor_();
}

// public generated CubicOutImpl New() [static] :107
Easing__CubicOutImpl* Easing__CubicOutImpl::New1()
{
    Easing__CubicOutImpl* obj1 = (Easing__CubicOutImpl*)uNew(Easing__CubicOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Cycle.uno
// -------------------------------------------------------------

// public sealed class Cycle<T> :51
// {
static void Cycle_build(uType* type)
{
    ::TYPES[13] = ::g::Fuse::Animations::CycleState_typeof();
    type->SetPrecalc(
        ::g::Fuse::Animations::CycleState_typeof()->MakeType(type->T(0), NULL));
    type->SetFields(6,
        ::g::Uno::Double_typeof(), offsetof(Cycle, _backFrequency), 0,
        ::g::Fuse::Animations::Easing_typeof(), offsetof(Cycle, _easing), 0,
        ::g::Uno::Double_typeof(), offsetof(Cycle, _frequency), 0,
        ::g::Uno::Bool_typeof(), offsetof(Cycle, _hasBackFrequency), 0,
        ::g::Uno::Bool_typeof(), offsetof(Cycle, _hasProgressOffset), 0,
        ::g::Uno::Float_typeof(), offsetof(Cycle, _progressOffset), 0,
        ::g::Fuse::Animations::CycleWaveform_typeof(), offsetof(Cycle, _waveform), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Float_typeof(), offsetof(Cycle, _High), 0,
        ::g::Uno::Float_typeof(), offsetof(Cycle, _Low), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL), offsetof(Cycle, _Target), 0);
}

::g::Fuse::Animations::Animator_type* Cycle_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::OpenAnimator_typeof();
    options.FieldCount = 18;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(Cycle);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.Cycle`1", options);
    type->fp_build_ = Cycle_build;
    type->fp_CreateState = (void(*)(::g::Fuse::Animations::Animator*, ::g::Fuse::Animations::CreateStateParams*, ::g::Fuse::Animations::AnimatorState**))Cycle__CreateState_fn;
    return type;
}

// public generated T get_Base() :67
void Cycle__get_Base_fn(Cycle* __this, uTRef __retval)
{
    return __retval.Store(__this->_Base()), void();
}

// public generated void set_Base(T value) :67
void Cycle__set_Base_fn(Cycle* __this, void* value)
{
    __this->_Base() = value;
}

// internal override sealed Fuse.Animations.AnimatorState CreateState(Fuse.Animations.CreateStateParams p) :118
void Cycle__CreateState_fn(Cycle* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Fuse.Animations.CycleState<T>*/),
    };
    return *__retval = (::g::Fuse::Animations::CycleState*)::g::Fuse::Animations::CycleState::New1(__types[0], __this, p), void();
}

// public Fuse.Animations.Easing get_Easing() :186
void Cycle__get_Easing_fn(Cycle* __this, ::g::Fuse::Animations::Easing** __retval)
{
    *__retval = __this->Easing();
}

// public void set_Easing(Fuse.Animations.Easing value) :187
void Cycle__set_Easing_fn(Cycle* __this, ::g::Fuse::Animations::Easing* value)
{
    __this->Easing(value);
}

// public double get_Frequency() :93
void Cycle__get_Frequency_fn(Cycle* __this, double* __retval)
{
    *__retval = __this->Frequency();
}

// public void set_Frequency(double value) :94
void Cycle__set_Frequency_fn(Cycle* __this, double* value)
{
    __this->Frequency(*value);
}

// public double get_FrequencyBack() :102
void Cycle__get_FrequencyBack_fn(Cycle* __this, double* __retval)
{
    *__retval = __this->FrequencyBack();
}

// public void set_FrequencyBack(double value) :103
void Cycle__set_FrequencyBack_fn(Cycle* __this, double* value)
{
    __this->FrequencyBack(*value);
}

// public generated float get_High() :58
void Cycle__get_High_fn(Cycle* __this, float* __retval)
{
    *__retval = __this->High();
}

// public generated void set_High(float value) :58
void Cycle__set_High_fn(Cycle* __this, float* value)
{
    __this->High(*value);
}

// private bool get_IsOneCrossing() :130
void Cycle__get_IsOneCrossing_fn(Cycle* __this, bool* __retval)
{
    *__retval = __this->IsOneCrossing();
}

// private bool get_IsZeroCrossing() :125
void Cycle__get_IsZeroCrossing_fn(Cycle* __this, bool* __retval)
{
    *__retval = __this->IsZeroCrossing();
}

// public generated float get_Low() :56
void Cycle__get_Low_fn(Cycle* __this, float* __retval)
{
    *__retval = __this->Low();
}

// public generated void set_Low(float value) :56
void Cycle__set_Low_fn(Cycle* __this, float* value)
{
    __this->Low(*value);
}

// public generated T get_Offset() :76
void Cycle__get_Offset_fn(Cycle* __this, uTRef __retval)
{
    return __retval.Store(__this->_Offset()), void();
}

// public generated void set_Offset(T value) :76
void Cycle__set_Offset_fn(Cycle* __this, void* value)
{
    __this->_Offset() = value;
}

// public float get_ProgressOffset() :169
void Cycle__get_ProgressOffset_fn(Cycle* __this, float* __retval)
{
    *__retval = __this->ProgressOffset();
}

// public void set_ProgressOffset(float value) :170
void Cycle__set_ProgressOffset_fn(Cycle* __this, float* value)
{
    __this->ProgressOffset(*value);
}

// private double get_RestProgress() :138
void Cycle__get_RestProgress_fn(Cycle* __this, double* __retval)
{
    *__retval = __this->RestProgress();
}

// public generated Uno.UX.Property<T> get_Target() :54
void Cycle__get_Target_fn(Cycle* __this, ::g::Uno::UX::Property1** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property<T> value) :54
void Cycle__set_Target_fn(Cycle* __this, ::g::Uno::UX::Property1* value)
{
    __this->Target(value);
}

// public Fuse.Animations.CycleWaveform get_Waveform() :114
void Cycle__get_Waveform_fn(Cycle* __this, int* __retval)
{
    *__retval = __this->Waveform();
}

// public void set_Waveform(Fuse.Animations.CycleWaveform value) :115
void Cycle__set_Waveform_fn(Cycle* __this, int* value)
{
    __this->Waveform(*value);
}

// internal double WaveformFunc(double i, double offset) :193
void Cycle__WaveformFunc_fn(Cycle* __this, double* i, double* offset, double* __retval)
{
    *__retval = __this->WaveformFunc(*i, *offset);
}

// public Fuse.Animations.Easing get_Easing() [instance] :186
::g::Fuse::Animations::Easing* Cycle::Easing()
{
    return _easing;
}

// public void set_Easing(Fuse.Animations.Easing value) [instance] :187
void Cycle::Easing(::g::Fuse::Animations::Easing* value)
{
    _easing = value;
}

// public double get_Frequency() [instance] :93
double Cycle::Frequency()
{
    return _frequency;
}

// public void set_Frequency(double value) [instance] :94
void Cycle::Frequency(double value)
{
    _frequency = value;
}

// public double get_FrequencyBack() [instance] :102
double Cycle::FrequencyBack()
{
    return _hasBackFrequency ? _backFrequency : Frequency();
}

// public void set_FrequencyBack(double value) [instance] :103
void Cycle::FrequencyBack(double value)
{
    _backFrequency = value;
    _hasBackFrequency = true;
}

// public generated float get_High() [instance] :58
float Cycle::High()
{
    return _High;
}

// public generated void set_High(float value) [instance] :58
void Cycle::High(float value)
{
    _High = value;
}

// private bool get_IsOneCrossing() [instance] :130
bool Cycle::IsOneCrossing()
{
    return (Low() <= 1.0f) && (High() >= 1.0f);
}

// private bool get_IsZeroCrossing() [instance] :125
bool Cycle::IsZeroCrossing()
{
    return (Low() <= 0.0f) && (High() >= 0.0f);
}

// public generated float get_Low() [instance] :56
float Cycle::Low()
{
    return _Low;
}

// public generated void set_Low(float value) [instance] :56
void Cycle::Low(float value)
{
    _Low = value;
}

// public float get_ProgressOffset() [instance] :169
float Cycle::ProgressOffset()
{
    return (_hasProgressOffset || (_easing != NULL)) ? _progressOffset : (float)RestProgress();
}

// public void set_ProgressOffset(float value) [instance] :170
void Cycle::ProgressOffset(float value)
{
    _hasProgressOffset = true;
    _progressOffset = value;
}

// private double get_RestProgress() [instance] :138
double Cycle::RestProgress()
{
    double v = 0.0;

    if (IsZeroCrossing())
        v = (double)((0.0f - Low()) / (High() - Low()));
    else if (IsOneCrossing())
        v = (double)((1.0f - Low()) / (High() - Low()));

    switch (Waveform())
    {
        case 0:
            return ::g::Uno::Math::Asin(2.0 * (v - 0.5)) / 6.2831853071795862;
        case 1:
            return v * 0.5;
        case 2:
            return v;
        case 3:
            return v;
    }

    return v;
}

// public generated Uno.UX.Property<T> get_Target() [instance] :54
::g::Uno::UX::Property1* Cycle::Target()
{
    return _Target;
}

// private generated void set_Target(Uno.UX.Property<T> value) [instance] :54
void Cycle::Target(::g::Uno::UX::Property1* value)
{
    _Target = value;
}

// public Fuse.Animations.CycleWaveform get_Waveform() [instance] :114
int Cycle::Waveform()
{
    return _waveform;
}

// public void set_Waveform(Fuse.Animations.CycleWaveform value) [instance] :115
void Cycle::Waveform(int value)
{
    _waveform = value;
}

// internal double WaveformFunc(double i, double offset) [instance] :193
double Cycle::WaveformFunc(double i, double offset)
{
    switch (Waveform())
    {
        case 0:
            return (::g::Uno::Math::Sin(((i + offset) * 3.1415926535897931) * 2.0) / 2.0) + 0.5;
        case 1:
        {
            double a = ::g::Uno::Math::Mod(i + offset, 1.0);

            if (a < 0.5)
                return a * 2.0;

            return 1.0 + (2.0 * (0.5 - a));
        }
        case 2:
        {
            double a1 = ::g::Uno::Math::Mod(i + offset, 1.0);
            return a1;
        }
        case 3:
        {
            double a2 = ::g::Uno::Math::Mod(i + offset, 1.0);
            return (double)((a2 < 0.5) ? 0 : 1);
        }
    }

    return i;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Cycle.uno
// -------------------------------------------------------------

// internal sealed class CycleState<T> :222
// {
static void CycleState_build(uType* type)
{
    ::STRINGS[7] = uString::Const("Invalid seek");
    ::STRINGS[8] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Cycle.uno");
    ::TYPES[11] = ::g::Fuse::Animations::IMixer_typeof();
    ::TYPES[4] = ::g::Fuse::Internal::BlenderMap_typeof();
    ::TYPES[12] = ::g::Fuse::Animations::IMixerHandle_typeof();
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof(),
        ::g::Fuse::Internal::BlenderMap_typeof()->MakeMethod(0/*Get<T>*/, type->T(0), NULL));
    type->SetPrecalc(
        ::g::Fuse::Internal::BlenderMap_typeof()->MakeMethod(0/*Get<T>*/, type->T(0), NULL),
        ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(type->T(0), NULL),
        ::g::Fuse::Animations::IMixer_typeof()->MakeMethod(0/*Register<T>*/, type->T(0), NULL));
    type->SetFields(5,
        ::g::Fuse::Animations::Cycle_typeof()->MakeType(type->T(0), NULL), offsetof(CycleState, Animator1), 0,
        ::g::Fuse::Internal::Blender_typeof()->MakeType(type->T(0), NULL), offsetof(CycleState, blender), 0,
        ::TYPES[12/*Fuse.Animations.IMixerHandle`1*/]->MakeType(type->T(0), NULL), offsetof(CycleState, mixHandle), 0,
        ::g::Uno::Double_typeof(), offsetof(CycleState, progress), 0);
}

::g::Fuse::Animations::OpenAnimatorState_type* CycleState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::OpenAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::OpenAnimatorState_typeof();
    options.FieldCount = 9;
    options.GenericCount = 1;
    options.DependencyCount = 2;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(CycleState);
    options.TypeSize = sizeof(::g::Fuse::Animations::OpenAnimatorState_type);
    type = (::g::Fuse::Animations::OpenAnimatorState_type*)uClassType::New("Fuse.Animations.CycleState`1", options);
    type->fp_build_ = CycleState_build;
    type->fp_Disable = (void(*)(::g::Fuse::Animations::AnimatorState*))CycleState__Disable_fn;
    type->fp_Seek = (void(*)(::g::Fuse::Animations::OpenAnimatorState*, bool*, float*, float*, int*, bool*))CycleState__Seek_fn;
    return type;
}

// public CycleState(Fuse.Animations.Cycle<T> animator, Fuse.Animations.CreateStateParams p) :228
void CycleState__ctor_2_fn(CycleState* __this, ::g::Fuse::Animations::Cycle* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(animator, p);
}

// public override sealed void Disable() :236
void CycleState__Disable_fn(CycleState* __this)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Fuse.Animations.IMixerHandle<T>*/),
    };

    if (__this->mixHandle == NULL)
        return;

    ::g::Fuse::Animations::IMixerHandle::Unregister(uInterface(uPtr(__this->mixHandle), __types[0]));
    __this->mixHandle = NULL;
    __this->progress = 0.0;
}

// public CycleState New(Fuse.Animations.Cycle<T> animator, Fuse.Animations.CreateStateParams p) :228
void CycleState__New1_fn(uType* __type, ::g::Fuse::Animations::Cycle* animator, ::g::Fuse::Animations::CreateStateParams* p, CycleState** __retval)
{
    *__retval = CycleState::New1(__type, animator, p);
}

// protected override sealed bool Seek(bool on, float interval, float strength, Fuse.Animations.SeekDirection dir) :254
void CycleState__Seek_fn(CycleState* __this, bool* on, float* interval, float* strength, int* dir, bool* __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Fuse.Animations.IMixerHandle<T>*/),
    };
    uT ret2(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    uT ret3(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    uT ret4(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    uT ret5(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    uT value(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    float interval_ = *interval;
    bool on_ = *on;
    float strength_ = *strength;

    if (__this->mixHandle == NULL)
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[7/*"Invalid seek"*/], 0, ::STRINGS[8/*"/usr/local/...*/], 258);
        return *__retval = true, void();
    }

    bool done = false;
    double oldProgress = __this->progress;
    __this->progress = (__this->progress + ((double)interval_ * ((interval_ < 0.0f) ? uPtr(__this->Animator1)->FrequencyBack() : uPtr(__this->Animator1)->Frequency())));

    if (on_)
        __this->progress = ::g::Uno::Math::Mod(__this->progress, 1.0);
    else if ((((oldProgress <= 0.0) || (__this->progress <= 0.0)) || (__this->progress >= 1.0)) || (oldProgress >= 1.0))
    {
        __this->progress = 0.0;
        done = true;
    }

    double s = uPtr(__this->Animator1)->WaveformFunc(__this->progress, (double)uPtr(__this->Animator1)->ProgressOffset());

    if (uPtr(__this->Animator1)->Easing() != NULL)
        s = uPtr(uPtr(__this->Animator1)->Easing())->Map((double)(float)s);

    value = (uPtr(__this->blender)->Add_ex((::g::Fuse::Animations::Cycle__get_Offset_fn(uPtr(__this->Animator1), &ret3), ret3), (uPtr(__this->blender)->Weight_ex((::g::Fuse::Animations::Cycle__get_Base_fn(uPtr(__this->Animator1), &ret5), ret5), uCRef((double)::g::Uno::Math::Lerp1(uPtr(__this->Animator1)->Low(), uPtr(__this->Animator1)->High(), (float)s)), &ret4), ret4), &ret2), ret2);
    ::g::Fuse::Animations::IMixerHandle::Set_ex(uInterface(uPtr(__this->mixHandle), __types[0]), value, uCRef(strength_));
    return *__retval = done, void();
}

// public CycleState(Fuse.Animations.Cycle<T> animator, Fuse.Animations.CreateStateParams p) [instance] :228
void CycleState::ctor_2(::g::Fuse::Animations::Cycle* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    uType* __types[] = {
        __type->Precalced(2/*Fuse.Animations.IMixer.Register<T>*/),
        __type->Precalced(0/*Fuse.Internal.BlenderMap.Get<T>*/),
    };
    ctor_1(animator, p, NULL);
    Animator1 = animator;
    mixHandle = ((uObject*)::g::Fuse::Animations::IMixer::Register(uInterface(uPtr(uPtr(Animator1)->Mixer), ::TYPES[11/*Fuse.Animations.IMixer*/]), __types[0], (::g::Uno::UX::Property1*)uPtr(Animator1)->Target(), uPtr(Animator1)->MixOp()));
    blender = ((::g::Fuse::Internal::Blender*)::g::Fuse::Internal::BlenderMap::Get(__types[1]));
}

// public CycleState New(Fuse.Animations.Cycle<T> animator, Fuse.Animations.CreateStateParams p) [static] :228
CycleState* CycleState::New1(uType* __type, ::g::Fuse::Animations::Cycle* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    CycleState* obj1 = (CycleState*)uNew(__type);
    obj1->ctor_2(animator, p);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Cycle.uno
// -------------------------------------------------------------

// public enum CycleWaveform :7
uEnumType* CycleWaveform_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.CycleWaveform", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Sine", 0LL,
        "Triangle", 1LL,
        "Sawtooth", 2LL,
        "Square", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Motion/1.3.1/DestinationBehavior.uno
// -----------------------------------------------------------------------

// internal sealed class DestinationBehavior<T> :13
// {
static void DestinationBehavior_build(uType* type)
{
    type->SetPrecalc(
        ::g::Fuse::Motion::DestinationMotionConfig_typeof()->MakeMethod(0/*Create<T>*/, type->T(0), NULL),
        ::g::Fuse::Motion::Simulation::DestinationSimulation_typeof()->MakeType(type->T(0), NULL),
        ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(type->T(0), NULL));
    type->SetFields(0,
        DestinationBehavior__ValueHandler_typeof()->MakeType(type->T(0), NULL), offsetof(DestinationBehavior, _handler), 0,
        ::g::Uno::Bool_typeof(), offsetof(DestinationBehavior, _listenUpdate), 0,
        ::g::Fuse::Motion::Simulation::DestinationSimulation_typeof()->MakeType(type->T(0), NULL), offsetof(DestinationBehavior, _simulation), 0,
        ::g::Fuse::Motion::DestinationMotionConfig_typeof(), offsetof(DestinationBehavior, Motion), 0);
}

uType* DestinationBehavior_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(DestinationBehavior);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Animations.DestinationBehavior`1", options);
    type->fp_build_ = DestinationBehavior_build;
    type->fp_ctor_ = (void*)DestinationBehavior__New1_fn;
    return type;
}

// public generated DestinationBehavior() :13
void DestinationBehavior__ctor__fn(DestinationBehavior* __this)
{
    __this->ctor_();
}

// public generated DestinationBehavior New() :13
void DestinationBehavior__New1_fn(uType* __type, DestinationBehavior** __retval)
{
    *__retval = DestinationBehavior::New1(__type);
}

// private void OnUpdate() :22
void DestinationBehavior__OnUpdate_fn(DestinationBehavior* __this)
{
    __this->OnUpdate();
}

// public void SetValue(T value, Fuse.Animations.DestinationBehavior<T>.ValueHandler handler) :55
void DestinationBehavior__SetValue_fn(DestinationBehavior* __this, void* value, uDelegate* handler)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Fuse.Motion.DestinationMotionConfig.Create<T>*/),
        __this->__type->Precalced(1/*Fuse.Motion.Simulation.DestinationSimulation<T>*/),
        __this->__type->Precalced(2/*Fuse.Motion.Simulation.MotionSimulation<T>*/),
    };
    uT ret3(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));

    if (__this->Motion == NULL)
    {
        uPtr(handler)->InvokeVoid(value);
        return;
    }

    __this->_handler = handler;

    if (__this->_simulation == NULL)
    {
        __this->_simulation = ((uObject*)uPtr(__this->Motion)->Create(__types[0]));
        ::g::Fuse::Motion::Simulation::DestinationSimulation::Reset_ex(uInterface(uPtr(__this->_simulation), __types[1]), value);

        if (::g::Uno::Delegate::op_Inequality(__this->_handler, NULL))
            uPtr(__this->_handler)->InvokeVoid((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(__this->_simulation), __types[2]), &ret3), ret3));
    }
    else
    {
        ::g::Fuse::Motion::Simulation::DestinationSimulation::set_Destination_ex(uInterface(uPtr(__this->_simulation), __types[1]), value);
        ::g::Fuse::Motion::Simulation::DestinationSimulation::Start(uInterface(uPtr(__this->_simulation), __types[1]));
    }

    if (!__this->_listenUpdate)
    {
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)DestinationBehavior__OnUpdate_fn, __this), 0);
        __this->_listenUpdate = true;
    }
}

// private void StopListenUpdate() :39
void DestinationBehavior__StopListenUpdate_fn(DestinationBehavior* __this)
{
    __this->StopListenUpdate();
}

// public void Unroot() :48
void DestinationBehavior__Unroot_fn(DestinationBehavior* __this)
{
    __this->Unroot();
}

// public generated DestinationBehavior() [instance] :13
void DestinationBehavior::ctor_()
{
}

// private void OnUpdate() [instance] :22
void DestinationBehavior::OnUpdate()
{
    uType* __types[] = {
        __type->Precalced(2/*Fuse.Motion.Simulation.MotionSimulation<T>*/),
    };
    uT ret2(__type->T(0), U_ALLOCA(__type->T(0)->ValueSize));

    if (_simulation == NULL)
    {
        StopListenUpdate();
        return;
    }

    ::g::Fuse::Motion::Simulation::Simulation::Update(uInterface(uPtr(_simulation), ::TYPES[0/*Fuse.Motion.Simulation.Simulation*/]), ::g::Fuse::Time::FrameInterval());

    if (::g::Uno::Delegate::op_Inequality(_handler, NULL))
        uPtr(_handler)->InvokeVoid((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_simulation), __types[0]), &ret2), ret2));

    if (::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_simulation), ::TYPES[0/*Fuse.Motion.Simulation.Simulation*/])))
        StopListenUpdate();
}

// private void StopListenUpdate() [instance] :39
void DestinationBehavior::StopListenUpdate()
{
    if (_listenUpdate)
    {
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)DestinationBehavior__OnUpdate_fn, this), 0);
        _listenUpdate = false;
    }
}

// public void Unroot() [instance] :48
void DestinationBehavior::Unroot()
{
    StopListenUpdate();
    _simulation = NULL;
    _handler = NULL;
}

// public generated DestinationBehavior New() [static] :13
DestinationBehavior* DestinationBehavior::New1(uType* __type)
{
    DestinationBehavior* obj1 = (DestinationBehavior*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/DiscreteMixer.uno
// ---------------------------------------------------------------------

// internal sealed class DiscreteMasterProperty<T> :18
// {
static void DiscreteMasterProperty_build(uType* type)
{
    type->SetBase(::g::Fuse::Animations::MasterProperty_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(::g::Fuse::Animations::MasterProperty_type, interface0),
        ::g::Fuse::Animations::MasterPropertyGet_typeof(), offsetof(::g::Fuse::Animations::MasterProperty_type, interface1),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Animations::MasterProperty_type, interface2));
    type->SetFields(10);
}

::g::Fuse::Animations::MasterProperty_type* DiscreteMasterProperty_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MasterProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::MasterProperty_typeof();
    options.FieldCount = 10;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(DiscreteMasterProperty);
    options.TypeSize = sizeof(::g::Fuse::Animations::MasterProperty_type);
    type = (::g::Fuse::Animations::MasterProperty_type*)uClassType::New("Fuse.Animations.DiscreteMasterProperty`1", options);
    type->fp_build_ = DiscreteMasterProperty_build;
    type->fp_OnComplete = (void(*)(::g::Fuse::Animations::MasterBase*))DiscreteMasterProperty__OnComplete_fn;
    type->interface2.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Animations::MasterProperty__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface1.fp_GetPropertyObject = (void(*)(uObject*, uObject**))::g::Fuse::Animations::MasterProperty__GetPropertyObject_fn;
    return type;
}

// public DiscreteMasterProperty(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :20
void DiscreteMasterProperty__ctor_2_fn(DiscreteMasterProperty* __this, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_2(property, mixerBase);
}

// public DiscreteMasterProperty New(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :20
void DiscreteMasterProperty__New1_fn(uType* __type, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase, DiscreteMasterProperty** __retval)
{
    *__retval = DiscreteMasterProperty::New1(__type, property, mixerBase);
}

// public override sealed void OnComplete() :23
void DiscreteMasterProperty__OnComplete_fn(DiscreteMasterProperty* __this)
{
    uT ret2(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    uT nv(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    ::g::Fuse::Animations::MixerHandle* ret3;
    nv = (::g::Fuse::Animations::MasterProperty__get_RestValue_fn(__this, &ret2), ret2);
    float str = 0.5f;

    for (int i = 0; i < uPtr((::g::Uno::Collections::List*)__this->Handles)->Count(); ++i)
    {
        ::g::Fuse::Animations::MixerHandle* v = (::g::Uno::Collections::List__get_Item_fn(uPtr((::g::Uno::Collections::List*)__this->Handles), uCRef<int>(i), &ret3), ret3);

        if (uPtr(v)->HasValue() && (uPtr(v)->Strength > str))
        {
            nv = uPtr(v)->Value();
            str = v->Strength;
        }
    }

    ::g::Fuse::Animations::MasterProperty__Set_fn(__this, nv);
}

// public DiscreteMasterProperty(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) [instance] :20
void DiscreteMasterProperty::ctor_2(::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    ctor_1(property, mixerBase);
}

// public DiscreteMasterProperty New(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) [static] :20
DiscreteMasterProperty* DiscreteMasterProperty::New1(uType* __type, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    DiscreteMasterProperty* obj1 = (DiscreteMasterProperty*)uNew(__type);
    obj1->ctor_2(property, mixerBase);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/DiscreteMixer.uno
// ---------------------------------------------------------------------

// internal sealed class DiscreteMasterTransform :41
// {
static void DiscreteMasterTransform_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(::g::Fuse::Animations::MasterBase_type, interface0));
    type->SetFields(6);
}

::g::Fuse::Animations::MasterBase_type* DiscreteMasterTransform_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MasterBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::MasterTransform_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DiscreteMasterTransform);
    options.TypeSize = sizeof(::g::Fuse::Animations::MasterBase_type);
    type = (::g::Fuse::Animations::MasterBase_type*)uClassType::New("Fuse.Animations.DiscreteMasterTransform", options);
    type->fp_build_ = DiscreteMasterTransform_build;
    type->fp_OnComplete = (void(*)(::g::Fuse::Animations::MasterBase*))DiscreteMasterTransform__OnComplete_fn;
    return type;
}

// public DiscreteMasterTransform(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) :43
void DiscreteMasterTransform__ctor_2_fn(DiscreteMasterTransform* __this, ::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_2(node, mixerBase);
}

// public DiscreteMasterTransform New(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) :43
void DiscreteMasterTransform__New1_fn(::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase, DiscreteMasterTransform** __retval)
{
    *__retval = DiscreteMasterTransform::New1(node, mixerBase);
}

// public override sealed void OnComplete() :46
void DiscreteMasterTransform__OnComplete_fn(DiscreteMasterTransform* __this)
{
    ::g::Fuse::Animations::MixerHandle* ret2;
    uPtr(uPtr(__this->FMT)->Matrix)->ResetIdentity();
    float str = 0.5f;
    ::g::Fuse::Transform* value = NULL;

    for (int i = 0; i < uPtr((::g::Uno::Collections::List*)__this->Handles)->Count(); ++i)
    {
        ::g::Fuse::Animations::MixerHandle* v = (::g::Uno::Collections::List__get_Item_fn(uPtr((::g::Uno::Collections::List*)__this->Handles), uCRef<int>(i), &ret2), ret2);

        if (uPtr(v)->HasValue() && (uPtr(v)->Strength > str))
        {
            value = uPtr(v)->Value().Strong< ::g::Fuse::Transform*>();
            str = v->Strength;
        }
    }

    if (value != NULL)
        uPtr(value)->AppendTo(uPtr(__this->FMT)->Matrix, 1.0f);

    uPtr(__this->FMT)->Changed();
}

// public DiscreteMasterTransform(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) [instance] :43
void DiscreteMasterTransform::ctor_2(::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    ctor_1(node, mixerBase);
}

// public DiscreteMasterTransform New(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) [static] :43
DiscreteMasterTransform* DiscreteMasterTransform::New1(::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    DiscreteMasterTransform* obj1 = (DiscreteMasterTransform*)uNew(DiscreteMasterTransform_typeof());
    obj1->ctor_2(node, mixerBase);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/DiscreteMixer.uno
// ---------------------------------------------------------------------

// internal sealed class DiscreteMixer :8
// {
static void DiscreteMixer_build(uType* type)
{
    ::TYPES[14] = ::g::Fuse::Animations::DiscreteMasterProperty_typeof();
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[14/*Fuse.Animations.DiscreteMasterProperty`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixer_typeof(), offsetof(::g::Fuse::Animations::MixerBase_type, interface0));
    type->SetFields(2);
}

::g::Fuse::Animations::MixerBase_type* DiscreteMixer_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MixerBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::MixerBase_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.MethodTypeCount = 1;
    options.ObjectSize = sizeof(DiscreteMixer);
    options.TypeSize = sizeof(::g::Fuse::Animations::MixerBase_type);
    type = (::g::Fuse::Animations::MixerBase_type*)uClassType::New("Fuse.Animations.DiscreteMixer", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1,0);
    type->fp_build_ = DiscreteMixer_build;
    type->fp_ctor_ = (void*)DiscreteMixer__New1_fn;
    type->fp_CreateMaster = (void(*)(::g::Fuse::Animations::MixerBase*, uType*, ::g::Uno::UX::Property1*, ::g::Fuse::Animations::MixerBase*, ::g::Fuse::Animations::MasterProperty**))DiscreteMixer__CreateMaster_fn;
    type->fp_CreateMasterTransform = (void(*)(::g::Fuse::Animations::MixerBase*, ::g::Fuse::Visual*, ::g::Fuse::Animations::MixerBase*, ::g::Fuse::Animations::MasterBase**))DiscreteMixer__CreateMasterTransform_fn;
    type->interface0.fp_Register = (void(*)(uObject*, uType*, ::g::Uno::UX::Property1*, int*, uObject**))::g::Fuse::Animations::MixerBase__Register_fn;
    type->interface0.fp_RegisterTransform = (void(*)(uObject*, ::g::Fuse::Visual*, int*, int*, uObject**))::g::Fuse::Animations::MixerBase__RegisterTransform_fn;
    return type;
}

// public generated DiscreteMixer() :8
void DiscreteMixer__ctor_1_fn(DiscreteMixer* __this)
{
    __this->ctor_1();
}

// protected override sealed Fuse.Animations.MasterProperty<T> CreateMaster<T>(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :10
void DiscreteMixer__CreateMaster_fn(DiscreteMixer* __this, uType* __type, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase, ::g::Fuse::Animations::MasterProperty** __retval)
{
    __type = DiscreteMixer_typeof()->GetVirtual(0, __type);
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Animations.DiscreteMasterProperty<T>*/),
    };
    return *__retval = (::g::Fuse::Animations::DiscreteMasterProperty*)::g::Fuse::Animations::DiscreteMasterProperty::New1(__types[0], property, mixerBase), void();
}

// protected override sealed Fuse.Animations.MasterBase<Fuse.Transform> CreateMasterTransform(Fuse.Visual element, Fuse.Animations.MixerBase mixerBase) :13
void DiscreteMixer__CreateMasterTransform_fn(DiscreteMixer* __this, ::g::Fuse::Visual* element, ::g::Fuse::Animations::MixerBase* mixerBase, ::g::Fuse::Animations::MasterBase** __retval)
{
    return *__retval = ::g::Fuse::Animations::DiscreteMasterTransform::New1(element, mixerBase), void();
}

// public generated DiscreteMixer New() :8
void DiscreteMixer__New1_fn(DiscreteMixer** __retval)
{
    *__retval = DiscreteMixer::New1();
}

// public generated DiscreteMixer() [instance] :8
void DiscreteMixer::ctor_1()
{
    ctor_();
}

// public generated DiscreteMixer New() [static] :8
DiscreteMixer* DiscreteMixer::New1()
{
    DiscreteMixer* obj1 = (DiscreteMixer*)uNew(DiscreteMixer_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/DiscreteSingleTrack.uno
// ---------------------------------------------------------------------------

// internal sealed class DiscreteSingleTrack :5
// {
// static generated DiscreteSingleTrack() :5
static void DiscreteSingleTrack__cctor__fn(uType* __type)
{
    DiscreteSingleTrack::Singleton_ = DiscreteSingleTrack::New1();
}

static void DiscreteSingleTrack_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Animations::DiscreteTrackProvider_typeof(), offsetof(DiscreteSingleTrack_type, interface0),
        ::g::Fuse::Animations::TrackProvider_typeof(), offsetof(DiscreteSingleTrack_type, interface1));
    type->SetFields(0,
        type, (uintptr_t)&DiscreteSingleTrack::Singleton_, uFieldFlagsStatic);
}

DiscreteSingleTrack_type* DiscreteSingleTrack_typeof()
{
    static uSStrong<DiscreteSingleTrack_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(DiscreteSingleTrack);
    options.TypeSize = sizeof(DiscreteSingleTrack_type);
    type = (DiscreteSingleTrack_type*)uClassType::New("Fuse.Animations.DiscreteSingleTrack", options);
    type->fp_build_ = DiscreteSingleTrack_build;
    type->fp_ctor_ = (void*)DiscreteSingleTrack__New1_fn;
    type->fp_cctor_ = DiscreteSingleTrack__cctor__fn;
    type->interface1.fp_GetDuration = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimator*, int*, double*))DiscreteSingleTrack__FuseAnimationsTrackProviderGetDuration_fn;
    type->interface1.fp_GetAnimatorVariant = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimator*, int*))DiscreteSingleTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn;
    type->interface0.fp_GetSeekProgress = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, uObject**, double*, int*))DiscreteSingleTrack__FuseAnimationsDiscreteTrackProviderGetSeekProgress_fn;
    type->interface0.fp_GetSeekTime = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, uObject**, double*, int*))DiscreteSingleTrack__FuseAnimationsDiscreteTrackProviderGetSeekTime_fn;
    return type;
}

// public generated DiscreteSingleTrack() :5
void DiscreteSingleTrack__ctor__fn(DiscreteSingleTrack* __this)
{
    __this->ctor_();
}

// private Fuse.Animations.SeekResult Fuse.Animations.DiscreteTrackProvider.GetSeekProgress(Fuse.Animations.TrackAnimatorState tas, double progress, double interval, Fuse.Animations.SeekDirection dir, object& value, double& strength) :20
void DiscreteSingleTrack__FuseAnimationsDiscreteTrackProviderGetSeekProgress_fn(DiscreteSingleTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* progress, double* interval, int* dir, uObject** value, double* strength, int* __retval)
{
    double progress_ = *progress;
    int dir_ = *dir;
    *strength = progress_;
    *value = uPtr(uPtr(tas)->Animator)->_objectValue;
    return *__retval = (((dir_ == 0) ? progress_ >= 1.0 : progress_ <= 0.0) ? 1 : 0) | 2, void();
}

// private Fuse.Animations.SeekResult Fuse.Animations.DiscreteTrackProvider.GetSeekTime(Fuse.Animations.TrackAnimatorState tas, double elapsed, double interval, Fuse.Animations.SeekDirection dir, object& value, double& strength) :31
void DiscreteSingleTrack__FuseAnimationsDiscreteTrackProviderGetSeekTime_fn(DiscreteSingleTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* elapsed, double* interval, int* dir, uObject** value, double* strength, int* __retval)
{
    int dir_ = *dir;
    double elapsed_ = *elapsed;
    double duration = uPtr(tas)->Duration();
    float progress;
    float zeroTolerance = 1e-05f;

    if (duration < 9.9999997473787516e-06)
        progress = (float)(((dir_ == 0) ? elapsed_ >= -9.9999997473787516e-06 : elapsed_ > 9.9999997473787516e-06) ? 1 : 0);
    else
        progress = (float)(elapsed_ / duration);

    *strength = (double)::g::Uno::Math::Clamp1(progress, 0.0f, 1.0f);
    *value = uPtr(tas->Animator)->_objectValue;
    return *__retval = (((dir_ == 0) ? elapsed_ >= 0.0 : elapsed_ <= 0.0) ? 1 : 0) | 2, void();
}

// private Fuse.Animations.AnimatorVariant Fuse.Animations.TrackProvider.GetAnimatorVariant(Fuse.Animations.TrackAnimator ta) :15
void DiscreteSingleTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn(DiscreteSingleTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* __retval)
{
    return *__retval = uPtr(ta)->HasBack() ? 2 : 0, void();
}

// private double Fuse.Animations.TrackProvider.GetDuration(Fuse.Animations.TrackAnimator ta, Fuse.Animations.AnimationVariant variant) :10
void DiscreteSingleTrack__FuseAnimationsTrackProviderGetDuration_fn(DiscreteSingleTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* variant, double* __retval)
{
    int variant_ = *variant;
    return *__retval = (variant_ == 1) ? uPtr(ta)->DurationBack() : uPtr(ta)->Duration(), void();
}

// public generated DiscreteSingleTrack New() :5
void DiscreteSingleTrack__New1_fn(DiscreteSingleTrack** __retval)
{
    *__retval = DiscreteSingleTrack::New1();
}

uSStrong<DiscreteSingleTrack*> DiscreteSingleTrack::Singleton_;

// public generated DiscreteSingleTrack() [instance] :5
void DiscreteSingleTrack::ctor_()
{
}

// public generated DiscreteSingleTrack New() [static] :5
DiscreteSingleTrack* DiscreteSingleTrack::New1()
{
    DiscreteSingleTrack* obj1 = (DiscreteSingleTrack*)uNew(DiscreteSingleTrack_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Change.uno
// --------------------------------------------------------------

// internal sealed class DiscreteTrackChangeState<T> :176
// {
static void DiscreteTrackChangeState_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Invalid Seek");
    ::STRINGS[6] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Change.uno");
    ::TYPES[11] = ::g::Fuse::Animations::IMixer_typeof();
    ::TYPES[12] = ::g::Fuse::Animations::IMixerHandle_typeof();
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof());
    type->SetPrecalc(
        ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(type->T(0), NULL),
        ::g::Fuse::Animations::IMixer_typeof()->MakeMethod(0/*Register<T>*/, type->T(0), NULL));
    type->SetFields(6,
        ::g::Fuse::Animations::Change_typeof()->MakeType(type->T(0), NULL), offsetof(DiscreteTrackChangeState, Animator1), 0,
        ::TYPES[12/*Fuse.Animations.IMixerHandle`1*/]->MakeType(type->T(0), NULL), offsetof(DiscreteTrackChangeState, mixHandle), 0);
}

::g::Fuse::Animations::TrackAnimatorState_type* DiscreteTrackChangeState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TrackAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::TrackAnimatorState_typeof();
    options.FieldCount = 8;
    options.GenericCount = 1;
    options.DependencyCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(DiscreteTrackChangeState);
    options.TypeSize = sizeof(::g::Fuse::Animations::TrackAnimatorState_type);
    type = (::g::Fuse::Animations::TrackAnimatorState_type*)uClassType::New("Fuse.Animations.DiscreteTrackChangeState`1", options);
    type->fp_build_ = DiscreteTrackChangeState_build;
    type->fp_Disable = (void(*)(::g::Fuse::Animations::AnimatorState*))DiscreteTrackChangeState__Disable_fn;
    type->fp_SeekObjectValue = (void(*)(::g::Fuse::Animations::TrackAnimatorState*, uObject*, float*))DiscreteTrackChangeState__SeekObjectValue_fn;
    return type;
}

// public DiscreteTrackChangeState(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) :181
void DiscreteTrackChangeState__ctor_2_fn(DiscreteTrackChangeState* __this, ::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(animator, p);
}

// public override sealed void Disable() :188
void DiscreteTrackChangeState__Disable_fn(DiscreteTrackChangeState* __this)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Fuse.Animations.IMixerHandle<T>*/),
    };

    if (__this->mixHandle == NULL)
        return;

    ::g::Fuse::Animations::IMixerHandle::Unregister(uInterface(uPtr(__this->mixHandle), __types[0]));
    __this->mixHandle = NULL;
}

// public DiscreteTrackChangeState New(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) :181
void DiscreteTrackChangeState__New1_fn(uType* __type, ::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p, DiscreteTrackChangeState** __retval)
{
    *__retval = DiscreteTrackChangeState::New1(__type, animator, p);
}

// protected override sealed void SeekObjectValue(object value, float strength) :197
void DiscreteTrackChangeState__SeekObjectValue_fn(DiscreteTrackChangeState* __this, uObject* value, float* strength)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Fuse.Animations.IMixerHandle<T>*/),
    };
    float strength_ = *strength;

    if (__this->mixHandle == NULL)
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[5/*"Invalid Seek"*/], 0, ::STRINGS[6/*"/usr/local/...*/], 201);
        return;
    }

    if ((value != NULL) && uIs(value, __this->__type->T(0)))
        ::g::Fuse::Animations::IMixerHandle::Set_ex(uInterface(uPtr(__this->mixHandle), __types[0]), uUnboxAny(__this->__type->T(0), value), uCRef(strength_));
}

// public DiscreteTrackChangeState(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) [instance] :181
void DiscreteTrackChangeState::ctor_2(::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    uType* __types[] = {
        __type->Precalced(1/*Fuse.Animations.IMixer.Register<T>*/),
    };
    ctor_1(animator, p, NULL);
    Animator1 = animator;
    mixHandle = ((uObject*)::g::Fuse::Animations::IMixer::Register(uInterface(uPtr(uPtr(Animator1)->Mixer), ::TYPES[11/*Fuse.Animations.IMixer*/]), __types[0], (::g::Uno::UX::Property1*)uPtr(Animator1)->Target(), uPtr(Animator1)->MixOp()));
}

// public DiscreteTrackChangeState New(Fuse.Animations.Change<T> animator, Fuse.Animations.CreateStateParams p) [static] :181
DiscreteTrackChangeState* DiscreteTrackChangeState::New1(uType* __type, ::g::Fuse::Animations::Change* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    DiscreteTrackChangeState* obj1 = (DiscreteTrackChangeState*)uNew(__type);
    obj1->ctor_2(animator, p);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/TrackAnimator.uno
// ---------------------------------------------------------------------

// internal abstract interface DiscreteTrackProvider :24
// {
uInterfaceType* DiscreteTrackProvider_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.DiscreteTrackProvider", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Easing.uno
// ----------------------------------------------------------

// public abstract class Easing :13
// {
// static generated Easing() :13
static void Easing__cctor__fn(uType* __type)
{
    Easing::Linear_ = Easing__LinearImpl::New1();
    Easing::QuadraticIn_ = Easing__QuadraticInImpl::New1();
    Easing::QuadraticOut_ = Easing__QuadraticOutImpl::New1();
    Easing::QuadraticInOut_ = Easing__QuadraticInOutImpl::New1();
    Easing::CubicIn_ = Easing__CubicInImpl::New1();
    Easing::CubicOut_ = Easing__CubicOutImpl::New1();
    Easing::CubicInOut_ = Easing__CubicInOutImpl::New1();
    Easing::QuarticIn_ = Easing__QuarticInImpl::New1();
    Easing::QuarticOut_ = Easing__QuarticOutImpl::New1();
    Easing::QuarticInOut_ = Easing__QuarticInOutImpl::New1();
    Easing::QuinticIn_ = Easing__QuinticInImpl::New1();
    Easing::QuinticOut_ = Easing__QuinticOutImpl::New1();
    Easing::QuinticInOut_ = Easing__QuinticInOutImpl::New1();
    Easing::SinusoidalIn_ = Easing__SinusoidalInImpl::New1();
    Easing::SinusoidalOut_ = Easing__SinusoidalOutImpl::New1();
    Easing::SinusoidalInOut_ = Easing__SinusoidalInOutImpl::New1();
    Easing::ExponentialIn_ = Easing__ExponentialInImpl::New1();
    Easing::ExponentialOut_ = Easing__ExponentialOutImpl::New1();
    Easing::ExponentialInOut_ = Easing__ExponentialInOutImpl::New1();
    Easing::CircularIn_ = Easing__CircularInImpl::New1();
    Easing::CircularOut_ = Easing__CircularOutImpl::New1();
    Easing::CircularInOut_ = Easing__CircularInOutImpl::New1();
    Easing::ElasticIn_ = Easing__ElasticInImpl::New1();
    Easing::ElasticOut_ = Easing__ElasticOutImpl::New1();
    Easing::ElasticInOut_ = Easing__ElasticInOutImpl::New1();
    Easing::BackIn_ = Easing__BackInImpl::New1();
    Easing::BackOut_ = Easing__BackOutImpl::New1();
    Easing::BackInOut_ = Easing__BackInOutImpl::New1();
    Easing::BounceIn_ = Easing__BounceInImpl::New1();
    Easing::BounceOut_ = Easing__BounceOutImpl::New1();
    Easing::BounceInOut_ = Easing__BounceInOutImpl::New1();
}

static void Easing_build(uType* type)
{
    type->SetFields(0,
        type, (uintptr_t)&Easing::BackIn_, uFieldFlagsStatic,
        type, (uintptr_t)&Easing::BackInOut_, uFieldFlagsStatic,
        type, (uintptr_t)&Easing::BackOut_, uFieldFlagsStatic,
        type, (uintptr_t)&Easing::BounceIn_, uFieldFlagsStatic,
        type, (uintptr_t)&Easing::BounceInOut_, uFieldFlagsStatic,
        type, (uintptr_t)&Easing::BounceOut_, uFieldFlagsStatic,
        type, (uintptr_t)&Easing::CircularIn_, uFieldFlagsStatic,
        type, (uintptr_t)&Easing::CircularInOut_, uFieldFlagsStatic,
        type, (uintptr_t)&Easing::CircularOut_, uFieldFlagsStatic,
        type, (uintptr_t)&Easing::CubicIn_, uFieldFlagsStatic,
        type, (uintptr_t)&Easing::CubicInOut_, uFieldFlagsStatic,
        type, (uintptr_t)&Easing::CubicOut_, uFieldFlagsStatic,
        type, (uintptr_t)&Easing::ElasticIn_, uFieldFlagsStatic,
        type, (uintptr_t)&Easing::ElasticInOut_, uFieldFlagsStatic,
        type, (uintptr_t)&Easing::ElasticOut_, uFieldFlagsStatic,
        type, (uintptr_t)&Easing::ExponentialIn_, uFieldFlagsStatic,
        type, (uintptr_t)&Easing::ExponentialInOut_, uFieldFlagsStatic,
        type, (uintptr_t)&Easing::ExponentialOut_, uFieldFlagsStatic,
        type, (uintptr_t)&Easing::Linear_, uFieldFlagsStatic,
        type, (uintptr_t)&Easing::QuadraticIn_, uFieldFlagsStatic,
        type, (uintptr_t)&Easing::QuadraticInOut_, uFieldFlagsStatic,
        type, (uintptr_t)&Easing::QuadraticOut_, uFieldFlagsStatic,
        type, (uintptr_t)&Easing::QuarticIn_, uFieldFlagsStatic,
        type, (uintptr_t)&Easing::QuarticInOut_, uFieldFlagsStatic,
        type, (uintptr_t)&Easing::QuarticOut_, uFieldFlagsStatic,
        type, (uintptr_t)&Easing::QuinticIn_, uFieldFlagsStatic,
        type, (uintptr_t)&Easing::QuinticInOut_, uFieldFlagsStatic,
        type, (uintptr_t)&Easing::QuinticOut_, uFieldFlagsStatic,
        type, (uintptr_t)&Easing::SinusoidalIn_, uFieldFlagsStatic,
        type, (uintptr_t)&Easing::SinusoidalInOut_, uFieldFlagsStatic,
        type, (uintptr_t)&Easing::SinusoidalOut_, uFieldFlagsStatic);
}

Easing_type* Easing_typeof()
{
    static uSStrong<Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 31;
    options.ObjectSize = sizeof(Easing);
    options.TypeSize = sizeof(Easing_type);
    type = (Easing_type*)uClassType::New("Fuse.Animations.Easing", options);
    type->fp_build_ = Easing_build;
    type->fp_cctor_ = Easing__cctor__fn;
    return type;
}

// protected generated Easing() :13
void Easing__ctor__fn(Easing* __this)
{
    __this->ctor_();
}

uSStrong<Easing*> Easing::BackIn_;
uSStrong<Easing*> Easing::BackInOut_;
uSStrong<Easing*> Easing::BackOut_;
uSStrong<Easing*> Easing::BounceIn_;
uSStrong<Easing*> Easing::BounceInOut_;
uSStrong<Easing*> Easing::BounceOut_;
uSStrong<Easing*> Easing::CircularIn_;
uSStrong<Easing*> Easing::CircularInOut_;
uSStrong<Easing*> Easing::CircularOut_;
uSStrong<Easing*> Easing::CubicIn_;
uSStrong<Easing*> Easing::CubicInOut_;
uSStrong<Easing*> Easing::CubicOut_;
uSStrong<Easing*> Easing::ElasticIn_;
uSStrong<Easing*> Easing::ElasticInOut_;
uSStrong<Easing*> Easing::ElasticOut_;
uSStrong<Easing*> Easing::ExponentialIn_;
uSStrong<Easing*> Easing::ExponentialInOut_;
uSStrong<Easing*> Easing::ExponentialOut_;
uSStrong<Easing*> Easing::Linear_;
uSStrong<Easing*> Easing::QuadraticIn_;
uSStrong<Easing*> Easing::QuadraticInOut_;
uSStrong<Easing*> Easing::QuadraticOut_;
uSStrong<Easing*> Easing::QuarticIn_;
uSStrong<Easing*> Easing::QuarticInOut_;
uSStrong<Easing*> Easing::QuarticOut_;
uSStrong<Easing*> Easing::QuinticIn_;
uSStrong<Easing*> Easing::QuinticInOut_;
uSStrong<Easing*> Easing::QuinticOut_;
uSStrong<Easing*> Easing::SinusoidalIn_;
uSStrong<Easing*> Easing::SinusoidalInOut_;
uSStrong<Easing*> Easing::SinusoidalOut_;

// protected generated Easing() [instance] :13
void Easing::ctor_()
{
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/EasingTrack.uno
// -------------------------------------------------------------------

// internal sealed class EasingTrack :5
// {
// static generated EasingTrack() :5
static void EasingTrack__cctor__fn(uType* __type)
{
    EasingTrack::Singleton_ = EasingTrack::New1();
}

static void EasingTrack_build(uType* type)
{
    ::TYPES[15] = ::g::Fuse::Animations::ContinuousTrackProvider_typeof();
    type->SetInterfaces(
        ::TYPES[15/*Fuse.Animations.ContinuousTrackProvider*/], offsetof(EasingTrack_type, interface0),
        ::g::Fuse::Animations::TrackProvider_typeof(), offsetof(EasingTrack_type, interface1));
    type->SetFields(0,
        type, (uintptr_t)&EasingTrack::Singleton_, uFieldFlagsStatic);
}

EasingTrack_type* EasingTrack_typeof()
{
    static uSStrong<EasingTrack_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(EasingTrack);
    options.TypeSize = sizeof(EasingTrack_type);
    type = (EasingTrack_type*)uClassType::New("Fuse.Animations.EasingTrack", options);
    type->fp_build_ = EasingTrack_build;
    type->fp_ctor_ = (void*)EasingTrack__New1_fn;
    type->fp_cctor_ = EasingTrack__cctor__fn;
    type->interface1.fp_GetDuration = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimator*, int*, double*))EasingTrack__FuseAnimationsTrackProviderGetDuration_fn;
    type->interface1.fp_GetAnimatorVariant = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimator*, int*))EasingTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn;
    type->interface0.fp_GetSeekProgress = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, ::g::Uno::Float4*, double*, int*))EasingTrack__FuseAnimationsContinuousTrackProviderGetSeekProgress_fn;
    type->interface0.fp_GetSeekTime = (void(*)(uObject*, ::g::Fuse::Animations::TrackAnimatorState*, double*, double*, int*, ::g::Uno::Float4*, double*, int*))EasingTrack__FuseAnimationsContinuousTrackProviderGetSeekTime_fn;
    return type;
}

// public generated EasingTrack() :5
void EasingTrack__ctor__fn(EasingTrack* __this)
{
    __this->ctor_();
}

// private Fuse.Animations.SeekResult Fuse.Animations.ContinuousTrackProvider.GetSeekProgress(Fuse.Animations.TrackAnimatorState tas, double progress, double interval, Fuse.Animations.SeekDirection dir, float4& value, double& strength) :20
void EasingTrack__FuseAnimationsContinuousTrackProviderGetSeekProgress_fn(EasingTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* progress, double* interval, int* dir, ::g::Uno::Float4* value, double* strength, int* __retval)
{
    double progress_ = *progress;
    int dir_ = *dir;
    progress_ = ::g::Uno::Math::Clamp(progress_, 0.0, 1.0);
    double ease = uPtr(uPtr(tas)->Easing())->Map((double)(float)progress_);
    *strength = ease;
    *value = uPtr(tas->Animator)->_vectorValue;
    return *__retval = (((dir_ == 0) ? progress_ >= 1.0 : progress_ <= 0.0) ? 1 : 0) | 2, void();
}

// private Fuse.Animations.SeekResult Fuse.Animations.ContinuousTrackProvider.GetSeekTime(Fuse.Animations.TrackAnimatorState tas, double elapsed, double interval, Fuse.Animations.SeekDirection dir, float4& value, double& strength) :34
void EasingTrack__FuseAnimationsContinuousTrackProviderGetSeekTime_fn(EasingTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* elapsed, double* interval, int* dir, ::g::Uno::Float4* value, double* strength, int* __retval)
{
    int dir_ = *dir;
    double elapsed_ = *elapsed;
    double interval_ = *interval;
    double duration = uPtr(tas)->Duration();
    float progress;
    float zeroTolerance = 1e-05f;

    if (duration < 9.9999997473787516e-06)
        progress = (float)(((dir_ == 0) ? elapsed_ >= -9.9999997473787516e-06 : elapsed_ > 9.9999997473787516e-06) ? 1 : 0);
    else
        progress = (float)(elapsed_ / duration);

    return *__retval = ::g::Fuse::Animations::ContinuousTrackProvider::GetSeekProgress(uInterface(uPtr(uAs<uObject*>(__this, ::TYPES[15/*Fuse.Animations.ContinuousTrackProvider*/])), ::TYPES[15/*Fuse.Animations.ContinuousTrackProvider*/]), tas, (double)progress, interval_, dir_, value, strength), void();
}

// private Fuse.Animations.AnimatorVariant Fuse.Animations.TrackProvider.GetAnimatorVariant(Fuse.Animations.TrackAnimator ta) :15
void EasingTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn(EasingTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* __retval)
{
    return *__retval = uPtr(ta)->HasBack() ? 2 : 0, void();
}

// private double Fuse.Animations.TrackProvider.GetDuration(Fuse.Animations.TrackAnimator ta, Fuse.Animations.AnimationVariant variant) :10
void EasingTrack__FuseAnimationsTrackProviderGetDuration_fn(EasingTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int* variant, double* __retval)
{
    int variant_ = *variant;
    return *__retval = ((variant_ == 1) && uPtr(ta)->HasBack()) ? uPtr(ta)->DurationBack() : uPtr(ta)->Duration(), void();
}

// public generated EasingTrack New() :5
void EasingTrack__New1_fn(EasingTrack** __retval)
{
    *__retval = EasingTrack::New1();
}

uSStrong<EasingTrack*> EasingTrack::Singleton_;

// public generated EasingTrack() [instance] :5
void EasingTrack::ctor_()
{
}

// public generated EasingTrack New() [static] :5
EasingTrack* EasingTrack::New1()
{
    EasingTrack* obj1 = (EasingTrack*)uNew(EasingTrack_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Easing.uno
// ----------------------------------------------------------

// internal sealed class Easing.ElasticInImpl :275
// {
static void Easing__ElasticInImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__ElasticInImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__ElasticInImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.ElasticInImpl", options);
    type->fp_build_ = Easing__ElasticInImpl_build;
    type->fp_ctor_ = (void*)Easing__ElasticInImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__ElasticInImpl__Map_fn;
    return type;
}

// public generated ElasticInImpl() :275
void Easing__ElasticInImpl__ctor_1_fn(Easing__ElasticInImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :277
void Easing__ElasticInImpl__Map_fn(Easing__ElasticInImpl* __this, double* k, double* __retval)
{
    double k_ = *k;

    if (k_ == 0.0)
        return *__retval = 0.0, void();

    if (k_ == 1.0)
        return *__retval = 1.0, void();

    k_ = k_ - 1.0;
    return *__retval = -::g::Uno::Math::Pow(2.0, 10.0 * k_) * ::g::Uno::Math::Sin(((k_ - 0.10000000149011612) * 6.2831854820251465) * 2.5), void();
}

// public generated ElasticInImpl New() :275
void Easing__ElasticInImpl__New1_fn(Easing__ElasticInImpl** __retval)
{
    *__retval = Easing__ElasticInImpl::New1();
}

// public generated ElasticInImpl() [instance] :275
void Easing__ElasticInImpl::ctor_1()
{
    ctor_();
}

// public generated ElasticInImpl New() [static] :275
Easing__ElasticInImpl* Easing__ElasticInImpl::New1()
{
    Easing__ElasticInImpl* obj1 = (Easing__ElasticInImpl*)uNew(Easing__ElasticInImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Easing.uno
// ----------------------------------------------------------

// internal sealed class Easing.ElasticInOutImpl :303
// {
static void Easing__ElasticInOutImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__ElasticInOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__ElasticInOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.ElasticInOutImpl", options);
    type->fp_build_ = Easing__ElasticInOutImpl_build;
    type->fp_ctor_ = (void*)Easing__ElasticInOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__ElasticInOutImpl__Map_fn;
    return type;
}

// public generated ElasticInOutImpl() :303
void Easing__ElasticInOutImpl__ctor_1_fn(Easing__ElasticInOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :305
void Easing__ElasticInOutImpl__Map_fn(Easing__ElasticInOutImpl* __this, double* k, double* __retval)
{
    double k_ = *k;

    if (k_ == 0.0)
        return *__retval = 0.0, void();

    if (k_ == 1.0)
        return *__retval = 1.0, void();

    k_ = (k_ * 2.0) - 1.0;

    if (k_ < 0.0)
        return *__retval = (-0.5 * ::g::Uno::Math::Pow(2.0, 10.0 * k_)) * ::g::Uno::Math::Sin(((k_ - 0.10000000149011612) * 6.2831854820251465) * 2.5), void();

    return *__retval = ((::g::Uno::Math::Pow(2.0, -10.0 * k_) * ::g::Uno::Math::Sin(((k_ - 0.10000000149011612) * 6.2831854820251465) * 2.5)) * 0.5) + 1.0, void();
}

// public generated ElasticInOutImpl New() :303
void Easing__ElasticInOutImpl__New1_fn(Easing__ElasticInOutImpl** __retval)
{
    *__retval = Easing__ElasticInOutImpl::New1();
}

// public generated ElasticInOutImpl() [instance] :303
void Easing__ElasticInOutImpl::ctor_1()
{
    ctor_();
}

// public generated ElasticInOutImpl New() [static] :303
Easing__ElasticInOutImpl* Easing__ElasticInOutImpl::New1()
{
    Easing__ElasticInOutImpl* obj1 = (Easing__ElasticInOutImpl*)uNew(Easing__ElasticInOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Easing.uno
// ----------------------------------------------------------

// internal sealed class Easing.ElasticOutImpl :289
// {
static void Easing__ElasticOutImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__ElasticOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__ElasticOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.ElasticOutImpl", options);
    type->fp_build_ = Easing__ElasticOutImpl_build;
    type->fp_ctor_ = (void*)Easing__ElasticOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__ElasticOutImpl__Map_fn;
    return type;
}

// public generated ElasticOutImpl() :289
void Easing__ElasticOutImpl__ctor_1_fn(Easing__ElasticOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :291
void Easing__ElasticOutImpl__Map_fn(Easing__ElasticOutImpl* __this, double* k, double* __retval)
{
    double k_ = *k;

    if (k_ == 0.0)
        return *__retval = 0.0, void();

    if (k_ == 1.0)
        return *__retval = 1.0, void();

    return *__retval = (::g::Uno::Math::Pow(2.0, -10.0 * k_) * ::g::Uno::Math::Sin(((k_ - 0.10000000149011612) * 6.2831854820251465) * 2.5)) + 1.0, void();
}

// public generated ElasticOutImpl New() :289
void Easing__ElasticOutImpl__New1_fn(Easing__ElasticOutImpl** __retval)
{
    *__retval = Easing__ElasticOutImpl::New1();
}

// public generated ElasticOutImpl() [instance] :289
void Easing__ElasticOutImpl::ctor_1()
{
    ctor_();
}

// public generated ElasticOutImpl New() [static] :289
Easing__ElasticOutImpl* Easing__ElasticOutImpl::New1()
{
    Easing__ElasticOutImpl* obj1 = (Easing__ElasticOutImpl*)uNew(Easing__ElasticOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Easing.uno
// ----------------------------------------------------------

// internal sealed class Easing.ExponentialInImpl :212
// {
static void Easing__ExponentialInImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__ExponentialInImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__ExponentialInImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.ExponentialInImpl", options);
    type->fp_build_ = Easing__ExponentialInImpl_build;
    type->fp_ctor_ = (void*)Easing__ExponentialInImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__ExponentialInImpl__Map_fn;
    return type;
}

// public generated ExponentialInImpl() :212
void Easing__ExponentialInImpl__ctor_1_fn(Easing__ExponentialInImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :214
void Easing__ExponentialInImpl__Map_fn(Easing__ExponentialInImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    return *__retval = (k_ == 0.0) ? 0.0 : ::g::Uno::Math::Pow(1024.0, k_ - 1.0), void();
}

// public generated ExponentialInImpl New() :212
void Easing__ExponentialInImpl__New1_fn(Easing__ExponentialInImpl** __retval)
{
    *__retval = Easing__ExponentialInImpl::New1();
}

// public generated ExponentialInImpl() [instance] :212
void Easing__ExponentialInImpl::ctor_1()
{
    ctor_();
}

// public generated ExponentialInImpl New() [static] :212
Easing__ExponentialInImpl* Easing__ExponentialInImpl::New1()
{
    Easing__ExponentialInImpl* obj1 = (Easing__ExponentialInImpl*)uNew(Easing__ExponentialInImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Easing.uno
// ----------------------------------------------------------

// internal sealed class Easing.ExponentialInOutImpl :228
// {
static void Easing__ExponentialInOutImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__ExponentialInOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__ExponentialInOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.ExponentialInOutImpl", options);
    type->fp_build_ = Easing__ExponentialInOutImpl_build;
    type->fp_ctor_ = (void*)Easing__ExponentialInOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__ExponentialInOutImpl__Map_fn;
    return type;
}

// public generated ExponentialInOutImpl() :228
void Easing__ExponentialInOutImpl__ctor_1_fn(Easing__ExponentialInOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :230
void Easing__ExponentialInOutImpl__Map_fn(Easing__ExponentialInOutImpl* __this, double* k, double* __retval)
{
    double k_ = *k;

    if (k_ == 0.0)
        return *__retval = 0.0, void();

    if (k_ == 1.0)
        return *__retval = 1.0, void();

    k_ = k_ * 2.0;

    if (k_ < 1.0)
        return *__retval = 0.5 * ::g::Uno::Math::Pow(1024.0, k_ - 1.0), void();

    return *__retval = 0.5 * (-::g::Uno::Math::Pow(2.0, -10.0 * (k_ - 1.0)) + 2.0), void();
}

// public generated ExponentialInOutImpl New() :228
void Easing__ExponentialInOutImpl__New1_fn(Easing__ExponentialInOutImpl** __retval)
{
    *__retval = Easing__ExponentialInOutImpl::New1();
}

// public generated ExponentialInOutImpl() [instance] :228
void Easing__ExponentialInOutImpl::ctor_1()
{
    ctor_();
}

// public generated ExponentialInOutImpl New() [static] :228
Easing__ExponentialInOutImpl* Easing__ExponentialInOutImpl::New1()
{
    Easing__ExponentialInOutImpl* obj1 = (Easing__ExponentialInOutImpl*)uNew(Easing__ExponentialInOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Easing.uno
// ----------------------------------------------------------

// internal sealed class Easing.ExponentialOutImpl :220
// {
static void Easing__ExponentialOutImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__ExponentialOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__ExponentialOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.ExponentialOutImpl", options);
    type->fp_build_ = Easing__ExponentialOutImpl_build;
    type->fp_ctor_ = (void*)Easing__ExponentialOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__ExponentialOutImpl__Map_fn;
    return type;
}

// public generated ExponentialOutImpl() :220
void Easing__ExponentialOutImpl__ctor_1_fn(Easing__ExponentialOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :222
void Easing__ExponentialOutImpl__Map_fn(Easing__ExponentialOutImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    return *__retval = (k_ == 1.0) ? 1.0 : 1.0 - ::g::Uno::Math::Pow(2.0, -10.0 * k_), void();
}

// public generated ExponentialOutImpl New() :220
void Easing__ExponentialOutImpl__New1_fn(Easing__ExponentialOutImpl** __retval)
{
    *__retval = Easing__ExponentialOutImpl::New1();
}

// public generated ExponentialOutImpl() [instance] :220
void Easing__ExponentialOutImpl::ctor_1()
{
    ctor_();
}

// public generated ExponentialOutImpl New() [static] :220
Easing__ExponentialOutImpl* Easing__ExponentialOutImpl::New1()
{
    Easing__ExponentialOutImpl* obj1 = (Easing__ExponentialOutImpl*)uNew(Easing__ExponentialOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Mixer.uno
// -------------------------------------------------------------

// internal sealed class FastMatrixTransform :292
// {
static void FastMatrixTransform_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Transform_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Transform_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Transform_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Transform_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Transform_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Transform_type, interface5));
    type->SetFields(16,
        ::g::Fuse::FastMatrix_typeof(), offsetof(FastMatrixTransform, Matrix), 0);
}

::g::Fuse::Transform_type* FastMatrixTransform_typeof()
{
    static uSStrong< ::g::Fuse::Transform_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Transform_typeof();
    options.FieldCount = 17;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(FastMatrixTransform);
    options.TypeSize = sizeof(::g::Fuse::Transform_type);
    type = (::g::Fuse::Transform_type*)uClassType::New("Fuse.Animations.FastMatrixTransform", options);
    type->fp_build_ = FastMatrixTransform_build;
    type->fp_ctor_ = (void*)FastMatrixTransform__New2_fn;
    type->fp_AppendTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*, float*))FastMatrixTransform__AppendTo_fn;
    type->fp_get_IsFlat = (void(*)(::g::Fuse::Transform*, bool*))FastMatrixTransform__get_IsFlat_fn;
    type->fp_PrependTo = (void(*)(::g::Fuse::Transform*, ::g::Fuse::FastMatrix*))FastMatrixTransform__PrependTo_fn;
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

// public generated FastMatrixTransform() :292
void FastMatrixTransform__ctor_3_fn(FastMatrixTransform* __this)
{
    __this->ctor_3();
}

// public override sealed void AppendTo(Fuse.FastMatrix m, float weight) :296
void FastMatrixTransform__AppendTo_fn(FastMatrixTransform* __this, ::g::Fuse::FastMatrix* m, float* weight)
{
    uPtr(m)->AppendFastMatrix(__this->Matrix);
}

// public void Changed() :307
void FastMatrixTransform__Changed_fn(FastMatrixTransform* __this)
{
    __this->Changed();
}

// public override sealed bool get_IsFlat() :314
void FastMatrixTransform__get_IsFlat_fn(FastMatrixTransform* __this, bool* __retval)
{
    ::g::Uno::Float4x4 m = uPtr(__this->Matrix)->Matrix();
    float zeroTolerance = 1e-05f;
    bool q = (((((::g::Uno::Math::Abs1(m.M13) < 1e-05f) && (::g::Uno::Math::Abs1(m.M23) < 1e-05f)) && (::g::Uno::Math::Abs1(m.M43) < 1e-05f)) && (::g::Uno::Math::Abs1(m.M14) < 1e-05f)) && (::g::Uno::Math::Abs1(m.M24) < 1e-05f)) && (::g::Uno::Math::Abs1(m.M34) < 1e-05f);
    return *__retval = q, void();
}

// public generated FastMatrixTransform New() :292
void FastMatrixTransform__New2_fn(FastMatrixTransform** __retval)
{
    *__retval = FastMatrixTransform::New2();
}

// public override sealed void PrependTo(Fuse.FastMatrix m) :302
void FastMatrixTransform__PrependTo_fn(FastMatrixTransform* __this, ::g::Fuse::FastMatrix* m)
{
    uPtr(m)->PrependFastMatrix(__this->Matrix);
}

// public generated FastMatrixTransform() [instance] :292
void FastMatrixTransform::ctor_3()
{
    Matrix = ::g::Fuse::FastMatrix::Identity();
    ctor_2();
}

// public void Changed() [instance] :307
void FastMatrixTransform::Changed()
{
    OnMatrixChanged(NULL, NULL);
}

// public generated FastMatrixTransform New() [static] :292
FastMatrixTransform* FastMatrixTransform::New2()
{
    FastMatrixTransform* obj1 = (FastMatrixTransform*)uNew(FastMatrixTransform_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Mixer.uno
// -------------------------------------------------------------

// protected struct MasterBase<T>.GFWResult :178
// {
static void MasterBase__GFWResult_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(MasterBase__GFWResult, Rest), 0,
        ::g::Uno::Float_typeof(), offsetof(MasterBase__GFWResult, Full), 0);
}

uStructType* MasterBase__GFWResult_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.Alignment = alignof(MasterBase__GFWResult);
    options.ValueSize = sizeof(MasterBase__GFWResult);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Animations.MasterBase`1.GFWResult", options);
    type->fp_build_ = MasterBase__GFWResult_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/TriggerAnimation.uno
// ------------------------------------------------------------------------

// internal abstract interface IBasePlayerFeedback :219
// {
uInterfaceType* IBasePlayerFeedback_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.IBasePlayerFeedback", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Mixer.uno
// -------------------------------------------------------------

// public abstract interface IMixer :22
// {
uInterfaceType* IMixer_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.IMixer", 0, 1);
    type->MethodTypes[0] = type->NewMethodType(1);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Mixer.uno
// -------------------------------------------------------------

// public abstract interface IMixerHandle<T> :28
// {
uInterfaceType* IMixerHandle_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.IMixerHandle`1", 1, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Mixer.uno
// -------------------------------------------------------------

// internal abstract interface IMixerMaster :43
// {
uInterfaceType* IMixerMaster_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.IMixerMaster", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/TriggerAnimation.uno
// ------------------------------------------------------------------------

// internal abstract interface IPlayerFeedback :225
// {
uInterfaceType* IPlayerFeedback_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.IPlayerFeedback", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Resize.uno
// --------------------------------------------------------------

// public abstract interface IResize :5
// {
uInterfaceType* IResize_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.IResize", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Resize.uno
// --------------------------------------------------------------

// public abstract interface IResizeMode :10
// {
uInterfaceType* IResizeMode_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.IResizeMode", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/TriggerAnimation.uno
// ------------------------------------------------------------------------

// internal abstract interface IUnwrappedPlayerFeedback :230
// {
uInterfaceType* IUnwrappedPlayerFeedback_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.IUnwrappedPlayerFeedback", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Easing.uno
// ----------------------------------------------------------

// internal sealed class Easing.LinearImpl :60
// {
static void Easing__LinearImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__LinearImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__LinearImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.LinearImpl", options);
    type->fp_build_ = Easing__LinearImpl_build;
    type->fp_ctor_ = (void*)Easing__LinearImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__LinearImpl__Map_fn;
    return type;
}

// public generated LinearImpl() :60
void Easing__LinearImpl__ctor_1_fn(Easing__LinearImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :62
void Easing__LinearImpl__Map_fn(Easing__LinearImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    return *__retval = k_, void();
}

// public generated LinearImpl New() :60
void Easing__LinearImpl__New1_fn(Easing__LinearImpl** __retval)
{
    *__retval = Easing__LinearImpl::New1();
}

// public generated LinearImpl() [instance] :60
void Easing__LinearImpl::ctor_1()
{
    ctor_();
}

// public generated LinearImpl New() [static] :60
Easing__LinearImpl* Easing__LinearImpl::New1()
{
    Easing__LinearImpl* obj1 = (Easing__LinearImpl*)uNew(Easing__LinearImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Mixer.uno
// -------------------------------------------------------------

// internal abstract class MasterBase<T> :95
// {
// ~MasterBase() :103
static void MasterBase__Finalize_fn(MasterBase* __this)
{
}

static void MasterBase_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetPrecalc(
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Animations::MixerHandle_typeof()->MakeType(type->T(0), NULL), NULL));
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(MasterBase_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(MasterBase, _inactive), 0,
        ::g::Fuse::Animations::MixerBase_typeof(), offsetof(MasterBase, _mixerBase), 0,
        ::g::Uno::Bool_typeof(), offsetof(MasterBase, DirtyValue), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Animations::MixerHandle_typeof()->MakeType(type->T(0), NULL), NULL), offsetof(MasterBase, Handles), 0);
}

MasterBase_type* MasterBase_typeof()
{
    static uSStrong<MasterBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(MasterBase);
    options.TypeSize = sizeof(MasterBase_type);
    type = (MasterBase_type*)uClassType::New("Fuse.Animations.MasterBase`1", options);
    type->fp_build_ = MasterBase_build;
    type->fp_Finalize = (void(*)(uObject*))MasterBase__Finalize_fn;
    type->fp_OnActive = MasterBase__OnActive_fn;
    return type;
}

// protected MasterBase([Fuse.Animations.MixerBase mixerBase]) :98
void MasterBase__ctor__fn(MasterBase* __this, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_(mixerBase);
}

// private void Complete() :149
void MasterBase__Complete_fn(MasterBase* __this)
{
    __this->Complete();
}

// protected Fuse.Animations.MasterBase<T>.GFWResult GetFullWeight() :184
void MasterBase__GetFullWeight_fn(MasterBase* __this, MasterBase__GFWResult* __retval)
{
    *__retval = __this->GetFullWeight();
}

// public void MarkDirty() :163
void MasterBase__MarkDirty_fn(MasterBase* __this)
{
    __this->MarkDirty();
}

// protected virtual void OnActive() :146
void MasterBase__OnActive_fn(MasterBase* __this)
{
}

// public void Register(Fuse.Animations.MixerHandle<T> handle) :114
void MasterBase__Register_fn(MasterBase* __this, ::g::Fuse::Animations::MixerHandle* handle)
{
    __this->Register(handle);
}

// public void Unregister(Fuse.Animations.MixerHandle<T> handle) :130
void MasterBase__Unregister_fn(MasterBase* __this, ::g::Fuse::Animations::MixerHandle* handle)
{
    __this->Unregister(handle);
}

// protected MasterBase([Fuse.Animations.MixerBase mixerBase]) [instance] :98
void MasterBase::ctor_(::g::Fuse::Animations::MixerBase* mixerBase)
{
    uType* __types[] = {
        __type->GetBase(MasterBase_typeof())->Precalced(0/*Uno.Collections.List<Fuse.Animations.MixerHandle<T>>*/),
    };
    Handles = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[0]));
    _mixerBase = mixerBase;
}

// private void Complete() [instance] :149
void MasterBase::Complete()
{
    if (!DirtyValue)
        return;

    DirtyValue = false;

    if (uPtr(Handles)->Count() == 0)
        return;

    OnComplete();
}

// protected Fuse.Animations.MasterBase<T>.GFWResult GetFullWeight() [instance] :184
MasterBase__GFWResult MasterBase::GetFullWeight()
{
    MasterBase__GFWResult collection1;
    ::g::Fuse::Animations::MixerHandle* ret1;
    float fullWeight = 0.0f;
    int c = uPtr(Handles)->Count();

    for (int i = 0; i < c; ++i)
    {
        ::g::Fuse::Animations::MixerHandle* v = (::g::Uno::Collections::List__get_Item_fn(uPtr(Handles), uCRef<int>(i), &ret1), ret1);

        if (uPtr(v)->MixOp() == 2)
            fullWeight = fullWeight + (uPtr(v)->HasValue() ? ::g::Uno::Math::Max1(0.0f, uPtr(v)->Strength) : 0.0f);
    }

    float restWeight = 1.0f - ::g::Uno::Math::Min1(fullWeight, 1.0f);
    fullWeight = ::g::Uno::Math::Max1(1.0f, fullWeight);
    collection1 = uDefault<MasterBase__GFWResult>();
    collection1.Rest = restWeight;
    collection1.Full = fullWeight;
    return collection1;
}

// public void MarkDirty() [instance] :163
void MasterBase::MarkDirty()
{
    if (DirtyValue)
        return;

    DirtyValue = true;

    if (uPtr(Handles)->Count() < 2)
    {
        Complete();
        return;
    }

    ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)MasterBase__Complete_fn, this), -1, 2);
}

// public void Register(Fuse.Animations.MixerHandle<T> handle) [instance] :114
void MasterBase::Register(::g::Fuse::Animations::MixerHandle* handle)
{
    ::g::Fuse::Animations::MixerHandle* ret2;

    if (_inactive)
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("Attempt to register in inactive Master"), this, ::STRINGS[12/*"/usr/local/...*/], 118, uString::Const("Register"));
        return;
    }

    int at = 0;

    for (; (at < uPtr(Handles)->Count()) && (uPtr(handle)->Priority() <= uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Handles), uCRef<int>(at), &ret2), ret2))->Priority()); ++at)
        ;

    ::g::Uno::Collections::List__Insert_fn(uPtr(Handles), uCRef<int>(at), handle);

    if (uPtr(Handles)->Count() == 1)
        OnActive();
}

// public void Unregister(Fuse.Animations.MixerHandle<T> handle) [instance] :130
void MasterBase::Unregister(::g::Fuse::Animations::MixerHandle* handle)
{
    bool ret3;
    ::g::Uno::Collections::List__Remove_fn(uPtr(Handles), handle, &ret3);
    MarkDirty();

    if (uPtr(Handles)->Count() == 0)
    {
        _inactive = true;
        OnInactive();

        if (_mixerBase != NULL)
            uPtr(_mixerBase)->Unused((uObject*)this);
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Mixer.uno
// -------------------------------------------------------------

// internal abstract class MasterProperty<T> :211
// {
static void MasterProperty_build(uType* type)
{
    ::STRINGS[9] = uString::Const("The property ");
    ::STRINGS[10] = uString::Const(" of ");
    ::STRINGS[11] = uString::Const(" cannot be reliably animated because it does not provide an origin-setter. Animating this property may lead to visual glitches or inconsistencies.");
    ::STRINGS[12] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Mixer.uno");
    ::STRINGS[13] = uString::Const("GiveOriginSetterWarning");
    type->SetBase(::g::Fuse::Animations::MasterBase_typeof()->MakeType(type->T(0), NULL));
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Uno::UX::Selector_typeof());
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(MasterProperty_type, interface0),
        ::g::Fuse::Animations::MasterPropertyGet_typeof(), offsetof(MasterProperty_type, interface1),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(MasterProperty_type, interface2));
    type->SetFields(4,
        ::g::Uno::Bool_typeof(), offsetof(MasterProperty, _hasSetValue), 0,
        ::g::Uno::Bool_typeof(), offsetof(MasterProperty, _isListening), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Bool_typeof(), offsetof(MasterProperty, _warningGiven), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL), offsetof(MasterProperty, Property), 0);
}

MasterProperty_type* MasterProperty_typeof()
{
    static uSStrong<MasterProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::MasterBase_typeof();
    options.FieldCount = 10;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(MasterProperty);
    options.TypeSize = sizeof(MasterProperty_type);
    type = (MasterProperty_type*)uClassType::New("Fuse.Animations.MasterProperty`1", options);
    type->fp_build_ = MasterProperty_build;
    type->fp_OnActive = (void(*)(::g::Fuse::Animations::MasterBase*))MasterProperty__OnActive_fn;
    type->fp_OnInactive = (void(*)(::g::Fuse::Animations::MasterBase*))MasterProperty__OnInactive_fn;
    type->interface2.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))MasterProperty__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface1.fp_GetPropertyObject = (void(*)(uObject*, uObject**))MasterProperty__GetPropertyObject_fn;
    return type;
}

// protected MasterProperty(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) :216
void MasterProperty__ctor_1_fn(MasterProperty* __this, ::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_1(property, mixerBase);
}

// public object GetPropertyObject() :214
void MasterProperty__GetPropertyObject_fn(MasterProperty* __this, uObject** __retval)
{
    *__retval = __this->GetPropertyObject();
}

// private void GiveOriginSetterWarning() :270
void MasterProperty__GiveOriginSetterWarning_fn(MasterProperty* __this)
{
    __this->GiveOriginSetterWarning();
}

// protected override void OnActive() :232
void MasterProperty__OnActive_fn(MasterProperty* __this)
{
    uT ret1(__this->__type->GetBase(MasterProperty_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(MasterProperty_typeof())->T(0)->ValueSize));

    if (!__this->_isListening)
    {
        __this->_restValue() = (::g::Uno::UX::Property1__Get_fn(uPtr(__this->Property), &ret1), ret1);
        uPtr(__this->Property)->AddListener((uObject*)__this);
        __this->_isListening = true;
    }
}

// protected override sealed void OnInactive() :242
void MasterProperty__OnInactive_fn(MasterProperty* __this)
{
    uT ret2(__this->__type->GetBase(MasterProperty_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(MasterProperty_typeof())->T(0)->ValueSize));

    if (__this->_isListening)
    {
        uPtr(__this->Property)->RemoveListener((uObject*)__this);
        ::g::Uno::UX::Property1__Set_fn(uPtr(__this->Property), (MasterProperty__get_RestValue_fn(__this, &ret2), ret2), (uObject*)__this);
        __this->_isListening = false;
    }
}

// public T get_RestValue() :225
void MasterProperty__get_RestValue_fn(MasterProperty* __this, uTRef __retval)
{
    return __retval.Store(__this->_restValue()), void();
}

// protected void Set(T value) :282
void MasterProperty__Set_fn(MasterProperty* __this, void* value)
{
    if (!__this->_isListening)
        U_THROW(::g::Uno::Exception::New1());

    __this->_hasSetValue = true;
    __this->_lastSetValue() = value;
    ::g::Uno::UX::Property1__Set_fn(uPtr(__this->Property), value, (uObject*)__this);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector property) :252
void MasterProperty__UnoUXIPropertyListenerOnPropertyChanged_fn(MasterProperty* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* property)
{
    uT ret3(__this->__type->GetBase(MasterProperty_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(MasterProperty_typeof())->T(0)->ValueSize));
    uT v(__this->__type->GetBase(MasterProperty_typeof())->T(0), U_ALLOCA(__this->__type->GetBase(MasterProperty_typeof())->T(0)->ValueSize));
    ::g::Uno::UX::Selector property_ = *property;

    if (::g::Uno::UX::Selector__op_Inequality(uPtr(__this->Property)->Name(), property_))
        return;

    v = (::g::Uno::UX::Property1__Get_fn(uPtr(__this->Property), &ret3), ret3);

    if (uPtr(__this->Property)->SupportsOriginSetter())
        __this->_restValue() = v;
    else if (!__this->_hasSetValue || !::g::Uno::Object::Equals(uBoxPtr(__this->__type->GetBase(MasterProperty_typeof())->T(0), uPtr(__this->_lastSetValue()), U_ALLOCA(__this->__type->GetBase(MasterProperty_typeof())->T(0)->ObjectSize)), uBoxPtr(__this->__type->GetBase(MasterProperty_typeof())->T(0), v)))
    {
        __this->GiveOriginSetterWarning();
        __this->_restValue() = v;
    }
}

// protected MasterProperty(Uno.UX.Property<T> property, Fuse.Animations.MixerBase mixerBase) [instance] :216
void MasterProperty::ctor_1(::g::Uno::UX::Property1* property, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    ctor_(mixerBase);
    Property = property;
}

// public object GetPropertyObject() [instance] :214
uObject* MasterProperty::GetPropertyObject()
{
    return Property;
}

// private void GiveOriginSetterWarning() [instance] :270
void MasterProperty::GiveOriginSetterWarning()
{
    if (!_warningGiven)
    {
        _warningGiven = true;
        ::g::Fuse::Diagnostics::UserWarning(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[9/*"The property "*/], ::g::Uno::UX::Selector__op_Implicit1(uPtr(Property)->Name())), ::STRINGS[10/*" of "*/]), uPtr(Property)->Object()), ::STRINGS[11/*" cannot be ...*/]), this, ::STRINGS[12/*"/usr/local/...*/], 275, ::STRINGS[13/*"GiveOriginS...*/]);
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Mixer.uno
// -------------------------------------------------------------

// internal abstract interface MasterPropertyGet :207
// {
uInterfaceType* MasterPropertyGet_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.MasterPropertyGet", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Mixer.uno
// -------------------------------------------------------------

// internal abstract class MasterTransform :329
// {
// static generated MasterTransform() :329
static void MasterTransform__cctor__fn(uType* __type)
{
    MasterTransform::identity_ = ::g::Fuse::Translation::New2();
}

static void MasterTransform_build(uType* type)
{
    ::TYPES[16] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetBase(::g::Fuse::Animations::MasterBase_typeof()->MakeType(::g::Fuse::Transform_typeof(), NULL));
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerMaster_typeof(), offsetof(::g::Fuse::Animations::MasterBase_type, interface0));
    type->SetFields(4,
        ::g::Fuse::Animations::FastMatrixTransform_typeof(), offsetof(MasterTransform, FMT), 0,
        ::g::Fuse::Visual_typeof(), offsetof(MasterTransform, Visual), 0,
        ::g::Fuse::Transform_typeof(), (uintptr_t)&MasterTransform::identity_, uFieldFlagsStatic);
}

::g::Fuse::Animations::MasterBase_type* MasterTransform_typeof()
{
    static uSStrong< ::g::Fuse::Animations::MasterBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::MasterBase_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(MasterTransform);
    options.TypeSize = sizeof(::g::Fuse::Animations::MasterBase_type);
    type = (::g::Fuse::Animations::MasterBase_type*)uClassType::New("Fuse.Animations.MasterTransform", options);
    type->fp_build_ = MasterTransform_build;
    type->fp_cctor_ = MasterTransform__cctor__fn;
    type->fp_OnActive = (void(*)(::g::Fuse::Animations::MasterBase*))MasterTransform__OnActive_fn;
    type->fp_OnInactive = (void(*)(::g::Fuse::Animations::MasterBase*))MasterTransform__OnInactive_fn;
    return type;
}

// protected MasterTransform(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) :334
void MasterTransform__ctor_1_fn(MasterTransform* __this, ::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    __this->ctor_1(node, mixerBase);
}

// protected override sealed void OnActive() :341
void MasterTransform__OnActive_fn(MasterTransform* __this)
{
    __this->FMT = ::g::Fuse::Animations::FastMatrixTransform::New2();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->Visual)->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), __this->FMT);
}

// protected override sealed void OnInactive() :347
void MasterTransform__OnInactive_fn(MasterTransform* __this)
{
    bool ret1;
    ::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(uPtr(__this->Visual)->Children()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Node>*/]), __this->FMT, &ret1);
    __this->FMT = NULL;
}

uSStrong< ::g::Fuse::Transform*> MasterTransform::identity_;

// protected MasterTransform(Fuse.Visual node, Fuse.Animations.MixerBase mixerBase) [instance] :334
void MasterTransform::ctor_1(::g::Fuse::Visual* node, ::g::Fuse::Animations::MixerBase* mixerBase)
{
    ctor_(mixerBase);
    Visual = node;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Mixer.uno
// -------------------------------------------------------------

// internal sealed class Mixer :35
// {
// static generated Mixer() :35
static void Mixer__cctor__fn(uType* __type)
{
    Mixer::_default_ = (uObject*)::g::Fuse::Animations::AverageMixer::New1();
    Mixer::_defaultDiscrete_ = (uObject*)::g::Fuse::Animations::DiscreteMixer::New1();
}

static void Mixer_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Animations::IMixer_typeof(), (uintptr_t)&Mixer::_default_, uFieldFlagsStatic,
        ::g::Fuse::Animations::IMixer_typeof(), (uintptr_t)&Mixer::_defaultDiscrete_, uFieldFlagsStatic);
}

uType* Mixer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Mixer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Animations.Mixer", options);
    type->fp_build_ = Mixer_build;
    type->fp_cctor_ = Mixer__cctor__fn;
    return type;
}

// public static Fuse.Animations.IMixer get_Default() :38
void Mixer__get_Default_fn(uObject** __retval)
{
    *__retval = Mixer::Default();
}

// public static Fuse.Animations.IMixer get_DefaultDiscrete() :40
void Mixer__get_DefaultDiscrete_fn(uObject** __retval)
{
    *__retval = Mixer::DefaultDiscrete();
}

uSStrong<uObject*> Mixer::_default_;
uSStrong<uObject*> Mixer::_defaultDiscrete_;

// public static Fuse.Animations.IMixer get_Default() [static] :38
uObject* Mixer::Default()
{
    return Mixer::_default_;
}

// public static Fuse.Animations.IMixer get_DefaultDiscrete() [static] :40
uObject* Mixer::DefaultDiscrete()
{
    return Mixer::_defaultDiscrete_;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Mixer.uno
// -------------------------------------------------------------

// internal abstract class MixerBase :45
// {
static void MixerBase_build(uType* type)
{
    ::TYPES[17] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[18] = ::g::Fuse::Animations::MasterBase_typeof();
    ::TYPES[19] = ::g::Fuse::Animations::MixerHandle_typeof();
    ::TYPES[20] = ::TYPES[18/*Fuse.Animations.MasterBase`1*/]->MakeType(::g::Fuse::Transform_typeof(), NULL);
    ::TYPES[21] = ::TYPES[19/*Fuse.Animations.MixerHandle`1*/]->MakeType(::g::Fuse::Transform_typeof(), NULL);
    ::TYPES[22] = ::g::Fuse::Animations::MasterPropertyGet_typeof();
    ::TYPES[23] = ::g::Fuse::Animations::MasterTransform_typeof();
    type->SetDependencies(
        ::g::Fuse::Properties_typeof());
    type->MethodTypes[1]->SetPrecalc(
        type->MakeMethod(0/*CreateMaster<T>*/, type->MethodTypes[1]->U(0), NULL),
        ::TYPES[18/*Fuse.Animations.MasterBase`1*/]->MakeType(type->MethodTypes[1]->U(0), NULL),
        ::TYPES[19/*Fuse.Animations.MixerHandle`1*/]->MakeType(type->MethodTypes[1]->U(0), NULL));
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixer_typeof(), offsetof(MixerBase_type, interface0));
    type->SetFields(0,
        ::g::Fuse::PropertyHandle_typeof(), offsetof(MixerBase, _propHandle), 0,
        ::TYPES[17/*Uno.Collections.Dictionary<object, object>*/], offsetof(MixerBase, Masters), 0);
}

MixerBase_type* MixerBase_typeof()
{
    static uSStrong<MixerBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.MethodTypeCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(MixerBase);
    options.TypeSize = sizeof(MixerBase_type);
    type = (MixerBase_type*)uClassType::New("Fuse.Animations.MixerBase", options);
    type->MethodTypes[0] = type->NewMethodType(1, 0,0);
    type->MethodTypes[1] = type->NewMethodType(1, 3,0);
    type->fp_build_ = MixerBase_build;
    type->interface0.fp_Register = (void(*)(uObject*, uType*, ::g::Uno::UX::Property1*, int*, uObject**))MixerBase__Register_fn;
    type->interface0.fp_RegisterTransform = (void(*)(uObject*, ::g::Fuse::Visual*, int*, int*, uObject**))MixerBase__RegisterTransform_fn;
    return type;
}

// protected generated MixerBase() :45
void MixerBase__ctor__fn(MixerBase* __this)
{
    __this->ctor_();
}

// public Fuse.Animations.IMixerHandle<T> Register<T>(Uno.UX.Property<T> property, Fuse.Animations.MixOp mode) :49
void MixerBase__Register_fn(MixerBase* __this, uType* __type, ::g::Uno::UX::Property1* property, int* mode, uObject** __retval)
{
    *__retval = __this->Register(__type, property, *mode);
}

// public Fuse.Animations.IMixerHandle<Fuse.Transform> RegisterTransform(Fuse.Visual element, Fuse.Animations.MixOp mode, [int priority]) :63
void MixerBase__RegisterTransform_fn(MixerBase* __this, ::g::Fuse::Visual* element, int* mode, int* priority, uObject** __retval)
{
    *__retval = __this->RegisterTransform(element, *mode, *priority);
}

// public void Unused(Fuse.Animations.IMixerMaster mb) :78
void MixerBase__Unused_fn(MixerBase* __this, uObject* mb)
{
    __this->Unused(mb);
}

// protected generated MixerBase() [instance] :45
void MixerBase::ctor_()
{
    Masters = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[17/*Uno.Collections.Dictionary<object, object>*/]));
    _propHandle = ::g::Fuse::Properties::CreateHandle();
}

// public Fuse.Animations.IMixerHandle<T> Register<T>(Uno.UX.Property<T> property, Fuse.Animations.MixOp mode) [instance] :49
uObject* MixerBase::Register(uType* __type, ::g::Uno::UX::Property1* property, int mode)
{
    __type = MixerBase_typeof()->GetVirtual(1, __type);
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Animations.MixerBase.CreateMaster<T>*/),
        __type->Precalced(1/*Fuse.Animations.MasterBase<T>*/),
        __type->Precalced(2/*Fuse.Animations.MixerHandle<T>*/),
    };
    bool ret1;
    uObject* master;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(Masters), property, (void**)(&master), &ret1), ret1))
    {
        master = (::g::Fuse::Animations::MasterProperty*)CreateMaster(__types[0], property, this);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Masters), property, master);
    }

    ::g::Fuse::Animations::MasterBase* masterT = uCast< ::g::Fuse::Animations::MasterBase*>(master, __types[1]);
    return (uObject*)((::g::Fuse::Animations::MixerHandle*)::g::Fuse::Animations::MixerHandle::New1(__types[2], masterT, mode, 0));
}

// public Fuse.Animations.IMixerHandle<Fuse.Transform> RegisterTransform(Fuse.Visual element, Fuse.Animations.MixOp mode, [int priority]) [instance] :63
uObject* MixerBase::RegisterTransform(::g::Fuse::Visual* element, int mode, int priority)
{
    uObject* master;

    if (!uPtr(uPtr(element)->Properties())->TryGet(_propHandle, &master))
    {
        master = CreateMasterTransform(element, this);
        uPtr(uPtr(element)->Properties())->Set(_propHandle, master);
    }

    ::g::Fuse::Animations::MasterBase* masterT = uCast< ::g::Fuse::Animations::MasterBase*>(master, ::TYPES[20/*Fuse.Animations.MasterBase<Fuse.Transform>*/]);
    return (uObject*)((::g::Fuse::Animations::MixerHandle*)::g::Fuse::Animations::MixerHandle::New1(::TYPES[21/*Fuse.Animations.MixerHandle<Fuse.Transform>*/], masterT, mode, priority));
}

// public void Unused(Fuse.Animations.IMixerMaster mb) [instance] :78
void MixerBase::Unused(uObject* mb)
{
    bool ret2;
    uObject* prop = uAs<uObject*>(mb, ::TYPES[22/*Fuse.Animations.MasterPropertyGet*/]);

    if (prop != NULL)
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(Masters), ::g::Fuse::Animations::MasterPropertyGet::GetPropertyObject(uInterface(uPtr(prop), ::TYPES[22/*Fuse.Animations.MasterPropertyGet*/])), &ret2);

    ::g::Fuse::Animations::MasterTransform* trans = uAs< ::g::Fuse::Animations::MasterTransform*>(mb, ::TYPES[23/*Fuse.Animations.MasterTransform*/]);

    if (trans != NULL)
        uPtr(uPtr(uPtr(trans)->Visual)->Properties())->Clear(_propHandle);
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Mixer.uno
// -------------------------------------------------------------

// internal sealed class MixerHandle<T> :360
// {
static void MixerHandle_build(uType* type)
{
    ::STRINGS[14] = uString::Const("invalid MixerHandle.Set post-Unregister");
    ::STRINGS[12] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Mixer.uno");
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof());
    type->SetInterfaces(
        ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(type->T(0), NULL), offsetof(MixerHandle_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(MixerHandle, _hasValue), 0,
        ::g::Fuse::Animations::MasterBase_typeof()->MakeType(type->T(0), NULL), offsetof(MixerHandle, Master), 0,
        ::g::Uno::Float_typeof(), offsetof(MixerHandle, Strength), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Fuse::Animations::MixOp_typeof(), offsetof(MixerHandle, _MixOp), 0,
        ::g::Uno::Int_typeof(), offsetof(MixerHandle, _Priority), 0);
}

MixerHandle_type* MixerHandle_typeof()
{
    static uSStrong<MixerHandle_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(MixerHandle);
    options.TypeSize = sizeof(MixerHandle_type);
    type = (MixerHandle_type*)uClassType::New("Fuse.Animations.MixerHandle`1", options);
    type->fp_build_ = MixerHandle_build;
    type->interface0.fp_Unregister = (void(*)(uObject*))MixerHandle__Unregister_fn;
    type->interface0.fp_Set = (void(*)(uObject*, void*, float*))MixerHandle__Set_fn;
    return type;
}

// public MixerHandle(Fuse.Animations.MasterBase<T> master, Fuse.Animations.MixOp mode, int priority) :373
void MixerHandle__ctor__fn(MixerHandle* __this, ::g::Fuse::Animations::MasterBase* master, int* mode, int* priority)
{
    __this->ctor_(master, *mode, *priority);
}

// public bool get_HasValue() :366
void MixerHandle__get_HasValue_fn(MixerHandle* __this, bool* __retval)
{
    *__retval = __this->HasValue();
}

// public generated Fuse.Animations.MixOp get_MixOp() :368
void MixerHandle__get_MixOp_fn(MixerHandle* __this, int* __retval)
{
    *__retval = __this->MixOp();
}

// public generated void set_MixOp(Fuse.Animations.MixOp value) :368
void MixerHandle__set_MixOp_fn(MixerHandle* __this, int* value)
{
    __this->MixOp(*value);
}

// public MixerHandle New(Fuse.Animations.MasterBase<T> master, Fuse.Animations.MixOp mode, int priority) :373
void MixerHandle__New1_fn(uType* __type, ::g::Fuse::Animations::MasterBase* master, int* mode, int* priority, MixerHandle** __retval)
{
    *__retval = MixerHandle::New1(__type, master, *mode, *priority);
}

// public generated int get_Priority() :370
void MixerHandle__get_Priority_fn(MixerHandle* __this, int* __retval)
{
    *__retval = __this->Priority();
}

// private generated void set_Priority(int value) :370
void MixerHandle__set_Priority_fn(MixerHandle* __this, int* value)
{
    __this->Priority(*value);
}

// public void Set(T value, float strength) :388
void MixerHandle__Set_fn(MixerHandle* __this, void* value, float* strength)
{
    float strength_ = *strength;

    if (__this->Master == NULL)
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[14/*"invalid Mix...*/], 0, ::STRINGS[12/*"/usr/local/...*/], 392);
        return;
    }

    __this->_hasValue = true;
    __this->Value() = value;
    __this->Strength = strength_;
    uPtr(__this->Master)->MarkDirty();
}

// public void Unregister() :381
void MixerHandle__Unregister_fn(MixerHandle* __this)
{
    __this->Unregister();
}

// public MixerHandle(Fuse.Animations.MasterBase<T> master, Fuse.Animations.MixOp mode, int priority) [instance] :373
void MixerHandle::ctor_(::g::Fuse::Animations::MasterBase* master, int mode, int priority)
{
    Priority(priority);
    Master = master;
    MixOp(mode);
    uPtr(Master)->Register(this);
}

// public bool get_HasValue() [instance] :366
bool MixerHandle::HasValue()
{
    return _hasValue;
}

// public generated Fuse.Animations.MixOp get_MixOp() [instance] :368
int MixerHandle::MixOp()
{
    return _MixOp;
}

// public generated void set_MixOp(Fuse.Animations.MixOp value) [instance] :368
void MixerHandle::MixOp(int value)
{
    _MixOp = value;
}

// public generated int get_Priority() [instance] :370
int MixerHandle::Priority()
{
    return _Priority;
}

// private generated void set_Priority(int value) [instance] :370
void MixerHandle::Priority(int value)
{
    _Priority = value;
}

// public void Unregister() [instance] :381
void MixerHandle::Unregister()
{
    _hasValue = false;
    uPtr(Master)->Unregister(this);
    Master = NULL;
}

// public MixerHandle New(Fuse.Animations.MasterBase<T> master, Fuse.Animations.MixOp mode, int priority) [static] :373
MixerHandle* MixerHandle::New1(uType* __type, ::g::Fuse::Animations::MasterBase* master, int mode, int priority)
{
    MixerHandle* obj1 = (MixerHandle*)uNew(__type);
    obj1->ctor_(master, mode, priority);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Mixer.uno
// -------------------------------------------------------------

// public enum MixOp :12
uEnumType* MixOp_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.MixOp", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Offset", 0LL,
        "Add", 1LL,
        "Weight", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/TransformAnimator.uno
// -------------------------------------------------------------------------

// public sealed class Move :214
// {
static void Move_build(uType* type)
{
    type->SetBase(::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Translation_typeof(), NULL));
    type->SetDependencies(
        ::g::Fuse::TranslationModes_typeof());
    type->SetFields(21,
        ::g::Fuse::ITranslationMode_typeof(), offsetof(Move, _relativeTo), 0);
}

::g::Fuse::Animations::TransformAnimator_type* Move_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TransformAnimator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::TransformAnimator_typeof();
    options.FieldCount = 22;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Move);
    options.TypeSize = sizeof(::g::Fuse::Animations::TransformAnimator_type);
    type = (::g::Fuse::Animations::TransformAnimator_type*)uClassType::New("Fuse.Animations.Move", options);
    type->fp_build_ = Move_build;
    type->fp_ctor_ = (void*)Move__New2_fn;
    type->fp_Update = (void(*)(::g::Fuse::Animations::TransformAnimator*, ::g::Fuse::Visual*, ::g::Fuse::Transform*, ::g::Uno::Float4*))Move__Update_fn;
    return type;
}

// public Move() :216
void Move__ctor_4_fn(Move* __this)
{
    __this->ctor_4();
}

// public Move New() :216
void Move__New2_fn(Move** __retval)
{
    *__retval = Move::New2();
}

// public Fuse.ITranslationMode get_RelativeTo() :243
void Move__get_RelativeTo_fn(Move* __this, uObject** __retval)
{
    *__retval = __this->RelativeTo();
}

// public void set_RelativeTo(Fuse.ITranslationMode value) :244
void Move__set_RelativeTo_fn(Move* __this, uObject* value)
{
    __this->RelativeTo(value);
}

// internal override sealed void Update(Fuse.Visual elm, Fuse.Translation t, float4 value) :247
void Move__Update_fn(Move* __this, ::g::Fuse::Visual* elm, ::g::Fuse::Translation* t, ::g::Uno::Float4* value)
{
    ::g::Fuse::Visual* ind1;
    ::g::Uno::Float4 value_ = *value;
    uPtr(t)->RelativeNode((ind1 = __this->RelativeNode(), (ind1 != NULL) ? ind1 : elm));
    t->RelativeTo(__this->RelativeTo());
    t->Vector(::g::Uno::Float3__New2(value_.X, value_.Y, value_.Z));
}

// public Move() [instance] :216
void Move::ctor_4()
{
    _relativeTo = ::g::Fuse::TranslationModes::Local_;
    ctor_3();
    Priority(1000);
}

// public Fuse.ITranslationMode get_RelativeTo() [instance] :243
uObject* Move::RelativeTo()
{
    return _relativeTo;
}

// public void set_RelativeTo(Fuse.ITranslationMode value) [instance] :244
void Move::RelativeTo(uObject* value)
{
    _relativeTo = value;
}

// public Move New() [static] :216
Move* Move::New2()
{
    Move* obj2 = (Move*)uNew(Move_typeof());
    obj2->ctor_4();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Nothing.uno
// ---------------------------------------------------------------

// public sealed class Nothing :10
// {
static void Nothing_build(uType* type)
{
    type->SetFields(18);
}

::g::Fuse::Animations::Animator_type* Nothing_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::TrackAnimator_typeof();
    options.FieldCount = 18;
    options.ObjectSize = sizeof(Nothing);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.Nothing", options);
    type->fp_build_ = Nothing_build;
    type->fp_ctor_ = (void*)Nothing__New2_fn;
    type->fp_CreateState = (void(*)(::g::Fuse::Animations::Animator*, ::g::Fuse::Animations::CreateStateParams*, ::g::Fuse::Animations::AnimatorState**))Nothing__CreateState_fn;
    return type;
}

// public generated Nothing() :10
void Nothing__ctor_3_fn(Nothing* __this)
{
    __this->ctor_3();
}

// internal override sealed Fuse.Animations.AnimatorState CreateState(Fuse.Animations.CreateStateParams p) :12
void Nothing__CreateState_fn(Nothing* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval)
{
    return *__retval = ::g::Fuse::Animations::NothingAnimatorState::New1(__this, p), void();
}

// public generated Nothing New() :10
void Nothing__New2_fn(Nothing** __retval)
{
    *__retval = Nothing::New2();
}

// public generated Nothing() [instance] :10
void Nothing::ctor_3()
{
    ctor_2();
}

// public generated Nothing New() [static] :10
Nothing* Nothing::New2()
{
    Nothing* obj1 = (Nothing*)uNew(Nothing_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Nothing.uno
// ---------------------------------------------------------------

// internal sealed class NothingAnimatorState :18
// {
static void NothingAnimatorState_build(uType* type)
{
    type->SetFields(6);
}

::g::Fuse::Animations::TrackAnimatorState_type* NothingAnimatorState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TrackAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::TrackAnimatorState_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(NothingAnimatorState);
    options.TypeSize = sizeof(::g::Fuse::Animations::TrackAnimatorState_type);
    type = (::g::Fuse::Animations::TrackAnimatorState_type*)uClassType::New("Fuse.Animations.NothingAnimatorState", options);
    type->fp_build_ = NothingAnimatorState_build;
    return type;
}

// public NothingAnimatorState(Fuse.Animations.Nothing animator, Fuse.Animations.CreateStateParams p) :20
void NothingAnimatorState__ctor_2_fn(NothingAnimatorState* __this, ::g::Fuse::Animations::Nothing* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(animator, p);
}

// public NothingAnimatorState New(Fuse.Animations.Nothing animator, Fuse.Animations.CreateStateParams p) :20
void NothingAnimatorState__New1_fn(::g::Fuse::Animations::Nothing* animator, ::g::Fuse::Animations::CreateStateParams* p, NothingAnimatorState** __retval)
{
    *__retval = NothingAnimatorState::New1(animator, p);
}

// public NothingAnimatorState(Fuse.Animations.Nothing animator, Fuse.Animations.CreateStateParams p) [instance] :20
void NothingAnimatorState::ctor_2(::g::Fuse::Animations::Nothing* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    ctor_1(animator, p, NULL);
}

// public NothingAnimatorState New(Fuse.Animations.Nothing animator, Fuse.Animations.CreateStateParams p) [static] :20
NothingAnimatorState* NothingAnimatorState::New1(::g::Fuse::Animations::Nothing* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    NothingAnimatorState* obj1 = (NothingAnimatorState*)uNew(NothingAnimatorState_typeof());
    obj1->ctor_2(animator, p);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/OpenAnimator.uno
// --------------------------------------------------------------------

// public abstract class OpenAnimator :14
// {
static void OpenAnimator_build(uType* type)
{
    type->SetFields(4,
        ::g::Uno::Double_typeof(), offsetof(OpenAnimator, _duration), 0,
        ::g::Uno::Bool_typeof(), offsetof(OpenAnimator, _hasDuration), 0);
}

::g::Fuse::Animations::Animator_type* OpenAnimator_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Animator_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(OpenAnimator);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.OpenAnimator", options);
    type->fp_build_ = OpenAnimator_build;
    type->fp_get_AnimatorVariant = (void(*)(::g::Fuse::Animations::Animator*, int*))OpenAnimator__get_AnimatorVariant_fn;
    type->fp_GetDurationWithDelay = (void(*)(::g::Fuse::Animations::Animator*, int*, double*))OpenAnimator__GetDurationWithDelay_fn;
    return type;
}

// internal override sealed Fuse.Animations.AnimatorVariant get_AnimatorVariant() :18
void OpenAnimator__get_AnimatorVariant_fn(OpenAnimator* __this, int* __retval)
{
    return *__retval = 1, void();
}

// public double get_Duration() :29
void OpenAnimator__get_Duration_fn(OpenAnimator* __this, double* __retval)
{
    *__retval = __this->Duration();
}

// public void set_Duration(double value) :30
void OpenAnimator__set_Duration_fn(OpenAnimator* __this, double* value)
{
    __this->Duration(*value);
}

// internal double GetDelay(Fuse.Animations.AnimationVariant dir, double totalDuration) :51
void OpenAnimator__GetDelay_fn(OpenAnimator* __this, int* dir, double* totalDuration, double* __retval)
{
    *__retval = __this->GetDelay(*dir, *totalDuration);
}

// internal override sealed double GetDurationWithDelay(Fuse.Animations.AnimationVariant dir) :46
void OpenAnimator__GetDurationWithDelay_fn(OpenAnimator* __this, int* dir, double* __retval)
{
    return *__retval = __this->Delay() + __this->Duration(), void();
}

// public bool get_HasDuration() :44
void OpenAnimator__get_HasDuration_fn(OpenAnimator* __this, bool* __retval)
{
    *__retval = __this->HasDuration();
}

// public double get_Duration() [instance] :29
double OpenAnimator::Duration()
{
    return _duration;
}

// public void set_Duration(double value) [instance] :30
void OpenAnimator::Duration(double value)
{
    _duration = value;
    _hasDuration = true;
}

// internal double GetDelay(Fuse.Animations.AnimationVariant dir, double totalDuration) [instance] :51
double OpenAnimator::GetDelay(int dir, double totalDuration)
{
    return Delay();
}

// public bool get_HasDuration() [instance] :44
bool OpenAnimator::HasDuration()
{
    return _hasDuration;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/OpenAnimator.uno
// --------------------------------------------------------------------

// internal abstract class OpenAnimatorState :57
// {
static void OpenAnimatorState_build(uType* type)
{
    type->SetFields(3,
        ::g::Uno::Bool_typeof(), offsetof(OpenAnimatorState, _seekDone), 0,
        ::g::Fuse::Animations::OpenAnimator_typeof(), offsetof(OpenAnimatorState, Animator), 0);
}

OpenAnimatorState_type* OpenAnimatorState_typeof()
{
    static uSStrong<OpenAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::AnimatorState_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(OpenAnimatorState);
    options.TypeSize = sizeof(OpenAnimatorState_type);
    type = (OpenAnimatorState_type*)uClassType::New("Fuse.Animations.OpenAnimatorState", options);
    type->fp_build_ = OpenAnimatorState_build;
    type->fp_SeekProgress = (void(*)(::g::Fuse::Animations::AnimatorState*, double*, double*, int*, double*, int*))OpenAnimatorState__SeekProgress_fn;
    type->fp_SeekTime = (void(*)(::g::Fuse::Animations::AnimatorState*, double*, double*, int*, double*, int*))OpenAnimatorState__SeekTime_fn;
    return type;
}

// protected OpenAnimatorState(Fuse.Animations.OpenAnimator animator, Fuse.Animations.CreateStateParams p, [Fuse.Visual useVisual]) :62
void OpenAnimatorState__ctor_1_fn(OpenAnimatorState* __this, ::g::Fuse::Animations::OpenAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Visual* useVisual)
{
    __this->ctor_1(animator, p, useVisual);
}

// internal override sealed Fuse.Animations.SeekResult SeekProgress(double progress, double interval, Fuse.Animations.SeekDirection dir, double strength) :71
void OpenAnimatorState__SeekProgress_fn(OpenAnimatorState* __this, double* progress, double* interval, int* dir, double* strength, int* __retval)
{
    double progress_ = *progress;
    double interval_ = *interval;
    int dir_ = *dir;
    double strength_ = *strength;
    return *__retval = __this->SeekTime(progress_ * __this->TotalDuration, interval_, dir_, strength_), void();
}

// internal override sealed Fuse.Animations.SeekResult SeekTime(double nominal, double interval, Fuse.Animations.SeekDirection dir, double strength) :77
void OpenAnimatorState__SeekTime_fn(OpenAnimatorState* __this, double* nominal, double* interval, int* dir, double* strength, int* __retval)
{
    int dir_ = *dir;
    double nominal_ = *nominal;
    double interval_ = *interval;
    double strength_ = *strength;
    double delay = uPtr(__this->Animator)->GetDelay(__this->Variant, __this->TotalDuration);
    float zeroTolerance = 1e-05f;
    bool on = (dir_ == 0) ? nominal_ > (delay - 9.9999997473787516e-06) : nominal_ > (delay + 9.9999997473787516e-06);

    if (uPtr(__this->Animator)->HasDuration() && (nominal_ > ((delay + uPtr(__this->Animator)->Duration()) - 9.9999997473787516e-06)))
        on = false;

    bool mayEnd = (dir_ == 0) ? nominal_ >= (uPtr(__this->Animator)->GetDurationWithDelay(__this->Variant) - 9.9999997473787516e-06) : nominal_ <= (delay + 9.9999997473787516e-06);

    if (on || !__this->_seekDone)
        __this->_seekDone = __this->Seek(on, (float)interval_, (float)strength_, dir_);

    return *__retval = (__this->_seekDone ? 2 : 0) | ((mayEnd && __this->_seekDone) ? 1 : 0), void();
}

// protected OpenAnimatorState(Fuse.Animations.OpenAnimator animator, Fuse.Animations.CreateStateParams p, [Fuse.Visual useVisual]) [instance] :62
void OpenAnimatorState::ctor_1(::g::Fuse::Animations::OpenAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Visual* useVisual)
{
    _seekDone = true;
    ctor_(p, useVisual);
    Animator = animator;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Player.uno
// --------------------------------------------------------------

// internal sealed class Player :174
// {
static void Player_build(uType* type)
{
    ::TYPES[24] = ::g::Fuse::Animations::IPlayerFeedback_typeof();
    ::TYPES[25] = ::g::Fuse::Animations::IBasePlayerFeedback_typeof();
    type->SetInterfaces(
        ::g::Fuse::IUpdateListener_typeof(), offsetof(Player_type, interface0));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(Player, _allStable), 0,
        ::g::Uno::Bool_typeof(), offsetof(Player, _isDone), 0,
        ::g::Uno::Bool_typeof(), offsetof(Player, _isStarted), 0,
        ::g::Fuse::Animations::PlayerPart_typeof(), offsetof(Player, _progress), 0,
        ::g::Fuse::Animations::SeekDirection_typeof(), offsetof(Player, _seekDirection), 0,
        ::g::Fuse::Animations::AnimatorState_typeof()->Array(), offsetof(Player, _states), 0,
        ::g::Fuse::Animations::PlayerPart_typeof(), offsetof(Player, _strength), 0,
        ::TYPES[24/*Fuse.Animations.IPlayerFeedback*/], offsetof(Player, Feedback), 0,
        ::g::Fuse::Animations::TriggerAnimation_typeof(), offsetof(Player, _Animation), 0,
        ::g::Fuse::Animations::PlayMode_typeof(), offsetof(Player, _Mode), 0,
        ::g::Fuse::Animations::AnimationVariant_typeof(), offsetof(Player, _Variant), 0,
        ::g::Fuse::Visual_typeof(), offsetof(Player, _Visual), 0);
}

Player_type* Player_typeof()
{
    static uSStrong<Player_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Player);
    options.TypeSize = sizeof(Player_type);
    type = (Player_type*)uClassType::New("Fuse.Animations.Player", options);
    type->fp_build_ = Player_build;
    type->interface0.fp_Update = (void(*)(uObject*))Player__FuseIUpdateListenerUpdate_fn;
    return type;
}

// public Player(Fuse.Visual elm, Fuse.Animations.TriggerAnimation animation, Fuse.Animations.AnimationVariant variant, Fuse.Animations.PlayMode mode) :196
void Player__ctor__fn(Player* __this, ::g::Fuse::Visual* elm, ::g::Fuse::Animations::TriggerAnimation* animation, int* variant, int* mode)
{
    __this->ctor_(elm, animation, *variant, *mode);
}

// public generated Fuse.Animations.TriggerAnimation get_Animation() :179
void Player__get_Animation_fn(Player* __this, ::g::Fuse::Animations::TriggerAnimation** __retval)
{
    *__retval = __this->Animation();
}

// private generated void set_Animation(Fuse.Animations.TriggerAnimation value) :179
void Player__set_Animation_fn(Player* __this, ::g::Fuse::Animations::TriggerAnimation* value)
{
    __this->Animation(value);
}

// public double get_AnimatorsDuration() :212
void Player__get_AnimatorsDuration_fn(Player* __this, double* __retval)
{
    *__retval = __this->AnimatorsDuration();
}

// private void CheckUpdate([bool interval]) :218
void Player__CheckUpdate_fn(Player* __this, bool* interval)
{
    __this->CheckUpdate(*interval);
}

// public void Disable() :313
void Player__Disable_fn(Player* __this)
{
    __this->Disable();
}

// private void Done() :298
void Player__Done_fn(Player* __this)
{
    __this->Done();
}

// public void FadeIn(double time) :428
void Player__FadeIn_fn(Player* __this, double* time)
{
    __this->FadeIn(*time);
}

// public void FadeOut(double time) :435
void Player__FadeOut_fn(Player* __this, double* time)
{
    __this->FadeOut(*time);
}

// private void Fuse.IUpdateListener.Update() :214
void Player__FuseIUpdateListenerUpdate_fn(Player* __this)
{
    __this->CheckUpdate(true);
}

// public bool get_IsStable() :265
void Player__get_IsStable_fn(Player* __this, bool* __retval)
{
    *__retval = __this->IsStable();
}

// internal bool get_IsSyncState() :354
void Player__get_IsSyncState_fn(Player* __this, bool* __retval)
{
    *__retval = __this->IsSyncState();
}

// public generated Fuse.Animations.PlayMode get_Mode() :181
void Player__get_Mode_fn(Player* __this, int* __retval)
{
    *__retval = __this->Mode();
}

// private generated void set_Mode(Fuse.Animations.PlayMode value) :181
void Player__set_Mode_fn(Player* __this, int* value)
{
    __this->Mode(*value);
}

// public Player New(Fuse.Visual elm, Fuse.Animations.TriggerAnimation animation, Fuse.Animations.AnimationVariant variant, Fuse.Animations.PlayMode mode) :196
void Player__New1_fn(::g::Fuse::Visual* elm, ::g::Fuse::Animations::TriggerAnimation* animation, int* variant, int* mode, Player** __retval)
{
    *__retval = Player::New1(elm, animation, *variant, *mode);
}

// public void PlayToEnd() :400
void Player__PlayToEnd_fn(Player* __this)
{
    __this->PlayToEnd();
}

// public void PlayToProgress(double progress) :391
void Player__PlayToProgress_fn(Player* __this, double* progress)
{
    __this->PlayToProgress(*progress);
}

// public void PlayToStart() :408
void Player__PlayToStart_fn(Player* __this)
{
    __this->PlayToStart();
}

// public double get_Progress() :327
void Player__get_Progress_fn(Player* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public double get_RemainTime() :331
void Player__get_RemainTime_fn(Player* __this, double* __retval)
{
    *__retval = __this->RemainTime();
}

// public void SeekProgress(double progress, [bool triggerUpdate]) :342
void Player__SeekProgress_fn(Player* __this, double* progress, bool* triggerUpdate)
{
    __this->SeekProgress(*progress, *triggerUpdate);
}

// private void Start() :270
void Player__Start_fn(Player* __this)
{
    __this->Start();
}

// private Fuse.Animations.AnimatorState[] get_States() :186
void Player__get_States_fn(Player* __this, uArray** __retval)
{
    *__retval = __this->States();
}

// private void Stop() :279
void Player__Stop_fn(Player* __this)
{
    __this->Stop();
}

// public double get_Strength() :420
void Player__get_Strength_fn(Player* __this, double* __retval)
{
    *__retval = __this->Strength();
}

// public void set_Strength(double value) :421
void Player__set_Strength_fn(Player* __this, double* value)
{
    __this->Strength(*value);
}

// public void TimeChanged() :206
void Player__TimeChanged_fn(Player* __this)
{
    __this->TimeChanged();
}

// private bool UpdateStates(bool isInterval) :360
void Player__UpdateStates_fn(Player* __this, bool* isInterval, bool* __retval)
{
    *__retval = __this->UpdateStates(*isInterval);
}

// public generated Fuse.Animations.AnimationVariant get_Variant() :180
void Player__get_Variant_fn(Player* __this, int* __retval)
{
    *__retval = __this->Variant();
}

// public generated void set_Variant(Fuse.Animations.AnimationVariant value) :180
void Player__set_Variant_fn(Player* __this, int* value)
{
    __this->Variant(*value);
}

// public generated Fuse.Visual get_Visual() :178
void Player__get_Visual_fn(Player* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Visual();
}

// private generated void set_Visual(Fuse.Visual value) :178
void Player__set_Visual_fn(Player* __this, ::g::Fuse::Visual* value)
{
    __this->Visual(value);
}

// public Player(Fuse.Visual elm, Fuse.Animations.TriggerAnimation animation, Fuse.Animations.AnimationVariant variant, Fuse.Animations.PlayMode mode) [instance] :196
void Player::ctor_(::g::Fuse::Visual* elm, ::g::Fuse::Animations::TriggerAnimation* animation, int variant, int mode)
{
    _allStable = true;
    _progress = ::g::Fuse::Animations::PlayerPart::New1(0.0);
    _seekDirection = 1;
    _strength = ::g::Fuse::Animations::PlayerPart::New1(1.0);
    Animation(animation);
    Visual(elm);
    Variant(variant);
    Mode(mode);
    TimeChanged();
}

// public generated Fuse.Animations.TriggerAnimation get_Animation() [instance] :179
::g::Fuse::Animations::TriggerAnimation* Player::Animation()
{
    return _Animation;
}

// private generated void set_Animation(Fuse.Animations.TriggerAnimation value) [instance] :179
void Player::Animation(::g::Fuse::Animations::TriggerAnimation* value)
{
    _Animation = value;
}

// public double get_AnimatorsDuration() [instance] :212
double Player::AnimatorsDuration()
{
    return uPtr(_progress)->Duration;
}

// private void CheckUpdate([bool interval]) [instance] :218
void Player::CheckUpdate(bool interval)
{
    bool running = false;

    if (uPtr(_progress)->Animate)
    {
        bool wrapped = (Mode() == 1) ? uPtr(_progress)->WrapStep() : uPtr(_progress)->Step();

        if (Feedback != NULL)
            ::g::Fuse::Animations::IPlayerFeedback::OnProgressUpdated(uInterface(uPtr(Feedback), ::TYPES[24/*Fuse.Animations.IPlayerFeedback*/]), this, (wrapped ? 1 : 0) | 2);

        running = running || (uPtr(_progress)->IsProgress ? uPtr(_progress)->Animate : true);
    }

    if (uPtr(_strength)->Animate)
    {
        uPtr(_strength)->Step();
        running = running || (uPtr(_strength)->IsProgress ? uPtr(_strength)->Animate : true);
    }

    bool stable = UpdateStates(interval);

    if (stable && !running)
        Stop();
    else
        Start();

    if (!running)
        Done();

    if (stable != _allStable)
    {
        _allStable = stable;

        if ((Feedback != NULL) && stable)
            ::g::Fuse::Animations::IBasePlayerFeedback::OnStable(uInterface(uPtr(Feedback), ::TYPES[25/*Fuse.Animations.IBasePlayerFeedback*/]), this);
    }
}

// public void Disable() [instance] :313
void Player::Disable()
{
    Stop();

    if (_states != NULL)
    {
        for (int i = 0; i < uPtr(_states)->Length(); i++)
            uPtr(uPtr(_states)->Strong< ::g::Fuse::Animations::AnimatorState*>(i))->Disable();

        _states = NULL;
    }
}

// private void Done() [instance] :298
void Player::Done()
{
    uPtr(_progress)->Animate = false;
    uPtr(_strength)->Animate = false;

    if (!_isDone)
    {
        _isDone = true;

        if (Feedback != NULL)
            ::g::Fuse::Animations::IBasePlayerFeedback::OnPlaybackDone(uInterface(uPtr(Feedback), ::TYPES[25/*Fuse.Animations.IBasePlayerFeedback*/]), this);
    }
}

// public void FadeIn(double time) [instance] :428
void Player::FadeIn(double time)
{
    uPtr(_strength)->AlterDuration(time, 1.0);
    uPtr(_strength)->PlayToEnd();
    CheckUpdate(false);
}

// public void FadeOut(double time) [instance] :435
void Player::FadeOut(double time)
{
    uPtr(_strength)->AlterDuration(time, 1.0);
    uPtr(_strength)->PlayToStart();
    CheckUpdate(false);
}

// public bool get_IsStable() [instance] :265
bool Player::IsStable()
{
    return _allStable;
}

// internal bool get_IsSyncState() [instance] :354
bool Player::IsSyncState()
{
    return (uPtr(_progress)->Current == 0.0) || (uPtr(_progress)->Progress() == 1.0);
}

// public generated Fuse.Animations.PlayMode get_Mode() [instance] :181
int Player::Mode()
{
    return _Mode;
}

// private generated void set_Mode(Fuse.Animations.PlayMode value) [instance] :181
void Player::Mode(int value)
{
    _Mode = value;
}

// public void PlayToEnd() [instance] :400
void Player::PlayToEnd()
{
    _seekDirection = 0;
    uPtr(_progress)->PlayToEnd();
    _isDone = false;
    CheckUpdate(false);
}

// public void PlayToProgress(double progress) [instance] :391
void Player::PlayToProgress(double progress)
{
    if (progress != uPtr(_progress)->Progress())
        _seekDirection = ((progress > uPtr(_progress)->Progress()) ? 0 : 1);

    uPtr(_progress)->PlayToProgress(progress);
    _isDone = false;
    CheckUpdate(false);
}

// public void PlayToStart() [instance] :408
void Player::PlayToStart()
{
    _seekDirection = 1;
    uPtr(_progress)->PlayToStart();
    _isDone = false;
    CheckUpdate(false);
}

// public double get_Progress() [instance] :327
double Player::Progress()
{
    return uPtr(_progress)->Progress();
}

// public double get_RemainTime() [instance] :331
double Player::RemainTime()
{
    float zeroTolerance = 1e-05f;

    if (uPtr(_progress)->IsProgress || (uPtr(_progress)->Duration < 9.9999997473787516e-06))
        return 0.0;

    return (Variant() == 0) ? uPtr(_progress)->Duration - uPtr(_progress)->Current : uPtr(_progress)->Current;
}

// public void SeekProgress(double progress, [bool triggerUpdate]) [instance] :342
void Player::SeekProgress(double progress, bool triggerUpdate)
{
    uPtr(_progress)->SeekProgress(progress);
    _isDone = true;
    CheckUpdate(false);

    if (triggerUpdate && (Feedback != NULL))
        ::g::Fuse::Animations::IPlayerFeedback::OnProgressUpdated(uInterface(uPtr(Feedback), ::TYPES[24/*Fuse.Animations.IPlayerFeedback*/]), this, 0);
}

// private void Start() [instance] :270
void Player::Start()
{
    if (!_isStarted)
    {
        _isStarted = true;
        ::g::Fuse::UpdateManager::AddAction((uObject*)this, 0);
    }
}

// private Fuse.Animations.AnimatorState[] get_States() [instance] :186
uArray* Player::States()
{
    if (_states == NULL)
        _states = uPtr(Animation())->CreateAnimatorsState(Variant(), Visual());

    return _states;
}

// private void Stop() [instance] :279
void Player::Stop()
{
    if (_isStarted)
    {
        _isStarted = false;
        ::g::Fuse::UpdateManager::RemoveAction((uObject*)this, 0);
    }
}

// public double get_Strength() [instance] :420
double Player::Strength()
{
    return uPtr(_strength)->Progress();
}

// public void set_Strength(double value) [instance] :421
void Player::Strength(double value)
{
    uPtr(_strength)->SeekProgress(value);
    CheckUpdate(false);
}

// public void TimeChanged() [instance] :206
void Player::TimeChanged()
{
    uPtr(_progress)->AlterDuration(uPtr(Animation())->GetAnimatorsDuration(Variant()), uPtr(Animation())->GetTimeMultiplier(Variant()));
}

// private bool UpdateStates(bool isInterval) [instance] :360
bool Player::UpdateStates(bool isInterval)
{
    bool allStable = true;
    double interval = isInterval ? ::g::Fuse::Time::FrameInterval() * uPtr(_progress)->TimeMultiplier() : 0.0;

    if (_seekDirection == 1)
        interval = -interval;

    for (int i = 0; i < uPtr(States())->Length(); ++i)
    {
        ::g::Fuse::Animations::AnimatorState* s = uPtr(States())->Strong< ::g::Fuse::Animations::AnimatorState*>(i);
        int stable;

        if (uPtr(_progress)->IsProgress)
            stable = uPtr(s)->SeekProgress(uPtr(_progress)->Current, interval, _seekDirection, uPtr(_strength)->Progress());
        else
            stable = uPtr(s)->SeekTime(uPtr(_progress)->Current, interval, _seekDirection, uPtr(_strength)->Progress());

        allStable = allStable && ((stable & 2) == 2);
    }

    return allStable;
}

// public generated Fuse.Animations.AnimationVariant get_Variant() [instance] :180
int Player::Variant()
{
    return _Variant;
}

// public generated void set_Variant(Fuse.Animations.AnimationVariant value) [instance] :180
void Player::Variant(int value)
{
    _Variant = value;
}

// public generated Fuse.Visual get_Visual() [instance] :178
::g::Fuse::Visual* Player::Visual()
{
    return _Visual;
}

// private generated void set_Visual(Fuse.Visual value) [instance] :178
void Player::Visual(::g::Fuse::Visual* value)
{
    _Visual = value;
}

// public Player New(Fuse.Visual elm, Fuse.Animations.TriggerAnimation animation, Fuse.Animations.AnimationVariant variant, Fuse.Animations.PlayMode mode) [static] :196
Player* Player::New1(::g::Fuse::Visual* elm, ::g::Fuse::Animations::TriggerAnimation* animation, int variant, int mode)
{
    Player* obj1 = (Player*)uNew(Player_typeof());
    obj1->ctor_(elm, animation, variant, mode);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/TriggerAnimation.uno
// ------------------------------------------------------------------------

// internal enum PlayerFeedbackFlags :212
uEnumType* PlayerFeedbackFlags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.PlayerFeedbackFlags", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "Wrapped", 1LL,
        "Animated", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Player.uno
// --------------------------------------------------------------

// internal sealed class PlayerPart :14
// {
static void PlayerPart_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Double_typeof(), offsetof(PlayerPart, _stepTime), 0,
        ::g::Uno::Double_typeof(), offsetof(PlayerPart, _timeMultiplier), 0,
        ::g::Uno::Bool_typeof(), offsetof(PlayerPart, Animate), 0,
        ::g::Uno::Double_typeof(), offsetof(PlayerPart, Current), 0,
        ::g::Uno::Double_typeof(), offsetof(PlayerPart, Duration), 0,
        ::g::Uno::Bool_typeof(), offsetof(PlayerPart, IsProgress), 0,
        ::g::Uno::Double_typeof(), offsetof(PlayerPart, Source), 0,
        ::g::Uno::Double_typeof(), offsetof(PlayerPart, SourceTime), 0,
        ::g::Uno::Double_typeof(), offsetof(PlayerPart, Target), 0);
}

uType* PlayerPart_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(PlayerPart);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Animations.PlayerPart", options);
    type->fp_build_ = PlayerPart_build;
    return type;
}

// public PlayerPart([double currentProgress]) :26
void PlayerPart__ctor__fn(PlayerPart* __this, double* currentProgress)
{
    __this->ctor_(*currentProgress);
}

// public void AlterDuration(double t, double timeMult) :162
void PlayerPart__AlterDuration_fn(PlayerPart* __this, double* t, double* timeMult)
{
    __this->AlterDuration(*t, *timeMult);
}

// private void MarkSource(bool isAnimating) :58
void PlayerPart__MarkSource_fn(PlayerPart* __this, bool* isAnimating)
{
    __this->MarkSource(*isAnimating);
}

// public PlayerPart New([double currentProgress]) :26
void PlayerPart__New1_fn(double* currentProgress, PlayerPart** __retval)
{
    *__retval = PlayerPart::New1(*currentProgress);
}

// public void PlayToEnd() :70
void PlayerPart__PlayToEnd_fn(PlayerPart* __this)
{
    __this->PlayToEnd();
}

// public void PlayToProgress(double progress) :32
void PlayerPart__PlayToProgress_fn(PlayerPart* __this, double* progress)
{
    __this->PlayToProgress(*progress);
}

// public void PlayToStart() :75
void PlayerPart__PlayToStart_fn(PlayerPart* __this)
{
    __this->PlayToStart();
}

// public double get_Progress() :152
void PlayerPart__get_Progress_fn(PlayerPart* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public void SeekProgress(double p) :134
void PlayerPart__SeekProgress_fn(PlayerPart* __this, double* p)
{
    __this->SeekProgress(*p);
}

// public bool Step() :81
void PlayerPart__Step_fn(PlayerPart* __this, bool* __retval)
{
    *__retval = __this->Step();
}

// public double get_TimeMultiplier() :171
void PlayerPart__get_TimeMultiplier_fn(PlayerPart* __this, double* __retval)
{
    *__retval = __this->TimeMultiplier();
}

// public bool WrapStep() :105
void PlayerPart__WrapStep_fn(PlayerPart* __this, bool* __retval)
{
    *__retval = __this->WrapStep();
}

// public PlayerPart([double currentProgress]) [instance] :26
void PlayerPart::ctor_(double currentProgress)
{
    _timeMultiplier = 1.0;
    IsProgress = true;
    Current = currentProgress;
}

// public void AlterDuration(double t, double timeMult) [instance] :162
void PlayerPart::AlterDuration(double t, double timeMult)
{
    _timeMultiplier = timeMult;
    MarkSource(Animate);
    double p = Progress();
    Duration = t;
    SeekProgress(p);
}

// private void MarkSource(bool isAnimating) [instance] :58
void PlayerPart::MarkSource(bool isAnimating)
{
    Source = Current;

    if (isAnimating && (_stepTime < ::g::Fuse::Time::FrameTime()))
        SourceTime = (::g::Fuse::Time::FrameTime() - (::g::Fuse::Time::FrameInterval() * _timeMultiplier));
    else
        SourceTime = ::g::Fuse::Time::FrameTime();
}

// public void PlayToEnd() [instance] :70
void PlayerPart::PlayToEnd()
{
    PlayToProgress(1.0);
}

// public void PlayToProgress(double progress) [instance] :32
void PlayerPart::PlayToProgress(double progress)
{
    bool nIsProgress;
    double nTarget;

    if (Duration < 9.9999997473787516e-06)
    {
        nIsProgress = true;
        nTarget = progress;
    }
    else
    {
        nIsProgress = false;
        nTarget = progress * Duration;
    }

    if (((nIsProgress == IsProgress) && (nTarget == Target)) && Animate)
        return;

    MarkSource(Animate);
    Animate = true;
    IsProgress = nIsProgress;
    Target = nTarget;
}

// public void PlayToStart() [instance] :75
void PlayerPart::PlayToStart()
{
    PlayToProgress(0.0);
}

// public double get_Progress() [instance] :152
double PlayerPart::Progress()
{
    if (IsProgress)
        return Current;
    else
        return ::g::Uno::Math::Clamp(Current / Duration, 0.0, 1.0);
}

// public void SeekProgress(double p) [instance] :134
void PlayerPart::SeekProgress(double p)
{
    p = ::g::Uno::Math::Clamp(p, 0.0, 1.0);
    Animate = false;

    if (Duration < 9.9999997473787516e-06)
    {
        IsProgress = true;
        Current = p;
    }
    else
    {
        IsProgress = false;
        Current = (p * Duration);
    }
}

// public bool Step() [instance] :81
bool PlayerPart::Step()
{
    _stepTime = ::g::Fuse::Time::FrameTime();
    double elapsed = (::g::Fuse::Time::FrameTime() - SourceTime) * _timeMultiplier;

    if (Target > Source)
        Current = (IsProgress ? 1.0 : ::g::Uno::Math::Min(elapsed + Source, Duration));
    else
        Current = (IsProgress ? 0.0 : ::g::Uno::Math::Max(Source - elapsed, 0.0));

    if (((Target >= Source) && (Current >= Target)) || ((Target <= Source) && (Current <= Target)))
    {
        Current = Target;
        Animate = false;
    }

    return false;
}

// public double get_TimeMultiplier() [instance] :171
double PlayerPart::TimeMultiplier()
{
    return _timeMultiplier;
}

// public bool WrapStep() [instance] :105
bool PlayerPart::WrapStep()
{
    if (IsProgress || ((Target > 0.0) && (Target < 1.0)))
        return Step();

    _stepTime = ::g::Fuse::Time::FrameTime();
    double elapsed = (::g::Fuse::Time::FrameTime() - SourceTime) * _timeMultiplier;

    if (elapsed == 0.0)
        return false;

    Current = ((Target > Source) ? elapsed + Source : Source - elapsed);
    bool wrap = false;

    if ((Current >= Duration) || (Current < 0.0))
    {
        double loops = ::g::Uno::Math::Abs(::g::Uno::Math::Floor(Current / Duration));
        Current = ::g::Uno::Math::Mod(Current, Duration);
        SourceTime = (SourceTime + ((Duration * loops) / _timeMultiplier));
        wrap = true;
    }

    return wrap;
}

// public PlayerPart New([double currentProgress]) [static] :26
PlayerPart* PlayerPart::New1(double currentProgress)
{
    PlayerPart* obj1 = (PlayerPart*)uNew(PlayerPart_typeof());
    obj1->ctor_(currentProgress);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/TriggerAnimation.uno
// ------------------------------------------------------------------------

// public enum PlayMode :14
uEnumType* PlayMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.PlayMode", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Once", 0LL,
        "Wrap", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Easing.uno
// ----------------------------------------------------------

// internal sealed class Easing.QuadraticInImpl :68
// {
static void Easing__QuadraticInImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__QuadraticInImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__QuadraticInImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.QuadraticInImpl", options);
    type->fp_build_ = Easing__QuadraticInImpl_build;
    type->fp_ctor_ = (void*)Easing__QuadraticInImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__QuadraticInImpl__Map_fn;
    return type;
}

// public generated QuadraticInImpl() :68
void Easing__QuadraticInImpl__ctor_1_fn(Easing__QuadraticInImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :70
void Easing__QuadraticInImpl__Map_fn(Easing__QuadraticInImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    return *__retval = k_ * k_, void();
}

// public generated QuadraticInImpl New() :68
void Easing__QuadraticInImpl__New1_fn(Easing__QuadraticInImpl** __retval)
{
    *__retval = Easing__QuadraticInImpl::New1();
}

// public generated QuadraticInImpl() [instance] :68
void Easing__QuadraticInImpl::ctor_1()
{
    ctor_();
}

// public generated QuadraticInImpl New() [static] :68
Easing__QuadraticInImpl* Easing__QuadraticInImpl::New1()
{
    Easing__QuadraticInImpl* obj1 = (Easing__QuadraticInImpl*)uNew(Easing__QuadraticInImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Easing.uno
// ----------------------------------------------------------

// internal sealed class Easing.QuadraticInOutImpl :84
// {
static void Easing__QuadraticInOutImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__QuadraticInOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__QuadraticInOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.QuadraticInOutImpl", options);
    type->fp_build_ = Easing__QuadraticInOutImpl_build;
    type->fp_ctor_ = (void*)Easing__QuadraticInOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__QuadraticInOutImpl__Map_fn;
    return type;
}

// public generated QuadraticInOutImpl() :84
void Easing__QuadraticInOutImpl__ctor_1_fn(Easing__QuadraticInOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :86
void Easing__QuadraticInOutImpl__Map_fn(Easing__QuadraticInOutImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    k_ = k_ * 2.0;

    if (k_ < 1.0)
        return *__retval = (0.5 * k_) * k_, void();

    k_ = k_ - 1.0;
    return *__retval = -0.5 * ((k_ * (k_ - 2.0)) - 1.0), void();
}

// public generated QuadraticInOutImpl New() :84
void Easing__QuadraticInOutImpl__New1_fn(Easing__QuadraticInOutImpl** __retval)
{
    *__retval = Easing__QuadraticInOutImpl::New1();
}

// public generated QuadraticInOutImpl() [instance] :84
void Easing__QuadraticInOutImpl::ctor_1()
{
    ctor_();
}

// public generated QuadraticInOutImpl New() [static] :84
Easing__QuadraticInOutImpl* Easing__QuadraticInOutImpl::New1()
{
    Easing__QuadraticInOutImpl* obj1 = (Easing__QuadraticInOutImpl*)uNew(Easing__QuadraticInOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Easing.uno
// ----------------------------------------------------------

// internal sealed class Easing.QuadraticOutImpl :76
// {
static void Easing__QuadraticOutImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__QuadraticOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__QuadraticOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.QuadraticOutImpl", options);
    type->fp_build_ = Easing__QuadraticOutImpl_build;
    type->fp_ctor_ = (void*)Easing__QuadraticOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__QuadraticOutImpl__Map_fn;
    return type;
}

// public generated QuadraticOutImpl() :76
void Easing__QuadraticOutImpl__ctor_1_fn(Easing__QuadraticOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :78
void Easing__QuadraticOutImpl__Map_fn(Easing__QuadraticOutImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    return *__retval = k_ * (2.0 - k_), void();
}

// public generated QuadraticOutImpl New() :76
void Easing__QuadraticOutImpl__New1_fn(Easing__QuadraticOutImpl** __retval)
{
    *__retval = Easing__QuadraticOutImpl::New1();
}

// public generated QuadraticOutImpl() [instance] :76
void Easing__QuadraticOutImpl::ctor_1()
{
    ctor_();
}

// public generated QuadraticOutImpl New() [static] :76
Easing__QuadraticOutImpl* Easing__QuadraticOutImpl::New1()
{
    Easing__QuadraticOutImpl* obj1 = (Easing__QuadraticOutImpl*)uNew(Easing__QuadraticOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Easing.uno
// ----------------------------------------------------------

// internal sealed class Easing.QuarticInImpl :129
// {
static void Easing__QuarticInImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__QuarticInImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__QuarticInImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.QuarticInImpl", options);
    type->fp_build_ = Easing__QuarticInImpl_build;
    type->fp_ctor_ = (void*)Easing__QuarticInImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__QuarticInImpl__Map_fn;
    return type;
}

// public generated QuarticInImpl() :129
void Easing__QuarticInImpl__ctor_1_fn(Easing__QuarticInImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :131
void Easing__QuarticInImpl__Map_fn(Easing__QuarticInImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    return *__retval = ((k_ * k_) * k_) * k_, void();
}

// public generated QuarticInImpl New() :129
void Easing__QuarticInImpl__New1_fn(Easing__QuarticInImpl** __retval)
{
    *__retval = Easing__QuarticInImpl::New1();
}

// public generated QuarticInImpl() [instance] :129
void Easing__QuarticInImpl::ctor_1()
{
    ctor_();
}

// public generated QuarticInImpl New() [static] :129
Easing__QuarticInImpl* Easing__QuarticInImpl::New1()
{
    Easing__QuarticInImpl* obj1 = (Easing__QuarticInImpl*)uNew(Easing__QuarticInImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Easing.uno
// ----------------------------------------------------------

// internal sealed class Easing.QuarticInOutImpl :146
// {
static void Easing__QuarticInOutImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__QuarticInOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__QuarticInOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.QuarticInOutImpl", options);
    type->fp_build_ = Easing__QuarticInOutImpl_build;
    type->fp_ctor_ = (void*)Easing__QuarticInOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__QuarticInOutImpl__Map_fn;
    return type;
}

// public generated QuarticInOutImpl() :146
void Easing__QuarticInOutImpl__ctor_1_fn(Easing__QuarticInOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :148
void Easing__QuarticInOutImpl__Map_fn(Easing__QuarticInOutImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    k_ = k_ * 2.0;

    if (k_ < 1.0)
        return *__retval = (((0.5 * k_) * k_) * k_) * k_, void();

    k_ = k_ - 2.0;
    return *__retval = -0.5 * ((((k_ * k_) * k_) * k_) - 2.0), void();
}

// public generated QuarticInOutImpl New() :146
void Easing__QuarticInOutImpl__New1_fn(Easing__QuarticInOutImpl** __retval)
{
    *__retval = Easing__QuarticInOutImpl::New1();
}

// public generated QuarticInOutImpl() [instance] :146
void Easing__QuarticInOutImpl::ctor_1()
{
    ctor_();
}

// public generated QuarticInOutImpl New() [static] :146
Easing__QuarticInOutImpl* Easing__QuarticInOutImpl::New1()
{
    Easing__QuarticInOutImpl* obj1 = (Easing__QuarticInOutImpl*)uNew(Easing__QuarticInOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Easing.uno
// ----------------------------------------------------------

// internal sealed class Easing.QuarticOutImpl :137
// {
static void Easing__QuarticOutImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__QuarticOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__QuarticOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.QuarticOutImpl", options);
    type->fp_build_ = Easing__QuarticOutImpl_build;
    type->fp_ctor_ = (void*)Easing__QuarticOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__QuarticOutImpl__Map_fn;
    return type;
}

// public generated QuarticOutImpl() :137
void Easing__QuarticOutImpl__ctor_1_fn(Easing__QuarticOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :139
void Easing__QuarticOutImpl__Map_fn(Easing__QuarticOutImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    k_ = k_ - 1.0;
    return *__retval = 1.0 - (((k_ * k_) * k_) * k_), void();
}

// public generated QuarticOutImpl New() :137
void Easing__QuarticOutImpl__New1_fn(Easing__QuarticOutImpl** __retval)
{
    *__retval = Easing__QuarticOutImpl::New1();
}

// public generated QuarticOutImpl() [instance] :137
void Easing__QuarticOutImpl::ctor_1()
{
    ctor_();
}

// public generated QuarticOutImpl New() [static] :137
Easing__QuarticOutImpl* Easing__QuarticOutImpl::New1()
{
    Easing__QuarticOutImpl* obj1 = (Easing__QuarticOutImpl*)uNew(Easing__QuarticOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Easing.uno
// ----------------------------------------------------------

// internal sealed class Easing.QuinticInImpl :158
// {
static void Easing__QuinticInImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__QuinticInImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__QuinticInImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.QuinticInImpl", options);
    type->fp_build_ = Easing__QuinticInImpl_build;
    type->fp_ctor_ = (void*)Easing__QuinticInImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__QuinticInImpl__Map_fn;
    return type;
}

// public generated QuinticInImpl() :158
void Easing__QuinticInImpl__ctor_1_fn(Easing__QuinticInImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :160
void Easing__QuinticInImpl__Map_fn(Easing__QuinticInImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    return *__retval = (((k_ * k_) * k_) * k_) * k_, void();
}

// public generated QuinticInImpl New() :158
void Easing__QuinticInImpl__New1_fn(Easing__QuinticInImpl** __retval)
{
    *__retval = Easing__QuinticInImpl::New1();
}

// public generated QuinticInImpl() [instance] :158
void Easing__QuinticInImpl::ctor_1()
{
    ctor_();
}

// public generated QuinticInImpl New() [static] :158
Easing__QuinticInImpl* Easing__QuinticInImpl::New1()
{
    Easing__QuinticInImpl* obj1 = (Easing__QuinticInImpl*)uNew(Easing__QuinticInImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Easing.uno
// ----------------------------------------------------------

// internal sealed class Easing.QuinticInOutImpl :175
// {
static void Easing__QuinticInOutImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__QuinticInOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__QuinticInOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.QuinticInOutImpl", options);
    type->fp_build_ = Easing__QuinticInOutImpl_build;
    type->fp_ctor_ = (void*)Easing__QuinticInOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__QuinticInOutImpl__Map_fn;
    return type;
}

// public generated QuinticInOutImpl() :175
void Easing__QuinticInOutImpl__ctor_1_fn(Easing__QuinticInOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :177
void Easing__QuinticInOutImpl__Map_fn(Easing__QuinticInOutImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    k_ = k_ * 2.0;

    if (k_ < 1.0)
        return *__retval = ((((0.5 * k_) * k_) * k_) * k_) * k_, void();

    k_ = k_ - 2.0;
    return *__retval = 0.5 * (((((k_ * k_) * k_) * k_) * k_) + 2.0), void();
}

// public generated QuinticInOutImpl New() :175
void Easing__QuinticInOutImpl__New1_fn(Easing__QuinticInOutImpl** __retval)
{
    *__retval = Easing__QuinticInOutImpl::New1();
}

// public generated QuinticInOutImpl() [instance] :175
void Easing__QuinticInOutImpl::ctor_1()
{
    ctor_();
}

// public generated QuinticInOutImpl New() [static] :175
Easing__QuinticInOutImpl* Easing__QuinticInOutImpl::New1()
{
    Easing__QuinticInOutImpl* obj1 = (Easing__QuinticInOutImpl*)uNew(Easing__QuinticInOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Easing.uno
// ----------------------------------------------------------

// internal sealed class Easing.QuinticOutImpl :166
// {
static void Easing__QuinticOutImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__QuinticOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__QuinticOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.QuinticOutImpl", options);
    type->fp_build_ = Easing__QuinticOutImpl_build;
    type->fp_ctor_ = (void*)Easing__QuinticOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__QuinticOutImpl__Map_fn;
    return type;
}

// public generated QuinticOutImpl() :166
void Easing__QuinticOutImpl__ctor_1_fn(Easing__QuinticOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :168
void Easing__QuinticOutImpl__Map_fn(Easing__QuinticOutImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    k_ = k_ - 1.0;
    return *__retval = ((((k_ * k_) * k_) * k_) * k_) + 1.0, void();
}

// public generated QuinticOutImpl New() :166
void Easing__QuinticOutImpl__New1_fn(Easing__QuinticOutImpl** __retval)
{
    *__retval = Easing__QuinticOutImpl::New1();
}

// public generated QuinticOutImpl() [instance] :166
void Easing__QuinticOutImpl::ctor_1()
{
    ctor_();
}

// public generated QuinticOutImpl New() [static] :166
Easing__QuinticOutImpl* Easing__QuinticOutImpl::New1()
{
    Easing__QuinticOutImpl* obj1 = (Easing__QuinticOutImpl*)uNew(Easing__QuinticOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/RangeAdapter.uno
// --------------------------------------------------------------------

// public sealed class RangeAdapter<T> :36
// {
static void RangeAdapter_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Animations::RangeAdapterHelpers_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(RangeAdapter_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(RangeAdapter_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(RangeAdapter_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(RangeAdapter_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(RangeAdapter_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(RangeAdapter_type, interface5),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(RangeAdapter_type, interface6));
    type->SetFields(15,
        ::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL), offsetof(RangeAdapter, _Source), 0);
}

RangeAdapter_type* RangeAdapter_typeof()
{
    static uSStrong<RangeAdapter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 16;
    options.GenericCount = 1;
    options.InterfaceCount = 7;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(RangeAdapter);
    options.TypeSize = sizeof(RangeAdapter_type);
    type = (RangeAdapter_type*)uClassType::New("Fuse.Animations.RangeAdapter`1", options);
    type->fp_build_ = RangeAdapter_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))RangeAdapter__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))RangeAdapter__OnUnrooted_fn;
    type->interface6.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))RangeAdapter__UnoUXIPropertyListenerOnPropertyChanged_fn;
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

// protected override sealed void OnRooted() :63
void RangeAdapter__OnRooted_fn(RangeAdapter* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    uPtr(__this->Source())->AddListener((uObject*)__this);
}

// protected override sealed void OnUnrooted() :69
void RangeAdapter__OnUnrooted_fn(RangeAdapter* __this)
{
    uPtr(__this->Source())->RemoveListener((uObject*)__this);
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// public generated Uno.UX.Property<T> get_Source() :38
void RangeAdapter__get_Source_fn(RangeAdapter* __this, ::g::Uno::UX::Property1** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Uno.UX.Property<T> value) :38
void RangeAdapter__set_Source_fn(RangeAdapter* __this, ::g::Uno::UX::Property1* value)
{
    __this->Source(value);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector sel) :76
void RangeAdapter__UnoUXIPropertyListenerOnPropertyChanged_fn(RangeAdapter* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* sel)
{
    __this->OnPropertyChanged(::g::Fuse::Animations::RangeAdapterHelpers::_valueName_);
}

// public generated Uno.UX.Property<T> get_Source() [instance] :38
::g::Uno::UX::Property1* RangeAdapter::Source()
{
    return _Source;
}

// private generated void set_Source(Uno.UX.Property<T> value) [instance] :38
void RangeAdapter::Source(::g::Uno::UX::Property1* value)
{
    _Source = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/RangeAdapter.uno
// --------------------------------------------------------------------

// internal static class RangeAdapterHelpers :6
// {
// static generated RangeAdapterHelpers() :6
static void RangeAdapterHelpers__cctor__fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    RangeAdapterHelpers::_valueName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[15/*"Value"*/]);
}

static void RangeAdapterHelpers_build(uType* type)
{
    ::STRINGS[15] = uString::Const("Value");
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&RangeAdapterHelpers::_valueName_, uFieldFlagsStatic);
}

uClassType* RangeAdapterHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Animations.RangeAdapterHelpers", options);
    type->fp_build_ = RangeAdapterHelpers_build;
    type->fp_cctor_ = RangeAdapterHelpers__cctor__fn;
    return type;
}

::g::Uno::UX::Selector RangeAdapterHelpers::_valueName_;
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Resize.uno
// --------------------------------------------------------------

// public sealed class Resize :32
// {
static void Resize_build(uType* type)
{
    type->SetFields(18,
        ::g::Fuse::Animations::IResizeMode_typeof(), offsetof(Resize, _resizeMode), 0,
        ::g::Fuse::Visual_typeof(), offsetof(Resize, _RelativeNode), 0,
        ::g::Fuse::Visual_typeof(), offsetof(Resize, _Target), 0);
}

::g::Fuse::Animations::Animator_type* Resize_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::TrackAnimator_typeof();
    options.FieldCount = 21;
    options.ObjectSize = sizeof(Resize);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.Resize", options);
    type->fp_build_ = Resize_build;
    type->fp_ctor_ = (void*)Resize__New2_fn;
    type->fp_CreateState = (void(*)(::g::Fuse::Animations::Animator*, ::g::Fuse::Animations::CreateStateParams*, ::g::Fuse::Animations::AnimatorState**))Resize__CreateState_fn;
    return type;
}

// public generated Resize() :32
void Resize__ctor_3_fn(Resize* __this)
{
    __this->ctor_3();
}

// internal override sealed Fuse.Animations.AnimatorState CreateState(Fuse.Animations.CreateStateParams p) :78
void Resize__CreateState_fn(Resize* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval)
{
    return *__retval = ::g::Fuse::Animations::ResizeAnimatorState::New1(__this, p), void();
}

// public generated Resize New() :32
void Resize__New2_fn(Resize** __retval)
{
    *__retval = Resize::New2();
}

// public generated Fuse.Visual get_RelativeNode() :38
void Resize__get_RelativeNode_fn(Resize* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->RelativeNode();
}

// public generated void set_RelativeNode(Fuse.Visual value) :38
void Resize__set_RelativeNode_fn(Resize* __this, ::g::Fuse::Visual* value)
{
    __this->RelativeNode(value);
}

// public Fuse.Animations.IResizeMode get_RelativeTo() :49
void Resize__get_RelativeTo_fn(Resize* __this, uObject** __retval)
{
    *__retval = __this->RelativeTo();
}

// public void set_RelativeTo(Fuse.Animations.IResizeMode value) :50
void Resize__set_RelativeTo_fn(Resize* __this, uObject* value)
{
    __this->RelativeTo(value);
}

// public generated Fuse.Visual get_Target() :35
void Resize__get_Target_fn(Resize* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value) :35
void Resize__set_Target_fn(Resize* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

// public float2 get_Vector() :74
void Resize__get_Vector_fn(Resize* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Vector();
}

// public void set_Vector(float2 value) :75
void Resize__set_Vector_fn(Resize* __this, ::g::Uno::Float2* value)
{
    __this->Vector(*value);
}

// public generated Resize() [instance] :32
void Resize::ctor_3()
{
    ctor_2();
}

// public generated Fuse.Visual get_RelativeNode() [instance] :38
::g::Fuse::Visual* Resize::RelativeNode()
{
    return _RelativeNode;
}

// public generated void set_RelativeNode(Fuse.Visual value) [instance] :38
void Resize::RelativeNode(::g::Fuse::Visual* value)
{
    _RelativeNode = value;
}

// public Fuse.Animations.IResizeMode get_RelativeTo() [instance] :49
uObject* Resize::RelativeTo()
{
    return _resizeMode;
}

// public void set_RelativeTo(Fuse.Animations.IResizeMode value) [instance] :50
void Resize::RelativeTo(uObject* value)
{
    _resizeMode = value;
}

// public generated Fuse.Visual get_Target() [instance] :35
::g::Fuse::Visual* Resize::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance] :35
void Resize::Target(::g::Fuse::Visual* value)
{
    _Target = value;
}

// public float2 get_Vector() [instance] :74
::g::Uno::Float2 Resize::Vector()
{
    ::g::Uno::Float4 ind1;
    ind1 = _vectorValue;
    return ::g::Uno::Float2__New2(ind1.X, ind1.Y);
}

// public void set_Vector(float2 value) [instance] :75
void Resize::Vector(::g::Uno::Float2 value)
{
    ::g::Uno::Float4 ind2;
    _vectorValue = ::g::Uno::Float4__New7(value, (ind2 = _vectorValue, ::g::Uno::Float2__New2(ind2.Z, ind2.W)));
}

// public generated Resize New() [static] :32
Resize* Resize::New2()
{
    Resize* obj3 = (Resize*)uNew(Resize_typeof());
    obj3->ctor_3();
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Resize.uno
// --------------------------------------------------------------

// internal sealed class ResizeAnimatorState :84
// {
static void ResizeAnimatorState_build(uType* type)
{
    ::STRINGS[16] = uString::Const("Resize started without a Target node");
    ::STRINGS[17] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Resize.uno");
    ::STRINGS[18] = uString::Const(".ctor");
    ::STRINGS[19] = uString::Const("Resize started without as RelativeTo");
    ::TYPES[26] = ::g::Fuse::Animations::IResize_typeof();
    ::TYPES[27] = ::g::Fuse::IActualPlacement_typeof();
    ::TYPES[28] = ::g::Fuse::PlacedHandler_typeof();
    ::TYPES[29] = ::g::Fuse::Animations::IResizeMode_typeof();
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetFields(6,
        ::g::Uno::Float_typeof(), offsetof(ResizeAnimatorState, _lastStrength), 0,
        ::g::Uno::Float4_typeof(), offsetof(ResizeAnimatorState, _lastValue), 0,
        ::g::Fuse::Visual_typeof(), offsetof(ResizeAnimatorState, _relativeNode), 0,
        ::TYPES[29/*Fuse.Animations.IResizeMode*/], offsetof(ResizeAnimatorState, _relativeTo), 0,
        ::g::Fuse::Animations::Resize_typeof(), offsetof(ResizeAnimatorState, _resize), 0,
        ::TYPES[26/*Fuse.Animations.IResize*/], offsetof(ResizeAnimatorState, _target), 0,
        ::g::Uno::Bool_typeof(), offsetof(ResizeAnimatorState, _valid), 0);
}

::g::Fuse::Animations::TrackAnimatorState_type* ResizeAnimatorState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TrackAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::TrackAnimatorState_typeof();
    options.FieldCount = 13;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ResizeAnimatorState);
    options.TypeSize = sizeof(::g::Fuse::Animations::TrackAnimatorState_type);
    type = (::g::Fuse::Animations::TrackAnimatorState_type*)uClassType::New("Fuse.Animations.ResizeAnimatorState", options);
    type->fp_build_ = ResizeAnimatorState_build;
    type->fp_Disable = (void(*)(::g::Fuse::Animations::AnimatorState*))ResizeAnimatorState__Disable_fn;
    type->fp_SeekValue = (void(*)(::g::Fuse::Animations::TrackAnimatorState*, ::g::Uno::Float4*, float*))ResizeAnimatorState__SeekValue_fn;
    return type;
}

// public ResizeAnimatorState(Fuse.Animations.Resize r, Fuse.Animations.CreateStateParams p) :92
void ResizeAnimatorState__ctor_2_fn(ResizeAnimatorState* __this, ::g::Fuse::Animations::Resize* r, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(r, p);
}

// public override sealed void Disable() :123
void ResizeAnimatorState__Disable_fn(ResizeAnimatorState* __this)
{
    ::g::Fuse::Animations::AnimatorState__Disable_fn(__this);

    if (!__this->_valid)
        return;

    uObject* e = uAs<uObject*>(__this->_target, ::TYPES[27/*Fuse.IActualPlacement*/]);

    if (e != NULL)
        ::g::Fuse::IActualPlacement::remove_Placed(uInterface(uPtr(e), ::TYPES[27/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[28/*Fuse.PlacedHandler*/], (void*)ResizeAnimatorState__OnPlaced_fn, __this));

    uObject* elm = uAs<uObject*>(__this->_relativeNode, ::TYPES[27/*Fuse.IActualPlacement*/]);

    if (elm != NULL)
        ::g::Fuse::IActualPlacement::remove_Placed(uInterface(uPtr(elm), ::TYPES[27/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[28/*Fuse.PlacedHandler*/], (void*)ResizeAnimatorState__OnPlaced_fn, __this));
}

// public ResizeAnimatorState New(Fuse.Animations.Resize r, Fuse.Animations.CreateStateParams p) :92
void ResizeAnimatorState__New1_fn(::g::Fuse::Animations::Resize* r, ::g::Fuse::Animations::CreateStateParams* p, ResizeAnimatorState** __retval)
{
    *__retval = ResizeAnimatorState::New1(r, p);
}

// private void OnPlaced(object s, object a) :162
void ResizeAnimatorState__OnPlaced_fn(ResizeAnimatorState* __this, uObject* s, uObject* a)
{
    __this->OnPlaced(s, a);
}

// protected override sealed void SeekValue(float4 value, float strength) :140
void ResizeAnimatorState__SeekValue_fn(ResizeAnimatorState* __this, ::g::Uno::Float4* value, float* strength)
{
    float strength_ = *strength;
    ::g::Uno::Float4 value_ = *value;
    __this->_lastStrength = strength_;
    __this->_lastValue = value_;
    __this->Update(value_, strength_);
}

// private void Update(float4 value, float strength) :147
void ResizeAnimatorState__Update_fn(ResizeAnimatorState* __this, ::g::Uno::Float4* value, float* strength)
{
    __this->Update(*value, *strength);
}

// public ResizeAnimatorState(Fuse.Animations.Resize r, Fuse.Animations.CreateStateParams p) [instance] :92
void ResizeAnimatorState::ctor_2(::g::Fuse::Animations::Resize* r, ::g::Fuse::Animations::CreateStateParams* p)
{
    ::g::Fuse::Visual* ind1;
    _valid = true;
    ctor_1(r, p, uPtr(r)->Target());
    _resize = r;
    _target = uAs<uObject*>(Visual, ::TYPES[26/*Fuse.Animations.IResize*/]);

    if (_target == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[16/*"Resize star...*/], r, ::STRINGS[17/*"/usr/local/...*/], 98, ::STRINGS[18/*".ctor"*/]);
        _valid = false;
        return;
    }

    _relativeTo = r->RelativeTo();

    if (_relativeTo == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[19/*"Resize star...*/], r, ::STRINGS[17/*"/usr/local/...*/], 106, ::STRINGS[18/*".ctor"*/]);
        _valid = false;
        return;
    }

    _relativeNode = (ind1 = uPtr(_resize)->RelativeNode(), ((ind1 != NULL) ? ind1 : (::g::Fuse::Visual*)Visual));
    uObject* elm = uAs<uObject*>(_relativeNode, ::TYPES[27/*Fuse.IActualPlacement*/]);

    if (elm != NULL)
        ::g::Fuse::IActualPlacement::add_Placed(uInterface(uPtr(elm), ::TYPES[27/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[28/*Fuse.PlacedHandler*/], (void*)ResizeAnimatorState__OnPlaced_fn, this));

    uObject* e = uAs<uObject*>(_target, ::TYPES[27/*Fuse.IActualPlacement*/]);

    if (e != NULL)
        ::g::Fuse::IActualPlacement::add_Placed(uInterface(uPtr(e), ::TYPES[27/*Fuse.IActualPlacement*/]), uDelegate::New(::TYPES[28/*Fuse.PlacedHandler*/], (void*)ResizeAnimatorState__OnPlaced_fn, this));
}

// private void OnPlaced(object s, object a) [instance] :162
void ResizeAnimatorState::OnPlaced(uObject* s, uObject* a)
{
    Update(_lastValue, _lastStrength);
}

// private void Update(float4 value, float strength) [instance] :147
void ResizeAnimatorState::Update(::g::Uno::Float4 value, float strength)
{
    if (!_valid)
        return;

    ::g::Uno::Float2 baseSize;
    ::g::Uno::Float2 deltaSize;

    if (::g::Fuse::Animations::IResizeMode::GetSizeChange(uInterface(uPtr(_relativeTo), ::TYPES[29/*Fuse.Animations.IResizeMode*/]), Visual, _relativeNode, &baseSize, &deltaSize))
    {
        ::g::Uno::Float2 sz = ::g::Uno::Float2__op_Addition2(baseSize, ::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__op_Multiply2(deltaSize, ::g::Uno::Float2__New2(value.X, value.Y)), strength));
        ::g::Fuse::Animations::IResize::SetSize(uInterface(uPtr(_target), ::TYPES[26/*Fuse.Animations.IResize*/]), sz);
    }
}

// public ResizeAnimatorState New(Fuse.Animations.Resize r, Fuse.Animations.CreateStateParams p) [static] :92
ResizeAnimatorState* ResizeAnimatorState::New1(::g::Fuse::Animations::Resize* r, ::g::Fuse::Animations::CreateStateParams* p)
{
    ResizeAnimatorState* obj2 = (ResizeAnimatorState*)uNew(ResizeAnimatorState_typeof());
    obj2->ctor_2(r, p);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/TransformAnimator.uno
// -------------------------------------------------------------------------

// public sealed class Rotate :269
// {
static void Rotate_build(uType* type)
{
    type->SetBase(::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Rotation_typeof(), NULL));
    type->SetFields(21);
}

::g::Fuse::Animations::TransformAnimator_type* Rotate_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TransformAnimator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::TransformAnimator_typeof();
    options.FieldCount = 21;
    options.ObjectSize = sizeof(Rotate);
    options.TypeSize = sizeof(::g::Fuse::Animations::TransformAnimator_type);
    type = (::g::Fuse::Animations::TransformAnimator_type*)uClassType::New("Fuse.Animations.Rotate", options);
    type->fp_build_ = Rotate_build;
    type->fp_Update = (void(*)(::g::Fuse::Animations::TransformAnimator*, ::g::Fuse::Visual*, ::g::Fuse::Transform*, ::g::Uno::Float4*))Rotate__Update_fn;
    return type;
}

// internal override sealed void Update(Fuse.Visual elm, Fuse.Rotation t, float4 value) :304
void Rotate__Update_fn(Rotate* __this, ::g::Fuse::Visual* elm, ::g::Fuse::Rotation* t, ::g::Uno::Float4* value)
{
    ::g::Uno::Float4 value_ = *value;
    uPtr(t)->EulerAngle(::g::Uno::Float3__New2(value_.X, value_.Y, value_.Z));
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/TransformAnimator.uno
// -------------------------------------------------------------------------

// public sealed class Scale :331
// {
static void Scale_build(uType* type)
{
    type->SetBase(::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Scaling_typeof(), NULL));
    type->SetDependencies(
        ::g::Fuse::ScalingModes_typeof());
    type->SetFields(21,
        ::g::Fuse::IScalingMode_typeof(), offsetof(Scale, _relativeTo), 0);
}

::g::Fuse::Animations::TransformAnimator_type* Scale_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TransformAnimator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::TransformAnimator_typeof();
    options.FieldCount = 22;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Scale);
    options.TypeSize = sizeof(::g::Fuse::Animations::TransformAnimator_type);
    type = (::g::Fuse::Animations::TransformAnimator_type*)uClassType::New("Fuse.Animations.Scale", options);
    type->fp_build_ = Scale_build;
    type->fp_ctor_ = (void*)Scale__New2_fn;
    type->fp_Update = (void(*)(::g::Fuse::Animations::TransformAnimator*, ::g::Fuse::Visual*, ::g::Fuse::Transform*, ::g::Uno::Float4*))Scale__Update_fn;
    return type;
}

// public Scale() :341
void Scale__ctor_4_fn(Scale* __this)
{
    __this->ctor_4();
}

// public float get_Factor() :350
void Scale__get_Factor_fn(Scale* __this, float* __retval)
{
    *__retval = __this->Factor();
}

// public void set_Factor(float value) :351
void Scale__set_Factor_fn(Scale* __this, float* value)
{
    __this->Factor(*value);
}

// public Scale New() :341
void Scale__New2_fn(Scale** __retval)
{
    *__retval = Scale::New2();
}

// public Fuse.IScalingMode get_RelativeTo() :337
void Scale__get_RelativeTo_fn(Scale* __this, uObject** __retval)
{
    *__retval = __this->RelativeTo();
}

// public void set_RelativeTo(Fuse.IScalingMode value) :338
void Scale__set_RelativeTo_fn(Scale* __this, uObject* value)
{
    __this->RelativeTo(value);
}

// internal override sealed void Update(Fuse.Visual elm, Fuse.Scaling t, float4 value) :354
void Scale__Update_fn(Scale* __this, ::g::Fuse::Visual* elm, ::g::Fuse::Scaling* t, ::g::Uno::Float4* value)
{
    ::g::Fuse::Visual* ind1;
    ::g::Uno::Float4 value_ = *value;
    uPtr(t)->RelativeNode((ind1 = __this->RelativeNode(), (ind1 != NULL) ? ind1 : elm));
    t->RelativeTo(__this->RelativeTo());
    t->Vector(::g::Uno::Float3__New2(value_.X, value_.Y, value_.Z));
}

// public Scale() [instance] :341
void Scale::ctor_4()
{
    _relativeTo = ::g::Fuse::ScalingModes::Identity_;
    ctor_3();
    Priority(2000);
    _vectorValue = ::g::Uno::Float4__New1(1.0f);
}

// public float get_Factor() [instance] :350
float Scale::Factor()
{
    return X();
}

// public void set_Factor(float value) [instance] :351
void Scale::Factor(float value)
{
    _vectorValue = ::g::Uno::Float4__New1(value);
}

// public Fuse.IScalingMode get_RelativeTo() [instance] :337
uObject* Scale::RelativeTo()
{
    return _relativeTo;
}

// public void set_RelativeTo(Fuse.IScalingMode value) [instance] :338
void Scale::RelativeTo(uObject* value)
{
    _relativeTo = value;
}

// public Scale New() [static] :341
Scale* Scale::New2()
{
    Scale* obj2 = (Scale*)uNew(Scale_typeof());
    obj2->ctor_4();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Animator.uno
// ----------------------------------------------------------------

// internal enum SeekDirection :108
uEnumType* SeekDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.SeekDirection", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Forward", 0LL,
        "Backward", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/TriggerAnimation.uno
// ------------------------------------------------------------------------

// public enum TriggerAnimationState.SeekFlags :482
uEnumType* TriggerAnimationState__SeekFlags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.TriggerAnimationState.SeekFlags", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "ForcePlayer", 1LL,
        "BypassUpdate", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Animator.uno
// ----------------------------------------------------------------

// internal enum SeekResult :115
uEnumType* SeekResult_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Animations.SeekResult", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "Complete", 1LL,
        "Stable", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Easing.uno
// ----------------------------------------------------------

// internal sealed class Easing.SinusoidalInImpl :188
// {
static void Easing__SinusoidalInImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__SinusoidalInImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__SinusoidalInImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.SinusoidalInImpl", options);
    type->fp_build_ = Easing__SinusoidalInImpl_build;
    type->fp_ctor_ = (void*)Easing__SinusoidalInImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__SinusoidalInImpl__Map_fn;
    return type;
}

// public generated SinusoidalInImpl() :188
void Easing__SinusoidalInImpl__ctor_1_fn(Easing__SinusoidalInImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :190
void Easing__SinusoidalInImpl__Map_fn(Easing__SinusoidalInImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    return *__retval = 1.0 - ::g::Uno::Math::Cos((k_ * 3.1415926535897931) / 2.0), void();
}

// public generated SinusoidalInImpl New() :188
void Easing__SinusoidalInImpl__New1_fn(Easing__SinusoidalInImpl** __retval)
{
    *__retval = Easing__SinusoidalInImpl::New1();
}

// public generated SinusoidalInImpl() [instance] :188
void Easing__SinusoidalInImpl::ctor_1()
{
    ctor_();
}

// public generated SinusoidalInImpl New() [static] :188
Easing__SinusoidalInImpl* Easing__SinusoidalInImpl::New1()
{
    Easing__SinusoidalInImpl* obj1 = (Easing__SinusoidalInImpl*)uNew(Easing__SinusoidalInImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Easing.uno
// ----------------------------------------------------------

// internal sealed class Easing.SinusoidalInOutImpl :204
// {
static void Easing__SinusoidalInOutImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__SinusoidalInOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__SinusoidalInOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.SinusoidalInOutImpl", options);
    type->fp_build_ = Easing__SinusoidalInOutImpl_build;
    type->fp_ctor_ = (void*)Easing__SinusoidalInOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__SinusoidalInOutImpl__Map_fn;
    return type;
}

// public generated SinusoidalInOutImpl() :204
void Easing__SinusoidalInOutImpl__ctor_1_fn(Easing__SinusoidalInOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :206
void Easing__SinusoidalInOutImpl__Map_fn(Easing__SinusoidalInOutImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    return *__retval = 0.5 * (1.0 - ::g::Uno::Math::Cos(3.1415926535897931 * k_)), void();
}

// public generated SinusoidalInOutImpl New() :204
void Easing__SinusoidalInOutImpl__New1_fn(Easing__SinusoidalInOutImpl** __retval)
{
    *__retval = Easing__SinusoidalInOutImpl::New1();
}

// public generated SinusoidalInOutImpl() [instance] :204
void Easing__SinusoidalInOutImpl::ctor_1()
{
    ctor_();
}

// public generated SinusoidalInOutImpl New() [static] :204
Easing__SinusoidalInOutImpl* Easing__SinusoidalInOutImpl::New1()
{
    Easing__SinusoidalInOutImpl* obj1 = (Easing__SinusoidalInOutImpl*)uNew(Easing__SinusoidalInOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Common/1.3.1/Easing.uno
// ----------------------------------------------------------

// internal sealed class Easing.SinusoidalOutImpl :196
// {
static void Easing__SinusoidalOutImpl_build(uType* type)
{
}

::g::Fuse::Animations::Easing_type* Easing__SinusoidalOutImpl_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Easing_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Easing_typeof();
    options.ObjectSize = sizeof(Easing__SinusoidalOutImpl);
    options.TypeSize = sizeof(::g::Fuse::Animations::Easing_type);
    type = (::g::Fuse::Animations::Easing_type*)uClassType::New("Fuse.Animations.Easing.SinusoidalOutImpl", options);
    type->fp_build_ = Easing__SinusoidalOutImpl_build;
    type->fp_ctor_ = (void*)Easing__SinusoidalOutImpl__New1_fn;
    type->fp_Map = (void(*)(::g::Fuse::Animations::Easing*, double*, double*))Easing__SinusoidalOutImpl__Map_fn;
    return type;
}

// public generated SinusoidalOutImpl() :196
void Easing__SinusoidalOutImpl__ctor_1_fn(Easing__SinusoidalOutImpl* __this)
{
    __this->ctor_1();
}

// public override sealed double Map(double k) :198
void Easing__SinusoidalOutImpl__Map_fn(Easing__SinusoidalOutImpl* __this, double* k, double* __retval)
{
    double k_ = *k;
    return *__retval = ::g::Uno::Math::Sin((k_ * 3.1415926535897931) / 2.0), void();
}

// public generated SinusoidalOutImpl New() :196
void Easing__SinusoidalOutImpl__New1_fn(Easing__SinusoidalOutImpl** __retval)
{
    *__retval = Easing__SinusoidalOutImpl::New1();
}

// public generated SinusoidalOutImpl() [instance] :196
void Easing__SinusoidalOutImpl::ctor_1()
{
    ctor_();
}

// public generated SinusoidalOutImpl New() [static] :196
Easing__SinusoidalOutImpl* Easing__SinusoidalOutImpl::New1()
{
    Easing__SinusoidalOutImpl* obj1 = (Easing__SinusoidalOutImpl*)uNew(Easing__SinusoidalOutImpl_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/TransformAnimator.uno
// -------------------------------------------------------------------------

// public sealed class Skew :376
// {
static void Skew_build(uType* type)
{
    type->SetBase(::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(::g::Fuse::Shear_typeof(), NULL));
    type->SetFields(21);
}

::g::Fuse::Animations::TransformAnimator_type* Skew_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TransformAnimator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::TransformAnimator_typeof();
    options.FieldCount = 21;
    options.ObjectSize = sizeof(Skew);
    options.TypeSize = sizeof(::g::Fuse::Animations::TransformAnimator_type);
    type = (::g::Fuse::Animations::TransformAnimator_type*)uClassType::New("Fuse.Animations.Skew", options);
    type->fp_build_ = Skew_build;
    type->fp_Update = (void(*)(::g::Fuse::Animations::TransformAnimator*, ::g::Fuse::Visual*, ::g::Fuse::Transform*, ::g::Uno::Float4*))Skew__Update_fn;
    return type;
}

// internal override sealed void Update(Fuse.Visual elm, Fuse.Shear t, float4 value) :383
void Skew__Update_fn(Skew* __this, ::g::Fuse::Visual* elm, ::g::Fuse::Shear* t, ::g::Uno::Float4* value)
{
    ::g::Uno::Float4 value_ = *value;
    uPtr(t)->Vector(::g::Uno::Float2__New2(value_.X, value_.Y));
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Spin.uno
// ------------------------------------------------------------

// public sealed class Spin :18
// {
static void Spin_build(uType* type)
{
    type->SetFields(6,
        ::g::Uno::Double_typeof(), offsetof(Spin, _hertz), 0,
        ::g::Fuse::Visual_typeof(), offsetof(Spin, _Target), 0);
}

::g::Fuse::Animations::Animator_type* Spin_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::OpenAnimator_typeof();
    options.FieldCount = 8;
    options.ObjectSize = sizeof(Spin);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.Spin", options);
    type->fp_build_ = Spin_build;
    type->fp_CreateState = (void(*)(::g::Fuse::Animations::Animator*, ::g::Fuse::Animations::CreateStateParams*, ::g::Fuse::Animations::AnimatorState**))Spin__CreateState_fn;
    return type;
}

// internal override sealed Fuse.Animations.AnimatorState CreateState(Fuse.Animations.CreateStateParams p) :40
void Spin__CreateState_fn(Spin* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval)
{
    return *__retval = ::g::Fuse::Animations::SpinState::New1(__this, p), void();
}

// public double get_Frequency() :36
void Spin__get_Frequency_fn(Spin* __this, double* __retval)
{
    *__retval = __this->Frequency();
}

// public void set_Frequency(double value) :37
void Spin__set_Frequency_fn(Spin* __this, double* value)
{
    __this->Frequency(*value);
}

// public generated Fuse.Visual get_Target() :28
void Spin__get_Target_fn(Spin* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value) :28
void Spin__set_Target_fn(Spin* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

// public double get_Frequency() [instance] :36
double Spin::Frequency()
{
    return _hertz;
}

// public void set_Frequency(double value) [instance] :37
void Spin::Frequency(double value)
{
    _hertz = value;
}

// public generated Fuse.Visual get_Target() [instance] :28
::g::Fuse::Visual* Spin::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance] :28
void Spin::Target(::g::Fuse::Visual* value)
{
    _Target = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Spin.uno
// ------------------------------------------------------------

// internal sealed class SpinState :47
// {
static void SpinState_build(uType* type)
{
    ::STRINGS[7] = uString::Const("Invalid seek");
    ::STRINGS[20] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Spin.uno");
    ::TYPES[11] = ::g::Fuse::Animations::IMixer_typeof();
    ::TYPES[30] = ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(::g::Fuse::Transform_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof());
    type->SetFields(5,
        ::g::Fuse::Animations::Spin_typeof(), offsetof(SpinState, Animator1), 0,
        ::g::Uno::Double_typeof(), offsetof(SpinState, degrees), 0,
        ::TYPES[30/*Fuse.Animations.IMixerHandle<Fuse.Transform>*/], offsetof(SpinState, mixHandle), 0,
        ::g::Fuse::Rotation_typeof(), offsetof(SpinState, transform), 0);
}

::g::Fuse::Animations::OpenAnimatorState_type* SpinState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::OpenAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::OpenAnimatorState_typeof();
    options.FieldCount = 9;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(SpinState);
    options.TypeSize = sizeof(::g::Fuse::Animations::OpenAnimatorState_type);
    type = (::g::Fuse::Animations::OpenAnimatorState_type*)uClassType::New("Fuse.Animations.SpinState", options);
    type->fp_build_ = SpinState_build;
    type->fp_Disable = (void(*)(::g::Fuse::Animations::AnimatorState*))SpinState__Disable_fn;
    type->fp_Seek = (void(*)(::g::Fuse::Animations::OpenAnimatorState*, bool*, float*, float*, int*, bool*))SpinState__Seek_fn;
    return type;
}

// public SpinState(Fuse.Animations.Spin animator, Fuse.Animations.CreateStateParams p) :53
void SpinState__ctor_2_fn(SpinState* __this, ::g::Fuse::Animations::Spin* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(animator, p);
}

// public override sealed void Disable() :62
void SpinState__Disable_fn(SpinState* __this)
{
    if (__this->mixHandle == NULL)
        return;

    __this->degrees = 0.0;
    ::g::Fuse::Animations::IMixerHandle::Unregister(uInterface(uPtr(__this->mixHandle), ::TYPES[30/*Fuse.Animations.IMixerHandle<Fuse.Transform>*/]));
    __this->mixHandle = NULL;
}

// public SpinState New(Fuse.Animations.Spin animator, Fuse.Animations.CreateStateParams p) :53
void SpinState__New1_fn(::g::Fuse::Animations::Spin* animator, ::g::Fuse::Animations::CreateStateParams* p, SpinState** __retval)
{
    *__retval = SpinState::New1(animator, p);
}

// protected override sealed bool Seek(bool on, float interval, float strength, Fuse.Animations.SeekDirection dir) :72
void SpinState__Seek_fn(SpinState* __this, bool* on, float* interval, float* strength, int* dir, bool* __retval)
{
    float interval_ = *interval;
    bool on_ = *on;
    float strength_ = *strength;

    if ((__this->mixHandle == NULL) || (__this->transform == NULL))
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[7/*"Invalid seek"*/], 0, ::STRINGS[20/*"/usr/local/...*/], 76);
        return *__retval = true, void();
    }

    bool done = false;
    double oldDegrees = __this->degrees;
    __this->degrees = (__this->degrees + ((double)(interval_ * 360.0f) * uPtr(__this->Animator1)->Frequency()));
    float zeroTolerance = 1e-05f;

    if (on_)
        __this->degrees = ::g::Uno::Math::Mod(__this->degrees, 360.0);
    else if ((((oldDegrees <= 9.9999997473787516e-06) || (__this->degrees <= 9.9999997473787516e-06)) || (oldDegrees >= 360.0)) || (__this->degrees >= 360.0))
    {
        __this->degrees = 0.0;
        done = true;
    }

    uPtr(__this->transform)->Degrees((float)__this->degrees);
    ::g::Fuse::Animations::IMixerHandle::Set_ex(uInterface(uPtr(__this->mixHandle), ::TYPES[30/*Fuse.Animations.IMixerHandle<Fuse.Transform>*/]), __this->transform, uCRef(strength_));
    return *__retval = done, void();
}

// public SpinState(Fuse.Animations.Spin animator, Fuse.Animations.CreateStateParams p) [instance] :53
void SpinState::ctor_2(::g::Fuse::Animations::Spin* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    transform = ::g::Fuse::Rotation::New2();
    ctor_1(animator, p, uPtr(animator)->Target());
    Animator1 = animator;
    mixHandle = ::g::Fuse::Animations::IMixer::RegisterTransform(uInterface(uPtr(uPtr(Animator1)->Mixer), ::TYPES[11/*Fuse.Animations.IMixer*/]), Visual, uPtr(Animator1)->MixOp(), 3000);
}

// public SpinState New(Fuse.Animations.Spin animator, Fuse.Animations.CreateStateParams p) [static] :53
SpinState* SpinState::New1(::g::Fuse::Animations::Spin* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    SpinState* obj1 = (SpinState*)uNew(SpinState_typeof());
    obj1->ctor_2(animator, p);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Attract.uno
// ---------------------------------------------------------------

// private sealed class Attract.Subscription :61
// {
static void Attract__Subscription_build(uType* type)
{
    ::STRINGS[21] = uString::Const("Unexpected size for attract: ");
    ::STRINGS[22] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/1.3.1/Attract.uno");
    ::STRINGS[23] = uString::Const("NeedSim");
    ::TYPES[31] = ::g::Fuse::Animations::DestinationBehavior_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[32] = ::g::Uno::IDisposable_typeof();
    ::TYPES[33] = ::g::Fuse::Animations::DestinationBehavior_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[34] = ::g::Fuse::Animations::DestinationBehavior_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    ::TYPES[35] = ::g::Fuse::Animations::DestinationBehavior_typeof()->MakeType(::g::Uno::Float3_typeof(), NULL);
    ::TYPES[36] = ::g::Fuse::Animations::DestinationBehavior__ValueHandler_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[37] = ::g::Fuse::Animations::DestinationBehavior__ValueHandler_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    ::TYPES[38] = ::g::Fuse::Animations::DestinationBehavior__ValueHandler_typeof()->MakeType(::g::Uno::Float3_typeof(), NULL);
    ::TYPES[39] = ::g::Fuse::Animations::DestinationBehavior__ValueHandler_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[40] = ::g::Fuse::Reactive::IListener_typeof();
    ::TYPES[41] = type->MakeMethod(0/*OnValueUpdate<float>*/, ::g::Uno::Float_typeof(), NULL);
    ::TYPES[42] = type->MakeMethod(0/*OnValueUpdate<float2>*/, ::g::Uno::Float2_typeof(), NULL);
    ::TYPES[43] = type->MakeMethod(0/*OnValueUpdate<float3>*/, ::g::Uno::Float3_typeof(), NULL);
    ::TYPES[44] = type->MakeMethod(0/*OnValueUpdate<float4>*/, ::g::Uno::Float4_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetInterfaces(
        ::TYPES[32/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface0),
        ::TYPES[40/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface1));
    type->SetFields(2,
        ::g::Fuse::Animations::Attract_typeof(), offsetof(Attract__Subscription, _attract), 0,
        ::g::Uno::Int_typeof(), offsetof(Attract__Subscription, _simSize), 0,
        ::TYPES[33/*Fuse.Animations.DestinationBehavior<float>*/], offsetof(Attract__Subscription, _simulation1), 0,
        ::TYPES[34/*Fuse.Animations.DestinationBehavior<float2>*/], offsetof(Attract__Subscription, _simulation2), 0,
        ::TYPES[35/*Fuse.Animations.DestinationBehavior<float3>*/], offsetof(Attract__Subscription, _simulation3), 0,
        ::TYPES[31/*Fuse.Animations.DestinationBehavior<float4>*/], offsetof(Attract__Subscription, _simulation4), 0,
        ::TYPES[32/*Uno.IDisposable*/], offsetof(Attract__Subscription, _sourceSub), 0,
        ::TYPES[40/*Fuse.Reactive.IListener*/], offsetof(Attract__Subscription, _target), 0);
}

::g::Fuse::Reactive::InnerListener_type* Attract__Subscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InnerListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InnerListener_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 2;
    options.MethodTypeCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Attract__Subscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InnerListener_type);
    type = (::g::Fuse::Reactive::InnerListener_type*)uClassType::New("Fuse.Animations.Attract.Subscription", options);
    type->MethodTypes[0] = type->NewMethodType(1, 0,0);
    type->fp_build_ = Attract__Subscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))Attract__Subscription__Dispose_fn;
    type->fp_OnNewData = (void(*)(::g::Fuse::Reactive::InnerListener*, uObject*, uObject*))Attract__Subscription__OnNewData_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Attract__Subscription__Dispose_fn;
    return type;
}

// public Subscription(Fuse.Animations.Attract attract, Fuse.Reactive.IContext context, Fuse.Reactive.IListener target) :76
void Attract__Subscription__ctor_1_fn(Attract__Subscription* __this, ::g::Fuse::Animations::Attract* attract, uObject* context, uObject* target)
{
    __this->ctor_1(attract, context, target);
}

// private void CleanSimulation() :160
void Attract__Subscription__CleanSimulation_fn(Attract__Subscription* __this)
{
    __this->CleanSimulation();
}

// public override sealed void Dispose() :184
void Attract__Subscription__Dispose_fn(Attract__Subscription* __this)
{
    ::g::Fuse::Reactive::InnerListener__Dispose_fn(__this);

    if (__this->_sourceSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_sourceSub), ::TYPES[32/*Uno.IDisposable*/]));
        __this->_sourceSub = NULL;
    }

    __this->_target = NULL;
    __this->_attract = NULL;
    __this->CleanSimulation();
}

// public void Init(Fuse.Reactive.IContext context) :84
void Attract__Subscription__Init_fn(Attract__Subscription* __this, uObject* context)
{
    __this->Init(context);
}

// private void NeedSim(int size) :124
void Attract__Subscription__NeedSim_fn(Attract__Subscription* __this, int* size)
{
    __this->NeedSim(*size);
}

// public Subscription New(Fuse.Animations.Attract attract, Fuse.Reactive.IContext context, Fuse.Reactive.IListener target) :76
void Attract__Subscription__New1_fn(::g::Fuse::Animations::Attract* attract, uObject* context, uObject* target, Attract__Subscription** __retval)
{
    *__retval = Attract__Subscription::New1(attract, context, target);
}

// protected override sealed void OnNewData(Fuse.Reactive.IExpression source, object oValue) :100
void Attract__Subscription__OnNewData_fn(Attract__Subscription* __this, uObject* source, uObject* oValue)
{
    ::g::Uno::Float4 value = ::g::Uno::Float4__New1(0.0f);
    int size = 0;

    if (!::g::Fuse::Marshal::TryToZeroFloat4(oValue, &value, &size))
    {
        __this->CleanSimulation();
        return;
    }

    __this->NeedSim(size);

    if (__this->_simulation1 != NULL)
        ::g::Fuse::Animations::DestinationBehavior__SetValue_fn(uPtr(__this->_simulation1), uCRef(value.X), uDelegate::New(::TYPES[36/*Fuse.Animations.DestinationBehavior<float>.ValueHandler*/], (void*)Attract__Subscription__OnValueUpdate1_fn, __this));

    if (__this->_simulation2 != NULL)
        ::g::Fuse::Animations::DestinationBehavior__SetValue_fn(uPtr(__this->_simulation2), uCRef(::g::Uno::Float2__New2(value.X, value.Y)), uDelegate::New(::TYPES[37/*Fuse.Animations.DestinationBehavior<float2>.ValueHandler*/], (void*)Attract__Subscription__OnValueUpdate2_fn, __this));

    if (__this->_simulation3 != NULL)
        ::g::Fuse::Animations::DestinationBehavior__SetValue_fn(uPtr(__this->_simulation3), uCRef(::g::Uno::Float3__New2(value.X, value.Y, value.Z)), uDelegate::New(::TYPES[38/*Fuse.Animations.DestinationBehavior<float3>.ValueHandler*/], (void*)Attract__Subscription__OnValueUpdate3_fn, __this));

    if (__this->_simulation4 != NULL)
        ::g::Fuse::Animations::DestinationBehavior__SetValue_fn(uPtr(__this->_simulation4), uCRef(value), uDelegate::New(::TYPES[39/*Fuse.Animations.DestinationBehavior<float4>.ValueHandler*/], (void*)Attract__Subscription__OnValueUpdate4_fn, __this));
}

// private void OnValueUpdate<T>(T value) :89
void Attract__Subscription__OnValueUpdate_fn(Attract__Subscription* __this, uType* __type, void* value)
{
    if (__this->_target == NULL)
        return;

    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(__this->_target), ::TYPES[40/*Fuse.Reactive.IListener*/]), (uObject*)__this->_attract, uBoxPtr(__type->U(0), value));
}

// private void OnValueUpdate1(float value) :98
void Attract__Subscription__OnValueUpdate1_fn(Attract__Subscription* __this, float* value)
{
    __this->OnValueUpdate1(*value);
}

// private void OnValueUpdate2(float2 value) :97
void Attract__Subscription__OnValueUpdate2_fn(Attract__Subscription* __this, ::g::Uno::Float2* value)
{
    __this->OnValueUpdate2(*value);
}

// private void OnValueUpdate3(float3 value) :96
void Attract__Subscription__OnValueUpdate3_fn(Attract__Subscription* __this, ::g::Uno::Float3* value)
{
    __this->OnValueUpdate3(*value);
}

// private void OnValueUpdate4(float4 value) :95
void Attract__Subscription__OnValueUpdate4_fn(Attract__Subscription* __this, ::g::Uno::Float4* value)
{
    __this->OnValueUpdate4(*value);
}

// public Subscription(Fuse.Animations.Attract attract, Fuse.Reactive.IContext context, Fuse.Reactive.IListener target) [instance] :76
void Attract__Subscription::ctor_1(::g::Fuse::Animations::Attract* attract, uObject* context, uObject* target)
{
    ctor_();
    _target = target;
    _attract = attract;
    _simulation4 = ((::g::Fuse::Animations::DestinationBehavior*)::g::Fuse::Animations::DestinationBehavior::New1(::TYPES[31/*Fuse.Animations.DestinationBehavior<float4>*/]));
    uPtr(_simulation4)->Motion = uPtr(attract)->_config;
}

// private void CleanSimulation() [instance] :160
void Attract__Subscription::CleanSimulation()
{
    if (_simulation4 != NULL)
    {
        uPtr(_simulation4)->Unroot();
        _simulation4 = NULL;
    }

    if (_simulation3 != NULL)
    {
        uPtr(_simulation3)->Unroot();
        _simulation3 = NULL;
    }

    if (_simulation2 != NULL)
    {
        uPtr(_simulation2)->Unroot();
        _simulation2 = NULL;
    }

    if (_simulation1 != NULL)
    {
        uPtr(_simulation1)->Unroot();
        _simulation1 = NULL;
    }
}

// public void Init(Fuse.Reactive.IContext context) [instance] :84
void Attract__Subscription::Init(uObject* context)
{
    _sourceSub = uPtr(uPtr(_attract)->_sourceValue)->Subscribe(context, (uObject*)this);
}

// private void NeedSim(int size) [instance] :124
void Attract__Subscription::NeedSim(int size)
{
    if (size != _simSize)
    {
        CleanSimulation();
        _simSize = size;
    }

    if ((size < 0) || (size > 4))
    {
        ::g::Fuse::Diagnostics::InternalError(::g::Uno::String::op_Addition1(::STRINGS[21/*"Unexpected ...*/], uBox<int>(::g::Uno::Int_typeof(), size)), this, ::STRINGS[22/*"/usr/local/...*/], 134, ::STRINGS[23/*"NeedSim"*/]);
        return;
    }

    if ((size == 1) && (_simulation1 == NULL))
    {
        _simulation1 = ((::g::Fuse::Animations::DestinationBehavior*)::g::Fuse::Animations::DestinationBehavior::New1(::TYPES[33/*Fuse.Animations.DestinationBehavior<float>*/]));
        uPtr(_simulation1)->Motion = uPtr(_attract)->_config;
    }
    else if ((size == 2) && (_simulation2 == NULL))
    {
        _simulation2 = ((::g::Fuse::Animations::DestinationBehavior*)::g::Fuse::Animations::DestinationBehavior::New1(::TYPES[34/*Fuse.Animations.DestinationBehavior<float2>*/]));
        uPtr(_simulation2)->Motion = uPtr(_attract)->_config;
    }
    else if ((size == 3) && (_simulation3 == NULL))
    {
        _simulation3 = ((::g::Fuse::Animations::DestinationBehavior*)::g::Fuse::Animations::DestinationBehavior::New1(::TYPES[35/*Fuse.Animations.DestinationBehavior<float3>*/]));
        uPtr(_simulation3)->Motion = uPtr(_attract)->_config;
    }
    else if ((size == 4) && (_simulation4 == NULL))
    {
        _simulation4 = ((::g::Fuse::Animations::DestinationBehavior*)::g::Fuse::Animations::DestinationBehavior::New1(::TYPES[31/*Fuse.Animations.DestinationBehavior<float4>*/]));
        uPtr(_simulation4)->Motion = uPtr(_attract)->_config;
    }
}

// private void OnValueUpdate1(float value) [instance] :98
void Attract__Subscription::OnValueUpdate1(float value)
{
    Attract__Subscription__OnValueUpdate_fn(this, ::TYPES[41/*Fuse.Animations.Attract.Subscription.OnValueUpdate<float>*/], uCRef(value));
}

// private void OnValueUpdate2(float2 value) [instance] :97
void Attract__Subscription::OnValueUpdate2(::g::Uno::Float2 value)
{
    Attract__Subscription__OnValueUpdate_fn(this, ::TYPES[42/*Fuse.Animations.Attract.Subscription.OnValueUpdate<float2>*/], uCRef(value));
}

// private void OnValueUpdate3(float3 value) [instance] :96
void Attract__Subscription::OnValueUpdate3(::g::Uno::Float3 value)
{
    Attract__Subscription__OnValueUpdate_fn(this, ::TYPES[43/*Fuse.Animations.Attract.Subscription.OnValueUpdate<float3>*/], uCRef(value));
}

// private void OnValueUpdate4(float4 value) [instance] :95
void Attract__Subscription::OnValueUpdate4(::g::Uno::Float4 value)
{
    Attract__Subscription__OnValueUpdate_fn(this, ::TYPES[44/*Fuse.Animations.Attract.Subscription.OnValueUpdate<float4>*/], uCRef(value));
}

// public Subscription New(Fuse.Animations.Attract attract, Fuse.Reactive.IContext context, Fuse.Reactive.IListener target) [static] :76
Attract__Subscription* Attract__Subscription::New1(::g::Fuse::Animations::Attract* attract, uObject* context, uObject* target)
{
    Attract__Subscription* obj1 = (Attract__Subscription*)uNew(Attract__Subscription_typeof());
    obj1->ctor_1(attract, context, target);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/TrackAnimator.uno
// ---------------------------------------------------------------------

// public abstract class TrackAnimator :48
// {
static void TrackAnimator_build(uType* type)
{
    ::TYPES[45] = ::g::Fuse::Animations::TrackProvider_typeof();
    type->SetDependencies(
        ::g::Fuse::Animations::DiscreteSingleTrack_typeof(),
        ::g::Fuse::Animations::Easing_typeof(),
        ::g::Fuse::Animations::EasingTrack_typeof());
    type->SetFields(4,
        ::TYPES[45/*Fuse.Animations.TrackProvider*/], offsetof(TrackAnimator, _continuousProvider), 0,
        ::g::Uno::Double_typeof(), offsetof(TrackAnimator, _delayBack), 0,
        ::TYPES[45/*Fuse.Animations.TrackProvider*/], offsetof(TrackAnimator, _discreteProvider), 0,
        ::g::Uno::Double_typeof(), offsetof(TrackAnimator, _durationBack), 0,
        ::g::Fuse::Animations::Easing_typeof(), offsetof(TrackAnimator, _easing), 0,
        ::g::Fuse::Animations::Easing_typeof(), offsetof(TrackAnimator, _easingBack), 0,
        ::g::Uno::Bool_typeof(), offsetof(TrackAnimator, _hasDelayBack), 0,
        ::g::Uno::Bool_typeof(), offsetof(TrackAnimator, _hasDurationBack), 0,
        ::g::Uno::Bool_typeof(), offsetof(TrackAnimator, _hasEasingBack), 0,
        ::g::Uno::Bool_typeof(), offsetof(TrackAnimator, _isDiscrete), 0,
        uObject_typeof(), offsetof(TrackAnimator, _objectValue), 0,
        ::g::Uno::Float4_typeof(), offsetof(TrackAnimator, _vectorValue), 0,
        ::g::Uno::Double_typeof(), offsetof(TrackAnimator, _weight), 0,
        ::g::Uno::Double_typeof(), offsetof(TrackAnimator, _Duration), 0);
}

::g::Fuse::Animations::Animator_type* TrackAnimator_typeof()
{
    static uSStrong< ::g::Fuse::Animations::Animator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::Animator_typeof();
    options.FieldCount = 18;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(TrackAnimator);
    options.TypeSize = sizeof(::g::Fuse::Animations::Animator_type);
    type = (::g::Fuse::Animations::Animator_type*)uClassType::New("Fuse.Animations.TrackAnimator", options);
    type->fp_build_ = TrackAnimator_build;
    type->fp_get_AnimatorVariant = (void(*)(::g::Fuse::Animations::Animator*, int*))TrackAnimator__get_AnimatorVariant_fn;
    type->fp_GetDurationWithDelay = (void(*)(::g::Fuse::Animations::Animator*, int*, double*))TrackAnimator__GetDurationWithDelay_fn;
    return type;
}

// protected generated TrackAnimator() :48
void TrackAnimator__ctor_2_fn(TrackAnimator* __this)
{
    __this->ctor_2();
}

// internal override sealed Fuse.Animations.AnimatorVariant get_AnimatorVariant() :52
void TrackAnimator__get_AnimatorVariant_fn(TrackAnimator* __this, int* __retval)
{
    if (__this->_discreteProvider != NULL)
        return *__retval = ::g::Fuse::Animations::TrackProvider::GetAnimatorVariant(uInterface(uPtr(__this->_discreteProvider), ::TYPES[45/*Fuse.Animations.TrackProvider*/]), __this), void();
    else if (__this->_continuousProvider != NULL)
        return *__retval = ::g::Fuse::Animations::TrackProvider::GetAnimatorVariant(uInterface(uPtr(__this->_continuousProvider), ::TYPES[45/*Fuse.Animations.TrackProvider*/]), __this), void();

    return *__retval = 0, void();
}

// public double get_DelayBack() :162
void TrackAnimator__get_DelayBack_fn(TrackAnimator* __this, double* __retval)
{
    *__retval = __this->DelayBack();
}

// public void set_DelayBack(double value) :163
void TrackAnimator__set_DelayBack_fn(TrackAnimator* __this, double* value)
{
    __this->DelayBack(*value);
}

// public generated double get_Duration() :138
void TrackAnimator__get_Duration_fn(TrackAnimator* __this, double* __retval)
{
    *__retval = __this->Duration();
}

// public generated void set_Duration(double value) :138
void TrackAnimator__set_Duration_fn(TrackAnimator* __this, double* value)
{
    __this->Duration(*value);
}

// public double get_DurationBack() :147
void TrackAnimator__get_DurationBack_fn(TrackAnimator* __this, double* __retval)
{
    *__retval = __this->DurationBack();
}

// public void set_DurationBack(double value) :148
void TrackAnimator__set_DurationBack_fn(TrackAnimator* __this, double* value)
{
    __this->DurationBack(*value);
}

// public Fuse.Animations.Easing get_Easing() :116
void TrackAnimator__get_Easing_fn(TrackAnimator* __this, ::g::Fuse::Animations::Easing** __retval)
{
    *__retval = __this->Easing();
}

// public void set_Easing(Fuse.Animations.Easing value) :117
void TrackAnimator__set_Easing_fn(TrackAnimator* __this, ::g::Fuse::Animations::Easing* value)
{
    __this->Easing(value);
}

// public Fuse.Animations.Easing get_EasingBack() :127
void TrackAnimator__get_EasingBack_fn(TrackAnimator* __this, ::g::Fuse::Animations::Easing** __retval)
{
    *__retval = __this->EasingBack();
}

// public void set_EasingBack(Fuse.Animations.Easing value) :128
void TrackAnimator__set_EasingBack_fn(TrackAnimator* __this, ::g::Fuse::Animations::Easing* value)
{
    __this->EasingBack(value);
}

// internal override sealed double GetDurationWithDelay(Fuse.Animations.AnimationVariant dir) :62
void TrackAnimator__GetDurationWithDelay_fn(TrackAnimator* __this, int* dir, double* __retval)
{
    int dir_ = *dir;
    double duration = 0.0;

    if (__this->_discreteProvider != NULL)
        duration = ::g::Fuse::Animations::TrackProvider::GetDuration(uInterface(uPtr(__this->_discreteProvider), ::TYPES[45/*Fuse.Animations.TrackProvider*/]), __this, dir_);
    else if (__this->_continuousProvider != NULL)
        duration = ::g::Fuse::Animations::TrackProvider::GetDuration(uInterface(uPtr(__this->_continuousProvider), ::TYPES[45/*Fuse.Animations.TrackProvider*/]), __this, dir_);

    return *__retval = (((dir_ == 1) && __this->HasBack()) ? __this->DelayBack() : __this->Delay()) + duration, void();
}

// internal Fuse.Animations.TrackProvider GetProvider(Fuse.Animations.AnimationVariant variant) :102
void TrackAnimator__GetProvider_fn(TrackAnimator* __this, int* variant, uObject** __retval)
{
    *__retval = __this->GetProvider(*variant);
}

// internal bool get_HasBack() :172
void TrackAnimator__get_HasBack_fn(TrackAnimator* __this, bool* __retval)
{
    *__retval = __this->HasBack();
}

// internal void MarkDiscrete() :77
void TrackAnimator__MarkDiscrete_fn(TrackAnimator* __this)
{
    __this->MarkDiscrete();
}

// public double get_Weight() :256
void TrackAnimator__get_Weight_fn(TrackAnimator* __this, double* __retval)
{
    *__retval = __this->Weight();
}

// public void set_Weight(double value) :257
void TrackAnimator__set_Weight_fn(TrackAnimator* __this, double* value)
{
    __this->Weight(*value);
}

// protected generated TrackAnimator() [instance] :48
void TrackAnimator::ctor_2()
{
    _continuousProvider = (uObject*)::g::Fuse::Animations::EasingTrack::Singleton_;
    _easing = ::g::Fuse::Animations::Easing::Linear_;
    _weight = 1.0;
    ctor_1();
}

// public double get_DelayBack() [instance] :162
double TrackAnimator::DelayBack()
{
    return _hasDelayBack ? _delayBack : 0.0;
}

// public void set_DelayBack(double value) [instance] :163
void TrackAnimator::DelayBack(double value)
{
    _delayBack = value;
    _hasDelayBack = true;
}

// public generated double get_Duration() [instance] :138
double TrackAnimator::Duration()
{
    return _Duration;
}

// public generated void set_Duration(double value) [instance] :138
void TrackAnimator::Duration(double value)
{
    _Duration = value;
}

// public double get_DurationBack() [instance] :147
double TrackAnimator::DurationBack()
{
    return _hasDurationBack ? _durationBack : Duration();
}

// public void set_DurationBack(double value) [instance] :148
void TrackAnimator::DurationBack(double value)
{
    _durationBack = value;
    _hasDurationBack = true;
}

// public Fuse.Animations.Easing get_Easing() [instance] :116
::g::Fuse::Animations::Easing* TrackAnimator::Easing()
{
    return _easing;
}

// public void set_Easing(Fuse.Animations.Easing value) [instance] :117
void TrackAnimator::Easing(::g::Fuse::Animations::Easing* value)
{
    _easing = value;
}

// public Fuse.Animations.Easing get_EasingBack() [instance] :127
::g::Fuse::Animations::Easing* TrackAnimator::EasingBack()
{
    return _hasEasingBack ? (::g::Fuse::Animations::Easing*)_easingBack : (::g::Fuse::Animations::Easing*)_easing;
}

// public void set_EasingBack(Fuse.Animations.Easing value) [instance] :128
void TrackAnimator::EasingBack(::g::Fuse::Animations::Easing* value)
{
    _easingBack = value;
    _hasEasingBack = true;
}

// internal Fuse.Animations.TrackProvider GetProvider(Fuse.Animations.AnimationVariant variant) [instance] :102
uObject* TrackAnimator::GetProvider(int variant)
{
    uObject* ind1;
    ind1 = _discreteProvider;
    return (ind1 != NULL) ? ind1 : (uObject*)_continuousProvider;
}

// internal bool get_HasBack() [instance] :172
bool TrackAnimator::HasBack()
{
    return (_hasDelayBack || _hasDurationBack) || _hasEasingBack;
}

// internal void MarkDiscrete() [instance] :77
void TrackAnimator::MarkDiscrete()
{
    _discreteProvider = (uObject*)::g::Fuse::Animations::DiscreteSingleTrack::Singleton_;
    _continuousProvider = NULL;
    _isDiscrete = true;
}

// public double get_Weight() [instance] :256
double TrackAnimator::Weight()
{
    return _weight;
}

// public void set_Weight(double value) [instance] :257
void TrackAnimator::Weight(double value)
{
    _weight = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/TrackAnimator.uno
// ---------------------------------------------------------------------

// internal abstract class TrackAnimatorState :266
// {
static void TrackAnimatorState_build(uType* type)
{
    ::TYPES[15] = ::g::Fuse::Animations::ContinuousTrackProvider_typeof();
    ::TYPES[46] = ::g::Fuse::Animations::DiscreteTrackProvider_typeof();
    type->SetFields(3,
        ::TYPES[15/*Fuse.Animations.ContinuousTrackProvider*/], offsetof(TrackAnimatorState, _continuousProvider), 0,
        ::TYPES[46/*Fuse.Animations.DiscreteTrackProvider*/], offsetof(TrackAnimatorState, _discreteProvider), 0,
        ::g::Fuse::Animations::TrackAnimator_typeof(), offsetof(TrackAnimatorState, Animator), 0);
}

TrackAnimatorState_type* TrackAnimatorState_typeof()
{
    static uSStrong<TrackAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::AnimatorState_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(TrackAnimatorState);
    options.TypeSize = sizeof(TrackAnimatorState_type);
    type = (TrackAnimatorState_type*)uClassType::New("Fuse.Animations.TrackAnimatorState", options);
    type->fp_build_ = TrackAnimatorState_build;
    type->fp_SeekObjectValue = TrackAnimatorState__SeekObjectValue_fn;
    type->fp_SeekProgress = (void(*)(::g::Fuse::Animations::AnimatorState*, double*, double*, int*, double*, int*))TrackAnimatorState__SeekProgress_fn;
    type->fp_SeekTime = (void(*)(::g::Fuse::Animations::AnimatorState*, double*, double*, int*, double*, int*))TrackAnimatorState__SeekTime_fn;
    type->fp_SeekValue = TrackAnimatorState__SeekValue_fn;
    return type;
}

// protected TrackAnimatorState(Fuse.Animations.TrackAnimator animator, Fuse.Animations.CreateStateParams p, [Fuse.Visual useVisual]) :272
void TrackAnimatorState__ctor_1_fn(TrackAnimatorState* __this, ::g::Fuse::Animations::TrackAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Visual* useVisual)
{
    __this->ctor_1(animator, p, useVisual);
}

// public double get_Duration() :351
void TrackAnimatorState__get_Duration_fn(TrackAnimatorState* __this, double* __retval)
{
    *__retval = __this->Duration();
}

// public Fuse.Animations.Easing get_Easing() :356
void TrackAnimatorState__get_Easing_fn(TrackAnimatorState* __this, ::g::Fuse::Animations::Easing** __retval)
{
    *__retval = __this->Easing();
}

// public bool get_IsBackward() :346
void TrackAnimatorState__get_IsBackward_fn(TrackAnimatorState* __this, bool* __retval)
{
    *__retval = __this->IsBackward();
}

// protected virtual void SeekObjectValue(object value, float strength) :342
void TrackAnimatorState__SeekObjectValue_fn(TrackAnimatorState* __this, uObject* value, float* strength)
{
}

// internal override sealed Fuse.Animations.SeekResult SeekProgress(double progress, double interval, Fuse.Animations.SeekDirection dir, double strength) :282
void TrackAnimatorState__SeekProgress_fn(TrackAnimatorState* __this, double* progress, double* interval, int* dir, double* strength, int* __retval)
{
    double progress_ = *progress;
    double interval_ = *interval;
    int dir_ = *dir;
    double strength_ = *strength;

    if (__this->_continuousProvider != NULL)
    {
        double oStrength;
        ::g::Uno::Float4 oValue;
        int r = ::g::Fuse::Animations::ContinuousTrackProvider::GetSeekProgress(uInterface(uPtr(__this->_continuousProvider), ::TYPES[15/*Fuse.Animations.ContinuousTrackProvider*/]), __this, progress_, interval_, dir_, &oValue, &oStrength);
        __this->SeekValue(oValue, (float)((oStrength * strength_) * uPtr(__this->Animator)->Weight()));
        return *__retval = r, void();
    }

    if (__this->_discreteProvider != NULL)
    {
        double oStrength1;
        uObject* oValue1;
        int r1 = ::g::Fuse::Animations::DiscreteTrackProvider::GetSeekProgress(uInterface(uPtr(__this->_discreteProvider), ::TYPES[46/*Fuse.Animations.DiscreteTrackProvider*/]), __this, progress_, interval_, dir_, &oValue1, &oStrength1);
        __this->SeekObjectValue(oValue1, (float)((oStrength1 * strength_) * uPtr(__this->Animator)->Weight()));
        return *__retval = r1, void();
    }

    return *__retval = 3, void();
}

// internal override sealed Fuse.Animations.SeekResult SeekTime(double elapsed, double interval, Fuse.Animations.SeekDirection dir, double strength) :308
void TrackAnimatorState__SeekTime_fn(TrackAnimatorState* __this, double* elapsed, double* interval, int* dir, double* strength, int* __retval)
{
    double elapsed_ = *elapsed;
    double interval_ = *interval;
    int dir_ = *dir;
    double strength_ = *strength;
    double relTime;

    if (__this->IsBackward() && uPtr(__this->Animator)->HasBack())
        relTime = elapsed_ - ((__this->TotalDuration - uPtr(__this->Animator)->DelayBack()) - uPtr(__this->Animator)->DurationBack());
    else
        relTime = elapsed_ - uPtr(__this->Animator)->Delay();

    if (__this->_continuousProvider != NULL)
    {
        double oStrength;
        ::g::Uno::Float4 oValue;
        int r = ::g::Fuse::Animations::ContinuousTrackProvider::GetSeekTime(uInterface(uPtr(__this->_continuousProvider), ::TYPES[15/*Fuse.Animations.ContinuousTrackProvider*/]), __this, relTime, interval_, dir_, &oValue, &oStrength);
        __this->SeekValue(oValue, (float)((oStrength * strength_) * uPtr(__this->Animator)->Weight()));
        return *__retval = r, void();
    }

    if (__this->_discreteProvider != NULL)
    {
        double oStrength1;
        uObject* oValue1;
        int r1 = ::g::Fuse::Animations::DiscreteTrackProvider::GetSeekTime(uInterface(uPtr(__this->_discreteProvider), ::TYPES[46/*Fuse.Animations.DiscreteTrackProvider*/]), __this, relTime, interval_, dir_, &oValue1, &oStrength1);
        __this->SeekObjectValue(oValue1, (float)((oStrength1 * strength_) * uPtr(__this->Animator)->Weight()));
        return *__retval = r1, void();
    }

    return *__retval = 3, void();
}

// protected virtual void SeekValue(float4 value, float strength) :341
void TrackAnimatorState__SeekValue_fn(TrackAnimatorState* __this, ::g::Uno::Float4* value, float* strength)
{
}

// protected TrackAnimatorState(Fuse.Animations.TrackAnimator animator, Fuse.Animations.CreateStateParams p, [Fuse.Visual useVisual]) [instance] :272
void TrackAnimatorState::ctor_1(::g::Fuse::Animations::TrackAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Visual* useVisual)
{
    ctor_(p, useVisual);
    Animator = animator;
    uObject* pr = uPtr(animator)->GetProvider(Variant);
    _continuousProvider = uAs<uObject*>(pr, ::TYPES[15/*Fuse.Animations.ContinuousTrackProvider*/]);
    _discreteProvider = uAs<uObject*>(pr, ::TYPES[46/*Fuse.Animations.DiscreteTrackProvider*/]);
}

// public double get_Duration() [instance] :351
double TrackAnimatorState::Duration()
{
    return IsBackward() ? uPtr(Animator)->DurationBack() : uPtr(Animator)->Duration();
}

// public Fuse.Animations.Easing get_Easing() [instance] :356
::g::Fuse::Animations::Easing* TrackAnimatorState::Easing()
{
    return IsBackward() ? (::g::Fuse::Animations::Easing*)uPtr(Animator)->EasingBack() : (::g::Fuse::Animations::Easing*)uPtr(Animator)->Easing();
}

// public bool get_IsBackward() [instance] :346
bool TrackAnimatorState::IsBackward()
{
    return Variant == 1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/TrackAnimator.uno
// ---------------------------------------------------------------------

// internal abstract interface TrackProvider :10
// {
uInterfaceType* TrackProvider_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Animations.TrackProvider", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/TransformAnimator.uno
// -------------------------------------------------------------------------

// public abstract class TransformAnimator<TransformType> :25
// {
static void TransformAnimator_build(uType* type)
{
    ::TYPES[47] = ::g::Fuse::Animations::TransformAnimatorState_typeof();
    type->SetPrecalc(
        ::g::Fuse::Animations::TransformAnimatorState_typeof()->MakeType(type->T(0), NULL));
    type->SetFields(18,
        ::g::Uno::Int_typeof(), offsetof(TransformAnimator, _Priority), 0,
        ::g::Fuse::Visual_typeof(), offsetof(TransformAnimator, _RelativeNode), 0,
        ::g::Fuse::Visual_typeof(), offsetof(TransformAnimator, _Target), 0);
}

TransformAnimator_type* TransformAnimator_typeof()
{
    static uSStrong<TransformAnimator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::TrackAnimator_typeof();
    options.FieldCount = 21;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(TransformAnimator);
    options.TypeSize = sizeof(TransformAnimator_type);
    type = (TransformAnimator_type*)uClassType::New("Fuse.Animations.TransformAnimator`1", options);
    type->fp_build_ = TransformAnimator_build;
    type->fp_CreateState = (void(*)(::g::Fuse::Animations::Animator*, ::g::Fuse::Animations::CreateStateParams*, ::g::Fuse::Animations::AnimatorState**))TransformAnimator__CreateState_fn;
    return type;
}

// internal TransformAnimator() :28
void TransformAnimator__ctor_3_fn(TransformAnimator* __this)
{
    __this->ctor_3();
}

// internal override sealed Fuse.Animations.AnimatorState CreateState(Fuse.Animations.CreateStateParams p) :126
void TransformAnimator__CreateState_fn(TransformAnimator* __this, ::g::Fuse::Animations::CreateStateParams* p, ::g::Fuse::Animations::AnimatorState** __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(TransformAnimator_typeof())->Precalced(0/*Fuse.Animations.TransformAnimatorState<TransformType>*/),
    };
    return *__retval = (::g::Fuse::Animations::TransformAnimatorState*)::g::Fuse::Animations::TransformAnimatorState::New1(__types[0], __this, p), void();
}

// public generated int get_Priority() :122
void TransformAnimator__get_Priority_fn(TransformAnimator* __this, int* __retval)
{
    *__retval = __this->Priority();
}

// public generated void set_Priority(int value) :122
void TransformAnimator__set_Priority_fn(TransformAnimator* __this, int* value)
{
    __this->Priority(*value);
}

// public generated Fuse.Visual get_RelativeNode() :114
void TransformAnimator__get_RelativeNode_fn(TransformAnimator* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->RelativeNode();
}

// public generated void set_RelativeNode(Fuse.Visual value) :115
void TransformAnimator__set_RelativeNode_fn(TransformAnimator* __this, ::g::Fuse::Visual* value)
{
    __this->RelativeNode(value);
}

// public generated Fuse.Visual get_Target() :119
void TransformAnimator__get_Target_fn(TransformAnimator* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Visual value) :119
void TransformAnimator__set_Target_fn(TransformAnimator* __this, ::g::Fuse::Visual* value)
{
    __this->Target(value);
}

// public float3 get_Vector() :97
void TransformAnimator__get_Vector_fn(TransformAnimator* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->Vector();
}

// public void set_Vector(float3 value) :98
void TransformAnimator__set_Vector_fn(TransformAnimator* __this, ::g::Uno::Float3* value)
{
    __this->Vector(*value);
}

// public float get_X() :46
void TransformAnimator__get_X_fn(TransformAnimator* __this, float* __retval)
{
    *__retval = __this->X();
}

// public void set_X(float value) :47
void TransformAnimator__set_X_fn(TransformAnimator* __this, float* value)
{
    __this->X(*value);
}

// public float get_Y() :63
void TransformAnimator__get_Y_fn(TransformAnimator* __this, float* __retval)
{
    *__retval = __this->Y();
}

// public void set_Y(float value) :64
void TransformAnimator__set_Y_fn(TransformAnimator* __this, float* value)
{
    __this->Y(*value);
}

// internal TransformAnimator() [instance] :28
void TransformAnimator::ctor_3()
{
    ctor_2();
    MixOp(1);
}

// public generated int get_Priority() [instance] :122
int TransformAnimator::Priority()
{
    return _Priority;
}

// public generated void set_Priority(int value) [instance] :122
void TransformAnimator::Priority(int value)
{
    _Priority = value;
}

// public generated Fuse.Visual get_RelativeNode() [instance] :114
::g::Fuse::Visual* TransformAnimator::RelativeNode()
{
    return _RelativeNode;
}

// public generated void set_RelativeNode(Fuse.Visual value) [instance] :115
void TransformAnimator::RelativeNode(::g::Fuse::Visual* value)
{
    _RelativeNode = value;
}

// public generated Fuse.Visual get_Target() [instance] :119
::g::Fuse::Visual* TransformAnimator::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Visual value) [instance] :119
void TransformAnimator::Target(::g::Fuse::Visual* value)
{
    _Target = value;
}

// public float3 get_Vector() [instance] :97
::g::Uno::Float3 TransformAnimator::Vector()
{
    ::g::Uno::Float4 ind1;
    ind1 = _vectorValue;
    return ::g::Uno::Float3__New2(ind1.X, ind1.Y, ind1.Z);
}

// public void set_Vector(float3 value) [instance] :98
void TransformAnimator::Vector(::g::Uno::Float3 value)
{
    _vectorValue = ::g::Uno::Float4__New8(value, _vectorValue.W);
}

// public float get_X() [instance] :46
float TransformAnimator::X()
{
    return _vectorValue.X;
}

// public void set_X(float value) [instance] :47
void TransformAnimator::X(float value)
{
    _vectorValue.X = value;
}

// public float get_Y() [instance] :63
float TransformAnimator::Y()
{
    return _vectorValue.Y;
}

// public void set_Y(float value) [instance] :64
void TransformAnimator::Y(float value)
{
    _vectorValue.Y = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/TransformAnimator.uno
// -------------------------------------------------------------------------

// internal sealed class TransformAnimatorState<TransformType> :132
// {
static void TransformAnimatorState_build(uType* type)
{
    ::STRINGS[7] = uString::Const("Invalid seek");
    ::STRINGS[24] = uString::Const("/usr/local/share/uno/Packages/Fuse.Animations/1.3.1/TransformAnimator.uno");
    ::TYPES[11] = ::g::Fuse::Animations::IMixer_typeof();
    ::TYPES[48] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Transform_typeof(), NULL);
    ::TYPES[49] = ::g::Fuse::Transform_typeof();
    ::TYPES[30] = ::g::Fuse::Animations::IMixerHandle_typeof()->MakeType(::TYPES[49/*Fuse.Transform*/], NULL);
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof());
    type->SetFields(6,
        ::g::Uno::Bool_typeof(), offsetof(TransformAnimatorState, _inSeek), 0,
        ::g::Uno::Float_typeof(), offsetof(TransformAnimatorState, _lastStrength), 0,
        ::TYPES[48/*Uno.Action<Fuse.Transform>*/], offsetof(TransformAnimatorState, _matAct), 0,
        ::g::Fuse::Animations::TransformAnimator_typeof()->MakeType(type->T(0), NULL), offsetof(TransformAnimatorState, Animator1), 0,
        ::TYPES[30/*Fuse.Animations.IMixerHandle<Fuse.Transform>*/], offsetof(TransformAnimatorState, mixHandle), 0,
        type->T(0), offsetof(TransformAnimatorState, transform), 0);
}

::g::Fuse::Animations::TrackAnimatorState_type* TransformAnimatorState_typeof()
{
    static uSStrong< ::g::Fuse::Animations::TrackAnimatorState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Animations::TrackAnimatorState_typeof();
    options.FieldCount = 12;
    options.GenericCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(TransformAnimatorState);
    options.TypeSize = sizeof(::g::Fuse::Animations::TrackAnimatorState_type);
    type = (::g::Fuse::Animations::TrackAnimatorState_type*)uClassType::New("Fuse.Animations.TransformAnimatorState`1", options);
    type->fp_build_ = TransformAnimatorState_build;
    type->fp_Disable = (void(*)(::g::Fuse::Animations::AnimatorState*))TransformAnimatorState__Disable_fn;
    type->fp_SeekValue = (void(*)(::g::Fuse::Animations::TrackAnimatorState*, ::g::Uno::Float4*, float*))TransformAnimatorState__SeekValue_fn;
    return type;
}

// public TransformAnimatorState(Fuse.Animations.TransformAnimator<TransformType> animator, Fuse.Animations.CreateStateParams p) :140
void TransformAnimatorState__ctor_2_fn(TransformAnimatorState* __this, ::g::Fuse::Animations::TransformAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    __this->ctor_2(animator, p);
}

// public override sealed void Disable() :153
void TransformAnimatorState__Disable_fn(TransformAnimatorState* __this)
{
    if (__this->mixHandle == NULL)
        return;

    ::g::Fuse::Animations::IMixerHandle::Unregister(uInterface(uPtr(__this->mixHandle), ::TYPES[30/*Fuse.Animations.IMixerHandle<Fuse.Transform>*/]));
    __this->mixHandle = NULL;
    uPtr(uAs< ::g::Fuse::Transform*>(__this->transform, ::TYPES[49/*Fuse.Transform*/]))->remove_MatrixChanged(__this->_matAct);
    ::g::Fuse::Node::Unrelate(__this->Visual, __this->transform);
    __this->_matAct = NULL;
    __this->transform = NULL;
}

// public TransformAnimatorState New(Fuse.Animations.TransformAnimator<TransformType> animator, Fuse.Animations.CreateStateParams p) :140
void TransformAnimatorState__New1_fn(uType* __type, ::g::Fuse::Animations::TransformAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p, TransformAnimatorState** __retval)
{
    *__retval = TransformAnimatorState::New1(__type, animator, p);
}

// internal void OnMatrixChanged(Fuse.Transform ignore) :185
void TransformAnimatorState__OnMatrixChanged_fn(TransformAnimatorState* __this, ::g::Fuse::Transform* ignore)
{
    __this->OnMatrixChanged(ignore);
}

// protected override sealed void SeekValue(float4 value, float strength) :167
void TransformAnimatorState__SeekValue_fn(TransformAnimatorState* __this, ::g::Uno::Float4* value, float* strength)
{
    ::g::Uno::Float4 value_ = *value;
    float strength_ = *strength;

    if ((__this->mixHandle == NULL) || (__this->transform == NULL))
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[7/*"Invalid seek"*/], 0, ::STRINGS[24/*"/usr/local/...*/], 171);
        return;
    }

    __this->_inSeek = true;
    uPtr(__this->Animator1)->Update(__this->Visual, __this->transform, value_);
    __this->_lastStrength = strength_;
    ::g::Fuse::Animations::IMixerHandle::Set_ex(uInterface(uPtr(__this->mixHandle), ::TYPES[30/*Fuse.Animations.IMixerHandle<Fuse.Transform>*/]), __this->transform, uCRef(__this->_lastStrength));
    __this->_inSeek = false;
}

// public TransformAnimatorState(Fuse.Animations.TransformAnimator<TransformType> animator, Fuse.Animations.CreateStateParams p) [instance] :140
void TransformAnimatorState::ctor_2(::g::Fuse::Animations::TransformAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    transform = (::g::Fuse::Transform*)__type->T(0)->New();
    ctor_1(animator, p, uPtr(animator)->Target());
    Animator1 = animator;
    mixHandle = ::g::Fuse::Animations::IMixer::RegisterTransform(uInterface(uPtr(uPtr(Animator1)->Mixer), ::TYPES[11/*Fuse.Animations.IMixer*/]), Visual, uPtr(Animator1)->MixOp(), uPtr(Animator1)->Priority());
    _matAct = uDelegate::New(::TYPES[48/*Uno.Action<Fuse.Transform>*/], (void*)TransformAnimatorState__OnMatrixChanged_fn, this);
    uPtr(uAs< ::g::Fuse::Transform*>(transform, ::TYPES[49/*Fuse.Transform*/]))->add_MatrixChanged(_matAct);
    ::g::Fuse::Node::Relate(Visual, transform);
}

// internal void OnMatrixChanged(Fuse.Transform ignore) [instance] :185
void TransformAnimatorState::OnMatrixChanged(::g::Fuse::Transform* ignore)
{
    if ((!_inSeek && (mixHandle != NULL)) && (transform != NULL))
        ::g::Fuse::Animations::IMixerHandle::Set_ex(uInterface(uPtr(mixHandle), ::TYPES[30/*Fuse.Animations.IMixerHandle<Fuse.Transform>*/]), transform, uCRef(_lastStrength));
}

// public TransformAnimatorState New(Fuse.Animations.TransformAnimator<TransformType> animator, Fuse.Animations.CreateStateParams p) [static] :140
TransformAnimatorState* TransformAnimatorState::New1(uType* __type, ::g::Fuse::Animations::TransformAnimator* animator, ::g::Fuse::Animations::CreateStateParams* p)
{
    TransformAnimatorState* obj1 = (TransformAnimatorState*)uNew(__type);
    obj1->ctor_2(animator, p);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/TriggerAnimation.uno
// ------------------------------------------------------------------------

// public sealed class TriggerAnimation :25
// {
static void TriggerAnimation_build(uType* type)
{
    ::TYPES[50] = ::g::Fuse::Animations::AnimatorState_typeof()->Array();
    ::TYPES[51] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::TYPES[51/*Uno.Collections.List<Fuse.Animations.Animator>*/], offsetof(TriggerAnimation, _animators), 0,
        type, offsetof(TriggerAnimation, _backward), 0,
        ::g::Uno::Double_typeof(), offsetof(TriggerAnimation, _crossFadeDuration), 0,
        ::g::Uno::Bool_typeof(), offsetof(TriggerAnimation, _hasStretchDuration), 0,
        ::g::Fuse::Animations::PlayMode_typeof(), offsetof(TriggerAnimation, _playMode), 0,
        ::g::Uno::Double_typeof(), offsetof(TriggerAnimation, _stretchDuration), 0,
        ::g::Uno::Double_typeof(), offsetof(TriggerAnimation, _timeMultiplier), 0,
        ::TYPES[1/*Uno.Action*/], offsetof(TriggerAnimation, TimeChanged1), 0);
}

uType* TriggerAnimation_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.ObjectSize = sizeof(TriggerAnimation);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Animations.TriggerAnimation", options);
    type->fp_build_ = TriggerAnimation_build;
    type->fp_ctor_ = (void*)TriggerAnimation__New1_fn;
    return type;
}

// public generated TriggerAnimation() :25
void TriggerAnimation__ctor__fn(TriggerAnimation* __this)
{
    __this->ctor_();
}

// public Uno.Collections.IList<Fuse.Animations.Animator> get_Animators() :31
void TriggerAnimation__get_Animators_fn(TriggerAnimation* __this, uObject** __retval)
{
    *__retval = __this->Animators();
}

// public Fuse.Animations.TriggerAnimation get_Backward() :46
void TriggerAnimation__get_Backward_fn(TriggerAnimation* __this, TriggerAnimation** __retval)
{
    *__retval = __this->Backward();
}

// public void set_Backward(Fuse.Animations.TriggerAnimation value) :52
void TriggerAnimation__set_Backward_fn(TriggerAnimation* __this, TriggerAnimation* value)
{
    __this->Backward(value);
}

// internal Fuse.Animations.AnimatorState[] CreateAnimatorsState(Fuse.Animations.AnimationVariant variant, Fuse.Visual elm) :63
void TriggerAnimation__CreateAnimatorsState_fn(TriggerAnimation* __this, int* variant, ::g::Fuse::Visual* elm, uArray** __retval)
{
    *__retval = __this->CreateAnimatorsState(*variant, elm);
}

// internal Fuse.Animations.Player CreatePlayer([Fuse.Visual node], [Fuse.Animations.AnimationVariant variant]) :190
void TriggerAnimation__CreatePlayer_fn(TriggerAnimation* __this, ::g::Fuse::Visual* node, int* variant, ::g::Fuse::Animations::Player** __retval)
{
    *__retval = __this->CreatePlayer(node, *variant);
}

// internal Fuse.Animations.TriggerAnimationState CreateState([Fuse.Visual elm]) :178
void TriggerAnimation__CreateState_fn(TriggerAnimation* __this, ::g::Fuse::Visual* elm, ::g::Fuse::Animations::TriggerAnimationState** __retval)
{
    *__retval = __this->CreateState(elm);
}

// public double get_CrossFadeDuration() :128
void TriggerAnimation__get_CrossFadeDuration_fn(TriggerAnimation* __this, double* __retval)
{
    *__retval = __this->CrossFadeDuration();
}

// public void set_CrossFadeDuration(double value) :129
void TriggerAnimation__set_CrossFadeDuration_fn(TriggerAnimation* __this, double* value)
{
    __this->CrossFadeDuration(*value);
}

// public double GetAnimatorsDuration(Fuse.Animations.AnimationVariant variant) :78
void TriggerAnimation__GetAnimatorsDuration_fn(TriggerAnimation* __this, int* variant, double* __retval)
{
    *__retval = __this->GetAnimatorsDuration(*variant);
}

// public double GetTimeMultiplier(Fuse.Animations.AnimationVariant variant) :138
void TriggerAnimation__GetTimeMultiplier_fn(TriggerAnimation* __this, int* variant, double* __retval)
{
    *__retval = __this->GetTimeMultiplier(*variant);
}

// public bool get_HasBackward() :60
void TriggerAnimation__get_HasBackward_fn(TriggerAnimation* __this, bool* __retval)
{
    *__retval = __this->HasBackward();
}

// internal bool get_HasDirectionVariant() :158
void TriggerAnimation__get_HasDirectionVariant_fn(TriggerAnimation* __this, bool* __retval)
{
    *__retval = __this->HasDirectionVariant();
}

// public generated TriggerAnimation New() :25
void TriggerAnimation__New1_fn(TriggerAnimation** __retval)
{
    *__retval = TriggerAnimation::New1();
}

// private void OnTimeChanged() :132
void TriggerAnimation__OnTimeChanged_fn(TriggerAnimation* __this)
{
    __this->OnTimeChanged();
}

// public Fuse.Animations.PlayMode get_PlayMode() :206
void TriggerAnimation__get_PlayMode_fn(TriggerAnimation* __this, int* __retval)
{
    *__retval = __this->PlayMode();
}

// public void set_PlayMode(Fuse.Animations.PlayMode value) :207
void TriggerAnimation__set_PlayMode_fn(TriggerAnimation* __this, int* value)
{
    __this->PlayMode(*value);
}

// internal Fuse.Animations.AnimationVariant RestrictVariant(Fuse.Animations.AnimationVariant variant) :183
void TriggerAnimation__RestrictVariant_fn(TriggerAnimation* __this, int* variant, int* __retval)
{
    *__retval = __this->RestrictVariant(*variant);
}

// internal generated void add_TimeChanged(Uno.Action value) :154
void TriggerAnimation__add_TimeChanged_fn(TriggerAnimation* __this, uDelegate* value)
{
    __this->add_TimeChanged(value);
}

// internal generated void remove_TimeChanged(Uno.Action value) :154
void TriggerAnimation__remove_TimeChanged_fn(TriggerAnimation* __this, uDelegate* value)
{
    __this->remove_TimeChanged(value);
}

// public double get_TimeMultiplier() :100
void TriggerAnimation__get_TimeMultiplier_fn(TriggerAnimation* __this, double* __retval)
{
    *__retval = __this->TimeMultiplier();
}

// public void set_TimeMultiplier(double value) :101
void TriggerAnimation__set_TimeMultiplier_fn(TriggerAnimation* __this, double* value)
{
    __this->TimeMultiplier(*value);
}

// public generated TriggerAnimation() [instance] :25
void TriggerAnimation::ctor_()
{
    _timeMultiplier = 1.0;
    _crossFadeDuration = 0.5;
}

// public Uno.Collections.IList<Fuse.Animations.Animator> get_Animators() [instance] :31
uObject* TriggerAnimation::Animators()
{
    if (_animators == NULL)
        _animators = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[51/*Uno.Collections.List<Fuse.Animations.Animator>*/]));

    return (uObject*)_animators;
}

// public Fuse.Animations.TriggerAnimation get_Backward() [instance] :46
TriggerAnimation* TriggerAnimation::Backward()
{
    if (_backward == NULL)
        _backward = TriggerAnimation::New1();

    return _backward;
}

// public void set_Backward(Fuse.Animations.TriggerAnimation value) [instance] :52
void TriggerAnimation::Backward(TriggerAnimation* value)
{
    _backward = value;
}

// internal Fuse.Animations.AnimatorState[] CreateAnimatorsState(Fuse.Animations.AnimationVariant variant, Fuse.Visual elm) [instance] :63
uArray* TriggerAnimation::CreateAnimatorsState(int variant, ::g::Fuse::Visual* elm)
{
    ::g::Fuse::Animations::CreateStateParams* collection1;
    ::g::Fuse::Animations::Animator* ret3;
    collection1 = ::g::Fuse::Animations::CreateStateParams::New1();
    uPtr(collection1)->Variant = variant;
    uPtr(collection1)->TotalDuration = GetAnimatorsDuration(variant);
    uPtr(collection1)->Attached = elm;
    ::g::Fuse::Animations::CreateStateParams* csp = collection1;

    if (_animators == NULL)
        return uArray::New(::TYPES[50/*Fuse.Animations.AnimatorState[]*/], 0);

    uArray* state = uArray::New(::TYPES[50/*Fuse.Animations.AnimatorState[]*/], uPtr(_animators)->Count());

    for (int i = 0; i < uPtr(_animators)->Count(); ++i)
        uPtr(state)->Strong< ::g::Fuse::Animations::AnimatorState*>(i) = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_animators), uCRef<int>(i), &ret3), ret3))->CreateState(csp);

    return state;
}

// internal Fuse.Animations.Player CreatePlayer([Fuse.Visual node], [Fuse.Animations.AnimationVariant variant]) [instance] :190
::g::Fuse::Animations::Player* TriggerAnimation::CreatePlayer(::g::Fuse::Visual* node, int variant)
{
    variant = RestrictVariant(variant);

    if (variant == 0)
        return ::g::Fuse::Animations::Player::New1(node, this, 0, PlayMode());

    if (_backward != NULL)
        return ::g::Fuse::Animations::Player::New1(node, _backward, 0, PlayMode());

    return ::g::Fuse::Animations::Player::New1(node, this, 1, PlayMode());
}

// internal Fuse.Animations.TriggerAnimationState CreateState([Fuse.Visual elm]) [instance] :178
::g::Fuse::Animations::TriggerAnimationState* TriggerAnimation::CreateState(::g::Fuse::Visual* elm)
{
    return ::g::Fuse::Animations::TriggerAnimationState::New1(this, elm);
}

// public double get_CrossFadeDuration() [instance] :128
double TriggerAnimation::CrossFadeDuration()
{
    return _crossFadeDuration;
}

// public void set_CrossFadeDuration(double value) [instance] :129
void TriggerAnimation::CrossFadeDuration(double value)
{
    _crossFadeDuration = value;
}

// public double GetAnimatorsDuration(Fuse.Animations.AnimationVariant variant) [instance] :78
double TriggerAnimation::GetAnimatorsDuration(int variant)
{
    ::g::Fuse::Animations::Animator* ret4;

    if ((variant == 1) && (_backward != NULL))
        return uPtr(_backward)->GetAnimatorsDuration(0);

    if (_animators == NULL)
        return 0.0;

    double max = 0.0;
    int c = uPtr(_animators)->Count();

    for (int i = 0; i < c; ++i)
    {
        double q = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_animators), uCRef<int>(i), &ret4), ret4))->GetDurationWithDelay(variant);
        max = ::g::Uno::Math::Max(max, q);
    }

    return max;
}

// public double GetTimeMultiplier(Fuse.Animations.AnimationVariant variant) [instance] :138
double TriggerAnimation::GetTimeMultiplier(int variant)
{
    if (_hasStretchDuration)
    {
        double dur = GetAnimatorsDuration(variant);
        float zeroTolerance = 1e-05f;

        if (_stretchDuration < 9.9999997473787516e-06)
            return 1.0;

        double mult = (dur / _stretchDuration) * TimeMultiplier();
        return mult;
    }

    return TimeMultiplier();
}

// public bool get_HasBackward() [instance] :60
bool TriggerAnimation::HasBackward()
{
    return _backward != NULL;
}

// internal bool get_HasDirectionVariant() [instance] :158
bool TriggerAnimation::HasDirectionVariant()
{
    ::g::Fuse::Animations::Animator* ret5;

    if (_animators == NULL)
        return false;

    bool has = false;
    int c = uPtr(_animators)->Count();

    for (int i = 0; i < c; ++i)
    {
        int v = uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_animators), uCRef<int>(i), &ret5), ret5))->AnimatorVariant();

        if (v == 2)
            has = true;

        if (v == 1)
            return false;
    }

    return has;
}

// private void OnTimeChanged() [instance] :132
void TriggerAnimation::OnTimeChanged()
{
    if (::g::Uno::Delegate::op_Inequality(TimeChanged1, NULL))
        uPtr(TimeChanged1)->InvokeVoid();
}

// public Fuse.Animations.PlayMode get_PlayMode() [instance] :206
int TriggerAnimation::PlayMode()
{
    return _playMode;
}

// public void set_PlayMode(Fuse.Animations.PlayMode value) [instance] :207
void TriggerAnimation::PlayMode(int value)
{
    _playMode = value;
}

// internal Fuse.Animations.AnimationVariant RestrictVariant(Fuse.Animations.AnimationVariant variant) [instance] :183
int TriggerAnimation::RestrictVariant(int variant)
{
    if (!HasDirectionVariant() && (_backward == NULL))
        return 0;

    return variant;
}

// internal generated void add_TimeChanged(Uno.Action value) [instance] :154
void TriggerAnimation::add_TimeChanged(uDelegate* value)
{
    TimeChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(TimeChanged1, value), ::TYPES[1/*Uno.Action*/]);
}

// internal generated void remove_TimeChanged(Uno.Action value) [instance] :154
void TriggerAnimation::remove_TimeChanged(uDelegate* value)
{
    TimeChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(TimeChanged1, value), ::TYPES[1/*Uno.Action*/]);
}

// public double get_TimeMultiplier() [instance] :100
double TriggerAnimation::TimeMultiplier()
{
    return _timeMultiplier;
}

// public void set_TimeMultiplier(double value) [instance] :101
void TriggerAnimation::TimeMultiplier(double value)
{
    if (_timeMultiplier == value)
        return;

    _timeMultiplier = value;
    OnTimeChanged();
}

// public generated TriggerAnimation New() [static] :25
TriggerAnimation* TriggerAnimation::New1()
{
    TriggerAnimation* obj2 = (TriggerAnimation*)uNew(TriggerAnimation_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Animations/1.3.1/TriggerAnimation.uno
// ------------------------------------------------------------------------

// internal sealed class TriggerAnimationState :241
// {
static void TriggerAnimationState_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(TriggerAnimationState_type, interface0),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(TriggerAnimationState_type, interface1));
    type->SetFields(0,
        ::g::Fuse::Animations::Player_typeof(), offsetof(TriggerAnimationState, _backPlayer), 0,
        ::g::Fuse::Animations::Player_typeof(), offsetof(TriggerAnimationState, _curPlayer), 0,
        ::g::Fuse::Animations::AnimationVariant_typeof(), offsetof(TriggerAnimationState, _curPlayerVariant), 0,
        ::g::Fuse::Animations::Player_typeof(), offsetof(TriggerAnimationState, _forePlayer), 0,
        ::g::Fuse::Visual_typeof(), offsetof(TriggerAnimationState, _node), 0,
        ::g::Uno::Double_typeof(), offsetof(TriggerAnimationState, _prevProgress), 0,
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(TriggerAnimationState, Feedback), 0,
        ::g::Fuse::Animations::TriggerAnimation_typeof(), offsetof(TriggerAnimationState, _Animation), 0);
}

TriggerAnimationState_type* TriggerAnimationState_typeof()
{
    static uSStrong<TriggerAnimationState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TriggerAnimationState);
    options.TypeSize = sizeof(TriggerAnimationState_type);
    type = (TriggerAnimationState_type*)uClassType::New("Fuse.Animations.TriggerAnimationState", options);
    type->fp_build_ = TriggerAnimationState_build;
    type->interface0.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, int*))TriggerAnimationState__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
    type->interface1.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))TriggerAnimationState__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface1.fp_OnStable = (void(*)(uObject*, uObject*))TriggerAnimationState__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    return type;
}

// internal TriggerAnimationState(Fuse.Animations.TriggerAnimation animation, Fuse.Visual node) :246
void TriggerAnimationState__ctor__fn(TriggerAnimationState* __this, ::g::Fuse::Animations::TriggerAnimation* animation, ::g::Fuse::Visual* node)
{
    __this->ctor_(animation, node);
}

// private generated Fuse.Animations.TriggerAnimation get_Animation() :243
void TriggerAnimationState__get_Animation_fn(TriggerAnimationState* __this, ::g::Fuse::Animations::TriggerAnimation** __retval)
{
    *__retval = __this->Animation();
}

// private generated void set_Animation(Fuse.Animations.TriggerAnimation value) :243
void TriggerAnimationState__set_Animation_fn(TriggerAnimationState* __this, ::g::Fuse::Animations::TriggerAnimation* value)
{
    __this->Animation(value);
}

// public double get_CurrentAnimatorsDuration() :459
void TriggerAnimationState__get_CurrentAnimatorsDuration_fn(TriggerAnimationState* __this, double* __retval)
{
    *__retval = __this->CurrentAnimatorsDuration();
}

// public void Dispose() :257
void TriggerAnimationState__Dispose_fn(TriggerAnimationState* __this)
{
    __this->Dispose();
}

// private void Fuse.Animations.IBasePlayerFeedback.OnPlaybackDone(object s) :322
void TriggerAnimationState__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn(TriggerAnimationState* __this, uObject* s)
{
    if (s != __this->_curPlayer)
        return;

    if (__this->Feedback != NULL)
        ::g::Fuse::Animations::IBasePlayerFeedback::OnPlaybackDone(uInterface(uPtr(__this->Feedback), ::TYPES[25/*Fuse.Animations.IBasePlayerFeedback*/]), __this);
}

// private void Fuse.Animations.IBasePlayerFeedback.OnStable(object s) :331
void TriggerAnimationState__FuseAnimationsIBasePlayerFeedbackOnStable_fn(TriggerAnimationState* __this, uObject* s)
{
    if (s != __this->_curPlayer)
        return;

    if (__this->Feedback != NULL)
        ::g::Fuse::Animations::IBasePlayerFeedback::OnStable(uInterface(uPtr(__this->Feedback), ::TYPES[25/*Fuse.Animations.IBasePlayerFeedback*/]), __this);
}

// private void Fuse.Animations.IPlayerFeedback.OnProgressUpdated(object s, Fuse.Animations.PlayerFeedbackFlags flags) :293
void TriggerAnimationState__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn(TriggerAnimationState* __this, uObject* s, int* flags)
{
    int flags_ = *flags;

    if (s != __this->_curPlayer)
        return;

    if (__this->Feedback != NULL)
    {
        double prev = __this->_prevProgress;
        double cur = __this->Progress();
        double diff = cur - prev;

        if (diff == 0.0)
            return;

        if ((flags_ & 1) == 1)
        {
            flags_ = flags_ & -2;
            ::g::Fuse::Animations::IUnwrappedPlayerFeedback::OnProgressUpdated(uInterface(uPtr(__this->Feedback), ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof()), __this, prev, (double)((diff > 0.0) ? 0 : 1), flags_);
            ::g::Fuse::Animations::IUnwrappedPlayerFeedback::OnProgressUpdated(uInterface(uPtr(__this->Feedback), ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof()), __this, (double)((diff > 0.0) ? 1 : 0), cur, flags_);
        }
        else
            ::g::Fuse::Animations::IUnwrappedPlayerFeedback::OnProgressUpdated(uInterface(uPtr(__this->Feedback), ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof()), __this, prev, cur, flags_);
    }

    __this->_prevProgress = __this->Progress();
}

// private Fuse.Animations.Player GetCurrentPlayer(Fuse.Animations.AnimationVariant tendTo, Fuse.Animations.TriggerAnimationState.SeekFlags flags) :470
void TriggerAnimationState__GetCurrentPlayer_fn(TriggerAnimationState* __this, int* tendTo, int* flags, ::g::Fuse::Animations::Player** __retval)
{
    *__retval = __this->GetCurrentPlayer(*tendTo, *flags);
}

// private Fuse.Animations.Player GetPlayer([Fuse.Animations.AnimationVariant variant], [bool noFade]) :350
void TriggerAnimationState__GetPlayer_fn(TriggerAnimationState* __this, int* variant, bool* noFade, ::g::Fuse::Animations::Player** __retval)
{
    *__retval = __this->GetPlayer(*variant, *noFade);
}

// public bool get_IsStable() :342
void TriggerAnimationState__get_IsStable_fn(TriggerAnimationState* __this, bool* __retval)
{
    *__retval = __this->IsStable();
}

// internal TriggerAnimationState New(Fuse.Animations.TriggerAnimation animation, Fuse.Visual node) :246
void TriggerAnimationState__New1_fn(::g::Fuse::Animations::TriggerAnimation* animation, ::g::Fuse::Visual* node, TriggerAnimationState** __retval)
{
    *__retval = TriggerAnimationState::New1(animation, node);
}

// private void OnTimeChanged() :278
void TriggerAnimationState__OnTimeChanged_fn(TriggerAnimationState* __this)
{
    __this->OnTimeChanged();
}

// public void PlayEnd(bool on) :431
void TriggerAnimationState__PlayEnd_fn(TriggerAnimationState* __this, bool* on)
{
    __this->PlayEnd(*on);
}

// public void PlayOff() :419
void TriggerAnimationState__PlayOff_fn(TriggerAnimationState* __this)
{
    __this->PlayOff();
}

// public void PlayOn() :425
void TriggerAnimationState__PlayOn_fn(TriggerAnimationState* __this)
{
    __this->PlayOn();
}

// public void PlayToProgress(double progress, [Fuse.Animations.AnimationVariant tendTo], [Fuse.Animations.TriggerAnimationState.SeekFlags flags]) :499
void TriggerAnimationState__PlayToProgress_fn(TriggerAnimationState* __this, double* progress, int* tendTo, int* flags)
{
    __this->PlayToProgress(*progress, *tendTo, *flags);
}

// public double get_Progress() :441
void TriggerAnimationState__get_Progress_fn(TriggerAnimationState* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public bool get_ProgressFullOff() :468
void TriggerAnimationState__get_ProgressFullOff_fn(TriggerAnimationState* __this, bool* __retval)
{
    *__retval = __this->ProgressFullOff();
}

// public bool get_ProgressFullOn() :467
void TriggerAnimationState__get_ProgressFullOn_fn(TriggerAnimationState* __this, bool* __retval)
{
    *__retval = __this->ProgressFullOn();
}

// public void SeekProgress(double newProgress, [Fuse.Animations.AnimationVariant tendTo], [Fuse.Animations.TriggerAnimationState.SeekFlags flags]) :489
void TriggerAnimationState__SeekProgress_fn(TriggerAnimationState* __this, double* newProgress, int* tendTo, int* flags)
{
    __this->SeekProgress(*newProgress, *tendTo, *flags);
}

// private void TrackProgress(Fuse.Animations.Player player) :287
void TriggerAnimationState__TrackProgress_fn(TriggerAnimationState* __this, ::g::Fuse::Animations::Player* player)
{
    __this->TrackProgress(player);
}

// internal TriggerAnimationState(Fuse.Animations.TriggerAnimation animation, Fuse.Visual node) [instance] :246
void TriggerAnimationState::ctor_(::g::Fuse::Animations::TriggerAnimation* animation, ::g::Fuse::Visual* node)
{
    Animation(animation);
    uPtr(Animation())->add_TimeChanged(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)TriggerAnimationState__OnTimeChanged_fn, this));
    _node = node;
}

// private generated Fuse.Animations.TriggerAnimation get_Animation() [instance] :243
::g::Fuse::Animations::TriggerAnimation* TriggerAnimationState::Animation()
{
    return _Animation;
}

// private generated void set_Animation(Fuse.Animations.TriggerAnimation value) [instance] :243
void TriggerAnimationState::Animation(::g::Fuse::Animations::TriggerAnimation* value)
{
    _Animation = value;
}

// public double get_CurrentAnimatorsDuration() [instance] :459
double TriggerAnimationState::CurrentAnimatorsDuration()
{
    if (_curPlayer == NULL)
        return uPtr(Animation())->GetAnimatorsDuration(0);

    return uPtr(_curPlayer)->AnimatorsDuration();
}

// public void Dispose() [instance] :257
void TriggerAnimationState::Dispose()
{
    uPtr(Animation())->remove_TimeChanged(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)TriggerAnimationState__OnTimeChanged_fn, this));
    Feedback = NULL;

    if (_forePlayer != NULL)
    {
        uPtr(_forePlayer)->Disable();
        _forePlayer = NULL;
    }

    if (_backPlayer != NULL)
    {
        uPtr(_backPlayer)->Disable();
        _backPlayer = NULL;
    }

    _curPlayer = NULL;
    _node = NULL;
}

// private Fuse.Animations.Player GetCurrentPlayer(Fuse.Animations.AnimationVariant tendTo, Fuse.Animations.TriggerAnimationState.SeekFlags flags) [instance] :470
::g::Fuse::Animations::Player* TriggerAnimationState::GetCurrentPlayer(int tendTo, int flags)
{
    if (!((flags & 1) == 1))
    {
        if (((_curPlayer != NULL) && (uPtr(_curPlayer)->Progress() < 1.0)) && (uPtr(_curPlayer)->Progress() > 0.0))
            return _curPlayer;
    }

    return uAs< ::g::Fuse::Animations::Player*>(GetPlayer(tendTo, false), ::g::Fuse::Animations::Player_typeof());
}

// private Fuse.Animations.Player GetPlayer([Fuse.Animations.AnimationVariant variant], [bool noFade]) [instance] :350
::g::Fuse::Animations::Player* TriggerAnimationState::GetPlayer(int variant, bool noFade)
{
    ::g::Fuse::Animations::Player* cur, *prev;
    variant = uPtr(Animation())->RestrictVariant(variant);

    if ((_curPlayer != NULL) && (_curPlayerVariant == variant))
        return _curPlayer;

    bool isNew = false;

    if (variant == 0)
    {
        if (_forePlayer == NULL)
        {
            _forePlayer = uPtr(Animation())->CreatePlayer(_node, variant);
            isNew = true;
        }

        cur = _forePlayer;
        prev = _backPlayer;
    }
    else
    {
        if (_backPlayer == NULL)
        {
            _backPlayer = uPtr(Animation())->CreatePlayer(_node, variant);
            uPtr(_backPlayer)->SeekProgress(1.0, false);
            isNew = true;
        }

        cur = _backPlayer;
        prev = _forePlayer;
    }

    if (isNew)
        TrackProgress(cur);

    _curPlayer = cur;
    _curPlayerVariant = variant;

    if (prev != NULL)
    {
        double prevProgress = uPtr(prev)->Progress();
        prev->SeekProgress(prevProgress, false);
        uPtr(cur)->SeekProgress(prevProgress, false);

        if (isNew)
            uPtr(cur)->Strength(0.0);

        double remainTime = prev->RemainTime();
        float zeroTolerance = 1e-05f;

        if ((prev->IsSyncState() || (remainTime < 9.9999997473787516e-06)) || noFade)
        {
            uPtr(prev)->Strength(0.0);
            uPtr(cur)->Strength(1.0);
        }
        else
        {
            double fadeTime = ::g::Uno::Math::Min(remainTime, uPtr(Animation())->CrossFadeDuration());
            uPtr(cur)->FadeIn(fadeTime);
            uPtr(prev)->FadeOut(fadeTime);
        }
    }

    return cur;
}

// public bool get_IsStable() [instance] :342
bool TriggerAnimationState::IsStable()
{
    if (_curPlayer == NULL)
        return true;

    return uPtr(_curPlayer)->IsStable();
}

// private void OnTimeChanged() [instance] :278
void TriggerAnimationState::OnTimeChanged()
{
    if (_forePlayer != NULL)
        uPtr(_forePlayer)->TimeChanged();

    if (_backPlayer != NULL)
        uPtr(_backPlayer)->TimeChanged();
}

// public void PlayEnd(bool on) [instance] :431
void TriggerAnimationState::PlayEnd(bool on)
{
    if (on)
        PlayOn();
    else
        PlayOff();
}

// public void PlayOff() [instance] :419
void TriggerAnimationState::PlayOff()
{
    ::g::Fuse::Animations::Player* p = GetPlayer(1, false);
    uPtr(p)->PlayToStart();
}

// public void PlayOn() [instance] :425
void TriggerAnimationState::PlayOn()
{
    ::g::Fuse::Animations::Player* p = GetPlayer(0, false);
    uPtr(p)->PlayToEnd();
}

// public void PlayToProgress(double progress, [Fuse.Animations.AnimationVariant tendTo], [Fuse.Animations.TriggerAnimationState.SeekFlags flags]) [instance] :499
void TriggerAnimationState::PlayToProgress(double progress, int tendTo, int flags)
{
    ::g::Fuse::Animations::Player* player = GetCurrentPlayer(tendTo, flags);
    uPtr(player)->PlayToProgress(progress);
}

// public double get_Progress() [instance] :441
double TriggerAnimationState::Progress()
{
    if (_curPlayer != NULL)
        return uPtr(_curPlayer)->Progress();

    return 0.0;
}

// public bool get_ProgressFullOff() [instance] :468
bool TriggerAnimationState::ProgressFullOff()
{
    return Progress() <= 0.0;
}

// public bool get_ProgressFullOn() [instance] :467
bool TriggerAnimationState::ProgressFullOn()
{
    return Progress() >= 1.0;
}

// public void SeekProgress(double newProgress, [Fuse.Animations.AnimationVariant tendTo], [Fuse.Animations.TriggerAnimationState.SeekFlags flags]) [instance] :489
void TriggerAnimationState::SeekProgress(double newProgress, int tendTo, int flags)
{
    bool bypassUpdate = (flags & 2) == 2;
    ::g::Fuse::Animations::Player* player = GetCurrentPlayer(tendTo, flags);

    if (bypassUpdate)
        _prevProgress = newProgress;

    uPtr(player)->SeekProgress(newProgress, !bypassUpdate);
}

// private void TrackProgress(Fuse.Animations.Player player) [instance] :287
void TriggerAnimationState::TrackProgress(::g::Fuse::Animations::Player* player)
{
    uPtr(player)->Feedback = (uObject*)this;
}

// internal TriggerAnimationState New(Fuse.Animations.TriggerAnimation animation, Fuse.Visual node) [static] :246
TriggerAnimationState* TriggerAnimationState::New1(::g::Fuse::Animations::TriggerAnimation* animation, ::g::Fuse::Visual* node)
{
    TriggerAnimationState* obj1 = (TriggerAnimationState*)uNew(TriggerAnimationState_typeof());
    obj1->ctor_(animation, node);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Motion/1.3.1/DestinationBehavior.uno
// -----------------------------------------------------------------------

// public delegate void DestinationBehavior<T>.ValueHandler(T value) :17
uDelegateType* DestinationBehavior__ValueHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Animations.DestinationBehavior`1.ValueHandler", 1, 1);
    type->SetSignature(uVoid_typeof(),
        type->T(0));
    return type;
}

}}} // ::g::Fuse::Animations
