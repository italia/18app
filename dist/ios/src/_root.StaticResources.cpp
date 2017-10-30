// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/StaticResources.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.app18_bundle.h>
#include <_root.StaticResources.h>
#include <Fuse.Font.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[19];

namespace g{

// public partial sealed class StaticResources :2
// {
// static StaticResources() :23
static void StaticResources__cctor_4_fn(uType* __type)
{
    ::g::Uno::UX::Resource_typeof()->Init();
    StaticResources::FontAwesome_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::app18_bundle::fontawesomewebfont3110b159()));
    StaticResources::sizeXXS_ = 10.0f;
    StaticResources::sizeXS_ = 12.0f;
    StaticResources::sizeS_ = 14.0f;
    StaticResources::sizeM_ = 16.0f;
    StaticResources::sizeL_ = 18.0f;
    StaticResources::sizeXL_ = 20.0f;
    StaticResources::colorGreen_ = ::g::Uno::Float4__New2(0.007843138f, 0.6431373f, 0.372549f, 1.0f);
    StaticResources::colorGray_ = ::g::Uno::Float4__New2(0.6627451f, 0.6941177f, 0.7215686f, 1.0f);
    StaticResources::colorGrayDark_ = ::g::Uno::Float4__New2(0.3529412f, 0.4039216f, 0.4470588f, 1.0f);
    StaticResources::colorWhite_ = ::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f);
    StaticResources::colorRed_ = ::g::Uno::Float4__New2(0.8156863f, 0.007843138f, 0.1058824f, 1.0f);
    StaticResources::colorBlue_ = ::g::Uno::Float4__New2(0.0f, 0.4f, 0.8f, 1.0f);
    StaticResources::colorDarkBlue_ = ::g::Uno::Float4__New2(0.03921569f, 0.2666667f, 0.5647059f, 1.0f);
    StaticResources::colorBlack_ = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f);
    StaticResources::colorGrayLight_ = ::g::Uno::Float4__New2(0.9411765f, 0.9411765f, 0.9411765f, 1.0f);
    StaticResources::RegularFont_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::app18_bundle::TitilliumWebRegular85bc3e86()));
    StaticResources::BaseFont_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::app18_bundle::TitilliumWebBold9ab6430b()));
    StaticResources::BoldFont_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::app18_bundle::TitilliumWebBlackc1f3a035()));
    ::g::Uno::UX::Resource::SetGlobalKey(StaticResources::FontAwesome_, ::STRINGS[0/*"FontAwesome"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float_typeof(), StaticResources::sizeXXS_), ::STRINGS[1/*"size.XXS"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float_typeof(), StaticResources::sizeXS_), ::STRINGS[2/*"size.XS"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float_typeof(), StaticResources::sizeS_), ::STRINGS[3/*"size.S"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float_typeof(), StaticResources::sizeM_), ::STRINGS[4/*"size.M"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float_typeof(), StaticResources::sizeL_), ::STRINGS[5/*"size.L"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float_typeof(), StaticResources::sizeXL_), ::STRINGS[6/*"size.XL"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), StaticResources::colorGreen_), ::STRINGS[7/*"color.Green"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), StaticResources::colorGray_), ::STRINGS[8/*"color.Gray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), StaticResources::colorGrayDark_), ::STRINGS[9/*"color.GrayD...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), StaticResources::colorWhite_), ::STRINGS[10/*"color.White"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), StaticResources::colorRed_), ::STRINGS[11/*"color.Red"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), StaticResources::colorBlue_), ::STRINGS[12/*"color.Blue"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), StaticResources::colorDarkBlue_), ::STRINGS[13/*"color.DarkB...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), StaticResources::colorBlack_), ::STRINGS[14/*"color.Black"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), StaticResources::colorGrayLight_), ::STRINGS[15/*"color.GrayL...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(StaticResources::RegularFont_, ::STRINGS[16/*"RegularFont"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(StaticResources::BaseFont_, ::STRINGS[17/*"BaseFont"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(StaticResources::BoldFont_, ::STRINGS[18/*"BoldFont"*/]);
}

static void StaticResources_build(uType* type)
{
    ::STRINGS[0] = uString::Const("FontAwesome");
    ::STRINGS[1] = uString::Const("size.XXS");
    ::STRINGS[2] = uString::Const("size.XS");
    ::STRINGS[3] = uString::Const("size.S");
    ::STRINGS[4] = uString::Const("size.M");
    ::STRINGS[5] = uString::Const("size.L");
    ::STRINGS[6] = uString::Const("size.XL");
    ::STRINGS[7] = uString::Const("color.Green");
    ::STRINGS[8] = uString::Const("color.Gray");
    ::STRINGS[9] = uString::Const("color.GrayDark");
    ::STRINGS[10] = uString::Const("color.White");
    ::STRINGS[11] = uString::Const("color.Red");
    ::STRINGS[12] = uString::Const("color.Blue");
    ::STRINGS[13] = uString::Const("color.DarkBlue");
    ::STRINGS[14] = uString::Const("color.Black");
    ::STRINGS[15] = uString::Const("color.GrayLight");
    ::STRINGS[16] = uString::Const("RegularFont");
    ::STRINGS[17] = uString::Const("BaseFont");
    ::STRINGS[18] = uString::Const("BoldFont");
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17));
    type->SetFields(112,
        ::g::Fuse::Font_typeof(), (uintptr_t)&StaticResources::BaseFont_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&StaticResources::BoldFont_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&StaticResources::colorBlack_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&StaticResources::colorBlue_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&StaticResources::colorDarkBlue_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&StaticResources::colorGray_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&StaticResources::colorGrayDark_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&StaticResources::colorGrayLight_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&StaticResources::colorGreen_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&StaticResources::colorRed_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&StaticResources::colorWhite_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&StaticResources::FontAwesome_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&StaticResources::RegularFont_, uFieldFlagsStatic,
        ::g::Uno::Float_typeof(), (uintptr_t)&StaticResources::sizeL_, uFieldFlagsStatic,
        ::g::Uno::Float_typeof(), (uintptr_t)&StaticResources::sizeM_, uFieldFlagsStatic,
        ::g::Uno::Float_typeof(), (uintptr_t)&StaticResources::sizeS_, uFieldFlagsStatic,
        ::g::Uno::Float_typeof(), (uintptr_t)&StaticResources::sizeXL_, uFieldFlagsStatic,
        ::g::Uno::Float_typeof(), (uintptr_t)&StaticResources::sizeXS_, uFieldFlagsStatic,
        ::g::Uno::Float_typeof(), (uintptr_t)&StaticResources::sizeXXS_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* StaticResources_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 131;
    options.InterfaceCount = 18;
    options.ObjectSize = sizeof(StaticResources);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("StaticResources", options);
    type->fp_build_ = StaticResources_build;
    type->fp_cctor_ = StaticResources__cctor_4_fn;
    type->interface17.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface17.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface17.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
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
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
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

uSStrong< ::g::Fuse::Font*> StaticResources::BaseFont_;
uSStrong< ::g::Fuse::Font*> StaticResources::BoldFont_;
::g::Uno::Float4 StaticResources::colorBlack_;
::g::Uno::Float4 StaticResources::colorBlue_;
::g::Uno::Float4 StaticResources::colorDarkBlue_;
::g::Uno::Float4 StaticResources::colorGray_;
::g::Uno::Float4 StaticResources::colorGrayDark_;
::g::Uno::Float4 StaticResources::colorGrayLight_;
::g::Uno::Float4 StaticResources::colorGreen_;
::g::Uno::Float4 StaticResources::colorRed_;
::g::Uno::Float4 StaticResources::colorWhite_;
uSStrong< ::g::Fuse::Font*> StaticResources::FontAwesome_;
uSStrong< ::g::Fuse::Font*> StaticResources::RegularFont_;
float StaticResources::sizeL_;
float StaticResources::sizeM_;
float StaticResources::sizeS_;
float StaticResources::sizeXL_;
float StaticResources::sizeXS_;
float StaticResources::sizeXXS_;
// }

} // ::g
