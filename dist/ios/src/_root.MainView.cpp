// This file was generated based on /Users/r0xstation/18app/src/.uno/ux13/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.app18_bundle.h>
#include <_root.app18_FuseControlsShadow_Color_Property.h>
#include <_root.app18_FuseElementsElement_Opacity_Property.h>
#include <_root.app18_FuseElementsElement_Visibility_Property.h>
#include <_root.BottomBar.h>
#include <_root.CloseIcon.h>
#include <_root.HomePage.h>
#include <_root.InfoPage.h>
#include <_root.LogoutIcon.h>
#include <_root.MainView.h>
#include <_root.MerchantProfilePage.h>
#include <_root.MerchantsListPage.h>
#include <_root.MyCouponPage.h>
#include <_root.NavBar.h>
#include <_root.NewCouponMerchantStep1Page.h>
#include <_root.NewCouponMerchantStep2Page.h>
#include <_root.NewCouponMerchantStep3Page.h>
#include <_root.NewCouponMerchantStep4Page.h>
#include <_root.NewCouponStep1Page.h>
#include <_root.NewCouponStep2Page.h>
#include <_root.NewCouponStep3Page.h>
#include <_root.NewCouponStep4Page.h>
#include <_root.NotificationsIcon.h>
#include <_root.NotificationsPage.h>
#include <_root.ProfileIcon.h>
#include <_root.ProfilePage.h>
#include <_root.Separator.h>
#include <_root.StaticResources.h>
#include <Fuse.Android.StatusBarConfig.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.BottomBarBackground.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.EdgeNavigator.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Navigator.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shadow.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.StatusBarBackground.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.BrushConverter.h>
#include <Fuse.Drawing.Brushes.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Elements.ITransformOrigin.h>
#include <Fuse.Elements.TransformOrigins.h>
#include <Fuse.Elements.TranslationModes.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.FileSystem.FileSystemModule.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.iOS.StatusBarConfig.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.ActivatingAnimation.h>
#include <Fuse.Navigation.EdgeNavigation.h>
#include <Fuse.Navigation.NavigateToggle.h>
#include <Fuse.Navigation.NavigationEdge.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Node.h>
#include <Fuse.Platform.StatusBarStyle.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.FuseJS.DiagnosticsImplModule.h>
#include <Fuse.Reactive.FuseJS.Email.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Reactive.FuseJS.InterApp.h>
#include <Fuse.Reactive.FuseJS.Maps.h>
#include <Fuse.Reactive.FuseJS.Phone.h>
#include <Fuse.Reactive.FuseJS.TimerModule.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Resources.MemoryPolicy.h>
#include <Fuse.ScalingModes.h>
#include <Fuse.Storage.StorageModule.h>
#include <Fuse.Testing.UnoTestingHelper.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions.GiveFocus.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.BusyTaskModule.h>
#include <Fuse.Triggers.IScrolledLength.h>
#include <Fuse.Triggers.IScrolledLengths.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.OnUserEvent.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileKeyboardVisible.h>
#include <Fuse.Visual.h>
#include <Fuse.WebSocket.WebSocketClientModule.h>
#include <FuseJS.Base64.h>
#include <FuseJS.Bundle.h>
#include <FuseJS.Environment.h>
#include <FuseJS.FileReaderImpl.h>
#include <FuseJS.Globals.h>
#include <FuseJS.Lifecycle.h>
#include <FuseJS.UserEvents.h>
#include <Polyfills.Window.WindowModule.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[146];
static uType* TYPES[10];

namespace g{

// public partial sealed class MainView :2
// {
// static MainView() :56
static void MainView__cctor_1_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    ::g::Uno::UX::Resource_typeof()->Init();
    ::g::Fuse::Animations::Easing_typeof()->Init();
    ::g::Fuse::Drawing::Colors_typeof()->Init();
    ::g::Fuse::Drawing::Brushes_typeof()->Init();
    ::g::Fuse::Elements::TransformOrigins_typeof()->Init();
    ::g::Fuse::Elements::TranslationModes_typeof()->Init();
    ::g::Fuse::TranslationModes_typeof()->Init();
    ::g::Fuse::Triggers::Actions::GiveFocus_typeof()->Init();
    ::g::Fuse::Triggers::WhileKeyboardVisible_typeof()->Init();
    ::g::Fuse::Triggers::LayoutTransition_typeof()->Init();
    ::g::Fuse::Triggers::IScrolledLengths_typeof()->Init();
    ::g::Fuse::Resources::MemoryPolicy_typeof()->Init();
    ::g::Fuse::Font_typeof()->Init();
    ::g::Fuse::ScalingModes_typeof()->Init();
    MainView::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 23, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"sidebar"*/], ::STRINGS[2/*"shadow"*/], ::STRINGS[3/*"temp_eb0"*/], ::STRINGS[4/*"temp_eb1"*/], ::STRINGS[5/*"navBar"*/], ::STRINGS[6/*"sidebarFade"*/], ::STRINGS[7/*"home"*/], ::STRINGS[8/*"newCouponSt...*/], ::STRINGS[9/*"newCouponSt...*/], ::STRINGS[10/*"newCouponSt...*/], ::STRINGS[11/*"newCouponSt...*/], ::STRINGS[12/*"myCoupon"*/], ::STRINGS[13/*"merchants"*/], ::STRINGS[14/*"merchantPro...*/], ::STRINGS[15/*"newCouponMe...*/], ::STRINGS[16/*"newCouponMe...*/], ::STRINGS[17/*"newCouponMe...*/], ::STRINGS[18/*"newCouponMe...*/], ::STRINGS[19/*"info"*/], ::STRINGS[20/*"profile"*/], ::STRINGS[21/*"notifications"*/], ::STRINGS[22/*"bottomBar"*/]);
    MainView::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[23/*"Color"*/]);
    MainView::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[24/*"Opacity"*/]);
    MainView::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[25/*"Visibility"*/]);
    MainView::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"router"*/]);
    MainView::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"sidebar"*/]);
    MainView::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"shadow"*/]);
    MainView::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"navBar"*/]);
    MainView::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[26/*"openSideBar"*/]);
    MainView::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"sidebarFade"*/]);
    MainView::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"home"*/]);
    MainView::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"newCouponSt...*/]);
    MainView::__selector11_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"newCouponSt...*/]);
    MainView::__selector12_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"newCouponSt...*/]);
    MainView::__selector13_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[11/*"newCouponSt...*/]);
    MainView::__selector14_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[12/*"myCoupon"*/]);
    MainView::__selector15_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[13/*"merchants"*/]);
    MainView::__selector16_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[14/*"merchantPro...*/]);
    MainView::__selector17_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[15/*"newCouponMe...*/]);
    MainView::__selector18_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[16/*"newCouponMe...*/]);
    MainView::__selector19_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[17/*"newCouponMe...*/]);
    MainView::__selector20_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[18/*"newCouponMe...*/]);
    MainView::__selector21_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[19/*"info"*/]);
    MainView::__selector22_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[20/*"profile"*/]);
    MainView::__selector23_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[21/*"notifications"*/]);
    MainView::__selector24_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[22/*"bottomBar"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::Linear_, ::STRINGS[27/*"Linear"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticIn_, ::STRINGS[28/*"QuadraticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticOut_, ::STRINGS[29/*"QuadraticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticInOut_, ::STRINGS[30/*"QuadraticIn...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicIn_, ::STRINGS[31/*"CubicIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicOut_, ::STRINGS[32/*"CubicOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicInOut_, ::STRINGS[33/*"CubicInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticIn_, ::STRINGS[34/*"QuarticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticOut_, ::STRINGS[35/*"QuarticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticInOut_, ::STRINGS[36/*"QuarticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticIn_, ::STRINGS[37/*"QuinticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticOut_, ::STRINGS[38/*"QuinticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticInOut_, ::STRINGS[39/*"QuinticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalIn_, ::STRINGS[40/*"SinusoidalIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalOut_, ::STRINGS[41/*"SinusoidalOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalInOut_, ::STRINGS[42/*"SinusoidalI...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialIn_, ::STRINGS[43/*"ExponentialIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialOut_, ::STRINGS[44/*"Exponential...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialInOut_, ::STRINGS[45/*"Exponential...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularIn_, ::STRINGS[46/*"CircularIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularOut_, ::STRINGS[47/*"CircularOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularInOut_, ::STRINGS[48/*"CircularInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticIn_, ::STRINGS[49/*"ElasticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticOut_, ::STRINGS[50/*"ElasticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticInOut_, ::STRINGS[51/*"ElasticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackIn_, ::STRINGS[52/*"BackIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackOut_, ::STRINGS[53/*"BackOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackInOut_, ::STRINGS[54/*"BackInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceIn_, ::STRINGS[55/*"BounceIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceOut_, ::STRINGS[56/*"BounceOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceInOut_, ::STRINGS[57/*"BounceInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Transparent_), ::STRINGS[58/*"Transparent"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Transparent_, ::STRINGS[58/*"Transparent"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Black_), ::STRINGS[59/*"Black"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Black_, ::STRINGS[59/*"Black"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Silver_), ::STRINGS[60/*"Silver"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Silver_, ::STRINGS[60/*"Silver"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Gray_), ::STRINGS[61/*"Gray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Gray_, ::STRINGS[61/*"Gray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::White_), ::STRINGS[62/*"White"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::White_, ::STRINGS[62/*"White"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Maroon_), ::STRINGS[63/*"Maroon"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Maroon_, ::STRINGS[63/*"Maroon"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Red_), ::STRINGS[64/*"Red"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Red_, ::STRINGS[64/*"Red"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Purple_), ::STRINGS[65/*"Purple"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Purple_, ::STRINGS[65/*"Purple"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Fuchsia_), ::STRINGS[66/*"Fuchsia"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Fuchsia_, ::STRINGS[66/*"Fuchsia"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Green_), ::STRINGS[67/*"Green"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Green_, ::STRINGS[67/*"Green"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Lime_), ::STRINGS[68/*"Lime"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Lime_, ::STRINGS[68/*"Lime"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Olive_), ::STRINGS[69/*"Olive"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Olive_, ::STRINGS[69/*"Olive"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Yellow_), ::STRINGS[70/*"Yellow"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Yellow_, ::STRINGS[70/*"Yellow"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Navy_), ::STRINGS[71/*"Navy"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Navy_, ::STRINGS[71/*"Navy"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Blue_), ::STRINGS[72/*"Blue"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Blue_, ::STRINGS[72/*"Blue"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Teal_), ::STRINGS[73/*"Teal"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Teal_, ::STRINGS[73/*"Teal"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Aqua_), ::STRINGS[74/*"Aqua"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Aqua_, ::STRINGS[74/*"Aqua"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::TopLeft_, ::STRINGS[75/*"TopLeft"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Center_, ::STRINGS[76/*"Center"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Anchor_, ::STRINGS[77/*"Anchor"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::HorizontalBoxCenter_, ::STRINGS[78/*"HorizontalB...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::VerticalBoxCenter_, ::STRINGS[79/*"VerticalBox...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::TransformOriginOffset_, ::STRINGS[80/*"TransformOr...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::PositionOffset_, ::STRINGS[81/*"PositionOff...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::SizeFactor_, ::STRINGS[82/*"SizeFactor"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::Size_, ::STRINGS[83/*"Size"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Size_, ::STRINGS[83/*"Size"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::Actions::GiveFocus::Singleton_, ::STRINGS[84/*"GiveFocus"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::WhileKeyboardVisible::Keyboard_, ::STRINGS[85/*"Keyboard"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionLayoutChange_, ::STRINGS[86/*"LayoutChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::SizeLayoutChange_, ::STRINGS[86/*"LayoutChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange_, ::STRINGS[87/*"WorldPositi...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionChange_, ::STRINGS[88/*"PositionCha...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ResizeSizeChange_, ::STRINGS[89/*"SizeChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ScalingSizeChange_, ::STRINGS[89/*"SizeChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Points_, ::STRINGS[90/*"Points"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Pixels_, ::STRINGS[91/*"Pixels"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ContentSize_, ::STRINGS[92/*"ContentSize"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ScrollViewSize_, ::STRINGS[93/*"ScrollViewS...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::PreloadRetain_, ::STRINGS[94/*"PreloadRetain"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadUnused_, ::STRINGS[95/*"UnloadUnused"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::QuickUnload_, ::STRINGS[96/*"QuickUnload"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadInBackgroundPolicy_, ::STRINGS[97/*"UnloadInBac...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Thin_, ::STRINGS[98/*"Thin"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Light_, ::STRINGS[99/*"Light"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Regular_, ::STRINGS[100/*"Regular"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Medium_, ::STRINGS[101/*"Medium"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Bold_, ::STRINGS[102/*"Bold"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::ThinItalic_, ::STRINGS[103/*"ThinItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::LightItalic_, ::STRINGS[104/*"LightItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Italic_, ::STRINGS[105/*"Italic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::MediumItalic_, ::STRINGS[106/*"MediumItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::BoldItalic_, ::STRINGS[107/*"BoldItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::PlatformDefault(), ::STRINGS[108/*"PlatformDef...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::ScalingModes::Identity_, ::STRINGS[109/*"Identity"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Local_, ::STRINGS[110/*"Local"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::ParentSize_, ::STRINGS[111/*"ParentSize"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Width_, ::STRINGS[112/*"Width"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Height_, ::STRINGS[113/*"Height"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::StaticResources::FontAwesome(), ::STRINGS[114/*"FontAwesome"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float_typeof(), ::g::StaticResources::sizeXXS()), ::STRINGS[115/*"size.XXS"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float_typeof(), ::g::StaticResources::sizeXS()), ::STRINGS[116/*"size.XS"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float_typeof(), ::g::StaticResources::sizeS()), ::STRINGS[117/*"size.S"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float_typeof(), ::g::StaticResources::sizeM()), ::STRINGS[118/*"size.M"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float_typeof(), ::g::StaticResources::sizeL()), ::STRINGS[119/*"size.L"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float_typeof(), ::g::StaticResources::sizeXL()), ::STRINGS[120/*"size.XL"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::StaticResources::colorGreen()), ::STRINGS[121/*"color.Green"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::StaticResources::colorGray()), ::STRINGS[122/*"color.Gray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::StaticResources::colorGrayDark()), ::STRINGS[123/*"color.GrayD...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::StaticResources::colorWhite()), ::STRINGS[124/*"color.White"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::StaticResources::colorRed()), ::STRINGS[125/*"color.Red"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::StaticResources::colorBlue()), ::STRINGS[126/*"color.Blue"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::StaticResources::colorDarkBlue()), ::STRINGS[127/*"color.DarkB...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::StaticResources::colorBlack()), ::STRINGS[128/*"color.Black"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::StaticResources::colorGrayLight()), ::STRINGS[129/*"color.GrayL...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::StaticResources::RegularFont(), ::STRINGS[130/*"RegularFont"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::StaticResources::BaseFont(), ::STRINGS[131/*"BaseFont"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::StaticResources::BoldFont(), ::STRINGS[132/*"BoldFont"*/]);
}

static void MainView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("sidebar");
    ::STRINGS[2] = uString::Const("shadow");
    ::STRINGS[3] = uString::Const("temp_eb0");
    ::STRINGS[4] = uString::Const("temp_eb1");
    ::STRINGS[5] = uString::Const("navBar");
    ::STRINGS[6] = uString::Const("sidebarFade");
    ::STRINGS[7] = uString::Const("home");
    ::STRINGS[8] = uString::Const("newCouponStep1");
    ::STRINGS[9] = uString::Const("newCouponStep2");
    ::STRINGS[10] = uString::Const("newCouponStep3");
    ::STRINGS[11] = uString::Const("newCouponStep4");
    ::STRINGS[12] = uString::Const("myCoupon");
    ::STRINGS[13] = uString::Const("merchants");
    ::STRINGS[14] = uString::Const("merchantProfile");
    ::STRINGS[15] = uString::Const("newCouponMerchantStep1");
    ::STRINGS[16] = uString::Const("newCouponMerchantStep2");
    ::STRINGS[17] = uString::Const("newCouponMerchantStep3");
    ::STRINGS[18] = uString::Const("newCouponMerchantStep4");
    ::STRINGS[19] = uString::Const("info");
    ::STRINGS[20] = uString::Const("profile");
    ::STRINGS[21] = uString::Const("notifications");
    ::STRINGS[22] = uString::Const("bottomBar");
    ::STRINGS[23] = uString::Const("Color");
    ::STRINGS[24] = uString::Const("Opacity");
    ::STRINGS[25] = uString::Const("Visibility");
    ::STRINGS[26] = uString::Const("openSideBar");
    ::STRINGS[27] = uString::Const("Linear");
    ::STRINGS[28] = uString::Const("QuadraticIn");
    ::STRINGS[29] = uString::Const("QuadraticOut");
    ::STRINGS[30] = uString::Const("QuadraticInOut");
    ::STRINGS[31] = uString::Const("CubicIn");
    ::STRINGS[32] = uString::Const("CubicOut");
    ::STRINGS[33] = uString::Const("CubicInOut");
    ::STRINGS[34] = uString::Const("QuarticIn");
    ::STRINGS[35] = uString::Const("QuarticOut");
    ::STRINGS[36] = uString::Const("QuarticInOut");
    ::STRINGS[37] = uString::Const("QuinticIn");
    ::STRINGS[38] = uString::Const("QuinticOut");
    ::STRINGS[39] = uString::Const("QuinticInOut");
    ::STRINGS[40] = uString::Const("SinusoidalIn");
    ::STRINGS[41] = uString::Const("SinusoidalOut");
    ::STRINGS[42] = uString::Const("SinusoidalInOut");
    ::STRINGS[43] = uString::Const("ExponentialIn");
    ::STRINGS[44] = uString::Const("ExponentialOut");
    ::STRINGS[45] = uString::Const("ExponentialInOut");
    ::STRINGS[46] = uString::Const("CircularIn");
    ::STRINGS[47] = uString::Const("CircularOut");
    ::STRINGS[48] = uString::Const("CircularInOut");
    ::STRINGS[49] = uString::Const("ElasticIn");
    ::STRINGS[50] = uString::Const("ElasticOut");
    ::STRINGS[51] = uString::Const("ElasticInOut");
    ::STRINGS[52] = uString::Const("BackIn");
    ::STRINGS[53] = uString::Const("BackOut");
    ::STRINGS[54] = uString::Const("BackInOut");
    ::STRINGS[55] = uString::Const("BounceIn");
    ::STRINGS[56] = uString::Const("BounceOut");
    ::STRINGS[57] = uString::Const("BounceInOut");
    ::STRINGS[58] = uString::Const("Transparent");
    ::STRINGS[59] = uString::Const("Black");
    ::STRINGS[60] = uString::Const("Silver");
    ::STRINGS[61] = uString::Const("Gray");
    ::STRINGS[62] = uString::Const("White");
    ::STRINGS[63] = uString::Const("Maroon");
    ::STRINGS[64] = uString::Const("Red");
    ::STRINGS[65] = uString::Const("Purple");
    ::STRINGS[66] = uString::Const("Fuchsia");
    ::STRINGS[67] = uString::Const("Green");
    ::STRINGS[68] = uString::Const("Lime");
    ::STRINGS[69] = uString::Const("Olive");
    ::STRINGS[70] = uString::Const("Yellow");
    ::STRINGS[71] = uString::Const("Navy");
    ::STRINGS[72] = uString::Const("Blue");
    ::STRINGS[73] = uString::Const("Teal");
    ::STRINGS[74] = uString::Const("Aqua");
    ::STRINGS[75] = uString::Const("TopLeft");
    ::STRINGS[76] = uString::Const("Center");
    ::STRINGS[77] = uString::Const("Anchor");
    ::STRINGS[78] = uString::Const("HorizontalBoxCenter");
    ::STRINGS[79] = uString::Const("VerticalBoxCenter");
    ::STRINGS[80] = uString::Const("TransformOriginOffset");
    ::STRINGS[81] = uString::Const("PositionOffset");
    ::STRINGS[82] = uString::Const("SizeFactor");
    ::STRINGS[83] = uString::Const("Size");
    ::STRINGS[84] = uString::Const("GiveFocus");
    ::STRINGS[85] = uString::Const("Keyboard");
    ::STRINGS[86] = uString::Const("LayoutChange");
    ::STRINGS[87] = uString::Const("WorldPositionChange");
    ::STRINGS[88] = uString::Const("PositionChange");
    ::STRINGS[89] = uString::Const("SizeChange");
    ::STRINGS[90] = uString::Const("Points");
    ::STRINGS[91] = uString::Const("Pixels");
    ::STRINGS[92] = uString::Const("ContentSize");
    ::STRINGS[93] = uString::Const("ScrollViewSize");
    ::STRINGS[94] = uString::Const("PreloadRetain");
    ::STRINGS[95] = uString::Const("UnloadUnused");
    ::STRINGS[96] = uString::Const("QuickUnload");
    ::STRINGS[97] = uString::Const("UnloadInBackground");
    ::STRINGS[98] = uString::Const("Thin");
    ::STRINGS[99] = uString::Const("Light");
    ::STRINGS[100] = uString::Const("Regular");
    ::STRINGS[101] = uString::Const("Medium");
    ::STRINGS[102] = uString::Const("Bold");
    ::STRINGS[103] = uString::Const("ThinItalic");
    ::STRINGS[104] = uString::Const("LightItalic");
    ::STRINGS[105] = uString::Const("Italic");
    ::STRINGS[106] = uString::Const("MediumItalic");
    ::STRINGS[107] = uString::Const("BoldItalic");
    ::STRINGS[108] = uString::Const("PlatformDefault");
    ::STRINGS[109] = uString::Const("Identity");
    ::STRINGS[110] = uString::Const("Local");
    ::STRINGS[111] = uString::Const("ParentSize");
    ::STRINGS[112] = uString::Const("Width");
    ::STRINGS[113] = uString::Const("Height");
    ::STRINGS[114] = uString::Const("FontAwesome");
    ::STRINGS[115] = uString::Const("size.XXS");
    ::STRINGS[116] = uString::Const("size.XS");
    ::STRINGS[117] = uString::Const("size.S");
    ::STRINGS[118] = uString::Const("size.M");
    ::STRINGS[119] = uString::Const("size.L");
    ::STRINGS[120] = uString::Const("size.XL");
    ::STRINGS[121] = uString::Const("color.Green");
    ::STRINGS[122] = uString::Const("color.Gray");
    ::STRINGS[123] = uString::Const("color.GrayDark");
    ::STRINGS[124] = uString::Const("color.White");
    ::STRINGS[125] = uString::Const("color.Red");
    ::STRINGS[126] = uString::Const("color.Blue");
    ::STRINGS[127] = uString::Const("color.DarkBlue");
    ::STRINGS[128] = uString::Const("color.Black");
    ::STRINGS[129] = uString::Const("color.GrayLight");
    ::STRINGS[130] = uString::Const("RegularFont");
    ::STRINGS[131] = uString::Const("BaseFont");
    ::STRINGS[132] = uString::Const("BoldFont");
    ::STRINGS[133] = uString::Const("goToProfile");
    ::STRINGS[134] = uString::Const("goToNotifications");
    ::STRINGS[135] = uString::Const("MainView.ux");
    ::STRINGS[136] = uString::Const("1*, 15");
    ::STRINGS[137] = uString::Const("Mario Rossi");
    ::STRINGS[138] = uString::Const("Credito");
    ::STRINGS[139] = uString::Const("174,00 \342\202\254");
    ::STRINGS[140] = uString::Const("1,1*");
    ::STRINGS[141] = uString::Const("Profilo");
    ::STRINGS[142] = uString::Const("1,1*,1");
    ::STRINGS[143] = uString::Const("Notifiche");
    ::STRINGS[144] = uString::Const("2");
    ::STRINGS[145] = uString::Const("Logout");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Controls::DockPanel_typeof(),
        ::g::Fuse::Navigation::EdgeNavigation_typeof());
    type->SetInterfaces(
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::AppBase_type, interface0));
    type->SetFields(11,
        ::g::Uno::UX::NameTable_typeof(), offsetof(MainView, __g_nametable1), 0,
        ::g::BottomBar_typeof(), offsetof(MainView, bottomBar), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(MainView, bottomBar_Visibility_inst), 0,
        ::g::HomePage_typeof(), offsetof(MainView, home), 0,
        ::g::InfoPage_typeof(), offsetof(MainView, info), 0,
        ::g::MerchantProfilePage_typeof(), offsetof(MainView, merchantProfile), 0,
        ::g::MerchantsListPage_typeof(), offsetof(MainView, merchants), 0,
        ::g::MyCouponPage_typeof(), offsetof(MainView, myCoupon), 0,
        ::g::NavBar_typeof(), offsetof(MainView, navBar), 0,
        ::g::NewCouponMerchantStep1Page_typeof(), offsetof(MainView, newCouponMerchantStep1), 0,
        ::g::NewCouponMerchantStep2Page_typeof(), offsetof(MainView, newCouponMerchantStep2), 0,
        ::g::NewCouponMerchantStep3Page_typeof(), offsetof(MainView, newCouponMerchantStep3), 0,
        ::g::NewCouponMerchantStep4Page_typeof(), offsetof(MainView, newCouponMerchantStep4), 0,
        ::g::NewCouponStep1Page_typeof(), offsetof(MainView, newCouponStep1), 0,
        ::g::NewCouponStep2Page_typeof(), offsetof(MainView, newCouponStep2), 0,
        ::g::NewCouponStep3Page_typeof(), offsetof(MainView, newCouponStep3), 0,
        ::g::NewCouponStep4Page_typeof(), offsetof(MainView, newCouponStep4), 0,
        ::g::NotificationsPage_typeof(), offsetof(MainView, notifications), 0,
        ::g::ProfilePage_typeof(), offsetof(MainView, profile), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(MainView, router), 0,
        ::g::Fuse::Controls::Shadow_typeof(), offsetof(MainView, shadow), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(MainView, shadow_Color_inst), 0,
        ::g::Fuse::Controls::DockPanel_typeof(), offsetof(MainView, sidebar), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(MainView, sidebarFade), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(MainView, sidebarFade_Opacity_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb0), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(MainView, temp_eb1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&MainView::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector11_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector12_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector13_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector14_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector15_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector16_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector17_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector18_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector19_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector20_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector21_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector22_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector23_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector24_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView::__selector9_, uFieldFlagsStatic);
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::App_typeof();
    options.FieldCount = 64;
    options.InterfaceCount = 1;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->fp_build_ = MainView_build;
    type->fp_ctor_ = (void*)MainView__New2_fn;
    type->fp_cctor_ = MainView__cctor_1_fn;
    type->interface0.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::AppBase__get_Properties_fn;
    return type;
}

// public MainView() :186
void MainView__ctor_4_fn(MainView* __this)
{
    __this->ctor_4();
}

// private void InitializeUX() :190
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :186
void MainView__New2_fn(MainView** __retval)
{
    *__retval = MainView::New2();
}

uSStrong<uArray*> MainView::__g_static_nametable1_;
::g::Uno::UX::Selector MainView::__selector0_;
::g::Uno::UX::Selector MainView::__selector1_;
::g::Uno::UX::Selector MainView::__selector10_;
::g::Uno::UX::Selector MainView::__selector11_;
::g::Uno::UX::Selector MainView::__selector12_;
::g::Uno::UX::Selector MainView::__selector13_;
::g::Uno::UX::Selector MainView::__selector14_;
::g::Uno::UX::Selector MainView::__selector15_;
::g::Uno::UX::Selector MainView::__selector16_;
::g::Uno::UX::Selector MainView::__selector17_;
::g::Uno::UX::Selector MainView::__selector18_;
::g::Uno::UX::Selector MainView::__selector19_;
::g::Uno::UX::Selector MainView::__selector2_;
::g::Uno::UX::Selector MainView::__selector20_;
::g::Uno::UX::Selector MainView::__selector21_;
::g::Uno::UX::Selector MainView::__selector22_;
::g::Uno::UX::Selector MainView::__selector23_;
::g::Uno::UX::Selector MainView::__selector24_;
::g::Uno::UX::Selector MainView::__selector3_;
::g::Uno::UX::Selector MainView::__selector4_;
::g::Uno::UX::Selector MainView::__selector5_;
::g::Uno::UX::Selector MainView::__selector6_;
::g::Uno::UX::Selector MainView::__selector7_;
::g::Uno::UX::Selector MainView::__selector8_;
::g::Uno::UX::Selector MainView::__selector9_;

// public MainView() [instance] :186
void MainView::ctor_4()
{
    ctor_3();
    InitializeUX();
}

// private void InitializeUX() [instance] :190
void MainView::InitializeUX()
{
    ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule* temp = ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule::New2();
    ::g::Fuse::Reactive::FuseJS::Http* temp1 = ::g::Fuse::Reactive::FuseJS::Http::New2();
    ::g::Fuse::Reactive::FuseJS::TimerModule* temp2 = ::g::Fuse::Reactive::FuseJS::TimerModule::New2();
    ::g::Fuse::Reactive::FuseJS::Email* temp3 = ::g::Fuse::Reactive::FuseJS::Email::New2();
    ::g::Fuse::Reactive::FuseJS::InterApp* temp4 = ::g::Fuse::Reactive::FuseJS::InterApp::New3();
    ::g::Fuse::Reactive::FuseJS::Maps* temp5 = ::g::Fuse::Reactive::FuseJS::Maps::New2();
    ::g::Fuse::Reactive::FuseJS::Phone* temp6 = ::g::Fuse::Reactive::FuseJS::Phone::New2();
    ::g::Fuse::Drawing::BrushConverter* temp7 = ::g::Fuse::Drawing::BrushConverter::New1();
    ::g::Fuse::Triggers::BusyTaskModule* temp8 = ::g::Fuse::Triggers::BusyTaskModule::New2();
    ::g::Fuse::Testing::UnoTestingHelper* temp9 = ::g::Fuse::Testing::UnoTestingHelper::New2();
    ::g::Fuse::FileSystem::FileSystemModule* temp10 = ::g::Fuse::FileSystem::FileSystemModule::New2();
    ::g::Fuse::Storage::StorageModule* temp11 = ::g::Fuse::Storage::StorageModule::New2();
    ::g::Fuse::WebSocket::WebSocketClientModule* temp12 = ::g::Fuse::WebSocket::WebSocketClientModule::New2();
    ::g::Polyfills::Window::WindowModule* temp13 = ::g::Polyfills::Window::WindowModule::New3();
    ::g::FuseJS::Globals* temp14 = ::g::FuseJS::Globals::New2();
    ::g::FuseJS::Lifecycle* temp15 = ::g::FuseJS::Lifecycle::New3();
    ::g::FuseJS::Environment* temp16 = ::g::FuseJS::Environment::New2();
    ::g::FuseJS::Base64* temp17 = ::g::FuseJS::Base64::New2();
    ::g::FuseJS::Bundle* temp18 = ::g::FuseJS::Bundle::New2();
    ::g::FuseJS::FileReaderImpl* temp19 = ::g::FuseJS::FileReaderImpl::New2();
    ::g::FuseJS::UserEvents* temp20 = ::g::FuseJS::UserEvents::New2();
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MainView::__g_static_nametable1_);
    shadow = ::g::Fuse::Controls::Shadow::New2();
    shadow_Color_inst = ::g::app18_FuseControlsShadow_Color_Property::New1(shadow, MainView::__selector0_);
    sidebarFade = ::g::Fuse::Controls::Rectangle::New3();
    sidebarFade_Opacity_inst = ::g::app18_FuseElementsElement_Opacity_Property::New1(sidebarFade, MainView::__selector1_);
    ::g::Fuse::Reactive::Data* temp21 = ::g::Fuse::Reactive::Data::New1(::STRINGS[133/*"goToProfile"*/]);
    ::g::Fuse::Reactive::Data* temp22 = ::g::Fuse::Reactive::Data::New1(::STRINGS[134/*"goToNotific...*/]);
    router = ::g::Fuse::Navigation::Router::New2();
    navBar = ::g::NavBar::New4(router);
    bottomBar = ::g::BottomBar::New5();
    bottomBar_Visibility_inst = ::g::app18_FuseElementsElement_Visibility_Property::New1(bottomBar, MainView::__selector2_);
    ::g::Fuse::iOS::StatusBarConfig* temp23 = ::g::Fuse::iOS::StatusBarConfig::New2();
    ::g::Fuse::Android::StatusBarConfig* temp24 = ::g::Fuse::Android::StatusBarConfig::New2();
    ::g::Fuse::Reactive::JavaScript* temp25 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::EdgeNavigator* temp26 = ::g::Fuse::Controls::EdgeNavigator::New4();
    sidebar = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Navigation::ActivatingAnimation* temp27 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Change* temp28 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float4>*/], shadow_Color_inst);
    ::g::Fuse::Animations::Change* temp29 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], sidebarFade_Opacity_inst);
    ::g::Fuse::Controls::Panel* temp30 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp31 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp32 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp33 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Panel* temp34 = ::g::Fuse::Controls::Panel::New3();
    ::g::CloseIcon* temp35 = ::g::CloseIcon::New4();
    ::g::Fuse::Gestures::Clicked* temp36 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Navigation::NavigateToggle* temp37 = ::g::Fuse::Navigation::NavigateToggle::New2();
    ::g::Fuse::Controls::Text* temp38 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp39 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp40 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::Panel* temp41 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp42 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Grid* temp43 = ::g::Fuse::Controls::Grid::New4();
    ::g::ProfileIcon* temp44 = ::g::ProfileIcon::New4();
    ::g::Fuse::Controls::Text* temp45 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp46 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Navigation::NavigateToggle* temp47 = ::g::Fuse::Navigation::NavigateToggle::New2();
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp21);
    ::g::Separator* temp48 = ::g::Separator::New4();
    ::g::Fuse::Controls::Grid* temp49 = ::g::Fuse::Controls::Grid::New4();
    ::g::NotificationsIcon* temp50 = ::g::NotificationsIcon::New4();
    ::g::Fuse::Controls::Text* temp51 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::StackPanel* temp52 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Circle* temp53 = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Controls::Text* temp54 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp55 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Navigation::NavigateToggle* temp56 = ::g::Fuse::Navigation::NavigateToggle::New2();
    temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp22);
    ::g::Separator* temp57 = ::g::Separator::New4();
    ::g::Fuse::Controls::Grid* temp58 = ::g::Fuse::Controls::Grid::New4();
    ::g::LogoutIcon* temp59 = ::g::LogoutIcon::New4();
    ::g::Fuse::Controls::Text* temp60 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp61 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Navigation::NavigateToggle* temp62 = ::g::Fuse::Navigation::NavigateToggle::New2();
    ::g::Separator* temp63 = ::g::Separator::New4();
    ::g::Fuse::Drawing::StaticSolidColor* temp64 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.4f, 0.8f, 1.0f));
    ::g::Fuse::Controls::DockPanel* temp65 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::StatusBarBackground* temp66 = ::g::Fuse::Controls::StatusBarBackground::New3();
    ::g::Fuse::Controls::DockPanel* temp67 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Triggers::OnUserEvent* temp68 = ::g::Fuse::Triggers::OnUserEvent::New2();
    ::g::Fuse::Navigation::NavigateToggle* temp69 = ::g::Fuse::Navigation::NavigateToggle::New2();
    ::g::Fuse::Controls::Navigator* temp70 = ::g::Fuse::Controls::Navigator::New4();
    home = ::g::HomePage::New6(router, navBar);
    ::g::Fuse::Drawing::StaticSolidColor* temp71 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    newCouponStep1 = ::g::NewCouponStep1Page::New6(router, navBar);
    ::g::Fuse::Drawing::StaticSolidColor* temp72 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    newCouponStep2 = ::g::NewCouponStep2Page::New6(router, navBar);
    ::g::Fuse::Drawing::StaticSolidColor* temp73 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    newCouponStep3 = ::g::NewCouponStep3Page::New6(router, navBar);
    ::g::Fuse::Drawing::StaticSolidColor* temp74 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    newCouponStep4 = ::g::NewCouponStep4Page::New6(router, navBar);
    ::g::Fuse::Drawing::StaticSolidColor* temp75 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    myCoupon = ::g::MyCouponPage::New6(router, navBar);
    ::g::Fuse::Drawing::StaticSolidColor* temp76 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    merchants = ::g::MerchantsListPage::New6(router, navBar);
    ::g::Fuse::Drawing::StaticSolidColor* temp77 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    merchantProfile = ::g::MerchantProfilePage::New6(router, navBar);
    ::g::Fuse::Drawing::StaticSolidColor* temp78 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    newCouponMerchantStep1 = ::g::NewCouponMerchantStep1Page::New6(router, navBar);
    ::g::Fuse::Drawing::StaticSolidColor* temp79 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    newCouponMerchantStep2 = ::g::NewCouponMerchantStep2Page::New6(router, navBar);
    ::g::Fuse::Drawing::StaticSolidColor* temp80 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    newCouponMerchantStep3 = ::g::NewCouponMerchantStep3Page::New6(router, navBar);
    ::g::Fuse::Drawing::StaticSolidColor* temp81 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    newCouponMerchantStep4 = ::g::NewCouponMerchantStep4Page::New6(router, navBar);
    ::g::Fuse::Drawing::StaticSolidColor* temp82 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    info = ::g::InfoPage::New6(router, navBar);
    ::g::Fuse::Drawing::StaticSolidColor* temp83 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    profile = ::g::ProfilePage::New6(router, navBar);
    ::g::Fuse::Drawing::StaticSolidColor* temp84 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    notifications = ::g::NotificationsPage::New6(router, navBar);
    ::g::Fuse::Drawing::StaticSolidColor* temp85 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Triggers::WhileKeyboardVisible* temp86 = ::g::Fuse::Triggers::WhileKeyboardVisible::New2();
    ::g::Fuse::Animations::Change* temp87 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[3/*Fuse.Animations.Change<Fuse.Elements.Visibility>*/], bottomBar_Visibility_inst);
    ::g::Fuse::Controls::BottomBarBackground* temp88 = ::g::Fuse::Controls::BottomBarBackground::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp89 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.4f, 0.8f, 1.0f));
    temp23->IsVisible(true);
    temp23->Style(1);
    temp24->Color(::g::Uno::Float4__New2(0.0f, 0.4f, 0.8f, 1.0f));
    temp24->IsVisible(true);
    temp25->LineNumber(5);
    temp25->FileName(::STRINGS[135/*"MainView.ux"*/]);
    temp25->File(::g::Uno::UX::BundleFileSource::New1(::g::app18_bundle::MainFunction9d15fdb1()));
    uPtr(router)->Name(MainView::__selector3_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), sidebar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp65);
    uPtr(sidebar)->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(sidebar)->Margin(::g::Uno::Float4__New2(56.0f, 0.0f, 0.0f, 0.0f));
    uPtr(sidebar)->Name(MainView::__selector4_);
    ::g::Fuse::Navigation::EdgeNavigation::SetEdge(sidebar, 1);
    uPtr(sidebar)->Background(temp64);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), shadow);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    uPtr(shadow)->Angle(0.0f);
    uPtr(shadow)->Distance(16.0f);
    uPtr(shadow)->Size(32.0f);
    uPtr(shadow)->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    uPtr(shadow)->Name(MainView::__selector5_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Animators()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Animators()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp29);
    ::g::Fuse::Animations::Change__set_Value_fn(temp28, uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.2666667f)));
    ::g::Fuse::Animations::Change__set_Value_fn(temp29, uCRef(1.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp30, 2);
    temp30->Background(temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    temp31->Margin(::g::Uno::Float4__New2(0.0f, 40.0f, 0.0f, 0.0f));
    temp31->Padding(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp39);
    temp32->Columns(::STRINGS[136/*"1*, 15"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    temp33->Value(::STRINGS[137/*"Mario Rossi"*/]);
    temp33->FontSize(20.0f);
    temp33->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp33->Alignment(9);
    temp34->HitTestMode(6);
    temp34->Width(::g::Uno::UX::Size__New1(50.0f, 1));
    temp34->Alignment(10);
    temp34->Padding(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Actions()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp37);
    temp37->Target(sidebar);
    temp38->Value(::STRINGS[138/*"Credito"*/]);
    temp38->FontSize(14.0f);
    temp38->Color(::g::Uno::Float4__New2(0.3529412f, 0.4039216f, 0.4470588f, 1.0f));
    temp38->Margin(::g::Uno::Float4__New2(0.0f, 40.0f, 0.0f, 0.0f));
    temp39->Value(::STRINGS[139/*"174,00 €"*/]);
    temp39->FontSize(20.0f);
    temp39->Color(::g::Uno::Float4__New2(0.3529412f, 0.4039216f, 0.4470588f, 1.0f));
    temp39->Font(::g::StaticResources::BaseFont());
    temp41->Margin(::g::Uno::Float4__New2(35.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp49);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp57);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp58);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp63);
    temp43->Columns(::STRINGS[140/*"1,1*"*/]);
    temp43->CellSpacing(20.0f);
    temp43->HitTestMode(6);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp43, uDelegate::New(::TYPES[7/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb0);
    temp44->Alignment(10);
    temp45->Value(::STRINGS[141/*"Profilo"*/]);
    temp45->FontSize(16.0f);
    temp45->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp45->Margin(::g::Uno::Float4__New2(0.0f, 15.0f, 0.0f, 15.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Actions()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp47);
    temp47->Target(sidebar);
    temp48->Color(::g::Uno::Float4__New2(0.03921569f, 0.2666667f, 0.5647059f, 1.0f));
    temp49->Columns(::STRINGS[142/*"1,1*,1"*/]);
    temp49->CellSpacing(20.0f);
    temp49->HitTestMode(6);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp49, uDelegate::New(::TYPES[7/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb1)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp52);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp55);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb1);
    temp50->Alignment(10);
    temp51->Value(::STRINGS[143/*"Notifiche"*/]);
    temp51->FontSize(16.0f);
    temp51->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp51->Margin(::g::Uno::Float4__New2(0.0f, 15.0f, 0.0f, 15.0f));
    temp52->Margin(::g::Uno::Float4__New2(-50.0f, 10.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp54);
    temp53->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp53->Width(::g::Uno::UX::Size__New1(25.0f, 1));
    temp53->Height(::g::Uno::UX::Size__New1(25.0f, 1));
    temp54->Value(::STRINGS[144/*"2"*/]);
    temp54->TextAlignment(1);
    temp54->Color(::g::Uno::Float4__New2(0.0f, 0.4f, 0.8f, 1.0f));
    temp54->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp54->Layer(3);
    temp54->Font(::g::StaticResources::BoldFont());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp55->Actions()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp56);
    temp56->Target(sidebar);
    temp57->Color(::g::Uno::Float4__New2(0.03921569f, 0.2666667f, 0.5647059f, 1.0f));
    temp58->Columns(::STRINGS[140/*"1,1*"*/]);
    temp58->CellSpacing(20.0f);
    temp58->HitTestMode(6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp59);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp60);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp61);
    temp59->Alignment(10);
    temp60->Value(::STRINGS[145/*"Logout"*/]);
    temp60->FontSize(16.0f);
    temp60->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp60->Margin(::g::Uno::Float4__New2(0.0f, 15.0f, 0.0f, 15.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp61->Actions()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp62);
    temp62->Target(sidebar);
    temp63->Color(::g::Uno::Float4__New2(0.03921569f, 0.2666667f, 0.5647059f, 1.0f));
    temp65->Background(temp89);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp65->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp66);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp65->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp67);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp65->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp88);
    ::g::Fuse::Controls::DockPanel::SetDock(temp66, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp67->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), navBar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp67->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), sidebarFade);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp67->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp70);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp67->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), bottomBar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp67->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp86);
    uPtr(navBar)->Name(MainView::__selector6_);
    ::g::Fuse::Controls::DockPanel::SetDock(navBar, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navBar)->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp68);
    temp68->EventName(MainView::__selector7_);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp68->Actions()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp69);
    temp69->Target(sidebar);
    uPtr(sidebarFade)->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.2f));
    uPtr(sidebarFade)->HitTestMode(0);
    uPtr(sidebarFade)->Opacity(0.0f);
    uPtr(sidebarFade)->Layer(3);
    uPtr(sidebarFade)->Name(MainView::__selector8_);
    temp70->DefaultPath(::STRINGS[7/*"home"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp70->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), home);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp70->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), newCouponStep1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp70->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), newCouponStep2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp70->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), newCouponStep3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp70->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), newCouponStep4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp70->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), myCoupon);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp70->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), merchants);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp70->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), merchantProfile);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp70->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), newCouponMerchantStep1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp70->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), newCouponMerchantStep2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp70->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), newCouponMerchantStep3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp70->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), newCouponMerchantStep4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp70->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), info);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp70->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), profile);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp70->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), notifications);
    uPtr(home)->Name(MainView::__selector9_);
    uPtr(home)->Background(temp71);
    uPtr(newCouponStep1)->Name(MainView::__selector10_);
    uPtr(newCouponStep1)->Background(temp72);
    uPtr(newCouponStep2)->Name(MainView::__selector11_);
    uPtr(newCouponStep2)->Background(temp73);
    uPtr(newCouponStep3)->Name(MainView::__selector12_);
    uPtr(newCouponStep3)->Background(temp74);
    uPtr(newCouponStep4)->Name(MainView::__selector13_);
    uPtr(newCouponStep4)->Background(temp75);
    uPtr(myCoupon)->Name(MainView::__selector14_);
    uPtr(myCoupon)->Background(temp76);
    uPtr(merchants)->Name(MainView::__selector15_);
    uPtr(merchants)->Background(temp77);
    uPtr(merchantProfile)->Name(MainView::__selector16_);
    uPtr(merchantProfile)->Background(temp78);
    uPtr(newCouponMerchantStep1)->Name(MainView::__selector17_);
    uPtr(newCouponMerchantStep1)->Background(temp79);
    uPtr(newCouponMerchantStep2)->Name(MainView::__selector18_);
    uPtr(newCouponMerchantStep2)->Background(temp80);
    uPtr(newCouponMerchantStep3)->Name(MainView::__selector19_);
    uPtr(newCouponMerchantStep3)->Background(temp81);
    uPtr(newCouponMerchantStep4)->Name(MainView::__selector20_);
    uPtr(newCouponMerchantStep4)->Background(temp82);
    uPtr(info)->Name(MainView::__selector21_);
    uPtr(info)->Background(temp83);
    uPtr(profile)->Name(MainView::__selector22_);
    uPtr(profile)->Background(temp84);
    uPtr(notifications)->Name(MainView::__selector23_);
    uPtr(notifications)->Background(temp85);
    uPtr(bottomBar)->Name(MainView::__selector24_);
    ::g::Fuse::Controls::DockPanel::SetDock(bottomBar, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp86->Animators()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp87);
    ::g::Fuse::Animations::Change__set_Value_fn(temp87, uCRef<int>(1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp88, 3);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), sidebar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), shadow);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), temp_eb0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), temp_eb1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), navBar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), sidebarFade);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), home);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), newCouponStep1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), newCouponStep2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), newCouponStep3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), newCouponStep4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), myCoupon);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), merchants);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), merchantProfile);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), newCouponMerchantStep1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), newCouponMerchantStep2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), newCouponMerchantStep3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), newCouponMerchantStep4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), info);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), profile);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), notifications);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[9/*Uno.Collections.ICollection<object>*/]), bottomBar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
}

// public MainView New() [static] :186
MainView* MainView::New2()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

} // ::g
