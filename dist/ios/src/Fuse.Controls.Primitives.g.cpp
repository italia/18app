// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.Primitives.ShadowElement.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.Primitives.Rectangle.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.ICommonViewport.h>
#include <Fuse.IViewport.h>
#include <Fuse.VisualBounds.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Math.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[3];

namespace g{
namespace Fuse{
namespace Controls{
namespace Primitives{

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.3.1/ShadowElement.uno
// ------------------------------------------------------------------------------

// internal sealed class ShadowElement :11
// {
static void ShadowElement_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::ICommonViewport_typeof();
    ::TYPES[1] = ::g::Fuse::Controls::Rectangle_typeof();
    ::TYPES[2] = ::g::Fuse::Controls::Circle_typeof();
    type->SetDependencies(
        ::g::Fuse::Drawing::Primitives::Rectangle_typeof(),
        ::g::Fuse::Controls::Rectangle_typeof(),
        ::g::Uno::UX::Selector_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Elements::Element_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Elements::Element_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Elements::Element_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Elements::Element_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Elements::Element_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Elements::Element_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Elements::Element_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Elements::Element_type, interface7),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Elements::Element_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Elements::Element_type, interface9),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Elements::Element_type, interface10),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Elements::Element_type, interface11),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Elements::Element_type, interface12),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Elements::Element_type, interface13),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Elements::Element_type, interface14),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Elements::Element_type, interface15),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Elements::Element_type, interface16));
    type->SetFields(99,
        ::TYPES[2/*Fuse.Controls.Circle*/], offsetof(ShadowElement, _circleParent), 0,
        ::g::Uno::Float4_typeof(), offsetof(ShadowElement, _color), 0,
        ::g::Fuse::Drawing::SolidColor_typeof(), offsetof(ShadowElement, _fill), 0,
        ::g::Uno::Float_typeof(), offsetof(ShadowElement, _minSmoothness), 0,
        ::TYPES[1/*Fuse.Controls.Rectangle*/], offsetof(ShadowElement, _rectangleParent), 0,
        ::g::Uno::Float_typeof(), offsetof(ShadowElement, _size), 0);
}

::g::Fuse::Elements::Element_type* ShadowElement_typeof()
{
    static uSStrong< ::g::Fuse::Elements::Element_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Elements::Element_typeof();
    options.FieldCount = 105;
    options.InterfaceCount = 17;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(ShadowElement);
    options.TypeSize = sizeof(::g::Fuse::Elements::Element_type);
    type = (::g::Fuse::Elements::Element_type*)uClassType::New("Fuse.Controls.Primitives.ShadowElement", options);
    type->fp_build_ = ShadowElement_build;
    type->fp_ctor_ = (void*)ShadowElement__New2_fn;
    type->fp_CalcRenderBounds = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::VisualBounds**))ShadowElement__CalcRenderBounds_fn;
    type->fp_OnDraw = (void(*)(::g::Fuse::Elements::Element*, ::g::Fuse::DrawContext*))ShadowElement__OnDraw_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))ShadowElement__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))ShadowElement__OnUnrooted_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))ShadowElement__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface12.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface14.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface13.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface16.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface15.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface15.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface15.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface9.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface10.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface10.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface6.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface11.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface10.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface6.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface6.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface8.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface10.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface10.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
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

// public generated ShadowElement() :11
void ShadowElement__ctor_4_fn(ShadowElement* __this)
{
    __this->ctor_4();
}

// protected override sealed Fuse.VisualBounds CalcRenderBounds() :113
void ShadowElement__CalcRenderBounds_fn(ShadowElement* __this, ::g::Fuse::VisualBounds** __retval)
{
    ::g::Fuse::VisualBounds* ret3;
    ::g::Fuse::VisualBounds* r = (::g::Fuse::Elements::Element__CalcRenderBounds_fn(__this, &ret3), ret3);
    r = uPtr(r)->AddRect(::g::Uno::Float2__New1(0.0f), __this->ActualSize());
    return *__retval = r->InflateXY(__this->Smoothness() - 1.0f), void();
}

// public float4 get_Color() :102
void ShadowElement__get_Color_fn(ShadowElement* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value) :103
void ShadowElement__set_Color_fn(ShadowElement* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// private float4 get_CornerRadius() :69
void ShadowElement__get_CornerRadius_fn(ShadowElement* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->CornerRadius();
}

// private float get_MaxSize() :82
void ShadowElement__get_MaxSize_fn(ShadowElement* __this, float* __retval)
{
    *__retval = __this->MaxSize();
}

// public generated ShadowElement New() :11
void ShadowElement__New2_fn(ShadowElement** __retval)
{
    *__retval = ShadowElement::New2();
}

// protected override sealed void OnDraw(Fuse.DrawContext dc) :121
void ShadowElement__OnDraw_fn(ShadowElement* __this, ::g::Fuse::DrawContext* dc)
{
    ::g::Uno::Float4 ind1;
    float alphaFade = 1.0f;

    if (__this->_size > __this->MaxSize())
        alphaFade = __this->MaxSize() / __this->_size;

    uPtr(__this->_fill)->Color(::g::Uno::Float4__New8((ind1 = __this->_color, ::g::Uno::Float3__New2(ind1.X, ind1.Y, ind1.Z)), __this->_color.W * alphaFade));
    ::g::Uno::Float2 size = __this->ActualSize();
    ::g::Uno::Float2 offset = ::g::Uno::Float2__New1(0.0f);

    if (__this->_circleParent != NULL)
    {
        size = ::g::Uno::Float2__New2(uPtr(__this->_circleParent)->Radius() * 2.0f, uPtr(__this->_circleParent)->Radius() * 2.0f);
        offset = ::g::Uno::Float2__op_Subtraction1(::g::Uno::Float2__op_Division1(__this->ActualSize(), 2.0f), uPtr(__this->_circleParent)->Radius());
    }

    uPtr(::g::Fuse::Drawing::Primitives::Rectangle::Singleton_)->Shadow(dc, __this, size, __this->CornerRadius(), __this->_fill, offset, __this->Smoothness() * ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(__this->Viewport()), ::TYPES[0/*Fuse.ICommonViewport*/])));
}

// protected override sealed void OnRooted() :17
void ShadowElement__OnRooted_fn(ShadowElement* __this)
{
    ::g::Fuse::Elements::Element__OnRooted_fn(__this);
    __this->_rectangleParent = uAs< ::g::Fuse::Controls::Rectangle*>(__this->Parent(), ::TYPES[1/*Fuse.Controls.Rectangle*/]);

    if (__this->_rectangleParent != NULL)
        uPtr(__this->_rectangleParent)->AddPropertyListener((uObject*)__this);

    __this->_circleParent = uAs< ::g::Fuse::Controls::Circle*>(__this->Parent(), ::TYPES[2/*Fuse.Controls.Circle*/]);
    __this->_minSmoothness = (1.5f / ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(__this->Viewport()), ::TYPES[0/*Fuse.ICommonViewport*/])));
}

// protected override sealed void OnUnrooted() :30
void ShadowElement__OnUnrooted_fn(ShadowElement* __this)
{
    __this->_minSmoothness = 0.0f;

    if (__this->_rectangleParent != NULL)
        uPtr(__this->_rectangleParent)->RemovePropertyListener((uObject*)__this);

    __this->_rectangleParent = NULL;
    __this->_circleParent = NULL;
    ::g::Fuse::Elements::Element__OnUnrooted_fn(__this);
}

// public float get_Size() :55
void ShadowElement__get_Size_fn(ShadowElement* __this, float* __retval)
{
    *__retval = __this->Size();
}

// public void set_Size(float value) :56
void ShadowElement__set_Size_fn(ShadowElement* __this, float* value)
{
    __this->Size(*value);
}

// private float get_Smoothness() :86
void ShadowElement__get_Smoothness_fn(ShadowElement* __this, float* __retval)
{
    *__retval = __this->Smoothness();
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :43
void ShadowElement__UnoUXIPropertyListenerOnPropertyChanged_fn(ShadowElement* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    ::g::Uno::UX::Selector prop_ = *prop;

    if (__this->_rectangleParent != NULL)
    {
        if (::g::Uno::UX::Selector__op_Equality(prop_, ::g::Fuse::Controls::Rectangle::CornerRadiusPropertyName_))
            __this->InvalidateVisual();
    }
}

// public generated ShadowElement() [instance] :11
void ShadowElement::ctor_4()
{
    _fill = ::g::Fuse::Drawing::SolidColor::New2();
    ctor_3();
}

// public float4 get_Color() [instance] :102
::g::Uno::Float4 ShadowElement::Color()
{
    return _color;
}

// public void set_Color(float4 value) [instance] :103
void ShadowElement::Color(::g::Uno::Float4 value)
{
    if (::g::Uno::Float4__op_Inequality(_color, value))
    {
        _color = value;
        InvalidateVisual();
    }
}

// private float4 get_CornerRadius() [instance] :69
::g::Uno::Float4 ShadowElement::CornerRadius()
{
    float size = _size;

    if (_rectangleParent != NULL)
        return ::g::Uno::Math::Sqrt4(::g::Uno::Float4__op_Addition(size * size, ::g::Uno::Float4__op_Multiply2(uPtr(_rectangleParent)->CornerRadius(), uPtr(_rectangleParent)->CornerRadius())));
    else if (_circleParent != NULL)
        return ::g::Uno::Float4__New1(uPtr(_circleParent)->Radius() + size);
    else
        return ::g::Uno::Float4__New1(size);
}

// private float get_MaxSize() [instance] :82
float ShadowElement::MaxSize()
{
    return ::g::Uno::Math::Min1(ActualSize().X, ActualSize().Y);
}

// public float get_Size() [instance] :55
float ShadowElement::Size()
{
    return _size;
}

// public void set_Size(float value) [instance] :56
void ShadowElement::Size(float value)
{
    if (_size != value)
    {
        _size = value;
        InvalidateVisual();
        InvalidateRenderBounds();
    }
}

// private float get_Smoothness() [instance] :86
float ShadowElement::Smoothness()
{
    float size = _size + ::g::Uno::Math::Max1(0.0f, _size - MaxSize());
    return ::g::Uno::Math::Max1(size * 2.5f, _minSmoothness);
}

// public generated ShadowElement New() [static] :11
ShadowElement* ShadowElement::New2()
{
    ShadowElement* obj2 = (ShadowElement*)uNew(ShadowElement_typeof());
    obj2->ctor_4();
    return obj2;
}
// }

}}}} // ::g::Fuse::Controls::Primitives
