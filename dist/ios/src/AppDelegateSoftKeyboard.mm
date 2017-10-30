#include <Uno/Uno.h>

#include <Fuse.Platform.SystemUI.h>
#include <Fuse.Platform.SystemUIWillResizeEventArgs.h>
#include <ObjC.Object.h>

#include <AppDelegateSoftKeyboard.h>

@implementation uAppDelegate (SoftKeyboard)

- (void)uKeyboardWillChangeFrame:(NSNotification *)notification
{
	uAutoReleasePool pool;
	CGRect frameBegin = [[notification.userInfo objectForKey:UIKeyboardFrameBeginUserInfoKey] CGRectValue];
	CGRect frameEnd = [[notification.userInfo objectForKey:UIKeyboardFrameEndUserInfoKey] CGRectValue];
	double animationDuration = [[notification.userInfo objectForKey:UIKeyboardAnimationDurationUserInfoKey] doubleValue];
	UIViewAnimationCurve animationCurve = (UIViewAnimationCurve) [[notification.userInfo objectForKey:UIKeyboardAnimationCurveUserInfoKey] integerValue];

	int resizeReason;

	if (notification.name == UIKeyboardWillShowNotification)
		resizeReason = 0;
	else if (notification.name == UIKeyboardWillHideNotification)
	{
		resizeReason = 2;
		frameEnd.size.height = 0.;
	}
	else // UIKeyboardWillChangeFrameNotification
		resizeReason = 1;	
	
	::g::Fuse::Platform::SystemUI::uKeyboardWillChangeFrame1(frameBegin, frameEnd, animationDuration, animationCurve, resizeReason);
}

@end
