#include <Uno/Uno.h>

#include <Fuse.Platform.SystemUI.h>
#include <Fuse.Platform.SystemUIWillResizeEventArgs.h>
#include <ObjC.Object.h>
#include <Uno.Platform.iOS.Support.h>
#include <Fuse.Platform.SystemUI.h>

#include <AppDelegateStatusBar.h>

@implementation uAppDelegate (StatusBar)

// On iOS 8 this is only called when Status Bar changes in response to external
// events
- (void)application:(UIApplication *)application willChangeStatusBarFrame:(CGRect)frame
{
	uAutoReleasePool pool;
	::g::Fuse::Platform::SystemUI::_statusBarWillChangeFrame(frame, 0);
}

- (BOOL)prefersStatusBarHidden
{
	uAutoReleasePool pool;
	return !::g::Fuse::Platform::SystemUI::IsTopFrameVisible();
}

- (UIStatusBarStyle)preferredStatusBarStyle
{
	uAutoReleasePool pool;
	return (UIStatusBarStyle)::g::Fuse::Platform::SystemUI::uStatusBarStyle1();
}

- (UIStatusBarAnimation)preferredStatusBarUpdateAnimation
{
	uAutoReleasePool pool;
	return (UIStatusBarAnimation)::g::Fuse::Platform::SystemUI::uStatusBarAnimation1();
}
@end
