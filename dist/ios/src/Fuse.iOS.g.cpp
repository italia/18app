// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.iOS.StatusBarConfig.h>
#include <Fuse.Node.h>
#include <Fuse.Platform.StatusBarAnimation.h>
#include <Fuse.Platform.StatusBarStyle.h>
#include <Fuse.Platform.SystemUI.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Int.h>
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace iOS{

// /usr/local/share/uno/Packages/Fuse.iOS/1.3.1/StatusBarConfig.uno
// ----------------------------------------------------------------

// public sealed class StatusBarConfig :28
// {
// static generated StatusBarConfig() :28
static void StatusBarConfig__cctor_1_fn(uType* __type)
{
    StatusBarConfig::_stack_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<Fuse.iOS.StatusBarConfig>*/]));
}

static void StatusBarConfig_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(type, NULL);
    type->SetDependencies(
        ::g::Fuse::Platform::SystemUI_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5));
    type->SetFields(15,
        ::g::Fuse::Platform::StatusBarAnimation_typeof(), offsetof(StatusBarConfig, _animation), 0,
        ::g::Uno::Bool_typeof(), offsetof(StatusBarConfig, _hasAnimation), 0,
        ::g::Uno::Bool_typeof(), offsetof(StatusBarConfig, _hasIsVisible), 0,
        ::g::Uno::Bool_typeof(), offsetof(StatusBarConfig, _hasStyle), 0,
        ::g::Uno::Bool_typeof(), offsetof(StatusBarConfig, _isVisible), 0,
        ::g::Fuse::Platform::StatusBarStyle_typeof(), offsetof(StatusBarConfig, _style), 0,
        ::TYPES[0/*Uno.Collections.List<Fuse.iOS.StatusBarConfig>*/], (uintptr_t)&StatusBarConfig::_stack_, uFieldFlagsStatic);
}

::g::Fuse::Node_type* StatusBarConfig_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 22;
    options.InterfaceCount = 6;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(StatusBarConfig);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.iOS.StatusBarConfig", options);
    type->fp_build_ = StatusBarConfig_build;
    type->fp_ctor_ = (void*)StatusBarConfig__New2_fn;
    type->fp_cctor_ = StatusBarConfig__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))StatusBarConfig__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))StatusBarConfig__OnUnrooted_fn;
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

// public generated StatusBarConfig() :28
void StatusBarConfig__ctor_3_fn(StatusBarConfig* __this)
{
    __this->ctor_3();
}

// public Fuse.Platform.StatusBarAnimation get_Animation() :77
void StatusBarConfig__get_Animation_fn(StatusBarConfig* __this, int* __retval)
{
    *__retval = __this->Animation();
}

// public void set_Animation(Fuse.Platform.StatusBarAnimation value) :78
void StatusBarConfig__set_Animation_fn(StatusBarConfig* __this, int* value)
{
    __this->Animation(*value);
}

// private static void Apply() :136
void StatusBarConfig__Apply_fn()
{
    StatusBarConfig::Apply();
}

// private static Fuse.Platform.StatusBarAnimation GetAnimation() :126
void StatusBarConfig__GetAnimation_fn(int* __retval)
{
    *__retval = StatusBarConfig::GetAnimation();
}

// private static bool GetIsVisible() :106
void StatusBarConfig__GetIsVisible_fn(bool* __retval)
{
    *__retval = StatusBarConfig::GetIsVisible();
}

// private static Fuse.Platform.StatusBarStyle GetStyle() :116
void StatusBarConfig__GetStyle_fn(int* __retval)
{
    *__retval = StatusBarConfig::GetStyle();
}

// public bool get_IsVisible() :38
void StatusBarConfig__get_IsVisible_fn(StatusBarConfig* __this, bool* __retval)
{
    *__retval = __this->IsVisible();
}

// public void set_IsVisible(bool value) :39
void StatusBarConfig__set_IsVisible_fn(StatusBarConfig* __this, bool* value)
{
    __this->IsVisible(*value);
}

// public generated StatusBarConfig New() :28
void StatusBarConfig__New2_fn(StatusBarConfig** __retval)
{
    *__retval = StatusBarConfig::New2();
}

// protected override sealed void OnRooted() :90
void StatusBarConfig__OnRooted_fn(StatusBarConfig* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    ::g::Uno::Collections::List__Add_fn(uPtr(StatusBarConfig::_stack_), __this);
    StatusBarConfig::Apply();
}

// protected override sealed void OnUnrooted() :98
void StatusBarConfig__OnUnrooted_fn(StatusBarConfig* __this)
{
    bool ret8;
    ::g::Uno::Collections::List__Remove_fn(uPtr(StatusBarConfig::_stack_), __this, &ret8);
    StatusBarConfig::Apply();
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// public Fuse.Platform.StatusBarStyle get_Style() :57
void StatusBarConfig__get_Style_fn(StatusBarConfig* __this, int* __retval)
{
    *__retval = __this->Style();
}

// public void set_Style(Fuse.Platform.StatusBarStyle value) :58
void StatusBarConfig__set_Style_fn(StatusBarConfig* __this, int* value)
{
    __this->Style(*value);
}

uSStrong< ::g::Uno::Collections::List*> StatusBarConfig::_stack_;

// public generated StatusBarConfig() [instance] :28
void StatusBarConfig::ctor_3()
{
    ctor_2();
}

// public Fuse.Platform.StatusBarAnimation get_Animation() [instance] :77
int StatusBarConfig::Animation()
{
    return _animation;
}

// public void set_Animation(Fuse.Platform.StatusBarAnimation value) [instance] :78
void StatusBarConfig::Animation(int value)
{
    if (!_hasAnimation || (_animation != value))
    {
        _animation = value;
        _hasAnimation = true;
        StatusBarConfig::Apply();
    }
}

// public bool get_IsVisible() [instance] :38
bool StatusBarConfig::IsVisible()
{
    return _isVisible;
}

// public void set_IsVisible(bool value) [instance] :39
void StatusBarConfig::IsVisible(bool value)
{
    if (!_hasIsVisible || (_isVisible != value))
    {
        _isVisible = value;
        _hasIsVisible = true;
        StatusBarConfig::Apply();
    }
}

// public Fuse.Platform.StatusBarStyle get_Style() [instance] :57
int StatusBarConfig::Style()
{
    return _style;
}

// public void set_Style(Fuse.Platform.StatusBarStyle value) [instance] :58
void StatusBarConfig::Style(int value)
{
    if (!_hasStyle || (_style != value))
    {
        _style = value;
        _hasStyle = true;
        StatusBarConfig::Apply();
    }
}

// private static void Apply() [static] :136
void StatusBarConfig::Apply()
{
    int anim = StatusBarConfig::GetAnimation();
    int style = StatusBarConfig::GetStyle();
    bool visible = StatusBarConfig::GetIsVisible();

    if (::g::Fuse::Platform::SystemUI::uStatusBarAnimation1() != anim)
        ::g::Fuse::Platform::SystemUI::uStatusBarAnimation1(anim);

    if (::g::Fuse::Platform::SystemUI::uStatusBarStyle1() != style)
        ::g::Fuse::Platform::SystemUI::uStatusBarStyle1(style);

    if (::g::Fuse::Platform::SystemUI::IsTopFrameVisible() != visible)
        ::g::Fuse::Platform::SystemUI::IsTopFrameVisible(visible);
}

// private static Fuse.Platform.StatusBarAnimation GetAnimation() [static] :126
int StatusBarConfig::GetAnimation()
{
    StatusBarConfig* ret2;
    StatusBarConfig* ret3;

    for (int i = uPtr(StatusBarConfig::_stack_)->Count(); (i--) > 0; )
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(StatusBarConfig::_stack_), uCRef<int>(i), &ret2), ret2))->_hasAnimation)
            return uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(StatusBarConfig::_stack_), uCRef<int>(i), &ret3), ret3))->Animation();

    return 0;
}

// private static bool GetIsVisible() [static] :106
bool StatusBarConfig::GetIsVisible()
{
    StatusBarConfig* ret4;
    StatusBarConfig* ret5;

    for (int i = uPtr(StatusBarConfig::_stack_)->Count(); (i--) > 0; )
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(StatusBarConfig::_stack_), uCRef<int>(i), &ret4), ret4))->_hasIsVisible)
            return uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(StatusBarConfig::_stack_), uCRef<int>(i), &ret5), ret5))->IsVisible();

    return true;
}

// private static Fuse.Platform.StatusBarStyle GetStyle() [static] :116
int StatusBarConfig::GetStyle()
{
    StatusBarConfig* ret6;
    StatusBarConfig* ret7;

    for (int i = uPtr(StatusBarConfig::_stack_)->Count(); (i--) > 0; )
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(StatusBarConfig::_stack_), uCRef<int>(i), &ret6), ret6))->_hasStyle)
            return uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(StatusBarConfig::_stack_), uCRef<int>(i), &ret7), ret7))->Style();

    return 0;
}

// public generated StatusBarConfig New() [static] :28
StatusBarConfig* StatusBarConfig::New2()
{
    StatusBarConfig* obj1 = (StatusBarConfig*)uNew(StatusBarConfig_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

}}} // ::g::Fuse::iOS
